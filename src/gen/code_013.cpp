#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// fn_800EC9D0
void f_800EC9D0(Ctx* __restrict c) {
  trace_call(0x800EC9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EC9D0
  c->r[0]=c->lr; // 800EC9D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EC9D8
  c->r[11]=c->r[1]+0x00000030u; // 800EC9DC
  c->lr=0x800EC9E4u; f_800ADA2C(c); // 800EC9E0
  c->r[6]=0u+0x80390000u; // 800EC9E4
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800EC9E8
  c->r[6]=c->r[6]+0x000077B0u; // 800EC9EC
  W32(c->r[1]+0x00000008u,c->r[5]); // 800EC9F0
  c->r[29]=R32(c->r[6]+c->r[0]); // 800EC9F4
  c->r[27]=c->r[3]|c->r[3]; // 800EC9F8
  c->r[28]=c->r[4]|c->r[4]; // 800EC9FC
  c->r[30]=c->r[5]|c->r[5]; // 800ECA00
  c->r[0]=R8(c->r[29]+0x00000BA7u); // 800ECA04
  cmps(c,0,(int32_t)c->r[0],0); // 800ECA08
  if (!crb(c,2)) { goto L_800ECA20; } // 800ECA0C
  c->r[3]=c->r[30]|c->r[30]; // 800ECA10
  c->r[4]=0u+0x00000000u; // 800ECA14
  c->r[5]=0u+0x00000060u; // 800ECA18
  c->lr=0x800ECA20u; f_80004714(c); // 800ECA1C
L_800ECA20:;
  c->r[3]=R8(c->r[28]+0x00000002u); // 800ECA20
  c->r[9]=0u+0x80390000u; // 800ECA24
  c->r[0]=R8(c->r[28]+0x00000001u); // 800ECA28
  c->r[31]=0u+0x00000000u; // 800ECA2C
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800ECA30
  c->r[10]=rotl(c->r[27],2)&0x000003FCu; // 800ECA34
  c->r[0]=c->r[0]&0x00009F1Fu; cr0(c,c->r[0]); // 800ECA38
  c->r[9]=c->r[9]+0x000077B0u; // 800ECA3C
  c->r[3]=c->r[27]|c->r[27]; // 800ECA40
  c->r[4]=c->r[1]+0x00000008u; // 800ECA44
  W16(c->r[30]+0x00000000u,c->r[0]); // 800ECA48
  c->r[6]=c->r[28]+0x00000004u; // 800ECA4C
  c->r[5]=0u+0x00000000u; // 800ECA50
  c->r[7]=0u+0x00000000u; // 800ECA54
  W32(c->r[29]+0x00000848u,c->r[31]); // 800ECA58
  c->r[8]=R8(c->r[28]+0x00000003u); // 800ECA5C
  c->r[0]=R8(c->r[28]+0x00000001u); // 800ECA60
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800ECA64
  c->r[9]=R32(c->r[9]+c->r[10]); // 800ECA68
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800ECA6C
  c->r[0]=rotl(c->r[0],26)&0x00000002u; // 800ECA70
  c->r[8]=rotl(c->r[8],0)&0xFFFFFFFCu; // 800ECA74
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000874u); // 800ECA78
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800ECA7C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800ECA80
  c->r[0]=c->r[8]|c->r[0]; // 800ECA84
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800ECA88
  c->r[0]=c->r[0]-c->r[9]; // 800ECA8C
  W16(c->r[30]+0x00000002u,c->r[0]); // 800ECA90
  c->r[8]=R8(c->r[28]+0x00000002u); // 800ECA94
  c->r[0]=R8(c->r[28]+0x00000001u); // 800ECA98
  c->r[8]=rotl(c->r[8],3)&0xFFFFFFF8u; // 800ECA9C
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000006u); // 800ECAA0
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800ECAA4
  c->r[0]=rotl(c->r[0],1)&0x000000C0u; // 800ECAA8
  c->r[8]=rotl(c->r[8],0)&0xFFFFFF00u; // 800ECAAC
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800ECAB0
  c->r[0]=c->r[8]|c->r[0]; // 800ECAB4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800ECAB8
  c->r[0]=c->r[9]|c->r[0]; // 800ECABC
  W16(c->r[30]+0x00000006u,c->r[0]); // 800ECAC0
  c->lr=0x800ECAC8u; f_800EAB80(c); // 800ECAC4
  c->r[3]=c->r[27]|c->r[27]; // 800ECAC8
  c->r[4]=c->r[1]+0x00000008u; // 800ECACC
  c->r[6]=c->r[28]+0x0000000Du; // 800ECAD0
  c->r[5]=0u+0x00000001u; // 800ECAD4
  c->r[7]=0u+0x00000000u; // 800ECAD8
  c->lr=0x800ECAE0u; f_800EAB80(c); // 800ECADC
  c->lr=0x800ECAE4u; f_8007FFF0(c); // 800ECAE0
  c->r[0]=R8(c->r[29]+0x00000BA7u); // 800ECAE4
  c->r[0]=c->r[0]|0x00000001u; // 800ECAE8
  W8(c->r[29]+0x00000BA7u,c->r[0]); // 800ECAEC
  cmpu(c,0,c->r[0],0x00000003u); // 800ECAF0
  if (!crb(c,2)) { goto L_800ECB1C; } // 800ECAF4
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000878u); // 800ECAF8
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000006u); // 800ECAFC
  c->r[0]=c->r[0]-c->r[4]; // 800ECB00
  W16(c->r[30]+0x00000006u,c->r[0]); // 800ECB04
  c->r[0]=R8(c->r[29]+0x0000090Cu); // 800ECB08
  c->r[0]=cntlz(c->r[0]); // 800ECB0C
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800ECB10
  W8(c->r[29]+0x0000090Cu,c->r[0]); // 800ECB14
  W8(c->r[29]+0x00000BA7u,c->r[31]); // 800ECB18
L_800ECB1C:;
  c->lr=0x800ECB20u; f_80080030(c); // 800ECB1C
  c->r[11]=c->r[1]+0x00000030u; // 800ECB20
  c->lr=0x800ECB28u; f_800ADA78(c); // 800ECB24
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ECB28
  c->lr=c->r[0]; // 800ECB2C
  c->r[1]=c->r[1]+0x00000030u; // 800ECB30
  return; // 800ECB34
  unimpl(c,0x800ECB38u,"00000000"); // 800ECB38
  unimpl(c,0x800ECB3Cu,"00000000"); // 800ECB3C
  f_800ECB40(c);
}

// fn_800ECB40
void f_800ECB40(Ctx* __restrict c) {
  trace_call(0x800ECB40u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECB40
  c->r[0]=c->lr; // 800ECB44
  W32(c->r[1]+0x00000034u,c->r[0]); // 800ECB48
  c->r[11]=c->r[1]+0x00000030u; // 800ECB4C
  c->lr=0x800ECB54u; f_800ADA2C(c); // 800ECB50
  c->r[6]=0u+0x80390000u; // 800ECB54
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800ECB58
  c->r[6]=c->r[6]+0x000077B0u; // 800ECB5C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800ECB60
  c->r[29]=R32(c->r[6]+c->r[0]); // 800ECB64
  c->r[27]=c->r[3]|c->r[3]; // 800ECB68
  c->r[28]=c->r[4]|c->r[4]; // 800ECB6C
  c->r[30]=c->r[5]|c->r[5]; // 800ECB70
  c->r[0]=R8(c->r[29]+0x00000BA7u); // 800ECB74
  cmps(c,0,(int32_t)c->r[0],0); // 800ECB78
  if (!crb(c,2)) { goto L_800ECB90; } // 800ECB7C
  c->r[3]=c->r[30]|c->r[30]; // 800ECB80
  c->r[4]=0u+0x00000000u; // 800ECB84
  c->r[5]=0u+0x00000060u; // 800ECB88
  c->lr=0x800ECB90u; f_80004714(c); // 800ECB8C
L_800ECB90:;
  c->r[3]=R8(c->r[28]+0x00000002u); // 800ECB90
  c->r[9]=0u+0x80390000u; // 800ECB94
  c->r[0]=R8(c->r[28]+0x00000001u); // 800ECB98
  c->r[31]=0u+0x00000000u; // 800ECB9C
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 800ECBA0
  c->r[10]=rotl(c->r[27],2)&0x000003FCu; // 800ECBA4
  c->r[0]=c->r[0]&0x00009F1Fu; cr0(c,c->r[0]); // 800ECBA8
  c->r[9]=c->r[9]+0x000077B0u; // 800ECBAC
  c->r[3]=c->r[27]|c->r[27]; // 800ECBB0
  c->r[4]=c->r[1]+0x00000008u; // 800ECBB4
  W16(c->r[30]+0x00000000u,c->r[0]); // 800ECBB8
  c->r[6]=c->r[28]+0x00000004u; // 800ECBBC
  c->r[5]=0u+0x00000002u; // 800ECBC0
  c->r[7]=0u+0x00000000u; // 800ECBC4
  W32(c->r[29]+0x00000848u,c->r[31]); // 800ECBC8
  c->r[8]=R8(c->r[28]+0x00000003u); // 800ECBCC
  c->r[0]=R8(c->r[28]+0x00000001u); // 800ECBD0
  c->r[8]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800ECBD4
  c->r[9]=R32(c->r[9]+c->r[10]); // 800ECBD8
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800ECBDC
  c->r[0]=rotl(c->r[0],26)&0x00000002u; // 800ECBE0
  c->r[8]=rotl(c->r[8],0)&0xFFFFFFFCu; // 800ECBE4
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[9]+0x00000876u); // 800ECBE8
  c->r[8]=(uint32_t)(int32_t)(int16_t)c->r[8]; // 800ECBEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800ECBF0
  c->r[0]=c->r[8]|c->r[0]; // 800ECBF4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800ECBF8
  c->r[0]=c->r[0]-c->r[9]; // 800ECBFC
  W16(c->r[30]+0x00000004u,c->r[0]); // 800ECC00
  c->r[0]=R8(c->r[28]+0x00000001u); // 800ECC04
  c->r[8]=R8(c->r[28]+0x00000002u); // 800ECC08
  c->r[0]=rotl(c->r[0],29)&0x0000000Cu; // 800ECC0C
  c->r[9]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000006u); // 800ECC10
  c->r[0]=(rotl(c->r[8],31)&0x00000030u)|(c->r[0]&~0x00000030u); // 800ECC14
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 800ECC18
  c->r[0]=c->r[9]|c->r[0]; // 800ECC1C
  W16(c->r[30]+0x00000006u,c->r[0]); // 800ECC20
  c->lr=0x800ECC28u; f_800EAB80(c); // 800ECC24
  c->r[3]=c->r[27]|c->r[27]; // 800ECC28
  c->r[4]=c->r[1]+0x00000008u; // 800ECC2C
  c->r[6]=c->r[28]+0x0000000Du; // 800ECC30
  c->r[5]=0u+0x00000003u; // 800ECC34
  c->r[7]=0u+0x00000000u; // 800ECC38
  c->lr=0x800ECC40u; f_800EAB80(c); // 800ECC3C
  c->lr=0x800ECC44u; f_8007FFF0(c); // 800ECC40
  c->r[0]=R8(c->r[29]+0x00000BA7u); // 800ECC44
  c->r[0]=c->r[0]|0x00000002u; // 800ECC48
  W8(c->r[29]+0x00000BA7u,c->r[0]); // 800ECC4C
  cmpu(c,0,c->r[0],0x00000003u); // 800ECC50
  if (!crb(c,2)) { goto L_800ECC7C; } // 800ECC54
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x00000878u); // 800ECC58
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x00000006u); // 800ECC5C
  c->r[0]=c->r[0]-c->r[4]; // 800ECC60
  W16(c->r[30]+0x00000006u,c->r[0]); // 800ECC64
  c->r[0]=R8(c->r[29]+0x0000090Cu); // 800ECC68
  c->r[0]=cntlz(c->r[0]); // 800ECC6C
  c->r[0]=rotl(c->r[0],27)&0x000000FFu; // 800ECC70
  W8(c->r[29]+0x0000090Cu,c->r[0]); // 800ECC74
  W8(c->r[29]+0x00000BA7u,c->r[31]); // 800ECC78
L_800ECC7C:;
  c->lr=0x800ECC80u; f_80080030(c); // 800ECC7C
  c->r[11]=c->r[1]+0x00000030u; // 800ECC80
  c->lr=0x800ECC88u; f_800ADA78(c); // 800ECC84
  c->r[0]=R32(c->r[1]+0x00000034u); // 800ECC88
  c->lr=c->r[0]; // 800ECC8C
  c->r[1]=c->r[1]+0x00000030u; // 800ECC90
  return; // 800ECC94
  unimpl(c,0x800ECC98u,"00000000"); // 800ECC98
  unimpl(c,0x800ECC9Cu,"00000000"); // 800ECC9C
  f_800ECCA0(c);
}

// fn_800ECCA0
void f_800ECCA0(Ctx* __restrict c) {
  trace_call(0x800ECCA0u);
  return; // 800ECCA0
  unimpl(c,0x800ECCA4u,"00000000"); // 800ECCA4
  unimpl(c,0x800ECCA8u,"00000000"); // 800ECCA8
  unimpl(c,0x800ECCACu,"00000000"); // 800ECCAC
  f_800ECCB0(c);
}

// WPADiCreateKey
void f_800ECCB0(Ctx* __restrict c) {
  trace_call(0x800ECCB0u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ECCB0
  c->r[0]=c->lr; // 800ECCB4
  W32(c->r[1]+0x00000094u,c->r[0]); // 800ECCB8
  c->r[11]=c->r[1]+0x00000090u; // 800ECCBC
  c->lr=0x800ECCC4u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ECCC0
  c->r[4]=0u+0x80390000u; // 800ECCC4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800ECCC8
  c->r[4]=c->r[4]+0x000077B0u; // 800ECCCC
  c->r[31]=R32(c->r[4]+c->r[0]); // 800ECCD0
  c->lr=0x800ECCD8u; f_800843A0(c); // 800ECCD4
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 800ECCD8
  W8(c->r[13]+0xFFFFA093u,c->r[0]); // 800ECCDC
  c->lr=0x800ECCE4u; f_800843A0(c); // 800ECCE0
  c->r[0]=rotl(c->r[3],16)&0x0000003Fu; // 800ECCE4
  W8(c->r[13]+0xFFFFA092u,c->r[0]); // 800ECCE8
  c->lr=0x800ECCF0u; f_800843A0(c); // 800ECCEC
  c->r[6]=R8(c->r[13]+0xFFFFA092u); // 800ECCF0
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 800ECCF4
  c->r[0]=R8(c->r[13]+0xFFFFA093u); // 800ECCF8
  c->r[4]=c->r[3]&0x0000004Cu; cr0(c,c->r[4]); // 800ECCFC
  c->r[5]=0u+0x92490000u; // 800ECD00
  c->r[3]=0u+0x80330000u; // 800ECD04
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800ECD08
  c->r[7]=0u+0x80810000u; // 800ECD0C
  c->r[8]=c->r[5]+0x00002493u; // 800ECD10
  W8(c->r[13]+0xFFFFA091u,c->r[4]); // 800ECD14
  c->r[0]=c->r[7]+0xFFFF8081u; // 800ECD18
  c->r[11]=0u+0x000000FFu; // 800ECD1C
  c->r[10]=c->r[4]+c->r[9]; // 800ECD20
  c->r[5]=0u+0x00000002u; // 800ECD24
  c->r[9]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[10])>>32); // 800ECD28
  W8(c->r[13]+0xFFFFA090u,c->r[11]); // 800ECD2C
  c->r[3]=c->r[3]+0xFFFF85E0u; // 800ECD30
  c->r[7]=0u+0x00000000u; // 800ECD34
  c->r[9]=rotl(c->r[9],25)&0x01FFFFFFu; // 800ECD38
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)255); // 800ECD3C
  c->r[9]=c->r[10]-c->r[9]; // 800ECD40
  c->r[10]=rotl(c->r[9],0)&0x000000FFu; // 800ECD44
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[10])>>32); // 800ECD48
  c->r[8]=c->r[8]+c->r[10]; // 800ECD4C
  c->r[8]=sraw(c,c->r[8],2); // 800ECD50
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 800ECD54
  c->r[8]=c->r[8]+c->r[9]; // 800ECD58
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)7); // 800ECD5C
  c->r[8]=c->r[10]-c->r[8]; // 800ECD60
  c->r[30]=rotl(c->r[8],0)&0x000000FFu; // 800ECD64
  c->r[8]=(uint32_t)((int32_t)c->r[30]*(int32_t)6); // 800ECD68
  c->r[14]=rotl(c->r[8],0)&0x000000FFu; // 800ECD6C
  c->ctr=c->r[5]; // 800ECD70
L_800ECD74:;
  c->r[5]=rotl(c->r[10],0)&0x000000FFu; // 800ECD74
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 800ECD78
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800ECD7C
  c->r[7]=c->r[7]+0x00000005u; // 800ECD80
  c->r[5]=c->r[1]+0x00000018u; // 800ECD84
  c->r[5]=c->r[5]+c->r[8]; // 800ECD88
  c->r[9]=c->r[4]+c->r[9]; // 800ECD8C
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ECD90
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ECD94
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ECD98
  c->r[8]=c->r[9]-c->r[8]; // 800ECD9C
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ECDA0
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ECDA4
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ECDA8
  W8(c->r[5]+0x00000000u,c->r[9]); // 800ECDAC
  c->r[9]=c->r[4]+c->r[8]; // 800ECDB0
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ECDB4
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ECDB8
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ECDBC
  c->r[8]=c->r[9]-c->r[8]; // 800ECDC0
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ECDC4
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ECDC8
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ECDCC
  W8(c->r[5]+0x00000001u,c->r[9]); // 800ECDD0
  c->r[9]=c->r[4]+c->r[8]; // 800ECDD4
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ECDD8
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ECDDC
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ECDE0
  c->r[8]=c->r[9]-c->r[8]; // 800ECDE4
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ECDE8
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ECDEC
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ECDF0
  W8(c->r[5]+0x00000002u,c->r[9]); // 800ECDF4
  c->r[9]=c->r[4]+c->r[8]; // 800ECDF8
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ECDFC
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ECE00
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ECE04
  c->r[8]=c->r[9]-c->r[8]; // 800ECE08
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ECE0C
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ECE10
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ECE14
  W8(c->r[5]+0x00000003u,c->r[9]); // 800ECE18
  c->r[9]=c->r[4]+c->r[8]; // 800ECE1C
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ECE20
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ECE24
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ECE28
  c->r[8]=c->r[9]-c->r[8]; // 800ECE2C
  c->r[10]=rotl(c->r[8],0)&0x000000FFu; // 800ECE30
  c->r[8]=R8(c->r[3]+c->r[10]); // 800ECE34
  W8(c->r[5]+0x00000004u,c->r[8]); // 800ECE38
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ECD74; } // 800ECE3C
  W8(c->r[13]+0xFFFFA093u,c->r[10]); // 800ECE40
  c->lr=0x800ECE48u; f_8007FFF0(c); // 800ECE44
  c->r[5]=0u+0x80330000u; // 800ECE48
  c->r[7]=R8(c->r[1]+0x0000001Au); // 800ECE4C
  c->r[5]=c->r[5]+0xFFFF85E0u; // 800ECE50
  c->r[20]=R8(c->r[1]+0x00000018u); // 800ECE54
  c->r[8]=R8(c->r[5]+c->r[7]); // 800ECE58
  c->r[16]=0u+0x80330000u; // 800ECE5C
  c->r[9]=R8(c->r[5]+c->r[20]); // 800ECE60
  c->r[16]=c->r[16]+0xFFFF85B0u; // 800ECE64
  c->r[0]=R8(c->r[1]+0x0000001Du); // 800ECE68
  c->r[6]=rotl(c->r[8],29)&0xE0000000u; // 800ECE6C
  c->r[15]=rotl(c->r[8],1)&0x00000001u; // 800ECE70
  c->r[4]=c->r[14]+c->r[16]; // 800ECE74
  c->r[6]=c->r[6]-c->r[15]; // 800ECE78
  c->r[28]=R8(c->r[1]+0x00000019u); // 800ECE7C
  c->r[12]=rotl(c->r[6],3)&0xFFFFFFFFu; // 800ECE80
  c->r[16]=R8(c->r[16]+c->r[14]); // 800ECE84
  c->r[6]=R8(c->r[5]+c->r[0]); // 800ECE88
  c->r[12]=c->r[12]+c->r[15]; // 800ECE8C
  c->r[15]=rotl(c->r[12],0)&0x000000FFu; // 800ECE90
  c->r[10]=rotl(c->r[9],29)&0xE0000000u; // 800ECE94
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 800ECE98
  c->r[18]=c->r[16]^c->r[6]; // 800ECE9C
  c->r[10]=c->r[10]-c->r[11]; // 800ECEA0
  c->r[27]=R8(c->r[5]+c->r[28]); // 800ECEA4
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFFFu; // 800ECEA8
  c->r[14]=R8(c->r[4]+0x00000001u); // 800ECEAC
  c->r[11]=c->r[10]+c->r[11]; // 800ECEB0
  c->r[17]=sraw(c,c->r[18],(c->r[15])&63); // 800ECEB4
  c->r[16]=addc(c,~c->r[15],0x00000008u,1); // 800ECEB8
  c->r[24]=R8(c->r[1]+0x00000021u); // 800ECEBC
  c->r[12]=R8(c->r[1]+0x0000001Fu); // 800ECEC0
  c->r[16]=((c->r[16])&0x20)?0u:(c->r[18]<<((c->r[16])&31)); // 800ECEC4
  c->r[26]=R8(c->r[1]+0x0000001Eu); // 800ECEC8
  c->r[16]=c->r[17]|c->r[16]; // 800ECECC
  c->r[19]=c->r[14]^c->r[27]; // 800ECED0
  c->r[11]=rotl(c->r[11],0)&0x000000FFu; // 800ECED4
  c->r[15]=sraw(c,c->r[19],(c->r[11])&63); // 800ECED8
  c->r[10]=R8(c->r[1]+0x0000001Cu); // 800ECEDC
  c->r[14]=addc(c,~c->r[11],0x00000008u,1); // 800ECEE0
  c->r[23]=R8(c->r[5]+c->r[24]); // 800ECEE4
  c->r[14]=((c->r[14])&0x20)?0u:(c->r[19]<<((c->r[14])&31)); // 800ECEE8
  c->r[17]=rotl(c->r[16],0)&0x000000FFu; // 800ECEEC
  c->r[14]=c->r[15]|c->r[14]; // 800ECEF0
  c->r[11]=R8(c->r[5]+c->r[10]); // 800ECEF4
  c->r[16]=rotl(c->r[14],0)&0x000000FFu; // 800ECEF8
  c->r[14]=R8(c->r[1]+0x00000020u); // 800ECEFC
  W8(c->r[1]+0x00000028u,c->r[14]); // 800ECF00
  c->r[17]=c->r[17]-c->r[23]; // 800ECF04
  c->r[14]=c->r[16]-c->r[6]; // 800ECF08
  c->r[29]=R8(c->r[5]+c->r[12]); // 800ECF0C
  c->r[16]=c->r[11]^c->r[17]; // 800ECF10
  c->r[25]=R8(c->r[5]+c->r[26]); // 800ECF14
  c->r[14]=c->r[29]^c->r[14]; // 800ECF18
  c->r[15]=R8(c->r[4]+0x00000002u); // 800ECF1C
  W32(c->r[1]+0x00000024u,c->r[3]); // 800ECF20
  c->r[22]=rotl(c->r[16],0)&0x000000FFu; // 800ECF24
  c->r[3]=c->r[15]^c->r[25]; // 800ECF28
  c->r[21]=rotl(c->r[14],0)&0x000000FFu; // 800ECF2C
  c->r[14]=R8(c->r[1]+0x00000028u); // 800ECF30
  c->r[15]=rotl(c->r[29],29)&0xE0000000u; // 800ECF34
  c->r[18]=rotl(c->r[29],1)&0x00000001u; // 800ECF38
  c->r[17]=R8(c->r[4]+0x00000003u); // 800ECF3C
  c->r[16]=R8(c->r[5]+c->r[14]); // 800ECF40
  c->r[14]=c->r[30]+0x00000002u; // 800ECF44
  W32(c->r[1]+0x00000030u,c->r[14]); // 800ECF48
  c->r[15]=c->r[15]-c->r[18]; // 800ECF4C
  c->r[14]=rotl(c->r[16],29)&0xE0000000u; // 800ECF50
  c->r[16]=rotl(c->r[16],1)&0x00000001u; // 800ECF54
  c->r[14]=c->r[14]-c->r[16]; // 800ECF58
  c->r[17]=c->r[17]^c->r[11]; // 800ECF5C
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFFFu; // 800ECF60
  c->r[19]=rotl(c->r[15],3)&0xFFFFFFFFu; // 800ECF64
  c->r[14]=c->r[14]+c->r[16]; // 800ECF68
  c->r[16]=rotl(c->r[3],0)&0x000000FFu; // 800ECF6C
  c->r[15]=rotl(c->r[14],0)&0x000000FFu; // 800ECF70
  c->r[14]=R8(c->r[4]+0x00000004u); // 800ECF74
  c->r[3]=sraw(c,c->r[16],(c->r[15])&63); // 800ECF78
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 800ECF7C
  c->r[3]=c->r[19]+c->r[18]; // 800ECF80
  c->r[18]=addc(c,~c->r[15],0x00000008u,1); // 800ECF84
  W32(c->r[1]+0x0000003Cu,c->r[18]); // 800ECF88
  c->r[19]=rotl(c->r[25],29)&0xE0000000u; // 800ECF8C
  c->r[18]=rotl(c->r[25],1)&0x00000001u; // 800ECF90
  c->r[4]=R8(c->r[4]+0x00000005u); // 800ECF94
  c->r[25]=c->r[19]-c->r[18]; // 800ECF98
  c->r[19]=rotl(c->r[3],0)&0x000000FFu; // 800ECF9C
  c->r[14]=c->r[14]^c->r[27]; // 800ECFA0
  c->r[17]=rotl(c->r[17],0)&0x000000FFu; // 800ECFA4
  c->r[25]=rotl(c->r[25],3)&0xFFFFFFFFu; // 800ECFA8
  c->r[27]=c->r[4]^c->r[29]; // 800ECFAC
  c->r[18]=c->r[25]+c->r[18]; // 800ECFB0
  c->r[25]=R32(c->r[1]+0x0000003Cu); // 800ECFB4
  c->r[4]=sraw(c,c->r[17],(c->r[19])&63); // 800ECFB8
  c->r[14]=rotl(c->r[14],0)&0x000000FFu; // 800ECFBC
  c->r[19]=addc(c,~c->r[19],0x00000008u,1); // 800ECFC0
  c->r[16]=((c->r[25])&0x20)?0u:(c->r[16]<<((c->r[25])&31)); // 800ECFC4
  c->r[25]=R32(c->r[1]+0x0000002Cu); // 800ECFC8
  c->r[19]=((c->r[19])&0x20)?0u:(c->r[17]<<((c->r[19])&31)); // 800ECFCC
  c->r[18]=rotl(c->r[18],0)&0x000000FFu; // 800ECFD0
  c->r[3]=R8(c->r[1]+0x0000001Bu); // 800ECFD4
  c->r[17]=sraw(c,c->r[14],(c->r[18])&63); // 800ECFD8
  c->r[25]=c->r[25]|c->r[16]; // 800ECFDC
  c->r[16]=addc(c,~c->r[18],0x00000008u,1); // 800ECFE0
  c->r[18]=rotl(c->r[27],0)&0x000000FFu; // 800ECFE4
  c->r[27]=sraw(c,c->r[18],(c->r[15])&63); // 800ECFE8
  c->r[4]=c->r[4]|c->r[19]; // 800ECFEC
  c->r[19]=((c->r[16])&0x20)?0u:(c->r[14]<<((c->r[16])&31)); // 800ECFF0
  c->r[15]=addc(c,~c->r[15],0x00000008u,1); // 800ECFF4
  c->r[16]=((c->r[15])&0x20)?0u:(c->r[18]<<((c->r[15])&31)); // 800ECFF8
  c->r[15]=R8(c->r[5]+c->r[3]); // 800ECFFC
  c->r[17]=c->r[17]|c->r[19]; // 800ED000
  c->r[14]=rotl(c->r[25],0)&0x000000FFu; // 800ED004
  c->r[16]=c->r[27]|c->r[16]; // 800ED008
  c->r[18]=rotl(c->r[4],0)&0x000000FFu; // 800ED00C
  c->r[4]=rotl(c->r[16],0)&0x000000FFu; // 800ED010
  c->r[17]=rotl(c->r[17],0)&0x000000FFu; // 800ED014
  c->r[19]=c->r[14]-c->r[8]; // 800ED018
  c->r[16]=c->r[18]-c->r[15]; // 800ED01C
  c->r[14]=c->r[17]-c->r[15]; // 800ED020
  c->r[4]=c->r[4]-c->r[6]; // 800ED024
  c->r[15]=c->r[9]^c->r[19]; // 800ED028
  c->r[8]=c->r[8]^c->r[16]; // 800ED02C
  c->r[9]=c->r[11]^c->r[14]; // 800ED030
  c->r[11]=c->r[23]^c->r[4]; // 800ED034
  c->r[4]=R32(c->r[1]+0x00000030u); // 800ED038
  c->r[6]=rotl(c->r[15],0)&0x000000FFu; // 800ED03C
  c->r[8]=rotl(c->r[8],0)&0x000000FFu; // 800ED040
  c->r[9]=rotl(c->r[9],0)&0x000000FFu; // 800ED044
  c->r[23]=rotl(c->r[4],8)&0xFFFFFF00u; // 800ED048
  c->r[11]=rotl(c->r[11],0)&0x000000FFu; // 800ED04C
  c->r[14]=c->r[30]+0x00000001u; // 800ED050
  c->r[4]=c->r[3]+c->r[23]; // 800ED054
  c->r[25]=rotl(c->r[14],8)&0xFFFFFF00u; // 800ED058
  W32(c->r[1]+0x00000034u,c->r[4]); // 800ED05C
  c->r[30]=c->r[0]+c->r[23]; // 800ED060
  c->r[0]=c->r[7]+c->r[23]; // 800ED064
  W32(c->r[1]+0x00000038u,c->r[0]); // 800ED068
  c->r[29]=c->r[26]+c->r[23]; // 800ED06C
  c->r[17]=c->r[12]+c->r[23]; // 800ED070
  c->r[14]=c->r[10]+c->r[23]; // 800ED074
  c->r[10]=c->r[24]+c->r[23]; // 800ED078
  c->r[24]=c->r[28]+c->r[25]; // 800ED07C
  c->r[0]=R8(c->r[1]+0x00000028u); // 800ED080
  c->r[16]=c->r[11]+c->r[25]; // 800ED084
  c->r[12]=c->r[21]+c->r[25]; // 800ED088
  c->r[18]=c->r[6]+c->r[25]; // 800ED08C
  c->r[27]=c->r[20]+c->r[25]; // 800ED090
  c->r[20]=c->r[20]+c->r[23]; // 800ED094
  c->r[3]=c->r[3]+c->r[25]; // 800ED098
  c->r[19]=c->r[9]+c->r[25]; // 800ED09C
  c->r[26]=c->r[0]+c->r[23]; // 800ED0A0
  c->r[0]=R8(c->r[19]+c->r[5]); // 800ED0A4
  c->r[19]=R32(c->r[1]+0x00000034u); // 800ED0A8
  c->r[28]=c->r[28]+c->r[23]; // 800ED0AC
  c->r[23]=c->r[7]+c->r[25]; // 800ED0B0
  c->r[15]=c->r[22]+c->r[25]; // 800ED0B4
  c->r[4]=c->r[8]+c->r[25]; // 800ED0B8
  c->r[19]=R8(c->r[19]+c->r[5]); // 800ED0BC
  c->r[25]=R8(c->r[26]+c->r[5]); // 800ED0C0
  c->r[7]=c->r[1]+0x00000018u; // 800ED0C4
  c->r[24]=R8(c->r[24]+c->r[5]); // 800ED0C8
  c->r[19]=c->r[0]^c->r[19]; // 800ED0CC
  c->r[17]=R8(c->r[17]+c->r[5]); // 800ED0D0
  c->r[24]=c->r[24]^c->r[25]; // 800ED0D4
  c->r[16]=R8(c->r[16]+c->r[5]); // 800ED0D8
  c->r[0]=c->r[0]^c->r[17]; // 800ED0DC
  c->r[14]=R8(c->r[14]+c->r[5]); // 800ED0E0
  c->r[17]=c->r[16]^c->r[17]; // 800ED0E4
  c->r[12]=R8(c->r[12]+c->r[5]); // 800ED0E8
  c->r[16]=c->r[16]^c->r[14]; // 800ED0EC
  c->r[26]=R8(c->r[30]+c->r[5]); // 800ED0F0
  c->r[14]=c->r[12]^c->r[14]; // 800ED0F4
  c->r[12]=c->r[12]^c->r[25]; // 800ED0F8
  c->r[3]=R8(c->r[3]+c->r[5]); // 800ED0FC
  c->r[18]=R8(c->r[18]+c->r[5]); // 800ED100
  c->r[25]=R8(c->r[4]+c->r[5]); // 800ED104
  c->r[3]=c->r[3]^c->r[26]; // 800ED108
  c->r[4]=c->r[18]^c->r[26]; // 800ED10C
  c->r[10]=R8(c->r[10]+c->r[5]); // 800ED110
  c->r[20]=R8(c->r[20]+c->r[5]); // 800ED114
  c->r[18]=c->r[18]^c->r[10]; // 800ED118
  c->r[10]=c->r[25]^c->r[10]; // 800ED11C
  c->r[20]=c->r[25]^c->r[20]; // 800ED120
  c->r[25]=R8(c->r[15]+c->r[5]); // 800ED124
  c->r[15]=R32(c->r[1]+0x00000038u); // 800ED128
  c->r[26]=R8(c->r[28]+c->r[5]); // 800ED12C
  c->r[15]=R8(c->r[15]+c->r[5]); // 800ED130
  c->r[29]=R8(c->r[29]+c->r[5]); // 800ED134
  c->r[28]=c->r[25]^c->r[15]; // 800ED138
  c->r[15]=R8(c->r[27]+c->r[5]); // 800ED13C
  c->r[5]=R8(c->r[23]+c->r[5]); // 800ED140
  c->r[25]=c->r[25]^c->r[26]; // 800ED144
  c->r[15]=c->r[15]^c->r[29]; // 800ED148
  W8(c->r[1]+0x00000010u,c->r[19]); // 800ED14C
  c->r[5]=c->r[5]^c->r[29]; // 800ED150
  W8(c->r[1]+0x00000011u,c->r[4]); // 800ED154
  W8(c->r[1]+0x00000012u,c->r[17]); // 800ED158
  W8(c->r[1]+0x00000013u,c->r[28]); // 800ED15C
  W8(c->r[1]+0x00000014u,c->r[14]); // 800ED160
  W8(c->r[1]+0x00000015u,c->r[10]); // 800ED164
  W8(c->r[1]+0x00000016u,c->r[15]); // 800ED168
  W8(c->r[1]+0x00000017u,c->r[24]); // 800ED16C
  W8(c->r[1]+0x00000008u,c->r[25]); // 800ED170
  W8(c->r[1]+0x00000009u,c->r[16]); // 800ED174
  W8(c->r[1]+0x0000000Au,c->r[20]); // 800ED178
  W8(c->r[1]+0x0000000Bu,c->r[18]); // 800ED17C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800ED180
  W8(c->r[1]+0x0000000Du,c->r[12]); // 800ED184
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800ED188
  W8(c->r[1]+0x0000000Fu,c->r[5]); // 800ED18C
  c->r[5]=0u+0x00000000u; // 800ED190
  c->r[3]=0u+0x00000001u; // 800ED194
  c->r[4]=addc(c,~c->r[5],0x00000009u,1); // 800ED198
  c->r[0]=0u+0x00000002u; // 800ED19C
  c->r[4]=R8(c->r[7]+c->r[4]); // 800ED1A0
  c->r[3]=addc(c,~c->r[3],0x00000009u,1); // 800ED1A4
  W8(c->r[31]+0x00000B0Cu,c->r[4]); // 800ED1A8
  c->r[4]=addc(c,~c->r[0],0x00000009u,1); // 800ED1AC
  c->r[3]=R8(c->r[7]+c->r[3]); // 800ED1B0
  c->r[0]=0u+0x00000003u; // 800ED1B4
  W8(c->r[31]+0x00000B0Du,c->r[3]); // 800ED1B8
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 800ED1BC
  c->r[4]=R8(c->r[7]+c->r[4]); // 800ED1C0
  c->r[0]=0u+0x00000004u; // 800ED1C4
  W8(c->r[31]+0x00000B0Eu,c->r[4]); // 800ED1C8
  c->r[0]=addc(c,~c->r[0],0x00000009u,1); // 800ED1CC
  c->r[4]=R8(c->r[7]+c->r[3]); // 800ED1D0
  c->r[5]=0u+0x00000005u; // 800ED1D4
  W8(c->r[31]+0x00000B0Fu,c->r[4]); // 800ED1D8
  c->r[4]=addc(c,~c->r[5],0x00000009u,1); // 800ED1DC
  c->r[0]=R8(c->r[7]+c->r[0]); // 800ED1E0
  c->r[3]=0u+0x00000006u; // 800ED1E4
  W8(c->r[31]+0x00000B10u,c->r[0]); // 800ED1E8
  c->r[3]=addc(c,~c->r[3],0x00000009u,1); // 800ED1EC
  c->r[4]=R8(c->r[7]+c->r[4]); // 800ED1F0
  c->r[0]=0u+0x00000007u; // 800ED1F4
  W8(c->r[31]+0x00000B11u,c->r[4]); // 800ED1F8
  c->r[4]=addc(c,~c->r[0],0x00000009u,1); // 800ED1FC
  c->r[3]=R8(c->r[7]+c->r[3]); // 800ED200
  c->r[0]=0u+0x00000008u; // 800ED204
  W8(c->r[31]+0x00000B12u,c->r[3]); // 800ED208
  c->r[3]=addc(c,~c->r[0],0x00000009u,1); // 800ED20C
  c->r[4]=R8(c->r[7]+c->r[4]); // 800ED210
  c->r[0]=0u+0x00000009u; // 800ED214
  W8(c->r[31]+0x00000B13u,c->r[4]); // 800ED218
  c->r[0]=addc(c,~c->r[0],0x00000009u,1); // 800ED21C
  c->r[4]=R8(c->r[7]+c->r[3]); // 800ED220
  c->r[3]=c->r[31]+0x00000B1Cu; // 800ED224
  W8(c->r[31]+0x00000B14u,c->r[4]); // 800ED228
  c->r[4]=c->r[1]+0x00000010u; // 800ED22C
  c->r[0]=R8(c->r[7]+c->r[0]); // 800ED230
  c->r[5]=0u+0x00000008u; // 800ED234
  W8(c->r[31]+0x00000B15u,c->r[0]); // 800ED238
  W8(c->r[31]+0x00000B16u,c->r[11]); // 800ED23C
  W8(c->r[31]+0x00000B17u,c->r[9]); // 800ED240
  W8(c->r[31]+0x00000B18u,c->r[8]); // 800ED244
  W8(c->r[31]+0x00000B19u,c->r[6]); // 800ED248
  W8(c->r[31]+0x00000B1Au,c->r[21]); // 800ED24C
  W8(c->r[31]+0x00000B1Bu,c->r[22]); // 800ED250
  c->lr=0x800ED258u; f_800043C4(c); // 800ED254
  c->r[3]=c->r[31]+0x00000B24u; // 800ED258
  c->r[4]=c->r[1]+0x00000008u; // 800ED25C
  c->r[5]=0u+0x00000008u; // 800ED260
  c->lr=0x800ED268u; f_800043C4(c); // 800ED264
  c->r[3]=R32(c->r[1]+0x00000024u); // 800ED268
  c->lr=0x800ED270u; f_80080030(c); // 800ED26C
  c->r[11]=c->r[1]+0x00000090u; // 800ED270
  c->lr=0x800ED278u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED274
  c->r[0]=R32(c->r[1]+0x00000094u); // 800ED278
  c->lr=c->r[0]; // 800ED27C
  c->r[1]=c->r[1]+0x00000090u; // 800ED280
  return; // 800ED284
  unimpl(c,0x800ED288u,"00000000"); // 800ED288
  unimpl(c,0x800ED28Cu,"00000000"); // 800ED28C
  f_800ED290(c);
}

// fn_800ED290
void f_800ED290(Ctx* __restrict c) {
  trace_call(0x800ED290u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED290
  c->r[0]=c->lr; // 800ED294
  W32(c->r[1]+0x00000094u,c->r[0]); // 800ED298
  c->r[11]=c->r[1]+0x00000090u; // 800ED29C
  c->lr=0x800ED2A4u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800ED2A0
  c->r[4]=0u+0x80390000u; // 800ED2A4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800ED2A8
  c->r[4]=c->r[4]+0x000077B0u; // 800ED2AC
  c->r[31]=R32(c->r[4]+c->r[0]); // 800ED2B0
  c->lr=0x800ED2B8u; f_800843A0(c); // 800ED2B4
  c->r[0]=rotl(c->r[3],24)&0x000000FFu; // 800ED2B8
  W8(c->r[13]+0xFFFFA093u,c->r[0]); // 800ED2BC
  c->lr=0x800ED2C4u; f_800843A0(c); // 800ED2C0
  c->r[0]=rotl(c->r[3],16)&0x0000003Fu; // 800ED2C4
  W8(c->r[13]+0xFFFFA092u,c->r[0]); // 800ED2C8
  c->lr=0x800ED2D0u; f_800843A0(c); // 800ED2CC
  c->r[6]=R8(c->r[13]+0xFFFFA092u); // 800ED2D0
  c->r[3]=rotl(c->r[3],8)&0x000000FFu; // 800ED2D4
  c->r[0]=R8(c->r[13]+0xFFFFA093u); // 800ED2D8
  c->r[4]=c->r[3]&0x0000004Cu; cr0(c,c->r[4]); // 800ED2DC
  c->r[5]=0u+0x92490000u; // 800ED2E0
  c->r[3]=0u+0x80330000u; // 800ED2E4
  c->r[9]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[6]); // 800ED2E8
  c->r[7]=0u+0x80810000u; // 800ED2EC
  c->r[8]=c->r[5]+0x00002493u; // 800ED2F0
  W8(c->r[13]+0xFFFFA091u,c->r[4]); // 800ED2F4
  c->r[0]=c->r[7]+0xFFFF8081u; // 800ED2F8
  c->r[11]=0u+0x000000FFu; // 800ED2FC
  c->r[10]=c->r[4]+c->r[9]; // 800ED300
  c->r[5]=0u+0x00000002u; // 800ED304
  c->r[9]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[10])>>32); // 800ED308
  W8(c->r[13]+0xFFFFA090u,c->r[11]); // 800ED30C
  c->r[3]=c->r[3]+0xFFFF8F10u; // 800ED310
  c->r[7]=0u+0x00000000u; // 800ED314
  c->r[9]=rotl(c->r[9],25)&0x01FFFFFFu; // 800ED318
  c->r[9]=(uint32_t)((int32_t)c->r[9]*(int32_t)255); // 800ED31C
  c->r[9]=c->r[10]-c->r[9]; // 800ED320
  c->r[10]=rotl(c->r[9],0)&0x000000FFu; // 800ED324
  c->r[8]=(uint32_t)(((int64_t)(int32_t)c->r[8]*(int64_t)(int32_t)c->r[10])>>32); // 800ED328
  c->r[8]=c->r[8]+c->r[10]; // 800ED32C
  c->r[8]=sraw(c,c->r[8],2); // 800ED330
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 800ED334
  c->r[8]=c->r[8]+c->r[9]; // 800ED338
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)7); // 800ED33C
  c->r[8]=c->r[10]-c->r[8]; // 800ED340
  c->r[30]=rotl(c->r[8],0)&0x000000FFu; // 800ED344
  c->r[8]=(uint32_t)((int32_t)c->r[30]*(int32_t)6); // 800ED348
  c->r[14]=rotl(c->r[8],0)&0x000000FFu; // 800ED34C
  c->ctr=c->r[5]; // 800ED350
L_800ED354:;
  c->r[5]=rotl(c->r[10],0)&0x000000FFu; // 800ED354
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 800ED358
  c->r[9]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[6]); // 800ED35C
  c->r[7]=c->r[7]+0x00000005u; // 800ED360
  c->r[5]=c->r[1]+0x00000018u; // 800ED364
  c->r[5]=c->r[5]+c->r[8]; // 800ED368
  c->r[9]=c->r[4]+c->r[9]; // 800ED36C
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ED370
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ED374
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ED378
  c->r[8]=c->r[9]-c->r[8]; // 800ED37C
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ED380
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ED384
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ED388
  W8(c->r[5]+0x00000000u,c->r[9]); // 800ED38C
  c->r[9]=c->r[4]+c->r[8]; // 800ED390
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ED394
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ED398
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ED39C
  c->r[8]=c->r[9]-c->r[8]; // 800ED3A0
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ED3A4
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ED3A8
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ED3AC
  W8(c->r[5]+0x00000001u,c->r[9]); // 800ED3B0
  c->r[9]=c->r[4]+c->r[8]; // 800ED3B4
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ED3B8
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ED3BC
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ED3C0
  c->r[8]=c->r[9]-c->r[8]; // 800ED3C4
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ED3C8
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ED3CC
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ED3D0
  W8(c->r[5]+0x00000002u,c->r[9]); // 800ED3D4
  c->r[9]=c->r[4]+c->r[8]; // 800ED3D8
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ED3DC
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ED3E0
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ED3E4
  c->r[8]=c->r[9]-c->r[8]; // 800ED3E8
  c->r[9]=rotl(c->r[8],0)&0x000000FFu; // 800ED3EC
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[6]); // 800ED3F0
  c->r[9]=R8(c->r[3]+c->r[9]); // 800ED3F4
  W8(c->r[5]+0x00000003u,c->r[9]); // 800ED3F8
  c->r[9]=c->r[4]+c->r[8]; // 800ED3FC
  c->r[8]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[9])>>32); // 800ED400
  c->r[8]=rotl(c->r[8],25)&0x01FFFFFFu; // 800ED404
  c->r[8]=(uint32_t)((int32_t)c->r[8]*(int32_t)255); // 800ED408
  c->r[8]=c->r[9]-c->r[8]; // 800ED40C
  c->r[10]=rotl(c->r[8],0)&0x000000FFu; // 800ED410
  c->r[8]=R8(c->r[3]+c->r[10]); // 800ED414
  W8(c->r[5]+0x00000004u,c->r[8]); // 800ED418
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ED354; } // 800ED41C
  W8(c->r[13]+0xFFFFA093u,c->r[10]); // 800ED420
  c->lr=0x800ED428u; f_8007FFF0(c); // 800ED424
  c->r[27]=0u+0x80330000u; // 800ED428
  c->r[23]=R8(c->r[1]+0x00000019u); // 800ED42C
  c->r[27]=c->r[27]+0xFFFF8F10u; // 800ED430
  c->r[21]=R8(c->r[1]+0x0000001Au); // 800ED434
  c->r[22]=R8(c->r[27]+c->r[23]); // 800ED438
  c->r[7]=0u+0x80330000u; // 800ED43C
  c->r[7]=c->r[7]+0xFFFF8EE0u; // 800ED440
  c->r[12]=R8(c->r[27]+c->r[21]); // 800ED444
  c->r[0]=rotl(c->r[22],29)&0xE0000000u; // 800ED448
  c->r[5]=rotl(c->r[22],1)&0x00000001u; // 800ED44C
  c->r[0]=c->r[0]-c->r[5]; // 800ED450
  c->r[8]=R8(c->r[1]+0x00000018u); // 800ED454
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800ED458
  c->r[6]=rotl(c->r[12],1)&0x00000001u; // 800ED45C
  c->r[4]=c->r[4]+c->r[5]; // 800ED460
  c->r[0]=rotl(c->r[12],29)&0xE0000000u; // 800ED464
  c->r[5]=c->r[0]-c->r[6]; // 800ED468
  c->r[16]=R8(c->r[27]+c->r[8]); // 800ED46C
  c->r[9]=R8(c->r[7]+c->r[14]); // 800ED470
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 800ED474
  c->r[20]=R8(c->r[1]+0x0000001Cu); // 800ED478
  c->r[6]=c->r[5]+c->r[6]; // 800ED47C
  c->r[5]=R8(c->r[1]+0x0000001Eu); // 800ED480
  c->r[10]=c->r[9]^c->r[16]; // 800ED484
  c->r[0]=R8(c->r[1]+0x00000020u); // 800ED488
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800ED48C
  c->r[28]=c->r[14]+c->r[7]; // 800ED490
  W8(c->r[1]+0x00000029u,c->r[5]); // 800ED494
  c->r[7]=addc(c,~c->r[4],0x00000008u,1); // 800ED498
  c->r[9]=rotl(c->r[6],0)&0x000000FFu; // 800ED49C
  c->r[7]=sraw(c,c->r[10],(c->r[7])&63); // 800ED4A0
  c->r[4]=((c->r[4])&0x20)?0u:(c->r[10]<<((c->r[4])&31)); // 800ED4A4
  c->r[14]=c->r[4]|c->r[7]; // 800ED4A8
  W8(c->r[1]+0x00000028u,c->r[0]); // 800ED4AC
  c->r[0]=R8(c->r[27]+c->r[0]); // 800ED4B0
  c->r[17]=addc(c,~c->r[9],0x00000008u,1); // 800ED4B4
  c->r[6]=R8(c->r[1]+0x00000029u); // 800ED4B8
  c->r[4]=R8(c->r[28]+0x00000002u); // 800ED4BC
  c->r[10]=rotl(c->r[0],29)&0xE0000000u; // 800ED4C0
  c->r[11]=R8(c->r[27]+c->r[6]); // 800ED4C4
  c->r[6]=rotl(c->r[14],0)&0x000000FFu; // 800ED4C8
  c->r[15]=rotl(c->r[0],1)&0x00000001u; // 800ED4CC
  c->r[19]=R8(c->r[27]+c->r[20]); // 800ED4D0
  c->r[7]=R8(c->r[28]+0x00000001u); // 800ED4D4
  c->r[14]=c->r[10]-c->r[15]; // 800ED4D8
  c->r[5]=R8(c->r[1]+0x0000001Bu); // 800ED4DC
  c->r[24]=c->r[11]+c->r[6]; // 800ED4E0
  c->r[7]=c->r[7]^c->r[19]; // 800ED4E4
  c->r[18]=R8(c->r[1]+0x0000001Fu); // 800ED4E8
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[7]<<((c->r[9])&31)); // 800ED4EC
  c->r[10]=R8(c->r[27]+c->r[5]); // 800ED4F0
  c->r[7]=sraw(c,c->r[7],(c->r[17])&63); // 800ED4F4
  c->r[17]=R8(c->r[27]+c->r[18]); // 800ED4F8
  c->r[7]=c->r[9]|c->r[7]; // 800ED4FC
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFFFu; // 800ED500
  c->r[9]=c->r[14]+c->r[15]; // 800ED504
  W32(c->r[1]+0x00000024u,c->r[3]); // 800ED508
  c->r[6]=rotl(c->r[7],0)&0x000000FFu; // 800ED50C
  c->r[14]=c->r[17]^c->r[24]; // 800ED510
  c->r[6]=c->r[10]+c->r[6]; // 800ED514
  c->r[4]=c->r[4]^c->r[12]; // 800ED518
  c->r[7]=c->r[22]^c->r[6]; // 800ED51C
  c->r[26]=rotl(c->r[9],0)&0x000000FFu; // 800ED520
  c->r[6]=rotl(c->r[14],0)&0x000000FFu; // 800ED524
  c->r[7]=rotl(c->r[7],0)&0x000000FFu; // 800ED528
  c->r[3]=R8(c->r[1]+0x00000021u); // 800ED52C
  c->r[29]=rotl(c->r[4],0)&0x000000FFu; // 800ED530
  c->r[9]=addc(c,~c->r[26],0x00000008u,1); // 800ED534
  c->r[14]=R8(c->r[28]+0x00000003u); // 800ED538
  c->r[4]=R8(c->r[27]+c->r[3]); // 800ED53C
  c->r[12]=c->r[30]+0x00000002u; // 800ED540
  c->r[25]=c->r[14]^c->r[11]; // 800ED544
  c->r[9]=sraw(c,c->r[29],(c->r[9])&63); // 800ED548
  c->r[11]=rotl(c->r[4],29)&0xE0000000u; // 800ED54C
  c->r[24]=rotl(c->r[4],1)&0x00000001u; // 800ED550
  W32(c->r[1]+0x00000038u,c->r[12]); // 800ED554
  c->r[12]=c->r[11]-c->r[24]; // 800ED558
  c->r[14]=rotl(c->r[12],3)&0xFFFFFFFFu; // 800ED55C
  c->r[11]=R8(c->r[28]+0x00000005u); // 800ED560
  c->r[14]=c->r[14]+c->r[24]; // 800ED564
  W32(c->r[1]+0x0000002Cu,c->r[9]); // 800ED568
  c->r[9]=rotl(c->r[10],29)&0xE0000000u; // 800ED56C
  c->r[10]=rotl(c->r[10],1)&0x00000001u; // 800ED570
  c->r[24]=rotl(c->r[14],0)&0x000000FFu; // 800ED574
  W32(c->r[1]+0x00000034u,c->r[11]); // 800ED578
  c->r[14]=c->r[9]-c->r[10]; // 800ED57C
  c->r[11]=rotl(c->r[19],29)&0xE0000000u; // 800ED580
  c->r[9]=addc(c,~c->r[24],0x00000008u,1); // 800ED584
  c->r[12]=rotl(c->r[19],1)&0x00000001u; // 800ED588
  c->r[14]=rotl(c->r[14],3)&0xFFFFFFFFu; // 800ED58C
  c->r[25]=rotl(c->r[25],0)&0x000000FFu; // 800ED590
  c->r[11]=c->r[11]-c->r[12]; // 800ED594
  W32(c->r[1]+0x00000030u,c->r[9]); // 800ED598
  c->r[10]=c->r[14]+c->r[10]; // 800ED59C
  c->r[15]=R8(c->r[1]+0x0000001Du); // 800ED5A0
  c->r[14]=R32(c->r[1]+0x00000030u); // 800ED5A4
  c->r[11]=rotl(c->r[11],3)&0xFFFFFFFFu; // 800ED5A8
  c->r[11]=c->r[11]+c->r[12]; // 800ED5AC
  c->r[12]=R8(c->r[28]+0x00000004u); // 800ED5B0
  c->r[9]=R8(c->r[27]+c->r[15]); // 800ED5B4
  c->r[28]=rotl(c->r[11],0)&0x000000FFu; // 800ED5B8
  c->r[14]=sraw(c,c->r[25],(c->r[14])&63); // 800ED5BC
  c->r[24]=((c->r[24])&0x20)?0u:(c->r[25]<<((c->r[24])&31)); // 800ED5C0
  c->r[11]=c->r[12]^c->r[9]; // 800ED5C4
  c->r[12]=addc(c,~c->r[28],0x00000008u,1); // 800ED5C8
  c->r[12]=sraw(c,c->r[11],(c->r[12])&63); // 800ED5CC
  c->r[25]=R32(c->r[1]+0x0000002Cu); // 800ED5D0
  c->r[26]=((c->r[26])&0x20)?0u:(c->r[29]<<((c->r[26])&31)); // 800ED5D4
  c->r[11]=((c->r[28])&0x20)?0u:(c->r[11]<<((c->r[28])&31)); // 800ED5D8
  c->r[25]=c->r[26]|c->r[25]; // 800ED5DC
  c->r[26]=R32(c->r[1]+0x00000034u); // 800ED5E0
  c->r[14]=c->r[24]|c->r[14]; // 800ED5E4
  c->r[11]=c->r[11]|c->r[12]; // 800ED5E8
  c->r[10]=rotl(c->r[10],0)&0x000000FFu; // 800ED5EC
  c->r[4]=c->r[26]^c->r[4]; // 800ED5F0
  c->r[26]=addc(c,~c->r[10],0x00000008u,1); // 800ED5F4
  c->r[12]=rotl(c->r[14],0)&0x000000FFu; // 800ED5F8
  c->r[10]=((c->r[10])&0x20)?0u:(c->r[4]<<((c->r[10])&31)); // 800ED5FC
  c->r[24]=rotl(c->r[25],0)&0x000000FFu; // 800ED600
  c->r[4]=sraw(c,c->r[4],(c->r[26])&63); // 800ED604
  c->r[4]=c->r[10]|c->r[4]; // 800ED608
  c->r[10]=rotl(c->r[11],0)&0x000000FFu; // 800ED60C
  c->r[11]=c->r[17]+c->r[12]; // 800ED610
  c->r[14]=c->r[19]+c->r[24]; // 800ED614
  c->r[10]=c->r[0]+c->r[10]; // 800ED618
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800ED61C
  c->r[0]=c->r[0]+c->r[4]; // 800ED620
  c->r[11]=c->r[16]^c->r[11]; // 800ED624
  c->r[10]=c->r[22]^c->r[10]; // 800ED628
  c->r[12]=c->r[9]^c->r[14]; // 800ED62C
  c->r[4]=c->r[9]^c->r[0]; // 800ED630
  c->r[9]=rotl(c->r[11],0)&0x000000FFu; // 800ED634
  c->r[11]=rotl(c->r[4],0)&0x000000FFu; // 800ED638
  c->r[4]=R32(c->r[1]+0x00000038u); // 800ED63C
  c->r[0]=rotl(c->r[12],0)&0x000000FFu; // 800ED640
  c->r[10]=rotl(c->r[10],0)&0x000000FFu; // 800ED644
  c->r[22]=rotl(c->r[4],8)&0xFFFFFF00u; // 800ED648
  c->r[28]=c->r[3]+c->r[22]; // 800ED64C
  c->r[3]=R8(c->r[1]+0x00000029u); // 800ED650
  c->r[4]=c->r[30]+0x00000001u; // 800ED654
  c->r[29]=c->r[15]+c->r[22]; // 800ED658
  c->r[25]=c->r[3]+c->r[22]; // 800ED65C
  c->r[3]=R8(c->r[1]+0x00000028u); // 800ED660
  c->r[24]=rotl(c->r[4],8)&0xFFFFFF00u; // 800ED664
  c->r[16]=c->r[18]+c->r[22]; // 800ED668
  c->r[4]=c->r[21]+c->r[22]; // 800ED66C
  c->r[12]=c->r[20]+c->r[22]; // 800ED670
  c->r[18]=c->r[3]+c->r[22]; // 800ED674
  c->r[3]=c->r[23]+c->r[24]; // 800ED678
  c->r[30]=c->r[5]+c->r[22]; // 800ED67C
  c->r[15]=c->r[11]+c->r[24]; // 800ED680
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800ED684
  c->r[4]=c->r[7]+c->r[24]; // 800ED688
  c->r[17]=c->r[0]+c->r[24]; // 800ED68C
  c->r[14]=c->r[6]+c->r[24]; // 800ED690
  c->r[20]=c->r[8]+c->r[24]; // 800ED694
  c->r[23]=c->r[23]+c->r[22]; // 800ED698
  c->r[8]=c->r[8]+c->r[22]; // 800ED69C
  c->r[19]=c->r[10]+c->r[24]; // 800ED6A0
  c->r[5]=c->r[5]+c->r[24]; // 800ED6A4
  c->r[22]=R8(c->r[19]+c->r[27]); // 800ED6A8
  c->r[26]=c->r[9]+c->r[24]; // 800ED6AC
  c->r[21]=c->r[21]+c->r[24]; // 800ED6B0
  c->r[24]=R8(c->r[30]+c->r[27]); // 800ED6B4
  c->r[19]=c->r[1]+0x00000018u; // 800ED6B8
  c->r[16]=R8(c->r[16]+c->r[27]); // 800ED6BC
  c->r[24]=c->r[22]^c->r[24]; // 800ED6C0
  c->r[15]=R8(c->r[15]+c->r[27]); // 800ED6C4
  c->r[22]=c->r[22]^c->r[16]; // 800ED6C8
  c->r[12]=R8(c->r[12]+c->r[27]); // 800ED6CC
  c->r[16]=c->r[15]^c->r[16]; // 800ED6D0
  c->r[4]=R8(c->r[4]+c->r[27]); // 800ED6D4
  c->r[15]=c->r[15]^c->r[12]; // 800ED6D8
  c->r[18]=R8(c->r[18]+c->r[27]); // 800ED6DC
  c->r[12]=c->r[4]^c->r[12]; // 800ED6E0
  c->r[3]=R8(c->r[3]+c->r[27]); // 800ED6E4
  c->r[4]=c->r[4]^c->r[18]; // 800ED6E8
  c->r[29]=R8(c->r[29]+c->r[27]); // 800ED6EC
  c->r[18]=c->r[3]^c->r[18]; // 800ED6F0
  c->r[3]=R8(c->r[28]+c->r[27]); // 800ED6F4
  c->r[5]=R8(c->r[5]+c->r[27]); // 800ED6F8
  c->r[17]=R8(c->r[17]+c->r[27]); // 800ED6FC
  c->r[28]=R8(c->r[26]+c->r[27]); // 800ED700
  c->r[5]=c->r[5]^c->r[29]; // 800ED704
  c->r[26]=c->r[17]^c->r[29]; // 800ED708
  c->r[17]=c->r[17]^c->r[3]; // 800ED70C
  c->r[3]=c->r[28]^c->r[3]; // 800ED710
  c->r[8]=R8(c->r[8]+c->r[27]); // 800ED714
  c->r[14]=R8(c->r[14]+c->r[27]); // 800ED718
  c->r[28]=c->r[28]^c->r[8]; // 800ED71C
  c->r[8]=R32(c->r[1]+0x0000003Cu); // 800ED720
  c->r[23]=R8(c->r[23]+c->r[27]); // 800ED724
  c->r[8]=R8(c->r[8]+c->r[27]); // 800ED728
  c->r[25]=R8(c->r[25]+c->r[27]); // 800ED72C
  c->r[29]=c->r[14]^c->r[8]; // 800ED730
  c->r[8]=R8(c->r[20]+c->r[27]); // 800ED734
  c->r[20]=c->r[14]^c->r[23]; // 800ED738
  c->r[14]=R8(c->r[21]+c->r[27]); // 800ED73C
  c->r[21]=c->r[8]^c->r[25]; // 800ED740
  W8(c->r[1]+0x00000010u,c->r[24]); // 800ED744
  c->r[8]=c->r[14]^c->r[25]; // 800ED748
  W8(c->r[1]+0x00000011u,c->r[26]); // 800ED74C
  W8(c->r[1]+0x00000012u,c->r[16]); // 800ED750
  W8(c->r[1]+0x00000013u,c->r[29]); // 800ED754
  W8(c->r[1]+0x00000014u,c->r[12]); // 800ED758
  W8(c->r[1]+0x00000015u,c->r[3]); // 800ED75C
  W8(c->r[1]+0x00000016u,c->r[21]); // 800ED760
  W8(c->r[1]+0x00000017u,c->r[18]); // 800ED764
  W8(c->r[1]+0x00000008u,c->r[20]); // 800ED768
  W8(c->r[1]+0x00000009u,c->r[15]); // 800ED76C
  W8(c->r[1]+0x0000000Au,c->r[28]); // 800ED770
  W8(c->r[1]+0x0000000Bu,c->r[17]); // 800ED774
  W8(c->r[1]+0x0000000Cu,c->r[22]); // 800ED778
  W8(c->r[1]+0x0000000Du,c->r[4]); // 800ED77C
  W8(c->r[1]+0x0000000Eu,c->r[5]); // 800ED780
  W8(c->r[1]+0x0000000Fu,c->r[8]); // 800ED784
  c->r[3]=0u+0x00000000u; // 800ED788
  c->r[4]=0u+0x00000001u; // 800ED78C
  c->r[12]=addc(c,~c->r[3],0x00000009u,1); // 800ED790
  c->r[5]=R8(c->r[19]+c->r[12]); // 800ED794
  c->r[4]=addc(c,~c->r[4],0x00000009u,1); // 800ED798
  W8(c->r[31]+0x00000B0Cu,c->r[5]); // 800ED79C
  c->r[3]=0u+0x00000002u; // 800ED7A0
  c->r[4]=R8(c->r[19]+c->r[4]); // 800ED7A4
  c->r[5]=addc(c,~c->r[3],0x00000009u,1); // 800ED7A8
  W8(c->r[31]+0x00000B0Du,c->r[4]); // 800ED7AC
  c->r[3]=0u+0x00000003u; // 800ED7B0
  c->r[5]=R8(c->r[19]+c->r[5]); // 800ED7B4
  c->r[4]=addc(c,~c->r[3],0x00000009u,1); // 800ED7B8
  W8(c->r[31]+0x00000B0Eu,c->r[5]); // 800ED7BC
  c->r[3]=0u+0x00000004u; // 800ED7C0
  c->r[4]=R8(c->r[19]+c->r[4]); // 800ED7C4
  c->r[5]=addc(c,~c->r[3],0x00000009u,1); // 800ED7C8
  W8(c->r[31]+0x00000B0Fu,c->r[4]); // 800ED7CC
  c->r[3]=0u+0x00000005u; // 800ED7D0
  c->r[8]=R8(c->r[19]+c->r[5]); // 800ED7D4
  c->r[12]=addc(c,~c->r[3],0x00000009u,1); // 800ED7D8
  W8(c->r[31]+0x00000B10u,c->r[8]); // 800ED7DC
  c->r[4]=0u+0x00000006u; // 800ED7E0
  c->r[5]=R8(c->r[19]+c->r[12]); // 800ED7E4
  c->r[4]=addc(c,~c->r[4],0x00000009u,1); // 800ED7E8
  W8(c->r[31]+0x00000B11u,c->r[5]); // 800ED7EC
  c->r[3]=0u+0x00000007u; // 800ED7F0
  c->r[4]=R8(c->r[19]+c->r[4]); // 800ED7F4
  c->r[5]=addc(c,~c->r[3],0x00000009u,1); // 800ED7F8
  W8(c->r[31]+0x00000B12u,c->r[4]); // 800ED7FC
  c->r[3]=0u+0x00000008u; // 800ED800
  c->r[5]=R8(c->r[19]+c->r[5]); // 800ED804
  c->r[4]=addc(c,~c->r[3],0x00000009u,1); // 800ED808
  W8(c->r[31]+0x00000B13u,c->r[5]); // 800ED80C
  c->r[3]=0u+0x00000009u; // 800ED810
  c->r[4]=R8(c->r[19]+c->r[4]); // 800ED814
  c->r[5]=addc(c,~c->r[3],0x00000009u,1); // 800ED818
  W8(c->r[31]+0x00000B14u,c->r[4]); // 800ED81C
  c->r[3]=c->r[31]+0x00000B1Cu; // 800ED820
  c->r[8]=R8(c->r[19]+c->r[5]); // 800ED824
  c->r[4]=c->r[1]+0x00000010u; // 800ED828
  W8(c->r[31]+0x00000B15u,c->r[8]); // 800ED82C
  c->r[5]=0u+0x00000008u; // 800ED830
  W8(c->r[31]+0x00000B16u,c->r[11]); // 800ED834
  W8(c->r[31]+0x00000B17u,c->r[10]); // 800ED838
  W8(c->r[31]+0x00000B18u,c->r[9]); // 800ED83C
  W8(c->r[31]+0x00000B19u,c->r[0]); // 800ED840
  W8(c->r[31]+0x00000B1Au,c->r[7]); // 800ED844
  W8(c->r[31]+0x00000B1Bu,c->r[6]); // 800ED848
  c->lr=0x800ED850u; f_800043C4(c); // 800ED84C
  c->r[3]=c->r[31]+0x00000B24u; // 800ED850
  c->r[4]=c->r[1]+0x00000008u; // 800ED854
  c->r[5]=0u+0x00000008u; // 800ED858
  c->lr=0x800ED860u; f_800043C4(c); // 800ED85C
  c->r[3]=R32(c->r[1]+0x00000024u); // 800ED860
  c->lr=0x800ED868u; f_80080030(c); // 800ED864
  c->r[11]=c->r[1]+0x00000090u; // 800ED868
  c->lr=0x800ED870u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800ED86C
  c->r[0]=R32(c->r[1]+0x00000094u); // 800ED870
  c->lr=c->r[0]; // 800ED874
  c->r[1]=c->r[1]+0x00000090u; // 800ED878
  return; // 800ED87C
}

// WPADiDecode
void f_800ED880(Ctx* __restrict c) {
  trace_call(0x800ED880u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800ED880
  c->r[7]=0u+0x80390000u; // 800ED884
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800ED888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800ED88C
  c->r[7]=c->r[7]+0x000077B0u; // 800ED890
  W32(c->r[1]+0x00000018u,c->r[30]); // 800ED894
  W32(c->r[1]+0x00000014u,c->r[29]); // 800ED898
  W32(c->r[1]+0x00000010u,c->r[28]); // 800ED89C
  c->r[7]=R32(c->r[7]+c->r[0]); // 800ED8A0
  c->r[3]=R8(c->r[7]+0x00000B85u); // 800ED8A4
  c->r[0]=c->r[3]+0x000000FEu; // 800ED8A8
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800ED8AC
  cmpu(c,0,c->r[0],0x00000001u); // 800ED8B0
  if (crb(c,1)) { goto L_800EDB4C; } // 800ED8B4
  cmps(c,0,(int32_t)c->r[5],0); // 800ED8B8
  c->r[8]=0u+0x00000000u; // 800ED8BC
  if (crb(c,2)) { goto L_800EDB4C; } // 800ED8C0
  cmpu(c,0,c->r[5],0x00000008u); // 800ED8C4
  c->r[3]=c->r[5]+0x00010000u; // 800ED8C8
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800ED8CC
  if (!crb(c,1)) { goto L_800EDAF4; } // 800ED8D0
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800ED8D4
  c->r[0]=c->r[3]+0x00000007u; // 800ED8D8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800ED8DC
  c->ctr=c->r[0]; // 800ED8E0
  cmpu(c,0,c->r[3],0x00000000u); // 800ED8E4
  if (!crb(c,1)) { goto L_800EDAF4; } // 800ED8E8
L_800ED8EC:;
  c->r[29]=rotl(c->r[8],0)&0x0000FFFFu; // 800ED8EC
  c->r[3]=c->r[8]+0x00000001u; // 800ED8F0
  c->r[11]=c->r[6]+c->r[29]; // 800ED8F4
  c->r[0]=c->r[8]+0x00000002u; // 800ED8F8
  c->r[10]=rotl(c->r[11],29)&0xE0000000u; // 800ED8FC
  c->r[9]=rotl(c->r[3],0)&0x0000FFFFu; // 800ED900
  c->r[12]=rotl(c->r[11],1)&0x00000001u; // 800ED904
  c->r[3]=c->r[4]+c->r[29]; // 800ED908
  c->r[10]=c->r[10]-c->r[12]; // 800ED90C
  c->r[11]=c->r[6]+c->r[9]; // 800ED910
  c->r[10]=rotl(c->r[10],3)&0xFFFFFFFFu; // 800ED914
  c->r[9]=rotl(c->r[0],0)&0x0000FFFFu; // 800ED918
  c->r[10]=c->r[10]+c->r[12]; // 800ED91C
  c->r[0]=c->r[8]+0x00000003u; // 800ED920
  c->r[12]=rotl(c->r[10],0)&0x000000FFu; // 800ED924
  c->r[31]=R8(c->r[3]+0x00000000u); // 800ED928
  c->r[29]=c->r[7]+c->r[12]; // 800ED92C
  c->r[10]=rotl(c->r[11],29)&0xE0000000u; // 800ED930
  c->r[30]=R8(c->r[29]+0x00000B24u); // 800ED934
  c->r[12]=rotl(c->r[11],1)&0x00000001u; // 800ED938
  c->r[10]=c->r[10]-c->r[12]; // 800ED93C
  c->r[29]=R8(c->r[29]+0x00000B1Cu); // 800ED940
  c->r[11]=rotl(c->r[10],3)&0xFFFFFFFFu; // 800ED944
  c->r[30]=c->r[31]^c->r[30]; // 800ED948
  c->r[10]=c->r[6]+c->r[9]; // 800ED94C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800ED950
  c->r[9]=c->r[11]+c->r[12]; // 800ED954
  c->r[11]=c->r[29]+c->r[30]; // 800ED958
  W8(c->r[3]+0x00000000u,c->r[11]); // 800ED95C
  c->r[11]=rotl(c->r[9],0)&0x000000FFu; // 800ED960
  c->r[29]=c->r[7]+c->r[11]; // 800ED964
  c->r[9]=rotl(c->r[10],29)&0xE0000000u; // 800ED968
  c->r[11]=rotl(c->r[10],1)&0x00000001u; // 800ED96C
  c->r[30]=R8(c->r[3]+0x00000001u); // 800ED970
  c->r[10]=c->r[9]-c->r[11]; // 800ED974
  c->r[9]=c->r[6]+c->r[0]; // 800ED978
  c->r[0]=rotl(c->r[10],3)&0xFFFFFFFFu; // 800ED97C
  c->r[12]=R8(c->r[29]+0x00000B24u); // 800ED980
  c->r[10]=c->r[0]+c->r[11]; // 800ED984
  c->r[31]=R8(c->r[29]+0x00000B1Cu); // 800ED988
  c->r[0]=c->r[8]+0x00000004u; // 800ED98C
  c->r[11]=c->r[30]^c->r[12]; // 800ED990
  c->r[28]=rotl(c->r[10],0)&0x000000FFu; // 800ED994
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800ED998
  c->r[10]=c->r[6]+c->r[0]; // 800ED99C
  c->r[29]=c->r[7]+c->r[28]; // 800ED9A0
  c->r[0]=c->r[31]+c->r[11]; // 800ED9A4
  W8(c->r[3]+0x00000001u,c->r[0]); // 800ED9A8
  c->r[0]=rotl(c->r[9],29)&0xE0000000u; // 800ED9AC
  c->r[11]=rotl(c->r[9],1)&0x00000001u; // 800ED9B0
  c->r[9]=c->r[0]-c->r[11]; // 800ED9B4
  c->r[30]=R8(c->r[3]+0x00000002u); // 800ED9B8
  c->r[0]=c->r[8]+0x00000005u; // 800ED9BC
  c->r[12]=R8(c->r[29]+0x00000B24u); // 800ED9C0
  c->r[9]=rotl(c->r[9],3)&0xFFFFFFFFu; // 800ED9C4
  c->r[9]=c->r[9]+c->r[11]; // 800ED9C8
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800ED9CC
  c->r[31]=rotl(c->r[9],0)&0x000000FFu; // 800ED9D0
  c->r[11]=R8(c->r[29]+0x00000B1Cu); // 800ED9D4
  c->r[9]=c->r[6]+c->r[0]; // 800ED9D8
  c->r[0]=c->r[30]^c->r[12]; // 800ED9DC
  c->r[0]=c->r[11]+c->r[0]; // 800ED9E0
  W8(c->r[3]+0x00000002u,c->r[0]); // 800ED9E4
  c->r[29]=c->r[7]+c->r[31]; // 800ED9E8
  c->r[0]=rotl(c->r[10],29)&0xE0000000u; // 800ED9EC
  c->r[10]=rotl(c->r[10],1)&0x00000001u; // 800ED9F0
  c->r[0]=c->r[0]-c->r[10]; // 800ED9F4
  c->r[12]=R8(c->r[3]+0x00000003u); // 800ED9F8
  c->r[11]=R8(c->r[29]+0x00000B24u); // 800ED9FC
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800EDA00
  c->r[10]=c->r[0]+c->r[10]; // 800EDA04
  c->r[30]=R8(c->r[29]+0x00000B1Cu); // 800EDA08
  c->r[11]=c->r[12]^c->r[11]; // 800EDA0C
  c->r[0]=rotl(c->r[9],29)&0xE0000000u; // 800EDA10
  c->r[11]=c->r[30]+c->r[11]; // 800EDA14
  W8(c->r[3]+0x00000003u,c->r[11]); // 800EDA18
  c->r[10]=rotl(c->r[10],0)&0x000000FFu; // 800EDA1C
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 800EDA20
  c->r[12]=c->r[7]+c->r[10]; // 800EDA24
  c->r[11]=R8(c->r[3]+0x00000004u); // 800EDA28
  c->r[10]=R8(c->r[12]+0x00000B24u); // 800EDA2C
  c->r[0]=c->r[0]-c->r[9]; // 800EDA30
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800EDA34
  c->r[12]=R8(c->r[12]+0x00000B1Cu); // 800EDA38
  c->r[10]=c->r[11]^c->r[10]; // 800EDA3C
  c->r[10]=c->r[12]+c->r[10]; // 800EDA40
  c->r[0]=c->r[0]+c->r[9]; // 800EDA44
  W8(c->r[3]+0x00000004u,c->r[10]); // 800EDA48
  c->r[9]=rotl(c->r[0],0)&0x000000FFu; // 800EDA4C
  c->r[0]=c->r[8]+0x00000006u; // 800EDA50
  c->r[29]=c->r[7]+c->r[9]; // 800EDA54
  c->r[9]=rotl(c->r[0],0)&0x0000FFFFu; // 800EDA58
  c->r[31]=R8(c->r[3]+0x00000005u); // 800EDA5C
  c->r[10]=c->r[6]+c->r[9]; // 800EDA60
  c->r[0]=c->r[8]+0x00000007u; // 800EDA64
  c->r[9]=rotl(c->r[10],29)&0xE0000000u; // 800EDA68
  c->r[12]=R8(c->r[29]+0x00000B24u); // 800EDA6C
  c->r[11]=rotl(c->r[10],1)&0x00000001u; // 800EDA70
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800EDA74
  c->r[9]=c->r[9]-c->r[11]; // 800EDA78
  c->r[30]=R8(c->r[29]+0x00000B1Cu); // 800EDA7C
  c->r[10]=rotl(c->r[9],3)&0xFFFFFFFFu; // 800EDA80
  c->r[12]=c->r[31]^c->r[12]; // 800EDA84
  c->r[9]=c->r[6]+c->r[0]; // 800EDA88
  c->r[8]=c->r[8]+0x00000008u; // 800EDA8C
  c->r[0]=c->r[10]+c->r[11]; // 800EDA90
  c->r[10]=c->r[30]+c->r[12]; // 800EDA94
  W8(c->r[3]+0x00000005u,c->r[10]); // 800EDA98
  c->r[10]=rotl(c->r[0],0)&0x000000FFu; // 800EDA9C
  c->r[0]=rotl(c->r[9],29)&0xE0000000u; // 800EDAA0
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 800EDAA4
  c->r[12]=c->r[7]+c->r[10]; // 800EDAA8
  c->r[11]=R8(c->r[3]+0x00000006u); // 800EDAAC
  c->r[0]=c->r[0]-c->r[9]; // 800EDAB0
  c->r[10]=R8(c->r[12]+0x00000B24u); // 800EDAB4
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800EDAB8
  c->r[12]=R8(c->r[12]+0x00000B1Cu); // 800EDABC
  c->r[0]=c->r[0]+c->r[9]; // 800EDAC0
  c->r[9]=c->r[11]^c->r[10]; // 800EDAC4
  c->r[9]=c->r[12]+c->r[9]; // 800EDAC8
  W8(c->r[3]+0x00000006u,c->r[9]); // 800EDACC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800EDAD0
  c->r[10]=c->r[7]+c->r[0]; // 800EDAD4
  c->r[9]=R8(c->r[3]+0x00000007u); // 800EDAD8
  c->r[0]=R8(c->r[10]+0x00000B24u); // 800EDADC
  c->r[10]=R8(c->r[10]+0x00000B1Cu); // 800EDAE0
  c->r[0]=c->r[9]^c->r[0]; // 800EDAE4
  c->r[0]=c->r[10]+c->r[0]; // 800EDAE8
  W8(c->r[3]+0x00000007u,c->r[0]); // 800EDAEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800ED8EC; } // 800EDAF0
L_800EDAF4:;
  c->r[3]=rotl(c->r[8],0)&0x0000FFFFu; // 800EDAF4
  c->r[0]=c->r[5]-c->r[3]; // 800EDAF8
  c->ctr=c->r[0]; // 800EDAFC
  cmpu(c,0,c->r[3],c->r[5]); // 800EDB00
  if (!crb(c,0)) { goto L_800EDB4C; } // 800EDB04
L_800EDB08:;
  c->r[9]=rotl(c->r[8],0)&0x0000FFFFu; // 800EDB08
  c->r[8]=c->r[8]+0x00000001u; // 800EDB0C
  c->r[5]=c->r[6]+c->r[9]; // 800EDB10
  c->r[3]=R8(c->r[4]+c->r[9]); // 800EDB14
  c->r[0]=rotl(c->r[5],29)&0xE0000000u; // 800EDB18
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 800EDB1C
  c->r[0]=c->r[0]-c->r[5]; // 800EDB20
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 800EDB24
  c->r[0]=c->r[0]+c->r[5]; // 800EDB28
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800EDB2C
  c->r[5]=c->r[7]+c->r[0]; // 800EDB30
  c->r[0]=R8(c->r[5]+0x00000B24u); // 800EDB34
  c->r[5]=R8(c->r[5]+0x00000B1Cu); // 800EDB38
  c->r[0]=c->r[3]^c->r[0]; // 800EDB3C
  c->r[0]=c->r[5]+c->r[0]; // 800EDB40
  W8(c->r[4]+c->r[9],c->r[0]); // 800EDB44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDB08; } // 800EDB48
L_800EDB4C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EDB4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EDB50
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EDB54
  c->r[28]=R32(c->r[1]+0x00000010u); // 800EDB58
  c->r[1]=c->r[1]+0x00000020u; // 800EDB5C
  return; // 800EDB60
  unimpl(c,0x800EDB64u,"00000000"); // 800EDB64
  unimpl(c,0x800EDB68u,"00000000"); // 800EDB68
  unimpl(c,0x800EDB6Cu,"00000000"); // 800EDB6C
  f_800EDB70(c);
}

// WPADiClearMemBlock
void f_800EDB70(Ctx* __restrict c) {
  trace_call(0x800EDB70u);
  c->r[4]=0u+0x80390000u; // 800EDB70
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EDB74
  c->r[4]=c->r[4]+0x000077B0u; // 800EDB78
  c->r[0]=0u+0x00000000u; // 800EDB7C
  c->r[3]=R32(c->r[4]+c->r[3]); // 800EDB80
  W32(c->r[3]+0x00000B8Cu,c->r[0]); // 800EDB84
  W32(c->r[3]+0x00000B90u,c->r[0]); // 800EDB88
  W16(c->r[3]+0x00000B94u,c->r[0]); // 800EDB8C
  W32(c->r[3]+0x00000B98u,c->r[0]); // 800EDB90
  W32(c->r[3]+0x00000B9Cu,c->r[0]); // 800EDB94
  return; // 800EDB98
  unimpl(c,0x800EDB9Cu,"00000000"); // 800EDB9C
  f_800EDBA0(c);
}

// WPADWriteExtReg
void f_800EDBA0(Ctx* __restrict c) {
  trace_call(0x800EDBA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDBA0
  c->r[0]=c->lr; // 800EDBA4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EDBA8
  c->r[11]=c->r[1]+0x00000030u; // 800EDBAC
  c->lr=0x800EDBB4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EDBB0
  c->r[9]=0u+0x80390000u; // 800EDBB4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EDBB8
  c->r[9]=c->r[9]+0x000077B0u; // 800EDBBC
  c->r[23]=c->r[3]|c->r[3]; // 800EDBC0
  c->r[31]=R32(c->r[9]+c->r[0]); // 800EDBC4
  c->r[24]=c->r[4]|c->r[4]; // 800EDBC8
  c->r[25]=c->r[5]|c->r[5]; // 800EDBCC
  c->r[26]=c->r[6]|c->r[6]; // 800EDBD0
  c->r[27]=c->r[7]|c->r[7]; // 800EDBD4
  c->r[28]=c->r[8]|c->r[8]; // 800EDBD8
  c->lr=0x800EDBE0u; f_8007FFF0(c); // 800EDBDC
  c->r[29]=R32(c->r[31]+0x00000900u); // 800EDBE0
  c->r[30]=R32(c->r[31]+0x00000920u); // 800EDBE4
  c->lr=0x800EDBECu; f_80080030(c); // 800EDBE8
  cmps(c,0,(int32_t)c->r[29],-1); // 800EDBEC
  if (crb(c,2)) { goto L_800EDC34; } // 800EDBF0
  cmps(c,0,(int32_t)c->r[30],0); // 800EDBF4
  if (!crb(c,2)) { goto L_800EDC04; } // 800EDBF8
  c->r[29]=0u+0xFFFFFFFEu; // 800EDBFC
  goto L_800EDC34; // 800EDC00
L_800EDC04:;
  c->r[27]=(rotl(c->r[26],16)&0x00FF0000u)|(c->r[27]&~0x00FF0000u); // 800EDC04
  c->r[4]=c->r[24]|c->r[24]; // 800EDC08
  c->r[5]=c->r[25]|c->r[25]; // 800EDC0C
  c->r[7]=c->r[28]|c->r[28]; // 800EDC10
  c->r[3]=c->r[31]+0x00000160u; // 800EDC14
  c->r[6]=c->r[27]|0x04000000u; // 800EDC18
  c->lr=0x800EDC20u; f_800E60B0(c); // 800EDC1C
  c->r[4]=0u-c->r[3]; // 800EDC20
  c->r[0]=0u+0xFFFFFFFEu; // 800EDC24
  c->r[3]=c->r[4]|c->r[3]; // 800EDC28
  c->r[3]=sraw(c,c->r[3],31); // 800EDC2C
  c->r[29]=c->r[0]&~c->r[3]; // 800EDC30
L_800EDC34:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EDC34
  if (crb(c,2)) { goto L_800EDC58; } // 800EDC38
  cmps(c,0,(int32_t)c->r[28],0); // 800EDC3C
  if (crb(c,2)) { goto L_800EDC58; } // 800EDC40
  c->r[12]=c->r[28]|c->r[28]; // 800EDC44
  c->r[3]=c->r[23]|c->r[23]; // 800EDC48
  c->r[4]=c->r[29]|c->r[29]; // 800EDC4C
  c->ctr=c->r[12]; // 800EDC50
  if (true) { c->lr=0x800EDC58u; dispatch(c,c->ctr); } // 800EDC54
L_800EDC58:;
  c->r[11]=c->r[1]+0x00000030u; // 800EDC58
  c->r[3]=c->r[29]|c->r[29]; // 800EDC5C
  c->lr=0x800EDC64u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EDC60
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EDC64
  c->lr=c->r[0]; // 800EDC68
  c->r[1]=c->r[1]+0x00000030u; // 800EDC6C
  return; // 800EDC70
  unimpl(c,0x800EDC74u,"00000000"); // 800EDC74
  unimpl(c,0x800EDC78u,"00000000"); // 800EDC78
  unimpl(c,0x800EDC7Cu,"00000000"); // 800EDC7C
  f_800EDC80(c);
}

// fn_800EDC80
void f_800EDC80(Ctx* __restrict c) {
  trace_call(0x800EDC80u);
  c->r[5]=R32(c->r[3]+0x00000000u); // 800EDC80
  c->r[6]=c->r[3]+0x00000004u; // 800EDC84
  c->r[0]=R32(c->r[4]+0x00000000u); // 800EDC88
  c->r[3]=c->r[4]+0x00000004u; // 800EDC8C
  cmpu(c,0,c->r[5],c->r[0]); // 800EDC90
  if (!crb(c,1)) { goto L_800EDCA0; } // 800EDC94
  c->r[3]=0u+0x00000001u; // 800EDC98
  return; // 800EDC9C
L_800EDCA0:;
  if (!crb(c,0)) { goto L_800EDCAC; } // 800EDCA0
  c->r[3]=0u+0xFFFFFFFFu; // 800EDCA4
  return; // 800EDCA8
L_800EDCAC:;
  c->r[5]=addc(c,c->r[5],0xFFFFFFFFu,0); cr0(c,c->r[5]); // 800EDCAC
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800EDCB0
  c->r[0]=c->r[5]+0x00000001u; // 800EDCB4
  c->r[3]=c->r[3]+c->r[4]; // 800EDCB8
  c->r[4]=c->r[6]+c->r[4]; // 800EDCBC
  c->ctr=c->r[0]; // 800EDCC0
  if (crb(c,0)) { goto L_800EDCF8; } // 800EDCC4
L_800EDCC8:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800EDCC8
  c->r[5]=R32(c->r[4]+0x00000000u); // 800EDCCC
  cmpu(c,0,c->r[5],c->r[0]); // 800EDCD0
  if (!crb(c,1)) { goto L_800EDCE0; } // 800EDCD4
  c->r[3]=0u+0x00000001u; // 800EDCD8
  return; // 800EDCDC
L_800EDCE0:;
  if (!crb(c,0)) { goto L_800EDCEC; } // 800EDCE0
  c->r[3]=0u+0xFFFFFFFFu; // 800EDCE4
  return; // 800EDCE8
L_800EDCEC:;
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 800EDCEC
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800EDCF0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDCC8; } // 800EDCF4
L_800EDCF8:;
  c->r[3]=0u+0x00000000u; // 800EDCF8
  return; // 800EDCFC
}

// LINTLshift
void f_800EDD00(Ctx* __restrict c) {
  trace_call(0x800EDD00u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EDD00
  c->r[0]=c->lr; // 800EDD04
  W32(c->r[1]+0x00000044u,c->r[0]); // 800EDD08
  c->r[11]=c->r[1]+0x00000040u; // 800EDD0C
  c->lr=0x800EDD14u; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EDD10
  c->r[21]=rotl(c->r[5],27)&0x07FFFFFFu; cr0(c,c->r[21]); // 800EDD14
  c->r[24]=R32(c->r[4]+0x00000000u); // 800EDD18
  c->r[19]=c->r[3]|c->r[3]; // 800EDD1C
  c->r[23]=c->r[4]+0x00000004u; // 800EDD20
  c->r[22]=c->r[3]+0x00000004u; // 800EDD24
  c->r[20]=rotl(c->r[5],0)&0x0000001Fu; // 800EDD28
  c->r[6]=0u+0x00000000u; // 800EDD2C
  if (crb(c,2)) { goto L_800EDDB0; } // 800EDD30
  cmpu(c,0,c->r[21],0x00000008u); // 800EDD34
  c->r[4]=c->r[21]+0xFFFFFFF8u; // 800EDD38
  if (!crb(c,1)) { goto L_800EDD88; } // 800EDD3C
  c->r[0]=c->r[4]+0x00000007u; // 800EDD40
  c->r[5]=c->r[22]|c->r[22]; // 800EDD44
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800EDD48
  c->r[3]=0u+0x00000000u; // 800EDD4C
  c->ctr=c->r[0]; // 800EDD50
  cmpu(c,0,c->r[4],0x00000000u); // 800EDD54
  if (!crb(c,1)) { goto L_800EDD88; } // 800EDD58
L_800EDD5C:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 800EDD5C
  c->r[6]=c->r[6]+0x00000008u; // 800EDD60
  W32(c->r[5]+0x00000004u,c->r[3]); // 800EDD64
  W32(c->r[5]+0x00000008u,c->r[3]); // 800EDD68
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 800EDD6C
  W32(c->r[5]+0x00000010u,c->r[3]); // 800EDD70
  W32(c->r[5]+0x00000014u,c->r[3]); // 800EDD74
  W32(c->r[5]+0x00000018u,c->r[3]); // 800EDD78
  W32(c->r[5]+0x0000001Cu,c->r[3]); // 800EDD7C
  c->r[5]=c->r[5]+0x00000020u; // 800EDD80
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDD5C; } // 800EDD84
L_800EDD88:;
  c->r[3]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800EDD88
  c->r[0]=c->r[21]-c->r[6]; // 800EDD8C
  c->r[4]=c->r[22]+c->r[3]; // 800EDD90
  c->r[3]=0u+0x00000000u; // 800EDD94
  c->ctr=c->r[0]; // 800EDD98
  cmpu(c,0,c->r[6],c->r[21]); // 800EDD9C
  if (!crb(c,0)) { goto L_800EDDB0; } // 800EDDA0
L_800EDDA4:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 800EDDA4
  c->r[4]=c->r[4]+0x00000004u; // 800EDDA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDDA4; } // 800EDDAC
L_800EDDB0:;
  cmps(c,0,(int32_t)c->r[24],0); // 800EDDB0
  c->r[25]=0u+0x00000000u; // 800EDDB4
  c->r[26]=0u+0x00000000u; // 800EDDB8
  c->r[27]=0u+0x00000000u; // 800EDDBC
  if (crb(c,2)) { goto L_800EDF90; } // 800EDDC0
  cmpu(c,0,c->r[24],0x00000008u); // 800EDDC4
  c->r[30]=c->r[24]+0xFFFFFFF8u; // 800EDDC8
  if (!crb(c,1)) { goto L_800EDF38; } // 800EDDCC
  c->r[0]=rotl(c->r[21],2)&0xFFFFFFFCu; // 800EDDD0
  c->r[29]=c->r[23]|c->r[23]; // 800EDDD4
  c->r[28]=c->r[22]+c->r[0]; // 800EDDD8
  c->r[31]=0u+0xFFFFFFFFu; // 800EDDDC
  goto L_800EDF30; // 800EDDE0
L_800EDDE4:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800EDDE4
  c->r[5]=c->r[20]|c->r[20]; // 800EDDE8
  c->r[3]=0u+0x00000000u; // 800EDDEC
  c->lr=0x800EDDF4u; f_800ADEA4(c); // 800EDDF0
  c->r[0]=addc(c,c->r[25],c->r[4],0); // 800EDDF4
  c->r[5]=c->r[20]|c->r[20]; // 800EDDF8
  c->r[0]=c->r[0]&c->r[31]; // 800EDDFC
  W32(c->r[28]+0x00000000u,c->r[0]); // 800EDE00
  c->r[26]=addc(c,c->r[26],c->r[3],c->xer_ca); // 800EDE04
  c->r[25]=0u+0x00000000u; // 800EDE08
  c->r[4]=R32(c->r[29]+0x00000004u); // 800EDE0C
  c->r[26]=c->r[26]&c->r[31]; // 800EDE10
  c->r[3]=0u+0x00000000u; // 800EDE14
  c->lr=0x800EDE1Cu; f_800ADEA4(c); // 800EDE18
  c->r[0]=addc(c,c->r[26],c->r[4],0); // 800EDE1C
  c->r[5]=c->r[20]|c->r[20]; // 800EDE20
  c->r[0]=c->r[0]&c->r[31]; // 800EDE24
  W32(c->r[28]+0x00000004u,c->r[0]); // 800EDE28
  c->r[25]=addc(c,c->r[25],c->r[3],c->xer_ca); // 800EDE2C
  c->r[26]=0u+0x00000000u; // 800EDE30
  c->r[4]=R32(c->r[29]+0x00000008u); // 800EDE34
  c->r[25]=c->r[25]&c->r[31]; // 800EDE38
  c->r[3]=0u+0x00000000u; // 800EDE3C
  c->lr=0x800EDE44u; f_800ADEA4(c); // 800EDE40
  c->r[0]=addc(c,c->r[25],c->r[4],0); // 800EDE44
  c->r[5]=c->r[20]|c->r[20]; // 800EDE48
  c->r[0]=c->r[0]&c->r[31]; // 800EDE4C
  W32(c->r[28]+0x00000008u,c->r[0]); // 800EDE50
  c->r[26]=addc(c,c->r[26],c->r[3],c->xer_ca); // 800EDE54
  c->r[25]=0u+0x00000000u; // 800EDE58
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800EDE5C
  c->r[26]=c->r[26]&c->r[31]; // 800EDE60
  c->r[3]=0u+0x00000000u; // 800EDE64
  c->lr=0x800EDE6Cu; f_800ADEA4(c); // 800EDE68
  c->r[0]=addc(c,c->r[26],c->r[4],0); // 800EDE6C
  c->r[5]=c->r[20]|c->r[20]; // 800EDE70
  c->r[0]=c->r[0]&c->r[31]; // 800EDE74
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 800EDE78
  c->r[25]=addc(c,c->r[25],c->r[3],c->xer_ca); // 800EDE7C
  c->r[26]=0u+0x00000000u; // 800EDE80
  c->r[4]=R32(c->r[29]+0x00000010u); // 800EDE84
  c->r[25]=c->r[25]&c->r[31]; // 800EDE88
  c->r[3]=0u+0x00000000u; // 800EDE8C
  c->lr=0x800EDE94u; f_800ADEA4(c); // 800EDE90
  c->r[0]=addc(c,c->r[25],c->r[4],0); // 800EDE94
  c->r[5]=c->r[20]|c->r[20]; // 800EDE98
  c->r[0]=c->r[0]&c->r[31]; // 800EDE9C
  W32(c->r[28]+0x00000010u,c->r[0]); // 800EDEA0
  c->r[26]=addc(c,c->r[26],c->r[3],c->xer_ca); // 800EDEA4
  c->r[25]=0u+0x00000000u; // 800EDEA8
  c->r[4]=R32(c->r[29]+0x00000014u); // 800EDEAC
  c->r[26]=c->r[26]&c->r[31]; // 800EDEB0
  c->r[3]=0u+0x00000000u; // 800EDEB4
  c->lr=0x800EDEBCu; f_800ADEA4(c); // 800EDEB8
  c->r[0]=addc(c,c->r[26],c->r[4],0); // 800EDEBC
  c->r[5]=c->r[20]|c->r[20]; // 800EDEC0
  c->r[0]=c->r[0]&c->r[31]; // 800EDEC4
  W32(c->r[28]+0x00000014u,c->r[0]); // 800EDEC8
  c->r[25]=addc(c,c->r[25],c->r[3],c->xer_ca); // 800EDECC
  c->r[26]=0u+0x00000000u; // 800EDED0
  c->r[4]=R32(c->r[29]+0x00000018u); // 800EDED4
  c->r[25]=c->r[25]&c->r[31]; // 800EDED8
  c->r[3]=0u+0x00000000u; // 800EDEDC
  c->lr=0x800EDEE4u; f_800ADEA4(c); // 800EDEE0
  c->r[0]=addc(c,c->r[25],c->r[4],0); // 800EDEE4
  c->r[5]=c->r[20]|c->r[20]; // 800EDEE8
  c->r[0]=c->r[0]&c->r[31]; // 800EDEEC
  W32(c->r[28]+0x00000018u,c->r[0]); // 800EDEF0
  c->r[26]=addc(c,c->r[26],c->r[3],c->xer_ca); // 800EDEF4
  c->r[25]=0u+0x00000000u; // 800EDEF8
  c->r[4]=R32(c->r[29]+0x0000001Cu); // 800EDEFC
  c->r[26]=c->r[26]&c->r[31]; // 800EDF00
  c->r[3]=0u+0x00000000u; // 800EDF04
  c->lr=0x800EDF0Cu; f_800ADEA4(c); // 800EDF08
  c->r[0]=addc(c,c->r[26],c->r[4],0); // 800EDF0C
  c->r[26]=0u+0x00000000u; // 800EDF10
  c->r[25]=addc(c,c->r[25],c->r[3],c->xer_ca); // 800EDF14
  c->r[29]=c->r[29]+0x00000020u; // 800EDF18
  c->r[0]=c->r[0]&c->r[31]; // 800EDF1C
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 800EDF20
  c->r[25]=c->r[25]&c->r[31]; // 800EDF24
  c->r[27]=c->r[27]+0x00000008u; // 800EDF28
  c->r[28]=c->r[28]+0x00000020u; // 800EDF2C
L_800EDF30:;
  cmpu(c,0,c->r[27],c->r[30]); // 800EDF30
  if (crb(c,0)) { IRQCHK(c); goto L_800EDDE4; } // 800EDF34
L_800EDF38:;
  c->r[4]=rotl(c->r[27],2)&0xFFFFFFFCu; // 800EDF38
  c->r[3]=rotl(c->r[21],2)&0xFFFFFFFCu; // 800EDF3C
  c->r[0]=c->r[4]+c->r[22]; // 800EDF40
  c->r[28]=0u+0xFFFFFFFFu; // 800EDF44
  c->r[23]=c->r[23]+c->r[4]; // 800EDF48
  c->r[29]=c->r[3]+c->r[0]; // 800EDF4C
  goto L_800EDF88; // 800EDF50
L_800EDF54:;
  c->r[4]=R32(c->r[23]+0x00000000u); // 800EDF54
  c->r[5]=c->r[20]|c->r[20]; // 800EDF58
  c->r[3]=0u+0x00000000u; // 800EDF5C
  c->lr=0x800EDF64u; f_800ADEA4(c); // 800EDF60
  c->r[0]=addc(c,c->r[25],c->r[4],0); // 800EDF64
  c->r[23]=c->r[23]+0x00000004u; // 800EDF68
  c->r[26]=addc(c,c->r[26],c->r[3],c->xer_ca); // 800EDF6C
  c->r[27]=c->r[27]+0x00000001u; // 800EDF70
  c->r[0]=c->r[0]&c->r[28]; // 800EDF74
  W32(c->r[29]+0x00000000u,c->r[0]); // 800EDF78
  c->r[25]=c->r[26]&c->r[28]; // 800EDF7C
  c->r[26]=0u+0x00000000u; // 800EDF80
  c->r[29]=c->r[29]+0x00000004u; // 800EDF84
L_800EDF88:;
  cmpu(c,0,c->r[27],c->r[24]); // 800EDF88
  if (crb(c,0)) { IRQCHK(c); goto L_800EDF54; } // 800EDF8C
L_800EDF90:;
  c->r[0]=c->r[25]|c->r[26]; cr0(c,c->r[0]); // 800EDF90
  c->r[3]=c->r[27]+c->r[21]; // 800EDF94
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800EDF98
  c->r[3]=c->r[24]+c->r[21]; // 800EDF9C
  W32(c->r[22]+c->r[0],c->r[25]); // 800EDFA0
  W32(c->r[19]+0x00000000u,c->r[3]); // 800EDFA4
  if (crb(c,2)) { goto L_800EDFB4; } // 800EDFA8
  c->r[0]=c->r[3]+0x00000001u; // 800EDFAC
  W32(c->r[19]+0x00000000u,c->r[0]); // 800EDFB0
L_800EDFB4:;
  c->r[11]=c->r[1]+0x00000040u; // 800EDFB4
  c->lr=0x800EDFBCu; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EDFB8
  c->r[0]=R32(c->r[1]+0x00000044u); // 800EDFBC
  c->lr=c->r[0]; // 800EDFC0
  c->r[1]=c->r[1]+0x00000040u; // 800EDFC4
  return; // 800EDFC8
  unimpl(c,0x800EDFCCu,"00000000"); // 800EDFCC
  f_800EDFD0(c);
}

// LINTMsb
void f_800EDFD0(Ctx* __restrict c) {
  trace_call(0x800EDFD0u);
  c->r[7]=R32(c->r[3]+0x00000000u); // 800EDFD0
  c->r[0]=0u+0x00000004u; // 800EDFD4
  c->r[8]=0u+0x00000020u; // 800EDFD8
  c->r[6]=0u+0x00000000u; // 800EDFDC
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800EDFE0
  c->r[4]=0u+0x80000000u; // 800EDFE4
  c->r[3]=R32(c->r[3]+c->r[5]); // 800EDFE8
  c->ctr=c->r[0]; // 800EDFEC
L_800EDFF0:;
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EDFF0
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EDFF4
  if (!crb(c,2)) { goto L_800EE094; } // 800EDFF8
  c->r[6]=c->r[6]+0x00000001u; // 800EDFFC
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE000
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE004
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE008
  if (!crb(c,2)) { goto L_800EE094; } // 800EE00C
  c->r[6]=c->r[6]+0x00000001u; // 800EE010
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE014
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE018
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE01C
  if (!crb(c,2)) { goto L_800EE094; } // 800EE020
  c->r[6]=c->r[6]+0x00000001u; // 800EE024
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE028
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE02C
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE030
  if (!crb(c,2)) { goto L_800EE094; } // 800EE034
  c->r[6]=c->r[6]+0x00000001u; // 800EE038
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE03C
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE040
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE044
  if (!crb(c,2)) { goto L_800EE094; } // 800EE048
  c->r[6]=c->r[6]+0x00000001u; // 800EE04C
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE050
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE054
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE058
  if (!crb(c,2)) { goto L_800EE094; } // 800EE05C
  c->r[6]=c->r[6]+0x00000001u; // 800EE060
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE064
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE068
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE06C
  if (!crb(c,2)) { goto L_800EE094; } // 800EE070
  c->r[6]=c->r[6]+0x00000001u; // 800EE074
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE078
  c->r[0]=((c->r[6])&0x20)?0u:(c->r[4]>>((c->r[6])&31)); // 800EE07C
  c->r[0]=c->r[0]&c->r[3]; cr0(c,c->r[0]); // 800EE080
  if (!crb(c,2)) { goto L_800EE094; } // 800EE084
  c->r[6]=c->r[6]+0x00000001u; // 800EE088
  c->r[8]=c->r[8]+0xFFFFFFFFu; // 800EE08C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EDFF0; } // 800EE090
L_800EE094:;
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 800EE094
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 800EE098
  c->r[3]=c->r[8]+c->r[0]; // 800EE09C
  return; // 800EE0A0
  unimpl(c,0x800EE0A4u,"00000000"); // 800EE0A4
  unimpl(c,0x800EE0A8u,"00000000"); // 800EE0A8
  unimpl(c,0x800EE0ACu,"00000000"); // 800EE0AC
  f_800EE0B0(c);
}

// LINTSub
void f_800EE0B0(Ctx* __restrict c) {
  trace_call(0x800EE0B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE0B0
  c->r[0]=c->lr; // 800EE0B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EE0B8
  c->r[11]=c->r[1]+0x00000020u; // 800EE0BC
  c->lr=0x800EE0C4u; f_800ADA2C(c); // 800EE0C0
  c->r[31]=R32(c->r[4]+0x00000000u); // 800EE0C4
  c->r[29]=c->r[3]+0x00000004u; // 800EE0C8
  c->r[10]=c->r[29]|c->r[29]; // 800EE0CC
  c->r[9]=c->r[4]+0x00000004u; // 800EE0D0
  c->r[11]=c->r[5]+0x00000004u; // 800EE0D4
  c->r[30]=R32(c->r[5]+0x00000000u); // 800EE0D8
  c->r[27]=0u+0x00000000u; // 800EE0DC
  c->r[28]=0u+0x00000000u; // 800EE0E0
  c->r[12]=0u+0x00000000u; // 800EE0E4
  c->r[8]=0u+0x00000000u; // 800EE0E8
  c->r[7]=0u+0xFFFFFFFFu; // 800EE0EC
  c->r[0]=0u+0x00000001u; // 800EE0F0
  c->ctr=c->r[31]; // 800EE0F4
  cmpu(c,0,c->r[31],0x00000000u); // 800EE0F8
  if (!crb(c,1)) { goto L_800EE170; } // 800EE0FC
L_800EE100:;
  c->r[4]=R32(c->r[9]+0x00000000u); // 800EE100
  c->r[6]=addc(c,~c->r[27],c->r[7],1); // 800EE104
  c->r[5]=addc(c,~c->r[28],c->r[8],c->xer_ca); // 800EE108
  cmpu(c,0,c->r[12],c->r[30]); // 800EE10C
  c->r[4]=c->r[4]-c->r[27]; // 800EE110
  W32(c->r[10]+0x00000000u,c->r[4]); // 800EE114
  c->r[4]=addc(c,~c->r[4],c->r[6],1); // 800EE118
  c->r[27]=addc(c,~c->r[8],c->r[5],c->xer_ca); // 800EE11C
  c->r[27]=addc(c,~c->r[6],c->r[6],c->xer_ca); // 800EE120
  c->r[27]=0u-c->r[27]; // 800EE124
  c->r[28]=sraw(c,c->r[27],31); // 800EE128
  if (!crb(c,0)) { goto L_800EE140; } // 800EE12C
  c->r[5]=R32(c->r[11]+0x00000000u); // 800EE130
  c->r[4]=R32(c->r[10]+0x00000000u); // 800EE134
  c->r[4]=c->r[4]-c->r[5]; // 800EE138
  W32(c->r[10]+0x00000000u,c->r[4]); // 800EE13C
L_800EE140:;
  c->r[4]=R32(c->r[11]+0x00000000u); // 800EE140
  c->r[5]=R32(c->r[10]+0x00000000u); // 800EE144
  c->r[4]=addc(c,~c->r[4],0xFFFFFFFFu,1); // 800EE148
  cmpu(c,0,c->r[5],c->r[4]); // 800EE14C
  if (!crb(c,1)) { goto L_800EE15C; } // 800EE150
  c->r[27]=addc(c,c->r[27],c->r[0],0); // 800EE154
  c->r[28]=addc(c,c->r[28],c->r[8],c->xer_ca); // 800EE158
L_800EE15C:;
  c->r[9]=c->r[9]+0x00000004u; // 800EE15C
  c->r[10]=c->r[10]+0x00000004u; // 800EE160
  c->r[11]=c->r[11]+0x00000004u; // 800EE164
  c->r[12]=c->r[12]+0x00000001u; // 800EE168
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE100; } // 800EE16C
L_800EE170:;
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 800EE170
  c->r[4]=c->r[29]+c->r[0]; // 800EE174
  goto L_800EE188; // 800EE178
  c->r[0]=c->r[0]|0x00000000u; // 800EE17C
L_800EE180:;
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 800EE180
  c->r[31]=c->r[31]+0xFFFFFFFFu; // 800EE184
L_800EE188:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EE188
  if (crb(c,2)) { goto L_800EE19C; } // 800EE18C
  c->r[0]=R32(c->r[4]+0x00000000u); // 800EE190
  cmps(c,0,(int32_t)c->r[0],0); // 800EE194
  if (crb(c,2)) { IRQCHK(c); goto L_800EE180; } // 800EE198
L_800EE19C:;
  c->r[0]=c->r[31]+0x00000001u; // 800EE19C
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE1A0
  c->r[11]=c->r[1]+0x00000020u; // 800EE1A4
  c->lr=0x800EE1ACu; f_800ADA78(c); // 800EE1A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EE1AC
  c->lr=c->r[0]; // 800EE1B0
  c->r[1]=c->r[1]+0x00000020u; // 800EE1B4
  return; // 800EE1B8
  unimpl(c,0x800EE1BCu,"00000000"); // 800EE1BC
  f_800EE1C0(c);
}

// LINTMul
void f_800EE1C0(Ctx* __restrict c) {
  trace_call(0x800EE1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE1C0
  c->r[0]=c->lr; // 800EE1C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE1C8
  c->r[11]=c->r[1]+0x00000030u; // 800EE1CC
  c->lr=0x800EE1D4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE1D0
  c->r[29]=R32(c->r[4]+0x00000000u); // 800EE1D4
  c->r[25]=c->r[3]+0x00000004u; // 800EE1D8
  c->r[28]=R32(c->r[5]+0x00000000u); // 800EE1DC
  c->r[0]=0u+0x00000001u; // 800EE1E0
  c->r[24]=c->r[3]|c->r[3]; // 800EE1E4
  c->r[23]=c->r[4]|c->r[4]; // 800EE1E8
  W32(c->r[3]+0x00000000u,c->r[0]); // 800EE1EC
  c->r[27]=c->r[4]+0x00000004u; // 800EE1F0
  c->r[22]=c->r[5]|c->r[5]; // 800EE1F4
  c->r[26]=c->r[5]+0x00000004u; // 800EE1F8
  c->r[3]=c->r[25]|c->r[25]; // 800EE1FC
  c->r[30]=0u+0x00000000u; // 800EE200
  c->r[31]=0u+0x00000000u; // 800EE204
  c->r[4]=0u+0x00000000u; // 800EE208
  c->r[5]=0u+0x00000080u; // 800EE20C
  c->lr=0x800EE214u; f_80004714(c); // 800EE210
  c->r[0]=R32(c->r[23]+0x00000000u); // 800EE214
  cmpu(c,0,c->r[0],0x00000001u); // 800EE218
  if (!crb(c,2)) { goto L_800EE22C; } // 800EE21C
  c->r[0]=R32(c->r[23]+0x00000004u); // 800EE220
  cmps(c,0,(int32_t)c->r[0],0); // 800EE224
  if (crb(c,2)) { goto L_800EE4D4; } // 800EE228
L_800EE22C:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 800EE22C
  cmpu(c,0,c->r[0],0x00000001u); // 800EE230
  if (!crb(c,2)) { goto L_800EE248; } // 800EE234
  c->r[0]=R32(c->r[22]+0x00000004u); // 800EE238
  cmps(c,0,(int32_t)c->r[0],0); // 800EE23C
  if (!crb(c,2)) { goto L_800EE248; } // 800EE240
  goto L_800EE4D4; // 800EE244
L_800EE248:;
  c->r[6]=0u+0x00000000u; // 800EE248
  c->r[9]=0u+0x00000000u; // 800EE24C
  c->r[3]=c->r[6]|c->r[6]; // 800EE250
  c->r[10]=0u+0xFFFFFFFFu; // 800EE254
  c->r[0]=c->r[6]|c->r[6]; // 800EE258
  goto L_800EE4AC; // 800EE25C
L_800EE260:;
  cmps(c,0,(int32_t)c->r[29],0); // 800EE260
  c->r[30]=0u+0x00000000u; // 800EE264
  c->r[31]=0u+0x00000000u; // 800EE268
  c->r[7]=0u+0x00000000u; // 800EE26C
  if (crb(c,2)) { goto L_800EE494; } // 800EE270
  cmpu(c,0,c->r[29],0x00000008u); // 800EE274
  c->r[11]=c->r[29]+0xFFFFFFF8u; // 800EE278
  if (!crb(c,1)) { goto L_800EE430; } // 800EE27C
  c->r[8]=c->r[11]+0x00000007u; // 800EE280
  c->r[4]=c->r[27]|c->r[27]; // 800EE284
  c->r[8]=rotl(c->r[8],29)&0x1FFFFFFFu; // 800EE288
  c->r[5]=c->r[25]+c->r[9]; // 800EE28C
  c->ctr=c->r[8]; // 800EE290
  cmpu(c,0,c->r[11],0x00000000u); // 800EE294
  if (!crb(c,1)) { goto L_800EE430; } // 800EE298
L_800EE29C:;
  c->r[12]=R32(c->r[4]+0x00000000u); // 800EE29C
  c->r[7]=c->r[7]+0x00000008u; // 800EE2A0
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE2A4
  c->r[23]=R32(c->r[5]+0x00000000u); // 800EE2A8
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE2AC
  c->r[23]=addc(c,c->r[30],c->r[23],0); // 800EE2B0
  c->r[30]=addc(c,c->r[31],0,c->xer_ca); // 800EE2B4
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE2B8
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE2BC
  c->r[8]=c->r[8]&c->r[10]; // 800EE2C0
  W32(c->r[5]+0x00000000u,c->r[8]); // 800EE2C4
  c->r[12]=R32(c->r[4]+0x00000004u); // 800EE2C8
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE2CC
  c->r[8]=R32(c->r[5]+0x00000004u); // 800EE2D0
  c->r[31]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE2D4
  c->r[23]=c->r[31]&c->r[10]; // 800EE2D8
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE2DC
  c->r[31]=0u+0x00000000u; // 800EE2E0
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE2E4
  c->r[30]=addc(c,c->r[3],0,c->xer_ca); // 800EE2E8
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE2EC
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE2F0
  c->r[8]=c->r[8]&c->r[10]; // 800EE2F4
  W32(c->r[5]+0x00000004u,c->r[8]); // 800EE2F8
  c->r[12]=R32(c->r[4]+0x00000008u); // 800EE2FC
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE300
  c->r[8]=R32(c->r[5]+0x00000008u); // 800EE304
  c->r[22]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE308
  c->r[23]=c->r[22]&c->r[10]; // 800EE30C
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE310
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE314
  c->r[30]=addc(c,c->r[3],0,c->xer_ca); // 800EE318
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE31C
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE320
  c->r[8]=c->r[8]&c->r[10]; // 800EE324
  W32(c->r[5]+0x00000008u,c->r[8]); // 800EE328
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 800EE32C
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE330
  c->r[8]=R32(c->r[5]+0x0000000Cu); // 800EE334
  c->r[22]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE338
  c->r[23]=c->r[22]&c->r[10]; // 800EE33C
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE340
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE344
  c->r[30]=addc(c,c->r[3],0,c->xer_ca); // 800EE348
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE34C
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE350
  c->r[8]=c->r[8]&c->r[10]; // 800EE354
  W32(c->r[5]+0x0000000Cu,c->r[8]); // 800EE358
  c->r[12]=R32(c->r[4]+0x00000010u); // 800EE35C
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE360
  c->r[8]=R32(c->r[5]+0x00000010u); // 800EE364
  c->r[22]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE368
  c->r[23]=c->r[22]&c->r[10]; // 800EE36C
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE370
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE374
  c->r[30]=addc(c,c->r[3],0,c->xer_ca); // 800EE378
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE37C
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE380
  c->r[8]=c->r[8]&c->r[10]; // 800EE384
  W32(c->r[5]+0x00000010u,c->r[8]); // 800EE388
  c->r[12]=R32(c->r[4]+0x00000014u); // 800EE38C
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE390
  c->r[8]=R32(c->r[5]+0x00000014u); // 800EE394
  c->r[22]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE398
  c->r[23]=c->r[22]&c->r[10]; // 800EE39C
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE3A0
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE3A4
  c->r[30]=addc(c,c->r[0],0,c->xer_ca); // 800EE3A8
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE3AC
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE3B0
  c->r[8]=c->r[8]&c->r[10]; // 800EE3B4
  W32(c->r[5]+0x00000014u,c->r[8]); // 800EE3B8
  c->r[12]=R32(c->r[4]+0x00000018u); // 800EE3BC
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE3C0
  c->r[8]=R32(c->r[5]+0x00000018u); // 800EE3C4
  c->r[22]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE3C8
  c->r[23]=c->r[22]&c->r[10]; // 800EE3CC
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE3D0
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE3D4
  c->r[30]=addc(c,c->r[0],0,c->xer_ca); // 800EE3D8
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE3DC
  c->r[23]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE3E0
  c->r[8]=c->r[8]&c->r[10]; // 800EE3E4
  W32(c->r[5]+0x00000018u,c->r[8]); // 800EE3E8
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 800EE3EC
  c->r[4]=c->r[4]+0x00000020u; // 800EE3F0
  c->r[11]=R32(c->r[26]+0x00000000u); // 800EE3F4
  c->r[22]=addc(c,c->r[30],c->r[23],c->xer_ca); // 800EE3F8
  c->r[8]=R32(c->r[5]+0x0000001Cu); // 800EE3FC
  c->r[23]=c->r[22]&c->r[10]; // 800EE400
  c->r[23]=addc(c,c->r[23],c->r[8],0); // 800EE404
  c->r[8]=(uint32_t)((int32_t)c->r[12]*(int32_t)c->r[11]); // 800EE408
  c->r[30]=addc(c,c->r[0],0,c->xer_ca); // 800EE40C
  c->r[8]=addc(c,c->r[23],c->r[8],0); // 800EE410
  c->r[8]=c->r[8]&c->r[10]; // 800EE414
  W32(c->r[5]+0x0000001Cu,c->r[8]); // 800EE418
  c->r[11]=(uint32_t)(((uint64_t)c->r[12]*(uint64_t)c->r[11])>>32); // 800EE41C
  c->r[5]=c->r[5]+0x00000020u; // 800EE420
  c->r[8]=addc(c,c->r[30],c->r[11],c->xer_ca); // 800EE424
  c->r[30]=c->r[8]&c->r[10]; // 800EE428
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE29C; } // 800EE42C
L_800EE430:;
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800EE430
  c->r[4]=c->r[29]-c->r[7]; // 800EE434
  c->r[5]=c->r[8]+c->r[25]; // 800EE438
  c->r[23]=c->r[27]+c->r[8]; // 800EE43C
  c->r[22]=c->r[9]+c->r[5]; // 800EE440
  c->ctr=c->r[4]; // 800EE444
  cmpu(c,0,c->r[7],c->r[29]); // 800EE448
  if (!crb(c,0)) { goto L_800EE494; } // 800EE44C
L_800EE450:;
  c->r[8]=R32(c->r[23]+0x00000000u); // 800EE450
  c->r[23]=c->r[23]+0x00000004u; // 800EE454
  c->r[5]=R32(c->r[26]+0x00000000u); // 800EE458
  c->r[7]=c->r[7]+0x00000001u; // 800EE45C
  c->r[11]=R32(c->r[22]+0x00000000u); // 800EE460
  c->r[4]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[5]); // 800EE464
  c->r[12]=addc(c,c->r[30],c->r[11],0); // 800EE468
  c->r[11]=addc(c,c->r[31],0,c->xer_ca); // 800EE46C
  c->r[4]=addc(c,c->r[12],c->r[4],0); // 800EE470
  c->r[5]=(uint32_t)(((uint64_t)c->r[8]*(uint64_t)c->r[5])>>32); // 800EE474
  c->r[4]=c->r[4]&c->r[10]; // 800EE478
  W32(c->r[22]+0x00000000u,c->r[4]); // 800EE47C
  c->r[22]=c->r[22]+0x00000004u; // 800EE480
  c->r[31]=addc(c,c->r[11],c->r[5],c->xer_ca); // 800EE484
  c->r[30]=c->r[31]&c->r[10]; // 800EE488
  c->r[31]=0u+0x00000000u; // 800EE48C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EE450; } // 800EE490
L_800EE494:;
  c->r[4]=c->r[6]+c->r[7]; // 800EE494
  c->r[9]=c->r[9]+0x00000004u; // 800EE498
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800EE49C
  c->r[26]=c->r[26]+0x00000004u; // 800EE4A0
  W32(c->r[25]+c->r[4],c->r[30]); // 800EE4A4
  c->r[6]=c->r[6]+0x00000001u; // 800EE4A8
L_800EE4AC:;
  cmpu(c,0,c->r[6],c->r[28]); // 800EE4AC
  if (crb(c,0)) { IRQCHK(c); goto L_800EE260; } // 800EE4B0
  c->r[0]=c->r[30]|c->r[31]; cr0(c,c->r[0]); // 800EE4B4
  if (!crb(c,2)) { goto L_800EE4CC; } // 800EE4B8
  c->r[3]=c->r[29]+c->r[28]; // 800EE4BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EE4C0
  W32(c->r[24]+0x00000000u,c->r[0]); // 800EE4C4
  goto L_800EE4D4; // 800EE4C8
L_800EE4CC:;
  c->r[0]=c->r[29]+c->r[28]; // 800EE4CC
  W32(c->r[24]+0x00000000u,c->r[0]); // 800EE4D0
L_800EE4D4:;
  c->r[11]=c->r[1]+0x00000030u; // 800EE4D4
  c->lr=0x800EE4DCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EE4D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE4DC
  c->lr=c->r[0]; // 800EE4E0
  c->r[1]=c->r[1]+0x00000030u; // 800EE4E4
  return; // 800EE4E8
  unimpl(c,0x800EE4ECu,"00000000"); // 800EE4EC
  f_800EE4F0(c);
}

// WUDIsLinkedWBC
void f_800EE4F0(Ctx* __restrict c) {
  trace_call(0x800EE4F0u);
  c->r[3]=R32(c->r[13]+0xFFFFA0B0u); // 800EE4F0
  return; // 800EE4F4
  unimpl(c,0x800EE4F8u,"00000000"); // 800EE4F8
  unimpl(c,0x800EE4FCu,"00000000"); // 800EE4FC
  f_800EE500(c);
}

// App_MEMalloc
void f_800EE500(Ctx* __restrict c) {
  trace_call(0x800EE500u);
  c->r[4]=0u+0x803A0000u; // 800EE500
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EE504
  c->r[12]=R32(c->r[4]+0x000006F4u); // 800EE508
  c->ctr=c->r[12]; // 800EE50C
  if (true) { dispatch(c,c->ctr); return; } // 800EE510
  unimpl(c,0x800EE514u,"00000000"); // 800EE514
  unimpl(c,0x800EE518u,"00000000"); // 800EE518
  unimpl(c,0x800EE51Cu,"00000000"); // 800EE51C
  f_800EE520(c);
}

// App_MEMfree
void f_800EE520(Ctx* __restrict c) {
  trace_call(0x800EE520u);
  c->r[4]=0u+0x803A0000u; // 800EE520
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EE524
  c->r[12]=R32(c->r[4]+0x000006F8u); // 800EE528
  c->ctr=c->r[12]; // 800EE52C
  if (true) { dispatch(c,c->ctr); return; } // 800EE530
  unimpl(c,0x800EE534u,"00000000"); // 800EE534
  unimpl(c,0x800EE538u,"00000000"); // 800EE538
  unimpl(c,0x800EE53Cu,"00000000"); // 800EE53C
  f_800EE540(c);
}

// fn_800EE540
void f_800EE540(Ctx* __restrict c) {
  trace_call(0x800EE540u);
  c->r[4]=0u+0x803A0000u; // 800EE540
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EE544
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 800EE548
  cmps(c,0,(int32_t)c->r[0],0); // 800EE54C
  if (crb(c,2)) return; // 800EE550
  cmps(c,0,(int32_t)c->r[3],0); // 800EE554
  if (!crb(c,2)) { goto L_800EE568; } // 800EE558
  c->r[0]=0u+0x00000017u; // 800EE55C
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800EE560
  return; // 800EE564
L_800EE568:;
  c->r[0]=0u+0x000000FFu; // 800EE568
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800EE56C
  return; // 800EE570
  unimpl(c,0x800EE574u,"00000000"); // 800EE574
  unimpl(c,0x800EE578u,"00000000"); // 800EE578
  unimpl(c,0x800EE57Cu,"00000000"); // 800EE57C
  f_800EE580(c);
}

// fn_800EE580
void f_800EE580(Ctx* __restrict c) {
  trace_call(0x800EE580u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE580
  c->r[0]=c->lr; // 800EE584
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE588
  c->r[11]=c->r[1]+0x00000030u; // 800EE58C
  c->lr=0x800EE594u; f_800ADA2C(c); // 800EE590
  c->r[31]=0u+0x803A0000u; // 800EE594
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800EE598
  c->lr=0x800EE5A0u; f_8007FFF0(c); // 800EE59C
  c->r[0]=0u+0x00000000u; // 800EE5A0
  W8(c->r[31]+0x000006EBu,c->r[0]); // 800EE5A4
  W8(c->r[31]+0x000006EAu,c->r[0]); // 800EE5A8
  c->lr=0x800EE5B0u; f_80080030(c); // 800EE5AC
  c->r[3]=0u+0x00000000u; // 800EE5B0
  c->r[4]=0u+0x00000000u; // 800EE5B4
  c->lr=0x800EE5BCu; f_800FA53C(c); // 800EE5B8
  c->r[0]=R8(c->r[31]+0x000006E8u); // 800EE5BC
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EE5C0
  if (!crb(c,2)) { goto L_800EE5D0; } // 800EE5C4
  c->r[3]=0u+0x0000000Eu; // 800EE5C8
  goto L_800EE6C0; // 800EE5CC
L_800EE5D0:;
  c->lr=0x800EE5D4u; f_8007FFF0(c); // 800EE5D0
  c->r[30]=R8(c->r[31]+0x000006E5u); // 800EE5D4
  c->lr=0x800EE5DCu; f_80080030(c); // 800EE5D8
  cmpu(c,0,c->r[30],0x00000004u); // 800EE5DC
  if (!crb(c,2)) { goto L_800EE600; } // 800EE5E0
  c->lr=0x800EE5E8u; f_8007FFF0(c); // 800EE5E4
  c->r[30]=R8(c->r[31]+0x000006E4u); // 800EE5E8
  c->lr=0x800EE5F0u; f_80080030(c); // 800EE5EC
  cmpu(c,0,c->r[30],0x00000004u); // 800EE5F0
  if (!crb(c,2)) { goto L_800EE600; } // 800EE5F4
  c->r[3]=0u+0x0000000Eu; // 800EE5F8
  goto L_800EE6C0; // 800EE5FC
L_800EE600:;
  c->r[0]=R8(c->r[31]+0x000006E7u); // 800EE600
  cmps(c,0,(int32_t)c->r[0],0); // 800EE604
  if (crb(c,2)) { goto L_800EE6A0; } // 800EE608
  c->r[29]=0u+0x803A0000u; // 800EE60C
  c->r[27]=0u+0x00000000u; // 800EE610
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800EE614
  c->r[28]=0u+0x00000000u; // 800EE618
L_800EE61C:;
  c->lr=0x800EE620u; f_8007FFF0(c); // 800EE61C
  cmpu(c,0,c->r[27],0x00000009u); // 800EE620
  if (crb(c,1)) { goto L_800EE634; } // 800EE624
  c->r[4]=c->r[29]+c->r[28]; // 800EE628
  c->r[30]=c->r[4]+0x000000E4u; // 800EE62C
  goto L_800EE644; // 800EE630
L_800EE634:;
  c->r[0]=c->r[27]+0xFFFFFFF6u; // 800EE634
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800EE638
  c->r[4]=c->r[29]+c->r[0]; // 800EE63C
  c->r[30]=c->r[4]+0x000004A4u; // 800EE640
L_800EE644:;
  c->lr=0x800EE648u; f_80080030(c); // 800EE644
  c->r[0]=R8(c->r[30]+0x00000059u); // 800EE648
  cmpu(c,0,c->r[0],0x00000009u); // 800EE64C
  if (!crb(c,2)) { goto L_800EE690; } // 800EE650
  c->r[3]=0u+0x803A0000u; // 800EE654
  c->r[6]=0u+0x00000000u; // 800EE658
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EE65C
  c->r[0]=0u+0x00000001u; // 800EE660
  W8(c->r[1]+0x00000010u,c->r[6]); // 800EE664
  c->r[4]=c->r[30]+0x00000040u; // 800EE668
  c->r[3]=R8(c->r[3]+0x0000070Au); // 800EE66C
  c->r[5]=c->r[1]+0x00000008u; // 800EE670
  W16(c->r[1]+0x00000008u,c->r[6]); // 800EE674
  W16(c->r[1]+0x0000000Au,c->r[6]); // 800EE678
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 800EE67C
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 800EE680
  c->lr=0x800EE688u; f_8010325C(c); // 800EE684
  c->r[3]=0u+0x00000001u; // 800EE688
  goto L_800EE6C0; // 800EE68C
L_800EE690:;
  c->r[27]=c->r[27]+0x00000001u; // 800EE690
  c->r[28]=c->r[28]+0x00000060u; // 800EE694
  cmps(c,0,(int32_t)c->r[27],16); // 800EE698
  if (crb(c,0)) { IRQCHK(c); goto L_800EE61C; } // 800EE69C
L_800EE6A0:;
  c->r[3]=R8(c->r[31]+0x000006E8u); // 800EE6A0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800EE6A4
  if (!crb(c,1)) { goto L_800EE6B4; } // 800EE6A8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EE6AC
  W8(c->r[31]+0x000006E8u,c->r[0]); // 800EE6B0
L_800EE6B4:;
  c->r[0]=0u+0x00000032u; // 800EE6B4
  W8(c->r[31]+0x00000749u,c->r[0]); // 800EE6B8
  c->r[3]=0u+0x0000001Du; // 800EE6BC
L_800EE6C0:;
  c->r[11]=c->r[1]+0x00000030u; // 800EE6C0
  c->lr=0x800EE6C8u; f_800ADA78(c); // 800EE6C4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE6C8
  c->lr=c->r[0]; // 800EE6CC
  c->r[1]=c->r[1]+0x00000030u; // 800EE6D0
  return; // 800EE6D4
  unimpl(c,0x800EE6D8u,"00000000"); // 800EE6D8
  unimpl(c,0x800EE6DCu,"00000000"); // 800EE6DC
  f_800EE6E0(c);
}

// fn_800EE6E0
void f_800EE6E0(Ctx* __restrict c) {
  trace_call(0x800EE6E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE6E0
  c->r[0]=c->lr; // 800EE6E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE6E8
  c->r[11]=c->r[1]+0x00000030u; // 800EE6EC
  c->lr=0x800EE6F4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE6F0
  c->r[30]=0u+0x803A0000u; // 800EE6F4
  c->r[4]=0u+0x80330000u; // 800EE6F8
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800EE6FC
  c->r[25]=0u+0x000000FFu; // 800EE700
  c->r[3]=c->r[30]+0x00000750u; // 800EE704
  c->r[4]=c->r[4]+0xFFFF9A2Cu; // 800EE708
  c->r[3]=c->r[3]+0x00000006u; // 800EE70C
  c->r[5]=0u+0x00000010u; // 800EE710
  c->lr=0x800EE718u; f_800B3824(c); // 800EE714
  cmps(c,0,(int32_t)c->r[3],0); // 800EE718
  if (!crb(c,2)) { goto L_800EE740; } // 800EE71C
  c->r[3]=c->r[30]+0x00000858u; // 800EE720
  c->r[0]=0u+0x00000002u; // 800EE724
  W8(c->r[3]+0x00000059u,c->r[0]); // 800EE728
  c->r[3]=c->r[3]+0x00000040u; // 800EE72C
  c->r[4]=0u+0x00000000u; // 800EE730
  c->r[5]=0u+0x00000012u; // 800EE734
  c->lr=0x800EE73Cu; f_800FCC34(c); // 800EE738
  c->r[25]=0u+0x00000006u; // 800EE73C
L_800EE740:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EE740
  cmps(c,0,(int32_t)c->r[0],0); // 800EE744
  if (crb(c,2)) { goto L_800EE81C; } // 800EE748
  c->r[3]=c->r[30]+0x00000750u; // 800EE74C
  c->r[31]=0u+0x80330000u; // 800EE750
  c->r[3]=c->r[3]+0x00000006u; // 800EE754
  c->r[5]=0u+0x00000010u; // 800EE758
  c->r[4]=c->r[31]+0xFFFF9A40u; // 800EE75C
  c->lr=0x800EE764u; f_800B3824(c); // 800EE760
  cmps(c,0,(int32_t)c->r[3],0); // 800EE764
  if (!crb(c,2)) { goto L_800EE81C; } // 800EE768
  c->r[27]=0u+0x00000000u; // 800EE76C
  c->lr=0x800EE774u; f_8007FFF0(c); // 800EE770
  c->r[4]=c->r[30]+0x00000000u; // 800EE774
  c->r[29]=c->r[3]|c->r[3]; // 800EE778
  c->r[28]=R32(c->r[4]+0x00000064u); // 800EE77C
  goto L_800EE7A8; // 800EE780
L_800EE784:;
  c->r[26]=R32(c->r[28]+0x00000000u); // 800EE784
  c->r[4]=c->r[31]+0xFFFF9A40u; // 800EE788
  c->r[5]=0u+0x00000010u; // 800EE78C
  c->r[3]=c->r[26]|c->r[26]; // 800EE790
  c->lr=0x800EE798u; f_800B3824(c); // 800EE794
  cmps(c,0,(int32_t)c->r[3],0); // 800EE798
  if (!crb(c,2)) { goto L_800EE7A4; } // 800EE79C
  c->r[27]=c->r[26]|c->r[26]; // 800EE7A0
L_800EE7A4:;
  c->r[28]=R32(c->r[28]+0x00000008u); // 800EE7A4
L_800EE7A8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800EE7A8
  if (!crb(c,2)) { IRQCHK(c); goto L_800EE784; } // 800EE7AC
  c->r[3]=c->r[29]|c->r[29]; // 800EE7B0
  c->lr=0x800EE7B8u; f_80080030(c); // 800EE7B4
  cmps(c,0,(int32_t)c->r[27],0); // 800EE7B8
  if (crb(c,2)) { goto L_800EE7FC; } // 800EE7BC
  c->r[0]=R8(c->r[27]+0x00000059u); // 800EE7C0
  cmpu(c,0,c->r[0],0x00000001u); // 800EE7C4
  if (!crb(c,1)) { goto L_800EE7D4; } // 800EE7C8
  c->r[3]=c->r[25]|c->r[25]; // 800EE7CC
  goto L_800EE820; // 800EE7D0
L_800EE7D4:;
  c->r[3]=c->r[30]+0x00000750u; // 800EE7D4
  c->r[4]=c->r[27]+0x00000040u; // 800EE7D8
  c->r[5]=0u+0x00000006u; // 800EE7DC
  c->lr=0x800EE7E4u; f_800B3824(c); // 800EE7E0
  cmps(c,0,(int32_t)c->r[3],0); // 800EE7E4
  if (crb(c,2)) { goto L_800EE7FC; } // 800EE7E8
  c->r[3]=c->r[27]|c->r[27]; // 800EE7EC
  c->lr=0x800EE7F4u; f_800F29C0(c); // 800EE7F0
  c->r[3]=c->r[27]+0x00000040u; // 800EE7F4
  c->lr=0x800EE7FCu; f_800F2300(c); // 800EE7F8
L_800EE7FC:;
  c->r[3]=c->r[30]+0x00000858u; // 800EE7FC
  c->r[0]=0u+0x00000002u; // 800EE800
  W8(c->r[3]+0x00000059u,c->r[0]); // 800EE804
  c->r[3]=c->r[3]+0x00000040u; // 800EE808
  c->r[4]=0u+0x00000000u; // 800EE80C
  c->r[5]=0u+0x00000012u; // 800EE810
  c->lr=0x800EE818u; f_800FCC34(c); // 800EE814
  c->r[25]=0u+0x00000006u; // 800EE818
L_800EE81C:;
  c->r[3]=c->r[25]|c->r[25]; // 800EE81C
L_800EE820:;
  c->r[11]=c->r[1]+0x00000030u; // 800EE820
  c->lr=0x800EE828u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EE824
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EE828
  c->lr=c->r[0]; // 800EE82C
  c->r[1]=c->r[1]+0x00000030u; // 800EE830
  return; // 800EE834
  unimpl(c,0x800EE838u,"00000000"); // 800EE838
  unimpl(c,0x800EE83Cu,"00000000"); // 800EE83C
  f_800EE840(c);
}

// fn_800EE840
void f_800EE840(Ctx* __restrict c) {
  trace_call(0x800EE840u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EE840
  c->r[0]=c->lr; // 800EE844
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EE848
  c->r[11]=c->r[1]+0x00000030u; // 800EE84C
  c->lr=0x800EE854u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800EE850
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EE854
  c->r[31]=0u+0x803A0000u; // 800EE858
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800EE85C
  cmps(c,0,(int32_t)c->r[0],0); // 800EE860
  c->r[26]=c->r[31]+0x00000000u; // 800EE864
  if (crb(c,2)) { goto L_800EE90C; } // 800EE868
  c->r[4]=0u+0x80330000u; // 800EE86C
  c->r[3]=c->r[31]+0x00000858u; // 800EE870
  c->r[4]=c->r[4]+0xFFFF9A2Cu; // 800EE874
  c->r[5]=0u+0x00000010u; // 800EE878
  c->lr=0x800EE880u; f_800B3824(c); // 800EE87C
  cmps(c,0,(int32_t)c->r[3],0); // 800EE880
  if (!crb(c,2)) { goto L_800EE90C; } // 800EE884
  c->r[27]=0u+0x00000000u; // 800EE888
  c->lr=0x800EE890u; f_8007FFF0(c); // 800EE88C
  c->r[28]=R32(c->r[26]+0x00000064u); // 800EE890
  c->r[30]=c->r[3]|c->r[3]; // 800EE894
  c->r[29]=0u+0x80330000u; // 800EE898
  goto L_800EE8C0; // 800EE89C
L_800EE8A0:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 800EE8A0
  c->r[4]=c->r[29]+0xFFFF9A40u; // 800EE8A4
  c->r[5]=0u+0x00000010u; // 800EE8A8
  c->lr=0x800EE8B0u; f_800B3824(c); // 800EE8AC
  cmps(c,0,(int32_t)c->r[3],0); // 800EE8B0
  if (!crb(c,2)) { goto L_800EE8BC; } // 800EE8B4
  c->r[27]=R32(c->r[28]+0x00000000u); // 800EE8B8
L_800EE8BC:;
  c->r[28]=R32(c->r[28]+0x00000008u); // 800EE8BC
L_800EE8C0:;
  cmps(c,0,(int32_t)c->r[28],0); // 800EE8C0
  if (!crb(c,2)) { IRQCHK(c); goto L_800EE8A0; } // 800EE8C4
  c->r[3]=c->r[30]|c->r[30]; // 800EE8C8
  c->lr=0x800EE8D0u; f_80080030(c); // 800EE8CC
  cmps(c,0,(int32_t)c->r[27],0); // 800EE8D0
  if (crb(c,2)) { goto L_800EE90C; } // 800EE8D4
  c->r[27]=c->r[31]+0x00000000u; // 800EE8D8
  c->lr=0x800EE8E0u; f_8007FFF0(c); // 800EE8DC
  c->r[27]=R8(c->r[27]+0x00000012u); // 800EE8E0
  c->lr=0x800EE8E8u; f_80080030(c); // 800EE8E4
  cmpu(c,0,c->r[27],0x0000000Au); // 800EE8E8
  if (!crb(c,2)) { goto L_800EE90C; } // 800EE8EC
  c->r[3]=R32(c->r[26]+0x00000068u); // 800EE8F0
  c->r[3]=R32(c->r[3]+0x00000004u); // 800EE8F4
  c->r[30]=R32(c->r[3]+0x00000000u); // 800EE8F8
  c->r[3]=c->r[30]|c->r[30]; // 800EE8FC
  c->lr=0x800EE904u; f_800F29C0(c); // 800EE900
  c->r[3]=c->r[30]+0x00000040u; // 800EE904
  c->lr=0x800EE90Cu; f_800F2300(c); // 800EE908
L_800EE90C:;
  c->r[28]=c->r[31]+0x00000000u; // 800EE90C
  c->lr=0x800EE914u; f_8007FFF0(c); // 800EE910
  c->r[27]=R8(c->r[28]+0x00000012u); // 800EE914
  c->lr=0x800EE91Cu; f_80080030(c); // 800EE918
  cmpu(c,0,c->r[27],0x0000000Au); // 800EE91C
  if (!crb(c,2)) { goto L_800EE934; } // 800EE920
  c->r[3]=R32(c->r[28]+0x00000068u); // 800EE924
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EE928
  c->r[3]=c->r[3]+0x00000040u; // 800EE92C
  c->lr=0x800EE934u; f_800F2300(c); // 800EE930
L_800EE934:;
  c->r[27]=c->r[31]+0x00000000u; // 800EE934
  c->lr=0x800EE93Cu; f_8007FFF0(c); // 800EE938
  c->r[0]=R8(c->r[27]+0x000006E9u); // 800EE93C
  cmps(c,0,(int32_t)c->r[0],0); // 800EE940
  if (!crb(c,2)) { goto L_800EEA14; } // 800EE944
  c->r[0]=R8(c->r[27]+0x0000013Du); // 800EE948
  c->r[30]=0u+0x00000000u; // 800EE94C
  cmps(c,0,(int32_t)c->r[0],0); // 800EE950
  if (!crb(c,2)) { goto L_800EE960; } // 800EE954
  c->r[30]=c->r[27]+0x000000E4u; // 800EE958
  goto L_800EEA1C; // 800EE95C
L_800EE960:;
  c->r[0]=R8(c->r[27]+0x0000019Du); // 800EE960
  cmps(c,0,(int32_t)c->r[0],0); // 800EE964
  if (!crb(c,2)) { goto L_800EE974; } // 800EE968
  c->r[30]=c->r[27]+0x00000144u; // 800EE96C
  goto L_800EEA1C; // 800EE970
L_800EE974:;
  c->r[0]=R8(c->r[27]+0x000001FDu); // 800EE974
  cmps(c,0,(int32_t)c->r[0],0); // 800EE978
  if (!crb(c,2)) { goto L_800EE988; } // 800EE97C
  c->r[30]=c->r[27]+0x000001A4u; // 800EE980
  goto L_800EEA1C; // 800EE984
L_800EE988:;
  c->r[0]=R8(c->r[27]+0x0000025Du); // 800EE988
  cmps(c,0,(int32_t)c->r[0],0); // 800EE98C
  if (!crb(c,2)) { goto L_800EE99C; } // 800EE990
  c->r[30]=c->r[27]+0x00000204u; // 800EE994
  goto L_800EEA1C; // 800EE998
L_800EE99C:;
  c->r[0]=R8(c->r[27]+0x000002BDu); // 800EE99C
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9A0
  if (!crb(c,2)) { goto L_800EE9B0; } // 800EE9A4
  c->r[30]=c->r[27]+0x00000264u; // 800EE9A8
  goto L_800EEA1C; // 800EE9AC
L_800EE9B0:;
  c->r[0]=R8(c->r[27]+0x0000031Du); // 800EE9B0
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9B4
  if (!crb(c,2)) { goto L_800EE9C4; } // 800EE9B8
  c->r[30]=c->r[27]+0x000002C4u; // 800EE9BC
  goto L_800EEA1C; // 800EE9C0
L_800EE9C4:;
  c->r[0]=R8(c->r[27]+0x0000037Du); // 800EE9C4
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9C8
  if (!crb(c,2)) { goto L_800EE9D8; } // 800EE9CC
  c->r[30]=c->r[27]+0x00000324u; // 800EE9D0
  goto L_800EEA1C; // 800EE9D4
L_800EE9D8:;
  c->r[0]=R8(c->r[27]+0x000003DDu); // 800EE9D8
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9DC
  if (!crb(c,2)) { goto L_800EE9EC; } // 800EE9E0
  c->r[30]=c->r[27]+0x00000384u; // 800EE9E4
  goto L_800EEA1C; // 800EE9E8
L_800EE9EC:;
  c->r[0]=R8(c->r[27]+0x0000043Du); // 800EE9EC
  cmps(c,0,(int32_t)c->r[0],0); // 800EE9F0
  if (!crb(c,2)) { goto L_800EEA00; } // 800EE9F4
  c->r[30]=c->r[27]+0x000003E4u; // 800EE9F8
  goto L_800EEA1C; // 800EE9FC
L_800EEA00:;
  c->r[0]=R8(c->r[27]+0x0000049Du); // 800EEA00
  cmps(c,0,(int32_t)c->r[0],0); // 800EEA04
  if (!crb(c,2)) { goto L_800EEA1C; } // 800EEA08
  c->r[30]=c->r[27]+0x00000444u; // 800EEA0C
  goto L_800EEA1C; // 800EEA10
L_800EEA14:;
  c->r[4]=R32(c->r[27]+0x00000018u); // 800EEA14
  c->r[30]=R32(c->r[4]+0x00000000u); // 800EEA18
L_800EEA1C:;
  c->lr=0x800EEA20u; f_80080030(c); // 800EEA1C
  cmps(c,0,(int32_t)c->r[30],0); // 800EEA20
  if (!crb(c,2)) { goto L_800EEA30; } // 800EEA24
  c->r[3]=0u+0x000000FFu; // 800EEA28
  goto L_800EEC14; // 800EEA2C
L_800EEA30:;
  c->r[0]=R8(c->r[30]+0x00000059u); // 800EEA30
  cmps(c,0,(int32_t)c->r[0],0); // 800EEA34
  if (crb(c,2)) { goto L_800EEA44; } // 800EEA38
  c->r[3]=0u+0x000000FFu; // 800EEA3C
  goto L_800EEC14; // 800EEA40
L_800EEA44:;
  c->r[3]=c->r[30]|c->r[30]; // 800EEA44
  c->r[4]=c->r[31]+0x00000858u; // 800EEA48
  c->r[5]=0u+0x00000060u; // 800EEA4C
  c->lr=0x800EEA54u; f_800043C4(c); // 800EEA50
  c->r[3]=c->r[30]+0x00000040u; // 800EEA54
  c->lr=0x800EEA5Cu; f_800F21D0(c); // 800EEA58
  c->r[3]=c->r[30]|c->r[30]; // 800EEA5C
  c->lr=0x800EEA64u; f_800F28A0(c); // 800EEA60
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EEA64
  cmps(c,0,(int32_t)c->r[0],0); // 800EEA68
  if (crb(c,2)) { goto L_800EEBFC; } // 800EEA6C
  c->r[4]=0u+0x80330000u; // 800EEA70
  c->r[3]=c->r[30]|c->r[30]; // 800EEA74
  c->r[4]=c->r[4]+0xFFFF9A40u; // 800EEA78
  c->r[5]=0u+0x00000010u; // 800EEA7C
  c->lr=0x800EEA84u; f_800B3824(c); // 800EEA80
  cmps(c,0,(int32_t)c->r[3],0); // 800EEA84
  if (!crb(c,2)) { goto L_800EEBFC; } // 800EEA88
  c->r[3]=c->r[30]|c->r[30]; // 800EEA8C
  c->lr=0x800EEA94u; f_800F2C70(c); // 800EEA90
  c->r[29]=c->r[31]+0x000008B8u; // 800EEA94
  c->r[4]=0u+0x00000000u; // 800EEA98
  c->r[3]=c->r[29]+0x000003D5u; // 800EEA9C
  c->r[5]=0u+0x00000046u; // 800EEAA0
  c->lr=0x800EEAA8u; f_80004714(c); // 800EEAA4
  c->r[3]=c->r[29]+0x000003D5u; // 800EEAA8
  c->r[4]=c->r[30]+0x00000040u; // 800EEAAC
  c->r[5]=0u+0x00000006u; // 800EEAB0
  c->lr=0x800EEAB8u; f_800043C4(c); // 800EEAB4
  c->r[4]=c->r[30]|c->r[30]; // 800EEAB8
  c->r[3]=c->r[29]+0x000003DBu; // 800EEABC
  c->r[5]=0u+0x00000040u; // 800EEAC0
  c->lr=0x800EEAC8u; f_800043C4(c); // 800EEAC4
  c->r[3]=c->r[29]+0x000003EFu; // 800EEAC8
  c->r[4]=c->r[30]+0x00000046u; // 800EEACC
  c->r[5]=0u+0x00000010u; // 800EEAD0
  c->lr=0x800EEAD8u; f_800043C4(c); // 800EEAD4
  c->r[4]=addc(c,c->r[30],0x00000040u,0); cr0(c,c->r[4]); // 800EEAD8
  if (crb(c,2)) { goto L_800EEAEC; } // 800EEADC
  c->r[3]=c->r[31]+0x00000D20u; // 800EEAE0
  c->r[5]=0u+0x00000006u; // 800EEAE4
  c->lr=0x800EEAECu; f_800043C4(c); // 800EEAE8
L_800EEAEC:;
  c->r[4]=addc(c,c->r[30],0x00000046u,0); cr0(c,c->r[4]); // 800EEAEC
  if (crb(c,2)) { goto L_800EEB04; } // 800EEAF0
  c->r[3]=c->r[31]+0x00000D20u; // 800EEAF4
  c->r[5]=0u+0x00000010u; // 800EEAF8
  c->r[3]=c->r[3]+0x00000006u; // 800EEAFC
  c->lr=0x800EEB04u; f_800043C4(c); // 800EEB00
L_800EEB04:;
  cmps(c,0,(int32_t)c->r[30],0); // 800EEB04
  if (crb(c,2)) { goto L_800EEB20; } // 800EEB08
  c->r[3]=c->r[31]+0x00000D20u; // 800EEB0C
  c->r[4]=c->r[30]|c->r[30]; // 800EEB10
  c->r[3]=c->r[3]+0x00000016u; // 800EEB14
  c->r[5]=0u+0x00000040u; // 800EEB18
  c->lr=0x800EEB20u; f_800043C4(c); // 800EEB1C
L_800EEB20:;
  c->r[3]=R32(c->r[13]+0xFFFFA0B4u); // 800EEB20
  c->r[0]=0u+0x00000008u; // 800EEB24
  c->r[4]=c->r[31]+0x00000D20u; // 800EEB28
  c->r[5]=rotl(c->r[3],16)&0x0000FFFFu; // 800EEB2C
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 800EEB30
  c->ctr=c->r[0]; // 800EEB34
L_800EEB38:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 800EEB38
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEB3C
  c->r[5]=c->r[5]+c->r[3]; // 800EEB40
  c->r[3]=R16(c->r[4]+0x00000002u); // 800EEB44
  c->r[0]=c->r[6]+c->r[0]; // 800EEB48
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEB4C
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEB50
  c->r[5]=c->r[5]+c->r[3]; // 800EEB54
  c->r[3]=R16(c->r[4]+0x00000004u); // 800EEB58
  c->r[0]=c->r[6]+c->r[0]; // 800EEB5C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEB60
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEB64
  c->r[5]=c->r[5]+c->r[3]; // 800EEB68
  c->r[3]=R16(c->r[4]+0x00000006u); // 800EEB6C
  c->r[0]=c->r[6]+c->r[0]; // 800EEB70
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEB74
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEB78
  c->r[5]=c->r[5]+c->r[3]; // 800EEB7C
  c->r[3]=R16(c->r[4]+0x00000008u); // 800EEB80
  c->r[0]=c->r[6]+c->r[0]; // 800EEB84
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEB88
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEB8C
  c->r[5]=c->r[5]+c->r[3]; // 800EEB90
  c->r[3]=R16(c->r[4]+0x0000000Au); // 800EEB94
  c->r[0]=c->r[6]+c->r[0]; // 800EEB98
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEB9C
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEBA0
  c->r[5]=c->r[5]+c->r[3]; // 800EEBA4
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 800EEBA8
  c->r[0]=c->r[6]+c->r[0]; // 800EEBAC
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEBB0
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEBB4
  c->r[5]=c->r[5]+c->r[3]; // 800EEBB8
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 800EEBBC
  c->r[0]=c->r[6]+c->r[0]; // 800EEBC0
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEBC4
  c->r[4]=c->r[4]+0x00000010u; // 800EEBC8
  c->r[0]=~(c->r[3]|c->r[3]); // 800EEBCC
  c->r[5]=c->r[5]+c->r[3]; // 800EEBD0
  c->r[0]=c->r[6]+c->r[0]; // 800EEBD4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EEBD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EEB38; } // 800EEBDC
  c->r[6]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 800EEBE0
  c->r[3]=c->r[31]+0x00000D20u; // 800EEBE4
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EEBE8
  c->r[3]=c->r[3]+0x00000080u; // 800EEBEC
  c->r[4]=c->r[1]+0x00000008u; // 800EEBF0
  c->r[5]=0u+0x00000004u; // 800EEBF4
  c->lr=0x800EEBFCu; f_800043C4(c); // 800EEBF8
L_800EEBFC:;
  c->r[0]=R8(c->r[30]+0x00000056u); // 800EEBFC
  c->r[4]=c->r[31]+0x00000DC0u; // 800EEC00
  c->r[5]=c->r[30]+0x00000040u; // 800EEC04
  c->r[3]=0u+0x00000007u; // 800EEC08
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EEC0C
  W32(c->r[4]+c->r[0],c->r[5]); // 800EEC10
L_800EEC14:;
  c->r[11]=c->r[1]+0x00000030u; // 800EEC14
  c->lr=0x800EEC1Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800EEC18
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EEC1C
  c->lr=c->r[0]; // 800EEC20
  c->r[1]=c->r[1]+0x00000030u; // 800EEC24
  return; // 800EEC28
  unimpl(c,0x800EEC2Cu,"00000000"); // 800EEC2C
  f_800EEC30(c);
}

// fn_800EEC30
void f_800EEC30(Ctx* __restrict c) {
  trace_call(0x800EEC30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEC30
  c->r[0]=c->lr; // 800EEC34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EEC38
  c->r[11]=c->r[1]+0x00000020u; // 800EEC3C
  c->lr=0x800EEC44u; f_800ADA2C(c); // 800EEC40
  c->r[29]=0u+0x803A0000u; // 800EEC44
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800EEC48
  c->lr=0x800EEC50u; f_800D9E50(c); // 800EEC4C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EEC50
  c->r[0]=cntlz(c->r[0]); // 800EEC54
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; cr0(c,c->r[0]); // 800EEC58
  if (crb(c,2)) { goto L_800EEC68; } // 800EEC5C
  c->r[3]=0u+0x00000016u; // 800EEC60
  goto L_800EED38; // 800EEC64
L_800EEC68:;
  c->r[30]=c->r[29]+0x000008B8u; // 800EEC68
  c->r[4]=0u+0x00000000u; // 800EEC6C
  c->r[3]=c->r[30]+0x00000001u; // 800EEC70
  c->r[5]=0u+0x000002BCu; // 800EEC74
  c->lr=0x800EEC7Cu; f_80004714(c); // 800EEC78
  c->lr=0x800EEC80u; f_8007FFF0(c); // 800EEC7C
  c->r[31]=c->r[29]+0x00000000u; // 800EEC80
  c->r[28]=R8(c->r[31]+0x00000012u); // 800EEC84
  c->lr=0x800EEC8Cu; f_80080030(c); // 800EEC88
  W8(c->r[29]+0x000008B8u,c->r[28]); // 800EEC8C
  c->r[27]=0u+0x00000000u; // 800EEC90
  c->r[31]=R32(c->r[31]+0x00000064u); // 800EEC94
  goto L_800EECD8; // 800EEC98
L_800EEC9C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800EEC9C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800EECA0
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 800EECA4
  c->r[5]=0u+0x00000006u; // 800EECA8
  c->r[4]=c->r[3]+0x00000040u; // 800EECAC
  c->r[3]=c->r[30]+c->r[28]; // 800EECB0
  c->r[3]=c->r[3]+0x00000001u; // 800EECB4
  c->lr=0x800EECBCu; f_800043C4(c); // 800EECB8
  c->r[3]=c->r[30]+c->r[28]; // 800EECBC
  c->r[4]=R32(c->r[31]+0x00000000u); // 800EECC0
  c->r[3]=c->r[3]+0x00000007u; // 800EECC4
  c->r[5]=0u+0x00000040u; // 800EECC8
  c->lr=0x800EECD0u; f_800043C4(c); // 800EECCC
  c->r[31]=R32(c->r[31]+0x00000008u); // 800EECD0
  c->r[27]=c->r[27]+0x00000001u; // 800EECD4
L_800EECD8:;
  cmps(c,0,(int32_t)c->r[31],0); // 800EECD8
  if (!crb(c,2)) { IRQCHK(c); goto L_800EEC9C; } // 800EECDC
  c->r[3]=c->r[29]+0x000008B8u; // 800EECE0
  c->lr=0x800EECE8u; f_800DB9B0(c); // 800EECE4
  cmps(c,0,(int32_t)c->r[3],0); // 800EECE8
  if (!crb(c,2)) { goto L_800EECF8; } // 800EECEC
  c->r[3]=0u+0x00000016u; // 800EECF0
  goto L_800EED38; // 800EECF4
L_800EECF8:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EECF8
  c->r[28]=0u+0x00000019u; // 800EECFC
  cmps(c,0,(int32_t)c->r[0],0); // 800EED00
  if (crb(c,2)) { goto L_800EED34; } // 800EED04
  c->r[4]=0u+0x80330000u; // 800EED08
  c->r[3]=c->r[29]+0x00000858u; // 800EED0C
  c->r[4]=c->r[4]+0xFFFF9A40u; // 800EED10
  c->r[5]=0u+0x00000010u; // 800EED14
  c->lr=0x800EED1Cu; f_800B3824(c); // 800EED18
  cmps(c,0,(int32_t)c->r[3],0); // 800EED1C
  if (!crb(c,2)) { goto L_800EED34; } // 800EED20
  c->lr=0x800EED28u; f_800DBF80(c); // 800EED24
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800EED28
  if (!crb(c,2)) { goto L_800EED34; } // 800EED2C
  c->r[28]=0u+0x00000064u; // 800EED30
L_800EED34:;
  c->r[3]=c->r[28]|c->r[28]; // 800EED34
L_800EED38:;
  c->r[11]=c->r[1]+0x00000020u; // 800EED38
  c->lr=0x800EED40u; f_800ADA78(c); // 800EED3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EED40
  c->lr=c->r[0]; // 800EED44
  c->r[1]=c->r[1]+0x00000020u; // 800EED48
  return; // 800EED4C
}

// fn_800EED50
void f_800EED50(Ctx* __restrict c) {
  trace_call(0x800EED50u);
  c->r[4]=0u+0x803A0000u; // 800EED50
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EED54
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 800EED58
  cmps(c,0,(int32_t)c->r[0],0); // 800EED5C
  if (crb(c,2)) { goto L_800EED80; } // 800EED60
  cmps(c,0,(int32_t)c->r[3],0); // 800EED64
  c->r[0]=0u+0x00000019u; // 800EED68
  if (!crb(c,2)) { goto L_800EED74; } // 800EED6C
  c->r[0]=0u+0x00000065u; // 800EED70
L_800EED74:;
  c->r[4]=0u+0x803A0000u; // 800EED74
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EED78
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800EED7C
L_800EED80:;
  c->r[4]=0u+0x803A0000u; // 800EED80
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EED84
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800EED88
  cmps(c,0,(int32_t)c->r[0],0); // 800EED8C
  if (crb(c,2)) { goto L_800EEDB0; } // 800EED90
  cmps(c,0,(int32_t)c->r[3],0); // 800EED94
  c->r[0]=0u+0x00000005u; // 800EED98
  if (!crb(c,2)) { goto L_800EEDA4; } // 800EED9C
  c->r[0]=0u+0x00000065u; // 800EEDA0
L_800EEDA4:;
  c->r[3]=0u+0x803A0000u; // 800EEDA4
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EEDA8
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800EEDAC
L_800EEDB0:;
  c->r[0]=0u+0x00000000u; // 800EEDB0
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EEDB4
  return; // 800EEDB8
  unimpl(c,0x800EEDBCu,"00000000"); // 800EEDBC
  f_800EEDC0(c);
}

// fn_800EEDC0
void f_800EEDC0(Ctx* __restrict c) {
  trace_call(0x800EEDC0u);
  c->r[4]=0u+0x803A0000u; // 800EEDC0
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEDC4
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 800EEDC8
  cmps(c,0,(int32_t)c->r[0],0); // 800EEDCC
  if (crb(c,2)) { goto L_800EEDF4; } // 800EEDD0
  c->r[0]=c->r[3]+0xFFFC0000u; // 800EEDD4
  c->r[5]=0u+0x00000019u; // 800EEDD8
  cmpu(c,0,c->r[0],0x0000AF18u); // 800EEDDC
  if (!crb(c,2)) { goto L_800EEDE8; } // 800EEDE0
  c->r[5]=0u+0x00000066u; // 800EEDE4
L_800EEDE8:;
  c->r[4]=0u+0x803A0000u; // 800EEDE8
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEDEC
  W8(c->r[4]+0x0000000Cu,c->r[5]); // 800EEDF0
L_800EEDF4:;
  c->r[4]=0u+0x803A0000u; // 800EEDF4
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEDF8
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800EEDFC
  cmps(c,0,(int32_t)c->r[0],0); // 800EEE00
  if (crb(c,2)) { goto L_800EEE28; } // 800EEE04
  c->r[0]=c->r[3]+0xFFFC0000u; // 800EEE08
  c->r[4]=0u+0x00000005u; // 800EEE0C
  cmpu(c,0,c->r[0],0x0000AF18u); // 800EEE10
  if (!crb(c,2)) { goto L_800EEE1C; } // 800EEE14
  c->r[4]=0u+0x00000066u; // 800EEE18
L_800EEE1C:;
  c->r[3]=0u+0x803A0000u; // 800EEE1C
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EEE20
  W8(c->r[3]+0x0000000Du,c->r[4]); // 800EEE24
L_800EEE28:;
  c->r[0]=0u+0x00000000u; // 800EEE28
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EEE2C
  return; // 800EEE30
  unimpl(c,0x800EEE34u,"00000000"); // 800EEE34
  unimpl(c,0x800EEE38u,"00000000"); // 800EEE38
  unimpl(c,0x800EEE3Cu,"00000000"); // 800EEE3C
  f_800EEE40(c);
}

// fn_800EEE40
void f_800EEE40(Ctx* __restrict c) {
  trace_call(0x800EEE40u);
  c->r[4]=0u+0x803A0000u; // 800EEE40
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEE44
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 800EEE48
  cmps(c,0,(int32_t)c->r[0],0); // 800EEE4C
  if (crb(c,2)) { goto L_800EEE70; } // 800EEE50
  cmps(c,0,(int32_t)c->r[3],132); // 800EEE54
  c->r[0]=0u+0x00000019u; // 800EEE58
  if (!crb(c,2)) { goto L_800EEE64; } // 800EEE5C
  c->r[0]=0u+0x00000067u; // 800EEE60
L_800EEE64:;
  c->r[4]=0u+0x803A0000u; // 800EEE64
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEE68
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 800EEE6C
L_800EEE70:;
  c->r[4]=0u+0x803A0000u; // 800EEE70
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEE74
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800EEE78
  cmps(c,0,(int32_t)c->r[0],0); // 800EEE7C
  if (crb(c,2)) { goto L_800EEEA0; } // 800EEE80
  cmps(c,0,(int32_t)c->r[3],132); // 800EEE84
  c->r[0]=0u+0x00000005u; // 800EEE88
  if (!crb(c,2)) { goto L_800EEE94; } // 800EEE8C
  c->r[0]=0u+0x00000067u; // 800EEE90
L_800EEE94:;
  c->r[3]=0u+0x803A0000u; // 800EEE94
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EEE98
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800EEE9C
L_800EEEA0:;
  c->r[0]=0u+0x00000000u; // 800EEEA0
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EEEA4
  return; // 800EEEA8
  unimpl(c,0x800EEEACu,"00000000"); // 800EEEAC
  f_800EEEB0(c);
}

// fn_800EEEB0
void f_800EEEB0(Ctx* __restrict c) {
  trace_call(0x800EEEB0u);
  c->r[3]=0u+0x803A0000u; // 800EEEB0
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EEEB4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800EEEB8
  cmps(c,0,(int32_t)c->r[0],0); // 800EEEBC
  if (crb(c,2)) { goto L_800EEECC; } // 800EEEC0
  c->r[0]=0u+0x00000019u; // 800EEEC4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800EEEC8
L_800EEECC:;
  c->r[3]=0u+0x803A0000u; // 800EEECC
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EEED0
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800EEED4
  cmps(c,0,(int32_t)c->r[0],0); // 800EEED8
  if (crb(c,2)) { goto L_800EEEE8; } // 800EEEDC
  c->r[0]=0u+0x00000005u; // 800EEEE0
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800EEEE4
L_800EEEE8:;
  c->r[0]=0u+0x00000000u; // 800EEEE8
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EEEEC
  return; // 800EEEF0
  unimpl(c,0x800EEEF4u,"00000000"); // 800EEEF4
  unimpl(c,0x800EEEF8u,"00000000"); // 800EEEF8
  unimpl(c,0x800EEEFCu,"00000000"); // 800EEEFC
  f_800EEF00(c);
}

// fn_800EEF00
void f_800EEF00(Ctx* __restrict c) {
  trace_call(0x800EEF00u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EEF00
  c->r[0]=c->lr; // 800EEF04
  c->r[3]=0u+0x803A0000u; // 800EEF08
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EEF0C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EEF10
  W32(c->r[1]+0x00000028u,c->r[30]); // 800EEF14
  W32(c->r[1]+0x00000024u,c->r[29]); // 800EEF18
  c->r[29]=c->r[3]+0xFFFFB7C0u; // 800EEF1C
  W32(c->r[1]+0x00000020u,c->r[28]); // 800EEF20
  c->r[0]=R8(c->r[29]+0x000006E7u); // 800EEF24
  cmps(c,0,(int32_t)c->r[0],0); // 800EEF28
  if (crb(c,2)) { goto L_800EEFC4; } // 800EEF2C
  c->r[28]=0u+0x00000000u; // 800EEF30
  c->r[30]=0u+0x00000000u; // 800EEF34
L_800EEF38:;
  c->lr=0x800EEF3Cu; f_8007FFF0(c); // 800EEF38
  cmpu(c,0,c->r[28],0x00000009u); // 800EEF3C
  if (crb(c,1)) { goto L_800EEF50; } // 800EEF40
  c->r[4]=c->r[29]+c->r[30]; // 800EEF44
  c->r[31]=c->r[4]+0x000000E4u; // 800EEF48
  goto L_800EEF60; // 800EEF4C
L_800EEF50:;
  c->r[0]=c->r[28]+0xFFFFFFF6u; // 800EEF50
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800EEF54
  c->r[4]=c->r[29]+c->r[0]; // 800EEF58
  c->r[31]=c->r[4]+0x000004A4u; // 800EEF5C
L_800EEF60:;
  c->lr=0x800EEF64u; f_80080030(c); // 800EEF60
  c->r[0]=R8(c->r[31]+0x00000059u); // 800EEF64
  cmpu(c,0,c->r[0],0x00000008u); // 800EEF68
  if (!crb(c,2)) { goto L_800EEFB4; } // 800EEF6C
  c->r[3]=0u+0x803A0000u; // 800EEF70
  c->r[7]=0u+0x00000008u; // 800EEF74
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EEF78
  c->r[4]=0u+0x00000002u; // 800EEF7C
  c->r[6]=0u+0x00000001u; // 800EEF80
  c->r[0]=0u+0x00000000u; // 800EEF84
  W8(c->r[1]+0x00000010u,c->r[4]); // 800EEF88
  c->r[4]=c->r[31]+0x00000040u; // 800EEF8C
  c->r[3]=R8(c->r[3]+0x0000070Au); // 800EEF90
  c->r[5]=c->r[1]+0x00000008u; // 800EEF94
  W16(c->r[1]+0x00000008u,c->r[7]); // 800EEF98
  W16(c->r[1]+0x0000000Au,c->r[7]); // 800EEF9C
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 800EEFA0
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800EEFA4
  c->lr=0x800EEFACu; f_8010325C(c); // 800EEFA8
  c->r[3]=0u+0x0000000Eu; // 800EEFAC
  goto L_800EF038; // 800EEFB0
L_800EEFB4:;
  c->r[28]=c->r[28]+0x00000001u; // 800EEFB4
  c->r[30]=c->r[30]+0x00000060u; // 800EEFB8
  cmps(c,0,(int32_t)c->r[28],16); // 800EEFBC
  if (crb(c,0)) { IRQCHK(c); goto L_800EEF38; } // 800EEFC0
L_800EEFC4:;
  c->r[3]=c->r[29]+0x00000710u; // 800EEFC4
  c->lr=0x800EEFCCu; f_8007AC20(c); // 800EEFC8
  c->r[0]=R32(c->r[13]+0xFFFFA0A0u); // 800EEFCC
  cmps(c,0,(int32_t)c->r[0],0); // 800EEFD0
  if (!crb(c,2)) { goto L_800EF004; } // 800EEFD4
  c->lr=0x800EEFDCu; f_8007FFF0(c); // 800EEFD8
  c->r[4]=0u+0x803A0000u; // 800EEFDC
  c->r[5]=0u+0x00000000u; // 800EEFE0
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800EEFE4
  c->r[0]=0u+0x00000001u; // 800EEFE8
  W8(c->r[4]+0x000006EBu,c->r[5]); // 800EEFEC
  W8(c->r[4]+0x000006EAu,c->r[0]); // 800EEFF0
  c->lr=0x800EEFF8u; f_80080030(c); // 800EEFF4
  c->r[3]=0u+0x00000000u; // 800EEFF8
  c->r[4]=0u+0x00000001u; // 800EEFFC
  c->lr=0x800EF004u; f_800FA53C(c); // 800EF000
L_800EF004:;
  c->r[0]=R8(c->r[29]+0x000006E9u); // 800EF004
  cmps(c,0,(int32_t)c->r[0],0); // 800EF008
  if (!crb(c,2)) { goto L_800EF018; } // 800EF00C
  c->r[12]=R32(c->r[29]+0x00000000u); // 800EF010
  goto L_800EF01C; // 800EF014
L_800EF018:;
  c->r[12]=R32(c->r[29]+0x00000004u); // 800EF018
L_800EF01C:;
  cmps(c,0,(int32_t)c->r[12],0); // 800EF01C
  if (crb(c,2)) { goto L_800EF034; } // 800EF020
  c->r[4]=R8(c->r[29]+0x000006E6u); // 800EF024
  c->r[3]=0u+0x00000001u; // 800EF028
  c->ctr=c->r[12]; // 800EF02C
  if (true) { c->lr=0x800EF034u; dispatch(c,c->ctr); } // 800EF030
L_800EF034:;
  c->r[3]=0u+0x00000000u; // 800EF034
L_800EF038:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EF038
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EF03C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800EF040
  c->r[29]=R32(c->r[1]+0x00000024u); // 800EF044
  c->r[28]=R32(c->r[1]+0x00000020u); // 800EF048
  c->lr=c->r[0]; // 800EF04C
  c->r[1]=c->r[1]+0x00000030u; // 800EF050
  return; // 800EF054
  unimpl(c,0x800EF058u,"00000000"); // 800EF058
  unimpl(c,0x800EF05Cu,"00000000"); // 800EF05C
  f_800EF060(c);
}

// fn_800EF060
void f_800EF060(Ctx* __restrict c) {
  trace_call(0x800EF060u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EF060
  c->r[0]=c->lr; // 800EF064
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EF068
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EF06C
  c->r[31]=0u+0x803A0000u; // 800EF070
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800EF074
  W32(c->r[1]+0x00000028u,c->r[30]); // 800EF078
  W32(c->r[1]+0x00000024u,c->r[29]); // 800EF07C
  c->r[29]=c->r[31]+0x00000000u; // 800EF080
  W32(c->r[1]+0x00000020u,c->r[28]); // 800EF084
  c->r[28]=0u+0x80330000u; // 800EF088
  c->r[28]=c->r[28]+0xFFFF9810u; // 800EF08C
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800EF090
  cmps(c,0,(int32_t)c->r[0],19); // 800EF094
  if (crb(c,2)) { goto L_800EF56C; } // 800EF098
  if (!crb(c,0)) { goto L_800EF11C; } // 800EF09C
  cmps(c,0,(int32_t)c->r[0],9); // 800EF0A0
  if (crb(c,2)) { goto L_800EFA0C; } // 800EF0A4
  if (!crb(c,0)) { goto L_800EF0E8; } // 800EF0A8
  cmps(c,0,(int32_t)c->r[0],4); // 800EF0AC
  if (crb(c,2)) { goto L_800EF2C8; } // 800EF0B0
  if (!crb(c,0)) { goto L_800EF0D0; } // 800EF0B4
  cmps(c,0,(int32_t)c->r[0],2); // 800EF0B8
  if (crb(c,2)) { goto L_800EF204; } // 800EF0BC
  if (!crb(c,0)) { goto L_800EF8B0; } // 800EF0C0
  cmps(c,0,(int32_t)c->r[0],1); // 800EF0C4
  if (!crb(c,0)) { goto L_800EF18C; } // 800EF0C8
  goto L_800EFA0C; // 800EF0CC
L_800EF0D0:;
  cmps(c,0,(int32_t)c->r[0],7); // 800EF0D0
  if (crb(c,2)) { goto L_800EF710; } // 800EF0D4
  if (!crb(c,0)) { goto L_800EF79C; } // 800EF0D8
  cmps(c,0,(int32_t)c->r[0],6); // 800EF0DC
  if (!crb(c,0)) { goto L_800EFA0C; } // 800EF0E0
  goto L_800EF3B4; // 800EF0E4
L_800EF0E8:;
  cmps(c,0,(int32_t)c->r[0],15); // 800EF0E8
  if (crb(c,2)) { goto L_800EF4F0; } // 800EF0EC
  if (!crb(c,0)) { goto L_800EF10C; } // 800EF0F0
  cmps(c,0,(int32_t)c->r[0],13); // 800EF0F4
  if (crb(c,2)) { goto L_800EFA0C; } // 800EF0F8
  if (!crb(c,0)) { goto L_800EF8A4; } // 800EF0FC
  cmps(c,0,(int32_t)c->r[0],11); // 800EF100
  if (!crb(c,0)) { goto L_800EFA0C; } // 800EF104
  goto L_800EF7FC; // 800EF108
L_800EF10C:;
  cmps(c,0,(int32_t)c->r[0],17); // 800EF10C
  if (crb(c,2)) { goto L_800EF488; } // 800EF110
  if (!crb(c,0)) { goto L_800EF4FC; } // 800EF114
  goto L_800EF3E4; // 800EF118
L_800EF11C:;
  cmps(c,0,(int32_t)c->r[0],29); // 800EF11C
  if (crb(c,2)) { goto L_800EF198; } // 800EF120
  if (!crb(c,0)) { goto L_800EF15C; } // 800EF124
  cmps(c,0,(int32_t)c->r[0],24); // 800EF128
  if (crb(c,2)) { goto L_800EF8F0; } // 800EF12C
  if (!crb(c,0)) { goto L_800EF14C; } // 800EF130
  cmps(c,0,(int32_t)c->r[0],22); // 800EF134
  if (crb(c,2)) { goto L_800EF7D0; } // 800EF138
  if (!crb(c,0)) { goto L_800EF838; } // 800EF13C
  cmps(c,0,(int32_t)c->r[0],21); // 800EF140
  if (!crb(c,0)) { goto L_800EF6EC; } // 800EF144
  goto L_800EF6E0; // 800EF148
L_800EF14C:;
  cmps(c,0,(int32_t)c->r[0],26); // 800EF14C
  if (crb(c,2)) { goto L_800EFA0C; } // 800EF150
  if (!crb(c,0)) { goto L_800EFA0C; } // 800EF154
  goto L_800EF7DC; // 800EF158
L_800EF15C:;
  cmps(c,0,(int32_t)c->r[0],103); // 800EF15C
  if (crb(c,2)) { goto L_800EF9E4; } // 800EF160
  if (!crb(c,0)) { goto L_800EF180; } // 800EF164
  cmps(c,0,(int32_t)c->r[0],101); // 800EF168
  if (crb(c,2)) { goto L_800EF978; } // 800EF16C
  if (!crb(c,0)) { goto L_800EF9B0; } // 800EF170
  cmps(c,0,(int32_t)c->r[0],100); // 800EF174
  if (!crb(c,0)) { goto L_800EF944; } // 800EF178
  goto L_800EFA0C; // 800EF17C
L_800EF180:;
  cmps(c,0,(int32_t)c->r[0],255); // 800EF180
  if (crb(c,2)) { goto L_800EF874; } // 800EF184
  goto L_800EFA0C; // 800EF188
L_800EF18C:;
  c->lr=0x800EF190u; f_800EE580(c); // 800EF18C
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 800EF190
  goto L_800EFA0C; // 800EF194
L_800EF198:;
  c->r[0]=R8(c->r[29]+0x000006E8u); // 800EF198
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF19C
  if (!crb(c,2)) { goto L_800EF1AC; } // 800EF1A0
  c->r[0]=0u+0x0000000Eu; // 800EF1A4
  goto L_800EF1FC; // 800EF1A8
L_800EF1AC:;
  c->lr=0x800EF1B0u; f_8007FFF0(c); // 800EF1AC
  c->r[28]=R8(c->r[29]+0x000006E5u); // 800EF1B0
  c->lr=0x800EF1B8u; f_80080030(c); // 800EF1B4
  cmpu(c,0,c->r[28],0x00000004u); // 800EF1B8
  if (!crb(c,2)) { goto L_800EF1DC; } // 800EF1BC
  c->lr=0x800EF1C4u; f_8007FFF0(c); // 800EF1C0
  c->r[28]=R8(c->r[29]+0x000006E4u); // 800EF1C4
  c->lr=0x800EF1CCu; f_80080030(c); // 800EF1C8
  cmpu(c,0,c->r[28],0x00000004u); // 800EF1CC
  if (!crb(c,2)) { goto L_800EF1DC; } // 800EF1D0
  c->r[0]=0u+0x0000000Eu; // 800EF1D4
  goto L_800EF1FC; // 800EF1D8
L_800EF1DC:;
  c->r[3]=R8(c->r[29]+0x00000749u); // 800EF1DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EF1E0
  W8(c->r[29]+0x00000749u,c->r[0]); // 800EF1E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800EF1E8
  if (!crb(c,0)) { goto L_800EF1F8; } // 800EF1EC
  c->r[0]=0u+0x00000002u; // 800EF1F0
  goto L_800EF1FC; // 800EF1F4
L_800EF1F8:;
  c->r[0]=0u+0x0000001Du; // 800EF1F8
L_800EF1FC:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF1FC
  goto L_800EFA0C; // 800EF200
L_800EF204:;
  c->r[0]=R8(c->r[29]+0x000006E7u); // 800EF204
  c->r[4]=0u+0x00000001u; // 800EF208
  c->r[3]=0u+0x00000000u; // 800EF20C
  W8(c->r[1]+0x00000008u,c->r[4]); // 800EF210
  cmps(c,0,(int32_t)c->r[0],0); // 800EF214
  W8(c->r[1]+0x0000000Au,c->r[4]); // 800EF218
  W8(c->r[1]+0x0000000Bu,c->r[3]); // 800EF21C
  if (crb(c,2)) { goto L_800EF230; } // 800EF220
  c->r[0]=0u+0x00000003u; // 800EF224
  W8(c->r[1]+0x00000009u,c->r[0]); // 800EF228
  goto L_800EF290; // 800EF22C
L_800EF230:;
  c->r[0]=R8(c->r[29]+0x000006E9u); // 800EF230
  cmps(c,0,(int32_t)c->r[0],0); // 800EF234
  if (!crb(c,2)) { goto L_800EF26C; } // 800EF238
  c->lr=0x800EF240u; f_8007FFF0(c); // 800EF23C
  c->r[28]=R8(c->r[29]+0x000006E5u); // 800EF240
  c->lr=0x800EF248u; f_80080030(c); // 800EF244
  cmpu(c,0,c->r[28],0x00000003u); // 800EF248
  if (!crb(c,2)) { goto L_800EF258; } // 800EF24C
  c->r[3]=0u+0x0000000Au; // 800EF250
  goto L_800EF25C; // 800EF254
L_800EF258:;
  c->r[3]=0u+0x00000005u; // 800EF258
L_800EF25C:;
  c->r[0]=R8(c->r[29]+0x000006E8u); // 800EF25C
  c->r[0]=c->r[3]-c->r[0]; // 800EF260
  W8(c->r[1]+0x00000009u,c->r[0]); // 800EF264
  goto L_800EF290; // 800EF268
L_800EF26C:;
  c->lr=0x800EF270u; f_8007FFF0(c); // 800EF26C
  c->r[28]=R8(c->r[29]+0x000006E5u); // 800EF270
  c->lr=0x800EF278u; f_80080030(c); // 800EF274
  cmpu(c,0,c->r[28],0x00000003u); // 800EF278
  if (!crb(c,2)) { goto L_800EF288; } // 800EF27C
  c->r[0]=0u+0x00000008u; // 800EF280
  goto L_800EF28C; // 800EF284
L_800EF288:;
  c->r[0]=0u+0x00000003u; // 800EF288
L_800EF28C:;
  W8(c->r[1]+0x00000009u,c->r[0]); // 800EF28C
L_800EF290:;
  c->r[0]=0u+0x00000000u; // 800EF290
  W8(c->r[13]+0xFFFFA0CFu,c->r[0]); // 800EF294
  c->r[3]=c->r[31]+0x00000750u; // 800EF298
  c->r[4]=0u+0x00000000u; // 800EF29C
  c->r[5]=0u+0x00000108u; // 800EF2A0
  c->lr=0x800EF2A8u; f_80004714(c); // 800EF2A4
  c->r[5]=0u+0x800F0000u; // 800EF2A8
  c->r[3]=c->r[1]+0x00000008u; // 800EF2AC
  c->r[5]=c->r[5]+0x00003230u; // 800EF2B0
  c->r[4]=0u+0x00000000u; // 800EF2B4
  c->lr=0x800EF2BCu; f_800FA594(c); // 800EF2B8
  c->r[0]=0u+0x00000003u; // 800EF2BC
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF2C0
  goto L_800EFA0C; // 800EF2C4
L_800EF2C8:;
  c->r[0]=R8(c->r[13]+0xFFFFA0CFu); // 800EF2C8
  c->r[30]=0u+0x00000001u; // 800EF2CC
  cmps(c,0,(int32_t)c->r[0],0); // 800EF2D0
  if (crb(c,2)) { goto L_800EF344; } // 800EF2D4
  c->r[3]=c->r[31]+0x00000750u; // 800EF2D8
  c->r[4]=c->r[28]+0x0000021Cu; // 800EF2DC
  c->r[3]=c->r[3]+0x00000006u; // 800EF2E0
  c->r[5]=0u+0x00000010u; // 800EF2E4
  c->lr=0x800EF2ECu; f_800B3824(c); // 800EF2E8
  cmps(c,0,(int32_t)c->r[3],0); // 800EF2EC
  if (!crb(c,2)) { goto L_800EF2F8; } // 800EF2F0
  c->r[30]=0u+0x00000005u; // 800EF2F4
L_800EF2F8:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EF2F8
  cmps(c,0,(int32_t)c->r[0],0); // 800EF2FC
  if (crb(c,2)) { goto L_800EF324; } // 800EF300
  c->r[3]=c->r[31]+0x00000750u; // 800EF304
  c->r[4]=c->r[28]+0x00000230u; // 800EF308
  c->r[3]=c->r[3]+0x00000006u; // 800EF30C
  c->r[5]=0u+0x00000010u; // 800EF310
  c->lr=0x800EF318u; f_800B3824(c); // 800EF314
  cmps(c,0,(int32_t)c->r[3],0); // 800EF318
  if (!crb(c,2)) { goto L_800EF324; } // 800EF31C
  c->r[30]=0u+0x00000005u; // 800EF320
L_800EF324:;
  c->r[3]=c->r[31]+0x00000000u; // 800EF324
  c->r[4]=R8(c->r[13]+0xFFFFA0CEu); // 800EF328
  c->r[0]=R8(c->r[3]+0x0000070Bu); // 800EF32C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800EF330
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 800EF334
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800EF338
  if (!crb(c,0)) { goto L_800EF344; } // 800EF33C
  c->r[30]=0u+0x00000001u; // 800EF340
L_800EF344:;
  c->r[28]=c->r[31]+0x00000000u; // 800EF344
  c->r[0]=R8(c->r[28]+0x000006E9u); // 800EF348
  cmps(c,0,(int32_t)c->r[0],0); // 800EF34C
  if (!crb(c,2)) { goto L_800EF3AC; } // 800EF350
  cmpu(c,0,c->r[30],0x00000001u); // 800EF354
  if (!crb(c,2)) { goto L_800EF3AC; } // 800EF358
  c->r[30]=0u+0x00000018u; // 800EF35C
  c->lr=0x800EF364u; f_8007FFF0(c); // 800EF360
  c->r[28]=R8(c->r[28]+0x000006E5u); // 800EF364
  c->lr=0x800EF36Cu; f_80080030(c); // 800EF368
  cmpu(c,0,c->r[28],0x00000003u); // 800EF36C
  if (!crb(c,2)) { goto L_800EF37C; } // 800EF370
  c->r[0]=0u+0x000000C8u; // 800EF374
  goto L_800EF380; // 800EF378
L_800EF37C:;
  c->r[0]=0u+0x00000064u; // 800EF37C
L_800EF380:;
  c->r[31]=c->r[31]+0x00000000u; // 800EF380
  W16(c->r[31]+0x0000074Au,c->r[0]); // 800EF384
  c->lr=0x800EF38Cu; f_8007FFF0(c); // 800EF388
  c->r[4]=0u+0x00000000u; // 800EF38C
  c->r[0]=0u+0x00000001u; // 800EF390
  W8(c->r[31]+0x000006EBu,c->r[4]); // 800EF394
  W8(c->r[31]+0x000006EAu,c->r[0]); // 800EF398
  c->lr=0x800EF3A0u; f_80080030(c); // 800EF39C
  c->r[3]=0u+0x00000000u; // 800EF3A0
  c->r[4]=0u+0x00000001u; // 800EF3A4
  c->lr=0x800EF3ACu; f_800FA53C(c); // 800EF3A8
L_800EF3AC:;
  W8(c->r[29]+0x0000000Cu,c->r[30]); // 800EF3AC
  goto L_800EFA0C; // 800EF3B0
L_800EF3B4:;
  c->r[3]=c->r[31]+0x00000750u; // 800EF3B4
  c->r[28]=0u+0x00000011u; // 800EF3B8
  c->lr=0x800EF3C0u; f_800F2410(c); // 800EF3BC
  cmps(c,0,(int32_t)c->r[3],0); // 800EF3C0
  if (crb(c,2)) { goto L_800EF3DC; } // 800EF3C4
  c->r[4]=c->r[3]|c->r[3]; // 800EF3C8
  c->r[3]=c->r[31]+0x00000858u; // 800EF3CC
  c->r[5]=0u+0x00000060u; // 800EF3D0
  c->lr=0x800EF3D8u; f_800043C4(c); // 800EF3D4
  c->r[28]=0u+0x00000010u; // 800EF3D8
L_800EF3DC:;
  W8(c->r[29]+0x0000000Cu,c->r[28]); // 800EF3DC
  goto L_800EFA0C; // 800EF3E0
L_800EF3E4:;
  c->r[28]=c->r[31]+0x00000858u; // 800EF3E4
  c->r[3]=0u+0x00000001u; // 800EF3E8
  c->r[0]=R8(c->r[28]+0x0000005Bu); // 800EF3EC
  W8(c->r[28]+0x00000059u,c->r[3]); // 800EF3F0
  cmps(c,0,(int32_t)c->r[0],2); // 800EF3F4
  if (crb(c,2)) { goto L_800EF424; } // 800EF3F8
  if (!crb(c,0)) { goto L_800EF410; } // 800EF3FC
  cmps(c,0,(int32_t)c->r[0],0); // 800EF400
  if (crb(c,2)) { goto L_800EF424; } // 800EF404
  if (!crb(c,0)) { goto L_800EF458; } // 800EF408
  goto L_800EF47C; // 800EF40C
L_800EF410:;
  cmps(c,0,(int32_t)c->r[0],6); // 800EF410
  if (!crb(c,0)) { goto L_800EF47C; } // 800EF414
  cmps(c,0,(int32_t)c->r[0],4); // 800EF418
  if (!crb(c,0)) { goto L_800EF424; } // 800EF41C
  goto L_800EF458; // 800EF420
L_800EF424:;
  c->r[3]=c->r[31]+0x00000000u; // 800EF424
  c->r[0]=R8(c->r[3]+0x000006E9u); // 800EF428
  cmps(c,0,(int32_t)c->r[0],0); // 800EF42C
  if (!crb(c,2)) { goto L_800EF44C; } // 800EF430
  c->r[3]=c->r[28]|c->r[28]; // 800EF434
  c->lr=0x800EF43Cu; f_800F29C0(c); // 800EF438
  c->r[3]=c->r[28]+0x00000040u; // 800EF43C
  c->lr=0x800EF444u; f_800F2300(c); // 800EF440
  c->r[0]=0u+0x00000011u; // 800EF444
  goto L_800EF480; // 800EF448
L_800EF44C:;
  c->r[0]=0u+0x00000004u; // 800EF44C
  W8(c->r[28]+0x0000005Bu,c->r[0]); // 800EF450
  goto L_800EF47C; // 800EF454
L_800EF458:;
  c->r[3]=c->r[28]|c->r[28]; // 800EF458
  c->lr=0x800EF460u; f_800F2610(c); // 800EF45C
  c->r[3]=c->r[31]+0x00000000u; // 800EF460
  c->r[3]=R32(c->r[3]+0x00000018u); // 800EF464
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EF468
  c->r[3]=c->r[3]+0x00000040u; // 800EF46C
  c->lr=0x800EF474u; f_800F2300(c); // 800EF470
  c->r[0]=0u+0x00000011u; // 800EF474
  goto L_800EF480; // 800EF478
L_800EF47C:;
  c->r[0]=0u+0x0000000Fu; // 800EF47C
L_800EF480:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF480
  goto L_800EFA0C; // 800EF484
L_800EF488:;
  c->r[0]=R8(c->r[29]+0x000006E9u); // 800EF488
  c->r[28]=c->r[31]+0x00000858u; // 800EF48C
  c->r[3]=0u+0x00000001u; // 800EF490
  W8(c->r[28]+0x00000059u,c->r[3]); // 800EF494
  cmps(c,0,(int32_t)c->r[0],0); // 800EF498
  if (!crb(c,2)) { goto L_800EF4A8; } // 800EF49C
  c->r[0]=0u+0x00000000u; // 800EF4A0
  goto L_800EF4AC; // 800EF4A4
L_800EF4A8:;
  c->r[0]=0u+0x00000001u; // 800EF4A8
L_800EF4AC:;
  W8(c->r[28]+0x0000005Bu,c->r[0]); // 800EF4AC
  c->r[3]=c->r[28]+0x00000040u; // 800EF4B0
  c->r[4]=c->r[31]+0x00000750u; // 800EF4B4
  c->r[5]=0u+0x00000006u; // 800EF4B8
  c->lr=0x800EF4C0u; f_800043C4(c); // 800EF4BC
  c->r[4]=c->r[31]+0x00000750u; // 800EF4C0
  c->r[3]=c->r[28]|c->r[28]; // 800EF4C4
  c->r[4]=c->r[4]+0x00000006u; // 800EF4C8
  c->r[5]=0u+0x00000040u; // 800EF4CC
  c->lr=0x800EF4D4u; f_800043C4(c); // 800EF4D0
  c->r[3]=c->r[28]+0x00000046u; // 800EF4D4
  c->r[4]=0u+0x00000000u; // 800EF4D8
  c->r[5]=0u+0x00000010u; // 800EF4DC
  c->lr=0x800EF4E4u; f_80004714(c); // 800EF4E0
  c->r[0]=0u+0x0000000Fu; // 800EF4E4
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF4E8
  goto L_800EFA0C; // 800EF4EC
L_800EF4F0:;
  c->lr=0x800EF4F4u; f_800EE6E0(c); // 800EF4F0
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 800EF4F4
  goto L_800EFA0C; // 800EF4F8
L_800EF4FC:;
  c->r[3]=c->r[31]+0x00000858u; // 800EF4FC
  c->r[0]=R8(c->r[3]+0x0000005Bu); // 800EF500
  cmps(c,0,(int32_t)c->r[0],3); // 800EF504
  if (crb(c,2)) { goto L_800EF550; } // 800EF508
  if (!crb(c,0)) { goto L_800EF528; } // 800EF50C
  cmps(c,0,(int32_t)c->r[0],1); // 800EF510
  if (crb(c,2)) { goto L_800EF538; } // 800EF514
  if (!crb(c,0)) { goto L_800EF560; } // 800EF518
  cmps(c,0,(int32_t)c->r[0],0); // 800EF51C
  if (!crb(c,0)) { goto L_800EF540; } // 800EF520
  goto L_800EF564; // 800EF524
L_800EF528:;
  cmps(c,0,(int32_t)c->r[0],5); // 800EF528
  if (crb(c,2)) { goto L_800EF548; } // 800EF52C
  if (!crb(c,0)) { goto L_800EF564; } // 800EF530
  goto L_800EF558; // 800EF534
L_800EF538:;
  c->r[0]=0u+0x00000013u; // 800EF538
  goto L_800EF564; // 800EF53C
L_800EF540:;
  c->r[0]=0u+0x00000014u; // 800EF540
  goto L_800EF564; // 800EF544
L_800EF548:;
  c->r[0]=0u+0x00000015u; // 800EF548
  goto L_800EF564; // 800EF54C
L_800EF550:;
  c->r[0]=0u+0x00000017u; // 800EF550
  goto L_800EF564; // 800EF554
L_800EF558:;
  c->r[0]=0u+0x00000007u; // 800EF558
  goto L_800EF564; // 800EF55C
L_800EF560:;
  c->r[0]=0u+0x00000007u; // 800EF560
L_800EF564:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF564
  goto L_800EFA0C; // 800EF568
L_800EF56C:;
  c->lr=0x800EF570u; f_8007FFF0(c); // 800EF56C
  c->r[28]=R8(c->r[29]+0x00000013u); // 800EF570
  c->lr=0x800EF578u; f_80080030(c); // 800EF574
  cmpu(c,0,c->r[28],0x00000006u); // 800EF578
  if (!crb(c,2)) { goto L_800EF590; } // 800EF57C
  c->r[3]=R32(c->r[29]+0x00000018u); // 800EF580
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EF584
  c->r[3]=c->r[3]+0x00000040u; // 800EF588
  c->lr=0x800EF590u; f_800F2300(c); // 800EF58C
L_800EF590:;
  c->r[28]=c->r[31]+0x00000000u; // 800EF590
  c->lr=0x800EF598u; f_8007FFF0(c); // 800EF594
  c->r[0]=R8(c->r[28]+0x000006E9u); // 800EF598
  cmps(c,0,(int32_t)c->r[0],0); // 800EF59C
  if (!crb(c,2)) { goto L_800EF670; } // 800EF5A0
  c->r[0]=R8(c->r[28]+0x0000013Du); // 800EF5A4
  c->r[30]=0u+0x00000000u; // 800EF5A8
  cmps(c,0,(int32_t)c->r[0],0); // 800EF5AC
  if (!crb(c,2)) { goto L_800EF5BC; } // 800EF5B0
  c->r[30]=c->r[28]+0x000000E4u; // 800EF5B4
  goto L_800EF678; // 800EF5B8
L_800EF5BC:;
  c->r[0]=R8(c->r[28]+0x0000019Du); // 800EF5BC
  cmps(c,0,(int32_t)c->r[0],0); // 800EF5C0
  if (!crb(c,2)) { goto L_800EF5D0; } // 800EF5C4
  c->r[30]=c->r[28]+0x00000144u; // 800EF5C8
  goto L_800EF678; // 800EF5CC
L_800EF5D0:;
  c->r[0]=R8(c->r[28]+0x000001FDu); // 800EF5D0
  cmps(c,0,(int32_t)c->r[0],0); // 800EF5D4
  if (!crb(c,2)) { goto L_800EF5E4; } // 800EF5D8
  c->r[30]=c->r[28]+0x000001A4u; // 800EF5DC
  goto L_800EF678; // 800EF5E0
L_800EF5E4:;
  c->r[0]=R8(c->r[28]+0x0000025Du); // 800EF5E4
  cmps(c,0,(int32_t)c->r[0],0); // 800EF5E8
  if (!crb(c,2)) { goto L_800EF5F8; } // 800EF5EC
  c->r[30]=c->r[28]+0x00000204u; // 800EF5F0
  goto L_800EF678; // 800EF5F4
L_800EF5F8:;
  c->r[0]=R8(c->r[28]+0x000002BDu); // 800EF5F8
  cmps(c,0,(int32_t)c->r[0],0); // 800EF5FC
  if (!crb(c,2)) { goto L_800EF60C; } // 800EF600
  c->r[30]=c->r[28]+0x00000264u; // 800EF604
  goto L_800EF678; // 800EF608
L_800EF60C:;
  c->r[0]=R8(c->r[28]+0x0000031Du); // 800EF60C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF610
  if (!crb(c,2)) { goto L_800EF620; } // 800EF614
  c->r[30]=c->r[28]+0x000002C4u; // 800EF618
  goto L_800EF678; // 800EF61C
L_800EF620:;
  c->r[0]=R8(c->r[28]+0x0000037Du); // 800EF620
  cmps(c,0,(int32_t)c->r[0],0); // 800EF624
  if (!crb(c,2)) { goto L_800EF634; } // 800EF628
  c->r[30]=c->r[28]+0x00000324u; // 800EF62C
  goto L_800EF678; // 800EF630
L_800EF634:;
  c->r[0]=R8(c->r[28]+0x000003DDu); // 800EF634
  cmps(c,0,(int32_t)c->r[0],0); // 800EF638
  if (!crb(c,2)) { goto L_800EF648; } // 800EF63C
  c->r[30]=c->r[28]+0x00000384u; // 800EF640
  goto L_800EF678; // 800EF644
L_800EF648:;
  c->r[0]=R8(c->r[28]+0x0000043Du); // 800EF648
  cmps(c,0,(int32_t)c->r[0],0); // 800EF64C
  if (!crb(c,2)) { goto L_800EF65C; } // 800EF650
  c->r[30]=c->r[28]+0x000003E4u; // 800EF654
  goto L_800EF678; // 800EF658
L_800EF65C:;
  c->r[0]=R8(c->r[28]+0x0000049Du); // 800EF65C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF660
  if (!crb(c,2)) { goto L_800EF678; } // 800EF664
  c->r[30]=c->r[28]+0x00000444u; // 800EF668
  goto L_800EF678; // 800EF66C
L_800EF670:;
  c->r[4]=R32(c->r[28]+0x00000018u); // 800EF670
  c->r[30]=R32(c->r[4]+0x00000000u); // 800EF674
L_800EF678:;
  c->lr=0x800EF67Cu; f_80080030(c); // 800EF678
  cmps(c,0,(int32_t)c->r[30],0); // 800EF67C
  if (!crb(c,2)) { goto L_800EF68C; } // 800EF680
  c->r[5]=0u+0x000000FFu; // 800EF684
  goto L_800EF6D8; // 800EF688
L_800EF68C:;
  c->r[0]=R8(c->r[30]+0x00000059u); // 800EF68C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF690
  if (crb(c,2)) { goto L_800EF6A0; } // 800EF694
  c->r[5]=0u+0x000000FFu; // 800EF698
  goto L_800EF6D8; // 800EF69C
L_800EF6A0:;
  c->r[3]=c->r[30]|c->r[30]; // 800EF6A0
  c->r[4]=c->r[31]+0x00000858u; // 800EF6A4
  c->r[5]=0u+0x00000060u; // 800EF6A8
  c->lr=0x800EF6B0u; f_800043C4(c); // 800EF6AC
  c->r[3]=c->r[30]+0x00000040u; // 800EF6B0
  c->lr=0x800EF6B8u; f_800F21D0(c); // 800EF6B4
  c->r[3]=c->r[30]|c->r[30]; // 800EF6B8
  c->lr=0x800EF6C0u; f_800F24F0(c); // 800EF6BC
  c->r[0]=R8(c->r[30]+0x00000056u); // 800EF6C0
  c->r[3]=c->r[31]+0x00000DC0u; // 800EF6C4
  c->r[4]=c->r[30]+0x00000040u; // 800EF6C8
  c->r[5]=0u+0x00000017u; // 800EF6CC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800EF6D0
  W32(c->r[3]+c->r[0],c->r[4]); // 800EF6D4
L_800EF6D8:;
  W8(c->r[29]+0x0000000Cu,c->r[5]); // 800EF6D8
  goto L_800EFA0C; // 800EF6DC
L_800EF6E0:;
  c->lr=0x800EF6E4u; f_800EE840(c); // 800EF6E0
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 800EF6E4
  goto L_800EFA0C; // 800EF6E8
L_800EF6EC:;
  c->r[3]=c->r[31]+0x00000858u; // 800EF6EC
  c->lr=0x800EF6F4u; f_800F2610(c); // 800EF6F0
  c->r[3]=R32(c->r[29]+0x00000018u); // 800EF6F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800EF6F8
  c->r[3]=c->r[3]+0x00000040u; // 800EF6FC
  c->lr=0x800EF704u; f_800F2300(c); // 800EF700
  c->lr=0x800EF708u; f_800EE840(c); // 800EF704
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 800EF708
  goto L_800EFA0C; // 800EF70C
L_800EF710:;
  c->r[0]=R8(c->r[29]+0x0000000Eu); // 800EF710
  cmps(c,0,(int32_t)c->r[0],0); // 800EF714
  if (crb(c,2)) { goto L_800EF724; } // 800EF718
  c->r[0]=0u+0x00000001u; // 800EF71C
  goto L_800EF728; // 800EF720
L_800EF724:;
  c->r[0]=0u+0x00000000u; // 800EF724
L_800EF728:;
  cmps(c,0,(int32_t)c->r[0],0); // 800EF728
  if (crb(c,2)) { goto L_800EF738; } // 800EF72C
  c->r[0]=0u+0x00000007u; // 800EF730
  goto L_800EF794; // 800EF734
L_800EF738:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EF738
  cmps(c,0,(int32_t)c->r[0],0); // 800EF73C
  if (crb(c,2)) { goto L_800EF764; } // 800EF740
  c->r[3]=c->r[31]+0x00000858u; // 800EF744
  c->r[4]=c->r[28]+0x00000230u; // 800EF748
  c->r[5]=0u+0x00000010u; // 800EF74C
  c->lr=0x800EF754u; f_800B3824(c); // 800EF750
  cmps(c,0,(int32_t)c->r[3],0); // 800EF754
  if (!crb(c,2)) { goto L_800EF764; } // 800EF758
  c->r[0]=0u+0x00000016u; // 800EF75C
  goto L_800EF794; // 800EF760
L_800EF764:;
  c->r[3]=c->r[31]+0x00000858u; // 800EF764
  c->r[3]=c->r[3]+0x00000040u; // 800EF768
  c->lr=0x800EF770u; f_800F2410(c); // 800EF76C
  c->r[0]=0u+0x00000002u; // 800EF770
  c->r[6]=0u+0x800F0000u; // 800EF774
  W8(c->r[29]+0x0000000Eu,c->r[0]); // 800EF778
  c->r[4]=c->r[3]+0x00000040u; // 800EF77C
  c->r[5]=c->r[3]+0x00000046u; // 800EF780
  c->r[6]=c->r[6]+0x00003620u; // 800EF784
  c->r[3]=0u+0x00000001u; // 800EF788
  c->lr=0x800EF790u; f_801010EC(c); // 800EF78C
  c->r[0]=0u+0x00000008u; // 800EF790
L_800EF794:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF794
  goto L_800EFA0C; // 800EF798
L_800EF79C:;
  c->r[0]=R8(c->r[29]+0x0000000Eu); // 800EF79C
  cmps(c,0,(int32_t)c->r[0],0); // 800EF7A0
  if (crb(c,2)) { goto L_800EF7B0; } // 800EF7A4
  c->r[0]=0u+0x00000001u; // 800EF7A8
  goto L_800EF7B4; // 800EF7AC
L_800EF7B0:;
  c->r[0]=0u+0x00000000u; // 800EF7B0
L_800EF7B4:;
  cmps(c,0,(int32_t)c->r[0],0); // 800EF7B4
  if (!crb(c,2)) { goto L_800EF7C4; } // 800EF7B8
  c->r[0]=0u+0x00000016u; // 800EF7BC
  goto L_800EF7C8; // 800EF7C0
L_800EF7C4:;
  c->r[0]=0u+0x00000008u; // 800EF7C4
L_800EF7C8:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF7C8
  goto L_800EFA0C; // 800EF7CC
L_800EF7D0:;
  c->lr=0x800EF7D4u; f_800EEC30(c); // 800EF7D0
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 800EF7D4
  goto L_800EFA0C; // 800EF7D8
L_800EF7DC:;
  c->lr=0x800EF7E0u; f_8007FFF0(c); // 800EF7DC
  c->r[0]=0u+0x0000000Du; // 800EF7E0
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF7E4
  c->lr=0x800EF7ECu; f_80080030(c); // 800EF7E8
  c->r[3]=0u+0x800F0000u; // 800EF7EC
  c->r[3]=c->r[3]+0xFFFFE540u; // 800EF7F0
  c->lr=0x800EF7F8u; f_800DB1E0(c); // 800EF7F4
  goto L_800EFA0C; // 800EF7F8
L_800EF7FC:;
  c->r[0]=R8(c->r[29]+0x0000000Eu); // 800EF7FC
  c->r[28]=0u+0x0000000Au; // 800EF800
  cmps(c,0,(int32_t)c->r[0],0); // 800EF804
  if (crb(c,2)) { goto L_800EF814; } // 800EF808
  c->r[0]=0u+0x00000001u; // 800EF80C
  goto L_800EF818; // 800EF810
L_800EF814:;
  c->r[0]=0u+0x00000000u; // 800EF814
L_800EF818:;
  cmps(c,0,(int32_t)c->r[0],0); // 800EF818
  if (!crb(c,2)) { goto L_800EF830; } // 800EF81C
  c->r[3]=c->r[31]+0x00000000u; // 800EF820
  c->r[28]=0u+0x00000014u; // 800EF824
  c->r[3]=c->r[3]+0x000006FCu; // 800EF828
  c->lr=0x800EF830u; f_800F2300(c); // 800EF82C
L_800EF830:;
  W8(c->r[29]+0x0000000Cu,c->r[28]); // 800EF830
  goto L_800EFA0C; // 800EF834
L_800EF838:;
  c->r[6]=R8(c->r[29]+0x000006E6u); // 800EF838
  c->r[3]=c->r[31]+0x00000858u; // 800EF83C
  c->r[4]=0u+0x00000000u; // 800EF840
  c->r[5]=0u+0x00000060u; // 800EF844
  c->r[0]=c->r[6]+0x00000001u; // 800EF848
  W8(c->r[29]+0x000006E6u,c->r[0]); // 800EF84C
  c->lr=0x800EF854u; f_80004714(c); // 800EF850
  c->r[0]=R8(c->r[29]+0x000006E9u); // 800EF854
  cmps(c,0,(int32_t)c->r[0],0); // 800EF858
  if (!crb(c,2)) { goto L_800EF868; } // 800EF85C
  c->r[0]=0u+0x0000000Eu; // 800EF860
  goto L_800EF86C; // 800EF864
L_800EF868:;
  c->r[0]=0u+0x00000001u; // 800EF868
L_800EF86C:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF86C
  goto L_800EFA0C; // 800EF870
L_800EF874:;
  c->r[3]=c->r[31]+0x00000858u; // 800EF874
  c->r[4]=0u+0x00000000u; // 800EF878
  c->r[5]=0u+0x00000060u; // 800EF87C
  c->lr=0x800EF884u; f_80004714(c); // 800EF880
  c->r[0]=R8(c->r[29]+0x000006E9u); // 800EF884
  cmps(c,0,(int32_t)c->r[0],0); // 800EF888
  if (!crb(c,2)) { goto L_800EF898; } // 800EF88C
  c->r[0]=0u+0x0000000Eu; // 800EF890
  goto L_800EF89C; // 800EF894
L_800EF898:;
  c->r[0]=0u+0x00000001u; // 800EF898
L_800EF89C:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF89C
  goto L_800EFA0C; // 800EF8A0
L_800EF8A4:;
  c->lr=0x800EF8A8u; f_800EEF00(c); // 800EF8A4
  W8(c->r[29]+0x0000000Cu,c->r[3]); // 800EF8A8
  goto L_800EFA0C; // 800EF8AC
L_800EF8B0:;
  c->lr=0x800EF8B4u; f_8007FFF0(c); // 800EF8B0
  c->r[28]=R8(c->r[29]+0x000006E5u); // 800EF8B4
  c->lr=0x800EF8BCu; f_80080030(c); // 800EF8B8
  cmpu(c,0,c->r[28],0x00000004u); // 800EF8BC
  if (!crb(c,2)) { goto L_800EF8E4; } // 800EF8C0
  c->lr=0x800EF8C8u; f_8007FFF0(c); // 800EF8C4
  c->r[28]=R8(c->r[29]+0x000006E4u); // 800EF8C8
  c->lr=0x800EF8D0u; f_80080030(c); // 800EF8CC
  cmpu(c,0,c->r[28],0x00000004u); // 800EF8D0
  if (!crb(c,2)) { goto L_800EF8E4; } // 800EF8D4
  c->lr=0x800EF8DCu; f_800FA618(c); // 800EF8D8
  c->r[0]=0u+0x0000001Au; // 800EF8DC
  goto L_800EF8E8; // 800EF8E0
L_800EF8E4:;
  c->r[0]=0u+0x00000003u; // 800EF8E4
L_800EF8E8:;
  W8(c->r[29]+0x0000000Cu,c->r[0]); // 800EF8E8
  goto L_800EFA0C; // 800EF8EC
L_800EF8F0:;
  c->r[30]=0u+0x00000018u; // 800EF8F0
  c->lr=0x800EF8F8u; f_8007FFF0(c); // 800EF8F4
  c->r[28]=R8(c->r[29]+0x000006E5u); // 800EF8F8
  c->lr=0x800EF900u; f_80080030(c); // 800EF8FC
  cmpu(c,0,c->r[28],0x00000004u); // 800EF900
  if (!crb(c,2)) { goto L_800EF920; } // 800EF904
  c->lr=0x800EF90Cu; f_8007FFF0(c); // 800EF908
  c->r[28]=R8(c->r[29]+0x000006E4u); // 800EF90C
  c->lr=0x800EF914u; f_80080030(c); // 800EF910
  cmpu(c,0,c->r[28],0x00000004u); // 800EF914
  if (!crb(c,2)) { goto L_800EF920; } // 800EF918
  c->r[30]=0u+0x0000000Eu; // 800EF91C
L_800EF920:;
  c->r[4]=c->r[31]+0x00000000u; // 800EF920
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[4]+0x0000074Au); // 800EF924
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800EF928
  W16(c->r[4]+0x0000074Au,c->r[0]); // 800EF92C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 800EF930
  if (!crb(c,0)) { goto L_800EF93C; } // 800EF934
  c->r[30]=0u+0x00000001u; // 800EF938
L_800EF93C:;
  W8(c->r[29]+0x0000000Cu,c->r[30]); // 800EF93C
  goto L_800EFA0C; // 800EF940
L_800EF944:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EF944
  c->r[3]=c->r[28]+0x00000244u; // 800EF948
  cmps(c,0,(int32_t)c->r[0],0); // 800EF94C
  if (!crb(c,2)) { goto L_800EFA0C; } // 800EF950
  c->r[0]=0u+0x00000001u; // 800EF954
  c->r[6]=0u+0x800F0000u; // 800EF958
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EF95C
  c->r[4]=c->r[31]+0x00000E00u; // 800EF960
  c->r[6]=c->r[6]+0xFFFFED50u; // 800EF964
  c->r[7]=c->r[31]+0x00000E8Cu; // 800EF968
  c->r[5]=0u+0x00000002u; // 800EF96C
  c->lr=0x800EF974u; f_800D8130(c); // 800EF970
  goto L_800EFA0C; // 800EF974
L_800EF978:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EF978
  cmps(c,0,(int32_t)c->r[0],0); // 800EF97C
  if (!crb(c,2)) { goto L_800EFA0C; } // 800EF980
  c->r[0]=0u+0x00000001u; // 800EF984
  c->r[4]=0u+0x00050000u; // 800EF988
  c->r[6]=0u+0x800F0000u; // 800EF98C
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EF990
  c->r[3]=c->r[31]+0x00000E00u; // 800EF994
  c->r[4]=c->r[4]+0xFFFFAF18u; // 800EF998
  c->r[6]=c->r[6]+0xFFFFEDC0u; // 800EF99C
  c->r[7]=c->r[31]+0x00000E8Cu; // 800EF9A0
  c->r[5]=0u+0x00000000u; // 800EF9A4
  c->lr=0x800EF9ACu; f_800D71E0(c); // 800EF9A8
  goto L_800EFA0C; // 800EF9AC
L_800EF9B0:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EF9B0
  cmps(c,0,(int32_t)c->r[0],0); // 800EF9B4
  if (!crb(c,2)) { goto L_800EFA0C; } // 800EF9B8
  c->r[0]=0u+0x00000001u; // 800EF9BC
  c->r[6]=0u+0x800F0000u; // 800EF9C0
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EF9C4
  c->r[3]=c->r[31]+0x00000E00u; // 800EF9C8
  c->r[4]=c->r[31]+0x00000D20u; // 800EF9CC
  c->r[6]=c->r[6]+0xFFFFEE40u; // 800EF9D0
  c->r[7]=c->r[31]+0x00000E8Cu; // 800EF9D4
  c->r[5]=0u+0x00000084u; // 800EF9D8
  c->lr=0x800EF9E0u; f_800D7160(c); // 800EF9DC
  goto L_800EFA0C; // 800EF9E0
L_800EF9E4:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EF9E4
  cmps(c,0,(int32_t)c->r[0],0); // 800EF9E8
  if (!crb(c,2)) { goto L_800EFA0C; } // 800EF9EC
  c->r[0]=0u+0x00000001u; // 800EF9F0
  c->r[4]=0u+0x800F0000u; // 800EF9F4
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EF9F8
  c->r[3]=c->r[31]+0x00000E00u; // 800EF9FC
  c->r[4]=c->r[4]+0xFFFFEEB0u; // 800EFA00
  c->r[5]=c->r[31]+0x00000E8Cu; // 800EFA04
  c->lr=0x800EFA0Cu; f_800D8320(c); // 800EFA08
L_800EFA0C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EFA0C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EFA10
  c->r[30]=R32(c->r[1]+0x00000028u); // 800EFA14
  c->r[29]=R32(c->r[1]+0x00000024u); // 800EFA18
  c->r[28]=R32(c->r[1]+0x00000020u); // 800EFA1C
  c->lr=c->r[0]; // 800EFA20
  c->r[1]=c->r[1]+0x00000030u; // 800EFA24
  return; // 800EFA28
  unimpl(c,0x800EFA2Cu,"00000000"); // 800EFA2C
  f_800EFA30(c);
}

// fn_800EFA30
void f_800EFA30(Ctx* __restrict c) {
  trace_call(0x800EFA30u);
  c->r[8]=0u+0x803A0000u; // 800EFA30
  c->r[7]=0u+0x800F0000u; // 800EFA34
  c->r[8]=c->r[8]+0xFFFFC720u; // 800EFA38
  c->r[5]=0u+0x00000000u; // 800EFA3C
  c->r[7]=c->r[7]+0xFFFFF060u; // 800EFA40
  c->r[6]=0u+0x00000000u; // 800EFA44
  c->r[8]=c->r[8]+0x00001000u; // 800EFA48
  f_8007C280(c); return; // 800EFA4C
}

// fn_800EFA50
void f_800EFA50(Ctx* __restrict c) {
  trace_call(0x800EFA50u);
  c->r[3]=0u+0x803A0000u; // 800EFA50
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800EFA54
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800EFA58
  cmps(c,0,(int32_t)c->r[0],0); // 800EFA5C
  if (crb(c,2)) return; // 800EFA60
  c->r[0]=0u+0x00000008u; // 800EFA64
  W8(c->r[3]+0x0000000Du,c->r[0]); // 800EFA68
  return; // 800EFA6C
}

// fn_800EFA70
void f_800EFA70(Ctx* __restrict c) {
  trace_call(0x800EFA70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFA70
  c->r[0]=c->lr; // 800EFA74
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFA78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EFA7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EFA80
  c->r[30]=0u+0x00000000u; // 800EFA84
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EFA88
  c->r[29]=0u+0x803A0000u; // 800EFA8C
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800EFA90
  c->r[31]=c->r[29]+0x000000E4u; // 800EFA94
L_800EFA98:;
  c->r[0]=R8(c->r[31]+0x00000059u); // 800EFA98
  cmpu(c,0,c->r[0],0x00000001u); // 800EFA9C
  if (!crb(c,1)) { goto L_800EFAAC; } // 800EFAA0
  c->r[3]=c->r[31]+0x00000040u; // 800EFAA4
  c->lr=0x800EFAACu; f_800FF248(c); // 800EFAA8
L_800EFAAC:;
  c->r[30]=c->r[30]+0x00000001u; // 800EFAAC
  c->r[31]=c->r[31]+0x00000060u; // 800EFAB0
  cmps(c,0,(int32_t)c->r[30],10); // 800EFAB4
  if (crb(c,0)) { IRQCHK(c); goto L_800EFA98; } // 800EFAB8
  c->r[31]=c->r[29]+0x000004A4u; // 800EFABC
  c->r[30]=0u+0x00000000u; // 800EFAC0
L_800EFAC4:;
  c->r[0]=R8(c->r[31]+0x00000059u); // 800EFAC4
  cmpu(c,0,c->r[0],0x00000001u); // 800EFAC8
  if (!crb(c,1)) { goto L_800EFAD8; } // 800EFACC
  c->r[3]=c->r[31]+0x00000040u; // 800EFAD0
  c->lr=0x800EFAD8u; f_800FF248(c); // 800EFAD4
L_800EFAD8:;
  c->r[30]=c->r[30]+0x00000001u; // 800EFAD8
  c->r[31]=c->r[31]+0x00000060u; // 800EFADC
  cmps(c,0,(int32_t)c->r[30],6); // 800EFAE0
  if (crb(c,0)) { IRQCHK(c); goto L_800EFAC4; } // 800EFAE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EFAE8
  c->r[3]=0u+0x00000003u; // 800EFAEC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EFAF0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EFAF4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFAF8
  c->lr=c->r[0]; // 800EFAFC
  c->r[1]=c->r[1]+0x00000020u; // 800EFB00
  return; // 800EFB04
  unimpl(c,0x800EFB08u,"00000000"); // 800EFB08
  unimpl(c,0x800EFB0Cu,"00000000"); // 800EFB0C
  f_800EFB10(c);
}

// fn_800EFB10
void f_800EFB10(Ctx* __restrict c) {
  trace_call(0x800EFB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFB10
  c->r[0]=c->lr; // 800EFB14
  W32(c->r[1]+0x00000034u,c->r[0]); // 800EFB18
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800EFB1C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800EFB20
  W32(c->r[1]+0x00000024u,c->r[29]); // 800EFB24
  c->r[29]=0u+0x803A0000u; // 800EFB28
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800EFB2C
  c->lr=0x800EFB34u; f_8007FFF0(c); // 800EFB30
  c->r[31]=R8(c->r[29]+0x000006E5u); // 800EFB34
  c->lr=0x800EFB3Cu; f_80080030(c); // 800EFB38
  cmps(c,0,(int32_t)c->r[31],0); // 800EFB3C
  if (crb(c,2)) { goto L_800EFB4C; } // 800EFB40
  c->r[3]=0u+0x00000003u; // 800EFB44
  goto L_800EFCF8; // 800EFB48
L_800EFB4C:;
  c->r[30]=0u+0x00000000u; // 800EFB4C
  c->r[31]=0u+0x00000000u; // 800EFB50
L_800EFB54:;
  c->r[3]=c->r[29]+c->r[31]; // 800EFB54
  c->r[0]=R8(c->r[3]+0x0000013Du); // 800EFB58
  cmpu(c,0,c->r[0],0x00000001u); // 800EFB5C
  if (!crb(c,2)) { goto L_800EFB6C; } // 800EFB60
  c->r[3]=c->r[3]+0x00000124u; // 800EFB64
  c->lr=0x800EFB6Cu; f_800F2300(c); // 800EFB68
L_800EFB6C:;
  c->r[30]=c->r[30]+0x00000001u; // 800EFB6C
  c->r[31]=c->r[31]+0x00000060u; // 800EFB70
  cmps(c,0,(int32_t)c->r[30],10); // 800EFB74
  if (crb(c,0)) { IRQCHK(c); goto L_800EFB54; } // 800EFB78
  c->r[30]=0u+0x00000000u; // 800EFB7C
  c->r[31]=0u+0x00000000u; // 800EFB80
L_800EFB84:;
  c->r[3]=c->r[29]+c->r[31]; // 800EFB84
  c->r[0]=R8(c->r[3]+0x000004FDu); // 800EFB88
  cmpu(c,0,c->r[0],0x00000001u); // 800EFB8C
  if (!crb(c,2)) { goto L_800EFB9C; } // 800EFB90
  c->r[3]=c->r[3]+0x000004E4u; // 800EFB94
  c->lr=0x800EFB9Cu; f_800F2300(c); // 800EFB98
L_800EFB9C:;
  c->r[30]=c->r[30]+0x00000001u; // 800EFB9C
  c->r[31]=c->r[31]+0x00000060u; // 800EFBA0
  cmps(c,0,(int32_t)c->r[30],6); // 800EFBA4
  if (crb(c,0)) { IRQCHK(c); goto L_800EFB84; } // 800EFBA8
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800EFBAC
  cmps(c,0,(int32_t)c->r[0],0); // 800EFBB0
  if (crb(c,2)) { goto L_800EFCF4; } // 800EFBB4
  c->lr=0x800EFBBCu; f_800DBF80(c); // 800EFBB8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800EFBBC
  if (!crb(c,2)) { goto L_800EFCEC; } // 800EFBC0
  c->r[0]=0u+0x00000000u; // 800EFBC4
  W32(c->r[1]+0x00000010u,c->r[0]); // 800EFBC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800EFBCC
  W32(c->r[1]+0x00000018u,c->r[0]); // 800EFBD0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800EFBD4
  goto L_800EFBE0; // 800EFBD8
  c->lr=0x800EFBE0u; f_800043C4(c); // 800EFBDC
L_800EFBE0:;
  c->r[3]=0u+0x803A0000u; // 800EFBE0
  c->r[4]=c->r[1]+0x00000010u; // 800EFBE4
  c->r[3]=c->r[3]+0xFFFFC4E0u; // 800EFBE8
  c->r[5]=0u+0x00000010u; // 800EFBEC
  c->r[3]=c->r[3]+0x00000006u; // 800EFBF0
  c->lr=0x800EFBF8u; f_800043C4(c); // 800EFBF4
  goto L_800EFC00; // 800EFBF8
  c->lr=0x800EFC00u; f_800043C4(c); // 800EFBFC
L_800EFC00:;
  c->r[3]=R32(c->r[13]+0xFFFFA0B4u); // 800EFC00
  c->r[4]=0u+0x803A0000u; // 800EFC04
  c->r[0]=0u+0x00000008u; // 800EFC08
  c->r[4]=c->r[4]+0xFFFFC4E0u; // 800EFC0C
  c->r[5]=rotl(c->r[3],16)&0x0000FFFFu; // 800EFC10
  c->r[6]=rotl(c->r[3],0)&0x0000FFFFu; // 800EFC14
  c->ctr=c->r[0]; // 800EFC18
L_800EFC1C:;
  c->r[3]=R16(c->r[4]+0x00000000u); // 800EFC1C
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC20
  c->r[5]=c->r[5]+c->r[3]; // 800EFC24
  c->r[3]=R16(c->r[4]+0x00000002u); // 800EFC28
  c->r[0]=c->r[6]+c->r[0]; // 800EFC2C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFC30
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC34
  c->r[5]=c->r[5]+c->r[3]; // 800EFC38
  c->r[3]=R16(c->r[4]+0x00000004u); // 800EFC3C
  c->r[0]=c->r[6]+c->r[0]; // 800EFC40
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFC44
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC48
  c->r[5]=c->r[5]+c->r[3]; // 800EFC4C
  c->r[3]=R16(c->r[4]+0x00000006u); // 800EFC50
  c->r[0]=c->r[6]+c->r[0]; // 800EFC54
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFC58
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC5C
  c->r[5]=c->r[5]+c->r[3]; // 800EFC60
  c->r[3]=R16(c->r[4]+0x00000008u); // 800EFC64
  c->r[0]=c->r[6]+c->r[0]; // 800EFC68
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFC6C
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC70
  c->r[5]=c->r[5]+c->r[3]; // 800EFC74
  c->r[3]=R16(c->r[4]+0x0000000Au); // 800EFC78
  c->r[0]=c->r[6]+c->r[0]; // 800EFC7C
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFC80
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC84
  c->r[5]=c->r[5]+c->r[3]; // 800EFC88
  c->r[3]=R16(c->r[4]+0x0000000Cu); // 800EFC8C
  c->r[0]=c->r[6]+c->r[0]; // 800EFC90
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFC94
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFC98
  c->r[5]=c->r[5]+c->r[3]; // 800EFC9C
  c->r[3]=R16(c->r[4]+0x0000000Eu); // 800EFCA0
  c->r[0]=c->r[6]+c->r[0]; // 800EFCA4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFCA8
  c->r[4]=c->r[4]+0x00000010u; // 800EFCAC
  c->r[0]=~(c->r[3]|c->r[3]); // 800EFCB0
  c->r[5]=c->r[5]+c->r[3]; // 800EFCB4
  c->r[0]=c->r[6]+c->r[0]; // 800EFCB8
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 800EFCBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800EFC1C; } // 800EFCC0
  c->r[3]=0u+0x803A0000u; // 800EFCC4
  c->r[6]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[6]&~0xFFFF0000u); // 800EFCC8
  c->r[3]=c->r[3]+0xFFFFC4E0u; // 800EFCCC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800EFCD0
  c->r[4]=c->r[1]+0x00000008u; // 800EFCD4
  c->r[5]=0u+0x00000004u; // 800EFCD8
  c->r[3]=c->r[3]+0x00000080u; // 800EFCDC
  c->lr=0x800EFCE4u; f_800043C4(c); // 800EFCE0
  c->r[3]=0u+0x00000064u; // 800EFCE4
  goto L_800EFCF8; // 800EFCE8
L_800EFCEC:;
  c->r[3]=0u+0x00000005u; // 800EFCEC
  goto L_800EFCF8; // 800EFCF0
L_800EFCF4:;
  c->r[3]=0u+0x00000005u; // 800EFCF4
L_800EFCF8:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800EFCF8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800EFCFC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800EFD00
  c->r[29]=R32(c->r[1]+0x00000024u); // 800EFD04
  c->lr=c->r[0]; // 800EFD08
  c->r[1]=c->r[1]+0x00000030u; // 800EFD0C
  return; // 800EFD10
  unimpl(c,0x800EFD14u,"00000000"); // 800EFD14
  unimpl(c,0x800EFD18u,"00000000"); // 800EFD18
  unimpl(c,0x800EFD1Cu,"00000000"); // 800EFD1C
  f_800EFD20(c);
}

// fn_800EFD20
void f_800EFD20(Ctx* __restrict c) {
  trace_call(0x800EFD20u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFD20
  c->r[0]=c->lr; // 800EFD24
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFD28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800EFD2C
  c->r[31]=0u+0x00000000u; // 800EFD30
  W32(c->r[1]+0x00000018u,c->r[30]); // 800EFD34
  c->r[30]=0u+0x803A0000u; // 800EFD38
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800EFD3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800EFD40
  c->r[29]=c->r[30]+0x00000000u; // 800EFD44
  c->r[0]=R8(c->r[29]+0x0000000Du); // 800EFD48
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 800EFD4C
  cmps(c,0,(int32_t)c->r[0],7); // 800EFD50
  if (crb(c,2)) { goto L_800EFF74; } // 800EFD54
  if (!crb(c,0)) { goto L_800EFD84; } // 800EFD58
  cmps(c,0,(int32_t)c->r[0],3); // 800EFD5C
  if (crb(c,2)) { goto L_800EFDD8; } // 800EFD60
  if (!crb(c,0)) { goto L_800EFD78; } // 800EFD64
  cmps(c,0,(int32_t)c->r[0],1); // 800EFD68
  if (crb(c,2)) { goto L_800EFDB4; } // 800EFD6C
  if (!crb(c,0)) { goto L_800EFDCC; } // 800EFD70
  goto L_800EFF74; // 800EFD74
L_800EFD78:;
  cmps(c,0,(int32_t)c->r[0],5); // 800EFD78
  if (crb(c,2)) { goto L_800EFDE4; } // 800EFD7C
  goto L_800EFF74; // 800EFD80
L_800EFD84:;
  cmps(c,0,(int32_t)c->r[0],101); // 800EFD84
  if (crb(c,2)) { goto L_800EFEE0; } // 800EFD88
  if (!crb(c,0)) { goto L_800EFDA4; } // 800EFD8C
  cmps(c,0,(int32_t)c->r[0],100); // 800EFD90
  if (!crb(c,0)) { goto L_800EFEA8; } // 800EFD94
  cmps(c,0,(int32_t)c->r[0],9); // 800EFD98
  if (!crb(c,0)) { goto L_800EFF74; } // 800EFD9C
  goto L_800EFE50; // 800EFDA0
L_800EFDA4:;
  cmps(c,0,(int32_t)c->r[0],103); // 800EFDA4
  if (crb(c,2)) { goto L_800EFF4C; } // 800EFDA8
  if (!crb(c,0)) { goto L_800EFF74; } // 800EFDAC
  goto L_800EFF18; // 800EFDB0
L_800EFDB4:;
  c->r[3]=0u+0x00000000u; // 800EFDB4
  c->r[4]=0u+0x00000000u; // 800EFDB8
  c->lr=0x800EFDC0u; f_800FA53C(c); // 800EFDBC
  c->r[0]=0u+0x00000002u; // 800EFDC0
  W8(c->r[29]+0x0000000Du,c->r[0]); // 800EFDC4
  goto L_800EFF74; // 800EFDC8
L_800EFDCC:;
  c->lr=0x800EFDD0u; f_800EFA70(c); // 800EFDCC
  W8(c->r[29]+0x0000000Du,c->r[3]); // 800EFDD0
  goto L_800EFF74; // 800EFDD4
L_800EFDD8:;
  c->lr=0x800EFDDCu; f_800EFB10(c); // 800EFDD8
  W8(c->r[29]+0x0000000Du,c->r[3]); // 800EFDDC
  goto L_800EFF74; // 800EFDE0
L_800EFDE4:;
  c->lr=0x800EFDE8u; f_800D9E50(c); // 800EFDE4
  cmpu(c,0,c->r[3],0x00000001u); // 800EFDE8
  if (crb(c,2)) { goto L_800EFF74; } // 800EFDEC
  c->r[3]=c->r[30]+0x000008B8u; // 800EFDF0
  c->r[4]=0u+0x00000000u; // 800EFDF4
  c->r[5]=0u+0x00000461u; // 800EFDF8
  c->lr=0x800EFE00u; f_80004714(c); // 800EFDFC
  c->r[3]=c->r[30]+0x00001F60u; // 800EFE00
  c->r[4]=0u+0x00000000u; // 800EFE04
  c->r[5]=0u+0x00000205u; // 800EFE08
  c->lr=0x800EFE10u; f_80004714(c); // 800EFE0C
  c->r[3]=c->r[30]+0x000008B8u; // 800EFE10
  c->lr=0x800EFE18u; f_800DB9B0(c); // 800EFE14
  c->r[31]=c->r[3]|c->r[3]; // 800EFE18
  c->r[3]=c->r[30]+0x00001F60u; // 800EFE1C
  c->lr=0x800EFE24u; f_800DB9D0(c); // 800EFE20
  c->r[0]=c->r[31]|c->r[3]; cr0(c,c->r[0]); // 800EFE24
  if (crb(c,2)) { goto L_800EFE44; } // 800EFE28
  c->r[0]=0u+0x00000006u; // 800EFE2C
  c->r[3]=0u+0x800F0000u; // 800EFE30
  W8(c->r[29]+0x0000000Du,c->r[0]); // 800EFE34
  c->r[3]=c->r[3]+0xFFFFFA50u; // 800EFE38
  c->lr=0x800EFE40u; f_800DB1E0(c); // 800EFE3C
  goto L_800EFF74; // 800EFE40
L_800EFE44:;
  c->r[0]=0u+0x00000008u; // 800EFE44
  W8(c->r[29]+0x0000000Du,c->r[0]); // 800EFE48
  goto L_800EFF74; // 800EFE4C
L_800EFE50:;
  c->lr=0x800EFE54u; f_8007FFF0(c); // 800EFE50
  c->r[30]=R8(c->r[29]+0x000006EAu); // 800EFE54
  c->lr=0x800EFE5Cu; f_80080030(c); // 800EFE58
  c->lr=0x800EFE60u; f_8007FFF0(c); // 800EFE5C
  W8(c->r[29]+0x000006EBu,c->r[31]); // 800EFE60
  W8(c->r[29]+0x000006EAu,c->r[30]); // 800EFE64
  c->lr=0x800EFE6Cu; f_80080030(c); // 800EFE68
  c->r[4]=c->r[30]|c->r[30]; // 800EFE6C
  c->r[3]=0u+0x00000000u; // 800EFE70
  c->lr=0x800EFE78u; f_800FA53C(c); // 800EFE74
  c->r[3]=c->r[29]+0x00000710u; // 800EFE78
  c->lr=0x800EFE80u; f_8007AC20(c); // 800EFE7C
  c->r[12]=R32(c->r[29]+0x00000008u); // 800EFE80
  W8(c->r[29]+0x0000000Du,c->r[31]); // 800EFE84
  cmps(c,0,(int32_t)c->r[12],0); // 800EFE88
  if (crb(c,2)) { goto L_800EFE9C; } // 800EFE8C
  c->r[3]=0u+0x00000001u; // 800EFE90
  c->ctr=c->r[12]; // 800EFE94
  if (true) { c->lr=0x800EFE9Cu; dispatch(c,c->ctr); } // 800EFE98
L_800EFE9C:;
  c->r[0]=0u+0x00000000u; // 800EFE9C
  W8(c->r[29]+0x0000000Du,c->r[0]); // 800EFEA0
  goto L_800EFF74; // 800EFEA4
L_800EFEA8:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EFEA8
  c->r[3]=0u+0x80330000u; // 800EFEAC
  c->r[3]=c->r[3]+0xFFFF9A54u; // 800EFEB0
  cmps(c,0,(int32_t)c->r[0],0); // 800EFEB4
  if (!crb(c,2)) { goto L_800EFF74; } // 800EFEB8
  c->r[0]=0u+0x00000001u; // 800EFEBC
  c->r[6]=0u+0x800F0000u; // 800EFEC0
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EFEC4
  c->r[4]=c->r[30]+0x00000E00u; // 800EFEC8
  c->r[6]=c->r[6]+0xFFFFED50u; // 800EFECC
  c->r[7]=c->r[30]+0x00000E8Cu; // 800EFED0
  c->r[5]=0u+0x00000002u; // 800EFED4
  c->lr=0x800EFEDCu; f_800D8130(c); // 800EFED8
  goto L_800EFF74; // 800EFEDC
L_800EFEE0:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EFEE0
  cmps(c,0,(int32_t)c->r[0],0); // 800EFEE4
  if (!crb(c,2)) { goto L_800EFF74; } // 800EFEE8
  c->r[0]=0u+0x00000001u; // 800EFEEC
  c->r[4]=0u+0x00050000u; // 800EFEF0
  c->r[6]=0u+0x800F0000u; // 800EFEF4
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EFEF8
  c->r[3]=c->r[30]+0x00000E00u; // 800EFEFC
  c->r[4]=c->r[4]+0xFFFFAF18u; // 800EFF00
  c->r[6]=c->r[6]+0xFFFFEDC0u; // 800EFF04
  c->r[7]=c->r[30]+0x00000E8Cu; // 800EFF08
  c->r[5]=0u+0x00000000u; // 800EFF0C
  c->lr=0x800EFF14u; f_800D71E0(c); // 800EFF10
  goto L_800EFF74; // 800EFF14
L_800EFF18:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EFF18
  cmps(c,0,(int32_t)c->r[0],0); // 800EFF1C
  if (!crb(c,2)) { goto L_800EFF74; } // 800EFF20
  c->r[0]=0u+0x00000001u; // 800EFF24
  c->r[6]=0u+0x800F0000u; // 800EFF28
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EFF2C
  c->r[3]=c->r[30]+0x00000E00u; // 800EFF30
  c->r[4]=c->r[30]+0x00000D20u; // 800EFF34
  c->r[6]=c->r[6]+0xFFFFEE40u; // 800EFF38
  c->r[7]=c->r[30]+0x00000E8Cu; // 800EFF3C
  c->r[5]=0u+0x00000084u; // 800EFF40
  c->lr=0x800EFF48u; f_800D7160(c); // 800EFF44
  goto L_800EFF74; // 800EFF48
L_800EFF4C:;
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800EFF4C
  cmps(c,0,(int32_t)c->r[0],0); // 800EFF50
  if (!crb(c,2)) { goto L_800EFF74; } // 800EFF54
  c->r[0]=0u+0x00000001u; // 800EFF58
  c->r[4]=0u+0x800F0000u; // 800EFF5C
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800EFF60
  c->r[3]=c->r[30]+0x00000E00u; // 800EFF64
  c->r[4]=c->r[4]+0xFFFFEEB0u; // 800EFF68
  c->r[5]=c->r[30]+0x00000E8Cu; // 800EFF6C
  c->lr=0x800EFF74u; f_800D8320(c); // 800EFF70
L_800EFF74:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800EFF74
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800EFF78
  c->r[30]=R32(c->r[1]+0x00000018u); // 800EFF7C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800EFF80
  c->lr=c->r[0]; // 800EFF84
  c->r[1]=c->r[1]+0x00000020u; // 800EFF88
  return; // 800EFF8C
}

// fn_800EFF90
void f_800EFF90(Ctx* __restrict c) {
  trace_call(0x800EFF90u);
  c->r[8]=0u+0x803A0000u; // 800EFF90
  c->r[7]=0u+0x800F0000u; // 800EFF94
  c->r[8]=c->r[8]+0xFFFFC720u; // 800EFF98
  c->r[5]=0u+0x00000000u; // 800EFF9C
  c->r[7]=c->r[7]+0xFFFFFD20u; // 800EFFA0
  c->r[6]=0u+0x00000000u; // 800EFFA4
  c->r[8]=c->r[8]+0x00001000u; // 800EFFA8
  f_8007C280(c); return; // 800EFFAC
}

// fn_800EFFB0
void f_800EFFB0(Ctx* __restrict c) {
  trace_call(0x800EFFB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800EFFB0
  c->r[0]=c->lr; // 800EFFB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800EFFB8
  c->r[11]=c->r[1]+0x00000020u; // 800EFFBC
  c->lr=0x800EFFC4u; f_800ADA2C(c); // 800EFFC0
  c->r[3]=0u+0x803A0000u; // 800EFFC4
  c->r[28]=c->r[3]+0xFFFFB7C0u; // 800EFFC8
  c->r[0]=R8(c->r[28]+0x0000000Eu); // 800EFFCC
  cmps(c,0,(int32_t)c->r[0],0); // 800EFFD0
  if (!crb(c,2)) { goto L_800F00A0; } // 800EFFD4
  c->r[27]=0u+0x00000000u; // 800EFFD8
  c->r[29]=0u+0x00000000u; // 800EFFDC
L_800EFFE0:;
  c->lr=0x800EFFE4u; f_8007FFF0(c); // 800EFFE0
  cmpu(c,0,c->r[27],0x00000009u); // 800EFFE4
  if (crb(c,1)) { goto L_800EFFF8; } // 800EFFE8
  c->r[4]=c->r[28]+c->r[29]; // 800EFFEC
  c->r[31]=c->r[4]+0x000000E4u; // 800EFFF0
  goto L_800F0008; // 800EFFF4
L_800EFFF8:;
  c->r[0]=c->r[27]+0xFFFFFFF6u; // 800EFFF8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800EFFFC
  c->r[4]=c->r[28]+c->r[0]; // 800F0000
  c->r[31]=c->r[4]+0x000004A4u; // 800F0004
L_800F0008:;
  c->lr=0x800F000Cu; f_80080030(c); // 800F0008
  c->r[0]=R8(c->r[31]+0x00000059u); // 800F000C
  cmps(c,0,(int32_t)c->r[0],0); // 800F0010
  if (crb(c,2)) { goto L_800F0088; } // 800F0014
  c->r[0]=R8(c->r[31]+0x0000005Cu); // 800F0018
  cmpu(c,0,c->r[0],0x00000001u); // 800F001C
  if (!crb(c,2)) { goto L_800F004C; } // 800F0020
  c->r[0]=0u+0x00000003u; // 800F0024
  c->r[4]=0u+0x800F0000u; // 800F0028
  W8(c->r[28]+0x0000000Eu,c->r[0]); // 800F002C
  c->r[3]=c->r[31]+0x00000040u; // 800F0030
  c->r[4]=c->r[4]+0x00003620u; // 800F0034
  c->lr=0x800F003Cu; f_801011BC(c); // 800F0038
  c->r[0]=0u+0x00000000u; // 800F003C
  W8(c->r[31]+0x0000005Cu,c->r[0]); // 800F0040
  c->r[3]=0u+0x00000002u; // 800F0044
  goto L_800F00A4; // 800F0048
L_800F004C:;
  cmpu(c,0,c->r[0],0x00000003u); // 800F004C
  if (crb(c,2)) { goto L_800F0088; } // 800F0050
  c->r[3]=c->r[31]+0x00000040u; // 800F0054
  c->lr=0x800F005Cu; f_800F2410(c); // 800F0058
  cmps(c,0,(int32_t)c->r[3],0); // 800F005C
  c->r[30]=c->r[3]|c->r[3]; // 800F0060
  if (crb(c,2)) { goto L_800F0088; } // 800F0064
  c->lr=0x800F006Cu; f_8007FFF0(c); // 800F0068
  c->r[31]=c->r[3]|c->r[3]; // 800F006C
  c->r[3]=c->r[30]|c->r[30]; // 800F0070
  c->r[4]=0u+0x00000000u; // 800F0074
  c->r[5]=0u+0x00000060u; // 800F0078
  c->lr=0x800F0080u; f_80004714(c); // 800F007C
  c->r[3]=c->r[31]|c->r[31]; // 800F0080
  c->lr=0x800F0088u; f_80080030(c); // 800F0084
L_800F0088:;
  c->r[27]=c->r[27]+0x00000001u; // 800F0088
  c->r[29]=c->r[29]+0x00000060u; // 800F008C
  cmps(c,0,(int32_t)c->r[27],16); // 800F0090
  if (crb(c,0)) { IRQCHK(c); goto L_800EFFE0; } // 800F0094
  c->r[3]=0u+0x00000003u; // 800F0098
  goto L_800F00A4; // 800F009C
L_800F00A0:;
  c->r[3]=0u+0x00000002u; // 800F00A0
L_800F00A4:;
  c->r[11]=c->r[1]+0x00000020u; // 800F00A4
  c->lr=0x800F00ACu; f_800ADA78(c); // 800F00A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F00AC
  c->lr=c->r[0]; // 800F00B0
  c->r[1]=c->r[1]+0x00000020u; // 800F00B4
  return; // 800F00B8
  unimpl(c,0x800F00BCu,"00000000"); // 800F00BC
  f_800F00C0(c);
}

// fn_800F00C0
void f_800F00C0(Ctx* __restrict c) {
  trace_call(0x800F00C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F00C0
  c->r[0]=c->lr; // 800F00C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F00C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F00CC
  c->r[31]=0u+0x803A0000u; // 800F00D0
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F00D4
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 800F00D8
  cmps(c,0,(int32_t)c->r[0],1); // 800F00DC
  if (crb(c,2)) { goto L_800F00F8; } // 800F00E0
  cmps(c,0,(int32_t)c->r[0],2); // 800F00E4
  if (crb(c,2)) { goto L_800F0128; } // 800F00E8
  cmps(c,0,(int32_t)c->r[0],3); // 800F00EC
  if (crb(c,2)) { goto L_800F0134; } // 800F00F0
  goto L_800F022C; // 800F00F4
L_800F00F8:;
  c->r[0]=R32(c->r[31]+0x00000740u); // 800F00F8
  cmpu(c,0,c->r[0],0x00000001u); // 800F00FC
  if (!crb(c,2)) { goto L_800F011C; } // 800F0100
  c->r[0]=0u+0x00000001u; // 800F0104
  c->r[4]=0u+0x800F0000u; // 800F0108
  W8(c->r[31]+0x0000000Eu,c->r[0]); // 800F010C
  c->r[4]=c->r[4]+0x00003620u; // 800F0110
  c->r[3]=0u+0x00000000u; // 800F0114
  c->lr=0x800F011Cu; f_80101014(c); // 800F0118
L_800F011C:;
  c->r[0]=0u+0x00000002u; // 800F011C
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 800F0120
  goto L_800F022C; // 800F0124
L_800F0128:;
  c->lr=0x800F012Cu; f_800EFFB0(c); // 800F0128
  W8(c->r[31]+0x0000000Fu,c->r[3]); // 800F012C
  goto L_800F022C; // 800F0130
L_800F0134:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 800F0134
  cmps(c,0,(int32_t)c->r[0],0); // 800F0138
  if (!crb(c,2)) { goto L_800F0224; } // 800F013C
  c->r[3]=c->r[31]+0x00000710u; // 800F0140
  c->lr=0x800F0148u; f_8007AC20(c); // 800F0144
  c->r[3]=c->r[1]+0x00000008u; // 800F0148
  c->lr=0x800F0150u; f_80100C38(c); // 800F014C
  c->r[0]=R16(c->r[1]+0x0000000Au); // 800F0150
  c->r[0]=rotl(c->r[0],0)&0x00000FFFu; // 800F0154
  cmps(c,0,(int32_t)c->r[0],167); // 800F0158
  if (!crb(c,2)) { goto L_800F0218; } // 800F015C
  c->r[3]=0u+0x80330000u; // 800F0160
  c->r[0]=R32(c->r[13]+0xFFFF98C0u); // 800F0164
  c->r[8]=c->r[3]+0xFFFF98F8u; // 800F0168
  c->r[4]=R8(c->r[3]+0xFFFF98F8u); // 800F016C
  c->r[6]=R8(c->r[8]+0x00000003u); // 800F0170
  cmps(c,0,(int32_t)c->r[0],0); // 800F0174
  c->r[3]=R8(c->r[8]+0x00000007u); // 800F0178
  c->r[5]=R8(c->r[8]+0x00000002u); // 800F017C
  c->r[6]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F0180
  c->r[0]=R8(c->r[8]+0x00000006u); // 800F0184
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 800F0188
  c->r[7]=c->r[6]+c->r[5]; // 800F018C
  c->r[6]=R8(c->r[8]+0x00000001u); // 800F0190
  c->r[5]=c->r[3]+c->r[0]; // 800F0194
  c->r[3]=R8(c->r[8]+0x00000005u); // 800F0198
  c->r[7]=rotl(c->r[7],8)&0xFFFFFF00u; // 800F019C
  c->r[0]=R8(c->r[8]+0x00000004u); // 800F01A0
  c->r[5]=rotl(c->r[5],8)&0xFFFFFF00u; // 800F01A4
  c->r[3]=c->r[5]+c->r[3]; // 800F01A8
  c->r[6]=c->r[7]+c->r[6]; // 800F01AC
  c->r[5]=rotl(c->r[6],8)&0xFFFFFF00u; // 800F01B0
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 800F01B4
  c->r[4]=c->r[5]+c->r[4]; // 800F01B8
  W32(c->r[13]+0xFFFFA0C0u,c->r[4]); // 800F01BC
  c->r[0]=c->r[3]+c->r[0]; // 800F01C0
  W32(c->r[13]+0xFFFFA0C8u,c->r[0]); // 800F01C4
  if (crb(c,2)) { goto L_800F01F4; } // 800F01C8
  c->r[3]=0u+0x00010000u; // 800F01CC
  c->r[5]=0u+0x80330000u; // 800F01D0
  c->r[0]=c->r[3]+0xFFFFFC0Au; // 800F01D4
  c->r[6]=0u+0x800F0000u; // 800F01D8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F01DC
  c->r[5]=c->r[5]+0xFFFF98ECu; // 800F01E0
  c->r[6]=c->r[6]+0x00002050u; // 800F01E4
  c->r[4]=0u+0x00000009u; // 800F01E8
  c->lr=0x800F01F0u; f_80100D3C(c); // 800F01EC
  goto L_800F021C; // 800F01F0
L_800F01F4:;
  c->r[3]=0u+0x00010000u; // 800F01F4
  c->r[6]=0u+0x800F0000u; // 800F01F8
  c->r[0]=c->r[3]+0xFFFFFC4Fu; // 800F01FC
  c->r[4]=0u+0x00000001u; // 800F0200
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0204
  c->r[6]=c->r[6]+0x00001ED0u; // 800F0208
  c->r[5]=c->r[13]+0xFFFFA0A4u; // 800F020C
  c->lr=0x800F0214u; f_80100D3C(c); // 800F0210
  goto L_800F021C; // 800F0214
L_800F0218:;
  c->lr=0x800F021Cu; f_800F2070(c); // 800F0218
L_800F021C:;
  c->r[0]=0u+0x00000004u; // 800F021C
  goto L_800F0228; // 800F0220
L_800F0224:;
  c->r[0]=0u+0x00000002u; // 800F0224
L_800F0228:;
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 800F0228
L_800F022C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F022C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0230
  c->lr=c->r[0]; // 800F0234
  c->r[1]=c->r[1]+0x00000020u; // 800F0238
  return; // 800F023C
}

// fn_800F0240
void f_800F0240(Ctx* __restrict c) {
  trace_call(0x800F0240u);
  c->r[8]=0u+0x803A0000u; // 800F0240
  c->r[7]=0u+0x800F0000u; // 800F0244
  c->r[8]=c->r[8]+0xFFFFC720u; // 800F0248
  c->r[5]=0u+0x00000000u; // 800F024C
  c->r[7]=c->r[7]+0x000000C0u; // 800F0250
  c->r[6]=0u+0x00000000u; // 800F0254
  c->r[8]=c->r[8]+0x00001000u; // 800F0258
  f_8007C280(c); return; // 800F025C
}

// fn_800F0260
void f_800F0260(Ctx* __restrict c) {
  trace_call(0x800F0260u);
  c->r[3]=0u+0x803A0000u; // 800F0260
  c->r[0]=0u+0x00000006u; // 800F0264
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800F0268
  W8(c->r[3]+0x00000010u,c->r[0]); // 800F026C
  return; // 800F0270
  unimpl(c,0x800F0274u,"00000000"); // 800F0274
  unimpl(c,0x800F0278u,"00000000"); // 800F0278
  unimpl(c,0x800F027Cu,"00000000"); // 800F027C
  f_800F0280(c);
}

// fn_800F0280
void f_800F0280(Ctx* __restrict c) {
  trace_call(0x800F0280u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0280
  c->r[0]=c->lr; // 800F0284
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F0288
  c->r[11]=c->r[1]+0x00000060u; // 800F028C
  c->lr=0x800F0294u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0290
  c->r[24]=0u+0x803A0000u; // 800F0294
  c->r[23]=0u+0x80330000u; // 800F0298
  c->r[24]=c->r[24]+0xFFFFB7C0u; // 800F029C
  c->r[4]=0u+0x00000000u; // 800F02A0
  c->r[23]=c->r[23]+0xFFFF9810u; // 800F02A4
  c->r[5]=0u+0x00000461u; // 800F02A8
  c->r[3]=c->r[24]+0x000008B8u; // 800F02AC
  c->lr=0x800F02B4u; f_80004714(c); // 800F02B0
  c->r[3]=c->r[24]+0x00001F60u; // 800F02B4
  c->r[4]=0u+0x00000000u; // 800F02B8
  c->r[5]=0u+0x00000205u; // 800F02BC
  c->lr=0x800F02C4u; f_80004714(c); // 800F02C0
  c->r[3]=c->r[1]+0x00000008u; // 800F02C4
  c->r[4]=0u+0x00000000u; // 800F02C8
  c->r[5]=0u+0x00000006u; // 800F02CC
  c->lr=0x800F02D4u; f_80004714(c); // 800F02D0
  c->r[3]=c->r[24]+0x000008B8u; // 800F02D4
  c->lr=0x800F02DCu; f_800DB9A0(c); // 800F02D8
  c->r[3]=c->r[24]+0x00001F60u; // 800F02DC
  c->lr=0x800F02E4u; f_800DB9C0(c); // 800F02E0
  c->r[27]=c->r[24]+0x000008B8u; // 800F02E4
  c->r[26]=c->r[24]+0x00000000u; // 800F02E8
  c->r[19]=c->r[27]+0x00000001u; // 800F02EC
  c->r[25]=0u+0x00000000u; // 800F02F0
  W8(c->r[26]+0x000006E9u,c->r[25]); // 800F02F4
  c->r[21]=c->r[19]|c->r[19]; // 800F02F8
  c->r[16]=R8(c->r[24]+0x000008B8u); // 800F02FC
  c->r[22]=c->r[27]+0x00000007u; // 800F0300
  c->r[18]=0u+0x00000000u; // 800F0304
  c->r[15]=0u+0x00000000u; // 800F0308
  c->r[28]=0u+0x00000001u; // 800F030C
  c->r[29]=0u+0x00000002u; // 800F0310
  c->r[30]=0u+0x00010000u; // 800F0314
  c->r[31]=0u+0x00000003u; // 800F0318
  c->r[14]=0u+0x0000000Au; // 800F031C
L_800F0320:;
  cmps(c,0,(int32_t)c->r[16],0); // 800F0320
  if (crb(c,2)) { goto L_800F0498; } // 800F0324
  c->r[3]=c->r[22]|c->r[22]; // 800F0328
  c->r[4]=c->r[23]+0x0000021Cu; // 800F032C
  c->r[5]=0u+0x00000010u; // 800F0330
  c->lr=0x800F0338u; f_800B3824(c); // 800F0334
  cmps(c,0,(int32_t)c->r[3],0); // 800F0338
  if (crb(c,2)) { goto L_800F0350; } // 800F033C
  c->r[3]=c->r[21]|c->r[21]; // 800F0340
  c->r[4]=0u+0x00000000u; // 800F0344
  c->r[5]=0u+0x00000046u; // 800F0348
  c->lr=0x800F0350u; f_80004714(c); // 800F034C
L_800F0350:;
  c->r[3]=c->r[21]|c->r[21]; // 800F0350
  c->r[4]=c->r[1]+0x00000008u; // 800F0354
  c->r[5]=0u+0x00000006u; // 800F0358
  c->lr=0x800F0360u; f_800B3824(c); // 800F035C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0360
  if (!crb(c,2)) { goto L_800F03E0; } // 800F0364
  cmps(c,0,(int32_t)c->r[18],9); // 800F0368
  if (!crb(c,0)) { goto L_800F0484; } // 800F036C
  c->r[17]=c->r[18]+0x00000001u; // 800F0370
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)70); // 800F0374
  c->r[3]=c->r[27]+c->r[0]; // 800F0378
  c->r[20]=c->r[3]+0x00000007u; // 800F037C
  goto L_800F03D4; // 800F0380
L_800F0384:;
  c->r[3]=c->r[20]|c->r[20]; // 800F0384
  c->r[4]=c->r[23]+0x0000021Cu; // 800F0388
  c->r[5]=0u+0x00000010u; // 800F038C
  c->lr=0x800F0394u; f_800B3824(c); // 800F0390
  cmps(c,0,(int32_t)c->r[3],0); // 800F0394
  if (!crb(c,2)) { goto L_800F03CC; } // 800F0398
  c->r[0]=(uint32_t)((int32_t)c->r[17]*(int32_t)70); // 800F039C
  c->r[3]=c->r[21]|c->r[21]; // 800F03A0
  c->r[5]=0u+0x00000046u; // 800F03A4
  c->r[4]=c->r[27]+c->r[0]; // 800F03A8
  c->r[17]=c->r[4]+0x00000001u; // 800F03AC
  c->r[4]=c->r[17]|c->r[17]; // 800F03B0
  c->lr=0x800F03B8u; f_800043C4(c); // 800F03B4
  c->r[3]=c->r[17]|c->r[17]; // 800F03B8
  c->r[4]=0u+0x00000000u; // 800F03BC
  c->r[5]=0u+0x00000046u; // 800F03C0
  c->lr=0x800F03C8u; f_80004714(c); // 800F03C4
  goto L_800F03E0; // 800F03C8
L_800F03CC:;
  c->r[20]=c->r[20]+0x00000046u; // 800F03CC
  c->r[17]=c->r[17]+0x00000001u; // 800F03D0
L_800F03D4:;
  cmps(c,0,(int32_t)c->r[17],10); // 800F03D4
  if (crb(c,0)) { IRQCHK(c); goto L_800F0384; } // 800F03D8
  goto L_800F0484; // 800F03DC
L_800F03E0:;
  c->lr=0x800F03E4u; f_8007FFF0(c); // 800F03E0
  c->r[0]=R8(c->r[26]+0x000006E9u); // 800F03E4
  cmps(c,0,(int32_t)c->r[0],0); // 800F03E8
  if (!crb(c,2)) { goto L_800F042C; } // 800F03EC
  c->r[5]=c->r[26]|c->r[26]; // 800F03F0
  c->r[17]=0u+0x00000000u; // 800F03F4
  c->r[4]=0u+0x00000000u; // 800F03F8
  c->ctr=c->r[14]; // 800F03FC
L_800F0400:;
  c->r[0]=R8(c->r[5]+0x0000013Du); // 800F0400
  cmps(c,0,(int32_t)c->r[0],0); // 800F0404
  if (!crb(c,2)) { goto L_800F041C; } // 800F0408
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 800F040C
  c->r[4]=c->r[26]+c->r[0]; // 800F0410
  c->r[17]=c->r[4]+0x000000E4u; // 800F0414
  goto L_800F0434; // 800F0418
L_800F041C:;
  c->r[5]=c->r[5]+0x00000060u; // 800F041C
  c->r[4]=c->r[4]+0x00000001u; // 800F0420
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F0400; } // 800F0424
  goto L_800F0434; // 800F0428
L_800F042C:;
  c->r[4]=R32(c->r[26]+0x00000018u); // 800F042C
  c->r[17]=R32(c->r[4]+0x00000000u); // 800F0430
L_800F0434:;
  c->lr=0x800F0438u; f_80080030(c); // 800F0434
  cmps(c,0,(int32_t)c->r[17],0); // 800F0438
  if (crb(c,2)) { goto L_800F0484; } // 800F043C
  c->r[4]=c->r[21]|c->r[21]; // 800F0440
  c->r[3]=c->r[17]+0x00000040u; // 800F0444
  c->r[5]=0u+0x00000006u; // 800F0448
  c->lr=0x800F0450u; f_800043C4(c); // 800F044C
  c->r[3]=c->r[17]|c->r[17]; // 800F0450
  c->r[4]=c->r[22]|c->r[22]; // 800F0454
  c->r[5]=0u+0x00000040u; // 800F0458
  c->lr=0x800F0460u; f_800043C4(c); // 800F045C
  W8(c->r[17]+0x00000059u,c->r[28]); // 800F0460
  c->r[0]=c->r[30]+0xFFFF8074u; // 800F0464
  c->r[15]=c->r[15]+0x00000001u; // 800F0468
  c->r[16]=c->r[16]+0xFFFFFFFFu; // 800F046C
  W8(c->r[17]+0x0000005Bu,c->r[25]); // 800F0470
  W8(c->r[17]+0x0000005Cu,c->r[29]); // 800F0474
  W8(c->r[17]+0x00000057u,c->r[29]); // 800F0478
  W16(c->r[17]+0x0000005Eu,c->r[0]); // 800F047C
  W8(c->r[17]+0x00000058u,c->r[31]); // 800F0480
L_800F0484:;
  c->r[18]=c->r[18]+0x00000001u; // 800F0484
  c->r[21]=c->r[21]+0x00000046u; // 800F0488
  cmps(c,0,(int32_t)c->r[18],10); // 800F048C
  c->r[22]=c->r[22]+0x00000046u; // 800F0490
  if (crb(c,0)) { IRQCHK(c); goto L_800F0320; } // 800F0494
L_800F0498:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800F0498
  cmps(c,0,(int32_t)c->r[0],0); // 800F049C
  if (crb(c,2)) { goto L_800F05E8; } // 800F04A0
  c->r[3]=c->r[24]+0x000008B8u; // 800F04A4
  c->r[4]=c->r[23]+0x00000230u; // 800F04A8
  c->r[3]=c->r[3]+0x000003DBu; // 800F04AC
  c->r[5]=0u+0x00000010u; // 800F04B0
  c->lr=0x800F04B8u; f_800B3824(c); // 800F04B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F04B8
  if (!crb(c,2)) { goto L_800F05E8; } // 800F04BC
  c->lr=0x800F04C4u; f_8007FFF0(c); // 800F04C0
  c->r[4]=c->r[24]+0x00000000u; // 800F04C4
  c->r[0]=R8(c->r[4]+0x000006E9u); // 800F04C8
  cmps(c,0,(int32_t)c->r[0],0); // 800F04CC
  if (!crb(c,2)) { goto L_800F0514; } // 800F04D0
  c->r[0]=0u+0x0000000Au; // 800F04D4
  c->r[6]=c->r[4]|c->r[4]; // 800F04D8
  c->r[14]=0u+0x00000000u; // 800F04DC
  c->r[5]=0u+0x00000000u; // 800F04E0
  c->ctr=c->r[0]; // 800F04E4
L_800F04E8:;
  c->r[0]=R8(c->r[6]+0x0000013Du); // 800F04E8
  cmps(c,0,(int32_t)c->r[0],0); // 800F04EC
  if (!crb(c,2)) { goto L_800F0504; } // 800F04F0
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)96); // 800F04F4
  c->r[4]=c->r[4]+c->r[0]; // 800F04F8
  c->r[14]=c->r[4]+0x000000E4u; // 800F04FC
  goto L_800F051C; // 800F0500
L_800F0504:;
  c->r[6]=c->r[6]+0x00000060u; // 800F0504
  c->r[5]=c->r[5]+0x00000001u; // 800F0508
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F04E8; } // 800F050C
  goto L_800F051C; // 800F0510
L_800F0514:;
  c->r[4]=R32(c->r[4]+0x00000018u); // 800F0514
  c->r[14]=R32(c->r[4]+0x00000000u); // 800F0518
L_800F051C:;
  c->lr=0x800F0520u; f_80080030(c); // 800F051C
  cmps(c,0,(int32_t)c->r[14],0); // 800F0520
  if (!crb(c,2)) { goto L_800F053C; } // 800F0524
  c->lr=0x800F052Cu; f_8007FFF0(c); // 800F0528
  c->lr=0x800F0530u; f_80080030(c); // 800F052C
  c->r[3]=c->r[24]+0x00000000u; // 800F0530
  c->r[15]=c->r[15]+0xFFFFFFFFu; // 800F0534
  c->r[14]=c->r[3]+0x00000444u; // 800F0538
L_800F053C:;
  c->r[16]=c->r[24]+0x000008B8u; // 800F053C
  c->r[3]=c->r[14]+0x00000040u; // 800F0540
  c->r[4]=c->r[16]+0x000003D5u; // 800F0544
  c->r[5]=0u+0x00000006u; // 800F0548
  c->lr=0x800F0550u; f_800043C4(c); // 800F054C
  c->r[3]=c->r[14]|c->r[14]; // 800F0550
  c->r[4]=c->r[16]+0x000003DBu; // 800F0554
  c->r[5]=0u+0x00000013u; // 800F0558
  c->lr=0x800F0560u; f_800043C4(c); // 800F055C
  c->r[3]=c->r[14]+0x00000046u; // 800F0560
  c->r[4]=c->r[16]+0x000003EFu; // 800F0564
  c->r[5]=0u+0x00000010u; // 800F0568
  c->lr=0x800F0570u; f_800043C4(c); // 800F056C
  c->r[0]=0u+0x00000001u; // 800F0570
  W8(c->r[14]+0x00000059u,c->r[0]); // 800F0574
  c->r[3]=0u+0x00000000u; // 800F0578
  c->r[4]=0u+0x00000002u; // 800F057C
  W8(c->r[14]+0x0000005Bu,c->r[3]); // 800F0580
  c->r[0]=rotl(c->r[15],0)&0x000000FFu; // 800F0584
  c->r[17]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 800F0588
  c->r[3]=0u+0x00010000u; // 800F058C
  W8(c->r[14]+0x00000057u,c->r[4]); // 800F0590
  c->r[0]=0u+0x00000003u; // 800F0594
  c->r[3]=c->r[3]+0xFFFF8074u; // 800F0598
  W16(c->r[14]+0x0000005Eu,c->r[3]); // 800F059C
  c->r[3]=c->r[16]+c->r[17]; // 800F05A0
  c->r[4]=0u+0x00000000u; // 800F05A4
  W8(c->r[14]+0x00000058u,c->r[0]); // 800F05A8
  c->r[18]=c->r[3]+0x00000001u; // 800F05AC
  c->r[3]=c->r[18]|c->r[18]; // 800F05B0
  c->r[5]=0u+0x00000046u; // 800F05B4
  W8(c->r[14]+0x0000005Cu,c->r[0]); // 800F05B8
  c->lr=0x800F05C0u; f_80004714(c); // 800F05BC
  c->r[3]=c->r[18]|c->r[18]; // 800F05C0
  c->r[4]=c->r[16]+0x000003D5u; // 800F05C4
  c->r[5]=0u+0x00000006u; // 800F05C8
  c->lr=0x800F05D0u; f_800043C4(c); // 800F05CC
  c->r[3]=c->r[16]+c->r[17]; // 800F05D0
  c->r[4]=c->r[16]+0x000003DBu; // 800F05D4
  c->r[3]=c->r[3]+0x00000007u; // 800F05D8
  c->r[5]=0u+0x00000013u; // 800F05DC
  c->lr=0x800F05E4u; f_800043C4(c); // 800F05E0
  c->r[15]=c->r[15]+0x00000001u; // 800F05E4
L_800F05E8:;
  c->r[14]=c->r[24]+0x00000000u; // 800F05E8
  c->r[3]=c->r[24]+0x00001F60u; // 800F05EC
  c->r[16]=0u+0x00000001u; // 800F05F0
  W8(c->r[24]+0x000008B8u,c->r[15]); // 800F05F4
  c->r[22]=R8(c->r[24]+0x00001F60u); // 800F05F8
  c->r[17]=c->r[3]+0x000001AFu; // 800F05FC
  W8(c->r[14]+0x000006E9u,c->r[16]); // 800F0600
  c->r[18]=c->r[3]+0x000001B5u; // 800F0604
  c->r[20]=c->r[3]+0x000001F5u; // 800F0608
  c->r[21]=0u+0x00000005u; // 800F060C
  c->r[28]=0u+0x00000003u; // 800F0610
  c->r[27]=0u+0x00000002u; // 800F0614
  c->r[26]=0u+0x00010000u; // 800F0618
  c->r[25]=0u+0x0000000Au; // 800F061C
L_800F0620:;
  cmps(c,0,(int32_t)c->r[22],0); // 800F0620
  if (crb(c,2)) { goto L_800F0774; } // 800F0624
  c->r[3]=c->r[17]|c->r[17]; // 800F0628
  c->r[4]=c->r[1]+0x00000008u; // 800F062C
  c->r[5]=0u+0x00000006u; // 800F0630
  c->lr=0x800F0638u; f_800B3824(c); // 800F0634
  cmps(c,0,(int32_t)c->r[3],0); // 800F0638
  if (crb(c,2)) { goto L_800F0760; } // 800F063C
  c->r[30]=R8(c->r[24]+0x000008B8u); // 800F0640
  c->r[29]=c->r[19]|c->r[19]; // 800F0644
  c->r[15]=0u+0x00000000u; // 800F0648
  goto L_800F0678; // 800F064C
L_800F0650:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0650
  c->r[4]=c->r[17]|c->r[17]; // 800F0654
  c->r[5]=0u+0x00000006u; // 800F0658
  c->lr=0x800F0660u; f_800B3824(c); // 800F065C
  cmps(c,0,(int32_t)c->r[3],0); // 800F0660
  if (!crb(c,2)) { goto L_800F0670; } // 800F0664
  c->r[0]=0u+0x00000001u; // 800F0668
  goto L_800F0684; // 800F066C
L_800F0670:;
  c->r[29]=c->r[29]+0x00000046u; // 800F0670
  c->r[15]=c->r[15]+0x00000001u; // 800F0674
L_800F0678:;
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[30]); // 800F0678
  if (crb(c,0)) { IRQCHK(c); goto L_800F0650; } // 800F067C
  c->r[0]=0u+0x00000000u; // 800F0680
L_800F0684:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F0684
  if (!crb(c,2)) { goto L_800F0760; } // 800F0688
  c->lr=0x800F0690u; f_8007FFF0(c); // 800F068C
  c->r[0]=R8(c->r[14]+0x000006E9u); // 800F0690
  cmps(c,0,(int32_t)c->r[0],0); // 800F0694
  if (!crb(c,2)) { goto L_800F06DC; } // 800F0698
  c->r[5]=c->r[14]|c->r[14]; // 800F069C
  c->r[15]=0u+0x00000000u; // 800F06A0
  c->r[4]=0u+0x00000000u; // 800F06A4
  c->ctr=c->r[25]; // 800F06A8
  c->r[0]=c->r[0]|0x00000000u; // 800F06AC
L_800F06B0:;
  c->r[0]=R8(c->r[5]+0x0000013Du); // 800F06B0
  cmps(c,0,(int32_t)c->r[0],0); // 800F06B4
  if (!crb(c,2)) { goto L_800F06CC; } // 800F06B8
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 800F06BC
  c->r[4]=c->r[14]+c->r[0]; // 800F06C0
  c->r[15]=c->r[4]+0x000000E4u; // 800F06C4
  goto L_800F06E4; // 800F06C8
L_800F06CC:;
  c->r[5]=c->r[5]+0x00000060u; // 800F06CC
  c->r[4]=c->r[4]+0x00000001u; // 800F06D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F06B0; } // 800F06D4
  goto L_800F06E4; // 800F06D8
L_800F06DC:;
  c->r[4]=R32(c->r[14]+0x00000018u); // 800F06DC
  c->r[15]=R32(c->r[4]+0x00000000u); // 800F06E0
L_800F06E4:;
  c->lr=0x800F06E8u; f_80080030(c); // 800F06E4
  cmps(c,0,(int32_t)c->r[15],0); // 800F06E8
  if (crb(c,2)) { goto L_800F0760; } // 800F06EC
  c->r[4]=c->r[17]|c->r[17]; // 800F06F0
  c->r[3]=c->r[15]+0x00000040u; // 800F06F4
  c->r[5]=0u+0x00000006u; // 800F06F8
  c->lr=0x800F0700u; f_800043C4(c); // 800F06FC
  c->r[3]=c->r[15]|c->r[15]; // 800F0700
  c->r[4]=c->r[18]|c->r[18]; // 800F0704
  c->r[5]=0u+0x00000040u; // 800F0708
  c->lr=0x800F0710u; f_800043C4(c); // 800F070C
  c->r[4]=c->r[20]|c->r[20]; // 800F0710
  c->r[3]=c->r[15]+0x00000046u; // 800F0714
  c->r[5]=0u+0x00000010u; // 800F0718
  c->lr=0x800F0720u; f_800043C4(c); // 800F071C
  W8(c->r[15]+0x00000059u,c->r[16]); // 800F0720
  c->r[3]=c->r[15]|c->r[15]; // 800F0724
  c->r[4]=c->r[23]+0x00000270u; // 800F0728
  c->r[5]=0u+0x00000013u; // 800F072C
  W8(c->r[15]+0x0000005Bu,c->r[16]); // 800F0730
  W8(c->r[15]+0x0000005Cu,c->r[28]); // 800F0734
  c->lr=0x800F073Cu; f_800B3824(c); // 800F0738
  cmps(c,0,(int32_t)c->r[3],0); // 800F073C
  if (!crb(c,2)) { goto L_800F0754; } // 800F0740
  W8(c->r[15]+0x00000057u,c->r[27]); // 800F0744
  c->r[0]=c->r[26]+0xFFFF8074u; // 800F0748
  W16(c->r[15]+0x0000005Eu,c->r[0]); // 800F074C
  W8(c->r[15]+0x00000058u,c->r[28]); // 800F0750
L_800F0754:;
  c->r[3]=c->r[15]|c->r[15]; // 800F0754
  c->lr=0x800F075Cu; f_800F24F0(c); // 800F0758
  c->r[22]=c->r[22]+0xFFFFFFFFu; // 800F075C
L_800F0760:;
  c->r[21]=addc(c,c->r[21],0xFFFFFFFFu,0); cr0(c,c->r[21]); // 800F0760
  c->r[18]=c->r[18]+0xFFFFFFAAu; // 800F0764
  c->r[20]=c->r[20]+0xFFFFFFAAu; // 800F0768
  c->r[17]=c->r[17]+0xFFFFFFAAu; // 800F076C
  if (!crb(c,0)) { IRQCHK(c); goto L_800F0620; } // 800F0770
L_800F0774:;
  c->r[5]=c->r[24]+0x00000000u; // 800F0774
  c->r[3]=0u+0x00000000u; // 800F0778
  c->r[0]=0u+0x00000005u; // 800F077C
  W8(c->r[5]+0x000006E9u,c->r[3]); // 800F0780
  c->r[3]=c->r[24]+0x00001F60u; // 800F0784
  c->r[4]=0u+0x00000000u; // 800F0788
  W8(c->r[5]+0x00000010u,c->r[0]); // 800F078C
  c->r[5]=0u+0x00000205u; // 800F0790
  c->lr=0x800F0798u; f_80004714(c); // 800F0794
  c->r[3]=c->r[24]+0x000008B8u; // 800F0798
  c->lr=0x800F07A0u; f_800DB9B0(c); // 800F079C
  c->r[3]=c->r[24]+0x00001F60u; // 800F07A0
  c->lr=0x800F07A8u; f_800DB9D0(c); // 800F07A4
  c->r[3]=0u+0x800F0000u; // 800F07A8
  c->r[3]=c->r[3]+0x00000260u; // 800F07AC
  c->lr=0x800F07B4u; f_800DB1E0(c); // 800F07B0
  c->r[11]=c->r[1]+0x00000060u; // 800F07B4
  c->r[3]=0u+0x00000006u; // 800F07B8
  c->lr=0x800F07C0u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F07BC
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F07C0
  c->lr=c->r[0]; // 800F07C4
  c->r[1]=c->r[1]+0x00000060u; // 800F07C8
  return; // 800F07CC
}

// __wudNandResultCallback
void f_800F07D0(Ctx* __restrict c) {
  trace_call(0x800F07D0u);
  c->r[4]=R32(c->r[13]+0xFFFFA0B8u); // 800F07D0
  c->r[0]=0u+0x00000000u; // 800F07D4
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F07D8
  cmps(c,0,(int32_t)c->r[4],1); // 800F07DC
  if (crb(c,2)) { goto L_800F07F8; } // 800F07E0
  cmps(c,0,(int32_t)c->r[4],2); // 800F07E4
  if (crb(c,2)) { goto L_800F0810; } // 800F07E8
  cmps(c,0,(int32_t)c->r[4],3); // 800F07EC
  if (crb(c,2)) { goto L_800F0828; } // 800F07F0
  goto L_800F0844; // 800F07F4
L_800F07F8:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F07F8
  c->r[0]=0u+0x000000FFu; // 800F07FC
  if (!crb(c,2)) { goto L_800F0808; } // 800F0800
  c->r[0]=c->r[4]+0x00000001u; // 800F0804
L_800F0808:;
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0808
  return; // 800F080C
L_800F0810:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F0810
  c->r[0]=0u+0x00000005u; // 800F0814
  if (!crb(c,2)) { goto L_800F0820; } // 800F0818
  c->r[0]=c->r[4]+0x00000001u; // 800F081C
L_800F0820:;
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0820
  return; // 800F0824
L_800F0828:;
  c->r[0]=c->r[3]+0xFFFC0000u; // 800F0828
  c->r[3]=0u+0x00000005u; // 800F082C
  cmpu(c,0,c->r[0],0x0000B000u); // 800F0830
  if (!crb(c,2)) { goto L_800F083C; } // 800F0834
  c->r[3]=c->r[4]+0x00000001u; // 800F0838
L_800F083C:;
  W32(c->r[13]+0xFFFFA0B8u,c->r[3]); // 800F083C
  return; // 800F0840
L_800F0844:;
  c->r[0]=0u+0x00000006u; // 800F0844
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0848
  return; // 800F084C
}

// fn_800F0850
void f_800F0850(Ctx* __restrict c) {
  trace_call(0x800F0850u);
  c->r[3]=R32(c->r[13]+0xFFFFA0B8u); // 800F0850
  c->r[0]=0u+0x00000000u; // 800F0854
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F0858
  c->r[0]=c->r[3]+0x00000001u; // 800F085C
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0860
  return; // 800F0864
  unimpl(c,0x800F0868u,"00000000"); // 800F0868
  unimpl(c,0x800F086Cu,"00000000"); // 800F086C
  f_800F0870(c);
}

// fn_800F0870
void f_800F0870(Ctx* __restrict c) {
  trace_call(0x800F0870u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0870
  c->r[0]=c->lr; // 800F0874
  c->r[3]=0u+0x00000000u; // 800F0878
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F087C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F0880
  c->r[31]=0u+0x803A0000u; // 800F0884
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F0888
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F088C
  c->r[30]=c->r[13]+0xFFFF8748u; // 800F0890
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F0894
  c->r[29]=0u+0x00000003u; // 800F0898
  W32(c->r[1]+0x00000020u,c->r[28]); // 800F089C
  c->r[28]=0u+0x80330000u; // 800F08A0
  c->r[28]=c->r[28]+0xFFFF9A54u; // 800F08A4
  c->r[0]=R8(c->r[13]+0xFFFFA0BCu); // 800F08A8
  W32(c->r[1]+0x00000010u,c->r[3]); // 800F08AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F08B0
  W32(c->r[1]+0x00000014u,c->r[3]); // 800F08B4
  W32(c->r[1]+0x00000018u,c->r[3]); // 800F08B8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 800F08BC
  if (crb(c,2)) { goto L_800F08CC; } // 800F08C0
  c->r[3]=0u+0x00000003u; // 800F08C4
  goto L_800F0C84; // 800F08C8
L_800F08CC:;
  c->r[0]=R32(c->r[13]+0xFFFFA0A8u); // 800F08CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F08D0
  if (crb(c,2)) { goto L_800F08E0; } // 800F08D4
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; cr0(c,c->r[0]); // 800F08D8
  if (crb(c,2)) { goto L_800F08F8; } // 800F08DC
L_800F08E0:;
  c->r[5]=0u+0x80330000u; // 800F08E0
  c->r[3]=c->r[13]+0xFFFF8750u; // 800F08E4
  c->r[5]=c->r[5]+0xFFFF9A94u; // 800F08E8
  c->r[4]=0u+0x00000AB9u; // 800F08EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F08F0
  c->lr=0x800F08F8u; f_8007C760(c); // 800F08F4
L_800F08F8:;
  c->r[0]=R32(c->r[13]+0xFFFFA0B8u); // 800F08F8
  cmps(c,0,(int32_t)c->r[0],3); // 800F08FC
  if (crb(c,2)) { goto L_800F09C0; } // 800F0900
  if (!crb(c,0)) { goto L_800F0920; } // 800F0904
  cmps(c,0,(int32_t)c->r[0],1); // 800F0908
  if (crb(c,2)) { goto L_800F0950; } // 800F090C
  if (!crb(c,0)) { goto L_800F0998; } // 800F0910
  cmps(c,0,(int32_t)c->r[0],0); // 800F0914
  if (!crb(c,0)) { goto L_800F0930; } // 800F0918
  goto L_800F0C7C; // 800F091C
L_800F0920:;
  cmps(c,0,(int32_t)c->r[0],5); // 800F0920
  if (crb(c,2)) { goto L_800F0C5C; } // 800F0924
  if (!crb(c,0)) { goto L_800F0C7C; } // 800F0928
  goto L_800F09EC; // 800F092C
L_800F0930:;
  c->lr=0x800F0934u; f_800D8B30(c); // 800F0930
  cmps(c,0,(int32_t)c->r[3],0); // 800F0934
  if (!crb(c,2)) { goto L_800F0944; } // 800F0938
  c->r[0]=0u+0x00000001u; // 800F093C
  goto L_800F0948; // 800F0940
L_800F0944:;
  c->r[0]=0u+0x000000FFu; // 800F0944
L_800F0948:;
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0948
  goto L_800F0C80; // 800F094C
L_800F0950:;
  c->lr=0x800F0954u; f_800DBF80(c); // 800F0950
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800F0954
  if (!crb(c,2)) { goto L_800F098C; } // 800F0958
  c->r[3]=0u+0x00000001u; // 800F095C
  c->r[0]=0u+0x00000000u; // 800F0960
  c->r[6]=0u+0x800F0000u; // 800F0964
  W8(c->r[13]+0xFFFFA0BCu,c->r[3]); // 800F0968
  c->r[3]=c->r[28]|c->r[28]; // 800F096C
  c->r[4]=c->r[31]+0x00000E00u; // 800F0970
  W32(c->r[13]+0xFFFFA0B4u,c->r[0]); // 800F0974
  c->r[6]=c->r[6]+0x000007D0u; // 800F0978
  c->r[7]=c->r[31]+0x00000E8Cu; // 800F097C
  c->r[5]=0u+0x00000001u; // 800F0980
  c->lr=0x800F0988u; f_800D8130(c); // 800F0984
  goto L_800F0C80; // 800F0988
L_800F098C:;
  c->r[0]=0u+0x00000006u; // 800F098C
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0990
  goto L_800F0C80; // 800F0994
L_800F0998:;
  c->r[0]=0u+0x00000001u; // 800F0998
  c->r[6]=0u+0x800F0000u; // 800F099C
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F09A0
  c->r[3]=c->r[31]+0x00000E00u; // 800F09A4
  c->r[6]=c->r[6]+0x000007D0u; // 800F09A8
  c->r[7]=c->r[31]+0x00000E8Cu; // 800F09AC
  c->r[4]=0u+0x00000000u; // 800F09B0
  c->r[5]=0u+0x00000000u; // 800F09B4
  c->lr=0x800F09BCu; f_800D71E0(c); // 800F09B8
  goto L_800F0C80; // 800F09BC
L_800F09C0:;
  c->r[0]=0u+0x00000001u; // 800F09C0
  c->r[5]=0u+0x00050000u; // 800F09C4
  c->r[6]=0u+0x800F0000u; // 800F09C8
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F09CC
  c->r[4]=R32(c->r[13]+0xFFFFA0A8u); // 800F09D0
  c->r[3]=c->r[31]+0x00000E00u; // 800F09D4
  c->r[5]=c->r[5]+0xFFFFB000u; // 800F09D8
  c->r[6]=c->r[6]+0x000007D0u; // 800F09DC
  c->r[7]=c->r[31]+0x00000E8Cu; // 800F09E0
  c->lr=0x800F09E8u; f_800D7070(c); // 800F09E4
  goto L_800F0C80; // 800F09E8
L_800F09EC:;
  c->r[4]=R32(c->r[13]+0xFFFFA0A8u); // 800F09EC
  c->r[3]=c->r[31]+0x00000D20u; // 800F09F0
  c->r[5]=0u+0x00000080u; // 800F09F4
  c->r[4]=c->r[4]+0x00050000u; // 800F09F8
  c->r[4]=c->r[4]+0xFFFFAF18u; // 800F09FC
  c->lr=0x800F0A04u; f_800043C4(c); // 800F0A00
  c->r[4]=R32(c->r[13]+0xFFFFA0A8u); // 800F0A04
  c->r[3]=c->r[1]+0x00000008u; // 800F0A08
  c->r[5]=0u+0x00000004u; // 800F0A0C
  c->r[4]=c->r[4]+0x00050000u; // 800F0A10
  c->r[4]=c->r[4]+0xFFFFAF98u; // 800F0A14
  c->lr=0x800F0A1Cu; f_800043C4(c); // 800F0A18
  c->r[3]=0u+0x00010000u; // 800F0A1C
  c->r[6]=R32(c->r[13]+0xFFFFA0A8u); // 800F0A20
  c->r[0]=c->r[3]+0xFFFF95E3u; // 800F0A24
  c->r[5]=0u+0x00000000u; // 800F0A28
  c->r[4]=0u+0x00000000u; // 800F0A2C
  c->ctr=c->r[0]; // 800F0A30
L_800F0A34:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 800F0A34
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0A38
  c->r[5]=c->r[5]+c->r[3]; // 800F0A3C
  c->r[3]=R16(c->r[6]+0x00000002u); // 800F0A40
  c->r[0]=c->r[4]+c->r[0]; // 800F0A44
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0A48
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0A4C
  c->r[5]=c->r[5]+c->r[3]; // 800F0A50
  c->r[3]=R16(c->r[6]+0x00000004u); // 800F0A54
  c->r[0]=c->r[4]+c->r[0]; // 800F0A58
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0A5C
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0A60
  c->r[5]=c->r[5]+c->r[3]; // 800F0A64
  c->r[3]=R16(c->r[6]+0x00000006u); // 800F0A68
  c->r[0]=c->r[4]+c->r[0]; // 800F0A6C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0A70
  c->r[6]=c->r[6]+0x00000008u; // 800F0A74
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0A78
  c->r[5]=c->r[5]+c->r[3]; // 800F0A7C
  c->r[0]=c->r[4]+c->r[0]; // 800F0A80
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0A84
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F0A34; } // 800F0A88
  c->r[3]=R32(c->r[13]+0xFFFFA0A8u); // 800F0A8C
  c->r[4]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 800F0A90
  c->r[0]=0u+0x00000008u; // 800F0A94
  W32(c->r[13]+0xFFFFA0B4u,c->r[4]); // 800F0A98
  c->r[3]=c->r[3]+0x00050000u; // 800F0A9C
  c->r[5]=rotl(c->r[4],16)&0x0000FFFFu; // 800F0AA0
  c->r[6]=c->r[3]+0xFFFFAF18u; // 800F0AA4
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 800F0AA8
  c->ctr=c->r[0]; // 800F0AAC
L_800F0AB0:;
  c->r[3]=R16(c->r[6]+0x00000000u); // 800F0AB0
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0AB4
  c->r[5]=c->r[5]+c->r[3]; // 800F0AB8
  c->r[3]=R16(c->r[6]+0x00000002u); // 800F0ABC
  c->r[0]=c->r[4]+c->r[0]; // 800F0AC0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0AC4
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0AC8
  c->r[5]=c->r[5]+c->r[3]; // 800F0ACC
  c->r[3]=R16(c->r[6]+0x00000004u); // 800F0AD0
  c->r[0]=c->r[4]+c->r[0]; // 800F0AD4
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0AD8
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0ADC
  c->r[5]=c->r[5]+c->r[3]; // 800F0AE0
  c->r[3]=R16(c->r[6]+0x00000006u); // 800F0AE4
  c->r[0]=c->r[4]+c->r[0]; // 800F0AE8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0AEC
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0AF0
  c->r[5]=c->r[5]+c->r[3]; // 800F0AF4
  c->r[3]=R16(c->r[6]+0x00000008u); // 800F0AF8
  c->r[0]=c->r[4]+c->r[0]; // 800F0AFC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0B00
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0B04
  c->r[5]=c->r[5]+c->r[3]; // 800F0B08
  c->r[3]=R16(c->r[6]+0x0000000Au); // 800F0B0C
  c->r[0]=c->r[4]+c->r[0]; // 800F0B10
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0B14
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0B18
  c->r[5]=c->r[5]+c->r[3]; // 800F0B1C
  c->r[3]=R16(c->r[6]+0x0000000Cu); // 800F0B20
  c->r[0]=c->r[4]+c->r[0]; // 800F0B24
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0B28
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0B2C
  c->r[5]=c->r[5]+c->r[3]; // 800F0B30
  c->r[3]=R16(c->r[6]+0x0000000Eu); // 800F0B34
  c->r[0]=c->r[4]+c->r[0]; // 800F0B38
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0B3C
  c->r[6]=c->r[6]+0x00000010u; // 800F0B40
  c->r[0]=~(c->r[3]|c->r[3]); // 800F0B44
  c->r[5]=c->r[5]+c->r[3]; // 800F0B48
  c->r[0]=c->r[4]+c->r[0]; // 800F0B4C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F0B50
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F0AB0; } // 800F0B54
  c->r[0]=R32(c->r[1]+0x00000008u); // 800F0B58
  c->r[4]=(rotl(c->r[5],16)&0xFFFF0000u)|(c->r[4]&~0xFFFF0000u); // 800F0B5C
  cmpu(c,0,c->r[0],c->r[4]); // 800F0B60
  if (crb(c,2)) { goto L_800F0B74; } // 800F0B64
  c->r[0]=0u+0x00000005u; // 800F0B68
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0B6C
  goto L_800F0C80; // 800F0B70
L_800F0B74:;
  c->r[3]=c->r[31]+0x00000D20u; // 800F0B74
  c->r[4]=c->r[1]+0x00000010u; // 800F0B78
  c->r[5]=0u+0x00000006u; // 800F0B7C
  c->lr=0x800F0B84u; f_800B3824(c); // 800F0B80
  cmps(c,0,(int32_t)c->r[3],0); // 800F0B84
  if (!crb(c,2)) { goto L_800F0B98; } // 800F0B88
  c->r[0]=0u+0x00000005u; // 800F0B8C
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0B90
  goto L_800F0C80; // 800F0B94
L_800F0B98:;
  c->lr=0x800F0B9Cu; f_8007A7B0(c); // 800F0B98
  c->r[4]=c->r[30]|c->r[30]; // 800F0B9C
  c->r[5]=0u+0x00000004u; // 800F0BA0
  c->lr=0x800F0BA8u; f_800B3824(c); // 800F0BA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F0BA8
  if (crb(c,2)) { goto L_800F0BD8; } // 800F0BAC
  c->r[3]=c->r[31]+0x00000D20u; // 800F0BB0
  c->r[4]=c->r[1]+0x00000010u; // 800F0BB4
  c->r[3]=c->r[3]+0x00000006u; // 800F0BB8
  c->r[5]=0u+0x00000010u; // 800F0BBC
  c->lr=0x800F0BC4u; f_800B3824(c); // 800F0BC0
  cmps(c,0,(int32_t)c->r[3],0); // 800F0BC4
  if (!crb(c,2)) { goto L_800F0BD8; } // 800F0BC8
  c->r[0]=0u+0x00000005u; // 800F0BCC
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0BD0
  goto L_800F0C80; // 800F0BD4
L_800F0BD8:;
  c->r[4]=0u+0x00050000u; // 800F0BD8
  c->r[3]=R32(c->r[13]+0xFFFFA0A8u); // 800F0BDC
  c->r[5]=c->r[4]+0xFFFFB000u; // 800F0BE0
  c->r[4]=0u+0x00000000u; // 800F0BE4
  c->lr=0x800F0BECu; f_80004714(c); // 800F0BE8
  c->r[3]=c->r[31]+0x000008B8u; // 800F0BEC
  c->r[4]=0u+0x00000000u; // 800F0BF0
  c->r[5]=0u+0x00000461u; // 800F0BF4
  c->lr=0x800F0BFCu; f_80004714(c); // 800F0BF8
  c->r[3]=c->r[31]+0x000008B8u; // 800F0BFC
  c->lr=0x800F0C04u; f_800DB9A0(c); // 800F0C00
  c->r[28]=c->r[31]+0x000008B8u; // 800F0C04
  c->r[4]=c->r[31]+0x00000D20u; // 800F0C08
  c->r[3]=c->r[28]+0x000003D5u; // 800F0C0C
  c->r[5]=0u+0x00000006u; // 800F0C10
  c->lr=0x800F0C18u; f_800043C4(c); // 800F0C14
  c->r[30]=c->r[31]+0x00000D20u; // 800F0C18
  c->r[3]=c->r[28]+0x000003DBu; // 800F0C1C
  c->r[4]=c->r[30]+0x00000016u; // 800F0C20
  c->r[5]=0u+0x00000040u; // 800F0C24
  c->lr=0x800F0C2Cu; f_800043C4(c); // 800F0C28
  c->r[3]=c->r[28]+0x000003EFu; // 800F0C2C
  c->r[4]=c->r[30]+0x00000006u; // 800F0C30
  c->r[5]=0u+0x00000010u; // 800F0C34
  c->lr=0x800F0C3Cu; f_800043C4(c); // 800F0C38
  c->r[3]=c->r[28]|c->r[28]; // 800F0C3C
  c->lr=0x800F0C44u; f_800DB9B0(c); // 800F0C40
  c->r[0]=0u+0x00000001u; // 800F0C44
  c->r[3]=0u+0x800F0000u; // 800F0C48
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F0C4C
  c->r[3]=c->r[3]+0x00000850u; // 800F0C50
  c->lr=0x800F0C58u; f_800DB1E0(c); // 800F0C54
  goto L_800F0C80; // 800F0C58
L_800F0C5C:;
  c->r[0]=0u+0x00000001u; // 800F0C5C
  c->r[4]=0u+0x800F0000u; // 800F0C60
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F0C64
  c->r[3]=c->r[31]+0x00000E00u; // 800F0C68
  c->r[4]=c->r[4]+0x000007D0u; // 800F0C6C
  c->r[5]=c->r[31]+0x00000E8Cu; // 800F0C70
  c->lr=0x800F0C78u; f_800D8320(c); // 800F0C74
  goto L_800F0C80; // 800F0C78
L_800F0C7C:;
  c->r[29]=0u+0x00000004u; // 800F0C7C
L_800F0C80:;
  c->r[3]=c->r[29]|c->r[29]; // 800F0C80
L_800F0C84:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F0C84
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F0C88
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F0C8C
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F0C90
  c->r[28]=R32(c->r[1]+0x00000020u); // 800F0C94
  c->lr=c->r[0]; // 800F0C98
  c->r[1]=c->r[1]+0x00000030u; // 800F0C9C
  return; // 800F0CA0
  unimpl(c,0x800F0CA4u,"00000000"); // 800F0CA4
  unimpl(c,0x800F0CA8u,"00000000"); // 800F0CA8
  unimpl(c,0x800F0CACu,"00000000"); // 800F0CAC
  f_800F0CB0(c);
}

// fn_800F0CB0
void f_800F0CB0(Ctx* __restrict c) {
  trace_call(0x800F0CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0CB0
  c->r[0]=c->lr; // 800F0CB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F0CB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F0CBC
  c->r[31]=0u+0x803A0000u; // 800F0CC0
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F0CC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F0CC8
  c->r[0]=R8(c->r[31]+0x00000010u); // 800F0CCC
  cmps(c,0,(int32_t)c->r[0],1); // 800F0CD0
  if (crb(c,2)) { goto L_800F0CFC; } // 800F0CD4
  cmps(c,0,(int32_t)c->r[0],2); // 800F0CD8
  if (crb(c,2)) { goto L_800F0D24; } // 800F0CDC
  cmps(c,0,(int32_t)c->r[0],4); // 800F0CE0
  if (crb(c,2)) { goto L_800F0DA4; } // 800F0CE4
  cmps(c,0,(int32_t)c->r[0],6); // 800F0CE8
  if (crb(c,2)) { goto L_800F0DAC; } // 800F0CEC
  cmps(c,0,(int32_t)c->r[0],3); // 800F0CF0
  if (crb(c,2)) { goto L_800F0DD4; } // 800F0CF4
  goto L_800F0DDC; // 800F0CF8
L_800F0CFC:;
  c->r[3]=R8(c->r[31]+0x00000748u); // 800F0CFC
  c->r[30]=0u+0x00000001u; // 800F0D00
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F0D04
  W8(c->r[31]+0x00000748u,c->r[0]); // 800F0D08
  c->lr=0x800F0D10u; f_800FA4A0(c); // 800F0D0C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F0D10
  if (crb(c,2)) { goto L_800F0D1C; } // 800F0D14
  c->r[30]=0u+0x00000002u; // 800F0D18
L_800F0D1C:;
  W8(c->r[31]+0x00000010u,c->r[30]); // 800F0D1C
  goto L_800F0DDC; // 800F0D20
L_800F0D24:;
  c->r[30]=0u+0x00000002u; // 800F0D24
  c->lr=0x800F0D2Cu; f_800843B0(c); // 800F0D28
  c->r[5]=0u+0x80000000u; // 800F0D2C
  c->r[3]=0u+0x10620000u; // 800F0D30
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F0D34
  c->r[3]=c->r[3]+0x00004DD3u; // 800F0D38
  c->r[5]=R32(c->r[13]+0xFFFF9904u); // 800F0D3C
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F0D40
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F0D44
  c->r[3]=c->r[4]-c->r[5]; // 800F0D48
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F0D4C
  c->r[0]=divwu(c->r[3],c->r[0]); // 800F0D50
  c->r[0]=addc(c,~c->r[0],0x000001F4u,1); // 800F0D54
  cmps(c,0,(int32_t)c->r[0],0); // 800F0D58
  if (!crb(c,0)) { goto L_800F0D9C; } // 800F0D5C
  c->lr=0x800F0D64u; f_800D9E50(c); // 800F0D60
  cmpu(c,0,c->r[3],0x00000001u); // 800F0D64
  if (crb(c,2)) { goto L_800F0D9C; } // 800F0D68
  c->lr=0x800F0D70u; f_800F0F20(c); // 800F0D6C
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800F0D70
  c->r[30]=0u+0x00000004u; // 800F0D74
  cmps(c,0,(int32_t)c->r[0],0); // 800F0D78
  if (crb(c,2)) { goto L_800F0D9C; } // 800F0D7C
  c->lr=0x800F0D84u; f_800DBF80(c); // 800F0D80
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800F0D84
  if (!crb(c,2)) { goto L_800F0D9C; } // 800F0D88
  c->r[0]=0u+0x00000000u; // 800F0D8C
  W8(c->r[13]+0xFFFFA0BCu,c->r[0]); // 800F0D90
  c->r[30]=0u+0x00000003u; // 800F0D94
  W32(c->r[13]+0xFFFFA0B8u,c->r[0]); // 800F0D98
L_800F0D9C:;
  W8(c->r[31]+0x00000010u,c->r[30]); // 800F0D9C
  goto L_800F0DDC; // 800F0DA0
L_800F0DA4:;
  c->lr=0x800F0DA8u; f_800F0280(c); // 800F0DA4
  goto L_800F0DDC; // 800F0DA8
L_800F0DAC:;
  c->r[3]=c->r[31]+0x00000710u; // 800F0DAC
  c->lr=0x800F0DB4u; f_8007AC20(c); // 800F0DB0
  c->r[0]=0u+0x00000001u; // 800F0DB4
  c->r[3]=0u+0x800F0000u; // 800F0DB8
  W8(c->r[31]+0x00000708u,c->r[0]); // 800F0DBC
  c->r[3]=c->r[3]+0x00002EB0u; // 800F0DC0
  c->lr=0x800F0DC8u; f_800FA3E0(c); // 800F0DC4
  c->r[0]=0u+0x00000007u; // 800F0DC8
  W8(c->r[31]+0x00000010u,c->r[0]); // 800F0DCC
  goto L_800F0DDC; // 800F0DD0
L_800F0DD4:;
  c->lr=0x800F0DD8u; f_800F0870(c); // 800F0DD4
  W8(c->r[31]+0x00000010u,c->r[3]); // 800F0DD8
L_800F0DDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F0DDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F0DE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F0DE4
  c->lr=c->r[0]; // 800F0DE8
  c->r[1]=c->r[1]+0x00000010u; // 800F0DEC
  return; // 800F0DF0
  unimpl(c,0x800F0DF4u,"00000000"); // 800F0DF4
  unimpl(c,0x800F0DF8u,"00000000"); // 800F0DF8
  unimpl(c,0x800F0DFCu,"00000000"); // 800F0DFC
  f_800F0E00(c);
}

// fn_800F0E00
void f_800F0E00(Ctx* __restrict c) {
  trace_call(0x800F0E00u);
  c->r[8]=0u+0x803A0000u; // 800F0E00
  c->r[7]=0u+0x800F0000u; // 800F0E04
  c->r[8]=c->r[8]+0xFFFFC720u; // 800F0E08
  c->r[5]=0u+0x00000000u; // 800F0E0C
  c->r[7]=c->r[7]+0x00000CB0u; // 800F0E10
  c->r[6]=0u+0x00000000u; // 800F0E14
  c->r[8]=c->r[8]+0x00001000u; // 800F0E18
  f_8007C280(c); return; // 800F0E1C
}

// fn_800F0E20
void f_800F0E20(Ctx* __restrict c) {
  trace_call(0x800F0E20u);
  c->r[3]=0u+0x803A0000u; // 800F0E20
  c->r[0]=0u+0x00000003u; // 800F0E24
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800F0E28
  W8(c->r[3]+0x00000011u,c->r[0]); // 800F0E2C
  return; // 800F0E30
  unimpl(c,0x800F0E34u,"00000000"); // 800F0E34
  unimpl(c,0x800F0E38u,"00000000"); // 800F0E38
  unimpl(c,0x800F0E3Cu,"00000000"); // 800F0E3C
  f_800F0E40(c);
}

// fn_800F0E40
void f_800F0E40(Ctx* __restrict c) {
  trace_call(0x800F0E40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0E40
  c->r[0]=c->lr; // 800F0E44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F0E48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F0E4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F0E50
  c->r[30]=0u+0x803A0000u; // 800F0E54
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F0E58
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F0E5C
  c->r[31]=c->r[30]+0x00000000u; // 800F0E60
  c->r[0]=R8(c->r[31]+0x00000011u); // 800F0E64
  cmps(c,0,(int32_t)c->r[0],1); // 800F0E68
  if (crb(c,2)) { goto L_800F0E7C; } // 800F0E6C
  cmps(c,0,(int32_t)c->r[0],3); // 800F0E70
  if (crb(c,2)) { goto L_800F0ECC; } // 800F0E74
  goto L_800F0ED8; // 800F0E78
L_800F0E7C:;
  c->r[29]=R32(c->r[13]+0xFFFFA09Cu); // 800F0E7C
  c->lr=0x800F0E84u; f_800D9E50(c); // 800F0E80
  cmpu(c,0,c->r[3],0x00000001u); // 800F0E84
  if (crb(c,2)) { goto L_800F0ED8; } // 800F0E88
  c->r[3]=c->r[30]+0x000008B8u; // 800F0E8C
  c->lr=0x800F0E94u; f_800DB9B0(c); // 800F0E90
  c->r[29]=c->r[29]&c->r[3]; // 800F0E94
  c->r[3]=c->r[30]+0x00001F60u; // 800F0E98
  c->lr=0x800F0EA0u; f_800DB9D0(c); // 800F0E9C
  c->r[29]=c->r[29]&c->r[3]; cr0(c,c->r[29]); // 800F0EA0
  if (crb(c,2)) { goto L_800F0EC0; } // 800F0EA4
  c->r[0]=0u+0x00000002u; // 800F0EA8
  c->r[3]=0u+0x800F0000u; // 800F0EAC
  W8(c->r[31]+0x00000011u,c->r[0]); // 800F0EB0
  c->r[3]=c->r[3]+0x00000E20u; // 800F0EB4
  c->lr=0x800F0EBCu; f_800DB1E0(c); // 800F0EB8
  goto L_800F0ED8; // 800F0EBC
L_800F0EC0:;
  c->r[0]=0u+0x00000003u; // 800F0EC0
  W8(c->r[31]+0x00000011u,c->r[0]); // 800F0EC4
  goto L_800F0ED8; // 800F0EC8
L_800F0ECC:;
  c->r[3]=c->r[31]+0x00000710u; // 800F0ECC
  c->lr=0x800F0ED4u; f_8007AC20(c); // 800F0ED0
  c->lr=0x800F0ED8u; f_800FA468(c); // 800F0ED4
L_800F0ED8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F0ED8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F0EDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F0EE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F0EE4
  c->lr=c->r[0]; // 800F0EE8
  c->r[1]=c->r[1]+0x00000020u; // 800F0EEC
  return; // 800F0EF0
  unimpl(c,0x800F0EF4u,"00000000"); // 800F0EF4
  unimpl(c,0x800F0EF8u,"00000000"); // 800F0EF8
  unimpl(c,0x800F0EFCu,"00000000"); // 800F0EFC
  f_800F0F00(c);
}

// fn_800F0F00
void f_800F0F00(Ctx* __restrict c) {
  trace_call(0x800F0F00u);
  c->r[8]=0u+0x803A0000u; // 800F0F00
  c->r[7]=0u+0x800F0000u; // 800F0F04
  c->r[8]=c->r[8]+0xFFFFC720u; // 800F0F08
  c->r[5]=0u+0x00000000u; // 800F0F0C
  c->r[7]=c->r[7]+0x00000E40u; // 800F0F10
  c->r[6]=0u+0x00000000u; // 800F0F14
  c->r[8]=c->r[8]+0x00001000u; // 800F0F18
  f_8007C280(c); return; // 800F0F1C
}

// fn_800F0F20
void f_800F0F20(Ctx* __restrict c) {
  trace_call(0x800F0F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F0F20
  c->r[0]=c->lr; // 800F0F24
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F0F28
  c->r[11]=c->r[1]+0x00000030u; // 800F0F2C
  c->lr=0x800F0F34u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F0F30
  c->r[31]=0u+0x803A0000u; // 800F0F34
  c->r[0]=0u+0x00000002u; // 800F0F38
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F0F3C
  c->r[3]=0u+0x00000000u; // 800F0F40
  c->r[30]=c->r[31]+0x00000000u; // 800F0F44
  c->r[28]=0u+0x00000000u; // 800F0F48
  c->r[29]=c->r[31]+0x00000DC0u; // 800F0F4C
  c->r[12]=c->r[31]+0x00002168u; // 800F0F50
  c->r[11]=c->r[31]+0x00002188u; // 800F0F54
  c->ctr=c->r[0]; // 800F0F58
L_800F0F5C:;
  c->r[9]=rotl(c->r[3],1)&0x000001FEu; // 800F0F5C
  c->r[4]=c->r[3]+0x00000001u; // 800F0F60
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800F0F64
  c->r[8]=c->r[3]+0x00000002u; // 800F0F68
  W32(c->r[29]+c->r[0],c->r[28]); // 800F0F6C
  c->r[10]=rotl(c->r[4],2)&0x000003FCu; // 800F0F70
  c->r[27]=rotl(c->r[4],1)&0x000001FEu; // 800F0F74
  c->r[6]=c->r[3]+0x00000004u; // 800F0F78
  W16(c->r[12]+c->r[9],c->r[28]); // 800F0F7C
  c->r[5]=c->r[3]+0x00000005u; // 800F0F80
  c->r[7]=c->r[3]+0x00000003u; // 800F0F84
  c->r[26]=rotl(c->r[8],1)&0x000001FEu; // 800F0F88
  W16(c->r[11]+c->r[9],c->r[28]); // 800F0F8C
  c->r[9]=rotl(c->r[8],2)&0x000003FCu; // 800F0F90
  c->r[8]=rotl(c->r[7],2)&0x000003FCu; // 800F0F94
  c->r[25]=rotl(c->r[6],1)&0x000001FEu; // 800F0F98
  W32(c->r[29]+c->r[10],c->r[28]); // 800F0F9C
  c->r[10]=rotl(c->r[7],1)&0x000001FEu; // 800F0FA0
  c->r[7]=rotl(c->r[6],2)&0x000003FCu; // 800F0FA4
  c->r[0]=c->r[3]+0x00000006u; // 800F0FA8
  W16(c->r[12]+c->r[27],c->r[28]); // 800F0FAC
  c->r[4]=c->r[3]+0x00000007u; // 800F0FB0
  c->r[6]=rotl(c->r[5],2)&0x000003FCu; // 800F0FB4
  c->r[24]=rotl(c->r[5],1)&0x000001FEu; // 800F0FB8
  W16(c->r[11]+c->r[27],c->r[28]); // 800F0FBC
  c->r[5]=rotl(c->r[0],2)&0x000003FCu; // 800F0FC0
  c->r[27]=rotl(c->r[0],1)&0x000001FEu; // 800F0FC4
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 800F0FC8
  W32(c->r[29]+c->r[9],c->r[28]); // 800F0FCC
  c->r[4]=rotl(c->r[4],1)&0x000001FEu; // 800F0FD0
  c->r[3]=c->r[3]+0x00000008u; // 800F0FD4
  W16(c->r[12]+c->r[26],c->r[28]); // 800F0FD8
  W16(c->r[11]+c->r[26],c->r[28]); // 800F0FDC
  W32(c->r[29]+c->r[8],c->r[28]); // 800F0FE0
  W16(c->r[12]+c->r[10],c->r[28]); // 800F0FE4
  W16(c->r[11]+c->r[10],c->r[28]); // 800F0FE8
  W32(c->r[29]+c->r[7],c->r[28]); // 800F0FEC
  W16(c->r[12]+c->r[25],c->r[28]); // 800F0FF0
  W16(c->r[11]+c->r[25],c->r[28]); // 800F0FF4
  W32(c->r[29]+c->r[6],c->r[28]); // 800F0FF8
  W16(c->r[12]+c->r[24],c->r[28]); // 800F0FFC
  W16(c->r[11]+c->r[24],c->r[28]); // 800F1000
  W32(c->r[29]+c->r[5],c->r[28]); // 800F1004
  W16(c->r[12]+c->r[27],c->r[28]); // 800F1008
  W16(c->r[11]+c->r[27],c->r[28]); // 800F100C
  W32(c->r[29]+c->r[0],c->r[28]); // 800F1010
  W16(c->r[12]+c->r[4],c->r[28]); // 800F1014
  W16(c->r[11]+c->r[4],c->r[28]); // 800F1018
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F0F5C; } // 800F101C
  c->r[0]=0u+0x00000003u; // 800F1020
  c->r[4]=c->r[30]+0x00000058u; // 800F1024
  c->r[3]=c->r[30]+0x0000001Cu; // 800F1028
  W32(c->r[30]+0x00000018u,c->r[4]); // 800F102C
  c->r[5]=c->r[30]|c->r[30]; // 800F1030
  c->r[4]=0u+0x00000000u; // 800F1034
  W32(c->r[30]+0x00000014u,c->r[3]); // 800F1038
  c->ctr=c->r[0]; // 800F103C
L_800F1040:;
  c->r[0]=addc(c,~c->r[4],0x00000005u,1); // 800F1040
  cmps(c,0,(int32_t)c->r[4],0); // 800F1044
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800F1048
  c->r[3]=c->r[30]+c->r[0]; // 800F104C
  c->r[0]=c->r[3]+0x000004A4u; // 800F1050
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 800F1054
  if (!crb(c,2)) { goto L_800F1064; } // 800F1058
  c->r[0]=0u+0x00000000u; // 800F105C
  goto L_800F1074; // 800F1060
L_800F1064:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F1064
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F1068
  c->r[3]=c->r[30]+c->r[0]; // 800F106C
  c->r[0]=c->r[3]+0x0000001Cu; // 800F1070
L_800F1074:;
  cmps(c,0,(int32_t)c->r[4],5); // 800F1074
  W32(c->r[5]+0x00000020u,c->r[0]); // 800F1078
  if (!crb(c,2)) { goto L_800F1088; } // 800F107C
  c->r[0]=0u+0x00000000u; // 800F1080
  goto L_800F1098; // 800F1084
L_800F1088:;
  c->r[0]=c->r[4]+0x00000001u; // 800F1088
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F108C
  c->r[3]=c->r[30]+c->r[0]; // 800F1090
  c->r[0]=c->r[3]+0x0000001Cu; // 800F1094
L_800F1098:;
  c->r[4]=addc(c,c->r[4],0x00000001u,0); cr0(c,c->r[4]); // 800F1098
  W32(c->r[5]+0x00000024u,c->r[0]); // 800F109C
  c->r[0]=addc(c,~c->r[4],0x00000005u,1); // 800F10A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800F10A4
  c->r[3]=c->r[30]+c->r[0]; // 800F10A8
  c->r[0]=c->r[3]+0x000004A4u; // 800F10AC
  W32(c->r[5]+0x00000028u,c->r[0]); // 800F10B0
  if (!crb(c,2)) { goto L_800F10C0; } // 800F10B4
  c->r[0]=0u+0x00000000u; // 800F10B8
  goto L_800F10D0; // 800F10BC
L_800F10C0:;
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F10C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F10C4
  c->r[3]=c->r[30]+c->r[0]; // 800F10C8
  c->r[0]=c->r[3]+0x0000001Cu; // 800F10CC
L_800F10D0:;
  cmps(c,0,(int32_t)c->r[4],5); // 800F10D0
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 800F10D4
  if (!crb(c,2)) { goto L_800F10E4; } // 800F10D8
  c->r[0]=0u+0x00000000u; // 800F10DC
  goto L_800F10F4; // 800F10E0
L_800F10E4:;
  c->r[0]=c->r[4]+0x00000001u; // 800F10E4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F10E8
  c->r[3]=c->r[30]+c->r[0]; // 800F10EC
  c->r[0]=c->r[3]+0x0000001Cu; // 800F10F0
L_800F10F4:;
  W32(c->r[5]+0x00000030u,c->r[0]); // 800F10F4
  c->r[5]=c->r[5]+0x00000018u; // 800F10F8
  c->r[4]=c->r[4]+0x00000001u; // 800F10FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1040; } // 800F1100
  c->r[0]=0u+0x00000005u; // 800F1104
  c->r[4]=c->r[30]+0x000000D8u; // 800F1108
  c->r[3]=c->r[30]+0x0000006Cu; // 800F110C
  W32(c->r[30]+0x00000068u,c->r[4]); // 800F1110
  c->r[5]=c->r[30]|c->r[30]; // 800F1114
  c->r[4]=c->r[30]+0x000000E4u; // 800F1118
  c->r[6]=0u+0x00000000u; // 800F111C
  W32(c->r[30]+0x00000064u,c->r[3]); // 800F1120
  c->ctr=c->r[0]; // 800F1124
L_800F1128:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F1128
  W32(c->r[5]+0x0000006Cu,c->r[4]); // 800F112C
  if (!crb(c,2)) { goto L_800F113C; } // 800F1130
  c->r[0]=0u+0x00000000u; // 800F1134
  goto L_800F114C; // 800F1138
L_800F113C:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F113C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F1140
  c->r[3]=c->r[30]+c->r[0]; // 800F1144
  c->r[0]=c->r[3]+0x0000006Cu; // 800F1148
L_800F114C:;
  cmps(c,0,(int32_t)c->r[6],9); // 800F114C
  W32(c->r[5]+0x00000070u,c->r[0]); // 800F1150
  if (!crb(c,2)) { goto L_800F1160; } // 800F1154
  c->r[0]=0u+0x00000000u; // 800F1158
  goto L_800F1170; // 800F115C
L_800F1160:;
  c->r[0]=c->r[6]+0x00000001u; // 800F1160
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F1164
  c->r[3]=c->r[30]+c->r[0]; // 800F1168
  c->r[0]=c->r[3]+0x0000006Cu; // 800F116C
L_800F1170:;
  W32(c->r[5]+0x00000074u,c->r[0]); // 800F1170
  c->r[4]=c->r[4]+0x00000060u; // 800F1174
  c->r[6]=addc(c,c->r[6],0x00000001u,0); cr0(c,c->r[6]); // 800F1178
  W32(c->r[5]+0x00000078u,c->r[4]); // 800F117C
  if (!crb(c,2)) { goto L_800F118C; } // 800F1180
  c->r[0]=0u+0x00000000u; // 800F1184
  goto L_800F119C; // 800F1188
L_800F118C:;
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F118C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F1190
  c->r[3]=c->r[30]+c->r[0]; // 800F1194
  c->r[0]=c->r[3]+0x0000006Cu; // 800F1198
L_800F119C:;
  cmps(c,0,(int32_t)c->r[6],9); // 800F119C
  W32(c->r[5]+0x0000007Cu,c->r[0]); // 800F11A0
  if (!crb(c,2)) { goto L_800F11B0; } // 800F11A4
  c->r[0]=0u+0x00000000u; // 800F11A8
  goto L_800F11C0; // 800F11AC
L_800F11B0:;
  c->r[0]=c->r[6]+0x00000001u; // 800F11B0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 800F11B4
  c->r[3]=c->r[30]+c->r[0]; // 800F11B8
  c->r[0]=c->r[3]+0x0000006Cu; // 800F11BC
L_800F11C0:;
  W32(c->r[5]+0x00000080u,c->r[0]); // 800F11C0
  c->r[4]=c->r[4]+0x00000060u; // 800F11C4
  c->r[5]=c->r[5]+0x00000018u; // 800F11C8
  c->r[6]=c->r[6]+0x00000001u; // 800F11CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1128; } // 800F11D0
  c->r[29]=0u+0x00000000u; // 800F11D4
  c->r[6]=0u+0x00000001u; // 800F11D8
  c->r[0]=0u+0xFFFFFFBFu; // 800F11DC
  W8(c->r[30]+0x0000000Cu,c->r[29]); // 800F11E0
  c->r[3]=c->r[30]+0x00000702u; // 800F11E4
  c->r[4]=0u+0x00000000u; // 800F11E8
  W8(c->r[30]+0x0000000Eu,c->r[29]); // 800F11EC
  c->r[5]=0u+0x00000006u; // 800F11F0
  W8(c->r[30]+0x0000000Du,c->r[29]); // 800F11F4
  W8(c->r[30]+0x0000000Fu,c->r[29]); // 800F11F8
  W8(c->r[30]+0x00000010u,c->r[29]); // 800F11FC
  W8(c->r[30]+0x00000011u,c->r[29]); // 800F1200
  W8(c->r[30]+0x000006E7u,c->r[29]); // 800F1204
  W8(c->r[30]+0x000006E9u,c->r[29]); // 800F1208
  W8(c->r[30]+0x000006E8u,c->r[6]); // 800F120C
  W8(c->r[30]+0x000006EAu,c->r[29]); // 800F1210
  W8(c->r[30]+0x000006EBu,c->r[29]); // 800F1214
  W8(c->r[30]+0x00000708u,c->r[29]); // 800F1218
  W8(c->r[30]+0x0000070Au,c->r[29]); // 800F121C
  W8(c->r[30]+0x0000070Bu,c->r[0]); // 800F1220
  c->lr=0x800F1228u; f_80004714(c); // 800F1224
  c->r[3]=c->r[30]+0x000006FCu; // 800F1228
  c->r[4]=0u+0x00000000u; // 800F122C
  c->r[5]=0u+0x00000006u; // 800F1230
  c->lr=0x800F1238u; f_80004714(c); // 800F1234
  c->r[0]=0u+0x0000000Au; // 800F1238
  W16(c->r[30]+0x00000744u,c->r[29]); // 800F123C
  W16(c->r[30]+0x00000746u,c->r[0]); // 800F1240
  c->lr=0x800F1248u; f_8007FFF0(c); // 800F1244
  c->r[30]=c->r[31]+0x00000000u; // 800F1248
  c->r[28]=c->r[3]|c->r[3]; // 800F124C
  c->r[3]=c->r[30]+0x000000E4u; // 800F1250
  c->r[4]=0u+0x00000000u; // 800F1254
  c->r[5]=0u+0x000003C0u; // 800F1258
  c->lr=0x800F1260u; f_80004714(c); // 800F125C
  c->r[3]=c->r[30]+0x000004A4u; // 800F1260
  c->r[4]=0u+0x00000000u; // 800F1264
  c->r[5]=0u+0x00000240u; // 800F1268
  c->lr=0x800F1270u; f_80004714(c); // 800F126C
  W8(c->r[30]+0x00000012u,c->r[29]); // 800F1270
  c->r[3]=c->r[28]|c->r[28]; // 800F1274
  W8(c->r[30]+0x00000013u,c->r[29]); // 800F1278
  W8(c->r[30]+0x000006E4u,c->r[29]); // 800F127C
  W8(c->r[30]+0x000006E5u,c->r[29]); // 800F1280
  W8(c->r[30]+0x000006E6u,c->r[29]); // 800F1284
  c->lr=0x800F128Cu; f_80080030(c); // 800F1288
  c->r[11]=c->r[1]+0x00000030u; // 800F128C
  c->lr=0x800F1294u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F1290
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F1294
  c->lr=c->r[0]; // 800F1298
  c->r[1]=c->r[1]+0x00000030u; // 800F129C
  return; // 800F12A0
  unimpl(c,0x800F12A4u,"00000000"); // 800F12A4
  unimpl(c,0x800F12A8u,"00000000"); // 800F12A8
  unimpl(c,0x800F12ACu,"00000000"); // 800F12AC
  f_800F12B0(c);
}

// WUDInit
void f_800F12B0(Ctx* __restrict c) {
  trace_call(0x800F12B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F12B0
  c->r[0]=c->lr; // 800F12B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F12B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F12BC
  c->r[31]=0u+0x803A0000u; // 800F12C0
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F12C4
  c->r[0]=R32(c->r[13]+0xFFFFA098u); // 800F12C8
  cmps(c,0,(int32_t)c->r[0],0); // 800F12CC
  if (crb(c,2)) { goto L_800F12DC; } // 800F12D0
  c->r[3]=0u+0x00000000u; // 800F12D4
  goto L_800F13A0; // 800F12D8
L_800F12DC:;
  c->lr=0x800F12E0u; f_800F7380(c); // 800F12DC
  c->r[3]=R8(c->r[13]+0xFFFFA0A5u); // 800F12E0
  c->lr=0x800F12E8u; f_800F7E78(c); // 800F12E4
  c->r[3]=R8(c->r[13]+0xFFFFA0A5u); // 800F12E8
  c->lr=0x800F12F0u; f_80110790(c); // 800F12EC
  c->r[3]=R8(c->r[13]+0xFFFFA0A5u); // 800F12F0
  c->lr=0x800F12F8u; f_8011CFE0(c); // 800F12F4
  c->r[4]=0u+0x00000000u; // 800F12F8
  c->r[3]=0u+0x00000001u; // 800F12FC
  c->r[0]=0u+0x00000014u; // 800F1300
  W32(c->r[31]+0x00000000u,c->r[4]); // 800F1304
  W32(c->r[31]+0x00000004u,c->r[4]); // 800F1308
  W32(c->r[31]+0x00000008u,c->r[4]); // 800F130C
  W32(c->r[31]+0x000006F0u,c->r[4]); // 800F1310
  W32(c->r[31]+0x000006ECu,c->r[4]); // 800F1314
  W8(c->r[31]+0x00000010u,c->r[3]); // 800F1318
  W8(c->r[31]+0x00000748u,c->r[0]); // 800F131C
  c->lr=0x800F1324u; f_800D9DB0(c); // 800F1320
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800F1324
  cmps(c,0,(int32_t)c->r[0],0); // 800F1328
  if (crb(c,2)) { goto L_800F1344; } // 800F132C
  c->r[12]=R32(c->r[13]+0xFFFFA0ACu); // 800F1330
  cmps(c,0,(int32_t)c->r[12],0); // 800F1334
  if (crb(c,2)) { goto L_800F1344; } // 800F1338
  c->ctr=c->r[12]; // 800F133C
  if (true) { c->lr=0x800F1344u; dispatch(c,c->ctr); } // 800F1340
L_800F1344:;
  c->r[3]=c->r[31]+0x00000710u; // 800F1344
  c->lr=0x800F134Cu; f_8007A8C0(c); // 800F1348
  c->lr=0x800F1350u; f_80084380(c); // 800F134C
  c->r[5]=0u+0x80000000u; // 800F1350
  c->r[9]=0u+0x800F0000u; // 800F1354
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F1358
  c->r[6]=0u+0x10620000u; // 800F135C
  c->r[5]=c->r[3]|c->r[3]; // 800F1360
  c->r[9]=c->r[9]+0x00000E00u; // 800F1364
  c->r[3]=c->r[6]+0x00004DD3u; // 800F1368
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F136C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F1370
  c->r[6]=c->r[4]|c->r[4]; // 800F1374
  c->r[3]=c->r[31]+0x00000710u; // 800F1378
  c->r[7]=0u+0x00000000u; // 800F137C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F1380
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800F1384
  c->lr=0x800F138Cu; f_8007AB90(c); // 800F1388
  c->r[3]=0u+0x00000001u; // 800F138C
  c->r[0]=0u+0x00000000u; // 800F1390
  W32(c->r[13]+0xFFFFA098u,c->r[3]); // 800F1394
  c->r[3]=0u+0x00000001u; // 800F1398
  W8(c->r[13]+0xFFFFA0CCu,c->r[0]); // 800F139C
L_800F13A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F13A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F13A4
  c->lr=c->r[0]; // 800F13A8
  c->r[1]=c->r[1]+0x00000010u; // 800F13AC
  return; // 800F13B0
  unimpl(c,0x800F13B4u,"00000000"); // 800F13B4
  unimpl(c,0x800F13B8u,"00000000"); // 800F13B8
  unimpl(c,0x800F13BCu,"00000000"); // 800F13BC
  f_800F13C0(c);
}

// WUDRegisterAllocator
void f_800F13C0(Ctx* __restrict c) {
  trace_call(0x800F13C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F13C0
  c->r[0]=c->lr; // 800F13C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F13C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F13CC
  c->r[31]=c->r[4]|c->r[4]; // 800F13D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F13D4
  c->r[30]=c->r[3]|c->r[3]; // 800F13D8
  c->lr=0x800F13E0u; f_8007FFF0(c); // 800F13DC
  c->r[4]=0u+0x803A0000u; // 800F13E0
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F13E4
  W32(c->r[4]+0x000006F4u,c->r[30]); // 800F13E8
  W32(c->r[4]+0x000006F8u,c->r[31]); // 800F13EC
  c->lr=0x800F13F4u; f_80080030(c); // 800F13F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F13F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F13F8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F13FC
  c->lr=c->r[0]; // 800F1400
  c->r[1]=c->r[1]+0x00000010u; // 800F1404
  return; // 800F1408
  unimpl(c,0x800F140Cu,"00000000"); // 800F140C
  f_800F1410(c);
}

// fn_800F1410
void f_800F1410(Ctx* __restrict c) {
  trace_call(0x800F1410u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1410
  c->r[0]=c->lr; // 800F1414
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1418
  c->r[11]=c->r[1]+0x00000030u; // 800F141C
  c->lr=0x800F1424u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1420
  c->r[26]=0u+0x803A0000u; // 800F1424
  c->r[29]=c->r[3]|c->r[3]; // 800F1428
  c->r[26]=c->r[26]+0xFFFFB7C0u; // 800F142C
  c->r[31]=c->r[26]+0x00000000u; // 800F1430
  c->lr=0x800F1438u; f_8007FFF0(c); // 800F1434
  c->r[30]=c->r[3]|c->r[3]; // 800F1438
  c->lr=0x800F1440u; f_8007FFF0(c); // 800F143C
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800F1440
  cmps(c,0,(int32_t)c->r[0],0); // 800F1444
  if (!crb(c,2)) { goto L_800F147C; } // 800F1448
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800F144C
  cmps(c,0,(int32_t)c->r[0],0); // 800F1450
  if (!crb(c,2)) { goto L_800F147C; } // 800F1454
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 800F1458
  cmpu(c,0,c->r[0],0x00000004u); // 800F145C
  if (!crb(c,2)) { goto L_800F147C; } // 800F1460
  c->r[0]=R8(c->r[31]+0x00000010u); // 800F1464
  cmpu(c,0,c->r[0],0x00000007u); // 800F1468
  if (!crb(c,2)) { goto L_800F147C; } // 800F146C
  c->lr=0x800F1474u; f_80080030(c); // 800F1470
  c->r[0]=0u+0x00000000u; // 800F1474
  goto L_800F1484; // 800F1478
L_800F147C:;
  c->lr=0x800F1480u; f_80080030(c); // 800F147C
  c->r[0]=0u+0x00000001u; // 800F1480
L_800F1484:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F1484
  if (crb(c,2)) { goto L_800F1494; } // 800F1488
  c->r[3]=c->r[31]+0x00000710u; // 800F148C
  c->lr=0x800F1494u; f_8007AC20(c); // 800F1490
L_800F1494:;
  c->r[27]=c->r[26]+0x000008B8u; // 800F1494
  c->r[4]=0u+0x00000000u; // 800F1498
  c->r[3]=c->r[27]+0x00000001u; // 800F149C
  c->r[5]=0u+0x000002BCu; // 800F14A0
  c->lr=0x800F14A8u; f_80004714(c); // 800F14A4
  c->r[3]=c->r[26]+0x00000000u; // 800F14A8
  c->r[25]=c->r[27]+0x00000001u; // 800F14AC
  c->r[28]=R32(c->r[3]+0x00000064u); // 800F14B0
  c->r[27]=c->r[27]+0x00000007u; // 800F14B4
  goto L_800F14EC; // 800F14B8
L_800F14BC:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 800F14BC
  c->r[3]=c->r[25]|c->r[25]; // 800F14C0
  c->r[5]=0u+0x00000006u; // 800F14C4
  c->r[4]=c->r[4]+0x00000040u; // 800F14C8
  c->lr=0x800F14D0u; f_800043C4(c); // 800F14CC
  c->r[4]=R32(c->r[28]+0x00000000u); // 800F14D0
  c->r[3]=c->r[27]|c->r[27]; // 800F14D4
  c->r[5]=0u+0x00000040u; // 800F14D8
  c->lr=0x800F14E0u; f_800043C4(c); // 800F14DC
  c->r[28]=R32(c->r[28]+0x00000008u); // 800F14E0
  c->r[25]=c->r[25]+0x00000046u; // 800F14E4
  c->r[27]=c->r[27]+0x00000046u; // 800F14E8
L_800F14EC:;
  cmps(c,0,(int32_t)c->r[28],0); // 800F14EC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F14BC; } // 800F14F0
  c->lr=0x800F14F8u; f_8007FFF0(c); // 800F14F4
  c->r[27]=c->r[26]+0x00000000u; // 800F14F8
  c->r[25]=R8(c->r[27]+0x00000012u); // 800F14FC
  c->lr=0x800F1504u; f_80080030(c); // 800F1500
  c->r[28]=c->r[26]+0x00001F60u; // 800F1504
  W8(c->r[26]+0x000008B8u,c->r[25]); // 800F1508
  c->r[3]=c->r[28]+0x00000001u; // 800F150C
  c->r[4]=0u+0x00000000u; // 800F1510
  c->r[5]=0u+0x00000204u; // 800F1514
  c->lr=0x800F151Cu; f_80004714(c); // 800F1518
  cmps(c,0,(int32_t)c->r[29],0); // 800F151C
  if (crb(c,2)) { goto L_800F15A0; } // 800F1520
  c->r[29]=R32(c->r[27]+0x00000014u); // 800F1524
  c->r[25]=c->r[28]+0x00000001u; // 800F1528
  c->r[27]=c->r[28]+0x00000007u; // 800F152C
  c->r[28]=c->r[28]+0x00000047u; // 800F1530
  goto L_800F1580; // 800F1534
L_800F1538:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 800F1538
  c->r[3]=c->r[25]|c->r[25]; // 800F153C
  c->r[5]=0u+0x00000006u; // 800F1540
  c->r[4]=c->r[4]+0x00000040u; // 800F1544
  c->lr=0x800F154Cu; f_800043C4(c); // 800F1548
  c->r[4]=R32(c->r[29]+0x00000000u); // 800F154C
  c->r[3]=c->r[27]|c->r[27]; // 800F1550
  c->r[5]=0u+0x00000040u; // 800F1554
  c->lr=0x800F155Cu; f_800043C4(c); // 800F1558
  c->r[4]=R32(c->r[29]+0x00000000u); // 800F155C
  c->r[3]=c->r[28]|c->r[28]; // 800F1560
  c->r[5]=0u+0x00000010u; // 800F1564
  c->r[4]=c->r[4]+0x00000046u; // 800F1568
  c->lr=0x800F1570u; f_800043C4(c); // 800F156C
  c->r[29]=R32(c->r[29]+0x00000008u); // 800F1570
  c->r[25]=c->r[25]+0x00000056u; // 800F1574
  c->r[27]=c->r[27]+0x00000056u; // 800F1578
  c->r[28]=c->r[28]+0x00000056u; // 800F157C
L_800F1580:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F1580
  if (!crb(c,2)) { IRQCHK(c); goto L_800F1538; } // 800F1584
  c->lr=0x800F158Cu; f_8007FFF0(c); // 800F1588
  c->r[4]=c->r[26]+0x00000000u; // 800F158C
  c->r[25]=R8(c->r[4]+0x00000013u); // 800F1590
  c->lr=0x800F1598u; f_80080030(c); // 800F1594
  W8(c->r[26]+0x00001F60u,c->r[25]); // 800F1598
  goto L_800F15A8; // 800F159C
L_800F15A0:;
  c->r[0]=0u+0x00000000u; // 800F15A0
  W8(c->r[26]+0x00001F60u,c->r[0]); // 800F15A4
L_800F15A8:;
  c->r[0]=0u+0x00000001u; // 800F15A8
  W8(c->r[31]+0x00000011u,c->r[0]); // 800F15AC
  c->r[3]=c->r[31]+0x00000710u; // 800F15B0
  c->lr=0x800F15B8u; f_8007A8C0(c); // 800F15B4
  c->lr=0x800F15BCu; f_80084380(c); // 800F15B8
  c->r[5]=0u+0x80000000u; // 800F15BC
  c->r[9]=0u+0x800F0000u; // 800F15C0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F15C4
  c->r[6]=0u+0x10620000u; // 800F15C8
  c->r[5]=c->r[3]|c->r[3]; // 800F15CC
  c->r[9]=c->r[9]+0x00000F00u; // 800F15D0
  c->r[3]=c->r[6]+0x00004DD3u; // 800F15D4
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F15D8
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F15DC
  c->r[6]=c->r[4]|c->r[4]; // 800F15E0
  c->r[3]=c->r[31]+0x00000710u; // 800F15E4
  c->r[7]=0u+0x00000000u; // 800F15E8
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F15EC
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800F15F0
  c->lr=0x800F15F8u; f_8007AB90(c); // 800F15F4
  c->r[0]=0u+0x00000004u; // 800F15F8
  W8(c->r[31]+0x00000708u,c->r[0]); // 800F15FC
  c->r[3]=c->r[30]|c->r[30]; // 800F1600
  c->lr=0x800F1608u; f_80080030(c); // 800F1604
  c->r[11]=c->r[1]+0x00000030u; // 800F1608
  c->lr=0x800F1610u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F160C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F1610
  c->lr=c->r[0]; // 800F1614
  c->r[1]=c->r[1]+0x00000030u; // 800F1618
  return; // 800F161C
}

// WUDGetStatus
void f_800F1620(Ctx* __restrict c) {
  trace_call(0x800F1620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1620
  c->r[0]=c->lr; // 800F1624
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1628
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F162C
  c->lr=0x800F1634u; f_8007FFF0(c); // 800F1630
  c->r[4]=0u+0x803A0000u; // 800F1634
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F1638
  c->r[31]=R8(c->r[4]+0x00000708u); // 800F163C
  c->lr=0x800F1644u; f_80080030(c); // 800F1640
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 800F1644
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1648
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F164C
  c->lr=c->r[0]; // 800F1650
  c->r[1]=c->r[1]+0x00000010u; // 800F1654
  return; // 800F1658
  unimpl(c,0x800F165Cu,"00000000"); // 800F165C
  f_800F1660(c);
}

// WUDGetBufferStatus
void f_800F1660(Ctx* __restrict c) {
  trace_call(0x800F1660u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1660
  c->r[0]=c->lr; // 800F1664
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1668
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F166C
  c->lr=0x800F1674u; f_8007FFF0(c); // 800F1670
  c->r[5]=0u+0x803A0000u; // 800F1674
  c->r[5]=c->r[5]+0xFFFFB7C0u; // 800F1678
  c->r[4]=R16(c->r[5]+0x00000744u); // 800F167C
  c->r[0]=R16(c->r[5]+0x00000746u); // 800F1680
  c->r[0]=c->r[0]-c->r[4]; // 800F1684
  c->r[31]=rotl(c->r[0],0)&0x000000FFu; // 800F1688
  c->lr=0x800F1690u; f_80080030(c); // 800F168C
  c->r[3]=c->r[31]|c->r[31]; // 800F1690
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1694
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1698
  c->lr=c->r[0]; // 800F169C
  c->r[1]=c->r[1]+0x00000010u; // 800F16A0
  return; // 800F16A4
  unimpl(c,0x800F16A8u,"00000000"); // 800F16A8
  unimpl(c,0x800F16ACu,"00000000"); // 800F16AC
  f_800F16B0(c);
}

// WUDSetSniffMode
void f_800F16B0(Ctx* __restrict c) {
  trace_call(0x800F16B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F16B0
  c->r[0]=c->lr; // 800F16B4
  cmps(c,0,(int32_t)c->r[4],0); // 800F16B8
  c->r[7]=0u+0x803A0000u; // 800F16BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F16C0
  c->r[8]=c->r[3]|c->r[3]; // 800F16C4
  c->r[7]=c->r[7]+0xFFFFB7C0u; // 800F16C8
  if (!crb(c,1)) { goto L_800F16DC; } // 800F16CC
  c->r[0]=0u+0x00000002u; // 800F16D0
  W8(c->r[1]+0x00000010u,c->r[0]); // 800F16D4
  goto L_800F16E4; // 800F16D8
L_800F16DC:;
  c->r[0]=0u+0x00000000u; // 800F16DC
  W8(c->r[1]+0x00000010u,c->r[0]); // 800F16E0
L_800F16E4:;
  c->r[6]=0u+0x00000001u; // 800F16E4
  c->r[0]=0u+0x00000000u; // 800F16E8
  W16(c->r[1]+0x00000008u,c->r[4]); // 800F16EC
  c->r[5]=c->r[1]+0x00000008u; // 800F16F0
  c->r[3]=R8(c->r[7]+0x0000070Au); // 800F16F4
  W16(c->r[1]+0x0000000Au,c->r[4]); // 800F16F8
  c->r[4]=c->r[8]|c->r[8]; // 800F16FC
  W16(c->r[1]+0x0000000Cu,c->r[6]); // 800F1700
  W16(c->r[1]+0x0000000Eu,c->r[0]); // 800F1704
  c->lr=0x800F170Cu; f_8010325C(c); // 800F1708
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F170C
  c->lr=c->r[0]; // 800F1710
  c->r[1]=c->r[1]+0x00000020u; // 800F1714
  return; // 800F1718
  unimpl(c,0x800F171Cu,"00000000"); // 800F171C
  f_800F1720(c);
}

// WUDSetSyncSimpleCallback
void f_800F1720(Ctx* __restrict c) {
  trace_call(0x800F1720u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1720
  c->r[0]=c->lr; // 800F1724
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1728
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F172C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1730
  c->r[30]=c->r[3]|c->r[3]; // 800F1734
  c->lr=0x800F173Cu; f_8007FFF0(c); // 800F1738
  c->r[4]=0u+0x803A0000u; // 800F173C
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F1740
  c->r[31]=R32(c->r[4]+0x00000004u); // 800F1744
  W32(c->r[4]+0x00000004u,c->r[30]); // 800F1748
  c->lr=0x800F1750u; f_80080030(c); // 800F174C
  c->r[3]=c->r[31]|c->r[31]; // 800F1750
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1754
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1758
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F175C
  c->lr=c->r[0]; // 800F1760
  c->r[1]=c->r[1]+0x00000010u; // 800F1764
  return; // 800F1768
  unimpl(c,0x800F176Cu,"00000000"); // 800F176C
  f_800F1770(c);
}

// fn_800F1770
void f_800F1770(Ctx* __restrict c) {
  trace_call(0x800F1770u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1770
  c->r[0]=c->lr; // 800F1774
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F1778
  c->r[11]=c->r[1]+0x00000030u; // 800F177C
  c->lr=0x800F1784u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F1780
  c->r[31]=0u+0x803A0000u; // 800F1784
  c->r[28]=c->r[3]|c->r[3]; // 800F1788
  c->r[29]=c->r[4]|c->r[4]; // 800F178C
  c->r[30]=c->r[5]|c->r[5]; // 800F1790
  c->r[25]=c->r[6]|c->r[6]; // 800F1794
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F1798
  c->r[27]=0u+0x00000000u; // 800F179C
  c->lr=0x800F17A4u; f_8007FFF0(c); // 800F17A0
  c->r[26]=R8(c->r[31]+0x00000708u); // 800F17A4
  c->r[26]=(uint32_t)(int32_t)(int8_t)c->r[26]; // 800F17A8
  c->lr=0x800F17B0u; f_80080030(c); // 800F17AC
  cmpu(c,0,c->r[26],0x00000003u); // 800F17B0
  if (!crb(c,2)) { goto L_800F18A0; } // 800F17B4
  c->lr=0x800F17BCu; f_8007FFF0(c); // 800F17B8
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800F17BC
  cmps(c,0,(int32_t)c->r[0],0); // 800F17C0
  if (!crb(c,2)) { goto L_800F17F8; } // 800F17C4
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800F17C8
  cmps(c,0,(int32_t)c->r[0],0); // 800F17CC
  if (!crb(c,2)) { goto L_800F17F8; } // 800F17D0
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 800F17D4
  cmpu(c,0,c->r[0],0x00000004u); // 800F17D8
  if (!crb(c,2)) { goto L_800F17F8; } // 800F17DC
  c->r[0]=R8(c->r[31]+0x00000010u); // 800F17E0
  cmpu(c,0,c->r[0],0x00000007u); // 800F17E4
  if (!crb(c,2)) { goto L_800F17F8; } // 800F17E8
  c->lr=0x800F17F0u; f_80080030(c); // 800F17EC
  c->r[0]=0u+0x00000000u; // 800F17F0
  goto L_800F1800; // 800F17F4
L_800F17F8:;
  c->lr=0x800F17FCu; f_80080030(c); // 800F17F8
  c->r[0]=0u+0x00000001u; // 800F17FC
L_800F1800:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F1800
  if (!crb(c,2)) { goto L_800F18A0; } // 800F1804
  c->lr=0x800F180Cu; f_8007FFF0(c); // 800F1808
  c->r[0]=0u-c->r[25]; // 800F180C
  c->r[7]=0u+0x00000001u; // 800F1810
  c->r[0]=c->r[0]|c->r[25]; // 800F1814
  c->r[5]=0u+0x00000000u; // 800F1818
  c->r[6]=rotl(c->r[0],1)&0x00000001u; // 800F181C
  c->r[4]=0u+0x00000032u; // 800F1820
  c->r[0]=0u+0x000000C8u; // 800F1824
  c->r[27]=c->r[3]|c->r[3]; // 800F1828
  W8(c->r[13]+0xFFFFA0CDu,c->r[30]); // 800F182C
  c->r[3]=c->r[31]+0x00000710u; // 800F1830
  W8(c->r[31]+0x0000000Cu,c->r[7]); // 800F1834
  W8(c->r[31]+0x000006E8u,c->r[29]); // 800F1838
  W8(c->r[31]+0x000006E9u,c->r[28]); // 800F183C
  W8(c->r[31]+0x000006E7u,c->r[6]); // 800F1840
  W8(c->r[31]+0x000006E6u,c->r[5]); // 800F1844
  W8(c->r[31]+0x00000749u,c->r[4]); // 800F1848
  W16(c->r[31]+0x0000074Au,c->r[0]); // 800F184C
  c->lr=0x800F1854u; f_8007A8C0(c); // 800F1850
  c->lr=0x800F1858u; f_80084380(c); // 800F1854
  c->r[5]=0u+0x80000000u; // 800F1858
  c->r[9]=0u+0x800F0000u; // 800F185C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F1860
  c->r[6]=0u+0x10620000u; // 800F1864
  c->r[5]=c->r[3]|c->r[3]; // 800F1868
  c->r[9]=c->r[9]+0xFFFFFA30u; // 800F186C
  c->r[3]=c->r[6]+0x00004DD3u; // 800F1870
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F1874
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F1878
  c->r[6]=c->r[4]|c->r[4]; // 800F187C
  c->r[3]=c->r[31]+0x00000710u; // 800F1880
  c->r[7]=0u+0x00000000u; // 800F1884
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F1888
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800F188C
  c->lr=0x800F1894u; f_8007AB90(c); // 800F1890
  c->r[3]=c->r[27]|c->r[27]; // 800F1894
  c->lr=0x800F189Cu; f_80080030(c); // 800F1898
  c->r[27]=0u+0x00000001u; // 800F189C
L_800F18A0:;
  c->r[11]=c->r[1]+0x00000030u; // 800F18A0
  c->r[3]=c->r[27]|c->r[27]; // 800F18A4
  c->lr=0x800F18ACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F18A8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F18AC
  c->lr=c->r[0]; // 800F18B0
  c->r[1]=c->r[1]+0x00000030u; // 800F18B4
  return; // 800F18B8
  unimpl(c,0x800F18BCu,"00000000"); // 800F18BC
  f_800F18C0(c);
}

// WUDStartFastSyncSimple
void f_800F18C0(Ctx* __restrict c) {
  trace_call(0x800F18C0u);
  c->r[3]=0u+0x00000001u; // 800F18C0
  c->r[4]=0u+0xFFFFFFFFu; // 800F18C4
  c->r[5]=0u+0x00000000u; // 800F18C8
  c->r[6]=0u+0x00000001u; // 800F18CC
  f_800F1770(c); return; // 800F18D0
  unimpl(c,0x800F18D4u,"00000000"); // 800F18D4
  unimpl(c,0x800F18D8u,"00000000"); // 800F18D8
  unimpl(c,0x800F18DCu,"00000000"); // 800F18DC
  f_800F18E0(c);
}

// WUDCancelSyncDevice
void f_800F18E0(Ctx* __restrict c) {
  trace_call(0x800F18E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F18E0
  c->r[0]=c->lr; // 800F18E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F18E8
  c->r[0]=0u+0x00000001u; // 800F18EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F18F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F18F4
  c->r[30]=0u+0x00000000u; // 800F18F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F18FC
  c->r[29]=0u+0x803A0000u; // 800F1900
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F1904
  W32(c->r[13]+0xFFFFA0A0u,c->r[0]); // 800F1908
  c->lr=0x800F1910u; f_8007FFF0(c); // 800F190C
  c->r[0]=R8(c->r[29]+0x00000708u); // 800F1910
  c->r[31]=c->r[3]|c->r[3]; // 800F1914
  cmps(c,0,(int32_t)c->r[0],3); // 800F1918
  if (!crb(c,2)) { goto L_800F1948; } // 800F191C
  c->r[0]=R8(c->r[29]+0x000006E8u); // 800F1920
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F1924
  if (crb(c,2)) { goto L_800F1944; } // 800F1928
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800F192C
  cmpu(c,0,c->r[0],0x00000003u); // 800F1930
  if (!crb(c,2)) { goto L_800F193C; } // 800F1934
  c->lr=0x800F193Cu; f_800FA618(c); // 800F1938
L_800F193C:;
  c->r[0]=0u+0x00000000u; // 800F193C
  W8(c->r[29]+0x000006E8u,c->r[0]); // 800F1940
L_800F1944:;
  c->r[30]=0u+0x00000001u; // 800F1944
L_800F1948:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1948
  c->lr=0x800F1950u; f_80080030(c); // 800F194C
  c->r[3]=c->r[30]|c->r[30]; // 800F1950
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1954
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1958
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F195C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1960
  c->lr=c->r[0]; // 800F1964
  c->r[1]=c->r[1]+0x00000020u; // 800F1968
  return; // 800F196C
}

// WUDStopSyncSimple
void f_800F1970(Ctx* __restrict c) {
  trace_call(0x800F1970u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1970
  c->r[0]=c->lr; // 800F1974
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1978
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F197C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1980
  c->r[30]=0u+0x00000000u; // 800F1984
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1988
  c->r[29]=0u+0x803A0000u; // 800F198C
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F1990
  c->lr=0x800F1998u; f_8007FFF0(c); // 800F1994
  c->r[0]=R8(c->r[29]+0x00000708u); // 800F1998
  c->r[31]=c->r[3]|c->r[3]; // 800F199C
  cmps(c,0,(int32_t)c->r[0],3); // 800F19A0
  if (!crb(c,2)) { goto L_800F19D0; } // 800F19A4
  c->r[0]=R8(c->r[29]+0x000006E8u); // 800F19A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F19AC
  if (crb(c,2)) { goto L_800F19CC; } // 800F19B0
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800F19B4
  cmpu(c,0,c->r[0],0x00000003u); // 800F19B8
  if (!crb(c,2)) { goto L_800F19C4; } // 800F19BC
  c->lr=0x800F19C4u; f_800FA618(c); // 800F19C0
L_800F19C4:;
  c->r[0]=0u+0x00000000u; // 800F19C4
  W8(c->r[29]+0x000006E8u,c->r[0]); // 800F19C8
L_800F19CC:;
  c->r[30]=0u+0x00000001u; // 800F19CC
L_800F19D0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F19D0
  c->lr=0x800F19D8u; f_80080030(c); // 800F19D4
  c->r[3]=c->r[30]|c->r[30]; // 800F19D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F19DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F19E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F19E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F19E8
  c->lr=c->r[0]; // 800F19EC
  c->r[1]=c->r[1]+0x00000020u; // 800F19F0
  return; // 800F19F4
  unimpl(c,0x800F19F8u,"00000000"); // 800F19F8
  unimpl(c,0x800F19FCu,"00000000"); // 800F19FC
  f_800F1A00(c);
}

// fn_800F1A00
void f_800F1A00(Ctx* __restrict c) {
  trace_call(0x800F1A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1A00
  c->r[0]=c->lr; // 800F1A04
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F1A08
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F1A0C
  cmpu(c,0,c->r[0],0x0000000Du); // 800F1A10
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F1A14
  c->r[31]=0u+0x00000000u; // 800F1A18
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F1A1C
  c->r[30]=0u+0x803A0000u; // 800F1A20
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F1A24
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F1A28
  c->r[29]=c->r[3]|c->r[3]; // 800F1A2C
  if (!crb(c,1)) { goto L_800F1A3C; } // 800F1A30
  c->r[3]=0u+0x00000000u; // 800F1A34
  goto L_800F1AA4; // 800F1A38
L_800F1A3C:;
  c->lr=0x800F1A40u; f_8007FFF0(c); // 800F1A3C
  c->r[30]=R8(c->r[30]+0x00000708u); // 800F1A40
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 800F1A44
  c->lr=0x800F1A4Cu; f_80080030(c); // 800F1A48
  cmpu(c,0,c->r[30],0x00000003u); // 800F1A4C
  if (!crb(c,2)) { goto L_800F1AA0; } // 800F1A50
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[29]; cr0(c,c->r[3]); // 800F1A54
  if (!crb(c,2)) { goto L_800F1A68; } // 800F1A58
  c->r[0]=0u+0x000000FFu; // 800F1A5C
  c->r[4]=0u+0x000000FFu; // 800F1A60
  goto L_800F1A90; // 800F1A64
L_800F1A68:;
  c->r[3]=c->r[3]+0x00000001u; // 800F1A68
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800F1A6C
  c->r[3]=c->r[0]+c->r[3]; // 800F1A70
  c->r[0]=addc(c,c->r[3],0xFFFFFFF2u,0); cr0(c,c->r[0]); // 800F1A74
  c->r[4]=c->r[3]+0x0000000Eu; // 800F1A78
  if (!crb(c,0)) { goto L_800F1A84; } // 800F1A7C
  c->r[0]=0u+0x00000000u; // 800F1A80
L_800F1A84:;
  cmps(c,0,(int32_t)c->r[4],78); // 800F1A84
  if (!crb(c,1)) { goto L_800F1A90; } // 800F1A88
  c->r[4]=0u+0x0000004Eu; // 800F1A8C
L_800F1A90:;
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800F1A90
  c->r[4]=rotl(c->r[4],0)&0x000000FFu; // 800F1A94
  c->lr=0x800F1A9Cu; f_800FFEA0(c); // 800F1A98
  c->r[31]=0u+0x00000001u; // 800F1A9C
L_800F1AA0:;
  c->r[3]=c->r[31]|c->r[31]; // 800F1AA0
L_800F1AA4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F1AA4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F1AA8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F1AAC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F1AB0
  c->lr=c->r[0]; // 800F1AB4
  c->r[1]=c->r[1]+0x00000020u; // 800F1AB8
  return; // 800F1ABC
}

// WUDSetHidRecvCallback
void f_800F1AC0(Ctx* __restrict c) {
  trace_call(0x800F1AC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1AC0
  c->r[0]=c->lr; // 800F1AC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1AC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1ACC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1AD0
  c->r[30]=c->r[3]|c->r[3]; // 800F1AD4
  c->lr=0x800F1ADCu; f_8007FFF0(c); // 800F1AD8
  c->r[4]=0u+0x803A0000u; // 800F1ADC
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F1AE0
  c->r[31]=R32(c->r[4]+0x000006ECu); // 800F1AE4
  W32(c->r[4]+0x000006ECu,c->r[30]); // 800F1AE8
  c->lr=0x800F1AF0u; f_80080030(c); // 800F1AEC
  c->r[3]=c->r[31]|c->r[31]; // 800F1AF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1AF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1AF8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1AFC
  c->lr=c->r[0]; // 800F1B00
  c->r[1]=c->r[1]+0x00000010u; // 800F1B04
  return; // 800F1B08
  unimpl(c,0x800F1B0Cu,"00000000"); // 800F1B0C
  f_800F1B10(c);
}

// WUDSetHidConnCallback
void f_800F1B10(Ctx* __restrict c) {
  trace_call(0x800F1B10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B10
  c->r[0]=c->lr; // 800F1B14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1B1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1B20
  c->r[30]=c->r[3]|c->r[3]; // 800F1B24
  c->lr=0x800F1B2Cu; f_8007FFF0(c); // 800F1B28
  c->r[4]=0u+0x803A0000u; // 800F1B2C
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F1B30
  c->r[31]=R32(c->r[4]+0x000006F0u); // 800F1B34
  W32(c->r[4]+0x000006F0u,c->r[30]); // 800F1B38
  c->lr=0x800F1B40u; f_80080030(c); // 800F1B3C
  c->r[3]=c->r[31]|c->r[31]; // 800F1B40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1B44
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1B48
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1B4C
  c->lr=c->r[0]; // 800F1B50
  c->r[1]=c->r[1]+0x00000010u; // 800F1B54
  return; // 800F1B58
  unimpl(c,0x800F1B5Cu,"00000000"); // 800F1B5C
  f_800F1B60(c);
}

// WUDSetVisibility
void f_800F1B60(Ctx* __restrict c) {
  trace_call(0x800F1B60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1B60
  c->r[0]=c->lr; // 800F1B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F1B68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F1B6C
  c->r[31]=c->r[4]|c->r[4]; // 800F1B70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F1B74
  c->r[30]=c->r[3]|c->r[3]; // 800F1B78
  c->lr=0x800F1B80u; f_8007FFF0(c); // 800F1B7C
  c->r[4]=0u+0x803A0000u; // 800F1B80
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F1B84
  W8(c->r[4]+0x000006EBu,c->r[30]); // 800F1B88
  W8(c->r[4]+0x000006EAu,c->r[31]); // 800F1B8C
  c->lr=0x800F1B94u; f_80080030(c); // 800F1B90
  c->r[3]=c->r[30]|c->r[30]; // 800F1B94
  c->r[4]=c->r[31]|c->r[31]; // 800F1B98
  c->lr=0x800F1BA0u; f_800FA53C(c); // 800F1B9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F1BA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F1BA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F1BA8
  c->lr=c->r[0]; // 800F1BAC
  c->r[1]=c->r[1]+0x00000010u; // 800F1BB0
  return; // 800F1BB4
  unimpl(c,0x800F1BB8u,"00000000"); // 800F1BB8
  unimpl(c,0x800F1BBCu,"00000000"); // 800F1BBC
  f_800F1BC0(c);
}

// fn_800F1BC0
void f_800F1BC0(Ctx* __restrict c) {
  trace_call(0x800F1BC0u);
  f_800F2070(c); return; // 800F1BC0
  unimpl(c,0x800F1BC4u,"00000000"); // 800F1BC4
  unimpl(c,0x800F1BC8u,"00000000"); // 800F1BC8
  unimpl(c,0x800F1BCCu,"00000000"); // 800F1BCC
  f_800F1BD0(c);
}

// fn_800F1BD0
void f_800F1BD0(Ctx* __restrict c) {
  trace_call(0x800F1BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1BD0
  c->r[0]=c->lr; // 800F1BD4
  W32(c->r[1]+0x00000114u,c->r[0]); // 800F1BD8
  W32(c->r[1]+0x0000010Cu,c->r[31]); // 800F1BDC
  W32(c->r[1]+0x00000108u,c->r[30]); // 800F1BE0
  c->r[5]=R8(c->r[13]+0xFFFFA0BDu); // 800F1BE4
  c->r[0]=R8(c->r[13]+0xFFFFA0BEu); // 800F1BE8
  cmpu(c,0,c->r[0],c->r[5]); // 800F1BEC
  if (!crb(c,2)) { goto L_800F1BFC; } // 800F1BF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F1BF4
  if (!crb(c,2)) { goto L_800F1C04; } // 800F1BF8
L_800F1BFC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F1BFC
  if (!crb(c,2)) { goto L_800F1C14; } // 800F1C00
L_800F1C04:;
  c->r[3]=0u+0x800F0000u; // 800F1C04
  c->r[3]=c->r[3]+0x00001BC0u; // 800F1C08
  c->lr=0x800F1C10u; f_800FFD40(c); // 800F1C0C
  goto L_800F1C84; // 800F1C10
L_800F1C14:;
  c->r[3]=c->r[0]-c->r[5]; // 800F1C14
  c->r[0]=0u+0x00000013u; // 800F1C18
  cmps(c,0,(int32_t)c->r[3],19); // 800F1C1C
  if (!crb(c,0)) { goto L_800F1C28; } // 800F1C20
  c->r[0]=c->r[3]|c->r[3]; // 800F1C24
L_800F1C28:;
  c->r[31]=rotl(c->r[0],0)&0x000000FFu; // 800F1C28
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F1C2C
  c->r[4]=0u+0x80330000u; // 800F1C30
  c->r[3]=c->r[1]+0x00000009u; // 800F1C34
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)13); // 800F1C38
  c->r[4]=c->r[4]+0xFFFF99B4u; // 800F1C3C
  c->r[30]=(uint32_t)((int32_t)c->r[31]*(int32_t)13); // 800F1C40
  c->r[4]=c->r[4]+c->r[0]; // 800F1C44
  c->r[5]=c->r[30]|c->r[30]; // 800F1C48
  c->r[4]=c->r[4]+0x00000001u; // 800F1C4C
  c->lr=0x800F1C54u; f_800043C4(c); // 800F1C50
  c->r[4]=R8(c->r[13]+0xFFFFA0BDu); // 800F1C54
  c->r[3]=0u+0x00010000u; // 800F1C58
  c->r[3]=c->r[3]+0xFFFFFC4Fu; // 800F1C5C
  c->r[6]=0u+0x800F0000u; // 800F1C60
  c->r[4]=c->r[4]+c->r[31]; // 800F1C64
  c->r[0]=c->r[30]+0x00000001u; // 800F1C68
  W8(c->r[13]+0xFFFFA0BDu,c->r[4]); // 800F1C6C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F1C70
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F1C74
  c->r[5]=c->r[1]+0x00000008u; // 800F1C78
  c->r[6]=c->r[6]+0x00001BD0u; // 800F1C7C
  c->lr=0x800F1C84u; f_80100D3C(c); // 800F1C80
L_800F1C84:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 800F1C84
  c->r[31]=R32(c->r[1]+0x0000010Cu); // 800F1C88
  c->r[30]=R32(c->r[1]+0x00000108u); // 800F1C8C
  c->lr=c->r[0]; // 800F1C90
  c->r[1]=c->r[1]+0x00000110u; // 800F1C94
  return; // 800F1C98
  unimpl(c,0x800F1C9Cu,"00000000"); // 800F1C9C
  f_800F1CA0(c);
}

// fn_800F1CA0
void f_800F1CA0(Ctx* __restrict c) {
  trace_call(0x800F1CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFDF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1CA0
  c->r[0]=c->lr; // 800F1CA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F1CA8
  W32(c->r[1]+0x00000214u,c->r[0]); // 800F1CAC
  W32(c->r[1]+0x0000020Cu,c->r[31]); // 800F1CB0
  W32(c->r[1]+0x00000208u,c->r[30]); // 800F1CB4
  if (crb(c,2)) { goto L_800F1EAC; } // 800F1CB8
  c->r[4]=R32(c->r[13]+0xFFFFA0C4u); // 800F1CBC
  c->r[0]=R32(c->r[13]+0xFFFFA0C8u); // 800F1CC0
  cmpu(c,0,c->r[0],c->r[4]); // 800F1CC4
  if (!crb(c,2)) { goto L_800F1D48; } // 800F1CC8
  c->r[3]=0u+0x80330000u; // 800F1CCC
  c->r[4]=0u+0x00000000u; // 800F1CD0
  c->r[3]=R8(c->r[3]+0xFFFF99B4u); // 800F1CD4
  c->r[0]=0u+0x00000013u; // 800F1CD8
  W8(c->r[13]+0xFFFFA0BDu,c->r[4]); // 800F1CDC
  cmps(c,0,(int32_t)c->r[3],19); // 800F1CE0
  W8(c->r[13]+0xFFFFA0BEu,c->r[3]); // 800F1CE4
  if (!crb(c,0)) { goto L_800F1CF0; } // 800F1CE8
  c->r[0]=c->r[3]|c->r[3]; // 800F1CEC
L_800F1CF0:;
  c->r[31]=rotl(c->r[0],0)&0x000000FFu; // 800F1CF0
  c->r[4]=0u+0x80330000u; // 800F1CF4
  c->r[30]=(uint32_t)((int32_t)c->r[31]*(int32_t)13); // 800F1CF8
  W8(c->r[1]+0x00000108u,c->r[0]); // 800F1CFC
  c->r[4]=c->r[4]+0xFFFF99B4u; // 800F1D00
  c->r[3]=c->r[1]+0x00000109u; // 800F1D04
  c->r[5]=c->r[30]|c->r[30]; // 800F1D08
  c->r[4]=c->r[4]+0x00000001u; // 800F1D0C
  c->lr=0x800F1D14u; f_800043C4(c); // 800F1D10
  c->r[4]=R8(c->r[13]+0xFFFFA0BDu); // 800F1D14
  c->r[3]=0u+0x00010000u; // 800F1D18
  c->r[3]=c->r[3]+0xFFFFFC4Fu; // 800F1D1C
  c->r[6]=0u+0x800F0000u; // 800F1D20
  c->r[4]=c->r[4]+c->r[31]; // 800F1D24
  c->r[0]=c->r[30]+0x00000001u; // 800F1D28
  W8(c->r[13]+0xFFFFA0BDu,c->r[4]); // 800F1D2C
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F1D30
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F1D34
  c->r[5]=c->r[1]+0x00000108u; // 800F1D38
  c->r[6]=c->r[6]+0x00001BD0u; // 800F1D3C
  c->lr=0x800F1D44u; f_80100D3C(c); // 800F1D40
  goto L_800F1EB8; // 800F1D44
L_800F1D48:;
  c->r[0]=c->r[0]-c->r[4]; // 800F1D48
  c->r[3]=0u+0x000000FBu; // 800F1D4C
  cmpu(c,0,c->r[0],0x000000FBu); // 800F1D50
  if (!crb(c,0)) { goto L_800F1D5C; } // 800F1D54
  c->r[3]=c->r[0]|c->r[0]; // 800F1D58
L_800F1D5C:;
  c->r[0]=R32(c->r[13]+0xFFFFA0C0u); // 800F1D5C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800F1D60
  cmps(c,1,(int32_t)c->r[3],0); // 800F1D64
  c->r[6]=0u+0x00000000u; // 800F1D68
  c->r[0]=c->r[0]+c->r[4]; // 800F1D6C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F1D70
  c->r[5]=rotl(c->r[0],24)&0x000000FFu; // 800F1D74
  c->r[4]=rotl(c->r[0],16)&0x000000FFu; // 800F1D78
  c->r[0]=rotl(c->r[0],8)&0x000000FFu; // 800F1D7C
  W8(c->r[1]+0x00000009u,c->r[5]); // 800F1D80
  W8(c->r[1]+0x0000000Au,c->r[4]); // 800F1D84
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800F1D88
  if (!crb(c,5)) { goto L_800F1E78; } // 800F1D8C
  cmps(c,0,(int32_t)c->r[3],8); // 800F1D90
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 800F1D94
  if (!crb(c,1)) { goto L_800F1E38; } // 800F1D98
  c->r[5]=0u+0x00000000u; // 800F1D9C
  if (crb(c,4)) { goto L_800F1DB8; } // 800F1DA0
  c->r[4]=0u+0x80000000u; // 800F1DA4
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 800F1DA8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800F1DAC
  if (crb(c,1)) { goto L_800F1DB8; } // 800F1DB0
  c->r[5]=0u+0x00000001u; // 800F1DB4
L_800F1DB8:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F1DB8
  if (crb(c,2)) { goto L_800F1E38; } // 800F1DBC
  c->r[0]=c->r[7]+0x00000007u; // 800F1DC0
  c->r[4]=0u+0x80330000u; // 800F1DC4
  c->r[5]=R32(c->r[13]+0xFFFFA0C4u); // 800F1DC8
  c->r[4]=c->r[4]+0xFFFF98F8u; // 800F1DCC
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800F1DD0
  c->r[8]=c->r[1]+0x00000008u; // 800F1DD4
  c->r[5]=c->r[4]+c->r[5]; // 800F1DD8
  c->ctr=c->r[0]; // 800F1DDC
  cmps(c,0,(int32_t)c->r[7],0); // 800F1DE0
  if (!crb(c,1)) { goto L_800F1E38; } // 800F1DE4
L_800F1DE8:;
  c->r[4]=c->r[5]+c->r[6]; // 800F1DE8
  c->r[6]=c->r[6]+0x00000008u; // 800F1DEC
  c->r[0]=R8(c->r[4]+0x00000008u); // 800F1DF0
  W8(c->r[8]+0x00000004u,c->r[0]); // 800F1DF4
  c->r[0]=R8(c->r[4]+0x00000009u); // 800F1DF8
  W8(c->r[8]+0x00000005u,c->r[0]); // 800F1DFC
  c->r[0]=R8(c->r[4]+0x0000000Au); // 800F1E00
  W8(c->r[8]+0x00000006u,c->r[0]); // 800F1E04
  c->r[0]=R8(c->r[4]+0x0000000Bu); // 800F1E08
  W8(c->r[8]+0x00000007u,c->r[0]); // 800F1E0C
  c->r[0]=R8(c->r[4]+0x0000000Cu); // 800F1E10
  W8(c->r[8]+0x00000008u,c->r[0]); // 800F1E14
  c->r[0]=R8(c->r[4]+0x0000000Du); // 800F1E18
  W8(c->r[8]+0x00000009u,c->r[0]); // 800F1E1C
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 800F1E20
  W8(c->r[8]+0x0000000Au,c->r[0]); // 800F1E24
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 800F1E28
  W8(c->r[8]+0x0000000Bu,c->r[0]); // 800F1E2C
  c->r[8]=c->r[8]+0x00000008u; // 800F1E30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1DE8; } // 800F1E34
L_800F1E38:;
  c->r[4]=0u+0x80330000u; // 800F1E38
  c->r[5]=R32(c->r[13]+0xFFFFA0C4u); // 800F1E3C
  c->r[7]=c->r[1]+0x00000008u; // 800F1E40
  c->r[0]=c->r[3]-c->r[6]; // 800F1E44
  c->r[4]=c->r[4]+0xFFFF98F8u; // 800F1E48
  c->r[7]=c->r[7]+c->r[6]; // 800F1E4C
  c->r[5]=c->r[4]+c->r[5]; // 800F1E50
  c->ctr=c->r[0]; // 800F1E54
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[3]); // 800F1E58
  if (!crb(c,0)) { goto L_800F1E78; } // 800F1E5C
L_800F1E60:;
  c->r[4]=c->r[5]+c->r[6]; // 800F1E60
  c->r[6]=c->r[6]+0x00000001u; // 800F1E64
  c->r[0]=R8(c->r[4]+0x00000008u); // 800F1E68
  W8(c->r[7]+0x00000004u,c->r[0]); // 800F1E6C
  c->r[7]=c->r[7]+0x00000001u; // 800F1E70
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1E60; } // 800F1E74
L_800F1E78:;
  c->r[5]=R32(c->r[13]+0xFFFFA0C4u); // 800F1E78
  c->r[4]=0u+0x00010000u; // 800F1E7C
  c->r[0]=c->r[3]+0x00000004u; // 800F1E80
  c->r[6]=0u+0x800F0000u; // 800F1E84
  c->r[3]=c->r[5]+c->r[3]; // 800F1E88
  c->r[4]=c->r[4]+0xFFFFFC4Cu; // 800F1E8C
  W32(c->r[13]+0xFFFFA0C4u,c->r[3]); // 800F1E90
  c->r[3]=rotl(c->r[4],0)&0x0000FFFFu; // 800F1E94
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F1E98
  c->r[5]=c->r[1]+0x00000008u; // 800F1E9C
  c->r[6]=c->r[6]+0x00001CA0u; // 800F1EA0
  c->lr=0x800F1EA8u; f_80100D3C(c); // 800F1EA4
  goto L_800F1EB8; // 800F1EA8
L_800F1EAC:;
  c->r[3]=0u+0x800F0000u; // 800F1EAC
  c->r[3]=c->r[3]+0x00001BC0u; // 800F1EB0
  c->lr=0x800F1EB8u; f_800FFD40(c); // 800F1EB4
L_800F1EB8:;
  c->r[0]=R32(c->r[1]+0x00000214u); // 800F1EB8
  c->r[31]=R32(c->r[1]+0x0000020Cu); // 800F1EBC
  c->r[30]=R32(c->r[1]+0x00000208u); // 800F1EC0
  c->lr=c->r[0]; // 800F1EC4
  c->r[1]=c->r[1]+0x00000210u; // 800F1EC8
  return; // 800F1ECC
}

// fn_800F1ED0
void f_800F1ED0(Ctx* __restrict c) {
  trace_call(0x800F1ED0u);
  {uint32_t ea=c->r[1]+0xFFFFFEF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F1ED0
  c->r[0]=c->lr; // 800F1ED4
  cmps(c,0,(int32_t)c->r[3],0); // 800F1ED8
  W32(c->r[1]+0x00000114u,c->r[0]); // 800F1EDC
  if (crb(c,2)) { goto L_800F202C; } // 800F1EE0
  c->r[3]=R32(c->r[13]+0xFFFFA0C8u); // 800F1EE4
  c->r[0]=0u+0x000000FBu; // 800F1EE8
  cmpu(c,0,c->r[3],0x000000FBu); // 800F1EEC
  if (!crb(c,0)) { goto L_800F1EF8; } // 800F1EF0
  c->r[0]=c->r[3]|c->r[3]; // 800F1EF4
L_800F1EF8:;
  c->r[6]=R32(c->r[13]+0xFFFFA0C0u); // 800F1EF8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800F1EFC
  cmps(c,1,(int32_t)c->r[5],0); // 800F1F00
  W8(c->r[1]+0x00000008u,c->r[6]); // 800F1F04
  c->r[4]=rotl(c->r[6],24)&0x000000FFu; // 800F1F08
  c->r[3]=rotl(c->r[6],16)&0x000000FFu; // 800F1F0C
  c->r[0]=rotl(c->r[6],8)&0x000000FFu; // 800F1F10
  W8(c->r[1]+0x00000009u,c->r[4]); // 800F1F14
  c->r[6]=0u+0x00000000u; // 800F1F18
  W8(c->r[1]+0x0000000Au,c->r[3]); // 800F1F1C
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800F1F20
  if (!crb(c,5)) { goto L_800F2000; } // 800F1F24
  cmps(c,0,(int32_t)c->r[5],8); // 800F1F28
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 800F1F2C
  if (!crb(c,1)) { goto L_800F1FC8; } // 800F1F30
  c->r[4]=0u+0x00000000u; // 800F1F34
  if (crb(c,4)) { goto L_800F1F50; } // 800F1F38
  c->r[3]=0u+0x80000000u; // 800F1F3C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 800F1F40
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800F1F44
  if (crb(c,1)) { goto L_800F1F50; } // 800F1F48
  c->r[4]=0u+0x00000001u; // 800F1F4C
L_800F1F50:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F1F50
  if (crb(c,2)) { goto L_800F1FC8; } // 800F1F54
  c->r[0]=c->r[7]+0x00000007u; // 800F1F58
  c->r[4]=0u+0x80330000u; // 800F1F5C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800F1F60
  c->r[8]=c->r[1]+0x00000008u; // 800F1F64
  c->r[4]=c->r[4]+0xFFFF98F8u; // 800F1F68
  c->ctr=c->r[0]; // 800F1F6C
  cmps(c,0,(int32_t)c->r[7],0); // 800F1F70
  if (!crb(c,1)) { goto L_800F1FC8; } // 800F1F74
L_800F1F78:;
  c->r[3]=c->r[4]+c->r[6]; // 800F1F78
  c->r[6]=c->r[6]+0x00000008u; // 800F1F7C
  c->r[0]=R8(c->r[3]+0x00000008u); // 800F1F80
  W8(c->r[8]+0x00000004u,c->r[0]); // 800F1F84
  c->r[0]=R8(c->r[3]+0x00000009u); // 800F1F88
  W8(c->r[8]+0x00000005u,c->r[0]); // 800F1F8C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 800F1F90
  W8(c->r[8]+0x00000006u,c->r[0]); // 800F1F94
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 800F1F98
  W8(c->r[8]+0x00000007u,c->r[0]); // 800F1F9C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800F1FA0
  W8(c->r[8]+0x00000008u,c->r[0]); // 800F1FA4
  c->r[0]=R8(c->r[3]+0x0000000Du); // 800F1FA8
  W8(c->r[8]+0x00000009u,c->r[0]); // 800F1FAC
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 800F1FB0
  W8(c->r[8]+0x0000000Au,c->r[0]); // 800F1FB4
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 800F1FB8
  W8(c->r[8]+0x0000000Bu,c->r[0]); // 800F1FBC
  c->r[8]=c->r[8]+0x00000008u; // 800F1FC0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1F78; } // 800F1FC4
L_800F1FC8:;
  c->r[7]=c->r[1]+0x00000008u; // 800F1FC8
  c->r[4]=0u+0x80330000u; // 800F1FCC
  c->r[0]=c->r[5]-c->r[6]; // 800F1FD0
  c->r[7]=c->r[7]+c->r[6]; // 800F1FD4
  c->r[4]=c->r[4]+0xFFFF98F8u; // 800F1FD8
  c->ctr=c->r[0]; // 800F1FDC
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[5]); // 800F1FE0
  if (!crb(c,0)) { goto L_800F2000; } // 800F1FE4
L_800F1FE8:;
  c->r[3]=c->r[4]+c->r[6]; // 800F1FE8
  c->r[6]=c->r[6]+0x00000001u; // 800F1FEC
  c->r[0]=R8(c->r[3]+0x00000008u); // 800F1FF0
  W8(c->r[7]+0x00000004u,c->r[0]); // 800F1FF4
  c->r[7]=c->r[7]+0x00000001u; // 800F1FF8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F1FE8; } // 800F1FFC
L_800F2000:;
  c->r[3]=0u+0x00010000u; // 800F2000
  c->r[0]=c->r[5]+0x00000004u; // 800F2004
  c->r[3]=c->r[3]+0xFFFFFC4Cu; // 800F2008
  c->r[6]=0u+0x800F0000u; // 800F200C
  W32(c->r[13]+0xFFFFA0C4u,c->r[5]); // 800F2010
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F2014
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800F2018
  c->r[5]=c->r[1]+0x00000008u; // 800F201C
  c->r[6]=c->r[6]+0x00001CA0u; // 800F2020
  c->lr=0x800F2028u; f_80100D3C(c); // 800F2024
  goto L_800F2038; // 800F2028
L_800F202C:;
  c->r[3]=0u+0x800F0000u; // 800F202C
  c->r[3]=c->r[3]+0x00001BC0u; // 800F2030
  c->lr=0x800F2038u; f_800FFD40(c); // 800F2034
L_800F2038:;
  c->r[0]=R32(c->r[1]+0x00000114u); // 800F2038
  c->lr=c->r[0]; // 800F203C
  c->r[1]=c->r[1]+0x00000110u; // 800F2040
  return; // 800F2044
  unimpl(c,0x800F2048u,"00000000"); // 800F2048
  unimpl(c,0x800F204Cu,"00000000"); // 800F204C
  f_800F2050(c);
}

// fn_800F2050
void f_800F2050(Ctx* __restrict c) {
  trace_call(0x800F2050u);
  c->r[3]=0u+0x00010000u; // 800F2050
  c->r[6]=0u+0x800F0000u; // 800F2054
  c->r[0]=c->r[3]+0xFFFFFC4Fu; // 800F2058
  c->r[4]=0u+0x00000001u; // 800F205C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F2060
  c->r[6]=c->r[6]+0x00001ED0u; // 800F2064
  c->r[5]=c->r[13]+0xFFFFA0A4u; // 800F2068
  f_80100D3C(c); return; // 800F206C
}

// fn_800F2070
void f_800F2070(Ctx* __restrict c) {
  trace_call(0x800F2070u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2070
  c->r[0]=c->lr; // 800F2074
  c->r[5]=R32(c->r[2]+0xFFFFB150u); // 800F2078
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F207C
  c->r[3]=c->r[1]+0x0000000Cu; // 800F2080
  c->r[4]=R16(c->r[2]+0xFFFFB154u); // 800F2084
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F2088
  c->r[0]=R8(c->r[2]+0xFFFFB156u); // 800F208C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2090
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2094
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F2098
  c->r[28]=0u+0x803A0000u; // 800F209C
  c->r[28]=c->r[28]+0xFFFFB7C0u; // 800F20A0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 800F20A4
  W16(c->r[1]+0x00000008u,c->r[4]); // 800F20A8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800F20AC
  c->lr=0x800F20B4u; f_800FA4D8(c); // 800F20B0
  c->r[3]=c->r[1]+0x00000008u; // 800F20B4
  c->lr=0x800F20BCu; f_80100C84(c); // 800F20B8
  c->r[3]=0u+0x800F0000u; // 800F20BC
  c->r[3]=c->r[3]+0x00003380u; // 800F20C0
  c->lr=0x800F20C8u; f_80100EA4(c); // 800F20C4
  c->r[3]=0u+0x800F0000u; // 800F20C8
  c->r[3]=c->r[3]+0x00003600u; // 800F20CC
  c->lr=0x800F20D4u; f_80100D24(c); // 800F20D0
  c->r[5]=0u+0x800F0000u; // 800F20D4
  c->r[4]=c->r[28]+0x0000070Au; // 800F20D8
  c->r[5]=c->r[5]+0x00003810u; // 800F20DC
  c->r[3]=0u+0x00000003u; // 800F20E0
  c->lr=0x800F20E8u; f_801031A0(c); // 800F20E4
  c->r[3]=0u+0x00010000u; // 800F20E8
  c->r[0]=c->r[3]+0xFFFF8000u; // 800F20EC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F20F0
  c->lr=0x800F20F8u; f_80100F74(c); // 800F20F4
  c->r[3]=0u+0x00000005u; // 800F20F8
  c->lr=0x800F2100u; f_800FE238(c); // 800F20FC
  c->r[3]=0u+0x00000C80u; // 800F2100
  c->lr=0x800F2108u; f_800FE604(c); // 800F2104
  c->r[30]=c->r[28]|c->r[28]; // 800F2108
  c->r[31]=c->r[28]+0x00000124u; // 800F210C
  c->r[29]=0u+0x00000000u; // 800F2110
L_800F2114:;
  c->r[0]=R8(c->r[30]+0x0000013Du); // 800F2114
  cmpu(c,0,c->r[0],0x00000001u); // 800F2118
  if (!crb(c,2)) { goto L_800F2128; } // 800F211C
  c->r[3]=c->r[31]|c->r[31]; // 800F2120
  c->lr=0x800F2128u; f_800F21D0(c); // 800F2124
L_800F2128:;
  c->r[29]=c->r[29]+0x00000001u; // 800F2128
  c->r[31]=c->r[31]+0x00000060u; // 800F212C
  cmps(c,0,(int32_t)c->r[29],10); // 800F2130
  c->r[30]=c->r[30]+0x00000060u; // 800F2134
  if (crb(c,0)) { IRQCHK(c); goto L_800F2114; } // 800F2138
  c->r[31]=c->r[28]|c->r[28]; // 800F213C
  c->r[30]=c->r[28]+0x000004E4u; // 800F2140
  c->r[29]=0u+0x00000000u; // 800F2144
L_800F2148:;
  c->r[0]=R8(c->r[31]+0x000004FDu); // 800F2148
  cmpu(c,0,c->r[0],0x00000001u); // 800F214C
  if (!crb(c,2)) { goto L_800F215C; } // 800F2150
  c->r[3]=c->r[30]|c->r[30]; // 800F2154
  c->lr=0x800F215Cu; f_800F21D0(c); // 800F2158
L_800F215C:;
  c->r[29]=c->r[29]+0x00000001u; // 800F215C
  c->r[30]=c->r[30]+0x00000060u; // 800F2160
  cmps(c,0,(int32_t)c->r[29],6); // 800F2164
  c->r[31]=c->r[31]+0x00000060u; // 800F2168
  if (crb(c,0)) { IRQCHK(c); goto L_800F2148; } // 800F216C
  c->lr=0x800F2174u; f_8007FFF0(c); // 800F2170
  c->r[0]=0u+0x00000003u; // 800F2174
  c->r[31]=0u+0x00000001u; // 800F2178
  W8(c->r[28]+0x00000708u,c->r[0]); // 800F217C
  W32(c->r[13]+0xFFFFA09Cu,c->r[31]); // 800F2180
  c->lr=0x800F2188u; f_80080030(c); // 800F2184
  c->lr=0x800F218Cu; f_8007FFF0(c); // 800F2188
  c->r[4]=0u+0x803A0000u; // 800F218C
  c->r[0]=0u+0x00000000u; // 800F2190
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F2194
  W8(c->r[4]+0x000006EBu,c->r[0]); // 800F2198
  W8(c->r[4]+0x000006EAu,c->r[31]); // 800F219C
  c->lr=0x800F21A4u; f_80080030(c); // 800F21A0
  c->r[3]=0u+0x00000000u; // 800F21A4
  c->r[4]=0u+0x00000001u; // 800F21A8
  c->lr=0x800F21B0u; f_800FA53C(c); // 800F21AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F21B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F21B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F21B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F21BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F21C0
  c->lr=c->r[0]; // 800F21C4
  c->r[1]=c->r[1]+0x00000020u; // 800F21C8
  return; // 800F21CC
}

// fn_800F21D0
void f_800F21D0(Ctx* __restrict c) {
  trace_call(0x800F21D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F21D0
  c->r[0]=c->lr; // 800F21D4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F21D8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800F21DC
  c->r[31]=0u+0x80330000u; // 800F21E0
  c->r[31]=c->r[31]+0xFFFF9810u; // 800F21E4
  W32(c->r[1]+0x00000028u,c->r[30]); // 800F21E8
  c->r[30]=0u+0x803A0000u; // 800F21EC
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F21F0
  W32(c->r[1]+0x00000024u,c->r[29]); // 800F21F4
  c->r[29]=c->r[3]|c->r[3]; // 800F21F8
  W32(c->r[1]+0x00000020u,c->r[28]); // 800F21FC
  c->lr=0x800F2204u; f_8007FFF0(c); // 800F2200
  c->r[28]=c->r[3]|c->r[3]; // 800F2204
  c->r[3]=c->r[29]|c->r[29]; // 800F2208
  c->lr=0x800F2210u; f_800F2410(c); // 800F220C
  c->r[29]=c->r[3]|c->r[3]; // 800F2210
  c->r[4]=c->r[3]+0x00000046u; // 800F2214
  c->r[5]=0u+0x00000000u; // 800F2218
  c->r[6]=0u+0x00000000u; // 800F221C
  c->r[3]=c->r[3]+0x00000040u; // 800F2220
  c->lr=0x800F2228u; f_800FA6DC(c); // 800F2224
  c->r[3]=c->r[29]|c->r[29]; // 800F2228
  c->r[4]=c->r[31]+0x0000021Cu; // 800F222C
  c->r[5]=0u+0x00000010u; // 800F2230
  c->lr=0x800F2238u; f_800B3824(c); // 800F2234
  cmps(c,0,(int32_t)c->r[3],0); // 800F2238
  if (crb(c,2)) { goto L_800F2264; } // 800F223C
  c->r[3]=c->r[29]|c->r[29]; // 800F2240
  c->r[4]=c->r[31]+0x00000230u; // 800F2244
  c->r[5]=0u+0x00000010u; // 800F2248
  c->lr=0x800F2250u; f_800B3824(c); // 800F224C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2250
  if (!crb(c,2)) { goto L_800F2298; } // 800F2254
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800F2258
  cmps(c,0,(int32_t)c->r[0],0); // 800F225C
  if (crb(c,2)) { goto L_800F2298; } // 800F2260
L_800F2264:;
  c->r[0]=0u+0x000000D9u; // 800F2264
  W16(c->r[1]+0x00000010u,c->r[0]); // 800F2268
  c->r[4]=c->r[31]+0x00000000u; // 800F226C
  c->r[3]=c->r[29]+0x00000040u; // 800F2270
  c->r[0]=R32(c->r[1]+0x00000010u); // 800F2274
  c->r[7]=c->r[1]+0x00000008u; // 800F2278
  W32(c->r[1]+0x00000008u,c->r[0]); // 800F227C
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800F2280
  W32(c->r[1]+0x00000014u,c->r[4]); // 800F2284
  c->r[4]=R16(c->r[29]+0x0000005Eu); // 800F2288
  c->r[5]=R8(c->r[29]+0x00000057u); // 800F228C
  c->r[6]=R8(c->r[29]+0x00000058u); // 800F2290
  c->lr=0x800F2298u; f_800FCD78(c); // 800F2294
L_800F2298:;
  c->r[0]=R8(c->r[29]+0x0000005Bu); // 800F2298
  cmps(c,0,(int32_t)c->r[0],0); // 800F229C
  if (crb(c,2)) { goto L_800F22BC; } // 800F22A0
  cmpu(c,0,c->r[0],0x00000004u); // 800F22A4
  if (crb(c,2)) { goto L_800F22BC; } // 800F22A8
  cmpu(c,0,c->r[0],0x00000002u); // 800F22AC
  if (crb(c,2)) { goto L_800F22BC; } // 800F22B0
  cmpu(c,0,c->r[0],0x00000005u); // 800F22B4
  if (!crb(c,2)) { goto L_800F22CC; } // 800F22B8
L_800F22BC:;
  c->r[3]=R8(c->r[30]+0x00000012u); // 800F22BC
  c->r[0]=c->r[3]+0x00000001u; // 800F22C0
  W8(c->r[30]+0x00000012u,c->r[0]); // 800F22C4
  goto L_800F22D8; // 800F22C8
L_800F22CC:;
  c->r[3]=R8(c->r[30]+0x00000013u); // 800F22CC
  c->r[0]=c->r[3]+0x00000001u; // 800F22D0
  W8(c->r[30]+0x00000013u,c->r[0]); // 800F22D4
L_800F22D8:;
  c->r[3]=c->r[28]|c->r[28]; // 800F22D8
  c->lr=0x800F22E0u; f_80080030(c); // 800F22DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F22E0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800F22E4
  c->r[30]=R32(c->r[1]+0x00000028u); // 800F22E8
  c->r[29]=R32(c->r[1]+0x00000024u); // 800F22EC
  c->r[28]=R32(c->r[1]+0x00000020u); // 800F22F0
  c->lr=c->r[0]; // 800F22F4
  c->r[1]=c->r[1]+0x00000030u; // 800F22F8
  return; // 800F22FC
}

// WUDiRemoveDevice
void f_800F2300(Ctx* __restrict c) {
  trace_call(0x800F2300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2300
  c->r[0]=c->lr; // 800F2304
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2308
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F230C
  c->r[31]=0u+0x803A0000u; // 800F2310
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F2314
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F2318
  c->r[30]=c->r[3]|c->r[3]; // 800F231C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F2320
  c->lr=0x800F2328u; f_8007FFF0(c); // 800F2324
  c->r[29]=c->r[3]|c->r[3]; // 800F2328
  c->r[3]=c->r[30]|c->r[30]; // 800F232C
  c->lr=0x800F2334u; f_800F2410(c); // 800F2330
  cmps(c,0,(int32_t)c->r[3],0); // 800F2334
  c->r[30]=c->r[3]|c->r[3]; // 800F2338
  if (crb(c,2)) { goto L_800F23E0; } // 800F233C
  c->r[4]=0u+0x80330000u; // 800F2340
  c->r[5]=0u+0x00000010u; // 800F2344
  c->r[4]=c->r[4]+0xFFFF9A2Cu; // 800F2348
  c->lr=0x800F2350u; f_800B3824(c); // 800F234C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2350
  if (crb(c,2)) { goto L_800F2380; } // 800F2354
  c->r[4]=0u+0x80330000u; // 800F2358
  c->r[3]=c->r[30]|c->r[30]; // 800F235C
  c->r[4]=c->r[4]+0xFFFF9A40u; // 800F2360
  c->r[5]=0u+0x00000010u; // 800F2364
  c->lr=0x800F236Cu; f_800B3824(c); // 800F2368
  cmps(c,0,(int32_t)c->r[3],0); // 800F236C
  if (!crb(c,2)) { goto L_800F2388; } // 800F2370
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800F2374
  cmps(c,0,(int32_t)c->r[0],0); // 800F2378
  if (crb(c,2)) { goto L_800F2388; } // 800F237C
L_800F2380:;
  c->r[3]=R8(c->r[30]+0x00000056u); // 800F2380
  c->lr=0x800F2388u; f_800FCE20(c); // 800F2384
L_800F2388:;
  c->r[3]=c->r[30]+0x00000040u; // 800F2388
  c->lr=0x800F2390u; f_800FA7CC(c); // 800F238C
  c->r[3]=R8(c->r[30]+0x0000005Bu); // 800F2390
  cmps(c,0,(int32_t)c->r[3],0); // 800F2394
  if (crb(c,2)) { goto L_800F23B4; } // 800F2398
  cmpu(c,0,c->r[3],0x00000002u); // 800F239C
  if (crb(c,2)) { goto L_800F23B4; } // 800F23A0
  c->r[0]=c->r[3]+0x000000FCu; // 800F23A4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800F23A8
  cmpu(c,0,c->r[0],0x00000001u); // 800F23AC
  if (crb(c,1)) { goto L_800F23C4; } // 800F23B0
L_800F23B4:;
  c->r[3]=R8(c->r[31]+0x00000012u); // 800F23B4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F23B8
  W8(c->r[31]+0x00000012u,c->r[0]); // 800F23BC
  goto L_800F23D0; // 800F23C0
L_800F23C4:;
  c->r[3]=R8(c->r[31]+0x00000013u); // 800F23C4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F23C8
  W8(c->r[31]+0x00000013u,c->r[0]); // 800F23CC
L_800F23D0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F23D0
  c->r[4]=0u+0x00000000u; // 800F23D4
  c->r[5]=0u+0x00000060u; // 800F23D8
  c->lr=0x800F23E0u; f_80004714(c); // 800F23DC
L_800F23E0:;
  c->r[3]=c->r[29]|c->r[29]; // 800F23E0
  c->lr=0x800F23E8u; f_80080030(c); // 800F23E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F23E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F23EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F23F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F23F4
  c->lr=c->r[0]; // 800F23F8
  c->r[1]=c->r[1]+0x00000020u; // 800F23FC
  return; // 800F2400
  unimpl(c,0x800F2404u,"00000000"); // 800F2404
  unimpl(c,0x800F2408u,"00000000"); // 800F2408
  unimpl(c,0x800F240Cu,"00000000"); // 800F240C
  f_800F2410(c);
}

// WUDiGetDevInfo
void f_800F2410(Ctx* __restrict c) {
  trace_call(0x800F2410u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2410
  c->r[0]=c->lr; // 800F2414
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2418
  c->r[11]=c->r[1]+0x00000020u; // 800F241C
  c->lr=0x800F2424u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2420
  c->r[29]=0u+0x803A0000u; // 800F2424
  c->r[26]=c->r[3]|c->r[3]; // 800F2428
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F242C
  c->r[28]=0u+0x00000000u; // 800F2430
  c->lr=0x800F2438u; f_8007FFF0(c); // 800F2434
  c->r[27]=c->r[3]|c->r[3]; // 800F2438
  c->r[31]=c->r[29]+0x00000124u; // 800F243C
  c->r[30]=0u+0x00000000u; // 800F2440
L_800F2444:;
  c->r[3]=c->r[31]|c->r[31]; // 800F2444
  c->r[4]=c->r[26]|c->r[26]; // 800F2448
  c->r[5]=0u+0x00000006u; // 800F244C
  c->lr=0x800F2454u; f_800B3824(c); // 800F2450
  cmps(c,0,(int32_t)c->r[3],0); // 800F2454
  if (!crb(c,2)) { goto L_800F246C; } // 800F2458
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 800F245C
  c->r[3]=c->r[29]+c->r[0]; // 800F2460
  c->r[28]=c->r[3]+0x000000E4u; // 800F2464
  goto L_800F247C; // 800F2468
L_800F246C:;
  c->r[30]=c->r[30]+0x00000001u; // 800F246C
  c->r[31]=c->r[31]+0x00000060u; // 800F2470
  cmps(c,0,(int32_t)c->r[30],10); // 800F2474
  if (crb(c,0)) { IRQCHK(c); goto L_800F2444; } // 800F2478
L_800F247C:;
  cmps(c,0,(int32_t)c->r[28],0); // 800F247C
  if (!crb(c,2)) { goto L_800F24C4; } // 800F2480
  c->r[31]=c->r[29]+0x000004E4u; // 800F2484
  c->r[30]=0u+0x00000000u; // 800F2488
L_800F248C:;
  c->r[3]=c->r[31]|c->r[31]; // 800F248C
  c->r[4]=c->r[26]|c->r[26]; // 800F2490
  c->r[5]=0u+0x00000006u; // 800F2494
  c->lr=0x800F249Cu; f_800B3824(c); // 800F2498
  cmps(c,0,(int32_t)c->r[3],0); // 800F249C
  if (!crb(c,2)) { goto L_800F24B4; } // 800F24A0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 800F24A4
  c->r[3]=c->r[29]+c->r[0]; // 800F24A8
  c->r[28]=c->r[3]+0x000004A4u; // 800F24AC
  goto L_800F24C4; // 800F24B0
L_800F24B4:;
  c->r[30]=c->r[30]+0x00000001u; // 800F24B4
  c->r[31]=c->r[31]+0x00000060u; // 800F24B8
  cmps(c,0,(int32_t)c->r[30],6); // 800F24BC
  if (crb(c,0)) { IRQCHK(c); goto L_800F248C; } // 800F24C0
L_800F24C4:;
  c->r[3]=c->r[27]|c->r[27]; // 800F24C4
  c->lr=0x800F24CCu; f_80080030(c); // 800F24C8
  c->r[11]=c->r[1]+0x00000020u; // 800F24CC
  c->r[3]=c->r[28]|c->r[28]; // 800F24D0
  c->lr=0x800F24D8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F24D4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F24D8
  c->lr=c->r[0]; // 800F24DC
  c->r[1]=c->r[1]+0x00000020u; // 800F24E0
  return; // 800F24E4
  unimpl(c,0x800F24E8u,"00000000"); // 800F24E8
  unimpl(c,0x800F24ECu,"00000000"); // 800F24EC
  f_800F24F0(c);
}

// WUDiMoveTopSmpDevInfoPtr
void f_800F24F0(Ctx* __restrict c) {
  trace_call(0x800F24F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F24F0
  c->r[0]=c->lr; // 800F24F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F24F8
  c->r[11]=c->r[1]+0x00000020u; // 800F24FC
  c->lr=0x800F2504u; f_800ADA2C(c); // 800F2500
  c->r[30]=0u+0x803A0000u; // 800F2504
  c->r[27]=c->r[3]|c->r[3]; // 800F2508
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F250C
  c->lr=0x800F2514u; f_8007FFF0(c); // 800F2510
  c->r[29]=c->r[3]|c->r[3]; // 800F2514
  c->r[28]=c->r[30]|c->r[30]; // 800F2518
  c->r[31]=0u+0x00000000u; // 800F251C
L_800F2520:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 800F2520
  c->r[4]=c->r[27]+0x00000040u; // 800F2524
  c->r[5]=0u+0x00000006u; // 800F2528
  c->r[3]=c->r[3]+0x00000040u; // 800F252C
  c->lr=0x800F2534u; f_800B3824(c); // 800F2530
  cmps(c,0,(int32_t)c->r[3],0); // 800F2534
  if (!crb(c,2)) { goto L_800F25D4; } // 800F2538
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800F253C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800F2540
  c->r[5]=0u+0x00000006u; // 800F2544
  c->r[3]=R32(c->r[3]+0x00000000u); // 800F2548
  c->r[31]=c->r[30]+c->r[28]; // 800F254C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 800F2550
  c->r[3]=c->r[3]+0x00000040u; // 800F2554
  c->r[4]=c->r[4]+0x00000040u; // 800F2558
  c->lr=0x800F2560u; f_800B3824(c); // 800F255C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2560
  if (crb(c,2)) { goto L_800F25E4; } // 800F2564
  c->r[28]=c->r[30]+c->r[28]; // 800F2568
  c->r[5]=0u+0x00000006u; // 800F256C
  c->r[3]=R32(c->r[28]+0x00000020u); // 800F2570
  c->r[0]=R32(c->r[28]+0x00000024u); // 800F2574
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2578
  c->r[4]=R32(c->r[30]+0x00000018u); // 800F257C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F2580
  c->r[6]=R32(c->r[4]+0x00000000u); // 800F2584
  c->r[4]=c->r[3]+0x00000040u; // 800F2588
  c->r[3]=c->r[6]+0x00000040u; // 800F258C
  c->lr=0x800F2594u; f_800B3824(c); // 800F2590
  cmps(c,0,(int32_t)c->r[3],0); // 800F2594
  if (!crb(c,2)) { goto L_800F25A8; } // 800F2598
  c->r[0]=R32(c->r[28]+0x00000020u); // 800F259C
  W32(c->r[30]+0x00000018u,c->r[0]); // 800F25A0
  goto L_800F25B4; // 800F25A4
L_800F25A8:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 800F25A8
  c->r[0]=R32(c->r[28]+0x00000020u); // 800F25AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F25B0
L_800F25B4:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 800F25B4
  c->r[0]=0u+0x00000000u; // 800F25B8
  W32(c->r[28]+0x00000024u,c->r[3]); // 800F25BC
  c->r[3]=R32(c->r[30]+0x00000014u); // 800F25C0
  W32(c->r[3]+0x00000004u,c->r[31]); // 800F25C4
  W32(c->r[30]+0x00000014u,c->r[31]); // 800F25C8
  W32(c->r[28]+0x00000020u,c->r[0]); // 800F25CC
  goto L_800F25E4; // 800F25D0
L_800F25D4:;
  c->r[31]=c->r[31]+0x00000001u; // 800F25D4
  c->r[28]=c->r[28]+0x0000000Cu; // 800F25D8
  cmps(c,0,(int32_t)c->r[31],6); // 800F25DC
  if (crb(c,0)) { IRQCHK(c); goto L_800F2520; } // 800F25E0
L_800F25E4:;
  c->r[3]=c->r[29]|c->r[29]; // 800F25E4
  c->lr=0x800F25ECu; f_80080030(c); // 800F25E8
  c->r[11]=c->r[1]+0x00000020u; // 800F25EC
  c->lr=0x800F25F4u; f_800ADA78(c); // 800F25F0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F25F4
  c->lr=c->r[0]; // 800F25F8
  c->r[1]=c->r[1]+0x00000020u; // 800F25FC
  return; // 800F2600
  unimpl(c,0x800F2604u,"00000000"); // 800F2604
  unimpl(c,0x800F2608u,"00000000"); // 800F2608
  unimpl(c,0x800F260Cu,"00000000"); // 800F260C
  f_800F2610(c);
}

// WUDiMoveBottomSmpDevInfoPtr
void f_800F2610(Ctx* __restrict c) {
  trace_call(0x800F2610u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2610
  c->r[0]=c->lr; // 800F2614
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F2618
  c->r[11]=c->r[1]+0x00000020u; // 800F261C
  c->lr=0x800F2624u; f_800ADA2C(c); // 800F2620
  c->r[30]=0u+0x803A0000u; // 800F2624
  c->r[27]=c->r[3]|c->r[3]; // 800F2628
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F262C
  c->lr=0x800F2634u; f_8007FFF0(c); // 800F2630
  c->r[29]=c->r[3]|c->r[3]; // 800F2634
  c->r[28]=c->r[30]|c->r[30]; // 800F2638
  c->r[31]=0u+0x00000000u; // 800F263C
L_800F2640:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 800F2640
  c->r[4]=c->r[27]+0x00000040u; // 800F2644
  c->r[5]=0u+0x00000006u; // 800F2648
  c->r[3]=c->r[3]+0x00000040u; // 800F264C
  c->lr=0x800F2654u; f_800B3824(c); // 800F2650
  cmps(c,0,(int32_t)c->r[3],0); // 800F2654
  if (!crb(c,2)) { goto L_800F26F4; } // 800F2658
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800F265C
  c->r[3]=R32(c->r[30]+0x00000018u); // 800F2660
  c->r[5]=0u+0x00000006u; // 800F2664
  c->r[3]=R32(c->r[3]+0x00000000u); // 800F2668
  c->r[31]=c->r[30]+c->r[28]; // 800F266C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 800F2670
  c->r[3]=c->r[3]+0x00000040u; // 800F2674
  c->r[4]=c->r[4]+0x00000040u; // 800F2678
  c->lr=0x800F2680u; f_800B3824(c); // 800F267C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2680
  if (crb(c,2)) { goto L_800F2704; } // 800F2684
  c->r[28]=c->r[30]+c->r[28]; // 800F2688
  c->r[5]=0u+0x00000006u; // 800F268C
  c->r[3]=R32(c->r[28]+0x00000024u); // 800F2690
  c->r[0]=R32(c->r[28]+0x00000020u); // 800F2694
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2698
  c->r[4]=R32(c->r[30]+0x00000014u); // 800F269C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F26A0
  c->r[6]=R32(c->r[4]+0x00000000u); // 800F26A4
  c->r[4]=c->r[3]+0x00000040u; // 800F26A8
  c->r[3]=c->r[6]+0x00000040u; // 800F26AC
  c->lr=0x800F26B4u; f_800B3824(c); // 800F26B0
  cmps(c,0,(int32_t)c->r[3],0); // 800F26B4
  if (!crb(c,2)) { goto L_800F26C8; } // 800F26B8
  c->r[0]=R32(c->r[28]+0x00000024u); // 800F26BC
  W32(c->r[30]+0x00000014u,c->r[0]); // 800F26C0
  goto L_800F26D4; // 800F26C4
L_800F26C8:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 800F26C8
  c->r[0]=R32(c->r[28]+0x00000024u); // 800F26CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F26D0
L_800F26D4:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 800F26D4
  c->r[0]=0u+0x00000000u; // 800F26D8
  W32(c->r[28]+0x00000020u,c->r[3]); // 800F26DC
  c->r[3]=R32(c->r[30]+0x00000018u); // 800F26E0
  W32(c->r[3]+0x00000008u,c->r[31]); // 800F26E4
  W32(c->r[30]+0x00000018u,c->r[31]); // 800F26E8
  W32(c->r[28]+0x00000024u,c->r[0]); // 800F26EC
  goto L_800F2704; // 800F26F0
L_800F26F4:;
  c->r[31]=c->r[31]+0x00000001u; // 800F26F4
  c->r[28]=c->r[28]+0x0000000Cu; // 800F26F8
  cmps(c,0,(int32_t)c->r[31],6); // 800F26FC
  if (crb(c,0)) { IRQCHK(c); goto L_800F2640; } // 800F2700
L_800F2704:;
  c->r[3]=c->r[29]|c->r[29]; // 800F2704
  c->lr=0x800F270Cu; f_80080030(c); // 800F2708
  c->r[11]=c->r[1]+0x00000020u; // 800F270C
  c->lr=0x800F2714u; f_800ADA78(c); // 800F2710
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2714
  c->lr=c->r[0]; // 800F2718
  c->r[1]=c->r[1]+0x00000020u; // 800F271C
  return; // 800F2720
  unimpl(c,0x800F2724u,"00000000"); // 800F2724
  unimpl(c,0x800F2728u,"00000000"); // 800F2728
  unimpl(c,0x800F272Cu,"00000000"); // 800F272C
  f_800F2730(c);
}

// WUDiMoveTopOfDisconnectedSmpDevice
void f_800F2730(Ctx* __restrict c) {
  trace_call(0x800F2730u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2730
  c->r[0]=c->lr; // 800F2734
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2738
  c->r[11]=c->r[1]+0x00000030u; // 800F273C
  c->lr=0x800F2744u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2740
  c->r[30]=0u+0x803A0000u; // 800F2744
  c->r[26]=c->r[3]|c->r[3]; // 800F2748
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F274C
  c->lr=0x800F2754u; f_8007FFF0(c); // 800F2750
  c->r[28]=c->r[3]|c->r[3]; // 800F2754
  c->r[29]=0u+0x00000000u; // 800F2758
  c->r[25]=0u+0x00000000u; // 800F275C
L_800F2760:;
  c->r[31]=c->r[30]+c->r[25]; // 800F2760
  {uint32_t ea=c->r[31]+0x0000001Cu; c->r[3]=R32(ea); c->r[31]=ea;} // 800F2764
  c->r[4]=c->r[26]+0x00000040u; // 800F2768
  c->r[5]=0u+0x00000006u; // 800F276C
  c->r[3]=c->r[3]+0x00000040u; // 800F2770
  c->lr=0x800F2778u; f_800B3824(c); // 800F2774
  cmps(c,0,(int32_t)c->r[3],0); // 800F2778
  if (!crb(c,2)) { goto L_800F2868; } // 800F277C
  c->r[23]=R32(c->r[30]+0x00000014u); // 800F2780
  c->r[27]=c->r[23]|c->r[23]; // 800F2784
  goto L_800F2860; // 800F2788
L_800F278C:;
  c->r[24]=R32(c->r[27]+0x00000000u); // 800F278C
  c->r[4]=c->r[26]+0x00000040u; // 800F2790
  c->r[5]=0u+0x00000006u; // 800F2794
  c->r[3]=c->r[24]+0x00000040u; // 800F2798
  c->lr=0x800F27A0u; f_800B3824(c); // 800F279C
  cmps(c,0,(int32_t)c->r[3],0); // 800F27A0
  if (crb(c,2)) { goto L_800F285C; } // 800F27A4
  c->r[0]=R8(c->r[24]+0x00000059u); // 800F27A8
  cmpu(c,0,c->r[0],0x00000001u); // 800F27AC
  if (crb(c,1)) { goto L_800F285C; } // 800F27B0
  c->r[3]=c->r[30]+c->r[25]; // 800F27B4
  c->r[6]=R32(c->r[23]+0x00000000u); // 800F27B8
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 800F27BC
  c->r[5]=0u+0x00000006u; // 800F27C0
  c->r[3]=c->r[6]+0x00000040u; // 800F27C4
  c->r[4]=c->r[4]+0x00000040u; // 800F27C8
  c->lr=0x800F27D0u; f_800B3824(c); // 800F27CC
  cmps(c,0,(int32_t)c->r[3],0); // 800F27D0
  if (!crb(c,2)) { goto L_800F27F4; } // 800F27D4
  c->r[0]=R32(c->r[23]+0x00000008u); // 800F27D8
  cmpu(c,0,c->r[27],c->r[0]); // 800F27DC
  if (crb(c,2)) { goto L_800F2868; } // 800F27E0
  c->r[5]=c->r[30]+c->r[25]; // 800F27E4
  {uint32_t ea=c->r[5]+0x00000024u; c->r[0]=R32(ea); c->r[5]=ea;} // 800F27E8
  W32(c->r[30]+0x00000014u,c->r[0]); // 800F27EC
  goto L_800F2808; // 800F27F0
L_800F27F4:;
  c->r[3]=c->r[30]+c->r[25]; // 800F27F4
  c->r[5]=c->r[3]+0x00000024u; // 800F27F8
  c->r[3]=R32(c->r[3]+0x00000020u); // 800F27FC
  c->r[0]=R32(c->r[5]+0x00000000u); // 800F2800
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2804
L_800F2808:;
  c->r[4]=c->r[30]+c->r[25]; // 800F2808
  c->r[3]=R32(c->r[5]+0x00000000u); // 800F280C
  c->r[0]=R32(c->r[4]+0x00000020u); // 800F2810
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2814
  c->r[0]=R32(c->r[30]+0x00000014u); // 800F2818
  cmpu(c,0,c->r[27],c->r[0]); // 800F281C
  if (crb(c,2)) { goto L_800F2840; } // 800F2820
  c->r[0]=R32(c->r[27]+0x00000004u); // 800F2824
  W32(c->r[4]+0x00000020u,c->r[0]); // 800F2828
  W32(c->r[5]+0x00000000u,c->r[27]); // 800F282C
  c->r[3]=R32(c->r[27]+0x00000004u); // 800F2830
  W32(c->r[3]+0x00000008u,c->r[31]); // 800F2834
  W32(c->r[27]+0x00000004u,c->r[31]); // 800F2838
  goto L_800F2868; // 800F283C
L_800F2840:;
  W32(c->r[4]+0x00000020u,c->r[27]); // 800F2840
  c->r[0]=R32(c->r[27]+0x00000008u); // 800F2844
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F2848
  c->r[3]=R32(c->r[27]+0x00000008u); // 800F284C
  W32(c->r[3]+0x00000004u,c->r[31]); // 800F2850
  W32(c->r[27]+0x00000008u,c->r[31]); // 800F2854
  goto L_800F2868; // 800F2858
L_800F285C:;
  c->r[27]=R32(c->r[27]+0x00000008u); // 800F285C
L_800F2860:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F2860
  if (!crb(c,2)) { IRQCHK(c); goto L_800F278C; } // 800F2864
L_800F2868:;
  c->r[29]=c->r[29]+0x00000001u; // 800F2868
  c->r[25]=c->r[25]+0x0000000Cu; // 800F286C
  cmps(c,0,(int32_t)c->r[29],6); // 800F2870
  if (crb(c,0)) { IRQCHK(c); goto L_800F2760; } // 800F2874
  c->r[3]=c->r[28]|c->r[28]; // 800F2878
  c->lr=0x800F2880u; f_80080030(c); // 800F287C
  c->r[11]=c->r[1]+0x00000030u; // 800F2880
  c->lr=0x800F2888u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2884
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F2888
  c->lr=c->r[0]; // 800F288C
  c->r[1]=c->r[1]+0x00000030u; // 800F2890
  return; // 800F2894
  unimpl(c,0x800F2898u,"00000000"); // 800F2898
  unimpl(c,0x800F289Cu,"00000000"); // 800F289C
  f_800F28A0(c);
}

// WUDiMoveTopStdDevInfoPtr
void f_800F28A0(Ctx* __restrict c) {
  trace_call(0x800F28A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F28A0
  c->r[0]=c->lr; // 800F28A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F28A8
  c->r[11]=c->r[1]+0x00000020u; // 800F28AC
  c->lr=0x800F28B4u; f_800ADA2C(c); // 800F28B0
  c->r[30]=0u+0x803A0000u; // 800F28B4
  c->r[27]=c->r[3]|c->r[3]; // 800F28B8
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F28BC
  c->lr=0x800F28C4u; f_8007FFF0(c); // 800F28C0
  c->r[29]=c->r[3]|c->r[3]; // 800F28C4
  c->r[28]=c->r[30]|c->r[30]; // 800F28C8
  c->r[31]=0u+0x00000000u; // 800F28CC
L_800F28D0:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 800F28D0
  c->r[4]=c->r[27]+0x00000040u; // 800F28D4
  c->r[5]=0u+0x00000006u; // 800F28D8
  c->r[3]=c->r[3]+0x00000040u; // 800F28DC
  c->lr=0x800F28E4u; f_800B3824(c); // 800F28E0
  cmps(c,0,(int32_t)c->r[3],0); // 800F28E4
  if (!crb(c,2)) { goto L_800F2984; } // 800F28E8
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800F28EC
  c->r[3]=R32(c->r[30]+0x00000064u); // 800F28F0
  c->r[5]=0u+0x00000006u; // 800F28F4
  c->r[3]=R32(c->r[3]+0x00000000u); // 800F28F8
  c->r[31]=c->r[30]+c->r[28]; // 800F28FC
  {uint32_t ea=c->r[31]+0x0000006Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 800F2900
  c->r[3]=c->r[3]+0x00000040u; // 800F2904
  c->r[4]=c->r[4]+0x00000040u; // 800F2908
  c->lr=0x800F2910u; f_800B3824(c); // 800F290C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2910
  if (crb(c,2)) { goto L_800F2994; } // 800F2914
  c->r[28]=c->r[30]+c->r[28]; // 800F2918
  c->r[5]=0u+0x00000006u; // 800F291C
  c->r[3]=R32(c->r[28]+0x00000070u); // 800F2920
  c->r[0]=R32(c->r[28]+0x00000074u); // 800F2924
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2928
  c->r[4]=R32(c->r[30]+0x00000068u); // 800F292C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F2930
  c->r[6]=R32(c->r[4]+0x00000000u); // 800F2934
  c->r[4]=c->r[3]+0x00000040u; // 800F2938
  c->r[3]=c->r[6]+0x00000040u; // 800F293C
  c->lr=0x800F2944u; f_800B3824(c); // 800F2940
  cmps(c,0,(int32_t)c->r[3],0); // 800F2944
  if (!crb(c,2)) { goto L_800F2958; } // 800F2948
  c->r[0]=R32(c->r[28]+0x00000070u); // 800F294C
  W32(c->r[30]+0x00000068u,c->r[0]); // 800F2950
  goto L_800F2964; // 800F2954
L_800F2958:;
  c->r[3]=R32(c->r[28]+0x00000074u); // 800F2958
  c->r[0]=R32(c->r[28]+0x00000070u); // 800F295C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2960
L_800F2964:;
  c->r[3]=R32(c->r[30]+0x00000064u); // 800F2964
  c->r[0]=0u+0x00000000u; // 800F2968
  W32(c->r[28]+0x00000074u,c->r[3]); // 800F296C
  c->r[3]=R32(c->r[30]+0x00000064u); // 800F2970
  W32(c->r[3]+0x00000004u,c->r[31]); // 800F2974
  W32(c->r[30]+0x00000064u,c->r[31]); // 800F2978
  W32(c->r[28]+0x00000070u,c->r[0]); // 800F297C
  goto L_800F2994; // 800F2980
L_800F2984:;
  c->r[31]=c->r[31]+0x00000001u; // 800F2984
  c->r[28]=c->r[28]+0x0000000Cu; // 800F2988
  cmps(c,0,(int32_t)c->r[31],10); // 800F298C
  if (crb(c,0)) { IRQCHK(c); goto L_800F28D0; } // 800F2990
L_800F2994:;
  c->r[3]=c->r[29]|c->r[29]; // 800F2994
  c->lr=0x800F299Cu; f_80080030(c); // 800F2998
  c->r[11]=c->r[1]+0x00000020u; // 800F299C
  c->lr=0x800F29A4u; f_800ADA78(c); // 800F29A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F29A4
  c->lr=c->r[0]; // 800F29A8
  c->r[1]=c->r[1]+0x00000020u; // 800F29AC
  return; // 800F29B0
  unimpl(c,0x800F29B4u,"00000000"); // 800F29B4
  unimpl(c,0x800F29B8u,"00000000"); // 800F29B8
  unimpl(c,0x800F29BCu,"00000000"); // 800F29BC
  f_800F29C0(c);
}

// WUDiMoveBottomStdDevInfoPtr
void f_800F29C0(Ctx* __restrict c) {
  trace_call(0x800F29C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F29C0
  c->r[0]=c->lr; // 800F29C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F29C8
  c->r[11]=c->r[1]+0x00000020u; // 800F29CC
  c->lr=0x800F29D4u; f_800ADA2C(c); // 800F29D0
  c->r[30]=0u+0x803A0000u; // 800F29D4
  c->r[27]=c->r[3]|c->r[3]; // 800F29D8
  c->r[30]=c->r[30]+0xFFFFB7C0u; // 800F29DC
  c->lr=0x800F29E4u; f_8007FFF0(c); // 800F29E0
  c->r[29]=c->r[3]|c->r[3]; // 800F29E4
  c->r[28]=c->r[30]|c->r[30]; // 800F29E8
  c->r[31]=0u+0x00000000u; // 800F29EC
L_800F29F0:;
  c->r[3]=R32(c->r[28]+0x0000006Cu); // 800F29F0
  c->r[4]=c->r[27]+0x00000040u; // 800F29F4
  c->r[5]=0u+0x00000006u; // 800F29F8
  c->r[3]=c->r[3]+0x00000040u; // 800F29FC
  c->lr=0x800F2A04u; f_800B3824(c); // 800F2A00
  cmps(c,0,(int32_t)c->r[3],0); // 800F2A04
  if (!crb(c,2)) { goto L_800F2AA4; } // 800F2A08
  c->r[28]=(uint32_t)((int32_t)c->r[31]*(int32_t)12); // 800F2A0C
  c->r[3]=R32(c->r[30]+0x00000068u); // 800F2A10
  c->r[5]=0u+0x00000006u; // 800F2A14
  c->r[3]=R32(c->r[3]+0x00000000u); // 800F2A18
  c->r[31]=c->r[30]+c->r[28]; // 800F2A1C
  {uint32_t ea=c->r[31]+0x0000006Cu; c->r[4]=R32(ea); c->r[31]=ea;} // 800F2A20
  c->r[3]=c->r[3]+0x00000040u; // 800F2A24
  c->r[4]=c->r[4]+0x00000040u; // 800F2A28
  c->lr=0x800F2A30u; f_800B3824(c); // 800F2A2C
  cmps(c,0,(int32_t)c->r[3],0); // 800F2A30
  if (crb(c,2)) { goto L_800F2AB4; } // 800F2A34
  c->r[28]=c->r[30]+c->r[28]; // 800F2A38
  c->r[5]=0u+0x00000006u; // 800F2A3C
  c->r[3]=R32(c->r[28]+0x00000074u); // 800F2A40
  c->r[0]=R32(c->r[28]+0x00000070u); // 800F2A44
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2A48
  c->r[4]=R32(c->r[30]+0x00000064u); // 800F2A4C
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F2A50
  c->r[6]=R32(c->r[4]+0x00000000u); // 800F2A54
  c->r[4]=c->r[3]+0x00000040u; // 800F2A58
  c->r[3]=c->r[6]+0x00000040u; // 800F2A5C
  c->lr=0x800F2A64u; f_800B3824(c); // 800F2A60
  cmps(c,0,(int32_t)c->r[3],0); // 800F2A64
  if (!crb(c,2)) { goto L_800F2A78; } // 800F2A68
  c->r[0]=R32(c->r[28]+0x00000074u); // 800F2A6C
  W32(c->r[30]+0x00000064u,c->r[0]); // 800F2A70
  goto L_800F2A84; // 800F2A74
L_800F2A78:;
  c->r[3]=R32(c->r[28]+0x00000070u); // 800F2A78
  c->r[0]=R32(c->r[28]+0x00000074u); // 800F2A7C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2A80
L_800F2A84:;
  c->r[3]=R32(c->r[30]+0x00000068u); // 800F2A84
  c->r[0]=0u+0x00000000u; // 800F2A88
  W32(c->r[28]+0x00000070u,c->r[3]); // 800F2A8C
  c->r[3]=R32(c->r[30]+0x00000068u); // 800F2A90
  W32(c->r[3]+0x00000008u,c->r[31]); // 800F2A94
  W32(c->r[30]+0x00000068u,c->r[31]); // 800F2A98
  W32(c->r[28]+0x00000074u,c->r[0]); // 800F2A9C
  goto L_800F2AB4; // 800F2AA0
L_800F2AA4:;
  c->r[31]=c->r[31]+0x00000001u; // 800F2AA4
  c->r[28]=c->r[28]+0x0000000Cu; // 800F2AA8
  cmps(c,0,(int32_t)c->r[31],10); // 800F2AAC
  if (crb(c,0)) { IRQCHK(c); goto L_800F29F0; } // 800F2AB0
L_800F2AB4:;
  c->r[3]=c->r[29]|c->r[29]; // 800F2AB4
  c->lr=0x800F2ABCu; f_80080030(c); // 800F2AB8
  c->r[11]=c->r[1]+0x00000020u; // 800F2ABC
  c->lr=0x800F2AC4u; f_800ADA78(c); // 800F2AC0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F2AC4
  c->lr=c->r[0]; // 800F2AC8
  c->r[1]=c->r[1]+0x00000020u; // 800F2ACC
  return; // 800F2AD0
  unimpl(c,0x800F2AD4u,"00000000"); // 800F2AD4
  unimpl(c,0x800F2AD8u,"00000000"); // 800F2AD8
  unimpl(c,0x800F2ADCu,"00000000"); // 800F2ADC
  f_800F2AE0(c);
}

// WUDiMoveTopOfDisconnectedStdDevice
void f_800F2AE0(Ctx* __restrict c) {
  trace_call(0x800F2AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2AE0
  c->r[0]=c->lr; // 800F2AE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2AE8
  c->r[11]=c->r[1]+0x00000030u; // 800F2AEC
  c->lr=0x800F2AF4u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2AF0
  c->r[29]=0u+0x803A0000u; // 800F2AF4
  c->r[25]=c->r[3]|c->r[3]; // 800F2AF8
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F2AFC
  c->lr=0x800F2B04u; f_8007FFF0(c); // 800F2B00
  c->r[27]=c->r[3]|c->r[3]; // 800F2B04
  c->r[28]=0u+0x00000000u; // 800F2B08
  c->r[24]=0u+0x00000000u; // 800F2B0C
  c->r[31]=0u+0x80330000u; // 800F2B10
L_800F2B14:;
  c->r[30]=c->r[29]+c->r[24]; // 800F2B14
  {uint32_t ea=c->r[30]+0x0000006Cu; c->r[3]=R32(ea); c->r[30]=ea;} // 800F2B18
  c->r[4]=c->r[25]+0x00000040u; // 800F2B1C
  c->r[5]=0u+0x00000006u; // 800F2B20
  c->r[3]=c->r[3]+0x00000040u; // 800F2B24
  c->lr=0x800F2B2Cu; f_800B3824(c); // 800F2B28
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B2C
  if (!crb(c,2)) { goto L_800F2C40; } // 800F2B30
  c->r[22]=R32(c->r[29]+0x00000064u); // 800F2B34
  c->r[26]=c->r[22]|c->r[22]; // 800F2B38
  goto L_800F2C38; // 800F2B3C
L_800F2B40:;
  c->r[23]=R32(c->r[26]+0x00000000u); // 800F2B40
  c->r[4]=c->r[25]+0x00000040u; // 800F2B44
  c->r[5]=0u+0x00000006u; // 800F2B48
  c->r[3]=c->r[23]+0x00000040u; // 800F2B4C
  c->lr=0x800F2B54u; f_800B3824(c); // 800F2B50
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B54
  if (crb(c,2)) { goto L_800F2C34; } // 800F2B58
  c->r[0]=R8(c->r[23]+0x00000059u); // 800F2B5C
  cmpu(c,0,c->r[0],0x00000001u); // 800F2B60
  if (!crb(c,1)) { goto L_800F2B8C; } // 800F2B64
  c->r[3]=c->r[23]|c->r[23]; // 800F2B68
  c->r[4]=c->r[31]+0xFFFF9A2Cu; // 800F2B6C
  c->r[5]=0u+0x00000010u; // 800F2B70
  c->lr=0x800F2B78u; f_800B3824(c); // 800F2B74
  cmps(c,0,(int32_t)c->r[3],0); // 800F2B78
  if (crb(c,2)) { goto L_800F2C34; } // 800F2B7C
  c->r[0]=R32(c->r[13]+0xFFFFA0B0u); // 800F2B80
  cmps(c,0,(int32_t)c->r[0],0); // 800F2B84
  if (crb(c,2)) { goto L_800F2C34; } // 800F2B88
L_800F2B8C:;
  c->r[3]=c->r[29]+c->r[24]; // 800F2B8C
  c->r[6]=R32(c->r[22]+0x00000000u); // 800F2B90
  c->r[4]=R32(c->r[3]+0x0000006Cu); // 800F2B94
  c->r[5]=0u+0x00000006u; // 800F2B98
  c->r[3]=c->r[6]+0x00000040u; // 800F2B9C
  c->r[4]=c->r[4]+0x00000040u; // 800F2BA0
  c->lr=0x800F2BA8u; f_800B3824(c); // 800F2BA4
  cmps(c,0,(int32_t)c->r[3],0); // 800F2BA8
  if (!crb(c,2)) { goto L_800F2BCC; } // 800F2BAC
  c->r[0]=R32(c->r[22]+0x00000008u); // 800F2BB0
  cmpu(c,0,c->r[26],c->r[0]); // 800F2BB4
  if (crb(c,2)) { goto L_800F2C40; } // 800F2BB8
  c->r[5]=c->r[29]+c->r[24]; // 800F2BBC
  {uint32_t ea=c->r[5]+0x00000074u; c->r[0]=R32(ea); c->r[5]=ea;} // 800F2BC0
  W32(c->r[29]+0x00000064u,c->r[0]); // 800F2BC4
  goto L_800F2BE0; // 800F2BC8
L_800F2BCC:;
  c->r[3]=c->r[29]+c->r[24]; // 800F2BCC
  c->r[5]=c->r[3]+0x00000074u; // 800F2BD0
  c->r[3]=R32(c->r[3]+0x00000070u); // 800F2BD4
  c->r[0]=R32(c->r[5]+0x00000000u); // 800F2BD8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2BDC
L_800F2BE0:;
  c->r[4]=c->r[29]+c->r[24]; // 800F2BE0
  c->r[3]=R32(c->r[5]+0x00000000u); // 800F2BE4
  c->r[0]=R32(c->r[4]+0x00000070u); // 800F2BE8
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2BEC
  c->r[0]=R32(c->r[29]+0x00000064u); // 800F2BF0
  cmpu(c,0,c->r[26],c->r[0]); // 800F2BF4
  if (crb(c,2)) { goto L_800F2C18; } // 800F2BF8
  c->r[0]=R32(c->r[26]+0x00000004u); // 800F2BFC
  W32(c->r[4]+0x00000070u,c->r[0]); // 800F2C00
  W32(c->r[5]+0x00000000u,c->r[26]); // 800F2C04
  c->r[3]=R32(c->r[26]+0x00000004u); // 800F2C08
  W32(c->r[3]+0x00000008u,c->r[30]); // 800F2C0C
  W32(c->r[26]+0x00000004u,c->r[30]); // 800F2C10
  goto L_800F2C40; // 800F2C14
L_800F2C18:;
  W32(c->r[4]+0x00000070u,c->r[26]); // 800F2C18
  c->r[0]=R32(c->r[26]+0x00000008u); // 800F2C1C
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F2C20
  c->r[3]=R32(c->r[26]+0x00000008u); // 800F2C24
  W32(c->r[3]+0x00000004u,c->r[30]); // 800F2C28
  W32(c->r[26]+0x00000008u,c->r[30]); // 800F2C2C
  goto L_800F2C40; // 800F2C30
L_800F2C34:;
  c->r[26]=R32(c->r[26]+0x00000008u); // 800F2C34
L_800F2C38:;
  cmps(c,0,(int32_t)c->r[26],0); // 800F2C38
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2B40; } // 800F2C3C
L_800F2C40:;
  c->r[28]=c->r[28]+0x00000001u; // 800F2C40
  c->r[24]=c->r[24]+0x0000000Cu; // 800F2C44
  cmps(c,0,(int32_t)c->r[28],10); // 800F2C48
  if (crb(c,0)) { IRQCHK(c); goto L_800F2B14; } // 800F2C4C
  c->r[3]=c->r[27]|c->r[27]; // 800F2C50
  c->lr=0x800F2C58u; f_80080030(c); // 800F2C54
  c->r[11]=c->r[1]+0x00000030u; // 800F2C58
  c->lr=0x800F2C60u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2C5C
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F2C60
  c->lr=c->r[0]; // 800F2C64
  c->r[1]=c->r[1]+0x00000030u; // 800F2C68
  return; // 800F2C6C
}

// WUDiMoveTopOfUnusedStdDevice
void f_800F2C70(Ctx* __restrict c) {
  trace_call(0x800F2C70u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2C70
  c->r[0]=c->lr; // 800F2C74
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F2C78
  c->r[11]=c->r[1]+0x00000040u; // 800F2C7C
  c->lr=0x800F2C84u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2C80
  c->r[29]=0u+0x803A0000u; // 800F2C84
  c->r[25]=c->r[3]|c->r[3]; // 800F2C88
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F2C8C
  c->lr=0x800F2C94u; f_8007FFF0(c); // 800F2C90
  c->r[27]=c->r[3]|c->r[3]; // 800F2C94
  c->r[31]=c->r[29]|c->r[29]; // 800F2C98
  c->r[30]=c->r[29]+0x0000006Cu; // 800F2C9C
  c->r[28]=0u+0x00000000u; // 800F2CA0
  c->r[24]=0u+0x00000000u; // 800F2CA4
L_800F2CA8:;
  c->r[3]=R32(c->r[31]+0x0000006Cu); // 800F2CA8
  c->r[4]=c->r[25]+0x00000040u; // 800F2CAC
  c->r[5]=0u+0x00000006u; // 800F2CB0
  c->r[22]=c->r[3]+0x00000040u; // 800F2CB4
  c->r[3]=c->r[22]|c->r[22]; // 800F2CB8
  c->lr=0x800F2CC0u; f_800B3824(c); // 800F2CBC
  cmps(c,0,(int32_t)c->r[3],0); // 800F2CC0
  if (!crb(c,2)) { goto L_800F2DD4; } // 800F2CC4
  c->r[21]=R32(c->r[29]+0x00000064u); // 800F2CC8
  c->r[26]=c->r[21]|c->r[21]; // 800F2CCC
  goto L_800F2DCC; // 800F2CD0
L_800F2CD4:;
  c->r[23]=R32(c->r[26]+0x00000000u); // 800F2CD4
  c->r[4]=c->r[25]+0x00000040u; // 800F2CD8
  c->r[5]=0u+0x00000006u; // 800F2CDC
  c->r[3]=c->r[23]+0x00000040u; // 800F2CE0
  c->lr=0x800F2CE8u; f_800B3824(c); // 800F2CE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F2CE8
  if (crb(c,2)) { goto L_800F2DC8; } // 800F2CEC
  c->r[0]=R8(c->r[23]+0x00000059u); // 800F2CF0
  cmps(c,0,(int32_t)c->r[0],0); // 800F2CF4
  if (crb(c,2)) { goto L_800F2D08; } // 800F2CF8
  c->r[0]=R32(c->r[29]+0x00000068u); // 800F2CFC
  cmpu(c,0,c->r[26],c->r[0]); // 800F2D00
  if (!crb(c,2)) { goto L_800F2DC8; } // 800F2D04
L_800F2D08:;
  c->r[3]=R32(c->r[21]+0x00000000u); // 800F2D08
  c->r[4]=c->r[22]|c->r[22]; // 800F2D0C
  c->r[5]=0u+0x00000006u; // 800F2D10
  c->r[3]=c->r[3]+0x00000040u; // 800F2D14
  c->lr=0x800F2D1Cu; f_800B3824(c); // 800F2D18
  cmps(c,0,(int32_t)c->r[3],0); // 800F2D1C
  if (!crb(c,2)) { goto L_800F2D3C; } // 800F2D20
  c->r[0]=R32(c->r[21]+0x00000008u); // 800F2D24
  cmpu(c,0,c->r[26],c->r[0]); // 800F2D28
  if (crb(c,2)) { goto L_800F2DD4; } // 800F2D2C
  c->r[0]=R32(c->r[31]+0x00000074u); // 800F2D30
  W32(c->r[29]+0x00000064u,c->r[0]); // 800F2D34
  goto L_800F2D48; // 800F2D38
L_800F2D3C:;
  c->r[3]=R32(c->r[31]+0x00000070u); // 800F2D3C
  c->r[0]=R32(c->r[31]+0x00000074u); // 800F2D40
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F2D44
L_800F2D48:;
  c->r[3]=R32(c->r[31]+0x00000074u); // 800F2D48
  c->r[0]=R32(c->r[31]+0x00000070u); // 800F2D4C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F2D50
  c->r[0]=R32(c->r[29]+0x00000068u); // 800F2D54
  cmpu(c,0,c->r[26],c->r[0]); // 800F2D58
  if (!crb(c,2)) { goto L_800F2D84; } // 800F2D5C
  c->r[3]=R32(c->r[26]+0x00000000u); // 800F2D60
  c->r[0]=R8(c->r[3]+0x00000059u); // 800F2D64
  cmps(c,0,(int32_t)c->r[0],0); // 800F2D68
  if (crb(c,2)) { goto L_800F2D84; } // 800F2D6C
  W32(c->r[31]+0x00000070u,c->r[26]); // 800F2D70
  W32(c->r[31]+0x00000074u,c->r[24]); // 800F2D74
  W32(c->r[26]+0x00000008u,c->r[30]); // 800F2D78
  W32(c->r[29]+0x00000068u,c->r[30]); // 800F2D7C
  goto L_800F2DD4; // 800F2D80
L_800F2D84:;
  c->r[0]=R32(c->r[29]+0x00000064u); // 800F2D84
  cmpu(c,0,c->r[26],c->r[0]); // 800F2D88
  if (crb(c,2)) { goto L_800F2DAC; } // 800F2D8C
  c->r[0]=R32(c->r[26]+0x00000004u); // 800F2D90
  W32(c->r[31]+0x00000070u,c->r[0]); // 800F2D94
  W32(c->r[31]+0x00000074u,c->r[26]); // 800F2D98
  c->r[3]=R32(c->r[26]+0x00000004u); // 800F2D9C
  W32(c->r[3]+0x00000008u,c->r[30]); // 800F2DA0
  W32(c->r[26]+0x00000004u,c->r[30]); // 800F2DA4
  goto L_800F2DD4; // 800F2DA8
L_800F2DAC:;
  W32(c->r[31]+0x00000070u,c->r[26]); // 800F2DAC
  c->r[0]=R32(c->r[26]+0x00000008u); // 800F2DB0
  W32(c->r[31]+0x00000074u,c->r[0]); // 800F2DB4
  c->r[3]=R32(c->r[26]+0x00000008u); // 800F2DB8
  W32(c->r[3]+0x00000004u,c->r[30]); // 800F2DBC
  W32(c->r[26]+0x00000008u,c->r[30]); // 800F2DC0
  goto L_800F2DD4; // 800F2DC4
L_800F2DC8:;
  c->r[26]=R32(c->r[26]+0x00000008u); // 800F2DC8
L_800F2DCC:;
  cmps(c,0,(int32_t)c->r[26],0); // 800F2DCC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F2CD4; } // 800F2DD0
L_800F2DD4:;
  c->r[28]=c->r[28]+0x00000001u; // 800F2DD4
  c->r[30]=c->r[30]+0x0000000Cu; // 800F2DD8
  cmps(c,0,(int32_t)c->r[28],10); // 800F2DDC
  c->r[31]=c->r[31]+0x0000000Cu; // 800F2DE0
  if (crb(c,0)) { IRQCHK(c); goto L_800F2CA8; } // 800F2DE4
  c->r[3]=c->r[27]|c->r[27]; // 800F2DE8
  c->lr=0x800F2DF0u; f_80080030(c); // 800F2DEC
  c->r[11]=c->r[1]+0x00000040u; // 800F2DF0
  c->lr=0x800F2DF8u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F2DF4
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F2DF8
  c->lr=c->r[0]; // 800F2DFC
  c->r[1]=c->r[1]+0x00000040u; // 800F2E00
  return; // 800F2E04
  unimpl(c,0x800F2E08u,"00000000"); // 800F2E08
  unimpl(c,0x800F2E0Cu,"00000000"); // 800F2E0C
  f_800F2E10(c);
}

// WUDIsBusy
void f_800F2E10(Ctx* __restrict c) {
  trace_call(0x800F2E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2E10
  c->r[0]=c->lr; // 800F2E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F2E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F2E1C
  c->r[31]=0u+0x803A0000u; // 800F2E20
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F2E24
  c->lr=0x800F2E2Cu; f_8007FFF0(c); // 800F2E28
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800F2E2C
  cmps(c,0,(int32_t)c->r[0],0); // 800F2E30
  if (!crb(c,2)) { goto L_800F2E68; } // 800F2E34
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800F2E38
  cmps(c,0,(int32_t)c->r[0],0); // 800F2E3C
  if (!crb(c,2)) { goto L_800F2E68; } // 800F2E40
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 800F2E44
  cmpu(c,0,c->r[0],0x00000004u); // 800F2E48
  if (!crb(c,2)) { goto L_800F2E68; } // 800F2E4C
  c->r[0]=R8(c->r[31]+0x00000010u); // 800F2E50
  cmpu(c,0,c->r[0],0x00000007u); // 800F2E54
  if (!crb(c,2)) { goto L_800F2E68; } // 800F2E58
  c->lr=0x800F2E60u; f_80080030(c); // 800F2E5C
  c->r[3]=0u+0x00000000u; // 800F2E60
  goto L_800F2E70; // 800F2E64
L_800F2E68:;
  c->lr=0x800F2E6Cu; f_80080030(c); // 800F2E68
  c->r[3]=0u+0x00000001u; // 800F2E6C
L_800F2E70:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F2E70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F2E74
  c->lr=c->r[0]; // 800F2E78
  c->r[1]=c->r[1]+0x00000010u; // 800F2E7C
  return; // 800F2E80
  unimpl(c,0x800F2E84u,"00000000"); // 800F2E84
  unimpl(c,0x800F2E88u,"00000000"); // 800F2E88
  unimpl(c,0x800F2E8Cu,"00000000"); // 800F2E8C
  f_800F2E90(c);
}

// fn_800F2E90
void f_800F2E90(Ctx* __restrict c) {
  trace_call(0x800F2E90u);
  cmps(c,0,(int32_t)c->r[3],0); // 800F2E90
  c->r[3]=0u+0x803A0000u; // 800F2E94
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800F2E98
  if (!crb(c,2)) return; // 800F2E9C
  c->r[0]=0u+0x00000000u; // 800F2EA0
  W32(c->r[13]+0xFFFFA098u,c->r[0]); // 800F2EA4
  W8(c->r[3]+0x00000708u,c->r[0]); // 800F2EA8
  return; // 800F2EAC
}

// fn_800F2EB0
void f_800F2EB0(Ctx* __restrict c) {
  trace_call(0x800F2EB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F2EB0
  c->r[0]=c->lr; // 800F2EB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F2EB8
  c->r[11]=c->r[1]+0x00000030u; // 800F2EBC
  c->lr=0x800F2EC4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F2EC0
  c->r[29]=0u+0x803A0000u; // 800F2EC4
  cmps(c,0,(int32_t)c->r[3],0); // 800F2EC8
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F2ECC
  c->r[30]=c->r[4]|c->r[4]; // 800F2ED0
  c->r[31]=c->r[29]+0x00000000u; // 800F2ED4
  if (crb(c,2)) { goto L_800F2F08; } // 800F2ED8
  cmps(c,0,(int32_t)c->r[3],1); // 800F2EDC
  if (crb(c,2)) { goto L_800F2F80; } // 800F2EE0
  cmps(c,0,(int32_t)c->r[3],2); // 800F2EE4
  if (crb(c,2)) { goto L_800F2F90; } // 800F2EE8
  cmps(c,0,(int32_t)c->r[3],3); // 800F2EEC
  if (crb(c,2)) { goto L_800F3024; } // 800F2EF0
  cmps(c,0,(int32_t)c->r[3],5); // 800F2EF4
  if (crb(c,2)) { goto L_800F3080; } // 800F2EF8
  cmps(c,0,(int32_t)c->r[3],6); // 800F2EFC
  if (crb(c,2)) { goto L_800F3108; } // 800F2F00
  goto L_800F320C; // 800F2F04
L_800F2F08:;
  c->r[3]=c->r[31]+0x00000702u; // 800F2F08
  c->r[5]=0u+0x00000006u; // 800F2F0C
  c->lr=0x800F2F14u; f_800043C4(c); // 800F2F10
  c->r[4]=0u+0x800F0000u; // 800F2F14
  c->r[3]=0u+0x00000012u; // 800F2F18
  c->r[4]=c->r[4]+0x00003BD0u; // 800F2F1C
  c->lr=0x800F2F24u; f_800FCB10(c); // 800F2F20
  c->r[0]=0u+0x00000001u; // 800F2F24
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 800F2F28
  c->r[3]=c->r[31]+0x00000710u; // 800F2F2C
  c->lr=0x800F2F34u; f_8007A8C0(c); // 800F2F30
  c->lr=0x800F2F38u; f_80084380(c); // 800F2F34
  c->r[5]=0u+0x80000000u; // 800F2F38
  c->r[9]=0u+0x800F0000u; // 800F2F3C
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F2F40
  c->r[6]=0u+0x10620000u; // 800F2F44
  c->r[5]=c->r[3]|c->r[3]; // 800F2F48
  c->r[9]=c->r[9]+0x00000240u; // 800F2F4C
  c->r[3]=c->r[6]+0x00004DD3u; // 800F2F50
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F2F54
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F2F58
  c->r[6]=c->r[4]|c->r[4]; // 800F2F5C
  c->r[3]=c->r[31]+0x00000710u; // 800F2F60
  c->r[7]=0u+0x00000000u; // 800F2F64
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F2F68
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)10); // 800F2F6C
  c->lr=0x800F2F74u; f_8007AB90(c); // 800F2F70
  c->r[0]=0u+0x00000002u; // 800F2F74
  W8(c->r[31]+0x00000708u,c->r[0]); // 800F2F78
  goto L_800F320C; // 800F2F7C
L_800F2F80:;
  c->r[3]=0u+0x800F0000u; // 800F2F80
  c->r[3]=c->r[3]+0x00002E90u; // 800F2F84
  c->lr=0x800F2F8Cu; f_800F7460(c); // 800F2F88
  goto L_800F320C; // 800F2F8C
L_800F2F90:;
  c->r[0]=R8(c->r[31]+0x000006E9u); // 800F2F90
  cmps(c,0,(int32_t)c->r[0],0); // 800F2F94
  if (!crb(c,2)) { goto L_800F2FA4; } // 800F2F98
  c->r[31]=c->r[31]+0x00000702u; // 800F2F9C
  goto L_800F2FA8; // 800F2FA0
L_800F2FA4:;
  c->r[31]=c->r[30]|c->r[30]; // 800F2FA4
L_800F2FA8:;
  c->r[28]=c->r[29]+0x00000858u; // 800F2FA8
  c->r[0]=R8(c->r[28]+0x0000005Bu); // 800F2FAC
  cmpu(c,0,c->r[0],0x00000004u); // 800F2FB0
  if (!crb(c,2)) { goto L_800F2FC8; } // 800F2FB4
  c->r[3]=c->r[28]+0x00000040u; // 800F2FB8
  c->lr=0x800F2FC0u; f_800F2300(c); // 800F2FBC
  c->r[3]=c->r[28]+0x00000040u; // 800F2FC0
  c->lr=0x800F2FC8u; f_800FF248(c); // 800F2FC4
L_800F2FC8:;
  c->r[3]=c->r[29]+0x00000858u; // 800F2FC8
  c->r[0]=0u+0x00000001u; // 800F2FCC
  W8(c->r[3]+0x0000005Au,c->r[0]); // 800F2FD0
  c->lr=0x800F2FD8u; f_8007FFF0(c); // 800F2FD4
  c->r[0]=R8(c->r[31]+0x00000005u); // 800F2FD8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800F2FDC
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F2FE0
  W8(c->r[1]+0x00000009u,c->r[0]); // 800F2FE4
  c->r[0]=R8(c->r[31]+0x00000003u); // 800F2FE8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800F2FEC
  c->r[0]=R8(c->r[31]+0x00000002u); // 800F2FF0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800F2FF4
  c->r[0]=R8(c->r[31]+0x00000001u); // 800F2FF8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800F2FFC
  c->r[0]=R8(c->r[31]+0x00000000u); // 800F3000
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800F3004
  c->lr=0x800F300Cu; f_80080030(c); // 800F3008
  c->r[3]=c->r[30]|c->r[30]; // 800F300C
  c->r[6]=c->r[1]+0x00000008u; // 800F3010
  c->r[4]=0u+0x00000001u; // 800F3014
  c->r[5]=0u+0x00000006u; // 800F3018
  c->lr=0x800F3020u; f_800FA650(c); // 800F301C
  goto L_800F320C; // 800F3020
L_800F3024:;
  c->r[0]=R8(c->r[4]+0x0000010Fu); // 800F3024
  cmps(c,0,(int32_t)c->r[0],0); // 800F3028
  if (crb(c,2)) { goto L_800F320C; } // 800F302C
  c->r[3]=c->r[30]|c->r[30]; // 800F3030
  c->lr=0x800F3038u; f_800F2410(c); // 800F3034
  c->r[28]=c->r[29]+0x00000858u; // 800F3038
  c->r[27]=c->r[3]|c->r[3]; // 800F303C
  c->r[4]=c->r[30]|c->r[30]; // 800F3040
  c->r[5]=0u+0x00000006u; // 800F3044
  c->r[3]=c->r[28]+0x00000040u; // 800F3048
  c->lr=0x800F3050u; f_800B3824(c); // 800F304C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3050
  if (!crb(c,2)) { goto L_800F306C; } // 800F3054
  cmps(c,0,(int32_t)c->r[27],0); // 800F3058
  c->r[0]=0u+0x0000000Cu; // 800F305C
  W8(c->r[28]+0x00000059u,c->r[0]); // 800F3060
  if (!crb(c,2)) { goto L_800F306C; } // 800F3064
  c->r[27]=c->r[28]|c->r[28]; // 800F3068
L_800F306C:;
  c->r[3]=c->r[27]+0x00000046u; // 800F306C
  c->r[4]=c->r[30]+0x000000FFu; // 800F3070
  c->r[5]=0u+0x00000010u; // 800F3074
  c->lr=0x800F307Cu; f_800043C4(c); // 800F3078
  goto L_800F320C; // 800F307C
L_800F3080:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3080
  c->lr=0x800F3088u; f_800F2410(c); // 800F3084
  cmps(c,0,(int32_t)c->r[3],0); // 800F3088
  c->r[27]=c->r[3]|c->r[3]; // 800F308C
  if (!crb(c,2)) { goto L_800F30B4; } // 800F3090
  c->r[28]=c->r[29]+0x00000858u; // 800F3094
  c->r[3]=c->r[30]|c->r[30]; // 800F3098
  c->r[4]=c->r[28]+0x00000040u; // 800F309C
  c->r[5]=0u+0x00000006u; // 800F30A0
  c->lr=0x800F30A8u; f_800B3824(c); // 800F30A4
  cmps(c,0,(int32_t)c->r[3],0); // 800F30A8
  if (!crb(c,2)) { goto L_800F30B4; } // 800F30AC
  c->r[27]=c->r[28]|c->r[28]; // 800F30B0
L_800F30B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F30B4
  if (crb(c,2)) { goto L_800F30D4; } // 800F30B8
  c->lr=0x800F30C0u; f_8007FFF0(c); // 800F30BC
  c->r[4]=c->r[29]+0x00000000u; // 800F30C0
  c->r[28]=R8(c->r[4]+0x000006E5u); // 800F30C4
  c->lr=0x800F30CCu; f_80080030(c); // 800F30C8
  cmpu(c,0,c->r[28],0x00000004u); // 800F30CC
  if (!crb(c,2)) { goto L_800F30E0; } // 800F30D0
L_800F30D4:;
  c->r[3]=c->r[30]|c->r[30]; // 800F30D4
  c->lr=0x800F30DCu; f_800FF248(c); // 800F30D8
  goto L_800F320C; // 800F30DC
L_800F30E0:;
  c->r[0]=R8(c->r[27]+0x00000059u); // 800F30E0
  c->r[3]=0u+0x00000003u; // 800F30E4
  cmpu(c,0,c->r[0],0x00000002u); // 800F30E8
  if (!crb(c,2)) { goto L_800F30F4; } // 800F30EC
  c->r[3]=0u+0x0000000Cu; // 800F30F0
L_800F30F4:;
  W8(c->r[27]+0x00000059u,c->r[3]); // 800F30F4
  c->r[3]=R8(c->r[31]+0x000006E5u); // 800F30F8
  c->r[0]=c->r[3]+0x00000001u; // 800F30FC
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F3100
  goto L_800F320C; // 800F3104
L_800F3108:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3108
  c->lr=0x800F3110u; f_800F2410(c); // 800F310C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3110
  if (crb(c,2)) { goto L_800F31B8; } // 800F3114
  c->r[0]=0u+0x00000001u; // 800F3118
  W8(c->r[3]+0x00000059u,c->r[0]); // 800F311C
  c->r[3]=c->r[29]+0x00000858u; // 800F3120
  c->r[4]=c->r[30]|c->r[30]; // 800F3124
  c->r[6]=R8(c->r[31]+0x000006E5u); // 800F3128
  c->r[3]=c->r[3]+0x00000040u; // 800F312C
  c->r[5]=0u+0x00000006u; // 800F3130
  c->r[0]=c->r[6]+0xFFFFFFFFu; // 800F3134
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F3138
  c->lr=0x800F3140u; f_800B3824(c); // 800F313C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3140
  if (!crb(c,2)) { goto L_800F3150; } // 800F3144
  c->r[0]=0u+0x000000FFu; // 800F3148
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800F314C
L_800F3150:;
  c->r[0]=R8(c->r[30]+0x00000006u); // 800F3150
  cmpu(c,0,c->r[0],0x00000015u); // 800F3154
  if (!crb(c,2)) { goto L_800F31E8; } // 800F3158
  c->r[28]=c->r[29]+0x000008B8u; // 800F315C
  c->r[26]=0u+0x00000000u; // 800F3160
  c->r[29]=0u+0x00000001u; // 800F3164
L_800F3168:;
  c->r[3]=rotl(c->r[26],0)&0x000000FFu; // 800F3168
  c->r[4]=c->r[30]|c->r[30]; // 800F316C
  c->r[0]=c->r[3]+0x0000000Au; // 800F3170
  c->r[5]=0u+0x00000006u; // 800F3174
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 800F3178
  c->r[3]=c->r[28]+c->r[0]; // 800F317C
  c->r[27]=c->r[3]+0x00000001u; // 800F3180
  c->r[3]=c->r[27]|c->r[27]; // 800F3184
  c->lr=0x800F318Cu; f_800B3824(c); // 800F3188
  cmps(c,0,(int32_t)c->r[3],0); // 800F318C
  if (!crb(c,2)) { goto L_800F31A8; } // 800F3190
  c->r[3]=c->r[27]|c->r[27]; // 800F3194
  c->r[4]=0u+0x00000000u; // 800F3198
  c->r[5]=0u+0x00000046u; // 800F319C
  c->lr=0x800F31A4u; f_80004714(c); // 800F31A0
  W8(c->r[13]+0xFFFFA0CCu,c->r[29]); // 800F31A4
L_800F31A8:;
  c->r[26]=c->r[26]+0x00000001u; // 800F31A8
  cmpu(c,0,c->r[26],0x00000004u); // 800F31AC
  if (crb(c,0)) { IRQCHK(c); goto L_800F3168; } // 800F31B0
  goto L_800F31E8; // 800F31B4
L_800F31B8:;
  c->r[3]=c->r[29]+0x00000858u; // 800F31B8
  c->r[4]=c->r[30]|c->r[30]; // 800F31BC
  c->r[3]=c->r[3]+0x00000040u; // 800F31C0
  c->r[5]=0u+0x00000006u; // 800F31C4
  c->lr=0x800F31CCu; f_800B3824(c); // 800F31C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F31CC
  if (!crb(c,2)) { goto L_800F31E8; } // 800F31D0
  c->r[3]=R8(c->r[31]+0x000006E5u); // 800F31D4
  c->r[0]=0u+0x000000FFu; // 800F31D8
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800F31DC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F31E0
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F31E4
L_800F31E8:;
  c->r[0]=R8(c->r[31]+0x000006E5u); // 800F31E8
  cmpu(c,0,c->r[0],0x000000FAu); // 800F31EC
  if (crb(c,0)) { goto L_800F320C; } // 800F31F0
  c->r[3]=0u+0x80330000u; // 800F31F4
  c->r[3]=c->r[3]+0xFFFF9AE8u; // 800F31F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F31FC
  c->lr=0x800F3204u; f_8007C6D0(c); // 800F3200
  c->r[0]=0u+0x00000000u; // 800F3204
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F3208
L_800F320C:;
  c->r[11]=c->r[1]+0x00000030u; // 800F320C
  c->lr=0x800F3214u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F3210
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F3214
  c->lr=c->r[0]; // 800F3218
  c->r[1]=c->r[1]+0x00000030u; // 800F321C
  return; // 800F3220
  unimpl(c,0x800F3224u,"00000000"); // 800F3224
  unimpl(c,0x800F3228u,"00000000"); // 800F3228
  unimpl(c,0x800F322Cu,"00000000"); // 800F322C
  f_800F3230(c);
}

// fn_800F3230
void f_800F3230(Ctx* __restrict c) {
  trace_call(0x800F3230u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3230
  c->r[0]=c->lr; // 800F3234
  cmps(c,0,(int32_t)c->r[3],0); // 800F3238
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F323C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F3240
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F3244
  c->r[30]=c->r[4]|c->r[4]; // 800F3248
  if (crb(c,2)) { goto L_800F326C; } // 800F324C
  cmps(c,0,(int32_t)c->r[3],2); // 800F3250
  if (crb(c,2)) { goto L_800F32C0; } // 800F3254
  cmps(c,0,(int32_t)c->r[3],3); // 800F3258
  if (crb(c,2)) { goto L_800F32FC; } // 800F325C
  cmps(c,0,(int32_t)c->r[3],4); // 800F3260
  if (crb(c,2)) { goto L_800F3310; } // 800F3264
  goto L_800F335C; // 800F3268
L_800F326C:;
  c->r[31]=0u+0x803A0000u; // 800F326C
  c->r[0]=R8(c->r[4]+0x00000009u); // 800F3270
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F3274
  W8(c->r[13]+0xFFFFA0CEu,c->r[0]); // 800F3278
  c->r[0]=R8(c->r[31]+0x000006E7u); // 800F327C
  cmpu(c,0,c->r[0],0x00000001u); // 800F3280
  if (crb(c,2)) { goto L_800F32A4; } // 800F3284
  cmps(c,0,(int32_t)c->r[0],0); // 800F3288
  if (!crb(c,2)) { goto L_800F32AC; } // 800F328C
  c->lr=0x800F3294u; f_8007FFF0(c); // 800F3290
  c->r[31]=R8(c->r[31]+0x000006E5u); // 800F3294
  c->lr=0x800F329Cu; f_80080030(c); // 800F3298
  cmpu(c,0,c->r[31],0x00000003u); // 800F329C
  if (!crb(c,0)) { goto L_800F32AC; } // 800F32A0
L_800F32A4:;
  c->r[0]=0u+0x00001900u; // 800F32A4
  goto L_800F32B4; // 800F32A8
L_800F32AC:;
  c->r[3]=0u+0x00010000u; // 800F32AC
  c->r[0]=c->r[3]+0xFFFF8000u; // 800F32B0
L_800F32B4:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F32B4
  c->lr=0x800F32BCu; f_80100F74(c); // 800F32B8
  goto L_800F335C; // 800F32BC
L_800F32C0:;
  c->r[31]=0u+0x803A0000u; // 800F32C0
  c->r[5]=0u+0x00000006u; // 800F32C4
  c->r[3]=c->r[31]+0xFFFFBF10u; // 800F32C8
  c->lr=0x800F32D0u; f_800043C4(c); // 800F32CC
  c->r[31]=c->r[31]+0xFFFFBF10u; // 800F32D0
  c->r[4]=c->r[30]+0x00000006u; // 800F32D4
  c->r[3]=c->r[31]+0x00000006u; // 800F32D8
  c->r[5]=0u+0x00000040u; // 800F32DC
  c->lr=0x800F32E4u; f_800043C4(c); // 800F32E0
  c->r[3]=R8(c->r[13]+0xFFFFA0CFu); // 800F32E4
  c->r[0]=R32(c->r[30]+0x00000100u); // 800F32E8
  W32(c->r[31]+0x00000100u,c->r[0]); // 800F32EC
  c->r[0]=c->r[3]+0x00000001u; // 800F32F0
  W8(c->r[13]+0xFFFFA0CFu,c->r[0]); // 800F32F4
  goto L_800F335C; // 800F32F8
L_800F32FC:;
  c->r[3]=0u+0x803A0000u; // 800F32FC
  c->r[0]=0u+0x00000004u; // 800F3300
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800F3304
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800F3308
  goto L_800F335C; // 800F330C
L_800F3310:;
  c->r[3]=0u+0x00010000u; // 800F3310
  c->r[5]=0u+0x80330000u; // 800F3314
  c->r[0]=c->r[3]+0xFFFFFC4Cu; // 800F3318
  c->r[4]=0u+0x0000001Cu; // 800F331C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F3320
  c->r[5]=c->r[5]+0xFFFF9A10u; // 800F3324
  c->r[6]=0u+0x00000000u; // 800F3328
  c->lr=0x800F3330u; f_80100D3C(c); // 800F332C
  c->r[0]=0u+0x00000000u; // 800F3330
  c->r[3]=0u+0x803A0000u; // 800F3334
  W8(c->r[13]+0xFFFFA0CFu,c->r[0]); // 800F3338
  c->r[3]=c->r[3]+0xFFFFBF10u; // 800F333C
  c->r[4]=0u+0x00000000u; // 800F3340
  c->r[5]=0u+0x00000108u; // 800F3344
  c->lr=0x800F334Cu; f_80004714(c); // 800F3348
  c->r[3]=0u+0x803A0000u; // 800F334C
  c->r[0]=0u+0x00000004u; // 800F3350
  c->r[3]=c->r[3]+0xFFFFB7C0u; // 800F3354
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 800F3358
L_800F335C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F335C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3360
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F3364
  c->lr=c->r[0]; // 800F3368
  c->r[1]=c->r[1]+0x00000010u; // 800F336C
  return; // 800F3370
  unimpl(c,0x800F3374u,"00000000"); // 800F3374
  unimpl(c,0x800F3378u,"00000000"); // 800F3378
  unimpl(c,0x800F337Cu,"00000000"); // 800F337C
  f_800F3380(c);
}

// fn_800F3380
void f_800F3380(Ctx* __restrict c) {
  trace_call(0x800F3380u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3380
  c->r[0]=c->lr; // 800F3384
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3388
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F338C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3390
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3394
  c->r[29]=0u+0x803A0000u; // 800F3398
  c->r[29]=c->r[29]+0xFFFFB7C0u; // 800F339C
  c->r[0]=R8(c->r[4]+0x00000000u); // 800F33A0
  cmps(c,0,(int32_t)c->r[0],8); // 800F33A4
  if (crb(c,2)) { goto L_800F33C8; } // 800F33A8
  cmps(c,0,(int32_t)c->r[0],9); // 800F33AC
  if (crb(c,2)) { goto L_800F345C; } // 800F33B0
  cmps(c,0,(int32_t)c->r[0],10); // 800F33B4
  if (crb(c,2)) { goto L_800F35B8; } // 800F33B8
  cmps(c,0,(int32_t)c->r[0],16); // 800F33BC
  if (crb(c,2)) { goto L_800F35C4; } // 800F33C0
  goto L_800F35DC; // 800F33C4
L_800F33C8:;
  c->lr=0x800F33CCu; f_8007FFF0(c); // 800F33C8
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800F33CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F33D0
  if (!crb(c,2)) { goto L_800F3408; } // 800F33D4
  c->r[0]=R8(c->r[29]+0x0000000Du); // 800F33D8
  cmps(c,0,(int32_t)c->r[0],0); // 800F33DC
  if (!crb(c,2)) { goto L_800F3408; } // 800F33E0
  c->r[0]=R8(c->r[29]+0x0000000Fu); // 800F33E4
  cmpu(c,0,c->r[0],0x00000004u); // 800F33E8
  if (!crb(c,2)) { goto L_800F3408; } // 800F33EC
  c->r[0]=R8(c->r[29]+0x00000010u); // 800F33F0
  cmpu(c,0,c->r[0],0x00000007u); // 800F33F4
  if (!crb(c,2)) { goto L_800F3408; } // 800F33F8
  c->lr=0x800F3400u; f_80080030(c); // 800F33FC
  c->r[0]=0u+0x00000000u; // 800F3400
  goto L_800F3410; // 800F3404
L_800F3408:;
  c->lr=0x800F340Cu; f_80080030(c); // 800F3408
  c->r[0]=0u+0x00000001u; // 800F340C
L_800F3410:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F3410
  if (!crb(c,2)) { goto L_800F35DC; } // 800F3414
  c->lr=0x800F341Cu; f_8007FFF0(c); // 800F3418
  c->r[31]=R32(c->r[29]+0x00000000u); // 800F341C
  c->lr=0x800F3424u; f_80080030(c); // 800F3420
  cmps(c,0,(int32_t)c->r[31],0); // 800F3424
  if (crb(c,2)) { goto L_800F3444; } // 800F3428
  c->r[12]=c->r[31]|c->r[31]; // 800F342C
  c->r[3]=0u+0x00000000u; // 800F3430
  c->r[4]=0u+0x00000000u; // 800F3434
  c->ctr=c->r[12]; // 800F3438
  if (true) { c->lr=0x800F3440u; dispatch(c,c->ctr); } // 800F343C
  goto L_800F35DC; // 800F3440
L_800F3444:;
  c->r[3]=0u+0x00000000u; // 800F3444
  c->r[4]=0u+0x00000003u; // 800F3448
  c->r[5]=0u+0x00000000u; // 800F344C
  c->r[6]=0u+0x00000000u; // 800F3450
  c->lr=0x800F3458u; f_800F1770(c); // 800F3454
  goto L_800F35DC; // 800F3458
L_800F345C:;
  c->lr=0x800F3460u; f_8007FFF0(c); // 800F345C
  c->r[31]=R32(c->r[29]+0x00000008u); // 800F3460
  c->r[30]=c->r[3]|c->r[3]; // 800F3464
  c->lr=0x800F346Cu; f_8007FFF0(c); // 800F3468
  c->r[0]=R8(c->r[29]+0x0000000Cu); // 800F346C
  cmps(c,0,(int32_t)c->r[0],0); // 800F3470
  if (!crb(c,2)) { goto L_800F34A8; } // 800F3474
  c->r[0]=R8(c->r[29]+0x0000000Du); // 800F3478
  cmps(c,0,(int32_t)c->r[0],0); // 800F347C
  if (!crb(c,2)) { goto L_800F34A8; } // 800F3480
  c->r[0]=R8(c->r[29]+0x0000000Fu); // 800F3484
  cmpu(c,0,c->r[0],0x00000004u); // 800F3488
  if (!crb(c,2)) { goto L_800F34A8; } // 800F348C
  c->r[0]=R8(c->r[29]+0x00000010u); // 800F3490
  cmpu(c,0,c->r[0],0x00000007u); // 800F3494
  if (!crb(c,2)) { goto L_800F34A8; } // 800F3498
  c->lr=0x800F34A0u; f_80080030(c); // 800F349C
  c->r[4]=0u+0x00000000u; // 800F34A0
  goto L_800F34B0; // 800F34A4
L_800F34A8:;
  c->lr=0x800F34ACu; f_80080030(c); // 800F34A8
  c->r[4]=0u+0x00000001u; // 800F34AC
L_800F34B0:;
  c->r[0]=0u-c->r[4]; // 800F34B0
  c->r[3]=c->r[30]|c->r[30]; // 800F34B4
  c->r[0]=c->r[0]|c->r[4]; // 800F34B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F34BC
  c->r[30]=0u-c->r[0]; // 800F34C0
  c->lr=0x800F34C8u; f_80080030(c); // 800F34C4
  cmps(c,0,(int32_t)c->r[31],0); // 800F34C8
  if (crb(c,2)) { goto L_800F34E4; } // 800F34CC
  c->r[12]=c->r[31]|c->r[31]; // 800F34D0
  c->r[3]=c->r[30]|c->r[30]; // 800F34D4
  c->ctr=c->r[12]; // 800F34D8
  if (true) { c->lr=0x800F34E0u; dispatch(c,c->ctr); } // 800F34DC
  goto L_800F35DC; // 800F34E0
L_800F34E4:;
  c->r[31]=0u+0x803A0000u; // 800F34E4
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F34E8
  c->lr=0x800F34F0u; f_8007FFF0(c); // 800F34EC
  c->r[30]=R8(c->r[31]+0x00000708u); // 800F34F0
  c->r[30]=(uint32_t)(int32_t)(int8_t)c->r[30]; // 800F34F4
  c->lr=0x800F34FCu; f_80080030(c); // 800F34F8
  cmpu(c,0,c->r[30],0x00000003u); // 800F34FC
  if (!crb(c,2)) { goto L_800F35DC; } // 800F3500
  c->lr=0x800F3508u; f_8007FFF0(c); // 800F3504
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800F3508
  cmps(c,0,(int32_t)c->r[0],0); // 800F350C
  if (!crb(c,2)) { goto L_800F3544; } // 800F3510
  c->r[0]=R8(c->r[31]+0x0000000Du); // 800F3514
  cmps(c,0,(int32_t)c->r[0],0); // 800F3518
  if (!crb(c,2)) { goto L_800F3544; } // 800F351C
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 800F3520
  cmpu(c,0,c->r[0],0x00000004u); // 800F3524
  if (!crb(c,2)) { goto L_800F3544; } // 800F3528
  c->r[0]=R8(c->r[31]+0x00000010u); // 800F352C
  cmpu(c,0,c->r[0],0x00000007u); // 800F3530
  if (!crb(c,2)) { goto L_800F3544; } // 800F3534
  c->lr=0x800F353Cu; f_80080030(c); // 800F3538
  c->r[0]=0u+0x00000000u; // 800F353C
  goto L_800F354C; // 800F3540
L_800F3544:;
  c->lr=0x800F3548u; f_80080030(c); // 800F3544
  c->r[0]=0u+0x00000001u; // 800F3548
L_800F354C:;
  cmps(c,0,(int32_t)c->r[0],0); // 800F354C
  if (!crb(c,2)) { goto L_800F35DC; } // 800F3550
  c->lr=0x800F3558u; f_8007FFF0(c); // 800F3554
  c->r[0]=0u+0x00000001u; // 800F3558
  W8(c->r[31]+0x0000000Du,c->r[0]); // 800F355C
  c->r[30]=c->r[3]|c->r[3]; // 800F3560
  c->r[3]=c->r[31]+0x00000710u; // 800F3564
  c->lr=0x800F356Cu; f_8007A8C0(c); // 800F3568
  c->lr=0x800F3570u; f_80084380(c); // 800F356C
  c->r[5]=0u+0x80000000u; // 800F3570
  c->r[9]=0u+0x800F0000u; // 800F3574
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F3578
  c->r[6]=0u+0x10620000u; // 800F357C
  c->r[5]=c->r[3]|c->r[3]; // 800F3580
  c->r[9]=c->r[9]+0xFFFFFF90u; // 800F3584
  c->r[3]=c->r[6]+0x00004DD3u; // 800F3588
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F358C
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F3590
  c->r[6]=c->r[4]|c->r[4]; // 800F3594
  c->r[3]=c->r[31]+0x00000710u; // 800F3598
  c->r[7]=0u+0x00000000u; // 800F359C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 800F35A0
  c->r[8]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 800F35A4
  c->lr=0x800F35ACu; f_8007AB90(c); // 800F35A8
  c->r[3]=c->r[30]|c->r[30]; // 800F35AC
  c->lr=0x800F35B4u; f_80080030(c); // 800F35B0
  goto L_800F35DC; // 800F35B4
L_800F35B8:;
  c->r[0]=R8(c->r[4]+0x00000001u); // 800F35B8
  W8(c->r[29]+0x00000709u,c->r[0]); // 800F35BC
  goto L_800F35DC; // 800F35C0
L_800F35C4:;
  c->r[5]=0u+0x80330000u; // 800F35C4
  c->r[3]=c->r[13]+0xFFFF8750u; // 800F35C8
  c->r[5]=c->r[5]+0xFFFF9B0Cu; // 800F35CC
  c->r[4]=0u+0x0000150Bu; // 800F35D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F35D4
  c->lr=0x800F35DCu; f_8007C760(c); // 800F35D8
L_800F35DC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F35DC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F35E0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F35E4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F35E8
  c->lr=c->r[0]; // 800F35EC
  c->r[1]=c->r[1]+0x00000020u; // 800F35F0
  return; // 800F35F4
  unimpl(c,0x800F35F8u,"00000000"); // 800F35F8
  unimpl(c,0x800F35FCu,"00000000"); // 800F35FC
  f_800F3600(c);
}

// fn_800F3600
void f_800F3600(Ctx* __restrict c) {
  trace_call(0x800F3600u);
  cmpu(c,0,c->r[3],0x00000002u); // 800F3600
  if (!crb(c,2)) return; // 800F3604
  c->r[3]=0u+0x80330000u; // 800F3608
  c->r[3]=c->r[3]+0xFFFF9B20u; // 800F360C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3610
  f_8007C6D0(c); return; // 800F3614
  return; // 800F3618
  unimpl(c,0x800F361Cu,"00000000"); // 800F361C
  f_800F3620(c);
}

// fn_800F3620
void f_800F3620(Ctx* __restrict c) {
  trace_call(0x800F3620u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3620
  c->r[0]=c->lr; // 800F3624
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F3628
  c->r[11]=c->r[1]+0x00000030u; // 800F362C
  c->lr=0x800F3634u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F3630
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F3634
  c->r[4]=0u+0x803A0000u; // 800F3638
  c->r[28]=c->r[3]|c->r[3]; // 800F363C
  cmps(c,0,(int32_t)c->r[0],1); // 800F3640
  c->r[30]=c->r[4]+0xFFFFB7C0u; // 800F3644
  if (crb(c,2)) { goto L_800F3668; } // 800F3648
  cmps(c,0,(int32_t)c->r[0],2); // 800F364C
  if (crb(c,2)) { goto L_800F37BC; } // 800F3650
  cmps(c,0,(int32_t)c->r[0],3); // 800F3654
  if (crb(c,2)) { goto L_800F37C8; } // 800F3658
  cmps(c,0,(int32_t)c->r[0],4); // 800F365C
  if (crb(c,2)) { goto L_800F37D4; } // 800F3660
  goto L_800F37E0; // 800F3664
L_800F3668:;
  c->r[31]=c->r[3]+0x00000002u; // 800F3668
  c->r[29]=0u+0x00000000u; // 800F366C
  c->r[24]=0u+0x00000001u; // 800F3670
  c->r[25]=0u+0x00000003u; // 800F3674
  c->r[26]=0u+0x0000000Au; // 800F3678
  c->r[27]=0u+0x00000006u; // 800F367C
  goto L_800F37AC; // 800F3680
L_800F3684:;
  c->r[3]=c->r[31]|c->r[31]; // 800F3684
  c->lr=0x800F368Cu; f_800F2410(c); // 800F3688
  cmps(c,0,(int32_t)c->r[3],0); // 800F368C
  c->r[23]=c->r[3]|c->r[3]; // 800F3690
  if (!crb(c,2)) { goto L_800F3764; } // 800F3694
  c->lr=0x800F369Cu; f_8007FFF0(c); // 800F3698
  c->r[0]=R8(c->r[30]+0x000006E9u); // 800F369C
  cmps(c,0,(int32_t)c->r[0],0); // 800F36A0
  if (!crb(c,2)) { goto L_800F36E4; } // 800F36A4
  c->r[5]=c->r[30]|c->r[30]; // 800F36A8
  c->r[23]=0u+0x00000000u; // 800F36AC
  c->r[4]=0u+0x00000000u; // 800F36B0
  c->ctr=c->r[26]; // 800F36B4
L_800F36B8:;
  c->r[0]=R8(c->r[5]+0x0000013Du); // 800F36B8
  cmps(c,0,(int32_t)c->r[0],0); // 800F36BC
  if (!crb(c,2)) { goto L_800F36D4; } // 800F36C0
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)96); // 800F36C4
  c->r[4]=c->r[30]+c->r[0]; // 800F36C8
  c->r[23]=c->r[4]+0x000000E4u; // 800F36CC
  goto L_800F36EC; // 800F36D0
L_800F36D4:;
  c->r[5]=c->r[5]+0x00000060u; // 800F36D4
  c->r[4]=c->r[4]+0x00000001u; // 800F36D8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F36B8; } // 800F36DC
  goto L_800F36EC; // 800F36E0
L_800F36E4:;
  c->r[4]=R32(c->r[30]+0x00000018u); // 800F36E4
  c->r[23]=R32(c->r[4]+0x00000000u); // 800F36E8
L_800F36EC:;
  c->lr=0x800F36F0u; f_80080030(c); // 800F36EC
  cmps(c,0,(int32_t)c->r[23],0); // 800F36F0
  if (!crb(c,2)) { goto L_800F3730; } // 800F36F4
  c->r[3]=c->r[30]|c->r[30]; // 800F36F8
  c->r[29]=0u+0x00000000u; // 800F36FC
  c->ctr=c->r[27]; // 800F3700
  c->r[0]=c->r[0]|0x00000000u; // 800F3704
L_800F3708:;
  c->r[0]=R8(c->r[3]+0x000004FDu); // 800F3708
  cmps(c,0,(int32_t)c->r[0],0); // 800F370C
  if (!crb(c,2)) { goto L_800F3724; } // 800F3710
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)96); // 800F3714
  c->r[3]=c->r[30]+c->r[0]; // 800F3718
  c->r[23]=c->r[3]+0x000004A4u; // 800F371C
  goto L_800F3730; // 800F3720
L_800F3724:;
  c->r[3]=c->r[3]+0x00000060u; // 800F3724
  c->r[29]=c->r[29]+0x00000001u; // 800F3728
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F3708; } // 800F372C
L_800F3730:;
  cmps(c,0,(int32_t)c->r[23],0); // 800F3730
  if (crb(c,2)) { goto L_800F37A4; } // 800F3734
  W8(c->r[23]+0x0000005Cu,c->r[24]); // 800F3738
  c->r[4]=c->r[31]|c->r[31]; // 800F373C
  c->r[3]=c->r[23]+0x00000040u; // 800F3740
  c->r[5]=0u+0x00000006u; // 800F3744
  W8(c->r[23]+0x00000059u,c->r[24]); // 800F3748
  c->lr=0x800F3750u; f_800043C4(c); // 800F374C
  c->r[3]=c->r[23]+0x00000046u; // 800F3750
  c->r[4]=c->r[31]+0x00000006u; // 800F3754
  c->r[5]=0u+0x00000010u; // 800F3758
  c->lr=0x800F3760u; f_800043C4(c); // 800F375C
  goto L_800F37A4; // 800F3760
L_800F3764:;
  c->r[4]=c->r[31]|c->r[31]; // 800F3764
  c->r[5]=0u+0x00000006u; // 800F3768
  c->r[3]=c->r[3]+0x00000040u; // 800F376C
  c->lr=0x800F3774u; f_800043C4(c); // 800F3770
  c->r[3]=c->r[23]+0x00000046u; // 800F3774
  c->r[4]=c->r[31]+0x00000006u; // 800F3778
  c->r[5]=0u+0x00000010u; // 800F377C
  c->lr=0x800F3784u; f_800043C4(c); // 800F3780
  c->r[0]=R8(c->r[23]+0x0000005Cu); // 800F3784
  cmpu(c,0,c->r[0],0x00000002u); // 800F3788
  if (!crb(c,2)) { goto L_800F3794; } // 800F378C
  W8(c->r[23]+0x0000005Cu,c->r[25]); // 800F3790
L_800F3794:;
  c->r[4]=c->r[31]|c->r[31]; // 800F3794
  c->r[3]=c->r[30]+0x000006FCu; // 800F3798
  c->r[5]=0u+0x00000006u; // 800F379C
  c->lr=0x800F37A4u; f_800043C4(c); // 800F37A0
L_800F37A4:;
  c->r[31]=c->r[31]+0x00000016u; // 800F37A4
  c->r[29]=c->r[29]+0x00000001u; // 800F37A8
L_800F37AC:;
  c->r[0]=R8(c->r[28]+0x00000001u); // 800F37AC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800F37B0
  if (crb(c,0)) { IRQCHK(c); goto L_800F3684; } // 800F37B4
  goto L_800F37F8; // 800F37B8
L_800F37BC:;
  c->r[0]=0u+0x00000000u; // 800F37BC
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 800F37C0
  goto L_800F37F8; // 800F37C4
L_800F37C8:;
  c->r[0]=0u+0x00000000u; // 800F37C8
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 800F37CC
  goto L_800F37F8; // 800F37D0
L_800F37D4:;
  c->r[0]=0u+0x00000000u; // 800F37D4
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 800F37D8
  goto L_800F37F8; // 800F37DC
L_800F37E0:;
  c->r[5]=0u+0x80330000u; // 800F37E0
  c->r[3]=c->r[13]+0xFFFF8750u; // 800F37E4
  c->r[5]=c->r[5]+0xFFFF9B48u; // 800F37E8
  c->r[4]=0u+0x000015A8u; // 800F37EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F37F0
  c->lr=0x800F37F8u; f_8007C760(c); // 800F37F4
L_800F37F8:;
  c->r[11]=c->r[1]+0x00000030u; // 800F37F8
  c->lr=0x800F3800u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F37FC
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F3800
  c->lr=c->r[0]; // 800F3804
  c->r[1]=c->r[1]+0x00000030u; // 800F3808
  return; // 800F380C
}

// fn_800F3810
void f_800F3810(Ctx* __restrict c) {
  trace_call(0x800F3810u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3810
  c->r[0]=c->lr; // 800F3814
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3818
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F381C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3820
  c->r[30]=c->r[4]|c->r[4]; // 800F3824
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3828
  c->r[29]=c->r[3]|c->r[3]; // 800F382C
  c->lr=0x800F3834u; f_800F2410(c); // 800F3830
  cmps(c,0,(int32_t)c->r[3],0); // 800F3834
  if (!crb(c,2)) { goto L_800F3868; } // 800F3838
  c->r[31]=0u+0x803A0000u; // 800F383C
  c->r[4]=c->r[29]|c->r[29]; // 800F3840
  c->r[31]=c->r[31]+0xFFFFC018u; // 800F3844
  c->r[5]=0u+0x00000006u; // 800F3848
  c->r[3]=c->r[31]+0x00000040u; // 800F384C
  c->lr=0x800F3854u; f_800B3824(c); // 800F3850
  cmps(c,0,(int32_t)c->r[3],0); // 800F3854
  if (!crb(c,2)) { goto L_800F3890; } // 800F3858
  c->r[3]=c->r[31]|c->r[31]; // 800F385C
  goto L_800F3868; // 800F3860
  goto L_800F3890; // 800F3864
L_800F3868:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F3868
  if (crb(c,2)) { goto L_800F387C; } // 800F386C
  cmps(c,0,(int32_t)c->r[30],2); // 800F3870
  if (crb(c,2)) { goto L_800F3888; } // 800F3874
  goto L_800F3890; // 800F3878
L_800F387C:;
  c->r[0]=0u+0x00000008u; // 800F387C
  W8(c->r[3]+0x00000059u,c->r[0]); // 800F3880
  goto L_800F3890; // 800F3884
L_800F3888:;
  c->r[0]=0u+0x00000009u; // 800F3888
  W8(c->r[3]+0x00000059u,c->r[0]); // 800F388C
L_800F3890:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3890
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3894
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3898
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F389C
  c->lr=c->r[0]; // 800F38A0
  c->r[1]=c->r[1]+0x00000020u; // 800F38A4
  return; // 800F38A8
  unimpl(c,0x800F38ACu,"00000000"); // 800F38AC
  f_800F38B0(c);
}

// _WUDGetDevAddr
void f_800F38B0(Ctx* __restrict c) {
  trace_call(0x800F38B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F38B0
  c->r[0]=c->lr; // 800F38B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F38B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F38BC
  c->r[31]=c->r[3]|c->r[3]; // 800F38C0
  c->lr=0x800F38C8u; f_8007FFF0(c); // 800F38C4
  cmpu(c,0,c->r[31],0x00000010u); // 800F38C8
  if (!crb(c,0)) { goto L_800F38E4; } // 800F38CC
  c->r[4]=0u+0x803A0000u; // 800F38D0
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800F38D4
  c->r[4]=c->r[4]+0xFFFFC580u; // 800F38D8
  c->r[31]=R32(c->r[4]+c->r[0]); // 800F38DC
  goto L_800F38E8; // 800F38E0
L_800F38E4:;
  c->r[31]=0u+0x00000000u; // 800F38E4
L_800F38E8:;
  c->lr=0x800F38ECu; f_80080030(c); // 800F38E8
  c->r[3]=c->r[31]|c->r[31]; // 800F38EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F38F0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F38F4
  c->lr=c->r[0]; // 800F38F8
  c->r[1]=c->r[1]+0x00000010u; // 800F38FC
  return; // 800F3900
  unimpl(c,0x800F3904u,"00000000"); // 800F3904
  unimpl(c,0x800F3908u,"00000000"); // 800F3908
  unimpl(c,0x800F390Cu,"00000000"); // 800F390C
  f_800F3910(c);
}

// _WUDGetQueuedSize
void f_800F3910(Ctx* __restrict c) {
  trace_call(0x800F3910u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3910
  c->r[0]=c->lr; // 800F3914
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3918
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F391C
  c->r[31]=c->r[3]|c->r[3]; // 800F3920
  c->lr=0x800F3928u; f_8007FFF0(c); // 800F3924
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F3928
  cmpu(c,0,c->r[0],0x0000000Fu); // 800F392C
  if (crb(c,1)) { goto L_800F3948; } // 800F3930
  c->r[4]=0u+0x803A0000u; // 800F3934
  c->r[0]=rotl(c->r[31],1)&0x000001FEu; // 800F3938
  c->r[4]=c->r[4]+0xFFFFD928u; // 800F393C
  c->r[31]=R16(c->r[4]+c->r[0]); // 800F3940
  goto L_800F394C; // 800F3944
L_800F3948:;
  c->r[31]=0u+0x00000000u; // 800F3948
L_800F394C:;
  c->lr=0x800F3950u; f_80080030(c); // 800F394C
  c->r[3]=c->r[31]|c->r[31]; // 800F3950
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F3954
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3958
  c->lr=c->r[0]; // 800F395C
  c->r[1]=c->r[1]+0x00000010u; // 800F3960
  return; // 800F3964
  unimpl(c,0x800F3968u,"00000000"); // 800F3968
  unimpl(c,0x800F396Cu,"00000000"); // 800F396C
  f_800F3970(c);
}

// _WUDGetNotAckedSize
void f_800F3970(Ctx* __restrict c) {
  trace_call(0x800F3970u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3970
  c->r[0]=c->lr; // 800F3974
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3978
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F397C
  c->r[31]=c->r[3]|c->r[3]; // 800F3980
  c->lr=0x800F3988u; f_8007FFF0(c); // 800F3984
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F3988
  cmpu(c,0,c->r[0],0x0000000Fu); // 800F398C
  if (crb(c,1)) { goto L_800F39A8; } // 800F3990
  c->r[4]=0u+0x803A0000u; // 800F3994
  c->r[0]=rotl(c->r[31],1)&0x000001FEu; // 800F3998
  c->r[4]=c->r[4]+0xFFFFD948u; // 800F399C
  c->r[31]=R16(c->r[4]+c->r[0]); // 800F39A0
  goto L_800F39AC; // 800F39A4
L_800F39A8:;
  c->r[31]=0u+0x00000000u; // 800F39A8
L_800F39AC:;
  c->lr=0x800F39B0u; f_80080030(c); // 800F39AC
  c->r[3]=c->r[31]|c->r[31]; // 800F39B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F39B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F39B8
  c->lr=c->r[0]; // 800F39BC
  c->r[1]=c->r[1]+0x00000010u; // 800F39C0
  return; // 800F39C4
  unimpl(c,0x800F39C8u,"00000000"); // 800F39C8
  unimpl(c,0x800F39CCu,"00000000"); // 800F39CC
  f_800F39D0(c);
}

// _WUDGetLinkNumber
void f_800F39D0(Ctx* __restrict c) {
  trace_call(0x800F39D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F39D0
  c->r[0]=c->lr; // 800F39D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F39D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F39DC
  c->lr=0x800F39E4u; f_8007FFF0(c); // 800F39E0
  c->r[4]=0u+0x803A0000u; // 800F39E4
  c->r[4]=c->r[4]+0xFFFFB7C0u; // 800F39E8
  c->r[31]=R8(c->r[4]+0x000006E5u); // 800F39EC
  c->lr=0x800F39F4u; f_80080030(c); // 800F39F0
  c->r[3]=c->r[31]|c->r[31]; // 800F39F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F39F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F39FC
  c->lr=c->r[0]; // 800F3A00
  c->r[1]=c->r[1]+0x00000010u; // 800F3A04
  return; // 800F3A08
  unimpl(c,0x800F3A0Cu,"00000000"); // 800F3A0C
  f_800F3A10(c);
}

// WUDiGetDiscoverDevice
void f_800F3A10(Ctx* __restrict c) {
  trace_call(0x800F3A10u);
  c->r[3]=0u+0x803A0000u; // 800F3A10
  c->r[3]=c->r[3]+0xFFFFC018u; // 800F3A14
  return; // 800F3A18
  unimpl(c,0x800F3A1Cu,"00000000"); // 800F3A1C
  f_800F3A20(c);
}

// WUDSetDeviceHistory
void f_800F3A20(Ctx* __restrict c) {
  trace_call(0x800F3A20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3A20
  c->r[0]=c->lr; // 800F3A24
  cmps(c,0,(int32_t)c->r[4],0); // 800F3A28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3A2C
  if (!crb(c,2)) { goto L_800F3A5C; } // 800F3A30
  c->r[0]=c->r[3]+0x0000000Au; // 800F3A34
  c->r[3]=0u+0x803A0000u; // 800F3A38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 800F3A3C
  c->r[4]=0u+0x00000000u; // 800F3A40
  c->r[3]=c->r[3]+0xFFFFC078u; // 800F3A44
  c->r[5]=0u+0x00000046u; // 800F3A48
  c->r[3]=c->r[3]+c->r[0]; // 800F3A4C
  c->r[3]=c->r[3]+0x00000001u; // 800F3A50
  c->lr=0x800F3A58u; f_80004714(c); // 800F3A54
  goto L_800F3A7C; // 800F3A58
L_800F3A5C:;
  c->r[0]=c->r[3]+0x0000000Au; // 800F3A5C
  c->r[3]=0u+0x803A0000u; // 800F3A60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 800F3A64
  c->r[5]=0u+0x00000006u; // 800F3A68
  c->r[3]=c->r[3]+0xFFFFC078u; // 800F3A6C
  c->r[3]=c->r[3]+c->r[0]; // 800F3A70
  c->r[3]=c->r[3]+0x00000001u; // 800F3A74
  c->lr=0x800F3A7Cu; f_800043C4(c); // 800F3A78
L_800F3A7C:;
  c->r[0]=0u+0x00000001u; // 800F3A7C
  W8(c->r[13]+0xFFFFA0CCu,c->r[0]); // 800F3A80
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3A84
  c->lr=c->r[0]; // 800F3A88
  c->r[1]=c->r[1]+0x00000010u; // 800F3A8C
  return; // 800F3A90
  unimpl(c,0x800F3A94u,"00000000"); // 800F3A94
  unimpl(c,0x800F3A98u,"00000000"); // 800F3A98
  unimpl(c,0x800F3A9Cu,"00000000"); // 800F3A9C
  f_800F3AA0(c);
}

// WUDIsLatestDevice
void f_800F3AA0(Ctx* __restrict c) {
  trace_call(0x800F3AA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3AA0
  c->r[0]=c->lr; // 800F3AA4
  cmps(c,0,(int32_t)c->r[4],0); // 800F3AA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3AAC
  if (!crb(c,2)) { goto L_800F3ABC; } // 800F3AB0
  c->r[3]=0u+0x00000000u; // 800F3AB4
  goto L_800F3AE4; // 800F3AB8
L_800F3ABC:;
  c->r[0]=c->r[3]+0x0000000Au; // 800F3ABC
  c->r[3]=0u+0x803A0000u; // 800F3AC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)70); // 800F3AC4
  c->r[5]=0u+0x00000006u; // 800F3AC8
  c->r[3]=c->r[3]+0xFFFFC078u; // 800F3ACC
  c->r[3]=c->r[3]+c->r[0]; // 800F3AD0
  c->r[3]=c->r[3]+0x00000001u; // 800F3AD4
  c->lr=0x800F3ADCu; f_800B3824(c); // 800F3AD8
  c->r[0]=cntlz(c->r[3]); // 800F3ADC
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 800F3AE0
L_800F3AE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3AE4
  c->lr=c->r[0]; // 800F3AE8
  c->r[1]=c->r[1]+0x00000010u; // 800F3AEC
  return; // 800F3AF0
  unimpl(c,0x800F3AF4u,"00000000"); // 800F3AF4
  unimpl(c,0x800F3AF8u,"00000000"); // 800F3AF8
  unimpl(c,0x800F3AFCu,"00000000"); // 800F3AFC
  f_800F3B00(c);
}

// WUDUpdateSCSetting
void f_800F3B00(Ctx* __restrict c) {
  trace_call(0x800F3B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3B00
  c->r[0]=c->lr; // 800F3B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F3B08
  c->r[0]=R8(c->r[13]+0xFFFFA0CCu); // 800F3B0C
  cmps(c,0,(int32_t)c->r[0],0); // 800F3B10
  if (crb(c,2)) { goto L_800F3B3C; } // 800F3B14
  c->r[3]=0u+0x803A0000u; // 800F3B18
  c->r[3]=c->r[3]+0xFFFFC078u; // 800F3B1C
  c->lr=0x800F3B24u; f_800DB9B0(c); // 800F3B20
  cmps(c,0,(int32_t)c->r[3],0); // 800F3B24
  if (crb(c,2)) { goto L_800F3B3C; } // 800F3B28
  c->r[3]=0u+0x00000000u; // 800F3B2C
  c->lr=0x800F3B34u; f_800DB1E0(c); // 800F3B30
  c->r[0]=0u+0x00000000u; // 800F3B34
  W8(c->r[13]+0xFFFFA0CCu,c->r[0]); // 800F3B38
L_800F3B3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F3B3C
  c->lr=c->r[0]; // 800F3B40
  c->r[1]=c->r[1]+0x00000010u; // 800F3B44
  return; // 800F3B48
  unimpl(c,0x800F3B4Cu,"00000000"); // 800F3B4C
  f_800F3B50(c);
}

// WUDiSetDevAddrForHandle
void f_800F3B50(Ctx* __restrict c) {
  trace_call(0x800F3B50u);
  c->r[5]=0u+0x803A0000u; // 800F3B50
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800F3B54
  c->r[5]=c->r[5]+0xFFFFC580u; // 800F3B58
  W32(c->r[5]+c->r[0],c->r[4]); // 800F3B5C
  return; // 800F3B60
  unimpl(c,0x800F3B64u,"00000000"); // 800F3B64
  unimpl(c,0x800F3B68u,"00000000"); // 800F3B68
  unimpl(c,0x800F3B6Cu,"00000000"); // 800F3B6C
  f_800F3B70(c);
}

// WUDiGetDevAddrForHandle
void f_800F3B70(Ctx* __restrict c) {
  trace_call(0x800F3B70u);
  c->r[4]=0u+0x803A0000u; // 800F3B70
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800F3B74
  c->r[4]=c->r[4]+0xFFFFC580u; // 800F3B78
  c->r[3]=R32(c->r[4]+c->r[0]); // 800F3B7C
  return; // 800F3B80
  unimpl(c,0x800F3B84u,"00000000"); // 800F3B84
  unimpl(c,0x800F3B88u,"00000000"); // 800F3B88
  unimpl(c,0x800F3B8Cu,"00000000"); // 800F3B8C
  f_800F3B90(c);
}

// WUDiSetQueueSizeForHandle
void f_800F3B90(Ctx* __restrict c) {
  trace_call(0x800F3B90u);
  c->r[5]=0u+0x803A0000u; // 800F3B90
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 800F3B94
  c->r[5]=c->r[5]+0xFFFFD928u; // 800F3B98
  W16(c->r[5]+c->r[0],c->r[4]); // 800F3B9C
  return; // 800F3BA0
  unimpl(c,0x800F3BA4u,"00000000"); // 800F3BA4
  unimpl(c,0x800F3BA8u,"00000000"); // 800F3BA8
  unimpl(c,0x800F3BACu,"00000000"); // 800F3BAC
  f_800F3BB0(c);
}

// WUDiSetNotAckNumForHandle
void f_800F3BB0(Ctx* __restrict c) {
  trace_call(0x800F3BB0u);
  c->r[5]=0u+0x803A0000u; // 800F3BB0
  c->r[0]=rotl(c->r[3],1)&0x000001FEu; // 800F3BB4
  c->r[5]=c->r[5]+0xFFFFD948u; // 800F3BB8
  W16(c->r[5]+c->r[0],c->r[4]); // 800F3BBC
  return; // 800F3BC0
  unimpl(c,0x800F3BC4u,"00000000"); // 800F3BC4
  unimpl(c,0x800F3BC8u,"00000000"); // 800F3BC8
  unimpl(c,0x800F3BCCu,"00000000"); // 800F3BCC
  f_800F3BD0(c);
}

// fn_800F3BD0
void f_800F3BD0(Ctx* __restrict c) {
  trace_call(0x800F3BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F3BD0
  c->r[0]=c->lr; // 800F3BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3BD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F3BDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F3BE0
  c->r[31]=0u+0x803A0000u; // 800F3BE4
  c->r[31]=c->r[31]+0xFFFFB7C0u; // 800F3BE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F3BEC
  c->r[30]=c->r[4]|c->r[4]; // 800F3BF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F3BF4
  if (crb(c,2)) { goto L_800F3C20; } // 800F3BF8
  cmps(c,0,(int32_t)c->r[3],2); // 800F3BFC
  if (crb(c,2)) { goto L_800F3C30; } // 800F3C00
  cmps(c,0,(int32_t)c->r[3],3); // 800F3C04
  if (crb(c,2)) { goto L_800F3E50; } // 800F3C08
  cmps(c,0,(int32_t)c->r[3],11); // 800F3C0C
  if (crb(c,2)) { goto L_800F3F14; } // 800F3C10
  cmps(c,0,(int32_t)c->r[3],15); // 800F3C14
  if (crb(c,2)) { goto L_800F3F4C; } // 800F3C18
  goto L_800F3FC4; // 800F3C1C
L_800F3C20:;
  c->r[0]=R32(c->r[31]+0x00000740u); // 800F3C20
  c->r[0]=c->r[0]|0x00000001u; // 800F3C24
  W32(c->r[31]+0x00000740u,c->r[0]); // 800F3C28
  goto L_800F3FC4; // 800F3C2C
L_800F3C30:;
  c->r[0]=R8(c->r[4]+0x00000006u); // 800F3C30
  cmps(c,0,(int32_t)c->r[0],0); // 800F3C34
  if (!crb(c,2)) { goto L_800F3D78; } // 800F3C38
  c->lr=0x800F3C40u; f_800F3A10(c); // 800F3C3C
  c->r[29]=c->r[3]|c->r[3]; // 800F3C40
  c->r[4]=c->r[30]|c->r[30]; // 800F3C44
  c->r[5]=0u+0x00000006u; // 800F3C48
  c->r[3]=c->r[3]+0x00000040u; // 800F3C4C
  c->lr=0x800F3C54u; f_800B3824(c); // 800F3C50
  cmps(c,0,(int32_t)c->r[3],0); // 800F3C54
  if (crb(c,2)) { goto L_800F3C68; } // 800F3C58
  c->r[3]=c->r[30]|c->r[30]; // 800F3C5C
  c->lr=0x800F3C64u; f_800F2410(c); // 800F3C60
  c->r[29]=c->r[3]|c->r[3]; // 800F3C64
L_800F3C68:;
  c->r[0]=R8(c->r[29]+0x00000059u); // 800F3C68
  cmps(c,0,(int32_t)c->r[0],12); // 800F3C6C
  if (crb(c,2)) { goto L_800F3C80; } // 800F3C70
  cmps(c,0,(int32_t)c->r[0],2); // 800F3C74
  if (crb(c,2)) { goto L_800F3C8C; } // 800F3C78
  goto L_800F3C94; // 800F3C7C
L_800F3C80:;
  c->r[0]=0u+0x00000012u; // 800F3C80
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800F3C84
  goto L_800F3C94; // 800F3C88
L_800F3C8C:;
  c->r[0]=0u+0x00000017u; // 800F3C8C
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800F3C90
L_800F3C94:;
  c->r[0]=0u+0x00000008u; // 800F3C94
  W8(c->r[29]+0x00000059u,c->r[0]); // 800F3C98
  c->r[3]=c->r[30]|c->r[30]; // 800F3C9C
  c->r[0]=R8(c->r[30]+0x00000007u); // 800F3CA0
  W8(c->r[29]+0x00000056u,c->r[0]); // 800F3CA4
  c->r[4]=R8(c->r[31]+0x000006E4u); // 800F3CA8
  c->r[0]=c->r[4]+0x00000001u; // 800F3CAC
  W8(c->r[31]+0x000006E4u,c->r[0]); // 800F3CB0
  c->lr=0x800F3CB8u; f_800F2410(c); // 800F3CB4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3CB8
  c->r[29]=c->r[3]|c->r[3]; // 800F3CBC
  if (!crb(c,2)) { goto L_800F3CCC; } // 800F3CC0
  c->lr=0x800F3CC8u; f_800F3A10(c); // 800F3CC4
  c->r[29]=c->r[3]|c->r[3]; // 800F3CC8
L_800F3CCC:;
  c->r[3]=R8(c->r[30]+0x00000007u); // 800F3CCC
  c->r[4]=c->r[29]+0x00000040u; // 800F3CD0
  c->lr=0x800F3CD8u; f_800F3B50(c); // 800F3CD4
  c->r[3]=R8(c->r[30]+0x00000007u); // 800F3CD8
  c->r[4]=0u+0x00000000u; // 800F3CDC
  c->lr=0x800F3CE4u; f_800F3B90(c); // 800F3CE0
  c->r[3]=R8(c->r[30]+0x00000007u); // 800F3CE4
  c->r[4]=0u+0x00000000u; // 800F3CE8
  c->lr=0x800F3CF0u; f_800F3BB0(c); // 800F3CEC
  c->r[0]=R8(c->r[29]+0x0000005Bu); // 800F3CF0
  cmpu(c,0,c->r[0],0x00000003u); // 800F3CF4
  if (crb(c,2)) { goto L_800F3D04; } // 800F3CF8
  cmpu(c,0,c->r[0],0x00000001u); // 800F3CFC
  if (!crb(c,2)) { goto L_800F3D10; } // 800F3D00
L_800F3D04:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3D04
  c->lr=0x800F3D0Cu; f_800F24F0(c); // 800F3D08
  goto L_800F3D4C; // 800F3D0C
L_800F3D10:;
  c->lr=0x800F3D14u; f_800EE4F0(c); // 800F3D10
  cmps(c,0,(int32_t)c->r[3],0); // 800F3D14
  if (crb(c,2)) { goto L_800F3D44; } // 800F3D18
  c->lr=0x800F3D20u; f_800EE4F0(c); // 800F3D1C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3D20
  if (crb(c,2)) { goto L_800F3D4C; } // 800F3D24
  c->r[4]=0u+0x80330000u; // 800F3D28
  c->r[3]=c->r[29]|c->r[29]; // 800F3D2C
  c->r[4]=c->r[4]+0xFFFF9B58u; // 800F3D30
  c->r[5]=0u+0x00000010u; // 800F3D34
  c->lr=0x800F3D3Cu; f_800B3824(c); // 800F3D38
  cmps(c,0,(int32_t)c->r[3],0); // 800F3D3C
  if (!crb(c,2)) { goto L_800F3D4C; } // 800F3D40
L_800F3D44:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3D44
  c->lr=0x800F3D4Cu; f_800F28A0(c); // 800F3D48
L_800F3D4C:;
  c->r[3]=c->r[29]+0x00000040u; // 800F3D4C
  c->r[4]=0u+0x00000008u; // 800F3D50
  c->lr=0x800F3D58u; f_800F16B0(c); // 800F3D54
  c->r[12]=R32(c->r[31]+0x000006F0u); // 800F3D58
  cmps(c,0,(int32_t)c->r[12],0); // 800F3D5C
  if (crb(c,2)) { goto L_800F3FC4; } // 800F3D60
  c->r[3]=c->r[29]|c->r[29]; // 800F3D64
  c->r[4]=0u+0x00000001u; // 800F3D68
  c->ctr=c->r[12]; // 800F3D6C
  if (true) { c->lr=0x800F3D74u; dispatch(c,c->ctr); } // 800F3D70
  goto L_800F3FC4; // 800F3D74
L_800F3D78:;
  c->r[0]=R8(c->r[31]+0x0000000Cu); // 800F3D78
  cmps(c,0,(int32_t)c->r[0],0); // 800F3D7C
  if (crb(c,2)) { goto L_800F3DEC; } // 800F3D80
  c->lr=0x800F3D88u; f_800F3A10(c); // 800F3D84
  c->r[29]=c->r[3]|c->r[3]; // 800F3D88
  c->r[3]=c->r[30]|c->r[30]; // 800F3D8C
  c->r[4]=c->r[29]+0x00000040u; // 800F3D90
  c->r[5]=0u+0x00000006u; // 800F3D94
  c->lr=0x800F3D9Cu; f_800B3824(c); // 800F3D98
  cmps(c,0,(int32_t)c->r[3],0); // 800F3D9C
  if (!crb(c,2)) { goto L_800F3FC4; } // 800F3DA0
  c->r[0]=R8(c->r[29]+0x00000059u); // 800F3DA4
  cmpu(c,0,c->r[0],0x00000002u); // 800F3DA8
  if (!crb(c,2)) { goto L_800F3FC4; } // 800F3DAC
  c->r[3]=c->r[30]|c->r[30]; // 800F3DB0
  c->lr=0x800F3DB8u; f_800F2410(c); // 800F3DB4
  cmps(c,0,(int32_t)c->r[3],0); // 800F3DB8
  if (crb(c,2)) { goto L_800F3DE0; } // 800F3DBC
  c->r[0]=R8(c->r[30]+0x00000006u); // 800F3DC0
  cmpu(c,0,c->r[0],0x0000000Cu); // 800F3DC4
  if (!crb(c,2)) { goto L_800F3DE0; } // 800F3DC8
  c->r[3]=c->r[30]|c->r[30]; // 800F3DCC
  c->lr=0x800F3DD4u; f_800F2300(c); // 800F3DD0
  c->r[3]=R8(c->r[31]+0x000006E5u); // 800F3DD4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F3DD8
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F3DDC
L_800F3DE0:;
  c->r[0]=0u+0x000000FFu; // 800F3DE0
  W8(c->r[31]+0x0000000Cu,c->r[0]); // 800F3DE4
  goto L_800F3FC4; // 800F3DE8
L_800F3DEC:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3DEC
  c->lr=0x800F3DF4u; f_800F2410(c); // 800F3DF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3DF4
  if (crb(c,2)) { goto L_800F3FC4; } // 800F3DF8
  c->r[0]=R8(c->r[30]+0x00000006u); // 800F3DFC
  cmpu(c,0,c->r[0],0x0000000Cu); // 800F3E00
  if (!crb(c,2)) { goto L_800F3FC4; } // 800F3E04
  c->r[3]=c->r[30]|c->r[30]; // 800F3E08
  c->lr=0x800F3E10u; f_800F2410(c); // 800F3E0C
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E10
  if (crb(c,2)) { goto L_800F3E38; } // 800F3E14
  c->r[0]=R8(c->r[3]+0x0000005Bu); // 800F3E18
  cmpu(c,0,c->r[0],0x00000003u); // 800F3E1C
  if (crb(c,2)) { goto L_800F3E2C; } // 800F3E20
  cmpu(c,0,c->r[0],0x00000001u); // 800F3E24
  if (!crb(c,2)) { goto L_800F3E34; } // 800F3E28
L_800F3E2C:;
  c->lr=0x800F3E30u; f_800F2610(c); // 800F3E2C
  goto L_800F3E38; // 800F3E30
L_800F3E34:;
  c->lr=0x800F3E38u; f_800F29C0(c); // 800F3E34
L_800F3E38:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3E38
  c->lr=0x800F3E40u; f_800F2300(c); // 800F3E3C
  c->r[3]=R8(c->r[31]+0x000006E5u); // 800F3E40
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F3E44
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F3E48
  goto L_800F3FC4; // 800F3E4C
L_800F3E50:;
  c->r[3]=R8(c->r[31]+0x000006E4u); // 800F3E50
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F3E54
  W8(c->r[31]+0x000006E4u,c->r[0]); // 800F3E58
  c->r[3]=R8(c->r[4]+0x00000001u); // 800F3E5C
  c->lr=0x800F3E64u; f_800F3B70(c); // 800F3E60
  c->lr=0x800F3E68u; f_800F2410(c); // 800F3E64
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E68
  c->r[29]=c->r[3]|c->r[3]; // 800F3E6C
  if (crb(c,2)) { goto L_800F3ED0; } // 800F3E70
  c->r[0]=R8(c->r[3]+0x0000005Bu); // 800F3E74
  cmpu(c,0,c->r[0],0x00000003u); // 800F3E78
  if (crb(c,2)) { goto L_800F3E88; } // 800F3E7C
  cmpu(c,0,c->r[0],0x00000001u); // 800F3E80
  if (!crb(c,2)) { goto L_800F3E94; } // 800F3E84
L_800F3E88:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3E88
  c->lr=0x800F3E90u; f_800F2730(c); // 800F3E8C
  goto L_800F3ED0; // 800F3E90
L_800F3E94:;
  c->lr=0x800F3E98u; f_800EE4F0(c); // 800F3E94
  cmps(c,0,(int32_t)c->r[3],0); // 800F3E98
  if (crb(c,2)) { goto L_800F3EC8; } // 800F3E9C
  c->lr=0x800F3EA4u; f_800EE4F0(c); // 800F3EA0
  cmps(c,0,(int32_t)c->r[3],0); // 800F3EA4
  if (crb(c,2)) { goto L_800F3ED0; } // 800F3EA8
  c->r[4]=0u+0x80330000u; // 800F3EAC
  c->r[3]=c->r[29]|c->r[29]; // 800F3EB0
  c->r[4]=c->r[4]+0xFFFF9B58u; // 800F3EB4
  c->r[5]=0u+0x00000010u; // 800F3EB8
  c->lr=0x800F3EC0u; f_800B3824(c); // 800F3EBC
  cmps(c,0,(int32_t)c->r[3],0); // 800F3EC0
  if (!crb(c,2)) { goto L_800F3ED0; } // 800F3EC4
L_800F3EC8:;
  c->r[3]=c->r[29]|c->r[29]; // 800F3EC8
  c->lr=0x800F3ED0u; f_800F2AE0(c); // 800F3ECC
L_800F3ED0:;
  c->r[3]=R8(c->r[30]+0x00000001u); // 800F3ED0
  c->r[4]=0u+0x00000000u; // 800F3ED4
  c->lr=0x800F3EDCu; f_800F3B50(c); // 800F3ED8
  c->r[3]=R8(c->r[30]+0x00000001u); // 800F3EDC
  c->r[4]=0u+0x00000000u; // 800F3EE0
  c->lr=0x800F3EE8u; f_800F3B90(c); // 800F3EE4
  c->r[3]=R8(c->r[30]+0x00000001u); // 800F3EE8
  c->r[4]=0u+0x00000000u; // 800F3EEC
  c->lr=0x800F3EF4u; f_800F3BB0(c); // 800F3EF0
  c->r[12]=R32(c->r[31]+0x000006F0u); // 800F3EF4
  cmps(c,0,(int32_t)c->r[12],0); // 800F3EF8
  if (crb(c,2)) { goto L_800F3FC4; } // 800F3EFC
  c->r[3]=c->r[29]|c->r[29]; // 800F3F00
  c->r[4]=0u+0x00000000u; // 800F3F04
  c->ctr=c->r[12]; // 800F3F08
  if (true) { c->lr=0x800F3F10u; dispatch(c,c->ctr); } // 800F3F0C
  goto L_800F3FC4; // 800F3F10
L_800F3F14:;
  c->r[3]=c->r[30]|c->r[30]; // 800F3F14
  c->lr=0x800F3F1Cu; f_800F2410(c); // 800F3F18
  c->r[0]=R8(c->r[30]+0x00000007u); // 800F3F1C
  c->r[4]=c->r[3]+0x00000040u; // 800F3F20
  W8(c->r[3]+0x00000056u,c->r[0]); // 800F3F24
  c->r[3]=R8(c->r[30]+0x00000007u); // 800F3F28
  c->lr=0x800F3F30u; f_800F3B50(c); // 800F3F2C
  c->r[3]=R8(c->r[30]+0x00000007u); // 800F3F30
  c->r[4]=0u+0x00000000u; // 800F3F34
  c->lr=0x800F3F3Cu; f_800F3B90(c); // 800F3F38
  c->r[3]=R8(c->r[30]+0x00000007u); // 800F3F3C
  c->r[4]=0u+0x00000000u; // 800F3F40
  c->lr=0x800F3F48u; f_800F3BB0(c); // 800F3F44
  goto L_800F3FC4; // 800F3F48
L_800F3F4C:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 800F3F4C
  W16(c->r[31]+0x00000744u,c->r[0]); // 800F3F50
  c->r[3]=R8(c->r[31]+0x000006E5u); // 800F3F54
  c->r[0]=R16(c->r[4]+0x00000002u); // 800F3F58
  W16(c->r[31]+0x00000746u,c->r[0]); // 800F3F5C
  c->r[0]=R16(c->r[4]+0x00000004u); // 800F3F60
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800F3F64
  if (!crb(c,0)) { goto L_800F3F84; } // 800F3F68
  c->r[3]=0u+0x80330000u; // 800F3F6C
  c->r[3]=c->r[3]+0xFFFF9B6Cu; // 800F3F70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F3F74
  c->lr=0x800F3F7Cu; f_8007C6D0(c); // 800F3F78
  c->r[0]=R16(c->r[30]+0x00000004u); // 800F3F7C
  W8(c->r[31]+0x000006E5u,c->r[0]); // 800F3F80
L_800F3F84:;
  c->r[29]=c->r[30]|c->r[30]; // 800F3F84
  c->r[31]=0u+0x00000000u; // 800F3F88
  goto L_800F3FB8; // 800F3F8C
L_800F3F90:;
  c->r[3]=R8(c->r[29]+0x00000006u); // 800F3F90
  cmpu(c,0,c->r[3],0x00000010u); // 800F3F94
  if (!crb(c,0)) { goto L_800F3FB0; } // 800F3F98
  c->r[4]=R16(c->r[29]+0x00000008u); // 800F3F9C
  c->lr=0x800F3FA4u; f_800F3B90(c); // 800F3FA0
  c->r[3]=R8(c->r[29]+0x00000006u); // 800F3FA4
  c->r[4]=R16(c->r[29]+0x0000000Au); // 800F3FA8
  c->lr=0x800F3FB0u; f_800F3BB0(c); // 800F3FAC
L_800F3FB0:;
  c->r[29]=c->r[29]+0x00000006u; // 800F3FB0
  c->r[31]=c->r[31]+0x00000001u; // 800F3FB4
L_800F3FB8:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 800F3FB8
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 800F3FBC
  if (crb(c,0)) { IRQCHK(c); goto L_800F3F90; } // 800F3FC0
L_800F3FC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F3FC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F3FC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F3FCC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F3FD0
  c->lr=c->r[0]; // 800F3FD4
  c->r[1]=c->r[1]+0x00000020u; // 800F3FD8
  return; // 800F3FDC
}

// bta_hh_co_data
void f_800F3FE0(Ctx* __restrict c) {
  trace_call(0x800F3FE0u);
  cmpu(c,0,c->r[8],0x00000003u); // 800F3FE0
  c->r[6]=0u+0x803A0000u; // 800F3FE4
  c->r[6]=c->r[6]+0xFFFFB7C0u; // 800F3FE8
  if (!crb(c,2)) return; // 800F3FEC
  c->r[12]=R32(c->r[6]+0x000006ECu); // 800F3FF0
  cmps(c,0,(int32_t)c->r[12],0); // 800F3FF4
  if (crb(c,2)) return; // 800F3FF8
  c->ctr=c->r[12]; // 800F3FFC
  if (true) { dispatch(c,c->ctr); return; } // 800F4000
  return; // 800F4004
  unimpl(c,0x800F4008u,"00000000"); // 800F4008
  unimpl(c,0x800F400Cu,"00000000"); // 800F400C
  f_800F4010(c);
}

// bta_hh_co_open
void f_800F4010(Ctx* __restrict c) {
  trace_call(0x800F4010u);
  return; // 800F4010
  unimpl(c,0x800F4014u,"00000000"); // 800F4014
  unimpl(c,0x800F4018u,"00000000"); // 800F4018
  unimpl(c,0x800F401Cu,"00000000"); // 800F401C
  f_800F4020(c);
}

// bta_hh_co_close
void f_800F4020(Ctx* __restrict c) {
  trace_call(0x800F4020u);
  return; // 800F4020
  unimpl(c,0x800F4024u,"00000000"); // 800F4024
  unimpl(c,0x800F4028u,"00000000"); // 800F4028
  unimpl(c,0x800F402Cu,"00000000"); // 800F402C
  f_800F4030(c);
}

// bta_dm_co_get_compress_memory
void f_800F4030(Ctx* __restrict c) {
  trace_call(0x800F4030u);
  c->r[3]=0u+0x00000000u; // 800F4030
  return; // 800F4034
  unimpl(c,0x800F4038u,"00000000"); // 800F4038
  unimpl(c,0x800F403Cu,"00000000"); // 800F403C
  f_800F4040(c);
}

// gki_init_free_queue
void f_800F4040(Ctx* __restrict c) {
  trace_call(0x800F4040u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4040
  c->r[0]=c->lr; // 800F4044
  W32(c->r[1]+0x00000044u,c->r[0]); // 800F4048
  c->r[11]=c->r[1]+0x00000040u; // 800F404C
  c->lr=0x800F4054u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F4050
  c->r[7]=c->r[4]+0x00000003u; // 800F4054
  c->r[4]=0u+0x803A0000u; // 800F4058
  c->r[9]=rotl(c->r[7],0)&0xFFFFFFFCu; // 800F405C
  c->r[25]=rotl(c->r[3],2)&0x000003FCu; // 800F4060
  c->r[26]=c->r[9]+0x0000000Cu; // 800F4064
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F4068
  c->r[8]=rotl(c->r[26],0)&0x0000FFFFu; // 800F406C
  c->r[12]=rotl(c->r[7],0)&0x0000FFFCu; // 800F4070
  c->r[10]=c->r[4]+0x00000054u; // 800F4074
  c->r[4]=rotl(c->r[3],1)&0x000001FEu; // 800F4078
  c->r[11]=c->r[10]+0x00030000u; // 800F407C
  c->r[0]=rotl(c->r[3],4)&0x00000FF0u; // 800F4080
  c->r[25]=c->r[11]+c->r[25]; // 800F4084
  cmps(c,0,(int32_t)c->r[5],0); // 800F4088
  c->r[24]=(uint32_t)((int32_t)c->r[8]*(int32_t)c->r[5]); // 800F408C
  W32(c->r[25]+0xFFFF8A1Cu,c->r[6]); // 800F4090
  c->r[7]=c->r[11]+c->r[4]; // 800F4094
  c->r[11]=c->r[11]+c->r[0]; // 800F4098
  c->r[4]=c->r[6]+c->r[24]; // 800F409C
  W32(c->r[25]+0xFFFF8A40u,c->r[4]); // 800F40A0
  c->r[4]=0u+0x00000000u; // 800F40A4
  W16(c->r[7]+0xFFFF8A64u,c->r[26]); // 800F40A8
  c->r[7]=0u+0x00000000u; // 800F40AC
  W16(c->r[11]+0xFFFF8994u,c->r[12]); // 800F40B0
  W16(c->r[11]+0xFFFF8996u,c->r[5]); // 800F40B4
  W16(c->r[11]+0xFFFF8998u,c->r[4]); // 800F40B8
  W16(c->r[11]+0xFFFF899Au,c->r[4]); // 800F40BC
  W32(c->r[11]+0xFFFF898Cu,c->r[6]); // 800F40C0
  if (crb(c,2)) { goto L_800F4234; } // 800F40C4
  cmpu(c,0,c->r[5],0x00000008u); // 800F40C8
  c->r[11]=c->r[5]+0x00010000u; // 800F40CC
  c->r[11]=c->r[11]+0xFFFFFFF8u; // 800F40D0
  if (!crb(c,1)) { goto L_800F41E8; } // 800F40D4
  c->r[12]=rotl(c->r[11],0)&0x0000FFFFu; // 800F40D8
  c->r[27]=0u+0xDDBB0000u; // 800F40DC
  c->r[11]=c->r[12]+0x00000007u; // 800F40E0
  c->r[24]=0u+0x000000F0u; // 800F40E4
  c->r[11]=rotl(c->r[11],29)&0x1FFFFFFFu; // 800F40E8
  c->r[26]=c->r[27]+0xFFFFDDBAu; // 800F40EC
  c->r[25]=0u+0x00000000u; // 800F40F0
  c->ctr=c->r[11]; // 800F40F4
  cmpu(c,0,c->r[12],0x00000000u); // 800F40F8
  if (!crb(c,1)) { goto L_800F41E8; } // 800F40FC
L_800F4100:;
  W8(c->r[6]+0x00000005u,c->r[24]); // 800F4100
  c->r[18]=c->r[6]+c->r[8]; // 800F4104
  c->r[19]=c->r[18]+c->r[8]; // 800F4108
  c->r[4]=c->r[6]+c->r[9]; // 800F410C
  W8(c->r[6]+0x00000004u,c->r[3]); // 800F4110
  c->r[20]=c->r[19]+c->r[8]; // 800F4114
  c->r[21]=c->r[20]+c->r[8]; // 800F4118
  c->r[27]=c->r[18]+c->r[9]; // 800F411C
  W8(c->r[6]+0x00000006u,c->r[25]); // 800F4120
  c->r[22]=c->r[21]+c->r[8]; // 800F4124
  c->r[23]=c->r[22]+c->r[8]; // 800F4128
  c->r[28]=c->r[19]+c->r[9]; // 800F412C
  W32(c->r[4]+0x00000008u,c->r[26]); // 800F4130
  c->r[4]=c->r[23]+c->r[8]; // 800F4134
  c->r[31]=c->r[20]+c->r[9]; // 800F4138
  c->r[30]=c->r[21]+c->r[9]; // 800F413C
  W32(c->r[6]+0x00000000u,c->r[18]); // 800F4140
  c->r[29]=c->r[22]+c->r[9]; // 800F4144
  c->r[12]=c->r[23]+c->r[9]; // 800F4148
  c->r[11]=c->r[4]+c->r[9]; // 800F414C
  W8(c->r[18]+0x00000005u,c->r[24]); // 800F4150
  c->r[6]=c->r[4]+c->r[8]; // 800F4154
  c->r[7]=c->r[7]+0x00000008u; // 800F4158
  W8(c->r[18]+0x00000004u,c->r[3]); // 800F415C
  W8(c->r[18]+0x00000006u,c->r[25]); // 800F4160
  W32(c->r[27]+0x00000008u,c->r[26]); // 800F4164
  W32(c->r[18]+0x00000000u,c->r[19]); // 800F4168
  W8(c->r[19]+0x00000005u,c->r[24]); // 800F416C
  W8(c->r[19]+0x00000004u,c->r[3]); // 800F4170
  W8(c->r[19]+0x00000006u,c->r[25]); // 800F4174
  W32(c->r[28]+0x00000008u,c->r[26]); // 800F4178
  W32(c->r[18]+c->r[8],c->r[20]); // 800F417C
  W8(c->r[20]+0x00000005u,c->r[24]); // 800F4180
  W8(c->r[20]+0x00000004u,c->r[3]); // 800F4184
  W8(c->r[20]+0x00000006u,c->r[25]); // 800F4188
  W32(c->r[31]+0x00000008u,c->r[26]); // 800F418C
  W32(c->r[19]+c->r[8],c->r[21]); // 800F4190
  W8(c->r[21]+0x00000005u,c->r[24]); // 800F4194
  W8(c->r[21]+0x00000004u,c->r[3]); // 800F4198
  W8(c->r[21]+0x00000006u,c->r[25]); // 800F419C
  W32(c->r[30]+0x00000008u,c->r[26]); // 800F41A0
  W32(c->r[20]+c->r[8],c->r[22]); // 800F41A4
  W8(c->r[22]+0x00000005u,c->r[24]); // 800F41A8
  W8(c->r[22]+0x00000004u,c->r[3]); // 800F41AC
  W8(c->r[22]+0x00000006u,c->r[25]); // 800F41B0
  W32(c->r[29]+0x00000008u,c->r[26]); // 800F41B4
  W32(c->r[21]+c->r[8],c->r[23]); // 800F41B8
  W8(c->r[23]+0x00000005u,c->r[24]); // 800F41BC
  W8(c->r[23]+0x00000004u,c->r[3]); // 800F41C0
  W8(c->r[23]+0x00000006u,c->r[25]); // 800F41C4
  W32(c->r[12]+0x00000008u,c->r[26]); // 800F41C8
  W32(c->r[22]+c->r[8],c->r[4]); // 800F41CC
  W8(c->r[4]+0x00000005u,c->r[24]); // 800F41D0
  W8(c->r[4]+0x00000004u,c->r[3]); // 800F41D4
  W8(c->r[4]+0x00000006u,c->r[25]); // 800F41D8
  W32(c->r[11]+0x00000008u,c->r[26]); // 800F41DC
  W32(c->r[23]+c->r[8],c->r[6]); // 800F41E0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F4100; } // 800F41E4
L_800F41E8:;
  c->r[12]=rotl(c->r[7],0)&0x0000FFFFu; // 800F41E8
  c->r[31]=0u+0xDDBB0000u; // 800F41EC
  c->r[11]=c->r[5]-c->r[12]; // 800F41F0
  c->r[29]=0u+0x000000F0u; // 800F41F4
  c->r[31]=c->r[31]+0xFFFFDDBAu; // 800F41F8
  c->r[30]=0u+0x00000000u; // 800F41FC
  c->ctr=c->r[11]; // 800F4200
  cmpu(c,0,c->r[12],c->r[5]); // 800F4204
  if (!crb(c,0)) { goto L_800F4234; } // 800F4208
L_800F420C:;
  W8(c->r[6]+0x00000005u,c->r[29]); // 800F420C
  c->r[5]=c->r[6]+c->r[9]; // 800F4210
  c->r[4]=c->r[6]|c->r[6]; // 800F4214
  c->r[7]=c->r[7]+0x00000001u; // 800F4218
  W8(c->r[6]+0x00000004u,c->r[3]); // 800F421C
  W8(c->r[6]+0x00000006u,c->r[30]); // 800F4220
  c->r[6]=c->r[6]+c->r[8]; // 800F4224
  W32(c->r[5]+0x00000008u,c->r[31]); // 800F4228
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F422C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F420C; } // 800F4230
L_800F4234:;
  c->r[3]=c->r[10]+0x00030000u; // 800F4234
  c->r[5]=0u+0x00000000u; // 800F4238
  W32(c->r[4]+0x00000000u,c->r[5]); // 800F423C
  c->r[3]=c->r[3]+c->r[0]; // 800F4240
  c->r[11]=c->r[1]+0x00000040u; // 800F4244
  W32(c->r[3]+0xFFFF8990u,c->r[4]); // 800F4248
  c->lr=0x800F4250u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F424C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800F4250
  c->lr=c->r[0]; // 800F4254
  c->r[1]=c->r[1]+0x00000040u; // 800F4258
  return; // 800F425C
}

// gki_buffer_init
void f_800F4260(Ctx* __restrict c) {
  trace_call(0x800F4260u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4260
  c->r[0]=c->lr; // 800F4264
  c->r[3]=0u+0x803A0000u; // 800F4268
  c->r[6]=0u+0x00000000u; // 800F426C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4270
  c->r[0]=0u+0x00000002u; // 800F4274
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F4278
  c->r[4]=0u+0x00000000u; // 800F427C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4280
  c->r[31]=c->r[3]+0x00000054u; // 800F4284
  c->ctr=c->r[0]; // 800F4288
L_800F428C:;
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 800F428C
  c->r[6]=c->r[6]+0x00000001u; // 800F4290
  c->r[5]=c->r[31]+c->r[0]; // 800F4294
  c->r[3]=c->r[5]+0x00030000u; // 800F4298
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 800F429C
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 800F42A0
  c->r[5]=c->r[31]+c->r[0]; // 800F42A4
  c->r[6]=c->r[6]+0x00000001u; // 800F42A8
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 800F42AC
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 800F42B0
  c->r[6]=c->r[6]+0x00000001u; // 800F42B4
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 800F42B8
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 800F42BC
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 800F42C0
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 800F42C4
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 800F42C8
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 800F42CC
  c->r[3]=c->r[5]+0x00030000u; // 800F42D0
  c->r[5]=c->r[31]+c->r[0]; // 800F42D4
  c->r[0]=rotl(c->r[6],4)&0x00000FF0u; // 800F42D8
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 800F42DC
  c->r[6]=c->r[6]+0x00000001u; // 800F42E0
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 800F42E4
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 800F42E8
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 800F42EC
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 800F42F0
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 800F42F4
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 800F42F8
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 800F42FC
  c->r[3]=c->r[5]+0x00030000u; // 800F4300
  c->r[5]=c->r[31]+c->r[0]; // 800F4304
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 800F4308
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 800F430C
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 800F4310
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 800F4314
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 800F4318
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 800F431C
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 800F4320
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 800F4324
  c->r[3]=c->r[5]+0x00030000u; // 800F4328
  W32(c->r[3]+0xFFFF888Cu,c->r[4]); // 800F432C
  W32(c->r[3]+0xFFFF890Cu,c->r[4]); // 800F4330
  W32(c->r[3]+0xFFFF8890u,c->r[4]); // 800F4334
  W32(c->r[3]+0xFFFF8910u,c->r[4]); // 800F4338
  W32(c->r[3]+0xFFFF8894u,c->r[4]); // 800F433C
  W32(c->r[3]+0xFFFF8914u,c->r[4]); // 800F4340
  W32(c->r[3]+0xFFFF8898u,c->r[4]); // 800F4344
  W32(c->r[3]+0xFFFF8918u,c->r[4]); // 800F4348
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F428C; } // 800F434C
  c->r[0]=0u+0x00000003u; // 800F4350
  c->r[10]=0u+0x00000000u; // 800F4354
  c->r[7]=0u+0x00000000u; // 800F4358
  c->ctr=c->r[0]; // 800F435C
L_800F4360:;
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 800F4360
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 800F4364
  c->r[8]=c->r[31]+c->r[0]; // 800F4368
  c->r[6]=c->r[8]+0x00030000u; // 800F436C
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 800F4370
  c->r[4]=c->r[4]+0x00030000u; // 800F4374
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 800F4378
  c->r[9]=c->r[31]+c->r[0]; // 800F437C
  c->r[10]=c->r[10]+0x00000001u; // 800F4380
  c->r[5]=c->r[4]+0xFFFF8A64u; // 800F4384
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 800F4388
  c->r[3]=c->r[9]+0x00030000u; // 800F438C
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 800F4390
  W16(c->r[31]+c->r[5],c->r[7]); // 800F4394
  c->r[8]=c->r[31]+c->r[0]; // 800F4398
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 800F439C
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 800F43A0
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 800F43A4
  c->r[4]=c->r[4]+0x00030000u; // 800F43A8
  c->r[6]=c->r[8]+0x00030000u; // 800F43AC
  c->r[9]=c->r[31]+c->r[0]; // 800F43B0
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 800F43B4
  c->r[10]=c->r[10]+0x00000001u; // 800F43B8
  c->r[5]=c->r[4]+0xFFFF8A64u; // 800F43BC
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 800F43C0
  c->r[0]=rotl(c->r[10],2)&0x000003FCu; // 800F43C4
  c->r[8]=c->r[31]+c->r[0]; // 800F43C8
  c->r[4]=rotl(c->r[10],1)&0x000001FEu; // 800F43CC
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 800F43D0
  c->r[0]=rotl(c->r[10],4)&0x00000FF0u; // 800F43D4
  c->r[4]=c->r[4]+0x00030000u; // 800F43D8
  c->r[10]=c->r[10]+0x00000001u; // 800F43DC
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 800F43E0
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 800F43E4
  c->r[3]=c->r[9]+0x00030000u; // 800F43E8
  c->r[9]=c->r[31]+c->r[0]; // 800F43EC
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 800F43F0
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 800F43F4
  c->r[6]=c->r[8]+0x00030000u; // 800F43F8
  W16(c->r[31]+c->r[5],c->r[7]); // 800F43FC
  c->r[5]=c->r[4]+0xFFFF8A64u; // 800F4400
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 800F4404
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 800F4408
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 800F440C
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 800F4410
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 800F4414
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 800F4418
  c->r[3]=c->r[9]+0x00030000u; // 800F441C
  W32(c->r[6]+0xFFFF8A1Cu,c->r[7]); // 800F4420
  W32(c->r[6]+0xFFFF8A40u,c->r[7]); // 800F4424
  W16(c->r[31]+c->r[5],c->r[7]); // 800F4428
  W32(c->r[3]+0xFFFF898Cu,c->r[7]); // 800F442C
  W32(c->r[3]+0xFFFF8990u,c->r[7]); // 800F4430
  W16(c->r[3]+0xFFFF8994u,c->r[7]); // 800F4434
  W16(c->r[3]+0xFFFF8996u,c->r[7]); // 800F4438
  W16(c->r[3]+0xFFFF8998u,c->r[7]); // 800F443C
  W16(c->r[3]+0xFFFF899Au,c->r[7]); // 800F4440
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F4360; } // 800F4444
  c->r[4]=0u+0x00010000u; // 800F4448
  c->r[3]=c->r[31]+0x00030000u; // 800F444C
  c->r[0]=c->r[4]+0xFFFFFFF0u; // 800F4450
  W16(c->r[3]+0xFFFF8A7Cu,c->r[0]); // 800F4454
  c->r[6]=c->r[31]|c->r[31]; // 800F4458
  c->r[3]=0u+0x00000000u; // 800F445C
  c->r[4]=0u+0x00000040u; // 800F4460
  c->r[5]=0u+0x00000030u; // 800F4464
  c->lr=0x800F446Cu; f_800F4040(c); // 800F4468
  c->r[6]=c->r[31]+0x00000E40u; // 800F446C
  c->r[3]=0u+0x00000001u; // 800F4470
  c->r[4]=0u+0x00000080u; // 800F4474
  c->r[5]=0u+0x0000001Au; // 800F4478
  c->lr=0x800F4480u; f_800F4040(c); // 800F447C
  c->r[6]=c->r[31]+0x00001C78u; // 800F4480
  c->r[3]=0u+0x00000002u; // 800F4484
  c->r[4]=0u+0x00000294u; // 800F4488
  c->r[5]=0u+0x0000002Du; // 800F448C
  c->lr=0x800F4494u; f_800F4040(c); // 800F4490
  c->r[6]=c->r[31]+0x00010000u; // 800F4494
  c->r[3]=0u+0x00000003u; // 800F4498
  c->r[4]=0u+0x00000708u; // 800F449C
  c->r[5]=0u+0x0000001Eu; // 800F44A0
  c->r[6]=c->r[6]+0xFFFF9298u; // 800F44A4
  c->lr=0x800F44ACu; f_800F4040(c); // 800F44A8
  c->r[6]=c->r[31]+0x00010000u; // 800F44AC
  c->r[3]=0u+0x00000004u; // 800F44B0
  c->r[4]=0u+0x00002000u; // 800F44B4
  c->r[5]=0u+0x00000009u; // 800F44B8
  c->r[6]=c->r[6]+0x000066F0u; // 800F44BC
  c->lr=0x800F44C4u; f_800F4040(c); // 800F44C0
  c->r[6]=c->r[31]+0x00030000u; // 800F44C4
  c->r[0]=0u+0x00000000u; // 800F44C8
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 800F44CC
  c->r[0]=0u+0x00000001u; // 800F44D0
  c->r[5]=0u+0x00000002u; // 800F44D4
  c->r[4]=0u+0x00000003u; // 800F44D8
  W8(c->r[6]+0xFFFF8A7Fu,c->r[0]); // 800F44DC
  c->r[3]=0u+0x00000004u; // 800F44E0
  c->r[0]=0u+0x00000005u; // 800F44E4
  W8(c->r[6]+0xFFFF8A80u,c->r[5]); // 800F44E8
  W8(c->r[6]+0xFFFF8A81u,c->r[4]); // 800F44EC
  W8(c->r[6]+0xFFFF8A82u,c->r[3]); // 800F44F0
  W8(c->r[6]+0xFFFF8A87u,c->r[0]); // 800F44F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F44F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F44FC
  c->lr=c->r[0]; // 800F4500
  c->r[1]=c->r[1]+0x00000010u; // 800F4504
  return; // 800F4508
  unimpl(c,0x800F450Cu,"00000000"); // 800F450C
  f_800F4510(c);
}

// GKI_init_q
void f_800F4510(Ctx* __restrict c) {
  trace_call(0x800F4510u);
  c->r[0]=0u+0x00000000u; // 800F4510
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F4514
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F4518
  W16(c->r[3]+0x00000008u,c->r[0]); // 800F451C
  return; // 800F4520
  unimpl(c,0x800F4524u,"00000000"); // 800F4524
  unimpl(c,0x800F4528u,"00000000"); // 800F4528
  unimpl(c,0x800F452Cu,"00000000"); // 800F452C
  f_800F4530(c);
}

// GKI_getbuf
void f_800F4530(Ctx* __restrict c) {
  trace_call(0x800F4530u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4530
  c->r[0]=c->lr; // 800F4534
  c->r[4]=0u+0x803A0000u; // 800F4538
  cmps(c,0,(int32_t)c->r[3],0); // 800F453C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4540
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F4544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4548
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F454C
  c->r[30]=c->r[4]+0x00000054u; // 800F4550
  if (!crb(c,2)) { goto L_800F4578; } // 800F4554
  c->r[3]=0u+0x00010000u; // 800F4558
  c->r[4]=0u+0x80330000u; // 800F455C
  c->r[0]=c->r[3]+0xFFFFFFF6u; // 800F4560
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4564
  c->r[4]=c->r[4]+0xFFFF9B98u; // 800F4568
  c->lr=0x800F4570u; f_800F5D30(c); // 800F456C
  c->r[3]=0u+0x00000000u; // 800F4570
  goto L_800F46B8; // 800F4574
L_800F4578:;
  c->r[4]=c->r[30]+0x00030000u; // 800F4578
  c->r[31]=0u+0x00000000u; // 800F457C
  c->r[5]=R8(c->r[4]+0xFFFF8A87u); // 800F4580
  goto L_800F45B4; // 800F4584
L_800F4588:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 800F4588
  c->r[4]=c->r[4]+0x00030000u; // 800F458C
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 800F4590
  c->r[0]=R8(c->r[30]+c->r[0]); // 800F4594
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800F4598
  c->r[4]=c->r[4]+0x00030000u; // 800F459C
  c->r[0]=c->r[4]+0xFFFF8994u; // 800F45A0
  c->r[0]=R16(c->r[30]+c->r[0]); // 800F45A4
  cmpu(c,0,c->r[3],c->r[0]); // 800F45A8
  if (!crb(c,1)) { goto L_800F45C0; } // 800F45AC
  c->r[31]=c->r[31]+0x00000001u; // 800F45B0
L_800F45B4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F45B4
  cmpu(c,0,c->r[0],c->r[5]); // 800F45B8
  if (crb(c,0)) { IRQCHK(c); goto L_800F4588; } // 800F45BC
L_800F45C0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F45C0
  cmpu(c,0,c->r[0],c->r[5]); // 800F45C4
  if (!crb(c,2)) { goto L_800F45EC; } // 800F45C8
  c->r[3]=0u+0x00010000u; // 800F45CC
  c->r[4]=0u+0x80330000u; // 800F45D0
  c->r[0]=c->r[3]+0xFFFFFFF7u; // 800F45D4
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F45D8
  c->r[4]=c->r[4]+0xFFFF9BB0u; // 800F45DC
  c->lr=0x800F45E4u; f_800F5D30(c); // 800F45E0
  c->r[3]=0u+0x00000000u; // 800F45E4
  goto L_800F46B8; // 800F45E8
L_800F45EC:;
  c->lr=0x800F45F0u; f_800F5CE0(c); // 800F45EC
  c->r[6]=c->r[30]+0x00030000u; // 800F45F0
  c->r[5]=0u+0x00000001u; // 800F45F4
  c->r[7]=R8(c->r[6]+0xFFFF8A87u); // 800F45F8
  goto L_800F46A4; // 800F45FC
L_800F4600:;
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 800F4600
  c->r[3]=R16(c->r[6]+0xFFFF8A7Cu); // 800F4604
  c->r[4]=c->r[4]+0x00030000u; // 800F4608
  c->r[0]=c->r[4]+0xFFFF8A7Eu; // 800F460C
  c->r[4]=R8(c->r[30]+c->r[0]); // 800F4610
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 800F4614
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800F4618
  if (!crb(c,2)) { goto L_800F46A0; } // 800F461C
  c->r[0]=rotl(c->r[4],4)&0x00000FF0u; // 800F4620
  c->r[4]=c->r[6]+c->r[0]; // 800F4624
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 800F4628
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 800F462C
  cmpu(c,0,c->r[3],c->r[0]); // 800F4630
  if (!crb(c,0)) { goto L_800F46A0; } // 800F4634
  c->r[30]=R32(c->r[4]+0xFFFF898Cu); // 800F4638
  c->r[0]=R32(c->r[30]+0x00000000u); // 800F463C
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 800F4640
  cmps(c,0,(int32_t)c->r[0],0); // 800F4644
  if (!crb(c,2)) { goto L_800F4654; } // 800F4648
  c->r[0]=0u+0x00000000u; // 800F464C
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 800F4650
L_800F4654:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 800F4654
  c->r[0]=c->r[3]+0x00000001u; // 800F4658
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 800F465C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4660
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 800F4664
  cmpu(c,0,c->r[3],c->r[0]); // 800F4668
  if (!crb(c,1)) { goto L_800F4678; } // 800F466C
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 800F4670
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 800F4674
L_800F4678:;
  c->lr=0x800F467Cu; f_800F5CB0(c); // 800F4678
  c->lr=0x800F4680u; f_800F5CA0(c); // 800F467C
  W8(c->r[30]+0x00000005u,c->r[3]); // 800F4680
  c->r[4]=0u+0x00000001u; // 800F4684
  c->r[0]=0u+0x00000000u; // 800F4688
  c->r[3]=c->r[30]+0x00000008u; // 800F468C
  W8(c->r[30]+0x00000006u,c->r[4]); // 800F4690
  W32(c->r[30]+0x00000000u,c->r[0]); // 800F4694
  W8(c->r[30]+0x00000007u,c->r[0]); // 800F4698
  goto L_800F46B8; // 800F469C
L_800F46A0:;
  c->r[31]=c->r[31]+0x00000001u; // 800F46A0
L_800F46A4:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F46A4
  cmpu(c,0,c->r[0],c->r[7]); // 800F46A8
  if (crb(c,0)) { IRQCHK(c); goto L_800F4600; } // 800F46AC
  c->lr=0x800F46B4u; f_800F5CB0(c); // 800F46B0
  c->r[3]=0u+0x00000000u; // 800F46B4
L_800F46B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F46B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F46BC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F46C0
  c->lr=c->r[0]; // 800F46C4
  c->r[1]=c->r[1]+0x00000010u; // 800F46C8
  return; // 800F46CC
}

// GKI_getpoolbuf
void f_800F46D0(Ctx* __restrict c) {
  trace_call(0x800F46D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F46D0
  c->r[0]=c->lr; // 800F46D4
  c->r[4]=0u+0x803A0000u; // 800F46D8
  cmpu(c,0,c->r[3],0x00000009u); // 800F46DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F46E0
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F46E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F46E8
  c->r[31]=c->r[3]|c->r[3]; // 800F46EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F46F0
  c->r[30]=c->r[4]+0x00000054u; // 800F46F4
  if (crb(c,0)) { goto L_800F4704; } // 800F46F8
  c->r[3]=0u+0x00000000u; // 800F46FC
  goto L_800F47A0; // 800F4700
L_800F4704:;
  c->lr=0x800F4708u; f_800F5CE0(c); // 800F4704
  c->r[31]=rotl(c->r[31],4)&0x00000FF0u; // 800F4708
  c->r[0]=c->r[30]+0x00030000u; // 800F470C
  c->r[4]=c->r[0]+c->r[31]; // 800F4710
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 800F4714
  c->r[0]=R16(c->r[4]+0xFFFF8996u); // 800F4718
  cmpu(c,0,c->r[3],c->r[0]); // 800F471C
  if (!crb(c,0)) { goto L_800F478C; } // 800F4720
  c->r[31]=R32(c->r[4]+0xFFFF898Cu); // 800F4724
  c->r[0]=R32(c->r[31]+0x00000000u); // 800F4728
  W32(c->r[4]+0xFFFF898Cu,c->r[0]); // 800F472C
  cmps(c,0,(int32_t)c->r[0],0); // 800F4730
  if (!crb(c,2)) { goto L_800F4740; } // 800F4734
  c->r[0]=0u+0x00000000u; // 800F4738
  W32(c->r[4]+0xFFFF8990u,c->r[0]); // 800F473C
L_800F4740:;
  c->r[3]=R16(c->r[4]+0xFFFF8998u); // 800F4740
  c->r[0]=c->r[3]+0x00000001u; // 800F4744
  W16(c->r[4]+0xFFFF8998u,c->r[0]); // 800F4748
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F474C
  c->r[0]=R16(c->r[4]+0xFFFF899Au); // 800F4750
  cmpu(c,0,c->r[3],c->r[0]); // 800F4754
  if (!crb(c,1)) { goto L_800F4764; } // 800F4758
  c->r[0]=R16(c->r[4]+0xFFFF8998u); // 800F475C
  W16(c->r[4]+0xFFFF899Au,c->r[0]); // 800F4760
L_800F4764:;
  c->lr=0x800F4768u; f_800F5CB0(c); // 800F4764
  c->lr=0x800F476Cu; f_800F5CA0(c); // 800F4768
  W8(c->r[31]+0x00000005u,c->r[3]); // 800F476C
  c->r[4]=0u+0x00000001u; // 800F4770
  c->r[0]=0u+0x00000000u; // 800F4774
  c->r[3]=c->r[31]+0x00000008u; // 800F4778
  W8(c->r[31]+0x00000006u,c->r[4]); // 800F477C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800F4780
  W8(c->r[31]+0x00000007u,c->r[0]); // 800F4784
  goto L_800F47A0; // 800F4788
L_800F478C:;
  c->lr=0x800F4790u; f_800F5CB0(c); // 800F478C
  c->r[0]=c->r[30]+0x00030000u; // 800F4790
  c->r[3]=c->r[0]+c->r[31]; // 800F4794
  c->r[3]=R16(c->r[3]+0xFFFF8994u); // 800F4798
  c->lr=0x800F47A0u; f_800F4530(c); // 800F479C
L_800F47A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F47A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F47A4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F47A8
  c->lr=c->r[0]; // 800F47AC
  c->r[1]=c->r[1]+0x00000010u; // 800F47B0
  return; // 800F47B4
  unimpl(c,0x800F47B8u,"00000000"); // 800F47B8
  unimpl(c,0x800F47BCu,"00000000"); // 800F47BC
  f_800F47C0(c);
}

// fn_800F47C0
void f_800F47C0(Ctx* __restrict c) {
  trace_call(0x800F47C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F47C0
  c->r[0]=c->lr; // 800F47C4
  c->r[5]=0u+0x80330000u; // 800F47C8
  cmps(c,0,(int32_t)c->r[3],0); // 800F47CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F47D0
  c->r[5]=c->r[5]+0xFFFF9B98u; // 800F47D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F47D8
  if (crb(c,2)) { goto L_800F4858; } // 800F47DC
  c->r[31]=c->r[3]+0xFFFFFFF8u; // 800F47E0
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800F47E4
  if (crb(c,2)) { goto L_800F47F4; } // 800F47E8
  c->r[0]=0u+0x00000000u; // 800F47EC
  goto L_800F4820; // 800F47F0
L_800F47F4:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F47F4
  cmpu(c,0,c->r[0],0x00000009u); // 800F47F8
  if (!crb(c,0)) { goto L_800F481C; } // 800F47FC
  c->r[4]=0u+0x803A0000u; // 800F4800
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800F4804
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F4808
  c->r[4]=c->r[4]+0x00030000u; // 800F480C
  c->r[4]=c->r[4]+c->r[0]; // 800F4810
  c->r[0]=R16(c->r[4]+0xFFFF89E8u); // 800F4814
  goto L_800F4820; // 800F4818
L_800F481C:;
  c->r[0]=0u+0x00000000u; // 800F481C
L_800F4820:;
  c->r[4]=c->r[3]+c->r[0]; // 800F4820
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800F4824
  if (crb(c,2)) { goto L_800F4834; } // 800F4828
  c->r[0]=0u+0x00000001u; // 800F482C
  goto L_800F4850; // 800F4830
L_800F4834:;
  c->r[3]=0u+0xDDBB0000u; // 800F4834
  c->r[4]=R32(c->r[4]+0x00000000u); // 800F4838
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 800F483C
  c->r[3]=c->r[0]-c->r[4]; // 800F4840
  c->r[0]=c->r[4]-c->r[0]; // 800F4844
  c->r[0]=c->r[3]|c->r[0]; // 800F4848
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F484C
L_800F4850:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800F4850
  if (crb(c,2)) { goto L_800F4870; } // 800F4854
L_800F4858:;
  c->r[3]=0u+0x00010000u; // 800F4858
  c->r[4]=c->r[5]+0x00000030u; // 800F485C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F4860
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4864
  c->lr=0x800F486Cu; f_800F5D30(c); // 800F4868
  goto L_800F491C; // 800F486C
L_800F4870:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 800F4870
  cmpu(c,0,c->r[0],0x00000001u); // 800F4874
  if (crb(c,2)) { goto L_800F4894; } // 800F4878
  c->r[3]=0u+0x00010000u; // 800F487C
  c->r[4]=c->r[5]+0x00000048u; // 800F4880
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800F4884
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4888
  c->lr=0x800F4890u; f_800F5D30(c); // 800F488C
  goto L_800F491C; // 800F4890
L_800F4894:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F4894
  cmpu(c,0,c->r[0],0x00000009u); // 800F4898
  if (crb(c,0)) { goto L_800F48B8; } // 800F489C
  c->r[3]=0u+0x00010000u; // 800F48A0
  c->r[4]=c->r[5]+0x0000005Cu; // 800F48A4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 800F48A8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F48AC
  c->lr=0x800F48B4u; f_800F5D30(c); // 800F48B0
  goto L_800F491C; // 800F48B4
L_800F48B8:;
  c->lr=0x800F48BCu; f_800F5CE0(c); // 800F48B8
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F48BC
  c->r[3]=0u+0x803A0000u; // 800F48C0
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F48C4
  c->r[3]=c->r[3]+0x00030000u; // 800F48C8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800F48CC
  c->r[4]=c->r[3]+c->r[0]; // 800F48D0
  c->r[3]=R32(c->r[4]+0xFFFF89E4u); // 800F48D4
  cmps(c,0,(int32_t)c->r[3],0); // 800F48D8
  if (crb(c,2)) { goto L_800F48E8; } // 800F48DC
  W32(c->r[3]+0x00000000u,c->r[31]); // 800F48E0
  goto L_800F48EC; // 800F48E4
L_800F48E8:;
  W32(c->r[4]+0xFFFF89E0u,c->r[31]); // 800F48E8
L_800F48EC:;
  W32(c->r[4]+0xFFFF89E4u,c->r[31]); // 800F48EC
  c->r[3]=0u+0x00000000u; // 800F48F0
  c->r[0]=0u+0x000000F0u; // 800F48F4
  W32(c->r[31]+0x00000000u,c->r[3]); // 800F48F8
  W8(c->r[31]+0x00000006u,c->r[3]); // 800F48FC
  W8(c->r[31]+0x00000005u,c->r[0]); // 800F4900
  c->r[3]=R16(c->r[4]+0xFFFF89ECu); // 800F4904
  cmps(c,0,(int32_t)c->r[3],0); // 800F4908
  if (crb(c,2)) { goto L_800F4918; } // 800F490C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F4910
  W16(c->r[4]+0xFFFF89ECu,c->r[0]); // 800F4914
L_800F4918:;
  c->lr=0x800F491Cu; f_800F5CB0(c); // 800F4918
L_800F491C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F491C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4920
  c->lr=c->r[0]; // 800F4924
  c->r[1]=c->r[1]+0x00000010u; // 800F4928
  return; // 800F492C
}

// GKI_get_buf_size
void f_800F4930(Ctx* __restrict c) {
  trace_call(0x800F4930u);
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800F4930
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 800F4934
  if (crb(c,2)) { goto L_800F4944; } // 800F4938
  c->r[3]=0u+0x00000000u; // 800F493C
  return; // 800F4940
L_800F4944:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 800F4944
  cmpu(c,0,c->r[0],0x00000009u); // 800F4948
  if (!crb(c,0)) { goto L_800F496C; } // 800F494C
  c->r[3]=0u+0x803A0000u; // 800F4950
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800F4954
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F4958
  c->r[3]=c->r[3]+0x00030000u; // 800F495C
  c->r[3]=c->r[3]+c->r[0]; // 800F4960
  c->r[3]=R16(c->r[3]+0xFFFF89E8u); // 800F4964
  return; // 800F4968
L_800F496C:;
  c->r[3]=0u+0x00000000u; // 800F496C
  return; // 800F4970
  unimpl(c,0x800F4974u,"00000000"); // 800F4974
  unimpl(c,0x800F4978u,"00000000"); // 800F4978
  unimpl(c,0x800F497Cu,"00000000"); // 800F497C
  f_800F4980(c);
}

// GKI_send_msg
void f_800F4980(Ctx* __restrict c) {
  trace_call(0x800F4980u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4980
  c->r[0]=c->lr; // 800F4984
  c->r[7]=0u+0x803A0000u; // 800F4988
  c->r[6]=0u+0x80330000u; // 800F498C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4990
  cmpu(c,0,c->r[3],0x00000008u); // 800F4994
  c->r[7]=c->r[7]+0xFFFFD968u; // 800F4998
  c->r[6]=c->r[6]+0xFFFF9B98u; // 800F499C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F49A0
  c->r[31]=c->r[5]|c->r[5]; // 800F49A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F49A8
  c->r[30]=c->r[7]+0x00000054u; // 800F49AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F49B0
  c->r[29]=c->r[4]|c->r[4]; // 800F49B4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F49B8
  c->r[28]=c->r[3]|c->r[3]; // 800F49BC
  if (!crb(c,0)) { goto L_800F49E0; } // 800F49C0
  cmpu(c,0,c->r[4],0x00000004u); // 800F49C4
  if (!crb(c,0)) { goto L_800F49E0; } // 800F49C8
  c->r[0]=c->r[30]+0x00030000u; // 800F49CC
  c->r[3]=c->r[0]+c->r[3]; // 800F49D0
  c->r[0]=R8(c->r[3]+0xFFFF87ACu); // 800F49D4
  cmps(c,0,(int32_t)c->r[0],0); // 800F49D8
  if (!crb(c,2)) { goto L_800F4A00; } // 800F49DC
L_800F49E0:;
  c->r[3]=0u+0x00010000u; // 800F49E0
  c->r[4]=c->r[6]+0x00000068u; // 800F49E4
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 800F49E8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F49EC
  c->lr=0x800F49F4u; f_800F5D30(c); // 800F49F0
  c->r[3]=c->r[31]|c->r[31]; // 800F49F4
  c->lr=0x800F49FCu; f_800F47C0(c); // 800F49F8
  goto L_800F4B1C; // 800F49FC
L_800F4A00:;
  c->r[31]=c->r[5]+0xFFFFFFF8u; // 800F4A00
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800F4A04
  if (crb(c,2)) { goto L_800F4A14; } // 800F4A08
  c->r[0]=0u+0x00000000u; // 800F4A0C
  goto L_800F4A38; // 800F4A10
L_800F4A14:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F4A14
  cmpu(c,0,c->r[0],0x00000009u); // 800F4A18
  if (!crb(c,0)) { goto L_800F4A34; } // 800F4A1C
  c->r[3]=c->r[7]+0x00030000u; // 800F4A20
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800F4A24
  c->r[3]=c->r[3]+c->r[0]; // 800F4A28
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 800F4A2C
  goto L_800F4A38; // 800F4A30
L_800F4A34:;
  c->r[0]=0u+0x00000000u; // 800F4A34
L_800F4A38:;
  c->r[4]=c->r[5]+c->r[0]; // 800F4A38
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800F4A3C
  if (crb(c,2)) { goto L_800F4A4C; } // 800F4A40
  c->r[0]=0u+0x00000001u; // 800F4A44
  goto L_800F4A68; // 800F4A48
L_800F4A4C:;
  c->r[3]=0u+0xDDBB0000u; // 800F4A4C
  c->r[4]=R32(c->r[4]+0x00000000u); // 800F4A50
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 800F4A54
  c->r[3]=c->r[0]-c->r[4]; // 800F4A58
  c->r[0]=c->r[4]-c->r[0]; // 800F4A5C
  c->r[0]=c->r[3]|c->r[0]; // 800F4A60
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F4A64
L_800F4A68:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800F4A68
  if (crb(c,2)) { goto L_800F4A88; } // 800F4A6C
  c->r[3]=0u+0x00010000u; // 800F4A70
  c->r[4]=c->r[6]+0x00000080u; // 800F4A74
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F4A78
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4A7C
  c->lr=0x800F4A84u; f_800F5D30(c); // 800F4A80
  goto L_800F4B1C; // 800F4A84
L_800F4A88:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 800F4A88
  cmpu(c,0,c->r[0],0x00000001u); // 800F4A8C
  if (crb(c,2)) { goto L_800F4AAC; } // 800F4A90
  c->r[3]=0u+0x00010000u; // 800F4A94
  c->r[4]=c->r[6]+0x00000098u; // 800F4A98
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 800F4A9C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4AA0
  c->lr=0x800F4AA8u; f_800F5D30(c); // 800F4AA4
  goto L_800F4B1C; // 800F4AA8
L_800F4AAC:;
  c->lr=0x800F4AB0u; f_800F5CE0(c); // 800F4AAC
  c->r[4]=rotl(c->r[28],4)&0x00000FF0u; // 800F4AB0
  c->r[0]=c->r[30]+0x00030000u; // 800F4AB4
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 800F4AB8
  c->r[0]=c->r[0]+c->r[4]; // 800F4ABC
  c->r[3]=c->r[0]+c->r[5]; // 800F4AC0
  c->r[0]=R32(c->r[3]+0xFFFF888Cu); // 800F4AC4
  cmps(c,0,(int32_t)c->r[0],0); // 800F4AC8
  if (crb(c,2)) { goto L_800F4ADC; } // 800F4ACC
  c->r[3]=R32(c->r[3]+0xFFFF890Cu); // 800F4AD0
  W32(c->r[3]+0x00000000u,c->r[31]); // 800F4AD4
  goto L_800F4AE0; // 800F4AD8
L_800F4ADC:;
  W32(c->r[3]+0xFFFF888Cu,c->r[31]); // 800F4ADC
L_800F4AE0:;
  c->r[0]=c->r[30]+0x00030000u; // 800F4AE0
  c->r[3]=0u+0x00000000u; // 800F4AE4
  c->r[4]=c->r[0]+c->r[4]; // 800F4AE8
  c->r[4]=c->r[4]+c->r[5]; // 800F4AEC
  c->r[0]=0u+0x00000002u; // 800F4AF0
  W32(c->r[4]+0xFFFF890Cu,c->r[31]); // 800F4AF4
  W32(c->r[31]+0x00000000u,c->r[3]); // 800F4AF8
  W8(c->r[31]+0x00000006u,c->r[0]); // 800F4AFC
  W8(c->r[31]+0x00000005u,c->r[28]); // 800F4B00
  c->lr=0x800F4B08u; f_800F5CB0(c); // 800F4B04
  c->r[0]=0u+0x00000001u; // 800F4B08
  c->r[3]=c->r[28]|c->r[28]; // 800F4B0C
  c->r[0]=((c->r[29])&0x20)?0u:(c->r[0]<<((c->r[29])&31)); // 800F4B10
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4B14
  c->lr=0x800F4B1Cu; f_800F5BF0(c); // 800F4B18
L_800F4B1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4B1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4B20
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4B24
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4B28
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F4B2C
  c->lr=c->r[0]; // 800F4B30
  c->r[1]=c->r[1]+0x00000020u; // 800F4B34
  return; // 800F4B38
  unimpl(c,0x800F4B3Cu,"00000000"); // 800F4B3C
  f_800F4B40(c);
}

// GKI_read_mbox
void f_800F4B40(Ctx* __restrict c) {
  trace_call(0x800F4B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4B40
  c->r[0]=c->lr; // 800F4B44
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4B48
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4B4C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4B50
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4B54
  c->r[29]=c->r[3]|c->r[3]; // 800F4B58
  c->lr=0x800F4B60u; f_800F5CA0(c); // 800F4B5C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F4B60
  c->r[31]=c->r[3]|c->r[3]; // 800F4B64
  cmpu(c,0,c->r[0],0x00000008u); // 800F4B68
  c->r[30]=0u+0x00000000u; // 800F4B6C
  if (!crb(c,0)) { goto L_800F4B7C; } // 800F4B70
  cmpu(c,0,c->r[29],0x00000004u); // 800F4B74
  if (crb(c,0)) { goto L_800F4B84; } // 800F4B78
L_800F4B7C:;
  c->r[3]=0u+0x00000000u; // 800F4B7C
  goto L_800F4BD4; // 800F4B80
L_800F4B84:;
  c->lr=0x800F4B88u; f_800F5CE0(c); // 800F4B84
  c->r[3]=0u+0x803A0000u; // 800F4B88
  c->r[4]=rotl(c->r[31],4)&0x00000FF0u; // 800F4B8C
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F4B90
  c->r[5]=rotl(c->r[29],2)&0x000003FCu; // 800F4B94
  c->r[0]=c->r[3]+0x00030000u; // 800F4B98
  c->r[3]=c->r[0]+c->r[4]; // 800F4B9C
  c->r[6]=c->r[3]+0xFFFF88E0u; // 800F4BA0
  c->r[4]=R32(c->r[6]+c->r[5]); // 800F4BA4
  cmps(c,0,(int32_t)c->r[4],0); // 800F4BA8
  if (crb(c,2)) { goto L_800F4BCC; } // 800F4BAC
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F4BB0
  c->r[3]=0u+0x00000000u; // 800F4BB4
  W32(c->r[6]+c->r[5],c->r[0]); // 800F4BB8
  c->r[0]=0u+0x00000001u; // 800F4BBC
  c->r[30]=c->r[4]+0x00000008u; // 800F4BC0
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F4BC4
  W8(c->r[4]+0x00000006u,c->r[0]); // 800F4BC8
L_800F4BCC:;
  c->lr=0x800F4BD0u; f_800F5CB0(c); // 800F4BCC
  c->r[3]=c->r[30]|c->r[30]; // 800F4BD0
L_800F4BD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4BD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4BD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4BDC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4BE0
  c->lr=c->r[0]; // 800F4BE4
  c->r[1]=c->r[1]+0x00000020u; // 800F4BE8
  return; // 800F4BEC
}

// GKI_enqueue
void f_800F4BF0(Ctx* __restrict c) {
  trace_call(0x800F4BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4BF0
  c->r[0]=c->lr; // 800F4BF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4BF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4BFC
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 800F4C00
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800F4C04
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4C08
  c->r[30]=c->r[4]|c->r[4]; // 800F4C0C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4C10
  c->r[29]=c->r[3]|c->r[3]; // 800F4C14
  if (crb(c,2)) { goto L_800F4C24; } // 800F4C18
  c->r[0]=0u+0x00000000u; // 800F4C1C
  goto L_800F4C50; // 800F4C20
L_800F4C24:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F4C24
  cmpu(c,0,c->r[0],0x00000009u); // 800F4C28
  if (!crb(c,0)) { goto L_800F4C4C; } // 800F4C2C
  c->r[3]=0u+0x803A0000u; // 800F4C30
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800F4C34
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F4C38
  c->r[3]=c->r[3]+0x00030000u; // 800F4C3C
  c->r[3]=c->r[3]+c->r[0]; // 800F4C40
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 800F4C44
  goto L_800F4C50; // 800F4C48
L_800F4C4C:;
  c->r[0]=0u+0x00000000u; // 800F4C4C
L_800F4C50:;
  c->r[4]=c->r[4]+c->r[0]; // 800F4C50
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800F4C54
  if (crb(c,2)) { goto L_800F4C64; } // 800F4C58
  c->r[0]=0u+0x00000001u; // 800F4C5C
  goto L_800F4C80; // 800F4C60
L_800F4C64:;
  c->r[3]=0u+0xDDBB0000u; // 800F4C64
  c->r[4]=R32(c->r[4]+0x00000000u); // 800F4C68
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 800F4C6C
  c->r[3]=c->r[0]-c->r[4]; // 800F4C70
  c->r[0]=c->r[4]-c->r[0]; // 800F4C74
  c->r[0]=c->r[3]|c->r[0]; // 800F4C78
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F4C7C
L_800F4C80:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800F4C80
  if (crb(c,2)) { goto L_800F4CA4; } // 800F4C84
  c->r[3]=0u+0x00010000u; // 800F4C88
  c->r[4]=0u+0x80330000u; // 800F4C8C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F4C90
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4C94
  c->r[4]=c->r[4]+0xFFFF9C48u; // 800F4C98
  c->lr=0x800F4CA0u; f_800F5D30(c); // 800F4C9C
  goto L_800F4D10; // 800F4CA0
L_800F4CA4:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 800F4CA4
  cmpu(c,0,c->r[0],0x00000001u); // 800F4CA8
  if (crb(c,2)) { goto L_800F4CCC; } // 800F4CAC
  c->r[3]=0u+0x00010000u; // 800F4CB0
  c->r[4]=0u+0x80330000u; // 800F4CB4
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 800F4CB8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4CBC
  c->r[4]=c->r[4]+0xFFFF9C64u; // 800F4CC0
  c->lr=0x800F4CC8u; f_800F5D30(c); // 800F4CC4
  goto L_800F4D10; // 800F4CC8
L_800F4CCC:;
  c->lr=0x800F4CD0u; f_800F5CE0(c); // 800F4CCC
  c->r[0]=R32(c->r[29]+0x00000000u); // 800F4CD0
  cmps(c,0,(int32_t)c->r[0],0); // 800F4CD4
  if (crb(c,2)) { goto L_800F4CE8; } // 800F4CD8
  c->r[3]=R32(c->r[29]+0x00000004u); // 800F4CDC
  W32(c->r[3]+0xFFFFFFF8u,c->r[31]); // 800F4CE0
  goto L_800F4CEC; // 800F4CE4
L_800F4CE8:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 800F4CE8
L_800F4CEC:;
  c->r[4]=R16(c->r[29]+0x00000008u); // 800F4CEC
  c->r[3]=0u+0x00000000u; // 800F4CF0
  W32(c->r[29]+0x00000004u,c->r[30]); // 800F4CF4
  c->r[0]=0u+0x00000002u; // 800F4CF8
  c->r[4]=c->r[4]+0x00000001u; // 800F4CFC
  W16(c->r[29]+0x00000008u,c->r[4]); // 800F4D00
  W32(c->r[31]+0x00000000u,c->r[3]); // 800F4D04
  W8(c->r[31]+0x00000006u,c->r[0]); // 800F4D08
  c->lr=0x800F4D10u; f_800F5CB0(c); // 800F4D0C
L_800F4D10:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4D10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4D14
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4D18
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4D1C
  c->lr=c->r[0]; // 800F4D20
  c->r[1]=c->r[1]+0x00000020u; // 800F4D24
  return; // 800F4D28
  unimpl(c,0x800F4D2Cu,"00000000"); // 800F4D2C
  f_800F4D30(c);
}

// fn_800F4D30
void f_800F4D30(Ctx* __restrict c) {
  trace_call(0x800F4D30u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4D30
  c->r[0]=c->lr; // 800F4D34
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F4D38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F4D3C
  c->r[31]=c->r[4]+0xFFFFFFF8u; // 800F4D40
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800F4D44
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F4D48
  c->r[30]=c->r[4]|c->r[4]; // 800F4D4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F4D50
  c->r[29]=c->r[3]|c->r[3]; // 800F4D54
  if (crb(c,2)) { goto L_800F4D64; } // 800F4D58
  c->r[0]=0u+0x00000000u; // 800F4D5C
  goto L_800F4D90; // 800F4D60
L_800F4D64:;
  c->r[0]=R8(c->r[31]+0x00000004u); // 800F4D64
  cmpu(c,0,c->r[0],0x00000009u); // 800F4D68
  if (!crb(c,0)) { goto L_800F4D8C; } // 800F4D6C
  c->r[3]=0u+0x803A0000u; // 800F4D70
  c->r[0]=rotl(c->r[0],4)&0x00000FF0u; // 800F4D74
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F4D78
  c->r[3]=c->r[3]+0x00030000u; // 800F4D7C
  c->r[3]=c->r[3]+c->r[0]; // 800F4D80
  c->r[0]=R16(c->r[3]+0xFFFF89E8u); // 800F4D84
  goto L_800F4D90; // 800F4D88
L_800F4D8C:;
  c->r[0]=0u+0x00000000u; // 800F4D8C
L_800F4D90:;
  c->r[4]=c->r[4]+c->r[0]; // 800F4D90
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800F4D94
  if (crb(c,2)) { goto L_800F4DA4; } // 800F4D98
  c->r[0]=0u+0x00000001u; // 800F4D9C
  goto L_800F4DC0; // 800F4DA0
L_800F4DA4:;
  c->r[3]=0u+0xDDBB0000u; // 800F4DA4
  c->r[4]=R32(c->r[4]+0x00000000u); // 800F4DA8
  c->r[0]=c->r[3]+0xFFFFDDBAu; // 800F4DAC
  c->r[3]=c->r[0]-c->r[4]; // 800F4DB0
  c->r[0]=c->r[4]-c->r[0]; // 800F4DB4
  c->r[0]=c->r[3]|c->r[0]; // 800F4DB8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 800F4DBC
L_800F4DC0:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; cr0(c,c->r[0]); // 800F4DC0
  if (crb(c,2)) { goto L_800F4DE4; } // 800F4DC4
  c->r[3]=0u+0x00010000u; // 800F4DC8
  c->r[4]=0u+0x80330000u; // 800F4DCC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F4DD0
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4DD4
  c->r[4]=c->r[4]+0xFFFF9C48u; // 800F4DD8
  c->lr=0x800F4DE0u; f_800F5D30(c); // 800F4DDC
  goto L_800F4E54; // 800F4DE0
L_800F4DE4:;
  c->r[0]=R8(c->r[31]+0x00000006u); // 800F4DE4
  cmpu(c,0,c->r[0],0x00000001u); // 800F4DE8
  if (crb(c,2)) { goto L_800F4E0C; } // 800F4DEC
  c->r[3]=0u+0x00010000u; // 800F4DF0
  c->r[4]=0u+0x80330000u; // 800F4DF4
  c->r[0]=c->r[3]+0xFFFFFFF9u; // 800F4DF8
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F4DFC
  c->r[4]=c->r[4]+0xFFFF9C84u; // 800F4E00
  c->lr=0x800F4E08u; f_800F5D30(c); // 800F4E04
  goto L_800F4E54; // 800F4E08
L_800F4E0C:;
  c->lr=0x800F4E10u; f_800F5CE0(c); // 800F4E0C
  c->r[3]=R32(c->r[29]+0x00000000u); // 800F4E10
  cmps(c,0,(int32_t)c->r[3],0); // 800F4E14
  if (crb(c,2)) { goto L_800F4E2C; } // 800F4E18
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800F4E1C
  W32(c->r[31]+0x00000000u,c->r[0]); // 800F4E20
  W32(c->r[29]+0x00000000u,c->r[30]); // 800F4E24
  goto L_800F4E3C; // 800F4E28
L_800F4E2C:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 800F4E2C
  c->r[0]=0u+0x00000000u; // 800F4E30
  W32(c->r[29]+0x00000004u,c->r[30]); // 800F4E34
  W32(c->r[31]+0x00000000u,c->r[0]); // 800F4E38
L_800F4E3C:;
  c->r[3]=R16(c->r[29]+0x00000008u); // 800F4E3C
  c->r[0]=0u+0x00000002u; // 800F4E40
  c->r[3]=c->r[3]+0x00000001u; // 800F4E44
  W16(c->r[29]+0x00000008u,c->r[3]); // 800F4E48
  W8(c->r[31]+0x00000006u,c->r[0]); // 800F4E4C
  c->lr=0x800F4E54u; f_800F5CB0(c); // 800F4E50
L_800F4E54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F4E54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F4E58
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F4E5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F4E60
  c->lr=c->r[0]; // 800F4E64
  c->r[1]=c->r[1]+0x00000020u; // 800F4E68
  return; // 800F4E6C
}

// fn_800F4E70
void f_800F4E70(Ctx* __restrict c) {
  trace_call(0x800F4E70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4E70
  c->r[0]=c->lr; // 800F4E74
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4E78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4E7C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4E80
  c->r[30]=c->r[3]|c->r[3]; // 800F4E84
  c->lr=0x800F4E8Cu; f_800F5CE0(c); // 800F4E88
  cmps(c,0,(int32_t)c->r[30],0); // 800F4E8C
  if (crb(c,2)) { goto L_800F4EA0; } // 800F4E90
  c->r[0]=R16(c->r[30]+0x00000008u); // 800F4E94
  cmps(c,0,(int32_t)c->r[0],0); // 800F4E98
  if (!crb(c,2)) { goto L_800F4EAC; } // 800F4E9C
L_800F4EA0:;
  c->lr=0x800F4EA4u; f_800F5CB0(c); // 800F4EA0
  c->r[3]=0u+0x00000000u; // 800F4EA4
  goto L_800F4EF8; // 800F4EA8
L_800F4EAC:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 800F4EAC
  c->r[3]=R32(c->r[31]+0xFFFFFFF8u); // 800F4EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4EB4
  if (crb(c,2)) { goto L_800F4EC8; } // 800F4EB8
  c->r[0]=c->r[3]+0x00000008u; // 800F4EBC
  W32(c->r[30]+0x00000000u,c->r[0]); // 800F4EC0
  goto L_800F4ED4; // 800F4EC4
L_800F4EC8:;
  c->r[0]=0u+0x00000000u; // 800F4EC8
  W32(c->r[30]+0x00000000u,c->r[0]); // 800F4ECC
  W32(c->r[30]+0x00000004u,c->r[0]); // 800F4ED0
L_800F4ED4:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 800F4ED4
  c->r[3]=0u+0x00000000u; // 800F4ED8
  c->r[0]=0u+0x00000001u; // 800F4EDC
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F4EE0
  W16(c->r[30]+0x00000008u,c->r[4]); // 800F4EE4
  W32(c->r[31]+0xFFFFFFF8u,c->r[3]); // 800F4EE8
  W8(c->r[31]+0xFFFFFFFEu,c->r[0]); // 800F4EEC
  c->lr=0x800F4EF4u; f_800F5CB0(c); // 800F4EF0
  c->r[3]=c->r[31]|c->r[31]; // 800F4EF4
L_800F4EF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4EF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4EFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4F00
  c->lr=c->r[0]; // 800F4F04
  c->r[1]=c->r[1]+0x00000010u; // 800F4F08
  return; // 800F4F0C
}

// GKI_remove_from_queue
void f_800F4F10(Ctx* __restrict c) {
  trace_call(0x800F4F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F4F10
  c->r[0]=c->lr; // 800F4F14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F4F18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F4F1C
  c->r[31]=c->r[4]|c->r[4]; // 800F4F20
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F4F24
  c->r[30]=c->r[3]|c->r[3]; // 800F4F28
  c->lr=0x800F4F30u; f_800F5CE0(c); // 800F4F2C
  c->r[3]=R32(c->r[30]+0x00000000u); // 800F4F30
  cmpu(c,0,c->r[31],c->r[3]); // 800F4F34
  if (!crb(c,2)) { goto L_800F4F4C; } // 800F4F38
  c->lr=0x800F4F40u; f_800F5CB0(c); // 800F4F3C
  c->r[3]=c->r[30]|c->r[30]; // 800F4F40
  c->lr=0x800F4F48u; f_800F4E70(c); // 800F4F44
  goto L_800F4FBC; // 800F4F48
L_800F4F4C:;
  c->r[5]=c->r[31]+0xFFFFFFF8u; // 800F4F4C
  c->r[3]=c->r[3]+0xFFFFFFF8u; // 800F4F50
  goto L_800F4FAC; // 800F4F54
L_800F4F58:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F4F58
  cmpu(c,0,c->r[0],c->r[5]); // 800F4F5C
  if (!crb(c,2)) { goto L_800F4FA8; } // 800F4F60
  c->r[0]=R32(c->r[5]+0x00000000u); // 800F4F64
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F4F68
  c->r[0]=R32(c->r[30]+0x00000004u); // 800F4F6C
  cmpu(c,0,c->r[31],c->r[0]); // 800F4F70
  if (!crb(c,2)) { goto L_800F4F80; } // 800F4F74
  c->r[0]=c->r[3]+0x00000008u; // 800F4F78
  W32(c->r[30]+0x00000004u,c->r[0]); // 800F4F7C
L_800F4F80:;
  c->r[4]=R16(c->r[30]+0x00000008u); // 800F4F80
  c->r[3]=0u+0x00000000u; // 800F4F84
  c->r[0]=0u+0x00000001u; // 800F4F88
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 800F4F8C
  W16(c->r[30]+0x00000008u,c->r[4]); // 800F4F90
  W32(c->r[5]+0x00000000u,c->r[3]); // 800F4F94
  W8(c->r[5]+0x00000006u,c->r[0]); // 800F4F98
  c->lr=0x800F4FA0u; f_800F5CB0(c); // 800F4F9C
  c->r[3]=c->r[31]|c->r[31]; // 800F4FA0
  goto L_800F4FBC; // 800F4FA4
L_800F4FA8:;
  c->r[3]=c->r[0]|c->r[0]; // 800F4FA8
L_800F4FAC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F4FAC
  if (!crb(c,2)) { IRQCHK(c); goto L_800F4F58; } // 800F4FB0
  c->lr=0x800F4FB8u; f_800F5CB0(c); // 800F4FB4
  c->r[3]=0u+0x00000000u; // 800F4FB8
L_800F4FBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F4FBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F4FC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F4FC4
  c->lr=c->r[0]; // 800F4FC8
  c->r[1]=c->r[1]+0x00000010u; // 800F4FCC
  return; // 800F4FD0
  unimpl(c,0x800F4FD4u,"00000000"); // 800F4FD4
  unimpl(c,0x800F4FD8u,"00000000"); // 800F4FD8
  unimpl(c,0x800F4FDCu,"00000000"); // 800F4FDC
  f_800F4FE0(c);
}

// GKI_getfirst
void f_800F4FE0(Ctx* __restrict c) {
  trace_call(0x800F4FE0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 800F4FE0
  return; // 800F4FE4
  unimpl(c,0x800F4FE8u,"00000000"); // 800F4FE8
  unimpl(c,0x800F4FECu,"00000000"); // 800F4FEC
  f_800F4FF0(c);
}

// GKI_getnext
void f_800F4FF0(Ctx* __restrict c) {
  trace_call(0x800F4FF0u);
  c->r[3]=R32(c->r[3]+0xFFFFFFF8u); // 800F4FF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F4FF4
  if (crb(c,2)) { goto L_800F5004; } // 800F4FF8
  c->r[3]=c->r[3]+0x00000008u; // 800F4FFC
  return; // 800F5000
L_800F5004:;
  c->r[3]=0u+0x00000000u; // 800F5004
  return; // 800F5008
  unimpl(c,0x800F500Cu,"00000000"); // 800F500C
  f_800F5010(c);
}

// fn_800F5010
void f_800F5010(Ctx* __restrict c) {
  trace_call(0x800F5010u);
  c->r[0]=R16(c->r[3]+0x00000008u); // 800F5010
  c->r[0]=cntlz(c->r[0]); // 800F5014
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 800F5018
  return; // 800F501C
}

// GKI_create_pool
void f_800F5020(Ctx* __restrict c) {
  trace_call(0x800F5020u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5020
  c->r[0]=c->lr; // 800F5024
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F5028
  c->r[11]=c->r[1]+0x00000020u; // 800F502C
  c->lr=0x800F5034u; f_800ADA2C(c); // 800F5030
  c->r[7]=0u+0x803A0000u; // 800F5034
  cmpu(c,0,c->r[3],0x0000FFF3u); // 800F5038
  c->r[7]=c->r[7]+0xFFFFD968u; // 800F503C
  c->r[27]=c->r[3]|c->r[3]; // 800F5040
  c->r[28]=c->r[4]|c->r[4]; // 800F5044
  c->r[29]=c->r[5]|c->r[5]; // 800F5048
  c->r[30]=c->r[7]+0x00000054u; // 800F504C
  if (!crb(c,1)) { goto L_800F505C; } // 800F5050
  c->r[3]=0u+0x000000FFu; // 800F5054
  goto L_800F5350; // 800F5058
L_800F505C:;
  c->r[0]=0u+0x00000003u; // 800F505C
  c->r[31]=0u+0x00000000u; // 800F5060
  c->ctr=c->r[0]; // 800F5064
L_800F5068:;
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 800F5068
  c->r[5]=c->r[5]+0x00030000u; // 800F506C
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 800F5070
  c->r[0]=R32(c->r[30]+c->r[0]); // 800F5074
  cmps(c,0,(int32_t)c->r[0],0); // 800F5078
  if (crb(c,2)) { goto L_800F50C0; } // 800F507C
  c->r[31]=c->r[31]+0x00000001u; // 800F5080
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 800F5084
  c->r[5]=c->r[5]+0x00030000u; // 800F5088
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 800F508C
  c->r[0]=R32(c->r[30]+c->r[0]); // 800F5090
  cmps(c,0,(int32_t)c->r[0],0); // 800F5094
  if (crb(c,2)) { goto L_800F50C0; } // 800F5098
  c->r[31]=c->r[31]+0x00000001u; // 800F509C
  c->r[5]=rotl(c->r[31],2)&0x000003FCu; // 800F50A0
  c->r[5]=c->r[5]+0x00030000u; // 800F50A4
  c->r[0]=c->r[5]+0xFFFF8A1Cu; // 800F50A8
  c->r[0]=R32(c->r[30]+c->r[0]); // 800F50AC
  cmps(c,0,(int32_t)c->r[0],0); // 800F50B0
  if (crb(c,2)) { goto L_800F50C0; } // 800F50B4
  c->r[31]=c->r[31]+0x00000001u; // 800F50B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F5068; } // 800F50BC
L_800F50C0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F50C0
  cmpu(c,0,c->r[0],0x00000009u); // 800F50C4
  if (!crb(c,2)) { goto L_800F50D4; } // 800F50C8
  c->r[3]=0u+0x000000FFu; // 800F50CC
  goto L_800F5350; // 800F50D0
L_800F50D4:;
  c->r[0]=c->r[3]+0x00000003u; // 800F50D4
  cmps(c,0,(int32_t)c->r[6],0); // 800F50D8
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800F50DC
  c->r[0]=c->r[3]+0x0000000Cu; // 800F50E0
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[4]); // 800F50E4
  if (!crb(c,2)) { goto L_800F50F4; } // 800F50E8
  c->lr=0x800F50F0u; f_800F5D40(c); // 800F50EC
  c->r[6]=c->r[3]|c->r[3]; // 800F50F0
L_800F50F4:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F50F4
  if (crb(c,2)) { goto L_800F534C; } // 800F50F8
  c->r[4]=c->r[27]|c->r[27]; // 800F50FC
  c->r[5]=c->r[28]|c->r[28]; // 800F5100
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 800F5104
  c->lr=0x800F510Cu; f_800F4040(c); // 800F5108
  c->r[3]=0u+0x803A0000u; // 800F510C
  c->r[5]=rotl(c->r[31],4)&0x00000FF0u; // 800F5110
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F5114
  c->r[4]=0u+0x00000000u; // 800F5118
  c->r[3]=c->r[3]+0x00000054u; // 800F511C
  c->r[6]=c->r[5]+0x00030000u; // 800F5120
  c->r[5]=c->r[3]+0x00030000u; // 800F5124
  c->r[5]=R8(c->r[5]+0xFFFF8A87u); // 800F5128
  c->r[0]=c->r[6]+0xFFFF8994u; // 800F512C
  c->r[7]=R16(c->r[3]+c->r[0]); // 800F5130
  c->ctr=c->r[5]; // 800F5134
  cmps(c,0,(int32_t)c->r[5],0); // 800F5138
  if (!crb(c,1)) { goto L_800F516C; } // 800F513C
L_800F5140:;
  c->r[6]=c->r[4]+0x00030000u; // 800F5140
  c->r[0]=c->r[6]+0xFFFF8A7Eu; // 800F5144
  c->r[0]=R8(c->r[3]+c->r[0]); // 800F5148
  c->r[6]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800F514C
  c->r[6]=c->r[6]+0x00030000u; // 800F5150
  c->r[0]=c->r[6]+0xFFFF8994u; // 800F5154
  c->r[0]=R16(c->r[3]+c->r[0]); // 800F5158
  cmpu(c,0,c->r[7],c->r[0]); // 800F515C
  if (!crb(c,1)) { goto L_800F516C; } // 800F5160
  c->r[4]=c->r[4]+0x00000001u; // 800F5164
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F5140; } // 800F5168
L_800F516C:;
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800F516C
  if (!crb(c,1)) { goto L_800F52D4; } // 800F5170
  c->r[0]=c->r[5]-c->r[4]; // 800F5174
  c->r[8]=c->r[4]+0x00000008u; // 800F5178
  cmps(c,0,(int32_t)c->r[0],8); // 800F517C
  if (!crb(c,1)) { goto L_800F52AC; } // 800F5180
  c->r[6]=c->r[3]+0x00030000u; // 800F5184
  c->r[9]=0u+0x00000000u; // 800F5188
  c->r[0]=R8(c->r[6]+0xFFFF8A87u); // 800F518C
  c->r[10]=0u+0x00000000u; // 800F5190
  c->r[11]=0u+0x00000000u; // 800F5194
  c->r[7]=0u+0x00000000u; // 800F5198
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 800F519C
  if (crb(c,0)) { goto L_800F51B8; } // 800F51A0
  c->r[6]=0u+0x80000000u; // 800F51A4
  c->r[0]=c->r[6]+0x00000001u; // 800F51A8
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800F51AC
  if (crb(c,0)) { goto L_800F51B8; } // 800F51B0
  c->r[7]=0u+0x00000001u; // 800F51B4
L_800F51B8:;
  cmps(c,0,(int32_t)c->r[7],0); // 800F51B8
  if (crb(c,2)) { goto L_800F51DC; } // 800F51BC
  c->r[7]=c->r[3]+0x00030000u; // 800F51C0
  c->r[6]=0u+0x80000000u; // 800F51C4
  c->r[7]=R8(c->r[7]+0xFFFF8A87u); // 800F51C8
  c->r[0]=c->r[6]+0x00000001u; // 800F51CC
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F51D0
  if (crb(c,0)) { goto L_800F51DC; } // 800F51D4
  c->r[11]=0u+0x00000001u; // 800F51D8
L_800F51DC:;
  cmps(c,0,(int32_t)c->r[11],0); // 800F51DC
  if (crb(c,2)) { goto L_800F51F4; } // 800F51E0
  c->r[0]=c->r[4]+0x80000000u; // 800F51E4
  cmpu(c,0,c->r[0],0x00000000u); // 800F51E8
  if (crb(c,2)) { goto L_800F51F4; } // 800F51EC
  c->r[10]=0u+0x00000001u; // 800F51F0
L_800F51F4:;
  cmps(c,0,(int32_t)c->r[10],0); // 800F51F4
  if (crb(c,2)) { goto L_800F523C; } // 800F51F8
  c->r[6]=c->r[3]+0x00030000u; // 800F51FC
  c->r[0]=0u-c->r[4]; // 800F5200
  c->r[10]=R8(c->r[6]+0xFFFF8A87u); // 800F5204
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800F5208
  c->r[6]=0u+0x00000001u; // 800F520C
  c->r[7]=rotl(c->r[10],0)&0x80000000u; // 800F5210
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F5214
  if (!crb(c,2)) { goto L_800F5230; } // 800F5218
  c->r[0]=c->r[10]-c->r[4]; // 800F521C
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 800F5220
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 800F5224
  if (crb(c,2)) { goto L_800F5230; } // 800F5228
  c->r[6]=0u+0x00000000u; // 800F522C
L_800F5230:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F5230
  if (crb(c,2)) { goto L_800F523C; } // 800F5234
  c->r[9]=0u+0x00000001u; // 800F5238
L_800F523C:;
  cmps(c,0,(int32_t)c->r[9],0); // 800F523C
  if (crb(c,2)) { goto L_800F52AC; } // 800F5240
  c->r[0]=c->r[5]+0x00000007u; // 800F5244
  c->r[0]=c->r[0]-c->r[8]; // 800F5248
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 800F524C
  c->ctr=c->r[0]; // 800F5250
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[8]); // 800F5254
  if (!crb(c,1)) { goto L_800F52AC; } // 800F5258
L_800F525C:;
  c->r[6]=c->r[3]+c->r[5]; // 800F525C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 800F5260
  c->r[6]=c->r[6]+0x00030000u; // 800F5264
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 800F5268
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 800F526C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Cu); // 800F5270
  W8(c->r[6]+0xFFFF8A7Du,c->r[0]); // 800F5274
  c->r[0]=R8(c->r[6]+0xFFFF8A7Bu); // 800F5278
  W8(c->r[6]+0xFFFF8A7Cu,c->r[0]); // 800F527C
  c->r[0]=R8(c->r[6]+0xFFFF8A7Au); // 800F5280
  W8(c->r[6]+0xFFFF8A7Bu,c->r[0]); // 800F5284
  c->r[0]=R8(c->r[6]+0xFFFF8A79u); // 800F5288
  W8(c->r[6]+0xFFFF8A7Au,c->r[0]); // 800F528C
  c->r[0]=R8(c->r[6]+0xFFFF8A78u); // 800F5290
  W8(c->r[6]+0xFFFF8A79u,c->r[0]); // 800F5294
  c->r[0]=R8(c->r[6]+0xFFFF8A77u); // 800F5298
  W8(c->r[6]+0xFFFF8A78u,c->r[0]); // 800F529C
  c->r[0]=R8(c->r[6]+0xFFFF8A76u); // 800F52A0
  W8(c->r[6]+0xFFFF8A77u,c->r[0]); // 800F52A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F525C; } // 800F52A8
L_800F52AC:;
  c->r[0]=c->r[5]-c->r[4]; // 800F52AC
  c->ctr=c->r[0]; // 800F52B0
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[4]); // 800F52B4
  if (!crb(c,1)) { goto L_800F52D4; } // 800F52B8
L_800F52BC:;
  c->r[6]=c->r[3]+c->r[5]; // 800F52BC
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 800F52C0
  c->r[6]=c->r[6]+0x00030000u; // 800F52C4
  c->r[0]=R8(c->r[6]+0xFFFF8A7Du); // 800F52C8
  W8(c->r[6]+0xFFFF8A7Eu,c->r[0]); // 800F52CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F52BC; } // 800F52D0
L_800F52D4:;
  c->r[0]=c->r[3]+0x00030000u; // 800F52D4
  c->r[5]=rotl(c->r[31],0)&0x000000FFu; // 800F52D8
  c->r[4]=c->r[0]+c->r[4]; // 800F52DC
  c->r[3]=0u+0x803A0000u; // 800F52E0
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F52E4
  cmpu(c,0,c->r[5],0x00000009u); // 800F52E8
  W8(c->r[4]+0xFFFF8A7Eu,c->r[31]); // 800F52EC
  c->r[3]=c->r[3]+0x00000054u; // 800F52F0
  if (!crb(c,0)) { goto L_800F5334; } // 800F52F4
  cmpu(c,0,c->r[29],0x00000001u); // 800F52F8
  if (!crb(c,2)) { goto L_800F531C; } // 800F52FC
  c->r[4]=c->r[3]+0x00030000u; // 800F5300
  c->r[0]=0u+0x00000001u; // 800F5304
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 800F5308
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800F530C
  c->r[0]=c->r[3]|c->r[0]; // 800F5310
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 800F5314
  goto L_800F5334; // 800F5318
L_800F531C:;
  c->r[4]=c->r[3]+0x00030000u; // 800F531C
  c->r[0]=0u+0x00000001u; // 800F5320
  c->r[3]=R16(c->r[4]+0xFFFF8A7Cu); // 800F5324
  c->r[0]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 800F5328
  c->r[0]=c->r[3]&~c->r[0]; // 800F532C
  W16(c->r[4]+0xFFFF8A7Cu,c->r[0]); // 800F5330
L_800F5334:;
  c->r[5]=c->r[30]+0x00030000u; // 800F5334
  c->r[3]=c->r[31]|c->r[31]; // 800F5338
  c->r[4]=R8(c->r[5]+0xFFFF8A87u); // 800F533C
  c->r[0]=c->r[4]+0x00000001u; // 800F5340
  W8(c->r[5]+0xFFFF8A87u,c->r[0]); // 800F5344
  goto L_800F5350; // 800F5348
L_800F534C:;
  c->r[3]=0u+0x000000FFu; // 800F534C
L_800F5350:;
  c->r[11]=c->r[1]+0x00000020u; // 800F5350
  c->lr=0x800F5358u; f_800ADA78(c); // 800F5354
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F5358
  c->lr=c->r[0]; // 800F535C
  c->r[1]=c->r[1]+0x00000020u; // 800F5360
  return; // 800F5364
  unimpl(c,0x800F5368u,"00000000"); // 800F5368
  unimpl(c,0x800F536Cu,"00000000"); // 800F536C
  f_800F5370(c);
}

// GKI_delete_pool
void f_800F5370(Ctx* __restrict c) {
  trace_call(0x800F5370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5370
  c->r[0]=c->lr; // 800F5374
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F5378
  c->r[11]=c->r[1]+0x00000020u; // 800F537C
  c->lr=0x800F5384u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F5380
  c->r[27]=0u+0x803A0000u; // 800F5384
  cmpu(c,0,c->r[3],0x00000009u); // 800F5388
  c->r[27]=c->r[27]+0xFFFFD968u; // 800F538C
  c->r[30]=c->r[3]|c->r[3]; // 800F5390
  c->r[31]=c->r[27]+0x00000054u; // 800F5394
  if (!crb(c,0)) { goto L_800F54C0; } // 800F5398
  c->r[26]=rotl(c->r[3],2)&0x000003FCu; // 800F539C
  c->r[0]=c->r[31]+0x00030000u; // 800F53A0
  c->r[3]=c->r[0]+c->r[26]; // 800F53A4
  c->r[0]=R32(c->r[3]+0xFFFF8A1Cu); // 800F53A8
  cmps(c,0,(int32_t)c->r[0],0); // 800F53AC
  if (!crb(c,2)) { goto L_800F53B8; } // 800F53B0
  goto L_800F54C0; // 800F53B4
L_800F53B8:;
  c->lr=0x800F53BCu; f_800F5CE0(c); // 800F53B8
  c->r[4]=c->r[31]+0x00030000u; // 800F53BC
  c->r[0]=rotl(c->r[30],4)&0x00000FF0u; // 800F53C0
  c->r[3]=c->r[4]+c->r[0]; // 800F53C4
  c->r[0]=R16(c->r[3]+0xFFFF8998u); // 800F53C8
  cmps(c,0,(int32_t)c->r[0],0); // 800F53CC
  if (!crb(c,2)) { goto L_800F54A4; } // 800F53D0
  c->r[28]=0u+0x00000000u; // 800F53D4
  W16(c->r[3]+0xFFFF8994u,c->r[28]); // 800F53D8
  c->r[29]=c->r[4]+c->r[26]; // 800F53DC
  W16(c->r[3]+0xFFFF8996u,c->r[28]); // 800F53E0
  W16(c->r[3]+0xFFFF8998u,c->r[28]); // 800F53E4
  W16(c->r[3]+0xFFFF899Au,c->r[28]); // 800F53E8
  W32(c->r[3]+0xFFFF898Cu,c->r[28]); // 800F53EC
  W32(c->r[3]+0xFFFF8990u,c->r[28]); // 800F53F0
  c->r[3]=R32(c->r[29]+0xFFFF8A1Cu); // 800F53F4
  c->lr=0x800F53FCu; f_800F5D70(c); // 800F53F8
  c->r[4]=c->r[31]+0x00030000u; // 800F53FC
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 800F5400
  c->r[3]=c->r[4]+c->r[26]; // 800F5404
  W32(c->r[29]+0xFFFF8A1Cu,c->r[28]); // 800F5408
  c->r[4]=c->r[4]+c->r[0]; // 800F540C
  c->r[7]=c->r[31]|c->r[31]; // 800F5410
  W32(c->r[3]+0xFFFF8A40u,c->r[28]); // 800F5414
  c->r[3]=c->r[7]+0x00030000u; // 800F5418
  c->r[6]=0u+0x00000000u; // 800F541C
  W16(c->r[4]+0xFFFF8A64u,c->r[28]); // 800F5420
  c->r[4]=R8(c->r[3]+0xFFFF8A87u); // 800F5424
  goto L_800F544C; // 800F5428
  c->r[0]=c->r[0]|0x00000000u; // 800F542C
L_800F5430:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 800F5430
  c->r[3]=c->r[3]+0x00030000u; // 800F5434
  c->r[0]=c->r[3]+0xFFFF8A7Eu; // 800F5438
  c->r[0]=R8(c->r[7]+c->r[0]); // 800F543C
  cmpu(c,0,c->r[30],c->r[0]); // 800F5440
  if (crb(c,2)) { goto L_800F5458; } // 800F5444
  c->r[6]=c->r[6]+0x00000001u; // 800F5448
L_800F544C:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 800F544C
  cmpu(c,0,c->r[0],c->r[4]); // 800F5450
  if (crb(c,0)) { IRQCHK(c); goto L_800F5430; } // 800F5454
L_800F5458:;
  c->r[4]=c->r[7]+0x00030000u; // 800F5458
  goto L_800F547C; // 800F545C
L_800F5460:;
  c->r[3]=rotl(c->r[6],0)&0x000000FFu; // 800F5460
  c->r[6]=c->r[6]+0x00000001u; // 800F5464
  c->r[3]=c->r[3]+0x00030000u; // 800F5468
  c->r[3]=c->r[3]+0xFFFF8A7Eu; // 800F546C
  c->r[3]=c->r[7]+c->r[3]; // 800F5470
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F5474
  W8(c->r[3]+0x00000000u,c->r[0]); // 800F5478
L_800F547C:;
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 800F547C
  c->r[5]=rotl(c->r[6],0)&0x000000FFu; // 800F5480
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5484
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800F5488
  if (crb(c,0)) { IRQCHK(c); goto L_800F5460; } // 800F548C
  c->r[4]=c->r[31]+0x00030000u; // 800F5490
  c->r[3]=R8(c->r[4]+0xFFFF8A87u); // 800F5494
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5498
  W8(c->r[4]+0xFFFF8A87u,c->r[0]); // 800F549C
  goto L_800F54BC; // 800F54A0
L_800F54A4:;
  c->r[3]=0u+0x00010000u; // 800F54A4
  c->r[4]=0u+0x80330000u; // 800F54A8
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800F54AC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F54B0
  c->r[4]=c->r[4]+0xFFFF9CC8u; // 800F54B4
  c->lr=0x800F54BCu; f_800F5D30(c); // 800F54B8
L_800F54BC:;
  c->lr=0x800F54C0u; f_800F5CB0(c); // 800F54BC
L_800F54C0:;
  c->r[11]=c->r[1]+0x00000020u; // 800F54C0
  c->lr=0x800F54C8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F54C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F54C8
  c->lr=c->r[0]; // 800F54CC
  c->r[1]=c->r[1]+0x00000020u; // 800F54D0
  return; // 800F54D4
  unimpl(c,0x800F54D8u,"00000000"); // 800F54D8
  unimpl(c,0x800F54DCu,"00000000"); // 800F54DC
  f_800F54E0(c);
}

// gki_timers_init
void f_800F54E0(Ctx* __restrict c) {
  trace_call(0x800F54E0u);
  c->r[3]=0u+0x803A0000u; // 800F54E0
  c->r[0]=0u+0x00000000u; // 800F54E4
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F54E8
  c->r[3]=c->r[3]+0x00030000u; // 800F54EC
  W32(c->r[3]+0xFFFF8838u,c->r[0]); // 800F54F0
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 800F54F4
  W32(c->r[3]+0xFFFF8840u,c->r[0]); // 800F54F8
  W32(c->r[3]+0xFFFF8860u,c->r[0]); // 800F54FC
  W32(c->r[3]+0xFFFF8880u,c->r[0]); // 800F5500
  W32(c->r[3]+0xFFFF88A0u,c->r[0]); // 800F5504
  W32(c->r[3]+0xFFFF88C0u,c->r[0]); // 800F5508
  W32(c->r[3]+0xFFFF8844u,c->r[0]); // 800F550C
  W32(c->r[3]+0xFFFF8864u,c->r[0]); // 800F5510
  W32(c->r[3]+0xFFFF8884u,c->r[0]); // 800F5514
  W32(c->r[3]+0xFFFF88A4u,c->r[0]); // 800F5518
  W32(c->r[3]+0xFFFF88C4u,c->r[0]); // 800F551C
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 800F5520
  W32(c->r[3]+0xFFFF8868u,c->r[0]); // 800F5524
  W32(c->r[3]+0xFFFF8888u,c->r[0]); // 800F5528
  W32(c->r[3]+0xFFFF88A8u,c->r[0]); // 800F552C
  W32(c->r[3]+0xFFFF88C8u,c->r[0]); // 800F5530
  W32(c->r[3]+0xFFFF884Cu,c->r[0]); // 800F5534
  W32(c->r[3]+0xFFFF886Cu,c->r[0]); // 800F5538
  W32(c->r[3]+0xFFFF888Cu,c->r[0]); // 800F553C
  W32(c->r[3]+0xFFFF88ACu,c->r[0]); // 800F5540
  W32(c->r[3]+0xFFFF88CCu,c->r[0]); // 800F5544
  W32(c->r[3]+0xFFFF8850u,c->r[0]); // 800F5548
  W32(c->r[3]+0xFFFF8870u,c->r[0]); // 800F554C
  W32(c->r[3]+0xFFFF8890u,c->r[0]); // 800F5550
  W32(c->r[3]+0xFFFF88B0u,c->r[0]); // 800F5554
  W32(c->r[3]+0xFFFF88D0u,c->r[0]); // 800F5558
  W32(c->r[3]+0xFFFF8854u,c->r[0]); // 800F555C
  W32(c->r[3]+0xFFFF8874u,c->r[0]); // 800F5560
  W32(c->r[3]+0xFFFF8894u,c->r[0]); // 800F5564
  W32(c->r[3]+0xFFFF88B4u,c->r[0]); // 800F5568
  W32(c->r[3]+0xFFFF88D4u,c->r[0]); // 800F556C
  W32(c->r[3]+0xFFFF8858u,c->r[0]); // 800F5570
  W32(c->r[3]+0xFFFF8878u,c->r[0]); // 800F5574
  W32(c->r[3]+0xFFFF8898u,c->r[0]); // 800F5578
  W32(c->r[3]+0xFFFF88B8u,c->r[0]); // 800F557C
  W32(c->r[3]+0xFFFF88D8u,c->r[0]); // 800F5580
  W32(c->r[3]+0xFFFF885Cu,c->r[0]); // 800F5584
  W32(c->r[3]+0xFFFF887Cu,c->r[0]); // 800F5588
  W32(c->r[3]+0xFFFF889Cu,c->r[0]); // 800F558C
  W32(c->r[3]+0xFFFF88BCu,c->r[0]); // 800F5590
  W32(c->r[3]+0xFFFF88DCu,c->r[0]); // 800F5594
  return; // 800F5598
  unimpl(c,0x800F559Cu,"00000000"); // 800F559C
  f_800F55A0(c);
}

// GKI_get_tick_count
void f_800F55A0(Ctx* __restrict c) {
  trace_call(0x800F55A0u);
  c->r[3]=0u+0x803A0000u; // 800F55A0
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F55A4
  c->r[3]=c->r[3]+0x00030000u; // 800F55A8
  c->r[3]=R32(c->r[3]+0xFFFF8828u); // 800F55AC
  return; // 800F55B0
  unimpl(c,0x800F55B4u,"00000000"); // 800F55B4
  unimpl(c,0x800F55B8u,"00000000"); // 800F55B8
  unimpl(c,0x800F55BCu,"00000000"); // 800F55BC
  f_800F55C0(c);
}

// GKI_start_timer
void f_800F55C0(Ctx* __restrict c) {
  trace_call(0x800F55C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F55C0
  c->r[0]=c->lr; // 800F55C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F55C8
  c->r[11]=c->r[1]+0x00000020u; // 800F55CC
  c->lr=0x800F55D4u; f_800ADA2C(c); // 800F55D0
  c->r[27]=c->r[3]|c->r[3]; // 800F55D4
  c->r[29]=c->r[4]|c->r[4]; // 800F55D8
  c->r[31]=c->r[5]|c->r[5]; // 800F55DC
  c->lr=0x800F55E4u; f_800F5CA0(c); // 800F55E0
  cmps(c,0,(int32_t)c->r[29],0); // 800F55E4
  c->r[28]=c->r[3]|c->r[3]; // 800F55E8
  c->r[30]=0u+0x00000000u; // 800F55EC
  if (crb(c,1)) { goto L_800F55F8; } // 800F55F0
  c->r[29]=0u+0x00000001u; // 800F55F4
L_800F55F8:;
  c->r[0]=0u-c->r[31]; // 800F55F8
  c->r[0]=c->r[0]|c->r[31]; // 800F55FC
  c->r[0]=sraw(c,c->r[0],31); // 800F5600
  c->r[31]=c->r[29]&c->r[0]; // 800F5604
  c->lr=0x800F560Cu; f_800F5CE0(c); // 800F5608
  c->r[4]=0u+0x803A0000u; // 800F560C
  c->r[3]=0u+0x80000000u; // 800F5610
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F5614
  c->r[5]=c->r[4]+0x00030000u; // 800F5618
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 800F561C
  c->r[3]=R32(c->r[5]+0xFFFF8838u); // 800F5620
  c->r[0]=R32(c->r[5]+0xFFFF883Cu); // 800F5624
  c->r[3]=c->r[0]-c->r[3]; // 800F5628
  c->r[0]=c->r[4]-c->r[3]; // 800F562C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[29]); // 800F5630
  if (!crb(c,1)) { goto L_800F563C; } // 800F5634
  c->r[4]=c->r[29]+c->r[3]; // 800F5638
L_800F563C:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F563C
  if (crb(c,2)) { goto L_800F5650; } // 800F5640
  cmps(c,0,(int32_t)c->r[27],1); // 800F5644
  if (crb(c,2)) { goto L_800F5670; } // 800F5648
  goto L_800F5690; // 800F564C
L_800F5650:;
  c->r[3]=0u+0x803A0000u; // 800F5650
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 800F5654
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F5658
  c->r[0]=c->r[3]+0x00030000u; // 800F565C
  c->r[3]=c->r[0]+c->r[5]; // 800F5660
  W32(c->r[3]+0xFFFF8880u,c->r[31]); // 800F5664
  W32(c->r[3]+0xFFFF8860u,c->r[4]); // 800F5668
  goto L_800F5694; // 800F566C
L_800F5670:;
  c->r[3]=0u+0x803A0000u; // 800F5670
  c->r[5]=rotl(c->r[28],2)&0x000003FCu; // 800F5674
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F5678
  c->r[0]=c->r[3]+0x00030000u; // 800F567C
  c->r[3]=c->r[0]+c->r[5]; // 800F5680
  W32(c->r[3]+0xFFFF88C0u,c->r[31]); // 800F5684
  W32(c->r[3]+0xFFFF88A0u,c->r[4]); // 800F5688
  goto L_800F5694; // 800F568C
L_800F5690:;
  c->r[30]=0u+0x00000001u; // 800F5690
L_800F5694:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F5694
  if (!crb(c,2)) { goto L_800F56F0; } // 800F5698
  cmps(c,0,(int32_t)c->r[29],0); // 800F569C
  if (!crb(c,1)) { goto L_800F56F0; } // 800F56A0
  c->r[3]=0u+0x803A0000u; // 800F56A4
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F56A8
  c->r[3]=c->r[3]+0x00030000u; // 800F56AC
  c->r[4]=R32(c->r[3]+0xFFFF883Cu); // 800F56B0
  cmps(c,0,(int32_t)c->r[4],0); // 800F56B4
  if (crb(c,2)) { goto L_800F56D0; } // 800F56B8
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 800F56BC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 800F56C0
  if (!crb(c,0)) { goto L_800F56F0; } // 800F56C4
  cmps(c,0,(int32_t)c->r[0],0); // 800F56C8
  if (!crb(c,1)) { goto L_800F56F0; } // 800F56CC
L_800F56D0:;
  c->r[3]=0u+0x803A0000u; // 800F56D0
  c->r[3]=c->r[3]+0xFFFFD968u; // 800F56D4
  c->r[3]=c->r[3]+0x00030000u; // 800F56D8
  c->r[0]=R32(c->r[3]+0xFFFF8838u); // 800F56DC
  c->r[0]=c->r[4]-c->r[0]; // 800F56E0
  c->r[0]=c->r[29]+c->r[0]; // 800F56E4
  W32(c->r[3]+0xFFFF883Cu,c->r[0]); // 800F56E8
  W32(c->r[3]+0xFFFF8838u,c->r[29]); // 800F56EC
L_800F56F0:;
  c->lr=0x800F56F4u; f_800F5CB0(c); // 800F56F0
  c->r[11]=c->r[1]+0x00000020u; // 800F56F4
  c->lr=0x800F56FCu; f_800ADA78(c); // 800F56F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F56FC
  c->lr=c->r[0]; // 800F5700
  c->r[1]=c->r[1]+0x00000020u; // 800F5704
  return; // 800F5708
  unimpl(c,0x800F570Cu,"00000000"); // 800F570C
  f_800F5710(c);
}

// GKI_stop_timer
void f_800F5710(Ctx* __restrict c) {
  trace_call(0x800F5710u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5710
  c->r[0]=c->lr; // 800F5714
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5718
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F571C
  c->r[31]=c->r[3]|c->r[3]; // 800F5720
  c->lr=0x800F5728u; f_800F5CA0(c); // 800F5724
  cmps(c,0,(int32_t)c->r[31],0); // 800F5728
  if (crb(c,2)) { goto L_800F573C; } // 800F572C
  cmps(c,0,(int32_t)c->r[31],1); // 800F5730
  if (crb(c,2)) { goto L_800F5760; } // 800F5734
  goto L_800F5780; // 800F5738
L_800F573C:;
  c->r[4]=0u+0x803A0000u; // 800F573C
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 800F5740
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F5744
  c->r[5]=0u+0x00000000u; // 800F5748
  c->r[0]=c->r[4]+0x00030000u; // 800F574C
  c->r[3]=c->r[0]+c->r[3]; // 800F5750
  W32(c->r[3]+0xFFFF8880u,c->r[5]); // 800F5754
  W32(c->r[3]+0xFFFF8860u,c->r[5]); // 800F5758
  goto L_800F5780; // 800F575C
L_800F5760:;
  c->r[4]=0u+0x803A0000u; // 800F5760
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 800F5764
  c->r[4]=c->r[4]+0xFFFFD968u; // 800F5768
  c->r[5]=0u+0x00000000u; // 800F576C
  c->r[0]=c->r[4]+0x00030000u; // 800F5770
  c->r[3]=c->r[0]+c->r[3]; // 800F5774
  W32(c->r[3]+0xFFFF88C0u,c->r[5]); // 800F5778
  W32(c->r[3]+0xFFFF88A0u,c->r[5]); // 800F577C
L_800F5780:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5780
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5784
  c->lr=c->r[0]; // 800F5788
  c->r[1]=c->r[1]+0x00000010u; // 800F578C
  return; // 800F5790
  unimpl(c,0x800F5794u,"00000000"); // 800F5794
  unimpl(c,0x800F5798u,"00000000"); // 800F5798
  unimpl(c,0x800F579Cu,"00000000"); // 800F579C
  f_800F57A0(c);
}

// GKI_init_timer_list
void f_800F57A0(Ctx* __restrict c) {
  trace_call(0x800F57A0u);
  c->r[0]=0u+0x00000000u; // 800F57A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F57A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F57A8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F57AC
  return; // 800F57B0
  unimpl(c,0x800F57B4u,"00000000"); // 800F57B4
  unimpl(c,0x800F57B8u,"00000000"); // 800F57B8
  unimpl(c,0x800F57BCu,"00000000"); // 800F57BC
  f_800F57C0(c);
}

// GKI_update_timer_list
void f_800F57C0(Ctx* __restrict c) {
  trace_call(0x800F57C0u);
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F57C0
  c->r[7]=0u+0x00000000u; // 800F57C4
  goto L_800F57D8; // 800F57C8
  c->r[0]=c->r[0]|0x00000000u; // 800F57CC
L_800F57D0:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 800F57D0
  c->r[7]=c->r[7]+0x00000001u; // 800F57D4
L_800F57D8:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F57D8
  if (crb(c,2)) { goto L_800F57EC; } // 800F57DC
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800F57E0
  cmps(c,0,(int32_t)c->r[0],0); // 800F57E4
  if (!crb(c,1)) { IRQCHK(c); goto L_800F57D0; } // 800F57E8
L_800F57EC:;
  c->r[8]=c->r[4]|c->r[4]; // 800F57EC
  c->r[0]=0u+0x00000000u; // 800F57F0
  goto L_800F5818; // 800F57F4
L_800F57F8:;
  c->r[9]=R32(c->r[6]+0x0000000Cu); // 800F57F8
  c->r[5]=c->r[9]-c->r[8]; cr0(c,c->r[5]); // 800F57FC
  W32(c->r[6]+0x0000000Cu,c->r[5]); // 800F5800
  if (crb(c,1)) { goto L_800F5810; } // 800F5804
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800F5808
  c->r[7]=c->r[7]+0x00000001u; // 800F580C
L_800F5810:;
  c->r[8]=c->r[8]-c->r[9]; // 800F5810
  c->r[6]=R32(c->r[6]+0x00000000u); // 800F5814
L_800F5818:;
  cmps(c,0,(int32_t)c->r[6],0); // 800F5818
  if (crb(c,2)) { goto L_800F5828; } // 800F581C
  cmps(c,0,(int32_t)c->r[8],0); // 800F5820
  if (crb(c,1)) { IRQCHK(c); goto L_800F57F8; } // 800F5824
L_800F5828:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F5828
  cmps(c,0,(int32_t)c->r[0],0); // 800F582C
  if (!crb(c,1)) { goto L_800F5848; } // 800F5830
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 800F5834
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F5838
  if (!crb(c,0)) { goto L_800F5848; } // 800F583C
  c->r[0]=0u+0x00000000u; // 800F5840
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F5844
L_800F5848:;
  c->r[3]=c->r[7]|c->r[7]; // 800F5848
  return; // 800F584C
}

// GKI_add_to_timer_list
void f_800F5850(Ctx* __restrict c) {
  trace_call(0x800F5850u);
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800F5850
  cmps(c,0,(int32_t)c->r[5],0); // 800F5854
  if (crb(c,0)) return; // 800F5858
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F585C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 800F5860
  if (crb(c,0)) { goto L_800F58B8; } // 800F5864
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5868
  cmps(c,0,(int32_t)c->r[0],0); // 800F586C
  if (!crb(c,2)) { goto L_800F587C; } // 800F5870
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F5874
  goto L_800F5894; // 800F5878
L_800F587C:;
  c->r[5]=R32(c->r[3]+0x00000004u); // 800F587C
  cmps(c,0,(int32_t)c->r[5],0); // 800F5880
  if (crb(c,2)) { goto L_800F588C; } // 800F5884
  W32(c->r[5]+0x00000000u,c->r[4]); // 800F5888
L_800F588C:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F588C
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5890
L_800F5894:;
  c->r[0]=0u+0x00000000u; // 800F5894
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F5898
  W32(c->r[3]+0x00000004u,c->r[4]); // 800F589C
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F58A0
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800F58A4
  c->r[0]=c->r[5]-c->r[0]; // 800F58A8
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F58AC
  W32(c->r[3]+0x00000008u,c->r[5]); // 800F58B0
  goto L_800F5930; // 800F58B4
L_800F58B8:;
  c->r[6]=R32(c->r[3]+0x00000000u); // 800F58B8
  goto L_800F58D8; // 800F58BC
L_800F58C0:;
  cmps(c,0,(int32_t)c->r[5],0); // 800F58C0
  if (!crb(c,1)) { goto L_800F58D4; } // 800F58C4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800F58C8
  c->r[0]=c->r[0]-c->r[5]; // 800F58CC
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F58D0
L_800F58D4:;
  c->r[6]=R32(c->r[6]+0x00000000u); // 800F58D4
L_800F58D8:;
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800F58D8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800F58DC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 800F58E0
  if (crb(c,1)) { IRQCHK(c); goto L_800F58C0; } // 800F58E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F58E8
  cmpu(c,0,c->r[6],c->r[0]); // 800F58EC
  if (!crb(c,2)) { goto L_800F5908; } // 800F58F0
  W32(c->r[4]+0x00000000u,c->r[0]); // 800F58F4
  c->r[5]=R32(c->r[3]+0x00000000u); // 800F58F8
  W32(c->r[5]+0x00000004u,c->r[4]); // 800F58FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F5900
  goto L_800F5920; // 800F5904
L_800F5908:;
  c->r[3]=R32(c->r[6]+0x00000004u); // 800F5908
  W32(c->r[3]+0x00000000u,c->r[4]); // 800F590C
  c->r[0]=R32(c->r[6]+0x00000004u); // 800F5910
  W32(c->r[4]+0x00000004u,c->r[0]); // 800F5914
  W32(c->r[6]+0x00000004u,c->r[4]); // 800F5918
  W32(c->r[4]+0x00000000u,c->r[6]); // 800F591C
L_800F5920:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 800F5920
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800F5924
  c->r[0]=c->r[0]-c->r[3]; // 800F5928
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800F592C
L_800F5930:;
  c->r[0]=0u+0x00000001u; // 800F5930
  W8(c->r[4]+0x00000016u,c->r[0]); // 800F5934
  return; // 800F5938
  unimpl(c,0x800F593Cu,"00000000"); // 800F593C
  f_800F5940(c);
}

// GKI_remove_from_timer_list
void f_800F5940(Ctx* __restrict c) {
  trace_call(0x800F5940u);
  cmps(c,0,(int32_t)c->r[4],0); // 800F5940
  if (crb(c,2)) return; // 800F5944
  c->r[0]=R8(c->r[4]+0x00000016u); // 800F5948
  cmps(c,0,(int32_t)c->r[0],0); // 800F594C
  if (crb(c,2)) return; // 800F5950
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5954
  cmps(c,0,(int32_t)c->r[0],0); // 800F5958
  if (!crb(c,2)) { goto L_800F5964; } // 800F595C
  return; // 800F5960
L_800F5964:;
  c->r[6]=R32(c->r[4]+0x00000000u); // 800F5964
  cmps(c,0,(int32_t)c->r[6],0); // 800F5968
  if (crb(c,2)) { goto L_800F5984; } // 800F596C
  c->r[5]=R32(c->r[6]+0x0000000Cu); // 800F5970
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800F5974
  c->r[0]=c->r[5]+c->r[0]; // 800F5978
  W32(c->r[6]+0x0000000Cu,c->r[0]); // 800F597C
  goto L_800F5994; // 800F5980
L_800F5984:;
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800F5984
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F5988
  c->r[0]=c->r[0]-c->r[5]; // 800F598C
  W32(c->r[3]+0x00000008u,c->r[0]); // 800F5990
L_800F5994:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5994
  cmpu(c,0,c->r[0],c->r[4]); // 800F5998
  if (!crb(c,2)) { goto L_800F59D0; } // 800F599C
  c->r[5]=R32(c->r[4]+0x00000000u); // 800F59A0
  W32(c->r[3]+0x00000000u,c->r[5]); // 800F59A4
  cmps(c,0,(int32_t)c->r[5],0); // 800F59A8
  if (crb(c,2)) { goto L_800F59B8; } // 800F59AC
  c->r[0]=0u+0x00000000u; // 800F59B0
  W32(c->r[5]+0x00000004u,c->r[0]); // 800F59B4
L_800F59B8:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F59B8
  cmpu(c,0,c->r[0],c->r[4]); // 800F59BC
  if (!crb(c,2)) { goto L_800F5A48; } // 800F59C0
  c->r[0]=0u+0x00000000u; // 800F59C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F59C8
  goto L_800F5A48; // 800F59CC
L_800F59D0:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F59D0
  cmpu(c,0,c->r[0],c->r[4]); // 800F59D4
  if (!crb(c,2)) { goto L_800F59F8; } // 800F59D8
  c->r[5]=R32(c->r[4]+0x00000004u); // 800F59DC
  W32(c->r[3]+0x00000004u,c->r[5]); // 800F59E0
  cmps(c,0,(int32_t)c->r[5],0); // 800F59E4
  if (crb(c,2)) { goto L_800F5A48; } // 800F59E8
  c->r[0]=0u+0x00000000u; // 800F59EC
  W32(c->r[5]+0x00000000u,c->r[0]); // 800F59F0
  goto L_800F5A48; // 800F59F4
L_800F59F8:;
  c->r[3]=R32(c->r[4]+0x00000000u); // 800F59F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F59FC
  if (crb(c,2)) return; // 800F5A00
  c->r[0]=R32(c->r[3]+0x00000004u); // 800F5A04
  cmpu(c,0,c->r[0],c->r[4]); // 800F5A08
  if (!crb(c,2)) return; // 800F5A0C
  c->r[0]=R32(c->r[4]+0x00000004u); // 800F5A10
  W32(c->r[3]+0x00000004u,c->r[0]); // 800F5A14
  goto L_800F5A20; // 800F5A18
  return; // 800F5A1C
L_800F5A20:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 800F5A20
  cmps(c,0,(int32_t)c->r[3],0); // 800F5A24
  if (crb(c,2)) return; // 800F5A28
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F5A2C
  cmpu(c,0,c->r[0],c->r[4]); // 800F5A30
  if (!crb(c,2)) return; // 800F5A34
  c->r[0]=R32(c->r[4]+0x00000000u); // 800F5A38
  W32(c->r[3]+0x00000000u,c->r[0]); // 800F5A3C
  goto L_800F5A48; // 800F5A40
  return; // 800F5A44
L_800F5A48:;
  c->r[3]=0u+0x00000000u; // 800F5A48
  c->r[0]=0u+0x80000000u; // 800F5A4C
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F5A50
  W32(c->r[4]+0x00000000u,c->r[3]); // 800F5A54
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 800F5A58
  W8(c->r[4]+0x00000016u,c->r[3]); // 800F5A5C
  return; // 800F5A60
  unimpl(c,0x800F5A64u,"00000000"); // 800F5A64
  unimpl(c,0x800F5A68u,"00000000"); // 800F5A68
  unimpl(c,0x800F5A6Cu,"00000000"); // 800F5A6C
  f_800F5A70(c);
}

// fn_800F5A70
void f_800F5A70(Ctx* __restrict c) {
  trace_call(0x800F5A70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5A70
  c->r[0]=c->lr; // 800F5A74
  c->r[5]=0u+0x00030000u; // 800F5A78
  c->r[4]=0u+0x00000000u; // 800F5A7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5A80
  c->r[5]=c->r[5]+0xFFFF8AE0u; // 800F5A84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5A88
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5A8C
  c->r[30]=0u+0x803A0000u; // 800F5A90
  c->r[3]=c->r[30]+0xFFFFD968u; // 800F5A94
  c->lr=0x800F5A9Cu; f_80004714(c); // 800F5A98
  c->lr=0x800F5AA0u; f_800F4260(c); // 800F5A9C
  c->lr=0x800F5AA4u; f_800F54E0(c); // 800F5AA0
  c->r[31]=c->r[30]+0xFFFFD968u; // 800F5AA4
  c->r[4]=0u+0x00000001u; // 800F5AA8
  c->r[3]=c->r[31]+0x00030000u; // 800F5AAC
  c->r[0]=0u+0x00000000u; // 800F5AB0
  W8(c->r[3]+0xFFFF8802u,c->r[4]); // 800F5AB4
  W32(c->r[3]+0xFFFF87E8u,c->r[0]); // 800F5AB8
  W32(c->r[3]+0xFFFF8848u,c->r[0]); // 800F5ABC
  W16(c->r[3]+0xFFFF880Cu,c->r[0]); // 800F5AC0
  W8(c->r[30]+0xFFFFD968u,c->r[0]); // 800F5AC4
  c->lr=0x800F5ACCu; f_80080010(c); // 800F5AC8
  c->r[0]=R8(c->r[30]+0xFFFFD968u); // 800F5ACC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F5AD0
  c->r[4]=c->r[31]+c->r[0]; // 800F5AD4
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F5AD8
  c->r[3]=R8(c->r[30]+0xFFFFD968u); // 800F5ADC
  c->r[0]=c->r[3]+0x00000001u; // 800F5AE0
  W8(c->r[30]+0xFFFFD968u,c->r[0]); // 800F5AE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5AE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5AEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5AF0
  c->lr=c->r[0]; // 800F5AF4
  c->r[1]=c->r[1]+0x00000010u; // 800F5AF8
  return; // 800F5AFC
}

// GKI_shutdown
void f_800F5B00(Ctx* __restrict c) {
  trace_call(0x800F5B00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5B00
  c->r[0]=c->lr; // 800F5B04
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5B08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5B0C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5B10
  c->lr=0x800F5B18u; f_8007FFF0(c); // 800F5B14
  c->r[30]=0u+0x803A0000u; // 800F5B18
  c->r[0]=0u+0x00000000u; // 800F5B1C
  c->r[5]=R8(c->r[30]+0xFFFFD968u); // 800F5B20
  c->r[31]=c->r[30]+0xFFFFD968u; // 800F5B24
  c->r[4]=c->r[31]+0x00030000u; // 800F5B28
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800F5B2C
  c->r[5]=c->r[31]+c->r[5]; // 800F5B30
  W32(c->r[5]+0x00000004u,c->r[3]); // 800F5B34
  c->r[3]=R8(c->r[30]+0xFFFFD968u); // 800F5B38
  c->r[3]=c->r[3]+0x00000001u; // 800F5B3C
  W8(c->r[30]+0xFFFFD968u,c->r[3]); // 800F5B40
  W8(c->r[4]+0xFFFF8802u,c->r[0]); // 800F5B44
  c->r[3]=R8(c->r[30]+0xFFFFD968u); // 800F5B48
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5B4C
  W8(c->r[30]+0xFFFFD968u,c->r[0]); // 800F5B50
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800F5B54
  c->r[3]=c->r[31]+c->r[0]; // 800F5B58
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F5B5C
  c->lr=0x800F5B64u; f_80080030(c); // 800F5B60
  goto L_800F5B84; // 800F5B64
L_800F5B68:;
  c->r[3]=R8(c->r[30]+0xFFFFD968u); // 800F5B68
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5B6C
  W8(c->r[30]+0xFFFFD968u,c->r[0]); // 800F5B70
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800F5B74
  c->r[3]=c->r[31]+c->r[0]; // 800F5B78
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F5B7C
  c->lr=0x800F5B84u; f_80080030(c); // 800F5B80
L_800F5B84:;
  c->r[0]=R8(c->r[30]+0xFFFFD968u); // 800F5B84
  cmps(c,0,(int32_t)c->r[0],0); // 800F5B88
  if (!crb(c,2)) { IRQCHK(c); goto L_800F5B68; } // 800F5B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5B90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5B94
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5B98
  c->lr=c->r[0]; // 800F5B9C
  c->r[1]=c->r[1]+0x00000010u; // 800F5BA0
  return; // 800F5BA4
  unimpl(c,0x800F5BA8u,"00000000"); // 800F5BA8
  unimpl(c,0x800F5BACu,"00000000"); // 800F5BAC
  f_800F5BB0(c);
}

// GKI_run
void f_800F5BB0(Ctx* __restrict c) {
  trace_call(0x800F5BB0u);
  return; // 800F5BB0
  unimpl(c,0x800F5BB4u,"00000000"); // 800F5BB4
  unimpl(c,0x800F5BB8u,"00000000"); // 800F5BB8
  unimpl(c,0x800F5BBCu,"00000000"); // 800F5BBC
  f_800F5BC0(c);
}

// GKI_sched_lock
void f_800F5BC0(Ctx* __restrict c) {
  trace_call(0x800F5BC0u);
  return; // 800F5BC0
  unimpl(c,0x800F5BC4u,"00000000"); // 800F5BC4
  unimpl(c,0x800F5BC8u,"00000000"); // 800F5BC8
  unimpl(c,0x800F5BCCu,"00000000"); // 800F5BCC
  f_800F5BD0(c);
}

// GKI_sched_unlock
void f_800F5BD0(Ctx* __restrict c) {
  trace_call(0x800F5BD0u);
  return; // 800F5BD0
  unimpl(c,0x800F5BD4u,"00000000"); // 800F5BD4
  unimpl(c,0x800F5BD8u,"00000000"); // 800F5BD8
  unimpl(c,0x800F5BDCu,"00000000"); // 800F5BDC
  f_800F5BE0(c);
}

// GKI_delay
void f_800F5BE0(Ctx* __restrict c) {
  trace_call(0x800F5BE0u);
  return; // 800F5BE0
  unimpl(c,0x800F5BE4u,"00000000"); // 800F5BE4
  unimpl(c,0x800F5BE8u,"00000000"); // 800F5BE8
  unimpl(c,0x800F5BECu,"00000000"); // 800F5BEC
  f_800F5BF0(c);
}

// GKI_send_event
void f_800F5BF0(Ctx* __restrict c) {
  trace_call(0x800F5BF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5BF0
  c->r[0]=c->lr; // 800F5BF4
  cmpu(c,0,c->r[3],0x00000008u); // 800F5BF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5BFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F5C00
  c->r[31]=c->r[4]|c->r[4]; // 800F5C04
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F5C08
  c->r[30]=c->r[3]|c->r[3]; // 800F5C0C
  if (crb(c,0)) { goto L_800F5C1C; } // 800F5C10
  c->r[3]=0u+0x00000001u; // 800F5C14
  goto L_800F5C7C; // 800F5C18
L_800F5C1C:;
  c->lr=0x800F5C20u; f_8007FFF0(c); // 800F5C1C
  c->r[7]=0u+0x803A0000u; // 800F5C20
  c->r[0]=rotl(c->r[30],1)&0x000001FEu; // 800F5C24
  c->r[5]=R8(c->r[7]+0xFFFFD968u); // 800F5C28
  c->r[6]=c->r[7]+0xFFFFD968u; // 800F5C2C
  c->r[4]=c->r[6]+0x00030000u; // 800F5C30
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 800F5C34
  c->r[5]=c->r[6]+c->r[5]; // 800F5C38
  c->r[4]=c->r[4]+c->r[0]; // 800F5C3C
  W32(c->r[5]+0x00000004u,c->r[3]); // 800F5C40
  c->r[3]=R8(c->r[7]+0xFFFFD968u); // 800F5C44
  c->r[0]=c->r[3]+0x00000001u; // 800F5C48
  W8(c->r[7]+0xFFFFD968u,c->r[0]); // 800F5C4C
  c->r[0]=R16(c->r[4]+0xFFFF8808u); // 800F5C50
  c->r[0]=c->r[0]|c->r[31]; // 800F5C54
  W16(c->r[4]+0xFFFF8808u,c->r[0]); // 800F5C58
  c->r[3]=R8(c->r[7]+0xFFFFD968u); // 800F5C5C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5C60
  W8(c->r[7]+0xFFFFD968u,c->r[0]); // 800F5C64
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800F5C68
  c->r[3]=c->r[6]+c->r[0]; // 800F5C6C
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F5C70
  c->lr=0x800F5C78u; f_80080030(c); // 800F5C74
  c->r[3]=0u+0x00000000u; // 800F5C78
L_800F5C7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5C7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F5C80
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F5C84
  c->lr=c->r[0]; // 800F5C88
  c->r[1]=c->r[1]+0x00000010u; // 800F5C8C
  return; // 800F5C90
  unimpl(c,0x800F5C94u,"00000000"); // 800F5C94
  unimpl(c,0x800F5C98u,"00000000"); // 800F5C98
  unimpl(c,0x800F5C9Cu,"00000000"); // 800F5C9C
  f_800F5CA0(c);
}

// GKI_get_taskid
void f_800F5CA0(Ctx* __restrict c) {
  trace_call(0x800F5CA0u);
  c->r[3]=0u+0x00000002u; // 800F5CA0
  return; // 800F5CA4
  unimpl(c,0x800F5CA8u,"00000000"); // 800F5CA8
  unimpl(c,0x800F5CACu,"00000000"); // 800F5CAC
  f_800F5CB0(c);
}

// GKI_enable
void f_800F5CB0(Ctx* __restrict c) {
  trace_call(0x800F5CB0u);
  c->r[5]=0u+0x803A0000u; // 800F5CB0
  c->r[4]=R8(c->r[5]+0xFFFFD968u); // 800F5CB4
  c->r[3]=c->r[5]+0xFFFFD968u; // 800F5CB8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F5CBC
  W8(c->r[5]+0xFFFFD968u,c->r[0]); // 800F5CC0
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800F5CC4
  c->r[3]=c->r[3]+c->r[0]; // 800F5CC8
  c->r[3]=R32(c->r[3]+0x00000004u); // 800F5CCC
  f_80080030(c); return; // 800F5CD0
  unimpl(c,0x800F5CD4u,"00000000"); // 800F5CD4
  unimpl(c,0x800F5CD8u,"00000000"); // 800F5CD8
  unimpl(c,0x800F5CDCu,"00000000"); // 800F5CDC
  f_800F5CE0(c);
}

// GKI_disable
void f_800F5CE0(Ctx* __restrict c) {
  trace_call(0x800F5CE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5CE0
  c->r[0]=c->lr; // 800F5CE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5CE8
  c->lr=0x800F5CF0u; f_8007FFF0(c); // 800F5CEC
  c->r[5]=0u+0x803A0000u; // 800F5CF0
  c->r[0]=R8(c->r[5]+0xFFFFD968u); // 800F5CF4
  c->r[4]=c->r[5]+0xFFFFD968u; // 800F5CF8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800F5CFC
  c->r[4]=c->r[4]+c->r[0]; // 800F5D00
  W32(c->r[4]+0x00000004u,c->r[3]); // 800F5D04
  c->r[3]=R8(c->r[5]+0xFFFFD968u); // 800F5D08
  c->r[0]=c->r[3]+0x00000001u; // 800F5D0C
  W8(c->r[5]+0xFFFFD968u,c->r[0]); // 800F5D10
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5D14
  c->lr=c->r[0]; // 800F5D18
  c->r[1]=c->r[1]+0x00000010u; // 800F5D1C
  return; // 800F5D20
  unimpl(c,0x800F5D24u,"00000000"); // 800F5D24
  unimpl(c,0x800F5D28u,"00000000"); // 800F5D28
  unimpl(c,0x800F5D2Cu,"00000000"); // 800F5D2C
  f_800F5D30(c);
}

// GKI_exception
void f_800F5D30(Ctx* __restrict c) {
  trace_call(0x800F5D30u);
  return; // 800F5D30
  unimpl(c,0x800F5D34u,"00000000"); // 800F5D34
  unimpl(c,0x800F5D38u,"00000000"); // 800F5D38
  unimpl(c,0x800F5D3Cu,"00000000"); // 800F5D3C
  f_800F5D40(c);
}

// GKI_os_malloc
void f_800F5D40(Ctx* __restrict c) {
  trace_call(0x800F5D40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5D40
  c->r[0]=c->lr; // 800F5D44
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F5D48
  c->lr=0x800F5D50u; f_800EE500(c); // 800F5D4C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5D50
  if (!crb(c,2)) { goto L_800F5D5C; } // 800F5D54
  c->r[3]=0u+0x00000000u; // 800F5D58
L_800F5D5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F5D5C
  c->lr=c->r[0]; // 800F5D60
  c->r[1]=c->r[1]+0x00000010u; // 800F5D64
  return; // 800F5D68
  unimpl(c,0x800F5D6Cu,"00000000"); // 800F5D6C
  f_800F5D70(c);
}

// GKI_os_free
void f_800F5D70(Ctx* __restrict c) {
  trace_call(0x800F5D70u);
  f_800EE520(c); return; // 800F5D70
  unimpl(c,0x800F5D74u,"00000000"); // 800F5D74
  unimpl(c,0x800F5D78u,"00000000"); // 800F5D78
  unimpl(c,0x800F5D7Cu,"00000000"); // 800F5D7C
  f_800F5D80(c);
}

// hcisu_h2_usb_cback
void f_800F5D80(Ctx* __restrict c) {
  trace_call(0x800F5D80u);
  cmps(c,0,(int32_t)c->r[3],4); // 800F5D80
  if (!crb(c,2)) return; // 800F5D84
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 800F5D88
  f_800F74A0(c); return; // 800F5D8C
  return; // 800F5D90
  unimpl(c,0x800F5D94u,"00000000"); // 800F5D94
  unimpl(c,0x800F5D98u,"00000000"); // 800F5D98
  unimpl(c,0x800F5D9Cu,"00000000"); // 800F5D9C
  f_800F5DA0(c);
}

// hcisu_h2_receive_msg
void f_800F5DA0(Ctx* __restrict c) {
  trace_call(0x800F5DA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F5DA0
  c->r[0]=c->lr; // 800F5DA4
  W32(c->r[1]+0x00000064u,c->r[0]); // 800F5DA8
  c->r[11]=c->r[1]+0x00000060u; // 800F5DAC
  c->lr=0x800F5DB4u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F5DB0
  c->r[0]=R8(c->r[4]+0x0000001Eu); // 800F5DB4
  c->r[15]=c->r[4]|c->r[4]; // 800F5DB8
  c->r[19]=0u+0x00000000u; // 800F5DBC
  cmpu(c,0,c->r[0],0x00000002u); // 800F5DC0
  if (crb(c,2)) { goto L_800F5DD0; } // 800F5DC4
  c->r[3]=0u+0x00000000u; // 800F5DC8
  goto L_800F6120; // 800F5DCC
L_800F5DD0:;
  c->r[20]=c->r[3]+0x00000001u; // 800F5DD0
  c->r[0]=rotl(c->r[3],1)&0x0001FFFEu; // 800F5DD4
  c->r[31]=0u+0x803C0000u; // 800F5DD8
  c->r[22]=c->r[4]+c->r[3]; // 800F5DDC
  c->r[16]=rotl(c->r[20],0)&0x0000FFFFu; // 800F5DE0
  c->r[23]=rotl(c->r[3],2)&0x0003FFFCu; // 800F5DE4
  c->r[21]=c->r[4]+c->r[0]; // 800F5DE8
  c->r[31]=c->r[31]+0x00006448u; // 800F5DEC
  c->r[29]=0u+0x00000000u; // 800F5DF0
  c->r[30]=0u+0x00000004u; // 800F5DF4
  c->r[28]=c->r[2]+0xFFFFB158u; // 800F5DF8
  c->r[25]=0u+0x00000003u; // 800F5DFC
  c->r[24]=0u+0x00000002u; // 800F5E00
  c->r[14]=0u+0x80330000u; // 800F5E04
  c->r[26]=c->r[2]+0xFFFFB160u; // 800F5E08
  c->r[27]=0u+0x00000001u; // 800F5E0C
L_800F5E10:;
  c->r[3]=rotl(c->r[16],0)&0x000000FFu; // 800F5E10
  c->r[4]=c->r[1]+0x00000008u; // 800F5E14
  c->r[5]=0u+0x00000001u; // 800F5E18
  c->lr=0x800F5E20u; f_800F6DA0(c); // 800F5E1C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F5E20
  if (crb(c,2)) { goto L_800F611C; } // 800F5E24
  c->r[0]=R8(c->r[22]+0x0000001Au); // 800F5E28
  c->r[17]=0u+0x00000000u; // 800F5E2C
  c->r[19]=c->r[19]+0x00000001u; // 800F5E30
  cmps(c,0,(int32_t)c->r[0],0); // 800F5E34
  if (crb(c,2)) { goto L_800F5E60; } // 800F5E38
  cmps(c,0,(int32_t)c->r[0],1); // 800F5E3C
  if (crb(c,2)) { goto L_800F5F08; } // 800F5E40
  cmps(c,0,(int32_t)c->r[0],2); // 800F5E44
  if (crb(c,2)) { goto L_800F6000; } // 800F5E48
  cmps(c,0,(int32_t)c->r[0],3); // 800F5E4C
  if (crb(c,2)) { goto L_800F604C; } // 800F5E50
  cmps(c,0,(int32_t)c->r[0],4); // 800F5E54
  if (crb(c,2)) { goto L_800F60E4; } // 800F5E58
  goto L_800F60FC; // 800F5E5C
L_800F5E60:;
  cmpu(c,0,c->r[16],0x00000001u); // 800F5E60
  if (!crb(c,2)) { goto L_800F5E7C; } // 800F5E64
  c->r[3]=0u+0x00000002u; // 800F5E68
  c->lr=0x800F5E70u; f_800F46D0(c); // 800F5E6C
  W32(c->r[15]+c->r[23],c->r[3]); // 800F5E70
  W8(c->r[22]+0x00000014u,c->r[30]); // 800F5E74
  goto L_800F5EB0; // 800F5E78
L_800F5E7C:;
  cmpu(c,0,c->r[16],0x00000002u); // 800F5E7C
  if (!crb(c,2)) { goto L_800F5E98; } // 800F5E80
  c->r[3]=0u+0x00000003u; // 800F5E84
  c->lr=0x800F5E8Cu; f_800F46D0(c); // 800F5E88
  W32(c->r[15]+c->r[23],c->r[3]); // 800F5E8C
  W8(c->r[22]+0x00000014u,c->r[24]); // 800F5E90
  goto L_800F5EB0; // 800F5E94
L_800F5E98:;
  cmpu(c,0,c->r[16],0x00000003u); // 800F5E98
  if (!crb(c,2)) { goto L_800F60FC; } // 800F5E9C
  c->r[3]=0u+0x00000001u; // 800F5EA0
  c->lr=0x800F5EA8u; f_800F46D0(c); // 800F5EA4
  W32(c->r[15]+c->r[23],c->r[3]); // 800F5EA8
  W8(c->r[22]+0x00000014u,c->r[25]); // 800F5EAC
L_800F5EB0:;
  c->r[3]=R32(c->r[15]+c->r[23]); // 800F5EB0
  cmps(c,0,(int32_t)c->r[3],0); // 800F5EB4
  if (crb(c,2)) { goto L_800F5EE8; } // 800F5EB8
  W16(c->r[3]+0x00000002u,c->r[29]); // 800F5EBC
  c->r[0]=R8(c->r[22]+0x00000014u); // 800F5EC0
  c->r[3]=R32(c->r[15]+c->r[23]); // 800F5EC4
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F5EC8
  c->r[4]=c->r[26]+c->r[0]; // 800F5ECC
  c->r[0]=R16(c->r[4]+0xFFFFFFFEu); // 800F5ED0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F5ED4
  c->r[3]=R32(c->r[15]+c->r[23]); // 800F5ED8
  W16(c->r[3]+0x00000004u,c->r[29]); // 800F5EDC
  W8(c->r[22]+0x0000001Au,c->r[27]); // 800F5EE0
  goto L_800F5EF8; // 800F5EE4
L_800F5EE8:;
  c->r[4]=c->r[14]+0xFFFF9CE0u; // 800F5EE8
  c->r[3]=0u+0x00070000u; // 800F5EEC
  c->lr=0x800F5EF4u; f_800F7280(c); // 800F5EF0
  W8(c->r[22]+0x0000001Au,c->r[24]); // 800F5EF4
L_800F5EF8:;
  c->r[0]=R8(c->r[22]+0x00000014u); // 800F5EF8
  c->r[3]=c->r[28]+c->r[0]; // 800F5EFC
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800F5F00
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800F5F04
L_800F5F08:;
  c->r[6]=R32(c->r[15]+c->r[23]); // 800F5F08
  c->r[5]=R8(c->r[1]+0x00000008u); // 800F5F0C
  c->r[4]=R16(c->r[6]+0x00000002u); // 800F5F10
  c->r[3]=c->r[6]+c->r[4]; // 800F5F14
  c->r[0]=c->r[4]+0x00000001u; // 800F5F18
  W8(c->r[3]+0x00000008u,c->r[5]); // 800F5F1C
  W16(c->r[6]+0x00000002u,c->r[0]); // 800F5F20
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 800F5F24
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F5F28
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800F5F2C
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F5F30
  if (!crb(c,2)) { goto L_800F5FF4; } // 800F5F34
  c->r[0]=R8(c->r[22]+0x00000014u); // 800F5F38
  c->r[18]=R8(c->r[1]+0x00000008u); // 800F5F3C
  cmpu(c,0,c->r[0],0x00000002u); // 800F5F40
  if (!crb(c,2)) { goto L_800F5F88; } // 800F5F44
  c->r[0]=R8(c->r[22]+0x00000017u); // 800F5F48
  c->r[4]=rotl(c->r[18],8)&0x00FFFF00u; // 800F5F4C
  c->r[3]=R32(c->r[15]+c->r[23]); // 800F5F50
  c->r[0]=c->r[4]+c->r[0]; // 800F5F54
  c->r[18]=rotl(c->r[0],0)&0x0000FFFFu; // 800F5F58
  c->lr=0x800F5F60u; f_801129D0(c); // 800F5F5C
  cmps(c,0,(int32_t)c->r[3],0); // 800F5F60
  W32(c->r[15]+c->r[23],c->r[3]); // 800F5F64
  if (!crb(c,2)) { goto L_800F5F88; } // 800F5F68
  cmps(c,0,(int32_t)c->r[18],0); // 800F5F6C
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 800F5F70
  if (!crb(c,2)) { goto L_800F5F80; } // 800F5F74
  W8(c->r[22]+0x0000001Au,c->r[29]); // 800F5F78
  goto L_800F60FC; // 800F5F7C
L_800F5F80:;
  W8(c->r[22]+0x0000001Au,c->r[30]); // 800F5F80
  goto L_800F60FC; // 800F5F84
L_800F5F88:;
  W16(c->r[21]+0x0000000Cu,c->r[18]); // 800F5F88
  c->r[3]=R32(c->r[15]+c->r[23]); // 800F5F8C
  c->lr=0x800F5F94u; f_800F4930(c); // 800F5F90
  c->r[0]=R8(c->r[22]+0x00000014u); // 800F5F94
  c->r[4]=rotl(c->r[3],0)&0x0000FFFFu; // 800F5F98
  c->r[3]=c->r[28]+c->r[0]; // 800F5F9C
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 800F5FA0
  c->r[3]=c->r[18]+c->r[0]; // 800F5FA4
  c->r[0]=c->r[3]+0x00000008u; // 800F5FA8
  cmpu(c,0,c->r[0],c->r[4]); // 800F5FAC
  if (!crb(c,1)) { goto L_800F5FD8; } // 800F5FB0
  c->r[3]=R32(c->r[15]+c->r[23]); // 800F5FB4
  c->lr=0x800F5FBCu; f_800F47C0(c); // 800F5FB8
  W32(c->r[15]+c->r[23],c->r[29]); // 800F5FBC
  c->r[3]=0u+0x80330000u; // 800F5FC0
  c->r[4]=c->r[3]+0xFFFF9D1Cu; // 800F5FC4
  W8(c->r[22]+0x0000001Au,c->r[30]); // 800F5FC8
  c->r[3]=0u+0x00070000u; // 800F5FCC
  c->lr=0x800F5FD4u; f_800F7280(c); // 800F5FD0
  goto L_800F60FC; // 800F5FD4
L_800F5FD8:;
  cmps(c,0,(int32_t)c->r[18],0); // 800F5FD8
  if (crb(c,2)) { goto L_800F5FE8; } // 800F5FDC
  W8(c->r[22]+0x0000001Au,c->r[25]); // 800F5FE0
  goto L_800F60FC; // 800F5FE4
L_800F5FE8:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 800F5FE8
  c->r[17]=0u+0x00000001u; // 800F5FEC
  goto L_800F60FC; // 800F5FF0
L_800F5FF4:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F5FF4
  W8(c->r[22]+0x00000017u,c->r[0]); // 800F5FF8
  goto L_800F60FC; // 800F5FFC
L_800F6000:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 800F6000
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F6004
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800F6008
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F600C
  if (!crb(c,2)) { goto L_800F6040; } // 800F6010
  c->r[0]=R8(c->r[22]+0x00000014u); // 800F6014
  c->r[3]=R8(c->r[1]+0x00000008u); // 800F6018
  cmpu(c,0,c->r[0],0x00000002u); // 800F601C
  if (!crb(c,2)) { goto L_800F6034; } // 800F6020
  c->r[0]=R8(c->r[22]+0x00000017u); // 800F6024
  c->r[3]=rotl(c->r[3],8)&0x00FFFF00u; // 800F6028
  c->r[0]=c->r[3]+c->r[0]; // 800F602C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6030
L_800F6034:;
  W16(c->r[21]+0x0000000Cu,c->r[3]); // 800F6034
  W8(c->r[22]+0x0000001Au,c->r[30]); // 800F6038
  goto L_800F60FC; // 800F603C
L_800F6040:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 800F6040
  W8(c->r[22]+0x00000017u,c->r[0]); // 800F6044
  goto L_800F60FC; // 800F6048
L_800F604C:;
  c->r[7]=R32(c->r[15]+c->r[23]); // 800F604C
  c->r[3]=rotl(c->r[20],0)&0x000000FFu; // 800F6050
  c->r[6]=R8(c->r[1]+0x00000008u); // 800F6054
  c->r[5]=R16(c->r[7]+0x00000002u); // 800F6058
  c->r[4]=c->r[7]+c->r[5]; // 800F605C
  c->r[0]=c->r[5]+0x00000001u; // 800F6060
  W8(c->r[4]+0x00000008u,c->r[6]); // 800F6064
  W16(c->r[7]+0x00000002u,c->r[0]); // 800F6068
  c->r[4]=R16(c->r[21]+0x0000000Cu); // 800F606C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800F6070
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800F6074
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6078
  c->r[4]=R32(c->r[15]+c->r[23]); // 800F607C
  c->r[0]=R16(c->r[4]+0x00000002u); // 800F6080
  c->r[4]=c->r[4]+c->r[0]; // 800F6084
  c->r[4]=c->r[4]+0x00000008u; // 800F6088
  c->lr=0x800F6090u; f_800F6DA0(c); // 800F608C
  c->r[4]=R32(c->r[15]+c->r[23]); // 800F6090
  c->r[19]=c->r[19]+c->r[3]; // 800F6094
  c->r[0]=R16(c->r[4]+0x00000002u); // 800F6098
  c->r[0]=c->r[0]+c->r[3]; // 800F609C
  W16(c->r[4]+0x00000002u,c->r[0]); // 800F60A0
  c->r[0]=R16(c->r[21]+0x0000000Cu); // 800F60A4
  c->r[0]=c->r[0]-c->r[3]; // 800F60A8
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800F60AC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F60B0
  if (!crb(c,2)) { goto L_800F60FC; } // 800F60B4
  c->r[0]=R8(c->r[22]+0x00000014u); // 800F60B8
  cmpu(c,0,c->r[0],0x00000002u); // 800F60BC
  if (!crb(c,2)) { goto L_800F60D8; } // 800F60C0
  c->lr=0x800F60C8u; f_80112BA0(c); // 800F60C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F60C8
  if (!crb(c,2)) { goto L_800F60D8; } // 800F60CC
  W8(c->r[22]+0x0000001Au,c->r[29]); // 800F60D0
  goto L_800F60FC; // 800F60D4
L_800F60D8:;
  W8(c->r[22]+0x0000001Au,c->r[29]); // 800F60D8
  c->r[17]=0u+0x00000001u; // 800F60DC
  goto L_800F60FC; // 800F60E0
L_800F60E4:;
  c->r[3]=R16(c->r[21]+0x0000000Cu); // 800F60E4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F60E8
  W16(c->r[21]+0x0000000Cu,c->r[0]); // 800F60EC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F60F0
  if (!crb(c,2)) { goto L_800F60FC; } // 800F60F4
  W8(c->r[22]+0x0000001Au,c->r[29]); // 800F60F8
L_800F60FC:;
  cmps(c,0,(int32_t)c->r[17],0); // 800F60FC
  if (crb(c,2)) { IRQCHK(c); goto L_800F5E10; } // 800F6100
  c->r[3]=R8(c->r[31]+0x0000001Fu); // 800F6104
  c->r[4]=0u+0x00000000u; // 800F6108
  c->r[5]=R32(c->r[15]+c->r[23]); // 800F610C
  c->lr=0x800F6114u; f_800F4980(c); // 800F6110
  W32(c->r[15]+c->r[23],c->r[29]); // 800F6114
  IRQCHK(c); goto L_800F5E10; // 800F6118
L_800F611C:;
  c->r[3]=c->r[19]|c->r[19]; // 800F611C
L_800F6120:;
  c->r[11]=c->r[1]+0x00000060u; // 800F6120
  c->lr=0x800F6128u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F6124
  c->r[0]=R32(c->r[1]+0x00000064u); // 800F6128
  c->lr=c->r[0]; // 800F612C
  c->r[1]=c->r[1]+0x00000060u; // 800F6130
  return; // 800F6134
  unimpl(c,0x800F6138u,"00000000"); // 800F6138
  unimpl(c,0x800F613Cu,"00000000"); // 800F613C
  f_800F6140(c);
}

// hcisu_h2_send_msg_now
void f_800F6140(Ctx* __restrict c) {
  trace_call(0x800F6140u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6140
  c->r[0]=c->lr; // 800F6144
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6148
  c->r[11]=c->r[1]+0x00000020u; // 800F614C
  c->lr=0x800F6154u; f_800ADA2C(c); // 800F6150
  c->r[5]=R16(c->r[4]+0x00000000u); // 800F6154
  c->r[27]=c->r[4]|c->r[4]; // 800F6158
  c->r[0]=R16(c->r[4]+0x00000004u); // 800F615C
  cmpu(c,0,c->r[5],0x00002100u); // 800F6160
  c->r[3]=c->r[4]+c->r[0]; // 800F6164
  c->r[6]=c->r[3]+0x00000008u; // 800F6168
  if (!crb(c,2)) { goto L_800F6178; } // 800F616C
  c->r[28]=0u+0x00000002u; // 800F6170
  goto L_800F6194; // 800F6174
L_800F6178:;
  cmpu(c,0,c->r[5],0x00002200u); // 800F6178
  if (!crb(c,2)) { goto L_800F6188; } // 800F617C
  c->r[28]=0u+0x00000003u; // 800F6180
  goto L_800F6194; // 800F6184
L_800F6188:;
  cmpu(c,0,c->r[5],0x00002000u); // 800F6188
  if (!crb(c,2)) { goto L_800F6194; } // 800F618C
  c->r[28]=0u+0x00000000u; // 800F6190
L_800F6194:;
  cmpu(c,0,c->r[5],0x00002100u); // 800F6194
  if (!crb(c,2)) { goto L_800F62B8; } // 800F6198
  c->r[3]=0u+0x803D0000u; // 800F619C
  c->r[4]=R16(c->r[4]+0x00000002u); // 800F61A0
  c->r[30]=c->r[3]+0xFFFF9CF0u; // 800F61A4
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 800F61A8
  cmpu(c,0,c->r[4],c->r[0]); // 800F61AC
  if (!crb(c,1)) { goto L_800F62B8; } // 800F61B0
  c->r[0]=R8(c->r[6]+0x00000001u); // 800F61B4
  c->r[3]=R8(c->r[6]+0x00000000u); // 800F61B8
  c->r[6]=c->r[6]+0x00000002u; // 800F61BC
  c->r[0]=rotl(c->r[0],8)&0x0000FF00u; // 800F61C0
  c->r[0]=c->r[3]+c->r[0]; // 800F61C4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800F61C8
  c->r[0]=c->r[0]&0x0000CFFFu; cr0(c,c->r[0]); // 800F61CC
  c->r[31]=c->r[0]|0x00001000u; // 800F61D0
  c->r[29]=sraw(c,c->r[31],8); // 800F61D4
  goto L_800F62A8; // 800F61D8
L_800F61DC:;
  c->r[4]=c->r[6]|c->r[6]; // 800F61DC
  c->r[3]=c->r[28]|c->r[28]; // 800F61E0
  c->r[6]=c->r[27]|c->r[27]; // 800F61E4
  c->lr=0x800F61ECu; f_800F6DB0(c); // 800F61E8
  c->r[3]=R16(c->r[27]+0x00000004u); // 800F61EC
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 800F61F0
  c->r[4]=R16(c->r[27]+0x00000002u); // 800F61F4
  c->r[0]=c->r[3]+c->r[0]; // 800F61F8
  W16(c->r[27]+0x00000004u,c->r[0]); // 800F61FC
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6200
  c->r[5]=R16(c->r[30]+0x0000007Cu); // 800F6204
  c->r[3]=c->r[27]+c->r[0]; // 800F6208
  c->r[6]=c->r[3]+0x0000000Au; // 800F620C
  c->r[0]=c->r[4]-c->r[5]; // 800F6210
  W16(c->r[27]+0x00000002u,c->r[0]); // 800F6214
  W8(c->r[3]+0x00000008u,c->r[31]); // 800F6218
  W8(c->r[3]+0x00000009u,c->r[29]); // 800F621C
  c->r[3]=R16(c->r[27]+0x00000002u); // 800F6220
  c->r[0]=R16(c->r[30]+0x0000007Eu); // 800F6224
  cmpu(c,0,c->r[3],c->r[0]); // 800F6228
  if (!crb(c,1)) { goto L_800F624C; } // 800F622C
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 800F6230
  W8(c->r[6]+0x00000000u,c->r[0]); // 800F6234
  c->r[0]=R16(c->r[30]+0x0000007Cu); // 800F6238
  c->r[0]=sraw(c,c->r[0],8); // 800F623C
  W8(c->r[6]+0x00000001u,c->r[0]); // 800F6240
  c->r[6]=c->r[6]+0x00000002u; // 800F6244
  goto L_800F6268; // 800F6248
L_800F624C:;
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800F624C
  W8(c->r[6]+0x00000000u,c->r[0]); // 800F6250
  c->r[3]=R16(c->r[27]+0x00000002u); // 800F6254
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 800F6258
  c->r[0]=sraw(c,c->r[0],8); // 800F625C
  W8(c->r[6]+0x00000001u,c->r[0]); // 800F6260
  c->r[6]=c->r[6]+0x00000002u; // 800F6264
L_800F6268:;
  c->r[3]=R16(c->r[27]+0x00000006u); // 800F6268
  cmps(c,0,(int32_t)c->r[3],0); // 800F626C
  if (crb(c,2)) { goto L_800F62A8; } // 800F6270
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F6274
  W16(c->r[27]+0x00000006u,c->r[0]); // 800F6278
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F627C
  if (!crb(c,2)) { goto L_800F62A8; } // 800F6280
  c->r[0]=0u+0x00001900u; // 800F6284
  c->r[3]=0u+0x803C0000u; // 800F6288
  W16(c->r[27]+0x00000000u,c->r[0]); // 800F628C
  c->r[3]=c->r[3]+0x00006448u; // 800F6290
  c->r[5]=c->r[27]|c->r[27]; // 800F6294
  c->r[4]=0u+0x00000000u; // 800F6298
  c->r[3]=R8(c->r[3]+0x0000001Fu); // 800F629C
  c->lr=0x800F62A4u; f_800F4980(c); // 800F62A0
  goto L_800F62D4; // 800F62A4
L_800F62A8:;
  c->r[5]=R16(c->r[30]+0x0000007Eu); // 800F62A8
  c->r[0]=R16(c->r[27]+0x00000002u); // 800F62AC
  cmpu(c,0,c->r[0],c->r[5]); // 800F62B0
  if (crb(c,1)) { IRQCHK(c); goto L_800F61DC; } // 800F62B4
L_800F62B8:;
  c->r[5]=R16(c->r[27]+0x00000002u); // 800F62B8
  c->r[4]=c->r[6]|c->r[6]; // 800F62BC
  c->r[3]=c->r[28]|c->r[28]; // 800F62C0
  c->r[6]=c->r[27]|c->r[27]; // 800F62C4
  c->lr=0x800F62CCu; f_800F6DB0(c); // 800F62C8
  c->r[3]=c->r[27]|c->r[27]; // 800F62CC
  c->lr=0x800F62D4u; f_800F47C0(c); // 800F62D0
L_800F62D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800F62D4
  c->lr=0x800F62DCu; f_800ADA78(c); // 800F62D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F62DC
  c->lr=c->r[0]; // 800F62E0
  c->r[1]=c->r[1]+0x00000020u; // 800F62E4
  return; // 800F62E8
  unimpl(c,0x800F62ECu,"00000000"); // 800F62EC
  f_800F62F0(c);
}

// hcisu_h2_init
void f_800F62F0(Ctx* __restrict c) {
  trace_call(0x800F62F0u);
  c->r[6]=0u+0x803C0000u; // 800F62F0
  c->r[0]=0u+0x00000000u; // 800F62F4
  c->r[6]=c->r[6]+0x00006448u; // 800F62F8
  W8(c->r[6]+0x0000001Eu,c->r[0]); // 800F62FC
  W8(c->r[6]+0x0000001Au,c->r[0]); // 800F6300
  W8(c->r[6]+0x0000001Bu,c->r[0]); // 800F6304
  W8(c->r[6]+0x0000001Cu,c->r[0]); // 800F6308
  W8(c->r[6]+0x0000001Fu,c->r[3]); // 800F630C
  W8(c->r[6]+0x00000020u,c->r[4]); // 800F6310
  W16(c->r[6]+0x00000012u,c->r[5]); // 800F6314
  return; // 800F6318
  unimpl(c,0x800F631Cu,"00000000"); // 800F631C
  f_800F6320(c);
}

// hcisu_h2_open
void f_800F6320(Ctx* __restrict c) {
  trace_call(0x800F6320u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6320
  c->r[0]=c->lr; // 800F6324
  c->r[5]=0u+0x803C0000u; // 800F6328
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F632C
  c->r[0]=0u+0x00000000u; // 800F6330
  c->r[5]=c->r[5]+0x00006448u; // 800F6334
  W8(c->r[1]+0x00000013u,c->r[0]); // 800F6338
  c->r[0]=0u+0x00000002u; // 800F633C
  c->r[4]=R16(c->r[3]+0x00000000u); // 800F6340
  W16(c->r[1]+0x0000000Cu,c->r[4]); // 800F6344
  c->r[4]=R8(c->r[5]+0x0000001Fu); // 800F6348
  c->r[6]=R16(c->r[3]+0x00000002u); // 800F634C
  c->r[3]=c->r[1]+0x00000008u; // 800F6350
  W16(c->r[1]+0x0000000Eu,c->r[6]); // 800F6354
  W16(c->r[1]+0x00000010u,c->r[4]); // 800F6358
  W8(c->r[5]+0x0000001Eu,c->r[0]); // 800F635C
  c->lr=0x800F6364u; f_800F6A00(c); // 800F6360
  c->r[4]=0u+0x800F0000u; // 800F6364
  c->r[3]=c->r[1]+0x00000008u; // 800F6368
  c->r[4]=c->r[4]+0x00005D80u; // 800F636C
  c->lr=0x800F6374u; f_800F6C10(c); // 800F6370
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6374
  c->r[3]=0u+0x00000001u; // 800F6378
  c->lr=c->r[0]; // 800F637C
  c->r[1]=c->r[1]+0x00000020u; // 800F6380
  return; // 800F6384
  unimpl(c,0x800F6388u,"00000000"); // 800F6388
  unimpl(c,0x800F638Cu,"00000000"); // 800F638C
  f_800F6390(c);
}

// hcisu_h2_close
void f_800F6390(Ctx* __restrict c) {
  trace_call(0x800F6390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6390
  c->r[0]=c->lr; // 800F6394
  c->r[3]=0u+0x803C0000u; // 800F6398
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F639C
  c->r[3]=c->r[3]+0x00006448u; // 800F63A0
  c->r[0]=0u+0x00000000u; // 800F63A4
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 800F63A8
  c->lr=0x800F63B0u; f_800F6FC0(c); // 800F63AC
  c->lr=0x800F63B4u; f_800F7070(c); // 800F63B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F63B4
  c->lr=c->r[0]; // 800F63B8
  c->r[1]=c->r[1]+0x00000010u; // 800F63BC
  return; // 800F63C0
  unimpl(c,0x800F63C4u,"00000000"); // 800F63C4
  unimpl(c,0x800F63C8u,"00000000"); // 800F63C8
  unimpl(c,0x800F63CCu,"00000000"); // 800F63CC
  f_800F63D0(c);
}

// fn_800F63D0
void f_800F63D0(Ctx* __restrict c) {
  trace_call(0x800F63D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F63D0
  c->r[0]=c->lr; // 800F63D4
  c->r[5]=0u+0x803C0000u; // 800F63D8
  c->r[4]=c->r[3]|c->r[3]; // 800F63DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F63E0
  c->r[3]=c->r[5]+0x00006448u; // 800F63E4
  c->lr=0x800F63ECu; f_800F6140(c); // 800F63E8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F63EC
  c->r[3]=0u+0x00000001u; // 800F63F0
  c->lr=c->r[0]; // 800F63F4
  c->r[1]=c->r[1]+0x00000010u; // 800F63F8
  return; // 800F63FC
}

// hcisu_h2_handle_event
void f_800F6400(Ctx* __restrict c) {
  trace_call(0x800F6400u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6400
  c->r[0]=c->lr; // 800F6404
  c->r[4]=0u+0x803C0000u; // 800F6408
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F640C
  c->r[4]=c->r[4]+0x00006448u; // 800F6410
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 800F6414
  c->r[3]=R16(c->r[4]+0x00000012u); // 800F6418
  c->r[0]=c->r[0]-c->r[3]; // 800F641C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6420
  c->lr=0x800F6428u; f_800F5DA0(c); // 800F6424
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6428
  c->r[3]=0u+0x00000000u; // 800F642C
  c->lr=c->r[0]; // 800F6430
  c->r[1]=c->r[1]+0x00000010u; // 800F6434
  return; // 800F6438
  unimpl(c,0x800F643Cu,"00000000"); // 800F643C
  f_800F6440(c);
}

// fn_800F6440
void f_800F6440(Ctx* __restrict c) {
  trace_call(0x800F6440u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6440
  c->r[0]=c->lr; // 800F6444
  c->r[4]=0u+0x803C0000u; // 800F6448
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F644C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F6450
  c->r[31]=c->r[4]+0x00006480u; // 800F6454
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F6458
  c->r[30]=0u+0x00000000u; // 800F645C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F6460
  c->r[29]=c->r[3]|c->r[3]; // 800F6464
  W32(c->r[4]+0x00006480u,c->r[30]); // 800F6468
  W8(c->r[31]+0x00000010u,c->r[30]); // 800F646C
  W8(c->r[31]+0x00000011u,c->r[30]); // 800F6470
  W8(c->r[31]+0x00000012u,c->r[30]); // 800F6474
  W8(c->r[31]+0x00000013u,c->r[30]); // 800F6478
  W8(c->r[13]+0xFFFFA0D0u,c->r[30]); // 800F647C
  c->lr=0x800F6484u; f_80121A70(c); // 800F6480
  c->lr=0x800F6488u; f_800F5CE0(c); // 800F6484
  c->r[0]=0u+0x00000005u; // 800F6488
  W8(c->r[31]+0x00000029u,c->r[0]); // 800F648C
  W8(c->r[31]+0x00000028u,c->r[30]); // 800F6490
  W8(c->r[13]+0xFFFFA0D1u,c->r[30]); // 800F6494
  c->lr=0x800F649Cu; f_800F5CB0(c); // 800F6498
  c->r[12]=R32(c->r[31]+0x00000020u); // 800F649C
  cmps(c,0,(int32_t)c->r[12],0); // 800F64A0
  if (crb(c,2)) { goto L_800F64B8; } // 800F64A4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[29]; // 800F64A8
  c->r[3]=0u+0x00000004u; // 800F64AC
  c->ctr=c->r[12]; // 800F64B0
  if (true) { c->lr=0x800F64B8u; dispatch(c,c->ctr); } // 800F64B4
L_800F64B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F64B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F64BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F64C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F64C4
  c->lr=c->r[0]; // 800F64C8
  c->r[1]=c->r[1]+0x00000020u; // 800F64CC
  return; // 800F64D0
  unimpl(c,0x800F64D4u,"00000000"); // 800F64D4
  unimpl(c,0x800F64D8u,"00000000"); // 800F64D8
  unimpl(c,0x800F64DCu,"00000000"); // 800F64DC
  f_800F64E0(c);
}

// fn_800F64E0
void f_800F64E0(Ctx* __restrict c) {
  trace_call(0x800F64E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F64E0
  c->r[0]=c->lr; // 800F64E4
  c->r[5]=0u+0x00000000u; // 800F64E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F64EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F64F0
  c->r[31]=c->r[3]|c->r[3]; // 800F64F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F64F8
  c->r[30]=0u+0x803C0000u; // 800F64FC
  c->r[30]=c->r[30]+0x00006480u; // 800F6500
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F6504
  c->r[29]=c->r[4]|c->r[4]; // 800F6508
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F650C
  c->r[0]=R8(c->r[30]+0x00000029u); // 800F6510
  W8(c->r[30]+0x0000002Bu,c->r[5]); // 800F6514
  cmpu(c,0,c->r[0],0x00000002u); // 800F6518
  if (crb(c,2)) { goto L_800F653C; } // 800F651C
  c->r[3]=c->r[29]|c->r[29]; // 800F6520
  c->lr=0x800F6528u; f_800F47C0(c); // 800F6524
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 800F6528
  c->lr=0x800F6530u; f_800F5370(c); // 800F652C
  c->r[0]=0u+0x000000FFu; // 800F6530
  W8(c->r[30]+0x0000001Cu,c->r[0]); // 800F6534
  goto L_800F6668; // 800F6538
L_800F653C:;
  c->r[0]=0u+0x00000000u; // 800F653C
  cmpu(c,0,c->r[4],c->r[0]); // 800F6540
  if (crb(c,2)) { goto L_800F65D8; } // 800F6544
  cmps(c,0,(int32_t)c->r[3],0); // 800F6548
  if (crb(c,1)) { goto L_800F655C; } // 800F654C
  c->r[3]=c->r[29]|c->r[29]; // 800F6550
  c->lr=0x800F6558u; f_800F47C0(c); // 800F6554
  goto L_800F65D8; // 800F6558
L_800F655C:;
  c->r[3]=0u+0x00000002u; // 800F655C
  c->lr=0x800F6564u; f_800F46D0(c); // 800F6560
  cmps(c,0,(int32_t)c->r[3],0); // 800F6564
  c->r[28]=c->r[3]|c->r[3]; // 800F6568
  if (!crb(c,2)) { goto L_800F657C; } // 800F656C
  c->r[3]=c->r[29]|c->r[29]; // 800F6570
  c->lr=0x800F6578u; f_800F47C0(c); // 800F6574
  goto L_800F65D8; // 800F6578
L_800F657C:;
  c->r[0]=R16(c->r[29]+0x00000004u); // 800F657C
  c->r[5]=0u+0x00001000u; // 800F6580
  c->r[4]=rotl(c->r[31],0)&0x0000FFFFu; // 800F6584
  W16(c->r[29]+0x00000000u,c->r[5]); // 800F6588
  c->r[5]=c->r[4]+c->r[0]; // 800F658C
  c->r[0]=c->r[5]+0x00000008u; // 800F6590
  W16(c->r[29]+0x00000002u,c->r[31]); // 800F6594
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800F6598
  c->r[4]=c->r[29]|c->r[29]; // 800F659C
  c->r[5]=c->r[5]+0x00000004u; // 800F65A0
  c->lr=0x800F65A8u; f_800043C4(c); // 800F65A4
  c->r[5]=0u+0x803C0000u; // 800F65A8
  c->r[7]=0u+0x800F0000u; // 800F65AC
  c->r[5]=c->r[5]+0x000064E0u; // 800F65B0
  c->r[3]=c->r[28]|c->r[28]; // 800F65B4
  c->r[8]=c->r[5]+0x00001000u; // 800F65B8
  c->r[7]=c->r[7]+0x00007180u; // 800F65BC
  c->r[4]=0u+0x00000000u; // 800F65C0
  c->r[5]=0u+0x00000000u; // 800F65C4
  c->r[6]=0u+0x00000000u; // 800F65C8
  c->lr=0x800F65D0u; f_8007C280(c); // 800F65CC
  c->r[3]=c->r[29]|c->r[29]; // 800F65D0
  c->lr=0x800F65D8u; f_800F47C0(c); // 800F65D4
L_800F65D8:;
  c->r[30]=0u+0x803C0000u; // 800F65D8
  c->r[31]=c->r[30]+0x00006480u; // 800F65DC
L_800F65E0:;
  c->r[3]=R8(c->r[31]+0x0000001Cu); // 800F65E0
  c->lr=0x800F65E8u; f_800F46D0(c); // 800F65E4
  cmps(c,0,(int32_t)c->r[3],0); // 800F65E8
  c->r[28]=c->r[3]|c->r[3]; // 800F65EC
  if (crb(c,2)) { IRQCHK(c); goto L_800F65E0; } // 800F65F0
  c->r[0]=0u+0x00001000u; // 800F65F4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F65F8
  c->r[0]=c->r[3]+0x00000027u; // 800F65FC
  c->r[4]=0u+0x00000000u; // 800F6600
  W16(c->r[3]+0x00000002u,c->r[4]); // 800F6604
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F6608
  c->r[0]=c->r[3]+0x00000008u; // 800F660C
  c->r[0]=c->r[29]-c->r[0]; // 800F6610
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F6614
  c->lr=0x800F661Cu; f_800F4930(c); // 800F6618
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F661C
  c->r[0]=R16(c->r[28]+0x00000004u); // 800F6620
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 800F6624
  c->r[7]=0u+0x800F0000u; // 800F6628
  c->r[3]=R32(c->r[30]+0x00006480u); // 800F662C
  c->r[6]=c->r[29]|c->r[29]; // 800F6630
  c->r[4]=R8(c->r[31]+0x00000012u); // 800F6634
  c->r[8]=c->r[28]|c->r[28]; // 800F6638
  c->r[5]=c->r[5]-c->r[0]; // 800F663C
  c->r[7]=c->r[7]+0x000064E0u; // 800F6640
  c->lr=0x800F6648u; f_80122560(c); // 800F6644
  cmps(c,0,(int32_t)c->r[3],0); // 800F6648
  if (crb(c,2)) { goto L_800F6658; } // 800F664C
  c->r[3]=c->r[28]|c->r[28]; // 800F6650
  c->lr=0x800F6658u; f_800F47C0(c); // 800F6654
L_800F6658:;
  c->r[3]=0u+0x803C0000u; // 800F6658
  c->r[0]=0u+0x00000001u; // 800F665C
  c->r[3]=c->r[3]+0x00006480u; // 800F6660
  W8(c->r[3]+0x0000002Bu,c->r[0]); // 800F6664
L_800F6668:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6668
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F666C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F6670
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F6674
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F6678
  c->lr=c->r[0]; // 800F667C
  c->r[1]=c->r[1]+0x00000020u; // 800F6680
  return; // 800F6684
  unimpl(c,0x800F6688u,"00000000"); // 800F6688
  unimpl(c,0x800F668Cu,"00000000"); // 800F668C
  f_800F6690(c);
}

// fn_800F6690
void f_800F6690(Ctx* __restrict c) {
  trace_call(0x800F6690u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6690
  c->r[0]=c->lr; // 800F6694
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F669C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F66A0
  c->r[30]=0u+0x803C0000u; // 800F66A4
  c->r[30]=c->r[30]+0x00006480u; // 800F66A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F66AC
  c->r[29]=c->r[4]|c->r[4]; // 800F66B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F66B4
  c->r[0]=R8(c->r[30]+0x00000029u); // 800F66B8
  cmpu(c,0,c->r[0],0x00000002u); // 800F66BC
  if (crb(c,2)) { goto L_800F66E0; } // 800F66C0
  c->r[3]=c->r[29]|c->r[29]; // 800F66C4
  c->lr=0x800F66CCu; f_800F47C0(c); // 800F66C8
  c->r[3]=R8(c->r[30]+0x0000001Du); // 800F66CC
  c->lr=0x800F66D4u; f_800F5370(c); // 800F66D0
  c->r[0]=0u+0x000000FFu; // 800F66D4
  W8(c->r[30]+0x0000001Du,c->r[0]); // 800F66D8
  goto L_800F680C; // 800F66DC
L_800F66E0:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F66E0
  if (crb(c,1)) { goto L_800F66F4; } // 800F66E4
  c->r[3]=c->r[29]|c->r[29]; // 800F66E8
  c->lr=0x800F66F0u; f_800F47C0(c); // 800F66EC
  goto L_800F678C; // 800F66F0
L_800F66F4:;
  W16(c->r[4]+0x00000002u,c->r[3]); // 800F66F4
  c->r[3]=0u+0x00000003u; // 800F66F8
  c->lr=0x800F6700u; f_800F46D0(c); // 800F66FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F6700
  c->r[28]=c->r[3]|c->r[3]; // 800F6704
  if (!crb(c,2)) { goto L_800F6718; } // 800F6708
  c->r[3]=c->r[29]|c->r[29]; // 800F670C
  c->lr=0x800F6714u; f_800F47C0(c); // 800F6710
  goto L_800F678C; // 800F6714
L_800F6718:;
  c->r[5]=R16(c->r[29]+0x00000002u); // 800F6718
  c->r[4]=c->r[29]|c->r[29]; // 800F671C
  c->r[0]=R16(c->r[29]+0x00000004u); // 800F6720
  c->r[5]=c->r[5]+c->r[0]; // 800F6724
  c->r[0]=c->r[5]+0x00000008u; // 800F6728
  c->r[5]=rotl(c->r[0],0)&0xFFFFFFFCu; // 800F672C
  c->r[5]=c->r[5]+0x00000004u; // 800F6730
  c->lr=0x800F6738u; f_800043C4(c); // 800F6734
  c->r[3]=c->r[28]|c->r[28]; // 800F6738
  c->lr=0x800F6740u; f_801129D0(c); // 800F673C
  c->r[0]=0u+0x00000000u; // 800F6740
  c->r[28]=c->r[3]|c->r[3]; // 800F6744
  cmpu(c,0,c->r[3],c->r[0]); // 800F6748
  if (crb(c,2)) { goto L_800F6784; } // 800F674C
  c->lr=0x800F6754u; f_80112BA0(c); // 800F6750
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F6754
  if (crb(c,2)) { goto L_800F6784; } // 800F6758
  c->r[5]=0u+0x803C0000u; // 800F675C
  c->r[7]=0u+0x800F0000u; // 800F6760
  c->r[5]=c->r[5]+0x000074E0u; // 800F6764
  c->r[3]=c->r[28]|c->r[28]; // 800F6768
  c->r[8]=c->r[5]+0x00001000u; // 800F676C
  c->r[7]=c->r[7]+0x00007180u; // 800F6770
  c->r[4]=0u+0x00000000u; // 800F6774
  c->r[5]=0u+0x00000000u; // 800F6778
  c->r[6]=0u+0x00000000u; // 800F677C
  c->lr=0x800F6784u; f_8007C280(c); // 800F6780
L_800F6784:;
  c->r[3]=c->r[29]|c->r[29]; // 800F6784
  c->lr=0x800F678Cu; f_800F47C0(c); // 800F6788
L_800F678C:;
  c->r[30]=0u+0x803C0000u; // 800F678C
  c->r[31]=c->r[30]+0x00006480u; // 800F6790
L_800F6794:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 800F6794
  c->lr=0x800F679Cu; f_800F46D0(c); // 800F6798
  cmps(c,0,(int32_t)c->r[3],0); // 800F679C
  c->r[28]=c->r[3]|c->r[3]; // 800F67A0
  if (crb(c,2)) { IRQCHK(c); goto L_800F6794; } // 800F67A4
  c->r[0]=0u+0x00001100u; // 800F67A8
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F67AC
  c->r[0]=c->r[3]+0x00000027u; // 800F67B0
  c->r[4]=0u+0x00000000u; // 800F67B4
  W16(c->r[3]+0x00000002u,c->r[4]); // 800F67B8
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F67BC
  c->r[0]=c->r[3]+0x00000008u; // 800F67C0
  c->r[0]=c->r[29]-c->r[0]; // 800F67C4
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F67C8
  c->lr=0x800F67D0u; f_800F4930(c); // 800F67CC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F67D0
  c->r[0]=R16(c->r[28]+0x00000004u); // 800F67D4
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 800F67D8
  c->r[7]=0u+0x800F0000u; // 800F67DC
  c->r[3]=R32(c->r[30]+0x00006480u); // 800F67E0
  c->r[6]=c->r[29]|c->r[29]; // 800F67E4
  c->r[4]=R8(c->r[31]+0x00000011u); // 800F67E8
  c->r[8]=c->r[28]|c->r[28]; // 800F67EC
  c->r[5]=c->r[5]-c->r[0]; // 800F67F0
  c->r[7]=c->r[7]+0x00006690u; // 800F67F4
  c->lr=0x800F67FCu; f_801225E0(c); // 800F67F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F67FC
  if (crb(c,2)) { goto L_800F680C; } // 800F6800
  c->r[3]=c->r[28]|c->r[28]; // 800F6804
  c->lr=0x800F680Cu; f_800F47C0(c); // 800F6808
L_800F680C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F680C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F6810
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F6814
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F6818
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F681C
  c->lr=c->r[0]; // 800F6820
  c->r[1]=c->r[1]+0x00000020u; // 800F6824
  return; // 800F6828
  unimpl(c,0x800F682Cu,"00000000"); // 800F682C
  f_800F6830(c);
}

// fn_800F6830
void f_800F6830(Ctx* __restrict c) {
  trace_call(0x800F6830u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6830
  c->r[0]=c->lr; // 800F6834
  cmps(c,0,(int32_t)c->r[4],0); // 800F6838
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F683C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F6840
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F6844
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F6848
  if (crb(c,2)) { goto L_800F6874; } // 800F684C
  c->r[3]=c->r[4]|c->r[4]; // 800F6850
  c->lr=0x800F6858u; f_800F47C0(c); // 800F6854
  c->lr=0x800F685Cu; f_800F5CE0(c); // 800F6858
  c->r[4]=0u+0x803C0000u; // 800F685C
  c->r[4]=c->r[4]+0x00006480u; // 800F6860
  c->r[3]=R8(c->r[4]+0x00000048u); // 800F6864
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F6868
  W8(c->r[4]+0x00000048u,c->r[0]); // 800F686C
  c->lr=0x800F6874u; f_800F5CB0(c); // 800F6870
L_800F6874:;
  c->r[30]=0u+0x803C0000u; // 800F6874
  c->r[31]=c->r[30]+0x00006480u; // 800F6878
  c->r[0]=R8(c->r[31]+0x00000048u); // 800F687C
  cmpu(c,0,c->r[0],0x00000005u); // 800F6880
  if (!crb(c,0)) { goto L_800F6900; } // 800F6884
  c->r[0]=R16(c->r[31]+0x00000044u); // 800F6888
  cmps(c,0,(int32_t)c->r[0],0); // 800F688C
  if (crb(c,2)) { goto L_800F6900; } // 800F6890
  c->r[3]=c->r[31]+0x0000003Cu; // 800F6894
  c->lr=0x800F689Cu; f_800F4E70(c); // 800F6898
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F689C
  c->r[29]=c->r[3]|c->r[3]; // 800F68A0
  c->r[10]=0u+0x800F0000u; // 800F68A4
  c->r[4]=0u+0x00000020u; // 800F68A8
  c->r[0]=R16(c->r[3]+0x00000004u); // 800F68AC
  c->r[10]=c->r[10]+0x00006830u; // 800F68B0
  c->r[3]=R32(c->r[30]+0x00006480u); // 800F68B4
  c->r[5]=0u+0x00000000u; // 800F68B8
  c->r[6]=c->r[29]+c->r[0]; // 800F68BC
  c->r[8]=R16(c->r[29]+0x00000002u); // 800F68C0
  c->r[9]=c->r[6]+0x00000008u; // 800F68C4
  c->r[7]=0u+0x00000000u; // 800F68C8
  c->r[6]=0u+0x00000000u; // 800F68CC
  c->lr=0x800F68D4u; f_80122CD0(c); // 800F68D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F68D4
  if (!crb(c,0)) { goto L_800F68EC; } // 800F68D8
  c->r[4]=c->r[29]|c->r[29]; // 800F68DC
  c->r[3]=c->r[31]+0x0000003Cu; // 800F68E0
  c->lr=0x800F68E8u; f_800F4D30(c); // 800F68E4
  goto L_800F6900; // 800F68E8
L_800F68EC:;
  c->lr=0x800F68F0u; f_800F5CE0(c); // 800F68EC
  c->r[3]=R8(c->r[31]+0x00000048u); // 800F68F0
  c->r[0]=c->r[3]+0x00000001u; // 800F68F4
  W8(c->r[31]+0x00000048u,c->r[0]); // 800F68F8
  c->lr=0x800F6900u; f_800F5CB0(c); // 800F68FC
L_800F6900:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6900
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F6904
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F6908
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F690C
  c->lr=c->r[0]; // 800F6910
  c->r[1]=c->r[1]+0x00000020u; // 800F6914
  return; // 800F6918
  unimpl(c,0x800F691Cu,"00000000"); // 800F691C
  f_800F6920(c);
}

// uusb_WriteBulkDataCB
void f_800F6920(Ctx* __restrict c) {
  trace_call(0x800F6920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6920
  c->r[0]=c->lr; // 800F6924
  cmps(c,0,(int32_t)c->r[4],0); // 800F6928
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F692C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F6930
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F6934
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F6938
  if (crb(c,2)) { goto L_800F6964; } // 800F693C
  c->r[3]=c->r[4]|c->r[4]; // 800F6940
  c->lr=0x800F6948u; f_800F47C0(c); // 800F6944
  c->lr=0x800F694Cu; f_800F5CE0(c); // 800F6948
  c->r[4]=0u+0x803C0000u; // 800F694C
  c->r[4]=c->r[4]+0x00006480u; // 800F6950
  c->r[3]=R8(c->r[4]+0x00000038u); // 800F6954
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F6958
  W8(c->r[4]+0x00000038u,c->r[0]); // 800F695C
  c->lr=0x800F6964u; f_800F5CB0(c); // 800F6960
L_800F6964:;
  c->r[30]=0u+0x803C0000u; // 800F6964
  c->r[31]=c->r[30]+0x00006480u; // 800F6968
  c->r[0]=R8(c->r[31]+0x00000038u); // 800F696C
  cmpu(c,0,c->r[0],0x00000005u); // 800F6970
  if (!crb(c,0)) { goto L_800F69E4; } // 800F6974
  c->r[0]=R16(c->r[31]+0x00000034u); // 800F6978
  cmps(c,0,(int32_t)c->r[0],0); // 800F697C
  if (crb(c,2)) { goto L_800F69E4; } // 800F6980
  c->r[3]=c->r[31]+0x0000002Cu; // 800F6984
  c->lr=0x800F698Cu; f_800F4E70(c); // 800F6988
  c->r[0]=R16(c->r[3]+0x00000004u); // 800F698C
  c->r[29]=c->r[3]|c->r[3]; // 800F6990
  c->r[7]=0u+0x800F0000u; // 800F6994
  c->r[3]=R32(c->r[30]+0x00006480u); // 800F6998
  c->r[6]=c->r[29]+c->r[0]; // 800F699C
  c->r[4]=R8(c->r[31]+0x00000010u); // 800F69A0
  c->r[5]=R16(c->r[29]+0x00000002u); // 800F69A4
  c->r[8]=c->r[29]|c->r[29]; // 800F69A8
  c->r[7]=c->r[7]+0x00006920u; // 800F69AC
  c->r[6]=c->r[6]+0x00000008u; // 800F69B0
  c->lr=0x800F69B8u; f_80122680(c); // 800F69B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F69B8
  if (!crb(c,0)) { goto L_800F69D0; } // 800F69BC
  c->r[4]=c->r[29]|c->r[29]; // 800F69C0
  c->r[3]=c->r[31]+0x0000002Cu; // 800F69C4
  c->lr=0x800F69CCu; f_800F4D30(c); // 800F69C8
  goto L_800F69E4; // 800F69CC
L_800F69D0:;
  c->lr=0x800F69D4u; f_800F5CE0(c); // 800F69D0
  c->r[3]=R8(c->r[31]+0x00000038u); // 800F69D4
  c->r[0]=c->r[3]+0x00000001u; // 800F69D8
  W8(c->r[31]+0x00000038u,c->r[0]); // 800F69DC
  c->lr=0x800F69E4u; f_800F5CB0(c); // 800F69E0
L_800F69E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F69E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F69E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F69EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F69F0
  c->lr=c->r[0]; // 800F69F4
  c->r[1]=c->r[1]+0x00000020u; // 800F69F8
  return; // 800F69FC
}

// UUSB_Register
void f_800F6A00(Ctx* __restrict c) {
  trace_call(0x800F6A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6A00
  c->r[0]=c->lr; // 800F6A04
  c->r[4]=0u+0x00000000u; // 800F6A08
  c->r[5]=0u+0x0000004Cu; // 800F6A0C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6A10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6A14
  c->r[31]=c->r[3]|c->r[3]; // 800F6A18
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F6A1C
  c->r[30]=0u+0x803C0000u; // 800F6A20
  c->r[3]=c->r[30]+0x00006480u; // 800F6A24
  c->lr=0x800F6A2Cu; f_80004714(c); // 800F6A28
  c->lr=0x800F6A30u; f_800F5CE0(c); // 800F6A2C
  c->r[30]=c->r[30]+0x00006480u; // 800F6A30
  c->r[0]=0u+0x00000005u; // 800F6A34
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F6A38
  c->lr=0x800F6A40u; f_800F5CB0(c); // 800F6A3C
  c->r[0]=R8(c->r[13]+0xFFFFA0D1u); // 800F6A40
  cmps(c,0,(int32_t)c->r[0],0); // 800F6A44
  if (!crb(c,2)) { goto L_800F6A5C; } // 800F6A48
  c->r[3]=0u+0x00000000u; // 800F6A4C
  c->r[0]=0u+0x00000001u; // 800F6A50
  W8(c->r[30]+0x00000028u,c->r[3]); // 800F6A54
  W8(c->r[13]+0xFFFFA0D1u,c->r[0]); // 800F6A58
L_800F6A5C:;
  c->lr=0x800F6A60u; f_800D4B70(c); // 800F6A5C
  cmps(c,0,(int32_t)c->r[3],0); // 800F6A60
  if (!crb(c,2)) { goto L_800F6BF0; } // 800F6A64
  c->lr=0x800F6A6Cu; f_80121970(c); // 800F6A68
  cmps(c,0,(int32_t)c->r[3],0); // 800F6A6C
  if (!crb(c,2)) { goto L_800F6BF0; } // 800F6A70
  c->r[0]=R8(c->r[13]+0xFFFFA0DCu); // 800F6A74
  c->r[4]=0u+0x803C0000u; // 800F6A78
  c->r[4]=c->r[4]+0x00006480u; // 800F6A7C
  cmpu(c,0,c->r[0],0x00000001u); // 800F6A80
  W32(c->r[4]+0x00000024u,c->r[31]); // 800F6A84
  if (!crb(c,2)) { goto L_800F6AA0; } // 800F6A88
  c->r[3]=R32(c->r[13]+0xFFFFA0E0u); // 800F6A8C
  c->r[0]=R32(c->r[13]+0xFFFFA0E4u); // 800F6A90
  W32(c->r[4]+0x00000014u,c->r[3]); // 800F6A94
  W32(c->r[4]+0x00000018u,c->r[0]); // 800F6A98
  goto L_800F6AB0; // 800F6A9C
L_800F6AA0:;
  c->r[3]=0u+0x0000057Eu; // 800F6AA0
  c->r[0]=0u+0x00000305u; // 800F6AA4
  W32(c->r[4]+0x00000014u,c->r[3]); // 800F6AA8
  W32(c->r[4]+0x00000018u,c->r[0]); // 800F6AAC
L_800F6AB0:;
  c->r[0]=R32(c->r[13]+0xFFFFA0D8u); // 800F6AB0
  c->r[6]=0u+0x803C0000u; // 800F6AB4
  c->r[6]=c->r[6]+0x00006480u; // 800F6AB8
  c->r[3]=0u+0x00000000u; // 800F6ABC
  cmpu(c,0,c->r[0],0x00000001u); // 800F6AC0
  W8(c->r[6]+0x00000010u,c->r[3]); // 800F6AC4
  c->r[5]=R32(c->r[6]+0x00000018u); // 800F6AC8
  W8(c->r[6]+0x00000011u,c->r[3]); // 800F6ACC
  c->r[0]=R32(c->r[6]+0x00000014u); // 800F6AD0
  W8(c->r[6]+0x00000012u,c->r[3]); // 800F6AD4
  W8(c->r[6]+0x00000013u,c->r[3]); // 800F6AD8
  if (!crb(c,2)) { goto L_800F6B24; } // 800F6ADC
  c->r[3]=R32(c->r[13]+0xFFFFA0D4u); // 800F6AE0
  cmps(c,0,(int32_t)c->r[3],0); // 800F6AE4
  if (!crb(c,2)) { goto L_800F6B04; } // 800F6AE8
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6AEC
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800F6AF0
  c->r[3]=c->r[13]+0xFFFF8760u; // 800F6AF4
  c->lr=0x800F6AFCu; f_80121C20(c); // 800F6AF8
  c->r[30]=c->r[3]|c->r[3]; // 800F6AFC
  goto L_800F6B38; // 800F6B00
L_800F6B04:;
  cmpu(c,0,c->r[3],0x00000001u); // 800F6B04
  if (!crb(c,2)) { goto L_800F6B38; } // 800F6B08
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6B0C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800F6B10
  c->r[3]=c->r[13]+0xFFFF8764u; // 800F6B14
  c->lr=0x800F6B1Cu; f_80121C20(c); // 800F6B18
  c->r[30]=c->r[3]|c->r[3]; // 800F6B1C
  goto L_800F6B38; // 800F6B20
L_800F6B24:;
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F6B24
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800F6B28
  c->r[3]=c->r[13]+0xFFFF8764u; // 800F6B2C
  c->lr=0x800F6B34u; f_80121C20(c); // 800F6B30
  c->r[30]=c->r[3]|c->r[3]; // 800F6B34
L_800F6B38:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F6B38
  if (crb(c,0)) { goto L_800F6B44; } // 800F6B3C
  W32(c->r[13]+0xFFFF875Cu,c->r[30]); // 800F6B40
L_800F6B44:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F6B44
  if (crb(c,0)) { goto L_800F6BF0; } // 800F6B48
  c->r[30]=0u+0x803C0000u; // 800F6B4C
  c->r[3]=0u+0x00000002u; // 800F6B50
  c->r[30]=c->r[30]+0x00006480u; // 800F6B54
  c->r[4]=0u+0x00000082u; // 800F6B58
  c->r[0]=0u+0x00000081u; // 800F6B5C
  c->r[31]=0u+0x00000000u; // 800F6B60
  W8(c->r[30]+0x00000010u,c->r[3]); // 800F6B64
  c->r[3]=c->r[30]+0x0000002Cu; // 800F6B68
  W8(c->r[30]+0x00000011u,c->r[4]); // 800F6B6C
  W8(c->r[30]+0x00000012u,c->r[0]); // 800F6B70
  W8(c->r[30]+0x00000013u,c->r[31]); // 800F6B74
  c->lr=0x800F6B7Cu; f_800F4510(c); // 800F6B78
  W8(c->r[30]+0x00000038u,c->r[31]); // 800F6B7C
  c->r[3]=c->r[30]+0x0000003Cu; // 800F6B80
  c->lr=0x800F6B88u; f_800F4510(c); // 800F6B84
  W8(c->r[30]+0x00000048u,c->r[31]); // 800F6B88
  c->r[3]=0u+0x00000294u; // 800F6B8C
  c->r[4]=0u+0x0000002Du; // 800F6B90
  c->r[5]=0u+0x00000001u; // 800F6B94
  c->r[6]=0u+0x00000000u; // 800F6B98
  c->lr=0x800F6BA0u; f_800F5020(c); // 800F6B9C
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 800F6BA0
  c->r[3]=0u+0x00000708u; // 800F6BA4
  c->r[4]=0u+0x0000001Eu; // 800F6BA8
  c->r[5]=0u+0x00000001u; // 800F6BAC
  c->r[6]=0u+0x00000000u; // 800F6BB0
  c->lr=0x800F6BB8u; f_800F5020(c); // 800F6BB4
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 800F6BB8
  W8(c->r[30]+0x0000001Du,c->r[3]); // 800F6BBC
  cmpu(c,0,c->r[0],0x000000FFu); // 800F6BC0
  if (crb(c,2)) { goto L_800F6BF0; } // 800F6BC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F6BC8
  cmpu(c,0,c->r[0],0x000000FFu); // 800F6BCC
  if (!crb(c,2)) { goto L_800F6BD8; } // 800F6BD0
  goto L_800F6BF0; // 800F6BD4
L_800F6BD8:;
  c->lr=0x800F6BDCu; f_800F5CE0(c); // 800F6BD8
  c->r[0]=0u+0x00000004u; // 800F6BDC
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F6BE0
  c->lr=0x800F6BE8u; f_800F5CB0(c); // 800F6BE4
  c->r[0]=0u+0x00000001u; // 800F6BE8
  W32(c->r[13]+0xFFFF8758u,c->r[0]); // 800F6BEC
L_800F6BF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F6BF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F6BF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F6BF8
  c->lr=c->r[0]; // 800F6BFC
  c->r[1]=c->r[1]+0x00000010u; // 800F6C00
  return; // 800F6C04
  unimpl(c,0x800F6C08u,"00000000"); // 800F6C08
  unimpl(c,0x800F6C0Cu,"00000000"); // 800F6C0C
  f_800F6C10(c);
}

// UUSB_Open
void f_800F6C10(Ctx* __restrict c) {
  trace_call(0x800F6C10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6C10
  c->r[0]=c->lr; // 800F6C14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F6C18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F6C1C
  c->r[31]=0u+0x803C0000u; // 800F6C20
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F6C24
  c->r[30]=c->r[31]+0x00006480u; // 800F6C28
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F6C2C
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F6C30
  c->r[28]=c->r[4]|c->r[4]; // 800F6C34
  c->r[0]=R8(c->r[30]+0x00000029u); // 800F6C38
  cmpu(c,0,c->r[0],0x00000004u); // 800F6C3C
  if (!crb(c,2)) { goto L_800F6D7C; } // 800F6C40
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 800F6C44
  cmpu(c,0,c->r[0],0x000000FFu); // 800F6C48
  if (crb(c,2)) { goto L_800F6D7C; } // 800F6C4C
  c->r[0]=R8(c->r[30]+0x0000001Du); // 800F6C50
  cmpu(c,0,c->r[0],0x000000FFu); // 800F6C54
  if (!crb(c,2)) { goto L_800F6C60; } // 800F6C58
  goto L_800F6D7C; // 800F6C5C
L_800F6C60:;
  c->lr=0x800F6C64u; f_800F5CE0(c); // 800F6C60
  c->r[0]=0u+0x00000002u; // 800F6C64
  W32(c->r[30]+0x00000020u,c->r[28]); // 800F6C68
  W8(c->r[30]+0x00000029u,c->r[0]); // 800F6C6C
  c->lr=0x800F6C74u; f_800F5CB0(c); // 800F6C70
L_800F6C74:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 800F6C74
  c->lr=0x800F6C7Cu; f_800F46D0(c); // 800F6C78
  cmps(c,0,(int32_t)c->r[3],0); // 800F6C7C
  c->r[28]=c->r[3]|c->r[3]; // 800F6C80
  if (crb(c,2)) { IRQCHK(c); goto L_800F6C74; } // 800F6C84
  c->r[0]=0u+0x00001000u; // 800F6C88
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F6C8C
  c->r[0]=c->r[3]+0x00000027u; // 800F6C90
  c->r[4]=0u+0x00000000u; // 800F6C94
  W16(c->r[3]+0x00000002u,c->r[4]); // 800F6C98
  c->r[29]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F6C9C
  c->r[0]=c->r[3]+0x00000008u; // 800F6CA0
  c->r[0]=c->r[29]-c->r[0]; // 800F6CA4
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F6CA8
  c->lr=0x800F6CB0u; f_800F4930(c); // 800F6CAC
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F6CB0
  c->r[0]=R16(c->r[28]+0x00000004u); // 800F6CB4
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 800F6CB8
  c->r[7]=0u+0x800F0000u; // 800F6CBC
  c->r[3]=R32(c->r[31]+0x00006480u); // 800F6CC0
  c->r[6]=c->r[29]|c->r[29]; // 800F6CC4
  c->r[4]=R8(c->r[30]+0x00000012u); // 800F6CC8
  c->r[8]=c->r[28]|c->r[28]; // 800F6CCC
  c->r[5]=c->r[5]-c->r[0]; // 800F6CD0
  c->r[7]=c->r[7]+0x000064E0u; // 800F6CD4
  c->lr=0x800F6CDCu; f_80122560(c); // 800F6CD8
  cmps(c,0,(int32_t)c->r[3],0); // 800F6CDC
  if (crb(c,2)) { goto L_800F6CEC; } // 800F6CE0
  c->r[3]=c->r[28]|c->r[28]; // 800F6CE4
  c->lr=0x800F6CECu; f_800F47C0(c); // 800F6CE8
L_800F6CEC:;
  c->r[30]=0u+0x803C0000u; // 800F6CEC
  c->r[0]=0u+0x00000001u; // 800F6CF0
  c->r[31]=c->r[30]+0x00006480u; // 800F6CF4
  W8(c->r[31]+0x0000002Bu,c->r[0]); // 800F6CF8
L_800F6CFC:;
  c->r[3]=R8(c->r[31]+0x0000001Du); // 800F6CFC
  c->lr=0x800F6D04u; f_800F46D0(c); // 800F6D00
  cmps(c,0,(int32_t)c->r[3],0); // 800F6D04
  c->r[29]=c->r[3]|c->r[3]; // 800F6D08
  if (crb(c,2)) { IRQCHK(c); goto L_800F6CFC; } // 800F6D0C
  c->r[0]=0u+0x00001100u; // 800F6D10
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F6D14
  c->r[0]=c->r[3]+0x00000027u; // 800F6D18
  c->r[4]=0u+0x00000000u; // 800F6D1C
  W16(c->r[3]+0x00000002u,c->r[4]); // 800F6D20
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F6D24
  c->r[0]=c->r[3]+0x00000008u; // 800F6D28
  c->r[0]=c->r[28]-c->r[0]; // 800F6D2C
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F6D30
  c->lr=0x800F6D38u; f_800F4930(c); // 800F6D34
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800F6D38
  c->r[0]=R16(c->r[29]+0x00000004u); // 800F6D3C
  c->r[5]=c->r[3]+0xFFFFFFD8u; // 800F6D40
  c->r[7]=0u+0x800F0000u; // 800F6D44
  c->r[3]=R32(c->r[30]+0x00006480u); // 800F6D48
  c->r[6]=c->r[28]|c->r[28]; // 800F6D4C
  c->r[4]=R8(c->r[31]+0x00000011u); // 800F6D50
  c->r[8]=c->r[29]|c->r[29]; // 800F6D54
  c->r[5]=c->r[5]-c->r[0]; // 800F6D58
  c->r[7]=c->r[7]+0x00006690u; // 800F6D5C
  c->lr=0x800F6D64u; f_801225E0(c); // 800F6D60
  cmps(c,0,(int32_t)c->r[3],0); // 800F6D64
  if (crb(c,2)) { goto L_800F6D74; } // 800F6D68
  c->r[3]=c->r[29]|c->r[29]; // 800F6D6C
  c->lr=0x800F6D74u; f_800F47C0(c); // 800F6D70
L_800F6D74:;
  c->r[0]=0u+0x00000000u; // 800F6D74
  W32(c->r[13]+0xFFFF8758u,c->r[0]); // 800F6D78
L_800F6D7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F6D7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F6D80
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F6D84
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F6D88
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F6D8C
  c->lr=c->r[0]; // 800F6D90
  c->r[1]=c->r[1]+0x00000020u; // 800F6D94
  return; // 800F6D98
  unimpl(c,0x800F6D9Cu,"00000000"); // 800F6D9C
  f_800F6DA0(c);
}

// UUSB_Read
void f_800F6DA0(Ctx* __restrict c) {
  trace_call(0x800F6DA0u);
  c->r[3]=0u+0x00000000u; // 800F6DA0
  return; // 800F6DA4
  unimpl(c,0x800F6DA8u,"00000000"); // 800F6DA8
  unimpl(c,0x800F6DACu,"00000000"); // 800F6DAC
  f_800F6DB0(c);
}

// UUSB_Write
void f_800F6DB0(Ctx* __restrict c) {
  trace_call(0x800F6DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6DB0
  c->r[0]=c->lr; // 800F6DB4
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F6DB8
  c->r[11]=c->r[1]+0x00000030u; // 800F6DBC
  c->lr=0x800F6DC4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F6DC0
  c->r[29]=0u+0x803C0000u; // 800F6DC4
  c->r[25]=c->r[4]|c->r[4]; // 800F6DC8
  c->r[30]=c->r[29]+0x00006480u; // 800F6DCC
  c->r[31]=c->r[5]|c->r[5]; // 800F6DD0
  c->r[0]=R8(c->r[30]+0x00000029u); // 800F6DD4
  c->r[28]=0u+0x00000000u; // 800F6DD8
  cmpu(c,0,c->r[0],0x00000002u); // 800F6DDC
  if (crb(c,2)) { goto L_800F6DEC; } // 800F6DE0
  c->r[3]=0u+0x00000000u; // 800F6DE4
  goto L_800F6FA4; // 800F6DE8
L_800F6DEC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6DEC
  if (crb(c,2)) { goto L_800F6E00; } // 800F6DF0
  cmps(c,0,(int32_t)c->r[3],2); // 800F6DF4
  if (crb(c,2)) { goto L_800F6ED8; } // 800F6DF8
  goto L_800F6FA0; // 800F6DFC
L_800F6E00:;
  c->r[3]=R8(c->r[30]+0x0000001Cu); // 800F6E00
  c->lr=0x800F6E08u; f_800F46D0(c); // 800F6E04
  cmps(c,0,(int32_t)c->r[3],0); // 800F6E08
  c->r[26]=c->r[3]|c->r[3]; // 800F6E0C
  if (!crb(c,2)) { goto L_800F6E1C; } // 800F6E10
  c->r[3]=0u+0x00000000u; // 800F6E14
  goto L_800F6FA4; // 800F6E18
L_800F6E1C:;
  c->r[0]=c->r[3]+0x00000027u; // 800F6E1C
  W16(c->r[3]+0x00000002u,c->r[31]); // 800F6E20
  c->r[27]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F6E24
  c->r[4]=c->r[25]|c->r[25]; // 800F6E28
  c->r[0]=c->r[3]+0x00000008u; // 800F6E2C
  c->r[5]=c->r[31]|c->r[31]; // 800F6E30
  c->r[0]=c->r[27]-c->r[0]; // 800F6E34
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F6E38
  c->r[3]=c->r[27]|c->r[27]; // 800F6E3C
  c->lr=0x800F6E44u; f_800043C4(c); // 800F6E40
  c->r[0]=R8(c->r[30]+0x00000048u); // 800F6E44
  cmpu(c,0,c->r[0],0x00000005u); // 800F6E48
  if (!crb(c,0)) { goto L_800F6E90; } // 800F6E4C
  c->r[0]=R16(c->r[30]+0x00000044u); // 800F6E50
  cmps(c,0,(int32_t)c->r[0],0); // 800F6E54
  if (!crb(c,2)) { goto L_800F6E90; } // 800F6E58
  W32(c->r[1]+0x00000008u,c->r[26]); // 800F6E5C
  c->r[10]=0u+0x800F0000u; // 800F6E60
  c->r[8]=c->r[31]|c->r[31]; // 800F6E64
  c->r[9]=c->r[27]|c->r[27]; // 800F6E68
  c->r[3]=R32(c->r[29]+0x00006480u); // 800F6E6C
  c->r[10]=c->r[10]+0x00006830u; // 800F6E70
  c->r[4]=0u+0x00000020u; // 800F6E74
  c->r[5]=0u+0x00000000u; // 800F6E78
  c->r[6]=0u+0x00000000u; // 800F6E7C
  c->r[7]=0u+0x00000000u; // 800F6E80
  c->lr=0x800F6E88u; f_80122CD0(c); // 800F6E84
  c->r[28]=c->r[3]|c->r[3]; // 800F6E88
  goto L_800F6EAC; // 800F6E8C
L_800F6E90:;
  c->r[3]=0u+0x803C0000u; // 800F6E90
  c->r[4]=c->r[26]|c->r[26]; // 800F6E94
  c->r[3]=c->r[3]+0x00006480u; // 800F6E98
  c->r[3]=c->r[3]+0x0000003Cu; // 800F6E9C
  c->lr=0x800F6EA4u; f_800F4BF0(c); // 800F6EA0
  c->r[3]=0u+0x00000000u; // 800F6EA4
  goto L_800F6FA4; // 800F6EA8
L_800F6EAC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6EAC
  if (crb(c,2)) { goto L_800F6EC0; } // 800F6EB0
  c->r[3]=c->r[26]|c->r[26]; // 800F6EB4
  c->lr=0x800F6EBCu; f_800F47C0(c); // 800F6EB8
  goto L_800F6FA0; // 800F6EBC
L_800F6EC0:;
  c->lr=0x800F6EC4u; f_800F5CE0(c); // 800F6EC0
  c->r[3]=R8(c->r[30]+0x00000048u); // 800F6EC4
  c->r[0]=c->r[3]+0x00000001u; // 800F6EC8
  W8(c->r[30]+0x00000048u,c->r[0]); // 800F6ECC
  c->lr=0x800F6ED4u; f_800F5CB0(c); // 800F6ED0
  goto L_800F6FA0; // 800F6ED4
L_800F6ED8:;
  c->r[3]=R8(c->r[30]+0x0000001Du); // 800F6ED8
  c->lr=0x800F6EE0u; f_800F46D0(c); // 800F6EDC
  cmps(c,0,(int32_t)c->r[3],0); // 800F6EE0
  c->r[27]=c->r[3]|c->r[3]; // 800F6EE4
  if (!crb(c,2)) { goto L_800F6EF4; } // 800F6EE8
  c->r[3]=0u+0x00000000u; // 800F6EEC
  goto L_800F6FA4; // 800F6EF0
L_800F6EF4:;
  c->r[0]=c->r[3]+0x00000027u; // 800F6EF4
  W16(c->r[3]+0x00000002u,c->r[31]); // 800F6EF8
  c->r[28]=rotl(c->r[0],0)&0xFFFFFFE0u; // 800F6EFC
  c->r[4]=c->r[25]|c->r[25]; // 800F6F00
  c->r[0]=c->r[3]+0x00000008u; // 800F6F04
  c->r[5]=c->r[31]|c->r[31]; // 800F6F08
  c->r[0]=c->r[28]-c->r[0]; // 800F6F0C
  W16(c->r[3]+0x00000004u,c->r[0]); // 800F6F10
  c->r[3]=c->r[28]|c->r[28]; // 800F6F14
  c->lr=0x800F6F1Cu; f_800043C4(c); // 800F6F18
  c->r[0]=R8(c->r[30]+0x00000038u); // 800F6F1C
  cmpu(c,0,c->r[0],0x00000005u); // 800F6F20
  if (!crb(c,0)) { goto L_800F6F5C; } // 800F6F24
  c->r[0]=R16(c->r[30]+0x00000034u); // 800F6F28
  cmps(c,0,(int32_t)c->r[0],0); // 800F6F2C
  if (!crb(c,2)) { goto L_800F6F5C; } // 800F6F30
  c->r[7]=0u+0x800F0000u; // 800F6F34
  c->r[3]=R32(c->r[29]+0x00006480u); // 800F6F38
  c->r[4]=R8(c->r[30]+0x00000010u); // 800F6F3C
  c->r[5]=c->r[31]|c->r[31]; // 800F6F40
  c->r[6]=c->r[28]|c->r[28]; // 800F6F44
  c->r[8]=c->r[27]|c->r[27]; // 800F6F48
  c->r[7]=c->r[7]+0x00006920u; // 800F6F4C
  c->lr=0x800F6F54u; f_80122680(c); // 800F6F50
  c->r[28]=c->r[3]|c->r[3]; // 800F6F54
  goto L_800F6F78; // 800F6F58
L_800F6F5C:;
  c->r[3]=0u+0x803C0000u; // 800F6F5C
  c->r[4]=c->r[27]|c->r[27]; // 800F6F60
  c->r[3]=c->r[3]+0x00006480u; // 800F6F64
  c->r[3]=c->r[3]+0x0000002Cu; // 800F6F68
  c->lr=0x800F6F70u; f_800F4BF0(c); // 800F6F6C
  c->r[3]=0u+0x00000000u; // 800F6F70
  goto L_800F6FA4; // 800F6F74
L_800F6F78:;
  cmps(c,0,(int32_t)c->r[3],0); // 800F6F78
  if (crb(c,2)) { goto L_800F6F8C; } // 800F6F7C
  c->r[3]=c->r[27]|c->r[27]; // 800F6F80
  c->lr=0x800F6F88u; f_800F47C0(c); // 800F6F84
  goto L_800F6FA0; // 800F6F88
L_800F6F8C:;
  c->lr=0x800F6F90u; f_800F5CE0(c); // 800F6F8C
  c->r[3]=R8(c->r[30]+0x00000038u); // 800F6F90
  c->r[0]=c->r[3]+0x00000001u; // 800F6F94
  W8(c->r[30]+0x00000038u,c->r[0]); // 800F6F98
  c->lr=0x800F6FA0u; f_800F5CB0(c); // 800F6F9C
L_800F6FA0:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 800F6FA0
L_800F6FA4:;
  c->r[11]=c->r[1]+0x00000030u; // 800F6FA4
  c->lr=0x800F6FACu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F6FA8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F6FAC
  c->lr=c->r[0]; // 800F6FB0
  c->r[1]=c->r[1]+0x00000030u; // 800F6FB4
  return; // 800F6FB8
  unimpl(c,0x800F6FBCu,"00000000"); // 800F6FBC
  f_800F6FC0(c);
}

// UUSB_Close
void f_800F6FC0(Ctx* __restrict c) {
  trace_call(0x800F6FC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F6FC0
  c->r[0]=c->lr; // 800F6FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F6FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F6FCC
  c->lr=0x800F6FD4u; f_800F5CE0(c); // 800F6FD0
  c->r[3]=0u+0x803C0000u; // 800F6FD4
  c->r[0]=0u+0x00000000u; // 800F6FD8
  c->r[31]=c->r[3]+0x00006480u; // 800F6FDC
  W8(c->r[31]+0x00000029u,c->r[0]); // 800F6FE0
  c->lr=0x800F6FE8u; f_800F5CB0(c); // 800F6FE4
  c->r[0]=R16(c->r[31]+0x00000034u); // 800F6FE8
  cmps(c,0,(int32_t)c->r[0],0); // 800F6FEC
  if (crb(c,2)) { goto L_800F7010; } // 800F6FF0
  goto L_800F7004; // 800F6FF4
L_800F6FF8:;
  c->r[3]=c->r[31]+0x0000002Cu; // 800F6FF8
  c->lr=0x800F7000u; f_800F4E70(c); // 800F6FFC
  c->lr=0x800F7004u; f_800F47C0(c); // 800F7000
L_800F7004:;
  c->r[0]=R16(c->r[31]+0x00000034u); // 800F7004
  cmps(c,0,(int32_t)c->r[0],0); // 800F7008
  if (!crb(c,2)) { IRQCHK(c); goto L_800F6FF8; } // 800F700C
L_800F7010:;
  c->r[3]=0u+0x803C0000u; // 800F7010
  c->r[31]=c->r[3]+0x00006480u; // 800F7014
  c->r[0]=R16(c->r[31]+0x00000044u); // 800F7018
  cmps(c,0,(int32_t)c->r[0],0); // 800F701C
  if (crb(c,2)) { goto L_800F7040; } // 800F7020
  goto L_800F7034; // 800F7024
L_800F7028:;
  c->r[3]=c->r[31]+0x0000003Cu; // 800F7028
  c->lr=0x800F7030u; f_800F4E70(c); // 800F702C
  c->lr=0x800F7034u; f_800F47C0(c); // 800F7030
L_800F7034:;
  c->r[0]=R16(c->r[31]+0x00000044u); // 800F7034
  cmps(c,0,(int32_t)c->r[0],0); // 800F7038
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7028; } // 800F703C
L_800F7040:;
  c->r[3]=0u+0x803C0000u; // 800F7040
  c->r[4]=0u+0x800F0000u; // 800F7044
  c->r[3]=R32(c->r[3]+0x00006480u); // 800F7048
  c->r[4]=c->r[4]+0x00006440u; // 800F704C
  c->r[5]=0u+0x00000000u; // 800F7050
  c->lr=0x800F7058u; f_80121D70(c); // 800F7054
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7058
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F705C
  c->lr=c->r[0]; // 800F7060
  c->r[1]=c->r[1]+0x00000010u; // 800F7064
  return; // 800F7068
  unimpl(c,0x800F706Cu,"00000000"); // 800F706C
  f_800F7070(c);
}

// UUSB_Unregister
void f_800F7070(Ctx* __restrict c) {
  trace_call(0x800F7070u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7070
  c->r[0]=c->lr; // 800F7074
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7078
  c->lr=0x800F7080u; f_80121A70(c); // 800F707C
  c->lr=0x800F7084u; f_800F5CE0(c); // 800F7080
  c->r[3]=0u+0x803C0000u; // 800F7084
  c->r[0]=0u+0x00000000u; // 800F7088
  c->r[3]=c->r[3]+0x00006480u; // 800F708C
  c->r[4]=0u+0x00000005u; // 800F7090
  W8(c->r[3]+0x00000029u,c->r[4]); // 800F7094
  W8(c->r[3]+0x00000028u,c->r[0]); // 800F7098
  W8(c->r[13]+0xFFFFA0D1u,c->r[0]); // 800F709C
  c->lr=0x800F70A4u; f_800F5CB0(c); // 800F70A0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F70A4
  c->lr=c->r[0]; // 800F70A8
  c->r[1]=c->r[1]+0x00000010u; // 800F70AC
  return; // 800F70B0
  unimpl(c,0x800F70B4u,"00000000"); // 800F70B4
  unimpl(c,0x800F70B8u,"00000000"); // 800F70B8
  unimpl(c,0x800F70BCu,"00000000"); // 800F70BC
  f_800F70C0(c);
}

// bte_hcisu_send
void f_800F70C0(Ctx* __restrict c) {
  trace_call(0x800F70C0u);
  W16(c->r[3]+0x00000000u,c->r[4]); // 800F70C0
  c->r[4]=R32(c->r[13]+0xFFFFA0E8u); // 800F70C4
  cmps(c,0,(int32_t)c->r[4],0); // 800F70C8
  if (crb(c,2)) { goto L_800F70DC; } // 800F70CC
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 800F70D0
  c->ctr=c->r[12]; // 800F70D4
  if (true) { dispatch(c,c->ctr); return; } // 800F70D8
L_800F70DC:;
  f_800F47C0(c); return; // 800F70DC
}

// bte_hcisu_task
void f_800F70E0(Ctx* __restrict c) {
  trace_call(0x800F70E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F70E0
  c->r[0]=c->lr; // 800F70E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F70E8
  c->r[3]=R32(c->r[13]+0xFFFFA0E8u); // 800F70EC
  cmps(c,0,(int32_t)c->r[3],0); // 800F70F0
  if (crb(c,2)) { goto L_800F7134; } // 800F70F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F70F8
  cmps(c,0,(int32_t)c->r[12],0); // 800F70FC
  if (crb(c,2)) { goto L_800F7118; } // 800F7100
  c->r[3]=0u+0x00000002u; // 800F7104
  c->r[4]=0u+0x00000001u; // 800F7108
  c->r[5]=0u+0x00000800u; // 800F710C
  c->ctr=c->r[12]; // 800F7110
  if (true) { c->lr=0x800F7118u; dispatch(c,c->ctr); } // 800F7114
L_800F7118:;
  c->r[3]=R32(c->r[13]+0xFFFFA0E8u); // 800F7118
  c->r[12]=R32(c->r[3]+0x00000004u); // 800F711C
  cmps(c,0,(int32_t)c->r[12],0); // 800F7120
  if (crb(c,2)) { goto L_800F7134; } // 800F7124
  c->r[3]=R32(c->r[13]+0xFFFFA0ECu); // 800F7128
  c->ctr=c->r[12]; // 800F712C
  if (true) { c->lr=0x800F7134u; dispatch(c,c->ctr); } // 800F7130
L_800F7134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7134
  c->lr=c->r[0]; // 800F7138
  c->r[1]=c->r[1]+0x00000010u; // 800F713C
  return; // 800F7140
  unimpl(c,0x800F7144u,"00000000"); // 800F7144
  unimpl(c,0x800F7148u,"00000000"); // 800F7148
  unimpl(c,0x800F714Cu,"00000000"); // 800F714C
  f_800F7150(c);
}

// bte_hcisu_close
void f_800F7150(Ctx* __restrict c) {
  trace_call(0x800F7150u);
  c->r[3]=R32(c->r[13]+0xFFFFA0E8u); // 800F7150
  cmps(c,0,(int32_t)c->r[3],0); // 800F7154
  if (crb(c,2)) return; // 800F7158
  c->r[12]=R32(c->r[3]+0x00000008u); // 800F715C
  cmps(c,0,(int32_t)c->r[12],0); // 800F7160
  if (crb(c,2)) return; // 800F7164
  c->ctr=c->r[12]; // 800F7168
  if (true) { dispatch(c,c->ctr); return; } // 800F716C
  return; // 800F7170
  unimpl(c,0x800F7174u,"00000000"); // 800F7174
  unimpl(c,0x800F7178u,"00000000"); // 800F7178
  unimpl(c,0x800F717Cu,"00000000"); // 800F717C
  f_800F7180(c);
}

// bta_ci_hci_msg_handler
void f_800F7180(Ctx* __restrict c) {
  trace_call(0x800F7180u);
  c->r[5]=c->r[3]|c->r[3]; // 800F7180
  c->r[3]=0u+0x00000002u; // 800F7184
  c->r[4]=0u+0x00000000u; // 800F7188
  f_800F4980(c); return; // 800F718C
}

// BTE_InitStack
void f_800F7190(Ctx* __restrict c) {
  trace_call(0x800F7190u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7190
  c->r[0]=c->lr; // 800F7194
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7198
  c->lr=0x800F71A0u; f_80115D0C(c); // 800F719C
  c->lr=0x800F71A4u; f_80108FE4(c); // 800F71A0
  c->lr=0x800F71A8u; f_8010C8B8(c); // 800F71A4
  c->lr=0x800F71ACu; f_8010D33C(c); // 800F71A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F71AC
  c->lr=c->r[0]; // 800F71B0
  c->r[1]=c->r[1]+0x00000010u; // 800F71B4
  return; // 800F71B8
  unimpl(c,0x800F71BCu,"00000000"); // 800F71BC
  f_800F71C0(c);
}

// LogMsg
void f_800F71C0(Ctx* __restrict c) {
  trace_call(0x800F71C0u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F71C0
  c->r[0]=c->lr; // 800F71C4
  W32(c->r[1]+0x00000084u,c->r[0]); // 800F71C8
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 800F71CC
  if (!crb(c,6)) { goto L_800F71F4; } // 800F71D0
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[1]);} // 800F71D4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[2]);} // 800F71D8
  {uint32_t ea=c->r[1]+0x00000038u; WF64(ea,c->f[3]);} // 800F71DC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[4]);} // 800F71E0
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[5]);} // 800F71E4
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[6]);} // 800F71E8
  {uint32_t ea=c->r[1]+0x00000058u; WF64(ea,c->f[7]);} // 800F71EC
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[8]);} // 800F71F0
L_800F71F4:;
  c->r[11]=c->r[1]+0x00000088u; // 800F71F4
  c->r[0]=c->r[1]+0x00000008u; // 800F71F8
  c->r[12]=0u+0x02000000u; // 800F71FC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800F7200
  c->r[31]=0u+0x803D0000u; // 800F7204
  c->r[3]=c->r[1]+0x00000068u; // 800F7208
  W32(c->r[1]+0x00000010u,c->r[5]); // 800F720C
  c->r[5]=c->r[3]|c->r[3]; // 800F7210
  c->r[3]=c->r[31]+0xFFFF84E0u; // 800F7214
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800F7218
  W32(c->r[1]+0x00000014u,c->r[6]); // 800F721C
  W32(c->r[1]+0x00000018u,c->r[7]); // 800F7220
  W32(c->r[1]+0x0000001Cu,c->r[8]); // 800F7224
  W32(c->r[1]+0x00000020u,c->r[9]); // 800F7228
  W32(c->r[1]+0x00000024u,c->r[10]); // 800F722C
  W32(c->r[1]+0x00000068u,c->r[12]); // 800F7230
  W32(c->r[1]+0x0000006Cu,c->r[11]); // 800F7234
  W32(c->r[1]+0x00000070u,c->r[0]); // 800F7238
  c->lr=0x800F7240u; f_800B5E5C(c); // 800F723C
  c->r[3]=c->r[31]+0xFFFF84E0u; // 800F7240
  c->r[4]=c->r[13]+0xFFFF8798u; // 800F7244
  c->r[5]=c->r[3]|c->r[3]; // 800F7248
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F724C
  c->lr=0x800F7254u; f_800B5FD4(c); // 800F7250
  c->r[3]=c->r[31]+0xFFFF84E0u; // 800F7254
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F7258
  c->lr=0x800F7260u; f_8007C6D0(c); // 800F725C
  c->r[0]=R32(c->r[1]+0x00000084u); // 800F7260
  c->r[31]=R32(c->r[1]+0x0000007Cu); // 800F7264
  c->lr=c->r[0]; // 800F7268
  c->r[1]=c->r[1]+0x00000080u; // 800F726C
  return; // 800F7270
  unimpl(c,0x800F7274u,"00000000"); // 800F7274
  unimpl(c,0x800F7278u,"00000000"); // 800F7278
  unimpl(c,0x800F727Cu,"00000000"); // 800F727C
  f_800F7280(c);
}

// LogMsg_0
void f_800F7280(Ctx* __restrict c) {
  trace_call(0x800F7280u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F7280
  cmps(c,0,(int32_t)c->r[0],0); // 800F7284
  if (!crb(c,2)) return; // 800F7288
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F728C
  f_800F71C0(c); return; // 800F7290
  return; // 800F7294
  unimpl(c,0x800F7298u,"00000000"); // 800F7298
  unimpl(c,0x800F729Cu,"00000000"); // 800F729C
  f_800F72A0(c);
}

// LogMsg_1
void f_800F72A0(Ctx* __restrict c) {
  trace_call(0x800F72A0u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F72A0
  cmps(c,0,(int32_t)c->r[0],0); // 800F72A4
  if (!crb(c,2)) return; // 800F72A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F72AC
  f_800F71C0(c); return; // 800F72B0
  return; // 800F72B4
  unimpl(c,0x800F72B8u,"00000000"); // 800F72B8
  unimpl(c,0x800F72BCu,"00000000"); // 800F72BC
  f_800F72C0(c);
}

// LogMsg_2
void f_800F72C0(Ctx* __restrict c) {
  trace_call(0x800F72C0u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F72C0
  cmps(c,0,(int32_t)c->r[0],0); // 800F72C4
  if (!crb(c,2)) return; // 800F72C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F72CC
  f_800F71C0(c); return; // 800F72D0
  return; // 800F72D4
  unimpl(c,0x800F72D8u,"00000000"); // 800F72D8
  unimpl(c,0x800F72DCu,"00000000"); // 800F72DC
  f_800F72E0(c);
}

// LogMsg_3
void f_800F72E0(Ctx* __restrict c) {
  trace_call(0x800F72E0u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F72E0
  cmps(c,0,(int32_t)c->r[0],0); // 800F72E4
  if (!crb(c,2)) return; // 800F72E8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F72EC
  f_800F71C0(c); return; // 800F72F0
  return; // 800F72F4
  unimpl(c,0x800F72F8u,"00000000"); // 800F72F8
  unimpl(c,0x800F72FCu,"00000000"); // 800F72FC
  f_800F7300(c);
}

// LogMsg_4
void f_800F7300(Ctx* __restrict c) {
  trace_call(0x800F7300u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F7300
  cmps(c,0,(int32_t)c->r[0],0); // 800F7304
  if (!crb(c,2)) return; // 800F7308
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F730C
  f_800F71C0(c); return; // 800F7310
  return; // 800F7314
  unimpl(c,0x800F7318u,"00000000"); // 800F7318
  unimpl(c,0x800F731Cu,"00000000"); // 800F731C
  f_800F7320(c);
}

// LogMsg_5
void f_800F7320(Ctx* __restrict c) {
  trace_call(0x800F7320u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F7320
  cmps(c,0,(int32_t)c->r[0],0); // 800F7324
  if (!crb(c,2)) return; // 800F7328
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F732C
  f_800F71C0(c); return; // 800F7330
  return; // 800F7334
  unimpl(c,0x800F7338u,"00000000"); // 800F7338
  unimpl(c,0x800F733Cu,"00000000"); // 800F733C
  f_800F7340(c);
}

// LogMsg_6
void f_800F7340(Ctx* __restrict c) {
  trace_call(0x800F7340u);
  c->r[0]=R8(c->r[13]+0xFFFFA0F0u); // 800F7340
  cmps(c,0,(int32_t)c->r[0],0); // 800F7344
  if (!crb(c,2)) return; // 800F7348
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800F734C
  f_800F71C0(c); return; // 800F7350
  return; // 800F7354
  unimpl(c,0x800F7358u,"00000000"); // 800F7358
  unimpl(c,0x800F735Cu,"00000000"); // 800F735C
  f_800F7360(c);
}

// fn_800F7360
void f_800F7360(Ctx* __restrict c) {
  trace_call(0x800F7360u);
  c->r[4]=0u+0x803D0000u; // 800F7360
  c->r[3]=0u+0x800F0000u; // 800F7364
  c->r[4]=c->r[4]+0xFFFF8CC0u; // 800F7368
  c->r[3]=c->r[3]+0x00007510u; // 800F736C
  c->r[4]=c->r[4]+0x00001000u; // 800F7370
  f_8007C250(c); return; // 800F7374
  unimpl(c,0x800F7378u,"00000000"); // 800F7378
  unimpl(c,0x800F737Cu,"00000000"); // 800F737C
  f_800F7380(c);
}

// BTA_Init
void f_800F7380(Ctx* __restrict c) {
  trace_call(0x800F7380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7380
  c->r[0]=c->lr; // 800F7384
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7388
  c->r[0]=0u+0x00000000u; // 800F738C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7390
  W32(c->r[13]+0xFFFFA0F4u,c->r[0]); // 800F7394
  c->lr=0x800F739Cu; f_800F5A70(c); // 800F7398
  c->lr=0x800F73A0u; f_800F5CB0(c); // 800F739C
  c->lr=0x800F73A4u; f_80108EB8(c); // 800F73A0
  c->r[3]=0u+0x802D0000u; // 800F73A4
  c->r[0]=c->r[13]+0xFFFF87A0u; // 800F73A8
  c->r[3]=c->r[3]+0xFFFF97F8u; // 800F73AC
  W32(c->r[13]+0xFFFFA0E8u,c->r[3]); // 800F73B0
  c->r[3]=0u+0x00000000u; // 800F73B4
  W32(c->r[13]+0xFFFFA0ECu,c->r[0]); // 800F73B8
  c->lr=0x800F73C0u; f_800F70E0(c); // 800F73BC
  goto L_800F73CC; // 800F73C0
L_800F73C4:;
  c->r[3]=0u+0x00000064u; // 800F73C4
  c->lr=0x800F73CCu; f_800F5BE0(c); // 800F73C8
L_800F73CC:;
  c->r[0]=R32(c->r[13]+0xFFFF8758u); // 800F73CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F73D0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F73C4; } // 800F73D4
  c->lr=0x800F73DCu; f_800F74D0(c); // 800F73D8
  c->r[31]=0u+0x803D0000u; // 800F73DC
  c->r[3]=c->r[31]+0xFFFF9CC0u; // 800F73E0
  c->lr=0x800F73E8u; f_8007A8C0(c); // 800F73E4
  c->lr=0x800F73ECu; f_80084380(c); // 800F73E8
  c->r[5]=0u+0x80000000u; // 800F73EC
  c->r[9]=0u+0x800F0000u; // 800F73F0
  c->r[0]=R32(c->r[5]+0x000000F8u); // 800F73F4
  c->r[6]=0u+0x10620000u; // 800F73F8
  c->r[5]=c->r[3]|c->r[3]; // 800F73FC
  c->r[9]=c->r[9]+0x00007360u; // 800F7400
  c->r[3]=c->r[6]+0x00004DD3u; // 800F7404
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 800F7408
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 800F740C
  c->r[6]=c->r[4]|c->r[4]; // 800F7410
  c->r[3]=c->r[31]+0xFFFF9CC0u; // 800F7414
  c->r[7]=0u+0x00000000u; // 800F7418
  c->r[8]=rotl(c->r[0],27)&0x07FFFFFEu; // 800F741C
  c->lr=0x800F7424u; f_8007AB90(c); // 800F7420
  c->r[3]=0u+0x00000000u; // 800F7424
  c->lr=0x800F742Cu; f_800F5BB0(c); // 800F7428
  goto L_800F7438; // 800F742C
L_800F7430:;
  c->r[3]=0u+0x000007D0u; // 800F7430
  c->lr=0x800F7438u; f_800F5BE0(c); // 800F7434
L_800F7438:;
  c->lr=0x800F743Cu; f_800FA4A0(c); // 800F7438
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F743C
  if (crb(c,2)) { IRQCHK(c); goto L_800F7430; } // 800F7440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7444
  c->r[3]=0u+0x00000000u; // 800F7448
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F744C
  c->lr=c->r[0]; // 800F7450
  c->r[1]=c->r[1]+0x00000010u; // 800F7454
  return; // 800F7458
  unimpl(c,0x800F745Cu,"00000000"); // 800F745C
  f_800F7460(c);
}

// BTA_CleanUp
void f_800F7460(Ctx* __restrict c) {
  trace_call(0x800F7460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7460
  c->r[0]=c->lr; // 800F7464
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7468
  W32(c->r[13]+0xFFFFA0F4u,c->r[3]); // 800F746C
  c->r[3]=0u+0x803D0000u; // 800F7470
  c->r[3]=c->r[3]+0xFFFF9CC0u; // 800F7474
  c->lr=0x800F747Cu; f_8007AC20(c); // 800F7478
  c->lr=0x800F7480u; f_800F7150(c); // 800F747C
  c->lr=0x800F7484u; f_800F5B00(c); // 800F7480
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7484
  c->lr=c->r[0]; // 800F7488
  c->r[1]=c->r[1]+0x00000010u; // 800F748C
  return; // 800F7490
  unimpl(c,0x800F7494u,"00000000"); // 800F7494
  unimpl(c,0x800F7498u,"00000000"); // 800F7498
  unimpl(c,0x800F749Cu,"00000000"); // 800F749C
  f_800F74A0(c);
}

// bta_usb_close_evt
void f_800F74A0(Ctx* __restrict c) {
  trace_call(0x800F74A0u);
  c->r[12]=R32(c->r[13]+0xFFFFA0F4u); // 800F74A0
  cmps(c,0,(int32_t)c->r[12],0); // 800F74A4
  if (crb(c,2)) return; // 800F74A8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; cr0(c,c->r[0]); // 800F74AC
  if (crb(c,0)) { goto L_800F74C0; } // 800F74B0
  c->r[3]=0u+0x00000000u; // 800F74B4
  c->ctr=c->r[12]; // 800F74B8
  if (true) { dispatch(c,c->ctr); return; } // 800F74BC
L_800F74C0:;
  c->r[3]=0u+0x00000001u; // 800F74C0
  c->ctr=c->r[12]; // 800F74C4
  if (true) { dispatch(c,c->ctr); return; } // 800F74C8
  return; // 800F74CC
}

// btu_task_init
void f_800F74D0(Ctx* __restrict c) {
  trace_call(0x800F74D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F74D0
  c->r[0]=c->lr; // 800F74D4
  c->r[3]=0u+0x00000001u; // 800F74D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F74DC
  c->r[0]=0u+0x00000000u; // 800F74E0
  W8(c->r[13]+0xFFFF87A8u,c->r[3]); // 800F74E4
  W32(c->r[13]+0xFFFF87ACu,c->r[3]); // 800F74E8
  W32(c->r[13]+0xFFFFA0F8u,c->r[0]); // 800F74EC
  W32(c->r[13]+0xFFFFA0FCu,c->r[0]); // 800F74F0
  c->lr=0x800F74F8u; f_80108E8C(c); // 800F74F4
  c->lr=0x800F74FCu; f_800F7190(c); // 800F74F8
  c->lr=0x800F7500u; f_800F7C3C(c); // 800F74FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7500
  c->lr=c->r[0]; // 800F7504
  c->r[1]=c->r[1]+0x00000010u; // 800F7508
  return; // 800F750C
}

// btu_task_msg_handler
void f_800F7510(Ctx* __restrict c) {
  trace_call(0x800F7510u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7510
  c->r[0]=c->lr; // 800F7514
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7518
  c->r[11]=c->r[1]+0x00000020u; // 800F751C
  c->lr=0x800F7524u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F7520
  c->r[30]=0u+0x00000000u; // 800F7524
  c->lr=0x800F752Cu; f_80084380(c); // 800F7528
  c->r[3]=R32(c->r[13]+0xFFFFA0F8u); // 800F752C
  c->r[0]=c->r[3]+0x00000001u; // 800F7530
  W32(c->r[13]+0xFFFFA0F8u,c->r[0]); // 800F7534
  c->lr=0x800F753Cu; f_800F5CE0(c); // 800F7538
  c->r[0]=R32(c->r[13]+0xFFFF87ACu); // 800F753C
  cmps(c,0,(int32_t)c->r[0],0); // 800F7540
  if (crb(c,2)) { goto L_800F755C; } // 800F7544
  c->r[3]=0u+0x00000000u; // 800F7548
  c->r[0]=0u+0x00000001u; // 800F754C
  W32(c->r[13]+0xFFFF87ACu,c->r[3]); // 800F7550
  W8(c->r[13]+0xFFFF87A8u,c->r[0]); // 800F7554
  goto L_800F7570; // 800F7558
L_800F755C:;
  c->r[3]=R8(c->r[13]+0xFFFF87A8u); // 800F755C
  c->r[0]=c->r[3]+0x00000001u; // 800F7560
  W8(c->r[13]+0xFFFF87A8u,c->r[0]); // 800F7564
  c->lr=0x800F756Cu; f_800F5CB0(c); // 800F7568
  goto L_800F7874; // 800F756C
L_800F7570:;
  c->lr=0x800F7574u; f_800F5CB0(c); // 800F7570
  c->r[3]=R32(c->r[13]+0xFFFFA0FCu); // 800F7574
  c->r[31]=0u+0x00000005u; // 800F7578
  c->r[4]=R32(c->r[13]+0xFFFFA0F8u); // 800F757C
  c->r[0]=c->r[3]+0x000001F4u; // 800F7580
  cmpu(c,0,c->r[4],c->r[0]); // 800F7584
  if (!crb(c,1)) { goto L_800F7594; } // 800F7588
  W32(c->r[13]+0xFFFFA0FCu,c->r[4]); // 800F758C
  c->r[31]=c->r[31]|0x00000030u; // 800F7590
L_800F7594:;
  c->r[3]=0u+0x803D0000u; // 800F7594
  c->r[29]=c->r[3]+0xFFFF9CF0u; // 800F7598
  goto L_800F7864; // 800F759C
L_800F75A0:;
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 800F75A0
  c->r[30]=0u+0x00000001u; // 800F75A4
  if (crb(c,2)) { goto L_800F76A8; } // 800F75A8
  goto L_800F7694; // 800F75AC
L_800F75B0:;
  c->r[0]=R16(c->r[3]+0x00000000u); // 800F75B0
  c->r[30]=0u+0x00000000u; // 800F75B4
  c->r[28]=rotl(c->r[0],0)&0x0000FF00u; // 800F75B8
  cmps(c,0,(int32_t)c->r[28],4352); // 800F75BC
  if (crb(c,2)) { goto L_800F75E8; } // 800F75C0
  cmps(c,0,(int32_t)c->r[28],6400); // 800F75C4
  if (crb(c,2)) { goto L_800F75F4; } // 800F75C8
  cmps(c,0,(int32_t)c->r[28],4608); // 800F75CC
  if (crb(c,2)) { goto L_800F7600; } // 800F75D0
  cmps(c,0,(int32_t)c->r[28],4096); // 800F75D4
  if (crb(c,2)) { goto L_800F760C; } // 800F75D8
  cmps(c,0,(int32_t)c->r[28],5632); // 800F75DC
  if (crb(c,2)) { goto L_800F7620; } // 800F75E0
  goto L_800F762C; // 800F75E4
L_800F75E8:;
  c->r[3]=c->r[27]|c->r[27]; // 800F75E8
  c->lr=0x800F75F0u; f_80112F2C(c); // 800F75EC
  goto L_800F7694; // 800F75F0
L_800F75F4:;
  c->r[3]=c->r[27]|c->r[27]; // 800F75F4
  c->lr=0x800F75FCu; f_80112CF8(c); // 800F75F8
  goto L_800F7694; // 800F75FC
L_800F7600:;
  c->r[3]=c->r[27]|c->r[27]; // 800F7600
  c->lr=0x800F7608u; f_80104864(c); // 800F7604
  goto L_800F7694; // 800F7608
L_800F760C:;
  c->r[3]=c->r[27]|c->r[27]; // 800F760C
  c->lr=0x800F7614u; f_80107C30(c); // 800F7610
  c->r[3]=c->r[27]|c->r[27]; // 800F7614
  c->lr=0x800F761Cu; f_800F47C0(c); // 800F7618
  goto L_800F7694; // 800F761C
L_800F7620:;
  c->r[3]=c->r[27]|c->r[27]; // 800F7620
  c->lr=0x800F7628u; f_801081E8(c); // 800F7624
  goto L_800F7694; // 800F7628
L_800F762C:;
  c->r[26]=0u+0x00000000u; // 800F762C
  c->r[4]=0u+0x00000000u; // 800F7630
  goto L_800F7670; // 800F7634
L_800F7638:;
  c->r[0]=rotl(c->r[26],3)&0x000007F8u; // 800F7638
  c->r[3]=c->r[29]+c->r[0]; // 800F763C
  c->r[12]=R32(c->r[3]+0x00000014u); // 800F7640
  cmps(c,1,(int32_t)c->r[12],0); // 800F7644
  if (crb(c,6)) { goto L_800F766C; } // 800F7648
  c->r[0]=R16(c->r[3]+0x00000010u); // 800F764C
  cmpu(c,0,c->r[28],c->r[0]); // 800F7650
  if (!crb(c,2)) { goto L_800F766C; } // 800F7654
  if (crb(c,6)) { goto L_800F766C; } // 800F7658
  c->r[3]=c->r[27]|c->r[27]; // 800F765C
  c->ctr=c->r[12]; // 800F7660
  if (true) { c->lr=0x800F7668u; dispatch(c,c->ctr); } // 800F7664
  c->r[4]=0u+0x00000001u; // 800F7668
L_800F766C:;
  c->r[26]=c->r[26]+0x00000001u; // 800F766C
L_800F7670:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F7670
  if (!crb(c,2)) { goto L_800F7684; } // 800F7674
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 800F7678
  cmpu(c,0,c->r[0],0x00000006u); // 800F767C
  if (crb(c,0)) { IRQCHK(c); goto L_800F7638; } // 800F7680
L_800F7684:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F7684
  if (!crb(c,2)) { goto L_800F7694; } // 800F7688
  c->r[3]=c->r[27]|c->r[27]; // 800F768C
  c->lr=0x800F7694u; f_800F47C0(c); // 800F7690
L_800F7694:;
  c->r[3]=0u+0x00000000u; // 800F7694
  c->lr=0x800F769Cu; f_800F4B40(c); // 800F7698
  cmps(c,0,(int32_t)c->r[3],0); // 800F769C
  c->r[27]=c->r[3]|c->r[3]; // 800F76A0
  if (!crb(c,2)) { IRQCHK(c); goto L_800F75B0; } // 800F76A4
L_800F76A8:;
  c->r[0]=rotl(c->r[31],0)&0x00000010u; cr0(c,c->r[0]); // 800F76A8
  if (crb(c,2)) { goto L_800F7824; } // 800F76AC
  c->r[3]=c->r[29]+0x00000040u; // 800F76B0
  c->r[4]=0u+0x00000001u; // 800F76B4
  c->lr=0x800F76BCu; f_800F57C0(c); // 800F76B8
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFEFu; // 800F76BC
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 800F76C0
  goto L_800F780C; // 800F76C4
L_800F76C8:;
  c->r[4]=c->r[28]|c->r[28]; // 800F76C8
  c->r[3]=c->r[29]+0x00000040u; // 800F76CC
  c->r[30]=0u+0x00000000u; // 800F76D0
  c->lr=0x800F76D8u; f_800F5940(c); // 800F76D4
  c->r[0]=R16(c->r[28]+0x00000014u); // 800F76D8
  cmps(c,0,(int32_t)c->r[0],10); // 800F76DC
  if (crb(c,2)) { goto L_800F7774; } // 800F76E0
  if (!crb(c,0)) { goto L_800F7714; } // 800F76E4
  cmps(c,0,(int32_t)c->r[0],5); // 800F76E8
  if (crb(c,2)) { goto L_800F7768; } // 800F76EC
  if (!crb(c,0)) { goto L_800F7704; } // 800F76F0
  cmps(c,0,(int32_t)c->r[0],1); // 800F76F4
  if (crb(c,2)) { goto L_800F7744; } // 800F76F8
  if (!crb(c,0)) { goto L_800F775C; } // 800F76FC
  goto L_800F77B8; // 800F7700
L_800F7704:;
  cmps(c,0,(int32_t)c->r[0],8); // 800F7704
  if (crb(c,2)) { goto L_800F777C; } // 800F7708
  if (!crb(c,0)) { goto L_800F7750; } // 800F770C
  goto L_800F77B8; // 800F7710
L_800F7714:;
  cmps(c,0,(int32_t)c->r[0],60); // 800F7714
  if (crb(c,2)) { goto L_800F7790; } // 800F7718
  if (!crb(c,0)) { goto L_800F7738; } // 800F771C
  cmps(c,0,(int32_t)c->r[0],22); // 800F7720
  if (crb(c,2)) { goto L_800F77A4; } // 800F7724
  if (!crb(c,0)) { goto L_800F77B8; } // 800F7728
  cmps(c,0,(int32_t)c->r[0],13); // 800F772C
  if (!crb(c,0)) { goto L_800F77B8; } // 800F7730
  goto L_800F7784; // 800F7734
L_800F7738:;
  cmps(c,0,(int32_t)c->r[0],66); // 800F7738
  if (crb(c,2)) { goto L_800F7798; } // 800F773C
  goto L_800F77B8; // 800F7740
L_800F7744:;
  c->r[3]=c->r[28]|c->r[28]; // 800F7744
  c->lr=0x800F774Cu; f_800FFF90(c); // 800F7748
  goto L_800F780C; // 800F774C
L_800F7750:;
  c->r[3]=c->r[28]|c->r[28]; // 800F7750
  c->lr=0x800F7758u; f_800FEA84(c); // 800F7754
  goto L_800F780C; // 800F7758
L_800F775C:;
  c->r[3]=c->r[28]|c->r[28]; // 800F775C
  c->lr=0x800F7764u; f_80113CCC(c); // 800F7760
  goto L_800F780C; // 800F7764
L_800F7768:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 800F7768
  c->lr=0x800F7770u; f_8011FA2C(c); // 800F776C
  goto L_800F780C; // 800F7770
L_800F7774:;
  c->lr=0x800F7778u; f_80103104(c); // 800F7774
  goto L_800F780C; // 800F7778
L_800F777C:;
  c->lr=0x800F7780u; f_801016A8(c); // 800F777C
  goto L_800F780C; // 800F7780
L_800F7784:;
  c->r[3]=c->r[28]|c->r[28]; // 800F7784
  c->lr=0x800F778Cu; f_8011BE88(c); // 800F7788
  goto L_800F780C; // 800F778C
L_800F7790:;
  c->lr=0x800F7794u; f_80108C54(c); // 800F7790
  goto L_800F780C; // 800F7794
L_800F7798:;
  c->r[3]=c->r[28]|c->r[28]; // 800F7798
  c->lr=0x800F77A0u; f_8010E128(c); // 800F779C
  goto L_800F780C; // 800F77A0
L_800F77A4:;
  c->r[12]=R32(c->r[28]+0x00000010u); // 800F77A4
  c->r[3]=c->r[28]|c->r[28]; // 800F77A8
  c->ctr=c->r[12]; // 800F77AC
  if (true) { c->lr=0x800F77B4u; dispatch(c,c->ctr); } // 800F77B0
  goto L_800F780C; // 800F77B4
L_800F77B8:;
  c->r[27]=0u+0x00000000u; // 800F77B8
  c->r[4]=0u+0x00000000u; // 800F77BC
  goto L_800F77F8; // 800F77C0
L_800F77C4:;
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 800F77C4
  c->r[3]=c->r[29]+c->r[0]; // 800F77C8
  c->r[12]=R32(c->r[3]+0x00000004u); // 800F77CC
  cmps(c,0,(int32_t)c->r[12],0); // 800F77D0
  if (crb(c,2)) { goto L_800F77F4; } // 800F77D4
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F77D8
  cmpu(c,0,c->r[0],c->r[28]); // 800F77DC
  if (!crb(c,2)) { goto L_800F77F4; } // 800F77E0
  c->r[3]=c->r[28]|c->r[28]; // 800F77E4
  c->ctr=c->r[12]; // 800F77E8
  if (true) { c->lr=0x800F77F0u; dispatch(c,c->ctr); } // 800F77EC
  c->r[4]=0u+0x00000001u; // 800F77F0
L_800F77F4:;
  c->r[27]=c->r[27]+0x00000001u; // 800F77F4
L_800F77F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 800F77F8
  if (!crb(c,2)) { goto L_800F780C; } // 800F77FC
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800F7800
  cmpu(c,0,c->r[0],0x00000002u); // 800F7804
  if (crb(c,0)) { IRQCHK(c); goto L_800F77C4; } // 800F7808
L_800F780C:;
  c->r[28]=R32(c->r[29]+0x00000040u); // 800F780C
  cmps(c,0,(int32_t)c->r[28],0); // 800F7810
  if (crb(c,2)) { goto L_800F7824; } // 800F7814
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800F7818
  cmps(c,0,(int32_t)c->r[0],0); // 800F781C
  if (crb(c,2)) { IRQCHK(c); goto L_800F76C8; } // 800F7820
L_800F7824:;
  c->r[0]=rotl(c->r[31],0)&0x00000004u; cr0(c,c->r[0]); // 800F7824
  if (crb(c,2)) { goto L_800F7848; } // 800F7828
  goto L_800F7838; // 800F782C
L_800F7830:;
  c->r[30]=0u+0x00000000u; // 800F7830
  c->lr=0x800F7838u; f_800F7CA0(c); // 800F7834
L_800F7838:;
  c->r[3]=0u+0x00000002u; // 800F7838
  c->lr=0x800F7840u; f_800F4B40(c); // 800F783C
  cmps(c,0,(int32_t)c->r[3],0); // 800F7840
  if (!crb(c,2)) { IRQCHK(c); goto L_800F7830; } // 800F7844
L_800F7848:;
  c->r[0]=rotl(c->r[31],0)&0x00000020u; cr0(c,c->r[0]); // 800F7848
  if (crb(c,2)) { goto L_800F785C; } // 800F784C
  c->r[0]=rotl(c->r[31],0)&0xFFFFFFDFu; // 800F7850
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 800F7854
  c->lr=0x800F785Cu; f_800F7D8C(c); // 800F7858
L_800F785C:;
  c->r[0]=rotl(c->r[31],0)&0x00008000u; cr0(c,c->r[0]); // 800F785C
  if (!crb(c,2)) { goto L_800F786C; } // 800F7860
L_800F7864:;
  cmps(c,0,(int32_t)c->r[30],0); // 800F7864
  if (crb(c,2)) { IRQCHK(c); goto L_800F75A0; } // 800F7868
L_800F786C:;
  c->r[0]=0u+0x00000001u; // 800F786C
  W32(c->r[13]+0xFFFF87ACu,c->r[0]); // 800F7870
L_800F7874:;
  c->r[11]=c->r[1]+0x00000020u; // 800F7874
  c->lr=0x800F787Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F7878
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F787C
  c->lr=c->r[0]; // 800F7880
  c->r[1]=c->r[1]+0x00000020u; // 800F7884
  return; // 800F7888
  unimpl(c,0x800F788Cu,"00000000"); // 800F788C
  f_800F7890(c);
}

// btu_start_timer
void f_800F7890(Ctx* __restrict c) {
  trace_call(0x800F7890u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7890
  c->r[0]=c->lr; // 800F7894
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7898
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F789C
  c->r[31]=0u+0x803D0000u; // 800F78A0
  c->r[31]=c->r[31]+0xFFFF9CF0u; // 800F78A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F78A8
  c->r[30]=c->r[5]|c->r[5]; // 800F78AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F78B0
  c->r[29]=c->r[4]|c->r[4]; // 800F78B4
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F78B8
  c->r[28]=c->r[3]|c->r[3]; // 800F78BC
  c->r[4]=c->r[28]|c->r[28]; // 800F78C0
  c->r[3]=c->r[31]+0x00000040u; // 800F78C4
  c->lr=0x800F78CCu; f_800F5940(c); // 800F78C8
  W16(c->r[28]+0x00000014u,c->r[29]); // 800F78CC
  c->r[4]=c->r[28]|c->r[28]; // 800F78D0
  c->r[3]=c->r[31]+0x00000040u; // 800F78D4
  W32(c->r[28]+0x0000000Cu,c->r[30]); // 800F78D8
  c->lr=0x800F78E0u; f_800F5850(c); // 800F78DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F78E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F78E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F78E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F78EC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F78F0
  c->lr=c->r[0]; // 800F78F4
  c->r[1]=c->r[1]+0x00000020u; // 800F78F8
  return; // 800F78FC
}

// btu_stop_timer
void f_800F7900(Ctx* __restrict c) {
  trace_call(0x800F7900u);
  c->r[5]=0u+0x803D0000u; // 800F7900
  c->r[4]=c->r[3]|c->r[3]; // 800F7904
  c->r[5]=c->r[5]+0xFFFF9CF0u; // 800F7908
  c->r[3]=c->r[5]+0x00000040u; // 800F790C
  f_800F5940(c); return; // 800F7910
}

// bdcpy
void f_800F7914(Ctx* __restrict c) {
  trace_call(0x800F7914u);
  c->r[9]=R8(c->r[4]+0x00000000u); // 800F7914
  c->r[8]=R8(c->r[4]+0x00000001u); // 800F7918
  c->r[7]=R8(c->r[4]+0x00000002u); // 800F791C
  c->r[6]=R8(c->r[4]+0x00000003u); // 800F7920
  c->r[5]=R8(c->r[4]+0x00000004u); // 800F7924
  c->r[0]=R8(c->r[4]+0x00000005u); // 800F7928
  W8(c->r[3]+0x00000000u,c->r[9]); // 800F792C
  W8(c->r[3]+0x00000001u,c->r[8]); // 800F7930
  W8(c->r[3]+0x00000002u,c->r[7]); // 800F7934
  W8(c->r[3]+0x00000003u,c->r[6]); // 800F7938
  W8(c->r[3]+0x00000004u,c->r[5]); // 800F793C
  W8(c->r[3]+0x00000005u,c->r[0]); // 800F7940
  return; // 800F7944
}

// bdcmp
void f_800F7948(Ctx* __restrict c) {
  trace_call(0x800F7948u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 800F7948
  c->r[0]=R8(c->r[4]+0x00000000u); // 800F794C
  cmpu(c,0,c->r[5],c->r[0]); // 800F7950
  if (crb(c,2)) { goto L_800F7960; } // 800F7954
  c->r[3]=0u+0xFFFFFFFFu; // 800F7958
  return; // 800F795C
L_800F7960:;
  c->r[5]=R8(c->r[3]+0x00000001u); // 800F7960
  c->r[6]=c->r[3]+0x00000002u; // 800F7964
  c->r[0]=R8(c->r[4]+0x00000001u); // 800F7968
  c->r[3]=c->r[4]+0x00000002u; // 800F796C
  cmpu(c,0,c->r[5],c->r[0]); // 800F7970
  if (crb(c,2)) { goto L_800F7980; } // 800F7974
  c->r[3]=0u+0xFFFFFFFFu; // 800F7978
  return; // 800F797C
L_800F7980:;
  c->r[5]=R8(c->r[6]+0x00000000u); // 800F7980
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F7984
  cmpu(c,0,c->r[5],c->r[0]); // 800F7988
  if (crb(c,2)) { goto L_800F7998; } // 800F798C
  c->r[3]=0u+0xFFFFFFFFu; // 800F7990
  return; // 800F7994
L_800F7998:;
  c->r[5]=R8(c->r[6]+0x00000001u); // 800F7998
  c->r[0]=R8(c->r[3]+0x00000001u); // 800F799C
  cmpu(c,0,c->r[5],c->r[0]); // 800F79A0
  if (crb(c,2)) { goto L_800F79B0; } // 800F79A4
  c->r[3]=0u+0xFFFFFFFFu; // 800F79A8
  return; // 800F79AC
L_800F79B0:;
  c->r[5]=R8(c->r[6]+0x00000002u); // 800F79B0
  c->r[0]=R8(c->r[3]+0x00000002u); // 800F79B4
  cmpu(c,0,c->r[5],c->r[0]); // 800F79B8
  if (crb(c,2)) { goto L_800F79C8; } // 800F79BC
  c->r[3]=0u+0xFFFFFFFFu; // 800F79C0
  return; // 800F79C4
L_800F79C8:;
  c->r[5]=R8(c->r[6]+0x00000003u); // 800F79C8
  c->r[0]=R8(c->r[3]+0x00000003u); // 800F79CC
  cmpu(c,0,c->r[5],c->r[0]); // 800F79D0
  if (crb(c,2)) { goto L_800F79E0; } // 800F79D4
  c->r[3]=0u+0xFFFFFFFFu; // 800F79D8
  return; // 800F79DC
L_800F79E0:;
  c->r[3]=0u+0x00000000u; // 800F79E0
  return; // 800F79E4
}

// bta_sys_rm_register
void f_800F79E8(Ctx* __restrict c) {
  trace_call(0x800F79E8u);
  c->r[4]=0u+0x803D0000u; // 800F79E8
  c->r[4]=c->r[4]+0xFFFF9D78u; // 800F79EC
  W32(c->r[4]+0x00000080u,c->r[3]); // 800F79F0
  return; // 800F79F4
}

// bta_sys_compress_register
void f_800F79F8(Ctx* __restrict c) {
  trace_call(0x800F79F8u);
  c->r[4]=0u+0x803D0000u; // 800F79F8
  c->r[4]=c->r[4]+0xFFFF9D78u; // 800F79FC
  W32(c->r[4]+0x00000088u,c->r[3]); // 800F7A00
  return; // 800F7A04
}

// bta_sys_pm_register
void f_800F7A08(Ctx* __restrict c) {
  trace_call(0x800F7A08u);
  c->r[4]=0u+0x803D0000u; // 800F7A08
  c->r[4]=c->r[4]+0xFFFF9D78u; // 800F7A0C
  W32(c->r[4]+0x00000084u,c->r[3]); // 800F7A10
  return; // 800F7A14
}

// bta_sys_conn_open
void f_800F7A18(Ctx* __restrict c) {
  trace_call(0x800F7A18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7A18
  c->r[0]=c->lr; // 800F7A1C
  c->r[6]=0u+0x803D0000u; // 800F7A20
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7A24
  c->r[6]=c->r[6]+0xFFFF9D78u; // 800F7A28
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7A2C
  c->r[31]=c->r[5]|c->r[5]; // 800F7A30
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F7A34
  c->r[30]=c->r[4]|c->r[4]; // 800F7A38
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F7A3C
  c->r[29]=c->r[3]|c->r[3]; // 800F7A40
  c->r[12]=R32(c->r[6]+0x00000080u); // 800F7A44
  cmps(c,0,(int32_t)c->r[12],0); // 800F7A48
  if (crb(c,2)) { goto L_800F7A68; } // 800F7A4C
  c->r[4]=c->r[29]|c->r[29]; // 800F7A50
  c->r[5]=c->r[30]|c->r[30]; // 800F7A54
  c->r[6]=c->r[31]|c->r[31]; // 800F7A58
  c->r[3]=0u+0x00000000u; // 800F7A5C
  c->ctr=c->r[12]; // 800F7A60
  if (true) { c->lr=0x800F7A68u; dispatch(c,c->ctr); } // 800F7A64
L_800F7A68:;
  c->r[3]=0u+0x803D0000u; // 800F7A68
  c->r[3]=c->r[3]+0xFFFF9D78u; // 800F7A6C
  c->r[12]=R32(c->r[3]+0x00000084u); // 800F7A70
  cmps(c,0,(int32_t)c->r[12],0); // 800F7A74
  if (crb(c,2)) { goto L_800F7A94; } // 800F7A78
  c->r[4]=c->r[29]|c->r[29]; // 800F7A7C
  c->r[5]=c->r[30]|c->r[30]; // 800F7A80
  c->r[6]=c->r[31]|c->r[31]; // 800F7A84
  c->r[3]=0u+0x00000000u; // 800F7A88
  c->ctr=c->r[12]; // 800F7A8C
  if (true) { c->lr=0x800F7A94u; dispatch(c,c->ctr); } // 800F7A90
L_800F7A94:;
  c->r[3]=0u+0x803D0000u; // 800F7A94
  c->r[3]=c->r[3]+0xFFFF9D78u; // 800F7A98
  c->r[12]=R32(c->r[3]+0x00000088u); // 800F7A9C
  cmps(c,0,(int32_t)c->r[12],0); // 800F7AA0
  if (crb(c,2)) { goto L_800F7AC0; } // 800F7AA4
  c->r[4]=c->r[29]|c->r[29]; // 800F7AA8
  c->r[5]=c->r[30]|c->r[30]; // 800F7AAC
  c->r[6]=c->r[31]|c->r[31]; // 800F7AB0
  c->r[3]=0u+0x00000000u; // 800F7AB4
  c->ctr=c->r[12]; // 800F7AB8
  if (true) { c->lr=0x800F7AC0u; dispatch(c,c->ctr); } // 800F7ABC
L_800F7AC0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7AC0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7AC4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F7AC8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F7ACC
  c->lr=c->r[0]; // 800F7AD0
  c->r[1]=c->r[1]+0x00000020u; // 800F7AD4
  return; // 800F7AD8
}

// bta_sys_conn_close
void f_800F7ADC(Ctx* __restrict c) {
  trace_call(0x800F7ADCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7ADC
  c->r[0]=c->lr; // 800F7AE0
  c->r[6]=0u+0x803D0000u; // 800F7AE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7AE8
  c->r[6]=c->r[6]+0xFFFF9D78u; // 800F7AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7AF0
  c->r[31]=c->r[5]|c->r[5]; // 800F7AF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F7AF8
  c->r[30]=c->r[4]|c->r[4]; // 800F7AFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F7B00
  c->r[29]=c->r[3]|c->r[3]; // 800F7B04
  c->r[12]=R32(c->r[6]+0x00000080u); // 800F7B08
  cmps(c,0,(int32_t)c->r[12],0); // 800F7B0C
  if (crb(c,2)) { goto L_800F7B2C; } // 800F7B10
  c->r[4]=c->r[29]|c->r[29]; // 800F7B14
  c->r[5]=c->r[30]|c->r[30]; // 800F7B18
  c->r[6]=c->r[31]|c->r[31]; // 800F7B1C
  c->r[3]=0u+0x00000001u; // 800F7B20
  c->ctr=c->r[12]; // 800F7B24
  if (true) { c->lr=0x800F7B2Cu; dispatch(c,c->ctr); } // 800F7B28
L_800F7B2C:;
  c->r[3]=0u+0x803D0000u; // 800F7B2C
  c->r[3]=c->r[3]+0xFFFF9D78u; // 800F7B30
  c->r[12]=R32(c->r[3]+0x00000084u); // 800F7B34
  cmps(c,0,(int32_t)c->r[12],0); // 800F7B38
  if (crb(c,2)) { goto L_800F7B58; } // 800F7B3C
  c->r[4]=c->r[29]|c->r[29]; // 800F7B40
  c->r[5]=c->r[30]|c->r[30]; // 800F7B44
  c->r[6]=c->r[31]|c->r[31]; // 800F7B48
  c->r[3]=0u+0x00000001u; // 800F7B4C
  c->ctr=c->r[12]; // 800F7B50
  if (true) { c->lr=0x800F7B58u; dispatch(c,c->ctr); } // 800F7B54
L_800F7B58:;
  c->r[3]=0u+0x803D0000u; // 800F7B58
  c->r[3]=c->r[3]+0xFFFF9D78u; // 800F7B5C
  c->r[12]=R32(c->r[3]+0x00000088u); // 800F7B60
  cmps(c,0,(int32_t)c->r[12],0); // 800F7B64
  if (crb(c,2)) { goto L_800F7B84; } // 800F7B68
  c->r[4]=c->r[29]|c->r[29]; // 800F7B6C
  c->r[5]=c->r[30]|c->r[30]; // 800F7B70
  c->r[6]=c->r[31]|c->r[31]; // 800F7B74
  c->r[3]=0u+0x00000001u; // 800F7B78
  c->ctr=c->r[12]; // 800F7B7C
  if (true) { c->lr=0x800F7B84u; dispatch(c,c->ctr); } // 800F7B80
L_800F7B84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7B84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7B88
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F7B8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F7B90
  c->lr=c->r[0]; // 800F7B94
  c->r[1]=c->r[1]+0x00000020u; // 800F7B98
  return; // 800F7B9C
}

// bta_sys_sco_close
void f_800F7BA0(Ctx* __restrict c) {
  trace_call(0x800F7BA0u);
  c->r[6]=0u+0x803D0000u; // 800F7BA0
  c->r[0]=c->r[4]|c->r[4]; // 800F7BA4
  c->r[6]=c->r[6]+0xFFFF9D78u; // 800F7BA8
  c->r[12]=R32(c->r[6]+0x00000084u); // 800F7BAC
  c->r[6]=c->r[5]|c->r[5]; // 800F7BB0
  cmps(c,0,(int32_t)c->r[12],0); // 800F7BB4
  if (crb(c,2)) return; // 800F7BB8
  c->r[4]=c->r[3]|c->r[3]; // 800F7BBC
  c->r[5]=c->r[0]|c->r[0]; // 800F7BC0
  c->r[3]=0u+0x00000005u; // 800F7BC4
  c->ctr=c->r[12]; // 800F7BC8
  if (true) { dispatch(c,c->ctr); return; } // 800F7BCC
  return; // 800F7BD0
}

// bta_sys_idle
void f_800F7BD4(Ctx* __restrict c) {
  trace_call(0x800F7BD4u);
  c->r[6]=0u+0x803D0000u; // 800F7BD4
  c->r[0]=c->r[4]|c->r[4]; // 800F7BD8
  c->r[6]=c->r[6]+0xFFFF9D78u; // 800F7BDC
  c->r[12]=R32(c->r[6]+0x00000084u); // 800F7BE0
  c->r[6]=c->r[5]|c->r[5]; // 800F7BE4
  cmps(c,0,(int32_t)c->r[12],0); // 800F7BE8
  if (crb(c,2)) return; // 800F7BEC
  c->r[4]=c->r[3]|c->r[3]; // 800F7BF0
  c->r[5]=c->r[0]|c->r[0]; // 800F7BF4
  c->r[3]=0u+0x00000006u; // 800F7BF8
  c->ctr=c->r[12]; // 800F7BFC
  if (true) { dispatch(c,c->ctr); return; } // 800F7C00
  return; // 800F7C04
}

// bta_sys_busy
void f_800F7C08(Ctx* __restrict c) {
  trace_call(0x800F7C08u);
  c->r[6]=0u+0x803D0000u; // 800F7C08
  c->r[0]=c->r[4]|c->r[4]; // 800F7C0C
  c->r[6]=c->r[6]+0xFFFF9D78u; // 800F7C10
  c->r[12]=R32(c->r[6]+0x00000084u); // 800F7C14
  c->r[6]=c->r[5]|c->r[5]; // 800F7C18
  cmps(c,0,(int32_t)c->r[12],0); // 800F7C1C
  if (crb(c,2)) return; // 800F7C20
  c->r[4]=c->r[3]|c->r[3]; // 800F7C24
  c->r[5]=c->r[0]|c->r[0]; // 800F7C28
  c->r[3]=0u+0x00000007u; // 800F7C2C
  c->ctr=c->r[12]; // 800F7C30
  if (true) { dispatch(c,c->ctr); return; } // 800F7C34
  return; // 800F7C38
}

// bta_sys_init
void f_800F7C3C(Ctx* __restrict c) {
  trace_call(0x800F7C3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7C3C
  c->r[0]=c->lr; // 800F7C40
  c->r[4]=0u+0x00000000u; // 800F7C44
  c->r[5]=0u+0x0000008Cu; // 800F7C48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7C4C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7C50
  c->r[31]=0u+0x803D0000u; // 800F7C54
  c->r[3]=c->r[31]+0xFFFF9D78u; // 800F7C58
  c->lr=0x800F7C60u; f_80004714(c); // 800F7C5C
  c->r[5]=R32(c->r[13]+0xFFFF8790u); // 800F7C60
  c->r[31]=c->r[31]+0xFFFF9D78u; // 800F7C64
  c->r[3]=c->r[31]+0x00000068u; // 800F7C68
  c->r[4]=0u+0x000003E8u; // 800F7C6C
  c->r[5]=R8(c->r[5]+0x00000003u); // 800F7C70
  c->lr=0x800F7C78u; f_800F7E80(c); // 800F7C74
  c->lr=0x800F7C7Cu; f_800F5CA0(c); // 800F7C78
  W8(c->r[31]+0x0000007Du,c->r[3]); // 800F7C7C
  c->r[3]=R32(c->r[13]+0xFFFF8790u); // 800F7C80
  c->r[0]=R8(c->r[3]+0x00000004u); // 800F7C84
  W8(c->r[13]+0xFFFFA100u,c->r[0]); // 800F7C88
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7C90
  c->lr=c->r[0]; // 800F7C94
  c->r[1]=c->r[1]+0x00000010u; // 800F7C98
  return; // 800F7C9C
}

// bta_sys_event
void f_800F7CA0(Ctx* __restrict c) {
  trace_call(0x800F7CA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7CA0
  c->r[0]=c->lr; // 800F7CA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7CA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7CAC
  c->r[31]=0u+0x00000001u; // 800F7CB0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7CB4
  c->r[30]=c->r[3]|c->r[3]; // 800F7CB8
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F7CBC
  cmpu(c,0,c->r[0],0x00000004u); // 800F7CC0
  if (crb(c,0)) { goto L_800F7CDC; } // 800F7CC4
  c->r[4]=0u+0x80330000u; // 800F7CC8
  c->r[5]=R16(c->r[30]+0x00000000u); // 800F7CCC
  c->r[4]=c->r[4]+0xFFFF9D50u; // 800F7CD0
  c->r[3]=0u+0x00000503u; // 800F7CD4
  c->lr=0x800F7CDCu; f_800F72A0(c); // 800F7CD8
L_800F7CDC:;
  c->r[3]=0u+0x803D0000u; // 800F7CDC
  c->r[4]=R16(c->r[30]+0x00000000u); // 800F7CE0
  c->r[3]=c->r[3]+0xFFFF9D78u; // 800F7CE4
  c->r[0]=R8(c->r[3]+0x0000007Eu); // 800F7CE8
  c->r[5]=sraw(c,c->r[4],8); // 800F7CEC
  cmps(c,0,(int32_t)c->r[0],0); // 800F7CF0
  if (crb(c,2)) { goto L_800F7D10; } // 800F7CF4
  cmpu(c,0,c->r[4],0x00000101u); // 800F7CF8
  if (!crb(c,2)) { goto L_800F7D04; } // 800F7CFC
  c->lr=0x800F7D04u; f_800FA370(c); // 800F7D00
L_800F7D04:;
  c->r[3]=c->r[30]|c->r[30]; // 800F7D04
  c->lr=0x800F7D0Cu; f_800F47C0(c); // 800F7D08
  goto L_800F7D74; // 800F7D0C
L_800F7D10:;
  c->r[0]=rotl(c->r[5],0)&0x000000FFu; // 800F7D10
  cmpu(c,0,c->r[0],0x0000001Au); // 800F7D14
  if (!crb(c,0)) { goto L_800F7D44; } // 800F7D18
  c->r[0]=rotl(c->r[5],2)&0x000003FCu; // 800F7D1C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800F7D20
  cmps(c,0,(int32_t)c->r[3],0); // 800F7D24
  if (crb(c,2)) { goto L_800F7D44; } // 800F7D28
  c->r[12]=R32(c->r[3]+0x00000000u); // 800F7D2C
  c->r[3]=c->r[30]|c->r[30]; // 800F7D30
  c->ctr=c->r[12]; // 800F7D34
  if (true) { c->lr=0x800F7D3Cu; dispatch(c,c->ctr); } // 800F7D38
  c->r[31]=c->r[3]|c->r[3]; // 800F7D3C
  goto L_800F7D64; // 800F7D40
L_800F7D44:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F7D44
  cmpu(c,0,c->r[0],0x00000002u); // 800F7D48
  if (crb(c,0)) { goto L_800F7D64; } // 800F7D4C
  c->r[4]=0u+0x80330000u; // 800F7D50
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 800F7D54
  c->r[4]=c->r[4]+0xFFFF9D64u; // 800F7D58
  c->r[3]=0u+0x00000501u; // 800F7D5C
  c->lr=0x800F7D64u; f_800F72A0(c); // 800F7D60
L_800F7D64:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 800F7D64
  if (crb(c,2)) { goto L_800F7D74; } // 800F7D68
  c->r[3]=c->r[30]|c->r[30]; // 800F7D6C
  c->lr=0x800F7D74u; f_800F47C0(c); // 800F7D70
L_800F7D74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7D78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7D7C
  c->lr=c->r[0]; // 800F7D80
  c->r[1]=c->r[1]+0x00000010u; // 800F7D84
  return; // 800F7D88
}

// bta_sys_timer_update
void f_800F7D8C(Ctx* __restrict c) {
  trace_call(0x800F7D8Cu);
  c->r[3]=0u+0x803D0000u; // 800F7D8C
  c->r[3]=c->r[3]+0xFFFF9D78u; // 800F7D90
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 800F7D94
  cmps(c,0,(int32_t)c->r[0],0); // 800F7D98
  if (!crb(c,2)) return; // 800F7D9C
  c->r[3]=c->r[3]+0x00000068u; // 800F7DA0
  f_800F7ECC(c); return; // 800F7DA4
  return; // 800F7DA8
}

// bta_sys_register
void f_800F7DAC(Ctx* __restrict c) {
  trace_call(0x800F7DACu);
  c->r[5]=0u+0x803D0000u; // 800F7DAC
  c->r[0]=rotl(c->r[3],2)&0x000003FCu; // 800F7DB0
  c->r[5]=c->r[5]+0xFFFF9D78u; // 800F7DB4
  W32(c->r[5]+c->r[0],c->r[4]); // 800F7DB8
  return; // 800F7DBC
}

// bta_sys_sendmsg
void f_800F7DC0(Ctx* __restrict c) {
  trace_call(0x800F7DC0u);
  c->r[4]=R32(c->r[13]+0xFFFF8790u); // 800F7DC0
  c->r[6]=0u+0x803D0000u; // 800F7DC4
  c->r[6]=c->r[6]+0xFFFF9D78u; // 800F7DC8
  c->r[5]=c->r[3]|c->r[3]; // 800F7DCC
  c->r[3]=R8(c->r[6]+0x0000007Du); // 800F7DD0
  c->r[4]=R8(c->r[4]+0x00000002u); // 800F7DD4
  f_800F4980(c); return; // 800F7DD8
}

// bta_sys_start_timer
void f_800F7DDC(Ctx* __restrict c) {
  trace_call(0x800F7DDCu);
  c->r[7]=0u+0x803D0000u; // 800F7DDC
  c->r[0]=c->r[4]|c->r[4]; // 800F7DE0
  c->r[7]=c->r[7]+0xFFFF9D78u; // 800F7DE4
  c->r[6]=c->r[5]|c->r[5]; // 800F7DE8
  c->r[4]=c->r[3]|c->r[3]; // 800F7DEC
  c->r[5]=c->r[0]|c->r[0]; // 800F7DF0
  c->r[3]=c->r[7]+0x00000068u; // 800F7DF4
  f_800F7F80(c); return; // 800F7DF8
}

// bta_sys_stop_timer
void f_800F7DFC(Ctx* __restrict c) {
  trace_call(0x800F7DFCu);
  c->r[5]=0u+0x803D0000u; // 800F7DFC
  c->r[4]=c->r[3]|c->r[3]; // 800F7E00
  c->r[5]=c->r[5]+0xFFFF9D78u; // 800F7E04
  c->r[3]=c->r[5]+0x00000068u; // 800F7E08
  f_800F8020(c); return; // 800F7E0C
}

// bta_sys_disable
void f_800F7E10(Ctx* __restrict c) {
  trace_call(0x800F7E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7E10
  c->r[0]=c->lr; // 800F7E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7E18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7E1C
  c->r[31]=0u+0x803D0000u; // 800F7E20
  c->r[31]=c->r[31]+0xFFFF9D78u; // 800F7E24
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7E28
  c->r[30]=0u+0x00000000u; // 800F7E2C
L_800F7E30:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 800F7E30
  cmps(c,0,(int32_t)c->r[3],0); // 800F7E34
  if (crb(c,2)) { goto L_800F7E50; } // 800F7E38
  c->r[12]=R32(c->r[3]+0x00000004u); // 800F7E3C
  cmps(c,0,(int32_t)c->r[12],0); // 800F7E40
  if (crb(c,2)) { goto L_800F7E50; } // 800F7E44
  c->ctr=c->r[12]; // 800F7E48
  if (true) { c->lr=0x800F7E50u; dispatch(c,c->ctr); } // 800F7E4C
L_800F7E50:;
  c->r[30]=c->r[30]+0x00000001u; // 800F7E50
  c->r[31]=c->r[31]+0x00000004u; // 800F7E54
  cmps(c,0,(int32_t)c->r[30],26); // 800F7E58
  if (crb(c,0)) { IRQCHK(c); goto L_800F7E30; } // 800F7E5C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7E60
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7E64
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7E68
  c->lr=c->r[0]; // 800F7E6C
  c->r[1]=c->r[1]+0x00000010u; // 800F7E70
  return; // 800F7E74
}

// bta_sys_set_trace_level
void f_800F7E78(Ctx* __restrict c) {
  trace_call(0x800F7E78u);
  W8(c->r[13]+0xFFFFA100u,c->r[3]); // 800F7E78
  return; // 800F7E7C
}

// ptim_init
void f_800F7E80(Ctx* __restrict c) {
  trace_call(0x800F7E80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7E80
  c->r[0]=c->lr; // 800F7E84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7E88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7E8C
  c->r[31]=c->r[5]|c->r[5]; // 800F7E90
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F7E94
  c->r[30]=c->r[4]|c->r[4]; // 800F7E98
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F7E9C
  c->r[29]=c->r[3]|c->r[3]; // 800F7EA0
  c->lr=0x800F7EA8u; f_800F57A0(c); // 800F7EA4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 800F7EA8
  W8(c->r[29]+0x00000010u,c->r[31]); // 800F7EAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F7EB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F7EB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F7EB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F7EBC
  c->lr=c->r[0]; // 800F7EC0
  c->r[1]=c->r[1]+0x00000020u; // 800F7EC4
  return; // 800F7EC8
}

// ptim_timer_update
void f_800F7ECC(Ctx* __restrict c) {
  trace_call(0x800F7ECCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7ECC
  c->r[0]=c->lr; // 800F7ED0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F7ED4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F7ED8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F7EDC
  c->r[30]=c->r[3]|c->r[3]; // 800F7EE0
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 800F7EE4
  c->lr=0x800F7EECu; f_800F57C0(c); // 800F7EE8
  goto L_800F7F40; // 800F7EEC
L_800F7EF0:;
  c->r[3]=c->r[30]|c->r[30]; // 800F7EF0
  c->r[4]=c->r[31]|c->r[31]; // 800F7EF4
  c->lr=0x800F7EFCu; f_800F5940(c); // 800F7EF8
  c->r[12]=R32(c->r[31]+0x00000008u); // 800F7EFC
  cmps(c,0,(int32_t)c->r[12],0); // 800F7F00
  if (crb(c,2)) { goto L_800F7F18; } // 800F7F04
  c->r[3]=c->r[31]|c->r[31]; // 800F7F08
  c->ctr=c->r[12]; // 800F7F0C
  if (true) { c->lr=0x800F7F14u; dispatch(c,c->ctr); } // 800F7F10
  goto L_800F7F40; // 800F7F14
L_800F7F18:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 800F7F18
  cmps(c,0,(int32_t)c->r[0],0); // 800F7F1C
  if (crb(c,2)) { goto L_800F7F40; } // 800F7F20
  c->r[3]=0u+0x00000008u; // 800F7F24
  c->lr=0x800F7F2Cu; f_800F4530(c); // 800F7F28
  cmps(c,0,(int32_t)c->r[3],0); // 800F7F2C
  if (crb(c,2)) { goto L_800F7F40; } // 800F7F30
  c->r[0]=R16(c->r[31]+0x00000014u); // 800F7F34
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F7F38
  c->lr=0x800F7F40u; f_800F7DC0(c); // 800F7F3C
L_800F7F40:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 800F7F40
  cmps(c,0,(int32_t)c->r[31],0); // 800F7F44
  if (crb(c,2)) { goto L_800F7F58; } // 800F7F48
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 800F7F4C
  cmps(c,0,(int32_t)c->r[0],0); // 800F7F50
  if (!crb(c,1)) { IRQCHK(c); goto L_800F7EF0; } // 800F7F54
L_800F7F58:;
  cmps(c,0,(int32_t)c->r[31],0); // 800F7F58
  if (!crb(c,2)) { goto L_800F7F68; } // 800F7F5C
  c->r[3]=R8(c->r[30]+0x00000010u); // 800F7F60
  c->lr=0x800F7F68u; f_800F5710(c); // 800F7F64
L_800F7F68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F7F68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F7F6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F7F70
  c->lr=c->r[0]; // 800F7F74
  c->r[1]=c->r[1]+0x00000010u; // 800F7F78
  return; // 800F7F7C
}

// ptim_start_timer
void f_800F7F80(Ctx* __restrict c) {
  trace_call(0x800F7F80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F7F80
  c->r[0]=c->lr; // 800F7F84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F7F88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F7F8C
  c->r[31]=c->r[6]|c->r[6]; // 800F7F90
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F7F94
  c->r[30]=c->r[5]|c->r[5]; // 800F7F98
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F7F9C
  c->r[29]=c->r[4]|c->r[4]; // 800F7FA0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800F7FA4
  c->r[28]=c->r[3]|c->r[3]; // 800F7FA8
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F7FAC
  cmps(c,0,(int32_t)c->r[0],0); // 800F7FB0
  if (!crb(c,2)) { goto L_800F7FE0; } // 800F7FB4
  c->r[4]=0u+0x66660000u; // 800F7FB8
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 800F7FBC
  c->r[4]=c->r[4]+0x00006667u; // 800F7FC0
  c->r[3]=R8(c->r[3]+0x00000010u); // 800F7FC4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 800F7FC8
  c->r[5]=0u+0x00000001u; // 800F7FCC
  c->r[0]=sraw(c,c->r[0],2); // 800F7FD0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800F7FD4
  c->r[4]=c->r[0]+c->r[4]; // 800F7FD8
  c->lr=0x800F7FE0u; f_800F55C0(c); // 800F7FDC
L_800F7FE0:;
  c->r[3]=c->r[28]|c->r[28]; // 800F7FE0
  c->r[4]=c->r[29]|c->r[29]; // 800F7FE4
  c->lr=0x800F7FECu; f_800F5940(c); // 800F7FE8
  W16(c->r[29]+0x00000014u,c->r[30]); // 800F7FEC
  c->r[3]=c->r[28]|c->r[28]; // 800F7FF0
  c->r[4]=c->r[29]|c->r[29]; // 800F7FF4
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 800F7FF8
  c->lr=0x800F8000u; f_800F5850(c); // 800F7FFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8000
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8004
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8008
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F800C
  c->r[28]=R32(c->r[1]+0x00000010u); // 800F8010
  c->lr=c->r[0]; // 800F8014
  c->r[1]=c->r[1]+0x00000020u; // 800F8018
  return; // 800F801C
}

// ptim_stop_timer
void f_800F8020(Ctx* __restrict c) {
  trace_call(0x800F8020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8020
  c->r[0]=c->lr; // 800F8024
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F802C
  c->r[31]=c->r[3]|c->r[3]; // 800F8030
  c->lr=0x800F8038u; f_800F5940(c); // 800F8034
  c->r[0]=R32(c->r[31]+0x00000000u); // 800F8038
  cmps(c,0,(int32_t)c->r[0],0); // 800F803C
  if (!crb(c,2)) { goto L_800F804C; } // 800F8040
  c->r[3]=R8(c->r[31]+0x00000010u); // 800F8044
  c->lr=0x800F804Cu; f_800F5710(c); // 800F8048
L_800F804C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F804C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8050
  c->lr=c->r[0]; // 800F8054
  c->r[1]=c->r[1]+0x00000010u; // 800F8058
  return; // 800F805C
}

// utl_freebuf
void f_800F8060(Ctx* __restrict c) {
  trace_call(0x800F8060u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8060
  c->r[0]=c->lr; // 800F8064
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8068
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F806C
  c->r[31]=c->r[3]|c->r[3]; // 800F8070
  c->r[0]=R32(c->r[3]+0x00000000u); // 800F8074
  cmps(c,0,(int32_t)c->r[0],0); // 800F8078
  if (crb(c,2)) { goto L_800F8090; } // 800F807C
  c->r[3]=c->r[0]|c->r[0]; // 800F8080
  c->lr=0x800F8088u; f_800F47C0(c); // 800F8084
  c->r[0]=0u+0x00000000u; // 800F8088
  W32(c->r[31]+0x00000000u,c->r[0]); // 800F808C
L_800F8090:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8090
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8094
  c->lr=c->r[0]; // 800F8098
  c->r[1]=c->r[1]+0x00000010u; // 800F809C
  return; // 800F80A0
}

// bta_dm_enable
void f_800F80A4(Ctx* __restrict c) {
  trace_call(0x800F80A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F80A4
  c->r[0]=c->lr; // 800F80A8
  c->r[4]=0u+0x803D0000u; // 800F80AC
  c->r[5]=0u+0x0000007Cu; // 800F80B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F80B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F80B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F80BC
  c->r[30]=c->r[3]|c->r[3]; // 800F80C0
  c->r[3]=c->r[4]+0xFFFF9E38u; // 800F80C4
  c->r[4]=0u+0x00000000u; // 800F80C8
  c->lr=0x800F80D0u; f_80004714(c); // 800F80CC
  c->r[3]=0u+0x803D0000u; // 800F80D0
  c->r[4]=0u+0x00000000u; // 800F80D4
  c->r[3]=c->r[3]+0xFFFF9FB8u; // 800F80D8
  c->r[5]=0u+0x0000002Eu; // 800F80DC
  c->lr=0x800F80E4u; f_80004714(c); // 800F80E0
  c->r[31]=0u+0x802D0000u; // 800F80E4
  c->r[3]=c->r[1]+0x00000008u; // 800F80E8
  c->r[4]=c->r[31]+0xFFFF9810u; // 800F80EC
  c->r[5]=0u+0x00000003u; // 800F80F0
  c->lr=0x800F80F8u; f_800043C4(c); // 800F80F4
  c->r[3]=c->r[1]+0x00000008u; // 800F80F8
  c->lr=0x800F8100u; f_80100C84(c); // 800F80FC
  c->r[4]=0u+0x803D0000u; // 800F8100
  c->r[0]=R32(c->r[30]+0x00000008u); // 800F8104
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800F8108
  c->r[3]=0u+0x802D0000u; // 800F810C
  W32(c->r[4]+0x00000050u,c->r[0]); // 800F8110
  c->r[3]=c->r[3]+0xFFFF9940u; // 800F8114
  c->lr=0x800F811Cu; f_80104C6C(c); // 800F8118
  c->r[31]=c->r[31]+0xFFFF9810u; // 800F811C
  c->r[3]=R16(c->r[31]+0x00000008u); // 800F8120
  c->lr=0x800F8128u; f_800FE604(c); // 800F8124
  c->r[3]=R16(c->r[31]+0x00000006u); // 800F8128
  c->lr=0x800F8130u; f_80100F74(c); // 800F812C
  c->r[3]=R16(c->r[31]+0x00000004u); // 800F8130
  c->lr=0x800F8138u; f_800FE238(c); // 800F8134
  c->r[3]=0u+0x80100000u; // 800F8138
  c->r[3]=c->r[3]+0xFFFF9AE4u; // 800F813C
  c->lr=0x800F8144u; f_800FEC80(c); // 800F8140
  c->r[3]=0u+0x80100000u; // 800F8144
  c->r[3]=c->r[3]+0xFFFF998Cu; // 800F8148
  c->lr=0x800F8150u; f_80100BB0(c); // 800F814C
  c->r[3]=0u+0x80100000u; // 800F8150
  c->r[3]=c->r[3]+0xFFFFA1E4u; // 800F8154
  c->lr=0x800F815Cu; f_800F79E8(c); // 800F8158
  c->r[31]=0u+0x80100000u; // 800F815C
  c->r[3]=c->r[31]+0xFFFF9FACu; // 800F8160
  c->lr=0x800F8168u; f_800F79F8(c); // 800F8164
  c->lr=0x800F816Cu; f_800FA9AC(c); // 800F8168
  c->r[3]=0u+0x803D0000u; // 800F816C
  c->r[4]=0u+0x00000000u; // 800F8170
  c->r[3]=c->r[3]+0xFFFF9E08u; // 800F8174
  c->r[5]=0u+0x0000002Du; // 800F8178
  c->lr=0x800F8180u; f_80004714(c); // 800F817C
  c->r[3]=c->r[31]+0xFFFF9FACu; // 800F8180
  c->lr=0x800F8188u; f_800F79F8(c); // 800F8184
  c->r[3]=0u+0x80100000u; // 800F8188
  c->r[4]=0u+0x00000000u; // 800F818C
  c->r[3]=c->r[3]+0xFFFF9EC8u; // 800F8190
  c->lr=0x800F8198u; f_801107AC(c); // 800F8194
  c->lr=0x800F819Cu; f_80108F04(c); // 800F8198
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F819C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F81A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F81A4
  c->lr=c->r[0]; // 800F81A8
  c->r[1]=c->r[1]+0x00000020u; // 800F81AC
  return; // 800F81B0
}

// bta_dm_disable
void f_800F81B4(Ctx* __restrict c) {
  trace_call(0x800F81B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F81B4
  c->r[0]=c->lr; // 800F81B8
  c->r[3]=c->r[2]+0xFFFFB1A8u; // 800F81BC
  c->r[4]=0u+0x00000000u; // 800F81C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F81C4
  c->lr=0x800F81CCu; f_80110690(c); // 800F81C8
  c->lr=0x800F81D0u; f_800F7E10(c); // 800F81CC
  c->r[3]=0u+0x00000000u; // 800F81D0
  c->r[4]=0u+0x00000000u; // 800F81D4
  c->r[5]=0u+0x00000000u; // 800F81D8
  c->lr=0x800F81E0u; f_801016AC(c); // 800F81DC
  c->r[3]=0u+0x00000000u; // 800F81E0
  c->r[4]=0u+0x00000000u; // 800F81E4
  c->r[5]=0u+0x00000000u; // 800F81E8
  c->lr=0x800F81F0u; f_80101B28(c); // 800F81EC
  c->lr=0x800F81F4u; f_800FAA14(c); // 800F81F0
  c->lr=0x800F81F8u; f_800FE6EC(c); // 800F81F4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F81F8
  if (!crb(c,2)) { goto L_800F8228; } // 800F81FC
  c->r[6]=0u+0x80100000u; // 800F8200
  c->r[3]=0u+0x803D0000u; // 800F8204
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F8208
  c->r[4]=0u+0x00000000u; // 800F820C
  c->r[6]=c->r[6]+0xFFFF9DD4u; // 800F8210
  c->r[5]=0u+0x000003E8u; // 800F8214
  W32(c->r[3]+0x0000007Cu,c->r[6]); // 800F8218
  c->r[3]=c->r[3]+0x00000074u; // 800F821C
  c->lr=0x800F8224u; f_800F7DDC(c); // 800F8220
  goto L_800F8254; // 800F8224
L_800F8228:;
  c->r[6]=0u+0x803D0000u; // 800F8228
  c->r[5]=0u+0x80100000u; // 800F822C
  c->r[6]=c->r[6]+0xFFFF9EB4u; // 800F8230
  c->r[0]=0u+0x00000001u; // 800F8234
  c->r[5]=c->r[5]+0xFFFF8264u; // 800F8238
  W8(c->r[6]+0x00000072u,c->r[0]); // 800F823C
  c->r[3]=c->r[6]+0x00000074u; // 800F8240
  c->r[4]=0u+0x00000000u; // 800F8244
  W32(c->r[6]+0x0000007Cu,c->r[5]); // 800F8248
  c->r[5]=0u+0x00001388u; // 800F824C
  c->lr=0x800F8254u; f_800F7DDC(c); // 800F8250
L_800F8254:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8254
  c->lr=c->r[0]; // 800F8258
  c->r[1]=c->r[1]+0x00000010u; // 800F825C
  return; // 800F8260
}

// bta_dm_disable_timer_cback
void f_800F8264(Ctx* __restrict c) {
  trace_call(0x800F8264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8264
  c->r[0]=c->lr; // 800F8268
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F826C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8270
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8274
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F8278
  cmpu(c,0,c->r[0],0x00000004u); // 800F827C
  if (crb(c,0)) { goto L_800F8294; } // 800F8280
  c->r[4]=0u+0x80330000u; // 800F8284
  c->r[3]=0u+0x00000503u; // 800F8288
  c->r[4]=c->r[4]+0xFFFF9D88u; // 800F828C
  c->lr=0x800F8294u; f_800F7280(c); // 800F8290
L_800F8294:;
  c->lr=0x800F8298u; f_800FE6EC(c); // 800F8294
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F8298
  if (crb(c,2)) { goto L_800F82E4; } // 800F829C
  c->r[3]=0u+0x803D0000u; // 800F82A0
  c->r[31]=c->r[3]+0xFFFF9EB4u; // 800F82A4
  c->r[0]=R8(c->r[31]+0x00000101u); // 800F82A8
  cmps(c,0,(int32_t)c->r[0],0); // 800F82AC
  if (!crb(c,2)) { goto L_800F82E4; } // 800F82B0
  c->r[30]=0u+0x00000000u; // 800F82B4
  goto L_800F82D0; // 800F82B8
L_800F82BC:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 800F82BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F82C0
  c->r[3]=c->r[31]+c->r[0]; // 800F82C4
  c->lr=0x800F82CCu; f_800FF248(c); // 800F82C8
  c->r[30]=c->r[30]+0x00000001u; // 800F82CC
L_800F82D0:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 800F82D0
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 800F82D4
  cmpu(c,0,c->r[3],c->r[0]); // 800F82D8
  if (crb(c,0)) { IRQCHK(c); goto L_800F82BC; } // 800F82DC
  goto L_800F8308; // 800F82E0
L_800F82E4:;
  c->r[5]=0u+0x803D0000u; // 800F82E4
  c->r[0]=0u+0x00000000u; // 800F82E8
  c->r[5]=c->r[5]+0xFFFF9EB4u; // 800F82EC
  c->r[3]=0u+0x00000001u; // 800F82F0
  c->r[12]=R32(c->r[5]+0x00000050u); // 800F82F4
  c->r[4]=0u+0x00000000u; // 800F82F8
  W8(c->r[5]+0x00000072u,c->r[0]); // 800F82FC
  c->ctr=c->r[12]; // 800F8300
  if (true) { c->lr=0x800F8308u; dispatch(c,c->ctr); } // 800F8304
L_800F8308:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8308
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F830C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F8310
  c->lr=c->r[0]; // 800F8314
  c->r[1]=c->r[1]+0x00000010u; // 800F8318
  return; // 800F831C
}

// bta_dm_set_dev_name
void f_800F8320(Ctx* __restrict c) {
  trace_call(0x800F8320u);
  c->r[3]=c->r[3]+0x00000008u; // 800F8320
  f_80100A6C(c); return; // 800F8324
}

// bta_dm_set_visibility
void f_800F8328(Ctx* __restrict c) {
  trace_call(0x800F8328u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8328
  c->r[0]=c->lr; // 800F832C
  c->r[4]=0u+0x00000000u; // 800F8330
  c->r[5]=0u+0x00000000u; // 800F8334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F833C
  c->r[31]=c->r[3]|c->r[3]; // 800F8340
  c->r[3]=R8(c->r[3]+0x00000008u); // 800F8344
  c->lr=0x800F834Cu; f_801016AC(c); // 800F8348
  c->r[3]=R8(c->r[31]+0x00000009u); // 800F834C
  c->r[4]=0u+0x00000000u; // 800F8350
  c->r[5]=0u+0x00000000u; // 800F8354
  c->lr=0x800F835Cu; f_80101B28(c); // 800F8358
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F835C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8360
  c->lr=c->r[0]; // 800F8364
  c->r[1]=c->r[1]+0x00000010u; // 800F8368
  return; // 800F836C
}

// bta_dm_bond
void f_800F8370(Ctx* __restrict c) {
  trace_call(0x800F8370u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8370
  c->r[0]=c->lr; // 800F8374
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8378
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F837C
  c->r[31]=c->r[3]|c->r[3]; // 800F8380
  c->r[3]=c->r[3]+0x00000008u; // 800F8384
  c->lr=0x800F838Cu; f_80107BFC(c); // 800F8388
  cmps(c,0,(int32_t)c->r[3],0); // 800F838C
  if (crb(c,2)) { goto L_800F83A8; } // 800F8390
  c->r[4]=c->r[3]|c->r[3]; // 800F8394
  c->r[3]=c->r[1]+0x00000008u; // 800F8398
  c->r[5]=0u+0x00000008u; // 800F839C
  c->lr=0x800F83A4u; f_800043C4(c); // 800F83A0
  goto L_800F83B8; // 800F83A4
L_800F83A8:;
  c->r[3]=c->r[1]+0x00000008u; // 800F83A8
  c->r[4]=0u+0x00000000u; // 800F83AC
  c->r[5]=0u+0x00000008u; // 800F83B0
  c->lr=0x800F83B8u; f_80004714(c); // 800F83B4
L_800F83B8:;
  c->r[4]=R8(c->r[31]+0x0000000Eu); // 800F83B8
  c->r[3]=c->r[31]+0x00000008u; // 800F83BC
  c->r[5]=c->r[31]+0x0000000Fu; // 800F83C0
  c->r[6]=c->r[1]+0x00000008u; // 800F83C4
  c->lr=0x800F83CCu; f_80105300(c); // 800F83C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F83CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F83D0
  c->lr=c->r[0]; // 800F83D4
  c->r[1]=c->r[1]+0x00000020u; // 800F83D8
  return; // 800F83DC
}

// bta_dm_pin_reply
void f_800F83E0(Ctx* __restrict c) {
  trace_call(0x800F83E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F83E0
  c->r[0]=c->lr; // 800F83E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F83E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F83EC
  c->r[31]=c->r[3]|c->r[3]; // 800F83F0
  c->r[3]=c->r[3]+0x00000008u; // 800F83F4
  c->lr=0x800F83FCu; f_80107BFC(c); // 800F83F8
  cmps(c,0,(int32_t)c->r[3],0); // 800F83FC
  if (crb(c,2)) { goto L_800F8418; } // 800F8400
  c->r[4]=c->r[3]|c->r[3]; // 800F8404
  c->r[3]=c->r[1]+0x00000008u; // 800F8408
  c->r[5]=0u+0x00000008u; // 800F840C
  c->lr=0x800F8414u; f_800043C4(c); // 800F8410
  goto L_800F8428; // 800F8414
L_800F8418:;
  c->r[3]=c->r[1]+0x00000008u; // 800F8418
  c->r[4]=0u+0x00000000u; // 800F841C
  c->r[5]=0u+0x00000008u; // 800F8420
  c->lr=0x800F8428u; f_80004714(c); // 800F8424
L_800F8428:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 800F8428
  cmps(c,0,(int32_t)c->r[0],0); // 800F842C
  if (crb(c,2)) { goto L_800F8450; } // 800F8430
  c->r[5]=R8(c->r[31]+0x0000000Fu); // 800F8434
  c->r[3]=c->r[31]+0x00000008u; // 800F8438
  c->r[6]=c->r[31]+0x00000010u; // 800F843C
  c->r[7]=c->r[1]+0x00000008u; // 800F8440
  c->r[4]=0u+0x00000000u; // 800F8444
  c->lr=0x800F844Cu; f_80105060(c); // 800F8448
  goto L_800F8468; // 800F844C
L_800F8450:;
  c->r[3]=c->r[31]+0x00000008u; // 800F8450
  c->r[7]=c->r[1]+0x00000008u; // 800F8454
  c->r[4]=0u+0x0000000Bu; // 800F8458
  c->r[5]=0u+0x00000000u; // 800F845C
  c->r[6]=0u+0x00000000u; // 800F8460
  c->lr=0x800F8468u; f_80105060(c); // 800F8464
L_800F8468:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8468
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F846C
  c->lr=c->r[0]; // 800F8470
  c->r[1]=c->r[1]+0x00000020u; // 800F8474
  return; // 800F8478
}

// bta_dm_auth_reply
void f_800F847C(Ctx* __restrict c) {
  trace_call(0x800F847Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F847C
  c->r[0]=c->lr; // 800F8480
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8484
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F8488
  c->r[31]=c->r[3]|c->r[3]; // 800F848C
  c->r[3]=c->r[3]+0x00000008u; // 800F8490
  c->lr=0x800F8498u; f_80107BFC(c); // 800F8494
  cmps(c,0,(int32_t)c->r[3],0); // 800F8498
  if (crb(c,2)) { goto L_800F84B4; } // 800F849C
  c->r[4]=c->r[3]|c->r[3]; // 800F84A0
  c->r[3]=c->r[1]+0x00000008u; // 800F84A4
  c->r[5]=0u+0x00000008u; // 800F84A8
  c->lr=0x800F84B0u; f_800043C4(c); // 800F84AC
  goto L_800F84C4; // 800F84B0
L_800F84B4:;
  c->r[3]=c->r[1]+0x00000008u; // 800F84B4
  c->r[4]=0u+0x00000000u; // 800F84B8
  c->r[5]=0u+0x00000008u; // 800F84BC
  c->lr=0x800F84C4u; f_80004714(c); // 800F84C0
L_800F84C4:;
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 800F84C4
  cmpu(c,0,c->r[0],0x00000002u); // 800F84C8
  if (crb(c,2)) { goto L_800F852C; } // 800F84CC
  cmps(c,0,(int32_t)c->r[0],0); // 800F84D0
  if (!crb(c,2)) { goto L_800F8518; } // 800F84D4
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 800F84D8
  cmpu(c,0,c->r[0],0x00000017u); // 800F84DC
  if (crb(c,1)) { goto L_800F8518; } // 800F84E0
  c->r[3]=0u+0x802D0000u; // 800F84E4
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800F84E8
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800F84EC
  c->r[5]=c->r[1]+0x00000008u; // 800F84F0
  c->r[4]=R32(c->r[3]+c->r[0]); // 800F84F4
  c->r[3]=0u+0x00000001u; // 800F84F8
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 800F84FC
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 800F8500
  c->r[0]=c->r[4]-c->r[0]; // 800F8504
  c->r[4]=R32(c->r[5]+c->r[6]); // 800F8508
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800F850C
  c->r[0]=c->r[4]|c->r[0]; // 800F8510
  W32(c->r[5]+c->r[6],c->r[0]); // 800F8514
L_800F8518:;
  c->r[3]=c->r[31]+0x00000008u; // 800F8518
  c->r[5]=c->r[1]+0x00000008u; // 800F851C
  c->r[4]=0u+0x00000000u; // 800F8520
  c->lr=0x800F8528u; f_80105124(c); // 800F8524
  goto L_800F853C; // 800F8528
L_800F852C:;
  c->r[3]=c->r[31]+0x00000008u; // 800F852C
  c->r[5]=c->r[1]+0x00000008u; // 800F8530
  c->r[4]=0u+0x0000000Bu; // 800F8534
  c->lr=0x800F853Cu; f_80105124(c); // 800F8538
L_800F853C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F853C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8540
  c->lr=c->r[0]; // 800F8544
  c->r[1]=c->r[1]+0x00000020u; // 800F8548
  return; // 800F854C
}

// bta_dm_search_start
void f_800F8550(Ctx* __restrict c) {
  trace_call(0x800F8550u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8550
  c->r[0]=c->lr; // 800F8554
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8558
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F855C
  c->r[31]=c->r[3]|c->r[3]; // 800F8560
  c->r[3]=0u+0x00000000u; // 800F8564
  c->lr=0x800F856Cu; f_80102390(c); // 800F8568
  c->r[0]=R32(c->r[31]+0x00000018u); // 800F856C
  c->r[3]=0u+0x803D0000u; // 800F8570
  c->r[4]=0u+0x80100000u; // 800F8574
  c->r[5]=0u+0x80100000u; // 800F8578
  W32(c->r[3]+0xFFFF9E38u,c->r[0]); // 800F857C
  c->r[6]=c->r[3]+0xFFFF9E38u; // 800F8580
  c->r[3]=c->r[31]+0x00000008u; // 800F8584
  c->r[4]=c->r[4]+0xFFFF9378u; // 800F8588
  c->r[0]=R32(c->r[31]+0x00000014u); // 800F858C
  c->r[5]=c->r[5]+0xFFFF9408u; // 800F8590
  W32(c->r[6]+0x00000008u,c->r[0]); // 800F8594
  c->lr=0x800F859Cu; f_80101DC8(c); // 800F8598
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F859C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F85A0
  c->lr=c->r[0]; // 800F85A4
  c->r[1]=c->r[1]+0x00000010u; // 800F85A8
  return; // 800F85AC
}

// bta_dm_search_cancel
void f_800F85B0(Ctx* __restrict c) {
  trace_call(0x800F85B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F85B0
  c->r[0]=c->lr; // 800F85B4
  c->r[3]=0u+0x00000000u; // 800F85B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F85BC
  c->lr=0x800F85C4u; f_80102390(c); // 800F85C0
  c->lr=0x800F85C8u; f_80101CB0(c); // 800F85C4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F85C8
  if (crb(c,2)) { goto L_800F860C; } // 800F85CC
  c->lr=0x800F85D4u; f_80101CC0(c); // 800F85D0
  c->r[4]=0u+0x803D0000u; // 800F85D4
  c->r[3]=0u+0x00000004u; // 800F85D8
  c->r[12]=R32(c->r[4]+0xFFFF9E38u); // 800F85DC
  c->r[4]=0u+0x00000000u; // 800F85E0
  c->ctr=c->r[12]; // 800F85E4
  if (true) { c->lr=0x800F85ECu; dispatch(c,c->ctr); } // 800F85E8
  c->r[3]=0u+0x00000110u; // 800F85EC
  c->lr=0x800F85F4u; f_800F4530(c); // 800F85F0
  cmps(c,0,(int32_t)c->r[3],0); // 800F85F4
  if (crb(c,2)) { goto L_800F8624; } // 800F85F8
  c->r[0]=0u+0x00000207u; // 800F85FC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F8600
  c->lr=0x800F8608u; f_800F7DC0(c); // 800F8604
  goto L_800F8624; // 800F8608
L_800F860C:;
  c->r[3]=0u+0x803D0000u; // 800F860C
  c->r[3]=c->r[3]+0xFFFF9E38u; // 800F8610
  c->r[0]=R32(c->r[3]+0x00000008u); // 800F8614
  cmps(c,0,(int32_t)c->r[0],0); // 800F8618
  if (!crb(c,2)) { goto L_800F8624; } // 800F861C
  c->lr=0x800F8624u; f_80102064(c); // 800F8620
L_800F8624:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8624
  c->lr=c->r[0]; // 800F8628
  c->r[1]=c->r[1]+0x00000010u; // 800F862C
  return; // 800F8630
}

// bta_dm_discover
void f_800F8634(Ctx* __restrict c) {
  trace_call(0x800F8634u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8634
  c->r[0]=c->lr; // 800F8638
  c->r[4]=0u+0x803D0000u; // 800F863C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8640
  c->r[0]=0u+0x00000000u; // 800F8644
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8648
  c->r[31]=c->r[4]+0xFFFF9E38u; // 800F864C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F8650
  c->r[30]=c->r[3]|c->r[3]; // 800F8654
  c->r[5]=R32(c->r[3]+0x00000014u); // 800F8658
  W32(c->r[4]+0xFFFF9E38u,c->r[5]); // 800F865C
  c->r[4]=0u+0x80100000u; // 800F8660
  c->r[5]=R32(c->r[3]+0x00000010u); // 800F8664
  c->r[3]=c->r[4]+0xFFFF9454u; // 800F8668
  W32(c->r[31]+0x00000008u,c->r[5]); // 800F866C
  W32(c->r[31]+0x0000000Cu,c->r[5]); // 800F8670
  W8(c->r[31]+0x00000070u,c->r[0]); // 800F8674
  W32(c->r[31]+0x00000010u,c->r[0]); // 800F8678
  W8(c->r[31]+0x00000020u,c->r[0]); // 800F867C
  c->lr=0x800F8684u; f_80104CE4(c); // 800F8680
  c->r[3]=c->r[31]+0x0000001Au; // 800F8684
  c->r[4]=c->r[30]+0x00000008u; // 800F8688
  c->lr=0x800F8690u; f_800F7914(c); // 800F868C
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F8690
  cmps(c,0,(int32_t)c->r[0],0); // 800F8694
  if (crb(c,2)) { goto L_800F86A8; } // 800F8698
  c->r[3]=c->r[31]+0x0000001Au; // 800F869C
  c->lr=0x800F86A4u; f_800F90B0(c); // 800F86A0
  goto L_800F8730; // 800F86A4
L_800F86A8:;
  c->r[3]=0u+0x803D0000u; // 800F86A8
  c->r[3]=c->r[3]+0xFFFFA218u; // 800F86AC
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 800F86B0
  cmpu(c,0,c->r[4],0x00007530u); // 800F86B4
  if (!crb(c,0)) { goto L_800F86CC; } // 800F86B8
  c->r[5]=c->r[4]+0x00000064u; // 800F86BC
  c->r[3]=c->r[31]+0x00000058u; // 800F86C0
  c->r[4]=0u+0x00000205u; // 800F86C4
  c->lr=0x800F86CCu; f_800F7DDC(c); // 800F86C8
L_800F86CC:;
  c->r[31]=0u+0x803D0000u; // 800F86CC
  c->r[4]=0u+0x80100000u; // 800F86D0
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F86D4
  c->r[3]=c->r[31]+0x0000001Au; // 800F86D8
  c->r[4]=c->r[4]+0xFFFF9520u; // 800F86DC
  c->lr=0x800F86E4u; f_80101F7C(c); // 800F86E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F86E4
  cmpu(c,0,c->r[0],0x00000001u); // 800F86E8
  if (crb(c,2)) { goto L_800F8730; } // 800F86EC
  c->r[3]=c->r[31]+0x00000058u; // 800F86F0
  c->lr=0x800F86F8u; f_800F7DFC(c); // 800F86F4
  c->r[3]=0u+0x00000110u; // 800F86F8
  c->lr=0x800F8700u; f_800F4530(c); // 800F86FC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8700
  c->r[30]=c->r[3]|c->r[3]; // 800F8704
  if (crb(c,2)) { goto L_800F8730; } // 800F8708
  c->r[3]=c->r[3]+0x00000008u; // 800F870C
  c->r[4]=c->r[31]+0x0000001Au; // 800F8710
  c->lr=0x800F8718u; f_800F7914(c); // 800F8714
  c->r[3]=0u+0x00000000u; // 800F8718
  c->r[0]=0u+0x00000204u; // 800F871C
  W8(c->r[30]+0x0000000Eu,c->r[3]); // 800F8720
  c->r[3]=c->r[30]|c->r[30]; // 800F8724
  W16(c->r[30]+0x00000000u,c->r[0]); // 800F8728
  c->lr=0x800F8730u; f_800F7DC0(c); // 800F872C
L_800F8730:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8730
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8734
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F8738
  c->lr=c->r[0]; // 800F873C
  c->r[1]=c->r[1]+0x00000010u; // 800F8740
  return; // 800F8744
}

// bta_dm_inq_cmpl
void f_800F8748(Ctx* __restrict c) {
  trace_call(0x800F8748u);
  {uint32_t ea=c->r[1]+0xFFFFFDD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8748
  c->r[0]=c->lr; // 800F874C
  W32(c->r[1]+0x00000234u,c->r[0]); // 800F8750
  c->r[11]=c->r[1]+0x00000230u; // 800F8754
  c->lr=0x800F875Cu; f_800ADA2C(c); // 800F8758
  c->r[31]=c->r[3]|c->r[3]; // 800F875C
  c->r[27]=0u+0x00000001u; // 800F8760
  c->lr=0x800F8768u; f_8010219C(c); // 800F8764
  c->r[28]=0u+0x803D0000u; // 800F8768
  cmps(c,0,(int32_t)c->r[3],0); // 800F876C
  c->r[29]=c->r[28]+0xFFFF9E38u; // 800F8770
  W32(c->r[29]+0x00000004u,c->r[3]); // 800F8774
  if (crb(c,2)) { goto L_800F8900; } // 800F8778
  c->r[0]=R32(c->r[29]+0x00000008u); // 800F877C
  c->r[27]=0u+0x00000000u; // 800F8780
  cmps(c,0,(int32_t)c->r[0],0); // 800F8784
  if (crb(c,2)) { goto L_800F8800; } // 800F8788
  c->r[3]=c->r[3]+0x00000002u; // 800F878C
  c->lr=0x800F8794u; f_800FE614(c); // 800F8790
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F8794
  if (crb(c,2)) { goto L_800F87A8; } // 800F8798
  c->r[0]=0u+0x00000000u; // 800F879C
  W8(c->r[29]+0x00000078u,c->r[0]); // 800F87A0
  goto L_800F87B0; // 800F87A4
L_800F87A8:;
  c->r[0]=0u+0x00000001u; // 800F87A8
  W8(c->r[29]+0x00000078u,c->r[0]); // 800F87AC
L_800F87B0:;
  c->r[30]=0u+0x803D0000u; // 800F87B0
  c->r[3]=0u+0x80100000u; // 800F87B4
  c->r[30]=c->r[30]+0xFFFF9E38u; // 800F87B8
  c->r[29]=0u+0x00000000u; // 800F87BC
  W8(c->r[30]+0x00000079u,c->r[29]); // 800F87C0
  c->r[3]=c->r[3]+0xFFFF9454u; // 800F87C4
  c->lr=0x800F87CCu; f_80104CE4(c); // 800F87C8
  c->r[0]=R32(c->r[30]+0x00000008u); // 800F87CC
  c->r[3]=c->r[30]+0x0000001Au; // 800F87D0
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F87D4
  W8(c->r[30]+0x00000070u,c->r[29]); // 800F87D8
  c->r[4]=c->r[4]+0x00000002u; // 800F87DC
  W32(c->r[30]+0x00000010u,c->r[29]); // 800F87E0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800F87E4
  W8(c->r[30]+0x00000020u,c->r[29]); // 800F87E8
  c->lr=0x800F87F0u; f_800F7914(c); // 800F87EC
  c->r[3]=R32(c->r[30]+0x00000004u); // 800F87F0
  c->r[3]=c->r[3]+0x00000002u; // 800F87F4
  c->lr=0x800F87FCu; f_800F90B0(c); // 800F87F8
  goto L_800F8900; // 800F87FC
L_800F8800:;
  c->r[27]=0u+0x00000001u; // 800F8800
  c->r[30]=0u+0x00000000u; // 800F8804
  goto L_800F88F4; // 800F8808
L_800F880C:;
  c->r[0]=R8(c->r[4]+0x00000010u); // 800F880C
  cmps(c,0,(int32_t)c->r[0],0); // 800F8810
  if (crb(c,2)) { goto L_800F8844; } // 800F8814
  c->r[3]=c->r[1]+0x00000008u; // 800F8818
  c->r[4]=c->r[4]+0x00000002u; // 800F881C
  c->lr=0x800F8824u; f_800F7914(c); // 800F8820
  c->r[12]=R32(c->r[28]+0xFFFF9E38u); // 800F8824
  c->r[4]=c->r[1]+0x00000008u; // 800F8828
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 800F882C
  c->r[3]=0u+0x00000002u; // 800F8830
  W32(c->r[1]+0x00000108u,c->r[30]); // 800F8834
  c->ctr=c->r[12]; // 800F8838
  if (true) { c->lr=0x800F8840u; dispatch(c,c->ctr); } // 800F883C
  goto L_800F88E8; // 800F8840
L_800F8844:;
  c->r[3]=0u+0x803D0000u; // 800F8844
  c->r[3]=c->r[3]+0xFFFFA218u; // 800F8848
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 800F884C
  cmpu(c,0,c->r[4],0x00007530u); // 800F8850
  if (!crb(c,0)) { goto L_800F8870; } // 800F8854
  c->r[3]=0u+0x803D0000u; // 800F8858
  c->r[5]=c->r[4]+0x00000064u; // 800F885C
  c->r[3]=c->r[3]+0xFFFF9E38u; // 800F8860
  c->r[4]=0u+0x00000205u; // 800F8864
  c->r[3]=c->r[3]+0x00000058u; // 800F8868
  c->lr=0x800F8870u; f_800F7DDC(c); // 800F886C
L_800F8870:;
  c->r[30]=0u+0x803D0000u; // 800F8870
  c->r[4]=0u+0x80100000u; // 800F8874
  c->r[30]=c->r[30]+0xFFFF9E38u; // 800F8878
  c->r[3]=R32(c->r[30]+0x00000004u); // 800F887C
  c->r[4]=c->r[4]+0xFFFF9494u; // 800F8880
  c->r[3]=c->r[3]+0x00000002u; // 800F8884
  c->lr=0x800F888Cu; f_80101F7C(c); // 800F8888
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F888C
  cmpu(c,0,c->r[0],0x00000001u); // 800F8890
  if (crb(c,2)) { goto L_800F88E0; } // 800F8894
  c->r[3]=c->r[30]+0x00000058u; // 800F8898
  c->lr=0x800F88A0u; f_800F7DFC(c); // 800F889C
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F88A0
  c->r[3]=0u+0x00000110u; // 800F88A4
  c->r[28]=c->r[4]+0x00000002u; // 800F88A8
  c->lr=0x800F88B0u; f_800F4530(c); // 800F88AC
  cmps(c,0,(int32_t)c->r[3],0); // 800F88B0
  c->r[29]=c->r[3]|c->r[3]; // 800F88B4
  if (crb(c,2)) { goto L_800F88E0; } // 800F88B8
  c->r[4]=c->r[28]|c->r[28]; // 800F88BC
  c->r[3]=c->r[3]+0x00000008u; // 800F88C0
  c->lr=0x800F88C8u; f_800F7914(c); // 800F88C4
  c->r[3]=0u+0x00000000u; // 800F88C8
  c->r[0]=0u+0x00000204u; // 800F88CC
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 800F88D0
  c->r[3]=c->r[29]|c->r[29]; // 800F88D4
  W16(c->r[29]+0x00000000u,c->r[0]); // 800F88D8
  c->lr=0x800F88E0u; f_800F7DC0(c); // 800F88DC
L_800F88E0:;
  c->r[27]=0u+0x00000000u; // 800F88E0
  goto L_800F8900; // 800F88E4
L_800F88E8:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 800F88E8
  c->lr=0x800F88F0u; f_80102254(c); // 800F88EC
  W32(c->r[29]+0x00000004u,c->r[3]); // 800F88F0
L_800F88F4:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800F88F4
  cmps(c,0,(int32_t)c->r[4],0); // 800F88F8
  if (!crb(c,2)) { IRQCHK(c); goto L_800F880C; } // 800F88FC
L_800F8900:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F8900
  if (crb(c,2)) { goto L_800F8934; } // 800F8904
  c->r[4]=0u+0x803D0000u; // 800F8908
  c->r[0]=0u+0x00000000u; // 800F890C
  c->r[4]=c->r[4]+0xFFFF9E38u; // 800F8910
  c->r[3]=0u+0x00000110u; // 800F8914
  W32(c->r[4]+0x00000008u,c->r[0]); // 800F8918
  c->lr=0x800F8920u; f_800F4530(c); // 800F891C
  cmps(c,0,(int32_t)c->r[3],0); // 800F8920
  if (crb(c,2)) { goto L_800F8934; } // 800F8924
  c->r[0]=0u+0x00000207u; // 800F8928
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F892C
  c->lr=0x800F8934u; f_800F7DC0(c); // 800F8930
L_800F8934:;
  c->r[3]=0u+0x803D0000u; // 800F8934
  c->r[0]=R8(c->r[31]+0x00000008u); // 800F8938
  c->r[12]=R32(c->r[3]+0xFFFF9E38u); // 800F893C
  c->r[4]=c->r[1]+0x00000110u; // 800F8940
  W8(c->r[1]+0x00000110u,c->r[0]); // 800F8944
  c->r[3]=0u+0x00000001u; // 800F8948
  c->ctr=c->r[12]; // 800F894C
  if (true) { c->lr=0x800F8954u; dispatch(c,c->ctr); } // 800F8950
  c->r[11]=c->r[1]+0x00000230u; // 800F8954
  c->lr=0x800F895Cu; f_800ADA78(c); // 800F8958
  c->r[0]=R32(c->r[1]+0x00000234u); // 800F895C
  c->lr=c->r[0]; // 800F8960
  c->r[1]=c->r[1]+0x00000230u; // 800F8964
  return; // 800F8968
}

// bta_dm_rmt_name
void f_800F896C(Ctx* __restrict c) {
  trace_call(0x800F896Cu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F896C
  c->r[0]=c->lr; // 800F8970
  W32(c->r[1]+0x00000134u,c->r[0]); // 800F8974
  c->r[11]=c->r[1]+0x00000130u; // 800F8978
  c->lr=0x800F8980u; f_800ADA2C(c); // 800F897C
  c->r[28]=0u+0x803D0000u; // 800F8980
  c->r[31]=c->r[3]|c->r[3]; // 800F8984
  c->r[27]=0u+0x00000001u; // 800F8988
  c->r[30]=0u+0x00000000u; // 800F898C
  c->r[29]=c->r[28]+0xFFFF9E38u; // 800F8990
  goto L_800F8A70; // 800F8994
L_800F8998:;
  c->r[4]=R32(c->r[29]+0x00000004u); // 800F8998
  c->r[0]=R8(c->r[4]+0x00000010u); // 800F899C
  cmps(c,0,(int32_t)c->r[0],0); // 800F89A0
  if (crb(c,2)) { goto L_800F89D4; } // 800F89A4
  c->r[3]=c->r[1]+0x00000008u; // 800F89A8
  c->r[4]=c->r[4]+0x00000002u; // 800F89AC
  c->lr=0x800F89B4u; f_800F7914(c); // 800F89B0
  c->r[12]=R32(c->r[28]+0xFFFF9E38u); // 800F89B4
  c->r[4]=c->r[1]+0x00000008u; // 800F89B8
  W8(c->r[1]+0x0000000Eu,c->r[30]); // 800F89BC
  c->r[3]=0u+0x00000002u; // 800F89C0
  W32(c->r[1]+0x00000108u,c->r[30]); // 800F89C4
  c->ctr=c->r[12]; // 800F89C8
  if (true) { c->lr=0x800F89D0u; dispatch(c,c->ctr); } // 800F89CC
  goto L_800F8A70; // 800F89D0
L_800F89D4:;
  c->r[3]=0u+0x803D0000u; // 800F89D4
  c->r[3]=c->r[3]+0xFFFFA218u; // 800F89D8
  c->r[4]=R16(c->r[3]+0x0000064Cu); // 800F89DC
  cmpu(c,0,c->r[4],0x00007530u); // 800F89E0
  if (!crb(c,0)) { goto L_800F89F8; } // 800F89E4
  c->r[5]=c->r[4]+0x00000064u; // 800F89E8
  c->r[3]=c->r[29]+0x00000058u; // 800F89EC
  c->r[4]=0u+0x00000205u; // 800F89F0
  c->lr=0x800F89F8u; f_800F7DDC(c); // 800F89F4
L_800F89F8:;
  c->r[30]=0u+0x803D0000u; // 800F89F8
  c->r[4]=0u+0x80100000u; // 800F89FC
  c->r[30]=c->r[30]+0xFFFF9E38u; // 800F8A00
  c->r[3]=R32(c->r[30]+0x00000004u); // 800F8A04
  c->r[4]=c->r[4]+0xFFFF9494u; // 800F8A08
  c->r[3]=c->r[3]+0x00000002u; // 800F8A0C
  c->lr=0x800F8A14u; f_80101F7C(c); // 800F8A10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F8A14
  cmpu(c,0,c->r[0],0x00000001u); // 800F8A18
  if (crb(c,2)) { goto L_800F8A68; } // 800F8A1C
  c->r[3]=c->r[30]+0x00000058u; // 800F8A20
  c->lr=0x800F8A28u; f_800F7DFC(c); // 800F8A24
  c->r[4]=R32(c->r[30]+0x00000004u); // 800F8A28
  c->r[3]=0u+0x00000110u; // 800F8A2C
  c->r[28]=c->r[4]+0x00000002u; // 800F8A30
  c->lr=0x800F8A38u; f_800F4530(c); // 800F8A34
  cmps(c,0,(int32_t)c->r[3],0); // 800F8A38
  c->r[29]=c->r[3]|c->r[3]; // 800F8A3C
  if (crb(c,2)) { goto L_800F8A68; } // 800F8A40
  c->r[4]=c->r[28]|c->r[28]; // 800F8A44
  c->r[3]=c->r[3]+0x00000008u; // 800F8A48
  c->lr=0x800F8A50u; f_800F7914(c); // 800F8A4C
  c->r[3]=0u+0x00000000u; // 800F8A50
  c->r[0]=0u+0x00000204u; // 800F8A54
  W8(c->r[29]+0x0000000Eu,c->r[3]); // 800F8A58
  c->r[3]=c->r[29]|c->r[29]; // 800F8A5C
  W16(c->r[29]+0x00000000u,c->r[0]); // 800F8A60
  c->lr=0x800F8A68u; f_800F7DC0(c); // 800F8A64
L_800F8A68:;
  c->r[27]=0u+0x00000000u; // 800F8A68
  goto L_800F8A84; // 800F8A6C
L_800F8A70:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 800F8A70
  c->lr=0x800F8A78u; f_80102254(c); // 800F8A74
  cmps(c,0,(int32_t)c->r[3],0); // 800F8A78
  W32(c->r[29]+0x00000004u,c->r[3]); // 800F8A7C
  if (!crb(c,2)) { IRQCHK(c); goto L_800F8998; } // 800F8A80
L_800F8A84:;
  cmps(c,0,(int32_t)c->r[27],0); // 800F8A84
  if (crb(c,2)) { goto L_800F8AA8; } // 800F8A88
  c->r[3]=0u+0x00000110u; // 800F8A8C
  c->lr=0x800F8A94u; f_800F4530(c); // 800F8A90
  cmps(c,0,(int32_t)c->r[3],0); // 800F8A94
  if (crb(c,2)) { goto L_800F8AA8; } // 800F8A98
  c->r[0]=0u+0x00000207u; // 800F8A9C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F8AA0
  c->lr=0x800F8AA8u; f_800F7DC0(c); // 800F8AA4
L_800F8AA8:;
  c->r[3]=0u+0x803D0000u; // 800F8AA8
  c->r[4]=c->r[31]+0x00000008u; // 800F8AAC
  c->r[12]=R32(c->r[3]+0xFFFF9E38u); // 800F8AB0
  c->r[3]=0u+0x00000002u; // 800F8AB4
  c->ctr=c->r[12]; // 800F8AB8
  if (true) { c->lr=0x800F8AC0u; dispatch(c,c->ctr); } // 800F8ABC
  c->r[11]=c->r[1]+0x00000130u; // 800F8AC0
  c->lr=0x800F8AC8u; f_800ADA78(c); // 800F8AC4
  c->r[0]=R32(c->r[1]+0x00000134u); // 800F8AC8
  c->lr=c->r[0]; // 800F8ACC
  c->r[1]=c->r[1]+0x00000130u; // 800F8AD0
  return; // 800F8AD4
}

// bta_dm_disc_rmt_name
void f_800F8AD8(Ctx* __restrict c) {
  trace_call(0x800F8AD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8AD8
  c->r[0]=c->lr; // 800F8ADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8AE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8AE4
  c->r[31]=c->r[3]|c->r[3]; // 800F8AE8
  c->r[3]=0u+0x00000110u; // 800F8AEC
  c->lr=0x800F8AF4u; f_800F4530(c); // 800F8AF0
  cmps(c,0,(int32_t)c->r[3],0); // 800F8AF4
  if (crb(c,2)) { goto L_800F8B08; } // 800F8AF8
  c->r[0]=0u+0x00000207u; // 800F8AFC
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F8B00
  c->lr=0x800F8B08u; f_800F7DC0(c); // 800F8B04
L_800F8B08:;
  c->r[0]=0u+0x00000000u; // 800F8B08
  c->r[5]=0u+0x803D0000u; // 800F8B0C
  W32(c->r[31]+0x00000108u,c->r[0]); // 800F8B10
  c->r[4]=c->r[31]+0x00000008u; // 800F8B14
  c->r[3]=0u+0x00000002u; // 800F8B18
  c->r[12]=R32(c->r[5]+0xFFFF9E38u); // 800F8B1C
  c->ctr=c->r[12]; // 800F8B20
  if (true) { c->lr=0x800F8B28u; dispatch(c,c->ctr); } // 800F8B24
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8B28
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8B2C
  c->lr=c->r[0]; // 800F8B30
  c->r[1]=c->r[1]+0x00000010u; // 800F8B34
  return; // 800F8B38
}

// bta_dm_sdp_result
void f_800F8B3C(Ctx* __restrict c) {
  trace_call(0x800F8B3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8B3C
  c->r[0]=c->lr; // 800F8B40
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F8B44
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F8B48
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F8B4C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F8B50
  c->r[29]=0u+0x00000000u; // 800F8B54
  c->r[5]=R16(c->r[3]+0x00000008u); // 800F8B58
  c->r[3]=0u+0x00000000u; // 800F8B5C
  cmps(c,0,(int32_t)c->r[5],0); // 800F8B60
  if (crb(c,2)) { goto L_800F8B78; } // 800F8B64
  cmpu(c,0,c->r[5],0x0000FFF0u); // 800F8B68
  if (crb(c,2)) { goto L_800F8B78; } // 800F8B6C
  cmpu(c,0,c->r[5],0x0000FFF4u); // 800F8B70
  if (!crb(c,2)) { goto L_800F8CC8; } // 800F8B74
L_800F8B78:;
  c->r[6]=0u+0x803D0000u; // 800F8B78
  c->r[4]=0u+0x802D0000u; // 800F8B7C
  c->r[6]=c->r[6]+0xFFFF9E38u; // 800F8B80
  cmpu(c,0,c->r[5],0x0000FFF4u); // 800F8B84
  c->r[5]=R8(c->r[6]+0x00000070u); // 800F8B88
  c->r[4]=c->r[4]+0xFFFF98B0u; // 800F8B8C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 800F8B90
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 800F8B94
  c->r[30]=R16(c->r[4]+c->r[0]); // 800F8B98
  if (crb(c,2)) { goto L_800F8BB8; } // 800F8B9C
  c->r[3]=R32(c->r[6]+0x00000014u); // 800F8BA0
  c->r[4]=c->r[30]|c->r[30]; // 800F8BA4
  c->r[5]=0u+0x00000000u; // 800F8BA8
  c->lr=0x800F8BB0u; f_8011C5FC(c); // 800F8BAC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8BB0
  if (crb(c,2)) { goto L_800F8C18; } // 800F8BB4
L_800F8BB8:;
  cmpu(c,0,c->r[30],0x00001200u); // 800F8BB8
  if (!crb(c,2)) { goto L_800F8BE8; } // 800F8BBC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8BC0
  if (crb(c,2)) { goto L_800F8BEC; } // 800F8BC4
  c->r[4]=0u+0x00010000u; // 800F8BC8
  c->r[0]=c->r[4]+0xFFFF8001u; // 800F8BCC
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800F8BD0
  c->lr=0x800F8BD8u; f_8011C5D4(c); // 800F8BD4
  cmps(c,0,(int32_t)c->r[3],0); // 800F8BD8
  if (crb(c,2)) { goto L_800F8BEC; } // 800F8BDC
  c->r[29]=0u+0x00000001u; // 800F8BE0
  goto L_800F8BEC; // 800F8BE4
L_800F8BE8:;
  c->r[29]=0u+0x00000001u; // 800F8BE8
L_800F8BEC:;
  cmps(c,0,(int32_t)c->r[29],0); // 800F8BEC
  if (crb(c,2)) { goto L_800F8C18; } // 800F8BF0
  c->r[6]=0u+0x803D0000u; // 800F8BF4
  c->r[4]=0u+0x00000001u; // 800F8BF8
  c->r[6]=c->r[6]+0xFFFF9E38u; // 800F8BFC
  c->r[3]=R8(c->r[6]+0x00000070u); // 800F8C00
  c->r[5]=R32(c->r[6]+0x00000010u); // 800F8C04
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800F8C08
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[4]<<((c->r[0])&31)); // 800F8C0C
  c->r[0]=c->r[5]|c->r[0]; // 800F8C10
  W32(c->r[6]+0x00000010u,c->r[0]); // 800F8C14
L_800F8C18:;
  c->r[30]=0u+0x803D0000u; // 800F8C18
  c->r[30]=c->r[30]+0xFFFF9E38u; // 800F8C1C
  c->r[3]=R32(c->r[30]+0x00000014u); // 800F8C20
  c->lr=0x800F8C28u; f_800F47C0(c); // 800F8C24
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 800F8C28
  c->r[31]=0u+0x00000000u; // 800F8C2C
  W32(c->r[30]+0x00000014u,c->r[31]); // 800F8C30
  cmps(c,0,(int32_t)c->r[0],0); // 800F8C34
  if (crb(c,2)) { goto L_800F8C48; } // 800F8C38
  c->r[3]=c->r[30]+0x0000001Au; // 800F8C3C
  c->lr=0x800F8C44u; f_800F90B0(c); // 800F8C40
  goto L_800F8D88; // 800F8C44
L_800F8C48:;
  c->r[3]=0u+0x80100000u; // 800F8C48
  c->r[3]=c->r[3]+0xFFFF9454u; // 800F8C4C
  c->lr=0x800F8C54u; f_80104D34(c); // 800F8C50
  c->r[3]=0u+0x00000110u; // 800F8C54
  c->lr=0x800F8C5Cu; f_800F4530(c); // 800F8C58
  cmps(c,0,(int32_t)c->r[3],0); // 800F8C5C
  c->r[29]=c->r[3]|c->r[3]; // 800F8C60
  if (crb(c,2)) { goto L_800F8D88; } // 800F8C64
  c->r[0]=0u+0x00000208u; // 800F8C68
  c->r[4]=c->r[30]+0x0000001Au; // 800F8C6C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F8C70
  W8(c->r[3]+0x0000010Cu,c->r[31]); // 800F8C74
  c->r[0]=R32(c->r[30]+0x00000010u); // 800F8C78
  W32(c->r[3]+0x00000108u,c->r[0]); // 800F8C7C
  c->r[3]=c->r[3]+0x00000008u; // 800F8C80
  c->lr=0x800F8C88u; f_800F7914(c); // 800F8C84
  c->r[0]=R8(c->r[30]+0x00000020u); // 800F8C88
  c->r[31]=c->r[30]+0x00000020u; // 800F8C8C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F8C90
  if (!crb(c,2)) { goto L_800F8CAC; } // 800F8C94
  c->r[3]=c->r[30]+0x0000001Au; // 800F8C98
  c->lr=0x800F8CA0u; f_800FF758(c); // 800F8C9C
  cmps(c,0,(int32_t)c->r[3],0); // 800F8CA0
  if (crb(c,2)) { goto L_800F8CAC; } // 800F8CA4
  c->r[31]=c->r[3]|c->r[3]; // 800F8CA8
L_800F8CAC:;
  c->r[4]=c->r[31]|c->r[31]; // 800F8CAC
  c->r[3]=c->r[29]+0x0000000Eu; // 800F8CB0
  c->r[5]=0u+0x00000020u; // 800F8CB4
  c->lr=0x800F8CBCu; f_800B788C(c); // 800F8CB8
  c->r[3]=c->r[29]|c->r[29]; // 800F8CBC
  c->lr=0x800F8CC4u; f_800F7DC0(c); // 800F8CC0
  goto L_800F8D88; // 800F8CC4
L_800F8CC8:;
  cmpu(c,0,c->r[5],0x0000FFF1u); // 800F8CC8
  if (crb(c,2)) { goto L_800F8CE0; } // 800F8CCC
  c->r[0]=c->r[5]+0x0000000Au; // 800F8CD0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 800F8CD4
  cmpu(c,0,c->r[0],0x00000001u); // 800F8CD8
  if (crb(c,1)) { goto L_800F8CF0; } // 800F8CDC
L_800F8CE0:;
  c->r[3]=0u+0x803D0000u; // 800F8CE0
  c->r[0]=0u+0x00000000u; // 800F8CE4
  c->r[3]=c->r[3]+0xFFFF9E38u; // 800F8CE8
  W8(c->r[3]+0x00000078u,c->r[0]); // 800F8CEC
L_800F8CF0:;
  c->r[31]=0u+0x803D0000u; // 800F8CF0
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F8CF4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F8CF8
  c->lr=0x800F8D00u; f_800F47C0(c); // 800F8CFC
  c->r[0]=0u+0x00000000u; // 800F8D00
  c->r[3]=0u+0x80100000u; // 800F8D04
  W32(c->r[31]+0x00000014u,c->r[0]); // 800F8D08
  c->r[3]=c->r[3]+0xFFFF9454u; // 800F8D0C
  c->lr=0x800F8D14u; f_80104D34(c); // 800F8D10
  c->r[3]=0u+0x00000110u; // 800F8D14
  c->lr=0x800F8D1Cu; f_800F4530(c); // 800F8D18
  cmps(c,0,(int32_t)c->r[3],0); // 800F8D1C
  c->r[29]=c->r[3]|c->r[3]; // 800F8D20
  if (crb(c,2)) { goto L_800F8D88; } // 800F8D24
  c->r[4]=0u+0x00000208u; // 800F8D28
  c->r[0]=0u+0x00000001u; // 800F8D2C
  W16(c->r[3]+0x00000000u,c->r[4]); // 800F8D30
  c->r[4]=c->r[31]+0x0000001Au; // 800F8D34
  W8(c->r[3]+0x0000010Cu,c->r[0]); // 800F8D38
  c->r[0]=R32(c->r[31]+0x00000010u); // 800F8D3C
  W32(c->r[3]+0x00000108u,c->r[0]); // 800F8D40
  c->r[3]=c->r[3]+0x00000008u; // 800F8D44
  c->lr=0x800F8D4Cu; f_800F7914(c); // 800F8D48
  c->r[0]=R8(c->r[31]+0x00000020u); // 800F8D4C
  c->r[30]=c->r[31]+0x00000020u; // 800F8D50
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F8D54
  if (!crb(c,2)) { goto L_800F8D70; } // 800F8D58
  c->r[3]=c->r[31]+0x0000001Au; // 800F8D5C
  c->lr=0x800F8D64u; f_800FF758(c); // 800F8D60
  cmps(c,0,(int32_t)c->r[3],0); // 800F8D64
  if (crb(c,2)) { goto L_800F8D70; } // 800F8D68
  c->r[30]=c->r[3]|c->r[3]; // 800F8D6C
L_800F8D70:;
  c->r[4]=c->r[30]|c->r[30]; // 800F8D70
  c->r[3]=c->r[29]+0x0000000Eu; // 800F8D74
  c->r[5]=0u+0x00000020u; // 800F8D78
  c->lr=0x800F8D80u; f_800B788C(c); // 800F8D7C
  c->r[3]=c->r[29]|c->r[29]; // 800F8D80
  c->lr=0x800F8D88u; f_800F7DC0(c); // 800F8D84
L_800F8D88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F8D88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F8D8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F8D90
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F8D94
  c->lr=c->r[0]; // 800F8D98
  c->r[1]=c->r[1]+0x00000020u; // 800F8D9C
  return; // 800F8DA0
}

// bta_dm_search_cmpl
void f_800F8DA4(Ctx* __restrict c) {
  trace_call(0x800F8DA4u);
  c->r[4]=0u+0x803D0000u; // 800F8DA4
  c->r[3]=0u+0x00000003u; // 800F8DA8
  c->r[12]=R32(c->r[4]+0xFFFF9E38u); // 800F8DAC
  c->r[4]=0u+0x00000000u; // 800F8DB0
  c->ctr=c->r[12]; // 800F8DB4
  if (true) { dispatch(c,c->ctr); return; } // 800F8DB8
}

// bta_dm_disc_result
void f_800F8DBC(Ctx* __restrict c) {
  trace_call(0x800F8DBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8DBC
  c->r[0]=c->lr; // 800F8DC0
  c->r[4]=0u+0x803D0000u; // 800F8DC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8DC8
  c->r[12]=R32(c->r[4]+0xFFFF9E38u); // 800F8DCC
  c->r[4]=c->r[3]+0x00000008u; // 800F8DD0
  c->r[3]=0u+0x00000002u; // 800F8DD4
  c->ctr=c->r[12]; // 800F8DD8
  if (true) { c->lr=0x800F8DE0u; dispatch(c,c->ctr); } // 800F8DDC
  c->r[3]=0u+0x00000110u; // 800F8DE0
  c->lr=0x800F8DE8u; f_800F4530(c); // 800F8DE4
  cmps(c,0,(int32_t)c->r[3],0); // 800F8DE8
  if (crb(c,2)) { goto L_800F8DFC; } // 800F8DEC
  c->r[0]=0u+0x00000207u; // 800F8DF0
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F8DF4
  c->lr=0x800F8DFCu; f_800F7DC0(c); // 800F8DF8
L_800F8DFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8DFC
  c->lr=c->r[0]; // 800F8E00
  c->r[1]=c->r[1]+0x00000010u; // 800F8E04
  return; // 800F8E08
}

// bta_dm_search_result
void f_800F8E0C(Ctx* __restrict c) {
  trace_call(0x800F8E0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8E0C
  c->r[0]=c->lr; // 800F8E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8E14
  c->r[0]=R32(c->r[3]+0x00000108u); // 800F8E18
  cmps(c,0,(int32_t)c->r[0],0); // 800F8E1C
  if (crb(c,2)) { goto L_800F8E3C; } // 800F8E20
  c->r[5]=0u+0x803D0000u; // 800F8E24
  c->r[4]=c->r[3]+0x00000008u; // 800F8E28
  c->r[12]=R32(c->r[5]+0xFFFF9E38u); // 800F8E2C
  c->r[3]=0u+0x00000002u; // 800F8E30
  c->ctr=c->r[12]; // 800F8E34
  if (true) { c->lr=0x800F8E3Cu; dispatch(c,c->ctr); } // 800F8E38
L_800F8E3C:;
  c->r[6]=0u+0x803D0000u; // 800F8E3C
  c->r[6]=c->r[6]+0xFFFF9E38u; // 800F8E40
  c->r[0]=R8(c->r[6]+0x00000078u); // 800F8E44
  cmps(c,0,(int32_t)c->r[0],0); // 800F8E48
  if (!crb(c,2)) { goto L_800F8E60; } // 800F8E4C
  c->r[0]=0u+0x00000000u; // 800F8E50
  W8(c->r[6]+0x00000078u,c->r[0]); // 800F8E54
  c->lr=0x800F8E5Cu; f_800F9250(c); // 800F8E58
  goto L_800F8E84; // 800F8E5C
L_800F8E60:;
  c->r[5]=0u+0x80100000u; // 800F8E60
  c->r[0]=0u+0x00000001u; // 800F8E64
  c->r[5]=c->r[5]+0xFFFF8E94u; // 800F8E68
  W8(c->r[6]+0x00000079u,c->r[0]); // 800F8E6C
  c->r[3]=c->r[6]+0x00000040u; // 800F8E70
  c->r[4]=0u+0x00000000u; // 800F8E74
  W32(c->r[6]+0x00000048u,c->r[5]); // 800F8E78
  c->r[5]=0u+0x00000BB8u; // 800F8E7C
  c->lr=0x800F8E84u; f_800F7DDC(c); // 800F8E80
L_800F8E84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8E84
  c->lr=c->r[0]; // 800F8E88
  c->r[1]=c->r[1]+0x00000010u; // 800F8E8C
  return; // 800F8E90
}

// bta_dm_search_timer_cback
void f_800F8E94(Ctx* __restrict c) {
  trace_call(0x800F8E94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8E94
  c->r[0]=c->lr; // 800F8E98
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8E9C
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F8EA0
  cmpu(c,0,c->r[0],0x00000004u); // 800F8EA4
  if (crb(c,0)) { goto L_800F8EBC; } // 800F8EA8
  c->r[4]=0u+0x80330000u; // 800F8EAC
  c->r[3]=0u+0x00000503u; // 800F8EB0
  c->r[4]=c->r[4]+0xFFFF9DA8u; // 800F8EB4
  c->lr=0x800F8EBCu; f_800F7280(c); // 800F8EB8
L_800F8EBC:;
  c->r[3]=0u+0x803D0000u; // 800F8EBC
  c->r[0]=0u+0x00000000u; // 800F8EC0
  c->r[3]=c->r[3]+0xFFFF9E38u; // 800F8EC4
  W8(c->r[3]+0x00000078u,c->r[0]); // 800F8EC8
  c->lr=0x800F8ED0u; f_800F9250(c); // 800F8ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8ED0
  c->lr=c->r[0]; // 800F8ED4
  c->r[1]=c->r[1]+0x00000010u; // 800F8ED8
  return; // 800F8EDC
}

// bta_dm_free_sdp_db
void f_800F8EE0(Ctx* __restrict c) {
  trace_call(0x800F8EE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8EE0
  c->r[0]=c->lr; // 800F8EE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8EE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8EEC
  c->r[31]=0u+0x803D0000u; // 800F8EF0
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F8EF4
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F8EF8
  cmps(c,0,(int32_t)c->r[3],0); // 800F8EFC
  if (crb(c,2)) { goto L_800F8F10; } // 800F8F00
  c->lr=0x800F8F08u; f_800F47C0(c); // 800F8F04
  c->r[0]=0u+0x00000000u; // 800F8F08
  W32(c->r[31]+0x00000014u,c->r[0]); // 800F8F0C
L_800F8F10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8F10
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8F14
  c->lr=c->r[0]; // 800F8F18
  c->r[1]=c->r[1]+0x00000010u; // 800F8F1C
  return; // 800F8F20
}

// bta_dm_queue_search
void f_800F8F24(Ctx* __restrict c) {
  trace_call(0x800F8F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8F24
  c->r[0]=c->lr; // 800F8F28
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8F2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8F30
  c->r[31]=c->r[3]|c->r[3]; // 800F8F34
  c->r[3]=0u+0x0000001Cu; // 800F8F38
  c->lr=0x800F8F40u; f_800F4530(c); // 800F8F3C
  c->r[6]=0u+0x803D0000u; // 800F8F40
  c->r[4]=c->r[31]|c->r[31]; // 800F8F44
  c->r[6]=c->r[6]+0xFFFF9E38u; // 800F8F48
  c->r[5]=0u+0x0000001Cu; // 800F8F4C
  W32(c->r[6]+0x00000074u,c->r[3]); // 800F8F50
  c->lr=0x800F8F58u; f_800043C4(c); // 800F8F54
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8F58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8F5C
  c->lr=c->r[0]; // 800F8F60
  c->r[1]=c->r[1]+0x00000010u; // 800F8F64
  return; // 800F8F68
}

// bta_dm_queue_disc
void f_800F8F6C(Ctx* __restrict c) {
  trace_call(0x800F8F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8F6C
  c->r[0]=c->lr; // 800F8F70
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8F74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8F78
  c->r[31]=c->r[3]|c->r[3]; // 800F8F7C
  c->r[3]=0u+0x00000018u; // 800F8F80
  c->lr=0x800F8F88u; f_800F4530(c); // 800F8F84
  c->r[6]=0u+0x803D0000u; // 800F8F88
  c->r[4]=c->r[31]|c->r[31]; // 800F8F8C
  c->r[6]=c->r[6]+0xFFFF9E38u; // 800F8F90
  c->r[5]=0u+0x00000018u; // 800F8F94
  W32(c->r[6]+0x00000074u,c->r[3]); // 800F8F98
  c->lr=0x800F8FA0u; f_800043C4(c); // 800F8F9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8FA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8FA4
  c->lr=c->r[0]; // 800F8FA8
  c->r[1]=c->r[1]+0x00000010u; // 800F8FAC
  return; // 800F8FB0
}

// bta_dm_search_clear_queue
void f_800F8FB4(Ctx* __restrict c) {
  trace_call(0x800F8FB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8FB4
  c->r[0]=c->lr; // 800F8FB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F8FBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F8FC0
  c->r[31]=0u+0x803D0000u; // 800F8FC4
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F8FC8
  c->r[3]=R32(c->r[31]+0x00000074u); // 800F8FCC
  cmps(c,0,(int32_t)c->r[3],0); // 800F8FD0
  if (crb(c,2)) { goto L_800F8FE4; } // 800F8FD4
  c->lr=0x800F8FDCu; f_800F47C0(c); // 800F8FD8
  c->r[0]=0u+0x00000000u; // 800F8FDC
  W32(c->r[31]+0x00000074u,c->r[0]); // 800F8FE0
L_800F8FE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F8FE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F8FE8
  c->lr=c->r[0]; // 800F8FEC
  c->r[1]=c->r[1]+0x00000010u; // 800F8FF0
  return; // 800F8FF4
}

// bta_dm_search_cancel_cmpl
void f_800F8FF8(Ctx* __restrict c) {
  trace_call(0x800F8FF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F8FF8
  c->r[0]=c->lr; // 800F8FFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9000
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9004
  c->r[31]=0u+0x803D0000u; // 800F9008
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F900C
  c->r[3]=R32(c->r[31]+0x00000074u); // 800F9010
  cmps(c,0,(int32_t)c->r[3],0); // 800F9014
  if (crb(c,2)) { goto L_800F9028; } // 800F9018
  c->lr=0x800F9020u; f_800F7DC0(c); // 800F901C
  c->r[0]=0u+0x00000000u; // 800F9020
  W32(c->r[31]+0x00000074u,c->r[0]); // 800F9024
L_800F9028:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9028
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F902C
  c->lr=c->r[0]; // 800F9030
  c->r[1]=c->r[1]+0x00000010u; // 800F9034
  return; // 800F9038
}

// bta_dm_search_cancel_transac_cmpl
void f_800F903C(Ctx* __restrict c) {
  trace_call(0x800F903Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F903C
  c->r[0]=c->lr; // 800F9040
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9044
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9048
  c->r[31]=0u+0x803D0000u; // 800F904C
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F9050
  c->r[3]=R32(c->r[31]+0x00000014u); // 800F9054
  cmps(c,0,(int32_t)c->r[3],0); // 800F9058
  if (crb(c,2)) { goto L_800F906C; } // 800F905C
  c->lr=0x800F9064u; f_800F47C0(c); // 800F9060
  c->r[0]=0u+0x00000000u; // 800F9064
  W32(c->r[31]+0x00000014u,c->r[0]); // 800F9068
L_800F906C:;
  c->r[4]=0u+0x803D0000u; // 800F906C
  c->r[3]=0u+0x00000004u; // 800F9070
  c->r[12]=R32(c->r[4]+0xFFFF9E38u); // 800F9074
  c->r[4]=0u+0x00000000u; // 800F9078
  c->ctr=c->r[12]; // 800F907C
  if (true) { c->lr=0x800F9084u; dispatch(c,c->ctr); } // 800F9080
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9088
  c->lr=c->r[0]; // 800F908C
  c->r[1]=c->r[1]+0x00000010u; // 800F9090
  return; // 800F9094
}

// bta_dm_search_cancel_notify
void f_800F9098(Ctx* __restrict c) {
  trace_call(0x800F9098u);
  c->r[4]=0u+0x803D0000u; // 800F9098
  c->r[3]=0u+0x00000004u; // 800F909C
  c->r[12]=R32(c->r[4]+0xFFFF9E38u); // 800F90A0
  c->r[4]=0u+0x00000000u; // 800F90A4
  c->ctr=c->r[12]; // 800F90A8
  if (true) { dispatch(c,c->ctr); return; } // 800F90AC
}

// bta_dm_find_services
void f_800F90B0(Ctx* __restrict c) {
  trace_call(0x800F90B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F90B0
  c->r[0]=c->lr; // 800F90B4
  W32(c->r[1]+0x00000054u,c->r[0]); // 800F90B8
  c->r[11]=c->r[1]+0x00000050u; // 800F90BC
  c->lr=0x800F90C4u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F90C0
  c->r[4]=R16(c->r[2]+0xFFFFB170u); // 800F90C4
  c->r[26]=0u+0x803D0000u; // 800F90C8
  c->r[0]=R16(c->r[2]+0xFFFFB172u); // 800F90CC
  c->r[25]=0u+0x802D0000u; // 800F90D0
  W16(c->r[1]+0x00000008u,c->r[4]); // 800F90D4
  c->r[30]=c->r[3]|c->r[3]; // 800F90D8
  c->r[25]=c->r[25]+0xFFFF98B0u; // 800F90DC
  c->r[26]=c->r[26]+0xFFFF9E38u; // 800F90E0
  W16(c->r[1]+0x0000000Au,c->r[0]); // 800F90E4
  c->r[31]=0u+0x00000001u; // 800F90E8
  c->r[23]=0u+0x00000001u; // 800F90EC
  c->r[24]=0u+0x00000002u; // 800F90F0
  c->r[27]=0u+0x80100000u; // 800F90F4
  c->r[28]=0u+0x00000000u; // 800F90F8
  c->r[29]=0u+0x00000017u; // 800F90FC
  goto L_800F91BC; // 800F9100
L_800F9104:;
  c->r[3]=R32(c->r[26]+0x0000000Cu); // 800F9104
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[23]<<((c->r[0])&31)); // 800F9108
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800F910C
  if (crb(c,2)) { goto L_800F91B0; } // 800F9110
  c->r[3]=0u+0x000000FAu; // 800F9114
  c->lr=0x800F911Cu; f_800F4530(c); // 800F9118
  cmps(c,0,(int32_t)c->r[3],0); // 800F911C
  W32(c->r[26]+0x00000014u,c->r[3]); // 800F9120
  if (crb(c,2)) { goto L_800F91B0; } // 800F9124
  c->r[3]=R8(c->r[26]+0x00000070u); // 800F9128
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 800F912C
  c->r[0]=rotl(c->r[3],1)&0xFFFFFFFEu; // 800F9130
  c->r[3]=((c->r[3])&0x20)?0u:(c->r[23]<<((c->r[3])&31)); // 800F9134
  c->r[0]=R16(c->r[25]+c->r[0]); // 800F9138
  c->r[3]=c->r[4]&~c->r[3]; // 800F913C
  W32(c->r[26]+0x0000000Cu,c->r[3]); // 800F9140
  cmpu(c,0,c->r[0],0x00001200u); // 800F9144
  W16(c->r[1]+0x0000000Cu,c->r[24]); // 800F9148
  W16(c->r[1]+0x00000010u,c->r[0]); // 800F914C
  if (!crb(c,2)) { goto L_800F9158; } // 800F9150
  c->r[31]=0u+0x00000002u; // 800F9154
L_800F9158:;
  c->r[3]=R32(c->r[26]+0x00000014u); // 800F9158
  c->r[7]=c->r[31]|c->r[31]; // 800F915C
  c->r[6]=c->r[1]+0x0000000Cu; // 800F9160
  c->r[8]=c->r[1]+0x00000008u; // 800F9164
  c->r[4]=0u+0x000000FAu; // 800F9168
  c->r[5]=0u+0x00000001u; // 800F916C
  c->lr=0x800F9174u; f_8011C19C(c); // 800F9170
  c->r[4]=R32(c->r[26]+0x00000014u); // 800F9174
  c->r[3]=c->r[30]|c->r[30]; // 800F9178
  c->r[5]=c->r[27]+0xFFFF9330u; // 800F917C
  c->lr=0x800F9184u; f_8011C570(c); // 800F9180
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F9184
  if (!crb(c,2)) { goto L_800F91A0; } // 800F9188
  c->r[3]=R32(c->r[26]+0x00000014u); // 800F918C
  c->lr=0x800F9194u; f_800F47C0(c); // 800F9190
  W32(c->r[26]+0x00000014u,c->r[28]); // 800F9194
  W8(c->r[26]+0x00000070u,c->r[29]); // 800F9198
  goto L_800F91B0; // 800F919C
L_800F91A0:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 800F91A0
  c->r[0]=c->r[3]+0x00000001u; // 800F91A4
  W8(c->r[26]+0x00000070u,c->r[0]); // 800F91A8
  goto L_800F9238; // 800F91AC
L_800F91B0:;
  c->r[3]=R8(c->r[26]+0x00000070u); // 800F91B0
  c->r[0]=c->r[3]+0x00000001u; // 800F91B4
  W8(c->r[26]+0x00000070u,c->r[0]); // 800F91B8
L_800F91BC:;
  c->r[0]=R8(c->r[26]+0x00000070u); // 800F91BC
  cmpu(c,0,c->r[0],0x00000017u); // 800F91C0
  if (crb(c,0)) { IRQCHK(c); goto L_800F9104; } // 800F91C4
  if (crb(c,0)) { goto L_800F9238; } // 800F91C8
  c->r[3]=0u+0x00000110u; // 800F91CC
  c->lr=0x800F91D4u; f_800F4530(c); // 800F91D0
  cmps(c,0,(int32_t)c->r[3],0); // 800F91D4
  c->r[24]=c->r[3]|c->r[3]; // 800F91D8
  if (crb(c,2)) { goto L_800F9238; } // 800F91DC
  c->r[0]=0u+0x00000208u; // 800F91E0
  c->r[4]=c->r[26]+0x0000001Au; // 800F91E4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F91E8
  c->r[0]=R32(c->r[26]+0x00000010u); // 800F91EC
  W32(c->r[3]+0x00000108u,c->r[0]); // 800F91F0
  c->r[3]=c->r[3]+0x00000008u; // 800F91F4
  c->lr=0x800F91FCu; f_800F7914(c); // 800F91F8
  c->r[0]=R8(c->r[26]+0x00000020u); // 800F91FC
  c->r[23]=c->r[26]+0x00000020u; // 800F9200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800F9204
  if (!crb(c,2)) { goto L_800F9220; } // 800F9208
  c->r[3]=c->r[26]+0x0000001Au; // 800F920C
  c->lr=0x800F9214u; f_800FF758(c); // 800F9210
  cmps(c,0,(int32_t)c->r[3],0); // 800F9214
  if (crb(c,2)) { goto L_800F9220; } // 800F9218
  c->r[23]=c->r[3]|c->r[3]; // 800F921C
L_800F9220:;
  c->r[4]=c->r[23]|c->r[23]; // 800F9220
  c->r[3]=c->r[24]+0x0000000Eu; // 800F9224
  c->r[5]=0u+0x00000020u; // 800F9228
  c->lr=0x800F9230u; f_800B788C(c); // 800F922C
  c->r[3]=c->r[24]|c->r[24]; // 800F9230
  c->lr=0x800F9238u; f_800F7DC0(c); // 800F9234
L_800F9238:;
  c->r[11]=c->r[1]+0x00000050u; // 800F9238
  c->lr=0x800F9240u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F923C
  c->r[0]=R32(c->r[1]+0x00000054u); // 800F9240
  c->lr=c->r[0]; // 800F9244
  c->r[1]=c->r[1]+0x00000050u; // 800F9248
  return; // 800F924C
}

// bta_dm_discover_next_device
void f_800F9250(Ctx* __restrict c) {
  trace_call(0x800F9250u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9250
  c->r[0]=c->lr; // 800F9254
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9258
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F925C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800F9260
  c->r[30]=0u+0x803D0000u; // 800F9264
  c->r[30]=c->r[30]+0xFFFF9E38u; // 800F9268
  c->r[3]=R32(c->r[30]+0x00000004u); // 800F926C
  c->lr=0x800F9274u; f_80102254(c); // 800F9270
  cmps(c,0,(int32_t)c->r[3],0); // 800F9274
  W32(c->r[30]+0x00000004u,c->r[3]); // 800F9278
  if (crb(c,2)) { goto L_800F92F4; } // 800F927C
  c->r[3]=c->r[3]+0x00000002u; // 800F9280
  c->lr=0x800F9288u; f_800FE614(c); // 800F9284
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800F9288
  if (crb(c,2)) { goto L_800F929C; } // 800F928C
  c->r[0]=0u+0x00000000u; // 800F9290
  W8(c->r[30]+0x00000078u,c->r[0]); // 800F9294
  goto L_800F92A4; // 800F9298
L_800F929C:;
  c->r[0]=0u+0x00000001u; // 800F929C
  W8(c->r[30]+0x00000078u,c->r[0]); // 800F92A0
L_800F92A4:;
  c->r[31]=0u+0x803D0000u; // 800F92A4
  c->r[3]=0u+0x80100000u; // 800F92A8
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F92AC
  c->r[30]=0u+0x00000000u; // 800F92B0
  W8(c->r[31]+0x00000079u,c->r[30]); // 800F92B4
  c->r[3]=c->r[3]+0xFFFF9454u; // 800F92B8
  c->lr=0x800F92C0u; f_80104CE4(c); // 800F92BC
  c->r[0]=R32(c->r[31]+0x00000008u); // 800F92C0
  c->r[3]=c->r[31]+0x0000001Au; // 800F92C4
  c->r[4]=R32(c->r[31]+0x00000004u); // 800F92C8
  W8(c->r[31]+0x00000070u,c->r[30]); // 800F92CC
  c->r[4]=c->r[4]+0x00000002u; // 800F92D0
  W32(c->r[31]+0x00000010u,c->r[30]); // 800F92D4
  W8(c->r[31]+0x00000020u,c->r[30]); // 800F92D8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 800F92DC
  c->lr=0x800F92E4u; f_800F7914(c); // 800F92E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 800F92E4
  c->r[3]=c->r[3]+0x00000002u; // 800F92E8
  c->lr=0x800F92F0u; f_800F90B0(c); // 800F92EC
  goto L_800F9318; // 800F92F0
L_800F92F4:;
  c->r[0]=0u+0x00000000u; // 800F92F4
  c->r[3]=0u+0x00000110u; // 800F92F8
  W32(c->r[30]+0x00000008u,c->r[0]); // 800F92FC
  c->lr=0x800F9304u; f_800F4530(c); // 800F9300
  cmps(c,0,(int32_t)c->r[3],0); // 800F9304
  if (crb(c,2)) { goto L_800F9318; } // 800F9308
  c->r[0]=0u+0x00000207u; // 800F930C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F9310
  c->lr=0x800F9318u; f_800F7DC0(c); // 800F9314
L_800F9318:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F931C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800F9320
  c->lr=c->r[0]; // 800F9324
  c->r[1]=c->r[1]+0x00000010u; // 800F9328
  return; // 800F932C
}

// bta_dm_sdp_callback
void f_800F9330(Ctx* __restrict c) {
  trace_call(0x800F9330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9330
  c->r[0]=c->lr; // 800F9334
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F933C
  c->r[31]=c->r[3]|c->r[3]; // 800F9340
  c->r[3]=0u+0x0000000Au; // 800F9344
  c->lr=0x800F934Cu; f_800F4530(c); // 800F9348
  cmps(c,0,(int32_t)c->r[3],0); // 800F934C
  if (crb(c,2)) { goto L_800F9364; } // 800F9350
  c->r[0]=0u+0x00000206u; // 800F9354
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F9358
  W16(c->r[3]+0x00000008u,c->r[31]); // 800F935C
  c->lr=0x800F9364u; f_800F7DC0(c); // 800F9360
L_800F9364:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9364
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9368
  c->lr=c->r[0]; // 800F936C
  c->r[1]=c->r[1]+0x00000010u; // 800F9370
  return; // 800F9374
}

// bta_dm_inq_results_cb
void f_800F9378(Ctx* __restrict c) {
  trace_call(0x800F9378u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9378
  c->r[0]=c->lr; // 800F937C
  W32(c->r[1]+0x00000124u,c->r[0]); // 800F9380
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800F9384
  c->r[31]=c->r[3]|c->r[3]; // 800F9388
  c->r[3]=c->r[1]+0x00000008u; // 800F938C
  c->r[4]=c->r[31]+0x00000002u; // 800F9390
  c->lr=0x800F9398u; f_800F7914(c); // 800F9394
  c->r[3]=c->r[1]+0x0000000Eu; // 800F9398
  c->r[4]=c->r[31]+0x00000008u; // 800F939C
  c->r[5]=0u+0x00000003u; // 800F93A0
  c->lr=0x800F93A8u; f_800043C4(c); // 800F93A4
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 800F93A8
  c->r[3]=c->r[31]+0x00000002u; // 800F93AC
  W8(c->r[1]+0x00000011u,c->r[0]); // 800F93B0
  c->lr=0x800F93B8u; f_801020DC(c); // 800F93B4
  cmps(c,0,(int32_t)c->r[3],0); // 800F93B8
  c->r[31]=c->r[3]|c->r[3]; // 800F93BC
  if (crb(c,2)) { goto L_800F93CC; } // 800F93C0
  c->r[0]=0u+0x00000000u; // 800F93C4
  W8(c->r[1]+0x00000012u,c->r[0]); // 800F93C8
L_800F93CC:;
  c->r[3]=0u+0x803D0000u; // 800F93CC
  c->r[4]=c->r[1]+0x00000008u; // 800F93D0
  c->r[12]=R32(c->r[3]+0xFFFF9E38u); // 800F93D4
  c->r[3]=0u+0x00000000u; // 800F93D8
  c->ctr=c->r[12]; // 800F93DC
  if (true) { c->lr=0x800F93E4u; dispatch(c,c->ctr); } // 800F93E0
  cmps(c,0,(int32_t)c->r[31],0); // 800F93E4
  if (crb(c,2)) { goto L_800F93F4; } // 800F93E8
  c->r[0]=R8(c->r[1]+0x00000012u); // 800F93EC
  W8(c->r[31]+0x00000010u,c->r[0]); // 800F93F0
L_800F93F4:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 800F93F4
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800F93F8
  c->lr=c->r[0]; // 800F93FC
  c->r[1]=c->r[1]+0x00000120u; // 800F9400
  return; // 800F9404
}

// bta_dm_inq_cmpl_cb
void f_800F9408(Ctx* __restrict c) {
  trace_call(0x800F9408u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9408
  c->r[0]=c->lr; // 800F940C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800F9414
  c->r[31]=c->r[3]|c->r[3]; // 800F9418
  c->r[3]=0u+0x00000110u; // 800F941C
  c->lr=0x800F9424u; f_800F4530(c); // 800F9420
  cmps(c,0,(int32_t)c->r[3],0); // 800F9424
  if (crb(c,2)) { goto L_800F9440; } // 800F9428
  c->r[0]=0u+0x00000203u; // 800F942C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800F9430
  c->r[0]=R8(c->r[31]+0x00000001u); // 800F9434
  W8(c->r[3]+0x00000008u,c->r[0]); // 800F9438
  c->lr=0x800F9440u; f_800F7DC0(c); // 800F943C
L_800F9440:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9440
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800F9444
  c->lr=c->r[0]; // 800F9448
  c->r[1]=c->r[1]+0x00000010u; // 800F944C
  return; // 800F9450
}

// bta_dm_service_search_remname_cback
void f_800F9454(Ctx* __restrict c) {
  trace_call(0x800F9454u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9454
  c->r[0]=c->lr; // 800F9458
  c->r[3]=0u+0x803D0000u; // 800F945C
  c->r[4]=c->r[5]|c->r[5]; // 800F9460
  c->r[3]=c->r[3]+0xFFFF9E38u; // 800F9464
  W32(c->r[1]+0x00000014u,c->r[0]); // 800F9468
  c->r[5]=0u+0x0000001Fu; // 800F946C
  c->r[3]=c->r[3]+0x00000020u; // 800F9470
  c->lr=0x800F9478u; f_800B788C(c); // 800F9474
  c->r[3]=0u+0x80100000u; // 800F9478
  c->r[3]=c->r[3]+0xFFFF9454u; // 800F947C
  c->lr=0x800F9484u; f_80104D34(c); // 800F9480
  c->r[0]=R32(c->r[1]+0x00000014u); // 800F9484
  c->lr=c->r[0]; // 800F9488
  c->r[1]=c->r[1]+0x00000010u; // 800F948C
  return; // 800F9490
}

// bta_dm_remname_cback
void f_800F9494(Ctx* __restrict c) {
  trace_call(0x800F9494u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9494
  c->r[0]=c->lr; // 800F9498
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F949C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F94A0
  c->r[31]=0u+0x803D0000u; // 800F94A4
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F94A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F94AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F94B0
  c->r[29]=c->r[3]|c->r[3]; // 800F94B4
  c->r[3]=c->r[31]+0x00000058u; // 800F94B8
  c->lr=0x800F94C0u; f_800F7DFC(c); // 800F94BC
  c->r[3]=0u+0x00000110u; // 800F94C0
  c->lr=0x800F94C8u; f_800F4530(c); // 800F94C4
  cmps(c,0,(int32_t)c->r[3],0); // 800F94C8
  c->r[30]=c->r[3]|c->r[3]; // 800F94CC
  if (crb(c,2)) { goto L_800F9504; } // 800F94D0
  c->r[4]=R32(c->r[31]+0x00000004u); // 800F94D4
  c->r[3]=c->r[3]+0x00000008u; // 800F94D8
  c->r[4]=c->r[4]+0x00000002u; // 800F94DC
  c->lr=0x800F94E4u; f_800F7914(c); // 800F94E0
  c->r[3]=c->r[30]+0x0000000Eu; // 800F94E4
  c->r[4]=c->r[29]+0x00000004u; // 800F94E8
  c->r[5]=0u+0x00000020u; // 800F94EC
  c->lr=0x800F94F4u; f_800B788C(c); // 800F94F0
  c->r[0]=0u+0x00000204u; // 800F94F4
  c->r[3]=c->r[30]|c->r[30]; // 800F94F8
  W16(c->r[30]+0x00000000u,c->r[0]); // 800F94FC
  c->lr=0x800F9504u; f_800F7DC0(c); // 800F9500
L_800F9504:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9504
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9508
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F950C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9510
  c->lr=c->r[0]; // 800F9514
  c->r[1]=c->r[1]+0x00000020u; // 800F9518
  return; // 800F951C
}

// bta_dm_disc_remname_cback
void f_800F9520(Ctx* __restrict c) {
  trace_call(0x800F9520u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9520
  c->r[0]=c->lr; // 800F9524
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9528
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F952C
  c->r[31]=0u+0x803D0000u; // 800F9530
  c->r[31]=c->r[31]+0xFFFF9E38u; // 800F9534
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9538
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F953C
  c->r[29]=c->r[3]|c->r[3]; // 800F9540
  c->r[3]=c->r[31]+0x00000058u; // 800F9544
  c->lr=0x800F954Cu; f_800F7DFC(c); // 800F9548
  c->r[3]=0u+0x00000110u; // 800F954C
  c->lr=0x800F9554u; f_800F4530(c); // 800F9550
  cmps(c,0,(int32_t)c->r[3],0); // 800F9554
  c->r[30]=c->r[3]|c->r[3]; // 800F9558
  if (crb(c,2)) { goto L_800F958C; } // 800F955C
  c->r[3]=c->r[3]+0x00000008u; // 800F9560
  c->r[4]=c->r[31]+0x0000001Au; // 800F9564
  c->lr=0x800F956Cu; f_800F7914(c); // 800F9568
  c->r[3]=c->r[30]+0x0000000Eu; // 800F956C
  c->r[4]=c->r[29]+0x00000004u; // 800F9570
  c->r[5]=0u+0x00000020u; // 800F9574
  c->lr=0x800F957Cu; f_800B788C(c); // 800F9578
  c->r[0]=0u+0x00000204u; // 800F957C
  c->r[3]=c->r[30]|c->r[30]; // 800F9580
  W16(c->r[30]+0x00000000u,c->r[0]); // 800F9584
  c->lr=0x800F958Cu; f_800F7DC0(c); // 800F9588
L_800F958C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F958C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9590
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9594
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9598
  c->lr=c->r[0]; // 800F959C
  c->r[1]=c->r[1]+0x00000020u; // 800F95A0
  return; // 800F95A4
}

// bta_dm_cancel_rmt_name
void f_800F95A8(Ctx* __restrict c) {
  trace_call(0x800F95A8u);
  f_80102064(c); return; // 800F95A8
}

// bta_dm_authorize_cback
void f_800F95AC(Ctx* __restrict c) {
  trace_call(0x800F95ACu);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F95AC
  c->r[0]=c->lr; // 800F95B0
  c->r[4]=c->r[3]|c->r[3]; // 800F95B4
  W32(c->r[1]+0x00000134u,c->r[0]); // 800F95B8
  c->r[3]=c->r[1]+0x00000008u; // 800F95BC
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 800F95C0
  c->r[31]=0u+0x00000001u; // 800F95C4
  W32(c->r[1]+0x00000128u,c->r[30]); // 800F95C8
  c->r[30]=c->r[7]|c->r[7]; // 800F95CC
  W32(c->r[1]+0x00000124u,c->r[29]); // 800F95D0
  c->r[29]=c->r[5]|c->r[5]; // 800F95D4
  c->lr=0x800F95DCu; f_800F7914(c); // 800F95D8
  c->r[4]=c->r[29]|c->r[29]; // 800F95DC
  c->r[3]=c->r[1]+0x0000000Eu; // 800F95E0
  c->r[5]=0u+0x00000020u; // 800F95E4
  c->lr=0x800F95ECu; f_800B788C(c); // 800F95E8
  c->r[3]=0u+0x802D0000u; // 800F95EC
  c->r[0]=0u+0x00000017u; // 800F95F0
  c->r[3]=c->r[3]+0xFFFF98E0u; // 800F95F4
  c->ctr=c->r[0]; // 800F95F8
L_800F95FC:;
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800F95FC
  c->r[0]=R32(c->r[3]+c->r[0]); // 800F9600
  cmpu(c,0,c->r[30],c->r[0]); // 800F9604
  if (!crb(c,2)) { goto L_800F9614; } // 800F9608
  W8(c->r[1]+0x00000106u,c->r[31]); // 800F960C
  goto L_800F961C; // 800F9610
L_800F9614:;
  c->r[31]=c->r[31]+0x00000001u; // 800F9614
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800F95FC; } // 800F9618
L_800F961C:;
  c->r[3]=0u+0x803D0000u; // 800F961C
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F9620
  c->r[12]=R32(c->r[3]+0x00000050u); // 800F9624
  cmps(c,0,(int32_t)c->r[12],0); // 800F9628
  if (crb(c,2)) { goto L_800F9654; } // 800F962C
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800F9630
  cmpu(c,0,c->r[0],0x00000017u); // 800F9634
  if (crb(c,1)) { goto L_800F9654; } // 800F9638
  c->r[4]=c->r[1]+0x00000008u; // 800F963C
  c->r[3]=0u+0x00000004u; // 800F9640
  c->ctr=c->r[12]; // 800F9644
  if (true) { c->lr=0x800F964Cu; dispatch(c,c->ctr); } // 800F9648
  c->r[3]=0u+0x00000001u; // 800F964C
  goto L_800F9658; // 800F9650
L_800F9654:;
  c->r[3]=0u+0x0000000Bu; // 800F9654
L_800F9658:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 800F9658
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 800F965C
  c->r[30]=R32(c->r[1]+0x00000128u); // 800F9660
  c->r[29]=R32(c->r[1]+0x00000124u); // 800F9664
  c->lr=c->r[0]; // 800F9668
  c->r[1]=c->r[1]+0x00000130u; // 800F966C
  return; // 800F9670
}

// bta_dm_pinname_cback
void f_800F9674(Ctx* __restrict c) {
  trace_call(0x800F9674u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9674
  c->r[0]=c->lr; // 800F9678
  W32(c->r[1]+0x00000124u,c->r[0]); // 800F967C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800F9680
  c->r[31]=0u+0x803D0000u; // 800F9684
  c->r[31]=c->r[31]+0xFFFF9EB4u; // 800F9688
  W32(c->r[1]+0x00000118u,c->r[30]); // 800F968C
  c->r[30]=c->r[3]|c->r[3]; // 800F9690
  c->r[3]=c->r[1]+0x00000008u; // 800F9694
  c->r[4]=c->r[31]+0x000000F8u; // 800F9698
  c->lr=0x800F96A0u; f_800F7914(c); // 800F969C
  c->r[4]=R8(c->r[31]+0x000000FEu); // 800F96A0
  cmps(c,0,(int32_t)c->r[30],0); // 800F96A4
  c->r[3]=R8(c->r[31]+0x000000FFu); // 800F96A8
  c->r[0]=R8(c->r[31]+0x00000100u); // 800F96AC
  W8(c->r[1]+0x00000106u,c->r[4]); // 800F96B0
  W8(c->r[1]+0x00000107u,c->r[3]); // 800F96B4
  W8(c->r[1]+0x00000108u,c->r[0]); // 800F96B8
  if (crb(c,2)) { goto L_800F96F8; } // 800F96BC
  c->r[0]=R16(c->r[30]+0x00000000u); // 800F96C0
  cmps(c,0,(int32_t)c->r[0],0); // 800F96C4
  if (!crb(c,2)) { goto L_800F96F8; } // 800F96C8
  c->r[0]=R16(c->r[30]+0x00000002u); // 800F96CC
  c->r[3]=c->r[1]+0x0000000Eu; // 800F96D0
  c->r[4]=c->r[30]+0x00000004u; // 800F96D4
  c->r[5]=0u+0x00000020u; // 800F96D8
  cmpu(c,0,c->r[0],0x00000020u); // 800F96DC
  if (!crb(c,0)) { goto L_800F96E8; } // 800F96E0
  c->r[5]=c->r[0]|c->r[0]; // 800F96E4
L_800F96E8:;
  c->lr=0x800F96ECu; f_800043C4(c); // 800F96E8
  c->r[0]=0u+0x00000000u; // 800F96EC
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 800F96F0
  goto L_800F9700; // 800F96F4
L_800F96F8:;
  c->r[0]=0u+0x00000000u; // 800F96F8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800F96FC
L_800F9700:;
  c->r[5]=0u+0x803D0000u; // 800F9700
  c->r[4]=c->r[1]+0x00000008u; // 800F9704
  c->r[5]=c->r[5]+0xFFFF9EB4u; // 800F9708
  c->r[3]=0u+0x00000002u; // 800F970C
  c->r[12]=R32(c->r[5]+0x00000050u); // 800F9710
  c->ctr=c->r[12]; // 800F9714
  if (true) { c->lr=0x800F971Cu; dispatch(c,c->ctr); } // 800F9718
  c->r[0]=R32(c->r[1]+0x00000124u); // 800F971C
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800F9720
  c->r[30]=R32(c->r[1]+0x00000118u); // 800F9724
  c->lr=c->r[0]; // 800F9728
  c->r[1]=c->r[1]+0x00000120u; // 800F972C
  return; // 800F9730
}

// bta_dm_pin_cback
void f_800F9734(Ctx* __restrict c) {
  trace_call(0x800F9734u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9734
  c->r[0]=c->lr; // 800F9738
  W32(c->r[1]+0x00000134u,c->r[0]); // 800F973C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 800F9740
  c->r[31]=0u+0x803D0000u; // 800F9744
  c->r[31]=c->r[31]+0xFFFF9EB4u; // 800F9748
  W32(c->r[1]+0x00000128u,c->r[30]); // 800F974C
  c->r[30]=c->r[5]|c->r[5]; // 800F9750
  W32(c->r[1]+0x00000124u,c->r[29]); // 800F9754
  c->r[29]=c->r[4]|c->r[4]; // 800F9758
  W32(c->r[1]+0x00000120u,c->r[28]); // 800F975C
  c->r[28]=c->r[3]|c->r[3]; // 800F9760
  c->r[0]=R32(c->r[31]+0x00000050u); // 800F9764
  cmps(c,0,(int32_t)c->r[0],0); // 800F9768
  if (!crb(c,2)) { goto L_800F9778; } // 800F976C
  c->r[3]=0u+0x0000000Bu; // 800F9770
  goto L_800F9844; // 800F9774
L_800F9778:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 800F9778
  cmps(c,0,(int32_t)c->r[0],0); // 800F977C
  if (!crb(c,2)) { goto L_800F97E8; } // 800F9780
  c->r[4]=c->r[28]|c->r[28]; // 800F9784
  c->r[3]=c->r[31]+0x000000F8u; // 800F9788
  c->lr=0x800F9790u; f_800F7914(c); // 800F978C
  c->r[0]=R8(c->r[29]+0x00000000u); // 800F9790
  c->r[4]=0u+0x80100000u; // 800F9794
  c->r[3]=c->r[28]|c->r[28]; // 800F9798
  W8(c->r[31]+0x000000FEu,c->r[0]); // 800F979C
  c->r[4]=c->r[4]+0xFFFF9674u; // 800F97A0
  c->r[0]=R8(c->r[29]+0x00000001u); // 800F97A4
  W8(c->r[31]+0x000000FFu,c->r[0]); // 800F97A8
  c->r[0]=R8(c->r[29]+0x00000002u); // 800F97AC
  W8(c->r[31]+0x00000100u,c->r[0]); // 800F97B0
  c->lr=0x800F97B8u; f_80101F7C(c); // 800F97B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800F97B8
  cmpu(c,0,c->r[0],0x00000001u); // 800F97BC
  if (!crb(c,2)) { goto L_800F97CC; } // 800F97C0
  c->r[3]=0u+0x00000001u; // 800F97C4
  goto L_800F9844; // 800F97C8
L_800F97CC:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F97CC
  cmpu(c,0,c->r[0],0x00000002u); // 800F97D0
  if (crb(c,0)) { goto L_800F97E8; } // 800F97D4
  c->r[4]=0u+0x80330000u; // 800F97D8
  c->r[3]=0u+0x00000501u; // 800F97DC
  c->r[4]=c->r[4]+0xFFFF9DC8u; // 800F97E0
  c->lr=0x800F97E8u; f_800F7280(c); // 800F97E4
L_800F97E8:;
  c->r[4]=c->r[28]|c->r[28]; // 800F97E8
  c->r[3]=c->r[1]+0x00000008u; // 800F97EC
  c->lr=0x800F97F4u; f_800F7914(c); // 800F97F0
  c->r[0]=R8(c->r[29]+0x00000000u); // 800F97F4
  c->r[4]=c->r[30]|c->r[30]; // 800F97F8
  c->r[3]=c->r[1]+0x0000000Eu; // 800F97FC
  c->r[5]=0u+0x00000020u; // 800F9800
  W8(c->r[1]+0x00000106u,c->r[0]); // 800F9804
  c->r[0]=R8(c->r[29]+0x00000001u); // 800F9808
  W8(c->r[1]+0x00000107u,c->r[0]); // 800F980C
  c->r[0]=R8(c->r[29]+0x00000002u); // 800F9810
  W8(c->r[1]+0x00000108u,c->r[0]); // 800F9814
  c->lr=0x800F981Cu; f_800B788C(c); // 800F9818
  c->r[3]=0u+0x803D0000u; // 800F981C
  c->r[0]=0u+0x00000000u; // 800F9820
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F9824
  W8(c->r[1]+0x0000002Eu,c->r[0]); // 800F9828
  c->r[12]=R32(c->r[3]+0x00000050u); // 800F982C
  c->r[4]=c->r[1]+0x00000008u; // 800F9830
  c->r[3]=0u+0x00000002u; // 800F9834
  c->ctr=c->r[12]; // 800F9838
  if (true) { c->lr=0x800F9840u; dispatch(c,c->ctr); } // 800F983C
  c->r[3]=0u+0x00000001u; // 800F9840
L_800F9844:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 800F9844
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 800F9848
  c->r[30]=R32(c->r[1]+0x00000128u); // 800F984C
  c->r[29]=R32(c->r[1]+0x00000124u); // 800F9850
  c->r[28]=R32(c->r[1]+0x00000120u); // 800F9854
  c->lr=c->r[0]; // 800F9858
  c->r[1]=c->r[1]+0x00000130u; // 800F985C
  return; // 800F9860
}

// fn_800F9864
void f_800F9864(Ctx* __restrict c) {
  trace_call(0x800F9864u);
  c->r[3]=0u+0x0000000Bu; // 800F9864
  return; // 800F9868
}

// bta_dm_new_link_key_cback
void f_800F986C(Ctx* __restrict c) {
  trace_call(0x800F986Cu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F986C
  c->r[0]=c->lr; // 800F9870
  c->r[4]=c->r[3]|c->r[3]; // 800F9874
  W32(c->r[1]+0x00000124u,c->r[0]); // 800F9878
  c->r[3]=c->r[1]+0x00000008u; // 800F987C
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800F9880
  c->r[31]=c->r[6]|c->r[6]; // 800F9884
  W32(c->r[1]+0x00000118u,c->r[30]); // 800F9888
  c->r[30]=c->r[5]|c->r[5]; // 800F988C
  c->lr=0x800F9894u; f_800F7914(c); // 800F9890
  c->r[4]=c->r[30]|c->r[30]; // 800F9894
  c->r[3]=c->r[1]+0x0000000Eu; // 800F9898
  c->r[5]=0u+0x0000001Fu; // 800F989C
  c->lr=0x800F98A4u; f_800043C4(c); // 800F98A0
  c->r[0]=0u+0x00000000u; // 800F98A4
  c->r[4]=c->r[31]|c->r[31]; // 800F98A8
  W8(c->r[1]+0x0000002Du,c->r[0]); // 800F98AC
  c->r[3]=c->r[1]+0x00000107u; // 800F98B0
  c->r[5]=0u+0x00000010u; // 800F98B4
  c->lr=0x800F98BCu; f_800043C4(c); // 800F98B8
  c->r[3]=0u+0x803D0000u; // 800F98BC
  c->r[0]=0u+0x00000001u; // 800F98C0
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F98C4
  W8(c->r[1]+0x00000106u,c->r[0]); // 800F98C8
  c->r[12]=R32(c->r[3]+0x00000050u); // 800F98CC
  W8(c->r[1]+0x00000117u,c->r[0]); // 800F98D0
  cmps(c,0,(int32_t)c->r[12],0); // 800F98D4
  if (crb(c,2)) { goto L_800F98EC; } // 800F98D8
  c->r[4]=c->r[1]+0x00000008u; // 800F98DC
  c->r[3]=0u+0x00000003u; // 800F98E0
  c->ctr=c->r[12]; // 800F98E4
  if (true) { c->lr=0x800F98ECu; dispatch(c,c->ctr); } // 800F98E8
L_800F98EC:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800F98EC
  c->r[3]=0u+0x00000001u; // 800F98F0
  c->r[30]=R32(c->r[1]+0x00000118u); // 800F98F4
  c->r[0]=R32(c->r[1]+0x00000124u); // 800F98F8
  c->lr=c->r[0]; // 800F98FC
  c->r[1]=c->r[1]+0x00000120u; // 800F9900
  return; // 800F9904
}

// bta_dm_authentication_complete_cback
void f_800F9908(Ctx* __restrict c) {
  trace_call(0x800F9908u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9908
  c->r[0]=c->lr; // 800F990C
  cmps(c,0,(int32_t)c->r[6],0); // 800F9910
  W32(c->r[1]+0x00000124u,c->r[0]); // 800F9914
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 800F9918
  c->r[31]=c->r[5]|c->r[5]; // 800F991C
  if (crb(c,2)) { goto L_800F9974; } // 800F9920
  c->r[4]=c->r[3]|c->r[3]; // 800F9924
  c->r[3]=c->r[1]+0x00000008u; // 800F9928
  c->lr=0x800F9930u; f_800F7914(c); // 800F992C
  c->r[4]=c->r[31]|c->r[31]; // 800F9930
  c->r[3]=c->r[1]+0x0000000Eu; // 800F9934
  c->r[5]=0u+0x0000001Fu; // 800F9938
  c->lr=0x800F9940u; f_800043C4(c); // 800F993C
  c->r[3]=0u+0x803D0000u; // 800F9940
  c->r[0]=0u+0x00000000u; // 800F9944
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F9948
  W8(c->r[1]+0x0000002Du,c->r[0]); // 800F994C
  c->r[12]=R32(c->r[3]+0x00000050u); // 800F9950
  W8(c->r[1]+0x00000117u,c->r[0]); // 800F9954
  cmps(c,0,(int32_t)c->r[12],0); // 800F9958
  W8(c->r[1]+0x00000106u,c->r[0]); // 800F995C
  if (crb(c,2)) { goto L_800F9974; } // 800F9960
  c->r[4]=c->r[1]+0x00000008u; // 800F9964
  c->r[3]=0u+0x00000003u; // 800F9968
  c->ctr=c->r[12]; // 800F996C
  if (true) { c->lr=0x800F9974u; dispatch(c,c->ctr); } // 800F9970
L_800F9974:;
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 800F9974
  c->r[3]=0u+0x00000000u; // 800F9978
  c->r[0]=R32(c->r[1]+0x00000124u); // 800F997C
  c->lr=c->r[0]; // 800F9980
  c->r[1]=c->r[1]+0x00000120u; // 800F9984
  return; // 800F9988
}

// bta_dm_local_addr_cback
void f_800F998C(Ctx* __restrict c) {
  trace_call(0x800F998Cu);
  c->r[4]=0u+0x803D0000u; // 800F998C
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800F9990
  c->r[12]=R32(c->r[4]+0x00000050u); // 800F9994
  cmps(c,0,(int32_t)c->r[12],0); // 800F9998
  if (crb(c,2)) return; // 800F999C
  c->r[4]=c->r[3]|c->r[3]; // 800F99A0
  c->r[3]=0u+0x00000000u; // 800F99A4
  c->ctr=c->r[12]; // 800F99A8
  if (true) { dispatch(c,c->ctr); return; } // 800F99AC
  return; // 800F99B0
}

// bta_dm_signal_strength
void f_800F99B4(Ctx* __restrict c) {
  trace_call(0x800F99B4u);
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800F99B4
  cmps(c,0,(int32_t)c->r[0],0); // 800F99B8
  if (crb(c,2)) { goto L_800F99E0; } // 800F99BC
  c->r[4]=0u+0x803D0000u; // 800F99C0
  c->r[0]=R8(c->r[3]+0x00000008u); // 800F99C4
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800F99C8
  W8(c->r[4]+0x0000006Cu,c->r[0]); // 800F99CC
  c->r[0]=R16(c->r[3]+0x0000000Au); // 800F99D0
  c->r[3]=0u+0x00000000u; // 800F99D4
  W16(c->r[4]+0x00000070u,c->r[0]); // 800F99D8
  f_800F99F0(c); return; // 800F99DC
L_800F99E0:;
  c->r[3]=0u+0x803D0000u; // 800F99E0
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F99E4
  c->r[3]=c->r[3]+0x00000054u; // 800F99E8
  f_800F7DFC(c); return; // 800F99EC
}

// bta_dm_signal_strength_timer_cback
void f_800F99F0(Ctx* __restrict c) {
  trace_call(0x800F99F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F99F0
  c->r[0]=c->lr; // 800F99F4
  c->r[3]=0u+0x803D0000u; // 800F99F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F99FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9A00
  c->r[31]=c->r[3]+0xFFFF9EB4u; // 800F9A04
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9A08
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F9A0C
  c->r[0]=R8(c->r[31]+0x0000006Cu); // 800F9A10
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800F9A14
  if (crb(c,2)) { goto L_800F9A50; } // 800F9A18
  c->r[29]=0u+0x00000000u; // 800F9A1C
  c->r[30]=0u+0x80100000u; // 800F9A20
  goto L_800F9A40; // 800F9A24
L_800F9A28:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800F9A28
  c->r[4]=c->r[30]+0xFFFF9DF0u; // 800F9A2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F9A30
  c->r[3]=c->r[31]+c->r[0]; // 800F9A34
  c->lr=0x800F9A3Cu; f_800FED9C(c); // 800F9A38
  c->r[29]=c->r[29]+0x00000001u; // 800F9A3C
L_800F9A40:;
  c->r[0]=R8(c->r[31]+0x0000004Du); // 800F9A40
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800F9A44
  cmpu(c,0,c->r[3],c->r[0]); // 800F9A48
  if (crb(c,0)) { IRQCHK(c); goto L_800F9A28; } // 800F9A4C
L_800F9A50:;
  c->r[3]=0u+0x803D0000u; // 800F9A50
  c->r[30]=c->r[3]+0xFFFF9EB4u; // 800F9A54
  c->r[0]=R8(c->r[30]+0x0000006Cu); // 800F9A58
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 800F9A5C
  if (crb(c,2)) { goto L_800F9A98; } // 800F9A60
  c->r[29]=0u+0x00000000u; // 800F9A64
  c->r[31]=0u+0x80100000u; // 800F9A68
  goto L_800F9A88; // 800F9A6C
L_800F9A70:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800F9A70
  c->r[4]=c->r[31]+0xFFFF9E5Cu; // 800F9A74
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F9A78
  c->r[3]=c->r[30]+c->r[0]; // 800F9A7C
  c->lr=0x800F9A84u; f_800FEED8(c); // 800F9A80
  c->r[29]=c->r[29]+0x00000001u; // 800F9A84
L_800F9A88:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800F9A88
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800F9A8C
  cmpu(c,0,c->r[3],c->r[0]); // 800F9A90
  if (crb(c,0)) { IRQCHK(c); goto L_800F9A70; } // 800F9A94
L_800F9A98:;
  c->r[7]=0u+0x803D0000u; // 800F9A98
  c->r[7]=c->r[7]+0xFFFF9EB4u; // 800F9A9C
  c->r[0]=R16(c->r[7]+0x00000070u); // 800F9AA0
  cmps(c,0,(int32_t)c->r[0],0); // 800F9AA4
  if (crb(c,2)) { goto L_800F9AC8; } // 800F9AA8
  c->r[6]=0u+0x80100000u; // 800F9AAC
  c->r[3]=c->r[7]+0x00000054u; // 800F9AB0
  c->r[6]=c->r[6]+0xFFFF99F0u; // 800F9AB4
  c->r[4]=0u+0x00000000u; // 800F9AB8
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)1000); // 800F9ABC
  W32(c->r[7]+0x0000005Cu,c->r[6]); // 800F9AC0
  c->lr=0x800F9AC8u; f_800F7DDC(c); // 800F9AC4
L_800F9AC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9AC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9ACC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9AD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9AD4
  c->lr=c->r[0]; // 800F9AD8
  c->r[1]=c->r[1]+0x00000020u; // 800F9ADC
  return; // 800F9AE0
}

// bta_dm_acl_change_cback
void f_800F9AE4(Ctx* __restrict c) {
  trace_call(0x800F9AE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9AE4
  c->r[0]=c->lr; // 800F9AE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9AEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9AF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9AF4
  c->r[30]=c->r[7]|c->r[7]; // 800F9AF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F9AFC
  c->r[29]=c->r[3]|c->r[3]; // 800F9B00
  c->r[3]=0u+0x00000012u; // 800F9B04
  c->lr=0x800F9B0Cu; f_800F4530(c); // 800F9B08
  cmps(c,0,(int32_t)c->r[3],0); // 800F9B0C
  c->r[31]=c->r[3]|c->r[3]; // 800F9B10
  if (crb(c,2)) { goto L_800F9B38; } // 800F9B14
  c->r[4]=c->r[29]|c->r[29]; // 800F9B18
  c->r[3]=c->r[3]+0x0000000Bu; // 800F9B1C
  c->lr=0x800F9B24u; f_800F7914(c); // 800F9B20
  W8(c->r[31]+0x0000000Au,c->r[30]); // 800F9B24
  c->r[0]=0u+0x00000105u; // 800F9B28
  c->r[3]=c->r[31]|c->r[31]; // 800F9B2C
  W16(c->r[31]+0x00000000u,c->r[0]); // 800F9B30
  c->lr=0x800F9B38u; f_800F7DC0(c); // 800F9B34
L_800F9B38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9B38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9B3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800F9B40
  c->r[29]=R32(c->r[1]+0x00000014u); // 800F9B44
  c->lr=c->r[0]; // 800F9B48
  c->r[1]=c->r[1]+0x00000020u; // 800F9B4C
  return; // 800F9B50
}

// bta_dm_acl_change
void f_800F9B54(Ctx* __restrict c) {
  trace_call(0x800F9B54u);
  {uint32_t ea=c->r[1]+0xFFFFFED0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9B54
  c->r[0]=c->lr; // 800F9B58
  W32(c->r[1]+0x00000134u,c->r[0]); // 800F9B5C
  W32(c->r[1]+0x0000012Cu,c->r[31]); // 800F9B60
  c->r[31]=c->r[3]+0x0000000Bu; // 800F9B64
  W32(c->r[1]+0x00000128u,c->r[30]); // 800F9B68
  W32(c->r[1]+0x00000124u,c->r[29]); // 800F9B6C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 800F9B70
  cmps(c,0,(int32_t)c->r[0],0); // 800F9B74
  if (crb(c,2)) { goto L_800F9C38; } // 800F9B78
  c->r[3]=0u+0x803D0000u; // 800F9B7C
  c->r[29]=0u+0x00000000u; // 800F9B80
  c->r[30]=c->r[3]+0xFFFF9EB4u; // 800F9B84
  goto L_800F9BAC; // 800F9B88
L_800F9B8C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800F9B8C
  c->r[4]=c->r[31]|c->r[31]; // 800F9B90
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F9B94
  c->r[3]=c->r[30]+c->r[0]; // 800F9B98
  c->lr=0x800F9BA0u; f_800F7948(c); // 800F9B9C
  cmps(c,0,(int32_t)c->r[3],0); // 800F9BA0
  if (crb(c,2)) { goto L_800F9BBC; } // 800F9BA4
  c->r[29]=c->r[29]+0x00000001u; // 800F9BA8
L_800F9BAC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800F9BAC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800F9BB0
  cmpu(c,0,c->r[3],c->r[0]); // 800F9BB4
  if (crb(c,0)) { IRQCHK(c); goto L_800F9B8C; } // 800F9BB8
L_800F9BBC:;
  c->r[30]=0u+0x803D0000u; // 800F9BBC
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800F9BC0
  c->r[30]=c->r[30]+0xFFFF9EB4u; // 800F9BC4
  c->r[3]=R8(c->r[30]+0x0000004Du); // 800F9BC8
  cmpu(c,0,c->r[0],c->r[3]); // 800F9BCC
  if (!crb(c,2)) { goto L_800F9BF0; } // 800F9BD0
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 800F9BD4
  c->r[4]=c->r[31]|c->r[31]; // 800F9BD8
  c->r[3]=c->r[30]+c->r[0]; // 800F9BDC
  c->lr=0x800F9BE4u; f_800F7914(c); // 800F9BE0
  c->r[3]=R8(c->r[30]+0x0000004Du); // 800F9BE4
  c->r[0]=c->r[3]+0x00000001u; // 800F9BE8
  W8(c->r[30]+0x0000004Du,c->r[0]); // 800F9BEC
L_800F9BF0:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800F9BF0
  c->r[30]=0u+0x803D0000u; // 800F9BF4
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F9BF8
  c->r[3]=0u+0x00000001u; // 800F9BFC
  c->r[30]=c->r[30]+0xFFFF9EB4u; // 800F9C00
  c->r[0]=0u+0x00000000u; // 800F9C04
  c->r[5]=c->r[30]+c->r[4]; // 800F9C08
  W8(c->r[5]+0x00000006u,c->r[3]); // 800F9C0C
  c->r[4]=c->r[31]|c->r[31]; // 800F9C10
  c->r[3]=c->r[1]+0x00000008u; // 800F9C14
  W8(c->r[5]+0x00000007u,c->r[0]); // 800F9C18
  c->lr=0x800F9C20u; f_800F7914(c); // 800F9C1C
  c->r[12]=R32(c->r[30]+0x00000050u); // 800F9C20
  c->r[4]=c->r[1]+0x00000008u; // 800F9C24
  c->r[3]=0u+0x00000005u; // 800F9C28
  c->ctr=c->r[12]; // 800F9C2C
  if (true) { c->lr=0x800F9C34u; dispatch(c,c->ctr); } // 800F9C30
  goto L_800F9DB8; // 800F9C34
L_800F9C38:;
  c->r[3]=0u+0x803D0000u; // 800F9C38
  c->r[29]=0u+0x00000000u; // 800F9C3C
  c->r[30]=c->r[3]+0xFFFF9EB4u; // 800F9C40
  goto L_800F9CAC; // 800F9C44
L_800F9C48:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800F9C48
  c->r[4]=c->r[31]|c->r[31]; // 800F9C4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F9C50
  c->r[3]=c->r[30]+c->r[0]; // 800F9C54
  c->lr=0x800F9C5Cu; f_800F7948(c); // 800F9C58
  cmps(c,0,(int32_t)c->r[3],0); // 800F9C5C
  if (!crb(c,2)) { goto L_800F9CA8; } // 800F9C60
  c->r[3]=0u+0x803D0000u; // 800F9C64
  c->r[30]=c->r[3]+0xFFFF9EB4u; // 800F9C68
  goto L_800F9C94; // 800F9C6C
L_800F9C70:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800F9C70
  c->r[5]=0u+0x0000000Bu; // 800F9C74
  c->r[0]=c->r[3]+0x00000001u; // 800F9C78
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)11); // 800F9C7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800F9C80
  c->r[3]=c->r[30]+c->r[3]; // 800F9C84
  c->r[4]=c->r[30]+c->r[0]; // 800F9C88
  c->lr=0x800F9C90u; f_800043C4(c); // 800F9C8C
  c->r[29]=c->r[29]+0x00000001u; // 800F9C90
L_800F9C94:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800F9C94
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800F9C98
  cmpu(c,0,c->r[3],c->r[0]); // 800F9C9C
  if (crb(c,0)) { IRQCHK(c); goto L_800F9C70; } // 800F9CA0
  goto L_800F9CBC; // 800F9CA4
L_800F9CA8:;
  c->r[29]=c->r[29]+0x00000001u; // 800F9CA8
L_800F9CAC:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800F9CAC
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800F9CB0
  cmpu(c,0,c->r[3],c->r[0]); // 800F9CB4
  if (crb(c,0)) { IRQCHK(c); goto L_800F9C48; } // 800F9CB8
L_800F9CBC:;
  c->r[4]=0u+0x803D0000u; // 800F9CBC
  c->r[30]=0u+0x803D0000u; // 800F9CC0
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800F9CC4
  c->r[30]=c->r[30]+0xFFFF9E38u; // 800F9CC8
  c->r[3]=R8(c->r[4]+0x0000004Du); // 800F9CCC
  c->r[0]=R8(c->r[30]+0x00000078u); // 800F9CD0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800F9CD4
  cmps(c,0,(int32_t)c->r[0],0); // 800F9CD8
  W8(c->r[4]+0x0000004Du,c->r[3]); // 800F9CDC
  if (crb(c,2)) { goto L_800F9D3C; } // 800F9CE0
  c->r[4]=c->r[31]|c->r[31]; // 800F9CE4
  c->r[3]=c->r[30]+0x0000001Au; // 800F9CE8
  c->lr=0x800F9CF0u; f_800F7948(c); // 800F9CEC
  cmps(c,0,(int32_t)c->r[3],0); // 800F9CF0
  if (!crb(c,2)) { goto L_800F9D3C; } // 800F9CF4
  c->r[0]=R8(c->r[30]+0x00000079u); // 800F9CF8
  c->r[3]=0u+0x00000000u; // 800F9CFC
  W8(c->r[30]+0x00000078u,c->r[3]); // 800F9D00
  cmps(c,0,(int32_t)c->r[0],0); // 800F9D04
  if (crb(c,2)) { goto L_800F9D3C; } // 800F9D08
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F9D0C
  cmpu(c,0,c->r[0],0x00000004u); // 800F9D10
  if (crb(c,0)) { goto L_800F9D28; } // 800F9D14
  c->r[4]=0u+0x80330000u; // 800F9D18
  c->r[3]=0u+0x00000503u; // 800F9D1C
  c->r[4]=c->r[4]+0xFFFF9E08u; // 800F9D20
  c->lr=0x800F9D28u; f_800F7280(c); // 800F9D24
L_800F9D28:;
  c->r[3]=0u+0x803D0000u; // 800F9D28
  c->r[3]=c->r[3]+0xFFFF9E38u; // 800F9D2C
  c->r[3]=c->r[3]+0x00000040u; // 800F9D30
  c->lr=0x800F9D38u; f_800F7DFC(c); // 800F9D34
  c->lr=0x800F9D3Cu; f_800F9250(c); // 800F9D38
L_800F9D3C:;
  c->r[30]=0u+0x803D0000u; // 800F9D3C
  c->r[30]=c->r[30]+0xFFFF9EB4u; // 800F9D40
  c->r[0]=R8(c->r[30]+0x00000072u); // 800F9D44
  cmps(c,0,(int32_t)c->r[0],0); // 800F9D48
  if (crb(c,2)) { goto L_800F9D88; } // 800F9D4C
  c->lr=0x800F9D54u; f_800FE6EC(c); // 800F9D50
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 800F9D54
  if (!crb(c,2)) { goto L_800F9D88; } // 800F9D58
  c->r[0]=0u+0x00000000u; // 800F9D5C
  c->r[3]=c->r[30]+0x00000074u; // 800F9D60
  W8(c->r[30]+0x00000072u,c->r[0]); // 800F9D64
  c->lr=0x800F9D6Cu; f_800F7DFC(c); // 800F9D68
  c->r[5]=0u+0x80100000u; // 800F9D6C
  c->r[3]=c->r[30]+0x00000074u; // 800F9D70
  c->r[5]=c->r[5]+0xFFFF9DD4u; // 800F9D74
  c->r[4]=0u+0x00000000u; // 800F9D78
  W32(c->r[30]+0x0000007Cu,c->r[5]); // 800F9D7C
  c->r[5]=0u+0x000003E8u; // 800F9D80
  c->lr=0x800F9D88u; f_800F7DDC(c); // 800F9D84
L_800F9D88:;
  c->r[4]=c->r[31]|c->r[31]; // 800F9D88
  c->r[3]=c->r[1]+0x00000008u; // 800F9D8C
  c->lr=0x800F9D94u; f_800F7914(c); // 800F9D90
  c->lr=0x800F9D98u; f_800FE748(c); // 800F9D94
  c->r[5]=0u+0x803D0000u; // 800F9D98
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800F9D9C
  c->r[5]=c->r[5]+0xFFFF9EB4u; // 800F9DA0
  c->r[4]=c->r[1]+0x00000008u; // 800F9DA4
  c->r[12]=R32(c->r[5]+0x00000050u); // 800F9DA8
  c->r[3]=0u+0x00000006u; // 800F9DAC
  c->ctr=c->r[12]; // 800F9DB0
  if (true) { c->lr=0x800F9DB8u; dispatch(c,c->ctr); } // 800F9DB4
L_800F9DB8:;
  c->r[0]=R32(c->r[1]+0x00000134u); // 800F9DB8
  c->r[31]=R32(c->r[1]+0x0000012Cu); // 800F9DBC
  c->r[30]=R32(c->r[1]+0x00000128u); // 800F9DC0
  c->r[29]=R32(c->r[1]+0x00000124u); // 800F9DC4
  c->lr=c->r[0]; // 800F9DC8
  c->r[1]=c->r[1]+0x00000130u; // 800F9DCC
  return; // 800F9DD0
}

// fn_800F9DD4
void f_800F9DD4(Ctx* __restrict c) {
  trace_call(0x800F9DD4u);
  c->r[5]=0u+0x803D0000u; // 800F9DD4
  c->r[3]=0u+0x00000001u; // 800F9DD8
  c->r[5]=c->r[5]+0xFFFF9EB4u; // 800F9DDC
  c->r[4]=0u+0x00000000u; // 800F9DE0
  c->r[12]=R32(c->r[5]+0x00000050u); // 800F9DE4
  c->ctr=c->r[12]; // 800F9DE8
  if (true) { dispatch(c,c->ctr); return; } // 800F9DEC
}

// fn_800F9DF0
void f_800F9DF0(Ctx* __restrict c) {
  trace_call(0x800F9DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9DF0
  c->r[0]=c->lr; // 800F9DF4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9DF8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9DFC
  c->r[31]=c->r[3]|c->r[3]; // 800F9E00
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F9E04
  cmps(c,0,(int32_t)c->r[0],0); // 800F9E08
  if (!crb(c,2)) { goto L_800F9E48; } // 800F9E0C
  c->r[3]=c->r[1]+0x00000008u; // 800F9E10
  c->r[4]=c->r[31]+0x00000003u; // 800F9E14
  c->lr=0x800F9E1Cu; f_800F7914(c); // 800F9E18
  c->r[0]=0u+0x00000001u; // 800F9E1C
  c->r[3]=0u+0x803D0000u; // 800F9E20
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800F9E24
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F9E28
  c->r[12]=R32(c->r[3]+0x00000050u); // 800F9E2C
  c->r[4]=c->r[1]+0x00000008u; // 800F9E30
  c->r[0]=R8(c->r[31]+0x00000002u); // 800F9E34
  c->r[3]=0u+0x00000007u; // 800F9E38
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800F9E3C
  c->ctr=c->r[12]; // 800F9E40
  if (true) { c->lr=0x800F9E48u; dispatch(c,c->ctr); } // 800F9E44
L_800F9E48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9E48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9E4C
  c->lr=c->r[0]; // 800F9E50
  c->r[1]=c->r[1]+0x00000020u; // 800F9E54
  return; // 800F9E58
}

// fn_800F9E5C
void f_800F9E5C(Ctx* __restrict c) {
  trace_call(0x800F9E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9E5C
  c->r[0]=c->lr; // 800F9E60
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9E64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9E68
  c->r[31]=c->r[3]|c->r[3]; // 800F9E6C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800F9E70
  cmps(c,0,(int32_t)c->r[0],0); // 800F9E74
  if (!crb(c,2)) { goto L_800F9EB4; } // 800F9E78
  c->r[3]=c->r[1]+0x00000008u; // 800F9E7C
  c->r[4]=c->r[31]+0x00000003u; // 800F9E80
  c->lr=0x800F9E88u; f_800F7914(c); // 800F9E84
  c->r[0]=0u+0x00000002u; // 800F9E88
  c->r[3]=0u+0x803D0000u; // 800F9E8C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800F9E90
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800F9E94
  c->r[12]=R32(c->r[3]+0x00000050u); // 800F9E98
  c->r[4]=c->r[1]+0x00000008u; // 800F9E9C
  c->r[0]=R8(c->r[31]+0x00000002u); // 800F9EA0
  c->r[3]=0u+0x00000007u; // 800F9EA4
  W8(c->r[1]+0x00000010u,c->r[0]); // 800F9EA8
  c->ctr=c->r[12]; // 800F9EAC
  if (true) { c->lr=0x800F9EB4u; dispatch(c,c->ctr); } // 800F9EB0
L_800F9EB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800F9EB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800F9EB8
  c->lr=c->r[0]; // 800F9EBC
  c->r[1]=c->r[1]+0x00000020u; // 800F9EC0
  return; // 800F9EC4
}

// bta_dm_l2cap_server_compress_cback
void f_800F9EC8(Ctx* __restrict c) {
  trace_call(0x800F9EC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9EC8
  c->r[0]=c->lr; // 800F9ECC
  W32(c->r[1]+0x00000034u,c->r[0]); // 800F9ED0
  c->r[11]=c->r[1]+0x00000030u; // 800F9ED4
  c->lr=0x800F9EDCu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800F9ED8
  c->r[31]=0u+0x803D0000u; // 800F9EDC
  c->r[27]=R32(c->r[1]+0x00000038u); // 800F9EE0
  c->r[31]=c->r[31]+0xFFFF9E08u; // 800F9EE4
  c->r[25]=c->r[3]|c->r[3]; // 800F9EE8
  c->r[26]=c->r[10]|c->r[10]; // 800F9EEC
  c->r[29]=0u+0x00000000u; // 800F9EF0
  c->r[30]=c->r[31]|c->r[31]; // 800F9EF4
  c->r[28]=0u+0x00000000u; // 800F9EF8
L_800F9EFC:;
  c->r[0]=R8(c->r[31]+0x00000008u); // 800F9EFC
  cmpu(c,0,c->r[0],0x00000001u); // 800F9F00
  if (!crb(c,2)) { goto L_800F9F7C; } // 800F9F04
  c->r[3]=c->r[30]|c->r[30]; // 800F9F08
  c->r[4]=c->r[25]|c->r[25]; // 800F9F0C
  c->lr=0x800F9F14u; f_800F7948(c); // 800F9F10
  cmps(c,0,(int32_t)c->r[3],0); // 800F9F14
  if (!crb(c,2)) { goto L_800F9F7C; } // 800F9F18
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800F9F1C
  cmpu(c,0,c->r[0],0x00000004u); // 800F9F20
  if (crb(c,0)) { goto L_800F9F50; } // 800F9F24
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 800F9F28
  c->r[5]=0u+0x803D0000u; // 800F9F2C
  c->r[5]=c->r[5]+0xFFFF9E08u; // 800F9F30
  c->r[4]=0u+0x80330000u; // 800F9F34
  c->r[0]=c->r[0]+c->r[28]; // 800F9F38
  c->r[3]=0u+0x00000503u; // 800F9F3C
  c->r[5]=c->r[5]+c->r[0]; // 800F9F40
  c->r[4]=c->r[4]+0xFFFF9E1Cu; // 800F9F44
  c->r[5]=R8(c->r[5]+0x00000006u); // 800F9F48
  c->lr=0x800F9F50u; f_800F72A0(c); // 800F9F4C
L_800F9F50:;
  c->r[0]=rotl(c->r[28],3)&0xFFFFFFF8u; // 800F9F50
  c->r[3]=0u+0x803D0000u; // 800F9F54
  c->r[3]=c->r[3]+0xFFFF9E08u; // 800F9F58
  c->r[4]=c->r[26]|c->r[26]; // 800F9F5C
  c->r[0]=c->r[0]+c->r[28]; // 800F9F60
  c->r[5]=c->r[27]|c->r[27]; // 800F9F64
  c->r[3]=c->r[3]+c->r[0]; // 800F9F68
  c->r[3]=R8(c->r[3]+0x00000006u); // 800F9F6C
  c->lr=0x800F9F74u; f_800F4030(c); // 800F9F70
  c->r[29]=c->r[3]|c->r[3]; // 800F9F74
  goto L_800F9F90; // 800F9F78
L_800F9F7C:;
  c->r[28]=c->r[28]+0x00000001u; // 800F9F7C
  c->r[30]=c->r[30]+0x00000009u; // 800F9F80
  cmps(c,0,(int32_t)c->r[28],5); // 800F9F84
  c->r[31]=c->r[31]+0x00000009u; // 800F9F88
  if (crb(c,0)) { IRQCHK(c); goto L_800F9EFC; } // 800F9F8C
L_800F9F90:;
  c->r[11]=c->r[1]+0x00000030u; // 800F9F90
  c->r[3]=c->r[29]|c->r[29]; // 800F9F94
  c->lr=0x800F9F9Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800F9F98
  c->r[0]=R32(c->r[1]+0x00000034u); // 800F9F9C
  c->lr=c->r[0]; // 800F9FA0
  c->r[1]=c->r[1]+0x00000030u; // 800F9FA4
  return; // 800F9FA8
}

// bta_dm_compress_cback
void f_800F9FAC(Ctx* __restrict c) {
  trace_call(0x800F9FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800F9FAC
  c->r[0]=c->lr; // 800F9FB0
  cmps(c,0,(int32_t)c->r[3],0); // 800F9FB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800F9FB8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800F9FBC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800F9FC0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800F9FC4
  if (!crb(c,2)) { goto L_800FA120; } // 800F9FC8
  c->r[3]=R32(c->r[13]+0xFFFF876Cu); // 800F9FCC
  c->r[7]=0u+0x00000001u; // 800F9FD0
  c->r[9]=R8(c->r[3]+0x00000001u); // 800F9FD4
  goto L_800FA110; // 800F9FD8
L_800F9FDC:;
  c->r[8]=rotl(c->r[7],0)&0x000000FFu; // 800F9FDC
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 800F9FE0
  c->r[0]=c->r[0]-c->r[8]; // 800F9FE4
  c->r[8]=c->r[3]+c->r[0]; // 800F9FE8
  c->r[0]=R8(c->r[8]+0x00000001u); // 800F9FEC
  cmpu(c,0,c->r[5],c->r[0]); // 800F9FF0
  if (crb(c,2)) { goto L_800FA000; } // 800F9FF4
  cmpu(c,0,c->r[0],0x000000FFu); // 800F9FF8
  if (!crb(c,2)) { goto L_800FA10C; } // 800F9FFC
L_800FA000:;
  c->r[0]=R8(c->r[8]+0x00000000u); // 800FA000
  cmpu(c,0,c->r[4],c->r[0]); // 800FA004
  if (!crb(c,2)) { goto L_800FA10C; } // 800FA008
  c->r[0]=R8(c->r[8]+0x00000002u); // 800FA00C
  cmpu(c,0,c->r[0],0x00000001u); // 800FA010
  if (!crb(c,2)) { goto L_800FA10C; } // 800FA014
  c->r[8]=0u+0x803D0000u; // 800FA018
  c->r[11]=R8(c->r[3]+0x00000001u); // 800FA01C
  c->r[10]=R8(c->r[8]+0xFFFF9FB8u); // 800FA020
  c->r[9]=c->r[8]+0xFFFF9FB8u; // 800FA024
  c->r[31]=0u+0x00000000u; // 800FA028
  c->r[29]=0u+0x00000001u; // 800FA02C
  goto L_800FA090; // 800FA030
L_800FA034:;
  c->r[8]=rotl(c->r[29],0)&0x000000FFu; // 800FA034
  c->r[0]=rotl(c->r[29],2)&0x000003FCu; // 800FA038
  c->r[0]=c->r[0]-c->r[8]; // 800FA03C
  c->r[12]=c->r[3]+c->r[0]; // 800FA040
  c->r[0]=R8(c->r[12]+0x00000002u); // 800FA044
  cmpu(c,0,c->r[0],0x00000002u); // 800FA048
  if (!crb(c,2)) { goto L_800FA08C; } // 800FA04C
  c->r[30]=0u+0x00000000u; // 800FA050
  goto L_800FA080; // 800FA054
L_800FA058:;
  c->r[8]=rotl(c->r[30],0)&0x000000FFu; // 800FA058
  c->r[0]=rotl(c->r[30],3)&0x000007F8u; // 800FA05C
  c->r[8]=c->r[0]+c->r[8]; // 800FA060
  c->r[0]=R8(c->r[12]+0x00000000u); // 800FA064
  c->r[8]=c->r[9]+c->r[8]; // 800FA068
  c->r[8]=R8(c->r[8]+0x00000007u); // 800FA06C
  cmpu(c,0,c->r[8],c->r[0]); // 800FA070
  if (!crb(c,2)) { goto L_800FA07C; } // 800FA074
  c->r[31]=0u+0x00000001u; // 800FA078
L_800FA07C:;
  c->r[30]=c->r[30]+0x00000001u; // 800FA07C
L_800FA080:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 800FA080
  cmpu(c,0,c->r[0],c->r[10]); // 800FA084
  if (crb(c,0)) { IRQCHK(c); goto L_800FA058; } // 800FA088
L_800FA08C:;
  c->r[29]=c->r[29]+0x00000001u; // 800FA08C
L_800FA090:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800FA090
  cmpu(c,0,c->r[0],c->r[11]); // 800FA094
  if (!crb(c,1)) { IRQCHK(c); goto L_800FA034; } // 800FA098
  cmps(c,0,(int32_t)c->r[31],0); // 800FA09C
  if (!crb(c,2)) { goto L_800FA1C8; } // 800FA0A0
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 800FA0A4
  c->r[30]=0u+0x803D0000u; // 800FA0A8
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800FA0AC
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800FA0B0
  c->r[30]=c->r[30]+0xFFFF9E08u; // 800FA0B4
  c->r[29]=c->r[0]+c->r[3]; // 800FA0B8
  c->r[31]=c->r[30]+c->r[29]; // 800FA0BC
  W8(c->r[31]+0x00000007u,c->r[5]); // 800FA0C0
  c->r[3]=c->r[31]|c->r[31]; // 800FA0C4
  W8(c->r[31]+0x00000006u,c->r[4]); // 800FA0C8
  c->r[4]=c->r[6]|c->r[6]; // 800FA0CC
  c->lr=0x800FA0D4u; f_800F7914(c); // 800FA0D0
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FA0D4
  c->r[3]=0u+0x00000001u; // 800FA0D8
  W8(c->r[31]+0x00000008u,c->r[3]); // 800FA0DC
  c->r[7]=c->r[31]|c->r[31]; // 800FA0E0
  cmpu(c,0,c->r[0],0x00000004u); // 800FA0E4
  if (crb(c,0)) { goto L_800FA1C8; } // 800FA0E8
  c->r[4]=0u+0x80330000u; // 800FA0EC
  c->r[5]=R8(c->r[31]+0x00000007u); // 800FA0F0
  c->r[6]=R8(c->r[31]+0x00000006u); // 800FA0F4
  c->r[4]=c->r[4]+0xFFFF9E4Cu; // 800FA0F8
  c->r[7]=R8(c->r[7]+0x00000008u); // 800FA0FC
  c->r[3]=0u+0x00000503u; // 800FA100
  c->lr=0x800FA108u; f_800F72E0(c); // 800FA104
  goto L_800FA1C8; // 800FA108
L_800FA10C:;
  c->r[7]=c->r[7]+0x00000001u; // 800FA10C
L_800FA110:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 800FA110
  cmpu(c,0,c->r[0],c->r[9]); // 800FA114
  if (!crb(c,1)) { IRQCHK(c); goto L_800F9FDC; } // 800FA118
  goto L_800FA1C8; // 800FA11C
L_800FA120:;
  cmpu(c,0,c->r[3],0x00000001u); // 800FA120
  if (!crb(c,2)) { goto L_800FA1C8; } // 800FA124
  c->r[7]=R32(c->r[13]+0xFFFF876Cu); // 800FA128
  c->r[8]=0u+0x00000001u; // 800FA12C
  c->r[6]=R8(c->r[7]+0x00000001u); // 800FA130
  goto L_800FA1BC; // 800FA134
L_800FA138:;
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 800FA138
  c->r[0]=rotl(c->r[8],2)&0x000003FCu; // 800FA13C
  c->r[0]=c->r[0]-c->r[3]; // 800FA140
  c->r[3]=c->r[7]+c->r[0]; // 800FA144
  c->r[0]=R8(c->r[3]+0x00000001u); // 800FA148
  cmpu(c,0,c->r[5],c->r[0]); // 800FA14C
  if (crb(c,2)) { goto L_800FA15C; } // 800FA150
  cmpu(c,0,c->r[0],0x000000FFu); // 800FA154
  if (!crb(c,2)) { goto L_800FA1B8; } // 800FA158
L_800FA15C:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FA15C
  cmpu(c,0,c->r[4],c->r[0]); // 800FA160
  if (!crb(c,2)) { goto L_800FA1B8; } // 800FA164
  c->r[3]=rotl(c->r[8],0)&0x000000FFu; // 800FA168
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FA16C
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 800FA170
  c->r[3]=0u+0x803D0000u; // 800FA174
  cmpu(c,0,c->r[0],0x00000004u); // 800FA178
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 800FA17C
  c->r[0]=c->r[4]+c->r[5]; // 800FA180
  c->r[3]=c->r[3]+0xFFFF9E08u; // 800FA184
  c->r[3]=c->r[3]+c->r[0]; // 800FA188
  c->r[0]=0u+0x00000000u; // 800FA18C
  W8(c->r[3]+0x00000008u,c->r[0]); // 800FA190
  if (crb(c,0)) { goto L_800FA1C8; } // 800FA194
  c->r[4]=0u+0x80330000u; // 800FA198
  c->r[5]=R8(c->r[3]+0x00000007u); // 800FA19C
  c->r[6]=R8(c->r[3]+0x00000006u); // 800FA1A0
  c->r[4]=c->r[4]+0xFFFF9E88u; // 800FA1A4
  c->r[7]=R8(c->r[3]+0x00000008u); // 800FA1A8
  c->r[3]=0u+0x00000503u; // 800FA1AC
  c->lr=0x800FA1B4u; f_800F72E0(c); // 800FA1B0
  goto L_800FA1C8; // 800FA1B4
L_800FA1B8:;
  c->r[8]=c->r[8]+0x00000001u; // 800FA1B8
L_800FA1BC:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 800FA1BC
  cmpu(c,0,c->r[0],c->r[6]); // 800FA1C0
  if (!crb(c,1)) { IRQCHK(c); goto L_800FA138; } // 800FA1C4
L_800FA1C8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA1C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA1CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FA1D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FA1D4
  c->lr=c->r[0]; // 800FA1D8
  c->r[1]=c->r[1]+0x00000020u; // 800FA1DC
  return; // 800FA1E0
}

// bta_dm_rm_cback
void f_800FA1E4(Ctx* __restrict c) {
  trace_call(0x800FA1E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA1E4
  c->r[0]=c->lr; // 800FA1E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA1EC
  c->r[11]=c->r[1]+0x00000020u; // 800FA1F0
  c->lr=0x800FA1F8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FA1F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FA1F8
  c->r[30]=c->r[4]|c->r[4]; // 800FA1FC
  c->r[31]=c->r[5]|c->r[5]; // 800FA200
  c->r[26]=c->r[6]|c->r[6]; // 800FA204
  if (!crb(c,2)) { goto L_800FA2D4; } // 800FA208
  c->r[3]=0u+0x803D0000u; // 800FA20C
  c->r[27]=0u+0x00000000u; // 800FA210
  c->r[29]=c->r[3]+0xFFFF9EB4u; // 800FA214
  goto L_800FA2C4; // 800FA218
L_800FA21C:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800FA21C
  c->r[4]=c->r[26]|c->r[26]; // 800FA220
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800FA224
  c->r[3]=c->r[29]+c->r[28]; // 800FA228
  c->lr=0x800FA230u; f_800F7948(c); // 800FA22C
  cmps(c,0,(int32_t)c->r[3],0); // 800FA230
  if (!crb(c,2)) { goto L_800FA2C0; } // 800FA234
  c->r[3]=c->r[29]+c->r[28]; // 800FA238
  c->r[0]=0u+0x00000001u; // 800FA23C
  W8(c->r[3]+0x00000006u,c->r[0]); // 800FA240
  c->r[7]=0u+0x00000001u; // 800FA244
  c->r[6]=R32(c->r[13]+0xFFFF8768u); // 800FA248
  c->r[4]=R8(c->r[6]+0x00000001u); // 800FA24C
  goto L_800FA2B0; // 800FA250
L_800FA254:;
  c->r[3]=rotl(c->r[7],0)&0x000000FFu; // 800FA254
  c->r[0]=rotl(c->r[7],2)&0x000003FCu; // 800FA258
  c->r[5]=c->r[0]-c->r[3]; // 800FA25C
  c->r[3]=c->r[6]+c->r[5]; // 800FA260
  c->r[0]=R8(c->r[3]+0x00000001u); // 800FA264
  cmpu(c,0,c->r[31],c->r[0]); // 800FA268
  if (crb(c,2)) { goto L_800FA278; } // 800FA26C
  cmpu(c,0,c->r[0],0x000000FFu); // 800FA270
  if (!crb(c,2)) { goto L_800FA2AC; } // 800FA274
L_800FA278:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FA278
  cmpu(c,0,c->r[30],c->r[0]); // 800FA27C
  if (!crb(c,2)) { goto L_800FA2AC; } // 800FA280
  c->r[3]=0u+0x803D0000u; // 800FA284
  c->r[4]=c->r[6]+c->r[5]; // 800FA288
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800FA28C
  c->r[4]=R8(c->r[4]+0x00000002u); // 800FA290
  c->r[3]=c->r[3]+c->r[28]; // 800FA294
  c->r[0]=R8(c->r[3]+0x00000007u); // 800FA298
  cmpu(c,0,c->r[4],c->r[0]); // 800FA29C
  if (!crb(c,1)) { goto L_800FA2D4; } // 800FA2A0
  W8(c->r[3]+0x00000007u,c->r[4]); // 800FA2A4
  goto L_800FA2D4; // 800FA2A8
L_800FA2AC:;
  c->r[7]=c->r[7]+0x00000001u; // 800FA2AC
L_800FA2B0:;
  c->r[0]=rotl(c->r[7],0)&0x000000FFu; // 800FA2B0
  cmpu(c,0,c->r[0],c->r[4]); // 800FA2B4
  if (!crb(c,1)) { IRQCHK(c); goto L_800FA254; } // 800FA2B8
  goto L_800FA2D4; // 800FA2BC
L_800FA2C0:;
  c->r[27]=c->r[27]+0x00000001u; // 800FA2C0
L_800FA2C4:;
  c->r[0]=R8(c->r[29]+0x0000004Du); // 800FA2C4
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 800FA2C8
  cmpu(c,0,c->r[3],c->r[0]); // 800FA2CC
  if (crb(c,0)) { IRQCHK(c); goto L_800FA21C; } // 800FA2D0
L_800FA2D4:;
  c->r[11]=c->r[1]+0x00000020u; // 800FA2D4
  c->lr=0x800FA2DCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FA2D8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA2DC
  c->lr=c->r[0]; // 800FA2E0
  c->r[1]=c->r[1]+0x00000020u; // 800FA2E4
  return; // 800FA2E8
}

// bta_dm_keep_acl
void f_800FA2EC(Ctx* __restrict c) {
  trace_call(0x800FA2ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA2EC
  c->r[0]=c->lr; // 800FA2F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA2F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA2F8
  c->r[4]=R16(c->r[3]+0x00000006u); // 800FA2FC
  c->r[3]=0u+0x803D0000u; // 800FA300
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800FA304
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; cr0(c,c->r[0]); // 800FA308
  W8(c->r[3]+0x00000101u,c->r[4]); // 800FA30C
  if (crb(c,2)) { goto L_800FA340; } // 800FA310
  c->r[31]=0u+0x00010000u; // 800FA314
  c->r[3]=c->r[2]+0xFFFFB1A8u; // 800FA318
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800FA31C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FA320
  c->lr=0x800FA328u; f_80110690(c); // 800FA324
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 800FA328
  c->r[3]=0u+0x00000000u; // 800FA32C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 800FA330
  c->r[5]=0u+0x00000001u; // 800FA334
  c->lr=0x800FA33Cu; f_801105C8(c); // 800FA338
  goto L_800FA35C; // 800FA33C
L_800FA340:;
  c->r[3]=c->r[2]+0xFFFFB1A8u; // 800FA340
  c->r[4]=0u+0x00000002u; // 800FA344
  c->lr=0x800FA34Cu; f_80110690(c); // 800FA348
  c->r[3]=0u+0x00000000u; // 800FA34C
  c->r[4]=0u+0x00000002u; // 800FA350
  c->r[5]=0u+0x00000001u; // 800FA354
  c->lr=0x800FA35Cu; f_801105C8(c); // 800FA358
L_800FA35C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA35C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA360
  c->lr=c->r[0]; // 800FA364
  c->r[1]=c->r[1]+0x00000010u; // 800FA368
  return; // 800FA36C
}

// bta_dm_immediate_disable
void f_800FA370(Ctx* __restrict c) {
  trace_call(0x800FA370u);
  c->r[5]=0u+0x803D0000u; // 800FA370
  c->r[3]=0u+0x00000001u; // 800FA374
  c->r[5]=c->r[5]+0xFFFF9EB4u; // 800FA378
  c->r[4]=0u+0x00000000u; // 800FA37C
  c->r[12]=R32(c->r[5]+0x00000050u); // 800FA380
  c->ctr=c->r[12]; // 800FA384
  if (true) { dispatch(c,c->ctr); return; } // 800FA388
}

// bta_dm_reset_complete
void f_800FA38C(Ctx* __restrict c) {
  trace_call(0x800FA38Cu);
  return; // 800FA38C
}

// bta_dm_send_hci_reset
void f_800FA390(Ctx* __restrict c) {
  trace_call(0x800FA390u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA390
  c->r[0]=c->lr; // 800FA394
  c->r[4]=0u+0x803D0000u; // 800FA398
  c->r[3]=0u+0x00000002u; // 800FA39C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA3A0
  c->r[0]=0u+0x00000001u; // 800FA3A4
  c->r[4]=c->r[4]+0xFFFF9D78u; // 800FA3A8
  W8(c->r[4]+0x0000007Eu,c->r[0]); // 800FA3AC
  c->lr=0x800FA3B4u; f_800F46D0(c); // 800FA3B0
  cmps(c,0,(int32_t)c->r[3],0); // 800FA3B4
  if (crb(c,2)) { goto L_800FA3C4; } // 800FA3B8
  c->r[4]=0u+0x00000000u; // 800FA3BC
  c->lr=0x800FA3C4u; f_8010BCF4(c); // 800FA3C0
L_800FA3C4:;
  c->r[3]=0u+0x80100000u; // 800FA3C4
  c->r[3]=c->r[3]+0xFFFFA38Cu; // 800FA3C8
  c->lr=0x800FA3D0u; f_800FFDDC(c); // 800FA3CC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA3D0
  c->lr=c->r[0]; // 800FA3D4
  c->r[1]=c->r[1]+0x00000010u; // 800FA3D8
  return; // 800FA3DC
}

// BTA_EnableBluetooth
void f_800FA3E0(Ctx* __restrict c) {
  trace_call(0x800FA3E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA3E0
  c->r[0]=c->lr; // 800FA3E4
  c->r[4]=0u+0x803D0000u; // 800FA3E8
  c->r[5]=0u+0x00000104u; // 800FA3EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA3F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA3F4
  c->r[31]=c->r[3]|c->r[3]; // 800FA3F8
  c->r[3]=c->r[4]+0xFFFF9EB4u; // 800FA3FC
  c->r[4]=0u+0x00000000u; // 800FA400
  c->lr=0x800FA408u; f_80004714(c); // 800FA404
  c->lr=0x800FA40Cu; f_800F5BC0(c); // 800FA408
  c->r[3]=0u+0x00000001u; // 800FA40C
  c->r[4]=c->r[2]+0xFFFFB178u; // 800FA410
  c->lr=0x800FA418u; f_800F7DAC(c); // 800FA414
  c->r[3]=0u+0x00000002u; // 800FA418
  c->r[4]=c->r[2]+0xFFFFB180u; // 800FA41C
  c->lr=0x800FA424u; f_800F7DAC(c); // 800FA420
  c->lr=0x800FA428u; f_800F5BD0(c); // 800FA424
  c->r[3]=0u+0x0000000Cu; // 800FA428
  c->lr=0x800FA430u; f_800F4530(c); // 800FA42C
  cmps(c,0,(int32_t)c->r[3],0); // 800FA430
  if (crb(c,2)) { goto L_800FA450; } // 800FA434
  c->r[0]=0u+0x00000100u; // 800FA438
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA43C
  W32(c->r[3]+0x00000008u,c->r[31]); // 800FA440
  c->lr=0x800FA448u; f_800F7DC0(c); // 800FA444
  c->r[3]=0u+0x00000000u; // 800FA448
  goto L_800FA454; // 800FA44C
L_800FA450:;
  c->r[3]=0u+0x00000001u; // 800FA450
L_800FA454:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA454
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA458
  c->lr=c->r[0]; // 800FA45C
  c->r[1]=c->r[1]+0x00000010u; // 800FA460
  return; // 800FA464
}

// BTA_DisableBluetooth
void f_800FA468(Ctx* __restrict c) {
  trace_call(0x800FA468u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA468
  c->r[0]=c->lr; // 800FA46C
  c->r[3]=0u+0x00000008u; // 800FA470
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA474
  c->lr=0x800FA47Cu; f_800F4530(c); // 800FA478
  cmps(c,0,(int32_t)c->r[3],0); // 800FA47C
  if (crb(c,2)) { goto L_800FA490; } // 800FA480
  c->r[0]=0u+0x00000101u; // 800FA484
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA488
  c->lr=0x800FA490u; f_800F7DC0(c); // 800FA48C
L_800FA490:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA490
  c->lr=c->r[0]; // 800FA494
  c->r[1]=c->r[1]+0x00000010u; // 800FA498
  return; // 800FA49C
}

// BTA_DmIsDeviceUp
void f_800FA4A0(Ctx* __restrict c) {
  trace_call(0x800FA4A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA4A0
  c->r[0]=c->lr; // 800FA4A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA4A8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA4AC
  c->lr=0x800FA4B4u; f_800F5BC0(c); // 800FA4B0
  c->lr=0x800FA4B8u; f_800FFE84(c); // 800FA4B4
  c->r[31]=c->r[3]|c->r[3]; // 800FA4B8
  c->lr=0x800FA4C0u; f_800F5BD0(c); // 800FA4BC
  c->r[3]=c->r[31]|c->r[31]; // 800FA4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA4C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA4C8
  c->lr=c->r[0]; // 800FA4CC
  c->r[1]=c->r[1]+0x00000010u; // 800FA4D0
  return; // 800FA4D4
}

// BTA_DmSetDeviceName
void f_800FA4D8(Ctx* __restrict c) {
  trace_call(0x800FA4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA4D8
  c->r[0]=c->lr; // 800FA4DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA4E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA4E4
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA4E8
  c->r[30]=c->r[3]|c->r[3]; // 800FA4EC
  c->r[3]=0u+0x00000028u; // 800FA4F0
  c->lr=0x800FA4F8u; f_800F4530(c); // 800FA4F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FA4F8
  c->r[31]=c->r[3]|c->r[3]; // 800FA4FC
  if (crb(c,2)) { goto L_800FA524; } // 800FA500
  c->r[0]=0u+0x00000102u; // 800FA504
  c->r[4]=c->r[30]|c->r[30]; // 800FA508
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA50C
  c->r[5]=0u+0x00000020u; // 800FA510
  c->r[3]=c->r[3]+0x00000008u; // 800FA514
  c->lr=0x800FA51Cu; f_800B788C(c); // 800FA518
  c->r[3]=c->r[31]|c->r[31]; // 800FA51C
  c->lr=0x800FA524u; f_800F7DC0(c); // 800FA520
L_800FA524:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA524
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA528
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA52C
  c->lr=c->r[0]; // 800FA530
  c->r[1]=c->r[1]+0x00000010u; // 800FA534
  return; // 800FA538
}

// BTA_DmSetVisibility
void f_800FA53C(Ctx* __restrict c) {
  trace_call(0x800FA53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA53C
  c->r[0]=c->lr; // 800FA540
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA544
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA548
  c->r[31]=c->r[4]|c->r[4]; // 800FA54C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FA550
  c->r[30]=c->r[3]|c->r[3]; // 800FA554
  c->r[3]=0u+0x00000110u; // 800FA558
  c->lr=0x800FA560u; f_800F4530(c); // 800FA55C
  cmps(c,0,(int32_t)c->r[3],0); // 800FA560
  if (crb(c,2)) { goto L_800FA57C; } // 800FA564
  c->r[0]=0u+0x00000103u; // 800FA568
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA56C
  W8(c->r[3]+0x00000008u,c->r[30]); // 800FA570
  W8(c->r[3]+0x00000009u,c->r[31]); // 800FA574
  c->lr=0x800FA57Cu; f_800F7DC0(c); // 800FA578
L_800FA57C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA57C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA580
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FA584
  c->lr=c->r[0]; // 800FA588
  c->r[1]=c->r[1]+0x00000010u; // 800FA58C
  return; // 800FA590
}

// BTA_DmSearch
void f_800FA594(Ctx* __restrict c) {
  trace_call(0x800FA594u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA594
  c->r[0]=c->lr; // 800FA598
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA59C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FA5A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FA5A4
  c->r[30]=c->r[5]|c->r[5]; // 800FA5A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FA5AC
  c->r[29]=c->r[4]|c->r[4]; // 800FA5B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FA5B4
  c->r[28]=c->r[3]|c->r[3]; // 800FA5B8
  c->r[3]=0u+0x0000001Cu; // 800FA5BC
  c->lr=0x800FA5C4u; f_800F4530(c); // 800FA5C0
  cmps(c,0,(int32_t)c->r[3],0); // 800FA5C4
  c->r[31]=c->r[3]|c->r[3]; // 800FA5C8
  if (crb(c,2)) { goto L_800FA5F8; } // 800FA5CC
  c->r[0]=0u+0x00000200u; // 800FA5D0
  c->r[4]=c->r[28]|c->r[28]; // 800FA5D4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA5D8
  c->r[5]=0u+0x0000000Au; // 800FA5DC
  c->r[3]=c->r[3]+0x00000008u; // 800FA5E0
  c->lr=0x800FA5E8u; f_800043C4(c); // 800FA5E4
  W32(c->r[31]+0x00000014u,c->r[29]); // 800FA5E8
  c->r[3]=c->r[31]|c->r[31]; // 800FA5EC
  W32(c->r[31]+0x00000018u,c->r[30]); // 800FA5F0
  c->lr=0x800FA5F8u; f_800F7DC0(c); // 800FA5F4
L_800FA5F8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA5F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA5FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FA600
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FA604
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FA608
  c->lr=c->r[0]; // 800FA60C
  c->r[1]=c->r[1]+0x00000020u; // 800FA610
  return; // 800FA614
}

// BTA_DmSearchCancel
void f_800FA618(Ctx* __restrict c) {
  trace_call(0x800FA618u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA618
  c->r[0]=c->lr; // 800FA61C
  c->r[3]=0u+0x00000008u; // 800FA620
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA624
  c->lr=0x800FA62Cu; f_800F4530(c); // 800FA628
  cmps(c,0,(int32_t)c->r[3],0); // 800FA62C
  if (crb(c,2)) { goto L_800FA640; } // 800FA630
  c->r[0]=0u+0x00000201u; // 800FA634
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA638
  c->lr=0x800FA640u; f_800F7DC0(c); // 800FA63C
L_800FA640:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA640
  c->lr=c->r[0]; // 800FA644
  c->r[1]=c->r[1]+0x00000010u; // 800FA648
  return; // 800FA64C
}

// BTA_DmPinReply
void f_800FA650(Ctx* __restrict c) {
  trace_call(0x800FA650u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA650
  c->r[0]=c->lr; // 800FA654
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA658
  c->r[11]=c->r[1]+0x00000020u; // 800FA65C
  c->lr=0x800FA664u; f_800ADA2C(c); // 800FA660
  c->r[27]=c->r[3]|c->r[3]; // 800FA664
  c->r[28]=c->r[4]|c->r[4]; // 800FA668
  c->r[29]=c->r[5]|c->r[5]; // 800FA66C
  c->r[30]=c->r[6]|c->r[6]; // 800FA670
  c->r[3]=0u+0x00000020u; // 800FA674
  c->lr=0x800FA67Cu; f_800F4530(c); // 800FA678
  cmps(c,0,(int32_t)c->r[3],0); // 800FA67C
  c->r[31]=c->r[3]|c->r[3]; // 800FA680
  if (crb(c,2)) { goto L_800FA6C4; } // 800FA684
  c->r[0]=0u+0x00000107u; // 800FA688
  c->r[4]=c->r[27]|c->r[27]; // 800FA68C
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA690
  c->r[3]=c->r[3]+0x00000008u; // 800FA694
  c->lr=0x800FA69Cu; f_800F7914(c); // 800FA698
  cmps(c,0,(int32_t)c->r[28],0); // 800FA69C
  W8(c->r[31]+0x0000000Eu,c->r[28]); // 800FA6A0
  if (crb(c,2)) { goto L_800FA6BC; } // 800FA6A4
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 800FA6A8
  c->r[4]=c->r[30]|c->r[30]; // 800FA6AC
  c->r[5]=c->r[29]|c->r[29]; // 800FA6B0
  c->r[3]=c->r[31]+0x00000010u; // 800FA6B4
  c->lr=0x800FA6BCu; f_800043C4(c); // 800FA6B8
L_800FA6BC:;
  c->r[3]=c->r[31]|c->r[31]; // 800FA6BC
  c->lr=0x800FA6C4u; f_800F7DC0(c); // 800FA6C0
L_800FA6C4:;
  c->r[11]=c->r[1]+0x00000020u; // 800FA6C4
  c->lr=0x800FA6CCu; f_800ADA78(c); // 800FA6C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA6CC
  c->lr=c->r[0]; // 800FA6D0
  c->r[1]=c->r[1]+0x00000020u; // 800FA6D4
  return; // 800FA6D8
}

// BTA_DmAddDevice
void f_800FA6DC(Ctx* __restrict c) {
  trace_call(0x800FA6DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA6DC
  c->r[0]=c->lr; // 800FA6E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FA6E4
  c->r[11]=c->r[1]+0x00000030u; // 800FA6E8
  c->lr=0x800FA6F0u; f_800ADA2C(c); // 800FA6EC
  c->r[28]=c->r[3]|c->r[3]; // 800FA6F0
  c->r[29]=c->r[4]|c->r[4]; // 800FA6F4
  c->r[30]=c->r[5]|c->r[5]; // 800FA6F8
  c->r[27]=c->r[6]|c->r[6]; // 800FA6FC
  c->r[3]=c->r[1]+0x00000008u; // 800FA700
  c->r[31]=0u+0x00000000u; // 800FA704
  c->r[4]=0u+0x00000000u; // 800FA708
  c->r[5]=0u+0x00000008u; // 800FA70C
  c->lr=0x800FA714u; f_80004714(c); // 800FA710
  cmps(c,0,(int32_t)c->r[27],0); // 800FA714
  if (crb(c,2)) { goto L_800FA780; } // 800FA718
  c->r[7]=0u+0x802D0000u; // 800FA71C
  c->r[5]=c->r[1]+0x00000008u; // 800FA720
  c->r[7]=c->r[7]+0xFFFF98E0u; // 800FA724
  c->r[3]=0u+0x00000001u; // 800FA728
  goto L_800FA76C; // 800FA72C
L_800FA730:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800FA730
  c->r[4]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800FA734
  c->r[0]=c->r[30]&c->r[4]; cr0(c,c->r[0]); // 800FA738
  if (crb(c,2)) { goto L_800FA768; } // 800FA73C
  c->r[0]=rotl(c->r[31],2)&0x000003FCu; // 800FA740
  c->r[30]=c->r[30]&~c->r[4]; // 800FA744
  c->r[4]=R32(c->r[7]+c->r[0]); // 800FA748
  c->r[0]=rotl(c->r[4],0)&0x00001FE0u; // 800FA74C
  c->r[6]=rotl(c->r[4],29)&0x000003FCu; // 800FA750
  c->r[0]=c->r[4]-c->r[0]; // 800FA754
  c->r[4]=R32(c->r[5]+c->r[6]); // 800FA758
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 800FA75C
  c->r[0]=c->r[4]|c->r[0]; // 800FA760
  W32(c->r[5]+c->r[6],c->r[0]); // 800FA764
L_800FA768:;
  c->r[31]=c->r[31]+0x00000001u; // 800FA768
L_800FA76C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FA76C
  if (crb(c,2)) { goto L_800FA780; } // 800FA770
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800FA774
  cmpu(c,0,c->r[0],0x00000017u); // 800FA778
  if (crb(c,0)) { IRQCHK(c); goto L_800FA730; } // 800FA77C
L_800FA780:;
  c->lr=0x800FA784u; f_800F5BC0(c); // 800FA780
  c->r[3]=c->r[28]|c->r[28]; // 800FA784
  c->r[8]=c->r[29]|c->r[29]; // 800FA788
  c->r[7]=c->r[1]+0x00000008u; // 800FA78C
  c->r[4]=0u+0x00000000u; // 800FA790
  c->r[5]=0u+0x00000000u; // 800FA794
  c->r[6]=0u+0x00000000u; // 800FA798
  c->lr=0x800FA7A0u; f_800FF524(c); // 800FA79C
  c->r[28]=c->r[3]|c->r[3]; // 800FA7A0
  c->lr=0x800FA7A8u; f_800F5BD0(c); // 800FA7A4
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 800FA7A8
  c->r[11]=c->r[1]+0x00000030u; // 800FA7AC
  c->r[0]=cntlz(c->r[0]); // 800FA7B0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 800FA7B4
  c->lr=0x800FA7BCu; f_800ADA78(c); // 800FA7B8
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FA7BC
  c->lr=c->r[0]; // 800FA7C0
  c->r[1]=c->r[1]+0x00000030u; // 800FA7C4
  return; // 800FA7C8
}

// BTA_DmRemoveDevice
void f_800FA7CC(Ctx* __restrict c) {
  trace_call(0x800FA7CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA7CC
  c->r[0]=c->lr; // 800FA7D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA7D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FA7D8
  c->r[31]=c->r[3]|c->r[3]; // 800FA7DC
  c->lr=0x800FA7E4u; f_800F5BC0(c); // 800FA7E0
  c->r[3]=c->r[31]|c->r[31]; // 800FA7E4
  c->lr=0x800FA7ECu; f_800FF6AC(c); // 800FA7E8
  c->r[31]=c->r[3]|c->r[3]; // 800FA7EC
  c->lr=0x800FA7F4u; f_800F5BD0(c); // 800FA7F0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800FA7F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FA7F8
  c->r[0]=cntlz(c->r[0]); // 800FA7FC
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 800FA800
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA804
  c->lr=c->r[0]; // 800FA808
  c->r[1]=c->r[1]+0x00000010u; // 800FA80C
  return; // 800FA810
}

// BTA_DmSendHciReset
void f_800FA814(Ctx* __restrict c) {
  trace_call(0x800FA814u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA814
  c->r[0]=c->lr; // 800FA818
  c->r[3]=0u+0x00000008u; // 800FA81C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA820
  c->lr=0x800FA828u; f_800F4530(c); // 800FA824
  cmps(c,0,(int32_t)c->r[3],0); // 800FA828
  if (crb(c,2)) { goto L_800FA83C; } // 800FA82C
  c->r[0]=0u+0x0000010Cu; // 800FA830
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FA834
  c->lr=0x800FA83Cu; f_800F7DC0(c); // 800FA838
L_800FA83C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FA83C
  c->lr=c->r[0]; // 800FA840
  c->r[1]=c->r[1]+0x00000010u; // 800FA844
  return; // 800FA848
}

// bta_dm_sm_execute
void f_800FA84C(Ctx* __restrict c) {
  trace_call(0x800FA84Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA84C
  c->r[0]=c->lr; // 800FA850
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA854
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FA858
  c->r[31]=0u+0x802D0000u; // 800FA85C
  c->r[31]=c->r[31]+0xFFFF9958u; // 800FA860
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FA864
  c->r[30]=0u+0x802D0000u; // 800FA868
  c->r[30]=c->r[30]+0xFFFF998Cu; // 800FA86C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FA870
  c->r[29]=0u+0x00000000u; // 800FA874
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FA878
  c->r[28]=c->r[3]|c->r[3]; // 800FA87C
L_800FA880:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 800FA880
  c->r[0]=c->r[29]+c->r[30]; // 800FA884
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800FA888
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 800FA88C
  c->r[3]=c->r[3]-c->r[4]; // 800FA890
  c->r[0]=R8(c->r[3]+c->r[0]); // 800FA894
  cmpu(c,0,c->r[0],0x0000000Du); // 800FA898
  if (crb(c,2)) { goto L_800FA8C0; } // 800FA89C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800FA8A0
  c->r[3]=c->r[28]|c->r[28]; // 800FA8A4
  c->r[12]=R32(c->r[31]+c->r[0]); // 800FA8A8
  c->ctr=c->r[12]; // 800FA8AC
  if (true) { c->lr=0x800FA8B4u; dispatch(c,c->ctr); } // 800FA8B0
  c->r[29]=c->r[29]+0x00000001u; // 800FA8B4
  cmps(c,0,(int32_t)c->r[29],2); // 800FA8B8
  if (crb(c,0)) { IRQCHK(c); goto L_800FA880; } // 800FA8BC
L_800FA8C0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA8C0
  c->r[3]=0u+0x00000001u; // 800FA8C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FA8C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FA8CC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FA8D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA8D4
  c->lr=c->r[0]; // 800FA8D8
  c->r[1]=c->r[1]+0x00000020u; // 800FA8DC
  return; // 800FA8E0
}

// bta_dm_search_sm_execute
void f_800FA8E4(Ctx* __restrict c) {
  trace_call(0x800FA8E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA8E4
  c->r[0]=c->lr; // 800FA8E8
  c->r[7]=0u+0x803D0000u; // 800FA8EC
  c->r[5]=0u+0x802D0000u; // 800FA8F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FA8F4
  c->r[7]=c->r[7]+0xFFFF9E38u; // 800FA8F8
  c->r[5]=c->r[5]+0xFFFF9A70u; // 800FA8FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FA900
  c->r[31]=0u+0x802D0000u; // 800FA904
  c->r[31]=c->r[31]+0xFFFF99B8u; // 800FA908
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FA90C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FA910
  c->r[29]=0u+0x00000000u; // 800FA914
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FA918
  c->r[28]=c->r[3]|c->r[3]; // 800FA91C
  c->r[6]=R16(c->r[7]+0x00000018u); // 800FA920
  c->r[0]=R16(c->r[3]+0x00000000u); // 800FA924
  c->r[6]=rotl(c->r[6],2)&0xFFFFFFFCu; // 800FA928
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 800FA92C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800FA930
  c->r[30]=R32(c->r[5]+c->r[6]); // 800FA934
  c->r[0]=c->r[0]-c->r[4]; // 800FA938
  c->r[3]=c->r[30]+c->r[0]; // 800FA93C
  c->r[0]=R8(c->r[3]+0x00000002u); // 800FA940
  W16(c->r[7]+0x00000018u,c->r[0]); // 800FA944
L_800FA948:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 800FA948
  c->r[0]=c->r[29]+c->r[30]; // 800FA94C
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 800FA950
  c->r[3]=rotl(c->r[3],2)&0x000003FCu; // 800FA954
  c->r[3]=c->r[3]-c->r[4]; // 800FA958
  c->r[0]=R8(c->r[3]+c->r[0]); // 800FA95C
  cmpu(c,0,c->r[0],0x00000012u); // 800FA960
  if (crb(c,2)) { goto L_800FA988; } // 800FA964
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800FA968
  c->r[3]=c->r[28]|c->r[28]; // 800FA96C
  c->r[12]=R32(c->r[31]+c->r[0]); // 800FA970
  c->ctr=c->r[12]; // 800FA974
  if (true) { c->lr=0x800FA97Cu; dispatch(c,c->ctr); } // 800FA978
  c->r[29]=c->r[29]+0x00000001u; // 800FA97C
  cmps(c,0,(int32_t)c->r[29],2); // 800FA980
  if (crb(c,0)) { IRQCHK(c); goto L_800FA948; } // 800FA984
L_800FA988:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FA988
  c->r[3]=0u+0x00000001u; // 800FA98C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FA990
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FA994
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FA998
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FA99C
  c->lr=c->r[0]; // 800FA9A0
  c->r[1]=c->r[1]+0x00000020u; // 800FA9A4
  return; // 800FA9A8
}

// bta_dm_init_pm
void f_800FA9AC(Ctx* __restrict c) {
  trace_call(0x800FA9ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FA9AC
  c->r[0]=c->lr; // 800FA9B0
  c->r[3]=0u+0x803D0000u; // 800FA9B4
  c->r[4]=0u+0x00000000u; // 800FA9B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FA9BC
  c->r[3]=c->r[3]+0xFFFF9FB8u; // 800FA9C0
  c->r[5]=0u+0x0000002Eu; // 800FA9C4
  c->lr=0x800FA9CCu; f_80004714(c); // 800FA9C8
  c->r[3]=R32(c->r[13]+0xFFFF8770u); // 800FA9CC
  c->r[0]=R8(c->r[3]+0x00000001u); // 800FA9D0
  cmps(c,0,(int32_t)c->r[0],0); // 800FA9D4
  if (crb(c,2)) { goto L_800FAA04; } // 800FA9D8
  c->r[3]=0u+0x80100000u; // 800FA9DC
  c->r[3]=c->r[3]+0xFFFFAA2Cu; // 800FA9E0
  c->lr=0x800FA9E8u; f_800F7A08(c); // 800FA9E4
  c->r[4]=0u+0x803D0000u; // 800FA9E8
  c->r[5]=0u+0x80100000u; // 800FA9EC
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800FA9F0
  c->r[3]=0u+0x00000003u; // 800FA9F4
  c->r[4]=c->r[4]+0x00000095u; // 800FA9F8
  c->r[5]=c->r[5]+0xFFFFB12Cu; // 800FA9FC
  c->lr=0x800FAA04u; f_801031A0(c); // 800FAA00
L_800FAA04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FAA04
  c->lr=c->r[0]; // 800FAA08
  c->r[1]=c->r[1]+0x00000010u; // 800FAA0C
  return; // 800FAA10
}

// bta_dm_disable_pm
void f_800FAA14(Ctx* __restrict c) {
  trace_call(0x800FAA14u);
  c->r[4]=0u+0x803D0000u; // 800FAA14
  c->r[3]=0u+0x00000004u; // 800FAA18
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800FAA1C
  c->r[5]=0u+0x00000000u; // 800FAA20
  c->r[4]=c->r[4]+0x00000095u; // 800FAA24
  f_801031A0(c); return; // 800FAA28
}

// bta_dm_pm_cback
void f_800FAA2C(Ctx* __restrict c) {
  trace_call(0x800FAA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FAA2C
  c->r[0]=c->lr; // 800FAA30
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FAA34
  c->r[11]=c->r[1]+0x00000040u; // 800FAA38
  c->lr=0x800FAA40u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FAA3C
  c->r[25]=c->r[3]|c->r[3]; // 800FAA40
  c->r[26]=c->r[4]|c->r[4]; // 800FAA44
  c->r[27]=c->r[5]|c->r[5]; // 800FAA48
  c->r[28]=c->r[6]|c->r[6]; // 800FAA4C
  c->r[3]=c->r[1]+0x0000000Cu; // 800FAA50
  c->lr=0x800FAA58u; f_80100C38(c); // 800FAA54
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FAA58
  if (!crb(c,2)) { goto L_800FAAC8; } // 800FAA5C
  c->r[0]=R16(c->r[1]+0x00000012u); // 800FAA60
  cmpu(c,0,c->r[0],0x0000000Fu); // 800FAA64
  if (!crb(c,2)) { goto L_800FAAC8; } // 800FAA68
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800FAA6C
  cmpu(c,0,c->r[0],0x00000003u); // 800FAA70
  if (!crb(c,0)) { goto L_800FAAC8; } // 800FAA74
  cmpu(c,0,c->r[25],0x00000004u); // 800FAA78
  if (!crb(c,2)) { goto L_800FAAA4; } // 800FAA7C
  c->r[5]=0u+0x802D0000u; // 800FAA80
  c->r[3]=c->r[28]|c->r[28]; // 800FAA84
  c->r[5]=c->r[5]+0xFFFF9810u; // 800FAA88
  c->r[4]=c->r[1]+0x00000008u; // 800FAA8C
  c->r[0]=R16(c->r[5]+0x00000004u); // 800FAA90
  c->r[0]=c->r[0]&0x0000000Bu; cr0(c,c->r[0]); // 800FAA94
  W16(c->r[1]+0x00000008u,c->r[0]); // 800FAA98
  c->lr=0x800FAAA0u; f_800FE048(c); // 800FAA9C
  goto L_800FAAC8; // 800FAAA0
L_800FAAA4:;
  cmpu(c,0,c->r[25],0x00000005u); // 800FAAA4
  if (!crb(c,2)) { goto L_800FAAC8; } // 800FAAA8
  c->r[5]=0u+0x802D0000u; // 800FAAAC
  c->r[3]=c->r[28]|c->r[28]; // 800FAAB0
  c->r[5]=c->r[5]+0xFFFF9810u; // 800FAAB4
  c->r[4]=c->r[1]+0x00000008u; // 800FAAB8
  c->r[0]=R16(c->r[5]+0x00000004u); // 800FAABC
  W16(c->r[1]+0x00000008u,c->r[0]); // 800FAAC0
  c->lr=0x800FAAC8u; f_800FE048(c); // 800FAAC4
L_800FAAC8:;
  c->r[5]=R32(c->r[13]+0xFFFF8770u); // 800FAAC8
  c->r[30]=0u+0x00000001u; // 800FAACC
  c->r[4]=R8(c->r[5]+0x00000001u); // 800FAAD0
  goto L_800FAB0C; // 800FAAD4
L_800FAAD8:;
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 800FAAD8
  c->r[0]=rotl(c->r[30],2)&0x000003FCu; // 800FAADC
  c->r[0]=c->r[0]-c->r[3]; // 800FAAE0
  c->r[3]=c->r[5]+c->r[0]; // 800FAAE4
  c->r[0]=R8(c->r[5]+c->r[0]); // 800FAAE8
  cmpu(c,0,c->r[26],c->r[0]); // 800FAAEC
  if (!crb(c,2)) { goto L_800FAB08; } // 800FAAF0
  c->r[0]=R8(c->r[3]+0x00000001u); // 800FAAF4
  cmpu(c,0,c->r[0],0x000000FFu); // 800FAAF8
  if (crb(c,2)) { goto L_800FAB18; } // 800FAAFC
  cmpu(c,0,c->r[27],c->r[0]); // 800FAB00
  if (crb(c,2)) { goto L_800FAB18; } // 800FAB04
L_800FAB08:;
  c->r[30]=c->r[30]+0x00000001u; // 800FAB08
L_800FAB0C:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 800FAB0C
  cmpu(c,0,c->r[0],c->r[4]); // 800FAB10
  if (!crb(c,1)) { IRQCHK(c); goto L_800FAAD8; } // 800FAB14
L_800FAB18:;
  c->r[0]=R8(c->r[5]+0x00000001u); // 800FAB18
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 800FAB1C
  cmpu(c,0,c->r[3],c->r[0]); // 800FAB20
  if (crb(c,1)) { goto L_800FAD94; } // 800FAB24
  c->r[23]=0u+0x803D0000u; // 800FAB28
  c->r[31]=0u+0x00000000u; // 800FAB2C
  c->r[23]=c->r[23]+0xFFFF9EB4u; // 800FAB30
L_800FAB34:;
  c->r[29]=rotl(c->r[31],5)&0x00001FE0u; // 800FAB34
  c->r[24]=c->r[23]+c->r[29]; // 800FAB38
  c->r[0]=R8(c->r[24]+0x000000B6u); // 800FAB3C
  cmps(c,0,(int32_t)c->r[0],0); // 800FAB40
  if (crb(c,2)) { goto L_800FAB74; } // 800FAB44
  c->r[4]=c->r[28]|c->r[28]; // 800FAB48
  c->r[3]=c->r[24]+0x000000B0u; // 800FAB4C
  c->lr=0x800FAB54u; f_800F7948(c); // 800FAB50
  cmps(c,0,(int32_t)c->r[3],0); // 800FAB54
  if (!crb(c,2)) { goto L_800FAB74; } // 800FAB58
  c->r[3]=c->r[24]|c->r[24]; // 800FAB5C
  c->r[3]=c->r[3]+0x00000098u; // 800FAB60
  c->lr=0x800FAB68u; f_800F7DFC(c); // 800FAB64
  c->r[0]=0u+0x00000000u; // 800FAB68
  W8(c->r[24]+0x000000B6u,c->r[0]); // 800FAB6C
  goto L_800FAB80; // 800FAB70
L_800FAB74:;
  c->r[31]=c->r[31]+0x00000001u; // 800FAB74
  cmpu(c,0,c->r[31],0x00000003u); // 800FAB78
  if (crb(c,0)) { IRQCHK(c); goto L_800FAB34; } // 800FAB7C
L_800FAB80:;
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 800FAB80
  c->r[3]=rotl(c->r[30],2)&0x000003FCu; // 800FAB84
  c->r[30]=c->r[3]-c->r[4]; // 800FAB88
  c->r[0]=R32(c->r[13]+0xFFFF8770u); // 800FAB8C
  c->r[4]=R32(c->r[13]+0xFFFF8774u); // 800FAB90
  c->r[31]=rotl(c->r[25],3)&0x000007F8u; // 800FAB94
  c->r[3]=c->r[0]+c->r[30]; // 800FAB98
  c->r[0]=R8(c->r[3]+0x00000002u); // 800FAB9C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 800FABA0
  c->r[0]=c->r[4]+c->r[0]; // 800FABA4
  c->r[3]=c->r[0]+c->r[31]; // 800FABA8
  c->r[0]=R8(c->r[3]+0x00000002u); // 800FABAC
  cmps(c,0,(int32_t)c->r[0],0); // 800FABB0
  if (crb(c,2)) { goto L_800FAD94; } // 800FABB4
  c->r[23]=0u+0x803D0000u; // 800FABB8
  c->r[29]=0u+0x00000000u; // 800FABBC
  c->r[24]=c->r[23]+0xFFFF9FB8u; // 800FABC0
  goto L_800FAC08; // 800FABC4
L_800FABC8:;
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800FABC8
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 800FABCC
  c->r[0]=c->r[0]+c->r[3]; // 800FABD0
  c->r[3]=c->r[24]+c->r[0]; // 800FABD4
  c->r[0]=R8(c->r[3]+0x00000007u); // 800FABD8
  cmpu(c,0,c->r[26],c->r[0]); // 800FABDC
  if (!crb(c,2)) { goto L_800FAC04; } // 800FABE0
  c->r[0]=R8(c->r[3]+0x00000008u); // 800FABE4
  cmpu(c,0,c->r[27],c->r[0]); // 800FABE8
  if (!crb(c,2)) { goto L_800FAC04; } // 800FABEC
  c->r[4]=c->r[28]|c->r[28]; // 800FABF0
  c->r[3]=c->r[3]+0x00000001u; // 800FABF4
  c->lr=0x800FABFCu; f_800F7948(c); // 800FABF8
  cmps(c,0,(int32_t)c->r[3],0); // 800FABFC
  if (crb(c,2)) { goto L_800FAC18; } // 800FAC00
L_800FAC04:;
  c->r[29]=c->r[29]+0x00000001u; // 800FAC04
L_800FAC08:;
  c->r[0]=R8(c->r[23]+0xFFFF9FB8u); // 800FAC08
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800FAC0C
  cmpu(c,0,c->r[3],c->r[0]); // 800FAC10
  if (crb(c,0)) { IRQCHK(c); goto L_800FABC8; } // 800FAC14
L_800FAC18:;
  c->r[0]=R32(c->r[13]+0xFFFF8770u); // 800FAC18
  c->r[4]=R32(c->r[13]+0xFFFF8774u); // 800FAC1C
  c->r[3]=c->r[0]+c->r[30]; // 800FAC20
  c->r[0]=R8(c->r[3]+0x00000002u); // 800FAC24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)74); // 800FAC28
  c->r[0]=c->r[4]+c->r[0]; // 800FAC2C
  c->r[3]=c->r[0]+c->r[31]; // 800FAC30
  c->r[0]=R8(c->r[3]+0x00000002u); // 800FAC34
  cmpu(c,0,c->r[0],0x00000010u); // 800FAC38
  if (!crb(c,2)) { goto L_800FACAC; } // 800FAC3C
  c->r[27]=0u+0x803D0000u; // 800FAC40
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800FAC44
  c->r[0]=R8(c->r[27]+0xFFFF9FB8u); // 800FAC48
  cmpu(c,0,c->r[3],c->r[0]); // 800FAC4C
  if (crb(c,2)) { goto L_800FAD18; } // 800FAC50
  c->r[26]=c->r[27]+0xFFFF9FB8u; // 800FAC54
  goto L_800FAC90; // 800FAC58
L_800FAC5C:;
  c->r[6]=rotl(c->r[29],0)&0x000000FFu; // 800FAC5C
  c->r[4]=rotl(c->r[29],3)&0x000007F8u; // 800FAC60
  c->r[3]=c->r[6]+0x00000001u; // 800FAC64
  c->r[5]=0u+0x00000009u; // 800FAC68
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800FAC6C
  c->r[4]=c->r[4]+c->r[6]; // 800FAC70
  c->r[0]=c->r[0]+c->r[3]; // 800FAC74
  c->r[3]=c->r[26]+c->r[4]; // 800FAC78
  c->r[4]=c->r[26]+c->r[0]; // 800FAC7C
  c->r[3]=c->r[3]+0x00000001u; // 800FAC80
  c->r[4]=c->r[4]+0x00000001u; // 800FAC84
  c->lr=0x800FAC8Cu; f_800043C4(c); // 800FAC88
  c->r[29]=c->r[29]+0x00000001u; // 800FAC8C
L_800FAC90:;
  c->r[3]=R8(c->r[27]+0xFFFF9FB8u); // 800FAC90
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800FAC94
  cmpu(c,0,c->r[0],c->r[3]); // 800FAC98
  if (crb(c,0)) { IRQCHK(c); goto L_800FAC5C; } // 800FAC9C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 800FACA0
  W8(c->r[27]+0xFFFF9FB8u,c->r[0]); // 800FACA4
  goto L_800FAD18; // 800FACA8
L_800FACAC:;
  c->r[30]=0u+0x803D0000u; // 800FACAC
  c->r[4]=rotl(c->r[29],0)&0x000000FFu; // 800FACB0
  c->r[0]=R8(c->r[30]+0xFFFF9FB8u); // 800FACB4
  cmpu(c,0,c->r[4],c->r[0]); // 800FACB8
  if (!crb(c,2)) { goto L_800FAD18; } // 800FACBC
  cmpu(c,0,c->r[0],0x00000005u); // 800FACC0
  if (!crb(c,2)) { goto L_800FACE8; } // 800FACC4
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FACC8
  cmpu(c,0,c->r[0],0x00000002u); // 800FACCC
  if (crb(c,0)) { goto L_800FAD94; } // 800FACD0
  c->r[4]=0u+0x80330000u; // 800FACD4
  c->r[3]=0u+0x00000501u; // 800FACD8
  c->r[4]=c->r[4]+0xFFFF9EC8u; // 800FACDC
  c->lr=0x800FACE4u; f_800F7280(c); // 800FACE0
  goto L_800FAD94; // 800FACE4
L_800FACE8:;
  c->r[3]=rotl(c->r[29],3)&0x000007F8u; // 800FACE8
  c->r[0]=c->r[30]+0xFFFF9FB8u; // 800FACEC
  c->r[3]=c->r[3]+c->r[4]; // 800FACF0
  c->r[4]=c->r[28]|c->r[28]; // 800FACF4
  c->r[5]=c->r[0]+c->r[3]; // 800FACF8
  W8(c->r[5]+0x00000007u,c->r[26]); // 800FACFC
  c->r[3]=c->r[5]+0x00000001u; // 800FAD00
  W8(c->r[5]+0x00000008u,c->r[27]); // 800FAD04
  c->lr=0x800FAD0Cu; f_800F7914(c); // 800FAD08
  c->r[3]=R8(c->r[30]+0xFFFF9FB8u); // 800FAD0C
  c->r[0]=c->r[3]+0x00000001u; // 800FAD10
  W8(c->r[30]+0xFFFF9FB8u,c->r[0]); // 800FAD14
L_800FAD18:;
  c->r[3]=0u+0x803D0000u; // 800FAD18
  c->r[24]=0u+0x00000000u; // 800FAD1C
  c->r[26]=c->r[3]+0xFFFF9EB4u; // 800FAD20
  goto L_800FAD5C; // 800FAD24
L_800FAD28:;
  c->r[0]=rotl(c->r[24],0)&0x000000FFu; // 800FAD28
  c->r[4]=c->r[28]|c->r[28]; // 800FAD2C
  c->r[23]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800FAD30
  c->r[3]=c->r[26]+c->r[23]; // 800FAD34
  c->lr=0x800FAD3Cu; f_800F7948(c); // 800FAD38
  cmps(c,0,(int32_t)c->r[3],0); // 800FAD3C
  if (!crb(c,2)) { goto L_800FAD58; } // 800FAD40
  c->r[3]=c->r[26]+c->r[23]; // 800FAD44
  c->r[0]=0u+0x00000000u; // 800FAD48
  W8(c->r[3]+0x00000009u,c->r[0]); // 800FAD4C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 800FAD50
  goto L_800FAD6C; // 800FAD54
L_800FAD58:;
  c->r[24]=c->r[24]+0x00000001u; // 800FAD58
L_800FAD5C:;
  c->r[0]=R8(c->r[26]+0x0000004Du); // 800FAD5C
  c->r[3]=rotl(c->r[24],0)&0x000000FFu; // 800FAD60
  cmpu(c,0,c->r[3],c->r[0]); // 800FAD64
  if (crb(c,0)) { IRQCHK(c); goto L_800FAD28; } // 800FAD68
L_800FAD6C:;
  c->r[6]=0u+0x803D0000u; // 800FAD6C
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 800FAD70
  c->r[0]=rotl(c->r[29],3)&0x000007F8u; // 800FAD74
  c->r[3]=c->r[28]|c->r[28]; // 800FAD78
  c->r[6]=c->r[6]+0xFFFF9FB8u; // 800FAD7C
  c->r[4]=0u+0x00000000u; // 800FAD80
  c->r[0]=c->r[0]+c->r[5]; // 800FAD84
  c->r[5]=c->r[6]+c->r[0]; // 800FAD88
  W8(c->r[5]+0x00000009u,c->r[25]); // 800FAD8C
  c->lr=0x800FAD94u; f_800FADAC(c); // 800FAD90
L_800FAD94:;
  c->r[11]=c->r[1]+0x00000040u; // 800FAD94
  c->lr=0x800FAD9Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FAD98
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FAD9C
  c->lr=c->r[0]; // 800FADA0
  c->r[1]=c->r[1]+0x00000040u; // 800FADA4
  return; // 800FADA8
}

// bta_dm_pm_set_mode
void f_800FADAC(Ctx* __restrict c) {
  trace_call(0x800FADACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FADAC
  c->r[0]=c->lr; // 800FADB0
  W32(c->r[1]+0x00000054u,c->r[0]); // 800FADB4
  c->r[11]=c->r[1]+0x00000050u; // 800FADB8
  c->lr=0x800FADC0u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FADBC
  c->r[5]=0u+0x803D0000u; // 800FADC0
  c->r[20]=c->r[3]|c->r[3]; // 800FADC4
  c->r[28]=c->r[5]+0xFFFF9EB4u; // 800FADC8
  c->r[21]=c->r[4]|c->r[4]; // 800FADCC
  c->r[0]=R8(c->r[28]+0x0000004Du); // 800FADD0
  c->r[27]=0u+0x00000000u; // 800FADD4
  c->r[26]=0u+0x00000000u; // 800FADD8
  c->r[25]=0u+0x00000000u; // 800FADDC
  cmps(c,0,(int32_t)c->r[0],0); // 800FADE0
  c->r[24]=0u+0x00000000u; // 800FADE4
  c->r[23]=0u+0x00000000u; // 800FADE8
  c->r[22]=0u+0x00000000u; // 800FADEC
  if (crb(c,2)) { goto L_800FB114; } // 800FADF0
  c->r[30]=0u+0x00000000u; // 800FADF4
  goto L_800FAE28; // 800FADF8
L_800FADFC:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 800FADFC
  c->r[4]=c->r[20]|c->r[20]; // 800FAE00
  c->r[29]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800FAE04
  c->r[3]=c->r[28]+c->r[29]; // 800FAE08
  c->lr=0x800FAE10u; f_800F7948(c); // 800FAE0C
  cmps(c,0,(int32_t)c->r[3],0); // 800FAE10
  if (!crb(c,2)) { goto L_800FAE24; } // 800FAE14
  c->r[24]=c->r[28]+c->r[29]; // 800FAE18
  c->r[25]=R8(c->r[24]+0x0000000Au); // 800FAE1C
  goto L_800FAE38; // 800FAE20
L_800FAE24:;
  c->r[30]=c->r[30]+0x00000001u; // 800FAE24
L_800FAE28:;
  c->r[0]=R8(c->r[28]+0x0000004Du); // 800FAE28
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 800FAE2C
  cmpu(c,0,c->r[3],c->r[0]); // 800FAE30
  if (crb(c,0)) { IRQCHK(c); goto L_800FADFC; } // 800FAE34
L_800FAE38:;
  cmps(c,0,(int32_t)c->r[24],0); // 800FAE38
  if (crb(c,2)) { goto L_800FB114; } // 800FAE3C
  c->r[30]=0u+0x803D0000u; // 800FAE40
  c->r[28]=0u+0x00000000u; // 800FAE44
  c->r[31]=c->r[30]+0xFFFF9FB8u; // 800FAE48
  goto L_800FAF7C; // 800FAE4C
L_800FAE50:;
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 800FAE50
  c->r[0]=rotl(c->r[28],3)&0x000007F8u; // 800FAE54
  c->r[29]=c->r[0]+c->r[3]; // 800FAE58
  c->r[4]=c->r[20]|c->r[20]; // 800FAE5C
  c->r[3]=c->r[31]+c->r[29]; // 800FAE60
  c->r[3]=c->r[3]+0x00000001u; // 800FAE64
  c->lr=0x800FAE6Cu; f_800F7948(c); // 800FAE68
  cmps(c,0,(int32_t)c->r[3],0); // 800FAE6C
  if (!crb(c,2)) { goto L_800FAF78; } // 800FAE70
  c->r[7]=R32(c->r[13]+0xFFFF8770u); // 800FAE74
  c->r[8]=c->r[31]+c->r[29]; // 800FAE78
  c->r[3]=R8(c->r[8]+0x00000008u); // 800FAE7C
  c->r[9]=0u+0x00000001u; // 800FAE80
  c->r[6]=R8(c->r[7]+0x00000001u); // 800FAE84
  c->r[4]=R8(c->r[8]+0x00000007u); // 800FAE88
  goto L_800FAEC4; // 800FAE8C
L_800FAE90:;
  c->r[5]=rotl(c->r[9],0)&0x000000FFu; // 800FAE90
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 800FAE94
  c->r[0]=c->r[0]-c->r[5]; // 800FAE98
  c->r[5]=c->r[7]+c->r[0]; // 800FAE9C
  c->r[0]=R8(c->r[7]+c->r[0]); // 800FAEA0
  cmpu(c,0,c->r[0],c->r[4]); // 800FAEA4
  if (!crb(c,2)) { goto L_800FAEC0; } // 800FAEA8
  c->r[0]=R8(c->r[5]+0x00000001u); // 800FAEAC
  cmpu(c,0,c->r[0],0x000000FFu); // 800FAEB0
  if (crb(c,2)) { goto L_800FAED0; } // 800FAEB4
  cmpu(c,0,c->r[0],c->r[3]); // 800FAEB8
  if (crb(c,2)) { goto L_800FAED0; } // 800FAEBC
L_800FAEC0:;
  c->r[9]=c->r[9]+0x00000001u; // 800FAEC0
L_800FAEC4:;
  c->r[0]=rotl(c->r[9],0)&0x000000FFu; // 800FAEC4
  cmpu(c,0,c->r[0],c->r[6]); // 800FAEC8
  if (!crb(c,1)) { IRQCHK(c); goto L_800FAE90; } // 800FAECC
L_800FAED0:;
  c->r[3]=rotl(c->r[9],0)&0x000000FFu; // 800FAED0
  c->r[0]=rotl(c->r[9],2)&0x000003FCu; // 800FAED4
  c->r[3]=c->r[0]-c->r[3]; // 800FAED8
  c->r[0]=R8(c->r[8]+0x00000009u); // 800FAEDC
  c->r[4]=c->r[7]+c->r[3]; // 800FAEE0
  c->r[3]=R32(c->r[13]+0xFFFF8774u); // 800FAEE4
  c->r[4]=R8(c->r[4]+0x00000002u); // 800FAEE8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 800FAEEC
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)74); // 800FAEF0
  c->r[5]=c->r[3]+c->r[4]; // 800FAEF4
  c->r[3]=c->r[5]+c->r[0]; // 800FAEF8
  c->r[0]=R8(c->r[5]+0x00000000u); // 800FAEFC
  c->r[4]=R8(c->r[3]+0x00000002u); // 800FAF00
  c->r[23]=c->r[23]|c->r[0]; // 800FAF04
  c->r[0]=c->r[25]&c->r[4]; cr0(c,c->r[0]); // 800FAF08
  if (!crb(c,2)) { goto L_800FAF40; } // 800FAF0C
  c->r[3]=c->r[31]+c->r[29]; // 800FAF10
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800FAF14
  c->r[3]=R8(c->r[3]+0x00000009u); // 800FAF18
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 800FAF1C
  c->r[5]=c->r[5]+c->r[3]; // 800FAF20
  c->r[3]=R8(c->r[5]+0x00000002u); // 800FAF24
  cmpu(c,0,c->r[3],c->r[0]); // 800FAF28
  c->r[22]=c->r[22]|c->r[3]; // 800FAF2C
  if (!crb(c,1)) { goto L_800FAF78; } // 800FAF30
  c->r[26]=R16(c->r[5]+0x00000004u); // 800FAF34
  c->r[27]=c->r[4]|c->r[4]; // 800FAF38
  goto L_800FAF78; // 800FAF3C
L_800FAF40:;
  c->r[3]=R8(c->r[3]+0x00000006u); // 800FAF40
  c->r[0]=c->r[25]&c->r[3]; cr0(c,c->r[0]); // 800FAF44
  if (!crb(c,2)) { goto L_800FAF78; } // 800FAF48
  c->r[4]=c->r[31]+c->r[29]; // 800FAF4C
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800FAF50
  c->r[4]=R8(c->r[4]+0x00000009u); // 800FAF54
  c->r[4]=rotl(c->r[4],3)&0xFFFFFFF8u; // 800FAF58
  c->r[5]=c->r[5]+c->r[4]; // 800FAF5C
  c->r[4]=R8(c->r[5]+0x00000006u); // 800FAF60
  cmpu(c,0,c->r[4],c->r[0]); // 800FAF64
  c->r[22]=c->r[22]|c->r[4]; // 800FAF68
  if (!crb(c,1)) { goto L_800FAF78; } // 800FAF6C
  c->r[27]=c->r[3]|c->r[3]; // 800FAF70
  c->r[26]=R16(c->r[5]+0x00000008u); // 800FAF74
L_800FAF78:;
  c->r[28]=c->r[28]+0x00000001u; // 800FAF78
L_800FAF7C:;
  c->r[0]=R8(c->r[30]+0xFFFF9FB8u); // 800FAF7C
  c->r[3]=rotl(c->r[28],0)&0x000000FFu; // 800FAF80
  cmpu(c,0,c->r[3],c->r[0]); // 800FAF84
  if (crb(c,0)) { IRQCHK(c); goto L_800FAE50; } // 800FAF88
  c->r[0]=rotl(c->r[27],0)&0x00000003u; cr0(c,c->r[0]); // 800FAF8C
  if (crb(c,2)) { goto L_800FAFB4; } // 800FAF90
  c->r[3]=rotl(c->r[23],0)&0x000000FFu; // 800FAF94
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 800FAF98
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 800FAF9C
  if (!crb(c,2)) { goto L_800FAFB4; } // 800FAFA0
  c->r[0]=c->r[23]&c->r[22]; // 800FAFA4
  c->r[27]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[27]); // 800FAFA8
  if (!crb(c,2)) { goto L_800FAFB4; } // 800FAFAC
  c->r[26]=0u+0x00000000u; // 800FAFB0
L_800FAFB4:;
  cmps(c,0,(int32_t)c->r[21],0); // 800FAFB4
  if (!crb(c,2)) { goto L_800FB058; } // 800FAFB8
  cmps(c,0,(int32_t)c->r[26],0); // 800FAFBC
  if (crb(c,2)) { goto L_800FB058; } // 800FAFC0
  c->r[21]=0u+0x803D0000u; // 800FAFC4
  c->r[0]=0u+0x00000003u; // 800FAFC8
  c->r[21]=c->r[21]+0xFFFF9EB4u; // 800FAFCC
  c->r[4]=0u+0x00000000u; // 800FAFD0
  c->ctr=c->r[0]; // 800FAFD4
L_800FAFD8:;
  c->r[22]=rotl(c->r[4],5)&0x00001FE0u; // 800FAFD8
  c->r[3]=c->r[21]+c->r[22]; // 800FAFDC
  c->r[0]=R8(c->r[3]+0x000000B6u); // 800FAFE0
  cmps(c,0,(int32_t)c->r[0],0); // 800FAFE4
  if (!crb(c,2)) { goto L_800FB024; } // 800FAFE8
  c->r[0]=0u+0x00000001u; // 800FAFEC
  c->r[4]=c->r[20]|c->r[20]; // 800FAFF0
  W8(c->r[3]+0x000000B6u,c->r[0]); // 800FAFF4
  c->r[3]=c->r[3]+0x000000B0u; // 800FAFF8
  c->lr=0x800FB000u; f_800F7914(c); // 800FAFFC
  c->r[4]=0u+0x80100000u; // 800FB000
  c->r[3]=c->r[21]+c->r[22]; // 800FB004
  c->r[4]=c->r[4]+0xFFFFB1A4u; // 800FB008
  c->r[5]=c->r[26]|c->r[26]; // 800FB00C
  W32(c->r[3]+0x000000A0u,c->r[4]); // 800FB010
  c->r[3]=c->r[3]+0x00000098u; // 800FB014
  c->r[4]=0u+0x00000000u; // 800FB018
  c->lr=0x800FB020u; f_800F7DDC(c); // 800FB01C
  goto L_800FB114; // 800FB020
L_800FB024:;
  c->r[4]=c->r[4]+0x00000001u; // 800FB024
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 800FB028
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FAFD8; } // 800FB02C
  cmpu(c,0,c->r[0],0x00000003u); // 800FB030
  if (!crb(c,2)) { goto L_800FB058; } // 800FB034
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FB038
  cmpu(c,0,c->r[0],0x00000002u); // 800FB03C
  if (crb(c,0)) { goto L_800FB114; } // 800FB040
  c->r[4]=0u+0x80330000u; // 800FB044
  c->r[3]=0u+0x00000501u; // 800FB048
  c->r[4]=c->r[4]+0xFFFF9EF4u; // 800FB04C
  c->lr=0x800FB054u; f_800F7280(c); // 800FB050
  goto L_800FB114; // 800FB054
L_800FB058:;
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB058
  if (crb(c,2)) { goto L_800FB114; } // 800FB05C
  cmpu(c,0,c->r[0],0x00000001u); // 800FB060
  if (!crb(c,2)) { goto L_800FB0A8; } // 800FB064
  c->r[0]=0u+0x00000001u; // 800FB068
  c->r[3]=c->r[20]|c->r[20]; // 800FB06C
  W8(c->r[24]+0x00000009u,c->r[0]); // 800FB070
  c->r[4]=c->r[1]+0x00000009u; // 800FB074
  c->lr=0x800FB07Cu; f_8010342C(c); // 800FB078
  c->r[0]=R8(c->r[1]+0x00000009u); // 800FB07C
  cmpu(c,0,c->r[0],0x00000003u); // 800FB080
  if (crb(c,2)) { goto L_800FB114; } // 800FB084
  c->r[3]=0u+0x803D0000u; // 800FB088
  c->r[5]=R32(c->r[13]+0xFFFF8778u); // 800FB08C
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800FB090
  c->r[4]=c->r[20]|c->r[20]; // 800FB094
  c->r[3]=R8(c->r[3]+0x00000095u); // 800FB098
  c->r[5]=c->r[5]+0x0000000Au; // 800FB09C
  c->lr=0x800FB0A4u; f_8010325C(c); // 800FB0A0
  goto L_800FB114; // 800FB0A4
L_800FB0A8:;
  cmpu(c,0,c->r[0],0x00000002u); // 800FB0A8
  if (!crb(c,2)) { goto L_800FB0EC; } // 800FB0AC
  c->r[0]=0u+0x00000002u; // 800FB0B0
  c->r[3]=c->r[20]|c->r[20]; // 800FB0B4
  W8(c->r[24]+0x00000009u,c->r[0]); // 800FB0B8
  c->r[4]=c->r[1]+0x00000008u; // 800FB0BC
  c->lr=0x800FB0C4u; f_8010342C(c); // 800FB0C0
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FB0C4
  cmpu(c,0,c->r[0],0x00000002u); // 800FB0C8
  if (crb(c,2)) { goto L_800FB114; } // 800FB0CC
  c->r[3]=0u+0x803D0000u; // 800FB0D0
  c->r[5]=R32(c->r[13]+0xFFFF8778u); // 800FB0D4
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800FB0D8
  c->r[4]=c->r[20]|c->r[20]; // 800FB0DC
  c->r[3]=R8(c->r[3]+0x00000095u); // 800FB0E0
  c->lr=0x800FB0E8u; f_8010325C(c); // 800FB0E4
  goto L_800FB114; // 800FB0E8
L_800FB0EC:;
  cmpu(c,0,c->r[0],0x00000004u); // 800FB0EC
  if (!crb(c,2)) { goto L_800FB114; } // 800FB0F0
  c->r[3]=0u+0x803D0000u; // 800FB0F4
  c->r[0]=0u+0x00000000u; // 800FB0F8
  c->r[3]=c->r[3]+0xFFFF9EB4u; // 800FB0FC
  W8(c->r[1]+0x00000014u,c->r[0]); // 800FB100
  c->r[3]=R8(c->r[3]+0x00000095u); // 800FB104
  c->r[4]=c->r[20]|c->r[20]; // 800FB108
  c->r[5]=c->r[1]+0x0000000Cu; // 800FB10C
  c->lr=0x800FB114u; f_8010325C(c); // 800FB110
L_800FB114:;
  c->r[11]=c->r[1]+0x00000050u; // 800FB114
  c->lr=0x800FB11Cu; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FB118
  c->r[0]=R32(c->r[1]+0x00000054u); // 800FB11C
  c->lr=c->r[0]; // 800FB120
  c->r[1]=c->r[1]+0x00000050u; // 800FB124
  return; // 800FB128
}

// bta_dm_pm_btm_cback
void f_800FB12C(Ctx* __restrict c) {
  trace_call(0x800FB12Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB12C
  c->r[0]=c->lr; // 800FB130
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB134
  c->r[11]=c->r[1]+0x00000020u; // 800FB138
  c->lr=0x800FB140u; f_800ADA2C(c); // 800FB13C
  c->r[27]=c->r[3]|c->r[3]; // 800FB140
  c->r[28]=c->r[4]|c->r[4]; // 800FB144
  c->r[29]=c->r[5]|c->r[5]; // 800FB148
  c->r[30]=c->r[6]|c->r[6]; // 800FB14C
  c->r[3]=0u+0x00000014u; // 800FB150
  c->lr=0x800FB158u; f_800F4530(c); // 800FB154
  cmps(c,0,(int32_t)c->r[3],0); // 800FB158
  c->r[31]=c->r[3]|c->r[3]; // 800FB15C
  if (crb(c,2)) { goto L_800FB18C; } // 800FB160
  c->r[0]=0u+0x00000109u; // 800FB164
  c->r[4]=c->r[27]|c->r[27]; // 800FB168
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FB16C
  W8(c->r[3]+0x0000000Eu,c->r[28]); // 800FB170
  W16(c->r[3]+0x00000010u,c->r[29]); // 800FB174
  W8(c->r[3]+0x00000012u,c->r[30]); // 800FB178
  c->r[3]=c->r[3]+0x00000008u; // 800FB17C
  c->lr=0x800FB184u; f_800F7914(c); // 800FB180
  c->r[3]=c->r[31]|c->r[31]; // 800FB184
  c->lr=0x800FB18Cu; f_800F7DC0(c); // 800FB188
L_800FB18C:;
  c->r[11]=c->r[1]+0x00000020u; // 800FB18C
  c->lr=0x800FB194u; f_800ADA78(c); // 800FB190
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB194
  c->lr=c->r[0]; // 800FB198
  c->r[1]=c->r[1]+0x00000020u; // 800FB19C
  return; // 800FB1A0
}

// bta_dm_pm_timer_cback
void f_800FB1A4(Ctx* __restrict c) {
  trace_call(0x800FB1A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB1A4
  c->r[0]=c->lr; // 800FB1A8
  c->r[4]=0u+0x803D0000u; // 800FB1AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FB1B0
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800FB1B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FB1B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FB1BC
  c->r[30]=0u+0x00000000u; // 800FB1C0
  c->r[0]=R8(c->r[4]+0x000000B6u); // 800FB1C4
  cmps(c,0,(int32_t)c->r[0],0); // 800FB1C8
  if (crb(c,2)) { goto L_800FB1E8; } // 800FB1CC
  c->r[0]=c->r[4]+0x00000098u; // 800FB1D0
  cmpu(c,0,c->r[0],c->r[3]); // 800FB1D4
  if (!crb(c,2)) { goto L_800FB1E8; } // 800FB1D8
  c->r[0]=0u+0x00000000u; // 800FB1DC
  W8(c->r[4]+0x000000B6u,c->r[0]); // 800FB1E0
  goto L_800FB23C; // 800FB1E4
L_800FB1E8:;
  c->r[0]=R8(c->r[4]+0x000000D6u); // 800FB1E8
  c->r[30]=0u+0x00000001u; // 800FB1EC
  cmps(c,0,(int32_t)c->r[0],0); // 800FB1F0
  if (crb(c,2)) { goto L_800FB210; } // 800FB1F4
  c->r[0]=c->r[4]+0x000000B8u; // 800FB1F8
  cmpu(c,0,c->r[0],c->r[3]); // 800FB1FC
  if (!crb(c,2)) { goto L_800FB210; } // 800FB200
  c->r[0]=0u+0x00000000u; // 800FB204
  W8(c->r[4]+0x000000D6u,c->r[0]); // 800FB208
  goto L_800FB23C; // 800FB20C
L_800FB210:;
  c->r[0]=R8(c->r[4]+0x000000F6u); // 800FB210
  c->r[30]=0u+0x00000002u; // 800FB214
  cmps(c,0,(int32_t)c->r[0],0); // 800FB218
  if (crb(c,2)) { goto L_800FB238; } // 800FB21C
  c->r[0]=c->r[4]+0x000000D8u; // 800FB220
  cmpu(c,0,c->r[0],c->r[3]); // 800FB224
  if (!crb(c,2)) { goto L_800FB238; } // 800FB228
  c->r[0]=0u+0x00000000u; // 800FB22C
  W8(c->r[4]+0x000000F6u,c->r[0]); // 800FB230
  goto L_800FB23C; // 800FB234
L_800FB238:;
  c->r[30]=0u+0x00000003u; // 800FB238
L_800FB23C:;
  cmpu(c,0,c->r[30],0x00000003u); // 800FB23C
  if (crb(c,2)) { goto L_800FB284; } // 800FB240
  c->r[3]=0u+0x0000000Eu; // 800FB244
  c->lr=0x800FB24Cu; f_800F4530(c); // 800FB248
  cmps(c,0,(int32_t)c->r[3],0); // 800FB24C
  c->r[31]=c->r[3]|c->r[3]; // 800FB250
  if (crb(c,2)) { goto L_800FB284; } // 800FB254
  c->r[4]=0u+0x803D0000u; // 800FB258
  c->r[5]=0u+0x0000010Au; // 800FB25C
  c->r[4]=c->r[4]+0xFFFF9EB4u; // 800FB260
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 800FB264
  W16(c->r[3]+0x00000000u,c->r[5]); // 800FB268
  c->r[4]=c->r[4]+c->r[0]; // 800FB26C
  c->r[4]=c->r[4]+0x000000B0u; // 800FB270
  c->r[3]=c->r[3]+0x00000008u; // 800FB274
  c->lr=0x800FB27Cu; f_800F7914(c); // 800FB278
  c->r[3]=c->r[31]|c->r[31]; // 800FB27C
  c->lr=0x800FB284u; f_800F7DC0(c); // 800FB280
L_800FB284:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FB284
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FB288
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FB28C
  c->lr=c->r[0]; // 800FB290
  c->r[1]=c->r[1]+0x00000010u; // 800FB294
  return; // 800FB298
}

// bta_dm_pm_btm_status
void f_800FB29C(Ctx* __restrict c) {
  trace_call(0x800FB29Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB29C
  c->r[0]=c->lr; // 800FB2A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB2A4
  c->r[11]=c->r[1]+0x00000020u; // 800FB2A8
  c->lr=0x800FB2B0u; f_800ADA2C(c); // 800FB2AC
  c->r[30]=0u+0x803D0000u; // 800FB2B0
  c->r[31]=c->r[3]|c->r[3]; // 800FB2B4
  c->r[30]=c->r[30]+0xFFFF9EB4u; // 800FB2B8
  c->r[27]=0u+0x00000000u; // 800FB2BC
L_800FB2C0:;
  c->r[28]=rotl(c->r[27],5)&0x00001FE0u; // 800FB2C0
  c->r[29]=c->r[30]+c->r[28]; // 800FB2C4
  c->r[0]=R8(c->r[29]+0x000000B6u); // 800FB2C8
  cmps(c,0,(int32_t)c->r[0],0); // 800FB2CC
  if (crb(c,2)) { goto L_800FB300; } // 800FB2D0
  c->r[3]=c->r[29]+0x000000B0u; // 800FB2D4
  c->r[4]=c->r[31]+0x00000008u; // 800FB2D8
  c->lr=0x800FB2E0u; f_800F7948(c); // 800FB2DC
  cmps(c,0,(int32_t)c->r[3],0); // 800FB2E0
  if (!crb(c,2)) { goto L_800FB300; } // 800FB2E4
  c->r[3]=c->r[29]|c->r[29]; // 800FB2E8
  c->r[3]=c->r[3]+0x00000098u; // 800FB2EC
  c->lr=0x800FB2F4u; f_800F7DFC(c); // 800FB2F0
  c->r[0]=0u+0x00000000u; // 800FB2F4
  W8(c->r[29]+0x000000B6u,c->r[0]); // 800FB2F8
  goto L_800FB30C; // 800FB2FC
L_800FB300:;
  c->r[27]=c->r[27]+0x00000001u; // 800FB300
  cmpu(c,0,c->r[27],0x00000003u); // 800FB304
  if (crb(c,0)) { IRQCHK(c); goto L_800FB2C0; } // 800FB308
L_800FB30C:;
  c->r[0]=R8(c->r[31]+0x0000000Eu); // 800FB30C
  cmps(c,0,(int32_t)c->r[0],0); // 800FB310
  if (crb(c,2)) { goto L_800FB31C; } // 800FB314
  goto L_800FB3A4; // 800FB318
L_800FB31C:;
  c->r[0]=R8(c->r[31]+0x00000012u); // 800FB31C
  cmps(c,0,(int32_t)c->r[0],0); // 800FB320
  if (crb(c,2)) { goto L_800FB398; } // 800FB324
  c->r[3]=0u+0x803D0000u; // 800FB328
  c->r[29]=0u+0x00000000u; // 800FB32C
  c->r[30]=c->r[3]+0xFFFF9EB4u; // 800FB330
  goto L_800FB384; // 800FB334
L_800FB338:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800FB338
  c->r[4]=c->r[31]+0x00000008u; // 800FB33C
  c->r[28]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 800FB340
  c->r[3]=c->r[30]+c->r[28]; // 800FB344
  c->lr=0x800FB34Cu; f_800F7948(c); // 800FB348
  cmps(c,0,(int32_t)c->r[3],0); // 800FB34C
  if (!crb(c,2)) { goto L_800FB380; } // 800FB350
  c->r[5]=c->r[30]+c->r[28]; // 800FB354
  c->r[0]=R8(c->r[5]+0x00000009u); // 800FB358
  c->r[6]=rotl(c->r[0],0)&0x00000003u; cr0(c,c->r[6]); // 800FB35C
  if (crb(c,2)) { goto L_800FB3A4; } // 800FB360
  c->r[0]=R8(c->r[5]+0x0000000Au); // 800FB364
  c->r[3]=c->r[31]+0x00000008u; // 800FB368
  c->r[4]=0u+0x00000000u; // 800FB36C
  c->r[0]=c->r[0]|c->r[6]; // 800FB370
  W8(c->r[5]+0x0000000Au,c->r[0]); // 800FB374
  c->lr=0x800FB37Cu; f_800FADAC(c); // 800FB378
  goto L_800FB3A4; // 800FB37C
L_800FB380:;
  c->r[29]=c->r[29]+0x00000001u; // 800FB380
L_800FB384:;
  c->r[0]=R8(c->r[30]+0x0000004Du); // 800FB384
  c->r[3]=rotl(c->r[29],0)&0x000000FFu; // 800FB388
  cmpu(c,0,c->r[3],c->r[0]); // 800FB38C
  if (crb(c,0)) { IRQCHK(c); goto L_800FB338; } // 800FB390
  goto L_800FB3A4; // 800FB394
L_800FB398:;
  c->r[3]=c->r[31]+0x00000008u; // 800FB398
  c->r[4]=0u+0x00000000u; // 800FB39C
  c->lr=0x800FB3A4u; f_800FADAC(c); // 800FB3A0
L_800FB3A4:;
  c->r[11]=c->r[1]+0x00000020u; // 800FB3A4
  c->lr=0x800FB3ACu; f_800ADA78(c); // 800FB3A8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB3AC
  c->lr=c->r[0]; // 800FB3B0
  c->r[1]=c->r[1]+0x00000020u; // 800FB3B4
  return; // 800FB3B8
}

// bta_dm_pm_timer
void f_800FB3BC(Ctx* __restrict c) {
  trace_call(0x800FB3BCu);
  c->r[4]=0u+0x00000001u; // 800FB3BC
  c->r[3]=c->r[3]+0x00000008u; // 800FB3C0
  f_800FADAC(c); return; // 800FB3C4
}

// bta_hh_api_enable
void f_800FB3C8(Ctx* __restrict c) {
  trace_call(0x800FB3C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB3C8
  c->r[0]=c->lr; // 800FB3CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB3D0
  c->r[0]=0u+0x00000006u; // 800FB3D4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB3D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB3DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FB3E0
  c->r[29]=c->r[3]|c->r[3]; // 800FB3E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB3E8
  c->lr=0x800FB3F0u; f_8010D33C(c); // 800FB3EC
  c->r[31]=0u+0x803D0000u; // 800FB3F0
  c->r[4]=0u+0x00000000u; // 800FB3F4
  c->r[3]=c->r[31]+0xFFFF9FE8u; // 800FB3F8
  c->r[5]=0u+0x00000230u; // 800FB3FC
  c->lr=0x800FB404u; f_80004714(c); // 800FB400
  c->r[4]=R8(c->r[29]+0x00000008u); // 800FB404
  c->r[3]=c->r[13]+0xFFFF87B0u; // 800FB408
  c->lr=0x800FB410u; f_8010D97C(c); // 800FB40C
  c->r[3]=0u+0x80100000u; // 800FB410
  c->r[3]=c->r[3]+0xFFFFC878u; // 800FB414
  c->lr=0x800FB41Cu; f_8010D380(c); // 800FB418
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB41C
  if (!crb(c,2)) { goto L_800FB504; } // 800FB420
  c->r[4]=R32(c->r[29]+0x00000030u); // 800FB424
  c->r[12]=c->r[31]+0xFFFF9FE8u; // 800FB428
  c->r[3]=0u+0x00000000u; // 800FB42C
  c->r[0]=0u+0x00000002u; // 800FB430
  W32(c->r[12]+0x00000224u,c->r[4]); // 800FB434
  c->r[29]=0u+0x00000000u; // 800FB438
  c->r[11]=0u+0x00000001u; // 800FB43C
  c->r[10]=0u+0x000000FFu; // 800FB440
  W8(c->r[1]+0x00000008u,c->r[3]); // 800FB444
  c->r[9]=0u+0x00000010u; // 800FB448
  c->ctr=c->r[0]; // 800FB44C
L_800FB450:;
  c->r[3]=rotl(c->r[29],5)&0x00001FE0u; // 800FB450
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; // 800FB454
  c->r[31]=c->r[12]+c->r[3]; // 800FB458
  c->r[8]=c->r[29]+0x00000001u; // 800FB45C
  W8(c->r[31]+0x0000002Cu,c->r[11]); // 800FB460
  c->r[30]=c->r[12]+c->r[0]; // 800FB464
  c->r[7]=c->r[29]+0x00000002u; // 800FB468
  c->r[6]=c->r[29]+0x00000003u; // 800FB46C
  W8(c->r[31]+0x00000026u,c->r[10]); // 800FB470
  c->r[5]=c->r[29]+0x00000004u; // 800FB474
  c->r[4]=c->r[29]+0x00000005u; // 800FB478
  c->r[3]=c->r[29]+0x00000006u; // 800FB47C
  W8(c->r[31]+0x00000022u,c->r[29]); // 800FB480
  c->r[0]=c->r[29]+0x00000007u; // 800FB484
  c->r[29]=c->r[29]+0x00000008u; // 800FB488
  W8(c->r[30]+0x00000214u,c->r[9]); // 800FB48C
  W8(c->r[31]+0x0000004Cu,c->r[11]); // 800FB490
  W8(c->r[31]+0x00000046u,c->r[10]); // 800FB494
  W8(c->r[31]+0x00000042u,c->r[8]); // 800FB498
  W8(c->r[30]+0x00000215u,c->r[9]); // 800FB49C
  W8(c->r[31]+0x0000006Cu,c->r[11]); // 800FB4A0
  W8(c->r[31]+0x00000066u,c->r[10]); // 800FB4A4
  W8(c->r[31]+0x00000062u,c->r[7]); // 800FB4A8
  W8(c->r[30]+0x00000216u,c->r[9]); // 800FB4AC
  W8(c->r[31]+0x0000008Cu,c->r[11]); // 800FB4B0
  W8(c->r[31]+0x00000086u,c->r[10]); // 800FB4B4
  W8(c->r[31]+0x00000082u,c->r[6]); // 800FB4B8
  W8(c->r[30]+0x00000217u,c->r[9]); // 800FB4BC
  W8(c->r[31]+0x000000ACu,c->r[11]); // 800FB4C0
  W8(c->r[31]+0x000000A6u,c->r[10]); // 800FB4C4
  W8(c->r[31]+0x000000A2u,c->r[5]); // 800FB4C8
  W8(c->r[30]+0x00000218u,c->r[9]); // 800FB4CC
  W8(c->r[31]+0x000000CCu,c->r[11]); // 800FB4D0
  W8(c->r[31]+0x000000C6u,c->r[10]); // 800FB4D4
  W8(c->r[31]+0x000000C2u,c->r[4]); // 800FB4D8
  W8(c->r[30]+0x00000219u,c->r[9]); // 800FB4DC
  W8(c->r[31]+0x000000ECu,c->r[11]); // 800FB4E0
  W8(c->r[31]+0x000000E6u,c->r[10]); // 800FB4E4
  W8(c->r[31]+0x000000E2u,c->r[3]); // 800FB4E8
  W8(c->r[30]+0x0000021Au,c->r[9]); // 800FB4EC
  W8(c->r[31]+0x0000010Cu,c->r[11]); // 800FB4F0
  W8(c->r[31]+0x00000106u,c->r[10]); // 800FB4F4
  W8(c->r[31]+0x00000102u,c->r[0]); // 800FB4F8
  W8(c->r[30]+0x0000021Bu,c->r[9]); // 800FB4FC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FB450; } // 800FB500
L_800FB504:;
  c->r[5]=0u+0x803D0000u; // 800FB504
  c->r[4]=c->r[1]+0x00000008u; // 800FB508
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FB50C
  c->r[3]=0u+0x00000000u; // 800FB510
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FB514
  c->ctr=c->r[12]; // 800FB518
  if (true) { c->lr=0x800FB520u; dispatch(c,c->ctr); } // 800FB51C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB524
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FB528
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FB52C
  c->lr=c->r[0]; // 800FB530
  c->r[1]=c->r[1]+0x00000020u; // 800FB534
  return; // 800FB538
}

// bta_hh_api_disable
void f_800FB53C(Ctx* __restrict c) {
  trace_call(0x800FB53Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB53C
  c->r[0]=c->lr; // 800FB540
  c->r[3]=0u+0x803D0000u; // 800FB544
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB548
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB54C
  c->r[31]=c->r[3]+0xFFFF9FE8u; // 800FB550
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB554
  c->r[0]=R32(c->r[31]+0x00000224u); // 800FB558
  cmps(c,0,(int32_t)c->r[0],0); // 800FB55C
  if (crb(c,2)) { goto L_800FB628; } // 800FB560
  c->r[0]=R8(c->r[31]+0x0000022Du); // 800FB564
  cmps(c,0,(int32_t)c->r[0],0); // 800FB568
  if (!crb(c,2)) { goto L_800FB5EC; } // 800FB56C
  c->r[0]=0u+0x00000000u; // 800FB570
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB574
  c->lr=0x800FB57Cu; f_8010D3FC(c); // 800FB578
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB57C
  if (crb(c,2)) { goto L_800FB58C; } // 800FB580
  c->r[0]=0u+0x00000006u; // 800FB584
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB588
L_800FB58C:;
  c->r[31]=0u+0x803D0000u; // 800FB58C
  c->r[30]=0u+0x00000000u; // 800FB590
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FB594
L_800FB598:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 800FB598
  c->r[3]=c->r[31]+c->r[0]; // 800FB59C
  c->r[3]=c->r[3]+0x00000014u; // 800FB5A0
  c->lr=0x800FB5A8u; f_800F8060(c); // 800FB5A4
  c->r[30]=c->r[30]+0x00000001u; // 800FB5A8
  cmpu(c,0,c->r[30],0x00000010u); // 800FB5AC
  if (crb(c,0)) { IRQCHK(c); goto L_800FB598; } // 800FB5B0
  c->r[31]=0u+0x803D0000u; // 800FB5B4
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FB5B8
  c->r[3]=c->r[31]+0x00000228u; // 800FB5BC
  c->lr=0x800FB5C4u; f_800F8060(c); // 800FB5C0
  c->r[12]=R32(c->r[31]+0x00000224u); // 800FB5C4
  c->r[4]=c->r[1]+0x00000008u; // 800FB5C8
  c->r[3]=0u+0x00000001u; // 800FB5CC
  c->ctr=c->r[12]; // 800FB5D0
  if (true) { c->lr=0x800FB5D8u; dispatch(c,c->ctr); } // 800FB5D4
  c->r[3]=c->r[31]|c->r[31]; // 800FB5D8
  c->r[4]=0u+0x00000000u; // 800FB5DC
  c->r[5]=0u+0x00000230u; // 800FB5E0
  c->lr=0x800FB5E8u; f_80004714(c); // 800FB5E4
  goto L_800FB628; // 800FB5E8
L_800FB5EC:;
  c->r[0]=0u+0x00000001u; // 800FB5EC
  c->r[30]=0u+0x00000000u; // 800FB5F0
  W8(c->r[31]+0x0000022Eu,c->r[0]); // 800FB5F4
L_800FB5F8:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 800FB5F8
  c->r[3]=c->r[31]+c->r[0]; // 800FB5FC
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 800FB600
  cmpu(c,0,c->r[0],0x00000003u); // 800FB604
  if (!crb(c,2)) { goto L_800FB61C; } // 800FB608
  c->r[3]=c->r[3]+0x00000010u; // 800FB60C
  c->r[4]=0u+0x00001701u; // 800FB610
  c->r[5]=0u+0x00000000u; // 800FB614
  c->lr=0x800FB61Cu; f_800FCEE0(c); // 800FB618
L_800FB61C:;
  c->r[30]=c->r[30]+0x00000001u; // 800FB61C
  cmpu(c,0,c->r[30],0x00000010u); // 800FB620
  if (crb(c,0)) { IRQCHK(c); goto L_800FB5F8; } // 800FB624
L_800FB628:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB628
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB62C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FB630
  c->lr=c->r[0]; // 800FB634
  c->r[1]=c->r[1]+0x00000020u; // 800FB638
  return; // 800FB63C
}

// bta_hh_disc_cmpl
void f_800FB640(Ctx* __restrict c) {
  trace_call(0x800FB640u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB640
  c->r[0]=c->lr; // 800FB644
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB648
  c->r[0]=0u+0x00000000u; // 800FB64C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB650
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB654
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB658
  c->lr=0x800FB660u; f_8010D3FC(c); // 800FB65C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB660
  if (crb(c,2)) { goto L_800FB670; } // 800FB664
  c->r[0]=0u+0x00000006u; // 800FB668
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB66C
L_800FB670:;
  c->r[31]=0u+0x803D0000u; // 800FB670
  c->r[30]=0u+0x00000000u; // 800FB674
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FB678
L_800FB67C:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 800FB67C
  c->r[3]=c->r[31]+c->r[0]; // 800FB680
  c->r[3]=c->r[3]+0x00000014u; // 800FB684
  c->lr=0x800FB68Cu; f_800F8060(c); // 800FB688
  c->r[30]=c->r[30]+0x00000001u; // 800FB68C
  cmpu(c,0,c->r[30],0x00000010u); // 800FB690
  if (crb(c,0)) { IRQCHK(c); goto L_800FB67C; } // 800FB694
  c->r[31]=0u+0x803D0000u; // 800FB698
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FB69C
  c->r[3]=c->r[31]+0x00000228u; // 800FB6A0
  c->lr=0x800FB6A8u; f_800F8060(c); // 800FB6A4
  c->r[12]=R32(c->r[31]+0x00000224u); // 800FB6A8
  c->r[4]=c->r[1]+0x00000008u; // 800FB6AC
  c->r[3]=0u+0x00000001u; // 800FB6B0
  c->ctr=c->r[12]; // 800FB6B4
  if (true) { c->lr=0x800FB6BCu; dispatch(c,c->ctr); } // 800FB6B8
  c->r[3]=c->r[31]|c->r[31]; // 800FB6BC
  c->r[4]=0u+0x00000000u; // 800FB6C0
  c->r[5]=0u+0x00000230u; // 800FB6C4
  c->lr=0x800FB6CCu; f_80004714(c); // 800FB6C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB6CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB6D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FB6D4
  c->lr=c->r[0]; // 800FB6D8
  c->r[1]=c->r[1]+0x00000020u; // 800FB6DC
  return; // 800FB6E0
}

// bta_hh_sdp_cback
void f_800FB6E4(Ctx* __restrict c) {
  trace_call(0x800FB6E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB6E4
  c->r[0]=c->lr; // 800FB6E8
  c->r[6]=0u+0x803D0000u; // 800FB6EC
  cmps(c,0,(int32_t)c->r[3],0); // 800FB6F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB6F4
  c->r[0]=0u+0x00000010u; // 800FB6F8
  c->r[6]=c->r[6]+0xFFFF9FE8u; // 800FB6FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB700
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB704
  c->r[30]=c->r[5]|c->r[5]; // 800FB708
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FB70C
  c->r[29]=c->r[4]|c->r[4]; // 800FB710
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB714
  c->r[31]=R32(c->r[6]+0x00000210u); // 800FB718
  if (!crb(c,2)) { goto L_800FB7DC; } // 800FB71C
  c->r[0]=R8(c->r[31]+0x00000014u); // 800FB720
  cmps(c,0,(int32_t)c->r[0],0); // 800FB724
  if (crb(c,2)) { goto L_800FB730; } // 800FB728
  c->r[29]=c->r[4]|0x00008000u; // 800FB72C
L_800FB730:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FB730
  cmpu(c,0,c->r[0],0x00000004u); // 800FB734
  if (crb(c,0)) { goto L_800FB758; } // 800FB738
  c->r[4]=0u+0x80330000u; // 800FB73C
  c->r[6]=c->r[3]|c->r[3]; // 800FB740
  c->r[5]=c->r[31]|c->r[31]; // 800FB744
  c->r[7]=rotl(c->r[29],0)&0x0000FFFFu; // 800FB748
  c->r[4]=c->r[4]+0xFFFF9F18u; // 800FB74C
  c->r[3]=0u+0x00000503u; // 800FB750
  c->lr=0x800FB758u; f_800F72E0(c); // 800FB754
L_800FB758:;
  c->r[4]=R8(c->r[30]+0x00000064u); // 800FB758
  c->r[3]=c->r[31]|c->r[31]; // 800FB75C
  c->lr=0x800FB764u; f_800FD6AC(c); // 800FB760
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB764
  if (crb(c,2)) { goto L_800FB7D4; } // 800FB768
  c->r[0]=R8(c->r[31]+0x00000016u); // 800FB76C
  cmpu(c,0,c->r[0],0x000000FFu); // 800FB770
  if (!crb(c,2)) { goto L_800FB7DC; } // 800FB774
  c->r[3]=c->r[31]+0x00000008u; // 800FB778
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 800FB77C
  c->r[5]=c->r[1]+0x00000009u; // 800FB780
  c->lr=0x800FB788u; f_8010D4E0(c); // 800FB784
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB788
  W8(c->r[1]+0x00000008u,c->r[3]); // 800FB78C
  if (!crb(c,2)) { goto L_800FB7C8; } // 800FB790
  c->r[3]=0u+0x803D0000u; // 800FB794
  c->r[4]=R8(c->r[1]+0x00000009u); // 800FB798
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FB79C
  c->r[0]=R8(c->r[31]+0x00000012u); // 800FB7A0
  c->r[5]=c->r[3]+c->r[4]; // 800FB7A4
  c->r[6]=c->r[30]+0x00000068u; // 800FB7A8
  W8(c->r[5]+0x00000214u,c->r[0]); // 800FB7AC
  c->r[3]=c->r[31]|c->r[31]; // 800FB7B0
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 800FB7B4
  c->r[7]=R8(c->r[30]+0x00000064u); // 800FB7B8
  c->r[8]=R8(c->r[31]+0x00000015u); // 800FB7BC
  c->lr=0x800FB7C4u; f_800FD5F0(c); // 800FB7C0
  goto L_800FB7DC; // 800FB7C4
L_800FB7C8:;
  c->r[0]=0u+0x00000000u; // 800FB7C8
  W8(c->r[31]+0x00000015u,c->r[0]); // 800FB7CC
  goto L_800FB7DC; // 800FB7D0
L_800FB7D4:;
  c->r[0]=0u+0x000000FFu; // 800FB7D4
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FB7D8
L_800FB7DC:;
  c->r[3]=0u+0x803D0000u; // 800FB7DC
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FB7E0
  c->r[3]=c->r[3]+0x00000228u; // 800FB7E4
  c->lr=0x800FB7ECu; f_800F8060(c); // 800FB7E8
  c->r[3]=c->r[31]|c->r[31]; // 800FB7EC
  c->r[5]=c->r[1]+0x00000008u; // 800FB7F0
  c->r[4]=0u+0x00001707u; // 800FB7F4
  c->lr=0x800FB7FCu; f_800FCEE0(c); // 800FB7F8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB7FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB800
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FB804
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FB808
  c->lr=c->r[0]; // 800FB80C
  c->r[1]=c->r[1]+0x00000020u; // 800FB810
  return; // 800FB814
}

// bta_hh_start_sdp
void f_800FB818(Ctx* __restrict c) {
  trace_call(0x800FB818u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB818
  c->r[0]=c->lr; // 800FB81C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB820
  c->r[0]=0u+0x00000010u; // 800FB824
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB828
  c->r[31]=c->r[3]|c->r[3]; // 800FB82C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB830
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FB834
  c->r[29]=c->r[4]|c->r[4]; // 800FB838
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FB83C
  c->r[5]=R8(c->r[4]+0x0000000Eu); // 800FB840
  c->r[0]=R8(c->r[3]+0x00000015u); // 800FB844
  W8(c->r[3]+0x00000014u,c->r[5]); // 800FB848
  cmps(c,0,(int32_t)c->r[0],0); // 800FB84C
  c->r[0]=R8(c->r[4]+0x0000000Fu); // 800FB850
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 800FB854
  if (crb(c,2)) { goto L_800FB8F0; } // 800FB858
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FB85C
  c->r[3]=0u+0x00000000u; // 800FB860
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FB864
  cmpu(c,0,c->r[0],0x00000005u); // 800FB868
  if (crb(c,0)) { goto L_800FB880; } // 800FB86C
  c->r[4]=0u+0x80330000u; // 800FB870
  c->r[3]=0u+0x00000504u; // 800FB874
  c->r[4]=c->r[4]+0xFFFF9F70u; // 800FB878
  c->lr=0x800FB880u; f_800F7280(c); // 800FB87C
L_800FB880:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 800FB880
  cmpu(c,0,c->r[0],0x000000FFu); // 800FB884
  if (!crb(c,2)) { goto L_800FB8DC; } // 800FB888
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 800FB88C
  c->r[3]=c->r[31]+0x00000008u; // 800FB890
  c->r[5]=c->r[1]+0x00000008u; // 800FB894
  c->lr=0x800FB89Cu; f_8010D4E0(c); // 800FB898
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FB89C
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FB8A0
  if (!crb(c,2)) { goto L_800FB8DC; } // 800FB8A4
  c->r[4]=R8(c->r[1]+0x00000008u); // 800FB8A8
  c->r[3]=c->r[31]|c->r[31]; // 800FB8AC
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 800FB8B0
  c->r[6]=0u+0x00000000u; // 800FB8B4
  c->r[7]=R8(c->r[31]+0x00000013u); // 800FB8B8
  c->r[8]=R8(c->r[31]+0x00000015u); // 800FB8BC
  c->lr=0x800FB8C4u; f_800FD5F0(c); // 800FB8C0
  c->r[3]=0u+0x803D0000u; // 800FB8C4
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FB8C8
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FB8CC
  c->r[4]=R8(c->r[31]+0x00000012u); // 800FB8D0
  c->r[3]=c->r[3]+c->r[0]; // 800FB8D4
  W8(c->r[3]+0x00000214u,c->r[4]); // 800FB8D8
L_800FB8DC:;
  c->r[3]=c->r[31]|c->r[31]; // 800FB8DC
  c->r[5]=c->r[1]+0x00000009u; // 800FB8E0
  c->r[4]=0u+0x00001707u; // 800FB8E4
  c->lr=0x800FB8ECu; f_800FCEE0(c); // 800FB8E8
  goto L_800FB990; // 800FB8EC
L_800FB8F0:;
  c->r[30]=0u+0x803D0000u; // 800FB8F0
  c->r[30]=c->r[30]+0xFFFF9FE8u; // 800FB8F4
  c->r[0]=R32(c->r[30]+0x00000228u); // 800FB8F8
  cmps(c,0,(int32_t)c->r[0],0); // 800FB8FC
  if (!crb(c,2)) { goto L_800FB974; } // 800FB900
  c->r[3]=R32(c->r[13]+0xFFFF8788u); // 800FB904
  c->r[3]=R16(c->r[3]+0x00000008u); // 800FB908
  c->lr=0x800FB910u; f_800F4530(c); // 800FB90C
  W32(c->r[30]+0x00000228u,c->r[3]); // 800FB910
  c->r[6]=0u+0x80100000u; // 800FB914
  c->r[5]=R32(c->r[13]+0xFFFF8788u); // 800FB918
  c->r[4]=c->r[3]|c->r[3]; // 800FB91C
  W32(c->r[30]+0x00000210u,c->r[31]); // 800FB920
  c->r[3]=c->r[29]+0x00000008u; // 800FB924
  c->r[6]=c->r[6]+0xFFFFB6E4u; // 800FB928
  c->r[5]=R16(c->r[5]+0x00000008u); // 800FB92C
  c->lr=0x800FB934u; f_8010CE24(c); // 800FB930
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 800FB934
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FB938
  if (crb(c,2)) { goto L_800FB974; } // 800FB93C
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FB940
  cmpu(c,0,c->r[0],0x00000005u); // 800FB944
  if (crb(c,0)) { goto L_800FB95C; } // 800FB948
  c->r[4]=0u+0x80330000u; // 800FB94C
  c->r[3]=0u+0x00000504u; // 800FB950
  c->r[4]=c->r[4]+0xFFFF9FA0u; // 800FB954
  c->lr=0x800FB95Cu; f_800F72A0(c); // 800FB958
L_800FB95C:;
  c->r[0]=0u+0x00000007u; // 800FB95C
  c->r[3]=0u+0x803D0000u; // 800FB960
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FB964
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FB968
  c->r[3]=c->r[3]+0x00000228u; // 800FB96C
  c->lr=0x800FB974u; f_800F8060(c); // 800FB970
L_800FB974:;
  c->r[0]=R8(c->r[1]+0x00000009u); // 800FB974
  cmps(c,0,(int32_t)c->r[0],0); // 800FB978
  if (crb(c,2)) { goto L_800FB990; } // 800FB97C
  c->r[3]=c->r[31]|c->r[31]; // 800FB980
  c->r[5]=c->r[1]+0x00000009u; // 800FB984
  c->r[4]=0u+0x00001707u; // 800FB988
  c->lr=0x800FB990u; f_800FCEE0(c); // 800FB98C
L_800FB990:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FB990
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FB994
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FB998
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FB99C
  c->lr=c->r[0]; // 800FB9A0
  c->r[1]=c->r[1]+0x00000020u; // 800FB9A4
  return; // 800FB9A8
}

// bta_hh_sdp_cmpl
void f_800FB9AC(Ctx* __restrict c) {
  trace_call(0x800FB9ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FB9AC
  c->r[0]=c->lr; // 800FB9B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FB9B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FB9B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FB9BC
  c->r[30]=c->r[4]|c->r[4]; // 800FB9C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FB9C4
  c->r[29]=c->r[3]|c->r[3]; // 800FB9C8
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FB9CC
  cmpu(c,0,c->r[0],0x00000005u); // 800FB9D0
  if (crb(c,0)) { goto L_800FB9EC; } // 800FB9D4
  c->r[4]=0u+0x80330000u; // 800FB9D8
  c->r[5]=R8(c->r[30]+0x00000000u); // 800FB9DC
  c->r[4]=c->r[4]+0xFFFF9FF0u; // 800FB9E0
  c->r[3]=0u+0x00000504u; // 800FB9E4
  c->lr=0x800FB9ECu; f_800F72A0(c); // 800FB9E8
L_800FB9EC:;
  c->r[3]=c->r[1]+0x00000008u; // 800FB9EC
  c->r[4]=0u+0x00000000u; // 800FB9F0
  c->r[5]=0u+0x00000008u; // 800FB9F4
  c->lr=0x800FB9FCu; f_80004714(c); // 800FB9F8
  c->r[0]=R8(c->r[29]+0x00000016u); // 800FB9FC
  c->r[3]=c->r[1]+0x00000008u; // 800FBA00
  c->r[4]=c->r[29]+0x00000008u; // 800FBA04
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800FBA08
  c->lr=0x800FBA10u; f_800F7914(c); // 800FBA0C
  c->r[31]=R8(c->r[30]+0x00000000u); // 800FBA10
  cmps(c,0,(int32_t)c->r[31],0); // 800FBA14
  if (!crb(c,2)) { goto L_800FBA80; } // 800FBA18
  c->r[0]=R8(c->r[29]+0x00000019u); // 800FBA1C
  cmps(c,0,(int32_t)c->r[0],0); // 800FBA20
  if (!crb(c,2)) { goto L_800FBA70; } // 800FBA24
  c->r[4]=R8(c->r[29]+0x00000014u); // 800FBA28
  c->r[3]=c->r[13]+0xFFFF87B0u; // 800FBA2C
  c->lr=0x800FBA34u; f_8010D97C(c); // 800FBA30
  c->r[3]=R8(c->r[29]+0x00000016u); // 800FBA34
  c->lr=0x800FBA3Cu; f_8010D738(c); // 800FBA38
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 800FBA3C
  c->r[31]=c->r[3]|c->r[3]; // 800FBA40
  if (crb(c,2)) { goto L_800FBA80; } // 800FBA44
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FBA48
  cmpu(c,0,c->r[0],0x00000005u); // 800FBA4C
  if (crb(c,0)) { goto L_800FBA64; } // 800FBA50
  c->r[4]=0u+0x80330000u; // 800FBA54
  c->r[3]=0u+0x00000504u; // 800FBA58
  c->r[4]=c->r[4]+0xFFFFA010u; // 800FBA5C
  c->lr=0x800FBA64u; f_800F72A0(c); // 800FBA60
L_800FBA64:;
  c->r[3]=R8(c->r[29]+0x00000016u); // 800FBA64
  c->lr=0x800FBA6Cu; f_8010D670(c); // 800FBA68
  goto L_800FBA80; // 800FBA6C
L_800FBA70:;
  c->r[3]=c->r[29]|c->r[29]; // 800FBA70
  c->r[4]=0u+0x0000170Bu; // 800FBA74
  c->r[5]=0u+0x00000000u; // 800FBA78
  c->lr=0x800FBA80u; f_800FCEE0(c); // 800FBA7C
L_800FBA80:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[0]); // 800FBA80
  if (crb(c,2)) { goto L_800FBAF8; } // 800FBA84
  c->r[0]=R8(c->r[30]+0x00000000u); // 800FBA88
  cmpu(c,0,c->r[0],0x000000FFu); // 800FBA8C
  if (!crb(c,2)) { goto L_800FBAA0; } // 800FBA90
  c->r[0]=0u+0x0000000Au; // 800FBA94
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800FBA98
  goto L_800FBAA8; // 800FBA9C
L_800FBAA0:;
  c->r[0]=0u+0x00000007u; // 800FBAA0
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800FBAA4
L_800FBAA8:;
  c->r[5]=0u+0x803D0000u; // 800FBAA8
  c->r[4]=c->r[1]+0x00000008u; // 800FBAAC
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FBAB0
  c->r[3]=0u+0x00000002u; // 800FBAB4
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FBAB8
  c->ctr=c->r[12]; // 800FBABC
  if (true) { c->lr=0x800FBAC4u; dispatch(c,c->ctr); } // 800FBAC0
  c->r[3]=c->r[29]|c->r[29]; // 800FBAC4
  c->r[4]=0u+0x00001701u; // 800FBAC8
  c->r[5]=0u+0x00000000u; // 800FBACC
  c->lr=0x800FBAD4u; f_800FCEE0(c); // 800FBAD0
  c->r[0]=R8(c->r[29]+0x00000015u); // 800FBAD4
  cmps(c,0,(int32_t)c->r[0],0); // 800FBAD8
  if (!crb(c,2)) { goto L_800FBAF4; } // 800FBADC
  c->r[0]=R8(c->r[29]+0x00000019u); // 800FBAE0
  cmps(c,0,(int32_t)c->r[0],0); // 800FBAE4
  if (!crb(c,2)) { goto L_800FBAF4; } // 800FBAE8
  c->r[3]=c->r[29]|c->r[29]; // 800FBAEC
  c->lr=0x800FBAF4u; f_800FD570(c); // 800FBAF0
L_800FBAF4:;
  c->lr=0x800FBAF8u; f_800FD700(c); // 800FBAF4
L_800FBAF8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBAF8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBAFC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FBB00
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FBB04
  c->lr=c->r[0]; // 800FBB08
  c->r[1]=c->r[1]+0x00000020u; // 800FBB0C
  return; // 800FBB10
}

// bta_hh_api_disc_act
void f_800FBB14(Ctx* __restrict c) {
  trace_call(0x800FBB14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBB14
  c->r[0]=c->lr; // 800FBB18
  cmps(c,0,(int32_t)c->r[4],0); // 800FBB1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBB20
  if (crb(c,2)) { goto L_800FBB34; } // 800FBB24
  c->r[0]=R16(c->r[4]+0x00000006u); // 800FBB28
  c->r[3]=rotl(c->r[0],0)&0x000000FFu; // 800FBB2C
  goto L_800FBB38; // 800FBB30
L_800FBB34:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 800FBB34
L_800FBB38:;
  c->r[0]=0u+0x00000006u; // 800FBB38
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FBB3C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FBB40
  c->lr=0x800FBB48u; f_8010D8DC(c); // 800FBB44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FBB48
  if (crb(c,2)) { goto L_800FBB6C; } // 800FBB4C
  c->r[5]=0u+0x803D0000u; // 800FBB50
  c->r[4]=c->r[1]+0x00000008u; // 800FBB54
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FBB58
  c->r[3]=0u+0x00000003u; // 800FBB5C
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FBB60
  c->ctr=c->r[12]; // 800FBB64
  if (true) { c->lr=0x800FBB6Cu; dispatch(c,c->ctr); } // 800FBB68
L_800FBB6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBB6C
  c->lr=c->r[0]; // 800FBB70
  c->r[1]=c->r[1]+0x00000010u; // 800FBB74
  return; // 800FBB78
}

// bta_hh_open_cmpl_act
void f_800FBB7C(Ctx* __restrict c) {
  trace_call(0x800FBB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBB7C
  c->r[0]=c->lr; // 800FBB80
  cmps(c,0,(int32_t)c->r[4],0); // 800FBB84
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBB88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBB8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBB90
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FBB94
  c->r[29]=c->r[3]|c->r[3]; // 800FBB98
  if (crb(c,2)) { goto L_800FBBAC; } // 800FBB9C
  c->r[0]=R16(c->r[4]+0x00000006u); // 800FBBA0
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 800FBBA4
  goto L_800FBBB0; // 800FBBA8
L_800FBBAC:;
  c->r[30]=R8(c->r[3]+0x00000016u); // 800FBBAC
L_800FBBB0:;
  c->r[3]=c->r[1]+0x00000008u; // 800FBBB0
  c->r[4]=0u+0x00000000u; // 800FBBB4
  c->r[5]=0u+0x00000008u; // 800FBBB8
  c->lr=0x800FBBC0u; f_80004714(c); // 800FBBBC
  W8(c->r[1]+0x0000000Fu,c->r[30]); // 800FBBC0
  c->r[3]=c->r[1]+0x00000008u; // 800FBBC4
  c->r[4]=c->r[29]+0x00000008u; // 800FBBC8
  c->lr=0x800FBBD0u; f_800F7914(c); // 800FBBCC
  c->r[31]=0u+0x803D0000u; // 800FBBD0
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FBBD4
  c->r[3]=R8(c->r[31]+0x0000022Du); // 800FBBD8
  c->r[0]=c->r[3]+0x00000001u; // 800FBBDC
  W8(c->r[31]+0x0000022Du,c->r[0]); // 800FBBE0
  c->r[3]=R8(c->r[29]+0x00000016u); // 800FBBE4
  c->r[4]=R8(c->r[29]+0x00000013u); // 800FBBE8
  c->r[5]=R16(c->r[29]+0x0000000Eu); // 800FBBEC
  c->r[6]=R8(c->r[29]+0x00000015u); // 800FBBF0
  c->lr=0x800FBBF8u; f_800F4010(c); // 800FBBF4
  c->r[4]=R8(c->r[29]+0x00000015u); // 800FBBF8
  c->r[5]=c->r[29]+0x00000008u; // 800FBBFC
  c->r[3]=0u+0x00000017u; // 800FBC00
  c->lr=0x800FBC08u; f_800F7A18(c); // 800FBC04
  c->r[5]=R8(c->r[29]+0x0000001Bu); // 800FBC08
  cmps(c,0,(int32_t)c->r[5],0); // 800FBC0C
  if (crb(c,2)) { goto L_800FBC64; } // 800FBC10
  c->r[3]=c->r[30]|c->r[30]; // 800FBC14
  c->r[4]=0u+0x00000007u; // 800FBC18
  c->r[6]=0u+0x00000000u; // 800FBC1C
  c->r[7]=0u+0x00000000u; // 800FBC20
  c->r[8]=0u+0x00000000u; // 800FBC24
  c->lr=0x800FBC2Cu; f_8010D79C(c); // 800FBC28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FBC2C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800FBC30
  if (crb(c,2)) { goto L_800FBC58; } // 800FBC34
  c->r[12]=R32(c->r[31]+0x00000224u); // 800FBC38
  c->r[0]=0u+0x00000008u; // 800FBC3C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800FBC40
  c->r[4]=c->r[1]+0x00000008u; // 800FBC44
  c->r[3]=0u+0x00000002u; // 800FBC48
  c->ctr=c->r[12]; // 800FBC4C
  if (true) { c->lr=0x800FBC54u; dispatch(c,c->ctr); } // 800FBC50
  goto L_800FBC80; // 800FBC54
L_800FBC58:;
  c->r[0]=0u+0x00000002u; // 800FBC58
  W16(c->r[29]+0x00000010u,c->r[0]); // 800FBC5C
  goto L_800FBC80; // 800FBC60
L_800FBC64:;
  c->r[0]=0u+0x00000001u; // 800FBC64
  c->r[4]=c->r[1]+0x00000008u; // 800FBC68
  W8(c->r[29]+0x0000001Au,c->r[0]); // 800FBC6C
  c->r[3]=0u+0x00000002u; // 800FBC70
  c->r[12]=R32(c->r[31]+0x00000224u); // 800FBC74
  c->ctr=c->r[12]; // 800FBC78
  if (true) { c->lr=0x800FBC80u; dispatch(c,c->ctr); } // 800FBC7C
L_800FBC80:;
  c->r[0]=0u+0x00000000u; // 800FBC80
  W8(c->r[29]+0x00000019u,c->r[0]); // 800FBC84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBC88
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FBC8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FBC90
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBC94
  c->lr=c->r[0]; // 800FBC98
  c->r[1]=c->r[1]+0x00000020u; // 800FBC9C
  return; // 800FBCA0
}

// bta_hh_open_act
void f_800FBCA4(Ctx* __restrict c) {
  trace_call(0x800FBCA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBCA4
  c->r[0]=c->lr; // 800FBCA8
  cmps(c,0,(int32_t)c->r[4],0); // 800FBCAC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FBCB0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FBCB4
  c->r[31]=c->r[4]|c->r[4]; // 800FBCB8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FBCBC
  c->r[30]=c->r[3]|c->r[3]; // 800FBCC0
  if (crb(c,2)) { goto L_800FBCD4; } // 800FBCC4
  c->r[0]=R16(c->r[4]+0x00000006u); // 800FBCC8
  c->r[5]=rotl(c->r[0],0)&0x000000FFu; // 800FBCCC
  goto L_800FBCD8; // 800FBCD0
L_800FBCD4:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 800FBCD4
L_800FBCD8:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FBCD8
  cmpu(c,0,c->r[0],0x00000004u); // 800FBCDC
  if (crb(c,0)) { goto L_800FBCF4; } // 800FBCE0
  c->r[4]=0u+0x80330000u; // 800FBCE4
  c->r[3]=0u+0x00000503u; // 800FBCE8
  c->r[4]=c->r[4]+0xFFFFA05Cu; // 800FBCEC
  c->lr=0x800FBCF4u; f_800F72A0(c); // 800FBCF0
L_800FBCF4:;
  c->r[0]=R8(c->r[30]+0x00000015u); // 800FBCF4
  cmps(c,0,(int32_t)c->r[0],0); // 800FBCF8
  if (crb(c,2)) { goto L_800FBD14; } // 800FBCFC
  c->r[3]=c->r[30]|c->r[30]; // 800FBD00
  c->r[5]=c->r[31]|c->r[31]; // 800FBD04
  c->r[4]=0u+0x0000170Bu; // 800FBD08
  c->lr=0x800FBD10u; f_800FCEE0(c); // 800FBD0C
  goto L_800FBD44; // 800FBD10
L_800FBD14:;
  c->r[0]=0u+0x00000001u; // 800FBD14
  c->r[3]=c->r[1]+0x00000008u; // 800FBD18
  W8(c->r[30]+0x00000019u,c->r[0]); // 800FBD1C
  c->r[4]=0u+0x00000000u; // 800FBD20
  c->r[5]=0u+0x00000010u; // 800FBD24
  c->lr=0x800FBD2Cu; f_80004714(c); // 800FBD28
  c->r[3]=c->r[1]+0x00000010u; // 800FBD2C
  c->r[4]=c->r[30]+0x00000008u; // 800FBD30
  c->lr=0x800FBD38u; f_800F7914(c); // 800FBD34
  c->r[3]=c->r[30]|c->r[30]; // 800FBD38
  c->r[4]=c->r[1]+0x00000008u; // 800FBD3C
  c->lr=0x800FBD44u; f_800FB818(c); // 800FBD40
L_800FBD44:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FBD44
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FBD48
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FBD4C
  c->lr=c->r[0]; // 800FBD50
  c->r[1]=c->r[1]+0x00000020u; // 800FBD54
  return; // 800FBD58
}

// bta_hh_data_act
void f_800FBD5C(Ctx* __restrict c) {
  trace_call(0x800FBD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBD5C
  c->r[0]=c->lr; // 800FBD60
  c->r[8]=c->r[3]|c->r[3]; // 800FBD64
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FBD68
  c->r[5]=R32(c->r[4]+0x0000000Cu); // 800FBD6C
  W32(c->r[1]+0x00000008u,c->r[5]); // 800FBD70
  c->r[0]=R16(c->r[5]+0x00000004u); // 800FBD74
  c->r[3]=R16(c->r[4]+0x00000006u); // 800FBD78
  c->r[4]=c->r[5]+c->r[0]; // 800FBD7C
  c->r[5]=R16(c->r[5]+0x00000002u); // 800FBD80
  c->r[6]=R8(c->r[8]+0x0000001Bu); // 800FBD84
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 800FBD88
  c->r[7]=R8(c->r[8]+0x00000013u); // 800FBD8C
  c->r[4]=c->r[4]+0x00000008u; // 800FBD90
  c->r[8]=R8(c->r[8]+0x00000015u); // 800FBD94
  c->lr=0x800FBD9Cu; f_800F3FE0(c); // 800FBD98
  c->r[3]=c->r[1]+0x00000008u; // 800FBD9C
  c->lr=0x800FBDA4u; f_800F8060(c); // 800FBDA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FBDA4
  c->lr=c->r[0]; // 800FBDA8
  c->r[1]=c->r[1]+0x00000010u; // 800FBDAC
  return; // 800FBDB0
}

// bta_hh_handsk_act
void f_800FBDB4(Ctx* __restrict c) {
  trace_call(0x800FBDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FBDB4
  c->r[0]=c->lr; // 800FBDB8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FBDBC
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 800FBDC0
  c->r[31]=c->r[3]|c->r[3]; // 800FBDC4
  W32(c->r[1]+0x00000038u,c->r[30]); // 800FBDC8
  c->r[30]=0u+0x80330000u; // 800FBDCC
  c->r[30]=c->r[30]+0xFFFF9F18u; // 800FBDD0
  W32(c->r[1]+0x00000034u,c->r[29]); // 800FBDD4
  c->r[29]=c->r[4]|c->r[4]; // 800FBDD8
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FBDDC
  cmpu(c,0,c->r[0],0x00000005u); // 800FBDE0
  if (crb(c,0)) { goto L_800FBE58; } // 800FBDE4
  c->r[0]=R16(c->r[3]+0x00000010u); // 800FBDE8
  cmpu(c,0,c->r[0],0x00000009u); // 800FBDEC
  if (crb(c,1)) { goto L_800FBE44; } // 800FBDF0
  c->r[3]=0u+0x80330000u; // 800FBDF4
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FBDF8
  c->r[3]=c->r[3]+0xFFFFA198u; // 800FBDFC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FBE00
  c->ctr=c->r[3]; // 800FBE04
  if (true) { switch (c->ctr) { case 0x800FBE0Cu: goto L_800FBE0C; case 0x800FBE14u: goto L_800FBE14; case 0x800FBE1Cu: goto L_800FBE1C; case 0x800FBE24u: goto L_800FBE24; case 0x800FBE2Cu: goto L_800FBE2C; case 0x800FBE34u: goto L_800FBE34; case 0x800FBE3Cu: goto L_800FBE3C; case 0x800FBE44u: goto L_800FBE44; case 0x800FBE7Cu: goto L_800FBE7C; case 0x800FBEFCu: goto L_800FBEFC; case 0x800FBF6Cu: goto L_800FBF6C; case 0x800FBFD8u: goto L_800FBFD8; default: break; } dispatch(c,c->ctr); return; } // 800FBE08
L_800FBE0C:;
  c->r[5]=c->r[30]+0x0000016Cu; // 800FBE0C
  goto L_800FBE48; // 800FBE10
L_800FBE14:;
  c->r[5]=c->r[30]+0x00000180u; // 800FBE14
  goto L_800FBE48; // 800FBE18
L_800FBE1C:;
  c->r[5]=c->r[30]+0x00000194u; // 800FBE1C
  goto L_800FBE48; // 800FBE20
L_800FBE24:;
  c->r[5]=c->r[30]+0x000001ACu; // 800FBE24
  goto L_800FBE48; // 800FBE28
L_800FBE2C:;
  c->r[5]=c->r[30]+0x000001C4u; // 800FBE2C
  goto L_800FBE48; // 800FBE30
L_800FBE34:;
  c->r[5]=c->r[30]+0x000001D8u; // 800FBE34
  goto L_800FBE48; // 800FBE38
L_800FBE3C:;
  c->r[5]=c->r[30]+0x000001F0u; // 800FBE3C
  goto L_800FBE48; // 800FBE40
L_800FBE44:;
  c->r[5]=c->r[30]+0x00000200u; // 800FBE44
L_800FBE48:;
  c->r[6]=R32(c->r[29]+0x00000008u); // 800FBE48
  c->r[4]=c->r[30]+0x00000210u; // 800FBE4C
  c->r[3]=0u+0x00000504u; // 800FBE50
  c->lr=0x800FBE58u; f_800F72C0(c); // 800FBE54
L_800FBE58:;
  c->r[0]=R16(c->r[31]+0x00000010u); // 800FBE58
  cmpu(c,0,c->r[0],0x00000009u); // 800FBE5C
  if (crb(c,1)) { goto L_800FBFD8; } // 800FBE60
  c->r[3]=0u+0x80330000u; // 800FBE64
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FBE68
  c->r[3]=c->r[3]+0xFFFFA170u; // 800FBE6C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FBE70
  c->ctr=c->r[3]; // 800FBE74
  if (true) { switch (c->ctr) { case 0x800FBE0Cu: goto L_800FBE0C; case 0x800FBE14u: goto L_800FBE14; case 0x800FBE1Cu: goto L_800FBE1C; case 0x800FBE24u: goto L_800FBE24; case 0x800FBE2Cu: goto L_800FBE2C; case 0x800FBE34u: goto L_800FBE34; case 0x800FBE3Cu: goto L_800FBE3C; case 0x800FBE44u: goto L_800FBE44; case 0x800FBE7Cu: goto L_800FBE7C; case 0x800FBEFCu: goto L_800FBEFC; case 0x800FBF6Cu: goto L_800FBF6C; case 0x800FBFD8u: goto L_800FBFD8; default: break; } dispatch(c,c->ctr); return; } // 800FBE78
L_800FBE7C:;
  c->r[3]=c->r[1]+0x00000018u; // 800FBE7C
  c->r[4]=0u+0x00000000u; // 800FBE80
  c->r[5]=0u+0x0000000Au; // 800FBE84
  c->lr=0x800FBE8Cu; f_80004714(c); // 800FBE88
  c->r[0]=R8(c->r[31]+0x00000016u); // 800FBE8C
  W8(c->r[1]+0x00000019u,c->r[0]); // 800FBE90
  c->r[0]=R32(c->r[29]+0x00000008u); // 800FBE94
  cmps(c,0,(int32_t)c->r[0],5); // 800FBE98
  if (!crb(c,0)) { goto L_800FBEB0; } // 800FBE9C
  cmps(c,0,(int32_t)c->r[0],0); // 800FBEA0
  if (crb(c,2)) { goto L_800FBEBC; } // 800FBEA4
  if (!crb(c,0)) { goto L_800FBEC4; } // 800FBEA8
  goto L_800FBECC; // 800FBEAC
L_800FBEB0:;
  cmps(c,0,(int32_t)c->r[0],16); // 800FBEB0
  if (!crb(c,0)) { goto L_800FBECC; } // 800FBEB4
  goto L_800FBECC; // 800FBEB8
L_800FBEBC:;
  c->r[0]=0u+0x00000000u; // 800FBEBC
  goto L_800FBED0; // 800FBEC0
L_800FBEC4:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FBEC4
  goto L_800FBED0; // 800FBEC8
L_800FBECC:;
  c->r[0]=0u+0x00000005u; // 800FBECC
L_800FBED0:;
  c->r[3]=0u+0x803D0000u; // 800FBED0
  W8(c->r[1]+0x00000018u,c->r[0]); // 800FBED4
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FBED8
  c->r[4]=c->r[1]+0x00000018u; // 800FBEDC
  c->r[12]=R32(c->r[3]+0x00000224u); // 800FBEE0
  c->r[3]=R16(c->r[31]+0x00000010u); // 800FBEE4
  c->ctr=c->r[12]; // 800FBEE8
  if (true) { c->lr=0x800FBEF0u; dispatch(c,c->ctr); } // 800FBEEC
  c->r[0]=0u+0x00000000u; // 800FBEF0
  W16(c->r[31]+0x00000010u,c->r[0]); // 800FBEF4
  goto L_800FBFF0; // 800FBEF8
L_800FBEFC:;
  c->r[0]=R8(c->r[31]+0x00000016u); // 800FBEFC
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FBF00
  c->r[0]=R32(c->r[29]+0x00000008u); // 800FBF04
  cmps(c,0,(int32_t)c->r[0],5); // 800FBF08
  if (!crb(c,0)) { goto L_800FBF20; } // 800FBF0C
  cmps(c,0,(int32_t)c->r[0],0); // 800FBF10
  if (crb(c,2)) { goto L_800FBF2C; } // 800FBF14
  if (!crb(c,0)) { goto L_800FBF34; } // 800FBF18
  goto L_800FBF3C; // 800FBF1C
L_800FBF20:;
  cmps(c,0,(int32_t)c->r[0],16); // 800FBF20
  if (!crb(c,0)) { goto L_800FBF3C; } // 800FBF24
  goto L_800FBF3C; // 800FBF28
L_800FBF2C:;
  c->r[0]=0u+0x00000000u; // 800FBF2C
  goto L_800FBF40; // 800FBF30
L_800FBF34:;
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FBF34
  goto L_800FBF40; // 800FBF38
L_800FBF3C:;
  c->r[0]=0u+0x00000005u; // 800FBF3C
L_800FBF40:;
  c->r[3]=0u+0x803D0000u; // 800FBF40
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FBF44
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FBF48
  c->r[4]=c->r[1]+0x00000008u; // 800FBF4C
  c->r[12]=R32(c->r[3]+0x00000224u); // 800FBF50
  c->r[3]=R16(c->r[31]+0x00000010u); // 800FBF54
  c->ctr=c->r[12]; // 800FBF58
  if (true) { c->lr=0x800FBF60u; dispatch(c,c->ctr); } // 800FBF5C
  c->r[0]=0u+0x00000000u; // 800FBF60
  W16(c->r[31]+0x00000010u,c->r[0]); // 800FBF64
  goto L_800FBFF0; // 800FBF68
L_800FBF6C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 800FBF6C
  c->r[3]=0u+0x00000000u; // 800FBF70
  cmps(c,0,(int32_t)c->r[0],0); // 800FBF74
  if (crb(c,2)) { goto L_800FBF80; } // 800FBF78
  c->r[3]=0u+0x00000008u; // 800FBF7C
L_800FBF80:;
  W8(c->r[1]+0x00000016u,c->r[3]); // 800FBF80
  c->r[3]=c->r[1]+0x00000010u; // 800FBF84
  c->r[4]=c->r[31]+0x00000008u; // 800FBF88
  c->r[0]=R8(c->r[31]+0x00000016u); // 800FBF8C
  W8(c->r[1]+0x00000017u,c->r[0]); // 800FBF90
  c->lr=0x800FBF98u; f_800F7914(c); // 800FBF94
  c->r[5]=0u+0x803D0000u; // 800FBF98
  c->r[4]=c->r[1]+0x00000010u; // 800FBF9C
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FBFA0
  c->r[3]=R16(c->r[31]+0x00000010u); // 800FBFA4
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FBFA8
  c->ctr=c->r[12]; // 800FBFAC
  if (true) { c->lr=0x800FBFB4u; dispatch(c,c->ctr); } // 800FBFB0
  c->lr=0x800FBFB8u; f_800FD700(c); // 800FBFB4
  c->r[0]=0u+0x00000000u; // 800FBFB8
  W16(c->r[31]+0x00000010u,c->r[0]); // 800FBFBC
  c->r[0]=R8(c->r[1]+0x00000016u); // 800FBFC0
  cmps(c,0,(int32_t)c->r[0],0); // 800FBFC4
  if (!crb(c,2)) { goto L_800FBFF0; } // 800FBFC8
  c->r[0]=0u+0x00000001u; // 800FBFCC
  W8(c->r[31]+0x0000001Au,c->r[0]); // 800FBFD0
  goto L_800FBFF0; // 800FBFD4
L_800FBFD8:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FBFD8
  cmpu(c,0,c->r[0],0x00000005u); // 800FBFDC
  if (crb(c,0)) { goto L_800FBFF0; } // 800FBFE0
  c->r[4]=c->r[30]+0x0000023Cu; // 800FBFE4
  c->r[3]=0u+0x00000504u; // 800FBFE8
  c->lr=0x800FBFF0u; f_800F7280(c); // 800FBFEC
L_800FBFF0:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 800FBFF0
  c->r[5]=c->r[31]+0x00000008u; // 800FBFF4
  c->r[3]=0u+0x00000017u; // 800FBFF8
  c->lr=0x800FC000u; f_800F7BD4(c); // 800FBFFC
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FC000
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800FC004
  c->r[30]=R32(c->r[1]+0x00000038u); // 800FC008
  c->r[29]=R32(c->r[1]+0x00000034u); // 800FC00C
  c->lr=c->r[0]; // 800FC010
  c->r[1]=c->r[1]+0x00000040u; // 800FC014
  return; // 800FC018
}

// bta_hh_ctrl_dat_act
void f_800FC01C(Ctx* __restrict c) {
  trace_call(0x800FC01Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC01C
  c->r[0]=c->lr; // 800FC020
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FC024
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FC028
  c->r[31]=c->r[3]|c->r[3]; // 800FC02C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FC030
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FC034
  c->r[29]=0u+0x80330000u; // 800FC038
  c->r[29]=c->r[29]+0xFFFF9F18u; // 800FC03C
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 800FC040
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FC044
  W32(c->r[1]+0x00000008u,c->r[4]); // 800FC048
  cmpu(c,0,c->r[0],0x00000005u); // 800FC04C
  c->r[0]=R16(c->r[4]+0x00000004u); // 800FC050
  c->r[30]=c->r[4]+c->r[0]; // 800FC054
  if (crb(c,0)) { goto L_800FC0C8; } // 800FC058
  c->r[0]=R16(c->r[3]+0x00000010u); // 800FC05C
  cmpu(c,0,c->r[0],0x00000009u); // 800FC060
  if (crb(c,1)) { goto L_800FC0B8; } // 800FC064
  c->r[3]=0u+0x80330000u; // 800FC068
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FC06C
  c->r[3]=c->r[3]+0xFFFFA244u; // 800FC070
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FC074
  c->ctr=c->r[3]; // 800FC078
  if (true) { switch (c->ctr) { case 0x800FC080u: goto L_800FC080; case 0x800FC088u: goto L_800FC088; case 0x800FC090u: goto L_800FC090; case 0x800FC098u: goto L_800FC098; case 0x800FC0A0u: goto L_800FC0A0; case 0x800FC0A8u: goto L_800FC0A8; case 0x800FC0B0u: goto L_800FC0B0; case 0x800FC0B8u: goto L_800FC0B8; case 0x800FC164u: goto L_800FC164; case 0x800FC16Cu: goto L_800FC16C; case 0x800FC174u: goto L_800FC174; case 0x800FC17Cu: goto L_800FC17C; case 0x800FC184u: goto L_800FC184; case 0x800FC18Cu: goto L_800FC18C; case 0x800FC194u: goto L_800FC194; case 0x800FC19Cu: goto L_800FC19C; default: break; } dispatch(c,c->ctr); return; } // 800FC07C
L_800FC080:;
  c->r[5]=c->r[29]+0x0000016Cu; // 800FC080
  goto L_800FC0BC; // 800FC084
L_800FC088:;
  c->r[5]=c->r[29]+0x00000180u; // 800FC088
  goto L_800FC0BC; // 800FC08C
L_800FC090:;
  c->r[5]=c->r[29]+0x00000194u; // 800FC090
  goto L_800FC0BC; // 800FC094
L_800FC098:;
  c->r[5]=c->r[29]+0x000001ACu; // 800FC098
  goto L_800FC0BC; // 800FC09C
L_800FC0A0:;
  c->r[5]=c->r[29]+0x000001C4u; // 800FC0A0
  goto L_800FC0BC; // 800FC0A4
L_800FC0A8:;
  c->r[5]=c->r[29]+0x000001D8u; // 800FC0A8
  goto L_800FC0BC; // 800FC0AC
L_800FC0B0:;
  c->r[5]=c->r[29]+0x000001F0u; // 800FC0B0
  goto L_800FC0BC; // 800FC0B4
L_800FC0B8:;
  c->r[5]=c->r[29]+0x00000200u; // 800FC0B8
L_800FC0BC:;
  c->r[4]=c->r[29]+0x000002A8u; // 800FC0BC
  c->r[3]=0u+0x00000504u; // 800FC0C0
  c->lr=0x800FC0C8u; f_800F72A0(c); // 800FC0C4
L_800FC0C8:;
  c->r[0]=0u+0x00000000u; // 800FC0C8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800FC0CC
  c->r[0]=R8(c->r[31]+0x00000016u); // 800FC0D0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 800FC0D4
  c->r[4]=R16(c->r[31]+0x00000010u); // 800FC0D8
  cmps(c,0,(int32_t)c->r[4],7); // 800FC0DC
  if (crb(c,2)) { goto L_800FC138; } // 800FC0E0
  if (!crb(c,0)) { goto L_800FC100; } // 800FC0E4
  cmps(c,0,(int32_t)c->r[4],5); // 800FC0E8
  if (crb(c,2)) { goto L_800FC138; } // 800FC0EC
  if (!crb(c,0)) { goto L_800FC12C; } // 800FC0F0
  cmps(c,0,(int32_t)c->r[4],4); // 800FC0F4
  if (!crb(c,0)) { goto L_800FC118; } // 800FC0F8
  goto L_800FC138; // 800FC0FC
L_800FC100:;
  cmps(c,0,(int32_t)c->r[4],9); // 800FC100
  if (crb(c,2)) { goto L_800FC138; } // 800FC104
  if (!crb(c,0)) { goto L_800FC138; } // 800FC108
  c->r[0]=R8(c->r[30]+0x00000008u); // 800FC10C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800FC110
  goto L_800FC1AC; // 800FC114
L_800FC118:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 800FC118
  c->r[3]=c->r[1]+0x0000000Eu; // 800FC11C
  c->r[5]=0u+0x00000008u; // 800FC120
  c->lr=0x800FC128u; f_800043C4(c); // 800FC124
  goto L_800FC1AC; // 800FC128
L_800FC12C:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 800FC12C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800FC130
  goto L_800FC1AC; // 800FC134
L_800FC138:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FC138
  cmpu(c,0,c->r[0],0x00000005u); // 800FC13C
  if (crb(c,0)) { goto L_800FC1AC; } // 800FC140
  cmpu(c,0,c->r[4],0x00000009u); // 800FC144
  if (crb(c,1)) { goto L_800FC19C; } // 800FC148
  c->r[3]=0u+0x80330000u; // 800FC14C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FC150
  c->r[3]=c->r[3]+0xFFFFA21Cu; // 800FC154
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FC158
  c->ctr=c->r[3]; // 800FC15C
  if (true) { switch (c->ctr) { case 0x800FC080u: goto L_800FC080; case 0x800FC088u: goto L_800FC088; case 0x800FC090u: goto L_800FC090; case 0x800FC098u: goto L_800FC098; case 0x800FC0A0u: goto L_800FC0A0; case 0x800FC0A8u: goto L_800FC0A8; case 0x800FC0B0u: goto L_800FC0B0; case 0x800FC0B8u: goto L_800FC0B8; case 0x800FC164u: goto L_800FC164; case 0x800FC16Cu: goto L_800FC16C; case 0x800FC174u: goto L_800FC174; case 0x800FC17Cu: goto L_800FC17C; case 0x800FC184u: goto L_800FC184; case 0x800FC18Cu: goto L_800FC18C; case 0x800FC194u: goto L_800FC194; case 0x800FC19Cu: goto L_800FC19C; default: break; } dispatch(c,c->ctr); return; } // 800FC160
L_800FC164:;
  c->r[5]=c->r[29]+0x0000016Cu; // 800FC164
  goto L_800FC1A0; // 800FC168
L_800FC16C:;
  c->r[5]=c->r[29]+0x00000180u; // 800FC16C
  goto L_800FC1A0; // 800FC170
L_800FC174:;
  c->r[5]=c->r[29]+0x00000194u; // 800FC174
  goto L_800FC1A0; // 800FC178
L_800FC17C:;
  c->r[5]=c->r[29]+0x000001ACu; // 800FC17C
  goto L_800FC1A0; // 800FC180
L_800FC184:;
  c->r[5]=c->r[29]+0x000001C4u; // 800FC184
  goto L_800FC1A0; // 800FC188
L_800FC18C:;
  c->r[5]=c->r[29]+0x000001D8u; // 800FC18C
  goto L_800FC1A0; // 800FC190
L_800FC194:;
  c->r[5]=c->r[29]+0x000001F0u; // 800FC194
  goto L_800FC1A0; // 800FC198
L_800FC19C:;
  c->r[5]=c->r[29]+0x00000200u; // 800FC19C
L_800FC1A0:;
  c->r[4]=c->r[29]+0x000002CCu; // 800FC1A0
  c->r[3]=0u+0x00000504u; // 800FC1A4
  c->lr=0x800FC1ACu; f_800F72A0(c); // 800FC1A8
L_800FC1AC:;
  c->r[4]=R8(c->r[31]+0x00000015u); // 800FC1AC
  c->r[5]=c->r[31]+0x00000008u; // 800FC1B0
  c->r[3]=0u+0x00000017u; // 800FC1B4
  c->lr=0x800FC1BCu; f_800F7C08(c); // 800FC1B8
  c->r[4]=R8(c->r[31]+0x00000015u); // 800FC1BC
  c->r[5]=c->r[31]+0x00000008u; // 800FC1C0
  c->r[3]=0u+0x00000017u; // 800FC1C4
  c->lr=0x800FC1CCu; f_800F7BD4(c); // 800FC1C8
  c->r[5]=0u+0x803D0000u; // 800FC1CC
  c->r[4]=c->r[1]+0x0000000Cu; // 800FC1D0
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC1D4
  c->r[3]=R16(c->r[31]+0x00000010u); // 800FC1D8
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC1DC
  c->ctr=c->r[12]; // 800FC1E0
  if (true) { c->lr=0x800FC1E8u; dispatch(c,c->ctr); } // 800FC1E4
  c->r[0]=0u+0x00000000u; // 800FC1E8
  c->r[3]=c->r[1]+0x00000008u; // 800FC1EC
  W16(c->r[31]+0x00000010u,c->r[0]); // 800FC1F0
  c->lr=0x800FC1F8u; f_800F8060(c); // 800FC1F4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FC1F8
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FC1FC
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FC200
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FC204
  c->lr=c->r[0]; // 800FC208
  c->r[1]=c->r[1]+0x00000030u; // 800FC20C
  return; // 800FC210
}

// bta_hh_close_act
void f_800FC214(Ctx* __restrict c) {
  trace_call(0x800FC214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC214
  c->r[0]=c->lr; // 800FC218
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC21C
  c->r[0]=0u+0x00000000u; // 800FC220
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC224
  c->r[31]=c->r[3]|c->r[3]; // 800FC228
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FC22C
  c->r[30]=0u+0x00000003u; // 800FC230
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 800FC234
  c->r[0]=R8(c->r[3]+0x00000017u); // 800FC238
  c->r[6]=R32(c->r[4]+0x00000008u); // 800FC23C
  cmps(c,0,(int32_t)c->r[0],0); // 800FC240
  if (crb(c,2)) { goto L_800FC24C; } // 800FC244
  c->r[30]=0u+0x0000000Du; // 800FC248
L_800FC24C:;
  c->r[5]=R8(c->r[3]+0x00000016u); // 800FC24C
  c->r[0]=rotl(c->r[6],0)&0x00000700u; cr0(c,c->r[0]); // 800FC250
  W8(c->r[1]+0x0000000Du,c->r[5]); // 800FC254
  c->r[0]=R32(c->r[4]+0x00000008u); // 800FC258
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800FC25C
  if (!crb(c,2)) { goto L_800FC280; } // 800FC260
  cmpu(c,0,c->r[6],0x0000000Fu); // 800FC264
  if (crb(c,2)) { goto L_800FC280; } // 800FC268
  cmpu(c,0,c->r[6],0x0000000Eu); // 800FC26C
  if (crb(c,2)) { goto L_800FC280; } // 800FC270
  c->r[0]=R8(c->r[3]+0x0000001Au); // 800FC274
  cmps(c,0,(int32_t)c->r[0],0); // 800FC278
  if (!crb(c,2)) { goto L_800FC2D4; } // 800FC27C
L_800FC280:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 800FC280
  cmpu(c,0,c->r[6],0x0000000Fu); // 800FC284
  c->r[0]=0u+0x00000006u; // 800FC288
  W8(c->r[1]+0x00000017u,c->r[3]); // 800FC28C
  if (!crb(c,2)) { goto L_800FC298; } // 800FC290
  c->r[0]=0u+0x0000000Cu; // 800FC294
L_800FC298:;
  W8(c->r[1]+0x00000016u,c->r[0]); // 800FC298
  c->r[3]=c->r[1]+0x00000010u; // 800FC29C
  c->r[4]=c->r[31]+0x00000008u; // 800FC2A0
  c->lr=0x800FC2A8u; f_800F7914(c); // 800FC2A4
  c->r[3]=R8(c->r[31]+0x00000016u); // 800FC2A8
  c->lr=0x800FC2B0u; f_8010D8DC(c); // 800FC2AC
  c->r[5]=0u+0x803D0000u; // 800FC2B0
  c->r[4]=c->r[1]+0x00000010u; // 800FC2B4
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC2B8
  c->r[3]=0u+0x00000002u; // 800FC2BC
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC2C0
  c->ctr=c->r[12]; // 800FC2C4
  if (true) { c->lr=0x800FC2CCu; dispatch(c,c->ctr); } // 800FC2C8
  c->lr=0x800FC2D0u; f_800FD700(c); // 800FC2CC
  goto L_800FC3FC; // 800FC2D0
L_800FC2D4:;
  c->r[3]=R8(c->r[3]+0x00000016u); // 800FC2D4
  c->r[4]=R8(c->r[31]+0x00000015u); // 800FC2D8
  c->lr=0x800FC2E0u; f_800F4020(c); // 800FC2DC
  c->r[4]=R8(c->r[31]+0x00000015u); // 800FC2E0
  c->r[5]=c->r[31]+0x00000008u; // 800FC2E4
  c->r[3]=0u+0x00000017u; // 800FC2E8
  c->lr=0x800FC2F0u; f_800F7ADC(c); // 800FC2EC
  c->r[4]=0u+0x803D0000u; // 800FC2F0
  c->r[0]=0u+0x00000000u; // 800FC2F4
  c->r[4]=c->r[4]+0xFFFF9FE8u; // 800FC2F8
  c->r[3]=R8(c->r[4]+0x0000022Du); // 800FC2FC
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800FC300
  W8(c->r[4]+0x0000022Du,c->r[3]); // 800FC304
  W8(c->r[31]+0x0000001Au,c->r[0]); // 800FC308
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 800FC30C
  cmps(c,0,(int32_t)c->r[0],0); // 800FC310
  if (crb(c,2)) { goto L_800FC320; } // 800FC314
  c->r[0]=0u+0x00000006u; // 800FC318
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 800FC31C
L_800FC320:;
  c->r[5]=0u+0x803D0000u; // 800FC320
  c->r[3]=c->r[30]|c->r[30]; // 800FC324
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC328
  c->r[4]=c->r[1]+0x0000000Cu; // 800FC32C
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC330
  c->ctr=c->r[12]; // 800FC334
  if (true) { c->lr=0x800FC33Cu; dispatch(c,c->ctr); } // 800FC338
  c->r[0]=R8(c->r[31]+0x00000017u); // 800FC33C
  cmps(c,0,(int32_t)c->r[0],0); // 800FC340
  if (crb(c,2)) { goto L_800FC358; } // 800FC344
  c->r[3]=R8(c->r[31]+0x00000016u); // 800FC348
  c->lr=0x800FC350u; f_8010D670(c); // 800FC34C
  c->r[3]=c->r[31]|c->r[31]; // 800FC350
  c->lr=0x800FC358u; f_800FD570(c); // 800FC354
L_800FC358:;
  c->lr=0x800FC35Cu; f_800FD700(c); // 800FC358
  c->r[4]=0u+0x00000000u; // 800FC35C
  c->r[3]=0u+0x803D0000u; // 800FC360
  W8(c->r[31]+0x00000017u,c->r[4]); // 800FC364
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FC368
  W16(c->r[31]+0x00000010u,c->r[4]); // 800FC36C
  c->r[0]=R8(c->r[3]+0x0000022Du); // 800FC370
  cmps(c,0,(int32_t)c->r[0],0); // 800FC374
  if (!crb(c,2)) { goto L_800FC3FC; } // 800FC378
  c->r[0]=R8(c->r[3]+0x0000022Eu); // 800FC37C
  cmps(c,0,(int32_t)c->r[0],0); // 800FC380
  if (crb(c,2)) { goto L_800FC3FC; } // 800FC384
  W8(c->r[1]+0x00000008u,c->r[4]); // 800FC388
  c->lr=0x800FC390u; f_8010D3FC(c); // 800FC38C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FC390
  if (crb(c,2)) { goto L_800FC3A0; } // 800FC394
  c->r[0]=0u+0x00000006u; // 800FC398
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FC39C
L_800FC3A0:;
  c->r[31]=0u+0x803D0000u; // 800FC3A0
  c->r[30]=0u+0x00000000u; // 800FC3A4
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FC3A8
L_800FC3AC:;
  c->r[0]=rotl(c->r[30],5)&0x00001FE0u; // 800FC3AC
  c->r[3]=c->r[31]+c->r[0]; // 800FC3B0
  c->r[3]=c->r[3]+0x00000014u; // 800FC3B4
  c->lr=0x800FC3BCu; f_800F8060(c); // 800FC3B8
  c->r[30]=c->r[30]+0x00000001u; // 800FC3BC
  cmpu(c,0,c->r[30],0x00000010u); // 800FC3C0
  if (crb(c,0)) { IRQCHK(c); goto L_800FC3AC; } // 800FC3C4
  c->r[31]=0u+0x803D0000u; // 800FC3C8
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FC3CC
  c->r[3]=c->r[31]+0x00000228u; // 800FC3D0
  c->lr=0x800FC3D8u; f_800F8060(c); // 800FC3D4
  c->r[12]=R32(c->r[31]+0x00000224u); // 800FC3D8
  c->r[4]=c->r[1]+0x00000008u; // 800FC3DC
  c->r[3]=0u+0x00000001u; // 800FC3E0
  c->ctr=c->r[12]; // 800FC3E4
  if (true) { c->lr=0x800FC3ECu; dispatch(c,c->ctr); } // 800FC3E8
  c->r[3]=c->r[31]|c->r[31]; // 800FC3EC
  c->r[4]=0u+0x00000000u; // 800FC3F0
  c->r[5]=0u+0x00000230u; // 800FC3F4
  c->lr=0x800FC3FCu; f_80004714(c); // 800FC3F8
L_800FC3FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC3FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC400
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FC404
  c->lr=c->r[0]; // 800FC408
  c->r[1]=c->r[1]+0x00000020u; // 800FC40C
  return; // 800FC410
}

// bta_hh_get_dscp_act
void f_800FC414(Ctx* __restrict c) {
  trace_call(0x800FC414u);
  c->r[5]=0u+0x803D0000u; // 800FC414
  c->r[4]=c->r[3]|c->r[3]; // 800FC418
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC41C
  c->r[3]=0u+0x0000000Au; // 800FC420
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC424
  c->ctr=c->r[12]; // 800FC428
  if (true) { dispatch(c,c->ctr); return; } // 800FC42C
}

// bta_hh_maint_dev_act
void f_800FC430(Ctx* __restrict c) {
  trace_call(0x800FC430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC430
  c->r[0]=c->lr; // 800FC434
  c->r[5]=0u+0x00000006u; // 800FC438
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC43C
  c->r[0]=0u+0x000000FFu; // 800FC440
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC444
  c->r[31]=c->r[4]|c->r[4]; // 800FC448
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FC44C
  c->r[30]=c->r[3]|c->r[3]; // 800FC450
  W8(c->r[1]+0x00000016u,c->r[5]); // 800FC454
  W8(c->r[1]+0x00000017u,c->r[0]); // 800FC458
  c->r[0]=R16(c->r[4]+0x00000010u); // 800FC45C
  cmps(c,0,(int32_t)c->r[0],12); // 800FC460
  if (crb(c,2)) { goto L_800FC500; } // 800FC464
  if (!crb(c,0)) { goto L_800FC544; } // 800FC468
  cmps(c,0,(int32_t)c->r[0],11); // 800FC46C
  if (!crb(c,0)) { goto L_800FC478; } // 800FC470
  goto L_800FC544; // 800FC474
L_800FC478:;
  c->r[3]=c->r[1]+0x00000010u; // 800FC478
  c->r[4]=c->r[4]+0x00000008u; // 800FC47C
  c->lr=0x800FC484u; f_800F7914(c); // 800FC480
  c->r[3]=R8(c->r[30]+0x00000016u); // 800FC484
  cmpu(c,0,c->r[3],0x000000FFu); // 800FC488
  if (!crb(c,2)) { goto L_800FC4EC; } // 800FC48C
  c->r[4]=R16(c->r[31]+0x0000000Eu); // 800FC490
  c->r[3]=c->r[31]+0x00000008u; // 800FC494
  c->r[5]=c->r[1]+0x00000008u; // 800FC498
  c->lr=0x800FC4A0u; f_8010D4E0(c); // 800FC49C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FC4A0
  if (!crb(c,2)) { goto L_800FC4F8; } // 800FC4A4
  c->r[4]=R8(c->r[1]+0x00000008u); // 800FC4A8
  c->r[0]=0u+0x00000000u; // 800FC4AC
  W8(c->r[1]+0x00000016u,c->r[0]); // 800FC4B0
  c->r[3]=c->r[30]|c->r[30]; // 800FC4B4
  c->r[6]=0u+0x00000000u; // 800FC4B8
  W8(c->r[1]+0x00000017u,c->r[4]); // 800FC4BC
  c->r[5]=R16(c->r[31]+0x0000000Eu); // 800FC4C0
  c->r[7]=R8(c->r[31]+0x00000012u); // 800FC4C4
  c->r[8]=R8(c->r[31]+0x00000013u); // 800FC4C8
  c->lr=0x800FC4D0u; f_800FD5F0(c); // 800FC4CC
  c->r[3]=0u+0x803D0000u; // 800FC4D0
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FC4D4
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FC4D8
  c->r[4]=R8(c->r[30]+0x00000012u); // 800FC4DC
  c->r[3]=c->r[3]+c->r[0]; // 800FC4E0
  W8(c->r[3]+0x00000214u,c->r[4]); // 800FC4E4
  goto L_800FC4F8; // 800FC4E8
L_800FC4EC:;
  c->r[0]=0u+0x00000000u; // 800FC4EC
  W8(c->r[1]+0x00000017u,c->r[3]); // 800FC4F0
  W8(c->r[1]+0x00000016u,c->r[0]); // 800FC4F4
L_800FC4F8:;
  c->lr=0x800FC4FCu; f_800FD700(c); // 800FC4F8
  goto L_800FC560; // 800FC4FC
L_800FC500:;
  c->r[0]=R16(c->r[4]+0x00000006u); // 800FC500
  c->r[3]=c->r[1]+0x00000010u; // 800FC504
  c->r[4]=c->r[30]+0x00000008u; // 800FC508
  W8(c->r[1]+0x00000017u,c->r[0]); // 800FC50C
  c->lr=0x800FC514u; f_800F7914(c); // 800FC510
  c->r[0]=R8(c->r[30]+0x0000001Cu); // 800FC514
  cmpu(c,0,c->r[0],0x00000003u); // 800FC518
  if (crb(c,2)) { goto L_800FC560; } // 800FC51C
  c->r[3]=R8(c->r[1]+0x00000017u); // 800FC520
  c->lr=0x800FC528u; f_8010D670(c); // 800FC524
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FC528
  if (!crb(c,2)) { goto L_800FC560; } // 800FC52C
  c->r[0]=0u+0x00000000u; // 800FC530
  c->r[3]=c->r[30]|c->r[30]; // 800FC534
  W8(c->r[1]+0x00000016u,c->r[0]); // 800FC538
  c->lr=0x800FC540u; f_800FD570(c); // 800FC53C
  goto L_800FC560; // 800FC540
L_800FC544:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FC544
  cmpu(c,0,c->r[0],0x00000005u); // 800FC548
  if (crb(c,0)) { goto L_800FC560; } // 800FC54C
  c->r[4]=0u+0x80330000u; // 800FC550
  c->r[3]=0u+0x00000504u; // 800FC554
  c->r[4]=c->r[4]+0xFFFFA270u; // 800FC558
  c->lr=0x800FC560u; f_800F7280(c); // 800FC55C
L_800FC560:;
  c->r[5]=0u+0x803D0000u; // 800FC560
  c->r[4]=c->r[1]+0x00000010u; // 800FC564
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC568
  c->r[3]=R16(c->r[31]+0x00000010u); // 800FC56C
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC570
  c->ctr=c->r[12]; // 800FC574
  if (true) { c->lr=0x800FC57Cu; dispatch(c,c->ctr); } // 800FC578
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC57C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC580
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FC584
  c->lr=c->r[0]; // 800FC588
  c->r[1]=c->r[1]+0x00000020u; // 800FC58C
  return; // 800FC590
}

// bta_hh_get_acl_q_info
void f_800FC594(Ctx* __restrict c) {
  trace_call(0x800FC594u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC594
  c->r[0]=c->lr; // 800FC598
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FC59C
  c->r[11]=c->r[1]+0x00000040u; // 800FC5A0
  c->lr=0x800FC5A8u; f_800ADA2C(c); // 800FC5A4
  c->r[3]=c->r[1]+0x00000008u; // 800FC5A8
  c->r[31]=0u+0x00000000u; // 800FC5AC
  c->r[4]=0u+0x00000000u; // 800FC5B0
  c->r[5]=0u+0x0000001Eu; // 800FC5B4
  c->lr=0x800FC5BCu; f_80004714(c); // 800FC5B8
  c->r[30]=0u+0x803D0000u; // 800FC5BC
  c->r[29]=0u+0x803D0000u; // 800FC5C0
  c->r[30]=c->r[30]+0xFFFFCED8u; // 800FC5C4
  c->r[27]=0u+0x00000000u; // 800FC5C8
  c->r[29]=c->r[29]+0xFFFF9FE8u; // 800FC5CC
L_800FC5D0:;
  c->r[0]=rotl(c->r[27],5)&0x00001FE0u; // 800FC5D0
  c->r[3]=c->r[29]+c->r[0]; // 800FC5D4
  c->r[0]=R8(c->r[3]+0x00000028u); // 800FC5D8
  cmps(c,0,(int32_t)c->r[0],0); // 800FC5DC
  if (crb(c,2)) { goto L_800FC650; } // 800FC5E0
  c->r[0]=R8(c->r[3]+0x0000002Cu); // 800FC5E4
  cmpu(c,0,c->r[0],0x00000003u); // 800FC5E8
  if (!crb(c,2)) { goto L_800FC650; } // 800FC5EC
  c->r[4]=R8(c->r[3]+0x00000026u); // 800FC5F0
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800FC5F4
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 800FC5F8
  c->r[28]=c->r[1]+0x00000008u; // 800FC5FC
  c->r[3]=0u+0x00000000u; // 800FC600
  c->r[28]=c->r[28]+c->r[5]; // 800FC604
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 800FC608
  W8(c->r[28]+0x00000006u,c->r[4]); // 800FC60C
  c->r[4]=c->r[30]+c->r[0]; // 800FC610
  c->r[4]=R16(c->r[4]+0x00000016u); // 800FC614
  c->lr=0x800FC61Cu; f_801154F8(c); // 800FC618
  cmps(c,0,(int32_t)c->r[3],0); // 800FC61C
  if (crb(c,2)) { goto L_800FC64C; } // 800FC620
  c->r[3]=R32(c->r[3]+0x00000010u); // 800FC624
  cmps(c,0,(int32_t)c->r[3],0); // 800FC628
  if (crb(c,2)) { goto L_800FC64C; } // 800FC62C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FC630
  cmps(c,0,(int32_t)c->r[0],0); // 800FC634
  if (crb(c,2)) { goto L_800FC64C; } // 800FC638
  c->r[0]=R16(c->r[3]+0x0000004Cu); // 800FC63C
  W16(c->r[28]+0x00000008u,c->r[0]); // 800FC640
  c->r[0]=R16(c->r[3]+0x00000038u); // 800FC644
  W16(c->r[28]+0x0000000Au,c->r[0]); // 800FC648
L_800FC64C:;
  c->r[31]=c->r[31]+0x00000001u; // 800FC64C
L_800FC650:;
  c->r[27]=c->r[27]+0x00000001u; // 800FC650
  cmpu(c,0,c->r[27],0x00000010u); // 800FC654
  if (crb(c,0)) { IRQCHK(c); goto L_800FC5D0; } // 800FC658
  c->r[4]=0u+0x803D0000u; // 800FC65C
  c->r[3]=0u+0x803D0000u; // 800FC660
  c->r[4]=c->r[4]+0xFFFFD2E0u; // 800FC664
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 800FC668
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FC66C
  c->r[6]=R16(c->r[4]+0x00000004u); // 800FC670
  c->r[5]=R16(c->r[4]+0x00000002u); // 800FC674
  c->r[4]=c->r[1]+0x00000008u; // 800FC678
  c->r[12]=R32(c->r[3]+0x00000224u); // 800FC67C
  c->r[3]=0u+0x0000000Fu; // 800FC680
  W16(c->r[1]+0x00000008u,c->r[6]); // 800FC684
  W16(c->r[1]+0x0000000Au,c->r[5]); // 800FC688
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 800FC68C
  c->ctr=c->r[12]; // 800FC690
  if (true) { c->lr=0x800FC698u; dispatch(c,c->ctr); } // 800FC694
  c->r[11]=c->r[1]+0x00000040u; // 800FC698
  c->lr=0x800FC6A0u; f_800ADA78(c); // 800FC69C
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FC6A0
  c->lr=c->r[0]; // 800FC6A4
  c->r[1]=c->r[1]+0x00000040u; // 800FC6A8
  return; // 800FC6AC
}

// bta_hh_write_dev_act
void f_800FC6B0(Ctx* __restrict c) {
  trace_call(0x800FC6B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC6B0
  c->r[0]=c->lr; // 800FC6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC6B8
  c->r[0]=0u+0x00000000u; // 800FC6BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC6C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FC6C4
  c->r[30]=c->r[4]|c->r[4]; // 800FC6C8
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FC6CC
  c->r[29]=c->r[3]|c->r[3]; // 800FC6D0
  W16(c->r[1]+0x00000008u,c->r[0]); // 800FC6D4
  c->r[31]=R8(c->r[4]+0x00000008u); // 800FC6D8
  c->r[0]=R8(c->r[3]+0x00000016u); // 800FC6DC
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FC6E0
  c->r[3]=R8(c->r[3]+0x00000016u); // 800FC6E4
  c->r[4]=R8(c->r[4]+0x00000008u); // 800FC6E8
  c->r[5]=R8(c->r[30]+0x00000009u); // 800FC6EC
  c->r[6]=R16(c->r[30]+0x0000000Cu); // 800FC6F0
  c->r[7]=R8(c->r[30]+0x0000000Au); // 800FC6F4
  c->r[8]=R32(c->r[30]+0x00000010u); // 800FC6F8
  c->lr=0x800FC700u; f_8010D79C(c); // 800FC6FC
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[5]); // 800FC700
  if (crb(c,2)) { goto L_800FC78C; } // 800FC704
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FC708
  cmpu(c,0,c->r[0],0x00000001u); // 800FC70C
  if (crb(c,0)) { goto L_800FC724; } // 800FC710
  c->r[4]=0u+0x80330000u; // 800FC714
  c->r[3]=0u+0x00000500u; // 800FC718
  c->r[4]=c->r[4]+0xFFFFA280u; // 800FC71C
  c->lr=0x800FC724u; f_800F72A0(c); // 800FC720
L_800FC724:;
  c->r[0]=0u+0x00000006u; // 800FC724
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FC728
  c->r[0]=R8(c->r[30]+0x00000008u); // 800FC72C
  cmpu(c,0,c->r[0],0x00000001u); // 800FC730
  if (crb(c,2)) { goto L_800FC760; } // 800FC734
  cmpu(c,0,c->r[0],0x0000000Au); // 800FC738
  if (crb(c,2)) { goto L_800FC760; } // 800FC73C
  c->r[5]=0u+0x803D0000u; // 800FC740
  c->r[3]=c->r[31]|c->r[31]; // 800FC744
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC748
  c->r[4]=c->r[1]+0x00000008u; // 800FC74C
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC750
  c->ctr=c->r[12]; // 800FC754
  if (true) { c->lr=0x800FC75Cu; dispatch(c,c->ctr); } // 800FC758
  goto L_800FC85C; // 800FC75C
L_800FC760:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 800FC760
  cmpu(c,0,c->r[0],0x00000005u); // 800FC764
  if (!crb(c,2)) { goto L_800FC85C; } // 800FC768
  c->r[5]=0u+0x803D0000u; // 800FC76C
  c->r[4]=c->r[1]+0x00000008u; // 800FC770
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FC774
  c->r[3]=0u+0x0000000Du; // 800FC778
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FC77C
  c->ctr=c->r[12]; // 800FC780
  if (true) { c->lr=0x800FC788u; dispatch(c,c->ctr); } // 800FC784
  goto L_800FC85C; // 800FC788
L_800FC78C:;
  c->r[5]=R8(c->r[30]+0x00000008u); // 800FC78C
  cmps(c,0,(int32_t)c->r[5],10); // 800FC790
  if (crb(c,2)) { goto L_800FC7C0; } // 800FC794
  if (!crb(c,0)) { goto L_800FC7D8; } // 800FC798
  cmps(c,0,(int32_t)c->r[5],1); // 800FC79C
  if (crb(c,2)) { goto L_800FC7C0; } // 800FC7A0
  if (crb(c,0)) { goto L_800FC7D8; } // 800FC7A4
  cmps(c,0,(int32_t)c->r[5],4); // 800FC7A8
  if (!crb(c,0)) { goto L_800FC7B8; } // 800FC7AC
  goto L_800FC7D8; // 800FC7B0
  goto L_800FC7D8; // 800FC7B4
L_800FC7B8:;
  W16(c->r[29]+0x00000010u,c->r[31]); // 800FC7B8
  goto L_800FC7F4; // 800FC7BC
L_800FC7C0:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 800FC7C0
  cmpu(c,0,c->r[0],0x00000005u); // 800FC7C4
  if (!crb(c,2)) { goto L_800FC7F4; } // 800FC7C8
  c->r[0]=0u+0x00000001u; // 800FC7CC
  W8(c->r[29]+0x00000017u,c->r[0]); // 800FC7D0
  goto L_800FC7F4; // 800FC7D4
L_800FC7D8:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FC7D8
  cmpu(c,0,c->r[0],0x00000005u); // 800FC7DC
  if (crb(c,0)) { goto L_800FC7F4; } // 800FC7E0
  c->r[4]=0u+0x80330000u; // 800FC7E4
  c->r[3]=0u+0x00000504u; // 800FC7E8
  c->r[4]=c->r[4]+0xFFFFA29Cu; // 800FC7EC
  c->lr=0x800FC7F4u; f_800F72A0(c); // 800FC7F0
L_800FC7F4:;
  c->r[0]=R8(c->r[30]+0x00000008u); // 800FC7F4
  cmpu(c,0,c->r[0],0x00000001u); // 800FC7F8
  if (crb(c,2)) { goto L_800FC824; } // 800FC7FC
  c->r[4]=R8(c->r[29]+0x00000015u); // 800FC800
  c->r[5]=c->r[29]+0x00000008u; // 800FC804
  c->r[3]=0u+0x00000017u; // 800FC808
  c->lr=0x800FC810u; f_800F7C08(c); // 800FC80C
  c->r[4]=R8(c->r[29]+0x00000015u); // 800FC810
  c->r[5]=c->r[29]+0x00000008u; // 800FC814
  c->r[3]=0u+0x00000017u; // 800FC818
  c->lr=0x800FC820u; f_800F7BD4(c); // 800FC81C
  goto L_800FC85C; // 800FC820
L_800FC824:;
  c->r[0]=R8(c->r[30]+0x00000009u); // 800FC824
  cmpu(c,0,c->r[0],0x00000003u); // 800FC828
  if (!crb(c,2)) { goto L_800FC844; } // 800FC82C
  c->r[4]=R8(c->r[29]+0x00000015u); // 800FC830
  c->r[5]=c->r[29]+0x00000008u; // 800FC834
  c->r[3]=0u+0x00000017u; // 800FC838
  c->lr=0x800FC840u; f_800F7BA0(c); // 800FC83C
  goto L_800FC85C; // 800FC840
L_800FC844:;
  cmpu(c,0,c->r[0],0x00000004u); // 800FC844
  if (!crb(c,2)) { goto L_800FC85C; } // 800FC848
  c->r[4]=R8(c->r[29]+0x00000015u); // 800FC84C
  c->r[5]=c->r[29]+0x00000008u; // 800FC850
  c->r[3]=0u+0x00000017u; // 800FC854
  c->lr=0x800FC85Cu; f_800F7C08(c); // 800FC858
L_800FC85C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FC85C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FC860
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FC864
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FC868
  c->lr=c->r[0]; // 800FC86C
  c->r[1]=c->r[1]+0x00000020u; // 800FC870
  return; // 800FC874
}

