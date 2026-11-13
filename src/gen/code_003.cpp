#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// calc__Q25Alice32Carrier<Q24gbla12SaveDataTest,6>FPQ24gbla12SaveDataTest
void f_8004AAC4(Ctx* __restrict c) {
  trace_call(0x8004AAC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AAC4
  c->r[0]=c->lr; // 8004AAC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AAD0
  c->r[31]=c->r[3]|c->r[3]; // 8004AAD4
  c->r[3]=c->r[3]+0x00000104u; // 8004AAD8
  c->lr=0x8004AAE0u; f_80051718(c); // 8004AADC
  c->r[0]=R8(c->r[31]+0x000002F8u); // 8004AAE0
  cmps(c,0,(int32_t)c->r[0],0); // 8004AAE4
  if (crb(c,2)) { goto L_8004AB40; } // 8004AAE8
  c->r[0]=R32(c->r[31]+0x000002E4u); // 8004AAEC
  cmps(c,0,(int32_t)c->r[0],1); // 8004AAF0
  if (crb(c,2)) { goto L_8004AB04; } // 8004AAF4
  cmps(c,0,(int32_t)c->r[0],2); // 8004AAF8
  if (crb(c,2)) { goto L_8004AB38; } // 8004AAFC
  goto L_8004AB40; // 8004AB00
L_8004AB04:;
  c->r[4]=R32(c->r[31]+0x000000F8u); // 8004AB04
  c->r[3]=0u+0x88890000u; // 8004AB08
  c->r[0]=c->r[3]+0xFFFF8889u; // 8004AB0C
  c->r[4]=c->r[4]+0x00000001u; // 8004AB10
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004AB14
  c->r[0]=c->r[0]+c->r[4]; // 8004AB18
  c->r[0]=sraw(c,c->r[0],3); // 8004AB1C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004AB20
  c->r[0]=c->r[0]+c->r[3]; // 8004AB24
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004AB28
  c->r[0]=c->r[4]-c->r[0]; // 8004AB2C
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AB30
  goto L_8004AB40; // 8004AB34
L_8004AB38:;
  c->r[0]=0u+0x0000000Eu; // 8004AB38
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AB3C
L_8004AB40:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AB40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AB44
  c->lr=c->r[0]; // 8004AB48
  c->r[1]=c->r[1]+0x00000010u; // 8004AB4C
  return; // 8004AB50
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataTest,6>FPQ24gbla12SaveDataTest
void f_8004AB54(Ctx* __restrict c) {
  trace_call(0x8004AB54u);
  return; // 8004AB54
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataTest,6>FPQ24gbla12SaveDataTest
void f_8004AB58(Ctx* __restrict c) {
  trace_call(0x8004AB58u);
  c->r[3]=c->r[3]+0x00000104u; // 8004AB58
  f_800517DC(c); return; // 8004AB5C
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataTest,7>FPQ24gbla12SaveDataTest
void f_8004AB60(Ctx* __restrict c) {
  trace_call(0x8004AB60u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AB60
  c->r[0]=c->lr; // 8004AB64
  c->r[4]=0u+0x802A0000u; // 8004AB68
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004AB6C
  c->r[4]=c->r[4]+0xFFFF907Cu; // 8004AB70
  c->r[4]=c->r[4]+0x000000E6u; // 8004AB74
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004AB78
  W32(c->r[1]+0x00000028u,c->r[30]); // 8004AB7C
  c->r[30]=c->r[3]|c->r[3]; // 8004AB80
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004AB84
  c->lr=0x8004AB8Cu; f_8020A210(c); // 8004AB88
  c->r[4]=0u+0x80210000u; // 8004AB8C
  c->r[4]=c->r[4]+0xFFFFA334u; // 8004AB90
  c->lr=0x8004AB98u; f_8020A328(c); // 8004AB94
  c->r[31]=0u+0x00000000u; // 8004AB98
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004AB9C
  c->r[3]=c->r[1]+0x0000000Cu; // 8004ABA0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004ABA4
  c->lr=0x8004ABACu; f_80052394(c); // 8004ABA8
  c->r[3]=c->r[30]+0x00000104u; // 8004ABAC
  c->r[4]=c->r[1]+0x0000000Cu; // 8004ABB0
  c->lr=0x8004ABB8u; f_800514B0(c); // 8004ABB4
  c->r[0]=addc(c,c->r[1],0x00000018u,0); cr0(c,c->r[0]); // 8004ABB8
  if (crb(c,2)) { goto L_8004ABD4; } // 8004ABBC
  W8(c->r[1]+0x00000008u,c->r[31]); // 8004ABC0
  c->r[3]=c->r[1]+0x00000008u; // 8004ABC4
  c->r[4]=R32(c->r[1]+0x00000018u); // 8004ABC8
  c->r[5]=0u+0x00000001u; // 8004ABCC
  c->lr=0x8004ABD4u; f_8020CBF8(c); // 8004ABD0
L_8004ABD4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004ABD4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004ABD8
  c->r[30]=R32(c->r[1]+0x00000028u); // 8004ABDC
  c->lr=c->r[0]; // 8004ABE0
  c->r[1]=c->r[1]+0x00000030u; // 8004ABE4
  return; // 8004ABE8
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataTest,7>FPQ24gbla12SaveDataTest
void f_8004ABEC(Ctx* __restrict c) {
  trace_call(0x8004ABECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ABEC
  c->r[0]=c->lr; // 8004ABF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004ABF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004ABF8
  c->r[31]=c->r[3]|c->r[3]; // 8004ABFC
  c->r[3]=c->r[3]+0x00000104u; // 8004AC00
  c->lr=0x8004AC08u; f_80051718(c); // 8004AC04
  c->r[0]=R8(c->r[31]+0x000002F8u); // 8004AC08
  cmps(c,0,(int32_t)c->r[0],0); // 8004AC0C
  if (crb(c,2)) { goto L_8004AC68; } // 8004AC10
  c->r[0]=R32(c->r[31]+0x000002E4u); // 8004AC14
  cmps(c,0,(int32_t)c->r[0],1); // 8004AC18
  if (crb(c,2)) { goto L_8004AC2C; } // 8004AC1C
  cmps(c,0,(int32_t)c->r[0],2); // 8004AC20
  if (crb(c,2)) { goto L_8004AC60; } // 8004AC24
  goto L_8004AC68; // 8004AC28
L_8004AC2C:;
  c->r[4]=R32(c->r[31]+0x000000F8u); // 8004AC2C
  c->r[3]=0u+0x88890000u; // 8004AC30
  c->r[0]=c->r[3]+0xFFFF8889u; // 8004AC34
  c->r[4]=c->r[4]+0x00000001u; // 8004AC38
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004AC3C
  c->r[0]=c->r[0]+c->r[4]; // 8004AC40
  c->r[0]=sraw(c,c->r[0],3); // 8004AC44
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004AC48
  c->r[0]=c->r[0]+c->r[3]; // 8004AC4C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004AC50
  c->r[0]=c->r[4]-c->r[0]; // 8004AC54
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AC58
  goto L_8004AC68; // 8004AC5C
L_8004AC60:;
  c->r[0]=0u+0x0000000Eu; // 8004AC60
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AC64
L_8004AC68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AC68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AC6C
  c->lr=c->r[0]; // 8004AC70
  c->r[1]=c->r[1]+0x00000010u; // 8004AC74
  return; // 8004AC78
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataTest,7>FPQ24gbla12SaveDataTest
void f_8004AC7C(Ctx* __restrict c) {
  trace_call(0x8004AC7Cu);
  return; // 8004AC7C
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataTest,7>FPQ24gbla12SaveDataTest
void f_8004AC80(Ctx* __restrict c) {
  trace_call(0x8004AC80u);
  c->r[3]=c->r[3]+0x00000104u; // 8004AC80
  f_800517DC(c); return; // 8004AC84
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataTest,8>FPQ24gbla12SaveDataTest
void f_8004AC88(Ctx* __restrict c) {
  trace_call(0x8004AC88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AC88
  c->r[0]=c->lr; // 8004AC8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004AC90
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004AC94
  c->r[31]=0u+0x802A0000u; // 8004AC98
  c->r[31]=c->r[31]+0xFFFF907Cu; // 8004AC9C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8004ACA0
  c->r[30]=c->r[3]|c->r[3]; // 8004ACA4
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004ACA8
  c->r[4]=c->r[31]+0x00000105u; // 8004ACAC
  c->lr=0x8004ACB4u; f_8020A210(c); // 8004ACB0
  c->r[4]=0u+0x80210000u; // 8004ACB4
  c->r[4]=c->r[4]+0xFFFFA334u; // 8004ACB8
  c->lr=0x8004ACC0u; f_8020A328(c); // 8004ACBC
  c->lr=0x8004ACC4u; f_80029780(c); // 8004ACC0
  c->r[3]=c->r[3]+0x00000010u; // 8004ACC4
  c->r[4]=c->r[31]+0x000000C5u; // 8004ACC8
  c->lr=0x8004ACD0u; f_8006DEE0(c); // 8004ACCC
  c->r[31]=0u+0x00000000u; // 8004ACD0
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004ACD4
  c->r[3]=c->r[1]+0x0000000Cu; // 8004ACD8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004ACDC
  c->lr=0x8004ACE4u; f_800523F8(c); // 8004ACE0
  c->r[3]=c->r[30]+0x00000104u; // 8004ACE4
  c->r[4]=c->r[1]+0x0000000Cu; // 8004ACE8
  c->lr=0x8004ACF0u; f_800514B0(c); // 8004ACEC
  c->r[0]=addc(c,c->r[1],0x00000018u,0); cr0(c,c->r[0]); // 8004ACF0
  if (crb(c,2)) { goto L_8004AD0C; } // 8004ACF4
  W8(c->r[1]+0x00000008u,c->r[31]); // 8004ACF8
  c->r[3]=c->r[1]+0x00000008u; // 8004ACFC
  c->r[4]=R32(c->r[1]+0x00000018u); // 8004AD00
  c->r[5]=0u+0x00000001u; // 8004AD04
  c->lr=0x8004AD0Cu; f_8020CBF8(c); // 8004AD08
L_8004AD0C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004AD0C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004AD10
  c->r[30]=R32(c->r[1]+0x00000028u); // 8004AD14
  c->lr=c->r[0]; // 8004AD18
  c->r[1]=c->r[1]+0x00000030u; // 8004AD1C
  return; // 8004AD20
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataTest,8>FPQ24gbla12SaveDataTest
void f_8004AD24(Ctx* __restrict c) {
  trace_call(0x8004AD24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AD24
  c->r[0]=c->lr; // 8004AD28
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AD2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AD30
  c->r[31]=c->r[3]|c->r[3]; // 8004AD34
  c->r[3]=c->r[3]+0x00000104u; // 8004AD38
  c->lr=0x8004AD40u; f_80051718(c); // 8004AD3C
  c->r[0]=R8(c->r[31]+0x000002F8u); // 8004AD40
  cmps(c,0,(int32_t)c->r[0],0); // 8004AD44
  if (crb(c,2)) { goto L_8004ADA0; } // 8004AD48
  c->r[0]=R32(c->r[31]+0x000002E4u); // 8004AD4C
  cmps(c,0,(int32_t)c->r[0],1); // 8004AD50
  if (crb(c,2)) { goto L_8004AD64; } // 8004AD54
  cmps(c,0,(int32_t)c->r[0],2); // 8004AD58
  if (crb(c,2)) { goto L_8004AD98; } // 8004AD5C
  goto L_8004ADA0; // 8004AD60
L_8004AD64:;
  c->r[4]=R32(c->r[31]+0x000000F8u); // 8004AD64
  c->r[3]=0u+0x88890000u; // 8004AD68
  c->r[0]=c->r[3]+0xFFFF8889u; // 8004AD6C
  c->r[4]=c->r[4]+0x00000001u; // 8004AD70
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004AD74
  c->r[0]=c->r[0]+c->r[4]; // 8004AD78
  c->r[0]=sraw(c,c->r[0],3); // 8004AD7C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004AD80
  c->r[0]=c->r[0]+c->r[3]; // 8004AD84
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004AD88
  c->r[0]=c->r[4]-c->r[0]; // 8004AD8C
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AD90
  goto L_8004ADA0; // 8004AD94
L_8004AD98:;
  c->r[0]=0u+0x0000000Eu; // 8004AD98
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AD9C
L_8004ADA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004ADA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004ADA4
  c->lr=c->r[0]; // 8004ADA8
  c->r[1]=c->r[1]+0x00000010u; // 8004ADAC
  return; // 8004ADB0
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataTest,8>FPQ24gbla12SaveDataTest
void f_8004ADB4(Ctx* __restrict c) {
  trace_call(0x8004ADB4u);
  return; // 8004ADB4
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataTest,8>FPQ24gbla12SaveDataTest
void f_8004ADB8(Ctx* __restrict c) {
  trace_call(0x8004ADB8u);
  c->r[3]=c->r[3]+0x00000104u; // 8004ADB8
  f_800517DC(c); return; // 8004ADBC
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataTest,9>FPQ24gbla12SaveDataTest
void f_8004ADC0(Ctx* __restrict c) {
  trace_call(0x8004ADC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ADC0
  c->r[0]=c->lr; // 8004ADC4
  c->r[4]=0u+0x802A0000u; // 8004ADC8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004ADCC
  c->r[4]=c->r[4]+0xFFFF907Cu; // 8004ADD0
  c->r[4]=c->r[4]+0x0000011Fu; // 8004ADD4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004ADD8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8004ADDC
  c->r[30]=c->r[3]|c->r[3]; // 8004ADE0
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004ADE4
  c->lr=0x8004ADECu; f_8020A210(c); // 8004ADE8
  c->r[4]=0u+0x80210000u; // 8004ADEC
  c->r[4]=c->r[4]+0xFFFFA334u; // 8004ADF0
  c->lr=0x8004ADF8u; f_8020A328(c); // 8004ADF4
  c->r[31]=0u+0x00000000u; // 8004ADF8
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004ADFC
  c->r[3]=c->r[1]+0x0000000Cu; // 8004AE00
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004AE04
  c->lr=0x8004AE0Cu; f_800523DC(c); // 8004AE08
  c->r[3]=c->r[30]+0x00000104u; // 8004AE0C
  c->r[4]=c->r[1]+0x0000000Cu; // 8004AE10
  c->lr=0x8004AE18u; f_800514B0(c); // 8004AE14
  c->r[0]=addc(c,c->r[1],0x00000018u,0); cr0(c,c->r[0]); // 8004AE18
  if (crb(c,2)) { goto L_8004AE34; } // 8004AE1C
  W8(c->r[1]+0x00000008u,c->r[31]); // 8004AE20
  c->r[3]=c->r[1]+0x00000008u; // 8004AE24
  c->r[4]=R32(c->r[1]+0x00000018u); // 8004AE28
  c->r[5]=0u+0x00000001u; // 8004AE2C
  c->lr=0x8004AE34u; f_8020CBF8(c); // 8004AE30
L_8004AE34:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004AE34
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004AE38
  c->r[30]=R32(c->r[1]+0x00000028u); // 8004AE3C
  c->lr=c->r[0]; // 8004AE40
  c->r[1]=c->r[1]+0x00000030u; // 8004AE44
  return; // 8004AE48
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataTest,9>FPQ24gbla12SaveDataTest
void f_8004AE4C(Ctx* __restrict c) {
  trace_call(0x8004AE4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AE4C
  c->r[0]=c->lr; // 8004AE50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004AE54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004AE58
  c->r[31]=c->r[3]|c->r[3]; // 8004AE5C
  c->r[3]=c->r[3]+0x00000104u; // 8004AE60
  c->lr=0x8004AE68u; f_80051718(c); // 8004AE64
  c->r[0]=R8(c->r[31]+0x000002F8u); // 8004AE68
  cmps(c,0,(int32_t)c->r[0],0); // 8004AE6C
  if (crb(c,2)) { goto L_8004AEF8; } // 8004AE70
  c->r[0]=R32(c->r[31]+0x000002E4u); // 8004AE74
  cmps(c,0,(int32_t)c->r[0],1); // 8004AE78
  if (crb(c,2)) { goto L_8004AE8C; } // 8004AE7C
  cmps(c,0,(int32_t)c->r[0],2); // 8004AE80
  if (crb(c,2)) { goto L_8004AEF0; } // 8004AE84
  goto L_8004AEF8; // 8004AE88
L_8004AE8C:;
  c->lr=0x8004AE90u; f_80029780(c); // 8004AE8C
  c->r[3]=c->r[3]+0x00000010u; // 8004AE90
  c->lr=0x8004AE98u; f_8006DED8(c); // 8004AE94
  c->r[4]=0u+0x802A0000u; // 8004AE98
  c->r[4]=c->r[4]+0xFFFF907Cu; // 8004AE9C
  c->r[4]=c->r[4]+0x000000C5u; // 8004AEA0
  c->lr=0x8004AEA8u; f_800B7948(c); // 8004AEA4
  cmps(c,0,(int32_t)c->r[3],0); // 8004AEA8
  if (!crb(c,2)) { goto L_8004AEE4; } // 8004AEAC
  c->r[4]=R32(c->r[31]+0x000000F8u); // 8004AEB0
  c->r[3]=0u+0x88890000u; // 8004AEB4
  c->r[0]=c->r[3]+0xFFFF8889u; // 8004AEB8
  c->r[4]=c->r[4]+0x00000001u; // 8004AEBC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004AEC0
  c->r[0]=c->r[0]+c->r[4]; // 8004AEC4
  c->r[0]=sraw(c,c->r[0],3); // 8004AEC8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004AECC
  c->r[0]=c->r[0]+c->r[3]; // 8004AED0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004AED4
  c->r[0]=c->r[4]-c->r[0]; // 8004AED8
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AEDC
  goto L_8004AEF8; // 8004AEE0
L_8004AEE4:;
  c->r[0]=0u+0x0000000Eu; // 8004AEE4
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AEE8
  goto L_8004AEF8; // 8004AEEC
L_8004AEF0:;
  c->r[0]=0u+0x0000000Eu; // 8004AEF0
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004AEF4
L_8004AEF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004AEF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004AEFC
  c->lr=c->r[0]; // 8004AF00
  c->r[1]=c->r[1]+0x00000010u; // 8004AF04
  return; // 8004AF08
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataTest,9>FPQ24gbla12SaveDataTest
void f_8004AF0C(Ctx* __restrict c) {
  trace_call(0x8004AF0Cu);
  return; // 8004AF0C
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataTest,9>FPQ24gbla12SaveDataTest
void f_8004AF10(Ctx* __restrict c) {
  trace_call(0x8004AF10u);
  c->r[3]=c->r[3]+0x00000104u; // 8004AF10
  f_800517DC(c); return; // 8004AF14
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataTest,10>FPQ24gbla12SaveDataTest
void f_8004AF18(Ctx* __restrict c) {
  trace_call(0x8004AF18u);
  c->r[5]=R32(c->r[3]+0x000000F8u); // 8004AF18
  c->r[6]=0u+0x00000000u; // 8004AF1C
  c->r[4]=0u+0x88890000u; // 8004AF20
  W32(c->r[3]+0x00000504u,c->r[6]); // 8004AF24
  c->r[5]=c->r[5]+0x00000001u; // 8004AF28
  c->r[0]=c->r[4]+0xFFFF8889u; // 8004AF2C
  W32(c->r[3]+0x00000508u,c->r[6]); // 8004AF30
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8004AF34
  c->r[0]=c->r[0]+c->r[5]; // 8004AF38
  c->r[0]=sraw(c,c->r[0],3); // 8004AF3C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8004AF40
  c->r[0]=c->r[0]+c->r[4]; // 8004AF44
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004AF48
  c->r[0]=c->r[5]-c->r[0]; // 8004AF4C
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004AF50
  return; // 8004AF54
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataTest,10>FPQ24gbla12SaveDataTest
void f_8004AF58(Ctx* __restrict c) {
  trace_call(0x8004AF58u);
  return; // 8004AF58
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataTest,10>FPQ24gbla12SaveDataTest
void f_8004AF5C(Ctx* __restrict c) {
  trace_call(0x8004AF5Cu);
  return; // 8004AF5C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataTest,10>FPQ24gbla12SaveDataTest
void f_8004AF60(Ctx* __restrict c) {
  trace_call(0x8004AF60u);
  return; // 8004AF60
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataTest,11>FPQ24gbla12SaveDataTest
void f_8004AF64(Ctx* __restrict c) {
  trace_call(0x8004AF64u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004AF64
  c->r[0]=c->lr; // 8004AF68
  W32(c->r[1]+0x00000034u,c->r[0]); // 8004AF6C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004AF70
  c->r[31]=0u+0x802A0000u; // 8004AF74
  c->r[31]=c->r[31]+0xFFFF907Cu; // 8004AF78
  W32(c->r[1]+0x00000028u,c->r[30]); // 8004AF7C
  c->r[30]=c->r[3]|c->r[3]; // 8004AF80
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004AF84
  c->r[4]=c->r[31]+0x00000105u; // 8004AF88
  c->lr=0x8004AF90u; f_8020A210(c); // 8004AF8C
  c->r[4]=0u+0x80210000u; // 8004AF90
  c->r[4]=c->r[4]+0xFFFFA334u; // 8004AF94
  c->lr=0x8004AF9Cu; f_8020A328(c); // 8004AF98
  c->lr=0x8004AFA0u; f_80029780(c); // 8004AF9C
  c->r[3]=c->r[3]+0x00000010u; // 8004AFA0
  c->r[4]=c->r[31]+0x000000C5u; // 8004AFA4
  c->lr=0x8004AFACu; f_8006DEE0(c); // 8004AFA8
  c->r[31]=0u+0x00000000u; // 8004AFAC
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004AFB0
  c->r[3]=c->r[1]+0x0000000Cu; // 8004AFB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004AFB8
  c->lr=0x8004AFC0u; f_800523F8(c); // 8004AFBC
  c->r[3]=c->r[30]+0x00000104u; // 8004AFC0
  c->r[4]=c->r[1]+0x0000000Cu; // 8004AFC4
  c->lr=0x8004AFCCu; f_800514B0(c); // 8004AFC8
  c->r[0]=addc(c,c->r[1],0x00000018u,0); cr0(c,c->r[0]); // 8004AFCC
  W32(c->r[30]+0x000000FCu,c->r[31]); // 8004AFD0
  W8(c->r[30]+0x00000500u,c->r[31]); // 8004AFD4
  if (crb(c,2)) { goto L_8004AFF0; } // 8004AFD8
  W8(c->r[1]+0x00000008u,c->r[31]); // 8004AFDC
  c->r[3]=c->r[1]+0x00000008u; // 8004AFE0
  c->r[4]=R32(c->r[1]+0x00000018u); // 8004AFE4
  c->r[5]=0u+0x00000001u; // 8004AFE8
  c->lr=0x8004AFF0u; f_8020CBF8(c); // 8004AFEC
L_8004AFF0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8004AFF0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8004AFF4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8004AFF8
  c->lr=c->r[0]; // 8004AFFC
  c->r[1]=c->r[1]+0x00000030u; // 8004B000
  return; // 8004B004
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataTest,11>FPQ24gbla12SaveDataTest
void f_8004B008(Ctx* __restrict c) {
  trace_call(0x8004B008u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B008
  c->r[0]=c->lr; // 8004B00C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B010
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B014
  c->r[31]=c->r[3]|c->r[3]; // 8004B018
  c->r[4]=R32(c->r[3]+0x000000FCu); // 8004B01C
  c->r[6]=R32(c->r[3]+0x00000504u); // 8004B020
  c->r[0]=c->r[4]+0x00000001u; // 8004B024
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004B028
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8004B02C
  if (crb(c,1)) { goto L_8004B078; } // 8004B030
  c->r[5]=R32(c->r[3]+0x000000F8u); // 8004B034
  c->r[7]=c->r[6]+0x00000001u; // 8004B038
  c->r[4]=0u+0x88890000u; // 8004B03C
  c->r[6]=0u+0x00000001u; // 8004B040
  c->r[5]=c->r[5]+0x00000001u; // 8004B044
  W32(c->r[3]+0x00000504u,c->r[7]); // 8004B048
  c->r[0]=c->r[4]+0xFFFF8889u; // 8004B04C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8004B050
  W8(c->r[3]+0x00000500u,c->r[6]); // 8004B054
  c->r[0]=c->r[0]+c->r[5]; // 8004B058
  c->r[0]=sraw(c,c->r[0],3); // 8004B05C
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8004B060
  c->r[0]=c->r[0]+c->r[4]; // 8004B064
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004B068
  c->r[0]=c->r[5]-c->r[0]; // 8004B06C
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004B070
  goto L_8004B108; // 8004B074
L_8004B078:;
  c->r[3]=c->r[3]+0x00000104u; // 8004B078
  c->lr=0x8004B080u; f_80051718(c); // 8004B07C
  c->r[0]=R8(c->r[31]+0x000002F8u); // 8004B080
  cmps(c,0,(int32_t)c->r[0],0); // 8004B084
  if (crb(c,2)) { goto L_8004B108; } // 8004B088
  c->r[0]=R32(c->r[31]+0x000002E4u); // 8004B08C
  cmps(c,0,(int32_t)c->r[0],1); // 8004B090
  if (crb(c,2)) { goto L_8004B0A4; } // 8004B094
  cmps(c,0,(int32_t)c->r[0],2); // 8004B098
  if (crb(c,2)) { goto L_8004B100; } // 8004B09C
  goto L_8004B108; // 8004B0A0
L_8004B0A4:;
  c->r[6]=R32(c->r[31]+0x000000F8u); // 8004B0A4
  c->r[5]=0u+0x88890000u; // 8004B0A8
  c->r[4]=0u+0x802A0000u; // 8004B0AC
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004B0B0
  c->r[6]=c->r[6]+0x00000001u; // 8004B0B4
  c->r[0]=c->r[5]+0xFFFF8889u; // 8004B0B8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 8004B0BC
  c->r[4]=c->r[4]+0xFFFF907Cu; // 8004B0C0
  c->r[4]=c->r[4]+0x0000013Du; // 8004B0C4
  c->r[0]=c->r[0]+c->r[6]; // 8004B0C8
  c->r[0]=sraw(c,c->r[0],3); // 8004B0CC
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8004B0D0
  c->r[0]=c->r[0]+c->r[5]; // 8004B0D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004B0D8
  c->r[0]=c->r[6]-c->r[0]; // 8004B0DC
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004B0E0
  c->lr=0x8004B0E8u; f_8020A210(c); // 8004B0E4
  c->r[4]=R32(c->r[31]+0x000000FCu); // 8004B0E8
  c->lr=0x8004B0F0u; f_8020A130(c); // 8004B0EC
  c->r[4]=0u+0x80210000u; // 8004B0F0
  c->r[4]=c->r[4]+0xFFFFA334u; // 8004B0F4
  c->lr=0x8004B0FCu; f_8020A328(c); // 8004B0F8
  goto L_8004B108; // 8004B0FC
L_8004B100:;
  c->r[0]=0u+0x0000000Eu; // 8004B100
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004B104
L_8004B108:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B108
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B10C
  c->lr=c->r[0]; // 8004B110
  c->r[1]=c->r[1]+0x00000010u; // 8004B114
  return; // 8004B118
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataTest,11>FPQ24gbla12SaveDataTest
void f_8004B11C(Ctx* __restrict c) {
  trace_call(0x8004B11Cu);
  return; // 8004B11C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataTest,11>FPQ24gbla12SaveDataTest
void f_8004B120(Ctx* __restrict c) {
  trace_call(0x8004B120u);
  c->r[3]=c->r[3]+0x00000104u; // 8004B120
  f_800517DC(c); return; // 8004B124
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataTest,12>FPQ24gbla12SaveDataTest
void f_8004B128(Ctx* __restrict c) {
  trace_call(0x8004B128u);
  c->r[0]=R8(c->r[3]+0x00000500u); // 8004B128
  cmps(c,0,(int32_t)c->r[0],0); // 8004B12C
  if (!crb(c,2)) { goto L_8004B180; } // 8004B130
  c->r[4]=R32(c->r[3]+0x00000508u); // 8004B134
  c->r[0]=0u+0x00000000u; // 8004B138
  W32(c->r[3]+0x00000504u,c->r[0]); // 8004B13C
  c->r[0]=c->r[4]+0x00000001u; // 8004B140
  cmps(c,0,(int32_t)c->r[0],100); // 8004B144
  W32(c->r[3]+0x00000508u,c->r[0]); // 8004B148
  if (!crb(c,1)) { goto L_8004B180; } // 8004B14C
  c->r[5]=R32(c->r[3]+0x000000F8u); // 8004B150
  c->r[4]=0u+0x88890000u; // 8004B154
  c->r[0]=c->r[4]+0xFFFF8889u; // 8004B158
  c->r[5]=c->r[5]+0x00000001u; // 8004B15C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8004B160
  c->r[0]=c->r[0]+c->r[5]; // 8004B164
  c->r[0]=sraw(c,c->r[0],3); // 8004B168
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8004B16C
  c->r[0]=c->r[0]+c->r[4]; // 8004B170
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004B174
  c->r[0]=c->r[5]-c->r[0]; // 8004B178
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004B17C
L_8004B180:;
  c->r[0]=0u+0x00000000u; // 8004B180
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004B184
  return; // 8004B188
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataTest,12>FPQ24gbla12SaveDataTest
void f_8004B18C(Ctx* __restrict c) {
  trace_call(0x8004B18Cu);
  c->r[4]=R32(c->r[3]+0x000000FCu); // 8004B18C
  c->r[0]=c->r[4]+0x00000001u; // 8004B190
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004B194
  cmps(c,0,(int32_t)c->r[0],3); // 8004B198
  if (!crb(c,1)) return; // 8004B19C
  c->r[0]=0u+0x0000000Bu; // 8004B1A0
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004B1A4
  return; // 8004B1A8
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataTest,12>FPQ24gbla12SaveDataTest
void f_8004B1AC(Ctx* __restrict c) {
  trace_call(0x8004B1ACu);
  return; // 8004B1AC
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataTest,12>FPQ24gbla12SaveDataTest
void f_8004B1B0(Ctx* __restrict c) {
  trace_call(0x8004B1B0u);
  return; // 8004B1B0
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataTest,13>FPQ24gbla12SaveDataTest
void f_8004B1B4(Ctx* __restrict c) {
  trace_call(0x8004B1B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B1B4
  c->r[0]=c->lr; // 8004B1B8
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004B1BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B1C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B1C4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004B1C8
  c->r[30]=0u+0x802A0000u; // 8004B1CC
  c->r[30]=c->r[30]+0xFFFF907Cu; // 8004B1D0
  c->r[4]=c->r[30]+0x00000149u; // 8004B1D4
  c->lr=0x8004B1DCu; f_8020A210(c); // 8004B1D8
  c->r[31]=0u+0x80210000u; // 8004B1DC
  c->r[4]=c->r[31]+0xFFFFA334u; // 8004B1E0
  c->lr=0x8004B1E8u; f_8020A328(c); // 8004B1E4
  c->r[4]=c->r[30]+0x00000162u; // 8004B1E8
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004B1EC
  c->lr=0x8004B1F4u; f_8020A210(c); // 8004B1F0
  c->r[4]=c->r[31]+0xFFFFA334u; // 8004B1F4
  c->lr=0x8004B1FCu; f_8020A328(c); // 8004B1F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B1FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B200
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004B204
  c->lr=c->r[0]; // 8004B208
  c->r[1]=c->r[1]+0x00000010u; // 8004B20C
  return; // 8004B210
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataTest,13>FPQ24gbla12SaveDataTest
void f_8004B214(Ctx* __restrict c) {
  trace_call(0x8004B214u);
  c->r[0]=0u+0x00000000u; // 8004B214
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004B218
  return; // 8004B21C
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataTest,13>FPQ24gbla12SaveDataTest
void f_8004B220(Ctx* __restrict c) {
  trace_call(0x8004B220u);
  return; // 8004B220
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataTest,13>FPQ24gbla12SaveDataTest
void f_8004B224(Ctx* __restrict c) {
  trace_call(0x8004B224u);
  return; // 8004B224
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataTest,14>FPQ24gbla12SaveDataTest
void f_8004B228(Ctx* __restrict c) {
  trace_call(0x8004B228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B228
  c->r[0]=c->lr; // 8004B22C
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004B230
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B234
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B238
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004B23C
  c->r[30]=0u+0x802A0000u; // 8004B240
  c->r[30]=c->r[30]+0xFFFF907Cu; // 8004B244
  c->r[4]=c->r[30]+0x0000016Bu; // 8004B248
  c->lr=0x8004B250u; f_8020A210(c); // 8004B24C
  c->r[31]=0u+0x80210000u; // 8004B250
  c->r[4]=c->r[31]+0xFFFFA334u; // 8004B254
  c->lr=0x8004B25Cu; f_8020A328(c); // 8004B258
  c->r[4]=c->r[30]+0x00000185u; // 8004B25C
  c->r[3]=c->r[13]+0xFFFFA418u; // 8004B260
  c->lr=0x8004B268u; f_8020A210(c); // 8004B264
  c->r[4]=c->r[31]+0xFFFFA334u; // 8004B268
  c->lr=0x8004B270u; f_8020A328(c); // 8004B26C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B270
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B274
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004B278
  c->lr=c->r[0]; // 8004B27C
  c->r[1]=c->r[1]+0x00000010u; // 8004B280
  return; // 8004B284
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataTest,14>FPQ24gbla12SaveDataTest
void f_8004B288(Ctx* __restrict c) {
  trace_call(0x8004B288u);
  return; // 8004B288
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataTest,14>FPQ24gbla12SaveDataTest
void f_8004B28C(Ctx* __restrict c) {
  trace_call(0x8004B28Cu);
  return; // 8004B28C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataTest,14>FPQ24gbla12SaveDataTest
void f_8004B290(Ctx* __restrict c) {
  trace_call(0x8004B290u);
  return; // 8004B290
}

// __dt__Q24gbla12SaveDataTestFv
void f_8004B294(Ctx* __restrict c) {
  trace_call(0x8004B294u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B294
  c->r[0]=c->lr; // 8004B298
  cmps(c,0,(int32_t)c->r[3],0); // 8004B29C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B2A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B2A4
  c->r[31]=c->r[4]|c->r[4]; // 8004B2A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004B2AC
  c->r[30]=c->r[3]|c->r[3]; // 8004B2B0
  if (crb(c,2)) { goto L_8004B2D4; } // 8004B2B4
  c->r[4]=0u+0xFFFFFFFFu; // 8004B2B8
  c->r[3]=c->r[3]+0x00000104u; // 8004B2BC
  c->lr=0x8004B2C4u; f_80051340(c); // 8004B2C0
  cmps(c,0,(int32_t)c->r[31],0); // 8004B2C4
  if (!crb(c,1)) { goto L_8004B2D4; } // 8004B2C8
  c->r[3]=c->r[30]|c->r[30]; // 8004B2CC
  c->lr=0x8004B2D4u; f_80210AFC(c); // 8004B2D0
L_8004B2D4:;
  c->r[3]=c->r[30]|c->r[30]; // 8004B2D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B2D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004B2DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B2E0
  c->lr=c->r[0]; // 8004B2E4
  c->r[1]=c->r[1]+0x00000010u; // 8004B2E8
  return; // 8004B2EC
}

// init__Q24gbla12SaveDataTestFRCQ34gbla12SaveDataTest9InitParam
void f_8004B2F0(Ctx* __restrict c) {
  trace_call(0x8004B2F0u);
  {uint32_t ea=c->r[1]+0xFFFFFBF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B2F0
  c->r[0]=c->lr; // 8004B2F4
  W32(c->r[1]+0x00000414u,c->r[0]); // 8004B2F8
  c->r[0]=0u+0x00000000u; // 8004B2FC
  W8(c->r[3]+0x00000100u,c->r[0]); // 8004B300
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004B304
  W32(c->r[3]+0x00000508u,c->r[0]); // 8004B308
  c->r[3]=c->r[1]+0x00000008u; // 8004B30C
  c->lr=0x8004B314u; f_8004E474(c); // 8004B310
  c->r[3]=c->r[1]+0x00000008u; // 8004B314
  c->r[4]=0u+0xFFFFFFFFu; // 8004B318
  c->lr=0x8004B320u; f_80051340(c); // 8004B31C
  c->r[0]=R32(c->r[1]+0x00000414u); // 8004B320
  c->lr=c->r[0]; // 8004B324
  c->r[1]=c->r[1]+0x00000410u; // 8004B328
  return; // 8004B32C
}

// proc__Q24gbla12SaveDataTestFv
void f_8004B330(Ctx* __restrict c) {
  trace_call(0x8004B330u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B330
  c->r[0]=c->lr; // 8004B334
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B338
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B33C
  c->r[31]=0u+0xFFFFFFFFu; // 8004B340
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004B344
  c->r[30]=c->r[3]|c->r[3]; // 8004B348
  goto L_8004B3B4; // 8004B34C
L_8004B350:;
  cmps(c,0,(int32_t)c->r[3],-1); // 8004B350
  if (crb(c,2)) { goto L_8004B384; } // 8004B354
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8004B358
  c->r[3]=c->r[30]|c->r[30]; // 8004B35C
  c->r[4]=c->r[30]+c->r[0]; // 8004B360
  c->r[12]=R32(c->r[4]+0x00000008u); // 8004B364
  c->ctr=c->r[12]; // 8004B368
  if (true) { c->lr=0x8004B370u; dispatch(c,c->ctr); } // 8004B36C
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8004B370
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8004B374
  W32(c->r[30]+0x000000F0u,c->r[3]); // 8004B378
  W32(c->r[30]+0x000000F4u,c->r[0]); // 8004B37C
  goto L_8004B390; // 8004B380
L_8004B384:;
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8004B384
  W32(c->r[30]+0x000000F0u,c->r[31]); // 8004B388
  W32(c->r[30]+0x000000F4u,c->r[0]); // 8004B38C
L_8004B390:;
  c->r[0]=R32(c->r[30]+0x000000F4u); // 8004B390
  cmps(c,0,(int32_t)c->r[0],-1); // 8004B394
  if (crb(c,2)) { goto L_8004B3B4; } // 8004B398
  W32(c->r[30]+0x000000F0u,c->r[0]); // 8004B39C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8004B3A0
  c->r[3]=c->r[30]|c->r[30]; // 8004B3A4
  c->r[12]=R32(c->r[30]+c->r[0]); // 8004B3A8
  c->ctr=c->r[12]; // 8004B3AC
  if (true) { c->lr=0x8004B3B4u; dispatch(c,c->ctr); } // 8004B3B0
L_8004B3B4:;
  c->r[3]=R32(c->r[30]+0x000000F4u); // 8004B3B4
  c->r[0]=R32(c->r[30]+0x000000F8u); // 8004B3B8
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004B3BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8004B350; } // 8004B3C0
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8004B3C4
  c->r[3]=c->r[30]|c->r[30]; // 8004B3C8
  c->r[4]=c->r[30]+c->r[0]; // 8004B3CC
  c->r[12]=R32(c->r[4]+0x00000004u); // 8004B3D0
  c->ctr=c->r[12]; // 8004B3D4
  if (true) { c->lr=0x8004B3DCu; dispatch(c,c->ctr); } // 8004B3D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B3DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B3E0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004B3E4
  c->lr=c->r[0]; // 8004B3E8
  c->r[1]=c->r[1]+0x00000010u; // 8004B3EC
  return; // 8004B3F0
}

// disp__Q24gbla12SaveDataTestFv
void f_8004B3F4(Ctx* __restrict c) {
  trace_call(0x8004B3F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B3F4
  c->r[0]=c->lr; // 8004B3F8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004B3FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004B400
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004B404
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004B408
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004B40C
  c->r[28]=c->r[3]|c->r[3]; // 8004B410
  c->r[0]=R32(c->r[3]+0x000000F4u); // 8004B414
  cmps(c,0,(int32_t)c->r[0],-1); // 8004B418
  if (crb(c,2)) { goto L_8004B434; } // 8004B41C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8004B420
  c->r[4]=c->r[3]+c->r[0]; // 8004B424
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8004B428
  c->ctr=c->r[12]; // 8004B42C
  if (true) { c->lr=0x8004B434u; dispatch(c,c->ctr); } // 8004B430
L_8004B434:;
  c->lr=0x8004B438u; f_8006E3E4(c); // 8004B434
  c->r[3]=c->r[1]+0x00000008u; // 8004B438
  c->r[4]=0u+0x00000001u; // 8004B43C
  c->lr=0x8004B444u; f_8006E3F0(c); // 8004B440
  c->r[31]=R32(c->r[28]+0x000000F4u); // 8004B444
  c->r[3]=c->r[1]+0x00000008u; // 8004B448
  c->r[4]=0u+0x000000FFu; // 8004B44C
  c->r[5]=0u+0x00000000u; // 8004B450
  c->r[6]=0u+0x000000FFu; // 8004B454
  c->lr=0x8004B45Cu; f_8006E764(c); // 8004B458
  c->r[3]=c->r[1]+0x00000008u; // 8004B45C
  c->r[4]=0u+0x0000001Eu; // 8004B460
  c->r[5]=0u+0x0000000Au; // 8004B464
  c->r[6]=0u+0x00000000u; // 8004B468
  c->lr=0x8004B470u; f_8006E814(c); // 8004B46C
  c->r[4]=0u+0x802A0000u; // 8004B470
  c->r[3]=c->r[1]+0x00000008u; // 8004B474
  c->r[30]=c->r[4]+0xFFFF907Cu; // 8004B478
  c->r[4]=c->r[30]+0x00000191u; // 8004B47C
  c->lr=0x8004B484u; f_8006E6C8(c); // 8004B480
  c->r[4]=0u+0x802E0000u; // 8004B484
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 8004B488
  c->r[4]=c->r[4]+0x000025E8u; // 8004B48C
  c->r[4]=R32(c->r[4]+c->r[0]); // 8004B490
  c->lr=0x8004B498u; f_8006E6C8(c); // 8004B494
  c->r[4]=c->r[30]+0x000001A5u; // 8004B498
  c->lr=0x8004B4A0u; f_8006E6C8(c); // 8004B49C
  c->r[3]=c->r[1]+0x00000008u; // 8004B4A0
  c->r[4]=c->r[30]+0x000001A8u; // 8004B4A4
  c->lr=0x8004B4ACu; f_8006E6C8(c); // 8004B4A8
  c->r[3]=0u+0x66660000u; // 8004B4AC
  c->r[29]=0u+0x00000000u; // 8004B4B0
  c->r[31]=c->r[3]+0x00006667u; // 8004B4B4
  goto L_8004B4CC; // 8004B4B8
L_8004B4BC:;
  c->r[3]=c->r[1]+0x00000008u; // 8004B4BC
  c->r[4]=c->r[30]+0x000001B3u; // 8004B4C0
  c->lr=0x8004B4C8u; f_8006E6C8(c); // 8004B4C4
  c->r[29]=c->r[29]+0x00000001u; // 8004B4C8
L_8004B4CC:;
  c->r[0]=R32(c->r[28]+0x00000508u); // 8004B4CC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[31]*(int64_t)(int32_t)c->r[0])>>32); // 8004B4D0
  c->r[0]=sraw(c,c->r[0],2); // 8004B4D4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004B4D8
  c->r[0]=c->r[0]+c->r[3]; // 8004B4DC
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 8004B4E0
  if (crb(c,0)) { IRQCHK(c); goto L_8004B4BC; } // 8004B4E4
  c->r[31]=0u+0x802A0000u; // 8004B4E8
  c->r[31]=c->r[31]+0xFFFF907Cu; // 8004B4EC
  goto L_8004B504; // 8004B4F0
L_8004B4F4:;
  c->r[3]=c->r[1]+0x00000008u; // 8004B4F4
  c->r[4]=c->r[31]+0x000001B5u; // 8004B4F8
  c->lr=0x8004B500u; f_8006E6C8(c); // 8004B4FC
  c->r[29]=c->r[29]+0x00000001u; // 8004B500
L_8004B504:;
  cmps(c,0,(int32_t)c->r[29],10); // 8004B504
  if (crb(c,0)) { IRQCHK(c); goto L_8004B4F4; } // 8004B508
  c->r[4]=0u+0x802A0000u; // 8004B50C
  c->r[3]=c->r[1]+0x00000008u; // 8004B510
  c->r[4]=c->r[4]+0xFFFF907Cu; // 8004B514
  c->r[4]=c->r[4]+0x000001B7u; // 8004B518
  c->lr=0x8004B520u; f_8006E6C8(c); // 8004B51C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004B520
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004B524
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004B528
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004B52C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004B530
  c->lr=c->r[0]; // 8004B534
  c->r[1]=c->r[1]+0x00000020u; // 8004B538
  return; // 8004B53C
}

// term__Q24gbla12SaveDataTestFv
void f_8004B540(Ctx* __restrict c) {
  trace_call(0x8004B540u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B540
  c->r[0]=c->lr; // 8004B544
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B548
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B54C
  c->r[31]=c->r[3]|c->r[3]; // 8004B550
  c->r[0]=R32(c->r[3]+0x000000F4u); // 8004B554
  cmps(c,0,(int32_t)c->r[0],-1); // 8004B558
  if (crb(c,2)) { goto L_8004B588; } // 8004B55C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8004B560
  c->r[4]=c->r[3]+c->r[0]; // 8004B564
  c->r[12]=R32(c->r[4]+0x00000008u); // 8004B568
  c->ctr=c->r[12]; // 8004B56C
  if (true) { c->lr=0x8004B574u; dispatch(c,c->ctr); } // 8004B570
  c->r[3]=R32(c->r[31]+0x000000F4u); // 8004B574
  c->r[0]=R32(c->r[31]+0x000000F8u); // 8004B578
  W32(c->r[31]+0x000000F0u,c->r[3]); // 8004B57C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 8004B580
  goto L_8004B598; // 8004B584
L_8004B588:;
  c->r[0]=R32(c->r[3]+0x000000F8u); // 8004B588
  c->r[4]=0u+0xFFFFFFFFu; // 8004B58C
  W32(c->r[3]+0x000000F0u,c->r[4]); // 8004B590
  W32(c->r[3]+0x000000F4u,c->r[0]); // 8004B594
L_8004B598:;
  c->r[0]=0u+0xFFFFFFFFu; // 8004B598
  W32(c->r[31]+0x000000F0u,c->r[0]); // 8004B59C
  W32(c->r[31]+0x000000F4u,c->r[0]); // 8004B5A0
  W32(c->r[31]+0x000000F8u,c->r[0]); // 8004B5A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B5A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B5AC
  c->lr=c->r[0]; // 8004B5B0
  c->r[1]=c->r[1]+0x00000010u; // 8004B5B4
  return; // 8004B5B8
}

// calcProc__Q24gbla12SaveDataTestFRCQ25Alice11ModeType<1>
void f_8004B5BC(Ctx* __restrict c) {
  trace_call(0x8004B5BCu);
  {uint32_t ea=c->r[1]+0xFFFFFBB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B5BC
  c->r[0]=c->lr; // 8004B5C0
  c->r[4]=0u+0x88890000u; // 8004B5C4
  W32(c->r[1]+0x00000454u,c->r[0]); // 8004B5C8
  c->r[0]=c->r[4]+0xFFFF8889u; // 8004B5CC
  W32(c->r[1]+0x0000044Cu,c->r[31]); // 8004B5D0
  c->r[31]=c->r[1]|c->r[1]; // 8004B5D4
  W32(c->r[1]+0x00000448u,c->r[30]); // 8004B5D8
  W32(c->r[1]+0x00000444u,c->r[29]); // 8004B5DC
  c->r[5]=R32(c->r[3]+0x000000F8u); // 8004B5E0
  c->r[5]=c->r[5]+0x00000001u; // 8004B5E4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8004B5E8
  c->r[0]=c->r[0]+c->r[5]; // 8004B5EC
  c->r[0]=sraw(c,c->r[0],3); // 8004B5F0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 8004B5F4
  c->r[0]=c->r[0]+c->r[4]; // 8004B5F8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)15); // 8004B5FC
  c->r[0]=c->r[5]-c->r[0]; // 8004B600
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004B604
  c->r[3]=c->r[31]+0x00000038u; // 8004B608
  c->lr=0x8004B610u; f_8004E474(c); // 8004B60C
  c->r[3]=0u+0x000003FCu; // 8004B610
  c->lr=0x8004B618u; f_800B0720(c); // 8004B614
  c->r[30]=c->r[3]|c->r[3]; // 8004B618
  c->r[4]=0u+0x000000FFu; // 8004B61C
  c->r[5]=0u+0x000003FCu; // 8004B620
  c->lr=0x8004B628u; f_80004714(c); // 8004B624
  cmps(c,0,(int32_t)c->r[30],0); // 8004B628
  if (crb(c,2)) { goto L_8004B650; } // 8004B62C
  W32(c->r[31]+0x00000034u,c->r[1]); // 8004B630
  c->r[3]=c->r[30]|c->r[30]; // 8004B634
  c->lr=0x8004B63Cu; f_8004E474(c); // 8004B638
  goto L_8004B650; // 8004B63C
  c->r[3]=0u+0x00000000u; // 8004B640
  c->r[4]=0u+0x00000000u; // 8004B644
  c->r[5]=0u+0x00000000u; // 8004B648
  c->lr=0x8004B650u; f_800AF804(c); // 8004B64C
L_8004B650:;
  c->r[0]=0u+0xFFFFFFFFu; // 8004B650
  c->r[3]=c->r[30]|c->r[30]; // 8004B654
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8004B658
  c->lr=0x8004B660u; f_80051340(c); // 8004B65C
  c->r[3]=c->r[30]|c->r[30]; // 8004B660
  c->lr=0x8004B668u; f_800B07C0(c); // 8004B664
  c->r[3]=0u+0x000003FCu; // 8004B668
  c->lr=0x8004B670u; f_800B0720(c); // 8004B66C
  c->r[29]=c->r[3]|c->r[3]; // 8004B670
  c->r[4]=0u+0x00000000u; // 8004B674
  c->r[5]=0u+0x000003FCu; // 8004B678
  c->lr=0x8004B680u; f_80004714(c); // 8004B67C
  cmps(c,0,(int32_t)c->r[29],0); // 8004B680
  if (crb(c,2)) { goto L_8004B6A8; } // 8004B684
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8004B688
  c->r[3]=c->r[29]|c->r[29]; // 8004B68C
  c->lr=0x8004B694u; f_8004E474(c); // 8004B690
  goto L_8004B6A8; // 8004B694
  c->r[3]=0u+0x00000000u; // 8004B698
  c->r[4]=0u+0x00000000u; // 8004B69C
  c->r[5]=0u+0x00000000u; // 8004B6A0
  c->lr=0x8004B6A8u; f_800AF804(c); // 8004B6A4
L_8004B6A8:;
  c->r[30]=0u+0xFFFFFFFFu; // 8004B6A8
  c->r[3]=c->r[29]|c->r[29]; // 8004B6AC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8004B6B0
  c->lr=0x8004B6B8u; f_80051340(c); // 8004B6B4
  c->r[3]=c->r[29]|c->r[29]; // 8004B6B8
  c->lr=0x8004B6C0u; f_800B07C0(c); // 8004B6BC
  c->r[3]=c->r[31]+0x00000038u; // 8004B6C0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[30]; // 8004B6C4
  c->lr=0x8004B6CCu; f_80051340(c); // 8004B6C8
  c->r[10]=c->r[31]|c->r[31]; // 8004B6CC
  c->r[31]=R32(c->r[31]+0x0000044Cu); // 8004B6D0
  c->r[30]=R32(c->r[10]+0x00000448u); // 8004B6D4
  c->r[29]=R32(c->r[10]+0x00000444u); // 8004B6D8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004B6DC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004B6E0
  c->r[1]=c->r[10]|c->r[10]; // 8004B6E4
  c->lr=c->r[0]; // 8004B6E8
  return; // 8004B6EC
}

// __ct__Q24gbla10GblaRankupFv
void f_8004B6F0(Ctx* __restrict c) {
  trace_call(0x8004B6F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B6F0
  c->r[0]=c->lr; // 8004B6F4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004B6F8
  c->r[11]=c->r[1]+0x00000050u; // 8004B6FC
  c->lr=0x8004B704u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004B700
  c->r[18]=0u+0x80050000u; // 8004B704
  c->r[19]=0u+0x80050000u; // 8004B708
  c->r[29]=0u+0x00000000u; // 8004B70C
  c->r[31]=0u+0xFFFFFFFFu; // 8004B710
  c->r[20]=0u+0x80050000u; // 8004B714
  c->r[21]=0u+0x80050000u; // 8004B718
  c->r[22]=0u+0x80050000u; // 8004B71C
  c->r[23]=0u+0x80050000u; // 8004B720
  c->r[24]=0u+0x80050000u; // 8004B724
  c->r[25]=0u+0x80050000u; // 8004B728
  c->r[26]=0u+0x80050000u; // 8004B72C
  c->r[27]=0u+0x80050000u; // 8004B730
  c->r[28]=0u+0x80050000u; // 8004B734
  c->r[12]=0u+0x80050000u; // 8004B738
  c->r[11]=0u+0x80050000u; // 8004B73C
  c->r[10]=0u+0x80050000u; // 8004B740
  c->r[9]=0u+0x80050000u; // 8004B744
  c->r[8]=0u+0x80050000u; // 8004B748
  c->r[7]=0u+0x80050000u; // 8004B74C
  c->r[6]=0u+0x80050000u; // 8004B750
  c->r[5]=0u+0x80050000u; // 8004B754
  c->r[4]=0u+0x80050000u; // 8004B758
  c->r[18]=c->r[18]+0xFFFFB948u; // 8004B75C
  c->r[19]=c->r[19]+0xFFFFB958u; // 8004B760
  c->r[20]=c->r[20]+0xFFFFB9E0u; // 8004B764
  c->r[21]=c->r[21]+0xFFFFB9E4u; // 8004B768
  c->r[22]=c->r[22]+0xFFFFB9F8u; // 8004B76C
  c->r[23]=c->r[23]+0xFFFFBA3Cu; // 8004B770
  c->r[24]=c->r[24]+0xFFFFBA54u; // 8004B774
  c->r[25]=c->r[25]+0xFFFFBA58u; // 8004B778
  c->r[26]=c->r[26]+0xFFFFBAF4u; // 8004B77C
  c->r[27]=c->r[27]+0xFFFFBB38u; // 8004B780
  c->r[28]=c->r[28]+0xFFFFBB50u; // 8004B784
  c->r[12]=c->r[12]+0xFFFFBB54u; // 8004B788
  c->r[11]=c->r[11]+0xFFFFBB68u; // 8004B78C
  c->r[10]=c->r[10]+0xFFFFBB7Cu; // 8004B790
  c->r[9]=c->r[9]+0xFFFFBB94u; // 8004B794
  c->r[8]=c->r[8]+0xFFFFBB98u; // 8004B798
  c->r[7]=c->r[7]+0xFFFFBBACu; // 8004B79C
  c->r[6]=c->r[6]+0xFFFFBBD0u; // 8004B7A0
  c->r[5]=c->r[5]+0xFFFFBBDCu; // 8004B7A4
  c->r[4]=c->r[4]+0xFFFFBBE0u; // 8004B7A8
  W32(c->r[3]+0x00000050u,c->r[31]); // 8004B7AC
  c->r[30]=c->r[3]|c->r[3]; // 8004B7B0
  W32(c->r[3]+0x00000054u,c->r[31]); // 8004B7B4
  W32(c->r[3]+0x00000058u,c->r[31]); // 8004B7B8
  W32(c->r[3]+0x00000000u,c->r[18]); // 8004B7BC
  W32(c->r[3]+0x00000004u,c->r[19]); // 8004B7C0
  W32(c->r[3]+0x0000000Cu,c->r[20]); // 8004B7C4
  W32(c->r[3]+0x00000008u,c->r[21]); // 8004B7C8
  W32(c->r[3]+0x00000010u,c->r[22]); // 8004B7CC
  W32(c->r[3]+0x00000014u,c->r[23]); // 8004B7D0
  W32(c->r[3]+0x0000001Cu,c->r[24]); // 8004B7D4
  W32(c->r[3]+0x00000018u,c->r[25]); // 8004B7D8
  W32(c->r[3]+0x00000020u,c->r[26]); // 8004B7DC
  W32(c->r[3]+0x00000024u,c->r[27]); // 8004B7E0
  W32(c->r[3]+0x0000002Cu,c->r[28]); // 8004B7E4
  W32(c->r[3]+0x00000028u,c->r[12]); // 8004B7E8
  W32(c->r[3]+0x00000030u,c->r[11]); // 8004B7EC
  W32(c->r[3]+0x00000034u,c->r[10]); // 8004B7F0
  W32(c->r[3]+0x0000003Cu,c->r[9]); // 8004B7F4
  W32(c->r[3]+0x00000038u,c->r[8]); // 8004B7F8
  W32(c->r[3]+0x00000040u,c->r[7]); // 8004B7FC
  W32(c->r[3]+0x00000044u,c->r[6]); // 8004B800
  W32(c->r[3]+0x0000004Cu,c->r[5]); // 8004B804
  W32(c->r[3]+0x00000048u,c->r[4]); // 8004B808
  W32(c->r[3]+0x0000005Cu,c->r[29]); // 8004B80C
  W32(c->r[3]+0x00000064u,c->r[29]); // 8004B810
  W32(c->r[3]+0x00000068u,c->r[29]); // 8004B814
  W8(c->r[3]+0x0000006Cu,c->r[29]); // 8004B818
  W8(c->r[3]+0x0000006Du,c->r[29]); // 8004B81C
  c->r[3]=c->r[3]+0x00000070u; // 8004B820
  c->lr=0x8004B828u; f_800393E0(c); // 8004B824
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B828
  c->r[3]=c->r[30]+0x000000C4u; // 8004B82C
  W32(c->r[30]+0x0000008Cu,c->r[31]); // 8004B830
  W32(c->r[30]+0x00000090u,c->r[31]); // 8004B834
  W32(c->r[30]+0x00000094u,c->r[29]); // 8004B838
  W32(c->r[30]+0x00000098u,c->r[31]); // 8004B83C
  W32(c->r[30]+0x0000009Cu,c->r[31]); // 8004B840
  W32(c->r[30]+0x000000A0u,c->r[31]); // 8004B844
  W32(c->r[30]+0x000000A4u,c->r[31]); // 8004B848
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[0]);} // 8004B84C
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[0]);} // 8004B850
  W32(c->r[30]+0x000000B8u,c->r[29]); // 8004B854
  W32(c->r[30]+0x000000BCu,c->r[29]); // 8004B858
  W32(c->r[30]+0x000000C0u,c->r[29]); // 8004B85C
  c->lr=0x8004B864u; f_8005AE18(c); // 8004B860
  c->r[4]=c->r[30]+0x0000023Cu; // 8004B864
  c->r[3]=c->r[30]+0x00000248u; // 8004B868
  cmpu(c,0,c->r[4],c->r[3]); // 8004B86C
  W8(c->r[30]+0x00000238u,c->r[29]); // 8004B870
  W8(c->r[30]+0x00000239u,c->r[29]); // 8004B874
  W8(c->r[30]+0x0000023Au,c->r[29]); // 8004B878
  W8(c->r[30]+0x0000023Bu,c->r[29]); // 8004B87C
  if (!crb(c,0)) { goto L_8004B8B0; } // 8004B880
  c->r[0]=c->r[3]+0x00000003u; // 8004B884
  c->r[0]=c->r[0]-c->r[4]; // 8004B888
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 8004B88C
  c->ctr=c->r[0]; // 8004B890
  if (!crb(c,0)) { goto L_8004B8B0; } // 8004B894
L_8004B898:;
  W8(c->r[4]+0x00000000u,c->r[29]); // 8004B898
  W8(c->r[4]+0x00000001u,c->r[29]); // 8004B89C
  W8(c->r[4]+0x00000002u,c->r[29]); // 8004B8A0
  W8(c->r[4]+0x00000003u,c->r[29]); // 8004B8A4
  c->r[4]=c->r[4]+0x00000004u; // 8004B8A8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004B898; } // 8004B8AC
L_8004B8B0:;
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B8B0
  c->r[31]=0u+0x00000000u; // 8004B8B4
  {uint32_t ea=c->r[30]+0x00000280u; WF32(ea,c->f[0]);} // 8004B8B8
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8004B8BC
  W8(c->r[30]+0x00000060u,c->r[31]); // 8004B8C0
  c->lr=0x8004B8C8u; f_80210AFC(c); // 8004B8C4
  W32(c->r[30]+0x000000B8u,c->r[31]); // 8004B8C8
  c->r[11]=c->r[1]+0x00000050u; // 8004B8CC
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004B8D0
  c->r[3]=c->r[30]|c->r[30]; // 8004B8D4
  W32(c->r[30]+0x000000BCu,c->r[31]); // 8004B8D8
  W32(c->r[30]+0x000000C0u,c->r[31]); // 8004B8DC
  W8(c->r[30]+0x0000021Cu,c->r[31]); // 8004B8E0
  W8(c->r[30]+0x0000021Du,c->r[31]); // 8004B8E4
  W8(c->r[30]+0x0000021Eu,c->r[31]); // 8004B8E8
  W8(c->r[30]+0x0000021Fu,c->r[31]); // 8004B8EC
  W8(c->r[30]+0x00000220u,c->r[31]); // 8004B8F0
  W8(c->r[30]+0x00000221u,c->r[31]); // 8004B8F4
  W8(c->r[30]+0x00000222u,c->r[31]); // 8004B8F8
  W8(c->r[30]+0x00000223u,c->r[31]); // 8004B8FC
  W8(c->r[30]+0x00000224u,c->r[31]); // 8004B900
  {uint32_t ea=c->r[30]+0x00000248u; WF32(ea,c->f[0]);} // 8004B904
  {uint32_t ea=c->r[30]+0x0000024Cu; WF32(ea,c->f[0]);} // 8004B908
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8004B90C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8004B910
  c->lr=0x8004B918u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004B914
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004B918
  c->lr=c->r[0]; // 8004B91C
  c->r[1]=c->r[1]+0x00000050u; // 8004B920
  return; // 8004B924
}

// __ct__Q25Alice5ColorFUcUcUcUc
void f_8004B928(Ctx* __restrict c) {
  trace_call(0x8004B928u);
  W8(c->r[3]+0x00000000u,c->r[4]); // 8004B928
  W8(c->r[3]+0x00000001u,c->r[5]); // 8004B92C
  W8(c->r[3]+0x00000002u,c->r[6]); // 8004B930
  W8(c->r[3]+0x00000003u,c->r[7]); // 8004B934
  return; // 8004B938
}

// init__Q34gbla10GblaRankup7_resultFv
void f_8004B93C(Ctx* __restrict c) {
  trace_call(0x8004B93Cu);
  c->r[0]=0u+0x00000000u; // 8004B93C
  W8(c->r[3]+0x00000000u,c->r[0]); // 8004B940
  return; // 8004B944
}

// init__Q25Alice30Carrier<Q24gbla10GblaRankup,0>FPQ24gbla10GblaRankup
void f_8004B948(Ctx* __restrict c) {
  trace_call(0x8004B948u);
  c->r[3]=0u+0x802A0000u; // 8004B948
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004B94C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B950
  f_80019994(c); return; // 8004B954
}

// calc__Q25Alice30Carrier<Q24gbla10GblaRankup,0>FPQ24gbla10GblaRankup
void f_8004B958(Ctx* __restrict c) {
  trace_call(0x8004B958u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B958
  c->r[0]=c->lr; // 8004B95C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004B960
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004B964
  c->r[31]=c->r[3]|c->r[3]; // 8004B968
  c->r[4]=R32(c->r[3]+0x00000064u); // 8004B96C
  c->r[0]=R8(c->r[4]+0x0000007Cu); // 8004B970
  cmps(c,0,(int32_t)c->r[0],0); // 8004B974
  if (crb(c,2)) { goto L_8004B9CC; } // 8004B978
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 8004B97C
  c->lr=0x8004B984u; f_80019FBC(c); // 8004B980
  cmps(c,0,(int32_t)c->r[3],0); // 8004B984
  if (crb(c,2)) { goto L_8004B9CC; } // 8004B988
  c->r[3]=R32(c->r[31]+0x00000098u); // 8004B98C
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 8004B990
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004B994
  if (crb(c,1)) { goto L_8004B9B4; } // 8004B998
  cmps(c,0,(int32_t)c->r[0],10); // 8004B99C
  c->r[0]=0u+0x00000001u; // 8004B9A0
  W32(c->r[31]+0x00000058u,c->r[0]); // 8004B9A4
  if (crb(c,0)) { goto L_8004B9CC; } // 8004B9A8
  W8(c->r[31]+0x00000060u,c->r[0]); // 8004B9AC
  goto L_8004B9CC; // 8004B9B0
L_8004B9B4:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8004B9B4
  c->r[0]=0u+0x00000002u; // 8004B9B8
  W32(c->r[31]+0x00000058u,c->r[0]); // 8004B9BC
  if (crb(c,1)) { goto L_8004B9CC; } // 8004B9C0
  c->r[0]=0u+0x00000001u; // 8004B9C4
  W8(c->r[31]+0x00000060u,c->r[0]); // 8004B9C8
L_8004B9CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004B9CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004B9D0
  c->lr=c->r[0]; // 8004B9D4
  c->r[1]=c->r[1]+0x00000010u; // 8004B9D8
  return; // 8004B9DC
}

// draw__Q25Alice30Carrier<Q24gbla10GblaRankup,0>FPQ24gbla10GblaRankup
void f_8004B9E0(Ctx* __restrict c) {
  trace_call(0x8004B9E0u);
  return; // 8004B9E0
}

// term__Q25Alice30Carrier<Q24gbla10GblaRankup,0>FPQ24gbla10GblaRankup
void f_8004B9E4(Ctx* __restrict c) {
  trace_call(0x8004B9E4u);
  c->r[3]=0u+0x802A0000u; // 8004B9E4
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004B9E8
  c->r[3]=c->r[3]+0x00000027u; // 8004B9EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004B9F0
  f_80019994(c); return; // 8004B9F4
}

// init__Q25Alice30Carrier<Q24gbla10GblaRankup,1>FPQ24gbla10GblaRankup
void f_8004B9F8(Ctx* __restrict c) {
  trace_call(0x8004B9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004B9F8
  c->r[0]=c->lr; // 8004B9FC
  c->r[4]=0u+0x802A0000u; // 8004BA00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BA04
  c->r[4]=c->r[4]+0xFFFF9238u; // 8004BA08
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BA0C
  c->r[31]=c->r[3]|c->r[3]; // 8004BA10
  c->r[3]=c->r[4]+0x0000004Cu; // 8004BA14
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BA18
  c->lr=0x8004BA20u; f_80019994(c); // 8004BA1C
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004BA20
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[0]);} // 8004BA24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BA28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BA2C
  c->lr=c->r[0]; // 8004BA30
  c->r[1]=c->r[1]+0x00000010u; // 8004BA34
  return; // 8004BA38
}

// calc__Q25Alice30Carrier<Q24gbla10GblaRankup,1>FPQ24gbla10GblaRankup
void f_8004BA3C(Ctx* __restrict c) {
  trace_call(0x8004BA3Cu);
  c->r[4]=R32(c->r[3]+0x00000064u); // 8004BA3C
  c->r[0]=R8(c->r[4]+0x0000007Cu); // 8004BA40
  cmps(c,0,(int32_t)c->r[0],0); // 8004BA44
  if (crb(c,2)) return; // 8004BA48
  f_8004CA48(c); return; // 8004BA4C
  return; // 8004BA50
}

// draw__Q25Alice30Carrier<Q24gbla10GblaRankup,1>FPQ24gbla10GblaRankup
void f_8004BA54(Ctx* __restrict c) {
  trace_call(0x8004BA54u);
  return; // 8004BA54
}

// term__Q25Alice30Carrier<Q24gbla10GblaRankup,1>FPQ24gbla10GblaRankup
void f_8004BA58(Ctx* __restrict c) {
  trace_call(0x8004BA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BA58
  c->r[0]=c->lr; // 8004BA5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004BA60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004BA64
  c->r[31]=0u+0x00000000u; // 8004BA68
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004BA6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004BA70
  c->r[29]=c->r[3]+0x00000260u; // 8004BA74
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004BA78
  c->r[28]=c->r[3]|c->r[3]; // 8004BA7C
  c->r[30]=c->r[28]|c->r[28]; // 8004BA80
L_8004BA84:;
  c->r[3]=R32(c->r[28]+0x00000064u); // 8004BA84
  c->r[4]=R32(c->r[30]+0x00000250u); // 8004BA88
  c->lr=0x8004BA90u; f_80065994(c); // 8004BA8C
  c->r[4]=0u+0x00000000u; // 8004BA90
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004BA94
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004BA98
  c->r[7]=0u+0x00000000u; // 8004BA9C
  c->lr=0x8004BAA4u; f_800AD65C(c); // 8004BAA0
  c->r[4]=c->r[29]|c->r[29]; // 8004BAA4
  c->lr=0x8004BAACu; f_80069088(c); // 8004BAA8
  c->r[31]=c->r[31]+0x00000001u; // 8004BAAC
  c->r[29]=c->r[29]+0x00000008u; // 8004BAB0
  cmps(c,0,(int32_t)c->r[31],4); // 8004BAB4
  c->r[30]=c->r[30]+0x00000004u; // 8004BAB8
  if (crb(c,0)) { IRQCHK(c); goto L_8004BA84; } // 8004BABC
  c->r[3]=0u+0x802A0000u; // 8004BAC0
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004BAC4
  c->r[3]=c->r[3]+0x00000075u; // 8004BAC8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BACC
  c->lr=0x8004BAD4u; f_80019994(c); // 8004BAD0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004BAD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004BAD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004BADC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004BAE0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004BAE4
  c->lr=c->r[0]; // 8004BAE8
  c->r[1]=c->r[1]+0x00000020u; // 8004BAEC
  return; // 8004BAF0
}

// init__Q25Alice30Carrier<Q24gbla10GblaRankup,2>FPQ24gbla10GblaRankup
void f_8004BAF4(Ctx* __restrict c) {
  trace_call(0x8004BAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BAF4
  c->r[0]=c->lr; // 8004BAF8
  c->r[4]=0u+0x802A0000u; // 8004BAFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BB00
  c->r[4]=c->r[4]+0xFFFF9238u; // 8004BB04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BB08
  c->r[31]=c->r[3]|c->r[3]; // 8004BB0C
  c->r[3]=c->r[4]+0x0000009Cu; // 8004BB10
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BB14
  c->lr=0x8004BB1Cu; f_80019994(c); // 8004BB18
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004BB1C
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[0]);} // 8004BB20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BB24
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BB28
  c->lr=c->r[0]; // 8004BB2C
  c->r[1]=c->r[1]+0x00000010u; // 8004BB30
  return; // 8004BB34
}

// calc__Q25Alice30Carrier<Q24gbla10GblaRankup,2>FPQ24gbla10GblaRankup
void f_8004BB38(Ctx* __restrict c) {
  trace_call(0x8004BB38u);
  c->r[4]=R32(c->r[3]+0x00000064u); // 8004BB38
  c->r[0]=R8(c->r[4]+0x0000007Cu); // 8004BB3C
  cmps(c,0,(int32_t)c->r[0],0); // 8004BB40
  if (crb(c,2)) return; // 8004BB44
  f_8004D7A4(c); return; // 8004BB48
  return; // 8004BB4C
}

// draw__Q25Alice30Carrier<Q24gbla10GblaRankup,2>FPQ24gbla10GblaRankup
void f_8004BB50(Ctx* __restrict c) {
  trace_call(0x8004BB50u);
  return; // 8004BB50
}

// term__Q25Alice30Carrier<Q24gbla10GblaRankup,2>FPQ24gbla10GblaRankup
void f_8004BB54(Ctx* __restrict c) {
  trace_call(0x8004BB54u);
  c->r[3]=0u+0x802A0000u; // 8004BB54
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004BB58
  c->r[3]=c->r[3]+0x000000C7u; // 8004BB5C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BB60
  f_80019994(c); return; // 8004BB64
}

// init__Q25Alice30Carrier<Q24gbla10GblaRankup,3>FPQ24gbla10GblaRankup
void f_8004BB68(Ctx* __restrict c) {
  trace_call(0x8004BB68u);
  c->r[3]=0u+0x802A0000u; // 8004BB68
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004BB6C
  c->r[3]=c->r[3]+0x000000F0u; // 8004BB70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BB74
  f_80019994(c); return; // 8004BB78
}

// calc__Q25Alice30Carrier<Q24gbla10GblaRankup,3>FPQ24gbla10GblaRankup
void f_8004BB7C(Ctx* __restrict c) {
  trace_call(0x8004BB7Cu);
  c->r[4]=R32(c->r[3]+0x00000064u); // 8004BB7C
  c->r[0]=R8(c->r[4]+0x0000007Cu); // 8004BB80
  cmps(c,0,(int32_t)c->r[0],0); // 8004BB84
  if (crb(c,2)) return; // 8004BB88
  f_8004DD60(c); return; // 8004BB8C
  return; // 8004BB90
}

// draw__Q25Alice30Carrier<Q24gbla10GblaRankup,3>FPQ24gbla10GblaRankup
void f_8004BB94(Ctx* __restrict c) {
  trace_call(0x8004BB94u);
  return; // 8004BB94
}

// term__Q25Alice30Carrier<Q24gbla10GblaRankup,3>FPQ24gbla10GblaRankup
void f_8004BB98(Ctx* __restrict c) {
  trace_call(0x8004BB98u);
  c->r[3]=0u+0x802A0000u; // 8004BB98
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004BB9C
  c->r[3]=c->r[3]+0x0000011Cu; // 8004BBA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BBA4
  f_80019994(c); return; // 8004BBA8
}

// init__Q25Alice30Carrier<Q24gbla10GblaRankup,4>FPQ24gbla10GblaRankup
void f_8004BBAC(Ctx* __restrict c) {
  trace_call(0x8004BBACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BBAC
  c->r[0]=c->lr; // 8004BBB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BBB4
  c->r[4]=c->r[1]+0x00000008u; // 8004BBB8
  c->lr=0x8004BBC0u; f_8004E3B0(c); // 8004BBBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BBC0
  c->lr=c->r[0]; // 8004BBC4
  c->r[1]=c->r[1]+0x00000010u; // 8004BBC8
  return; // 8004BBCC
}

// calc__Q25Alice30Carrier<Q24gbla10GblaRankup,4>FPQ24gbla10GblaRankup
void f_8004BBD0(Ctx* __restrict c) {
  trace_call(0x8004BBD0u);
  c->r[0]=0u+0x00000001u; // 8004BBD0
  W8(c->r[3]+0x00000060u,c->r[0]); // 8004BBD4
  return; // 8004BBD8
}

// draw__Q25Alice30Carrier<Q24gbla10GblaRankup,4>FPQ24gbla10GblaRankup
void f_8004BBDC(Ctx* __restrict c) {
  trace_call(0x8004BBDCu);
  return; // 8004BBDC
}

// term__Q25Alice30Carrier<Q24gbla10GblaRankup,4>FPQ24gbla10GblaRankup
void f_8004BBE0(Ctx* __restrict c) {
  trace_call(0x8004BBE0u);
  c->r[3]=0u+0x802A0000u; // 8004BBE0
  c->r[3]=c->r[3]+0xFFFF9238u; // 8004BBE4
  c->r[3]=c->r[3]+0x00000146u; // 8004BBE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BBEC
  f_80019994(c); return; // 8004BBF0
}

// __dt__Q24Sega23Array<PQ25Alice6Sprite>Fv
void f_8004BBF4(Ctx* __restrict c) {
  trace_call(0x8004BBF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BBF4
  c->r[0]=c->lr; // 8004BBF8
  cmps(c,0,(int32_t)c->r[3],0); // 8004BBFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BC00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BC04
  c->r[31]=c->r[4]|c->r[4]; // 8004BC08
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004BC0C
  c->r[30]=c->r[3]|c->r[3]; // 8004BC10
  if (crb(c,2)) { goto L_8004BC40; } // 8004BC14
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004BC18
  c->lr=0x8004BC20u; f_80210AFC(c); // 8004BC1C
  cmps(c,0,(int32_t)c->r[31],0); // 8004BC20
  c->r[0]=0u+0x00000000u; // 8004BC24
  W32(c->r[30]+0x00000000u,c->r[0]); // 8004BC28
  W32(c->r[30]+0x00000004u,c->r[0]); // 8004BC2C
  W32(c->r[30]+0x00000008u,c->r[0]); // 8004BC30
  if (!crb(c,1)) { goto L_8004BC40; } // 8004BC34
  c->r[3]=c->r[30]|c->r[30]; // 8004BC38
  c->lr=0x8004BC40u; f_80210AFC(c); // 8004BC3C
L_8004BC40:;
  c->r[3]=c->r[30]|c->r[30]; // 8004BC40
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BC44
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004BC48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BC4C
  c->lr=c->r[0]; // 8004BC50
  c->r[1]=c->r[1]+0x00000010u; // 8004BC54
  return; // 8004BC58
}

// clear__Q24Sega23Array<PQ25Alice6Sprite>Fv
void f_8004BC5C(Ctx* __restrict c) {
  trace_call(0x8004BC5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BC5C
  c->r[0]=c->lr; // 8004BC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004BC64
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004BC68
  c->r[31]=c->r[3]|c->r[3]; // 8004BC6C
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004BC70
  c->lr=0x8004BC78u; f_80210AFC(c); // 8004BC74
  c->r[0]=0u+0x00000000u; // 8004BC78
  W32(c->r[31]+0x00000000u,c->r[0]); // 8004BC7C
  W32(c->r[31]+0x00000004u,c->r[0]); // 8004BC80
  W32(c->r[31]+0x00000008u,c->r[0]); // 8004BC84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004BC88
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004BC8C
  c->lr=c->r[0]; // 8004BC90
  c->r[1]=c->r[1]+0x00000010u; // 8004BC94
  return; // 8004BC98
}

// __dt__Q24gbla10GblaRankupFv
void f_8004BC9C(Ctx* __restrict c) {
  trace_call(0x8004BC9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BC9C
  c->r[0]=c->lr; // 8004BCA0
  cmps(c,0,(int32_t)c->r[3],0); // 8004BCA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004BCA8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004BCAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004BCB0
  c->r[30]=c->r[4]|c->r[4]; // 8004BCB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004BCB8
  c->r[29]=c->r[3]|c->r[3]; // 8004BCBC
  if (crb(c,2)) { goto L_8004BD9C; } // 8004BCC0
  c->r[31]=0u+0x00000000u; // 8004BCC4
  c->r[0]=0u+0xFFFFFFFFu; // 8004BCC8
  W32(c->r[3]+0x0000005Cu,c->r[31]); // 8004BCCC
  W8(c->r[3]+0x00000060u,c->r[31]); // 8004BCD0
  W32(c->r[3]+0x00000064u,c->r[31]); // 8004BCD4
  W32(c->r[3]+0x00000068u,c->r[31]); // 8004BCD8
  W8(c->r[3]+0x0000006Cu,c->r[31]); // 8004BCDC
  W8(c->r[3]+0x0000006Du,c->r[31]); // 8004BCE0
  W32(c->r[3]+0x0000008Cu,c->r[0]); // 8004BCE4
  W32(c->r[3]+0x00000090u,c->r[0]); // 8004BCE8
  W32(c->r[3]+0x00000094u,c->r[31]); // 8004BCEC
  W32(c->r[3]+0x00000098u,c->r[0]); // 8004BCF0
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 8004BCF4
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8004BCF8
  W32(c->r[3]+0x000000A4u,c->r[0]); // 8004BCFC
  c->r[3]=R32(c->r[3]+0x000000B8u); // 8004BD00
  c->lr=0x8004BD08u; f_80210AFC(c); // 8004BD04
  W32(c->r[29]+0x000000B8u,c->r[31]); // 8004BD08
  c->r[3]=c->r[29]+0x000000C4u; // 8004BD0C
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004BD10
  c->r[4]=0u+0xFFFFFFFFu; // 8004BD14
  W32(c->r[29]+0x000000BCu,c->r[31]); // 8004BD18
  W32(c->r[29]+0x000000C0u,c->r[31]); // 8004BD1C
  W8(c->r[29]+0x0000021Cu,c->r[31]); // 8004BD20
  W8(c->r[29]+0x0000021Du,c->r[31]); // 8004BD24
  W8(c->r[29]+0x0000021Eu,c->r[31]); // 8004BD28
  W8(c->r[29]+0x0000021Fu,c->r[31]); // 8004BD2C
  W8(c->r[29]+0x00000220u,c->r[31]); // 8004BD30
  W8(c->r[29]+0x00000221u,c->r[31]); // 8004BD34
  W8(c->r[29]+0x00000222u,c->r[31]); // 8004BD38
  W8(c->r[29]+0x00000223u,c->r[31]); // 8004BD3C
  W8(c->r[29]+0x00000224u,c->r[31]); // 8004BD40
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 8004BD44
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 8004BD48
  {uint32_t ea=c->r[29]+0x00000248u; WF32(ea,c->f[0]);} // 8004BD4C
  {uint32_t ea=c->r[29]+0x0000024Cu; WF32(ea,c->f[0]);} // 8004BD50
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[0]);} // 8004BD54
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[0]);} // 8004BD58
  {uint32_t ea=c->r[29]+0x00000280u; WF32(ea,c->f[0]);} // 8004BD5C
  c->lr=0x8004BD64u; f_8005AF80(c); // 8004BD60
  c->r[0]=addc(c,c->r[29],0x000000B8u,0); cr0(c,c->r[0]); // 8004BD64
  if (crb(c,2)) { goto L_8004BD80; } // 8004BD68
  c->r[3]=R32(c->r[29]+0x000000B8u); // 8004BD6C
  c->lr=0x8004BD74u; f_80210AFC(c); // 8004BD70
  W32(c->r[29]+0x000000B8u,c->r[31]); // 8004BD74
  W32(c->r[29]+0x000000BCu,c->r[31]); // 8004BD78
  W32(c->r[29]+0x000000C0u,c->r[31]); // 8004BD7C
L_8004BD80:;
  c->r[3]=c->r[29]+0x00000070u; // 8004BD80
  c->r[4]=0u+0xFFFFFFFFu; // 8004BD84
  c->lr=0x8004BD8Cu; f_80039408(c); // 8004BD88
  cmps(c,0,(int32_t)c->r[30],0); // 8004BD8C
  if (!crb(c,1)) { goto L_8004BD9C; } // 8004BD90
  c->r[3]=c->r[29]|c->r[29]; // 8004BD94
  c->lr=0x8004BD9Cu; f_80210AFC(c); // 8004BD98
L_8004BD9C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004BD9C
  c->r[3]=c->r[29]|c->r[29]; // 8004BDA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004BDA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004BDA8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004BDAC
  c->lr=c->r[0]; // 8004BDB0
  c->r[1]=c->r[1]+0x00000020u; // 8004BDB4
  return; // 8004BDB8
}

// init__Q24gbla10GblaRankupFRCQ34gbla10GblaRankup11_init_param
void f_8004BDBC(Ctx* __restrict c) {
  trace_call(0x8004BDBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004BDBC
  c->r[0]=c->lr; // 8004BDC0
  W32(c->r[1]+0x00000044u,c->r[0]); // 8004BDC4
  c->r[11]=c->r[1]+0x00000040u; // 8004BDC8
  c->lr=0x8004BDD0u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8004BDCC
  c->r[28]=0u+0x00000000u; // 8004BDD0
  W32(c->r[3]+0x0000005Cu,c->r[28]); // 8004BDD4
  c->r[31]=c->r[3]|c->r[3]; // 8004BDD8
  c->r[25]=c->r[4]|c->r[4]; // 8004BDDC
  c->r[3]=c->r[3]+0x00000060u; // 8004BDE0
  c->lr=0x8004BDE8u; f_8004B93C(c); // 8004BDE4
  c->r[8]=R32(c->r[25]+0x00000000u); // 8004BDE8
  c->r[0]=0u+0xFFFFFFFFu; // 8004BDEC
  c->r[7]=R32(c->r[25]+0x00000004u); // 8004BDF0
  c->r[3]=c->r[31]|c->r[31]; // 8004BDF4
  c->r[6]=R32(c->r[25]+0x00000008u); // 8004BDF8
  c->r[4]=0u+0x00000000u; // 8004BDFC
  c->r[5]=R32(c->r[25]+0x0000000Cu); // 8004BE00
  W32(c->r[31]+0x00000068u,c->r[8]); // 8004BE04
  W32(c->r[31]+0x00000098u,c->r[7]); // 8004BE08
  W32(c->r[31]+0x0000009Cu,c->r[6]); // 8004BE0C
  W32(c->r[31]+0x000000A4u,c->r[5]); // 8004BE10
  W32(c->r[31]+0x000000A0u,c->r[0]); // 8004BE14
  W32(c->r[31]+0x0000008Cu,c->r[0]); // 8004BE18
  W32(c->r[31]+0x00000090u,c->r[0]); // 8004BE1C
  W32(c->r[31]+0x00000094u,c->r[28]); // 8004BE20
  c->lr=0x8004BE28u; f_8004C3A8(c); // 8004BE24
  c->r[3]=0u+0x00000001u; // 8004BE28
  c->lr=0x8004BE30u; f_8003159C(c); // 8004BE2C
  cmps(c,0,(int32_t)c->r[3],0); // 8004BE30
  W32(c->r[31]+0x00000064u,c->r[3]); // 8004BE34
  if (crb(c,2)) { goto L_8004C37C; } // 8004BE38
  W8(c->r[31]+0x0000006Cu,c->r[28]); // 8004BE3C
  c->r[3]=c->r[31]+0x00000070u; // 8004BE40
  W8(c->r[31]+0x0000006Du,c->r[28]); // 8004BE44
  c->lr=0x8004BE4Cu; f_8003946C(c); // 8004BE48
  c->lr=0x8004BE50u; f_800228E8(c); // 8004BE4C
  c->lr=0x8004BE54u; f_80073FFC(c); // 8004BE50
  c->r[3]=c->r[31]+0x000000B8u; // 8004BE54
  c->lr=0x8004BE5Cu; f_8004BC5C(c); // 8004BE58
  c->r[4]=0u+0x802A0000u; // 8004BE5C
  c->r[3]=c->r[31]+0x0000021Cu; // 8004BE60
  c->r[4]=c->r[4]+0xFFFF9238u; // 8004BE64
  c->r[5]=c->r[25]+0x00000010u; // 8004BE68
  c->r[4]=c->r[4]+0x0000016Au; // 8004BE6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004BE70
  c->lr=0x8004BE78u; f_800B5FD4(c); // 8004BE74
  c->r[3]=0u+0x00000820u; // 8004BE78
  c->lr=0x8004BE80u; f_80022B5C(c); // 8004BE7C
  c->r[5]=c->r[3]|c->r[3]; // 8004BE80
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BE84
  c->r[4]=0u+0x00000001u; // 8004BE88
  c->lr=0x8004BE90u; f_80065E40(c); // 8004BE8C
  c->r[3]=0u+0x00000821u; // 8004BE90
  c->lr=0x8004BE98u; f_80022B5C(c); // 8004BE94
  c->r[5]=c->r[3]|c->r[3]; // 8004BE98
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BE9C
  c->r[4]=0u+0x00000001u; // 8004BEA0
  c->lr=0x8004BEA8u; f_80065E40(c); // 8004BEA4
  c->r[3]=0u+0x00000822u; // 8004BEA8
  c->lr=0x8004BEB0u; f_80022B5C(c); // 8004BEAC
  c->r[5]=c->r[3]|c->r[3]; // 8004BEB0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BEB4
  c->r[4]=0u+0x00000001u; // 8004BEB8
  c->lr=0x8004BEC0u; f_80065E40(c); // 8004BEBC
  c->r[3]=0u+0x0000082Du; // 8004BEC0
  c->lr=0x8004BEC8u; f_80022B5C(c); // 8004BEC4
  c->r[5]=c->r[3]|c->r[3]; // 8004BEC8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BECC
  c->r[4]=0u+0x00000001u; // 8004BED0
  c->lr=0x8004BED8u; f_80065E40(c); // 8004BED4
  c->r[3]=0u+0x0000082Eu; // 8004BED8
  c->lr=0x8004BEE0u; f_80022B5C(c); // 8004BEDC
  c->r[5]=c->r[3]|c->r[3]; // 8004BEE0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BEE4
  c->r[4]=0u+0x00000001u; // 8004BEE8
  c->lr=0x8004BEF0u; f_80065E40(c); // 8004BEEC
  c->r[3]=0u+0x0000082Fu; // 8004BEF0
  c->lr=0x8004BEF8u; f_80022B5C(c); // 8004BEF4
  c->r[5]=c->r[3]|c->r[3]; // 8004BEF8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BEFC
  c->r[4]=0u+0x00000001u; // 8004BF00
  c->lr=0x8004BF08u; f_80065E40(c); // 8004BF04
  c->r[3]=0u+0x00000830u; // 8004BF08
  c->lr=0x8004BF10u; f_80022B5C(c); // 8004BF0C
  c->r[5]=c->r[3]|c->r[3]; // 8004BF10
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BF14
  c->r[4]=0u+0x00000001u; // 8004BF18
  c->lr=0x8004BF20u; f_80065E40(c); // 8004BF1C
  c->r[3]=0u+0x00000831u; // 8004BF20
  c->lr=0x8004BF28u; f_80022B5C(c); // 8004BF24
  c->r[5]=c->r[3]|c->r[3]; // 8004BF28
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BF2C
  c->r[4]=0u+0x00000001u; // 8004BF30
  c->lr=0x8004BF38u; f_80065E40(c); // 8004BF34
  c->r[3]=0u+0x00000832u; // 8004BF38
  c->lr=0x8004BF40u; f_80022B5C(c); // 8004BF3C
  c->r[5]=c->r[3]|c->r[3]; // 8004BF40
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BF44
  c->r[4]=0u+0x00000001u; // 8004BF48
  c->lr=0x8004BF50u; f_80065E40(c); // 8004BF4C
  c->r[3]=0u+0x00000833u; // 8004BF50
  c->lr=0x8004BF58u; f_80022B5C(c); // 8004BF54
  c->r[5]=c->r[3]|c->r[3]; // 8004BF58
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BF5C
  c->r[4]=0u+0x00000001u; // 8004BF60
  c->lr=0x8004BF68u; f_80065E40(c); // 8004BF64
  c->r[3]=0u+0x00000834u; // 8004BF68
  c->lr=0x8004BF70u; f_80022B5C(c); // 8004BF6C
  c->r[5]=c->r[3]|c->r[3]; // 8004BF70
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BF74
  c->r[4]=0u+0x00000001u; // 8004BF78
  c->lr=0x8004BF80u; f_80065E40(c); // 8004BF7C
  c->r[3]=0u+0x00000835u; // 8004BF80
  c->lr=0x8004BF88u; f_80022B5C(c); // 8004BF84
  c->r[5]=c->r[3]|c->r[3]; // 8004BF88
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BF8C
  c->r[4]=0u+0x00000001u; // 8004BF90
  c->lr=0x8004BF98u; f_80065E40(c); // 8004BF94
  c->r[3]=0u+0x00000836u; // 8004BF98
  c->lr=0x8004BFA0u; f_80022B5C(c); // 8004BF9C
  c->r[5]=c->r[3]|c->r[3]; // 8004BFA0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BFA4
  c->r[4]=0u+0x00000001u; // 8004BFA8
  c->lr=0x8004BFB0u; f_80065E40(c); // 8004BFAC
  c->r[3]=0u+0x00000819u; // 8004BFB0
  c->lr=0x8004BFB8u; f_80022B5C(c); // 8004BFB4
  c->r[5]=c->r[3]|c->r[3]; // 8004BFB8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BFBC
  c->r[4]=0u+0x00000001u; // 8004BFC0
  c->lr=0x8004BFC8u; f_80065E40(c); // 8004BFC4
  c->r[3]=0u+0x0000081Au; // 8004BFC8
  c->lr=0x8004BFD0u; f_80022B5C(c); // 8004BFCC
  c->r[5]=c->r[3]|c->r[3]; // 8004BFD0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BFD4
  c->r[4]=0u+0x00000001u; // 8004BFD8
  c->lr=0x8004BFE0u; f_80065E40(c); // 8004BFDC
  c->r[3]=0u+0x0000081Bu; // 8004BFE0
  c->lr=0x8004BFE8u; f_80022B5C(c); // 8004BFE4
  c->r[5]=c->r[3]|c->r[3]; // 8004BFE8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004BFEC
  c->r[4]=0u+0x00000001u; // 8004BFF0
  c->lr=0x8004BFF8u; f_80065E40(c); // 8004BFF4
  c->r[3]=0u+0x0000081Cu; // 8004BFF8
  c->lr=0x8004C000u; f_80022B5C(c); // 8004BFFC
  c->r[5]=c->r[3]|c->r[3]; // 8004C000
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C004
  c->r[4]=0u+0x00000001u; // 8004C008
  c->lr=0x8004C010u; f_80065E40(c); // 8004C00C
  c->r[3]=0u+0x0000081Du; // 8004C010
  c->lr=0x8004C018u; f_80022B5C(c); // 8004C014
  c->r[5]=c->r[3]|c->r[3]; // 8004C018
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C01C
  c->r[4]=0u+0x00000001u; // 8004C020
  c->lr=0x8004C028u; f_80065E40(c); // 8004C024
  c->r[3]=0u+0x0000081Eu; // 8004C028
  c->lr=0x8004C030u; f_80022B5C(c); // 8004C02C
  c->r[5]=c->r[3]|c->r[3]; // 8004C030
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C034
  c->r[4]=0u+0x00000001u; // 8004C038
  c->lr=0x8004C040u; f_80065E40(c); // 8004C03C
  c->r[3]=0u+0x0000081Fu; // 8004C040
  c->lr=0x8004C048u; f_80022B5C(c); // 8004C044
  c->r[5]=c->r[3]|c->r[3]; // 8004C048
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C04C
  c->r[4]=0u+0x00000001u; // 8004C050
  c->lr=0x8004C058u; f_80065E40(c); // 8004C054
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C058
  c->r[4]=0u+0x00000001u; // 8004C05C
  c->r[5]=0u+0x00000792u; // 8004C060
  c->lr=0x8004C068u; f_80065E40(c); // 8004C064
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C068
  c->r[4]=0u+0x00000001u; // 8004C06C
  c->r[5]=0u+0x00000791u; // 8004C070
  c->lr=0x8004C078u; f_80065E40(c); // 8004C074
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C078
  c->r[4]=0u+0x00000001u; // 8004C07C
  c->r[5]=0u+0x0000079Cu; // 8004C080
  c->lr=0x8004C088u; f_80065E40(c); // 8004C084
  c->r[3]=0u+0x0000082Cu; // 8004C088
  c->lr=0x8004C090u; f_80022B5C(c); // 8004C08C
  c->r[5]=c->r[3]|c->r[3]; // 8004C090
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C094
  c->r[4]=0u+0x00000001u; // 8004C098
  c->lr=0x8004C0A0u; f_80065E40(c); // 8004C09C
  c->r[3]=0u+0x0000082Bu; // 8004C0A0
  c->lr=0x8004C0A8u; f_80022B5C(c); // 8004C0A4
  c->r[5]=c->r[3]|c->r[3]; // 8004C0A8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C0AC
  c->r[4]=0u+0x00000001u; // 8004C0B0
  c->lr=0x8004C0B8u; f_80065E40(c); // 8004C0B4
  c->r[3]=0u+0x0000082Au; // 8004C0B8
  c->lr=0x8004C0C0u; f_80022B5C(c); // 8004C0BC
  c->r[5]=c->r[3]|c->r[3]; // 8004C0C0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C0C4
  c->r[4]=0u+0x00000001u; // 8004C0C8
  c->lr=0x8004C0D0u; f_80065E40(c); // 8004C0CC
  c->r[3]=0u+0x00000829u; // 8004C0D0
  c->lr=0x8004C0D8u; f_80022B5C(c); // 8004C0D4
  c->r[5]=c->r[3]|c->r[3]; // 8004C0D8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C0DC
  c->r[4]=0u+0x00000001u; // 8004C0E0
  c->lr=0x8004C0E8u; f_80065E40(c); // 8004C0E4
  c->r[3]=0u+0x00000828u; // 8004C0E8
  c->lr=0x8004C0F0u; f_80022B5C(c); // 8004C0EC
  c->r[5]=c->r[3]|c->r[3]; // 8004C0F0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C0F4
  c->r[4]=0u+0x00000001u; // 8004C0F8
  c->lr=0x8004C100u; f_80065E40(c); // 8004C0FC
  c->r[3]=0u+0x00000827u; // 8004C100
  c->lr=0x8004C108u; f_80022B5C(c); // 8004C104
  c->r[5]=c->r[3]|c->r[3]; // 8004C108
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C10C
  c->r[4]=0u+0x00000001u; // 8004C110
  c->lr=0x8004C118u; f_80065E40(c); // 8004C114
  c->r[3]=0u+0x00000826u; // 8004C118
  c->lr=0x8004C120u; f_80022B5C(c); // 8004C11C
  c->r[5]=c->r[3]|c->r[3]; // 8004C120
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C124
  c->r[4]=0u+0x00000001u; // 8004C128
  c->lr=0x8004C130u; f_80065E40(c); // 8004C12C
  c->r[3]=0u+0x00000825u; // 8004C130
  c->lr=0x8004C138u; f_80022B5C(c); // 8004C134
  c->r[5]=c->r[3]|c->r[3]; // 8004C138
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C13C
  c->r[4]=0u+0x00000001u; // 8004C140
  c->lr=0x8004C148u; f_80065E40(c); // 8004C144
  c->r[3]=0u+0x00000824u; // 8004C148
  c->lr=0x8004C150u; f_80022B5C(c); // 8004C14C
  c->r[5]=c->r[3]|c->r[3]; // 8004C150
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C154
  c->r[4]=0u+0x00000001u; // 8004C158
  c->lr=0x8004C160u; f_80065E40(c); // 8004C15C
  c->r[3]=0u+0x00000823u; // 8004C160
  c->lr=0x8004C168u; f_80022B5C(c); // 8004C164
  c->r[5]=c->r[3]|c->r[3]; // 8004C168
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C16C
  c->r[4]=0u+0x00000001u; // 8004C170
  c->lr=0x8004C178u; f_80065E40(c); // 8004C174
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C178
  c->r[4]=0u+0x00000001u; // 8004C17C
  c->r[5]=0u+0x00000793u; // 8004C180
  c->lr=0x8004C188u; f_80065E40(c); // 8004C184
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C188
  c->r[4]=0u+0x00000001u; // 8004C18C
  c->r[5]=0u+0x00000000u; // 8004C190
  c->lr=0x8004C198u; f_800663F0(c); // 8004C194
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C198
  c->r[4]=0u+0x00000001u; // 8004C19C
  c->r[5]=0u+0x000000FFu; // 8004C1A0
  c->lr=0x8004C1A8u; f_80066AB8(c); // 8004C1A4
  {uint32_t ea=c->r[2]+0xFFFF81CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C1A8
  c->r[3]=c->r[1]+0x00000018u; // 8004C1AC
  c->f[2]=c->f[1]; // 8004C1B0
  c->lr=0x8004C1B8u; f_8003A1B0(c); // 8004C1B4
  c->r[5]=c->r[3]|c->r[3]; // 8004C1B8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C1BC
  c->r[4]=0u+0x00000001u; // 8004C1C0
  c->lr=0x8004C1C8u; f_80066FB8(c); // 8004C1C4
  c->r[3]=c->r[31]+0x000000C4u; // 8004C1C8
  c->r[4]=0u+0x00000000u; // 8004C1CC
  c->lr=0x8004C1D4u; f_8005B198(c); // 8004C1D0
  c->r[3]=c->r[1]+0x00000008u; // 8004C1D4
  c->r[4]=0u+0x00000000u; // 8004C1D8
  c->r[5]=0u+0x00000000u; // 8004C1DC
  c->r[6]=0u+0x00000000u; // 8004C1E0
  c->r[7]=0u+0x000000FFu; // 8004C1E4
  c->lr=0x8004C1ECu; f_8004B928(c); // 8004C1E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 8004C1EC
  c->r[3]=c->r[1]+0x0000000Cu; // 8004C1F0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8004C1F4
  c->lr=0x8004C1FCu; f_8006BBFC(c); // 8004C1F8
  c->r[27]=c->r[31]|c->r[31]; // 8004C1FC
  c->r[26]=c->r[31]+0x00000238u; // 8004C200
  c->r[25]=0u+0x00000000u; // 8004C204
  c->r[30]=0u+0x00000793u; // 8004C208
  c->r[29]=0u+0x00000791u; // 8004C20C
  c->r[28]=0u+0x00000792u; // 8004C210
L_8004C214:;
  cmps(c,0,(int32_t)c->r[25],0); // 8004C214
  if (!crb(c,2)) { goto L_8004C224; } // 8004C218
  W32(c->r[27]+0x00000228u,c->r[28]); // 8004C21C
  goto L_8004C264; // 8004C220
L_8004C224:;
  cmps(c,0,(int32_t)c->r[25],1); // 8004C224
  if (!crb(c,2)) { goto L_8004C234; } // 8004C228
  W32(c->r[27]+0x00000228u,c->r[29]); // 8004C22C
  goto L_8004C264; // 8004C230
L_8004C234:;
  cmps(c,0,(int32_t)c->r[25],2); // 8004C234
  if (!crb(c,2)) { goto L_8004C244; } // 8004C238
  W32(c->r[27]+0x00000228u,c->r[30]); // 8004C23C
  goto L_8004C264; // 8004C240
L_8004C244:;
  cmps(c,0,(int32_t)c->r[25],3); // 8004C244
  if (!crb(c,2)) { goto L_8004C264; } // 8004C248
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004C24C
  cmps(c,0,(int32_t)c->r[4],0); // 8004C250
  if (crb(c,0)) { goto L_8004C294; } // 8004C254
  c->r[3]=c->r[31]|c->r[31]; // 8004C258
  c->lr=0x8004C260u; f_8004C5E8(c); // 8004C25C
  W32(c->r[27]+0x00000228u,c->r[3]); // 8004C260
L_8004C264:;
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C264
  c->r[4]=R32(c->r[27]+0x00000228u); // 8004C268
  c->lr=0x8004C270u; f_80065994(c); // 8004C26C
  c->lr=0x8004C274u; f_8004C3A0(c); // 8004C270
  c->r[4]=c->r[3]|c->r[3]; // 8004C274
  c->r[3]=c->r[26]|c->r[26]; // 8004C278
  c->lr=0x8004C280u; f_8004C394(c); // 8004C27C
  c->r[25]=c->r[25]+0x00000001u; // 8004C280
  c->r[26]=c->r[26]+0x00000004u; // 8004C284
  cmps(c,0,(int32_t)c->r[25],4); // 8004C288
  c->r[27]=c->r[27]+0x00000004u; // 8004C28C
  if (crb(c,0)) { IRQCHK(c); goto L_8004C214; } // 8004C290
L_8004C294:;
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C294
  c->r[3]=c->r[1]+0x00000010u; // 8004C298
  c->f[2]=c->f[1]; // 8004C29C
  c->lr=0x8004C2A4u; f_8003A1B0(c); // 8004C2A0
  c->r[4]=c->r[3]|c->r[3]; // 8004C2A4
  c->r[3]=c->r[31]+0x00000248u; // 8004C2A8
  c->lr=0x8004C2B0u; f_8003A19C(c); // 8004C2AC
  c->r[3]=0u+0x00000820u; // 8004C2B0
  c->lr=0x8004C2B8u; f_80022B5C(c); // 8004C2B4
  c->r[4]=c->r[3]|c->r[3]; // 8004C2B8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C2BC
  c->lr=0x8004C2C4u; f_80065994(c); // 8004C2C0
  c->r[4]=0u+0x00000000u; // 8004C2C4
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004C2C8
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004C2CC
  c->r[7]=0u+0x00000000u; // 8004C2D0
  c->lr=0x8004C2D8u; f_800AD65C(c); // 8004C2D4
  c->lr=0x8004C2DCu; f_80069198(c); // 8004C2D8
  c->r[4]=c->r[3]|c->r[3]; // 8004C2DC
  c->r[3]=c->r[31]+0x00000248u; // 8004C2E0
  c->lr=0x8004C2E8u; f_8003A19C(c); // 8004C2E4
  c->r[0]=0u+0x0000079Cu; // 8004C2E8
  W32(c->r[31]+0x00000250u,c->r[0]); // 8004C2EC
  c->r[3]=0u+0x00000822u; // 8004C2F0
  c->lr=0x8004C2F8u; f_80022B5C(c); // 8004C2F4
  W32(c->r[31]+0x00000254u,c->r[3]); // 8004C2F8
  c->r[3]=c->r[31]|c->r[31]; // 8004C2FC
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004C300
  c->lr=0x8004C308u; f_8004C5E8(c); // 8004C304
  W32(c->r[31]+0x00000258u,c->r[3]); // 8004C308
  c->r[3]=c->r[31]|c->r[31]; // 8004C30C
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004C310
  c->lr=0x8004C318u; f_8004C658(c); // 8004C314
  W32(c->r[31]+0x0000025Cu,c->r[3]); // 8004C318
  c->r[28]=c->r[31]|c->r[31]; // 8004C31C
  c->r[29]=c->r[31]+0x00000260u; // 8004C320
  c->r[25]=0u+0x00000000u; // 8004C324
L_8004C328:;
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004C328
  c->r[4]=R32(c->r[28]+0x00000250u); // 8004C32C
  c->lr=0x8004C334u; f_80065994(c); // 8004C330
  c->r[4]=0u+0x00000000u; // 8004C334
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004C338
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004C33C
  c->r[7]=0u+0x00000000u; // 8004C340
  c->lr=0x8004C348u; f_800AD65C(c); // 8004C344
  c->lr=0x8004C34Cu; f_80069198(c); // 8004C348
  c->r[4]=c->r[3]|c->r[3]; // 8004C34C
  c->r[3]=c->r[29]|c->r[29]; // 8004C350
  c->lr=0x8004C358u; f_8003A19C(c); // 8004C354
  c->r[25]=c->r[25]+0x00000001u; // 8004C358
  c->r[29]=c->r[29]+0x00000008u; // 8004C35C
  cmps(c,0,(int32_t)c->r[25],4); // 8004C360
  c->r[28]=c->r[28]+0x00000004u; // 8004C364
  if (crb(c,0)) { IRQCHK(c); goto L_8004C328; } // 8004C368
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C36C
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8004C370
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8004C374
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[0]);} // 8004C378
L_8004C37C:;
  c->r[11]=c->r[1]+0x00000040u; // 8004C37C
  c->lr=0x8004C384u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8004C380
  c->r[0]=R32(c->r[1]+0x00000044u); // 8004C384
  c->lr=c->r[0]; // 8004C388
  c->r[1]=c->r[1]+0x00000040u; // 8004C38C
  return; // 8004C390
}

// __as__Q25Alice5ColorFRCQ25Alice5Color
void f_8004C394(Ctx* __restrict c) {
  trace_call(0x8004C394u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C394
  W32(c->r[3]+0x00000000u,c->r[0]); // 8004C398
  return; // 8004C39C
}

// getColor__Q25Alice6SpriteCFv
void f_8004C3A0(Ctx* __restrict c) {
  trace_call(0x8004C3A0u);
  c->r[3]=c->r[3]+0x00000144u; // 8004C3A0
  return; // 8004C3A4
}

// __as__Q25Alice27Mode<Q24gbla10GblaRankup,5>Fi
void f_8004C3A8(Ctx* __restrict c) {
  trace_call(0x8004C3A8u);
  W32(c->r[3]+0x00000058u,c->r[4]); // 8004C3A8
  c->r[3]=c->r[4]|c->r[4]; // 8004C3AC
  return; // 8004C3B0
}

// proc__Q24gbla10GblaRankupFv
void f_8004C3B4(Ctx* __restrict c) {
  trace_call(0x8004C3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C3B4
  c->r[0]=c->lr; // 8004C3B8
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004C3BC
  {uint32_t ea=c->r[1]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004C3C0
  c->r[31]=c->r[1]|c->r[1]; // 8004C3C4
  c->r[30]=c->r[3]|c->r[3]; // 8004C3C8
  c->r[0]=R32(c->r[3]+0x00000064u); // 8004C3CC
  cmps(c,0,(int32_t)c->r[0],0); // 8004C3D0
  if (crb(c,2)) { goto L_8004C5CC; } // 8004C3D4
  c->r[3]=c->r[0]|c->r[0]; // 8004C3D8
  c->r[4]=0u+0x00000001u; // 8004C3DC
  c->r[5]=0u+0x00000000u; // 8004C3E0
  c->lr=0x8004C3E8u; f_800663F0(c); // 8004C3E4
  c->r[3]=c->r[30]+0x000000C4u; // 8004C3E8
  c->lr=0x8004C3F0u; f_8005B794(c); // 8004C3EC
  goto L_8004C45C; // 8004C3F0
L_8004C3F4:;
  cmps(c,0,(int32_t)c->r[3],-1); // 8004C3F4
  if (crb(c,2)) { goto L_8004C428; } // 8004C3F8
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8004C3FC
  c->r[3]=c->r[30]|c->r[30]; // 8004C400
  c->r[4]=c->r[30]+c->r[0]; // 8004C404
  c->r[12]=R32(c->r[4]+0x00000008u); // 8004C408
  c->ctr=c->r[12]; // 8004C40C
  if (true) { c->lr=0x8004C414u; dispatch(c,c->ctr); } // 8004C410
  c->r[3]=R32(c->r[30]+0x00000054u); // 8004C414
  c->r[0]=R32(c->r[30]+0x00000058u); // 8004C418
  W32(c->r[30]+0x00000050u,c->r[3]); // 8004C41C
  W32(c->r[30]+0x00000054u,c->r[0]); // 8004C420
  goto L_8004C438; // 8004C424
L_8004C428:;
  c->r[0]=R32(c->r[30]+0x00000058u); // 8004C428
  c->r[3]=0u+0xFFFFFFFFu; // 8004C42C
  W32(c->r[30]+0x00000050u,c->r[3]); // 8004C430
  W32(c->r[30]+0x00000054u,c->r[0]); // 8004C434
L_8004C438:;
  c->r[0]=R32(c->r[30]+0x00000054u); // 8004C438
  cmps(c,0,(int32_t)c->r[0],-1); // 8004C43C
  if (crb(c,2)) { goto L_8004C45C; } // 8004C440
  W32(c->r[30]+0x00000050u,c->r[0]); // 8004C444
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8004C448
  c->r[3]=c->r[30]|c->r[30]; // 8004C44C
  c->r[12]=R32(c->r[30]+c->r[0]); // 8004C450
  c->ctr=c->r[12]; // 8004C454
  if (true) { c->lr=0x8004C45Cu; dispatch(c,c->ctr); } // 8004C458
L_8004C45C:;
  c->r[3]=R32(c->r[30]+0x00000054u); // 8004C45C
  c->r[0]=R32(c->r[30]+0x00000058u); // 8004C460
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004C464
  if (!crb(c,2)) { IRQCHK(c); goto L_8004C3F4; } // 8004C468
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8004C46C
  c->r[3]=c->r[30]|c->r[30]; // 8004C470
  c->r[4]=c->r[30]+c->r[0]; // 8004C474
  c->r[12]=R32(c->r[4]+0x00000004u); // 8004C478
  c->ctr=c->r[12]; // 8004C47C
  if (true) { c->lr=0x8004C484u; dispatch(c,c->ctr); } // 8004C480
  c->r[0]=R32(c->r[13]+0xFFFF970Cu); // 8004C484
  c->r[3]=0u+0x00000000u; // 8004C488
  W8(c->r[31]+0x0000000Cu,c->r[3]); // 8004C48C
  cmps(c,0,(int32_t)c->r[0],0); // 8004C490
  if (!crb(c,2)) { goto L_8004C4EC; } // 8004C494
  c->r[29]=0u+0x802E0000u; // 8004C498
  c->r[3]=0u+0x00000080u; // 8004C49C
  c->r[29]=c->r[29]+0x00001BC8u; // 8004C4A0
  c->r[5]=0u+0x00000023u; // 8004C4A4
  c->r[4]=c->r[29]|c->r[29]; // 8004C4A8
  c->lr=0x8004C4B0u; f_8020D35C(c); // 8004C4AC
  cmps(c,0,(int32_t)c->r[3],0); // 8004C4B0
  c->r[28]=c->r[3]|c->r[3]; // 8004C4B4
  if (crb(c,2)) { goto L_8004C4E8; } // 8004C4B8
  W32(c->r[31]+0x00000034u,c->r[1]); // 8004C4BC
  c->lr=0x8004C4C4u; f_80073864(c); // 8004C4C0
  goto L_8004C4E8; // 8004C4C4
  c->r[3]=c->r[28]|c->r[28]; // 8004C4C8
  c->r[4]=c->r[29]|c->r[29]; // 8004C4CC
  c->r[5]=0u+0x00000023u; // 8004C4D0
  c->lr=0x8004C4D8u; f_8020E944(c); // 8004C4D4
  c->r[3]=0u+0x00000000u; // 8004C4D8
  c->r[4]=0u+0x00000000u; // 8004C4DC
  c->r[5]=0u+0x00000000u; // 8004C4E0
  c->lr=0x8004C4E8u; f_800AF804(c); // 8004C4E4
L_8004C4E8:;
  W32(c->r[13]+0xFFFF970Cu,c->r[28]); // 8004C4E8
L_8004C4EC:;
  c->r[27]=R32(c->r[13]+0xFFFF970Cu); // 8004C4EC
  c->r[4]=R32(c->r[30]+0x00000068u); // 8004C4F0
  c->r[3]=c->r[27]|c->r[27]; // 8004C4F4
  c->lr=0x8004C4FCu; f_80073E10(c); // 8004C4F8
  c->r[0]=0u+0x00000000u; // 8004C4FC
  W8(c->r[31]+0x00000008u,c->r[0]); // 8004C500
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 8004C504
  c->lr=0x8004C50Cu; f_80019FB4(c); // 8004C508
  c->r[28]=c->r[3]|c->r[3]; // 8004C50C
  c->r[3]=c->r[27]|c->r[27]; // 8004C510
  c->r[4]=0u+0x00000001u; // 8004C514
  c->lr=0x8004C51Cu; f_800741D4(c); // 8004C518
  c->r[29]=c->r[3]|c->r[3]; // 8004C51C
  c->r[3]=c->r[27]|c->r[27]; // 8004C520
  c->r[4]=0u+0x00000000u; // 8004C524
  c->lr=0x8004C52Cu; f_800741D4(c); // 8004C528
  c->r[4]=c->r[3]|c->r[3]; // 8004C52C
  c->r[5]=c->r[29]|c->r[29]; // 8004C530
  c->r[6]=c->r[28]|c->r[28]; // 8004C534
  c->r[3]=c->r[30]+0x00000070u; // 8004C538
  c->lr=0x8004C540u; f_80039494(c); // 8004C53C
  cmps(c,0,(int32_t)c->r[3],3); // 8004C540
  c->r[28]=c->r[3]|c->r[3]; // 8004C544
  if (!crb(c,2)) { goto L_8004C598; } // 8004C548
  c->r[29]=0u+0x00000001u; // 8004C54C
  goto L_8004C584; // 8004C550
L_8004C554:;
  c->r[3]=c->r[29]|c->r[29]; // 8004C554
  c->r[4]=0u+0x00000010u; // 8004C558
  c->lr=0x8004C560u; f_8006FF50(c); // 8004C55C
  cmps(c,0,(int32_t)c->r[3],0); // 8004C560
  if (!crb(c,2)) { goto L_8004C57C; } // 8004C564
  c->r[3]=c->r[29]|c->r[29]; // 8004C568
  c->r[4]=0u+0x00000020u; // 8004C56C
  c->lr=0x8004C574u; f_8006FF50(c); // 8004C570
  cmps(c,0,(int32_t)c->r[3],0); // 8004C574
  if (crb(c,2)) { goto L_8004C580; } // 8004C578
L_8004C57C:;
  c->r[28]=c->r[29]|c->r[29]; // 8004C57C
L_8004C580:;
  c->r[29]=c->r[29]+0xFFFFFFFFu; // 8004C580
L_8004C584:;
  cmps(c,0,(int32_t)c->r[29],0); // 8004C584
  if (!crb(c,0)) { IRQCHK(c); goto L_8004C554; } // 8004C588
  cmps(c,0,(int32_t)c->r[28],3); // 8004C58C
  if (!crb(c,2)) { goto L_8004C598; } // 8004C590
  c->r[28]=0u+0x00000001u; // 8004C594
L_8004C598:;
  c->r[3]=c->r[27]|c->r[27]; // 8004C598
  c->r[4]=c->r[28]|c->r[28]; // 8004C59C
  c->lr=0x8004C5A4u; f_800741D4(c); // 8004C5A0
  c->r[29]=c->r[3]|c->r[3]; // 8004C5A4
  c->r[3]=c->r[27]|c->r[27]; // 8004C5A8
  c->r[4]=c->r[28]|c->r[28]; // 8004C5AC
  c->lr=0x8004C5B4u; f_800741B4(c); // 8004C5B0
  c->r[4]=R32(c->r[30]+0x00000064u); // 8004C5B4
  c->r[5]=c->r[3]|c->r[3]; // 8004C5B8
  c->r[6]=c->r[29]|c->r[29]; // 8004C5BC
  c->r[3]=c->r[31]+0x00000010u; // 8004C5C0
  c->r[7]=0u+0x00000000u; // 8004C5C4
  c->lr=0x8004C5CCu; f_80067CE0(c); // 8004C5C8
L_8004C5CC:;
  c->r[10]=c->r[31]|c->r[31]; // 8004C5CC
  {uint32_t ea=c->r[10]+0x0000003Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004C5D0
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004C5D4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004C5D8
  c->r[1]=c->r[10]|c->r[10]; // 8004C5DC
  c->lr=c->r[0]; // 8004C5E0
  return; // 8004C5E4
}

// getRankClassNameSID__Q24gbla10GblaRankupFQ34gbla5param11_gbla_class
void f_8004C5E8(Ctx* __restrict c) {
  trace_call(0x8004C5E8u);
  cmpu(c,0,c->r[4],0x00000009u); // 8004C5E8
  if (crb(c,1)) { goto L_8004C608; } // 8004C5EC
  c->r[3]=0u+0x802E0000u; // 8004C5F0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8004C5F4
  c->r[3]=c->r[3]+0x00002628u; // 8004C5F8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8004C5FC
  c->ctr=c->r[3]; // 8004C600
  if (true) { switch (c->ctr) { case 0x8004C608u: goto L_8004C608; case 0x8004C610u: goto L_8004C610; case 0x8004C618u: goto L_8004C618; case 0x8004C620u: goto L_8004C620; case 0x8004C628u: goto L_8004C628; case 0x8004C630u: goto L_8004C630; case 0x8004C638u: goto L_8004C638; case 0x8004C640u: goto L_8004C640; case 0x8004C648u: goto L_8004C648; case 0x8004C650u: goto L_8004C650; default: break; } dispatch(c,c->ctr); return; } // 8004C604
L_8004C608:;
  c->r[3]=0u+0x00000836u; // 8004C608
  f_80022B5C(c); return; // 8004C60C
L_8004C610:;
  c->r[3]=0u+0x00000835u; // 8004C610
  f_80022B5C(c); return; // 8004C614
L_8004C618:;
  c->r[3]=0u+0x00000834u; // 8004C618
  f_80022B5C(c); return; // 8004C61C
L_8004C620:;
  c->r[3]=0u+0x00000833u; // 8004C620
  f_80022B5C(c); return; // 8004C624
L_8004C628:;
  c->r[3]=0u+0x00000832u; // 8004C628
  f_80022B5C(c); return; // 8004C62C
L_8004C630:;
  c->r[3]=0u+0x00000831u; // 8004C630
  f_80022B5C(c); return; // 8004C634
L_8004C638:;
  c->r[3]=0u+0x00000830u; // 8004C638
  f_80022B5C(c); return; // 8004C63C
L_8004C640:;
  c->r[3]=0u+0x0000082Fu; // 8004C640
  f_80022B5C(c); return; // 8004C644
L_8004C648:;
  c->r[3]=0u+0x0000082Eu; // 8004C648
  f_80022B5C(c); return; // 8004C64C
L_8004C650:;
  c->r[3]=0u+0x0000082Du; // 8004C650
  f_80022B5C(c); return; // 8004C654
}

// getRankClassPlateSID__Q24gbla10GblaRankupFQ34gbla5param11_gbla_class
void f_8004C658(Ctx* __restrict c) {
  trace_call(0x8004C658u);
  cmpu(c,0,c->r[4],0x00000009u); // 8004C658
  if (crb(c,1)) { goto L_8004C678; } // 8004C65C
  c->r[3]=0u+0x802E0000u; // 8004C660
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8004C664
  c->r[3]=c->r[3]+0x00002650u; // 8004C668
  c->r[3]=R32(c->r[3]+c->r[0]); // 8004C66C
  c->ctr=c->r[3]; // 8004C670
  if (true) { switch (c->ctr) { case 0x8004C678u: goto L_8004C678; case 0x8004C680u: goto L_8004C680; case 0x8004C688u: goto L_8004C688; case 0x8004C690u: goto L_8004C690; case 0x8004C698u: goto L_8004C698; case 0x8004C6A0u: goto L_8004C6A0; case 0x8004C6A8u: goto L_8004C6A8; case 0x8004C6B0u: goto L_8004C6B0; case 0x8004C6B8u: goto L_8004C6B8; case 0x8004C6C0u: goto L_8004C6C0; default: break; } dispatch(c,c->ctr); return; } // 8004C674
L_8004C678:;
  c->r[3]=0u+0x0000082Cu; // 8004C678
  f_80022B5C(c); return; // 8004C67C
L_8004C680:;
  c->r[3]=0u+0x0000082Bu; // 8004C680
  f_80022B5C(c); return; // 8004C684
L_8004C688:;
  c->r[3]=0u+0x0000082Au; // 8004C688
  f_80022B5C(c); return; // 8004C68C
L_8004C690:;
  c->r[3]=0u+0x00000829u; // 8004C690
  f_80022B5C(c); return; // 8004C694
L_8004C698:;
  c->r[3]=0u+0x00000828u; // 8004C698
  f_80022B5C(c); return; // 8004C69C
L_8004C6A0:;
  c->r[3]=0u+0x00000827u; // 8004C6A0
  f_80022B5C(c); return; // 8004C6A4
L_8004C6A8:;
  c->r[3]=0u+0x00000826u; // 8004C6A8
  f_80022B5C(c); return; // 8004C6AC
L_8004C6B0:;
  c->r[3]=0u+0x00000825u; // 8004C6B0
  f_80022B5C(c); return; // 8004C6B4
L_8004C6B8:;
  c->r[3]=0u+0x00000824u; // 8004C6B8
  f_80022B5C(c); return; // 8004C6BC
L_8004C6C0:;
  c->r[3]=0u+0x00000823u; // 8004C6C0
  f_80022B5C(c); return; // 8004C6C4
}

// addFadeList__Q24gbla10GblaRankupFPQ25Alice6Sprite
void f_8004C6C8(Ctx* __restrict c) {
  trace_call(0x8004C6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C6C8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004C6CC
  c->r[31]=c->r[1]|c->r[1]; // 8004C6D0
  c->r[0]=R32(c->r[3]+0x000000BCu); // 8004C6D4
  c->r[5]=R32(c->r[3]+0x000000B8u); // 8004C6D8
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8004C6DC
  c->r[5]=c->r[5]+c->r[0]; cr0(c,c->r[5]); // 8004C6E0
  if (crb(c,2)) { goto L_8004C6F0; } // 8004C6E4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8004C6E8
  W32(c->r[5]+0x00000000u,c->r[4]); // 8004C6EC
L_8004C6F0:;
  c->r[4]=R32(c->r[3]+0x000000BCu); // 8004C6F0
  c->r[10]=c->r[31]|c->r[31]; // 8004C6F4
  c->r[0]=c->r[4]+0x00000001u; // 8004C6F8
  W32(c->r[3]+0x000000BCu,c->r[0]); // 8004C6FC
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8004C700
  c->r[1]=R32(c->r[1]+0x00000000u); // 8004C704
  return; // 8004C708
}

// procFadeList__Q24gbla10GblaRankupFRQ25Alice5Color
void f_8004C70C(Ctx* __restrict c) {
  trace_call(0x8004C70Cu);
  c->r[6]=R32(c->r[3]+0x000000BCu); // 8004C70C
  c->r[7]=0u+0x00000000u; // 8004C710
  cmps(c,1,(int32_t)c->r[6],0); // 8004C714
  if (!crb(c,5)) return; // 8004C718
  cmps(c,0,(int32_t)c->r[6],8); // 8004C71C
  c->r[8]=c->r[6]+0xFFFFFFF8u; // 8004C720
  if (!crb(c,1)) { goto L_8004C80C; } // 8004C724
  c->r[9]=0u+0x00000000u; // 8004C728
  if (crb(c,4)) { goto L_8004C744; } // 8004C72C
  c->r[5]=0u+0x80000000u; // 8004C730
  c->r[0]=c->r[5]+0xFFFFFFFEu; // 8004C734
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[0]); // 8004C738
  if (crb(c,1)) { goto L_8004C744; } // 8004C73C
  c->r[9]=0u+0x00000001u; // 8004C740
L_8004C744:;
  cmps(c,0,(int32_t)c->r[9],0); // 8004C744
  if (crb(c,2)) { goto L_8004C80C; } // 8004C748
  c->r[0]=c->r[8]+0x00000007u; // 8004C74C
  c->r[5]=0u+0x00000000u; // 8004C750
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8004C754
  c->ctr=c->r[0]; // 8004C758
  cmps(c,0,(int32_t)c->r[8],0); // 8004C75C
  if (!crb(c,1)) { goto L_8004C80C; } // 8004C760
L_8004C764:;
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C764
  c->r[7]=c->r[7]+0x00000008u; // 8004C768
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C76C
  c->r[8]=R32(c->r[8]+c->r[5]); // 8004C770
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C774
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C778
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C77C
  c->r[8]=c->r[8]+c->r[5]; // 8004C780
  c->r[8]=R32(c->r[8]+0x00000004u); // 8004C784
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C788
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C78C
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C790
  c->r[8]=c->r[8]+c->r[5]; // 8004C794
  c->r[8]=R32(c->r[8]+0x00000008u); // 8004C798
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C79C
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C7A0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C7A4
  c->r[8]=c->r[8]+c->r[5]; // 8004C7A8
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 8004C7AC
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C7B0
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C7B4
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C7B8
  c->r[8]=c->r[8]+c->r[5]; // 8004C7BC
  c->r[8]=R32(c->r[8]+0x00000010u); // 8004C7C0
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C7C4
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C7C8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C7CC
  c->r[8]=c->r[8]+c->r[5]; // 8004C7D0
  c->r[8]=R32(c->r[8]+0x00000014u); // 8004C7D4
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C7D8
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C7DC
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C7E0
  c->r[8]=c->r[8]+c->r[5]; // 8004C7E4
  c->r[8]=R32(c->r[8]+0x00000018u); // 8004C7E8
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C7EC
  c->r[8]=R32(c->r[3]+0x000000B8u); // 8004C7F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C7F4
  c->r[8]=c->r[8]+c->r[5]; // 8004C7F8
  c->r[5]=c->r[5]+0x00000020u; // 8004C7FC
  c->r[8]=R32(c->r[8]+0x0000001Cu); // 8004C800
  W32(c->r[8]+0x00000144u,c->r[0]); // 8004C804
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004C764; } // 8004C808
L_8004C80C:;
  c->r[0]=c->r[6]-c->r[7]; // 8004C80C
  c->r[8]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8004C810
  c->ctr=c->r[0]; // 8004C814
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[6]); // 8004C818
  if (!crb(c,0)) return; // 8004C81C
L_8004C820:;
  c->r[5]=R32(c->r[3]+0x000000B8u); // 8004C820
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C824
  c->r[5]=R32(c->r[5]+c->r[8]); // 8004C828
  c->r[8]=c->r[8]+0x00000004u; // 8004C82C
  W32(c->r[5]+0x00000144u,c->r[0]); // 8004C830
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8004C820; } // 8004C834
  return; // 8004C838
}

// setColor__Q25Alice6SpriteFRCQ25Alice5Color
void f_8004C83C(Ctx* __restrict c) {
  trace_call(0x8004C83Cu);
  c->r[0]=R32(c->r[4]+0x00000000u); // 8004C83C
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004C840
  return; // 8004C844
}

// clearFadeList__Q24gbla10GblaRankupFv
void f_8004C848(Ctx* __restrict c) {
  trace_call(0x8004C848u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C848
  c->r[0]=c->lr; // 8004C84C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004C850
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004C854
  c->r[31]=c->r[3]|c->r[3]; // 8004C858
  c->r[3]=R32(c->r[3]+0x000000B8u); // 8004C85C
  c->lr=0x8004C864u; f_80210AFC(c); // 8004C860
  c->r[5]=0u+0x00000000u; // 8004C864
  c->r[0]=0u+0x00000014u; // 8004C868
  c->r[4]=0u+0x802E0000u; // 8004C86C
  W32(c->r[31]+0x000000B8u,c->r[5]); // 8004C870
  c->r[4]=c->r[4]+0x00002678u; // 8004C874
  c->r[3]=0u+0x00000050u; // 8004C878
  W32(c->r[31]+0x000000BCu,c->r[5]); // 8004C87C
  c->r[5]=0u+0x00000040u; // 8004C880
  W32(c->r[31]+0x000000C0u,c->r[0]); // 8004C884
  c->lr=0x8004C88Cu; f_8020D35C(c); // 8004C888
  W32(c->r[31]+0x000000B8u,c->r[3]); // 8004C88C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004C890
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004C894
  c->lr=c->r[0]; // 8004C898
  c->r[1]=c->r[1]+0x00000010u; // 8004C89C
  return; // 8004C8A0
}

// setRankupChar__Q24gbla10GblaRankupFi
void f_8004C8A4(Ctx* __restrict c) {
  trace_call(0x8004C8A4u);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004C8A4
  c->r[0]=c->lr; // 8004C8A8
  c->r[5]=0u+0x802E0000u; // 8004C8AC
  {uint32_t ea=c->r[2]+0xFFFF81D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004C8B0
  W32(c->r[1]+0x00000094u,c->r[0]); // 8004C8B4
  c->r[5]=c->r[5]+0x000045A8u; // 8004C8B8
  c->r[10]=c->r[5]+0x00020000u; // 8004C8BC
  {uint32_t ea=c->r[2]+0xFFFF81D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C8C0
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8004C8C4
  c->r[31]=c->r[4]|c->r[4]; // 8004C8C8
  W32(c->r[1]+0x00000088u,c->r[30]); // 8004C8CC
  c->r[30]=c->r[3]|c->r[3]; // 8004C8D0
  {uint32_t ea=c->r[10]+0x000023C0u; c->f[7]=c->ps1[7]=RF32(ea);} // 8004C8D4
  {uint32_t ea=c->r[10]+0x000023ACu; c->f[10]=c->ps1[10]=RF32(ea);} // 8004C8D8
  c->f[3]=c->ps1[3]=S(c->f[7]-c->f[2]); // 8004C8DC
  {uint32_t ea=c->r[3]+0x00000280u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C8E0
  {uint32_t ea=c->r[10]+0x000023B0u; c->f[9]=c->ps1[9]=RF32(ea);} // 8004C8E4
  c->r[3]=c->r[1]+0x00000020u; // 8004C8E8
  c->r[9]=R32(c->r[10]+0x00002398u); // 8004C8EC
  c->f[2]=c->ps1[2]=S(std::fma(c->f[3],c->f[0],c->f[10])); // 8004C8F0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[0],c->f[9])); // 8004C8F4
  c->r[8]=R32(c->r[10]+0x0000239Cu); // 8004C8F8
  c->r[7]=R32(c->r[10]+0x000023A0u); // 8004C8FC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[2]); // 8004C900
  {uint32_t ea=c->r[10]+0x000023A4u; c->f[12]=c->ps1[12]=RF32(ea);} // 8004C904
  {uint32_t ea=c->r[10]+0x000023A8u; c->f[11]=c->ps1[11]=RF32(ea);} // 8004C908
  c->r[6]=R32(c->r[10]+0x000023B4u); // 8004C90C
  {uint32_t ea=c->r[10]+0x000023B8u; c->f[8]=c->ps1[8]=RF32(ea);} // 8004C910
  c->r[5]=R32(c->r[10]+0x000023BCu); // 8004C914
  {uint32_t ea=c->r[10]+0x000023C4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8004C918
  {uint32_t ea=c->r[10]+0x000023C8u; c->f[5]=c->ps1[5]=RF32(ea);} // 8004C91C
  {uint32_t ea=c->r[10]+0x000023CCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8004C920
  c->r[4]=R32(c->r[10]+0x000023D0u); // 8004C924
  {uint32_t ea=c->r[10]+0x000023D4u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004C928
  {uint32_t ea=c->r[10]+0x000023D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004C92C
  c->r[0]=R32(c->r[10]+0x000023DCu); // 8004C930
  W32(c->r[1]+0x00000030u,c->r[9]); // 8004C934
  W32(c->r[1]+0x00000034u,c->r[8]); // 8004C938
  W32(c->r[1]+0x00000038u,c->r[7]); // 8004C93C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[12]);} // 8004C940
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[11]);} // 8004C944
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[10]);} // 8004C948
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[9]);} // 8004C94C
  W32(c->r[1]+0x0000004Cu,c->r[6]); // 8004C950
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[8]);} // 8004C954
  W32(c->r[1]+0x00000054u,c->r[5]); // 8004C958
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[7]);} // 8004C95C
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[6]);} // 8004C960
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[5]);} // 8004C964
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[4]);} // 8004C968
  W32(c->r[1]+0x00000068u,c->r[4]); // 8004C96C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[3]);} // 8004C970
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[2]);} // 8004C974
  W32(c->r[1]+0x00000074u,c->r[0]); // 8004C978
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[1]);} // 8004C97C
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8004C980
  c->lr=0x8004C988u; f_80208138(c); // 8004C984
  c->r[3]=c->r[1]+0x00000020u; // 8004C988
  c->r[4]=c->r[30]+0x0000021Cu; // 8004C98C
  c->r[5]=0u+0x00000009u; // 8004C990
  c->lr=0x8004C998u; f_802082DC(c); // 8004C994
  c->r[3]=c->r[30]+0x0000021Cu; // 8004C998
  c->lr=0x8004C9A0u; f_800ACEA0(c); // 8004C99C
  c->r[3]=addc(c,~c->r[3],0x00000008u,1); // 8004C9A0
  c->r[0]=0u+0x43300000u; // 8004C9A4
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)20); // 8004C9A8
  W32(c->r[1]+0x00000078u,c->r[0]); // 8004C9AC
  {uint32_t ea=c->r[2]+0xFFFF81E0u; c->f[2]=RF64(ea);} // 8004C9B0
  c->r[3]=c->r[1]+0x00000010u; // 8004C9B4
  W32(c->r[1]+0x0000007Cu,c->r[4]); // 8004C9B8
  {uint32_t ea=c->r[1]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C9BC
  {uint32_t ea=c->r[1]+0x00000078u; c->f[1]=RF64(ea);} // 8004C9C0
  c->r[4]=c->r[1]+0x00000020u; // 8004C9C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8004C9C8
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 8004C9CC
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8004C9D0
  c->lr=0x8004C9D8u; f_8020814C(c); // 8004C9D4
  {uint32_t ea=c->r[1]+0x00000064u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004C9D8
  c->r[7]=c->r[31]|c->r[31]; // 8004C9DC
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004C9E0
  c->r[3]=c->r[30]+0x000000C4u; // 8004C9E4
  {uint32_t ea=c->r[1]+0x00000028u; c->f[3]=c->ps1[3]=RF32(ea);} // 8004C9E8
  c->r[4]=c->r[1]+0x00000018u; // 8004C9EC
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004C9F0
  c->r[5]=c->r[1]+0x00000010u; // 8004C9F4
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[1]);} // 8004C9F8
  c->r[6]=c->r[1]+0x00000008u; // 8004C9FC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004CA00
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[2]);} // 8004CA04
  {uint32_t ea=c->r[2]+0xFFFF81D8u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004CA08
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[3]);} // 8004CA0C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8004CA10
  c->lr=0x8004CA18u; f_8005B050(c); // 8004CA14
  c->r[3]=c->r[1]+0x00000010u; // 8004CA18
  c->r[4]=0u+0xFFFFFFFFu; // 8004CA1C
  c->lr=0x8004CA24u; f_80208230(c); // 8004CA20
  c->r[3]=c->r[1]+0x00000020u; // 8004CA24
  c->r[4]=0u+0xFFFFFFFFu; // 8004CA28
  c->lr=0x8004CA30u; f_80208230(c); // 8004CA2C
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004CA30
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8004CA34
  c->r[30]=R32(c->r[1]+0x00000088u); // 8004CA38
  c->lr=c->r[0]; // 8004CA3C
  c->r[1]=c->r[1]+0x00000090u; // 8004CA40
  return; // 8004CA44
}

// procRankUpScene__Q24gbla10GblaRankupFv
void f_8004CA48(Ctx* __restrict c) {
  trace_call(0x8004CA48u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004CA48
  c->r[0]=c->lr; // 8004CA4C
  W32(c->r[1]+0x000000A4u,c->r[0]); // 8004CA50
  c->r[11]=c->r[1]+0x00000070u; // 8004CA54
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[31]);} // 8004CA58
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,31,ea,0,0);} // 8004CA5C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[30]);} // 8004CA60
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,30,ea,0,0);} // 8004CA64
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[29]);} // 8004CA68
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,29,ea,0,0);} // 8004CA6C
  c->lr=0x8004CA74u; f_800ADA2C(c); // 8004CA70
  c->r[0]=0u+0x43300000u; // 8004CA74
  W32(c->r[1]+0x00000048u,c->r[0]); // 8004CA78
  c->r[31]=c->r[3]|c->r[3]; // 8004CA7C
  {uint32_t ea=c->r[2]+0xFFFF81E8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8004CA80
  W32(c->r[1]+0x00000050u,c->r[0]); // 8004CA84
  c->r[3]=c->r[1]+0x00000008u; // 8004CA88
  c->r[4]=0u+0x00000000u; // 8004CA8C
  c->r[5]=0u+0x00000000u; // 8004CA90
  c->r[6]=0u+0x00000000u; // 8004CA94
  c->r[7]=0u+0x00000000u; // 8004CA98
  c->lr=0x8004CAA0u; f_8004B928(c); // 8004CA9C
  c->r[0]=R32(c->r[31]+0x0000008Cu); // 8004CAA0
  cmps(c,0,(int32_t)c->r[0],-1); // 8004CAA4
  if (crb(c,2)) { goto L_8004CAD8; } // 8004CAA8
  cmps(c,0,(int32_t)c->r[0],0); // 8004CAAC
  if (crb(c,2)) { goto L_8004CBF4; } // 8004CAB0
  cmps(c,0,(int32_t)c->r[0],1); // 8004CAB4
  if (crb(c,2)) { goto L_8004CD78; } // 8004CAB8
  cmps(c,0,(int32_t)c->r[0],2); // 8004CABC
  if (crb(c,2)) { goto L_8004CFC8; } // 8004CAC0
  cmps(c,0,(int32_t)c->r[0],3); // 8004CAC4
  if (crb(c,2)) { goto L_8004D1AC; } // 8004CAC8
  cmps(c,0,(int32_t)c->r[0],4); // 8004CACC
  if (crb(c,2)) { goto L_8004D620; } // 8004CAD0
  goto L_8004D74C; // 8004CAD4
L_8004CAD8:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004CAD8
  cmps(c,0,(int32_t)c->r[0],0); // 8004CADC
  if (!crb(c,2)) { goto L_8004CB0C; } // 8004CAE0
  c->lr=0x8004CAE8u; f_800241D4(c); // 8004CAE4
  c->lr=0x8004CAECu; f_80019F7C(c); // 8004CAE8
  cmps(c,0,(int32_t)c->r[3],0); // 8004CAEC
  if (!crb(c,2)) { goto L_8004CB0C; } // 8004CAF0
  c->lr=0x8004CAF8u; f_800241D4(c); // 8004CAF4
  c->lr=0x8004CAFCu; f_80019FAC(c); // 8004CAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8004CAFC
  if (!crb(c,2)) { goto L_8004CB0C; } // 8004CB00
  c->lr=0x8004CB08u; f_800241D4(c); // 8004CB04
  c->lr=0x8004CB0Cu; f_80019EA4(c); // 8004CB08
L_8004CB0C:;
  c->r[0]=R32(c->r[31]+0x00000098u); // 8004CB0C
  cmps(c,0,(int32_t)c->r[0],-1); // 8004CB10
  if (!crb(c,2)) { goto L_8004CB3C; } // 8004CB14
  c->r[5]=0u+0x00000002u; // 8004CB18
  c->r[4]=0u+0x00000000u; // 8004CB1C
  c->r[3]=0u+0x000000FFu; // 8004CB20
  c->r[0]=0u+0xFFFFFFF1u; // 8004CB24
  W32(c->r[31]+0x0000008Cu,c->r[5]); // 8004CB28
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004CB2C
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004CB30
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004CB34
  goto L_8004D74C; // 8004CB38
L_8004CB3C:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004CB3C
  c->r[3]=c->r[31]+0x000000C4u; // 8004CB40
  c->r[0]=c->r[4]+0x00000001u; // 8004CB44
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004CB48
  c->lr=0x8004CB50u; f_8004D77C(c); // 8004CB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8004CB50
  if (crb(c,2)) { goto L_8004CBB8; } // 8004CB54
  c->r[3]=0u+0x00000822u; // 8004CB58
  c->lr=0x8004CB60u; f_80022B5C(c); // 8004CB5C
  c->r[4]=c->r[3]|c->r[3]; // 8004CB60
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CB64
  c->r[5]=0u+0x00000001u; // 8004CB68
  c->lr=0x8004CB70u; f_800674FC(c); // 8004CB6C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CB70
  c->r[4]=0u+0x0000079Cu; // 8004CB74
  c->r[5]=0u+0x00000001u; // 8004CB78
  c->lr=0x8004CB80u; f_800674FC(c); // 8004CB7C
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CB80
  c->r[3]=c->r[31]|c->r[31]; // 8004CB84
  c->lr=0x8004CB8Cu; f_8004C5E8(c); // 8004CB88
  c->r[4]=c->r[3]|c->r[3]; // 8004CB8C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CB90
  c->r[5]=0u+0x00000001u; // 8004CB94
  c->lr=0x8004CB9Cu; f_800674FC(c); // 8004CB98
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CB9C
  c->r[3]=c->r[31]|c->r[31]; // 8004CBA0
  c->lr=0x8004CBA8u; f_8004C658(c); // 8004CBA4
  c->r[4]=c->r[3]|c->r[3]; // 8004CBA8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CBAC
  c->r[5]=0u+0x00000001u; // 8004CBB0
  c->lr=0x8004CBB8u; f_800674FC(c); // 8004CBB4
L_8004CBB8:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004CBB8
  cmps(c,0,(int32_t)c->r[0],200); // 8004CBBC
  if (crb(c,0)) { goto L_8004CBE4; } // 8004CBC0
  c->r[4]=0u+0x00000000u; // 8004CBC4
  c->r[0]=0u+0x0000000Au; // 8004CBC8
  W32(c->r[31]+0x0000008Cu,c->r[4]); // 8004CBCC
  c->r[3]=0u+0x00000004u; // 8004CBD0
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004CBD4
  W32(c->r[31]+0x000000A8u,c->r[4]); // 8004CBD8
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004CBDC
  c->lr=0x8004CBE4u; f_8001B010(c); // 8004CBE0
L_8004CBE4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004CBE4
  c->r[4]=0u+0x000000FFu; // 8004CBE8
  c->lr=0x8004CBF0u; f_8004C8A4(c); // 8004CBEC
  goto L_8004D74C; // 8004CBF0
L_8004CBF4:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004CBF4
  c->r[3]=0u+0x00000822u; // 8004CBF8
  c->r[0]=c->r[4]+0x00000001u; // 8004CBFC
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004CC00
  c->lr=0x8004CC08u; f_80022B5C(c); // 8004CC04
  c->r[4]=c->r[3]|c->r[3]; // 8004CC08
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC0C
  c->r[5]=0u+0x00000001u; // 8004CC10
  c->lr=0x8004CC18u; f_800674FC(c); // 8004CC14
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC18
  c->r[4]=0u+0x0000079Cu; // 8004CC1C
  c->r[5]=0u+0x00000001u; // 8004CC20
  c->lr=0x8004CC28u; f_800674FC(c); // 8004CC24
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CC28
  c->r[3]=c->r[31]|c->r[31]; // 8004CC2C
  c->lr=0x8004CC34u; f_8004C5E8(c); // 8004CC30
  c->r[4]=c->r[3]|c->r[3]; // 8004CC34
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC38
  c->r[5]=0u+0x00000001u; // 8004CC3C
  c->lr=0x8004CC44u; f_800674FC(c); // 8004CC40
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CC44
  c->r[3]=c->r[31]|c->r[31]; // 8004CC48
  c->lr=0x8004CC50u; f_8004C658(c); // 8004CC4C
  c->r[4]=c->r[3]|c->r[3]; // 8004CC50
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC54
  c->r[5]=0u+0x00000001u; // 8004CC58
  c->lr=0x8004CC60u; f_800674FC(c); // 8004CC5C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC60
  c->r[4]=0u+0x00000792u; // 8004CC64
  c->r[5]=0u+0x00000001u; // 8004CC68
  c->lr=0x8004CC70u; f_800674FC(c); // 8004CC6C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC70
  c->r[4]=0u+0x00000791u; // 8004CC74
  c->r[5]=0u+0x00000001u; // 8004CC78
  c->lr=0x8004CC80u; f_800674FC(c); // 8004CC7C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC80
  c->r[4]=0u+0x00000792u; // 8004CC84
  c->lr=0x8004CC8Cu; f_80065994(c); // 8004CC88
  c->r[29]=c->r[3]|c->r[3]; // 8004CC8C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CC90
  c->r[4]=0u+0x00000791u; // 8004CC94
  c->lr=0x8004CC9Cu; f_80065994(c); // 8004CC98
  c->r[4]=R32(c->r[31]+0x000000ACu); // 8004CC9C
  c->r[30]=c->r[3]|c->r[3]; // 8004CCA0
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CCA4
  c->r[0]=c->r[0]+c->r[4]; // 8004CCA8
  cmps(c,0,(int32_t)c->r[0],255); // 8004CCAC
  if (crb(c,0)) { goto L_8004CCBC; } // 8004CCB0
  c->r[0]=0u-c->r[4]; // 8004CCB4
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004CCB8
L_8004CCBC:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 8004CCBC
  c->r[0]=R32(c->r[31]+0x000000ACu); // 8004CCC0
  c->r[0]=c->r[3]+c->r[0]; cr0(c,c->r[0]); // 8004CCC4
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004CCC8
  if (!crb(c,1)) { goto L_8004CD3C; } // 8004CCCC
  c->r[3]=c->r[29]|c->r[29]; // 8004CCD0
  c->lr=0x8004CCD8u; f_8004C3A0(c); // 8004CCD4
  c->r[4]=c->r[3]|c->r[3]; // 8004CCD8
  c->r[3]=c->r[1]+0x00000008u; // 8004CCDC
  c->lr=0x8004CCE4u; f_8004C394(c); // 8004CCE0
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CCE4
  c->r[3]=c->r[1]+0x00000008u; // 8004CCE8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CCEC
  c->lr=0x8004CCF4u; f_8004D784(c); // 8004CCF0
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CCF4
  c->r[3]=c->r[1]+0x00000008u; // 8004CCF8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CCFC
  c->lr=0x8004CD04u; f_8004D78C(c); // 8004CD00
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CD04
  c->r[3]=c->r[1]+0x00000008u; // 8004CD08
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CD0C
  c->lr=0x8004CD14u; f_8004D794(c); // 8004CD10
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CD14
  c->r[3]=c->r[1]+0x00000008u; // 8004CD18
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CD1C
  c->lr=0x8004CD24u; f_8004D79C(c); // 8004CD20
  c->r[3]=c->r[29]|c->r[29]; // 8004CD24
  c->r[4]=c->r[1]+0x00000008u; // 8004CD28
  c->lr=0x8004CD30u; f_8004C83C(c); // 8004CD2C
  c->r[3]=c->r[30]|c->r[30]; // 8004CD30
  c->r[4]=c->r[1]+0x00000008u; // 8004CD34
  c->lr=0x8004CD3Cu; f_8004C83C(c); // 8004CD38
L_8004CD3C:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004CD3C
  cmps(c,0,(int32_t)c->r[0],150); // 8004CD40
  if (crb(c,0)) { goto L_8004CD68; } // 8004CD44
  c->r[5]=0u+0x00000001u; // 8004CD48
  c->r[4]=0u+0x00000000u; // 8004CD4C
  c->r[3]=0u+0x000000FFu; // 8004CD50
  c->r[0]=0u+0xFFFFFFE2u; // 8004CD54
  W32(c->r[31]+0x0000008Cu,c->r[5]); // 8004CD58
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004CD5C
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004CD60
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004CD64
L_8004CD68:;
  c->r[3]=c->r[31]|c->r[31]; // 8004CD68
  c->r[4]=0u+0x000000FFu; // 8004CD6C
  c->lr=0x8004CD74u; f_8004C8A4(c); // 8004CD70
  goto L_8004D74C; // 8004CD74
L_8004CD78:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004CD78
  c->r[3]=0u+0x00000822u; // 8004CD7C
  c->r[0]=c->r[4]+0x00000001u; // 8004CD80
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004CD84
  c->lr=0x8004CD8Cu; f_80022B5C(c); // 8004CD88
  c->r[4]=c->r[3]|c->r[3]; // 8004CD8C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CD90
  c->r[5]=0u+0x00000001u; // 8004CD94
  c->lr=0x8004CD9Cu; f_800674FC(c); // 8004CD98
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CD9C
  c->r[4]=0u+0x0000079Cu; // 8004CDA0
  c->r[5]=0u+0x00000001u; // 8004CDA4
  c->lr=0x8004CDACu; f_800674FC(c); // 8004CDA8
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CDAC
  c->r[3]=c->r[31]|c->r[31]; // 8004CDB0
  c->lr=0x8004CDB8u; f_8004C5E8(c); // 8004CDB4
  c->r[4]=c->r[3]|c->r[3]; // 8004CDB8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CDBC
  c->r[5]=0u+0x00000001u; // 8004CDC0
  c->lr=0x8004CDC8u; f_800674FC(c); // 8004CDC4
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CDC8
  c->r[3]=c->r[31]|c->r[31]; // 8004CDCC
  c->lr=0x8004CDD4u; f_8004C658(c); // 8004CDD0
  c->r[4]=c->r[3]|c->r[3]; // 8004CDD4
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CDD8
  c->r[5]=0u+0x00000001u; // 8004CDDC
  c->lr=0x8004CDE4u; f_800674FC(c); // 8004CDE0
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CDE4
  c->r[3]=c->r[31]|c->r[31]; // 8004CDE8
  c->lr=0x8004CDF0u; f_8004C5E8(c); // 8004CDEC
  c->r[4]=c->r[3]|c->r[3]; // 8004CDF0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CDF4
  c->lr=0x8004CDFCu; f_80065994(c); // 8004CDF8
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004CDFC
  c->r[29]=c->r[3]|c->r[3]; // 8004CE00
  c->r[3]=c->r[31]|c->r[31]; // 8004CE04
  c->lr=0x8004CE0Cu; f_8004C658(c); // 8004CE08
  c->r[4]=c->r[3]|c->r[3]; // 8004CE0C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CE10
  c->lr=0x8004CE18u; f_80065994(c); // 8004CE14
  c->r[4]=R32(c->r[31]+0x000000A8u); // 8004CE18
  c->r[30]=c->r[3]|c->r[3]; // 8004CE1C
  c->r[0]=R32(c->r[31]+0x000000ACu); // 8004CE20
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 8004CE24
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004CE28
  if (!crb(c,1)) { goto L_8004CEEC; } // 8004CE2C
  c->r[3]=c->r[29]|c->r[29]; // 8004CE30
  c->lr=0x8004CE38u; f_8004C3A0(c); // 8004CE34
  c->r[4]=c->r[3]|c->r[3]; // 8004CE38
  c->r[3]=c->r[1]+0x00000008u; // 8004CE3C
  c->lr=0x8004CE44u; f_8004C394(c); // 8004CE40
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CE44
  c->r[3]=c->r[1]+0x00000008u; // 8004CE48
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CE4C
  c->lr=0x8004CE54u; f_8004D784(c); // 8004CE50
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CE54
  c->r[3]=c->r[1]+0x00000008u; // 8004CE58
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CE5C
  c->lr=0x8004CE64u; f_8004D78C(c); // 8004CE60
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CE64
  c->r[3]=c->r[1]+0x00000008u; // 8004CE68
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CE6C
  c->lr=0x8004CE74u; f_8004D794(c); // 8004CE70
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CE74
  c->r[3]=c->r[1]+0x00000008u; // 8004CE78
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004CE7C
  c->lr=0x8004CE84u; f_8004D79C(c); // 8004CE80
  c->r[3]=c->r[29]|c->r[29]; // 8004CE84
  c->r[4]=c->r[1]+0x00000008u; // 8004CE88
  c->lr=0x8004CE90u; f_8004C83C(c); // 8004CE8C
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004CE90
  c->r[3]=c->r[30]|c->r[30]; // 8004CE94
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[2]=RF64(ea);} // 8004CE98
  c->r[4]=0u+0x00000000u; // 8004CE9C
  c->r[0]=c->r[0]^0x80000000u; // 8004CEA0
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8004CEA4
  {uint32_t ea=c->r[2]+0xFFFF81ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004CEA8
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004CEAC
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 8004CEB0
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004CEB4
  c->r[7]=0u+0x00000000u; // 8004CEB8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8004CEBC
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8004CEC0
  c->lr=0x8004CEC8u; f_800AD65C(c); // 8004CEC4
  c->f[1]=c->f[31]; // 8004CEC8
  c->r[29]=c->r[3]|c->r[3]; // 8004CECC
  c->f[2]=c->f[31]; // 8004CED0
  c->r[3]=c->r[1]+0x00000030u; // 8004CED4
  c->lr=0x8004CEDCu; f_8003A1B0(c); // 8004CED8
  c->r[4]=c->r[3]|c->r[3]; // 8004CEDC
  c->r[3]=c->r[29]|c->r[29]; // 8004CEE0
  c->lr=0x8004CEE8u; f_800691BC(c); // 8004CEE4
  goto L_8004CF74; // 8004CEE8
L_8004CEEC:;
  c->r[3]=c->r[29]|c->r[29]; // 8004CEEC
  c->lr=0x8004CEF4u; f_8004C3A0(c); // 8004CEF0
  c->r[4]=c->r[3]|c->r[3]; // 8004CEF4
  c->r[3]=c->r[1]+0x00000008u; // 8004CEF8
  c->lr=0x8004CF00u; f_8004C394(c); // 8004CEFC
  c->r[3]=c->r[1]+0x00000008u; // 8004CF00
  c->r[4]=0u+0x00000000u; // 8004CF04
  c->lr=0x8004CF0Cu; f_8004D784(c); // 8004CF08
  c->r[3]=c->r[1]+0x00000008u; // 8004CF0C
  c->r[4]=0u+0x00000000u; // 8004CF10
  c->lr=0x8004CF18u; f_8004D78C(c); // 8004CF14
  c->r[3]=c->r[1]+0x00000008u; // 8004CF18
  c->r[4]=0u+0x00000000u; // 8004CF1C
  c->lr=0x8004CF24u; f_8004D794(c); // 8004CF20
  c->r[3]=c->r[1]+0x00000008u; // 8004CF24
  c->r[4]=0u+0x00000000u; // 8004CF28
  c->lr=0x8004CF30u; f_8004D79C(c); // 8004CF2C
  c->r[3]=c->r[29]|c->r[29]; // 8004CF30
  c->r[4]=c->r[1]+0x00000008u; // 8004CF34
  c->lr=0x8004CF3Cu; f_8004C83C(c); // 8004CF38
  c->r[3]=c->r[30]|c->r[30]; // 8004CF3C
  c->r[4]=0u+0x00000000u; // 8004CF40
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004CF44
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004CF48
  c->r[7]=0u+0x00000000u; // 8004CF4C
  c->lr=0x8004CF54u; f_800AD65C(c); // 8004CF50
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004CF54
  c->r[29]=c->r[3]|c->r[3]; // 8004CF58
  c->r[3]=c->r[1]+0x00000028u; // 8004CF5C
  c->f[2]=c->f[1]; // 8004CF60
  c->lr=0x8004CF68u; f_8003A1B0(c); // 8004CF64
  c->r[4]=c->r[3]|c->r[3]; // 8004CF68
  c->r[3]=c->r[29]|c->r[29]; // 8004CF6C
  c->lr=0x8004CF74u; f_800691BC(c); // 8004CF70
L_8004CF74:;
  c->r[3]=c->r[31]|c->r[31]; // 8004CF74
  c->r[4]=0u+0x000000FFu; // 8004CF78
  c->lr=0x8004CF80u; f_8004C8A4(c); // 8004CF7C
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004CF80
  cmps(c,0,(int32_t)c->r[0],15); // 8004CF84
  if (crb(c,0)) { goto L_8004D74C; } // 8004CF88
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004CF8C
  c->r[3]=0u+0x00000002u; // 8004CF90
  {uint32_t ea=c->r[2]+0xFFFF81F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004CF94
  c->r[5]=0u+0x00000000u; // 8004CF98
  c->r[4]=0u+0x000000FFu; // 8004CF9C
  c->r[0]=0u+0xFFFFFF9Cu; // 8004CFA0
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 8004CFA4
  c->r[3]=0u+0x00000005u; // 8004CFA8
  W32(c->r[31]+0x0000005Cu,c->r[5]); // 8004CFAC
  W32(c->r[31]+0x000000A8u,c->r[4]); // 8004CFB0
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004CFB4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 8004CFB8
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8004CFBC
  c->lr=0x8004CFC4u; f_8001B010(c); // 8004CFC0
  goto L_8004D74C; // 8004CFC4
L_8004CFC8:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004CFC8
  c->r[3]=0u+0x00000822u; // 8004CFCC
  c->r[0]=c->r[4]+0x00000001u; // 8004CFD0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004CFD4
  c->lr=0x8004CFDCu; f_80022B5C(c); // 8004CFD8
  c->r[4]=c->r[3]|c->r[3]; // 8004CFDC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CFE0
  c->r[5]=0u+0x00000001u; // 8004CFE4
  c->lr=0x8004CFECu; f_800674FC(c); // 8004CFE8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004CFEC
  c->r[4]=0u+0x0000079Cu; // 8004CFF0
  c->r[5]=0u+0x00000001u; // 8004CFF4
  c->lr=0x8004CFFCu; f_800674FC(c); // 8004CFF8
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004CFFC
  c->r[3]=c->r[31]|c->r[31]; // 8004D000
  c->lr=0x8004D008u; f_8004C5E8(c); // 8004D004
  c->r[4]=c->r[3]|c->r[3]; // 8004D008
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D00C
  c->r[5]=0u+0x00000001u; // 8004D010
  c->lr=0x8004D018u; f_800674FC(c); // 8004D014
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D018
  c->r[3]=c->r[31]|c->r[31]; // 8004D01C
  c->lr=0x8004D024u; f_8004C658(c); // 8004D020
  c->r[4]=c->r[3]|c->r[3]; // 8004D024
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D028
  c->r[5]=0u+0x00000001u; // 8004D02C
  c->lr=0x8004D034u; f_800674FC(c); // 8004D030
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D034
  c->r[4]=0u+0x00000793u; // 8004D038
  c->r[5]=0u+0x00000001u; // 8004D03C
  c->lr=0x8004D044u; f_800674FC(c); // 8004D040
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D044
  c->r[4]=0u+0x00000793u; // 8004D048
  c->lr=0x8004D050u; f_80065994(c); // 8004D04C
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D050
  c->r[29]=c->r[3]|c->r[3]; // 8004D054
  c->r[3]=c->r[31]|c->r[31]; // 8004D058
  c->lr=0x8004D060u; f_8004C658(c); // 8004D05C
  c->r[4]=c->r[3]|c->r[3]; // 8004D060
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D064
  c->lr=0x8004D06Cu; f_80065994(c); // 8004D068
  c->r[4]=0u+0x00000000u; // 8004D06C
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004D070
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004D074
  c->r[7]=0u+0x00000000u; // 8004D078
  c->lr=0x8004D080u; f_800AD65C(c); // 8004D07C
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004D080
  c->r[3]=R32(c->r[31]+0x000000ACu); // 8004D084
  c->r[0]=c->r[0]+c->r[3]; cr0(c,c->r[0]); // 8004D088
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004D08C
  if (!crb(c,0)) { goto L_8004D0A8; } // 8004D090
  c->r[3]=0u-c->r[3]; // 8004D094
  c->r[0]=0u+0x00000000u; // 8004D098
  W32(c->r[31]+0x000000ACu,c->r[3]); // 8004D09C
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004D0A0
  goto L_8004D0C0; // 8004D0A4
L_8004D0A8:;
  cmps(c,0,(int32_t)c->r[0],255); // 8004D0A8
  if (!crb(c,1)) { goto L_8004D0C0; } // 8004D0AC
  c->r[3]=0u-c->r[3]; // 8004D0B0
  c->r[0]=0u+0x000000FFu; // 8004D0B4
  W32(c->r[31]+0x000000ACu,c->r[3]); // 8004D0B8
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004D0BC
L_8004D0C0:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D0C0
  cmps(c,0,(int32_t)c->r[0],50); // 8004D0C4
  if (!crb(c,0)) { goto L_8004D130; } // 8004D0C8
  c->r[3]=c->r[29]|c->r[29]; // 8004D0CC
  c->lr=0x8004D0D4u; f_8004C3A0(c); // 8004D0D0
  c->r[4]=c->r[3]|c->r[3]; // 8004D0D4
  c->r[3]=c->r[1]+0x00000008u; // 8004D0D8
  c->lr=0x8004D0E0u; f_8004C394(c); // 8004D0DC
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004D0E0
  c->r[3]=c->r[1]+0x00000008u; // 8004D0E4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004D0E8
  c->lr=0x8004D0F0u; f_8004D784(c); // 8004D0EC
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004D0F0
  c->r[3]=c->r[1]+0x00000008u; // 8004D0F4
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004D0F8
  c->lr=0x8004D100u; f_8004D78C(c); // 8004D0FC
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004D100
  c->r[3]=c->r[1]+0x00000008u; // 8004D104
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004D108
  c->lr=0x8004D110u; f_8004D794(c); // 8004D10C
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004D110
  c->r[3]=c->r[1]+0x00000008u; // 8004D114
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004D118
  c->lr=0x8004D120u; f_8004D79C(c); // 8004D11C
  c->r[3]=c->r[29]|c->r[29]; // 8004D120
  c->r[4]=c->r[1]+0x00000008u; // 8004D124
  c->lr=0x8004D12Cu; f_8004C83C(c); // 8004D128
  goto L_8004D180; // 8004D12C
L_8004D130:;
  c->r[3]=c->r[29]|c->r[29]; // 8004D130
  c->lr=0x8004D138u; f_8004C3A0(c); // 8004D134
  c->r[4]=c->r[3]|c->r[3]; // 8004D138
  c->r[3]=c->r[1]+0x00000008u; // 8004D13C
  c->lr=0x8004D144u; f_8004C394(c); // 8004D140
  c->r[3]=c->r[1]+0x00000008u; // 8004D144
  c->r[4]=0u+0x00000000u; // 8004D148
  c->lr=0x8004D150u; f_8004D784(c); // 8004D14C
  c->r[3]=c->r[1]+0x00000008u; // 8004D150
  c->r[4]=0u+0x00000000u; // 8004D154
  c->lr=0x8004D15Cu; f_8004D78C(c); // 8004D158
  c->r[3]=c->r[1]+0x00000008u; // 8004D15C
  c->r[4]=0u+0x00000000u; // 8004D160
  c->lr=0x8004D168u; f_8004D794(c); // 8004D164
  c->r[3]=c->r[1]+0x00000008u; // 8004D168
  c->r[4]=0u+0x00000000u; // 8004D16C
  c->lr=0x8004D174u; f_8004D79C(c); // 8004D170
  c->r[3]=c->r[29]|c->r[29]; // 8004D174
  c->r[4]=c->r[1]+0x00000008u; // 8004D178
  c->lr=0x8004D180u; f_8004C83C(c); // 8004D17C
L_8004D180:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D180
  c->r[4]=0u+0x000000FFu; // 8004D184
  c->lr=0x8004D18Cu; f_8004C8A4(c); // 8004D188
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D18C
  cmps(c,0,(int32_t)c->r[0],100); // 8004D190
  if (crb(c,0)) { goto L_8004D74C; } // 8004D194
  c->r[3]=0u+0x00000003u; // 8004D198
  c->r[0]=0u+0x00000000u; // 8004D19C
  W32(c->r[31]+0x0000008Cu,c->r[3]); // 8004D1A0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004D1A4
  goto L_8004D74C; // 8004D1A8
L_8004D1AC:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004D1AC
  c->r[3]=0u+0x00000822u; // 8004D1B0
  c->r[0]=c->r[4]+0x00000001u; // 8004D1B4
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004D1B8
  c->lr=0x8004D1C0u; f_80022B5C(c); // 8004D1BC
  c->r[4]=c->r[3]|c->r[3]; // 8004D1C0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D1C4
  c->r[5]=0u+0x00000001u; // 8004D1C8
  c->lr=0x8004D1D0u; f_800674FC(c); // 8004D1CC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D1D0
  c->r[4]=0u+0x0000079Cu; // 8004D1D4
  c->r[5]=0u+0x00000001u; // 8004D1D8
  c->lr=0x8004D1E0u; f_800674FC(c); // 8004D1DC
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D1E0
  c->r[3]=c->r[31]|c->r[31]; // 8004D1E4
  c->lr=0x8004D1ECu; f_8004C5E8(c); // 8004D1E8
  c->r[4]=c->r[3]|c->r[3]; // 8004D1EC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D1F0
  c->r[5]=0u+0x00000001u; // 8004D1F4
  c->lr=0x8004D1FCu; f_800674FC(c); // 8004D1F8
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D1FC
  c->r[3]=c->r[31]|c->r[31]; // 8004D200
  c->lr=0x8004D208u; f_8004C658(c); // 8004D204
  c->r[4]=c->r[3]|c->r[3]; // 8004D208
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D20C
  c->r[5]=0u+0x00000001u; // 8004D210
  c->lr=0x8004D218u; f_800674FC(c); // 8004D214
  c->r[3]=0u+0x00000820u; // 8004D218
  c->lr=0x8004D220u; f_80022B5C(c); // 8004D21C
  c->r[4]=c->r[3]|c->r[3]; // 8004D220
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D224
  c->r[5]=0u+0x00000001u; // 8004D228
  c->lr=0x8004D230u; f_800674FC(c); // 8004D22C
  c->r[3]=0u+0x00000820u; // 8004D230
  c->lr=0x8004D238u; f_80022B5C(c); // 8004D234
  c->r[4]=c->r[3]|c->r[3]; // 8004D238
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D23C
  c->lr=0x8004D244u; f_80065994(c); // 8004D240
  c->r[4]=0u+0x00000000u; // 8004D244
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004D248
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004D24C
  c->r[7]=0u+0x00000000u; // 8004D250
  c->lr=0x8004D258u; f_800AD65C(c); // 8004D254
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D258
  c->r[29]=c->r[3]|c->r[3]; // 8004D25C
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[6]=RF64(ea);} // 8004D260
  c->r[0]=c->r[0]^0x80000000u; // 8004D264
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004D268
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8004D26C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[6]); // 8004D270
  fcmp(c,0,c->f[0],c->f[31]); // 8004D274
  if (!crb(c,0)) { goto L_8004D33C; } // 8004D278
  {uint32_t ea=c->r[2]+0xFFFF81F8u; c->f[8]=c->ps1[8]=RF32(ea);} // 8004D27C
  c->r[3]=c->r[1]+0x00000020u; // 8004D280
  {uint32_t ea=c->r[31]+0x00000248u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D284
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004D288
  c->f[4]=c->ps1[4]=S(c->f[0]-c->f[8]); // 8004D28C
  {uint32_t ea=c->r[2]+0xFFFF81F4u; c->f[7]=c->ps1[7]=RF32(ea);} // 8004D290
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8004D294
  {uint32_t ea=c->r[1]+0x00000050u; c->f[1]=RF64(ea);} // 8004D298
  c->f[0]=c->ps1[0]=S(c->f[4]/c->f[31]); // 8004D29C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[3]=RF64(ea);} // 8004D2A0
  {uint32_t ea=c->r[2]+0xFFFF81CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 8004D2A4
  {uint32_t ea=c->r[2]+0xFFFF81FCu; c->f[9]=c->ps1[9]=RF32(ea);} // 8004D2A8
  {uint32_t ea=c->r[31]+0x0000024Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8004D2AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[6]); // 8004D2B0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[6]); // 8004D2B4
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[7]); // 8004D2B8
  c->f[30]=c->ps1[30]=S(std::fma(c->f[1],c->f[0],c->f[8])); // 8004D2BC
  c->f[0]=c->ps1[0]=S(c->f[3]/c->f[31]); // 8004D2C0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[5],c->f[0],c->f[7])); // 8004D2C4
  c->f[0]=c->ps1[0]=S(c->f[30]-c->f[8]); // 8004D2C8
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[9]); // 8004D2CC
  c->f[2]=c->f[1]; // 8004D2D0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[4]); // 8004D2D4
  c->f[29]=c->ps1[29]=S(std::fma(c->f[3],c->f[0],c->f[9])); // 8004D2D8
  c->lr=0x8004D2E0u; f_8003A1B0(c); // 8004D2DC
  c->r[4]=c->r[3]|c->r[3]; // 8004D2E0
  c->r[3]=c->r[29]|c->r[29]; // 8004D2E4
  c->lr=0x8004D2ECu; f_800691BC(c); // 8004D2E8
  c->f[1]=c->f[30]; // 8004D2EC
  c->r[3]=c->r[1]+0x00000018u; // 8004D2F0
  c->f[2]=c->f[29]; // 8004D2F4
  c->lr=0x8004D2FCu; f_8003A1B0(c); // 8004D2F8
  c->r[4]=c->r[3]|c->r[3]; // 8004D2FC
  c->r[3]=c->r[29]|c->r[29]; // 8004D300
  c->lr=0x8004D308u; f_80069088(c); // 8004D304
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D308
  {uint32_t ea=c->r[2]+0xFFFF8200u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D30C
  c->r[0]=c->r[0]^0x80000000u; // 8004D310
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8004D314
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[2]=RF64(ea);} // 8004D318
  c->f[0]=c->ps1[0]=S(c->f[31]-c->f[0]); // 8004D31C
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 8004D320
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8004D324
  fcmp(c,0,c->f[1],c->f[0]); // 8004D328
  if (!crb(c,2)) { goto L_8004D364; } // 8004D32C
  c->r[3]=0u+0x00000006u; // 8004D330
  c->lr=0x8004D338u; f_8001B010(c); // 8004D334
  goto L_8004D364; // 8004D338
L_8004D33C:;
  {uint32_t ea=c->r[2]+0xFFFF81CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D33C
  c->r[3]=c->r[1]+0x00000010u; // 8004D340
  c->f[2]=c->f[1]; // 8004D344
  c->lr=0x8004D34Cu; f_8003A1B0(c); // 8004D348
  c->r[4]=c->r[3]|c->r[3]; // 8004D34C
  c->r[3]=c->r[29]|c->r[29]; // 8004D350
  c->lr=0x8004D358u; f_800691BC(c); // 8004D354
  c->r[3]=c->r[29]|c->r[29]; // 8004D358
  c->r[4]=c->r[31]+0x00000248u; // 8004D35C
  c->lr=0x8004D364u; f_80069088(c); // 8004D360
L_8004D364:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D364
  {uint32_t ea=c->r[2]+0xFFFF8204u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D368
  c->r[0]=c->r[0]^0x80000000u; // 8004D36C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004D370
  c->f[2]=c->ps1[2]=S(c->f[0]+c->f[31]); // 8004D374
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[3]=RF64(ea);} // 8004D378
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=RF64(ea);} // 8004D37C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 8004D380
  fcmp(c,0,c->f[0],c->f[2]); // 8004D384
  if (!crb(c,1)) { goto L_8004D470; } // 8004D388
  W32(c->r[1]+0x0000004Cu,c->r[0]); // 8004D38C
  {uint32_t ea=c->r[2]+0xFFFF8208u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D390
  {uint32_t ea=c->r[1]+0x00000048u; c->f[1]=RF64(ea);} // 8004D394
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8004D398
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8004D39C
  fcmp(c,0,c->f[1],c->f[0]); // 8004D3A0
  if (!crb(c,0)) { goto L_8004D470; } // 8004D3A4
  {uint32_t ea=c->r[31]+0x000000B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D3A8
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8004D3AC
  {uint32_t ea=c->r[2]+0xFFFF820Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D3B0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[2]); // 8004D3B4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[0]);} // 8004D3B8
  fcmp(c,0,c->f[0],c->f[1]); // 8004D3BC
  if (!crb(c,0)) { goto L_8004D3D8; } // 8004D3C0
  {uint32_t ea=c->r[2]+0xFFFF81F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D3C4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 8004D3C8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8004D3CC
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8004D3D0
  goto L_8004D3F4; // 8004D3D4
L_8004D3D8:;
  {uint32_t ea=c->r[2]+0xFFFF8200u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D3D8
  fcmp(c,0,c->f[0],c->f[1]); // 8004D3DC
  if (!crb(c,1)) { goto L_8004D3F4; } // 8004D3E0
  {uint32_t ea=c->r[2]+0xFFFF81F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D3E4
  {uint32_t ea=c->r[31]+0x000000B0u; WF32(ea,c->f[1]);} // 8004D3E8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8004D3EC
  {uint32_t ea=c->r[31]+0x000000B4u; WF32(ea,c->f[0]);} // 8004D3F0
L_8004D3F4:;
  c->r[29]=c->r[31]|c->r[31]; // 8004D3F4
  c->r[30]=c->r[31]|c->r[31]; // 8004D3F8
  c->r[28]=0u+0x00000000u; // 8004D3FC
L_8004D400:;
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D400
  c->r[4]=R32(c->r[29]+0x00000250u); // 8004D404
  c->lr=0x8004D40Cu; f_80065994(c); // 8004D408
  c->r[4]=0u+0x00000000u; // 8004D40C
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004D410
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004D414
  c->r[7]=0u+0x00000000u; // 8004D418
  c->lr=0x8004D420u; f_800AD65C(c); // 8004D41C
  c->r[27]=c->r[3]|c->r[3]; // 8004D420
  c->lr=0x8004D428u; f_80069198(c); // 8004D424
  c->r[4]=c->r[3]|c->r[3]; // 8004D428
  c->r[3]=c->r[1]+0x00000040u; // 8004D42C
  c->lr=0x8004D434u; f_8003FD68(c); // 8004D430
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004D434
  c->r[3]=c->r[27]|c->r[27]; // 8004D438
  {uint32_t ea=c->r[30]+0x00000260u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D43C
  c->r[4]=c->r[1]+0x00000040u; // 8004D440
  c->f[0]=c->ps1[0]=S(c->f[1]+c->f[0]); // 8004D444
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8004D448
  c->lr=0x8004D450u; f_80069088(c); // 8004D44C
  c->r[28]=c->r[28]+0x00000001u; // 8004D450
  c->r[30]=c->r[30]+0x00000008u; // 8004D454
  cmps(c,0,(int32_t)c->r[28],4); // 8004D458
  c->r[29]=c->r[29]+0x00000004u; // 8004D45C
  if (crb(c,0)) { IRQCHK(c); goto L_8004D400; } // 8004D460
  {uint32_t ea=c->r[31]+0x000000B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D464
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[0]);} // 8004D468
  goto L_8004D4E0; // 8004D46C
L_8004D470:;
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D470
  c->r[30]=c->r[31]|c->r[31]; // 8004D474
  {uint32_t ea=c->r[31]+0x00000280u; WF32(ea,c->f[0]);} // 8004D478
  c->r[29]=c->r[31]|c->r[31]; // 8004D47C
  c->r[27]=0u+0x00000000u; // 8004D480
L_8004D484:;
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D484
  c->r[4]=R32(c->r[30]+0x00000250u); // 8004D488
  c->lr=0x8004D490u; f_80065994(c); // 8004D48C
  c->r[4]=0u+0x00000000u; // 8004D490
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004D494
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004D498
  c->r[7]=0u+0x00000000u; // 8004D49C
  c->lr=0x8004D4A4u; f_800AD65C(c); // 8004D4A0
  c->r[28]=c->r[3]|c->r[3]; // 8004D4A4
  c->lr=0x8004D4ACu; f_80069198(c); // 8004D4A8
  c->r[4]=c->r[3]|c->r[3]; // 8004D4AC
  c->r[3]=c->r[1]+0x00000038u; // 8004D4B0
  c->lr=0x8004D4B8u; f_8003FD68(c); // 8004D4B4
  {uint32_t ea=c->r[29]+0x00000260u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004D4B8
  c->r[3]=c->r[28]|c->r[28]; // 8004D4BC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8004D4C0
  c->r[4]=c->r[1]+0x00000038u; // 8004D4C4
  c->lr=0x8004D4CCu; f_80069088(c); // 8004D4C8
  c->r[27]=c->r[27]+0x00000001u; // 8004D4CC
  c->r[29]=c->r[29]+0x00000008u; // 8004D4D0
  cmps(c,0,(int32_t)c->r[27],4); // 8004D4D4
  c->r[30]=c->r[30]+0x00000004u; // 8004D4D8
  if (crb(c,0)) { IRQCHK(c); goto L_8004D484; } // 8004D4DC
L_8004D4E0:;
  c->r[29]=0u+0x00000000u; // 8004D4E0
  c->r[27]=0u+0x00000000u; // 8004D4E4
L_8004D4E8:;
  c->r[3]=c->r[27]|c->r[27]; // 8004D4E8
  c->r[30]=0u+0x00000000u; // 8004D4EC
  c->r[4]=0u+0x00000010u; // 8004D4F0
  c->lr=0x8004D4F8u; f_8006FF50(c); // 8004D4F4
  cmps(c,0,(int32_t)c->r[3],0); // 8004D4F8
  if (!crb(c,2)) { goto L_8004D514; } // 8004D4FC
  c->r[3]=c->r[27]|c->r[27]; // 8004D500
  c->r[4]=0u+0x00000020u; // 8004D504
  c->lr=0x8004D50Cu; f_8006FF50(c); // 8004D508
  cmps(c,0,(int32_t)c->r[3],0); // 8004D50C
  if (crb(c,2)) { goto L_8004D518; } // 8004D510
L_8004D514:;
  c->r[30]=0u+0x00000001u; // 8004D514
L_8004D518:;
  c->r[3]=c->r[29]|c->r[30]; // 8004D518
  c->r[27]=c->r[27]+0x00000001u; // 8004D51C
  c->r[0]=0u-c->r[3]; // 8004D520
  c->r[0]=c->r[0]|c->r[3]; // 8004D524
  cmpu(c,0,c->r[27],0x00000002u); // 8004D528
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 8004D52C
  if (crb(c,0)) { IRQCHK(c); goto L_8004D4E8; } // 8004D530
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D534
  cmps(c,0,(int32_t)c->r[0],600); // 8004D538
  if (!crb(c,0)) { goto L_8004D548; } // 8004D53C
  cmps(c,0,(int32_t)c->r[29],0); // 8004D540
  if (crb(c,2)) { goto L_8004D610; } // 8004D544
L_8004D548:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D548
  c->lr=0x8004D550u; f_8004C848(c); // 8004D54C
  c->r[3]=0u+0x00000822u; // 8004D550
  c->lr=0x8004D558u; f_80022B5C(c); // 8004D554
  c->r[4]=c->r[3]|c->r[3]; // 8004D558
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D55C
  c->lr=0x8004D564u; f_80065994(c); // 8004D560
  c->r[4]=c->r[3]|c->r[3]; // 8004D564
  c->r[3]=c->r[31]|c->r[31]; // 8004D568
  c->lr=0x8004D570u; f_8004C6C8(c); // 8004D56C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D570
  c->r[4]=0u+0x0000079Cu; // 8004D574
  c->lr=0x8004D57Cu; f_80065994(c); // 8004D578
  c->r[4]=c->r[3]|c->r[3]; // 8004D57C
  c->r[3]=c->r[31]|c->r[31]; // 8004D580
  c->lr=0x8004D588u; f_8004C6C8(c); // 8004D584
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D588
  c->r[3]=c->r[31]|c->r[31]; // 8004D58C
  c->lr=0x8004D594u; f_8004C5E8(c); // 8004D590
  c->r[4]=c->r[3]|c->r[3]; // 8004D594
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D598
  c->lr=0x8004D5A0u; f_80065994(c); // 8004D59C
  c->r[4]=c->r[3]|c->r[3]; // 8004D5A0
  c->r[3]=c->r[31]|c->r[31]; // 8004D5A4
  c->lr=0x8004D5ACu; f_8004C6C8(c); // 8004D5A8
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D5AC
  c->r[3]=c->r[31]|c->r[31]; // 8004D5B0
  c->lr=0x8004D5B8u; f_8004C658(c); // 8004D5B4
  c->r[4]=c->r[3]|c->r[3]; // 8004D5B8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D5BC
  c->lr=0x8004D5C4u; f_80065994(c); // 8004D5C0
  c->r[4]=c->r[3]|c->r[3]; // 8004D5C4
  c->r[3]=c->r[31]|c->r[31]; // 8004D5C8
  c->lr=0x8004D5D0u; f_8004C6C8(c); // 8004D5CC
  c->r[3]=0u+0x00000820u; // 8004D5D0
  c->lr=0x8004D5D8u; f_80022B5C(c); // 8004D5D4
  c->r[4]=c->r[3]|c->r[3]; // 8004D5D8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D5DC
  c->lr=0x8004D5E4u; f_80065994(c); // 8004D5E0
  c->r[4]=c->r[3]|c->r[3]; // 8004D5E4
  c->r[3]=c->r[31]|c->r[31]; // 8004D5E8
  c->lr=0x8004D5F0u; f_8004C6C8(c); // 8004D5EC
  c->r[5]=0u+0x00000004u; // 8004D5F0
  c->r[4]=0u+0x00000000u; // 8004D5F4
  c->r[3]=0u+0x000000FFu; // 8004D5F8
  c->r[0]=0u+0xFFFFFFE2u; // 8004D5FC
  W32(c->r[31]+0x0000008Cu,c->r[5]); // 8004D600
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004D604
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004D608
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004D60C
L_8004D610:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D610
  c->r[4]=0u+0x000000FFu; // 8004D614
  c->lr=0x8004D61Cu; f_8004C8A4(c); // 8004D618
  goto L_8004D74C; // 8004D61C
L_8004D620:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004D620
  c->r[3]=0u+0x00000822u; // 8004D624
  c->r[0]=c->r[4]+0x00000001u; // 8004D628
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004D62C
  c->lr=0x8004D634u; f_80022B5C(c); // 8004D630
  c->r[4]=c->r[3]|c->r[3]; // 8004D634
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D638
  c->r[5]=0u+0x00000001u; // 8004D63C
  c->lr=0x8004D644u; f_800674FC(c); // 8004D640
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D644
  c->r[4]=0u+0x0000079Cu; // 8004D648
  c->r[5]=0u+0x00000001u; // 8004D64C
  c->lr=0x8004D654u; f_800674FC(c); // 8004D650
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D654
  c->r[3]=c->r[31]|c->r[31]; // 8004D658
  c->lr=0x8004D660u; f_8004C5E8(c); // 8004D65C
  c->r[4]=c->r[3]|c->r[3]; // 8004D660
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D664
  c->r[5]=0u+0x00000001u; // 8004D668
  c->lr=0x8004D670u; f_800674FC(c); // 8004D66C
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004D670
  c->r[3]=c->r[31]|c->r[31]; // 8004D674
  c->lr=0x8004D67Cu; f_8004C658(c); // 8004D678
  c->r[4]=c->r[3]|c->r[3]; // 8004D67C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D680
  c->r[5]=0u+0x00000001u; // 8004D684
  c->lr=0x8004D68Cu; f_800674FC(c); // 8004D688
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D68C
  c->r[4]=0u+0x0000079Cu; // 8004D690
  c->r[5]=0u+0x00000001u; // 8004D694
  c->lr=0x8004D69Cu; f_800674FC(c); // 8004D698
  c->r[3]=0u+0x00000820u; // 8004D69C
  c->lr=0x8004D6A4u; f_80022B5C(c); // 8004D6A0
  c->r[4]=c->r[3]|c->r[3]; // 8004D6A4
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D6A8
  c->r[5]=0u+0x00000001u; // 8004D6AC
  c->lr=0x8004D6B4u; f_800674FC(c); // 8004D6B0
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D6B4
  c->r[4]=0u+0x0000079Cu; // 8004D6B8
  c->lr=0x8004D6C0u; f_80065994(c); // 8004D6BC
  c->r[4]=R32(c->r[31]+0x000000A8u); // 8004D6C0
  c->r[0]=R32(c->r[31]+0x000000ACu); // 8004D6C4
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 8004D6C8
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004D6CC
  if (!crb(c,1)) { goto L_8004D70C; } // 8004D6D0
  c->lr=0x8004D6D8u; f_8004C3A0(c); // 8004D6D4
  c->r[4]=c->r[3]|c->r[3]; // 8004D6D8
  c->r[3]=c->r[1]+0x00000008u; // 8004D6DC
  c->lr=0x8004D6E4u; f_8004C394(c); // 8004D6E0
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004D6E4
  c->r[3]=c->r[1]+0x00000008u; // 8004D6E8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004D6EC
  c->lr=0x8004D6F4u; f_8004D784(c); // 8004D6F0
  c->r[3]=c->r[31]|c->r[31]; // 8004D6F4
  c->r[4]=c->r[1]+0x00000008u; // 8004D6F8
  c->lr=0x8004D700u; f_8004C70C(c); // 8004D6FC
  c->r[4]=R32(c->r[31]+0x000000A8u); // 8004D700
  c->r[3]=c->r[31]|c->r[31]; // 8004D704
  c->lr=0x8004D70Cu; f_8004C8A4(c); // 8004D708
L_8004D70C:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D70C
  cmps(c,0,(int32_t)c->r[0],15); // 8004D710
  if (crb(c,0)) { goto L_8004D74C; } // 8004D714
  c->r[3]=c->r[31]|c->r[31]; // 8004D718
  c->lr=0x8004D720u; f_8004C848(c); // 8004D71C
  c->r[3]=c->r[31]|c->r[31]; // 8004D720
  c->r[4]=0u+0x00000003u; // 8004D724
  c->lr=0x8004D72Cu; f_8004C3A8(c); // 8004D728
  c->r[5]=0u+0x00000000u; // 8004D72C
  c->r[0]=0u+0x0000000Fu; // 8004D730
  W32(c->r[31]+0x0000005Cu,c->r[5]); // 8004D734
  c->r[3]=c->r[31]|c->r[31]; // 8004D738
  c->r[4]=0u+0x00000000u; // 8004D73C
  W32(c->r[31]+0x000000A8u,c->r[5]); // 8004D740
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004D744
  c->lr=0x8004D74Cu; f_8004C8A4(c); // 8004D748
L_8004D74C:;
  c->r[11]=c->r[1]+0x00000070u; // 8004D74C
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,31,ea,0,0);} // 8004D750
  {uint32_t ea=c->r[1]+0x00000090u; c->f[31]=RF64(ea);} // 8004D754
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,30,ea,0,0);} // 8004D758
  {uint32_t ea=c->r[1]+0x00000080u; c->f[30]=RF64(ea);} // 8004D75C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,29,ea,0,0);} // 8004D760
  {uint32_t ea=c->r[1]+0x00000070u; c->f[29]=RF64(ea);} // 8004D764
  c->lr=0x8004D76Cu; f_800ADA78(c); // 8004D768
  c->r[0]=R32(c->r[1]+0x000000A4u); // 8004D76C
  c->lr=c->r[0]; // 8004D770
  c->r[1]=c->r[1]+0x000000A0u; // 8004D774
  return; // 8004D778
}

// isOKs__Q44gbla8Resource4Font18WiiMenuFontManagerFv
void f_8004D77C(Ctx* __restrict c) {
  trace_call(0x8004D77Cu);
  c->r[3]=R8(c->r[3]+0x00000154u); // 8004D77C
  return; // 8004D780
}

// setA__Q25Alice5ColorFUc
void f_8004D784(Ctx* __restrict c) {
  trace_call(0x8004D784u);
  W8(c->r[3]+0x00000003u,c->r[4]); // 8004D784
  return; // 8004D788
}

// setR__Q25Alice5ColorFUc
void f_8004D78C(Ctx* __restrict c) {
  trace_call(0x8004D78Cu);
  W8(c->r[3]+0x00000000u,c->r[4]); // 8004D78C
  return; // 8004D790
}

// setG__Q25Alice5ColorFUc
void f_8004D794(Ctx* __restrict c) {
  trace_call(0x8004D794u);
  W8(c->r[3]+0x00000001u,c->r[4]); // 8004D794
  return; // 8004D798
}

// setB__Q25Alice5ColorFUc
void f_8004D79C(Ctx* __restrict c) {
  trace_call(0x8004D79Cu);
  W8(c->r[3]+0x00000002u,c->r[4]); // 8004D79C
  return; // 8004D7A0
}

// procRankDownScene__Q24gbla10GblaRankupFv
void f_8004D7A4(Ctx* __restrict c) {
  trace_call(0x8004D7A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004D7A4
  c->r[0]=c->lr; // 8004D7A8
  c->r[4]=0u+0x00000000u; // 8004D7AC
  c->r[5]=0u+0x00000000u; // 8004D7B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004D7B4
  c->r[6]=0u+0x00000000u; // 8004D7B8
  c->r[7]=0u+0x00000000u; // 8004D7BC
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 8004D7C0
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 8004D7C4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004D7C8
  c->r[31]=c->r[3]|c->r[3]; // 8004D7CC
  c->r[3]=c->r[1]+0x00000008u; // 8004D7D0
  W32(c->r[1]+0x00000038u,c->r[30]); // 8004D7D4
  W32(c->r[1]+0x00000034u,c->r[29]); // 8004D7D8
  W32(c->r[1]+0x00000030u,c->r[28]); // 8004D7DC
  c->lr=0x8004D7E4u; f_8004B928(c); // 8004D7E0
  c->r[0]=R32(c->r[31]+0x00000090u); // 8004D7E4
  cmps(c,0,(int32_t)c->r[0],-1); // 8004D7E8
  if (crb(c,2)) { goto L_8004D814; } // 8004D7EC
  cmps(c,0,(int32_t)c->r[0],0); // 8004D7F0
  if (crb(c,2)) { goto L_8004D900; } // 8004D7F4
  cmps(c,0,(int32_t)c->r[0],1); // 8004D7F8
  if (crb(c,2)) { goto L_8004D9A8; } // 8004D7FC
  cmps(c,0,(int32_t)c->r[0],2); // 8004D800
  if (crb(c,2)) { goto L_8004DBE8; } // 8004D804
  cmps(c,0,(int32_t)c->r[0],3); // 8004D808
  if (crb(c,2)) { goto L_8004DCD4; } // 8004D80C
  goto L_8004DCE0; // 8004D810
L_8004D814:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D814
  cmps(c,0,(int32_t)c->r[0],0); // 8004D818
  if (!crb(c,2)) { goto L_8004D848; } // 8004D81C
  c->lr=0x8004D824u; f_800241D4(c); // 8004D820
  c->lr=0x8004D828u; f_80019F7C(c); // 8004D824
  cmps(c,0,(int32_t)c->r[3],0); // 8004D828
  if (!crb(c,2)) { goto L_8004D848; } // 8004D82C
  c->lr=0x8004D834u; f_800241D4(c); // 8004D830
  c->lr=0x8004D838u; f_80019FAC(c); // 8004D834
  cmps(c,0,(int32_t)c->r[3],0); // 8004D838
  if (!crb(c,2)) { goto L_8004D848; } // 8004D83C
  c->lr=0x8004D844u; f_800241D4(c); // 8004D840
  c->lr=0x8004D848u; f_80019EA4(c); // 8004D844
L_8004D848:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004D848
  c->r[3]=c->r[31]+0x000000C4u; // 8004D84C
  c->r[0]=c->r[4]+0x00000001u; // 8004D850
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004D854
  c->lr=0x8004D85Cu; f_8004D77C(c); // 8004D858
  cmps(c,0,(int32_t)c->r[3],0); // 8004D85C
  if (crb(c,2)) { goto L_8004D8C4; } // 8004D860
  c->r[3]=0u+0x00000821u; // 8004D864
  c->lr=0x8004D86Cu; f_80022B5C(c); // 8004D868
  c->r[4]=c->r[3]|c->r[3]; // 8004D86C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D870
  c->r[5]=0u+0x00000001u; // 8004D874
  c->lr=0x8004D87Cu; f_800674FC(c); // 8004D878
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D87C
  c->r[4]=0u+0x0000079Cu; // 8004D880
  c->r[5]=0u+0x00000001u; // 8004D884
  c->lr=0x8004D88Cu; f_800674FC(c); // 8004D888
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004D88C
  c->r[3]=c->r[31]|c->r[31]; // 8004D890
  c->lr=0x8004D898u; f_8004C5E8(c); // 8004D894
  c->r[4]=c->r[3]|c->r[3]; // 8004D898
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D89C
  c->r[5]=0u+0x00000001u; // 8004D8A0
  c->lr=0x8004D8A8u; f_800674FC(c); // 8004D8A4
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004D8A8
  c->r[3]=c->r[31]|c->r[31]; // 8004D8AC
  c->lr=0x8004D8B4u; f_8004C658(c); // 8004D8B0
  c->r[4]=c->r[3]|c->r[3]; // 8004D8B4
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D8B8
  c->r[5]=0u+0x00000001u; // 8004D8BC
  c->lr=0x8004D8C4u; f_800674FC(c); // 8004D8C0
L_8004D8C4:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D8C4
  cmps(c,0,(int32_t)c->r[0],50); // 8004D8C8
  if (crb(c,0)) { goto L_8004D8F0; } // 8004D8CC
  c->r[4]=0u+0x00000000u; // 8004D8D0
  c->r[0]=0u+0x00000019u; // 8004D8D4
  W32(c->r[31]+0x00000090u,c->r[4]); // 8004D8D8
  c->r[3]=0u+0x00000007u; // 8004D8DC
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004D8E0
  W32(c->r[31]+0x000000A8u,c->r[4]); // 8004D8E4
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004D8E8
  c->lr=0x8004D8F0u; f_8001B010(c); // 8004D8EC
L_8004D8F0:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D8F0
  c->r[4]=0u+0x000000FFu; // 8004D8F4
  c->lr=0x8004D8FCu; f_8004C8A4(c); // 8004D8F8
  goto L_8004DCE0; // 8004D8FC
L_8004D900:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004D900
  c->r[3]=0u+0x00000821u; // 8004D904
  c->r[0]=c->r[4]+0x00000001u; // 8004D908
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004D90C
  c->lr=0x8004D914u; f_80022B5C(c); // 8004D910
  c->r[4]=c->r[3]|c->r[3]; // 8004D914
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D918
  c->r[5]=0u+0x00000001u; // 8004D91C
  c->lr=0x8004D924u; f_800674FC(c); // 8004D920
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D924
  c->r[4]=0u+0x0000079Cu; // 8004D928
  c->r[5]=0u+0x00000001u; // 8004D92C
  c->lr=0x8004D934u; f_800674FC(c); // 8004D930
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004D934
  c->r[3]=c->r[31]|c->r[31]; // 8004D938
  c->lr=0x8004D940u; f_8004C5E8(c); // 8004D93C
  c->r[4]=c->r[3]|c->r[3]; // 8004D940
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D944
  c->r[5]=0u+0x00000001u; // 8004D948
  c->lr=0x8004D950u; f_800674FC(c); // 8004D94C
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004D950
  c->r[3]=c->r[31]|c->r[31]; // 8004D954
  c->lr=0x8004D95Cu; f_8004C658(c); // 8004D958
  c->r[4]=c->r[3]|c->r[3]; // 8004D95C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D960
  c->r[5]=0u+0x00000001u; // 8004D964
  c->lr=0x8004D96Cu; f_800674FC(c); // 8004D968
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004D96C
  cmps(c,0,(int32_t)c->r[0],100); // 8004D970
  if (crb(c,0)) { goto L_8004D998; } // 8004D974
  c->r[5]=0u+0x00000001u; // 8004D978
  c->r[4]=0u+0x00000000u; // 8004D97C
  c->r[3]=0u+0x000000FFu; // 8004D980
  c->r[0]=0u+0xFFFFFFE2u; // 8004D984
  W32(c->r[31]+0x00000090u,c->r[5]); // 8004D988
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004D98C
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004D990
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004D994
L_8004D998:;
  c->r[3]=c->r[31]|c->r[31]; // 8004D998
  c->r[4]=0u+0x000000FFu; // 8004D99C
  c->lr=0x8004D9A4u; f_8004C8A4(c); // 8004D9A0
  goto L_8004DCE0; // 8004D9A4
L_8004D9A8:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004D9A8
  c->r[3]=0u+0x00000821u; // 8004D9AC
  c->r[0]=c->r[4]+0x00000001u; // 8004D9B0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004D9B4
  c->lr=0x8004D9BCu; f_80022B5C(c); // 8004D9B8
  c->r[4]=c->r[3]|c->r[3]; // 8004D9BC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D9C0
  c->r[5]=0u+0x00000001u; // 8004D9C4
  c->lr=0x8004D9CCu; f_800674FC(c); // 8004D9C8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D9CC
  c->r[4]=0u+0x0000079Cu; // 8004D9D0
  c->r[5]=0u+0x00000001u; // 8004D9D4
  c->lr=0x8004D9DCu; f_800674FC(c); // 8004D9D8
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004D9DC
  c->r[3]=c->r[31]|c->r[31]; // 8004D9E0
  c->lr=0x8004D9E8u; f_8004C5E8(c); // 8004D9E4
  c->r[4]=c->r[3]|c->r[3]; // 8004D9E8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004D9EC
  c->r[5]=0u+0x00000001u; // 8004D9F0
  c->lr=0x8004D9F8u; f_800674FC(c); // 8004D9F4
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004D9F8
  c->r[3]=c->r[31]|c->r[31]; // 8004D9FC
  c->lr=0x8004DA04u; f_8004C658(c); // 8004DA00
  c->r[4]=c->r[3]|c->r[3]; // 8004DA04
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DA08
  c->r[5]=0u+0x00000001u; // 8004DA0C
  c->lr=0x8004DA14u; f_800674FC(c); // 8004DA10
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004DA14
  c->r[3]=c->r[31]|c->r[31]; // 8004DA18
  c->lr=0x8004DA20u; f_8004C5E8(c); // 8004DA1C
  c->r[4]=c->r[3]|c->r[3]; // 8004DA20
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DA24
  c->lr=0x8004DA2Cu; f_80065994(c); // 8004DA28
  c->r[4]=R32(c->r[31]+0x00000098u); // 8004DA2C
  c->r[30]=c->r[3]|c->r[3]; // 8004DA30
  c->r[3]=c->r[31]|c->r[31]; // 8004DA34
  c->lr=0x8004DA3Cu; f_8004C658(c); // 8004DA38
  c->r[4]=c->r[3]|c->r[3]; // 8004DA3C
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DA40
  c->lr=0x8004DA48u; f_80065994(c); // 8004DA44
  c->r[4]=R32(c->r[31]+0x000000A8u); // 8004DA48
  c->r[29]=c->r[3]|c->r[3]; // 8004DA4C
  c->r[0]=R32(c->r[31]+0x000000ACu); // 8004DA50
  c->r[0]=c->r[4]+c->r[0]; cr0(c,c->r[0]); // 8004DA54
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004DA58
  if (!crb(c,1)) { goto L_8004DB24; } // 8004DA5C
  c->r[3]=c->r[30]|c->r[30]; // 8004DA60
  c->lr=0x8004DA68u; f_8004C3A0(c); // 8004DA64
  c->r[4]=c->r[3]|c->r[3]; // 8004DA68
  c->r[3]=c->r[1]+0x00000008u; // 8004DA6C
  c->lr=0x8004DA74u; f_8004C394(c); // 8004DA70
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004DA74
  c->r[3]=c->r[1]+0x00000008u; // 8004DA78
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004DA7C
  c->lr=0x8004DA84u; f_8004D784(c); // 8004DA80
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004DA84
  c->r[3]=c->r[1]+0x00000008u; // 8004DA88
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004DA8C
  c->lr=0x8004DA94u; f_8004D78C(c); // 8004DA90
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004DA94
  c->r[3]=c->r[1]+0x00000008u; // 8004DA98
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004DA9C
  c->lr=0x8004DAA4u; f_8004D794(c); // 8004DAA0
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004DAA4
  c->r[3]=c->r[1]+0x00000008u; // 8004DAA8
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004DAAC
  c->lr=0x8004DAB4u; f_8004D79C(c); // 8004DAB0
  c->r[3]=c->r[30]|c->r[30]; // 8004DAB4
  c->r[4]=c->r[1]+0x00000008u; // 8004DAB8
  c->lr=0x8004DAC0u; f_8004C83C(c); // 8004DABC
  c->r[4]=R32(c->r[31]+0x000000A8u); // 8004DAC0
  c->r[0]=0u+0x43300000u; // 8004DAC4
  W32(c->r[1]+0x00000020u,c->r[0]); // 8004DAC8
  c->r[3]=c->r[29]|c->r[29]; // 8004DACC
  c->r[0]=c->r[4]^0x80000000u; // 8004DAD0
  {uint32_t ea=c->r[2]+0xFFFF8210u; c->f[2]=RF64(ea);} // 8004DAD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004DAD8
  c->r[4]=0u+0x00000000u; // 8004DADC
  {uint32_t ea=c->r[2]+0xFFFF81ECu; c->f[0]=c->ps1[0]=RF32(ea);} // 8004DAE0
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004DAE4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=RF64(ea);} // 8004DAE8
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004DAEC
  c->r[7]=0u+0x00000000u; // 8004DAF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8004DAF4
  c->f[31]=c->ps1[31]=S(c->f[1]/c->f[0]); // 8004DAF8
  c->lr=0x8004DB00u; f_800AD65C(c); // 8004DAFC
  c->f[1]=c->f[31]; // 8004DB00
  c->r[29]=c->r[3]|c->r[3]; // 8004DB04
  c->f[2]=c->f[31]; // 8004DB08
  c->r[3]=c->r[1]+0x00000018u; // 8004DB0C
  c->lr=0x8004DB14u; f_8003A1B0(c); // 8004DB10
  c->r[4]=c->r[3]|c->r[3]; // 8004DB14
  c->r[3]=c->r[29]|c->r[29]; // 8004DB18
  c->lr=0x8004DB20u; f_800691BC(c); // 8004DB1C
  goto L_8004DBAC; // 8004DB20
L_8004DB24:;
  c->r[3]=c->r[30]|c->r[30]; // 8004DB24
  c->lr=0x8004DB2Cu; f_8004C3A0(c); // 8004DB28
  c->r[4]=c->r[3]|c->r[3]; // 8004DB2C
  c->r[3]=c->r[1]+0x00000008u; // 8004DB30
  c->lr=0x8004DB38u; f_8004C394(c); // 8004DB34
  c->r[3]=c->r[1]+0x00000008u; // 8004DB38
  c->r[4]=0u+0x00000000u; // 8004DB3C
  c->lr=0x8004DB44u; f_8004D784(c); // 8004DB40
  c->r[3]=c->r[1]+0x00000008u; // 8004DB44
  c->r[4]=0u+0x00000000u; // 8004DB48
  c->lr=0x8004DB50u; f_8004D78C(c); // 8004DB4C
  c->r[3]=c->r[1]+0x00000008u; // 8004DB50
  c->r[4]=0u+0x00000000u; // 8004DB54
  c->lr=0x8004DB5Cu; f_8004D794(c); // 8004DB58
  c->r[3]=c->r[1]+0x00000008u; // 8004DB5C
  c->r[4]=0u+0x00000000u; // 8004DB60
  c->lr=0x8004DB68u; f_8004D79C(c); // 8004DB64
  c->r[3]=c->r[30]|c->r[30]; // 8004DB68
  c->r[4]=c->r[1]+0x00000008u; // 8004DB6C
  c->lr=0x8004DB74u; f_8004C83C(c); // 8004DB70
  c->r[3]=c->r[29]|c->r[29]; // 8004DB74
  c->r[4]=0u+0x00000000u; // 8004DB78
  c->r[5]=c->r[13]+0xFFFF8070u; // 8004DB7C
  c->r[6]=c->r[13]+0xFFFF8088u; // 8004DB80
  c->r[7]=0u+0x00000000u; // 8004DB84
  c->lr=0x8004DB8Cu; f_800AD65C(c); // 8004DB88
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8004DB8C
  c->r[29]=c->r[3]|c->r[3]; // 8004DB90
  c->r[3]=c->r[1]+0x00000010u; // 8004DB94
  c->f[2]=c->f[1]; // 8004DB98
  c->lr=0x8004DBA0u; f_8003A1B0(c); // 8004DB9C
  c->r[4]=c->r[3]|c->r[3]; // 8004DBA0
  c->r[3]=c->r[29]|c->r[29]; // 8004DBA4
  c->lr=0x8004DBACu; f_800691BC(c); // 8004DBA8
L_8004DBAC:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004DBAC
  cmps(c,0,(int32_t)c->r[0],15); // 8004DBB0
  if (crb(c,0)) { goto L_8004DBD8; } // 8004DBB4
  c->r[5]=0u+0x00000002u; // 8004DBB8
  c->r[4]=0u+0x00000000u; // 8004DBBC
  c->r[3]=0u+0x000000FFu; // 8004DBC0
  c->r[0]=0u+0xFFFFFFF1u; // 8004DBC4
  W32(c->r[31]+0x00000090u,c->r[5]); // 8004DBC8
  W32(c->r[31]+0x0000005Cu,c->r[4]); // 8004DBCC
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004DBD0
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004DBD4
L_8004DBD8:;
  c->r[3]=c->r[31]|c->r[31]; // 8004DBD8
  c->r[4]=0u+0x000000FFu; // 8004DBDC
  c->lr=0x8004DBE4u; f_8004C8A4(c); // 8004DBE0
  goto L_8004DCE0; // 8004DBE4
L_8004DBE8:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004DBE8
  c->r[3]=0u+0x00000821u; // 8004DBEC
  c->r[0]=c->r[4]+0x00000001u; // 8004DBF0
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004DBF4
  c->lr=0x8004DBFCu; f_80022B5C(c); // 8004DBF8
  c->r[4]=c->r[3]|c->r[3]; // 8004DBFC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DC00
  c->r[5]=0u+0x00000001u; // 8004DC04
  c->lr=0x8004DC0Cu; f_800674FC(c); // 8004DC08
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DC0C
  c->r[4]=0u+0x0000079Cu; // 8004DC10
  c->r[5]=0u+0x00000001u; // 8004DC14
  c->lr=0x8004DC1Cu; f_800674FC(c); // 8004DC18
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004DC1C
  c->r[3]=c->r[31]|c->r[31]; // 8004DC20
  c->lr=0x8004DC28u; f_8004C5E8(c); // 8004DC24
  c->r[4]=c->r[3]|c->r[3]; // 8004DC28
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DC2C
  c->r[5]=0u+0x00000001u; // 8004DC30
  c->lr=0x8004DC38u; f_800674FC(c); // 8004DC34
  c->r[4]=R32(c->r[31]+0x0000009Cu); // 8004DC38
  c->r[3]=c->r[31]|c->r[31]; // 8004DC3C
  c->lr=0x8004DC44u; f_8004C658(c); // 8004DC40
  c->r[4]=c->r[3]|c->r[3]; // 8004DC44
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DC48
  c->r[5]=0u+0x00000001u; // 8004DC4C
  c->lr=0x8004DC54u; f_800674FC(c); // 8004DC50
  c->r[29]=0u+0x00000000u; // 8004DC54
  c->r[28]=0u+0x00000000u; // 8004DC58
L_8004DC5C:;
  c->r[3]=c->r[28]|c->r[28]; // 8004DC5C
  c->r[30]=0u+0x00000000u; // 8004DC60
  c->r[4]=0u+0x00000010u; // 8004DC64
  c->lr=0x8004DC6Cu; f_8006FF50(c); // 8004DC68
  cmps(c,0,(int32_t)c->r[3],0); // 8004DC6C
  if (!crb(c,2)) { goto L_8004DC88; } // 8004DC70
  c->r[3]=c->r[28]|c->r[28]; // 8004DC74
  c->r[4]=0u+0x00000020u; // 8004DC78
  c->lr=0x8004DC80u; f_8006FF50(c); // 8004DC7C
  cmps(c,0,(int32_t)c->r[3],0); // 8004DC80
  if (crb(c,2)) { goto L_8004DC8C; } // 8004DC84
L_8004DC88:;
  c->r[30]=0u+0x00000001u; // 8004DC88
L_8004DC8C:;
  c->r[3]=c->r[29]|c->r[30]; // 8004DC8C
  c->r[28]=c->r[28]+0x00000001u; // 8004DC90
  c->r[0]=0u-c->r[3]; // 8004DC94
  c->r[0]=c->r[0]|c->r[3]; // 8004DC98
  cmpu(c,0,c->r[28],0x00000002u); // 8004DC9C
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 8004DCA0
  if (crb(c,0)) { IRQCHK(c); goto L_8004DC5C; } // 8004DCA4
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004DCA8
  cmps(c,0,(int32_t)c->r[0],600); // 8004DCAC
  if (!crb(c,0)) { goto L_8004DCBC; } // 8004DCB0
  cmps(c,0,(int32_t)c->r[29],0); // 8004DCB4
  if (crb(c,2)) { goto L_8004DCC4; } // 8004DCB8
L_8004DCBC:;
  c->r[0]=0u+0x00000003u; // 8004DCBC
  W32(c->r[31]+0x00000090u,c->r[0]); // 8004DCC0
L_8004DCC4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004DCC4
  c->r[4]=0u+0x000000FFu; // 8004DCC8
  c->lr=0x8004DCD0u; f_8004C8A4(c); // 8004DCCC
  goto L_8004DCE0; // 8004DCD0
L_8004DCD4:;
  c->r[3]=c->r[31]|c->r[31]; // 8004DCD4
  c->r[4]=0u+0x00000004u; // 8004DCD8
  c->lr=0x8004DCE0u; f_8004C3A8(c); // 8004DCDC
L_8004DCE0:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004DCE0
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 8004DCE4
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8004DCE8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8004DCEC
  c->r[30]=R32(c->r[1]+0x00000038u); // 8004DCF0
  c->r[29]=R32(c->r[1]+0x00000034u); // 8004DCF4
  c->r[28]=R32(c->r[1]+0x00000030u); // 8004DCF8
  c->lr=c->r[0]; // 8004DCFC
  c->r[1]=c->r[1]+0x00000050u; // 8004DD00
  return; // 8004DD04
}

// getWeaponSID__Q24gbla10GblaRankupFQ34gbla5param12_GBLA_WEAPON
void f_8004DD08(Ctx* __restrict c) {
  trace_call(0x8004DD08u);
  cmps(c,0,(int32_t)c->r[4],2); // 8004DD08
  if (crb(c,2)) { goto L_8004DD38; } // 8004DD0C
  cmps(c,0,(int32_t)c->r[4],3); // 8004DD10
  if (crb(c,2)) { goto L_8004DD40; } // 8004DD14
  cmps(c,0,(int32_t)c->r[4],5); // 8004DD18
  if (crb(c,2)) { goto L_8004DD48; } // 8004DD1C
  cmps(c,0,(int32_t)c->r[4],6); // 8004DD20
  if (crb(c,2)) { goto L_8004DD50; } // 8004DD24
  cmps(c,0,(int32_t)c->r[4],7); // 8004DD28
  if (crb(c,2)) { goto L_8004DD58; } // 8004DD2C
  c->r[3]=0u+0x0000081Cu; // 8004DD30
  f_80022B5C(c); return; // 8004DD34
L_8004DD38:;
  c->r[3]=0u+0x0000081Eu; // 8004DD38
  f_80022B5C(c); return; // 8004DD3C
L_8004DD40:;
  c->r[3]=0u+0x0000081Au; // 8004DD40
  f_80022B5C(c); return; // 8004DD44
L_8004DD48:;
  c->r[3]=0u+0x0000081Du; // 8004DD48
  f_80022B5C(c); return; // 8004DD4C
L_8004DD50:;
  c->r[3]=0u+0x0000081Fu; // 8004DD50
  f_80022B5C(c); return; // 8004DD54
L_8004DD58:;
  c->r[3]=0u+0x0000081Bu; // 8004DD58
  f_80022B5C(c); return; // 8004DD5C
}

// procWeaponGet__Q24gbla10GblaRankupFv
void f_8004DD60(Ctx* __restrict c) {
  trace_call(0x8004DD60u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004DD60
  c->r[0]=c->lr; // 8004DD64
  c->r[4]=0u+0x00000000u; // 8004DD68
  c->r[5]=0u+0x00000000u; // 8004DD6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004DD70
  c->r[6]=0u+0x00000000u; // 8004DD74
  c->r[7]=0u+0x00000000u; // 8004DD78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004DD7C
  c->r[31]=c->r[3]|c->r[3]; // 8004DD80
  c->r[3]=c->r[1]+0x00000008u; // 8004DD84
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004DD88
  W32(c->r[1]+0x00000014u,c->r[29]); // 8004DD8C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8004DD90
  c->lr=0x8004DD98u; f_8004B928(c); // 8004DD94
  c->r[0]=R32(c->r[31]+0x00000094u); // 8004DD98
  cmps(c,0,(int32_t)c->r[0],0); // 8004DD9C
  if (crb(c,2)) { goto L_8004DDC0; } // 8004DDA0
  cmps(c,0,(int32_t)c->r[0],1); // 8004DDA4
  if (crb(c,2)) { goto L_8004DE50; } // 8004DDA8
  cmps(c,0,(int32_t)c->r[0],2); // 8004DDAC
  if (crb(c,2)) { goto L_8004DF70; } // 8004DDB0
  cmps(c,0,(int32_t)c->r[0],3); // 8004DDB4
  if (crb(c,2)) { goto L_8004E044; } // 8004DDB8
  goto L_8004E108; // 8004DDBC
L_8004DDC0:;
  c->r[3]=R32(c->r[31]+0x00000098u); // 8004DDC0
  c->r[0]=0u+0x00000000u; // 8004DDC4
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004DDC8
  c->r[3]=c->r[3]+0x00000001u; // 8004DDCC
  W32(c->r[31]+0x000000A0u,c->r[3]); // 8004DDD0
  c->lr=0x8004DDD8u; f_80041D2C(c); // 8004DDD4
  cmps(c,0,(int32_t)c->r[3],8); // 8004DDD8
  if (crb(c,2)) { goto L_8004DDF0; } // 8004DDDC
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DDE0
  c->r[0]=R32(c->r[31]+0x000000A4u); // 8004DDE4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004DDE8
  if (crb(c,1)) { goto L_8004DDFC; } // 8004DDEC
L_8004DDF0:;
  c->r[0]=0u+0x00000003u; // 8004DDF0
  W32(c->r[31]+0x00000094u,c->r[0]); // 8004DDF4
  goto L_8004E108; // 8004DDF8
L_8004DDFC:;
  c->r[0]=0u+0x00000001u; // 8004DDFC
  W32(c->r[31]+0x00000094u,c->r[0]); // 8004DE00
  c->lr=0x8004DE08u; f_80041D2C(c); // 8004DE04
  c->r[4]=c->r[3]|c->r[3]; // 8004DE08
  c->r[3]=c->r[31]|c->r[31]; // 8004DE0C
  c->lr=0x8004DE14u; f_8004DD08(c); // 8004DE10
  c->r[4]=c->r[3]|c->r[3]; // 8004DE14
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DE18
  c->lr=0x8004DE20u; f_80065994(c); // 8004DE1C
  c->r[4]=c->r[3]|c->r[3]; // 8004DE20
  c->r[3]=c->r[31]|c->r[31]; // 8004DE24
  c->lr=0x8004DE2Cu; f_8004C6C8(c); // 8004DE28
  c->r[3]=0u+0x00000819u; // 8004DE2C
  c->lr=0x8004DE34u; f_80022B5C(c); // 8004DE30
  c->r[4]=c->r[3]|c->r[3]; // 8004DE34
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DE38
  c->lr=0x8004DE40u; f_80065994(c); // 8004DE3C
  c->r[4]=c->r[3]|c->r[3]; // 8004DE40
  c->r[3]=c->r[31]|c->r[31]; // 8004DE44
  c->lr=0x8004DE4Cu; f_8004C6C8(c); // 8004DE48
  goto L_8004E108; // 8004DE4C
L_8004DE50:;
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DE50
  c->lr=0x8004DE58u; f_80041D2C(c); // 8004DE54
  cmps(c,0,(int32_t)c->r[3],8); // 8004DE58
  if (crb(c,2)) { goto L_8004DE70; } // 8004DE5C
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DE60
  c->r[0]=R32(c->r[31]+0x000000A4u); // 8004DE64
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004DE68
  if (crb(c,1)) { goto L_8004DE7C; } // 8004DE6C
L_8004DE70:;
  c->r[0]=0u+0x00000003u; // 8004DE70
  W32(c->r[31]+0x00000094u,c->r[0]); // 8004DE74
  goto L_8004E108; // 8004DE78
L_8004DE7C:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004DE7C
  c->r[0]=c->r[4]+0x00000001u; // 8004DE80
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004DE84
  c->lr=0x8004DE8Cu; f_80041D2C(c); // 8004DE88
  c->r[4]=c->r[3]|c->r[3]; // 8004DE8C
  c->r[3]=c->r[31]|c->r[31]; // 8004DE90
  c->lr=0x8004DE98u; f_8004DD08(c); // 8004DE94
  c->r[4]=c->r[3]|c->r[3]; // 8004DE98
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DE9C
  c->r[5]=0u+0x00000001u; // 8004DEA0
  c->lr=0x8004DEA8u; f_800674FC(c); // 8004DEA4
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DEA8
  c->lr=0x8004DEB0u; f_80041D2C(c); // 8004DEAC
  c->r[4]=c->r[3]|c->r[3]; // 8004DEB0
  c->r[3]=c->r[31]|c->r[31]; // 8004DEB4
  c->lr=0x8004DEBCu; f_8004DD08(c); // 8004DEB8
  c->r[4]=c->r[3]|c->r[3]; // 8004DEBC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DEC0
  c->lr=0x8004DEC8u; f_80065994(c); // 8004DEC4
  c->r[30]=c->r[3]|c->r[3]; // 8004DEC8
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DECC
  c->lr=0x8004DED4u; f_80041DD8(c); // 8004DED0
  cmps(c,0,(int32_t)c->r[3],0); // 8004DED4
  if (crb(c,2)) { goto L_8004DEF4; } // 8004DED8
  c->r[3]=0u+0x00000819u; // 8004DEDC
  c->lr=0x8004DEE4u; f_80022B5C(c); // 8004DEE0
  c->r[4]=c->r[3]|c->r[3]; // 8004DEE4
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DEE8
  c->r[5]=0u+0x00000001u; // 8004DEEC
  c->lr=0x8004DEF4u; f_800674FC(c); // 8004DEF0
L_8004DEF4:;
  c->r[3]=R32(c->r[31]+0x000000A8u); // 8004DEF4
  c->r[0]=R32(c->r[31]+0x000000ACu); // 8004DEF8
  c->r[0]=c->r[3]+c->r[0]; // 8004DEFC
  W32(c->r[31]+0x000000A8u,c->r[0]); // 8004DF00
  cmps(c,0,(int32_t)c->r[0],255); // 8004DF04
  if (!crb(c,0)) { goto L_8004DF3C; } // 8004DF08
  c->r[3]=c->r[30]|c->r[30]; // 8004DF0C
  c->lr=0x8004DF14u; f_8004C3A0(c); // 8004DF10
  c->r[4]=c->r[3]|c->r[3]; // 8004DF14
  c->r[3]=c->r[1]+0x00000008u; // 8004DF18
  c->lr=0x8004DF20u; f_8004C394(c); // 8004DF1C
  c->r[0]=R32(c->r[31]+0x000000A8u); // 8004DF20
  c->r[3]=c->r[1]+0x00000008u; // 8004DF24
  c->r[4]=rotl(c->r[0],0)&0x000000FFu; // 8004DF28
  c->lr=0x8004DF30u; f_8004D784(c); // 8004DF2C
  c->r[3]=c->r[31]|c->r[31]; // 8004DF30
  c->r[4]=c->r[1]+0x00000008u; // 8004DF34
  c->lr=0x8004DF3Cu; f_8004C70C(c); // 8004DF38
L_8004DF3C:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004DF3C
  cmps(c,0,(int32_t)c->r[0],15); // 8004DF40
  if (crb(c,0)) { goto L_8004E108; } // 8004DF44
  c->r[3]=c->r[31]|c->r[31]; // 8004DF48
  c->lr=0x8004DF50u; f_8004C848(c); // 8004DF4C
  c->r[3]=0u+0x00000000u; // 8004DF50
  c->r[4]=0u+0x00000002u; // 8004DF54
  c->r[0]=0u+0x0000000Fu; // 8004DF58
  W32(c->r[31]+0x00000094u,c->r[4]); // 8004DF5C
  W32(c->r[31]+0x0000005Cu,c->r[3]); // 8004DF60
  W32(c->r[31]+0x000000A8u,c->r[3]); // 8004DF64
  W32(c->r[31]+0x000000ACu,c->r[0]); // 8004DF68
  goto L_8004E108; // 8004DF6C
L_8004DF70:;
  c->r[4]=R32(c->r[31]+0x0000005Cu); // 8004DF70
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DF74
  c->r[0]=c->r[4]+0x00000001u; // 8004DF78
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8004DF7C
  c->lr=0x8004DF84u; f_80041D2C(c); // 8004DF80
  c->r[4]=c->r[3]|c->r[3]; // 8004DF84
  c->r[3]=c->r[31]|c->r[31]; // 8004DF88
  c->lr=0x8004DF90u; f_8004DD08(c); // 8004DF8C
  c->r[4]=c->r[3]|c->r[3]; // 8004DF90
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DF94
  c->r[5]=0u+0x00000001u; // 8004DF98
  c->lr=0x8004DFA0u; f_800674FC(c); // 8004DF9C
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004DFA0
  c->lr=0x8004DFA8u; f_80041DD8(c); // 8004DFA4
  cmps(c,0,(int32_t)c->r[3],0); // 8004DFA8
  if (crb(c,2)) { goto L_8004DFC8; } // 8004DFAC
  c->r[3]=0u+0x00000819u; // 8004DFB0
  c->lr=0x8004DFB8u; f_80022B5C(c); // 8004DFB4
  c->r[4]=c->r[3]|c->r[3]; // 8004DFB8
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004DFBC
  c->r[5]=0u+0x00000001u; // 8004DFC0
  c->lr=0x8004DFC8u; f_800674FC(c); // 8004DFC4
L_8004DFC8:;
  c->r[29]=0u+0x00000000u; // 8004DFC8
  c->r[28]=0u+0x00000000u; // 8004DFCC
L_8004DFD0:;
  c->r[3]=c->r[28]|c->r[28]; // 8004DFD0
  c->r[30]=0u+0x00000000u; // 8004DFD4
  c->r[4]=0u+0x00000010u; // 8004DFD8
  c->lr=0x8004DFE0u; f_8006FF50(c); // 8004DFDC
  cmps(c,0,(int32_t)c->r[3],0); // 8004DFE0
  if (!crb(c,2)) { goto L_8004DFFC; } // 8004DFE4
  c->r[3]=c->r[28]|c->r[28]; // 8004DFE8
  c->r[4]=0u+0x00000020u; // 8004DFEC
  c->lr=0x8004DFF4u; f_8006FF50(c); // 8004DFF0
  cmps(c,0,(int32_t)c->r[3],0); // 8004DFF4
  if (crb(c,2)) { goto L_8004E000; } // 8004DFF8
L_8004DFFC:;
  c->r[30]=0u+0x00000001u; // 8004DFFC
L_8004E000:;
  c->r[3]=c->r[29]|c->r[30]; // 8004E000
  c->r[28]=c->r[28]+0x00000001u; // 8004E004
  c->r[0]=0u-c->r[3]; // 8004E008
  c->r[0]=c->r[0]|c->r[3]; // 8004E00C
  cmpu(c,0,c->r[28],0x00000002u); // 8004E010
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 8004E014
  if (crb(c,0)) { IRQCHK(c); goto L_8004DFD0; } // 8004E018
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8004E01C
  cmps(c,0,(int32_t)c->r[0],600); // 8004E020
  if (!crb(c,0)) { goto L_8004E030; } // 8004E024
  cmps(c,0,(int32_t)c->r[29],0); // 8004E028
  if (crb(c,2)) { goto L_8004E108; } // 8004E02C
L_8004E030:;
  c->r[3]=c->r[31]|c->r[31]; // 8004E030
  c->lr=0x8004E038u; f_8004C848(c); // 8004E034
  c->r[0]=0u+0x00000003u; // 8004E038
  W32(c->r[31]+0x00000094u,c->r[0]); // 8004E03C
  goto L_8004E108; // 8004E040
L_8004E044:;
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004E044
  c->r[0]=R32(c->r[31]+0x0000009Cu); // 8004E048
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8004E04C
  if (!crb(c,0)) { goto L_8004E05C; } // 8004E050
  cmps(c,0,(int32_t)c->r[3],9); // 8004E054
  if (crb(c,0)) { goto L_8004E06C; } // 8004E058
L_8004E05C:;
  c->r[3]=c->r[31]|c->r[31]; // 8004E05C
  c->r[4]=0u+0x00000004u; // 8004E060
  c->lr=0x8004E068u; f_8004C3A8(c); // 8004E064
  goto L_8004E108; // 8004E068
L_8004E06C:;
  c->r[3]=c->r[3]+0x00000001u; // 8004E06C
  c->r[30]=0u+0x00000000u; // 8004E070
  W32(c->r[31]+0x000000A8u,c->r[30]); // 8004E074
  W32(c->r[31]+0x000000A0u,c->r[3]); // 8004E078
  c->lr=0x8004E080u; f_80041D2C(c); // 8004E07C
  cmps(c,0,(int32_t)c->r[3],8); // 8004E080
  if (!crb(c,2)) { goto L_8004E098; } // 8004E084
  c->r[3]=c->r[31]|c->r[31]; // 8004E088
  c->r[4]=0u+0x00000004u; // 8004E08C
  c->lr=0x8004E094u; f_8004C3A8(c); // 8004E090
  goto L_8004E108; // 8004E094
L_8004E098:;
  c->r[3]=R32(c->r[31]+0x000000A0u); // 8004E098
  c->lr=0x8004E0A0u; f_80041D2C(c); // 8004E09C
  c->r[4]=c->r[3]|c->r[3]; // 8004E0A0
  c->r[3]=c->r[31]|c->r[31]; // 8004E0A4
  c->lr=0x8004E0ACu; f_8004DD08(c); // 8004E0A8
  c->r[4]=c->r[3]|c->r[3]; // 8004E0AC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004E0B0
  c->lr=0x8004E0B8u; f_80065994(c); // 8004E0B4
  c->r[4]=c->r[3]|c->r[3]; // 8004E0B8
  c->r[3]=c->r[31]|c->r[31]; // 8004E0BC
  c->lr=0x8004E0C4u; f_8004C6C8(c); // 8004E0C0
  c->r[3]=0u+0x00000819u; // 8004E0C4
  c->lr=0x8004E0CCu; f_80022B5C(c); // 8004E0C8
  c->r[4]=c->r[3]|c->r[3]; // 8004E0CC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004E0D0
  c->lr=0x8004E0D8u; f_80065994(c); // 8004E0D4
  c->r[4]=c->r[3]|c->r[3]; // 8004E0D8
  c->r[3]=c->r[31]|c->r[31]; // 8004E0DC
  c->lr=0x8004E0E4u; f_8004C6C8(c); // 8004E0E0
  c->r[3]=0u+0x00000819u; // 8004E0E4
  c->lr=0x8004E0ECu; f_80022B5C(c); // 8004E0E8
  c->r[4]=c->r[3]|c->r[3]; // 8004E0EC
  c->r[3]=R32(c->r[31]+0x00000064u); // 8004E0F0
  c->r[5]=0u+0x00000000u; // 8004E0F4
  c->lr=0x8004E0FCu; f_800674FC(c); // 8004E0F8
  c->r[0]=0u+0x00000001u; // 8004E0FC
  W32(c->r[31]+0x00000094u,c->r[0]); // 8004E100
  W32(c->r[31]+0x0000005Cu,c->r[30]); // 8004E104
L_8004E108:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E108
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004E10C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004E110
  c->r[29]=R32(c->r[1]+0x00000014u); // 8004E114
  c->r[28]=R32(c->r[1]+0x00000010u); // 8004E118
  c->lr=c->r[0]; // 8004E11C
  c->r[1]=c->r[1]+0x00000020u; // 8004E120
  return; // 8004E124
}

// disp__Q24gbla10GblaRankupFv
void f_8004E128(Ctx* __restrict c) {
  trace_call(0x8004E128u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E128
  c->r[0]=c->lr; // 8004E12C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004E134
  c->r[31]=c->r[3]|c->r[3]; // 8004E138
  c->r[4]=R32(c->r[3]+0x00000064u); // 8004E13C
  cmps(c,0,(int32_t)c->r[4],0); // 8004E140
  if (crb(c,2)) { goto L_8004E1EC; } // 8004E144
  c->r[0]=R8(c->r[4]+0x0000007Cu); // 8004E148
  cmps(c,0,(int32_t)c->r[0],0); // 8004E14C
  if (crb(c,2)) { goto L_8004E15C; } // 8004E150
  c->r[3]=c->r[4]|c->r[4]; // 8004E154
  c->lr=0x8004E15Cu; f_80060F2C(c); // 8004E158
L_8004E15C:;
  c->lr=0x8004E160u; f_8006E3E4(c); // 8004E15C
  c->r[3]=c->r[1]+0x00000008u; // 8004E160
  c->r[4]=0u+0x00000001u; // 8004E164
  c->lr=0x8004E16Cu; f_8006E3F0(c); // 8004E168
  c->r[3]=c->r[1]+0x00000008u; // 8004E16C
  c->r[4]=0u+0x00000066u; // 8004E170
  c->r[5]=0u+0x00000022u; // 8004E174
  c->r[6]=0u+0x00000066u; // 8004E178
  c->lr=0x8004E180u; f_8006E764(c); // 8004E17C
  c->r[3]=c->r[1]+0x00000008u; // 8004E180
  c->r[4]=0u+0x0000001Eu; // 8004E184
  c->r[5]=0u+0x00000002u; // 8004E188
  c->r[6]=0u+0x00000000u; // 8004E18C
  c->lr=0x8004E194u; f_8006E814(c); // 8004E190
  c->r[4]=0u+0x802A0000u; // 8004E194
  c->r[3]=c->r[1]+0x00000008u; // 8004E198
  c->r[4]=c->r[4]+0xFFFF9238u; // 8004E19C
  c->r[4]=c->r[4]+0x0000016Du; // 8004E1A0
  c->lr=0x8004E1A8u; f_8006E6C8(c); // 8004E1A4
  c->r[4]=0u+0x80070000u; // 8004E1A8
  c->r[4]=c->r[4]+0xFFFFE8C4u; // 8004E1AC
  c->lr=0x8004E1B4u; f_8006E758(c); // 8004E1B0
  c->r[0]=R32(c->r[31]+0x00000054u); // 8004E1B4
  cmps(c,0,(int32_t)c->r[0],-1); // 8004E1B8
  if (crb(c,2)) { goto L_8004E1D8; } // 8004E1BC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8004E1C0
  c->r[3]=c->r[31]|c->r[31]; // 8004E1C4
  c->r[4]=c->r[31]+c->r[0]; // 8004E1C8
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8004E1CC
  c->ctr=c->r[12]; // 8004E1D0
  if (true) { c->lr=0x8004E1D8u; dispatch(c,c->ctr); } // 8004E1D4
L_8004E1D8:;
  c->r[0]=R8(c->r[31]+0x00000218u); // 8004E1D8
  cmps(c,0,(int32_t)c->r[0],0); // 8004E1DC
  if (crb(c,2)) { goto L_8004E1EC; } // 8004E1E0
  c->r[3]=c->r[31]+0x000000C4u; // 8004E1E4
  c->lr=0x8004E1ECu; f_8005BBA0(c); // 8004E1E8
L_8004E1EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E1EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004E1F0
  c->lr=c->r[0]; // 8004E1F4
  c->r[1]=c->r[1]+0x00000020u; // 8004E1F8
  return; // 8004E1FC
}

// term__Q24gbla10GblaRankupFv
void f_8004E200(Ctx* __restrict c) {
  trace_call(0x8004E200u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E200
  c->r[0]=c->lr; // 8004E204
  W32(c->r[1]+0x00000044u,c->r[0]); // 8004E208
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004E20C
  c->r[31]=c->r[1]|c->r[1]; // 8004E210
  W32(c->r[1]+0x00000038u,c->r[30]); // 8004E214
  c->r[30]=c->r[3]|c->r[3]; // 8004E218
  W32(c->r[1]+0x00000034u,c->r[29]); // 8004E21C
  W32(c->r[1]+0x00000030u,c->r[28]); // 8004E220
  c->r[0]=R32(c->r[3]+0x00000054u); // 8004E224
  cmps(c,0,(int32_t)c->r[0],-1); // 8004E228
  if (crb(c,2)) { goto L_8004E258; } // 8004E22C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8004E230
  c->r[4]=c->r[3]+c->r[0]; // 8004E234
  c->r[12]=R32(c->r[4]+0x00000008u); // 8004E238
  c->ctr=c->r[12]; // 8004E23C
  if (true) { c->lr=0x8004E244u; dispatch(c,c->ctr); } // 8004E240
  c->r[3]=R32(c->r[30]+0x00000054u); // 8004E244
  c->r[0]=R32(c->r[30]+0x00000058u); // 8004E248
  W32(c->r[30]+0x00000050u,c->r[3]); // 8004E24C
  W32(c->r[30]+0x00000054u,c->r[0]); // 8004E250
  goto L_8004E268; // 8004E254
L_8004E258:;
  c->r[0]=R32(c->r[3]+0x00000058u); // 8004E258
  c->r[4]=0u+0xFFFFFFFFu; // 8004E25C
  W32(c->r[3]+0x00000050u,c->r[4]); // 8004E260
  W32(c->r[3]+0x00000054u,c->r[0]); // 8004E264
L_8004E268:;
  c->r[0]=0u+0x00000000u; // 8004E268
  c->r[4]=0u+0xFFFFFFFFu; // 8004E26C
  W32(c->r[30]+0x00000050u,c->r[4]); // 8004E270
  c->r[3]=c->r[30]+0x000000C4u; // 8004E274
  W32(c->r[30]+0x00000054u,c->r[4]); // 8004E278
  W32(c->r[30]+0x00000058u,c->r[4]); // 8004E27C
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8004E280
  W8(c->r[30]+0x00000060u,c->r[0]); // 8004E284
  W8(c->r[30]+0x0000006Cu,c->r[0]); // 8004E288
  W8(c->r[30]+0x0000006Du,c->r[0]); // 8004E28C
  c->lr=0x8004E294u; f_8005BEAC(c); // 8004E290
  c->r[3]=R32(c->r[30]+0x00000064u); // 8004E294
  cmps(c,0,(int32_t)c->r[3],0); // 8004E298
  if (crb(c,2)) { goto L_8004E2A8; } // 8004E29C
  c->r[4]=0u+0x00000001u; // 8004E2A0
  c->lr=0x8004E2A8u; f_800662E0(c); // 8004E2A4
L_8004E2A8:;
  c->r[29]=0u+0x00000000u; // 8004E2A8
  W32(c->r[30]+0x00000064u,c->r[29]); // 8004E2AC
  c->r[3]=c->r[30]+0x00000070u; // 8004E2B0
  c->lr=0x8004E2B8u; f_80039800(c); // 8004E2B4
  c->r[0]=R32(c->r[13]+0xFFFF970Cu); // 8004E2B8
  W8(c->r[31]+0x00000008u,c->r[29]); // 8004E2BC
  cmps(c,0,(int32_t)c->r[0],0); // 8004E2C0
  if (!crb(c,2)) { goto L_8004E31C; } // 8004E2C4
  c->r[28]=0u+0x802E0000u; // 8004E2C8
  c->r[3]=0u+0x00000080u; // 8004E2CC
  c->r[28]=c->r[28]+0x00001BC8u; // 8004E2D0
  c->r[5]=0u+0x00000023u; // 8004E2D4
  c->r[4]=c->r[28]|c->r[28]; // 8004E2D8
  c->lr=0x8004E2E0u; f_8020D35C(c); // 8004E2DC
  cmps(c,0,(int32_t)c->r[3],0); // 8004E2E0
  c->r[29]=c->r[3]|c->r[3]; // 8004E2E4
  if (crb(c,2)) { goto L_8004E318; } // 8004E2E8
  W32(c->r[31]+0x00000024u,c->r[1]); // 8004E2EC
  c->lr=0x8004E2F4u; f_80073864(c); // 8004E2F0
  goto L_8004E318; // 8004E2F4
  c->r[3]=c->r[29]|c->r[29]; // 8004E2F8
  c->r[4]=c->r[28]|c->r[28]; // 8004E2FC
  c->r[5]=0u+0x00000023u; // 8004E300
  c->lr=0x8004E308u; f_8020E944(c); // 8004E304
  c->r[3]=0u+0x00000000u; // 8004E308
  c->r[4]=0u+0x00000000u; // 8004E30C
  c->r[5]=0u+0x00000000u; // 8004E310
  c->lr=0x8004E318u; f_800AF804(c); // 8004E314
L_8004E318:;
  W32(c->r[13]+0xFFFF970Cu,c->r[29]); // 8004E318
L_8004E31C:;
  c->r[3]=R32(c->r[13]+0xFFFF970Cu); // 8004E31C
  c->lr=0x8004E324u; f_80073FFC(c); // 8004E320
  c->r[0]=0u+0xFFFFFFFFu; // 8004E324
  c->r[29]=0u+0x00000000u; // 8004E328
  W32(c->r[30]+0x0000008Cu,c->r[0]); // 8004E32C
  c->r[3]=R32(c->r[30]+0x000000B8u); // 8004E330
  W32(c->r[30]+0x00000090u,c->r[0]); // 8004E334
  W32(c->r[30]+0x00000094u,c->r[29]); // 8004E338
  W32(c->r[30]+0x00000098u,c->r[0]); // 8004E33C
  W32(c->r[30]+0x0000009Cu,c->r[0]); // 8004E340
  W32(c->r[30]+0x000000A0u,c->r[0]); // 8004E344
  c->lr=0x8004E34Cu; f_80210AFC(c); // 8004E348
  W32(c->r[30]+0x000000B8u,c->r[29]); // 8004E34C
  c->r[4]=0u+0x00000000u; // 8004E350
  W32(c->r[30]+0x000000BCu,c->r[29]); // 8004E354
  W32(c->r[30]+0x000000C0u,c->r[29]); // 8004E358
  goto L_8004E370; // 8004E35C
L_8004E360:;
  c->r[3]=c->r[30]+c->r[4]; // 8004E360
  c->r[0]=0u+0x00000000u; // 8004E364
  W8(c->r[3]+0x0000021Cu,c->r[0]); // 8004E368
  c->r[4]=c->r[4]+0x00000001u; // 8004E36C
L_8004E370:;
  cmpu(c,0,c->r[4],0x00000009u); // 8004E370
  if (crb(c,0)) { IRQCHK(c); goto L_8004E360; } // 8004E374
  {uint32_t ea=c->r[2]+0xFFFF81C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8004E378
  c->r[10]=c->r[31]|c->r[31]; // 8004E37C
  {uint32_t ea=c->r[30]+0x00000280u; WF32(ea,c->f[0]);} // 8004E380
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[0]);} // 8004E384
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[0]);} // 8004E388
  c->r[31]=R32(c->r[31]+0x0000003Cu); // 8004E38C
  c->r[30]=R32(c->r[10]+0x00000038u); // 8004E390
  c->r[29]=R32(c->r[10]+0x00000034u); // 8004E394
  c->r[28]=R32(c->r[10]+0x00000030u); // 8004E398
  c->r[10]=R32(c->r[1]+0x00000000u); // 8004E39C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8004E3A0
  c->r[1]=c->r[10]|c->r[10]; // 8004E3A4
  c->lr=c->r[0]; // 8004E3A8
  return; // 8004E3AC
}

// initProc__Q24gbla10GblaRankupFRCQ25Alice11ModeType<4>
void f_8004E3B0(Ctx* __restrict c) {
  trace_call(0x8004E3B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E3B0
  c->r[0]=c->lr; // 8004E3B4
  c->r[4]=0u+0x802A0000u; // 8004E3B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004E3BC
  c->r[4]=c->r[4]+0xFFFF9238u; // 8004E3C0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004E3C4
  c->r[26]=c->r[3]|c->r[3]; // 8004E3C8
  c->r[3]=c->r[4]+0x00000174u; // 8004E3CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004E3D0
  c->lr=0x8004E3D8u; f_80019994(c); // 8004E3D4
  c->r[28]=c->r[26]|c->r[26]; // 8004E3D8
  c->r[27]=0u+0x00000000u; // 8004E3DC
  c->r[31]=0u+0x00000793u; // 8004E3E0
  c->r[30]=0u+0x00000791u; // 8004E3E4
  c->r[29]=0u+0x00000792u; // 8004E3E8
L_8004E3EC:;
  cmps(c,0,(int32_t)c->r[27],0); // 8004E3EC
  if (!crb(c,2)) { goto L_8004E3FC; } // 8004E3F0
  W32(c->r[28]+0x00000228u,c->r[29]); // 8004E3F4
  goto L_8004E43C; // 8004E3F8
L_8004E3FC:;
  cmps(c,0,(int32_t)c->r[27],1); // 8004E3FC
  if (!crb(c,2)) { goto L_8004E40C; } // 8004E400
  W32(c->r[28]+0x00000228u,c->r[30]); // 8004E404
  goto L_8004E43C; // 8004E408
L_8004E40C:;
  cmps(c,0,(int32_t)c->r[27],2); // 8004E40C
  if (!crb(c,2)) { goto L_8004E41C; } // 8004E410
  W32(c->r[28]+0x00000228u,c->r[31]); // 8004E414
  goto L_8004E43C; // 8004E418
L_8004E41C:;
  cmps(c,0,(int32_t)c->r[27],3); // 8004E41C
  if (!crb(c,2)) { goto L_8004E43C; } // 8004E420
  c->r[4]=R32(c->r[26]+0x00000098u); // 8004E424
  cmps(c,0,(int32_t)c->r[4],0); // 8004E428
  if (crb(c,0)) { goto L_8004E460; } // 8004E42C
  c->r[3]=c->r[26]|c->r[26]; // 8004E430
  c->lr=0x8004E438u; f_8004C5E8(c); // 8004E434
  W32(c->r[28]+0x00000228u,c->r[3]); // 8004E438
L_8004E43C:;
  c->r[3]=R32(c->r[26]+0x00000064u); // 8004E43C
  c->r[4]=R32(c->r[28]+0x00000228u); // 8004E440
  c->lr=0x8004E448u; f_80065994(c); // 8004E444
  c->r[27]=c->r[27]+0x00000001u; // 8004E448
  c->r[0]=R32(c->r[28]+0x00000238u); // 8004E44C
  cmps(c,0,(int32_t)c->r[27],4); // 8004E450
  W32(c->r[3]+0x00000144u,c->r[0]); // 8004E454
  c->r[28]=c->r[28]+0x00000004u; // 8004E458
  if (crb(c,0)) { IRQCHK(c); goto L_8004E3EC; } // 8004E45C
L_8004E460:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004E460
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004E464
  c->lr=c->r[0]; // 8004E468
  c->r[1]=c->r[1]+0x00000020u; // 8004E46C
  return; // 8004E470
}

// __ct__Q24gbla12SaveDataUtilFv
void f_8004E474(Ctx* __restrict c) {
  trace_call(0x8004E474u);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004E474
  c->r[0]=c->lr; // 8004E478
  W32(c->r[1]+0x00000104u,c->r[0]); // 8004E47C
  {uint32_t ea=c->r[1]+0x000000B8u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8004E480
  c->r[0]=0u+0x80050000u; // 8004E484
  W32(c->r[1]+0x000000A8u,c->r[0]); // 8004E488
  c->r[0]=0u+0x80050000u; // 8004E48C
  c->r[29]=0u+0x80050000u; // 8004E490
  W32(c->r[1]+0x00000050u,c->r[0]); // 8004E494
  c->r[0]=0u+0x80050000u; // 8004E498
  c->r[30]=R32(c->r[1]+0x000000A8u); // 8004E49C
  c->r[28]=0u+0x80050000u; // 8004E4A0
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004E4A4
  c->r[0]=0u+0x80050000u; // 8004E4A8
  c->r[30]=c->r[30]+0xFFFFF524u; // 8004E4AC
  c->r[27]=0u+0x80050000u; // 8004E4B0
  W32(c->r[1]+0x000000A8u,c->r[30]); // 8004E4B4
  c->r[26]=0u+0x80050000u; // 8004E4B8
  c->r[30]=R32(c->r[1]+0x00000050u); // 8004E4BC
  c->r[25]=0u+0x80050000u; // 8004E4C0
  W32(c->r[1]+0x00000058u,c->r[0]); // 8004E4C4
  c->r[0]=0u+0x80050000u; // 8004E4C8
  c->r[30]=c->r[30]+0xFFFFF5E0u; // 8004E4CC
  c->r[24]=0u+0x80050000u; // 8004E4D0
  W32(c->r[1]+0x00000050u,c->r[30]); // 8004E4D4
  c->r[23]=0u+0x80050000u; // 8004E4D8
  c->r[30]=R32(c->r[1]+0x00000054u); // 8004E4DC
  c->r[22]=0u+0x80050000u; // 8004E4E0
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 8004E4E4
  c->r[0]=0u+0x80050000u; // 8004E4E8
  c->r[30]=c->r[30]+0xFFFFF5E4u; // 8004E4EC
  c->r[21]=0u+0x80050000u; // 8004E4F0
  W32(c->r[1]+0x00000054u,c->r[30]); // 8004E4F4
  c->r[20]=0u+0x80050000u; // 8004E4F8
  c->r[30]=R32(c->r[1]+0x00000058u); // 8004E4FC
  c->r[19]=0u+0x80050000u; // 8004E500
  W32(c->r[1]+0x00000060u,c->r[0]); // 8004E504
  c->r[0]=0u+0x80050000u; // 8004E508
  c->r[30]=c->r[30]+0xFFFFF5E8u; // 8004E50C
  c->r[18]=0u+0x80050000u; // 8004E510
  W32(c->r[1]+0x00000058u,c->r[30]); // 8004E514
  c->r[17]=0u+0x80050000u; // 8004E518
  c->r[30]=R32(c->r[1]+0x0000005Cu); // 8004E51C
  c->r[16]=0u+0x80050000u; // 8004E520
  c->r[15]=0u+0x80050000u; // 8004E524
  c->r[14]=0u+0x80050000u; // 8004E528
  c->r[30]=c->r[30]+0xFFFFF6ACu; // 8004E52C
  W32(c->r[1]+0x0000005Cu,c->r[30]); // 8004E530
  c->r[30]=R32(c->r[1]+0x00000060u); // 8004E534
  c->r[12]=0u+0x80050000u; // 8004E538
  c->r[11]=0u+0x80050000u; // 8004E53C
  c->r[10]=0u+0x80050000u; // 8004E540
  c->r[30]=c->r[30]+0xFFFFF76Cu; // 8004E544
  W32(c->r[1]+0x00000060u,c->r[30]); // 8004E548
  c->r[30]=c->r[0]|c->r[0]; // 8004E54C
  c->r[0]=0u+0xFFFFFFFFu; // 8004E550
  W32(c->r[3]+0x000001D0u,c->r[0]); // 8004E554
  c->r[0]=0u+0xFFFFFFFFu; // 8004E558
  c->r[9]=0u+0x80050000u; // 8004E55C
  c->r[8]=0u+0x80050000u; // 8004E560
  W32(c->r[3]+0x000001D4u,c->r[0]); // 8004E564
  c->r[0]=0u+0xFFFFFFFFu; // 8004E568
  c->r[7]=0u+0x80050000u; // 8004E56C
  c->r[6]=0u+0x80050000u; // 8004E570
  W32(c->r[3]+0x000001D8u,c->r[0]); // 8004E574
  c->r[5]=0u+0x80050000u; // 8004E578
  c->r[0]=R32(c->r[1]+0x000000A8u); // 8004E57C
  c->r[4]=0u+0x80050000u; // 8004E580
  W32(c->r[3]+0x00000064u,c->r[0]); // 8004E584
  c->r[30]=c->r[30]+0xFFFFF770u; // 8004E588
  c->r[0]=R32(c->r[1]+0x00000050u); // 8004E58C
  c->r[29]=c->r[29]+0xFFFFEC88u; // 8004E590
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8004E594
  c->r[28]=c->r[28]+0xFFFFEC94u; // 8004E598
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004E59C
  c->r[27]=c->r[27]+0xFFFFEC98u; // 8004E5A0
  W32(c->r[3]+0x00000068u,c->r[0]); // 8004E5A4
  c->r[26]=c->r[26]+0xFFFFEC9Cu; // 8004E5A8
  c->r[0]=R32(c->r[1]+0x00000058u); // 8004E5AC
  c->r[25]=c->r[25]+0xFFFFECA0u; // 8004E5B0
  W32(c->r[3]+0x00000070u,c->r[0]); // 8004E5B4
  c->r[24]=c->r[24]+0xFFFFEE04u; // 8004E5B8
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8004E5BC
  c->r[23]=c->r[23]+0xFFFFEEE4u; // 8004E5C0
  W32(c->r[3]+0x00000074u,c->r[0]); // 8004E5C4
  c->r[22]=c->r[22]+0xFFFFEEE8u; // 8004E5C8
  c->r[0]=R32(c->r[1]+0x00000060u); // 8004E5CC
  c->r[21]=c->r[21]+0xFFFFEEECu; // 8004E5D0
  c->r[20]=c->r[20]+0xFFFFEF78u; // 8004E5D4
  c->r[19]=c->r[19]+0xFFFFF060u; // 8004E5D8
  c->r[18]=c->r[18]+0xFFFFF064u; // 8004E5DC
  c->r[17]=c->r[17]+0xFFFFF0B4u; // 8004E5E0
  c->r[16]=c->r[16]+0xFFFFF12Cu; // 8004E5E4
  c->r[15]=c->r[15]+0xFFFFF130u; // 8004E5E8
  c->r[14]=c->r[14]+0xFFFFF134u; // 8004E5EC
  c->r[12]=c->r[12]+0xFFFFF138u; // 8004E5F0
  c->r[11]=c->r[11]+0xFFFFF200u; // 8004E5F4
  c->r[10]=c->r[10]+0xFFFFF204u; // 8004E5F8
  c->r[9]=c->r[9]+0xFFFFF208u; // 8004E5FC
  c->r[8]=c->r[8]+0xFFFFF20Cu; // 8004E600
  c->r[7]=c->r[7]+0xFFFFF2B8u; // 8004E604
  c->r[6]=c->r[6]+0xFFFFF458u; // 8004E608
  c->r[5]=c->r[5]+0xFFFFF45Cu; // 8004E60C
  c->r[4]=c->r[4]+0xFFFFF460u; // 8004E610
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 8004E614
  c->r[0]=c->r[30]|c->r[30]; // 8004E618
  c->r[31]=c->r[3]|c->r[3]; // 8004E61C
  W32(c->r[1]+0x00000064u,c->r[30]); // 8004E620
  W32(c->r[3]+0x00000000u,c->r[29]); // 8004E624
  W32(c->r[3]+0x00000004u,c->r[28]); // 8004E628
  W32(c->r[3]+0x0000000Cu,c->r[27]); // 8004E62C
  W32(c->r[3]+0x00000008u,c->r[26]); // 8004E630
  W32(c->r[3]+0x00000010u,c->r[25]); // 8004E634
  W32(c->r[3]+0x00000014u,c->r[24]); // 8004E638
  W32(c->r[3]+0x0000001Cu,c->r[23]); // 8004E63C
  W32(c->r[3]+0x00000018u,c->r[22]); // 8004E640
  W32(c->r[3]+0x00000020u,c->r[21]); // 8004E644
  W32(c->r[3]+0x00000024u,c->r[20]); // 8004E648
  W32(c->r[3]+0x0000002Cu,c->r[19]); // 8004E64C
  W32(c->r[3]+0x00000028u,c->r[18]); // 8004E650
  W32(c->r[3]+0x00000030u,c->r[17]); // 8004E654
  W32(c->r[3]+0x00000034u,c->r[16]); // 8004E658
  W32(c->r[3]+0x0000003Cu,c->r[15]); // 8004E65C
  W32(c->r[3]+0x00000038u,c->r[14]); // 8004E660
  W32(c->r[3]+0x00000040u,c->r[12]); // 8004E664
  W32(c->r[3]+0x00000044u,c->r[11]); // 8004E668
  W32(c->r[3]+0x0000004Cu,c->r[10]); // 8004E66C
  W32(c->r[3]+0x00000048u,c->r[9]); // 8004E670
  W32(c->r[3]+0x00000050u,c->r[8]); // 8004E674
  W32(c->r[3]+0x00000054u,c->r[7]); // 8004E678
  W32(c->r[3]+0x0000005Cu,c->r[6]); // 8004E67C
  W32(c->r[3]+0x00000058u,c->r[5]); // 8004E680
  W32(c->r[3]+0x00000060u,c->r[4]); // 8004E684
  W32(c->r[3]+0x00000078u,c->r[0]); // 8004E688
  c->r[0]=0u+0x80050000u; // 8004E68C
  W32(c->r[1]+0x000000ACu,c->r[0]); // 8004E690
  c->r[0]=0u+0x80050000u; // 8004E694
  c->r[16]=0u+0x80050000u; // 8004E698
  W32(c->r[1]+0x00000068u,c->r[0]); // 8004E69C
  c->r[0]=0u+0x80050000u; // 8004E6A0
  c->r[15]=R32(c->r[1]+0x000000ACu); // 8004E6A4
  c->r[17]=0u+0x80050000u; // 8004E6A8
  W32(c->r[1]+0x0000006Cu,c->r[0]); // 8004E6AC
  c->r[0]=0u+0x80050000u; // 8004E6B0
  c->r[15]=c->r[15]+0xFFFFFFD0u; // 8004E6B4
  c->r[18]=0u+0x80050000u; // 8004E6B8
  W32(c->r[1]+0x000000ACu,c->r[15]); // 8004E6BC
  c->r[19]=0u+0x80050000u; // 8004E6C0
  c->r[15]=R32(c->r[1]+0x00000068u); // 8004E6C4
  c->r[20]=0u+0x80050000u; // 8004E6C8
  W32(c->r[1]+0x00000070u,c->r[0]); // 8004E6CC
  c->r[0]=0u+0x80050000u; // 8004E6D0
  c->r[15]=c->r[15]+0x0000008Cu; // 8004E6D4
  c->r[21]=0u+0x80050000u; // 8004E6D8
  W32(c->r[1]+0x00000068u,c->r[15]); // 8004E6DC
  c->r[22]=0u+0x80050000u; // 8004E6E0
  c->r[15]=R32(c->r[1]+0x0000006Cu); // 8004E6E4
  c->r[23]=0u+0x80050000u; // 8004E6E8
  W32(c->r[1]+0x00000074u,c->r[0]); // 8004E6EC
  c->r[0]=0u+0x80050000u; // 8004E6F0
  c->r[15]=c->r[15]+0x00000090u; // 8004E6F4
  c->r[24]=0u+0x80050000u; // 8004E6F8
  W32(c->r[1]+0x0000006Cu,c->r[15]); // 8004E6FC
  c->r[25]=0u+0x80050000u; // 8004E700
  c->r[15]=R32(c->r[1]+0x00000070u); // 8004E704
  c->r[26]=0u+0x80050000u; // 8004E708
  W32(c->r[1]+0x00000078u,c->r[0]); // 8004E70C
  c->r[0]=0u+0x80050000u; // 8004E710
  c->r[15]=c->r[15]+0x00000094u; // 8004E714
  c->r[27]=0u+0x80050000u; // 8004E718
  W32(c->r[1]+0x00000070u,c->r[15]); // 8004E71C
  c->r[28]=0u+0x80050000u; // 8004E720
  c->r[15]=R32(c->r[1]+0x00000074u); // 8004E724
  c->r[29]=0u+0x80050000u; // 8004E728
  W32(c->r[1]+0x0000007Cu,c->r[0]); // 8004E72C
  c->r[0]=0u+0x80050000u; // 8004E730
  c->r[15]=c->r[15]+0x000001A4u; // 8004E734
  c->r[30]=0u+0x80050000u; // 8004E738
  W32(c->r[1]+0x00000074u,c->r[15]); // 8004E73C
  c->r[12]=0u+0x80050000u; // 8004E740
  c->r[15]=R32(c->r[1]+0x00000078u); // 8004E744
  c->r[11]=0u+0x80050000u; // 8004E748
  W32(c->r[1]+0x00000080u,c->r[0]); // 8004E74C
  c->r[0]=0u+0x80050000u; // 8004E750
  c->r[15]=c->r[15]+0x00000260u; // 8004E754
  c->r[10]=0u+0x80050000u; // 8004E758
  W32(c->r[1]+0x00000078u,c->r[15]); // 8004E75C
  c->r[9]=0u+0x80050000u; // 8004E760
  c->r[15]=R32(c->r[1]+0x0000007Cu); // 8004E764
  c->r[8]=0u+0x80050000u; // 8004E768
  c->r[7]=0u+0x80050000u; // 8004E76C
  c->r[6]=0u+0x80050000u; // 8004E770
  c->r[15]=c->r[15]+0x00000264u; // 8004E774
  W32(c->r[1]+0x0000007Cu,c->r[15]); // 8004E778
  c->r[15]=R32(c->r[1]+0x00000080u); // 8004E77C
  c->r[5]=0u+0x80050000u; // 8004E780
  c->r[4]=0u+0x80050000u; // 8004E784
  c->r[14]=0u+0x80050000u; // 8004E788
  c->r[15]=c->r[15]+0x00000268u; // 8004E78C
  W32(c->r[1]+0x00000080u,c->r[15]); // 8004E790
  c->r[15]=c->r[0]|c->r[0]; // 8004E794
  c->r[0]=R32(c->r[1]+0x000000ACu); // 8004E798
  W32(c->r[3]+0x000000E4u,c->r[0]); // 8004E79C
  c->r[15]=c->r[15]+0x0000039Cu; // 8004E7A0
  c->r[0]=R32(c->r[1]+0x00000068u); // 8004E7A4
  c->r[16]=c->r[16]+0xFFFFF774u; // 8004E7A8
  W32(c->r[3]+0x000000ECu,c->r[0]); // 8004E7AC
  c->r[17]=c->r[17]+0xFFFFF830u; // 8004E7B0
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 8004E7B4
  c->r[18]=c->r[18]+0xFFFFF8ECu; // 8004E7B8
  W32(c->r[3]+0x000000E8u,c->r[0]); // 8004E7BC
  c->r[19]=c->r[19]+0xFFFFF8F0u; // 8004E7C0
  c->r[0]=R32(c->r[1]+0x00000070u); // 8004E7C4
  c->r[20]=c->r[20]+0xFFFFF900u; // 8004E7C8
  W32(c->r[3]+0x000000F0u,c->r[0]); // 8004E7CC
  c->r[21]=c->r[21]+0xFFFFF980u; // 8004E7D0
  c->r[0]=R32(c->r[1]+0x00000074u); // 8004E7D4
  c->r[22]=c->r[22]+0xFFFFFA68u; // 8004E7D8
  W32(c->r[3]+0x000000F4u,c->r[0]); // 8004E7DC
  c->r[23]=c->r[23]+0xFFFFFA6Cu; // 8004E7E0
  c->r[0]=R32(c->r[1]+0x00000078u); // 8004E7E4
  c->r[24]=c->r[24]+0xFFFFFABCu; // 8004E7E8
  W32(c->r[3]+0x000000FCu,c->r[0]); // 8004E7EC
  c->r[25]=c->r[25]+0xFFFFFB30u; // 8004E7F0
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8004E7F4
  c->r[26]=c->r[26]+0xFFFFFB34u; // 8004E7F8
  W32(c->r[3]+0x000000F8u,c->r[0]); // 8004E7FC
  c->r[27]=c->r[27]+0xFFFFFB38u; // 8004E800
  c->r[0]=R32(c->r[1]+0x00000080u); // 8004E804
  c->r[28]=c->r[28]+0xFFFFFB3Cu; // 8004E808
  c->r[29]=c->r[29]+0xFFFFFC48u; // 8004E80C
  c->r[30]=c->r[30]+0xFFFFFC4Cu; // 8004E810
  c->r[12]=c->r[12]+0xFFFFFC50u; // 8004E814
  c->r[11]=c->r[11]+0xFFFFFC54u; // 8004E818
  c->r[10]=c->r[10]+0xFFFFFCF8u; // 8004E81C
  c->r[9]=c->r[9]+0xFFFFFDBCu; // 8004E820
  c->r[8]=c->r[8]+0xFFFFFDC0u; // 8004E824
  c->r[7]=c->r[7]+0xFFFFFDC4u; // 8004E828
  c->r[6]=c->r[6]+0xFFFFFE68u; // 8004E82C
  c->r[5]=c->r[5]+0xFFFFFF04u; // 8004E830
  c->r[4]=c->r[4]+0xFFFFFF08u; // 8004E834
  c->r[14]=c->r[14]+0xFFFFFF0Cu; // 8004E838
  W32(c->r[3]+0x00000100u,c->r[0]); // 8004E83C
  c->r[0]=c->r[15]|c->r[15]; // 8004E840
  W32(c->r[1]+0x00000084u,c->r[15]); // 8004E844
  W32(c->r[3]+0x00000080u,c->r[16]); // 8004E848
  W32(c->r[3]+0x00000084u,c->r[17]); // 8004E84C
  W32(c->r[3]+0x0000008Cu,c->r[18]); // 8004E850
  W32(c->r[3]+0x00000088u,c->r[19]); // 8004E854
  W32(c->r[3]+0x00000090u,c->r[20]); // 8004E858
  W32(c->r[3]+0x00000094u,c->r[21]); // 8004E85C
  W32(c->r[3]+0x0000009Cu,c->r[22]); // 8004E860
  W32(c->r[3]+0x00000098u,c->r[23]); // 8004E864
  W32(c->r[3]+0x000000A0u,c->r[24]); // 8004E868
  W32(c->r[3]+0x000000A4u,c->r[25]); // 8004E86C
  W32(c->r[3]+0x000000ACu,c->r[26]); // 8004E870
  W32(c->r[3]+0x000000A8u,c->r[27]); // 8004E874
  W32(c->r[3]+0x000000B0u,c->r[28]); // 8004E878
  W32(c->r[3]+0x000000B4u,c->r[29]); // 8004E87C
  W32(c->r[3]+0x000000BCu,c->r[30]); // 8004E880
  W32(c->r[3]+0x000000B8u,c->r[12]); // 8004E884
  W32(c->r[3]+0x000000C0u,c->r[11]); // 8004E888
  W32(c->r[3]+0x000000C4u,c->r[10]); // 8004E88C
  W32(c->r[3]+0x000000CCu,c->r[9]); // 8004E890
  W32(c->r[3]+0x000000C8u,c->r[8]); // 8004E894
  W32(c->r[3]+0x000000D0u,c->r[7]); // 8004E898
  W32(c->r[3]+0x000000D4u,c->r[6]); // 8004E89C
  W32(c->r[3]+0x000000DCu,c->r[5]); // 8004E8A0
  W32(c->r[3]+0x000000D8u,c->r[4]); // 8004E8A4
  W32(c->r[3]+0x000000E0u,c->r[14]); // 8004E8A8
  W32(c->r[3]+0x00000104u,c->r[0]); // 8004E8AC
  c->r[0]=0u+0x80050000u; // 8004E8B0
  W32(c->r[1]+0x000000B0u,c->r[0]); // 8004E8B4
  c->r[0]=0u+0x80050000u; // 8004E8B8
  c->r[28]=0u+0x80050000u; // 8004E8BC
  W32(c->r[1]+0x00000088u,c->r[0]); // 8004E8C0
  c->r[0]=0u+0x80050000u; // 8004E8C4
  c->r[29]=R32(c->r[1]+0x000000B0u); // 8004E8C8
  c->r[27]=0u+0x80050000u; // 8004E8CC
  W32(c->r[1]+0x0000008Cu,c->r[0]); // 8004E8D0
  c->r[0]=0u+0x80050000u; // 8004E8D4
  c->r[29]=c->r[29]+0x00000C10u; // 8004E8D8
  c->r[26]=0u+0x80050000u; // 8004E8DC
  W32(c->r[1]+0x000000B0u,c->r[29]); // 8004E8E0
  c->r[25]=0u+0x80050000u; // 8004E8E4
  c->r[29]=R32(c->r[1]+0x00000088u); // 8004E8E8
  c->r[24]=0u+0x80050000u; // 8004E8EC
  W32(c->r[1]+0x00000090u,c->r[0]); // 8004E8F0
  c->r[0]=0u+0x80050000u; // 8004E8F4
  c->r[29]=c->r[29]+0x00000C14u; // 8004E8F8
  c->r[23]=0u+0x80050000u; // 8004E8FC
  W32(c->r[1]+0x00000088u,c->r[29]); // 8004E900
  c->r[22]=0u+0x80050000u; // 8004E904
  c->r[29]=R32(c->r[1]+0x0000008Cu); // 8004E908
  c->r[21]=0u+0x80050000u; // 8004E90C
  W32(c->r[1]+0x00000094u,c->r[0]); // 8004E910
  c->r[0]=0u+0x80050000u; // 8004E914
  c->r[29]=c->r[29]+0x00000CD8u; // 8004E918
  c->r[20]=0u+0x80050000u; // 8004E91C
  W32(c->r[1]+0x0000008Cu,c->r[29]); // 8004E920
  c->r[19]=0u+0x80050000u; // 8004E924
  c->r[29]=R32(c->r[1]+0x00000090u); // 8004E928
  c->r[18]=0u+0x80050000u; // 8004E92C
  W32(c->r[1]+0x00000098u,c->r[0]); // 8004E930
  c->r[0]=0u+0x80050000u; // 8004E934
  c->r[29]=c->r[29]+0x00000D94u; // 8004E938
  c->r[17]=0u+0x80050000u; // 8004E93C
  W32(c->r[1]+0x00000090u,c->r[29]); // 8004E940
  c->r[16]=0u+0x80050000u; // 8004E944
  c->r[29]=R32(c->r[1]+0x00000094u); // 8004E948
  c->r[15]=0u+0x80050000u; // 8004E94C
  W32(c->r[1]+0x0000009Cu,c->r[0]); // 8004E950
  c->r[0]=0u+0x80050000u; // 8004E954
  c->r[29]=c->r[29]+0x00000D98u; // 8004E958
  c->r[14]=0u+0x80050000u; // 8004E95C
  W32(c->r[1]+0x00000094u,c->r[29]); // 8004E960
  c->r[12]=0u+0x80050000u; // 8004E964
  c->r[29]=R32(c->r[1]+0x00000098u); // 8004E968
  c->r[11]=0u+0x80050000u; // 8004E96C
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8004E970
  c->r[0]=0u+0x80050000u; // 8004E974
  c->r[29]=c->r[29]+0x00000D9Cu; // 8004E978
  c->r[10]=0u+0x80050000u; // 8004E97C
  W32(c->r[1]+0x00000098u,c->r[29]); // 8004E980
  c->r[9]=0u+0x80050000u; // 8004E984
  c->r[29]=R32(c->r[1]+0x0000009Cu); // 8004E988
  c->r[8]=0u+0x80050000u; // 8004E98C
  c->r[7]=0u+0x80050000u; // 8004E990
  c->r[6]=0u+0x80050000u; // 8004E994
  c->r[29]=c->r[29]+0x00000E60u; // 8004E998
  W32(c->r[1]+0x0000009Cu,c->r[29]); // 8004E99C
  c->r[29]=R32(c->r[1]+0x000000A0u); // 8004E9A0
  c->r[5]=0u+0x80050000u; // 8004E9A4
  c->r[4]=0u+0x80050000u; // 8004E9A8
  c->r[30]=0u+0x80050000u; // 8004E9AC
  c->r[29]=c->r[29]+0x00000F1Cu; // 8004E9B0
  W32(c->r[1]+0x000000A0u,c->r[29]); // 8004E9B4
  c->r[29]=c->r[0]|c->r[0]; // 8004E9B8
  c->r[0]=R32(c->r[1]+0x000000B0u); // 8004E9BC
  W32(c->r[3]+0x00000168u,c->r[0]); // 8004E9C0
  c->r[29]=c->r[29]+0x00000F20u; // 8004E9C4
  c->r[0]=R32(c->r[1]+0x00000088u); // 8004E9C8
  c->r[28]=c->r[28]+0x000003C0u; // 8004E9CC
  W32(c->r[3]+0x00000170u,c->r[0]); // 8004E9D0
  c->r[27]=c->r[27]+0x000003C4u; // 8004E9D4
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 8004E9D8
  c->r[26]=c->r[26]+0x000003C8u; // 8004E9DC
  W32(c->r[3]+0x00000174u,c->r[0]); // 8004E9E0
  c->r[25]=c->r[25]+0x00000484u; // 8004E9E4
  c->r[0]=R32(c->r[1]+0x00000090u); // 8004E9E8
  c->r[24]=c->r[24]+0x00000518u; // 8004E9EC
  W32(c->r[3]+0x0000017Cu,c->r[0]); // 8004E9F0
  c->r[23]=c->r[23]+0x0000051Cu; // 8004E9F4
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004E9F8
  c->r[22]=c->r[22]+0x0000052Cu; // 8004E9FC
  W32(c->r[3]+0x00000178u,c->r[0]); // 8004EA00
  c->r[21]=c->r[21]+0x000005F0u; // 8004EA04
  c->r[0]=R32(c->r[1]+0x00000098u); // 8004EA08
  c->r[20]=c->r[20]+0x000006ACu; // 8004EA0C
  W32(c->r[3]+0x00000180u,c->r[0]); // 8004EA10
  c->r[19]=c->r[19]+0x000006B0u; // 8004EA14
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 8004EA18
  c->r[18]=c->r[18]+0x000006B4u; // 8004EA1C
  W32(c->r[3]+0x00000184u,c->r[0]); // 8004EA20
  c->r[17]=c->r[17]+0x000007B8u; // 8004EA24
  c->r[0]=R32(c->r[1]+0x000000A0u); // 8004EA28
  c->r[16]=c->r[16]+0x00000874u; // 8004EA2C
  c->r[15]=c->r[15]+0x00000878u; // 8004EA30
  c->r[14]=c->r[14]+0x0000087Cu; // 8004EA34
  c->r[12]=c->r[12]+0x00000940u; // 8004EA38
  c->r[11]=c->r[11]+0x00000A00u; // 8004EA3C
  c->r[10]=c->r[10]+0x00000A04u; // 8004EA40
  c->r[9]=c->r[9]+0x00000A08u; // 8004EA44
  c->r[8]=c->r[8]+0x00000AC4u; // 8004EA48
  c->r[7]=c->r[7]+0x00000B58u; // 8004EA4C
  c->r[6]=c->r[6]+0x00000B5Cu; // 8004EA50
  c->r[5]=c->r[5]+0x00000B6Cu; // 8004EA54
  c->r[4]=c->r[4]+0x00000C08u; // 8004EA58
  c->r[30]=c->r[30]+0x00000C0Cu; // 8004EA5C
  W32(c->r[3]+0x0000018Cu,c->r[0]); // 8004EA60
  c->r[0]=c->r[29]|c->r[29]; // 8004EA64
  W32(c->r[1]+0x000000A4u,c->r[29]); // 8004EA68
  W32(c->r[3]+0x0000010Cu,c->r[28]); // 8004EA6C
  W32(c->r[3]+0x00000108u,c->r[27]); // 8004EA70
  W32(c->r[3]+0x00000110u,c->r[26]); // 8004EA74
  W32(c->r[3]+0x00000114u,c->r[25]); // 8004EA78
  W32(c->r[3]+0x0000011Cu,c->r[24]); // 8004EA7C
  W32(c->r[3]+0x00000118u,c->r[23]); // 8004EA80
  W32(c->r[3]+0x00000120u,c->r[22]); // 8004EA84
  W32(c->r[3]+0x00000124u,c->r[21]); // 8004EA88
  W32(c->r[3]+0x0000012Cu,c->r[20]); // 8004EA8C
  W32(c->r[3]+0x00000128u,c->r[19]); // 8004EA90
  W32(c->r[3]+0x00000130u,c->r[18]); // 8004EA94
  W32(c->r[3]+0x00000134u,c->r[17]); // 8004EA98
  W32(c->r[3]+0x0000013Cu,c->r[16]); // 8004EA9C
  W32(c->r[3]+0x00000138u,c->r[15]); // 8004EAA0
  W32(c->r[3]+0x00000140u,c->r[14]); // 8004EAA4
  W32(c->r[3]+0x00000144u,c->r[12]); // 8004EAA8
  W32(c->r[3]+0x0000014Cu,c->r[11]); // 8004EAAC
  W32(c->r[3]+0x00000148u,c->r[10]); // 8004EAB0
  W32(c->r[3]+0x00000150u,c->r[9]); // 8004EAB4
  W32(c->r[3]+0x00000154u,c->r[8]); // 8004EAB8
  W32(c->r[3]+0x0000015Cu,c->r[7]); // 8004EABC
  W32(c->r[3]+0x00000158u,c->r[6]); // 8004EAC0
  W32(c->r[3]+0x00000160u,c->r[5]); // 8004EAC4
  W32(c->r[3]+0x00000164u,c->r[4]); // 8004EAC8
  W32(c->r[3]+0x0000016Cu,c->r[30]); // 8004EACC
  W32(c->r[3]+0x00000188u,c->r[0]); // 8004EAD0
  c->r[21]=0u+0x80050000u; // 8004EAD4
  c->r[20]=0u+0x80050000u; // 8004EAD8
  c->r[15]=0u+0x00000000u; // 8004EADC
  c->r[19]=0u+0x80050000u; // 8004EAE0
  c->r[18]=0u+0x80050000u; // 8004EAE4
  c->r[17]=0u+0x80050000u; // 8004EAE8
  c->r[16]=0u+0x80050000u; // 8004EAEC
  c->r[14]=0u+0x80050000u; // 8004EAF0
  c->r[12]=0u+0x80050000u; // 8004EAF4
  c->r[11]=0u+0x80050000u; // 8004EAF8
  c->r[10]=0u+0x80050000u; // 8004EAFC
  c->r[9]=0u+0x80050000u; // 8004EB00
  c->r[8]=0u+0x80050000u; // 8004EB04
  c->r[7]=0u+0x80050000u; // 8004EB08
  c->r[6]=0u+0x80050000u; // 8004EB0C
  c->r[5]=0u+0x80050000u; // 8004EB10
  c->r[4]=0u+0x80050000u; // 8004EB14
  c->r[21]=c->r[21]+0x00000F24u; // 8004EB18
  c->r[20]=c->r[20]+0x00000FF0u; // 8004EB1C
  c->r[19]=c->r[19]+0x000010B0u; // 8004EB20
  c->r[18]=c->r[18]+0x000010B4u; // 8004EB24
  c->r[17]=c->r[17]+0x000010B8u; // 8004EB28
  c->r[16]=c->r[16]+0x00001174u; // 8004EB2C
  c->r[14]=c->r[14]+0x00001208u; // 8004EB30
  c->r[12]=c->r[12]+0x0000120Cu; // 8004EB34
  c->r[11]=c->r[11]+0x0000121Cu; // 8004EB38
  c->r[10]=c->r[10]+0x0000122Cu; // 8004EB3C
  c->r[9]=c->r[9]+0x00001230u; // 8004EB40
  c->r[8]=c->r[8]+0x00001234u; // 8004EB44
  c->r[7]=c->r[7]+0x00001238u; // 8004EB48
  c->r[6]=c->r[6]+0x00001254u; // 8004EB4C
  c->r[5]=c->r[5]+0x00001258u; // 8004EB50
  c->r[4]=c->r[4]+0x0000125Cu; // 8004EB54
  W32(c->r[3]+0x00000190u,c->r[21]); // 8004EB58
  W32(c->r[3]+0x00000194u,c->r[20]); // 8004EB5C
  W32(c->r[3]+0x0000019Cu,c->r[19]); // 8004EB60
  W32(c->r[3]+0x00000198u,c->r[18]); // 8004EB64
  W32(c->r[3]+0x000001A0u,c->r[17]); // 8004EB68
  W32(c->r[3]+0x000001A4u,c->r[16]); // 8004EB6C
  W32(c->r[3]+0x000001ACu,c->r[14]); // 8004EB70
  W32(c->r[3]+0x000001A8u,c->r[12]); // 8004EB74
  W32(c->r[3]+0x000001B0u,c->r[11]); // 8004EB78
  W32(c->r[3]+0x000001B4u,c->r[10]); // 8004EB7C
  W32(c->r[3]+0x000001BCu,c->r[9]); // 8004EB80
  W32(c->r[3]+0x000001B8u,c->r[8]); // 8004EB84
  W32(c->r[3]+0x000001C0u,c->r[7]); // 8004EB88
  W32(c->r[3]+0x000001C4u,c->r[6]); // 8004EB8C
  W32(c->r[3]+0x000001CCu,c->r[5]); // 8004EB90
  W32(c->r[3]+0x000001C8u,c->r[4]); // 8004EB94
  W32(c->r[3]+0x000001ECu,c->r[15]); // 8004EB98
  W32(c->r[3]+0x000001F0u,c->r[15]); // 8004EB9C
  W32(c->r[3]+0x00000210u,c->r[15]); // 8004EBA0
  W32(c->r[3]+0x00000214u,c->r[15]); // 8004EBA4
  c->r[3]=c->r[3]+0x000003F4u; // 8004EBA8
  c->lr=0x8004EBB0u; f_80214670(c); // 8004EBAC
  c->r[3]=c->r[31]+0x000003F8u; // 8004EBB0
  c->lr=0x8004EBB8u; f_80214670(c); // 8004EBB4
  c->r[3]=c->r[1]+0x00000010u; // 8004EBB8
  c->lr=0x8004EBC0u; f_80071D88(c); // 8004EBBC
  c->r[14]=0u+0x802A0000u; // 8004EBC0
  c->r[6]=R32(c->r[13]+0xFFFF8158u); // 8004EBC4
  c->r[3]=c->r[31]+0x00000360u; // 8004EBC8
  c->r[5]=c->r[1]+0x00000010u; // 8004EBCC
  c->r[4]=c->r[14]+0xFFFF93F0u; // 8004EBD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EBD4
  c->lr=0x8004EBDCu; f_800B5FD4(c); // 8004EBD8
  c->r[6]=R32(c->r[13]+0xFFFF815Cu); // 8004EBDC
  c->r[3]=c->r[31]+0x000003A0u; // 8004EBE0
  c->r[4]=c->r[14]+0xFFFF93F0u; // 8004EBE4
  c->r[5]=c->r[1]+0x00000010u; // 8004EBE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EBEC
  c->lr=0x8004EBF4u; f_800B5FD4(c); // 8004EBF0
  c->r[0]=0u+0xFFFFFFFFu; // 8004EBF4
  W32(c->r[31]+0x000001E8u,c->r[0]); // 8004EBF8
  c->r[3]=c->r[1]+0x0000000Cu; // 8004EBFC
  c->r[5]=0u+0x00000001u; // 8004EC00
  W32(c->r[31]+0x000001E0u,c->r[15]); // 8004EC04
  W32(c->r[31]+0x000001E4u,c->r[15]); // 8004EC08
  W8(c->r[1]+0x0000000Cu,c->r[15]); // 8004EC0C
  c->r[4]=R32(c->r[31]+0x000001ECu); // 8004EC10
  c->lr=0x8004EC18u; f_8020CBF8(c); // 8004EC14
  cmps(c,0,(int32_t)c->r[15],0); // 8004EC18
  W32(c->r[31]+0x000001ECu,c->r[15]); // 8004EC1C
  W32(c->r[31]+0x000001F0u,c->r[15]); // 8004EC20
  if (crb(c,2)) { goto L_8004EC5C; } // 8004EC24
  c->r[7]=0u+0x802E0000u; // 8004EC28
  W8(c->r[1]+0x00000008u,c->r[15]); // 8004EC2C
  c->r[3]=c->r[1]+0x00000008u; // 8004EC30
  c->r[4]=0u+0x00000000u; // 8004EC34
  c->r[7]=c->r[7]+0x000026FCu; // 8004EC38
  c->r[5]=0u+0x00000020u; // 8004EC3C
  c->r[6]=0u+0x00000001u; // 8004EC40
  c->r[8]=0u+0x00000058u; // 8004EC44
  c->lr=0x8004EC4Cu; f_8020C0D0(c); // 8004EC48
  W32(c->r[31]+0x000001ECu,c->r[3]); // 8004EC4C
  c->r[4]=0u+0x00000000u; // 8004EC50
  c->r[5]=R32(c->r[31]+0x000001F0u); // 8004EC54
  c->lr=0x8004EC5Cu; f_80212C88(c); // 8004EC58
L_8004EC5C:;
  c->r[4]=0u+0x00000000u; // 8004EC5C
  c->r[0]=0u+0x00000001u; // 8004EC60
  W32(c->r[31]+0x000001F8u,c->r[4]); // 8004EC64
  c->r[3]=c->r[31]|c->r[31]; // 8004EC68
  W32(c->r[31]+0x000001FCu,c->r[4]); // 8004EC6C
  W8(c->r[31]+0x000001F4u,c->r[0]); // 8004EC70
  {uint32_t ea=c->r[1]+0x000000B8u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8004EC74
  c->r[0]=R32(c->r[1]+0x00000104u); // 8004EC78
  c->lr=c->r[0]; // 8004EC7C
  c->r[1]=c->r[1]+0x00000100u; // 8004EC80
  return; // 8004EC84
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,0>FPQ24gbla12SaveDataUtil
void f_8004EC88(Ctx* __restrict c) {
  trace_call(0x8004EC88u);
  c->r[0]=0u+0x0000001Bu; // 8004EC88
  W32(c->r[3]+0x000001D8u,c->r[0]); // 8004EC8C
  return; // 8004EC90
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,0>FPQ24gbla12SaveDataUtil
void f_8004EC94(Ctx* __restrict c) {
  trace_call(0x8004EC94u);
  return; // 8004EC94
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,0>FPQ24gbla12SaveDataUtil
void f_8004EC98(Ctx* __restrict c) {
  trace_call(0x8004EC98u);
  return; // 8004EC98
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,0>FPQ24gbla12SaveDataUtil
void f_8004EC9C(Ctx* __restrict c) {
  trace_call(0x8004EC9Cu);
  return; // 8004EC9C
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,1>FPQ24gbla12SaveDataUtil
void f_8004ECA0(Ctx* __restrict c) {
  trace_call(0x8004ECA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004ECA0
  c->r[0]=c->lr; // 8004ECA4
  c->r[4]=0u+0x00000000u; // 8004ECA8
  c->r[5]=0u+0x000000BCu; // 8004ECAC
  W32(c->r[1]+0x00000064u,c->r[0]); // 8004ECB0
  c->r[0]=0u+0x00000001u; // 8004ECB4
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8004ECB8
  W32(c->r[1]+0x00000058u,c->r[30]); // 8004ECBC
  c->r[30]=c->r[3]|c->r[3]; // 8004ECC0
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004ECC4
  c->r[3]=c->r[3]+0x000002A4u; // 8004ECC8
  c->lr=0x8004ECD0u; f_80212C88(c); // 8004ECCC
  c->r[4]=c->r[30]|c->r[30]; // 8004ECD0
  c->r[3]=c->r[30]+0x000002A4u; // 8004ECD4
  c->lr=0x8004ECDCu; f_80071DBC(c); // 8004ECD8
  c->r[31]=0u+0x00000000u; // 8004ECDC
  W32(c->r[1]+0x00000010u,c->r[31]); // 8004ECE0
  c->r[3]=c->r[1]+0x00000010u; // 8004ECE4
  W32(c->r[1]+0x00000014u,c->r[31]); // 8004ECE8
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004ECEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004ECF0
  W32(c->r[1]+0x00000020u,c->r[31]); // 8004ECF4
  W32(c->r[1]+0x00000024u,c->r[31]); // 8004ECF8
  W32(c->r[1]+0x00000028u,c->r[31]); // 8004ECFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004ED00
  W32(c->r[1]+0x00000030u,c->r[31]); // 8004ED04
  W32(c->r[1]+0x00000034u,c->r[31]); // 8004ED08
  W32(c->r[1]+0x00000038u,c->r[31]); // 8004ED0C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004ED10
  W32(c->r[1]+0x00000040u,c->r[31]); // 8004ED14
  W32(c->r[1]+0x00000044u,c->r[31]); // 8004ED18
  W32(c->r[1]+0x00000048u,c->r[31]); // 8004ED1C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004ED20
  c->lr=0x8004ED28u; f_80071D88(c); // 8004ED24
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8004ED28
  c->r[3]=c->r[1]+0x0000000Cu; // 8004ED2C
  c->r[5]=0u+0x00000001u; // 8004ED30
  c->r[4]=R32(c->r[30]+0x000001ECu); // 8004ED34
  c->lr=0x8004ED3Cu; f_8020CBF8(c); // 8004ED38
  c->r[0]=0u+0x00000520u; // 8004ED3C
  W32(c->r[30]+0x000001F0u,c->r[0]); // 8004ED40
  c->r[7]=0u+0x802E0000u; // 8004ED44
  c->r[3]=c->r[1]+0x00000008u; // 8004ED48
  W32(c->r[30]+0x000001ECu,c->r[31]); // 8004ED4C
  c->r[7]=c->r[7]+0x000026FCu; // 8004ED50
  c->r[4]=0u+0x00000520u; // 8004ED54
  c->r[5]=0u+0x00000020u; // 8004ED58
  W8(c->r[1]+0x00000008u,c->r[31]); // 8004ED5C
  c->r[6]=0u+0x00000001u; // 8004ED60
  c->r[8]=0u+0x00000058u; // 8004ED64
  c->lr=0x8004ED6Cu; f_8020C0D0(c); // 8004ED68
  W32(c->r[30]+0x000001ECu,c->r[3]); // 8004ED6C
  c->r[4]=0u+0x00000000u; // 8004ED70
  c->r[5]=R32(c->r[30]+0x000001F0u); // 8004ED74
  c->lr=0x8004ED7Cu; f_80212C88(c); // 8004ED78
  c->r[0]=0u+0x00000014u; // 8004ED7C
  c->r[6]=0u+0x80050000u; // 8004ED80
  W32(c->r[30]+0x000001F8u,c->r[0]); // 8004ED84
  c->r[3]=c->r[1]+0x00000010u; // 8004ED88
  c->r[4]=R32(c->r[30]+0x000001ECu); // 8004ED8C
  c->r[5]=c->r[30]+0x000001F8u; // 8004ED90
  c->r[6]=c->r[6]+0x0000261Cu; // 8004ED94
  c->r[7]=c->r[30]+0x000002A4u; // 8004ED98
  c->lr=0x8004EDA0u; f_80071D84(c); // 8004ED9C
  cmps(c,0,(int32_t)c->r[3],0); // 8004EDA0
  if (!crb(c,2)) { goto L_8004EDC0; } // 8004EDA4
  c->r[3]=0u+0x802A0000u; // 8004EDA8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004EDAC
  c->r[3]=c->r[3]+0x00000006u; // 8004EDB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EDB4
  c->lr=0x8004EDBCu; f_80019994(c); // 8004EDB8
  goto L_8004EDE4; // 8004EDBC
L_8004EDC0:;
  c->r[5]=0u+0x802A0000u; // 8004EDC0
  W32(c->r[30]+0x000003E4u,c->r[3]); // 8004EDC4
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004EDC8
  c->r[4]=c->r[3]|c->r[3]; // 8004EDCC
  c->r[3]=c->r[5]+0x00000028u; // 8004EDD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EDD4
  c->lr=0x8004EDDCu; f_80019994(c); // 8004EDD8
  c->r[0]=0u+0x0000001Cu; // 8004EDDC
  W32(c->r[30]+0x000001D8u,c->r[0]); // 8004EDE0
L_8004EDE4:;
  c->r[0]=0u+0x00000000u; // 8004EDE4
  W32(c->r[30]+0x000001DCu,c->r[0]); // 8004EDE8
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 8004EDEC
  c->r[30]=R32(c->r[1]+0x00000058u); // 8004EDF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 8004EDF4
  c->lr=c->r[0]; // 8004EDF8
  c->r[1]=c->r[1]+0x00000060u; // 8004EDFC
  return; // 8004EE00
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,1>FPQ24gbla12SaveDataUtil
void f_8004EE04(Ctx* __restrict c) {
  trace_call(0x8004EE04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EE04
  c->r[0]=c->lr; // 8004EE08
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EE0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004EE10
  c->r[31]=c->r[3]|c->r[3]; // 8004EE14
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004EE18
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004EE1C
  cmps(c,0,(int32_t)c->r[0],0); // 8004EE20
  if (!crb(c,2)) { goto L_8004EECC; } // 8004EE24
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004EE28
  cmps(c,0,(int32_t)c->r[4],0); // 8004EE2C
  if (!crb(c,2)) { goto L_8004EEB0; } // 8004EE30
  c->r[30]=0u+0x802A0000u; // 8004EE34
  c->r[30]=c->r[30]+0xFFFF93F0u; // 8004EE38
  c->r[3]=c->r[30]+0x00000050u; // 8004EE3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EE40
  c->lr=0x8004EE48u; f_80019994(c); // 8004EE44
  c->r[4]=R32(c->r[13]+0xFFFF8158u); // 8004EE48
  c->r[3]=c->r[31]+0x000001E0u; // 8004EE4C
  c->lr=0x8004EE54u; f_8005250C(c); // 8004EE50
  cmps(c,0,(int32_t)c->r[3],0); // 8004EE54
  if (crb(c,2)) { goto L_8004EE90; } // 8004EE58
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004EE5C
  c->r[3]=0u+0x8D3E0000u; // 8004EE60
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004EE64
  c->r[4]=c->r[4]+0x00000001u; // 8004EE68
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004EE6C
  c->r[0]=c->r[0]+c->r[4]; // 8004EE70
  c->r[0]=sraw(c,c->r[0],4); // 8004EE74
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004EE78
  c->r[0]=c->r[0]+c->r[3]; // 8004EE7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004EE80
  c->r[0]=c->r[4]-c->r[0]; // 8004EE84
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004EE88
  goto L_8004EECC; // 8004EE8C
L_8004EE90:;
  c->r[3]=c->r[30]+0x0000006Au; // 8004EE90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EE94
  c->lr=0x8004EE9Cu; f_80019994(c); // 8004EE98
  c->r[3]=0u+0x0000001Cu; // 8004EE9C
  c->r[0]=0u+0xFFFFFFF4u; // 8004EEA0
  W32(c->r[31]+0x000001D8u,c->r[3]); // 8004EEA4
  W32(c->r[31]+0x000003E4u,c->r[0]); // 8004EEA8
  goto L_8004EECC; // 8004EEAC
L_8004EEB0:;
  c->r[3]=0u+0x802A0000u; // 8004EEB0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004EEB4
  c->r[3]=c->r[3]+0x00000088u; // 8004EEB8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EEBC
  c->lr=0x8004EEC4u; f_80019994(c); // 8004EEC0
  c->r[0]=0u+0x0000001Cu; // 8004EEC4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004EEC8
L_8004EECC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004EECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004EED0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004EED4
  c->lr=c->r[0]; // 8004EED8
  c->r[1]=c->r[1]+0x00000010u; // 8004EEDC
  return; // 8004EEE0
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,1>FPQ24gbla12SaveDataUtil
void f_8004EEE4(Ctx* __restrict c) {
  trace_call(0x8004EEE4u);
  return; // 8004EEE4
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,1>FPQ24gbla12SaveDataUtil
void f_8004EEE8(Ctx* __restrict c) {
  trace_call(0x8004EEE8u);
  return; // 8004EEE8
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,2>FPQ24gbla12SaveDataUtil
void f_8004EEEC(Ctx* __restrict c) {
  trace_call(0x8004EEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EEEC
  c->r[0]=c->lr; // 8004EEF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004EEF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004EEF8
  c->r[31]=0u+0x802A0000u; // 8004EEFC
  c->r[31]=c->r[31]+0xFFFF93F0u; // 8004EF00
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004EF04
  c->r[30]=c->r[3]|c->r[3]; // 8004EF08
  c->r[3]=c->r[31]+0x000000A7u; // 8004EF0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004EF10
  c->lr=0x8004EF18u; f_80019994(c); // 8004EF14
  c->r[3]=c->r[1]+0x00000008u; // 8004EF18
  c->r[4]=c->r[31]+0x000000CAu; // 8004EF1C
  c->lr=0x8004EF24u; f_80213B34(c); // 8004EF20
  c->r[3]=c->r[30]+0x000003F4u; // 8004EF24
  c->r[4]=c->r[1]+0x00000008u; // 8004EF28
  c->lr=0x8004EF30u; f_80214BCC(c); // 8004EF2C
  c->r[3]=c->r[1]+0x00000008u; // 8004EF30
  c->r[4]=0u+0xFFFFFFFFu; // 8004EF34
  c->lr=0x8004EF3Cu; f_8021467C(c); // 8004EF38
  c->r[3]=c->r[1]+0x0000000Cu; // 8004EF3C
  c->r[4]=c->r[31]+0x000000DDu; // 8004EF40
  c->lr=0x8004EF48u; f_80213B34(c); // 8004EF44
  c->r[3]=c->r[30]+0x000003F8u; // 8004EF48
  c->r[4]=c->r[1]+0x0000000Cu; // 8004EF4C
  c->lr=0x8004EF54u; f_80214BCC(c); // 8004EF50
  c->r[3]=c->r[1]+0x0000000Cu; // 8004EF54
  c->r[4]=0u+0xFFFFFFFFu; // 8004EF58
  c->lr=0x8004EF60u; f_8021467C(c); // 8004EF5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004EF60
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004EF64
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004EF68
  c->lr=c->r[0]; // 8004EF6C
  c->r[1]=c->r[1]+0x00000020u; // 8004EF70
  return; // 8004EF74
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,2>FPQ24gbla12SaveDataUtil
void f_8004EF78(Ctx* __restrict c) {
  trace_call(0x8004EF78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004EF78
  c->r[0]=c->lr; // 8004EF7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004EF80
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004EF84
  c->r[31]=c->r[3]|c->r[3]; // 8004EF88
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004EF8C
  c->r[30]=0u+0x00000000u; // 8004EF90
  c->lr=0x8004EF98u; f_80071EC0(c); // 8004EF94
  cmps(c,0,(int32_t)c->r[3],0); // 8004EF98
  if (!crb(c,2)) { goto L_8004EFC4; } // 8004EF9C
  c->lr=0x8004EFA4u; f_80071E78(c); // 8004EFA0
  cmps(c,0,(int32_t)c->r[3],0); // 8004EFA4
  if (!crb(c,2)) { goto L_8004EFC4; } // 8004EFA8
  c->lr=0x8004EFB0u; f_80071E80(c); // 8004EFAC
  cmps(c,0,(int32_t)c->r[3],0); // 8004EFB0
  if (!crb(c,2)) { goto L_8004EFC4; } // 8004EFB4
  c->lr=0x8004EFBCu; f_80071EB8(c); // 8004EFB8
  cmps(c,0,(int32_t)c->r[3],0); // 8004EFBC
  if (crb(c,2)) { goto L_8004EFC8; } // 8004EFC0
L_8004EFC4:;
  c->r[30]=0u+0x00000001u; // 8004EFC4
L_8004EFC8:;
  c->lr=0x8004EFCCu; f_800768A8(c); // 8004EFC8
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004EFCC
  cmps(c,0,(int32_t)c->r[30],0); // 8004EFD0
  c->r[0]=0u-c->r[3]; // 8004EFD4
  c->r[0]=c->r[0]|c->r[3]; // 8004EFD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8004EFDC
  if (crb(c,2)) { goto L_8004EFF8; } // 8004EFE0
  cmps(c,0,(int32_t)c->r[0],0); // 8004EFE4
  if (crb(c,2)) { goto L_8004EFF8; } // 8004EFE8
  c->r[0]=0u+0x0000001Cu; // 8004EFEC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004EFF0
  goto L_8004F048; // 8004EFF4
L_8004EFF8:;
  c->r[3]=c->r[31]+0x000003F4u; // 8004EFF8
  c->lr=0x8004F000u; f_80214280(c); // 8004EFFC
  cmps(c,0,(int32_t)c->r[3],0); // 8004F000
  if (crb(c,2)) { goto L_8004F048; } // 8004F004
  c->r[3]=c->r[31]+0x000003F8u; // 8004F008
  c->lr=0x8004F010u; f_80214280(c); // 8004F00C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F010
  if (crb(c,2)) { goto L_8004F048; } // 8004F014
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004F018
  c->r[3]=0u+0x8D3E0000u; // 8004F01C
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004F020
  c->r[4]=c->r[4]+0x00000001u; // 8004F024
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004F028
  c->r[0]=c->r[0]+c->r[4]; // 8004F02C
  c->r[0]=sraw(c,c->r[0],4); // 8004F030
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004F034
  c->r[0]=c->r[0]+c->r[3]; // 8004F038
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004F03C
  c->r[0]=c->r[4]-c->r[0]; // 8004F040
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F044
L_8004F048:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F048
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F04C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004F050
  c->lr=c->r[0]; // 8004F054
  c->r[1]=c->r[1]+0x00000010u; // 8004F058
  return; // 8004F05C
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,2>FPQ24gbla12SaveDataUtil
void f_8004F060(Ctx* __restrict c) {
  trace_call(0x8004F060u);
  return; // 8004F060
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,2>FPQ24gbla12SaveDataUtil
void f_8004F064(Ctx* __restrict c) {
  trace_call(0x8004F064u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F064
  c->r[0]=c->lr; // 8004F068
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F06C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F070
  c->r[31]=c->r[3]|c->r[3]; // 8004F074
  c->r[3]=c->r[3]+0x000003F4u; // 8004F078
  c->lr=0x8004F080u; f_80214280(c); // 8004F07C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F080
  if (crb(c,2)) { goto L_8004F098; } // 8004F084
  c->r[3]=c->r[31]+0x000003F8u; // 8004F088
  c->lr=0x8004F090u; f_80214280(c); // 8004F08C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F090
  if (!crb(c,2)) { goto L_8004F0A0; } // 8004F094
L_8004F098:;
  c->r[0]=0u+0x0000001Cu; // 8004F098
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F09C
L_8004F0A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F0A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F0A4
  c->lr=c->r[0]; // 8004F0A8
  c->r[1]=c->r[1]+0x00000010u; // 8004F0AC
  return; // 8004F0B0
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,3>FPQ24gbla12SaveDataUtil
void f_8004F0B4(Ctx* __restrict c) {
  trace_call(0x8004F0B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F0B4
  c->r[0]=c->lr; // 8004F0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F0BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F0C0
  c->r[31]=c->r[3]|c->r[3]; // 8004F0C4
  c->lr=0x8004F0CCu; f_80051D3C(c); // 8004F0C8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F0CC
  if (crb(c,2)) { goto L_8004F0F4; } // 8004F0D0
  c->r[3]=0u+0x802A0000u; // 8004F0D4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F0D8
  c->r[3]=c->r[3]+0x000000F0u; // 8004F0DC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F0E0
  c->lr=0x8004F0E8u; f_80019994(c); // 8004F0E4
  c->r[0]=0u+0x0000001Bu; // 8004F0E8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F0EC
  goto L_8004F118; // 8004F0F0
L_8004F0F4:;
  c->r[3]=0u+0x802A0000u; // 8004F0F4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F0F8
  c->r[3]=c->r[3]+0x00000115u; // 8004F0FC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F100
  c->lr=0x8004F108u; f_80019994(c); // 8004F104
  c->r[3]=0u+0x0000001Cu; // 8004F108
  c->r[0]=0u+0xFFFFFFF1u; // 8004F10C
  W32(c->r[31]+0x000001D8u,c->r[3]); // 8004F110
  W32(c->r[31]+0x000003E4u,c->r[0]); // 8004F114
L_8004F118:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F118
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F11C
  c->lr=c->r[0]; // 8004F120
  c->r[1]=c->r[1]+0x00000010u; // 8004F124
  return; // 8004F128
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,3>FPQ24gbla12SaveDataUtil
void f_8004F12C(Ctx* __restrict c) {
  trace_call(0x8004F12Cu);
  return; // 8004F12C
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,3>FPQ24gbla12SaveDataUtil
void f_8004F130(Ctx* __restrict c) {
  trace_call(0x8004F130u);
  return; // 8004F130
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,3>FPQ24gbla12SaveDataUtil
void f_8004F134(Ctx* __restrict c) {
  trace_call(0x8004F134u);
  return; // 8004F134
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,4>FPQ24gbla12SaveDataUtil
void f_8004F138(Ctx* __restrict c) {
  trace_call(0x8004F138u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F138
  c->r[0]=c->lr; // 8004F13C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F140
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004F144
  c->r[31]=c->r[3]|c->r[3]; // 8004F148
  c->lr=0x8004F150u; f_8002978C(c); // 8004F14C
  c->r[6]=rotl(c->r[3],0)&0x00003FFFu; // 8004F150
  c->r[4]=0u+0x00000000u; // 8004F154
  c->r[5]=0u-c->r[6]; // 8004F158
  c->r[0]=rotl(c->r[3],18)&0x0003FFFFu; // 8004F15C
  c->r[3]=c->r[5]|c->r[6]; // 8004F160
  W32(c->r[1]+0x00000008u,c->r[4]); // 8004F164
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 8004F168
  c->r[5]=c->r[1]+0x00000008u; // 8004F16C
  c->r[3]=c->r[3]+c->r[0]; // 8004F170
  c->r[4]=0u+0x00000002u; // 8004F174
  c->r[3]=c->r[3]+0x00000004u; // 8004F178
  c->lr=0x8004F180u; f_80071DB8(c); // 8004F17C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F180
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004F184
  if (!crb(c,2)) { goto L_8004F1CC; } // 8004F188
  c->r[3]=0u+0x802A0000u; // 8004F18C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F190
  c->r[3]=c->r[3]+0x0000013Au; // 8004F194
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F198
  c->lr=0x8004F1A0u; f_80019994(c); // 8004F19C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004F1A0
  W32(c->r[31]+0x000001FCu,c->r[0]); // 8004F1A4
  c->r[0]=R32(c->r[1]+0x00000008u); // 8004F1A8
  cmps(c,0,(int32_t)c->r[0],0); // 8004F1AC
  if (!crb(c,2)) { goto L_8004F1C0; } // 8004F1B0
  c->r[0]=0u+0x0000001Bu; // 8004F1B4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F1B8
  goto L_8004F1EC; // 8004F1BC
L_8004F1C0:;
  c->r[0]=0u+0x0000001Cu; // 8004F1C0
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F1C4
  goto L_8004F1EC; // 8004F1C8
L_8004F1CC:;
  c->r[5]=0u+0x802A0000u; // 8004F1CC
  c->r[4]=c->r[3]|c->r[3]; // 8004F1D0
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004F1D4
  c->r[3]=c->r[5]+0x00000157u; // 8004F1D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F1DC
  c->lr=0x8004F1E4u; f_80019994(c); // 8004F1E0
  c->r[0]=0u+0x0000001Cu; // 8004F1E4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F1E8
L_8004F1EC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F1EC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004F1F0
  c->lr=c->r[0]; // 8004F1F4
  c->r[1]=c->r[1]+0x00000020u; // 8004F1F8
  return; // 8004F1FC
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,4>FPQ24gbla12SaveDataUtil
void f_8004F200(Ctx* __restrict c) {
  trace_call(0x8004F200u);
  return; // 8004F200
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,4>FPQ24gbla12SaveDataUtil
void f_8004F204(Ctx* __restrict c) {
  trace_call(0x8004F204u);
  return; // 8004F204
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,4>FPQ24gbla12SaveDataUtil
void f_8004F208(Ctx* __restrict c) {
  trace_call(0x8004F208u);
  return; // 8004F208
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,5>FPQ24gbla12SaveDataUtil
void f_8004F20C(Ctx* __restrict c) {
  trace_call(0x8004F20Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F20C
  c->r[0]=c->lr; // 8004F210
  c->r[4]=0u+0x00000000u; // 8004F214
  c->r[5]=0u+0x000000BCu; // 8004F218
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F21C
  c->r[0]=0u+0x00000001u; // 8004F220
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F224
  c->r[31]=c->r[3]|c->r[3]; // 8004F228
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004F22C
  c->r[3]=c->r[3]+0x000002A4u; // 8004F230
  c->lr=0x8004F238u; f_80212C88(c); // 8004F234
  c->r[4]=c->r[31]|c->r[31]; // 8004F238
  c->r[3]=c->r[31]+0x000002A4u; // 8004F23C
  c->lr=0x8004F244u; f_80071DBC(c); // 8004F240
  c->r[6]=0u+0x80050000u; // 8004F244
  c->r[3]=c->r[31]+0x00000360u; // 8004F248
  c->r[6]=c->r[6]+0x0000261Cu; // 8004F24C
  c->r[7]=c->r[31]+0x000002A4u; // 8004F250
  c->r[4]=0u+0x00000030u; // 8004F254
  c->r[5]=0u+0x00000000u; // 8004F258
  c->lr=0x8004F260u; f_80071D60(c); // 8004F25C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F260
  if (!crb(c,2)) { goto L_8004F280; } // 8004F264
  c->r[3]=0u+0x802A0000u; // 8004F268
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F26C
  c->r[3]=c->r[3]+0x00000179u; // 8004F270
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F274
  c->lr=0x8004F27Cu; f_80019994(c); // 8004F278
  goto L_8004F2A4; // 8004F27C
L_8004F280:;
  c->r[5]=0u+0x802A0000u; // 8004F280
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004F284
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004F288
  c->r[4]=c->r[3]|c->r[3]; // 8004F28C
  c->r[3]=c->r[5]+0x00000195u; // 8004F290
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F294
  c->lr=0x8004F29Cu; f_80019994(c); // 8004F298
  c->r[0]=0u+0x0000001Cu; // 8004F29C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F2A0
L_8004F2A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F2A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F2A8
  c->lr=c->r[0]; // 8004F2AC
  c->r[1]=c->r[1]+0x00000010u; // 8004F2B0
  return; // 8004F2B4
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,5>FPQ24gbla12SaveDataUtil
void f_8004F2B8(Ctx* __restrict c) {
  trace_call(0x8004F2B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F2B8
  c->r[0]=c->lr; // 8004F2BC
  W32(c->r[1]+0x00000054u,c->r[0]); // 8004F2C0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004F2C4
  W32(c->r[1]+0x00000048u,c->r[30]); // 8004F2C8
  W32(c->r[1]+0x00000044u,c->r[29]); // 8004F2CC
  c->r[29]=c->r[3]|c->r[3]; // 8004F2D0
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004F2D4
  cmps(c,0,(int32_t)c->r[0],0); // 8004F2D8
  if (!crb(c,2)) { goto L_8004F43C; } // 8004F2DC
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004F2E0
  cmps(c,0,(int32_t)c->r[4],0); // 8004F2E4
  if (!crb(c,2)) { goto L_8004F420; } // 8004F2E8
  c->r[3]=0u+0x802A0000u; // 8004F2EC
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F2F0
  c->r[3]=c->r[3]+0x000001B8u; // 8004F2F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F2F8
  c->lr=0x8004F300u; f_80019994(c); // 8004F2FC
  c->r[31]=0u+0x00000000u; // 8004F300
  c->r[4]=0u+0x00000006u; // 8004F304
  c->r[3]=0u+0x00000008u; // 8004F308
  c->r[0]=0u+0xFFFFFFFFu; // 8004F30C
  W32(c->r[1]+0x00000030u,c->r[31]); // 8004F310
  W32(c->r[1]+0x00000034u,c->r[31]); // 8004F314
  W32(c->r[1]+0x00000024u,c->r[4]); // 8004F318
  W32(c->r[1]+0x00000028u,c->r[3]); // 8004F31C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8004F320
  c->lr=0x8004F328u; f_80029780(c); // 8004F324
  c->r[30]=c->r[3]|c->r[3]; // 8004F328
  c->r[3]=c->r[1]+0x00000014u; // 8004F32C
  c->r[4]=0u+0x00000400u; // 8004F330
  c->lr=0x8004F338u; f_80206D9C(c); // 8004F334
  c->r[3]=c->r[30]|c->r[30]; // 8004F338
  c->r[4]=c->r[1]+0x00000014u; // 8004F33C
  c->lr=0x8004F344u; f_80029794(c); // 8004F340
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004F344
  c->r[3]=c->r[1]+0x00000014u; // 8004F348
  c->r[4]=c->r[1]+0x00000018u; // 8004F34C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004F350
  W32(c->r[1]+0x00000020u,c->r[31]); // 8004F354
  c->lr=0x8004F35Cu; f_802072B8(c); // 8004F358
  W8(c->r[1]+0x00000008u,c->r[31]); // 8004F35C
  c->r[3]=c->r[1]+0x00000008u; // 8004F360
  c->r[4]=R32(c->r[1]+0x00000030u); // 8004F364
  c->r[5]=0u+0x00000001u; // 8004F368
  c->lr=0x8004F370u; f_8020CBF8(c); // 8004F36C
  c->r[3]=R32(c->r[1]+0x0000001Cu); // 8004F370
  W32(c->r[1]+0x00000030u,c->r[31]); // 8004F374
  c->r[0]=c->r[3]+0x0000001Fu; // 8004F378
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; cr0(c,c->r[4]); // 8004F37C
  W32(c->r[1]+0x00000034u,c->r[4]); // 8004F380
  if (crb(c,2)) { goto L_8004F3C8; } // 8004F384
  c->r[7]=0u+0x802E0000u; // 8004F388
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8004F38C
  c->r[3]=c->r[1]+0x0000000Cu; // 8004F390
  c->r[5]=0u+0x00000020u; // 8004F394
  c->r[7]=c->r[7]+0x000026E8u; // 8004F398
  c->r[6]=0u+0x00000001u; // 8004F39C
  c->r[8]=0u+0x0000004Eu; // 8004F3A0
  c->lr=0x8004F3A8u; f_8020C0D0(c); // 8004F3A4
  W32(c->r[1]+0x00000030u,c->r[3]); // 8004F3A8
  c->r[4]=0u+0x00000000u; // 8004F3AC
  c->r[5]=R32(c->r[1]+0x00000034u); // 8004F3B0
  c->lr=0x8004F3B8u; f_80212C88(c); // 8004F3B4
  c->r[3]=R32(c->r[1]+0x00000030u); // 8004F3B8
  c->r[4]=R32(c->r[1]+0x00000018u); // 8004F3BC
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 8004F3C0
  c->lr=0x8004F3C8u; f_80212C8C(c); // 8004F3C4
L_8004F3C8:;
  c->r[3]=R32(c->r[1]+0x00000018u); // 8004F3C8
  c->lr=0x8004F3D0u; f_80210AFC(c); // 8004F3CC
  c->r[31]=0u+0x00000000u; // 8004F3D0
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004F3D4
  c->r[3]=c->r[1]+0x00000014u; // 8004F3D8
  c->r[4]=0u+0xFFFFFFFFu; // 8004F3DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004F3E0
  W32(c->r[1]+0x00000020u,c->r[31]); // 8004F3E4
  c->lr=0x8004F3ECu; f_80206E40(c); // 8004F3E8
  c->r[3]=c->r[29]|c->r[29]; // 8004F3EC
  c->r[4]=c->r[1]+0x00000024u; // 8004F3F0
  c->lr=0x8004F3F8u; f_800514B0(c); // 8004F3F4
  c->r[0]=addc(c,c->r[1],0x00000030u,0); cr0(c,c->r[0]); // 8004F3F8
  if (crb(c,2)) { goto L_8004F414; } // 8004F3FC
  W8(c->r[1]+0x00000010u,c->r[31]); // 8004F400
  c->r[3]=c->r[1]+0x00000010u; // 8004F404
  c->r[4]=R32(c->r[1]+0x00000030u); // 8004F408
  c->r[5]=0u+0x00000001u; // 8004F40C
  c->lr=0x8004F414u; f_8020CBF8(c); // 8004F410
L_8004F414:;
  c->r[0]=0u+0x00000006u; // 8004F414
  W32(c->r[29]+0x000001D8u,c->r[0]); // 8004F418
  goto L_8004F43C; // 8004F41C
L_8004F420:;
  c->r[3]=0u+0x802A0000u; // 8004F420
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F424
  c->r[3]=c->r[3]+0x000001D2u; // 8004F428
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F42C
  c->lr=0x8004F434u; f_80019994(c); // 8004F430
  c->r[0]=0u+0x0000001Cu; // 8004F434
  W32(c->r[29]+0x000001D8u,c->r[0]); // 8004F438
L_8004F43C:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8004F43C
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8004F440
  c->r[30]=R32(c->r[1]+0x00000048u); // 8004F444
  c->r[29]=R32(c->r[1]+0x00000044u); // 8004F448
  c->lr=c->r[0]; // 8004F44C
  c->r[1]=c->r[1]+0x00000050u; // 8004F450
  return; // 8004F454
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,5>FPQ24gbla12SaveDataUtil
void f_8004F458(Ctx* __restrict c) {
  trace_call(0x8004F458u);
  return; // 8004F458
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,5>FPQ24gbla12SaveDataUtil
void f_8004F45C(Ctx* __restrict c) {
  trace_call(0x8004F45Cu);
  return; // 8004F45C
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,6>FPQ24gbla12SaveDataUtil
void f_8004F460(Ctx* __restrict c) {
  trace_call(0x8004F460u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F460
  c->r[0]=c->lr; // 8004F464
  c->r[4]=0u+0x00000000u; // 8004F468
  c->r[5]=0u+0x000000BCu; // 8004F46C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F470
  c->r[0]=0u+0x00000001u; // 8004F474
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F478
  c->r[31]=c->r[3]|c->r[3]; // 8004F47C
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004F480
  c->r[3]=c->r[3]+0x000002A4u; // 8004F484
  c->lr=0x8004F48Cu; f_80212C88(c); // 8004F488
  c->r[4]=c->r[31]|c->r[31]; // 8004F48C
  c->r[3]=c->r[31]+0x000002A4u; // 8004F490
  c->lr=0x8004F498u; f_80071DBC(c); // 8004F494
  c->r[6]=0u+0x80050000u; // 8004F498
  c->r[3]=c->r[31]+0x00000360u; // 8004F49C
  c->r[4]=c->r[31]+0x00000218u; // 8004F4A0
  c->r[7]=c->r[31]+0x000002A4u; // 8004F4A4
  c->r[6]=c->r[6]+0x0000261Cu; // 8004F4A8
  c->r[5]=0u+0x00000002u; // 8004F4AC
  c->lr=0x8004F4B4u; f_80071D68(c); // 8004F4B0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F4B4
  if (!crb(c,2)) { goto L_8004F4D4; } // 8004F4B8
  c->r[3]=0u+0x802A0000u; // 8004F4BC
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F4C0
  c->r[3]=c->r[3]+0x000001F0u; // 8004F4C4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F4C8
  c->lr=0x8004F4D0u; f_80019994(c); // 8004F4CC
  goto L_8004F510; // 8004F4D0
L_8004F4D4:;
  c->r[5]=0u+0x802A0000u; // 8004F4D4
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004F4D8
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004F4DC
  c->r[4]=c->r[3]|c->r[3]; // 8004F4E0
  c->r[3]=c->r[5]+0x00000218u; // 8004F4E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F4E8
  c->lr=0x8004F4F0u; f_80019994(c); // 8004F4EC
  c->r[3]=c->r[31]+0x00000218u; // 8004F4F0
  c->lr=0x8004F4F8u; f_80071D74(c); // 8004F4F4
  c->r[3]=c->r[31]+0x00000218u; // 8004F4F8
  c->r[4]=0u+0x00000000u; // 8004F4FC
  c->r[5]=0u+0x0000008Cu; // 8004F500
  c->lr=0x8004F508u; f_80212C88(c); // 8004F504
  c->r[0]=0u+0x0000001Cu; // 8004F508
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F50C
L_8004F510:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F514
  c->lr=c->r[0]; // 8004F518
  c->r[1]=c->r[1]+0x00000010u; // 8004F51C
  return; // 8004F520
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,6>FPQ24gbla12SaveDataUtil
void f_8004F524(Ctx* __restrict c) {
  trace_call(0x8004F524u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F524
  c->r[0]=c->lr; // 8004F528
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F52C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F530
  c->r[31]=c->r[3]|c->r[3]; // 8004F534
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004F538
  cmps(c,0,(int32_t)c->r[0],0); // 8004F53C
  if (!crb(c,2)) { goto L_8004F5CC; } // 8004F540
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004F544
  cmps(c,0,(int32_t)c->r[4],0); // 8004F548
  if (!crb(c,2)) { goto L_8004F598; } // 8004F54C
  c->r[3]=0u+0x802A0000u; // 8004F550
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F554
  c->r[3]=c->r[3]+0x0000024Au; // 8004F558
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F55C
  c->lr=0x8004F564u; f_80019994(c); // 8004F560
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004F564
  c->r[3]=0u+0x8D3E0000u; // 8004F568
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004F56C
  c->r[4]=c->r[4]+0x00000001u; // 8004F570
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004F574
  c->r[0]=c->r[0]+c->r[4]; // 8004F578
  c->r[0]=sraw(c,c->r[0],4); // 8004F57C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004F580
  c->r[0]=c->r[0]+c->r[3]; // 8004F584
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004F588
  c->r[0]=c->r[4]-c->r[0]; // 8004F58C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F590
  goto L_8004F5CC; // 8004F594
L_8004F598:;
  c->r[3]=0u+0x802A0000u; // 8004F598
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F59C
  c->r[3]=c->r[3]+0x0000026Fu; // 8004F5A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F5A4
  c->lr=0x8004F5ACu; f_80019994(c); // 8004F5A8
  c->r[3]=c->r[31]+0x00000218u; // 8004F5AC
  c->lr=0x8004F5B4u; f_80071D74(c); // 8004F5B0
  c->r[3]=c->r[31]+0x00000218u; // 8004F5B4
  c->r[4]=0u+0x00000000u; // 8004F5B8
  c->r[5]=0u+0x0000008Cu; // 8004F5BC
  c->lr=0x8004F5C4u; f_80212C88(c); // 8004F5C0
  c->r[0]=0u+0x0000001Cu; // 8004F5C4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F5C8
L_8004F5CC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F5CC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F5D0
  c->lr=c->r[0]; // 8004F5D4
  c->r[1]=c->r[1]+0x00000010u; // 8004F5D8
  return; // 8004F5DC
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,6>FPQ24gbla12SaveDataUtil
void f_8004F5E0(Ctx* __restrict c) {
  trace_call(0x8004F5E0u);
  return; // 8004F5E0
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,6>FPQ24gbla12SaveDataUtil
void f_8004F5E4(Ctx* __restrict c) {
  trace_call(0x8004F5E4u);
  return; // 8004F5E4
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,7>FPQ24gbla12SaveDataUtil
void f_8004F5E8(Ctx* __restrict c) {
  trace_call(0x8004F5E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F5E8
  c->r[0]=c->lr; // 8004F5EC
  c->r[4]=0u+0x00000000u; // 8004F5F0
  c->r[5]=0u+0x000000BCu; // 8004F5F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F5F8
  c->r[0]=0u+0x00000001u; // 8004F5FC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F600
  c->r[31]=c->r[3]|c->r[3]; // 8004F604
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004F608
  c->r[3]=c->r[3]+0x000002A4u; // 8004F60C
  c->lr=0x8004F614u; f_80212C88(c); // 8004F610
  c->r[4]=c->r[31]|c->r[31]; // 8004F614
  c->r[3]=c->r[31]+0x000002A4u; // 8004F618
  c->lr=0x8004F620u; f_80071DBC(c); // 8004F61C
  c->r[6]=0u+0x80050000u; // 8004F620
  c->r[4]=R32(c->r[31]+0x00000210u); // 8004F624
  c->r[5]=R32(c->r[31]+0x00000214u); // 8004F628
  c->r[3]=c->r[31]+0x00000218u; // 8004F62C
  c->r[6]=c->r[6]+0x0000261Cu; // 8004F630
  c->r[7]=c->r[31]+0x000002A4u; // 8004F634
  c->lr=0x8004F63Cu; f_80071D7C(c); // 8004F638
  cmps(c,0,(int32_t)c->r[3],0); // 8004F63C
  if (!crb(c,2)) { goto L_8004F65C; } // 8004F640
  c->r[3]=0u+0x802A0000u; // 8004F644
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F648
  c->r[3]=c->r[3]+0x00000298u; // 8004F64C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F650
  c->lr=0x8004F658u; f_80019994(c); // 8004F654
  goto L_8004F698; // 8004F658
L_8004F65C:;
  c->r[5]=0u+0x802A0000u; // 8004F65C
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004F660
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004F664
  c->r[4]=c->r[3]|c->r[3]; // 8004F668
  c->r[3]=c->r[5]+0x000002BBu; // 8004F66C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F670
  c->lr=0x8004F678u; f_80019994(c); // 8004F674
  c->r[3]=c->r[31]+0x00000218u; // 8004F678
  c->lr=0x8004F680u; f_80071D74(c); // 8004F67C
  c->r[3]=c->r[31]+0x00000218u; // 8004F680
  c->r[4]=0u+0x00000000u; // 8004F684
  c->r[5]=0u+0x0000008Cu; // 8004F688
  c->lr=0x8004F690u; f_80212C88(c); // 8004F68C
  c->r[0]=0u+0x0000001Cu; // 8004F690
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F694
L_8004F698:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F69C
  c->lr=c->r[0]; // 8004F6A0
  c->r[1]=c->r[1]+0x00000010u; // 8004F6A4
  return; // 8004F6A8
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,7>FPQ24gbla12SaveDataUtil
void f_8004F6AC(Ctx* __restrict c) {
  trace_call(0x8004F6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F6AC
  c->r[0]=c->lr; // 8004F6B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F6B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F6B8
  c->r[31]=c->r[3]|c->r[3]; // 8004F6BC
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004F6C0
  cmps(c,0,(int32_t)c->r[0],0); // 8004F6C4
  if (!crb(c,2)) { goto L_8004F758; } // 8004F6C8
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004F6CC
  cmps(c,0,(int32_t)c->r[4],0); // 8004F6D0
  if (!crb(c,1)) { goto L_8004F720; } // 8004F6D4
  c->r[3]=0u+0x802A0000u; // 8004F6D8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F6DC
  c->r[3]=c->r[3]+0x000002E8u; // 8004F6E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F6E4
  c->lr=0x8004F6ECu; f_80019994(c); // 8004F6E8
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004F6EC
  c->r[3]=0u+0x8D3E0000u; // 8004F6F0
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004F6F4
  c->r[4]=c->r[4]+0x00000001u; // 8004F6F8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004F6FC
  c->r[0]=c->r[0]+c->r[4]; // 8004F700
  c->r[0]=sraw(c,c->r[0],4); // 8004F704
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004F708
  c->r[0]=c->r[0]+c->r[3]; // 8004F70C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004F710
  c->r[0]=c->r[4]-c->r[0]; // 8004F714
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F718
  goto L_8004F758; // 8004F71C
L_8004F720:;
  if (crb(c,2)) { goto L_8004F758; } // 8004F720
  c->r[3]=0u+0x802A0000u; // 8004F724
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F728
  c->r[3]=c->r[3]+0x00000308u; // 8004F72C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F730
  c->lr=0x8004F738u; f_80019994(c); // 8004F734
  c->r[3]=c->r[31]+0x00000218u; // 8004F738
  c->lr=0x8004F740u; f_80071D74(c); // 8004F73C
  c->r[3]=c->r[31]+0x00000218u; // 8004F740
  c->r[4]=0u+0x00000000u; // 8004F744
  c->r[5]=0u+0x0000008Cu; // 8004F748
  c->lr=0x8004F750u; f_80212C88(c); // 8004F74C
  c->r[0]=0u+0x0000001Cu; // 8004F750
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F754
L_8004F758:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F758
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F75C
  c->lr=c->r[0]; // 8004F760
  c->r[1]=c->r[1]+0x00000010u; // 8004F764
  return; // 8004F768
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,7>FPQ24gbla12SaveDataUtil
void f_8004F76C(Ctx* __restrict c) {
  trace_call(0x8004F76Cu);
  return; // 8004F76C
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,7>FPQ24gbla12SaveDataUtil
void f_8004F770(Ctx* __restrict c) {
  trace_call(0x8004F770u);
  return; // 8004F770
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,8>FPQ24gbla12SaveDataUtil
void f_8004F774(Ctx* __restrict c) {
  trace_call(0x8004F774u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F774
  c->r[0]=c->lr; // 8004F778
  c->r[4]=0u+0x00000000u; // 8004F77C
  c->r[5]=0u+0x000000BCu; // 8004F780
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F784
  c->r[0]=0u+0x00000001u; // 8004F788
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F78C
  c->r[31]=c->r[3]|c->r[3]; // 8004F790
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004F794
  c->r[3]=c->r[3]+0x000002A4u; // 8004F798
  c->lr=0x8004F7A0u; f_80212C88(c); // 8004F79C
  c->r[4]=c->r[31]|c->r[31]; // 8004F7A0
  c->r[3]=c->r[31]+0x000002A4u; // 8004F7A4
  c->lr=0x8004F7ACu; f_80071DBC(c); // 8004F7A8
  c->r[4]=0u+0x80050000u; // 8004F7AC
  c->r[3]=c->r[31]+0x00000218u; // 8004F7B0
  c->r[4]=c->r[4]+0x0000261Cu; // 8004F7B4
  c->r[5]=c->r[31]+0x000002A4u; // 8004F7B8
  c->lr=0x8004F7C0u; f_80071D70(c); // 8004F7BC
  cmps(c,0,(int32_t)c->r[3],0); // 8004F7C0
  if (!crb(c,2)) { goto L_8004F7E0; } // 8004F7C4
  c->r[3]=0u+0x802A0000u; // 8004F7C8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F7CC
  c->r[3]=c->r[3]+0x0000032Cu; // 8004F7D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F7D4
  c->lr=0x8004F7DCu; f_80019994(c); // 8004F7D8
  goto L_8004F81C; // 8004F7DC
L_8004F7E0:;
  c->r[5]=0u+0x802A0000u; // 8004F7E0
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004F7E4
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004F7E8
  c->r[4]=c->r[3]|c->r[3]; // 8004F7EC
  c->r[3]=c->r[5]+0x00000355u; // 8004F7F0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F7F4
  c->lr=0x8004F7FCu; f_80019994(c); // 8004F7F8
  c->r[3]=c->r[31]+0x00000218u; // 8004F7FC
  c->lr=0x8004F804u; f_80071D74(c); // 8004F800
  c->r[3]=c->r[31]+0x00000218u; // 8004F804
  c->r[4]=0u+0x00000000u; // 8004F808
  c->r[5]=0u+0x0000008Cu; // 8004F80C
  c->lr=0x8004F814u; f_80212C88(c); // 8004F810
  c->r[0]=0u+0x0000001Cu; // 8004F814
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F818
L_8004F81C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F81C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F820
  c->lr=c->r[0]; // 8004F824
  c->r[1]=c->r[1]+0x00000010u; // 8004F828
  return; // 8004F82C
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,8>FPQ24gbla12SaveDataUtil
void f_8004F830(Ctx* __restrict c) {
  trace_call(0x8004F830u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F830
  c->r[0]=c->lr; // 8004F834
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F838
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F83C
  c->r[31]=c->r[3]|c->r[3]; // 8004F840
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004F844
  cmps(c,0,(int32_t)c->r[0],0); // 8004F848
  if (!crb(c,2)) { goto L_8004F8D8; } // 8004F84C
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004F850
  cmps(c,0,(int32_t)c->r[4],0); // 8004F854
  if (!crb(c,2)) { goto L_8004F8A4; } // 8004F858
  c->r[3]=0u+0x802A0000u; // 8004F85C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F860
  c->r[3]=c->r[3]+0x00000388u; // 8004F864
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F868
  c->lr=0x8004F870u; f_80019994(c); // 8004F86C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004F870
  c->r[3]=0u+0x8D3E0000u; // 8004F874
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004F878
  c->r[4]=c->r[4]+0x00000001u; // 8004F87C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004F880
  c->r[0]=c->r[0]+c->r[4]; // 8004F884
  c->r[0]=sraw(c,c->r[0],4); // 8004F888
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004F88C
  c->r[0]=c->r[0]+c->r[3]; // 8004F890
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004F894
  c->r[0]=c->r[4]-c->r[0]; // 8004F898
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F89C
  goto L_8004F8D8; // 8004F8A0
L_8004F8A4:;
  c->r[3]=0u+0x802A0000u; // 8004F8A4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004F8A8
  c->r[3]=c->r[3]+0x000003AEu; // 8004F8AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004F8B0
  c->lr=0x8004F8B8u; f_80019994(c); // 8004F8B4
  c->r[3]=c->r[31]+0x00000218u; // 8004F8B8
  c->lr=0x8004F8C0u; f_80071D74(c); // 8004F8BC
  c->r[3]=c->r[31]+0x00000218u; // 8004F8C0
  c->r[4]=0u+0x00000000u; // 8004F8C4
  c->r[5]=0u+0x0000008Cu; // 8004F8C8
  c->lr=0x8004F8D0u; f_80212C88(c); // 8004F8CC
  c->r[0]=0u+0x0000001Cu; // 8004F8D0
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F8D4
L_8004F8D8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004F8D8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004F8DC
  c->lr=c->r[0]; // 8004F8E0
  c->r[1]=c->r[1]+0x00000010u; // 8004F8E4
  return; // 8004F8E8
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,8>FPQ24gbla12SaveDataUtil
void f_8004F8EC(Ctx* __restrict c) {
  trace_call(0x8004F8ECu);
  return; // 8004F8EC
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,8>FPQ24gbla12SaveDataUtil
void f_8004F8F0(Ctx* __restrict c) {
  trace_call(0x8004F8F0u);
  c->r[4]=0u+0x00000000u; // 8004F8F0
  c->r[5]=0u+0x0000008Cu; // 8004F8F4
  c->r[3]=c->r[3]+0x00000218u; // 8004F8F8
  f_80212C88(c); return; // 8004F8FC
}

// init__Q25Alice32Carrier<Q24gbla12SaveDataUtil,9>FPQ24gbla12SaveDataUtil
void f_8004F900(Ctx* __restrict c) {
  trace_call(0x8004F900u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F900
  c->r[0]=c->lr; // 8004F904
  W32(c->r[1]+0x00000024u,c->r[0]); // 8004F908
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004F90C
  c->r[31]=0u+0x802A0000u; // 8004F910
  c->r[31]=c->r[31]+0xFFFF93F0u; // 8004F914
  W32(c->r[1]+0x00000018u,c->r[30]); // 8004F918
  c->r[30]=c->r[3]|c->r[3]; // 8004F91C
  c->r[3]=c->r[1]+0x00000008u; // 8004F920
  c->r[4]=c->r[31]+0x000000CAu; // 8004F924
  c->lr=0x8004F92Cu; f_80213B34(c); // 8004F928
  c->r[3]=c->r[30]+0x000003F4u; // 8004F92C
  c->r[4]=c->r[1]+0x00000008u; // 8004F930
  c->lr=0x8004F938u; f_80214BCC(c); // 8004F934
  c->r[3]=c->r[1]+0x00000008u; // 8004F938
  c->r[4]=0u+0xFFFFFFFFu; // 8004F93C
  c->lr=0x8004F944u; f_8021467C(c); // 8004F940
  c->r[3]=c->r[1]+0x0000000Cu; // 8004F944
  c->r[4]=c->r[31]+0x000000DDu; // 8004F948
  c->lr=0x8004F950u; f_80213B34(c); // 8004F94C
  c->r[3]=c->r[30]+0x000003F8u; // 8004F950
  c->r[4]=c->r[1]+0x0000000Cu; // 8004F954
  c->lr=0x8004F95Cu; f_80214BCC(c); // 8004F958
  c->r[3]=c->r[1]+0x0000000Cu; // 8004F95C
  c->r[4]=0u+0xFFFFFFFFu; // 8004F960
  c->lr=0x8004F968u; f_8021467C(c); // 8004F964
  c->r[0]=R32(c->r[1]+0x00000024u); // 8004F968
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8004F96C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8004F970
  c->lr=c->r[0]; // 8004F974
  c->r[1]=c->r[1]+0x00000020u; // 8004F978
  return; // 8004F97C
}

// calc__Q25Alice32Carrier<Q24gbla12SaveDataUtil,9>FPQ24gbla12SaveDataUtil
void f_8004F980(Ctx* __restrict c) {
  trace_call(0x8004F980u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004F980
  c->r[0]=c->lr; // 8004F984
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004F988
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004F98C
  c->r[31]=c->r[3]|c->r[3]; // 8004F990
  W32(c->r[1]+0x00000008u,c->r[30]); // 8004F994
  c->r[30]=0u+0x00000000u; // 8004F998
  c->lr=0x8004F9A0u; f_80071EC0(c); // 8004F99C
  cmps(c,0,(int32_t)c->r[3],0); // 8004F9A0
  if (!crb(c,2)) { goto L_8004F9CC; } // 8004F9A4
  c->lr=0x8004F9ACu; f_80071E78(c); // 8004F9A8
  cmps(c,0,(int32_t)c->r[3],0); // 8004F9AC
  if (!crb(c,2)) { goto L_8004F9CC; } // 8004F9B0
  c->lr=0x8004F9B8u; f_80071E80(c); // 8004F9B4
  cmps(c,0,(int32_t)c->r[3],0); // 8004F9B8
  if (!crb(c,2)) { goto L_8004F9CC; } // 8004F9BC
  c->lr=0x8004F9C4u; f_80071EB8(c); // 8004F9C0
  cmps(c,0,(int32_t)c->r[3],0); // 8004F9C4
  if (crb(c,2)) { goto L_8004F9D0; } // 8004F9C8
L_8004F9CC:;
  c->r[30]=0u+0x00000001u; // 8004F9CC
L_8004F9D0:;
  c->lr=0x8004F9D4u; f_800768A8(c); // 8004F9D0
  c->r[3]=R32(c->r[3]+0x00000000u); // 8004F9D4
  cmps(c,0,(int32_t)c->r[30],0); // 8004F9D8
  c->r[0]=0u-c->r[3]; // 8004F9DC
  c->r[0]=c->r[0]|c->r[3]; // 8004F9E0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8004F9E4
  if (crb(c,2)) { goto L_8004FA00; } // 8004F9E8
  cmps(c,0,(int32_t)c->r[0],0); // 8004F9EC
  if (crb(c,2)) { goto L_8004FA00; } // 8004F9F0
  c->r[0]=0u+0x0000001Cu; // 8004F9F4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004F9F8
  goto L_8004FA50; // 8004F9FC
L_8004FA00:;
  c->r[3]=c->r[31]+0x000003F4u; // 8004FA00
  c->lr=0x8004FA08u; f_80214280(c); // 8004FA04
  cmps(c,0,(int32_t)c->r[3],0); // 8004FA08
  if (crb(c,2)) { goto L_8004FA50; } // 8004FA0C
  c->r[3]=c->r[31]+0x000003F8u; // 8004FA10
  c->lr=0x8004FA18u; f_80214280(c); // 8004FA14
  cmps(c,0,(int32_t)c->r[3],0); // 8004FA18
  if (crb(c,2)) { goto L_8004FA50; } // 8004FA1C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004FA20
  c->r[3]=0u+0x8D3E0000u; // 8004FA24
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004FA28
  c->r[4]=c->r[4]+0x00000001u; // 8004FA2C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004FA30
  c->r[0]=c->r[0]+c->r[4]; // 8004FA34
  c->r[0]=sraw(c,c->r[0],4); // 8004FA38
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004FA3C
  c->r[0]=c->r[0]+c->r[3]; // 8004FA40
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004FA44
  c->r[0]=c->r[4]-c->r[0]; // 8004FA48
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FA4C
L_8004FA50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FA50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FA54
  c->r[30]=R32(c->r[1]+0x00000008u); // 8004FA58
  c->lr=c->r[0]; // 8004FA5C
  c->r[1]=c->r[1]+0x00000010u; // 8004FA60
  return; // 8004FA64
}

// draw__Q25Alice32Carrier<Q24gbla12SaveDataUtil,9>FPQ24gbla12SaveDataUtil
void f_8004FA68(Ctx* __restrict c) {
  trace_call(0x8004FA68u);
  return; // 8004FA68
}

// term__Q25Alice32Carrier<Q24gbla12SaveDataUtil,9>FPQ24gbla12SaveDataUtil
void f_8004FA6C(Ctx* __restrict c) {
  trace_call(0x8004FA6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FA6C
  c->r[0]=c->lr; // 8004FA70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FA74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FA78
  c->r[31]=c->r[3]|c->r[3]; // 8004FA7C
  c->r[3]=c->r[3]+0x000003F4u; // 8004FA80
  c->lr=0x8004FA88u; f_80214280(c); // 8004FA84
  cmps(c,0,(int32_t)c->r[3],0); // 8004FA88
  if (crb(c,2)) { goto L_8004FAA0; } // 8004FA8C
  c->r[3]=c->r[31]+0x000003F8u; // 8004FA90
  c->lr=0x8004FA98u; f_80214280(c); // 8004FA94
  cmps(c,0,(int32_t)c->r[3],0); // 8004FA98
  if (!crb(c,2)) { goto L_8004FAA8; } // 8004FA9C
L_8004FAA0:;
  c->r[0]=0u+0x0000001Cu; // 8004FAA0
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FAA4
L_8004FAA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FAA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FAAC
  c->lr=c->r[0]; // 8004FAB0
  c->r[1]=c->r[1]+0x00000010u; // 8004FAB4
  return; // 8004FAB8
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,10>FPQ24gbla12SaveDataUtil
void f_8004FABC(Ctx* __restrict c) {
  trace_call(0x8004FABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FABC
  c->r[0]=c->lr; // 8004FAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FAC4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FAC8
  c->r[31]=c->r[3]|c->r[3]; // 8004FACC
  c->lr=0x8004FAD4u; f_80051B14(c); // 8004FAD0
  cmps(c,0,(int32_t)c->r[3],0); // 8004FAD4
  if (!crb(c,2)) { goto L_8004FB10; } // 8004FAD8
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004FADC
  c->r[3]=0u+0x8D3E0000u; // 8004FAE0
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004FAE4
  c->r[4]=c->r[4]+0x00000001u; // 8004FAE8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004FAEC
  c->r[0]=c->r[0]+c->r[4]; // 8004FAF0
  c->r[0]=sraw(c,c->r[0],4); // 8004FAF4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004FAF8
  c->r[0]=c->r[0]+c->r[3]; // 8004FAFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004FB00
  c->r[0]=c->r[4]-c->r[0]; // 8004FB04
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FB08
  goto L_8004FB1C; // 8004FB0C
L_8004FB10:;
  c->r[0]=0u+0x0000001Cu; // 8004FB10
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004FB14
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FB18
L_8004FB1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FB1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FB20
  c->lr=c->r[0]; // 8004FB24
  c->r[1]=c->r[1]+0x00000010u; // 8004FB28
  return; // 8004FB2C
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,10>FPQ24gbla12SaveDataUtil
void f_8004FB30(Ctx* __restrict c) {
  trace_call(0x8004FB30u);
  return; // 8004FB30
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,10>FPQ24gbla12SaveDataUtil
void f_8004FB34(Ctx* __restrict c) {
  trace_call(0x8004FB34u);
  return; // 8004FB34
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,10>FPQ24gbla12SaveDataUtil
void f_8004FB38(Ctx* __restrict c) {
  trace_call(0x8004FB38u);
  return; // 8004FB38
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,11>FPQ24gbla12SaveDataUtil
void f_8004FB3C(Ctx* __restrict c) {
  trace_call(0x8004FB3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FB3C
  c->r[0]=c->lr; // 8004FB40
  W32(c->r[1]+0x00000094u,c->r[0]); // 8004FB44
  W32(c->r[1]+0x0000008Cu,c->r[31]); // 8004FB48
  c->r[31]=0u+0x00000000u; // 8004FB4C
  W32(c->r[1]+0x00000088u,c->r[30]); // 8004FB50
  c->r[30]=c->r[3]|c->r[3]; // 8004FB54
  c->r[3]=c->r[1]+0x00000048u; // 8004FB58
  W32(c->r[1]+0x00000048u,c->r[31]); // 8004FB5C
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8004FB60
  W32(c->r[1]+0x00000050u,c->r[31]); // 8004FB64
  W32(c->r[1]+0x00000054u,c->r[31]); // 8004FB68
  W32(c->r[1]+0x00000058u,c->r[31]); // 8004FB6C
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8004FB70
  W32(c->r[1]+0x00000060u,c->r[31]); // 8004FB74
  W32(c->r[1]+0x00000064u,c->r[31]); // 8004FB78
  W32(c->r[1]+0x00000068u,c->r[31]); // 8004FB7C
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8004FB80
  W32(c->r[1]+0x00000070u,c->r[31]); // 8004FB84
  W32(c->r[1]+0x00000074u,c->r[31]); // 8004FB88
  W32(c->r[1]+0x00000078u,c->r[31]); // 8004FB8C
  W32(c->r[1]+0x0000007Cu,c->r[31]); // 8004FB90
  W32(c->r[1]+0x00000080u,c->r[31]); // 8004FB94
  W32(c->r[1]+0x00000084u,c->r[31]); // 8004FB98
  c->lr=0x8004FBA0u; f_80071D88(c); // 8004FB9C
  W32(c->r[1]+0x00000008u,c->r[31]); // 8004FBA0
  c->r[3]=c->r[1]+0x00000008u; // 8004FBA4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FBA8
  W32(c->r[1]+0x00000010u,c->r[31]); // 8004FBAC
  W32(c->r[1]+0x00000014u,c->r[31]); // 8004FBB0
  W32(c->r[1]+0x00000018u,c->r[31]); // 8004FBB4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8004FBB8
  W32(c->r[1]+0x00000020u,c->r[31]); // 8004FBBC
  W32(c->r[1]+0x00000024u,c->r[31]); // 8004FBC0
  W32(c->r[1]+0x00000028u,c->r[31]); // 8004FBC4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8004FBC8
  W32(c->r[1]+0x00000030u,c->r[31]); // 8004FBCC
  W32(c->r[1]+0x00000034u,c->r[31]); // 8004FBD0
  W32(c->r[1]+0x00000038u,c->r[31]); // 8004FBD4
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8004FBD8
  W32(c->r[1]+0x00000040u,c->r[31]); // 8004FBDC
  W32(c->r[1]+0x00000044u,c->r[31]); // 8004FBE0
  c->lr=0x8004FBE8u; f_80071D8C(c); // 8004FBE4
  c->r[3]=c->r[1]+0x00000008u; // 8004FBE8
  c->r[4]=0u+0x802A0000u; // 8004FBEC
  c->r[6]=R32(c->r[13]+0xFFFF815Cu); // 8004FBF0
  c->r[5]=c->r[3]|c->r[3]; // 8004FBF4
  c->r[4]=c->r[4]+0xFFFF93F0u; // 8004FBF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FBFC
  c->lr=0x8004FC04u; f_800B5FD4(c); // 8004FC00
  c->r[3]=c->r[1]+0x00000008u; // 8004FC04
  c->r[4]=c->r[1]+0x00000048u; // 8004FC08
  c->lr=0x8004FC10u; f_80071DD4(c); // 8004FC0C
  cmps(c,0,(int32_t)c->r[3],0); // 8004FC10
  if (!crb(c,2)) { goto L_8004FC24; } // 8004FC14
  c->r[0]=0u+0x0000001Bu; // 8004FC18
  W32(c->r[30]+0x000001D8u,c->r[0]); // 8004FC1C
  goto L_8004FC30; // 8004FC20
L_8004FC24:;
  c->r[0]=0u+0x0000001Cu; // 8004FC24
  W32(c->r[30]+0x000003E4u,c->r[3]); // 8004FC28
  W32(c->r[30]+0x000001D8u,c->r[0]); // 8004FC2C
L_8004FC30:;
  c->r[0]=R32(c->r[1]+0x00000094u); // 8004FC30
  c->r[31]=R32(c->r[1]+0x0000008Cu); // 8004FC34
  c->r[30]=R32(c->r[1]+0x00000088u); // 8004FC38
  c->lr=c->r[0]; // 8004FC3C
  c->r[1]=c->r[1]+0x00000090u; // 8004FC40
  return; // 8004FC44
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,11>FPQ24gbla12SaveDataUtil
void f_8004FC48(Ctx* __restrict c) {
  trace_call(0x8004FC48u);
  return; // 8004FC48
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,11>FPQ24gbla12SaveDataUtil
void f_8004FC4C(Ctx* __restrict c) {
  trace_call(0x8004FC4Cu);
  return; // 8004FC4C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,11>FPQ24gbla12SaveDataUtil
void f_8004FC50(Ctx* __restrict c) {
  trace_call(0x8004FC50u);
  return; // 8004FC50
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,12>FPQ24gbla12SaveDataUtil
void f_8004FC54(Ctx* __restrict c) {
  trace_call(0x8004FC54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FC54
  c->r[0]=c->lr; // 8004FC58
  c->r[4]=0u+0x00000000u; // 8004FC5C
  c->r[5]=0u+0x000000BCu; // 8004FC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FC64
  c->r[0]=0u+0x00000001u; // 8004FC68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FC6C
  c->r[31]=c->r[3]|c->r[3]; // 8004FC70
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004FC74
  c->r[3]=c->r[3]+0x000002A4u; // 8004FC78
  c->lr=0x8004FC80u; f_80212C88(c); // 8004FC7C
  c->r[4]=c->r[31]|c->r[31]; // 8004FC80
  c->r[3]=c->r[31]+0x000002A4u; // 8004FC84
  c->lr=0x8004FC8Cu; f_80071DBC(c); // 8004FC88
  c->r[4]=0u+0x80050000u; // 8004FC8C
  c->r[3]=c->r[31]+0x000003A0u; // 8004FC90
  c->r[4]=c->r[4]+0x0000261Cu; // 8004FC94
  c->r[5]=c->r[31]+0x000002A4u; // 8004FC98
  c->lr=0x8004FCA0u; f_80071D64(c); // 8004FC9C
  cmps(c,0,(int32_t)c->r[3],0); // 8004FCA0
  if (!crb(c,2)) { goto L_8004FCC0; } // 8004FCA4
  c->r[3]=0u+0x802A0000u; // 8004FCA8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FCAC
  c->r[3]=c->r[3]+0x000003D8u; // 8004FCB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FCB4
  c->lr=0x8004FCBCu; f_80019994(c); // 8004FCB8
  goto L_8004FCE4; // 8004FCBC
L_8004FCC0:;
  c->r[5]=0u+0x802A0000u; // 8004FCC0
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004FCC4
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004FCC8
  c->r[4]=c->r[3]|c->r[3]; // 8004FCCC
  c->r[3]=c->r[5]+0x000003F5u; // 8004FCD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FCD4
  c->lr=0x8004FCDCu; f_80019994(c); // 8004FCD8
  c->r[0]=0u+0x0000001Cu; // 8004FCDC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FCE0
L_8004FCE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FCE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FCE8
  c->lr=c->r[0]; // 8004FCEC
  c->r[1]=c->r[1]+0x00000010u; // 8004FCF0
  return; // 8004FCF4
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,12>FPQ24gbla12SaveDataUtil
void f_8004FCF8(Ctx* __restrict c) {
  trace_call(0x8004FCF8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FCF8
  c->r[0]=c->lr; // 8004FCFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FD00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FD04
  c->r[31]=c->r[3]|c->r[3]; // 8004FD08
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004FD0C
  cmps(c,0,(int32_t)c->r[0],0); // 8004FD10
  if (!crb(c,2)) { goto L_8004FDA8; } // 8004FD14
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004FD18
  cmps(c,0,(int32_t)c->r[4],-12); // 8004FD1C
  if (crb(c,2)) { goto L_8004FD30; } // 8004FD20
  cmps(c,0,(int32_t)c->r[4],0); // 8004FD24
  if (crb(c,2)) { goto L_8004FD44; } // 8004FD28
  goto L_8004FD8C; // 8004FD2C
L_8004FD30:;
  c->r[3]=0u+0x802A0000u; // 8004FD30
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FD34
  c->r[3]=c->r[3]+0x0000041Cu; // 8004FD38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FD3C
  c->lr=0x8004FD44u; f_80019994(c); // 8004FD40
L_8004FD44:;
  c->r[3]=0u+0x802A0000u; // 8004FD44
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FD48
  c->r[3]=c->r[3]+0x0000043Au; // 8004FD4C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FD50
  c->lr=0x8004FD58u; f_80019994(c); // 8004FD54
  c->r[4]=R32(c->r[31]+0x000001D8u); // 8004FD58
  c->r[3]=0u+0x8D3E0000u; // 8004FD5C
  c->r[0]=c->r[3]+0xFFFFCB09u; // 8004FD60
  c->r[4]=c->r[4]+0x00000001u; // 8004FD64
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8004FD68
  c->r[0]=c->r[0]+c->r[4]; // 8004FD6C
  c->r[0]=sraw(c,c->r[0],4); // 8004FD70
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8004FD74
  c->r[0]=c->r[0]+c->r[3]; // 8004FD78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8004FD7C
  c->r[0]=c->r[4]-c->r[0]; // 8004FD80
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FD84
  goto L_8004FDA8; // 8004FD88
L_8004FD8C:;
  c->r[3]=0u+0x802A0000u; // 8004FD8C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FD90
  c->r[3]=c->r[3]+0x00000454u; // 8004FD94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FD98
  c->lr=0x8004FDA0u; f_80019994(c); // 8004FD9C
  c->r[0]=0u+0x0000001Cu; // 8004FDA0
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FDA4
L_8004FDA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FDA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FDAC
  c->lr=c->r[0]; // 8004FDB0
  c->r[1]=c->r[1]+0x00000010u; // 8004FDB4
  return; // 8004FDB8
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,12>FPQ24gbla12SaveDataUtil
void f_8004FDBC(Ctx* __restrict c) {
  trace_call(0x8004FDBCu);
  return; // 8004FDBC
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,12>FPQ24gbla12SaveDataUtil
void f_8004FDC0(Ctx* __restrict c) {
  trace_call(0x8004FDC0u);
  return; // 8004FDC0
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,13>FPQ24gbla12SaveDataUtil
void f_8004FDC4(Ctx* __restrict c) {
  trace_call(0x8004FDC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FDC4
  c->r[0]=c->lr; // 8004FDC8
  c->r[4]=0u+0x00000000u; // 8004FDCC
  c->r[5]=0u+0x000000BCu; // 8004FDD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FDD4
  c->r[0]=0u+0x00000001u; // 8004FDD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FDDC
  c->r[31]=c->r[3]|c->r[3]; // 8004FDE0
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004FDE4
  c->r[3]=c->r[3]+0x000002A4u; // 8004FDE8
  c->lr=0x8004FDF0u; f_80212C88(c); // 8004FDEC
  c->r[4]=c->r[31]|c->r[31]; // 8004FDF0
  c->r[3]=c->r[31]+0x000002A4u; // 8004FDF4
  c->lr=0x8004FDFCu; f_80071DBC(c); // 8004FDF8
  c->r[4]=0u+0x80050000u; // 8004FDFC
  c->r[3]=c->r[31]+0x00000360u; // 8004FE00
  c->r[4]=c->r[4]+0x0000261Cu; // 8004FE04
  c->r[5]=c->r[31]+0x000002A4u; // 8004FE08
  c->lr=0x8004FE10u; f_80071D64(c); // 8004FE0C
  cmps(c,0,(int32_t)c->r[3],0); // 8004FE10
  if (!crb(c,2)) { goto L_8004FE30; } // 8004FE14
  c->r[3]=0u+0x802A0000u; // 8004FE18
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FE1C
  c->r[3]=c->r[3]+0x000003D8u; // 8004FE20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FE24
  c->lr=0x8004FE2Cu; f_80019994(c); // 8004FE28
  goto L_8004FE54; // 8004FE2C
L_8004FE30:;
  c->r[5]=0u+0x802A0000u; // 8004FE30
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004FE34
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004FE38
  c->r[4]=c->r[3]|c->r[3]; // 8004FE3C
  c->r[3]=c->r[5]+0x000003F5u; // 8004FE40
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FE44
  c->lr=0x8004FE4Cu; f_80019994(c); // 8004FE48
  c->r[0]=0u+0x0000001Cu; // 8004FE4C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FE50
L_8004FE54:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FE54
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FE58
  c->lr=c->r[0]; // 8004FE5C
  c->r[1]=c->r[1]+0x00000010u; // 8004FE60
  return; // 8004FE64
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,13>FPQ24gbla12SaveDataUtil
void f_8004FE68(Ctx* __restrict c) {
  trace_call(0x8004FE68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FE68
  c->r[0]=c->lr; // 8004FE6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FE70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FE74
  c->r[31]=c->r[3]|c->r[3]; // 8004FE78
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004FE7C
  cmps(c,0,(int32_t)c->r[0],0); // 8004FE80
  if (!crb(c,2)) { goto L_8004FEF0; } // 8004FE84
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004FE88
  cmps(c,0,(int32_t)c->r[4],-12); // 8004FE8C
  if (crb(c,2)) { goto L_8004FEA0; } // 8004FE90
  cmps(c,0,(int32_t)c->r[4],0); // 8004FE94
  if (crb(c,2)) { goto L_8004FEB4; } // 8004FE98
  goto L_8004FED4; // 8004FE9C
L_8004FEA0:;
  c->r[3]=0u+0x802A0000u; // 8004FEA0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FEA4
  c->r[3]=c->r[3]+0x0000041Cu; // 8004FEA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FEAC
  c->lr=0x8004FEB4u; f_80019994(c); // 8004FEB0
L_8004FEB4:;
  c->r[3]=0u+0x802A0000u; // 8004FEB4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FEB8
  c->r[3]=c->r[3]+0x0000043Au; // 8004FEBC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FEC0
  c->lr=0x8004FEC8u; f_80019994(c); // 8004FEC4
  c->r[0]=0u+0x0000001Bu; // 8004FEC8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FECC
  goto L_8004FEF0; // 8004FED0
L_8004FED4:;
  c->r[3]=0u+0x802A0000u; // 8004FED4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FED8
  c->r[3]=c->r[3]+0x00000454u; // 8004FEDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FEE0
  c->lr=0x8004FEE8u; f_80019994(c); // 8004FEE4
  c->r[0]=0u+0x0000001Cu; // 8004FEE8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FEEC
L_8004FEF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FEF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FEF4
  c->lr=c->r[0]; // 8004FEF8
  c->r[1]=c->r[1]+0x00000010u; // 8004FEFC
  return; // 8004FF00
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,13>FPQ24gbla12SaveDataUtil
void f_8004FF04(Ctx* __restrict c) {
  trace_call(0x8004FF04u);
  return; // 8004FF04
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,13>FPQ24gbla12SaveDataUtil
void f_8004FF08(Ctx* __restrict c) {
  trace_call(0x8004FF08u);
  return; // 8004FF08
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,14>FPQ24gbla12SaveDataUtil
void f_8004FF0C(Ctx* __restrict c) {
  trace_call(0x8004FF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FF0C
  c->r[0]=c->lr; // 8004FF10
  c->r[4]=0u+0x00000000u; // 8004FF14
  c->r[5]=0u+0x000000BCu; // 8004FF18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FF1C
  c->r[0]=0u+0x00000001u; // 8004FF20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FF24
  c->r[31]=c->r[3]|c->r[3]; // 8004FF28
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8004FF2C
  c->r[3]=c->r[3]+0x000002A4u; // 8004FF30
  c->lr=0x8004FF38u; f_80212C88(c); // 8004FF34
  c->r[4]=c->r[31]|c->r[31]; // 8004FF38
  c->r[3]=c->r[31]+0x000002A4u; // 8004FF3C
  c->lr=0x8004FF44u; f_80071DBC(c); // 8004FF40
  c->r[6]=0u+0x80050000u; // 8004FF44
  c->r[3]=c->r[31]+0x00000360u; // 8004FF48
  c->r[4]=c->r[31]+0x00000218u; // 8004FF4C
  c->r[7]=c->r[31]+0x000002A4u; // 8004FF50
  c->r[6]=c->r[6]+0x0000261Cu; // 8004FF54
  c->r[5]=0u+0x00000001u; // 8004FF58
  c->lr=0x8004FF60u; f_80071D68(c); // 8004FF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8004FF60
  if (!crb(c,2)) { goto L_8004FF80; } // 8004FF64
  c->r[3]=0u+0x802A0000u; // 8004FF68
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8004FF6C
  c->r[3]=c->r[3]+0x00000472u; // 8004FF70
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FF74
  c->lr=0x8004FF7Cu; f_80019994(c); // 8004FF78
  goto L_8004FFBC; // 8004FF7C
L_8004FF80:;
  c->r[5]=0u+0x802A0000u; // 8004FF80
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8004FF84
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8004FF88
  c->r[4]=c->r[3]|c->r[3]; // 8004FF8C
  c->r[3]=c->r[5]+0x00000492u; // 8004FF90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8004FF94
  c->lr=0x8004FF9Cu; f_80019994(c); // 8004FF98
  c->r[3]=c->r[31]+0x00000218u; // 8004FF9C
  c->lr=0x8004FFA4u; f_80071D74(c); // 8004FFA0
  c->r[3]=c->r[31]+0x00000218u; // 8004FFA4
  c->r[4]=0u+0x00000000u; // 8004FFA8
  c->r[5]=0u+0x0000008Cu; // 8004FFAC
  c->lr=0x8004FFB4u; f_80212C88(c); // 8004FFB0
  c->r[0]=0u+0x0000001Cu; // 8004FFB4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8004FFB8
L_8004FFBC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8004FFBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8004FFC0
  c->lr=c->r[0]; // 8004FFC4
  c->r[1]=c->r[1]+0x00000010u; // 8004FFC8
  return; // 8004FFCC
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,14>FPQ24gbla12SaveDataUtil
void f_8004FFD0(Ctx* __restrict c) {
  trace_call(0x8004FFD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8004FFD0
  c->r[0]=c->lr; // 8004FFD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8004FFD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8004FFDC
  c->r[31]=c->r[3]|c->r[3]; // 8004FFE0
  c->r[0]=R8(c->r[3]+0x000003E0u); // 8004FFE4
  cmps(c,0,(int32_t)c->r[0],0); // 8004FFE8
  if (!crb(c,2)) { goto L_80050078; } // 8004FFEC
  c->r[4]=R32(c->r[3]+0x000003E4u); // 8004FFF0
  cmps(c,0,(int32_t)c->r[4],0); // 8004FFF4
  if (!crb(c,2)) { goto L_80050044; } // 8004FFF8
  c->r[3]=0u+0x802A0000u; // 8004FFFC
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050000
  c->r[3]=c->r[3]+0x000004BCu; // 80050004
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050008
  c->lr=0x80050010u; f_80019994(c); // 8005000C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80050010
  c->r[3]=0u+0x8D3E0000u; // 80050014
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050018
  c->r[4]=c->r[4]+0x00000001u; // 8005001C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050020
  c->r[0]=c->r[0]+c->r[4]; // 80050024
  c->r[0]=sraw(c,c->r[0],4); // 80050028
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005002C
  c->r[0]=c->r[0]+c->r[3]; // 80050030
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80050034
  c->r[0]=c->r[4]-c->r[0]; // 80050038
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005003C
  goto L_80050078; // 80050040
L_80050044:;
  c->r[3]=0u+0x802A0000u; // 80050044
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050048
  c->r[3]=c->r[3]+0x000004D9u; // 8005004C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050050
  c->lr=0x80050058u; f_80019994(c); // 80050054
  c->r[3]=c->r[31]+0x00000218u; // 80050058
  c->lr=0x80050060u; f_80071D74(c); // 8005005C
  c->r[3]=c->r[31]+0x00000218u; // 80050060
  c->r[4]=0u+0x00000000u; // 80050064
  c->r[5]=0u+0x0000008Cu; // 80050068
  c->lr=0x80050070u; f_80212C88(c); // 8005006C
  c->r[0]=0u+0x0000001Cu; // 80050070
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050074
L_80050078:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050078
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005007C
  c->lr=c->r[0]; // 80050080
  c->r[1]=c->r[1]+0x00000010u; // 80050084
  return; // 80050088
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,14>FPQ24gbla12SaveDataUtil
void f_8005008C(Ctx* __restrict c) {
  trace_call(0x8005008Cu);
  return; // 8005008C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,14>FPQ24gbla12SaveDataUtil
void f_80050090(Ctx* __restrict c) {
  trace_call(0x80050090u);
  return; // 80050090
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,15>FPQ24gbla12SaveDataUtil
void f_80050094(Ctx* __restrict c) {
  trace_call(0x80050094u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050094
  c->r[0]=c->lr; // 80050098
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005009C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800500A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800500A4
  c->r[30]=c->r[3]|c->r[3]; // 800500A8
  c->r[0]=R32(c->r[3]+0x00000200u); // 800500AC
  cmps(c,0,(int32_t)c->r[0],0); // 800500B0
  if (!crb(c,2)) { goto L_800500EC; } // 800500B4
  c->r[5]=R32(c->r[3]+0x000001D8u); // 800500B8
  c->r[4]=0u+0x8D3E0000u; // 800500BC
  c->r[0]=c->r[4]+0xFFFFCB09u; // 800500C0
  c->r[5]=c->r[5]+0x00000001u; // 800500C4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 800500C8
  c->r[0]=c->r[0]+c->r[5]; // 800500CC
  c->r[0]=sraw(c,c->r[0],4); // 800500D0
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800500D4
  c->r[0]=c->r[0]+c->r[4]; // 800500D8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 800500DC
  c->r[0]=c->r[5]-c->r[0]; // 800500E0
  W32(c->r[3]+0x000001D8u,c->r[0]); // 800500E4
  goto L_8005018C; // 800500E8
L_800500EC:;
  c->r[31]=0u+0x802A0000u; // 800500EC
  c->r[31]=c->r[31]+0xFFFF93F0u; // 800500F0
  c->r[3]=c->r[31]+0x000004F5u; // 800500F4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800500F8
  c->lr=0x80050100u; f_80019994(c); // 800500FC
  c->r[0]=0u+0x00000001u; // 80050100
  W8(c->r[30]+0x000003E0u,c->r[0]); // 80050104
  c->r[3]=c->r[30]+0x000002A4u; // 80050108
  c->r[4]=0u+0x00000000u; // 8005010C
  c->r[5]=0u+0x000000BCu; // 80050110
  c->lr=0x80050118u; f_80212C88(c); // 80050114
  c->r[4]=c->r[30]|c->r[30]; // 80050118
  c->r[3]=c->r[30]+0x000002A4u; // 8005011C
  c->lr=0x80050124u; f_80071DBC(c); // 80050120
  c->r[6]=0u+0x80050000u; // 80050124
  c->r[4]=R32(c->r[30]+0x00000200u); // 80050128
  c->r[3]=c->r[30]+0x00000218u; // 8005012C
  c->r[7]=c->r[30]+0x000002A4u; // 80050130
  c->r[6]=c->r[6]+0x0000261Cu; // 80050134
  c->r[5]=0u+0x00000000u; // 80050138
  c->lr=0x80050140u; f_80071D80(c); // 8005013C
  cmps(c,0,(int32_t)c->r[3],0); // 80050140
  if (!crb(c,2)) { goto L_80050158; } // 80050144
  c->r[3]=c->r[31]+0x00000512u; // 80050148
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005014C
  c->lr=0x80050154u; f_80019994(c); // 80050150
  goto L_8005018C; // 80050154
L_80050158:;
  W32(c->r[30]+0x000003E4u,c->r[3]); // 80050158
  c->r[4]=c->r[3]|c->r[3]; // 8005015C
  c->r[3]=c->r[31]+0x00000532u; // 80050160
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050164
  c->lr=0x8005016Cu; f_80019994(c); // 80050168
  c->r[3]=c->r[30]+0x00000218u; // 8005016C
  c->lr=0x80050174u; f_80071D74(c); // 80050170
  c->r[3]=c->r[30]+0x00000218u; // 80050174
  c->r[4]=0u+0x00000000u; // 80050178
  c->r[5]=0u+0x0000008Cu; // 8005017C
  c->lr=0x80050184u; f_80212C88(c); // 80050180
  c->r[0]=0u+0x0000001Cu; // 80050184
  W32(c->r[30]+0x000001D8u,c->r[0]); // 80050188
L_8005018C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005018C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050190
  c->r[30]=R32(c->r[1]+0x00000008u); // 80050194
  c->lr=c->r[0]; // 80050198
  c->r[1]=c->r[1]+0x00000010u; // 8005019C
  return; // 800501A0
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,15>FPQ24gbla12SaveDataUtil
void f_800501A4(Ctx* __restrict c) {
  trace_call(0x800501A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800501A4
  c->r[0]=c->lr; // 800501A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800501AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800501B0
  c->r[31]=c->r[3]|c->r[3]; // 800501B4
  c->r[0]=R8(c->r[3]+0x000003E0u); // 800501B8
  cmps(c,0,(int32_t)c->r[0],0); // 800501BC
  if (!crb(c,2)) { goto L_8005024C; } // 800501C0
  c->r[4]=R32(c->r[3]+0x000003E4u); // 800501C4
  cmps(c,0,(int32_t)c->r[4],0); // 800501C8
  if (!crb(c,2)) { goto L_80050218; } // 800501CC
  c->r[3]=0u+0x802A0000u; // 800501D0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800501D4
  c->r[3]=c->r[3]+0x0000055Cu; // 800501D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800501DC
  c->lr=0x800501E4u; f_80019994(c); // 800501E0
  c->r[4]=R32(c->r[31]+0x000001D8u); // 800501E4
  c->r[3]=0u+0x8D3E0000u; // 800501E8
  c->r[0]=c->r[3]+0xFFFFCB09u; // 800501EC
  c->r[4]=c->r[4]+0x00000001u; // 800501F0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 800501F4
  c->r[0]=c->r[0]+c->r[4]; // 800501F8
  c->r[0]=sraw(c,c->r[0],4); // 800501FC
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80050200
  c->r[0]=c->r[0]+c->r[3]; // 80050204
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80050208
  c->r[0]=c->r[4]-c->r[0]; // 8005020C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050210
  goto L_8005024C; // 80050214
L_80050218:;
  c->r[3]=0u+0x802A0000u; // 80050218
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8005021C
  c->r[3]=c->r[3]+0x00000579u; // 80050220
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050224
  c->lr=0x8005022Cu; f_80019994(c); // 80050228
  c->r[3]=c->r[31]+0x00000218u; // 8005022C
  c->lr=0x80050234u; f_80071D74(c); // 80050230
  c->r[3]=c->r[31]+0x00000218u; // 80050234
  c->r[4]=0u+0x00000000u; // 80050238
  c->r[5]=0u+0x0000008Cu; // 8005023C
  c->lr=0x80050244u; f_80212C88(c); // 80050240
  c->r[0]=0u+0x0000001Cu; // 80050244
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050248
L_8005024C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005024C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050250
  c->lr=c->r[0]; // 80050254
  c->r[1]=c->r[1]+0x00000010u; // 80050258
  return; // 8005025C
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,15>FPQ24gbla12SaveDataUtil
void f_80050260(Ctx* __restrict c) {
  trace_call(0x80050260u);
  return; // 80050260
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,15>FPQ24gbla12SaveDataUtil
void f_80050264(Ctx* __restrict c) {
  trace_call(0x80050264u);
  return; // 80050264
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,16>FPQ24gbla12SaveDataUtil
void f_80050268(Ctx* __restrict c) {
  trace_call(0x80050268u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050268
  c->r[0]=c->lr; // 8005026C
  c->r[4]=0u+0x00000000u; // 80050270
  c->r[5]=0u+0x000000BCu; // 80050274
  W32(c->r[1]+0x00000024u,c->r[0]); // 80050278
  c->r[0]=0u+0x00000001u; // 8005027C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80050280
  W32(c->r[1]+0x00000018u,c->r[30]); // 80050284
  W32(c->r[1]+0x00000014u,c->r[29]); // 80050288
  c->r[29]=c->r[3]|c->r[3]; // 8005028C
  W8(c->r[3]+0x000003E0u,c->r[0]); // 80050290
  c->r[3]=c->r[3]+0x000002A4u; // 80050294
  c->lr=0x8005029Cu; f_80212C88(c); // 80050298
  c->r[4]=c->r[29]|c->r[29]; // 8005029C
  c->r[3]=c->r[29]+0x000002A4u; // 800502A0
  c->lr=0x800502A8u; f_80071DBC(c); // 800502A4
  c->r[30]=R32(c->r[29]+0x00000204u); // 800502A8
  c->r[31]=0u+0x00000000u; // 800502AC
  c->r[3]=c->r[1]+0x0000000Cu; // 800502B0
  c->r[5]=0u+0x00000001u; // 800502B4
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 800502B8
  c->r[4]=R32(c->r[29]+0x000001ECu); // 800502BC
  c->lr=0x800502C4u; f_8020CBF8(c); // 800502C0
  c->r[0]=c->r[30]+0x0000001Fu; // 800502C4
  W32(c->r[29]+0x000001ECu,c->r[31]); // 800502C8
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; cr0(c,c->r[4]); // 800502CC
  W32(c->r[29]+0x000001F0u,c->r[4]); // 800502D0
  if (crb(c,2)) { goto L_80050308; } // 800502D4
  c->r[7]=0u+0x802E0000u; // 800502D8
  W8(c->r[1]+0x00000008u,c->r[31]); // 800502DC
  c->r[3]=c->r[1]+0x00000008u; // 800502E0
  c->r[5]=0u+0x00000020u; // 800502E4
  c->r[7]=c->r[7]+0x000026FCu; // 800502E8
  c->r[6]=0u+0x00000001u; // 800502EC
  c->r[8]=0u+0x00000058u; // 800502F0
  c->lr=0x800502F8u; f_8020C0D0(c); // 800502F4
  W32(c->r[29]+0x000001ECu,c->r[3]); // 800502F8
  c->r[4]=0u+0x00000000u; // 800502FC
  c->r[5]=R32(c->r[29]+0x000001F0u); // 80050300
  c->lr=0x80050308u; f_80212C88(c); // 80050304
L_80050308:;
  c->r[6]=0u+0x80050000u; // 80050308
  c->r[4]=R32(c->r[29]+0x000001ECu); // 8005030C
  c->r[5]=R32(c->r[29]+0x000001F0u); // 80050310
  c->r[3]=c->r[29]+0x00000218u; // 80050314
  c->r[6]=c->r[6]+0x0000261Cu; // 80050318
  c->r[7]=c->r[29]+0x000002A4u; // 8005031C
  c->lr=0x80050324u; f_80071D78(c); // 80050320
  cmps(c,0,(int32_t)c->r[3],0); // 80050324
  if (!crb(c,2)) { goto L_80050344; } // 80050328
  c->r[3]=0u+0x802A0000u; // 8005032C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050330
  c->r[3]=c->r[3]+0x0000059Au; // 80050334
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050338
  c->lr=0x80050340u; f_80019994(c); // 8005033C
  goto L_80050380; // 80050340
L_80050344:;
  c->r[5]=0u+0x802A0000u; // 80050344
  W32(c->r[29]+0x000003E4u,c->r[3]); // 80050348
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8005034C
  c->r[4]=c->r[3]|c->r[3]; // 80050350
  c->r[3]=c->r[5]+0x000005B5u; // 80050354
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050358
  c->lr=0x80050360u; f_80019994(c); // 8005035C
  c->r[3]=c->r[29]+0x00000218u; // 80050360
  c->lr=0x80050368u; f_80071D74(c); // 80050364
  c->r[3]=c->r[29]+0x00000218u; // 80050368
  c->r[4]=0u+0x00000000u; // 8005036C
  c->r[5]=0u+0x0000008Cu; // 80050370
  c->lr=0x80050378u; f_80212C88(c); // 80050374
  c->r[0]=0u+0x0000001Cu; // 80050378
  W32(c->r[29]+0x000001D8u,c->r[0]); // 8005037C
L_80050380:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80050380
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80050384
  c->r[30]=R32(c->r[1]+0x00000018u); // 80050388
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005038C
  c->lr=c->r[0]; // 80050390
  c->r[1]=c->r[1]+0x00000020u; // 80050394
  return; // 80050398
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,16>FPQ24gbla12SaveDataUtil
void f_8005039C(Ctx* __restrict c) {
  trace_call(0x8005039Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005039C
  c->r[0]=c->lr; // 800503A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800503A4
  c->r[4]=c->r[1]+0x00000008u; // 800503A8
  c->lr=0x800503B0u; f_80051F6C(c); // 800503AC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800503B0
  c->lr=c->r[0]; // 800503B4
  c->r[1]=c->r[1]+0x00000010u; // 800503B8
  return; // 800503BC
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,16>FPQ24gbla12SaveDataUtil
void f_800503C0(Ctx* __restrict c) {
  trace_call(0x800503C0u);
  return; // 800503C0
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,16>FPQ24gbla12SaveDataUtil
void f_800503C4(Ctx* __restrict c) {
  trace_call(0x800503C4u);
  return; // 800503C4
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,17>FPQ24gbla12SaveDataUtil
void f_800503C8(Ctx* __restrict c) {
  trace_call(0x800503C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800503C8
  c->r[0]=c->lr; // 800503CC
  c->r[4]=0u+0x00000000u; // 800503D0
  c->r[5]=0u+0x000000BCu; // 800503D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800503D8
  c->r[0]=0u+0x00000001u; // 800503DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800503E0
  c->r[31]=c->r[3]|c->r[3]; // 800503E4
  W8(c->r[3]+0x000003E0u,c->r[0]); // 800503E8
  c->r[3]=c->r[3]+0x000002A4u; // 800503EC
  c->lr=0x800503F4u; f_80212C88(c); // 800503F0
  c->r[4]=c->r[31]|c->r[31]; // 800503F4
  c->r[3]=c->r[31]+0x000002A4u; // 800503F8
  c->lr=0x80050400u; f_80071DBC(c); // 800503FC
  c->r[4]=0u+0x80050000u; // 80050400
  c->r[3]=c->r[31]+0x00000218u; // 80050404
  c->r[4]=c->r[4]+0x0000261Cu; // 80050408
  c->r[5]=c->r[31]+0x000002A4u; // 8005040C
  c->lr=0x80050414u; f_80071D70(c); // 80050410
  cmps(c,0,(int32_t)c->r[3],0); // 80050414
  if (!crb(c,2)) { goto L_80050434; } // 80050418
  c->r[3]=0u+0x802A0000u; // 8005041C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050420
  c->r[3]=c->r[3]+0x000005DAu; // 80050424
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050428
  c->lr=0x80050430u; f_80019994(c); // 8005042C
  goto L_80050470; // 80050430
L_80050434:;
  c->r[5]=0u+0x802A0000u; // 80050434
  W32(c->r[31]+0x000003E4u,c->r[3]); // 80050438
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8005043C
  c->r[4]=c->r[3]|c->r[3]; // 80050440
  c->r[3]=c->r[5]+0x000005FBu; // 80050444
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050448
  c->lr=0x80050450u; f_80019994(c); // 8005044C
  c->r[3]=c->r[31]+0x00000218u; // 80050450
  c->lr=0x80050458u; f_80071D74(c); // 80050454
  c->r[3]=c->r[31]+0x00000218u; // 80050458
  c->r[4]=0u+0x00000000u; // 8005045C
  c->r[5]=0u+0x0000008Cu; // 80050460
  c->lr=0x80050468u; f_80212C88(c); // 80050464
  c->r[0]=0u+0x0000001Cu; // 80050468
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005046C
L_80050470:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050474
  c->lr=c->r[0]; // 80050478
  c->r[1]=c->r[1]+0x00000010u; // 8005047C
  return; // 80050480
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,17>FPQ24gbla12SaveDataUtil
void f_80050484(Ctx* __restrict c) {
  trace_call(0x80050484u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050484
  c->r[0]=c->lr; // 80050488
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005048C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050490
  c->r[31]=c->r[3]|c->r[3]; // 80050494
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80050498
  cmps(c,0,(int32_t)c->r[0],0); // 8005049C
  if (!crb(c,2)) { goto L_80050504; } // 800504A0
  c->r[4]=R32(c->r[3]+0x000003E4u); // 800504A4
  cmps(c,0,(int32_t)c->r[4],0); // 800504A8
  if (!crb(c,2)) { goto L_800504D0; } // 800504AC
  c->r[3]=0u+0x802A0000u; // 800504B0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800504B4
  c->r[3]=c->r[3]+0x00000626u; // 800504B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800504BC
  c->lr=0x800504C4u; f_80019994(c); // 800504C0
  c->r[0]=0u+0x0000001Bu; // 800504C4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800504C8
  goto L_80050504; // 800504CC
L_800504D0:;
  c->r[3]=0u+0x802A0000u; // 800504D0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800504D4
  c->r[3]=c->r[3]+0x00000644u; // 800504D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800504DC
  c->lr=0x800504E4u; f_80019994(c); // 800504E0
  c->r[3]=c->r[31]+0x00000218u; // 800504E4
  c->lr=0x800504ECu; f_80071D74(c); // 800504E8
  c->r[3]=c->r[31]+0x00000218u; // 800504EC
  c->r[4]=0u+0x00000000u; // 800504F0
  c->r[5]=0u+0x0000008Cu; // 800504F4
  c->lr=0x800504FCu; f_80212C88(c); // 800504F8
  c->r[0]=0u+0x0000001Cu; // 800504FC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050500
L_80050504:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050504
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050508
  c->lr=c->r[0]; // 8005050C
  c->r[1]=c->r[1]+0x00000010u; // 80050510
  return; // 80050514
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,17>FPQ24gbla12SaveDataUtil
void f_80050518(Ctx* __restrict c) {
  trace_call(0x80050518u);
  return; // 80050518
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,17>FPQ24gbla12SaveDataUtil
void f_8005051C(Ctx* __restrict c) {
  trace_call(0x8005051Cu);
  c->r[4]=0u+0x00000000u; // 8005051C
  c->r[5]=0u+0x0000008Cu; // 80050520
  c->r[3]=c->r[3]+0x00000218u; // 80050524
  f_80212C88(c); return; // 80050528
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,18>FPQ24gbla12SaveDataUtil
void f_8005052C(Ctx* __restrict c) {
  trace_call(0x8005052Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005052C
  c->r[0]=c->lr; // 80050530
  c->r[4]=0u+0x00000000u; // 80050534
  c->r[5]=0u+0x000000BCu; // 80050538
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005053C
  c->r[0]=0u+0x00000001u; // 80050540
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050544
  c->r[31]=c->r[3]|c->r[3]; // 80050548
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8005054C
  c->r[3]=c->r[3]+0x000002A4u; // 80050550
  c->lr=0x80050558u; f_80212C88(c); // 80050554
  c->r[4]=c->r[31]|c->r[31]; // 80050558
  c->r[3]=c->r[31]+0x000002A4u; // 8005055C
  c->lr=0x80050564u; f_80071DBC(c); // 80050560
  c->r[6]=0u+0x80050000u; // 80050564
  c->r[3]=c->r[31]+0x00000360u; // 80050568
  c->r[4]=c->r[31]+0x00000218u; // 8005056C
  c->r[7]=c->r[31]+0x000002A4u; // 80050570
  c->r[6]=c->r[6]+0x0000261Cu; // 80050574
  c->r[5]=0u+0x00000002u; // 80050578
  c->lr=0x80050580u; f_80071D68(c); // 8005057C
  cmps(c,0,(int32_t)c->r[3],0); // 80050580
  if (!crb(c,2)) { goto L_800505A0; } // 80050584
  c->r[3]=0u+0x802A0000u; // 80050588
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8005058C
  c->r[3]=c->r[3]+0x00000666u; // 80050590
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050594
  c->lr=0x8005059Cu; f_80019994(c); // 80050598
  goto L_800505DC; // 8005059C
L_800505A0:;
  c->r[5]=0u+0x802A0000u; // 800505A0
  W32(c->r[31]+0x000003E4u,c->r[3]); // 800505A4
  c->r[5]=c->r[5]+0xFFFF93F0u; // 800505A8
  c->r[4]=c->r[3]|c->r[3]; // 800505AC
  c->r[3]=c->r[5]+0x00000687u; // 800505B0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800505B4
  c->lr=0x800505BCu; f_80019994(c); // 800505B8
  c->r[3]=c->r[31]+0x00000218u; // 800505BC
  c->lr=0x800505C4u; f_80071D74(c); // 800505C0
  c->r[3]=c->r[31]+0x00000218u; // 800505C4
  c->r[4]=0u+0x00000000u; // 800505C8
  c->r[5]=0u+0x0000008Cu; // 800505CC
  c->lr=0x800505D4u; f_80212C88(c); // 800505D0
  c->r[0]=0u+0x0000001Cu; // 800505D4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800505D8
L_800505DC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800505DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800505E0
  c->lr=c->r[0]; // 800505E4
  c->r[1]=c->r[1]+0x00000010u; // 800505E8
  return; // 800505EC
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,18>FPQ24gbla12SaveDataUtil
void f_800505F0(Ctx* __restrict c) {
  trace_call(0x800505F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800505F0
  c->r[0]=c->lr; // 800505F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800505F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800505FC
  c->r[31]=c->r[3]|c->r[3]; // 80050600
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80050604
  cmps(c,0,(int32_t)c->r[0],0); // 80050608
  if (!crb(c,2)) { goto L_80050698; } // 8005060C
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80050610
  cmps(c,0,(int32_t)c->r[4],0); // 80050614
  if (!crb(c,2)) { goto L_80050664; } // 80050618
  c->r[3]=0u+0x802A0000u; // 8005061C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050620
  c->r[3]=c->r[3]+0x000006B2u; // 80050624
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050628
  c->lr=0x80050630u; f_80019994(c); // 8005062C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80050630
  c->r[3]=0u+0x8D3E0000u; // 80050634
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050638
  c->r[4]=c->r[4]+0x00000001u; // 8005063C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050640
  c->r[0]=c->r[0]+c->r[4]; // 80050644
  c->r[0]=sraw(c,c->r[0],4); // 80050648
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005064C
  c->r[0]=c->r[0]+c->r[3]; // 80050650
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80050654
  c->r[0]=c->r[4]-c->r[0]; // 80050658
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005065C
  goto L_80050698; // 80050660
L_80050664:;
  c->r[3]=0u+0x802A0000u; // 80050664
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050668
  c->r[3]=c->r[3]+0x000006D0u; // 8005066C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050670
  c->lr=0x80050678u; f_80019994(c); // 80050674
  c->r[3]=c->r[31]+0x00000218u; // 80050678
  c->lr=0x80050680u; f_80071D74(c); // 8005067C
  c->r[3]=c->r[31]+0x00000218u; // 80050680
  c->r[4]=0u+0x00000000u; // 80050684
  c->r[5]=0u+0x0000008Cu; // 80050688
  c->lr=0x80050690u; f_80212C88(c); // 8005068C
  c->r[0]=0u+0x0000001Cu; // 80050690
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050694
L_80050698:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050698
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005069C
  c->lr=c->r[0]; // 800506A0
  c->r[1]=c->r[1]+0x00000010u; // 800506A4
  return; // 800506A8
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,18>FPQ24gbla12SaveDataUtil
void f_800506AC(Ctx* __restrict c) {
  trace_call(0x800506ACu);
  return; // 800506AC
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,18>FPQ24gbla12SaveDataUtil
void f_800506B0(Ctx* __restrict c) {
  trace_call(0x800506B0u);
  return; // 800506B0
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,19>FPQ24gbla12SaveDataUtil
void f_800506B4(Ctx* __restrict c) {
  trace_call(0x800506B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800506B4
  c->r[0]=c->lr; // 800506B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800506BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800506C0
  c->r[31]=c->r[3]|c->r[3]; // 800506C4
  c->r[0]=R32(c->r[3]+0x00000200u); // 800506C8
  cmps(c,0,(int32_t)c->r[0],0); // 800506CC
  if (!crb(c,2)) { goto L_80050708; } // 800506D0
  c->r[5]=R32(c->r[3]+0x000001D8u); // 800506D4
  c->r[4]=0u+0x8D3E0000u; // 800506D8
  c->r[0]=c->r[4]+0xFFFFCB09u; // 800506DC
  c->r[5]=c->r[5]+0x00000001u; // 800506E0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 800506E4
  c->r[0]=c->r[0]+c->r[5]; // 800506E8
  c->r[0]=sraw(c,c->r[0],4); // 800506EC
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 800506F0
  c->r[0]=c->r[0]+c->r[4]; // 800506F4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 800506F8
  c->r[0]=c->r[5]-c->r[0]; // 800506FC
  W32(c->r[3]+0x000001D8u,c->r[0]); // 80050700
  goto L_800507A4; // 80050704
L_80050708:;
  c->r[0]=0u+0x00000001u; // 80050708
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8005070C
  c->r[4]=0u+0x00000000u; // 80050710
  c->r[5]=0u+0x000000BCu; // 80050714
  c->r[3]=c->r[3]+0x000002A4u; // 80050718
  c->lr=0x80050720u; f_80212C88(c); // 8005071C
  c->r[4]=c->r[31]|c->r[31]; // 80050720
  c->r[3]=c->r[31]+0x000002A4u; // 80050724
  c->lr=0x8005072Cu; f_80071DBC(c); // 80050728
  c->r[6]=0u+0x80050000u; // 8005072C
  c->r[4]=R32(c->r[31]+0x00000200u); // 80050730
  c->r[3]=c->r[31]+0x00000218u; // 80050734
  c->r[7]=c->r[31]+0x000002A4u; // 80050738
  c->r[6]=c->r[6]+0x0000261Cu; // 8005073C
  c->r[5]=0u+0x00000000u; // 80050740
  c->lr=0x80050748u; f_80071D80(c); // 80050744
  cmps(c,0,(int32_t)c->r[3],0); // 80050748
  if (!crb(c,2)) { goto L_80050768; } // 8005074C
  c->r[3]=0u+0x802A0000u; // 80050750
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050754
  c->r[3]=c->r[3]+0x000006F2u; // 80050758
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005075C
  c->lr=0x80050764u; f_80019994(c); // 80050760
  goto L_800507A4; // 80050764
L_80050768:;
  c->r[5]=0u+0x802A0000u; // 80050768
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8005076C
  c->r[5]=c->r[5]+0xFFFF93F0u; // 80050770
  c->r[4]=c->r[3]|c->r[3]; // 80050774
  c->r[3]=c->r[5]+0x00000713u; // 80050778
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005077C
  c->lr=0x80050784u; f_80019994(c); // 80050780
  c->r[3]=c->r[31]+0x00000218u; // 80050784
  c->lr=0x8005078Cu; f_80071D74(c); // 80050788
  c->r[3]=c->r[31]+0x00000218u; // 8005078C
  c->r[4]=0u+0x00000000u; // 80050790
  c->r[5]=0u+0x0000008Cu; // 80050794
  c->lr=0x8005079Cu; f_80212C88(c); // 80050798
  c->r[0]=0u+0x0000001Cu; // 8005079C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800507A0
L_800507A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800507A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800507A8
  c->lr=c->r[0]; // 800507AC
  c->r[1]=c->r[1]+0x00000010u; // 800507B0
  return; // 800507B4
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,19>FPQ24gbla12SaveDataUtil
void f_800507B8(Ctx* __restrict c) {
  trace_call(0x800507B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800507B8
  c->r[0]=c->lr; // 800507BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800507C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800507C4
  c->r[31]=c->r[3]|c->r[3]; // 800507C8
  c->r[0]=R8(c->r[3]+0x000003E0u); // 800507CC
  cmps(c,0,(int32_t)c->r[0],0); // 800507D0
  if (!crb(c,2)) { goto L_80050860; } // 800507D4
  c->r[4]=R32(c->r[3]+0x000003E4u); // 800507D8
  cmps(c,0,(int32_t)c->r[4],0); // 800507DC
  if (!crb(c,2)) { goto L_8005082C; } // 800507E0
  c->r[3]=0u+0x802A0000u; // 800507E4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800507E8
  c->r[3]=c->r[3]+0x0000073Eu; // 800507EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800507F0
  c->lr=0x800507F8u; f_80019994(c); // 800507F4
  c->r[4]=R32(c->r[31]+0x000001D8u); // 800507F8
  c->r[3]=0u+0x8D3E0000u; // 800507FC
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050800
  c->r[4]=c->r[4]+0x00000001u; // 80050804
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050808
  c->r[0]=c->r[0]+c->r[4]; // 8005080C
  c->r[0]=sraw(c,c->r[0],4); // 80050810
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80050814
  c->r[0]=c->r[0]+c->r[3]; // 80050818
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 8005081C
  c->r[0]=c->r[4]-c->r[0]; // 80050820
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050824
  goto L_80050860; // 80050828
L_8005082C:;
  c->r[3]=0u+0x802A0000u; // 8005082C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050830
  c->r[3]=c->r[3]+0x0000075Cu; // 80050834
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050838
  c->lr=0x80050840u; f_80019994(c); // 8005083C
  c->r[3]=c->r[31]+0x00000218u; // 80050840
  c->lr=0x80050848u; f_80071D74(c); // 80050844
  c->r[3]=c->r[31]+0x00000218u; // 80050848
  c->r[4]=0u+0x00000000u; // 8005084C
  c->r[5]=0u+0x0000008Cu; // 80050850
  c->lr=0x80050858u; f_80212C88(c); // 80050854
  c->r[0]=0u+0x0000001Cu; // 80050858
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005085C
L_80050860:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050860
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050864
  c->lr=c->r[0]; // 80050868
  c->r[1]=c->r[1]+0x00000010u; // 8005086C
  return; // 80050870
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,19>FPQ24gbla12SaveDataUtil
void f_80050874(Ctx* __restrict c) {
  trace_call(0x80050874u);
  return; // 80050874
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,19>FPQ24gbla12SaveDataUtil
void f_80050878(Ctx* __restrict c) {
  trace_call(0x80050878u);
  return; // 80050878
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,20>FPQ24gbla12SaveDataUtil
void f_8005087C(Ctx* __restrict c) {
  trace_call(0x8005087Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005087C
  c->r[0]=c->lr; // 80050880
  c->r[4]=0u+0x00000000u; // 80050884
  c->r[5]=0u+0x000000BCu; // 80050888
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005088C
  c->r[0]=0u+0x00000001u; // 80050890
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050894
  c->r[31]=c->r[3]|c->r[3]; // 80050898
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8005089C
  c->r[3]=c->r[3]+0x000002A4u; // 800508A0
  c->lr=0x800508A8u; f_80212C88(c); // 800508A4
  c->r[4]=c->r[31]|c->r[31]; // 800508A8
  c->r[3]=c->r[31]+0x000002A4u; // 800508AC
  c->lr=0x800508B4u; f_80071DBC(c); // 800508B0
  c->r[6]=0u+0x80050000u; // 800508B4
  c->r[4]=R32(c->r[31]+0x00000210u); // 800508B8
  c->r[5]=R32(c->r[31]+0x00000214u); // 800508BC
  c->r[3]=c->r[31]+0x00000218u; // 800508C0
  c->r[6]=c->r[6]+0x0000261Cu; // 800508C4
  c->r[7]=c->r[31]+0x000002A4u; // 800508C8
  c->lr=0x800508D0u; f_80071D7C(c); // 800508CC
  cmps(c,0,(int32_t)c->r[3],0); // 800508D0
  if (!crb(c,2)) { goto L_800508F0; } // 800508D4
  c->r[3]=0u+0x802A0000u; // 800508D8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800508DC
  c->r[3]=c->r[3]+0x0000077Eu; // 800508E0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800508E4
  c->lr=0x800508ECu; f_80019994(c); // 800508E8
  goto L_8005092C; // 800508EC
L_800508F0:;
  c->r[5]=0u+0x802A0000u; // 800508F0
  W32(c->r[31]+0x000003E4u,c->r[3]); // 800508F4
  c->r[5]=c->r[5]+0xFFFF93F0u; // 800508F8
  c->r[4]=c->r[3]|c->r[3]; // 800508FC
  c->r[3]=c->r[5]+0x0000079Au; // 80050900
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050904
  c->lr=0x8005090Cu; f_80019994(c); // 80050908
  c->r[3]=c->r[31]+0x00000218u; // 8005090C
  c->lr=0x80050914u; f_80071D74(c); // 80050910
  c->r[3]=c->r[31]+0x00000218u; // 80050914
  c->r[4]=0u+0x00000000u; // 80050918
  c->r[5]=0u+0x0000008Cu; // 8005091C
  c->lr=0x80050924u; f_80212C88(c); // 80050920
  c->r[0]=0u+0x0000001Cu; // 80050924
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050928
L_8005092C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005092C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050930
  c->lr=c->r[0]; // 80050934
  c->r[1]=c->r[1]+0x00000010u; // 80050938
  return; // 8005093C
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,20>FPQ24gbla12SaveDataUtil
void f_80050940(Ctx* __restrict c) {
  trace_call(0x80050940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050940
  c->r[0]=c->lr; // 80050944
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050948
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005094C
  c->r[31]=c->r[3]|c->r[3]; // 80050950
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80050954
  cmps(c,0,(int32_t)c->r[0],0); // 80050958
  if (!crb(c,2)) { goto L_800509EC; } // 8005095C
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80050960
  cmps(c,0,(int32_t)c->r[4],0); // 80050964
  if (!crb(c,1)) { goto L_800509B4; } // 80050968
  c->r[3]=0u+0x802A0000u; // 8005096C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050970
  c->r[3]=c->r[3]+0x000007C0u; // 80050974
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050978
  c->lr=0x80050980u; f_80019994(c); // 8005097C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80050980
  c->r[3]=0u+0x8D3E0000u; // 80050984
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050988
  c->r[4]=c->r[4]+0x00000001u; // 8005098C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050990
  c->r[0]=c->r[0]+c->r[4]; // 80050994
  c->r[0]=sraw(c,c->r[0],4); // 80050998
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005099C
  c->r[0]=c->r[0]+c->r[3]; // 800509A0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 800509A4
  c->r[0]=c->r[4]-c->r[0]; // 800509A8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800509AC
  goto L_800509EC; // 800509B0
L_800509B4:;
  if (crb(c,2)) { goto L_800509EC; } // 800509B4
  c->r[3]=0u+0x802A0000u; // 800509B8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800509BC
  c->r[3]=c->r[3]+0x000007D9u; // 800509C0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800509C4
  c->lr=0x800509CCu; f_80019994(c); // 800509C8
  c->r[3]=c->r[31]+0x00000218u; // 800509CC
  c->lr=0x800509D4u; f_80071D74(c); // 800509D0
  c->r[3]=c->r[31]+0x00000218u; // 800509D4
  c->r[4]=0u+0x00000000u; // 800509D8
  c->r[5]=0u+0x0000008Cu; // 800509DC
  c->lr=0x800509E4u; f_80212C88(c); // 800509E0
  c->r[0]=0u+0x0000001Cu; // 800509E4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800509E8
L_800509EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800509EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800509F0
  c->lr=c->r[0]; // 800509F4
  c->r[1]=c->r[1]+0x00000010u; // 800509F8
  return; // 800509FC
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,20>FPQ24gbla12SaveDataUtil
void f_80050A00(Ctx* __restrict c) {
  trace_call(0x80050A00u);
  return; // 80050A00
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,20>FPQ24gbla12SaveDataUtil
void f_80050A04(Ctx* __restrict c) {
  trace_call(0x80050A04u);
  return; // 80050A04
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,21>FPQ24gbla12SaveDataUtil
void f_80050A08(Ctx* __restrict c) {
  trace_call(0x80050A08u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050A08
  c->r[0]=c->lr; // 80050A0C
  c->r[4]=0u+0x00000000u; // 80050A10
  c->r[5]=0u+0x000000BCu; // 80050A14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050A18
  c->r[0]=0u+0x00000001u; // 80050A1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050A20
  c->r[31]=c->r[3]|c->r[3]; // 80050A24
  W8(c->r[3]+0x000003E0u,c->r[0]); // 80050A28
  c->r[3]=c->r[3]+0x000002A4u; // 80050A2C
  c->lr=0x80050A34u; f_80212C88(c); // 80050A30
  c->r[4]=c->r[31]|c->r[31]; // 80050A34
  c->r[3]=c->r[31]+0x000002A4u; // 80050A38
  c->lr=0x80050A40u; f_80071DBC(c); // 80050A3C
  c->r[4]=0u+0x80050000u; // 80050A40
  c->r[3]=c->r[31]+0x00000218u; // 80050A44
  c->r[4]=c->r[4]+0x0000261Cu; // 80050A48
  c->r[5]=c->r[31]+0x000002A4u; // 80050A4C
  c->lr=0x80050A54u; f_80071D70(c); // 80050A50
  cmps(c,0,(int32_t)c->r[3],0); // 80050A54
  if (!crb(c,2)) { goto L_80050A74; } // 80050A58
  c->r[3]=0u+0x802A0000u; // 80050A5C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050A60
  c->r[3]=c->r[3]+0x000007F6u; // 80050A64
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050A68
  c->lr=0x80050A70u; f_80019994(c); // 80050A6C
  goto L_80050AB0; // 80050A70
L_80050A74:;
  c->r[5]=0u+0x802A0000u; // 80050A74
  W32(c->r[31]+0x000003E4u,c->r[3]); // 80050A78
  c->r[5]=c->r[5]+0xFFFF93F0u; // 80050A7C
  c->r[4]=c->r[3]|c->r[3]; // 80050A80
  c->r[3]=c->r[5]+0x00000818u; // 80050A84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050A88
  c->lr=0x80050A90u; f_80019994(c); // 80050A8C
  c->r[3]=c->r[31]+0x00000218u; // 80050A90
  c->lr=0x80050A98u; f_80071D74(c); // 80050A94
  c->r[3]=c->r[31]+0x00000218u; // 80050A98
  c->r[4]=0u+0x00000000u; // 80050A9C
  c->r[5]=0u+0x0000008Cu; // 80050AA0
  c->lr=0x80050AA8u; f_80212C88(c); // 80050AA4
  c->r[0]=0u+0x0000001Cu; // 80050AA8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050AAC
L_80050AB0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050AB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050AB4
  c->lr=c->r[0]; // 80050AB8
  c->r[1]=c->r[1]+0x00000010u; // 80050ABC
  return; // 80050AC0
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,21>FPQ24gbla12SaveDataUtil
void f_80050AC4(Ctx* __restrict c) {
  trace_call(0x80050AC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050AC4
  c->r[0]=c->lr; // 80050AC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050ACC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050AD0
  c->r[31]=c->r[3]|c->r[3]; // 80050AD4
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80050AD8
  cmps(c,0,(int32_t)c->r[0],0); // 80050ADC
  if (!crb(c,2)) { goto L_80050B44; } // 80050AE0
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80050AE4
  cmps(c,0,(int32_t)c->r[4],0); // 80050AE8
  if (!crb(c,2)) { goto L_80050B10; } // 80050AEC
  c->r[3]=0u+0x802A0000u; // 80050AF0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050AF4
  c->r[3]=c->r[3]+0x00000844u; // 80050AF8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050AFC
  c->lr=0x80050B04u; f_80019994(c); // 80050B00
  c->r[0]=0u+0x0000001Bu; // 80050B04
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050B08
  goto L_80050B44; // 80050B0C
L_80050B10:;
  c->r[3]=0u+0x802A0000u; // 80050B10
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050B14
  c->r[3]=c->r[3]+0x00000863u; // 80050B18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050B1C
  c->lr=0x80050B24u; f_80019994(c); // 80050B20
  c->r[3]=c->r[31]+0x00000218u; // 80050B24
  c->lr=0x80050B2Cu; f_80071D74(c); // 80050B28
  c->r[3]=c->r[31]+0x00000218u; // 80050B2C
  c->r[4]=0u+0x00000000u; // 80050B30
  c->r[5]=0u+0x0000008Cu; // 80050B34
  c->lr=0x80050B3Cu; f_80212C88(c); // 80050B38
  c->r[0]=0u+0x0000001Cu; // 80050B3C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050B40
L_80050B44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050B44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050B48
  c->lr=c->r[0]; // 80050B4C
  c->r[1]=c->r[1]+0x00000010u; // 80050B50
  return; // 80050B54
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,21>FPQ24gbla12SaveDataUtil
void f_80050B58(Ctx* __restrict c) {
  trace_call(0x80050B58u);
  return; // 80050B58
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,21>FPQ24gbla12SaveDataUtil
void f_80050B5C(Ctx* __restrict c) {
  trace_call(0x80050B5Cu);
  c->r[4]=0u+0x00000000u; // 80050B5C
  c->r[5]=0u+0x0000008Cu; // 80050B60
  c->r[3]=c->r[3]+0x00000218u; // 80050B64
  f_80212C88(c); return; // 80050B68
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,22>FPQ24gbla12SaveDataUtil
void f_80050B6C(Ctx* __restrict c) {
  trace_call(0x80050B6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050B6C
  c->r[0]=c->lr; // 80050B70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80050B74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80050B78
  c->r[31]=c->r[3]|c->r[3]; // 80050B7C
  c->r[3]=c->r[1]+0x00000008u; // 80050B80
  c->r[4]=R32(c->r[31]+0x000001ECu); // 80050B84
  c->r[5]=R32(c->r[31]+0x000001F0u); // 80050B88
  c->lr=0x80050B90u; f_8020A420(c); // 80050B8C
  c->r[3]=c->r[1]+0x00000008u; // 80050B90
  c->r[4]=c->r[31]+0x000003E8u; // 80050B94
  c->r[5]=c->r[31]+0x000003ECu; // 80050B98
  c->r[6]=c->r[31]+0x000003F0u; // 80050B9C
  c->lr=0x80050BA4u; f_8002AE7C(c); // 80050BA0
  cmps(c,0,(int32_t)c->r[3],0); // 80050BA4
  if (crb(c,2)) { goto L_80050BB8; } // 80050BA8
  c->r[0]=0u+0x0000001Cu; // 80050BAC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050BB0
  goto L_80050BE8; // 80050BB4
L_80050BB8:;
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80050BB8
  c->r[3]=0u+0x8D3E0000u; // 80050BBC
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050BC0
  c->r[4]=c->r[4]+0x00000001u; // 80050BC4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050BC8
  c->r[0]=c->r[0]+c->r[4]; // 80050BCC
  c->r[0]=sraw(c,c->r[0],4); // 80050BD0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80050BD4
  c->r[0]=c->r[0]+c->r[3]; // 80050BD8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80050BDC
  c->r[0]=c->r[4]-c->r[0]; // 80050BE0
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050BE4
L_80050BE8:;
  c->r[3]=c->r[1]+0x00000008u; // 80050BE8
  c->r[4]=0u+0xFFFFFFFFu; // 80050BEC
  c->lr=0x80050BF4u; f_8020A43C(c); // 80050BF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 80050BF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80050BF8
  c->lr=c->r[0]; // 80050BFC
  c->r[1]=c->r[1]+0x00000020u; // 80050C00
  return; // 80050C04
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,22>FPQ24gbla12SaveDataUtil
void f_80050C08(Ctx* __restrict c) {
  trace_call(0x80050C08u);
  return; // 80050C08
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,22>FPQ24gbla12SaveDataUtil
void f_80050C0C(Ctx* __restrict c) {
  trace_call(0x80050C0Cu);
  return; // 80050C0C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,22>FPQ24gbla12SaveDataUtil
void f_80050C10(Ctx* __restrict c) {
  trace_call(0x80050C10u);
  return; // 80050C10
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,23>FPQ24gbla12SaveDataUtil
void f_80050C14(Ctx* __restrict c) {
  trace_call(0x80050C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050C14
  c->r[0]=c->lr; // 80050C18
  c->r[4]=0u+0x00000000u; // 80050C1C
  c->r[5]=0u+0x000000BCu; // 80050C20
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050C24
  c->r[0]=0u+0x00000001u; // 80050C28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050C2C
  c->r[31]=c->r[3]|c->r[3]; // 80050C30
  W8(c->r[3]+0x000003E0u,c->r[0]); // 80050C34
  c->r[3]=c->r[3]+0x000002A4u; // 80050C38
  c->lr=0x80050C40u; f_80212C88(c); // 80050C3C
  c->r[4]=c->r[31]|c->r[31]; // 80050C40
  c->r[3]=c->r[31]+0x000002A4u; // 80050C44
  c->lr=0x80050C4Cu; f_80071DBC(c); // 80050C48
  c->r[6]=0u+0x80050000u; // 80050C4C
  c->r[3]=c->r[31]+0x00000360u; // 80050C50
  c->r[4]=c->r[31]+0x00000218u; // 80050C54
  c->r[7]=c->r[31]+0x000002A4u; // 80050C58
  c->r[6]=c->r[6]+0x0000261Cu; // 80050C5C
  c->r[5]=0u+0x00000002u; // 80050C60
  c->lr=0x80050C68u; f_80071D68(c); // 80050C64
  cmps(c,0,(int32_t)c->r[3],0); // 80050C68
  if (!crb(c,2)) { goto L_80050C88; } // 80050C6C
  c->r[3]=0u+0x802A0000u; // 80050C70
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050C74
  c->r[3]=c->r[3]+0x00000886u; // 80050C78
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050C7C
  c->lr=0x80050C84u; f_80019994(c); // 80050C80
  goto L_80050CC4; // 80050C84
L_80050C88:;
  c->r[5]=0u+0x802A0000u; // 80050C88
  W32(c->r[31]+0x000003E4u,c->r[3]); // 80050C8C
  c->r[5]=c->r[5]+0xFFFF93F0u; // 80050C90
  c->r[4]=c->r[3]|c->r[3]; // 80050C94
  c->r[3]=c->r[5]+0x000008AEu; // 80050C98
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050C9C
  c->lr=0x80050CA4u; f_80019994(c); // 80050CA0
  c->r[3]=c->r[31]+0x00000218u; // 80050CA4
  c->lr=0x80050CACu; f_80071D74(c); // 80050CA8
  c->r[3]=c->r[31]+0x00000218u; // 80050CAC
  c->r[4]=0u+0x00000000u; // 80050CB0
  c->r[5]=0u+0x0000008Cu; // 80050CB4
  c->lr=0x80050CBCu; f_80212C88(c); // 80050CB8
  c->r[0]=0u+0x0000001Cu; // 80050CBC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050CC0
L_80050CC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050CC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050CC8
  c->lr=c->r[0]; // 80050CCC
  c->r[1]=c->r[1]+0x00000010u; // 80050CD0
  return; // 80050CD4
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,23>FPQ24gbla12SaveDataUtil
void f_80050CD8(Ctx* __restrict c) {
  trace_call(0x80050CD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050CD8
  c->r[0]=c->lr; // 80050CDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050CE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050CE4
  c->r[31]=c->r[3]|c->r[3]; // 80050CE8
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80050CEC
  cmps(c,0,(int32_t)c->r[0],0); // 80050CF0
  if (!crb(c,2)) { goto L_80050D80; } // 80050CF4
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80050CF8
  cmps(c,0,(int32_t)c->r[4],0); // 80050CFC
  if (!crb(c,2)) { goto L_80050D4C; } // 80050D00
  c->r[3]=0u+0x802A0000u; // 80050D04
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050D08
  c->r[3]=c->r[3]+0x000008E0u; // 80050D0C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050D10
  c->lr=0x80050D18u; f_80019994(c); // 80050D14
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80050D18
  c->r[3]=0u+0x8D3E0000u; // 80050D1C
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050D20
  c->r[4]=c->r[4]+0x00000001u; // 80050D24
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050D28
  c->r[0]=c->r[0]+c->r[4]; // 80050D2C
  c->r[0]=sraw(c,c->r[0],4); // 80050D30
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80050D34
  c->r[0]=c->r[0]+c->r[3]; // 80050D38
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80050D3C
  c->r[0]=c->r[4]-c->r[0]; // 80050D40
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050D44
  goto L_80050D80; // 80050D48
L_80050D4C:;
  c->r[3]=0u+0x802A0000u; // 80050D4C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050D50
  c->r[3]=c->r[3]+0x00000905u; // 80050D54
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050D58
  c->lr=0x80050D60u; f_80019994(c); // 80050D5C
  c->r[3]=c->r[31]+0x00000218u; // 80050D60
  c->lr=0x80050D68u; f_80071D74(c); // 80050D64
  c->r[3]=c->r[31]+0x00000218u; // 80050D68
  c->r[4]=0u+0x00000000u; // 80050D6C
  c->r[5]=0u+0x0000008Cu; // 80050D70
  c->lr=0x80050D78u; f_80212C88(c); // 80050D74
  c->r[0]=0u+0x0000001Cu; // 80050D78
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050D7C
L_80050D80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050D80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050D84
  c->lr=c->r[0]; // 80050D88
  c->r[1]=c->r[1]+0x00000010u; // 80050D8C
  return; // 80050D90
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,23>FPQ24gbla12SaveDataUtil
void f_80050D94(Ctx* __restrict c) {
  trace_call(0x80050D94u);
  return; // 80050D94
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,23>FPQ24gbla12SaveDataUtil
void f_80050D98(Ctx* __restrict c) {
  trace_call(0x80050D98u);
  return; // 80050D98
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,24>FPQ24gbla12SaveDataUtil
void f_80050D9C(Ctx* __restrict c) {
  trace_call(0x80050D9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050D9C
  c->r[0]=c->lr; // 80050DA0
  c->r[4]=0u+0x00000000u; // 80050DA4
  c->r[5]=0u+0x000000BCu; // 80050DA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050DAC
  c->r[0]=0u+0x00000001u; // 80050DB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050DB4
  c->r[31]=c->r[3]|c->r[3]; // 80050DB8
  W8(c->r[3]+0x000003E0u,c->r[0]); // 80050DBC
  c->r[3]=c->r[3]+0x000002A4u; // 80050DC0
  c->lr=0x80050DC8u; f_80212C88(c); // 80050DC4
  c->r[4]=c->r[31]|c->r[31]; // 80050DC8
  c->r[3]=c->r[31]+0x000002A4u; // 80050DCC
  c->lr=0x80050DD4u; f_80071DBC(c); // 80050DD0
  c->r[6]=0u+0x80050000u; // 80050DD4
  c->r[4]=R32(c->r[31]+0x000003E8u); // 80050DD8
  c->r[3]=c->r[31]+0x00000218u; // 80050DDC
  c->r[7]=c->r[31]+0x000002A4u; // 80050DE0
  c->r[6]=c->r[6]+0x0000261Cu; // 80050DE4
  c->r[5]=0u+0x00000000u; // 80050DE8
  c->lr=0x80050DF0u; f_80071D80(c); // 80050DEC
  cmps(c,0,(int32_t)c->r[3],0); // 80050DF0
  if (!crb(c,2)) { goto L_80050E10; } // 80050DF4
  c->r[3]=0u+0x802A0000u; // 80050DF8
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050DFC
  c->r[3]=c->r[3]+0x0000092Eu; // 80050E00
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050E04
  c->lr=0x80050E0Cu; f_80019994(c); // 80050E08
  goto L_80050E4C; // 80050E0C
L_80050E10:;
  c->r[5]=0u+0x802A0000u; // 80050E10
  W32(c->r[31]+0x000003E4u,c->r[3]); // 80050E14
  c->r[5]=c->r[5]+0xFFFF93F0u; // 80050E18
  c->r[4]=c->r[3]|c->r[3]; // 80050E1C
  c->r[3]=c->r[5]+0x00000956u; // 80050E20
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050E24
  c->lr=0x80050E2Cu; f_80019994(c); // 80050E28
  c->r[3]=c->r[31]+0x00000218u; // 80050E2C
  c->lr=0x80050E34u; f_80071D74(c); // 80050E30
  c->r[3]=c->r[31]+0x00000218u; // 80050E34
  c->r[4]=0u+0x00000000u; // 80050E38
  c->r[5]=0u+0x0000008Cu; // 80050E3C
  c->lr=0x80050E44u; f_80212C88(c); // 80050E40
  c->r[0]=0u+0x0000001Cu; // 80050E44
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050E48
L_80050E4C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050E4C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050E50
  c->lr=c->r[0]; // 80050E54
  c->r[1]=c->r[1]+0x00000010u; // 80050E58
  return; // 80050E5C
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,24>FPQ24gbla12SaveDataUtil
void f_80050E60(Ctx* __restrict c) {
  trace_call(0x80050E60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050E60
  c->r[0]=c->lr; // 80050E64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050E68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050E6C
  c->r[31]=c->r[3]|c->r[3]; // 80050E70
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80050E74
  cmps(c,0,(int32_t)c->r[0],0); // 80050E78
  if (!crb(c,2)) { goto L_80050F08; } // 80050E7C
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80050E80
  cmps(c,0,(int32_t)c->r[4],0); // 80050E84
  if (!crb(c,2)) { goto L_80050ED4; } // 80050E88
  c->r[3]=0u+0x802A0000u; // 80050E8C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050E90
  c->r[3]=c->r[3]+0x00000988u; // 80050E94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050E98
  c->lr=0x80050EA0u; f_80019994(c); // 80050E9C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80050EA0
  c->r[3]=0u+0x8D3E0000u; // 80050EA4
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80050EA8
  c->r[4]=c->r[4]+0x00000001u; // 80050EAC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80050EB0
  c->r[0]=c->r[0]+c->r[4]; // 80050EB4
  c->r[0]=sraw(c,c->r[0],4); // 80050EB8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80050EBC
  c->r[0]=c->r[0]+c->r[3]; // 80050EC0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80050EC4
  c->r[0]=c->r[4]-c->r[0]; // 80050EC8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050ECC
  goto L_80050F08; // 80050ED0
L_80050ED4:;
  c->r[3]=0u+0x802A0000u; // 80050ED4
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050ED8
  c->r[3]=c->r[3]+0x000009ADu; // 80050EDC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050EE0
  c->lr=0x80050EE8u; f_80019994(c); // 80050EE4
  c->r[3]=c->r[31]+0x00000218u; // 80050EE8
  c->lr=0x80050EF0u; f_80071D74(c); // 80050EEC
  c->r[3]=c->r[31]+0x00000218u; // 80050EF0
  c->r[4]=0u+0x00000000u; // 80050EF4
  c->r[5]=0u+0x0000008Cu; // 80050EF8
  c->lr=0x80050F00u; f_80212C88(c); // 80050EFC
  c->r[0]=0u+0x0000001Cu; // 80050F00
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050F04
L_80050F08:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050F08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050F0C
  c->lr=c->r[0]; // 80050F10
  c->r[1]=c->r[1]+0x00000010u; // 80050F14
  return; // 80050F18
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,24>FPQ24gbla12SaveDataUtil
void f_80050F1C(Ctx* __restrict c) {
  trace_call(0x80050F1Cu);
  return; // 80050F1C
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,24>FPQ24gbla12SaveDataUtil
void f_80050F20(Ctx* __restrict c) {
  trace_call(0x80050F20u);
  return; // 80050F20
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,25>FPQ24gbla12SaveDataUtil
void f_80050F24(Ctx* __restrict c) {
  trace_call(0x80050F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050F24
  c->r[0]=c->lr; // 80050F28
  c->r[4]=0u+0x00000000u; // 80050F2C
  c->r[5]=0u+0x000000BCu; // 80050F30
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050F34
  c->r[0]=0u+0x00000001u; // 80050F38
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050F3C
  c->r[31]=c->r[3]|c->r[3]; // 80050F40
  W8(c->r[3]+0x000003E0u,c->r[0]); // 80050F44
  c->r[3]=c->r[3]+0x000002A4u; // 80050F48
  c->lr=0x80050F50u; f_80212C88(c); // 80050F4C
  c->r[4]=c->r[31]|c->r[31]; // 80050F50
  c->r[3]=c->r[31]+0x000002A4u; // 80050F54
  c->lr=0x80050F5Cu; f_80071DBC(c); // 80050F58
  c->r[4]=R32(c->r[31]+0x000001ECu); // 80050F5C
  c->r[6]=0u+0x80050000u; // 80050F60
  c->r[0]=R32(c->r[31]+0x000003ECu); // 80050F64
  c->r[3]=c->r[31]+0x00000218u; // 80050F68
  c->r[5]=R32(c->r[31]+0x000003F0u); // 80050F6C
  c->r[6]=c->r[6]+0x0000261Cu; // 80050F70
  c->r[4]=c->r[4]+c->r[0]; // 80050F74
  c->r[7]=c->r[31]+0x000002A4u; // 80050F78
  c->lr=0x80050F80u; f_80071D7C(c); // 80050F7C
  cmps(c,0,(int32_t)c->r[3],0); // 80050F80
  if (!crb(c,2)) { goto L_80050FA0; } // 80050F84
  c->r[3]=0u+0x802A0000u; // 80050F88
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80050F8C
  c->r[3]=c->r[3]+0x000009D6u; // 80050F90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050F94
  c->lr=0x80050F9Cu; f_80019994(c); // 80050F98
  goto L_80050FDC; // 80050F9C
L_80050FA0:;
  c->r[5]=0u+0x802A0000u; // 80050FA0
  W32(c->r[31]+0x000003E4u,c->r[3]); // 80050FA4
  c->r[5]=c->r[5]+0xFFFF93F0u; // 80050FA8
  c->r[4]=c->r[3]|c->r[3]; // 80050FAC
  c->r[3]=c->r[5]+0x000009F9u; // 80050FB0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80050FB4
  c->lr=0x80050FBCu; f_80019994(c); // 80050FB8
  c->r[3]=c->r[31]+0x00000218u; // 80050FBC
  c->lr=0x80050FC4u; f_80071D74(c); // 80050FC0
  c->r[3]=c->r[31]+0x00000218u; // 80050FC4
  c->r[4]=0u+0x00000000u; // 80050FC8
  c->r[5]=0u+0x0000008Cu; // 80050FCC
  c->lr=0x80050FD4u; f_80212C88(c); // 80050FD0
  c->r[0]=0u+0x0000001Cu; // 80050FD4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80050FD8
L_80050FDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80050FDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80050FE0
  c->lr=c->r[0]; // 80050FE4
  c->r[1]=c->r[1]+0x00000010u; // 80050FE8
  return; // 80050FEC
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,25>FPQ24gbla12SaveDataUtil
void f_80050FF0(Ctx* __restrict c) {
  trace_call(0x80050FF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80050FF0
  c->r[0]=c->lr; // 80050FF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80050FF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80050FFC
  c->r[31]=c->r[3]|c->r[3]; // 80051000
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80051004
  cmps(c,0,(int32_t)c->r[0],0); // 80051008
  if (!crb(c,2)) { goto L_8005109C; } // 8005100C
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80051010
  cmps(c,0,(int32_t)c->r[4],0); // 80051014
  if (!crb(c,1)) { goto L_80051064; } // 80051018
  c->r[3]=0u+0x802A0000u; // 8005101C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80051020
  c->r[3]=c->r[3]+0x00000A26u; // 80051024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051028
  c->lr=0x80051030u; f_80019994(c); // 8005102C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80051030
  c->r[3]=0u+0x8D3E0000u; // 80051034
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80051038
  c->r[4]=c->r[4]+0x00000001u; // 8005103C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80051040
  c->r[0]=c->r[0]+c->r[4]; // 80051044
  c->r[0]=sraw(c,c->r[0],4); // 80051048
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005104C
  c->r[0]=c->r[0]+c->r[3]; // 80051050
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80051054
  c->r[0]=c->r[4]-c->r[0]; // 80051058
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005105C
  goto L_8005109C; // 80051060
L_80051064:;
  if (crb(c,2)) { goto L_8005109C; } // 80051064
  c->r[3]=0u+0x802A0000u; // 80051068
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8005106C
  c->r[3]=c->r[3]+0x00000A46u; // 80051070
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051074
  c->lr=0x8005107Cu; f_80019994(c); // 80051078
  c->r[3]=c->r[31]+0x00000218u; // 8005107C
  c->lr=0x80051084u; f_80071D74(c); // 80051080
  c->r[3]=c->r[31]+0x00000218u; // 80051084
  c->r[4]=0u+0x00000000u; // 80051088
  c->r[5]=0u+0x0000008Cu; // 8005108C
  c->lr=0x80051094u; f_80212C88(c); // 80051090
  c->r[0]=0u+0x0000001Cu; // 80051094
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80051098
L_8005109C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005109C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800510A0
  c->lr=c->r[0]; // 800510A4
  c->r[1]=c->r[1]+0x00000010u; // 800510A8
  return; // 800510AC
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,25>FPQ24gbla12SaveDataUtil
void f_800510B0(Ctx* __restrict c) {
  trace_call(0x800510B0u);
  return; // 800510B0
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,25>FPQ24gbla12SaveDataUtil
void f_800510B4(Ctx* __restrict c) {
  trace_call(0x800510B4u);
  return; // 800510B4
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,26>FPQ24gbla12SaveDataUtil
void f_800510B8(Ctx* __restrict c) {
  trace_call(0x800510B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800510B8
  c->r[0]=c->lr; // 800510BC
  c->r[4]=0u+0x00000000u; // 800510C0
  c->r[5]=0u+0x000000BCu; // 800510C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800510C8
  c->r[0]=0u+0x00000001u; // 800510CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800510D0
  c->r[31]=c->r[3]|c->r[3]; // 800510D4
  W8(c->r[3]+0x000003E0u,c->r[0]); // 800510D8
  c->r[3]=c->r[3]+0x000002A4u; // 800510DC
  c->lr=0x800510E4u; f_80212C88(c); // 800510E0
  c->r[4]=c->r[31]|c->r[31]; // 800510E4
  c->r[3]=c->r[31]+0x000002A4u; // 800510E8
  c->lr=0x800510F0u; f_80071DBC(c); // 800510EC
  c->r[4]=0u+0x80050000u; // 800510F0
  c->r[3]=c->r[31]+0x00000218u; // 800510F4
  c->r[4]=c->r[4]+0x0000261Cu; // 800510F8
  c->r[5]=c->r[31]+0x000002A4u; // 800510FC
  c->lr=0x80051104u; f_80071D70(c); // 80051100
  cmps(c,0,(int32_t)c->r[3],0); // 80051104
  if (!crb(c,2)) { goto L_80051124; } // 80051108
  c->r[3]=0u+0x802A0000u; // 8005110C
  c->r[3]=c->r[3]+0xFFFF93F0u; // 80051110
  c->r[3]=c->r[3]+0x000007F6u; // 80051114
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051118
  c->lr=0x80051120u; f_80019994(c); // 8005111C
  goto L_80051160; // 80051120
L_80051124:;
  c->r[5]=0u+0x802A0000u; // 80051124
  W32(c->r[31]+0x000003E4u,c->r[3]); // 80051128
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8005112C
  c->r[4]=c->r[3]|c->r[3]; // 80051130
  c->r[3]=c->r[5]+0x00000818u; // 80051134
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051138
  c->lr=0x80051140u; f_80019994(c); // 8005113C
  c->r[3]=c->r[31]+0x00000218u; // 80051140
  c->lr=0x80051148u; f_80071D74(c); // 80051144
  c->r[3]=c->r[31]+0x00000218u; // 80051148
  c->r[4]=0u+0x00000000u; // 8005114C
  c->r[5]=0u+0x0000008Cu; // 80051150
  c->lr=0x80051158u; f_80212C88(c); // 80051154
  c->r[0]=0u+0x0000001Cu; // 80051158
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005115C
L_80051160:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80051160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80051164
  c->lr=c->r[0]; // 80051168
  c->r[1]=c->r[1]+0x00000010u; // 8005116C
  return; // 80051170
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,26>FPQ24gbla12SaveDataUtil
void f_80051174(Ctx* __restrict c) {
  trace_call(0x80051174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051174
  c->r[0]=c->lr; // 80051178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005117C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051180
  c->r[31]=c->r[3]|c->r[3]; // 80051184
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80051188
  cmps(c,0,(int32_t)c->r[0],0); // 8005118C
  if (!crb(c,2)) { goto L_800511F4; } // 80051190
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80051194
  cmps(c,0,(int32_t)c->r[4],0); // 80051198
  if (!crb(c,2)) { goto L_800511C0; } // 8005119C
  c->r[3]=0u+0x802A0000u; // 800511A0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800511A4
  c->r[3]=c->r[3]+0x00000844u; // 800511A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800511AC
  c->lr=0x800511B4u; f_80019994(c); // 800511B0
  c->r[0]=0u+0x0000000Eu; // 800511B4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800511B8
  goto L_800511F4; // 800511BC
L_800511C0:;
  c->r[3]=0u+0x802A0000u; // 800511C0
  c->r[3]=c->r[3]+0xFFFF93F0u; // 800511C4
  c->r[3]=c->r[3]+0x00000863u; // 800511C8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800511CC
  c->lr=0x800511D4u; f_80019994(c); // 800511D0
  c->r[3]=c->r[31]+0x00000218u; // 800511D4
  c->lr=0x800511DCu; f_80071D74(c); // 800511D8
  c->r[3]=c->r[31]+0x00000218u; // 800511DC
  c->r[4]=0u+0x00000000u; // 800511E0
  c->r[5]=0u+0x0000008Cu; // 800511E4
  c->lr=0x800511ECu; f_80212C88(c); // 800511E8
  c->r[0]=0u+0x0000001Cu; // 800511EC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800511F0
L_800511F4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800511F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800511F8
  c->lr=c->r[0]; // 800511FC
  c->r[1]=c->r[1]+0x00000010u; // 80051200
  return; // 80051204
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,26>FPQ24gbla12SaveDataUtil
void f_80051208(Ctx* __restrict c) {
  trace_call(0x80051208u);
  return; // 80051208
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,26>FPQ24gbla12SaveDataUtil
void f_8005120C(Ctx* __restrict c) {
  trace_call(0x8005120Cu);
  c->r[4]=0u+0x00000000u; // 8005120C
  c->r[5]=0u+0x0000008Cu; // 80051210
  c->r[3]=c->r[3]+0x00000218u; // 80051214
  f_80212C88(c); return; // 80051218
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,27>FPQ24gbla12SaveDataUtil
void f_8005121C(Ctx* __restrict c) {
  trace_call(0x8005121Cu);
  c->r[0]=0u+0x00000001u; // 8005121C
  W8(c->r[3]+0x000001F4u,c->r[0]); // 80051220
  W32(c->r[3]+0x000001E0u,c->r[0]); // 80051224
  return; // 80051228
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,27>FPQ24gbla12SaveDataUtil
void f_8005122C(Ctx* __restrict c) {
  trace_call(0x8005122Cu);
  return; // 8005122C
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,27>FPQ24gbla12SaveDataUtil
void f_80051230(Ctx* __restrict c) {
  trace_call(0x80051230u);
  return; // 80051230
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,27>FPQ24gbla12SaveDataUtil
void f_80051234(Ctx* __restrict c) {
  trace_call(0x80051234u);
  return; // 80051234
}

// init__Q25Alice33Carrier<Q24gbla12SaveDataUtil,28>FPQ24gbla12SaveDataUtil
void f_80051238(Ctx* __restrict c) {
  trace_call(0x80051238u);
  c->r[0]=R32(c->r[3]+0x000003E4u); // 80051238
  c->r[5]=0u+0x00000001u; // 8005123C
  c->r[4]=0u+0x00000002u; // 80051240
  W8(c->r[3]+0x000001F4u,c->r[5]); // 80051244
  W32(c->r[3]+0x000001E0u,c->r[4]); // 80051248
  W32(c->r[3]+0x000001E4u,c->r[0]); // 8005124C
  return; // 80051250
}

// calc__Q25Alice33Carrier<Q24gbla12SaveDataUtil,28>FPQ24gbla12SaveDataUtil
void f_80051254(Ctx* __restrict c) {
  trace_call(0x80051254u);
  return; // 80051254
}

// draw__Q25Alice33Carrier<Q24gbla12SaveDataUtil,28>FPQ24gbla12SaveDataUtil
void f_80051258(Ctx* __restrict c) {
  trace_call(0x80051258u);
  return; // 80051258
}

// term__Q25Alice33Carrier<Q24gbla12SaveDataUtil,28>FPQ24gbla12SaveDataUtil
void f_8005125C(Ctx* __restrict c) {
  trace_call(0x8005125Cu);
  return; // 8005125C
}

// __dt__Q34gbla12SaveDataUtil6ResultFv
void f_80051260(Ctx* __restrict c) {
  trace_call(0x80051260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051260
  c->r[0]=c->lr; // 80051264
  cmps(c,0,(int32_t)c->r[3],0); // 80051268
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005126C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80051270
  c->r[31]=c->r[4]|c->r[4]; // 80051274
  W32(c->r[1]+0x00000018u,c->r[30]); // 80051278
  c->r[30]=c->r[3]|c->r[3]; // 8005127C
  if (crb(c,2)) { goto L_800512B4; } // 80051280
  c->r[0]=addc(c,c->r[3],0x0000000Cu,0); cr0(c,c->r[0]); // 80051284
  if (crb(c,2)) { goto L_800512A4; } // 80051288
  c->r[0]=0u+0x00000000u; // 8005128C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80051290
  c->r[3]=c->r[1]+0x00000008u; // 80051294
  c->r[5]=0u+0x00000001u; // 80051298
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8005129C
  c->lr=0x800512A4u; f_8020CBF8(c); // 800512A0
L_800512A4:;
  cmps(c,0,(int32_t)c->r[31],0); // 800512A4
  if (!crb(c,1)) { goto L_800512B4; } // 800512A8
  c->r[3]=c->r[30]|c->r[30]; // 800512AC
  c->lr=0x800512B4u; f_80210AFC(c); // 800512B0
L_800512B4:;
  c->r[3]=c->r[30]|c->r[30]; // 800512B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800512B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800512BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 800512C0
  c->lr=c->r[0]; // 800512C4
  c->r[1]=c->r[1]+0x00000020u; // 800512C8
  return; // 800512CC
}

// __dt__Q34gbla12SaveDataUtil4WorkFv
void f_800512D0(Ctx* __restrict c) {
  trace_call(0x800512D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800512D0
  c->r[0]=c->lr; // 800512D4
  cmps(c,0,(int32_t)c->r[3],0); // 800512D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800512DC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800512E0
  c->r[31]=c->r[4]|c->r[4]; // 800512E4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800512E8
  c->r[30]=c->r[3]|c->r[3]; // 800512EC
  if (crb(c,2)) { goto L_80051324; } // 800512F0
  c->r[0]=addc(c,c->r[3],0x00000010u,0); cr0(c,c->r[0]); // 800512F4
  if (crb(c,2)) { goto L_80051314; } // 800512F8
  c->r[0]=0u+0x00000000u; // 800512FC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80051300
  c->r[3]=c->r[1]+0x00000008u; // 80051304
  c->r[5]=0u+0x00000001u; // 80051308
  c->r[4]=R32(c->r[30]+0x00000010u); // 8005130C
  c->lr=0x80051314u; f_8020CBF8(c); // 80051310
L_80051314:;
  cmps(c,0,(int32_t)c->r[31],0); // 80051314
  if (!crb(c,1)) { goto L_80051324; } // 80051318
  c->r[3]=c->r[30]|c->r[30]; // 8005131C
  c->lr=0x80051324u; f_80210AFC(c); // 80051320
L_80051324:;
  c->r[3]=c->r[30]|c->r[30]; // 80051324
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80051328
  c->r[30]=R32(c->r[1]+0x00000018u); // 8005132C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051330
  c->lr=c->r[0]; // 80051334
  c->r[1]=c->r[1]+0x00000020u; // 80051338
  return; // 8005133C
}

// __dt__Q24gbla12SaveDataUtilFv
void f_80051340(Ctx* __restrict c) {
  trace_call(0x80051340u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051340
  c->r[0]=c->lr; // 80051344
  cmps(c,0,(int32_t)c->r[3],0); // 80051348
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005134C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80051350
  c->r[31]=c->r[4]|c->r[4]; // 80051354
  W32(c->r[1]+0x00000018u,c->r[30]); // 80051358
  c->r[30]=c->r[3]|c->r[3]; // 8005135C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80051360
  if (crb(c,2)) { goto L_80051490; } // 80051364
  c->r[29]=0u+0xFFFFFFFFu; // 80051368
  goto L_8005140C; // 8005136C
  goto L_800513D8; // 80051370
L_80051374:;
  cmps(c,0,(int32_t)c->r[3],-1); // 80051374
  if (crb(c,2)) { goto L_800513A8; } // 80051378
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8005137C
  c->r[3]=c->r[30]|c->r[30]; // 80051380
  c->r[4]=c->r[30]+c->r[0]; // 80051384
  c->r[12]=R32(c->r[4]+0x00000008u); // 80051388
  c->ctr=c->r[12]; // 8005138C
  if (true) { c->lr=0x80051394u; dispatch(c,c->ctr); } // 80051390
  c->r[3]=R32(c->r[30]+0x000001D4u); // 80051394
  c->r[0]=R32(c->r[30]+0x000001D8u); // 80051398
  W32(c->r[30]+0x000001D0u,c->r[3]); // 8005139C
  W32(c->r[30]+0x000001D4u,c->r[0]); // 800513A0
  goto L_800513B4; // 800513A4
L_800513A8:;
  c->r[0]=R32(c->r[30]+0x000001D8u); // 800513A8
  W32(c->r[30]+0x000001D0u,c->r[29]); // 800513AC
  W32(c->r[30]+0x000001D4u,c->r[0]); // 800513B0
L_800513B4:;
  c->r[0]=R32(c->r[30]+0x000001D4u); // 800513B4
  cmps(c,0,(int32_t)c->r[0],-1); // 800513B8
  if (crb(c,2)) { goto L_800513D8; } // 800513BC
  W32(c->r[30]+0x000001D0u,c->r[0]); // 800513C0
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800513C4
  c->r[3]=c->r[30]|c->r[30]; // 800513C8
  c->r[12]=R32(c->r[30]+c->r[0]); // 800513CC
  c->ctr=c->r[12]; // 800513D0
  if (true) { c->lr=0x800513D8u; dispatch(c,c->ctr); } // 800513D4
L_800513D8:;
  c->r[3]=R32(c->r[30]+0x000001D4u); // 800513D8
  c->r[0]=R32(c->r[30]+0x000001D8u); // 800513DC
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800513E0
  if (!crb(c,2)) { IRQCHK(c); goto L_80051374; } // 800513E4
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800513E8
  c->r[3]=c->r[30]|c->r[30]; // 800513EC
  c->r[4]=c->r[30]+c->r[0]; // 800513F0
  c->r[12]=R32(c->r[4]+0x00000004u); // 800513F4
  c->ctr=c->r[12]; // 800513F8
  if (true) { c->lr=0x80051400u; dispatch(c,c->ctr); } // 800513FC
  c->lr=0x80051404u; f_80071D58(c); // 80051400
  c->r[3]=0u+0x00000001u; // 80051404
  c->lr=0x8005140Cu; f_8021311C(c); // 80051408
L_8005140C:;
  c->r[0]=R8(c->r[30]+0x000001F4u); // 8005140C
  cmps(c,0,(int32_t)c->r[0],0); // 80051410
  if (crb(c,2)) { IRQCHK(c); goto L_800513D8; } // 80051414
  c->r[3]=c->r[30]+0x000003F8u; // 80051418
  c->r[4]=0u+0xFFFFFFFFu; // 8005141C
  c->lr=0x80051424u; f_8021467C(c); // 80051420
  c->r[3]=c->r[30]+0x000003F4u; // 80051424
  c->r[4]=0u+0xFFFFFFFFu; // 80051428
  c->lr=0x80051430u; f_8021467C(c); // 8005142C
  c->r[4]=addc(c,c->r[30],0x00000200u,0); cr0(c,c->r[4]); // 80051430
  if (crb(c,2)) { goto L_80051458; } // 80051434
  c->r[0]=addc(c,c->r[4],0x00000010u,0); cr0(c,c->r[0]); // 80051438
  if (crb(c,2)) { goto L_80051458; } // 8005143C
  c->r[0]=0u+0x00000000u; // 80051440
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80051444
  c->r[3]=c->r[1]+0x0000000Cu; // 80051448
  c->r[5]=0u+0x00000001u; // 8005144C
  c->r[4]=R32(c->r[4]+0x00000010u); // 80051450
  c->lr=0x80051458u; f_8020CBF8(c); // 80051454
L_80051458:;
  c->r[4]=addc(c,c->r[30],0x000001E0u,0); cr0(c,c->r[4]); // 80051458
  if (crb(c,2)) { goto L_80051480; } // 8005145C
  c->r[0]=addc(c,c->r[4],0x0000000Cu,0); cr0(c,c->r[0]); // 80051460
  if (crb(c,2)) { goto L_80051480; } // 80051464
  c->r[0]=0u+0x00000000u; // 80051468
  W8(c->r[1]+0x00000008u,c->r[0]); // 8005146C
  c->r[3]=c->r[1]+0x00000008u; // 80051470
  c->r[5]=0u+0x00000001u; // 80051474
  c->r[4]=R32(c->r[4]+0x0000000Cu); // 80051478
  c->lr=0x80051480u; f_8020CBF8(c); // 8005147C
L_80051480:;
  cmps(c,0,(int32_t)c->r[31],0); // 80051480
  if (!crb(c,1)) { goto L_80051490; } // 80051484
  c->r[3]=c->r[30]|c->r[30]; // 80051488
  c->lr=0x80051490u; f_80210AFC(c); // 8005148C
L_80051490:;
  c->r[3]=c->r[30]|c->r[30]; // 80051490
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80051494
  c->r[30]=R32(c->r[1]+0x00000018u); // 80051498
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005149C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800514A0
  c->lr=c->r[0]; // 800514A4
  c->r[1]=c->r[1]+0x00000020u; // 800514A8
  return; // 800514AC
}

// init__Q24gbla12SaveDataUtilFRCQ34gbla12SaveDataUtil9InitParam
void f_800514B0(Ctx* __restrict c) {
  trace_call(0x800514B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800514B0
  c->r[0]=c->lr; // 800514B4
  c->r[5]=R32(c->r[4]+0x00000008u); // 800514B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 800514BC
  c->r[0]=R32(c->r[4]+0x00000004u); // 800514C0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800514C4
  c->r[31]=c->r[3]|c->r[3]; // 800514C8
  W32(c->r[1]+0x00000028u,c->r[30]); // 800514CC
  W32(c->r[1]+0x00000024u,c->r[29]); // 800514D0
  c->r[29]=c->r[4]|c->r[4]; // 800514D4
  c->r[4]=c->r[5]|c->r[5]; // 800514D8
  W32(c->r[3]+0x00000208u,c->r[0]); // 800514DC
  W32(c->r[3]+0x0000020Cu,c->r[5]); // 800514E0
  c->r[3]=c->r[0]|c->r[0]; // 800514E4
  c->lr=0x800514ECu; f_800521B8(c); // 800514E8
  c->r[4]=R32(c->r[31]+0x00000208u); // 800514EC
  W32(c->r[31]+0x00000200u,c->r[3]); // 800514F0
  c->r[0]=c->r[4]+0x00000001u; // 800514F4
  cmpu(c,0,c->r[0],0x00000009u); // 800514F8
  if (crb(c,1)) { goto L_80051568; } // 800514FC
  c->r[3]=0u+0x802E0000u; // 80051500
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80051504
  c->r[3]=c->r[3]+0x00002688u; // 80051508
  c->r[3]=R32(c->r[3]+c->r[0]); // 8005150C
  c->ctr=c->r[3]; // 80051510
  if (true) { switch (c->ctr) { case 0x80051518u: goto L_80051518; case 0x80051520u: goto L_80051520; case 0x80051528u: goto L_80051528; case 0x80051530u: goto L_80051530; case 0x80051538u: goto L_80051538; case 0x80051540u: goto L_80051540; case 0x80051548u: goto L_80051548; case 0x80051550u: goto L_80051550; case 0x80051558u: goto L_80051558; case 0x80051560u: goto L_80051560; default: break; } dispatch(c,c->ctr); return; } // 80051514
L_80051518:;
  c->r[3]=0u+0x0000005Du; // 80051518
  goto L_8005156C; // 8005151C
L_80051520:;
  c->r[3]=0u+0x00000007u; // 80051520
  goto L_8005156C; // 80051524
L_80051528:;
  c->r[3]=0u+0x00000006u; // 80051528
  goto L_8005156C; // 8005152C
L_80051530:;
  c->r[3]=0u+0x00000007u; // 80051530
  goto L_8005156C; // 80051534
L_80051538:;
  c->r[3]=0u+0x000004ECu; // 80051538
  goto L_8005156C; // 8005153C
L_80051540:;
  c->r[3]=0u+0x0000068Cu; // 80051540
  goto L_8005156C; // 80051544
L_80051548:;
  c->r[3]=0u+0x000003C4u; // 80051548
  goto L_8005156C; // 8005154C
L_80051550:;
  c->r[3]=0u+0x00000401u; // 80051550
  goto L_8005156C; // 80051554
L_80051558:;
  c->r[3]=0u+0x00000000u; // 80051558
  goto L_8005156C; // 8005155C
L_80051560:;
  c->lr=0x80051564u; f_8002978C(c); // 80051560
  goto L_8005156C; // 80051564
L_80051568:;
  c->r[3]=0u+0x00000000u; // 80051568
L_8005156C:;
  W32(c->r[31]+0x00000204u,c->r[3]); // 8005156C
  c->r[30]=0u+0x00000000u; // 80051570
  c->r[3]=c->r[1]+0x00000010u; // 80051574
  c->r[5]=0u+0x00000001u; // 80051578
  W8(c->r[1]+0x00000010u,c->r[30]); // 8005157C
  c->r[4]=R32(c->r[31]+0x00000210u); // 80051580
  c->lr=0x80051588u; f_8020CBF8(c); // 80051584
  c->r[3]=R32(c->r[29]+0x00000010u); // 80051588
  W32(c->r[31]+0x00000210u,c->r[30]); // 8005158C
  c->r[0]=c->r[3]+0x0000001Fu; // 80051590
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; cr0(c,c->r[4]); // 80051594
  W32(c->r[31]+0x00000214u,c->r[4]); // 80051598
  if (crb(c,2)) { goto L_800515D0; } // 8005159C
  c->r[7]=0u+0x802E0000u; // 800515A0
  W8(c->r[1]+0x00000014u,c->r[30]); // 800515A4
  c->r[3]=c->r[1]+0x00000014u; // 800515A8
  c->r[5]=0u+0x00000020u; // 800515AC
  c->r[7]=c->r[7]+0x000026D4u; // 800515B0
  c->r[6]=0u+0x00000001u; // 800515B4
  c->r[8]=0u+0x00000043u; // 800515B8
  c->lr=0x800515C0u; f_8020C0D0(c); // 800515BC
  W32(c->r[31]+0x00000210u,c->r[3]); // 800515C0
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 800515C4
  c->r[5]=R32(c->r[31]+0x00000214u); // 800515C8
  c->lr=0x800515D0u; f_80212C8C(c); // 800515CC
L_800515D0:;
  c->r[3]=c->r[31]+0x00000218u; // 800515D0
  c->r[4]=0u+0x00000000u; // 800515D4
  c->r[5]=0u+0x0000008Cu; // 800515D8
  c->lr=0x800515E0u; f_80212C88(c); // 800515DC
  c->r[3]=c->r[31]+0x000002A4u; // 800515E0
  c->r[4]=0u+0x00000000u; // 800515E4
  c->r[5]=0u+0x000000BCu; // 800515E8
  c->lr=0x800515F0u; f_80212C88(c); // 800515EC
  c->r[0]=0u+0xFFFFFFFFu; // 800515F0
  W32(c->r[31]+0x000001E8u,c->r[0]); // 800515F4
  c->r[30]=0u+0x00000000u; // 800515F8
  c->r[3]=c->r[1]+0x0000000Cu; // 800515FC
  W32(c->r[31]+0x000001E0u,c->r[30]); // 80051600
  c->r[5]=0u+0x00000001u; // 80051604
  W32(c->r[31]+0x000001E4u,c->r[30]); // 80051608
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 8005160C
  c->r[4]=R32(c->r[31]+0x000001ECu); // 80051610
  c->lr=0x80051618u; f_8020CBF8(c); // 80051614
  cmps(c,0,(int32_t)c->r[30],0); // 80051618
  W32(c->r[31]+0x000001ECu,c->r[30]); // 8005161C
  W32(c->r[31]+0x000001F0u,c->r[30]); // 80051620
  if (crb(c,2)) { goto L_8005165C; } // 80051624
  c->r[7]=0u+0x802E0000u; // 80051628
  W8(c->r[1]+0x00000008u,c->r[30]); // 8005162C
  c->r[3]=c->r[1]+0x00000008u; // 80051630
  c->r[4]=0u+0x00000000u; // 80051634
  c->r[7]=c->r[7]+0x000026FCu; // 80051638
  c->r[5]=0u+0x00000020u; // 8005163C
  c->r[6]=0u+0x00000001u; // 80051640
  c->r[8]=0u+0x00000058u; // 80051644
  c->lr=0x8005164Cu; f_8020C0D0(c); // 80051648
  W32(c->r[31]+0x000001ECu,c->r[3]); // 8005164C
  c->r[4]=0u+0x00000000u; // 80051650
  c->r[5]=R32(c->r[31]+0x000001F0u); // 80051654
  c->lr=0x8005165Cu; f_80212C88(c); // 80051658
L_8005165C:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 8005165C
  c->r[0]=0u+0x00000000u; // 80051660
  W8(c->r[31]+0x000001F4u,c->r[0]); // 80051664
  cmps(c,0,(int32_t)c->r[3],0); // 80051668
  W32(c->r[31]+0x000001F8u,c->r[0]); // 8005166C
  W32(c->r[31]+0x000001FCu,c->r[0]); // 80051670
  if (crb(c,2)) { goto L_800516AC; } // 80051674
  cmps(c,0,(int32_t)c->r[3],1); // 80051678
  if (crb(c,2)) { goto L_800516B8; } // 8005167C
  cmps(c,0,(int32_t)c->r[3],2); // 80051680
  if (crb(c,2)) { goto L_800516C4; } // 80051684
  cmps(c,0,(int32_t)c->r[3],3); // 80051688
  if (crb(c,2)) { goto L_800516D0; } // 8005168C
  cmps(c,0,(int32_t)c->r[3],4); // 80051690
  if (crb(c,2)) { goto L_800516DC; } // 80051694
  cmps(c,0,(int32_t)c->r[3],5); // 80051698
  if (crb(c,2)) { goto L_800516E8; } // 8005169C
  cmps(c,0,(int32_t)c->r[3],6); // 800516A0
  if (crb(c,2)) { goto L_800516F4; } // 800516A4
  goto L_800516FC; // 800516A8
L_800516AC:;
  c->r[0]=0u+0x0000001Bu; // 800516AC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516B0
  goto L_800516FC; // 800516B4
L_800516B8:;
  c->r[0]=0u+0x00000001u; // 800516B8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516BC
  goto L_800516FC; // 800516C0
L_800516C4:;
  c->r[0]=0u+0x00000004u; // 800516C4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516C8
  goto L_800516FC; // 800516CC
L_800516D0:;
  c->r[0]=0u+0x00000005u; // 800516D0
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516D4
  goto L_800516FC; // 800516D8
L_800516DC:;
  c->r[0]=0u+0x0000000Cu; // 800516DC
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516E0
  goto L_800516FC; // 800516E4
L_800516E8:;
  c->r[0]=0u+0x0000000Eu; // 800516E8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516EC
  goto L_800516FC; // 800516F0
L_800516F4:;
  c->r[0]=0u+0x00000012u; // 800516F4
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800516F8
L_800516FC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800516FC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80051700
  c->r[30]=R32(c->r[1]+0x00000028u); // 80051704
  c->r[29]=R32(c->r[1]+0x00000024u); // 80051708
  c->lr=c->r[0]; // 8005170C
  c->r[1]=c->r[1]+0x00000030u; // 80051710
  return; // 80051714
}

// proc__Q24gbla12SaveDataUtilFv
void f_80051718(Ctx* __restrict c) {
  trace_call(0x80051718u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051718
  c->r[0]=c->lr; // 8005171C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80051720
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80051724
  c->r[31]=0u+0xFFFFFFFFu; // 80051728
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005172C
  c->r[30]=c->r[3]|c->r[3]; // 80051730
  goto L_8005179C; // 80051734
L_80051738:;
  cmps(c,0,(int32_t)c->r[3],-1); // 80051738
  if (crb(c,2)) { goto L_8005176C; } // 8005173C
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 80051740
  c->r[3]=c->r[30]|c->r[30]; // 80051744
  c->r[4]=c->r[30]+c->r[0]; // 80051748
  c->r[12]=R32(c->r[4]+0x00000008u); // 8005174C
  c->ctr=c->r[12]; // 80051750
  if (true) { c->lr=0x80051758u; dispatch(c,c->ctr); } // 80051754
  c->r[3]=R32(c->r[30]+0x000001D4u); // 80051758
  c->r[0]=R32(c->r[30]+0x000001D8u); // 8005175C
  W32(c->r[30]+0x000001D0u,c->r[3]); // 80051760
  W32(c->r[30]+0x000001D4u,c->r[0]); // 80051764
  goto L_80051778; // 80051768
L_8005176C:;
  c->r[0]=R32(c->r[30]+0x000001D8u); // 8005176C
  W32(c->r[30]+0x000001D0u,c->r[31]); // 80051770
  W32(c->r[30]+0x000001D4u,c->r[0]); // 80051774
L_80051778:;
  c->r[0]=R32(c->r[30]+0x000001D4u); // 80051778
  cmps(c,0,(int32_t)c->r[0],-1); // 8005177C
  if (crb(c,2)) { goto L_8005179C; } // 80051780
  W32(c->r[30]+0x000001D0u,c->r[0]); // 80051784
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80051788
  c->r[3]=c->r[30]|c->r[30]; // 8005178C
  c->r[12]=R32(c->r[30]+c->r[0]); // 80051790
  c->ctr=c->r[12]; // 80051794
  if (true) { c->lr=0x8005179Cu; dispatch(c,c->ctr); } // 80051798
L_8005179C:;
  c->r[3]=R32(c->r[30]+0x000001D4u); // 8005179C
  c->r[0]=R32(c->r[30]+0x000001D8u); // 800517A0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800517A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80051738; } // 800517A8
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800517AC
  c->r[3]=c->r[30]|c->r[30]; // 800517B0
  c->r[4]=c->r[30]+c->r[0]; // 800517B4
  c->r[12]=R32(c->r[4]+0x00000004u); // 800517B8
  c->ctr=c->r[12]; // 800517BC
  if (true) { c->lr=0x800517C4u; dispatch(c,c->ctr); } // 800517C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800517C4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800517C8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800517CC
  c->lr=c->r[0]; // 800517D0
  c->r[1]=c->r[1]+0x00000010u; // 800517D4
  return; // 800517D8
}

// term__Q24gbla12SaveDataUtilFv
void f_800517DC(Ctx* __restrict c) {
  trace_call(0x800517DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800517DC
  c->r[0]=c->lr; // 800517E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800517E4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800517E8
  c->r[31]=c->r[3]|c->r[3]; // 800517EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 800517F0
  c->r[30]=0u+0xFFFFFFFFu; // 800517F4
  W32(c->r[1]+0x00000024u,c->r[29]); // 800517F8
  c->r[29]=0u+0x802A0000u; // 800517FC
  c->r[29]=c->r[29]+0xFFFF93F0u; // 80051800
  goto L_800518B0; // 80051804
L_80051808:;
  c->r[3]=c->r[29]+0x00000A6Au; // 80051808
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005180C
  c->lr=0x80051814u; f_80019994(c); // 80051810
  goto L_8005187C; // 80051814
L_80051818:;
  cmps(c,0,(int32_t)c->r[3],-1); // 80051818
  if (crb(c,2)) { goto L_8005184C; } // 8005181C
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 80051820
  c->r[3]=c->r[31]|c->r[31]; // 80051824
  c->r[4]=c->r[31]+c->r[0]; // 80051828
  c->r[12]=R32(c->r[4]+0x00000008u); // 8005182C
  c->ctr=c->r[12]; // 80051830
  if (true) { c->lr=0x80051838u; dispatch(c,c->ctr); } // 80051834
  c->r[3]=R32(c->r[31]+0x000001D4u); // 80051838
  c->r[0]=R32(c->r[31]+0x000001D8u); // 8005183C
  W32(c->r[31]+0x000001D0u,c->r[3]); // 80051840
  W32(c->r[31]+0x000001D4u,c->r[0]); // 80051844
  goto L_80051858; // 80051848
L_8005184C:;
  c->r[0]=R32(c->r[31]+0x000001D8u); // 8005184C
  W32(c->r[31]+0x000001D0u,c->r[30]); // 80051850
  W32(c->r[31]+0x000001D4u,c->r[0]); // 80051854
L_80051858:;
  c->r[0]=R32(c->r[31]+0x000001D4u); // 80051858
  cmps(c,0,(int32_t)c->r[0],-1); // 8005185C
  if (crb(c,2)) { goto L_8005187C; } // 80051860
  W32(c->r[31]+0x000001D0u,c->r[0]); // 80051864
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80051868
  c->r[3]=c->r[31]|c->r[31]; // 8005186C
  c->r[12]=R32(c->r[31]+c->r[0]); // 80051870
  c->ctr=c->r[12]; // 80051874
  if (true) { c->lr=0x8005187Cu; dispatch(c,c->ctr); } // 80051878
L_8005187C:;
  c->r[3]=R32(c->r[31]+0x000001D4u); // 8005187C
  c->r[0]=R32(c->r[31]+0x000001D8u); // 80051880
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80051884
  if (!crb(c,2)) { IRQCHK(c); goto L_80051818; } // 80051888
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8005188C
  c->r[3]=c->r[31]|c->r[31]; // 80051890
  c->r[4]=c->r[31]+c->r[0]; // 80051894
  c->r[12]=R32(c->r[4]+0x00000004u); // 80051898
  c->ctr=c->r[12]; // 8005189C
  if (true) { c->lr=0x800518A4u; dispatch(c,c->ctr); } // 800518A0
  c->lr=0x800518A8u; f_80071D58(c); // 800518A4
  c->r[3]=0u+0x00000001u; // 800518A8
  c->lr=0x800518B0u; f_8021311C(c); // 800518AC
L_800518B0:;
  c->r[0]=R8(c->r[31]+0x000001F4u); // 800518B0
  cmps(c,0,(int32_t)c->r[0],0); // 800518B4
  if (crb(c,2)) { IRQCHK(c); goto L_80051808; } // 800518B8
  c->r[0]=R32(c->r[31]+0x000001D4u); // 800518BC
  cmps(c,0,(int32_t)c->r[0],-1); // 800518C0
  if (crb(c,2)) { goto L_800518F4; } // 800518C4
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800518C8
  c->r[3]=c->r[31]|c->r[31]; // 800518CC
  c->r[4]=c->r[31]+c->r[0]; // 800518D0
  c->r[12]=R32(c->r[4]+0x00000008u); // 800518D4
  c->ctr=c->r[12]; // 800518D8
  if (true) { c->lr=0x800518E0u; dispatch(c,c->ctr); } // 800518DC
  c->r[3]=R32(c->r[31]+0x000001D4u); // 800518E0
  c->r[0]=R32(c->r[31]+0x000001D8u); // 800518E4
  W32(c->r[31]+0x000001D0u,c->r[3]); // 800518E8
  W32(c->r[31]+0x000001D4u,c->r[0]); // 800518EC
  goto L_80051904; // 800518F0
L_800518F4:;
  c->r[0]=R32(c->r[31]+0x000001D8u); // 800518F4
  c->r[3]=0u+0xFFFFFFFFu; // 800518F8
  W32(c->r[31]+0x000001D0u,c->r[3]); // 800518FC
  W32(c->r[31]+0x000001D4u,c->r[0]); // 80051900
L_80051904:;
  c->r[0]=0u+0xFFFFFFFFu; // 80051904
  W32(c->r[31]+0x000001D0u,c->r[0]); // 80051908
  c->r[30]=0u+0x00000000u; // 8005190C
  c->r[3]=c->r[1]+0x00000010u; // 80051910
  W32(c->r[31]+0x000001D4u,c->r[0]); // 80051914
  c->r[5]=0u+0x00000001u; // 80051918
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005191C
  W8(c->r[1]+0x00000010u,c->r[30]); // 80051920
  c->r[4]=R32(c->r[31]+0x000001ECu); // 80051924
  c->lr=0x8005192Cu; f_8020CBF8(c); // 80051928
  cmps(c,0,(int32_t)c->r[30],0); // 8005192C
  W32(c->r[31]+0x000001ECu,c->r[30]); // 80051930
  W32(c->r[31]+0x000001F0u,c->r[30]); // 80051934
  if (crb(c,2)) { goto L_80051970; } // 80051938
  c->r[7]=0u+0x802E0000u; // 8005193C
  W8(c->r[1]+0x00000014u,c->r[30]); // 80051940
  c->r[3]=c->r[1]+0x00000014u; // 80051944
  c->r[4]=0u+0x00000000u; // 80051948
  c->r[7]=c->r[7]+0x000026FCu; // 8005194C
  c->r[5]=0u+0x00000020u; // 80051950
  c->r[6]=0u+0x00000001u; // 80051954
  c->r[8]=0u+0x00000058u; // 80051958
  c->lr=0x80051960u; f_8020C0D0(c); // 8005195C
  W32(c->r[31]+0x000001ECu,c->r[3]); // 80051960
  c->r[4]=0u+0x00000000u; // 80051964
  c->r[5]=R32(c->r[31]+0x000001F0u); // 80051968
  c->lr=0x80051970u; f_80212C88(c); // 8005196C
L_80051970:;
  c->r[30]=0u+0x00000000u; // 80051970
  W8(c->r[1]+0x00000008u,c->r[30]); // 80051974
  c->r[3]=c->r[1]+0x00000008u; // 80051978
  c->r[5]=0u+0x00000001u; // 8005197C
  c->r[4]=R32(c->r[31]+0x00000210u); // 80051980
  c->lr=0x80051988u; f_8020CBF8(c); // 80051984
  cmps(c,0,(int32_t)c->r[30],0); // 80051988
  W32(c->r[31]+0x00000210u,c->r[30]); // 8005198C
  W32(c->r[31]+0x00000214u,c->r[30]); // 80051990
  if (crb(c,2)) { goto L_800519CC; } // 80051994
  c->r[7]=0u+0x802E0000u; // 80051998
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 8005199C
  c->r[3]=c->r[1]+0x0000000Cu; // 800519A0
  c->r[4]=0u+0x00000000u; // 800519A4
  c->r[7]=c->r[7]+0x000026FCu; // 800519A8
  c->r[5]=0u+0x00000020u; // 800519AC
  c->r[6]=0u+0x00000001u; // 800519B0
  c->r[8]=0u+0x00000058u; // 800519B4
  c->lr=0x800519BCu; f_8020C0D0(c); // 800519B8
  W32(c->r[31]+0x00000210u,c->r[3]); // 800519BC
  c->r[4]=0u+0x00000000u; // 800519C0
  c->r[5]=R32(c->r[31]+0x00000214u); // 800519C4
  c->lr=0x800519CCu; f_80212C88(c); // 800519C8
L_800519CC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800519CC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800519D0
  c->r[30]=R32(c->r[1]+0x00000028u); // 800519D4
  c->r[29]=R32(c->r[1]+0x00000024u); // 800519D8
  c->lr=c->r[0]; // 800519DC
  c->r[1]=c->r[1]+0x00000030u; // 800519E0
  return; // 800519E4
}

// createBannerData__Q24gbla12SaveDataUtilFPQ24NAND6BannerRi
void f_800519E8(Ctx* __restrict c) {
  trace_call(0x800519E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800519E8
  c->r[0]=c->lr; // 800519EC
  c->r[6]=0u+0x802E0000u; // 800519F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800519F4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 800519F8
  c->r[28]=c->r[4]|c->r[4]; // 800519FC
  c->r[29]=c->r[5]|c->r[5]; // 80051A00
  c->r[5]=c->r[6]+0x00002710u; // 80051A04
  c->r[27]=c->r[3]|c->r[3]; // 80051A08
  c->r[3]=c->r[28]|c->r[28]; // 80051A0C
  c->r[6]=c->r[5]+0x0000003Eu; // 80051A10
  c->r[30]=0u+0x00000000u; // 80051A14
  c->r[4]=0u+0x00000011u; // 80051A18
  c->lr=0x80051A20u; f_80071DD8(c); // 80051A1C
  c->r[3]=c->r[27]+0x000003F4u; // 80051A20
  c->lr=0x80051A28u; f_802141D8(c); // 80051A24
  cmps(c,0,(int32_t)c->r[3],24576); // 80051A28
  if (!crb(c,2)) { goto L_80051AFC; } // 80051A2C
  c->r[3]=c->r[27]+0x000003F4u; // 80051A30
  c->lr=0x80051A38u; f_802141D8(c); // 80051A34
  c->r[31]=c->r[3]|c->r[3]; // 80051A38
  c->r[3]=c->r[27]+0x000003F4u; // 80051A3C
  c->lr=0x80051A44u; f_80214228(c); // 80051A40
  c->r[4]=c->r[3]|c->r[3]; // 80051A44
  c->r[5]=c->r[31]|c->r[31]; // 80051A48
  c->r[3]=c->r[28]+0x000000A0u; // 80051A4C
  c->lr=0x80051A54u; f_80212C8C(c); // 80051A50
  c->r[3]=c->r[27]+0x000003F4u; // 80051A54
  c->lr=0x80051A5Cu; f_80214934(c); // 80051A58
  c->r[3]=c->r[27]+0x000003F8u; // 80051A5C
  c->lr=0x80051A64u; f_802141D8(c); // 80051A60
  c->r[4]=0u+0x38E40000u; // 80051A64
  c->r[0]=c->r[4]+0xFFFF8E39u; // 80051A68
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 80051A6C
  c->r[0]=sraw(c,c->r[0],10); // 80051A70
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80051A74
  c->r[0]=c->r[0]+c->r[3]; cr0(c,c->r[0]); // 80051A78
  W32(c->r[29]+0x00000000u,c->r[0]); // 80051A7C
  if (crb(c,2)) { goto L_80051AFC; } // 80051A80
  c->r[3]=c->r[27]+0x000003F8u; // 80051A84
  c->lr=0x80051A8Cu; f_802141D8(c); // 80051A88
  c->r[31]=c->r[3]|c->r[3]; // 80051A8C
  c->r[3]=c->r[27]+0x000003F8u; // 80051A90
  c->lr=0x80051A98u; f_80214228(c); // 80051A94
  c->r[4]=c->r[3]|c->r[3]; // 80051A98
  c->r[5]=c->r[31]|c->r[31]; // 80051A9C
  c->r[3]=c->r[28]+0x000060A0u; // 80051AA0
  c->lr=0x80051AA8u; f_80212C8C(c); // 80051AA4
  c->r[3]=c->r[27]+0x000003F8u; // 80051AA8
  c->lr=0x80051AB0u; f_80214934(c); // 80051AAC
  c->r[30]=0u+0x00000000u; // 80051AB0
  goto L_80051ACC; // 80051AB4
L_80051AB8:;
  c->r[3]=c->r[28]|c->r[28]; // 80051AB8
  c->r[4]=c->r[30]|c->r[30]; // 80051ABC
  c->r[5]=0u+0x00000002u; // 80051AC0
  c->lr=0x80051AC8u; f_80071DDC(c); // 80051AC4
  c->r[30]=c->r[30]+0x00000001u; // 80051AC8
L_80051ACC:;
  c->r[4]=R32(c->r[29]+0x00000000u); // 80051ACC
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[4]); // 80051AD0
  if (crb(c,0)) { IRQCHK(c); goto L_80051AB8; } // 80051AD4
  cmps(c,0,(int32_t)c->r[4],8); // 80051AD8
  if (!crb(c,0)) { goto L_80051AEC; } // 80051ADC
  c->r[3]=c->r[28]|c->r[28]; // 80051AE0
  c->r[5]=0u+0x00000000u; // 80051AE4
  c->lr=0x80051AECu; f_80071DDC(c); // 80051AE8
L_80051AEC:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 80051AEC
  c->r[30]=0u+0x00000001u; // 80051AF0
  c->r[0]=c->r[0]|0x00000010u; // 80051AF4
  W32(c->r[28]+0x00000004u,c->r[0]); // 80051AF8
L_80051AFC:;
  c->r[3]=c->r[30]|c->r[30]; // 80051AFC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051B00
  c->r[0]=R32(c->r[1]+0x00000024u); // 80051B04
  c->lr=c->r[0]; // 80051B08
  c->r[1]=c->r[1]+0x00000020u; // 80051B0C
  return; // 80051B10
}

// createBannerIcon__Q24gbla12SaveDataUtilFv
void f_80051B14(Ctx* __restrict c) {
  trace_call(0x80051B14u);
  {uint32_t ea=c->r[1]+0xFFFFFF10u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051B14
  c->r[0]=c->lr; // 80051B18
  c->r[5]=0u+0x00000020u; // 80051B1C
  c->r[6]=0u+0x00000001u; // 80051B20
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80051B24
  c->r[8]=0u+0x0000017Eu; // 80051B28
  W32(c->r[1]+0x000000ECu,c->r[31]); // 80051B2C
  c->r[31]=0u+0x802A0000u; // 80051B30
  c->r[31]=c->r[31]+0xFFFF93F0u; // 80051B34
  W32(c->r[1]+0x000000E8u,c->r[30]); // 80051B38
  c->r[30]=0u+0x00010000u; // 80051B3C
  c->r[4]=c->r[30]+0xFFFFF0A0u; // 80051B40
  c->r[7]=c->r[31]+0x00000A88u; // 80051B44
  W32(c->r[1]+0x000000E4u,c->r[29]); // 80051B48
  W32(c->r[1]+0x000000E0u,c->r[28]); // 80051B4C
  c->r[28]=c->r[3]|c->r[3]; // 80051B50
  c->r[3]=c->r[1]+0x00000008u; // 80051B54
  c->lr=0x80051B5Cu; f_8020C0D0(c); // 80051B58
  c->r[29]=c->r[3]|c->r[3]; // 80051B5C
  c->r[5]=c->r[30]+0xFFFFF0A0u; // 80051B60
  c->r[4]=0u+0x00000000u; // 80051B64
  c->lr=0x80051B6Cu; f_80212C88(c); // 80051B68
  c->r[3]=c->r[1]+0x00000010u; // 80051B6C
  c->lr=0x80051B74u; f_80071D8C(c); // 80051B70
  c->r[3]=c->r[1]+0x00000010u; // 80051B74
  c->r[6]=R32(c->r[13]+0xFFFF815Cu); // 80051B78
  c->r[4]=c->r[31]|c->r[31]; // 80051B7C
  c->r[5]=c->r[3]|c->r[3]; // 80051B80
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051B84
  c->lr=0x80051B8Cu; f_800B5FD4(c); // 80051B88
  c->r[3]=c->r[1]+0x00000010u; // 80051B8C
  c->r[4]=0u+0x00000030u; // 80051B90
  c->r[5]=0u+0x00000000u; // 80051B94
  c->lr=0x80051B9Cu; f_80071DC4(c); // 80051B98
  cmps(c,0,(int32_t)c->r[3],0); // 80051B9C
  W32(c->r[28]+0x000003E4u,c->r[3]); // 80051BA0
  if (crb(c,2)) { goto L_80051BD8; } // 80051BA4
  c->r[4]=c->r[3]|c->r[3]; // 80051BA8
  c->r[3]=c->r[31]+0x00000A9Eu; // 80051BAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051BB0
  c->lr=0x80051BB8u; f_80019994(c); // 80051BB4
  c->r[0]=0u+0x0000001Cu; // 80051BB8
  W32(c->r[28]+0x000001D8u,c->r[0]); // 80051BBC
  c->r[4]=c->r[29]|c->r[29]; // 80051BC0
  c->r[3]=c->r[1]+0x00000008u; // 80051BC4
  c->r[5]=0u+0x00000001u; // 80051BC8
  c->lr=0x80051BD0u; f_8020CBF8(c); // 80051BCC
  c->r[3]=R32(c->r[28]+0x000003E4u); // 80051BD0
  goto L_80051D1C; // 80051BD4
L_80051BD8:;
  c->r[3]=c->r[1]+0x00000050u; // 80051BD8
  c->r[4]=0u+0x00000000u; // 80051BDC
  c->r[5]=0u+0x0000008Cu; // 80051BE0
  c->lr=0x80051BE8u; f_80212C88(c); // 80051BE4
  c->r[3]=c->r[1]+0x00000010u; // 80051BE8
  c->r[4]=c->r[1]+0x00000050u; // 80051BEC
  c->r[5]=0u+0x00000002u; // 80051BF0
  c->lr=0x80051BF8u; f_80071DC8(c); // 80051BF4
  cmps(c,0,(int32_t)c->r[3],0); // 80051BF8
  W32(c->r[28]+0x000003E4u,c->r[3]); // 80051BFC
  if (crb(c,2)) { goto L_80051C2C; } // 80051C00
  c->r[4]=c->r[3]|c->r[3]; // 80051C04
  c->r[3]=c->r[31]+0x00000AB5u; // 80051C08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051C0C
  c->lr=0x80051C14u; f_80019994(c); // 80051C10
  c->r[4]=c->r[29]|c->r[29]; // 80051C14
  c->r[3]=c->r[1]+0x00000008u; // 80051C18
  c->r[5]=0u+0x00000001u; // 80051C1C
  c->lr=0x80051C24u; f_8020CBF8(c); // 80051C20
  c->r[3]=R32(c->r[28]+0x000003E4u); // 80051C24
  goto L_80051D1C; // 80051C28
L_80051C2C:;
  c->r[0]=0u+0x00000000u; // 80051C2C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80051C30
  c->r[3]=c->r[28]|c->r[28]; // 80051C34
  c->r[4]=c->r[29]|c->r[29]; // 80051C38
  c->r[5]=c->r[1]+0x0000000Cu; // 80051C3C
  c->lr=0x80051C44u; f_800519E8(c); // 80051C40
  cmps(c,0,(int32_t)c->r[3],0); // 80051C44
  if (!crb(c,2)) { goto L_80051C6C; } // 80051C48
  c->r[3]=c->r[1]+0x00000050u; // 80051C4C
  c->lr=0x80051C54u; f_80071D74(c); // 80051C50
  c->r[4]=c->r[29]|c->r[29]; // 80051C54
  c->r[3]=c->r[1]+0x00000008u; // 80051C58
  c->r[5]=0u+0x00000001u; // 80051C5C
  c->lr=0x80051C64u; f_8020CBF8(c); // 80051C60
  c->r[3]=0u+0xFFFFFFC0u; // 80051C64
  goto L_80051D1C; // 80051C68
L_80051C6C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80051C6C
  c->r[4]=c->r[29]|c->r[29]; // 80051C70
  c->r[3]=c->r[1]+0x00000050u; // 80051C74
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)4608); // 80051C78
  c->r[5]=c->r[5]+0x000060A0u; // 80051C7C
  c->lr=0x80051C84u; f_80071DCC(c); // 80051C80
  W32(c->r[28]+0x000003E4u,c->r[3]); // 80051C84
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80051C88
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)4608); // 80051C8C
  c->r[0]=c->r[4]+0x000060A0u; // 80051C90
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80051C94
  if (crb(c,2)) { goto L_80051CCC; } // 80051C98
  c->r[4]=c->r[3]|c->r[3]; // 80051C9C
  c->r[3]=c->r[31]+0x00000ACBu; // 80051CA0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051CA4
  c->lr=0x80051CACu; f_80019994(c); // 80051CA8
  c->r[3]=c->r[1]+0x00000050u; // 80051CAC
  c->lr=0x80051CB4u; f_80071D74(c); // 80051CB0
  c->r[4]=c->r[29]|c->r[29]; // 80051CB4
  c->r[3]=c->r[1]+0x00000008u; // 80051CB8
  c->r[5]=0u+0x00000001u; // 80051CBC
  c->lr=0x80051CC4u; f_8020CBF8(c); // 80051CC0
  c->r[3]=R32(c->r[28]+0x000003E4u); // 80051CC4
  goto L_80051D1C; // 80051CC8
L_80051CCC:;
  c->r[3]=c->r[1]+0x00000050u; // 80051CCC
  c->lr=0x80051CD4u; f_80071D74(c); // 80051CD0
  cmps(c,0,(int32_t)c->r[3],0); // 80051CD4
  W32(c->r[28]+0x000003E4u,c->r[3]); // 80051CD8
  if (crb(c,2)) { goto L_80051D08; } // 80051CDC
  c->r[4]=c->r[3]|c->r[3]; // 80051CE0
  c->r[3]=c->r[31]+0x00000AE1u; // 80051CE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051CE8
  c->lr=0x80051CF0u; f_80019994(c); // 80051CEC
  c->r[4]=c->r[29]|c->r[29]; // 80051CF0
  c->r[3]=c->r[1]+0x00000008u; // 80051CF4
  c->r[5]=0u+0x00000001u; // 80051CF8
  c->lr=0x80051D00u; f_8020CBF8(c); // 80051CFC
  c->r[3]=R32(c->r[28]+0x000003E4u); // 80051D00
  goto L_80051D1C; // 80051D04
L_80051D08:;
  c->r[4]=c->r[29]|c->r[29]; // 80051D08
  c->r[3]=c->r[1]+0x00000008u; // 80051D0C
  c->r[5]=0u+0x00000001u; // 80051D10
  c->lr=0x80051D18u; f_8020CBF8(c); // 80051D14
  c->r[3]=0u+0x00000000u; // 80051D18
L_80051D1C:;
  c->r[0]=R32(c->r[1]+0x000000F4u); // 80051D1C
  c->r[31]=R32(c->r[1]+0x000000ECu); // 80051D20
  c->r[30]=R32(c->r[1]+0x000000E8u); // 80051D24
  c->r[29]=R32(c->r[1]+0x000000E4u); // 80051D28
  c->r[28]=R32(c->r[1]+0x000000E0u); // 80051D2C
  c->lr=c->r[0]; // 80051D30
  c->r[1]=c->r[1]+0x000000F0u; // 80051D34
  return; // 80051D38
}

// compareBannerData__Q24gbla12SaveDataUtilFv
void f_80051D3C(Ctx* __restrict c) {
  trace_call(0x80051D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051D3C
  c->r[0]=c->lr; // 80051D40
  c->r[5]=0u+0x00000020u; // 80051D44
  c->r[6]=0u+0x00000001u; // 80051D48
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80051D4C
  c->r[8]=0u+0x000001BCu; // 80051D50
  {uint32_t ea=c->r[1]+0x000000ACu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80051D54
  c->r[31]=0u+0x802A0000u; // 80051D58
  c->r[30]=0u+0x00010000u; // 80051D5C
  c->r[27]=c->r[3]|c->r[3]; // 80051D60
  c->r[31]=c->r[31]+0xFFFF93F0u; // 80051D64
  c->r[3]=c->r[1]+0x00000008u; // 80051D68
  c->r[4]=c->r[30]+0xFFFFF0A0u; // 80051D6C
  c->r[7]=c->r[31]+0x00000A88u; // 80051D70
  c->lr=0x80051D78u; f_8020C0D0(c); // 80051D74
  c->r[29]=c->r[3]|c->r[3]; // 80051D78
  c->r[5]=c->r[30]+0xFFFFF0A0u; // 80051D7C
  c->r[4]=0u+0x00000000u; // 80051D80
  c->lr=0x80051D88u; f_80212C88(c); // 80051D84
  c->r[3]=c->r[1]+0x00000008u; // 80051D88
  c->r[4]=c->r[30]+0xFFFFF0A0u; // 80051D8C
  c->r[7]=c->r[31]+0x00000A88u; // 80051D90
  c->r[5]=0u+0x00000020u; // 80051D94
  c->r[6]=0u+0x00000001u; // 80051D98
  c->r[8]=0u+0x000001BEu; // 80051D9C
  c->lr=0x80051DA4u; f_8020C0D0(c); // 80051DA0
  c->r[28]=c->r[3]|c->r[3]; // 80051DA4
  c->r[5]=c->r[30]+0xFFFFF0A0u; // 80051DA8
  c->r[4]=0u+0x00000000u; // 80051DAC
  c->lr=0x80051DB4u; f_80212C88(c); // 80051DB0
  c->r[0]=0u+0x00000000u; // 80051DB4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80051DB8
  c->r[3]=c->r[27]|c->r[27]; // 80051DBC
  c->r[4]=c->r[29]|c->r[29]; // 80051DC0
  c->r[5]=c->r[1]+0x0000000Cu; // 80051DC4
  c->lr=0x80051DCCu; f_800519E8(c); // 80051DC8
  cmps(c,0,(int32_t)c->r[3],0); // 80051DCC
  if (!crb(c,2)) { goto L_80051DFC; } // 80051DD0
  c->r[4]=c->r[29]|c->r[29]; // 80051DD4
  c->r[3]=c->r[1]+0x00000008u; // 80051DD8
  c->r[5]=0u+0x00000001u; // 80051DDC
  c->lr=0x80051DE4u; f_8020CBF8(c); // 80051DE0
  c->r[4]=c->r[28]|c->r[28]; // 80051DE4
  c->r[3]=c->r[1]+0x00000008u; // 80051DE8
  c->r[5]=0u+0x00000001u; // 80051DEC
  c->lr=0x80051DF4u; f_8020CBF8(c); // 80051DF0
  c->r[3]=0u+0x00000000u; // 80051DF4
  goto L_80051F58; // 80051DF8
L_80051DFC:;
  c->r[3]=c->r[1]+0x00000010u; // 80051DFC
  c->r[4]=0u+0x00000000u; // 80051E00
  c->r[5]=0u+0x0000008Cu; // 80051E04
  c->lr=0x80051E0Cu; f_80212C88(c); // 80051E08
  c->r[3]=c->r[27]+0x000003A0u; // 80051E0C
  c->r[4]=c->r[1]+0x00000010u; // 80051E10
  c->r[5]=0u+0x00000001u; // 80051E14
  c->lr=0x80051E1Cu; f_80071DC8(c); // 80051E18
  cmps(c,0,(int32_t)c->r[3],0); // 80051E1C
  W32(c->r[27]+0x000003E4u,c->r[3]); // 80051E20
  if (crb(c,2)) { goto L_80051E60; } // 80051E24
  c->r[4]=c->r[3]|c->r[3]; // 80051E28
  c->r[3]=c->r[31]+0x00000AB5u; // 80051E2C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051E30
  c->lr=0x80051E38u; f_80019994(c); // 80051E34
  c->r[4]=c->r[29]|c->r[29]; // 80051E38
  c->r[3]=c->r[1]+0x00000008u; // 80051E3C
  c->r[5]=0u+0x00000001u; // 80051E40
  c->lr=0x80051E48u; f_8020CBF8(c); // 80051E44
  c->r[4]=c->r[28]|c->r[28]; // 80051E48
  c->r[3]=c->r[1]+0x00000008u; // 80051E4C
  c->r[5]=0u+0x00000001u; // 80051E50
  c->lr=0x80051E58u; f_8020CBF8(c); // 80051E54
  c->r[3]=0u+0x00000000u; // 80051E58
  goto L_80051F58; // 80051E5C
L_80051E60:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80051E60
  c->r[4]=c->r[28]|c->r[28]; // 80051E64
  c->r[3]=c->r[1]+0x00000010u; // 80051E68
  c->r[5]=(uint32_t)((int32_t)c->r[0]*(int32_t)4608); // 80051E6C
  c->r[5]=c->r[5]+0x000060A0u; // 80051E70
  c->lr=0x80051E78u; f_80071DD0(c); // 80051E74
  W32(c->r[27]+0x000003E4u,c->r[3]); // 80051E78
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80051E7C
  c->r[4]=(uint32_t)((int32_t)c->r[0]*(int32_t)4608); // 80051E80
  c->r[0]=c->r[4]+0x000060A0u; // 80051E84
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80051E88
  if (crb(c,2)) { goto L_80051ED0; } // 80051E8C
  c->r[4]=c->r[3]|c->r[3]; // 80051E90
  c->r[3]=c->r[31]+0x00000AFBu; // 80051E94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051E98
  c->lr=0x80051EA0u; f_80019994(c); // 80051E9C
  c->r[3]=c->r[1]+0x00000010u; // 80051EA0
  c->lr=0x80051EA8u; f_80071D74(c); // 80051EA4
  c->r[4]=c->r[29]|c->r[29]; // 80051EA8
  c->r[3]=c->r[1]+0x00000008u; // 80051EAC
  c->r[5]=0u+0x00000001u; // 80051EB0
  c->lr=0x80051EB8u; f_8020CBF8(c); // 80051EB4
  c->r[4]=c->r[28]|c->r[28]; // 80051EB8
  c->r[3]=c->r[1]+0x00000008u; // 80051EBC
  c->r[5]=0u+0x00000001u; // 80051EC0
  c->lr=0x80051EC8u; f_8020CBF8(c); // 80051EC4
  c->r[3]=0u+0x00000000u; // 80051EC8
  goto L_80051F58; // 80051ECC
L_80051ED0:;
  c->r[3]=c->r[1]+0x00000010u; // 80051ED0
  c->lr=0x80051ED8u; f_80071D74(c); // 80051ED4
  cmps(c,0,(int32_t)c->r[3],0); // 80051ED8
  W32(c->r[27]+0x000003E4u,c->r[3]); // 80051EDC
  if (crb(c,2)) { goto L_80051F1C; } // 80051EE0
  c->r[4]=c->r[3]|c->r[3]; // 80051EE4
  c->r[3]=c->r[31]+0x00000AE1u; // 80051EE8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051EEC
  c->lr=0x80051EF4u; f_80019994(c); // 80051EF0
  c->r[4]=c->r[29]|c->r[29]; // 80051EF4
  c->r[3]=c->r[1]+0x00000008u; // 80051EF8
  c->r[5]=0u+0x00000001u; // 80051EFC
  c->lr=0x80051F04u; f_8020CBF8(c); // 80051F00
  c->r[4]=c->r[28]|c->r[28]; // 80051F04
  c->r[3]=c->r[1]+0x00000008u; // 80051F08
  c->r[5]=0u+0x00000001u; // 80051F0C
  c->lr=0x80051F14u; f_8020CBF8(c); // 80051F10
  c->r[3]=0u+0x00000000u; // 80051F14
  goto L_80051F58; // 80051F18
L_80051F1C:;
  c->r[3]=c->r[28]|c->r[28]; // 80051F1C
  c->r[4]=c->r[29]|c->r[29]; // 80051F20
  c->r[5]=c->r[30]+0xFFFFF0A0u; // 80051F24
  c->lr=0x80051F2Cu; f_800B3824(c); // 80051F28
  c->r[0]=cntlz(c->r[3]); // 80051F2C
  c->r[4]=c->r[29]|c->r[29]; // 80051F30
  c->r[29]=rotl(c->r[0],27)&0x07FFFFFFu; // 80051F34
  c->r[3]=c->r[1]+0x00000008u; // 80051F38
  c->r[5]=0u+0x00000001u; // 80051F3C
  c->lr=0x80051F44u; f_8020CBF8(c); // 80051F40
  c->r[4]=c->r[28]|c->r[28]; // 80051F44
  c->r[3]=c->r[1]+0x00000008u; // 80051F48
  c->r[5]=0u+0x00000001u; // 80051F4C
  c->lr=0x80051F54u; f_8020CBF8(c); // 80051F50
  c->r[3]=c->r[29]|c->r[29]; // 80051F54
L_80051F58:;
  {uint32_t ea=c->r[1]+0x000000ACu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80051F58
  c->r[0]=R32(c->r[1]+0x000000C4u); // 80051F5C
  c->lr=c->r[0]; // 80051F60
  c->r[1]=c->r[1]+0x000000C0u; // 80051F64
  return; // 80051F68
}

// calcProc__Q24gbla12SaveDataUtilFRCQ25Alice12ModeType<16>
void f_80051F6C(Ctx* __restrict c) {
  trace_call(0x80051F6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80051F6C
  c->r[0]=c->lr; // 80051F70
  W32(c->r[1]+0x00000044u,c->r[0]); // 80051F74
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80051F78
  c->r[31]=c->r[3]|c->r[3]; // 80051F7C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80051F80
  W32(c->r[1]+0x00000034u,c->r[29]); // 80051F84
  c->r[0]=R8(c->r[3]+0x000003E0u); // 80051F88
  cmps(c,0,(int32_t)c->r[0],0); // 80051F8C
  if (!crb(c,2)) { goto L_8005219C; } // 80051F90
  c->r[4]=R32(c->r[3]+0x000003E4u); // 80051F94
  cmps(c,0,(int32_t)c->r[4],0); // 80051F98
  if (!crb(c,1)) { goto L_80052124; } // 80051F9C
  c->r[30]=0u+0x802A0000u; // 80051FA0
  c->r[30]=c->r[30]+0xFFFF93F0u; // 80051FA4
  c->r[3]=c->r[30]+0x00000B10u; // 80051FA8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051FAC
  c->lr=0x80051FB4u; f_80019994(c); // 80051FB0
  c->r[0]=R32(c->r[31]+0x00000208u); // 80051FB4
  cmps(c,0,(int32_t)c->r[0],8); // 80051FB8
  if (!crb(c,2)) { goto L_800520F0; } // 80051FBC
  c->lr=0x80051FC4u; f_80029780(c); // 80051FC0
  c->r[4]=R32(c->r[31]+0x000001ECu); // 80051FC4
  c->r[29]=c->r[3]|c->r[3]; // 80051FC8
  c->r[5]=R32(c->r[31]+0x000001F0u); // 80051FCC
  c->r[3]=c->r[1]+0x00000018u; // 80051FD0
  c->lr=0x80051FD8u; f_8020A420(c); // 80051FD4
  c->r[3]=c->r[29]|c->r[29]; // 80051FD8
  c->r[4]=c->r[1]+0x00000018u; // 80051FDC
  c->lr=0x80051FE4u; f_8002A124(c); // 80051FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80051FE4
  if (crb(c,2)) { goto L_800520A0; } // 80051FE8
  c->r[3]=c->r[30]+0x00000B28u; // 80051FEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80051FF0
  c->lr=0x80051FF8u; f_80019994(c); // 80051FF4
  c->r[4]=R32(c->r[31]+0x000001ECu); // 80051FF8
  c->r[3]=c->r[1]+0x00000008u; // 80051FFC
  c->r[5]=R32(c->r[31]+0x000001F0u); // 80052000
  c->lr=0x80052008u; f_8020A420(c); // 80052004
  c->r[3]=c->r[1]+0x00000008u; // 80052008
  c->r[4]=c->r[31]+0x000003E8u; // 8005200C
  c->r[5]=c->r[31]+0x000003ECu; // 80052010
  c->r[6]=c->r[31]+0x000003F0u; // 80052014
  c->lr=0x8005201Cu; f_8002AE7C(c); // 80052018
  cmps(c,0,(int32_t)c->r[3],0); // 8005201C
  if (crb(c,2)) { goto L_80052064; } // 80052020
  c->r[3]=c->r[30]+0x00000B46u; // 80052024
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052028
  c->lr=0x80052030u; f_80019994(c); // 8005202C
  c->r[4]=R32(c->r[31]+0x000001D8u); // 80052030
  c->r[3]=0u+0x8D3E0000u; // 80052034
  c->r[0]=c->r[3]+0xFFFFCB09u; // 80052038
  c->r[4]=c->r[4]+0x00000001u; // 8005203C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80052040
  c->r[0]=c->r[0]+c->r[4]; // 80052044
  c->r[0]=sraw(c,c->r[0],4); // 80052048
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005204C
  c->r[0]=c->r[0]+c->r[3]; // 80052050
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80052054
  c->r[0]=c->r[4]-c->r[0]; // 80052058
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005205C
  goto L_80052090; // 80052060
L_80052064:;
  c->r[3]=c->r[30]+0x00000B60u; // 80052064
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052068
  c->lr=0x80052070u; f_80019994(c); // 8005206C
  c->r[3]=c->r[31]+0x00000218u; // 80052070
  c->lr=0x80052078u; f_80071D74(c); // 80052074
  c->r[3]=c->r[31]+0x00000218u; // 80052078
  c->r[4]=0u+0x00000000u; // 8005207C
  c->r[5]=0u+0x0000008Cu; // 80052080
  c->lr=0x80052088u; f_80212C88(c); // 80052084
  c->r[0]=0u+0x00000016u; // 80052088
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005208C
L_80052090:;
  c->r[3]=c->r[1]+0x00000008u; // 80052090
  c->r[4]=0u+0xFFFFFFFFu; // 80052094
  c->lr=0x8005209Cu; f_8020A43C(c); // 80052098
  goto L_800520E0; // 8005209C
L_800520A0:;
  c->r[3]=c->r[29]|c->r[29]; // 800520A0
  c->lr=0x800520A8u; f_8002ADD4(c); // 800520A4
  c->r[4]=R32(c->r[31]+0x000003E4u); // 800520A8
  c->r[3]=c->r[30]+0x00000B7Au; // 800520AC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800520B0
  c->lr=0x800520B8u; f_80019994(c); // 800520B4
  c->r[3]=c->r[31]+0x00000218u; // 800520B8
  c->lr=0x800520C0u; f_80071D74(c); // 800520BC
  c->r[3]=c->r[31]+0x00000218u; // 800520C0
  c->r[4]=0u+0x00000000u; // 800520C4
  c->r[5]=0u+0x0000008Cu; // 800520C8
  c->lr=0x800520D0u; f_80212C88(c); // 800520CC
  c->r[3]=0u+0xFFFFFFF1u; // 800520D0
  c->r[0]=0u+0x0000001Cu; // 800520D4
  W32(c->r[31]+0x000003E4u,c->r[3]); // 800520D8
  W32(c->r[31]+0x000001D8u,c->r[0]); // 800520DC
L_800520E0:;
  c->r[3]=c->r[1]+0x00000018u; // 800520E0
  c->r[4]=0u+0xFFFFFFFFu; // 800520E4
  c->lr=0x800520ECu; f_8020A43C(c); // 800520E8
  goto L_8005219C; // 800520EC
L_800520F0:;
  c->r[4]=R32(c->r[31]+0x000001D8u); // 800520F0
  c->r[3]=0u+0x8D3E0000u; // 800520F4
  c->r[0]=c->r[3]+0xFFFFCB09u; // 800520F8
  c->r[4]=c->r[4]+0x00000001u; // 800520FC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80052100
  c->r[0]=c->r[0]+c->r[4]; // 80052104
  c->r[0]=sraw(c,c->r[0],4); // 80052108
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005210C
  c->r[0]=c->r[0]+c->r[3]; // 80052110
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)29); // 80052114
  c->r[0]=c->r[4]-c->r[0]; // 80052118
  W32(c->r[31]+0x000001D8u,c->r[0]); // 8005211C
  goto L_8005219C; // 80052120
L_80052124:;
  if (!crb(c,2)) { goto L_80052168; } // 80052124
  c->r[3]=0u+0x802A0000u; // 80052128
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8005212C
  c->r[3]=c->r[3]+0x00000B9Cu; // 80052130
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052134
  c->lr=0x8005213Cu; f_80019994(c); // 80052138
  c->r[3]=c->r[31]+0x00000218u; // 8005213C
  c->lr=0x80052144u; f_80071D74(c); // 80052140
  c->r[3]=c->r[31]+0x00000218u; // 80052144
  c->r[4]=0u+0x00000000u; // 80052148
  c->r[5]=0u+0x0000008Cu; // 8005214C
  c->lr=0x80052154u; f_80212C88(c); // 80052150
  c->r[3]=0u+0xFFFFFFF1u; // 80052154
  c->r[0]=0u+0x0000001Cu; // 80052158
  W32(c->r[31]+0x000003E4u,c->r[3]); // 8005215C
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80052160
  goto L_8005219C; // 80052164
L_80052168:;
  c->r[3]=0u+0x802A0000u; // 80052168
  c->r[3]=c->r[3]+0xFFFF93F0u; // 8005216C
  c->r[3]=c->r[3]+0x00000BB7u; // 80052170
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052174
  c->lr=0x8005217Cu; f_80019994(c); // 80052178
  c->r[3]=c->r[31]+0x00000218u; // 8005217C
  c->lr=0x80052184u; f_80071D74(c); // 80052180
  c->r[3]=c->r[31]+0x00000218u; // 80052184
  c->r[4]=0u+0x00000000u; // 80052188
  c->r[5]=0u+0x0000008Cu; // 8005218C
  c->lr=0x80052194u; f_80212C88(c); // 80052190
  c->r[0]=0u+0x0000001Cu; // 80052194
  W32(c->r[31]+0x000001D8u,c->r[0]); // 80052198
L_8005219C:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8005219C
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 800521A0
  c->r[30]=R32(c->r[1]+0x00000038u); // 800521A4
  c->r[29]=R32(c->r[1]+0x00000034u); // 800521A8
  c->lr=c->r[0]; // 800521AC
  c->r[1]=c->r[1]+0x00000040u; // 800521B0
  return; // 800521B4
}

// fn_800521B8
void f_800521B8(Ctx* __restrict c) {
  trace_call(0x800521B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800521B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800521BC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800521C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800521C4
  c->r[0]=R8(c->r[13]+0xFFFF9754u); // 800521C8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800521CC
  if (!crb(c,2)) { goto L_800521E4; } // 800521D0
  c->r[5]=0u+0x00000061u; // 800521D4
  c->r[0]=0u+0x00000001u; // 800521D8
  W32(c->r[13]+0xFFFF9750u,c->r[5]); // 800521DC
  W8(c->r[13]+0xFFFF9754u,c->r[0]); // 800521E0
L_800521E4:;
  c->r[0]=R8(c->r[13]+0xFFFF975Cu); // 800521E4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 800521E8
  if (!crb(c,2)) { goto L_80052200; } // 800521EC
  c->r[5]=0u+0x0000000Au; // 800521F0
  c->r[0]=0u+0x00000001u; // 800521F4
  W32(c->r[13]+0xFFFF9758u,c->r[5]); // 800521F8
  W8(c->r[13]+0xFFFF975Cu,c->r[0]); // 800521FC
L_80052200:;
  c->r[0]=R8(c->r[13]+0xFFFF9764u); // 80052200
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80052204
  if (!crb(c,2)) { goto L_8005221C; } // 80052208
  c->r[5]=0u+0x00000405u; // 8005220C
  c->r[0]=0u+0x00000001u; // 80052210
  W32(c->r[13]+0xFFFF9760u,c->r[5]); // 80052214
  W8(c->r[13]+0xFFFF9764u,c->r[0]); // 80052218
L_8005221C:;
  c->r[0]=R8(c->r[13]+0xFFFF976Cu); // 8005221C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80052220
  if (!crb(c,2)) { goto L_80052238; } // 80052224
  c->r[5]=0u+0x0000000Bu; // 80052228
  c->r[0]=0u+0x00000001u; // 8005222C
  W32(c->r[13]+0xFFFF9768u,c->r[5]); // 80052230
  W8(c->r[13]+0xFFFF976Cu,c->r[0]); // 80052234
L_80052238:;
  c->r[0]=R8(c->r[13]+0xFFFF9774u); // 80052238
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8005223C
  if (!crb(c,2)) { goto L_80052254; } // 80052240
  c->r[5]=0u+0x0000000Bu; // 80052244
  c->r[0]=0u+0x00000001u; // 80052248
  W32(c->r[13]+0xFFFF9770u,c->r[5]); // 8005224C
  W8(c->r[13]+0xFFFF9774u,c->r[0]); // 80052250
L_80052254:;
  c->r[0]=R8(c->r[13]+0xFFFF977Cu); // 80052254
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80052258
  if (!crb(c,2)) { goto L_80052270; } // 8005225C
  c->r[5]=0u+0x000004F0u; // 80052260
  c->r[0]=0u+0x00000001u; // 80052264
  W32(c->r[13]+0xFFFF9778u,c->r[5]); // 80052268
  W8(c->r[13]+0xFFFF977Cu,c->r[0]); // 8005226C
L_80052270:;
  c->r[0]=R8(c->r[13]+0xFFFF9784u); // 80052270
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80052274
  if (!crb(c,2)) { goto L_8005228C; } // 80052278
  c->r[5]=0u+0x00000690u; // 8005227C
  c->r[0]=0u+0x00000001u; // 80052280
  W32(c->r[13]+0xFFFF9780u,c->r[5]); // 80052284
  W8(c->r[13]+0xFFFF9784u,c->r[0]); // 80052288
L_8005228C:;
  c->r[0]=R8(c->r[13]+0xFFFF9785u); // 8005228C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80052290
  if (!crb(c,2)) { goto L_800522A0; } // 80052294
  c->r[0]=0u+0x00000001u; // 80052298
  W8(c->r[13]+0xFFFF9785u,c->r[0]); // 8005229C
L_800522A0:;
  c->r[7]=R32(c->r[13]+0xFFFF9750u); // 800522A0
  cmpu(c,0,c->r[3],0x00000008u); // 800522A4
  c->r[8]=R32(c->r[13]+0xFFFF9758u); // 800522A8
  c->r[10]=rotl(c->r[7],2)&0xFFFFFFFCu; // 800522AC
  c->r[9]=R32(c->r[13]+0xFFFF9760u); // 800522B0
  c->r[5]=rotl(c->r[8],2)&0xFFFFFFFCu; // 800522B4
  c->r[0]=R32(c->r[13]+0xFFFF9768u); // 800522B8
  c->r[11]=c->r[10]+c->r[5]; // 800522BC
  c->r[6]=R32(c->r[13]+0xFFFF9770u); // 800522C0
  c->r[12]=c->r[11]+c->r[9]; // 800522C4
  c->r[5]=R32(c->r[13]+0xFFFF9778u); // 800522C8
  c->r[31]=c->r[12]+c->r[0]; // 800522CC
  c->r[0]=R32(c->r[13]+0xFFFF9780u); // 800522D0
  c->r[6]=c->r[31]+c->r[6]; // 800522D4
  c->r[30]=c->r[6]+c->r[5]; // 800522D8
  c->r[29]=c->r[30]+c->r[0]; // 800522DC
  if (crb(c,1)) { goto L_8005234C; } // 800522E0
  c->r[5]=0u+0x802E0000u; // 800522E4
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800522E8
  c->r[5]=c->r[5]+0x000026B0u; // 800522EC
  c->r[5]=R32(c->r[5]+c->r[0]); // 800522F0
  c->ctr=c->r[5]; // 800522F4
  if (true) { switch (c->ctr) { case 0x800522FCu: goto L_800522FC; case 0x80052304u: goto L_80052304; case 0x80052310u: goto L_80052310; case 0x8005231Cu: goto L_8005231C; case 0x80052324u: goto L_80052324; case 0x8005232Cu: goto L_8005232C; case 0x80052334u: goto L_80052334; case 0x8005233Cu: goto L_8005233C; case 0x80052344u: goto L_80052344; default: break; } dispatch(c,c->ctr); return; } // 800522F8
L_800522FC:;
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[7]); // 800522FC
  goto L_80052350; // 80052300
L_80052304:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[8]); // 80052304
  c->r[3]=c->r[10]+c->r[0]; // 80052308
  goto L_80052350; // 8005230C
L_80052310:;
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[9]); // 80052310
  c->r[3]=c->r[11]+c->r[0]; // 80052314
  goto L_80052350; // 80052318
L_8005231C:;
  c->r[3]=c->r[12]|c->r[12]; // 8005231C
  goto L_80052350; // 80052320
L_80052324:;
  c->r[3]=c->r[31]|c->r[31]; // 80052324
  goto L_80052350; // 80052328
L_8005232C:;
  c->r[3]=c->r[6]|c->r[6]; // 8005232C
  goto L_80052350; // 80052330
L_80052334:;
  c->r[3]=c->r[30]|c->r[30]; // 80052334
  goto L_80052350; // 80052338
L_8005233C:;
  c->r[3]=c->r[29]|c->r[29]; // 8005233C
  goto L_80052350; // 80052340
L_80052344:;
  c->r[3]=0u+0x00000000u; // 80052344
  goto L_80052350; // 80052348
L_8005234C:;
  c->r[3]=0u+0x00000000u; // 8005234C
L_80052350:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80052350
  c->r[30]=R32(c->r[1]+0x00000018u); // 80052354
  c->r[29]=R32(c->r[1]+0x00000014u); // 80052358
  c->r[1]=c->r[1]+0x00000020u; // 8005235C
  return; // 80052360
}

// init__Q34gbla12SaveDataUtil9InitParamFv
void f_80052364(Ctx* __restrict c) {
  trace_call(0x80052364u);
  c->r[0]=0u+0xFFFFFFFFu; // 80052364
  c->r[4]=0u+0x00000000u; // 80052368
  W32(c->r[3]+0x00000000u,c->r[4]); // 8005236C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80052370
  W32(c->r[3]+0x00000008u,c->r[0]); // 80052374
  return; // 80052378
}

// initClear__Q34gbla12SaveDataUtil9InitParamFv
void f_8005237C(Ctx* __restrict c) {
  trace_call(0x8005237Cu);
  c->r[0]=0u+0xFFFFFFFFu; // 8005237C
  c->r[4]=0u+0x00000004u; // 80052380
  W32(c->r[3]+0x00000000u,c->r[4]); // 80052384
  W32(c->r[3]+0x00000004u,c->r[0]); // 80052388
  W32(c->r[3]+0x00000008u,c->r[0]); // 8005238C
  return; // 80052390
}

// initFileCheck__Q34gbla12SaveDataUtil9InitParamFv
void f_80052394(Ctx* __restrict c) {
  trace_call(0x80052394u);
  c->r[0]=0u+0xFFFFFFFFu; // 80052394
  c->r[4]=0u+0x00000001u; // 80052398
  W32(c->r[3]+0x00000000u,c->r[4]); // 8005239C
  W32(c->r[3]+0x00000004u,c->r[0]); // 800523A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800523A4
  return; // 800523A8
}

// initNANDCheck__Q34gbla12SaveDataUtil9InitParamFv
void f_800523AC(Ctx* __restrict c) {
  trace_call(0x800523ACu);
  c->r[0]=0u+0xFFFFFFFFu; // 800523AC
  c->r[4]=0u+0x00000002u; // 800523B0
  W32(c->r[3]+0x00000000u,c->r[4]); // 800523B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 800523B8
  W32(c->r[3]+0x00000008u,c->r[0]); // 800523BC
  return; // 800523C0
}

// initCreate__Q34gbla12SaveDataUtil9InitParamFv
void f_800523C4(Ctx* __restrict c) {
  trace_call(0x800523C4u);
  c->r[0]=0u+0xFFFFFFFFu; // 800523C4
  c->r[4]=0u+0x00000003u; // 800523C8
  W32(c->r[3]+0x00000000u,c->r[4]); // 800523CC
  W32(c->r[3]+0x00000004u,c->r[0]); // 800523D0
  W32(c->r[3]+0x00000008u,c->r[0]); // 800523D4
  return; // 800523D8
}

// initReadAll__Q34gbla12SaveDataUtil9InitParamFv
void f_800523DC(Ctx* __restrict c) {
  trace_call(0x800523DCu);
  c->r[5]=0u+0x00000005u; // 800523DC
  c->r[4]=0u+0x00000008u; // 800523E0
  c->r[0]=0u+0xFFFFFFFFu; // 800523E4
  W32(c->r[3]+0x00000000u,c->r[5]); // 800523E8
  W32(c->r[3]+0x00000004u,c->r[4]); // 800523EC
  W32(c->r[3]+0x00000008u,c->r[0]); // 800523F0
  return; // 800523F4
}

// initWriteAll__Q34gbla12SaveDataUtil9InitParamFv
void f_800523F8(Ctx* __restrict c) {
  trace_call(0x800523F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800523F8
  c->r[0]=c->lr; // 800523FC
  c->r[5]=0u+0x00000006u; // 80052400
  c->r[4]=0u+0x00000008u; // 80052404
  W32(c->r[1]+0x00000034u,c->r[0]); // 80052408
  c->r[0]=0u+0xFFFFFFFFu; // 8005240C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80052410
  W32(c->r[1]+0x00000028u,c->r[30]); // 80052414
  c->r[30]=c->r[3]|c->r[3]; // 80052418
  W32(c->r[3]+0x00000000u,c->r[5]); // 8005241C
  W32(c->r[3]+0x00000004u,c->r[4]); // 80052420
  W32(c->r[3]+0x00000008u,c->r[0]); // 80052424
  c->lr=0x8005242Cu; f_80029780(c); // 80052428
  c->r[31]=c->r[3]|c->r[3]; // 8005242C
  c->r[3]=c->r[1]+0x00000010u; // 80052430
  c->r[4]=0u+0x00000400u; // 80052434
  c->lr=0x8005243Cu; f_80206D9C(c); // 80052438
  c->r[3]=c->r[31]|c->r[31]; // 8005243C
  c->r[4]=c->r[1]+0x00000010u; // 80052440
  c->lr=0x80052448u; f_80029794(c); // 80052444
  c->r[31]=0u+0x00000000u; // 80052448
  W32(c->r[1]+0x00000014u,c->r[31]); // 8005244C
  c->r[3]=c->r[1]+0x00000010u; // 80052450
  c->r[4]=c->r[1]+0x00000014u; // 80052454
  W32(c->r[1]+0x00000018u,c->r[31]); // 80052458
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005245C
  c->lr=0x80052464u; f_802072B8(c); // 80052460
  W8(c->r[1]+0x00000008u,c->r[31]); // 80052464
  c->r[3]=c->r[1]+0x00000008u; // 80052468
  c->r[5]=0u+0x00000001u; // 8005246C
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80052470
  c->lr=0x80052478u; f_8020CBF8(c); // 80052474
  W32(c->r[30]+0x0000000Cu,c->r[31]); // 80052478
  c->r[3]=R32(c->r[1]+0x00000018u); // 8005247C
  c->r[0]=c->r[3]+0x0000001Fu; // 80052480
  c->r[4]=rotl(c->r[0],0)&0xFFFFFFE0u; cr0(c,c->r[4]); // 80052484
  W32(c->r[30]+0x00000010u,c->r[4]); // 80052488
  if (crb(c,2)) { goto L_800524D0; } // 8005248C
  c->r[7]=0u+0x802E0000u; // 80052490
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 80052494
  c->r[3]=c->r[1]+0x0000000Cu; // 80052498
  c->r[5]=0u+0x00000020u; // 8005249C
  c->r[7]=c->r[7]+0x000026E8u; // 800524A0
  c->r[6]=0u+0x00000001u; // 800524A4
  c->r[8]=0u+0x0000004Eu; // 800524A8
  c->lr=0x800524B0u; f_8020C0D0(c); // 800524AC
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800524B0
  c->r[4]=0u+0x00000000u; // 800524B4
  c->r[5]=R32(c->r[30]+0x00000010u); // 800524B8
  c->lr=0x800524C0u; f_80212C88(c); // 800524BC
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 800524C0
  c->r[4]=R32(c->r[1]+0x00000014u); // 800524C4
  c->r[5]=R32(c->r[1]+0x00000018u); // 800524C8
  c->lr=0x800524D0u; f_80212C8C(c); // 800524CC
L_800524D0:;
  c->r[3]=R32(c->r[1]+0x00000014u); // 800524D0
  c->lr=0x800524D8u; f_80210AFC(c); // 800524D4
  c->r[0]=0u+0x00000000u; // 800524D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800524DC
  c->r[3]=c->r[1]+0x00000010u; // 800524E0
  c->r[4]=0u+0xFFFFFFFFu; // 800524E4
  W32(c->r[1]+0x00000018u,c->r[0]); // 800524E8
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800524EC
  c->lr=0x800524F4u; f_80206E40(c); // 800524F0
  c->r[0]=R32(c->r[1]+0x00000034u); // 800524F4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800524F8
  c->r[30]=R32(c->r[1]+0x00000028u); // 800524FC
  c->lr=c->r[0]; // 80052500
  c->r[1]=c->r[1]+0x00000030u; // 80052504
  return; // 80052508
}

// fileCheck__Q34gbla12SaveDataUtil6ResultCFPCc
void f_8005250C(Ctx* __restrict c) {
  trace_call(0x8005250Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005250C
  c->r[0]=c->lr; // 80052510
  W32(c->r[1]+0x00000044u,c->r[0]); // 80052514
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80052518
  c->r[30]=0u+0x802A0000u; // 8005251C
  c->r[30]=c->r[30]+0xFFFF93F0u; // 80052520
  c->r[26]=R32(c->r[3]+0x0000000Cu); // 80052524
  c->r[25]=R32(c->r[3]+0x00000018u); // 80052528
  c->r[24]=c->r[4]|c->r[4]; // 8005252C
  c->r[27]=c->r[30]+0x00000BD3u; // 80052530
  c->r[29]=0u+0x00000000u; // 80052534
  c->r[28]=0u+0x00000000u; // 80052538
  goto L_800525E4; // 8005253C
L_80052540:;
  c->r[4]=c->r[26]|c->r[26]; // 80052540
  c->r[3]=c->r[1]+0x00000018u; // 80052544
  c->lr=0x8005254Cu; f_80208194(c); // 80052548
  c->r[4]=c->r[26]|c->r[26]; // 8005254C
  c->r[3]=c->r[30]+0x00000BDEu; // 80052550
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052554
  c->lr=0x8005255Cu; f_80019994(c); // 80052558
  c->r[4]=c->r[24]|c->r[24]; // 8005255C
  c->r[3]=c->r[1]+0x00000010u; // 80052560
  c->lr=0x80052568u; f_80208194(c); // 80052564
  c->r[3]=c->r[1]+0x00000018u; // 80052568
  c->r[4]=c->r[1]+0x00000010u; // 8005256C
  c->lr=0x80052574u; f_802085E0(c); // 80052570
  c->r[31]=c->r[3]|c->r[3]; // 80052574
  c->r[3]=c->r[1]+0x00000010u; // 80052578
  c->r[4]=0u+0xFFFFFFFFu; // 8005257C
  c->lr=0x80052584u; f_80208230(c); // 80052580
  cmps(c,0,(int32_t)c->r[31],0); // 80052584
  if (crb(c,2)) { goto L_80052594; } // 80052588
  c->r[28]=0u+0x00000001u; // 8005258C
  goto L_800525C8; // 80052590
L_80052594:;
  c->r[4]=c->r[27]|c->r[27]; // 80052594
  c->r[3]=c->r[1]+0x00000008u; // 80052598
  c->lr=0x800525A0u; f_80208194(c); // 8005259C
  c->r[3]=c->r[1]+0x00000018u; // 800525A0
  c->r[4]=c->r[1]+0x00000008u; // 800525A4
  c->lr=0x800525ACu; f_802085E0(c); // 800525A8
  c->r[31]=c->r[3]|c->r[3]; // 800525AC
  c->r[3]=c->r[1]+0x00000008u; // 800525B0
  c->r[4]=0u+0xFFFFFFFFu; // 800525B4
  c->lr=0x800525BCu; f_80208230(c); // 800525B8
  cmps(c,0,(int32_t)c->r[31],0); // 800525BC
  if (crb(c,2)) { goto L_800525C8; } // 800525C0
  c->r[29]=0u+0x00000001u; // 800525C4
L_800525C8:;
  c->r[3]=c->r[1]+0x00000018u; // 800525C8
  c->lr=0x800525D0u; f_802085C8(c); // 800525CC
  c->r[4]=c->r[3]+c->r[26]; // 800525D0
  c->r[3]=c->r[1]+0x00000018u; // 800525D4
  c->r[26]=c->r[4]+0x00000001u; // 800525D8
  c->r[4]=0u+0xFFFFFFFFu; // 800525DC
  c->lr=0x800525E4u; f_80208230(c); // 800525E0
L_800525E4:;
  cmps(c,0,(int32_t)c->r[25],0); // 800525E4
  c->r[25]=c->r[25]+0xFFFFFFFFu; // 800525E8
  if (!crb(c,2)) { IRQCHK(c); goto L_80052540; } // 800525EC
  cmps(c,0,(int32_t)c->r[29],0); // 800525F0
  c->r[3]=0u+0x00000000u; // 800525F4
  if (crb(c,2)) { goto L_80052608; } // 800525F8
  cmps(c,0,(int32_t)c->r[28],0); // 800525FC
  if (crb(c,2)) { goto L_80052608; } // 80052600
  c->r[3]=0u+0x00000001u; // 80052604
L_80052608:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80052608
  c->r[0]=R32(c->r[1]+0x00000044u); // 8005260C
  c->lr=c->r[0]; // 80052610
  c->r[1]=c->r[1]+0x00000040u; // 80052614
  return; // 80052618
}

// SavedataCallback__Q24gbla12SaveDataUtilFlPQ24NAND12CommandBlock
void f_8005261C(Ctx* __restrict c) {
  trace_call(0x8005261Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005261C
  c->r[0]=c->lr; // 80052620
  c->r[5]=0u+0x802A0000u; // 80052624
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052628
  c->r[5]=c->r[5]+0xFFFF93F0u; // 8005262C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052630
  c->r[31]=c->r[4]|c->r[4]; // 80052634
  W32(c->r[1]+0x00000008u,c->r[30]); // 80052638
  c->r[30]=c->r[3]|c->r[3]; // 8005263C
  c->r[4]=c->r[30]|c->r[30]; // 80052640
  c->r[3]=c->r[5]+0x00000BE7u; // 80052644
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052648
  c->lr=0x80052650u; f_80019994(c); // 8005264C
  c->r[3]=c->r[31]|c->r[31]; // 80052650
  c->lr=0x80052658u; f_80071DC0(c); // 80052654
  c->r[0]=0u+0x00000000u; // 80052658
  W8(c->r[3]+0x000003E0u,c->r[0]); // 8005265C
  W32(c->r[3]+0x000003E4u,c->r[30]); // 80052660
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052664
  c->r[30]=R32(c->r[1]+0x00000008u); // 80052668
  c->r[0]=R32(c->r[1]+0x00000014u); // 8005266C
  c->lr=c->r[0]; // 80052670
  c->r[1]=c->r[1]+0x00000010u; // 80052674
  return; // 80052678
}

// __ct__Q24gbla12GblaSelectIDFv
void f_8005267C(Ctx* __restrict c) {
  trace_call(0x8005267Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005267C
  c->r[0]=c->lr; // 80052680
  W32(c->r[1]+0x00000074u,c->r[0]); // 80052684
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=14;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80052688
  c->r[0]=0u+0x80050000u; // 8005268C
  W32(c->r[1]+0x00000008u,c->r[0]); // 80052690
  c->r[31]=0u+0xFFFFFFFFu; // 80052694
  c->r[15]=0u+0x80050000u; // 80052698
  c->r[0]=0u+0x80050000u; // 8005269C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800526A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 800526A4
  c->r[0]=0u+0x80050000u; // 800526A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800526AC
  c->r[0]=0u+0x80050000u; // 800526B0
  c->r[30]=c->r[30]+0x00003050u; // 800526B4
  c->r[16]=0u+0x80050000u; // 800526B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800526BC
  c->r[17]=0u+0x80050000u; // 800526C0
  c->r[30]=R32(c->r[1]+0x0000000Cu); // 800526C4
  c->r[18]=0u+0x80050000u; // 800526C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800526CC
  c->r[0]=0u+0x80050000u; // 800526D0
  c->r[30]=c->r[30]+0x00003054u; // 800526D4
  c->r[19]=0u+0x80050000u; // 800526D8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 800526DC
  c->r[20]=0u+0x80050000u; // 800526E0
  c->r[30]=R32(c->r[1]+0x00000010u); // 800526E4
  c->r[21]=0u+0x80050000u; // 800526E8
  W32(c->r[1]+0x00000018u,c->r[0]); // 800526EC
  c->r[0]=0u+0x80050000u; // 800526F0
  c->r[30]=c->r[30]+0x00003058u; // 800526F4
  c->r[22]=0u+0x80050000u; // 800526F8
  W32(c->r[1]+0x00000010u,c->r[30]); // 800526FC
  c->r[23]=0u+0x80050000u; // 80052700
  c->r[30]=R32(c->r[1]+0x00000014u); // 80052704
  c->r[24]=0u+0x80050000u; // 80052708
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8005270C
  c->r[0]=0u+0x80050000u; // 80052710
  c->r[30]=c->r[30]+0x0000306Cu; // 80052714
  c->r[25]=0u+0x80050000u; // 80052718
  W32(c->r[1]+0x00000014u,c->r[30]); // 8005271C
  c->r[26]=0u+0x80050000u; // 80052720
  c->r[30]=R32(c->r[1]+0x00000018u); // 80052724
  c->r[27]=0u+0x80050000u; // 80052728
  c->r[28]=0u+0x80050000u; // 8005272C
  c->r[29]=0u+0x80050000u; // 80052730
  c->r[30]=c->r[30]+0x00003154u; // 80052734
  W32(c->r[1]+0x00000018u,c->r[30]); // 80052738
  c->r[30]=R32(c->r[1]+0x0000001Cu); // 8005273C
  c->r[12]=0u+0x80050000u; // 80052740
  c->r[11]=0u+0x80050000u; // 80052744
  c->r[10]=0u+0x80050000u; // 80052748
  c->r[30]=c->r[30]+0x00003178u; // 8005274C
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 80052750
  c->r[30]=c->r[0]|c->r[0]; // 80052754
  c->r[0]=R32(c->r[1]+0x00000008u); // 80052758
  W32(c->r[3]+0x00000064u,c->r[0]); // 8005275C
  c->r[30]=c->r[30]+0x0000317Cu; // 80052760
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80052764
  c->r[9]=0u+0x80050000u; // 80052768
  W32(c->r[3]+0x0000006Cu,c->r[0]); // 8005276C
  c->r[8]=0u+0x80050000u; // 80052770
  c->r[0]=R32(c->r[1]+0x00000010u); // 80052774
  c->r[7]=0u+0x80050000u; // 80052778
  W32(c->r[3]+0x00000068u,c->r[0]); // 8005277C
  c->r[6]=0u+0x80050000u; // 80052780
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052784
  c->r[5]=0u+0x80050000u; // 80052788
  W32(c->r[1]+0x00000020u,c->r[30]); // 8005278C
  c->r[4]=0u+0x80050000u; // 80052790
  c->r[14]=0u+0x80050000u; // 80052794
  c->r[15]=c->r[15]+0x00002A64u; // 80052798
  W32(c->r[3]+0x00000070u,c->r[0]); // 8005279C
  c->r[16]=c->r[16]+0x00002BA4u; // 800527A0
  c->r[0]=R32(c->r[1]+0x00000018u); // 800527A4
  c->r[17]=c->r[17]+0x00002BFCu; // 800527A8
  W32(c->r[3]+0x00000074u,c->r[0]); // 800527AC
  c->r[18]=c->r[18]+0x00002C00u; // 800527B0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 800527B4
  c->r[19]=c->r[19]+0x00002C14u; // 800527B8
  W32(c->r[3]+0x0000007Cu,c->r[0]); // 800527BC
  c->r[20]=c->r[20]+0x00002C7Cu; // 800527C0
  c->r[0]=R32(c->r[1]+0x00000020u); // 800527C4
  c->r[21]=c->r[21]+0x00002CA0u; // 800527C8
  c->r[22]=c->r[22]+0x00002CA4u; // 800527CC
  c->r[23]=c->r[23]+0x00002CB8u; // 800527D0
  c->r[24]=c->r[24]+0x00002CDCu; // 800527D4
  c->r[25]=c->r[25]+0x00002D00u; // 800527D8
  c->r[26]=c->r[26]+0x00002D04u; // 800527DC
  c->r[27]=c->r[27]+0x00002E04u; // 800527E0
  c->r[28]=c->r[28]+0x00002E3Cu; // 800527E4
  c->r[29]=c->r[29]+0x00002E60u; // 800527E8
  c->r[12]=c->r[12]+0x00002E64u; // 800527EC
  c->r[11]=c->r[11]+0x00002E78u; // 800527F0
  c->r[10]=c->r[10]+0x00002EE0u; // 800527F4
  c->r[9]=c->r[9]+0x00002EE4u; // 800527F8
  c->r[8]=c->r[8]+0x00002EE8u; // 800527FC
  c->r[7]=c->r[7]+0x00002EFCu; // 80052800
  c->r[6]=c->r[6]+0x00002F20u; // 80052804
  c->r[5]=c->r[5]+0x00002F98u; // 80052808
  c->r[4]=c->r[4]+0x00002FA0u; // 8005280C
  c->r[14]=c->r[14]+0x0000300Cu; // 80052810
  W32(c->r[3]+0x000000B0u,c->r[31]); // 80052814
  c->r[30]=c->r[3]|c->r[3]; // 80052818
  W32(c->r[3]+0x000000B4u,c->r[31]); // 8005281C
  W32(c->r[3]+0x000000B8u,c->r[31]); // 80052820
  W32(c->r[3]+0x00000000u,c->r[15]); // 80052824
  W32(c->r[3]+0x00000004u,c->r[16]); // 80052828
  W32(c->r[3]+0x0000000Cu,c->r[17]); // 8005282C
  W32(c->r[3]+0x00000008u,c->r[18]); // 80052830
  W32(c->r[3]+0x00000010u,c->r[19]); // 80052834
  W32(c->r[3]+0x00000014u,c->r[20]); // 80052838
  W32(c->r[3]+0x0000001Cu,c->r[21]); // 8005283C
  W32(c->r[3]+0x00000018u,c->r[22]); // 80052840
  W32(c->r[3]+0x00000020u,c->r[23]); // 80052844
  W32(c->r[3]+0x00000024u,c->r[24]); // 80052848
  W32(c->r[3]+0x0000002Cu,c->r[25]); // 8005284C
  W32(c->r[3]+0x00000028u,c->r[26]); // 80052850
  W32(c->r[3]+0x00000030u,c->r[27]); // 80052854
  W32(c->r[3]+0x00000034u,c->r[28]); // 80052858
  W32(c->r[3]+0x0000003Cu,c->r[29]); // 8005285C
  W32(c->r[3]+0x00000038u,c->r[12]); // 80052860
  W32(c->r[3]+0x00000040u,c->r[11]); // 80052864
  W32(c->r[3]+0x00000044u,c->r[10]); // 80052868
  W32(c->r[3]+0x0000004Cu,c->r[9]); // 8005286C
  W32(c->r[3]+0x00000048u,c->r[8]); // 80052870
  W32(c->r[3]+0x00000050u,c->r[7]); // 80052874
  W32(c->r[3]+0x00000054u,c->r[6]); // 80052878
  W32(c->r[3]+0x0000005Cu,c->r[5]); // 8005287C
  W32(c->r[3]+0x00000058u,c->r[4]); // 80052880
  W32(c->r[3]+0x00000060u,c->r[14]); // 80052884
  W32(c->r[3]+0x00000078u,c->r[0]); // 80052888
  c->r[17]=0u+0x80050000u; // 8005288C
  c->r[16]=0u+0x80050000u; // 80052890
  c->r[14]=0u+0x00000000u; // 80052894
  c->r[15]=0u+0x80050000u; // 80052898
  c->r[12]=0u+0x80050000u; // 8005289C
  c->r[11]=0u+0x80050000u; // 800528A0
  c->r[10]=0u+0x80050000u; // 800528A4
  c->r[9]=0u+0x80050000u; // 800528A8
  c->r[8]=0u+0x80050000u; // 800528AC
  c->r[7]=0u+0x80050000u; // 800528B0
  c->r[6]=0u+0x80050000u; // 800528B4
  c->r[5]=0u+0x80050000u; // 800528B8
  c->r[4]=0u+0x80050000u; // 800528BC
  c->r[17]=c->r[17]+0x00003180u; // 800528C0
  c->r[16]=c->r[16]+0x00003264u; // 800528C4
  c->r[15]=c->r[15]+0x000032CCu; // 800528C8
  c->r[12]=c->r[12]+0x000032D0u; // 800528CC
  c->r[11]=c->r[11]+0x0000332Cu; // 800528D0
  c->r[10]=c->r[10]+0x0000337Cu; // 800528D4
  c->r[9]=c->r[9]+0x00003380u; // 800528D8
  c->r[8]=c->r[8]+0x00003384u; // 800528DC
  c->r[7]=c->r[7]+0x00003388u; // 800528E0
  c->r[6]=c->r[6]+0x0000338Cu; // 800528E4
  c->r[5]=c->r[5]+0x000034C4u; // 800528E8
  c->r[4]=c->r[4]+0x000034C8u; // 800528EC
  W32(c->r[3]+0x00000080u,c->r[17]); // 800528F0
  W32(c->r[3]+0x00000084u,c->r[16]); // 800528F4
  W32(c->r[3]+0x0000008Cu,c->r[15]); // 800528F8
  W32(c->r[3]+0x00000088u,c->r[12]); // 800528FC
  W32(c->r[3]+0x00000090u,c->r[11]); // 80052900
  W32(c->r[3]+0x00000094u,c->r[10]); // 80052904
  W32(c->r[3]+0x0000009Cu,c->r[9]); // 80052908
  W32(c->r[3]+0x00000098u,c->r[8]); // 8005290C
  W32(c->r[3]+0x000000A0u,c->r[7]); // 80052910
  W32(c->r[3]+0x000000A4u,c->r[6]); // 80052914
  W32(c->r[3]+0x000000ACu,c->r[5]); // 80052918
  W32(c->r[3]+0x000000A8u,c->r[4]); // 8005291C
  W32(c->r[3]+0x000000BCu,c->r[14]); // 80052920
  W32(c->r[3]+0x000000CCu,c->r[14]); // 80052924
  W32(c->r[3]+0x000000D0u,c->r[14]); // 80052928
  c->r[3]=c->r[3]+0x000000D4u; // 8005292C
  c->lr=0x80052934u; f_8005AE18(c); // 80052930
  c->r[3]=c->r[30]+0x0000022Cu; // 80052934
  c->lr=0x8005293Cu; f_8005AE18(c); // 80052938
  c->r[3]=c->r[30]+0x00000384u; // 8005293C
  c->lr=0x80052944u; f_8005AE18(c); // 80052940
  c->r[3]=c->r[30]+0x000004DCu; // 80052944
  c->lr=0x8005294Cu; f_800393E0(c); // 80052948
  W32(c->r[30]+0x0000052Cu,c->r[31]); // 8005294C
  c->r[3]=c->r[30]+0x00000540u; // 80052950
  c->lr=0x80052958u; f_8004E474(c); // 80052954
  W32(c->r[30]+0x0000093Cu,c->r[14]); // 80052958
  c->r[3]=c->r[30]+0x000004DCu; // 8005295C
  W8(c->r[30]+0x00000940u,c->r[14]); // 80052960
  W8(c->r[30]+0x00000941u,c->r[14]); // 80052964
  W8(c->r[30]+0x00000942u,c->r[14]); // 80052968
  W32(c->r[30]+0x00000944u,c->r[31]); // 8005296C
  W8(c->r[30]+0x00000948u,c->r[14]); // 80052970
  W8(c->r[30]+0x000000C0u,c->r[14]); // 80052974
  W32(c->r[30]+0x000000C4u,c->r[31]); // 80052978
  W32(c->r[30]+0x000000C8u,c->r[31]); // 8005297C
  W8(c->r[30]+0x000000C1u,c->r[14]); // 80052980
  c->lr=0x80052988u; f_8003946C(c); // 80052984
  W8(c->r[30]+0x000004F8u,c->r[14]); // 80052988
  c->r[3]=c->r[30]|c->r[30]; // 8005298C
  W8(c->r[30]+0x000004F9u,c->r[14]); // 80052990
  W8(c->r[30]+0x000004FAu,c->r[14]); // 80052994
  W8(c->r[30]+0x000004FBu,c->r[14]); // 80052998
  W8(c->r[30]+0x000004FCu,c->r[14]); // 8005299C
  W8(c->r[30]+0x000004FDu,c->r[14]); // 800529A0
  W8(c->r[30]+0x000004FEu,c->r[14]); // 800529A4
  W8(c->r[30]+0x000004FFu,c->r[14]); // 800529A8
  W8(c->r[30]+0x00000500u,c->r[14]); // 800529AC
  W8(c->r[30]+0x00000501u,c->r[14]); // 800529B0
  W8(c->r[30]+0x00000502u,c->r[14]); // 800529B4
  W8(c->r[30]+0x00000503u,c->r[14]); // 800529B8
  W8(c->r[30]+0x00000504u,c->r[14]); // 800529BC
  W8(c->r[30]+0x00000505u,c->r[14]); // 800529C0
  W8(c->r[30]+0x00000506u,c->r[14]); // 800529C4
  W8(c->r[30]+0x00000507u,c->r[14]); // 800529C8
  W8(c->r[30]+0x00000508u,c->r[14]); // 800529CC
  W8(c->r[30]+0x00000509u,c->r[14]); // 800529D0
  W8(c->r[30]+0x0000050Au,c->r[14]); // 800529D4
  W8(c->r[30]+0x0000050Bu,c->r[14]); // 800529D8
  W8(c->r[30]+0x0000050Cu,c->r[14]); // 800529DC
  W8(c->r[30]+0x0000050Du,c->r[14]); // 800529E0
  W8(c->r[30]+0x0000050Eu,c->r[14]); // 800529E4
  W8(c->r[30]+0x0000050Fu,c->r[14]); // 800529E8
  W8(c->r[30]+0x00000510u,c->r[14]); // 800529EC
  W8(c->r[30]+0x00000511u,c->r[14]); // 800529F0
  W8(c->r[30]+0x00000512u,c->r[14]); // 800529F4
  W8(c->r[30]+0x00000513u,c->r[14]); // 800529F8
  W8(c->r[30]+0x00000514u,c->r[14]); // 800529FC
  W8(c->r[30]+0x00000515u,c->r[14]); // 80052A00
  W8(c->r[30]+0x00000516u,c->r[14]); // 80052A04
  W8(c->r[30]+0x00000517u,c->r[14]); // 80052A08
  W8(c->r[30]+0x00000518u,c->r[14]); // 80052A0C
  W8(c->r[30]+0x00000519u,c->r[14]); // 80052A10
  W8(c->r[30]+0x0000051Au,c->r[14]); // 80052A14
  W8(c->r[30]+0x0000051Bu,c->r[14]); // 80052A18
  W32(c->r[30]+0x0000051Cu,c->r[31]); // 80052A1C
  W32(c->r[30]+0x00000520u,c->r[31]); // 80052A20
  W32(c->r[30]+0x00000524u,c->r[31]); // 80052A24
  W32(c->r[30]+0x00000528u,c->r[31]); // 80052A28
  W8(c->r[30]+0x00000538u,c->r[14]); // 80052A2C
  W8(c->r[30]+0x00000539u,c->r[14]); // 80052A30
  W8(c->r[30]+0x0000053Au,c->r[14]); // 80052A34
  W8(c->r[30]+0x0000053Bu,c->r[14]); // 80052A38
  W8(c->r[30]+0x00000942u,c->r[14]); // 80052A3C
  W8(c->r[30]+0x0000053Cu,c->r[14]); // 80052A40
  W8(c->r[30]+0x0000053Du,c->r[14]); // 80052A44
  W8(c->r[30]+0x0000053Eu,c->r[14]); // 80052A48
  W8(c->r[30]+0x0000053Fu,c->r[14]); // 80052A4C
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=14;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80052A50
  c->r[0]=R32(c->r[1]+0x00000074u); // 80052A54
  c->lr=c->r[0]; // 80052A58
  c->r[1]=c->r[1]+0x00000070u; // 80052A5C
  return; // 80052A60
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,0>FPQ24gbla12GblaSelectID
void f_80052A64(Ctx* __restrict c) {
  trace_call(0x80052A64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052A64
  c->r[0]=c->lr; // 80052A68
  c->r[4]=0u+0x802A0000u; // 80052A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052A70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052A74
  c->r[31]=c->r[3]|c->r[3]; // 80052A78
  c->r[3]=c->r[4]+0xFFFFA010u; // 80052A7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052A80
  c->lr=0x80052A88u; f_80019994(c); // 80052A84
  c->r[3]=c->r[31]|c->r[31]; // 80052A88
  c->lr=0x80052A90u; f_80053C48(c); // 80052A8C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052A90
  c->r[4]=0u+0x00000001u; // 80052A94
  c->r[5]=0u+0x00000000u; // 80052A98
  c->lr=0x80052AA0u; f_800663F0(c); // 80052A9C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052AA0
  c->r[4]=0u+0x00000001u; // 80052AA4
  c->r[5]=0u+0x00000000u; // 80052AA8
  c->lr=0x80052AB0u; f_80066908(c); // 80052AAC
  c->r[3]=0u+0x00000172u; // 80052AB0
  c->lr=0x80052AB8u; f_80022B5C(c); // 80052AB4
  c->r[5]=c->r[3]|c->r[3]; // 80052AB8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052ABC
  c->r[4]=0u+0x00000002u; // 80052AC0
  c->lr=0x80052AC8u; f_80065E40(c); // 80052AC4
  c->r[3]=0u+0x00000171u; // 80052AC8
  c->lr=0x80052AD0u; f_80022B5C(c); // 80052ACC
  c->r[5]=c->r[3]|c->r[3]; // 80052AD0
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052AD4
  c->r[4]=0u+0x00000002u; // 80052AD8
  c->lr=0x80052AE0u; f_80065E40(c); // 80052ADC
  c->r[3]=0u+0x0000016Fu; // 80052AE0
  c->lr=0x80052AE8u; f_80022B5C(c); // 80052AE4
  c->r[5]=c->r[3]|c->r[3]; // 80052AE8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052AEC
  c->r[4]=0u+0x00000002u; // 80052AF0
  c->lr=0x80052AF8u; f_80065E40(c); // 80052AF4
  c->r[3]=0u+0x00000170u; // 80052AF8
  c->lr=0x80052B00u; f_80022B5C(c); // 80052AFC
  c->r[5]=c->r[3]|c->r[3]; // 80052B00
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B04
  c->r[4]=0u+0x00000002u; // 80052B08
  c->lr=0x80052B10u; f_80065E40(c); // 80052B0C
  c->r[3]=0u+0x0000016Eu; // 80052B10
  c->lr=0x80052B18u; f_80022B5C(c); // 80052B14
  c->r[5]=c->r[3]|c->r[3]; // 80052B18
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B1C
  c->r[4]=0u+0x00000002u; // 80052B20
  c->lr=0x80052B28u; f_80065E40(c); // 80052B24
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B28
  c->r[4]=0u+0x00000002u; // 80052B2C
  c->r[5]=0u+0x000000F9u; // 80052B30
  c->lr=0x80052B38u; f_80065E40(c); // 80052B34
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B38
  c->r[4]=0u+0x00000002u; // 80052B3C
  c->r[5]=0u+0x000000F8u; // 80052B40
  c->lr=0x80052B48u; f_80065E40(c); // 80052B44
  c->r[3]=0u+0x0000016Eu; // 80052B48
  c->lr=0x80052B50u; f_80022B5C(c); // 80052B4C
  c->r[5]=c->r[3]|c->r[3]; // 80052B50
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B54
  c->r[4]=0u+0x00000002u; // 80052B58
  c->lr=0x80052B60u; f_80065E40(c); // 80052B5C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B60
  c->r[4]=0u+0x00000002u; // 80052B64
  c->r[5]=0u+0x0000012Au; // 80052B68
  c->lr=0x80052B70u; f_80065E40(c); // 80052B6C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B70
  c->r[4]=0u+0x00000002u; // 80052B74
  c->r[5]=0u+0x00000000u; // 80052B78
  c->lr=0x80052B80u; f_800663F0(c); // 80052B7C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80052B80
  c->r[4]=0u+0x00000002u; // 80052B84
  c->r[5]=0u+0x00000000u; // 80052B88
  c->lr=0x80052B90u; f_80066908(c); // 80052B8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052B90
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052B94
  c->lr=c->r[0]; // 80052B98
  c->r[1]=c->r[1]+0x00000010u; // 80052B9C
  return; // 80052BA0
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,0>FPQ24gbla12GblaSelectID
void f_80052BA4(Ctx* __restrict c) {
  trace_call(0x80052BA4u);
  c->r[4]=R32(c->r[3]+0x000000CCu); // 80052BA4
  c->r[0]=R8(c->r[4]+0x0000007Cu); // 80052BA8
  cmps(c,0,(int32_t)c->r[0],0); // 80052BAC
  if (crb(c,2)) return; // 80052BB0
  c->r[6]=R8(c->r[3]+0x00000228u); // 80052BB4
  c->r[4]=R8(c->r[3]+0x00000380u); // 80052BB8
  c->r[5]=0u-c->r[6]; // 80052BBC
  c->r[0]=R8(c->r[3]+0x000004D8u); // 80052BC0
  c->r[5]=c->r[5]|c->r[6]; // 80052BC4
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 80052BC8
  c->r[5]=c->r[5]&c->r[4]; // 80052BCC
  c->r[4]=0u-c->r[5]; // 80052BD0
  c->r[4]=c->r[4]|c->r[5]; // 80052BD4
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 80052BD8
  c->r[4]=c->r[4]&c->r[0]; // 80052BDC
  c->r[0]=0u-c->r[4]; // 80052BE0
  c->r[0]=c->r[0]|c->r[4]; // 80052BE4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80052BE8
  if (crb(c,2)) return; // 80052BEC
  c->r[0]=0u+0x00000001u; // 80052BF0
  W32(c->r[3]+0x000000B8u,c->r[0]); // 80052BF4
  return; // 80052BF8
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,0>FPQ24gbla12GblaSelectID
void f_80052BFC(Ctx* __restrict c) {
  trace_call(0x80052BFCu);
  return; // 80052BFC
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,0>FPQ24gbla12GblaSelectID
void f_80052C00(Ctx* __restrict c) {
  trace_call(0x80052C00u);
  c->r[3]=0u+0x802A0000u; // 80052C00
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052C04
  c->r[3]=c->r[3]+0x00000029u; // 80052C08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052C0C
  f_80019994(c); return; // 80052C10
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,1>FPQ24gbla12GblaSelectID
void f_80052C14(Ctx* __restrict c) {
  trace_call(0x80052C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052C14
  c->r[0]=c->lr; // 80052C18
  c->r[4]=0u+0x802A0000u; // 80052C1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052C20
  c->r[4]=c->r[4]+0xFFFFA010u; // 80052C24
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052C28
  c->r[31]=c->r[3]|c->r[3]; // 80052C2C
  c->r[3]=c->r[4]+0x00000050u; // 80052C30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052C34
  c->lr=0x80052C3Cu; f_80019994(c); // 80052C38
  c->r[0]=R32(c->r[31]+0x00000530u); // 80052C3C
  cmps(c,0,(int32_t)c->r[0],-1); // 80052C40
  if (crb(c,2)) { goto L_80052C68; } // 80052C44
  c->r[3]=R32(c->r[31]+0x00000534u); // 80052C48
  cmps(c,0,(int32_t)c->r[3],0); // 80052C4C
  if (!crb(c,2)) { goto L_80052C5C; } // 80052C50
  W32(c->r[31]+0x000000C4u,c->r[0]); // 80052C54
  goto L_80052C68; // 80052C58
L_80052C5C:;
  cmps(c,0,(int32_t)c->r[3],1); // 80052C5C
  if (!crb(c,2)) { goto L_80052C68; } // 80052C60
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80052C64
L_80052C68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052C68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052C6C
  c->lr=c->r[0]; // 80052C70
  c->r[1]=c->r[1]+0x00000010u; // 80052C74
  return; // 80052C78
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,1>FPQ24gbla12GblaSelectID
void f_80052C7C(Ctx* __restrict c) {
  trace_call(0x80052C7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052C7C
  c->r[0]=c->lr; // 80052C80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052C84
  c->r[4]=c->r[1]+0x00000008u; // 80052C88
  c->lr=0x80052C90u; f_80053E28(c); // 80052C8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052C90
  c->lr=c->r[0]; // 80052C94
  c->r[1]=c->r[1]+0x00000010u; // 80052C98
  return; // 80052C9C
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,1>FPQ24gbla12GblaSelectID
void f_80052CA0(Ctx* __restrict c) {
  trace_call(0x80052CA0u);
  return; // 80052CA0
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,1>FPQ24gbla12GblaSelectID
void f_80052CA4(Ctx* __restrict c) {
  trace_call(0x80052CA4u);
  c->r[3]=0u+0x802A0000u; // 80052CA4
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052CA8
  c->r[3]=c->r[3]+0x00000080u; // 80052CAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052CB0
  f_80019994(c); return; // 80052CB4
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,2>FPQ24gbla12GblaSelectID
void f_80052CB8(Ctx* __restrict c) {
  trace_call(0x80052CB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052CB8
  c->r[0]=c->lr; // 80052CBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052CC0
  c->r[4]=c->r[1]+0x00000008u; // 80052CC4
  c->lr=0x80052CCCu; f_80053FC4(c); // 80052CC8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052CCC
  c->lr=c->r[0]; // 80052CD0
  c->r[1]=c->r[1]+0x00000010u; // 80052CD4
  return; // 80052CD8
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,2>FPQ24gbla12GblaSelectID
void f_80052CDC(Ctx* __restrict c) {
  trace_call(0x80052CDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052CDC
  c->r[0]=c->lr; // 80052CE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052CE4
  c->r[4]=c->r[1]+0x00000008u; // 80052CE8
  c->lr=0x80052CF0u; f_800541D8(c); // 80052CEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052CF0
  c->lr=c->r[0]; // 80052CF4
  c->r[1]=c->r[1]+0x00000010u; // 80052CF8
  return; // 80052CFC
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,2>FPQ24gbla12GblaSelectID
void f_80052D00(Ctx* __restrict c) {
  trace_call(0x80052D00u);
  return; // 80052D00
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,2>FPQ24gbla12GblaSelectID
void f_80052D04(Ctx* __restrict c) {
  trace_call(0x80052D04u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052D04
  c->r[0]=c->lr; // 80052D08
  W32(c->r[1]+0x00000044u,c->r[0]); // 80052D0C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80052D10
  c->r[31]=c->r[1]|c->r[1]; // 80052D14
  W32(c->r[1]+0x00000038u,c->r[30]); // 80052D18
  W32(c->r[1]+0x00000034u,c->r[29]); // 80052D1C
  c->r[29]=0u+0x00000000u; // 80052D20
  W32(c->r[1]+0x00000030u,c->r[28]); // 80052D24
  c->r[28]=c->r[3]|c->r[3]; // 80052D28
  goto L_80052D40; // 80052D2C
L_80052D30:;
  {uint32_t ea=c->r[2]+0xFFFF8218u; c->f[1]=c->ps1[1]=RF32(ea);} // 80052D30
  c->r[3]=c->r[29]|c->r[29]; // 80052D34
  c->lr=0x80052D3Cu; f_80078E14(c); // 80052D38
  c->r[29]=c->r[29]+0x00000001u; // 80052D3C
L_80052D40:;
  cmpu(c,0,c->r[29],0x00000002u); // 80052D40
  if (crb(c,0)) { IRQCHK(c); goto L_80052D30; } // 80052D44
  c->r[30]=0u+0x00000000u; // 80052D48
  W32(c->r[28]+0x000000BCu,c->r[30]); // 80052D4C
  c->r[3]=c->r[28]+0x000004DCu; // 80052D50
  c->lr=0x80052D58u; f_80039800(c); // 80052D54
  c->r[0]=R32(c->r[13]+0xFFFF970Cu); // 80052D58
  W8(c->r[31]+0x00000008u,c->r[30]); // 80052D5C
  cmps(c,0,(int32_t)c->r[0],0); // 80052D60
  if (!crb(c,2)) { goto L_80052DBC; } // 80052D64
  c->r[30]=0u+0x802E0000u; // 80052D68
  c->r[3]=0u+0x00000080u; // 80052D6C
  c->r[30]=c->r[30]+0x00001BC8u; // 80052D70
  c->r[5]=0u+0x00000023u; // 80052D74
  c->r[4]=c->r[30]|c->r[30]; // 80052D78
  c->lr=0x80052D80u; f_8020D35C(c); // 80052D7C
  cmps(c,0,(int32_t)c->r[3],0); // 80052D80
  c->r[29]=c->r[3]|c->r[3]; // 80052D84
  if (crb(c,2)) { goto L_80052DB8; } // 80052D88
  W32(c->r[31]+0x00000024u,c->r[1]); // 80052D8C
  c->lr=0x80052D94u; f_80073864(c); // 80052D90
  goto L_80052DB8; // 80052D94
  c->r[3]=c->r[29]|c->r[29]; // 80052D98
  c->r[4]=c->r[30]|c->r[30]; // 80052D9C
  c->r[5]=0u+0x00000023u; // 80052DA0
  c->lr=0x80052DA8u; f_8020E944(c); // 80052DA4
  c->r[3]=0u+0x00000000u; // 80052DA8
  c->r[4]=0u+0x00000000u; // 80052DAC
  c->r[5]=0u+0x00000000u; // 80052DB0
  c->lr=0x80052DB8u; f_800AF804(c); // 80052DB4
L_80052DB8:;
  W32(c->r[13]+0xFFFF970Cu,c->r[29]); // 80052DB8
L_80052DBC:;
  c->r[3]=R32(c->r[13]+0xFFFF970Cu); // 80052DBC
  c->r[4]=0u+0x00000000u; // 80052DC0
  c->lr=0x80052DC8u; f_80074190(c); // 80052DC4
  c->r[3]=0u+0x802A0000u; // 80052DC8
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052DCC
  c->r[3]=c->r[3]+0x000000B0u; // 80052DD0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052DD4
  c->lr=0x80052DDCu; f_80019994(c); // 80052DD8
  c->r[10]=c->r[31]|c->r[31]; // 80052DDC
  c->r[31]=R32(c->r[31]+0x0000003Cu); // 80052DE0
  c->r[30]=R32(c->r[10]+0x00000038u); // 80052DE4
  c->r[29]=R32(c->r[10]+0x00000034u); // 80052DE8
  c->r[28]=R32(c->r[10]+0x00000030u); // 80052DEC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80052DF0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80052DF4
  c->r[1]=c->r[10]|c->r[10]; // 80052DF8
  c->lr=c->r[0]; // 80052DFC
  return; // 80052E00
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,3>FPQ24gbla12GblaSelectID
void f_80052E04(Ctx* __restrict c) {
  trace_call(0x80052E04u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052E04
  c->r[0]=c->lr; // 80052E08
  c->r[3]=0u+0x802A0000u; // 80052E0C
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052E10
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052E14
  c->r[3]=c->r[3]+0x000000DBu; // 80052E18
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052E1C
  c->lr=0x80052E24u; f_80019994(c); // 80052E20
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 80052E24
  c->lr=0x80052E2Cu; f_80019F10(c); // 80052E28
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052E2C
  c->lr=c->r[0]; // 80052E30
  c->r[1]=c->r[1]+0x00000010u; // 80052E34
  return; // 80052E38
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,3>FPQ24gbla12GblaSelectID
void f_80052E3C(Ctx* __restrict c) {
  trace_call(0x80052E3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052E3C
  c->r[0]=c->lr; // 80052E40
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052E44
  c->r[4]=c->r[1]+0x00000008u; // 80052E48
  c->lr=0x80052E50u; f_80055108(c); // 80052E4C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052E50
  c->lr=c->r[0]; // 80052E54
  c->r[1]=c->r[1]+0x00000010u; // 80052E58
  return; // 80052E5C
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,3>FPQ24gbla12GblaSelectID
void f_80052E60(Ctx* __restrict c) {
  trace_call(0x80052E60u);
  return; // 80052E60
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,3>FPQ24gbla12GblaSelectID
void f_80052E64(Ctx* __restrict c) {
  trace_call(0x80052E64u);
  c->r[3]=0u+0x802A0000u; // 80052E64
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052E68
  c->r[3]=c->r[3]+0x0000010Au; // 80052E6C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052E70
  f_80019994(c); return; // 80052E74
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,4>FPQ24gbla12GblaSelectID
void f_80052E78(Ctx* __restrict c) {
  trace_call(0x80052E78u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052E78
  c->r[0]=c->lr; // 80052E7C
  c->r[4]=0u+0x802A0000u; // 80052E80
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052E84
  c->r[4]=c->r[4]+0xFFFFA010u; // 80052E88
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052E8C
  c->r[31]=c->r[3]|c->r[3]; // 80052E90
  c->r[3]=c->r[4]+0x00000139u; // 80052E94
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052E98
  c->lr=0x80052EA0u; f_80019994(c); // 80052E9C
  c->r[4]=R32(c->r[31]+0x000000B8u); // 80052EA0
  c->r[3]=0u+0x2E8C0000u; // 80052EA4
  c->r[0]=c->r[3]+0xFFFFA2E9u; // 80052EA8
  c->r[4]=c->r[4]+0x00000001u; // 80052EAC
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80052EB0
  c->r[0]=sraw(c,c->r[0],1); // 80052EB4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80052EB8
  c->r[0]=c->r[0]+c->r[3]; // 80052EBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)11); // 80052EC0
  c->r[0]=c->r[4]-c->r[0]; // 80052EC4
  W32(c->r[31]+0x000000B8u,c->r[0]); // 80052EC8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052ECC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052ED0
  c->lr=c->r[0]; // 80052ED4
  c->r[1]=c->r[1]+0x00000010u; // 80052ED8
  return; // 80052EDC
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,4>FPQ24gbla12GblaSelectID
void f_80052EE0(Ctx* __restrict c) {
  trace_call(0x80052EE0u);
  return; // 80052EE0
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,4>FPQ24gbla12GblaSelectID
void f_80052EE4(Ctx* __restrict c) {
  trace_call(0x80052EE4u);
  return; // 80052EE4
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,4>FPQ24gbla12GblaSelectID
void f_80052EE8(Ctx* __restrict c) {
  trace_call(0x80052EE8u);
  c->r[3]=0u+0x802A0000u; // 80052EE8
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052EEC
  c->r[3]=c->r[3]+0x00000169u; // 80052EF0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052EF4
  f_80019994(c); return; // 80052EF8
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,5>FPQ24gbla12GblaSelectID
void f_80052EFC(Ctx* __restrict c) {
  trace_call(0x80052EFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052EFC
  c->r[0]=c->lr; // 80052F00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052F04
  c->r[4]=c->r[1]+0x00000008u; // 80052F08
  c->lr=0x80052F10u; f_80055480(c); // 80052F0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052F10
  c->lr=c->r[0]; // 80052F14
  c->r[1]=c->r[1]+0x00000010u; // 80052F18
  return; // 80052F1C
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,5>FPQ24gbla12GblaSelectID
void f_80052F20(Ctx* __restrict c) {
  trace_call(0x80052F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052F20
  c->r[0]=c->lr; // 80052F24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052F28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052F2C
  c->r[31]=c->r[3]|c->r[3]; // 80052F30
  c->r[3]=R32(c->r[3]+0x0000093Cu); // 80052F34
  c->lr=0x80052F3Cu; f_80022560(c); // 80052F38
  c->r[0]=R8(c->r[31]+0x00000940u); // 80052F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80052F40
  if (!crb(c,2)) { goto L_80052F64; } // 80052F44
  c->r[3]=R32(c->r[31]+0x0000093Cu); // 80052F48
  c->r[0]=R8(c->r[3]+0x00000040u); // 80052F4C
  cmps(c,0,(int32_t)c->r[0],0); // 80052F50
  if (crb(c,2)) { goto L_80052F84; } // 80052F54
  c->r[0]=0u+0x00000001u; // 80052F58
  W8(c->r[31]+0x00000940u,c->r[0]); // 80052F5C
  goto L_80052F84; // 80052F60
L_80052F64:;
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 80052F64
  c->lr=0x80052F6Cu; f_80019F7C(c); // 80052F68
  cmps(c,0,(int32_t)c->r[3],0); // 80052F6C
  if (!crb(c,2)) { goto L_80052F84; } // 80052F70
  c->r[3]=0u+0x00000000u; // 80052F74
  c->r[0]=0u+0x00000006u; // 80052F78
  W8(c->r[31]+0x00000940u,c->r[3]); // 80052F7C
  W32(c->r[31]+0x000000B8u,c->r[0]); // 80052F80
L_80052F84:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052F84
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052F88
  c->lr=c->r[0]; // 80052F8C
  c->r[1]=c->r[1]+0x00000010u; // 80052F90
  return; // 80052F94
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,5>FPQ24gbla12GblaSelectID
void f_80052F98(Ctx* __restrict c) {
  trace_call(0x80052F98u);
  c->r[3]=R32(c->r[3]+0x0000093Cu); // 80052F98
  f_80022644(c); return; // 80052F9C
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,5>FPQ24gbla12GblaSelectID
void f_80052FA0(Ctx* __restrict c) {
  trace_call(0x80052FA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80052FA0
  c->r[0]=c->lr; // 80052FA4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80052FA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80052FAC
  c->r[31]=c->r[3]|c->r[3]; // 80052FB0
  c->r[0]=R32(c->r[3]+0x0000093Cu); // 80052FB4
  cmps(c,0,(int32_t)c->r[0],0); // 80052FB8
  if (crb(c,2)) { goto L_80052FDC; } // 80052FBC
  c->r[3]=c->r[0]|c->r[0]; // 80052FC0
  c->lr=0x80052FC8u; f_800227B4(c); // 80052FC4
  c->r[3]=R32(c->r[31]+0x0000093Cu); // 80052FC8
  c->r[4]=0u+0x00000001u; // 80052FCC
  c->lr=0x80052FD4u; f_80022314(c); // 80052FD0
  c->r[0]=0u+0x00000000u; // 80052FD4
  W32(c->r[31]+0x0000093Cu,c->r[0]); // 80052FD8
L_80052FDC:;
  c->r[3]=0u+0x00000008u; // 80052FDC
  c->lr=0x80052FE4u; f_8002D5A0(c); // 80052FE0
  c->r[3]=0u+0x802A0000u; // 80052FE4
  c->r[3]=c->r[3]+0xFFFFA010u; // 80052FE8
  c->r[3]=c->r[3]+0x00000199u; // 80052FEC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80052FF0
  c->lr=0x80052FF8u; f_80019994(c); // 80052FF4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80052FF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80052FFC
  c->lr=c->r[0]; // 80053000
  c->r[1]=c->r[1]+0x00000010u; // 80053004
  return; // 80053008
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,6>FPQ24gbla12GblaSelectID
void f_8005300C(Ctx* __restrict c) {
  trace_call(0x8005300Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005300C
  c->r[0]=c->lr; // 80053010
  c->r[4]=0u+0x802A0000u; // 80053014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053018
  c->r[4]=c->r[4]+0xFFFFA010u; // 8005301C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053020
  c->r[31]=c->r[3]|c->r[3]; // 80053024
  c->r[3]=c->r[4]+0x000001C2u; // 80053028
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8005302C
  c->lr=0x80053034u; f_80019994(c); // 80053030
  c->r[0]=0u+0x00000001u; // 80053034
  W32(c->r[31]+0x000000B8u,c->r[0]); // 80053038
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005303C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053040
  c->lr=c->r[0]; // 80053044
  c->r[1]=c->r[1]+0x00000010u; // 80053048
  return; // 8005304C
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,6>FPQ24gbla12GblaSelectID
void f_80053050(Ctx* __restrict c) {
  trace_call(0x80053050u);
  return; // 80053050
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,6>FPQ24gbla12GblaSelectID
void f_80053054(Ctx* __restrict c) {
  trace_call(0x80053054u);
  return; // 80053054
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,6>FPQ24gbla12GblaSelectID
void f_80053058(Ctx* __restrict c) {
  trace_call(0x80053058u);
  c->r[3]=0u+0x802A0000u; // 80053058
  c->r[3]=c->r[3]+0xFFFFA010u; // 8005305C
  c->r[3]=c->r[3]+0x000001F1u; // 80053060
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80053064
  f_80019994(c); return; // 80053068
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,7>FPQ24gbla12GblaSelectID
void f_8005306C(Ctx* __restrict c) {
  trace_call(0x8005306Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005306C
  c->r[0]=c->lr; // 80053070
  c->r[4]=0u+0x00000002u; // 80053074
  c->r[5]=0u+0x00000001u; // 80053078
  W32(c->r[1]+0x00000044u,c->r[0]); // 8005307C
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80053080
  c->r[31]=c->r[1]|c->r[1]; // 80053084
  W32(c->r[1]+0x00000038u,c->r[30]); // 80053088
  W32(c->r[1]+0x00000034u,c->r[29]); // 8005308C
  c->r[29]=c->r[3]|c->r[3]; // 80053090
  c->r[3]=R32(c->r[3]+0x000000CCu); // 80053094
  c->lr=0x8005309Cu; f_800663F0(c); // 80053098
  c->r[3]=R32(c->r[29]+0x000000CCu); // 8005309C
  c->r[4]=0u+0x00000002u; // 800530A0
  c->r[5]=0u+0x00000001u; // 800530A4
  c->lr=0x800530ACu; f_80066908(c); // 800530A8
  c->r[3]=R32(c->r[29]+0x000000CCu); // 800530AC
  c->r[4]=0u+0x00000001u; // 800530B0
  c->r[5]=0u+0x00000000u; // 800530B4
  c->lr=0x800530BCu; f_80066908(c); // 800530B8
  c->r[0]=R32(c->r[13]+0xFFFF970Cu); // 800530BC
  c->r[3]=0u+0x00000000u; // 800530C0
  W8(c->r[31]+0x00000008u,c->r[3]); // 800530C4
  cmps(c,0,(int32_t)c->r[0],0); // 800530C8
  if (!crb(c,2)) { goto L_80053124; } // 800530CC
  c->r[30]=0u+0x802E0000u; // 800530D0
  c->r[3]=0u+0x00000080u; // 800530D4
  c->r[30]=c->r[30]+0x00001BC8u; // 800530D8
  c->r[5]=0u+0x00000023u; // 800530DC
  c->r[4]=c->r[30]|c->r[30]; // 800530E0
  c->lr=0x800530E8u; f_8020D35C(c); // 800530E4
  cmps(c,0,(int32_t)c->r[3],0); // 800530E8
  c->r[29]=c->r[3]|c->r[3]; // 800530EC
  if (crb(c,2)) { goto L_80053120; } // 800530F0
  W32(c->r[31]+0x00000024u,c->r[1]); // 800530F4
  c->lr=0x800530FCu; f_80073864(c); // 800530F8
  goto L_80053120; // 800530FC
  c->r[3]=c->r[29]|c->r[29]; // 80053100
  c->r[4]=c->r[30]|c->r[30]; // 80053104
  c->r[5]=0u+0x00000023u; // 80053108
  c->lr=0x80053110u; f_8020E944(c); // 8005310C
  c->r[3]=0u+0x00000000u; // 80053110
  c->r[4]=0u+0x00000000u; // 80053114
  c->r[5]=0u+0x00000000u; // 80053118
  c->lr=0x80053120u; f_800AF804(c); // 8005311C
L_80053120:;
  W32(c->r[13]+0xFFFF970Cu,c->r[29]); // 80053120
L_80053124:;
  c->r[3]=R32(c->r[13]+0xFFFF970Cu); // 80053124
  c->r[4]=0u+0x00000000u; // 80053128
  c->lr=0x80053130u; f_80074190(c); // 8005312C
  c->r[10]=c->r[31]|c->r[31]; // 80053130
  c->r[31]=R32(c->r[31]+0x0000003Cu); // 80053134
  c->r[30]=R32(c->r[10]+0x00000038u); // 80053138
  c->r[29]=R32(c->r[10]+0x00000034u); // 8005313C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80053140
  c->r[0]=R32(c->r[10]+0x00000004u); // 80053144
  c->r[1]=c->r[10]|c->r[10]; // 80053148
  c->lr=c->r[0]; // 8005314C
  return; // 80053150
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,7>FPQ24gbla12GblaSelectID
void f_80053154(Ctx* __restrict c) {
  trace_call(0x80053154u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053154
  c->r[0]=c->lr; // 80053158
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005315C
  c->r[4]=c->r[1]+0x00000008u; // 80053160
  c->lr=0x80053168u; f_80055220(c); // 80053164
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053168
  c->lr=c->r[0]; // 8005316C
  c->r[1]=c->r[1]+0x00000010u; // 80053170
  return; // 80053174
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,7>FPQ24gbla12GblaSelectID
void f_80053178(Ctx* __restrict c) {
  trace_call(0x80053178u);
  return; // 80053178
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,7>FPQ24gbla12GblaSelectID
void f_8005317C(Ctx* __restrict c) {
  trace_call(0x8005317Cu);
  return; // 8005317C
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,8>FPQ24gbla12GblaSelectID
void f_80053180(Ctx* __restrict c) {
  trace_call(0x80053180u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053180
  c->r[0]=c->lr; // 80053184
  c->r[4]=0u+0x802A0000u; // 80053188
  W32(c->r[1]+0x00000034u,c->r[0]); // 8005318C
  c->r[4]=c->r[4]+0xFFFFA010u; // 80053190
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80053194
  W32(c->r[1]+0x00000028u,c->r[30]); // 80053198
  c->r[30]=c->r[3]|c->r[3]; // 8005319C
  c->r[3]=c->r[4]+0x00000220u; // 800531A0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800531A4
  c->lr=0x800531ACu; f_80019994(c); // 800531A8
  c->lr=0x800531B0u; f_80029780(c); // 800531AC
  c->r[0]=R32(c->r[30]+0x0000052Cu); // 800531B0
  c->r[31]=c->r[3]|c->r[3]; // 800531B4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800531B8
  c->r[3]=c->r[3]+c->r[0]; // 800531BC
  c->r[3]=c->r[3]+0x00000010u; // 800531C0
  c->lr=0x800531C8u; f_8006DE34(c); // 800531C4
  c->r[0]=R32(c->r[30]+0x0000052Cu); // 800531C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 800531CC
  c->r[3]=c->r[31]+c->r[0]; // 800531D0
  c->r[3]=c->r[3]+0x00000190u; // 800531D4
  c->lr=0x800531DCu; f_8006E218(c); // 800531D8
  c->r[3]=R32(c->r[30]+0x0000052Cu); // 800531DC
  c->r[0]=rotl(c->r[3],10)&0xFFFFFC00u; // 800531E0
  c->r[0]=c->r[0]+c->r[3]; // 800531E4
  c->r[3]=c->r[31]+c->r[0]; // 800531E8
  c->r[3]=c->r[3]+0x000001A8u; // 800531EC
  c->lr=0x800531F4u; f_8006C450(c); // 800531F0
  c->lr=0x800531F8u; f_80029780(c); // 800531F4
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800531F8
  cmps(c,0,(int32_t)c->r[0],0); // 800531FC
  if (crb(c,2)) { goto L_80053244; } // 80053200
  c->r[31]=0u+0x00000000u; // 80053204
  W32(c->r[1]+0x00000018u,c->r[31]); // 80053208
  c->r[3]=c->r[1]+0x0000000Cu; // 8005320C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80053210
  c->lr=0x80053218u; f_800523F8(c); // 80053214
  c->r[3]=c->r[30]+0x00000540u; // 80053218
  c->r[4]=c->r[1]+0x0000000Cu; // 8005321C
  c->lr=0x80053224u; f_800514B0(c); // 80053220
  c->r[0]=addc(c,c->r[1],0x00000018u,0); cr0(c,c->r[0]); // 80053224
  if (crb(c,2)) { goto L_8005324C; } // 80053228
  W8(c->r[1]+0x00000008u,c->r[31]); // 8005322C
  c->r[3]=c->r[1]+0x00000008u; // 80053230
  c->r[4]=R32(c->r[1]+0x00000018u); // 80053234
  c->r[5]=0u+0x00000001u; // 80053238
  c->lr=0x80053240u; f_8020CBF8(c); // 8005323C
  goto L_8005324C; // 80053240
L_80053244:;
  c->r[0]=0u+0x00000002u; // 80053244
  W32(c->r[30]+0x000000B8u,c->r[0]); // 80053248
L_8005324C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8005324C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80053250
  c->r[30]=R32(c->r[1]+0x00000028u); // 80053254
  c->lr=c->r[0]; // 80053258
  c->r[1]=c->r[1]+0x00000030u; // 8005325C
  return; // 80053260
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,8>FPQ24gbla12GblaSelectID
void f_80053264(Ctx* __restrict c) {
  trace_call(0x80053264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053264
  c->r[0]=c->lr; // 80053268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8005326C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053270
  c->r[31]=c->r[3]|c->r[3]; // 80053274
  c->r[3]=c->r[3]+0x00000540u; // 80053278
  c->lr=0x80053280u; f_80051718(c); // 8005327C
  c->r[0]=R8(c->r[31]+0x00000734u); // 80053280
  cmps(c,0,(int32_t)c->r[0],0); // 80053284
  if (crb(c,2)) { goto L_800532B8; } // 80053288
  c->r[0]=R32(c->r[31]+0x00000720u); // 8005328C
  cmps(c,0,(int32_t)c->r[0],1); // 80053290
  if (crb(c,2)) { goto L_800532A4; } // 80053294
  cmps(c,0,(int32_t)c->r[0],2); // 80053298
  if (crb(c,2)) { goto L_800532B0; } // 8005329C
  goto L_800532B8; // 800532A0
L_800532A4:;
  c->r[0]=0u+0x00000002u; // 800532A4
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800532A8
  goto L_800532B8; // 800532AC
L_800532B0:;
  c->r[0]=0u+0x00000009u; // 800532B0
  W32(c->r[31]+0x000000B8u,c->r[0]); // 800532B4
L_800532B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800532B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800532BC
  c->lr=c->r[0]; // 800532C0
  c->r[1]=c->r[1]+0x00000010u; // 800532C4
  return; // 800532C8
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,8>FPQ24gbla12GblaSelectID
void f_800532CC(Ctx* __restrict c) {
  trace_call(0x800532CCu);
  return; // 800532CC
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,8>FPQ24gbla12GblaSelectID
void f_800532D0(Ctx* __restrict c) {
  trace_call(0x800532D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800532D0
  c->r[0]=c->lr; // 800532D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800532D8
  c->r[0]=0u+0xFFFFFFFFu; // 800532DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800532E0
  c->r[31]=c->r[3]|c->r[3]; // 800532E4
  W32(c->r[3]+0x0000052Cu,c->r[0]); // 800532E8
  c->lr=0x800532F0u; f_80029780(c); // 800532EC
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 800532F0
  cmps(c,0,(int32_t)c->r[0],0); // 800532F4
  if (!crb(c,2)) { goto L_80053304; } // 800532F8
  c->r[3]=c->r[31]+0x00000540u; // 800532FC
  c->lr=0x80053304u; f_800517DC(c); // 80053300
L_80053304:;
  c->r[3]=0u+0x802A0000u; // 80053304
  c->r[3]=c->r[3]+0xFFFFA010u; // 80053308
  c->r[3]=c->r[3]+0x00000257u; // 8005330C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80053310
  c->lr=0x80053318u; f_80019994(c); // 80053314
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053318
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8005331C
  c->lr=c->r[0]; // 80053320
  c->r[1]=c->r[1]+0x00000010u; // 80053324
  return; // 80053328
}

// init__Q25Alice32Carrier<Q24gbla12GblaSelectID,9>FPQ24gbla12GblaSelectID
void f_8005332C(Ctx* __restrict c) {
  trace_call(0x8005332Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005332C
  c->r[0]=c->lr; // 80053330
  W32(c->r[1]+0x00000024u,c->r[0]); // 80053334
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80053338
  c->r[31]=0u+0x00000001u; // 8005333C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80053340
  c->r[30]=c->r[3]|c->r[3]; // 80053344
  W32(c->r[1]+0x00000008u,c->r[31]); // 80053348
  c->r[0]=R32(c->r[3]+0x00000724u); // 8005334C
  c->r[3]=c->r[1]+0x00000008u; // 80053350
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80053354
  c->lr=0x8005335Cu; f_800769E8(c); // 80053358
  W8(c->r[30]+0x000000C1u,c->r[31]); // 8005335C
  W8(c->r[30]+0x000000C0u,c->r[31]); // 80053360
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053364
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053368
  c->r[0]=R32(c->r[1]+0x00000024u); // 8005336C
  c->lr=c->r[0]; // 80053370
  c->r[1]=c->r[1]+0x00000020u; // 80053374
  return; // 80053378
}

// calc__Q25Alice32Carrier<Q24gbla12GblaSelectID,9>FPQ24gbla12GblaSelectID
void f_8005337C(Ctx* __restrict c) {
  trace_call(0x8005337Cu);
  return; // 8005337C
}

// draw__Q25Alice32Carrier<Q24gbla12GblaSelectID,9>FPQ24gbla12GblaSelectID
void f_80053380(Ctx* __restrict c) {
  trace_call(0x80053380u);
  return; // 80053380
}

// term__Q25Alice32Carrier<Q24gbla12GblaSelectID,9>FPQ24gbla12GblaSelectID
void f_80053384(Ctx* __restrict c) {
  trace_call(0x80053384u);
  return; // 80053384
}

// init__Q25Alice33Carrier<Q24gbla12GblaSelectID,10>FPQ24gbla12GblaSelectID
void f_80053388(Ctx* __restrict c) {
  trace_call(0x80053388u);
  return; // 80053388
}

// calc__Q25Alice33Carrier<Q24gbla12GblaSelectID,10>FPQ24gbla12GblaSelectID
void f_8005338C(Ctx* __restrict c) {
  trace_call(0x8005338Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005338C
  c->r[0]=c->lr; // 80053390
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053394
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053398
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005339C
  c->r[30]=c->r[3]|c->r[3]; // 800533A0
  c->r[0]=R32(c->r[3]+0x000000C4u); // 800533A4
  cmps(c,0,(int32_t)c->r[0],-1); // 800533A8
  if (crb(c,2)) { goto L_80053424; } // 800533AC
  c->lr=0x800533B4u; f_80029780(c); // 800533B0
  c->r[0]=R32(c->r[30]+0x000000C4u); // 800533B4
  c->r[4]=0u+0x00000001u; // 800533B8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 800533BC
  c->r[3]=c->r[3]+c->r[0]; // 800533C0
  c->r[31]=c->r[3]+0x00000010u; // 800533C4
  c->r[3]=c->r[31]|c->r[31]; // 800533C8
  c->lr=0x800533D0u; f_8006DF34(c); // 800533CC
  c->r[3]=0u+0x00000000u; // 800533D0
  c->r[4]=0u+0x00000001u; // 800533D4
  c->lr=0x800533DCu; f_80070488(c); // 800533D8
  c->r[3]=c->r[31]|c->r[31]; // 800533DC
  c->r[4]=0u+0x00000000u; // 800533E0
  c->lr=0x800533E8u; f_8006DF34(c); // 800533E4
  c->r[3]=0u+0x00000000u; // 800533E8
  c->r[4]=0u+0x00000000u; // 800533EC
  c->lr=0x800533F4u; f_80070488(c); // 800533F0
  c->r[3]=c->r[31]|c->r[31]; // 800533F4
  c->r[4]=0u+0x00000003u; // 800533F8
  c->lr=0x80053400u; f_8006DF34(c); // 800533FC
  c->r[3]=0u+0x00000000u; // 80053400
  c->r[4]=0u+0x00000003u; // 80053404
  c->lr=0x8005340Cu; f_80070488(c); // 80053408
  c->r[3]=c->r[31]|c->r[31]; // 8005340C
  c->r[4]=0u+0x00000002u; // 80053410
  c->lr=0x80053418u; f_8006DF34(c); // 80053414
  c->r[3]=0u+0x00000000u; // 80053418
  c->r[4]=0u+0x00000002u; // 8005341C
  c->lr=0x80053424u; f_80070488(c); // 80053420
L_80053424:;
  c->r[0]=R32(c->r[30]+0x000000C8u); // 80053424
  cmps(c,0,(int32_t)c->r[0],-1); // 80053428
  if (crb(c,2)) { goto L_800534A4; } // 8005342C
  c->lr=0x80053434u; f_80029780(c); // 80053430
  c->r[0]=R32(c->r[30]+0x000000C8u); // 80053434
  c->r[4]=0u+0x00000001u; // 80053438
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 8005343C
  c->r[3]=c->r[3]+c->r[0]; // 80053440
  c->r[31]=c->r[3]+0x00000010u; // 80053444
  c->r[3]=c->r[31]|c->r[31]; // 80053448
  c->lr=0x80053450u; f_8006DF34(c); // 8005344C
  c->r[3]=0u+0x00000001u; // 80053450
  c->r[4]=0u+0x00000001u; // 80053454
  c->lr=0x8005345Cu; f_80070488(c); // 80053458
  c->r[3]=c->r[31]|c->r[31]; // 8005345C
  c->r[4]=0u+0x00000000u; // 80053460
  c->lr=0x80053468u; f_8006DF34(c); // 80053464
  c->r[3]=0u+0x00000001u; // 80053468
  c->r[4]=0u+0x00000000u; // 8005346C
  c->lr=0x80053474u; f_80070488(c); // 80053470
  c->r[3]=c->r[31]|c->r[31]; // 80053474
  c->r[4]=0u+0x00000003u; // 80053478
  c->lr=0x80053480u; f_8006DF34(c); // 8005347C
  c->r[3]=0u+0x00000001u; // 80053480
  c->r[4]=0u+0x00000003u; // 80053484
  c->lr=0x8005348Cu; f_80070488(c); // 80053488
  c->r[3]=c->r[31]|c->r[31]; // 8005348C
  c->r[4]=0u+0x00000002u; // 80053490
  c->lr=0x80053498u; f_8006DF34(c); // 80053494
  c->r[3]=0u+0x00000001u; // 80053498
  c->r[4]=0u+0x00000002u; // 8005349C
  c->lr=0x800534A4u; f_80070488(c); // 800534A0
L_800534A4:;
  c->r[0]=0u+0x00000001u; // 800534A4
  W8(c->r[30]+0x000000C0u,c->r[0]); // 800534A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800534AC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800534B0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800534B4
  c->lr=c->r[0]; // 800534B8
  c->r[1]=c->r[1]+0x00000010u; // 800534BC
  return; // 800534C0
}

// draw__Q25Alice33Carrier<Q24gbla12GblaSelectID,10>FPQ24gbla12GblaSelectID
void f_800534C4(Ctx* __restrict c) {
  trace_call(0x800534C4u);
  return; // 800534C4
}

// term__Q25Alice33Carrier<Q24gbla12GblaSelectID,10>FPQ24gbla12GblaSelectID
void f_800534C8(Ctx* __restrict c) {
  trace_call(0x800534C8u);
  return; // 800534C8
}

// __dt__Q24gbla12GblaSelectIDFv
void f_800534CC(Ctx* __restrict c) {
  trace_call(0x800534CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800534CC
  c->r[0]=c->lr; // 800534D0
  cmps(c,0,(int32_t)c->r[3],0); // 800534D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800534D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800534DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800534E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800534E4
  c->r[29]=c->r[4]|c->r[4]; // 800534E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800534EC
  c->r[28]=c->r[3]|c->r[3]; // 800534F0
  if (crb(c,2)) { goto L_80053640; } // 800534F4
  c->r[31]=0u+0xFFFFFFFFu; // 800534F8
  W32(c->r[3]+0x000000C4u,c->r[31]); // 800534FC
  c->r[30]=0u+0x00000000u; // 80053500
  W32(c->r[3]+0x000000C8u,c->r[31]); // 80053504
  W32(c->r[3]+0x000000BCu,c->r[30]); // 80053508
  W8(c->r[3]+0x000000C0u,c->r[30]); // 8005350C
  W8(c->r[3]+0x000000C1u,c->r[30]); // 80053510
  W32(c->r[3]+0x000000D0u,c->r[30]); // 80053514
  W32(c->r[3]+0x000000CCu,c->r[30]); // 80053518
  W8(c->r[3]+0x000004F8u,c->r[30]); // 8005351C
  W8(c->r[3]+0x000004F9u,c->r[30]); // 80053520
  W8(c->r[3]+0x000004FAu,c->r[30]); // 80053524
  W8(c->r[3]+0x000004FBu,c->r[30]); // 80053528
  W8(c->r[3]+0x000004FCu,c->r[30]); // 8005352C
  W8(c->r[3]+0x000004FDu,c->r[30]); // 80053530
  W8(c->r[3]+0x000004FEu,c->r[30]); // 80053534
  W8(c->r[3]+0x000004FFu,c->r[30]); // 80053538
  W8(c->r[3]+0x00000500u,c->r[30]); // 8005353C
  W8(c->r[3]+0x00000501u,c->r[30]); // 80053540
  W8(c->r[3]+0x00000502u,c->r[30]); // 80053544
  W8(c->r[3]+0x00000503u,c->r[30]); // 80053548
  W8(c->r[3]+0x00000504u,c->r[30]); // 8005354C
  W8(c->r[3]+0x00000505u,c->r[30]); // 80053550
  W8(c->r[3]+0x00000506u,c->r[30]); // 80053554
  W8(c->r[3]+0x00000507u,c->r[30]); // 80053558
  W8(c->r[3]+0x00000508u,c->r[30]); // 8005355C
  W8(c->r[3]+0x00000509u,c->r[30]); // 80053560
  W8(c->r[3]+0x0000050Au,c->r[30]); // 80053564
  W8(c->r[3]+0x0000050Bu,c->r[30]); // 80053568
  W8(c->r[3]+0x0000050Cu,c->r[30]); // 8005356C
  W8(c->r[3]+0x0000050Du,c->r[30]); // 80053570
  W8(c->r[3]+0x0000050Eu,c->r[30]); // 80053574
  W8(c->r[3]+0x0000050Fu,c->r[30]); // 80053578
  W8(c->r[3]+0x00000510u,c->r[30]); // 8005357C
  W8(c->r[3]+0x00000511u,c->r[30]); // 80053580
  W8(c->r[3]+0x00000512u,c->r[30]); // 80053584
  W8(c->r[3]+0x00000513u,c->r[30]); // 80053588
  W8(c->r[3]+0x00000514u,c->r[30]); // 8005358C
  W8(c->r[3]+0x00000515u,c->r[30]); // 80053590
  W8(c->r[3]+0x00000516u,c->r[30]); // 80053594
  W8(c->r[3]+0x00000517u,c->r[30]); // 80053598
  W8(c->r[3]+0x00000518u,c->r[30]); // 8005359C
  W8(c->r[3]+0x00000519u,c->r[30]); // 800535A0
  W8(c->r[3]+0x0000051Au,c->r[30]); // 800535A4
  W8(c->r[3]+0x0000051Bu,c->r[30]); // 800535A8
  W32(c->r[3]+0x0000051Cu,c->r[31]); // 800535AC
  W32(c->r[3]+0x00000520u,c->r[31]); // 800535B0
  W32(c->r[3]+0x00000524u,c->r[31]); // 800535B4
  W32(c->r[3]+0x00000528u,c->r[31]); // 800535B8
  W8(c->r[3]+0x00000538u,c->r[30]); // 800535BC
  W8(c->r[3]+0x00000539u,c->r[30]); // 800535C0
  W8(c->r[3]+0x0000053Au,c->r[30]); // 800535C4
  W8(c->r[3]+0x0000053Bu,c->r[30]); // 800535C8
  W32(c->r[3]+0x0000052Cu,c->r[31]); // 800535CC
  c->r[3]=c->r[3]+0x000004DCu; // 800535D0
  c->lr=0x800535D8u; f_80039800(c); // 800535D4
  W8(c->r[28]+0x00000942u,c->r[30]); // 800535D8
  c->r[3]=c->r[28]+0x00000540u; // 800535DC
  c->r[4]=0u+0xFFFFFFFFu; // 800535E0
  W32(c->r[28]+0x00000944u,c->r[31]); // 800535E4
  W8(c->r[28]+0x0000053Cu,c->r[30]); // 800535E8
  W8(c->r[28]+0x0000053Du,c->r[30]); // 800535EC
  W8(c->r[28]+0x0000053Eu,c->r[30]); // 800535F0
  W8(c->r[28]+0x0000053Fu,c->r[30]); // 800535F4
  W8(c->r[28]+0x00000948u,c->r[30]); // 800535F8
  c->lr=0x80053600u; f_80051340(c); // 800535FC
  c->r[3]=c->r[28]+0x000004DCu; // 80053600
  c->r[4]=0u+0xFFFFFFFFu; // 80053604
  c->lr=0x8005360Cu; f_80039408(c); // 80053608
  c->r[3]=c->r[28]+0x00000384u; // 8005360C
  c->r[4]=0u+0xFFFFFFFFu; // 80053610
  c->lr=0x80053618u; f_8005AF80(c); // 80053614
  c->r[3]=c->r[28]+0x0000022Cu; // 80053618
  c->r[4]=0u+0xFFFFFFFFu; // 8005361C
  c->lr=0x80053624u; f_8005AF80(c); // 80053620
  c->r[3]=c->r[28]+0x000000D4u; // 80053624
  c->r[4]=0u+0xFFFFFFFFu; // 80053628
  c->lr=0x80053630u; f_8005AF80(c); // 8005362C
  cmps(c,0,(int32_t)c->r[29],0); // 80053630
  if (!crb(c,1)) { goto L_80053640; } // 80053634
  c->r[3]=c->r[28]|c->r[28]; // 80053638
  c->lr=0x80053640u; f_80210AFC(c); // 8005363C
L_80053640:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053640
  c->r[3]=c->r[28]|c->r[28]; // 80053644
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053648
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005364C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80053650
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053654
  c->lr=c->r[0]; // 80053658
  c->r[1]=c->r[1]+0x00000020u; // 8005365C
  return; // 80053660
}

// init__Q24gbla12GblaSelectIDFRCQ34gbla12GblaSelectID11_init_param
void f_80053664(Ctx* __restrict c) {
  trace_call(0x80053664u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053664
  c->r[0]=c->lr; // 80053668
  W32(c->r[1]+0x00000024u,c->r[0]); // 8005366C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80053670
  c->r[31]=c->r[4]|c->r[4]; // 80053674
  W32(c->r[1]+0x00000018u,c->r[30]); // 80053678
  c->r[30]=0u+0x00000000u; // 8005367C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80053680
  c->r[29]=c->r[3]|c->r[3]; // 80053684
  W32(c->r[3]+0x000000B8u,c->r[30]); // 80053688
  W32(c->r[3]+0x000000BCu,c->r[30]); // 8005368C
  c->r[3]=0u+0x00000009u; // 80053690
  c->lr=0x80053698u; f_8002D868(c); // 80053694
  c->r[0]=R32(c->r[31]+0x00000000u); // 80053698
  c->r[31]=0u+0xFFFFFFFFu; // 8005369C
  W32(c->r[29]+0x000000CCu,c->r[3]); // 800536A0
  c->r[3]=c->r[29]+0x000004DCu; // 800536A4
  W32(c->r[29]+0x000000C4u,c->r[31]); // 800536A8
  W32(c->r[29]+0x000000C8u,c->r[31]); // 800536AC
  W32(c->r[29]+0x000000D0u,c->r[0]); // 800536B0
  W32(c->r[29]+0x0000052Cu,c->r[31]); // 800536B4
  W8(c->r[29]+0x000000C0u,c->r[30]); // 800536B8
  W8(c->r[29]+0x000000C1u,c->r[30]); // 800536BC
  W8(c->r[29]+0x000004F8u,c->r[30]); // 800536C0
  W8(c->r[29]+0x000004F9u,c->r[30]); // 800536C4
  W8(c->r[29]+0x000004FAu,c->r[30]); // 800536C8
  W8(c->r[29]+0x000004FBu,c->r[30]); // 800536CC
  W8(c->r[29]+0x000004FCu,c->r[30]); // 800536D0
  W8(c->r[29]+0x000004FDu,c->r[30]); // 800536D4
  W8(c->r[29]+0x000004FEu,c->r[30]); // 800536D8
  W8(c->r[29]+0x000004FFu,c->r[30]); // 800536DC
  W8(c->r[29]+0x00000500u,c->r[30]); // 800536E0
  W8(c->r[29]+0x00000501u,c->r[30]); // 800536E4
  W8(c->r[29]+0x00000502u,c->r[30]); // 800536E8
  W8(c->r[29]+0x00000503u,c->r[30]); // 800536EC
  W8(c->r[29]+0x00000504u,c->r[30]); // 800536F0
  W8(c->r[29]+0x00000505u,c->r[30]); // 800536F4
  W8(c->r[29]+0x00000506u,c->r[30]); // 800536F8
  W8(c->r[29]+0x00000507u,c->r[30]); // 800536FC
  W8(c->r[29]+0x00000508u,c->r[30]); // 80053700
  W8(c->r[29]+0x00000509u,c->r[30]); // 80053704
  W8(c->r[29]+0x0000050Au,c->r[30]); // 80053708
  W8(c->r[29]+0x0000050Bu,c->r[30]); // 8005370C
  W8(c->r[29]+0x0000050Cu,c->r[30]); // 80053710
  W8(c->r[29]+0x0000050Du,c->r[30]); // 80053714
  W8(c->r[29]+0x0000050Eu,c->r[30]); // 80053718
  W8(c->r[29]+0x0000050Fu,c->r[30]); // 8005371C
  W8(c->r[29]+0x00000510u,c->r[30]); // 80053720
  W8(c->r[29]+0x00000511u,c->r[30]); // 80053724
  W8(c->r[29]+0x00000512u,c->r[30]); // 80053728
  W8(c->r[29]+0x00000513u,c->r[30]); // 8005372C
  W8(c->r[29]+0x00000514u,c->r[30]); // 80053730
  W8(c->r[29]+0x00000515u,c->r[30]); // 80053734
  W8(c->r[29]+0x00000516u,c->r[30]); // 80053738
  W8(c->r[29]+0x00000517u,c->r[30]); // 8005373C
  W8(c->r[29]+0x00000518u,c->r[30]); // 80053740
  W8(c->r[29]+0x00000519u,c->r[30]); // 80053744
  W8(c->r[29]+0x0000051Au,c->r[30]); // 80053748
  W8(c->r[29]+0x0000051Bu,c->r[30]); // 8005374C
  W32(c->r[29]+0x0000051Cu,c->r[31]); // 80053750
  W32(c->r[29]+0x00000520u,c->r[31]); // 80053754
  W32(c->r[29]+0x00000524u,c->r[31]); // 80053758
  W32(c->r[29]+0x00000528u,c->r[31]); // 8005375C
  W8(c->r[29]+0x00000538u,c->r[30]); // 80053760
  W8(c->r[29]+0x00000539u,c->r[30]); // 80053764
  W8(c->r[29]+0x0000053Au,c->r[30]); // 80053768
  W8(c->r[29]+0x0000053Bu,c->r[30]); // 8005376C
  c->lr=0x80053774u; f_8003946C(c); // 80053770
  c->r[3]=c->r[29]+0x000000D4u; // 80053774
  c->r[4]=0u+0x00000001u; // 80053778
  c->lr=0x80053780u; f_8005B198(c); // 8005377C
  c->r[3]=c->r[29]+0x0000022Cu; // 80053780
  c->r[4]=0u+0x00000002u; // 80053784
  c->lr=0x8005378Cu; f_8005B198(c); // 80053788
  c->r[3]=c->r[29]+0x00000384u; // 8005378C
  c->r[4]=0u+0x00000000u; // 80053790
  c->lr=0x80053798u; f_8005B198(c); // 80053794
  W8(c->r[29]+0x00000940u,c->r[30]); // 80053798
  W8(c->r[29]+0x00000941u,c->r[30]); // 8005379C
  W32(c->r[29]+0x00000530u,c->r[31]); // 800537A0
  W8(c->r[29]+0x00000942u,c->r[30]); // 800537A4
  W32(c->r[29]+0x00000944u,c->r[31]); // 800537A8
  W8(c->r[29]+0x0000053Cu,c->r[30]); // 800537AC
  W8(c->r[29]+0x0000053Du,c->r[30]); // 800537B0
  W8(c->r[29]+0x0000053Eu,c->r[30]); // 800537B4
  W8(c->r[29]+0x0000053Fu,c->r[30]); // 800537B8
  W8(c->r[29]+0x00000948u,c->r[30]); // 800537BC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800537C0
  c->r[30]=R32(c->r[1]+0x00000018u); // 800537C4
  c->r[29]=R32(c->r[1]+0x00000014u); // 800537C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 800537CC
  c->lr=c->r[0]; // 800537D0
  c->r[1]=c->r[1]+0x00000020u; // 800537D4
  return; // 800537D8
}

// __as__Q25Alice30Mode<Q24gbla12GblaSelectID,11>Fi
void f_800537DC(Ctx* __restrict c) {
  trace_call(0x800537DCu);
  W32(c->r[3]+0x000000B8u,c->r[4]); // 800537DC
  c->r[3]=c->r[4]|c->r[4]; // 800537E0
  return; // 800537E4
}

// proc__Q24gbla12GblaSelectIDFv
void f_800537E8(Ctx* __restrict c) {
  trace_call(0x800537E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800537E8
  c->r[0]=c->lr; // 800537EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800537F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800537F4
  c->r[31]=c->r[3]|c->r[3]; // 800537F8
  c->r[3]=c->r[3]+0x000000D4u; // 800537FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80053800
  c->lr=0x80053808u; f_8005B794(c); // 80053804
  c->r[3]=c->r[31]+0x0000022Cu; // 80053808
  c->lr=0x80053810u; f_8005B794(c); // 8005380C
  c->r[3]=c->r[31]+0x00000384u; // 80053810
  c->lr=0x80053818u; f_8005B794(c); // 80053814
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053818
  c->r[6]=0u+0x00000000u; // 8005381C
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 80053820
  cmps(c,0,(int32_t)c->r[0],0); // 80053824
  if (crb(c,2)) { goto L_8005386C; } // 80053828
  c->r[5]=R8(c->r[31]+0x00000228u); // 8005382C
  c->r[3]=R8(c->r[31]+0x00000380u); // 80053830
  c->r[4]=0u-c->r[5]; // 80053834
  c->r[0]=R8(c->r[31]+0x000004D8u); // 80053838
  c->r[4]=c->r[4]|c->r[5]; // 8005383C
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 80053840
  c->r[4]=c->r[4]&c->r[3]; // 80053844
  c->r[3]=0u-c->r[4]; // 80053848
  c->r[3]=c->r[3]|c->r[4]; // 8005384C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80053850
  c->r[3]=c->r[3]&c->r[0]; // 80053854
  c->r[0]=0u-c->r[3]; // 80053858
  c->r[0]=c->r[0]|c->r[3]; // 8005385C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80053860
  if (crb(c,2)) { goto L_8005386C; } // 80053864
  c->r[6]=0u+0x00000001u; // 80053868
L_8005386C:;
  cmps(c,0,(int32_t)c->r[6],0); // 8005386C
  if (crb(c,2)) { goto L_80053910; } // 80053870
  c->r[30]=0u+0xFFFFFFFFu; // 80053874
  goto L_800538E0; // 80053878
L_8005387C:;
  cmps(c,0,(int32_t)c->r[3],-1); // 8005387C
  if (crb(c,2)) { goto L_800538B0; } // 80053880
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 80053884
  c->r[3]=c->r[31]|c->r[31]; // 80053888
  c->r[4]=c->r[31]+c->r[0]; // 8005388C
  c->r[12]=R32(c->r[4]+0x00000008u); // 80053890
  c->ctr=c->r[12]; // 80053894
  if (true) { c->lr=0x8005389Cu; dispatch(c,c->ctr); } // 80053898
  c->r[3]=R32(c->r[31]+0x000000B4u); // 8005389C
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800538A0
  W32(c->r[31]+0x000000B0u,c->r[3]); // 800538A4
  W32(c->r[31]+0x000000B4u,c->r[0]); // 800538A8
  goto L_800538BC; // 800538AC
L_800538B0:;
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800538B0
  W32(c->r[31]+0x000000B0u,c->r[30]); // 800538B4
  W32(c->r[31]+0x000000B4u,c->r[0]); // 800538B8
L_800538BC:;
  c->r[0]=R32(c->r[31]+0x000000B4u); // 800538BC
  cmps(c,0,(int32_t)c->r[0],-1); // 800538C0
  if (crb(c,2)) { goto L_800538E0; } // 800538C4
  W32(c->r[31]+0x000000B0u,c->r[0]); // 800538C8
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 800538CC
  c->r[3]=c->r[31]|c->r[31]; // 800538D0
  c->r[12]=R32(c->r[31]+c->r[0]); // 800538D4
  c->ctr=c->r[12]; // 800538D8
  if (true) { c->lr=0x800538E0u; dispatch(c,c->ctr); } // 800538DC
L_800538E0:;
  c->r[3]=R32(c->r[31]+0x000000B4u); // 800538E0
  c->r[0]=R32(c->r[31]+0x000000B8u); // 800538E4
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 800538E8
  if (!crb(c,2)) { IRQCHK(c); goto L_8005387C; } // 800538EC
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800538F0
  c->r[3]=c->r[31]|c->r[31]; // 800538F4
  c->r[4]=c->r[31]+c->r[0]; // 800538F8
  c->r[12]=R32(c->r[4]+0x00000004u); // 800538FC
  c->ctr=c->r[12]; // 80053900
  if (true) { c->lr=0x80053908u; dispatch(c,c->ctr); } // 80053904
  c->r[0]=0u+0x00000001u; // 80053908
  W8(c->r[31]+0x00000942u,c->r[0]); // 8005390C
L_80053910:;
  c->lr=0x80053914u; f_80029780(c); // 80053910
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80053914
  cmps(c,0,(int32_t)c->r[0],0); // 80053918
  if (!crb(c,2)) { goto L_80053934; } // 8005391C
  c->r[3]=0u+0xFFFFFFFFu; // 80053920
  c->r[0]=0u+0x00000001u; // 80053924
  W32(c->r[31]+0x000000C4u,c->r[3]); // 80053928
  W32(c->r[31]+0x000000C8u,c->r[3]); // 8005392C
  W8(c->r[31]+0x000000C0u,c->r[0]); // 80053930
L_80053934:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053934
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053938
  c->r[30]=R32(c->r[1]+0x00000008u); // 8005393C
  c->lr=c->r[0]; // 80053940
  c->r[1]=c->r[1]+0x00000010u; // 80053944
  return; // 80053948
}

// isOKFont__Q24gbla12GblaSelectIDFv
void f_8005394C(Ctx* __restrict c) {
  trace_call(0x8005394Cu);
  c->r[6]=R8(c->r[3]+0x00000228u); // 8005394C
  c->r[4]=R8(c->r[3]+0x00000380u); // 80053950
  c->r[5]=0u-c->r[6]; // 80053954
  c->r[0]=R8(c->r[3]+0x000004D8u); // 80053958
  c->r[3]=c->r[5]|c->r[6]; // 8005395C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80053960
  c->r[4]=c->r[3]&c->r[4]; // 80053964
  c->r[3]=0u-c->r[4]; // 80053968
  c->r[3]=c->r[3]|c->r[4]; // 8005396C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80053970
  c->r[3]=c->r[3]&c->r[0]; // 80053974
  c->r[0]=0u-c->r[3]; // 80053978
  c->r[0]=c->r[0]|c->r[3]; // 8005397C
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80053980
  return; // 80053984
}

// disp__Q24gbla12GblaSelectIDFv
void f_80053988(Ctx* __restrict c) {
  trace_call(0x80053988u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053988
  c->r[0]=c->lr; // 8005398C
  c->r[7]=0u+0x00000000u; // 80053990
  c->r[8]=0u+0x00000000u; // 80053994
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053998
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8005399C
  c->r[31]=c->r[3]|c->r[3]; // 800539A0
  c->r[9]=R32(c->r[3]+0x000000CCu); // 800539A4
  c->r[0]=R8(c->r[9]+0x0000007Cu); // 800539A8
  cmps(c,0,(int32_t)c->r[0],0); // 800539AC
  if (crb(c,2)) { goto L_800539F4; } // 800539B0
  c->r[6]=R8(c->r[3]+0x00000228u); // 800539B4
  c->r[4]=R8(c->r[3]+0x00000380u); // 800539B8
  c->r[5]=0u-c->r[6]; // 800539BC
  c->r[0]=R8(c->r[3]+0x000004D8u); // 800539C0
  c->r[5]=c->r[5]|c->r[6]; // 800539C4
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 800539C8
  c->r[5]=c->r[5]&c->r[4]; // 800539CC
  c->r[4]=0u-c->r[5]; // 800539D0
  c->r[4]=c->r[4]|c->r[5]; // 800539D4
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 800539D8
  c->r[4]=c->r[4]&c->r[0]; // 800539DC
  c->r[0]=0u-c->r[4]; // 800539E0
  c->r[0]=c->r[0]|c->r[4]; // 800539E4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 800539E8
  if (crb(c,2)) { goto L_800539F4; } // 800539EC
  c->r[8]=0u+0x00000001u; // 800539F0
L_800539F4:;
  cmps(c,0,(int32_t)c->r[8],0); // 800539F4
  if (crb(c,2)) { goto L_80053A0C; } // 800539F8
  c->r[0]=R8(c->r[3]+0x00000942u); // 800539FC
  cmps(c,0,(int32_t)c->r[0],0); // 80053A00
  if (crb(c,2)) { goto L_80053A0C; } // 80053A04
  c->r[7]=0u+0x00000001u; // 80053A08
L_80053A0C:;
  cmps(c,0,(int32_t)c->r[7],0); // 80053A0C
  if (crb(c,2)) { goto L_80053A58; } // 80053A10
  c->r[3]=c->r[9]|c->r[9]; // 80053A14
  c->lr=0x80053A1Cu; f_80060F2C(c); // 80053A18
  c->r[3]=c->r[31]+0x000000D4u; // 80053A1C
  c->lr=0x80053A24u; f_8005BBA0(c); // 80053A20
  c->r[3]=c->r[31]+0x0000022Cu; // 80053A24
  c->lr=0x80053A2Cu; f_8005BBA0(c); // 80053A28
  c->r[3]=c->r[31]+0x00000384u; // 80053A2C
  c->lr=0x80053A34u; f_8005BBA0(c); // 80053A30
  c->r[0]=R32(c->r[31]+0x000000B4u); // 80053A34
  cmps(c,0,(int32_t)c->r[0],-1); // 80053A38
  if (crb(c,2)) { goto L_80053A58; } // 80053A3C
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80053A40
  c->r[3]=c->r[31]|c->r[31]; // 80053A44
  c->r[4]=c->r[31]+c->r[0]; // 80053A48
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 80053A4C
  c->ctr=c->r[12]; // 80053A50
  if (true) { c->lr=0x80053A58u; dispatch(c,c->ctr); } // 80053A54
L_80053A58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053A58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053A5C
  c->lr=c->r[0]; // 80053A60
  c->r[1]=c->r[1]+0x00000010u; // 80053A64
  return; // 80053A68
}

// term__Q24gbla12GblaSelectIDFv
void f_80053A6C(Ctx* __restrict c) {
  trace_call(0x80053A6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053A6C
  c->r[0]=c->lr; // 80053A70
  W32(c->r[1]+0x00000044u,c->r[0]); // 80053A74
  c->r[0]=0u+0xFFFFFFFFu; // 80053A78
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80053A7C
  c->r[31]=c->r[1]|c->r[1]; // 80053A80
  W32(c->r[1]+0x00000038u,c->r[30]); // 80053A84
  c->r[30]=c->r[3]|c->r[3]; // 80053A88
  W32(c->r[1]+0x00000034u,c->r[29]); // 80053A8C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80053A90
  c->r[28]=0u+0x00000000u; // 80053A94
  c->r[4]=R32(c->r[3]+0x0000093Cu); // 80053A98
  W32(c->r[3]+0x000000BCu,c->r[28]); // 80053A9C
  cmps(c,0,(int32_t)c->r[4],0); // 80053AA0
  W8(c->r[3]+0x000000C0u,c->r[28]); // 80053AA4
  W32(c->r[3]+0x000000C4u,c->r[0]); // 80053AA8
  W32(c->r[3]+0x000000C8u,c->r[0]); // 80053AAC
  W8(c->r[3]+0x000000C1u,c->r[28]); // 80053AB0
  if (crb(c,2)) { goto L_80053AD4; } // 80053AB4
  c->r[3]=c->r[4]|c->r[4]; // 80053AB8
  c->lr=0x80053AC0u; f_800227B4(c); // 80053ABC
  c->r[0]=0u+0x00000001u; // 80053AC0
  c->r[3]=R32(c->r[30]+0x0000093Cu); // 80053AC4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80053AC8
  c->lr=0x80053AD0u; f_80022314(c); // 80053ACC
  W32(c->r[30]+0x0000093Cu,c->r[28]); // 80053AD0
L_80053AD4:;
  c->r[3]=c->r[30]+0x000000D4u; // 80053AD4
  c->lr=0x80053ADCu; f_8005BEAC(c); // 80053AD8
  c->r[3]=c->r[30]+0x0000022Cu; // 80053ADC
  c->lr=0x80053AE4u; f_8005BEAC(c); // 80053AE0
  c->r[3]=c->r[30]+0x00000384u; // 80053AE4
  c->lr=0x80053AECu; f_8005BEAC(c); // 80053AE8
  c->r[3]=0u+0x00000000u; // 80053AEC
  c->r[0]=0u+0xFFFFFFFFu; // 80053AF0
  W32(c->r[30]+0x000000CCu,c->r[3]); // 80053AF4
  c->r[4]=c->r[30]|c->r[30]; // 80053AF8
  c->r[5]=0u+0x00000000u; // 80053AFC
  W32(c->r[30]+0x0000052Cu,c->r[0]); // 80053B00
  goto L_80053B30; // 80053B04
L_80053B08:;
  c->r[6]=0u+0x00000000u; // 80053B08
  goto L_80053B20; // 80053B0C
L_80053B10:;
  c->r[3]=c->r[4]+c->r[6]; // 80053B10
  c->r[0]=0u+0x00000000u; // 80053B14
  W8(c->r[3]+0x000004F8u,c->r[0]); // 80053B18
  c->r[6]=c->r[6]+0x00000001u; // 80053B1C
L_80053B20:;
  cmpu(c,0,c->r[6],0x00000009u); // 80053B20
  if (crb(c,0)) { IRQCHK(c); goto L_80053B10; } // 80053B24
  c->r[4]=c->r[4]+0x00000009u; // 80053B28
  c->r[5]=c->r[5]+0x00000001u; // 80053B2C
L_80053B30:;
  cmps(c,0,(int32_t)c->r[5],4); // 80053B30
  if (crb(c,0)) { IRQCHK(c); goto L_80053B08; } // 80053B34
  c->r[28]=0u+0xFFFFFFFFu; // 80053B38
  c->r[29]=0u+0x00000000u; // 80053B3C
  W32(c->r[30]+0x0000051Cu,c->r[28]); // 80053B40
  c->r[3]=c->r[30]+0x000004DCu; // 80053B44
  W32(c->r[30]+0x00000520u,c->r[28]); // 80053B48
  W32(c->r[30]+0x00000524u,c->r[28]); // 80053B4C
  W32(c->r[30]+0x00000528u,c->r[28]); // 80053B50
  W8(c->r[30]+0x00000538u,c->r[29]); // 80053B54
  W8(c->r[30]+0x00000539u,c->r[29]); // 80053B58
  W8(c->r[30]+0x0000053Au,c->r[29]); // 80053B5C
  W8(c->r[30]+0x0000053Bu,c->r[29]); // 80053B60
  c->lr=0x80053B68u; f_80039800(c); // 80053B64
  W32(c->r[30]+0x00000944u,c->r[28]); // 80053B68
  c->r[28]=0u+0x00000000u; // 80053B6C
  W8(c->r[30]+0x0000053Cu,c->r[29]); // 80053B70
  W8(c->r[30]+0x0000053Du,c->r[29]); // 80053B74
  W8(c->r[30]+0x0000053Eu,c->r[29]); // 80053B78
  W8(c->r[30]+0x0000053Fu,c->r[29]); // 80053B7C
  goto L_80053B94; // 80053B80
L_80053B84:;
  {uint32_t ea=c->r[2]+0xFFFF8218u; c->f[1]=c->ps1[1]=RF32(ea);} // 80053B84
  c->r[3]=c->r[28]|c->r[28]; // 80053B88
  c->lr=0x80053B90u; f_80078E14(c); // 80053B8C
  c->r[28]=c->r[28]+0x00000001u; // 80053B90
L_80053B94:;
  cmpu(c,0,c->r[28],0x00000002u); // 80053B94
  if (crb(c,0)) { IRQCHK(c); goto L_80053B84; } // 80053B98
  c->r[3]=0u+0x00000000u; // 80053B9C
  W8(c->r[30]+0x00000948u,c->r[3]); // 80053BA0
  c->r[0]=R32(c->r[13]+0xFFFF970Cu); // 80053BA4
  W8(c->r[31]+0x00000008u,c->r[3]); // 80053BA8
  cmps(c,0,(int32_t)c->r[0],0); // 80053BAC
  if (!crb(c,2)) { goto L_80053C08; } // 80053BB0
  c->r[29]=0u+0x802E0000u; // 80053BB4
  c->r[3]=0u+0x00000080u; // 80053BB8
  c->r[29]=c->r[29]+0x00001BC8u; // 80053BBC
  c->r[5]=0u+0x00000023u; // 80053BC0
  c->r[4]=c->r[29]|c->r[29]; // 80053BC4
  c->lr=0x80053BCCu; f_8020D35C(c); // 80053BC8
  cmps(c,0,(int32_t)c->r[3],0); // 80053BCC
  c->r[28]=c->r[3]|c->r[3]; // 80053BD0
  if (crb(c,2)) { goto L_80053C04; } // 80053BD4
  W32(c->r[31]+0x00000024u,c->r[1]); // 80053BD8
  c->lr=0x80053BE0u; f_80073864(c); // 80053BDC
  goto L_80053C04; // 80053BE0
  c->r[3]=c->r[28]|c->r[28]; // 80053BE4
  c->r[4]=c->r[29]|c->r[29]; // 80053BE8
  c->r[5]=0u+0x00000023u; // 80053BEC
  c->lr=0x80053BF4u; f_8020E944(c); // 80053BF0
  c->r[3]=0u+0x00000000u; // 80053BF4
  c->r[4]=0u+0x00000000u; // 80053BF8
  c->r[5]=0u+0x00000000u; // 80053BFC
  c->lr=0x80053C04u; f_800AF804(c); // 80053C00
L_80053C04:;
  W32(c->r[13]+0xFFFF970Cu,c->r[28]); // 80053C04
L_80053C08:;
  c->r[28]=R32(c->r[13]+0xFFFF970Cu); // 80053C08
  c->r[3]=c->r[28]|c->r[28]; // 80053C0C
  c->lr=0x80053C14u; f_80073FFC(c); // 80053C10
  c->r[3]=c->r[28]|c->r[28]; // 80053C14
  c->r[4]=0u+0x00000000u; // 80053C18
  c->lr=0x80053C20u; f_80074190(c); // 80053C1C
  c->r[10]=c->r[31]|c->r[31]; // 80053C20
  c->r[31]=R32(c->r[31]+0x0000003Cu); // 80053C24
  c->r[30]=R32(c->r[10]+0x00000038u); // 80053C28
  c->r[29]=R32(c->r[10]+0x00000034u); // 80053C2C
  c->r[28]=R32(c->r[10]+0x00000030u); // 80053C30
  c->r[10]=R32(c->r[1]+0x00000000u); // 80053C34
  c->r[0]=R32(c->r[10]+0x00000004u); // 80053C38
  c->r[1]=c->r[10]|c->r[10]; // 80053C3C
  c->lr=c->r[0]; // 80053C40
  return; // 80053C44
}

// selectSpriteAddArray__Q24gbla12GblaSelectIDFv
void f_80053C48(Ctx* __restrict c) {
  trace_call(0x80053C48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053C48
  c->r[0]=c->lr; // 80053C4C
  c->r[4]=0u+0x00000001u; // 80053C50
  c->r[5]=0u+0x00000128u; // 80053C54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80053C58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80053C5C
  c->r[31]=c->r[3]|c->r[3]; // 80053C60
  c->r[3]=R32(c->r[3]+0x000000CCu); // 80053C64
  c->lr=0x80053C6Cu; f_80065E40(c); // 80053C68
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053C6C
  c->r[4]=0u+0x00000001u; // 80053C70
  c->r[5]=0u+0x0000011Cu; // 80053C74
  c->lr=0x80053C7Cu; f_80065E40(c); // 80053C78
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053C7C
  c->r[4]=0u+0x00000001u; // 80053C80
  c->r[5]=0u+0x00000110u; // 80053C84
  c->lr=0x80053C8Cu; f_80065E40(c); // 80053C88
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053C8C
  c->r[4]=0u+0x00000001u; // 80053C90
  c->r[5]=0u+0x00000104u; // 80053C94
  c->lr=0x80053C9Cu; f_80065E40(c); // 80053C98
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053C9C
  c->r[4]=0u+0x00000001u; // 80053CA0
  c->r[5]=0u+0x00000129u; // 80053CA4
  c->lr=0x80053CACu; f_80065E40(c); // 80053CA8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053CAC
  c->r[4]=0u+0x00000001u; // 80053CB0
  c->r[5]=0u+0x0000011Du; // 80053CB4
  c->lr=0x80053CBCu; f_80065E40(c); // 80053CB8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053CBC
  c->r[4]=0u+0x00000001u; // 80053CC0
  c->r[5]=0u+0x00000111u; // 80053CC4
  c->lr=0x80053CCCu; f_80065E40(c); // 80053CC8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053CCC
  c->r[4]=0u+0x00000001u; // 80053CD0
  c->r[5]=0u+0x00000105u; // 80053CD4
  c->lr=0x80053CDCu; f_80065E40(c); // 80053CD8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053CDC
  c->r[4]=0u+0x00000001u; // 80053CE0
  c->r[5]=0u+0x0000012Du; // 80053CE4
  c->lr=0x80053CECu; f_80065E40(c); // 80053CE8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053CEC
  c->r[4]=0u+0x00000001u; // 80053CF0
  c->r[5]=0u+0x0000012Cu; // 80053CF4
  c->lr=0x80053CFCu; f_80065E40(c); // 80053CF8
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053CFC
  c->r[4]=0u+0x00000001u; // 80053D00
  c->r[5]=0u+0x0000012Bu; // 80053D04
  c->lr=0x80053D0Cu; f_80065E40(c); // 80053D08
  c->r[3]=0u+0x00000173u; // 80053D0C
  c->lr=0x80053D14u; f_80022B5C(c); // 80053D10
  c->r[5]=c->r[3]|c->r[3]; // 80053D14
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053D18
  c->r[4]=0u+0x00000001u; // 80053D1C
  c->lr=0x80053D24u; f_80065E40(c); // 80053D20
  c->r[3]=0u+0x00000174u; // 80053D24
  c->lr=0x80053D2Cu; f_80022B5C(c); // 80053D28
  c->r[5]=c->r[3]|c->r[3]; // 80053D2C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053D30
  c->r[4]=0u+0x00000001u; // 80053D34
  c->lr=0x80053D3Cu; f_80065E40(c); // 80053D38
  c->r[3]=0u+0x00000175u; // 80053D3C
  c->lr=0x80053D44u; f_80022B5C(c); // 80053D40
  c->r[5]=c->r[3]|c->r[3]; // 80053D44
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053D48
  c->r[4]=0u+0x00000001u; // 80053D4C
  c->lr=0x80053D54u; f_80065E40(c); // 80053D50
  c->r[3]=0u+0x00000176u; // 80053D54
  c->lr=0x80053D5Cu; f_80022B5C(c); // 80053D58
  c->r[5]=c->r[3]|c->r[3]; // 80053D5C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053D60
  c->r[4]=0u+0x00000001u; // 80053D64
  c->lr=0x80053D6Cu; f_80065E40(c); // 80053D68
  c->r[3]=0u+0x00000177u; // 80053D6C
  c->lr=0x80053D74u; f_80022B5C(c); // 80053D70
  c->r[5]=c->r[3]|c->r[3]; // 80053D74
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053D78
  c->r[4]=0u+0x00000001u; // 80053D7C
  c->lr=0x80053D84u; f_80065E40(c); // 80053D80
  c->r[3]=0u+0x0000017Cu; // 80053D84
  c->lr=0x80053D8Cu; f_80022B5C(c); // 80053D88
  c->r[5]=c->r[3]|c->r[3]; // 80053D8C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053D90
  c->r[4]=0u+0x00000001u; // 80053D94
  c->lr=0x80053D9Cu; f_80065E40(c); // 80053D98
  c->r[3]=0u+0x0000017Du; // 80053D9C
  c->lr=0x80053DA4u; f_80022B5C(c); // 80053DA0
  c->r[5]=c->r[3]|c->r[3]; // 80053DA4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053DA8
  c->r[4]=0u+0x00000001u; // 80053DAC
  c->lr=0x80053DB4u; f_80065E40(c); // 80053DB0
  c->r[3]=0u+0x0000017Au; // 80053DB4
  c->lr=0x80053DBCu; f_80022B5C(c); // 80053DB8
  c->r[5]=c->r[3]|c->r[3]; // 80053DBC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053DC0
  c->r[4]=0u+0x00000001u; // 80053DC4
  c->lr=0x80053DCCu; f_80065E40(c); // 80053DC8
  c->r[3]=0u+0x0000017Bu; // 80053DCC
  c->lr=0x80053DD4u; f_80022B5C(c); // 80053DD0
  c->r[5]=c->r[3]|c->r[3]; // 80053DD4
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053DD8
  c->r[4]=0u+0x00000001u; // 80053DDC
  c->lr=0x80053DE4u; f_80065E40(c); // 80053DE0
  c->r[3]=0u+0x00000178u; // 80053DE4
  c->lr=0x80053DECu; f_80022B5C(c); // 80053DE8
  c->r[5]=c->r[3]|c->r[3]; // 80053DEC
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053DF0
  c->r[4]=0u+0x00000001u; // 80053DF4
  c->lr=0x80053DFCu; f_80065E40(c); // 80053DF8
  c->r[3]=0u+0x00000179u; // 80053DFC
  c->lr=0x80053E04u; f_80022B5C(c); // 80053E00
  c->r[5]=c->r[3]|c->r[3]; // 80053E04
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053E08
  c->r[4]=0u+0x00000001u; // 80053E0C
  c->lr=0x80053E14u; f_80065E40(c); // 80053E10
  c->r[0]=R32(c->r[1]+0x00000014u); // 80053E14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80053E18
  c->lr=c->r[0]; // 80053E1C
  c->r[1]=c->r[1]+0x00000010u; // 80053E20
  return; // 80053E24
}

// calcProc__Q24gbla12GblaSelectIDFRCQ25Alice11ModeType<1>
void f_80053E28(Ctx* __restrict c) {
  trace_call(0x80053E28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053E28
  c->r[0]=c->lr; // 80053E2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80053E30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80053E34
  c->r[31]=c->r[3]|c->r[3]; // 80053E38
  c->r[3]=0u+0x00000000u; // 80053E3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80053E40
  W32(c->r[1]+0x00000014u,c->r[29]); // 80053E44
  c->lr=0x80053E4Cu; f_800705D0(c); // 80053E48
  cmps(c,0,(int32_t)c->r[3],0); // 80053E4C
  c->r[30]=c->r[3]|c->r[3]; // 80053E50
  c->r[29]=0u+0x00000001u; // 80053E54
  c->r[4]=0u+0x00000000u; // 80053E58
  if (crb(c,2)) { goto L_80053E70; } // 80053E5C
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80053E60
  cmps(c,0,(int32_t)c->r[0],-1); // 80053E64
  if (crb(c,2)) { goto L_80053E70; } // 80053E68
  c->r[4]=0u+0x00000001u; // 80053E6C
L_80053E70:;
  cmps(c,0,(int32_t)c->r[4],0); // 80053E70
  if (!crb(c,2)) { goto L_80053EA0; } // 80053E74
  cmps(c,0,(int32_t)c->r[3],0); // 80053E78
  c->r[3]=0u+0x00000000u; // 80053E7C
  if (!crb(c,2)) { goto L_80053E94; } // 80053E80
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80053E84
  cmps(c,0,(int32_t)c->r[0],-1); // 80053E88
  if (!crb(c,2)) { goto L_80053E94; } // 80053E8C
  c->r[3]=0u+0x00000001u; // 80053E90
L_80053E94:;
  cmps(c,0,(int32_t)c->r[3],0); // 80053E94
  if (!crb(c,2)) { goto L_80053EA0; } // 80053E98
  c->r[29]=0u+0x00000000u; // 80053E9C
L_80053EA0:;
  c->r[3]=0u+0x00000001u; // 80053EA0
  c->lr=0x80053EA8u; f_800705D0(c); // 80053EA4
  cmps(c,0,(int32_t)c->r[3],0); // 80053EA8
  c->r[5]=0u+0x00000001u; // 80053EAC
  c->r[4]=0u+0x00000000u; // 80053EB0
  if (crb(c,2)) { goto L_80053EC8; } // 80053EB4
  c->r[0]=R32(c->r[31]+0x000000C8u); // 80053EB8
  cmps(c,0,(int32_t)c->r[0],-1); // 80053EBC
  if (crb(c,2)) { goto L_80053EC8; } // 80053EC0
  c->r[4]=0u+0x00000001u; // 80053EC4
L_80053EC8:;
  cmps(c,0,(int32_t)c->r[4],0); // 80053EC8
  if (!crb(c,2)) { goto L_80053EF8; } // 80053ECC
  cmps(c,0,(int32_t)c->r[3],0); // 80053ED0
  c->r[4]=0u+0x00000000u; // 80053ED4
  if (!crb(c,2)) { goto L_80053EEC; } // 80053ED8
  c->r[0]=R32(c->r[31]+0x000000C8u); // 80053EDC
  cmps(c,0,(int32_t)c->r[0],-1); // 80053EE0
  if (!crb(c,2)) { goto L_80053EEC; } // 80053EE4
  c->r[4]=0u+0x00000001u; // 80053EE8
L_80053EEC:;
  cmps(c,0,(int32_t)c->r[4],0); // 80053EEC
  if (!crb(c,2)) { goto L_80053EF8; } // 80053EF0
  c->r[5]=0u+0x00000000u; // 80053EF4
L_80053EF8:;
  cmps(c,0,(int32_t)c->r[30],0); // 80053EF8
  c->r[4]=0u+0x00000000u; // 80053EFC
  if (!crb(c,2)) { goto L_80053F10; } // 80053F00
  cmps(c,0,(int32_t)c->r[3],0); // 80053F04
  if (!crb(c,2)) { goto L_80053F10; } // 80053F08
  c->r[4]=0u+0x00000001u; // 80053F0C
L_80053F10:;
  cmps(c,0,(int32_t)c->r[30],0); // 80053F10
  if (!crb(c,2)) { goto L_80053F24; } // 80053F14
  c->r[0]=0u+0xFFFFFFFFu; // 80053F18
  W32(c->r[31]+0x000000C4u,c->r[0]); // 80053F1C
  goto L_80053F34; // 80053F20
L_80053F24:;
  cmps(c,0,(int32_t)c->r[3],0); // 80053F24
  if (!crb(c,2)) { goto L_80053F34; } // 80053F28
  c->r[0]=0u+0xFFFFFFFFu; // 80053F2C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80053F30
L_80053F34:;
  c->r[0]=R32(c->r[31]+0x00000530u); // 80053F34
  cmps(c,0,(int32_t)c->r[0],-1); // 80053F38
  if (crb(c,2)) { goto L_80053F78; } // 80053F3C
  c->r[0]=R8(c->r[31]+0x00000941u); // 80053F40
  cmps(c,0,(int32_t)c->r[0],0); // 80053F44
  if (!crb(c,2)) { goto L_80053F78; } // 80053F48
  cmps(c,0,(int32_t)c->r[4],0); // 80053F4C
  if (!crb(c,2)) { goto L_80053F78; } // 80053F50
  cmps(c,0,(int32_t)c->r[29],0); // 80053F54
  if (crb(c,2)) { goto L_80053F78; } // 80053F58
  cmps(c,0,(int32_t)c->r[5],0); // 80053F5C
  if (crb(c,2)) { goto L_80053F78; } // 80053F60
  c->r[3]=0u+0x00000001u; // 80053F64
  c->r[0]=0u+0x0000000Au; // 80053F68
  W8(c->r[31]+0x00000941u,c->r[3]); // 80053F6C
  W32(c->r[31]+0x000000B8u,c->r[0]); // 80053F70
  goto L_80053FA8; // 80053F74
L_80053F78:;
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80053F78
  c->r[0]=R8(c->r[3]+0x0000007Cu); // 80053F7C
  cmps(c,0,(int32_t)c->r[0],0); // 80053F80
  if (crb(c,2)) { goto L_80053FA8; } // 80053F84
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 80053F88
  c->lr=0x80053F90u; f_80019FBC(c); // 80053F8C
  cmps(c,0,(int32_t)c->r[3],0); // 80053F90
  if (crb(c,2)) { goto L_80053FA8; } // 80053F94
  c->r[3]=0u+0x00000001u; // 80053F98
  c->r[0]=0u+0x00000002u; // 80053F9C
  W8(c->r[31]+0x00000948u,c->r[3]); // 80053FA0
  W32(c->r[31]+0x000000B8u,c->r[0]); // 80053FA4
L_80053FA8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80053FA8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80053FAC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80053FB0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80053FB4
  c->lr=c->r[0]; // 80053FB8
  c->r[1]=c->r[1]+0x00000020u; // 80053FBC
  return; // 80053FC0
}

// initProc__Q24gbla12GblaSelectIDFRCQ25Alice11ModeType<2>
void f_80053FC4(Ctx* __restrict c) {
  trace_call(0x80053FC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80053FC4
  c->r[0]=c->lr; // 80053FC8
  c->r[4]=0u+0x802A0000u; // 80053FCC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80053FD0
  c->r[4]=c->r[4]+0xFFFFA010u; // 80053FD4
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80053FD8
  c->r[30]=c->r[3]|c->r[3]; // 80053FDC
  c->r[31]=c->r[1]|c->r[1]; // 80053FE0
  c->r[3]=c->r[4]+0x0000028Cu; // 80053FE4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80053FE8
  c->lr=0x80053FF0u; f_80019994(c); // 80053FEC
  c->r[0]=R32(c->r[13]+0xFFFF970Cu); // 80053FF0
  c->r[3]=0u+0x00000000u; // 80053FF4
  W8(c->r[31]+0x00000008u,c->r[3]); // 80053FF8
  cmps(c,0,(int32_t)c->r[0],0); // 80053FFC
  if (!crb(c,2)) { goto L_80054058; } // 80054000
  c->r[28]=0u+0x802E0000u; // 80054004
  c->r[3]=0u+0x00000080u; // 80054008
  c->r[28]=c->r[28]+0x00001BC8u; // 8005400C
  c->r[5]=0u+0x00000023u; // 80054010
  c->r[4]=c->r[28]|c->r[28]; // 80054014
  c->lr=0x8005401Cu; f_8020D35C(c); // 80054018
  cmps(c,0,(int32_t)c->r[3],0); // 8005401C
  c->r[29]=c->r[3]|c->r[3]; // 80054020
  if (crb(c,2)) { goto L_80054054; } // 80054024
  W32(c->r[31]+0x00000024u,c->r[1]); // 80054028
  c->lr=0x80054030u; f_80073864(c); // 8005402C
  goto L_80054054; // 80054030
  c->r[3]=c->r[29]|c->r[29]; // 80054034
  c->r[4]=c->r[28]|c->r[28]; // 80054038
  c->r[5]=0u+0x00000023u; // 8005403C
  c->lr=0x80054044u; f_8020E944(c); // 80054040
  c->r[3]=0u+0x00000000u; // 80054044
  c->r[4]=0u+0x00000000u; // 80054048
  c->r[5]=0u+0x00000000u; // 8005404C
  c->lr=0x80054054u; f_800AF804(c); // 80054050
L_80054054:;
  W32(c->r[13]+0xFFFF970Cu,c->r[29]); // 80054054
L_80054058:;
  c->r[28]=R32(c->r[13]+0xFFFF970Cu); // 80054058
  c->r[3]=c->r[28]|c->r[28]; // 8005405C
  c->lr=0x80054064u; f_80073FFC(c); // 80054060
  c->r[4]=R32(c->r[30]+0x000000D0u); // 80054064
  c->r[3]=c->r[28]|c->r[28]; // 80054068
  c->lr=0x80054070u; f_80073E10(c); // 8005406C
  c->r[3]=c->r[28]|c->r[28]; // 80054070
  c->r[4]=0u+0x00000001u; // 80054074
  c->lr=0x8005407Cu; f_80074190(c); // 80054078
  c->r[3]=R32(c->r[30]+0x000000CCu); // 8005407C
  c->r[4]=0u+0x00000002u; // 80054080
  c->r[5]=0u+0x00000000u; // 80054084
  c->lr=0x8005408Cu; f_800663F0(c); // 80054088
  c->r[3]=R32(c->r[30]+0x000000CCu); // 8005408C
  c->r[4]=0u+0x00000002u; // 80054090
  c->r[5]=0u+0x00000000u; // 80054094
  c->lr=0x8005409Cu; f_80066908(c); // 80054098
  c->r[4]=0u+0x00000001u; // 8005409C
  c->r[3]=R32(c->r[30]+0x000000CCu); // 800540A0
  c->r[5]=c->r[4]|c->r[4]; // 800540A4
  c->lr=0x800540ACu; f_800663F0(c); // 800540A8
  c->r[4]=0u+0x00000001u; // 800540AC
  c->r[3]=R32(c->r[30]+0x000000CCu); // 800540B0
  c->r[5]=c->r[4]|c->r[4]; // 800540B4
  c->lr=0x800540BCu; f_80066908(c); // 800540B8
  c->r[29]=c->r[30]+0x000004F8u; // 800540BC
  c->r[27]=0u+0x00000000u; // 800540C0
  c->r[28]=0u+0x00000000u; // 800540C4
  goto L_80054104; // 800540C8
L_800540CC:;
  c->lr=0x800540D0u; f_80029780(c); // 800540CC
  c->r[3]=c->r[3]+c->r[28]; // 800540D0
  c->r[3]=c->r[3]+0x00000010u; // 800540D4
  c->lr=0x800540DCu; f_8006DED8(c); // 800540D8
  c->r[4]=0u+0x802A0000u; // 800540DC
  c->r[5]=c->r[3]|c->r[3]; // 800540E0
  c->r[4]=c->r[4]+0xFFFFA010u; // 800540E4
  c->r[3]=c->r[29]|c->r[29]; // 800540E8
  c->r[4]=c->r[4]+0x000002B9u; // 800540EC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800540F0
  c->lr=0x800540F8u; f_800B5FD4(c); // 800540F4
  c->r[28]=c->r[28]+0x00000060u; // 800540F8
  c->r[29]=c->r[29]+0x00000009u; // 800540FC
  c->r[27]=c->r[27]+0x00000001u; // 80054100
L_80054104:;
  cmps(c,0,(int32_t)c->r[27],4); // 80054104
  if (crb(c,0)) { IRQCHK(c); goto L_800540CC; } // 80054108
  c->r[29]=c->r[30]|c->r[30]; // 8005410C
  c->r[27]=0u+0x00000000u; // 80054110
  c->r[28]=0u+0x00000000u; // 80054114
  goto L_80054140; // 80054118
L_8005411C:;
  c->lr=0x80054120u; f_80029780(c); // 8005411C
  c->r[3]=c->r[3]+c->r[28]; // 80054120
  c->r[3]=c->r[3]+0x00000190u; // 80054124
  c->lr=0x8005412Cu; f_8006E22C(c); // 80054128
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8005412C
  W32(c->r[29]+0x0000051Cu,c->r[0]); // 80054130
  c->r[28]=c->r[28]+0x00000006u; // 80054134
  c->r[29]=c->r[29]+0x00000004u; // 80054138
  c->r[27]=c->r[27]+0x00000001u; // 8005413C
L_80054140:;
  cmps(c,0,(int32_t)c->r[27],4); // 80054140
  if (crb(c,0)) { IRQCHK(c); goto L_8005411C; } // 80054144
  c->r[29]=0u+0x00000000u; // 80054148
  W8(c->r[30]+0x00000538u,c->r[29]); // 8005414C
  c->r[3]=c->r[30]+0x000004DCu; // 80054150
  W8(c->r[30]+0x00000539u,c->r[29]); // 80054154
  W8(c->r[30]+0x0000053Au,c->r[29]); // 80054158
  W8(c->r[30]+0x0000053Bu,c->r[29]); // 8005415C
  c->lr=0x80054164u; f_8003946C(c); // 80054160
  c->r[0]=0u+0xFFFFFFFFu; // 80054164
  W8(c->r[30]+0x00000941u,c->r[29]); // 80054168
  c->r[10]=c->r[31]|c->r[31]; // 8005416C
  W32(c->r[30]+0x000000BCu,c->r[29]); // 80054170
  W32(c->r[30]+0x00000944u,c->r[0]); // 80054174
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80054178
  c->r[10]=R32(c->r[1]+0x00000000u); // 8005417C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80054180
  c->r[1]=c->r[10]|c->r[10]; // 80054184
  c->lr=c->r[0]; // 80054188
  return; // 8005418C
}

// getButtonSprite__Q24gbla12GblaSelectIDFQ34gbla5param6_id_no
void f_80054190(Ctx* __restrict c) {
  trace_call(0x80054190u);
  cmps(c,0,(int32_t)c->r[4],0); // 80054190
  c->r[3]=0u+0x00000128u; // 80054194
  if (crb(c,2)) { goto L_800541B8; } // 80054198
  cmps(c,0,(int32_t)c->r[4],1); // 8005419C
  if (crb(c,2)) { goto L_800541C0; } // 800541A0
  cmps(c,0,(int32_t)c->r[4],2); // 800541A4
  if (crb(c,2)) { goto L_800541C8; } // 800541A8
  cmps(c,0,(int32_t)c->r[4],3); // 800541AC
  if (crb(c,2)) { goto L_800541D0; } // 800541B0
  return; // 800541B4
L_800541B8:;
  c->r[3]=0u+0x00000128u; // 800541B8
  return; // 800541BC
L_800541C0:;
  c->r[3]=0u+0x0000011Cu; // 800541C0
  return; // 800541C4
L_800541C8:;
  c->r[3]=0u+0x00000110u; // 800541C8
  return; // 800541CC
L_800541D0:;
  c->r[3]=0u+0x00000104u; // 800541D0
  return; // 800541D4
}

// calcProc__Q24gbla12GblaSelectIDFRCQ25Alice11ModeType<2>
void f_800541D8(Ctx* __restrict c) {
  trace_call(0x800541D8u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 800541D8
  c->r[0]=c->lr; // 800541DC
  W32(c->r[1]+0x00000084u,c->r[0]); // 800541E0
  c->r[11]=c->r[1]+0x00000080u; // 800541E4
  c->lr=0x800541ECu; { W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800541E8
  c->r[31]=c->r[3]|c->r[3]; // 800541EC
  c->lr=0x800541F4u; f_800228E8(c); // 800541F0
  c->r[24]=c->r[3]|c->r[3]; // 800541F4
  c->r[3]=0u+0x00000000u; // 800541F8
  c->lr=0x80054200u; f_800705D0(c); // 800541FC
  cmps(c,0,(int32_t)c->r[3],0); // 80054200
  c->r[23]=c->r[3]|c->r[3]; // 80054204
  c->r[29]=0u+0x00000001u; // 80054208
  c->r[4]=0u+0x00000000u; // 8005420C
  if (crb(c,2)) { goto L_80054224; } // 80054210
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80054214
  cmps(c,0,(int32_t)c->r[0],-1); // 80054218
  if (crb(c,2)) { goto L_80054224; } // 8005421C
  c->r[4]=0u+0x00000001u; // 80054220
L_80054224:;
  cmps(c,0,(int32_t)c->r[4],0); // 80054224
  if (!crb(c,2)) { goto L_80054254; } // 80054228
  cmps(c,0,(int32_t)c->r[3],0); // 8005422C
  c->r[3]=0u+0x00000000u; // 80054230
  if (!crb(c,2)) { goto L_80054248; } // 80054234
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80054238
  cmps(c,0,(int32_t)c->r[0],-1); // 8005423C
  if (!crb(c,2)) { goto L_80054248; } // 80054240
  c->r[3]=0u+0x00000001u; // 80054244
L_80054248:;
  cmps(c,0,(int32_t)c->r[3],0); // 80054248
  if (!crb(c,2)) { goto L_80054254; } // 8005424C
  c->r[29]=0u+0x00000000u; // 80054250
L_80054254:;
  c->r[3]=0u+0x00000001u; // 80054254
  c->lr=0x8005425Cu; f_800705D0(c); // 80054258
  cmps(c,0,(int32_t)c->r[3],0); // 8005425C
  c->r[22]=c->r[3]|c->r[3]; // 80054260
  c->r[28]=0u+0x00000001u; // 80054264
  c->r[4]=0u+0x00000000u; // 80054268
  if (crb(c,2)) { goto L_80054280; } // 8005426C
  c->r[0]=R32(c->r[31]+0x000000C8u); // 80054270
  cmps(c,0,(int32_t)c->r[0],-1); // 80054274
  if (crb(c,2)) { goto L_80054280; } // 80054278
  c->r[4]=0u+0x00000001u; // 8005427C
L_80054280:;
  cmps(c,0,(int32_t)c->r[4],0); // 80054280
  if (!crb(c,2)) { goto L_800542B0; } // 80054284
  cmps(c,0,(int32_t)c->r[3],0); // 80054288
  c->r[4]=0u+0x00000000u; // 8005428C
  if (!crb(c,2)) { goto L_800542A4; } // 80054290
  c->r[0]=R32(c->r[31]+0x000000C8u); // 80054294
  cmps(c,0,(int32_t)c->r[0],-1); // 80054298
  if (!crb(c,2)) { goto L_800542A4; } // 8005429C
  c->r[4]=0u+0x00000001u; // 800542A0
L_800542A4:;
  cmps(c,0,(int32_t)c->r[4],0); // 800542A4
  if (!crb(c,2)) { goto L_800542B0; } // 800542A8
  c->r[28]=0u+0x00000000u; // 800542AC
L_800542B0:;
  cmps(c,0,(int32_t)c->r[23],0); // 800542B0
  c->r[27]=0u+0x00000000u; // 800542B4
  if (!crb(c,2)) { goto L_800542C8; } // 800542B8
  cmps(c,0,(int32_t)c->r[3],0); // 800542BC
  if (!crb(c,2)) { goto L_800542C8; } // 800542C0
  c->r[27]=0u+0x00000001u; // 800542C4
L_800542C8:;
  c->r[3]=c->r[24]|c->r[24]; // 800542C8
  c->r[4]=0u+0x00000000u; // 800542CC
  c->lr=0x800542D4u; f_800741D4(c); // 800542D0
  c->r[25]=c->r[3]|c->r[3]; // 800542D4
  c->r[3]=c->r[24]|c->r[24]; // 800542D8
  c->r[4]=0u+0x00000001u; // 800542DC
  c->lr=0x800542E4u; f_800741D4(c); // 800542E0
  cmps(c,0,(int32_t)c->r[29],0); // 800542E4
  c->r[26]=c->r[3]|c->r[3]; // 800542E8
  if (crb(c,2)) { goto L_800542F8; } // 800542EC
  c->r[25]=0u+0xFFFFFFFFu; // 800542F0
  goto L_80054304; // 800542F4
L_800542F8:;
  cmps(c,0,(int32_t)c->r[28],0); // 800542F8
  if (crb(c,2)) { goto L_80054304; } // 800542FC
  c->r[26]=0u+0xFFFFFFFFu; // 80054300
L_80054304:;
  c->r[5]=R8(c->r[31]+0x0000053Cu); // 80054304
  cmps(c,0,(int32_t)c->r[23],0); // 80054308
  c->r[4]=R8(c->r[31]+0x0000053Du); // 8005430C
  c->r[0]=0u-c->r[5]; // 80054310
  c->r[3]=R8(c->r[31]+0x0000053Eu); // 80054314
  c->r[5]=c->r[0]|c->r[5]; // 80054318
  c->r[0]=R8(c->r[31]+0x0000053Fu); // 8005431C
  c->r[5]=rotl(c->r[5],1)&0x00000001u; // 80054320
  c->r[5]=c->r[5]|c->r[4]; // 80054324
  c->r[4]=0u-c->r[5]; // 80054328
  c->r[4]=c->r[4]|c->r[5]; // 8005432C
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 80054330
  c->r[4]=c->r[4]|c->r[3]; // 80054334
  c->r[3]=0u-c->r[4]; // 80054338
  c->r[3]=c->r[3]|c->r[4]; // 8005433C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80054340
  c->r[3]=c->r[3]|c->r[0]; // 80054344
  c->r[0]=0u-c->r[3]; // 80054348
  c->r[0]=c->r[0]|c->r[3]; // 8005434C
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 80054350
  if (!crb(c,2)) { goto L_80054364; } // 80054354
  c->r[0]=0u+0xFFFFFFFFu; // 80054358
  W32(c->r[31]+0x000000C4u,c->r[0]); // 8005435C
  goto L_80054374; // 80054360
L_80054364:;
  cmps(c,0,(int32_t)c->r[22],0); // 80054364
  if (!crb(c,2)) { goto L_80054374; } // 80054368
  c->r[0]=0u+0xFFFFFFFFu; // 8005436C
  W32(c->r[31]+0x000000C8u,c->r[0]); // 80054370
L_80054374:;
  c->lr=0x80054378u; f_800241D4(c); // 80054374
  c->lr=0x8005437Cu; f_80019FB4(c); // 80054378
  c->r[6]=c->r[3]|c->r[3]; // 8005437C
  c->r[4]=c->r[25]|c->r[25]; // 80054380
  c->r[5]=c->r[26]|c->r[26]; // 80054384
  c->r[3]=c->r[31]+0x000004DCu; // 80054388
  c->lr=0x80054390u; f_80039634(c); // 8005438C
  cmps(c,0,(int32_t)c->r[3],3); // 80054390
  c->r[25]=c->r[3]|c->r[3]; // 80054394
  if (!crb(c,2)) { goto L_800543F4; } // 80054398
  c->r[19]=0u+0x00000001u; // 8005439C
L_800543A0:;
  c->r[3]=c->r[19]|c->r[19]; // 800543A0
  c->r[4]=0u+0x00000010u; // 800543A4
  c->lr=0x800543ACu; f_8006FF50(c); // 800543A8
  cmps(c,0,(int32_t)c->r[3],0); // 800543AC
  if (!crb(c,2)) { goto L_800543DC; } // 800543B0
  c->r[3]=c->r[19]|c->r[19]; // 800543B4
  c->r[4]=0u+0x00000020u; // 800543B8
  c->lr=0x800543C0u; f_8006FF50(c); // 800543BC
  cmps(c,0,(int32_t)c->r[3],0); // 800543C0
  if (!crb(c,2)) { goto L_800543DC; } // 800543C4
  c->r[3]=c->r[19]|c->r[19]; // 800543C8
  c->r[4]=0u+0x00000080u; // 800543CC
  c->lr=0x800543D4u; f_8006FF50(c); // 800543D0
  cmps(c,0,(int32_t)c->r[3],0); // 800543D4
  if (crb(c,2)) { goto L_800543E0; } // 800543D8
L_800543DC:;
  c->r[25]=c->r[19]|c->r[19]; // 800543DC
L_800543E0:;
  c->r[19]=addc(c,c->r[19],0xFFFFFFFFu,0); cr0(c,c->r[19]); // 800543E0
  if (!crb(c,0)) { IRQCHK(c); goto L_800543A0; } // 800543E4
  cmps(c,0,(int32_t)c->r[25],3); // 800543E8
  if (!crb(c,2)) { goto L_800543F4; } // 800543EC
  c->r[25]=0u+0x00000000u; // 800543F0
L_800543F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800543F4
  if (crb(c,2)) { goto L_80054404; } // 800543F8
  c->r[25]=0u+0x00000001u; // 800543FC
  goto L_80054410; // 80054400
L_80054404:;
  cmps(c,0,(int32_t)c->r[28],0); // 80054404
  if (crb(c,2)) { goto L_80054410; } // 80054408
  c->r[25]=0u+0x00000000u; // 8005440C
L_80054410:;
  c->r[19]=0u+0x00000000u; // 80054410
L_80054414:;
  cmps(c,0,(int32_t)c->r[19],0); // 80054414
  c->r[0]=c->r[28]|c->r[28]; // 80054418
  if (!crb(c,2)) { goto L_80054424; } // 8005441C
  c->r[0]=c->r[29]|c->r[29]; // 80054420
L_80054424:;
  cmps(c,0,(int32_t)c->r[0],0); // 80054424
  if (crb(c,2)) { goto L_8005443C; } // 80054428
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005442C
  c->r[3]=c->r[19]|c->r[19]; // 80054430
  c->lr=0x80054438u; f_80078E14(c); // 80054434
  goto L_80054448; // 80054438
L_8005443C:;
  {uint32_t ea=c->r[2]+0xFFFF8218u; c->f[1]=c->ps1[1]=RF32(ea);} // 8005443C
  c->r[3]=c->r[19]|c->r[19]; // 80054440
  c->lr=0x80054448u; f_80078E14(c); // 80054444
L_80054448:;
  c->r[19]=c->r[19]+0x00000001u; // 80054448
  cmpu(c,0,c->r[19],0x00000002u); // 8005444C
  if (crb(c,0)) { IRQCHK(c); goto L_80054414; } // 80054450
  c->r[3]=c->r[24]|c->r[24]; // 80054454
  c->r[4]=c->r[25]|c->r[25]; // 80054458
  c->lr=0x80054460u; f_800741B4(c); // 8005445C
  c->r[26]=c->r[3]|c->r[3]; // 80054460
  c->r[3]=c->r[24]|c->r[24]; // 80054464
  c->r[4]=c->r[25]|c->r[25]; // 80054468
  c->lr=0x80054470u; f_800741D4(c); // 8005446C
  c->r[21]=c->r[3]|c->r[3]; // 80054470
  c->r[3]=c->r[24]|c->r[24]; // 80054474
  c->r[4]=c->r[25]|c->r[25]; // 80054478
  c->lr=0x80054480u; f_80074198(c); // 8005447C
  c->r[0]=R8(c->r[31]+0x00000941u); // 80054480
  c->r[20]=c->r[3]|c->r[3]; // 80054484
  cmps(c,0,(int32_t)c->r[0],0); // 80054488
  if (!crb(c,2)) { goto L_80054498; } // 8005448C
  cmps(c,0,(int32_t)c->r[30],0); // 80054490
  if (crb(c,2)) { goto L_800544A4; } // 80054494
L_80054498:;
  c->r[26]=0u+0xFFFFFFFFu; // 80054498
  c->r[21]=0u+0xFFFFFFFFu; // 8005449C
  c->r[20]=0u+0x00000000u; // 800544A0
L_800544A4:;
  c->r[6]=0u+0x802A0000u; // 800544A4
  {uint32_t ea=c->r[6]+0xFFFFA000u; c->r[5]=R32(ea); c->r[6]=ea;} // 800544A8
  cmps(c,0,(int32_t)c->r[20],0); // 800544AC
  W32(c->r[1]+0x00000038u,c->r[5]); // 800544B0
  c->r[4]=R32(c->r[6]+0x00000004u); // 800544B4
  c->r[3]=R32(c->r[6]+0x00000008u); // 800544B8
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 800544BC
  W32(c->r[1]+0x0000003Cu,c->r[4]); // 800544C0
  W32(c->r[1]+0x00000040u,c->r[3]); // 800544C4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800544C8
  if (crb(c,2)) { goto L_80054510; } // 800544CC
  c->r[19]=c->r[1]+0x00000038u; // 800544D0
  c->r[30]=0u+0x00000000u; // 800544D4
L_800544D8:;
  c->r[0]=R32(c->r[19]+0x00000000u); // 800544D8
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 800544DC
  if (!crb(c,2)) { goto L_80054500; } // 800544E0
  c->r[3]=c->r[31]|c->r[31]; // 800544E4
  c->r[4]=c->r[30]|c->r[30]; // 800544E8
  c->lr=0x800544F0u; f_80055578(c); // 800544EC
  cmps(c,0,(int32_t)c->r[3],0); // 800544F0
  if (crb(c,2)) { goto L_80054500; } // 800544F4
  c->r[26]=0u+0xFFFFFFFFu; // 800544F8
  c->r[20]=0u+0x00000000u; // 800544FC
L_80054500:;
  c->r[30]=c->r[30]+0x00000001u; // 80054500
  c->r[19]=c->r[19]+0x00000004u; // 80054504
  cmps(c,0,(int32_t)c->r[30],4); // 80054508
  if (crb(c,0)) { IRQCHK(c); goto L_800544D8; } // 8005450C
L_80054510:;
  c->r[4]=R32(c->r[31]+0x000000CCu); // 80054510
  c->r[5]=c->r[26]|c->r[26]; // 80054514
  c->r[6]=c->r[21]|c->r[21]; // 80054518
  c->r[7]=c->r[20]|c->r[20]; // 8005451C
  c->r[3]=c->r[1]+0x00000020u; // 80054520
  c->lr=0x80054528u; f_80067CE0(c); // 80054524
  c->r[0]=R32(c->r[1]+0x00000020u); // 80054528
  c->r[3]=0u+0x00000000u; // 8005452C
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80054530
  c->r[5]=R32(c->r[1]+0x00000024u); // 80054534
  c->r[0]=R8(c->r[1]+0x0000002Fu); // 80054538
  c->r[4]=R32(c->r[1]+0x00000028u); // 8005453C
  cmps(c,0,(int32_t)c->r[0],0); // 80054540
  W32(c->r[1]+0x00000030u,c->r[5]); // 80054544
  W32(c->r[1]+0x00000034u,c->r[4]); // 80054548
  W8(c->r[1]+0x00000008u,c->r[3]); // 8005454C
  W8(c->r[1]+0x00000009u,c->r[3]); // 80054550
  W8(c->r[1]+0x0000000Au,c->r[3]); // 80054554
  W8(c->r[1]+0x0000000Bu,c->r[3]); // 80054558
  if (crb(c,2)) { goto L_800545B0; } // 8005455C
  cmps(c,0,(int32_t)c->r[5],296); // 80054560
  if (crb(c,2)) { goto L_80054584; } // 80054564
  cmps(c,0,(int32_t)c->r[5],284); // 80054568
  if (crb(c,2)) { goto L_80054590; } // 8005456C
  cmps(c,0,(int32_t)c->r[5],272); // 80054570
  if (crb(c,2)) { goto L_8005459C; } // 80054574
  cmps(c,0,(int32_t)c->r[5],260); // 80054578
  if (crb(c,2)) { goto L_800545A8; } // 8005457C
  goto L_800545B0; // 80054580
L_80054584:;
  c->r[0]=0u+0x00000001u; // 80054584
  W8(c->r[1]+0x00000008u,c->r[0]); // 80054588
  goto L_800545B0; // 8005458C
L_80054590:;
  c->r[0]=0u+0x00000001u; // 80054590
  W8(c->r[1]+0x00000009u,c->r[0]); // 80054594
  goto L_800545B0; // 80054598
L_8005459C:;
  c->r[0]=0u+0x00000001u; // 8005459C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 800545A0
  goto L_800545B0; // 800545A4
L_800545A8:;
  c->r[0]=0u+0x00000001u; // 800545A8
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 800545AC
L_800545B0:;
  c->r[0]=R8(c->r[1]+0x0000002Eu); // 800545B0
  c->r[3]=0u+0x00000000u; // 800545B4
  W8(c->r[31]+0x0000053Cu,c->r[3]); // 800545B8
  c->r[20]=0u+0x00000000u; // 800545BC
  cmps(c,0,(int32_t)c->r[0],0); // 800545C0
  W8(c->r[31]+0x0000053Du,c->r[3]); // 800545C4
  W8(c->r[31]+0x0000053Eu,c->r[3]); // 800545C8
  W8(c->r[31]+0x0000053Fu,c->r[3]); // 800545CC
  if (crb(c,2)) { goto L_8005466C; } // 800545D0
  c->r[4]=R32(c->r[1]+0x00000030u); // 800545D4
  c->r[3]=0u+0x00000001u; // 800545D8
  c->r[0]=R32(c->r[1]+0x00000038u); // 800545DC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 800545E0
  if (!crb(c,2)) { goto L_80054600; } // 800545E4
  W8(c->r[31]+0x0000053Cu,c->r[3]); // 800545E8
  c->r[0]=R32(c->r[31]+0x00000944u); // 800545EC
  cmps(c,0,(int32_t)c->r[0],-1); // 800545F0
  if (!crb(c,2)) { goto L_800545FC; } // 800545F4
  W32(c->r[31]+0x00000944u,c->r[25]); // 800545F8
L_800545FC:;
  c->r[20]=0u+0x00000001u; // 800545FC
L_80054600:;
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80054600
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80054604
  if (!crb(c,2)) { goto L_80054624; } // 80054608
  W8(c->r[31]+0x0000053Du,c->r[3]); // 8005460C
  c->r[0]=R32(c->r[31]+0x00000944u); // 80054610
  cmps(c,0,(int32_t)c->r[0],-1); // 80054614
  if (!crb(c,2)) { goto L_80054620; } // 80054618
  W32(c->r[31]+0x00000944u,c->r[25]); // 8005461C
L_80054620:;
  c->r[20]=0u+0x00000001u; // 80054620
L_80054624:;
  c->r[0]=R32(c->r[1]+0x00000040u); // 80054624
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80054628
  if (!crb(c,2)) { goto L_80054648; } // 8005462C
  W8(c->r[31]+0x0000053Eu,c->r[3]); // 80054630
  c->r[0]=R32(c->r[31]+0x00000944u); // 80054634
  cmps(c,0,(int32_t)c->r[0],-1); // 80054638
  if (!crb(c,2)) { goto L_80054644; } // 8005463C
  W32(c->r[31]+0x00000944u,c->r[25]); // 80054640
L_80054644:;
  c->r[20]=0u+0x00000001u; // 80054644
L_80054648:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 80054648
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8005464C
  if (!crb(c,2)) { goto L_8005466C; } // 80054650
  W8(c->r[31]+0x0000053Fu,c->r[3]); // 80054654
  c->r[0]=R32(c->r[31]+0x00000944u); // 80054658
  cmps(c,0,(int32_t)c->r[0],-1); // 8005465C
  if (!crb(c,2)) { goto L_80054668; } // 80054660
  W32(c->r[31]+0x00000944u,c->r[25]); // 80054664
L_80054668:;
  c->r[20]=0u+0x00000001u; // 80054668
L_8005466C:;
  c->r[0]=0u+0x00000000u; // 8005466C
  W8(c->r[31]+0x00000538u,c->r[0]); // 80054670
  c->r[3]=c->r[24]|c->r[24]; // 80054674
  c->r[4]=c->r[25]|c->r[25]; // 80054678
  W8(c->r[31]+0x00000539u,c->r[0]); // 8005467C
  W8(c->r[31]+0x0000053Au,c->r[0]); // 80054680
  W8(c->r[31]+0x0000053Bu,c->r[0]); // 80054684
  c->lr=0x8005468Cu; f_800741D4(c); // 80054688
  cmps(c,0,(int32_t)c->r[3],296); // 8005468C
  if (!crb(c,2)) { goto L_800546A0; } // 80054690
  c->r[0]=0u+0x00000001u; // 80054694
  W8(c->r[31]+0x00000538u,c->r[0]); // 80054698
  goto L_800546D8; // 8005469C
L_800546A0:;
  cmps(c,0,(int32_t)c->r[3],284); // 800546A0
  if (!crb(c,2)) { goto L_800546B4; } // 800546A4
  c->r[0]=0u+0x00000001u; // 800546A8
  W8(c->r[31]+0x00000539u,c->r[0]); // 800546AC
  goto L_800546D8; // 800546B0
L_800546B4:;
  cmps(c,0,(int32_t)c->r[3],272); // 800546B4
  if (!crb(c,2)) { goto L_800546C8; } // 800546B8
  c->r[0]=0u+0x00000001u; // 800546BC
  W8(c->r[31]+0x0000053Au,c->r[0]); // 800546C0
  goto L_800546D8; // 800546C4
L_800546C8:;
  cmps(c,0,(int32_t)c->r[3],260); // 800546C8
  if (!crb(c,2)) { goto L_800546D8; } // 800546CC
  c->r[0]=0u+0x00000001u; // 800546D0
  W8(c->r[31]+0x0000053Bu,c->r[0]); // 800546D4
L_800546D8:;
  c->r[19]=0u+0x00000000u; // 800546D8
L_800546DC:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800546DC
  c->r[3]=0u+0x00000000u; // 800546E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[19]); // 800546E4
  if (crb(c,2)) { goto L_800546F8; } // 800546E8
  c->r[0]=R32(c->r[31]+0x000000C8u); // 800546EC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[19]); // 800546F0
  if (!crb(c,2)) { goto L_800546FC; } // 800546F4
L_800546F8:;
  c->r[3]=0u+0x00000001u; // 800546F8
L_800546FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 800546FC
  if (crb(c,2)) { goto L_80054740; } // 80054700
  c->r[3]=c->r[31]|c->r[31]; // 80054704
  c->r[4]=c->r[19]|c->r[19]; // 80054708
  c->lr=0x80054710u; f_80054190(c); // 8005470C
  c->r[4]=c->r[3]|c->r[3]; // 80054710
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80054714
  c->r[5]=0u+0x00000000u; // 80054718
  c->lr=0x80054720u; f_800679B8(c); // 8005471C
  c->r[3]=c->r[31]|c->r[31]; // 80054720
  c->r[4]=c->r[19]|c->r[19]; // 80054724
  c->lr=0x8005472Cu; f_80054190(c); // 80054728
  c->r[4]=c->r[3]|c->r[3]; // 8005472C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80054730
  c->r[5]=0u+0x00000001u; // 80054734
  c->lr=0x8005473Cu; f_800674FC(c); // 80054738
  goto L_8005475C; // 8005473C
L_80054740:;
  c->r[3]=c->r[31]|c->r[31]; // 80054740
  c->r[4]=c->r[19]|c->r[19]; // 80054744
  c->lr=0x8005474Cu; f_80054190(c); // 80054748
  c->r[4]=c->r[3]|c->r[3]; // 8005474C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80054750
  c->r[5]=0u+0x00000001u; // 80054754
  c->lr=0x8005475Cu; f_800679B8(c); // 80054758
L_8005475C:;
  c->r[19]=c->r[19]+0x00000001u; // 8005475C
  cmps(c,0,(int32_t)c->r[19],4); // 80054760
  if (crb(c,0)) { IRQCHK(c); goto L_800546DC; } // 80054764
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80054768
  c->r[4]=0u+0x0000012Au; // 8005476C
  c->r[5]=0u+0x00000000u; // 80054770
  c->lr=0x80054778u; f_800679B8(c); // 80054774
  c->r[19]=R8(c->r[1]+0x00000034u); // 80054778
  c->r[30]=c->r[1]+0x00000008u; // 8005477C
  c->r[21]=0u+0x00000000u; // 80054780
  c->r[25]=0u+0x00000001u; // 80054784
  c->r[26]=0u+0x00000000u; // 80054788
  c->r[24]=0u+0xFFFFFFFFu; // 8005478C
L_80054790:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 80054790
  cmps(c,0,(int32_t)c->r[0],0); // 80054794
  if (crb(c,2)) { goto L_80054850; } // 80054798
  cmps(c,0,(int32_t)c->r[19],0); // 8005479C
  if (crb(c,2)) { goto L_800547CC; } // 800547A0
  c->r[3]=c->r[31]|c->r[31]; // 800547A4
  c->r[4]=c->r[21]|c->r[21]; // 800547A8
  c->lr=0x800547B0u; f_80055578(c); // 800547AC
  cmps(c,0,(int32_t)c->r[3],0); // 800547B0
  if (!crb(c,2)) { goto L_80054850; } // 800547B4
  W32(c->r[31]+0x0000052Cu,c->r[21]); // 800547B8
  c->r[3]=c->r[31]|c->r[31]; // 800547BC
  c->r[4]=0u+0x00000007u; // 800547C0
  c->lr=0x800547C8u; f_800537DC(c); // 800547C4
  goto L_80054860; // 800547C8
L_800547CC:;
  c->r[3]=c->r[31]|c->r[31]; // 800547CC
  c->r[4]=c->r[21]|c->r[21]; // 800547D0
  c->lr=0x800547D8u; f_80055578(c); // 800547D4
  cmps(c,0,(int32_t)c->r[3],0); // 800547D8
  if (crb(c,2)) { goto L_80054818; } // 800547DC
  c->r[3]=c->r[31]|c->r[31]; // 800547E0
  c->r[4]=0u+0x00000003u; // 800547E4
  c->lr=0x800547ECu; f_800537DC(c); // 800547E8
  c->r[0]=R32(c->r[31]+0x00000944u); // 800547EC
  W32(c->r[31]+0x00000530u,c->r[21]); // 800547F0
  cmps(c,0,(int32_t)c->r[0],0); // 800547F4
  if (!crb(c,2)) { goto L_80054804; } // 800547F8
  W32(c->r[31]+0x00000534u,c->r[26]); // 800547FC
  goto L_80054810; // 80054800
L_80054804:;
  cmps(c,0,(int32_t)c->r[0],1); // 80054804
  if (!crb(c,2)) { goto L_80054810; } // 80054808
  W32(c->r[31]+0x00000534u,c->r[25]); // 8005480C
L_80054810:;
  W32(c->r[31]+0x00000944u,c->r[24]); // 80054810
  goto L_80054850; // 80054814
L_80054818:;
  c->r[0]=R32(c->r[31]+0x000000C4u); // 80054818
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 8005481C
  if (crb(c,2)) { goto L_80054850; } // 80054820
  c->r[0]=R32(c->r[31]+0x000000C8u); // 80054824
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[21]); // 80054828
  if (crb(c,2)) { goto L_80054850; } // 8005482C
  c->r[0]=R32(c->r[31]+0x00000944u); // 80054830
  cmps(c,0,(int32_t)c->r[0],0); // 80054834
  if (!crb(c,2)) { goto L_80054848; } // 80054838
  W32(c->r[31]+0x000000C4u,c->r[21]); // 8005483C
  W32(c->r[31]+0x00000944u,c->r[24]); // 80054840
  goto L_80054850; // 80054844
L_80054848:;
  W32(c->r[31]+0x000000C8u,c->r[21]); // 80054848
  W32(c->r[31]+0x00000944u,c->r[24]); // 8005484C
L_80054850:;
  c->r[21]=c->r[21]+0x00000001u; // 80054850
  c->r[30]=c->r[30]+0x00000001u; // 80054854
  cmps(c,0,(int32_t)c->r[21],4); // 80054858
  if (crb(c,0)) { IRQCHK(c); goto L_80054790; } // 8005485C
L_80054860:;
  cmps(c,0,(int32_t)c->r[29],0); // 80054860
  c->r[26]=0u+0x00000001u; // 80054864
  if (!crb(c,2)) { goto L_80054878; } // 80054868
  cmps(c,0,(int32_t)c->r[28],0); // 8005486C
  if (!crb(c,2)) { goto L_80054878; } // 80054870
  c->r[26]=0u+0x00000000u; // 80054874
L_80054878:;
  c->r[5]=R32(c->r[2]+0xFFFF8220u); // 80054878
  c->r[25]=c->r[1]+0x00000018u; // 8005487C
  c->r[4]=R32(c->r[2]+0xFFFF8224u); // 80054880
  c->r[24]=c->r[1]+0x00000010u; // 80054884
  c->r[3]=R32(c->r[2]+0xFFFF8228u); // 80054888
  c->r[21]=0u+0x00000000u; // 8005488C
  c->r[0]=R32(c->r[2]+0xFFFF822Cu); // 80054890
  c->r[30]=0u+0x88890000u; // 80054894
  W32(c->r[1]+0x00000018u,c->r[5]); // 80054898
  W32(c->r[1]+0x0000001Cu,c->r[4]); // 8005489C
  W32(c->r[1]+0x00000010u,c->r[3]); // 800548A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800548A4
L_800548A8:;
  cmps(c,0,(int32_t)c->r[21],0); // 800548A8
  if (!crb(c,2)) { goto L_800548B8; } // 800548AC
  c->r[0]=R32(c->r[31]+0x000000C4u); // 800548B0
  goto L_800548BC; // 800548B4
L_800548B8:;
  c->r[0]=R32(c->r[31]+0x000000C8u); // 800548B8
L_800548BC:;
  cmps(c,0,(int32_t)c->r[0],-1); // 800548BC
  c->r[19]=0u+0x00000000u; // 800548C0
  if (!crb(c,2)) { goto L_800548D8; } // 800548C4
  cmps(c,0,(int32_t)c->r[26],0); // 800548C8
  if (crb(c,2)) { goto L_800548F8; } // 800548CC
  cmps(c,0,(int32_t)c->r[20],0); // 800548D0
  if (crb(c,2)) { goto L_800548F8; } // 800548D4
L_800548D8:;
  cmps(c,0,(int32_t)c->r[21],0); // 800548D8
  c->r[0]=c->r[22]|c->r[22]; // 800548DC
  if (!crb(c,2)) { goto L_800548E8; } // 800548E0
  c->r[0]=c->r[23]|c->r[23]; // 800548E4
L_800548E8:;
  cmps(c,0,(int32_t)c->r[0],0); // 800548E8
  if (crb(c,2)) { goto L_80054948; } // 800548EC
  c->r[19]=0u+0x00000001u; // 800548F0
  goto L_80054948; // 800548F4
L_800548F8:;
  c->r[3]=c->r[21]|c->r[21]; // 800548F8
  c->lr=0x80054900u; f_800705D0(c); // 800548FC
  cmps(c,0,(int32_t)c->r[3],0); // 80054900
  if (crb(c,2)) { goto L_80054944; } // 80054904
  c->r[4]=R32(c->r[31]+0x000000BCu); // 80054908
  c->r[0]=c->r[30]+0xFFFF8889u; // 8005490C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80054910
  c->r[0]=c->r[0]+c->r[4]; // 80054914
  c->r[0]=sraw(c,c->r[0],5); // 80054918
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8005491C
  c->r[0]=c->r[0]+c->r[3]; // 80054920
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80054924
  c->r[4]=c->r[4]-c->r[0]; // 80054928
  c->r[0]=c->r[4]^0x0000001Eu; // 8005492C
  c->r[3]=sraw(c,c->r[0],1); // 80054930
  c->r[0]=c->r[0]&c->r[4]; // 80054934
  c->r[0]=c->r[3]-c->r[0]; // 80054938
  c->r[19]=rotl(c->r[0],1)&0x00000001u; // 8005493C
  goto L_80054948; // 80054940
L_80054944:;
  c->r[19]=0u+0x00000000u; // 80054944
L_80054948:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80054948
  c->lr=0x80054950u; f_80022B5C(c); // 8005494C
  c->r[4]=c->r[3]|c->r[3]; // 80054950
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80054954
  c->r[5]=c->r[19]|c->r[19]; // 80054958
  c->lr=0x80054960u; f_800674FC(c); // 8005495C
  c->r[3]=R32(c->r[24]+0x00000000u); // 80054960
  c->lr=0x80054968u; f_80022B5C(c); // 80054964
  c->r[4]=c->r[3]|c->r[3]; // 80054968
  c->r[0]=cntlz(c->r[19]); // 8005496C
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80054970
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 80054974
  c->lr=0x8005497Cu; f_800674FC(c); // 80054978
  c->r[21]=c->r[21]+0x00000001u; // 8005497C
  c->r[24]=c->r[24]+0x00000004u; // 80054980
  cmpu(c,0,c->r[21],0x00000002u); // 80054984
  c->r[25]=c->r[25]+0x00000004u; // 80054988
  if (crb(c,0)) { IRQCHK(c); goto L_800548A8; } // 8005498C
  c->r[0]=R8(c->r[31]+0x00000948u); // 80054990
  cmps(c,0,(int32_t)c->r[0],0); // 80054994
  if (crb(c,2)) { goto L_800549AC; } // 80054998
  c->r[0]=0u+0x00000000u; // 8005499C
  W8(c->r[31]+0x00000948u,c->r[0]); // 800549A0
  c->lr=0x800549A8u; f_800241D4(c); // 800549A4
  c->lr=0x800549ACu; f_80019EA4(c); // 800549A8
L_800549AC:;
  c->r[0]=R8(c->r[31]+0x00000941u); // 800549AC
  cmps(c,0,(int32_t)c->r[0],0); // 800549B0
  if (!crb(c,2)) { goto L_800549E4; } // 800549B4
  cmps(c,0,(int32_t)c->r[27],0); // 800549B8
  if (!crb(c,2)) { goto L_80054A00; } // 800549BC
  cmps(c,0,(int32_t)c->r[29],0); // 800549C0
  if (crb(c,2)) { goto L_80054A00; } // 800549C4
  cmps(c,0,(int32_t)c->r[28],0); // 800549C8
  if (crb(c,2)) { goto L_80054A00; } // 800549CC
  c->r[0]=0u+0x00000001u; // 800549D0
  W8(c->r[31]+0x00000941u,c->r[0]); // 800549D4
  c->lr=0x800549DCu; f_800241D4(c); // 800549D8
  c->lr=0x800549E0u; f_80019F10(c); // 800549DC
  goto L_80054A00; // 800549E0
L_800549E4:;
  c->lr=0x800549E8u; f_800241D4(c); // 800549E4
  c->lr=0x800549ECu; f_80019F7C(c); // 800549E8
  cmps(c,0,(int32_t)c->r[3],0); // 800549EC
  if (!crb(c,2)) { goto L_80054A00; } // 800549F0
  c->r[3]=c->r[31]|c->r[31]; // 800549F4
  c->r[4]=0u+0x0000000Au; // 800549F8
  c->lr=0x80054A00u; f_800537DC(c); // 800549FC
L_80054A00:;
  c->r[3]=c->r[31]|c->r[31]; // 80054A00
  c->r[4]=0u+0x000000FFu; // 80054A04
  c->lr=0x80054A0Cu; f_80054AA8(c); // 80054A08
  c->r[3]=R32(c->r[31]+0x000000BCu); // 80054A0C
  c->r[11]=c->r[1]+0x00000080u; // 80054A10
  c->r[0]=c->r[3]+0x00000001u; // 80054A14
  W32(c->r[31]+0x000000BCu,c->r[0]); // 80054A18
  c->lr=0x80054A20u; { c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80054A1C
  c->r[0]=R32(c->r[1]+0x00000084u); // 80054A20
  c->lr=c->r[0]; // 80054A24
  c->r[1]=c->r[1]+0x00000080u; // 80054A28
  return; // 80054A2C
}

// getClassSprID__Q24gbla12GblaSelectIDFQ34gbla5param11_gbla_class
void f_80054A30(Ctx* __restrict c) {
  trace_call(0x80054A30u);
  cmpu(c,0,c->r[4],0x00000009u); // 80054A30
  c->r[3]=0u+0x00000000u; // 80054A34
  if (crb(c,1)) return; // 80054A38
  c->r[5]=0u+0x802E0000u; // 80054A3C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80054A40
  c->r[5]=c->r[5]+0x00002770u; // 80054A44
  c->r[5]=R32(c->r[5]+c->r[0]); // 80054A48
  c->ctr=c->r[5]; // 80054A4C
  if (true) { switch (c->ctr) { case 0x80054A54u: goto L_80054A54; case 0x80054A5Cu: goto L_80054A5C; case 0x80054A64u: goto L_80054A64; case 0x80054A6Cu: goto L_80054A6C; case 0x80054A74u: goto L_80054A74; case 0x80054A7Cu: goto L_80054A7C; case 0x80054A84u: goto L_80054A84; case 0x80054A8Cu: goto L_80054A8C; case 0x80054A94u: goto L_80054A94; case 0x80054A9Cu: goto L_80054A9C; default: break; } dispatch(c,c->ctr); return; } // 80054A50
L_80054A54:;
  c->r[3]=0u+0x000000E5u; // 80054A54
  f_80022B5C(c); return; // 80054A58
L_80054A5C:;
  c->r[3]=0u+0x000000E4u; // 80054A5C
  f_80022B5C(c); return; // 80054A60
L_80054A64:;
  c->r[3]=0u+0x000000E3u; // 80054A64
  f_80022B5C(c); return; // 80054A68
L_80054A6C:;
  c->r[3]=0u+0x000000E2u; // 80054A6C
  f_80022B5C(c); return; // 80054A70
L_80054A74:;
  c->r[3]=0u+0x000000E1u; // 80054A74
  f_80022B5C(c); return; // 80054A78
L_80054A7C:;
  c->r[3]=0u+0x000000E0u; // 80054A7C
  f_80022B5C(c); return; // 80054A80
L_80054A84:;
  c->r[3]=0u+0x000000DFu; // 80054A84
  f_80022B5C(c); return; // 80054A88
L_80054A8C:;
  c->r[3]=0u+0x000000DEu; // 80054A8C
  f_80022B5C(c); return; // 80054A90
L_80054A94:;
  c->r[3]=0u+0x000000DDu; // 80054A94
  f_80022B5C(c); return; // 80054A98
L_80054A9C:;
  c->r[3]=0u+0x000000DCu; // 80054A9C
  f_80022B5C(c); return; // 80054AA0
  return; // 80054AA4
}

// setDispTagChar__Q24gbla12GblaSelectIDFi
void f_80054AA8(Ctx* __restrict c) {
  trace_call(0x80054AA8u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054AA8
  c->r[0]=c->lr; // 80054AAC
  W32(c->r[1]+0x00000124u,c->r[0]); // 80054AB0
  c->r[11]=c->r[1]+0x000000F0u; // 80054AB4
  {uint32_t ea=c->r[1]+0x00000110u; WF64(ea,c->f[31]);} // 80054AB8
  {uint32_t ea=c->r[1]+0x00000118u; psq_store(c,31,ea,0,0);} // 80054ABC
  {uint32_t ea=c->r[1]+0x00000100u; WF64(ea,c->f[30]);} // 80054AC0
  {uint32_t ea=c->r[1]+0x00000108u; psq_store(c,30,ea,0,0);} // 80054AC4
  {uint32_t ea=c->r[1]+0x000000F0u; WF64(ea,c->f[29]);} // 80054AC8
  {uint32_t ea=c->r[1]+0x000000F8u; psq_store(c,29,ea,0,0);} // 80054ACC
  c->lr=0x80054AD4u; { W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80054AD0
  c->r[23]=c->r[3]|c->r[3]; // 80054AD4
  c->r[3]=R32(c->r[3]+0x000000CCu); // 80054AD8
  c->r[24]=c->r[4]|c->r[4]; // 80054ADC
  c->lr=0x80054AE4u; f_80022798(c); // 80054AE0
  cmps(c,0,(int32_t)c->r[3],0); // 80054AE4
  if (crb(c,2)) { goto L_80054F20; } // 80054AE8
  c->r[3]=c->r[23]|c->r[23]; // 80054AEC
  c->lr=0x80054AF4u; f_8005394C(c); // 80054AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80054AF4
  if (crb(c,2)) { goto L_80054F20; } // 80054AF8
  c->r[21]=0u+0x802E0000u; // 80054AFC
  c->r[22]=0u+0x802A0000u; // 80054B00
  {uint32_t ea=c->r[2]+0xFFFF8238u; c->f[30]=c->ps1[30]=RF32(ea);} // 80054B04
  c->r[26]=c->r[23]|c->r[23]; // 80054B08
  {uint32_t ea=c->r[2]+0xFFFF823Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80054B0C
  c->r[27]=c->r[23]+0x000004F8u; // 80054B10
  {uint32_t ea=c->r[2]+0xFFFF8248u; c->f[29]=RF64(ea);} // 80054B14
  c->r[21]=c->r[21]+0x000045A8u; // 80054B18
  c->r[22]=c->r[22]+0xFFFFA010u; // 80054B1C
  c->r[25]=0u+0x00000000u; // 80054B20
  c->r[28]=0u+0x00000000u; // 80054B24
  c->r[29]=0u+0x00000009u; // 80054B28
  c->r[31]=0u+0x43300000u; // 80054B2C
L_80054B30:;
  c->r[3]=c->r[23]|c->r[23]; // 80054B30
  c->r[4]=c->r[25]|c->r[25]; // 80054B34
  c->lr=0x80054B3Cu; f_80055578(c); // 80054B38
  c->r[30]=c->r[3]|c->r[3]; // 80054B3C
  c->r[3]=addc(c,~c->r[25],0x00000176u,1); // 80054B40
  c->lr=0x80054B48u; f_80022B5C(c); // 80054B44
  c->r[4]=c->r[3]|c->r[3]; // 80054B48
  c->r[3]=R32(c->r[23]+0x000000CCu); // 80054B4C
  c->r[5]=c->r[30]|c->r[30]; // 80054B50
  c->lr=0x80054B58u; f_800674FC(c); // 80054B54
  cmps(c,0,(int32_t)c->r[30],0); // 80054B58
  if (!crb(c,2)) { goto L_80054F0C; } // 80054B5C
  c->r[3]=c->r[1]+0x0000006Cu; // 80054B60
  c->ctr=c->r[29]; // 80054B64
L_80054B68:;
  W32(c->r[3]+0x00000004u,c->r[28]); // 80054B68
  {uint32_t ea=c->r[3]+0x00000008u; W32(ea,c->r[28]); c->r[3]=ea;} // 80054B6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80054B68; } // 80054B70
  cmps(c,0,(int32_t)c->r[25],0); // 80054B74
  if (!crb(c,2)) { goto L_80054B8C; } // 80054B78
  c->r[3]=c->r[1]+0x00000070u; // 80054B7C
  c->r[4]=c->r[21]+0x00005268u; // 80054B80
  c->lr=0x80054B88u; f_80048978(c); // 80054B84
  goto L_80054BD0; // 80054B88
L_80054B8C:;
  cmps(c,0,(int32_t)c->r[25],1); // 80054B8C
  if (!crb(c,2)) { goto L_80054BA4; } // 80054B90
  c->r[3]=c->r[1]+0x00000070u; // 80054B94
  c->r[4]=c->r[21]+0x00004F08u; // 80054B98
  c->lr=0x80054BA0u; f_80048978(c); // 80054B9C
  goto L_80054BD0; // 80054BA0
L_80054BA4:;
  cmps(c,0,(int32_t)c->r[25],2); // 80054BA4
  if (!crb(c,2)) { goto L_80054BBC; } // 80054BA8
  c->r[3]=c->r[1]+0x00000070u; // 80054BAC
  c->r[4]=c->r[21]+0x00004BA8u; // 80054BB0
  c->lr=0x80054BB8u; f_80048978(c); // 80054BB4
  goto L_80054BD0; // 80054BB8
L_80054BBC:;
  cmps(c,0,(int32_t)c->r[25],3); // 80054BBC
  if (!crb(c,2)) { goto L_80054BD0; } // 80054BC0
  c->r[3]=c->r[1]+0x00000070u; // 80054BC4
  c->r[4]=c->r[21]+0x00004848u; // 80054BC8
  c->lr=0x80054BD0u; f_80048978(c); // 80054BCC
L_80054BD0:;
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054BD0
  c->r[3]=c->r[1]+0x00000058u; // 80054BD4
  c->f[2]=c->f[1]; // 80054BD8
  c->lr=0x80054BE0u; f_8003A1B0(c); // 80054BDC
  {uint32_t ea=c->r[1]+0x00000098u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054BE0
  c->r[3]=c->r[1]+0x00000050u; // 80054BE4
  {uint32_t ea=c->r[1]+0x00000084u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054BE8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[30]); // 80054BEC
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054BF0
  c->f[1]=c->ps1[1]=S(std::fma(c->f[2],c->f[31],c->f[1])); // 80054BF4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[31],c->f[0])); // 80054BF8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[1]);} // 80054BFC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80054C00
  c->lr=0x80054C08u; f_80208138(c); // 80054C04
  c->r[4]=c->r[27]|c->r[27]; // 80054C08
  c->r[3]=c->r[1]+0x00000050u; // 80054C0C
  c->r[5]=0u+0x00000009u; // 80054C10
  c->lr=0x80054C18u; f_802082DC(c); // 80054C14
  c->r[4]=R32(c->r[23]+0x000000C4u); // 80054C18
  c->r[3]=c->r[27]|c->r[27]; // 80054C1C
  c->r[0]=R32(c->r[23]+0x000000C8u); // 80054C20
  c->r[4]=c->r[25]-c->r[4]; // 80054C24
  c->r[0]=c->r[25]-c->r[0]; // 80054C28
  c->r[4]=cntlz(c->r[4]); // 80054C2C
  c->r[0]=cntlz(c->r[0]); // 80054C30
  c->r[4]=rotl(c->r[4],27)&0x07FFFFFFu; // 80054C34
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80054C38
  c->r[4]=c->r[4]|c->r[0]; // 80054C3C
  c->r[0]=0u-c->r[4]; // 80054C40
  c->r[0]=c->r[0]|c->r[4]; // 80054C44
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 80054C48
  c->lr=0x80054C50u; f_800ACEA0(c); // 80054C4C
  c->r[0]=addc(c,~c->r[3],0x00000008u,1); // 80054C50
  c->r[4]=0u+0x00000000u; // 80054C54
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)12); // 80054C58
  W32(c->r[1]+0x000000B8u,c->r[31]); // 80054C5C
  {uint32_t ea=c->r[1]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054C60
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[25]); // 80054C64
  W32(c->r[1]+0x000000BCu,c->r[0]); // 80054C68
  {uint32_t ea=c->r[1]+0x000000B8u; c->f[1]=RF64(ea);} // 80054C6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[29]); // 80054C70
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[1]); // 80054C74
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80054C78
  if (crb(c,2)) { goto L_80054C90; } // 80054C7C
  c->r[3]=R8(c->r[23]+0x0000053Cu); // 80054C80
  c->r[0]=0u-c->r[3]; // 80054C84
  c->r[0]=c->r[0]|c->r[3]; // 80054C88
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80054C8C
L_80054C90:;
  c->r[0]=0u+0x00000001u; // 80054C90
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 80054C94
  if (crb(c,2)) { goto L_80054CB0; } // 80054C98
  c->r[3]=R8(c->r[23]+0x0000053Du); // 80054C9C
  c->r[3]=c->r[4]|c->r[3]; // 80054CA0
  c->r[0]=0u-c->r[3]; // 80054CA4
  c->r[0]=c->r[0]|c->r[3]; // 80054CA8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80054CAC
L_80054CB0:;
  c->r[0]=0u+0x00000002u; // 80054CB0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 80054CB4
  if (crb(c,2)) { goto L_80054CD0; } // 80054CB8
  c->r[3]=R8(c->r[23]+0x0000053Eu); // 80054CBC
  c->r[3]=c->r[4]|c->r[3]; // 80054CC0
  c->r[0]=0u-c->r[3]; // 80054CC4
  c->r[0]=c->r[0]|c->r[3]; // 80054CC8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80054CCC
L_80054CD0:;
  c->r[0]=0u+0x00000003u; // 80054CD0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[25]); // 80054CD4
  if (crb(c,2)) { goto L_80054CF0; } // 80054CD8
  c->r[3]=R8(c->r[23]+0x0000053Fu); // 80054CDC
  c->r[3]=c->r[4]|c->r[3]; // 80054CE0
  c->r[0]=0u-c->r[3]; // 80054CE4
  c->r[0]=c->r[0]|c->r[3]; // 80054CE8
  c->r[4]=rotl(c->r[0],1)&0x00000001u; // 80054CEC
L_80054CF0:;
  c->r[3]=c->r[23]+c->r[25]; // 80054CF0
  c->r[0]=R8(c->r[3]+0x00000538u); // 80054CF4
  cmps(c,0,(int32_t)c->r[0],0); // 80054CF8
  if (crb(c,2)) { goto L_80054D14; } // 80054CFC
  cmps(c,0,(int32_t)c->r[4],0); // 80054D00
  if (!crb(c,2)) { goto L_80054D14; } // 80054D04
  c->r[0]=R8(c->r[23]+0x00000941u); // 80054D08
  cmps(c,0,(int32_t)c->r[0],0); // 80054D0C
  if (crb(c,2)) { goto L_80054D28; } // 80054D10
L_80054D14:;
  cmps(c,0,(int32_t)c->r[30],0); // 80054D14
  if (!crb(c,2)) { goto L_80054D28; } // 80054D18
  c->r[0]=R8(c->r[3]+0x0000053Cu); // 80054D1C
  cmps(c,0,(int32_t)c->r[0],0); // 80054D20
  if (crb(c,2)) { goto L_80054D84; } // 80054D24
L_80054D28:;
  c->r[3]=c->r[1]+0x00000040u; // 80054D28
  c->r[4]=c->r[1]+0x00000050u; // 80054D2C
  c->lr=0x80054D34u; f_8020814C(c); // 80054D30
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054D34
  c->r[3]=c->r[1]+0x00000038u; // 80054D38
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054D3C
  c->lr=0x80054D44u; f_8003A1B0(c); // 80054D40
  c->r[30]=c->r[3]|c->r[3]; // 80054D44
  c->r[3]=c->r[1]+0x00000048u; // 80054D48
  c->r[4]=c->r[1]+0x00000058u; // 80054D4C
  c->lr=0x80054D54u; f_8003FD68(c); // 80054D50
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054D54
  c->r[4]=c->r[3]|c->r[3]; // 80054D58
  {uint32_t ea=c->r[2]+0xFFFF8240u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054D5C
  c->r[6]=c->r[30]|c->r[30]; // 80054D60
  c->r[7]=c->r[24]|c->r[24]; // 80054D64
  c->r[3]=c->r[23]+0x0000022Cu; // 80054D68
  c->r[5]=c->r[1]+0x00000040u; // 80054D6C
  c->lr=0x80054D74u; f_8005B050(c); // 80054D70
  c->r[3]=c->r[1]+0x00000040u; // 80054D74
  c->r[4]=0u+0xFFFFFFFFu; // 80054D78
  c->lr=0x80054D80u; f_80208230(c); // 80054D7C
  goto L_80054DDC; // 80054D80
L_80054D84:;
  c->r[3]=c->r[1]+0x00000028u; // 80054D84
  c->r[4]=c->r[1]+0x00000050u; // 80054D88
  c->lr=0x80054D90u; f_8020814C(c); // 80054D8C
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054D90
  c->r[3]=c->r[1]+0x00000020u; // 80054D94
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054D98
  c->lr=0x80054DA0u; f_8003A1B0(c); // 80054D9C
  c->r[30]=c->r[3]|c->r[3]; // 80054DA0
  c->r[3]=c->r[1]+0x00000030u; // 80054DA4
  c->r[4]=c->r[1]+0x00000058u; // 80054DA8
  c->lr=0x80054DB0u; f_8003FD68(c); // 80054DAC
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054DB0
  c->r[4]=c->r[3]|c->r[3]; // 80054DB4
  {uint32_t ea=c->r[2]+0xFFFF8240u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054DB8
  c->r[6]=c->r[30]|c->r[30]; // 80054DBC
  c->r[7]=c->r[24]|c->r[24]; // 80054DC0
  c->r[3]=c->r[23]+0x000000D4u; // 80054DC4
  c->r[5]=c->r[1]+0x00000028u; // 80054DC8
  c->lr=0x80054DD0u; f_8005B050(c); // 80054DCC
  c->r[3]=c->r[1]+0x00000028u; // 80054DD0
  c->r[4]=0u+0xFFFFFFFFu; // 80054DD4
  c->lr=0x80054DDCu; f_80208230(c); // 80054DD8
L_80054DDC:;
  cmps(c,0,(int32_t)c->r[25],0); // 80054DDC
  if (!crb(c,2)) { goto L_80054DF4; } // 80054DE0
  c->r[3]=c->r[1]+0x00000070u; // 80054DE4
  c->r[4]=c->r[21]+0x000052B0u; // 80054DE8
  c->lr=0x80054DF0u; f_80048978(c); // 80054DEC
  goto L_80054E38; // 80054DF0
L_80054DF4:;
  cmps(c,0,(int32_t)c->r[25],1); // 80054DF4
  if (!crb(c,2)) { goto L_80054E0C; } // 80054DF8
  c->r[3]=c->r[1]+0x00000070u; // 80054DFC
  c->r[4]=c->r[21]+0x00004F50u; // 80054E00
  c->lr=0x80054E08u; f_80048978(c); // 80054E04
  goto L_80054E38; // 80054E08
L_80054E0C:;
  cmps(c,0,(int32_t)c->r[25],2); // 80054E0C
  if (!crb(c,2)) { goto L_80054E24; } // 80054E10
  c->r[3]=c->r[1]+0x00000070u; // 80054E14
  c->r[4]=c->r[21]+0x00004BF0u; // 80054E18
  c->lr=0x80054E20u; f_80048978(c); // 80054E1C
  goto L_80054E38; // 80054E20
L_80054E24:;
  cmps(c,0,(int32_t)c->r[25],3); // 80054E24
  if (!crb(c,2)) { goto L_80054E38; } // 80054E28
  c->r[3]=c->r[1]+0x00000070u; // 80054E2C
  c->r[4]=c->r[21]+0x00004890u; // 80054E30
  c->lr=0x80054E38u; f_80048978(c); // 80054E34
L_80054E38:;
  c->r[4]=R32(c->r[26]+0x0000051Cu); // 80054E38
  c->r[3]=c->r[23]|c->r[23]; // 80054E3C
  c->lr=0x80054E44u; f_80054A30(c); // 80054E40
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)72); // 80054E44
  {uint32_t ea=c->r[1]+0x00000098u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054E48
  {uint32_t ea=c->r[1]+0x00000084u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054E4C
  c->r[3]=c->r[23]|c->r[23]; // 80054E50
  c->r[4]=c->r[21]+c->r[0]; // 80054E54
  {uint32_t ea=c->r[4]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054E58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80054E5C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[31],c->f[0])); // 80054E60
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80054E64
  c->r[4]=R32(c->r[26]+0x0000051Cu); // 80054E68
  c->lr=0x80054E70u; f_80054A30(c); // 80054E6C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)72); // 80054E70
  {uint32_t ea=c->r[1]+0x0000009Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80054E74
  {uint32_t ea=c->r[1]+0x00000088u; c->f[0]=c->ps1[0]=RF32(ea);} // 80054E78
  c->r[3]=c->r[1]+0x00000060u; // 80054E7C
  c->r[4]=c->r[22]+0x000002BCu; // 80054E80
  c->r[5]=c->r[21]+c->r[0]; // 80054E84
  {uint32_t ea=c->r[5]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80054E88
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80054E8C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[31],c->f[0])); // 80054E90
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80054E94
  c->r[5]=R32(c->r[26]+0x0000051Cu); // 80054E98
  c->r[5]=c->r[5]+0x00000064u; // 80054E9C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 80054EA0
  c->lr=0x80054EA8u; f_800B5FD4(c); // 80054EA4
  c->r[3]=c->r[1]+0x00000010u; // 80054EA8
  c->r[4]=c->r[1]+0x00000060u; // 80054EAC
  c->lr=0x80054EB4u; f_80208194(c); // 80054EB0
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054EB4
  c->r[3]=c->r[1]+0x00000008u; // 80054EB8
  {uint32_t ea=c->r[1]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054EBC
  c->lr=0x80054EC4u; f_8003A1B0(c); // 80054EC0
  c->r[30]=c->r[3]|c->r[3]; // 80054EC4
  c->r[3]=c->r[1]+0x00000018u; // 80054EC8
  c->r[4]=c->r[1]+0x00000058u; // 80054ECC
  c->lr=0x80054ED4u; f_8003FD68(c); // 80054ED0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[1]=c->ps1[1]=RF32(ea);} // 80054ED4
  c->r[4]=c->r[3]|c->r[3]; // 80054ED8
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[2]=c->ps1[2]=RF32(ea);} // 80054EDC
  c->r[6]=c->r[30]|c->r[30]; // 80054EE0
  c->r[3]=c->r[23]+0x000000D4u; // 80054EE4
  c->r[5]=c->r[1]+0x00000010u; // 80054EE8
  c->r[7]=0u+0x000000FFu; // 80054EEC
  c->lr=0x80054EF4u; f_8005B050(c); // 80054EF0
  c->r[3]=c->r[1]+0x00000010u; // 80054EF4
  c->r[4]=0u+0xFFFFFFFFu; // 80054EF8
  c->lr=0x80054F00u; f_80208230(c); // 80054EFC
  c->r[3]=c->r[1]+0x00000050u; // 80054F00
  c->r[4]=0u+0xFFFFFFFFu; // 80054F04
  c->lr=0x80054F0Cu; f_80208230(c); // 80054F08
L_80054F0C:;
  c->r[25]=c->r[25]+0x00000001u; // 80054F0C
  c->r[26]=c->r[26]+0x00000004u; // 80054F10
  cmps(c,0,(int32_t)c->r[25],4); // 80054F14
  c->r[27]=c->r[27]+0x00000009u; // 80054F18
  if (crb(c,0)) { IRQCHK(c); goto L_80054B30; } // 80054F1C
L_80054F20:;
  c->r[11]=c->r[1]+0x000000F0u; // 80054F20
  {uint32_t ea=c->r[1]+0x00000118u; psq_load(c,31,ea,0,0);} // 80054F24
  {uint32_t ea=c->r[1]+0x00000110u; c->f[31]=RF64(ea);} // 80054F28
  {uint32_t ea=c->r[1]+0x00000108u; psq_load(c,30,ea,0,0);} // 80054F2C
  {uint32_t ea=c->r[1]+0x00000100u; c->f[30]=RF64(ea);} // 80054F30
  {uint32_t ea=c->r[1]+0x000000F8u; psq_load(c,29,ea,0,0);} // 80054F34
  {uint32_t ea=c->r[1]+0x000000F0u; c->f[29]=RF64(ea);} // 80054F38
  c->lr=0x80054F40u; { c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80054F3C
  c->r[0]=R32(c->r[1]+0x00000124u); // 80054F40
  c->lr=c->r[0]; // 80054F44
  c->r[1]=c->r[1]+0x00000120u; // 80054F48
  return; // 80054F4C
}

// setDeleteChar__Q24gbla12GblaSelectIDFi
void f_80054F50(Ctx* __restrict c) {
  trace_call(0x80054F50u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 80054F50
  c->r[0]=c->lr; // 80054F54
  W32(c->r[1]+0x000000C4u,c->r[0]); // 80054F58
  c->r[11]=c->r[1]+0x000000A0u; // 80054F5C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80054F60
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80054F64
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 80054F68
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 80054F6C
  c->lr=0x80054F74u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80054F70
  c->r[5]=R32(c->r[3]+0x000000CCu); // 80054F74
  c->r[29]=c->r[3]|c->r[3]; // 80054F78
  c->r[30]=c->r[4]|c->r[4]; // 80054F7C
  c->r[0]=R8(c->r[5]+0x0000007Cu); // 80054F80
  cmps(c,0,(int32_t)c->r[0],0); // 80054F84
  if (crb(c,2)) { goto L_800550E0; } // 80054F88
  c->r[6]=R8(c->r[3]+0x00000228u); // 80054F8C
  c->r[4]=R8(c->r[3]+0x00000380u); // 80054F90
  c->r[5]=0u-c->r[6]; // 80054F94
  c->r[0]=R8(c->r[3]+0x000004D8u); // 80054F98
  c->r[3]=c->r[5]|c->r[6]; // 80054F9C
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80054FA0
  c->r[4]=c->r[3]&c->r[4]; // 80054FA4
  c->r[3]=0u-c->r[4]; // 80054FA8
  c->r[3]=c->r[3]|c->r[4]; // 80054FAC
  c->r[3]=rotl(c->r[3],1)&0x00000001u; // 80054FB0
  c->r[3]=c->r[3]&c->r[0]; // 80054FB4
  c->r[0]=0u-c->r[3]; // 80054FB8
  c->r[0]=c->r[0]|c->r[3]; // 80054FBC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; cr0(c,c->r[0]); // 80054FC0
  if (crb(c,2)) { goto L_800550E0; } // 80054FC4
  c->r[26]=0u+0x802E0000u; // 80054FC8
  {uint32_t ea=c->r[2]+0xFFFF8250u; c->f[30]=c->ps1[30]=RF32(ea);} // 80054FCC
  {uint32_t ea=c->r[2]+0xFFFF823Cu; c->f[31]=c->ps1[31]=RF32(ea);} // 80054FD0
  c->r[26]=c->r[26]+0x000045A8u; // 80054FD4
  c->r[31]=0u+0x00000000u; // 80054FD8
  c->r[27]=0u+0x00000009u; // 80054FDC
  c->r[28]=0u+0x00000000u; // 80054FE0
L_80054FE4:;
  c->r[0]=addc(c,~c->r[31],0x000000F7u,1); // 80054FE4
  c->r[5]=c->r[1]+0x00000034u; // 80054FE8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)72); // 80054FEC
  c->r[4]=c->r[26]+c->r[0]; // 80054FF0
  c->ctr=c->r[27]; // 80054FF4
  c->r[4]=c->r[4]+0xFFFFFFFCu; // 80054FF8
L_80054FFC:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 80054FFC
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 80055000
  W32(c->r[5]+0x00000004u,c->r[3]); // 80055004
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 80055008
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80054FFC; } // 8005500C
  {uint32_t ea=c->r[1]+0x00000060u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055010
  c->r[0]=c->r[31]+c->r[29]; // 80055014
  c->r[5]=R32(c->r[29]+0x0000052Cu); // 80055018
  c->r[3]=c->r[1]+0x00000028u; // 8005501C
  {uint32_t ea=c->r[1]+0x00000064u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055020
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[30]); // 80055024
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80055028
  {uint32_t ea=c->r[1]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8005502C
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[30]); // 80055030
  {uint32_t ea=c->r[1]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055034
  c->r[4]=c->r[4]+c->r[5]; // 80055038
  c->r[4]=c->r[4]+c->r[0]; // 8005503C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[3],c->f[31],c->f[2])); // 80055040
  c->r[0]=R8(c->r[4]+0x000004F8u); // 80055044
  c->f[0]=c->ps1[0]=S(std::fma(c->f[1],c->f[31],c->f[0])); // 80055048
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 8005504C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80055050
  W8(c->r[1]+0x00000008u,c->r[0]); // 80055054
  W8(c->r[1]+0x00000009u,c->r[28]); // 80055058
  c->lr=0x80055060u; f_80208138(c); // 8005505C
  c->r[3]=c->r[1]+0x00000028u; // 80055060
  c->r[4]=c->r[1]+0x00000008u; // 80055064
  c->r[5]=0u+0x00000002u; // 80055068
  c->lr=0x80055070u; f_802082DC(c); // 8005506C
  c->r[3]=c->r[1]+0x00000018u; // 80055070
  c->r[4]=c->r[1]+0x00000028u; // 80055074
  c->lr=0x8005507Cu; f_8020814C(c); // 80055078
  {uint32_t ea=c->r[1]+0x0000006Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8005507C
  c->r[7]=c->r[30]|c->r[30]; // 80055080
  {uint32_t ea=c->r[1]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80055084
  c->r[3]=c->r[29]+0x00000384u; // 80055088
  {uint32_t ea=c->r[1]+0x00000030u; c->f[3]=c->ps1[3]=RF32(ea);} // 8005508C
  c->r[4]=c->r[1]+0x00000020u; // 80055090
  {uint32_t ea=c->r[1]+0x00000034u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055094
  c->r[5]=c->r[1]+0x00000018u; // 80055098
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[1]);} // 8005509C
  c->r[6]=c->r[1]+0x00000010u; // 800550A0
  {uint32_t ea=c->r[1]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 800550A4
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[2]);} // 800550A8
  {uint32_t ea=c->r[2]+0xFFFF8234u; c->f[2]=c->ps1[2]=RF32(ea);} // 800550AC
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[3]);} // 800550B0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 800550B4
  c->lr=0x800550BCu; f_8005B050(c); // 800550B8
  c->r[3]=c->r[1]+0x00000018u; // 800550BC
  c->r[4]=0u+0xFFFFFFFFu; // 800550C0
  c->lr=0x800550C8u; f_80208230(c); // 800550C4
  c->r[3]=c->r[1]+0x00000028u; // 800550C8
  c->r[4]=0u+0xFFFFFFFFu; // 800550CC
  c->lr=0x800550D4u; f_80208230(c); // 800550D0
  c->r[31]=c->r[31]+0x00000001u; // 800550D4
  cmpu(c,0,c->r[31],0x00000008u); // 800550D8
  if (crb(c,0)) { IRQCHK(c); goto L_80054FE4; } // 800550DC
L_800550E0:;
  c->r[11]=c->r[1]+0x000000A0u; // 800550E0
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 800550E4
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 800550E8
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 800550EC
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 800550F0
  c->lr=0x800550F8u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800550F4
  c->r[0]=R32(c->r[1]+0x000000C4u); // 800550F8
  c->lr=c->r[0]; // 800550FC
  c->r[1]=c->r[1]+0x000000C0u; // 80055100
  return; // 80055104
}

// calcProc__Q24gbla12GblaSelectIDFRCQ25Alice11ModeType<3>
void f_80055108(Ctx* __restrict c) {
  trace_call(0x80055108u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055108
  c->r[0]=c->lr; // 8005510C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055110
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80055114
  W32(c->r[1]+0x00000018u,c->r[30]); // 80055118
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005511C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80055120
  c->r[28]=c->r[3]|c->r[3]; // 80055124
  c->r[3]=0u+0x00000000u; // 80055128
  c->lr=0x80055130u; f_800705D0(c); // 8005512C
  cmps(c,0,(int32_t)c->r[3],0); // 80055130
  c->r[31]=0u+0x00000000u; // 80055134
  if (crb(c,2)) { goto L_80055148; } // 80055138
  c->r[0]=R32(c->r[28]+0x000000C4u); // 8005513C
  cmps(c,0,(int32_t)c->r[0],-1); // 80055140
  if (!crb(c,2)) { goto L_8005515C; } // 80055144
L_80055148:;
  cmps(c,0,(int32_t)c->r[3],0); // 80055148
  if (!crb(c,2)) { goto L_80055160; } // 8005514C
  c->r[0]=R32(c->r[28]+0x000000C4u); // 80055150
  cmps(c,0,(int32_t)c->r[0],-1); // 80055154
  if (!crb(c,2)) { goto L_80055160; } // 80055158
L_8005515C:;
  c->r[31]=0u+0x00000001u; // 8005515C
L_80055160:;
  c->r[3]=0u+0x00000001u; // 80055160
  c->lr=0x80055168u; f_800705D0(c); // 80055164
  cmps(c,0,(int32_t)c->r[3],0); // 80055168
  c->r[30]=0u+0x00000000u; // 8005516C
  if (crb(c,2)) { goto L_80055180; } // 80055170
  c->r[0]=R32(c->r[28]+0x000000C8u); // 80055174
  cmps(c,0,(int32_t)c->r[0],-1); // 80055178
  if (!crb(c,2)) { goto L_80055194; } // 8005517C
L_80055180:;
  cmps(c,0,(int32_t)c->r[3],0); // 80055180
  if (!crb(c,2)) { goto L_80055198; } // 80055184
  c->r[0]=R32(c->r[28]+0x000000C8u); // 80055188
  cmps(c,0,(int32_t)c->r[0],-1); // 8005518C
  if (!crb(c,2)) { goto L_80055198; } // 80055190
L_80055194:;
  c->r[30]=0u+0x00000001u; // 80055194
L_80055198:;
  c->r[29]=0u+0x00000000u; // 80055198
L_8005519C:;
  cmps(c,0,(int32_t)c->r[29],0); // 8005519C
  c->r[0]=c->r[30]|c->r[30]; // 800551A0
  if (!crb(c,2)) { goto L_800551AC; } // 800551A4
  c->r[0]=c->r[31]|c->r[31]; // 800551A8
L_800551AC:;
  cmps(c,0,(int32_t)c->r[0],0); // 800551AC
  if (crb(c,2)) { goto L_800551C4; } // 800551B0
  {uint32_t ea=c->r[2]+0xFFFF8230u; c->f[1]=c->ps1[1]=RF32(ea);} // 800551B4
  c->r[3]=c->r[29]|c->r[29]; // 800551B8
  c->lr=0x800551C0u; f_80078E14(c); // 800551BC
  goto L_800551D0; // 800551C0
L_800551C4:;
  {uint32_t ea=c->r[2]+0xFFFF8218u; c->f[1]=c->ps1[1]=RF32(ea);} // 800551C4
  c->r[3]=c->r[29]|c->r[29]; // 800551C8
  c->lr=0x800551D0u; f_80078E14(c); // 800551CC
L_800551D0:;
  c->r[29]=c->r[29]+0x00000001u; // 800551D0
  cmpu(c,0,c->r[29],0x00000002u); // 800551D4
  if (crb(c,0)) { IRQCHK(c); goto L_8005519C; } // 800551D8
  c->r[3]=c->r[28]|c->r[28]; // 800551DC
  c->r[4]=0u+0x000000FFu; // 800551E0
  c->lr=0x800551E8u; f_80054AA8(c); // 800551E4
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 800551E8
  c->lr=0x800551F0u; f_80019F7C(c); // 800551EC
  cmps(c,0,(int32_t)c->r[3],0); // 800551F0
  if (!crb(c,2)) { goto L_80055200; } // 800551F4
  c->r[0]=0u+0x00000004u; // 800551F8
  W32(c->r[28]+0x000000B8u,c->r[0]); // 800551FC
L_80055200:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055200
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80055204
  c->r[30]=R32(c->r[1]+0x00000018u); // 80055208
  c->r[29]=R32(c->r[1]+0x00000014u); // 8005520C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80055210
  c->lr=c->r[0]; // 80055214
  c->r[1]=c->r[1]+0x00000020u; // 80055218
  return; // 8005521C
}

// calcProc__Q24gbla12GblaSelectIDFRCQ25Alice11ModeType<7>
void f_80055220(Ctx* __restrict c) {
  trace_call(0x80055220u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055220
  c->r[0]=c->lr; // 80055224
  W32(c->r[1]+0x00000044u,c->r[0]); // 80055228
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8005522C
  c->r[31]=c->r[3]|c->r[3]; // 80055230
  c->lr=0x80055238u; f_800228E8(c); // 80055234
  c->r[28]=c->r[3]|c->r[3]; // 80055238
  c->lr=0x80055240u; f_800241D4(c); // 8005523C
  c->lr=0x80055244u; f_80019FB4(c); // 80055240
  c->r[29]=c->r[3]|c->r[3]; // 80055244
  c->r[3]=c->r[28]|c->r[28]; // 80055248
  c->r[4]=0u+0x00000001u; // 8005524C
  c->lr=0x80055254u; f_800741D4(c); // 80055250
  c->r[30]=c->r[3]|c->r[3]; // 80055254
  c->r[3]=c->r[28]|c->r[28]; // 80055258
  c->r[4]=0u+0x00000000u; // 8005525C
  c->lr=0x80055264u; f_800741D4(c); // 80055260
  c->r[4]=c->r[3]|c->r[3]; // 80055264
  c->r[5]=c->r[30]|c->r[30]; // 80055268
  c->r[6]=c->r[29]|c->r[29]; // 8005526C
  c->r[3]=c->r[31]+0x000004DCu; // 80055270
  c->lr=0x80055278u; f_80039634(c); // 80055274
  cmps(c,0,(int32_t)c->r[3],3); // 80055278
  c->r[29]=c->r[3]|c->r[3]; // 8005527C
  if (!crb(c,2)) { goto L_800552DC; } // 80055280
  c->r[30]=0u+0x00000001u; // 80055284
L_80055288:;
  c->r[3]=c->r[30]|c->r[30]; // 80055288
  c->r[4]=0u+0x00000010u; // 8005528C
  c->lr=0x80055294u; f_8006FF50(c); // 80055290
  cmps(c,0,(int32_t)c->r[3],0); // 80055294
  if (!crb(c,2)) { goto L_800552C4; } // 80055298
  c->r[3]=c->r[30]|c->r[30]; // 8005529C
  c->r[4]=0u+0x00000020u; // 800552A0
  c->lr=0x800552A8u; f_8006FF50(c); // 800552A4
  cmps(c,0,(int32_t)c->r[3],0); // 800552A8
  if (!crb(c,2)) { goto L_800552C4; } // 800552AC
  c->r[3]=c->r[30]|c->r[30]; // 800552B0
  c->r[4]=0u+0x00000080u; // 800552B4
  c->lr=0x800552BCu; f_8006FF50(c); // 800552B8
  cmps(c,0,(int32_t)c->r[3],0); // 800552BC
  if (crb(c,2)) { goto L_800552C8; } // 800552C0
L_800552C4:;
  c->r[29]=c->r[30]|c->r[30]; // 800552C4
L_800552C8:;
  c->r[30]=addc(c,c->r[30],0xFFFFFFFFu,0); cr0(c,c->r[30]); // 800552C8
  if (!crb(c,0)) { IRQCHK(c); goto L_80055288; } // 800552CC
  cmps(c,0,(int32_t)c->r[29],3); // 800552D0
  if (!crb(c,2)) { goto L_800552DC; } // 800552D4
  c->r[29]=0u+0x00000000u; // 800552D8
L_800552DC:;
  c->r[3]=c->r[28]|c->r[28]; // 800552DC
  c->r[4]=c->r[29]|c->r[29]; // 800552E0
  c->lr=0x800552E8u; f_800741B4(c); // 800552E4
  c->r[30]=c->r[3]|c->r[3]; // 800552E8
  c->r[3]=c->r[28]|c->r[28]; // 800552EC
  c->r[4]=c->r[29]|c->r[29]; // 800552F0
  c->lr=0x800552F8u; f_800741D4(c); // 800552F4
  c->r[27]=c->r[3]|c->r[3]; // 800552F8
  c->r[3]=c->r[28]|c->r[28]; // 800552FC
  c->r[4]=c->r[29]|c->r[29]; // 80055300
  c->lr=0x80055308u; f_80074198(c); // 80055304
  c->r[4]=R32(c->r[31]+0x000000CCu); // 80055308
  c->r[7]=c->r[3]|c->r[3]; // 8005530C
  c->r[5]=c->r[30]|c->r[30]; // 80055310
  c->r[6]=c->r[27]|c->r[27]; // 80055314
  c->r[3]=c->r[1]+0x00000008u; // 80055318
  c->lr=0x80055320u; f_80067CE0(c); // 8005531C
  c->r[6]=R32(c->r[1]+0x00000008u); // 80055320
  c->r[3]=c->r[28]|c->r[28]; // 80055324
  c->r[5]=R32(c->r[1]+0x0000000Cu); // 80055328
  c->r[4]=c->r[29]|c->r[29]; // 8005532C
  c->r[0]=R32(c->r[1]+0x00000010u); // 80055330
  W32(c->r[1]+0x00000014u,c->r[6]); // 80055334
  W32(c->r[1]+0x00000018u,c->r[5]); // 80055338
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8005533C
  c->lr=0x80055344u; f_800741D4(c); // 80055340
  c->r[30]=c->r[3]|c->r[3]; // 80055344
  c->r[3]=R32(c->r[31]+0x000000CCu); // 80055348
  c->r[4]=0u+0x0000012Au; // 8005534C
  c->r[5]=0u+0x00000000u; // 80055350
  c->lr=0x80055358u; f_800679B8(c); // 80055354
  cmps(c,0,(int32_t)c->r[30],296); // 80055358
  if (!crb(c,2)) { goto L_8005536C; } // 8005535C
  c->r[0]=0u+0x00000001u; // 80055360
  W8(c->r[31]+0x00000538u,c->r[0]); // 80055364
  goto L_800553A4; // 80055368
L_8005536C:;
  cmps(c,0,(int32_t)c->r[30],284); // 8005536C
  if (!crb(c,2)) { goto L_80055380; } // 80055370
  c->r[0]=0u+0x00000001u; // 80055374
  W8(c->r[31]+0x00000539u,c->r[0]); // 80055378
  goto L_800553A4; // 8005537C
L_80055380:;
  cmps(c,0,(int32_t)c->r[30],272); // 80055380
  if (!crb(c,2)) { goto L_80055394; } // 80055384
  c->r[0]=0u+0x00000001u; // 80055388
  W8(c->r[31]+0x0000053Au,c->r[0]); // 8005538C
  goto L_800553A4; // 80055390
L_80055394:;
  cmps(c,0,(int32_t)c->r[30],260); // 80055394
  if (!crb(c,2)) { goto L_800553A4; } // 80055398
  c->r[0]=0u+0x00000001u; // 8005539C
  W8(c->r[31]+0x0000053Bu,c->r[0]); // 800553A0
L_800553A4:;
  c->r[0]=R8(c->r[1]+0x00000017u); // 800553A4
  c->r[27]=0u+0x00000000u; // 800553A8
  c->r[28]=0u+0x00000000u; // 800553AC
  cmps(c,0,(int32_t)c->r[0],0); // 800553B0
  if (crb(c,2)) { goto L_800553EC; } // 800553B4
  c->r[3]=0u+0x00000170u; // 800553B8
  c->lr=0x800553C0u; f_80022B5C(c); // 800553BC
  c->r[30]=c->r[3]|c->r[3]; // 800553C0
  c->r[3]=0u+0x0000016Eu; // 800553C4
  c->lr=0x800553CCu; f_80022B5C(c); // 800553C8
  c->r[0]=R32(c->r[1]+0x00000018u); // 800553CC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 800553D0
  if (!crb(c,2)) { goto L_800553E0; } // 800553D4
  c->r[27]=0u+0x00000001u; // 800553D8
  goto L_800553EC; // 800553DC
L_800553E0:;
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[3]); // 800553E0
  if (!crb(c,2)) { goto L_800553EC; } // 800553E4
  c->r[28]=0u+0x00000001u; // 800553E8
L_800553EC:;
  cmps(c,0,(int32_t)c->r[27],0); // 800553EC
  if (crb(c,2)) { goto L_8005544C; } // 800553F0
  c->lr=0x800553F8u; f_80029780(c); // 800553F4
  c->r[0]=R32(c->r[31]+0x0000052Cu); // 800553F8
  c->r[30]=c->r[3]|c->r[3]; // 800553FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)96); // 80055400
  c->r[3]=c->r[3]+c->r[0]; // 80055404
  c->r[3]=c->r[3]+0x00000010u; // 80055408
  c->lr=0x80055410u; f_8006DE34(c); // 8005540C
  c->r[0]=R32(c->r[31]+0x0000052Cu); // 80055410
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)6); // 80055414
  c->r[3]=c->r[30]+c->r[0]; // 80055418
  c->r[3]=c->r[3]+0x00000190u; // 8005541C
  c->lr=0x80055424u; f_8006E218(c); // 80055420
  c->r[3]=R32(c->r[31]+0x0000052Cu); // 80055424
  c->r[0]=rotl(c->r[3],10)&0xFFFFFC00u; // 80055428
  c->r[0]=c->r[0]+c->r[3]; // 8005542C
  c->r[3]=c->r[30]+c->r[0]; // 80055430
  c->r[3]=c->r[3]+0x000001A8u; // 80055434
  c->lr=0x8005543Cu; f_8006C450(c); // 80055438
  c->r[3]=c->r[31]|c->r[31]; // 8005543C
  c->r[4]=0u+0x00000008u; // 80055440
  c->lr=0x80055448u; f_800537DC(c); // 80055444
  goto L_80055460; // 80055448
L_8005544C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8005544C
  if (crb(c,2)) { goto L_80055460; } // 80055450
  c->r[3]=c->r[31]|c->r[31]; // 80055454
  c->r[4]=0u+0x00000002u; // 80055458
  c->lr=0x80055460u; f_800537DC(c); // 8005545C
L_80055460:;
  c->r[3]=c->r[31]|c->r[31]; // 80055460
  c->r[4]=0u+0x000000FFu; // 80055464
  c->lr=0x8005546Cu; f_80054F50(c); // 80055468
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8005546C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80055470
  c->lr=c->r[0]; // 80055474
  c->r[1]=c->r[1]+0x00000040u; // 80055478
  return; // 8005547C
}

// initProc__Q24gbla12GblaSelectIDFRCQ25Alice11ModeType<5>
void f_80055480(Ctx* __restrict c) {
  trace_call(0x80055480u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055480
  c->r[0]=c->lr; // 80055484
  c->r[4]=0u+0x00000001u; // 80055488
  c->r[5]=0u+0x00000000u; // 8005548C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80055490
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80055494
  W32(c->r[1]+0x00000028u,c->r[30]); // 80055498
  W32(c->r[1]+0x00000024u,c->r[29]); // 8005549C
  c->r[29]=c->r[3]|c->r[3]; // 800554A0
  c->r[3]=R32(c->r[3]+0x000000CCu); // 800554A4
  c->lr=0x800554ACu; f_800663F0(c); // 800554A8
  c->r[3]=R32(c->r[29]+0x000000CCu); // 800554AC
  c->r[4]=0u+0x00000001u; // 800554B0
  c->r[5]=0u+0x00000000u; // 800554B4
  c->lr=0x800554BCu; f_80066908(c); // 800554B8
  c->r[3]=R32(c->r[29]+0x000000CCu); // 800554BC
  c->r[4]=0u+0x00000002u; // 800554C0
  c->r[5]=0u+0x00000000u; // 800554C4
  c->lr=0x800554CCu; f_800663F0(c); // 800554C8
  c->r[3]=R32(c->r[29]+0x000000CCu); // 800554CC
  c->r[4]=0u+0x00000002u; // 800554D0
  c->r[5]=0u+0x00000000u; // 800554D4
  c->lr=0x800554DCu; f_80066908(c); // 800554D8
  c->r[3]=0u+0x802A0000u; // 800554DC
  c->r[3]=c->r[3]+0xFFFFA010u; // 800554E0
  c->r[3]=c->r[3]+0x000002BFu; // 800554E4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 800554E8
  c->lr=0x800554F0u; f_80019994(c); // 800554EC
  c->r[4]=R32(c->r[29]+0x000000D0u); // 800554F0
  c->r[3]=0u+0x00000008u; // 800554F4
  c->lr=0x800554FCu; f_8002D29C(c); // 800554F8
  c->r[3]=0u+0x0000066Cu; // 800554FC
  c->lr=0x80055504u; f_8020F51C(c); // 80055500
  cmps(c,0,(int32_t)c->r[3],0); // 80055504
  c->r[30]=c->r[3]|c->r[3]; // 80055508
  if (crb(c,2)) { goto L_80055514; } // 8005550C
  c->lr=0x80055514u; f_80021FE0(c); // 80055510
L_80055514:;
  W32(c->r[29]+0x0000093Cu,c->r[30]); // 80055514
  c->r[31]=0u+0x00000000u; // 80055518
  c->r[0]=0u+0xFFFFFFFFu; // 8005551C
  c->r[3]=c->r[30]|c->r[30]; // 80055520
  W32(c->r[1]+0x00000008u,c->r[31]); // 80055524
  c->r[4]=c->r[1]+0x00000008u; // 80055528
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8005552C
  W32(c->r[1]+0x00000010u,c->r[31]); // 80055530
  c->r[0]=R32(c->r[29]+0x000000D0u); // 80055534
  W32(c->r[1]+0x00000008u,c->r[0]); // 80055538
  c->r[0]=R32(c->r[29]+0x00000530u); // 8005553C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80055540
  c->r[0]=R32(c->r[29]+0x00000534u); // 80055544
  W32(c->r[1]+0x00000010u,c->r[0]); // 80055548
  W8(c->r[1]+0x00000014u,c->r[31]); // 8005554C
  c->lr=0x80055554u; f_8002242C(c); // 80055550
  W32(c->r[29]+0x000000BCu,c->r[31]); // 80055554
  W8(c->r[29]+0x00000940u,c->r[31]); // 80055558
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8005555C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80055560
  c->r[29]=R32(c->r[1]+0x00000024u); // 80055564
  c->r[0]=R32(c->r[1]+0x00000034u); // 80055568
  c->lr=c->r[0]; // 8005556C
  c->r[1]=c->r[1]+0x00000030u; // 80055570
  return; // 80055574
}

// isEmptyTag__Q24gbla12GblaSelectIDCFi
void f_80055578(Ctx* __restrict c) {
  trace_call(0x80055578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055578
  c->r[0]=c->lr; // 8005557C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80055580
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80055584
  c->r[31]=0u+0x00000000u; // 80055588
  W32(c->r[1]+0x00000008u,c->r[30]); // 8005558C
  c->r[30]=c->r[4]|c->r[4]; // 80055590
  c->lr=0x80055598u; f_80029780(c); // 80055594
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)96); // 80055598
  c->r[3]=c->r[3]+c->r[0]; // 8005559C
  c->r[3]=c->r[3]+0x00000010u; // 800555A0
  c->lr=0x800555A8u; f_8006DED8(c); // 800555A4
  c->r[4]=0u+0x802A0000u; // 800555A8
  c->r[5]=0u+0x00000001u; // 800555AC
  c->r[4]=c->r[4]+0xFFFFA010u; // 800555B0
  c->r[4]=c->r[4]+0x000002EAu; // 800555B4
  c->lr=0x800555BCu; f_800B3824(c); // 800555B8
  cmps(c,0,(int32_t)c->r[3],0); // 800555BC
  if (!crb(c,2)) { goto L_800555C8; } // 800555C0
  c->r[31]=0u+0x00000001u; // 800555C4
L_800555C8:;
  c->r[3]=c->r[31]|c->r[31]; // 800555C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800555CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 800555D0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800555D4
  c->lr=c->r[0]; // 800555D8
  c->r[1]=c->r[1]+0x00000010u; // 800555DC
  return; // 800555E0
}

// __ct__Q34gbla5Sound15GblaSoundDriverFPCcPCci
void f_800555E4(Ctx* __restrict c) {
  trace_call(0x800555E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800555E4
  c->r[0]=c->lr; // 800555E8
  W32(c->r[1]+0x00000054u,c->r[0]); // 800555EC
  c->r[11]=c->r[1]+0x00000050u; // 800555F0
  c->lr=0x800555F8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800555F4
  c->r[31]=c->r[1]|c->r[1]; // 800555F8
  c->r[30]=c->r[3]|c->r[3]; // 800555FC
  c->r[27]=c->r[4]|c->r[4]; // 80055600
  c->r[25]=c->r[5]|c->r[5]; // 80055604
  c->r[26]=c->r[6]|c->r[6]; // 80055608
  c->lr=0x80055610u; f_802206E8(c); // 8005560C
  c->r[3]=c->r[30]+0x00000004u; // 80055610
  c->lr=0x80055618u; f_80213168(c); // 80055614
  c->r[28]=0u+0x00000000u; // 80055618
  c->r[0]=0u+0xFFFFFFFFu; // 8005561C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80055620
  c->r[4]=c->r[27]|c->r[27]; // 80055624
  c->r[3]=c->r[30]+0x00000004u; // 80055628
  c->r[5]=0u+0x00000000u; // 8005562C
  W32(c->r[30]+0x00000010u,c->r[28]); // 80055630
  c->r[6]=0u+0x00000000u; // 80055634
  W8(c->r[30]+0x00000135u,c->r[28]); // 80055638
  W8(c->r[30]+0x00000014u,c->r[28]); // 8005563C
  c->lr=0x80055644u; f_80213254(c); // 80055640
  c->r[3]=c->r[30]+0x00000004u; // 80055644
  c->lr=0x8005564Cu; f_802138B8(c); // 80055648
  c->r[3]=c->r[30]+0x00000004u; // 8005564C
  c->lr=0x80055654u; f_802138D4(c); // 80055650
  c->r[29]=c->r[3]|c->r[3]; // 80055654
  c->r[3]=c->r[30]+0x00000004u; // 80055658
  c->lr=0x80055660u; f_80213524(c); // 8005565C
  c->r[3]=c->r[3]+c->r[29]; // 80055660
  c->r[0]=c->r[29]+0xFFFFFFFFu; // 80055664
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 80055668
  c->r[3]=c->r[30]+0x00000004u; // 8005566C
  c->r[27]=c->r[4]&~c->r[0]; // 80055670
  c->lr=0x80055678u; f_802138DC(c); // 80055674
  c->r[7]=0u+0x802A0000u; // 80055678
  W8(c->r[31]+0x00000008u,c->r[28]); // 8005567C
  c->r[5]=c->r[3]|c->r[3]; // 80055680
  c->r[4]=c->r[27]|c->r[27]; // 80055684
  c->r[6]=c->r[28]|c->r[28]; // 80055688
  c->r[3]=c->r[31]+0x00000008u; // 8005568C
  c->r[7]=c->r[7]+0xFFFFA300u; // 80055690
  c->r[8]=0u+0x00000033u; // 80055694
  c->lr=0x8005569Cu; f_8020C0D0(c); // 80055698
  W32(c->r[30]+0x00000010u,c->r[3]); // 8005569C
  c->r[4]=c->r[3]|c->r[3]; // 800556A0
  c->r[5]=c->r[27]|c->r[27]; // 800556A4
  c->r[3]=c->r[30]+0x00000004u; // 800556A8
  c->r[6]=0u+0x00000000u; // 800556AC
  c->lr=0x800556B4u; f_802135A0(c); // 800556B0
  cmps(c,0,(int32_t)c->r[25],0); // 800556B4
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800556B8
  W8(c->r[30]+0x00000015u,c->r[28]); // 800556BC
  if (crb(c,2)) { goto L_800556D4; } // 800556C0
  c->r[4]=c->r[25]|c->r[25]; // 800556C4
  c->r[3]=c->r[30]+0x00000015u; // 800556C8
  c->r[5]=0u+0x00000100u; // 800556CC
  c->lr=0x800556D4u; f_800B788C(c); // 800556D0
L_800556D4:;
  c->r[29]=0u+0x802A0000u; // 800556D4
  W32(c->r[30]+0x00000130u,c->r[26]); // 800556D8
  c->r[3]=rotl(c->r[26],2)&0xFFFFFFFCu; // 800556DC
  c->r[5]=0u+0x00000044u; // 800556E0
  c->r[4]=c->r[29]+0xFFFFA300u; // 800556E4
  c->lr=0x800556ECu; f_8020DE50(c); // 800556E8
  c->r[0]=R32(c->r[30]+0x00000130u); // 800556EC
  c->r[4]=c->r[29]+0xFFFFA300u; // 800556F0
  W32(c->r[30]+0x0000011Cu,c->r[3]); // 800556F4
  c->r[5]=0u+0x00000045u; // 800556F8
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800556FC
  c->lr=0x80055704u; f_8020DE50(c); // 80055700
  c->r[0]=R32(c->r[30]+0x00000130u); // 80055704
  c->r[4]=c->r[29]+0xFFFFA300u; // 80055708
  W32(c->r[30]+0x00000120u,c->r[3]); // 8005570C
  c->r[5]=0u+0x00000046u; // 80055710
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80055714
  c->lr=0x8005571Cu; f_8020DE50(c); // 80055718
  c->r[0]=R32(c->r[30]+0x00000130u); // 8005571C
  c->r[4]=c->r[29]+0xFFFFA300u; // 80055720
  W32(c->r[30]+0x00000124u,c->r[3]); // 80055724
  c->r[5]=0u+0x00000047u; // 80055728
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8005572C
  c->lr=0x80055734u; f_8020DE50(c); // 80055730
  c->r[27]=R32(c->r[30]+0x00000130u); // 80055734
  c->r[29]=c->r[29]+0xFFFFA300u; // 80055738
  W32(c->r[30]+0x00000128u,c->r[3]); // 8005573C
  c->r[4]=c->r[29]|c->r[29]; // 80055740
  c->r[3]=rotl(c->r[27],2)&0xFFFFFFFCu; // 80055744
  c->r[5]=0u+0x00000049u; // 80055748
  c->r[3]=c->r[3]+0x00000010u; // 8005574C
  c->lr=0x80055754u; f_8020DE50(c); // 80055750
  cmps(c,0,(int32_t)c->r[3],0); // 80055754
  c->r[28]=c->r[3]|c->r[3]; // 80055758
  if (crb(c,2)) { goto L_800557A8; } // 8005575C
  c->r[4]=0u+0x80220000u; // 80055760
  c->r[5]=0u+0x80220000u; // 80055764
  W32(c->r[31]+0x00000024u,c->r[1]); // 80055768
  c->r[7]=c->r[27]|c->r[27]; // 8005576C
  c->r[4]=c->r[4]+0xFFFFFFB8u; // 80055770
  c->r[5]=c->r[5]+0xFFFFFFC4u; // 80055774
  c->r[6]=0u+0x00000004u; // 80055778
  c->lr=0x80055780u; f_800AD284(c); // 8005577C
  c->r[28]=c->r[3]|c->r[3]; // 80055780
  goto L_800557A8; // 80055784
  c->r[3]=c->r[28]|c->r[28]; // 80055788
  c->r[4]=c->r[29]|c->r[29]; // 8005578C
  c->r[5]=0u+0x00000049u; // 80055790
  c->lr=0x80055798u; f_8020EF30(c); // 80055794
  c->r[3]=0u+0x00000000u; // 80055798
  c->r[4]=0u+0x00000000u; // 8005579C
  c->r[5]=0u+0x00000000u; // 800557A0
  c->lr=0x800557A8u; f_800AF804(c); // 800557A4
L_800557A8:;
  W32(c->r[30]+0x00000118u,c->r[28]); // 800557A8
  c->r[28]=0u+0x00000000u; // 800557AC
  c->r[27]=0u+0x00000000u; // 800557B0
  goto L_80055810; // 800557B4
L_800557B8:;
  c->r[3]=c->r[31]+0x0000000Cu; // 800557B8
  c->lr=0x800557C0u; f_8021F554(c); // 800557BC
  c->r[0]=R32(c->r[30]+0x00000118u); // 800557C0
  c->r[4]=c->r[31]+0x0000000Cu; // 800557C4
  c->r[3]=c->r[0]+c->r[27]; // 800557C8
  c->lr=0x800557D0u; f_802202EC(c); // 800557CC
  c->r[29]=0u+0xFFFFFFFFu; // 800557D0
  c->r[3]=c->r[31]+0x0000000Cu; // 800557D4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[29]; // 800557D8
  c->lr=0x800557E0u; f_8021FFC4(c); // 800557DC
  c->r[3]=R32(c->r[30]+0x0000011Cu); // 800557E0
  c->r[0]=0u+0x00000000u; // 800557E4
  {uint32_t ea=c->r[2]+0xFFFF8258u; c->f[0]=c->ps1[0]=RF32(ea);} // 800557E8
  c->r[28]=c->r[28]+0x00000001u; // 800557EC
  W32(c->r[3]+c->r[27],c->r[29]); // 800557F0
  c->r[3]=R32(c->r[30]+0x00000120u); // 800557F4
  {uint32_t ea=c->r[3]+c->r[27]; WF32(ea,c->f[0]);} // 800557F8
  c->r[3]=R32(c->r[30]+0x00000124u); // 800557FC
  W32(c->r[3]+c->r[27],c->r[0]); // 80055800
  c->r[3]=R32(c->r[30]+0x00000128u); // 80055804
  W32(c->r[3]+c->r[27],c->r[0]); // 80055808
  c->r[27]=c->r[27]+0x00000004u; // 8005580C
L_80055810:;
  c->r[0]=R32(c->r[30]+0x00000130u); // 80055810
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[0]); // 80055814
  if (crb(c,0)) { IRQCHK(c); goto L_800557B8; } // 80055818
  c->r[0]=0u+0x00000000u; // 8005581C
  c->r[10]=c->r[31]|c->r[31]; // 80055820
  W32(c->r[30]+0x0000012Cu,c->r[0]); // 80055824
  c->r[11]=c->r[10]+0x00000050u; // 80055828
  c->r[3]=c->r[30]|c->r[30]; // 8005582C
  W8(c->r[30]+0x00000134u,c->r[0]); // 80055830
  c->lr=0x80055838u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80055834
  c->r[10]=R32(c->r[1]+0x00000000u); // 80055838
  c->r[0]=R32(c->r[10]+0x00000004u); // 8005583C
  c->r[1]=c->r[10]|c->r[10]; // 80055840
  c->lr=c->r[0]; // 80055844
  return; // 80055848
}

// __dt__Q34gbla5Sound15GblaSoundDriverFv
void f_8005584C(Ctx* __restrict c) {
  trace_call(0x8005584Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8005584C
  c->r[0]=c->lr; // 80055850
  cmps(c,0,(int32_t)c->r[3],0); // 80055854
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055858
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8005585C
  c->r[31]=c->r[4]|c->r[4]; // 80055860
  W32(c->r[1]+0x00000018u,c->r[30]); // 80055864
  c->r[30]=c->r[3]|c->r[3]; // 80055868
  W32(c->r[1]+0x00000014u,c->r[29]); // 8005586C
  if (crb(c,2)) { goto L_80055A00; } // 80055870
  c->r[0]=R8(c->r[3]+0x00000135u); // 80055874
  cmps(c,0,(int32_t)c->r[0],0); // 80055878
  if (!crb(c,2)) { goto L_800559D8; } // 8005587C
  c->r[0]=0u+0x00000001u; // 80055880
  W8(c->r[3]+0x00000135u,c->r[0]); // 80055884
  {uint32_t ea=c->r[2]+0xFFFF8258u; c->f[0]=c->ps1[0]=RF32(ea);} // 80055888
  c->r[8]=0u+0x00000000u; // 8005588C
  c->r[7]=0u+0x00000000u; // 80055890
  c->r[6]=0u+0xFFFFFFFFu; // 80055894
  c->r[5]=0u+0x00000000u; // 80055898
  goto L_800558C8; // 8005589C
L_800558A0:;
  c->r[4]=R32(c->r[3]+0x0000011Cu); // 800558A0
  c->r[8]=c->r[8]+0x00000001u; // 800558A4
  W32(c->r[4]+c->r[7],c->r[6]); // 800558A8
  c->r[4]=R32(c->r[3]+0x00000120u); // 800558AC
  {uint32_t ea=c->r[4]+c->r[7]; WF32(ea,c->f[0]);} // 800558B0
  c->r[4]=R32(c->r[3]+0x00000124u); // 800558B4
  W32(c->r[4]+c->r[7],c->r[5]); // 800558B8
  c->r[4]=R32(c->r[3]+0x00000128u); // 800558BC
  W32(c->r[4]+c->r[7],c->r[5]); // 800558C0
  c->r[7]=c->r[7]+0x00000004u; // 800558C4
L_800558C8:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 800558C8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 800558CC
  if (crb(c,0)) { IRQCHK(c); goto L_800558A0; } // 800558D0
  c->r[0]=R32(c->r[3]+0x00000118u); // 800558D4
  c->r[29]=0u+0x00000000u; // 800558D8
  W32(c->r[3]+0x00000130u,c->r[29]); // 800558DC
  cmps(c,0,(int32_t)c->r[0],0); // 800558E0
  if (crb(c,2)) { goto L_800558FC; } // 800558E4
  c->r[4]=0u+0x80220000u; // 800558E8
  c->r[3]=c->r[0]|c->r[0]; // 800558EC
  c->r[4]=c->r[4]+0xFFFFFFC4u; // 800558F0
  c->lr=0x800558F8u; f_800AD5B4(c); // 800558F4
  W32(c->r[30]+0x00000118u,c->r[29]); // 800558F8
L_800558FC:;
  c->r[3]=R32(c->r[30]+0x0000011Cu); // 800558FC
  cmps(c,0,(int32_t)c->r[3],0); // 80055900
  if (crb(c,2)) { goto L_80055914; } // 80055904
  c->lr=0x8005590Cu; f_802110E8(c); // 80055908
  c->r[0]=0u+0x00000000u; // 8005590C
  W32(c->r[30]+0x0000011Cu,c->r[0]); // 80055910
L_80055914:;
  c->r[3]=R32(c->r[30]+0x00000120u); // 80055914
  cmps(c,0,(int32_t)c->r[3],0); // 80055918
  if (crb(c,2)) { goto L_8005592C; } // 8005591C
  c->lr=0x80055924u; f_802110E8(c); // 80055920
  c->r[0]=0u+0x00000000u; // 80055924
  W32(c->r[30]+0x00000120u,c->r[0]); // 80055928
L_8005592C:;
  c->r[3]=R32(c->r[30]+0x00000124u); // 8005592C
  cmps(c,0,(int32_t)c->r[3],0); // 80055930
  if (crb(c,2)) { goto L_80055944; } // 80055934
  c->lr=0x8005593Cu; f_802110E8(c); // 80055938
  c->r[0]=0u+0x00000000u; // 8005593C
  W32(c->r[30]+0x00000124u,c->r[0]); // 80055940
L_80055944:;
  c->r[3]=R32(c->r[30]+0x00000128u); // 80055944
  cmps(c,0,(int32_t)c->r[3],0); // 80055948
  if (crb(c,2)) { goto L_8005595C; } // 8005594C
  c->lr=0x80055954u; f_802110E8(c); // 80055950
  c->r[0]=0u+0x00000000u; // 80055954
  W32(c->r[30]+0x00000128u,c->r[0]); // 80055958
L_8005595C:;
  c->r[0]=0u+0x00000001u; // 8005595C
  W32(c->r[30]+0x0000012Cu,c->r[0]); // 80055960
  c->r[3]=c->r[30]|c->r[30]; // 80055964
  c->lr=0x8005596Cu; f_802207D0(c); // 80055968
  c->r[0]=0u+0x00000000u; // 8005596C
  W8(c->r[30]+0x00000134u,c->r[0]); // 80055970
  c->lr=0x80055978u; f_80071E0C(c); // 80055974
  cmps(c,0,(int32_t)c->r[3],0); // 80055978
  if (!crb(c,2)) { goto L_800559D8; } // 8005597C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80055980
  cmps(c,0,(int32_t)c->r[0],0); // 80055984
  if (crb(c,2)) { goto L_800559B4; } // 80055988
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 8005598C
  c->r[0]=c->r[4]+0x00010000u; // 80055990
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80055994
  if (crb(c,2)) { goto L_800559B4; } // 80055998
  c->r[3]=c->r[30]+0x00000004u; // 8005599C
  c->lr=0x800559A4u; f_800789A8(c); // 800559A0
  c->r[0]=0u+0xFFFFFFFFu; // 800559A4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 800559A8
  c->r[3]=c->r[30]+0x00000004u; // 800559AC
  c->lr=0x800559B4u; f_80213428(c); // 800559B0
L_800559B4:;
  c->r[4]=R32(c->r[30]+0x00000010u); // 800559B4
  cmps(c,0,(int32_t)c->r[4],0); // 800559B8
  if (crb(c,2)) { goto L_800559D8; } // 800559BC
  c->r[29]=0u+0x00000000u; // 800559C0
  W8(c->r[1]+0x00000008u,c->r[29]); // 800559C4
  c->r[3]=c->r[1]+0x00000008u; // 800559C8
  c->r[5]=0u+0x00000000u; // 800559CC
  c->lr=0x800559D4u; f_8020CBF8(c); // 800559D0
  W32(c->r[30]+0x00000010u,c->r[29]); // 800559D4
L_800559D8:;
  c->r[3]=c->r[30]+0x00000004u; // 800559D8
  c->r[4]=0u+0xFFFFFFFFu; // 800559DC
  c->lr=0x800559E4u; f_802131B4(c); // 800559E0
  c->r[3]=c->r[30]|c->r[30]; // 800559E4
  c->r[4]=0u+0xFFFFFFFFu; // 800559E8
  c->lr=0x800559F0u; f_802206F4(c); // 800559EC
  cmps(c,0,(int32_t)c->r[31],0); // 800559F0
  if (!crb(c,1)) { goto L_80055A00; } // 800559F4
  c->r[3]=c->r[30]|c->r[30]; // 800559F8
  c->lr=0x80055A00u; f_80210AFC(c); // 800559FC
L_80055A00:;
  c->r[3]=c->r[30]|c->r[30]; // 80055A00
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80055A04
  c->r[30]=R32(c->r[1]+0x00000018u); // 80055A08
  c->r[29]=R32(c->r[1]+0x00000014u); // 80055A0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055A10
  c->lr=c->r[0]; // 80055A14
  c->r[1]=c->r[1]+0x00000020u; // 80055A18
  return; // 80055A1C
}

// isReady__Q34gbla5Sound15GblaSoundDriverFv
void f_80055A20(Ctx* __restrict c) {
  trace_call(0x80055A20u);
  c->r[3]=R32(c->r[3]+0x0000012Cu); // 80055A20
  c->r[0]=0u-c->r[3]; // 80055A24
  c->r[0]=c->r[0]|c->r[3]; // 80055A28
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80055A2C
  return; // 80055A30
}

// stopAll__Q34gbla5Sound15GblaSoundDriverFv
void f_80055A34(Ctx* __restrict c) {
  trace_call(0x80055A34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055A34
  c->r[0]=c->lr; // 80055A38
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055A3C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80055A40
  c->r[31]=c->r[3]|c->r[3]; // 80055A44
  c->r[0]=R8(c->r[3]+0x00000135u); // 80055A48
  cmps(c,0,(int32_t)c->r[0],0); // 80055A4C
  if (crb(c,2)) { goto L_80055A5C; } // 80055A50
  c->r[3]=0u+0x00000001u; // 80055A54
  goto L_80055B3C; // 80055A58
L_80055A5C:;
  c->r[27]=0u+0x00000001u; // 80055A5C
  c->r[26]=0u+0x00000000u; // 80055A60
  c->r[28]=0u+0x00000000u; // 80055A64
  c->r[29]=0u+0xFFFFFFFFu; // 80055A68
  c->r[30]=0u+0x00000000u; // 80055A6C
  goto L_80055B2C; // 80055A70
L_80055A74:;
  c->r[0]=R8(c->r[31]+0x00000135u); // 80055A74
  cmps(c,0,(int32_t)c->r[0],0); // 80055A78
  if (crb(c,2)) { goto L_80055A88; } // 80055A7C
  c->r[3]=0u+0x00000000u; // 80055A80
  goto L_80055AD0; // 80055A84
L_80055A88:;
  c->r[0]=R32(c->r[31]+0x0000012Cu); // 80055A88
  cmps(c,0,(int32_t)c->r[0],0); // 80055A8C
  if (!crb(c,2)) { goto L_80055A9C; } // 80055A90
  c->r[3]=0u+0x00000000u; // 80055A94
  goto L_80055AD0; // 80055A98
L_80055A9C:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 80055A9C
  if (crb(c,0)) { goto L_80055AAC; } // 80055AA0
  c->r[3]=0u+0x00000000u; // 80055AA4
  goto L_80055AD0; // 80055AA8
L_80055AAC:;
  c->r[3]=c->r[31]|c->r[31]; // 80055AAC
  c->lr=0x80055AB4u; f_80220660(c); // 80055AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80055AB4
  if (crb(c,2)) { goto L_80055ACC; } // 80055AB8
  c->r[0]=R32(c->r[31]+0x00000118u); // 80055ABC
  c->r[3]=c->r[0]+c->r[28]; // 80055AC0
  c->lr=0x80055AC8u; f_8021F8AC(c); // 80055AC4
  goto L_80055AD0; // 80055AC8
L_80055ACC:;
  c->r[3]=0u+0x00000000u; // 80055ACC
L_80055AD0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80055AD0
  if (crb(c,2)) { goto L_80055B24; } // 80055AD4
  c->r[0]=R8(c->r[31]+0x00000135u); // 80055AD8
  cmps(c,0,(int32_t)c->r[0],0); // 80055ADC
  if (!crb(c,2)) { goto L_80055B20; } // 80055AE0
  c->r[0]=R32(c->r[31]+0x0000012Cu); // 80055AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80055AE8
  if (crb(c,2)) { goto L_80055B20; } // 80055AEC
  c->r[0]=R32(c->r[31]+0x00000130u); // 80055AF0
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[0]); // 80055AF4
  if (!crb(c,0)) { goto L_80055B20; } // 80055AF8
  c->r[3]=R32(c->r[31]+0x0000011Cu); // 80055AFC
  W32(c->r[3]+c->r[28],c->r[29]); // 80055B00
  c->r[3]=R32(c->r[31]+0x00000124u); // 80055B04
  W32(c->r[3]+c->r[28],c->r[30]); // 80055B08
  c->r[3]=R32(c->r[31]+0x00000128u); // 80055B0C
  W32(c->r[3]+c->r[28],c->r[30]); // 80055B10
  c->r[0]=R32(c->r[31]+0x00000118u); // 80055B14
  c->r[3]=c->r[0]+c->r[28]; // 80055B18
  c->lr=0x80055B20u; f_8021F7DC(c); // 80055B1C
L_80055B20:;
  c->r[27]=0u+0x00000000u; // 80055B20
L_80055B24:;
  c->r[28]=c->r[28]+0x00000004u; // 80055B24
  c->r[26]=c->r[26]+0x00000001u; // 80055B28
L_80055B2C:;
  c->r[3]=R32(c->r[31]+0x00000130u); // 80055B2C
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[3]); // 80055B30
  if (crb(c,0)) { IRQCHK(c); goto L_80055A74; } // 80055B34
  c->r[3]=c->r[27]|c->r[27]; // 80055B38
L_80055B3C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80055B3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055B40
  c->lr=c->r[0]; // 80055B44
  c->r[1]=c->r[1]+0x00000020u; // 80055B48
  return; // 80055B4C
}

// play__Q34gbla5Sound15GblaSoundDriverFii
void f_80055B50(Ctx* __restrict c) {
  trace_call(0x80055B50u);
  c->r[0]=R8(c->r[3]+0x00000135u); // 80055B50
  cmps(c,0,(int32_t)c->r[0],0); // 80055B54
  if (crb(c,2)) { goto L_80055B64; } // 80055B58
  c->r[3]=0u+0x00000000u; // 80055B5C
  return; // 80055B60
L_80055B64:;
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 80055B64
  cmps(c,0,(int32_t)c->r[0],0); // 80055B68
  if (!crb(c,2)) { goto L_80055B78; } // 80055B6C
  c->r[3]=0u+0x00000000u; // 80055B70
  return; // 80055B74
L_80055B78:;
  c->r[0]=R32(c->r[3]+0x00000130u); // 80055B78
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80055B7C
  if (crb(c,0)) { goto L_80055B8C; } // 80055B80
  c->r[3]=0u+0x00000000u; // 80055B84
  return; // 80055B88
L_80055B8C:;
  c->r[6]=R32(c->r[3]+0x0000011Cu); // 80055B8C
  c->r[5]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80055B90
  c->r[0]=0u+0x00000000u; // 80055B94
  W32(c->r[6]+c->r[5],c->r[4]); // 80055B98
  c->r[4]=R32(c->r[3]+0x00000124u); // 80055B9C
  W32(c->r[4]+c->r[5],c->r[0]); // 80055BA0
  c->r[4]=R32(c->r[3]+0x00000128u); // 80055BA4
  c->r[3]=0u+0x00000000u; // 80055BA8
  W32(c->r[4]+c->r[5],c->r[0]); // 80055BAC
  return; // 80055BB0
}

// stop__Q34gbla5Sound15GblaSoundDriverFii
void f_80055BB4(Ctx* __restrict c) {
  trace_call(0x80055BB4u);
  c->r[0]=R8(c->r[3]+0x00000135u); // 80055BB4
  cmps(c,0,(int32_t)c->r[0],0); // 80055BB8
  if (!crb(c,2)) return; // 80055BBC
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 80055BC0
  cmps(c,0,(int32_t)c->r[0],0); // 80055BC4
  if (crb(c,2)) return; // 80055BC8
  c->r[0]=R32(c->r[3]+0x00000130u); // 80055BCC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80055BD0
  if (!crb(c,0)) return; // 80055BD4
  c->r[6]=R32(c->r[3]+0x0000011Cu); // 80055BD8
  cmps(c,0,(int32_t)c->r[5],0); // 80055BDC
  c->r[7]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80055BE0
  c->r[0]=0u+0xFFFFFFFFu; // 80055BE4
  W32(c->r[6]+c->r[7],c->r[0]); // 80055BE8
  if (!crb(c,1)) { goto L_80055C04; } // 80055BEC
  c->r[4]=R32(c->r[3]+0x00000124u); // 80055BF0
  W32(c->r[4]+c->r[7],c->r[5]); // 80055BF4
  c->r[3]=R32(c->r[3]+0x00000128u); // 80055BF8
  W32(c->r[3]+c->r[7],c->r[5]); // 80055BFC
  return; // 80055C00
L_80055C04:;
  c->r[4]=R32(c->r[3]+0x00000124u); // 80055C04
  c->r[0]=0u+0x00000000u; // 80055C08
  W32(c->r[4]+c->r[7],c->r[0]); // 80055C0C
  c->r[4]=R32(c->r[3]+0x00000128u); // 80055C10
  W32(c->r[4]+c->r[7],c->r[0]); // 80055C14
  c->r[0]=R32(c->r[3]+0x00000118u); // 80055C18
  c->r[3]=c->r[0]+c->r[7]; // 80055C1C
  f_8021F7DC(c); return; // 80055C20
  return; // 80055C24
}

// pause__Q34gbla5Sound15GblaSoundDriverFbi
void f_80055C28(Ctx* __restrict c) {
  trace_call(0x80055C28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055C28
  c->r[0]=c->lr; // 80055C2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055C30
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80055C34
  W32(c->r[1]+0x00000018u,c->r[30]); // 80055C38
  c->r[30]=c->r[4]|c->r[4]; // 80055C3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80055C40
  c->r[29]=c->r[3]|c->r[3]; // 80055C44
  c->r[0]=R8(c->r[3]+0x00000135u); // 80055C48
  cmps(c,0,(int32_t)c->r[0],0); // 80055C4C
  if (!crb(c,2)) { goto L_80055C94; } // 80055C50
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 80055C54
  cmps(c,0,(int32_t)c->r[0],0); // 80055C58
  if (crb(c,2)) { goto L_80055C94; } // 80055C5C
  c->r[0]=R32(c->r[3]+0x00000130u); // 80055C60
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 80055C64
  if (!crb(c,0)) { goto L_80055C94; } // 80055C68
  c->r[0]=R32(c->r[3]+0x00000118u); // 80055C6C
  c->r[31]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80055C70
  c->r[3]=c->r[0]+c->r[31]; // 80055C74
  c->lr=0x80055C7Cu; f_8021F900(c); // 80055C78
  cmpu(c,0,c->r[30],c->r[3]); // 80055C7C
  if (crb(c,2)) { goto L_80055C94; } // 80055C80
  c->r[0]=R32(c->r[29]+0x00000118u); // 80055C84
  c->r[4]=c->r[30]|c->r[30]; // 80055C88
  c->r[3]=c->r[0]+c->r[31]; // 80055C8C
  c->lr=0x80055C94u; f_8021F7F8(c); // 80055C90
L_80055C94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055C94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80055C98
  c->r[30]=R32(c->r[1]+0x00000018u); // 80055C9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80055CA0
  c->lr=c->r[0]; // 80055CA4
  c->r[1]=c->r[1]+0x00000020u; // 80055CA8
  return; // 80055CAC
}

// setVolume__Q34gbla5Sound15GblaSoundDriverFif
void f_80055CB0(Ctx* __restrict c) {
  trace_call(0x80055CB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80055CB0
  c->r[0]=c->lr; // 80055CB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80055CB8
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 80055CBC
  c->f[31]=c->f[1]; // 80055CC0
  W32(c->r[1]+0x00000014u,c->r[31]); // 80055CC4
  c->r[31]=c->r[4]|c->r[4]; // 80055CC8
  W32(c->r[1]+0x00000010u,c->r[30]); // 80055CCC
  c->r[30]=c->r[3]|c->r[3]; // 80055CD0
  c->r[0]=R8(c->r[3]+0x00000135u); // 80055CD4
  cmps(c,6,(int32_t)c->r[0],0); // 80055CD8
  if (!crb(c,26)) { goto L_80055D68; } // 80055CDC
  c->r[0]=R32(c->r[3]+0x0000012Cu); // 80055CE0
  cmps(c,1,(int32_t)c->r[0],0); // 80055CE4
  if (crb(c,6)) { goto L_80055D68; } // 80055CE8
  c->r[0]=R32(c->r[3]+0x00000130u); // 80055CEC
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80055CF0
  if (!crb(c,0)) { goto L_80055D68; } // 80055CF4
  if (crb(c,26)) { goto L_80055D04; } // 80055CF8
  c->r[3]=0u+0x00000000u; // 80055CFC
  goto L_80055D40; // 80055D00
L_80055D04:;
  if (!crb(c,6)) { goto L_80055D10; } // 80055D04
  c->r[3]=0u+0x00000000u; // 80055D08
  goto L_80055D40; // 80055D0C
L_80055D10:;
  if (crb(c,0)) { goto L_80055D1C; } // 80055D10
  c->r[3]=0u+0x00000000u; // 80055D14
  goto L_80055D40; // 80055D18
L_80055D1C:;
  c->lr=0x80055D20u; f_80220660(c); // 80055D1C
  cmps(c,0,(int32_t)c->r[3],0); // 80055D20
  if (crb(c,2)) { goto L_80055D3C; } // 80055D24
  c->r[3]=R32(c->r[30]+0x00000118u); // 80055D28
  c->r[0]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80055D2C
  c->r[3]=c->r[3]+c->r[0]; // 80055D30
  c->lr=0x80055D38u; f_8021F8AC(c); // 80055D34
  goto L_80055D40; // 80055D38
L_80055D3C:;
  c->r[3]=0u+0x00000000u; // 80055D3C
L_80055D40:;
  cmps(c,0,(int32_t)c->r[3],0); // 80055D40
  if (crb(c,2)) { goto L_80055D68; } // 80055D44
  c->f[1]=c->f[31]; // 80055D48
  c->r[0]=R32(c->r[30]+0x00000118u); // 80055D4C
  c->r[31]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80055D50
  c->r[3]=c->r[0]+c->r[31]; // 80055D54
  c->lr=0x80055D5Cu; f_8021F814(c); // 80055D58
  c->r[0]=R32(c->r[30]+0x00000118u); // 80055D5C
  c->r[3]=c->r[0]+c->r[31]; // 80055D60
  c->lr=0x80055D68u; f_8021F890(c); // 80055D64
L_80055D68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80055D68
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 80055D6C
  c->r[31]=R32(c->r[1]+0x00000014u); // 80055D70
  c->r[30]=R32(c->r[1]+0x00000010u); // 80055D74
  c->lr=c->r[0]; // 80055D78
  c->r[1]=c->r[1]+0x00000020u; // 80055D7C
  return; // 80055D80
}

