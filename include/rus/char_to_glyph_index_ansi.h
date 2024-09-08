#ifndef RUS_CHAR_TO_GLYPH_INDEX_ANSI_H
#define RUS_CHAR_TO_GLYPH_INDEX_ANSI_H

if (c == '�' || c == '�') {
    return GLYPH_A;
}

if (c == '�' || c == '�') {
    return GLYPH_CYRILLIC_BE;
}

if (c == '�' || c == '�') {
    return GLYPH_B;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 1;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 1 - SUB_ANSI_LC_TO_UC;
}

if (c == '�' || c == '�') {
    return GLYPH_E;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 2;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 2 - SUB_ANSI_LC_TO_UC;
}

if (c == '�' || c == '�') {
    return GLYPH_K;
}

if (c == '�' || c == '�') {
    return GLYPH_CYRILLIC_EL;
}

if (c == '�' || c == '�') {
    return GLYPH_M;
}

if (c == '�' || c == '�') {
    return GLYPH_H;
}

if (c == '�' || c == '�') {
    return GLYPH_O;
}

if (c == '�' || c == '�') {
    return GLYPH_CYRILLIC_PE;
}

if (c == '�' || c == '�') {
    return GLYPH_P;
}

if (c == '�' || c == '�') {
    return GLYPH_C;
}

if (c == '�' || c == '�') {
    return GLYPH_T;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 9;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 9 - SUB_ANSI_LC_TO_UC;
}

if (c == '�' || c == '�') {
    return GLYPH_X;
}

if (c >= '�' && c <= '�') {
    return c - SUB_GLYPH_CYRILLIC - 10;
}

if (c >= '�') {
    return c - SUB_GLYPH_CYRILLIC - 10 - SUB_ANSI_LC_TO_UC;
}

if (c == '�' || c == '�') {
    return GLYPH_CYRILLIC_IO;
}

#endif // This will be used in "src/game/print.c"
