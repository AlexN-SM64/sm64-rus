#ifndef RUS_INGAME_MENU_RENDER_DIALOG_SPECIAL_H
#define RUS_INGAME_MENU_RENDER_DIALOG_SPECIAL_H

void render_dialog_cyrillic_capital_diacritic(u8 letter, u8 diacritic, s8 lineNum, s16 *linePos, s8 linesPerBox, s8 xMatrix, s8 lowerBound) {
	if (lineNum >= lowerBound && lineNum <= (lowerBound + linesPerBox)) {
        if (linePos[0] != 0 || (xMatrix != 1)) {
            create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[DIALOG_CHAR_SPACE] * (xMatrix - 1)), 0, 0);
        }
		render_generic_char(letter);
		create_dl_translation_matrix(MENU_MTX_NOPUSH, 1, 4, 0);
		render_generic_char(diacritic);
		create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[letter] - 1), -4, 0);
	
		linePos += gDialogCharWidths[letter];
	}
}

void render_dialog_cyrillic_small_diacritic(u8 letter, u8 diacritic, s8 lineNum, s16 *linePos, s8 linesPerBox, s8 xMatrix, s8 lowerBound) {
	if (lineNum >= lowerBound && lineNum <= (lowerBound + linesPerBox)) {
        if (linePos[0] != 0 || (xMatrix != 1)) {
            create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[DIALOG_CHAR_SPACE] * (xMatrix - 1)), 0, 0);
        }
		render_generic_char(letter);
		render_generic_char(diacritic);
		create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[letter]), 0, 0);
	
		linePos += gDialogCharWidths[letter];
	}
}

void change_dialog_position_y_down(s8 lineNum, s16 *linePos, s8 linesPerBox, s8 xMatrix, s8 lowerBound) {
	if (lineNum >= lowerBound && lineNum <= (lowerBound + linesPerBox)) {
        if (linePos[0] != 0 || (xMatrix != 1)) {
            create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[DIALOG_CHAR_SPACE] * (xMatrix - 1)), 0, 0);
        }
		create_dl_translation_matrix(MENU_MTX_NOPUSH, 0, -3, 0);
	}
}

#endif // This will be used in "src/game/ingame_menu.c"
