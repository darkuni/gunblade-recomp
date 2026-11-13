#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// __ct__Q34gbla8Resource11DummySpriteFv
void f_80069C14(Ctx* __restrict c) {
  trace_call(0x80069C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80069C14
  c->r[0]=c->lr; // 80069C18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80069C1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80069C20
  c->r[31]=c->r[3]|c->r[3]; // 80069C24
  c->lr=0x80069C2Cu; f_8006851C(c); // 80069C28
  c->r[4]=0u+0x80310000u; // 80069C2C
  c->r[3]=c->r[31]|c->r[31]; // 80069C30
  c->r[4]=c->r[4]+0xFFFFDC58u; // 80069C34
  W32(c->r[31]+0x00000000u,c->r[4]); // 80069C38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80069C3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80069C40
  c->lr=c->r[0]; // 80069C44
  c->r[1]=c->r[1]+0x00000010u; // 80069C48
  return; // 80069C4C
}

// __dt__Q34gbla8Resource11DummySpriteFv
void f_80069C50(Ctx* __restrict c) {
  trace_call(0x80069C50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80069C50
  c->r[0]=c->lr; // 80069C54
  cmps(c,0,(int32_t)c->r[3],0); // 80069C58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80069C5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80069C60
  c->r[31]=c->r[4]|c->r[4]; // 80069C64
  W32(c->r[1]+0x00000008u,c->r[30]); // 80069C68
  c->r[30]=c->r[3]|c->r[3]; // 80069C6C
  if (crb(c,2)) { goto L_80069C8C; } // 80069C70
  c->r[4]=0u+0x00000000u; // 80069C74
  c->lr=0x80069C7Cu; f_800685D0(c); // 80069C78
  cmps(c,0,(int32_t)c->r[31],0); // 80069C7C
  if (!crb(c,1)) { goto L_80069C8C; } // 80069C80
  c->r[3]=c->r[30]|c->r[30]; // 80069C84
  c->lr=0x80069C8Cu; f_80210AFC(c); // 80069C88
L_80069C8C:;
  c->r[3]=c->r[30]|c->r[30]; // 80069C8C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80069C90
  c->r[30]=R32(c->r[1]+0x00000008u); // 80069C94
  c->r[0]=R32(c->r[1]+0x00000014u); // 80069C98
  c->lr=c->r[0]; // 80069C9C
  c->r[1]=c->r[1]+0x00000010u; // 80069CA0
  return; // 80069CA4
}

// fn_80069CA8
void f_80069CA8(Ctx* __restrict c) {
  trace_call(0x80069CA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80069CA8
  c->r[0]=c->lr; // 80069CAC
  c->r[3]=0u+0x802B0000u; // 80069CB0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80069CB4
  c->r[3]=c->r[3]+0x00003848u; // 80069CB8
  c->r[0]=0u+0x00000000u; // 80069CBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80069CC0
  c->r[31]=c->r[3]+0x000000C7u; // 80069CC4
  c->r[3]=c->r[31]|c->r[31]; // 80069CC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80069CCC
  c->r[30]=0u+0x80360000u; // 80069CD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 80069CD4
  {uint32_t ea=c->r[30]+0xFFFFB9DCu; W32(ea,c->r[0]); c->r[30]=ea;} // 80069CD8
  W32(c->r[30]+0x00000004u,c->r[0]); // 80069CDC
  W32(c->r[30]+0x00000008u,c->r[0]); // 80069CE0
  c->lr=0x80069CE8u; f_800ACEA0(c); // 80069CE4
  c->r[29]=c->r[3]|c->r[3]; // 80069CE8
  c->r[3]=c->r[30]|c->r[30]; // 80069CEC
  c->r[4]=c->r[29]|c->r[29]; // 80069CF0
  c->lr=0x80069CF8u; f_80018E9C(c); // 80069CF4
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 80069CF8
  c->r[3]=c->r[30]|c->r[30]; // 80069CFC
  W8(c->r[1]+0x00000008u,c->r[0]); // 80069D00
  c->r[6]=c->r[31]|c->r[31]; // 80069D04
  c->r[7]=c->r[31]+c->r[29]; // 80069D08
  c->r[8]=c->r[1]+0x00000008u; // 80069D0C
  c->r[4]=0u+0x00000000u; // 80069D10
  c->r[5]=0u+0x00000000u; // 80069D14
  c->lr=0x80069D1Cu; f_800190CC(c); // 80069D18
  c->r[4]=0u+0x80020000u; // 80069D1C
  c->r[5]=0u+0x80360000u; // 80069D20
  c->r[3]=c->r[30]|c->r[30]; // 80069D24
  c->r[4]=c->r[4]+0xFFFF8BA8u; // 80069D28
  c->r[5]=c->r[5]+0xFFFFB9D0u; // 80069D2C
  c->lr=0x80069D34u; f_800ACF84(c); // 80069D30
  c->r[0]=R32(c->r[1]+0x00000024u); // 80069D34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80069D38
  c->r[30]=R32(c->r[1]+0x00000018u); // 80069D3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80069D40
  c->lr=c->r[0]; // 80069D44
  c->r[1]=c->r[1]+0x00000020u; // 80069D48
  return; // 80069D4C
}

// get_gun_type__9la_customFi
void f_80069D50(Ctx* __restrict c) {
  trace_call(0x80069D50u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80069D50
  c->r[3]=c->r[13]+0xFFFF9790u; // 80069D54
  c->r[3]=R32(c->r[3]+c->r[0]); // 80069D58
  return; // 80069D5C
}

// set_wide_mode__9la_customFQ29la_custom9WIDE_MODE
void f_80069D60(Ctx* __restrict c) {
  trace_call(0x80069D60u);
  W32(c->r[13]+0xFFFF979Cu,c->r[3]); // 80069D60
  return; // 80069D64
}

// get_wide_mode__9la_customFv
void f_80069D68(Ctx* __restrict c) {
  trace_call(0x80069D68u);
  c->r[3]=R32(c->r[13]+0xFFFF979Cu); // 80069D68
  return; // 80069D6C
}

// set_pause__9la_customFb
void f_80069D70(Ctx* __restrict c) {
  trace_call(0x80069D70u);
  W8(c->r[13]+0xFFFF979Au,c->r[3]); // 80069D70
  return; // 80069D74
}

// is_pause__9la_customFv
void f_80069D78(Ctx* __restrict c) {
  trace_call(0x80069D78u);
  c->r[3]=R8(c->r[13]+0xFFFF979Au); // 80069D78
  return; // 80069D7C
}

// debug_ctrl__9la_customFv
void f_80069D80(Ctx* __restrict c) {
  trace_call(0x80069D80u);
  return; // 80069D80
}

// gun_type_init__9la_customFv
void f_80069D84(Ctx* __restrict c) {
  trace_call(0x80069D84u);
  c->r[4]=0u+0x80360000u; // 80069D84
  c->r[0]=0u+0x00000000u; // 80069D88
  {uint32_t ea=c->r[2]+0xFFFFA640u; c->f[0]=c->ps1[0]=RF32(ea);} // 80069D8C
  c->r[3]=c->r[4]+0xFFFFB9E8u; // 80069D90
  c->r[5]=c->r[13]+0xFFFF9790u; // 80069D94
  W32(c->r[13]+0xFFFF9790u,c->r[0]); // 80069D98
  W32(c->r[5]+0x00000004u,c->r[0]); // 80069D9C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80069DA0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80069DA4
  {uint32_t ea=c->r[4]+0xFFFFB9E8u; WF32(ea,c->f[0]);} // 80069DA8
  W32(c->r[13]+0xFFFF97ACu,c->r[0]); // 80069DAC
  return; // 80069DB0
}

// set_gun_type_flag__9la_customFii
void f_80069DB4(Ctx* __restrict c) {
  trace_call(0x80069DB4u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80069DB4
  c->r[3]=c->r[13]+0xFFFF81D8u; // 80069DB8
  c->r[4]=c->r[4]|0x00000001u; // 80069DBC
  W32(c->r[3]+c->r[0],c->r[4]); // 80069DC0
  return; // 80069DC4
}

// set_gun_type_ctrl__9la_customFb
void f_80069DC8(Ctx* __restrict c) {
  trace_call(0x80069DC8u);
  W8(c->r[13]+0xFFFF9798u,c->r[3]); // 80069DC8
  return; // 80069DCC
}

// gun_type_ctrl__9la_customFiPb
void f_80069DD0(Ctx* __restrict c) {
  trace_call(0x80069DD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80069DD0
  c->r[0]=c->lr; // 80069DD4
  c->r[5]=0u+0x00000000u; // 80069DD8
  W32(c->r[1]+0x00000034u,c->r[0]); // 80069DDC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80069DE0
  c->r[30]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80069DE4
  c->r[31]=c->r[13]+0xFFFF9790u; // 80069DE8
  c->r[27]=c->r[3]|c->r[3]; // 80069DEC
  W16(c->r[1]+0x00000008u,c->r[5]); // 80069DF0
  c->r[28]=c->r[4]|c->r[4]; // 80069DF4
  c->r[0]=R8(c->r[13]+0xFFFF9798u); // 80069DF8
  c->r[29]=R32(c->r[31]+c->r[30]); // 80069DFC
  cmps(c,0,(int32_t)c->r[0],0); // 80069E00
  if (crb(c,2)) { goto L_80069F68; } // 80069E04
  c->r[25]=c->r[13]+0xFFFF81F8u; // 80069E08
  c->r[4]=0u+0x00000004u; // 80069E0C
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069E10
  c->lr=0x80069E18u; f_8006FF50(c); // 80069E14
  cmps(c,0,(int32_t)c->r[3],0); // 80069E18
  if (!crb(c,2)) { goto L_80069E34; } // 80069E1C
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069E20
  c->r[4]=0u+0x00000002u; // 80069E24
  c->lr=0x80069E2Cu; f_80070780(c); // 80069E28
  cmps(c,0,(int32_t)c->r[3],0); // 80069E2C
  if (crb(c,2)) { goto L_80069E3C; } // 80069E30
L_80069E34:;
  c->r[0]=0u+0x00000000u; // 80069E34
  W32(c->r[31]+c->r[30],c->r[0]); // 80069E38
L_80069E3C:;
  c->r[26]=c->r[13]+0xFFFF81D8u; // 80069E3C
  c->r[0]=R32(c->r[26]+c->r[30]); // 80069E40
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80069E44
  if (crb(c,2)) { goto L_80069E7C; } // 80069E48
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069E4C
  c->r[4]=0u+0x00000001u; // 80069E50
  c->lr=0x80069E58u; f_8006FF50(c); // 80069E54
  cmps(c,0,(int32_t)c->r[3],0); // 80069E58
  if (!crb(c,2)) { goto L_80069E74; } // 80069E5C
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069E60
  c->r[4]=0u+0x00000000u; // 80069E64
  c->lr=0x80069E6Cu; f_80070780(c); // 80069E68
  cmps(c,0,(int32_t)c->r[3],0); // 80069E6C
  if (crb(c,2)) { goto L_80069E7C; } // 80069E70
L_80069E74:;
  c->r[0]=0u+0x00000003u; // 80069E74
  W32(c->r[31]+c->r[30],c->r[0]); // 80069E78
L_80069E7C:;
  c->r[0]=R32(c->r[26]+c->r[30]); // 80069E7C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80069E80
  if (crb(c,2)) { goto L_80069EB8; } // 80069E84
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069E88
  c->r[4]=0u+0x00000002u; // 80069E8C
  c->lr=0x80069E94u; f_8006FF50(c); // 80069E90
  cmps(c,0,(int32_t)c->r[3],0); // 80069E94
  if (!crb(c,2)) { goto L_80069EB0; } // 80069E98
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069E9C
  c->r[4]=0u+0x00000001u; // 80069EA0
  c->lr=0x80069EA8u; f_80070780(c); // 80069EA4
  cmps(c,0,(int32_t)c->r[3],0); // 80069EA8
  if (crb(c,2)) { goto L_80069EB8; } // 80069EAC
L_80069EB0:;
  c->r[0]=0u+0x00000002u; // 80069EB0
  W32(c->r[31]+c->r[30],c->r[0]); // 80069EB4
L_80069EB8:;
  c->r[0]=R32(c->r[26]+c->r[30]); // 80069EB8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80069EBC
  if (crb(c,2)) { goto L_80069EF4; } // 80069EC0
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069EC4
  c->r[4]=0u+0x00000008u; // 80069EC8
  c->lr=0x80069ED0u; f_8006FF50(c); // 80069ECC
  cmps(c,0,(int32_t)c->r[3],0); // 80069ED0
  if (!crb(c,2)) { goto L_80069EEC; } // 80069ED4
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069ED8
  c->r[4]=0u+0x00000003u; // 80069EDC
  c->lr=0x80069EE4u; f_80070780(c); // 80069EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80069EE4
  if (crb(c,2)) { goto L_80069EF4; } // 80069EE8
L_80069EEC:;
  c->r[0]=0u+0x00000001u; // 80069EEC
  W32(c->r[31]+c->r[30],c->r[0]); // 80069EF0
L_80069EF4:;
  c->r[3]=R32(c->r[25]+c->r[30]); // 80069EF4
  c->r[4]=0u+0x00001000u; // 80069EF8
  c->lr=0x80069F00u; f_8006FF50(c); // 80069EFC
  cmps(c,0,(int32_t)c->r[3],0); // 80069F00
  if (crb(c,2)) { goto L_80069F3C; } // 80069F04
  c->r[4]=R32(c->r[31]+c->r[30]); // 80069F08
  c->r[3]=0u+0x00000001u; // 80069F0C
  c->r[5]=R32(c->r[26]+c->r[30]); // 80069F10
L_80069F14:;
  c->r[4]=c->r[4]+0x00000001u; // 80069F14
  c->r[0]=rotl(c->r[4],30)&0xC0000000u; // 80069F18
  c->r[4]=rotl(c->r[4],1)&0x00000001u; // 80069F1C
  c->r[0]=c->r[0]-c->r[4]; // 80069F20
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFFu; // 80069F24
  c->r[4]=c->r[0]+c->r[4]; // 80069F28
  c->r[0]=((c->r[4])&0x20)?0u:(c->r[3]<<((c->r[4])&31)); // 80069F2C
  c->r[0]=c->r[0]&c->r[5]; cr0(c,c->r[0]); // 80069F30
  if (crb(c,2)) { IRQCHK(c); goto L_80069F14; } // 80069F34
  W32(c->r[31]+c->r[30],c->r[4]); // 80069F38
L_80069F3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 80069F3C
  if (crb(c,2)) { goto L_80069F68; } // 80069F40
  c->r[0]=R32(c->r[31]+c->r[30]); // 80069F44
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80069F48
  if (crb(c,2)) { goto L_80069F5C; } // 80069F4C
  c->r[3]=c->r[1]+0x00000008u; // 80069F50
  c->r[0]=0u+0x00000001u; // 80069F54
  W8(c->r[3]+c->r[27],c->r[0]); // 80069F58
L_80069F5C:;
  c->r[3]=c->r[1]+0x00000008u; // 80069F5C
  c->r[0]=R8(c->r[3]+c->r[27]); // 80069F60
  W8(c->r[28]+0x00000000u,c->r[0]); // 80069F64
L_80069F68:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80069F68
  c->r[0]=R32(c->r[1]+0x00000034u); // 80069F6C
  c->lr=c->r[0]; // 80069F70
  c->r[1]=c->r[1]+0x00000030u; // 80069F74
  return; // 80069F78
}

// setGunCnt__9la_customFii
void f_80069F7C(Ctx* __restrict c) {
  trace_call(0x80069F7Cu);
  cmpu(c,0,c->r[3],0x00000002u); // 80069F7C
  if (!crb(c,0)) return; // 80069F80
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80069F84
  c->r[3]=c->r[13]+0xFFFF97A0u; // 80069F88
  W32(c->r[3]+c->r[0],c->r[4]); // 80069F8C
  return; // 80069F90
}

// getGunCnt__9la_customFi
void f_80069F94(Ctx* __restrict c) {
  trace_call(0x80069F94u);
  cmpu(c,0,c->r[3],0x00000002u); // 80069F94
  if (crb(c,0)) { goto L_80069FA4; } // 80069F98
  c->r[3]=0u+0xFFFFFFFFu; // 80069F9C
  return; // 80069FA0
L_80069FA4:;
  c->r[0]=R8(c->r[13]+0xFFFF9798u); // 80069FA4
  cmps(c,0,(int32_t)c->r[0],0); // 80069FA8
  if (crb(c,2)) { goto L_80069FC0; } // 80069FAC
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80069FB0
  c->r[3]=c->r[13]+0xFFFF97A0u; // 80069FB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80069FB8
  return; // 80069FBC
L_80069FC0:;
  c->r[3]=0u+0x00000000u; // 80069FC0
  return; // 80069FC4
}

// setDifficulty__9la_customFi
void f_80069FC8(Ctx* __restrict c) {
  trace_call(0x80069FC8u);
  W32(c->r[13]+0xFFFF97A8u,c->r[3]); // 80069FC8
  return; // 80069FCC
}

// getDifficulty__9la_customFv
void f_80069FD0(Ctx* __restrict c) {
  trace_call(0x80069FD0u);
  c->r[3]=R32(c->r[13]+0xFFFF97A8u); // 80069FD0
  return; // 80069FD4
}

// getDifficultyGBLA__9la_customFv
void f_80069FD8(Ctx* __restrict c) {
  trace_call(0x80069FD8u);
  c->r[0]=R32(c->r[13]+0xFFFF97A8u); // 80069FD8
  cmps(c,0,(int32_t)c->r[0],128); // 80069FDC
  if (crb(c,2)) { goto L_80069FF8; } // 80069FE0
  cmps(c,0,(int32_t)c->r[0],255); // 80069FE4
  c->r[3]=0u+0x00000000u; // 80069FE8
  if (!crb(c,2)) return; // 80069FEC
  c->r[3]=0u+0x00000002u; // 80069FF0
  return; // 80069FF4
L_80069FF8:;
  c->r[3]=0u+0x00000001u; // 80069FF8
  return; // 80069FFC
}

// getDifficultyGB__9la_customFv
void f_8006A000(Ctx* __restrict c) {
  trace_call(0x8006A000u);
  c->r[4]=R32(c->r[13]+0xFFFF97A8u); // 8006A000
  cmps(c,0,(int32_t)c->r[4],128); // 8006A004
  if (crb(c,2)) { goto L_8006A024; } // 8006A008
  c->r[3]=c->r[4]+0xFFFFFF01u; // 8006A00C
  c->r[0]=addc(c,~c->r[4],0x000000FFu,1); // 8006A010
  c->r[0]=~(c->r[3]|c->r[0]); // 8006A014
  c->r[0]=sraw(c,c->r[0],31); // 8006A018
  c->r[3]=rotl(c->r[0],0)&0x00000007u; // 8006A01C
  return; // 8006A020
L_8006A024:;
  c->r[3]=0u+0x00000003u; // 8006A024
  return; // 8006A028
}

// set_wpad_speaker_enable__9la_customFb
void f_8006A02C(Ctx* __restrict c) {
  trace_call(0x8006A02Cu);
  W8(c->r[13]+0xFFFF81E0u,c->r[3]); // 8006A02C
  return; // 8006A030
}

// set_wpad_speaker_ctrl__9la_customFb
void f_8006A034(Ctx* __restrict c) {
  trace_call(0x8006A034u);
  W8(c->r[13]+0xFFFF9799u,c->r[3]); // 8006A034
  return; // 8006A038
}

// set_is_title__9la_customFb
void f_8006A03C(Ctx* __restrict c) {
  trace_call(0x8006A03Cu);
  W8(c->r[13]+0xFFFF97B1u,c->r[3]); // 8006A03C
  return; // 8006A040
}

// set_is_adv__9la_customFb
void f_8006A044(Ctx* __restrict c) {
  trace_call(0x8006A044u);
  W8(c->r[13]+0xFFFF97B2u,c->r[3]); // 8006A044
  return; // 8006A048
}

// setLocalID__9la_customFiUi
void f_8006A04C(Ctx* __restrict c) {
  trace_call(0x8006A04Cu);
  cmpu(c,0,c->r[3],0x00000002u); // 8006A04C
  if (!crb(c,0)) return; // 8006A050
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A054
  c->r[3]=c->r[13]+0xFFFF97B8u; // 8006A058
  W32(c->r[3]+c->r[0],c->r[4]); // 8006A05C
  return; // 8006A060
}

// getLocalID__9la_customFi
void f_8006A064(Ctx* __restrict c) {
  trace_call(0x8006A064u);
  cmpu(c,0,c->r[3],0x00000002u); // 8006A064
  if (crb(c,0)) { goto L_8006A074; } // 8006A068
  c->r[3]=0u+0x00000000u; // 8006A06C
  return; // 8006A070
L_8006A074:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A074
  c->r[3]=c->r[13]+0xFFFF97B8u; // 8006A078
  c->r[3]=R32(c->r[3]+c->r[0]); // 8006A07C
  return; // 8006A080
}

// setIDName__9la_customFiPCc
void f_8006A084(Ctx* __restrict c) {
  trace_call(0x8006A084u);
  cmpu(c,0,c->r[3],0x00000002u); // 8006A084
  c->r[5]=c->r[4]|c->r[4]; // 8006A088
  if (!crb(c,0)) return; // 8006A08C
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8006A090
  c->r[6]=0u+0x80360000u; // 8006A094
  c->r[4]=0u+0x802B0000u; // 8006A098
  c->r[0]=c->r[0]+c->r[3]; // 8006A09C
  c->r[6]=c->r[6]+0xFFFFB9F4u; // 8006A0A0
  c->r[3]=c->r[6]+c->r[0]; // 8006A0A4
  c->r[4]=c->r[4]+0x00003918u; // 8006A0A8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006A0AC
  f_800B5FD4(c); return; // 8006A0B0
  return; // 8006A0B4
}

// is_wpad_speaker_enable__9la_customFv
void f_8006A0B8(Ctx* __restrict c) {
  trace_call(0x8006A0B8u);
  c->r[4]=R8(c->r[13]+0xFFFF9799u); // 8006A0B8
  c->r[0]=R8(c->r[13]+0xFFFF81E0u); // 8006A0BC
  c->r[3]=0u-c->r[4]; // 8006A0C0
  c->r[3]=c->r[3]|c->r[4]; // 8006A0C4
  c->r[3]=sraw(c,c->r[3],31); // 8006A0C8
  c->r[3]=c->r[0]&c->r[3]; // 8006A0CC
  return; // 8006A0D0
}

// set_bgm_volume__9la_customFf
void f_8006A0D4(Ctx* __restrict c) {
  trace_call(0x8006A0D4u);
  {uint32_t ea=c->r[13]+0xFFFF81E4u; WF32(ea,c->f[1]);} // 8006A0D4
  return; // 8006A0D8
}

// set_se_volume__9la_customFf
void f_8006A0DC(Ctx* __restrict c) {
  trace_call(0x8006A0DCu);
  {uint32_t ea=c->r[13]+0xFFFF81E8u; WF32(ea,c->f[1]);} // 8006A0DC
  return; // 8006A0E0
}

// set_voice_volume__9la_customFf
void f_8006A0E4(Ctx* __restrict c) {
  trace_call(0x8006A0E4u);
  {uint32_t ea=c->r[13]+0xFFFF81ECu; WF32(ea,c->f[1]);} // 8006A0E4
  return; // 8006A0E8
}

// get_bgm_volume__9la_customFv
void f_8006A0EC(Ctx* __restrict c) {
  trace_call(0x8006A0ECu);
  {uint32_t ea=c->r[13]+0xFFFF81E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006A0EC
  return; // 8006A0F0
}

// get_se_volume__9la_customFv
void f_8006A0F4(Ctx* __restrict c) {
  trace_call(0x8006A0F4u);
  {uint32_t ea=c->r[13]+0xFFFF81E8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006A0F4
  return; // 8006A0F8
}

// get_voice_volume__9la_customFv
void f_8006A0FC(Ctx* __restrict c) {
  trace_call(0x8006A0FCu);
  {uint32_t ea=c->r[13]+0xFFFF81ECu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006A0FC
  return; // 8006A100
}

// get_country_code__9la_customFv
void f_8006A104(Ctx* __restrict c) {
  trace_call(0x8006A104u);
  f_800725F4(c); return; // 8006A104
}

// is_capture_mode__9la_customFv
void f_8006A108(Ctx* __restrict c) {
  trace_call(0x8006A108u);
  c->r[3]=0u+0x00000000u; // 8006A108
  return; // 8006A10C
}

// get_avoid_ang__9la_customFPf
void f_8006A110(Ctx* __restrict c) {
  trace_call(0x8006A110u);
  c->r[4]=0u+0x80360000u; // 8006A110
  {uint32_t ea=c->r[4]+0xFFFFB9E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006A114
  c->r[4]=c->r[4]+0xFFFFB9E8u; // 8006A118
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 8006A11C
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006A120
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8006A124
  {uint32_t ea=c->r[4]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006A128
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 8006A12C
  return; // 8006A130
}

// is_auto_play__9la_customFv
void f_8006A134(Ctx* __restrict c) {
  trace_call(0x8006A134u);
  c->r[3]=R8(c->r[13]+0xFFFF97B0u); // 8006A134
  return; // 8006A138
}

// get_is_title__9la_customFv
void f_8006A13C(Ctx* __restrict c) {
  trace_call(0x8006A13Cu);
  c->r[3]=R8(c->r[13]+0xFFFF97B1u); // 8006A13C
  return; // 8006A140
}

// get_is_adv__9la_customFv
void f_8006A144(Ctx* __restrict c) {
  trace_call(0x8006A144u);
  c->r[3]=R8(c->r[13]+0xFFFF97B2u); // 8006A144
  return; // 8006A148
}

// is_door_closed__9la_customFv
void f_8006A14C(Ctx* __restrict c) {
  trace_call(0x8006A14Cu);
  c->r[3]=R32(c->r[13]+0xFFFF96D4u); // 8006A14C
  f_80019FA4(c); return; // 8006A150
}

// getIDName__9la_customFi
void f_8006A154(Ctx* __restrict c) {
  trace_call(0x8006A154u);
  cmpu(c,0,c->r[3],0x00000002u); // 8006A154
  if (crb(c,0)) { goto L_8006A164; } // 8006A158
  c->r[3]=0u+0x00000000u; // 8006A15C
  return; // 8006A160
L_8006A164:;
  c->r[0]=rotl(c->r[3],3)&0xFFFFFFF8u; // 8006A164
  c->r[4]=0u+0x80360000u; // 8006A168
  c->r[0]=c->r[0]+c->r[3]; // 8006A16C
  c->r[4]=c->r[4]+0xFFFFB9F4u; // 8006A170
  c->r[3]=c->r[4]+c->r[0]; // 8006A174
  return; // 8006A178
}

// get_language__9la_customFv
void f_8006A17C(Ctx* __restrict c) {
  trace_call(0x8006A17Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006A17C
  c->r[0]=c->lr; // 8006A180
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006A184
  c->lr=0x8006A18Cu; f_80072520(c); // 8006A188
  cmps(c,0,(int32_t)c->r[3],0); // 8006A18C
  if (crb(c,2)) { goto L_8006A1B8; } // 8006A190
  cmps(c,0,(int32_t)c->r[3],3); // 8006A194
  if (crb(c,2)) { goto L_8006A1C8; } // 8006A198
  cmps(c,0,(int32_t)c->r[3],5); // 8006A19C
  if (crb(c,2)) { goto L_8006A1D0; } // 8006A1A0
  cmps(c,0,(int32_t)c->r[3],2); // 8006A1A4
  if (crb(c,2)) { goto L_8006A1D8; } // 8006A1A8
  cmps(c,0,(int32_t)c->r[3],4); // 8006A1AC
  if (crb(c,2)) { goto L_8006A1E0; } // 8006A1B0
  goto L_8006A1C0; // 8006A1B4
L_8006A1B8:;
  c->r[3]=0u+0x00000000u; // 8006A1B8
  goto L_8006A1E4; // 8006A1BC
L_8006A1C0:;
  c->r[3]=0u+0x00000001u; // 8006A1C0
  goto L_8006A1E4; // 8006A1C4
L_8006A1C8:;
  c->r[3]=0u+0x00000002u; // 8006A1C8
  goto L_8006A1E4; // 8006A1CC
L_8006A1D0:;
  c->r[3]=0u+0x00000003u; // 8006A1D0
  goto L_8006A1E4; // 8006A1D4
L_8006A1D8:;
  c->r[3]=0u+0x00000004u; // 8006A1D8
  goto L_8006A1E4; // 8006A1DC
L_8006A1E0:;
  c->r[3]=0u+0x00000005u; // 8006A1E0
L_8006A1E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006A1E4
  c->lr=c->r[0]; // 8006A1E8
  c->r[1]=c->r[1]+0x00000010u; // 8006A1EC
  return; // 8006A1F0
}

// get_rank_calc_data__9la_customFi
void f_8006A1F4(Ctx* __restrict c) {
  trace_call(0x8006A1F4u);
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)176); // 8006A1F4
  c->r[3]=0u+0x80360000u; // 8006A1F8
  c->r[3]=c->r[3]+0xFFFFC5B0u; // 8006A1FC
  c->r[3]=c->r[3]+c->r[0]; // 8006A200
  return; // 8006A204
}

// rank_calc__9la_customFi
void f_8006A208(Ctx* __restrict c) {
  trace_call(0x8006A208u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006A208
  c->r[0]=c->lr; // 8006A20C
  c->r[5]=0u+0x80360000u; // 8006A210
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8006A214
  c->r[6]=(uint32_t)((int32_t)c->r[4]*(int32_t)176); // 8006A218
  c->r[5]=c->r[5]+0xFFFFC5B0u; // 8006A21C
  c->r[0]=0u+0x00000016u; // 8006A220
  c->r[7]=c->r[1]+0x00000004u; // 8006A224
  c->r[6]=c->r[5]+c->r[6]; // 8006A228
  c->ctr=c->r[0]; // 8006A22C
  c->r[6]=c->r[6]+0xFFFFFFFCu; // 8006A230
L_8006A234:;
  c->r[5]=R32(c->r[6]+0x00000004u); // 8006A234
  {uint32_t ea=c->r[6]+0x00000008u; c->r[0]=R32(ea); c->r[6]=ea;} // 8006A238
  W32(c->r[7]+0x00000004u,c->r[5]); // 8006A23C
  {uint32_t ea=c->r[7]+0x00000008u; W32(ea,c->r[0]); c->r[7]=ea;} // 8006A240
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A234; } // 8006A244
  c->r[5]=c->r[1]+0x00000008u; // 8006A248
  c->lr=0x8006A250u; f_80041EA8(c); // 8006A24C
  c->r[0]=R32(c->r[1]+0x000000C4u); // 8006A250
  c->lr=c->r[0]; // 8006A254
  c->r[1]=c->r[1]+0x000000C0u; // 8006A258
  return; // 8006A25C
}

// getRnakCalcRecData__9la_customFi
void f_8006A260(Ctx* __restrict c) {
  trace_call(0x8006A260u);
  cmpu(c,0,c->r[4],0x00000001u); // 8006A260
  c->r[5]=0u+0xFFFFFFFFu; // 8006A264
  c->r[0]=0u+0x00000000u; // 8006A268
  W32(c->r[3]+0x00000000u,c->r[5]); // 8006A26C
  W32(c->r[3]+0x00000004u,c->r[5]); // 8006A270
  W32(c->r[3]+0x00000008u,c->r[0]); // 8006A274
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8006A278
  if (crb(c,1)) return; // 8006A27C
  c->r[5]=0u+0x80360000u; // 8006A280
  c->r[4]=rotl(c->r[4],4)&0xFFFFFFF0u; // 8006A284
  c->r[5]=c->r[5]+0xFFFFC710u; // 8006A288
  c->r[0]=R32(c->r[5]+c->r[4]); // 8006A28C
  c->r[4]=c->r[5]+c->r[4]; // 8006A290
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006A294
  c->r[0]=R32(c->r[4]+0x00000004u); // 8006A298
  W32(c->r[3]+0x00000004u,c->r[0]); // 8006A29C
  c->r[0]=R32(c->r[4]+0x00000008u); // 8006A2A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8006A2A4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8006A2A8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8006A2AC
  return; // 8006A2B0
}

// __ct__Q34gbla4rank18RANK_CALC_REC_DATAFv
void f_8006A2B4(Ctx* __restrict c) {
  trace_call(0x8006A2B4u);
  c->r[4]=0u+0xFFFFFFFFu; // 8006A2B4
  c->r[0]=0u+0x00000000u; // 8006A2B8
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006A2BC
  W32(c->r[3]+0x00000004u,c->r[4]); // 8006A2C0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8006A2C4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8006A2C8
  return; // 8006A2CC
}

// setRankCalcRecData__9la_customFiRCQ34gbla4rank18RANK_CALC_REC_DATA
void f_8006A2D0(Ctx* __restrict c) {
  trace_call(0x8006A2D0u);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A2D0
  if (crb(c,1)) return; // 8006A2D4
  c->r[5]=0u+0x80360000u; // 8006A2D8
  c->r[3]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8006A2DC
  c->r[5]=c->r[5]+0xFFFFC710u; // 8006A2E0
  c->r[0]=R32(c->r[4]+0x00000000u); // 8006A2E4
  W32(c->r[5]+c->r[3],c->r[0]); // 8006A2E8
  c->r[3]=c->r[5]+c->r[3]; // 8006A2EC
  c->r[0]=R32(c->r[4]+0x00000004u); // 8006A2F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8006A2F4
  c->r[0]=R32(c->r[4]+0x00000008u); // 8006A2F8
  W32(c->r[3]+0x00000008u,c->r[0]); // 8006A2FC
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8006A300
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8006A304
  return; // 8006A308
}

// rankCalcDataSetting__9la_customFb
void f_8006A30C(Ctx* __restrict c) {
  trace_call(0x8006A30Cu);
  W8(c->r[13]+0xFFFF97C5u,c->r[3]); // 8006A30C
  return; // 8006A310
}

// isRankCalcDataSetting__9la_customFv
void f_8006A314(Ctx* __restrict c) {
  trace_call(0x8006A314u);
  c->r[3]=R8(c->r[13]+0xFFFF97C5u); // 8006A314
  return; // 8006A318
}

// setGrade__9la_customFiQ34gbla5param11_gbla_class
void f_8006A31C(Ctx* __restrict c) {
  trace_call(0x8006A31Cu);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A31C
  if (crb(c,1)) return; // 8006A320
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A324
  c->r[3]=c->r[13]+0xFFFF97C8u; // 8006A328
  W32(c->r[3]+c->r[0],c->r[4]); // 8006A32C
  return; // 8006A330
}

// getGrade__9la_customFi
void f_8006A334(Ctx* __restrict c) {
  trace_call(0x8006A334u);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A334
  if (crb(c,1)) { goto L_8006A34C; } // 8006A338
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A33C
  c->r[3]=c->r[13]+0xFFFF97C8u; // 8006A340
  c->r[3]=R32(c->r[3]+c->r[0]); // 8006A344
  return; // 8006A348
L_8006A34C:;
  c->r[3]=0u+0x0000000Au; // 8006A34C
  return; // 8006A350
}

// setPoint__9la_customFii
void f_8006A354(Ctx* __restrict c) {
  trace_call(0x8006A354u);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A354
  if (crb(c,1)) return; // 8006A358
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A35C
  c->r[3]=c->r[13]+0xFFFF97D0u; // 8006A360
  W32(c->r[3]+c->r[0],c->r[4]); // 8006A364
  return; // 8006A368
}

// getPoint__9la_customFi
void f_8006A36C(Ctx* __restrict c) {
  trace_call(0x8006A36Cu);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A36C
  if (crb(c,1)) { goto L_8006A384; } // 8006A370
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A374
  c->r[3]=c->r[13]+0xFFFF97D0u; // 8006A378
  c->r[3]=R32(c->r[3]+c->r[0]); // 8006A37C
  return; // 8006A380
L_8006A384:;
  c->r[3]=0u+0x00000000u; // 8006A384
  return; // 8006A388
}

// getRankUpWaitCnt__9la_customFv
void f_8006A38C(Ctx* __restrict c) {
  trace_call(0x8006A38Cu);
  c->r[3]=R32(c->r[13]+0xFFFF97D8u); // 8006A38C
  return; // 8006A390
}

// setRankUpWaitCnt__9la_customFi
void f_8006A394(Ctx* __restrict c) {
  trace_call(0x8006A394u);
  W32(c->r[13]+0xFFFF97D8u,c->r[3]); // 8006A394
  return; // 8006A398
}

// setRankingEntryDataIn__9la_customFib
void f_8006A39C(Ctx* __restrict c) {
  trace_call(0x8006A39Cu);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A39C
  if (crb(c,1)) return; // 8006A3A0
  c->r[5]=c->r[13]+0xFFFF97C0u; // 8006A3A4
  W8(c->r[5]+c->r[3],c->r[4]); // 8006A3A8
  return; // 8006A3AC
}

// getRankingEntryDataIn__9la_customFi
void f_8006A3B0(Ctx* __restrict c) {
  trace_call(0x8006A3B0u);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A3B0
  if (crb(c,1)) { goto L_8006A3C4; } // 8006A3B4
  c->r[4]=c->r[13]+0xFFFF97C0u; // 8006A3B8
  c->r[3]=R8(c->r[4]+c->r[3]); // 8006A3BC
  return; // 8006A3C0
L_8006A3C4:;
  c->r[3]=0u+0x00000000u; // 8006A3C4
  return; // 8006A3C8
}

// setRankingEntryData__9la_customFiRCQ34gbla5param14RankingNetData
void f_8006A3CC(Ctx* __restrict c) {
  trace_call(0x8006A3CCu);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A3CC
  if (crb(c,1)) return; // 8006A3D0
  c->r[6]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 8006A3D4
  c->r[5]=0u+0x80360000u; // 8006A3D8
  c->r[0]=R32(c->r[4]+0x00000000u); // 8006A3DC
  c->r[5]=c->r[5]+0xFFFFBA08u; // 8006A3E0
  c->r[3]=R32(c->r[4]+0x00000004u); // 8006A3E4
  W32(c->r[5]+c->r[6],c->r[0]); // 8006A3E8
  c->r[5]=c->r[5]+c->r[6]; // 8006A3EC
  c->r[0]=R32(c->r[4]+0x00000008u); // 8006A3F0
  W32(c->r[5]+0x00000004u,c->r[3]); // 8006A3F4
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8006A3F8
  W32(c->r[5]+0x00000008u,c->r[0]); // 8006A3FC
  c->r[0]=R8(c->r[4]+0x00000010u); // 8006A400
  W32(c->r[5]+0x0000000Cu,c->r[3]); // 8006A404
  c->r[3]=R8(c->r[4]+0x00000011u); // 8006A408
  W8(c->r[5]+0x00000010u,c->r[0]); // 8006A40C
  c->r[0]=R8(c->r[4]+0x00000012u); // 8006A410
  W8(c->r[5]+0x00000011u,c->r[3]); // 8006A414
  c->r[3]=R8(c->r[4]+0x00000013u); // 8006A418
  W8(c->r[5]+0x00000012u,c->r[0]); // 8006A41C
  c->r[0]=R32(c->r[4]+0x00000014u); // 8006A420
  W8(c->r[5]+0x00000013u,c->r[3]); // 8006A424
  W32(c->r[5]+0x00000014u,c->r[0]); // 8006A428
  return; // 8006A42C
}

// getRankingEntryData__9la_customFi
void f_8006A430(Ctx* __restrict c) {
  trace_call(0x8006A430u);
  cmpu(c,0,c->r[3],0x00000001u); // 8006A430
  if (!crb(c,1)) { goto L_8006A43C; } // 8006A434
  c->r[3]=0u+0x00000000u; // 8006A438
L_8006A43C:;
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)24); // 8006A43C
  c->r[3]=0u+0x80360000u; // 8006A440
  c->r[3]=c->r[3]+0xFFFFBA08u; // 8006A444
  c->r[3]=c->r[3]+c->r[0]; // 8006A448
  return; // 8006A44C
}

// setLARankingData__9la_customFRCQ34gbla5param13LARankingData
void f_8006A450(Ctx* __restrict c) {
  trace_call(0x8006A450u);
  c->r[4]=0u+0x80360000u; // 8006A450
  c->r[0]=0u+0x00000023u; // 8006A454
  c->r[4]=c->r[4]+0xFFFFBA38u; // 8006A458
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 8006A45C
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 8006A460
  c->ctr=c->r[0]; // 8006A464
L_8006A468:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006A468
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006A46C
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006A470
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006A474
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A468; } // 8006A478
  c->r[4]=0u+0x80360000u; // 8006A47C
  c->r[0]=0u+0x00000023u; // 8006A480
  c->r[4]=c->r[4]+0xFFFFBA38u; // 8006A484
  c->r[5]=c->r[3]+0x00000114u; // 8006A488
  c->r[6]=c->r[4]+0x00000114u; // 8006A48C
  c->ctr=c->r[0]; // 8006A490
L_8006A494:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006A494
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006A498
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006A49C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006A4A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A494; } // 8006A4A4
  c->r[5]=0u+0x80360000u; // 8006A4A8
  c->r[0]=0u+0x00000057u; // 8006A4AC
  c->r[5]=c->r[5]+0xFFFFBA38u; // 8006A4B0
  c->r[4]=c->r[3]+0x0000022Cu; // 8006A4B4
  c->r[5]=c->r[5]+0x0000022Cu; // 8006A4B8
  c->ctr=c->r[0]; // 8006A4BC
L_8006A4C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8006A4C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8006A4C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 8006A4C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8006A4CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A4C0; } // 8006A4D0
  c->r[0]=R32(c->r[4]+0x00000004u); // 8006A4D4
  W32(c->r[5]+0x00000004u,c->r[0]); // 8006A4D8
  return; // 8006A4DC
}

// getLARankingData__9la_customFv
void f_8006A4E0(Ctx* __restrict c) {
  trace_call(0x8006A4E0u);
  c->r[3]=0u+0x80360000u; // 8006A4E0
  c->r[3]=c->r[3]+0xFFFFBA38u; // 8006A4E4
  return; // 8006A4E8
}

// setLAInitializeEnd__9la_customFb
void f_8006A4EC(Ctx* __restrict c) {
  trace_call(0x8006A4ECu);
  W8(c->r[13]+0xFFFF97C2u,c->r[3]); // 8006A4EC
  return; // 8006A4F0
}

// isLAInitializeEnd__9la_customFv
void f_8006A4F4(Ctx* __restrict c) {
  trace_call(0x8006A4F4u);
  c->r[3]=R8(c->r[13]+0xFFFF97C2u); // 8006A4F4
  return; // 8006A4F8
}

// setGBRankingData__9la_customFRCQ34gbla5param13GBRankingData
void f_8006A4FC(Ctx* __restrict c) {
  trace_call(0x8006A4FCu);
  c->r[4]=0u+0x80360000u; // 8006A4FC
  c->r[0]=0u+0x00000069u; // 8006A500
  c->r[4]=c->r[4]+0xFFFFBF24u; // 8006A504
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 8006A508
  c->r[6]=c->r[4]+0xFFFFFFFCu; // 8006A50C
  c->ctr=c->r[0]; // 8006A510
L_8006A514:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006A514
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006A518
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006A51C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006A520
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A514; } // 8006A524
  c->r[4]=0u+0x80360000u; // 8006A528
  c->r[0]=0u+0x00000034u; // 8006A52C
  c->r[4]=c->r[4]+0xFFFFBF24u; // 8006A530
  c->r[5]=c->r[3]+0x00000344u; // 8006A534
  c->r[6]=c->r[4]+0x00000344u; // 8006A538
  c->ctr=c->r[0]; // 8006A53C
L_8006A540:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006A540
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006A544
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006A548
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006A54C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A540; } // 8006A550
  c->r[0]=R32(c->r[5]+0x00000004u); // 8006A554
  c->r[7]=0u+0x80360000u; // 8006A558
  W32(c->r[6]+0x00000004u,c->r[0]); // 8006A55C
  c->r[7]=c->r[7]+0xFFFFBF24u; // 8006A560
  c->r[0]=0u+0x00000019u; // 8006A564
  c->r[5]=c->r[3]+0x000004F8u; // 8006A568
  c->r[4]=R32(c->r[3]+0x000004ECu); // 8006A56C
  c->r[6]=c->r[7]+0x000004F8u; // 8006A570
  W32(c->r[7]+0x000004ECu,c->r[4]); // 8006A574
  c->r[4]=R32(c->r[3]+0x000004F0u); // 8006A578
  W32(c->r[7]+0x000004F0u,c->r[4]); // 8006A57C
  c->r[4]=R32(c->r[3]+0x000004F4u); // 8006A580
  W32(c->r[7]+0x000004F4u,c->r[4]); // 8006A584
  c->r[4]=R32(c->r[3]+0x000004F8u); // 8006A588
  W32(c->r[7]+0x000004F8u,c->r[4]); // 8006A58C
  c->ctr=c->r[0]; // 8006A590
L_8006A594:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006A594
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006A598
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006A59C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006A5A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A594; } // 8006A5A4
  c->r[5]=0u+0x80360000u; // 8006A5A8
  c->r[0]=0u+0x00000019u; // 8006A5AC
  c->r[5]=c->r[5]+0xFFFFBF24u; // 8006A5B0
  c->r[4]=c->r[3]+0x000005C0u; // 8006A5B4
  c->r[5]=c->r[5]+0x000005C0u; // 8006A5B8
  c->ctr=c->r[0]; // 8006A5BC
L_8006A5C0:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8006A5C0
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8006A5C4
  W32(c->r[5]+0x00000004u,c->r[3]); // 8006A5C8
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8006A5CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006A5C0; } // 8006A5D0
  return; // 8006A5D4
}

// getGBRankingData__9la_customFv
void f_8006A5D8(Ctx* __restrict c) {
  trace_call(0x8006A5D8u);
  c->r[3]=0u+0x80360000u; // 8006A5D8
  c->r[3]=c->r[3]+0xFFFFBF24u; // 8006A5DC
  return; // 8006A5E0
}

// setGBWarningEnd__9la_customFb
void f_8006A5E4(Ctx* __restrict c) {
  trace_call(0x8006A5E4u);
  W8(c->r[13]+0xFFFF97C3u,c->r[3]); // 8006A5E4
  return; // 8006A5E8
}

// isGBWarningEnd__9la_customFv
void f_8006A5EC(Ctx* __restrict c) {
  trace_call(0x8006A5ECu);
  c->r[3]=R8(c->r[13]+0xFFFF97C3u); // 8006A5EC
  return; // 8006A5F0
}

// setRankingDataIn__9la_customFb
void f_8006A5F4(Ctx* __restrict c) {
  trace_call(0x8006A5F4u);
  W8(c->r[13]+0xFFFF97C4u,c->r[3]); // 8006A5F4
  return; // 8006A5F8
}

// getRankingDataIn__9la_customFv
void f_8006A5FC(Ctx* __restrict c) {
  trace_call(0x8006A5FCu);
  c->r[3]=R8(c->r[13]+0xFFFF97C4u); // 8006A5FC
  return; // 8006A600
}

// setPlayerStart__9la_customFib
void f_8006A604(Ctx* __restrict c) {
  trace_call(0x8006A604u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A604
  c->r[3]=c->r[13]+0xFFFF97E8u; // 8006A608
  W32(c->r[3]+c->r[0],c->r[4]); // 8006A60C
  return; // 8006A610
}

// getPlayerStart__9la_customFi
void f_8006A614(Ctx* __restrict c) {
  trace_call(0x8006A614u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A614
  c->r[3]=c->r[13]+0xFFFF97E8u; // 8006A618
  c->r[3]=R32(c->r[3]+c->r[0]); // 8006A61C
  c->r[0]=0u-c->r[3]; // 8006A620
  c->r[0]=c->r[0]|c->r[3]; // 8006A624
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8006A628
  return; // 8006A62C
}

// setPlayerStart2__9la_customFib
void f_8006A630(Ctx* __restrict c) {
  trace_call(0x8006A630u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A630
  c->r[3]=c->r[13]+0xFFFF97F0u; // 8006A634
  W32(c->r[3]+c->r[0],c->r[4]); // 8006A638
  return; // 8006A63C
}

// getPlayerStart2__9la_customFi
void f_8006A640(Ctx* __restrict c) {
  trace_call(0x8006A640u);
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006A640
  c->r[3]=c->r[13]+0xFFFF97F0u; // 8006A644
  c->r[3]=R32(c->r[3]+c->r[0]); // 8006A648
  c->r[0]=0u-c->r[3]; // 8006A64C
  c->r[0]=c->r[0]|c->r[3]; // 8006A650
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8006A654
  return; // 8006A658
}

// adjust_PSE__9la_customFv
void f_8006A65C(Ctx* __restrict c) {
  trace_call(0x8006A65Cu);
  c->r[3]=R32(c->r[13]+0xFFFF81F0u); // 8006A65C
  return; // 8006A660
}

// check_PSE_break__9la_customFb
void f_8006A664(Ctx* __restrict c) {
  trace_call(0x8006A664u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006A664
  c->r[0]=c->lr; // 8006A668
  c->r[4]=0u+0x00000100u; // 8006A66C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006A670
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 8006A674
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 8006A678
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006A67C
  c->r[31]=0u+0x00000000u; // 8006A680
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006A684
  c->r[30]=c->r[3]|c->r[3]; // 8006A688
  c->r[3]=0u+0x00000000u; // 8006A68C
  c->lr=0x8006A694u; f_8006FEC0(c); // 8006A690
  cmps(c,0,(int32_t)c->r[3],0); // 8006A694
  if (crb(c,2)) { goto L_8006A6B4; } // 8006A698
  c->r[3]=0u+0x00000000u; // 8006A69C
  c->r[4]=0u+0x00000200u; // 8006A6A0
  c->lr=0x8006A6A8u; f_8006FEC0(c); // 8006A6A4
  cmps(c,0,(int32_t)c->r[3],0); // 8006A6A8
  if (crb(c,2)) { goto L_8006A6B4; } // 8006A6AC
  c->r[31]=0u+0x00000001u; // 8006A6B0
L_8006A6B4:;
  c->r[3]=0u+0x00000000u; // 8006A6B4
  c->lr=0x8006A6BCu; f_80070340(c); // 8006A6B8
  c->f[31]=c->f[1]; // 8006A6BC
  c->r[3]=0u+0x00000000u; // 8006A6C0
  c->lr=0x8006A6C8u; f_80070364(c); // 8006A6C4
  cmps(c,0,(int32_t)c->r[30],0); // 8006A6C8
  {uint32_t ea=c->r[2]+0xFFFFA644u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006A6CC
  if (crb(c,2)) { goto L_8006A6DC; } // 8006A6D0
  cmps(c,0,(int32_t)c->r[31],0); // 8006A6D4
  if (!crb(c,2)) { goto L_8006A6E4; } // 8006A6D8
L_8006A6DC:;
  c->r[0]=0u+0x00000000u; // 8006A6DC
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A6E0
L_8006A6E4:;
  c->r[4]=R32(c->r[13]+0xFFFF97DCu); // 8006A6E4
  cmpu(c,0,c->r[4],0x00000007u); // 8006A6E8
  if (crb(c,1)) { goto L_8006A888; } // 8006A6EC
  c->r[3]=0u+0x80310000u; // 8006A6F0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006A6F4
  c->r[3]=c->r[3]+0xFFFFDD40u; // 8006A6F8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8006A6FC
  c->ctr=c->r[3]; // 8006A700
  if (true) { switch (c->ctr) { case 0x8006A708u: goto L_8006A708; case 0x8006A724u: goto L_8006A724; case 0x8006A744u: goto L_8006A744; case 0x8006A77Cu: goto L_8006A77C; case 0x8006A7B8u: goto L_8006A7B8; case 0x8006A7F0u: goto L_8006A7F0; case 0x8006A838u: goto L_8006A838; case 0x8006A880u: goto L_8006A880; default: break; } dispatch(c,c->ctr); return; } // 8006A704
L_8006A708:;
  cmps(c,0,(int32_t)c->r[30],0); // 8006A708
  c->r[0]=0u+0x00000000u; // 8006A70C
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A710
  if (crb(c,2)) { goto L_8006A888; } // 8006A714
  c->r[0]=c->r[4]+0x00000001u; // 8006A718
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A71C
  goto L_8006A888; // 8006A720
L_8006A724:;
  c->f[0]=-c->f[0]; // 8006A724
  fcmp(c,0,c->f[1],c->f[0]); // 8006A728
  if (!crb(c,0)) { goto L_8006A888; } // 8006A72C
  c->r[0]=c->r[4]+0x00000001u; // 8006A730
  c->r[3]=0u+0x0000003Cu; // 8006A734
  W32(c->r[13]+0xFFFF97E0u,c->r[3]); // 8006A738
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A73C
  goto L_8006A888; // 8006A740
L_8006A744:;
  c->r[3]=R32(c->r[13]+0xFFFF97E0u); // 8006A744
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8006A748
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A74C
  if (crb(c,1)) { goto L_8006A760; } // 8006A750
  c->r[0]=0u+0x00000000u; // 8006A754
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A758
  goto L_8006A888; // 8006A75C
L_8006A760:;
  fcmp(c,0,c->f[1],c->f[0]); // 8006A760
  if (!crb(c,1)) { goto L_8006A888; } // 8006A764
  c->r[0]=c->r[4]+0x00000001u; // 8006A768
  c->r[3]=0u+0x0000003Cu; // 8006A76C
  W32(c->r[13]+0xFFFF97E0u,c->r[3]); // 8006A770
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A774
  goto L_8006A888; // 8006A778
L_8006A77C:;
  c->r[3]=R32(c->r[13]+0xFFFF97E0u); // 8006A77C
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8006A780
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A784
  if (crb(c,1)) { goto L_8006A798; } // 8006A788
  c->r[0]=0u+0x00000000u; // 8006A78C
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A790
  goto L_8006A888; // 8006A794
L_8006A798:;
  c->f[0]=-c->f[0]; // 8006A798
  fcmp(c,0,c->f[31],c->f[0]); // 8006A79C
  if (!crb(c,0)) { goto L_8006A888; } // 8006A7A0
  c->r[0]=c->r[4]+0x00000001u; // 8006A7A4
  c->r[3]=0u+0x0000003Cu; // 8006A7A8
  W32(c->r[13]+0xFFFF97E0u,c->r[3]); // 8006A7AC
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A7B0
  goto L_8006A888; // 8006A7B4
L_8006A7B8:;
  c->r[3]=R32(c->r[13]+0xFFFF97E0u); // 8006A7B8
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8006A7BC
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A7C0
  if (crb(c,1)) { goto L_8006A7D4; } // 8006A7C4
  c->r[0]=0u+0x00000000u; // 8006A7C8
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A7CC
  goto L_8006A888; // 8006A7D0
L_8006A7D4:;
  fcmp(c,0,c->f[31],c->f[0]); // 8006A7D4
  if (!crb(c,1)) { goto L_8006A888; } // 8006A7D8
  c->r[0]=c->r[4]+0x00000001u; // 8006A7DC
  c->r[3]=0u+0x0000003Cu; // 8006A7E0
  W32(c->r[13]+0xFFFF97E0u,c->r[3]); // 8006A7E4
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A7E8
  goto L_8006A888; // 8006A7EC
L_8006A7F0:;
  c->r[3]=R32(c->r[13]+0xFFFF97E0u); // 8006A7F0
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8006A7F4
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A7F8
  if (crb(c,1)) { goto L_8006A80C; } // 8006A7FC
  c->r[0]=0u+0x00000000u; // 8006A800
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A804
  goto L_8006A888; // 8006A808
L_8006A80C:;
  c->r[3]=0u+0x00000000u; // 8006A80C
  c->r[4]=0u+0x00000020u; // 8006A810
  c->lr=0x8006A818u; f_8006FF50(c); // 8006A814
  cmps(c,0,(int32_t)c->r[3],0); // 8006A818
  if (crb(c,2)) { goto L_8006A888; } // 8006A81C
  c->r[3]=R32(c->r[13]+0xFFFF97DCu); // 8006A820
  c->r[0]=0u+0x0000003Cu; // 8006A824
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A828
  c->r[0]=c->r[3]+0x00000001u; // 8006A82C
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A830
  goto L_8006A888; // 8006A834
L_8006A838:;
  c->r[3]=R32(c->r[13]+0xFFFF97E0u); // 8006A838
  c->r[0]=addc(c,c->r[3],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 8006A83C
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A840
  if (crb(c,1)) { goto L_8006A854; } // 8006A844
  c->r[0]=0u+0x00000000u; // 8006A848
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A84C
  goto L_8006A888; // 8006A850
L_8006A854:;
  c->r[3]=0u+0x00000000u; // 8006A854
  c->r[4]=0u+0x00000010u; // 8006A858
  c->lr=0x8006A860u; f_8006FF50(c); // 8006A85C
  cmps(c,0,(int32_t)c->r[3],0); // 8006A860
  if (crb(c,2)) { goto L_8006A888; } // 8006A864
  c->r[3]=R32(c->r[13]+0xFFFF97DCu); // 8006A868
  c->r[0]=0u+0x00000000u; // 8006A86C
  W32(c->r[13]+0xFFFF97E0u,c->r[0]); // 8006A870
  c->r[0]=c->r[3]+0x00000001u; // 8006A874
  W32(c->r[13]+0xFFFF97DCu,c->r[0]); // 8006A878
  goto L_8006A888; // 8006A87C
L_8006A880:;
  c->r[0]=0u+0x00000000u; // 8006A880
  W32(c->r[13]+0xFFFF81F0u,c->r[0]); // 8006A884
L_8006A888:;
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 8006A888
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 8006A88C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006A890
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006A894
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006A898
  c->r[3]=R32(c->r[13]+0xFFFF97DCu); // 8006A89C
  c->lr=c->r[0]; // 8006A8A0
  c->r[1]=c->r[1]+0x00000020u; // 8006A8A4
  return; // 8006A8A8
}

// set_PAL_50fps__9la_customFb
void f_8006A8AC(Ctx* __restrict c) {
  trace_call(0x8006A8ACu);
  W8(c->r[13]+0xFFFF97E4u,c->r[3]); // 8006A8AC
  return; // 8006A8B0
}

// is_PAL_50fps__9la_customFv
void f_8006A8B4(Ctx* __restrict c) {
  trace_call(0x8006A8B4u);
  c->r[3]=R8(c->r[13]+0xFFFF97E4u); // 8006A8B4
  return; // 8006A8B8
}

// fn_8006A8BC
void f_8006A8BC(Ctx* __restrict c) {
  trace_call(0x8006A8BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006A8BC
  c->r[0]=c->lr; // 8006A8C0
  c->r[4]=0u+0x80070000u; // 8006A8C4
  c->r[5]=0u+0x00000000u; // 8006A8C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006A8CC
  c->r[4]=c->r[4]+0xFFFFBD44u; // 8006A8D0
  c->r[6]=0u+0x00000018u; // 8006A8D4
  c->r[7]=0u+0x00000002u; // 8006A8D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006A8DC
  c->r[31]=0u+0x80360000u; // 8006A8E0
  c->r[31]=c->r[31]+0xFFFFB9E8u; // 8006A8E4
  c->r[3]=c->r[31]+0x00000020u; // 8006A8E8
  c->lr=0x8006A8F0u; f_800AD444(c); // 8006A8EC
  c->r[3]=c->r[31]+0x00000050u; // 8006A8F0
  c->lr=0x8006A8F8u; f_8006CD2C(c); // 8006A8F4
  c->r[3]=c->r[31]+0x0000053Cu; // 8006A8F8
  c->lr=0x8006A900u; f_8006D4A8(c); // 8006A8FC
  c->r[4]=0u+0x80070000u; // 8006A900
  c->r[3]=c->r[31]+0x00000BC8u; // 8006A904
  c->r[4]=c->r[4]+0xFFFFA94Cu; // 8006A908
  c->r[5]=0u+0x00000000u; // 8006A90C
  c->r[6]=0u+0x000000B0u; // 8006A910
  c->r[7]=0u+0x00000002u; // 8006A914
  c->lr=0x8006A91Cu; f_800AD444(c); // 8006A918
  c->r[4]=0u+0x80070000u; // 8006A91C
  c->r[3]=c->r[31]+0x00000D28u; // 8006A920
  c->r[4]=c->r[4]+0xFFFFA2B4u; // 8006A924
  c->r[5]=0u+0x00000000u; // 8006A928
  c->r[6]=0u+0x00000010u; // 8006A92C
  c->r[7]=0u+0x00000002u; // 8006A930
  c->lr=0x8006A938u; f_800AD444(c); // 8006A934
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006A938
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006A93C
  c->lr=c->r[0]; // 8006A940
  c->r[1]=c->r[1]+0x00000010u; // 8006A944
  return; // 8006A948
}

// __ct__Q34gbla4rank14RANK_CALC_DATAFv
void f_8006A94C(Ctx* __restrict c) {
  trace_call(0x8006A94Cu);
  c->r[4]=0u+0xFFFFFFFFu; // 8006A94C
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006A950
  c->r[0]=0u+0x00000000u; // 8006A954
  W32(c->r[3]+0x00000004u,c->r[0]); // 8006A958
  W32(c->r[3]+0x00000008u,c->r[0]); // 8006A95C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8006A960
  W32(c->r[3]+0x00000010u,c->r[0]); // 8006A964
  W32(c->r[3]+0x00000014u,c->r[0]); // 8006A968
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006A96C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8006A970
  W32(c->r[3]+0x00000020u,c->r[0]); // 8006A974
  W32(c->r[3]+0x00000024u,c->r[0]); // 8006A978
  W32(c->r[3]+0x00000028u,c->r[0]); // 8006A97C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8006A980
  W32(c->r[3]+0x00000030u,c->r[0]); // 8006A984
  W32(c->r[3]+0x00000034u,c->r[0]); // 8006A988
  W32(c->r[3]+0x00000038u,c->r[0]); // 8006A98C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8006A990
  W32(c->r[3]+0x00000040u,c->r[0]); // 8006A994
  W8(c->r[3]+0x00000044u,c->r[0]); // 8006A998
  W8(c->r[3]+0x00000045u,c->r[0]); // 8006A99C
  W8(c->r[3]+0x00000046u,c->r[0]); // 8006A9A0
  W8(c->r[3]+0x00000047u,c->r[0]); // 8006A9A4
  W8(c->r[3]+0x00000048u,c->r[0]); // 8006A9A8
  W8(c->r[3]+0x00000049u,c->r[0]); // 8006A9AC
  W8(c->r[3]+0x0000004Au,c->r[0]); // 8006A9B0
  W8(c->r[3]+0x0000004Bu,c->r[0]); // 8006A9B4
  W8(c->r[3]+0x0000004Cu,c->r[0]); // 8006A9B8
  W8(c->r[3]+0x0000004Du,c->r[0]); // 8006A9BC
  W8(c->r[3]+0x0000004Eu,c->r[0]); // 8006A9C0
  W8(c->r[3]+0x0000004Fu,c->r[0]); // 8006A9C4
  W8(c->r[3]+0x00000050u,c->r[0]); // 8006A9C8
  W8(c->r[3]+0x00000051u,c->r[0]); // 8006A9CC
  W8(c->r[3]+0x00000052u,c->r[0]); // 8006A9D0
  W8(c->r[3]+0x00000053u,c->r[0]); // 8006A9D4
  W32(c->r[3]+0x00000054u,c->r[4]); // 8006A9D8
  W32(c->r[3]+0x00000058u,c->r[4]); // 8006A9DC
  W32(c->r[3]+0x0000005Cu,c->r[4]); // 8006A9E0
  W32(c->r[3]+0x00000060u,c->r[4]); // 8006A9E4
  W32(c->r[3]+0x00000064u,c->r[4]); // 8006A9E8
  W32(c->r[3]+0x00000068u,c->r[4]); // 8006A9EC
  W32(c->r[3]+0x0000006Cu,c->r[4]); // 8006A9F0
  W32(c->r[3]+0x00000070u,c->r[4]); // 8006A9F4
  W32(c->r[3]+0x00000074u,c->r[4]); // 8006A9F8
  W32(c->r[3]+0x00000078u,c->r[4]); // 8006A9FC
  W32(c->r[3]+0x0000007Cu,c->r[4]); // 8006AA00
  W32(c->r[3]+0x00000080u,c->r[4]); // 8006AA04
  W32(c->r[3]+0x00000084u,c->r[4]); // 8006AA08
  W32(c->r[3]+0x00000088u,c->r[4]); // 8006AA0C
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 8006AA10
  W32(c->r[3]+0x00000090u,c->r[4]); // 8006AA14
  W8(c->r[3]+0x00000094u,c->r[0]); // 8006AA18
  W8(c->r[3]+0x00000095u,c->r[0]); // 8006AA1C
  W8(c->r[3]+0x00000096u,c->r[0]); // 8006AA20
  W32(c->r[3]+0x00000098u,c->r[0]); // 8006AA24
  W32(c->r[3]+0x0000009Cu,c->r[0]); // 8006AA28
  W32(c->r[3]+0x000000A0u,c->r[0]); // 8006AA2C
  W32(c->r[3]+0x000000A4u,c->r[0]); // 8006AA30
  W32(c->r[3]+0x000000A8u,c->r[0]); // 8006AA34
  W32(c->r[3]+0x000000ACu,c->r[0]); // 8006AA38
  return; // 8006AA3C
}

// __ct__Q24gbla6LaGameFv
void f_8006AA40(Ctx* __restrict c) {
  trace_call(0x8006AA40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AA40
  c->r[12]=0u+0x80070000u; // 8006AA44
  c->r[11]=0u+0x80070000u; // 8006AA48
  c->r[10]=0u+0x80070000u; // 8006AA4C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006AA50
  c->r[28]=0u+0xFFFFFFFFu; // 8006AA54
  c->r[0]=0u+0x00000000u; // 8006AA58
  c->r[27]=0u+0x80310000u; // 8006AA5C
  c->r[29]=0u+0x80070000u; // 8006AA60
  c->r[30]=0u+0x80070000u; // 8006AA64
  c->r[31]=0u+0x80070000u; // 8006AA68
  c->r[9]=0u+0x80070000u; // 8006AA6C
  c->r[8]=0u+0x80070000u; // 8006AA70
  c->r[7]=0u+0x80070000u; // 8006AA74
  c->r[6]=0u+0x80070000u; // 8006AA78
  c->r[5]=0u+0x80070000u; // 8006AA7C
  c->r[4]=0u+0x80070000u; // 8006AA80
  c->r[27]=c->r[27]+0xFFFFDD80u; // 8006AA84
  c->r[29]=c->r[29]+0xFFFFAB0Cu; // 8006AA88
  c->r[30]=c->r[30]+0xFFFFABD4u; // 8006AA8C
  c->r[31]=c->r[31]+0xFFFFAC10u; // 8006AA90
  c->r[12]=c->r[12]+0xFFFFAC14u; // 8006AA94
  c->r[11]=c->r[11]+0xFFFFACB8u; // 8006AA98
  c->r[10]=c->r[10]+0xFFFFACBCu; // 8006AA9C
  c->r[9]=c->r[9]+0xFFFFACC0u; // 8006AAA0
  c->r[8]=c->r[8]+0xFFFFACC8u; // 8006AAA4
  c->r[7]=c->r[7]+0xFFFFAD0Cu; // 8006AAA8
  c->r[6]=c->r[6]+0xFFFFAD40u; // 8006AAAC
  c->r[5]=c->r[5]+0xFFFFAD44u; // 8006AAB0
  c->r[4]=c->r[4]+0xFFFFAD4Cu; // 8006AAB4
  W32(c->r[3]+0x00000000u,c->r[27]); // 8006AAB8
  W32(c->r[3]+0x00000034u,c->r[28]); // 8006AABC
  W32(c->r[3]+0x00000038u,c->r[28]); // 8006AAC0
  W32(c->r[3]+0x0000003Cu,c->r[28]); // 8006AAC4
  W32(c->r[3]+0x00000004u,c->r[29]); // 8006AAC8
  W32(c->r[3]+0x00000008u,c->r[30]); // 8006AACC
  W32(c->r[3]+0x00000010u,c->r[31]); // 8006AAD0
  W32(c->r[3]+0x0000000Cu,c->r[12]); // 8006AAD4
  W32(c->r[3]+0x00000014u,c->r[11]); // 8006AAD8
  W32(c->r[3]+0x00000018u,c->r[10]); // 8006AADC
  W32(c->r[3]+0x00000020u,c->r[9]); // 8006AAE0
  W32(c->r[3]+0x0000001Cu,c->r[8]); // 8006AAE4
  W32(c->r[3]+0x00000024u,c->r[7]); // 8006AAE8
  W32(c->r[3]+0x00000028u,c->r[6]); // 8006AAEC
  W32(c->r[3]+0x00000030u,c->r[5]); // 8006AAF0
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 8006AAF4
  W32(c->r[3]+0x00000040u,c->r[0]); // 8006AAF8
  W32(c->r[3]+0x00000044u,c->r[0]); // 8006AAFC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006AB00
  c->r[1]=c->r[1]+0x00000020u; // 8006AB04
  return; // 8006AB08
}

// init__Q25Alice25Carrier<Q24gbla6LaGame,0>FPQ24gbla6LaGame
void f_8006AB0C(Ctx* __restrict c) {
  trace_call(0x8006AB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AB0C
  c->r[0]=c->lr; // 8006AB10
  W32(c->r[1]+0x00000034u,c->r[0]); // 8006AB14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8006AB18
  c->r[31]=c->r[1]|c->r[1]; // 8006AB1C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8006AB20
  W32(c->r[1]+0x00000024u,c->r[29]); // 8006AB24
  W32(c->r[1]+0x00000020u,c->r[28]); // 8006AB28
  c->r[28]=c->r[3]|c->r[3]; // 8006AB2C
  c->lr=0x8006AB34u; f_80226A34(c); // 8006AB30
  c->r[30]=0u+0x802B0000u; // 8006AB34
  W32(c->r[28]+0x00000040u,c->r[3]); // 8006AB38
  c->r[30]=c->r[30]+0x00003934u; // 8006AB3C
  c->r[3]=0u+0x00000010u; // 8006AB40
  c->r[4]=c->r[30]|c->r[30]; // 8006AB44
  c->r[5]=0u+0x000000E2u; // 8006AB48
  c->lr=0x8006AB50u; f_8020D35C(c); // 8006AB4C
  cmps(c,0,(int32_t)c->r[3],0); // 8006AB50
  c->r[29]=c->r[3]|c->r[3]; // 8006AB54
  if (crb(c,2)) { goto L_8006ABA0; } // 8006AB58
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8006AB5C
  c->lr=0x8006AB64u; f_80212D28(c); // 8006AB60
  c->r[3]=0u+0x80310000u; // 8006AB64
  c->r[0]=0u+0x00000000u; // 8006AB68
  c->r[3]=c->r[3]+0xFFFFDD60u; // 8006AB6C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8006AB70
  W8(c->r[29]+0x00000008u,c->r[0]); // 8006AB74
  W32(c->r[29]+0x0000000Cu,c->r[28]); // 8006AB78
  goto L_8006ABA0; // 8006AB7C
  c->r[3]=c->r[29]|c->r[29]; // 8006AB80
  c->r[4]=c->r[30]|c->r[30]; // 8006AB84
  c->r[5]=0u+0x000000E2u; // 8006AB88
  c->lr=0x8006AB90u; f_8020E944(c); // 8006AB8C
  c->r[3]=0u+0x00000000u; // 8006AB90
  c->r[4]=0u+0x00000000u; // 8006AB94
  c->r[5]=0u+0x00000000u; // 8006AB98
  c->lr=0x8006ABA0u; f_800AF804(c); // 8006AB9C
L_8006ABA0:;
  W32(c->r[28]+0x00000044u,c->r[29]); // 8006ABA0
  c->r[3]=c->r[29]|c->r[29]; // 8006ABA4
  c->lr=0x8006ABACu; f_80212D40(c); // 8006ABA8
  c->r[10]=c->r[31]|c->r[31]; // 8006ABAC
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8006ABB0
  c->r[30]=R32(c->r[10]+0x00000028u); // 8006ABB4
  c->r[29]=R32(c->r[10]+0x00000024u); // 8006ABB8
  c->r[28]=R32(c->r[10]+0x00000020u); // 8006ABBC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8006ABC0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8006ABC4
  c->r[1]=c->r[10]|c->r[10]; // 8006ABC8
  c->lr=c->r[0]; // 8006ABCC
  return; // 8006ABD0
}

// calc__Q25Alice25Carrier<Q24gbla6LaGame,0>FPQ24gbla6LaGame
void f_8006ABD4(Ctx* __restrict c) {
  trace_call(0x8006ABD4u);
  c->r[4]=R32(c->r[3]+0x00000044u); // 8006ABD4
  c->r[0]=R8(c->r[4]+0x00000008u); // 8006ABD8
  cmps(c,0,(int32_t)c->r[0],0); // 8006ABDC
  if (crb(c,2)) return; // 8006ABE0
  c->r[5]=R32(c->r[3]+0x0000003Cu); // 8006ABE4
  c->r[4]=0u+0x55550000u; // 8006ABE8
  c->r[0]=c->r[4]+0x00005556u; // 8006ABEC
  c->r[5]=c->r[5]+0x00000001u; // 8006ABF0
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[5])>>32); // 8006ABF4
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 8006ABF8
  c->r[0]=c->r[4]+c->r[0]; // 8006ABFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 8006AC00
  c->r[0]=c->r[5]-c->r[0]; // 8006AC04
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8006AC08
  return; // 8006AC0C
}

// draw__Q25Alice25Carrier<Q24gbla6LaGame,0>FPQ24gbla6LaGame
void f_8006AC10(Ctx* __restrict c) {
  trace_call(0x8006AC10u);
  return; // 8006AC10
}

// term__Q25Alice25Carrier<Q24gbla6LaGame,0>FPQ24gbla6LaGame
void f_8006AC14(Ctx* __restrict c) {
  trace_call(0x8006AC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AC14
  c->r[0]=c->lr; // 8006AC18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006AC1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006AC20
  c->r[31]=0u+0x00000000u; // 8006AC24
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006AC28
  c->r[30]=c->r[3]|c->r[3]; // 8006AC2C
  c->lr=0x8006AC34u; f_80071EC0(c); // 8006AC30
  cmps(c,0,(int32_t)c->r[3],0); // 8006AC34
  if (!crb(c,2)) { goto L_8006AC60; } // 8006AC38
  c->lr=0x8006AC40u; f_80071E78(c); // 8006AC3C
  cmps(c,0,(int32_t)c->r[3],0); // 8006AC40
  if (!crb(c,2)) { goto L_8006AC60; } // 8006AC44
  c->lr=0x8006AC4Cu; f_80071E80(c); // 8006AC48
  cmps(c,0,(int32_t)c->r[3],0); // 8006AC4C
  if (!crb(c,2)) { goto L_8006AC60; } // 8006AC50
  c->lr=0x8006AC58u; f_80071EB8(c); // 8006AC54
  cmps(c,0,(int32_t)c->r[3],0); // 8006AC58
  if (crb(c,2)) { goto L_8006AC64; } // 8006AC5C
L_8006AC60:;
  c->r[31]=0u+0x00000001u; // 8006AC60
L_8006AC64:;
  cmps(c,0,(int32_t)c->r[31],0); // 8006AC64
  if (crb(c,2)) { goto L_8006AC78; } // 8006AC68
  c->r[3]=R32(c->r[30]+0x00000044u); // 8006AC6C
  c->lr=0x8006AC74u; f_80212E9C(c); // 8006AC70
  goto L_8006ACA0; // 8006AC74
L_8006AC78:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 8006AC78
  cmps(c,0,(int32_t)c->r[3],0); // 8006AC7C
  if (crb(c,2)) { goto L_8006AC98; } // 8006AC80
  c->r[12]=R32(c->r[3]+0x00000000u); // 8006AC84
  c->r[4]=0u+0x00000001u; // 8006AC88
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8006AC8C
  c->ctr=c->r[12]; // 8006AC90
  if (true) { c->lr=0x8006AC98u; dispatch(c,c->ctr); } // 8006AC94
L_8006AC98:;
  c->r[0]=0u+0x00000000u; // 8006AC98
  W32(c->r[30]+0x00000044u,c->r[0]); // 8006AC9C
L_8006ACA0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006ACA0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006ACA4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006ACA8
  c->lr=c->r[0]; // 8006ACAC
  c->r[1]=c->r[1]+0x00000010u; // 8006ACB0
  return; // 8006ACB4
}

// init__Q25Alice25Carrier<Q24gbla6LaGame,1>FPQ24gbla6LaGame
void f_8006ACB8(Ctx* __restrict c) {
  trace_call(0x8006ACB8u);
  return; // 8006ACB8
}

// calc__Q25Alice25Carrier<Q24gbla6LaGame,1>FPQ24gbla6LaGame
void f_8006ACBC(Ctx* __restrict c) {
  trace_call(0x8006ACBCu);
  f_80077838(c); return; // 8006ACBC
}

// draw__Q25Alice25Carrier<Q24gbla6LaGame,1>FPQ24gbla6LaGame
void f_8006ACC0(Ctx* __restrict c) {
  trace_call(0x8006ACC0u);
  c->r[3]=R32(c->r[3]+0x00000040u); // 8006ACC0
  f_8022839C(c); return; // 8006ACC4
}

// term__Q25Alice25Carrier<Q24gbla6LaGame,1>FPQ24gbla6LaGame
void f_8006ACC8(Ctx* __restrict c) {
  trace_call(0x8006ACC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006ACC8
  c->r[0]=c->lr; // 8006ACCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006ACD0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006ACD4
  c->r[31]=c->r[3]|c->r[3]; // 8006ACD8
  c->r[0]=R32(c->r[3]+0x00000044u); // 8006ACDC
  cmps(c,0,(int32_t)c->r[0],0); // 8006ACE0
  if (!crb(c,2)) { goto L_8006ACF8; } // 8006ACE4
  c->lr=0x8006ACECu; f_8007784C(c); // 8006ACE8
  c->lr=0x8006ACF0u; f_80226ADC(c); // 8006ACEC
  c->r[0]=0u+0x00000000u; // 8006ACF0
  W32(c->r[31]+0x00000040u,c->r[0]); // 8006ACF4
L_8006ACF8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006ACF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006ACFC
  c->lr=c->r[0]; // 8006AD00
  c->r[1]=c->r[1]+0x00000010u; // 8006AD04
  return; // 8006AD08
}

// init__Q25Alice25Carrier<Q24gbla6LaGame,2>FPQ24gbla6LaGame
void f_8006AD0C(Ctx* __restrict c) {
  trace_call(0x8006AD0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AD0C
  c->r[0]=c->lr; // 8006AD10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006AD14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006AD18
  c->r[31]=c->r[3]|c->r[3]; // 8006AD1C
  c->lr=0x8006AD24u; f_80226A34(c); // 8006AD20
  W32(c->r[31]+0x00000040u,c->r[3]); // 8006AD24
  c->lr=0x8006AD2Cu; f_80077824(c); // 8006AD28
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006AD2C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006AD30
  c->lr=c->r[0]; // 8006AD34
  c->r[1]=c->r[1]+0x00000010u; // 8006AD38
  return; // 8006AD3C
}

// calc__Q25Alice25Carrier<Q24gbla6LaGame,2>FPQ24gbla6LaGame
void f_8006AD40(Ctx* __restrict c) {
  trace_call(0x8006AD40u);
  return; // 8006AD40
}

// draw__Q25Alice25Carrier<Q24gbla6LaGame,2>FPQ24gbla6LaGame
void f_8006AD44(Ctx* __restrict c) {
  trace_call(0x8006AD44u);
  c->r[3]=R32(c->r[3]+0x00000040u); // 8006AD44
  f_8022839C(c); return; // 8006AD48
}

// term__Q25Alice25Carrier<Q24gbla6LaGame,2>FPQ24gbla6LaGame
void f_8006AD4C(Ctx* __restrict c) {
  trace_call(0x8006AD4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AD4C
  c->r[0]=c->lr; // 8006AD50
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006AD54
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006AD58
  c->r[31]=c->r[3]|c->r[3]; // 8006AD5C
  c->lr=0x8006AD64u; f_8007784C(c); // 8006AD60
  c->lr=0x8006AD68u; f_80226ADC(c); // 8006AD64
  c->r[0]=0u+0x00000000u; // 8006AD68
  W32(c->r[31]+0x00000040u,c->r[0]); // 8006AD6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006AD70
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006AD74
  c->lr=c->r[0]; // 8006AD78
  c->r[1]=c->r[1]+0x00000010u; // 8006AD7C
  return; // 8006AD80
}

// __dt__Q24gbla6LaGameFv
void f_8006AD84(Ctx* __restrict c) {
  trace_call(0x8006AD84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AD84
  c->r[0]=c->lr; // 8006AD88
  cmps(c,0,(int32_t)c->r[3],0); // 8006AD8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006AD90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006AD94
  c->r[31]=c->r[4]|c->r[4]; // 8006AD98
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006AD9C
  c->r[30]=c->r[3]|c->r[3]; // 8006ADA0
  if (crb(c,2)) { goto L_8006ADDC; } // 8006ADA4
  c->r[0]=R32(c->r[3]+0x00000040u); // 8006ADA8
  c->r[4]=0u+0x80310000u; // 8006ADAC
  c->r[4]=c->r[4]+0xFFFFDD80u; // 8006ADB0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006ADB4
  cmps(c,0,(int32_t)c->r[0],0); // 8006ADB8
  if (crb(c,2)) { goto L_8006ADCC; } // 8006ADBC
  c->lr=0x8006ADC4u; f_80226ADC(c); // 8006ADC0
  c->r[0]=0u+0x00000000u; // 8006ADC4
  W32(c->r[30]+0x00000040u,c->r[0]); // 8006ADC8
L_8006ADCC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8006ADCC
  if (!crb(c,1)) { goto L_8006ADDC; } // 8006ADD0
  c->r[3]=c->r[30]|c->r[30]; // 8006ADD4
  c->lr=0x8006ADDCu; f_80210AFC(c); // 8006ADD8
L_8006ADDC:;
  c->r[3]=c->r[30]|c->r[30]; // 8006ADDC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006ADE0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006ADE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006ADE8
  c->lr=c->r[0]; // 8006ADEC
  c->r[1]=c->r[1]+0x00000010u; // 8006ADF0
  return; // 8006ADF4
}

// init__Q24gbla6LaGameFv
void f_8006ADF8(Ctx* __restrict c) {
  trace_call(0x8006ADF8u);
  c->r[3]=0u+0x00000000u; // 8006ADF8
  return; // 8006ADFC
}

// init__Q24gbla6LaGameFRCQ34gbla6LaGame15_send_data_init
void f_8006AE00(Ctx* __restrict c) {
  trace_call(0x8006AE00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AE00
  c->r[0]=c->lr; // 8006AE04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006AE08
  c->r[0]=0u+0x00000000u; // 8006AE0C
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8006AE10
  c->lr=0x8006AE18u; f_8006B3B4(c); // 8006AE14
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006AE18
  c->r[3]=0u+0x00000001u; // 8006AE1C
  c->lr=c->r[0]; // 8006AE20
  c->r[1]=c->r[1]+0x00000010u; // 8006AE24
  return; // 8006AE28
}

// update__Q24gbla6LaGameFv
void f_8006AE2C(Ctx* __restrict c) {
  trace_call(0x8006AE2Cu);
  c->r[3]=0u+0x00000000u; // 8006AE2C
  return; // 8006AE30
}

// update__Q24gbla6LaGameFRCQ34gbla6LaGame15_send_data_proc
void f_8006AE34(Ctx* __restrict c) {
  trace_call(0x8006AE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AE34
  c->r[0]=c->lr; // 8006AE38
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006AE3C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8006AE40
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006AE44
  c->r[31]=c->r[3]|c->r[3]; // 8006AE48
  cmps(c,0,(int32_t)c->r[0],0); // 8006AE4C
  c->r[26]=c->r[4]|c->r[4]; // 8006AE50
  if (crb(c,2)) { goto L_8006AE64; } // 8006AE54
  c->r[3]=0u+0x00000001u; // 8006AE58
  c->lr=0x8006AE60u; f_80069D70(c); // 8006AE5C
  goto L_8006AE6C; // 8006AE60
L_8006AE64:;
  c->r[3]=0u+0x00000000u; // 8006AE64
  c->lr=0x8006AE6Cu; f_80069D70(c); // 8006AE68
L_8006AE6C:;
  c->r[0]=R8(c->r[26]+0x00000001u); // 8006AE6C
  cmps(c,0,(int32_t)c->r[0],0); // 8006AE70
  if (crb(c,2)) { goto L_8006AF28; } // 8006AE74
  c->r[3]=0u+0x802B0000u; // 8006AE78
  c->r[27]=c->r[26]|c->r[26]; // 8006AE7C
  c->r[28]=0u+0x00000000u; // 8006AE80
  c->r[30]=c->r[3]+0x00003934u; // 8006AE84
L_8006AE88:;
  c->r[4]=R32(c->r[26]+0x00000004u); // 8006AE88
  c->r[3]=c->r[28]|c->r[28]; // 8006AE8C
  c->lr=0x8006AE94u; f_8006A31C(c); // 8006AE90
  c->r[4]=R32(c->r[26]+0x0000000Cu); // 8006AE94
  c->r[3]=c->r[28]|c->r[28]; // 8006AE98
  c->lr=0x8006AEA0u; f_8006A354(c); // 8006AE9C
  c->r[5]=R32(c->r[26]+0x00000004u); // 8006AEA0
  c->r[4]=c->r[28]|c->r[28]; // 8006AEA4
  c->r[6]=R32(c->r[26]+0x0000000Cu); // 8006AEA8
  c->r[3]=c->r[30]+0x0000000Cu; // 8006AEAC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006AEB0
  c->lr=0x8006AEB8u; f_80019994(c); // 8006AEB4
  cmpu(c,0,c->r[28],0x00000001u); // 8006AEB8
  if (crb(c,1)) { goto L_8006AF14; } // 8006AEBC
  c->r[0]=R8(c->r[27]+0x00000015u); // 8006AEC0
  c->r[29]=0u+0x00000000u; // 8006AEC4
  cmps(c,0,(int32_t)c->r[0],0); // 8006AEC8
  if (crb(c,2)) { goto L_8006AED4; } // 8006AECC
  c->r[29]=c->r[29]|0x00000008u; // 8006AED0
L_8006AED4:;
  c->r[0]=R8(c->r[27]+0x00000016u); // 8006AED4
  cmps(c,0,(int32_t)c->r[0],0); // 8006AED8
  if (crb(c,2)) { goto L_8006AEE4; } // 8006AEDC
  c->r[29]=c->r[29]|0x00000002u; // 8006AEE0
L_8006AEE4:;
  c->r[0]=R8(c->r[27]+0x00000017u); // 8006AEE4
  cmps(c,0,(int32_t)c->r[0],0); // 8006AEE8
  if (crb(c,2)) { goto L_8006AEF4; } // 8006AEEC
  c->r[29]=c->r[29]|0x00000004u; // 8006AEF0
L_8006AEF4:;
  c->r[3]=c->r[28]|c->r[28]; // 8006AEF4
  c->r[4]=c->r[29]|c->r[29]; // 8006AEF8
  c->lr=0x8006AF00u; f_80069DB4(c); // 8006AEFC
  c->r[4]=c->r[28]|c->r[28]; // 8006AF00
  c->r[5]=c->r[29]|c->r[29]; // 8006AF04
  c->r[3]=c->r[30]+0x00000025u; // 8006AF08
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006AF0C
  c->lr=0x8006AF14u; f_80019994(c); // 8006AF10
L_8006AF14:;
  c->r[28]=c->r[28]+0x00000001u; // 8006AF14
  c->r[27]=c->r[27]+0x00000008u; // 8006AF18
  cmpu(c,0,c->r[28],0x00000002u); // 8006AF1C
  c->r[26]=c->r[26]+0x00000004u; // 8006AF20
  if (crb(c,0)) { IRQCHK(c); goto L_8006AE88; } // 8006AF24
L_8006AF28:;
  c->r[30]=0u+0xFFFFFFFFu; // 8006AF28
  goto L_8006AF98; // 8006AF2C
L_8006AF30:;
  cmps(c,0,(int32_t)c->r[3],-1); // 8006AF30
  if (crb(c,2)) { goto L_8006AF64; } // 8006AF34
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8006AF38
  c->r[3]=c->r[31]|c->r[31]; // 8006AF3C
  c->r[4]=c->r[31]+c->r[0]; // 8006AF40
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8006AF44
  c->ctr=c->r[12]; // 8006AF48
  if (true) { c->lr=0x8006AF50u; dispatch(c,c->ctr); } // 8006AF4C
  c->r[3]=R32(c->r[31]+0x00000038u); // 8006AF50
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8006AF54
  W32(c->r[31]+0x00000034u,c->r[3]); // 8006AF58
  W32(c->r[31]+0x00000038u,c->r[0]); // 8006AF5C
  goto L_8006AF70; // 8006AF60
L_8006AF64:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8006AF64
  W32(c->r[31]+0x00000034u,c->r[30]); // 8006AF68
  W32(c->r[31]+0x00000038u,c->r[0]); // 8006AF6C
L_8006AF70:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 8006AF70
  cmps(c,0,(int32_t)c->r[3],-1); // 8006AF74
  if (crb(c,2)) { goto L_8006AF98; } // 8006AF78
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8006AF7C
  W32(c->r[31]+0x00000034u,c->r[3]); // 8006AF80
  c->r[4]=c->r[31]+c->r[0]; // 8006AF84
  c->r[3]=c->r[31]|c->r[31]; // 8006AF88
  c->r[12]=R32(c->r[4]+0x00000004u); // 8006AF8C
  c->ctr=c->r[12]; // 8006AF90
  if (true) { c->lr=0x8006AF98u; dispatch(c,c->ctr); } // 8006AF94
L_8006AF98:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 8006AF98
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8006AF9C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8006AFA0
  if (!crb(c,2)) { IRQCHK(c); goto L_8006AF30; } // 8006AFA4
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 8006AFA8
  c->r[3]=c->r[31]|c->r[31]; // 8006AFAC
  c->r[4]=c->r[31]+c->r[0]; // 8006AFB0
  c->r[12]=R32(c->r[4]+0x00000008u); // 8006AFB4
  c->ctr=c->r[12]; // 8006AFB8
  if (true) { c->lr=0x8006AFC0u; dispatch(c,c->ctr); } // 8006AFBC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006AFC0
  c->r[3]=0u+0x00000001u; // 8006AFC4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006AFC8
  c->lr=c->r[0]; // 8006AFCC
  c->r[1]=c->r[1]+0x00000020u; // 8006AFD0
  return; // 8006AFD4
}

// draw__Q24gbla6LaGameFv
void f_8006AFD8(Ctx* __restrict c) {
  trace_call(0x8006AFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006AFD8
  c->r[0]=c->lr; // 8006AFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006AFE0
  c->r[0]=R32(c->r[3]+0x00000038u); // 8006AFE4
  cmps(c,0,(int32_t)c->r[0],-1); // 8006AFE8
  if (crb(c,2)) { goto L_8006B004; } // 8006AFEC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8006AFF0
  c->r[4]=c->r[3]+c->r[0]; // 8006AFF4
  c->r[12]=R32(c->r[4]+0x00000010u); // 8006AFF8
  c->ctr=c->r[12]; // 8006AFFC
  if (true) { c->lr=0x8006B004u; dispatch(c,c->ctr); } // 8006B000
L_8006B004:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006B004
  c->r[3]=0u+0x00000001u; // 8006B008
  c->lr=c->r[0]; // 8006B00C
  c->r[1]=c->r[1]+0x00000010u; // 8006B010
  return; // 8006B014
}

// term__Q24gbla6LaGameFv
void f_8006B018(Ctx* __restrict c) {
  trace_call(0x8006B018u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B018
  c->r[0]=c->lr; // 8006B01C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006B020
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006B024
  c->r[31]=c->r[3]|c->r[3]; // 8006B028
  c->r[0]=R32(c->r[3]+0x00000038u); // 8006B02C
  cmps(c,0,(int32_t)c->r[0],-1); // 8006B030
  if (crb(c,2)) { goto L_8006B060; } // 8006B034
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8006B038
  c->r[4]=c->r[3]+c->r[0]; // 8006B03C
  c->r[12]=R32(c->r[4]+0x0000000Cu); // 8006B040
  c->ctr=c->r[12]; // 8006B044
  if (true) { c->lr=0x8006B04Cu; dispatch(c,c->ctr); } // 8006B048
  c->r[3]=R32(c->r[31]+0x00000038u); // 8006B04C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8006B050
  W32(c->r[31]+0x00000034u,c->r[3]); // 8006B054
  W32(c->r[31]+0x00000038u,c->r[0]); // 8006B058
  goto L_8006B070; // 8006B05C
L_8006B060:;
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8006B060
  c->r[4]=0u+0xFFFFFFFFu; // 8006B064
  W32(c->r[3]+0x00000034u,c->r[4]); // 8006B068
  W32(c->r[3]+0x00000038u,c->r[0]); // 8006B06C
L_8006B070:;
  c->r[0]=R32(c->r[31]+0x00000040u); // 8006B070
  c->r[3]=0u+0xFFFFFFFFu; // 8006B074
  W32(c->r[31]+0x00000034u,c->r[3]); // 8006B078
  cmps(c,0,(int32_t)c->r[0],0); // 8006B07C
  W32(c->r[31]+0x00000038u,c->r[3]); // 8006B080
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 8006B084
  if (crb(c,2)) { goto L_8006B09C; } // 8006B088
  c->lr=0x8006B090u; f_8007784C(c); // 8006B08C
  c->lr=0x8006B094u; f_80226ADC(c); // 8006B090
  c->r[0]=0u+0x00000000u; // 8006B094
  W32(c->r[31]+0x00000040u,c->r[0]); // 8006B098
L_8006B09C:;
  c->r[3]=c->r[1]+0x0000000Cu; // 8006B09C
  c->lr=0x8006B0A4u; f_8021AFF4(c); // 8006B0A0
  c->r[3]=c->r[1]+0x0000000Cu; // 8006B0A4
  c->lr=0x8006B0ACu; f_8021E15C(c); // 8006B0A8
  c->r[3]=c->r[1]+0x0000000Cu; // 8006B0AC
  c->lr=0x8006B0B4u; f_8021E398(c); // 8006B0B0
  c->r[0]=0u+0x00000000u; // 8006B0B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006B0B8
  c->r[3]=c->r[1]+0x00000008u; // 8006B0BC
  c->lr=0x8006B0C4u; f_8020D1C0(c); // 8006B0C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006B0C4
  c->r[3]=0u+0x00000001u; // 8006B0C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006B0CC
  c->lr=c->r[0]; // 8006B0D0
  c->r[1]=c->r[1]+0x00000020u; // 8006B0D4
  return; // 8006B0D8
}

// soundPause__Q24gbla6LaGameFb
void f_8006B0DC(Ctx* __restrict c) {
  trace_call(0x8006B0DCu);
  c->r[3]=R32(c->r[3]+0x00000040u); // 8006B0DC
  cmps(c,0,(int32_t)c->r[3],0); // 8006B0E0
  if (crb(c,2)) return; // 8006B0E4
  c->r[3]=R32(c->r[3]+0x000000B4u); // 8006B0E8
  cmps(c,0,(int32_t)c->r[3],0); // 8006B0EC
  if (crb(c,2)) return; // 8006B0F0
  f_80237E44(c); return; // 8006B0F4
  return; // 8006B0F8
}

// __dt__Q24gbla12LAInitThreadFv
void f_8006B0FC(Ctx* __restrict c) {
  trace_call(0x8006B0FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B0FC
  c->r[0]=c->lr; // 8006B100
  cmps(c,0,(int32_t)c->r[3],0); // 8006B104
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006B108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006B10C
  c->r[31]=c->r[4]|c->r[4]; // 8006B110
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006B114
  c->r[30]=c->r[3]|c->r[3]; // 8006B118
  if (crb(c,2)) { goto L_8006B14C; } // 8006B11C
  c->r[4]=0u+0x80310000u; // 8006B120
  c->r[4]=c->r[4]+0xFFFFDD60u; // 8006B124
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006B128
  c->lr=0x8006B130u; f_80212E14(c); // 8006B12C
  c->r[3]=c->r[30]|c->r[30]; // 8006B130
  c->r[4]=0u+0x00000000u; // 8006B134
  c->lr=0x8006B13Cu; f_80212F34(c); // 8006B138
  cmps(c,0,(int32_t)c->r[31],0); // 8006B13C
  if (!crb(c,1)) { goto L_8006B14C; } // 8006B140
  c->r[3]=c->r[30]|c->r[30]; // 8006B144
  c->lr=0x8006B14Cu; f_80210AFC(c); // 8006B148
L_8006B14C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006B14C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006B150
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006B154
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006B158
  c->lr=c->r[0]; // 8006B15C
  c->r[1]=c->r[1]+0x00000010u; // 8006B160
  return; // 8006B164
}

// getRecDataProc__Q24gbla6LaGameFPQ34gbla6LaGame18_receive_data_proc
void f_8006B168(Ctx* __restrict c) {
  trace_call(0x8006B168u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B168
  c->r[0]=c->lr; // 8006B16C
  cmps(c,0,(int32_t)c->r[4],0); // 8006B170
  W32(c->r[1]+0x00000044u,c->r[0]); // 8006B174
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8006B178
  c->r[31]=c->r[4]|c->r[4]; // 8006B17C
  W32(c->r[1]+0x00000038u,c->r[30]); // 8006B180
  W32(c->r[1]+0x00000034u,c->r[29]); // 8006B184
  W32(c->r[1]+0x00000030u,c->r[28]); // 8006B188
  if (crb(c,2)) { goto L_8006B390; } // 8006B18C
  c->r[30]=c->r[31]|c->r[31]; // 8006B190
  c->r[29]=0u+0x00000000u; // 8006B194
L_8006B198:;
  c->r[3]=c->r[29]|c->r[29]; // 8006B198
  c->lr=0x8006B1A0u; f_80069F94(c); // 8006B19C
  c->r[29]=c->r[29]+0x00000001u; // 8006B1A0
  W32(c->r[30]+0x00000000u,c->r[3]); // 8006B1A4
  cmpu(c,0,c->r[29],0x00000002u); // 8006B1A8
  c->r[30]=c->r[30]+0x00000004u; // 8006B1AC
  if (crb(c,0)) { IRQCHK(c); goto L_8006B198; } // 8006B1B0
  c->lr=0x8006B1B8u; f_8006A5FC(c); // 8006B1B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8006B1B8
  W8(c->r[31]+0x00000008u,c->r[3]); // 8006B1BC
  if (crb(c,2)) { goto L_8006B244; } // 8006B1C0
  c->lr=0x8006B1C8u; f_8006A4E0(c); // 8006B1C4
  c->r[0]=0u+0x00000023u; // 8006B1C8
  c->r[6]=c->r[31]+0x00000005u; // 8006B1CC
  c->r[5]=c->r[3]+0xFFFFFFFCu; // 8006B1D0
  c->ctr=c->r[0]; // 8006B1D4
L_8006B1D8:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006B1D8
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006B1DC
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006B1E0
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006B1E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006B1D8; } // 8006B1E8
  c->r[0]=0u+0x00000023u; // 8006B1EC
  c->r[6]=c->r[31]+0x0000011Du; // 8006B1F0
  c->r[5]=c->r[3]+0x00000114u; // 8006B1F4
  c->ctr=c->r[0]; // 8006B1F8
L_8006B1FC:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 8006B1FC
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 8006B200
  W32(c->r[6]+0x00000004u,c->r[4]); // 8006B204
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8006B208
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006B1FC; } // 8006B20C
  c->r[0]=0u+0x00000057u; // 8006B210
  c->r[5]=c->r[31]+0x00000235u; // 8006B214
  c->r[4]=c->r[3]+0x0000022Cu; // 8006B218
  c->ctr=c->r[0]; // 8006B21C
L_8006B220:;
  c->r[3]=R32(c->r[4]+0x00000004u); // 8006B220
  {uint32_t ea=c->r[4]+0x00000008u; c->r[0]=R32(ea); c->r[4]=ea;} // 8006B224
  W32(c->r[5]+0x00000004u,c->r[3]); // 8006B228
  {uint32_t ea=c->r[5]+0x00000008u; W32(ea,c->r[0]); c->r[5]=ea;} // 8006B22C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006B220; } // 8006B230
  c->r[0]=R32(c->r[4]+0x00000004u); // 8006B234
  c->r[3]=0u+0x00000000u; // 8006B238
  W32(c->r[5]+0x00000004u,c->r[0]); // 8006B23C
  c->lr=0x8006B244u; f_8006A5F4(c); // 8006B240
L_8006B244:;
  c->lr=0x8006B248u; f_8006A4F4(c); // 8006B244
  W8(c->r[31]+0x000004F5u,c->r[3]); // 8006B248
  c->lr=0x8006B250u; f_8006A314(c); // 8006B24C
  cmps(c,0,(int32_t)c->r[3],0); // 8006B250
  if (crb(c,2)) { goto L_8006B2CC; } // 8006B254
  c->r[3]=c->r[1]+0x00000018u; // 8006B258
  c->r[4]=0u+0x00000000u; // 8006B25C
  c->lr=0x8006B264u; f_8006A260(c); // 8006B260
  c->r[0]=R32(c->r[1]+0x00000018u); // 8006B264
  c->r[3]=c->r[1]+0x00000008u; // 8006B268
  W32(c->r[31]+0x000004F8u,c->r[0]); // 8006B26C
  c->r[4]=0u+0x00000001u; // 8006B270
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8006B274
  W32(c->r[31]+0x000004FCu,c->r[0]); // 8006B278
  c->r[0]=R32(c->r[1]+0x00000020u); // 8006B27C
  W32(c->r[31]+0x00000500u,c->r[0]); // 8006B280
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006B284
  W32(c->r[31]+0x00000504u,c->r[0]); // 8006B288
  c->lr=0x8006B290u; f_8006A260(c); // 8006B28C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8006B290
  c->r[0]=0u+0x00000001u; // 8006B294
  W32(c->r[31]+0x00000508u,c->r[3]); // 8006B298
  c->r[3]=0u+0x00000000u; // 8006B29C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8006B2A0
  W32(c->r[31]+0x0000050Cu,c->r[4]); // 8006B2A4
  c->r[4]=R32(c->r[1]+0x00000010u); // 8006B2A8
  W32(c->r[31]+0x00000510u,c->r[4]); // 8006B2AC
  c->r[4]=R32(c->r[1]+0x00000014u); // 8006B2B0
  W32(c->r[31]+0x00000514u,c->r[4]); // 8006B2B4
  W8(c->r[31]+0x000004F6u,c->r[0]); // 8006B2B8
  c->lr=0x8006B2C0u; f_8006A30C(c); // 8006B2BC
  c->lr=0x8006B2C4u; f_8006A38C(c); // 8006B2C0
  W32(c->r[31]+0x00000550u,c->r[3]); // 8006B2C4
  goto L_8006B2D4; // 8006B2C8
L_8006B2CC:;
  c->r[0]=0u+0x00000000u; // 8006B2CC
  W8(c->r[31]+0x000004F6u,c->r[0]); // 8006B2D0
L_8006B2D4:;
  c->lr=0x8006B2D8u; f_8006A13C(c); // 8006B2D4
  W8(c->r[31]+0x00000518u,c->r[3]); // 8006B2D8
  c->lr=0x8006B2E0u; f_8006A144(c); // 8006B2DC
  W8(c->r[31]+0x00000519u,c->r[3]); // 8006B2E0
  c->r[30]=c->r[31]|c->r[31]; // 8006B2E4
  c->r[28]=0u+0x00000000u; // 8006B2E8
L_8006B2EC:;
  c->r[3]=c->r[28]|c->r[28]; // 8006B2EC
  c->r[29]=c->r[31]+c->r[28]; // 8006B2F0
  c->lr=0x8006B2F8u; f_8006A3B0(c); // 8006B2F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8006B2F8
  W8(c->r[29]+0x0000051Au,c->r[3]); // 8006B2FC
  if (crb(c,2)) { goto L_8006B360; } // 8006B300
  c->r[3]=c->r[28]|c->r[28]; // 8006B304
  c->lr=0x8006B30Cu; f_8006A430(c); // 8006B308
  c->r[0]=R32(c->r[3]+0x00000000u); // 8006B30C
  c->r[4]=0u+0x00000000u; // 8006B310
  W32(c->r[30]+0x0000051Cu,c->r[0]); // 8006B314
  c->r[0]=R32(c->r[3]+0x00000004u); // 8006B318
  W32(c->r[30]+0x00000520u,c->r[0]); // 8006B31C
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8006B320
  c->r[5]=R32(c->r[3]+0x00000008u); // 8006B324
  W32(c->r[30]+0x00000524u,c->r[5]); // 8006B328
  W32(c->r[30]+0x00000528u,c->r[0]); // 8006B32C
  c->r[0]=R8(c->r[3]+0x00000010u); // 8006B330
  W8(c->r[30]+0x0000052Cu,c->r[0]); // 8006B334
  c->r[0]=R8(c->r[3]+0x00000011u); // 8006B338
  W8(c->r[30]+0x0000052Du,c->r[0]); // 8006B33C
  c->r[0]=R8(c->r[3]+0x00000012u); // 8006B340
  W8(c->r[30]+0x0000052Eu,c->r[0]); // 8006B344
  c->r[0]=R8(c->r[3]+0x00000013u); // 8006B348
  W8(c->r[30]+0x0000052Fu,c->r[0]); // 8006B34C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8006B350
  c->r[3]=c->r[28]|c->r[28]; // 8006B354
  W32(c->r[30]+0x00000530u,c->r[0]); // 8006B358
  c->lr=0x8006B360u; f_8006A39C(c); // 8006B35C
L_8006B360:;
  c->r[28]=c->r[28]+0x00000001u; // 8006B360
  c->r[30]=c->r[30]+0x00000018u; // 8006B364
  cmpu(c,0,c->r[28],0x00000002u); // 8006B368
  if (crb(c,0)) { IRQCHK(c); goto L_8006B2EC; } // 8006B36C
  c->r[28]=0u+0x00000000u; // 8006B370
L_8006B374:;
  c->r[3]=c->r[28]|c->r[28]; // 8006B374
  c->lr=0x8006B37Cu; f_8006A614(c); // 8006B378
  c->r[4]=c->r[31]+c->r[28]; // 8006B37C
  c->r[28]=c->r[28]+0x00000001u; // 8006B380
  cmpu(c,0,c->r[28],0x00000002u); // 8006B384
  W8(c->r[4]+0x0000054Cu,c->r[3]); // 8006B388
  if (crb(c,0)) { IRQCHK(c); goto L_8006B374; } // 8006B38C
L_8006B390:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 8006B390
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 8006B394
  c->r[30]=R32(c->r[1]+0x00000038u); // 8006B398
  c->r[29]=R32(c->r[1]+0x00000034u); // 8006B39C
  c->r[28]=R32(c->r[1]+0x00000030u); // 8006B3A0
  c->lr=c->r[0]; // 8006B3A4
  c->r[1]=c->r[1]+0x00000040u; // 8006B3A8
  return; // 8006B3AC
}

// getRecDataTerm__Q24gbla6LaGameFPQ34gbla6LaGame18_receive_data_term
void f_8006B3B0(Ctx* __restrict c) {
  trace_call(0x8006B3B0u);
  return; // 8006B3B0
}

// setSendDataInit__Q24gbla6LaGameFRCQ34gbla6LaGame15_send_data_init
void f_8006B3B4(Ctx* __restrict c) {
  trace_call(0x8006B3B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B3B4
  c->r[0]=c->lr; // 8006B3B8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8006B3BC
  c->r[11]=c->r[1]+0x00000030u; // 8006B3C0
  c->lr=0x8006B3C8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8006B3C4
  c->r[25]=c->r[4]|c->r[4]; // 8006B3C8
  c->r[3]=0u+0x00000000u; // 8006B3CC
  c->lr=0x8006B3D4u; f_8006A4EC(c); // 8006B3D0
  c->r[3]=R32(c->r[25]+0x00000000u); // 8006B3D4
  c->lr=0x8006B3DCu; f_80069FC8(c); // 8006B3D8
  c->r[3]=c->r[25]+0x00000005u; // 8006B3DC
  c->lr=0x8006B3E4u; f_8006A450(c); // 8006B3E0
  c->r[3]=R8(c->r[25]+0x00000004u); // 8006B3E4
  c->lr=0x8006B3ECu; f_8006A02C(c); // 8006B3E8
  {uint32_t ea=c->r[25]+0x00000514u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006B3EC
  c->lr=0x8006B3F4u; f_8006A0D4(c); // 8006B3F0
  {uint32_t ea=c->r[25]+0x00000518u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006B3F4
  c->lr=0x8006B3FCu; f_8006A0DC(c); // 8006B3F8
  {uint32_t ea=c->r[25]+0x0000051Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8006B3FC
  c->lr=0x8006B404u; f_8006A0E4(c); // 8006B400
  c->r[3]=0u+0x802B0000u; // 8006B404
  c->r[28]=c->r[25]|c->r[25]; // 8006B408
  c->r[29]=c->r[25]+0x00000528u; // 8006B40C
  c->r[27]=c->r[25]+0x0000053Au; // 8006B410
  c->r[31]=c->r[3]+0x00003934u; // 8006B414
  c->r[26]=0u+0x00000000u; // 8006B418
L_8006B41C:;
  c->r[4]=R32(c->r[25]+0x000004F4u); // 8006B41C
  c->r[3]=c->r[26]|c->r[26]; // 8006B420
  c->lr=0x8006B428u; f_8006A31C(c); // 8006B424
  c->r[4]=R32(c->r[25]+0x000004FCu); // 8006B428
  c->r[3]=c->r[26]|c->r[26]; // 8006B42C
  c->lr=0x8006B434u; f_8006A354(c); // 8006B430
  c->r[4]=R32(c->r[25]+0x00000520u); // 8006B434
  c->r[3]=c->r[26]|c->r[26]; // 8006B438
  c->lr=0x8006B440u; f_8006A04C(c); // 8006B43C
  c->r[3]=c->r[26]|c->r[26]; // 8006B440
  c->r[4]=c->r[29]|c->r[29]; // 8006B444
  c->lr=0x8006B44Cu; f_8006A084(c); // 8006B448
  c->r[5]=R32(c->r[25]+0x000004F4u); // 8006B44C
  c->r[4]=c->r[26]|c->r[26]; // 8006B450
  c->r[6]=R32(c->r[25]+0x000004FCu); // 8006B454
  c->r[3]=c->r[31]+0x0000000Cu; // 8006B458
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006B45C
  c->lr=0x8006B464u; f_80019994(c); // 8006B460
  cmpu(c,0,c->r[26],0x00000001u); // 8006B464
  if (crb(c,1)) { goto L_8006B4C0; } // 8006B468
  c->r[0]=R8(c->r[28]+0x00000505u); // 8006B46C
  c->r[30]=0u+0x00000000u; // 8006B470
  cmps(c,0,(int32_t)c->r[0],0); // 8006B474
  if (crb(c,2)) { goto L_8006B480; } // 8006B478
  c->r[30]=c->r[30]|0x00000008u; // 8006B47C
L_8006B480:;
  c->r[0]=R8(c->r[28]+0x00000506u); // 8006B480
  cmps(c,0,(int32_t)c->r[0],0); // 8006B484
  if (crb(c,2)) { goto L_8006B490; } // 8006B488
  c->r[30]=c->r[30]|0x00000002u; // 8006B48C
L_8006B490:;
  c->r[0]=R8(c->r[28]+0x00000507u); // 8006B490
  cmps(c,0,(int32_t)c->r[0],0); // 8006B494
  if (crb(c,2)) { goto L_8006B4A0; } // 8006B498
  c->r[30]=c->r[30]|0x00000004u; // 8006B49C
L_8006B4A0:;
  c->r[3]=c->r[26]|c->r[26]; // 8006B4A0
  c->r[4]=c->r[30]|c->r[30]; // 8006B4A4
  c->lr=0x8006B4ACu; f_80069DB4(c); // 8006B4A8
  c->r[4]=c->r[26]|c->r[26]; // 8006B4AC
  c->r[5]=c->r[30]|c->r[30]; // 8006B4B0
  c->r[3]=c->r[31]+0x00000025u; // 8006B4B4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006B4B8
  c->lr=0x8006B4C0u; f_80019994(c); // 8006B4BC
L_8006B4C0:;
  c->r[3]=c->r[26]|c->r[26]; // 8006B4C0
  c->r[4]=c->r[27]|c->r[27]; // 8006B4C4
  c->lr=0x8006B4CCu; f_8006A3CC(c); // 8006B4C8
  c->r[3]=c->r[26]|c->r[26]; // 8006B4CC
  c->r[4]=0u+0x00000000u; // 8006B4D0
  c->lr=0x8006B4D8u; f_8006A39C(c); // 8006B4D4
  c->r[26]=c->r[26]+0x00000001u; // 8006B4D8
  c->r[29]=c->r[29]+0x00000009u; // 8006B4DC
  cmpu(c,0,c->r[26],0x00000002u); // 8006B4E0
  c->r[28]=c->r[28]+0x00000008u; // 8006B4E4
  c->r[27]=c->r[27]+0x00000018u; // 8006B4E8
  c->r[25]=c->r[25]+0x00000004u; // 8006B4EC
  if (crb(c,0)) { IRQCHK(c); goto L_8006B41C; } // 8006B4F0
  c->r[11]=c->r[1]+0x00000030u; // 8006B4F4
  c->lr=0x8006B4FCu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8006B4F8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8006B4FC
  c->lr=c->r[0]; // 8006B500
  c->r[1]=c->r[1]+0x00000030u; // 8006B504
  return; // 8006B508
}

// stopSoundDriver__Q24gbla6LaGameFv
void f_8006B50C(Ctx* __restrict c) {
  trace_call(0x8006B50Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B50C
  c->r[0]=c->lr; // 8006B510
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006B514
  c->r[0]=0u+0x00000000u; // 8006B518
  c->r[3]=R32(c->r[3]+0x00000040u); // 8006B51C
  cmps(c,0,(int32_t)c->r[3],0); // 8006B520
  if (crb(c,2)) { goto L_8006B530; } // 8006B524
  c->lr=0x8006B52Cu; f_80228758(c); // 8006B528
  c->r[0]=c->r[3]|c->r[3]; // 8006B52C
L_8006B530:;
  c->r[3]=c->r[0]|c->r[0]; // 8006B530
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006B534
  c->lr=c->r[0]; // 8006B538
  c->r[1]=c->r[1]+0x00000010u; // 8006B53C
  return; // 8006B540
}

// __cl__Q24gbla12LAInitThreadFv
void f_8006B544(Ctx* __restrict c) {
  trace_call(0x8006B544u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B544
  c->r[0]=c->lr; // 8006B548
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006B54C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006B550
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006B554
  c->r[30]=c->r[3]|c->r[3]; // 8006B558
  c->lr=0x8006B560u; f_80226A34(c); // 8006B55C
  c->r[31]=c->r[3]|c->r[3]; // 8006B560
  goto L_8006B578; // 8006B564
L_8006B568:;
  c->r[3]=c->r[31]|c->r[31]; // 8006B568
  c->lr=0x8006B570u; f_802288B8(c); // 8006B56C
  c->r[3]=0u+0x00000001u; // 8006B570
  c->lr=0x8006B578u; f_8021311C(c); // 8006B574
L_8006B578:;
  c->r[3]=c->r[31]|c->r[31]; // 8006B578
  c->lr=0x8006B580u; f_802288A0(c); // 8006B57C
  cmps(c,0,(int32_t)c->r[3],0); // 8006B580
  if (crb(c,2)) { IRQCHK(c); goto L_8006B568; } // 8006B584
  c->lr=0x8006B58Cu; f_80077824(c); // 8006B588
  c->lr=0x8006B590u; f_80077838(c); // 8006B58C
  c->r[0]=0u+0x00000001u; // 8006B590
  W8(c->r[30]+0x00000008u,c->r[0]); // 8006B594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006B598
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006B59C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006B5A0
  c->lr=c->r[0]; // 8006B5A4
  c->r[1]=c->r[1]+0x00000010u; // 8006B5A8
  return; // 8006B5AC
}

// fn_8006B5B0
void f_8006B5B0(Ctx* __restrict c) {
  trace_call(0x8006B5B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B5B0
  c->r[0]=c->lr; // 8006B5B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006B5B8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006B5BC
  c->r[31]=c->r[4]|c->r[4]; // 8006B5C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006B5C4
  c->r[30]=c->r[3]|c->r[3]; // 8006B5C8
  c->lr=0x8006B5D0u; f_80082EA0(c); // 8006B5CC
  c->lr=0x8006B5D4u; f_80071F88(c); // 8006B5D0
  c->lr=0x8006B5D8u; f_80078984(c); // 8006B5D4
  c->lr=0x8006B5DCu; f_800725BC(c); // 8006B5D8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8006B5DC
  c->r[5]=c->r[4]|c->r[4]; // 8006B5E0
  c->r[4]=c->r[3]|c->r[3]; // 8006B5E4
  c->r[6]=0u+0x00000000u; // 8006B5E8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8006B5EC
  c->r[3]=c->r[30]|c->r[30]; // 8006B5F0
  c->r[7]=0u+0x00000001u; // 8006B5F4
  c->r[8]=0u+0x00000001u; // 8006B5F8
  c->r[9]=0u+0x00000000u; // 8006B5FC
  c->lr=0x8006B604u; f_8021B084(c); // 8006B600
  c->r[3]=c->r[30]|c->r[30]; // 8006B604
  c->lr=0x8006B60Cu; f_80070864(c); // 8006B608
  c->lr=0x8006B610u; f_800755A0(c); // 8006B60C
  c->r[3]=0u+0x00000002u; // 8006B610
  c->r[4]=0u+0x00000000u; // 8006B614
  c->lr=0x8006B61Cu; f_80070658(c); // 8006B618
  c->r[3]=0u+0x00000003u; // 8006B61C
  c->r[4]=0u+0x00000000u; // 8006B620
  c->lr=0x8006B628u; f_80070658(c); // 8006B624
  c->r[5]=0u+0x80310000u; // 8006B628
  c->r[3]=0u+0x00000000u; // 8006B62C
  c->r[5]=c->r[5]+0xFFFFDDA0u; // 8006B630
  c->r[4]=0u+0x00000000u; // 8006B634
  c->r[6]=0u+0x00000007u; // 8006B638
  c->r[7]=0u+0x00000001u; // 8006B63C
  c->lr=0x8006B644u; f_80214E98(c); // 8006B640
  c->r[3]=0u+0x802B0000u; // 8006B644
  c->r[3]=c->r[3]+0x000039B0u; // 8006B648
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006B64C
  c->lr=0x8006B654u; f_80019994(c); // 8006B650
  c->lr=0x8006B658u; f_802209B0(c); // 8006B654
  c->lr=0x8006B65Cu; f_8001B094(c); // 8006B658
  c->lr=0x8006B660u; f_8007459C(c); // 8006B65C
  c->lr=0x8006B664u; f_80071D54(c); // 8006B660
  c->lr=0x8006B668u; f_80029780(c); // 8006B664
  c->lr=0x8006B66Cu; f_8002ADD4(c); // 8006B668
  c->lr=0x8006B670u; f_80076A10(c); // 8006B66C
  c->r[3]=c->r[31]|c->r[31]; // 8006B670
  c->lr=0x8006B678u; f_8003471C(c); // 8006B674
  c->r[0]=0u+0x00000000u; // 8006B678
  W32(c->r[13]+0xFFFF9804u,c->r[0]); // 8006B67C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006B680
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006B684
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006B688
  c->lr=c->r[0]; // 8006B68C
  c->r[1]=c->r[1]+0x00000020u; // 8006B690
  return; // 8006B694
}

// fn_8006B698
void f_8006B698(Ctx* __restrict c) {
  trace_call(0x8006B698u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B698
  c->r[0]=c->lr; // 8006B69C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8006B6A0
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8006B6A4
  c->r[31]=c->r[3]|c->r[3]; // 8006B6A8
  c->lr=0x8006B6B0u; f_80071FA8(c); // 8006B6AC
  c->lr=0x8006B6B4u; f_80070920(c); // 8006B6B0
  c->lr=0x8006B6B8u; f_80075674(c); // 8006B6B4
  c->lr=0x8006B6BCu; f_800745A0(c); // 8006B6B8
  c->lr=0x8006B6C0u; f_80071D58(c); // 8006B6BC
  c->lr=0x8006B6C4u; f_80071D58(c); // 8006B6C0
  c->lr=0x8006B6C8u; f_80076BE0(c); // 8006B6C4
  c->lr=0x8006B6CCu; f_80034808(c); // 8006B6C8
  c->r[3]=c->r[1]+0x0000000Cu; // 8006B6CC
  c->lr=0x8006B6D4u; f_80220964(c); // 8006B6D0
  c->lr=0x8006B6D8u; f_8022171C(c); // 8006B6D4
  cmps(c,0,(int32_t)c->r[31],0); // 8006B6D8
  if (!crb(c,2)) { goto L_8006B818; } // 8006B6DC
  c->lr=0x8006B6E4u; f_8021B040(c); // 8006B6E0
  c->r[3]=c->r[1]+0x00000014u; // 8006B6E4
  c->r[4]=c->r[1]+0x00000010u; // 8006B6E8
  c->lr=0x8006B6F0u; f_8021E140(c); // 8006B6EC
  c->r[3]=c->r[13]+0xFFFF97F8u; // 8006B6F0
  c->r[4]=R8(c->r[13]+0xFFFF97F8u); // 8006B6F4
  c->r[5]=R8(c->r[3]+0x00000001u); // 8006B6F8
  c->r[6]=R8(c->r[3]+0x00000002u); // 8006B6FC
  c->r[7]=R8(c->r[3]+0x00000003u); // 8006B700
  c->r[3]=c->r[1]+0x00000014u; // 8006B704
  c->lr=0x8006B70Cu; f_8021ED6C(c); // 8006B708
  c->r[3]=c->r[1]+0x00000014u; // 8006B70C
  c->r[4]=0u+0xFFFFFFFFu; // 8006B710
  c->lr=0x8006B718u; f_8021ED84(c); // 8006B714
  c->r[3]=c->r[1]+0x00000010u; // 8006B718
  c->lr=0x8006B720u; f_8021CB24(c); // 8006B71C
  c->lr=0x8006B724u; f_80212C90(c); // 8006B720
  c->r[4]=0u+0x43300000u; // 8006B724
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8006B728
  c->r[3]=R32(c->r[13]+0xFFFF980Cu); // 8006B72C
  W32(c->r[1]+0x00000038u,c->r[4]); // 8006B730
  {uint32_t ea=c->r[2]+0xFFFFA668u; c->f[2]=RF64(ea);} // 8006B734
  c->r[0]=c->r[3]+0x00000001u; // 8006B738
  {uint32_t ea=c->r[1]+0x00000038u; c->f[1]=RF64(ea);} // 8006B73C
  {uint32_t ea=c->r[13]+0xFFFF97FCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8006B740
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[2]); // 8006B744
  {uint32_t ea=c->r[2]+0xFFFFA660u; c->f[2]=c->ps1[2]=RF32(ea);} // 8006B748
  W32(c->r[13]+0xFFFF980Cu,c->r[0]); // 8006B74C
  c->f[1]=c->ps1[1]=S(c->f[3]-c->f[0]); // 8006B750
  fcmp(c,0,c->f[2],c->f[1]); // 8006B754
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8006B758
  if (!crb(c,2)) { goto L_8006B794; } // 8006B75C
  {uint32_t ea=c->r[2]+0xFFFFA664u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006B760
  c->r[3]=c->r[0]^0x80000000u; // 8006B764
  c->r[0]=0u+0x00000000u; // 8006B768
  W32(c->r[1]+0x0000003Cu,c->r[3]); // 8006B76C
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[0]); // 8006B770
  {uint32_t ea=c->r[2]+0xFFFFA670u; c->f[1]=RF64(ea);} // 8006B774
  W32(c->r[1]+0x00000038u,c->r[4]); // 8006B778
  {uint32_t ea=c->r[1]+0x00000038u; c->f[0]=RF64(ea);} // 8006B77C
  {uint32_t ea=c->r[13]+0xFFFF97FCu; WF32(ea,c->f[3]);} // 8006B780
  W32(c->r[13]+0xFFFF980Cu,c->r[0]); // 8006B784
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8006B788
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[2]); // 8006B78C
  {uint32_t ea=c->r[13]+0xFFFF9800u; WF32(ea,c->f[0]);} // 8006B790
L_8006B794:;
  c->lr=0x8006B798u; f_8006E3E4(c); // 8006B794
  c->r[3]=c->r[1]+0x00000008u; // 8006B798
  c->r[4]=0u+0x00000001u; // 8006B79C
  c->lr=0x8006B7A4u; f_8006E3F0(c); // 8006B7A0
  c->r[4]=0u+0x802B0000u; // 8006B7A4
  {uint32_t ea=c->r[13]+0xFFFF9800u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006B7A8
  c->r[4]=c->r[4]+0x000039B0u; // 8006B7AC
  c->r[3]=c->r[1]+0x00000018u; // 8006B7B0
  c->r[4]=c->r[4]+0x00000014u; // 8006B7B4
  setcrb(c,6,!(crb(c,6)^crb(c,6))); // 8006B7B8
  c->lr=0x8006B7C0u; f_800B5FD4(c); // 8006B7BC
  c->r[3]=c->r[1]+0x00000008u; // 8006B7C0
  c->r[4]=0u+0x00000000u; // 8006B7C4
  c->r[5]=0u+0x000000FFu; // 8006B7C8
  c->r[6]=0u+0x00000000u; // 8006B7CC
  c->lr=0x8006B7D4u; f_8006E764(c); // 8006B7D0
  c->r[3]=c->r[1]+0x00000008u; // 8006B7D4
  c->r[4]=0u+0x00000001u; // 8006B7D8
  c->r[5]=0u+0x00000001u; // 8006B7DC
  c->r[6]=0u+0x00000000u; // 8006B7E0
  c->lr=0x8006B7E8u; f_8006E814(c); // 8006B7E4
  c->r[3]=c->r[1]+0x00000008u; // 8006B7E8
  c->r[4]=c->r[1]+0x00000018u; // 8006B7EC
  c->lr=0x8006B7F4u; f_8006E6C8(c); // 8006B7F0
  c->r[4]=0u+0x80070000u; // 8006B7F4
  c->r[4]=c->r[4]+0xFFFFE8C4u; // 8006B7F8
  c->lr=0x8006B800u; f_8006E758(c); // 8006B7FC
  c->lr=0x8006B804u; f_80077FF0(c); // 8006B800
  c->lr=0x8006B808u; f_800349A4(c); // 8006B804
  c->lr=0x8006B80Cu; f_8007494C(c); // 8006B808
  c->lr=0x8006B810u; f_8001B150(c); // 8006B80C
  c->r[3]=c->r[1]+0x00000010u; // 8006B810
  c->lr=0x8006B818u; f_8021CDAC(c); // 8006B814
L_8006B818:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8006B818
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8006B81C
  c->lr=c->r[0]; // 8006B820
  c->r[1]=c->r[1]+0x00000050u; // 8006B824
  return; // 8006B828
}

// configure__Q24Sega6WindowFPQ34Sega6Window13Configuration
void f_8006B82C(Ctx* __restrict c) {
  trace_call(0x8006B82Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B82C
  c->r[0]=c->lr; // 8006B830
  c->r[3]=0u+0x802B0000u; // 8006B834
  W32(c->r[1]+0x00000064u,c->r[0]); // 8006B838
  c->r[3]=c->r[3]+0x000039B0u; // 8006B83C
  c->r[3]=c->r[3]+0x0000001Eu; // 8006B840
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 8006B844
  c->r[31]=c->r[1]|c->r[1]; // 8006B848
  W32(c->r[1]+0x00000058u,c->r[30]); // 8006B84C
  W32(c->r[1]+0x00000054u,c->r[29]); // 8006B850
  W32(c->r[1]+0x00000050u,c->r[28]); // 8006B854
  c->r[28]=c->r[4]|c->r[4]; // 8006B858
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006B85C
  c->lr=0x8006B864u; f_80019994(c); // 8006B860
  c->r[0]=R32(c->r[13]+0xFFFF9818u); // 8006B864
  cmps(c,0,(int32_t)c->r[0],0); // 8006B868
  if (!crb(c,2)) { goto L_8006B894; } // 8006B86C
  c->r[4]=0u+0x80310000u; // 8006B870
  c->r[3]=0u+0x00000014u; // 8006B874
  c->r[4]=c->r[4]+0xFFFFDDCCu; // 8006B878
  c->r[5]=0u+0x00000035u; // 8006B87C
  c->lr=0x8006B884u; f_8020D35C(c); // 8006B880
  cmps(c,0,(int32_t)c->r[3],0); // 8006B884
  if (crb(c,2)) { goto L_8006B890; } // 8006B888
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 8006B88C
L_8006B890:;
  W32(c->r[13]+0xFFFF9818u,c->r[3]); // 8006B890
L_8006B894:;
  c->r[0]=0u+0x00000000u; // 8006B894
  W8(c->r[31]+0x00000010u,c->r[0]); // 8006B898
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 8006B89C
  c->lr=0x8006B8A4u; f_8001D36C(c); // 8006B8A0
  c->r[0]=R32(c->r[13]+0xFFFF9814u); // 8006B8A4
  cmps(c,0,(int32_t)c->r[0],0); // 8006B8A8
  if (!crb(c,2)) { goto L_8006B8D4; } // 8006B8AC
  c->r[4]=0u+0x80310000u; // 8006B8B0
  c->r[3]=0u+0x00000100u; // 8006B8B4
  c->r[4]=c->r[4]+0xFFFFDDBCu; // 8006B8B8
  c->r[5]=0u+0x00000035u; // 8006B8BC
  c->lr=0x8006B8C4u; f_8020D35C(c); // 8006B8C0
  cmps(c,0,(int32_t)c->r[3],0); // 8006B8C4
  if (crb(c,2)) { goto L_8006B8D0; } // 8006B8C8
  W32(c->r[31]+0x00000034u,c->r[1]); // 8006B8CC
L_8006B8D0:;
  W32(c->r[13]+0xFFFF9814u,c->r[3]); // 8006B8D0
L_8006B8D4:;
  c->r[29]=0u+0x00000000u; // 8006B8D4
  W8(c->r[31]+0x0000000Cu,c->r[29]); // 8006B8D8
  c->r[3]=R32(c->r[13]+0xFFFF9814u); // 8006B8DC
  c->lr=0x8006B8E4u; f_8001D3BC(c); // 8006B8E0
  c->r[30]=0u+0x802B0000u; // 8006B8E4
  c->r[3]=c->r[28]|c->r[28]; // 8006B8E8
  c->r[30]=c->r[30]+0x000039B0u; // 8006B8EC
  c->r[4]=c->r[30]+0x00000032u; // 8006B8F0
  c->lr=0x8006B8F8u; f_8022207C(c); // 8006B8F4
  W8(c->r[31]+0x00000008u,c->r[29]); // 8006B8F8
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 8006B8FC
  c->lr=0x8006B904u; f_8001D39C(c); // 8006B900
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 8006B904
  c->r[4]=c->r[3]|c->r[3]; // 8006B908
  W32(c->r[31]+0x00000018u,c->r[3]); // 8006B90C
  c->r[3]=c->r[28]|c->r[28]; // 8006B910
  c->lr=0x8006B918u; f_80222064(c); // 8006B914
  c->r[4]=R32(c->r[31]+0x0000001Cu); // 8006B918
  c->r[3]=c->r[28]|c->r[28]; // 8006B91C
  c->lr=0x8006B924u; f_80222070(c); // 8006B920
  c->r[3]=c->r[30]+0x00000052u; // 8006B924
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006B928
  c->lr=0x8006B930u; f_80019994(c); // 8006B92C
  c->r[10]=c->r[31]|c->r[31]; // 8006B930
  c->r[31]=R32(c->r[31]+0x0000005Cu); // 8006B934
  c->r[30]=R32(c->r[10]+0x00000058u); // 8006B938
  c->r[29]=R32(c->r[10]+0x00000054u); // 8006B93C
  c->r[28]=R32(c->r[10]+0x00000050u); // 8006B940
  c->r[10]=R32(c->r[1]+0x00000000u); // 8006B944
  c->r[0]=R32(c->r[10]+0x00000004u); // 8006B948
  c->r[1]=c->r[10]|c->r[10]; // 8006B94C
  c->lr=c->r[0]; // 8006B950
  return; // 8006B954
}

// update__Q24Sega6WindowFv
void f_8006B958(Ctx* __restrict c) {
  trace_call(0x8006B958u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006B958
  c->r[0]=c->lr; // 8006B95C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006B960
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006B964
  c->r[31]=c->r[3]|c->r[3]; // 8006B968
  c->r[3]=0u+0x00000001u; // 8006B96C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006B970
  c->lr=0x8006B978u; f_8021311C(c); // 8006B974
  c->r[0]=R8(c->r[13]+0xFFFF9810u); // 8006B978
  cmps(c,0,(int32_t)c->r[0],0); // 8006B97C
  if (!crb(c,2)) { goto L_8006B9A8; } // 8006B980
  c->r[3]=c->r[31]|c->r[31]; // 8006B984
  c->lr=0x8006B98Cu; f_80222010(c); // 8006B988
  c->r[30]=c->r[3]|c->r[3]; // 8006B98C
  c->r[3]=c->r[31]|c->r[31]; // 8006B990
  c->lr=0x8006B998u; f_80222008(c); // 8006B994
  c->r[4]=c->r[30]|c->r[30]; // 8006B998
  c->lr=0x8006B9A0u; f_8006B5B0(c); // 8006B99C
  c->r[0]=0u+0x00000001u; // 8006B9A0
  W8(c->r[13]+0xFFFF9810u,c->r[0]); // 8006B9A4
L_8006B9A8:;
  c->r[3]=0u+0x00000000u; // 8006B9A8
  c->lr=0x8006B9B0u; f_8006B698(c); // 8006B9AC
  c->lr=0x8006B9B4u; f_800724E4(c); // 8006B9B0
  cmps(c,0,(int32_t)c->r[3],0); // 8006B9B4
  if (crb(c,2)) { goto L_8006BA08; } // 8006B9B8
  c->lr=0x8006B9C0u; f_8006A8B4(c); // 8006B9BC
  cmps(c,0,(int32_t)c->r[3],0); // 8006B9C0
  if (!crb(c,2)) { goto L_8006BA08; } // 8006B9C4
  c->r[4]=R32(c->r[13]+0xFFFF9804u); // 8006B9C8
  c->r[3]=0u+0x66660000u; // 8006B9CC
  c->r[0]=c->r[3]+0x00006667u; // 8006B9D0
  c->r[4]=c->r[4]+0x00000001u; // 8006B9D4
  W32(c->r[13]+0xFFFF9804u,c->r[4]); // 8006B9D8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 8006B9DC
  c->r[0]=sraw(c,c->r[0],1); // 8006B9E0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8006B9E4
  c->r[0]=c->r[0]+c->r[3]; // 8006B9E8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 8006B9EC
  c->r[0]=c->r[4]-c->r[0]; cr0(c,c->r[0]); // 8006B9F0
  if (!crb(c,2)) { goto L_8006BA08; } // 8006B9F4
  c->r[3]=0u+0x00000001u; // 8006B9F8
  c->lr=0x8006BA00u; f_8006B698(c); // 8006B9FC
  c->r[0]=0u+0x00000000u; // 8006BA00
  W32(c->r[13]+0xFFFF9804u,c->r[0]); // 8006BA04
L_8006BA08:;
  c->lr=0x8006BA0Cu; f_80071E78(c); // 8006BA08
  cmps(c,0,(int32_t)c->r[3],0); // 8006BA0C
  if (!crb(c,2)) { goto L_8006BA38; } // 8006BA10
  c->lr=0x8006BA18u; f_80071E80(c); // 8006BA14
  cmps(c,0,(int32_t)c->r[3],0); // 8006BA18
  if (!crb(c,2)) { goto L_8006BA38; } // 8006BA1C
  c->lr=0x8006BA24u; f_80071EB8(c); // 8006BA20
  cmps(c,0,(int32_t)c->r[3],0); // 8006BA24
  if (!crb(c,2)) { goto L_8006BA38; } // 8006BA28
  c->lr=0x8006BA30u; f_80071EC0(c); // 8006BA2C
  cmps(c,0,(int32_t)c->r[3],0); // 8006BA30
  if (crb(c,2)) { goto L_8006BA40; } // 8006BA34
L_8006BA38:;
  c->r[0]=0u+0x00000001u; // 8006BA38
  W8(c->r[13]+0xFFFF9809u,c->r[0]); // 8006BA3C
L_8006BA40:;
  c->r[0]=R8(c->r[13]+0xFFFF9809u); // 8006BA40
  c->r[30]=0u+0x00000000u; // 8006BA44
  cmps(c,0,(int32_t)c->r[0],0); // 8006BA48
  if (!crb(c,2)) { goto L_8006BA6C; } // 8006BA4C
  c->r[0]=R8(c->r[13]+0xFFFF9808u); // 8006BA50
  cmps(c,0,(int32_t)c->r[0],0); // 8006BA54
  if (!crb(c,2)) { goto L_8006BA6C; } // 8006BA58
  c->r[3]=c->r[31]|c->r[31]; // 8006BA5C
  c->lr=0x8006BA64u; f_80222048(c); // 8006BA60
  cmps(c,0,(int32_t)c->r[3],0); // 8006BA64
  if (crb(c,2)) { goto L_8006BA70; } // 8006BA68
L_8006BA6C:;
  c->r[30]=0u+0x00000001u; // 8006BA6C
L_8006BA70:;
  cmps(c,0,(int32_t)c->r[30],0); // 8006BA70
  if (crb(c,2)) { goto L_8006BBE4; } // 8006BA74
  c->r[30]=0u+0x00000000u; // 8006BA78
  c->r[0]=0u+0x000000FFu; // 8006BA7C
  W8(c->r[1]+0x00000008u,c->r[30]); // 8006BA80
  W8(c->r[1]+0x00000009u,c->r[30]); // 8006BA84
  W8(c->r[1]+0x0000000Au,c->r[30]); // 8006BA88
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 8006BA8C
  c->r[0]=R32(c->r[1]+0x00000008u); // 8006BA90
  W32(c->r[13]+0xFFFF97F8u,c->r[0]); // 8006BA94
  c->lr=0x8006BA9Cu; f_80034CF4(c); // 8006BA98
  cmps(c,0,(int32_t)c->r[3],0); // 8006BA9C
  if (!crb(c,2)) { goto L_8006BB64; } // 8006BAA0
  c->r[0]=R8(c->r[13]+0xFFFF9808u); // 8006BAA4
  cmps(c,0,(int32_t)c->r[0],0); // 8006BAA8
  if (!crb(c,2)) { goto L_8006BAD4; } // 8006BAAC
  c->lr=0x8006BAB4u; f_80034B4C(c); // 8006BAB0
  c->r[0]=0u+0x00000001u; // 8006BAB4
  W8(c->r[13]+0xFFFF9808u,c->r[0]); // 8006BAB8
  c->r[3]=c->r[31]|c->r[31]; // 8006BABC
  c->lr=0x8006BAC4u; f_80222048(c); // 8006BAC0
  cmps(c,0,(int32_t)c->r[3],0); // 8006BAC4
  if (crb(c,2)) { goto L_8006BAEC; } // 8006BAC8
  W8(c->r[13]+0xFFFF9808u,c->r[30]); // 8006BACC
  goto L_8006BAEC; // 8006BAD0
L_8006BAD4:;
  c->lr=0x8006BAD8u; f_80034C24(c); // 8006BAD4
  cmps(c,0,(int32_t)c->r[3],0); // 8006BAD8
  if (crb(c,2)) { goto L_8006BAEC; } // 8006BADC
  W8(c->r[13]+0xFFFF9808u,c->r[30]); // 8006BAE0
  c->r[3]=c->r[31]|c->r[31]; // 8006BAE4
  c->lr=0x8006BAECu; f_80222054(c); // 8006BAE8
L_8006BAEC:;
  c->r[0]=R8(c->r[13]+0xFFFF9808u); // 8006BAEC
  cmps(c,0,(int32_t)c->r[0],0); // 8006BAF0
  if (!crb(c,2)) { goto L_8006BBE4; } // 8006BAF4
  c->r[3]=c->r[31]|c->r[31]; // 8006BAF8
  c->lr=0x8006BB00u; f_80222048(c); // 8006BAFC
  cmps(c,0,(int32_t)c->r[3],0); // 8006BB00
  if (crb(c,2)) { goto L_8006BBE4; } // 8006BB04
  c->lr=0x8006BB0Cu; f_80034A5C(c); // 8006BB08
  c->lr=0x8006BB10u; f_80076C10(c); // 8006BB0C
  c->lr=0x8006BB14u; f_80071D5C(c); // 8006BB10
  c->lr=0x8006BB18u; f_80074B20(c); // 8006BB14
  c->lr=0x8006BB1Cu; f_8001B190(c); // 8006BB18
  c->r[3]=R32(c->r[13]+0xFFFF9814u); // 8006BB1C
  cmps(c,0,(int32_t)c->r[3],0); // 8006BB20
  if (crb(c,2)) { goto L_8006BB38; } // 8006BB24
  if (crb(c,2)) { goto L_8006BB30; } // 8006BB28
  c->lr=0x8006BB30u; f_80210AFC(c); // 8006BB2C
L_8006BB30:;
  c->r[0]=0u+0x00000000u; // 8006BB30
  W32(c->r[13]+0xFFFF9814u,c->r[0]); // 8006BB34
L_8006BB38:;
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 8006BB38
  cmps(c,0,(int32_t)c->r[3],0); // 8006BB3C
  if (crb(c,2)) { goto L_8006BB54; } // 8006BB40
  if (crb(c,2)) { goto L_8006BB4C; } // 8006BB44
  c->lr=0x8006BB4Cu; f_80210AFC(c); // 8006BB48
L_8006BB4C:;
  c->r[0]=0u+0x00000000u; // 8006BB4C
  W32(c->r[13]+0xFFFF9818u,c->r[0]); // 8006BB50
L_8006BB54:;
  c->lr=0x8006BB58u; f_8022154C(c); // 8006BB54
  c->lr=0x8006BB5Cu; f_80075678(c); // 8006BB58
  c->lr=0x8006BB60u; f_80070D8C(c); // 8006BB5C
  c->lr=0x8006BB64u; f_8021C54C(c); // 8006BB60
L_8006BB64:;
  c->lr=0x8006BB68u; f_80071EC0(c); // 8006BB64
  cmps(c,0,(int32_t)c->r[3],0); // 8006BB68
  if (crb(c,2)) { goto L_8006BBA0; } // 8006BB6C
  c->lr=0x8006BB74u; f_80072020(c); // 8006BB70
  c->lr=0x8006BB78u; f_80071ED4(c); // 8006BB74
  c->r[31]=c->r[3]|c->r[3]; // 8006BB78
  c->lr=0x8006BB80u; f_80071EC8(c); // 8006BB7C
  c->r[4]=0u+0x802B0000u; // 8006BB80
  c->r[5]=c->r[31]|c->r[31]; // 8006BB84
  c->r[4]=c->r[4]+0x000039B0u; // 8006BB88
  c->r[6]=0u+0x00000000u; // 8006BB8C
  c->r[4]=c->r[4]+0x00000064u; // 8006BB90
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006BB94
  c->lr=0x8006BB9Cu; f_8007E570(c); // 8006BB98
  goto L_8006BBD8; // 8006BB9C
L_8006BBA0:;
  c->lr=0x8006BBA4u; f_80071E78(c); // 8006BBA0
  cmps(c,0,(int32_t)c->r[3],0); // 8006BBA4
  if (crb(c,2)) { goto L_8006BBB4; } // 8006BBA8
  c->lr=0x8006BBB0u; f_80071EE0(c); // 8006BBAC
  goto L_8006BBD8; // 8006BBB0
L_8006BBB4:;
  c->lr=0x8006BBB8u; f_80071E80(c); // 8006BBB4
  cmps(c,0,(int32_t)c->r[3],0); // 8006BBB8
  if (crb(c,2)) { goto L_8006BBC8; } // 8006BBBC
  c->lr=0x8006BBC4u; f_80071F14(c); // 8006BBC0
  goto L_8006BBD8; // 8006BBC4
L_8006BBC8:;
  c->lr=0x8006BBCCu; f_80071EB8(c); // 8006BBC8
  cmps(c,0,(int32_t)c->r[3],0); // 8006BBCC
  if (crb(c,2)) { goto L_8006BBD8; } // 8006BBD0
  c->lr=0x8006BBD8u; f_80071F50(c); // 8006BBD4
L_8006BBD8:;
  c->lr=0x8006BBDCu; f_80072004(c); // 8006BBD8
  c->r[0]=0u+0x00000000u; // 8006BBDC
  W8(c->r[13]+0xFFFF9808u,c->r[0]); // 8006BBE0
L_8006BBE4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006BBE4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006BBE8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006BBEC
  c->lr=c->r[0]; // 8006BBF0
  c->r[1]=c->r[1]+0x00000020u; // 8006BBF4
  return; // 8006BBF8
}

// SetBackColor__FQ25Alice5Color
void f_8006BBFC(Ctx* __restrict c) {
  trace_call(0x8006BBFCu);
  c->r[0]=R32(c->r[3]+0x00000000u); // 8006BBFC
  W32(c->r[13]+0xFFFF97F8u,c->r[0]); // 8006BC00
  return; // 8006BC04
}

// fn_8006BC08
void f_8006BC08(Ctx* __restrict c) {
  trace_call(0x8006BC08u);
  c->r[3]=c->r[13]+0xFFFF97F8u; // 8006BC08
  c->r[0]=0u+0x00000000u; // 8006BC0C
  W8(c->r[13]+0xFFFF97F8u,c->r[0]); // 8006BC10
  W8(c->r[3]+0x00000001u,c->r[0]); // 8006BC14
  W8(c->r[3]+0x00000002u,c->r[0]); // 8006BC18
  W8(c->r[3]+0x00000003u,c->r[0]); // 8006BC1C
  return; // 8006BC20
}

// __ct__Q34gbla5param10HeaderDataFv
void f_8006BC24(Ctx* __restrict c) {
  trace_call(0x8006BC24u);
  c->r[4]=0u+0xFFFFFFFFu; // 8006BC24
  c->r[5]=0u+0x00000000u; // 8006BC28
  c->r[0]=0u+0x00000005u; // 8006BC2C
  W8(c->r[3]+0x00000000u,c->r[0]); // 8006BC30
  W32(c->r[3]+0x00000001u,c->r[5]); // 8006BC34
  W8(c->r[3]+0x00000005u,c->r[4]); // 8006BC38
  W8(c->r[3]+0x00000006u,c->r[4]); // 8006BC3C
  return; // 8006BC40
}

// init__Q34gbla5param10HeaderDataFv
void f_8006BC44(Ctx* __restrict c) {
  trace_call(0x8006BC44u);
  c->r[0]=0u+0xFFFFFFFFu; // 8006BC44
  c->r[5]=0u+0x00000005u; // 8006BC48
  c->r[4]=0u+0x00000000u; // 8006BC4C
  W8(c->r[3]+0x00000000u,c->r[5]); // 8006BC50
  W32(c->r[3]+0x00000001u,c->r[4]); // 8006BC54
  W8(c->r[3]+0x00000005u,c->r[0]); // 8006BC58
  W8(c->r[3]+0x00000006u,c->r[0]); // 8006BC5C
  return; // 8006BC60
}

// toBinary__Q34gbla5param10HeaderDataCFRQ24Sega13OBinaryStream
void f_8006BC64(Ctx* __restrict c) {
  trace_call(0x8006BC64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006BC64
  c->r[0]=c->lr; // 8006BC68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006BC6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006BC70
  c->r[31]=c->r[4]|c->r[4]; // 8006BC74
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006BC78
  c->r[30]=c->r[3]|c->r[3]; // 8006BC7C
  c->r[3]=c->r[31]|c->r[31]; // 8006BC80
  c->lr=0x8006BC88u; f_80207484(c); // 8006BC84
  c->r[4]=R8(c->r[30]+0x00000000u); // 8006BC88
  c->r[3]=c->r[31]|c->r[31]; // 8006BC8C
  c->lr=0x8006BC94u; f_80206F58(c); // 8006BC90
  c->r[4]=R32(c->r[30]+0x00000001u); // 8006BC94
  c->lr=0x8006BC9Cu; f_8007266C(c); // 8006BC98
  c->r[0]=R8(c->r[30]+0x00000005u); // 8006BC9C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006BCA0
  c->lr=0x8006BCA8u; f_80206EC0(c); // 8006BCA4
  c->r[0]=R8(c->r[30]+0x00000006u); // 8006BCA8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006BCAC
  c->lr=0x8006BCB4u; f_80206EC0(c); // 8006BCB0
  c->r[3]=c->r[31]|c->r[31]; // 8006BCB4
  c->lr=0x8006BCBCu; f_80207484(c); // 8006BCB8
  c->r[3]=c->r[31]|c->r[31]; // 8006BCBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006BCC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006BCC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006BCC8
  c->lr=c->r[0]; // 8006BCCC
  c->r[1]=c->r[1]+0x00000010u; // 8006BCD0
  return; // 8006BCD4
}

// fromBinary__Q34gbla5param10HeaderDataFRQ24Sega16IRefBinaryStream
void f_8006BCD8(Ctx* __restrict c) {
  trace_call(0x8006BCD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006BCD8
  c->r[0]=c->lr; // 8006BCDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006BCE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006BCE4
  c->r[31]=c->r[4]|c->r[4]; // 8006BCE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006BCEC
  c->r[30]=c->r[3]|c->r[3]; // 8006BCF0
  c->r[3]=c->r[31]|c->r[31]; // 8006BCF4
  c->lr=0x8006BCFCu; f_8020A7A4(c); // 8006BCF8
  c->r[3]=c->r[31]|c->r[31]; // 8006BCFC
  c->r[4]=c->r[30]|c->r[30]; // 8006BD00
  c->lr=0x8006BD08u; f_8020A4E8(c); // 8006BD04
  c->r[4]=c->r[30]+0x00000001u; // 8006BD08
  c->lr=0x8006BD10u; f_80072674(c); // 8006BD0C
  c->r[4]=c->r[30]+0x00000005u; // 8006BD10
  c->lr=0x8006BD18u; f_8020A4AC(c); // 8006BD14
  c->r[4]=c->r[30]+0x00000006u; // 8006BD18
  c->lr=0x8006BD20u; f_8020A4AC(c); // 8006BD1C
  c->r[3]=c->r[31]|c->r[31]; // 8006BD20
  c->lr=0x8006BD28u; f_8020A7A4(c); // 8006BD24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006BD28
  c->r[3]=0u+0x00000001u; // 8006BD2C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006BD30
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006BD34
  c->lr=c->r[0]; // 8006BD38
  c->r[1]=c->r[1]+0x00000010u; // 8006BD3C
  return; // 8006BD40
}

// __ct__Q34gbla5param14RankingNetDataFv
void f_8006BD44(Ctx* __restrict c) {
  trace_call(0x8006BD44u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006BD44
  c->r[0]=c->lr; // 8006BD48
  c->r[4]=0u+0x00000000u; // 8006BD4C
  c->r[5]=0u+0x00000009u; // 8006BD50
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006BD54
  c->r[0]=0u+0xFFFFFFFFu; // 8006BD58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006BD5C
  c->r[31]=0u+0x00000000u; // 8006BD60
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006BD64
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006BD68
  c->r[29]=c->r[3]|c->r[3]; // 8006BD6C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006BD70
  W32(c->r[3]+0x00000004u,c->r[31]); // 8006BD74
  c->r[3]=c->r[3]+0x00000008u; // 8006BD78
  c->r[30]=R32(c->r[13]+0xFFFF8208u); // 8006BD7C
  c->lr=0x8006BD84u; f_80004714(c); // 8006BD80
  c->r[3]=c->r[30]|c->r[30]; // 8006BD84
  c->lr=0x8006BD8Cu; f_800ACEA0(c); // 8006BD88
  c->r[5]=c->r[3]|c->r[3]; // 8006BD8C
  c->r[4]=c->r[30]|c->r[30]; // 8006BD90
  c->r[3]=c->r[29]+0x00000008u; // 8006BD94
  c->lr=0x8006BD9Cu; f_800043C4(c); // 8006BD98
  W8(c->r[29]+0x00000011u,c->r[31]); // 8006BD9C
  c->r[3]=c->r[29]|c->r[29]; // 8006BDA0
  W8(c->r[29]+0x00000012u,c->r[31]); // 8006BDA4
  W8(c->r[29]+0x00000013u,c->r[31]); // 8006BDA8
  W32(c->r[29]+0x00000014u,c->r[31]); // 8006BDAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006BDB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006BDB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006BDB8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006BDBC
  c->lr=c->r[0]; // 8006BDC0
  c->r[1]=c->r[1]+0x00000020u; // 8006BDC4
  return; // 8006BDC8
}

// init__Q34gbla5param14RankingNetDataFv
void f_8006BDCC(Ctx* __restrict c) {
  trace_call(0x8006BDCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006BDCC
  c->r[0]=c->lr; // 8006BDD0
  c->r[4]=0u+0x00000000u; // 8006BDD4
  c->r[5]=0u+0x00000009u; // 8006BDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006BDDC
  c->r[0]=0u+0xFFFFFFFFu; // 8006BDE0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006BDE4
  c->r[31]=0u+0x00000000u; // 8006BDE8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006BDEC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006BDF0
  c->r[29]=c->r[3]|c->r[3]; // 8006BDF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006BDF8
  W32(c->r[3]+0x00000004u,c->r[31]); // 8006BDFC
  c->r[3]=c->r[3]+0x00000008u; // 8006BE00
  c->r[30]=R32(c->r[13]+0xFFFF8208u); // 8006BE04
  c->lr=0x8006BE0Cu; f_80004714(c); // 8006BE08
  c->r[3]=c->r[30]|c->r[30]; // 8006BE0C
  c->lr=0x8006BE14u; f_800ACEA0(c); // 8006BE10
  c->r[5]=c->r[3]|c->r[3]; // 8006BE14
  c->r[4]=c->r[30]|c->r[30]; // 8006BE18
  c->r[3]=c->r[29]+0x00000008u; // 8006BE1C
  c->lr=0x8006BE24u; f_800043C4(c); // 8006BE20
  W8(c->r[29]+0x00000011u,c->r[31]); // 8006BE24
  W8(c->r[29]+0x00000012u,c->r[31]); // 8006BE28
  W8(c->r[29]+0x00000013u,c->r[31]); // 8006BE2C
  W32(c->r[29]+0x00000014u,c->r[31]); // 8006BE30
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006BE34
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006BE38
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006BE3C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006BE40
  c->lr=c->r[0]; // 8006BE44
  c->r[1]=c->r[1]+0x00000020u; // 8006BE48
  return; // 8006BE4C
}

// outputDisp__Q34gbla5param14RankingNetDataCFv
void f_8006BE50(Ctx* __restrict c) {
  trace_call(0x8006BE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006BE50
  c->r[0]=c->lr; // 8006BE54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006BE58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006BE5C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006BE60
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006BE64
  c->r[29]=c->r[3]|c->r[3]; // 8006BE68
  c->lr=0x8006BE70u; f_8006E3E4(c); // 8006BE6C
  c->r[3]=c->r[1]+0x00000008u; // 8006BE70
  c->r[4]=0u+0x00000006u; // 8006BE74
  c->lr=0x8006BE7Cu; f_8006E3F0(c); // 8006BE78
  c->r[30]=0u+0x802B0000u; // 8006BE7C
  c->r[3]=c->r[1]+0x00000008u; // 8006BE80
  c->r[30]=c->r[30]+0x00003A20u; // 8006BE84
  c->r[4]=c->r[30]+0x00000009u; // 8006BE88
  c->lr=0x8006BE90u; f_8006E6C8(c); // 8006BE8C
  c->r[4]=R32(c->r[29]+0x00000000u); // 8006BE90
  c->lr=0x8006BE98u; f_8006E518(c); // 8006BE94
  c->r[31]=0u+0x80070000u; // 8006BE98
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006BE9C
  c->lr=0x8006BEA4u; f_8006E758(c); // 8006BEA0
  c->r[3]=c->r[1]+0x00000008u; // 8006BEA4
  c->r[4]=c->r[30]+0x0000000Fu; // 8006BEA8
  c->lr=0x8006BEB0u; f_8006E6C8(c); // 8006BEAC
  c->r[4]=R32(c->r[29]+0x00000004u); // 8006BEB0
  c->lr=0x8006BEB8u; f_8006E518(c); // 8006BEB4
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006BEB8
  c->lr=0x8006BEC0u; f_8006E758(c); // 8006BEBC
  c->r[3]=c->r[1]+0x00000008u; // 8006BEC0
  c->r[4]=c->r[30]+0x00000016u; // 8006BEC4
  c->lr=0x8006BECCu; f_8006E6C8(c); // 8006BEC8
  c->r[4]=c->r[29]+0x00000008u; // 8006BECC
  c->lr=0x8006BED4u; f_8006E6C8(c); // 8006BED0
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006BED4
  c->lr=0x8006BEDCu; f_8006E758(c); // 8006BED8
  c->r[3]=c->r[1]+0x00000008u; // 8006BEDC
  c->r[4]=c->r[30]+0x0000001Cu; // 8006BEE0
  c->lr=0x8006BEE8u; f_8006E6C8(c); // 8006BEE4
  c->r[4]=R8(c->r[29]+0x00000011u); // 8006BEE8
  c->lr=0x8006BEF0u; f_8006E5A8(c); // 8006BEEC
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006BEF0
  c->lr=0x8006BEF8u; f_8006E758(c); // 8006BEF4
  c->r[3]=c->r[1]+0x00000008u; // 8006BEF8
  c->r[4]=c->r[30]+0x00000028u; // 8006BEFC
  c->lr=0x8006BF04u; f_8006E6C8(c); // 8006BF00
  c->r[4]=R8(c->r[29]+0x00000012u); // 8006BF04
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8006BF08
  c->lr=0x8006BF10u; f_8006E518(c); // 8006BF0C
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006BF10
  c->lr=0x8006BF18u; f_8006E758(c); // 8006BF14
  c->r[3]=c->r[1]+0x00000008u; // 8006BF18
  c->r[4]=c->r[30]+0x0000002Fu; // 8006BF1C
  c->lr=0x8006BF24u; f_8006E6C8(c); // 8006BF20
  c->r[4]=R8(c->r[29]+0x00000013u); // 8006BF24
  c->lr=0x8006BF2Cu; f_8006E5A8(c); // 8006BF28
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006BF2C
  c->lr=0x8006BF34u; f_8006E758(c); // 8006BF30
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006BF34
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006BF38
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006BF3C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006BF40
  c->lr=c->r[0]; // 8006BF44
  c->r[1]=c->r[1]+0x00000020u; // 8006BF48
  return; // 8006BF4C
}

// __lt__Q34gbla5param14RankingNetDataCFRCQ34gbla5param14RankingNetData
void f_8006BF50(Ctx* __restrict c) {
  trace_call(0x8006BF50u);
  c->r[5]=R32(c->r[4]+0x00000004u); // 8006BF50
  c->r[0]=R32(c->r[3]+0x00000004u); // 8006BF54
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8006BF58
  if (!crb(c,2)) { goto L_8006BF7C; } // 8006BF5C
  c->r[0]=R32(c->r[3]+0x00000014u); // 8006BF60
  c->r[3]=R32(c->r[4]+0x00000014u); // 8006BF64
  c->r[0]=c->r[3]^c->r[0]; // 8006BF68
  c->r[0]=cntlz(c->r[0]); // 8006BF6C
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[3]<<((c->r[0])&31)); // 8006BF70
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8006BF74
  return; // 8006BF78
L_8006BF7C:;
  c->r[0]=c->r[5]^c->r[0]; // 8006BF7C
  c->r[3]=sraw(c,c->r[0],1); // 8006BF80
  c->r[0]=c->r[0]&c->r[5]; // 8006BF84
  c->r[0]=c->r[3]-c->r[0]; // 8006BF88
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8006BF8C
  return; // 8006BF90
}

// getRank__Q34gbla5param14RankingNetDataCFv
void f_8006BF94(Ctx* __restrict c) {
  trace_call(0x8006BF94u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 8006BF94
  return; // 8006BF98
}

// setRank__Q34gbla5param14RankingNetDataFl
void f_8006BF9C(Ctx* __restrict c) {
  trace_call(0x8006BF9Cu);
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006BF9C
  return; // 8006BFA0
}

// getScore__Q34gbla5param14RankingNetDataCFv
void f_8006BFA4(Ctx* __restrict c) {
  trace_call(0x8006BFA4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 8006BFA4
  return; // 8006BFA8
}

// setScore__Q34gbla5param14RankingNetDataFl
void f_8006BFAC(Ctx* __restrict c) {
  trace_call(0x8006BFACu);
  W32(c->r[3]+0x00000004u,c->r[4]); // 8006BFAC
  return; // 8006BFB0
}

// getName__Q34gbla5param14RankingNetDataCFv
void f_8006BFB4(Ctx* __restrict c) {
  trace_call(0x8006BFB4u);
  c->r[3]=c->r[3]+0x00000008u; // 8006BFB4
  return; // 8006BFB8
}

// setName__Q34gbla5param14RankingNetDataFPCc
void f_8006BFBC(Ctx* __restrict c) {
  trace_call(0x8006BFBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006BFBC
  c->r[0]=c->lr; // 8006BFC0
  c->r[5]=0u+0x00000009u; // 8006BFC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006BFC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006BFCC
  c->r[31]=c->r[4]|c->r[4]; // 8006BFD0
  c->r[4]=0u+0x00000000u; // 8006BFD4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006BFD8
  c->r[30]=c->r[3]|c->r[3]; // 8006BFDC
  c->r[3]=c->r[3]+0x00000008u; // 8006BFE0
  c->lr=0x8006BFE8u; f_80004714(c); // 8006BFE4
  c->r[3]=c->r[31]|c->r[31]; // 8006BFE8
  c->lr=0x8006BFF0u; f_800ACEA0(c); // 8006BFEC
  c->r[5]=c->r[3]|c->r[3]; // 8006BFF0
  c->r[4]=c->r[31]|c->r[31]; // 8006BFF4
  c->r[3]=c->r[30]+0x00000008u; // 8006BFF8
  c->lr=0x8006C000u; f_800043C4(c); // 8006BFFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006C000
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006C004
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006C008
  c->lr=c->r[0]; // 8006C00C
  c->r[1]=c->r[1]+0x00000010u; // 8006C010
  return; // 8006C014
}

// getDifficulty__Q34gbla5param14RankingNetDataCFv
void f_8006C018(Ctx* __restrict c) {
  trace_call(0x8006C018u);
  c->r[3]=R8(c->r[3]+0x00000011u); // 8006C018
  return; // 8006C01C
}

// setDifficulty__Q34gbla5param14RankingNetDataFUc
void f_8006C020(Ctx* __restrict c) {
  trace_call(0x8006C020u);
  W8(c->r[3]+0x00000011u,c->r[4]); // 8006C020
  return; // 8006C024
}

// getGrade__Q34gbla5param14RankingNetDataCFv
void f_8006C028(Ctx* __restrict c) {
  trace_call(0x8006C028u);
  c->r[0]=R8(c->r[3]+0x00000012u); // 8006C028
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006C02C
  return; // 8006C030
}

// setGrade__Q34gbla5param14RankingNetDataFc
void f_8006C034(Ctx* __restrict c) {
  trace_call(0x8006C034u);
  W8(c->r[3]+0x00000012u,c->r[4]); // 8006C034
  return; // 8006C038
}

// getRegion__Q34gbla5param14RankingNetDataCFv
void f_8006C03C(Ctx* __restrict c) {
  trace_call(0x8006C03Cu);
  c->r[3]=R8(c->r[3]+0x00000013u); // 8006C03C
  return; // 8006C040
}

// setRegion__Q34gbla5param14RankingNetDataFUc
void f_8006C044(Ctx* __restrict c) {
  trace_call(0x8006C044u);
  W8(c->r[3]+0x00000013u,c->r[4]); // 8006C044
  return; // 8006C048
}

// getTime__Q34gbla5param14RankingNetDataCFv
void f_8006C04C(Ctx* __restrict c) {
  trace_call(0x8006C04Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8006C04C
  return; // 8006C050
}

// setTime__Q34gbla5param14RankingNetDataFUl
void f_8006C054(Ctx* __restrict c) {
  trace_call(0x8006C054u);
  W32(c->r[3]+0x00000014u,c->r[4]); // 8006C054
  return; // 8006C058
}

// toBinary__Q34gbla5param14RankingNetDataCFRQ24Sega13OBinaryStream
void f_8006C05C(Ctx* __restrict c) {
  trace_call(0x8006C05Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C05C
  c->r[0]=c->lr; // 8006C060
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006C064
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006C068
  c->r[31]=c->r[4]|c->r[4]; // 8006C06C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006C070
  c->r[30]=c->r[3]|c->r[3]; // 8006C074
  c->r[3]=c->r[31]|c->r[31]; // 8006C078
  c->lr=0x8006C080u; f_80207484(c); // 8006C07C
  c->r[3]=c->r[31]|c->r[31]; // 8006C080
  c->r[4]=c->r[30]|c->r[30]; // 8006C084
  c->r[5]=0u+0x00000004u; // 8006C088
  c->lr=0x8006C090u; f_80207224(c); // 8006C08C
  c->r[3]=c->r[31]|c->r[31]; // 8006C090
  c->r[4]=c->r[30]+0x00000004u; // 8006C094
  c->r[5]=0u+0x00000004u; // 8006C098
  c->lr=0x8006C0A0u; f_80207224(c); // 8006C09C
  c->r[3]=c->r[31]|c->r[31]; // 8006C0A0
  c->r[4]=c->r[30]+0x00000008u; // 8006C0A4
  c->r[5]=0u+0x00000009u; // 8006C0A8
  c->lr=0x8006C0B0u; f_80207224(c); // 8006C0AC
  c->r[3]=c->r[31]|c->r[31]; // 8006C0B0
  c->r[4]=c->r[30]+0x00000011u; // 8006C0B4
  c->r[5]=0u+0x00000001u; // 8006C0B8
  c->lr=0x8006C0C0u; f_80207224(c); // 8006C0BC
  c->r[3]=c->r[31]|c->r[31]; // 8006C0C0
  c->r[4]=c->r[30]+0x00000012u; // 8006C0C4
  c->r[5]=0u+0x00000001u; // 8006C0C8
  c->lr=0x8006C0D0u; f_80207224(c); // 8006C0CC
  c->r[3]=c->r[31]|c->r[31]; // 8006C0D0
  c->r[4]=c->r[30]+0x00000013u; // 8006C0D4
  c->r[5]=0u+0x00000001u; // 8006C0D8
  c->lr=0x8006C0E0u; f_80207224(c); // 8006C0DC
  c->r[3]=c->r[31]|c->r[31]; // 8006C0E0
  c->r[4]=c->r[30]+0x00000014u; // 8006C0E4
  c->r[5]=0u+0x00000004u; // 8006C0E8
  c->lr=0x8006C0F0u; f_80207224(c); // 8006C0EC
  c->r[3]=c->r[31]|c->r[31]; // 8006C0F0
  c->lr=0x8006C0F8u; f_80207484(c); // 8006C0F4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006C0F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006C0FC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006C100
  c->lr=c->r[0]; // 8006C104
  c->r[1]=c->r[1]+0x00000010u; // 8006C108
  return; // 8006C10C
}

// fromBinary__Q34gbla5param14RankingNetDataFRQ24Sega16IRefBinaryStream
void f_8006C110(Ctx* __restrict c) {
  trace_call(0x8006C110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C110
  c->r[0]=c->lr; // 8006C114
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006C118
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006C11C
  c->r[31]=c->r[4]|c->r[4]; // 8006C120
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006C124
  c->r[30]=c->r[3]|c->r[3]; // 8006C128
  c->r[3]=c->r[31]|c->r[31]; // 8006C12C
  c->lr=0x8006C134u; f_8020A7A4(c); // 8006C130
  c->r[3]=c->r[31]|c->r[31]; // 8006C134
  c->r[4]=c->r[30]|c->r[30]; // 8006C138
  c->r[5]=0u+0x00000004u; // 8006C13C
  c->lr=0x8006C144u; f_8020A69C(c); // 8006C140
  c->r[3]=c->r[31]|c->r[31]; // 8006C144
  c->r[4]=c->r[30]+0x00000004u; // 8006C148
  c->r[5]=0u+0x00000004u; // 8006C14C
  c->lr=0x8006C154u; f_8020A69C(c); // 8006C150
  c->r[3]=c->r[31]|c->r[31]; // 8006C154
  c->r[4]=c->r[30]+0x00000008u; // 8006C158
  c->r[5]=0u+0x00000009u; // 8006C15C
  c->lr=0x8006C164u; f_8020A69C(c); // 8006C160
  c->r[3]=c->r[31]|c->r[31]; // 8006C164
  c->r[4]=c->r[30]+0x00000011u; // 8006C168
  c->r[5]=0u+0x00000001u; // 8006C16C
  c->lr=0x8006C174u; f_8020A69C(c); // 8006C170
  c->r[3]=c->r[31]|c->r[31]; // 8006C174
  c->r[4]=c->r[30]+0x00000012u; // 8006C178
  c->r[5]=0u+0x00000001u; // 8006C17C
  c->lr=0x8006C184u; f_8020A69C(c); // 8006C180
  c->r[3]=c->r[31]|c->r[31]; // 8006C184
  c->r[4]=c->r[30]+0x00000013u; // 8006C188
  c->r[5]=0u+0x00000001u; // 8006C18C
  c->lr=0x8006C194u; f_8020A69C(c); // 8006C190
  c->r[3]=c->r[31]|c->r[31]; // 8006C194
  c->r[4]=c->r[30]+0x00000014u; // 8006C198
  c->r[5]=0u+0x00000004u; // 8006C19C
  c->lr=0x8006C1A4u; f_8020A69C(c); // 8006C1A0
  c->r[3]=c->r[31]|c->r[31]; // 8006C1A4
  c->lr=0x8006C1ACu; f_8020A7A4(c); // 8006C1A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006C1AC
  c->r[3]=0u+0x00000001u; // 8006C1B0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006C1B4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006C1B8
  c->lr=c->r[0]; // 8006C1BC
  c->r[1]=c->r[1]+0x00000010u; // 8006C1C0
  return; // 8006C1C4
}

// init__Q34gbla5param18NetRankTopSaveDataFv
void f_8006C1C8(Ctx* __restrict c) {
  trace_call(0x8006C1C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C1C8
  c->r[0]=c->lr; // 8006C1CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006C1D0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006C1D4
  c->r[26]=c->r[3]|c->r[3]; // 8006C1D8
  c->r[27]=0u+0x00000000u; // 8006C1DC
  c->r[30]=0u+0xFFFFFFFFu; // 8006C1E0
  c->r[28]=c->r[26]|c->r[26]; // 8006C1E4
  c->r[31]=0u+0x00000000u; // 8006C1E8
L_8006C1EC:;
  W32(c->r[28]+0x00000000u,c->r[30]); // 8006C1EC
  c->r[3]=c->r[28]+0x00000008u; // 8006C1F0
  c->r[4]=0u+0x00000000u; // 8006C1F4
  c->r[5]=0u+0x00000009u; // 8006C1F8
  W32(c->r[28]+0x00000004u,c->r[31]); // 8006C1FC
  c->r[29]=R32(c->r[13]+0xFFFF8208u); // 8006C200
  c->lr=0x8006C208u; f_80004714(c); // 8006C204
  c->r[3]=c->r[29]|c->r[29]; // 8006C208
  c->lr=0x8006C210u; f_800ACEA0(c); // 8006C20C
  c->r[5]=c->r[3]|c->r[3]; // 8006C210
  c->r[4]=c->r[29]|c->r[29]; // 8006C214
  c->r[3]=c->r[28]+0x00000008u; // 8006C218
  c->lr=0x8006C220u; f_800043C4(c); // 8006C21C
  W8(c->r[28]+0x00000011u,c->r[31]); // 8006C220
  c->r[27]=c->r[27]+0x00000001u; // 8006C224
  cmpu(c,0,c->r[27],0x00000028u); // 8006C228
  W8(c->r[28]+0x00000012u,c->r[31]); // 8006C22C
  W8(c->r[28]+0x00000013u,c->r[31]); // 8006C230
  W32(c->r[28]+0x00000014u,c->r[31]); // 8006C234
  c->r[28]=c->r[28]+0x00000018u; // 8006C238
  if (crb(c,0)) { IRQCHK(c); goto L_8006C1EC; } // 8006C23C
  c->r[0]=0u+0x00000000u; // 8006C240
  W32(c->r[26]+0x000003C0u,c->r[0]); // 8006C244
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006C248
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006C24C
  c->lr=c->r[0]; // 8006C250
  c->r[1]=c->r[1]+0x00000020u; // 8006C254
  return; // 8006C258
}

// toBinary__Q34gbla5param18NetRankTopSaveDataCFRQ24Sega13OBinaryStream
void f_8006C25C(Ctx* __restrict c) {
  trace_call(0x8006C25Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C25C
  c->r[0]=c->lr; // 8006C260
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006C264
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006C268
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006C26C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006C270
  c->r[29]=c->r[4]|c->r[4]; // 8006C274
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006C278
  c->r[28]=c->r[3]|c->r[3]; // 8006C27C
  c->r[3]=c->r[29]|c->r[29]; // 8006C280
  c->lr=0x8006C288u; f_80207484(c); // 8006C284
  c->r[31]=c->r[28]|c->r[28]; // 8006C288
  c->r[30]=0u+0x00000000u; // 8006C28C
L_8006C290:;
  c->r[3]=c->r[29]|c->r[29]; // 8006C290
  c->lr=0x8006C298u; f_80207484(c); // 8006C294
  c->r[3]=c->r[29]|c->r[29]; // 8006C298
  c->r[4]=c->r[31]|c->r[31]; // 8006C29C
  c->r[5]=0u+0x00000004u; // 8006C2A0
  c->lr=0x8006C2A8u; f_80207224(c); // 8006C2A4
  c->r[3]=c->r[29]|c->r[29]; // 8006C2A8
  c->r[4]=c->r[31]+0x00000004u; // 8006C2AC
  c->r[5]=0u+0x00000004u; // 8006C2B0
  c->lr=0x8006C2B8u; f_80207224(c); // 8006C2B4
  c->r[3]=c->r[29]|c->r[29]; // 8006C2B8
  c->r[4]=c->r[31]+0x00000008u; // 8006C2BC
  c->r[5]=0u+0x00000009u; // 8006C2C0
  c->lr=0x8006C2C8u; f_80207224(c); // 8006C2C4
  c->r[3]=c->r[29]|c->r[29]; // 8006C2C8
  c->r[4]=c->r[31]+0x00000011u; // 8006C2CC
  c->r[5]=0u+0x00000001u; // 8006C2D0
  c->lr=0x8006C2D8u; f_80207224(c); // 8006C2D4
  c->r[3]=c->r[29]|c->r[29]; // 8006C2D8
  c->r[4]=c->r[31]+0x00000012u; // 8006C2DC
  c->r[5]=0u+0x00000001u; // 8006C2E0
  c->lr=0x8006C2E8u; f_80207224(c); // 8006C2E4
  c->r[3]=c->r[29]|c->r[29]; // 8006C2E8
  c->r[4]=c->r[31]+0x00000013u; // 8006C2EC
  c->r[5]=0u+0x00000001u; // 8006C2F0
  c->lr=0x8006C2F8u; f_80207224(c); // 8006C2F4
  c->r[3]=c->r[29]|c->r[29]; // 8006C2F8
  c->r[4]=c->r[31]+0x00000014u; // 8006C2FC
  c->r[5]=0u+0x00000004u; // 8006C300
  c->lr=0x8006C308u; f_80207224(c); // 8006C304
  c->r[3]=c->r[29]|c->r[29]; // 8006C308
  c->lr=0x8006C310u; f_80207484(c); // 8006C30C
  c->r[30]=c->r[30]+0x00000001u; // 8006C310
  c->r[31]=c->r[31]+0x00000018u; // 8006C314
  cmpu(c,0,c->r[30],0x00000028u); // 8006C318
  if (crb(c,0)) { IRQCHK(c); goto L_8006C290; } // 8006C31C
  c->r[4]=R32(c->r[28]+0x000003C0u); // 8006C320
  c->r[3]=c->r[29]|c->r[29]; // 8006C324
  c->lr=0x8006C32Cu; f_802070AC(c); // 8006C328
  c->r[3]=c->r[29]|c->r[29]; // 8006C32C
  c->lr=0x8006C334u; f_80207484(c); // 8006C330
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006C334
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006C338
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006C33C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006C340
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006C344
  c->lr=c->r[0]; // 8006C348
  c->r[1]=c->r[1]+0x00000020u; // 8006C34C
  return; // 8006C350
}

// fromBinary__Q34gbla5param18NetRankTopSaveDataFRQ24Sega16IRefBinaryStream
void f_8006C354(Ctx* __restrict c) {
  trace_call(0x8006C354u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C354
  c->r[0]=c->lr; // 8006C358
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006C35C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006C360
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006C364
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006C368
  c->r[29]=c->r[4]|c->r[4]; // 8006C36C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006C370
  c->r[28]=c->r[3]|c->r[3]; // 8006C374
  c->r[3]=c->r[29]|c->r[29]; // 8006C378
  c->lr=0x8006C380u; f_8020A7A4(c); // 8006C37C
  c->r[31]=c->r[28]|c->r[28]; // 8006C380
  c->r[30]=0u+0x00000000u; // 8006C384
L_8006C388:;
  c->r[3]=c->r[29]|c->r[29]; // 8006C388
  c->lr=0x8006C390u; f_8020A7A4(c); // 8006C38C
  c->r[3]=c->r[29]|c->r[29]; // 8006C390
  c->r[4]=c->r[31]|c->r[31]; // 8006C394
  c->r[5]=0u+0x00000004u; // 8006C398
  c->lr=0x8006C3A0u; f_8020A69C(c); // 8006C39C
  c->r[3]=c->r[29]|c->r[29]; // 8006C3A0
  c->r[4]=c->r[31]+0x00000004u; // 8006C3A4
  c->r[5]=0u+0x00000004u; // 8006C3A8
  c->lr=0x8006C3B0u; f_8020A69C(c); // 8006C3AC
  c->r[3]=c->r[29]|c->r[29]; // 8006C3B0
  c->r[4]=c->r[31]+0x00000008u; // 8006C3B4
  c->r[5]=0u+0x00000009u; // 8006C3B8
  c->lr=0x8006C3C0u; f_8020A69C(c); // 8006C3BC
  c->r[3]=c->r[29]|c->r[29]; // 8006C3C0
  c->r[4]=c->r[31]+0x00000011u; // 8006C3C4
  c->r[5]=0u+0x00000001u; // 8006C3C8
  c->lr=0x8006C3D0u; f_8020A69C(c); // 8006C3CC
  c->r[3]=c->r[29]|c->r[29]; // 8006C3D0
  c->r[4]=c->r[31]+0x00000012u; // 8006C3D4
  c->r[5]=0u+0x00000001u; // 8006C3D8
  c->lr=0x8006C3E0u; f_8020A69C(c); // 8006C3DC
  c->r[3]=c->r[29]|c->r[29]; // 8006C3E0
  c->r[4]=c->r[31]+0x00000013u; // 8006C3E4
  c->r[5]=0u+0x00000001u; // 8006C3E8
  c->lr=0x8006C3F0u; f_8020A69C(c); // 8006C3EC
  c->r[3]=c->r[29]|c->r[29]; // 8006C3F0
  c->r[4]=c->r[31]+0x00000014u; // 8006C3F4
  c->r[5]=0u+0x00000004u; // 8006C3F8
  c->lr=0x8006C400u; f_8020A69C(c); // 8006C3FC
  c->r[3]=c->r[29]|c->r[29]; // 8006C400
  c->lr=0x8006C408u; f_8020A7A4(c); // 8006C404
  c->r[30]=c->r[30]+0x00000001u; // 8006C408
  c->r[31]=c->r[31]+0x00000018u; // 8006C40C
  cmpu(c,0,c->r[30],0x00000028u); // 8006C410
  if (crb(c,0)) { IRQCHK(c); goto L_8006C388; } // 8006C414
  c->r[3]=c->r[29]|c->r[29]; // 8006C418
  c->r[4]=c->r[28]+0x000003C0u; // 8006C41C
  c->lr=0x8006C424u; f_8020A5CC(c); // 8006C420
  c->r[3]=c->r[29]|c->r[29]; // 8006C424
  c->lr=0x8006C42Cu; f_8020A7A4(c); // 8006C428
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006C42C
  c->r[3]=0u+0x00000001u; // 8006C430
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006C434
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006C438
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006C43C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006C440
  c->lr=c->r[0]; // 8006C444
  c->r[1]=c->r[1]+0x00000020u; // 8006C448
  return; // 8006C44C
}

// init__Q34gbla5param17NetRankMySaveDataFv
void f_8006C450(Ctx* __restrict c) {
  trace_call(0x8006C450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C450
  c->r[0]=c->lr; // 8006C454
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006C458
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006C45C
  c->r[26]=c->r[3]|c->r[3]; // 8006C460
  c->r[27]=0u+0x00000000u; // 8006C464
  c->r[31]=0u+0xFFFFFFFFu; // 8006C468
  c->r[28]=c->r[26]|c->r[26]; // 8006C46C
  c->r[30]=0u+0x00000000u; // 8006C470
L_8006C474:;
  W32(c->r[28]+0x00000000u,c->r[31]); // 8006C474
  c->r[3]=c->r[28]+0x00000008u; // 8006C478
  c->r[4]=0u+0x00000000u; // 8006C47C
  c->r[5]=0u+0x00000009u; // 8006C480
  W32(c->r[28]+0x00000004u,c->r[30]); // 8006C484
  c->r[29]=R32(c->r[13]+0xFFFF8208u); // 8006C488
  c->lr=0x8006C490u; f_80004714(c); // 8006C48C
  c->r[3]=c->r[29]|c->r[29]; // 8006C490
  c->lr=0x8006C498u; f_800ACEA0(c); // 8006C494
  c->r[5]=c->r[3]|c->r[3]; // 8006C498
  c->r[4]=c->r[29]|c->r[29]; // 8006C49C
  c->r[3]=c->r[28]+0x00000008u; // 8006C4A0
  c->lr=0x8006C4A8u; f_800043C4(c); // 8006C4A4
  W8(c->r[28]+0x00000011u,c->r[30]); // 8006C4A8
  c->r[27]=c->r[27]+0x00000001u; // 8006C4AC
  cmpu(c,0,c->r[27],0x00000028u); // 8006C4B0
  W8(c->r[28]+0x00000012u,c->r[30]); // 8006C4B4
  W8(c->r[28]+0x00000013u,c->r[30]); // 8006C4B8
  W32(c->r[28]+0x00000014u,c->r[30]); // 8006C4BC
  c->r[28]=c->r[28]+0x00000018u; // 8006C4C0
  if (crb(c,0)) { IRQCHK(c); goto L_8006C474; } // 8006C4C4
  c->r[30]=0u+0x00000000u; // 8006C4C8
  c->r[31]=0u+0xFFFFFFFFu; // 8006C4CC
  W32(c->r[26]+0x000003C4u,c->r[30]); // 8006C4D0
  c->r[3]=c->r[26]+0x000003D8u; // 8006C4D4
  c->r[4]=0u+0x00000000u; // 8006C4D8
  c->r[5]=0u+0x00000009u; // 8006C4DC
  W32(c->r[26]+0x000003C0u,c->r[30]); // 8006C4E0
  W32(c->r[26]+0x000003CCu,c->r[30]); // 8006C4E4
  W32(c->r[26]+0x000003C8u,c->r[30]); // 8006C4E8
  W32(c->r[26]+0x000003D0u,c->r[31]); // 8006C4EC
  W32(c->r[26]+0x000003D4u,c->r[30]); // 8006C4F0
  c->r[29]=R32(c->r[13]+0xFFFF8208u); // 8006C4F4
  c->lr=0x8006C4FCu; f_80004714(c); // 8006C4F8
  c->r[3]=c->r[29]|c->r[29]; // 8006C4FC
  c->lr=0x8006C504u; f_800ACEA0(c); // 8006C500
  c->r[5]=c->r[3]|c->r[3]; // 8006C504
  c->r[4]=c->r[29]|c->r[29]; // 8006C508
  c->r[3]=c->r[26]+0x000003D8u; // 8006C50C
  c->lr=0x8006C514u; f_800043C4(c); // 8006C510
  W8(c->r[26]+0x000003E1u,c->r[30]); // 8006C514
  c->r[3]=c->r[26]+0x000003F0u; // 8006C518
  c->r[4]=0u+0x00000000u; // 8006C51C
  c->r[5]=0u+0x00000009u; // 8006C520
  W8(c->r[26]+0x000003E2u,c->r[30]); // 8006C524
  W8(c->r[26]+0x000003E3u,c->r[30]); // 8006C528
  W32(c->r[26]+0x000003E4u,c->r[30]); // 8006C52C
  W32(c->r[26]+0x000003E8u,c->r[31]); // 8006C530
  W32(c->r[26]+0x000003ECu,c->r[30]); // 8006C534
  c->r[29]=R32(c->r[13]+0xFFFF8208u); // 8006C538
  c->lr=0x8006C540u; f_80004714(c); // 8006C53C
  c->r[3]=c->r[29]|c->r[29]; // 8006C540
  c->lr=0x8006C548u; f_800ACEA0(c); // 8006C544
  c->r[5]=c->r[3]|c->r[3]; // 8006C548
  c->r[4]=c->r[29]|c->r[29]; // 8006C54C
  c->r[3]=c->r[26]+0x000003F0u; // 8006C550
  c->lr=0x8006C558u; f_800043C4(c); // 8006C554
  W8(c->r[26]+0x000003F9u,c->r[30]); // 8006C558
  W8(c->r[26]+0x000003FAu,c->r[30]); // 8006C55C
  W8(c->r[26]+0x000003FBu,c->r[30]); // 8006C560
  W32(c->r[26]+0x000003FCu,c->r[30]); // 8006C564
  W8(c->r[26]+0x00000400u,c->r[30]); // 8006C568
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006C56C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006C570
  c->lr=c->r[0]; // 8006C574
  c->r[1]=c->r[1]+0x00000020u; // 8006C578
  return; // 8006C57C
}

// toBinary__Q34gbla5param17NetRankMySaveDataCFRQ24Sega13OBinaryStream
void f_8006C580(Ctx* __restrict c) {
  trace_call(0x8006C580u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C580
  c->r[0]=c->lr; // 8006C584
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006C588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006C58C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006C590
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006C594
  c->r[29]=c->r[4]|c->r[4]; // 8006C598
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006C59C
  c->r[28]=c->r[3]|c->r[3]; // 8006C5A0
  c->r[3]=c->r[29]|c->r[29]; // 8006C5A4
  c->lr=0x8006C5ACu; f_80207484(c); // 8006C5A8
  c->r[31]=c->r[28]|c->r[28]; // 8006C5AC
  c->r[30]=0u+0x00000000u; // 8006C5B0
L_8006C5B4:;
  c->r[3]=c->r[29]|c->r[29]; // 8006C5B4
  c->lr=0x8006C5BCu; f_80207484(c); // 8006C5B8
  c->r[3]=c->r[29]|c->r[29]; // 8006C5BC
  c->r[4]=c->r[31]|c->r[31]; // 8006C5C0
  c->r[5]=0u+0x00000004u; // 8006C5C4
  c->lr=0x8006C5CCu; f_80207224(c); // 8006C5C8
  c->r[3]=c->r[29]|c->r[29]; // 8006C5CC
  c->r[4]=c->r[31]+0x00000004u; // 8006C5D0
  c->r[5]=0u+0x00000004u; // 8006C5D4
  c->lr=0x8006C5DCu; f_80207224(c); // 8006C5D8
  c->r[3]=c->r[29]|c->r[29]; // 8006C5DC
  c->r[4]=c->r[31]+0x00000008u; // 8006C5E0
  c->r[5]=0u+0x00000009u; // 8006C5E4
  c->lr=0x8006C5ECu; f_80207224(c); // 8006C5E8
  c->r[3]=c->r[29]|c->r[29]; // 8006C5EC
  c->r[4]=c->r[31]+0x00000011u; // 8006C5F0
  c->r[5]=0u+0x00000001u; // 8006C5F4
  c->lr=0x8006C5FCu; f_80207224(c); // 8006C5F8
  c->r[3]=c->r[29]|c->r[29]; // 8006C5FC
  c->r[4]=c->r[31]+0x00000012u; // 8006C600
  c->r[5]=0u+0x00000001u; // 8006C604
  c->lr=0x8006C60Cu; f_80207224(c); // 8006C608
  c->r[3]=c->r[29]|c->r[29]; // 8006C60C
  c->r[4]=c->r[31]+0x00000013u; // 8006C610
  c->r[5]=0u+0x00000001u; // 8006C614
  c->lr=0x8006C61Cu; f_80207224(c); // 8006C618
  c->r[3]=c->r[29]|c->r[29]; // 8006C61C
  c->r[4]=c->r[31]+0x00000014u; // 8006C620
  c->r[5]=0u+0x00000004u; // 8006C624
  c->lr=0x8006C62Cu; f_80207224(c); // 8006C628
  c->r[3]=c->r[29]|c->r[29]; // 8006C62C
  c->lr=0x8006C634u; f_80207484(c); // 8006C630
  c->r[30]=c->r[30]+0x00000001u; // 8006C634
  c->r[31]=c->r[31]+0x00000018u; // 8006C638
  cmpu(c,0,c->r[30],0x00000028u); // 8006C63C
  if (crb(c,0)) { IRQCHK(c); goto L_8006C5B4; } // 8006C640
  c->r[4]=R32(c->r[28]+0x000003C0u); // 8006C644
  c->r[3]=c->r[29]|c->r[29]; // 8006C648
  c->lr=0x8006C650u; f_802070AC(c); // 8006C64C
  c->r[4]=R32(c->r[28]+0x000003C4u); // 8006C650
  c->lr=0x8006C658u; f_802070AC(c); // 8006C654
  c->r[4]=R32(c->r[28]+0x000003C8u); // 8006C658
  c->lr=0x8006C660u; f_802070AC(c); // 8006C65C
  c->r[4]=R32(c->r[28]+0x000003CCu); // 8006C660
  c->lr=0x8006C668u; f_802070AC(c); // 8006C664
  c->r[3]=c->r[29]|c->r[29]; // 8006C668
  c->lr=0x8006C670u; f_80207484(c); // 8006C66C
  c->r[3]=c->r[29]|c->r[29]; // 8006C670
  c->r[4]=c->r[28]+0x000003D0u; // 8006C674
  c->r[5]=0u+0x00000004u; // 8006C678
  c->lr=0x8006C680u; f_80207224(c); // 8006C67C
  c->r[3]=c->r[29]|c->r[29]; // 8006C680
  c->r[4]=c->r[28]+0x000003D4u; // 8006C684
  c->r[5]=0u+0x00000004u; // 8006C688
  c->lr=0x8006C690u; f_80207224(c); // 8006C68C
  c->r[3]=c->r[29]|c->r[29]; // 8006C690
  c->r[4]=c->r[28]+0x000003D8u; // 8006C694
  c->r[5]=0u+0x00000009u; // 8006C698
  c->lr=0x8006C6A0u; f_80207224(c); // 8006C69C
  c->r[3]=c->r[29]|c->r[29]; // 8006C6A0
  c->r[4]=c->r[28]+0x000003E1u; // 8006C6A4
  c->r[5]=0u+0x00000001u; // 8006C6A8
  c->lr=0x8006C6B0u; f_80207224(c); // 8006C6AC
  c->r[3]=c->r[29]|c->r[29]; // 8006C6B0
  c->r[4]=c->r[28]+0x000003E2u; // 8006C6B4
  c->r[5]=0u+0x00000001u; // 8006C6B8
  c->lr=0x8006C6C0u; f_80207224(c); // 8006C6BC
  c->r[3]=c->r[29]|c->r[29]; // 8006C6C0
  c->r[4]=c->r[28]+0x000003E3u; // 8006C6C4
  c->r[5]=0u+0x00000001u; // 8006C6C8
  c->lr=0x8006C6D0u; f_80207224(c); // 8006C6CC
  c->r[3]=c->r[29]|c->r[29]; // 8006C6D0
  c->r[4]=c->r[28]+0x000003E4u; // 8006C6D4
  c->r[5]=0u+0x00000004u; // 8006C6D8
  c->lr=0x8006C6E0u; f_80207224(c); // 8006C6DC
  c->r[3]=c->r[29]|c->r[29]; // 8006C6E0
  c->lr=0x8006C6E8u; f_80207484(c); // 8006C6E4
  c->r[3]=c->r[29]|c->r[29]; // 8006C6E8
  c->lr=0x8006C6F0u; f_80207484(c); // 8006C6EC
  c->r[3]=c->r[29]|c->r[29]; // 8006C6F0
  c->r[4]=c->r[28]+0x000003E8u; // 8006C6F4
  c->r[5]=0u+0x00000004u; // 8006C6F8
  c->lr=0x8006C700u; f_80207224(c); // 8006C6FC
  c->r[3]=c->r[29]|c->r[29]; // 8006C700
  c->r[4]=c->r[28]+0x000003ECu; // 8006C704
  c->r[5]=0u+0x00000004u; // 8006C708
  c->lr=0x8006C710u; f_80207224(c); // 8006C70C
  c->r[3]=c->r[29]|c->r[29]; // 8006C710
  c->r[4]=c->r[28]+0x000003F0u; // 8006C714
  c->r[5]=0u+0x00000009u; // 8006C718
  c->lr=0x8006C720u; f_80207224(c); // 8006C71C
  c->r[3]=c->r[29]|c->r[29]; // 8006C720
  c->r[4]=c->r[28]+0x000003F9u; // 8006C724
  c->r[5]=0u+0x00000001u; // 8006C728
  c->lr=0x8006C730u; f_80207224(c); // 8006C72C
  c->r[3]=c->r[29]|c->r[29]; // 8006C730
  c->r[4]=c->r[28]+0x000003FAu; // 8006C734
  c->r[5]=0u+0x00000001u; // 8006C738
  c->lr=0x8006C740u; f_80207224(c); // 8006C73C
  c->r[3]=c->r[29]|c->r[29]; // 8006C740
  c->r[4]=c->r[28]+0x000003FBu; // 8006C744
  c->r[5]=0u+0x00000001u; // 8006C748
  c->lr=0x8006C750u; f_80207224(c); // 8006C74C
  c->r[3]=c->r[29]|c->r[29]; // 8006C750
  c->r[4]=c->r[28]+0x000003FCu; // 8006C754
  c->r[5]=0u+0x00000004u; // 8006C758
  c->lr=0x8006C760u; f_80207224(c); // 8006C75C
  c->r[3]=c->r[29]|c->r[29]; // 8006C760
  c->lr=0x8006C768u; f_80207484(c); // 8006C764
  c->r[3]=c->r[29]|c->r[29]; // 8006C768
  c->r[4]=c->r[28]+0x00000400u; // 8006C76C
  c->r[5]=0u+0x00000001u; // 8006C770
  c->lr=0x8006C778u; f_80207224(c); // 8006C774
  c->r[3]=c->r[29]|c->r[29]; // 8006C778
  c->lr=0x8006C780u; f_80207484(c); // 8006C77C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006C780
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006C784
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006C788
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006C78C
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006C790
  c->lr=c->r[0]; // 8006C794
  c->r[1]=c->r[1]+0x00000020u; // 8006C798
  return; // 8006C79C
}

// fromBinary__Q34gbla5param17NetRankMySaveDataFRQ24Sega16IRefBinaryStream
void f_8006C7A0(Ctx* __restrict c) {
  trace_call(0x8006C7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006C7A0
  c->r[0]=c->lr; // 8006C7A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006C7A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006C7AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006C7B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006C7B4
  c->r[29]=c->r[4]|c->r[4]; // 8006C7B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006C7BC
  c->r[28]=c->r[3]|c->r[3]; // 8006C7C0
  c->r[3]=c->r[29]|c->r[29]; // 8006C7C4
  c->lr=0x8006C7CCu; f_8020A7A4(c); // 8006C7C8
  c->r[31]=c->r[28]|c->r[28]; // 8006C7CC
  c->r[30]=0u+0x00000000u; // 8006C7D0
L_8006C7D4:;
  c->r[3]=c->r[29]|c->r[29]; // 8006C7D4
  c->lr=0x8006C7DCu; f_8020A7A4(c); // 8006C7D8
  c->r[3]=c->r[29]|c->r[29]; // 8006C7DC
  c->r[4]=c->r[31]|c->r[31]; // 8006C7E0
  c->r[5]=0u+0x00000004u; // 8006C7E4
  c->lr=0x8006C7ECu; f_8020A69C(c); // 8006C7E8
  c->r[3]=c->r[29]|c->r[29]; // 8006C7EC
  c->r[4]=c->r[31]+0x00000004u; // 8006C7F0
  c->r[5]=0u+0x00000004u; // 8006C7F4
  c->lr=0x8006C7FCu; f_8020A69C(c); // 8006C7F8
  c->r[3]=c->r[29]|c->r[29]; // 8006C7FC
  c->r[4]=c->r[31]+0x00000008u; // 8006C800
  c->r[5]=0u+0x00000009u; // 8006C804
  c->lr=0x8006C80Cu; f_8020A69C(c); // 8006C808
  c->r[3]=c->r[29]|c->r[29]; // 8006C80C
  c->r[4]=c->r[31]+0x00000011u; // 8006C810
  c->r[5]=0u+0x00000001u; // 8006C814
  c->lr=0x8006C81Cu; f_8020A69C(c); // 8006C818
  c->r[3]=c->r[29]|c->r[29]; // 8006C81C
  c->r[4]=c->r[31]+0x00000012u; // 8006C820
  c->r[5]=0u+0x00000001u; // 8006C824
  c->lr=0x8006C82Cu; f_8020A69C(c); // 8006C828
  c->r[3]=c->r[29]|c->r[29]; // 8006C82C
  c->r[4]=c->r[31]+0x00000013u; // 8006C830
  c->r[5]=0u+0x00000001u; // 8006C834
  c->lr=0x8006C83Cu; f_8020A69C(c); // 8006C838
  c->r[3]=c->r[29]|c->r[29]; // 8006C83C
  c->r[4]=c->r[31]+0x00000014u; // 8006C840
  c->r[5]=0u+0x00000004u; // 8006C844
  c->lr=0x8006C84Cu; f_8020A69C(c); // 8006C848
  c->r[3]=c->r[29]|c->r[29]; // 8006C84C
  c->lr=0x8006C854u; f_8020A7A4(c); // 8006C850
  c->r[30]=c->r[30]+0x00000001u; // 8006C854
  c->r[31]=c->r[31]+0x00000018u; // 8006C858
  cmpu(c,0,c->r[30],0x00000028u); // 8006C85C
  if (crb(c,0)) { IRQCHK(c); goto L_8006C7D4; } // 8006C860
  c->r[3]=c->r[29]|c->r[29]; // 8006C864
  c->r[4]=c->r[28]+0x000003C0u; // 8006C868
  c->lr=0x8006C870u; f_8020A5CC(c); // 8006C86C
  c->r[4]=c->r[28]+0x000003C4u; // 8006C870
  c->lr=0x8006C878u; f_8020A5CC(c); // 8006C874
  c->r[4]=c->r[28]+0x000003C8u; // 8006C878
  c->lr=0x8006C880u; f_8020A5CC(c); // 8006C87C
  c->r[4]=c->r[28]+0x000003CCu; // 8006C880
  c->lr=0x8006C888u; f_8020A5CC(c); // 8006C884
  c->r[3]=c->r[29]|c->r[29]; // 8006C888
  c->lr=0x8006C890u; f_8020A7A4(c); // 8006C88C
  c->r[3]=c->r[29]|c->r[29]; // 8006C890
  c->r[4]=c->r[28]+0x000003D0u; // 8006C894
  c->r[5]=0u+0x00000004u; // 8006C898
  c->lr=0x8006C8A0u; f_8020A69C(c); // 8006C89C
  c->r[3]=c->r[29]|c->r[29]; // 8006C8A0
  c->r[4]=c->r[28]+0x000003D4u; // 8006C8A4
  c->r[5]=0u+0x00000004u; // 8006C8A8
  c->lr=0x8006C8B0u; f_8020A69C(c); // 8006C8AC
  c->r[3]=c->r[29]|c->r[29]; // 8006C8B0
  c->r[4]=c->r[28]+0x000003D8u; // 8006C8B4
  c->r[5]=0u+0x00000009u; // 8006C8B8
  c->lr=0x8006C8C0u; f_8020A69C(c); // 8006C8BC
  c->r[3]=c->r[29]|c->r[29]; // 8006C8C0
  c->r[4]=c->r[28]+0x000003E1u; // 8006C8C4
  c->r[5]=0u+0x00000001u; // 8006C8C8
  c->lr=0x8006C8D0u; f_8020A69C(c); // 8006C8CC
  c->r[3]=c->r[29]|c->r[29]; // 8006C8D0
  c->r[4]=c->r[28]+0x000003E2u; // 8006C8D4
  c->r[5]=0u+0x00000001u; // 8006C8D8
  c->lr=0x8006C8E0u; f_8020A69C(c); // 8006C8DC
  c->r[3]=c->r[29]|c->r[29]; // 8006C8E0
  c->r[4]=c->r[28]+0x000003E3u; // 8006C8E4
  c->r[5]=0u+0x00000001u; // 8006C8E8
  c->lr=0x8006C8F0u; f_8020A69C(c); // 8006C8EC
  c->r[3]=c->r[29]|c->r[29]; // 8006C8F0
  c->r[4]=c->r[28]+0x000003E4u; // 8006C8F4
  c->r[5]=0u+0x00000004u; // 8006C8F8
  c->lr=0x8006C900u; f_8020A69C(c); // 8006C8FC
  c->r[3]=c->r[29]|c->r[29]; // 8006C900
  c->lr=0x8006C908u; f_8020A7A4(c); // 8006C904
  c->r[3]=c->r[29]|c->r[29]; // 8006C908
  c->lr=0x8006C910u; f_8020A7A4(c); // 8006C90C
  c->r[3]=c->r[29]|c->r[29]; // 8006C910
  c->r[4]=c->r[28]+0x000003E8u; // 8006C914
  c->r[5]=0u+0x00000004u; // 8006C918
  c->lr=0x8006C920u; f_8020A69C(c); // 8006C91C
  c->r[3]=c->r[29]|c->r[29]; // 8006C920
  c->r[4]=c->r[28]+0x000003ECu; // 8006C924
  c->r[5]=0u+0x00000004u; // 8006C928
  c->lr=0x8006C930u; f_8020A69C(c); // 8006C92C
  c->r[3]=c->r[29]|c->r[29]; // 8006C930
  c->r[4]=c->r[28]+0x000003F0u; // 8006C934
  c->r[5]=0u+0x00000009u; // 8006C938
  c->lr=0x8006C940u; f_8020A69C(c); // 8006C93C
  c->r[3]=c->r[29]|c->r[29]; // 8006C940
  c->r[4]=c->r[28]+0x000003F9u; // 8006C944
  c->r[5]=0u+0x00000001u; // 8006C948
  c->lr=0x8006C950u; f_8020A69C(c); // 8006C94C
  c->r[3]=c->r[29]|c->r[29]; // 8006C950
  c->r[4]=c->r[28]+0x000003FAu; // 8006C954
  c->r[5]=0u+0x00000001u; // 8006C958
  c->lr=0x8006C960u; f_8020A69C(c); // 8006C95C
  c->r[3]=c->r[29]|c->r[29]; // 8006C960
  c->r[4]=c->r[28]+0x000003FBu; // 8006C964
  c->r[5]=0u+0x00000001u; // 8006C968
  c->lr=0x8006C970u; f_8020A69C(c); // 8006C96C
  c->r[3]=c->r[29]|c->r[29]; // 8006C970
  c->r[4]=c->r[28]+0x000003FCu; // 8006C974
  c->r[5]=0u+0x00000004u; // 8006C978
  c->lr=0x8006C980u; f_8020A69C(c); // 8006C97C
  c->r[3]=c->r[29]|c->r[29]; // 8006C980
  c->lr=0x8006C988u; f_8020A7A4(c); // 8006C984
  c->r[3]=c->r[29]|c->r[29]; // 8006C988
  c->r[4]=c->r[28]+0x00000400u; // 8006C98C
  c->r[5]=0u+0x00000001u; // 8006C990
  c->lr=0x8006C998u; f_8020A69C(c); // 8006C994
  c->r[3]=c->r[29]|c->r[29]; // 8006C998
  c->lr=0x8006C9A0u; f_8020A7A4(c); // 8006C99C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006C9A0
  c->r[3]=0u+0x00000001u; // 8006C9A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006C9A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006C9AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006C9B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006C9B4
  c->lr=c->r[0]; // 8006C9B8
  c->r[1]=c->r[1]+0x00000020u; // 8006C9BC
  return; // 8006C9C0
}

// __ct__Q34gbla5param10OptionDataFv
void f_8006C9C4(Ctx* __restrict c) {
  trace_call(0x8006C9C4u);
  c->r[0]=0u+0x00000000u; // 8006C9C4
  W8(c->r[3]+0x00000000u,c->r[0]); // 8006C9C8
  W8(c->r[3]+0x00000001u,c->r[0]); // 8006C9CC
  W8(c->r[3]+0x00000002u,c->r[0]); // 8006C9D0
  W8(c->r[3]+0x00000003u,c->r[0]); // 8006C9D4
  W8(c->r[3]+0x00000004u,c->r[0]); // 8006C9D8
  W8(c->r[3]+0x00000005u,c->r[0]); // 8006C9DC
  W8(c->r[3]+0x00000006u,c->r[0]); // 8006C9E0
  return; // 8006C9E4
}

// init__Q34gbla5param10OptionDataFv
void f_8006C9E8(Ctx* __restrict c) {
  trace_call(0x8006C9E8u);
  c->r[0]=0u+0x00000000u; // 8006C9E8
  W8(c->r[3]+0x00000000u,c->r[0]); // 8006C9EC
  W8(c->r[3]+0x00000001u,c->r[0]); // 8006C9F0
  W8(c->r[3]+0x00000002u,c->r[0]); // 8006C9F4
  W8(c->r[3]+0x00000003u,c->r[0]); // 8006C9F8
  W8(c->r[3]+0x00000004u,c->r[0]); // 8006C9FC
  W8(c->r[3]+0x00000005u,c->r[0]); // 8006CA00
  W8(c->r[3]+0x00000006u,c->r[0]); // 8006CA04
  return; // 8006CA08
}

// getRemoconMove__Q34gbla5param10OptionDataCFv
void f_8006CA0C(Ctx* __restrict c) {
  trace_call(0x8006CA0Cu);
  c->r[3]=R8(c->r[3]+0x00000000u); // 8006CA0C
  return; // 8006CA10
}

// setRemoconMove__Q34gbla5param10OptionDataFUc
void f_8006CA14(Ctx* __restrict c) {
  trace_call(0x8006CA14u);
  W8(c->r[3]+0x00000000u,c->r[4]); // 8006CA14
  return; // 8006CA18
}

// getRemoconSound__Q34gbla5param10OptionDataCFv
void f_8006CA1C(Ctx* __restrict c) {
  trace_call(0x8006CA1Cu);
  c->r[3]=R8(c->r[3]+0x00000001u); // 8006CA1C
  return; // 8006CA20
}

// setRemoconSound__Q34gbla5param10OptionDataFUc
void f_8006CA24(Ctx* __restrict c) {
  trace_call(0x8006CA24u);
  W8(c->r[3]+0x00000001u,c->r[4]); // 8006CA24
  return; // 8006CA28
}

// getGBDifficulty__Q34gbla5param10OptionDataCFv
void f_8006CA2C(Ctx* __restrict c) {
  trace_call(0x8006CA2Cu);
  c->r[3]=R8(c->r[3]+0x00000002u); // 8006CA2C
  return; // 8006CA30
}

// setGBDifficulty__Q34gbla5param10OptionDataFUc
void f_8006CA34(Ctx* __restrict c) {
  trace_call(0x8006CA34u);
  W8(c->r[3]+0x00000002u,c->r[4]); // 8006CA34
  return; // 8006CA38
}

// getLADifficulty__Q34gbla5param10OptionDataCFv
void f_8006CA3C(Ctx* __restrict c) {
  trace_call(0x8006CA3Cu);
  c->r[3]=R8(c->r[3]+0x00000003u); // 8006CA3C
  return; // 8006CA40
}

// setLADifficulty__Q34gbla5param10OptionDataFUc
void f_8006CA44(Ctx* __restrict c) {
  trace_call(0x8006CA44u);
  W8(c->r[3]+0x00000003u,c->r[4]); // 8006CA44
  return; // 8006CA48
}

// getBGMVolume__Q34gbla5param10OptionDataCFv
void f_8006CA4C(Ctx* __restrict c) {
  trace_call(0x8006CA4Cu);
  c->r[3]=R8(c->r[3]+0x00000004u); // 8006CA4C
  return; // 8006CA50
}

// getBGMVolumePlayer__Q34gbla5param10OptionDataCFv
void f_8006CA54(Ctx* __restrict c) {
  trace_call(0x8006CA54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CA54
  c->r[0]=0u+0x43300000u; // 8006CA58
  c->r[3]=R8(c->r[3]+0x00000004u); // 8006CA5C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8006CA60
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[2]=RF64(ea);} // 8006CA64
  W32(c->r[1]+0x00000008u,c->r[0]); // 8006CA68
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006CA6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8006CA70
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8006CA74
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8006CA78
  c->r[1]=c->r[1]+0x00000010u; // 8006CA7C
  return; // 8006CA80
}

// setBGMVolume__Q34gbla5param10OptionDataFUc
void f_8006CA84(Ctx* __restrict c) {
  trace_call(0x8006CA84u);
  W8(c->r[3]+0x00000004u,c->r[4]); // 8006CA84
  return; // 8006CA88
}

// getSEVolume__Q34gbla5param10OptionDataCFv
void f_8006CA8C(Ctx* __restrict c) {
  trace_call(0x8006CA8Cu);
  c->r[3]=R8(c->r[3]+0x00000005u); // 8006CA8C
  return; // 8006CA90
}

// getSEVolumePlayer__Q34gbla5param10OptionDataCFv
void f_8006CA94(Ctx* __restrict c) {
  trace_call(0x8006CA94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CA94
  c->r[0]=0u+0x43300000u; // 8006CA98
  c->r[3]=R8(c->r[3]+0x00000005u); // 8006CA9C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8006CAA0
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[2]=RF64(ea);} // 8006CAA4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8006CAA8
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006CAAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8006CAB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8006CAB4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8006CAB8
  c->r[1]=c->r[1]+0x00000010u; // 8006CABC
  return; // 8006CAC0
}

// setSEVolume__Q34gbla5param10OptionDataFUc
void f_8006CAC4(Ctx* __restrict c) {
  trace_call(0x8006CAC4u);
  W8(c->r[3]+0x00000005u,c->r[4]); // 8006CAC4
  return; // 8006CAC8
}

// getVoiceVolume__Q34gbla5param10OptionDataCFv
void f_8006CACC(Ctx* __restrict c) {
  trace_call(0x8006CACCu);
  c->r[3]=R8(c->r[3]+0x00000006u); // 8006CACC
  return; // 8006CAD0
}

// getVoiceVolumePlayer__Q34gbla5param10OptionDataCFv
void f_8006CAD4(Ctx* __restrict c) {
  trace_call(0x8006CAD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CAD4
  c->r[0]=0u+0x43300000u; // 8006CAD8
  c->r[3]=R8(c->r[3]+0x00000006u); // 8006CADC
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8006CAE0
  {uint32_t ea=c->r[2]+0xFFFFA688u; c->f[2]=RF64(ea);} // 8006CAE4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8006CAE8
  {uint32_t ea=c->r[2]+0xFFFFA680u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006CAEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8006CAF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8006CAF4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8006CAF8
  c->r[1]=c->r[1]+0x00000010u; // 8006CAFC
  return; // 8006CB00
}

// setVoiceVolume__Q34gbla5param10OptionDataFUc
void f_8006CB04(Ctx* __restrict c) {
  trace_call(0x8006CB04u);
  W8(c->r[3]+0x00000006u,c->r[4]); // 8006CB04
  return; // 8006CB08
}

// toBinary__Q34gbla5param10OptionDataCFRQ24Sega13OBinaryStream
void f_8006CB0C(Ctx* __restrict c) {
  trace_call(0x8006CB0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CB0C
  c->r[0]=c->lr; // 8006CB10
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006CB14
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006CB18
  c->r[31]=c->r[4]|c->r[4]; // 8006CB1C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006CB20
  c->r[30]=c->r[3]|c->r[3]; // 8006CB24
  c->r[3]=c->r[31]|c->r[31]; // 8006CB28
  c->lr=0x8006CB30u; f_80207484(c); // 8006CB2C
  c->r[4]=R8(c->r[30]+0x00000000u); // 8006CB30
  c->r[3]=c->r[31]|c->r[31]; // 8006CB34
  c->lr=0x8006CB3Cu; f_80206F58(c); // 8006CB38
  c->r[4]=R8(c->r[30]+0x00000001u); // 8006CB3C
  c->lr=0x8006CB44u; f_80206F58(c); // 8006CB40
  c->r[4]=R8(c->r[30]+0x00000002u); // 8006CB44
  c->lr=0x8006CB4Cu; f_80206F58(c); // 8006CB48
  c->r[4]=R8(c->r[30]+0x00000003u); // 8006CB4C
  c->lr=0x8006CB54u; f_80206F58(c); // 8006CB50
  c->r[4]=R8(c->r[30]+0x00000004u); // 8006CB54
  c->lr=0x8006CB5Cu; f_80206F58(c); // 8006CB58
  c->r[4]=R8(c->r[30]+0x00000005u); // 8006CB5C
  c->lr=0x8006CB64u; f_80206F58(c); // 8006CB60
  c->r[4]=R8(c->r[30]+0x00000006u); // 8006CB64
  c->lr=0x8006CB6Cu; f_80206F58(c); // 8006CB68
  c->r[3]=c->r[31]|c->r[31]; // 8006CB6C
  c->lr=0x8006CB74u; f_80207484(c); // 8006CB70
  c->r[3]=c->r[31]|c->r[31]; // 8006CB74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006CB78
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006CB7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006CB80
  c->lr=c->r[0]; // 8006CB84
  c->r[1]=c->r[1]+0x00000010u; // 8006CB88
  return; // 8006CB8C
}

// fromBinary__Q34gbla5param10OptionDataFRQ24Sega16IRefBinaryStream
void f_8006CB90(Ctx* __restrict c) {
  trace_call(0x8006CB90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CB90
  c->r[0]=c->lr; // 8006CB94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006CB98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006CB9C
  c->r[31]=c->r[4]|c->r[4]; // 8006CBA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006CBA4
  c->r[30]=c->r[3]|c->r[3]; // 8006CBA8
  c->r[3]=c->r[31]|c->r[31]; // 8006CBAC
  c->lr=0x8006CBB4u; f_8020A7A4(c); // 8006CBB0
  c->r[3]=c->r[31]|c->r[31]; // 8006CBB4
  c->r[4]=c->r[30]|c->r[30]; // 8006CBB8
  c->lr=0x8006CBC0u; f_8020A4E8(c); // 8006CBBC
  c->r[4]=c->r[30]+0x00000001u; // 8006CBC0
  c->lr=0x8006CBC8u; f_8020A4E8(c); // 8006CBC4
  c->r[4]=c->r[30]+0x00000002u; // 8006CBC8
  c->lr=0x8006CBD0u; f_8020A4E8(c); // 8006CBCC
  c->r[4]=c->r[30]+0x00000003u; // 8006CBD0
  c->lr=0x8006CBD8u; f_8020A4E8(c); // 8006CBD4
  c->r[4]=c->r[30]+0x00000004u; // 8006CBD8
  c->lr=0x8006CBE0u; f_8020A4E8(c); // 8006CBDC
  c->r[4]=c->r[30]+0x00000005u; // 8006CBE0
  c->lr=0x8006CBE8u; f_8020A4E8(c); // 8006CBE4
  c->r[4]=c->r[30]+0x00000006u; // 8006CBE8
  c->lr=0x8006CBF0u; f_8020A4E8(c); // 8006CBEC
  c->r[3]=c->r[31]|c->r[31]; // 8006CBF0
  c->lr=0x8006CBF8u; f_8020A7A4(c); // 8006CBF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006CBF8
  c->r[3]=0u+0x00000001u; // 8006CBFC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006CC00
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006CC04
  c->lr=c->r[0]; // 8006CC08
  c->r[1]=c->r[1]+0x00000010u; // 8006CC0C
  return; // 8006CC10
}

// outputDisp__Q34gbla5param10OptionDataCFv
void f_8006CC14(Ctx* __restrict c) {
  trace_call(0x8006CC14u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CC14
  c->r[0]=c->lr; // 8006CC18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006CC1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006CC20
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006CC24
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006CC28
  c->r[29]=c->r[3]|c->r[3]; // 8006CC2C
  c->lr=0x8006CC34u; f_8006E3E4(c); // 8006CC30
  c->r[3]=c->r[1]+0x00000008u; // 8006CC34
  c->r[4]=0u+0x00000006u; // 8006CC38
  c->lr=0x8006CC40u; f_8006E3F0(c); // 8006CC3C
  c->r[30]=0u+0x802B0000u; // 8006CC40
  c->r[3]=c->r[1]+0x00000008u; // 8006CC44
  c->r[30]=c->r[30]+0x00003A88u; // 8006CC48
  c->r[4]=c->r[30]+0x00000057u; // 8006CC4C
  c->lr=0x8006CC54u; f_8006E6C8(c); // 8006CC50
  c->r[4]=R8(c->r[29]+0x00000000u); // 8006CC54
  c->lr=0x8006CC5Cu; f_8006E488(c); // 8006CC58
  c->r[31]=0u+0x80070000u; // 8006CC5C
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CC60
  c->lr=0x8006CC68u; f_8006E758(c); // 8006CC64
  c->r[3]=c->r[1]+0x00000008u; // 8006CC68
  c->r[4]=c->r[30]+0x00000065u; // 8006CC6C
  c->lr=0x8006CC74u; f_8006E6C8(c); // 8006CC70
  c->r[4]=R8(c->r[29]+0x00000001u); // 8006CC74
  c->lr=0x8006CC7Cu; f_8006E488(c); // 8006CC78
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CC7C
  c->lr=0x8006CC84u; f_8006E758(c); // 8006CC80
  c->r[3]=c->r[1]+0x00000008u; // 8006CC84
  c->r[4]=c->r[30]+0x00000074u; // 8006CC88
  c->lr=0x8006CC90u; f_8006E6C8(c); // 8006CC8C
  c->r[4]=R8(c->r[29]+0x00000002u); // 8006CC90
  c->lr=0x8006CC98u; f_8006E488(c); // 8006CC94
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CC98
  c->lr=0x8006CCA0u; f_8006E758(c); // 8006CC9C
  c->r[3]=c->r[1]+0x00000008u; // 8006CCA0
  c->r[4]=c->r[30]+0x00000082u; // 8006CCA4
  c->lr=0x8006CCACu; f_8006E6C8(c); // 8006CCA8
  c->r[4]=R8(c->r[29]+0x00000003u); // 8006CCAC
  c->lr=0x8006CCB4u; f_8006E488(c); // 8006CCB0
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CCB4
  c->lr=0x8006CCBCu; f_8006E758(c); // 8006CCB8
  c->r[3]=c->r[1]+0x00000008u; // 8006CCBC
  c->r[4]=c->r[30]+0x00000090u; // 8006CCC0
  c->lr=0x8006CCC8u; f_8006E6C8(c); // 8006CCC4
  c->r[4]=R8(c->r[29]+0x00000004u); // 8006CCC8
  c->lr=0x8006CCD0u; f_8006E488(c); // 8006CCCC
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CCD0
  c->lr=0x8006CCD8u; f_8006E758(c); // 8006CCD4
  c->r[3]=c->r[1]+0x00000008u; // 8006CCD8
  c->r[4]=c->r[30]+0x0000009Cu; // 8006CCDC
  c->lr=0x8006CCE4u; f_8006E6C8(c); // 8006CCE0
  c->r[4]=R8(c->r[29]+0x00000005u); // 8006CCE4
  c->lr=0x8006CCECu; f_8006E488(c); // 8006CCE8
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CCEC
  c->lr=0x8006CCF4u; f_8006E758(c); // 8006CCF0
  c->r[3]=c->r[1]+0x00000008u; // 8006CCF4
  c->r[4]=c->r[30]+0x000000A7u; // 8006CCF8
  c->lr=0x8006CD00u; f_8006E6C8(c); // 8006CCFC
  c->r[4]=R8(c->r[29]+0x00000006u); // 8006CD00
  c->lr=0x8006CD08u; f_8006E488(c); // 8006CD04
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006CD08
  c->lr=0x8006CD10u; f_8006E758(c); // 8006CD0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006CD10
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006CD14
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006CD18
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006CD1C
  c->lr=c->r[0]; // 8006CD20
  c->r[1]=c->r[1]+0x00000020u; // 8006CD24
  return; // 8006CD28
}

// __ct__Q34gbla5param13LARankingDataFv
void f_8006CD2C(Ctx* __restrict c) {
  trace_call(0x8006CD2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CD2C
  c->r[0]=c->lr; // 8006CD30
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006CD34
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006CD38
  c->r[31]=c->r[3]|c->r[3]; // 8006CD3C
  c->lr=0x8006CD44u; f_8006CD5C(c); // 8006CD40
  c->r[3]=c->r[31]|c->r[31]; // 8006CD44
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006CD48
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006CD4C
  c->lr=c->r[0]; // 8006CD50
  c->r[1]=c->r[1]+0x00000010u; // 8006CD54
  return; // 8006CD58
}

// init__Q34gbla5param13LARankingDataFv
void f_8006CD5C(Ctx* __restrict c) {
  trace_call(0x8006CD5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006CD5C
  c->r[0]=c->lr; // 8006CD60
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006CD64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006CD68
  c->r[31]=0u+0x00000000u; // 8006CD6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006CD70
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006CD74
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006CD78
  c->r[28]=c->r[3]|c->r[3]; // 8006CD7C
  c->r[30]=c->r[28]|c->r[28]; // 8006CD80
L_8006CD84:;
  c->r[3]=c->r[30]|c->r[30]; // 8006CD84
  c->lr=0x8006CD8Cu; f_8006D134(c); // 8006CD88
  c->r[31]=c->r[31]+0x00000001u; // 8006CD8C
  c->r[30]=c->r[30]+0x0000001Cu; // 8006CD90
  cmpu(c,0,c->r[31],0x0000000Au); // 8006CD94
  if (crb(c,0)) { IRQCHK(c); goto L_8006CD84; } // 8006CD98
  c->r[30]=c->r[28]+0x00000118u; // 8006CD9C
  c->r[31]=0u+0x00000000u; // 8006CDA0
L_8006CDA4:;
  c->r[3]=c->r[30]|c->r[30]; // 8006CDA4
  c->lr=0x8006CDACu; f_8006D134(c); // 8006CDA8
  c->r[31]=c->r[31]+0x00000001u; // 8006CDAC
  c->r[30]=c->r[30]+0x0000001Cu; // 8006CDB0
  cmpu(c,0,c->r[31],0x0000000Au); // 8006CDB4
  if (crb(c,0)) { IRQCHK(c); goto L_8006CDA4; } // 8006CDB8
  c->r[31]=c->r[28]+0x00000230u; // 8006CDBC
  c->r[29]=0u+0x00000000u; // 8006CDC0
L_8006CDC4:;
  c->r[30]=c->r[31]|c->r[31]; // 8006CDC4
  c->r[28]=0u+0x00000000u; // 8006CDC8
L_8006CDCC:;
  c->r[3]=c->r[30]|c->r[30]; // 8006CDCC
  c->lr=0x8006CDD4u; f_8006D134(c); // 8006CDD0
  c->r[28]=c->r[28]+0x00000001u; // 8006CDD4
  c->r[30]=c->r[30]+0x0000001Cu; // 8006CDD8
  cmpu(c,0,c->r[28],0x00000005u); // 8006CDDC
  if (crb(c,0)) { IRQCHK(c); goto L_8006CDCC; } // 8006CDE0
  c->r[29]=c->r[29]+0x00000001u; // 8006CDE4
  c->r[31]=c->r[31]+0x0000008Cu; // 8006CDE8
  cmpu(c,0,c->r[29],0x00000005u); // 8006CDEC
  if (crb(c,0)) { IRQCHK(c); goto L_8006CDC4; } // 8006CDF0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006CDF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006CDF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006CDFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006CE00
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006CE04
  c->lr=c->r[0]; // 8006CE08
  c->r[1]=c->r[1]+0x00000020u; // 8006CE0C
  return; // 8006CE10
}

// getBestPlayer__Q34gbla5param13LARankingDataCFi
void f_8006CE14(Ctx* __restrict c) {
  trace_call(0x8006CE14u);
  cmpu(c,0,c->r[5],0x0000000Au); // 8006CE14
  if (crb(c,0)) { goto L_8006CE58; } // 8006CE18
  c->r[10]=R32(c->r[4]+0x00000000u); // 8006CE1C
  c->r[9]=R32(c->r[4]+0x00000004u); // 8006CE20
  c->r[8]=R32(c->r[4]+0x00000008u); // 8006CE24
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 8006CE28
  c->r[6]=R32(c->r[4]+0x00000010u); // 8006CE2C
  c->r[5]=R32(c->r[4]+0x00000014u); // 8006CE30
  c->r[0]=R32(c->r[4]+0x00000018u); // 8006CE34
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006CE38
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006CE3C
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006CE40
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006CE44
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006CE48
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006CE4C
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006CE50
  return; // 8006CE54
L_8006CE58:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8006CE58
  c->r[10]=c->r[4]+c->r[0]; // 8006CE5C
  c->r[9]=R32(c->r[4]+c->r[0]); // 8006CE60
  c->r[8]=R32(c->r[10]+0x00000004u); // 8006CE64
  c->r[7]=R32(c->r[10]+0x00000008u); // 8006CE68
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 8006CE6C
  c->r[5]=R32(c->r[10]+0x00000010u); // 8006CE70
  c->r[4]=R32(c->r[10]+0x00000014u); // 8006CE74
  c->r[0]=R32(c->r[10]+0x00000018u); // 8006CE78
  W32(c->r[3]+0x00000000u,c->r[9]); // 8006CE7C
  W32(c->r[3]+0x00000004u,c->r[8]); // 8006CE80
  W32(c->r[3]+0x00000008u,c->r[7]); // 8006CE84
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8006CE88
  W32(c->r[3]+0x00000010u,c->r[5]); // 8006CE8C
  W32(c->r[3]+0x00000014u,c->r[4]); // 8006CE90
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006CE94
  return; // 8006CE98
}

// setBestPlayer__Q34gbla5param13LARankingDataFiQ44gbla5param13LARankingData13RANKING_ENTRY
void f_8006CE9C(Ctx* __restrict c) {
  trace_call(0x8006CE9Cu);
  cmpu(c,0,c->r[4],0x0000000Au); // 8006CE9C
  if (!crb(c,0)) return; // 8006CEA0
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 8006CEA4
  c->r[0]=R32(c->r[5]+0x00000000u); // 8006CEA8
  W32(c->r[3]+c->r[4],c->r[0]); // 8006CEAC
  c->r[4]=c->r[3]+c->r[4]; // 8006CEB0
  c->r[0]=R32(c->r[5]+0x00000004u); // 8006CEB4
  W32(c->r[4]+0x00000004u,c->r[0]); // 8006CEB8
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8006CEBC
  c->r[3]=R32(c->r[5]+0x00000008u); // 8006CEC0
  W32(c->r[4]+0x00000008u,c->r[3]); // 8006CEC4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8006CEC8
  c->r[0]=R8(c->r[5]+0x00000010u); // 8006CECC
  W8(c->r[4]+0x00000010u,c->r[0]); // 8006CED0
  c->r[0]=R32(c->r[5]+0x00000015u); // 8006CED4
  c->r[3]=R32(c->r[5]+0x00000011u); // 8006CED8
  W32(c->r[4]+0x00000011u,c->r[3]); // 8006CEDC
  W32(c->r[4]+0x00000015u,c->r[0]); // 8006CEE0
  c->r[0]=R8(c->r[5]+0x00000019u); // 8006CEE4
  W8(c->r[4]+0x00000019u,c->r[0]); // 8006CEE8
  c->r[0]=R8(c->r[5]+0x0000001Au); // 8006CEEC
  W8(c->r[4]+0x0000001Au,c->r[0]); // 8006CEF0
  c->r[0]=R8(c->r[5]+0x0000001Bu); // 8006CEF4
  W8(c->r[4]+0x0000001Bu,c->r[0]); // 8006CEF8
  return; // 8006CEFC
}

// getBestTeam__Q34gbla5param13LARankingDataCFi
void f_8006CF00(Ctx* __restrict c) {
  trace_call(0x8006CF00u);
  cmpu(c,0,c->r[5],0x0000000Au); // 8006CF00
  if (crb(c,0)) { goto L_8006CF44; } // 8006CF04
  c->r[10]=R32(c->r[4]+0x00000118u); // 8006CF08
  c->r[9]=R32(c->r[4]+0x0000011Cu); // 8006CF0C
  c->r[8]=R32(c->r[4]+0x00000120u); // 8006CF10
  c->r[7]=R32(c->r[4]+0x00000124u); // 8006CF14
  c->r[6]=R32(c->r[4]+0x00000128u); // 8006CF18
  c->r[5]=R32(c->r[4]+0x0000012Cu); // 8006CF1C
  c->r[0]=R32(c->r[4]+0x00000130u); // 8006CF20
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006CF24
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006CF28
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006CF2C
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006CF30
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006CF34
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006CF38
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006CF3C
  return; // 8006CF40
L_8006CF44:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8006CF44
  c->r[10]=c->r[4]+c->r[0]; // 8006CF48
  c->r[9]=R32(c->r[10]+0x00000118u); // 8006CF4C
  c->r[8]=R32(c->r[10]+0x0000011Cu); // 8006CF50
  c->r[7]=R32(c->r[10]+0x00000120u); // 8006CF54
  c->r[6]=R32(c->r[10]+0x00000124u); // 8006CF58
  c->r[5]=R32(c->r[10]+0x00000128u); // 8006CF5C
  c->r[4]=R32(c->r[10]+0x0000012Cu); // 8006CF60
  c->r[0]=R32(c->r[10]+0x00000130u); // 8006CF64
  W32(c->r[3]+0x00000000u,c->r[9]); // 8006CF68
  W32(c->r[3]+0x00000004u,c->r[8]); // 8006CF6C
  W32(c->r[3]+0x00000008u,c->r[7]); // 8006CF70
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8006CF74
  W32(c->r[3]+0x00000010u,c->r[5]); // 8006CF78
  W32(c->r[3]+0x00000014u,c->r[4]); // 8006CF7C
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006CF80
  return; // 8006CF84
}

// setBestTeam__Q34gbla5param13LARankingDataFiQ44gbla5param13LARankingData13RANKING_ENTRY
void f_8006CF88(Ctx* __restrict c) {
  trace_call(0x8006CF88u);
  cmpu(c,0,c->r[4],0x0000000Au); // 8006CF88
  if (!crb(c,0)) return; // 8006CF8C
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 8006CF90
  c->r[0]=R32(c->r[5]+0x00000000u); // 8006CF94
  c->r[4]=c->r[3]+c->r[4]; // 8006CF98
  W32(c->r[4]+0x00000118u,c->r[0]); // 8006CF9C
  c->r[0]=R32(c->r[5]+0x00000004u); // 8006CFA0
  W32(c->r[4]+0x0000011Cu,c->r[0]); // 8006CFA4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 8006CFA8
  c->r[3]=R32(c->r[5]+0x00000008u); // 8006CFAC
  W32(c->r[4]+0x00000120u,c->r[3]); // 8006CFB0
  W32(c->r[4]+0x00000124u,c->r[0]); // 8006CFB4
  c->r[0]=R8(c->r[5]+0x00000010u); // 8006CFB8
  W8(c->r[4]+0x00000128u,c->r[0]); // 8006CFBC
  c->r[0]=R32(c->r[5]+0x00000015u); // 8006CFC0
  c->r[3]=R32(c->r[5]+0x00000011u); // 8006CFC4
  W32(c->r[4]+0x00000129u,c->r[3]); // 8006CFC8
  W32(c->r[4]+0x0000012Du,c->r[0]); // 8006CFCC
  c->r[0]=R8(c->r[5]+0x00000019u); // 8006CFD0
  W8(c->r[4]+0x00000131u,c->r[0]); // 8006CFD4
  c->r[0]=R8(c->r[5]+0x0000001Au); // 8006CFD8
  W8(c->r[4]+0x00000132u,c->r[0]); // 8006CFDC
  c->r[0]=R8(c->r[5]+0x0000001Bu); // 8006CFE0
  W8(c->r[4]+0x00000133u,c->r[0]); // 8006CFE4
  return; // 8006CFE8
}

// getStage__Q34gbla5param13LARankingDataCFQ34gbla5param9_la_stagei
void f_8006CFEC(Ctx* __restrict c) {
  trace_call(0x8006CFECu);
  cmpu(c,0,c->r[5],0x00000005u); // 8006CFEC
  if (crb(c,0)) { goto L_8006D030; } // 8006CFF0
  c->r[10]=R32(c->r[4]+0x00000230u); // 8006CFF4
  c->r[9]=R32(c->r[4]+0x00000234u); // 8006CFF8
  c->r[8]=R32(c->r[4]+0x00000238u); // 8006CFFC
  c->r[7]=R32(c->r[4]+0x0000023Cu); // 8006D000
  c->r[6]=R32(c->r[4]+0x00000240u); // 8006D004
  c->r[5]=R32(c->r[4]+0x00000244u); // 8006D008
  c->r[0]=R32(c->r[4]+0x00000248u); // 8006D00C
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006D010
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006D014
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006D018
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006D01C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006D020
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006D024
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D028
  return; // 8006D02C
L_8006D030:;
  cmpu(c,0,c->r[6],0x00000005u); // 8006D030
  if (crb(c,0)) { goto L_8006D074; } // 8006D034
  c->r[10]=R32(c->r[4]+0x00000230u); // 8006D038
  c->r[9]=R32(c->r[4]+0x00000234u); // 8006D03C
  c->r[8]=R32(c->r[4]+0x00000238u); // 8006D040
  c->r[7]=R32(c->r[4]+0x0000023Cu); // 8006D044
  c->r[6]=R32(c->r[4]+0x00000240u); // 8006D048
  c->r[5]=R32(c->r[4]+0x00000244u); // 8006D04C
  c->r[0]=R32(c->r[4]+0x00000248u); // 8006D050
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006D054
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006D058
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006D05C
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006D060
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006D064
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006D068
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D06C
  return; // 8006D070
L_8006D074:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)140); // 8006D074
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 8006D078
  c->r[4]=c->r[4]+c->r[5]; // 8006D07C
  c->r[10]=c->r[4]+c->r[0]; // 8006D080
  c->r[9]=R32(c->r[10]+0x00000230u); // 8006D084
  c->r[8]=R32(c->r[10]+0x00000234u); // 8006D088
  c->r[7]=R32(c->r[10]+0x00000238u); // 8006D08C
  c->r[6]=R32(c->r[10]+0x0000023Cu); // 8006D090
  c->r[5]=R32(c->r[10]+0x00000240u); // 8006D094
  c->r[4]=R32(c->r[10]+0x00000244u); // 8006D098
  c->r[0]=R32(c->r[10]+0x00000248u); // 8006D09C
  W32(c->r[3]+0x00000000u,c->r[9]); // 8006D0A0
  W32(c->r[3]+0x00000004u,c->r[8]); // 8006D0A4
  W32(c->r[3]+0x00000008u,c->r[7]); // 8006D0A8
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8006D0AC
  W32(c->r[3]+0x00000010u,c->r[5]); // 8006D0B0
  W32(c->r[3]+0x00000014u,c->r[4]); // 8006D0B4
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D0B8
  return; // 8006D0BC
}

// setStage__Q34gbla5param13LARankingDataFQ34gbla5param9_la_stageiQ44gbla5param13LARankingData13RANKING_ENTRY
void f_8006D0C0(Ctx* __restrict c) {
  trace_call(0x8006D0C0u);
  cmpu(c,0,c->r[4],0x00000005u); // 8006D0C0
  if (!crb(c,0)) return; // 8006D0C4
  cmpu(c,0,c->r[5],0x00000005u); // 8006D0C8
  if (!crb(c,0)) return; // 8006D0CC
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)140); // 8006D0D0
  c->r[7]=R32(c->r[6]+0x00000000u); // 8006D0D4
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8006D0D8
  c->r[0]=c->r[3]+c->r[0]; // 8006D0DC
  c->r[4]=c->r[0]+c->r[4]; // 8006D0E0
  W32(c->r[4]+0x00000230u,c->r[7]); // 8006D0E4
  c->r[0]=R32(c->r[6]+0x00000004u); // 8006D0E8
  W32(c->r[4]+0x00000234u,c->r[0]); // 8006D0EC
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8006D0F0
  c->r[3]=R32(c->r[6]+0x00000008u); // 8006D0F4
  W32(c->r[4]+0x00000238u,c->r[3]); // 8006D0F8
  W32(c->r[4]+0x0000023Cu,c->r[0]); // 8006D0FC
  c->r[0]=R8(c->r[6]+0x00000010u); // 8006D100
  W8(c->r[4]+0x00000240u,c->r[0]); // 8006D104
  c->r[0]=R32(c->r[6]+0x00000015u); // 8006D108
  c->r[3]=R32(c->r[6]+0x00000011u); // 8006D10C
  W32(c->r[4]+0x00000241u,c->r[3]); // 8006D110
  W32(c->r[4]+0x00000245u,c->r[0]); // 8006D114
  c->r[0]=R8(c->r[6]+0x00000019u); // 8006D118
  W8(c->r[4]+0x00000249u,c->r[0]); // 8006D11C
  c->r[0]=R8(c->r[6]+0x0000001Au); // 8006D120
  W8(c->r[4]+0x0000024Au,c->r[0]); // 8006D124
  c->r[0]=R8(c->r[6]+0x0000001Bu); // 8006D128
  W8(c->r[4]+0x0000024Bu,c->r[0]); // 8006D12C
  return; // 8006D130
}

// init__Q44gbla5param13LARankingData13RANKING_ENTRYFv
void f_8006D134(Ctx* __restrict c) {
  trace_call(0x8006D134u);
  c->r[0]=0u+0x00000000u; // 8006D134
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006D138
  W32(c->r[3]+0x00000004u,c->r[0]); // 8006D13C
  W8(c->r[3]+0x00000008u,c->r[0]); // 8006D140
  W8(c->r[3]+0x00000009u,c->r[0]); // 8006D144
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8006D148
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8006D14C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8006D150
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8006D154
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8006D158
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8006D15C
  W8(c->r[3]+0x00000010u,c->r[0]); // 8006D160
  W8(c->r[3]+0x00000011u,c->r[0]); // 8006D164
  W8(c->r[3]+0x00000012u,c->r[0]); // 8006D168
  W8(c->r[3]+0x00000013u,c->r[0]); // 8006D16C
  W8(c->r[3]+0x00000014u,c->r[0]); // 8006D170
  W8(c->r[3]+0x00000015u,c->r[0]); // 8006D174
  W8(c->r[3]+0x00000016u,c->r[0]); // 8006D178
  W8(c->r[3]+0x00000017u,c->r[0]); // 8006D17C
  W8(c->r[3]+0x00000018u,c->r[0]); // 8006D180
  W8(c->r[3]+0x00000019u,c->r[0]); // 8006D184
  W8(c->r[3]+0x0000001Au,c->r[0]); // 8006D188
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 8006D18C
  return; // 8006D190
}

// toBinary__Q44gbla5param13LARankingData13RANKING_ENTRYCFRQ24Sega13OBinaryStream
void f_8006D194(Ctx* __restrict c) {
  trace_call(0x8006D194u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D194
  c->r[0]=c->lr; // 8006D198
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006D19C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006D1A0
  c->r[28]=c->r[4]|c->r[4]; // 8006D1A4
  c->r[4]=R32(c->r[3]+0x00000000u); // 8006D1A8
  c->r[27]=c->r[3]|c->r[3]; // 8006D1AC
  c->r[3]=c->r[28]|c->r[28]; // 8006D1B0
  c->lr=0x8006D1B8u; f_8007266C(c); // 8006D1B4
  c->r[4]=R32(c->r[27]+0x00000004u); // 8006D1B8
  c->r[3]=c->r[28]|c->r[28]; // 8006D1BC
  c->lr=0x8006D1C4u; f_80072670(c); // 8006D1C0
  c->r[31]=0u+0x00000000u; // 8006D1C4
L_8006D1C8:;
  c->r[4]=c->r[27]+c->r[31]; // 8006D1C8
  c->r[3]=c->r[28]|c->r[28]; // 8006D1CC
  c->r[4]=R8(c->r[4]+0x00000008u); // 8006D1D0
  c->lr=0x8006D1D8u; f_80206F58(c); // 8006D1D4
  c->r[31]=c->r[31]+0x00000001u; // 8006D1D8
  cmpu(c,0,c->r[31],0x00000009u); // 8006D1DC
  if (crb(c,0)) { IRQCHK(c); goto L_8006D1C8; } // 8006D1E0
  c->r[31]=c->r[27]|c->r[27]; // 8006D1E4
  c->r[30]=0u+0x00000000u; // 8006D1E8
L_8006D1EC:;
  c->r[29]=0u+0x00000000u; // 8006D1EC
L_8006D1F0:;
  c->r[4]=c->r[31]+c->r[29]; // 8006D1F0
  c->r[3]=c->r[28]|c->r[28]; // 8006D1F4
  c->r[4]=R8(c->r[4]+0x00000011u); // 8006D1F8
  c->lr=0x8006D200u; f_80206F58(c); // 8006D1FC
  c->r[29]=c->r[29]+0x00000001u; // 8006D200
  cmpu(c,0,c->r[29],0x00000004u); // 8006D204
  if (crb(c,0)) { IRQCHK(c); goto L_8006D1F0; } // 8006D208
  c->r[30]=c->r[30]+0x00000001u; // 8006D20C
  c->r[31]=c->r[31]+0x00000004u; // 8006D210
  cmps(c,0,(int32_t)c->r[30],2); // 8006D214
  if (crb(c,0)) { IRQCHK(c); goto L_8006D1EC; } // 8006D218
  c->r[4]=R8(c->r[27]+0x00000019u); // 8006D21C
  c->r[3]=c->r[28]|c->r[28]; // 8006D220
  c->lr=0x8006D228u; f_80206F58(c); // 8006D224
  c->r[0]=R8(c->r[27]+0x0000001Au); // 8006D228
  c->r[3]=c->r[28]|c->r[28]; // 8006D22C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006D230
  c->lr=0x8006D238u; f_80206EC0(c); // 8006D234
  c->r[0]=R8(c->r[27]+0x0000001Bu); // 8006D238
  c->r[3]=c->r[28]|c->r[28]; // 8006D23C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006D240
  c->lr=0x8006D248u; f_80206EC0(c); // 8006D244
  c->r[3]=c->r[28]|c->r[28]; // 8006D248
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006D24C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006D250
  c->lr=c->r[0]; // 8006D254
  c->r[1]=c->r[1]+0x00000020u; // 8006D258
  return; // 8006D25C
}

// toBinary__Q34gbla5param13LARankingDataCFRQ24Sega13OBinaryStream
void f_8006D260(Ctx* __restrict c) {
  trace_call(0x8006D260u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D260
  c->r[0]=c->lr; // 8006D264
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006D268
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006D26C
  c->r[27]=c->r[4]|c->r[4]; // 8006D270
  c->r[26]=c->r[3]|c->r[3]; // 8006D274
  c->r[3]=c->r[27]|c->r[27]; // 8006D278
  c->lr=0x8006D280u; f_80207484(c); // 8006D27C
  c->r[30]=c->r[26]|c->r[26]; // 8006D280
  c->r[31]=0u+0x00000000u; // 8006D284
L_8006D288:;
  c->r[3]=c->r[30]|c->r[30]; // 8006D288
  c->r[4]=c->r[27]|c->r[27]; // 8006D28C
  c->lr=0x8006D294u; f_8006D194(c); // 8006D290
  c->r[31]=c->r[31]+0x00000001u; // 8006D294
  c->r[30]=c->r[30]+0x0000001Cu; // 8006D298
  cmpu(c,0,c->r[31],0x0000000Au); // 8006D29C
  if (crb(c,0)) { IRQCHK(c); goto L_8006D288; } // 8006D2A0
  c->r[30]=c->r[26]+0x00000118u; // 8006D2A4
  c->r[31]=0u+0x00000000u; // 8006D2A8
L_8006D2AC:;
  c->r[3]=c->r[30]|c->r[30]; // 8006D2AC
  c->r[4]=c->r[27]|c->r[27]; // 8006D2B0
  c->lr=0x8006D2B8u; f_8006D194(c); // 8006D2B4
  c->r[31]=c->r[31]+0x00000001u; // 8006D2B8
  c->r[30]=c->r[30]+0x0000001Cu; // 8006D2BC
  cmpu(c,0,c->r[31],0x0000000Au); // 8006D2C0
  if (crb(c,0)) { IRQCHK(c); goto L_8006D2AC; } // 8006D2C4
  c->r[29]=0u+0x00000000u; // 8006D2C8
  c->r[31]=0u+0x00000000u; // 8006D2CC
L_8006D2D0:;
  c->r[30]=c->r[26]+0x00000230u; // 8006D2D0
  c->r[28]=0u+0x00000000u; // 8006D2D4
L_8006D2D8:;
  c->r[4]=c->r[27]|c->r[27]; // 8006D2D8
  c->r[3]=c->r[30]+c->r[31]; // 8006D2DC
  c->lr=0x8006D2E4u; f_8006D194(c); // 8006D2E0
  c->r[28]=c->r[28]+0x00000001u; // 8006D2E4
  c->r[30]=c->r[30]+0x0000008Cu; // 8006D2E8
  cmpu(c,0,c->r[28],0x00000005u); // 8006D2EC
  if (crb(c,0)) { IRQCHK(c); goto L_8006D2D8; } // 8006D2F0
  c->r[29]=c->r[29]+0x00000001u; // 8006D2F4
  c->r[31]=c->r[31]+0x0000001Cu; // 8006D2F8
  cmpu(c,0,c->r[29],0x00000005u); // 8006D2FC
  if (crb(c,0)) { IRQCHK(c); goto L_8006D2D0; } // 8006D300
  c->r[3]=c->r[27]|c->r[27]; // 8006D304
  c->lr=0x8006D30Cu; f_80207484(c); // 8006D308
  c->r[3]=c->r[27]|c->r[27]; // 8006D30C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006D310
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006D314
  c->lr=c->r[0]; // 8006D318
  c->r[1]=c->r[1]+0x00000020u; // 8006D31C
  return; // 8006D320
}

// fromBinary__Q44gbla5param13LARankingData13RANKING_ENTRYFRQ24Sega16IRefBinaryStream
void f_8006D324(Ctx* __restrict c) {
  trace_call(0x8006D324u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D324
  c->r[0]=c->lr; // 8006D328
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006D32C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006D330
  c->r[27]=c->r[3]|c->r[3]; // 8006D334
  c->r[28]=c->r[4]|c->r[4]; // 8006D338
  c->r[3]=c->r[28]|c->r[28]; // 8006D33C
  c->r[4]=c->r[27]|c->r[27]; // 8006D340
  c->lr=0x8006D348u; f_80072674(c); // 8006D344
  c->r[3]=c->r[28]|c->r[28]; // 8006D348
  c->r[4]=c->r[27]+0x00000004u; // 8006D34C
  c->lr=0x8006D354u; f_80072678(c); // 8006D350
  c->r[31]=0u+0x00000000u; // 8006D354
L_8006D358:;
  c->r[4]=c->r[27]+c->r[31]; // 8006D358
  c->r[3]=c->r[28]|c->r[28]; // 8006D35C
  c->r[4]=c->r[4]+0x00000008u; // 8006D360
  c->lr=0x8006D368u; f_8020A4E8(c); // 8006D364
  c->r[31]=c->r[31]+0x00000001u; // 8006D368
  cmpu(c,0,c->r[31],0x00000009u); // 8006D36C
  if (crb(c,0)) { IRQCHK(c); goto L_8006D358; } // 8006D370
  c->r[31]=c->r[27]+0x00000011u; // 8006D374
  c->r[30]=0u+0x00000000u; // 8006D378
L_8006D37C:;
  c->r[29]=0u+0x00000000u; // 8006D37C
L_8006D380:;
  c->r[3]=c->r[28]|c->r[28]; // 8006D380
  c->r[4]=c->r[31]+c->r[29]; // 8006D384
  c->lr=0x8006D38Cu; f_8020A4E8(c); // 8006D388
  c->r[29]=c->r[29]+0x00000001u; // 8006D38C
  cmpu(c,0,c->r[29],0x00000004u); // 8006D390
  if (crb(c,0)) { IRQCHK(c); goto L_8006D380; } // 8006D394
  c->r[30]=c->r[30]+0x00000001u; // 8006D398
  c->r[31]=c->r[31]+0x00000004u; // 8006D39C
  cmps(c,0,(int32_t)c->r[30],2); // 8006D3A0
  if (crb(c,0)) { IRQCHK(c); goto L_8006D37C; } // 8006D3A4
  c->r[3]=c->r[28]|c->r[28]; // 8006D3A8
  c->r[4]=c->r[27]+0x00000019u; // 8006D3AC
  c->lr=0x8006D3B4u; f_8020A4E8(c); // 8006D3B0
  c->r[3]=c->r[28]|c->r[28]; // 8006D3B4
  c->r[4]=c->r[27]+0x0000001Au; // 8006D3B8
  c->lr=0x8006D3C0u; f_8020A4AC(c); // 8006D3BC
  c->r[3]=c->r[28]|c->r[28]; // 8006D3C0
  c->r[4]=c->r[27]+0x0000001Bu; // 8006D3C4
  c->lr=0x8006D3CCu; f_8020A4AC(c); // 8006D3C8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006D3CC
  c->r[3]=0u+0x00000001u; // 8006D3D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006D3D4
  c->lr=c->r[0]; // 8006D3D8
  c->r[1]=c->r[1]+0x00000020u; // 8006D3DC
  return; // 8006D3E0
}

// fromBinary__Q34gbla5param13LARankingDataFRQ24Sega16IRefBinaryStream
void f_8006D3E4(Ctx* __restrict c) {
  trace_call(0x8006D3E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D3E4
  c->r[0]=c->lr; // 8006D3E8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006D3EC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006D3F0
  c->r[27]=c->r[4]|c->r[4]; // 8006D3F4
  c->r[26]=c->r[3]|c->r[3]; // 8006D3F8
  c->r[3]=c->r[27]|c->r[27]; // 8006D3FC
  c->lr=0x8006D404u; f_8020A7A4(c); // 8006D400
  c->r[30]=c->r[26]|c->r[26]; // 8006D404
  c->r[31]=0u+0x00000000u; // 8006D408
L_8006D40C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006D40C
  c->r[4]=c->r[27]|c->r[27]; // 8006D410
  c->lr=0x8006D418u; f_8006D324(c); // 8006D414
  c->r[31]=c->r[31]+0x00000001u; // 8006D418
  c->r[30]=c->r[30]+0x0000001Cu; // 8006D41C
  cmpu(c,0,c->r[31],0x0000000Au); // 8006D420
  if (crb(c,0)) { IRQCHK(c); goto L_8006D40C; } // 8006D424
  c->r[30]=c->r[26]+0x00000118u; // 8006D428
  c->r[31]=0u+0x00000000u; // 8006D42C
L_8006D430:;
  c->r[3]=c->r[30]|c->r[30]; // 8006D430
  c->r[4]=c->r[27]|c->r[27]; // 8006D434
  c->lr=0x8006D43Cu; f_8006D324(c); // 8006D438
  c->r[31]=c->r[31]+0x00000001u; // 8006D43C
  c->r[30]=c->r[30]+0x0000001Cu; // 8006D440
  cmpu(c,0,c->r[31],0x0000000Au); // 8006D444
  if (crb(c,0)) { IRQCHK(c); goto L_8006D430; } // 8006D448
  c->r[29]=0u+0x00000000u; // 8006D44C
  c->r[31]=0u+0x00000000u; // 8006D450
L_8006D454:;
  c->r[30]=c->r[26]+0x00000230u; // 8006D454
  c->r[28]=0u+0x00000000u; // 8006D458
L_8006D45C:;
  c->r[4]=c->r[27]|c->r[27]; // 8006D45C
  c->r[3]=c->r[30]+c->r[31]; // 8006D460
  c->lr=0x8006D468u; f_8006D324(c); // 8006D464
  c->r[28]=c->r[28]+0x00000001u; // 8006D468
  c->r[30]=c->r[30]+0x0000008Cu; // 8006D46C
  cmpu(c,0,c->r[28],0x00000005u); // 8006D470
  if (crb(c,0)) { IRQCHK(c); goto L_8006D45C; } // 8006D474
  c->r[29]=c->r[29]+0x00000001u; // 8006D478
  c->r[31]=c->r[31]+0x0000001Cu; // 8006D47C
  cmpu(c,0,c->r[29],0x00000005u); // 8006D480
  if (crb(c,0)) { IRQCHK(c); goto L_8006D454; } // 8006D484
  c->r[3]=c->r[27]|c->r[27]; // 8006D488
  c->lr=0x8006D490u; f_8020A7A4(c); // 8006D48C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006D490
  c->r[3]=0u+0x00000001u; // 8006D494
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006D498
  c->lr=c->r[0]; // 8006D49C
  c->r[1]=c->r[1]+0x00000020u; // 8006D4A0
  return; // 8006D4A4
}

// __ct__Q34gbla5param13GBRankingDataFv
void f_8006D4A8(Ctx* __restrict c) {
  trace_call(0x8006D4A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D4A8
  c->r[0]=c->lr; // 8006D4AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006D4B0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006D4B4
  c->r[31]=c->r[3]|c->r[3]; // 8006D4B8
  c->lr=0x8006D4C0u; f_8006D4D8(c); // 8006D4BC
  c->r[3]=c->r[31]|c->r[31]; // 8006D4C0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006D4C4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006D4C8
  c->lr=c->r[0]; // 8006D4CC
  c->r[1]=c->r[1]+0x00000010u; // 8006D4D0
  return; // 8006D4D4
}

// init__Q34gbla5param13GBRankingDataFv
void f_8006D4D8(Ctx* __restrict c) {
  trace_call(0x8006D4D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D4D8
  c->r[0]=c->lr; // 8006D4DC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006D4E0
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006D4E4
  c->r[27]=c->r[3]|c->r[3]; // 8006D4E8
  c->r[29]=0u+0x00000000u; // 8006D4EC
  c->r[30]=c->r[27]|c->r[27]; // 8006D4F0
L_8006D4F4:;
  c->r[31]=c->r[30]|c->r[30]; // 8006D4F4
  c->r[28]=0u+0x00000000u; // 8006D4F8
L_8006D4FC:;
  c->r[3]=c->r[31]|c->r[31]; // 8006D4FC
  c->lr=0x8006D504u; f_8006D924(c); // 8006D500
  c->r[28]=c->r[28]+0x00000001u; // 8006D504
  c->r[31]=c->r[31]+0x0000001Cu; // 8006D508
  cmpu(c,0,c->r[28],0x0000000Au); // 8006D50C
  if (crb(c,0)) { IRQCHK(c); goto L_8006D4FC; } // 8006D510
  c->r[29]=c->r[29]+0x00000001u; // 8006D514
  c->r[30]=c->r[30]+0x00000118u; // 8006D518
  cmpu(c,0,c->r[29],0x00000003u); // 8006D51C
  if (crb(c,0)) { IRQCHK(c); goto L_8006D4F4; } // 8006D520
  c->r[31]=c->r[27]+0x00000348u; // 8006D524
  c->r[28]=0u+0x00000000u; // 8006D528
L_8006D52C:;
  c->r[30]=c->r[31]|c->r[31]; // 8006D52C
  c->r[29]=0u+0x00000000u; // 8006D530
L_8006D534:;
  c->r[3]=c->r[30]|c->r[30]; // 8006D534
  c->lr=0x8006D53Cu; f_8006D924(c); // 8006D538
  c->r[29]=c->r[29]+0x00000001u; // 8006D53C
  c->r[30]=c->r[30]+0x0000001Cu; // 8006D540
  cmpu(c,0,c->r[29],0x00000005u); // 8006D544
  if (crb(c,0)) { IRQCHK(c); goto L_8006D534; } // 8006D548
  c->r[28]=c->r[28]+0x00000001u; // 8006D54C
  c->r[31]=c->r[31]+0x0000008Cu; // 8006D550
  cmpu(c,0,c->r[28],0x00000003u); // 8006D554
  if (crb(c,0)) { IRQCHK(c); goto L_8006D52C; } // 8006D558
  c->r[0]=0u+0x00000005u; // 8006D55C
  c->r[3]=0u+0x00000000u; // 8006D560
  W32(c->r[27]+0x000004ECu,c->r[3]); // 8006D564
  W32(c->r[27]+0x000004F0u,c->r[3]); // 8006D568
  W32(c->r[27]+0x000004F4u,c->r[3]); // 8006D56C
  W32(c->r[27]+0x000004F8u,c->r[3]); // 8006D570
  c->ctr=c->r[0]; // 8006D574
L_8006D578:;
  W32(c->r[27]+0x000004FCu,c->r[3]); // 8006D578
  W32(c->r[27]+0x000005C4u,c->r[3]); // 8006D57C
  W32(c->r[27]+0x00000500u,c->r[3]); // 8006D580
  W32(c->r[27]+0x000005C8u,c->r[3]); // 8006D584
  W32(c->r[27]+0x00000504u,c->r[3]); // 8006D588
  W32(c->r[27]+0x000005CCu,c->r[3]); // 8006D58C
  W32(c->r[27]+0x00000508u,c->r[3]); // 8006D590
  W32(c->r[27]+0x000005D0u,c->r[3]); // 8006D594
  W32(c->r[27]+0x0000050Cu,c->r[3]); // 8006D598
  W32(c->r[27]+0x000005D4u,c->r[3]); // 8006D59C
  W32(c->r[27]+0x00000510u,c->r[3]); // 8006D5A0
  W32(c->r[27]+0x000005D8u,c->r[3]); // 8006D5A4
  W32(c->r[27]+0x00000514u,c->r[3]); // 8006D5A8
  W32(c->r[27]+0x000005DCu,c->r[3]); // 8006D5AC
  W32(c->r[27]+0x00000518u,c->r[3]); // 8006D5B0
  W32(c->r[27]+0x000005E0u,c->r[3]); // 8006D5B4
  W32(c->r[27]+0x0000051Cu,c->r[3]); // 8006D5B8
  W32(c->r[27]+0x000005E4u,c->r[3]); // 8006D5BC
  W32(c->r[27]+0x00000520u,c->r[3]); // 8006D5C0
  W32(c->r[27]+0x000005E8u,c->r[3]); // 8006D5C4
  c->r[27]=c->r[27]+0x00000028u; // 8006D5C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006D578; } // 8006D5CC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006D5D0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006D5D4
  c->lr=c->r[0]; // 8006D5D8
  c->r[1]=c->r[1]+0x00000020u; // 8006D5DC
  return; // 8006D5E0
}

// getStage__Q34gbla5param13GBRankingDataCFQ34gbla5param11_gb_missioni
void f_8006D5E4(Ctx* __restrict c) {
  trace_call(0x8006D5E4u);
  cmpu(c,0,c->r[5],0x00000003u); // 8006D5E4
  if (crb(c,0)) { goto L_8006D628; } // 8006D5E8
  c->r[10]=R32(c->r[4]+0x00000000u); // 8006D5EC
  c->r[9]=R32(c->r[4]+0x00000004u); // 8006D5F0
  c->r[8]=R32(c->r[4]+0x00000008u); // 8006D5F4
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 8006D5F8
  c->r[6]=R32(c->r[4]+0x00000010u); // 8006D5FC
  c->r[5]=R32(c->r[4]+0x00000014u); // 8006D600
  c->r[0]=R32(c->r[4]+0x00000018u); // 8006D604
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006D608
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006D60C
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006D610
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006D614
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006D618
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006D61C
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D620
  return; // 8006D624
L_8006D628:;
  cmpu(c,0,c->r[6],0x0000000Au); // 8006D628
  if (crb(c,0)) { goto L_8006D66C; } // 8006D62C
  c->r[10]=R32(c->r[4]+0x00000000u); // 8006D630
  c->r[9]=R32(c->r[4]+0x00000004u); // 8006D634
  c->r[8]=R32(c->r[4]+0x00000008u); // 8006D638
  c->r[7]=R32(c->r[4]+0x0000000Cu); // 8006D63C
  c->r[6]=R32(c->r[4]+0x00000010u); // 8006D640
  c->r[5]=R32(c->r[4]+0x00000014u); // 8006D644
  c->r[0]=R32(c->r[4]+0x00000018u); // 8006D648
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006D64C
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006D650
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006D654
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006D658
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006D65C
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006D660
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D664
  return; // 8006D668
L_8006D66C:;
  c->r[0]=(uint32_t)((int32_t)c->r[5]*(int32_t)280); // 8006D66C
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 8006D670
  c->r[0]=c->r[4]+c->r[0]; // 8006D674
  c->r[10]=c->r[5]+c->r[0]; // 8006D678
  c->r[9]=R32(c->r[5]+c->r[0]); // 8006D67C
  c->r[8]=R32(c->r[10]+0x00000004u); // 8006D680
  c->r[7]=R32(c->r[10]+0x00000008u); // 8006D684
  c->r[6]=R32(c->r[10]+0x0000000Cu); // 8006D688
  c->r[5]=R32(c->r[10]+0x00000010u); // 8006D68C
  c->r[4]=R32(c->r[10]+0x00000014u); // 8006D690
  c->r[0]=R32(c->r[10]+0x00000018u); // 8006D694
  W32(c->r[3]+0x00000000u,c->r[9]); // 8006D698
  W32(c->r[3]+0x00000004u,c->r[8]); // 8006D69C
  W32(c->r[3]+0x00000008u,c->r[7]); // 8006D6A0
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8006D6A4
  W32(c->r[3]+0x00000010u,c->r[5]); // 8006D6A8
  W32(c->r[3]+0x00000014u,c->r[4]); // 8006D6AC
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D6B0
  return; // 8006D6B4
}

// setStage__Q34gbla5param13GBRankingDataFQ34gbla5param11_gb_missioniQ44gbla5param13GBRankingData13RANKING_ENTRY
void f_8006D6B8(Ctx* __restrict c) {
  trace_call(0x8006D6B8u);
  cmpu(c,0,c->r[4],0x00000003u); // 8006D6B8
  if (!crb(c,0)) return; // 8006D6BC
  cmpu(c,0,c->r[5],0x0000000Au); // 8006D6C0
  if (!crb(c,0)) return; // 8006D6C4
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)280); // 8006D6C8
  c->r[4]=R32(c->r[6]+0x00000000u); // 8006D6CC
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8006D6D0
  c->r[0]=c->r[3]+c->r[0]; // 8006D6D4
  W32(c->r[5]+c->r[0],c->r[4]); // 8006D6D8
  c->r[4]=c->r[0]+c->r[5]; // 8006D6DC
  c->r[0]=R32(c->r[6]+0x00000004u); // 8006D6E0
  W32(c->r[4]+0x00000004u,c->r[0]); // 8006D6E4
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8006D6E8
  c->r[3]=R32(c->r[6]+0x00000008u); // 8006D6EC
  W32(c->r[4]+0x00000008u,c->r[3]); // 8006D6F0
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 8006D6F4
  c->r[0]=R8(c->r[6]+0x00000010u); // 8006D6F8
  W8(c->r[4]+0x00000010u,c->r[0]); // 8006D6FC
  c->r[0]=R32(c->r[6]+0x00000011u); // 8006D700
  W32(c->r[4]+0x00000011u,c->r[0]); // 8006D704
  c->r[0]=R8(c->r[6]+0x00000015u); // 8006D708
  W8(c->r[4]+0x00000015u,c->r[0]); // 8006D70C
  c->r[0]=R32(c->r[6]+0x00000016u); // 8006D710
  W32(c->r[4]+0x00000016u,c->r[0]); // 8006D714
  c->r[0]=R8(c->r[6]+0x0000001Au); // 8006D718
  W8(c->r[4]+0x0000001Au,c->r[0]); // 8006D71C
  c->r[0]=R8(c->r[6]+0x0000001Bu); // 8006D720
  W8(c->r[4]+0x0000001Bu,c->r[0]); // 8006D724
  return; // 8006D728
}

// getStageMonthly__Q34gbla5param13GBRankingDataCFQ34gbla5param11_gb_missioni
void f_8006D72C(Ctx* __restrict c) {
  trace_call(0x8006D72Cu);
  cmpu(c,0,c->r[5],0x00000003u); // 8006D72C
  if (crb(c,0)) { goto L_8006D770; } // 8006D730
  c->r[10]=R32(c->r[4]+0x00000348u); // 8006D734
  c->r[9]=R32(c->r[4]+0x0000034Cu); // 8006D738
  c->r[8]=R32(c->r[4]+0x00000350u); // 8006D73C
  c->r[7]=R32(c->r[4]+0x00000354u); // 8006D740
  c->r[6]=R32(c->r[4]+0x00000358u); // 8006D744
  c->r[5]=R32(c->r[4]+0x0000035Cu); // 8006D748
  c->r[0]=R32(c->r[4]+0x00000360u); // 8006D74C
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006D750
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006D754
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006D758
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006D75C
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006D760
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006D764
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D768
  return; // 8006D76C
L_8006D770:;
  cmpu(c,0,c->r[6],0x00000005u); // 8006D770
  if (crb(c,0)) { goto L_8006D7B4; } // 8006D774
  c->r[10]=R32(c->r[4]+0x00000348u); // 8006D778
  c->r[9]=R32(c->r[4]+0x0000034Cu); // 8006D77C
  c->r[8]=R32(c->r[4]+0x00000350u); // 8006D780
  c->r[7]=R32(c->r[4]+0x00000354u); // 8006D784
  c->r[6]=R32(c->r[4]+0x00000358u); // 8006D788
  c->r[5]=R32(c->r[4]+0x0000035Cu); // 8006D78C
  c->r[0]=R32(c->r[4]+0x00000360u); // 8006D790
  W32(c->r[3]+0x00000000u,c->r[10]); // 8006D794
  W32(c->r[3]+0x00000004u,c->r[9]); // 8006D798
  W32(c->r[3]+0x00000008u,c->r[8]); // 8006D79C
  W32(c->r[3]+0x0000000Cu,c->r[7]); // 8006D7A0
  W32(c->r[3]+0x00000010u,c->r[6]); // 8006D7A4
  W32(c->r[3]+0x00000014u,c->r[5]); // 8006D7A8
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D7AC
  return; // 8006D7B0
L_8006D7B4:;
  c->r[5]=(uint32_t)((int32_t)c->r[5]*(int32_t)140); // 8006D7B4
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)28); // 8006D7B8
  c->r[4]=c->r[4]+c->r[5]; // 8006D7BC
  c->r[10]=c->r[4]+c->r[0]; // 8006D7C0
  c->r[9]=R32(c->r[10]+0x00000348u); // 8006D7C4
  c->r[8]=R32(c->r[10]+0x0000034Cu); // 8006D7C8
  c->r[7]=R32(c->r[10]+0x00000350u); // 8006D7CC
  c->r[6]=R32(c->r[10]+0x00000354u); // 8006D7D0
  c->r[5]=R32(c->r[10]+0x00000358u); // 8006D7D4
  c->r[4]=R32(c->r[10]+0x0000035Cu); // 8006D7D8
  c->r[0]=R32(c->r[10]+0x00000360u); // 8006D7DC
  W32(c->r[3]+0x00000000u,c->r[9]); // 8006D7E0
  W32(c->r[3]+0x00000004u,c->r[8]); // 8006D7E4
  W32(c->r[3]+0x00000008u,c->r[7]); // 8006D7E8
  W32(c->r[3]+0x0000000Cu,c->r[6]); // 8006D7EC
  W32(c->r[3]+0x00000010u,c->r[5]); // 8006D7F0
  W32(c->r[3]+0x00000014u,c->r[4]); // 8006D7F4
  W32(c->r[3]+0x00000018u,c->r[0]); // 8006D7F8
  return; // 8006D7FC
}

// setStageMonthly__Q34gbla5param13GBRankingDataFQ34gbla5param11_gb_missioniQ44gbla5param13GBRankingData13RANKING_ENTRY
void f_8006D800(Ctx* __restrict c) {
  trace_call(0x8006D800u);
  cmpu(c,0,c->r[4],0x00000003u); // 8006D800
  if (!crb(c,0)) return; // 8006D804
  cmpu(c,0,c->r[5],0x00000005u); // 8006D808
  if (!crb(c,0)) return; // 8006D80C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)140); // 8006D810
  c->r[7]=R32(c->r[6]+0x00000000u); // 8006D814
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)28); // 8006D818
  c->r[0]=c->r[3]+c->r[0]; // 8006D81C
  c->r[4]=c->r[0]+c->r[4]; // 8006D820
  W32(c->r[4]+0x00000348u,c->r[7]); // 8006D824
  c->r[0]=R32(c->r[6]+0x00000004u); // 8006D828
  W32(c->r[4]+0x0000034Cu,c->r[0]); // 8006D82C
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 8006D830
  c->r[3]=R32(c->r[6]+0x00000008u); // 8006D834
  W32(c->r[4]+0x00000350u,c->r[3]); // 8006D838
  W32(c->r[4]+0x00000354u,c->r[0]); // 8006D83C
  c->r[0]=R8(c->r[6]+0x00000010u); // 8006D840
  W8(c->r[4]+0x00000358u,c->r[0]); // 8006D844
  c->r[0]=R32(c->r[6]+0x00000011u); // 8006D848
  W32(c->r[4]+0x00000359u,c->r[0]); // 8006D84C
  c->r[0]=R8(c->r[6]+0x00000015u); // 8006D850
  W8(c->r[4]+0x0000035Du,c->r[0]); // 8006D854
  c->r[0]=R32(c->r[6]+0x00000016u); // 8006D858
  W32(c->r[4]+0x0000035Eu,c->r[0]); // 8006D85C
  c->r[0]=R8(c->r[6]+0x0000001Au); // 8006D860
  W8(c->r[4]+0x00000362u,c->r[0]); // 8006D864
  c->r[0]=R8(c->r[6]+0x0000001Bu); // 8006D868
  W8(c->r[4]+0x00000363u,c->r[0]); // 8006D86C
  return; // 8006D870
}

// getEasyClearCount__Q34gbla5param13GBRankingDataCFv
void f_8006D874(Ctx* __restrict c) {
  trace_call(0x8006D874u);
  c->r[3]=R32(c->r[3]+0x000004ECu); // 8006D874
  return; // 8006D878
}

// setEasyClearCount__Q34gbla5param13GBRankingDataFUl
void f_8006D87C(Ctx* __restrict c) {
  trace_call(0x8006D87Cu);
  W32(c->r[3]+0x000004F0u,c->r[4]); // 8006D87C
  return; // 8006D880
}

// getHardClearCount__Q34gbla5param13GBRankingDataCFv
void f_8006D884(Ctx* __restrict c) {
  trace_call(0x8006D884u);
  c->r[3]=R32(c->r[3]+0x000004F0u); // 8006D884
  return; // 8006D888
}

// setHardClearCount__Q34gbla5param13GBRankingDataFUl
void f_8006D88C(Ctx* __restrict c) {
  trace_call(0x8006D88Cu);
  W32(c->r[3]+0x000004F0u,c->r[4]); // 8006D88C
  return; // 8006D890
}

// getAttackPlayCount__Q34gbla5param13GBRankingDataCFv
void f_8006D894(Ctx* __restrict c) {
  trace_call(0x8006D894u);
  c->r[3]=R32(c->r[3]+0x000004F4u); // 8006D894
  return; // 8006D898
}

// setAttackPlayCount__Q34gbla5param13GBRankingDataFUl
void f_8006D89C(Ctx* __restrict c) {
  trace_call(0x8006D89Cu);
  W32(c->r[3]+0x000004F4u,c->r[4]); // 8006D89C
  return; // 8006D8A0
}

// getAttackClearCount__Q34gbla5param13GBRankingDataCFv
void f_8006D8A4(Ctx* __restrict c) {
  trace_call(0x8006D8A4u);
  c->r[3]=R32(c->r[3]+0x000004F8u); // 8006D8A4
  return; // 8006D8A8
}

// setAttackClearCount__Q34gbla5param13GBRankingDataFUl
void f_8006D8AC(Ctx* __restrict c) {
  trace_call(0x8006D8ACu);
  W32(c->r[3]+0x000004F8u,c->r[4]); // 8006D8AC
  return; // 8006D8B0
}

// getEasyHist__Q34gbla5param13GBRankingDataCFi
void f_8006D8B4(Ctx* __restrict c) {
  trace_call(0x8006D8B4u);
  cmpu(c,0,c->r[4],0x00000032u); // 8006D8B4
  if (crb(c,0)) { goto L_8006D8C4; } // 8006D8B8
  c->r[3]=0u+0x00000000u; // 8006D8BC
  return; // 8006D8C0
L_8006D8C4:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006D8C4
  c->r[3]=c->r[3]+c->r[0]; // 8006D8C8
  c->r[3]=R32(c->r[3]+0x000004FCu); // 8006D8CC
  return; // 8006D8D0
}

// setEasyHist__Q34gbla5param13GBRankingDataFii
void f_8006D8D4(Ctx* __restrict c) {
  trace_call(0x8006D8D4u);
  cmpu(c,0,c->r[4],0x00000032u); // 8006D8D4
  if (!crb(c,0)) return; // 8006D8D8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006D8DC
  c->r[3]=c->r[3]+c->r[0]; // 8006D8E0
  W32(c->r[3]+0x000004FCu,c->r[5]); // 8006D8E4
  return; // 8006D8E8
}

// getHardHist__Q34gbla5param13GBRankingDataCFi
void f_8006D8EC(Ctx* __restrict c) {
  trace_call(0x8006D8ECu);
  cmpu(c,0,c->r[4],0x00000032u); // 8006D8EC
  if (crb(c,0)) { goto L_8006D8FC; } // 8006D8F0
  c->r[3]=0u+0x00000000u; // 8006D8F4
  return; // 8006D8F8
L_8006D8FC:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006D8FC
  c->r[3]=c->r[3]+c->r[0]; // 8006D900
  c->r[3]=R32(c->r[3]+0x000005C4u); // 8006D904
  return; // 8006D908
}

// setHardHist__Q34gbla5param13GBRankingDataFii
void f_8006D90C(Ctx* __restrict c) {
  trace_call(0x8006D90Cu);
  cmpu(c,0,c->r[4],0x00000032u); // 8006D90C
  if (!crb(c,0)) return; // 8006D910
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006D914
  c->r[3]=c->r[3]+c->r[0]; // 8006D918
  W32(c->r[3]+0x000005C4u,c->r[5]); // 8006D91C
  return; // 8006D920
}

// init__Q44gbla5param13GBRankingData13RANKING_ENTRYFv
void f_8006D924(Ctx* __restrict c) {
  trace_call(0x8006D924u);
  c->r[0]=0u+0x00000000u; // 8006D924
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006D928
  W32(c->r[3]+0x00000004u,c->r[0]); // 8006D92C
  W8(c->r[3]+0x00000008u,c->r[0]); // 8006D930
  W8(c->r[3]+0x00000009u,c->r[0]); // 8006D934
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8006D938
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8006D93C
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8006D940
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8006D944
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8006D948
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8006D94C
  W8(c->r[3]+0x00000010u,c->r[0]); // 8006D950
  W8(c->r[3]+0x00000011u,c->r[0]); // 8006D954
  W8(c->r[3]+0x00000012u,c->r[0]); // 8006D958
  W8(c->r[3]+0x00000013u,c->r[0]); // 8006D95C
  W8(c->r[3]+0x00000014u,c->r[0]); // 8006D960
  W8(c->r[3]+0x00000015u,c->r[0]); // 8006D964
  W32(c->r[3]+0x00000016u,c->r[0]); // 8006D968
  W8(c->r[3]+0x0000001Au,c->r[0]); // 8006D96C
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 8006D970
  return; // 8006D974
}

// toBinary__Q34gbla5param13GBRankingDataCFRQ24Sega13OBinaryStream
void f_8006D978(Ctx* __restrict c) {
  trace_call(0x8006D978u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006D978
  c->r[0]=c->lr; // 8006D97C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8006D980
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006D984
  c->r[31]=c->r[4]|c->r[4]; // 8006D988
  c->r[30]=c->r[3]|c->r[3]; // 8006D98C
  c->r[3]=c->r[31]|c->r[31]; // 8006D990
  c->lr=0x8006D998u; f_80207484(c); // 8006D994
  c->r[27]=c->r[30]|c->r[30]; // 8006D998
  c->r[26]=0u+0x00000000u; // 8006D99C
L_8006D9A0:;
  c->r[28]=c->r[27]|c->r[27]; // 8006D9A0
  c->r[25]=0u+0x00000000u; // 8006D9A4
L_8006D9A8:;
  c->r[4]=R32(c->r[28]+0x00000000u); // 8006D9A8
  c->r[3]=c->r[31]|c->r[31]; // 8006D9AC
  c->lr=0x8006D9B4u; f_8007266C(c); // 8006D9B0
  c->r[4]=R32(c->r[28]+0x00000004u); // 8006D9B4
  c->r[3]=c->r[31]|c->r[31]; // 8006D9B8
  c->lr=0x8006D9C0u; f_80072670(c); // 8006D9BC
  c->r[29]=0u+0x00000000u; // 8006D9C0
L_8006D9C4:;
  c->r[4]=c->r[28]+c->r[29]; // 8006D9C4
  c->r[3]=c->r[31]|c->r[31]; // 8006D9C8
  c->r[4]=R8(c->r[4]+0x00000008u); // 8006D9CC
  c->lr=0x8006D9D4u; f_80206F58(c); // 8006D9D0
  c->r[29]=c->r[29]+0x00000001u; // 8006D9D4
  cmpu(c,0,c->r[29],0x00000009u); // 8006D9D8
  if (crb(c,0)) { IRQCHK(c); goto L_8006D9C4; } // 8006D9DC
  c->r[29]=0u+0x00000000u; // 8006D9E0
L_8006D9E4:;
  c->r[4]=c->r[28]+c->r[29]; // 8006D9E4
  c->r[3]=c->r[31]|c->r[31]; // 8006D9E8
  c->r[4]=R8(c->r[4]+0x00000011u); // 8006D9EC
  c->lr=0x8006D9F4u; f_80206F58(c); // 8006D9F0
  c->r[29]=c->r[29]+0x00000001u; // 8006D9F4
  cmpu(c,0,c->r[29],0x00000004u); // 8006D9F8
  if (crb(c,0)) { IRQCHK(c); goto L_8006D9E4; } // 8006D9FC
  c->r[4]=R8(c->r[28]+0x00000015u); // 8006DA00
  c->r[3]=c->r[31]|c->r[31]; // 8006DA04
  c->lr=0x8006DA0Cu; f_80206F58(c); // 8006DA08
  c->r[4]=R32(c->r[28]+0x00000016u); // 8006DA0C
  c->lr=0x8006DA14u; f_8007266C(c); // 8006DA10
  c->r[0]=R8(c->r[28]+0x0000001Au); // 8006DA14
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006DA18
  c->lr=0x8006DA20u; f_80206EC0(c); // 8006DA1C
  c->r[0]=R8(c->r[28]+0x0000001Bu); // 8006DA20
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006DA24
  c->lr=0x8006DA2Cu; f_80206EC0(c); // 8006DA28
  c->r[25]=c->r[25]+0x00000001u; // 8006DA2C
  c->r[28]=c->r[28]+0x0000001Cu; // 8006DA30
  cmpu(c,0,c->r[25],0x0000000Au); // 8006DA34
  if (crb(c,0)) { IRQCHK(c); goto L_8006D9A8; } // 8006DA38
  c->r[26]=c->r[26]+0x00000001u; // 8006DA3C
  c->r[27]=c->r[27]+0x00000118u; // 8006DA40
  cmpu(c,0,c->r[26],0x00000003u); // 8006DA44
  if (crb(c,0)) { IRQCHK(c); goto L_8006D9A0; } // 8006DA48
  c->r[28]=c->r[30]+0x00000348u; // 8006DA4C
  c->r[25]=0u+0x00000000u; // 8006DA50
L_8006DA54:;
  c->r[27]=c->r[28]|c->r[28]; // 8006DA54
  c->r[26]=0u+0x00000000u; // 8006DA58
L_8006DA5C:;
  c->r[4]=R32(c->r[27]+0x00000000u); // 8006DA5C
  c->r[3]=c->r[31]|c->r[31]; // 8006DA60
  c->lr=0x8006DA68u; f_8007266C(c); // 8006DA64
  c->r[4]=R32(c->r[27]+0x00000004u); // 8006DA68
  c->r[3]=c->r[31]|c->r[31]; // 8006DA6C
  c->lr=0x8006DA74u; f_80072670(c); // 8006DA70
  c->r[29]=0u+0x00000000u; // 8006DA74
L_8006DA78:;
  c->r[4]=c->r[27]+c->r[29]; // 8006DA78
  c->r[3]=c->r[31]|c->r[31]; // 8006DA7C
  c->r[4]=R8(c->r[4]+0x00000008u); // 8006DA80
  c->lr=0x8006DA88u; f_80206F58(c); // 8006DA84
  c->r[29]=c->r[29]+0x00000001u; // 8006DA88
  cmpu(c,0,c->r[29],0x00000009u); // 8006DA8C
  if (crb(c,0)) { IRQCHK(c); goto L_8006DA78; } // 8006DA90
  c->r[29]=0u+0x00000000u; // 8006DA94
L_8006DA98:;
  c->r[4]=c->r[27]+c->r[29]; // 8006DA98
  c->r[3]=c->r[31]|c->r[31]; // 8006DA9C
  c->r[4]=R8(c->r[4]+0x00000011u); // 8006DAA0
  c->lr=0x8006DAA8u; f_80206F58(c); // 8006DAA4
  c->r[29]=c->r[29]+0x00000001u; // 8006DAA8
  cmpu(c,0,c->r[29],0x00000004u); // 8006DAAC
  if (crb(c,0)) { IRQCHK(c); goto L_8006DA98; } // 8006DAB0
  c->r[4]=R8(c->r[27]+0x00000015u); // 8006DAB4
  c->r[3]=c->r[31]|c->r[31]; // 8006DAB8
  c->lr=0x8006DAC0u; f_80206F58(c); // 8006DABC
  c->r[4]=R32(c->r[27]+0x00000016u); // 8006DAC0
  c->lr=0x8006DAC8u; f_8007266C(c); // 8006DAC4
  c->r[0]=R8(c->r[27]+0x0000001Au); // 8006DAC8
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006DACC
  c->lr=0x8006DAD4u; f_80206EC0(c); // 8006DAD0
  c->r[0]=R8(c->r[27]+0x0000001Bu); // 8006DAD4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006DAD8
  c->lr=0x8006DAE0u; f_80206EC0(c); // 8006DADC
  c->r[26]=c->r[26]+0x00000001u; // 8006DAE0
  c->r[27]=c->r[27]+0x0000001Cu; // 8006DAE4
  cmpu(c,0,c->r[26],0x00000005u); // 8006DAE8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DA5C; } // 8006DAEC
  c->r[25]=c->r[25]+0x00000001u; // 8006DAF0
  c->r[28]=c->r[28]+0x0000008Cu; // 8006DAF4
  cmpu(c,0,c->r[25],0x00000003u); // 8006DAF8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DA54; } // 8006DAFC
  c->r[4]=R32(c->r[30]+0x000004ECu); // 8006DB00
  c->r[3]=c->r[31]|c->r[31]; // 8006DB04
  c->lr=0x8006DB0Cu; f_8007266C(c); // 8006DB08
  c->r[4]=R32(c->r[30]+0x000004F0u); // 8006DB0C
  c->lr=0x8006DB14u; f_8007266C(c); // 8006DB10
  c->r[4]=R32(c->r[30]+0x000004F4u); // 8006DB14
  c->lr=0x8006DB1Cu; f_8007266C(c); // 8006DB18
  c->r[4]=R32(c->r[30]+0x000004F8u); // 8006DB1C
  c->lr=0x8006DB24u; f_8007266C(c); // 8006DB20
  c->r[29]=c->r[30]|c->r[30]; // 8006DB24
  c->r[25]=0u+0x00000000u; // 8006DB28
L_8006DB2C:;
  c->r[4]=R32(c->r[29]+0x000004FCu); // 8006DB2C
  c->r[3]=c->r[31]|c->r[31]; // 8006DB30
  c->lr=0x8006DB38u; f_8007266C(c); // 8006DB34
  c->r[25]=c->r[25]+0x00000001u; // 8006DB38
  c->r[29]=c->r[29]+0x00000004u; // 8006DB3C
  cmpu(c,0,c->r[25],0x00000032u); // 8006DB40
  if (crb(c,0)) { IRQCHK(c); goto L_8006DB2C; } // 8006DB44
  c->r[25]=0u+0x00000000u; // 8006DB48
L_8006DB4C:;
  c->r[4]=R32(c->r[30]+0x000005C4u); // 8006DB4C
  c->r[3]=c->r[31]|c->r[31]; // 8006DB50
  c->lr=0x8006DB58u; f_8007266C(c); // 8006DB54
  c->r[25]=c->r[25]+0x00000001u; // 8006DB58
  c->r[30]=c->r[30]+0x00000004u; // 8006DB5C
  cmpu(c,0,c->r[25],0x00000032u); // 8006DB60
  if (crb(c,0)) { IRQCHK(c); goto L_8006DB4C; } // 8006DB64
  c->r[3]=c->r[31]|c->r[31]; // 8006DB68
  c->lr=0x8006DB70u; f_80207484(c); // 8006DB6C
  c->r[3]=c->r[31]|c->r[31]; // 8006DB70
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006DB74
  c->r[0]=R32(c->r[1]+0x00000034u); // 8006DB78
  c->lr=c->r[0]; // 8006DB7C
  c->r[1]=c->r[1]+0x00000030u; // 8006DB80
  return; // 8006DB84
}

// fromBinary__Q34gbla5param13GBRankingDataFRQ24Sega16IRefBinaryStream
void f_8006DB88(Ctx* __restrict c) {
  trace_call(0x8006DB88u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006DB88
  c->r[0]=c->lr; // 8006DB8C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8006DB90
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006DB94
  c->r[31]=c->r[4]|c->r[4]; // 8006DB98
  c->r[30]=c->r[3]|c->r[3]; // 8006DB9C
  c->r[3]=c->r[31]|c->r[31]; // 8006DBA0
  c->lr=0x8006DBA8u; f_8020A7A4(c); // 8006DBA4
  c->r[27]=c->r[30]|c->r[30]; // 8006DBA8
  c->r[26]=0u+0x00000000u; // 8006DBAC
L_8006DBB0:;
  c->r[28]=c->r[27]|c->r[27]; // 8006DBB0
  c->r[25]=0u+0x00000000u; // 8006DBB4
L_8006DBB8:;
  c->r[3]=c->r[31]|c->r[31]; // 8006DBB8
  c->r[4]=c->r[28]|c->r[28]; // 8006DBBC
  c->lr=0x8006DBC4u; f_80072674(c); // 8006DBC0
  c->r[3]=c->r[31]|c->r[31]; // 8006DBC4
  c->r[4]=c->r[28]+0x00000004u; // 8006DBC8
  c->lr=0x8006DBD0u; f_80072678(c); // 8006DBCC
  c->r[29]=0u+0x00000000u; // 8006DBD0
L_8006DBD4:;
  c->r[4]=c->r[28]+c->r[29]; // 8006DBD4
  c->r[3]=c->r[31]|c->r[31]; // 8006DBD8
  c->r[4]=c->r[4]+0x00000008u; // 8006DBDC
  c->lr=0x8006DBE4u; f_8020A4E8(c); // 8006DBE0
  c->r[29]=c->r[29]+0x00000001u; // 8006DBE4
  cmpu(c,0,c->r[29],0x00000009u); // 8006DBE8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DBD4; } // 8006DBEC
  c->r[29]=0u+0x00000000u; // 8006DBF0
L_8006DBF4:;
  c->r[4]=c->r[28]+c->r[29]; // 8006DBF4
  c->r[3]=c->r[31]|c->r[31]; // 8006DBF8
  c->r[4]=c->r[4]+0x00000011u; // 8006DBFC
  c->lr=0x8006DC04u; f_8020A4E8(c); // 8006DC00
  c->r[29]=c->r[29]+0x00000001u; // 8006DC04
  cmpu(c,0,c->r[29],0x00000004u); // 8006DC08
  if (crb(c,0)) { IRQCHK(c); goto L_8006DBF4; } // 8006DC0C
  c->r[3]=c->r[31]|c->r[31]; // 8006DC10
  c->r[4]=c->r[28]+0x00000015u; // 8006DC14
  c->lr=0x8006DC1Cu; f_8020A4E8(c); // 8006DC18
  c->r[4]=c->r[28]+0x00000016u; // 8006DC1C
  c->lr=0x8006DC24u; f_80072674(c); // 8006DC20
  c->r[4]=c->r[28]+0x0000001Au; // 8006DC24
  c->lr=0x8006DC2Cu; f_8020A4AC(c); // 8006DC28
  c->r[4]=c->r[28]+0x0000001Bu; // 8006DC2C
  c->lr=0x8006DC34u; f_8020A4AC(c); // 8006DC30
  c->r[25]=c->r[25]+0x00000001u; // 8006DC34
  c->r[28]=c->r[28]+0x0000001Cu; // 8006DC38
  cmpu(c,0,c->r[25],0x0000000Au); // 8006DC3C
  if (crb(c,0)) { IRQCHK(c); goto L_8006DBB8; } // 8006DC40
  c->r[26]=c->r[26]+0x00000001u; // 8006DC44
  c->r[27]=c->r[27]+0x00000118u; // 8006DC48
  cmpu(c,0,c->r[26],0x00000003u); // 8006DC4C
  if (crb(c,0)) { IRQCHK(c); goto L_8006DBB0; } // 8006DC50
  c->r[28]=c->r[30]+0x00000348u; // 8006DC54
  c->r[25]=0u+0x00000000u; // 8006DC58
L_8006DC5C:;
  c->r[27]=c->r[28]|c->r[28]; // 8006DC5C
  c->r[26]=0u+0x00000000u; // 8006DC60
L_8006DC64:;
  c->r[3]=c->r[31]|c->r[31]; // 8006DC64
  c->r[4]=c->r[27]|c->r[27]; // 8006DC68
  c->lr=0x8006DC70u; f_80072674(c); // 8006DC6C
  c->r[3]=c->r[31]|c->r[31]; // 8006DC70
  c->r[4]=c->r[27]+0x00000004u; // 8006DC74
  c->lr=0x8006DC7Cu; f_80072678(c); // 8006DC78
  c->r[29]=0u+0x00000000u; // 8006DC7C
L_8006DC80:;
  c->r[4]=c->r[27]+c->r[29]; // 8006DC80
  c->r[3]=c->r[31]|c->r[31]; // 8006DC84
  c->r[4]=c->r[4]+0x00000008u; // 8006DC88
  c->lr=0x8006DC90u; f_8020A4E8(c); // 8006DC8C
  c->r[29]=c->r[29]+0x00000001u; // 8006DC90
  cmpu(c,0,c->r[29],0x00000009u); // 8006DC94
  if (crb(c,0)) { IRQCHK(c); goto L_8006DC80; } // 8006DC98
  c->r[29]=0u+0x00000000u; // 8006DC9C
L_8006DCA0:;
  c->r[4]=c->r[27]+c->r[29]; // 8006DCA0
  c->r[3]=c->r[31]|c->r[31]; // 8006DCA4
  c->r[4]=c->r[4]+0x00000011u; // 8006DCA8
  c->lr=0x8006DCB0u; f_8020A4E8(c); // 8006DCAC
  c->r[29]=c->r[29]+0x00000001u; // 8006DCB0
  cmpu(c,0,c->r[29],0x00000004u); // 8006DCB4
  if (crb(c,0)) { IRQCHK(c); goto L_8006DCA0; } // 8006DCB8
  c->r[3]=c->r[31]|c->r[31]; // 8006DCBC
  c->r[4]=c->r[27]+0x00000015u; // 8006DCC0
  c->lr=0x8006DCC8u; f_8020A4E8(c); // 8006DCC4
  c->r[4]=c->r[27]+0x00000016u; // 8006DCC8
  c->lr=0x8006DCD0u; f_80072674(c); // 8006DCCC
  c->r[4]=c->r[27]+0x0000001Au; // 8006DCD0
  c->lr=0x8006DCD8u; f_8020A4AC(c); // 8006DCD4
  c->r[4]=c->r[27]+0x0000001Bu; // 8006DCD8
  c->lr=0x8006DCE0u; f_8020A4AC(c); // 8006DCDC
  c->r[26]=c->r[26]+0x00000001u; // 8006DCE0
  c->r[27]=c->r[27]+0x0000001Cu; // 8006DCE4
  cmpu(c,0,c->r[26],0x00000005u); // 8006DCE8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DC64; } // 8006DCEC
  c->r[25]=c->r[25]+0x00000001u; // 8006DCF0
  c->r[28]=c->r[28]+0x0000008Cu; // 8006DCF4
  cmpu(c,0,c->r[25],0x00000003u); // 8006DCF8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DC5C; } // 8006DCFC
  c->r[3]=c->r[31]|c->r[31]; // 8006DD00
  c->r[4]=c->r[30]+0x000004ECu; // 8006DD04
  c->lr=0x8006DD0Cu; f_80072674(c); // 8006DD08
  c->r[4]=c->r[30]+0x000004F0u; // 8006DD0C
  c->lr=0x8006DD14u; f_80072674(c); // 8006DD10
  c->r[4]=c->r[30]+0x000004F4u; // 8006DD14
  c->lr=0x8006DD1Cu; f_80072674(c); // 8006DD18
  c->r[4]=c->r[30]+0x000004F8u; // 8006DD1C
  c->lr=0x8006DD24u; f_80072674(c); // 8006DD20
  c->r[29]=c->r[30]+0x000004FCu; // 8006DD24
  c->r[25]=0u+0x00000000u; // 8006DD28
L_8006DD2C:;
  c->r[3]=c->r[31]|c->r[31]; // 8006DD2C
  c->r[4]=c->r[29]|c->r[29]; // 8006DD30
  c->lr=0x8006DD38u; f_80072674(c); // 8006DD34
  c->r[25]=c->r[25]+0x00000001u; // 8006DD38
  c->r[29]=c->r[29]+0x00000004u; // 8006DD3C
  cmpu(c,0,c->r[25],0x00000032u); // 8006DD40
  if (crb(c,0)) { IRQCHK(c); goto L_8006DD2C; } // 8006DD44
  c->r[29]=c->r[30]+0x000005C4u; // 8006DD48
  c->r[25]=0u+0x00000000u; // 8006DD4C
L_8006DD50:;
  c->r[3]=c->r[31]|c->r[31]; // 8006DD50
  c->r[4]=c->r[29]|c->r[29]; // 8006DD54
  c->lr=0x8006DD5Cu; f_80072674(c); // 8006DD58
  c->r[25]=c->r[25]+0x00000001u; // 8006DD5C
  c->r[29]=c->r[29]+0x00000004u; // 8006DD60
  cmpu(c,0,c->r[25],0x00000032u); // 8006DD64
  if (crb(c,0)) { IRQCHK(c); goto L_8006DD50; } // 8006DD68
  c->r[3]=c->r[31]|c->r[31]; // 8006DD6C
  c->lr=0x8006DD74u; f_8020A7A4(c); // 8006DD70
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006DD74
  c->r[3]=0u+0x00000001u; // 8006DD78
  c->r[0]=R32(c->r[1]+0x00000034u); // 8006DD7C
  c->lr=c->r[0]; // 8006DD80
  c->r[1]=c->r[1]+0x00000030u; // 8006DD84
  return; // 8006DD88
}

// __ct__Q34gbla5param11ProfileDataFv
void f_8006DD8C(Ctx* __restrict c) {
  trace_call(0x8006DD8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006DD8C
  c->r[0]=c->lr; // 8006DD90
  c->r[4]=0u+0x00000000u; // 8006DD94
  c->r[5]=0u+0x00000009u; // 8006DD98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006DD9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006DDA0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006DDA4
  c->r[30]=c->r[3]|c->r[3]; // 8006DDA8
  c->r[3]=c->r[3]+0x00000004u; // 8006DDAC
  c->lr=0x8006DDB4u; f_80212C88(c); // 8006DDB0
  c->r[31]=R32(c->r[13]+0xFFFF8210u); // 8006DDB4
  c->r[3]=c->r[30]+0x00000004u; // 8006DDB8
  c->r[4]=0u+0x00000000u; // 8006DDBC
  c->r[5]=0u+0x00000009u; // 8006DDC0
  c->lr=0x8006DDC8u; f_80212C88(c); // 8006DDC4
  c->r[4]=c->r[31]|c->r[31]; // 8006DDC8
  c->r[3]=c->r[30]+0x00000004u; // 8006DDCC
  c->r[5]=0u+0x00000009u; // 8006DDD0
  c->lr=0x8006DDD8u; f_800B788C(c); // 8006DDD4
  c->r[3]=c->r[30]+0x0000000Du; // 8006DDD8
  c->r[4]=0u+0x00000000u; // 8006DDDC
  c->r[5]=0u+0x00000040u; // 8006DDE0
  c->lr=0x8006DDE8u; f_80212C88(c); // 8006DDE4
  c->r[4]=R32(c->r[13]+0xFFFF8214u); // 8006DDE8
  c->r[3]=c->r[30]+0x0000000Du; // 8006DDEC
  c->r[5]=0u+0x00000040u; // 8006DDF0
  c->lr=0x8006DDF8u; f_800B788C(c); // 8006DDF4
  {uint32_t ea=c->r[2]+0xFFFFA6A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006DDF8
  c->r[0]=0u+0x00000000u; // 8006DDFC
  {uint32_t ea=c->r[2]+0xFFFFA6A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006DE00
  c->r[3]=c->r[30]|c->r[30]; // 8006DE04
  W32(c->r[30]+0x00000000u,c->r[0]); // 8006DE08
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 8006DE0C
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 8006DE10
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 8006DE14
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 8006DE18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006DE1C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006DE20
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006DE24
  c->lr=c->r[0]; // 8006DE28
  c->r[1]=c->r[1]+0x00000010u; // 8006DE2C
  return; // 8006DE30
}

// init__Q34gbla5param11ProfileDataFv
void f_8006DE34(Ctx* __restrict c) {
  trace_call(0x8006DE34u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006DE34
  c->r[0]=c->lr; // 8006DE38
  c->r[4]=0u+0x00000000u; // 8006DE3C
  c->r[5]=0u+0x00000009u; // 8006DE40
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006DE44
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006DE48
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006DE4C
  c->r[30]=c->r[3]|c->r[3]; // 8006DE50
  c->r[3]=c->r[3]+0x00000004u; // 8006DE54
  c->lr=0x8006DE5Cu; f_80212C88(c); // 8006DE58
  c->r[31]=R32(c->r[13]+0xFFFF8210u); // 8006DE5C
  c->r[3]=c->r[30]+0x00000004u; // 8006DE60
  c->r[4]=0u+0x00000000u; // 8006DE64
  c->r[5]=0u+0x00000009u; // 8006DE68
  c->lr=0x8006DE70u; f_80212C88(c); // 8006DE6C
  c->r[4]=c->r[31]|c->r[31]; // 8006DE70
  c->r[3]=c->r[30]+0x00000004u; // 8006DE74
  c->r[5]=0u+0x00000009u; // 8006DE78
  c->lr=0x8006DE80u; f_800B788C(c); // 8006DE7C
  c->r[3]=c->r[30]+0x0000000Du; // 8006DE80
  c->r[4]=0u+0x00000000u; // 8006DE84
  c->r[5]=0u+0x00000040u; // 8006DE88
  c->lr=0x8006DE90u; f_80212C88(c); // 8006DE8C
  c->r[4]=R32(c->r[13]+0xFFFF8214u); // 8006DE90
  c->r[3]=c->r[30]+0x0000000Du; // 8006DE94
  c->r[5]=0u+0x00000040u; // 8006DE98
  c->lr=0x8006DEA0u; f_800B788C(c); // 8006DE9C
  {uint32_t ea=c->r[2]+0xFFFFA6A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006DEA0
  c->r[0]=0u+0x00000000u; // 8006DEA4
  {uint32_t ea=c->r[2]+0xFFFFA6A4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006DEA8
  W32(c->r[30]+0x00000000u,c->r[0]); // 8006DEAC
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[1]);} // 8006DEB0
  {uint32_t ea=c->r[30]+0x00000054u; WF32(ea,c->f[1]);} // 8006DEB4
  {uint32_t ea=c->r[30]+0x00000058u; WF32(ea,c->f[0]);} // 8006DEB8
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 8006DEBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006DEC0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006DEC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006DEC8
  c->lr=c->r[0]; // 8006DECC
  c->r[1]=c->r[1]+0x00000010u; // 8006DED0
  return; // 8006DED4
}

// getIDName__Q34gbla5param11ProfileDataCFv
void f_8006DED8(Ctx* __restrict c) {
  trace_call(0x8006DED8u);
  c->r[3]=c->r[3]+0x00000004u; // 8006DED8
  return; // 8006DEDC
}

// SetGameName__4CoreFPc
void f_8006DEE0(Ctx* __restrict c) {
  trace_call(0x8006DEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006DEE0
  c->r[0]=c->lr; // 8006DEE4
  c->r[5]=0u+0x00000009u; // 8006DEE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006DEEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006DEF0
  c->r[31]=c->r[4]|c->r[4]; // 8006DEF4
  c->r[4]=0u+0x00000000u; // 8006DEF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006DEFC
  c->r[30]=c->r[3]|c->r[3]; // 8006DF00
  c->r[3]=c->r[3]+0x00000004u; // 8006DF04
  c->lr=0x8006DF0Cu; f_80212C88(c); // 8006DF08
  c->r[4]=c->r[31]|c->r[31]; // 8006DF0C
  c->r[3]=c->r[30]+0x00000004u; // 8006DF10
  c->r[5]=0u+0x00000009u; // 8006DF14
  c->lr=0x8006DF1Cu; f_800B788C(c); // 8006DF18
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006DF1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006DF20
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006DF24
  c->lr=c->r[0]; // 8006DF28
  c->r[1]=c->r[1]+0x00000010u; // 8006DF2C
  return; // 8006DF30
}

// getAim__Q34gbla5param11ProfileDataCFQ34gbla5param8_aim_pos
void f_8006DF34(Ctx* __restrict c) {
  trace_call(0x8006DF34u);
  cmps(c,0,(int32_t)c->r[4],4); // 8006DF34
  if (crb(c,0)) { goto L_8006DF44; } // 8006DF38
  {uint32_t ea=c->r[2]+0xFFFFA6A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006DF3C
  return; // 8006DF40
L_8006DF44:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006DF44
  c->r[3]=c->r[3]+c->r[0]; // 8006DF48
  {uint32_t ea=c->r[3]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006DF4C
  return; // 8006DF50
}

// setAim__Q34gbla5param11ProfileDataFQ34gbla5param8_aim_posf
void f_8006DF54(Ctx* __restrict c) {
  trace_call(0x8006DF54u);
  cmps(c,0,(int32_t)c->r[4],4); // 8006DF54
  if (!crb(c,0)) return; // 8006DF58
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8006DF5C
  c->r[3]=c->r[3]+c->r[0]; // 8006DF60
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[1]);} // 8006DF64
  return; // 8006DF68
}

// toBinary__Q34gbla5param11ProfileDataCFRQ24Sega13OBinaryStream
void f_8006DF6C(Ctx* __restrict c) {
  trace_call(0x8006DF6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006DF6C
  c->r[0]=c->lr; // 8006DF70
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006DF74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006DF78
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006DF7C
  c->r[30]=c->r[4]|c->r[4]; // 8006DF80
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006DF84
  c->r[29]=c->r[3]|c->r[3]; // 8006DF88
  c->r[3]=c->r[30]|c->r[30]; // 8006DF8C
  c->lr=0x8006DF94u; f_80207484(c); // 8006DF90
  c->r[4]=R32(c->r[29]+0x00000000u); // 8006DF94
  c->r[3]=c->r[30]|c->r[30]; // 8006DF98
  c->lr=0x8006DFA0u; f_8007266C(c); // 8006DF9C
  c->r[31]=0u+0x00000000u; // 8006DFA0
L_8006DFA4:;
  c->r[4]=c->r[29]+c->r[31]; // 8006DFA4
  c->r[3]=c->r[30]|c->r[30]; // 8006DFA8
  c->r[4]=R8(c->r[4]+0x00000004u); // 8006DFAC
  c->lr=0x8006DFB4u; f_80206F58(c); // 8006DFB0
  c->r[31]=c->r[31]+0x00000001u; // 8006DFB4
  cmpu(c,0,c->r[31],0x00000009u); // 8006DFB8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DFA4; } // 8006DFBC
  c->r[31]=0u+0x00000000u; // 8006DFC0
L_8006DFC4:;
  c->r[4]=c->r[29]+c->r[31]; // 8006DFC4
  c->r[3]=c->r[30]|c->r[30]; // 8006DFC8
  c->r[4]=R8(c->r[4]+0x0000000Du); // 8006DFCC
  c->lr=0x8006DFD4u; f_80206F58(c); // 8006DFD0
  c->r[31]=c->r[31]+0x00000001u; // 8006DFD4
  cmpu(c,0,c->r[31],0x00000040u); // 8006DFD8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DFC4; } // 8006DFDC
  c->r[31]=0u+0x00000000u; // 8006DFE0
L_8006DFE4:;
  {uint32_t ea=c->r[29]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006DFE4
  c->r[3]=c->r[30]|c->r[30]; // 8006DFE8
  c->lr=0x8006DFF0u; f_80207164(c); // 8006DFEC
  c->r[31]=c->r[31]+0x00000001u; // 8006DFF0
  c->r[29]=c->r[29]+0x00000004u; // 8006DFF4
  cmpu(c,0,c->r[31],0x00000004u); // 8006DFF8
  if (crb(c,0)) { IRQCHK(c); goto L_8006DFE4; } // 8006DFFC
  c->r[3]=c->r[30]|c->r[30]; // 8006E000
  c->lr=0x8006E008u; f_80207484(c); // 8006E004
  c->r[3]=c->r[30]|c->r[30]; // 8006E008
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E00C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E010
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006E014
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E018
  c->lr=c->r[0]; // 8006E01C
  c->r[1]=c->r[1]+0x00000020u; // 8006E020
  return; // 8006E024
}

// fromBinary__Q34gbla5param11ProfileDataFRQ24Sega16IRefBinaryStream
void f_8006E028(Ctx* __restrict c) {
  trace_call(0x8006E028u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E028
  c->r[0]=c->lr; // 8006E02C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E030
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E034
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E038
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006E03C
  c->r[29]=c->r[3]|c->r[3]; // 8006E040
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006E044
  c->r[28]=c->r[4]|c->r[4]; // 8006E048
  c->r[3]=c->r[28]|c->r[28]; // 8006E04C
  c->lr=0x8006E054u; f_8020A7A4(c); // 8006E050
  c->r[31]=c->r[3]|c->r[3]; // 8006E054
  c->r[3]=c->r[28]|c->r[28]; // 8006E058
  c->r[4]=c->r[29]|c->r[29]; // 8006E05C
  c->lr=0x8006E064u; f_80072674(c); // 8006E060
  c->r[30]=0u+0x00000000u; // 8006E064
L_8006E068:;
  c->r[4]=c->r[29]+c->r[30]; // 8006E068
  c->r[3]=c->r[28]|c->r[28]; // 8006E06C
  c->r[4]=c->r[4]+0x00000004u; // 8006E070
  c->lr=0x8006E078u; f_8020A4E8(c); // 8006E074
  c->r[30]=c->r[30]+0x00000001u; // 8006E078
  cmpu(c,0,c->r[30],0x00000009u); // 8006E07C
  if (crb(c,0)) { IRQCHK(c); goto L_8006E068; } // 8006E080
  c->r[30]=0u+0x00000000u; // 8006E084
L_8006E088:;
  c->r[4]=c->r[29]+c->r[30]; // 8006E088
  c->r[3]=c->r[28]|c->r[28]; // 8006E08C
  c->r[4]=c->r[4]+0x0000000Du; // 8006E090
  c->lr=0x8006E098u; f_8020A4E8(c); // 8006E094
  c->r[30]=c->r[30]+0x00000001u; // 8006E098
  cmpu(c,0,c->r[30],0x00000040u); // 8006E09C
  if (crb(c,0)) { IRQCHK(c); goto L_8006E088; } // 8006E0A0
  c->r[30]=c->r[29]+0x00000050u; // 8006E0A4
  c->r[29]=0u+0x00000000u; // 8006E0A8
L_8006E0AC:;
  c->r[3]=c->r[28]|c->r[28]; // 8006E0AC
  c->r[4]=c->r[30]|c->r[30]; // 8006E0B0
  c->lr=0x8006E0B8u; f_8020A62C(c); // 8006E0B4
  c->r[29]=c->r[29]+0x00000001u; // 8006E0B8
  c->r[30]=c->r[30]+0x00000004u; // 8006E0BC
  cmpu(c,0,c->r[29],0x00000004u); // 8006E0C0
  if (crb(c,0)) { IRQCHK(c); goto L_8006E0AC; } // 8006E0C4
  c->r[3]=c->r[28]|c->r[28]; // 8006E0C8
  c->lr=0x8006E0D0u; f_8020A7A4(c); // 8006E0CC
  c->r[3]=c->r[3]-c->r[31]; // 8006E0D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E0D4
  c->r[0]=c->r[3]+0xFFFFFFA3u; // 8006E0D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E0DC
  c->r[0]=cntlz(c->r[0]); // 8006E0E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006E0E4
  c->r[3]=rotl(c->r[0],27)&0x07FFFFFFu; // 8006E0E8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006E0EC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E0F0
  c->lr=c->r[0]; // 8006E0F4
  c->r[1]=c->r[1]+0x00000020u; // 8006E0F8
  return; // 8006E0FC
}

// outputDisp__Q34gbla5param11ProfileDataCFv
void f_8006E100(Ctx* __restrict c) {
  trace_call(0x8006E100u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E100
  c->r[0]=c->lr; // 8006E104
  W32(c->r[1]+0x00000034u,c->r[0]); // 8006E108
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 8006E10C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8006E110
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E114
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E118
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006E11C
  c->r[29]=c->r[3]|c->r[3]; // 8006E120
  c->lr=0x8006E128u; f_8006E3E4(c); // 8006E124
  c->r[3]=c->r[1]+0x00000008u; // 8006E128
  c->r[4]=0u+0x00000006u; // 8006E12C
  c->lr=0x8006E134u; f_8006E3F0(c); // 8006E130
  c->r[4]=0u+0x802B0000u; // 8006E134
  c->r[3]=c->r[1]+0x00000008u; // 8006E138
  c->r[30]=c->r[4]+0x00003BE8u; // 8006E13C
  c->r[4]=c->r[30]+0x00000012u; // 8006E140
  c->lr=0x8006E148u; f_8006E6C8(c); // 8006E144
  c->r[31]=0u+0x80070000u; // 8006E148
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006E14C
  c->lr=0x8006E154u; f_8006E758(c); // 8006E150
  c->r[3]=c->r[1]+0x00000008u; // 8006E154
  c->r[4]=c->r[30]+0x00000028u; // 8006E158
  c->lr=0x8006E160u; f_8006E6C8(c); // 8006E15C
  c->r[4]=c->r[29]+0x00000004u; // 8006E160
  c->lr=0x8006E168u; f_8006E6C8(c); // 8006E164
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006E168
  c->lr=0x8006E170u; f_8006E758(c); // 8006E16C
  c->r[3]=c->r[1]+0x00000008u; // 8006E170
  c->r[4]=c->r[30]+0x00000031u; // 8006E174
  c->lr=0x8006E17Cu; f_8006E6C8(c); // 8006E178
  c->r[4]=c->r[29]+0x0000000Du; // 8006E17C
  c->lr=0x8006E184u; f_8006E6C8(c); // 8006E180
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006E184
  c->lr=0x8006E18Cu; f_8006E758(c); // 8006E188
  c->r[31]=0u+0x00000000u; // 8006E18C
L_8006E190:;
  {uint32_t ea=c->r[29]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 8006E190
  c->r[3]=c->r[1]+0x00000008u; // 8006E194
  c->r[4]=c->r[30]+0x00000024u; // 8006E198
  c->lr=0x8006E1A0u; f_8006E6C8(c); // 8006E19C
  c->r[4]=c->r[31]|c->r[31]; // 8006E1A0
  c->lr=0x8006E1A8u; f_8006E518(c); // 8006E1A4
  c->r[4]=c->r[30]+0x00000039u; // 8006E1A8
  c->lr=0x8006E1B0u; f_8006E6C8(c); // 8006E1AC
  c->f[1]=c->f[31]; // 8006E1B0
  c->lr=0x8006E1B8u; f_8006E638(c); // 8006E1B4
  c->r[4]=c->r[30]+0x0000003Bu; // 8006E1B8
  c->lr=0x8006E1C0u; f_8006E6C8(c); // 8006E1BC
  c->r[31]=c->r[31]+0x00000001u; // 8006E1C0
  c->r[29]=c->r[29]+0x00000004u; // 8006E1C4
  cmpu(c,0,c->r[31],0x00000004u); // 8006E1C8
  if (crb(c,0)) { IRQCHK(c); goto L_8006E190; } // 8006E1CC
  c->r[4]=0u+0x80070000u; // 8006E1D0
  c->r[3]=c->r[1]+0x00000008u; // 8006E1D4
  c->r[4]=c->r[4]+0xFFFFE8C4u; // 8006E1D8
  c->lr=0x8006E1E0u; f_8006E758(c); // 8006E1DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 8006E1E0
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 8006E1E4
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 8006E1E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E1EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E1F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006E1F4
  c->lr=c->r[0]; // 8006E1F8
  c->r[1]=c->r[1]+0x00000030u; // 8006E1FC
  return; // 8006E200
}

// __ct__Q34gbla5param9GradeDataFv
void f_8006E204(Ctx* __restrict c) {
  trace_call(0x8006E204u);
  c->r[0]=0u+0x00000000u; // 8006E204
  W8(c->r[3]+0x00000000u,c->r[0]); // 8006E208
  W8(c->r[3]+0x00000001u,c->r[0]); // 8006E20C
  W32(c->r[3]+0x00000002u,c->r[0]); // 8006E210
  return; // 8006E214
}

// init__Q34gbla5param9GradeDataFv
void f_8006E218(Ctx* __restrict c) {
  trace_call(0x8006E218u);
  c->r[0]=0u+0x00000000u; // 8006E218
  W8(c->r[3]+0x00000000u,c->r[0]); // 8006E21C
  W8(c->r[3]+0x00000001u,c->r[0]); // 8006E220
  W32(c->r[3]+0x00000002u,c->r[0]); // 8006E224
  return; // 8006E228
}

// getGrade__Q34gbla5param9GradeDataCFv
void f_8006E22C(Ctx* __restrict c) {
  trace_call(0x8006E22Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 8006E22C
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006E230
  return; // 8006E234
}

// setGrade__Q34gbla5param9GradeDataFc
void f_8006E238(Ctx* __restrict c) {
  trace_call(0x8006E238u);
  W8(c->r[3]+0x00000000u,c->r[4]); // 8006E238
  return; // 8006E23C
}

// getMaxGrade__Q34gbla5param9GradeDataCFv
void f_8006E240(Ctx* __restrict c) {
  trace_call(0x8006E240u);
  c->r[0]=R8(c->r[3]+0x00000001u); // 8006E240
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006E244
  return; // 8006E248
}

// setMaxGrade__Q34gbla5param9GradeDataFc
void f_8006E24C(Ctx* __restrict c) {
  trace_call(0x8006E24Cu);
  W8(c->r[3]+0x00000001u,c->r[4]); // 8006E24C
  return; // 8006E250
}

// getPoint__Q34gbla5param9GradeDataCFv
void f_8006E254(Ctx* __restrict c) {
  trace_call(0x8006E254u);
  c->r[3]=R32(c->r[3]+0x00000002u); // 8006E254
  return; // 8006E258
}

// setPoint__Q34gbla5param9GradeDataFl
void f_8006E25C(Ctx* __restrict c) {
  trace_call(0x8006E25Cu);
  W32(c->r[3]+0x00000002u,c->r[4]); // 8006E25C
  return; // 8006E260
}

// toBinary__Q34gbla5param9GradeDataCFRQ24Sega13OBinaryStream
void f_8006E264(Ctx* __restrict c) {
  trace_call(0x8006E264u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E264
  c->r[0]=c->lr; // 8006E268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006E26C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006E270
  c->r[31]=c->r[4]|c->r[4]; // 8006E274
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006E278
  c->r[30]=c->r[3]|c->r[3]; // 8006E27C
  c->r[3]=c->r[31]|c->r[31]; // 8006E280
  c->lr=0x8006E288u; f_80207484(c); // 8006E284
  c->r[0]=R8(c->r[30]+0x00000000u); // 8006E288
  c->r[3]=c->r[31]|c->r[31]; // 8006E28C
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006E290
  c->lr=0x8006E298u; f_80206EC0(c); // 8006E294
  c->r[0]=R8(c->r[30]+0x00000001u); // 8006E298
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8006E29C
  c->lr=0x8006E2A4u; f_80206EC0(c); // 8006E2A0
  c->r[4]=R32(c->r[30]+0x00000002u); // 8006E2A4
  c->lr=0x8006E2ACu; f_80072670(c); // 8006E2A8
  c->r[3]=c->r[31]|c->r[31]; // 8006E2AC
  c->lr=0x8006E2B4u; f_80207484(c); // 8006E2B0
  c->r[3]=c->r[31]|c->r[31]; // 8006E2B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006E2B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006E2BC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006E2C0
  c->lr=c->r[0]; // 8006E2C4
  c->r[1]=c->r[1]+0x00000010u; // 8006E2C8
  return; // 8006E2CC
}

// fromBinary__Q34gbla5param9GradeDataFRQ24Sega16IRefBinaryStream
void f_8006E2D0(Ctx* __restrict c) {
  trace_call(0x8006E2D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E2D0
  c->r[0]=c->lr; // 8006E2D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006E2D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006E2DC
  c->r[31]=c->r[4]|c->r[4]; // 8006E2E0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006E2E4
  c->r[30]=c->r[3]|c->r[3]; // 8006E2E8
  c->r[3]=c->r[31]|c->r[31]; // 8006E2EC
  c->lr=0x8006E2F4u; f_8020A7A4(c); // 8006E2F0
  c->r[3]=c->r[31]|c->r[31]; // 8006E2F4
  c->r[4]=c->r[30]|c->r[30]; // 8006E2F8
  c->lr=0x8006E300u; f_8020A4AC(c); // 8006E2FC
  c->r[4]=c->r[30]+0x00000001u; // 8006E300
  c->lr=0x8006E308u; f_8020A4AC(c); // 8006E304
  c->r[4]=c->r[30]+0x00000002u; // 8006E308
  c->lr=0x8006E310u; f_80072678(c); // 8006E30C
  c->r[3]=c->r[31]|c->r[31]; // 8006E310
  c->lr=0x8006E318u; f_8020A7A4(c); // 8006E314
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006E318
  c->r[3]=0u+0x00000001u; // 8006E31C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006E320
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006E324
  c->lr=c->r[0]; // 8006E328
  c->r[1]=c->r[1]+0x00000010u; // 8006E32C
  return; // 8006E330
}

// outputDisp__Q34gbla5param9GradeDataCFv
void f_8006E334(Ctx* __restrict c) {
  trace_call(0x8006E334u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E334
  c->r[0]=c->lr; // 8006E338
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E33C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E340
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E344
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006E348
  c->r[29]=c->r[3]|c->r[3]; // 8006E34C
  c->lr=0x8006E354u; f_8006E3E4(c); // 8006E350
  c->r[3]=c->r[1]+0x00000008u; // 8006E354
  c->r[4]=0u+0x00000006u; // 8006E358
  c->lr=0x8006E360u; f_8006E3F0(c); // 8006E35C
  c->r[30]=0u+0x802B0000u; // 8006E360
  c->r[3]=c->r[1]+0x00000008u; // 8006E364
  c->r[30]=c->r[30]+0x00003BE8u; // 8006E368
  c->r[4]=c->r[30]+0x00000053u; // 8006E36C
  c->lr=0x8006E374u; f_8006E6C8(c); // 8006E370
  c->r[4]=R8(c->r[29]+0x00000000u); // 8006E374
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8006E378
  c->lr=0x8006E380u; f_8006E518(c); // 8006E37C
  c->r[31]=0u+0x80070000u; // 8006E380
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006E384
  c->lr=0x8006E38Cu; f_8006E758(c); // 8006E388
  c->r[3]=c->r[1]+0x00000008u; // 8006E38C
  c->r[4]=c->r[30]+0x0000005Au; // 8006E390
  c->lr=0x8006E398u; f_8006E6C8(c); // 8006E394
  c->r[4]=R8(c->r[29]+0x00000001u); // 8006E398
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8006E39C
  c->lr=0x8006E3A4u; f_8006E518(c); // 8006E3A0
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006E3A4
  c->lr=0x8006E3ACu; f_8006E758(c); // 8006E3A8
  c->r[3]=c->r[1]+0x00000008u; // 8006E3AC
  c->r[4]=c->r[30]+0x00000064u; // 8006E3B0
  c->lr=0x8006E3B8u; f_8006E6C8(c); // 8006E3B4
  c->r[4]=R32(c->r[29]+0x00000002u); // 8006E3B8
  c->lr=0x8006E3C0u; f_8006E518(c); // 8006E3BC
  c->r[4]=c->r[31]+0xFFFFE8C4u; // 8006E3C0
  c->lr=0x8006E3C8u; f_8006E758(c); // 8006E3C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E3C8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E3CC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E3D0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006E3D4
  c->lr=c->r[0]; // 8006E3D8
  c->r[1]=c->r[1]+0x00000020u; // 8006E3DC
  return; // 8006E3E0
}

// instance__Q24Sega12DebugScreenCFv
void f_8006E3E4(Ctx* __restrict c) {
  trace_call(0x8006E3E4u);
  c->r[0]=R8(c->r[13]+0xFFFF9820u); // 8006E3E4
  c->r[3]=rotl(c->r[0],24)&0xFF000000u; // 8006E3E8
  return; // 8006E3EC
}

// __ls__Q24Sega12DebugScreenCFQ34Sega12DebugScreenC14_ds_layer_type
void f_8006E3F0(Ctx* __restrict c) {
  trace_call(0x8006E3F0u);
  W32(c->r[13]+0xFFFF8218u,c->r[4]); // 8006E3F0
  return; // 8006E3F4
}

// __ls__Q24Sega12DebugScreenCFc
void f_8006E3F8(Ctx* __restrict c) {
  trace_call(0x8006E3F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E3F8
  c->r[0]=c->lr; // 8006E3FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E400
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E404
  c->r[31]=c->r[4]|c->r[4]; // 8006E408
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E40C
  c->r[30]=c->r[3]|c->r[3]; // 8006E410
  c->r[5]=R32(c->r[13]+0xFFFF8218u); // 8006E414
  cmps(c,0,(int32_t)c->r[5],0); // 8006E418
  if (!crb(c,2)) { goto L_8006E434; } // 8006E41C
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E420
  cmps(c,0,(int32_t)c->r[0],0); // 8006E424
  if (crb(c,2)) { goto L_8006E434; } // 8006E428
  c->r[0]=0u+0x00000001u; // 8006E42C
  goto L_8006E454; // 8006E430
L_8006E434:;
  cmps(c,0,(int32_t)c->r[5],0); // 8006E434
  if (crb(c,2)) { goto L_8006E450; } // 8006E438
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E43C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8006E440
  if (!crb(c,2)) { goto L_8006E450; } // 8006E444
  c->r[0]=0u+0x00000001u; // 8006E448
  goto L_8006E454; // 8006E44C
L_8006E450:;
  c->r[0]=0u+0x00000000u; // 8006E450
L_8006E454:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E454
  if (crb(c,2)) { goto L_8006E46C; } // 8006E458
  c->lr=0x8006E460u; f_80226798(c); // 8006E45C
  c->r[3]=c->r[1]+0x00000008u; // 8006E460
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[31]; // 8006E464
  c->lr=0x8006E46Cu; f_802267A0(c); // 8006E468
L_8006E46C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006E46C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E470
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E474
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E478
  c->lr=c->r[0]; // 8006E47C
  c->r[1]=c->r[1]+0x00000020u; // 8006E480
  return; // 8006E484
}

// __ls__Q24Sega12DebugScreenCFUc
void f_8006E488(Ctx* __restrict c) {
  trace_call(0x8006E488u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E488
  c->r[0]=c->lr; // 8006E48C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E490
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E494
  c->r[31]=c->r[4]|c->r[4]; // 8006E498
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E49C
  c->r[30]=c->r[3]|c->r[3]; // 8006E4A0
  c->r[5]=R32(c->r[13]+0xFFFF8218u); // 8006E4A4
  cmps(c,0,(int32_t)c->r[5],0); // 8006E4A8
  if (!crb(c,2)) { goto L_8006E4C4; } // 8006E4AC
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E4B0
  cmps(c,0,(int32_t)c->r[0],0); // 8006E4B4
  if (crb(c,2)) { goto L_8006E4C4; } // 8006E4B8
  c->r[0]=0u+0x00000001u; // 8006E4BC
  goto L_8006E4E4; // 8006E4C0
L_8006E4C4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8006E4C4
  if (crb(c,2)) { goto L_8006E4E0; } // 8006E4C8
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E4CC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8006E4D0
  if (!crb(c,2)) { goto L_8006E4E0; } // 8006E4D4
  c->r[0]=0u+0x00000001u; // 8006E4D8
  goto L_8006E4E4; // 8006E4DC
L_8006E4E0:;
  c->r[0]=0u+0x00000000u; // 8006E4E0
L_8006E4E4:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E4E4
  if (crb(c,2)) { goto L_8006E4FC; } // 8006E4E8
  c->lr=0x8006E4F0u; f_80226798(c); // 8006E4EC
  c->r[4]=c->r[31]|c->r[31]; // 8006E4F0
  c->r[3]=c->r[1]+0x00000008u; // 8006E4F4
  c->lr=0x8006E4FCu; f_802267A4(c); // 8006E4F8
L_8006E4FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8006E4FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E500
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E504
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E508
  c->lr=c->r[0]; // 8006E50C
  c->r[1]=c->r[1]+0x00000020u; // 8006E510
  return; // 8006E514
}

// __ls__Q24Sega12DebugScreenCFi
void f_8006E518(Ctx* __restrict c) {
  trace_call(0x8006E518u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E518
  c->r[0]=c->lr; // 8006E51C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E520
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E524
  c->r[31]=c->r[4]|c->r[4]; // 8006E528
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E52C
  c->r[30]=c->r[3]|c->r[3]; // 8006E530
  c->r[5]=R32(c->r[13]+0xFFFF8218u); // 8006E534
  cmps(c,0,(int32_t)c->r[5],0); // 8006E538
  if (!crb(c,2)) { goto L_8006E554; } // 8006E53C
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E540
  cmps(c,0,(int32_t)c->r[0],0); // 8006E544
  if (crb(c,2)) { goto L_8006E554; } // 8006E548
  c->r[0]=0u+0x00000001u; // 8006E54C
  goto L_8006E574; // 8006E550
L_8006E554:;
  cmps(c,0,(int32_t)c->r[5],0); // 8006E554
  if (crb(c,2)) { goto L_8006E570; } // 8006E558
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E55C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8006E560
  if (!crb(c,2)) { goto L_8006E570; } // 8006E564
  c->r[0]=0u+0x00000001u; // 8006E568
  goto L_8006E574; // 8006E56C
L_8006E570:;
  c->r[0]=0u+0x00000000u; // 8006E570
L_8006E574:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E574
  if (crb(c,2)) { goto L_8006E58C; } // 8006E578
  c->lr=0x8006E580u; f_80226798(c); // 8006E57C
  c->r[4]=c->r[31]|c->r[31]; // 8006E580
  c->r[3]=c->r[1]+0x00000008u; // 8006E584
  c->lr=0x8006E58Cu; f_802267A8(c); // 8006E588
L_8006E58C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006E58C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E590
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E594
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E598
  c->lr=c->r[0]; // 8006E59C
  c->r[1]=c->r[1]+0x00000020u; // 8006E5A0
  return; // 8006E5A4
}

// __ls__Q24Sega12DebugScreenCFUi
void f_8006E5A8(Ctx* __restrict c) {
  trace_call(0x8006E5A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E5A8
  c->r[0]=c->lr; // 8006E5AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E5B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E5B4
  c->r[31]=c->r[4]|c->r[4]; // 8006E5B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E5BC
  c->r[30]=c->r[3]|c->r[3]; // 8006E5C0
  c->r[5]=R32(c->r[13]+0xFFFF8218u); // 8006E5C4
  cmps(c,0,(int32_t)c->r[5],0); // 8006E5C8
  if (!crb(c,2)) { goto L_8006E5E4; } // 8006E5CC
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E5D0
  cmps(c,0,(int32_t)c->r[0],0); // 8006E5D4
  if (crb(c,2)) { goto L_8006E5E4; } // 8006E5D8
  c->r[0]=0u+0x00000001u; // 8006E5DC
  goto L_8006E604; // 8006E5E0
L_8006E5E4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8006E5E4
  if (crb(c,2)) { goto L_8006E600; } // 8006E5E8
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E5EC
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8006E5F0
  if (!crb(c,2)) { goto L_8006E600; } // 8006E5F4
  c->r[0]=0u+0x00000001u; // 8006E5F8
  goto L_8006E604; // 8006E5FC
L_8006E600:;
  c->r[0]=0u+0x00000000u; // 8006E600
L_8006E604:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E604
  if (crb(c,2)) { goto L_8006E61C; } // 8006E608
  c->lr=0x8006E610u; f_80226798(c); // 8006E60C
  c->r[4]=c->r[31]|c->r[31]; // 8006E610
  c->r[3]=c->r[1]+0x00000008u; // 8006E614
  c->lr=0x8006E61Cu; f_802267AC(c); // 8006E618
L_8006E61C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006E61C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E620
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E624
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E628
  c->lr=c->r[0]; // 8006E62C
  c->r[1]=c->r[1]+0x00000020u; // 8006E630
  return; // 8006E634
}

// __ls__Q24Sega12DebugScreenCFf
void f_8006E638(Ctx* __restrict c) {
  trace_call(0x8006E638u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E638
  c->r[0]=c->lr; // 8006E63C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E640
  {uint32_t ea=c->r[1]+0x00000018u; WF64(ea,c->f[31]);} // 8006E644
  c->f[31]=c->f[1]; // 8006E648
  W32(c->r[1]+0x00000014u,c->r[31]); // 8006E64C
  c->r[31]=c->r[3]|c->r[3]; // 8006E650
  c->r[4]=R32(c->r[13]+0xFFFF8218u); // 8006E654
  cmps(c,0,(int32_t)c->r[4],0); // 8006E658
  if (!crb(c,2)) { goto L_8006E674; } // 8006E65C
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E660
  cmps(c,0,(int32_t)c->r[0],0); // 8006E664
  if (crb(c,2)) { goto L_8006E674; } // 8006E668
  c->r[0]=0u+0x00000001u; // 8006E66C
  goto L_8006E694; // 8006E670
L_8006E674:;
  cmps(c,0,(int32_t)c->r[4],0); // 8006E674
  if (crb(c,2)) { goto L_8006E690; } // 8006E678
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E67C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8006E680
  if (!crb(c,2)) { goto L_8006E690; } // 8006E684
  c->r[0]=0u+0x00000001u; // 8006E688
  goto L_8006E694; // 8006E68C
L_8006E690:;
  c->r[0]=0u+0x00000000u; // 8006E690
L_8006E694:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E694
  if (crb(c,2)) { goto L_8006E6AC; } // 8006E698
  c->lr=0x8006E6A0u; f_80226798(c); // 8006E69C
  c->f[1]=c->f[31]; // 8006E6A0
  c->r[3]=c->r[1]+0x00000008u; // 8006E6A4
  c->lr=0x8006E6ACu; f_802267B0(c); // 8006E6A8
L_8006E6AC:;
  c->r[3]=c->r[31]|c->r[31]; // 8006E6AC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[31]=RF64(ea);} // 8006E6B0
  c->r[31]=R32(c->r[1]+0x00000014u); // 8006E6B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E6B8
  c->lr=c->r[0]; // 8006E6BC
  c->r[1]=c->r[1]+0x00000020u; // 8006E6C0
  return; // 8006E6C4
}

// __ls__Q24Sega12DebugScreenCFPCc
void f_8006E6C8(Ctx* __restrict c) {
  trace_call(0x8006E6C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E6C8
  c->r[0]=c->lr; // 8006E6CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E6D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E6D4
  c->r[31]=c->r[4]|c->r[4]; // 8006E6D8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E6DC
  c->r[30]=c->r[3]|c->r[3]; // 8006E6E0
  c->r[5]=R32(c->r[13]+0xFFFF8218u); // 8006E6E4
  cmps(c,0,(int32_t)c->r[5],0); // 8006E6E8
  if (!crb(c,2)) { goto L_8006E704; } // 8006E6EC
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E6F0
  cmps(c,0,(int32_t)c->r[0],0); // 8006E6F4
  if (crb(c,2)) { goto L_8006E704; } // 8006E6F8
  c->r[0]=0u+0x00000001u; // 8006E6FC
  goto L_8006E724; // 8006E700
L_8006E704:;
  cmps(c,0,(int32_t)c->r[5],0); // 8006E704
  if (crb(c,2)) { goto L_8006E720; } // 8006E708
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E70C
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8006E710
  if (!crb(c,2)) { goto L_8006E720; } // 8006E714
  c->r[0]=0u+0x00000001u; // 8006E718
  goto L_8006E724; // 8006E71C
L_8006E720:;
  c->r[0]=0u+0x00000000u; // 8006E720
L_8006E724:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E724
  if (crb(c,2)) { goto L_8006E73C; } // 8006E728
  c->lr=0x8006E730u; f_80226798(c); // 8006E72C
  c->r[4]=c->r[31]|c->r[31]; // 8006E730
  c->r[3]=c->r[1]+0x00000008u; // 8006E734
  c->lr=0x8006E73Cu; f_802267B4(c); // 8006E738
L_8006E73C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006E73C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E740
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E744
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E748
  c->lr=c->r[0]; // 8006E74C
  c->r[1]=c->r[1]+0x00000020u; // 8006E750
  return; // 8006E754
}

// __ls__Q24Sega12DebugScreenCFPFRQ24Sega12DebugScreenC_RQ24Sega12DebugScreenC
void f_8006E758(Ctx* __restrict c) {
  trace_call(0x8006E758u);
  c->r[12]=c->r[4]|c->r[4]; // 8006E758
  c->ctr=c->r[12]; // 8006E75C
  if (true) { dispatch(c,c->ctr); return; } // 8006E760
}

// setColor__Q24Sega12DebugScreenCFUcUcUc
void f_8006E764(Ctx* __restrict c) {
  trace_call(0x8006E764u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E764
  c->r[0]=c->lr; // 8006E768
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E76C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E770
  c->r[31]=c->r[6]|c->r[6]; // 8006E774
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E778
  c->r[30]=c->r[5]|c->r[5]; // 8006E77C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006E780
  c->r[29]=c->r[4]|c->r[4]; // 8006E784
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006E788
  c->r[28]=c->r[3]|c->r[3]; // 8006E78C
  c->r[7]=R32(c->r[13]+0xFFFF8218u); // 8006E790
  cmps(c,0,(int32_t)c->r[7],0); // 8006E794
  if (!crb(c,2)) { goto L_8006E7B0; } // 8006E798
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E79C
  cmps(c,0,(int32_t)c->r[0],0); // 8006E7A0
  if (crb(c,2)) { goto L_8006E7B0; } // 8006E7A4
  c->r[0]=0u+0x00000001u; // 8006E7A8
  goto L_8006E7D0; // 8006E7AC
L_8006E7B0:;
  cmps(c,0,(int32_t)c->r[7],0); // 8006E7B0
  if (crb(c,2)) { goto L_8006E7CC; } // 8006E7B4
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E7B8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8006E7BC
  if (!crb(c,2)) { goto L_8006E7CC; } // 8006E7C0
  c->r[0]=0u+0x00000001u; // 8006E7C4
  goto L_8006E7D0; // 8006E7C8
L_8006E7CC:;
  c->r[0]=0u+0x00000000u; // 8006E7CC
L_8006E7D0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E7D0
  if (crb(c,2)) { goto L_8006E7F0; } // 8006E7D4
  c->lr=0x8006E7DCu; f_80226798(c); // 8006E7D8
  c->r[4]=c->r[29]|c->r[29]; // 8006E7DC
  c->r[5]=c->r[30]|c->r[30]; // 8006E7E0
  c->r[6]=c->r[31]|c->r[31]; // 8006E7E4
  c->r[3]=c->r[1]+0x00000008u; // 8006E7E8
  c->lr=0x8006E7F0u; f_802267BC(c); // 8006E7EC
L_8006E7F0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E7F0
  c->r[3]=c->r[28]|c->r[28]; // 8006E7F4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E7F8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006E7FC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006E800
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E804
  c->lr=c->r[0]; // 8006E808
  c->r[1]=c->r[1]+0x00000020u; // 8006E80C
  return; // 8006E810
}

// setPosition__Q24Sega12DebugScreenCFiiQ34Sega11DebugScreen4Base
void f_8006E814(Ctx* __restrict c) {
  trace_call(0x8006E814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E814
  c->r[0]=c->lr; // 8006E818
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E81C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E820
  c->r[31]=c->r[6]|c->r[6]; // 8006E824
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006E828
  c->r[30]=c->r[5]|c->r[5]; // 8006E82C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006E830
  c->r[29]=c->r[4]|c->r[4]; // 8006E834
  W32(c->r[1]+0x00000010u,c->r[28]); // 8006E838
  c->r[28]=c->r[3]|c->r[3]; // 8006E83C
  c->r[7]=R32(c->r[13]+0xFFFF8218u); // 8006E840
  cmps(c,0,(int32_t)c->r[7],0); // 8006E844
  if (!crb(c,2)) { goto L_8006E860; } // 8006E848
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E84C
  cmps(c,0,(int32_t)c->r[0],0); // 8006E850
  if (crb(c,2)) { goto L_8006E860; } // 8006E854
  c->r[0]=0u+0x00000001u; // 8006E858
  goto L_8006E880; // 8006E85C
L_8006E860:;
  cmps(c,0,(int32_t)c->r[7],0); // 8006E860
  if (crb(c,2)) { goto L_8006E87C; } // 8006E864
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E868
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8006E86C
  if (!crb(c,2)) { goto L_8006E87C; } // 8006E870
  c->r[0]=0u+0x00000001u; // 8006E874
  goto L_8006E880; // 8006E878
L_8006E87C:;
  c->r[0]=0u+0x00000000u; // 8006E87C
L_8006E880:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E880
  if (crb(c,2)) { goto L_8006E8A0; } // 8006E884
  c->lr=0x8006E88Cu; f_80226798(c); // 8006E888
  c->r[4]=c->r[29]|c->r[29]; // 8006E88C
  c->r[5]=c->r[30]|c->r[30]; // 8006E890
  c->r[6]=c->r[31]|c->r[31]; // 8006E894
  c->r[3]=c->r[1]+0x00000008u; // 8006E898
  c->lr=0x8006E8A0u; f_802267C0(c); // 8006E89C
L_8006E8A0:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E8A0
  c->r[3]=c->r[28]|c->r[28]; // 8006E8A4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006E8A8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006E8AC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8006E8B0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E8B4
  c->lr=c->r[0]; // 8006E8B8
  c->r[1]=c->r[1]+0x00000020u; // 8006E8BC
  return; // 8006E8C0
}

// endl__4SegaFRQ24Sega12DebugScreenC
void f_8006E8C4(Ctx* __restrict c) {
  trace_call(0x8006E8C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E8C4
  c->r[0]=c->lr; // 8006E8C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006E8CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006E8D0
  c->r[31]=c->r[3]|c->r[3]; // 8006E8D4
  c->r[4]=R32(c->r[13]+0xFFFF8218u); // 8006E8D8
  cmps(c,0,(int32_t)c->r[4],0); // 8006E8DC
  if (!crb(c,2)) { goto L_8006E8F8; } // 8006E8E0
  c->r[0]=R8(c->r[13]+0xFFFF9821u); // 8006E8E4
  cmps(c,0,(int32_t)c->r[0],0); // 8006E8E8
  if (crb(c,2)) { goto L_8006E8F8; } // 8006E8EC
  c->r[0]=0u+0x00000001u; // 8006E8F0
  goto L_8006E918; // 8006E8F4
L_8006E8F8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8006E8F8
  if (crb(c,2)) { goto L_8006E914; } // 8006E8FC
  c->r[0]=R32(c->r[13]+0xFFFF821Cu); // 8006E900
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8006E904
  if (!crb(c,2)) { goto L_8006E914; } // 8006E908
  c->r[0]=0u+0x00000001u; // 8006E90C
  goto L_8006E918; // 8006E910
L_8006E914:;
  c->r[0]=0u+0x00000000u; // 8006E914
L_8006E918:;
  cmps(c,0,(int32_t)c->r[0],0); // 8006E918
  if (crb(c,2)) { goto L_8006E928; } // 8006E91C
  c->r[3]=c->r[1]+0x00000008u; // 8006E920
  c->lr=0x8006E928u; f_802267B8(c); // 8006E924
L_8006E928:;
  c->r[3]=c->r[31]|c->r[31]; // 8006E928
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006E92C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006E930
  c->lr=c->r[0]; // 8006E934
  c->r[1]=c->r[1]+0x00000020u; // 8006E938
  return; // 8006E93C
}

// fn_8006E940
void f_8006E940(Ctx* __restrict c) {
  trace_call(0x8006E940u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E940
  c->r[0]=c->lr; // 8006E944
  c->r[7]=0u+0x802B0000u; // 8006E948
  c->r[6]=0u+0x00000001u; // 8006E94C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006E950
  c->r[0]=0u+0x00000000u; // 8006E954
  c->r[3]=c->r[1]+0x00000008u; // 8006E958
  c->r[7]=c->r[7]+0x00003C68u; // 8006E95C
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006E960
  c->r[8]=0u+0x00000030u; // 8006E964
  c->lr=0x8006E96Cu; f_8020C0D0(c); // 8006E968
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006E96C
  c->lr=c->r[0]; // 8006E970
  c->r[1]=c->r[1]+0x00000010u; // 8006E974
  return; // 8006E978
}

// fn_8006E97C
void f_8006E97C(Ctx* __restrict c) {
  trace_call(0x8006E97Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E97C
  c->r[0]=c->lr; // 8006E980
  cmps(c,0,(int32_t)c->r[4],0); // 8006E984
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006E988
  if (crb(c,2)) { goto L_8006E9A4; } // 8006E98C
  c->r[0]=0u+0x00000000u; // 8006E990
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006E994
  c->r[3]=c->r[1]+0x00000008u; // 8006E998
  c->r[5]=0u+0x00000001u; // 8006E99C
  c->lr=0x8006E9A4u; f_8020CBF8(c); // 8006E9A0
L_8006E9A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006E9A4
  c->lr=c->r[0]; // 8006E9A8
  c->r[1]=c->r[1]+0x00000010u; // 8006E9AC
  return; // 8006E9B0
}

// fn_8006E9B4
void f_8006E9B4(Ctx* __restrict c) {
  trace_call(0x8006E9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006E9B4
  c->r[0]=c->lr; // 8006E9B8
  c->r[3]=c->r[13]+0xFFFF9828u; // 8006E9BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006E9C0
  c->r[5]=R32(c->r[13]+0xFFFF9828u); // 8006E9C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 8006E9C8
  c->r[5]=c->r[5]+c->r[4]; // 8006E9CC
  W32(c->r[13]+0xFFFF9828u,c->r[5]); // 8006E9D0
  cmpu(c,0,c->r[0],c->r[5]); // 8006E9D4
  if (!crb(c,0)) { goto L_8006E9E0; } // 8006E9D8
  W32(c->r[3]+0x00000004u,c->r[5]); // 8006E9DC
L_8006E9E0:;
  c->r[0]=0u+0x00000000u; // 8006E9E0
  c->r[7]=0u+0x802B0000u; // 8006E9E4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006E9E8
  c->r[3]=c->r[1]+0x00000008u; // 8006E9EC
  c->r[7]=c->r[7]+0x00003C68u; // 8006E9F0
  c->r[5]=0u+0x00000020u; // 8006E9F4
  c->r[6]=0u+0x00000001u; // 8006E9F8
  c->r[8]=0u+0x00000030u; // 8006E9FC
  c->lr=0x8006EA04u; f_8020C0D0(c); // 8006EA00
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006EA04
  c->lr=c->r[0]; // 8006EA08
  c->r[1]=c->r[1]+0x00000010u; // 8006EA0C
  return; // 8006EA10
}

// fn_8006EA14
void f_8006EA14(Ctx* __restrict c) {
  trace_call(0x8006EA14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006EA14
  c->r[0]=c->lr; // 8006EA18
  cmps(c,0,(int32_t)c->r[4],0); // 8006EA1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006EA20
  c->r[0]=R32(c->r[13]+0xFFFF9828u); // 8006EA24
  c->r[0]=c->r[0]-c->r[5]; // 8006EA28
  W32(c->r[13]+0xFFFF9828u,c->r[0]); // 8006EA2C
  if (crb(c,2)) { goto L_8006EA48; } // 8006EA30
  c->r[0]=0u+0x00000000u; // 8006EA34
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006EA38
  c->r[3]=c->r[1]+0x00000008u; // 8006EA3C
  c->r[5]=0u+0x00000001u; // 8006EA40
  c->lr=0x8006EA48u; f_8020CBF8(c); // 8006EA44
L_8006EA48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006EA48
  c->lr=c->r[0]; // 8006EA4C
  c->r[1]=c->r[1]+0x00000010u; // 8006EA50
  return; // 8006EA54
}

// fn_8006EA58
void f_8006EA58(Ctx* __restrict c) {
  trace_call(0x8006EA58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006EA58
  c->r[0]=c->lr; // 8006EA5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006EA60
  c->r[0]=0u+0x00000009u; // 8006EA64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006EA68
  c->r[31]=0u+0x802B0000u; // 8006EA6C
  c->r[31]=c->r[31]+0x00003C68u; // 8006EA70
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006EA74
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006EA78
  c->r[29]=c->r[3]|c->r[3]; // 8006EA7C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006EA80
  c->r[3]=c->r[31]+0x00000013u; // 8006EA84
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006EA88
  c->lr=0x8006EA90u; f_80019994(c); // 8006EA8C
  c->r[3]=c->r[1]+0x00000008u; // 8006EA90
  c->r[4]=0u+0x00000000u; // 8006EA94
  c->r[5]=0u+0x00000008u; // 8006EA98
  c->lr=0x8006EAA0u; f_80004714(c); // 8006EA9C
  c->r[3]=0u+0x80070000u; // 8006EAA0
  c->r[4]=0u+0x80070000u; // 8006EAA4
  c->r[3]=c->r[3]+0xFFFFE9B4u; // 8006EAA8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8006EAAC
  c->r[4]=c->r[4]+0xFFFFEA14u; // 8006EAB0
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8006EAB4
  c->r[3]=c->r[1]+0x00000008u; // 8006EAB8
  c->lr=0x8006EAC0u; f_801D1574(c); // 8006EABC
  cmps(c,0,(int32_t)c->r[3],-7); // 8006EAC0
  c->r[30]=c->r[3]|c->r[3]; // 8006EAC4
  if (crb(c,2)) { goto L_8006EB04; } // 8006EAC8
  if (!crb(c,0)) { goto L_8006EAE8; } // 8006EACC
  cmps(c,0,(int32_t)c->r[3],-28); // 8006EAD0
  if (crb(c,2)) { goto L_8006EB04; } // 8006EAD4
  if (!crb(c,0)) { goto L_8006EAF4; } // 8006EAD8
  cmps(c,0,(int32_t)c->r[3],-49); // 8006EADC
  if (crb(c,2)) { goto L_8006EB04; } // 8006EAE0
  goto L_8006EAF4; // 8006EAE4
L_8006EAE8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8006EAE8
  if (crb(c,2)) { goto L_8006EB30; } // 8006EAEC
  if (!crb(c,0)) { goto L_8006EB04; } // 8006EAF0
L_8006EAF4:;
  c->r[3]=0u+0x802B0000u; // 8006EAF4
  c->r[3]=c->r[3]+0x00003C68u; // 8006EAF8
  c->r[3]=c->r[3]+0x0000001Du; // 8006EAFC
  c->lr=0x8006EB04u; f_800723A8(c); // 8006EB00
L_8006EB04:;
  c->r[3]=c->r[30]|c->r[30]; // 8006EB04
  c->lr=0x8006EB0Cu; f_801C80CC(c); // 8006EB08
  c->r[5]=0u+0x802B0000u; // 8006EB0C
  W32(c->r[29]+0x00000000u,c->r[3]); // 8006EB10
  c->r[5]=c->r[5]+0x00003C68u; // 8006EB14
  c->r[4]=c->r[30]|c->r[30]; // 8006EB18
  c->r[3]=c->r[5]+0x00000031u; // 8006EB1C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006EB20
  c->lr=0x8006EB28u; f_80019994(c); // 8006EB24
  c->r[3]=0u+0x00000000u; // 8006EB28
  goto L_8006EC94; // 8006EB2C
L_8006EB30:;
  c->r[3]=c->r[31]+0x00000047u; // 8006EB30
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006EB34
  c->lr=0x8006EB3Cu; f_80019994(c); // 8006EB38
  c->r[3]=c->r[31]+0x00000050u; // 8006EB3C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006EB40
  c->lr=0x8006EB48u; f_80019994(c); // 8006EB44
  c->lr=0x8006EB4Cu; f_801D183C(c); // 8006EB48
  cmps(c,6,(int32_t)c->r[3],0); // 8006EB4C
  c->r[30]=c->r[3]|c->r[3]; // 8006EB50
  if (crb(c,26)) { goto L_8006EC7C; } // 8006EB54
  if (!crb(c,24)) { goto L_8006EC2C; } // 8006EB58
  cmps(c,0,(int32_t)c->r[3],-48); // 8006EB5C
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EB60
  if (!crb(c,0)) { goto L_8006EBC8; } // 8006EB64
  cmps(c,0,(int32_t)c->r[3],-102); // 8006EB68
  if (!crb(c,0)) { goto L_8006EBA4; } // 8006EB6C
  cmps(c,0,(int32_t)c->r[3],-121); // 8006EB70
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EB74
  if (!crb(c,0)) { goto L_8006EB90; } // 8006EB78
  c->r[4]=0u+0x80000000u; // 8006EB7C
  c->r[0]=c->r[4]+0x00000001u; // 8006EB80
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 8006EB84
  if (!crb(c,0)) { goto L_8006EC1C; } // 8006EB88
  goto L_8006EC0C; // 8006EB8C
L_8006EB90:;
  cmps(c,0,(int32_t)c->r[3],-110); // 8006EB90
  if (!crb(c,0)) { goto L_8006EC1C; } // 8006EB94
  cmps(c,0,(int32_t)c->r[3],-112); // 8006EB98
  if (!crb(c,0)) { goto L_8006EC0C; } // 8006EB9C
  goto L_8006EC1C; // 8006EBA0
L_8006EBA4:;
  cmps(c,0,(int32_t)c->r[3],-76); // 8006EBA4
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EBA8
  if (!crb(c,0)) { goto L_8006EBBC; } // 8006EBAC
  cmps(c,0,(int32_t)c->r[3],-99); // 8006EBB0
  if (!crb(c,0)) { goto L_8006EC1C; } // 8006EBB4
  goto L_8006EC0C; // 8006EBB8
L_8006EBBC:;
  cmps(c,0,(int32_t)c->r[3],-62); // 8006EBBC
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EBC0
  goto L_8006EC1C; // 8006EBC4
L_8006EBC8:;
  cmps(c,0,(int32_t)c->r[3],-10); // 8006EBC8
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EBCC
  if (!crb(c,0)) { goto L_8006EBF8; } // 8006EBD0
  cmps(c,0,(int32_t)c->r[3],-39); // 8006EBD4
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EBD8
  if (!crb(c,0)) { goto L_8006EBEC; } // 8006EBDC
  cmps(c,0,(int32_t)c->r[3],-45); // 8006EBE0
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EBE4
  goto L_8006EC1C; // 8006EBE8
L_8006EBEC:;
  cmps(c,0,(int32_t)c->r[3],-28); // 8006EBEC
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EBF0
  goto L_8006EC1C; // 8006EBF4
L_8006EBF8:;
  if (crb(c,26)) { goto L_8006EC0C; } // 8006EBF8
  if (!crb(c,24)) { goto L_8006EC1C; } // 8006EBFC
  cmps(c,0,(int32_t)c->r[3],-7); // 8006EC00
  if (crb(c,2)) { goto L_8006EC0C; } // 8006EC04
  goto L_8006EC1C; // 8006EC08
L_8006EC0C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006EC0C
  c->lr=0x8006EC14u; f_801C80CC(c); // 8006EC10
  W32(c->r[29]+0x00000000u,c->r[3]); // 8006EC14
  goto L_8006EC2C; // 8006EC18
L_8006EC1C:;
  c->r[3]=0u+0x802B0000u; // 8006EC1C
  c->r[3]=c->r[3]+0x00003C68u; // 8006EC20
  c->r[3]=c->r[3]+0x0000001Du; // 8006EC24
  c->lr=0x8006EC2Cu; f_800723A8(c); // 8006EC28
L_8006EC2C:;
  c->r[31]=0u+0x802B0000u; // 8006EC2C
  c->r[4]=c->r[30]|c->r[30]; // 8006EC30
  c->r[31]=c->r[31]+0x00003C68u; // 8006EC34
  c->r[3]=c->r[31]+0x0000005Du; // 8006EC38
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006EC3C
  c->lr=0x8006EC44u; f_80019994(c); // 8006EC40
  c->lr=0x8006EC48u; f_801D1740(c); // 8006EC44
  cmps(c,0,(int32_t)c->r[3],0); // 8006EC48
  if (!crb(c,0)) { goto L_8006EC74; } // 8006EC4C
  c->r[0]=c->r[3]+0x00000007u; // 8006EC50
  cmpu(c,0,c->r[0],0x00000001u); // 8006EC54
  if (!crb(c,1)) { goto L_8006EC74; } // 8006EC58
  cmps(c,0,(int32_t)c->r[3],-10); // 8006EC5C
  if (crb(c,2)) { goto L_8006EC74; } // 8006EC60
  cmps(c,0,(int32_t)c->r[3],-26); // 8006EC64
  if (crb(c,2)) { goto L_8006EC74; } // 8006EC68
  c->r[3]=c->r[31]+0x0000001Du; // 8006EC6C
  c->lr=0x8006EC74u; f_800723A8(c); // 8006EC70
L_8006EC74:;
  c->r[3]=0u+0x00000000u; // 8006EC74
  goto L_8006EC94; // 8006EC78
L_8006EC7C:;
  c->r[3]=c->r[31]+0x00000047u; // 8006EC7C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006EC80
  c->lr=0x8006EC88u; f_80019994(c); // 8006EC84
  c->r[0]=0u+0x00000000u; // 8006EC88
  W32(c->r[29]+0x00000000u,c->r[0]); // 8006EC8C
  c->r[3]=0u+0x00000001u; // 8006EC90
L_8006EC94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006EC94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006EC98
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006EC9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006ECA0
  c->lr=c->r[0]; // 8006ECA4
  c->r[1]=c->r[1]+0x00000020u; // 8006ECA8
  return; // 8006ECAC
}

// Init__3DWCFQ23DWC10AUTHSERVERPCcUl
void f_8006ECB0(Ctx* __restrict c) {
  trace_call(0x8006ECB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006ECB0
  c->r[0]=c->lr; // 8006ECB4
  c->r[6]=0u+0x80070000u; // 8006ECB8
  c->r[7]=0u+0x80070000u; // 8006ECBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006ECC0
  c->r[6]=c->r[6]+0xFFFFE940u; // 8006ECC4
  c->r[7]=c->r[7]+0xFFFFE97Cu; // 8006ECC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006ECCC
  c->lr=0x8006ECD4u; f_802791A0(c); // 8006ECD0
  c->r[31]=c->r[3]|c->r[3]; // 8006ECD4
  c->r[3]=0u+0x00000000u; // 8006ECD8
  c->lr=0x8006ECE0u; f_80279890(c); // 8006ECDC
  c->r[3]=c->r[31]|c->r[31]; // 8006ECE0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006ECE4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006ECE8
  c->lr=c->r[0]; // 8006ECEC
  c->r[1]=c->r[1]+0x00000010u; // 8006ECF0
  return; // 8006ECF4
}

// Shutdown__3DWCFv
void f_8006ECF8(Ctx* __restrict c) {
  trace_call(0x8006ECF8u);
  f_80279540(c); return; // 8006ECF8
}

// GetLastErrorEx__3DWCFPiPQ23DWC9ErrorType
void f_8006ECFC(Ctx* __restrict c) {
  trace_call(0x8006ECFCu);
  f_80279070(c); return; // 8006ECFC
}

// ClearError__3DWCFv
void f_8006ED00(Ctx* __restrict c) {
  trace_call(0x8006ED00u);
  f_80279120(c); return; // 8006ED00
}

// CreateUserData__3DWCFPQ23DWC8UserData
void f_8006ED04(Ctx* __restrict c) {
  trace_call(0x8006ED04u);
  f_80247E50(c); return; // 8006ED04
}

// CheckUserData__3DWCFPCQ23DWC8UserData
void f_8006ED08(Ctx* __restrict c) {
  trace_call(0x8006ED08u);
  f_80247E90(c); return; // 8006ED08
}

// CheckDirtyFlag__3DWCFPCQ23DWC8UserData
void f_8006ED0C(Ctx* __restrict c) {
  trace_call(0x8006ED0Cu);
  f_802481E0(c); return; // 8006ED0C
}

// ClearDirtyFlag__3DWCFPQ23DWC8UserData
void f_8006ED10(Ctx* __restrict c) {
  trace_call(0x8006ED10u);
  f_802481F0(c); return; // 8006ED10
}

// ReportUserData__3DWCFPCQ23DWC8UserData
void f_8006ED14(Ctx* __restrict c) {
  trace_call(0x8006ED14u);
  f_80248950(c); return; // 8006ED14
}

// GetIngamesnCheckResult__3DWCFv
void f_8006ED18(Ctx* __restrict c) {
  trace_call(0x8006ED18u);
  f_8024C3A0(c); return; // 8006ED18
}

// CheckProfanityExAsync__3DWCFPPCUsiPCciPcPiQ23DWC10ProfRegion
void f_8006ED1C(Ctx* __restrict c) {
  trace_call(0x8006ED1Cu);
  f_8024CAF0(c); return; // 8006ED1C
}

// CheckProfanityProcess__3DWCFv
void f_8006ED20(Ctx* __restrict c) {
  trace_call(0x8006ED20u);
  f_8024C770(c); return; // 8006ED20
}

// CheckProfanityAbort__3DWCFv
void f_8006ED24(Ctx* __restrict c) {
  trace_call(0x8006ED24u);
  f_8024CB70(c); return; // 8006ED24
}

// InitFriendsMatch__3DWCFPQ23DWC8UserDataiPCcPCc
void f_8006ED28(Ctx* __restrict c) {
  trace_call(0x8006ED28u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006ED28
  c->r[0]=c->lr; // 8006ED2C
  c->r[9]=c->r[4]|c->r[4]; // 8006ED30
  c->r[8]=c->r[5]|c->r[5]; // 8006ED34
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006ED38
  c->r[0]=0u+0x00000000u; // 8006ED3C
  c->r[7]=c->r[6]|c->r[6]; // 8006ED40
  c->r[4]=c->r[3]|c->r[3]; // 8006ED44
  c->r[5]=c->r[9]|c->r[9]; // 8006ED48
  c->r[6]=c->r[8]|c->r[8]; // 8006ED4C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8006ED50
  c->r[3]=0u+0x00000000u; // 8006ED54
  c->r[8]=0u+0x00000000u; // 8006ED58
  c->r[9]=0u+0x00000000u; // 8006ED5C
  c->r[10]=0u+0x00000000u; // 8006ED60
  c->lr=0x8006ED68u; f_8027D950(c); // 8006ED64
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006ED68
  c->lr=c->r[0]; // 8006ED6C
  c->r[1]=c->r[1]+0x00000010u; // 8006ED70
  return; // 8006ED74
}

// ShutdownFriendsMatch__3DWCFv
void f_8006ED78(Ctx* __restrict c) {
  trace_call(0x8006ED78u);
  f_8027DBC0(c); return; // 8006ED78
}

// ProcessFriendsMatch__3DWCFv
void f_8006ED7C(Ctx* __restrict c) {
  trace_call(0x8006ED7Cu);
  f_8027DD30(c); return; // 8006ED7C
}

// LoginAsync__3DWCFPCUsPFQ23DWC5ErroriPv_vPv
void f_8006ED80(Ctx* __restrict c) {
  trace_call(0x8006ED80u);
  c->r[6]=c->r[5]|c->r[5]; // 8006ED80
  c->r[5]=c->r[4]|c->r[4]; // 8006ED84
  c->r[4]=0u+0x00000000u; // 8006ED88
  f_8027E020(c); return; // 8006ED8C
}

// RnkInitialize__3DWCFPCcPCQ23DWC8UserData
void f_8006ED90(Ctx* __restrict c) {
  trace_call(0x8006ED90u);
  f_8024CBD0(c); return; // 8006ED90
}

// RnkShutdown__3DWCFv
void f_8006ED94(Ctx* __restrict c) {
  trace_call(0x8006ED94u);
  f_8024CCA0(c); return; // 8006ED94
}

// RnkPutScoreAsync__3DWCFUlQ23DWC9RnkRegionlPvUl
void f_8006ED98(Ctx* __restrict c) {
  trace_call(0x8006ED98u);
  f_8024CCD0(c); return; // 8006ED98
}

// RnkGetScoreAsync__3DWCFQ23DWC10RnkGetModeUlQ23DWC9RnkRegionPQ23DWC11RnkGetParam
void f_8006ED9C(Ctx* __restrict c) {
  trace_call(0x8006ED9Cu);
  f_8024CDE0(c); return; // 8006ED9C
}

// RnkCancelProcess__3DWCFv
void f_8006EDA0(Ctx* __restrict c) {
  trace_call(0x8006EDA0u);
  f_8024D000(c); return; // 8006EDA0
}

// RnkProcess__3DWCFv
void f_8006EDA4(Ctx* __restrict c) {
  trace_call(0x8006EDA4u);
  f_8024D060(c); return; // 8006EDA4
}

// RnkGetState__3DWCFv
void f_8006EDA8(Ctx* __restrict c) {
  trace_call(0x8006EDA8u);
  f_8024D1A0(c); return; // 8006EDA8
}

// RnkResGetRow__3DWCFPQ23DWC7RnkDataUl
void f_8006EDAC(Ctx* __restrict c) {
  trace_call(0x8006EDACu);
  f_8024D1B0(c); return; // 8006EDAC
}

// RnkResGetRowCount__3DWCFPUl
void f_8006EDB0(Ctx* __restrict c) {
  trace_call(0x8006EDB0u);
  f_8024D390(c); return; // 8006EDB0
}

// ServerTime__3DWCFv
void f_8006EDB4(Ctx* __restrict c) {
  trace_call(0x8006EDB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006EDB4
  c->r[0]=c->lr; // 8006EDB8
  W32(c->r[1]+0x00000064u,c->r[0]); // 8006EDBC
  c->r[3]=c->r[1]+0x00000028u; // 8006EDC0
  c->r[4]=c->r[1]+0x00000014u; // 8006EDC4
  c->lr=0x8006EDCCu; f_8024C3B0(c); // 8006EDC8
  c->r[3]=R32(c->r[1]+0x00000030u); // 8006EDCC
  c->r[4]=0u+0xFFFFFFFFu; // 8006EDD0
  c->r[11]=R32(c->r[1]+0x0000002Cu); // 8006EDD4
  c->r[0]=0u+0x00000000u; // 8006EDD8
  c->r[12]=c->r[3]+0xFFFFF894u; // 8006EDDC
  c->r[10]=R32(c->r[1]+0x00000028u); // 8006EDE0
  c->r[9]=R32(c->r[1]+0x0000001Cu); // 8006EDE4
  c->r[3]=c->r[1]+0x0000003Cu; // 8006EDE8
  c->r[8]=R32(c->r[1]+0x00000018u); // 8006EDEC
  c->r[7]=R32(c->r[1]+0x00000014u); // 8006EDF0
  c->r[6]=R32(c->r[1]+0x00000034u); // 8006EDF4
  c->r[5]=R32(c->r[1]+0x00000038u); // 8006EDF8
  W32(c->r[1]+0x00000050u,c->r[12]); // 8006EDFC
  W32(c->r[1]+0x0000004Cu,c->r[11]); // 8006EE00
  W32(c->r[1]+0x00000048u,c->r[10]); // 8006EE04
  W32(c->r[1]+0x00000044u,c->r[9]); // 8006EE08
  W32(c->r[1]+0x00000040u,c->r[8]); // 8006EE0C
  W32(c->r[1]+0x0000003Cu,c->r[7]); // 8006EE10
  W32(c->r[1]+0x00000054u,c->r[6]); // 8006EE14
  W32(c->r[1]+0x00000058u,c->r[5]); // 8006EE18
  W32(c->r[1]+0x0000005Cu,c->r[4]); // 8006EE1C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8006EE20
  c->lr=0x8006EE28u; f_800BA090(c); // 8006EE24
  W32(c->r[1]+0x00000010u,c->r[3]); // 8006EE28
  c->r[3]=0u+0x00000000u; // 8006EE2C
  c->lr=0x8006EE34u; f_800BA168(c); // 8006EE30
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8006EE34
  c->lr=0x8006EE3Cu; f_80084380(c); // 8006EE38
  W32(c->r[1]+0x00000008u,c->r[4]); // 8006EE3C
  c->r[3]=c->r[1]+0x00000010u; // 8006EE40
  c->lr=0x8006EE48u; f_800BA1A0(c); // 8006EE44
  c->r[3]=c->r[1]+0x0000000Cu; // 8006EE48
  c->lr=0x8006EE50u; f_800BA1A0(c); // 8006EE4C
  c->r[3]=c->r[1]+0x00000008u; // 8006EE50
  c->lr=0x8006EE58u; f_800BA1A0(c); // 8006EE54
  c->r[0]=R32(c->r[1]+0x00000064u); // 8006EE58
  c->r[3]=R32(c->r[1]+0x00000010u); // 8006EE5C
  c->lr=c->r[0]; // 8006EE60
  c->r[1]=c->r[1]+0x00000060u; // 8006EE64
  return; // 8006EE68
}

// CheckPCMessageRestriction__2SCFv
void f_8006EE6C(Ctx* __restrict c) {
  trace_call(0x8006EE6Cu);
  f_800DBC80(c); return; // 8006EE6C
}

// InitAsync__2SOFv
void f_8006EE70(Ctx* __restrict c) {
  trace_call(0x8006EE70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006EE70
  c->r[0]=c->lr; // 8006EE74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006EE78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006EE7C
  c->r[0]=R32(c->r[13]+0xFFFF9830u); // 8006EE80
  cmps(c,0,(int32_t)c->r[0],0); // 8006EE84
  if (crb(c,2)) { goto L_8006EE94; } // 8006EE88
  c->r[3]=0u+0x00000000u; // 8006EE8C
  goto L_8006EED4; // 8006EE90
L_8006EE94:;
  c->r[3]=0u+0x00000010u; // 8006EE94
  c->lr=0x8006EE9Cu; f_8020F51C(c); // 8006EE98
  cmps(c,0,(int32_t)c->r[3],0); // 8006EE9C
  c->r[31]=c->r[3]|c->r[3]; // 8006EEA0
  if (crb(c,2)) { goto L_8006EEC4; } // 8006EEA4
  c->lr=0x8006EEACu; f_80212D28(c); // 8006EEA8
  c->r[3]=0u+0x80310000u; // 8006EEAC
  c->r[0]=0u+0x00000000u; // 8006EEB0
  c->r[3]=c->r[3]+0xFFFFDDE0u; // 8006EEB4
  W32(c->r[31]+0x00000000u,c->r[3]); // 8006EEB8
  W32(c->r[31]+0x00000008u,c->r[0]); // 8006EEBC
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8006EEC0
L_8006EEC4:;
  W32(c->r[13]+0xFFFF9830u,c->r[31]); // 8006EEC4
  c->r[3]=c->r[31]|c->r[31]; // 8006EEC8
  c->lr=0x8006EED0u; f_80212D40(c); // 8006EECC
  c->r[3]=0u+0x00000001u; // 8006EED0
L_8006EED4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006EED4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006EED8
  c->lr=c->r[0]; // 8006EEDC
  c->r[1]=c->r[1]+0x00000010u; // 8006EEE0
  return; // 8006EEE4
}

// Status__2SOFPi
void f_8006EEE8(Ctx* __restrict c) {
  trace_call(0x8006EEE8u);
  c->r[4]=R32(c->r[13]+0xFFFF9830u); // 8006EEE8
  c->r[0]=0u+0x00000000u; // 8006EEEC
  cmps(c,0,(int32_t)c->r[4],0); // 8006EEF0
  if (crb(c,2)) { goto L_8006EF08; } // 8006EEF4
  if (crb(c,2)) { goto L_8006EF08; } // 8006EEF8
  c->r[0]=R32(c->r[4]+0x00000008u); // 8006EEFC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8006EF00
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8006EF04
L_8006EF08:;
  c->r[3]=c->r[0]|c->r[0]; // 8006EF08
  return; // 8006EF0C
}

// InitEnd__2SOFv
void f_8006EF10(Ctx* __restrict c) {
  trace_call(0x8006EF10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006EF10
  c->r[0]=c->lr; // 8006EF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006EF18
  c->r[3]=R32(c->r[13]+0xFFFF9830u); // 8006EF1C
  cmps(c,0,(int32_t)c->r[3],0); // 8006EF20
  if (crb(c,2)) { goto L_8006EF48; } // 8006EF24
  if (crb(c,2)) { goto L_8006EF40; } // 8006EF28
  c->r[12]=R32(c->r[3]+0x00000000u); // 8006EF2C
  c->r[4]=0u+0x00000001u; // 8006EF30
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8006EF34
  c->ctr=c->r[12]; // 8006EF38
  if (true) { c->lr=0x8006EF40u; dispatch(c,c->ctr); } // 8006EF3C
L_8006EF40:;
  c->r[0]=0u+0x00000000u; // 8006EF40
  W32(c->r[13]+0xFFFF9830u,c->r[0]); // 8006EF44
L_8006EF48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006EF48
  c->lr=c->r[0]; // 8006EF4C
  c->r[1]=c->r[1]+0x00000010u; // 8006EF50
  return; // 8006EF54
}

// __dt__Q22SO10InitThreadFv
void f_8006EF58(Ctx* __restrict c) {
  trace_call(0x8006EF58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006EF58
  c->r[0]=c->lr; // 8006EF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8006EF60
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006EF64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006EF68
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006EF6C
  c->r[30]=c->r[4]|c->r[4]; // 8006EF70
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006EF74
  c->r[29]=c->r[3]|c->r[3]; // 8006EF78
  if (crb(c,2)) { goto L_8006F008; } // 8006EF7C
  c->r[4]=0u+0x80310000u; // 8006EF80
  c->r[31]=0u+0x00000000u; // 8006EF84
  c->r[4]=c->r[4]+0xFFFFDDE0u; // 8006EF88
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006EF8C
  c->lr=0x8006EF94u; f_80071E78(c); // 8006EF90
  cmps(c,0,(int32_t)c->r[3],0); // 8006EF94
  if (!crb(c,2)) { goto L_8006EFC0; } // 8006EF98
  c->lr=0x8006EFA0u; f_80071E80(c); // 8006EF9C
  cmps(c,0,(int32_t)c->r[3],0); // 8006EFA0
  if (!crb(c,2)) { goto L_8006EFC0; } // 8006EFA4
  c->lr=0x8006EFACu; f_80071EB8(c); // 8006EFA8
  cmps(c,0,(int32_t)c->r[3],0); // 8006EFAC
  if (!crb(c,2)) { goto L_8006EFC0; } // 8006EFB0
  c->lr=0x8006EFB8u; f_80071EC0(c); // 8006EFB4
  cmps(c,0,(int32_t)c->r[3],0); // 8006EFB8
  if (crb(c,2)) { goto L_8006EFC4; } // 8006EFBC
L_8006EFC0:;
  c->r[31]=0u+0x00000001u; // 8006EFC0
L_8006EFC4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8006EFC4
  if (crb(c,2)) { goto L_8006EFE4; } // 8006EFC8
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8006EFCC
  cmps(c,0,(int32_t)c->r[0],0); // 8006EFD0
  if (!crb(c,2)) { goto L_8006EFE4; } // 8006EFD4
  c->r[3]=c->r[29]|c->r[29]; // 8006EFD8
  c->lr=0x8006EFE0u; f_80212E9C(c); // 8006EFDC
  goto L_8006EFEC; // 8006EFE0
L_8006EFE4:;
  c->r[3]=c->r[29]|c->r[29]; // 8006EFE4
  c->lr=0x8006EFECu; f_80212E14(c); // 8006EFE8
L_8006EFEC:;
  c->r[3]=c->r[29]|c->r[29]; // 8006EFEC
  c->r[4]=0u+0x00000000u; // 8006EFF0
  c->lr=0x8006EFF8u; f_80212F34(c); // 8006EFF4
  cmps(c,0,(int32_t)c->r[30],0); // 8006EFF8
  if (!crb(c,1)) { goto L_8006F008; } // 8006EFFC
  c->r[3]=c->r[29]|c->r[29]; // 8006F000
  c->lr=0x8006F008u; f_80210AFC(c); // 8006F004
L_8006F008:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006F008
  c->r[3]=c->r[29]|c->r[29]; // 8006F00C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006F010
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006F014
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006F018
  c->lr=c->r[0]; // 8006F01C
  c->r[1]=c->r[1]+0x00000020u; // 8006F020
  return; // 8006F024
}

// Shutdown__2SOFv
void f_8006F028(Ctx* __restrict c) {
  trace_call(0x8006F028u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F028
  c->r[0]=c->lr; // 8006F02C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F030
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006F034
  c->lr=0x8006F03Cu; f_801D1C70(c); // 8006F038
  cmps(c,0,(int32_t)c->r[3],0); // 8006F03C
  if (!crb(c,0)) { goto L_8006F078; } // 8006F040
  cmps(c,0,(int32_t)c->r[3],-39); // 8006F044
  if (crb(c,2)) { goto L_8006F078; } // 8006F048
  cmps(c,0,(int32_t)c->r[3],-7); // 8006F04C
  if (crb(c,2)) { goto L_8006F078; } // 8006F050
  cmps(c,0,(int32_t)c->r[3],-10); // 8006F054
  if (crb(c,2)) { goto L_8006F078; } // 8006F058
  c->r[0]=c->r[3]+0x80000000u; // 8006F05C
  cmpu(c,0,c->r[0],0x00000000u); // 8006F060
  if (crb(c,2)) { goto L_8006F078; } // 8006F064
  c->r[3]=0u+0x802B0000u; // 8006F068
  c->r[3]=c->r[3]+0x00003C68u; // 8006F06C
  c->r[3]=c->r[3]+0x0000001Du; // 8006F070
  c->lr=0x8006F078u; f_800723A8(c); // 8006F074
L_8006F078:;
  c->lr=0x8006F07Cu; f_801D1740(c); // 8006F078
  cmps(c,0,(int32_t)c->r[3],0); // 8006F07C
  if (!crb(c,0)) { goto L_8006F0B0; } // 8006F080
  c->r[0]=c->r[3]+0x00000007u; // 8006F084
  cmpu(c,0,c->r[0],0x00000001u); // 8006F088
  if (!crb(c,1)) { goto L_8006F0B0; } // 8006F08C
  cmps(c,0,(int32_t)c->r[3],-10); // 8006F090
  if (crb(c,2)) { goto L_8006F0B0; } // 8006F094
  cmps(c,0,(int32_t)c->r[3],-26); // 8006F098
  if (crb(c,2)) { goto L_8006F0B0; } // 8006F09C
  c->r[3]=0u+0x802B0000u; // 8006F0A0
  c->r[3]=c->r[3]+0x00003C68u; // 8006F0A4
  c->r[3]=c->r[3]+0x0000001Du; // 8006F0A8
  c->lr=0x8006F0B0u; f_800723A8(c); // 8006F0AC
L_8006F0B0:;
  c->r[31]=0u+0x802B0000u; // 8006F0B0
  c->r[31]=c->r[31]+0x00003C68u; // 8006F0B4
  c->r[3]=c->r[31]+0x00000076u; // 8006F0B8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F0BC
  c->lr=0x8006F0C4u; f_80019994(c); // 8006F0C0
  c->r[4]=c->r[13]+0xFFFF9828u; // 8006F0C4
  c->r[3]=c->r[31]+0x00000097u; // 8006F0C8
  c->r[4]=R32(c->r[4]+0x00000004u); // 8006F0CC
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F0D0
  c->lr=0x8006F0D8u; f_80019994(c); // 8006F0D4
  c->r[3]=c->r[31]+0x00000076u; // 8006F0D8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F0DC
  c->lr=0x8006F0E4u; f_80019994(c); // 8006F0E0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F0E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006F0E8
  c->lr=c->r[0]; // 8006F0EC
  c->r[1]=c->r[1]+0x00000010u; // 8006F0F0
  return; // 8006F0F4
}

// __cl__Q22SO10InitThreadFv
void f_8006F0F8(Ctx* __restrict c) {
  trace_call(0x8006F0F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F0F8
  c->r[0]=c->lr; // 8006F0FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006F100
  c->r[0]=0u+0x00000000u; // 8006F104
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006F108
  c->r[31]=c->r[3]|c->r[3]; // 8006F10C
  c->r[3]=c->r[1]+0x00000008u; // 8006F110
  W32(c->r[1]+0x00000008u,c->r[0]); // 8006F114
  c->lr=0x8006F11Cu; f_8006EA58(c); // 8006F118
  cmps(c,0,(int32_t)c->r[3],0); // 8006F11C
  if (crb(c,2)) { goto L_8006F140; } // 8006F120
  c->r[4]=0u+0x80310000u; // 8006F124
  c->r[3]=c->r[13]+0xFFFFA418u; // 8006F128
  c->r[4]=c->r[4]+0xFFFFDE20u; // 8006F12C
  c->lr=0x8006F134u; f_8020A210(c); // 8006F130
  c->r[0]=0u+0x00000001u; // 8006F134
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8006F138
  goto L_8006F160; // 8006F13C
L_8006F140:;
  c->r[4]=0u+0x80310000u; // 8006F140
  c->r[3]=c->r[13]+0xFFFFA418u; // 8006F144
  c->r[4]=c->r[4]+0xFFFFDDFCu; // 8006F148
  c->lr=0x8006F150u; f_8020A210(c); // 8006F14C
  c->r[3]=R32(c->r[1]+0x00000008u); // 8006F150
  c->r[0]=0u+0x00000002u; // 8006F154
  W32(c->r[31]+0x00000008u,c->r[3]); // 8006F158
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8006F15C
L_8006F160:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006F160
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006F164
  c->lr=c->r[0]; // 8006F168
  c->r[1]=c->r[1]+0x00000020u; // 8006F16C
  return; // 8006F170
}

// ConvertStringAsciiToUnicode__3ENCFPUsPlPCUcPl
void f_8006F174(Ctx* __restrict c) {
  trace_call(0x8006F174u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F174
  c->r[4]=0u+0x802B0000u; // 8006F178
  c->r[4]=c->r[4]+0x00003D18u; // 8006F17C
  c->r[0]=0u+0x00000014u; // 8006F180
  c->r[8]=c->r[1]+0x00000004u; // 8006F184
  c->r[7]=c->r[4]+0xFFFFFFFCu; // 8006F188
  c->ctr=c->r[0]; // 8006F18C
L_8006F190:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 8006F190
  {uint32_t ea=c->r[7]+0x00000008u; c->r[0]=R32(ea); c->r[7]=ea;} // 8006F194
  W32(c->r[8]+0x00000004u,c->r[4]); // 8006F198
  {uint32_t ea=c->r[8]+0x00000008u; W32(ea,c->r[0]); c->r[8]=ea;} // 8006F19C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006F190; } // 8006F1A0
  c->r[7]=c->r[1]+0x00000008u; // 8006F1A4
  c->r[10]=0u+0x00000000u; // 8006F1A8
  c->r[0]=0u+0x00000028u; // 8006F1AC
  goto L_8006F200; // 8006F1B0
L_8006F1B4:;
  c->r[9]=c->r[1]+0x00000008u; // 8006F1B4
  c->r[11]=0u+0x00000000u; // 8006F1B8
  c->ctr=c->r[0]; // 8006F1BC
L_8006F1C0:;
  c->r[4]=R8(c->r[9]+0x00000000u); // 8006F1C0
  c->r[8]=R8(c->r[5]+0x00000000u); // 8006F1C4
  c->r[4]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8006F1C8
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[4]); // 8006F1CC
  if (!crb(c,2)) { goto L_8006F1F0; } // 8006F1D0
  c->r[4]=rotl(c->r[11],2)&0xFFFFFFFCu; // 8006F1D4
  c->r[5]=c->r[5]+0x00000001u; // 8006F1D8
  c->r[4]=c->r[7]+c->r[4]; // 8006F1DC
  c->r[4]=R16(c->r[4]+0x00000002u); // 8006F1E0
  W16(c->r[3]+0x00000000u,c->r[4]); // 8006F1E4
  c->r[3]=c->r[3]+0x00000002u; // 8006F1E8
  goto L_8006F1FC; // 8006F1EC
L_8006F1F0:;
  c->r[9]=c->r[9]+0x00000004u; // 8006F1F0
  c->r[11]=c->r[11]+0x00000001u; // 8006F1F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8006F1C0; } // 8006F1F8
L_8006F1FC:;
  c->r[10]=c->r[10]+0x00000001u; // 8006F1FC
L_8006F200:;
  c->r[4]=R32(c->r[6]+0x00000000u); // 8006F200
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[4]); // 8006F204
  if (crb(c,0)) { IRQCHK(c); goto L_8006F1B4; } // 8006F208
  c->r[3]=c->r[6]|c->r[6]; // 8006F20C
  c->r[1]=c->r[1]+0x000000B0u; // 8006F210
  return; // 8006F214
}

// __ct__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F218(Ctx* __restrict c) {
  trace_call(0x8006F218u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F218
  c->r[0]=c->lr; // 8006F21C
  c->r[4]=0u+0x80310000u; // 8006F220
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006F224
  c->r[4]=c->r[4]+0xFFFFDE70u; // 8006F228
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8006F22C
  c->r[30]=0u+0x00000000u; // 8006F230
  c->r[29]=c->r[3]+0x00000048u; // 8006F234
  c->r[27]=c->r[3]|c->r[3]; // 8006F238
  W32(c->r[3]+0x00000000u,c->r[4]); // 8006F23C
  W32(c->r[3]+0x00000044u,c->r[30]); // 8006F240
  c->r[3]=c->r[29]|c->r[29]; // 8006F244
  c->lr=0x8006F24Cu; f_8001C7C4(c); // 8006F248
  c->r[31]=0u+0x80310000u; // 8006F24C
  c->r[28]=c->r[27]+0x00000164u; // 8006F250
  c->r[31]=c->r[31]+0xFFFFDE7Cu; // 8006F254
  W32(c->r[29]+0x00000000u,c->r[31]); // 8006F258
  c->r[3]=c->r[28]|c->r[28]; // 8006F25C
  c->lr=0x8006F264u; f_8001C7C4(c); // 8006F260
  c->r[29]=c->r[27]+0x00000280u; // 8006F264
  W32(c->r[28]+0x00000000u,c->r[31]); // 8006F268
  c->r[3]=c->r[29]|c->r[29]; // 8006F26C
  c->lr=0x8006F274u; f_8001C7C4(c); // 8006F270
  c->r[28]=c->r[27]+0x0000039Cu; // 8006F274
  W32(c->r[29]+0x00000000u,c->r[31]); // 8006F278
  c->r[3]=c->r[28]|c->r[28]; // 8006F27C
  c->lr=0x8006F284u; f_8001C7C4(c); // 8006F280
  c->r[29]=c->r[27]+0x000004B8u; // 8006F284
  W32(c->r[28]+0x00000000u,c->r[31]); // 8006F288
  c->r[3]=c->r[29]|c->r[29]; // 8006F28C
  c->lr=0x8006F294u; f_8001C7C4(c); // 8006F290
  W32(c->r[29]+0x00000000u,c->r[31]); // 8006F294
  c->r[3]=c->r[27]|c->r[27]; // 8006F298
  W8(c->r[27]+0x000005DCu,c->r[30]); // 8006F29C
  W8(c->r[27]+0x000005DDu,c->r[30]); // 8006F2A0
  W32(c->r[27]+0x000005D4u,c->r[30]); // 8006F2A4
  W8(c->r[27]+0x000005D8u,c->r[30]); // 8006F2A8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8006F2AC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006F2B0
  c->lr=c->r[0]; // 8006F2B4
  c->r[1]=c->r[1]+0x00000020u; // 8006F2B8
  return; // 8006F2BC
}

// __dt__Q25Alice14BinaryResourceFv
void f_8006F2C0(Ctx* __restrict c) {
  trace_call(0x8006F2C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F2C0
  c->r[0]=c->lr; // 8006F2C4
  cmps(c,0,(int32_t)c->r[3],0); // 8006F2C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F2CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006F2D0
  c->r[31]=c->r[4]|c->r[4]; // 8006F2D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006F2D8
  c->r[30]=c->r[3]|c->r[3]; // 8006F2DC
  if (crb(c,2)) { goto L_8006F2FC; } // 8006F2E0
  c->r[4]=0u+0x00000000u; // 8006F2E4
  c->lr=0x8006F2ECu; f_8001C88C(c); // 8006F2E8
  cmps(c,0,(int32_t)c->r[31],0); // 8006F2EC
  if (!crb(c,1)) { goto L_8006F2FC; } // 8006F2F0
  c->r[3]=c->r[30]|c->r[30]; // 8006F2F4
  c->lr=0x8006F2FCu; f_80210AFC(c); // 8006F2F8
L_8006F2FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8006F2FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006F300
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006F304
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F308
  c->lr=c->r[0]; // 8006F30C
  c->r[1]=c->r[1]+0x00000010u; // 8006F310
  return; // 8006F314
}

// __dt__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F318(Ctx* __restrict c) {
  trace_call(0x8006F318u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F318
  c->r[0]=c->lr; // 8006F31C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F320
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F324
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006F328
  c->r[31]=c->r[4]|c->r[4]; // 8006F32C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006F330
  c->r[30]=c->r[3]|c->r[3]; // 8006F334
  if (crb(c,2)) { goto L_8006F39C; } // 8006F338
  c->r[3]=addc(c,c->r[3],0x000004B8u,0); cr0(c,c->r[3]); // 8006F33C
  if (crb(c,2)) { goto L_8006F34C; } // 8006F340
  c->r[4]=0u+0x00000000u; // 8006F344
  c->lr=0x8006F34Cu; f_8001C88C(c); // 8006F348
L_8006F34C:;
  c->r[3]=addc(c,c->r[30],0x0000039Cu,0); cr0(c,c->r[3]); // 8006F34C
  if (crb(c,2)) { goto L_8006F35C; } // 8006F350
  c->r[4]=0u+0x00000000u; // 8006F354
  c->lr=0x8006F35Cu; f_8001C88C(c); // 8006F358
L_8006F35C:;
  c->r[3]=addc(c,c->r[30],0x00000280u,0); cr0(c,c->r[3]); // 8006F35C
  if (crb(c,2)) { goto L_8006F36C; } // 8006F360
  c->r[4]=0u+0x00000000u; // 8006F364
  c->lr=0x8006F36Cu; f_8001C88C(c); // 8006F368
L_8006F36C:;
  c->r[3]=addc(c,c->r[30],0x00000164u,0); cr0(c,c->r[3]); // 8006F36C
  if (crb(c,2)) { goto L_8006F37C; } // 8006F370
  c->r[4]=0u+0x00000000u; // 8006F374
  c->lr=0x8006F37Cu; f_8001C88C(c); // 8006F378
L_8006F37C:;
  c->r[3]=addc(c,c->r[30],0x00000048u,0); cr0(c,c->r[3]); // 8006F37C
  if (crb(c,2)) { goto L_8006F38C; } // 8006F380
  c->r[4]=0u+0x00000000u; // 8006F384
  c->lr=0x8006F38Cu; f_8001C88C(c); // 8006F388
L_8006F38C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8006F38C
  if (!crb(c,1)) { goto L_8006F39C; } // 8006F390
  c->r[3]=c->r[30]|c->r[30]; // 8006F394
  c->lr=0x8006F39Cu; f_80210AFC(c); // 8006F398
L_8006F39C:;
  c->r[3]=c->r[30]|c->r[30]; // 8006F39C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006F3A0
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006F3A4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F3A8
  c->lr=c->r[0]; // 8006F3AC
  c->r[1]=c->r[1]+0x00000010u; // 8006F3B0
  return; // 8006F3B4
}

// resourceInit__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F3B8(Ctx* __restrict c) {
  trace_call(0x8006F3B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F3B8
  c->r[0]=c->lr; // 8006F3BC
  c->r[4]=0u+0x802B0000u; // 8006F3C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F3C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006F3C8
  c->r[31]=c->r[3]|c->r[3]; // 8006F3CC
  c->r[3]=c->r[4]+0x00003DFCu; // 8006F3D0
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F3D4
  c->lr=0x8006F3DCu; f_80019994(c); // 8006F3D8
  c->r[0]=0u+0x00000000u; // 8006F3DC
  W8(c->r[31]+0x000005DCu,c->r[0]); // 8006F3E0
  c->r[3]=c->r[31]|c->r[31]; // 8006F3E4
  W8(c->r[31]+0x000005DDu,c->r[0]); // 8006F3E8
  c->lr=0x8006F3F0u; f_8006FA6C(c); // 8006F3EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F3F0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006F3F4
  c->lr=c->r[0]; // 8006F3F8
  c->r[1]=c->r[1]+0x00000010u; // 8006F3FC
  return; // 8006F400
}

// resourceExec__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F404(Ctx* __restrict c) {
  trace_call(0x8006F404u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F404
  c->r[0]=c->lr; // 8006F408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F40C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006F410
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006F414
  c->r[30]=c->r[3]|c->r[3]; // 8006F418
  c->r[0]=R8(c->r[3]+0x000005DCu); // 8006F41C
  cmps(c,0,(int32_t)c->r[0],0); // 8006F420
  if (!crb(c,2)) { goto L_8006F5B0; } // 8006F424
  c->r[4]=0u+0x00000000u; // 8006F428
  c->r[3]=c->r[3]+0x00000048u; // 8006F42C
  c->lr=0x8006F434u; f_8001CAE8(c); // 8006F430
  c->r[3]=c->r[30]+0x00000164u; // 8006F434
  c->r[4]=0u+0x00000000u; // 8006F438
  c->lr=0x8006F440u; f_8001CAE8(c); // 8006F43C
  c->r[3]=c->r[30]+0x00000280u; // 8006F440
  c->r[4]=0u+0x00000000u; // 8006F444
  c->lr=0x8006F44Cu; f_8001CAE8(c); // 8006F448
  c->r[3]=c->r[30]+0x0000039Cu; // 8006F44C
  c->r[4]=0u+0x00000000u; // 8006F450
  c->lr=0x8006F458u; f_8001CAE8(c); // 8006F454
  c->r[3]=c->r[30]+0x000004B8u; // 8006F458
  c->r[4]=0u+0x00000000u; // 8006F45C
  c->lr=0x8006F464u; f_8001CAE8(c); // 8006F460
  c->r[3]=c->r[30]+0x00000048u; // 8006F464
  c->r[31]=0u+0x00000000u; // 8006F468
  c->lr=0x8006F470u; f_8001CD30(c); // 8006F46C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F470
  if (crb(c,2)) { goto L_8006F4BC; } // 8006F474
  c->r[3]=c->r[30]+0x00000164u; // 8006F478
  c->lr=0x8006F480u; f_8001CD30(c); // 8006F47C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F480
  if (crb(c,2)) { goto L_8006F4BC; } // 8006F484
  c->r[3]=c->r[30]+0x00000280u; // 8006F488
  c->lr=0x8006F490u; f_8001CD30(c); // 8006F48C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F490
  if (crb(c,2)) { goto L_8006F4BC; } // 8006F494
  c->r[3]=c->r[30]+0x0000039Cu; // 8006F498
  c->lr=0x8006F4A0u; f_8001CD30(c); // 8006F49C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F4A0
  if (crb(c,2)) { goto L_8006F4BC; } // 8006F4A4
  c->r[3]=c->r[30]+0x000004B8u; // 8006F4A8
  c->lr=0x8006F4B0u; f_8001CD30(c); // 8006F4AC
  cmps(c,0,(int32_t)c->r[3],0); // 8006F4B0
  if (crb(c,2)) { goto L_8006F4BC; } // 8006F4B4
  c->r[31]=0u+0x00000001u; // 8006F4B8
L_8006F4BC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8006F4BC
  if (crb(c,2)) { goto L_8006F5B0; } // 8006F4C0
  c->r[3]=c->r[30]+0x00000048u; // 8006F4C4
  c->lr=0x8006F4CCu; f_8001D0A0(c); // 8006F4C8
  W32(c->r[30]+0x00000004u,c->r[3]); // 8006F4CC
  c->r[3]=c->r[30]+0x00000164u; // 8006F4D0
  c->lr=0x8006F4D8u; f_8001D0A0(c); // 8006F4D4
  W32(c->r[30]+0x00000008u,c->r[3]); // 8006F4D8
  c->r[3]=c->r[30]+0x00000280u; // 8006F4DC
  c->lr=0x8006F4E4u; f_8001D0A0(c); // 8006F4E0
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8006F4E4
  c->r[3]=c->r[30]+0x0000039Cu; // 8006F4E8
  c->lr=0x8006F4F0u; f_8001D0A0(c); // 8006F4EC
  W32(c->r[30]+0x00000010u,c->r[3]); // 8006F4F0
  c->r[3]=c->r[30]+0x0000039Cu; // 8006F4F4
  c->lr=0x8006F4FCu; f_8001CD44(c); // 8006F4F8
  c->r[4]=0u+0x00000000u; // 8006F4FC
  c->r[0]=0u+0x00000001u; // 8006F500
  W32(c->r[30]+0x0000002Cu,c->r[3]); // 8006F504
  W32(c->r[30]+0x00000018u,c->r[4]); // 8006F508
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8006F50C
  W32(c->r[30]+0x00000024u,c->r[4]); // 8006F510
  c->lr=0x8006F518u; f_800724A4(c); // 8006F514
  cmps(c,0,(int32_t)c->r[3],0); // 8006F518
  if (crb(c,2)) { goto L_8006F52C; } // 8006F51C
  {uint32_t ea=c->r[2]+0xFFFFA6B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F520
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8006F524
  goto L_8006F534; // 8006F528
L_8006F52C:;
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F52C
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[0]);} // 8006F530
L_8006F534:;
  c->r[4]=R32(c->r[30]+0x00000028u); // 8006F534
  c->r[3]=0u+0x00000004u; // 8006F538
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F53C
  c->r[3]=c->r[3]|0x00040000u; // 8006F540
  c->r[0]=c->r[4]+0x00000001u; // 8006F544
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8006F548
  c->r[0]=rotl(c->r[0],0)&0x00000003u; // 8006F54C
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 8006F550
  W32(c->r[30]+0x00000028u,c->r[0]); // 8006F554
  mtspr(c,914,c->r[3]); // 8006F558
  c->r[3]=0u+0x00000005u; // 8006F55C
  c->r[3]=c->r[3]|0x00050000u; // 8006F560
  mtspr(c,915,c->r[3]); // 8006F564
  c->r[3]=0u+0x00000006u; // 8006F568
  c->r[3]=c->r[3]|0x00060000u; // 8006F56C
  mtspr(c,916,c->r[3]); // 8006F570
  c->r[3]=0u+0x00000007u; // 8006F574
  c->r[3]=c->r[3]|0x00070000u; // 8006F578
  mtspr(c,917,c->r[3]); // 8006F57C
  c->r[3]=c->r[30]+0x00000004u; // 8006F580
  c->lr=0x8006F588u; f_801D95F0(c); // 8006F584
  c->r[3]=0u+0x00000001u; // 8006F588
  c->lr=0x8006F590u; f_801D9850(c); // 8006F58C
  c->r[3]=c->r[30]+0x000004B8u; // 8006F590
  c->lr=0x8006F598u; f_8001D0A0(c); // 8006F594
  c->r[5]=0u+0x00020000u; // 8006F598
  c->r[4]=R32(c->r[30]+0x00000044u); // 8006F59C
  c->r[5]=c->r[5]+0xFFFF8700u; // 8006F5A0
  c->lr=0x8006F5A8u; f_801D98C0(c); // 8006F5A4
  c->r[0]=0u+0x00000001u; // 8006F5A8
  W8(c->r[30]+0x000005DCu,c->r[0]); // 8006F5AC
L_8006F5B0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F5B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006F5B4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006F5B8
  c->lr=c->r[0]; // 8006F5BC
  c->r[1]=c->r[1]+0x00000010u; // 8006F5C0
  return; // 8006F5C4
}

// init__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F5C8(Ctx* __restrict c) {
  trace_call(0x8006F5C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F5C8
  c->r[0]=c->lr; // 8006F5CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006F5D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006F5D4
  c->r[31]=c->r[3]|c->r[3]; // 8006F5D8
  c->lr=0x8006F5E0u; f_802216D8(c); // 8006F5DC
  c->r[0]=rotl(c->r[3],8)&0x000000FFu; // 8006F5E0
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006F5E4
  c->r[3]=c->r[1]+0x00000008u; // 8006F5E8
  c->lr=0x8006F5F0u; f_80221F9C(c); // 8006F5EC
  c->r[0]=0u+0x00000000u; // 8006F5F0
  W32(c->r[31]+0x000005D4u,c->r[0]); // 8006F5F4
  W8(c->r[31]+0x000005D8u,c->r[0]); // 8006F5F8
  W8(c->r[31]+0x000005DDu,c->r[0]); // 8006F5FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006F600
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006F604
  c->lr=c->r[0]; // 8006F608
  c->r[1]=c->r[1]+0x00000020u; // 8006F60C
  return; // 8006F610
}

// calc__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F614(Ctx* __restrict c) {
  trace_call(0x8006F614u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F614
  c->r[0]=c->lr; // 8006F618
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F61C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006F620
  c->r[31]=c->r[3]|c->r[3]; // 8006F624
  c->r[0]=R8(c->r[3]+0x000005DCu); // 8006F628
  cmps(c,0,(int32_t)c->r[0],0); // 8006F62C
  if (!crb(c,2)) { goto L_8006F63C; } // 8006F630
  c->lr=0x8006F638u; f_8006F404(c); // 8006F634
  goto L_8006F654; // 8006F638
L_8006F63C:;
  c->r[0]=R8(c->r[3]+0x000005DDu); // 8006F63C
  cmps(c,0,(int32_t)c->r[0],0); // 8006F640
  if (!crb(c,2)) { goto L_8006F654; } // 8006F644
  c->lr=0x8006F64Cu; f_801D9780(c); // 8006F648
  c->r[0]=0u+0x00000001u; // 8006F64C
  W8(c->r[31]+0x000005DDu,c->r[0]); // 8006F650
L_8006F654:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F654
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006F658
  c->lr=c->r[0]; // 8006F65C
  c->r[1]=c->r[1]+0x00000010u; // 8006F660
  return; // 8006F664
}

// draw__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F668(Ctx* __restrict c) {
  trace_call(0x8006F668u);
  {uint32_t ea=c->r[1]+0xFFFFFF30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F668
  c->r[0]=c->lr; // 8006F66C
  W32(c->r[1]+0x000000D4u,c->r[0]); // 8006F670
  c->r[11]=c->r[1]+0x000000B0u; // 8006F674
  {uint32_t ea=c->r[1]+0x000000C0u; WF64(ea,c->f[31]);} // 8006F678
  {uint32_t ea=c->r[1]+0x000000C8u; psq_store(c,31,ea,0,0);} // 8006F67C
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[30]);} // 8006F680
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,30,ea,0,0);} // 8006F684
  c->lr=0x8006F68Cu; f_800ADA2C(c); // 8006F688
  c->r[0]=R8(c->r[3]+0x000005DCu); // 8006F68C
  c->r[27]=c->r[3]|c->r[3]; // 8006F690
  cmps(c,0,(int32_t)c->r[0],0); // 8006F694
  if (crb(c,2)) { goto L_8006F934; } // 8006F698
  c->r[0]=R8(c->r[3]+0x000005DDu); // 8006F69C
  cmps(c,0,(int32_t)c->r[0],0); // 8006F6A0
  if (crb(c,2)) { goto L_8006F934; } // 8006F6A4
  c->r[30]=0u+0x00000000u; // 8006F6A8
  W32(c->r[1]+0x00000050u,c->r[30]); // 8006F6AC
  c->r[29]=c->r[1]+0x00000050u; // 8006F6B0
  c->r[28]=0u+0x00000000u; // 8006F6B4
  W32(c->r[1]+0x00000054u,c->r[30]); // 8006F6B8
  W32(c->r[1]+0x00000058u,c->r[30]); // 8006F6BC
  W32(c->r[1]+0x0000005Cu,c->r[30]); // 8006F6C0
  W32(c->r[1]+0x00000060u,c->r[30]); // 8006F6C4
  W32(c->r[1]+0x00000064u,c->r[30]); // 8006F6C8
  W32(c->r[1]+0x00000068u,c->r[30]); // 8006F6CC
  W32(c->r[1]+0x0000006Cu,c->r[30]); // 8006F6D0
  W32(c->r[1]+0x00000070u,c->r[30]); // 8006F6D4
  W32(c->r[1]+0x00000074u,c->r[30]); // 8006F6D8
  W32(c->r[1]+0x00000078u,c->r[30]); // 8006F6DC
  W32(c->r[1]+0x0000007Cu,c->r[30]); // 8006F6E0
  W32(c->r[1]+0x00000080u,c->r[30]); // 8006F6E4
  W32(c->r[1]+0x00000084u,c->r[30]); // 8006F6E8
  W32(c->r[1]+0x00000088u,c->r[30]); // 8006F6EC
  W32(c->r[1]+0x0000008Cu,c->r[30]); // 8006F6F0
L_8006F6F4:;
  c->r[3]=c->r[28]|c->r[28]; // 8006F6F4
  c->lr=0x8006F6FCu; f_800705D0(c); // 8006F6F8
  cmps(c,0,(int32_t)c->r[3],0); // 8006F6FC
  if (crb(c,2)) { goto L_8006F714; } // 8006F700
  c->r[3]=c->r[28]|c->r[28]; // 8006F704
  c->lr=0x8006F70Cu; f_80070608(c); // 8006F708
  W32(c->r[29]+0x00000000u,c->r[3]); // 8006F70C
  goto L_8006F718; // 8006F710
L_8006F714:;
  W32(c->r[29]+0x00000000u,c->r[30]); // 8006F714
L_8006F718:;
  c->r[3]=c->r[28]|c->r[28]; // 8006F718
  c->lr=0x8006F720u; f_800700A0(c); // 8006F71C
  {uint32_t ea=c->r[29]+0x00000004u; WF32(ea,c->f[1]);} // 8006F720
  c->r[3]=c->r[28]|c->r[28]; // 8006F724
  c->lr=0x8006F72Cu; f_800701D8(c); // 8006F728
  {uint32_t ea=c->r[29]+0x00000008u; WF32(ea,c->f[1]);} // 8006F72C
  c->r[3]=c->r[28]|c->r[28]; // 8006F730
  c->lr=0x8006F738u; f_80070620(c); // 8006F734
  c->r[31]=c->r[3]|c->r[3]; // 8006F738
  c->r[3]=c->r[28]|c->r[28]; // 8006F73C
  c->lr=0x8006F744u; f_80070620(c); // 8006F740
  cmps(c,0,(int32_t)c->r[31],2); // 8006F744
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8006F748
  if (!crb(c,2)) { goto L_8006F754; } // 8006F74C
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 8006F750
L_8006F754:;
  c->r[28]=c->r[28]+0x00000001u; // 8006F754
  c->r[29]=c->r[29]+0x00000010u; // 8006F758
  cmps(c,0,(int32_t)c->r[28],4); // 8006F75C
  if (crb(c,0)) { IRQCHK(c); goto L_8006F6F4; } // 8006F760
  c->lr=0x8006F768u; f_801D9930(c); // 8006F764
  c->r[3]=c->r[1]+0x00000050u; // 8006F768
  c->lr=0x8006F770u; f_801D97B0(c); // 8006F76C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F770
  if (crb(c,0)) { goto L_8006F818; } // 8006F774
  c->lr=0x8006F77Cu; f_801D9820(c); // 8006F778
  c->r[31]=0u+0x802B0000u; // 8006F77C
  c->r[4]=c->r[3]|c->r[3]; // 8006F780
  c->r[31]=c->r[31]+0x00003DFCu; // 8006F784
  c->r[3]=c->r[31]+0x00000024u; // 8006F788
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F78C
  c->lr=0x8006F794u; f_80019994(c); // 8006F790
  c->lr=0x8006F798u; f_801D9890(c); // 8006F794
  c->r[4]=c->r[3]|c->r[3]; // 8006F798
  c->r[3]=c->r[31]+0x00000032u; // 8006F79C
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F7A0
  c->lr=0x8006F7A8u; f_80019994(c); // 8006F7A4
  c->lr=0x8006F7ACu; f_801D9820(c); // 8006F7A8
  cmps(c,0,(int32_t)c->r[3],0); // 8006F7AC
  if (crb(c,2)) { goto L_8006F7C8; } // 8006F7B0
  cmps(c,0,(int32_t)c->r[3],1); // 8006F7B4
  if (crb(c,2)) { goto L_8006F7D4; } // 8006F7B8
  cmps(c,0,(int32_t)c->r[3],2); // 8006F7BC
  if (crb(c,2)) { goto L_8006F7F8; } // 8006F7C0
  goto L_8006F818; // 8006F7C4
L_8006F7C8:;
  c->r[0]=0u+0x00000001u; // 8006F7C8
  W8(c->r[27]+0x000005D8u,c->r[0]); // 8006F7CC
  goto L_8006F818; // 8006F7D0
L_8006F7D4:;
  c->r[3]=c->r[31]+0x00000040u; // 8006F7D4
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F7D8
  c->lr=0x8006F7E0u; f_80019994(c); // 8006F7DC
  c->lr=0x8006F7E4u; f_80071E88(c); // 8006F7E0
  c->r[3]=c->r[27]|c->r[27]; // 8006F7E4
  c->lr=0x8006F7ECu; f_8006F988(c); // 8006F7E8
  c->r[0]=0u+0x00000001u; // 8006F7EC
  W8(c->r[27]+0x000005D8u,c->r[0]); // 8006F7F0
  goto L_8006F818; // 8006F7F4
L_8006F7F8:;
  c->r[3]=c->r[31]+0x00000053u; // 8006F7F8
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006F7FC
  c->lr=0x8006F804u; f_80019994(c); // 8006F800
  c->lr=0x8006F808u; f_80071E48(c); // 8006F804
  c->r[3]=c->r[27]|c->r[27]; // 8006F808
  c->lr=0x8006F810u; f_8006F988(c); // 8006F80C
  c->r[0]=0u+0x00000001u; // 8006F810
  W8(c->r[27]+0x000005D8u,c->r[0]); // 8006F814
L_8006F818:;
  c->lr=0x8006F81Cu; f_8001B150(c); // 8006F818
  c->lr=0x8006F820u; f_8021B040(c); // 8006F81C
  c->r[3]=c->r[1]+0x00000008u; // 8006F820
  c->r[4]=0u+0x00000001u; // 8006F824
  c->lr=0x8006F82Cu; f_8021D2F4(c); // 8006F828
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[31]=c->ps1[31]=RF32(ea);} // 8006F82C
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[30]=c->ps1[30]=RF32(ea);} // 8006F830
  c->lr=0x8006F838u; f_800724A4(c); // 8006F834
  cmps(c,0,(int32_t)c->r[3],0); // 8006F838
  if (crb(c,2)) { goto L_8006F894; } // 8006F83C
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F840
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[31]=c->ps1[31]=RF32(ea);} // 8006F844
  c->f[30]=c->ps1[30]=S(c->f[30]/c->f[0]); // 8006F848
  c->lr=0x8006F850u; f_800724E4(c); // 8006F84C
  cmps(c,0,(int32_t)c->r[3],0); // 8006F850
  if (crb(c,2)) { goto L_8006F860; } // 8006F854
  {uint32_t ea=c->r[2]+0xFFFFA6C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F858
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 8006F85C
L_8006F860:;
  c->f[2]=-c->f[30]; // 8006F860
  {uint32_t ea=c->r[2]+0xFFFFA6C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8006F864
  c->f[3]=-c->f[31]; // 8006F868
  {uint32_t ea=c->r[2]+0xFFFFA6CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F86C
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[30]); // 8006F870
  {uint32_t ea=c->r[2]+0xFFFFA6D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 8006F874
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8006F878
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8006F87C
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8006F880
  c->r[3]=c->r[1]+0x00000010u; // 8006F884
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[31]); // 8006F888
  c->lr=0x8006F890u; f_800880C0(c); // 8006F88C
  goto L_8006F8E8; // 8006F890
L_8006F894:;
  {uint32_t ea=c->r[2]+0xFFFFA6D8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006F894
  {uint32_t ea=c->r[2]+0xFFFFA6C0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F898
  c->f[31]=c->ps1[31]=S(c->f[31]/c->f[1]); // 8006F89C
  c->f[30]=c->ps1[30]=S(c->f[30]/c->f[0]); // 8006F8A0
  c->lr=0x8006F8A8u; f_800724E4(c); // 8006F8A4
  cmps(c,0,(int32_t)c->r[3],0); // 8006F8A8
  if (crb(c,2)) { goto L_8006F8B8; } // 8006F8AC
  {uint32_t ea=c->r[2]+0xFFFFA6C4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F8B0
  c->f[30]=c->ps1[30]=S(c->f[30]*c->f[0]); // 8006F8B4
L_8006F8B8:;
  c->f[2]=-c->f[30]; // 8006F8B8
  {uint32_t ea=c->r[2]+0xFFFFA6C8u; c->f[4]=c->ps1[4]=RF32(ea);} // 8006F8BC
  c->f[3]=-c->f[31]; // 8006F8C0
  {uint32_t ea=c->r[2]+0xFFFFA6DCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8006F8C4
  c->f[1]=c->ps1[1]=S(c->f[4]*c->f[30]); // 8006F8C8
  {uint32_t ea=c->r[2]+0xFFFFA6D0u; c->f[5]=c->ps1[5]=RF32(ea);} // 8006F8CC
  c->f[2]=c->ps1[2]=S(c->f[4]*c->f[2]); // 8006F8D0
  {uint32_t ea=c->r[2]+0xFFFFA6D4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8006F8D4
  c->f[3]=c->ps1[3]=S(c->f[0]*c->f[3]); // 8006F8D8
  c->r[3]=c->r[1]+0x00000010u; // 8006F8DC
  c->f[4]=c->ps1[4]=S(c->f[0]*c->f[31]); // 8006F8E0
  c->lr=0x8006F8E8u; f_800880C0(c); // 8006F8E4
L_8006F8E8:;
  {uint32_t ea=c->r[2]+0xFFFFA6D0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8006F8E8
  {uint32_t ea=c->r[2]+0xFFFFA6B8u; c->f[3]=c->ps1[3]=RF32(ea);} // 8006F8EC
  c->f[2]=c->f[1]; // 8006F8F0
  {uint32_t ea=c->r[2]+0xFFFFA6BCu; c->f[4]=c->ps1[4]=RF32(ea);} // 8006F8F4
  c->f[5]=c->f[1]; // 8006F8F8
  {uint32_t ea=c->r[2]+0xFFFFA6B4u; c->f[6]=c->ps1[6]=RF32(ea);} // 8006F8FC
  c->lr=0x8006F904u; f_800AC4A0(c); // 8006F900
  c->r[3]=0u+0x00000000u; // 8006F904
  c->r[4]=0u+0x00000000u; // 8006F908
  c->r[5]=0u+0x00000280u; // 8006F90C
  c->r[6]=0u+0x000001E0u; // 8006F910
  c->lr=0x8006F918u; f_800AC500(c); // 8006F914
  c->r[3]=c->r[1]+0x00000010u; // 8006F918
  c->r[4]=0u+0x00000001u; // 8006F91C
  c->lr=0x8006F924u; f_800AC1C0(c); // 8006F920
  c->r[0]=R8(c->r[27]+0x000005D8u); // 8006F924
  cmps(c,0,(int32_t)c->r[0],0); // 8006F928
  if (!crb(c,2)) { goto L_8006F934; } // 8006F92C
  c->lr=0x8006F934u; f_801D97F0(c); // 8006F930
L_8006F934:;
  c->r[11]=c->r[1]+0x000000B0u; // 8006F934
  {uint32_t ea=c->r[1]+0x000000C8u; psq_load(c,31,ea,0,0);} // 8006F938
  {uint32_t ea=c->r[1]+0x000000C0u; c->f[31]=RF64(ea);} // 8006F93C
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,30,ea,0,0);} // 8006F940
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[30]=RF64(ea);} // 8006F944
  c->lr=0x8006F94Cu; f_800ADA78(c); // 8006F948
  c->r[0]=R32(c->r[1]+0x000000D4u); // 8006F94C
  c->lr=c->r[0]; // 8006F950
  c->r[1]=c->r[1]+0x000000D0u; // 8006F954
  return; // 8006F958
}

// term__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F95C(Ctx* __restrict c) {
  trace_call(0x8006F95Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F95C
  c->r[0]=c->lr; // 8006F960
  c->r[3]=0u+0x00000000u; // 8006F964
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006F968
  c->lr=0x8006F970u; f_8007557C(c); // 8006F96C
  c->r[3]=0u+0x00000001u; // 8006F970
  c->lr=0x8006F978u; f_8007557C(c); // 8006F974
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006F978
  c->lr=c->r[0]; // 8006F97C
  c->r[1]=c->r[1]+0x00000010u; // 8006F980
  return; // 8006F984
}

// resourceTerm__Q34Sega3HBM14HomeButtonMenuFv
void f_8006F988(Ctx* __restrict c) {
  trace_call(0x8006F988u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006F988
  c->r[0]=c->lr; // 8006F98C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006F990
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006F994
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006F998
  c->r[30]=c->r[3]|c->r[3]; // 8006F99C
  c->r[0]=R8(c->r[3]+0x000005DCu); // 8006F9A0
  cmps(c,0,(int32_t)c->r[0],0); // 8006F9A4
  if (crb(c,2)) { goto L_8006FA40; } // 8006F9A8
  c->lr=0x8006F9B0u; f_801D9920(c); // 8006F9AC
  c->lr=0x8006F9B4u; f_801D9710(c); // 8006F9B0
  c->r[3]=c->r[30]+0x00000048u; // 8006F9B4
  c->r[4]=0u+0x00000000u; // 8006F9B8
  c->lr=0x8006F9C0u; f_8001CC18(c); // 8006F9BC
  c->r[3]=c->r[30]+0x00000164u; // 8006F9C0
  c->r[4]=0u+0x00000000u; // 8006F9C4
  c->lr=0x8006F9CCu; f_8001CC18(c); // 8006F9C8
  c->r[3]=c->r[30]+0x00000280u; // 8006F9CC
  c->r[4]=0u+0x00000000u; // 8006F9D0
  c->lr=0x8006F9D8u; f_8001CC18(c); // 8006F9D4
  c->r[3]=c->r[30]+0x0000039Cu; // 8006F9D8
  c->r[4]=0u+0x00000000u; // 8006F9DC
  c->lr=0x8006F9E4u; f_8001CC18(c); // 8006F9E0
  c->r[3]=c->r[30]+0x000004B8u; // 8006F9E4
  c->r[4]=0u+0x00000000u; // 8006F9E8
  c->lr=0x8006F9F0u; f_8001CC18(c); // 8006F9EC
  c->r[4]=R32(c->r[30]+0x00000014u); // 8006F9F0
  cmps(c,0,(int32_t)c->r[4],0); // 8006F9F4
  if (crb(c,2)) { goto L_8006FA14; } // 8006F9F8
  c->r[31]=0u+0x00000000u; // 8006F9FC
  W8(c->r[1]+0x0000000Cu,c->r[31]); // 8006FA00
  c->r[3]=c->r[1]+0x0000000Cu; // 8006FA04
  c->r[5]=0u+0x00000001u; // 8006FA08
  c->lr=0x8006FA10u; f_8020CBF8(c); // 8006FA0C
  W32(c->r[30]+0x00000014u,c->r[31]); // 8006FA10
L_8006FA14:;
  c->r[4]=R32(c->r[30]+0x00000044u); // 8006FA14
  cmps(c,0,(int32_t)c->r[4],0); // 8006FA18
  if (crb(c,2)) { goto L_8006FA38; } // 8006FA1C
  c->r[31]=0u+0x00000000u; // 8006FA20
  W8(c->r[1]+0x00000008u,c->r[31]); // 8006FA24
  c->r[3]=c->r[1]+0x00000008u; // 8006FA28
  c->r[5]=0u+0x00000001u; // 8006FA2C
  c->lr=0x8006FA34u; f_8020CBF8(c); // 8006FA30
  W32(c->r[30]+0x00000044u,c->r[31]); // 8006FA34
L_8006FA38:;
  c->r[0]=0u+0x00000000u; // 8006FA38
  W8(c->r[30]+0x000005DCu,c->r[0]); // 8006FA3C
L_8006FA40:;
  c->r[3]=0u+0x802B0000u; // 8006FA40
  c->r[3]=c->r[3]+0x00003DFCu; // 8006FA44
  c->r[3]=c->r[3]+0x0000005Au; // 8006FA48
  setcrb(c,6,crb(c,6)^crb(c,6)); // 8006FA4C
  c->lr=0x8006FA54u; f_80019994(c); // 8006FA50
  c->r[0]=R32(c->r[1]+0x00000024u); // 8006FA54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006FA58
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006FA5C
  c->lr=c->r[0]; // 8006FA60
  c->r[1]=c->r[1]+0x00000020u; // 8006FA64
  return; // 8006FA68
}

// initHomeButtonInfo__Q34Sega3HBM14HomeButtonMenuFv
void f_8006FA6C(Ctx* __restrict c) {
  trace_call(0x8006FA6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006FA6C
  c->r[0]=c->lr; // 8006FA70
  c->r[8]=0u+0x802B0000u; // 8006FA74
  {uint32_t ea=c->r[8]+0x00003DB8u; c->r[7]=R32(ea); c->r[8]=ea;} // 8006FA78
  W32(c->r[1]+0x00000074u,c->r[0]); // 8006FA7C
  c->r[4]=c->r[1]+0x00000010u; // 8006FA80
  c->r[6]=R32(c->r[8]+0x00000004u); // 8006FA84
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 8006FA88
  c->r[31]=c->r[3]|c->r[3]; // 8006FA8C
  c->r[5]=R32(c->r[8]+0x00000008u); // 8006FA90
  c->r[3]=c->r[1]+0x00000020u; // 8006FA94
  W32(c->r[1]+0x00000068u,c->r[30]); // 8006FA98
  c->r[0]=R32(c->r[8]+0x0000000Cu); // 8006FA9C
  W32(c->r[1]+0x00000064u,c->r[29]); // 8006FAA0
  c->r[29]=0u+0x00000000u; // 8006FAA4
  W32(c->r[1]+0x00000010u,c->r[7]); // 8006FAA8
  W32(c->r[1]+0x00000014u,c->r[6]); // 8006FAAC
  W32(c->r[1]+0x00000018u,c->r[5]); // 8006FAB0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 8006FAB4
  W32(c->r[1]+0x00000020u,c->r[29]); // 8006FAB8
  W32(c->r[1]+0x00000024u,c->r[29]); // 8006FABC
  W32(c->r[1]+0x00000028u,c->r[29]); // 8006FAC0
  W32(c->r[1]+0x0000002Cu,c->r[29]); // 8006FAC4
  W32(c->r[1]+0x00000030u,c->r[29]); // 8006FAC8
  W32(c->r[1]+0x00000034u,c->r[29]); // 8006FACC
  W32(c->r[1]+0x00000038u,c->r[29]); // 8006FAD0
  W32(c->r[1]+0x0000003Cu,c->r[29]); // 8006FAD4
  W32(c->r[1]+0x00000040u,c->r[29]); // 8006FAD8
  W32(c->r[1]+0x00000044u,c->r[29]); // 8006FADC
  W32(c->r[1]+0x00000048u,c->r[29]); // 8006FAE0
  W32(c->r[1]+0x0000004Cu,c->r[29]); // 8006FAE4
  W32(c->r[1]+0x00000050u,c->r[29]); // 8006FAE8
  W32(c->r[1]+0x00000054u,c->r[29]); // 8006FAEC
  W32(c->r[1]+0x00000058u,c->r[29]); // 8006FAF0
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 8006FAF4
  c->lr=0x8006FAFCu; f_800B77CC(c); // 8006FAF8
  c->lr=0x8006FB00u; f_80072520(c); // 8006FAFC
  cmpu(c,0,c->r[3],0x00000009u); // 8006FB00
  if (crb(c,1)) { goto L_8006FC3C; } // 8006FB04
  c->r[4]=0u+0x80310000u; // 8006FB08
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8006FB0C
  c->r[4]=c->r[4]+0xFFFFDE48u; // 8006FB10
  c->r[4]=R32(c->r[4]+c->r[0]); // 8006FB14
  c->ctr=c->r[4]; // 8006FB18
  if (true) { switch (c->ctr) { case 0x8006FB20u: goto L_8006FB20; case 0x8006FB3Cu: goto L_8006FB3C; case 0x8006FB5Cu: goto L_8006FB5C; case 0x8006FB7Cu: goto L_8006FB7C; case 0x8006FB9Cu: goto L_8006FB9C; case 0x8006FBBCu: goto L_8006FBBC; case 0x8006FBDCu: goto L_8006FBDC; case 0x8006FBFCu: goto L_8006FBFC; case 0x8006FC1Cu: goto L_8006FC1C; case 0x8006FC3Cu: goto L_8006FC3C; default: break; } dispatch(c,c->ctr); return; } // 8006FB1C
L_8006FB20:;
  c->r[4]=0u+0x802B0000u; // 8006FB20
  W32(c->r[31]+0x00000020u,c->r[29]); // 8006FB24
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FB28
  c->r[3]=c->r[1]+0x00000020u; // 8006FB2C
  c->r[4]=c->r[4]+0x00000078u; // 8006FB30
  c->lr=0x8006FB38u; f_800B78D0(c); // 8006FB34
  goto L_8006FC58; // 8006FB38
L_8006FB3C:;
  c->r[4]=0u+0x802B0000u; // 8006FB3C
  c->r[0]=0u+0x00000001u; // 8006FB40
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FB44
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FB48
  c->r[3]=c->r[1]+0x00000020u; // 8006FB4C
  c->r[4]=c->r[4]+0x00000085u; // 8006FB50
  c->lr=0x8006FB58u; f_800B78D0(c); // 8006FB54
  goto L_8006FC58; // 8006FB58
L_8006FB5C:;
  c->r[4]=0u+0x802B0000u; // 8006FB5C
  c->r[0]=0u+0x00000002u; // 8006FB60
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FB64
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FB68
  c->r[3]=c->r[1]+0x00000020u; // 8006FB6C
  c->r[4]=c->r[4]+0x00000096u; // 8006FB70
  c->lr=0x8006FB78u; f_800B78D0(c); // 8006FB74
  goto L_8006FC58; // 8006FB78
L_8006FB7C:;
  c->r[4]=0u+0x802B0000u; // 8006FB7C
  c->r[0]=0u+0x00000003u; // 8006FB80
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FB84
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FB88
  c->r[3]=c->r[1]+0x00000020u; // 8006FB8C
  c->r[4]=c->r[4]+0x000000A7u; // 8006FB90
  c->lr=0x8006FB98u; f_800B78D0(c); // 8006FB94
  goto L_8006FC58; // 8006FB98
L_8006FB9C:;
  c->r[4]=0u+0x802B0000u; // 8006FB9C
  c->r[0]=0u+0x00000004u; // 8006FBA0
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FBA4
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FBA8
  c->r[3]=c->r[1]+0x00000020u; // 8006FBAC
  c->r[4]=c->r[4]+0x000000B8u; // 8006FBB0
  c->lr=0x8006FBB8u; f_800B78D0(c); // 8006FBB4
  goto L_8006FC58; // 8006FBB8
L_8006FBBC:;
  c->r[4]=0u+0x802B0000u; // 8006FBBC
  c->r[0]=0u+0x00000005u; // 8006FBC0
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FBC4
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FBC8
  c->r[3]=c->r[1]+0x00000020u; // 8006FBCC
  c->r[4]=c->r[4]+0x000000C9u; // 8006FBD0
  c->lr=0x8006FBD8u; f_800B78D0(c); // 8006FBD4
  goto L_8006FC58; // 8006FBD8
L_8006FBDC:;
  c->r[4]=0u+0x802B0000u; // 8006FBDC
  c->r[0]=0u+0x00000006u; // 8006FBE0
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FBE4
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FBE8
  c->r[3]=c->r[1]+0x00000020u; // 8006FBEC
  c->r[4]=c->r[4]+0x000000DAu; // 8006FBF0
  c->lr=0x8006FBF8u; f_800B78D0(c); // 8006FBF4
  goto L_8006FC58; // 8006FBF8
L_8006FBFC:;
  c->r[4]=0u+0x802B0000u; // 8006FBFC
  c->r[0]=0u+0x00000007u; // 8006FC00
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FC04
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FC08
  c->r[3]=c->r[1]+0x00000020u; // 8006FC0C
  c->r[4]=c->r[4]+0x000000EBu; // 8006FC10
  c->lr=0x8006FC18u; f_800B78D0(c); // 8006FC14
  goto L_8006FC58; // 8006FC18
L_8006FC1C:;
  c->r[4]=0u+0x802B0000u; // 8006FC1C
  c->r[0]=0u+0x00000009u; // 8006FC20
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FC24
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FC28
  c->r[3]=c->r[1]+0x00000020u; // 8006FC2C
  c->r[4]=c->r[4]+0x000000FCu; // 8006FC30
  c->lr=0x8006FC38u; f_800B78D0(c); // 8006FC34
  goto L_8006FC58; // 8006FC38
L_8006FC3C:;
  c->r[4]=0u+0x802B0000u; // 8006FC3C
  c->r[0]=0u+0x00000000u; // 8006FC40
  c->r[4]=c->r[4]+0x00003DFCu; // 8006FC44
  W32(c->r[31]+0x00000020u,c->r[0]); // 8006FC48
  c->r[3]=c->r[1]+0x00000020u; // 8006FC4C
  c->r[4]=c->r[4]+0x00000078u; // 8006FC50
  c->lr=0x8006FC58u; f_800B78D0(c); // 8006FC54
L_8006FC58:;
  c->r[3]=c->r[31]+0x00000048u; // 8006FC58
  c->r[4]=c->r[1]+0x00000020u; // 8006FC5C
  c->lr=0x8006FC64u; f_8001C928(c); // 8006FC60
  c->r[3]=c->r[1]+0x00000020u; // 8006FC64
  c->r[4]=c->r[1]+0x00000010u; // 8006FC68
  c->lr=0x8006FC70u; f_800B77CC(c); // 8006FC6C
  c->r[29]=0u+0x802B0000u; // 8006FC70
  c->r[3]=c->r[1]+0x00000020u; // 8006FC74
  c->r[29]=c->r[29]+0x00003DFCu; // 8006FC78
  c->r[4]=c->r[29]+0x0000010Du; // 8006FC7C
  c->lr=0x8006FC84u; f_800B78D0(c); // 8006FC80
  c->r[3]=c->r[31]+0x00000164u; // 8006FC84
  c->r[4]=c->r[1]+0x00000020u; // 8006FC88
  c->lr=0x8006FC90u; f_8001C928(c); // 8006FC8C
  c->r[3]=c->r[1]+0x00000020u; // 8006FC90
  c->r[4]=c->r[1]+0x00000010u; // 8006FC94
  c->lr=0x8006FC9Cu; f_800B77CC(c); // 8006FC98
  c->r[3]=c->r[1]+0x00000020u; // 8006FC9C
  c->r[4]=c->r[29]+0x0000011Cu; // 8006FCA0
  c->lr=0x8006FCA8u; f_800B78D0(c); // 8006FCA4
  c->r[3]=c->r[31]+0x00000280u; // 8006FCA8
  c->r[4]=c->r[1]+0x00000020u; // 8006FCAC
  c->lr=0x8006FCB4u; f_8001C928(c); // 8006FCB0
  c->r[3]=c->r[1]+0x00000020u; // 8006FCB4
  c->r[4]=c->r[1]+0x00000010u; // 8006FCB8
  c->lr=0x8006FCC0u; f_800B77CC(c); // 8006FCBC
  c->r[3]=c->r[1]+0x00000020u; // 8006FCC0
  c->r[4]=c->r[29]+0x0000012Du; // 8006FCC4
  c->lr=0x8006FCCCu; f_800B78D0(c); // 8006FCC8
  c->r[3]=c->r[31]+0x0000039Cu; // 8006FCCC
  c->r[4]=c->r[1]+0x00000020u; // 8006FCD0
  c->lr=0x8006FCD8u; f_8001C928(c); // 8006FCD4
  c->r[4]=c->r[29]+0x00000139u; // 8006FCD8
  c->r[3]=c->r[31]+0x000004B8u; // 8006FCDC
  c->lr=0x8006FCE4u; f_8001C928(c); // 8006FCE0
  c->r[30]=0u+0x00000000u; // 8006FCE4
  W8(c->r[1]+0x0000000Cu,c->r[30]); // 8006FCE8
  c->r[3]=c->r[1]+0x0000000Cu; // 8006FCEC
  c->r[7]=c->r[29]+0x0000015Au; // 8006FCF0
  c->r[4]=0u+0x00080000u; // 8006FCF4
  c->r[5]=0u+0x00000020u; // 8006FCF8
  c->r[6]=0u+0x00000001u; // 8006FCFC
  c->r[8]=0u+0x00000173u; // 8006FD00
  c->lr=0x8006FD08u; f_8020C0D0(c); // 8006FD04
  W32(c->r[31]+0x00000014u,c->r[3]); // 8006FD08
  c->r[0]=0u+0x00080000u; // 8006FD0C
  c->r[4]=0u+0x00020000u; // 8006FD10
  c->r[3]=c->r[1]+0x00000008u; // 8006FD14
  W32(c->r[31]+0x00000030u,c->r[0]); // 8006FD18
  c->r[4]=c->r[4]+0xFFFF8700u; // 8006FD1C
  c->r[7]=c->r[29]+0x0000015Au; // 8006FD20
  c->r[5]=0u+0x00000020u; // 8006FD24
  W32(c->r[31]+0x00000040u,c->r[30]); // 8006FD28
  c->r[6]=0u+0x00000001u; // 8006FD2C
  c->r[8]=0u+0x00000177u; // 8006FD30
  W8(c->r[1]+0x00000008u,c->r[30]); // 8006FD34
  c->lr=0x8006FD3Cu; f_8020C0D0(c); // 8006FD38
  W32(c->r[31]+0x00000044u,c->r[3]); // 8006FD3C
  c->r[31]=R32(c->r[1]+0x0000006Cu); // 8006FD40
  c->r[30]=R32(c->r[1]+0x00000068u); // 8006FD44
  c->r[29]=R32(c->r[1]+0x00000064u); // 8006FD48
  c->r[0]=R32(c->r[1]+0x00000074u); // 8006FD4C
  c->lr=c->r[0]; // 8006FD50
  c->r[1]=c->r[1]+0x00000070u; // 8006FD54
  return; // 8006FD58
}

// onTerm__Q25Alice14BinaryResourceFv
void f_8006FD5C(Ctx* __restrict c) {
  trace_call(0x8006FD5Cu);
  return; // 8006FD5C
}

// onInit__Q25Alice14BinaryResourceFv
void f_8006FD60(Ctx* __restrict c) {
  trace_call(0x8006FD60u);
  c->r[3]=0u+0x00000001u; // 8006FD60
  return; // 8006FD64
}

// fn_8006FD68
void f_8006FD68(Ctx* __restrict c) {
  trace_call(0x8006FD68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006FD68
  c->r[0]=c->lr; // 8006FD6C
  c->r[7]=0u+0x802B0000u; // 8006FD70
  c->r[4]=c->r[3]|c->r[3]; // 8006FD74
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006FD78
  c->r[0]=0u+0x00000000u; // 8006FD7C
  c->r[3]=c->r[1]+0x00000008u; // 8006FD80
  c->r[7]=c->r[7]+0x00003FB0u; // 8006FD84
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006FD88
  c->r[5]=0u+0x00000020u; // 8006FD8C
  c->r[6]=0u+0x00000001u; // 8006FD90
  c->r[8]=0u+0x00000036u; // 8006FD94
  c->lr=0x8006FD9Cu; f_8020C0D0(c); // 8006FD98
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006FD9C
  c->lr=c->r[0]; // 8006FDA0
  c->r[1]=c->r[1]+0x00000010u; // 8006FDA4
  return; // 8006FDA8
}

// fn_8006FDAC
void f_8006FDAC(Ctx* __restrict c) {
  trace_call(0x8006FDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006FDAC
  c->r[0]=c->lr; // 8006FDB0
  c->r[4]=c->r[3]|c->r[3]; // 8006FDB4
  c->r[5]=0u+0x00000001u; // 8006FDB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006FDBC
  c->r[0]=0u+0x00000000u; // 8006FDC0
  c->r[3]=c->r[1]+0x00000008u; // 8006FDC4
  W8(c->r[1]+0x00000008u,c->r[0]); // 8006FDC8
  c->lr=0x8006FDD0u; f_8020CBF8(c); // 8006FDCC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006FDD0
  c->r[3]=0u+0x00000001u; // 8006FDD4
  c->lr=c->r[0]; // 8006FDD8
  c->r[1]=c->r[1]+0x00000010u; // 8006FDDC
  return; // 8006FDE0
}

// fn_8006FDE4
void f_8006FDE4(Ctx* __restrict c) {
  trace_call(0x8006FDE4u);
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8006FDE4
  c->r[4]=0u+0x00000000u; // 8006FDE8
  cmps(c,0,(int32_t)c->r[0],1); // 8006FDEC
  if (!crb(c,2)) { goto L_8006FDF8; } // 8006FDF0
  c->r[4]=c->r[4]|0x00000001u; // 8006FDF4
L_8006FDF8:;
  c->r[0]=rotl(c->r[3],0)&0x00000002u; // 8006FDF8
  cmps(c,0,(int32_t)c->r[0],2); // 8006FDFC
  if (!crb(c,2)) { goto L_8006FE08; } // 8006FE00
  c->r[4]=c->r[4]|0x00000002u; // 8006FE04
L_8006FE08:;
  c->r[0]=rotl(c->r[3],0)&0x00000008u; // 8006FE08
  cmps(c,0,(int32_t)c->r[0],8); // 8006FE0C
  if (!crb(c,2)) { goto L_8006FE18; } // 8006FE10
  c->r[4]=c->r[4]|0x00000008u; // 8006FE14
L_8006FE18:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; // 8006FE18
  cmps(c,0,(int32_t)c->r[0],4); // 8006FE1C
  if (!crb(c,2)) { goto L_8006FE28; } // 8006FE20
  c->r[4]=c->r[4]|0x00000004u; // 8006FE24
L_8006FE28:;
  c->r[0]=rotl(c->r[3],0)&0x00000010u; // 8006FE28
  cmps(c,0,(int32_t)c->r[0],16); // 8006FE2C
  if (!crb(c,2)) { goto L_8006FE38; } // 8006FE30
  c->r[4]=c->r[4]|0x00000800u; // 8006FE34
L_8006FE38:;
  c->r[0]=rotl(c->r[3],0)&0x00000020u; // 8006FE38
  cmps(c,0,(int32_t)c->r[0],32); // 8006FE3C
  if (!crb(c,2)) { goto L_8006FE48; } // 8006FE40
  c->r[4]=c->r[4]|0x00000400u; // 8006FE44
L_8006FE48:;
  c->r[0]=rotl(c->r[3],0)&0x00000040u; // 8006FE48
  cmps(c,0,(int32_t)c->r[0],64); // 8006FE4C
  if (!crb(c,2)) { goto L_8006FE58; } // 8006FE50
  c->r[4]=c->r[4]|0x00000010u; // 8006FE54
L_8006FE58:;
  c->r[0]=rotl(c->r[3],0)&0x00000080u; // 8006FE58
  cmps(c,0,(int32_t)c->r[0],128); // 8006FE5C
  if (!crb(c,2)) { goto L_8006FE68; } // 8006FE60
  c->r[4]=c->r[4]|0x00001000u; // 8006FE64
L_8006FE68:;
  c->r[0]=rotl(c->r[3],0)&0x00000100u; // 8006FE68
  cmps(c,0,(int32_t)c->r[0],256); // 8006FE6C
  if (!crb(c,2)) { goto L_8006FE78; } // 8006FE70
  c->r[4]=c->r[4]|0x00000200u; // 8006FE74
L_8006FE78:;
  c->r[0]=rotl(c->r[3],0)&0x00000200u; // 8006FE78
  cmps(c,0,(int32_t)c->r[0],512); // 8006FE7C
  if (!crb(c,2)) { goto L_8006FE88; } // 8006FE80
  c->r[4]=c->r[4]|0x00000100u; // 8006FE84
L_8006FE88:;
  c->r[0]=rotl(c->r[3],0)&0x00000400u; // 8006FE88
  cmps(c,0,(int32_t)c->r[0],1024); // 8006FE8C
  if (!crb(c,2)) { goto L_8006FE98; } // 8006FE90
  c->r[4]=c->r[4]|0x00008000u; // 8006FE94
L_8006FE98:;
  c->r[0]=rotl(c->r[3],0)&0x00000800u; // 8006FE98
  cmps(c,0,(int32_t)c->r[0],2048); // 8006FE9C
  if (!crb(c,2)) { goto L_8006FEA8; } // 8006FEA0
  c->r[4]=c->r[4]|0x00004000u; // 8006FEA4
L_8006FEA8:;
  c->r[0]=rotl(c->r[3],0)&0x00001000u; // 8006FEA8
  cmps(c,0,(int32_t)c->r[0],4096); // 8006FEAC
  if (!crb(c,2)) { goto L_8006FEB8; } // 8006FEB0
  c->r[4]=c->r[4]|0x00002000u; // 8006FEB4
L_8006FEB8:;
  c->r[3]=c->r[4]|c->r[4]; // 8006FEB8
  return; // 8006FEBC
}

// isButtonHold__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_idQ34Sega9Interface10_button_id
void f_8006FEC0(Ctx* __restrict c) {
  trace_call(0x8006FEC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006FEC0
  c->r[0]=c->lr; // 8006FEC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8006FEC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8006FECC
  c->r[31]=0u+0x00000000u; // 8006FED0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8006FED4
  c->r[30]=c->r[3]|c->r[3]; // 8006FED8
  c->r[3]=c->r[4]|c->r[4]; // 8006FEDC
  c->lr=0x8006FEE4u; f_8006FDE4(c); // 8006FEE0
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)7680); // 8006FEE4
  c->r[4]=0u+0x80360000u; // 8006FEE8
  c->r[4]=c->r[4]+0xFFFFC730u; // 8006FEEC
  c->r[4]=c->r[4]+c->r[0]; // 8006FEF0
  c->r[0]=R32(c->r[4]+0x00002100u); // 8006FEF4
  c->r[0]=c->r[3]&c->r[0]; // 8006FEF8
  cmpu(c,0,c->r[3],c->r[0]); // 8006FEFC
  if (!crb(c,2)) { goto L_8006FF08; } // 8006FF00
  c->r[31]=0u+0x00000001u; // 8006FF04
L_8006FF08:;
  c->lr=0x8006FF0Cu; f_80039EE4(c); // 8006FF08
  cmps(c,0,(int32_t)c->r[3],0); // 8006FF0C
  if (crb(c,2)) { goto L_8006FF34; } // 8006FF10
  c->lr=0x8006FF18u; f_8021F4E4(c); // 8006FF14
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8006FF18
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8006FF1C
  c->r[0]=c->r[0]^c->r[4]; // 8006FF20
  c->r[3]=c->r[0]-c->r[4]; // 8006FF24
  c->r[0]=0u-c->r[3]; // 8006FF28
  c->r[0]=c->r[0]|c->r[3]; // 8006FF2C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 8006FF30
L_8006FF34:;
  c->r[3]=c->r[31]|c->r[31]; // 8006FF34
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8006FF38
  c->r[30]=R32(c->r[1]+0x00000008u); // 8006FF3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8006FF40
  c->lr=c->r[0]; // 8006FF44
  c->r[1]=c->r[1]+0x00000010u; // 8006FF48
  return; // 8006FF4C
}

// isButtonTriggered__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_idQ34Sega9Interface10_button_id
void f_8006FF50(Ctx* __restrict c) {
  trace_call(0x8006FF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8006FF50
  c->r[0]=c->lr; // 8006FF54
  W32(c->r[1]+0x00000024u,c->r[0]); // 8006FF58
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8006FF5C
  c->r[31]=0u+0x00000000u; // 8006FF60
  W32(c->r[1]+0x00000018u,c->r[30]); // 8006FF64
  c->r[30]=c->r[4]|c->r[4]; // 8006FF68
  W32(c->r[1]+0x00000014u,c->r[29]); // 8006FF6C
  c->r[29]=c->r[3]|c->r[3]; // 8006FF70
  c->r[3]=c->r[30]|c->r[30]; // 8006FF74
  c->lr=0x8006FF7Cu; f_8006FDE4(c); // 8006FF78
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)7680); // 8006FF7C
  c->r[4]=0u+0x80360000u; // 8006FF80
  c->r[4]=c->r[4]+0xFFFFC730u; // 8006FF84
  c->r[4]=c->r[4]+c->r[0]; // 8006FF88
  c->r[0]=R32(c->r[4]+0x00002104u); // 8006FF8C
  c->r[0]=c->r[3]&c->r[0]; // 8006FF90
  cmpu(c,0,c->r[3],c->r[0]); // 8006FF94
  if (!crb(c,2)) { goto L_8006FFA0; } // 8006FF98
  c->r[31]=0u+0x00000001u; // 8006FF9C
L_8006FFA0:;
  c->lr=0x8006FFA4u; f_80039EE4(c); // 8006FFA0
  cmps(c,0,(int32_t)c->r[3],0); // 8006FFA4
  if (crb(c,2)) { goto L_8006FFF0; } // 8006FFA8
  cmps(c,0,(int32_t)c->r[30],512); // 8006FFAC
  if (crb(c,2)) { goto L_8006FFF0; } // 8006FFB0
  c->lr=0x8006FFB8u; f_8021F4E4(c); // 8006FFB4
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 8006FFB8
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8006FFBC
  c->r[0]=c->r[0]^c->r[4]; // 8006FFC0
  cmps(c,0,(int32_t)c->r[30],1024); // 8006FFC4
  c->r[3]=c->r[0]-c->r[4]; // 8006FFC8
  c->r[0]=0u-c->r[3]; // 8006FFCC
  c->r[0]=c->r[0]|c->r[3]; // 8006FFD0
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 8006FFD4
  if (crb(c,2)) { goto L_8006FFEC; } // 8006FFD8
  cmps(c,0,(int32_t)c->r[30],512); // 8006FFDC
  if (crb(c,2)) { goto L_8006FFEC; } // 8006FFE0
  cmps(c,0,(int32_t)c->r[30],64); // 8006FFE4
  if (!crb(c,2)) { goto L_8006FFF0; } // 8006FFE8
L_8006FFEC:;
  c->r[31]=0u+0x00000000u; // 8006FFEC
L_8006FFF0:;
  c->r[3]=c->r[31]|c->r[31]; // 8006FFF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8006FFF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8006FFF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8006FFFC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80070000
  c->lr=c->r[0]; // 80070004
  c->r[1]=c->r[1]+0x00000020u; // 80070008
  return; // 8007000C
}

// isButtonRelease__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_idQ34Sega9Interface10_button_id
void f_80070010(Ctx* __restrict c) {
  trace_call(0x80070010u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80070010
  c->r[0]=c->lr; // 80070014
  W32(c->r[1]+0x00000014u,c->r[0]); // 80070018
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8007001C
  c->r[31]=0u+0x00000000u; // 80070020
  W32(c->r[1]+0x00000008u,c->r[30]); // 80070024
  c->r[30]=c->r[3]|c->r[3]; // 80070028
  c->r[3]=c->r[4]|c->r[4]; // 8007002C
  c->lr=0x80070034u; f_8006FDE4(c); // 80070030
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)7680); // 80070034
  c->r[4]=0u+0x80360000u; // 80070038
  c->r[4]=c->r[4]+0xFFFFC730u; // 8007003C
  c->r[4]=c->r[4]+c->r[0]; // 80070040
  c->r[0]=R32(c->r[4]+0x00002108u); // 80070044
  c->r[0]=c->r[3]&c->r[0]; // 80070048
  cmpu(c,0,c->r[3],c->r[0]); // 8007004C
  if (!crb(c,2)) { goto L_80070058; } // 80070050
  c->r[31]=0u+0x00000001u; // 80070054
L_80070058:;
  c->lr=0x8007005Cu; f_80039EE4(c); // 80070058
  cmps(c,0,(int32_t)c->r[3],0); // 8007005C
  if (crb(c,2)) { goto L_80070084; } // 80070060
  c->lr=0x80070068u; f_8021F4E4(c); // 80070064
  c->r[4]=rotl(c->r[3],1)&0x00000001u; // 80070068
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8007006C
  c->r[0]=c->r[0]^c->r[4]; // 80070070
  c->r[3]=c->r[0]-c->r[4]; // 80070074
  c->r[0]=0u-c->r[3]; // 80070078
  c->r[0]=c->r[0]|c->r[3]; // 8007007C
  c->r[31]=rotl(c->r[0],1)&0x00000001u; // 80070080
L_80070084:;
  c->r[3]=c->r[31]|c->r[31]; // 80070084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80070088
  c->r[30]=R32(c->r[1]+0x00000008u); // 8007008C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80070090
  c->lr=c->r[0]; // 80070094
  c->r[1]=c->r[1]+0x00000010u; // 80070098
  return; // 8007009C
}

// getPointerPosX__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_800700A0(Ctx* __restrict c) {
  trace_call(0x800700A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800700A0
  c->r[0]=c->lr; // 800700A4
  c->r[4]=0u+0x80360000u; // 800700A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800700AC
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800700B0
  c->r[4]=c->r[4]+0x000060F0u; // 800700B4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800700B8
  c->r[31]=c->r[3]|c->r[3]; // 800700BC
  c->r[0]=R32(c->r[4]+c->r[0]); // 800700C0
  cmps(c,0,(int32_t)c->r[0],0); // 800700C4
  if (!crb(c,2)) { goto L_800700D4; } // 800700C8
  {uint32_t ea=c->r[2]+0xFFFFA6E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 800700CC
  goto L_800701C4; // 800700D0
L_800700D4:;
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 800700D4
  c->lr=0x800700DCu; f_8001D3AC(c); // 800700D8
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 800700DC
  W32(c->r[1]+0x00000008u,c->r[3]); // 800700E0
  c->lr=0x800700E8u; f_80039EE4(c); // 800700E4
  cmps(c,0,(int32_t)c->r[3],0); // 800700E8
  if (crb(c,2)) { goto L_80070150; } // 800700EC
  c->lr=0x800700F4u; f_8021F4E4(c); // 800700F0
  c->r[4]=0u+0x51EC0000u; // 800700F4
  c->r[0]=0u+0x43300000u; // 800700F8
  c->r[5]=c->r[4]+0xFFFF851Fu; // 800700FC
  W32(c->r[1]+0x00000010u,c->r[0]); // 80070100
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 80070104
  c->r[4]=0u+0x80360000u; // 80070108
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[2]=RF64(ea);} // 8007010C
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80070110
  c->r[4]=c->r[4]+0xFFFFC730u; // 80070114
  c->r[0]=sraw(c,c->r[5],6); // 80070118
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8007011C
  c->r[0]=c->r[0]+c->r[5]; // 80070120
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 80070124
  c->r[3]=c->r[3]-c->r[0]; // 80070128
  c->r[0]=c->r[3]+0xFFFFFF9Cu; // 8007012C
  c->r[0]=c->r[0]^0x80000000u; // 80070130
  W32(c->r[1]+0x00000014u,c->r[0]); // 80070134
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)7680); // 80070138
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8007013C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80070140
  c->r[3]=c->r[4]+c->r[0]; // 80070144
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80070148
  {uint32_t ea=c->r[3]+0x00002120u; WF32(ea,c->f[0]);} // 8007014C
L_80070150:;
  c->r[4]=0u+0x80360000u; // 80070150
  c->r[3]=0u+0x80360000u; // 80070154
  c->r[6]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80070158
  c->r[5]=0u+0x80360000u; // 8007015C
  c->r[4]=c->r[4]+0x00006090u; // 80070160
  c->r[3]=c->r[3]+0x00006070u; // 80070164
  {uint32_t ea=c->r[3]+c->r[6]; c->f[3]=c->ps1[3]=RF32(ea);} // 80070168
  c->r[0]=0u+0x43300000u; // 8007016C
  {uint32_t ea=c->r[4]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 80070170
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)7680); // 80070174
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 80070178
  c->r[5]=c->r[5]+0xFFFFC730u; // 8007017C
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 80070180
  c->r[3]=R32(c->r[1]+0x00000008u); // 80070184
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80070188
  c->r[4]=c->r[5]+c->r[4]; // 8007018C
  c->r[3]=c->r[3]^0x80000000u; // 80070190
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 80070194
  {uint32_t ea=c->r[4]+0x00002120u; c->f[3]=c->ps1[3]=RF32(ea);} // 80070198
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[0]); // 8007019C
  W32(c->r[1]+0x00000014u,c->r[3]); // 800701A0
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 800701A4
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[1]=RF64(ea);} // 800701A8
  W32(c->r[1]+0x00000010u,c->r[0]); // 800701AC
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 800701B0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800701B4
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800701B8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800701BC
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800701C0
L_800701C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800701C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800701C8
  c->lr=c->r[0]; // 800701CC
  c->r[1]=c->r[1]+0x00000020u; // 800701D0
  return; // 800701D4
}

// getPointerPosY__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_800701D8(Ctx* __restrict c) {
  trace_call(0x800701D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800701D8
  c->r[0]=c->lr; // 800701DC
  c->r[4]=0u+0x80360000u; // 800701E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800701E4
  c->r[0]=rotl(c->r[3],4)&0xFFFFFFF0u; // 800701E8
  c->r[4]=c->r[4]+0x000060F0u; // 800701EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800701F0
  c->r[31]=c->r[3]|c->r[3]; // 800701F4
  c->r[0]=R32(c->r[4]+c->r[0]); // 800701F8
  cmps(c,0,(int32_t)c->r[0],0); // 800701FC
  if (!crb(c,2)) { goto L_8007020C; } // 80070200
  {uint32_t ea=c->r[2]+0xFFFFA6E4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80070204
  goto L_800702FC; // 80070208
L_8007020C:;
  c->r[3]=R32(c->r[13]+0xFFFF9818u); // 8007020C
  c->lr=0x80070214u; f_8001D3AC(c); // 80070210
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 80070214
  W32(c->r[1]+0x00000008u,c->r[3]); // 80070218
  c->lr=0x80070220u; f_80039EE4(c); // 8007021C
  cmps(c,0,(int32_t)c->r[3],0); // 80070220
  if (crb(c,2)) { goto L_80070288; } // 80070224
  c->lr=0x8007022Cu; f_8021F4E4(c); // 80070228
  c->r[4]=0u+0x51EC0000u; // 8007022C
  c->r[0]=0u+0x43300000u; // 80070230
  c->r[5]=c->r[4]+0xFFFF851Fu; // 80070234
  W32(c->r[1]+0x00000010u,c->r[0]); // 80070238
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 8007023C
  c->r[4]=0u+0x80360000u; // 80070240
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[2]=RF64(ea);} // 80070244
  {uint32_t ea=c->r[2]+0xFFFFA6E8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80070248
  c->r[4]=c->r[4]+0xFFFFC730u; // 8007024C
  c->r[0]=sraw(c,c->r[5],6); // 80070250
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80070254
  c->r[0]=c->r[0]+c->r[5]; // 80070258
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)200); // 8007025C
  c->r[3]=c->r[3]-c->r[0]; // 80070260
  c->r[0]=c->r[3]+0xFFFFFF9Cu; // 80070264
  c->r[0]=c->r[0]^0x80000000u; // 80070268
  W32(c->r[1]+0x00000014u,c->r[0]); // 8007026C
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)7680); // 80070270
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80070274
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80070278
  c->r[3]=c->r[4]+c->r[0]; // 8007027C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80070280
  {uint32_t ea=c->r[3]+0x00002124u; WF32(ea,c->f[0]);} // 80070284
L_80070288:;
  c->r[4]=0u+0x80360000u; // 80070288
  c->r[3]=0u+0x80360000u; // 8007028C
  c->r[6]=rotl(c->r[31],2)&0xFFFFFFFCu; // 80070290
  c->r[5]=0u+0x80360000u; // 80070294
  c->r[4]=c->r[4]+0x000060A0u; // 80070298
  c->r[3]=c->r[3]+0x00006080u; // 8007029C
  {uint32_t ea=c->r[3]+c->r[6]; c->f[3]=c->ps1[3]=RF32(ea);} // 800702A0
  c->r[0]=0u+0x43300000u; // 800702A4
  {uint32_t ea=c->r[4]+c->r[6]; c->f[0]=c->ps1[0]=RF32(ea);} // 800702A8
  c->r[4]=(uint32_t)((int32_t)c->r[31]*(int32_t)7680); // 800702AC
  {uint32_t ea=c->r[2]+0xFFFFA6ECu; c->f[2]=c->ps1[2]=RF32(ea);} // 800702B0
  c->r[5]=c->r[5]+0xFFFFC730u; // 800702B4
  c->f[1]=c->ps1[1]=S(c->f[3]+c->f[0]); // 800702B8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 800702BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 800702C0
  c->r[4]=c->r[5]+c->r[4]; // 800702C4
  c->r[3]=c->r[3]^0x80000000u; // 800702C8
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 800702CC
  {uint32_t ea=c->r[4]+0x00002124u; c->f[3]=c->ps1[3]=RF32(ea);} // 800702D0
  c->f[4]=c->ps1[4]=S(c->f[2]*c->f[0]); // 800702D4
  W32(c->r[1]+0x00000014u,c->r[3]); // 800702D8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[1]); // 800702DC
  {uint32_t ea=c->r[2]+0xFFFFA6F0u; c->f[1]=RF64(ea);} // 800702E0
  W32(c->r[1]+0x00000010u,c->r[0]); // 800702E4
  c->f[3]=c->ps1[3]=S(c->f[3]/c->f[4]); // 800702E8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 800702EC
  c->f[2]=c->ps1[2]=S(c->f[2]*c->f[3]); // 800702F0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 800702F4
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[0]); // 800702F8
L_800702FC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800702FC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80070300
  c->lr=c->r[0]; // 80070304
  c->r[1]=c->r[1]+0x00000020u; // 80070308
  return; // 8007030C
}

// getPointerKPADPosX__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_80070310(Ctx* __restrict c) {
  trace_call(0x80070310u);
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)7680); // 80070310
  c->r[3]=0u+0x80360000u; // 80070314
  c->r[3]=c->r[3]+0xFFFFC730u; // 80070318
  c->r[3]=c->r[3]+c->r[0]; // 8007031C
  {uint32_t ea=c->r[3]+0x00002120u; c->f[1]=c->ps1[1]=RF32(ea);} // 80070320
  return; // 80070324
}

// getPointerKPADPosY__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_80070328(Ctx* __restrict c) {
  trace_call(0x80070328u);
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)7680); // 80070328
  c->r[3]=0u+0x80360000u; // 8007032C
  c->r[3]=c->r[3]+0xFFFFC730u; // 80070330
  c->r[3]=c->r[3]+c->r[0]; // 80070334
  {uint32_t ea=c->r[3]+0x00002124u; c->f[1]=c->ps1[1]=RF32(ea);} // 80070338
  return; // 8007033C
}

// getPointerVelX__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_80070340(Ctx* __restrict c) {
  trace_call(0x80070340u);
  c->r[5]=0u+0x80360000u; // 80070340
  c->r[4]=0u+0x80360000u; // 80070344
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80070348
  c->r[5]=c->r[5]+0x00006050u; // 8007034C
  c->r[4]=c->r[4]+0x00006030u; // 80070350
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070354
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80070358
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8007035C
  return; // 80070360
}

// getPointerVelY__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_80070364(Ctx* __restrict c) {
  trace_call(0x80070364u);
  c->r[5]=0u+0x80360000u; // 80070364
  c->r[4]=0u+0x80360000u; // 80070368
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8007036C
  c->r[5]=c->r[5]+0x00006060u; // 80070370
  c->r[4]=c->r[4]+0x00006040u; // 80070374
  {uint32_t ea=c->r[5]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070378
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 8007037C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 80070380
  return; // 80070384
}

// setCalibrationScreenPos__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_idQ24Sega7Vector2Q24Sega7Vector2Q24Sega7Vector2
void f_80070388(Ctx* __restrict c) {
  trace_call(0x80070388u);
  c->r[7]=0u+0x80360000u; // 80070388
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8007038C
  c->r[7]=c->r[7]+0xFFFFC730u; // 80070390
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80070394
  c->r[3]=c->r[7]+0x00010000u; // 80070398
  c->r[9]=c->r[3]+0xFFFF9940u; // 8007039C
  {uint32_t ea=c->r[9]+c->r[0]; WF32(ea,c->f[0]);} // 800703A0
  c->r[8]=c->r[3]+0xFFFF9950u; // 800703A4
  c->r[7]=c->r[3]+0xFFFF9960u; // 800703A8
  c->r[3]=c->r[3]+0xFFFF9970u; // 800703AC
  {uint32_t ea=c->r[4]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800703B0
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[0]);} // 800703B4
  {uint32_t ea=c->r[9]+c->r[0]; c->f[3]=c->ps1[3]=RF32(ea);} // 800703B8
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 800703BC
  {uint32_t ea=c->r[7]+c->r[0]; WF32(ea,c->f[0]);} // 800703C0
  {uint32_t ea=c->r[8]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 800703C4
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 800703C8
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800703CC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 800703D0
  {uint32_t ea=c->r[7]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 800703D4
  {uint32_t ea=c->r[6]+0x00000000u; c->f[4]=c->ps1[4]=RF32(ea);} // 800703D8
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 800703DC
  c->f[1]=c->ps1[1]=S(c->f[1]+c->f[4]); // 800703E0
  {uint32_t ea=c->r[9]+c->r[0]; WF32(ea,c->f[3]);} // 800703E4
  {uint32_t ea=c->r[6]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 800703E8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 800703EC
  {uint32_t ea=c->r[7]+c->r[0]; WF32(ea,c->f[1]);} // 800703F0
  c->f[0]=c->ps1[0]=S(c->f[0]+c->f[3]); // 800703F4
  {uint32_t ea=c->r[8]+c->r[0]; WF32(ea,c->f[2]);} // 800703F8
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 800703FC
  return; // 80070400
}

// getCalibrationPos__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_idQ44Sega9Interface13InputManagerC9CALIB_POS
void f_80070404(Ctx* __restrict c) {
  trace_call(0x80070404u);
  c->r[5]=0u+0x80360000u; // 80070404
  cmpu(c,0,c->r[3],0x00000003u); // 80070408
  c->r[5]=c->r[5]+0xFFFFC730u; // 8007040C
  c->r[5]=c->r[5]+0x00010000u; // 80070410
  if (!crb(c,1)) { goto L_80070420; } // 80070414
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80070418
  return; // 8007041C
L_80070420:;
  cmps(c,0,(int32_t)c->r[4],0); // 80070420
  {uint32_t ea=c->r[2]+0xFFFFA6E0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80070424
  if (crb(c,2)) { goto L_80070448; } // 80070428
  cmps(c,0,(int32_t)c->r[4],1); // 8007042C
  if (crb(c,2)) { goto L_80070458; } // 80070430
  cmps(c,0,(int32_t)c->r[4],2); // 80070434
  if (crb(c,2)) { goto L_80070468; } // 80070438
  cmps(c,0,(int32_t)c->r[4],3); // 8007043C
  if (crb(c,2)) { goto L_80070478; } // 80070440
  return; // 80070444
L_80070448:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80070448
  c->r[3]=c->r[5]+0xFFFF9950u; // 8007044C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070450
  return; // 80070454
L_80070458:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80070458
  c->r[3]=c->r[5]+0xFFFF9940u; // 8007045C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070460
  return; // 80070464
L_80070468:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80070468
  c->r[3]=c->r[5]+0xFFFF9970u; // 8007046C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070470
  return; // 80070474
L_80070478:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80070478
  c->r[3]=c->r[5]+0xFFFF9960u; // 8007047C
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070480
  return; // 80070484
}

// setCalibrationPos__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_idQ44Sega9Interface13InputManagerC9CALIB_POSf
void f_80070488(Ctx* __restrict c) {
  trace_call(0x80070488u);
  c->r[5]=0u+0x80360000u; // 80070488
  cmpu(c,0,c->r[3],0x00000003u); // 8007048C
  c->r[5]=c->r[5]+0xFFFFC730u; // 80070490
  c->r[5]=c->r[5]+0x00010000u; // 80070494
  if (crb(c,1)) return; // 80070498
  cmps(c,0,(int32_t)c->r[4],0); // 8007049C
  if (crb(c,2)) { goto L_800704C0; } // 800704A0
  cmps(c,0,(int32_t)c->r[4],1); // 800704A4
  if (crb(c,2)) { goto L_800704D0; } // 800704A8
  cmps(c,0,(int32_t)c->r[4],2); // 800704AC
  if (crb(c,2)) { goto L_800704E0; } // 800704B0
  cmps(c,0,(int32_t)c->r[4],3); // 800704B4
  if (crb(c,2)) { goto L_800704F0; } // 800704B8
  return; // 800704BC
L_800704C0:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800704C0
  c->r[3]=c->r[5]+0xFFFF9950u; // 800704C4
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 800704C8
  return; // 800704CC
L_800704D0:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800704D0
  c->r[3]=c->r[5]+0xFFFF9940u; // 800704D4
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 800704D8
  return; // 800704DC
L_800704E0:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800704E0
  c->r[3]=c->r[5]+0xFFFF9970u; // 800704E4
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 800704E8
  return; // 800704EC
L_800704F0:;
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 800704F0
  c->r[3]=c->r[5]+0xFFFF9960u; // 800704F4
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[1]);} // 800704F8
  return; // 800704FC
}

// setCalibrationInit__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_80070500(Ctx* __restrict c) {
  trace_call(0x80070500u);
  c->r[7]=0u+0x802B0000u; // 80070500
  c->r[4]=0u+0x80360000u; // 80070504
  c->r[7]=c->r[7]+0x00003F70u; // 80070508
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8007050C
  c->r[4]=c->r[4]+0xFFFFC730u; // 80070510
  c->r[8]=c->r[4]+0x00010000u; // 80070514
  c->r[6]=c->r[7]+0x00000000u; // 80070518
  c->r[5]=c->r[7]+0x00000010u; // 8007051C
  c->r[3]=c->r[7]+0x00000020u; // 80070520
  c->r[4]=c->r[7]+0x00000030u; // 80070524
  {uint32_t ea=c->r[6]+c->r[0]; c->f[3]=c->ps1[3]=RF32(ea);} // 80070528
  c->r[7]=c->r[8]+0xFFFF9940u; // 8007052C
  {uint32_t ea=c->r[5]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80070530
  c->r[6]=c->r[8]+0xFFFF9950u; // 80070534
  {uint32_t ea=c->r[3]+c->r[0]; c->f[1]=c->ps1[1]=RF32(ea);} // 80070538
  c->r[5]=c->r[8]+0xFFFF9960u; // 8007053C
  c->r[3]=c->r[8]+0xFFFF9970u; // 80070540
  {uint32_t ea=c->r[4]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80070544
  {uint32_t ea=c->r[7]+c->r[0]; WF32(ea,c->f[3]);} // 80070548
  {uint32_t ea=c->r[6]+c->r[0]; WF32(ea,c->f[2]);} // 8007054C
  {uint32_t ea=c->r[5]+c->r[0]; WF32(ea,c->f[1]);} // 80070550
  {uint32_t ea=c->r[3]+c->r[0]; WF32(ea,c->f[0]);} // 80070554
  return; // 80070558
}

// isAnyKeyTriggered__Q34Sega9Interface13InputManagerCFQ34Sega9Interface10_player_id
void f_8007055C(Ctx* __restrict c) {
  trace_call(0x8007055Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8007055C
  c->r[0]=c->lr; // 80070560
  W32(c->r[1]+0x00000024u,c->r[0]); // 80070564
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80070568
  c->r[31]=0u+0x80310000u; // 8007056C
  c->r[31]=c->r[31]+0xFFFFDEA0u; // 80070570
  W32(c->r[1]+0x00000018u,c->r[30]); // 80070574
  c->r[30]=0u+0x00000000u; // 80070578
  W32(c->r[1]+0x00000014u,c->r[29]); // 8007057C
  c->r[29]=c->r[3]|c->r[3]; // 80070580
L_80070584:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 80070584
  c->r[3]=c->r[29]|c->r[29]; // 80070588
  c->lr=0x80070590u; f_8006FF50(c); // 8007058C
  cmps(c,0,(int32_t)c->r[3],0); // 80070590
  if (crb(c,2)) { goto L_800705A0; } // 80070594
  c->r[3]=0u+0x00000001u; // 80070598
  goto L_800705B4; // 8007059C
L_800705A0:;
  c->r[30]=c->r[30]+0x00000001u; // 800705A0
  c->r[31]=c->r[31]+0x00000004u; // 800705A4
  cmpu(c,0,c->r[30],0x0000000Cu); // 800705A8
  if (crb(c,0)) { IRQCHK(c); goto L_80070584; } // 800705AC
  c->r[3]=0u+0x00000000u; // 800705B0
L_800705B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800705B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800705B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800705BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800705C0
  c->lr=c->r[0]; // 800705C4
  c->r[1]=c->r[1]+0x00000020u; // 800705C8
  return; // 800705CC
}

