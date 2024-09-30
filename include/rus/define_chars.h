#ifndef RUS_DEFINE_CHARS_H
#define RUS_DEFINE_CHARS_H

#define GLYPH_A 10
#define GLYPH_B 11
#define GLYPH_E 14
#define GLYPH_K 20
#define GLYPH_M 22
#define GLYPH_H 17
#define GLYPH_O 24
#define GLYPH_P 25
#define GLYPH_C 12
#define GLYPH_T 29
#define GLYPH_X 33

#define GLYPH_CYRILLIC_BE      58
#define GLYPH_CYRILLIC_GHE     59
#define GLYPH_CYRILLIC_I       63
#define GLYPH_CYRILLIC_I_SHORT 64
#define GLYPH_CYRILLIC_EL      65
#define GLYPH_CYRILLIC_PE      66
#define GLYPH_CYRILLIC_IO      79

#define SUB_GLYPH_CYRILLIC 135
#define SUB_ANSI_LC_TO_UC  32

// definitions for some of the special characters defined in charmap.txt
enum DialogSpecialCharsRUS {
	DIALOG_CHAR_CYRILLIC_CAPITAL_BE       = 0x70,
	DIALOG_CHAR_CYRILLIC_CAPITAL_GHE      = 0x71,
	DIALOG_CHAR_CYRILLIC_CAPITAL_DE       = 0x72,
    DIALOG_CHAR_CYRILLIC_CAPITAL_I        = 0x75,
	DIALOG_CHAR_CYRILLIC_CAPITAL_I_SHORT  = 0x76,
	DIALOG_CHAR_CYRILLIC_CAPITAL_TSE      = 0x7B,
	DIALOG_CHAR_CYRILLIC_CAPITAL_SHCHA    = 0x7E,
	DIALOG_CHAR_CYRILLIC_SMALL_I_SHORT    = 0x8B,
	DIALOG_CHAR_CYRILLIC_SMALL_YERU       = 0x95,
	DIALOG_CHAR_CYRILLIC_CAPITAL_IO       = 0x9A,
	DIALOG_CHAR_CYRILLIC_SMALL_IO         = 0x9B,
    DIALOG_CHANGE_POSITION_Y              = 0xA0,
    DIALOG_CHANGE_SIMULFIX_IN_WORD_ZVEZDA = 0xA1,
    DIALOG_CHANGE_SUFFIX_IN_WORD_ZVEZDA   = 0xA2
};

#define DIALOG_CHAR_NONE 0xFF

enum MenuSpecialCharsRUS {
	MENU_CHAR_ACCENT_DIAERESIS = 0x85,
	MENU_CHAR_UNDERSYM_LEFT    = 0x86,
	MENU_CHAR_UNDERSYM_RIGHT   = 0x87
};

enum CreditsSpecialCharsRUS {
	CREDITS_CHAR_CYRILLIC_BE      = 0x25,
	CREDITS_CHAR_CYRILLIC_DE      = 0x27,
	CREDITS_CHAR_CYRILLIC_I       = 0x2A,
	CREDITS_CHAR_CYRILLIC_I_SHORT = 0x2B,
	CREDITS_CHAR_CYRILLIC_EL      = 0x2C,
	CREDITS_CHAR_CYRILLIC_PE      = 0x2D,
	CREDITS_CHAR_CYRILLIC_TSE     = 0x30,
	CREDITS_CHAR_CYRILLIC_SHCHA   = 0x33,
	CREDITS_CHAR_CYRILLIC_IO      = 0x3A,
	CREDITS_CHAR_UNDERSYM_LEFT    = 0x3B,
	CREDITS_CHAR_UNDERSYM_RIGHT   = 0x3C
};

#define SUB_CREDITS_CHAR_CYRILLIC 156

#endif
