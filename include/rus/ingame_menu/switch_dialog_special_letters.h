#ifndef RUS_INGAME_MENU_SWITCH_DIALOG_SPECIAL_LETTERS_H
#define RUS_INGAME_MENU_SWITCH_DIALOG_SPECIAL_LETTERS_H

case DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT: // Й
    render_dialog_cyrillic_capital_diacritic(DIALOG_CHAR_CYRILLIC_CAPITAL_I, DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHAR_CYRILLIC_SMALL_I_SHORT: // й
	render_dialog_cyrillic_small_diacritic(ASCII_TO_DIALOG('u'), DIALOG_CHAR_CYRILLIC_SMALL_I_SHORT,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHAR_CYRILLIC_CAPITAL_IO: // Ё
	render_dialog_cyrillic_capital_diacritic(ASCII_TO_DIALOG('E'), DIALOG_CHAR_CYRILLIC_CAPITAL_IO,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHAR_CYRILLIC_SMALL_IO: // ё
	render_dialog_cyrillic_small_diacritic(ASCII_TO_DIALOG('e'), DIALOG_CHAR_CYRILLIC_CAPITAL_IO,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHAR_CYRILLIC_SMALL_TSE: // ц
	render_dialog_cyrillic_small_undersym(ASCII_TO_DIALOG('u'),
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHAR_CYRILLIC_SMALL_SHCHA: // щ
	render_dialog_cyrillic_small_undersym(DIALOG_CHAR_CYRILLIC_SMALL_SHA,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHANGE_POSITION_Y:
	change_dialog_position_y(gDialogID,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHANGE_SIMULFIX_IN_WORD_ZVEZDA:
	render_dialog_char_morpheme_count_rus(ASCII_TO_DIALOG('e'), ASCII_TO_DIALOG('e'), DIALOG_CHAR_CYRILLIC_SMALL_IO,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;
case DIALOG_CHANGE_SUFFIX_IN_WORD_ZVEZDA:
	render_dialog_char_morpheme_count_rus(ASCII_TO_DIALOG('a'), DIALOG_CHAR_CYRILLIC_SMALL_YERU, DIALOG_CHAR_NONE,
#include "rus/render_dialog_char_options_indexes.h"
	);
	break;

#endif // This will be used in "src/game/ingame_menu.c"
