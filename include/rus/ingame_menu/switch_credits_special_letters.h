#ifndef RUS_INGAME_MENU_SWITCH_CREDITS_SPECIAL_LETTERS_H
#define RUS_INGAME_MENU_SWITCH_CREDITS_SPECIAL_LETTERS_H

case CREDITS_CHAR_CYRILLIC_DE:
	print_credits_char(curX, curY, CREDITS_CHAR_CYRILLIC_DE);
	print_credits_char(curX, (curY + 2), CREDITS_CHAR_UNDERSYM_LEFT);
	print_credits_char(curX, (curY + 2), CREDITS_CHAR_UNDERSYM_RIGHT);
	curX += 7;
	break;
case CREDITS_CHAR_CYRILLIC_I_SHORT:
	print_credits_char(curX, curY, CREDITS_CHAR_CYRILLIC_I);
	print_credits_char(curX, (curY - 2), CREDITS_CHAR_CYRILLIC_I_SHORT);
	curX += 7;
	break;
case CREDITS_CHAR_CYRILLIC_TSE:
case CREDITS_CHAR_CYRILLIC_SHCHA:
	print_credits_char(curX, curY, str[strPos]);
	print_credits_char(curX, (curY + 2), CREDITS_CHAR_UNDERSYM_RIGHT);
	curX += 7;
	break;
case CREDITS_CHAR_CYRILLIC_IO:
	print_credits_char(curX, curY, ASCII_TO_DIALOG('E'));
	print_credits_char(curX, (curY - 2), CREDITS_CHAR_CYRILLIC_IO);
	curX += 7;
	break;

#endif // This will be used in "src/game/ingame_menu.c"
