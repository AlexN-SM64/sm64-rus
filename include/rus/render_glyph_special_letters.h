#ifndef RUS_RENDER_GLYPH_SPECIAL_LETTERS_H
#define RUS_RENDER_GLYPH_SPECIAL_LETTERS_H

if (glyphIndex == GLYPH_CYRILLIC_IO) {

    add_glyph_texture(GLYPH_E);
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y, j);

    add_glyph_texture(GLYPH_DIAERESIS);
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y + 3, j);

} else if (glyphIndex == GLYPH_CYRILLIC_I_SHORT) {

    add_glyph_texture(GLYPH_CYRILLIC_I);
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y, j);

    add_glyph_texture(GLYPH_BREVE);
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y + 3, j);

} else {

    add_glyph_texture(glyphIndex);
    render_textrect(sTextLabels[i]->x, sTextLabels[i]->y, j);

}

#endif // This will be used in "src/game/print.c"
