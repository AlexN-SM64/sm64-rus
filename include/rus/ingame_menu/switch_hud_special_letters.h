#ifndef RUS_INGAME_MENU_SWITCH_HUD_SPECIAL_LETTERS_H
#define RUS_INGAME_MENU_SWITCH_HUD_SPECIAL_LETTERS_H

case GLYPH_CYRILLIC_I_SHORT:
    print_hud_char(curX, curY, GLYPH_CYRILLIC_I);
	print_hud_char(curX, (curY - 3), GLYPH_CYRILLIC_I_SHORT);
	curX += xStride;
	break;
case GLYPH_CYRILLIC_IO:
    print_hud_char(curX, curY, GLYPH_E);
	print_hud_char(curX, (curY - 3), GLYPH_CYRILLIC_IO);
	curX += xStride;
	break;

#endif // This will be used in "src/game/ingame_menu.c"
