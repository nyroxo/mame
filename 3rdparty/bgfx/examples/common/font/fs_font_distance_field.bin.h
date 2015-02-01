static const uint8_t fs_font_distance_field_glsl[1013] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x01, 0x00, 0x0a, 0x75, 0x5f, 0x74, 0x65, 0x78, // FSH........u_tex
	0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x00, 0x01, 0x00, 0x00, 0x01, 0x00, 0xd5, 0x03, 0x00, 0x00, 0x76, // Color..........v
	0x61, 0x72, 0x79, 0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, // arying highp vec
	0x34, 0x20, 0x76, 0x5f, 0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x3b, 0x0a, 0x76, 0x61, 0x72, 0x79, // 4 v_color0;.vary
	0x69, 0x6e, 0x67, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x34, 0x20, 0x76, // ing highp vec4 v
	0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x3b, 0x0a, 0x75, 0x6e, 0x69, 0x66, // _texcoord0;.unif
	0x6f, 0x72, 0x6d, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x73, 0x61, 0x6d, 0x70, 0x6c, 0x65, 0x72, // orm lowp sampler
	0x43, 0x75, 0x62, 0x65, 0x20, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, 0x6f, 0x72, 0x3b, // Cube u_texColor;
	0x0a, 0x76, 0x6f, 0x69, 0x64, 0x20, 0x6d, 0x61, 0x69, 0x6e, 0x20, 0x28, 0x29, 0x0a, 0x7b, 0x0a, // .void main ().{.
	0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x72, 0x67, 0x62, //   lowp float rgb
	0x61, 0x5f, 0x31, 0x5b, 0x34, 0x5d, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, // a_1[4];.  lowp v
	0x65, 0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x3b, 0x0a, 0x20, 0x20, // ec4 tmpvar_2;.  
	0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x20, 0x3d, 0x20, 0x74, 0x65, 0x78, 0x74, 0x75, // tmpvar_2 = textu
	0x72, 0x65, 0x43, 0x75, 0x62, 0x65, 0x20, 0x28, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // reCube (u_texCol
	0x6f, 0x72, 0x2c, 0x20, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, // or, v_texcoord0.
	0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x69, 0x6e, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, // xyz);.  int tmpv
	0x61, 0x72, 0x5f, 0x33, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, // ar_3;.  tmpvar_3
	0x20, 0x3d, 0x20, 0x69, 0x6e, 0x74, 0x28, 0x28, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, //  = int(((v_texco
	0x6f, 0x72, 0x64, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x34, 0x2e, 0x30, 0x29, 0x20, 0x2b, 0x20, // ord0.w * 4.0) + 
	0x30, 0x2e, 0x35, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, // 0.5));.  rgba_1[
	0x30, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x7a, 0x3b, // 0] = tmpvar_2.z;
	0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x31, 0x5d, 0x20, 0x3d, 0x20, 0x74, // .  rgba_1[1] = t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x79, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, // mpvar_2.y;.  rgb
	0x61, 0x5f, 0x31, 0x5b, 0x32, 0x5d, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, // a_1[2] = tmpvar_
	0x32, 0x2e, 0x78, 0x3b, 0x0a, 0x20, 0x20, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x33, 0x5d, // 2.x;.  rgba_1[3]
	0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x32, 0x2e, 0x77, 0x3b, 0x0a, 0x20, //  = tmpvar_2.w;. 
	0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, //  highp vec3 tmpv
	0x61, 0x72, 0x5f, 0x34, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, // ar_4;.  tmpvar_4
	0x20, 0x3d, 0x20, 0x64, 0x46, 0x64, 0x78, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, //  = dFdx(v_texcoo
	0x72, 0x64, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, // rd0.xyz);.  high
	0x70, 0x20, 0x76, 0x65, 0x63, 0x33, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x3b, // p vec3 tmpvar_5;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x20, 0x3d, 0x20, 0x64, 0x46, // .  tmpvar_5 = dF
	0x64, 0x79, 0x28, 0x76, 0x5f, 0x74, 0x65, 0x78, 0x63, 0x6f, 0x6f, 0x72, 0x64, 0x30, 0x2e, 0x78, // dy(v_texcoord0.x
	0x79, 0x7a, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, // yz);.  highp flo
	0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x3b, 0x0a, 0x20, 0x20, 0x74, // at tmpvar_6;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x20, 0x3d, 0x20, 0x28, 0x38, 0x2e, 0x30, 0x20, 0x2a, // mpvar_6 = (8.0 *
	0x20, 0x28, 0x73, 0x71, 0x72, 0x74, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, //  (sqrt(.    dot 
	0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x34, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, // (tmpvar_4, tmpva
	0x72, 0x5f, 0x34, 0x29, 0x0a, 0x20, 0x20, 0x29, 0x20, 0x2b, 0x20, 0x73, 0x71, 0x72, 0x74, 0x28, // r_4).  ) + sqrt(
	0x0a, 0x20, 0x20, 0x20, 0x20, 0x64, 0x6f, 0x74, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // .    dot (tmpvar
	0x5f, 0x35, 0x2c, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x35, 0x29, 0x0a, 0x20, 0x20, // _5, tmpvar_5).  
	0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x68, 0x69, 0x67, 0x68, 0x70, 0x20, 0x66, 0x6c, 0x6f, // )));.  highp flo
	0x61, 0x74, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x3b, 0x0a, 0x20, 0x20, 0x65, 0x64, // at edge0_7;.  ed
	0x67, 0x65, 0x30, 0x5f, 0x37, 0x20, 0x3d, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, 0x2d, 0x20, 0x74, // ge0_7 = (0.5 - t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, // mpvar_6);.  lowp
	0x20, 0x66, 0x6c, 0x6f, 0x61, 0x74, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x3b, //  float tmpvar_8;
	0x0a, 0x20, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x3d, 0x20, 0x63, 0x6c, // .  tmpvar_8 = cl
	0x61, 0x6d, 0x70, 0x20, 0x28, 0x28, 0x28, 0x72, 0x67, 0x62, 0x61, 0x5f, 0x31, 0x5b, 0x74, 0x6d, // amp (((rgba_1[tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x33, 0x5d, 0x20, 0x2d, 0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, // pvar_3] - edge0_
	0x37, 0x29, 0x20, 0x2f, 0x20, 0x28, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x30, 0x2e, 0x35, 0x20, // 7) / (.    (0.5 
	0x2b, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x36, 0x29, 0x0a, 0x20, 0x20, 0x20, 0x2d, // + tmpvar_6).   -
	0x20, 0x65, 0x64, 0x67, 0x65, 0x30, 0x5f, 0x37, 0x29, 0x29, 0x2c, 0x20, 0x30, 0x2e, 0x30, 0x2c, //  edge0_7)), 0.0,
	0x20, 0x31, 0x2e, 0x30, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x6c, 0x6f, 0x77, 0x70, 0x20, 0x76, 0x65, //  1.0);.  lowp ve
	0x63, 0x34, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, 0x0a, 0x20, 0x20, 0x74, // c4 tmpvar_9;.  t
	0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x78, 0x79, 0x7a, 0x20, 0x3d, 0x20, 0x76, 0x5f, // mpvar_9.xyz = v_
	0x63, 0x6f, 0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x78, 0x79, 0x7a, 0x3b, 0x0a, 0x20, 0x20, 0x74, 0x6d, // color0.xyz;.  tm
	0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x2e, 0x77, 0x20, 0x3d, 0x20, 0x28, 0x76, 0x5f, 0x63, 0x6f, // pvar_9.w = (v_co
	0x6c, 0x6f, 0x72, 0x30, 0x2e, 0x77, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, // lor0.w * (tmpvar
	0x5f, 0x38, 0x20, 0x2a, 0x20, 0x28, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x20, 0x2a, // _8 * (tmpvar_8 *
	0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x28, 0x33, 0x2e, 0x30, 0x20, 0x2d, 0x20, 0x28, 0x32, 0x2e, //  .    (3.0 - (2.
	0x30, 0x20, 0x2a, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x38, 0x29, 0x29, 0x0a, 0x20, // 0 * tmpvar_8)). 
	0x20, 0x29, 0x29, 0x29, 0x3b, 0x0a, 0x20, 0x20, 0x67, 0x6c, 0x5f, 0x46, 0x72, 0x61, 0x67, 0x43, //  )));.  gl_FragC
	0x6f, 0x6c, 0x6f, 0x72, 0x20, 0x3d, 0x20, 0x74, 0x6d, 0x70, 0x76, 0x61, 0x72, 0x5f, 0x39, 0x3b, // olor = tmpvar_9;
	0x0a, 0x7d, 0x0a, 0x0a, 0x00,                                                                   // .}...
};
static const uint8_t fs_font_distance_field_dx9[737] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0xd4, 0x02, 0x00, 0x03, 0xff, 0xff, // FSH.............
	0xfe, 0xff, 0x22, 0x00, 0x43, 0x54, 0x41, 0x42, 0x1c, 0x00, 0x00, 0x00, 0x53, 0x00, 0x00, 0x00, // ..".CTAB....S...
	0x00, 0x03, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x1c, 0x00, 0x00, 0x00, 0x00, 0x81, 0x00, 0x00, // ................
	0x4c, 0x00, 0x00, 0x00, 0x30, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x01, 0x00, 0x02, 0x00, // L...0...........
	0x3c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x75, 0x5f, 0x74, 0x65, 0x78, 0x43, 0x6f, 0x6c, // <.......u_texCol
	0x6f, 0x72, 0x00, 0xab, 0x04, 0x00, 0x0e, 0x00, 0x01, 0x00, 0x01, 0x00, 0x01, 0x00, 0x00, 0x00, // or..............
	0x00, 0x00, 0x00, 0x00, 0x70, 0x73, 0x5f, 0x33, 0x5f, 0x30, 0x00, 0x4d, 0x69, 0x63, 0x72, 0x6f, // ....ps_3_0.Micro
	0x73, 0x6f, 0x66, 0x74, 0x20, 0x28, 0x52, 0x29, 0x20, 0x48, 0x4c, 0x53, 0x4c, 0x20, 0x53, 0x68, // soft (R) HLSL Sh
	0x61, 0x64, 0x65, 0x72, 0x20, 0x43, 0x6f, 0x6d, 0x70, 0x69, 0x6c, 0x65, 0x72, 0x20, 0x39, 0x2e, // ader Compiler 9.
	0x32, 0x39, 0x2e, 0x39, 0x35, 0x32, 0x2e, 0x33, 0x31, 0x31, 0x31, 0x00, 0x51, 0x00, 0x00, 0x05, // 29.952.3111.Q...
	0x00, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x80, 0x40, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x00, // .......@...?....
	0x00, 0x00, 0x80, 0x3f, 0x51, 0x00, 0x00, 0x05, 0x01, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x80, // ...?Q...........
	0x00, 0x00, 0x80, 0xbf, 0x00, 0x00, 0x00, 0xc0, 0x00, 0x00, 0x40, 0xc0, 0x51, 0x00, 0x00, 0x05, // ..........@.Q...
	0x02, 0x00, 0x0f, 0xa0, 0x00, 0x00, 0x00, 0x41, 0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0xc0, // .......A...?....
	0x00, 0x00, 0x40, 0x40, 0x1f, 0x00, 0x00, 0x02, 0x0a, 0x00, 0x00, 0x80, 0x00, 0x00, 0x0f, 0x90, // ..@@............
	0x1f, 0x00, 0x00, 0x02, 0x05, 0x00, 0x00, 0x80, 0x01, 0x00, 0x0f, 0x90, 0x1f, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x00, 0x98, 0x00, 0x08, 0x0f, 0xa0, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x01, 0x80, // ................
	0x01, 0x00, 0xff, 0x90, 0x00, 0x00, 0x00, 0xa0, 0x00, 0x00, 0x55, 0xa0, 0x13, 0x00, 0x00, 0x02, // ..........U.....
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, // ........X.......
	0x00, 0x00, 0x55, 0x81, 0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xff, 0xa0, 0x02, 0x00, 0x00, 0x03, // ..U.............
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x81, 0x58, 0x00, 0x00, 0x04, // ..........U.X...
	0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xaa, 0xa0, 0x00, 0x00, 0xaa, 0x80, // ................
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, // ..............U.
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0x00, 0x80, 0x01, 0x00, 0xe4, 0xa0, // ................
	0x58, 0x00, 0x00, 0x04, 0x00, 0x00, 0x0f, 0x80, 0x00, 0x00, 0xe4, 0x8c, 0x00, 0x00, 0xff, 0xa0, // X...............
	0x00, 0x00, 0xaa, 0xa0, 0x42, 0x00, 0x00, 0x03, 0x01, 0x00, 0x0f, 0x80, 0x01, 0x00, 0xe4, 0x90, // ....B...........
	0x00, 0x08, 0xe4, 0xa0, 0x09, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x01, 0x00, 0xc6, 0x80, // ................
	0x00, 0x00, 0xe4, 0x80, 0x01, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0e, 0x80, 0x01, 0x00, 0x90, 0x91, // ................
	0x5c, 0x00, 0x00, 0x02, 0x00, 0x00, 0x0e, 0x80, 0x00, 0x00, 0xe4, 0x80, 0x08, 0x00, 0x00, 0x03, // ................
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x00, 0x00, 0xf9, 0x80, 0x07, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, // ......U.........
	0x00, 0x00, 0x55, 0x80, 0x5b, 0x00, 0x00, 0x02, 0x01, 0x00, 0x07, 0x80, 0x01, 0x00, 0xe4, 0x90, // ..U.[...........
	0x08, 0x00, 0x00, 0x03, 0x00, 0x00, 0x04, 0x80, 0x01, 0x00, 0xe4, 0x80, 0x01, 0x00, 0xe4, 0x80, // ................
	0x07, 0x00, 0x00, 0x02, 0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x06, 0x00, 0x00, 0x02, // ................
	0x00, 0x00, 0x04, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x02, 0x80, // ................
	0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0xaa, 0x80, 0x04, 0x00, 0x00, 0x04, 0x00, 0x00, 0x04, 0x80, // ..U.............
	0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0xa1, 0x02, 0x00, 0x55, 0xa0, 0x04, 0x00, 0x00, 0x04, // ..U.......U.....
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x02, 0x00, 0x00, 0xa0, 0x02, 0x00, 0x55, 0xa0, // ......U.......U.
	0x02, 0x00, 0x00, 0x03, 0x00, 0x00, 0x03, 0x80, 0x00, 0x00, 0xaa, 0x81, 0x00, 0x00, 0xe4, 0x80, // ................
	0x06, 0x00, 0x00, 0x02, 0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x55, 0x80, 0x05, 0x00, 0x00, 0x03, // ..........U.....
	0x00, 0x00, 0x11, 0x80, 0x00, 0x00, 0x55, 0x80, 0x00, 0x00, 0x00, 0x80, 0x04, 0x00, 0x00, 0x04, // ......U.........
	0x00, 0x00, 0x02, 0x80, 0x00, 0x00, 0x00, 0x80, 0x02, 0x00, 0xaa, 0xa0, 0x02, 0x00, 0xff, 0xa0, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x00, 0x80, // ................
	0x05, 0x00, 0x00, 0x03, 0x00, 0x00, 0x01, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0x55, 0x80, // ..............U.
	0x05, 0x00, 0x00, 0x03, 0x00, 0x08, 0x08, 0x80, 0x00, 0x00, 0x00, 0x80, 0x00, 0x00, 0xff, 0x90, // ................
	0x01, 0x00, 0x00, 0x02, 0x00, 0x08, 0x07, 0x80, 0x00, 0x00, 0xe4, 0x90, 0xff, 0xff, 0x00, 0x00, // ................
	0x00,                                                                                           // .
};
static const uint8_t fs_font_distance_field_dx11[1036] =
{
	0x46, 0x53, 0x48, 0x03, 0x01, 0x83, 0xf2, 0xe1, 0x00, 0x00, 0xfc, 0x03, 0x44, 0x58, 0x42, 0x43, // FSH.........DXBC
	0x9a, 0xd6, 0x47, 0xb1, 0x98, 0xc8, 0x0f, 0x79, 0xab, 0x0a, 0x57, 0x47, 0xee, 0xac, 0xc0, 0xfe, // ..G....y..WG....
	0x01, 0x00, 0x00, 0x00, 0xfc, 0x03, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x2c, 0x00, 0x00, 0x00, // ............,...
	0xa0, 0x00, 0x00, 0x00, 0xd4, 0x00, 0x00, 0x00, 0x49, 0x53, 0x47, 0x4e, 0x6c, 0x00, 0x00, 0x00, // ........ISGNl...
	0x03, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........P.......
	0x01, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, // ................
	0x5c, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, // ................
	0x01, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, 0x62, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........b.......
	0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0f, 0x0f, 0x00, 0x00, // ................
	0x53, 0x56, 0x5f, 0x50, 0x4f, 0x53, 0x49, 0x54, 0x49, 0x4f, 0x4e, 0x00, 0x43, 0x4f, 0x4c, 0x4f, // SV_POSITION.COLO
	0x52, 0x00, 0x54, 0x45, 0x58, 0x43, 0x4f, 0x4f, 0x52, 0x44, 0x00, 0xab, 0x4f, 0x53, 0x47, 0x4e, // R.TEXCOORD..OSGN
	0x2c, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x08, 0x00, 0x00, 0x00, 0x20, 0x00, 0x00, 0x00, // ,........... ...
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0f, 0x00, 0x00, 0x00, 0x53, 0x56, 0x5f, 0x54, 0x41, 0x52, 0x47, 0x45, 0x54, 0x00, 0xab, 0xab, // ....SV_TARGET...
	0x53, 0x48, 0x44, 0x52, 0x20, 0x03, 0x00, 0x00, 0x40, 0x00, 0x00, 0x00, 0xc8, 0x00, 0x00, 0x00, // SHDR ...@.......
	0x5a, 0x00, 0x00, 0x03, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x58, 0x30, 0x00, 0x04, // Z....`......X0..
	0x00, 0x70, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x55, 0x55, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, // .p......UU..b...
	0xf2, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x62, 0x10, 0x00, 0x03, 0xf2, 0x10, 0x10, 0x00, // ........b.......
	0x02, 0x00, 0x00, 0x00, 0x65, 0x00, 0x00, 0x03, 0xf2, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....e.... ......
	0x68, 0x00, 0x00, 0x02, 0x02, 0x00, 0x00, 0x00, 0x69, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, // h.......i.......
	0x04, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x45, 0x00, 0x00, 0x09, 0xf2, 0x00, 0x10, 0x00, // ........E.......
	0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x46, 0x7e, 0x10, 0x00, // ....F.......F~..
	0x00, 0x00, 0x00, 0x00, 0x00, 0x60, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, // .....`......6...
	0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x2a, 0x00, 0x10, 0x00, // .0 .........*...
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6....0 .....
	0x01, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, // ............6...
	0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // .0 .............
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x06, 0x12, 0x30, 0x20, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6....0 .....
	0x03, 0x00, 0x00, 0x00, 0x3a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, // ....:.......2...
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, // ........:.......
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x40, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, // .@.....@.@.....?
	0x1b, 0x00, 0x00, 0x05, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x36, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....6...........
	0x0a, 0x30, 0x20, 0x04, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // .0 .............
	0x36, 0x00, 0x00, 0x06, 0xe2, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x06, 0x19, 0x10, 0x80, // 6...............
	0x41, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x05, 0xe2, 0x00, 0x10, 0x00, // A...............
	0x00, 0x00, 0x00, 0x00, 0x56, 0x0e, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, // ....V...........
	0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // "...............
	0x96, 0x07, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x05, 0x72, 0x00, 0x10, 0x00, // ............r...
	0x01, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, 0x02, 0x00, 0x00, 0x00, 0x10, 0x00, 0x00, 0x07, // ....F...........
	0x42, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // B.......F.......
	0x46, 0x02, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, 0x4b, 0x00, 0x00, 0x05, 0x62, 0x00, 0x10, 0x00, // F.......K...b...
	0x00, 0x00, 0x00, 0x00, 0x56, 0x06, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x07, // ....V...........
	0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // "...............
	0x2a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x0a, 0x42, 0x00, 0x10, 0x00, // *.......2...B...
	0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, // ........A.......
	0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3f, // .@.....A.@.....?
	0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, // 2..."...........
	0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x00, 0x41, 0x01, 0x40, 0x00, 0x00, // .....@.....A.@..
	0x00, 0x00, 0x00, 0x3f, 0x00, 0x00, 0x00, 0x08, 0x32, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ...?....2.......
	0xa6, 0x0a, 0x10, 0x80, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x00, 0x10, 0x00, // ....A.......F...
	0x00, 0x00, 0x00, 0x00, 0x0e, 0x00, 0x00, 0x0a, 0x22, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ........".......
	0x02, 0x40, 0x00, 0x00, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, 0x00, 0x00, 0x80, 0x3f, // .@.....?...?...?
	0x00, 0x00, 0x80, 0x3f, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x20, 0x00, 0x07, // ...?........8 ..
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x32, 0x00, 0x00, 0x09, 0x22, 0x00, 0x10, 0x00, // ........2..."...
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x40, 0x00, 0x00, // .............@..
	0x00, 0x00, 0x00, 0xc0, 0x01, 0x40, 0x00, 0x00, 0x00, 0x00, 0x40, 0x40, 0x38, 0x00, 0x00, 0x07, // .....@....@@8...
	0x12, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ................
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x12, 0x00, 0x10, 0x00, // ........8.......
	0x00, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x1a, 0x00, 0x10, 0x00, // ................
	0x00, 0x00, 0x00, 0x00, 0x38, 0x00, 0x00, 0x07, 0x82, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, // ....8.... ......
	0x0a, 0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x3a, 0x10, 0x10, 0x00, 0x01, 0x00, 0x00, 0x00, // ........:.......
	0x36, 0x00, 0x00, 0x05, 0x72, 0x20, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x46, 0x12, 0x10, 0x00, // 6...r ......F...
	0x01, 0x00, 0x00, 0x00, 0x3e, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00,                         // ....>.......
};
