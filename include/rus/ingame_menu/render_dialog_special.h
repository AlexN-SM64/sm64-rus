#ifndef RUS_INGAME_MENU_RENDER_DIALOG_SPECIAL_H
#define RUS_INGAME_MENU_RENDER_DIALOG_SPECIAL_H

void change_dialog_position_y(s16 dialogID,
#include "rus/render_dialog_char_options_initialize.h"
) {
	s16 dialogIDs[] = { DIALOG_008, DIALOG_161 };
	f32 yPositions[] = { -3, -1 };
	s16 i = 0;
	while (dialogIDs[i] != dialogID) {
		i += 1;
	}
#include "rus/render_dialog_char_options_start.h"
		create_dl_translation_matrix(MENU_MTX_NOPUSH, 0, yPositions[i], 0);
#include "rus/render_dialog_char_options_end.h"
}

void render_dialog_char_morpheme_count_rus(u8 letterIS, u8 letterRS, u8 letterRP,
#include "rus/render_dialog_char_options_initialize.h"
) {

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

#include "rus/render_dialog_char_options_start.h"
	
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
	
#include "rus/render_dialog_char_options_end.h"
}

#endif // This will be used in "src/game/ingame_menu.c"
