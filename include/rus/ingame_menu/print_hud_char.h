#ifndef RUS_INGAME_MENU_PRINT_HUD_CHAR_H
#define RUS_INGAME_MENU_PRINT_HUD_CHAR_H

void print_hud_char(s16 x, s16 y, u8 chr) {
	void **fontLUT = segmented_to_virtual(main_hud_lut);
	
	gDPPipeSync(gDisplayListHead++);
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[chr]);
    gSPDisplayList(gDisplayListHead++, dl_rgba16_load_tex_block);
    gSPTextureRectangle(gDisplayListHead++, x << 2, y << 2, (x + 16) << 2, (y + 16) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
}

#endif // This will be used in "src/game/ingame_menu.c"
