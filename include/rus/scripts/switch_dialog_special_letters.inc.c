#include "rus/scripts/switch_special_letters.inc.c"
case DIALOG_CHANGE_POSITION_Y:
	change_dialog_position_y(gDialogID, RENDER_DIALOG_CHAR_OPTIONS_INDEXES);
	break;
case DIALOG_CHANGE_SIMULFIX_IN_WORD_ZVEZDA:
	render_dialog_char_morpheme_count_rus(ASCII_TO_DIALOG('e'), ASCII_TO_DIALOG('e'), DIALOG_CHAR_CYRILLIC_SMALL_IO, RENDER_DIALOG_CHAR_OPTIONS_INDEXES);
	break;
case DIALOG_CHANGE_SUFFIX_IN_WORD_ZVEZDA:
	render_dialog_char_morpheme_count_rus(ASCII_TO_DIALOG('a'), DIALOG_CHAR_CYRILLIC_SMALL_YERU, DIALOG_CHAR_NONE, RENDER_DIALOG_CHAR_OPTIONS_INDEXES);
	break;
