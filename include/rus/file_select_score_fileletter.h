#ifndef RUS_FILE_SELECT_SCORE_FILELETTER_H
#define RUS_FILE_SELECT_SCORE_FILELETTER_H

if (fileIndex == 0) {
    textFileLetter[0] = GLYPH_A;
}

if (fileIndex == 1) {
    textFileLetter[0] = GLYPH_CYRILLIC_BE;
}

if (fileIndex == 2) {
    textFileLetter[0] = GLYPH_B;
}

if (fileIndex == 3) {
    textFileLetter[0] = GLYPH_CYRILLIC_GHE;
}

#endif // This will be used in "src/menu/file_select.c"
