#ifndef RUS_INGAME_MENU_RENDER_MARKS_H
#define RUS_INGAME_MENU_RENDER_MARKS_H

if (mark != DIALOG_MARK_NONE) {
	if ((str[strPos] >= ASCII_TO_DIALOG('A') && str[strPos] <= ASCII_TO_DIALOG('Z')) || (str[strPos] >= DIALOG_CHAR_CYRILLIC_CAPITAL_BE && str[strPos] <= DIALOG_CHAR_CYRILLIC_CAPITAL_YA)) {
		create_dl_translation_matrix(MENU_MTX_NOPUSH, 1.0f, 4.0f, 0.0f);
	}
    render_generic_char(mark + 0x5F);
	if ((str[strPos] >= ASCII_TO_DIALOG('A') && str[strPos] <= ASCII_TO_DIALOG('Z')) || (str[strPos] >= DIALOG_CHAR_CYRILLIC_CAPITAL_BE && str[strPos] <= DIALOG_CHAR_CYRILLIC_CAPITAL_YA)) {
		create_dl_translation_matrix(MENU_MTX_NOPUSH, -1.0f, -4.0f, 0.0f);
	}
    mark = DIALOG_MARK_NONE;
}

#endif
