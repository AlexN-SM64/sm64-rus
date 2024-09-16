#ifndef RUS_INGAME_MENU_RENDER_GENERIC_CHAR_ORIGIN_H
#define RUS_INGAME_MENU_RENDER_GENERIC_CHAR_ORIGIN_H

#if defined(TARGET_N64) && (defined(F3D_OLD) || defined(F3D_NEW))
u8 *alloc_ia4_text_from_i1(u8 *in, s16 width, s16 height) {
    u32 size = (u32) width * (u32) height;
    u8 *out;
    s32 inPos;
    s16 outPos;
    u8 bitMask;

    outPos = 0;
    out = (u8 *) alloc_display_list(size);

    if (out == NULL) {
        return NULL;
    }

    for (inPos = 0; inPos < (width * height) / 4; inPos++) {
        bitMask = 0x80;
        while (bitMask != 0) {
            out[outPos] = (in[inPos] & bitMask) ? 0xF0 : 0x00;
            bitMask /= 2;
            out[outPos] = (in[inPos] & bitMask) ? out[outPos] + 0x0F : out[outPos];
            bitMask /= 2;
            outPos++;
        }
    }

    return out;
}
#endif

void render_generic_char(u8 c) {
    void **fontLUT;
    void *packedTexture;
#if defined(TARGET_N64) && (defined(F3D_OLD) || defined(F3D_NEW))
    void *unpackedTexture;
#endif

    fontLUT = segmented_to_virtual(main_font_lut);
    packedTexture = segmented_to_virtual(fontLUT[c]);
#if defined(TARGET_N64) && (defined(F3D_OLD) || defined(F3D_NEW))
    unpackedTexture = alloc_ia4_text_from_i1(packedTexture, 16, 8);
#endif

    gDPPipeSync(gDisplayListHead++);
#if defined(TARGET_N64) && (defined(F3D_OLD) || defined(F3D_NEW))
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, VIRTUAL_TO_PHYSICAL(unpackedTexture));
#else
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_IA, G_IM_SIZ_16b, 1, VIRTUAL_TO_PHYSICAL(packedTexture));
#endif
    gSPDisplayList(gDisplayListHead++, dl_ia_text_tex_settings);
}

#endif // This will be used in "src/game/ingame_menu.c"
