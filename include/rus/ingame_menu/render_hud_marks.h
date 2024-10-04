#ifndef RUS_INGAME_MENU_RENDER_HUD_MARKS_H
#define RUS_INGAME_MENU_RENDER_HUD_MARKS_H

if (mark != DIALOG_MARK_NONE) {
	gDPPipeSync(gDisplayListHead++);
	gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, hudLUT2[mark + 77]);
    gSPDisplayList(gDisplayListHead++, dl_rgba16_load_tex_block);
    gSPTextureRectangle(gDisplayListHead++, curX << 2, (curY - 3) << 2, (curX + 16) << 2,
                        (curY + 13) << 2, G_TX_RENDERTILE, 0, 0, 1 << 10, 1 << 10);
    mark = DIALOG_MARK_NONE;
}

#endif // This will be used in "src/game/ingame_menu.c"
