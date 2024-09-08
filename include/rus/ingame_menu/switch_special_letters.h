#ifndef RUS_INGAME_MENU_SWITCH_SPECIAL_LETTERS_H
#define RUS_INGAME_MENU_SWITCH_SPECIAL_LETTERS_H

case DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT: // Й
    render_cyrillic_capital_diacritic(DIALOG_CHAR_CYRILLIC_CAPITAL_I, DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT);
	break;
case DIALOG_CHAR_CYRILLIC_SMALL_I_SHORT: // й
	render_cyrillic_small_diacritic(ASCII_TO_DIALOG('u'), DIALOG_CHAR_CYRILLIC_SMALL_I_SHORT);
	break;
case DIALOG_CHAR_CYRILLIC_CAPITAL_IO: // Ё
	render_cyrillic_capital_diacritic(ASCII_TO_DIALOG('E'), DIALOG_CHAR_CYRILLIC_CAPITAL_IO);
	break;
case DIALOG_CHAR_CYRILLIC_SMALL_IO: // ё
	render_cyrillic_small_diacritic(ASCII_TO_DIALOG('e'), DIALOG_CHAR_CYRILLIC_CAPITAL_IO);
	break;

#endif // This will be used in "src/game/ingame_menu.c"
