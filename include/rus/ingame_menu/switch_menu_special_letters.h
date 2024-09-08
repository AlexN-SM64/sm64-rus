#ifndef RUS_INGAME_MENU_SWITCH_MENU_SPECIAL_LETTERS_H
#define RUS_INGAME_MENU_SWITCH_MENU_SPECIAL_LETTERS_H

case DIALOG_CHAR_CYRILLIC_CAPITAL_DE: // Д
    print_menu_char(curX, curY, DIALOG_CHAR_CYRILLIC_CAPITAL_DE);
	print_menu_char(curX, (curY + 2), MENU_CHAR_UNDERSYM_LEFT);
	print_menu_char(curX, (curY + 2), MENU_CHAR_UNDERSYM_RIGHT);
	curX += gDialogCharWidths[str[strPos]];
	break;
case DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT: // Й
    print_menu_char(curX, curY, DIALOG_CHAR_CYRILLIC_CAPITAL_I);
	print_menu_char(curX, (curY - 4), DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT);
	curX += gDialogCharWidths[str[strPos]];
	break;
case DIALOG_CHAR_CYRILLIC_CAPITAL_TSE: // Ц
    print_menu_char(curX, curY, DIALOG_CHAR_CYRILLIC_CAPITAL_TSE);
	print_menu_char((curX - 1), (curY + 2), MENU_CHAR_UNDERSYM_RIGHT);
	curX += gDialogCharWidths[str[strPos]];
	break;
case DIALOG_CHAR_CYRILLIC_CAPITAL_SHCHA: // Щ
    print_menu_char(curX, curY, DIALOG_CHAR_CYRILLIC_CAPITAL_SHCHA);
	print_menu_char(curX, (curY + 2), MENU_CHAR_UNDERSYM_RIGHT);
	curX += gDialogCharWidths[str[strPos]];
	break;
case DIALOG_CHAR_CYRILLIC_CAPITAL_IO: // Ё
    print_menu_char(curX, curY, ASCII_TO_DIALOG('E'));
	print_menu_char(curX, (curY - 4), MENU_CHAR_ACCENT_DIAERESIS);
	curX += gDialogCharWidths[str[strPos]];
	break;

#endif // This will be used in "src/game/ingame_menu.c"
