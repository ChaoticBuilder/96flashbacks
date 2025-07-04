Lights1 bowser_1_lights = gdSPDefLights1(
	0x3F, 0x3F, 0x3F,
	0xFF, 0xFF, 0xFF, 0x28, 0x28, 0x28);

Vtx bowser_1_dl_mesh_vtx_0[18] = {
	{{ {-1535, 307, 0}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, 0}, 0, {1502, -2712}, {0, 127, 0, 255} }},
	{{ {-1085, 307, -1085}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {1086, 307, -1085}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, -1535}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {-1085, 307, 1086}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {-1535, 307, 0}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {1086, 307, -1085}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {1536, 307, 0}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, -1535}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {-1085, 307, -1085}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {1086, 307, 1086}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, 1536}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, 1536}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {-1085, 307, 1086}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {1536, 307, 0}, 0, {3034, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, 0}, 0, {1502, -2712}, {0, 127, 0, 255} }},
	{{ {1086, 307, 1086}, 0, {0, 990}, {0, 127, 0, 255} }},
};

Gfx bowser_1_dl_mesh_tri_0[] = {
	gsSPVertex(bowser_1_dl_mesh_vtx_0 + 0, 15, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(1, 3, 4, 0),
	gsSP1Triangle(5, 1, 6, 0),
	gsSP1Triangle(7, 1, 8, 0),
	gsSP1Triangle(1, 9, 10, 0),
	gsSP1Triangle(11, 1, 12, 0),
	gsSP1Triangle(13, 1, 14, 0),
	gsSPVertex(bowser_1_dl_mesh_vtx_0 + 15, 3, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSPEndDisplayList(),
};

Vtx bowser_1_dl_mesh_vtx_1[32] = {
	{{ {1086, 307, -1085}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {2172, 307, -2171}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, -3071}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, -1535}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {-3071, 307, 0}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {-1535, 307, 0}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {-1085, 307, -1085}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {-2171, 307, -2171}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {-3071, 307, 0}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {-1085, 307, 1086}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {-1535, 307, 0}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {-2171, 307, 2172}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, -1535}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {-2171, 307, -2171}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {-1085, 307, -1085}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {0, 307, -3071}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {2172, 307, 2172}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {3072, 307, 0}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {1536, 307, 0}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {1086, 307, 1086}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {-2171, 307, 2172}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, 3072}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {0, 307, 1536}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {-1085, 307, 1086}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {0, 307, 3072}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {1086, 307, 1086}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {0, 307, 1536}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {2172, 307, 2172}, 0, {4056, 990}, {0, 127, 0, 255} }},
	{{ {3072, 307, 0}, 0, {0, 990}, {0, 127, 0, 255} }},
	{{ {1086, 307, -1085}, 0, {3034, -1478}, {0, 127, 0, 255} }},
	{{ {1536, 307, 0}, 0, {990, -1478}, {0, 127, 0, 255} }},
	{{ {2172, 307, -2171}, 0, {4056, 990}, {0, 127, 0, 255} }},
};

Gfx bowser_1_dl_mesh_tri_1[] = {
	gsSPVertex(bowser_1_dl_mesh_vtx_1 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(bowser_1_dl_mesh_vtx_1 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPEndDisplayList(),
};

Vtx bowser_1_dl_mesh_vtx_2[32] = {
	{{ {0, -2047, 3072}, 0, {990, 1996}, {207, 0, 117, 255} }},
	{{ {0, 307, 3072}, 0, {990, -4}, {207, 0, 117, 255} }},
	{{ {-2171, 307, 2172}, 0, {0, -8}, {207, 0, 117, 255} }},
	{{ {-2171, -2047, 2172}, 0, {0, 1992}, {207, 0, 117, 255} }},
	{{ {2172, -2047, -2171}, 0, {990, 1984}, {117, 0, 207, 255} }},
	{{ {3072, 307, 0}, 0, {0, -12}, {117, 0, 207, 255} }},
	{{ {3072, -2047, 0}, 0, {0, 1988}, {117, 0, 207, 255} }},
	{{ {2172, 307, -2171}, 0, {990, -16}, {117, 0, 207, 255} }},
	{{ {3072, -2047, 0}, 0, {990, 1984}, {117, 0, 49, 255} }},
	{{ {2172, 307, 2172}, 0, {0, -20}, {117, 0, 49, 255} }},
	{{ {2172, -2047, 2172}, 0, {0, 1980}, {117, 0, 49, 255} }},
	{{ {3072, 307, 0}, 0, {990, -16}, {117, 0, 49, 255} }},
	{{ {2172, -2047, 2172}, 0, {990, 1988}, {49, 0, 117, 255} }},
	{{ {0, 307, 3072}, 0, {0, -16}, {49, 0, 117, 255} }},
	{{ {0, -2047, 3072}, 0, {0, 1984}, {49, 0, 117, 255} }},
	{{ {2172, 307, 2172}, 0, {990, -16}, {49, 0, 117, 255} }},
	{{ {-2171, -2047, 2172}, 0, {990, 1992}, {139, 0, 49, 255} }},
	{{ {-2171, 307, 2172}, 0, {990, -12}, {139, 0, 49, 255} }},
	{{ {-3071, 307, 0}, 0, {0, -16}, {139, 0, 49, 255} }},
	{{ {-3071, -2047, 0}, 0, {0, 1988}, {139, 0, 49, 255} }},
	{{ {0, -2047, -3071}, 0, {990, 1992}, {49, 0, 139, 255} }},
	{{ {0, 307, -3071}, 0, {990, -16}, {49, 0, 139, 255} }},
	{{ {2172, 307, -2171}, 0, {0, -20}, {49, 0, 139, 255} }},
	{{ {2172, -2047, -2171}, 0, {0, 1988}, {49, 0, 139, 255} }},
	{{ {-2171, -2047, -2171}, 0, {990, 1996}, {207, 0, 139, 255} }},
	{{ {-2171, 307, -2171}, 0, {990, -12}, {207, 0, 139, 255} }},
	{{ {0, 307, -3071}, 0, {0, -16}, {207, 0, 139, 255} }},
	{{ {0, -2047, -3071}, 0, {0, 1996}, {207, 0, 139, 255} }},
	{{ {-3071, -2047, 0}, 0, {990, 1996}, {139, 0, 207, 255} }},
	{{ {-2171, 307, -2171}, 0, {0, -16}, {139, 0, 207, 255} }},
	{{ {-2171, -2047, -2171}, 0, {0, 1988}, {139, 0, 207, 255} }},
	{{ {-3071, 307, 0}, 0, {990, -8}, {139, 0, 207, 255} }},
};

Gfx bowser_1_dl_mesh_tri_2[] = {
	gsSPVertex(bowser_1_dl_mesh_vtx_2 + 0, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 7, 5, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 11, 9, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPVertex(bowser_1_dl_mesh_vtx_2 + 16, 16, 0),
	gsSP1Triangle(0, 1, 2, 0),
	gsSP1Triangle(0, 2, 3, 0),
	gsSP1Triangle(4, 5, 6, 0),
	gsSP1Triangle(4, 6, 7, 0),
	gsSP1Triangle(8, 9, 10, 0),
	gsSP1Triangle(8, 10, 11, 0),
	gsSP1Triangle(12, 13, 14, 0),
	gsSP1Triangle(12, 15, 13, 0),
	gsSPEndDisplayList(),
};

Gfx mat_bowser_f3dlite_material_001[] = {
	gsSPSetLights1(bowser_1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bowser_1_seg7_texture_07001800),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_bowser_f3dlite_material_002[] = {
	gsSPSetLights1(bowser_1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bowser_1_seg7_texture_07001000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPEndDisplayList(),
};

Gfx mat_bowser_f3dlite_material_003[] = {
	gsSPSetLights1(bowser_1_lights),
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT, TEXEL0, 0, SHADE, 0, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPSetTextureImage(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 1, bowser_1_seg7_texture_07000000),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b_LOAD_BLOCK, 0, 0, 7, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0, G_TX_WRAP | G_TX_NOMIRROR, 0, 0),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsDPSetTile(G_IM_FMT_RGBA, G_IM_SIZ_16b, 8, 0, 0, 0, G_TX_CLAMP | G_TX_NOMIRROR, 6, 0, G_TX_WRAP | G_TX_NOMIRROR, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPEndDisplayList(),
};

Gfx bowser_1_seg7_dl_07002768[] = {
	gsSPDisplayList(mat_bowser_f3dlite_material_001),
	gsSPDisplayList(bowser_1_dl_mesh_tri_0),
	gsSPDisplayList(mat_bowser_f3dlite_material_002),
	gsSPDisplayList(bowser_1_dl_mesh_tri_1),
	gsSPDisplayList(mat_bowser_f3dlite_material_003),
	gsSPDisplayList(bowser_1_dl_mesh_tri_2),
	gsDPPipeSync(),
	gsSPSetGeometryMode(G_LIGHTING),
	gsSPClearGeometryMode(G_TEXTURE_GEN),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT, 0, 0, 0, SHADE, 0, 0, 0, ENVIRONMENT),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsSPEndDisplayList(),
};

