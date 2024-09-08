#ifndef RUS_FILE_SELECT_ERASE_FILELETTER_H
#define RUS_FILE_SELECT_ERASE_FILELETTER_H

if (sSelectedFileIndex == 0) {
    LANGUAGE_ARRAY(textMarioAJustErased)[MARIO_ERASED_VAR] = ASCII_TO_DIALOG('A');
}

if (sSelectedFileIndex == 1) {
    LANGUAGE_ARRAY(textMarioAJustErased)[MARIO_ERASED_VAR] = DIALOG_CHAR_CYRILLIC_CAPITAL_BE;
}

if (sSelectedFileIndex == 2) {
    LANGUAGE_ARRAY(textMarioAJustErased)[MARIO_ERASED_VAR] = ASCII_TO_DIALOG('B');
}

if (sSelectedFileIndex == 3) {
    LANGUAGE_ARRAY(textMarioAJustErased)[MARIO_ERASED_VAR] = DIALOG_CHAR_CYRILLIC_CAPITAL_GHE;
}

#endif // This will be used in "src/menu/file_select.c"
