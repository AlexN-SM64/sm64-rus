#ifndef RUS_DEFINE_FILE_SELECT_H
#define RUS_DEFINE_FILE_SELECT_H

#define TEXT_SOUND_MODES_LENGTH 9

/* Обратите внимание! Из "src/game/ingame_menu.c" поясняется, что ширина символа в ХУДе составляет 12, а ширина пробела - 8.
 * Составление ширины текста в диалоге тоже поясняется, но программа, которую я написал на языке Паскаль, уже есть в папке tools.
 * Открой "text_to_dialog.pas" в папке tools и попробуйте ввести текст для составления ширины.
 *
 * Убедитесь, что тексты должны выравнивать по центру. Для вычисления используется две формулы, но равные:
 * Формула возрастания: Xb = Xa + (Ta - Tb) / 2
 * Формула убывания:    Xb = Xa - (Tb - Ta) / 2
 */


#define SELECT_FILE_X 87
/* Оригинал: SELECT FILE  | 12 * 10 + 8 = 128
 * Перевод:  ВЫБРАТЬ ФАЙЛ | 12 * 11 + 8 = 140
 *
 * Xb = 93 - (140 - 128) / 2 = 87
 */
#define SCORE_X 56
/* Оригинал: SCORE | 30
 * Перевод: СЧЁТ   | 23
 *
 * Xb = 52 + (30 - 23) / 2 = 55,5 (~56)
 */
#define COPY_X 99
/* Оригинал: COPY      | 24
 * Перевод: КОПИРОВАТЬ | 61
 *
 * Xb = 117 - (61 - 24) / 2 = 98,5 (~99)
 */
#define ERASE_X 172
/* Оригинал: ERASE   | 30
 * Перевод:  СТЕРЕТЬ | 40
 *
 * Xb = 177 - (40 - 30) / 2 = 172
 */

#define CHECK_FILE_X 77
/* Оригинал: CHECK FILE    | 12 * 9 + 8 = 116
 * Перевод:  ПОКАЗАТЬ СЧЁТ | 12 * 12 + 8 = 152
 *
 * Xb = 95 - (152 - 116) / 2 = 77
 */
#define NOSAVE_DATA_X1 59
/* Оригинал: NO SAVED DATA EXISTS             | 117
 * Перевод:  СОХРАНЁННЫЕ ДАННЫЕ НЕ СУЩЕСТВУЮТ | 131 + 5 + 62 = 198
 *
 * Xb = 99 - (198 - 117) / 2 = 58,5 (~59)
 */

#define RETURN_X     36
/* Оригинал: RETURN    | 37
 * Перевод:  ВЕРНУТЬСЯ | 53
 *
 * Xb = 44 - (53 - 37) / 2 = 36
 */
#define COPYFILE_X1  126
/* Оригинал: COPY FILE   | 51
 * Перевод:  КОПИР. ФАЙЛ | 70
 *
 * Xb = 135 - (70 - 51) / 2 = 125,5 (~126)
 */
#define ERASEFILE_X1 223
/* Оригинал: ERASE FILE   | 57
 * Перевод:  СТЕРЕТЬ ФАЙЛ | 74
 *
 * Xb = 231 - (74 - 57) / 2 = 222,5 (~223)
 */

#define NOFILE_COPY_X  106
/* Оригинал: NO EMPTY FILE     | 77
 * Перевод:  НЕТ ПУСТОГО ФАЙЛА | 103
 *
 * Xb = 119 - (103 - 77) / 2 = 106
 */
#define COPY_FILE_X    68
/* Оригинал: COPY FILE       | 12 * 8 + 8 = 104
 * Перевод:  КОПИРОВАТЬ ФАЙЛ | 12 * 14 + 8 = 176
 *
 * Xb = 104 - (176 - 104) / 2 = 68
 */
#define COPYIT_WHERE_X 106
/* Оригинал: COPY IT TO WHERE? | 99
 * Перевод:  СКОПИРОВАТЬ КУДА? | 105
 *
 * Xb = 109 - (105 - 99) / 2 = 106
 */
#define NOSAVE_DATA_X2 61
// 59 + (101 - 99) = 61
#define COPYCOMPLETE_X 96
/* Оригинал: COPYING COMPLETED     | 102
 * Перевод:  КОПИРОВАНИЕ ЗАВЕРШЕНО | 131
 *
 * Xb = 110 - (131 - 102) / 2 = 95,5 (~96)
 */
#define SAVE_EXISTS_X1 69
/* Оригинал: SAVED DATA EXISTS             | 98
 * Перевод:  СОХРАНЁННЫЕ ДАННЫЕ СУЩЕСТВУЮТ | 114 + 5 + 62 = 181
 *
 * Xb = 110 - (181 - 98) / 2 = 68,5 (~69)
 */

#define VIEWSCORE_X1 123
/* Оригинал: CHECK SCORE   | 65
 * Перевод:  ПОКАЗАТЬ СЧЁТ | 75
 *
 * Xb = 128 - (75 - 65) / 2 = 123
 */
#define ERASEFILE_X2 222
// 223 - (231 - 230) = 222

#define ERASE_FILE_X     86
/* Оригинал: ERASE FILE   | 12 * 9 + 8 = 116
 * Перевод:  СТЕРЕТЬ ФАЙЛ | 12 * 11 + 8 = 140
 *
 * Xb = 98 - (140 - 116) / 2 = 86
 */
#define NOSAVE_DATA_X3   60
// 59 + (100 - 99) = 60
#define MARIO_ERASED_X   94
/* Оригинал: MARIO A JUST ERASED   | 111
 * Перевод:  МАРИО А ПРОСТО СТЁРТО | 124
 *
 * Xb = 100 - (124 - 111) / 2 = 93,5 (~94)
 */
#define SAVE_EXISTS_X2   59 // Не используется
// 69 - (110 - 100) = 59

#define VIEWSCORE_X2 122
// 123 - (128 - 127) = 122

#define COPYFILE_X2 224
// 126 + (233 - 135) = 224

static unsigned char charABCD[] = { CHAR_ABCD };

#endif
