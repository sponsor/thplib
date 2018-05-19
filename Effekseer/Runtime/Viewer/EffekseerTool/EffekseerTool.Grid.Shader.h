#if 0

//listing of all techniques and passes with embedded asm listings 

technique Texhnique
{
    pass P0
    {
        vertexshader = 
            asm {
            //
            // Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
            //
            // Parameters:
            //
            //   float4x4 mCameraProj;
            //
            //
            // Registers:
            //
            //   Name         Reg   Size
            //   ------------ ----- ----
            //   mCameraProj  c0       4
            //
            
                vs_2_0
                def c4, 1, 0, 0, 0
                dcl_position v0
                dcl_normal v1
                mad r0, v0.xyzx, c4.xxxy, c4.yyyx
                dp4 oPos.x, r0, c0
                dp4 oPos.y, r0, c1
                dp4 oPos.z, r0, c2
                dp4 oPos.w, r0, c3
                mov oD0, v1
            
            // approximately 6 instruction slots used
            };

        pixelshader = 
            asm {
            //
            // Generated by Microsoft (R) HLSL Shader Compiler 9.29.952.3111
                ps_2_0
                dcl v0
                mov oC0, v0
            
            // approximately 1 instruction slot used
            };
    }
}

#endif

const BYTE g_effect[] =
{
      1,   9, 255, 254, 184,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,   2,   0, 
      0,   0,  96,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   4,   0,   0,   0, 
      4,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  12,   0,   0,   0, 
    109,  67,  97, 109, 101, 114, 
     97,  80, 114, 111, 106,   0, 
      1,   0,   0,   0,  16,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      2,   0,   0,   0,  15,   0, 
      0,   0,   4,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      3,   0,   0,   0,  80,  48, 
      0,   0,  10,   0,   0,   0, 
     84, 101, 120, 104, 110, 105, 
    113, 117, 101,   0,   0,   0, 
      1,   0,   0,   0,   1,   0, 
      0,   0,   3,   0,   0,   0, 
      3,   0,   0,   0,   4,   0, 
      0,   0,  32,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 168,   0,   0,   0, 
      0,   0,   0,   0,   1,   0, 
      0,   0, 160,   0,   0,   0, 
      0,   0,   0,   0,   2,   0, 
      0,   0, 146,   0,   0,   0, 
      0,   0,   0,   0, 116,   0, 
      0,   0, 112,   0,   0,   0, 
    147,   0,   0,   0,   0,   0, 
      0,   0, 140,   0,   0,   0, 
    136,   0,   0,   0,   0,   0, 
      0,   0,   2,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0, 255, 255, 255, 255, 
      1,   0,   0,   0,   0,   0, 
      0,   0, 124,   0,   0,   0, 
      0,   2, 255, 255, 254, 255, 
     22,   0,  67,  84,  65,  66, 
     28,   0,   0,   0,  35,   0, 
      0,   0,   0,   2, 255, 255, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,  32, 
     28,   0,   0,   0, 112, 115, 
     95,  50,  95,  48,   0,  77, 
    105,  99, 114, 111, 115, 111, 
    102, 116,  32,  40,  82,  41, 
     32,  72,  76,  83,  76,  32, 
     83, 104,  97, 100, 101, 114, 
     32,  67, 111, 109, 112, 105, 
    108, 101, 114,  32,  57,  46, 
     50,  57,  46,  57,  53,  50, 
     46,  51,  49,  49,  49,   0, 
     31,   0,   0,   2,   0,   0, 
      0, 128,   0,   0,  15, 144, 
      1,   0,   0,   2,   0,   8, 
     15, 128,   0,   0, 228, 144, 
    255, 255,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    255, 255, 255, 255,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    100,   1,   0,   0,   0,   2, 
    254, 255, 254, 255,  50,   0, 
     67,  84,  65,  66,  28,   0, 
      0,   0, 147,   0,   0,   0, 
      0,   2, 254, 255,   1,   0, 
      0,   0,  28,   0,   0,   0, 
      0,   0,   0,  32, 140,   0, 
      0,   0,  48,   0,   0,   0, 
      2,   0,   0,   0,   4,   0, 
      0,   0,  60,   0,   0,   0, 
     76,   0,   0,   0, 109,  67, 
     97, 109, 101, 114,  97,  80, 
    114, 111, 106,   0,   3,   0, 
      3,   0,   4,   0,   4,   0, 
      1,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
    118, 115,  95,  50,  95,  48, 
      0,  77, 105,  99, 114, 111, 
    115, 111, 102, 116,  32,  40, 
     82,  41,  32,  72,  76,  83, 
     76,  32,  83, 104,  97, 100, 
    101, 114,  32,  67, 111, 109, 
    112, 105, 108, 101, 114,  32, 
     57,  46,  50,  57,  46,  57, 
     53,  50,  46,  51,  49,  49, 
     49,   0,  81,   0,   0,   5, 
      4,   0,  15, 160,   0,   0, 
    128,  63,   0,   0,   0,   0, 
      0,   0,   0,   0,   0,   0, 
      0,   0,  31,   0,   0,   2, 
      0,   0,   0, 128,   0,   0, 
     15, 144,  31,   0,   0,   2, 
      3,   0,   0, 128,   1,   0, 
     15, 144,   4,   0,   0,   4, 
      0,   0,  15, 128,   0,   0, 
     36, 144,   4,   0,  64, 160, 
      4,   0,  21, 160,   9,   0, 
      0,   3,   0,   0,   1, 192, 
      0,   0, 228, 128,   0,   0, 
    228, 160,   9,   0,   0,   3, 
      0,   0,   2, 192,   0,   0, 
    228, 128,   1,   0, 228, 160, 
      9,   0,   0,   3,   0,   0, 
      4, 192,   0,   0, 228, 128, 
      2,   0, 228, 160,   9,   0, 
      0,   3,   0,   0,   8, 192, 
      0,   0, 228, 128,   3,   0, 
    228, 160,   1,   0,   0,   2, 
      0,   0,  15, 208,   1,   0, 
    228, 144, 255, 255,   0,   0
};
