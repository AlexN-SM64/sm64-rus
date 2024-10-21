#ifndef RUS_SM64EX_OPTIONS_MENU_GET_HUDSTR_CENTERED_X_H
#define RUS_SM64EX_OPTIONS_MENU_GET_HUDSTR_CENTERED_X_H

extern u8 gDialogCharWidths[];

static inline s16 get_hudstr_centered_x(const s16 sx, const u8 *str) {
    const u8 *chr = str;
    s16 len = 0;
    while (*chr != GLOBAR_CHAR_TERMINATOR) {
		++chr;
	if ((gDialogCharWidths[*chr] >= 1) || (*chr == GLOBAR_CHAR_TERMINATOR)) {
		len += 6; // stride is 12
	} else if (*chr == GLOBAL_CHAR_SPACE) {
		len += 4; // stride is 8
	}
	}
    return sx - len;
}

#endif
