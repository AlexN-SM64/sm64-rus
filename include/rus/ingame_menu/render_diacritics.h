#ifndef RUS_INGAME_MENU_RENDER_DIACRITICS_H
#define RUS_INGAME_MENU_RENDER_DIACRITICS_H

void render_cyrillic_capital_diacritic(u8 letter, u8 diacritic) {
	render_generic_char(letter);
	create_dl_translation_matrix(MENU_MTX_NOPUSH, (f32)(1), 4.0f, 0.0f);
	render_generic_char(diacritic);
	create_dl_translation_matrix(MENU_MTX_NOPUSH, (f32)(gDialogCharWidths[letter] - 1), -4.0f, 0.0f);
}

void render_cyrillic_small_diacritic(u8 letter, u8 diacritic) {
	render_generic_char(letter);
	render_generic_char(diacritic);
	create_dl_translation_matrix(MENU_MTX_NOPUSH, (f32)(gDialogCharWidths[letter]), 0.0f, 0.0f);
}

#endif // This will be used in "src/game/ingame_menu.c"
