#ifndef DEFINE_DIFF_CHANGE_H
#define DEFINE_DIFF_CHANGE_H

// Diff 3 (Refresh 13-14)

// Include files
#ifdef DIFF_3
#include <PR/ultratypes.h>
#include <PR/gbi.h>
#include "config.h"
#include "macros.h"
#include "types.h"
#include "dialog_ids.h"
#include "src/game/rumble_init.h"
#else
#include <ultra64.h>
#include "sm64.h"
#include "surface_terrains.h"
#include "moving_texture_macros.h"
#include "level_misc_macros.h"
#include "macro_preset_names.h"
#include "special_preset_names.h"
#include "textures.h"
#endif

// actors/power_meter/model.inc.c
// bin/segment2.c
// bin/title_screen_bg.c
// levels/castle_grounds/areas/1/13/model.inc.c
// levels/ending/leveldata.c
#ifdef DIFF_3
#define DIFF_TEXTURE Texture
#else
#define DIFF_TEXTURE u8
#endif

// bin/segment2.c
#ifdef DIFF_3
//----------------------------
#define DIFF_ALIGNED8
//----------------------------
#else
//----------------------------
#define DIFF_ALIGNED8 ALIGNED8
//----------------------------
#endif

// Most of SRC
#ifndef DIFF_3
#ifdef NOT_INVERTABLE
#define DIALOG_NONE 255
#else
#define DIALOG_NONE -1
#endif
#define DIALOG_RESPONSE_NONE 0
#define MENU_OPT_NONE 0
#define MENU_OPT_DEFAULT 1
#define MENU_OPT_EXIT_COURSE 2
#define MENU_OPT_CAMERA_ANGLE_R 3
#define MENU_MODE_NONE -1
#define MENU_MODE_UNUSED_0 0
#define MENU_MODE_RENDER_PAUSE_SCREEN 1
#define MENU_MODE_RENDER_COURSE_COMPLETE_SCREEN 2
#define MENU_MODE_UNUSED_3 3
#define DIAG_VAL1 16
#define CAM_SELECTION_MARIO 1
#define CAM_SELECTION_FIXED 2
#define SEQ_PLAYER_SFX 2
#define SOUND_BANKS_ALL 0x03FF
#define SOUND_BANKS_DISABLED_DURING_INTRO_CUTSCENE 0x0330
#endif

#ifdef DIFF_3
#define DIFF_MENU_OPT_SELECT_INDEX gMenuOptSelectIndex
#define DIFF_STOP_SOUNDS_IN_CONTINUOUS_BANKS stop_sounds_in_continuous_banks
#define DIFF_CURX_CURY_STYPE u32
#define DIFF_GLOBAL_SOUND_SOURCE gGlobalSoundSource
#define DIFF_SEQ_PLAYER_UNLOWER_VOLUME seq_player_unlower_volume
#define DIFF_SEQ_PLAYER_FADE_OUT seq_player_fade_out
#define DIFF_SOUND_BANKS SOUND_BANKS_ALL & ~SOUND_BANKS_DISABLED_AFTER_CREDITS
#else
#define DIFF_MENU_OPT_SELECT_INDEX gPauseScreenMode
#define DIFF_STOP_SOUNDS_IN_CONTINUOUS_BANKS func_80320890
#define DIFF_CURX_CURY_STYPE s32
#define DIFF_GLOBAL_SOUND_SOURCE gDefaultSoundArgs
#define DIFF_SEQ_PLAYER_UNLOWER_VOLUME sequence_player_unlower
#define DIFF_SEQ_PLAYER_FADE_OUT sequence_player_fade_out
#define DIFF_SOUND_BANKS 0x03F0
#endif

#endif
