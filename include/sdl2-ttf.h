#ifndef MRUBY_SDL2_TTF_H
#define MRUBY_SDL2_TTF_H

#include "mruby.h"
#include <SDL_ttf.h>

#ifdef __cplusplus
extern "C" {
#endif

extern mrb_value mrb_sdl2_font(mrb_state *mrb, TTF_Font *value);

#ifdef __cplusplus
}
#endif

#endif /* end of MRUBY_SDL2_TTF_H */
