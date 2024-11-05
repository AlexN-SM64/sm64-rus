void change_dialog_position_y(s16 dialogID, RENDER_DIALOG_CHAR_OPTIONS_INITIALIZE) {
	s16 dialogIDs[] = { DIALOG_008, DIALOG_161 };
	f32 yPositions[] = { -3, -1 };
	s16 i = 0;
	while (dialogIDs[i] != dialogID) {
		i += 1;
	}
	RENDER_DIALOG_CHAR_OPTIONS_START
		create_dl_translation_matrix(MENU_MTX_NOPUSH, 0, yPositions[i], 0);
	RENDER_DIALOG_CHAR_OPTIONS_END
}

void render_dialog_char_morpheme_count_rus(u8 letterIS, u8 letterRS, u8 letterRP, RENDER_DIALOG_CHAR_OPTIONS_INITIALIZE) {

    s8 tensDigit = gDialogVariable / 10;
    s8 onesDigit = gDialogVariable - (tensDigit * 10);
	
	u8 curLetter = letterRP;
	
	if (tensDigit != 1) {
		if (onesDigit == 1) {
			curLetter = letterIS;
		}
		if (onesDigit >= 2 && onesDigit <= 4) {
			curLetter = letterRS;
		}
	}

	RENDER_DIALOG_CHAR_OPTIONS_START
	
	if (curLetter == DIALOG_CHAR_CYRILLIC_SMALL_IO) {
		render_generic_char(ASCII_TO_DIALOG('e'));
		render_generic_char(DIALOG_CHAR_DIAERESIS);
		create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[ASCII_TO_DIALOG('e')]), 0, 0);
		linePos += gDialogCharWidths[ASCII_TO_DIALOG('e')];
	} else if (curLetter != DIALOG_CHAR_NONE) {
		render_generic_char(curLetter);
		create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[curLetter]), 0, 0);
		linePos += gDialogCharWidths[curLetter];
	}
	
	RENDER_DIALOG_CHAR_OPTIONS_END
}
