#ifndef RUS_DEFINES_RENDER_DIALOG_CHAR_OPTIONS_H
#define RUS_DEFINES_RENDER_DIALOG_CHAR_OPTIONS_H

#define RENDER_DIALOG_CHAR_OPTIONS_INITIALIZE s8 lineNum, s16 *linePos, s8 linesPerBox, s8 xMatrix, s8 lowerBound
#define RENDER_DIALOG_CHAR_OPTIONS_START \
	if (lineNum >= lowerBound && lineNum <= (lowerBound + linesPerBox)) {                                                \
        if (linePos[0] != 0 || (xMatrix != 1)) {                                                                         \
            create_dl_translation_matrix(MENU_MTX_NOPUSH, (gDialogCharWidths[DIALOG_CHAR_SPACE] * (xMatrix - 1)), 0, 0); \
        }
#define RENDER_DIALOG_CHAR_OPTIONS_END }
#define RENDER_DIALOG_CHAR_OPTIONS_INDEXES lineNum, &linePos, linesPerBox, xMatrix, lowerBound

#endif
