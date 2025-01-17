#include <ultra64.h>

#define TEX_ASCII_START 0

#define G_CC_TEXT 0, 0, 0, PRIMITIVE, 0, 0, 0, TEXEL0

unsigned char font_8px_bin[] __attribute__((aligned(8))) = {
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00,
  0x00, 0x0f, 0xff, 0xf0, 0x0f, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x0f, 0x00,
  0x0f, 0xff, 0xff, 0xf0, 0x00, 0xf0, 0xf0, 0x00, 0x0f, 0xf0, 0x0f, 0x00,
  0x0f, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0f, 0xff, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xf0,
  0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x00, 0xf0, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0xf0, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x0f, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xf0, 0x0f, 0xf0,
  0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0xf0, 0xf0, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00,
  0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x0f, 0x00, 0x0f, 0xf0, 0x00, 0xff, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x0f, 0xff, 0x00, 0x0f, 0xff, 0xff, 0xff, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x0f, 0xf0, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xff, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x0f, 0x0f, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00,
  0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0x00,
  0x00, 0x00, 0xff, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x0f, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xff, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0x00,
  0x0f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x0f, 0xff, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xff, 0x00,
  0x00, 0x00, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xf0, 0xf0,
  0x0f, 0x0f, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x0f, 0x0f, 0xf0,
  0x0f, 0xff, 0xff, 0xf0, 0x00, 0xff, 0xff, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0xf0, 0x00, 0xf0, 0x0f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xf0, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x0f, 0x0f, 0xf0, 0xf0, 0x0f, 0x00, 0xf0, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0xff, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0xf0, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xff, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xff, 0x00,
  0x0f, 0xff, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0xff, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xff, 0x00,
  0x00, 0xff, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xff, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x0f, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00,
  0x00, 0xf0, 0x00, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00,
  0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0xff, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0x0f, 0xf0, 0xf0,
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00,
  0x00, 0xf0, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0xf0, 0xf0, 0x0f, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0xf0, 0x0f, 0x00,
  0x0f, 0x0f, 0xf0, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x0f, 0xf0, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0xff, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x0f, 0x0f, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0xff, 0xf0, 0xf0, 0x00, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0xff, 0x0f, 0x00, 0x0f, 0x0f, 0xff, 0x00, 0x00, 0x0f, 0xf0, 0x00,
  0x00, 0x0f, 0xf0, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x0f, 0xff, 0x0f, 0xff, 0x0f, 0x0f, 0xff, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0xff, 0xff, 0x00, 0x0f, 0x00, 0xff, 0x00, 0x0f, 0xf0, 0x00, 0xf0,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0, 0x0f, 0x0f, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0xff, 0xff, 0xf0, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0xff, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x0f, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0, 0x0f,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x0f, 0x00, 0x0f, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0xff, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x0f, 0xf0, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x0f, 0x00, 0xf0, 0x0f, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0xf0, 0x0f, 0x0f, 0xff, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0xff, 0xf0, 0xf0, 0x00, 0xff, 0xff, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x0f, 0xff, 0x00, 0x0f, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0x0f, 0x00,
  0x00, 0x0f, 0xff, 0x00, 0x0f, 0x00, 0xf0, 0x0f, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0xff, 0x00, 0x00, 0x00, 0xff, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xff, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xff, 0x00, 0x00, 0xff, 0xf0, 0xf0,
  0x0f, 0x0f, 0xff, 0x00, 0x00, 0xff, 0xff, 0xf0, 0x0f, 0xff, 0xff, 0x00,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x0f,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0xff, 0xff, 0xf0,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0xf0, 0x00, 0xf0,
  0x0f, 0x00, 0x0f, 0xf0, 0x0f, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x0f, 0x00, 0x00, 0xf0,
  0x0f, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0xf0, 0x00,
  0x0f, 0x00, 0x0f, 0xf0, 0x00, 0x0f, 0xf0, 0x00, 0x00, 0x0f, 0x00, 0x00,
  0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0xff, 0x00, 0x00, 0xff, 0xf0, 0xf0,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x0f, 0x00, 0xf0,
  0x0f, 0x00, 0x0f, 0xf0, 0x00, 0xf0, 0x0f, 0x00, 0x0f, 0x00, 0xf0, 0x0f,
  0x00, 0xf0, 0x0f, 0x00, 0x00, 0xff, 0xf0, 0xf0, 0x00, 0xf0, 0x00, 0x00,
  0x00, 0x0f, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0xf0, 0x0f, 0x00, 0x00, 0x00, 0x0f, 0xff, 0xff, 0x00,
  0x00, 0x00, 0xff, 0x00, 0x00, 0xff, 0xf0, 0xf0, 0x00, 0x0f, 0xf0, 0x00,
  0x00, 0xff, 0x0f, 0xf0, 0x0f, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0xf0,
  0x0f, 0xff, 0xff, 0xf0, 0x00, 0x00, 0xff, 0xf0, 0x00, 0x00, 0xf0, 0x00,
  0x0f, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x0f, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
  0x00, 0x00, 0x00, 0x00
};

// Naive strlen copied from
// https://stackoverflow.com/questions/22520413/c-strlen-implementation-in-one-line-of-code
void my_strlen(const char *str, u32 *len)
{
    for (*len = 0; str[*len]; (*len)++);
}

void computeST(u8* s, u8* t, unsigned char letter) {
  const unsigned char offsetLetter = letter - TEX_ASCII_START;

  *s = (offsetLetter % 16) * 8;
  *t = (offsetLetter / 16) * 8;
}

void drawSmallString_impl(Gfx **dl, int x, int y, const char* string, unsigned char r, unsigned char g, unsigned char b) {
  int i = 0;
  int xPos = x;
  int yPos = y;
  u8 s = 0;
  u8 t = 0;
  Gfx *dlHead = *dl;

  gDPLoadTextureBlock_4b(dlHead++, font_8px_bin, G_IM_FMT_IA, 128, 64, 0, G_TX_MIRROR | G_TX_WRAP, G_TX_MIRROR | G_TX_WRAP, G_TX_NOMASK, G_TX_NOMASK, G_TX_NOLOD, G_TX_NOLOD);
  gDPSetPrimColor(dlHead++, 0, 0, r, g, b, 255);
  gDPSetCombineMode(dlHead++, G_CC_TEXT, G_CC_TEXT);
  gDPPipeSync(dlHead++);
  while (string[i] != '\0') {
    if (string[i] == '\n') {
      xPos = x;
      yPos += 8;
      i++;
      continue;
    }

    computeST(&s, &t, string[i]);
    gSPTextureRectangle(dlHead++, (xPos + 0) << 2, (yPos + 0) << 2, (xPos + 8) << 2, (yPos + 8) << 2, 0, s << 5, t << 5, 1 << 10, 1 << 10);

    xPos += 8;
    i++;
  }
  gDPSetPrimColor(dlHead++, 0, 0, 255, 255, 255, 255);
  gDPPipeSync(dlHead++);

  *dl = dlHead;
}

void drawSmallString(Gfx **dl, int x, int y, const char* string) {
  drawSmallString_impl(dl, x, y, string, 255, 255, 255);
}

void drawSmallStringCol(Gfx **dl, int x, int y, const char* string, unsigned char r, unsigned char g, unsigned char b) {
  drawSmallString_impl(dl, x, y, string, r, g, b);
}
