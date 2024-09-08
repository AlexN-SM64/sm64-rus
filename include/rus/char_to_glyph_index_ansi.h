#ifndef RUS_CHAR_TO_GLYPH_INDEX_ANSI_H
#define RUS_CHAR_TO_GLYPH_INDEX_ANSI_H

if (c == 'À' || c == 'à') {
    return GLYPH_A;
}

if (c == 'Á' || c == 'á') {
    return GLYPH_CYRILLIC_BE;
}

if (c == 'Â' || c == 'â') {
    return GLYPH_B;
}

if (c >= 'Ã' && c <= 'Ä') {
    return c - SUB_GLYPH_CYRILLIC - 1;
}

if (c >= 'ã' && c <= 'ä') {
    return c - SUB_GLYPH_CYRILLIC - 1 - SUB_ANSI_LC_TO_UC;
}

if (c == 'Å' || c == 'å') {
    return GLYPH_E;
}

if (c >= 'Æ' && c <= 'É') {
    return c - SUB_GLYPH_CYRILLIC - 2;
}

if (c >= 'æ' && c <= 'é') {
    return c - SUB_GLYPH_CYRILLIC - 2 - SUB_ANSI_LC_TO_UC;
}

if (c == 'Ê' || c == 'ê') {
    return GLYPH_K;
}

if (c == 'Ë' || c == 'ë') {
    return GLYPH_CYRILLIC_EL;
}

if (c == 'Ì' || c == 'ì') {
    return GLYPH_M;
}

if (c == 'Í' || c == 'í') {
    return GLYPH_H;
}

if (c == 'Î' || c == 'î') {
    return GLYPH_O;
}

if (c == 'Ï' || c == 'ï') {
    return GLYPH_CYRILLIC_PE;
}

if (c == 'Ð' || c == 'ð') {
    return GLYPH_P;
}

if (c == 'Ñ' || c == 'ñ') {
    return GLYPH_C;
}

if (c == 'Ò' || c == 'ò') {
    return GLYPH_T;
}

if (c >= 'Ó' && c <= 'Ô') {
    return c - SUB_GLYPH_CYRILLIC - 9;
}

if (c >= 'ó' && c <= 'ô') {
    return c - SUB_GLYPH_CYRILLIC - 9 - SUB_ANSI_LC_TO_UC;
}

if (c == 'Õ' || c == 'õ') {
    return GLYPH_X;
}

if (c >= 'Ö' && c <= 'ß') {
    return c - SUB_GLYPH_CYRILLIC - 10;
}

if (c >= 'ö') {
    return c - SUB_GLYPH_CYRILLIC - 10 - SUB_ANSI_LC_TO_UC;
}

if (c == '¨' || c == '¸') {
    return GLYPH_CYRILLIC_IO;
}

#endif // This will be used in "src/game/print.c"
