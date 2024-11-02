#ifndef DEFINE_DIFF_CHANGE_H
#define DEFINE_DIFF_CHANGE_H

#include "sm64.h"

// Diff 3 (Refresh 13-14)
#ifdef INPUT_STOMPED
#define DIFF_3
#endif

// Most of definitions included out of DIFF_3
#ifndef DIFF_3

#ifdef SRC_GAME_AREA_C
#define DIALOG_NONE 255
#else
#define DIALOG_NONE -1
#endif

#define DIALOG_RESPONSE_NONE                       0
#define MENU_OPT_NONE                              0
#define MENU_OPT_DEFAULT                           1
#define MENU_OPT_EXIT_COURSE                       2
#define MENU_OPT_CAMERA_ANGLE_R                    3
#define MENU_MODE_NONE                             -1
#define MENU_MODE_UNUSED_0                         0
#define MENU_MODE_RENDER_PAUSE_SCREEN              1
#define MENU_MODE_RENDER_COURSE_COMPLETE_SCREEN    2
#define MENU_MODE_UNUSED_3                         3
#define SOUND_BANKS_ALL                            0x03FF
#define SOUND_BANKS_DISABLED_DURING_INTRO_CUTSCENE 0x0330

#endif

// Most of functions and names
#ifdef DIFF_3
#define DIFF3_STOP_SOUNDS_IN_CONTINUOUS_BANKS stop_sounds_in_continuous_banks
#define DIFF3_G_GLOBAL_SOUND_SOURCE           gGlobalSoundSource
#define DIFF3_SEQ_PLAYER_UNLOWER_VOLUME       seq_player_unlower_volume
#define DIFF3_SEQ_PLAYER_FADE_OUT             seq_player_fade_out
#define DIFF3_G_MENU_OPT_SELECT_INDEX         gMenuOptSelectIndex
#define DIFF3_SOUND_BANKS                     SOUND_BANKS_ALL & ~SOUND_BANKS_DISABLED_AFTER_CREDITS
#define DIFF3_TYPE_TEXTURE                    Texture
#else
#define DIFF3_STOP_SOUNDS_IN_CONTINUOUS_BANKS func_80320890
#define DIFF3_G_GLOBAL_SOUND_SOURCE           gDefaultSoundArgs
#define DIFF3_SEQ_PLAYER_UNLOWER_VOLUME       sequence_player_unlower
#define DIFF3_SEQ_PLAYER_FADE_OUT             sequence_player_fade_out
#define DIFF3_G_MENU_OPT_SELECT_INDEX         gPauseScreenMode
#define DIFF3_SOUND_BANKS                     0x03F0
#define DIFF3_TYPE_TEXTURE                    u8
#endif

// Diff 2 (Refresh 12)
#ifdef ACT_UNKNOWN_0002020E
#define DIFF_2
#endif

// Most of functions and names
#ifdef DIFF_2
#define DIFF2_AREA_INDEX             areaIndex
#define DIFF2_G_NEVER_ENTERED_CASTLE gNeverEnteredCastle
#else
#define DIFF2_AREA_INDEX             unk18
#define DIFF2_G_NEVER_ENTERED_CASTLE gShouldNotPlayCastleMusic
#endif

#endif
