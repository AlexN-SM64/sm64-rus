#ifndef RUS_INGAME_MENU_RENDER_MENU_CHAR_OTHER_H
#define RUS_INGAME_MENU_RENDER_MENU_CHAR_OTHER_H

if (mark != DIALOG_MARK_NONE) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_IA, G_IM_SIZ_8b, 1, fontLUT[mark + 0x5F]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_8b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY - 8) << 2, (curX + 8) << 2,
                                    curY << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);

    mark = DIALOG_MARK_NONE;
}

if (str[strPos] == DIALOG_CHAR_CYRILLIC_CAPITAL_DE) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_IA, G_IM_SIZ_8b, 1, fontLUT[MENU_CHAR_UNDERSYM_LEFT]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_8b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY + 8) << 2, (curX + 8) << 2,
                                    (curY + 16) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
}

if (str[strPos] == DIALOG_CHAR_CYRILLIC_CAPITAL_DE || str[strPos] == DIALOG_CHAR_CYRILLIC_CAPITAL_TSE || str[strPos] == DIALOG_CHAR_CYRILLIC_CAPITAL_SHCHA) {
    gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_IA, G_IM_SIZ_8b, 1, fontLUT[MENU_CHAR_UNDERSYM_RIGHT]);
    gDPLoadSync(gDisplayListHead++);
    gDPLoadBlock(gDisplayListHead++, G_TX_LOADTILE, 0, 0, 8 * 8 - 1, CALC_DXT(8, G_IM_SIZ_8b_BYTES));
    gSPTextureRectangle(gDisplayListHead++, (curX - 8 + gDialogCharWidths[str[strPos]]) << 2, (curY + 8) << 2, (curX + gDialogCharWidths[str[strPos]]) << 2,
                                    (curY + 16) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
}

#endif
