#ifndef RUS_RENDER_GLYPH_SPECIAL_LETTERS_H
#define RUS_RENDER_GLYPH_SPECIAL_LETTERS_H

if (glyphIndex == GLYPH_CYRILLIC_I_SHORT) {
    add_glyph_texture(GLYPH_CYRILLIC_I);
} else if (glyphIndex == GLYPH_CYRILLIC_IO) {
    add_glyph_texture(GLYPH_E);
} else {
    add_glyph_texture(glyphIndex);
}
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y, j);

if (glyphIndex == GLYPH_CYRILLIC_I_SHORT || glyphIndex == GLYPH_CYRILLIC_IO) {
    add_glyph_texture(glyphIndex);
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y + 3, j);
}

#endif // This will be used in "src/game/print.c"
