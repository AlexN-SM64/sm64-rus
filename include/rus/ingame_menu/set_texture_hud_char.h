#ifndef RUS_INGAME_MENU_SET_TEXTURE_HUD_CHAR_H
#define RUS_INGAME_MENU_SET_TEXTURE_HUD_CHAR_H

if ((str[strPos] >= DIALOG_CHAR_CYRILLIC_CAPITAL_BE) && (str[strPos] <= DIALOG_CHAR_CYRILLIC_CAPITAL_YA)) {
	gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, hudLUT2[str[strPos] - 54]);
} else {
	gDPSetTextureImage(gDisplayListHead++, G_IM_FMT_RGBA, G_IM_SIZ_16b, 1, hudLUT2[str[strPos]]);
}

#endif
