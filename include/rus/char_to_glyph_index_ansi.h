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

if (c == 'Ã' || c == 'ã') {
    return GLYPH_CYRILLIC_GHE;
}

if (c == 'Ä' || c == 'ä') {
    return GLYPH_CYRILLIC_DE;
}

if (c == 'Å' || c == 'å') {
    return GLYPH_E;
}

if (c == '¨' || c == '¸') {
    return GLYPH_CYRILLIC_IO;
}

if (c == 'Æ' || c == 'æ') {
    return GLYPH_CYRILLIC_ZHE;
}

if (c == 'Ç' || c == 'ç') {
    return GLYPH_CYRILLIC_ZE;
}

if (c == 'È' || c == 'è') {
    return GLYPH_CYRILLIC_I;
}

if (c == 'É' || c == 'é') {
    return GLYPH_CYRILLIC_I_SHORT;
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

if (c == 'Ó' || c == 'ó') {
    return GLYPH_CYRILLIC_U;
}

if (c == 'Ô' || c == 'ô') {
    return GLYPH_CYRILLIC_EF;
}

if (c == 'Õ' || c == 'õ') {
    return GLYPH_X;
}

if (c == 'Ö' || c == 'ö') {
    return GLYPH_CYRILLIC_TSE;
}

if (c == '×' || c == '÷') {
    return GLYPH_CYRILLIC_CHE;
}

if (c == 'Ø' || c == 'ø') {
    return GLYPH_CYRILLIC_SHA;
}

if (c == 'Ù' || c == 'ù') {
    return GLYPH_CYRILLIC_SHCHA;
}

if (c == 'Ú' || c == 'ú') {
    return GLYPH_CYRILLIC_HARD_SIGN;
}

if (c == 'Û' || c == 'û') {
    return GLYPH_CYRILLIC_YERU;
}

if (c == 'Ü' || c == 'ü') {
    return GLYPH_CYRILLIC_SOFT_SIGN;
}

if (c == 'Ý' || c == 'ý') {
    return GLYPH_CYRILLIC_E;
}

if (c == 'Þ' || c == 'þ') {
    return GLYPH_CYRILLIC_YU;
}

if (c == 'ß' || c == 'ÿ') {
    return GLYPH_CYRILLIC_YA;
}

#endif // This will be used in "src/game/print.c"
