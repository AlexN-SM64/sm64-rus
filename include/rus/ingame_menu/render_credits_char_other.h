#ifndef RUS_INGAME_MENU_RENDER_CREDITS_CHAR_OTHER_H
#define RUS_INGAME_MENU_RENDER_CREDITS_CHAR_OTHER_H

if (str[strPos] == CREDITS_CHAR_CYRILLIC_IO) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[ASCII_TO_DIALOG('E')]);
} else if (str[strPos] == CREDITS_CHAR_CYRILLIC_I_SHORT) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[CREDITS_CHAR_CYRILLIC_I]);
} else {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[str[strPos]]);
}
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, curY << 2, (curX + 8) << 2,
                        (curY + 8) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

if (str[strPos] == CREDITS_CHAR_CYRILLIC_IO) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[CREDITS_CHAR_DIAERESIS]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY - 8) << 2, (curX + 8) << 2,
                        curY << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
} else if (str[strPos] == CREDITS_CHAR_CYRILLIC_I_SHORT) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[CREDITS_CHAR_BREVE]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY - 8) << 2, (curX + 8) << 2,
                        curY << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
}

if (str[strPos] == CREDITS_CHAR_CYRILLIC_DE) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[CREDITS_CHAR_UNDERSYM_LEFT]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY + 8) << 2, (curX + 8) << 2,
                        (curY + 16) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
}

if (str[strPos] == CREDITS_CHAR_CYRILLIC_DE || str[strPos] == CREDITS_CHAR_CYRILLIC_TSE || str[strPos] == CREDITS_CHAR_CYRILLIC_SHCHA) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, fontLUT[CREDITS_CHAR_UNDERSYM_RIGHT]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_16b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY + 8) << 2, (curX + 8) << 2,
                        (curY + 16) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
}

#endif
