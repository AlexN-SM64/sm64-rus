#ifndef RUS_CONST_INTRO_SEG7_DL_COPYRIGHT_H
#define RUS_CONST_INTRO_SEG7_DL_COPYRIGHT_H

gsDPLoadTextureBlock(intro_seg7_texture_rus_version, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, G_TX_CLAMP, G_TX_CLAMP, 7, 4, G_TX_NOLOD, G_TX_NOLOD),
gsSPVertex(intro_seg7_vertex_rus_version, 4, 0),
gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),

gsDPLoadTextureBlock(intro_seg7_texture_rus_copyright, G_IM_FMT_RGBA, G_IM_SIZ_16b, 128, 16, 0, G_TX_CLAMP, G_TX_CLAMP, 7, 4, G_TX_NOLOD, G_TX_NOLOD),
gsSPVertex(intro_seg7_vertex_rus_copyright, 4, 0),
gsSP2Triangles( 0,  1,  2, 0x0,  0,  2,  3, 0x0),

#endif // This will be used in "levels/intro/leveldata.c"
