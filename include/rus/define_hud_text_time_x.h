#ifndef RUS_DEFINE_HUD_TEXT_TIME_X_H
#define RUS_DEFINE_HUD_TEXT_TIME_X_H

#ifdef WIDESCREEN
#include "rus/define_screen_size_common_preset.h"

f32 TXT_TIME_X_OUTPUT;
f32 rusOutputScreenWidth = GFX_DIMENSIONS_ASPECT_RATIO * COMMON_SCREEN_HEIGHT;

if (rusOutputScreenWidth <= (COMMON_SCREEN_WIDTH + TXT_TIME_X_OFFSET)) {
	TXT_TIME_X_OUTPUT = TXT_TIME_X;
} else if (rusOutputScreenWidth >= (COMMON_SCREEN_WIDTH + (TXT_TIME_X_OFFSET * 3))) {
	TXT_TIME_X_OUTPUT = (TXT_TIME_X + TXT_TIME_X_OFFSET);
} else {
	TXT_TIME_X_OUTPUT = (TXT_TIME_X + ((rusOutputScreenWidth - COMMON_SCREEN_WIDTH - TXT_TIME_X_OFFSET) / 2));
}

#else
#define TXT_TIME_X_OUTPUT TXT_TIME_X
#endif

#endif
