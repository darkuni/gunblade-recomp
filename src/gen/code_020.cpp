#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// SetCreateParams__19CriSrVoiceRegMasterFUlf
void f_80169E38(Ctx* __restrict c) {
  trace_call(0x80169E38u);
  c->r[5]=R32(c->r[3]+0x00000018u); // 80169E38
  W8(c->r[5]+0x00000000u,c->r[4]); // 80169E3C
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169E40
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 80169E44
  return; // 80169E48
}

// SetVolume__19CriSrVoiceRegMasterFf
void f_80169E4C(Ctx* __restrict c) {
  trace_call(0x80169E4Cu);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169E4C
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 80169E50
  return; // 80169E54
}

// SetPitch__19CriSrVoiceRegMasterFf
void f_80169E58(Ctx* __restrict c) {
  trace_call(0x80169E58u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169E58
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[1]);} // 80169E5C
  return; // 80169E60
}

// SetPredelayTime__19CriSrVoiceRegMasterFf
void f_80169E64(Ctx* __restrict c) {
  trace_call(0x80169E64u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169E64
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[1]);} // 80169E68
  return; // 80169E6C
}

// SetEnvelope__19CriSrVoiceRegMasterFffffff
void f_80169E70(Ctx* __restrict c) {
  trace_call(0x80169E70u);
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169E70
  {uint32_t ea=c->r[4]+0x00000014u; WF32(ea,c->f[1]);} // 80169E74
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169E78
  {uint32_t ea=c->r[4]+0x00000018u; WF32(ea,c->f[2]);} // 80169E7C
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169E80
  {uint32_t ea=c->r[4]+0x0000001Cu; WF32(ea,c->f[3]);} // 80169E84
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169E88
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[4]);} // 80169E8C
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169E90
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[5]);} // 80169E94
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169E98
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[6]);} // 80169E9C
  return; // 80169EA0
}

// SetDrySendLevel__19CriSrVoiceRegMasterFUlf
void f_80169EA4(Ctx* __restrict c) {
  trace_call(0x80169EA4u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169EA4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80169EA8
  c->r[3]=c->r[3]+c->r[0]; // 80169EAC
  {uint32_t ea=c->r[3]+0x0000004Cu; WF32(ea,c->f[1]);} // 80169EB0
  return; // 80169EB4
}

// SetWetSendLevel__19CriSrVoiceRegMasterFUlf
void f_80169EB8(Ctx* __restrict c) {
  trace_call(0x80169EB8u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169EB8
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80169EBC
  c->r[3]=c->r[3]+c->r[0]; // 80169EC0
  {uint32_t ea=c->r[3]+0x0000006Cu; WF32(ea,c->f[1]);} // 80169EC4
  return; // 80169EC8
}

// SetFilterCutOff__19CriSrVoiceRegMasterFff
void f_80169ECC(Ctx* __restrict c) {
  trace_call(0x80169ECCu);
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169ECC
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[1]);} // 80169ED0
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169ED4
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[2]);} // 80169ED8
  return; // 80169EDC
}

// SetFormat__19CriSrVoiceRegMasterFQ217CriAuSoundElement6Format
void f_80169EE0(Ctx* __restrict c) {
  trace_call(0x80169EE0u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169EE0
  W32(c->r[3]+0x0000008Cu,c->r[4]); // 80169EE4
  return; // 80169EE8
}

// SetStreamFlag__19CriSrVoiceRegMasterFl
void f_80169EEC(Ctx* __restrict c) {
  trace_call(0x80169EECu);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169EEC
  W32(c->r[3]+0x00000090u,c->r[4]); // 80169EF0
  return; // 80169EF4
}

// SetPriority__19CriSrVoiceRegMasterFl
void f_80169EF8(Ctx* __restrict c) {
  trace_call(0x80169EF8u);
  c->r[5]=R32(c->r[3]+0x00000018u); // 80169EF8
  W32(c->r[5]+0x00000094u,c->r[4]); // 80169EFC
  W32(c->r[3]+0x00000038u,c->r[4]); // 80169F00
  return; // 80169F04
}

// GetPriority__19CriSrVoiceRegMasterFv
void f_80169F08(Ctx* __restrict c) {
  trace_call(0x80169F08u);
  c->r[3]=R32(c->r[3]+0x00000038u); // 80169F08
  return; // 80169F0C
}

// SetSynthName__19CriSrVoiceRegMasterFPCc
void f_80169F10(Ctx* __restrict c) {
  trace_call(0x80169F10u);
  W32(c->r[3]+0x00000044u,c->r[4]); // 80169F10
  return; // 80169F14
}

// SetSyncId__19CriSrVoiceRegMasterFUl
void f_80169F18(Ctx* __restrict c) {
  trace_call(0x80169F18u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F18
  W32(c->r[3]+0x00000098u,c->r[4]); // 80169F1C
  return; // 80169F20
}

// SetInvertMode__19CriSrVoiceRegMasterFQ211CriAuPlayer10InvertMode
void f_80169F24(Ctx* __restrict c) {
  trace_call(0x80169F24u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F24
  W32(c->r[3]+0x0000009Cu,c->r[4]); // 80169F28
  return; // 80169F2C
}

// SetDataPtr__19CriSrVoiceRegMasterFPUcUl
void f_80169F30(Ctx* __restrict c) {
  trace_call(0x80169F30u);
  c->r[6]=R32(c->r[3]+0x00000018u); // 80169F30
  W32(c->r[6]+0x000000ACu,c->r[4]); // 80169F34
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F38
  W32(c->r[3]+0x000000B0u,c->r[5]); // 80169F3C
  return; // 80169F40
}

// SetLoopInfo__19CriSrVoiceRegMasterFlUlUl
void f_80169F44(Ctx* __restrict c) {
  trace_call(0x80169F44u);
  c->r[7]=R32(c->r[3]+0x00000018u); // 80169F44
  W32(c->r[7]+0x000000B4u,c->r[4]); // 80169F48
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169F4C
  W32(c->r[4]+0x000000B8u,c->r[5]); // 80169F50
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F54
  W32(c->r[3]+0x000000BCu,c->r[6]); // 80169F58
  return; // 80169F5C
}

// SetAutoLoop__19CriSrVoiceRegMasterFl
void f_80169F60(Ctx* __restrict c) {
  trace_call(0x80169F60u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F60
  W32(c->r[3]+0x000000E4u,c->r[4]); // 80169F64
  return; // 80169F68
}

// SetAngle__19CriSrVoiceRegMasterFff
void f_80169F6C(Ctx* __restrict c) {
  trace_call(0x80169F6Cu);
  c->r[4]=R32(c->r[3]+0x00000018u); // 80169F6C
  {uint32_t ea=c->r[4]+0x000000A0u; WF32(ea,c->f[1]);} // 80169F70
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F74
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[2]);} // 80169F78
  return; // 80169F7C
}

// SetPan3dVolume__19CriSrVoiceRegMasterFf
void f_80169F80(Ctx* __restrict c) {
  trace_call(0x80169F80u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F80
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[1]);} // 80169F84
  return; // 80169F88
}

// SetAdpcmInfo__19CriSrVoiceRegMasterFPvPv
void f_80169F8C(Ctx* __restrict c) {
  trace_call(0x80169F8Cu);
  c->r[6]=R32(c->r[3]+0x00000018u); // 80169F8C
  W32(c->r[6]+0x000000C0u,c->r[4]); // 80169F90
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169F94
  W32(c->r[3]+0x000000C4u,c->r[5]); // 80169F98
  return; // 80169F9C
}

// SetOutput__19CriSrVoiceRegMasterFPC14CriAuOutputWii
void f_80169FA0(Ctx* __restrict c) {
  trace_call(0x80169FA0u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169FA0
  c->r[5]=0u+0x00000018u; // 80169FA4
  c->r[3]=c->r[3]+0x000000C8u; // 80169FA8
  f_800043C4(c); return; // 80169FAC
}

// SetPan3dMode__19CriSrVoiceRegMasterFQ214CriAuPlayerWii9Pan3dMode
void f_80169FB0(Ctx* __restrict c) {
  trace_call(0x80169FB0u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169FB0
  W32(c->r[3]+0x000000E0u,c->r[4]); // 80169FB4
  return; // 80169FB8
}

// SetNumSections__19CriSrVoiceRegMasterFUl
void f_80169FBC(Ctx* __restrict c) {
  trace_call(0x80169FBCu);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80169FBC
  W8(c->r[3]+0x00000001u,c->r[4]); // 80169FC0
  return; // 80169FC4
}

// Create__26CriSrVoiceRegManagerMasterFP15_criheap_structUlPCQ226CriSrVoiceRegManagerMaster12EntityConfigUl
void f_80169FC8(Ctx* __restrict c) {
  trace_call(0x80169FC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80169FC8
  c->r[0]=c->lr; // 80169FCC
  cmps(c,0,(int32_t)c->r[6],0); // 80169FD0
  c->r[8]=0u+0x00000000u; // 80169FD4
  W32(c->r[1]+0x00000044u,c->r[0]); // 80169FD8
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80169FDC
  c->r[31]=c->r[1]|c->r[1]; // 80169FE0
  c->r[26]=c->r[3]|c->r[3]; // 80169FE4
  c->r[27]=c->r[4]|c->r[4]; // 80169FE8
  c->r[28]=c->r[5]|c->r[5]; // 80169FEC
  c->r[29]=c->r[6]|c->r[6]; // 80169FF0
  c->r[30]=0u+0x00000000u; // 80169FF4
  if (crb(c,2)) { goto L_8016A084; } // 80169FF8
  cmpu(c,0,c->r[6],0x00000008u); // 80169FFC
  c->r[4]=c->r[6]+0xFFFFFFF8u; // 8016A000
  if (!crb(c,1)) { goto L_8016A060; } // 8016A004
  c->r[7]=c->r[28]|c->r[28]; // 8016A008
  goto L_8016A058; // 8016A00C
L_8016A010:;
  c->r[3]=R32(c->r[7]+0x00000000u); // 8016A010
  c->r[8]=c->r[8]+0x00000008u; // 8016A014
  c->r[0]=R32(c->r[7]+0x00000004u); // 8016A018
  c->r[30]=c->r[30]+c->r[3]; // 8016A01C
  c->r[3]=R32(c->r[7]+0x00000008u); // 8016A020
  c->r[30]=c->r[30]+c->r[0]; // 8016A024
  c->r[0]=R32(c->r[7]+0x0000000Cu); // 8016A028
  c->r[30]=c->r[30]+c->r[3]; // 8016A02C
  c->r[3]=R32(c->r[7]+0x00000010u); // 8016A030
  c->r[30]=c->r[30]+c->r[0]; // 8016A034
  c->r[0]=R32(c->r[7]+0x00000014u); // 8016A038
  c->r[30]=c->r[30]+c->r[3]; // 8016A03C
  c->r[3]=R32(c->r[7]+0x00000018u); // 8016A040
  c->r[30]=c->r[30]+c->r[0]; // 8016A044
  c->r[0]=R32(c->r[7]+0x0000001Cu); // 8016A048
  c->r[30]=c->r[30]+c->r[3]; // 8016A04C
  c->r[7]=c->r[7]+0x00000020u; // 8016A050
  c->r[30]=c->r[30]+c->r[0]; // 8016A054
L_8016A058:;
  cmpu(c,0,c->r[8],c->r[4]); // 8016A058
  if (crb(c,0)) { IRQCHK(c); goto L_8016A010; } // 8016A05C
L_8016A060:;
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 8016A060
  c->r[3]=c->r[5]+c->r[0]; // 8016A064
  goto L_8016A07C; // 8016A068
L_8016A06C:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016A06C
  c->r[3]=c->r[3]+0x00000004u; // 8016A070
  c->r[8]=c->r[8]+0x00000001u; // 8016A074
  c->r[30]=c->r[30]+c->r[0]; // 8016A078
L_8016A07C:;
  cmpu(c,0,c->r[8],c->r[6]); // 8016A07C
  if (crb(c,0)) { IRQCHK(c); goto L_8016A06C; } // 8016A080
L_8016A084:;
  c->r[5]=0u+0x802D0000u; // 8016A084
  c->r[4]=c->r[26]|c->r[26]; // 8016A088
  c->r[5]=c->r[5]+0x00000144u; // 8016A08C
  c->r[3]=0u+0x0000001Cu; // 8016A090
  c->r[5]=c->r[5]+0x0000001Eu; // 8016A094
  c->r[6]=0u+0x00000008u; // 8016A098
  c->lr=0x8016A0A0u; f_8017BEDC(c); // 8016A09C
  cmps(c,0,(int32_t)c->r[3],0); // 8016A0A0
  c->r[25]=c->r[3]|c->r[3]; // 8016A0A4
  if (crb(c,2)) { goto L_8016A0DC; } // 8016A0A8
  W32(c->r[3]+0x00000004u,c->r[30]); // 8016A0AC
  c->r[5]=0u+0x80330000u; // 8016A0B0
  c->r[5]=c->r[5]+0x00001710u; // 8016A0B4
  c->r[4]=0u+0x00000000u; // 8016A0B8
  W32(c->r[3]+0x00000008u,c->r[27]); // 8016A0BC
  c->r[0]=0u+0x00000100u; // 8016A0C0
  W32(c->r[3]+0x00000000u,c->r[5]); // 8016A0C4
  W32(c->r[3]+0x0000000Cu,c->r[26]); // 8016A0C8
  W32(c->r[3]+0x00000010u,c->r[4]); // 8016A0CC
  W32(c->r[3]+0x00000014u,c->r[4]); // 8016A0D0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016A0D4
  W32(c->r[3]+0x00000018u,c->r[0]); // 8016A0D8
L_8016A0DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016A0DC
  if (!crb(c,2)) { goto L_8016A104; } // 8016A0E0
  c->r[4]=0u+0x802D0000u; // 8016A0E4
  c->r[3]=0u+0x00000000u; // 8016A0E8
  c->r[4]=c->r[4]+0x00000144u; // 8016A0EC
  c->r[5]=0u+0xFFFFFFFDu; // 8016A0F0
  c->r[4]=c->r[4]+0x00000039u; // 8016A0F4
  c->lr=0x8016A0FCu; f_8017968C(c); // 8016A0F8
  c->r[3]=0u+0x00000000u; // 8016A0FC
  goto L_8016A158; // 8016A100
L_8016A104:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8016A104
  c->r[3]=c->r[25]|c->r[25]; // 8016A108
  c->r[4]=c->r[28]|c->r[28]; // 8016A10C
  c->r[5]=c->r[29]|c->r[29]; // 8016A110
  c->r[12]=R32(c->r[12]+0x00000010u); // 8016A114
  c->ctr=c->r[12]; // 8016A118
  if (true) { c->lr=0x8016A120u; dispatch(c,c->ctr); } // 8016A11C
  cmps(c,0,(int32_t)c->r[3],0); // 8016A120
  if (!crb(c,2)) { goto L_8016A154; } // 8016A124
  cmps(c,0,(int32_t)c->r[25],0); // 8016A128
  if (crb(c,2)) { goto L_8016A14C; } // 8016A12C
  c->r[12]=R32(c->r[25]+0x00000000u); // 8016A130
  c->r[0]=0u+0x00000001u; // 8016A134
  c->r[3]=c->r[25]|c->r[25]; // 8016A138
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016A13C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8016A140
  c->ctr=c->r[12]; // 8016A144
  if (true) { c->lr=0x8016A14Cu; dispatch(c,c->ctr); } // 8016A148
L_8016A14C:;
  c->r[3]=0u+0x00000000u; // 8016A14C
  goto L_8016A158; // 8016A150
L_8016A154:;
  c->r[3]=c->r[25]|c->r[25]; // 8016A154
L_8016A158:;
  c->r[10]=c->r[31]|c->r[31]; // 8016A158
  {uint32_t ea=c->r[10]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016A15C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016A160
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016A164
  c->r[1]=c->r[10]|c->r[10]; // 8016A168
  c->lr=c->r[0]; // 8016A16C
  return; // 8016A170
}

// Destroy__26CriSrVoiceRegManagerMasterFv
void f_8016A174(Ctx* __restrict c) {
  trace_call(0x8016A174u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A174
  c->r[0]=c->lr; // 8016A178
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016A17C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016A180
  c->r[31]=c->r[3]|c->r[3]; // 8016A184
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016A188
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016A18C
  c->ctr=c->r[12]; // 8016A190
  if (true) { c->lr=0x8016A198u; dispatch(c,c->ctr); } // 8016A194
  cmps(c,0,(int32_t)c->r[31],0); // 8016A198
  if (crb(c,2)) { goto L_8016A1B8; } // 8016A19C
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016A1A0
  c->r[3]=c->r[31]|c->r[31]; // 8016A1A4
  c->r[4]=0u+0x00000001u; // 8016A1A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016A1AC
  c->ctr=c->r[12]; // 8016A1B0
  if (true) { c->lr=0x8016A1B8u; dispatch(c,c->ctr); } // 8016A1B4
L_8016A1B8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016A1B8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016A1BC
  c->lr=c->r[0]; // 8016A1C0
  c->r[1]=c->r[1]+0x00000010u; // 8016A1C4
  return; // 8016A1C8
}

// __dt__26CriSrVoiceRegManagerMasterFv
void f_8016A1CC(Ctx* __restrict c) {
  trace_call(0x8016A1CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A1CC
  c->r[0]=c->lr; // 8016A1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8016A1D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016A1D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016A1DC
  c->r[31]=c->r[3]|c->r[3]; // 8016A1E0
  if (crb(c,2)) { goto L_8016A1F8; } // 8016A1E4
  cmps(c,0,(int32_t)c->r[4],0); // 8016A1E8
  if (!crb(c,1)) { goto L_8016A1F8; } // 8016A1EC
  c->r[4]=0u+0x0000001Cu; // 8016A1F0
  c->lr=0x8016A1F8u; f_8017BFE8(c); // 8016A1F4
L_8016A1F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016A1F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016A1FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016A200
  c->lr=c->r[0]; // 8016A204
  c->r[1]=c->r[1]+0x00000010u; // 8016A208
  return; // 8016A20C
}

// Initialize__26CriSrVoiceRegManagerMasterFPCQ226CriSrVoiceRegManagerMaster12EntityConfigUl
void f_8016A210(Ctx* __restrict c) {
  trace_call(0x8016A210u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A210
  c->r[0]=c->lr; // 8016A214
  c->r[6]=0u+0x00000008u; // 8016A218
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016A21C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016A220
  c->r[28]=0u+0x802D0000u; // 8016A224
  c->r[29]=c->r[3]|c->r[3]; // 8016A228
  c->r[30]=c->r[4]|c->r[4]; // 8016A22C
  c->r[28]=c->r[28]+0x00000144u; // 8016A230
  c->r[31]=c->r[5]|c->r[5]; // 8016A234
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8016A238
  c->r[5]=c->r[28]+0x00000043u; // 8016A23C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016A240
  c->lr=0x8016A248u; f_8017C100(c); // 8016A244
  cmps(c,0,(int32_t)c->r[3],0); // 8016A248
  W32(c->r[29]+0x00000010u,c->r[3]); // 8016A24C
  if (!crb(c,2)) { goto L_8016A280; } // 8016A250
  c->r[4]=c->r[28]+0x00000061u; // 8016A254
  c->r[3]=0u+0x00000000u; // 8016A258
  c->r[5]=0u+0xFFFFFFFDu; // 8016A25C
  c->lr=0x8016A264u; f_8017968C(c); // 8016A260
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016A264
  c->r[3]=c->r[29]|c->r[29]; // 8016A268
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016A26C
  c->ctr=c->r[12]; // 8016A270
  if (true) { c->lr=0x8016A278u; dispatch(c,c->ctr); } // 8016A274
  c->r[3]=0u+0x00000000u; // 8016A278
  goto L_8016A3C0; // 8016A27C
L_8016A280:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016A280
  W32(c->r[29]+0x00000014u,c->r[31]); // 8016A284
  c->r[6]=0u+0x00000000u; // 8016A288
  if (crb(c,2)) { goto L_8016A348; } // 8016A28C
  cmpu(c,0,c->r[31],0x00000008u); // 8016A290
  c->r[3]=c->r[31]+0xFFFFFFF8u; // 8016A294
  if (!crb(c,1)) { goto L_8016A320; } // 8016A298
  c->r[0]=c->r[3]+0x00000007u; // 8016A29C
  c->r[5]=0u+0x00000000u; // 8016A2A0
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8016A2A4
  c->r[4]=0u+0x00000000u; // 8016A2A8
  c->ctr=c->r[0]; // 8016A2AC
  cmpu(c,0,c->r[3],0x00000000u); // 8016A2B0
  if (!crb(c,1)) { goto L_8016A320; } // 8016A2B4
L_8016A2B8:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016A2B8
  c->r[6]=c->r[6]+0x00000008u; // 8016A2BC
  W32(c->r[3]+c->r[5],c->r[4]); // 8016A2C0
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A2C4
  c->r[3]=c->r[0]+c->r[5]; // 8016A2C8
  W32(c->r[3]+0x00000004u,c->r[4]); // 8016A2CC
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A2D0
  c->r[3]=c->r[0]+c->r[5]; // 8016A2D4
  W32(c->r[3]+0x00000008u,c->r[4]); // 8016A2D8
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A2DC
  c->r[3]=c->r[0]+c->r[5]; // 8016A2E0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8016A2E4
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A2E8
  c->r[3]=c->r[0]+c->r[5]; // 8016A2EC
  W32(c->r[3]+0x00000010u,c->r[4]); // 8016A2F0
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A2F4
  c->r[3]=c->r[0]+c->r[5]; // 8016A2F8
  W32(c->r[3]+0x00000014u,c->r[4]); // 8016A2FC
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A300
  c->r[3]=c->r[0]+c->r[5]; // 8016A304
  W32(c->r[3]+0x00000018u,c->r[4]); // 8016A308
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016A30C
  c->r[3]=c->r[0]+c->r[5]; // 8016A310
  c->r[5]=c->r[5]+0x00000020u; // 8016A314
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8016A318
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8016A2B8; } // 8016A31C
L_8016A320:;
  c->r[0]=c->r[31]-c->r[6]; // 8016A320
  c->r[5]=rotl(c->r[6],2)&0xFFFFFFFCu; // 8016A324
  c->r[4]=0u+0x00000000u; // 8016A328
  c->ctr=c->r[0]; // 8016A32C
  cmpu(c,0,c->r[6],c->r[31]); // 8016A330
  if (!crb(c,0)) { goto L_8016A348; } // 8016A334
L_8016A338:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016A338
  W32(c->r[3]+c->r[5],c->r[4]); // 8016A33C
  c->r[5]=c->r[5]+0x00000004u; // 8016A340
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8016A338; } // 8016A344
L_8016A348:;
  c->r[27]=0u+0x00000000u; // 8016A348
  c->r[28]=0u+0x00000000u; // 8016A34C
  goto L_8016A3B4; // 8016A350
L_8016A354:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016A354
  c->r[3]=c->r[29]|c->r[29]; // 8016A358
  c->r[6]=c->r[27]|c->r[27]; // 8016A35C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8016A360
  c->r[12]=R32(c->r[12]+0x00000018u); // 8016A364
  c->r[5]=R32(c->r[30]+0x00000000u); // 8016A368
  c->ctr=c->r[12]; // 8016A36C
  if (true) { c->lr=0x8016A374u; dispatch(c,c->ctr); } // 8016A370
  c->r[4]=R32(c->r[29]+0x00000010u); // 8016A374
  W32(c->r[4]+c->r[28],c->r[3]); // 8016A378
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016A37C
  c->r[0]=R32(c->r[3]+c->r[28]); // 8016A380
  cmps(c,0,(int32_t)c->r[0],0); // 8016A384
  if (!crb(c,2)) { goto L_8016A3A8; } // 8016A388
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016A38C
  c->r[3]=c->r[29]|c->r[29]; // 8016A390
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016A394
  c->ctr=c->r[12]; // 8016A398
  if (true) { c->lr=0x8016A3A0u; dispatch(c,c->ctr); } // 8016A39C
  c->r[3]=0u+0x00000000u; // 8016A3A0
  goto L_8016A3C0; // 8016A3A4
L_8016A3A8:;
  c->r[30]=c->r[30]+0x00000004u; // 8016A3A8
  c->r[28]=c->r[28]+0x00000004u; // 8016A3AC
  c->r[27]=c->r[27]+0x00000001u; // 8016A3B0
L_8016A3B4:;
  cmpu(c,0,c->r[27],c->r[31]); // 8016A3B4
  if (crb(c,0)) { IRQCHK(c); goto L_8016A354; } // 8016A3B8
  c->r[3]=0u+0x00000001u; // 8016A3BC
L_8016A3C0:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016A3C0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016A3C4
  c->lr=c->r[0]; // 8016A3C8
  c->r[1]=c->r[1]+0x00000020u; // 8016A3CC
  return; // 8016A3D0
}

// Finalize__26CriSrVoiceRegManagerMasterFv
void f_8016A3D4(Ctx* __restrict c) {
  trace_call(0x8016A3D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A3D4
  c->r[0]=c->lr; // 8016A3D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016A3DC
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016A3E0
  c->r[27]=c->r[3]|c->r[3]; // 8016A3E4
  c->r[0]=R32(c->r[3]+0x00000010u); // 8016A3E8
  cmps(c,0,(int32_t)c->r[0],0); // 8016A3EC
  if (crb(c,2)) { goto L_8016A464; } // 8016A3F0
  c->r[28]=0u+0x00000000u; // 8016A3F4
  c->r[29]=0u+0x00000000u; // 8016A3F8
  c->r[31]=0u+0x00000000u; // 8016A3FC
  goto L_8016A444; // 8016A400
L_8016A404:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 8016A404
  c->r[30]=R32(c->r[3]+c->r[29]); // 8016A408
  c->r[3]=c->r[30]|c->r[30]; // 8016A40C
  c->lr=0x8016A414u; f_8016B178(c); // 8016A410
  cmps(c,0,(int32_t)c->r[30],0); // 8016A414
  if (crb(c,2)) { goto L_8016A434; } // 8016A418
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016A41C
  c->r[3]=c->r[30]|c->r[30]; // 8016A420
  c->r[4]=0u+0x00000001u; // 8016A424
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016A428
  c->ctr=c->r[12]; // 8016A42C
  if (true) { c->lr=0x8016A434u; dispatch(c,c->ctr); } // 8016A430
L_8016A434:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 8016A434
  c->r[28]=c->r[28]+0x00000001u; // 8016A438
  W32(c->r[3]+c->r[29],c->r[31]); // 8016A43C
  c->r[29]=c->r[29]+0x00000004u; // 8016A440
L_8016A444:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 8016A444
  cmpu(c,0,c->r[28],c->r[0]); // 8016A448
  if (crb(c,0)) { IRQCHK(c); goto L_8016A404; } // 8016A44C
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 8016A450
  c->r[4]=R32(c->r[27]+0x00000010u); // 8016A454
  c->lr=0x8016A45Cu; f_8017C228(c); // 8016A458
  c->r[0]=0u+0x00000000u; // 8016A45C
  W32(c->r[27]+0x00000010u,c->r[0]); // 8016A460
L_8016A464:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016A464
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016A468
  c->lr=c->r[0]; // 8016A46C
  c->r[1]=c->r[1]+0x00000020u; // 8016A470
  return; // 8016A474
}

// Execute__26CriSrVoiceRegManagerMasterFv
void f_8016A478(Ctx* __restrict c) {
  trace_call(0x8016A478u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A478
  c->r[0]=c->lr; // 8016A47C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016A480
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016A484
  c->r[29]=c->r[3]|c->r[3]; // 8016A488
  c->r[30]=0u+0x00000000u; // 8016A48C
  c->r[31]=0u+0x00000000u; // 8016A490
  c->r[27]=0u+0x80330000u; // 8016A494
  c->r[28]=0u+0x00000000u; // 8016A498
  goto L_8016A55C; // 8016A49C
L_8016A4A0:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016A4A0
  c->r[26]=R32(c->r[3]+c->r[31]); // 8016A4A4
  c->r[24]=R32(c->r[26]+0x00000010u); // 8016A4A8
L_8016A4AC:;
  cmps(c,1,(int32_t)c->r[24],0); // 8016A4AC
  if (crb(c,6)) { goto L_8016A54C; } // 8016A4B0
  c->r[0]=R32(c->r[24]+0x0000000Cu); // 8016A4B4
  c->r[25]=R32(c->r[24]+0x00000004u); // 8016A4B8
  cmps(c,0,(int32_t)c->r[0],1); // 8016A4BC
  if (!crb(c,2)) { goto L_8016A544; } // 8016A4C0
  if (!crb(c,6)) { goto L_8016A4D8; } // 8016A4C4
  c->r[4]=c->r[27]+0x00000C2Cu; // 8016A4C8
  c->r[3]=0u+0x00000000u; // 8016A4CC
  c->lr=0x8016A4D4u; f_80179434(c); // 8016A4D0
  goto L_8016A538; // 8016A4D4
L_8016A4D8:;
  c->r[0]=R32(c->r[26]+0x00000010u); // 8016A4D8
  cmpu(c,0,c->r[0],c->r[24]); // 8016A4DC
  if (!crb(c,2)) { goto L_8016A4E8; } // 8016A4E0
  W32(c->r[26]+0x00000010u,c->r[25]); // 8016A4E4
L_8016A4E8:;
  c->r[0]=R32(c->r[26]+0x00000014u); // 8016A4E8
  cmpu(c,0,c->r[0],c->r[24]); // 8016A4EC
  if (!crb(c,2)) { goto L_8016A4FC; } // 8016A4F0
  c->r[0]=R32(c->r[24]+0x00000000u); // 8016A4F4
  W32(c->r[26]+0x00000014u,c->r[0]); // 8016A4F8
L_8016A4FC:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 8016A4FC
  cmps(c,0,(int32_t)c->r[3],0); // 8016A500
  if (crb(c,2)) { goto L_8016A510; } // 8016A504
  c->r[0]=R32(c->r[24]+0x00000004u); // 8016A508
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016A50C
L_8016A510:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 8016A510
  cmps(c,0,(int32_t)c->r[3],0); // 8016A514
  if (crb(c,2)) { goto L_8016A524; } // 8016A518
  c->r[0]=R32(c->r[24]+0x00000000u); // 8016A51C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016A520
L_8016A524:;
  W32(c->r[24]+0x00000004u,c->r[28]); // 8016A524
  W32(c->r[24]+0x00000000u,c->r[28]); // 8016A528
  c->r[3]=R32(c->r[26]+0x00000018u); // 8016A52C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016A530
  W32(c->r[26]+0x00000018u,c->r[0]); // 8016A534
L_8016A538:;
  c->r[3]=c->r[24]|c->r[24]; // 8016A538
  c->r[4]=0u+0x0000001Cu; // 8016A53C
  c->lr=0x8016A544u; f_8017BFE8(c); // 8016A540
L_8016A544:;
  c->r[24]=c->r[25]|c->r[25]; // 8016A544
  IRQCHK(c); goto L_8016A4AC; // 8016A548
L_8016A54C:;
  c->r[0]=R32(c->r[26]+0x00000010u); // 8016A54C
  c->r[30]=c->r[30]+0x00000001u; // 8016A550
  W32(c->r[26]+0x0000001Cu,c->r[0]); // 8016A554
  c->r[31]=c->r[31]+0x00000004u; // 8016A558
L_8016A55C:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 8016A55C
  cmpu(c,0,c->r[30],c->r[0]); // 8016A560
  if (crb(c,0)) { IRQCHK(c); goto L_8016A4A0; } // 8016A564
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016A568
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016A56C
  c->lr=c->r[0]; // 8016A570
  c->r[1]=c->r[1]+0x00000030u; // 8016A574
  return; // 8016A578
}

// GetFreeVoiceReg__26CriSrVoiceRegManagerMasterFUlUlQ217CriAuSoundElement6Format
void f_8016A57C(Ctx* __restrict c) {
  trace_call(0x8016A57Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A57C
  c->r[0]=c->lr; // 8016A580
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016A584
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016A588
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016A58C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016A590
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016A594
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016A598
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016A59C
  c->r[31]=R32(c->r[3]+c->r[0]); // 8016A5A0
  c->r[0]=R32(c->r[31]+0x00000034u); // 8016A5A4
  cmps(c,0,(int32_t)c->r[0],0); // 8016A5A8
  if (!crb(c,2)) { goto L_8016A5B8; } // 8016A5AC
  c->r[30]=0u+0x00000000u; // 8016A5B0
  goto L_8016A748; // 8016A5B4
L_8016A5B8:;
  c->r[30]=R32(c->r[31]+0x0000002Cu); // 8016A5B8
  cmps(c,0,(int32_t)c->r[30],0); // 8016A5BC
  if (crb(c,2)) { goto L_8016A5C8; } // 8016A5C0
  c->r[30]=c->r[30]+0xFFFFFFDCu; // 8016A5C4
L_8016A5C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016A5C8
  if (crb(c,2)) { goto L_8016A748; } // 8016A5CC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016A5D0
  c->r[3]=c->r[31]|c->r[31]; // 8016A5D4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8016A5D8
  c->ctr=c->r[12]; // 8016A5DC
  if (true) { c->lr=0x8016A5E4u; dispatch(c,c->ctr); } // 8016A5E0
  c->r[4]=R32(c->r[31]+0x00000004u); // 8016A5E4
  c->r[5]=c->r[3]|c->r[3]; // 8016A5E8
  c->r[3]=c->r[30]|c->r[30]; // 8016A5EC
  c->r[6]=0u+0x00000000u; // 8016A5F0
  c->lr=0x8016A5F8u; f_80169794(c); // 8016A5F4
  cmps(c,0,(int32_t)c->r[3],0); // 8016A5F8
  if (!crb(c,2)) { goto L_8016A628; } // 8016A5FC
  c->r[3]=c->r[30]|c->r[30]; // 8016A600
  c->lr=0x8016A608u; f_80169950(c); // 8016A604
  c->r[4]=0u+0x802D0000u; // 8016A608
  c->r[3]=0u+0x00000000u; // 8016A60C
  c->r[4]=c->r[4]+0x00000144u; // 8016A610
  c->r[5]=0u+0xFFFFFFFDu; // 8016A614
  c->r[4]=c->r[4]+0x0000006Cu; // 8016A618
  c->lr=0x8016A620u; f_8017968C(c); // 8016A61C
  c->r[30]=0u+0x00000000u; // 8016A620
  goto L_8016A748; // 8016A624
L_8016A628:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016A628
  c->r[3]=c->r[30]|c->r[30]; // 8016A62C
  if (crb(c,2)) { goto L_8016A638; } // 8016A630
  c->r[3]=c->r[30]+0x00000024u; // 8016A634
L_8016A638:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016A638
  if (!crb(c,2)) { goto L_8016A654; } // 8016A63C
  c->r[4]=0u+0x80330000u; // 8016A640
  c->r[3]=0u+0x00000000u; // 8016A644
  c->r[4]=c->r[4]+0x00000C2Cu; // 8016A648
  c->lr=0x8016A650u; f_80179434(c); // 8016A64C
  goto L_8016A6BC; // 8016A650
L_8016A654:;
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8016A654
  cmpu(c,0,c->r[0],c->r[3]); // 8016A658
  if (!crb(c,2)) { goto L_8016A668; } // 8016A65C
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016A660
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8016A664
L_8016A668:;
  c->r[0]=R32(c->r[31]+0x00000030u); // 8016A668
  cmpu(c,0,c->r[0],c->r[3]); // 8016A66C
  if (!crb(c,2)) { goto L_8016A67C; } // 8016A670
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016A674
  W32(c->r[31]+0x00000030u,c->r[0]); // 8016A678
L_8016A67C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8016A67C
  cmps(c,0,(int32_t)c->r[4],0); // 8016A680
  if (crb(c,2)) { goto L_8016A690; } // 8016A684
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016A688
  W32(c->r[4]+0x00000004u,c->r[0]); // 8016A68C
L_8016A690:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016A690
  cmps(c,0,(int32_t)c->r[4],0); // 8016A694
  if (crb(c,2)) { goto L_8016A6A4; } // 8016A698
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016A69C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8016A6A0
L_8016A6A4:;
  c->r[0]=0u+0x00000000u; // 8016A6A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016A6A8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016A6AC
  c->r[3]=R32(c->r[31]+0x00000034u); // 8016A6B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016A6B4
  W32(c->r[31]+0x00000034u,c->r[0]); // 8016A6B8
L_8016A6BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016A6BC
  c->r[29]=c->r[30]|c->r[30]; // 8016A6C0
  if (crb(c,2)) { goto L_8016A6CC; } // 8016A6C4
  c->r[29]=c->r[30]+0x00000024u; // 8016A6C8
L_8016A6CC:;
  c->r[28]=R32(c->r[31]+0x0000003Cu); // 8016A6CC
  cmps(c,0,(int32_t)c->r[28],0); // 8016A6D0
  if (crb(c,2)) { goto L_8016A718; } // 8016A6D4
  c->r[0]=R32(c->r[29]+0x00000000u); // 8016A6D8
  cmps(c,0,(int32_t)c->r[0],0); // 8016A6DC
  if (!crb(c,2)) { goto L_8016A6F0; } // 8016A6E0
  c->r[0]=R32(c->r[29]+0x00000004u); // 8016A6E4
  cmps(c,0,(int32_t)c->r[0],0); // 8016A6E8
  if (crb(c,2)) { goto L_8016A700; } // 8016A6EC
L_8016A6F0:;
  c->r[4]=0u+0x80330000u; // 8016A6F0
  c->r[3]=0u+0x00000000u; // 8016A6F4
  c->r[4]=c->r[4]+0x00000FECu; // 8016A6F8
  c->lr=0x8016A700u; f_80179434(c); // 8016A6FC
L_8016A700:;
  W32(c->r[29]+0x00000000u,c->r[28]); // 8016A700
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016A704
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016A708
  W32(c->r[28]+0x00000004u,c->r[29]); // 8016A70C
  W32(c->r[31]+0x0000003Cu,c->r[29]); // 8016A710
  goto L_8016A73C; // 8016A714
L_8016A718:;
  W32(c->r[31]+0x0000003Cu,c->r[29]); // 8016A718
  c->r[0]=R32(c->r[31]+0x00000038u); // 8016A71C
  cmps(c,0,(int32_t)c->r[0],0); // 8016A720
  if (crb(c,2)) { goto L_8016A738; } // 8016A724
  c->r[4]=0u+0x80330000u; // 8016A728
  c->r[3]=0u+0x00000000u; // 8016A72C
  c->r[4]=c->r[4]+0x00000FC4u; // 8016A730
  c->lr=0x8016A738u; f_80179434(c); // 8016A734
L_8016A738:;
  W32(c->r[31]+0x00000038u,c->r[29]); // 8016A738
L_8016A73C:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 8016A73C
  c->r[0]=c->r[3]+0x00000001u; // 8016A740
  W32(c->r[31]+0x00000040u,c->r[0]); // 8016A744
L_8016A748:;
  c->r[3]=c->r[30]|c->r[30]; // 8016A748
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016A74C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016A750
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016A754
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016A758
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016A75C
  c->lr=c->r[0]; // 8016A760
  c->r[1]=c->r[1]+0x00000020u; // 8016A764
  return; // 8016A768
}

// ReleaseVoiceReg__26CriSrVoiceRegManagerMasterFP19CriSrVoiceRegMaster
void f_8016A76C(Ctx* __restrict c) {
  trace_call(0x8016A76Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A76C
  c->r[0]=c->lr; // 8016A770
  cmps(c,0,(int32_t)c->r[4],0); // 8016A774
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016A778
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016A77C
  c->r[31]=c->r[4]|c->r[4]; // 8016A780
  c->r[5]=c->r[31]|c->r[31]; // 8016A784
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016A788
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016A78C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016A790
  c->r[0]=R32(c->r[4]+0x0000004Cu); // 8016A794
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016A798
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016A79C
  c->r[30]=R32(c->r[3]+c->r[0]); // 8016A7A0
  if (crb(c,2)) { goto L_8016A7AC; } // 8016A7A4
  c->r[5]=c->r[4]+0x00000024u; // 8016A7A8
L_8016A7AC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8016A7AC
  if (!crb(c,2)) { goto L_8016A7C8; } // 8016A7B0
  c->r[4]=0u+0x80330000u; // 8016A7B4
  c->r[3]=0u+0x00000000u; // 8016A7B8
  c->r[4]=c->r[4]+0x00000C2Cu; // 8016A7BC
  c->lr=0x8016A7C4u; f_80179434(c); // 8016A7C0
  goto L_8016A830; // 8016A7C4
L_8016A7C8:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 8016A7C8
  cmpu(c,0,c->r[0],c->r[5]); // 8016A7CC
  if (!crb(c,2)) { goto L_8016A7DC; } // 8016A7D0
  c->r[0]=R32(c->r[5]+0x00000004u); // 8016A7D4
  W32(c->r[30]+0x00000038u,c->r[0]); // 8016A7D8
L_8016A7DC:;
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8016A7DC
  cmpu(c,0,c->r[0],c->r[5]); // 8016A7E0
  if (!crb(c,2)) { goto L_8016A7F0; } // 8016A7E4
  c->r[0]=R32(c->r[5]+0x00000000u); // 8016A7E8
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 8016A7EC
L_8016A7F0:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 8016A7F0
  cmps(c,0,(int32_t)c->r[3],0); // 8016A7F4
  if (crb(c,2)) { goto L_8016A804; } // 8016A7F8
  c->r[0]=R32(c->r[5]+0x00000004u); // 8016A7FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016A800
L_8016A804:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 8016A804
  cmps(c,0,(int32_t)c->r[3],0); // 8016A808
  if (crb(c,2)) { goto L_8016A818; } // 8016A80C
  c->r[0]=R32(c->r[5]+0x00000000u); // 8016A810
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016A814
L_8016A818:;
  c->r[0]=0u+0x00000000u; // 8016A818
  W32(c->r[5]+0x00000004u,c->r[0]); // 8016A81C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8016A820
  c->r[3]=R32(c->r[30]+0x00000040u); // 8016A824
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016A828
  W32(c->r[30]+0x00000040u,c->r[0]); // 8016A82C
L_8016A830:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016A830
  c->r[29]=c->r[31]|c->r[31]; // 8016A834
  if (crb(c,2)) { goto L_8016A840; } // 8016A838
  c->r[29]=c->r[31]+0x00000024u; // 8016A83C
L_8016A840:;
  c->r[28]=R32(c->r[30]+0x00000030u); // 8016A840
  cmps(c,0,(int32_t)c->r[28],0); // 8016A844
  if (crb(c,2)) { goto L_8016A88C; } // 8016A848
  c->r[0]=R32(c->r[29]+0x00000000u); // 8016A84C
  cmps(c,0,(int32_t)c->r[0],0); // 8016A850
  if (!crb(c,2)) { goto L_8016A864; } // 8016A854
  c->r[0]=R32(c->r[29]+0x00000004u); // 8016A858
  cmps(c,0,(int32_t)c->r[0],0); // 8016A85C
  if (crb(c,2)) { goto L_8016A874; } // 8016A860
L_8016A864:;
  c->r[4]=0u+0x80330000u; // 8016A864
  c->r[3]=0u+0x00000000u; // 8016A868
  c->r[4]=c->r[4]+0x00000FECu; // 8016A86C
  c->lr=0x8016A874u; f_80179434(c); // 8016A870
L_8016A874:;
  W32(c->r[29]+0x00000000u,c->r[28]); // 8016A874
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016A878
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016A87C
  W32(c->r[28]+0x00000004u,c->r[29]); // 8016A880
  W32(c->r[30]+0x00000030u,c->r[29]); // 8016A884
  goto L_8016A8B0; // 8016A888
L_8016A88C:;
  W32(c->r[30]+0x00000030u,c->r[29]); // 8016A88C
  c->r[0]=R32(c->r[30]+0x0000002Cu); // 8016A890
  cmps(c,0,(int32_t)c->r[0],0); // 8016A894
  if (crb(c,2)) { goto L_8016A8AC; } // 8016A898
  c->r[4]=0u+0x80330000u; // 8016A89C
  c->r[3]=0u+0x00000000u; // 8016A8A0
  c->r[4]=c->r[4]+0x00000FC4u; // 8016A8A4
  c->lr=0x8016A8ACu; f_80179434(c); // 8016A8A8
L_8016A8AC:;
  W32(c->r[30]+0x0000002Cu,c->r[29]); // 8016A8AC
L_8016A8B0:;
  c->r[4]=R32(c->r[30]+0x00000034u); // 8016A8B0
  c->r[3]=c->r[31]|c->r[31]; // 8016A8B4
  c->r[0]=c->r[4]+0x00000001u; // 8016A8B8
  W32(c->r[30]+0x00000034u,c->r[0]); // 8016A8BC
  c->lr=0x8016A8C4u; f_80169950(c); // 8016A8C0
  c->r[3]=c->r[31]|c->r[31]; // 8016A8C4
  c->lr=0x8016A8CCu; f_80169A84(c); // 8016A8C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016A8CC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016A8D0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016A8D4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016A8D8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016A8DC
  c->lr=c->r[0]; // 8016A8E0
  c->r[1]=c->r[1]+0x00000020u; // 8016A8E4
  return; // 8016A8E8
}

// FindLowPriorityReg__26CriSrVoiceRegManagerMasterFUlRCQ210CriSrVoice15ConfigParameterUlQ217CriAuSoundElement6FormatPCc
void f_8016A8EC(Ctx* __restrict c) {
  trace_call(0x8016A8ECu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016A8EC
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016A8F0
  c->r[4]=c->r[5]|c->r[5]; // 8016A8F4
  c->r[5]=c->r[6]|c->r[6]; // 8016A8F8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016A8FC
  c->r[6]=c->r[7]|c->r[7]; // 8016A900
  c->r[7]=c->r[8]|c->r[8]; // 8016A904
  f_8016B308(c); return; // 8016A908
}

// GetNewSyncId__26CriSrVoiceRegManagerMasterFv
void f_8016A90C(Ctx* __restrict c) {
  trace_call(0x8016A90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016A90C
  c->r[0]=c->lr; // 8016A910
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016A914
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016A918
  c->r[31]=c->r[1]|c->r[1]; // 8016A91C
  c->r[28]=c->r[3]|c->r[3]; // 8016A920
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016A924
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8016A928
  c->ctr=c->r[12]; // 8016A92C
  if (true) { c->lr=0x8016A934u; dispatch(c,c->ctr); } // 8016A930
  c->r[5]=0u+0x802D0000u; // 8016A934
  c->r[7]=c->r[3]|c->r[3]; // 8016A938
  c->r[5]=c->r[5]+0x00000144u; // 8016A93C
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8016A940
  c->r[6]=c->r[5]+0x00000076u; // 8016A944
  c->r[3]=0u+0x0000001Cu; // 8016A948
  c->r[5]=0u+0x00000002u; // 8016A94C
  c->lr=0x8016A954u; f_8017BF5C(c); // 8016A950
  cmps(c,0,(int32_t)c->r[3],0); // 8016A954
  c->r[30]=c->r[3]|c->r[3]; // 8016A958
  if (crb(c,2)) { goto L_8016A974; } // 8016A95C
  c->r[0]=0u+0x00000000u; // 8016A960
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016A964
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016A968
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016A96C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016A970
L_8016A974:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016A974
  if (!crb(c,2)) { goto L_8016A99C; } // 8016A978
  c->r[4]=0u+0x802D0000u; // 8016A97C
  c->r[3]=0u+0x00000000u; // 8016A980
  c->r[4]=c->r[4]+0x00000144u; // 8016A984
  c->r[5]=0u+0xFFFFFFFDu; // 8016A988
  c->r[4]=c->r[4]+0x00000092u; // 8016A98C
  c->lr=0x8016A994u; f_8017968C(c); // 8016A990
  c->r[3]=0u+0x00000000u; // 8016A994
  goto L_8016AAD8; // 8016A998
L_8016A99C:;
  c->r[29]=R32(c->r[28]+0x00000018u); // 8016A99C
  c->r[3]=rotl(c->r[29],0)&0xFFFFFF00u; // 8016A9A0
  c->r[0]=c->r[3]+0x00010000u; // 8016A9A4
  cmpu(c,0,c->r[0],0x0000FF00u); // 8016A9A8
  if (!crb(c,2)) { goto L_8016A9BC; } // 8016A9AC
  c->r[0]=0u+0x00000100u; // 8016A9B0
  W32(c->r[28]+0x00000018u,c->r[0]); // 8016A9B4
  goto L_8016A9C4; // 8016A9B8
L_8016A9BC:;
  c->r[0]=c->r[29]+0x00000100u; // 8016A9BC
  W32(c->r[28]+0x00000018u,c->r[0]); // 8016A9C0
L_8016A9C4:;
  c->r[6]=R32(c->r[28]+0x00000014u); // 8016A9C4
  c->r[0]=0u+0x00000000u; // 8016A9C8
  c->r[27]=0u+0x00000000u; // 8016A9CC
  c->r[4]=0u+0x00000000u; // 8016A9D0
  c->r[5]=0u+0x00000000u; // 8016A9D4
  goto L_8016AA00; // 8016A9D8
L_8016A9DC:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8016A9DC
  c->r[3]=R32(c->r[3]+c->r[5]); // 8016A9E0
  c->r[3]=R32(c->r[3]+0x00000034u); // 8016A9E4
  cmpu(c,0,c->r[0],c->r[3]); // 8016A9E8
  if (!crb(c,0)) { goto L_8016A9F8; } // 8016A9EC
  c->r[0]=c->r[3]|c->r[3]; // 8016A9F0
  c->r[27]=c->r[4]|c->r[4]; // 8016A9F4
L_8016A9F8:;
  c->r[5]=c->r[5]+0x00000004u; // 8016A9F8
  c->r[4]=c->r[4]+0x00000001u; // 8016A9FC
L_8016AA00:;
  cmpu(c,0,c->r[4],c->r[6]); // 8016AA00
  if (crb(c,0)) { IRQCHK(c); goto L_8016A9DC; } // 8016AA04
  cmpu(c,0,c->r[27],0x000000FFu); // 8016AA08
  if (crb(c,0)) { goto L_8016AA28; } // 8016AA0C
  c->r[4]=0u+0x802D0000u; // 8016AA10
  c->r[3]=0u+0x00000000u; // 8016AA14
  c->r[4]=c->r[4]+0x00000144u; // 8016AA18
  c->r[5]=0u+0xFFFFFFFFu; // 8016AA1C
  c->r[4]=c->r[4]+0x0000009Du; // 8016AA20
  c->lr=0x8016AA28u; f_8017968C(c); // 8016AA24
L_8016AA28:;
  c->r[3]=0u+0x00000000u; // 8016AA28
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8016AA2C
  c->r[4]=rotl(c->r[27],0)&0x000000FFu; // 8016AA30
  c->r[0]=rotl(c->r[27],2)&0x000003FCu; // 8016AA34
  W32(c->r[30]+0x00000010u,c->r[3]); // 8016AA38
  c->r[29]=c->r[29]|c->r[4]; // 8016AA3C
  W32(c->r[30]+0x00000014u,c->r[29]); // 8016AA40
  W32(c->r[30]+0x00000018u,c->r[3]); // 8016AA44
  c->r[3]=R32(c->r[28]+0x00000010u); // 8016AA48
  c->r[27]=R32(c->r[3]+c->r[0]); // 8016AA4C
  c->r[28]=R32(c->r[27]+0x00000014u); // 8016AA50
  cmps(c,0,(int32_t)c->r[28],0); // 8016AA54
  if (crb(c,2)) { goto L_8016AA9C; } // 8016AA58
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016AA5C
  cmps(c,0,(int32_t)c->r[0],0); // 8016AA60
  if (!crb(c,2)) { goto L_8016AA74; } // 8016AA64
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016AA68
  cmps(c,0,(int32_t)c->r[0],0); // 8016AA6C
  if (crb(c,2)) { goto L_8016AA84; } // 8016AA70
L_8016AA74:;
  c->r[4]=0u+0x80330000u; // 8016AA74
  c->r[3]=0u+0x00000000u; // 8016AA78
  c->r[4]=c->r[4]+0x00000FECu; // 8016AA7C
  c->lr=0x8016AA84u; f_80179434(c); // 8016AA80
L_8016AA84:;
  W32(c->r[30]+0x00000000u,c->r[28]); // 8016AA84
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016AA88
  W32(c->r[30]+0x00000004u,c->r[0]); // 8016AA8C
  W32(c->r[28]+0x00000004u,c->r[30]); // 8016AA90
  W32(c->r[27]+0x00000014u,c->r[30]); // 8016AA94
  goto L_8016AAC0; // 8016AA98
L_8016AA9C:;
  W32(c->r[27]+0x00000014u,c->r[30]); // 8016AA9C
  c->r[0]=R32(c->r[27]+0x00000010u); // 8016AAA0
  cmps(c,0,(int32_t)c->r[0],0); // 8016AAA4
  if (crb(c,2)) { goto L_8016AABC; } // 8016AAA8
  c->r[4]=0u+0x80330000u; // 8016AAAC
  c->r[3]=0u+0x00000000u; // 8016AAB0
  c->r[4]=c->r[4]+0x00000FC4u; // 8016AAB4
  c->lr=0x8016AABCu; f_80179434(c); // 8016AAB8
L_8016AABC:;
  W32(c->r[27]+0x00000010u,c->r[30]); // 8016AABC
L_8016AAC0:;
  c->r[4]=R32(c->r[27]+0x00000018u); // 8016AAC0
  c->r[3]=c->r[29]|c->r[29]; // 8016AAC4
  c->r[0]=c->r[4]+0x00000001u; // 8016AAC8
  W32(c->r[27]+0x00000018u,c->r[0]); // 8016AACC
  c->r[0]=R32(c->r[27]+0x00000010u); // 8016AAD0
  W32(c->r[27]+0x0000001Cu,c->r[0]); // 8016AAD4
L_8016AAD8:;
  c->r[10]=c->r[31]|c->r[31]; // 8016AAD8
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016AADC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016AAE0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016AAE4
  c->r[1]=c->r[10]|c->r[10]; // 8016AAE8
  c->lr=c->r[0]; // 8016AAEC
  return; // 8016AAF0
}

// ActivateSync__26CriSrVoiceRegManagerMasterFUl
void f_8016AAF4(Ctx* __restrict c) {
  trace_call(0x8016AAF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016AAF4
  c->r[0]=c->lr; // 8016AAF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016AAFC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016AB00
  c->r[31]=c->r[1]|c->r[1]; // 8016AB04
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016AB08
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016AB0C
  c->r[29]=c->r[3]|c->r[3]; // 8016AB10
  W32(c->r[1]+0x00000020u,c->r[28]); // 8016AB14
  c->r[28]=c->r[4]|c->r[4]; // 8016AB18
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016AB1C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 8016AB20
  c->ctr=c->r[12]; // 8016AB24
  if (true) { c->lr=0x8016AB2Cu; dispatch(c,c->ctr); } // 8016AB28
  c->r[5]=0u+0x802D0000u; // 8016AB2C
  c->r[7]=c->r[3]|c->r[3]; // 8016AB30
  c->r[5]=c->r[5]+0x00000144u; // 8016AB34
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8016AB38
  c->r[6]=c->r[5]+0x00000076u; // 8016AB3C
  c->r[3]=0u+0x0000001Cu; // 8016AB40
  c->r[5]=0u+0x00000002u; // 8016AB44
  c->lr=0x8016AB4Cu; f_8017BF5C(c); // 8016AB48
  cmps(c,0,(int32_t)c->r[3],0); // 8016AB4C
  c->r[30]=c->r[3]|c->r[3]; // 8016AB50
  if (crb(c,2)) { goto L_8016AB6C; } // 8016AB54
  c->r[0]=0u+0x00000000u; // 8016AB58
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016AB5C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016AB60
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016AB64
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016AB68
L_8016AB6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016AB6C
  if (!crb(c,2)) { goto L_8016AB94; } // 8016AB70
  c->r[4]=0u+0x802D0000u; // 8016AB74
  c->r[3]=0u+0x00000000u; // 8016AB78
  c->r[4]=c->r[4]+0x00000144u; // 8016AB7C
  c->r[5]=0u+0xFFFFFFFDu; // 8016AB80
  c->r[4]=c->r[4]+0x000000B3u; // 8016AB84
  c->lr=0x8016AB8Cu; f_8017968C(c); // 8016AB88
  c->r[3]=0u+0x00000000u; // 8016AB8C
  goto L_8016AC40; // 8016AB90
L_8016AB94:;
  c->r[5]=0u+0x00000000u; // 8016AB94
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8016AB98
  c->r[4]=0u+0x00000002u; // 8016AB9C
  c->r[0]=rotl(c->r[28],2)&0x000003FCu; // 8016ABA0
  W32(c->r[3]+0x00000010u,c->r[4]); // 8016ABA4
  W32(c->r[3]+0x00000014u,c->r[28]); // 8016ABA8
  W32(c->r[3]+0x00000018u,c->r[5]); // 8016ABAC
  c->r[4]=R32(c->r[29]+0x00000010u); // 8016ABB0
  c->r[29]=R32(c->r[4]+c->r[0]); // 8016ABB4
  c->r[28]=R32(c->r[29]+0x00000014u); // 8016ABB8
  cmps(c,0,(int32_t)c->r[28],0); // 8016ABBC
  if (crb(c,2)) { goto L_8016AC04; } // 8016ABC0
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016ABC4
  cmps(c,0,(int32_t)c->r[0],0); // 8016ABC8
  if (!crb(c,2)) { goto L_8016ABDC; } // 8016ABCC
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016ABD0
  cmps(c,0,(int32_t)c->r[0],0); // 8016ABD4
  if (crb(c,2)) { goto L_8016ABEC; } // 8016ABD8
L_8016ABDC:;
  c->r[4]=0u+0x80330000u; // 8016ABDC
  c->r[3]=0u+0x00000000u; // 8016ABE0
  c->r[4]=c->r[4]+0x00000FECu; // 8016ABE4
  c->lr=0x8016ABECu; f_80179434(c); // 8016ABE8
L_8016ABEC:;
  W32(c->r[30]+0x00000000u,c->r[28]); // 8016ABEC
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016ABF0
  W32(c->r[30]+0x00000004u,c->r[0]); // 8016ABF4
  W32(c->r[28]+0x00000004u,c->r[30]); // 8016ABF8
  W32(c->r[29]+0x00000014u,c->r[30]); // 8016ABFC
  goto L_8016AC28; // 8016AC00
L_8016AC04:;
  W32(c->r[29]+0x00000014u,c->r[3]); // 8016AC04
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016AC08
  cmps(c,0,(int32_t)c->r[0],0); // 8016AC0C
  if (crb(c,2)) { goto L_8016AC24; } // 8016AC10
  c->r[4]=0u+0x80330000u; // 8016AC14
  c->r[3]=0u+0x00000000u; // 8016AC18
  c->r[4]=c->r[4]+0x00000FC4u; // 8016AC1C
  c->lr=0x8016AC24u; f_80179434(c); // 8016AC20
L_8016AC24:;
  W32(c->r[29]+0x00000010u,c->r[30]); // 8016AC24
L_8016AC28:;
  c->r[4]=R32(c->r[29]+0x00000018u); // 8016AC28
  c->r[3]=0u+0x00000001u; // 8016AC2C
  c->r[0]=c->r[4]+0x00000001u; // 8016AC30
  W32(c->r[29]+0x00000018u,c->r[0]); // 8016AC34
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016AC38
  W32(c->r[29]+0x0000001Cu,c->r[0]); // 8016AC3C
L_8016AC40:;
  c->r[10]=c->r[31]|c->r[31]; // 8016AC40
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8016AC44
  c->r[30]=R32(c->r[10]+0x00000028u); // 8016AC48
  c->r[29]=R32(c->r[10]+0x00000024u); // 8016AC4C
  c->r[28]=R32(c->r[10]+0x00000020u); // 8016AC50
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016AC54
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016AC58
  c->r[1]=c->r[10]|c->r[10]; // 8016AC5C
  c->lr=c->r[0]; // 8016AC60
  return; // 8016AC64
}

// GetAddressesArray__26CriSrVoiceRegManagerMasterFUl
void f_8016AC68(Ctx* __restrict c) {
  trace_call(0x8016AC68u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016AC68
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016AC6C
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016AC70
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016AC74
  return; // 8016AC78
}

// GetFirstCommandAddress__26CriSrVoiceRegManagerMasterFUl
void f_8016AC7C(Ctx* __restrict c) {
  trace_call(0x8016AC7Cu);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016AC7C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016AC80
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016AC84
  c->r[3]=c->r[3]+0x0000001Cu; // 8016AC88
  return; // 8016AC8C
}

// GetMostIdleEntity__26CriSrVoiceRegManagerMasterCFv
void f_8016AC90(Ctx* __restrict c) {
  trace_call(0x8016AC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016AC90
  c->r[0]=c->lr; // 8016AC94
  c->r[6]=0u+0x00000000u; // 8016AC98
  c->r[7]=0u+0x00000000u; // 8016AC9C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016ACA0
  c->r[5]=0u+0x00000000u; // 8016ACA4
  c->r[0]=R32(c->r[3]+0x00000014u); // 8016ACA8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016ACAC
  c->r[31]=0u+0x00000000u; // 8016ACB0
  c->ctr=c->r[0]; // 8016ACB4
  cmpu(c,0,c->r[0],0x00000000u); // 8016ACB8
  if (!crb(c,1)) { goto L_8016ACE8; } // 8016ACBC
L_8016ACC0:;
  c->r[4]=R32(c->r[3]+0x00000010u); // 8016ACC0
  c->r[4]=R32(c->r[4]+c->r[5]); // 8016ACC4
  c->r[0]=R32(c->r[4]+0x00000034u); // 8016ACC8
  cmpu(c,0,c->r[6],c->r[0]); // 8016ACCC
  if (!crb(c,0)) { goto L_8016ACDC; } // 8016ACD0
  c->r[6]=c->r[0]|c->r[0]; // 8016ACD4
  c->r[31]=c->r[7]|c->r[7]; // 8016ACD8
L_8016ACDC:;
  c->r[5]=c->r[5]+0x00000004u; // 8016ACDC
  c->r[7]=c->r[7]+0x00000001u; // 8016ACE0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8016ACC0; } // 8016ACE4
L_8016ACE8:;
  cmpu(c,0,c->r[31],0x000000FFu); // 8016ACE8
  if (crb(c,0)) { goto L_8016AD08; } // 8016ACEC
  c->r[4]=0u+0x802D0000u; // 8016ACF0
  c->r[3]=0u+0x00000000u; // 8016ACF4
  c->r[4]=c->r[4]+0x00000144u; // 8016ACF8
  c->r[5]=0u+0xFFFFFFFFu; // 8016ACFC
  c->r[4]=c->r[4]+0x0000009Du; // 8016AD00
  c->lr=0x8016AD08u; f_8017968C(c); // 8016AD04
L_8016AD08:;
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8016AD08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016AD0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016AD10
  c->lr=c->r[0]; // 8016AD14
  c->r[1]=c->r[1]+0x00000010u; // 8016AD18
  return; // 8016AD1C
}

// GetNumFreeVoiceRegs__26CriSrVoiceRegManagerMasterCFUl
void f_8016AD20(Ctx* __restrict c) {
  trace_call(0x8016AD20u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016AD20
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016AD24
  c->r[3]=R32(c->r[3]+c->r[0]); // 8016AD28
  c->r[3]=R32(c->r[3]+0x00000034u); // 8016AD2C
  return; // 8016AD30
}

// CreateCriSrVoiceRegManagerMasterEntity__26CriSrVoiceRegManagerMasterFP15_criheap_structUlUl
void f_8016AD34(Ctx* __restrict c) {
  trace_call(0x8016AD34u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016AD34
  c->r[0]=c->lr; // 8016AD38
  c->r[3]=0u+0x802D0000u; // 8016AD3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016AD40
  c->r[3]=c->r[3]+0x00000144u; // 8016AD44
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016AD48
  c->r[30]=c->r[3]+0x000000BEu; // 8016AD4C
  c->r[28]=c->r[6]|c->r[6]; // 8016AD50
  c->r[27]=c->r[5]|c->r[5]; // 8016AD54
  c->r[31]=c->r[1]|c->r[1]; // 8016AD58
  c->r[26]=c->r[4]|c->r[4]; // 8016AD5C
  c->r[5]=c->r[30]|c->r[30]; // 8016AD60
  c->r[3]=0u+0x00000048u; // 8016AD64
  c->r[6]=0u+0x00000008u; // 8016AD68
  c->lr=0x8016AD70u; f_8017BEDC(c); // 8016AD6C
  cmps(c,0,(int32_t)c->r[3],0); // 8016AD70
  c->r[29]=c->r[3]|c->r[3]; // 8016AD74
  if (crb(c,2)) { goto L_8016AE00; } // 8016AD78
  c->r[4]=0u+0x80330000u; // 8016AD7C
  c->r[0]=0u+0x00000000u; // 8016AD80
  c->r[4]=c->r[4]+0x000016E0u; // 8016AD84
  W32(c->r[3]+0x00000000u,c->r[4]); // 8016AD88
  W32(c->r[3]+0x00000004u,c->r[26]); // 8016AD8C
  W32(c->r[3]+0x00000008u,c->r[27]); // 8016AD90
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016AD94
  W32(c->r[3]+0x00000010u,c->r[0]); // 8016AD98
  W32(c->r[3]+0x00000014u,c->r[0]); // 8016AD9C
  W32(c->r[3]+0x00000018u,c->r[0]); // 8016ADA0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8016ADA4
  W32(c->r[3]+0x00000020u,c->r[0]); // 8016ADA8
  W32(c->r[3]+0x00000024u,c->r[0]); // 8016ADAC
  W32(c->r[3]+0x00000028u,c->r[0]); // 8016ADB0
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8016ADB4
  W32(c->r[3]+0x00000030u,c->r[0]); // 8016ADB8
  W32(c->r[3]+0x00000034u,c->r[0]); // 8016ADBC
  W32(c->r[3]+0x00000038u,c->r[0]); // 8016ADC0
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 8016ADC4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016ADC8
  W32(c->r[3]+0x00000040u,c->r[0]); // 8016ADCC
  c->lr=0x8016ADD4u; f_801480EC(c); // 8016ADD0
  W32(c->r[29]+0x00000044u,c->r[3]); // 8016ADD4
  goto L_8016AE00; // 8016ADD8
  c->r[3]=c->r[29]|c->r[29]; // 8016ADDC
  c->r[4]=c->r[26]|c->r[26]; // 8016ADE0
  c->r[5]=c->r[30]|c->r[30]; // 8016ADE4
  c->r[6]=0u+0x00000008u; // 8016ADE8
  c->lr=0x8016ADF0u; f_8017BFF8(c); // 8016ADEC
  c->r[3]=0u+0x00000000u; // 8016ADF0
  c->r[4]=0u+0x00000000u; // 8016ADF4
  c->r[5]=0u+0x00000000u; // 8016ADF8
  c->lr=0x8016AE00u; f_800AF804(c); // 8016ADFC
L_8016AE00:;
  cmps(c,0,(int32_t)c->r[29],0); // 8016AE00
  if (!crb(c,2)) { goto L_8016AE28; } // 8016AE04
  c->r[4]=0u+0x802D0000u; // 8016AE08
  c->r[3]=0u+0x00000000u; // 8016AE0C
  c->r[4]=c->r[4]+0x00000144u; // 8016AE10
  c->r[5]=0u+0xFFFFFFFDu; // 8016AE14
  c->r[4]=c->r[4]+0x000000DFu; // 8016AE18
  c->lr=0x8016AE20u; f_8017968C(c); // 8016AE1C
  c->r[29]=0u+0x00000000u; // 8016AE20
  goto L_8016AE64; // 8016AE24
L_8016AE28:;
  c->r[3]=c->r[29]|c->r[29]; // 8016AE28
  c->r[4]=c->r[28]|c->r[28]; // 8016AE2C
  c->lr=0x8016AE34u; f_8016AED0(c); // 8016AE30
  cmps(c,0,(int32_t)c->r[3],0); // 8016AE34
  if (!crb(c,2)) { goto L_8016AE64; } // 8016AE38
  cmps(c,0,(int32_t)c->r[29],0); // 8016AE3C
  if (crb(c,2)) { goto L_8016AE60; } // 8016AE40
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016AE44
  c->r[0]=0u+0x00000001u; // 8016AE48
  c->r[3]=c->r[29]|c->r[29]; // 8016AE4C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016AE50
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8016AE54
  c->ctr=c->r[12]; // 8016AE58
  if (true) { c->lr=0x8016AE60u; dispatch(c,c->ctr); } // 8016AE5C
L_8016AE60:;
  c->r[29]=0u+0x00000000u; // 8016AE60
L_8016AE64:;
  c->r[10]=c->r[31]|c->r[31]; // 8016AE64
  c->r[3]=c->r[29]|c->r[29]; // 8016AE68
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016AE6C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016AE70
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016AE74
  c->r[1]=c->r[10]|c->r[10]; // 8016AE78
  c->lr=c->r[0]; // 8016AE7C
  return; // 8016AE80
}

// GetTransferAlignment__26CriSrVoiceRegManagerMasterCFv
void f_8016AE84(Ctx* __restrict c) {
  trace_call(0x8016AE84u);
  c->r[3]=0u+0x00000008u; // 8016AE84
  return; // 8016AE88
}

// __dt__32CriSrVoiceRegManagerMasterEntityFv
void f_8016AE8C(Ctx* __restrict c) {
  trace_call(0x8016AE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016AE8C
  c->r[0]=c->lr; // 8016AE90
  cmps(c,0,(int32_t)c->r[3],0); // 8016AE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016AE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016AE9C
  c->r[31]=c->r[3]|c->r[3]; // 8016AEA0
  if (crb(c,2)) { goto L_8016AEB8; } // 8016AEA4
  cmps(c,0,(int32_t)c->r[4],0); // 8016AEA8
  if (!crb(c,1)) { goto L_8016AEB8; } // 8016AEAC
  c->r[4]=0u+0x00000048u; // 8016AEB0
  c->lr=0x8016AEB8u; f_8017BFE8(c); // 8016AEB4
L_8016AEB8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016AEB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016AEBC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016AEC0
  c->lr=c->r[0]; // 8016AEC4
  c->r[1]=c->r[1]+0x00000010u; // 8016AEC8
  return; // 8016AECC
}

// Initialize__32CriSrVoiceRegManagerMasterEntityFUl
void f_8016AED0(Ctx* __restrict c) {
  trace_call(0x8016AED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016AED0
  c->r[0]=c->lr; // 8016AED4
  c->r[6]=0u+0x00000008u; // 8016AED8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016AEDC
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016AEE0
  c->r[28]=0u+0x802D0000u; // 8016AEE4
  c->r[28]=c->r[28]+0x00000144u; // 8016AEE8
  c->r[30]=c->r[3]|c->r[3]; // 8016AEEC
  c->r[31]=c->r[4]|c->r[4]; // 8016AEF0
  c->r[5]=c->r[28]+0x000000EAu; // 8016AEF4
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016AEF8
  c->r[3]=R32(c->r[3]+0x00000004u); // 8016AEFC
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016AF00
  c->lr=0x8016AF08u; f_8017C100(c); // 8016AF04
  cmps(c,0,(int32_t)c->r[3],0); // 8016AF08
  W32(c->r[30]+0x00000020u,c->r[3]); // 8016AF0C
  if (!crb(c,2)) { goto L_8016AF34; } // 8016AF10
  c->r[4]=c->r[28]+0x000000FFu; // 8016AF14
  c->r[3]=0u+0x00000000u; // 8016AF18
  c->r[5]=0u+0xFFFFFFFDu; // 8016AF1C
  c->lr=0x8016AF24u; f_8017968C(c); // 8016AF20
  c->r[3]=c->r[30]|c->r[30]; // 8016AF24
  c->lr=0x8016AF2Cu; f_8016B178(c); // 8016AF28
  c->r[3]=0u+0x00000000u; // 8016AF2C
  goto L_8016B164; // 8016AF30
L_8016AF34:;
  c->r[6]=0u+0x00000000u; // 8016AF34
  c->r[5]=0u+0x00000000u; // 8016AF38
  c->r[0]=0u+0x00000000u; // 8016AF3C
  goto L_8016AF54; // 8016AF40
L_8016AF44:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8016AF44
  c->r[6]=c->r[6]+0x00000001u; // 8016AF48
  W32(c->r[3]+c->r[5],c->r[0]); // 8016AF4C
  c->r[5]=c->r[5]+0x00000004u; // 8016AF50
L_8016AF54:;
  c->r[4]=R32(c->r[30]+0x00000008u); // 8016AF54
  cmpu(c,0,c->r[6],c->r[4]); // 8016AF58
  if (crb(c,0)) { IRQCHK(c); goto L_8016AF44; } // 8016AF5C
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016AF60
  c->r[3]=c->r[30]|c->r[30]; // 8016AF64
  c->r[12]=R32(c->r[12]+0x00000018u); // 8016AF68
  c->ctr=c->r[12]; // 8016AF6C
  if (true) { c->lr=0x8016AF74u; dispatch(c,c->ctr); } // 8016AF70
  c->r[28]=0u+0x802D0000u; // 8016AF74
  c->r[25]=c->r[3]|c->r[3]; // 8016AF78
  c->r[28]=c->r[28]+0x00000144u; // 8016AF7C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016AF80
  c->r[4]=c->r[25]|c->r[25]; // 8016AF84
  c->r[6]=0u+0x00000008u; // 8016AF88
  c->r[5]=c->r[28]+0x00000109u; // 8016AF8C
  c->lr=0x8016AF94u; f_8017C100(c); // 8016AF90
  cmps(c,0,(int32_t)c->r[3],0); // 8016AF94
  W32(c->r[30]+0x00000024u,c->r[3]); // 8016AF98
  if (!crb(c,2)) { goto L_8016AFC0; } // 8016AF9C
  c->r[4]=c->r[28]+0x00000113u; // 8016AFA0
  c->r[3]=0u+0x00000000u; // 8016AFA4
  c->r[5]=0u+0xFFFFFFFDu; // 8016AFA8
  c->lr=0x8016AFB0u; f_8017968C(c); // 8016AFAC
  c->r[3]=c->r[30]|c->r[30]; // 8016AFB0
  c->lr=0x8016AFB8u; f_8016B178(c); // 8016AFB4
  c->r[3]=0u+0x00000000u; // 8016AFB8
  goto L_8016B164; // 8016AFBC
L_8016AFC0:;
  c->r[4]=c->r[25]|c->r[25]; // 8016AFC0
  c->lr=0x8016AFC8u; f_8017C2EC(c); // 8016AFC4
  cmps(c,0,(int32_t)c->r[3],0); // 8016AFC8
  W32(c->r[30]+0x00000028u,c->r[3]); // 8016AFCC
  if (!crb(c,2)) { goto L_8016AFE4; } // 8016AFD0
  c->r[3]=c->r[30]|c->r[30]; // 8016AFD4
  c->lr=0x8016AFDCu; f_8016B178(c); // 8016AFD8
  c->r[3]=0u+0x00000000u; // 8016AFDC
  goto L_8016B164; // 8016AFE0
L_8016AFE4:;
  c->r[24]=0u+0x00000000u; // 8016AFE4
  c->r[27]=0u+0x00000000u; // 8016AFE8
  c->r[28]=0u+0x80330000u; // 8016AFEC
  c->r[29]=0u+0x80330000u; // 8016AFF0
  goto L_8016B0C0; // 8016AFF4
L_8016AFF8:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016AFF8
  c->r[3]=c->r[30]|c->r[30]; // 8016AFFC
  c->r[5]=c->r[31]|c->r[31]; // 8016B000
  c->r[4]=R32(c->r[30]+0x00000028u); // 8016B004
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8016B008
  c->ctr=c->r[12]; // 8016B00C
  if (true) { c->lr=0x8016B014u; dispatch(c,c->ctr); } // 8016B010
  c->r[4]=R32(c->r[30]+0x00000020u); // 8016B014
  W32(c->r[4]+c->r[27],c->r[3]); // 8016B018
  c->r[3]=R32(c->r[30]+0x00000020u); // 8016B01C
  c->r[26]=R32(c->r[3]+c->r[27]); // 8016B020
  cmps(c,0,(int32_t)c->r[26],0); // 8016B024
  if (!crb(c,2)) { goto L_8016B03C; } // 8016B028
  c->r[3]=c->r[30]|c->r[30]; // 8016B02C
  c->lr=0x8016B034u; f_8016B178(c); // 8016B030
  c->r[3]=0u+0x00000000u; // 8016B034
  goto L_8016B164; // 8016B038
L_8016B03C:;
  if (crb(c,2)) { goto L_8016B044; } // 8016B03C
  c->r[26]=c->r[26]+0x00000024u; // 8016B040
L_8016B044:;
  c->r[25]=R32(c->r[30]+0x0000002Cu); // 8016B044
  cmps(c,0,(int32_t)c->r[25],0); // 8016B048
  if (crb(c,2)) { goto L_8016B08C; } // 8016B04C
  c->r[0]=R32(c->r[26]+0x00000000u); // 8016B050
  cmps(c,0,(int32_t)c->r[0],0); // 8016B054
  if (!crb(c,2)) { goto L_8016B068; } // 8016B058
  c->r[0]=R32(c->r[26]+0x00000004u); // 8016B05C
  cmps(c,0,(int32_t)c->r[0],0); // 8016B060
  if (crb(c,2)) { goto L_8016B074; } // 8016B064
L_8016B068:;
  c->r[4]=c->r[28]+0x000008F4u; // 8016B068
  c->r[3]=0u+0x00000000u; // 8016B06C
  c->lr=0x8016B074u; f_80179434(c); // 8016B070
L_8016B074:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 8016B074
  W32(c->r[26]+0x00000000u,c->r[0]); // 8016B078
  W32(c->r[26]+0x00000004u,c->r[25]); // 8016B07C
  W32(c->r[25]+0x00000000u,c->r[26]); // 8016B080
  W32(c->r[30]+0x0000002Cu,c->r[26]); // 8016B084
  goto L_8016B0AC; // 8016B088
L_8016B08C:;
  c->r[0]=R32(c->r[30]+0x00000030u); // 8016B08C
  W32(c->r[30]+0x0000002Cu,c->r[26]); // 8016B090
  cmps(c,0,(int32_t)c->r[0],0); // 8016B094
  if (crb(c,2)) { goto L_8016B0A8; } // 8016B098
  c->r[4]=c->r[29]+0x000008CCu; // 8016B09C
  c->r[3]=0u+0x00000000u; // 8016B0A0
  c->lr=0x8016B0A8u; f_80179434(c); // 8016B0A4
L_8016B0A8:;
  W32(c->r[30]+0x00000030u,c->r[26]); // 8016B0A8
L_8016B0AC:;
  c->r[3]=R32(c->r[30]+0x00000034u); // 8016B0AC
  c->r[27]=c->r[27]+0x00000004u; // 8016B0B0
  c->r[24]=c->r[24]+0x00000001u; // 8016B0B4
  c->r[0]=c->r[3]+0x00000001u; // 8016B0B8
  W32(c->r[30]+0x00000034u,c->r[0]); // 8016B0BC
L_8016B0C0:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8016B0C0
  cmpu(c,0,c->r[24],c->r[0]); // 8016B0C4
  if (crb(c,0)) { IRQCHK(c); goto L_8016AFF8; } // 8016B0C8
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016B0CC
  c->r[3]=c->r[30]|c->r[30]; // 8016B0D0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016B0D4
  c->ctr=c->r[12]; // 8016B0D8
  if (true) { c->lr=0x8016B0E0u; dispatch(c,c->ctr); } // 8016B0DC
  c->r[0]=R32(c->r[30]+0x00000008u); // 8016B0E0
  c->r[31]=0u+0x802D0000u; // 8016B0E4
  c->r[6]=c->r[3]|c->r[3]; // 8016B0E8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016B0EC
  c->r[31]=c->r[31]+0x00000144u; // 8016B0F0
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8016B0F4
  c->r[5]=c->r[31]+0x00000120u; // 8016B0F8
  c->lr=0x8016B100u; f_8017C100(c); // 8016B0FC
  cmps(c,0,(int32_t)c->r[3],0); // 8016B100
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8016B104
  if (!crb(c,2)) { goto L_8016B124; } // 8016B108
  c->r[4]=c->r[31]+0x0000012Au; // 8016B10C
  c->r[3]=0u+0x00000000u; // 8016B110
  c->r[5]=0u+0xFFFFFFFDu; // 8016B114
  c->lr=0x8016B11Cu; f_8017968C(c); // 8016B118
  c->r[3]=0u+0x00000000u; // 8016B11C
  goto L_8016B164; // 8016B120
L_8016B124:;
  c->r[24]=0u+0x00000000u; // 8016B124
  c->r[28]=0u+0x00000000u; // 8016B128
  c->r[29]=0u+0x00000000u; // 8016B12C
  goto L_8016B154; // 8016B130
L_8016B134:;
  c->r[3]=R32(c->r[30]+0x00000020u); // 8016B134
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8016B138
  c->r[3]=R32(c->r[3]+c->r[29]); // 8016B13C
  c->r[4]=c->r[0]+c->r[28]; // 8016B140
  c->lr=0x8016B148u; f_8016974C(c); // 8016B144
  c->r[28]=c->r[28]+0x00000010u; // 8016B148
  c->r[29]=c->r[29]+0x00000004u; // 8016B14C
  c->r[24]=c->r[24]+0x00000001u; // 8016B150
L_8016B154:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8016B154
  cmpu(c,0,c->r[24],c->r[0]); // 8016B158
  if (crb(c,0)) { IRQCHK(c); goto L_8016B134; } // 8016B15C
  c->r[3]=0u+0x00000001u; // 8016B160
L_8016B164:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016B164
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016B168
  c->lr=c->r[0]; // 8016B16C
  c->r[1]=c->r[1]+0x00000030u; // 8016B170
  return; // 8016B174
}

// Finalize__32CriSrVoiceRegManagerMasterEntityFv
void f_8016B178(Ctx* __restrict c) {
  trace_call(0x8016B178u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B178
  c->r[0]=c->lr; // 8016B17C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016B180
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016B184
  c->r[31]=c->r[3]|c->r[3]; // 8016B188
  c->r[29]=0u+0x80330000u; // 8016B18C
  c->r[30]=0u+0x00000000u; // 8016B190
  c->r[28]=R32(c->r[3]+0x00000010u); // 8016B194
L_8016B198:;
  cmps(c,0,(int32_t)c->r[28],0); // 8016B198
  if (crb(c,2)) { goto L_8016B22C; } // 8016B19C
  c->r[27]=R32(c->r[28]+0x00000004u); // 8016B1A0
  if (!crb(c,2)) { goto L_8016B1B8; } // 8016B1A4
  c->r[4]=c->r[29]+0x00000C2Cu; // 8016B1A8
  c->r[3]=0u+0x00000000u; // 8016B1AC
  c->lr=0x8016B1B4u; f_80179434(c); // 8016B1B0
  goto L_8016B218; // 8016B1B4
L_8016B1B8:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8016B1B8
  cmpu(c,0,c->r[0],c->r[28]); // 8016B1BC
  if (!crb(c,2)) { goto L_8016B1C8; } // 8016B1C0
  W32(c->r[31]+0x00000010u,c->r[27]); // 8016B1C4
L_8016B1C8:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016B1C8
  cmpu(c,0,c->r[0],c->r[28]); // 8016B1CC
  if (!crb(c,2)) { goto L_8016B1DC; } // 8016B1D0
  c->r[0]=R32(c->r[28]+0x00000000u); // 8016B1D4
  W32(c->r[31]+0x00000014u,c->r[0]); // 8016B1D8
L_8016B1DC:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 8016B1DC
  cmps(c,0,(int32_t)c->r[3],0); // 8016B1E0
  if (crb(c,2)) { goto L_8016B1F0; } // 8016B1E4
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016B1E8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016B1EC
L_8016B1F0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 8016B1F0
  cmps(c,0,(int32_t)c->r[3],0); // 8016B1F4
  if (crb(c,2)) { goto L_8016B204; } // 8016B1F8
  c->r[0]=R32(c->r[28]+0x00000000u); // 8016B1FC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016B200
L_8016B204:;
  W32(c->r[28]+0x00000004u,c->r[30]); // 8016B204
  W32(c->r[28]+0x00000000u,c->r[30]); // 8016B208
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016B20C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016B210
  W32(c->r[31]+0x00000018u,c->r[0]); // 8016B214
L_8016B218:;
  c->r[3]=c->r[28]|c->r[28]; // 8016B218
  c->r[4]=0u+0x0000001Cu; // 8016B21C
  c->lr=0x8016B224u; f_8017BFE8(c); // 8016B220
  c->r[28]=c->r[27]|c->r[27]; // 8016B224
  IRQCHK(c); goto L_8016B198; // 8016B228
L_8016B22C:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8016B22C
  cmps(c,0,(int32_t)c->r[4],0); // 8016B230
  if (crb(c,2)) { goto L_8016B248; } // 8016B234
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016B238
  c->lr=0x8016B240u; f_8017C228(c); // 8016B23C
  c->r[0]=0u+0x00000000u; // 8016B240
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016B244
L_8016B248:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 8016B248
  cmps(c,0,(int32_t)c->r[0],0); // 8016B24C
  if (crb(c,2)) { goto L_8016B2A4; } // 8016B250
  c->r[27]=0u+0x00000000u; // 8016B254
  c->r[29]=0u+0x00000000u; // 8016B258
  c->r[30]=0u+0x00000000u; // 8016B25C
  goto L_8016B298; // 8016B260
L_8016B264:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 8016B264
  c->r[4]=R32(c->r[3]+c->r[29]); // 8016B268
  cmps(c,0,(int32_t)c->r[4],0); // 8016B26C
  if (crb(c,2)) { goto L_8016B290; } // 8016B270
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016B274
  c->r[3]=c->r[31]|c->r[31]; // 8016B278
  c->r[12]=R32(c->r[12]+0x00000010u); // 8016B27C
  c->ctr=c->r[12]; // 8016B280
  if (true) { c->lr=0x8016B288u; dispatch(c,c->ctr); } // 8016B284
  c->r[3]=R32(c->r[31]+0x00000020u); // 8016B288
  W32(c->r[3]+c->r[29],c->r[30]); // 8016B28C
L_8016B290:;
  c->r[29]=c->r[29]+0x00000004u; // 8016B290
  c->r[27]=c->r[27]+0x00000001u; // 8016B294
L_8016B298:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8016B298
  cmpu(c,0,c->r[27],c->r[0]); // 8016B29C
  if (crb(c,0)) { IRQCHK(c); goto L_8016B264; } // 8016B2A0
L_8016B2A4:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8016B2A4
  cmps(c,0,(int32_t)c->r[3],0); // 8016B2A8
  if (crb(c,2)) { goto L_8016B2BC; } // 8016B2AC
  c->lr=0x8016B2B4u; f_8017C424(c); // 8016B2B0
  c->r[0]=0u+0x00000000u; // 8016B2B4
  W32(c->r[31]+0x00000028u,c->r[0]); // 8016B2B8
L_8016B2BC:;
  c->r[4]=R32(c->r[31]+0x00000024u); // 8016B2BC
  cmps(c,0,(int32_t)c->r[4],0); // 8016B2C0
  if (crb(c,2)) { goto L_8016B2D8; } // 8016B2C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016B2C8
  c->lr=0x8016B2D0u; f_8017C228(c); // 8016B2CC
  c->r[0]=0u+0x00000000u; // 8016B2D0
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016B2D4
L_8016B2D8:;
  c->r[4]=R32(c->r[31]+0x00000020u); // 8016B2D8
  cmps(c,0,(int32_t)c->r[4],0); // 8016B2DC
  if (crb(c,2)) { goto L_8016B2F4; } // 8016B2E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016B2E4
  c->lr=0x8016B2ECu; f_8017C228(c); // 8016B2E8
  c->r[0]=0u+0x00000000u; // 8016B2EC
  W32(c->r[31]+0x00000020u,c->r[0]); // 8016B2F0
L_8016B2F4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016B2F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016B2F8
  c->lr=c->r[0]; // 8016B2FC
  c->r[1]=c->r[1]+0x00000020u; // 8016B300
  return; // 8016B304
}

// FindLowPriorityReg__32CriSrVoiceRegManagerMasterEntityFRCQ210CriSrVoice15ConfigParameterUlQ217CriAuSoundElement6FormatPCc
void f_8016B308(Ctx* __restrict c) {
  trace_call(0x8016B308u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B308
  c->r[0]=c->lr; // 8016B30C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016B310
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016B314
  c->r[31]=0u+0x00000000u; // 8016B318
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016B31C
  c->r[30]=c->r[3]|c->r[3]; // 8016B320
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016B324
  W32(c->r[1]+0x00000020u,c->r[28]); // 8016B328
  c->r[6]=R32(c->r[3]+0x00000038u); // 8016B32C
  cmps(c,0,(int32_t)c->r[6],0); // 8016B330
  if (crb(c,2)) { goto L_8016B33C; } // 8016B334
  c->r[6]=c->r[6]+0xFFFFFFDCu; // 8016B338
L_8016B33C:;
  c->r[8]=0u+0x00000000u; // 8016B33C
L_8016B340:;
  cmps(c,0,(int32_t)c->r[6],0); // 8016B340
  if (crb(c,2)) { goto L_8016B3AC; } // 8016B344
  c->r[5]=R32(c->r[6]+0x00000034u); // 8016B348
  c->r[0]=R32(c->r[4]+0x0000001Cu); // 8016B34C
  c->r[5]=R32(c->r[5]+0x0000003Cu); // 8016B350
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8016B354
  if (!crb(c,2)) { goto L_8016B398; } // 8016B358
  cmps(c,0,(int32_t)c->r[8],0); // 8016B35C
  if (!crb(c,2)) { goto L_8016B380; } // 8016B360
  c->r[5]=R32(c->r[4]+0x00000010u); // 8016B364
  c->r[0]=R32(c->r[6]+0x00000038u); // 8016B368
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8016B36C
  if (!crb(c,2)) { goto L_8016B380; } // 8016B370
  c->r[31]=c->r[6]|c->r[6]; // 8016B374
  c->r[8]=0u+0x00000001u; // 8016B378
  goto L_8016B398; // 8016B37C
L_8016B380:;
  c->r[5]=R32(c->r[6]+0x00000038u); // 8016B380
  c->r[0]=R32(c->r[4]+0x00000010u); // 8016B384
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8016B388
  if (!crb(c,0)) { goto L_8016B398; } // 8016B38C
  c->r[31]=c->r[6]|c->r[6]; // 8016B390
  c->r[8]=0u+0x00000001u; // 8016B394
L_8016B398:;
  c->r[6]=R32(c->r[6]+0x00000028u); // 8016B398
  cmps(c,0,(int32_t)c->r[6],0); // 8016B39C
  if (crb(c,2)) { IRQCHK(c); goto L_8016B340; } // 8016B3A0
  c->r[6]=c->r[6]+0xFFFFFFDCu; // 8016B3A4
  IRQCHK(c); goto L_8016B340; // 8016B3A8
L_8016B3AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016B3AC
  if (!crb(c,2)) { goto L_8016B3BC; } // 8016B3B0
  c->r[3]=0u+0x00000000u; // 8016B3B4
  goto L_8016B5A0; // 8016B3B8
L_8016B3BC:;
  c->r[5]=R32(c->r[3]+0x00000044u); // 8016B3BC
  c->r[8]=R32(c->r[4]+0x00000010u); // 8016B3C0
  c->r[4]=R32(c->r[5]+0x00000000u); // 8016B3C4
  c->r[9]=R32(c->r[31]+0x00000038u); // 8016B3C8
  c->r[6]=sraw(c,c->r[8],31); // 8016B3CC
  c->r[0]=0u-c->r[4]; // 8016B3D0
  c->r[0]=c->r[0]|c->r[4]; // 8016B3D4
  c->r[5]=rotl(c->r[9],1)&0x00000001u; // 8016B3D8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8016B3DC
  c->r[4]=addc(c,~c->r[9],c->r[8],1); // 8016B3E0
  cmps(c,0,(int32_t)c->r[0],1); // 8016B3E4
  c->r[29]=addc(c,c->r[6],c->r[5],c->xer_ca); // 8016B3E8
  if (!crb(c,2)) { goto L_8016B420; } // 8016B3EC
  cmps(c,0,(int32_t)c->r[29],1); // 8016B3F0
  c->r[0]=0u+0x00000001u; // 8016B3F4
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016B3F8
  W32(c->r[1]+0x0000000Cu,c->r[7]); // 8016B3FC
  if (!crb(c,2)) { goto L_8016B410; } // 8016B400
  c->r[0]=R32(c->r[31]+0x00000044u); // 8016B404
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016B408
  goto L_8016B414; // 8016B40C
L_8016B410:;
  W32(c->r[1]+0x00000010u,c->r[7]); // 8016B410
L_8016B414:;
  c->r[3]=R32(c->r[3]+0x00000044u); // 8016B414
  c->r[4]=c->r[1]+0x00000008u; // 8016B418
  c->lr=0x8016B420u; f_80148188(c); // 8016B41C
L_8016B420:;
  cmps(c,0,(int32_t)c->r[29],1); // 8016B420
  if (!crb(c,2)) { goto L_8016B59C; } // 8016B424
  c->r[3]=R32(c->r[31]+0x00000034u); // 8016B428
  c->lr=0x8016B430u; f_80168508(c); // 8016B42C
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016B430
  c->r[3]=c->r[31]|c->r[31]; // 8016B434
  c->r[29]=R32(c->r[4]+0x00000000u); // 8016B438
  c->lr=0x8016B440u; f_80169A84(c); // 8016B43C
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016B440
  W32(c->r[3]+0x00000000u,c->r[29]); // 8016B444
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016B448
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016B44C
  cmps(c,0,(int32_t)c->r[0],1); // 8016B450
  if (crb(c,2)) { goto L_8016B46C; } // 8016B454
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016B458
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016B45C
  c->r[0]=c->r[0]|0x00000080u; // 8016B460
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016B464
  goto L_8016B474; // 8016B468
L_8016B46C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016B46C
  c->lr=0x8016B474u; f_80169A84(c); // 8016B470
L_8016B474:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016B474
  c->r[3]=c->r[31]|c->r[31]; // 8016B478
  if (crb(c,2)) { goto L_8016B484; } // 8016B47C
  c->r[3]=c->r[31]+0x00000024u; // 8016B480
L_8016B484:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016B484
  if (!crb(c,2)) { goto L_8016B4A0; } // 8016B488
  c->r[4]=0u+0x80330000u; // 8016B48C
  c->r[3]=0u+0x00000000u; // 8016B490
  c->r[4]=c->r[4]+0x00000C2Cu; // 8016B494
  c->lr=0x8016B49Cu; f_80179434(c); // 8016B498
  goto L_8016B508; // 8016B49C
L_8016B4A0:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 8016B4A0
  cmpu(c,0,c->r[0],c->r[3]); // 8016B4A4
  if (!crb(c,2)) { goto L_8016B4B4; } // 8016B4A8
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016B4AC
  W32(c->r[30]+0x00000038u,c->r[0]); // 8016B4B0
L_8016B4B4:;
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8016B4B4
  cmpu(c,0,c->r[0],c->r[3]); // 8016B4B8
  if (!crb(c,2)) { goto L_8016B4C8; } // 8016B4BC
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016B4C0
  W32(c->r[30]+0x0000003Cu,c->r[0]); // 8016B4C4
L_8016B4C8:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 8016B4C8
  cmps(c,0,(int32_t)c->r[4],0); // 8016B4CC
  if (crb(c,2)) { goto L_8016B4DC; } // 8016B4D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016B4D4
  W32(c->r[4]+0x00000004u,c->r[0]); // 8016B4D8
L_8016B4DC:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016B4DC
  cmps(c,0,(int32_t)c->r[4],0); // 8016B4E0
  if (crb(c,2)) { goto L_8016B4F0; } // 8016B4E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016B4E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 8016B4EC
L_8016B4F0:;
  c->r[0]=0u+0x00000000u; // 8016B4F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016B4F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016B4F8
  c->r[3]=R32(c->r[30]+0x00000040u); // 8016B4FC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016B500
  W32(c->r[30]+0x00000040u,c->r[0]); // 8016B504
L_8016B508:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016B508
  c->r[29]=c->r[31]|c->r[31]; // 8016B50C
  if (crb(c,2)) { goto L_8016B518; } // 8016B510
  c->r[29]=c->r[31]+0x00000024u; // 8016B514
L_8016B518:;
  c->r[28]=R32(c->r[30]+0x0000003Cu); // 8016B518
  cmps(c,0,(int32_t)c->r[28],0); // 8016B51C
  if (crb(c,2)) { goto L_8016B564; } // 8016B520
  c->r[0]=R32(c->r[29]+0x00000000u); // 8016B524
  cmps(c,0,(int32_t)c->r[0],0); // 8016B528
  if (!crb(c,2)) { goto L_8016B53C; } // 8016B52C
  c->r[0]=R32(c->r[29]+0x00000004u); // 8016B530
  cmps(c,0,(int32_t)c->r[0],0); // 8016B534
  if (crb(c,2)) { goto L_8016B54C; } // 8016B538
L_8016B53C:;
  c->r[4]=0u+0x80330000u; // 8016B53C
  c->r[3]=0u+0x00000000u; // 8016B540
  c->r[4]=c->r[4]+0x00000FECu; // 8016B544
  c->lr=0x8016B54Cu; f_80179434(c); // 8016B548
L_8016B54C:;
  W32(c->r[29]+0x00000000u,c->r[28]); // 8016B54C
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016B550
  W32(c->r[29]+0x00000004u,c->r[0]); // 8016B554
  W32(c->r[28]+0x00000004u,c->r[29]); // 8016B558
  W32(c->r[30]+0x0000003Cu,c->r[29]); // 8016B55C
  goto L_8016B588; // 8016B560
L_8016B564:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 8016B564
  W32(c->r[30]+0x0000003Cu,c->r[29]); // 8016B568
  cmps(c,0,(int32_t)c->r[0],0); // 8016B56C
  if (crb(c,2)) { goto L_8016B584; } // 8016B570
  c->r[4]=0u+0x80330000u; // 8016B574
  c->r[3]=0u+0x00000000u; // 8016B578
  c->r[4]=c->r[4]+0x00000FC4u; // 8016B57C
  c->lr=0x8016B584u; f_80179434(c); // 8016B580
L_8016B584:;
  W32(c->r[30]+0x00000038u,c->r[29]); // 8016B584
L_8016B588:;
  c->r[4]=R32(c->r[30]+0x00000040u); // 8016B588
  c->r[3]=c->r[31]|c->r[31]; // 8016B58C
  c->r[0]=c->r[4]+0x00000001u; // 8016B590
  W32(c->r[30]+0x00000040u,c->r[0]); // 8016B594
  goto L_8016B5A0; // 8016B598
L_8016B59C:;
  c->r[3]=0u+0x00000000u; // 8016B59C
L_8016B5A0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016B5A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016B5A4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8016B5A8
  c->r[29]=R32(c->r[1]+0x00000024u); // 8016B5AC
  c->r[28]=R32(c->r[1]+0x00000020u); // 8016B5B0
  c->lr=c->r[0]; // 8016B5B4
  c->r[1]=c->r[1]+0x00000030u; // 8016B5B8
  return; // 8016B5BC
}

// CreateSrVoiceRegMaster__32CriSrVoiceRegManagerMasterEntityFP15_criheap_structUl
void f_8016B5C0(Ctx* __restrict c) {
  trace_call(0x8016B5C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B5C0
  c->r[0]=c->lr; // 8016B5C4
  c->r[3]=0u+0x00000050u; // 8016B5C8
  c->r[6]=0u+0x00000004u; // 8016B5CC
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016B5D0
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016B5D4
  c->r[30]=0u+0x802D0000u; // 8016B5D8
  c->r[30]=c->r[30]+0x00000144u; // 8016B5DC
  c->r[28]=c->r[5]|c->r[5]; // 8016B5E0
  c->r[31]=c->r[1]|c->r[1]; // 8016B5E4
  c->r[27]=c->r[4]|c->r[4]; // 8016B5E8
  c->r[5]=c->r[30]|c->r[30]; // 8016B5EC
  c->lr=0x8016B5F4u; f_8017BEDC(c); // 8016B5F0
  cmps(c,0,(int32_t)c->r[3],0); // 8016B5F4
  c->r[29]=c->r[3]|c->r[3]; // 8016B5F8
  if (crb(c,2)) { goto L_8016B674; } // 8016B5FC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016B600
  c->r[4]=c->r[27]|c->r[27]; // 8016B604
  c->r[5]=0u+0x00000001u; // 8016B608
  c->lr=0x8016B610u; f_801694F0(c); // 8016B60C
  c->r[0]=0u+0x00000000u; // 8016B610
  W32(c->r[29]+0x00000024u,c->r[0]); // 8016B614
  c->r[3]=0u+0x80330000u; // 8016B618
  W32(c->r[29]+0x00000028u,c->r[0]); // 8016B61C
  c->r[3]=c->r[3]+0x00001744u; // 8016B620
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8016B624
  W32(c->r[29]+0x00000000u,c->r[3]); // 8016B628
  W32(c->r[29]+0x00000030u,c->r[0]); // 8016B62C
  W32(c->r[29]+0x00000034u,c->r[0]); // 8016B630
  W32(c->r[29]+0x00000038u,c->r[0]); // 8016B634
  W32(c->r[29]+0x0000003Cu,c->r[0]); // 8016B638
  W32(c->r[29]+0x00000040u,c->r[0]); // 8016B63C
  W32(c->r[29]+0x00000044u,c->r[0]); // 8016B640
  W32(c->r[29]+0x00000048u,c->r[0]); // 8016B644
  W32(c->r[29]+0x0000004Cu,c->r[28]); // 8016B648
  goto L_8016B674; // 8016B64C
  c->r[3]=c->r[29]|c->r[29]; // 8016B650
  c->r[4]=c->r[27]|c->r[27]; // 8016B654
  c->r[5]=c->r[30]|c->r[30]; // 8016B658
  c->r[6]=0u+0x00000004u; // 8016B65C
  c->lr=0x8016B664u; f_8017BFF8(c); // 8016B660
  c->r[3]=0u+0x00000000u; // 8016B664
  c->r[4]=0u+0x00000000u; // 8016B668
  c->r[5]=0u+0x00000000u; // 8016B66C
  c->lr=0x8016B674u; f_800AF804(c); // 8016B670
L_8016B674:;
  cmps(c,0,(int32_t)c->r[29],0); // 8016B674
  if (!crb(c,2)) { goto L_8016B69C; } // 8016B678
  c->r[4]=0u+0x802D0000u; // 8016B67C
  c->r[3]=0u+0x00000000u; // 8016B680
  c->r[4]=c->r[4]+0x00000144u; // 8016B684
  c->r[5]=0u+0xFFFFFFFDu; // 8016B688
  c->r[4]=c->r[4]+0x00000014u; // 8016B68C
  c->lr=0x8016B694u; f_8017968C(c); // 8016B690
  c->r[29]=0u+0x00000000u; // 8016B694
  goto L_8016B6E0; // 8016B698
L_8016B69C:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016B69C
  c->r[3]=c->r[29]|c->r[29]; // 8016B6A0
  c->r[12]=R32(c->r[12]+0x00000018u); // 8016B6A4
  c->ctr=c->r[12]; // 8016B6A8
  if (true) { c->lr=0x8016B6B0u; dispatch(c,c->ctr); } // 8016B6AC
  cmps(c,0,(int32_t)c->r[3],0); // 8016B6B0
  if (!crb(c,2)) { goto L_8016B6E0; } // 8016B6B4
  cmps(c,0,(int32_t)c->r[29],0); // 8016B6B8
  if (crb(c,2)) { goto L_8016B6DC; } // 8016B6BC
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016B6C0
  c->r[0]=0u+0x00000001u; // 8016B6C4
  c->r[3]=c->r[29]|c->r[29]; // 8016B6C8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016B6CC
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8016B6D0
  c->ctr=c->r[12]; // 8016B6D4
  if (true) { c->lr=0x8016B6DCu; dispatch(c,c->ctr); } // 8016B6D8
L_8016B6DC:;
  c->r[29]=0u+0x00000000u; // 8016B6DC
L_8016B6E0:;
  c->r[10]=c->r[31]|c->r[31]; // 8016B6E0
  c->r[3]=c->r[29]|c->r[29]; // 8016B6E4
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016B6E8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016B6EC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016B6F0
  c->r[1]=c->r[10]|c->r[10]; // 8016B6F4
  c->lr=c->r[0]; // 8016B6F8
  return; // 8016B6FC
}

// DestroySrVoiceRegMaster__32CriSrVoiceRegManagerMasterEntityFP19CriSrVoiceRegMaster
void f_8016B700(Ctx* __restrict c) {
  trace_call(0x8016B700u);
  cmps(c,0,(int32_t)c->r[4],0); // 8016B700
  if (crb(c,2)) return; // 8016B704
  c->r[12]=R32(c->r[4]+0x00000000u); // 8016B708
  c->r[3]=c->r[4]|c->r[4]; // 8016B70C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016B710
  c->ctr=c->r[12]; // 8016B714
  if (true) { dispatch(c,c->ctr); return; } // 8016B718
  return; // 8016B71C
}

// GetTransferAlignment__32CriSrVoiceRegManagerMasterEntityCFv
void f_8016B720(Ctx* __restrict c) {
  trace_call(0x8016B720u);
  c->r[3]=0u+0x00000008u; // 8016B720
  return; // 8016B724
}

// GetRequiredMemorySizeForSrVoiceRegMasters__32CriSrVoiceRegManagerMasterEntityCFUl
void f_8016B728(Ctx* __restrict c) {
  trace_call(0x8016B728u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B728
  c->r[0]=c->lr; // 8016B72C
  c->r[3]=0u+0x00000004u; // 8016B730
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016B734
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016B738
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016B73C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016B740
  c->r[29]=c->r[4]|c->r[4]; // 8016B744
  c->lr=0x8016B74Cu; f_8017C018(c); // 8016B748
  c->r[31]=c->r[3]|c->r[3]; // 8016B74C
  c->r[3]=0u+0x00000004u; // 8016B750
  c->lr=0x8016B758u; f_8017C018(c); // 8016B754
  c->r[30]=c->r[3]+0x00000050u; // 8016B758
  c->r[3]=0u+0x00000004u; // 8016B75C
  c->lr=0x8016B764u; f_8016959C(c); // 8016B760
  c->r[30]=c->r[30]+c->r[3]; // 8016B764
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[29]); // 8016B768
  c->r[0]=c->r[0]+c->r[31]; // 8016B76C
  c->r[3]=c->r[0]+c->r[31]; // 8016B770
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016B774
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016B778
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016B77C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016B780
  c->lr=c->r[0]; // 8016B784
  c->r[1]=c->r[1]+0x00000020u; // 8016B788
  return; // 8016B78C
}

// GetRequiredStaticMemorySize__32CriSrVoiceRegManagerMasterEntityCFv
void f_8016B790(Ctx* __restrict c) {
  trace_call(0x8016B790u);
  f_8016B7A0(c); return; // 8016B790
}

// GetRequiredDynamicMemorySize__32CriSrVoiceRegManagerMasterEntityCFUlQ217CriAuSoundElement6Format
void f_8016B794(Ctx* __restrict c) {
  trace_call(0x8016B794u);
  c->r[3]=c->r[4]|c->r[4]; // 8016B794
  c->r[4]=c->r[5]|c->r[5]; // 8016B798
  f_8016B7E8(c); return; // 8016B79C
}

// GetRequiredStaticMemorySize__18CriSrVoiceRegSlaveFv
void f_8016B7A0(Ctx* __restrict c) {
  trace_call(0x8016B7A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B7A0
  c->r[0]=c->lr; // 8016B7A4
  c->r[3]=0u+0x00000008u; // 8016B7A8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016B7AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016B7B0
  c->lr=0x8016B7B8u; f_8017D190(c); // 8016B7B4
  c->r[31]=c->r[3]+0x00000018u; // 8016B7B8
  c->lr=0x8016B7C0u; f_8016DE50(c); // 8016B7BC
  c->r[31]=c->r[31]+c->r[3]; // 8016B7C0
  c->r[3]=0u+0x00000001u; // 8016B7C4
  c->r[4]=0u+0x00000006u; // 8016B7C8
  c->lr=0x8016B7D0u; f_8017F76C(c); // 8016B7CC
  c->r[3]=c->r[31]+c->r[3]; // 8016B7D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016B7D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016B7D8
  c->lr=c->r[0]; // 8016B7DC
  c->r[1]=c->r[1]+0x00000010u; // 8016B7E0
  return; // 8016B7E4
}

// GetRequiredDynamicMemorySize__18CriSrVoiceRegSlaveFUlQ217CriAuSoundElement6Format
void f_8016B7E8(Ctx* __restrict c) {
  trace_call(0x8016B7E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B7E8
  c->r[0]=c->lr; // 8016B7EC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016B7F0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016B7F4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016B7F8
  c->r[30]=c->r[4]|c->r[4]; // 8016B7FC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016B800
  c->r[29]=c->r[3]|c->r[3]; // 8016B804
  c->r[3]=0u+0x00000008u; // 8016B808
  c->lr=0x8016B810u; f_8017D190(c); // 8016B80C
  c->r[31]=c->r[3]+0x00000018u; // 8016B810
  c->r[3]=c->r[29]|c->r[29]; // 8016B814
  c->r[4]=c->r[30]|c->r[30]; // 8016B818
  c->lr=0x8016B820u; f_8016DE88(c); // 8016B81C
  c->r[3]=c->r[31]+c->r[3]; // 8016B820
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016B824
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016B828
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016B82C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016B830
  c->lr=c->r[0]; // 8016B834
  c->r[1]=c->r[1]+0x00000020u; // 8016B838
  return; // 8016B83C
}

// __ct__18CriSrVoiceRegSlaveFRCQ218CriSrVoiceRegSlave15ConfigParameter
void f_8016B840(Ctx* __restrict c) {
  trace_call(0x8016B840u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B840
  c->r[0]=c->lr; // 8016B844
  c->r[8]=R32(c->r[4]+0x00000014u); // 8016B848
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016B84C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016B850
  c->r[31]=c->r[4]|c->r[4]; // 8016B854
  c->r[4]=R32(c->r[4]+0x00000000u); // 8016B858
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016B85C
  c->r[30]=c->r[3]|c->r[3]; // 8016B860
  c->r[5]=R32(c->r[8]+0x00000000u); // 8016B864
  c->r[6]=R32(c->r[8]+0x00000004u); // 8016B868
  c->r[7]=R32(c->r[8]+0x00000008u); // 8016B86C
  c->r[8]=R32(c->r[8]+0x0000000Cu); // 8016B870
  c->lr=0x8016B878u; f_80169524(c); // 8016B874
  c->r[5]=R32(c->r[31]+0x0000000Cu); // 8016B878
  c->r[3]=0u+0x80330000u; // 8016B87C
  c->r[6]=0u+0x00000000u; // 8016B880
  c->r[4]=R32(c->r[31]+0x00000010u); // 8016B884
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016B888
  c->r[3]=c->r[3]+0x000017F0u; // 8016B88C
  W32(c->r[30]+0x00000000u,c->r[3]); // 8016B890
  c->r[3]=c->r[30]|c->r[30]; // 8016B894
  W32(c->r[30]+0x00000024u,c->r[6]); // 8016B898
  W32(c->r[30]+0x00000028u,c->r[5]); // 8016B89C
  W32(c->r[30]+0x0000002Cu,c->r[6]); // 8016B8A0
  W32(c->r[30]+0x00000030u,c->r[4]); // 8016B8A4
  W32(c->r[30]+0x00000034u,c->r[6]); // 8016B8A8
  W32(c->r[30]+0x00000038u,c->r[6]); // 8016B8AC
  W32(c->r[30]+0x00000040u,c->r[6]); // 8016B8B0
  W32(c->r[30]+0x00000044u,c->r[6]); // 8016B8B4
  W32(c->r[30]+0x00000048u,c->r[6]); // 8016B8B8
  W8(c->r[30]+0x0000004Cu,c->r[6]); // 8016B8BC
  W32(c->r[30]+0x00000050u,c->r[0]); // 8016B8C0
  W32(c->r[30]+0x00000054u,c->r[6]); // 8016B8C4
  W32(c->r[30]+0x00000058u,c->r[6]); // 8016B8C8
  W32(c->r[30]+0x0000005Cu,c->r[6]); // 8016B8CC
  W32(c->r[30]+0x00000060u,c->r[6]); // 8016B8D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016B8D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016B8D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016B8DC
  c->lr=c->r[0]; // 8016B8E0
  c->r[1]=c->r[1]+0x00000010u; // 8016B8E4
  return; // 8016B8E8
}

// __dt__18CriSrVoiceRegSlaveFv
void f_8016B8EC(Ctx* __restrict c) {
  trace_call(0x8016B8ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B8EC
  c->r[0]=c->lr; // 8016B8F0
  cmps(c,0,(int32_t)c->r[3],0); // 8016B8F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016B8F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016B8FC
  c->r[31]=c->r[4]|c->r[4]; // 8016B900
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016B904
  c->r[30]=c->r[3]|c->r[3]; // 8016B908
  if (crb(c,2)) { goto L_8016B92C; } // 8016B90C
  c->r[4]=0u+0x00000000u; // 8016B910
  c->lr=0x8016B918u; f_80169558(c); // 8016B914
  cmps(c,0,(int32_t)c->r[31],0); // 8016B918
  if (!crb(c,1)) { goto L_8016B92C; } // 8016B91C
  c->r[3]=c->r[30]|c->r[30]; // 8016B920
  c->r[4]=0u+0x00000064u; // 8016B924
  c->lr=0x8016B92Cu; f_8017BFE8(c); // 8016B928
L_8016B92C:;
  c->r[3]=c->r[30]|c->r[30]; // 8016B92C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016B930
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016B934
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016B938
  c->lr=c->r[0]; // 8016B93C
  c->r[1]=c->r[1]+0x00000010u; // 8016B940
  return; // 8016B944
}

// Initialize__18CriSrVoiceRegSlaveFv
void f_8016B948(Ctx* __restrict c) {
  trace_call(0x8016B948u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B948
  c->r[0]=c->lr; // 8016B94C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016B950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016B954
  c->r[31]=c->r[3]|c->r[3]; // 8016B958
  c->lr=0x8016B960u; f_801695CC(c); // 8016B95C
  cmps(c,0,(int32_t)c->r[3],0); // 8016B960
  if (!crb(c,2)) { goto L_8016B970; } // 8016B964
  c->r[3]=0u+0x00000000u; // 8016B968
  goto L_8016B9A0; // 8016B96C
L_8016B970:;
  c->r[5]=0u+0x00000000u; // 8016B970
  W32(c->r[31]+0x00000040u,c->r[5]); // 8016B974
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016B978
  c->r[0]=0u+0x00000001u; // 8016B97C
  W32(c->r[31]+0x00000044u,c->r[5]); // 8016B980
  c->r[3]=0u+0x00000001u; // 8016B984
  W32(c->r[4]+0x00000048u,c->r[0]); // 8016B988
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016B98C
  W32(c->r[4]+0x0000004Cu,c->r[0]); // 8016B990
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016B994
  W32(c->r[4]+0x00000000u,c->r[5]); // 8016B998
  W8(c->r[31]+0x0000004Cu,c->r[5]); // 8016B99C
L_8016B9A0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016B9A0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016B9A4
  c->lr=c->r[0]; // 8016B9A8
  c->r[1]=c->r[1]+0x00000010u; // 8016B9AC
  return; // 8016B9B0
}

// Finalize__18CriSrVoiceRegSlaveFv
void f_8016B9B4(Ctx* __restrict c) {
  trace_call(0x8016B9B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016B9B4
  c->r[0]=c->lr; // 8016B9B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016B9BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016B9C0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016B9C4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016B9C8
  c->r[29]=c->r[3]|c->r[3]; // 8016B9CC
  c->r[31]=R32(c->r[3]+0x00000058u); // 8016B9D0
  goto L_8016BA60; // 8016B9D4
L_8016B9D8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016B9D8
  if (!crb(c,2)) { goto L_8016B9E8; } // 8016B9DC
  c->r[30]=0u+0x00000000u; // 8016B9E0
  goto L_8016BA5C; // 8016B9E4
L_8016B9E8:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016B9E8
  c->r[4]=c->r[29]|c->r[29]; // 8016B9EC
  c->lr=0x8016B9F4u; f_80173190(c); // 8016B9F0
  c->r[0]=R32(c->r[29]+0x00000058u); // 8016B9F4
  cmpu(c,0,c->r[31],c->r[0]); // 8016B9F8
  if (!crb(c,2)) { goto L_8016BA08; } // 8016B9FC
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016BA00
  W32(c->r[29]+0x00000058u,c->r[0]); // 8016BA04
L_8016BA08:;
  c->r[0]=R32(c->r[29]+0x0000005Cu); // 8016BA08
  cmpu(c,0,c->r[31],c->r[0]); // 8016BA0C
  if (!crb(c,2)) { goto L_8016BA1C; } // 8016BA10
  c->r[0]=R32(c->r[31]+0x00000000u); // 8016BA14
  W32(c->r[29]+0x0000005Cu,c->r[0]); // 8016BA18
L_8016BA1C:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 8016BA1C
  c->r[30]=R32(c->r[31]+0x00000004u); // 8016BA20
  cmps(c,0,(int32_t)c->r[3],0); // 8016BA24
  if (crb(c,2)) { goto L_8016BA30; } // 8016BA28
  W32(c->r[3]+0x00000004u,c->r[30]); // 8016BA2C
L_8016BA30:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016BA30
  cmps(c,0,(int32_t)c->r[3],0); // 8016BA34
  if (crb(c,2)) { goto L_8016BA44; } // 8016BA38
  c->r[0]=R32(c->r[31]+0x00000000u); // 8016BA3C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BA40
L_8016BA44:;
  c->r[3]=c->r[31]|c->r[31]; // 8016BA44
  c->r[4]=0u+0x0000000Cu; // 8016BA48
  c->lr=0x8016BA50u; f_8017BFE8(c); // 8016BA4C
  c->r[3]=R32(c->r[29]+0x00000060u); // 8016BA50
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016BA54
  W32(c->r[29]+0x00000060u,c->r[0]); // 8016BA58
L_8016BA5C:;
  c->r[31]=c->r[30]|c->r[30]; // 8016BA5C
L_8016BA60:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016BA60
  if (!crb(c,2)) { IRQCHK(c); goto L_8016B9D8; } // 8016BA64
  c->r[3]=R32(c->r[29]+0x00000054u); // 8016BA68
  cmps(c,0,(int32_t)c->r[3],0); // 8016BA6C
  if (crb(c,2)) { goto L_8016BA84; } // 8016BA70
  c->r[4]=c->r[29]|c->r[29]; // 8016BA74
  c->lr=0x8016BA7Cu; f_80173190(c); // 8016BA78
  c->r[0]=0u+0x00000000u; // 8016BA7C
  W32(c->r[29]+0x00000054u,c->r[0]); // 8016BA80
L_8016BA84:;
  c->r[3]=c->r[29]|c->r[29]; // 8016BA84
  c->lr=0x8016BA8Cu; f_801696E0(c); // 8016BA88
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016BA8C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016BA90
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016BA94
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016BA98
  c->lr=c->r[0]; // 8016BA9C
  c->r[1]=c->r[1]+0x00000020u; // 8016BAA0
  return; // 8016BAA4
}

// Execute__18CriSrVoiceRegSlaveFv
void f_8016BAA8(Ctx* __restrict c) {
  trace_call(0x8016BAA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016BAA8
  c->r[0]=c->lr; // 8016BAAC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016BAB0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016BAB4
  c->r[31]=c->r[3]|c->r[3]; // 8016BAB8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016BABC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016BAC0
  W32(c->r[1]+0x00000020u,c->r[28]); // 8016BAC4
  c->r[4]=R32(c->r[3]+0x00000014u); // 8016BAC8
  c->r[0]=R32(c->r[4]+0x00000004u); // 8016BACC
  cmps(c,0,(int32_t)c->r[0],0); // 8016BAD0
  if (crb(c,2)) { goto L_8016BC3C; } // 8016BAD4
  c->r[4]=R32(c->r[3]+0x00000014u); // 8016BAD8
  c->r[0]=R32(c->r[4]+0x00000004u); // 8016BADC
  c->r[0]=rotl(c->r[0],25)&0x00000001u; // 8016BAE0
  cmps(c,0,(int32_t)c->r[0],1); // 8016BAE4
  if (!crb(c,2)) { goto L_8016BAFC; } // 8016BAE8
  c->r[0]=R32(c->r[3]+0x00000024u); // 8016BAEC
  cmps(c,0,(int32_t)c->r[0],0); // 8016BAF0
  if (crb(c,2)) { goto L_8016BAFC; } // 8016BAF4
  c->lr=0x8016BAFCu; f_8016C3A8(c); // 8016BAF8
L_8016BAFC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BAFC
  c->r[3]=R32(c->r[3]+0x00000004u); // 8016BB00
  c->r[0]=rotl(c->r[3],29)&0x00000001u; // 8016BB04
  cmps(c,0,(int32_t)c->r[0],1); // 8016BB08
  if (!crb(c,2)) { goto L_8016BB20; } // 8016BB0C
  c->r[0]=R8(c->r[31]+0x0000004Cu); // 8016BB10
  c->r[0]=c->r[0]|0x00000001u; // 8016BB14
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 8016BB18
  goto L_8016BB38; // 8016BB1C
L_8016BB20:;
  c->r[0]=rotl(c->r[3],28)&0x00000001u; // 8016BB20
  cmps(c,0,(int32_t)c->r[0],1); // 8016BB24
  if (!crb(c,2)) { goto L_8016BB38; } // 8016BB28
  c->r[0]=R8(c->r[31]+0x0000004Cu); // 8016BB2C
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8016BB30
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 8016BB34
L_8016BB38:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BB38
  c->r[3]=R32(c->r[3]+0x00000004u); // 8016BB3C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; // 8016BB40
  cmps(c,0,(int32_t)c->r[0],1); // 8016BB44
  if (!crb(c,2)) { goto L_8016BB78; } // 8016BB48
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016BB4C
  cmps(c,0,(int32_t)c->r[0],0); // 8016BB50
  if (crb(c,2)) { goto L_8016BB6C; } // 8016BB54
  c->r[3]=c->r[31]|c->r[31]; // 8016BB58
  c->lr=0x8016BB60u; f_8016C3A8(c); // 8016BB5C
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BB60
  c->r[0]=0u+0x00000001u; // 8016BB64
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BB68
L_8016BB6C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016BB6C
  c->lr=0x8016BB74u; f_8016C198(c); // 8016BB70
  goto L_8016BC3C; // 8016BB74
L_8016BB78:;
  c->r[0]=rotl(c->r[3],31)&0x00000001u; // 8016BB78
  cmps(c,0,(int32_t)c->r[0],1); // 8016BB7C
  if (!crb(c,2)) { goto L_8016BBDC; } // 8016BB80
  c->r[4]=R32(c->r[31]+0x00000024u); // 8016BB84
  cmps(c,0,(int32_t)c->r[4],0); // 8016BB88
  if (crb(c,2)) { goto L_8016BBCC; } // 8016BB8C
  c->r[3]=R8(c->r[31]+0x0000004Cu); // 8016BB90
  c->r[0]=0u-c->r[3]; // 8016BB94
  c->r[0]=c->r[0]|c->r[3]; // 8016BB98
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8016BB9C
  cmps(c,0,(int32_t)c->r[0],1); // 8016BBA0
  if (!crb(c,2)) { goto L_8016BBC0; } // 8016BBA4
  c->r[3]=c->r[31]|c->r[31]; // 8016BBA8
  c->lr=0x8016BBB0u; f_8016C3A8(c); // 8016BBAC
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BBB0
  c->r[0]=0u+0x00000001u; // 8016BBB4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BBB8
  goto L_8016BC3C; // 8016BBBC
L_8016BBC0:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8016BBC0
  c->lr=0x8016BBC8u; f_80162D8C(c); // 8016BBC4
  goto L_8016BC3C; // 8016BBC8
L_8016BBCC:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BBCC
  c->r[0]=0u+0x00000001u; // 8016BBD0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BBD4
  goto L_8016BC3C; // 8016BBD8
L_8016BBDC:;
  c->r[0]=rotl(c->r[3],30)&0x00000001u; // 8016BBDC
  cmps(c,0,(int32_t)c->r[0],1); // 8016BBE0
  if (!crb(c,2)) { goto L_8016BC3C; } // 8016BBE4
  c->r[4]=R32(c->r[31]+0x00000024u); // 8016BBE8
  cmps(c,0,(int32_t)c->r[4],0); // 8016BBEC
  if (crb(c,2)) { goto L_8016BC30; } // 8016BBF0
  c->r[3]=R8(c->r[31]+0x0000004Cu); // 8016BBF4
  c->r[0]=0u-c->r[3]; // 8016BBF8
  c->r[0]=c->r[0]|c->r[3]; // 8016BBFC
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8016BC00
  cmps(c,0,(int32_t)c->r[0],1); // 8016BC04
  if (!crb(c,2)) { goto L_8016BC24; } // 8016BC08
  c->r[3]=c->r[31]|c->r[31]; // 8016BC0C
  c->lr=0x8016BC14u; f_8016C3A8(c); // 8016BC10
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BC14
  c->r[0]=0u+0x00000001u; // 8016BC18
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BC1C
  goto L_8016BC3C; // 8016BC20
L_8016BC24:;
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8016BC24
  c->lr=0x8016BC2Cu; f_80162DF8(c); // 8016BC28
  goto L_8016BC3C; // 8016BC2C
L_8016BC30:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BC30
  c->r[0]=0u+0x00000001u; // 8016BC34
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BC38
L_8016BC3C:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BC3C
  cmps(c,0,(int32_t)c->r[3],0); // 8016BC40
  if (crb(c,2)) { goto L_8016BD7C; } // 8016BC44
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BC48
  c->lr=0x8016BC50u; f_80163FF4(c); // 8016BC4C
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8016BC50
  cmps(c,0,(int32_t)c->r[0],0); // 8016BC54
  if (!crb(c,2)) { goto L_8016BC70; } // 8016BC58
  c->r[3]=c->r[31]|c->r[31]; // 8016BC5C
  c->lr=0x8016BC64u; f_8016C3A8(c); // 8016BC60
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BC64
  c->r[0]=0u+0x00000001u; // 8016BC68
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BC6C
L_8016BC70:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BC70
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016BC74
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 8016BC78
  cmps(c,0,(int32_t)c->r[0],1); // 8016BC7C
  if (!crb(c,2)) { goto L_8016BC8C; } // 8016BC80
  c->r[3]=c->r[31]|c->r[31]; // 8016BC84
  c->lr=0x8016BC8Cu; f_8016C518(c); // 8016BC88
L_8016BC8C:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BC8C
  cmps(c,0,(int32_t)c->r[3],0); // 8016BC90
  if (crb(c,2)) { goto L_8016BCB0; } // 8016BC94
  c->r[4]=R32(c->r[31]+0x00000018u); // 8016BC98
  c->r[4]=R8(c->r[4]+0x00000001u); // 8016BC9C
  cmps(c,0,(int32_t)c->r[4],0); // 8016BCA0
  if (crb(c,2)) { goto L_8016BCB0; } // 8016BCA4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BCA8
  c->lr=0x8016BCB0u; f_80164298(c); // 8016BCAC
L_8016BCB0:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8016BCB0
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8016BCB4
  c->r[3]=R32(c->r[3]+0x00000078u); // 8016BCB8
  c->lr=0x8016BCC0u; f_8016EF04(c); // 8016BCBC
  cmps(c,0,(int32_t)c->r[3],1); // 8016BCC0
  if (!crb(c,2)) { goto L_8016BD7C; } // 8016BCC4
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016BCC8
  cmps(c,0,(int32_t)c->r[0],0); // 8016BCCC
  if (crb(c,2)) { goto L_8016BD7C; } // 8016BCD0
  c->r[3]=R32(c->r[31]+0x00000028u); // 8016BCD4
  c->r[29]=R32(c->r[31]+0x00000018u); // 8016BCD8
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8016BCDC
  c->r[3]=R32(c->r[3]+0x00000078u); // 8016BCE0
  c->lr=0x8016BCE8u; f_8016EEEC(c); // 8016BCE4
  {uint32_t ea=c->r[29]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016BCE8
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BCEC
  c->f[1]=c->ps1[1]=S(c->f[0]*c->f[1]); // 8016BCF0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BCF4
  c->lr=0x8016BCFCu; f_80162F20(c); // 8016BCF8
  c->r[0]=R32(c->r[29]+0x000000C8u); // 8016BCFC
  c->r[30]=c->r[1]+0x00000008u; // 8016BD00
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016BD04
  c->r[28]=0u+0x00000000u; // 8016BD08
L_8016BD0C:;
  c->r[3]=R32(c->r[31]+0x00000028u); // 8016BD0C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8016BD10
  c->r[3]=R32(c->r[3]+0x00000078u); // 8016BD14
  c->lr=0x8016BD1Cu; f_8016EEEC(c); // 8016BD18
  {uint32_t ea=c->r[29]+0x000000CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016BD1C
  c->r[28]=c->r[28]+0x00000001u; // 8016BD20
  cmpu(c,0,c->r[28],0x00000005u); // 8016BD24
  c->r[29]=c->r[29]+0x00000004u; // 8016BD28
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8016BD2C
  {uint32_t ea=c->r[30]+0x00000004u; WF32(ea,c->f[0]); c->r[30]=ea;} // 8016BD30
  if (crb(c,0)) { IRQCHK(c); goto L_8016BD0C; } // 8016BD34
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BD38
  c->r[4]=c->r[1]+0x00000008u; // 8016BD3C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BD40
  c->lr=0x8016BD48u; f_80163DB8(c); // 8016BD44
  c->r[3]=R32(c->r[31]+0x00000028u); // 8016BD48
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8016BD4C
  c->r[3]=R32(c->r[3]+0x00000078u); // 8016BD50
  c->lr=0x8016BD58u; f_8016EEF4(c); // 8016BD54
  cmps(c,0,(int32_t)c->r[3],1); // 8016BD58
  if (!crb(c,2)) { goto L_8016BD70; } // 8016BD5C
  c->r[0]=R8(c->r[31]+0x0000004Cu); // 8016BD60
  c->r[0]=c->r[0]|0x00000004u; // 8016BD64
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 8016BD68
  goto L_8016BD7C; // 8016BD6C
L_8016BD70:;
  c->r[0]=R8(c->r[31]+0x0000004Cu); // 8016BD70
  c->r[0]=c->r[0]&0x000000FBu; cr0(c,c->r[0]); // 8016BD74
  W8(c->r[31]+0x0000004Cu,c->r[0]); // 8016BD78
L_8016BD7C:;
  c->r[4]=R32(c->r[31]+0x00000024u); // 8016BD7C
  cmps(c,0,(int32_t)c->r[4],0); // 8016BD80
  if (crb(c,2)) { goto L_8016BDAC; } // 8016BD84
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8016BD88
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016BD8C
  cmpu(c,0,c->r[0],0x00000001u); // 8016BD90
  if (crb(c,1)) { goto L_8016BDAC; } // 8016BD94
  c->r[3]=R32(c->r[4]+0x0000000Cu); // 8016BD98
  c->lr=0x8016BDA0u; f_801625C0(c); // 8016BD9C
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BDA0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BDA4
  c->lr=0x8016BDACu; f_80163FF4(c); // 8016BDA8
L_8016BDAC:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 8016BDAC
  c->r[0]=0u-c->r[3]; // 8016BDB0
  c->r[0]=c->r[0]|c->r[3]; // 8016BDB4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8016BDB8
  cmps(c,0,(int32_t)c->r[0],1); // 8016BDBC
  if (!crb(c,2)) { goto L_8016BE4C; } // 8016BDC0
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016BDC4
  c->r[0]=R32(c->r[3]+0x0000008Cu); // 8016BDC8
  cmpu(c,0,c->r[0],0x00000002u); // 8016BDCC
  if (crb(c,1)) { goto L_8016BE4C; } // 8016BDD0
  c->r[3]=c->r[31]|c->r[31]; // 8016BDD4
  c->lr=0x8016BDDCu; f_8016CCE4(c); // 8016BDD8
  c->r[3]=c->r[31]|c->r[31]; // 8016BDDC
  c->lr=0x8016BDE4u; f_8016CDD4(c); // 8016BDE0
  c->r[5]=R32(c->r[31]+0x00000014u); // 8016BDE4
  c->r[0]=R32(c->r[5]+0x00000068u); // 8016BDE8
  cmps(c,0,(int32_t)c->r[0],1); // 8016BDEC
  if (!crb(c,2)) { goto L_8016BE24; } // 8016BDF0
  c->r[4]=R32(c->r[5]+0x00000018u); // 8016BDF4
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 8016BDF8
  c->r[3]=R32(c->r[5]+0x00000020u); // 8016BDFC
  c->r[4]=c->r[4]+c->r[0]; // 8016BE00
  c->r[0]=R32(c->r[5]+0x00000024u); // 8016BE04
  c->r[4]=c->r[4]+c->r[3]; // 8016BE08
  c->r[4]=c->r[4]+c->r[0]; cr0(c,c->r[4]); // 8016BE0C
  if (!crb(c,2)) { goto L_8016BE24; } // 8016BE10
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BE14
  cmps(c,0,(int32_t)c->r[3],0); // 8016BE18
  if (crb(c,2)) { goto L_8016BE24; } // 8016BE1C
  c->lr=0x8016BE24u; f_8016E240(c); // 8016BE20
L_8016BE24:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BE24
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BE28
  c->lr=0x8016BE30u; f_80164288(c); // 8016BE2C
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016BE30
  W32(c->r[4]+0x00000050u,c->r[3]); // 8016BE34
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BE38
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BE3C
  c->lr=0x8016BE44u; f_80164290(c); // 8016BE40
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016BE44
  W32(c->r[4]+0x00000064u,c->r[3]); // 8016BE48
L_8016BE4C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BE4C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016BE50
  cmps(c,0,(int32_t)c->r[0],2); // 8016BE54
  if (!crb(c,2)) { goto L_8016BE7C; } // 8016BE58
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016BE5C
  cmps(c,0,(int32_t)c->r[0],0); // 8016BE60
  if (crb(c,2)) { goto L_8016BE7C; } // 8016BE64
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 8016BE68
  cmps(c,0,(int32_t)c->r[0],1); // 8016BE6C
  if (crb(c,2)) { goto L_8016BE7C; } // 8016BE70
  c->r[0]=0u+0x00000003u; // 8016BE74
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BE78
L_8016BE7C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BE7C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016BE80
  cmps(c,0,(int32_t)c->r[0],3); // 8016BE84
  if (!crb(c,2)) { goto L_8016BEE0; } // 8016BE88
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016BE8C
  cmps(c,0,(int32_t)c->r[0],0); // 8016BE90
  if (crb(c,2)) { goto L_8016BEE0; } // 8016BE94
  c->r[3]=R32(c->r[31]+0x00000054u); // 8016BE98
  c->r[28]=0u+0x00000000u; // 8016BE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8016BEA0
  if (crb(c,2)) { goto L_8016BEBC; } // 8016BEA4
  c->lr=0x8016BEACu; f_8017330C(c); // 8016BEA8
  cmps(c,0,(int32_t)c->r[3],1); // 8016BEAC
  if (!crb(c,2)) { goto L_8016BEC0; } // 8016BEB0
  c->r[28]=0u+0x00000001u; // 8016BEB4
  goto L_8016BEC0; // 8016BEB8
L_8016BEBC:;
  c->r[28]=0u+0x00000001u; // 8016BEBC
L_8016BEC0:;
  cmps(c,0,(int32_t)c->r[28],1); // 8016BEC0
  if (!crb(c,2)) { goto L_8016BEE0; } // 8016BEC4
  c->r[4]=R8(c->r[31]+0x0000004Cu); // 8016BEC8
  c->r[0]=0u+0x00000004u; // 8016BECC
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BED0
  c->r[4]=c->r[4]&0x000000FDu; cr0(c,c->r[4]); // 8016BED4
  W8(c->r[31]+0x0000004Cu,c->r[4]); // 8016BED8
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BEDC
L_8016BEE0:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BEE0
  cmps(c,0,(int32_t)c->r[3],0); // 8016BEE4
  if (crb(c,2)) { goto L_8016BF1C; } // 8016BEE8
  c->r[4]=R8(c->r[31]+0x0000004Cu); // 8016BEEC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BEF0
  c->r[0]=0u-c->r[4]; // 8016BEF4
  c->r[0]=c->r[0]|c->r[4]; // 8016BEF8
  c->r[30]=rotl(c->r[0],1)&0x00000001u; // 8016BEFC
  c->lr=0x8016BF04u; f_80162F00(c); // 8016BF00
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[3]); // 8016BF04
  if (crb(c,2)) { goto L_8016BF1C; } // 8016BF08
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016BF0C
  c->r[4]=c->r[30]|c->r[30]; // 8016BF10
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016BF14
  c->lr=0x8016BF1Cu; f_80162E6C(c); // 8016BF18
L_8016BF1C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016BF1C
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016BF20
  W32(c->r[31]+0x00000048u,c->r[0]); // 8016BF24
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016BF28
  c->r[30]=R32(c->r[1]+0x00000028u); // 8016BF2C
  c->r[29]=R32(c->r[1]+0x00000024u); // 8016BF30
  c->r[28]=R32(c->r[1]+0x00000020u); // 8016BF34
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016BF38
  c->lr=c->r[0]; // 8016BF3C
  c->r[1]=c->r[1]+0x00000030u; // 8016BF40
  return; // 8016BF44
}

// AttachSync__18CriSrVoiceRegSlaveFR15CriSrVocRegSync
void f_8016BF48(Ctx* __restrict c) {
  trace_call(0x8016BF48u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016BF48
  c->r[0]=c->lr; // 8016BF4C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016BF50
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8016BF54
  c->r[31]=c->r[1]|c->r[1]; // 8016BF58
  W32(c->r[1]+0x00000048u,c->r[30]); // 8016BF5C
  W32(c->r[1]+0x00000044u,c->r[29]); // 8016BF60
  c->r[29]=c->r[4]|c->r[4]; // 8016BF64
  W32(c->r[1]+0x00000040u,c->r[28]); // 8016BF68
  c->r[28]=c->r[3]|c->r[3]; // 8016BF6C
  c->r[30]=R32(c->r[3]+0x0000005Cu); // 8016BF70
  c->r[0]=R32(c->r[3]+0x00000050u); // 8016BF74
  cmps(c,0,(int32_t)c->r[30],0); // 8016BF78
  if (crb(c,2)) { goto L_8016C010; } // 8016BF7C
  c->r[6]=0u+0x80330000u; // 8016BF80
  c->r[4]=c->r[0]|c->r[0]; // 8016BF84
  c->r[6]=c->r[6]+0x00001838u; // 8016BF88
  c->r[3]=0u+0x0000000Cu; // 8016BF8C
  c->r[5]=0u+0x00000002u; // 8016BF90
  c->r[7]=0u+0x00000004u; // 8016BF94
  c->lr=0x8016BF9Cu; f_8017BF5C(c); // 8016BF98
  cmps(c,0,(int32_t)c->r[3],0); // 8016BF9C
  if (crb(c,2)) { goto L_8016BFB8; } // 8016BFA0
  c->r[0]=0u+0x00000000u; // 8016BFA4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016BFA8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016BFAC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016BFB0
  W32(c->r[3]+0x00000008u,c->r[29]); // 8016BFB4
L_8016BFB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016BFB8
  if (!crb(c,2)) { goto L_8016BFD8; } // 8016BFBC
  c->r[4]=0u+0x80330000u; // 8016BFC0
  c->r[3]=0u+0x00000000u; // 8016BFC4
  c->r[4]=c->r[4]+0x0000182Cu; // 8016BFC8
  c->r[5]=0u+0xFFFFFFFDu; // 8016BFCC
  c->lr=0x8016BFD4u; f_8017968C(c); // 8016BFD0
  c->r[3]=0u+0x00000000u; // 8016BFD4
L_8016BFD8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016BFD8
  if (!crb(c,2)) { goto L_8016BFE8; } // 8016BFDC
  c->r[3]=0u+0x00000000u; // 8016BFE0
  goto L_8016BFF8; // 8016BFE4
L_8016BFE8:;
  W32(c->r[3]+0x00000000u,c->r[30]); // 8016BFE8
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016BFEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016BFF0
  W32(c->r[30]+0x00000004u,c->r[3]); // 8016BFF4
L_8016BFF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016BFF8
  if (!crb(c,2)) { goto L_8016C008; } // 8016BFFC
  c->r[4]=0u+0x00000000u; // 8016C000
  goto L_8016C090; // 8016C004
L_8016C008:;
  W32(c->r[28]+0x0000005Cu,c->r[3]); // 8016C008
  goto L_8016C080; // 8016C00C
L_8016C010:;
  c->r[6]=0u+0x80330000u; // 8016C010
  c->r[4]=c->r[0]|c->r[0]; // 8016C014
  c->r[6]=c->r[6]+0x00001838u; // 8016C018
  c->r[3]=0u+0x0000000Cu; // 8016C01C
  c->r[5]=0u+0x00000002u; // 8016C020
  c->r[7]=0u+0x00000004u; // 8016C024
  c->lr=0x8016C02Cu; f_8017BF5C(c); // 8016C028
  cmps(c,0,(int32_t)c->r[3],0); // 8016C02C
  if (crb(c,2)) { goto L_8016C048; } // 8016C030
  c->r[0]=0u+0x00000000u; // 8016C034
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C038
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016C03C
  W32(c->r[31]+0x00000034u,c->r[1]); // 8016C040
  W32(c->r[3]+0x00000008u,c->r[29]); // 8016C044
L_8016C048:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016C048
  if (!crb(c,2)) { goto L_8016C068; } // 8016C04C
  c->r[4]=0u+0x80330000u; // 8016C050
  c->r[3]=0u+0x00000000u; // 8016C054
  c->r[4]=c->r[4]+0x0000182Cu; // 8016C058
  c->r[5]=0u+0xFFFFFFFDu; // 8016C05C
  c->lr=0x8016C064u; f_8017968C(c); // 8016C060
  c->r[3]=0u+0x00000000u; // 8016C064
L_8016C068:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016C068
  W32(c->r[28]+0x0000005Cu,c->r[3]); // 8016C06C
  if (!crb(c,2)) { goto L_8016C07C; } // 8016C070
  c->r[4]=0u+0x00000000u; // 8016C074
  goto L_8016C090; // 8016C078
L_8016C07C:;
  W32(c->r[28]+0x00000058u,c->r[3]); // 8016C07C
L_8016C080:;
  c->r[3]=R32(c->r[28]+0x00000060u); // 8016C080
  c->r[4]=0u+0x00000001u; // 8016C084
  c->r[0]=c->r[3]+0x00000001u; // 8016C088
  W32(c->r[28]+0x00000060u,c->r[0]); // 8016C08C
L_8016C090:;
  c->r[0]=0u-c->r[4]; // 8016C090
  c->r[10]=c->r[31]|c->r[31]; // 8016C094
  c->r[0]=c->r[0]|c->r[4]; // 8016C098
  c->r[31]=R32(c->r[31]+0x0000004Cu); // 8016C09C
  c->r[30]=R32(c->r[10]+0x00000048u); // 8016C0A0
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8016C0A4
  c->r[29]=R32(c->r[10]+0x00000044u); // 8016C0A8
  c->r[28]=R32(c->r[10]+0x00000040u); // 8016C0AC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016C0B0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016C0B4
  c->r[1]=c->r[10]|c->r[10]; // 8016C0B8
  c->lr=c->r[0]; // 8016C0BC
  return; // 8016C0C0
}

// DetachSync__18CriSrVoiceRegSlaveFR15CriSrVocRegSync
void f_8016C0C4(Ctx* __restrict c) {
  trace_call(0x8016C0C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C0C4
  c->r[0]=c->lr; // 8016C0C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016C0CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016C0D0
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016C0D4
  c->r[30]=c->r[3]|c->r[3]; // 8016C0D8
  c->r[31]=R32(c->r[3]+0x00000058u); // 8016C0DC
  goto L_8016C0F8; // 8016C0E0
L_8016C0E4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8016C0E4
  cmpu(c,0,c->r[0],c->r[4]); // 8016C0E8
  if (!crb(c,2)) { goto L_8016C0F4; } // 8016C0EC
  goto L_8016C104; // 8016C0F0
L_8016C0F4:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 8016C0F4
L_8016C0F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016C0F8
  if (!crb(c,2)) { IRQCHK(c); goto L_8016C0E4; } // 8016C0FC
  c->r[31]=0u+0x00000000u; // 8016C100
L_8016C104:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016C104
  if (crb(c,2)) { goto L_8016C180; } // 8016C108
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016C10C
  c->r[4]=c->r[30]|c->r[30]; // 8016C110
  c->lr=0x8016C118u; f_80173190(c); // 8016C114
  c->r[0]=R32(c->r[30]+0x00000058u); // 8016C118
  cmpu(c,0,c->r[31],c->r[0]); // 8016C11C
  if (!crb(c,2)) { goto L_8016C12C; } // 8016C120
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016C124
  W32(c->r[30]+0x00000058u,c->r[0]); // 8016C128
L_8016C12C:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 8016C12C
  cmpu(c,0,c->r[31],c->r[0]); // 8016C130
  if (!crb(c,2)) { goto L_8016C140; } // 8016C134
  c->r[0]=R32(c->r[31]+0x00000000u); // 8016C138
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016C13C
L_8016C140:;
  c->r[4]=R32(c->r[31]+0x00000000u); // 8016C140
  c->r[3]=c->r[31]|c->r[31]; // 8016C144
  cmps(c,0,(int32_t)c->r[4],0); // 8016C148
  if (crb(c,2)) { goto L_8016C158; } // 8016C14C
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016C150
  W32(c->r[4]+0x00000004u,c->r[0]); // 8016C154
L_8016C158:;
  c->r[4]=R32(c->r[31]+0x00000004u); // 8016C158
  cmps(c,0,(int32_t)c->r[4],0); // 8016C15C
  if (crb(c,2)) { goto L_8016C16C; } // 8016C160
  c->r[0]=R32(c->r[31]+0x00000000u); // 8016C164
  W32(c->r[4]+0x00000000u,c->r[0]); // 8016C168
L_8016C16C:;
  c->r[4]=0u+0x0000000Cu; // 8016C16C
  c->lr=0x8016C174u; f_8017BFE8(c); // 8016C170
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016C174
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016C178
  W32(c->r[30]+0x00000060u,c->r[0]); // 8016C17C
L_8016C180:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016C180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016C184
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016C188
  c->lr=c->r[0]; // 8016C18C
  c->r[1]=c->r[1]+0x00000010u; // 8016C190
  return; // 8016C194
}

// CreateVocCoreAndPlay__18CriSrVoiceRegSlaveFv
void f_8016C198(Ctx* __restrict c) {
  trace_call(0x8016C198u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C198
  c->r[0]=c->lr; // 8016C19C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C1A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016C1A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016C1A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016C1AC
  c->r[29]=c->r[3]|c->r[3]; // 8016C1B0
  c->r[30]=R32(c->r[3]+0x00000018u); // 8016C1B4
  c->lr=0x8016C1BCu; f_80169788(c); // 8016C1B8
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016C1BC
  c->r[31]=c->r[3]|c->r[3]; // 8016C1C0
  c->r[3]=c->r[29]|c->r[29]; // 8016C1C4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8016C1C8
  c->ctr=c->r[12]; // 8016C1CC
  if (true) { c->lr=0x8016C1D4u; dispatch(c,c->ctr); } // 8016C1D0
  c->r[4]=c->r[31]|c->r[31]; // 8016C1D4
  c->lr=0x8016C1DCu; f_8017C2EC(c); // 8016C1D8
  cmps(c,0,(int32_t)c->r[3],0); // 8016C1DC
  W32(c->r[29]+0x00000034u,c->r[3]); // 8016C1E0
  if (!crb(c,2)) { goto L_8016C200; } // 8016C1E4
  c->r[3]=c->r[29]|c->r[29]; // 8016C1E8
  c->lr=0x8016C1F0u; f_8016C3A8(c); // 8016C1EC
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016C1F0
  c->r[0]=0u+0x00000001u; // 8016C1F4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C1F8
  goto L_8016C38C; // 8016C1FC
L_8016C200:;
  c->r[6]=R32(c->r[29]+0x00000028u); // 8016C200
  c->r[4]=0u+0x00000001u; // 8016C204
  c->r[5]=0u+0x00000006u; // 8016C208
  c->r[6]=R32(c->r[6]+0x0000001Cu); // 8016C20C
  c->r[0]=R32(c->r[6]+0x00000008u); // 8016C210
  W32(c->r[29]+0x00000038u,c->r[0]); // 8016C214
  c->lr=0x8016C21Cu; f_8017F684(c); // 8016C218
  cmps(c,0,(int32_t)c->r[3],0); // 8016C21C
  W32(c->r[29]+0x0000002Cu,c->r[3]); // 8016C220
  if (!crb(c,2)) { goto L_8016C240; } // 8016C224
  c->r[3]=c->r[29]|c->r[29]; // 8016C228
  c->lr=0x8016C230u; f_8016C3A8(c); // 8016C22C
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016C230
  c->r[0]=0u+0x00000001u; // 8016C234
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C238
  goto L_8016C38C; // 8016C23C
L_8016C240:;
  c->r[30]=R32(c->r[30]+0x00000098u); // 8016C240
  cmps(c,0,(int32_t)c->r[30],0); // 8016C244
  if (crb(c,2)) { goto L_8016C2D8; } // 8016C248
  c->r[3]=R32(c->r[29]+0x00000028u); // 8016C24C
  c->r[31]=R32(c->r[3]+0x00000024u); // 8016C250
  goto L_8016C274; // 8016C254
L_8016C258:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016C258
  c->lr=0x8016C260u; f_801733B4(c); // 8016C25C
  cmpu(c,0,c->r[30],c->r[3]); // 8016C260
  if (!crb(c,2)) { goto L_8016C270; } // 8016C264
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016C268
  goto L_8016C280; // 8016C26C
L_8016C270:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 8016C270
L_8016C274:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016C274
  if (!crb(c,2)) { IRQCHK(c); goto L_8016C258; } // 8016C278
  c->r[3]=0u+0x00000000u; // 8016C27C
L_8016C280:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016C280
  if (!crb(c,2)) { goto L_8016C2A0; } // 8016C284
  c->r[3]=c->r[29]|c->r[29]; // 8016C288
  c->lr=0x8016C290u; f_8016C3A8(c); // 8016C28C
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016C290
  c->r[0]=0u+0x00000001u; // 8016C294
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C298
  goto L_8016C38C; // 8016C29C
L_8016C2A0:;
  W32(c->r[29]+0x00000054u,c->r[3]); // 8016C2A0
  c->r[4]=c->r[29]|c->r[29]; // 8016C2A4
  c->lr=0x8016C2ACu; f_80173000(c); // 8016C2A8
  cmps(c,0,(int32_t)c->r[3],0); // 8016C2AC
  if (!crb(c,2)) { goto L_8016C2CC; } // 8016C2B0
  c->r[3]=c->r[29]|c->r[29]; // 8016C2B4
  c->lr=0x8016C2BCu; f_8016C3A8(c); // 8016C2B8
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016C2BC
  c->r[0]=0u+0x00000001u; // 8016C2C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C2C4
  goto L_8016C38C; // 8016C2C8
L_8016C2CC:;
  c->r[0]=R8(c->r[29]+0x0000004Cu); // 8016C2CC
  c->r[0]=c->r[0]|0x00000002u; // 8016C2D0
  W8(c->r[29]+0x0000004Cu,c->r[0]); // 8016C2D4
L_8016C2D8:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016C2D8
  c->r[3]=c->r[29]|c->r[29]; // 8016C2DC
  c->r[12]=R32(c->r[12]+0x00000024u); // 8016C2E0
  c->ctr=c->r[12]; // 8016C2E4
  if (true) { c->lr=0x8016C2ECu; dispatch(c,c->ctr); } // 8016C2E8
  cmps(c,0,(int32_t)c->r[3],0); // 8016C2EC
  W32(c->r[29]+0x00000024u,c->r[3]); // 8016C2F0
  if (!crb(c,2)) { goto L_8016C310; } // 8016C2F4
  c->r[3]=c->r[29]|c->r[29]; // 8016C2F8
  c->lr=0x8016C300u; f_8016C3A8(c); // 8016C2FC
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016C300
  c->r[0]=0u+0x00000001u; // 8016C304
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C308
  goto L_8016C38C; // 8016C30C
L_8016C310:;
  c->r[3]=c->r[29]|c->r[29]; // 8016C310
  c->lr=0x8016C318u; f_8016C518(c); // 8016C314
  c->r[3]=R32(c->r[29]+0x00000024u); // 8016C318
  cmps(c,0,(int32_t)c->r[3],0); // 8016C31C
  if (crb(c,2)) { goto L_8016C374; } // 8016C320
  c->r[31]=R32(c->r[29]+0x00000018u); // 8016C324
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C328
  c->r[4]=R32(c->r[31]+0x000000C0u); // 8016C32C
  c->r[5]=R32(c->r[31]+0x000000C4u); // 8016C330
  c->lr=0x8016C338u; f_80163DAC(c); // 8016C334
  c->r[3]=R32(c->r[29]+0x00000024u); // 8016C338
  c->r[4]=R32(c->r[31]+0x000000ACu); // 8016C33C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C340
  c->r[5]=R32(c->r[31]+0x000000B0u); // 8016C344
  c->lr=0x8016C34Cu; f_80163C3C(c); // 8016C348
  c->r[3]=R32(c->r[29]+0x00000024u); // 8016C34C
  c->r[4]=R32(c->r[31]+0x000000B4u); // 8016C350
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C354
  c->r[5]=R32(c->r[31]+0x000000B8u); // 8016C358
  c->r[6]=R32(c->r[31]+0x000000BCu); // 8016C35C
  c->lr=0x8016C364u; f_80163D2C(c); // 8016C360
  c->r[3]=R32(c->r[29]+0x00000024u); // 8016C364
  c->r[4]=R32(c->r[31]+0x000000E4u); // 8016C368
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C36C
  c->lr=0x8016C374u; f_80163D94(c); // 8016C370
L_8016C374:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 8016C374
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C378
  c->lr=0x8016C380u; f_801625C0(c); // 8016C37C
  c->r[3]=R32(c->r[29]+0x00000014u); // 8016C380
  c->r[0]=0u+0x00000002u; // 8016C384
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C388
L_8016C38C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016C38C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016C390
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016C394
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016C398
  c->lr=c->r[0]; // 8016C39C
  c->r[1]=c->r[1]+0x00000020u; // 8016C3A0
  return; // 8016C3A4
}

// DestroyVocCore__18CriSrVoiceRegSlaveFv
void f_8016C3A8(Ctx* __restrict c) {
  trace_call(0x8016C3A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C3A8
  c->r[0]=c->lr; // 8016C3AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C3B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016C3B4
  c->r[31]=c->r[3]|c->r[3]; // 8016C3B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016C3BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016C3C0
  c->r[30]=R32(c->r[3]+0x00000058u); // 8016C3C4
  goto L_8016C454; // 8016C3C8
L_8016C3CC:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016C3CC
  if (!crb(c,2)) { goto L_8016C3DC; } // 8016C3D0
  c->r[29]=0u+0x00000000u; // 8016C3D4
  goto L_8016C450; // 8016C3D8
L_8016C3DC:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8016C3DC
  c->r[4]=c->r[31]|c->r[31]; // 8016C3E0
  c->lr=0x8016C3E8u; f_80173190(c); // 8016C3E4
  c->r[0]=R32(c->r[31]+0x00000058u); // 8016C3E8
  cmpu(c,0,c->r[30],c->r[0]); // 8016C3EC
  if (!crb(c,2)) { goto L_8016C3FC; } // 8016C3F0
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016C3F4
  W32(c->r[31]+0x00000058u,c->r[0]); // 8016C3F8
L_8016C3FC:;
  c->r[0]=R32(c->r[31]+0x0000005Cu); // 8016C3FC
  cmpu(c,0,c->r[30],c->r[0]); // 8016C400
  if (!crb(c,2)) { goto L_8016C410; } // 8016C404
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016C408
  W32(c->r[31]+0x0000005Cu,c->r[0]); // 8016C40C
L_8016C410:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016C410
  c->r[29]=R32(c->r[30]+0x00000004u); // 8016C414
  cmps(c,0,(int32_t)c->r[3],0); // 8016C418
  if (crb(c,2)) { goto L_8016C424; } // 8016C41C
  W32(c->r[3]+0x00000004u,c->r[29]); // 8016C420
L_8016C424:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016C424
  cmps(c,0,(int32_t)c->r[3],0); // 8016C428
  if (crb(c,2)) { goto L_8016C438; } // 8016C42C
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016C430
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016C434
L_8016C438:;
  c->r[3]=c->r[30]|c->r[30]; // 8016C438
  c->r[4]=0u+0x0000000Cu; // 8016C43C
  c->lr=0x8016C444u; f_8017BFE8(c); // 8016C440
  c->r[3]=R32(c->r[31]+0x00000060u); // 8016C444
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016C448
  W32(c->r[31]+0x00000060u,c->r[0]); // 8016C44C
L_8016C450:;
  c->r[30]=c->r[29]|c->r[29]; // 8016C450
L_8016C454:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016C454
  if (!crb(c,2)) { IRQCHK(c); goto L_8016C3CC; } // 8016C458
  c->r[3]=R32(c->r[31]+0x00000054u); // 8016C45C
  cmps(c,0,(int32_t)c->r[3],0); // 8016C460
  if (crb(c,2)) { goto L_8016C478; } // 8016C464
  c->r[4]=c->r[31]|c->r[31]; // 8016C468
  c->lr=0x8016C470u; f_80173190(c); // 8016C46C
  c->r[0]=0u+0x00000000u; // 8016C470
  W32(c->r[31]+0x00000054u,c->r[0]); // 8016C474
L_8016C478:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016C478
  cmps(c,0,(int32_t)c->r[3],0); // 8016C47C
  if (crb(c,2)) { goto L_8016C49C; } // 8016C480
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016C484
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016C488
  c->ctr=c->r[12]; // 8016C48C
  if (true) { c->lr=0x8016C494u; dispatch(c,c->ctr); } // 8016C490
  c->r[0]=0u+0x00000000u; // 8016C494
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016C498
L_8016C49C:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8016C49C
  cmps(c,0,(int32_t)c->r[3],0); // 8016C4A0
  if (crb(c,2)) { goto L_8016C4B4; } // 8016C4A4
  c->lr=0x8016C4ACu; f_8017DD58(c); // 8016C4A8
  c->r[0]=0u+0x00000000u; // 8016C4AC
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8016C4B0
L_8016C4B4:;
  c->r[3]=R32(c->r[31]+0x00000034u); // 8016C4B4
  cmps(c,0,(int32_t)c->r[3],0); // 8016C4B8
  if (crb(c,2)) { goto L_8016C4CC; } // 8016C4BC
  c->lr=0x8016C4C4u; f_8017C424(c); // 8016C4C0
  c->r[0]=0u+0x00000000u; // 8016C4C4
  W32(c->r[31]+0x00000034u,c->r[0]); // 8016C4C8
L_8016C4CC:;
  c->r[4]=0u+0x00000000u; // 8016C4CC
  W32(c->r[31]+0x00000038u,c->r[4]); // 8016C4D0
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016C4D4
  c->r[0]=0u+0x00000001u; // 8016C4D8
  W32(c->r[31]+0x00000040u,c->r[4]); // 8016C4DC
  W32(c->r[31]+0x00000044u,c->r[4]); // 8016C4E0
  W32(c->r[3]+0x00000048u,c->r[0]); // 8016C4E4
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016C4E8
  W32(c->r[3]+0x0000004Cu,c->r[0]); // 8016C4EC
  c->r[3]=R32(c->r[31]+0x00000014u); // 8016C4F0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8016C4F4
  W8(c->r[31]+0x0000004Cu,c->r[4]); // 8016C4F8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016C4FC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016C500
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016C504
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016C508
  c->lr=c->r[0]; // 8016C50C
  c->r[1]=c->r[1]+0x00000020u; // 8016C510
  return; // 8016C514
}

// SetParametersToVocCore__18CriSrVoiceRegSlaveFv
void f_8016C518(Ctx* __restrict c) {
  trace_call(0x8016C518u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016C518
  c->r[0]=c->lr; // 8016C51C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016C520
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016C524
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016C528
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016C52C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016C530
  c->r[28]=c->r[3]|c->r[3]; // 8016C534
  c->r[0]=R32(c->r[3]+0x00000024u); // 8016C538
  cmps(c,0,(int32_t)c->r[0],0); // 8016C53C
  if (crb(c,2)) { goto L_8016CC38; } // 8016C540
  c->r[4]=R32(c->r[3]+0x00000014u); // 8016C544
  c->r[31]=R32(c->r[3]+0x00000018u); // 8016C548
  c->r[4]=R32(c->r[4]+0x00000004u); // 8016C54C
  c->r[0]=rotl(c->r[4],29)&0x00000001u; // 8016C550
  cmps(c,0,(int32_t)c->r[0],1); // 8016C554
  if (!crb(c,2)) { goto L_8016C56C; } // 8016C558
  c->r[0]=R8(c->r[3]+0x0000004Cu); // 8016C55C
  c->r[0]=c->r[0]|0x00000001u; // 8016C560
  W8(c->r[3]+0x0000004Cu,c->r[0]); // 8016C564
  goto L_8016C584; // 8016C568
L_8016C56C:;
  c->r[0]=rotl(c->r[4],28)&0x00000001u; // 8016C56C
  cmps(c,0,(int32_t)c->r[0],1); // 8016C570
  if (!crb(c,2)) { goto L_8016C584; } // 8016C574
  c->r[0]=R8(c->r[3]+0x0000004Cu); // 8016C578
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 8016C57C
  W8(c->r[3]+0x0000004Cu,c->r[0]); // 8016C580
L_8016C584:;
  c->r[5]=R32(c->r[3]+0x00000024u); // 8016C584
  cmps(c,0,(int32_t)c->r[5],0); // 8016C588
  if (crb(c,2)) { goto L_8016C5C0; } // 8016C58C
  c->r[4]=R8(c->r[3]+0x0000004Cu); // 8016C590
  c->r[3]=R32(c->r[5]+0x0000000Cu); // 8016C594
  c->r[0]=0u-c->r[4]; // 8016C598
  c->r[0]=c->r[0]|c->r[4]; // 8016C59C
  c->r[29]=rotl(c->r[0],1)&0x00000001u; // 8016C5A0
  c->lr=0x8016C5A8u; f_80162F00(c); // 8016C5A4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[3]); // 8016C5A8
  if (crb(c,2)) { goto L_8016C5C0; } // 8016C5AC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C5B0
  c->r[4]=c->r[29]|c->r[29]; // 8016C5B4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C5B8
  c->lr=0x8016C5C0u; f_80162E6C(c); // 8016C5BC
L_8016C5C0:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C5C0
  {uint32_t ea=c->r[31]+0x0000000Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C5C4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C5C8
  c->lr=0x8016C5D0u; f_8016306C(c); // 8016C5CC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C5D0
  {uint32_t ea=c->r[31]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C5D4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C5D8
  c->lr=0x8016C5E0u; f_80163B50(c); // 8016C5DC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C5E0
  {uint32_t ea=c->r[31]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C5E4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C5E8
  {uint32_t ea=c->r[31]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016C5EC
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 8016C5F0
  {uint32_t ea=c->r[31]+0x00000020u; c->f[4]=c->ps1[4]=RF32(ea);} // 8016C5F4
  {uint32_t ea=c->r[31]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 8016C5F8
  {uint32_t ea=c->r[31]+0x00000028u; c->f[6]=c->ps1[6]=RF32(ea);} // 8016C5FC
  c->lr=0x8016C604u; f_801630B8(c); // 8016C600
  c->r[0]=R8(c->r[31]+0x00000000u); // 8016C604
  c->r[30]=0u+0x00000040u; // 8016C608
  c->r[29]=0u+0x0000007Fu; // 8016C60C
  cmpu(c,0,c->r[0],0x00000001u); // 8016C610
  if (!crb(c,2)) { goto L_8016CAF0; } // 8016C614
  {uint32_t ea=c->r[2]+0xFFFFB448u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C618
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C61C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C620
  if (!crb(c,2)) { goto L_8016C694; } // 8016C624
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C628
  fcmp(c,0,c->f[1],c->f[0]); // 8016C62C
  if (!crb(c,2)) { goto L_8016C694; } // 8016C630
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C634
  fcmp(c,0,c->f[1],c->f[0]); // 8016C638
  if (!crb(c,2)) { goto L_8016C694; } // 8016C63C
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C640
  fcmp(c,0,c->f[1],c->f[0]); // 8016C644
  if (!crb(c,2)) { goto L_8016C694; } // 8016C648
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C64C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C650
  if (!crb(c,2)) { goto L_8016C694; } // 8016C654
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C658
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C65C
  c->lr=0x8016C664u; f_80163FE8(c); // 8016C660
  cmps(c,0,(int32_t)c->r[3],1); // 8016C664
  if (crb(c,0)) { goto L_8016CB98; } // 8016C668
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C66C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C670
  c->lr=0x8016C678u; f_80163FE8(c); // 8016C674
  cmps(c,0,(int32_t)c->r[3],3); // 8016C678
  if (crb(c,1)) { goto L_8016CB98; } // 8016C67C
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C680
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C684
  c->r[0]=R8(c->r[3]+0x0000017Cu); // 8016C688
  cmps(c,0,(int32_t)c->r[0],0); // 8016C68C
  if (crb(c,2)) { goto L_8016CB98; } // 8016C690
L_8016C694:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C694
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C698
  c->f[1]=std::fabs(c->f[1]); // 8016C69C
  c->f[0]=std::fabs(c->f[0]); // 8016C6A0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8016C6A4
  c->f[1]=c->ps1[1]=S(c->f[0]); // 8016C6A8
  fcmp(c,0,c->f[1],c->f[2]); // 8016C6AC
  if (!crb(c,2)) { goto L_8016C70C; } // 8016C6B0
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C6B4
  c->f[0]=std::fabs(c->f[0]); // 8016C6B8
  c->f[3]=c->ps1[3]=S(c->f[0]); // 8016C6BC
  fcmp(c,0,c->f[2],c->f[3]); // 8016C6C0
  if (!crb(c,2)) { goto L_8016C70C; } // 8016C6C4
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C6C8
  c->f[0]=std::fabs(c->f[0]); // 8016C6CC
  c->f[2]=c->ps1[2]=S(c->f[0]); // 8016C6D0
  fcmp(c,0,c->f[3],c->f[2]); // 8016C6D4
  if (!crb(c,2)) { goto L_8016C70C; } // 8016C6D8
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C6DC
  c->f[0]=std::fabs(c->f[0]); // 8016C6E0
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C6E4
  fcmp(c,0,c->f[2],c->f[0]); // 8016C6E8
  if (!crb(c,2)) { goto L_8016C70C; } // 8016C6EC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C6F0
  c->r[30]=0u+0x00000040u; // 8016C6F4
  c->r[29]=0u+0x00000040u; // 8016C6F8
  c->r[4]=0u+0x00000000u; // 8016C6FC
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C700
  c->lr=0x8016C708u; f_80163A44(c); // 8016C704
  goto L_8016CAC8; // 8016C708
L_8016C70C:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C70C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C710
  c->f[1]=std::fabs(c->f[1]); // 8016C714
  c->f[2]=std::fabs(c->f[0]); // 8016C718
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8016C71C
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8016C720
  fcmp(c,0,c->f[1],c->f[0]); // 8016C724
  if (!crb(c,2)) { goto L_8016C790; } // 8016C728
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C72C
  c->f[0]=std::fabs(c->f[0]); // 8016C730
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C734
  fcmp(c,0,c->f[1],c->f[0]); // 8016C738
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C73C
  if (!crb(c,2)) { goto L_8016C790; } // 8016C740
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C744
  c->f[0]=std::fabs(c->f[0]); // 8016C748
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C74C
  fcmp(c,0,c->f[1],c->f[0]); // 8016C750
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C754
  if (!crb(c,2)) { goto L_8016C790; } // 8016C758
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C75C
  c->f[0]=std::fabs(c->f[0]); // 8016C760
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C764
  fcmp(c,0,c->f[1],c->f[0]); // 8016C768
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C76C
  if (!crb(c,2)) { goto L_8016C790; } // 8016C770
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C774
  c->r[30]=0u+0x00000040u; // 8016C778
  c->r[29]=0u+0x0000007Fu; // 8016C77C
  c->r[4]=0u+0x00000000u; // 8016C780
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C784
  c->lr=0x8016C78Cu; f_80163A44(c); // 8016C788
  goto L_8016CAC8; // 8016C78C
L_8016C790:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C790
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C794
  c->f[1]=std::fabs(c->f[1]); // 8016C798
  c->f[0]=std::fabs(c->f[0]); // 8016C79C
  c->f[1]=c->ps1[1]=S(c->f[1]); // 8016C7A0
  c->f[2]=c->ps1[2]=S(c->f[0]); // 8016C7A4
  fcmp(c,0,c->f[2],c->f[1]); // 8016C7A8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C7AC
  if (!crb(c,2)) { goto L_8016C81C; } // 8016C7B0
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C7B4
  c->f[0]=std::fabs(c->f[0]); // 8016C7B8
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C7BC
  fcmp(c,0,c->f[2],c->f[0]); // 8016C7C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C7C4
  if (!crb(c,2)) { goto L_8016C81C; } // 8016C7C8
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C7CC
  c->f[0]=std::fabs(c->f[0]); // 8016C7D0
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C7D4
  fcmp(c,0,c->f[2],c->f[0]); // 8016C7D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C7DC
  if (!crb(c,2)) { goto L_8016C81C; } // 8016C7E0
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C7E4
  c->f[0]=std::fabs(c->f[0]); // 8016C7E8
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C7EC
  fcmp(c,0,c->f[2],c->f[0]); // 8016C7F0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C7F4
  if (!crb(c,2)) { goto L_8016C81C; } // 8016C7F8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C7FC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8016C800
  c->r[30]=0u+0x00000000u; // 8016C804
  c->r[29]=0u+0x0000007Fu; // 8016C808
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C80C
  c->r[4]=0u+0x00000000u; // 8016C810
  c->lr=0x8016C818u; f_80163A44(c); // 8016C814
  goto L_8016CAC8; // 8016C818
L_8016C81C:;
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C81C
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C820
  c->f[1]=std::fabs(c->f[1]); // 8016C824
  c->f[2]=std::fabs(c->f[0]); // 8016C828
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8016C82C
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8016C830
  fcmp(c,0,c->f[1],c->f[0]); // 8016C834
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C838
  if (!crb(c,2)) { goto L_8016C8A4; } // 8016C83C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C840
  c->f[0]=std::fabs(c->f[0]); // 8016C844
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C848
  fcmp(c,0,c->f[1],c->f[0]); // 8016C84C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C850
  if (!crb(c,2)) { goto L_8016C8A4; } // 8016C854
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C858
  c->f[0]=std::fabs(c->f[0]); // 8016C85C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C860
  fcmp(c,0,c->f[1],c->f[0]); // 8016C864
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C868
  if (!crb(c,2)) { goto L_8016C8A4; } // 8016C86C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C870
  c->f[0]=std::fabs(c->f[0]); // 8016C874
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C878
  fcmp(c,0,c->f[1],c->f[0]); // 8016C87C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C880
  if (!crb(c,2)) { goto L_8016C8A4; } // 8016C884
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C888
  c->r[30]=0u+0x00000040u; // 8016C88C
  c->r[29]=0u+0x0000007Fu; // 8016C890
  c->r[4]=0u+0x00000000u; // 8016C894
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C898
  c->lr=0x8016C8A0u; f_80163A44(c); // 8016C89C
  goto L_8016CAC8; // 8016C8A0
L_8016C8A4:;
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C8A4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C8A8
  c->f[1]=std::fabs(c->f[1]); // 8016C8AC
  c->f[2]=std::fabs(c->f[0]); // 8016C8B0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8016C8B4
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8016C8B8
  fcmp(c,0,c->f[1],c->f[0]); // 8016C8BC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C8C0
  if (!crb(c,2)) { goto L_8016C930; } // 8016C8C4
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C8C8
  c->f[0]=std::fabs(c->f[0]); // 8016C8CC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C8D0
  fcmp(c,0,c->f[1],c->f[0]); // 8016C8D4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C8D8
  if (!crb(c,2)) { goto L_8016C930; } // 8016C8DC
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C8E0
  c->f[0]=std::fabs(c->f[0]); // 8016C8E4
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C8E8
  fcmp(c,0,c->f[1],c->f[0]); // 8016C8EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C8F0
  if (!crb(c,2)) { goto L_8016C930; } // 8016C8F4
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C8F8
  c->f[0]=std::fabs(c->f[0]); // 8016C8FC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C900
  fcmp(c,0,c->f[1],c->f[0]); // 8016C904
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C908
  if (!crb(c,2)) { goto L_8016C930; } // 8016C90C
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C910
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8016C914
  c->r[30]=0u+0x0000007Fu; // 8016C918
  c->r[29]=0u+0x0000007Fu; // 8016C91C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C920
  c->r[4]=0u+0x00000000u; // 8016C924
  c->lr=0x8016C92Cu; f_80163A44(c); // 8016C928
  goto L_8016CAC8; // 8016C92C
L_8016C930:;
  {uint32_t ea=c->r[31]+0x00000058u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C930
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C934
  c->f[1]=std::fabs(c->f[1]); // 8016C938
  c->f[2]=std::fabs(c->f[0]); // 8016C93C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8016C940
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8016C944
  fcmp(c,0,c->f[1],c->f[0]); // 8016C948
  if (!crb(c,2)) { goto L_8016C9B4; } // 8016C94C
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C950
  c->f[0]=std::fabs(c->f[0]); // 8016C954
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C958
  fcmp(c,0,c->f[1],c->f[0]); // 8016C95C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C960
  if (!crb(c,2)) { goto L_8016C9B4; } // 8016C964
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C968
  c->f[0]=std::fabs(c->f[0]); // 8016C96C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C970
  fcmp(c,0,c->f[1],c->f[0]); // 8016C974
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C978
  if (!crb(c,2)) { goto L_8016C9B4; } // 8016C97C
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C980
  c->f[0]=std::fabs(c->f[0]); // 8016C984
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C988
  fcmp(c,0,c->f[1],c->f[0]); // 8016C98C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C990
  if (!crb(c,2)) { goto L_8016C9B4; } // 8016C994
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016C998
  c->r[30]=0u+0x00000040u; // 8016C99C
  c->r[29]=0u+0x00000000u; // 8016C9A0
  c->r[4]=0u+0x00000000u; // 8016C9A4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016C9A8
  c->lr=0x8016C9B0u; f_80163A44(c); // 8016C9AC
  goto L_8016CAC8; // 8016C9B0
L_8016C9B4:;
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016C9B4
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C9B8
  c->f[1]=std::fabs(c->f[1]); // 8016C9BC
  c->f[2]=std::fabs(c->f[0]); // 8016C9C0
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8016C9C4
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8016C9C8
  fcmp(c,0,c->f[1],c->f[0]); // 8016C9CC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C9D0
  if (!crb(c,2)) { goto L_8016CA40; } // 8016C9D4
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C9D8
  c->f[0]=std::fabs(c->f[0]); // 8016C9DC
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016C9E0
  fcmp(c,0,c->f[1],c->f[0]); // 8016C9E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016C9E8
  if (!crb(c,2)) { goto L_8016CA40; } // 8016C9EC
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016C9F0
  c->f[0]=std::fabs(c->f[0]); // 8016C9F4
  c->f[2]=c->ps1[2]=S(c->f[0]); // 8016C9F8
  fcmp(c,0,c->f[1],c->f[2]); // 8016C9FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016CA00
  if (!crb(c,2)) { goto L_8016CA40; } // 8016CA04
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CA08
  c->f[0]=std::fabs(c->f[0]); // 8016CA0C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016CA10
  fcmp(c,0,c->f[1],c->f[0]); // 8016CA14
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016CA18
  if (!crb(c,2)) { goto L_8016CA40; } // 8016CA1C
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CA20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8016CA24
  c->r[30]=0u+0x00000000u; // 8016CA28
  c->r[29]=0u+0x00000000u; // 8016CA2C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CA30
  c->r[4]=0u+0x00000000u; // 8016CA34
  c->lr=0x8016CA3Cu; f_80163A44(c); // 8016CA38
  goto L_8016CAC8; // 8016CA3C
L_8016CA40:;
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CA40
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CA44
  c->f[1]=std::fabs(c->f[1]); // 8016CA48
  c->f[2]=std::fabs(c->f[0]); // 8016CA4C
  c->f[0]=c->ps1[0]=S(c->f[1]); // 8016CA50
  c->f[1]=c->ps1[1]=S(c->f[2]); // 8016CA54
  fcmp(c,0,c->f[1],c->f[0]); // 8016CA58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016CA5C
  if (!crb(c,2)) { goto L_8016CAC8; } // 8016CA60
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CA64
  c->f[0]=std::fabs(c->f[0]); // 8016CA68
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016CA6C
  fcmp(c,0,c->f[1],c->f[0]); // 8016CA70
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016CA74
  if (!crb(c,2)) { goto L_8016CAC8; } // 8016CA78
  fcmp(c,0,c->f[1],c->f[1]); // 8016CA7C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016CA80
  if (!crb(c,2)) { goto L_8016CAC8; } // 8016CA84
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CA88
  c->f[0]=std::fabs(c->f[0]); // 8016CA8C
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016CA90
  fcmp(c,0,c->f[1],c->f[0]); // 8016CA94
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8016CA98
  if (!crb(c,2)) { goto L_8016CAC8; } // 8016CA9C
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CAA0
  c->r[30]=0u+0x0000007Fu; // 8016CAA4
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CAA8
  c->r[29]=0u+0x00000000u; // 8016CAAC
  c->f[0]=std::fabs(c->f[0]); // 8016CAB0
  c->r[4]=0u+0x00000000u; // 8016CAB4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CAB8
  c->f[0]=c->ps1[0]=S(c->f[0]); // 8016CABC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[0]); // 8016CAC0
  c->lr=0x8016CAC8u; f_80163A44(c); // 8016CAC4
L_8016CAC8:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CAC8
  c->r[4]=c->r[30]|c->r[30]; // 8016CACC
  c->r[5]=c->r[29]|c->r[29]; // 8016CAD0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CAD4
  c->lr=0x8016CADCu; f_80163444(c); // 8016CAD8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CADC
  c->r[4]=0u+0x00000001u; // 8016CAE0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CAE4
  c->lr=0x8016CAECu; f_80163498(c); // 8016CAE8
  goto L_8016CB98; // 8016CAEC
L_8016CAF0:;
  {uint32_t ea=c->r[2]+0xFFFFB448u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CAF0
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CAF4
  fcmp(c,0,c->f[1],c->f[0]); // 8016CAF8
  if (!crb(c,2)) { goto L_8016CB3C; } // 8016CAFC
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB00
  fcmp(c,0,c->f[1],c->f[0]); // 8016CB04
  if (!crb(c,2)) { goto L_8016CB3C; } // 8016CB08
  {uint32_t ea=c->r[31]+0x00000054u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB0C
  fcmp(c,0,c->f[1],c->f[0]); // 8016CB10
  if (!crb(c,2)) { goto L_8016CB3C; } // 8016CB14
  {uint32_t ea=c->r[31]+0x00000058u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB18
  fcmp(c,0,c->f[1],c->f[0]); // 8016CB1C
  if (!crb(c,2)) { goto L_8016CB3C; } // 8016CB20
  {uint32_t ea=c->r[31]+0x0000005Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB24
  fcmp(c,0,c->f[1],c->f[0]); // 8016CB28
  if (!crb(c,2)) { goto L_8016CB3C; } // 8016CB2C
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB30
  fcmp(c,0,c->f[1],c->f[0]); // 8016CB34
  if (!crb(c,2)) { goto L_8016CB74; } // 8016CB38
L_8016CB3C:;
  {uint32_t ea=c->r[31]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB3C
  c->r[4]=0u+0x00000000u; // 8016CB40
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CB44
  c->f[0]=std::fabs(c->f[0]); // 8016CB48
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CB4C
  c->f[1]=c->ps1[1]=S(c->f[0]); // 8016CB50
  c->lr=0x8016CB58u; f_80163A44(c); // 8016CB54
  {uint32_t ea=c->r[31]+0x00000050u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CB58
  c->r[4]=0u+0x00000001u; // 8016CB5C
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CB60
  c->f[0]=std::fabs(c->f[0]); // 8016CB64
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CB68
  c->f[1]=c->ps1[1]=S(c->f[0]); // 8016CB6C
  c->lr=0x8016CB74u; f_80163A44(c); // 8016CB70
L_8016CB74:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CB74
  c->r[4]=0u+0x00000040u; // 8016CB78
  c->r[5]=0u+0x0000007Fu; // 8016CB7C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CB80
  c->lr=0x8016CB88u; f_80163444(c); // 8016CB84
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CB88
  c->r[4]=0u+0x00000001u; // 8016CB8C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CB90
  c->lr=0x8016CB98u; f_80163498(c); // 8016CB94
L_8016CB98:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CB98
  {uint32_t ea=c->r[31]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CB9C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CBA0
  {uint32_t ea=c->r[31]+0x00000038u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CBA4
  c->lr=0x8016CBACu; f_80163278(c); // 8016CBA8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CBAC
  c->r[4]=R32(c->r[31]+0x000000E0u); // 8016CBB0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CBB4
  c->lr=0x8016CBBCu; f_80163FE0(c); // 8016CBB8
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CBBC
  {uint32_t ea=c->r[31]+0x000000A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CBC0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CBC4
  {uint32_t ea=c->r[31]+0x000000A4u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016CBC8
  c->lr=0x8016CBD0u; f_801634A0(c); // 8016CBCC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CBD0
  {uint32_t ea=c->r[31]+0x000000A8u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CBD4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CBD8
  c->lr=0x8016CBE0u; f_80163A24(c); // 8016CBDC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CBE0
  c->r[4]=R32(c->r[31]+0x00000094u); // 8016CBE4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CBE8
  c->lr=0x8016CBF0u; f_80163B80(c); // 8016CBEC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CBF0
  c->r[4]=c->r[31]+0x000000C8u; // 8016CBF4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CBF8
  c->lr=0x8016CC00u; f_80163DB8(c); // 8016CBFC
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CC00
  {uint32_t ea=c->r[31]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CC04
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CC08
  c->lr=0x8016CC10u; f_80162F20(c); // 8016CC0C
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CC10
  c->r[4]=0u+0x00000000u; // 8016CC14
  {uint32_t ea=c->r[31]+0x0000006Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CC18
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CC1C
  c->lr=0x8016CC24u; f_80163A78(c); // 8016CC20
  c->r[3]=R32(c->r[28]+0x00000024u); // 8016CC24
  c->r[4]=0u+0x00000001u; // 8016CC28
  {uint32_t ea=c->r[31]+0x00000070u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016CC2C
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016CC30
  c->lr=0x8016CC38u; f_80163A78(c); // 8016CC34
L_8016CC38:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016CC38
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016CC3C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016CC40
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016CC44
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016CC48
  c->lr=c->r[0]; // 8016CC4C
  c->r[1]=c->r[1]+0x00000020u; // 8016CC50
  return; // 8016CC54
}

// CreateVoiceCoreSj__18CriSrVoiceRegSlaveFv
void f_8016CC58(Ctx* __restrict c) {
  trace_call(0x8016CC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CC58
  c->r[0]=c->lr; // 8016CC5C
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016CC60
  c->r[0]=c->r[3]+0x0000003Cu; // 8016CC64
  c->r[4]=R32(c->r[3]+0x00000028u); // 8016CC68
  c->r[5]=R32(c->r[3]+0x00000018u); // 8016CC6C
  c->r[4]=R32(c->r[4]+0x0000001Cu); // 8016CC70
  W32(c->r[1]+0x00000008u,c->r[4]); // 8016CC74
  c->r[4]=R32(c->r[3]+0x00000034u); // 8016CC78
  W32(c->r[1]+0x0000000Cu,c->r[4]); // 8016CC7C
  c->r[4]=R32(c->r[3]+0x00000038u); // 8016CC80
  W32(c->r[1]+0x00000010u,c->r[4]); // 8016CC84
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 8016CC88
  W32(c->r[1]+0x00000014u,c->r[4]); // 8016CC8C
  c->r[4]=R8(c->r[5]+0x00000000u); // 8016CC90
  W32(c->r[1]+0x00000018u,c->r[4]); // 8016CC94
  {uint32_t ea=c->r[5]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016CC98
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016CC9C
  c->r[4]=R32(c->r[3]+0x00000030u); // 8016CCA0
  c->r[3]=c->r[1]+0x00000008u; // 8016CCA4
  W32(c->r[1]+0x00000020u,c->r[4]); // 8016CCA8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016CCAC
  c->r[0]=R32(c->r[5]+0x0000008Cu); // 8016CCB0
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 8016CCB4
  c->r[0]=R32(c->r[5]+0x00000090u); // 8016CCB8
  W32(c->r[1]+0x00000030u,c->r[0]); // 8016CCBC
  c->r[0]=R32(c->r[5]+0x0000009Cu); // 8016CCC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016CCC4
  c->r[0]=R32(c->r[5]+0x00000094u); // 8016CCC8
  W32(c->r[1]+0x00000028u,c->r[0]); // 8016CCCC
  c->lr=0x8016CCD4u; f_8016DE90(c); // 8016CCD0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016CCD4
  c->lr=c->r[0]; // 8016CCD8
  c->r[1]=c->r[1]+0x00000040u; // 8016CCDC
  return; // 8016CCE0
}

// PutChunk__18CriSrVoiceRegSlaveFv
void f_8016CCE4(Ctx* __restrict c) {
  trace_call(0x8016CCE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CCE4
  c->r[0]=c->lr; // 8016CCE8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016CCEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016CCF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016CCF4
  c->r[30]=0u+0x00000000u; // 8016CCF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016CCFC
  c->r[29]=c->r[3]|c->r[3]; // 8016CD00
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016CD04
  c->r[28]=0u+0x00000000u; // 8016CD08
  c->r[31]=R32(c->r[3]+0x00000014u); // 8016CD0C
L_8016CD10:;
  c->r[0]=R32(c->r[29]+0x00000040u); // 8016CD10
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016CD14
  c->r[3]=c->r[31]+c->r[0]; // 8016CD18
  c->r[0]=R32(c->r[3]+0x00000018u); // 8016CD1C
  cmps(c,0,(int32_t)c->r[0],0); // 8016CD20
  if (crb(c,2)) { goto L_8016CD78; } // 8016CD24
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016CD28
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016CD2C
  c->r[0]=R32(c->r[3]+0x00000018u); // 8016CD30
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016CD34
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8016CD38
  c->lr=0x8016CD40u; f_8017E7E8(c); // 8016CD3C
  cmps(c,0,(int32_t)c->r[3],2); // 8016CD40
  if (!crb(c,1)) { goto L_8016CDB4; } // 8016CD44
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8016CD48
  c->r[5]=c->r[1]+0x00000008u; // 8016CD4C
  c->r[4]=0u+0x00000001u; // 8016CD50
  c->lr=0x8016CD58u; f_8017DDA4(c); // 8016CD54
  c->r[0]=R32(c->r[29]+0x00000040u); // 8016CD58
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016CD5C
  c->r[3]=c->r[31]+c->r[0]; // 8016CD60
  W32(c->r[3]+0x00000008u,c->r[28]); // 8016CD64
  c->r[0]=R32(c->r[29]+0x00000040u); // 8016CD68
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016CD6C
  c->r[3]=c->r[31]+c->r[0]; // 8016CD70
  W32(c->r[3]+0x00000018u,c->r[28]); // 8016CD74
L_8016CD78:;
  c->r[3]=R32(c->r[29]+0x00000040u); // 8016CD78
  c->r[4]=c->r[3]+0x00000001u; // 8016CD7C
  c->r[0]=rotl(c->r[4],2)&0x0000000Cu; // 8016CD80
  c->r[3]=c->r[31]+c->r[0]; // 8016CD84
  c->r[4]=rotl(c->r[4],0)&0x00000003u; // 8016CD88
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016CD8C
  cmps(c,0,(int32_t)c->r[0],0); // 8016CD90
  if (crb(c,2)) { goto L_8016CDB4; } // 8016CD94
  W32(c->r[29]+0x00000040u,c->r[4]); // 8016CD98
  c->r[30]=c->r[30]+0x00000001u; // 8016CD9C
  cmpu(c,0,c->r[30],0x00000004u); // 8016CDA0
  c->r[3]=R32(c->r[31]+0x00000048u); // 8016CDA4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016CDA8
  W32(c->r[31]+0x00000048u,c->r[0]); // 8016CDAC
  if (crb(c,0)) { IRQCHK(c); goto L_8016CD10; } // 8016CDB0
L_8016CDB4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016CDB4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016CDB8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016CDBC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016CDC0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016CDC4
  c->lr=c->r[0]; // 8016CDC8
  c->r[1]=c->r[1]+0x00000020u; // 8016CDCC
  return; // 8016CDD0
}

// GetChunk__18CriSrVoiceRegSlaveFv
void f_8016CDD4(Ctx* __restrict c) {
  trace_call(0x8016CDD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CDD4
  c->r[0]=c->lr; // 8016CDD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016CDDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016CDE0
  c->r[31]=0u+0x80000000u; // 8016CDE4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016CDE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016CDEC
  c->r[29]=0u+0x00000000u; // 8016CDF0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016CDF4
  c->r[28]=c->r[3]|c->r[3]; // 8016CDF8
  c->r[30]=R32(c->r[3]+0x00000014u); // 8016CDFC
L_8016CE00:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 8016CE00
  c->r[5]=c->r[31]+0xFFFFFFFFu; // 8016CE04
  c->r[6]=c->r[1]+0x00000008u; // 8016CE08
  c->r[4]=0u+0x00000000u; // 8016CE0C
  c->lr=0x8016CE14u; f_8017DD84(c); // 8016CE10
  c->r[7]=R32(c->r[1]+0x0000000Cu); // 8016CE14
  cmps(c,0,(int32_t)c->r[7],0); // 8016CE18
  if (crb(c,2)) { goto L_8016CECC; } // 8016CE1C
  c->r[5]=R32(c->r[28]+0x00000044u); // 8016CE20
  c->r[4]=R32(c->r[1]+0x00000008u); // 8016CE24
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 8016CE28
  c->r[6]=c->r[30]+c->r[0]; // 8016CE2C
  c->r[0]=R32(c->r[6]+0x00000028u); // 8016CE30
  c->r[3]=R32(c->r[6]+0x00000038u); // 8016CE34
  c->r[0]=c->r[0]+c->r[3]; // 8016CE38
  cmpu(c,0,c->r[4],c->r[0]); // 8016CE3C
  if (!crb(c,2)) { goto L_8016CE50; } // 8016CE40
  c->r[0]=c->r[3]+c->r[7]; // 8016CE44
  W32(c->r[6]+0x00000038u,c->r[0]); // 8016CE48
  goto L_8016CEC0; // 8016CE4C
L_8016CE50:;
  c->r[0]=R32(c->r[30]+0x0000004Cu); // 8016CE50
  cmpu(c,0,c->r[0],0x00000004u); // 8016CE54
  if (!crb(c,0)) { goto L_8016CEC0; } // 8016CE58
  c->r[4]=c->r[5]+0x00000001u; // 8016CE5C
  c->r[0]=rotl(c->r[4],2)&0x0000000Cu; // 8016CE60
  c->r[3]=c->r[30]+c->r[0]; // 8016CE64
  c->r[4]=rotl(c->r[4],0)&0x00000003u; // 8016CE68
  c->r[0]=R32(c->r[3]+0x00000028u); // 8016CE6C
  cmps(c,0,(int32_t)c->r[0],0); // 8016CE70
  if (!crb(c,2)) { goto L_8016CEB0; } // 8016CE74
  W32(c->r[28]+0x00000044u,c->r[4]); // 8016CE78
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 8016CE7C
  c->r[3]=c->r[30]+c->r[0]; // 8016CE80
  c->r[0]=R32(c->r[1]+0x00000008u); // 8016CE84
  W32(c->r[3]+0x00000028u,c->r[0]); // 8016CE88
  c->r[0]=R32(c->r[28]+0x00000044u); // 8016CE8C
  c->r[4]=R32(c->r[1]+0x0000000Cu); // 8016CE90
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016CE94
  c->r[3]=c->r[30]+c->r[0]; // 8016CE98
  W32(c->r[3]+0x00000038u,c->r[4]); // 8016CE9C
  c->r[3]=R32(c->r[30]+0x0000004Cu); // 8016CEA0
  c->r[0]=c->r[3]+0x00000001u; // 8016CEA4
  W32(c->r[30]+0x0000004Cu,c->r[0]); // 8016CEA8
  goto L_8016CEC0; // 8016CEAC
L_8016CEB0:;
  c->r[3]=R32(c->r[28]+0x0000002Cu); // 8016CEB0
  c->r[5]=c->r[1]+0x00000008u; // 8016CEB4
  c->r[4]=0u+0x00000001u; // 8016CEB8
  c->lr=0x8016CEC0u; f_8017DD94(c); // 8016CEBC
L_8016CEC0:;
  c->r[29]=c->r[29]+0x00000001u; // 8016CEC0
  cmpu(c,0,c->r[29],0x00000004u); // 8016CEC4
  if (crb(c,0)) { IRQCHK(c); goto L_8016CE00; } // 8016CEC8
L_8016CECC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016CECC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016CED0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016CED4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016CED8
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016CEDC
  c->lr=c->r[0]; // 8016CEE0
  c->r[1]=c->r[1]+0x00000020u; // 8016CEE4
  return; // 8016CEE8
}

// Create__25CriSrVoiceRegManagerSlaveFP15_criheap_structR13CriSrObjSlaveUlUlPQ213CriSrVoiceReg18ComponentAddressesPPv
void f_8016CEEC(Ctx* __restrict c) {
  trace_call(0x8016CEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016CEEC
  c->r[0]=c->lr; // 8016CEF0
  c->r[9]=0u+0x802D0000u; // 8016CEF4
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016CEF8
  c->r[9]=c->r[9]+0x000002A8u; // 8016CEFC
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016CF00
  c->r[24]=c->r[3]|c->r[3]; // 8016CF04
  c->r[25]=c->r[4]|c->r[4]; // 8016CF08
  c->r[26]=c->r[5]|c->r[5]; // 8016CF0C
  c->r[27]=c->r[6]|c->r[6]; // 8016CF10
  c->r[31]=c->r[1]|c->r[1]; // 8016CF14
  c->r[28]=c->r[7]|c->r[7]; // 8016CF18
  c->r[29]=c->r[8]|c->r[8]; // 8016CF1C
  c->r[4]=c->r[24]|c->r[24]; // 8016CF20
  c->r[5]=c->r[9]+0x0000001Du; // 8016CF24
  c->r[3]=0u+0x00000030u; // 8016CF28
  c->r[6]=0u+0x00000004u; // 8016CF2C
  c->lr=0x8016CF34u; f_8017BEDC(c); // 8016CF30
  cmps(c,0,(int32_t)c->r[3],0); // 8016CF34
  c->r[30]=c->r[3]|c->r[3]; // 8016CF38
  if (crb(c,2)) { goto L_8016CF78; } // 8016CF3C
  W32(c->r[3]+0x00000004u,c->r[26]); // 8016CF40
  c->r[4]=0u+0x80330000u; // 8016CF44
  c->r[4]=c->r[4]+0x00001788u; // 8016CF48
  c->r[0]=0u+0x00000000u; // 8016CF4C
  W32(c->r[3]+0x00000008u,c->r[27]); // 8016CF50
  W32(c->r[3]+0x00000000u,c->r[4]); // 8016CF54
  W32(c->r[3]+0x0000000Cu,c->r[24]); // 8016CF58
  W32(c->r[3]+0x00000018u,c->r[0]); // 8016CF5C
  W32(c->r[3]+0x0000001Cu,c->r[25]); // 8016CF60
  W32(c->r[3]+0x00000020u,c->r[29]); // 8016CF64
  W32(c->r[3]+0x00000024u,c->r[0]); // 8016CF68
  W32(c->r[3]+0x00000028u,c->r[0]); // 8016CF6C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016CF70
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 8016CF74
L_8016CF78:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016CF78
  if (!crb(c,2)) { goto L_8016CFA0; } // 8016CF7C
  c->r[4]=0u+0x802D0000u; // 8016CF80
  c->r[3]=0u+0x00000000u; // 8016CF84
  c->r[4]=c->r[4]+0x000002A8u; // 8016CF88
  c->r[5]=0u+0xFFFFFFFDu; // 8016CF8C
  c->r[4]=c->r[4]+0x00000037u; // 8016CF90
  c->lr=0x8016CF98u; f_8017968C(c); // 8016CF94
  c->r[3]=0u+0x00000000u; // 8016CF98
  goto L_8016CFE4; // 8016CF9C
L_8016CFA0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016CFA0
  c->r[3]=c->r[30]|c->r[30]; // 8016CFA4
  c->r[4]=c->r[25]|c->r[25]; // 8016CFA8
  c->r[5]=c->r[28]|c->r[28]; // 8016CFAC
  c->r[12]=R32(c->r[12]+0x00000034u); // 8016CFB0
  c->ctr=c->r[12]; // 8016CFB4
  if (true) { c->lr=0x8016CFBCu; dispatch(c,c->ctr); } // 8016CFB8
  cmps(c,0,(int32_t)c->r[3],0); // 8016CFBC
  if (!crb(c,2)) { goto L_8016CFE0; } // 8016CFC0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016CFC4
  c->r[3]=c->r[30]|c->r[30]; // 8016CFC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 8016CFCC
  c->ctr=c->r[12]; // 8016CFD0
  if (true) { c->lr=0x8016CFD8u; dispatch(c,c->ctr); } // 8016CFD4
  c->r[3]=0u+0x00000000u; // 8016CFD8
  goto L_8016CFE4; // 8016CFDC
L_8016CFE0:;
  c->r[3]=c->r[30]|c->r[30]; // 8016CFE0
L_8016CFE4:;
  c->r[10]=c->r[31]|c->r[31]; // 8016CFE4
  {uint32_t ea=c->r[10]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016CFE8
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016CFEC
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016CFF0
  c->r[1]=c->r[10]|c->r[10]; // 8016CFF4
  c->lr=c->r[0]; // 8016CFF8
  return; // 8016CFFC
}

// Destroy__25CriSrVoiceRegManagerSlaveFv
void f_8016D000(Ctx* __restrict c) {
  trace_call(0x8016D000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D000
  c->r[0]=c->lr; // 8016D004
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D008
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D00C
  c->r[31]=c->r[3]|c->r[3]; // 8016D010
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016D014
  c->r[12]=R32(c->r[12]+0x00000038u); // 8016D018
  c->ctr=c->r[12]; // 8016D01C
  if (true) { c->lr=0x8016D024u; dispatch(c,c->ctr); } // 8016D020
  cmps(c,0,(int32_t)c->r[31],0); // 8016D024
  if (crb(c,2)) { goto L_8016D044; } // 8016D028
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D02C
  c->r[3]=c->r[31]|c->r[31]; // 8016D030
  c->r[4]=0u+0x00000001u; // 8016D034
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016D038
  c->ctr=c->r[12]; // 8016D03C
  if (true) { c->lr=0x8016D044u; dispatch(c,c->ctr); } // 8016D040
L_8016D044:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D044
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D048
  c->lr=c->r[0]; // 8016D04C
  c->r[1]=c->r[1]+0x00000010u; // 8016D050
  return; // 8016D054
}

// __dt__25CriSrVoiceRegManagerSlaveFv
void f_8016D058(Ctx* __restrict c) {
  trace_call(0x8016D058u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D058
  c->r[0]=c->lr; // 8016D05C
  cmps(c,0,(int32_t)c->r[3],0); // 8016D060
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D064
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D068
  c->r[31]=c->r[3]|c->r[3]; // 8016D06C
  if (crb(c,2)) { goto L_8016D084; } // 8016D070
  cmps(c,0,(int32_t)c->r[4],0); // 8016D074
  if (!crb(c,1)) { goto L_8016D084; } // 8016D078
  c->r[4]=0u+0x00000030u; // 8016D07C
  c->lr=0x8016D084u; f_8017BFE8(c); // 8016D080
L_8016D084:;
  c->r[3]=c->r[31]|c->r[31]; // 8016D084
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D088
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D08C
  c->lr=c->r[0]; // 8016D090
  c->r[1]=c->r[1]+0x00000010u; // 8016D094
  return; // 8016D098
}

// Initialize__25CriSrVoiceRegManagerSlaveFR13CriSrObjSlavePQ213CriSrVoiceReg18ComponentAddresses
void f_8016D09C(Ctx* __restrict c) {
  trace_call(0x8016D09Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D09C
  c->r[0]=c->lr; // 8016D0A0
  c->r[6]=0u+0x00000004u; // 8016D0A4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D0A8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D0AC
  c->r[31]=0u+0x802D0000u; // 8016D0B0
  c->r[31]=c->r[31]+0x000002A8u; // 8016D0B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016D0B8
  c->r[30]=c->r[5]|c->r[5]; // 8016D0BC
  c->r[5]=c->r[31]+0x00000041u; // 8016D0C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016D0C4
  c->r[29]=c->r[4]|c->r[4]; // 8016D0C8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016D0CC
  c->r[28]=c->r[3]|c->r[3]; // 8016D0D0
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016D0D4
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016D0D8
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8016D0DC
  c->lr=0x8016D0E4u; f_8017C100(c); // 8016D0E0
  cmps(c,0,(int32_t)c->r[3],0); // 8016D0E4
  W32(c->r[28]+0x00000018u,c->r[3]); // 8016D0E8
  if (!crb(c,2)) { goto L_8016D108; } // 8016D0EC
  c->r[4]=c->r[31]+0x00000055u; // 8016D0F0
  c->r[3]=0u+0x00000000u; // 8016D0F4
  c->r[5]=0u+0xFFFFFFFDu; // 8016D0F8
  c->lr=0x8016D100u; f_8017968C(c); // 8016D0FC
  c->r[3]=0u+0x00000000u; // 8016D100
  goto L_8016D16C; // 8016D104
L_8016D108:;
  c->r[6]=0u+0x00000000u; // 8016D108
  c->r[5]=0u+0x00000000u; // 8016D10C
  c->r[4]=0u+0x00000000u; // 8016D110
  goto L_8016D128; // 8016D114
L_8016D118:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 8016D118
  c->r[6]=c->r[6]+0x00000001u; // 8016D11C
  W32(c->r[3]+c->r[5],c->r[4]); // 8016D120
  c->r[5]=c->r[5]+0x00000004u; // 8016D124
L_8016D128:;
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016D128
  cmpu(c,0,c->r[6],c->r[0]); // 8016D12C
  if (crb(c,0)) { IRQCHK(c); goto L_8016D118; } // 8016D130
  c->r[3]=c->r[28]|c->r[28]; // 8016D134
  c->r[4]=c->r[29]|c->r[29]; // 8016D138
  c->r[5]=c->r[30]|c->r[30]; // 8016D13C
  c->lr=0x8016D144u; f_8016D4D4(c); // 8016D140
  cmps(c,0,(int32_t)c->r[3],0); // 8016D144
  if (!crb(c,2)) { goto L_8016D168; } // 8016D148
  c->r[12]=R32(c->r[28]+0x00000000u); // 8016D14C
  c->r[3]=c->r[28]|c->r[28]; // 8016D150
  c->r[12]=R32(c->r[12]+0x00000038u); // 8016D154
  c->ctr=c->r[12]; // 8016D158
  if (true) { c->lr=0x8016D160u; dispatch(c,c->ctr); } // 8016D15C
  c->r[3]=0u+0x00000000u; // 8016D160
  goto L_8016D16C; // 8016D164
L_8016D168:;
  c->r[3]=0u+0x00000001u; // 8016D168
L_8016D16C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D16C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016D170
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016D174
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016D178
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016D17C
  c->lr=c->r[0]; // 8016D180
  c->r[1]=c->r[1]+0x00000020u; // 8016D184
  return; // 8016D188
}

// Finalize__25CriSrVoiceRegManagerSlaveFv
void f_8016D18C(Ctx* __restrict c) {
  trace_call(0x8016D18Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D18C
  c->r[0]=c->lr; // 8016D190
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D194
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016D198
  c->r[31]=c->r[3]|c->r[3]; // 8016D19C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016D1A0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016D1A4
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016D1A8
  c->r[30]=R32(c->r[3]+0x00000024u); // 8016D1AC
  goto L_8016D228; // 8016D1B0
L_8016D1B4:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8016D1B4
  c->lr=0x8016D1BCu; f_80172E68(c); // 8016D1B8
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016D1BC
  cmpu(c,0,c->r[30],c->r[0]); // 8016D1C0
  if (!crb(c,2)) { goto L_8016D1D0; } // 8016D1C4
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016D1C8
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016D1CC
L_8016D1D0:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 8016D1D0
  cmpu(c,0,c->r[30],c->r[0]); // 8016D1D4
  if (!crb(c,2)) { goto L_8016D1E4; } // 8016D1D8
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016D1DC
  W32(c->r[31]+0x00000028u,c->r[0]); // 8016D1E0
L_8016D1E4:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016D1E4
  c->r[29]=R32(c->r[30]+0x00000004u); // 8016D1E8
  cmps(c,0,(int32_t)c->r[3],0); // 8016D1EC
  if (crb(c,2)) { goto L_8016D1F8; } // 8016D1F0
  W32(c->r[3]+0x00000004u,c->r[29]); // 8016D1F4
L_8016D1F8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016D1F8
  cmps(c,0,(int32_t)c->r[3],0); // 8016D1FC
  if (crb(c,2)) { goto L_8016D20C; } // 8016D200
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016D204
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016D208
L_8016D20C:;
  c->r[3]=c->r[30]|c->r[30]; // 8016D20C
  c->r[4]=0u+0x0000000Cu; // 8016D210
  c->lr=0x8016D218u; f_8017BFE8(c); // 8016D214
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8016D218
  c->r[30]=c->r[29]|c->r[29]; // 8016D21C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016D220
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8016D224
L_8016D228:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016D228
  if (!crb(c,2)) { IRQCHK(c); goto L_8016D1B4; } // 8016D22C
  c->r[0]=R32(c->r[31]+0x00000018u); // 8016D230
  cmps(c,0,(int32_t)c->r[0],0); // 8016D234
  if (crb(c,2)) { goto L_8016D288; } // 8016D238
  c->r[29]=0u+0x00000000u; // 8016D23C
  c->r[28]=0u+0x00000000u; // 8016D240
  c->r[30]=0u+0x00000000u; // 8016D244
  goto L_8016D27C; // 8016D248
L_8016D24C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D24C
  c->r[3]=R32(c->r[3]+c->r[28]); // 8016D250
  cmps(c,0,(int32_t)c->r[3],0); // 8016D254
  if (crb(c,2)) { goto L_8016D274; } // 8016D258
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016D25C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016D260
  c->ctr=c->r[12]; // 8016D264
  if (true) { c->lr=0x8016D26Cu; dispatch(c,c->ctr); } // 8016D268
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D26C
  W32(c->r[3]+c->r[28],c->r[30]); // 8016D270
L_8016D274:;
  c->r[28]=c->r[28]+0x00000004u; // 8016D274
  c->r[29]=c->r[29]+0x00000001u; // 8016D278
L_8016D27C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D27C
  cmpu(c,0,c->r[29],c->r[0]); // 8016D280
  if (crb(c,0)) { IRQCHK(c); goto L_8016D24C; } // 8016D284
L_8016D288:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8016D288
  cmps(c,0,(int32_t)c->r[3],0); // 8016D28C
  if (crb(c,2)) { goto L_8016D2A0; } // 8016D290
  c->lr=0x8016D298u; f_8017C424(c); // 8016D294
  c->r[0]=0u+0x00000000u; // 8016D298
  W32(c->r[31]+0x00000010u,c->r[0]); // 8016D29C
L_8016D2A0:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016D2A0
  cmps(c,0,(int32_t)c->r[4],0); // 8016D2A4
  if (crb(c,2)) { goto L_8016D2BC; } // 8016D2A8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016D2AC
  c->lr=0x8016D2B4u; f_8017C228(c); // 8016D2B0
  c->r[0]=0u+0x00000000u; // 8016D2B4
  W32(c->r[31]+0x00000014u,c->r[0]); // 8016D2B8
L_8016D2BC:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 8016D2BC
  cmps(c,0,(int32_t)c->r[4],0); // 8016D2C0
  if (crb(c,2)) { goto L_8016D2D8; } // 8016D2C4
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016D2C8
  c->lr=0x8016D2D0u; f_8017C228(c); // 8016D2CC
  c->r[0]=0u+0x00000000u; // 8016D2D0
  W32(c->r[31]+0x00000018u,c->r[0]); // 8016D2D4
L_8016D2D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D2D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016D2DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016D2E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016D2E4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016D2E8
  c->lr=c->r[0]; // 8016D2EC
  c->r[1]=c->r[1]+0x00000020u; // 8016D2F0
  return; // 8016D2F4
}

// Execute__25CriSrVoiceRegManagerSlaveFv
void f_8016D2F8(Ctx* __restrict c) {
  trace_call(0x8016D2F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D2F8
  c->r[0]=c->lr; // 8016D2FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D300
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016D304
  c->r[31]=c->r[3]|c->r[3]; // 8016D308
  c->r[30]=R32(c->r[3]+0x00000024u); // 8016D30C
  goto L_8016D3A8; // 8016D310
L_8016D314:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8016D314
  c->lr=0x8016D31Cu; f_80173348(c); // 8016D318
  c->r[3]=R32(c->r[30]+0x00000008u); // 8016D31C
  c->lr=0x8016D324u; f_80173314(c); // 8016D320
  cmps(c,0,(int32_t)c->r[3],1); // 8016D324
  if (!crb(c,2)) { goto L_8016D3A4; } // 8016D328
  c->r[3]=R32(c->r[30]+0x00000008u); // 8016D32C
  c->lr=0x8016D334u; f_80172E68(c); // 8016D330
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016D334
  cmpu(c,0,c->r[30],c->r[0]); // 8016D338
  if (!crb(c,2)) { goto L_8016D348; } // 8016D33C
  c->r[0]=R32(c->r[30]+0x00000004u); // 8016D340
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016D344
L_8016D348:;
  c->r[0]=R32(c->r[31]+0x00000028u); // 8016D348
  cmpu(c,0,c->r[30],c->r[0]); // 8016D34C
  if (!crb(c,2)) { goto L_8016D35C; } // 8016D350
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016D354
  W32(c->r[31]+0x00000028u,c->r[0]); // 8016D358
L_8016D35C:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016D35C
  c->r[29]=R32(c->r[30]+0x00000004u); // 8016D360
  cmps(c,0,(int32_t)c->r[3],0); // 8016D364
  if (crb(c,2)) { goto L_8016D370; } // 8016D368
  W32(c->r[3]+0x00000004u,c->r[29]); // 8016D36C
L_8016D370:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016D370
  cmps(c,0,(int32_t)c->r[3],0); // 8016D374
  if (crb(c,2)) { goto L_8016D384; } // 8016D378
  c->r[0]=R32(c->r[30]+0x00000000u); // 8016D37C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016D380
L_8016D384:;
  c->r[3]=c->r[30]|c->r[30]; // 8016D384
  c->r[4]=0u+0x0000000Cu; // 8016D388
  c->lr=0x8016D390u; f_8017BFE8(c); // 8016D38C
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 8016D390
  c->r[30]=c->r[29]|c->r[29]; // 8016D394
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016D398
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8016D39C
  goto L_8016D3A8; // 8016D3A0
L_8016D3A4:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8016D3A4
L_8016D3A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016D3A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8016D314; } // 8016D3AC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D3B0
  c->r[3]=c->r[31]|c->r[31]; // 8016D3B4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8016D3B8
  c->ctr=c->r[12]; // 8016D3BC
  if (true) { c->lr=0x8016D3C4u; dispatch(c,c->ctr); } // 8016D3C0
  c->r[0]=R32(c->r[31]+0x00000020u); // 8016D3C4
  cmps(c,0,(int32_t)c->r[0],0); // 8016D3C8
  if (crb(c,2)) { goto L_8016D450; } // 8016D3CC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D3D0
  c->r[3]=c->r[31]|c->r[31]; // 8016D3D4
  c->r[12]=R32(c->r[12]+0x00000044u); // 8016D3D8
  c->ctr=c->r[12]; // 8016D3DC
  if (true) { c->lr=0x8016D3E4u; dispatch(c,c->ctr); } // 8016D3E0
  c->r[30]=c->r[3]|c->r[3]; // 8016D3E4
L_8016D3E8:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016D3E8
  if (crb(c,2)) { goto L_8016D450; } // 8016D3EC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D3F0
  c->r[3]=c->r[31]|c->r[31]; // 8016D3F4
  c->r[4]=c->r[30]|c->r[30]; // 8016D3F8
  c->r[12]=R32(c->r[12]+0x00000048u); // 8016D3FC
  c->ctr=c->r[12]; // 8016D400
  if (true) { c->lr=0x8016D408u; dispatch(c,c->ctr); } // 8016D404
  cmps(c,0,(int32_t)c->r[3],0); // 8016D408
  c->r[29]=c->r[3]|c->r[3]; // 8016D40C
  if (crb(c,2)) { goto L_8016D450; } // 8016D410
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8016D414
  cmps(c,0,(int32_t)c->r[0],1); // 8016D418
  if (crb(c,2)) { goto L_8016D42C; } // 8016D41C
  c->r[3]=c->r[31]|c->r[31]; // 8016D420
  c->r[4]=c->r[29]|c->r[29]; // 8016D424
  c->lr=0x8016D42Cu; f_8016D91C(c); // 8016D428
L_8016D42C:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D42C
  c->r[4]=c->r[30]|c->r[30]; // 8016D430
  c->r[3]=c->r[31]|c->r[31]; // 8016D434
  c->r[5]=c->r[29]|c->r[29]; // 8016D438
  c->r[12]=R32(c->r[12]+0x0000004Cu); // 8016D43C
  c->r[30]=R32(c->r[29]+0x00000004u); // 8016D440
  c->ctr=c->r[12]; // 8016D444
  if (true) { c->lr=0x8016D44Cu; dispatch(c,c->ctr); } // 8016D448
  IRQCHK(c); goto L_8016D3E8; // 8016D44C
L_8016D450:;
  c->r[28]=0u+0x00000000u; // 8016D450
  c->r[29]=0u+0x00000000u; // 8016D454
  c->r[30]=0u+0x00000000u; // 8016D458
  goto L_8016D480; // 8016D45C
L_8016D460:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D460
  c->r[27]=R32(c->r[3]+c->r[29]); // 8016D464
  c->r[3]=c->r[27]|c->r[27]; // 8016D468
  c->lr=0x8016D470u; f_8016BAA8(c); // 8016D46C
  c->r[3]=R32(c->r[27]+0x00000014u); // 8016D470
  c->r[29]=c->r[29]+0x00000004u; // 8016D474
  c->r[28]=c->r[28]+0x00000001u; // 8016D478
  W32(c->r[3]+0x00000004u,c->r[30]); // 8016D47C
L_8016D480:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D480
  cmpu(c,0,c->r[28],c->r[0]); // 8016D484
  if (crb(c,0)) { IRQCHK(c); goto L_8016D460; } // 8016D488
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D48C
  c->r[3]=c->r[31]|c->r[31]; // 8016D490
  c->r[12]=R32(c->r[12]+0x00000030u); // 8016D494
  c->ctr=c->r[12]; // 8016D498
  if (true) { c->lr=0x8016D4A0u; dispatch(c,c->ctr); } // 8016D49C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016D4A0
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D4A4
  c->lr=c->r[0]; // 8016D4A8
  c->r[1]=c->r[1]+0x00000020u; // 8016D4AC
  return; // 8016D4B0
}

// Lock__25CriSrVoiceRegManagerSlaveFv
void f_8016D4B4(Ctx* __restrict c) {
  trace_call(0x8016D4B4u);
  return; // 8016D4B4
}

// Unlock__25CriSrVoiceRegManagerSlaveFv
void f_8016D4B8(Ctx* __restrict c) {
  trace_call(0x8016D4B8u);
  return; // 8016D4B8
}

// GetControlInfoFromMaster__25CriSrVoiceRegManagerSlaveFUl
void f_8016D4BC(Ctx* __restrict c) {
  trace_call(0x8016D4BCu);
  return; // 8016D4BC
}

// PutControlInfoToMaster__25CriSrVoiceRegManagerSlaveFUl
void f_8016D4C0(Ctx* __restrict c) {
  trace_call(0x8016D4C0u);
  return; // 8016D4C0
}

// GetParametersFromMaster__25CriSrVoiceRegManagerSlaveFUl
void f_8016D4C4(Ctx* __restrict c) {
  trace_call(0x8016D4C4u);
  return; // 8016D4C4
}

// PutParametersToMaster__25CriSrVoiceRegManagerSlaveFUl
void f_8016D4C8(Ctx* __restrict c) {
  trace_call(0x8016D4C8u);
  return; // 8016D4C8
}

// GetBufferFromMaster__25CriSrVoiceRegManagerSlaveFUl
void f_8016D4CC(Ctx* __restrict c) {
  trace_call(0x8016D4CCu);
  return; // 8016D4CC
}

// PutBufferToMaster__25CriSrVoiceRegManagerSlaveFUl
void f_8016D4D0(Ctx* __restrict c) {
  trace_call(0x8016D4D0u);
  return; // 8016D4D0
}

// CreateSrVoiceRegSlaves__25CriSrVoiceRegManagerSlaveFR13CriSrObjSlavePQ213CriSrVoiceReg18ComponentAddresses
void f_8016D4D4(Ctx* __restrict c) {
  trace_call(0x8016D4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D4D4
  c->r[0]=c->lr; // 8016D4D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D4DC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016D4E0
  c->r[31]=c->r[3]|c->r[3]; // 8016D4E4
  c->r[26]=c->r[4]|c->r[4]; // 8016D4E8
  c->r[27]=c->r[5]|c->r[5]; // 8016D4EC
  c->r[0]=R32(c->r[3]+0x00000018u); // 8016D4F0
  cmps(c,0,(int32_t)c->r[0],0); // 8016D4F4
  if (!crb(c,2)) { goto L_8016D504; } // 8016D4F8
  c->r[3]=0u+0x00000000u; // 8016D4FC
  goto L_8016D77C; // 8016D500
L_8016D504:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016D504
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8016D508
  c->ctr=c->r[12]; // 8016D50C
  if (true) { c->lr=0x8016D514u; dispatch(c,c->ctr); } // 8016D510
  c->r[30]=0u+0x802D0000u; // 8016D514
  c->r[28]=c->r[3]|c->r[3]; // 8016D518
  c->r[30]=c->r[30]+0x000002A8u; // 8016D51C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016D520
  c->r[4]=c->r[28]|c->r[28]; // 8016D524
  c->r[6]=0u+0x00000004u; // 8016D528
  c->r[5]=c->r[30]+0x0000005Fu; // 8016D52C
  c->lr=0x8016D534u; f_8017C100(c); // 8016D530
  cmps(c,0,(int32_t)c->r[3],0); // 8016D534
  W32(c->r[31]+0x00000014u,c->r[3]); // 8016D538
  if (!crb(c,2)) { goto L_8016D5E4; } // 8016D53C
  c->r[4]=c->r[30]+0x00000068u; // 8016D540
  c->r[3]=0u+0x00000000u; // 8016D544
  c->r[5]=0u+0xFFFFFFFDu; // 8016D548
  c->lr=0x8016D550u; f_8017968C(c); // 8016D54C
  c->r[0]=R32(c->r[31]+0x00000018u); // 8016D550
  cmps(c,0,(int32_t)c->r[0],0); // 8016D554
  if (crb(c,2)) { goto L_8016D5A8; } // 8016D558
  c->r[29]=0u+0x00000000u; // 8016D55C
  c->r[28]=0u+0x00000000u; // 8016D560
  c->r[30]=0u+0x00000000u; // 8016D564
  goto L_8016D59C; // 8016D568
L_8016D56C:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D56C
  c->r[3]=R32(c->r[3]+c->r[28]); // 8016D570
  cmps(c,0,(int32_t)c->r[3],0); // 8016D574
  if (crb(c,2)) { goto L_8016D594; } // 8016D578
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016D57C
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016D580
  c->ctr=c->r[12]; // 8016D584
  if (true) { c->lr=0x8016D58Cu; dispatch(c,c->ctr); } // 8016D588
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D58C
  W32(c->r[3]+c->r[28],c->r[30]); // 8016D590
L_8016D594:;
  c->r[28]=c->r[28]+0x00000004u; // 8016D594
  c->r[29]=c->r[29]+0x00000001u; // 8016D598
L_8016D59C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D59C
  cmpu(c,0,c->r[29],c->r[0]); // 8016D5A0
  if (crb(c,0)) { IRQCHK(c); goto L_8016D56C; } // 8016D5A4
L_8016D5A8:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8016D5A8
  cmps(c,0,(int32_t)c->r[3],0); // 8016D5AC
  if (crb(c,2)) { goto L_8016D5C0; } // 8016D5B0
  c->lr=0x8016D5B8u; f_8017C424(c); // 8016D5B4
  c->r[0]=0u+0x00000000u; // 8016D5B8
  W32(c->r[31]+0x00000010u,c->r[0]); // 8016D5BC
L_8016D5C0:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016D5C0
  cmps(c,0,(int32_t)c->r[4],0); // 8016D5C4
  if (crb(c,2)) { goto L_8016D5DC; } // 8016D5C8
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016D5CC
  c->lr=0x8016D5D4u; f_8017C228(c); // 8016D5D0
  c->r[0]=0u+0x00000000u; // 8016D5D4
  W32(c->r[31]+0x00000014u,c->r[0]); // 8016D5D8
L_8016D5DC:;
  c->r[3]=0u+0x00000000u; // 8016D5DC
  goto L_8016D77C; // 8016D5E0
L_8016D5E4:;
  c->r[4]=c->r[28]|c->r[28]; // 8016D5E4
  c->lr=0x8016D5ECu; f_8017C2EC(c); // 8016D5E8
  cmps(c,0,(int32_t)c->r[3],0); // 8016D5EC
  W32(c->r[31]+0x00000010u,c->r[3]); // 8016D5F0
  if (!crb(c,2)) { goto L_8016D68C; } // 8016D5F4
  c->r[0]=R32(c->r[31]+0x00000018u); // 8016D5F8
  cmps(c,0,(int32_t)c->r[0],0); // 8016D5FC
  if (crb(c,2)) { goto L_8016D650; } // 8016D600
  c->r[29]=0u+0x00000000u; // 8016D604
  c->r[28]=0u+0x00000000u; // 8016D608
  c->r[30]=0u+0x00000000u; // 8016D60C
  goto L_8016D644; // 8016D610
L_8016D614:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D614
  c->r[3]=R32(c->r[3]+c->r[28]); // 8016D618
  cmps(c,0,(int32_t)c->r[3],0); // 8016D61C
  if (crb(c,2)) { goto L_8016D63C; } // 8016D620
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016D624
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016D628
  c->ctr=c->r[12]; // 8016D62C
  if (true) { c->lr=0x8016D634u; dispatch(c,c->ctr); } // 8016D630
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D634
  W32(c->r[3]+c->r[28],c->r[30]); // 8016D638
L_8016D63C:;
  c->r[28]=c->r[28]+0x00000004u; // 8016D63C
  c->r[29]=c->r[29]+0x00000001u; // 8016D640
L_8016D644:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D644
  cmpu(c,0,c->r[29],c->r[0]); // 8016D648
  if (crb(c,0)) { IRQCHK(c); goto L_8016D614; } // 8016D64C
L_8016D650:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8016D650
  cmps(c,0,(int32_t)c->r[3],0); // 8016D654
  if (crb(c,2)) { goto L_8016D668; } // 8016D658
  c->lr=0x8016D660u; f_8017C424(c); // 8016D65C
  c->r[0]=0u+0x00000000u; // 8016D660
  W32(c->r[31]+0x00000010u,c->r[0]); // 8016D664
L_8016D668:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016D668
  cmps(c,0,(int32_t)c->r[4],0); // 8016D66C
  if (crb(c,2)) { goto L_8016D684; } // 8016D670
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016D674
  c->lr=0x8016D67Cu; f_8017C228(c); // 8016D678
  c->r[0]=0u+0x00000000u; // 8016D67C
  W32(c->r[31]+0x00000014u,c->r[0]); // 8016D680
L_8016D684:;
  c->r[3]=0u+0x00000000u; // 8016D684
  goto L_8016D77C; // 8016D688
L_8016D68C:;
  c->r[28]=0u+0x00000000u; // 8016D68C
  c->r[29]=0u+0x00000000u; // 8016D690
  goto L_8016D76C; // 8016D694
L_8016D698:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016D698
  c->r[3]=c->r[31]|c->r[31]; // 8016D69C
  c->r[4]=c->r[26]|c->r[26]; // 8016D6A0
  c->r[5]=c->r[28]|c->r[28]; // 8016D6A4
  c->r[12]=R32(c->r[12]+0x00000040u); // 8016D6A8
  c->r[6]=c->r[27]|c->r[27]; // 8016D6AC
  c->ctr=c->r[12]; // 8016D6B0
  if (true) { c->lr=0x8016D6B8u; dispatch(c,c->ctr); } // 8016D6B4
  c->r[4]=R32(c->r[31]+0x00000018u); // 8016D6B8
  W32(c->r[4]+c->r[29],c->r[3]); // 8016D6BC
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D6C0
  c->r[0]=R32(c->r[3]+c->r[29]); // 8016D6C4
  cmps(c,0,(int32_t)c->r[0],0); // 8016D6C8
  if (!crb(c,2)) { goto L_8016D760; } // 8016D6CC
  cmps(c,0,(int32_t)c->r[3],0); // 8016D6D0
  if (crb(c,2)) { goto L_8016D724; } // 8016D6D4
  c->r[29]=0u+0x00000000u; // 8016D6D8
  c->r[28]=0u+0x00000000u; // 8016D6DC
  c->r[30]=0u+0x00000000u; // 8016D6E0
  goto L_8016D718; // 8016D6E4
L_8016D6E8:;
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D6E8
  c->r[3]=R32(c->r[3]+c->r[28]); // 8016D6EC
  cmps(c,0,(int32_t)c->r[3],0); // 8016D6F0
  if (crb(c,2)) { goto L_8016D710; } // 8016D6F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016D6F8
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016D6FC
  c->ctr=c->r[12]; // 8016D700
  if (true) { c->lr=0x8016D708u; dispatch(c,c->ctr); } // 8016D704
  c->r[3]=R32(c->r[31]+0x00000018u); // 8016D708
  W32(c->r[3]+c->r[28],c->r[30]); // 8016D70C
L_8016D710:;
  c->r[28]=c->r[28]+0x00000004u; // 8016D710
  c->r[29]=c->r[29]+0x00000001u; // 8016D714
L_8016D718:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D718
  cmpu(c,0,c->r[29],c->r[0]); // 8016D71C
  if (crb(c,0)) { IRQCHK(c); goto L_8016D6E8; } // 8016D720
L_8016D724:;
  c->r[3]=R32(c->r[31]+0x00000010u); // 8016D724
  cmps(c,0,(int32_t)c->r[3],0); // 8016D728
  if (crb(c,2)) { goto L_8016D73C; } // 8016D72C
  c->lr=0x8016D734u; f_8017C424(c); // 8016D730
  c->r[0]=0u+0x00000000u; // 8016D734
  W32(c->r[31]+0x00000010u,c->r[0]); // 8016D738
L_8016D73C:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016D73C
  cmps(c,0,(int32_t)c->r[4],0); // 8016D740
  if (crb(c,2)) { goto L_8016D758; } // 8016D744
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016D748
  c->lr=0x8016D750u; f_8017C228(c); // 8016D74C
  c->r[0]=0u+0x00000000u; // 8016D750
  W32(c->r[31]+0x00000014u,c->r[0]); // 8016D754
L_8016D758:;
  c->r[3]=0u+0x00000000u; // 8016D758
  goto L_8016D77C; // 8016D75C
L_8016D760:;
  c->r[27]=c->r[27]+0x00000010u; // 8016D760
  c->r[29]=c->r[29]+0x00000004u; // 8016D764
  c->r[28]=c->r[28]+0x00000001u; // 8016D768
L_8016D76C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D76C
  cmpu(c,0,c->r[28],c->r[0]); // 8016D770
  if (crb(c,0)) { IRQCHK(c); goto L_8016D698; } // 8016D774
  c->r[3]=0u+0x00000001u; // 8016D778
L_8016D77C:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016D77C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016D780
  c->lr=c->r[0]; // 8016D784
  c->r[1]=c->r[1]+0x00000020u; // 8016D788
  return; // 8016D78C
}

// GetRequiredMemorySizeForSrVoiceRegSlaves__25CriSrVoiceRegManagerSlaveCFv
void f_8016D790(Ctx* __restrict c) {
  trace_call(0x8016D790u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D790
  c->r[0]=c->lr; // 8016D794
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016D798
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016D79C
  c->r[31]=c->r[3]|c->r[3]; // 8016D7A0
  c->r[3]=0u+0x00000004u; // 8016D7A4
  c->lr=0x8016D7ACu; f_8017C018(c); // 8016D7A8
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016D7AC
  c->r[4]=c->r[3]+0x00000064u; // 8016D7B0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016D7B4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 8016D7B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016D7BC
  c->r[3]=c->r[4]+c->r[3]; // 8016D7C0
  c->lr=c->r[0]; // 8016D7C4
  c->r[1]=c->r[1]+0x00000010u; // 8016D7C8
  return; // 8016D7CC
}

// CreateSrVoiceRegSlave__25CriSrVoiceRegManagerSlaveFP13CriSrObjSlaveUlPQ213CriSrVoiceReg18ComponentAddresses
void f_8016D7D0(Ctx* __restrict c) {
  trace_call(0x8016D7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D7D0
  c->r[0]=c->lr; // 8016D7D4
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016D7D8
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8016D7DC
  c->r[31]=c->r[1]|c->r[1]; // 8016D7E0
  W32(c->r[1]+0x00000048u,c->r[30]); // 8016D7E4
  c->r[30]=0u+0x802D0000u; // 8016D7E8
  c->r[30]=c->r[30]+0x000002A8u; // 8016D7EC
  W32(c->r[1]+0x00000044u,c->r[29]); // 8016D7F0
  W32(c->r[1]+0x00000040u,c->r[28]); // 8016D7F4
  c->r[29]=R32(c->r[3]+0x00000010u); // 8016D7F8
  W32(c->r[1]+0x00000020u,c->r[29]); // 8016D7FC
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8016D800
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016D804
  W32(c->r[1]+0x00000028u,c->r[4]); // 8016D808
  c->r[4]=c->r[29]|c->r[29]; // 8016D80C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 8016D810
  c->r[3]=0u+0x00000064u; // 8016D814
  W32(c->r[1]+0x00000030u,c->r[5]); // 8016D818
  c->r[5]=c->r[30]|c->r[30]; // 8016D81C
  W32(c->r[1]+0x00000034u,c->r[6]); // 8016D820
  c->r[6]=0u+0x00000004u; // 8016D824
  c->lr=0x8016D82Cu; f_8017BEDC(c); // 8016D828
  cmps(c,0,(int32_t)c->r[3],0); // 8016D82C
  c->r[28]=c->r[3]|c->r[3]; // 8016D830
  if (crb(c,2)) { goto L_8016D86C; } // 8016D834
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016D838
  c->r[4]=c->r[31]+0x00000020u; // 8016D83C
  c->lr=0x8016D844u; f_8016B840(c); // 8016D840
  goto L_8016D86C; // 8016D844
  c->r[3]=c->r[28]|c->r[28]; // 8016D848
  c->r[4]=c->r[29]|c->r[29]; // 8016D84C
  c->r[5]=c->r[30]|c->r[30]; // 8016D850
  c->r[6]=0u+0x00000004u; // 8016D854
  c->lr=0x8016D85Cu; f_8017BFF8(c); // 8016D858
  c->r[3]=0u+0x00000000u; // 8016D85C
  c->r[4]=0u+0x00000000u; // 8016D860
  c->r[5]=0u+0x00000000u; // 8016D864
  c->lr=0x8016D86Cu; f_800AF804(c); // 8016D868
L_8016D86C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8016D86C
  if (!crb(c,2)) { goto L_8016D894; } // 8016D870
  c->r[4]=0u+0x802D0000u; // 8016D874
  c->r[3]=0u+0x00000000u; // 8016D878
  c->r[4]=c->r[4]+0x000002A8u; // 8016D87C
  c->r[5]=0u+0xFFFFFFFDu; // 8016D880
  c->r[4]=c->r[4]+0x00000013u; // 8016D884
  c->lr=0x8016D88Cu; f_8017968C(c); // 8016D888
  c->r[28]=0u+0x00000000u; // 8016D88C
  goto L_8016D8D8; // 8016D890
L_8016D894:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8016D894
  c->r[3]=c->r[28]|c->r[28]; // 8016D898
  c->r[12]=R32(c->r[12]+0x00000018u); // 8016D89C
  c->ctr=c->r[12]; // 8016D8A0
  if (true) { c->lr=0x8016D8A8u; dispatch(c,c->ctr); } // 8016D8A4
  cmps(c,0,(int32_t)c->r[3],0); // 8016D8A8
  if (!crb(c,2)) { goto L_8016D8D8; } // 8016D8AC
  cmps(c,0,(int32_t)c->r[28],0); // 8016D8B0
  if (crb(c,2)) { goto L_8016D8D4; } // 8016D8B4
  c->r[12]=R32(c->r[28]+0x00000000u); // 8016D8B8
  c->r[0]=0u+0x00000001u; // 8016D8BC
  c->r[3]=c->r[28]|c->r[28]; // 8016D8C0
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016D8C4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8016D8C8
  c->ctr=c->r[12]; // 8016D8CC
  if (true) { c->lr=0x8016D8D4u; dispatch(c,c->ctr); } // 8016D8D0
L_8016D8D4:;
  c->r[28]=0u+0x00000000u; // 8016D8D4
L_8016D8D8:;
  c->r[10]=c->r[31]|c->r[31]; // 8016D8D8
  c->r[31]=R32(c->r[31]+0x0000004Cu); // 8016D8DC
  c->r[30]=R32(c->r[10]+0x00000048u); // 8016D8E0
  c->r[3]=c->r[28]|c->r[28]; // 8016D8E4
  c->r[29]=R32(c->r[10]+0x00000044u); // 8016D8E8
  c->r[28]=R32(c->r[10]+0x00000040u); // 8016D8EC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016D8F0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016D8F4
  c->r[1]=c->r[10]|c->r[10]; // 8016D8F8
  c->lr=c->r[0]; // 8016D8FC
  return; // 8016D900
}

// GetFirstCommand__25CriSrVoiceRegManagerSlaveCFv
void f_8016D904(Ctx* __restrict c) {
  trace_call(0x8016D904u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8016D904
  c->r[3]=R32(c->r[3]+0x00000000u); // 8016D908
  return; // 8016D90C
}

// GetCommandContentsFromSlave__25CriSrVoiceRegManagerSlaveCFUl
void f_8016D910(Ctx* __restrict c) {
  trace_call(0x8016D910u);
  c->r[3]=c->r[4]|c->r[4]; // 8016D910
  return; // 8016D914
}

// PutCommandContentsFromSlave__25CriSrVoiceRegManagerSlaveCFUlP27CriSrVoiceRegManagerCommand
void f_8016D918(Ctx* __restrict c) {
  trace_call(0x8016D918u);
  return; // 8016D918
}

// ProcessCommand__25CriSrVoiceRegManagerSlaveFP27CriSrVoiceRegManagerCommand
void f_8016D91C(Ctx* __restrict c) {
  trace_call(0x8016D91Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016D91C
  c->r[0]=c->lr; // 8016D920
  W32(c->r[1]+0x000000C4u,c->r[0]); // 8016D924
  {uint32_t ea=c->r[1]+0x000000ACu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016D928
  c->r[31]=c->r[1]|c->r[1]; // 8016D92C
  c->r[29]=c->r[3]|c->r[3]; // 8016D930
  c->r[30]=c->r[4]|c->r[4]; // 8016D934
  c->r[0]=R32(c->r[4]+0x00000010u); // 8016D938
  cmps(c,0,(int32_t)c->r[0],0); // 8016D93C
  if (crb(c,2)) { goto L_8016D958; } // 8016D940
  cmps(c,0,(int32_t)c->r[0],1); // 8016D944
  if (crb(c,2)) { goto L_8016DABC; } // 8016D948
  cmps(c,0,(int32_t)c->r[0],2); // 8016D94C
  if (crb(c,2)) { goto L_8016DDC8; } // 8016D950
  goto L_8016DE2C; // 8016D954
L_8016D958:;
  c->r[28]=R32(c->r[4]+0x00000014u); // 8016D958
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016D95C
  c->r[4]=c->r[28]|c->r[28]; // 8016D960
  c->lr=0x8016D968u; f_80172AFC(c); // 8016D964
  cmps(c,0,(int32_t)c->r[3],0); // 8016D968
  c->r[27]=c->r[3]|c->r[3]; // 8016D96C
  if (!crb(c,2)) { goto L_8016D990; } // 8016D970
  c->r[4]=0u+0x802D0000u; // 8016D974
  c->r[5]=c->r[28]|c->r[28]; // 8016D978
  c->r[4]=c->r[4]+0x000002A8u; // 8016D97C
  c->r[3]=0u+0x00000000u; // 8016D980
  c->r[4]=c->r[4]+0x00000075u; // 8016D984
  c->lr=0x8016D98Cu; f_801794C0(c); // 8016D988
  goto L_8016DE2C; // 8016D98C
L_8016D990:;
  c->r[28]=R32(c->r[29]+0x00000028u); // 8016D990
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8016D994
  cmps(c,0,(int32_t)c->r[28],0); // 8016D998
  if (crb(c,2)) { goto L_8016DA2C; } // 8016D99C
  c->r[6]=0u+0x80330000u; // 8016D9A0
  c->r[3]=0u+0x0000000Cu; // 8016D9A4
  c->r[6]=c->r[6]+0x00001838u; // 8016D9A8
  c->r[5]=0u+0x00000002u; // 8016D9AC
  c->r[7]=0u+0x00000004u; // 8016D9B0
  c->lr=0x8016D9B8u; f_8017BF5C(c); // 8016D9B4
  cmps(c,0,(int32_t)c->r[3],0); // 8016D9B8
  if (crb(c,2)) { goto L_8016D9D4; } // 8016D9BC
  c->r[0]=0u+0x00000000u; // 8016D9C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016D9C4
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016D9C8
  W32(c->r[31]+0x000000A4u,c->r[1]); // 8016D9CC
  W32(c->r[3]+0x00000008u,c->r[27]); // 8016D9D0
L_8016D9D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016D9D4
  if (!crb(c,2)) { goto L_8016D9F4; } // 8016D9D8
  c->r[4]=0u+0x80330000u; // 8016D9DC
  c->r[3]=0u+0x00000000u; // 8016D9E0
  c->r[4]=c->r[4]+0x0000182Cu; // 8016D9E4
  c->r[5]=0u+0xFFFFFFFDu; // 8016D9E8
  c->lr=0x8016D9F0u; f_8017968C(c); // 8016D9EC
  c->r[3]=0u+0x00000000u; // 8016D9F0
L_8016D9F4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016D9F4
  if (!crb(c,2)) { goto L_8016DA04; } // 8016D9F8
  c->r[3]=0u+0x00000000u; // 8016D9FC
  goto L_8016DA14; // 8016DA00
L_8016DA04:;
  W32(c->r[3]+0x00000000u,c->r[28]); // 8016DA04
  c->r[0]=R32(c->r[28]+0x00000004u); // 8016DA08
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DA0C
  W32(c->r[28]+0x00000004u,c->r[3]); // 8016DA10
L_8016DA14:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DA14
  if (!crb(c,2)) { goto L_8016DA24; } // 8016DA18
  c->r[4]=0u+0x00000000u; // 8016DA1C
  goto L_8016DAA8; // 8016DA20
L_8016DA24:;
  W32(c->r[29]+0x00000028u,c->r[3]); // 8016DA24
  goto L_8016DA98; // 8016DA28
L_8016DA2C:;
  c->r[6]=0u+0x80330000u; // 8016DA2C
  c->r[3]=0u+0x0000000Cu; // 8016DA30
  c->r[6]=c->r[6]+0x00001838u; // 8016DA34
  c->r[5]=0u+0x00000002u; // 8016DA38
  c->r[7]=0u+0x00000004u; // 8016DA3C
  c->lr=0x8016DA44u; f_8017BF5C(c); // 8016DA40
  cmps(c,0,(int32_t)c->r[3],0); // 8016DA44
  if (crb(c,2)) { goto L_8016DA60; } // 8016DA48
  c->r[0]=0u+0x00000000u; // 8016DA4C
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016DA50
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DA54
  W32(c->r[31]+0x0000008Cu,c->r[1]); // 8016DA58
  W32(c->r[3]+0x00000008u,c->r[27]); // 8016DA5C
L_8016DA60:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DA60
  if (!crb(c,2)) { goto L_8016DA80; } // 8016DA64
  c->r[4]=0u+0x80330000u; // 8016DA68
  c->r[3]=0u+0x00000000u; // 8016DA6C
  c->r[4]=c->r[4]+0x0000182Cu; // 8016DA70
  c->r[5]=0u+0xFFFFFFFDu; // 8016DA74
  c->lr=0x8016DA7Cu; f_8017968C(c); // 8016DA78
  c->r[3]=0u+0x00000000u; // 8016DA7C
L_8016DA80:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DA80
  W32(c->r[29]+0x00000028u,c->r[3]); // 8016DA84
  if (!crb(c,2)) { goto L_8016DA94; } // 8016DA88
  c->r[4]=0u+0x00000000u; // 8016DA8C
  goto L_8016DAA8; // 8016DA90
L_8016DA94:;
  W32(c->r[29]+0x00000024u,c->r[3]); // 8016DA94
L_8016DA98:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8016DA98
  c->r[4]=0u+0x00000001u; // 8016DA9C
  c->r[0]=c->r[3]+0x00000001u; // 8016DAA0
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8016DAA4
L_8016DAA8:;
  cmps(c,0,(int32_t)c->r[4],0); // 8016DAA8
  if (!crb(c,2)) { goto L_8016DE2C; } // 8016DAAC
  c->r[3]=c->r[27]|c->r[27]; // 8016DAB0
  c->lr=0x8016DAB8u; f_80172E68(c); // 8016DAB4
  goto L_8016DE2C; // 8016DAB8
L_8016DABC:;
  c->r[28]=R32(c->r[3]+0x00000024u); // 8016DABC
  W32(c->r[31]+0x00000014u,c->r[28]); // 8016DAC0
  c->r[27]=R32(c->r[4]+0x00000018u); // 8016DAC4
  W32(c->r[31]+0x00000010u,c->r[28]); // 8016DAC8
  goto L_8016DAEC; // 8016DACC
L_8016DAD0:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8016DAD0
  c->lr=0x8016DAD8u; f_801733B4(c); // 8016DAD4
  cmpu(c,0,c->r[27],c->r[3]); // 8016DAD8
  if (!crb(c,2)) { goto L_8016DAE8; } // 8016DADC
  c->r[5]=R32(c->r[28]+0x00000008u); // 8016DAE0
  goto L_8016DAF8; // 8016DAE4
L_8016DAE8:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 8016DAE8
L_8016DAEC:;
  cmps(c,0,(int32_t)c->r[28],0); // 8016DAEC
  if (!crb(c,2)) { IRQCHK(c); goto L_8016DAD0; } // 8016DAF0
  c->r[5]=0u+0x00000000u; // 8016DAF4
L_8016DAF8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8016DAF8
  if (!crb(c,2)) { goto L_8016DC64; } // 8016DAFC
  c->r[27]=R32(c->r[30]+0x00000014u); // 8016DB00
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8016DB04
  c->r[4]=c->r[27]|c->r[27]; // 8016DB08
  c->lr=0x8016DB10u; f_80172AFC(c); // 8016DB0C
  cmps(c,0,(int32_t)c->r[3],0); // 8016DB10
  c->r[28]=c->r[3]|c->r[3]; // 8016DB14
  if (!crb(c,2)) { goto L_8016DB38; } // 8016DB18
  c->r[4]=0u+0x802D0000u; // 8016DB1C
  c->r[5]=c->r[27]|c->r[27]; // 8016DB20
  c->r[4]=c->r[4]+0x000002A8u; // 8016DB24
  c->r[3]=0u+0x00000000u; // 8016DB28
  c->r[4]=c->r[4]+0x00000075u; // 8016DB2C
  c->lr=0x8016DB34u; f_801794C0(c); // 8016DB30
  goto L_8016DE2C; // 8016DB34
L_8016DB38:;
  c->r[27]=R32(c->r[29]+0x00000028u); // 8016DB38
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8016DB3C
  cmps(c,0,(int32_t)c->r[27],0); // 8016DB40
  if (crb(c,2)) { goto L_8016DBD4; } // 8016DB44
  c->r[6]=0u+0x80330000u; // 8016DB48
  c->r[3]=0u+0x0000000Cu; // 8016DB4C
  c->r[6]=c->r[6]+0x00001838u; // 8016DB50
  c->r[5]=0u+0x00000002u; // 8016DB54
  c->r[7]=0u+0x00000004u; // 8016DB58
  c->lr=0x8016DB60u; f_8017BF5C(c); // 8016DB5C
  cmps(c,0,(int32_t)c->r[3],0); // 8016DB60
  if (crb(c,2)) { goto L_8016DB7C; } // 8016DB64
  c->r[0]=0u+0x00000000u; // 8016DB68
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016DB6C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DB70
  W32(c->r[31]+0x00000074u,c->r[1]); // 8016DB74
  W32(c->r[3]+0x00000008u,c->r[28]); // 8016DB78
L_8016DB7C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DB7C
  if (!crb(c,2)) { goto L_8016DB9C; } // 8016DB80
  c->r[4]=0u+0x80330000u; // 8016DB84
  c->r[3]=0u+0x00000000u; // 8016DB88
  c->r[4]=c->r[4]+0x0000182Cu; // 8016DB8C
  c->r[5]=0u+0xFFFFFFFDu; // 8016DB90
  c->lr=0x8016DB98u; f_8017968C(c); // 8016DB94
  c->r[3]=0u+0x00000000u; // 8016DB98
L_8016DB9C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DB9C
  if (!crb(c,2)) { goto L_8016DBAC; } // 8016DBA0
  c->r[3]=0u+0x00000000u; // 8016DBA4
  goto L_8016DBBC; // 8016DBA8
L_8016DBAC:;
  W32(c->r[3]+0x00000000u,c->r[27]); // 8016DBAC
  c->r[0]=R32(c->r[27]+0x00000004u); // 8016DBB0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DBB4
  W32(c->r[27]+0x00000004u,c->r[3]); // 8016DBB8
L_8016DBBC:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DBBC
  if (!crb(c,2)) { goto L_8016DBCC; } // 8016DBC0
  c->r[4]=0u+0x00000000u; // 8016DBC4
  goto L_8016DC50; // 8016DBC8
L_8016DBCC:;
  W32(c->r[29]+0x00000028u,c->r[3]); // 8016DBCC
  goto L_8016DC40; // 8016DBD0
L_8016DBD4:;
  c->r[6]=0u+0x80330000u; // 8016DBD4
  c->r[3]=0u+0x0000000Cu; // 8016DBD8
  c->r[6]=c->r[6]+0x00001838u; // 8016DBDC
  c->r[5]=0u+0x00000002u; // 8016DBE0
  c->r[7]=0u+0x00000004u; // 8016DBE4
  c->lr=0x8016DBECu; f_8017BF5C(c); // 8016DBE8
  cmps(c,0,(int32_t)c->r[3],0); // 8016DBEC
  if (crb(c,2)) { goto L_8016DC08; } // 8016DBF0
  c->r[0]=0u+0x00000000u; // 8016DBF4
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016DBF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DBFC
  W32(c->r[31]+0x0000005Cu,c->r[1]); // 8016DC00
  W32(c->r[3]+0x00000008u,c->r[28]); // 8016DC04
L_8016DC08:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DC08
  if (!crb(c,2)) { goto L_8016DC28; } // 8016DC0C
  c->r[4]=0u+0x80330000u; // 8016DC10
  c->r[3]=0u+0x00000000u; // 8016DC14
  c->r[4]=c->r[4]+0x0000182Cu; // 8016DC18
  c->r[5]=0u+0xFFFFFFFDu; // 8016DC1C
  c->lr=0x8016DC24u; f_8017968C(c); // 8016DC20
  c->r[3]=0u+0x00000000u; // 8016DC24
L_8016DC28:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DC28
  W32(c->r[29]+0x00000028u,c->r[3]); // 8016DC2C
  if (!crb(c,2)) { goto L_8016DC3C; } // 8016DC30
  c->r[4]=0u+0x00000000u; // 8016DC34
  goto L_8016DC50; // 8016DC38
L_8016DC3C:;
  W32(c->r[29]+0x00000024u,c->r[3]); // 8016DC3C
L_8016DC40:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8016DC40
  c->r[4]=0u+0x00000001u; // 8016DC44
  c->r[0]=c->r[3]+0x00000001u; // 8016DC48
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8016DC4C
L_8016DC50:;
  cmps(c,0,(int32_t)c->r[4],0); // 8016DC50
  if (!crb(c,2)) { goto L_8016DE2C; } // 8016DC54
  c->r[3]=c->r[28]|c->r[28]; // 8016DC58
  c->lr=0x8016DC60u; f_80172E68(c); // 8016DC5C
  goto L_8016DE2C; // 8016DC60
L_8016DC64:;
  c->r[27]=R32(c->r[30]+0x00000014u); // 8016DC64
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8016DC68
  c->r[4]=c->r[27]|c->r[27]; // 8016DC6C
  c->lr=0x8016DC74u; f_80172BD0(c); // 8016DC70
  cmps(c,0,(int32_t)c->r[3],0); // 8016DC74
  c->r[28]=c->r[3]|c->r[3]; // 8016DC78
  if (!crb(c,2)) { goto L_8016DC9C; } // 8016DC7C
  c->r[4]=0u+0x802D0000u; // 8016DC80
  c->r[5]=c->r[27]|c->r[27]; // 8016DC84
  c->r[4]=c->r[4]+0x000002A8u; // 8016DC88
  c->r[3]=0u+0x00000000u; // 8016DC8C
  c->r[4]=c->r[4]+0x0000009Cu; // 8016DC90
  c->lr=0x8016DC98u; f_801794C0(c); // 8016DC94
  goto L_8016DE2C; // 8016DC98
L_8016DC9C:;
  c->r[27]=R32(c->r[29]+0x00000028u); // 8016DC9C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 8016DCA0
  cmps(c,0,(int32_t)c->r[27],0); // 8016DCA4
  if (crb(c,2)) { goto L_8016DD38; } // 8016DCA8
  c->r[6]=0u+0x80330000u; // 8016DCAC
  c->r[3]=0u+0x0000000Cu; // 8016DCB0
  c->r[6]=c->r[6]+0x00001838u; // 8016DCB4
  c->r[5]=0u+0x00000002u; // 8016DCB8
  c->r[7]=0u+0x00000004u; // 8016DCBC
  c->lr=0x8016DCC4u; f_8017BF5C(c); // 8016DCC0
  cmps(c,0,(int32_t)c->r[3],0); // 8016DCC4
  if (crb(c,2)) { goto L_8016DCE0; } // 8016DCC8
  c->r[0]=0u+0x00000000u; // 8016DCCC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016DCD0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DCD4
  W32(c->r[31]+0x00000044u,c->r[1]); // 8016DCD8
  W32(c->r[3]+0x00000008u,c->r[28]); // 8016DCDC
L_8016DCE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DCE0
  if (!crb(c,2)) { goto L_8016DD00; } // 8016DCE4
  c->r[4]=0u+0x80330000u; // 8016DCE8
  c->r[3]=0u+0x00000000u; // 8016DCEC
  c->r[4]=c->r[4]+0x0000182Cu; // 8016DCF0
  c->r[5]=0u+0xFFFFFFFDu; // 8016DCF4
  c->lr=0x8016DCFCu; f_8017968C(c); // 8016DCF8
  c->r[3]=0u+0x00000000u; // 8016DCFC
L_8016DD00:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DD00
  if (!crb(c,2)) { goto L_8016DD10; } // 8016DD04
  c->r[3]=0u+0x00000000u; // 8016DD08
  goto L_8016DD20; // 8016DD0C
L_8016DD10:;
  W32(c->r[3]+0x00000000u,c->r[27]); // 8016DD10
  c->r[0]=R32(c->r[27]+0x00000004u); // 8016DD14
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DD18
  W32(c->r[27]+0x00000004u,c->r[3]); // 8016DD1C
L_8016DD20:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DD20
  if (!crb(c,2)) { goto L_8016DD30; } // 8016DD24
  c->r[4]=0u+0x00000000u; // 8016DD28
  goto L_8016DDB4; // 8016DD2C
L_8016DD30:;
  W32(c->r[29]+0x00000028u,c->r[3]); // 8016DD30
  goto L_8016DDA4; // 8016DD34
L_8016DD38:;
  c->r[6]=0u+0x80330000u; // 8016DD38
  c->r[3]=0u+0x0000000Cu; // 8016DD3C
  c->r[6]=c->r[6]+0x00001838u; // 8016DD40
  c->r[5]=0u+0x00000002u; // 8016DD44
  c->r[7]=0u+0x00000004u; // 8016DD48
  c->lr=0x8016DD50u; f_8017BF5C(c); // 8016DD4C
  cmps(c,0,(int32_t)c->r[3],0); // 8016DD50
  if (crb(c,2)) { goto L_8016DD6C; } // 8016DD54
  c->r[0]=0u+0x00000000u; // 8016DD58
  W32(c->r[3]+0x00000000u,c->r[0]); // 8016DD5C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DD60
  W32(c->r[31]+0x0000002Cu,c->r[1]); // 8016DD64
  W32(c->r[3]+0x00000008u,c->r[28]); // 8016DD68
L_8016DD6C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DD6C
  if (!crb(c,2)) { goto L_8016DD8C; } // 8016DD70
  c->r[4]=0u+0x80330000u; // 8016DD74
  c->r[3]=0u+0x00000000u; // 8016DD78
  c->r[4]=c->r[4]+0x0000182Cu; // 8016DD7C
  c->r[5]=0u+0xFFFFFFFDu; // 8016DD80
  c->lr=0x8016DD88u; f_8017968C(c); // 8016DD84
  c->r[3]=0u+0x00000000u; // 8016DD88
L_8016DD8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DD8C
  W32(c->r[29]+0x00000028u,c->r[3]); // 8016DD90
  if (!crb(c,2)) { goto L_8016DDA0; } // 8016DD94
  c->r[4]=0u+0x00000000u; // 8016DD98
  goto L_8016DDB4; // 8016DD9C
L_8016DDA0:;
  W32(c->r[29]+0x00000024u,c->r[3]); // 8016DDA0
L_8016DDA4:;
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 8016DDA4
  c->r[4]=0u+0x00000001u; // 8016DDA8
  c->r[0]=c->r[3]+0x00000001u; // 8016DDAC
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8016DDB0
L_8016DDB4:;
  cmps(c,0,(int32_t)c->r[4],0); // 8016DDB4
  if (!crb(c,2)) { goto L_8016DE2C; } // 8016DDB8
  c->r[3]=c->r[28]|c->r[28]; // 8016DDBC
  c->lr=0x8016DDC4u; f_80172E68(c); // 8016DDC0
  goto L_8016DE2C; // 8016DDC4
L_8016DDC8:;
  c->r[28]=R32(c->r[3]+0x00000024u); // 8016DDC8
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 8016DDCC
  c->r[27]=R32(c->r[4]+0x00000014u); // 8016DDD0
  W32(c->r[31]+0x00000008u,c->r[28]); // 8016DDD4
  goto L_8016DDF8; // 8016DDD8
L_8016DDDC:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 8016DDDC
  c->lr=0x8016DDE4u; f_801733B4(c); // 8016DDE0
  cmpu(c,0,c->r[27],c->r[3]); // 8016DDE4
  if (!crb(c,2)) { goto L_8016DDF4; } // 8016DDE8
  c->r[3]=R32(c->r[28]+0x00000008u); // 8016DDEC
  goto L_8016DE04; // 8016DDF0
L_8016DDF4:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 8016DDF4
L_8016DDF8:;
  cmps(c,0,(int32_t)c->r[28],0); // 8016DDF8
  if (!crb(c,2)) { IRQCHK(c); goto L_8016DDDC; } // 8016DDFC
  c->r[3]=0u+0x00000000u; // 8016DE00
L_8016DE04:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DE04
  if (crb(c,2)) { goto L_8016DE14; } // 8016DE08
  c->lr=0x8016DE10u; f_80173300(c); // 8016DE0C
  goto L_8016DE2C; // 8016DE10
L_8016DE14:;
  c->r[4]=0u+0x802D0000u; // 8016DE14
  c->r[5]=R32(c->r[30]+0x00000014u); // 8016DE18
  c->r[4]=c->r[4]+0x000002A8u; // 8016DE1C
  c->r[3]=0u+0x00000000u; // 8016DE20
  c->r[4]=c->r[4]+0x000000C3u; // 8016DE24
  c->lr=0x8016DE2Cu; f_801794C0(c); // 8016DE28
L_8016DE2C:;
  c->r[0]=0u+0x00000001u; // 8016DE2C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016DE30
  c->r[10]=c->r[31]|c->r[31]; // 8016DE34
  {uint32_t ea=c->r[10]+0x000000ACu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016DE38
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016DE3C
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016DE40
  c->r[1]=c->r[10]|c->r[10]; // 8016DE44
  c->lr=c->r[0]; // 8016DE48
  return; // 8016DE4C
}

// GetRequiredStaticMemorySize__16CriSrVoiceCoreSjFv
void f_8016DE50(Ctx* __restrict c) {
  trace_call(0x8016DE50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DE50
  c->r[0]=c->lr; // 8016DE54
  c->r[3]=0u+0x00000004u; // 8016DE58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016DE5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016DE60
  c->lr=0x8016DE68u; f_8017C018(c); // 8016DE64
  c->r[31]=c->r[3]+0x00000014u; // 8016DE68
  c->lr=0x8016DE70u; f_80161C7C(c); // 8016DE6C
  c->r[3]=c->r[31]+c->r[3]; // 8016DE70
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016DE74
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016DE78
  c->lr=c->r[0]; // 8016DE7C
  c->r[1]=c->r[1]+0x00000010u; // 8016DE80
  return; // 8016DE84
}

// GetRequiredDynamicMemorySize__16CriSrVoiceCoreSjFUlQ217CriAuSoundElement6Format
void f_8016DE88(Ctx* __restrict c) {
  trace_call(0x8016DE88u);
  c->r[3]=0u+0x00000000u; // 8016DE88
  return; // 8016DE8C
}

// Create__16CriSrVoiceCoreSjFRCQ216CriSrVoiceCoreSj15ConfigParameter
void f_8016DE90(Ctx* __restrict c) {
  trace_call(0x8016DE90u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DE90
  c->r[0]=c->lr; // 8016DE94
  c->r[5]=0u+0x802D0000u; // 8016DE98
  c->r[4]=R32(c->r[3]+0x00000004u); // 8016DE9C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016DEA0
  c->r[5]=c->r[5]+0x000003A4u; // 8016DEA4
  c->r[6]=0u+0x00000004u; // 8016DEA8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016DEAC
  c->r[31]=c->r[1]|c->r[1]; // 8016DEB0
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016DEB4
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016DEB8
  c->r[29]=c->r[3]|c->r[3]; // 8016DEBC
  c->r[3]=0u+0x00000014u; // 8016DEC0
  c->lr=0x8016DEC8u; f_8017BEDC(c); // 8016DEC4
  cmps(c,0,(int32_t)c->r[3],0); // 8016DEC8
  c->r[30]=c->r[3]|c->r[3]; // 8016DECC
  if (crb(c,2)) { goto L_8016DEF8; } // 8016DED0
  c->r[4]=0u+0x80330000u; // 8016DED4
  c->r[0]=0u+0x00000000u; // 8016DED8
  c->r[4]=c->r[4]+0x00001850u; // 8016DEDC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8016DEE0
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016DEE4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016DEE8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016DEEC
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016DEF0
  W32(c->r[3]+0x00000010u,c->r[0]); // 8016DEF4
L_8016DEF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016DEF8
  if (!crb(c,2)) { goto L_8016DF20; } // 8016DEFC
  c->r[4]=0u+0x802D0000u; // 8016DF00
  c->r[3]=0u+0x00000000u; // 8016DF04
  c->r[4]=c->r[4]+0x000003A4u; // 8016DF08
  c->r[5]=0u+0xFFFFFFFDu; // 8016DF0C
  c->r[4]=c->r[4]+0x00000011u; // 8016DF10
  c->lr=0x8016DF18u; f_8017968C(c); // 8016DF14
  c->r[3]=0u+0x00000000u; // 8016DF18
  goto L_8016DF70; // 8016DF1C
L_8016DF20:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016DF20
  c->r[3]=c->r[30]|c->r[30]; // 8016DF24
  c->r[4]=c->r[29]|c->r[29]; // 8016DF28
  c->r[12]=R32(c->r[12]+0x00000010u); // 8016DF2C
  c->ctr=c->r[12]; // 8016DF30
  if (true) { c->lr=0x8016DF38u; dispatch(c,c->ctr); } // 8016DF34
  cmps(c,0,(int32_t)c->r[3],0); // 8016DF38
  if (!crb(c,2)) { goto L_8016DF6C; } // 8016DF3C
  cmps(c,0,(int32_t)c->r[30],0); // 8016DF40
  if (crb(c,2)) { goto L_8016DF64; } // 8016DF44
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016DF48
  c->r[0]=0u+0x00000001u; // 8016DF4C
  c->r[3]=c->r[30]|c->r[30]; // 8016DF50
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8016DF54
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8016DF58
  c->ctr=c->r[12]; // 8016DF5C
  if (true) { c->lr=0x8016DF64u; dispatch(c,c->ctr); } // 8016DF60
L_8016DF64:;
  c->r[3]=0u+0x00000000u; // 8016DF64
  goto L_8016DF70; // 8016DF68
L_8016DF6C:;
  c->r[3]=c->r[30]|c->r[30]; // 8016DF6C
L_8016DF70:;
  c->r[10]=c->r[31]|c->r[31]; // 8016DF70
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8016DF74
  c->r[30]=R32(c->r[10]+0x00000028u); // 8016DF78
  c->r[29]=R32(c->r[10]+0x00000024u); // 8016DF7C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016DF80
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016DF84
  c->r[1]=c->r[10]|c->r[10]; // 8016DF88
  c->lr=c->r[0]; // 8016DF8C
  return; // 8016DF90
}

// Destroy__16CriSrVoiceCoreSjFv
void f_8016DF94(Ctx* __restrict c) {
  trace_call(0x8016DF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DF94
  c->r[0]=c->lr; // 8016DF98
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016DF9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016DFA0
  c->r[31]=c->r[3]|c->r[3]; // 8016DFA4
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016DFA8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016DFAC
  c->ctr=c->r[12]; // 8016DFB0
  if (true) { c->lr=0x8016DFB8u; dispatch(c,c->ctr); } // 8016DFB4
  cmps(c,0,(int32_t)c->r[31],0); // 8016DFB8
  if (crb(c,2)) { goto L_8016DFD8; } // 8016DFBC
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016DFC0
  c->r[3]=c->r[31]|c->r[31]; // 8016DFC4
  c->r[4]=0u+0x00000001u; // 8016DFC8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8016DFCC
  c->ctr=c->r[12]; // 8016DFD0
  if (true) { c->lr=0x8016DFD8u; dispatch(c,c->ctr); } // 8016DFD4
L_8016DFD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016DFD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016DFDC
  c->lr=c->r[0]; // 8016DFE0
  c->r[1]=c->r[1]+0x00000010u; // 8016DFE4
  return; // 8016DFE8
}

// __dt__16CriSrVoiceCoreSjFv
void f_8016DFEC(Ctx* __restrict c) {
  trace_call(0x8016DFECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016DFEC
  c->r[0]=c->lr; // 8016DFF0
  cmps(c,0,(int32_t)c->r[3],0); // 8016DFF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016DFF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016DFFC
  c->r[31]=c->r[3]|c->r[3]; // 8016E000
  if (crb(c,2)) { goto L_8016E018; } // 8016E004
  cmps(c,0,(int32_t)c->r[4],0); // 8016E008
  if (!crb(c,1)) { goto L_8016E018; } // 8016E00C
  c->r[4]=0u+0x00000014u; // 8016E010
  c->lr=0x8016E018u; f_8017BFE8(c); // 8016E014
L_8016E018:;
  c->r[3]=c->r[31]|c->r[31]; // 8016E018
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E01C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E020
  c->lr=c->r[0]; // 8016E024
  c->r[1]=c->r[1]+0x00000010u; // 8016E028
  return; // 8016E02C
}

// Initialize__16CriSrVoiceCoreSjFRCQ216CriSrVoiceCoreSj15ConfigParameter
void f_8016E030(Ctx* __restrict c) {
  trace_call(0x8016E030u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E030
  c->r[0]=c->lr; // 8016E034
  c->r[5]=0u+0x00000000u; // 8016E038
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016E03C
  c->r[0]=R32(c->r[4]+0x00000024u); // 8016E040
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8016E044
  c->r[31]=c->r[4]|c->r[4]; // 8016E048
  cmpu(c,0,c->r[0],0x00000001u); // 8016E04C
  W32(c->r[1]+0x00000048u,c->r[30]); // 8016E050
  c->r[30]=c->r[3]|c->r[3]; // 8016E054
  if (crb(c,1)) { goto L_8016E064; } // 8016E058
  c->r[5]=0u+0x0000032Au; // 8016E05C
  goto L_8016E070; // 8016E060
L_8016E064:;
  cmps(c,0,(int32_t)c->r[0],2); // 8016E064
  if (!crb(c,2)) { goto L_8016E070; } // 8016E068
  c->r[5]=0u+0x000005A0u; // 8016E06C
L_8016E070:;
  c->r[0]=R32(c->r[4]+0x00000024u); // 8016E070
  cmpu(c,0,c->r[0],0x00000002u); // 8016E074
  if (crb(c,1)) { goto L_8016E0F0; } // 8016E078
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 8016E07C
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016E080
  c->r[3]=R32(c->r[4]+0x00000000u); // 8016E084
  c->r[3]=R32(c->r[3]+0x00000008u); // 8016E088
  cmps(c,0,(int32_t)c->r[3],0); // 8016E08C
  if (crb(c,2)) { goto L_8016E0AC; } // 8016E090
  c->r[4]=c->r[5]|c->r[5]; // 8016E094
  c->r[5]=0u+0x0000004Cu; // 8016E098
  c->r[6]=0u+0x00000004u; // 8016E09C
  c->lr=0x8016E0A4u; f_8017F54C(c); // 8016E0A0
  W32(c->r[30]+0x00000008u,c->r[3]); // 8016E0A4
  goto L_8016E0C8; // 8016E0A8
L_8016E0AC:;
  c->r[4]=0u+0x802D0000u; // 8016E0AC
  c->r[3]=0u+0x00000001u; // 8016E0B0
  c->r[4]=c->r[4]+0x000003A4u; // 8016E0B4
  c->r[4]=c->r[4]+0x0000001Bu; // 8016E0B8
  c->lr=0x8016E0C0u; f_80179434(c); // 8016E0BC
  c->r[0]=0u+0x00000000u; // 8016E0C0
  W32(c->r[30]+0x00000008u,c->r[0]); // 8016E0C4
L_8016E0C8:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8016E0C8
  cmps(c,0,(int32_t)c->r[0],0); // 8016E0CC
  if (!crb(c,2)) { goto L_8016E0F8; } // 8016E0D0
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016E0D4
  c->r[3]=c->r[30]|c->r[30]; // 8016E0D8
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016E0DC
  c->ctr=c->r[12]; // 8016E0E0
  if (true) { c->lr=0x8016E0E8u; dispatch(c,c->ctr); } // 8016E0E4
  c->r[3]=0u+0x00000000u; // 8016E0E8
  goto L_8016E1B8; // 8016E0EC
L_8016E0F0:;
  c->r[0]=0u+0x00000000u; // 8016E0F0
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016E0F4
L_8016E0F8:;
  c->r[3]=0u+0x802D0000u; // 8016E0F8
  c->r[7]=R32(c->r[31]+0x00000020u); // 8016E0FC
  c->r[3]=c->r[3]+0x000003A4u; // 8016E100
  c->r[6]=R32(c->r[31]+0x00000000u); // 8016E104
  c->r[0]=c->r[3]+0x00000049u; // 8016E108
  c->r[5]=R32(c->r[31]+0x00000004u); // 8016E10C
  c->r[4]=R32(c->r[31]+0x00000008u); // 8016E110
  c->r[3]=c->r[1]+0x00000008u; // 8016E114
  c->r[8]=R32(c->r[31]+0x00000010u); // 8016E118
  {uint32_t ea=c->r[31]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E11C
  W32(c->r[1]+0x0000002Cu,c->r[7]); // 8016E120
  c->r[7]=R32(c->r[31]+0x00000018u); // 8016E124
  W32(c->r[1]+0x00000008u,c->r[6]); // 8016E128
  c->r[6]=R32(c->r[31]+0x0000001Cu); // 8016E12C
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8016E130
  c->r[5]=R32(c->r[31]+0x00000024u); // 8016E134
  W32(c->r[1]+0x00000010u,c->r[4]); // 8016E138
  c->r[4]=R32(c->r[31]+0x00000028u); // 8016E13C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E140
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8016E144
  W32(c->r[1]+0x00000018u,c->r[8]); // 8016E148
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8016E14C
  c->r[8]=R32(c->r[30]+0x00000008u); // 8016E150
  W32(c->r[1]+0x00000020u,c->r[8]); // 8016E154
  W32(c->r[1]+0x00000024u,c->r[7]); // 8016E158
  W32(c->r[1]+0x00000028u,c->r[6]); // 8016E15C
  W32(c->r[1]+0x00000030u,c->r[5]); // 8016E160
  W32(c->r[1]+0x00000034u,c->r[4]); // 8016E164
  W32(c->r[1]+0x00000038u,c->r[0]); // 8016E168
  c->lr=0x8016E170u; f_80161CB8(c); // 8016E16C
  cmps(c,0,(int32_t)c->r[3],0); // 8016E170
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8016E174
  if (!crb(c,2)) { goto L_8016E198; } // 8016E178
  c->r[12]=R32(c->r[30]+0x00000000u); // 8016E17C
  c->r[3]=c->r[30]|c->r[30]; // 8016E180
  c->r[12]=R32(c->r[12]+0x00000014u); // 8016E184
  c->ctr=c->r[12]; // 8016E188
  if (true) { c->lr=0x8016E190u; dispatch(c,c->ctr); } // 8016E18C
  c->r[3]=0u+0x00000000u; // 8016E190
  goto L_8016E1B8; // 8016E194
L_8016E198:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 8016E198
  cmps(c,0,(int32_t)c->r[0],0); // 8016E19C
  if (crb(c,2)) { goto L_8016E1B4; } // 8016E1A0
  c->r[4]=0u+0x80170000u; // 8016E1A4
  c->r[5]=c->r[30]|c->r[30]; // 8016E1A8
  c->r[4]=c->r[4]+0xFFFFE24Cu; // 8016E1AC
  c->lr=0x8016E1B4u; f_80162F14(c); // 8016E1B0
L_8016E1B4:;
  c->r[3]=0u+0x00000001u; // 8016E1B4
L_8016E1B8:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8016E1B8
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8016E1BC
  c->r[30]=R32(c->r[1]+0x00000048u); // 8016E1C0
  c->lr=c->r[0]; // 8016E1C4
  c->r[1]=c->r[1]+0x00000050u; // 8016E1C8
  return; // 8016E1CC
}

// Finalize__16CriSrVoiceCoreSjFv
void f_8016E1D0(Ctx* __restrict c) {
  trace_call(0x8016E1D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E1D0
  c->r[0]=c->lr; // 8016E1D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E1D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E1DC
  c->r[31]=c->r[3]|c->r[3]; // 8016E1E0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8016E1E4
  cmps(c,0,(int32_t)c->r[0],0); // 8016E1E8
  if (crb(c,2)) { goto L_8016E20C; } // 8016E1EC
  c->r[3]=c->r[0]|c->r[0]; // 8016E1F0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8016E1F4
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016E1F8
  c->ctr=c->r[12]; // 8016E1FC
  if (true) { c->lr=0x8016E204u; dispatch(c,c->ctr); } // 8016E200
  c->r[0]=0u+0x00000000u; // 8016E204
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8016E208
L_8016E20C:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016E20C
  cmps(c,0,(int32_t)c->r[3],0); // 8016E210
  if (crb(c,2)) { goto L_8016E224; } // 8016E214
  c->lr=0x8016E21Cu; f_8017DD58(c); // 8016E218
  c->r[0]=0u+0x00000000u; // 8016E21C
  W32(c->r[31]+0x00000008u,c->r[0]); // 8016E220
L_8016E224:;
  c->r[0]=0u+0x00000000u; // 8016E224
  W32(c->r[31]+0x00000008u,c->r[0]); // 8016E228
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E22C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E230
  c->lr=c->r[0]; // 8016E234
  c->r[1]=c->r[1]+0x00000010u; // 8016E238
  return; // 8016E23C
}

// TerminateSupply__16CriSrVoiceCoreSjFv
void f_8016E240(Ctx* __restrict c) {
  trace_call(0x8016E240u);
  c->r[0]=0u+0x00000001u; // 8016E240
  W32(c->r[3]+0x00000010u,c->r[0]); // 8016E244
  return; // 8016E248
}

// GetDataCallback__16CriSrVoiceCoreSjFPvUlUl
void f_8016E24C(Ctx* __restrict c) {
  trace_call(0x8016E24Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E24C
  c->r[0]=c->lr; // 8016E250
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016E254
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016E258
  c->r[31]=0u+0x00000000u; // 8016E25C
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016E260
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016E264
  c->r[29]=c->r[3]|c->r[3]; // 8016E268
L_8016E26C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8016E26C
  c->r[4]=c->r[1]+0x00000008u; // 8016E270
  c->lr=0x8016E278u; f_8017DF04(c); // 8016E274
  c->r[3]=R32(c->r[29]+0x00000008u); // 8016E278
  c->r[4]=c->r[1]+0x00000010u; // 8016E27C
  c->lr=0x8016E284u; f_8017DE1C(c); // 8016E280
  c->r[30]=R32(c->r[1]+0x00000014u); // 8016E284
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8016E288
  cmpu(c,0,c->r[0],c->r[30]); // 8016E28C
  if (!crb(c,0)) { goto L_8016E298; } // 8016E290
  c->r[30]=c->r[0]|c->r[0]; // 8016E294
L_8016E298:;
  cmps(c,0,(int32_t)c->r[30],0); // 8016E298
  if (crb(c,2)) { goto L_8016E2C0; } // 8016E29C
  c->r[12]=R32(c->r[29]+0x00000000u); // 8016E2A0
  c->r[3]=c->r[29]|c->r[29]; // 8016E2A4
  c->r[6]=c->r[30]|c->r[30]; // 8016E2A8
  c->r[4]=R32(c->r[1]+0x00000010u); // 8016E2AC
  c->r[12]=R32(c->r[12]+0x00000018u); // 8016E2B0
  c->r[5]=R32(c->r[1]+0x00000008u); // 8016E2B4
  c->ctr=c->r[12]; // 8016E2B8
  if (true) { c->lr=0x8016E2C0u; dispatch(c,c->ctr); } // 8016E2BC
L_8016E2C0:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 8016E2C0
  c->r[5]=c->r[30]|c->r[30]; // 8016E2C4
  c->r[4]=c->r[1]+0x00000010u; // 8016E2C8
  c->lr=0x8016E2D0u; f_8017DE38(c); // 8016E2CC
  c->r[3]=R32(c->r[29]+0x00000004u); // 8016E2D0
  c->r[5]=c->r[30]|c->r[30]; // 8016E2D4
  c->r[4]=c->r[1]+0x00000008u; // 8016E2D8
  c->lr=0x8016E2E0u; f_8017DF20(c); // 8016E2DC
  c->r[31]=c->r[31]+0x00000001u; // 8016E2E0
  cmpu(c,0,c->r[31],0x00000004u); // 8016E2E4
  if (crb(c,0)) { IRQCHK(c); goto L_8016E26C; } // 8016E2E8
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016E2EC
  cmps(c,0,(int32_t)c->r[0],1); // 8016E2F0
  if (!crb(c,2)) { goto L_8016E314; } // 8016E2F4
  c->r[3]=R32(c->r[29]+0x00000004u); // 8016E2F8
  c->r[4]=0u+0x00000001u; // 8016E2FC
  c->lr=0x8016E304u; f_8017DDB4(c); // 8016E300
  cmps(c,0,(int32_t)c->r[3],0); // 8016E304
  if (!crb(c,2)) { goto L_8016E314; } // 8016E308
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 8016E30C
  c->lr=0x8016E314u; f_80162F08(c); // 8016E310
L_8016E314:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8016E314
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8016E318
  c->r[30]=R32(c->r[1]+0x00000028u); // 8016E31C
  c->r[29]=R32(c->r[1]+0x00000024u); // 8016E320
  c->lr=c->r[0]; // 8016E324
  c->r[1]=c->r[1]+0x00000030u; // 8016E328
  return; // 8016E32C
}

// TransferData__16CriSrVoiceCoreSjFPvPvUl
void f_8016E330(Ctx* __restrict c) {
  trace_call(0x8016E330u);
  c->r[3]=c->r[4]|c->r[4]; // 8016E330
  c->r[4]=c->r[5]|c->r[5]; // 8016E334
  c->r[5]=c->r[6]|c->r[6]; // 8016E338
  f_800043C4(c); return; // 8016E33C
}

// Create__13CriAcAdpcmWiiFP15_criheap_structPUcUl
void f_8016E340(Ctx* __restrict c) {
  trace_call(0x8016E340u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E340
  c->r[0]=c->lr; // 8016E344
  c->r[7]=0u+0x00000004u; // 8016E348
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016E34C
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016E350
  c->r[27]=c->r[3]|c->r[3]; // 8016E354
  c->r[31]=0u+0x802D0000u; // 8016E358
  c->r[28]=c->r[4]|c->r[4]; // 8016E35C
  c->r[29]=c->r[5]|c->r[5]; // 8016E360
  c->r[4]=c->r[27]|c->r[27]; // 8016E364
  c->r[6]=c->r[31]+0x000003F8u; // 8016E368
  c->r[3]=0u+0x00000020u; // 8016E36C
  c->r[5]=0u+0x00000002u; // 8016E370
  c->lr=0x8016E378u; f_8017BF5C(c); // 8016E374
  cmps(c,0,(int32_t)c->r[3],0); // 8016E378
  c->r[30]=c->r[3]|c->r[3]; // 8016E37C
  if (!crb(c,2)) { goto L_8016E3A0; } // 8016E380
  c->r[4]=c->r[31]+0x000003F8u; // 8016E384
  c->r[3]=0u+0x00000000u; // 8016E388
  c->r[4]=c->r[4]+0x0000000Eu; // 8016E38C
  c->r[5]=0u+0xFFFFFFFDu; // 8016E390
  c->lr=0x8016E398u; f_8017968C(c); // 8016E394
  c->r[3]=0u+0x00000000u; // 8016E398
  goto L_8016E4C0; // 8016E39C
L_8016E3A0:;
  c->r[3]=c->r[27]|c->r[27]; // 8016E3A0
  c->r[5]=c->r[28]|c->r[28]; // 8016E3A4
  c->r[6]=c->r[29]|c->r[29]; // 8016E3A8
  c->r[4]=0u+0x00000002u; // 8016E3AC
  c->lr=0x8016E3B4u; f_8017F37C(c); // 8016E3B0
  cmps(c,0,(int32_t)c->r[3],0); // 8016E3B4
  W32(c->r[30]+0x00000000u,c->r[3]); // 8016E3B8
  if (!crb(c,2)) { goto L_8016E400; } // 8016E3BC
  c->r[4]=c->r[31]+0x000003F8u; // 8016E3C0
  c->r[3]=0u+0x00000000u; // 8016E3C4
  c->r[4]=c->r[4]+0x00000018u; // 8016E3C8
  c->r[5]=0u+0xFFFFFFFFu; // 8016E3CC
  c->lr=0x8016E3D4u; f_8017968C(c); // 8016E3D0
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E3D4
  cmps(c,0,(int32_t)c->r[3],0); // 8016E3D8
  if (crb(c,2)) { goto L_8016E3EC; } // 8016E3DC
  c->lr=0x8016E3E4u; f_8017BE04(c); // 8016E3E0
  c->r[0]=0u+0x00000000u; // 8016E3E4
  W32(c->r[30]+0x00000000u,c->r[0]); // 8016E3E8
L_8016E3EC:;
  c->r[3]=c->r[30]|c->r[30]; // 8016E3EC
  c->r[4]=0u+0x00000020u; // 8016E3F0
  c->lr=0x8016E3F8u; f_8017BFE8(c); // 8016E3F4
  c->r[3]=0u+0x00000000u; // 8016E3F8
  goto L_8016E4C0; // 8016E3FC
L_8016E400:;
  c->lr=0x8016E404u; f_8017A730(c); // 8016E400
  cmpu(c,0,c->r[3],0x00000001u); // 8016E404
  W32(c->r[30]+0x00000004u,c->r[3]); // 8016E408
  if (!crb(c,1)) { goto L_8016E418; } // 8016E40C
  c->r[0]=0u+0x00000001u; // 8016E410
  W32(c->r[30]+0x00000004u,c->r[0]); // 8016E414
L_8016E418:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E418
  c->r[4]=0u+0x00000000u; // 8016E41C
  c->r[5]=0u+0x00000000u; // 8016E420
  c->lr=0x8016E428u; f_8017ADCC(c); // 8016E424
  W32(c->r[30]+0x00000008u,c->r[3]); // 8016E428
  c->r[4]=0u+0x00000000u; // 8016E42C
  c->r[5]=0u+0x00000002u; // 8016E430
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E434
  c->lr=0x8016E43Cu; f_8017AB54(c); // 8016E438
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8016E43C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8016E440
  c->r[4]=0u+0x00000000u; // 8016E444
  c->r[5]=0u+0x00000001u; // 8016E448
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E44C
  c->lr=0x8016E454u; f_8017ADCC(c); // 8016E450
  W32(c->r[30]+0x00000010u,c->r[3]); // 8016E454
  c->r[6]=c->r[1]+0x00000008u; // 8016E458
  c->r[4]=0u+0x00000000u; // 8016E45C
  c->r[5]=0u+0x00000004u; // 8016E460
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E464
  c->lr=0x8016E46Cu; f_8017A738(c); // 8016E468
  c->r[0]=R32(c->r[1]+0x00000010u); // 8016E46C
  c->r[6]=c->r[1]+0x00000008u; // 8016E470
  W32(c->r[30]+0x00000014u,c->r[0]); // 8016E474
  c->r[4]=0u+0x00000000u; // 8016E478
  c->r[5]=0u+0x00000005u; // 8016E47C
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E480
  c->lr=0x8016E488u; f_8017A738(c); // 8016E484
  c->r[0]=R32(c->r[1]+0x00000010u); // 8016E488
  c->r[4]=0u+0x00000000u; // 8016E48C
  W32(c->r[30]+0x00000018u,c->r[0]); // 8016E490
  c->r[5]=0u+0x00000003u; // 8016E494
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E498
  c->lr=0x8016E4A0u; f_8017AB54(c); // 8016E49C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8016E4A0
  if (!crb(c,2)) { goto L_8016E4B4; } // 8016E4A4
  c->r[0]=0u+0x00000000u; // 8016E4A8
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8016E4AC
  goto L_8016E4BC; // 8016E4B0
L_8016E4B4:;
  c->r[0]=0u+0x00000001u; // 8016E4B4
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 8016E4B8
L_8016E4BC:;
  c->r[3]=c->r[30]|c->r[30]; // 8016E4BC
L_8016E4C0:;
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016E4C0
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016E4C4
  c->lr=c->r[0]; // 8016E4C8
  c->r[1]=c->r[1]+0x00000040u; // 8016E4CC
  return; // 8016E4D0
}

// Destroy__13CriAcAdpcmWiiFv
void f_8016E4D4(Ctx* __restrict c) {
  trace_call(0x8016E4D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E4D4
  c->r[0]=c->lr; // 8016E4D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E4DC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016E4E0
  c->r[31]=c->r[3]|c->r[3]; // 8016E4E4
  c->r[0]=R32(c->r[3]+0x00000000u); // 8016E4E8
  cmps(c,0,(int32_t)c->r[0],0); // 8016E4EC
  if (crb(c,2)) { goto L_8016E504; } // 8016E4F0
  c->r[3]=c->r[0]|c->r[0]; // 8016E4F4
  c->lr=0x8016E4FCu; f_8017BE04(c); // 8016E4F8
  c->r[0]=0u+0x00000000u; // 8016E4FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 8016E500
L_8016E504:;
  c->r[3]=c->r[31]|c->r[31]; // 8016E504
  c->r[4]=0u+0x00000020u; // 8016E508
  c->lr=0x8016E510u; f_8017BFE8(c); // 8016E50C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016E514
  c->lr=c->r[0]; // 8016E518
  c->r[1]=c->r[1]+0x00000010u; // 8016E51C
  return; // 8016E520
}

// GetSfreq__13CriAcAdpcmWiiFv
void f_8016E524(Ctx* __restrict c) {
  trace_call(0x8016E524u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 8016E524
  return; // 8016E528
}

// GetNumChan__13CriAcAdpcmWiiFv
void f_8016E52C(Ctx* __restrict c) {
  trace_call(0x8016E52Cu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8016E52C
  return; // 8016E530
}

// GetNumSample__13CriAcAdpcmWiiFv
void f_8016E534(Ctx* __restrict c) {
  trace_call(0x8016E534u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 8016E534
  return; // 8016E538
}

// GetWaveData__13CriAcAdpcmWiiFv
void f_8016E53C(Ctx* __restrict c) {
  trace_call(0x8016E53Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8016E53C
  return; // 8016E540
}

// GetAdpcmHeader__13CriAcAdpcmWiiFv
void f_8016E544(Ctx* __restrict c) {
  trace_call(0x8016E544u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 8016E544
  return; // 8016E548
}

// Execute__11CriSrAuxLocFv
void f_8016E54C(Ctx* __restrict c) {
  trace_call(0x8016E54Cu);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8016E54C
  f_8016E554(c); return; // 8016E550
}

// Execute__15CriSrAuxCoreWiiFv
void f_8016E554(Ctx* __restrict c) {
  trace_call(0x8016E554u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E554
  c->r[0]=c->lr; // 8016E558
  c->r[4]=0u+0x00000001u; // 8016E55C
  c->r[5]=0u+0xFFFFFFFFu; // 8016E560
  W32(c->r[1]+0x00000044u,c->r[0]); // 8016E564
  c->r[6]=c->r[1]+0x00000010u; // 8016E568
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016E56C
  c->r[31]=c->r[3]|c->r[3]; // 8016E570
  c->r[3]=R32(c->r[3]+0x00000030u); // 8016E574
  c->lr=0x8016E57Cu; f_8017DD84(c); // 8016E578
  c->r[3]=R32(c->r[31]+0x00000030u); // 8016E57C
  c->r[5]=c->r[1]+0x00000010u; // 8016E580
  c->r[4]=0u+0x00000001u; // 8016E584
  c->lr=0x8016E58Cu; f_8017DD94(c); // 8016E588
  c->r[0]=R32(c->r[31]+0x00000038u); // 8016E58C
  cmps(c,0,(int32_t)c->r[0],1); // 8016E590
  if (!crb(c,2)) { goto L_8016E688; } // 8016E594
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 8016E598
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016E59C
  c->r[4]=c->r[4]+0x80000000u; // 8016E5A0
  c->r[5]=R32(c->r[31]+0x00000048u); // 8016E5A4
  c->r[0]=R32(c->r[3]+0x000000A2u); // 8016E5A8
  c->r[3]=rotl(c->r[4],31)&0x7FFFFFFFu; // 8016E5AC
  c->r[6]=c->r[0]-c->r[3]; // 8016E5B0
  cmpu(c,0,c->r[6],c->r[5]); // 8016E5B4
  if (crb(c,0)) { goto L_8016E5C8; } // 8016E5B8
  c->r[0]=c->r[6]-c->r[5]; // 8016E5BC
  c->r[25]=rotl(c->r[0],1)&0xFFFFFFFEu; // 8016E5C0
  goto L_8016E5DC; // 8016E5C4
L_8016E5C8:;
  c->r[0]=R32(c->r[31]+0x00000044u); // 8016E5C8
  c->r[3]=rotl(c->r[5],1)&0xFFFFFFFEu; // 8016E5CC
  c->r[4]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8016E5D0
  c->r[0]=c->r[0]-c->r[3]; // 8016E5D4
  c->r[25]=c->r[4]+c->r[0]; // 8016E5D8
L_8016E5DC:;
  W32(c->r[31]+0x00000048u,c->r[6]); // 8016E5DC
  c->r[29]=c->r[31]|c->r[31]; // 8016E5E0
  c->r[28]=c->r[1]+0x00000010u; // 8016E5E4
  c->r[26]=0u+0x00000000u; // 8016E5E8
  goto L_8016E610; // 8016E5EC
L_8016E5F0:;
  c->r[3]=R32(c->r[29]+0x00000030u); // 8016E5F0
  c->r[5]=c->r[25]|c->r[25]; // 8016E5F4
  c->r[6]=c->r[28]|c->r[28]; // 8016E5F8
  c->r[4]=0u+0x00000001u; // 8016E5FC
  c->lr=0x8016E604u; f_8017DD84(c); // 8016E600
  c->r[28]=c->r[28]+0x00000008u; // 8016E604
  c->r[29]=c->r[29]+0x00000004u; // 8016E608
  c->r[26]=c->r[26]+0x00000001u; // 8016E60C
L_8016E610:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016E610
  cmpu(c,0,c->r[26],c->r[0]); // 8016E614
  if (crb(c,0)) { IRQCHK(c); goto L_8016E5F0; } // 8016E618
  c->r[26]=R32(c->r[1]+0x00000014u); // 8016E61C
  c->r[29]=c->r[31]|c->r[31]; // 8016E620
  c->r[28]=c->r[1]+0x00000010u; // 8016E624
  c->r[27]=0u+0x00000000u; // 8016E628
  c->r[30]=c->r[25]-c->r[26]; // 8016E62C
  goto L_8016E67C; // 8016E630
L_8016E634:;
  c->r[3]=R32(c->r[29]+0x00000030u); // 8016E634
  c->r[5]=c->r[28]|c->r[28]; // 8016E638
  c->r[4]=0u+0x00000000u; // 8016E63C
  c->lr=0x8016E644u; f_8017DDA4(c); // 8016E640
  cmpu(c,0,c->r[26],c->r[25]); // 8016E644
  if (!crb(c,0)) { goto L_8016E670; } // 8016E648
  c->r[3]=R32(c->r[29]+0x00000030u); // 8016E64C
  c->r[5]=c->r[30]|c->r[30]; // 8016E650
  c->r[6]=c->r[28]|c->r[28]; // 8016E654
  c->r[4]=0u+0x00000001u; // 8016E658
  c->lr=0x8016E660u; f_8017DD84(c); // 8016E65C
  c->r[3]=R32(c->r[29]+0x00000030u); // 8016E660
  c->r[5]=c->r[28]|c->r[28]; // 8016E664
  c->r[4]=0u+0x00000000u; // 8016E668
  c->lr=0x8016E670u; f_8017DDA4(c); // 8016E66C
L_8016E670:;
  c->r[28]=c->r[28]+0x00000008u; // 8016E670
  c->r[29]=c->r[29]+0x00000004u; // 8016E674
  c->r[27]=c->r[27]+0x00000001u; // 8016E678
L_8016E67C:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016E67C
  cmpu(c,0,c->r[27],c->r[0]); // 8016E680
  if (crb(c,0)) { IRQCHK(c); goto L_8016E634; } // 8016E684
L_8016E688:;
  c->r[30]=c->r[31]|c->r[31]; // 8016E688
  c->r[29]=c->r[1]+0x00000010u; // 8016E68C
  c->r[28]=c->r[1]+0x00000008u; // 8016E690
  c->r[27]=0u+0x00000000u; // 8016E694
  goto L_8016E6C8; // 8016E698
L_8016E69C:;
  c->r[3]=R32(c->r[30]+0x00000030u); // 8016E69C
  c->r[6]=c->r[29]|c->r[29]; // 8016E6A0
  c->r[4]=0u+0x00000000u; // 8016E6A4
  c->r[5]=0u+0xFFFFFFFFu; // 8016E6A8
  c->lr=0x8016E6B0u; f_8017DD84(c); // 8016E6AC
  c->r[0]=R32(c->r[29]+0x00000000u); // 8016E6B0
  c->r[30]=c->r[30]+0x00000004u; // 8016E6B4
  W32(c->r[28]+0x00000000u,c->r[0]); // 8016E6B8
  c->r[28]=c->r[28]+0x00000004u; // 8016E6BC
  c->r[27]=c->r[27]+0x00000001u; // 8016E6C0
  c->r[29]=c->r[29]+0x00000008u; // 8016E6C4
L_8016E6C8:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 8016E6C8
  cmpu(c,0,c->r[27],c->r[4]); // 8016E6CC
  if (crb(c,0)) { IRQCHK(c); goto L_8016E69C; } // 8016E6D0
  c->r[12]=R32(c->r[31]+0x0000004Cu); // 8016E6D4
  cmps(c,0,(int32_t)c->r[12],0); // 8016E6D8
  if (crb(c,2)) { goto L_8016E6FC; } // 8016E6DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E6E0
  c->r[5]=c->r[1]+0x00000008u; // 8016E6E4
  c->r[3]=R32(c->r[31]+0x00000050u); // 8016E6E8
  c->r[7]=0u+0x00000001u; // 8016E6EC
  c->r[6]=rotl(c->r[0],31)&0x7FFFFFFFu; // 8016E6F0
  c->ctr=c->r[12]; // 8016E6F4
  if (true) { c->lr=0x8016E6FCu; dispatch(c,c->ctr); } // 8016E6F8
L_8016E6FC:;
  c->r[29]=c->r[31]|c->r[31]; // 8016E6FC
  c->r[30]=c->r[1]+0x00000010u; // 8016E700
  c->r[28]=0u+0x00000000u; // 8016E704
  goto L_8016E734; // 8016E708
L_8016E70C:;
  c->r[3]=R32(c->r[29]+0x00000030u); // 8016E70C
  c->r[5]=c->r[30]|c->r[30]; // 8016E710
  c->r[4]=0u+0x00000001u; // 8016E714
  c->lr=0x8016E71Cu; f_8017DDA4(c); // 8016E718
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016E71C
  c->r[4]=R32(c->r[30]+0x00000004u); // 8016E720
  c->lr=0x8016E728u; f_8007BA60(c); // 8016E724
  c->r[30]=c->r[30]+0x00000008u; // 8016E728
  c->r[29]=c->r[29]+0x00000004u; // 8016E72C
  c->r[28]=c->r[28]+0x00000001u; // 8016E730
L_8016E734:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016E734
  cmpu(c,0,c->r[28],c->r[0]); // 8016E738
  if (crb(c,0)) { IRQCHK(c); goto L_8016E70C; } // 8016E73C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016E740
  c->r[0]=R16(c->r[3]+0x00000038u); // 8016E744
  cmps(c,0,(int32_t)c->r[0],0); // 8016E748
  if (!crb(c,2)) { goto L_8016E784; } // 8016E74C
  c->r[30]=c->r[31]|c->r[31]; // 8016E750
  c->r[28]=0u+0x00000000u; // 8016E754
  goto L_8016E770; // 8016E758
L_8016E75C:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 8016E75C
  c->r[4]=0u+0x00000001u; // 8016E760
  c->lr=0x8016E768u; f_8009A360(c); // 8016E764
  c->r[30]=c->r[30]+0x00000004u; // 8016E768
  c->r[28]=c->r[28]+0x00000001u; // 8016E76C
L_8016E770:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016E770
  cmpu(c,0,c->r[28],c->r[0]); // 8016E774
  if (crb(c,0)) { IRQCHK(c); goto L_8016E75C; } // 8016E778
  c->r[0]=0u+0x00000001u; // 8016E77C
  W32(c->r[31]+0x00000038u,c->r[0]); // 8016E780
L_8016E784:;
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016E784
  c->r[0]=R32(c->r[1]+0x00000044u); // 8016E788
  c->lr=c->r[0]; // 8016E78C
  c->r[1]=c->r[1]+0x00000040u; // 8016E790
  return; // 8016E794
}

// GetRequiredStaticMemorySize__25CriSrEnvelopeGeneratorWiiFv
void f_8016E798(Ctx* __restrict c) {
  trace_call(0x8016E798u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E798
  c->r[0]=c->lr; // 8016E79C
  c->r[3]=0u+0x00000004u; // 8016E7A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E7A4
  c->lr=0x8016E7ACu; f_8017C018(c); // 8016E7A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016E7AC
  c->r[3]=c->r[3]+0x0000002Cu; // 8016E7B0
  c->lr=c->r[0]; // 8016E7B4
  c->r[1]=c->r[1]+0x00000010u; // 8016E7B8
  return; // 8016E7BC
}

// Create__25CriSrEnvelopeGeneratorWiiFP15_criheap_structPCc
void f_8016E7C0(Ctx* __restrict c) {
  trace_call(0x8016E7C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E7C0
  c->r[0]=c->lr; // 8016E7C4
  c->r[5]=0u+0x802D0000u; // 8016E7C8
  c->r[4]=c->r[3]|c->r[3]; // 8016E7CC
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016E7D0
  c->r[5]=c->r[5]+0x0000043Cu; // 8016E7D4
  c->r[3]=0u+0x0000002Cu; // 8016E7D8
  c->r[6]=0u+0x00000004u; // 8016E7DC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016E7E0
  c->r[31]=c->r[1]|c->r[1]; // 8016E7E4
  c->lr=0x8016E7ECu; f_8017BEDC(c); // 8016E7E8
  cmps(c,0,(int32_t)c->r[3],0); // 8016E7EC
  if (crb(c,2)) { goto L_8016E834; } // 8016E7F0
  c->r[4]=0u+0x80330000u; // 8016E7F4
  {uint32_t ea=c->r[2]+0xFFFFB450u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E7F8
  c->r[4]=c->r[4]+0x00001878u; // 8016E7FC
  W32(c->r[3]+0x00000000u,c->r[4]); // 8016E800
  c->r[0]=0u+0x00000000u; // 8016E804
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E808
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8016E80C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8016E810
  W32(c->r[3]+0x00000010u,c->r[0]); // 8016E814
  W32(c->r[3]+0x00000014u,c->r[0]); // 8016E818
  W32(c->r[3]+0x00000018u,c->r[0]); // 8016E81C
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8016E820
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 8016E824
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8016E828
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016E82C
  W32(c->r[3]+0x00000028u,c->r[0]); // 8016E830
L_8016E834:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016E834
  if (!crb(c,2)) { goto L_8016E858; } // 8016E838
  c->r[4]=0u+0x802D0000u; // 8016E83C
  c->r[3]=0u+0x00000000u; // 8016E840
  c->r[4]=c->r[4]+0x0000043Cu; // 8016E844
  c->r[5]=0u+0xFFFFFFFDu; // 8016E848
  c->r[4]=c->r[4]+0x0000000Cu; // 8016E84C
  c->lr=0x8016E854u; f_8017968C(c); // 8016E850
  c->r[3]=0u+0x00000000u; // 8016E854
L_8016E858:;
  c->r[10]=c->r[31]|c->r[31]; // 8016E858
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8016E85C
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016E860
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016E864
  c->r[1]=c->r[10]|c->r[10]; // 8016E868
  c->lr=c->r[0]; // 8016E86C
  return; // 8016E870
}

// Destroy__25CriSrEnvelopeGeneratorWiiFv
void f_8016E874(Ctx* __restrict c) {
  trace_call(0x8016E874u);
  cmps(c,0,(int32_t)c->r[3],0); // 8016E874
  if (crb(c,2)) return; // 8016E878
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016E87C
  c->r[4]=0u+0x00000001u; // 8016E880
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016E884
  c->ctr=c->r[12]; // 8016E888
  if (true) { dispatch(c,c->ctr); return; } // 8016E88C
  return; // 8016E890
}

// Execute__25CriSrEnvelopeGeneratorWiiFv
void f_8016E894(Ctx* __restrict c) {
  trace_call(0x8016E894u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016E894
  c->r[0]=0u+0x43300000u; // 8016E898
  c->r[4]=R32(c->r[3]+0x00000028u); // 8016E89C
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016E8A0
  cmps(c,0,(int32_t)c->r[4],0); // 8016E8A4
  W32(c->r[1]+0x00000010u,c->r[0]); // 8016E8A8
  if (crb(c,2)) { goto L_8016EB44; } // 8016E8AC
  cmps(c,0,(int32_t)c->r[4],7); // 8016E8B0
  if (!crb(c,2)) { goto L_8016E8BC; } // 8016E8B4
  goto L_8016EB44; // 8016E8B8
L_8016E8BC:;
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016E8BC
  c->r[8]=0u+0x00000002u; // 8016E8C0
  {uint32_t ea=c->r[2]+0xFFFFB450u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E8C4
  c->r[7]=0u+0x00000003u; // 8016E8C8
  c->r[6]=0u+0x00000004u; // 8016E8CC
  c->r[4]=0u+0x00000005u; // 8016E8D0
  c->r[0]=0u+0x00000007u; // 8016E8D4
L_8016E8D8:;
  c->r[9]=R32(c->r[3]+0x00000008u); // 8016E8D8
  cmps(c,0,(int32_t)c->r[9],0); // 8016E8DC
  if (!crb(c,1)) { goto L_8016E8F0; } // 8016E8E0
  c->r[0]=c->r[9]+0xFFFFFFFFu; // 8016E8E4
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016E8E8
  goto L_8016E998; // 8016E8EC
L_8016E8F0:;
  c->r[5]=R32(c->r[3]+0x00000028u); // 8016E8F0
  cmps(c,0,(int32_t)c->r[5],5); // 8016E8F4
  if (crb(c,2)) { goto L_8016E998; } // 8016E8F8
  cmps(c,0,(int32_t)c->r[5],7); // 8016E8FC
  if (crb(c,2)) { goto L_8016E998; } // 8016E900
  cmps(c,0,(int32_t)c->r[5],1); // 8016E904
  if (crb(c,2)) { goto L_8016E930; } // 8016E908
  cmps(c,0,(int32_t)c->r[5],2); // 8016E90C
  if (crb(c,2)) { goto L_8016E944; } // 8016E910
  cmps(c,0,(int32_t)c->r[5],3); // 8016E914
  if (crb(c,2)) { goto L_8016E95C; } // 8016E918
  cmps(c,0,(int32_t)c->r[5],4); // 8016E91C
  if (crb(c,2)) { goto L_8016E970; } // 8016E920
  cmps(c,0,(int32_t)c->r[5],6); // 8016E924
  if (crb(c,2)) { goto L_8016E990; } // 8016E928
  IRQCHK(c); goto L_8016E8D8; // 8016E92C
L_8016E930:;
  c->r[5]=R32(c->r[3]+0x00000010u); // 8016E930
  W32(c->r[3]+0x00000028u,c->r[8]); // 8016E934
  c->r[5]=c->r[9]+c->r[5]; // 8016E938
  W32(c->r[3]+0x00000008u,c->r[5]); // 8016E93C
  IRQCHK(c); goto L_8016E8D8; // 8016E940
L_8016E944:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 8016E944
  W32(c->r[3]+0x00000028u,c->r[7]); // 8016E948
  c->r[5]=c->r[9]+c->r[5]; // 8016E94C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[2]);} // 8016E950
  W32(c->r[3]+0x00000008u,c->r[5]); // 8016E954
  IRQCHK(c); goto L_8016E8D8; // 8016E958
L_8016E95C:;
  c->r[5]=R32(c->r[3]+0x00000018u); // 8016E95C
  W32(c->r[3]+0x00000028u,c->r[6]); // 8016E960
  c->r[5]=c->r[9]+c->r[5]; // 8016E964
  W32(c->r[3]+0x00000008u,c->r[5]); // 8016E968
  IRQCHK(c); goto L_8016E8D8; // 8016E96C
L_8016E970:;
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016E970
  W32(c->r[3]+0x00000028u,c->r[4]); // 8016E974
  fcmp(c,0,c->f[1],c->f[0]); // 8016E978
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8016E97C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8016E980
  if (!crb(c,2)) { IRQCHK(c); goto L_8016E8D8; } // 8016E984
  W32(c->r[3]+0x00000028u,c->r[0]); // 8016E988
  IRQCHK(c); goto L_8016E8D8; // 8016E98C
L_8016E990:;
  W32(c->r[3]+0x00000028u,c->r[0]); // 8016E990
  IRQCHK(c); goto L_8016E8D8; // 8016E994
L_8016E998:;
  c->r[0]=R32(c->r[3]+0x00000028u); // 8016E998
  cmps(c,0,(int32_t)c->r[0],1); // 8016E99C
  if (crb(c,2)) { goto L_8016E9D0; } // 8016E9A0
  cmps(c,0,(int32_t)c->r[0],2); // 8016E9A4
  if (crb(c,2)) { goto L_8016E9DC; } // 8016E9A8
  cmps(c,0,(int32_t)c->r[0],3); // 8016E9AC
  if (crb(c,2)) { goto L_8016EA50; } // 8016E9B0
  cmps(c,0,(int32_t)c->r[0],4); // 8016E9B4
  if (crb(c,2)) { goto L_8016EA5C; } // 8016E9B8
  cmps(c,0,(int32_t)c->r[0],5); // 8016E9BC
  if (crb(c,2)) { goto L_8016EAD0; } // 8016E9C0
  cmps(c,0,(int32_t)c->r[0],6); // 8016E9C4
  if (crb(c,2)) { goto L_8016EADC; } // 8016E9C8
  goto L_8016EB44; // 8016E9CC
L_8016E9D0:;
  {uint32_t ea=c->r[2]+0xFFFFB450u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016E9D0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8016E9D4
  goto L_8016EB44; // 8016E9D8
L_8016E9DC:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 8016E9DC
  cmps(c,0,(int32_t)c->r[0],0); // 8016E9E0
  if (crb(c,0)) { goto L_8016EB44; } // 8016E9E4
  c->r[4]=R32(c->r[3]+0x00000010u); // 8016E9E8
  c->r[0]=c->r[0]^0x80000000u; // 8016E9EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016E9F0
  c->r[0]=c->r[4]^0x80000000u; // 8016E9F4
  {uint32_t ea=c->r[2]+0xFFFFB458u; c->f[4]=RF64(ea);} // 8016E9F8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016E9FC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8016EA00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8016EA04
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[4]); // 8016EA08
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA0C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[4]); // 8016EA10
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016EA14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8016EA18
  c->f[2]=c->ps1[2]=S(c->f[3]-c->f[2]); // 8016EA1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 8016EA20
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8016EA24
  fcmp(c,0,c->f[1],c->f[0]); // 8016EA28
  if (!crb(c,1)) { goto L_8016EA38; } // 8016EA2C
  c->f[1]=c->f[0]; // 8016EA30
  goto L_8016EA48; // 8016EA34
L_8016EA38:;
  {uint32_t ea=c->r[2]+0xFFFFB450u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA38
  fcmp(c,0,c->f[1],c->f[0]); // 8016EA3C
  if (!crb(c,0)) { goto L_8016EA48; } // 8016EA40
  c->f[1]=c->f[0]; // 8016EA44
L_8016EA48:;
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[1]);} // 8016EA48
  goto L_8016EB44; // 8016EA4C
L_8016EA50:;
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA50
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8016EA54
  goto L_8016EB44; // 8016EA58
L_8016EA5C:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8016EA5C
  cmps(c,0,(int32_t)c->r[4],0); // 8016EA60
  if (crb(c,0)) { goto L_8016EB44; } // 8016EA64
  c->r[0]=R32(c->r[3]+0x00000018u); // 8016EA68
  c->r[4]=c->r[4]^0x80000000u; // 8016EA6C
  W32(c->r[1]+0x00000014u,c->r[4]); // 8016EA70
  c->r[0]=c->r[0]^0x80000000u; // 8016EA74
  {uint32_t ea=c->r[2]+0xFFFFB458u; c->f[3]=RF64(ea);} // 8016EA78
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016EA7C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8016EA80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8016EA84
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8016EA88
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EA8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8016EA90
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[1]); // 8016EA94
  fcmp(c,0,c->f[2],c->f[0]); // 8016EA98
  if (!crb(c,1)) { goto L_8016EAA8; } // 8016EA9C
  c->f[2]=c->f[0]; // 8016EAA0
  goto L_8016EAB8; // 8016EAA4
L_8016EAA8:;
  {uint32_t ea=c->r[2]+0xFFFFB450u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EAA8
  fcmp(c,0,c->f[2],c->f[0]); // 8016EAAC
  if (!crb(c,0)) { goto L_8016EAB8; } // 8016EAB0
  c->f[2]=c->f[0]; // 8016EAB4
L_8016EAB8:;
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EAB8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EABC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8016EAC0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 8016EAC4
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8016EAC8
  goto L_8016EB44; // 8016EACC
L_8016EAD0:;
  {uint32_t ea=c->r[3]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EAD0
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8016EAD4
  goto L_8016EB44; // 8016EAD8
L_8016EADC:;
  c->r[4]=R32(c->r[3]+0x00000008u); // 8016EADC
  cmps(c,0,(int32_t)c->r[4],0); // 8016EAE0
  if (crb(c,0)) { goto L_8016EB44; } // 8016EAE4
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8016EAE8
  c->r[4]=c->r[4]^0x80000000u; // 8016EAEC
  W32(c->r[1]+0x00000014u,c->r[4]); // 8016EAF0
  c->r[0]=c->r[0]^0x80000000u; // 8016EAF4
  {uint32_t ea=c->r[2]+0xFFFFB458u; c->f[3]=RF64(ea);} // 8016EAF8
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016EAFC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8016EB00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8016EB04
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 8016EB08
  {uint32_t ea=c->r[2]+0xFFFFB454u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EB0C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[3]); // 8016EB10
  c->f[1]=c->ps1[1]=S(c->f[2]/c->f[1]); // 8016EB14
  fcmp(c,0,c->f[1],c->f[0]); // 8016EB18
  if (!crb(c,1)) { goto L_8016EB28; } // 8016EB1C
  c->f[1]=c->f[0]; // 8016EB20
  goto L_8016EB38; // 8016EB24
L_8016EB28:;
  {uint32_t ea=c->r[2]+0xFFFFB450u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EB28
  fcmp(c,0,c->f[1],c->f[0]); // 8016EB2C
  if (!crb(c,0)) { goto L_8016EB38; } // 8016EB30
  c->f[1]=c->f[0]; // 8016EB34
L_8016EB38:;
  {uint32_t ea=c->r[3]+0x00000024u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EB38
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 8016EB3C
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 8016EB40
L_8016EB44:;
  c->r[1]=c->r[1]+0x00000020u; // 8016EB44
  return; // 8016EB48
}

// Start__25CriSrEnvelopeGeneratorWiiFv
void f_8016EB4C(Ctx* __restrict c) {
  trace_call(0x8016EB4Cu);
  c->r[0]=R32(c->r[3]+0x00000028u); // 8016EB4C
  cmps(c,0,(int32_t)c->r[0],0); // 8016EB50
  if (!crb(c,2)) return; // 8016EB54
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8016EB58
  c->r[4]=0u+0x00000001u; // 8016EB5C
  W32(c->r[3]+0x00000028u,c->r[4]); // 8016EB60
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016EB64
  f_8016E894(c); return; // 8016EB68
  return; // 8016EB6C
}

// Release__25CriSrEnvelopeGeneratorWiiFv
void f_8016EB70(Ctx* __restrict c) {
  trace_call(0x8016EB70u);
  c->r[4]=R32(c->r[3]+0x00000028u); // 8016EB70
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8016EB74
  cmpu(c,0,c->r[0],0x00000004u); // 8016EB78
  if (crb(c,1)) return; // 8016EB7C
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8016EB80
  c->r[4]=0u+0x00000006u; // 8016EB84
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EB88
  W32(c->r[3]+0x00000028u,c->r[4]); // 8016EB8C
  W32(c->r[3]+0x00000008u,c->r[0]); // 8016EB90
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[0]);} // 8016EB94
  return; // 8016EB98
}

// SetDelayTime__25CriSrEnvelopeGeneratorWiiFl
void f_8016EB9C(Ctx* __restrict c) {
  trace_call(0x8016EB9Cu);
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8016EB9C
  return; // 8016EBA0
}

// SetAttackTime__25CriSrEnvelopeGeneratorWiiFl
void f_8016EBA4(Ctx* __restrict c) {
  trace_call(0x8016EBA4u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 8016EBA4
  return; // 8016EBA8
}

// SetHoldTime__25CriSrEnvelopeGeneratorWiiFl
void f_8016EBAC(Ctx* __restrict c) {
  trace_call(0x8016EBACu);
  W32(c->r[3]+0x00000014u,c->r[4]); // 8016EBAC
  return; // 8016EBB0
}

// SetDecayTime__25CriSrEnvelopeGeneratorWiiFl
void f_8016EBB4(Ctx* __restrict c) {
  trace_call(0x8016EBB4u);
  W32(c->r[3]+0x00000018u,c->r[4]); // 8016EBB4
  return; // 8016EBB8
}

// SetReleaseTime__25CriSrEnvelopeGeneratorWiiFl
void f_8016EBBC(Ctx* __restrict c) {
  trace_call(0x8016EBBCu);
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 8016EBBC
  return; // 8016EBC0
}

// SetSustainLevel__25CriSrEnvelopeGeneratorWiiFf
void f_8016EBC4(Ctx* __restrict c) {
  trace_call(0x8016EBC4u);
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 8016EBC4
  return; // 8016EBC8
}

// GetVolume__25CriSrEnvelopeGeneratorWiiCFv
void f_8016EBCC(Ctx* __restrict c) {
  trace_call(0x8016EBCCu);
  {uint32_t ea=c->r[3]+0x00000004u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EBCC
  return; // 8016EBD0
}

// GetStatus__25CriSrEnvelopeGeneratorWiiCFv
void f_8016EBD4(Ctx* __restrict c) {
  trace_call(0x8016EBD4u);
  c->r[3]=R32(c->r[3]+0x00000028u); // 8016EBD4
  return; // 8016EBD8
}

// __dt__25CriSrEnvelopeGeneratorWiiFv
void f_8016EBDC(Ctx* __restrict c) {
  trace_call(0x8016EBDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EBDC
  c->r[0]=c->lr; // 8016EBE0
  cmps(c,0,(int32_t)c->r[3],0); // 8016EBE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EBE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EBEC
  c->r[31]=c->r[3]|c->r[3]; // 8016EBF0
  if (crb(c,2)) { goto L_8016EC08; } // 8016EBF4
  cmps(c,0,(int32_t)c->r[4],0); // 8016EBF8
  if (!crb(c,1)) { goto L_8016EC08; } // 8016EBFC
  c->r[4]=0u+0x0000002Cu; // 8016EC00
  c->lr=0x8016EC08u; f_8017BFE8(c); // 8016EC04
L_8016EC08:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EC08
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EC0C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EC10
  c->lr=c->r[0]; // 8016EC14
  c->r[1]=c->r[1]+0x00000010u; // 8016EC18
  return; // 8016EC1C
}

// Create__16CriSrFade4HbmWiiFP15_criheap_struct
void f_8016EC20(Ctx* __restrict c) {
  trace_call(0x8016EC20u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EC20
  c->r[0]=c->lr; // 8016EC24
  c->r[5]=0u+0x802D0000u; // 8016EC28
  c->r[4]=c->r[3]|c->r[3]; // 8016EC2C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016EC30
  c->r[5]=c->r[5]+0x0000046Cu; // 8016EC34
  c->r[3]=0u+0x00000030u; // 8016EC38
  c->r[6]=0u+0x00000004u; // 8016EC3C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016EC40
  c->r[31]=c->r[1]|c->r[1]; // 8016EC44
  c->lr=0x8016EC4Cu; f_8017BEDC(c); // 8016EC48
  cmps(c,0,(int32_t)c->r[3],0); // 8016EC4C
  if (crb(c,2)) { goto L_8016EC94; } // 8016EC50
  c->r[5]=0u+0x80330000u; // 8016EC54
  c->r[4]=0u+0xFFFFFFFFu; // 8016EC58
  c->r[5]=c->r[5]+0x00001890u; // 8016EC5C
  W32(c->r[3]+0x00000000u,c->r[5]); // 8016EC60
  {uint32_t ea=c->r[2]+0xFFFFB460u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EC64
  c->r[0]=0u+0x00000000u; // 8016EC68
  W32(c->r[3]+0x00000004u,c->r[4]); // 8016EC6C
  {uint32_t ea=c->r[2]+0xFFFFB464u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EC70
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[1]);} // 8016EC74
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8016EC78
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 8016EC7C
  W32(c->r[3]+0x00000014u,c->r[0]); // 8016EC80
  W32(c->r[3]+0x00000018u,c->r[0]); // 8016EC84
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8016EC88
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016EC8C
  W32(c->r[3]+0x00000020u,c->r[0]); // 8016EC90
L_8016EC94:;
  cmps(c,0,(int32_t)c->r[3],0); // 8016EC94
  if (!crb(c,2)) { goto L_8016ECB8; } // 8016EC98
  c->r[4]=0u+0x802D0000u; // 8016EC9C
  c->r[3]=0u+0x00000000u; // 8016ECA0
  c->r[4]=c->r[4]+0x0000046Cu; // 8016ECA4
  c->r[5]=0u+0xFFFFFFFDu; // 8016ECA8
  c->r[4]=c->r[4]+0x0000000Bu; // 8016ECAC
  c->lr=0x8016ECB4u; f_8017968C(c); // 8016ECB0
  c->r[3]=0u+0x00000000u; // 8016ECB4
L_8016ECB8:;
  c->r[10]=c->r[31]|c->r[31]; // 8016ECB8
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8016ECBC
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016ECC0
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016ECC4
  c->r[1]=c->r[10]|c->r[10]; // 8016ECC8
  c->lr=c->r[0]; // 8016ECCC
  return; // 8016ECD0
}

// Destroy__16CriSrFade4HbmWiiFv
void f_8016ECD4(Ctx* __restrict c) {
  trace_call(0x8016ECD4u);
  cmps(c,0,(int32_t)c->r[3],0); // 8016ECD4
  if (crb(c,2)) return; // 8016ECD8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016ECDC
  c->r[4]=0u+0x00000001u; // 8016ECE0
  c->r[12]=R32(c->r[12]+0x00000008u); // 8016ECE4
  c->ctr=c->r[12]; // 8016ECE8
  if (true) { dispatch(c,c->ctr); return; } // 8016ECEC
  return; // 8016ECF0
}

// Execute__16CriSrFade4HbmWiiFv
void f_8016ECF4(Ctx* __restrict c) {
  trace_call(0x8016ECF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016ECF4
  c->r[0]=c->lr; // 8016ECF8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016ECFC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016ED00
  c->r[31]=c->r[3]|c->r[3]; // 8016ED04
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 8016ED08
  cmps(c,0,(int32_t)c->r[4],0); // 8016ED0C
  if (!crb(c,1)) { goto L_8016EDE0; } // 8016ED10
  c->r[0]=R32(c->r[3]+0x00000014u); // 8016ED14
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 8016ED18
  c->r[4]=0u+0x00010000u; // 8016ED1C
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8016ED20
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED24
  c->r[0]=c->r[4]+0xFFFF8000u; // 8016ED28
  if (!crb(c,2)) { goto L_8016ED44; } // 8016ED2C
  c->r[3]=0u+0xCCCD0000u; // 8016ED30
  c->r[0]=rotl(c->r[5],15)&0xFFFF8000u; // 8016ED34
  c->r[3]=c->r[3]+0xFFFFCCCDu; // 8016ED38
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[0])>>32); // 8016ED3C
  c->r[0]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016ED40
L_8016ED44:;
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8016ED44
  c->lr=0x8016ED4Cu; f_80098A10(c); // 8016ED48
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 8016ED4C
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED50
  if (!crb(c,2)) { goto L_8016EDE0; } // 8016ED54
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016ED58
  cmps(c,0,(int32_t)c->r[0],0); // 8016ED5C
  if (!crb(c,2)) { goto L_8016EDC0; } // 8016ED60
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016ED64
  c->r[4]=0u+0x00000000u; // 8016ED68
  c->lr=0x8016ED70u; f_801613AC(c); // 8016ED6C
  W32(c->r[31]+0x00000028u,c->r[3]); // 8016ED70
  c->r[4]=0u+0x00000001u; // 8016ED74
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016ED78
  c->lr=0x8016ED80u; f_801613AC(c); // 8016ED7C
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 8016ED80
  c->r[4]=0u+0x00000000u; // 8016ED84
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016ED88
  c->r[5]=c->r[13]+0xFFFFA278u; // 8016ED8C
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016ED90
  c->r[12]=R32(c->r[12]+0x00000054u); // 8016ED94
  c->ctr=c->r[12]; // 8016ED98
  if (true) { c->lr=0x8016EDA0u; dispatch(c,c->ctr); } // 8016ED9C
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016EDA0
  c->r[4]=0u+0x00000001u; // 8016EDA4
  c->r[5]=c->r[13]+0xFFFFA278u; // 8016EDA8
  c->r[12]=R32(c->r[3]+0x00000000u); // 8016EDAC
  c->r[12]=R32(c->r[12]+0x00000054u); // 8016EDB0
  c->ctr=c->r[12]; // 8016EDB4
  if (true) { c->lr=0x8016EDBCu; dispatch(c,c->ctr); } // 8016EDB8
  goto L_8016EDE0; // 8016EDBC
L_8016EDC0:;
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016EDC0
  c->r[4]=0u+0x00000000u; // 8016EDC4
  c->r[5]=R32(c->r[31]+0x00000028u); // 8016EDC8
  c->lr=0x8016EDD0u; f_801613BC(c); // 8016EDCC
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016EDD0
  c->r[4]=0u+0x00000001u; // 8016EDD4
  c->r[5]=R32(c->r[31]+0x0000002Cu); // 8016EDD8
  c->lr=0x8016EDE0u; f_801613BC(c); // 8016EDDC
L_8016EDE0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016EDE0
  cmps(c,0,(int32_t)c->r[3],0); // 8016EDE4
  if (!crb(c,1)) { goto L_8016EE7C; } // 8016EDE8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 8016EDEC
  c->r[3]=0u+0x43300000u; // 8016EDF0
  c->r[0]=c->r[4]^0x80000000u; // 8016EDF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016EDF8
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016EDFC
  W32(c->r[1]+0x00000008u,c->r[3]); // 8016EE00
  {uint32_t ea=c->r[2]+0xFFFFB470u; c->f[1]=RF64(ea);} // 8016EE04
  cmps(c,0,(int32_t)c->r[0],1); // 8016EE08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8016EE0C
  {uint32_t ea=c->r[2]+0xFFFFB460u; c->f[2]=c->ps1[2]=RF32(ea);} // 8016EE10
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[1]); // 8016EE14
  {uint32_t ea=c->r[2]+0xFFFFB468u; c->f[0]=c->ps1[0]=RF32(ea);} // 8016EE18
  W32(c->r[31]+0x00000004u,c->r[4]); // 8016EE1C
  c->f[1]=c->ps1[1]=S(c->f[2]*c->f[1]); // 8016EE20
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8016EE24
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 8016EE28
  if (!crb(c,2)) { goto L_8016EE38; } // 8016EE2C
  c->f[0]=c->ps1[0]=S(c->f[2]-c->f[0]); // 8016EE30
  {uint32_t ea=c->r[31]+0x00000008u; WF32(ea,c->f[0]);} // 8016EE34
L_8016EE38:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016EE38
  cmps(c,0,(int32_t)c->r[0],0); // 8016EE3C
  if (!crb(c,2)) { goto L_8016EE5C; } // 8016EE40
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016EE44
  cmps(c,0,(int32_t)c->r[0],0); // 8016EE48
  if (!crb(c,2)) { goto L_8016EE70; } // 8016EE4C
  c->r[0]=0u+0x00000001u; // 8016EE50
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8016EE54
  goto L_8016EE70; // 8016EE58
L_8016EE5C:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 8016EE5C
  cmps(c,0,(int32_t)c->r[0],99); // 8016EE60
  if (!crb(c,2)) { goto L_8016EE70; } // 8016EE64
  c->r[0]=0u+0x00000000u; // 8016EE68
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 8016EE6C
L_8016EE70:;
  c->r[0]=0u+0x00000001u; // 8016EE70
  W32(c->r[31]+0x00000018u,c->r[0]); // 8016EE74
  goto L_8016EE94; // 8016EE78
L_8016EE7C:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 8016EE7C
  c->r[3]=0u+0x00000000u; // 8016EE80
  W32(c->r[31]+0x00000018u,c->r[3]); // 8016EE84
  cmps(c,0,(int32_t)c->r[0],1); // 8016EE88
  if (!crb(c,2)) { goto L_8016EE94; } // 8016EE8C
  W32(c->r[31]+0x00000020u,c->r[3]); // 8016EE90
L_8016EE94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016EE94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016EE98
  c->lr=c->r[0]; // 8016EE9C
  c->r[1]=c->r[1]+0x00000020u; // 8016EEA0
  return; // 8016EEA4
}

// SetSoundRenderer__16CriSrFade4HbmWiiFP22CriSoundRendererWiiLoc
void f_8016EEA8(Ctx* __restrict c) {
  trace_call(0x8016EEA8u);
  W32(c->r[3]+0x00000024u,c->r[4]); // 8016EEA8
  return; // 8016EEAC
}

// EnterHbm__16CriSrFade4HbmWiiFv
void f_8016EEB0(Ctx* __restrict c) {
  trace_call(0x8016EEB0u);
  c->r[6]=0u+0x00000000u; // 8016EEB0
  c->r[5]=0u+0x00000064u; // 8016EEB4
  c->r[4]=0u+0x00000050u; // 8016EEB8
  c->r[0]=0u+0x00000001u; // 8016EEBC
  W32(c->r[3]+0x00000014u,c->r[6]); // 8016EEC0
  W32(c->r[3]+0x00000004u,c->r[5]); // 8016EEC4
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8016EEC8
  W32(c->r[3]+0x00000020u,c->r[0]); // 8016EECC
  return; // 8016EED0
}

// LeaveHbm__16CriSrFade4HbmWiiFv
void f_8016EED4(Ctx* __restrict c) {
  trace_call(0x8016EED4u);
  c->r[4]=0u+0x00000001u; // 8016EED4
  c->r[0]=0u+0x00000064u; // 8016EED8
  W32(c->r[3]+0x00000014u,c->r[4]); // 8016EEDC
  W32(c->r[3]+0x00000004u,c->r[0]); // 8016EEE0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 8016EEE4
  return; // 8016EEE8
}

// GetVolume__16CriSrFade4HbmWiiCFv
void f_8016EEEC(Ctx* __restrict c) {
  trace_call(0x8016EEECu);
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 8016EEEC
  return; // 8016EEF0
}

// GetPause__16CriSrFade4HbmWiiFv
void f_8016EEF4(Ctx* __restrict c) {
  trace_call(0x8016EEF4u);
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 8016EEF4
  return; // 8016EEF8
}

// IsFading__16CriSrFade4HbmWiiFv
void f_8016EEFC(Ctx* __restrict c) {
  trace_call(0x8016EEFCu);
  c->r[3]=R32(c->r[3]+0x00000018u); // 8016EEFC
  return; // 8016EF00
}

// GetStatus__16CriSrFade4HbmWiiFv
void f_8016EF04(Ctx* __restrict c) {
  trace_call(0x8016EF04u);
  c->r[3]=R32(c->r[3]+0x00000020u); // 8016EF04
  return; // 8016EF08
}

// __dt__16CriSrFade4HbmWiiFv
void f_8016EF0C(Ctx* __restrict c) {
  trace_call(0x8016EF0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EF0C
  c->r[0]=c->lr; // 8016EF10
  cmps(c,0,(int32_t)c->r[3],0); // 8016EF14
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EF18
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EF1C
  c->r[31]=c->r[3]|c->r[3]; // 8016EF20
  if (crb(c,2)) { goto L_8016EF38; } // 8016EF24
  cmps(c,0,(int32_t)c->r[4],0); // 8016EF28
  if (!crb(c,1)) { goto L_8016EF38; } // 8016EF2C
  c->r[4]=0u+0x00000030u; // 8016EF30
  c->lr=0x8016EF38u; f_8017BFE8(c); // 8016EF34
L_8016EF38:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EF3C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EF40
  c->lr=c->r[0]; // 8016EF44
  c->r[1]=c->r[1]+0x00000010u; // 8016EF48
  return; // 8016EF4C
}

// __dt__15CriAcDecoderAhxFv
void f_8016EF50(Ctx* __restrict c) {
  trace_call(0x8016EF50u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EF50
  c->r[0]=c->lr; // 8016EF54
  cmps(c,0,(int32_t)c->r[3],0); // 8016EF58
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016EF5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016EF60
  c->r[31]=c->r[3]|c->r[3]; // 8016EF64
  if (crb(c,2)) { goto L_8016EF7C; } // 8016EF68
  cmps(c,0,(int32_t)c->r[4],0); // 8016EF6C
  if (!crb(c,1)) { goto L_8016EF7C; } // 8016EF70
  c->r[4]=0u+0x00001D1Cu; // 8016EF74
  c->lr=0x8016EF7Cu; f_8017BFE8(c); // 8016EF78
L_8016EF7C:;
  c->r[3]=c->r[31]|c->r[31]; // 8016EF7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016EF80
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016EF84
  c->lr=c->r[0]; // 8016EF88
  c->r[1]=c->r[1]+0x00000010u; // 8016EF8C
  return; // 8016EF90
}

// Create__15CriAcDecoderAhxFP15_criheap_struct
void f_8016EF94(Ctx* __restrict c) {
  trace_call(0x8016EF94u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016EF94
  c->r[0]=c->lr; // 8016EF98
  c->r[5]=0u+0x802D0000u; // 8016EF9C
  c->r[4]=c->r[3]|c->r[3]; // 8016EFA0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8016EFA4
  c->r[5]=c->r[5]+0x00000498u; // 8016EFA8
  c->r[3]=0u+0x00001D1Cu; // 8016EFAC
  c->r[6]=0u+0x00000004u; // 8016EFB0
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8016EFB4
  c->r[31]=c->r[1]|c->r[1]; // 8016EFB8
  W32(c->r[1]+0x00000028u,c->r[30]); // 8016EFBC
  W32(c->r[1]+0x00000024u,c->r[29]); // 8016EFC0
  c->lr=0x8016EFC8u; f_8017BEDC(c); // 8016EFC4
  cmps(c,0,(int32_t)c->r[3],0); // 8016EFC8
  c->r[29]=c->r[3]|c->r[3]; // 8016EFCC
  if (crb(c,2)) { goto L_8016F078; } // 8016EFD0
  c->r[4]=0u+0x80330000u; // 8016EFD4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8016EFD8
  c->r[4]=c->r[4]+0x00001378u; // 8016EFDC
  c->r[30]=0u+0x00000000u; // 8016EFE0
  W32(c->r[3]+0x00000000u,c->r[4]); // 8016EFE4
  c->r[4]=0u+0x00000000u; // 8016EFE8
  c->r[5]=0u+0x00000020u; // 8016EFEC
  W32(c->r[3]+0x00000004u,c->r[30]); // 8016EFF0
  c->r[3]=c->r[3]+0x00000008u; // 8016EFF4
  c->lr=0x8016EFFCu; f_80004714(c); // 8016EFF8
  c->r[3]=c->r[29]+0x00000028u; // 8016EFFC
  c->r[4]=0u+0x00000000u; // 8016F000
  c->r[5]=0u+0x00000010u; // 8016F004
  c->lr=0x8016F00Cu; f_80004714(c); // 8016F008
  W32(c->r[29]+0x00000038u,c->r[30]); // 8016F00C
  c->r[6]=0u+0x80330000u; // 8016F010
  c->r[6]=c->r[6]+0x000018A8u; // 8016F014
  c->r[3]=c->r[29]+0x00000064u; // 8016F018
  W32(c->r[29]+0x0000003Cu,c->r[30]); // 8016F01C
  c->r[4]=0u+0x00000000u; // 8016F020
  c->r[5]=0u+0x00001C88u; // 8016F024
  W8(c->r[29]+0x00000040u,c->r[30]); // 8016F028
  W8(c->r[29]+0x00000041u,c->r[30]); // 8016F02C
  W32(c->r[29]+0x00000044u,c->r[30]); // 8016F030
  W32(c->r[29]+0x00000050u,c->r[30]); // 8016F034
  W32(c->r[29]+0x00000054u,c->r[30]); // 8016F038
  W32(c->r[29]+0x00000058u,c->r[30]); // 8016F03C
  W32(c->r[29]+0x00000000u,c->r[6]); // 8016F040
  W32(c->r[29]+0x0000005Cu,c->r[30]); // 8016F044
  W32(c->r[29]+0x00000060u,c->r[30]); // 8016F048
  c->lr=0x8016F050u; f_80004714(c); // 8016F04C
  W32(c->r[29]+0x00001CECu,c->r[30]); // 8016F050
  c->r[3]=c->r[29]+0x00001CF4u; // 8016F054
  c->r[4]=0u+0x00000000u; // 8016F058
  c->r[5]=0u+0x00000014u; // 8016F05C
  W32(c->r[29]+0x00001CF0u,c->r[30]); // 8016F060
  c->lr=0x8016F068u; f_80004714(c); // 8016F064
  c->r[3]=c->r[29]+0x00001D08u; // 8016F068
  c->r[4]=0u+0x00000000u; // 8016F06C
  c->r[5]=0u+0x00000014u; // 8016F070
  c->lr=0x8016F078u; f_80004714(c); // 8016F074
L_8016F078:;
  cmps(c,0,(int32_t)c->r[29],0); // 8016F078
  if (!crb(c,2)) { goto L_8016F09C; } // 8016F07C
  c->r[4]=0u+0x802D0000u; // 8016F080
  c->r[3]=0u+0x00000000u; // 8016F084
  c->r[4]=c->r[4]+0x00000498u; // 8016F088
  c->r[4]=c->r[4]+0x00000010u; // 8016F08C
  c->lr=0x8016F094u; f_80179434(c); // 8016F090
  c->r[3]=0u+0x00000000u; // 8016F094
  goto L_8016F0A4; // 8016F098
L_8016F09C:;
  c->lr=0x8016F0A0u; f_8017213C(c); // 8016F09C
  c->r[3]=c->r[29]|c->r[29]; // 8016F0A0
L_8016F0A4:;
  c->r[10]=c->r[31]|c->r[31]; // 8016F0A4
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 8016F0A8
  c->r[30]=R32(c->r[10]+0x00000028u); // 8016F0AC
  c->r[29]=R32(c->r[10]+0x00000024u); // 8016F0B0
  c->r[10]=R32(c->r[1]+0x00000000u); // 8016F0B4
  c->r[0]=R32(c->r[10]+0x00000004u); // 8016F0B8
  c->r[1]=c->r[10]|c->r[10]; // 8016F0BC
  c->lr=c->r[0]; // 8016F0C0
  return; // 8016F0C4
}

// Destroy__15CriAcDecoderAhxFv
void f_8016F0C8(Ctx* __restrict c) {
  trace_call(0x8016F0C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F0C8
  c->r[0]=c->lr; // 8016F0CC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016F0D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016F0D4
  c->r[31]=c->r[3]|c->r[3]; // 8016F0D8
  c->r[0]=R32(c->r[3]+0x00000060u); // 8016F0DC
  cmps(c,0,(int32_t)c->r[0],0); // 8016F0E0
  if (crb(c,2)) { goto L_8016F100; } // 8016F0E4
  c->r[3]=c->r[0]|c->r[0]; // 8016F0E8
  c->lr=0x8016F0F0u; f_8017263C(c); // 8016F0EC
  c->r[3]=R32(c->r[31]+0x00000060u); // 8016F0F0
  c->lr=0x8016F0F8u; f_80172478(c); // 8016F0F4
  c->r[0]=0u+0x00000000u; // 8016F0F8
  W32(c->r[31]+0x00000060u,c->r[0]); // 8016F0FC
L_8016F100:;
  c->r[3]=R32(c->r[31]+0x00001CF0u); // 8016F100
  cmps(c,0,(int32_t)c->r[3],0); // 8016F104
  if (crb(c,2)) { goto L_8016F118; } // 8016F108
  c->lr=0x8016F110u; f_8017EDE0(c); // 8016F10C
  c->r[0]=0u+0x00000000u; // 8016F110
  W32(c->r[31]+0x00001CF0u,c->r[0]); // 8016F114
L_8016F118:;
  c->r[3]=R32(c->r[31]+0x00001CECu); // 8016F118
  cmps(c,0,(int32_t)c->r[3],0); // 8016F11C
  if (crb(c,2)) { goto L_8016F130; } // 8016F120
  c->lr=0x8016F128u; f_8017EDE0(c); // 8016F124
  c->r[0]=0u+0x00000000u; // 8016F128
  W32(c->r[31]+0x00001CECu,c->r[0]); // 8016F12C
L_8016F130:;
  c->lr=0x8016F134u; f_80172200(c); // 8016F130
  cmps(c,0,(int32_t)c->r[31],0); // 8016F134
  if (crb(c,2)) { goto L_8016F154; } // 8016F138
  c->r[12]=R32(c->r[31]+0x00000000u); // 8016F13C
  c->r[3]=c->r[31]|c->r[31]; // 8016F140
  c->r[4]=0u+0x00000001u; // 8016F144
  c->r[12]=R32(c->r[12]+0x00000010u); // 8016F148
  c->ctr=c->r[12]; // 8016F14C
  if (true) { c->lr=0x8016F154u; dispatch(c,c->ctr); } // 8016F150
L_8016F154:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016F154
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016F158
  c->lr=c->r[0]; // 8016F15C
  c->r[1]=c->r[1]+0x00000010u; // 8016F160
  return; // 8016F164
}

// Execute__15CriAcDecoderAhxFUl
void f_8016F168(Ctx* __restrict c) {
  trace_call(0x8016F168u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F168
  c->r[0]=c->lr; // 8016F16C
  W32(c->r[1]+0x00000054u,c->r[0]); // 8016F170
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8016F174
  c->r[31]=c->r[4]|c->r[4]; // 8016F178
  W32(c->r[1]+0x00000048u,c->r[30]); // 8016F17C
  c->r[30]=c->r[3]|c->r[3]; // 8016F180
  W32(c->r[1]+0x00000044u,c->r[29]); // 8016F184
  c->r[0]=R32(c->r[3]+0x00000004u); // 8016F188
  cmps(c,0,(int32_t)c->r[0],0); // 8016F18C
  if (crb(c,2)) { goto L_8016F620; } // 8016F190
  c->r[0]=R32(c->r[3]+0x0000003Cu); // 8016F194
  cmps(c,0,(int32_t)c->r[0],0); // 8016F198
  if (!crb(c,2)) { goto L_8016F1A8; } // 8016F19C
  c->r[0]=0u+0x00000000u; // 8016F1A0
  W32(c->r[3]+0x00000038u,c->r[0]); // 8016F1A4
L_8016F1A8:;
  c->r[0]=R32(c->r[3]+0x00000038u); // 8016F1A8
  cmps(c,0,(int32_t)c->r[0],1); // 8016F1AC
  if (!crb(c,2)) { goto L_8016F600; } // 8016F1B0
  c->r[0]=R32(c->r[3]+0x0000005Cu); // 8016F1B4
  cmps(c,0,(int32_t)c->r[0],0); // 8016F1B8
  if (!crb(c,2)) { goto L_8016F47C; } // 8016F1BC
  c->r[4]=0u+0x80000000u; // 8016F1C0
  c->r[3]=R32(c->r[3]+0x00000004u); // 8016F1C4
  c->r[5]=c->r[4]+0xFFFFFFFFu; // 8016F1C8
  c->r[6]=c->r[1]+0x00000028u; // 8016F1CC
  c->r[4]=0u+0x00000001u; // 8016F1D0
  c->lr=0x8016F1D8u; f_8017DD84(c); // 8016F1D4
  c->r[3]=R32(c->r[1]+0x00000028u); // 8016F1D8
  c->r[5]=c->r[1]+0x00000015u; // 8016F1DC
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 8016F1E0
  c->r[6]=c->r[1]+0x00000014u; // 8016F1E4
  c->lr=0x8016F1ECu; f_8017D6A8(c); // 8016F1E8
  cmps(c,0,(int32_t)c->r[3],-1); // 8016F1EC
  if (!crb(c,2)) { goto L_8016F208; } // 8016F1F0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F1F4
  c->r[5]=c->r[1]+0x00000028u; // 8016F1F8
  c->r[4]=0u+0x00000001u; // 8016F1FC
  c->lr=0x8016F204u; f_8017DD94(c); // 8016F200
  goto L_8016F620; // 8016F204
L_8016F208:;
  c->r[0]=R8(c->r[1]+0x00000015u); // 8016F208
  cmpu(c,0,c->r[0],0x00000006u); // 8016F20C
  if (crb(c,2)) { goto L_8016F234; } // 8016F210
  c->r[4]=0u+0x802D0000u; // 8016F214
  c->r[3]=0u+0x00000000u; // 8016F218
  c->r[4]=c->r[4]+0x00000498u; // 8016F21C
  c->r[4]=c->r[4]+0x0000003Bu; // 8016F220
  c->lr=0x8016F228u; f_80179434(c); // 8016F224
  c->r[0]=0u+0x00000003u; // 8016F228
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016F22C
  goto L_8016F620; // 8016F230
L_8016F234:;
  c->r[0]=c->r[1]+0x0000001Cu; // 8016F234
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016F238
  c->r[0]=c->r[1]+0x00000018u; // 8016F23C
  c->r[5]=c->r[1]+0x00000016u; // 8016F240
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016F244
  c->r[6]=c->r[1]+0x00000013u; // 8016F248
  c->r[7]=c->r[1]+0x00000012u; // 8016F24C
  c->r[8]=c->r[1]+0x00000011u; // 8016F250
  c->r[3]=R32(c->r[1]+0x00000028u); // 8016F254
  c->r[9]=c->r[1]+0x00000010u; // 8016F258
  c->r[4]=R32(c->r[1]+0x0000002Cu); // 8016F25C
  c->r[10]=c->r[1]+0x00000020u; // 8016F260
  c->lr=0x8016F268u; f_8017D6F8(c); // 8016F264
  cmps(c,0,(int32_t)c->r[3],-1); // 8016F268
  if (!crb(c,2)) { goto L_8016F284; } // 8016F26C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F270
  c->r[5]=c->r[1]+0x00000028u; // 8016F274
  c->r[4]=0u+0x00000001u; // 8016F278
  c->lr=0x8016F280u; f_8017DD94(c); // 8016F27C
  goto L_8016F620; // 8016F280
L_8016F284:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 8016F284
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[3]); // 8016F288
  if (crb(c,0)) { goto L_8016F2A8; } // 8016F28C
  c->r[0]=R32(c->r[1]+0x00000020u); // 8016F290
  cmps(c,0,(int32_t)c->r[0],0); // 8016F294
  if (!crb(c,1)) { goto L_8016F2A8; } // 8016F298
  c->r[4]=R32(c->r[1]+0x0000001Cu); // 8016F29C
  cmps(c,0,(int32_t)c->r[4],0); // 8016F2A0
  if (!crb(c,0)) { goto L_8016F2C8; } // 8016F2A4
L_8016F2A8:;
  c->r[4]=0u+0x802D0000u; // 8016F2A8
  c->r[3]=0u+0x00000000u; // 8016F2AC
  c->r[4]=c->r[4]+0x00000498u; // 8016F2B0
  c->r[4]=c->r[4]+0x00000070u; // 8016F2B4
  c->lr=0x8016F2BCu; f_80179434(c); // 8016F2B8
  c->r[0]=0u+0x00000003u; // 8016F2BC
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016F2C0
  goto L_8016F620; // 8016F2C4
L_8016F2C8:;
  cmps(c,0,(int32_t)c->r[3],1); // 8016F2C8
  if (!crb(c,1)) { goto L_8016F2F0; } // 8016F2CC
  c->r[4]=0u+0x802D0000u; // 8016F2D0
  c->r[3]=0u+0x00000000u; // 8016F2D4
  c->r[4]=c->r[4]+0x00000498u; // 8016F2D8
  c->r[4]=c->r[4]+0x0000008Eu; // 8016F2DC
  c->lr=0x8016F2E4u; f_80179434(c); // 8016F2E0
  c->r[0]=0u+0x00000003u; // 8016F2E4
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016F2E8
  goto L_8016F620; // 8016F2EC
L_8016F2F0:;
  c->r[12]=R32(c->r[30]+0x00000048u); // 8016F2F0
  W32(c->r[30]+0x00000030u,c->r[4]); // 8016F2F4
  cmps(c,0,(int32_t)c->r[12],0); // 8016F2F8
  if (crb(c,2)) { goto L_8016F30C; } // 8016F2FC
  c->r[3]=R32(c->r[30]+0x0000004Cu); // 8016F300
  c->ctr=c->r[12]; // 8016F304
  if (true) { c->lr=0x8016F30Cu; dispatch(c,c->ctr); } // 8016F308
L_8016F30C:;
  c->r[3]=R8(c->r[1]+0x00000010u); // 8016F30C
  c->r[0]=0u+0x43300000u; // 8016F310
  W32(c->r[1]+0x00000030u,c->r[0]); // 8016F314
  c->r[29]=0u+0x00000000u; // 8016F318
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8016F31C
  {uint32_t ea=c->r[2]+0xFFFFB478u; c->f[1]=RF64(ea);} // 8016F320
  W32(c->r[30]+0x0000002Cu,c->r[0]); // 8016F324
  c->r[5]=c->r[1]+0x00000028u; // 8016F328
  c->r[3]=R32(c->r[30]+0x00000058u); // 8016F32C
  c->r[4]=0u+0x00000001u; // 8016F330
  c->r[6]=R32(c->r[1]+0x00000020u); // 8016F334
  c->r[0]=R32(c->r[30]+0x00000030u); // 8016F338
  c->r[6]=c->r[6]^0x80000000u; // 8016F33C
  W32(c->r[1]+0x00000034u,c->r[6]); // 8016F340
  c->r[0]=c->r[3]+c->r[0]; // 8016F344
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F348
  {uint32_t ea=c->r[1]+0x00000030u; c->f[0]=RF64(ea);} // 8016F34C
  W32(c->r[30]+0x00000058u,c->r[0]); // 8016F350
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8016F354
  W32(c->r[30]+0x00000044u,c->r[29]); // 8016F358
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 8016F35C
  c->lr=0x8016F364u; f_8017DD94(c); // 8016F360
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F364
  cmps(c,0,(int32_t)c->r[3],0); // 8016F368
  if (crb(c,2)) { goto L_8016F380; } // 8016F36C
  c->lr=0x8016F374u; f_8017263C(c); // 8016F370
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F374
  c->lr=0x8016F37Cu; f_80172478(c); // 8016F378
  W32(c->r[30]+0x00000060u,c->r[29]); // 8016F37C
L_8016F380:;
  c->r[3]=R32(c->r[30]+0x00001CF0u); // 8016F380
  cmps(c,0,(int32_t)c->r[3],0); // 8016F384
  if (crb(c,2)) { goto L_8016F398; } // 8016F388
  c->lr=0x8016F390u; f_8017EDE0(c); // 8016F38C
  c->r[0]=0u+0x00000000u; // 8016F390
  W32(c->r[30]+0x00001CF0u,c->r[0]); // 8016F394
L_8016F398:;
  c->r[3]=R32(c->r[30]+0x00001CECu); // 8016F398
  cmps(c,0,(int32_t)c->r[3],0); // 8016F39C
  if (crb(c,2)) { goto L_8016F3B0; } // 8016F3A0
  c->lr=0x8016F3A8u; f_8017EDE0(c); // 8016F3A4
  c->r[0]=0u+0x00000000u; // 8016F3A8
  W32(c->r[30]+0x00001CECu,c->r[0]); // 8016F3AC
L_8016F3B0:;
  c->r[3]=c->r[30]+0x00001CF4u; // 8016F3B0
  c->r[4]=0u+0x00000014u; // 8016F3B4
  c->lr=0x8016F3BCu; f_8017ED44(c); // 8016F3B8
  W32(c->r[30]+0x00001CECu,c->r[3]); // 8016F3BC
  c->r[3]=c->r[30]+0x00001D08u; // 8016F3C0
  c->r[4]=0u+0x00000014u; // 8016F3C4
  c->lr=0x8016F3CCu; f_8017ED44(c); // 8016F3C8
  c->r[0]=R32(c->r[30]+0x00001CECu); // 8016F3CC
  W32(c->r[30]+0x00001CF0u,c->r[3]); // 8016F3D0
  cmps(c,0,(int32_t)c->r[0],0); // 8016F3D4
  if (crb(c,2)) { goto L_8016F3E4; } // 8016F3D8
  cmps(c,0,(int32_t)c->r[3],0); // 8016F3DC
  if (!crb(c,2)) { goto L_8016F400; } // 8016F3E0
L_8016F3E4:;
  c->r[4]=0u+0x802D0000u; // 8016F3E4
  c->r[3]=0u+0x00000000u; // 8016F3E8
  c->r[4]=c->r[4]+0x00000498u; // 8016F3EC
  c->r[4]=c->r[4]+0x000000C0u; // 8016F3F0
  c->lr=0x8016F3F8u; f_80179434(c); // 8016F3F4
  c->r[0]=0u+0x00000000u; // 8016F3F8
  goto L_8016F460; // 8016F3FC
L_8016F400:;
  c->r[4]=R32(c->r[30]+0x00000004u); // 8016F400
  c->r[3]=c->r[0]|c->r[0]; // 8016F404
  c->lr=0x8016F40Cu; f_8017EE08(c); // 8016F408
  c->r[3]=R32(c->r[30]+0x00001CF0u); // 8016F40C
  c->r[4]=R32(c->r[30]+0x00000008u); // 8016F410
  c->lr=0x8016F418u; f_8017EE08(c); // 8016F414
  c->r[3]=R32(c->r[30]+0x00001CECu); // 8016F418
  c->r[5]=c->r[30]+0x00001CF0u; // 8016F41C
  c->r[6]=c->r[30]+0x00000064u; // 8016F420
  c->r[4]=0u+0x00000001u; // 8016F424
  c->r[7]=0u+0x00001C88u; // 8016F428
  c->lr=0x8016F430u; f_80172238(c); // 8016F42C
  cmps(c,0,(int32_t)c->r[3],0); // 8016F430
  W32(c->r[30]+0x00000060u,c->r[3]); // 8016F434
  if (!crb(c,2)) { goto L_8016F458; } // 8016F438
  c->r[4]=0u+0x802D0000u; // 8016F43C
  c->r[3]=0u+0x00000000u; // 8016F440
  c->r[4]=c->r[4]+0x00000498u; // 8016F444
  c->r[4]=c->r[4]+0x000000E9u; // 8016F448
  c->lr=0x8016F450u; f_80179434(c); // 8016F44C
  c->r[0]=0u+0x00000000u; // 8016F450
  goto L_8016F460; // 8016F454
L_8016F458:;
  c->lr=0x8016F45Cu; f_80172534(c); // 8016F458
  c->r[0]=0u+0x00000001u; // 8016F45C
L_8016F460:;
  cmps(c,0,(int32_t)c->r[0],0); // 8016F460
  if (!crb(c,2)) { goto L_8016F474; } // 8016F464
  c->r[0]=0u+0x00000003u; // 8016F468
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016F46C
  goto L_8016F620; // 8016F470
L_8016F474:;
  c->r[0]=0u+0x00000001u; // 8016F474
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016F478
L_8016F47C:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 8016F47C
  cmps(c,0,(int32_t)c->r[0],1); // 8016F480
  if (!crb(c,2)) { goto L_8016F4DC; } // 8016F484
  c->r[3]=0u+0xAAAB0000u; // 8016F488
  c->r[29]=0u+0x00000000u; // 8016F48C
  c->r[0]=c->r[3]+0xFFFFAAABu; // 8016F490
  c->r[0]=(uint32_t)(((uint64_t)c->r[0]*(uint64_t)c->r[31])>>32); // 8016F494
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 8016F498
  c->r[31]=c->r[3]+0x00000001u; // 8016F49C
  goto L_8016F4B0; // 8016F4A0
L_8016F4A4:;
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F4A4
  c->lr=0x8016F4ACu; f_801729DC(c); // 8016F4A8
  c->r[29]=c->r[29]+0x00000001u; // 8016F4AC
L_8016F4B0:;
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[31]); // 8016F4B0
  if (crb(c,0)) { IRQCHK(c); goto L_8016F4A4; } // 8016F4B4
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F4B8
  c->lr=0x8016F4C0u; f_80172A5C(c); // 8016F4BC
  W32(c->r[30]+0x00000044u,c->r[3]); // 8016F4C0
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F4C4
  c->lr=0x8016F4CCu; f_80172528(c); // 8016F4C8
  cmps(c,0,(int32_t)c->r[3],3); // 8016F4CC
  if (!crb(c,2)) { goto L_8016F4DC; } // 8016F4D0
  c->r[0]=0u+0x00000002u; // 8016F4D4
  W32(c->r[30]+0x0000005Cu,c->r[0]); // 8016F4D8
L_8016F4DC:;
  c->r[0]=R32(c->r[30]+0x0000005Cu); // 8016F4DC
  cmps(c,0,(int32_t)c->r[0],2); // 8016F4E0
  if (!crb(c,2)) { goto L_8016F518; } // 8016F4E4
  c->r[0]=R8(c->r[30]+0x00000041u); // 8016F4E8
  cmpu(c,0,c->r[0],0x00000001u); // 8016F4EC
  if (!crb(c,2)) { goto L_8016F518; } // 8016F4F0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F4F4
  c->r[6]=c->r[1]+0x00000028u; // 8016F4F8
  c->r[4]=0u+0x00000001u; // 8016F4FC
  c->r[5]=0u+0xFFFFFFFFu; // 8016F500
  c->lr=0x8016F508u; f_8017DD84(c); // 8016F504
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F508
  c->r[5]=c->r[1]+0x00000028u; // 8016F50C
  c->r[4]=0u+0x00000000u; // 8016F510
  c->lr=0x8016F518u; f_8017DDA4(c); // 8016F514
L_8016F518:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F518
  c->r[4]=0u+0x00000001u; // 8016F51C
  c->lr=0x8016F524u; f_8017DDB4(c); // 8016F520
  c->r[31]=c->r[3]|c->r[3]; // 8016F524
  c->r[3]=R32(c->r[30]+0x00000008u); // 8016F528
  c->r[4]=0u+0x00000001u; // 8016F52C
  c->lr=0x8016F534u; f_8017DDB4(c); // 8016F530
  c->r[0]=R8(c->r[30]+0x00000041u); // 8016F534
  cmpu(c,0,c->r[0],0x00000001u); // 8016F538
  if (!crb(c,2)) { goto L_8016F5B8; } // 8016F53C
  cmps(c,0,(int32_t)c->r[31],0); // 8016F540
  if (!crb(c,2)) { goto L_8016F5B8; } // 8016F544
  cmps(c,0,(int32_t)c->r[3],0); // 8016F548
  if (!crb(c,2)) { goto L_8016F5B8; } // 8016F54C
  c->r[3]=R32(c->r[30]+0x00000044u); // 8016F550
  c->r[0]=R32(c->r[30]+0x00000030u); // 8016F554
  cmpu(c,0,c->r[3],c->r[0]); // 8016F558
  if (crb(c,0)) { goto L_8016F5B8; } // 8016F55C
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F560
  cmps(c,0,(int32_t)c->r[3],0); // 8016F564
  if (crb(c,2)) { goto L_8016F580; } // 8016F568
  c->lr=0x8016F570u; f_8017263C(c); // 8016F56C
  c->r[3]=R32(c->r[30]+0x00000060u); // 8016F570
  c->lr=0x8016F578u; f_80172478(c); // 8016F574
  c->r[0]=0u+0x00000000u; // 8016F578
  W32(c->r[30]+0x00000060u,c->r[0]); // 8016F57C
L_8016F580:;
  c->r[3]=R32(c->r[30]+0x00001CF0u); // 8016F580
  cmps(c,0,(int32_t)c->r[3],0); // 8016F584
  if (crb(c,2)) { goto L_8016F598; } // 8016F588
  c->lr=0x8016F590u; f_8017EDE0(c); // 8016F58C
  c->r[0]=0u+0x00000000u; // 8016F590
  W32(c->r[30]+0x00001CF0u,c->r[0]); // 8016F594
L_8016F598:;
  c->r[3]=R32(c->r[30]+0x00001CECu); // 8016F598
  cmps(c,0,(int32_t)c->r[3],0); // 8016F59C
  if (crb(c,2)) { goto L_8016F5B0; } // 8016F5A0
  c->lr=0x8016F5A8u; f_8017EDE0(c); // 8016F5A4
  c->r[0]=0u+0x00000000u; // 8016F5A8
  W32(c->r[30]+0x00001CECu,c->r[0]); // 8016F5AC
L_8016F5B0:;
  c->r[0]=0u+0x00000002u; // 8016F5B0
  W32(c->r[30]+0x00000038u,c->r[0]); // 8016F5B4
L_8016F5B8:;
  c->r[3]=R32(c->r[30]+0x00000044u); // 8016F5B8
  c->r[0]=R32(c->r[30]+0x00000030u); // 8016F5BC
  c->r[0]=c->r[0]-c->r[3]; cr0(c,c->r[0]); // 8016F5C0
  if (!crb(c,2)) { goto L_8016F600; } // 8016F5C4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F5C8
  c->r[6]=c->r[1]+0x00000028u; // 8016F5CC
  c->r[4]=0u+0x00000001u; // 8016F5D0
  c->r[5]=0u+0xFFFFFFFFu; // 8016F5D4
  c->lr=0x8016F5DCu; f_8017DD84(c); // 8016F5D8
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8016F5DC
  cmpu(c,0,c->r[0],0x00000012u); // 8016F5E0
  if (crb(c,1)) { goto L_8016F5F0; } // 8016F5E4
  c->r[0]=0u+0x00000002u; // 8016F5E8
  W32(c->r[30]+0x00000038u,c->r[0]); // 8016F5EC
L_8016F5F0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8016F5F0
  c->r[5]=c->r[1]+0x00000028u; // 8016F5F4
  c->r[4]=0u+0x00000001u; // 8016F5F8
  c->lr=0x8016F600u; f_8017DD94(c); // 8016F5FC
L_8016F600:;
  c->r[0]=R32(c->r[30]+0x00000038u); // 8016F600
  cmps(c,0,(int32_t)c->r[0],2); // 8016F604
  if (!crb(c,2)) { goto L_8016F620; } // 8016F608
  c->r[0]=R32(c->r[30]+0x0000003Cu); // 8016F60C
  cmps(c,0,(int32_t)c->r[0],0); // 8016F610
  if (!crb(c,2)) { goto L_8016F620; } // 8016F614
  c->r[0]=0u+0x00000000u; // 8016F618
  W32(c->r[30]+0x00000038u,c->r[0]); // 8016F61C
L_8016F620:;
  c->r[0]=R32(c->r[1]+0x00000054u); // 8016F620
  c->r[31]=R32(c->r[1]+0x0000004Cu); // 8016F624
  c->r[30]=R32(c->r[1]+0x00000048u); // 8016F628
  c->r[29]=R32(c->r[1]+0x00000044u); // 8016F62C
  c->lr=c->r[0]; // 8016F630
  c->r[1]=c->r[1]+0x00000050u; // 8016F634
  return; // 8016F638
}

// adxhdr_get_base_info__11CriAcAhxsjdFPScPQ211CriAcAhxsjd6ADXHDR
void f_8016F63C(Ctx* __restrict c) {
  trace_call(0x8016F63Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 8016F63C
  W8(c->r[4]+0x00000000u,c->r[0]); // 8016F640
  c->r[0]=R8(c->r[3]+0x00000001u); // 8016F644
  W8(c->r[4]+0x00000001u,c->r[0]); // 8016F648
  c->r[0]=R8(c->r[3]+0x00000002u); // 8016F64C
  W8(c->r[4]+0x00000002u,c->r[0]); // 8016F650
  c->r[0]=R8(c->r[3]+0x00000003u); // 8016F654
  W8(c->r[4]+0x00000003u,c->r[0]); // 8016F658
  c->r[0]=R8(c->r[3]+0x00000005u); // 8016F65C
  c->r[7]=R8(c->r[3]+0x00000006u); // 8016F660
  c->r[6]=R8(c->r[3]+0x00000007u); // 8016F664
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8016F668
  c->r[5]=R8(c->r[3]+0x00000004u); // 8016F66C
  c->r[6]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8016F670
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8016F674
  c->r[0]=c->r[6]|c->r[0]; // 8016F678
  W32(c->r[4]+0x00000004u,c->r[0]); // 8016F67C
  c->r[0]=R8(c->r[3]+0x00000009u); // 8016F680
  c->r[7]=R8(c->r[3]+0x0000000Au); // 8016F684
  c->r[6]=R8(c->r[3]+0x0000000Bu); // 8016F688
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8016F68C
  c->r[5]=R8(c->r[3]+0x00000008u); // 8016F690
  c->r[6]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8016F694
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8016F698
  c->r[0]=c->r[6]|c->r[0]; // 8016F69C
  W32(c->r[4]+0x00000008u,c->r[0]); // 8016F6A0
  c->r[5]=R8(c->r[3]+0x0000000Cu); // 8016F6A4
  c->r[0]=R8(c->r[3]+0x0000000Du); // 8016F6A8
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F6AC
  W16(c->r[4]+0x0000000Cu,c->r[0]); // 8016F6B0
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 8016F6B4
  W8(c->r[4]+0x0000003Cu,c->r[0]); // 8016F6B8
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8016F6BC
  W8(c->r[4]+0x0000003Du,c->r[0]); // 8016F6C0
  return; // 8016F6C4
}

// adxhdr_get_ply_prm__11CriAcAhxsjdFPScPQ211CriAcAhxsjd9ADXPLYPRM
void f_8016F6C8(Ctx* __restrict c) {
  trace_call(0x8016F6C8u);
  c->r[5]=R8(c->r[3]+0x00000000u); // 8016F6C8
  c->r[0]=R8(c->r[3]+0x00000001u); // 8016F6CC
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F6D0
  W16(c->r[4]+0x00000000u,c->r[0]); // 8016F6D4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 8016F6D8
  if (!crb(c,1)) { goto L_8016F6F0; } // 8016F6DC
  c->r[5]=R8(c->r[3]+0x00000002u); // 8016F6E0
  c->r[0]=R8(c->r[3]+0x00000003u); // 8016F6E4
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F6E8
  W16(c->r[4]+0x00000002u,c->r[0]); // 8016F6EC
L_8016F6F0:;
  c->r[0]=R8(c->r[3]+0x00000004u); // 8016F6F0
  W8(c->r[4]+0x00000004u,c->r[0]); // 8016F6F4
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8016F6F8
  if (!crb(c,1)) { goto L_8016F708; } // 8016F6FC
  c->r[0]=R8(c->r[3]+0x00000005u); // 8016F700
  W8(c->r[4]+0x00000005u,c->r[0]); // 8016F704
L_8016F708:;
  c->r[0]=R8(c->r[3]+0x00000006u); // 8016F708
  W8(c->r[4]+0x00000006u,c->r[0]); // 8016F70C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8016F710
  if (!crb(c,1)) { goto L_8016F720; } // 8016F714
  c->r[0]=R8(c->r[3]+0x00000007u); // 8016F718
  W8(c->r[4]+0x00000007u,c->r[0]); // 8016F71C
L_8016F720:;
  c->r[0]=R8(c->r[3]+0x00000008u); // 8016F720
  W8(c->r[4]+0x00000008u,c->r[0]); // 8016F724
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8016F728
  if (!crb(c,1)) { goto L_8016F738; } // 8016F72C
  c->r[0]=R8(c->r[3]+0x00000009u); // 8016F730
  W8(c->r[4]+0x00000009u,c->r[0]); // 8016F734
L_8016F738:;
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8016F738
  W8(c->r[4]+0x0000000Au,c->r[0]); // 8016F73C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8016F740
  if (!crb(c,1)) return; // 8016F744
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 8016F748
  W8(c->r[4]+0x0000000Bu,c->r[0]); // 8016F74C
  return; // 8016F750
}

// ADX_DecodeHeader__11CriAcAhxsjdFPSclPlPQ211CriAcAhxsjd6ADXHDR
void f_8016F754(Ctx* __restrict c) {
  trace_call(0x8016F754u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F754
  c->r[0]=c->lr; // 8016F758
  cmps(c,0,(int32_t)c->r[5],0); // 8016F75C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F760
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016F764
  c->r[27]=c->r[3]|c->r[3]; // 8016F768
  c->r[29]=c->r[6]|c->r[6]; // 8016F76C
  if (crb(c,2)) { goto L_8016F77C; } // 8016F770
  c->r[0]=0u+0x00000000u; // 8016F774
  W32(c->r[5]+0x00000000u,c->r[0]); // 8016F778
L_8016F77C:;
  cmps(c,0,(int32_t)c->r[4],4); // 8016F77C
  if (!crb(c,0)) { goto L_8016F78C; } // 8016F780
  c->r[3]=0u+0xFFFFFFFFu; // 8016F784
  goto L_8016F980; // 8016F788
L_8016F78C:;
  c->r[7]=R8(c->r[3]+0x00000000u); // 8016F78C
  c->r[0]=R8(c->r[3]+0x00000001u); // 8016F790
  c->r[0]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F794
  cmpu(c,0,c->r[0],0x00008000u); // 8016F798
  if (crb(c,2)) { goto L_8016F7A8; } // 8016F79C
  c->r[3]=0u+0xFFFFFFFCu; // 8016F7A0
  goto L_8016F980; // 8016F7A4
L_8016F7A8:;
  cmps(c,0,(int32_t)c->r[5],0); // 8016F7A8
  c->r[0]=R8(c->r[3]+0x00000002u); // 8016F7AC
  c->r[30]=R8(c->r[3]+0x00000003u); // 8016F7B0
  c->r[30]=(rotl(c->r[0],8)&0x0000FF00u)|(c->r[30]&~0x0000FF00u); // 8016F7B4
  if (crb(c,2)) { goto L_8016F7C0; } // 8016F7B8
  W32(c->r[5]+0x00000000u,c->r[30]); // 8016F7BC
L_8016F7C0:;
  cmps(c,0,(int32_t)c->r[6],0); // 8016F7C0
  if (!crb(c,2)) { goto L_8016F7D0; } // 8016F7C4
  c->r[3]=0u+0x00000000u; // 8016F7C8
  goto L_8016F980; // 8016F7CC
L_8016F7D0:;
  c->r[0]=c->r[30]+0x00000004u; // 8016F7D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8016F7D4
  if (!crb(c,0)) { goto L_8016F7E4; } // 8016F7D8
  c->r[3]=0u+0xFFFFFFFEu; // 8016F7DC
  goto L_8016F980; // 8016F7E0
L_8016F7E4:;
  c->r[0]=c->r[30]+0xFFFFFFFAu; // 8016F7E4
  cmps(c,0,(int32_t)c->r[0],16); // 8016F7E8
  if (!crb(c,0)) { goto L_8016F7F8; } // 8016F7EC
  c->r[3]=0u+0xFFFFFFFEu; // 8016F7F0
  goto L_8016F980; // 8016F7F4
L_8016F7F8:;
  c->r[4]=c->r[29]|c->r[29]; // 8016F7F8
  c->r[3]=c->r[3]+0x00000004u; // 8016F7FC
  c->lr=0x8016F804u; f_8016F63C(c); // 8016F800
  c->r[0]=R8(c->r[29]+0x0000003Cu); // 8016F804
  c->r[31]=c->r[27]+0x00000014u; // 8016F808
  c->r[30]=c->r[30]+0xFFFFFFEAu; // 8016F80C
  cmps(c,0,(int32_t)c->r[0],4); // 8016F810
  if (!crb(c,2)) { goto L_8016F820; } // 8016F814
  c->r[31]=c->r[31]+0x0000000Cu; // 8016F818
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 8016F81C
L_8016F820:;
  cmps(c,0,(int32_t)c->r[30],4); // 8016F820
  if (!crb(c,0)) { goto L_8016F830; } // 8016F824
  c->r[3]=0u+0x00000000u; // 8016F828
  goto L_8016F980; // 8016F82C
L_8016F830:;
  c->r[3]=R8(c->r[31]+0x00000002u); // 8016F830
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016F834
  c->r[31]=c->r[31]+0x00000004u; // 8016F838
  c->r[0]=(rotl(c->r[3],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F83C
  W16(c->r[29]+0x0000000Eu,c->r[0]); // 8016F840
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8016F844
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F848
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8016F84C
  if (!crb(c,0)) { goto L_8016F85C; } // 8016F850
  c->r[3]=0u+0x00000000u; // 8016F854
  goto L_8016F980; // 8016F858
L_8016F85C:;
  c->r[3]=c->r[29]|c->r[29]; // 8016F85C
  c->r[4]=0u+0x00000000u; // 8016F860
  goto L_8016F920; // 8016F864
L_8016F868:;
  c->r[5]=R8(c->r[31]+0x00000000u); // 8016F868
  c->r[4]=c->r[4]+0x00000001u; // 8016F86C
  c->r[0]=R8(c->r[31]+0x00000001u); // 8016F870
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F874
  W16(c->r[3]+0x00000010u,c->r[0]); // 8016F878
  c->r[5]=R8(c->r[31]+0x00000002u); // 8016F87C
  c->r[0]=R8(c->r[31]+0x00000003u); // 8016F880
  c->r[0]=(rotl(c->r[5],8)&0x0000FF00u)|(c->r[0]&~0x0000FF00u); // 8016F884
  W16(c->r[3]+0x00000012u,c->r[0]); // 8016F888
  c->r[0]=R8(c->r[31]+0x00000005u); // 8016F88C
  c->r[7]=R8(c->r[31]+0x00000006u); // 8016F890
  c->r[6]=R8(c->r[31]+0x00000007u); // 8016F894
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8016F898
  c->r[5]=R8(c->r[31]+0x00000004u); // 8016F89C
  c->r[6]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8016F8A0
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8016F8A4
  c->r[0]=c->r[6]|c->r[0]; // 8016F8A8
  W32(c->r[3]+0x00000014u,c->r[0]); // 8016F8AC
  c->r[0]=R8(c->r[31]+0x00000009u); // 8016F8B0
  c->r[7]=R8(c->r[31]+0x0000000Au); // 8016F8B4
  c->r[6]=R8(c->r[31]+0x0000000Bu); // 8016F8B8
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8016F8BC
  c->r[5]=R8(c->r[31]+0x00000008u); // 8016F8C0
  c->r[6]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8016F8C4
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8016F8C8
  c->r[0]=c->r[6]|c->r[0]; // 8016F8CC
  W32(c->r[3]+0x00000018u,c->r[0]); // 8016F8D0
  c->r[0]=R8(c->r[31]+0x0000000Du); // 8016F8D4
  c->r[7]=R8(c->r[31]+0x0000000Eu); // 8016F8D8
  c->r[6]=R8(c->r[31]+0x0000000Fu); // 8016F8DC
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8016F8E0
  c->r[5]=R8(c->r[31]+0x0000000Cu); // 8016F8E4
  c->r[6]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8016F8E8
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8016F8EC
  c->r[0]=c->r[6]|c->r[0]; // 8016F8F0
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 8016F8F4
  c->r[0]=R8(c->r[31]+0x00000011u); // 8016F8F8
  c->r[7]=R8(c->r[31]+0x00000012u); // 8016F8FC
  c->r[6]=R8(c->r[31]+0x00000013u); // 8016F900
  c->r[0]=rotl(c->r[0],16)&0xFFFF0000u; // 8016F904
  c->r[5]=R8(c->r[31]+0x00000010u); // 8016F908
  c->r[6]=(rotl(c->r[7],8)&0x0000FF00u)|(c->r[6]&~0x0000FF00u); // 8016F90C
  c->r[0]=(rotl(c->r[5],24)&0xFF000000u)|(c->r[0]&~0xFF000000u); // 8016F910
  c->r[0]=c->r[6]|c->r[0]; // 8016F914
  W32(c->r[3]+0x00000020u,c->r[0]); // 8016F918
  c->r[3]=c->r[3]+0x00000014u; // 8016F91C
L_8016F920:;
  c->r[0]=(uint32_t)(int32_t)(int16_t)R16(c->r[29]+0x0000000Eu); // 8016F920
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8016F924
  if (crb(c,0)) { IRQCHK(c); goto L_8016F868; } // 8016F928
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)20); // 8016F92C
  c->r[28]=c->r[29]+0x00000024u; // 8016F930
  c->r[27]=0u+0x00000000u; // 8016F934
  c->r[30]=c->r[30]-c->r[0]; // 8016F938
  goto L_8016F96C; // 8016F93C
L_8016F940:;
  cmps(c,0,(int32_t)c->r[30],12); // 8016F940
  if (!crb(c,0)) { goto L_8016F950; } // 8016F944
  c->r[3]=0u+0x00000000u; // 8016F948
  goto L_8016F980; // 8016F94C
L_8016F950:;
  c->r[3]=c->r[31]|c->r[31]; // 8016F950
  c->r[4]=c->r[28]|c->r[28]; // 8016F954
  c->lr=0x8016F95Cu; f_8016F6C8(c); // 8016F958
  c->r[31]=c->r[31]+0x0000000Cu; // 8016F95C
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 8016F960
  c->r[28]=c->r[28]+0x0000000Cu; // 8016F964
  c->r[27]=c->r[27]+0x00000001u; // 8016F968
L_8016F96C:;
  c->r[0]=R8(c->r[29]+0x00000003u); // 8016F96C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8016F970
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[0]); // 8016F974
  if (crb(c,0)) { IRQCHK(c); goto L_8016F940; } // 8016F978
  c->r[3]=0u+0x00000000u; // 8016F97C
L_8016F980:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8016F980
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016F984
  c->lr=c->r[0]; // 8016F988
  c->r[1]=c->r[1]+0x00000020u; // 8016F98C
  return; // 8016F990
}

// AHXBSR_Create__11CriAcAhxsjdFP6SJ_OBJPvl
void f_8016F994(Ctx* __restrict c) {
  trace_call(0x8016F994u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016F994
  c->r[0]=c->lr; // 8016F998
  cmps(c,0,(int32_t)c->r[5],52); // 8016F99C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016F9A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016F9A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016F9A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016F9AC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8016F9B0
  c->r[28]=c->r[3]|c->r[3]; // 8016F9B4
  if (!crb(c,0)) { goto L_8016F9C4; } // 8016F9B8
  c->r[3]=0u+0x00000000u; // 8016F9BC
  goto L_8016FA64; // 8016F9C0
L_8016F9C4:;
  c->r[3]=c->r[4]+0x00000007u; // 8016F9C4
  c->r[0]=c->r[4]+c->r[5]; // 8016F9C8
  c->r[29]=rotl(c->r[3],0)&0xFFFFFFF8u; // 8016F9CC
  c->r[3]=c->r[29]+0x0000002Cu; // 8016F9D0
  cmpu(c,0,c->r[3],c->r[0]); // 8016F9D4
  if (!crb(c,1)) { goto L_8016F9E4; } // 8016F9D8
  c->r[3]=0u+0x00000000u; // 8016F9DC
  goto L_8016FA64; // 8016F9E0
L_8016F9E4:;
  c->r[3]=c->r[29]|c->r[29]; // 8016F9E4
  c->r[4]=0u+0x00000000u; // 8016F9E8
  c->r[5]=0u+0x0000002Cu; // 8016F9EC
  c->lr=0x8016F9F4u; f_80004714(c); // 8016F9F0
  W32(c->r[29]+0x00000004u,c->r[28]); // 8016F9F4
  c->r[30]=0u+0x00000000u; // 8016F9F8
  c->r[3]=c->r[28]|c->r[28]; // 8016F9FC
  c->r[4]=0u+0x00000000u; // 8016FA00
  W32(c->r[29]+0x00000010u,c->r[30]); // 8016FA04
  c->r[5]=R32(c->r[28]+0x00000000u); // 8016FA08
  c->r[12]=R32(c->r[5]+0x00000024u); // 8016FA0C
  c->ctr=c->r[12]; // 8016FA10
  if (true) { c->lr=0x8016FA18u; dispatch(c,c->ctr); } // 8016FA14
  c->r[5]=R32(c->r[28]+0x00000000u); // 8016FA18
  c->r[31]=c->r[3]|c->r[3]; // 8016FA1C
  c->r[3]=c->r[28]|c->r[28]; // 8016FA20
  c->r[4]=0u+0x00000001u; // 8016FA24
  c->r[12]=R32(c->r[5]+0x00000024u); // 8016FA28
  c->ctr=c->r[12]; // 8016FA2C
  if (true) { c->lr=0x8016FA34u; dispatch(c,c->ctr); } // 8016FA30
  c->r[0]=c->r[3]+c->r[31]; // 8016FA34
  W32(c->r[29]+0x00000014u,c->r[0]); // 8016FA38
  c->r[3]=sraw(c,c->r[0],2); // 8016FA3C
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 8016FA40
  W32(c->r[29]+0x00000018u,c->r[3]); // 8016FA44
  c->r[0]=0u+0x00000001u; // 8016FA48
  W32(c->r[29]+0x00000024u,c->r[30]); // 8016FA4C
  c->r[3]=c->r[29]|c->r[29]; // 8016FA50
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 8016FA54
  W32(c->r[29]+0x00000020u,c->r[30]); // 8016FA58
  W32(c->r[29]+0x00000028u,c->r[30]); // 8016FA5C
  W32(c->r[29]+0x00000000u,c->r[0]); // 8016FA60
L_8016FA64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016FA64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016FA68
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016FA6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016FA70
  c->r[28]=R32(c->r[1]+0x00000010u); // 8016FA74
  c->lr=c->r[0]; // 8016FA78
  c->r[1]=c->r[1]+0x00000020u; // 8016FA7C
  return; // 8016FA80
}

// fn_8016FA84
void f_8016FA84(Ctx* __restrict c) {
  trace_call(0x8016FA84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FA84
  c->r[0]=c->lr; // 8016FA88
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016FA8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016FA90
  c->r[31]=c->r[3]|c->r[3]; // 8016FA94
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016FA98
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8016FA9C
  c->r[5]=R32(c->r[3]+0x00000024u); // 8016FAA0
  c->r[0]=addc(c,~c->r[0],0x00000020u,1); // 8016FAA4
  c->r[0]=sraw(c,c->r[0],3); // 8016FAA8
  cmps(c,0,(int32_t)c->r[5],4); // 8016FAAC
  c->r[30]=addc(c,c->r[0],0,c->xer_ca); // 8016FAB0
  if (!crb(c,0)) { goto L_8016FB7C; } // 8016FAB4
  c->r[4]=R32(c->r[3]+0x0000001Cu); // 8016FAB8
  W32(c->r[1]+0x00000010u,c->r[4]); // 8016FABC
  c->r[0]=R32(c->r[3]+0x00000020u); // 8016FAC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FAC4
  cmps(c,0,(int32_t)c->r[0],0); // 8016FAC8
  if (crb(c,2)) { goto L_8016FB4C; } // 8016FACC
  c->r[5]=c->r[0]-c->r[5]; // 8016FAD0
  W32(c->r[1]+0x00000010u,c->r[4]); // 8016FAD4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[5]); // 8016FAD8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FADC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016FAE0
  if (!crb(c,1)) { goto L_8016FAEC; } // 8016FAE4
  W32(c->r[1]+0x00000014u,c->r[5]); // 8016FAE8
L_8016FAEC:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 8016FAEC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8016FAF0
  c->r[0]=c->r[0]-c->r[4]; cr0(c,c->r[0]); // 8016FAF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8016FAF8
  if (!crb(c,2)) { goto L_8016FB08; } // 8016FAFC
  c->r[0]=0u+0x00000000u; // 8016FB00
  goto L_8016FB10; // 8016FB04
L_8016FB08:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 8016FB08
  c->r[0]=c->r[0]+c->r[4]; // 8016FB0C
L_8016FB10:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 8016FB10
  c->r[5]=c->r[1]+0x00000010u; // 8016FB14
  c->r[4]=0u+0x00000000u; // 8016FB18
  c->r[3]=R32(c->r[3]+0x00000004u); // 8016FB1C
  c->r[6]=R32(c->r[3]+0x00000000u); // 8016FB20
  c->r[12]=R32(c->r[6]+0x00000020u); // 8016FB24
  c->ctr=c->r[12]; // 8016FB28
  if (true) { c->lr=0x8016FB30u; dispatch(c,c->ctr); } // 8016FB2C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016FB30
  c->r[5]=c->r[1]+0x00000008u; // 8016FB34
  c->r[4]=0u+0x00000001u; // 8016FB38
  c->r[6]=R32(c->r[3]+0x00000000u); // 8016FB3C
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8016FB40
  c->ctr=c->r[12]; // 8016FB44
  if (true) { c->lr=0x8016FB4Cu; dispatch(c,c->ctr); } // 8016FB48
L_8016FB4C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8016FB4C
  c->r[6]=c->r[31]+0x0000001Cu; // 8016FB50
  c->r[5]=R32(c->r[31]+0x00000018u); // 8016FB54
  c->r[4]=0u+0x00000001u; // 8016FB58
  c->r[7]=R32(c->r[3]+0x00000000u); // 8016FB5C
  c->r[12]=R32(c->r[7]+0x00000018u); // 8016FB60
  c->ctr=c->r[12]; // 8016FB64
  if (true) { c->lr=0x8016FB6Cu; dispatch(c,c->ctr); } // 8016FB68
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 8016FB6C
  c->r[0]=R32(c->r[31]+0x00000020u); // 8016FB70
  W32(c->r[31]+0x00000028u,c->r[3]); // 8016FB74
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016FB78
L_8016FB7C:;
  c->r[0]=R32(c->r[31]+0x00000024u); // 8016FB7C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8016FB80
  if (!crb(c,0)) { goto L_8016FB8C; } // 8016FB84
  c->r[0]=c->r[30]|c->r[30]; // 8016FB88
L_8016FB8C:;
  cmps(c,0,(int32_t)c->r[0],3); // 8016FB8C
  if (!crb(c,2)) { goto L_8016FBDC; } // 8016FB90
  c->r[6]=R32(c->r[31]+0x00000028u); // 8016FB94
  c->r[0]=R32(c->r[31]+0x00000008u); // 8016FB98
  c->r[3]=R8(c->r[6]+0x00000000u); // 8016FB9C
  c->r[3]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[3]&~0xFFFFFF00u); // 8016FBA0
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8016FBA4
  c->r[0]=R8(c->r[6]+0x00000001u); // 8016FBA8
  c->r[0]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[0]&~0xFFFFFF00u); // 8016FBAC
  c->r[5]=R8(c->r[6]+0x00000002u); // 8016FBB0
  c->r[6]=c->r[6]+0x00000003u; // 8016FBB4
  c->r[5]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[5]&~0xFFFFFF00u); // 8016FBB8
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016FBBC
  c->r[4]=c->r[4]+0x00000018u; // 8016FBC0
  W32(c->r[31]+0x00000028u,c->r[6]); // 8016FBC4
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 8016FBC8
  W32(c->r[31]+0x00000008u,c->r[5]); // 8016FBCC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8016FBD0
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016FBD4
  goto L_8016FCB8; // 8016FBD8
L_8016FBDC:;
  cmps(c,0,(int32_t)c->r[0],2); // 8016FBDC
  if (!crb(c,2)) { goto L_8016FC24; } // 8016FBE0
  c->r[5]=R32(c->r[31]+0x00000028u); // 8016FBE4
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016FBE8
  c->r[0]=R8(c->r[5]+0x00000000u); // 8016FBEC
  c->r[6]=R8(c->r[5]+0x00000001u); // 8016FBF0
  c->r[0]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[0]&~0xFFFFFF00u); // 8016FBF4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8016FBF8
  c->r[5]=c->r[5]+0x00000002u; // 8016FBFC
  c->r[6]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[6]&~0xFFFFFF00u); // 8016FC00
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016FC04
  c->r[4]=c->r[4]+0x00000010u; // 8016FC08
  W32(c->r[31]+0x00000028u,c->r[5]); // 8016FC0C
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8016FC10
  W32(c->r[31]+0x00000008u,c->r[6]); // 8016FC14
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8016FC18
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016FC1C
  goto L_8016FCB8; // 8016FC20
L_8016FC24:;
  cmps(c,0,(int32_t)c->r[0],1); // 8016FC24
  if (!crb(c,2)) { goto L_8016FC64; } // 8016FC28
  c->r[5]=R32(c->r[31]+0x00000028u); // 8016FC2C
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8016FC30
  c->r[6]=R8(c->r[5]+0x00000000u); // 8016FC34
  c->r[5]=c->r[5]+0x00000001u; // 8016FC38
  c->r[4]=c->r[3]+0x00000008u; // 8016FC3C
  c->r[0]=R32(c->r[31]+0x00000008u); // 8016FC40
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016FC44
  c->r[6]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[6]&~0xFFFFFF00u); // 8016FC48
  W32(c->r[31]+0x00000028u,c->r[5]); // 8016FC4C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8016FC50
  W32(c->r[31]+0x00000008u,c->r[6]); // 8016FC54
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8016FC58
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016FC5C
  goto L_8016FCB8; // 8016FC60
L_8016FC64:;
  cmps(c,0,(int32_t)c->r[0],4); // 8016FC64
  if (!crb(c,2)) { goto L_8016FCB8; } // 8016FC68
  c->r[5]=R32(c->r[31]+0x00000028u); // 8016FC6C
  c->r[3]=R32(c->r[31]+0x00000008u); // 8016FC70
  c->r[0]=R8(c->r[5]+0x00000000u); // 8016FC74
  c->r[0]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[0]&~0xFFFFFF00u); // 8016FC78
  c->r[3]=R8(c->r[5]+0x00000001u); // 8016FC7C
  c->r[3]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[3]&~0xFFFFFF00u); // 8016FC80
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 8016FC84
  c->r[0]=R8(c->r[5]+0x00000002u); // 8016FC88
  c->r[0]=(rotl(c->r[3],8)&0xFFFFFF00u)|(c->r[0]&~0xFFFFFF00u); // 8016FC8C
  c->r[6]=R8(c->r[5]+0x00000003u); // 8016FC90
  c->r[5]=c->r[5]+0x00000004u; // 8016FC94
  c->r[6]=(rotl(c->r[0],8)&0xFFFFFF00u)|(c->r[6]&~0xFFFFFF00u); // 8016FC98
  c->r[3]=R32(c->r[31]+0x00000024u); // 8016FC9C
  c->r[4]=c->r[4]+0x00000020u; // 8016FCA0
  W32(c->r[31]+0x00000028u,c->r[5]); // 8016FCA4
  c->r[0]=c->r[3]+0xFFFFFFFCu; // 8016FCA8
  W32(c->r[31]+0x00000008u,c->r[6]); // 8016FCAC
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 8016FCB0
  W32(c->r[31]+0x00000024u,c->r[0]); // 8016FCB4
L_8016FCB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016FCB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016FCBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016FCC0
  c->lr=c->r[0]; // 8016FCC4
  c->r[1]=c->r[1]+0x00000020u; // 8016FCC8
  return; // 8016FCCC
}

// AHXDCD_Create__11CriAcAhxsjdFPvl
void f_8016FCD0(Ctx* __restrict c) {
  trace_call(0x8016FCD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FCD0
  c->r[0]=c->lr; // 8016FCD4
  cmps(c,0,(int32_t)c->r[4],7152); // 8016FCD8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8016FCDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8016FCE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8016FCE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8016FCE8
  if (!crb(c,0)) { goto L_8016FCF8; } // 8016FCEC
  c->r[3]=0u+0x00000000u; // 8016FCF0
  goto L_8016FDD8; // 8016FCF4
L_8016FCF8:;
  c->r[0]=c->r[3]+0x00000007u; // 8016FCF8
  c->r[29]=c->r[3]+c->r[4]; // 8016FCFC
  c->r[30]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8016FD00
  c->r[31]=c->r[30]+0x00000BCCu; // 8016FD04
  cmpu(c,0,c->r[31],c->r[29]); // 8016FD08
  if (!crb(c,1)) { goto L_8016FD18; } // 8016FD0C
  c->r[3]=0u+0x00000000u; // 8016FD10
  goto L_8016FDD8; // 8016FD14
L_8016FD18:;
  c->r[3]=c->r[30]|c->r[30]; // 8016FD18
  c->r[4]=0u+0x00000000u; // 8016FD1C
  c->r[5]=0u+0x00000BCCu; // 8016FD20
  c->lr=0x8016FD28u; f_80004714(c); // 8016FD24
  c->r[3]=c->r[31]+0x0000101Cu; // 8016FD28
  cmpu(c,0,c->r[3],c->r[29]); // 8016FD2C
  if (!crb(c,1)) { goto L_8016FD3C; } // 8016FD30
  c->r[3]=0u+0x00000000u; // 8016FD34
  goto L_8016FDD8; // 8016FD38
L_8016FD3C:;
  c->r[0]=c->r[31]+0x00000007u; // 8016FD3C
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8016FD40
  c->r[0]=c->r[31]+0x00001014u; // 8016FD44
  cmpu(c,0,c->r[0],c->r[3]); // 8016FD48
  if (!crb(c,1)) { goto L_8016FD58; } // 8016FD4C
  c->r[31]=0u+0x00000000u; // 8016FD50
  goto L_8016FD8C; // 8016FD54
L_8016FD58:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FD58
  c->r[4]=0u+0x00000000u; // 8016FD5C
  c->r[5]=0u+0x00001014u; // 8016FD60
  c->lr=0x8016FD68u; f_80004714(c); // 8016FD64
  c->r[3]=0u+0x00000040u; // 8016FD68
  W32(c->r[31]+0x00000008u,c->r[3]); // 8016FD6C
  c->r[0]=0u+0x00000001u; // 8016FD70
  W32(c->r[31]+0x00000004u,c->r[3]); // 8016FD74
  c->r[3]=R32(c->r[13]+0xFFFFA1D8u); // 8016FD78
  W32(c->r[31]+0x00000010u,c->r[3]); // 8016FD7C
  c->r[3]=R32(c->r[13]+0xFFFFA1D4u); // 8016FD80
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8016FD84
  W8(c->r[31]+0x00000000u,c->r[0]); // 8016FD88
L_8016FD8C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8016FD8C
  W32(c->r[30]+0x00000354u,c->r[31]); // 8016FD90
  if (!crb(c,2)) { goto L_8016FDA0; } // 8016FD94
  c->r[3]=0u+0x00000000u; // 8016FD98
  goto L_8016FDD8; // 8016FD9C
L_8016FDA0:;
  c->r[0]=c->r[30]+0x00000023u; // 8016FDA0
  c->r[3]=c->r[30]+0x00000388u; // 8016FDA4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFE0u; // 8016FDA8
  W32(c->r[30]+0x00000000u,c->r[0]); // 8016FDAC
  c->r[4]=0u+0x00000000u; // 8016FDB0
  c->r[5]=0u+0x00000008u; // 8016FDB4
  c->lr=0x8016FDBCu; f_80004714(c); // 8016FDB8
  c->r[0]=R32(c->r[13]+0xFFFFA1C4u); // 8016FDBC
  c->r[4]=0u+0x00000010u; // 8016FDC0
  W32(c->r[30]+0x00000344u,c->r[0]); // 8016FDC4
  c->r[0]=0u+0x00000001u; // 8016FDC8
  c->r[3]=c->r[30]|c->r[30]; // 8016FDCC
  W8(c->r[30]+0x0000034Bu,c->r[4]); // 8016FDD0
  W8(c->r[30]+0x00000348u,c->r[0]); // 8016FDD4
L_8016FDD8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8016FDD8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8016FDDC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8016FDE0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8016FDE4
  c->lr=c->r[0]; // 8016FDE8
  c->r[1]=c->r[1]+0x00000020u; // 8016FDEC
  return; // 8016FDF0
}

// AHXDCD_Reset__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXDCD_OBJ
void f_8016FDF4(Ctx* __restrict c) {
  trace_call(0x8016FDF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FDF4
  c->r[0]=c->lr; // 8016FDF8
  c->r[4]=0u+0x00000000u; // 8016FDFC
  c->r[5]=0u+0x00000030u; // 8016FE00
  W32(c->r[1]+0x00000014u,c->r[0]); // 8016FE04
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8016FE08
  W32(c->r[1]+0x00000008u,c->r[30]); // 8016FE0C
  c->r[30]=c->r[3]|c->r[3]; // 8016FE10
  c->r[31]=R32(c->r[3]+0x00000354u); // 8016FE14
  c->r[3]=c->r[3]+0x00000358u; // 8016FE18
  c->lr=0x8016FE20u; f_80004714(c); // 8016FE1C
  c->r[3]=c->r[30]+0x00000388u; // 8016FE20
  c->r[4]=0u+0x00000000u; // 8016FE24
  c->r[5]=0u+0x0000003Cu; // 8016FE28
  c->lr=0x8016FE30u; f_80004714(c); // 8016FE2C
  c->r[3]=c->r[30]+0x000003C4u; // 8016FE30
  c->r[4]=0u+0x00000000u; // 8016FE34
  c->r[5]=0u+0x00000100u; // 8016FE38
  c->lr=0x8016FE40u; f_80004714(c); // 8016FE3C
  c->r[3]=c->r[30]+0x000004C4u; // 8016FE40
  c->r[4]=0u+0x00000000u; // 8016FE44
  c->r[5]=0u+0x00000100u; // 8016FE48
  c->lr=0x8016FE50u; f_80004714(c); // 8016FE4C
  c->r[3]=c->r[30]+0x000005C4u; // 8016FE50
  c->r[4]=0u+0x00000000u; // 8016FE54
  c->r[5]=0u+0x00000300u; // 8016FE58
  c->lr=0x8016FE60u; f_80004714(c); // 8016FE5C
  c->r[3]=R32(c->r[30]+0x00000000u); // 8016FE60
  c->r[4]=0u+0x00000000u; // 8016FE64
  c->r[5]=0u+0x00000300u; // 8016FE68
  c->lr=0x8016FE70u; f_80004714(c); // 8016FE6C
  c->r[3]=c->r[30]+0x000008C4u; // 8016FE70
  c->r[4]=0u+0x00000000u; // 8016FE74
  c->r[5]=0u+0x00000300u; // 8016FE78
  c->lr=0x8016FE80u; f_80004714(c); // 8016FE7C
  c->r[3]=R32(c->r[30]+0x00000354u); // 8016FE80
  c->r[0]=0u+0x00000000u; // 8016FE84
  W8(c->r[30]+0x00000349u,c->r[0]); // 8016FE88
  cmps(c,0,(int32_t)c->r[3],0); // 8016FE8C
  W32(c->r[30]+0x0000034Cu,c->r[0]); // 8016FE90
  if (crb(c,2)) { goto L_8016FF00; } // 8016FE94
  W32(c->r[30]+0x00000354u,c->r[0]); // 8016FE98
  c->r[4]=0u+0x00000000u; // 8016FE9C
  c->r[5]=0u+0x00001014u; // 8016FEA0
  c->lr=0x8016FEA8u; f_80004714(c); // 8016FEA4
  c->r[3]=c->r[31]+0x00000007u; // 8016FEA8
  c->r[0]=c->r[31]+0x0000101Cu; // 8016FEAC
  c->r[31]=rotl(c->r[3],0)&0xFFFFFFF8u; // 8016FEB0
  c->r[3]=c->r[31]+0x00001014u; // 8016FEB4
  cmpu(c,0,c->r[3],c->r[0]); // 8016FEB8
  if (!crb(c,1)) { goto L_8016FEC8; } // 8016FEBC
  c->r[31]=0u+0x00000000u; // 8016FEC0
  goto L_8016FEFC; // 8016FEC4
L_8016FEC8:;
  c->r[3]=c->r[31]|c->r[31]; // 8016FEC8
  c->r[4]=0u+0x00000000u; // 8016FECC
  c->r[5]=0u+0x00001014u; // 8016FED0
  c->lr=0x8016FED8u; f_80004714(c); // 8016FED4
  c->r[3]=0u+0x00000040u; // 8016FED8
  W32(c->r[31]+0x00000008u,c->r[3]); // 8016FEDC
  c->r[0]=0u+0x00000001u; // 8016FEE0
  W32(c->r[31]+0x00000004u,c->r[3]); // 8016FEE4
  c->r[3]=R32(c->r[13]+0xFFFFA1D8u); // 8016FEE8
  W32(c->r[31]+0x00000010u,c->r[3]); // 8016FEEC
  c->r[3]=R32(c->r[13]+0xFFFFA1D4u); // 8016FEF0
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 8016FEF4
  W8(c->r[31]+0x00000000u,c->r[0]); // 8016FEF8
L_8016FEFC:;
  W32(c->r[30]+0x00000354u,c->r[31]); // 8016FEFC
L_8016FF00:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8016FF00
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8016FF04
  c->r[30]=R32(c->r[1]+0x00000008u); // 8016FF08
  c->lr=c->r[0]; // 8016FF0C
  c->r[1]=c->r[1]+0x00000010u; // 8016FF10
  return; // 8016FF14
}

// AHXDCD_DecodeHeader__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXDCD_OBJ
void f_8016FF18(Ctx* __restrict c) {
  trace_call(0x8016FF18u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8016FF18
  c->r[0]=c->lr; // 8016FF1C
  W32(c->r[1]+0x00000074u,c->r[0]); // 8016FF20
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8016FF24
  c->r[28]=c->r[3]|c->r[3]; // 8016FF28
  c->r[29]=R32(c->r[3]+0x00000350u); // 8016FF2C
  cmps(c,0,(int32_t)c->r[29],0); // 8016FF30
  if (crb(c,2)) { goto L_8017014C; } // 8016FF34
  c->r[3]=c->r[1]+0x00000010u; // 8016FF38
  c->r[4]=0u+0x00000000u; // 8016FF3C
  c->r[5]=0u+0x00000040u; // 8016FF40
  c->lr=0x8016FF48u; f_80004714(c); // 8016FF44
  c->r[31]=0u+0x803F0000u; // 8016FF48
  c->r[27]=0u+0x00000000u; // 8016FF4C
  c->r[31]=c->r[31]+0xFFFFFD08u; // 8016FF50
  W32(c->r[1]+0x00000008u,c->r[27]); // 8016FF54
  c->r[30]=c->r[31]+0x00000004u; // 8016FF58
  goto L_8016FFC0; // 8016FF5C
L_8016FF60:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8016FF60
  cmps(c,0,(int32_t)c->r[0],8); // 8016FF64
  if (!crb(c,0)) { goto L_8016FF74; } // 8016FF68
  c->r[3]=c->r[29]|c->r[29]; // 8016FF6C
  c->lr=0x8016FF74u; f_8016FA84(c); // 8016FF70
L_8016FF74:;
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 8016FF74
  cmps(c,0,(int32_t)c->r[5],8); // 8016FF78
  if (!crb(c,0)) { goto L_8016FF98; } // 8016FF7C
  c->r[0]=R32(c->r[29]+0x00000010u); // 8016FF80
  c->r[4]=0u+0x00000000u; // 8016FF84
  c->r[0]=c->r[0]+c->r[5]; // 8016FF88
  W32(c->r[29]+0x00000010u,c->r[0]); // 8016FF8C
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 8016FF90
  goto L_8016FFB8; // 8016FF94
L_8016FF98:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 8016FF98
  c->r[0]=c->r[5]+0xFFFFFFF8u; // 8016FF9C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8016FFA0
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 8016FFA4
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 8016FFA8
  c->r[3]=R32(c->r[29]+0x00000010u); // 8016FFAC
  c->r[0]=c->r[3]+0x00000008u; // 8016FFB0
  W32(c->r[29]+0x00000010u,c->r[0]); // 8016FFB4
L_8016FFB8:;
  W8(c->r[31]+0x00000000u,c->r[4]); // 8016FFB8
  c->r[31]=c->r[31]+0x00000001u; // 8016FFBC
L_8016FFC0:;
  cmpu(c,0,c->r[31],c->r[30]); // 8016FFC0
  if (!crb(c,2)) { IRQCHK(c); goto L_8016FF60; } // 8016FFC4
  c->r[3]=0u+0x803F0000u; // 8016FFC8
  c->r[5]=c->r[1]+0x00000008u; // 8016FFCC
  c->r[3]=c->r[3]+0xFFFFFD08u; // 8016FFD0
  c->r[4]=0u+0x00000004u; // 8016FFD4
  c->r[6]=0u+0x00000000u; // 8016FFD8
  c->lr=0x8016FFE0u; f_8016F754(c); // 8016FFDC
  c->r[0]=R32(c->r[1]+0x00000008u); // 8016FFE0
  c->r[27]=0u+0x00000000u; // 8016FFE4
  c->r[30]=c->r[30]+c->r[0]; // 8016FFE8
  goto L_80170050; // 8016FFEC
L_8016FFF0:;
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 8016FFF0
  cmps(c,0,(int32_t)c->r[0],8); // 8016FFF4
  if (!crb(c,0)) { goto L_80170004; } // 8016FFF8
  c->r[3]=c->r[29]|c->r[29]; // 8016FFFC
  c->lr=0x80170004u; f_8016FA84(c); // 80170000
L_80170004:;
  c->r[5]=R32(c->r[29]+0x0000000Cu); // 80170004
  cmps(c,0,(int32_t)c->r[5],8); // 80170008
  if (!crb(c,0)) { goto L_80170028; } // 8017000C
  c->r[0]=R32(c->r[29]+0x00000010u); // 80170010
  c->r[4]=0u+0x00000000u; // 80170014
  c->r[0]=c->r[0]+c->r[5]; // 80170018
  W32(c->r[29]+0x00000010u,c->r[0]); // 8017001C
  W32(c->r[29]+0x0000000Cu,c->r[27]); // 80170020
  goto L_80170048; // 80170024
L_80170028:;
  c->r[3]=R32(c->r[29]+0x00000008u); // 80170028
  c->r[0]=c->r[5]+0xFFFFFFF8u; // 8017002C
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80170030
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 80170034
  c->r[4]=rotl(c->r[3],0)&0x000000FFu; // 80170038
  c->r[3]=R32(c->r[29]+0x00000010u); // 8017003C
  c->r[0]=c->r[3]+0x00000008u; // 80170040
  W32(c->r[29]+0x00000010u,c->r[0]); // 80170044
L_80170048:;
  W8(c->r[31]+0x00000000u,c->r[4]); // 80170048
  c->r[31]=c->r[31]+0x00000001u; // 8017004C
L_80170050:;
  cmpu(c,0,c->r[31],c->r[30]); // 80170050
  if (!crb(c,2)) { IRQCHK(c); goto L_8016FFF0; } // 80170054
  c->r[3]=0u+0x803F0000u; // 80170058
  c->r[5]=c->r[1]+0x00000008u; // 8017005C
  c->r[3]=c->r[3]+0xFFFFFD08u; // 80170060
  c->r[6]=c->r[1]+0x00000010u; // 80170064
  c->r[4]=0u+0x00000200u; // 80170068
  c->lr=0x80170070u; f_8016F754(c); // 8017006C
  cmps(c,0,(int32_t)c->r[3],0); // 80170070
  if (crb(c,0)) { goto L_8017014C; } // 80170074
  c->r[5]=R8(c->r[1]+0x00000013u); // 80170078
  c->r[0]=0u+0x00000001u; // 8017007C
  c->r[3]=c->r[28]+0x000003BCu; // 80170080
  c->r[4]=0u+0x00000000u; // 80170084
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 80170088
  W32(c->r[28]+0x0000038Cu,c->r[5]); // 8017008C
  c->r[5]=0u+0x00000008u; // 80170090
  c->r[6]=R32(c->r[1]+0x00000014u); // 80170094
  W32(c->r[28]+0x00000390u,c->r[6]); // 80170098
  c->r[6]=R32(c->r[1]+0x00000018u); // 8017009C
  W32(c->r[28]+0x00000394u,c->r[6]); // 801700A0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000034u); // 801700A4
  W16(c->r[28]+0x000003A4u,c->r[6]); // 801700A8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000036u); // 801700AC
  W16(c->r[28]+0x000003A6u,c->r[6]); // 801700B0
  c->r[6]=R8(c->r[1]+0x00000038u); // 801700B4
  W8(c->r[28]+0x000003A8u,c->r[6]); // 801700B8
  c->r[6]=R8(c->r[1]+0x00000039u); // 801700BC
  W8(c->r[28]+0x000003A9u,c->r[6]); // 801700C0
  c->r[6]=R8(c->r[1]+0x0000003Au); // 801700C4
  W8(c->r[28]+0x000003AAu,c->r[6]); // 801700C8
  c->r[6]=R8(c->r[1]+0x0000003Bu); // 801700CC
  W8(c->r[28]+0x000003ABu,c->r[6]); // 801700D0
  c->r[6]=R8(c->r[1]+0x0000003Cu); // 801700D4
  W8(c->r[28]+0x000003ACu,c->r[6]); // 801700D8
  c->r[6]=R8(c->r[1]+0x0000003Du); // 801700DC
  W8(c->r[28]+0x000003ADu,c->r[6]); // 801700E0
  c->r[6]=R8(c->r[1]+0x0000003Eu); // 801700E4
  W8(c->r[28]+0x000003AEu,c->r[6]); // 801700E8
  c->r[6]=R8(c->r[1]+0x0000003Fu); // 801700EC
  W8(c->r[28]+0x000003AFu,c->r[6]); // 801700F0
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000040u); // 801700F4
  W16(c->r[28]+0x000003B0u,c->r[6]); // 801700F8
  c->r[6]=(uint32_t)(int32_t)(int16_t)R16(c->r[1]+0x00000042u); // 801700FC
  W16(c->r[28]+0x000003B2u,c->r[6]); // 80170100
  c->r[6]=R8(c->r[1]+0x00000044u); // 80170104
  W8(c->r[28]+0x000003B4u,c->r[6]); // 80170108
  c->r[6]=R8(c->r[1]+0x00000045u); // 8017010C
  W8(c->r[28]+0x000003B5u,c->r[6]); // 80170110
  c->r[6]=R8(c->r[1]+0x00000046u); // 80170114
  W8(c->r[28]+0x000003B6u,c->r[6]); // 80170118
  c->r[6]=R8(c->r[1]+0x00000047u); // 8017011C
  W8(c->r[28]+0x000003B7u,c->r[6]); // 80170120
  c->r[6]=R8(c->r[1]+0x00000048u); // 80170124
  W8(c->r[28]+0x000003B8u,c->r[6]); // 80170128
  c->r[6]=R8(c->r[1]+0x00000049u); // 8017012C
  W8(c->r[28]+0x000003B9u,c->r[6]); // 80170130
  c->r[6]=R8(c->r[1]+0x0000004Au); // 80170134
  W8(c->r[28]+0x000003BAu,c->r[6]); // 80170138
  c->r[6]=R8(c->r[1]+0x0000004Bu); // 8017013C
  W8(c->r[28]+0x000003BBu,c->r[6]); // 80170140
  W32(c->r[28]+0x00000388u,c->r[0]); // 80170144
  c->lr=0x8017014Cu; f_80004714(c); // 80170148
L_8017014C:;
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017014C
  c->r[0]=R32(c->r[1]+0x00000074u); // 80170150
  c->lr=c->r[0]; // 80170154
  c->r[1]=c->r[1]+0x00000070u; // 80170158
  return; // 8017015C
}

// AHXDCD_DecodeFrmHdr__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXDCD_OBJ
void f_80170160(Ctx* __restrict c) {
  trace_call(0x80170160u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170160
  c->r[0]=c->lr; // 80170164
  W32(c->r[1]+0x00000024u,c->r[0]); // 80170168
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017016C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80170170
  W32(c->r[1]+0x00000014u,c->r[29]); // 80170174
  c->r[29]=c->r[3]|c->r[3]; // 80170178
  W32(c->r[1]+0x00000010u,c->r[28]); // 8017017C
  c->r[30]=R32(c->r[3]+0x00000350u); // 80170180
  cmps(c,0,(int32_t)c->r[30],0); // 80170184
  if (!crb(c,2)) { goto L_80170194; } // 80170188
  c->r[3]=0u+0xFFFFFFFFu; // 8017018C
  goto L_801703E8; // 80170190
L_80170194:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 80170194
  c->r[3]=rotl(c->r[0],0)&0x00000007u; cr0(c,c->r[3]); // 80170198
  if (crb(c,2)) { goto L_801701F0; } // 8017019C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801701A0
  c->r[28]=addc(c,~c->r[3],0x00000008u,1); // 801701A4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[28]); // 801701A8
  if (!crb(c,0)) { goto L_801701B8; } // 801701AC
  c->r[3]=c->r[30]|c->r[30]; // 801701B0
  c->lr=0x801701B8u; f_8016FA84(c); // 801701B4
L_801701B8:;
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 801701B8
  cmps(c,0,(int32_t)c->r[28],(int32_t)c->r[4]); // 801701BC
  if (!crb(c,1)) { goto L_801701DC; } // 801701C0
  c->r[3]=R32(c->r[30]+0x00000010u); // 801701C4
  c->r[0]=0u+0x00000000u; // 801701C8
  c->r[3]=c->r[3]+c->r[4]; // 801701CC
  W32(c->r[30]+0x00000010u,c->r[3]); // 801701D0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801701D4
  goto L_801701F0; // 801701D8
L_801701DC:;
  c->r[0]=c->r[4]-c->r[28]; // 801701DC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801701E0
  c->r[0]=R32(c->r[30]+0x00000010u); // 801701E4
  c->r[0]=c->r[0]+c->r[28]; // 801701E8
  W32(c->r[30]+0x00000010u,c->r[0]); // 801701EC
L_801701F0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801701F0
  cmps(c,0,(int32_t)c->r[0],12); // 801701F4
  if (!crb(c,0)) { goto L_80170204; } // 801701F8
  c->r[3]=c->r[30]|c->r[30]; // 801701FC
  c->lr=0x80170204u; f_8016FA84(c); // 80170200
L_80170204:;
  c->r[4]=R32(c->r[30]+0x0000000Cu); // 80170204
  cmps(c,0,(int32_t)c->r[4],12); // 80170208
  if (!crb(c,0)) { goto L_8017022C; } // 8017020C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80170210
  c->r[0]=0u+0x00000000u; // 80170214
  c->r[31]=0u+0x00000000u; // 80170218
  c->r[3]=c->r[3]+c->r[4]; // 8017021C
  W32(c->r[30]+0x00000010u,c->r[3]); // 80170220
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170224
  goto L_8017024C; // 80170228
L_8017022C:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 8017022C
  c->r[0]=c->r[4]+0xFFFFFFF4u; // 80170230
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170234
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 80170238
  c->r[31]=rotl(c->r[3],0)&0x00000FFFu; // 8017023C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80170240
  c->r[0]=c->r[3]+0x0000000Cu; // 80170244
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170248
L_8017024C:;
  c->r[28]=0u+0x00000000u; // 8017024C
  goto L_801702DC; // 80170250
L_80170254:;
  c->r[0]=rotl(c->r[31],0)&0x00000FFFu; // 80170254
  cmpu(c,0,c->r[0],0x00000FFFu); // 80170258
  if (!crb(c,2)) { goto L_80170268; } // 8017025C
  c->r[0]=0u+0x00000001u; // 80170260
  goto L_8017032C; // 80170264
L_80170268:;
  c->r[0]=c->r[31]+0x7FFF0000u; // 80170268
  cmpu(c,0,c->r[0],0x0000000Cu); // 8017026C
  if (!crb(c,2)) { goto L_8017027C; } // 80170270
  c->r[0]=0u+0x00000002u; // 80170274
  goto L_8017032C; // 80170278
L_8017027C:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017027C
  c->r[31]=rotl(c->r[31],4)&0xFFFFFFF0u; // 80170280
  cmps(c,0,(int32_t)c->r[0],4); // 80170284
  if (!crb(c,0)) { goto L_80170294; } // 80170288
  c->r[3]=c->r[30]|c->r[30]; // 8017028C
  c->lr=0x80170294u; f_8016FA84(c); // 80170290
L_80170294:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170294
  cmps(c,0,(int32_t)c->r[5],4); // 80170298
  if (!crb(c,0)) { goto L_801702B8; } // 8017029C
  c->r[0]=R32(c->r[30]+0x00000010u); // 801702A0
  c->r[4]=0u+0x00000000u; // 801702A4
  c->r[0]=c->r[0]+c->r[5]; // 801702A8
  W32(c->r[30]+0x00000010u,c->r[0]); // 801702AC
  W32(c->r[30]+0x0000000Cu,c->r[28]); // 801702B0
  goto L_801702D8; // 801702B4
L_801702B8:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 801702B8
  c->r[0]=c->r[5]+0xFFFFFFFCu; // 801702BC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801702C0
  c->r[3]=sraw(c,c->r[3],(c->r[0])&63); // 801702C4
  c->r[4]=rotl(c->r[3],0)&0x0000000Fu; // 801702C8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801702CC
  c->r[0]=c->r[3]+0x00000004u; // 801702D0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801702D4
L_801702D8:;
  c->r[31]=c->r[31]|c->r[4]; // 801702D8
L_801702DC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801702DC
  c->r[4]=0u+0x00000001u; // 801702E0
  c->r[5]=R32(c->r[3]+0x00000000u); // 801702E4
  c->r[12]=R32(c->r[5]+0x00000024u); // 801702E8
  c->ctr=c->r[12]; // 801702EC
  if (true) { c->lr=0x801702F4u; dispatch(c,c->ctr); } // 801702F0
  cmps(c,0,(int32_t)c->r[3],0); // 801702F4
  if (!crb(c,2)) { goto L_8017031C; } // 801702F8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801702FC
  cmps(c,0,(int32_t)c->r[0],0); // 80170300
  if (!crb(c,2)) { goto L_8017031C; } // 80170304
  c->r[0]=R32(c->r[30]+0x00000024u); // 80170308
  cmps(c,0,(int32_t)c->r[0],0); // 8017030C
  if (!crb(c,2)) { goto L_8017031C; } // 80170310
  c->r[0]=0u+0x00000001u; // 80170314
  goto L_80170320; // 80170318
L_8017031C:;
  c->r[0]=0u+0x00000000u; // 8017031C
L_80170320:;
  cmps(c,0,(int32_t)c->r[0],0); // 80170320
  if (crb(c,2)) { IRQCHK(c); goto L_80170254; } // 80170324
  c->r[0]=0u+0xFFFFFFFFu; // 80170328
L_8017032C:;
  cmps(c,0,(int32_t)c->r[0],-1); // 8017032C
  if (!crb(c,2)) { goto L_8017033C; } // 80170330
  c->r[3]=0u+0xFFFFFFFFu; // 80170334
  goto L_801703E8; // 80170338
L_8017033C:;
  cmps(c,0,(int32_t)c->r[0],1); // 8017033C
  if (crb(c,2)) { goto L_8017034C; } // 80170340
  c->r[3]=0u+0x00000001u; // 80170344
  goto L_801703E8; // 80170348
L_8017034C:;
  c->r[28]=R32(c->r[29]+0x00000350u); // 8017034C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170350
  cmps(c,0,(int32_t)c->r[0],20); // 80170354
  if (!crb(c,0)) { goto L_80170364; } // 80170358
  c->r[3]=c->r[28]|c->r[28]; // 8017035C
  c->lr=0x80170364u; f_8016FA84(c); // 80170360
L_80170364:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80170364
  c->r[0]=0u+0x00000014u; // 80170368
  c->r[30]=0u+0x00000000u; // 8017036C
  c->r[3]=sraw(c,c->r[4],31); // 80170370
  c->r[0]=addc(c,~c->r[0],c->r[4],1); // 80170374
  c->r[0]=addc(c,c->r[3],c->r[30],c->xer_ca); cr0(c,c->r[0]); // 80170378
  if (!crb(c,2)) { goto L_80170388; } // 8017037C
  c->r[3]=0u+0xFFFFFFFFu; // 80170380
  goto L_801703E8; // 80170384
L_80170388:;
  c->r[3]=R32(c->r[29]+0x00000350u); // 80170388
  c->r[4]=c->r[29]+0x00000358u; // 8017038C
  c->lr=0x80170394u; f_80170408(c); // 80170390
  cmps(c,0,(int32_t)c->r[3],0); // 80170394
  if (!crb(c,0)) { goto L_801703A4; } // 80170398
  c->r[3]=0u+0xFFFFFFFFu; // 8017039C
  goto L_801703E8; // 801703A0
L_801703A4:;
  c->r[3]=c->r[29]+0x00000358u; // 801703A4
  c->r[4]=c->r[29]+0x00000388u; // 801703A8
  c->lr=0x801703B0u; f_801708E8(c); // 801703AC
  c->r[3]=R32(c->r[29]+0x00000350u); // 801703B0
  c->r[4]=c->r[29]+0x00000388u; // 801703B4
  c->r[5]=c->r[29]+0x000003C4u; // 801703B8
  c->lr=0x801703C0u; f_801709AC(c); // 801703BC
  c->r[3]=R32(c->r[29]+0x00000350u); // 801703C0
  c->r[4]=c->r[29]+0x00000388u; // 801703C4
  c->r[5]=c->r[29]+0x000003C4u; // 801703C8
  c->r[6]=c->r[29]+0x000004C4u; // 801703CC
  c->r[7]=c->r[29]+0x000005C4u; // 801703D0
  c->lr=0x801703D8u; f_80170C04(c); // 801703D4
  c->r[0]=0u+0x00000001u; // 801703D8
  W8(c->r[29]+0x00000349u,c->r[0]); // 801703DC
  c->r[3]=0u+0x00000000u; // 801703E0
  W32(c->r[29]+0x0000034Cu,c->r[30]); // 801703E4
L_801703E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801703E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801703EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801703F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801703F4
  c->r[28]=R32(c->r[1]+0x00000010u); // 801703F8
  c->lr=c->r[0]; // 801703FC
  c->r[1]=c->r[1]+0x00000020u; // 80170400
  return; // 80170404
}

// AHXDCD_DecodeBhdr__11CriAcAhxsjdFPQ211CriAcAhxsjd11_AHXBSR_objPQ211CriAcAhxsjd8AHX_BHDR
void f_80170408(Ctx* __restrict c) {
  trace_call(0x80170408u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170408
  c->r[0]=c->lr; // 8017040C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80170410
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80170414
  c->r[31]=c->r[4]|c->r[4]; // 80170418
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017041C
  c->r[30]=c->r[3]|c->r[3]; // 80170420
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80170424
  cmps(c,0,(int32_t)c->r[0],1); // 80170428
  if (!crb(c,0)) { goto L_80170434; } // 8017042C
  c->lr=0x80170434u; f_8016FA84(c); // 80170430
L_80170434:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170434
  cmps(c,0,(int32_t)c->r[5],1); // 80170438
  if (!crb(c,0)) { goto L_8017045C; } // 8017043C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80170440
  c->r[0]=0u+0x00000000u; // 80170444
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170448
  c->r[4]=0u+0x00000000u; // 8017044C
  c->r[0]=c->r[3]+c->r[5]; // 80170450
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170454
  goto L_8017047C; // 80170458
L_8017045C:;
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 8017045C
  c->r[3]=R32(c->r[30]+0x00000010u); // 80170460
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170464
  c->r[0]=c->r[3]+0x00000001u; // 80170468
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 8017046C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170470
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170474
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 80170478
L_8017047C:;
  W32(c->r[31]+0x00000000u,c->r[4]); // 8017047C
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80170480
  cmps(c,0,(int32_t)c->r[0],2); // 80170484
  if (!crb(c,0)) { goto L_80170494; } // 80170488
  c->r[3]=c->r[30]|c->r[30]; // 8017048C
  c->lr=0x80170494u; f_8016FA84(c); // 80170490
L_80170494:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170494
  cmps(c,0,(int32_t)c->r[5],2); // 80170498
  if (!crb(c,0)) { goto L_801704BC; } // 8017049C
  c->r[3]=R32(c->r[30]+0x00000010u); // 801704A0
  c->r[0]=0u+0x00000000u; // 801704A4
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801704A8
  c->r[4]=0u+0x00000000u; // 801704AC
  c->r[0]=c->r[3]+c->r[5]; // 801704B0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801704B4
  goto L_801704DC; // 801704B8
L_801704BC:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 801704BC
  c->r[3]=R32(c->r[30]+0x00000010u); // 801704C0
  c->r[5]=R32(c->r[30]+0x00000008u); // 801704C4
  c->r[0]=c->r[3]+0x00000002u; // 801704C8
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 801704CC
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801704D0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801704D4
  c->r[4]=rotl(c->r[5],0)&0x00000003u; // 801704D8
L_801704DC:;
  c->r[0]=addc(c,~c->r[4],0x00000004u,1); // 801704DC
  W32(c->r[31]+0x00000004u,c->r[0]); // 801704E0
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801704E4
  cmps(c,0,(int32_t)c->r[0],1); // 801704E8
  if (!crb(c,0)) { goto L_801704F8; } // 801704EC
  c->r[3]=c->r[30]|c->r[30]; // 801704F0
  c->lr=0x801704F8u; f_8016FA84(c); // 801704F4
L_801704F8:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801704F8
  cmps(c,0,(int32_t)c->r[5],1); // 801704FC
  if (!crb(c,0)) { goto L_80170520; } // 80170500
  c->r[3]=R32(c->r[30]+0x00000010u); // 80170504
  c->r[0]=0u+0x00000000u; // 80170508
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8017050C
  c->r[4]=0u+0x00000000u; // 80170510
  c->r[0]=c->r[3]+c->r[5]; // 80170514
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170518
  goto L_80170540; // 8017051C
L_80170520:;
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 80170520
  c->r[3]=R32(c->r[30]+0x00000010u); // 80170524
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170528
  c->r[0]=c->r[3]+0x00000001u; // 8017052C
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170530
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170534
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170538
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 8017053C
L_80170540:;
  c->r[0]=cntlz(c->r[4]); // 80170540
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80170544
  W32(c->r[31]+0x00000008u,c->r[0]); // 80170548
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017054C
  cmps(c,0,(int32_t)c->r[0],4); // 80170550
  if (!crb(c,0)) { goto L_80170560; } // 80170554
  c->r[3]=c->r[30]|c->r[30]; // 80170558
  c->lr=0x80170560u; f_8016FA84(c); // 8017055C
L_80170560:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170560
  cmps(c,0,(int32_t)c->r[5],4); // 80170564
  if (!crb(c,0)) { goto L_80170588; } // 80170568
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017056C
  c->r[0]=0u+0x00000000u; // 80170570
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170574
  c->r[4]=0u+0x00000000u; // 80170578
  c->r[0]=c->r[3]+c->r[5]; // 8017057C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170580
  goto L_801705A8; // 80170584
L_80170588:;
  c->r[4]=c->r[5]+0xFFFFFFFCu; // 80170588
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017058C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170590
  c->r[0]=c->r[3]+0x00000004u; // 80170594
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170598
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 8017059C
  W32(c->r[30]+0x00000010u,c->r[0]); // 801705A0
  c->r[4]=rotl(c->r[5],0)&0x0000000Fu; // 801705A4
L_801705A8:;
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 801705A8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801705AC
  cmps(c,0,(int32_t)c->r[0],2); // 801705B0
  if (!crb(c,0)) { goto L_801705C0; } // 801705B4
  c->r[3]=c->r[30]|c->r[30]; // 801705B8
  c->lr=0x801705C0u; f_8016FA84(c); // 801705BC
L_801705C0:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801705C0
  cmps(c,0,(int32_t)c->r[5],2); // 801705C4
  if (!crb(c,0)) { goto L_801705E8; } // 801705C8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801705CC
  c->r[0]=0u+0x00000000u; // 801705D0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801705D4
  c->r[4]=0u+0x00000000u; // 801705D8
  c->r[0]=c->r[3]+c->r[5]; // 801705DC
  W32(c->r[30]+0x00000010u,c->r[0]); // 801705E0
  goto L_80170608; // 801705E4
L_801705E8:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 801705E8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801705EC
  c->r[5]=R32(c->r[30]+0x00000008u); // 801705F0
  c->r[0]=c->r[3]+0x00000002u; // 801705F4
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 801705F8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801705FC
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170600
  c->r[4]=rotl(c->r[5],0)&0x00000003u; // 80170604
L_80170608:;
  W32(c->r[31]+0x00000010u,c->r[4]); // 80170608
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017060C
  cmps(c,0,(int32_t)c->r[0],1); // 80170610
  if (!crb(c,0)) { goto L_80170620; } // 80170614
  c->r[3]=c->r[30]|c->r[30]; // 80170618
  c->lr=0x80170620u; f_8016FA84(c); // 8017061C
L_80170620:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170620
  cmps(c,0,(int32_t)c->r[5],1); // 80170624
  if (!crb(c,0)) { goto L_80170648; } // 80170628
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017062C
  c->r[0]=0u+0x00000000u; // 80170630
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170634
  c->r[4]=0u+0x00000000u; // 80170638
  c->r[0]=c->r[3]+c->r[5]; // 8017063C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170640
  goto L_80170668; // 80170644
L_80170648:;
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 80170648
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017064C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170650
  c->r[0]=c->r[3]+0x00000001u; // 80170654
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170658
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 8017065C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170660
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 80170664
L_80170668:;
  W32(c->r[31]+0x00000014u,c->r[4]); // 80170668
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017066C
  cmps(c,0,(int32_t)c->r[0],1); // 80170670
  if (!crb(c,0)) { goto L_80170680; } // 80170674
  c->r[3]=c->r[30]|c->r[30]; // 80170678
  c->lr=0x80170680u; f_8016FA84(c); // 8017067C
L_80170680:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170680
  cmps(c,0,(int32_t)c->r[5],1); // 80170684
  if (!crb(c,0)) { goto L_801706A8; } // 80170688
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017068C
  c->r[0]=0u+0x00000000u; // 80170690
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170694
  c->r[4]=0u+0x00000000u; // 80170698
  c->r[0]=c->r[3]+c->r[5]; // 8017069C
  W32(c->r[30]+0x00000010u,c->r[0]); // 801706A0
  goto L_801706C8; // 801706A4
L_801706A8:;
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 801706A8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801706AC
  c->r[5]=R32(c->r[30]+0x00000008u); // 801706B0
  c->r[0]=c->r[3]+0x00000001u; // 801706B4
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 801706B8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801706BC
  W32(c->r[30]+0x00000010u,c->r[0]); // 801706C0
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 801706C4
L_801706C8:;
  W32(c->r[31]+0x00000018u,c->r[4]); // 801706C8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801706CC
  cmps(c,0,(int32_t)c->r[0],2); // 801706D0
  if (!crb(c,0)) { goto L_801706E0; } // 801706D4
  c->r[3]=c->r[30]|c->r[30]; // 801706D8
  c->lr=0x801706E0u; f_8016FA84(c); // 801706DC
L_801706E0:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801706E0
  cmps(c,0,(int32_t)c->r[5],2); // 801706E4
  if (!crb(c,0)) { goto L_80170708; } // 801706E8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801706EC
  c->r[0]=0u+0x00000000u; // 801706F0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801706F4
  c->r[4]=0u+0x00000000u; // 801706F8
  c->r[0]=c->r[3]+c->r[5]; // 801706FC
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170700
  goto L_80170728; // 80170704
L_80170708:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 80170708
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017070C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170710
  c->r[0]=c->r[3]+0x00000002u; // 80170714
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170718
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 8017071C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170720
  c->r[4]=rotl(c->r[5],0)&0x00000003u; // 80170724
L_80170728:;
  W32(c->r[31]+0x0000001Cu,c->r[4]); // 80170728
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017072C
  cmps(c,0,(int32_t)c->r[0],2); // 80170730
  if (!crb(c,0)) { goto L_80170740; } // 80170734
  c->r[3]=c->r[30]|c->r[30]; // 80170738
  c->lr=0x80170740u; f_8016FA84(c); // 8017073C
L_80170740:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170740
  cmps(c,0,(int32_t)c->r[5],2); // 80170744
  if (!crb(c,0)) { goto L_80170768; } // 80170748
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017074C
  c->r[0]=0u+0x00000000u; // 80170750
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170754
  c->r[4]=0u+0x00000000u; // 80170758
  c->r[0]=c->r[3]+c->r[5]; // 8017075C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170760
  goto L_80170788; // 80170764
L_80170768:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 80170768
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017076C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170770
  c->r[0]=c->r[3]+0x00000002u; // 80170774
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170778
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 8017077C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170780
  c->r[4]=rotl(c->r[5],0)&0x00000003u; // 80170784
L_80170788:;
  W32(c->r[31]+0x00000020u,c->r[4]); // 80170788
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017078C
  cmps(c,0,(int32_t)c->r[0],1); // 80170790
  if (!crb(c,0)) { goto L_801707A0; } // 80170794
  c->r[3]=c->r[30]|c->r[30]; // 80170798
  c->lr=0x801707A0u; f_8016FA84(c); // 8017079C
L_801707A0:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 801707A0
  cmps(c,0,(int32_t)c->r[5],1); // 801707A4
  if (!crb(c,0)) { goto L_801707C8; } // 801707A8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801707AC
  c->r[0]=0u+0x00000000u; // 801707B0
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 801707B4
  c->r[4]=0u+0x00000000u; // 801707B8
  c->r[0]=c->r[3]+c->r[5]; // 801707BC
  W32(c->r[30]+0x00000010u,c->r[0]); // 801707C0
  goto L_801707E8; // 801707C4
L_801707C8:;
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 801707C8
  c->r[3]=R32(c->r[30]+0x00000010u); // 801707CC
  c->r[5]=R32(c->r[30]+0x00000008u); // 801707D0
  c->r[0]=c->r[3]+0x00000001u; // 801707D4
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 801707D8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801707DC
  W32(c->r[30]+0x00000010u,c->r[0]); // 801707E0
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 801707E4
L_801707E8:;
  W32(c->r[31]+0x00000024u,c->r[4]); // 801707E8
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801707EC
  cmps(c,0,(int32_t)c->r[0],1); // 801707F0
  if (!crb(c,0)) { goto L_80170800; } // 801707F4
  c->r[3]=c->r[30]|c->r[30]; // 801707F8
  c->lr=0x80170800u; f_8016FA84(c); // 801707FC
L_80170800:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170800
  cmps(c,0,(int32_t)c->r[5],1); // 80170804
  if (!crb(c,0)) { goto L_80170828; } // 80170808
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017080C
  c->r[0]=0u+0x00000000u; // 80170810
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170814
  c->r[4]=0u+0x00000000u; // 80170818
  c->r[0]=c->r[3]+c->r[5]; // 8017081C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170820
  goto L_80170848; // 80170824
L_80170828:;
  c->r[4]=c->r[5]+0xFFFFFFFFu; // 80170828
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017082C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170830
  c->r[0]=c->r[3]+0x00000001u; // 80170834
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170838
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 8017083C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170840
  c->r[4]=rotl(c->r[5],0)&0x00000001u; // 80170844
L_80170848:;
  W32(c->r[31]+0x00000028u,c->r[4]); // 80170848
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8017084C
  cmps(c,0,(int32_t)c->r[0],2); // 80170850
  if (!crb(c,0)) { goto L_80170860; } // 80170854
  c->r[3]=c->r[30]|c->r[30]; // 80170858
  c->lr=0x80170860u; f_8016FA84(c); // 8017085C
L_80170860:;
  c->r[5]=R32(c->r[30]+0x0000000Cu); // 80170860
  cmps(c,0,(int32_t)c->r[5],2); // 80170864
  if (!crb(c,0)) { goto L_80170888; } // 80170868
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017086C
  c->r[0]=0u+0x00000000u; // 80170870
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80170874
  c->r[4]=0u+0x00000000u; // 80170878
  c->r[0]=c->r[3]+c->r[5]; // 8017087C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80170880
  goto L_801708A8; // 80170884
L_80170888:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 80170888
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017088C
  c->r[5]=R32(c->r[30]+0x00000008u); // 80170890
  c->r[0]=c->r[3]+0x00000002u; // 80170894
  W32(c->r[30]+0x0000000Cu,c->r[4]); // 80170898
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 8017089C
  W32(c->r[30]+0x00000010u,c->r[0]); // 801708A0
  c->r[4]=rotl(c->r[5],0)&0x00000003u; // 801708A4
L_801708A8:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 801708A8
  W32(c->r[31]+0x0000002Cu,c->r[4]); // 801708AC
  cmps(c,0,(int32_t)c->r[0],3); // 801708B0
  if (!crb(c,2)) { goto L_801708C4; } // 801708B4
  c->r[0]=R32(c->r[31]+0x00000020u); // 801708B8
  cmps(c,0,(int32_t)c->r[0],0); // 801708BC
  if (crb(c,2)) { goto L_801708CC; } // 801708C0
L_801708C4:;
  c->r[3]=0u+0xFFFFFFFFu; // 801708C4
  goto L_801708D0; // 801708C8
L_801708CC:;
  c->r[3]=0u+0x00000000u; // 801708CC
L_801708D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801708D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801708D4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801708D8
  c->lr=c->r[0]; // 801708DC
  c->r[1]=c->r[1]+0x00000010u; // 801708E0
  return; // 801708E4
}

// AHXDCD_BhdrToDinf__11CriAcAhxsjdFPQ211CriAcAhxsjd8AHX_BHDRPQ211CriAcAhxsjd8AHX_DINF
void f_801708E8(Ctx* __restrict c) {
  trace_call(0x801708E8u);
  c->r[0]=R32(c->r[4]+0x00000000u); // 801708E8
  cmps(c,0,(int32_t)c->r[0],0); // 801708EC
  if (!crb(c,2)) { goto L_80170914; } // 801708F0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801708F4
  cmps(c,0,(int32_t)c->r[0],3); // 801708F8
  if (!crb(c,2)) { goto L_8017090C; } // 801708FC
  c->r[0]=0u+0x00000001u; // 80170900
  W32(c->r[4]+0x00000004u,c->r[0]); // 80170904
  goto L_80170914; // 80170908
L_8017090C:;
  c->r[0]=0u+0x00000002u; // 8017090C
  W32(c->r[4]+0x00000004u,c->r[0]); // 80170910
L_80170914:;
  c->r[0]=R32(c->r[3]+0x00000004u); // 80170914
  cmps(c,0,(int32_t)c->r[0],2); // 80170918
  if (!crb(c,2)) { goto L_80170934; } // 8017091C
  c->r[5]=R32(c->r[13]+0xFFFFA1C0u); // 80170920
  c->r[0]=0u+0x0000001Eu; // 80170924
  W32(c->r[4]+0x00000018u,c->r[5]); // 80170928
  W32(c->r[4]+0x00000010u,c->r[0]); // 8017092C
  goto L_8017093C; // 80170930
L_80170934:;
  c->r[0]=0u+0x00000020u; // 80170934
  W32(c->r[4]+0x00000010u,c->r[0]); // 80170938
L_8017093C:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 8017093C
  cmps(c,0,(int32_t)c->r[0],1); // 80170940
  if (!crb(c,2)) { goto L_80170970; } // 80170944
  c->r[5]=R32(c->r[3]+0x00000004u); // 80170948
  c->r[6]=0u+0x80330000u; // 8017094C
  c->r[0]=R32(c->r[3]+0x00000020u); // 80170950
  c->r[6]=c->r[6]+0x000018F8u; // 80170954
  c->r[7]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80170958
  c->r[5]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017095C
  c->r[0]=c->r[6]+c->r[7]; // 80170960
  c->r[0]=R32(c->r[5]+c->r[0]); // 80170964
  W32(c->r[4]+0x00000014u,c->r[0]); // 80170968
  goto L_80170978; // 8017096C
L_80170970:;
  c->r[0]=R32(c->r[4]+0x00000010u); // 80170970
  W32(c->r[4]+0x00000014u,c->r[0]); // 80170974
L_80170978:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80170978
  cmps(c,0,(int32_t)c->r[0],0); // 8017097C
  if (!crb(c,2)) return; // 80170980
  c->r[6]=R32(c->r[3]+0x00000000u); // 80170984
  c->r[5]=0u+0x80330000u; // 80170988
  c->r[0]=R32(c->r[3]+0x00000010u); // 8017098C
  c->r[5]=c->r[5]+0x000018D8u; // 80170990
  c->r[6]=rotl(c->r[6],4)&0xFFFFFFF0u; // 80170994
  c->r[3]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80170998
  c->r[0]=c->r[5]+c->r[6]; // 8017099C
  c->r[0]=R32(c->r[3]+c->r[0]); // 801709A0
  W32(c->r[4]+0x00000008u,c->r[0]); // 801709A4
  return; // 801709A8
}

// AHXDCD_DecodeBitalloc2__11CriAcAhxsjdFPQ211CriAcAhxsjd11_AHXBSR_objPQ211CriAcAhxsjd8AHX_DINFPA32_Ul
void f_801709AC(Ctx* __restrict c) {
  trace_call(0x801709ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801709AC
  c->r[0]=c->lr; // 801709B0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801709B4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=18;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801709B8
  c->r[18]=0u+0x802D0000u; // 801709BC
  c->r[19]=c->r[3]|c->r[3]; // 801709C0
  c->r[20]=c->r[5]|c->r[5]; // 801709C4
  c->r[18]=c->r[18]+0x000005A8u; // 801709C8
  c->r[26]=0u+0x00000000u; // 801709CC
  c->r[28]=0u+0x00000000u; // 801709D0
  c->r[31]=0u+0x00000000u; // 801709D4
  c->r[21]=R32(c->r[4]+0x00000018u); // 801709D8
  c->r[24]=R32(c->r[4]+0x00000010u); // 801709DC
  c->r[23]=R32(c->r[4]+0x00000004u); // 801709E0
  c->r[29]=c->r[21]|c->r[21]; // 801709E4
  c->r[22]=R32(c->r[4]+0x00000014u); // 801709E8
  goto L_80170A80; // 801709EC
L_801709F0:;
  c->r[27]=c->r[20]+c->r[28]; // 801709F0
  c->r[25]=0u+0x00000000u; // 801709F4
  goto L_80170A6C; // 801709F8
L_801709FC:;
  c->r[30]=R32(c->r[29]+0x00000004u); // 801709FC
  c->r[0]=R32(c->r[19]+0x0000000Cu); // 80170A00
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80170A04
  if (!crb(c,0)) { goto L_80170A14; } // 80170A08
  c->r[3]=c->r[19]|c->r[19]; // 80170A0C
  c->lr=0x80170A14u; f_8016FA84(c); // 80170A10
L_80170A14:;
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 80170A14
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[4]); // 80170A18
  if (!crb(c,1)) { goto L_80170A38; } // 80170A1C
  c->r[0]=R32(c->r[19]+0x00000010u); // 80170A20
  c->r[3]=0u+0x00000000u; // 80170A24
  W32(c->r[19]+0x0000000Cu,c->r[31]); // 80170A28
  c->r[0]=c->r[0]+c->r[4]; // 80170A2C
  W32(c->r[19]+0x00000010u,c->r[0]); // 80170A30
  goto L_80170A60; // 80170A34
L_80170A38:;
  c->r[3]=rotl(c->r[30],2)&0xFFFFFFFCu; // 80170A38
  c->r[0]=R32(c->r[19]+0x00000010u); // 80170A3C
  c->r[4]=c->r[4]-c->r[30]; // 80170A40
  c->r[5]=R32(c->r[19]+0x00000008u); // 80170A44
  c->r[0]=c->r[0]+c->r[30]; // 80170A48
  c->r[3]=R32(c->r[18]+c->r[3]); // 80170A4C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170A50
  W32(c->r[19]+0x0000000Cu,c->r[4]); // 80170A54
  c->r[3]=c->r[5]&c->r[3]; // 80170A58
  W32(c->r[19]+0x00000010u,c->r[0]); // 80170A5C
L_80170A60:;
  W32(c->r[27]+0x00000000u,c->r[3]); // 80170A60
  c->r[27]=c->r[27]+0x00000080u; // 80170A64
  c->r[25]=c->r[25]+0x00000001u; // 80170A68
L_80170A6C:;
  cmps(c,0,(int32_t)c->r[25],(int32_t)c->r[23]); // 80170A6C
  if (crb(c,0)) { IRQCHK(c); goto L_801709FC; } // 80170A70
  c->r[29]=c->r[29]+0x00000180u; // 80170A74
  c->r[28]=c->r[28]+0x00000004u; // 80170A78
  c->r[26]=c->r[26]+0x00000001u; // 80170A7C
L_80170A80:;
  cmps(c,0,(int32_t)c->r[26],(int32_t)c->r[22]); // 80170A80
  if (crb(c,0)) { IRQCHK(c); goto L_801709F0; } // 80170A84
  c->r[3]=(uint32_t)((int32_t)c->r[22]*(int32_t)384); // 80170A88
  c->r[0]=rotl(c->r[22],2)&0xFFFFFFFCu; // 80170A8C
  c->r[25]=0u+0x802D0000u; // 80170A90
  c->r[31]=c->r[20]+c->r[0]; // 80170A94
  c->r[30]=c->r[21]+c->r[3]; // 80170A98
  c->r[25]=c->r[25]+0x000005A8u; // 80170A9C
  c->r[21]=0u+0x00000000u; // 80170AA0
  goto L_80170B20; // 80170AA4
L_80170AA8:;
  c->r[18]=R32(c->r[30]+0x00000004u); // 80170AA8
  c->r[0]=R32(c->r[19]+0x0000000Cu); // 80170AAC
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[18]); // 80170AB0
  if (!crb(c,0)) { goto L_80170AC0; } // 80170AB4
  c->r[3]=c->r[19]|c->r[19]; // 80170AB8
  c->lr=0x80170AC0u; f_8016FA84(c); // 80170ABC
L_80170AC0:;
  c->r[4]=R32(c->r[19]+0x0000000Cu); // 80170AC0
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[4]); // 80170AC4
  if (!crb(c,1)) { goto L_80170AE4; } // 80170AC8
  c->r[0]=R32(c->r[19]+0x00000010u); // 80170ACC
  c->r[3]=0u+0x00000000u; // 80170AD0
  W32(c->r[19]+0x0000000Cu,c->r[21]); // 80170AD4
  c->r[0]=c->r[0]+c->r[4]; // 80170AD8
  W32(c->r[19]+0x00000010u,c->r[0]); // 80170ADC
  goto L_80170B0C; // 80170AE0
L_80170AE4:;
  c->r[3]=rotl(c->r[18],2)&0xFFFFFFFCu; // 80170AE4
  c->r[0]=R32(c->r[19]+0x00000010u); // 80170AE8
  c->r[4]=c->r[4]-c->r[18]; // 80170AEC
  c->r[5]=R32(c->r[19]+0x00000008u); // 80170AF0
  c->r[0]=c->r[0]+c->r[18]; // 80170AF4
  c->r[3]=R32(c->r[25]+c->r[3]); // 80170AF8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170AFC
  W32(c->r[19]+0x0000000Cu,c->r[4]); // 80170B00
  c->r[3]=c->r[5]&c->r[3]; // 80170B04
  W32(c->r[19]+0x00000010u,c->r[0]); // 80170B08
L_80170B0C:;
  W32(c->r[31]+0x00000080u,c->r[3]); // 80170B0C
  c->r[30]=c->r[30]+0x00000180u; // 80170B10
  c->r[22]=c->r[22]+0x00000001u; // 80170B14
  W32(c->r[31]+0x00000000u,c->r[3]); // 80170B18
  c->r[31]=c->r[31]+0x00000004u; // 80170B1C
L_80170B20:;
  cmps(c,0,(int32_t)c->r[22],(int32_t)c->r[24]); // 80170B20
  if (crb(c,0)) { IRQCHK(c); goto L_80170AA8; } // 80170B24
  c->r[7]=rotl(c->r[24],2)&0xFFFFFFFCu; // 80170B28
  c->r[3]=0u+0x00000000u; // 80170B2C
  c->r[6]=0u+0x80000000u; // 80170B30
  goto L_80170BE8; // 80170B34
L_80170B38:;
  cmps(c,1,(int32_t)c->r[23],0); // 80170B38
  c->r[8]=0u+0x00000000u; // 80170B3C
  if (!crb(c,5)) { goto L_80170BE0; } // 80170B40
  cmps(c,0,(int32_t)c->r[23],8); // 80170B44
  c->r[4]=c->r[23]+0xFFFFFFF8u; // 80170B48
  if (!crb(c,1)) { goto L_80170BB4; } // 80170B4C
  c->r[5]=0u+0x00000000u; // 80170B50
  if (crb(c,4)) { goto L_80170B68; } // 80170B54
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 80170B58
  cmps(c,0,(int32_t)c->r[23],(int32_t)c->r[0]); // 80170B5C
  if (crb(c,1)) { goto L_80170B68; } // 80170B60
  c->r[5]=0u+0x00000001u; // 80170B64
L_80170B68:;
  cmps(c,0,(int32_t)c->r[5],0); // 80170B68
  if (crb(c,2)) { goto L_80170BB4; } // 80170B6C
  c->r[0]=c->r[4]+0x00000007u; // 80170B70
  c->r[5]=c->r[20]+c->r[7]; // 80170B74
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80170B78
  c->ctr=c->r[0]; // 80170B7C
  cmps(c,0,(int32_t)c->r[4],0); // 80170B80
  if (!crb(c,1)) { goto L_80170BB4; } // 80170B84
L_80170B88:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 80170B88
  c->r[8]=c->r[8]+0x00000008u; // 80170B8C
  W32(c->r[5]+0x00000080u,c->r[3]); // 80170B90
  W32(c->r[5]+0x00000100u,c->r[3]); // 80170B94
  W32(c->r[5]+0x00000180u,c->r[3]); // 80170B98
  W32(c->r[5]+0x00000200u,c->r[3]); // 80170B9C
  W32(c->r[5]+0x00000280u,c->r[3]); // 80170BA0
  W32(c->r[5]+0x00000300u,c->r[3]); // 80170BA4
  W32(c->r[5]+0x00000380u,c->r[3]); // 80170BA8
  c->r[5]=c->r[5]+0x00000400u; // 80170BAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80170B88; } // 80170BB0
L_80170BB4:;
  c->r[5]=rotl(c->r[8],7)&0xFFFFFF80u; // 80170BB4
  c->r[4]=c->r[20]+c->r[7]; // 80170BB8
  c->r[0]=c->r[23]-c->r[8]; // 80170BBC
  c->r[4]=c->r[5]+c->r[4]; // 80170BC0
  c->ctr=c->r[0]; // 80170BC4
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[23]); // 80170BC8
  if (!crb(c,0)) { goto L_80170BE0; } // 80170BCC
L_80170BD0:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80170BD0
  c->r[4]=c->r[4]+0x00000080u; // 80170BD4
  c->r[8]=c->r[8]+0x00000001u; // 80170BD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80170BD0; } // 80170BDC
L_80170BE0:;
  c->r[7]=c->r[7]+0x00000004u; // 80170BE0
  c->r[24]=c->r[24]+0x00000001u; // 80170BE4
L_80170BE8:;
  cmps(c,0,(int32_t)c->r[24],32); // 80170BE8
  if (crb(c,0)) { IRQCHK(c); goto L_80170B38; } // 80170BEC
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=18;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80170BF0
  c->r[0]=R32(c->r[1]+0x00000044u); // 80170BF4
  c->lr=c->r[0]; // 80170BF8
  c->r[1]=c->r[1]+0x00000040u; // 80170BFC
  return; // 80170C00
}

// AHXDCD_DecodeScale2__11CriAcAhxsjdFPQ211CriAcAhxsjd11_AHXBSR_objPQ211CriAcAhxsjd8AHX_DINFPA32_UlPA32_UlPA3_A32_Ul
void f_80170C04(Ctx* __restrict c) {
  trace_call(0x80170C04u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80170C04
  c->r[0]=c->lr; // 80170C08
  W32(c->r[1]+0x00000054u,c->r[0]); // 80170C0C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80170C10
  c->r[28]=c->r[3]|c->r[3]; // 80170C14
  c->r[21]=c->r[4]|c->r[4]; // 80170C18
  c->r[29]=c->r[5]|c->r[5]; // 80170C1C
  c->r[30]=c->r[6]|c->r[6]; // 80170C20
  c->r[31]=c->r[7]|c->r[7]; // 80170C24
  c->r[0]=R32(c->r[5]+0x00000000u); // 80170C28
  c->r[19]=R32(c->r[4]+0x00000010u); // 80170C2C
  cmps(c,0,(int32_t)c->r[0],0); // 80170C30
  c->r[18]=R32(c->r[4]+0x00000004u); // 80170C34
  if (crb(c,2)) { goto L_80170C9C; } // 80170C38
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80170C3C
  cmps(c,0,(int32_t)c->r[0],2); // 80170C40
  if (!crb(c,0)) { goto L_80170C4C; } // 80170C44
  c->lr=0x80170C4Cu; f_8016FA84(c); // 80170C48
L_80170C4C:;
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 80170C4C
  cmps(c,0,(int32_t)c->r[5],2); // 80170C50
  if (!crb(c,0)) { goto L_80170C74; } // 80170C54
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170C58
  c->r[0]=0u+0x00000000u; // 80170C5C
  W32(c->r[28]+0x0000000Cu,c->r[0]); // 80170C60
  c->r[4]=0u+0x00000000u; // 80170C64
  c->r[0]=c->r[3]+c->r[5]; // 80170C68
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170C6C
  goto L_80170C94; // 80170C70
L_80170C74:;
  c->r[4]=c->r[5]+0xFFFFFFFEu; // 80170C74
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170C78
  c->r[5]=R32(c->r[28]+0x00000008u); // 80170C7C
  c->r[0]=c->r[3]+0x00000002u; // 80170C80
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80170C84
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170C88
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170C8C
  c->r[4]=rotl(c->r[5],0)&0x00000003u; // 80170C90
L_80170C94:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 80170C94
  goto L_80170CA4; // 80170C98
L_80170C9C:;
  c->r[0]=0u+0x00000000u; // 80170C9C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80170CA0
L_80170CA4:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80170CA4
  c->r[23]=c->r[29]+0x00000004u; // 80170CA8
  c->r[24]=c->r[30]+0x00000004u; // 80170CAC
  c->r[20]=0u+0x00000001u; // 80170CB0
  c->r[0]=rotl(c->r[0],1)&0xFFFFFFFEu; // 80170CB4
  c->r[17]=0u+0x00000000u; // 80170CB8
  c->r[3]=c->r[21]+c->r[0]; // 80170CBC
  c->r[21]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x00000034u); // 80170CC0
  goto L_80170D48; // 80170CC4
L_80170CC8:;
  c->r[0]=R32(c->r[23]+0x00000000u); // 80170CC8
  cmps(c,0,(int32_t)c->r[0],0); // 80170CCC
  if (crb(c,2)) { goto L_80170D38; } // 80170CD0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170CD4
  cmps(c,0,(int32_t)c->r[0],2); // 80170CD8
  if (!crb(c,0)) { goto L_80170CE8; } // 80170CDC
  c->r[3]=c->r[28]|c->r[28]; // 80170CE0
  c->lr=0x80170CE8u; f_8016FA84(c); // 80170CE4
L_80170CE8:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80170CE8
  cmps(c,0,(int32_t)c->r[4],2); // 80170CEC
  if (!crb(c,0)) { goto L_80170D0C; } // 80170CF0
  c->r[0]=R32(c->r[28]+0x00000010u); // 80170CF4
  c->r[3]=0u+0x00000000u; // 80170CF8
  W32(c->r[28]+0x0000000Cu,c->r[17]); // 80170CFC
  c->r[0]=c->r[0]+c->r[4]; // 80170D00
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170D04
  goto L_80170D2C; // 80170D08
L_80170D0C:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170D0C
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 80170D10
  c->r[5]=R32(c->r[28]+0x00000008u); // 80170D14
  c->r[0]=c->r[3]+0x00000002u; // 80170D18
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80170D1C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170D20
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170D24
  c->r[3]=rotl(c->r[5],0)&0x00000003u; // 80170D28
L_80170D2C:;
  c->r[0]=rotl(c->r[21],0)&0x00000003u; // 80170D2C
  c->r[0]=c->r[3]^c->r[0]; // 80170D30
  W32(c->r[24]+0x00000000u,c->r[0]); // 80170D34
L_80170D38:;
  c->r[21]=sraw(c,c->r[21],2); // 80170D38
  c->r[24]=c->r[24]+0x00000004u; // 80170D3C
  c->r[20]=c->r[20]+0x00000001u; // 80170D40
  c->r[23]=c->r[23]+0x00000004u; // 80170D44
L_80170D48:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[19]); // 80170D48
  if (crb(c,0)) { IRQCHK(c); goto L_80170CC8; } // 80170D4C
  c->r[22]=rotl(c->r[19],2)&0xFFFFFFFCu; // 80170D50
  c->r[8]=c->r[19]|c->r[19]; // 80170D54
  c->r[7]=c->r[22]|c->r[22]; // 80170D58
  c->r[3]=0u+0x00000000u; // 80170D5C
  c->r[6]=0u+0x80000000u; // 80170D60
  goto L_80170E18; // 80170D64
L_80170D68:;
  cmps(c,1,(int32_t)c->r[18],0); // 80170D68
  c->r[9]=0u+0x00000000u; // 80170D6C
  if (!crb(c,5)) { goto L_80170E10; } // 80170D70
  cmps(c,0,(int32_t)c->r[18],8); // 80170D74
  c->r[4]=c->r[18]+0xFFFFFFF8u; // 80170D78
  if (!crb(c,1)) { goto L_80170DE4; } // 80170D7C
  c->r[5]=0u+0x00000000u; // 80170D80
  if (crb(c,4)) { goto L_80170D98; } // 80170D84
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 80170D88
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 80170D8C
  if (crb(c,1)) { goto L_80170D98; } // 80170D90
  c->r[5]=0u+0x00000001u; // 80170D94
L_80170D98:;
  cmps(c,0,(int32_t)c->r[5],0); // 80170D98
  if (crb(c,2)) { goto L_80170DE4; } // 80170D9C
  c->r[0]=c->r[4]+0x00000007u; // 80170DA0
  c->r[5]=c->r[30]+c->r[7]; // 80170DA4
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80170DA8
  c->ctr=c->r[0]; // 80170DAC
  cmps(c,0,(int32_t)c->r[4],0); // 80170DB0
  if (!crb(c,1)) { goto L_80170DE4; } // 80170DB4
L_80170DB8:;
  W32(c->r[5]+0x00000000u,c->r[3]); // 80170DB8
  c->r[9]=c->r[9]+0x00000008u; // 80170DBC
  W32(c->r[5]+0x00000080u,c->r[3]); // 80170DC0
  W32(c->r[5]+0x00000100u,c->r[3]); // 80170DC4
  W32(c->r[5]+0x00000180u,c->r[3]); // 80170DC8
  W32(c->r[5]+0x00000200u,c->r[3]); // 80170DCC
  W32(c->r[5]+0x00000280u,c->r[3]); // 80170DD0
  W32(c->r[5]+0x00000300u,c->r[3]); // 80170DD4
  W32(c->r[5]+0x00000380u,c->r[3]); // 80170DD8
  c->r[5]=c->r[5]+0x00000400u; // 80170DDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80170DB8; } // 80170DE0
L_80170DE4:;
  c->r[5]=rotl(c->r[9],7)&0xFFFFFF80u; // 80170DE4
  c->r[4]=c->r[30]+c->r[7]; // 80170DE8
  c->r[0]=c->r[18]-c->r[9]; // 80170DEC
  c->r[4]=c->r[5]+c->r[4]; // 80170DF0
  c->ctr=c->r[0]; // 80170DF4
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[18]); // 80170DF8
  if (!crb(c,0)) { goto L_80170E10; } // 80170DFC
L_80170E00:;
  W32(c->r[4]+0x00000000u,c->r[3]); // 80170E00
  c->r[4]=c->r[4]+0x00000080u; // 80170E04
  c->r[9]=c->r[9]+0x00000001u; // 80170E08
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80170E00; } // 80170E0C
L_80170E10:;
  c->r[7]=c->r[7]+0x00000004u; // 80170E10
  c->r[8]=c->r[8]+0x00000001u; // 80170E14
L_80170E18:;
  cmps(c,0,(int32_t)c->r[8],32); // 80170E18
  if (crb(c,0)) { IRQCHK(c); goto L_80170D68; } // 80170E1C
  c->r[21]=0u+0x00000000u; // 80170E20
  c->r[26]=0u+0x00000000u; // 80170E24
  c->r[27]=0u+0x00000000u; // 80170E28
  c->r[17]=0u+0x0000003Fu; // 80170E2C
  goto L_801711A8; // 80170E30
L_80170E34:;
  c->r[25]=c->r[29]+c->r[26]; // 80170E34
  c->r[24]=c->r[30]+c->r[26]; // 80170E38
  c->r[23]=c->r[31]+c->r[26]; // 80170E3C
  c->r[20]=0u+0x00000000u; // 80170E40
  goto L_80171198; // 80170E44
L_80170E48:;
  c->r[0]=R32(c->r[25]+0x00000000u); // 80170E48
  cmps(c,0,(int32_t)c->r[0],0); // 80170E4C
  if (crb(c,2)) { goto L_8017117C; } // 80170E50
  c->r[0]=R32(c->r[24]+0x00000000u); // 80170E54
  cmps(c,0,(int32_t)c->r[0],0); // 80170E58
  if (crb(c,2)) { goto L_80170E7C; } // 80170E5C
  cmpu(c,0,c->r[0],0x00000001u); // 80170E60
  if (crb(c,2)) { goto L_80170F94; } // 80170E64
  cmpu(c,0,c->r[0],0x00000003u); // 80170E68
  if (crb(c,2)) { goto L_80171054; } // 80170E6C
  cmpu(c,0,c->r[0],0x00000002u); // 80170E70
  if (crb(c,2)) { goto L_80171114; } // 80170E74
  goto L_80171188; // 80170E78
L_80170E7C:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170E7C
  cmps(c,0,(int32_t)c->r[0],6); // 80170E80
  if (!crb(c,0)) { goto L_80170E90; } // 80170E84
  c->r[3]=c->r[28]|c->r[28]; // 80170E88
  c->lr=0x80170E90u; f_8016FA84(c); // 80170E8C
L_80170E90:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80170E90
  cmps(c,0,(int32_t)c->r[4],6); // 80170E94
  if (!crb(c,0)) { goto L_80170EB4; } // 80170E98
  c->r[0]=R32(c->r[28]+0x00000010u); // 80170E9C
  c->r[3]=0u+0x00000000u; // 80170EA0
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 80170EA4
  c->r[0]=c->r[0]+c->r[4]; // 80170EA8
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170EAC
  goto L_80170ED4; // 80170EB0
L_80170EB4:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170EB4
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80170EB8
  c->r[5]=R32(c->r[28]+0x00000008u); // 80170EBC
  c->r[0]=c->r[3]+0x00000006u; // 80170EC0
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80170EC4
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170EC8
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170ECC
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80170ED0
L_80170ED4:;
  W32(c->r[23]+0x00000000u,c->r[3]); // 80170ED4
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170ED8
  cmps(c,0,(int32_t)c->r[0],6); // 80170EDC
  if (!crb(c,0)) { goto L_80170EEC; } // 80170EE0
  c->r[3]=c->r[28]|c->r[28]; // 80170EE4
  c->lr=0x80170EECu; f_8016FA84(c); // 80170EE8
L_80170EEC:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80170EEC
  cmps(c,0,(int32_t)c->r[4],6); // 80170EF0
  if (!crb(c,0)) { goto L_80170F10; } // 80170EF4
  c->r[0]=R32(c->r[28]+0x00000010u); // 80170EF8
  c->r[3]=0u+0x00000000u; // 80170EFC
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 80170F00
  c->r[0]=c->r[0]+c->r[4]; // 80170F04
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170F08
  goto L_80170F30; // 80170F0C
L_80170F10:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170F10
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80170F14
  c->r[5]=R32(c->r[28]+0x00000008u); // 80170F18
  c->r[0]=c->r[3]+0x00000006u; // 80170F1C
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80170F20
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170F24
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170F28
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80170F2C
L_80170F30:;
  W32(c->r[23]+0x00000080u,c->r[3]); // 80170F30
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170F34
  cmps(c,0,(int32_t)c->r[0],6); // 80170F38
  if (!crb(c,0)) { goto L_80170F48; } // 80170F3C
  c->r[3]=c->r[28]|c->r[28]; // 80170F40
  c->lr=0x80170F48u; f_8016FA84(c); // 80170F44
L_80170F48:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80170F48
  cmps(c,0,(int32_t)c->r[4],6); // 80170F4C
  if (!crb(c,0)) { goto L_80170F6C; } // 80170F50
  c->r[0]=R32(c->r[28]+0x00000010u); // 80170F54
  c->r[3]=0u+0x00000000u; // 80170F58
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 80170F5C
  c->r[0]=c->r[0]+c->r[4]; // 80170F60
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170F64
  goto L_80170F8C; // 80170F68
L_80170F6C:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170F6C
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80170F70
  c->r[5]=R32(c->r[28]+0x00000008u); // 80170F74
  c->r[0]=c->r[3]+0x00000006u; // 80170F78
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80170F7C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170F80
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170F84
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80170F88
L_80170F8C:;
  W32(c->r[23]+0x00000100u,c->r[3]); // 80170F8C
  goto L_80171188; // 80170F90
L_80170F94:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170F94
  cmps(c,0,(int32_t)c->r[0],6); // 80170F98
  if (!crb(c,0)) { goto L_80170FA8; } // 80170F9C
  c->r[3]=c->r[28]|c->r[28]; // 80170FA0
  c->lr=0x80170FA8u; f_8016FA84(c); // 80170FA4
L_80170FA8:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80170FA8
  cmps(c,0,(int32_t)c->r[4],6); // 80170FAC
  if (!crb(c,0)) { goto L_80170FCC; } // 80170FB0
  c->r[0]=R32(c->r[28]+0x00000010u); // 80170FB4
  c->r[3]=0u+0x00000000u; // 80170FB8
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 80170FBC
  c->r[0]=c->r[0]+c->r[4]; // 80170FC0
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170FC4
  goto L_80170FEC; // 80170FC8
L_80170FCC:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 80170FCC
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80170FD0
  c->r[5]=R32(c->r[28]+0x00000008u); // 80170FD4
  c->r[0]=c->r[3]+0x00000006u; // 80170FD8
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80170FDC
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80170FE0
  W32(c->r[28]+0x00000010u,c->r[0]); // 80170FE4
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80170FE8
L_80170FEC:;
  W32(c->r[23]+0x00000080u,c->r[3]); // 80170FEC
  W32(c->r[23]+0x00000000u,c->r[3]); // 80170FF0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80170FF4
  cmps(c,0,(int32_t)c->r[0],6); // 80170FF8
  if (!crb(c,0)) { goto L_80171008; } // 80170FFC
  c->r[3]=c->r[28]|c->r[28]; // 80171000
  c->lr=0x80171008u; f_8016FA84(c); // 80171004
L_80171008:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80171008
  cmps(c,0,(int32_t)c->r[4],6); // 8017100C
  if (!crb(c,0)) { goto L_8017102C; } // 80171010
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171014
  c->r[3]=0u+0x00000000u; // 80171018
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 8017101C
  c->r[0]=c->r[0]+c->r[4]; // 80171020
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171024
  goto L_8017104C; // 80171028
L_8017102C:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8017102C
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80171030
  c->r[5]=R32(c->r[28]+0x00000008u); // 80171034
  c->r[0]=c->r[3]+0x00000006u; // 80171038
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 8017103C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80171040
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171044
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80171048
L_8017104C:;
  W32(c->r[23]+0x00000100u,c->r[3]); // 8017104C
  goto L_80171188; // 80171050
L_80171054:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80171054
  cmps(c,0,(int32_t)c->r[0],6); // 80171058
  if (!crb(c,0)) { goto L_80171068; } // 8017105C
  c->r[3]=c->r[28]|c->r[28]; // 80171060
  c->lr=0x80171068u; f_8016FA84(c); // 80171064
L_80171068:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80171068
  cmps(c,0,(int32_t)c->r[4],6); // 8017106C
  if (!crb(c,0)) { goto L_8017108C; } // 80171070
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171074
  c->r[3]=0u+0x00000000u; // 80171078
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 8017107C
  c->r[0]=c->r[0]+c->r[4]; // 80171080
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171084
  goto L_801710AC; // 80171088
L_8017108C:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8017108C
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80171090
  c->r[5]=R32(c->r[28]+0x00000008u); // 80171094
  c->r[0]=c->r[3]+0x00000006u; // 80171098
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 8017109C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801710A0
  W32(c->r[28]+0x00000010u,c->r[0]); // 801710A4
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 801710A8
L_801710AC:;
  W32(c->r[23]+0x00000000u,c->r[3]); // 801710AC
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801710B0
  cmps(c,0,(int32_t)c->r[0],6); // 801710B4
  if (!crb(c,0)) { goto L_801710C4; } // 801710B8
  c->r[3]=c->r[28]|c->r[28]; // 801710BC
  c->lr=0x801710C4u; f_8016FA84(c); // 801710C0
L_801710C4:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 801710C4
  cmps(c,0,(int32_t)c->r[4],6); // 801710C8
  if (!crb(c,0)) { goto L_801710E8; } // 801710CC
  c->r[0]=R32(c->r[28]+0x00000010u); // 801710D0
  c->r[3]=0u+0x00000000u; // 801710D4
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 801710D8
  c->r[0]=c->r[0]+c->r[4]; // 801710DC
  W32(c->r[28]+0x00000010u,c->r[0]); // 801710E0
  goto L_80171108; // 801710E4
L_801710E8:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 801710E8
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 801710EC
  c->r[5]=R32(c->r[28]+0x00000008u); // 801710F0
  c->r[0]=c->r[3]+0x00000006u; // 801710F4
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 801710F8
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801710FC
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171100
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80171104
L_80171108:;
  W32(c->r[23]+0x00000100u,c->r[3]); // 80171108
  W32(c->r[23]+0x00000080u,c->r[3]); // 8017110C
  goto L_80171188; // 80171110
L_80171114:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80171114
  cmps(c,0,(int32_t)c->r[0],6); // 80171118
  if (!crb(c,0)) { goto L_80171128; } // 8017111C
  c->r[3]=c->r[28]|c->r[28]; // 80171120
  c->lr=0x80171128u; f_8016FA84(c); // 80171124
L_80171128:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80171128
  cmps(c,0,(int32_t)c->r[4],6); // 8017112C
  if (!crb(c,0)) { goto L_8017114C; } // 80171130
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171134
  c->r[3]=0u+0x00000000u; // 80171138
  W32(c->r[28]+0x0000000Cu,c->r[27]); // 8017113C
  c->r[0]=c->r[0]+c->r[4]; // 80171140
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171144
  goto L_8017116C; // 80171148
L_8017114C:;
  c->r[3]=R32(c->r[28]+0x00000010u); // 8017114C
  c->r[4]=c->r[4]+0xFFFFFFFAu; // 80171150
  c->r[5]=R32(c->r[28]+0x00000008u); // 80171154
  c->r[0]=c->r[3]+0x00000006u; // 80171158
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 8017115C
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80171160
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171164
  c->r[3]=rotl(c->r[5],0)&0x0000003Fu; // 80171168
L_8017116C:;
  W32(c->r[23]+0x00000100u,c->r[3]); // 8017116C
  W32(c->r[23]+0x00000080u,c->r[3]); // 80171170
  W32(c->r[23]+0x00000000u,c->r[3]); // 80171174
  goto L_80171188; // 80171178
L_8017117C:;
  W32(c->r[23]+0x00000100u,c->r[17]); // 8017117C
  W32(c->r[23]+0x00000080u,c->r[17]); // 80171180
  W32(c->r[23]+0x00000000u,c->r[17]); // 80171184
L_80171188:;
  c->r[25]=c->r[25]+0x00000080u; // 80171188
  c->r[24]=c->r[24]+0x00000080u; // 8017118C
  c->r[23]=c->r[23]+0x00000180u; // 80171190
  c->r[20]=c->r[20]+0x00000001u; // 80171194
L_80171198:;
  cmps(c,0,(int32_t)c->r[20],(int32_t)c->r[18]); // 80171198
  if (crb(c,0)) { IRQCHK(c); goto L_80170E48; } // 8017119C
  c->r[26]=c->r[26]+0x00000004u; // 801711A0
  c->r[21]=c->r[21]+0x00000001u; // 801711A4
L_801711A8:;
  cmps(c,0,(int32_t)c->r[21],(int32_t)c->r[19]); // 801711A8
  if (crb(c,0)) { IRQCHK(c); goto L_80170E34; } // 801711AC
  c->r[3]=0u+0x0000003Fu; // 801711B0
  c->r[6]=0u+0x80000000u; // 801711B4
  goto L_801712B4; // 801711B8
L_801711BC:;
  cmps(c,1,(int32_t)c->r[18],0); // 801711BC
  c->r[7]=0u+0x00000000u; // 801711C0
  if (!crb(c,5)) { goto L_801712AC; } // 801711C4
  cmps(c,0,(int32_t)c->r[18],8); // 801711C8
  c->r[4]=c->r[18]+0xFFFFFFF8u; // 801711CC
  if (!crb(c,1)) { goto L_80171278; } // 801711D0
  c->r[5]=0u+0x00000000u; // 801711D4
  if (crb(c,4)) { goto L_801711EC; } // 801711D8
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 801711DC
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[0]); // 801711E0
  if (crb(c,1)) { goto L_801711EC; } // 801711E4
  c->r[5]=0u+0x00000001u; // 801711E8
L_801711EC:;
  cmps(c,0,(int32_t)c->r[5],0); // 801711EC
  if (crb(c,2)) { goto L_80171278; } // 801711F0
  c->r[0]=c->r[4]+0x00000007u; // 801711F4
  c->r[5]=c->r[31]+c->r[22]; // 801711F8
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 801711FC
  c->ctr=c->r[0]; // 80171200
  cmps(c,0,(int32_t)c->r[4],0); // 80171204
  if (!crb(c,1)) { goto L_80171278; } // 80171208
L_8017120C:;
  W32(c->r[5]+0x00000100u,c->r[3]); // 8017120C
  c->r[7]=c->r[7]+0x00000008u; // 80171210
  W32(c->r[5]+0x00000080u,c->r[3]); // 80171214
  W32(c->r[5]+0x00000000u,c->r[3]); // 80171218
  W32(c->r[5]+0x00000280u,c->r[3]); // 8017121C
  W32(c->r[5]+0x00000200u,c->r[3]); // 80171220
  W32(c->r[5]+0x00000180u,c->r[3]); // 80171224
  W32(c->r[5]+0x00000400u,c->r[3]); // 80171228
  W32(c->r[5]+0x00000380u,c->r[3]); // 8017122C
  W32(c->r[5]+0x00000300u,c->r[3]); // 80171230
  W32(c->r[5]+0x00000580u,c->r[3]); // 80171234
  W32(c->r[5]+0x00000500u,c->r[3]); // 80171238
  W32(c->r[5]+0x00000480u,c->r[3]); // 8017123C
  W32(c->r[5]+0x00000700u,c->r[3]); // 80171240
  W32(c->r[5]+0x00000680u,c->r[3]); // 80171244
  W32(c->r[5]+0x00000600u,c->r[3]); // 80171248
  W32(c->r[5]+0x00000880u,c->r[3]); // 8017124C
  W32(c->r[5]+0x00000800u,c->r[3]); // 80171250
  W32(c->r[5]+0x00000780u,c->r[3]); // 80171254
  W32(c->r[5]+0x00000A00u,c->r[3]); // 80171258
  W32(c->r[5]+0x00000980u,c->r[3]); // 8017125C
  W32(c->r[5]+0x00000900u,c->r[3]); // 80171260
  W32(c->r[5]+0x00000B80u,c->r[3]); // 80171264
  W32(c->r[5]+0x00000B00u,c->r[3]); // 80171268
  W32(c->r[5]+0x00000A80u,c->r[3]); // 8017126C
  c->r[5]=c->r[5]+0x00000C00u; // 80171270
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017120C; } // 80171274
L_80171278:;
  c->r[5]=(uint32_t)((int32_t)c->r[7]*(int32_t)384); // 80171278
  c->r[4]=c->r[31]+c->r[22]; // 8017127C
  c->r[0]=c->r[18]-c->r[7]; // 80171280
  c->r[4]=c->r[5]+c->r[4]; // 80171284
  c->ctr=c->r[0]; // 80171288
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[18]); // 8017128C
  if (!crb(c,0)) { goto L_801712AC; } // 80171290
L_80171294:;
  W32(c->r[4]+0x00000100u,c->r[3]); // 80171294
  c->r[7]=c->r[7]+0x00000001u; // 80171298
  W32(c->r[4]+0x00000080u,c->r[3]); // 8017129C
  W32(c->r[4]+0x00000000u,c->r[3]); // 801712A0
  c->r[4]=c->r[4]+0x00000180u; // 801712A4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80171294; } // 801712A8
L_801712AC:;
  c->r[22]=c->r[22]+0x00000004u; // 801712AC
  c->r[19]=c->r[19]+0x00000001u; // 801712B0
L_801712B4:;
  cmps(c,0,(int32_t)c->r[19],32); // 801712B4
  if (crb(c,0)) { IRQCHK(c); goto L_801711BC; } // 801712B8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=17;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801712BC
  c->r[0]=R32(c->r[1]+0x00000054u); // 801712C0
  c->lr=c->r[0]; // 801712C4
  c->r[1]=c->r[1]+0x00000050u; // 801712C8
  return; // 801712CC
}

// AHXDCD_GetSample_Dequantize_Denormalize__11CriAcAhxsjdFPQ211CriAcAhxsjd11_AHXBSR_objPQ211CriAcAhxsjd8AHX_DINFPA32_UlPA3_A32_UllPA3_A32_fPf
void f_801712D0(Ctx* __restrict c) {
  trace_call(0x801712D0u);
  {uint32_t ea=c->r[1]+0xFFFFFF50u; W32(ea,c->r[1]); c->r[1]=ea;} // 801712D0
  c->r[0]=c->lr; // 801712D4
  W32(c->r[1]+0x000000B4u,c->r[0]); // 801712D8
  c->r[11]=c->r[1]+0x00000070u; // 801712DC
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[31]);} // 801712E0
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,31,ea,0,0);} // 801712E4
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[30]);} // 801712E8
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,30,ea,0,0);} // 801712EC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[29]);} // 801712F0
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,29,ea,0,0);} // 801712F4
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[28]);} // 801712F8
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,28,ea,0,0);} // 801712FC
  c->lr=0x80171304u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80171300
  c->r[0]=0u+0x43300000u; // 80171304
  c->r[7]=rotl(c->r[7],7)&0xFFFFFF80u; // 80171308
  c->r[26]=0u+0x802D0000u; // 8017130C
  c->r[27]=0u+0x80330000u; // 80171310
  W32(c->r[1]+0x00000010u,c->r[0]); // 80171314
  c->r[28]=c->r[3]|c->r[3]; // 80171318
  c->r[31]=R32(c->r[4]+0x00000004u); // 8017131C
  c->r[29]=c->r[9]|c->r[9]; // 80171320
  W32(c->r[1]+0x00000018u,c->r[0]); // 80171324
  c->r[26]=c->r[26]+0x000005A8u; // 80171328
  c->r[0]=R32(c->r[4]+0x00000010u); // 8017132C
  c->r[27]=c->r[27]+0x00001928u; // 80171330
  W32(c->r[1]+0x00000020u,c->r[0]); // 80171334
  c->r[0]=c->r[6]+c->r[7]; // 80171338
  c->r[30]=R32(c->r[4]+0x00000014u); // 8017133C
  c->r[17]=0u+0x00000000u; // 80171340
  W32(c->r[1]+0x00000008u,c->r[5]); // 80171344
  c->r[24]=0u+0x00000000u; // 80171348
  c->r[23]=R32(c->r[4]+0x00000018u); // 8017134C
  c->r[25]=0u+0x00000000u; // 80171350
  W32(c->r[1]+0x0000000Cu,c->r[8]); // 80171354
  c->r[14]=0u+0x55550000u; // 80171358
  {uint32_t ea=c->r[2]+0xFFFFB488u; c->f[31]=RF64(ea);} // 8017135C
  {uint32_t ea=c->r[2]+0xFFFFB480u; c->f[28]=c->ps1[28]=RF32(ea);} // 80171360
  W32(c->r[1]+0x00000024u,c->r[0]); // 80171364
  goto L_80171968; // 80171368
L_8017136C:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8017136C
  c->r[16]=0u+0x00000000u; // 80171370
  c->r[19]=c->r[0]+c->r[24]; // 80171374
  c->r[0]=R32(c->r[1]+0x00000008u); // 80171378
  c->r[20]=c->r[19]|c->r[19]; // 8017137C
  c->r[22]=c->r[0]+c->r[24]; // 80171380
  c->r[0]=R32(c->r[1]+0x00000024u); // 80171384
  c->r[21]=c->r[0]+c->r[24]; // 80171388
  goto L_80171944; // 8017138C
L_80171390:;
  c->r[0]=R32(c->r[22]+0x00000000u); // 80171390
  cmps(c,0,(int32_t)c->r[0],0); // 80171394
  if (crb(c,2)) { goto L_80171900; } // 80171398
  c->r[3]=(uint32_t)((int32_t)c->r[0]*(int32_t)24); // 8017139C
  c->r[0]=R32(c->r[21]+0x00000000u); // 801713A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801713A4
  c->r[3]=c->r[23]+c->r[3]; // 801713A8
  {uint32_t ea=c->r[29]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 801713AC
  {uint32_t ea=c->r[3]+0x00000014u; c->f[1]=c->ps1[1]=RF32(ea);} // 801713B0
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 801713B4
  c->r[0]=R32(c->r[3]+0x00000008u); // 801713B8
  c->f[29]=c->ps1[29]=S(c->f[1]*c->f[2]); // 801713BC
  c->f[30]=c->ps1[30]=S(c->f[0]*c->f[2]); // 801713C0
  cmps(c,0,(int32_t)c->r[0],3); // 801713C4
  if (!crb(c,2)) { goto L_8017161C; } // 801713C8
  c->r[15]=R32(c->r[3]+0x00000004u); // 801713CC
  cmps(c,0,(int32_t)c->r[15],8); // 801713D0
  if (crb(c,1)) { goto L_801714B0; } // 801713D4
  c->r[3]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801713D8
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801713DC
  c->r[18]=c->r[3]-c->r[15]; // 801713E0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[18]); // 801713E4
  if (!crb(c,0)) { goto L_801713F4; } // 801713E8
  c->r[3]=c->r[28]|c->r[28]; // 801713EC
  c->lr=0x801713F4u; f_8016FA84(c); // 801713F0
L_801713F4:;
  c->r[7]=R32(c->r[28]+0x0000000Cu); // 801713F4
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[7]); // 801713F8
  if (!crb(c,1)) { goto L_80171418; } // 801713FC
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171400
  c->r[3]=0u+0x00000000u; // 80171404
  W32(c->r[28]+0x0000000Cu,c->r[25]); // 80171408
  c->r[0]=c->r[0]+c->r[7]; // 8017140C
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171410
  goto L_8017144C; // 80171414
L_80171418:;
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 80171418
  c->r[4]=rotl(c->r[18],2)&0xFFFFFFFCu; // 8017141C
  c->r[3]=c->r[15]-c->r[0]; // 80171420
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171424
  c->r[5]=c->r[3]+c->r[7]; // 80171428
  c->r[6]=R32(c->r[28]+0x00000008u); // 8017142C
  c->r[3]=c->r[7]-c->r[18]; // 80171430
  c->r[0]=c->r[0]+c->r[18]; // 80171434
  c->r[4]=R32(c->r[26]+c->r[4]); // 80171438
  c->r[6]=sraw(c,c->r[6],(c->r[5])&63); // 8017143C
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 80171440
  c->r[3]=c->r[6]&c->r[4]; // 80171444
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171448
L_8017144C:;
  c->r[0]=rotl(c->r[15],2)&0xFFFFFFFCu; // 8017144C
  c->r[4]=sraw(c,c->r[3],(c->r[15])&63); // 80171450
  c->r[0]=R32(c->r[27]+c->r[0]); // 80171454
  c->r[3]=c->r[3]&c->r[0]; // 80171458
  c->r[0]=c->r[4]&c->r[0]; // 8017145C
  c->r[3]=c->r[3]^0x80000000u; // 80171460
  W32(c->r[1]+0x00000014u,c->r[3]); // 80171464
  c->r[0]=c->r[0]^0x80000000u; // 80171468
  c->r[4]=sraw(c,c->r[4],(c->r[15])&63); // 8017146C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80171470
  c->r[0]=c->r[4]^0x80000000u; // 80171474
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 80171478
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8017147C
  c->f[2]=c->ps1[2]=S(c->f[1]-c->f[31]); // 80171480
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171484
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 80171488
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8017148C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[30],c->f[2],c->f[29])); // 80171490
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80171494
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[2]);} // 80171498
  c->f[1]=c->ps1[1]=S(std::fma(c->f[30],c->f[1],c->f[29])); // 8017149C
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[1]);} // 801714A0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 801714A4
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[0]);} // 801714A8
  goto L_8017190C; // 801714AC
L_801714B0:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801714B0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[15]); // 801714B4
  if (!crb(c,0)) { goto L_801714C4; } // 801714B8
  c->r[3]=c->r[28]|c->r[28]; // 801714BC
  c->lr=0x801714C4u; f_8016FA84(c); // 801714C0
L_801714C4:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 801714C4
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[4]); // 801714C8
  if (!crb(c,1)) { goto L_801714E8; } // 801714CC
  c->r[0]=R32(c->r[28]+0x00000010u); // 801714D0
  c->r[3]=0u+0x00000000u; // 801714D4
  W32(c->r[28]+0x0000000Cu,c->r[25]); // 801714D8
  c->r[0]=c->r[0]+c->r[4]; // 801714DC
  W32(c->r[28]+0x00000010u,c->r[0]); // 801714E0
  goto L_80171510; // 801714E4
L_801714E8:;
  c->r[3]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801714E8
  c->r[0]=R32(c->r[28]+0x00000010u); // 801714EC
  c->r[4]=c->r[4]-c->r[15]; // 801714F0
  c->r[5]=R32(c->r[28]+0x00000008u); // 801714F4
  c->r[0]=c->r[0]+c->r[15]; // 801714F8
  c->r[3]=R32(c->r[26]+c->r[3]); // 801714FC
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80171500
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80171504
  c->r[3]=c->r[5]&c->r[3]; // 80171508
  W32(c->r[28]+0x00000010u,c->r[0]); // 8017150C
L_80171510:;
  c->r[0]=c->r[3]^0x80000000u; // 80171510
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80171514
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80171518
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8017151C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 80171520
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[0]);} // 80171524
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80171528
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[15]); // 8017152C
  if (!crb(c,0)) { goto L_8017153C; } // 80171530
  c->r[3]=c->r[28]|c->r[28]; // 80171534
  c->lr=0x8017153Cu; f_8016FA84(c); // 80171538
L_8017153C:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 8017153C
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[4]); // 80171540
  if (!crb(c,1)) { goto L_80171560; } // 80171544
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171548
  c->r[3]=0u+0x00000000u; // 8017154C
  W32(c->r[28]+0x0000000Cu,c->r[25]); // 80171550
  c->r[0]=c->r[0]+c->r[4]; // 80171554
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171558
  goto L_80171588; // 8017155C
L_80171560:;
  c->r[3]=rotl(c->r[15],2)&0xFFFFFFFCu; // 80171560
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171564
  c->r[4]=c->r[4]-c->r[15]; // 80171568
  c->r[5]=R32(c->r[28]+0x00000008u); // 8017156C
  c->r[0]=c->r[0]+c->r[15]; // 80171570
  c->r[3]=R32(c->r[26]+c->r[3]); // 80171574
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80171578
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 8017157C
  c->r[3]=c->r[5]&c->r[3]; // 80171580
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171584
L_80171588:;
  c->r[0]=c->r[3]^0x80000000u; // 80171588
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017158C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80171590
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80171594
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 80171598
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[0]);} // 8017159C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 801715A0
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[15]); // 801715A4
  if (!crb(c,0)) { goto L_801715B4; } // 801715A8
  c->r[3]=c->r[28]|c->r[28]; // 801715AC
  c->lr=0x801715B4u; f_8016FA84(c); // 801715B0
L_801715B4:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 801715B4
  cmps(c,0,(int32_t)c->r[15],(int32_t)c->r[4]); // 801715B8
  if (!crb(c,1)) { goto L_801715D8; } // 801715BC
  c->r[0]=R32(c->r[28]+0x00000010u); // 801715C0
  c->r[3]=0u+0x00000000u; // 801715C4
  W32(c->r[28]+0x0000000Cu,c->r[25]); // 801715C8
  c->r[0]=c->r[0]+c->r[4]; // 801715CC
  W32(c->r[28]+0x00000010u,c->r[0]); // 801715D0
  goto L_80171600; // 801715D4
L_801715D8:;
  c->r[3]=rotl(c->r[15],2)&0xFFFFFFFCu; // 801715D8
  c->r[0]=R32(c->r[28]+0x00000010u); // 801715DC
  c->r[4]=c->r[4]-c->r[15]; // 801715E0
  c->r[5]=R32(c->r[28]+0x00000008u); // 801715E4
  c->r[0]=c->r[0]+c->r[15]; // 801715E8
  c->r[3]=R32(c->r[26]+c->r[3]); // 801715EC
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 801715F0
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 801715F4
  c->r[3]=c->r[5]&c->r[3]; // 801715F8
  W32(c->r[28]+0x00000010u,c->r[0]); // 801715FC
L_80171600:;
  c->r[0]=c->r[3]^0x80000000u; // 80171600
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 80171604
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 80171608
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8017160C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 80171610
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[0]);} // 80171614
  goto L_8017190C; // 80171618
L_8017161C:;
  c->r[18]=R32(c->r[3]+0x00000004u); // 8017161C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80171620
  c->r[15]=R32(c->r[3]+0x00000000u); // 80171624
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[18]); // 80171628
  if (!crb(c,0)) { goto L_80171638; } // 8017162C
  c->r[3]=c->r[28]|c->r[28]; // 80171630
  c->lr=0x80171638u; f_8016FA84(c); // 80171634
L_80171638:;
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80171638
  cmps(c,0,(int32_t)c->r[18],(int32_t)c->r[4]); // 8017163C
  if (!crb(c,1)) { goto L_8017165C; } // 80171640
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171644
  c->r[3]=0u+0x00000000u; // 80171648
  W32(c->r[28]+0x0000000Cu,c->r[25]); // 8017164C
  c->r[0]=c->r[0]+c->r[4]; // 80171650
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171654
  goto L_80171684; // 80171658
L_8017165C:;
  c->r[3]=rotl(c->r[18],2)&0xFFFFFFFCu; // 8017165C
  c->r[0]=R32(c->r[28]+0x00000010u); // 80171660
  c->r[4]=c->r[4]-c->r[18]; // 80171664
  c->r[5]=R32(c->r[28]+0x00000008u); // 80171668
  c->r[0]=c->r[0]+c->r[18]; // 8017166C
  c->r[3]=R32(c->r[26]+c->r[3]); // 80171670
  c->r[5]=sraw(c,c->r[5],(c->r[4])&63); // 80171674
  W32(c->r[28]+0x0000000Cu,c->r[4]); // 80171678
  c->r[3]=c->r[5]&c->r[3]; // 8017167C
  W32(c->r[28]+0x00000010u,c->r[0]); // 80171680
L_80171684:;
  cmps(c,0,(int32_t)c->r[15],3); // 80171684
  if (!crb(c,2)) { goto L_80171718; } // 80171688
  c->r[5]=c->r[14]+0x00005556u; // 8017168C
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[3])>>32); // 80171690
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 80171694
  c->r[8]=c->r[4]+c->r[0]; // 80171698
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[8])>>32); // 8017169C
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801716A0
  c->r[6]=c->r[4]+c->r[0]; // 801716A4
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[5]*(int64_t)(int32_t)c->r[6])>>32); // 801716A8
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)3); // 801716AC
  c->r[0]=rotl(c->r[4],1)&0x00000001u; // 801716B0
  c->r[0]=c->r[4]+c->r[0]; // 801716B4
  c->r[3]=c->r[3]-c->r[7]; // 801716B8
  c->r[3]=c->r[3]^0x80000000u; // 801716BC
  W32(c->r[1]+0x00000014u,c->r[3]); // 801716C0
  c->r[5]=(uint32_t)((int32_t)c->r[6]*(int32_t)3); // 801716C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801716C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)3); // 801716CC
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801716D0
  c->r[3]=c->r[8]-c->r[5]; // 801716D4
  c->r[3]=c->r[3]^0x80000000u; // 801716D8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801716DC
  c->r[0]=c->r[6]-c->r[0]; // 801716E0
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[30],c->f[29])); // 801716E4
  c->r[0]=c->r[0]^0x80000000u; // 801716E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801716EC
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 801716F0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801716F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801716F8
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[2]);} // 801716FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80171700
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[30],c->f[29])); // 80171704
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 80171708
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[1]);} // 8017170C
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[0]);} // 80171710
  goto L_8017190C; // 80171714
L_80171718:;
  cmps(c,0,(int32_t)c->r[15],5); // 80171718
  if (!crb(c,2)) { goto L_801717D4; } // 8017171C
  c->r[4]=0u+0x66660000u; // 80171720
  c->r[0]=c->r[4]+0x00006667u; // 80171724
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 80171728
  c->r[6]=sraw(c,c->r[4],1); // 8017172C
  c->r[4]=sraw(c,c->r[4],1); // 80171730
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 80171734
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 80171738
  c->r[4]=c->r[4]+c->r[5]; // 8017173C
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 80171740
  c->r[9]=c->r[6]+c->r[7]; // 80171744
  c->r[7]=sraw(c,c->r[5],1); // 80171748
  c->r[5]=sraw(c,c->r[5],1); // 8017174C
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 80171750
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 80171754
  c->r[6]=c->r[5]+c->r[6]; // 80171758
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 8017175C
  c->r[5]=c->r[7]+c->r[8]; // 80171760
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)5); // 80171764
  c->r[0]=sraw(c,c->r[0],1); // 80171768
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)5); // 8017176C
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80171770
  c->r[3]=c->r[3]-c->r[8]; // 80171774
  c->r[0]=c->r[0]+c->r[5]; // 80171778
  c->r[3]=c->r[3]^0x80000000u; // 8017177C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80171780
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)5); // 80171784
  c->r[3]=c->r[4]-c->r[7]; // 80171788
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 8017178C
  c->r[3]=c->r[3]^0x80000000u; // 80171790
  W32(c->r[1]+0x00000014u,c->r[3]); // 80171794
  c->r[0]=c->r[6]-c->r[0]; // 80171798
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 8017179C
  c->r[0]=c->r[0]^0x80000000u; // 801717A0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801717A4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 801717A8
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801717AC
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[30],c->f[29])); // 801717B0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801717B4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801717B8
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[2]);} // 801717BC
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[30],c->f[29])); // 801717C0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 801717C4
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[1]);} // 801717C8
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[0]);} // 801717CC
  goto L_8017190C; // 801717D0
L_801717D4:;
  cmps(c,0,(int32_t)c->r[15],9); // 801717D4
  if (!crb(c,2)) { goto L_80171890; } // 801717D8
  c->r[4]=0u+0x38E40000u; // 801717DC
  c->r[0]=c->r[4]+0xFFFF8E39u; // 801717E0
  c->r[4]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[3])>>32); // 801717E4
  c->r[6]=sraw(c,c->r[4],1); // 801717E8
  c->r[4]=sraw(c,c->r[4],1); // 801717EC
  c->r[5]=rotl(c->r[4],1)&0x00000001u; // 801717F0
  c->r[7]=rotl(c->r[6],1)&0x00000001u; // 801717F4
  c->r[4]=c->r[4]+c->r[5]; // 801717F8
  c->r[5]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[4])>>32); // 801717FC
  c->r[9]=c->r[6]+c->r[7]; // 80171800
  c->r[7]=sraw(c,c->r[5],1); // 80171804
  c->r[5]=sraw(c,c->r[5],1); // 80171808
  c->r[6]=rotl(c->r[5],1)&0x00000001u; // 8017180C
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 80171810
  c->r[6]=c->r[5]+c->r[6]; // 80171814
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[0]*(int64_t)(int32_t)c->r[6])>>32); // 80171818
  c->r[5]=c->r[7]+c->r[8]; // 8017181C
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)9); // 80171820
  c->r[0]=sraw(c,c->r[0],1); // 80171824
  c->r[7]=(uint32_t)((int32_t)c->r[5]*(int32_t)9); // 80171828
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 8017182C
  c->r[3]=c->r[3]-c->r[8]; // 80171830
  c->r[0]=c->r[0]+c->r[5]; // 80171834
  c->r[3]=c->r[3]^0x80000000u; // 80171838
  W32(c->r[1]+0x00000014u,c->r[3]); // 8017183C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)9); // 80171840
  c->r[3]=c->r[4]-c->r[7]; // 80171844
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80171848
  c->r[3]=c->r[3]^0x80000000u; // 8017184C
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 80171850
  c->r[0]=c->r[6]-c->r[0]; // 80171854
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 80171858
  c->r[0]=c->r[0]^0x80000000u; // 8017185C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80171860
  {uint32_t ea=c->r[1]+0x00000018u; c->f[1]=RF64(ea);} // 80171864
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80171868
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[30],c->f[29])); // 8017186C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 80171870
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80171874
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[2]);} // 80171878
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[30],c->f[29])); // 8017187C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 80171880
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[1]);} // 80171884
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[0]);} // 80171888
  goto L_8017190C; // 8017188C
L_80171890:;
  c->r[7]=divw((int32_t)c->r[3],(int32_t)c->r[15]); // 80171890
  c->r[5]=divw((int32_t)c->r[7],(int32_t)c->r[15]); // 80171894
  c->r[0]=divw((int32_t)c->r[5],(int32_t)c->r[15]); // 80171898
  c->r[6]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[15]); // 8017189C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)c->r[15]); // 801718A0
  c->r[3]=c->r[3]-c->r[6]; // 801718A4
  c->r[3]=c->r[3]^0x80000000u; // 801718A8
  W32(c->r[1]+0x0000001Cu,c->r[3]); // 801718AC
  c->r[4]=(uint32_t)((int32_t)c->r[5]*(int32_t)c->r[15]); // 801718B0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801718B4
  c->r[0]=c->r[5]-c->r[0]; // 801718B8
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[31]); // 801718BC
  c->r[0]=c->r[0]^0x80000000u; // 801718C0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801718C4
  c->r[3]=c->r[7]-c->r[4]; // 801718C8
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[30],c->f[29])); // 801718CC
  c->r[3]=c->r[3]^0x80000000u; // 801718D0
  W32(c->r[1]+0x00000014u,c->r[3]); // 801718D4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801718D8
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[2]);} // 801718DC
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801718E0
  {uint32_t ea=c->r[1]+0x00000018u; c->f[0]=RF64(ea);} // 801718E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801718E8
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[30],c->f[29])); // 801718EC
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[1]);} // 801718F0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[0],c->f[30],c->f[29])); // 801718F4
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[0]);} // 801718F8
  goto L_8017190C; // 801718FC
L_80171900:;
  {uint32_t ea=c->r[20]+0x00000000u; WF32(ea,c->f[28]);} // 80171900
  {uint32_t ea=c->r[20]+0x00000080u; WF32(ea,c->f[28]);} // 80171904
  {uint32_t ea=c->r[20]+0x00000100u; WF32(ea,c->f[28]);} // 80171908
L_8017190C:;
  cmps(c,0,(int32_t)c->r[31],2); // 8017190C
  if (!crb(c,2)) { goto L_80171934; } // 80171910
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[30]); // 80171914
  if (crb(c,0)) { goto L_80171934; } // 80171918
  {uint32_t ea=c->r[19]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017191C
  {uint32_t ea=c->r[19]+0x00000180u; WF32(ea,c->f[0]);} // 80171920
  {uint32_t ea=c->r[19]+0x00000080u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171924
  {uint32_t ea=c->r[19]+0x00000200u; WF32(ea,c->f[0]);} // 80171928
  {uint32_t ea=c->r[19]+0x00000100u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017192C
  {uint32_t ea=c->r[19]+0x00000280u; WF32(ea,c->f[0]);} // 80171930
L_80171934:;
  c->r[22]=c->r[22]+0x00000080u; // 80171934
  c->r[21]=c->r[21]+0x00000180u; // 80171938
  c->r[20]=c->r[20]+0x00000180u; // 8017193C
  c->r[16]=c->r[16]+0x00000001u; // 80171940
L_80171944:;
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[30]); // 80171944
  c->r[0]=0u+0x00000001u; // 80171948
  if (!crb(c,0)) { goto L_80171954; } // 8017194C
  c->r[0]=c->r[31]|c->r[31]; // 80171950
L_80171954:;
  cmps(c,0,(int32_t)c->r[16],(int32_t)c->r[0]); // 80171954
  if (crb(c,0)) { IRQCHK(c); goto L_80171390; } // 80171958
  c->r[24]=c->r[24]+0x00000004u; // 8017195C
  c->r[23]=c->r[23]+0x00000180u; // 80171960
  c->r[17]=c->r[17]+0x00000001u; // 80171964
L_80171968:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 80171968
  cmps(c,0,(int32_t)c->r[17],(int32_t)c->r[0]); // 8017196C
  if (crb(c,0)) { IRQCHK(c); goto L_8017136C; } // 80171970
  {uint32_t ea=c->r[2]+0xFFFFB480u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171974
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80171978
  goto L_801719B8; // 8017197C
L_80171980:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80171980
  c->r[3]=c->r[0]+c->r[4]; // 80171984
  c->ctr=c->r[31]; // 80171988
  cmps(c,0,(int32_t)c->r[31],0); // 8017198C
  if (!crb(c,1)) { goto L_801719A8; } // 80171990
L_80171994:;
  {uint32_t ea=c->r[3]+0x00000000u; WF32(ea,c->f[0]);} // 80171994
  {uint32_t ea=c->r[3]+0x00000080u; WF32(ea,c->f[0]);} // 80171998
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 8017199C
  c->r[3]=c->r[3]+0x00000180u; // 801719A0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80171994; } // 801719A4
L_801719A8:;
  c->r[3]=R32(c->r[1]+0x00000020u); // 801719A8
  c->r[4]=c->r[4]+0x00000004u; // 801719AC
  c->r[3]=c->r[3]+0x00000001u; // 801719B0
  W32(c->r[1]+0x00000020u,c->r[3]); // 801719B4
L_801719B8:;
  c->r[0]=R32(c->r[1]+0x00000020u); // 801719B8
  cmps(c,0,(int32_t)c->r[0],32); // 801719BC
  if (crb(c,0)) { IRQCHK(c); goto L_80171980; } // 801719C0
  c->r[11]=c->r[1]+0x00000070u; // 801719C4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,31,ea,0,0);} // 801719C8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[31]=RF64(ea);} // 801719CC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,30,ea,0,0);} // 801719D0
  {uint32_t ea=c->r[1]+0x00000090u; c->f[30]=RF64(ea);} // 801719D4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,29,ea,0,0);} // 801719D8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[29]=RF64(ea);} // 801719DC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,28,ea,0,0);} // 801719E0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[28]=RF64(ea);} // 801719E4
  c->lr=0x801719ECu; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801719E8
  c->r[0]=R32(c->r[1]+0x000000B4u); // 801719EC
  c->lr=c->r[0]; // 801719F0
  c->r[1]=c->r[1]+0x000000B0u; // 801719F4
  return; // 801719F8
}

// ahxsbf_mult_flt_ex__11CriAcAhxsjdFPfPfPf
void f_801719FC(Ctx* __restrict c) {
  trace_call(0x801719FCu);
  {uint32_t ea=c->r[1]+0xFFFFFF70u; W32(ea,c->r[1]); c->r[1]=ea;} // 801719FC
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[31]);} // 80171A00
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,31,ea,0,0);} // 80171A04
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[30]);} // 80171A08
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,30,ea,0,0);} // 80171A0C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[29]);} // 80171A10
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,29,ea,0,0);} // 80171A14
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[28]);} // 80171A18
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,28,ea,0,0);} // 80171A1C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[27]);} // 80171A20
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,27,ea,0,0);} // 80171A24
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[26]);} // 80171A28
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,26,ea,0,0);} // 80171A2C
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[25]);} // 80171A30
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,25,ea,0,0);} // 80171A34
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[24]);} // 80171A38
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,24,ea,0,0);} // 80171A3C
  c->r[7]=c->r[5]|c->r[5]; // 80171A40
  c->r[6]=c->r[4]|c->r[4]; // 80171A44
  c->r[8]=c->r[5]+0x00000080u; // 80171A48
  c->r[9]=c->r[5]+0x00000084u; // 80171A4C
  c->r[10]=c->r[5]+0x000000FCu; // 80171A50
  c->r[0]=0u+0x00000010u; // 80171A54
L_80171A58:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171A58
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171A5C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171A60
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80171A64
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171A68
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171A6C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171A70
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171A74
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80171A78
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171A7C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171A80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 80171A84
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171A88
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171A8C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171A90
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171A94
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171A98
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171A9C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80171AA0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[1],c->f[0])); // 80171AA4
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171AA8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 80171AAC
  {uint32_t ea=c->r[4]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 80171AB0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[4],c->f[0])); // 80171AB4
  {uint32_t ea=c->r[3]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171AB8
  {uint32_t ea=c->r[4]+0x00000024u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171ABC
  {uint32_t ea=c->r[3]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171AC0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171AC4
  {uint32_t ea=c->r[4]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171AC8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80171ACC
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171AD0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[1],c->f[0])); // 80171AD4
  {uint32_t ea=c->r[3]+0x00000030u; c->f[26]=c->ps1[26]=RF32(ea);} // 80171AD8
  {uint32_t ea=c->r[4]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171ADC
  {uint32_t ea=c->r[3]+0x00000034u; c->f[25]=c->ps1[25]=RF32(ea);} // 80171AE0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[9],c->f[8],c->f[0])); // 80171AE4
  {uint32_t ea=c->r[4]+0x00000034u; c->f[13]=c->ps1[13]=RF32(ea);} // 80171AE8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[12]=c->ps1[12]=RF32(ea);} // 80171AEC
  {uint32_t ea=c->r[4]+0x00000038u; c->f[11]=c->ps1[11]=RF32(ea);} // 80171AF0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[7],c->f[6],c->f[0])); // 80171AF4
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80171AF8
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80171AFC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[8]=c->ps1[8]=RF32(ea);} // 80171B00
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[4],c->f[0])); // 80171B04
  {uint32_t ea=c->r[4]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171B08
  {uint32_t ea=c->r[3]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171B0C
  {uint32_t ea=c->r[4]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171B10
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171B14
  {uint32_t ea=c->r[3]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171B18
  {uint32_t ea=c->r[4]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171B1C
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171B20
  c->f[0]=c->ps1[0]=S(std::fma(c->f[26],c->f[1],c->f[0])); // 80171B24
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171B28
  c->f[0]=c->ps1[0]=S(std::fma(c->f[25],c->f[13],c->f[0])); // 80171B2C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[12],c->f[11],c->f[0])); // 80171B30
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[9],c->f[0])); // 80171B34
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[7],c->f[0])); // 80171B38
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[5],c->f[0])); // 80171B3C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171B40
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171B44
  {uint32_t ea=c->r[3]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171B48
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80171B4C
  {uint32_t ea=c->r[4]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171B50
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171B54
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[1],c->f[0])); // 80171B58
  {uint32_t ea=c->r[4]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171B5C
  {uint32_t ea=c->r[3]+0x00000058u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171B60
  {uint32_t ea=c->r[4]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171B64
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171B68
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171B6C
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171B70
  {uint32_t ea=c->r[3]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171B74
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171B78
  {uint32_t ea=c->r[4]+0x00000060u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171B7C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171B80
  {uint32_t ea=c->r[4]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171B84
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171B88
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171B8C
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171B90
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80171B94
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[5],c->f[0])); // 80171B98
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80171B9C
  {uint32_t ea=c->r[3]+0x00000070u; c->f[8]=c->ps1[8]=RF32(ea);} // 80171BA0
  {uint32_t ea=c->r[4]+0x00000070u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171BA4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171BA8
  {uint32_t ea=c->r[3]+0x00000074u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171BAC
  {uint32_t ea=c->r[4]+0x00000074u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171BB0
  {uint32_t ea=c->r[3]+0x00000078u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171BB4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171BB8
  {uint32_t ea=c->r[4]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171BBC
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171BC0
  c->r[4]=c->r[4]+0x00000080u; // 80171BC4
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171BC8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[9],c->f[0])); // 80171BCC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[7],c->f[0])); // 80171BD0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[5],c->f[0])); // 80171BD4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171BD8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171BDC
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 80171BE0
  c->r[7]=c->r[7]+0x00000004u; // 80171BE4
  c->f[0]=-c->f[0]; // 80171BE8
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[0]);} // 80171BEC
  c->r[8]=c->r[8]+0xFFFFFFFCu; // 80171BF0
  if (!crb(c,2)) { IRQCHK(c); goto L_80171A58; } // 80171BF4
  {uint32_t ea=c->r[2]+0xFFFFB480u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171BF8
  c->r[4]=c->r[6]+0x00001080u; // 80171BFC
  {uint32_t ea=c->r[5]+0x00000040u; WF32(ea,c->f[0]);} // 80171C00
  c->r[0]=0u+0x0000000Fu; // 80171C04
L_80171C08:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C08
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171C0C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171C10
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80171C14
  {uint32_t ea=c->r[4]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171C18
  {uint32_t ea=c->r[3]+0x00000008u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171C1C
  {uint32_t ea=c->r[4]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C20
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171C24
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80171C28
  {uint32_t ea=c->r[4]+0x0000000Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171C2C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171C30
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[1],c->f[0])); // 80171C34
  {uint32_t ea=c->r[4]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C38
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171C3C
  {uint32_t ea=c->r[4]+0x00000014u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171C40
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171C44
  {uint32_t ea=c->r[3]+0x00000018u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171C48
  {uint32_t ea=c->r[4]+0x00000018u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171C4C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80171C50
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[1],c->f[0])); // 80171C54
  {uint32_t ea=c->r[4]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C58
  {uint32_t ea=c->r[3]+0x00000020u; c->f[9]=c->ps1[9]=RF32(ea);} // 80171C5C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[8]=c->ps1[8]=RF32(ea);} // 80171C60
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[4],c->f[0])); // 80171C64
  {uint32_t ea=c->r[3]+0x00000024u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171C68
  {uint32_t ea=c->r[4]+0x00000024u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171C6C
  {uint32_t ea=c->r[3]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171C70
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171C74
  {uint32_t ea=c->r[4]+0x00000028u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171C78
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80171C7C
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171C80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[1],c->f[0])); // 80171C84
  {uint32_t ea=c->r[3]+0x00000030u; c->f[26]=c->ps1[26]=RF32(ea);} // 80171C88
  {uint32_t ea=c->r[4]+0x00000030u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171C8C
  {uint32_t ea=c->r[3]+0x00000034u; c->f[25]=c->ps1[25]=RF32(ea);} // 80171C90
  c->f[0]=c->ps1[0]=S(std::fma(c->f[9],c->f[8],c->f[0])); // 80171C94
  {uint32_t ea=c->r[4]+0x00000034u; c->f[13]=c->ps1[13]=RF32(ea);} // 80171C98
  {uint32_t ea=c->r[3]+0x00000038u; c->f[12]=c->ps1[12]=RF32(ea);} // 80171C9C
  {uint32_t ea=c->r[4]+0x00000038u; c->f[11]=c->ps1[11]=RF32(ea);} // 80171CA0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[7],c->f[6],c->f[0])); // 80171CA4
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80171CA8
  {uint32_t ea=c->r[4]+0x0000003Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80171CAC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[8]=c->ps1[8]=RF32(ea);} // 80171CB0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[5],c->f[4],c->f[0])); // 80171CB4
  {uint32_t ea=c->r[4]+0x00000040u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171CB8
  {uint32_t ea=c->r[3]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171CBC
  {uint32_t ea=c->r[4]+0x00000044u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171CC0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[2],c->f[0])); // 80171CC4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171CC8
  {uint32_t ea=c->r[4]+0x00000048u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171CCC
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171CD0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[26],c->f[1],c->f[0])); // 80171CD4
  {uint32_t ea=c->r[4]+0x0000004Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171CD8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[25],c->f[13],c->f[0])); // 80171CDC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[12],c->f[11],c->f[0])); // 80171CE0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[9],c->f[0])); // 80171CE4
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[7],c->f[0])); // 80171CE8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[5],c->f[0])); // 80171CEC
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171CF0
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171CF4
  {uint32_t ea=c->r[3]+0x00000050u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171CF8
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80171CFC
  {uint32_t ea=c->r[4]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171D00
  {uint32_t ea=c->r[3]+0x00000054u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171D04
  c->f[0]=c->ps1[0]=S(std::fma(c->f[3],c->f[1],c->f[0])); // 80171D08
  {uint32_t ea=c->r[4]+0x00000054u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171D0C
  {uint32_t ea=c->r[3]+0x00000058u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171D10
  {uint32_t ea=c->r[4]+0x00000058u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171D14
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171D18
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171D1C
  {uint32_t ea=c->r[4]+0x0000005Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171D20
  {uint32_t ea=c->r[3]+0x00000060u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171D24
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171D28
  {uint32_t ea=c->r[4]+0x00000060u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171D2C
  {uint32_t ea=c->r[3]+0x00000064u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171D30
  {uint32_t ea=c->r[4]+0x00000064u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171D34
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171D38
  {uint32_t ea=c->r[3]+0x00000068u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171D3C
  {uint32_t ea=c->r[4]+0x00000068u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171D40
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[10]=c->ps1[10]=RF32(ea);} // 80171D44
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[5],c->f[0])); // 80171D48
  {uint32_t ea=c->r[4]+0x0000006Cu; c->f[9]=c->ps1[9]=RF32(ea);} // 80171D4C
  {uint32_t ea=c->r[3]+0x00000070u; c->f[8]=c->ps1[8]=RF32(ea);} // 80171D50
  {uint32_t ea=c->r[4]+0x00000070u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171D54
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171D58
  {uint32_t ea=c->r[3]+0x00000074u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171D5C
  {uint32_t ea=c->r[4]+0x00000074u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171D60
  {uint32_t ea=c->r[3]+0x00000078u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171D64
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171D68
  {uint32_t ea=c->r[4]+0x00000078u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171D6C
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80171D70
  c->r[4]=c->r[4]+0x00000080u; // 80171D74
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80171D78
  c->f[0]=c->ps1[0]=S(std::fma(c->f[10],c->f[9],c->f[0])); // 80171D7C
  c->f[0]=c->ps1[0]=S(std::fma(c->f[8],c->f[7],c->f[0])); // 80171D80
  c->f[0]=c->ps1[0]=S(std::fma(c->f[6],c->f[5],c->f[0])); // 80171D84
  c->f[0]=c->ps1[0]=S(std::fma(c->f[4],c->f[3],c->f[0])); // 80171D88
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[1],c->f[0])); // 80171D8C
  {uint32_t ea=c->r[9]+0x00000000u; WF32(ea,c->f[0]);} // 80171D90
  c->r[9]=c->r[9]+0x00000004u; // 80171D94
  {uint32_t ea=c->r[10]+0x00000000u; WF32(ea,c->f[0]);} // 80171D98
  c->r[10]=c->r[10]+0xFFFFFFFCu; // 80171D9C
  if (!crb(c,2)) { IRQCHK(c); goto L_80171C08; } // 80171DA0
  {uint32_t ea=c->r[3]+0x00000000u; c->f[24]=c->ps1[24]=RF32(ea);} // 80171DA4
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171DA8
  {uint32_t ea=c->r[3]+0x00000008u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171DAC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 80171DB0
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171DB4
  {uint32_t ea=c->r[3]+0x00000010u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171DB8
  {uint32_t ea=c->r[3]+0x00000014u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171DBC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[1]); // 80171DC0
  {uint32_t ea=c->r[3]+0x00000018u; c->f[4]=c->ps1[4]=RF32(ea);} // 80171DC4
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80171DC8
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171DCC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 80171DD0
  {uint32_t ea=c->r[3]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171DD4
  {uint32_t ea=c->r[3]+0x00000028u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171DD8
  {uint32_t ea=c->r[3]+0x0000002Cu; c->f[25]=c->ps1[25]=RF32(ea);} // 80171DDC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[6]); // 80171DE0
  {uint32_t ea=c->r[3]+0x00000030u; c->f[26]=c->ps1[26]=RF32(ea);} // 80171DE4
  {uint32_t ea=c->r[3]+0x00000034u; c->f[27]=c->ps1[27]=RF32(ea);} // 80171DE8
  {uint32_t ea=c->r[3]+0x00000038u; c->f[28]=c->ps1[28]=RF32(ea);} // 80171DEC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[5]); // 80171DF0
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[29]=c->ps1[29]=RF32(ea);} // 80171DF4
  {uint32_t ea=c->r[3]+0x00000040u; c->f[30]=c->ps1[30]=RF32(ea);} // 80171DF8
  {uint32_t ea=c->r[3]+0x00000044u; c->f[31]=c->ps1[31]=RF32(ea);} // 80171DFC
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 80171E00
  {uint32_t ea=c->r[3]+0x00000048u; c->f[13]=c->ps1[13]=RF32(ea);} // 80171E04
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[12]=c->ps1[12]=RF32(ea);} // 80171E08
  {uint32_t ea=c->r[3]+0x00000050u; c->f[11]=c->ps1[11]=RF32(ea);} // 80171E0C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[3]); // 80171E10
  {uint32_t ea=c->r[3]+0x00000054u; c->f[10]=c->ps1[10]=RF32(ea);} // 80171E14
  {uint32_t ea=c->r[3]+0x00000058u; c->f[9]=c->ps1[9]=RF32(ea);} // 80171E18
  {uint32_t ea=c->r[3]+0x0000005Cu; c->f[8]=c->ps1[8]=RF32(ea);} // 80171E1C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[2]); // 80171E20
  {uint32_t ea=c->r[3]+0x00000060u; c->f[7]=c->ps1[7]=RF32(ea);} // 80171E24
  {uint32_t ea=c->r[3]+0x00000064u; c->f[6]=c->ps1[6]=RF32(ea);} // 80171E28
  {uint32_t ea=c->r[3]+0x00000068u; c->f[5]=c->ps1[5]=RF32(ea);} // 80171E2C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[1]); // 80171E30
  {uint32_t ea=c->r[3]+0x0000006Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80171E34
  {uint32_t ea=c->r[3]+0x00000070u; c->f[3]=c->ps1[3]=RF32(ea);} // 80171E38
  {uint32_t ea=c->r[3]+0x00000074u; c->f[2]=c->ps1[2]=RF32(ea);} // 80171E3C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 80171E40
  {uint32_t ea=c->r[3]+0x00000078u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171E44
  {uint32_t ea=c->r[3]+0x0000007Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80171E48
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[25]); // 80171E4C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[26]); // 80171E50
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[27]); // 80171E54
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[28]); // 80171E58
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[29]); // 80171E5C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[30]); // 80171E60
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[31]); // 80171E64
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[13]); // 80171E68
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[12]); // 80171E6C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[11]); // 80171E70
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[10]); // 80171E74
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[9]); // 80171E78
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[8]); // 80171E7C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[7]); // 80171E80
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[6]); // 80171E84
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[5]); // 80171E88
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[4]); // 80171E8C
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[3]); // 80171E90
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[2]); // 80171E94
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[1]); // 80171E98
  c->f[24]=c->ps1[24]=S(c->f[24]+c->f[0]); // 80171E9C
  c->f[0]=-c->f[24]; // 80171EA0
  {uint32_t ea=c->r[5]+0x000000C0u; WF32(ea,c->f[0]);} // 80171EA4
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,31,ea,0,0);} // 80171EA8
  {uint32_t ea=c->r[1]+0x00000080u; c->f[31]=RF64(ea);} // 80171EAC
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,30,ea,0,0);} // 80171EB0
  {uint32_t ea=c->r[1]+0x00000070u; c->f[30]=RF64(ea);} // 80171EB4
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,29,ea,0,0);} // 80171EB8
  {uint32_t ea=c->r[1]+0x00000060u; c->f[29]=RF64(ea);} // 80171EBC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,28,ea,0,0);} // 80171EC0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[28]=RF64(ea);} // 80171EC4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,27,ea,0,0);} // 80171EC8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[27]=RF64(ea);} // 80171ECC
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,26,ea,0,0);} // 80171ED0
  {uint32_t ea=c->r[1]+0x00000030u; c->f[26]=RF64(ea);} // 80171ED4
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,25,ea,0,0);} // 80171ED8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[25]=RF64(ea);} // 80171EDC
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,24,ea,0,0);} // 80171EE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[24]=RF64(ea);} // 80171EE4
  c->r[1]=c->r[1]+0x00000090u; // 80171EE8
  return; // 80171EEC
}

// ahxsbf_init_filter__11CriAcAhxsjdFv
void f_80171EF0(Ctx* __restrict c) {
  trace_call(0x80171EF0u);
  c->r[0]=R32(c->r[13]+0xFFFFA1E0u); // 80171EF0
  cmps(c,0,(int32_t)c->r[0],0); // 80171EF4
  if (!crb(c,2)) return; // 80171EF8
  c->r[6]=R32(c->r[13]+0xFFFFA1D0u); // 80171EFC
  c->r[0]=0u+0x00000080u; // 80171F00
  c->r[7]=0u+0x00000800u; // 80171F04
  c->r[3]=c->r[6]+0x0000001Fu; // 80171F08
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80171F0C
  W32(c->r[13]+0xFFFFA1D8u,c->r[4]); // 80171F10
  c->ctr=c->r[0]; // 80171F14
L_80171F18:;
  c->r[0]=R8(c->r[6]+c->r[7]); // 80171F18
  c->r[3]=c->r[6]+c->r[7]; // 80171F1C
  W8(c->r[4]+c->r[7],c->r[0]); // 80171F20
  c->r[5]=c->r[4]+c->r[7]; // 80171F24
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 80171F28
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80171F2C
  W8(c->r[5]+0xFFFFFFFFu,c->r[0]); // 80171F30
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 80171F34
  W8(c->r[5]+0xFFFFFFFEu,c->r[0]); // 80171F38
  c->r[0]=R8(c->r[3]+0xFFFFFFFDu); // 80171F3C
  W8(c->r[5]+0xFFFFFFFDu,c->r[0]); // 80171F40
  c->r[0]=R8(c->r[3]+0xFFFFFFFCu); // 80171F44
  W8(c->r[5]+0xFFFFFFFCu,c->r[0]); // 80171F48
  c->r[0]=R8(c->r[3]+0xFFFFFFFBu); // 80171F4C
  W8(c->r[5]+0xFFFFFFFBu,c->r[0]); // 80171F50
  c->r[0]=R8(c->r[3]+0xFFFFFFFAu); // 80171F54
  W8(c->r[5]+0xFFFFFFFAu,c->r[0]); // 80171F58
  c->r[0]=R8(c->r[3]+0xFFFFFFF9u); // 80171F5C
  c->r[3]=c->r[6]+c->r[7]; // 80171F60
  W8(c->r[5]+0xFFFFFFF9u,c->r[0]); // 80171F64
  c->r[5]=c->r[4]+c->r[7]; // 80171F68
  c->r[0]=R8(c->r[6]+c->r[7]); // 80171F6C
  W8(c->r[4]+c->r[7],c->r[0]); // 80171F70
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 80171F74
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80171F78
  W8(c->r[5]+0xFFFFFFFFu,c->r[0]); // 80171F7C
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 80171F80
  W8(c->r[5]+0xFFFFFFFEu,c->r[0]); // 80171F84
  c->r[0]=R8(c->r[3]+0xFFFFFFFDu); // 80171F88
  W8(c->r[5]+0xFFFFFFFDu,c->r[0]); // 80171F8C
  c->r[0]=R8(c->r[3]+0xFFFFFFFCu); // 80171F90
  W8(c->r[5]+0xFFFFFFFCu,c->r[0]); // 80171F94
  c->r[0]=R8(c->r[3]+0xFFFFFFFBu); // 80171F98
  W8(c->r[5]+0xFFFFFFFBu,c->r[0]); // 80171F9C
  c->r[0]=R8(c->r[3]+0xFFFFFFFAu); // 80171FA0
  W8(c->r[5]+0xFFFFFFFAu,c->r[0]); // 80171FA4
  c->r[0]=R8(c->r[3]+0xFFFFFFF9u); // 80171FA8
  W8(c->r[5]+0xFFFFFFF9u,c->r[0]); // 80171FAC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80171F18; } // 80171FB0
  c->r[3]=R8(c->r[6]+c->r[7]); // 80171FB4
  c->r[0]=0u+0x00000040u; // 80171FB8
  W8(c->r[4]+c->r[7],c->r[3]); // 80171FBC
  c->r[4]=0u+0x00000000u; // 80171FC0
  {uint32_t ea=c->r[2]+0xFFFFB490u; c->f[1]=c->ps1[1]=RF32(ea);} // 80171FC4
  c->ctr=c->r[0]; // 80171FC8
L_80171FCC:;
  c->r[3]=R32(c->r[13]+0xFFFFA1D8u); // 80171FCC
  {uint32_t ea=c->r[3]+c->r[4]; c->f[0]=c->ps1[0]=RF32(ea);} // 80171FD0
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80171FD4
  {uint32_t ea=c->r[3]+c->r[4]; WF32(ea,c->f[0]);} // 80171FD8
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 80171FDC
  c->r[3]=c->r[0]+c->r[4]; // 80171FE0
  {uint32_t ea=c->r[3]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171FE4
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80171FE8
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80171FEC
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 80171FF0
  c->r[3]=c->r[0]+c->r[4]; // 80171FF4
  {uint32_t ea=c->r[3]+0x00000008u; c->f[0]=c->ps1[0]=RF32(ea);} // 80171FF8
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80171FFC
  {uint32_t ea=c->r[3]+0x00000008u; WF32(ea,c->f[0]);} // 80172000
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 80172004
  c->r[3]=c->r[0]+c->r[4]; // 80172008
  {uint32_t ea=c->r[3]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8017200C
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172010
  {uint32_t ea=c->r[3]+0x0000000Cu; WF32(ea,c->f[0]);} // 80172014
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 80172018
  c->r[3]=c->r[0]+c->r[4]; // 8017201C
  {uint32_t ea=c->r[3]+0x00000010u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172020
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172024
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80172028
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 8017202C
  c->r[3]=c->r[0]+c->r[4]; // 80172030
  {uint32_t ea=c->r[3]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172034
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172038
  {uint32_t ea=c->r[3]+0x00000014u; WF32(ea,c->f[0]);} // 8017203C
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 80172040
  c->r[3]=c->r[0]+c->r[4]; // 80172044
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80172048
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 8017204C
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[0]);} // 80172050
  c->r[0]=R32(c->r[13]+0xFFFFA1D8u); // 80172054
  c->r[3]=c->r[0]+c->r[4]; // 80172058
  c->r[4]=c->r[4]+0x00000020u; // 8017205C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80172060
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[1]); // 80172064
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80172068
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80171FCC; } // 8017206C
  c->r[6]=R32(c->r[13]+0xFFFFA1CCu); // 80172070
  c->r[0]=0u+0x00000200u; // 80172074
  c->r[7]=0u+0x00002000u; // 80172078
  c->r[3]=c->r[6]+0x0000001Fu; // 8017207C
  c->r[4]=rotl(c->r[3],0)&0xFFFFFFE0u; // 80172080
  W32(c->r[13]+0xFFFFA1D4u,c->r[4]); // 80172084
  c->ctr=c->r[0]; // 80172088
L_8017208C:;
  c->r[0]=R8(c->r[6]+c->r[7]); // 8017208C
  c->r[3]=c->r[6]+c->r[7]; // 80172090
  W8(c->r[4]+c->r[7],c->r[0]); // 80172094
  c->r[5]=c->r[4]+c->r[7]; // 80172098
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 8017209C
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801720A0
  W8(c->r[5]+0xFFFFFFFFu,c->r[0]); // 801720A4
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 801720A8
  W8(c->r[5]+0xFFFFFFFEu,c->r[0]); // 801720AC
  c->r[0]=R8(c->r[3]+0xFFFFFFFDu); // 801720B0
  W8(c->r[5]+0xFFFFFFFDu,c->r[0]); // 801720B4
  c->r[0]=R8(c->r[3]+0xFFFFFFFCu); // 801720B8
  W8(c->r[5]+0xFFFFFFFCu,c->r[0]); // 801720BC
  c->r[0]=R8(c->r[3]+0xFFFFFFFBu); // 801720C0
  W8(c->r[5]+0xFFFFFFFBu,c->r[0]); // 801720C4
  c->r[0]=R8(c->r[3]+0xFFFFFFFAu); // 801720C8
  W8(c->r[5]+0xFFFFFFFAu,c->r[0]); // 801720CC
  c->r[0]=R8(c->r[3]+0xFFFFFFF9u); // 801720D0
  c->r[3]=c->r[6]+c->r[7]; // 801720D4
  W8(c->r[5]+0xFFFFFFF9u,c->r[0]); // 801720D8
  c->r[5]=c->r[4]+c->r[7]; // 801720DC
  c->r[0]=R8(c->r[6]+c->r[7]); // 801720E0
  W8(c->r[4]+c->r[7],c->r[0]); // 801720E4
  c->r[7]=c->r[7]+0xFFFFFFF8u; // 801720E8
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 801720EC
  W8(c->r[5]+0xFFFFFFFFu,c->r[0]); // 801720F0
  c->r[0]=R8(c->r[3]+0xFFFFFFFEu); // 801720F4
  W8(c->r[5]+0xFFFFFFFEu,c->r[0]); // 801720F8
  c->r[0]=R8(c->r[3]+0xFFFFFFFDu); // 801720FC
  W8(c->r[5]+0xFFFFFFFDu,c->r[0]); // 80172100
  c->r[0]=R8(c->r[3]+0xFFFFFFFCu); // 80172104
  W8(c->r[5]+0xFFFFFFFCu,c->r[0]); // 80172108
  c->r[0]=R8(c->r[3]+0xFFFFFFFBu); // 8017210C
  W8(c->r[5]+0xFFFFFFFBu,c->r[0]); // 80172110
  c->r[0]=R8(c->r[3]+0xFFFFFFFAu); // 80172114
  W8(c->r[5]+0xFFFFFFFAu,c->r[0]); // 80172118
  c->r[0]=R8(c->r[3]+0xFFFFFFF9u); // 8017211C
  W8(c->r[5]+0xFFFFFFF9u,c->r[0]); // 80172120
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8017208C; } // 80172124
  c->r[3]=R8(c->r[6]+c->r[7]); // 80172128
  c->r[0]=0u+0x00000001u; // 8017212C
  W8(c->r[4]+c->r[7],c->r[3]); // 80172130
  W32(c->r[13]+0xFFFFA1E0u,c->r[0]); // 80172134
  return; // 80172138
}

// AHXSJD_Init__11CriAcAhxsjdFv
void f_8017213C(Ctx* __restrict c) {
  trace_call(0x8017213Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017213C
  c->r[0]=c->lr; // 80172140
  c->r[3]=0u+0x802D0000u; // 80172144
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172148
  c->r[3]=c->r[3]+0x0000062Cu; // 8017214C
  c->r[0]=R32(c->r[13]+0xFFFFA1E4u); // 80172150
  W32(c->r[13]+0xFFFFA1E8u,c->r[3]); // 80172154
  cmps(c,0,(int32_t)c->r[0],0); // 80172158
  if (!crb(c,2)) { goto L_801721E4; } // 8017215C
  c->r[3]=c->r[1]+0x0000000Cu; // 80172160
  c->r[4]=c->r[1]+0x00000008u; // 80172164
  c->lr=0x8017216Cu; f_80172A6C(c); // 80172168
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8017216C
  c->r[3]=c->r[1]+0x0000000Cu; // 80172170
  W32(c->r[13]+0xFFFFA1C0u,c->r[0]); // 80172174
  c->r[4]=c->r[1]+0x00000008u; // 80172178
  c->lr=0x80172180u; f_80172A90(c); // 8017217C
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80172180
  c->r[3]=c->r[1]+0x0000000Cu; // 80172184
  W32(c->r[13]+0xFFFFA1C4u,c->r[0]); // 80172188
  c->r[4]=c->r[1]+0x00000008u; // 8017218C
  c->lr=0x80172194u; f_80172AB4(c); // 80172190
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80172194
  c->r[3]=c->r[1]+0x0000000Cu; // 80172198
  W32(c->r[13]+0xFFFFA1CCu,c->r[0]); // 8017219C
  c->r[4]=c->r[1]+0x00000008u; // 801721A0
  c->lr=0x801721A8u; f_80172AD8(c); // 801721A4
  c->r[0]=R32(c->r[13]+0xFFFFA1C8u); // 801721A8
  c->r[3]=R32(c->r[1]+0x0000000Cu); // 801721AC
  cmps(c,0,(int32_t)c->r[0],0); // 801721B0
  W32(c->r[13]+0xFFFFA1D0u,c->r[3]); // 801721B4
  if (!crb(c,2)) { goto L_801721D8; } // 801721B8
  c->r[0]=R32(c->r[13]+0xFFFFA1DCu); // 801721BC
  cmps(c,0,(int32_t)c->r[0],0); // 801721C0
  if (!crb(c,2)) { goto L_801721CC; } // 801721C4
  c->lr=0x801721CCu; f_80171EF0(c); // 801721C8
L_801721CC:;
  c->r[3]=R32(c->r[13]+0xFFFFA1DCu); // 801721CC
  c->r[0]=c->r[3]+0x00000001u; // 801721D0
  W32(c->r[13]+0xFFFFA1DCu,c->r[0]); // 801721D4
L_801721D8:;
  c->r[3]=R32(c->r[13]+0xFFFFA1C8u); // 801721D8
  c->r[0]=c->r[3]+0x00000001u; // 801721DC
  W32(c->r[13]+0xFFFFA1C8u,c->r[0]); // 801721E0
L_801721E4:;
  c->r[3]=R32(c->r[13]+0xFFFFA1E4u); // 801721E4
  c->r[0]=c->r[3]+0x00000001u; // 801721E8
  W32(c->r[13]+0xFFFFA1E4u,c->r[0]); // 801721EC
  c->r[0]=R32(c->r[1]+0x00000014u); // 801721F0
  c->lr=c->r[0]; // 801721F4
  c->r[1]=c->r[1]+0x00000010u; // 801721F8
  return; // 801721FC
}

// AHXSJD_Finish__11CriAcAhxsjdFv
void f_80172200(Ctx* __restrict c) {
  trace_call(0x80172200u);
  c->r[0]=R32(c->r[13]+0xFFFFA1E4u); // 80172200
  cmps(c,0,(int32_t)c->r[0],1); // 80172204
  if (!crb(c,2)) { goto L_80172228; } // 80172208
  c->r[0]=R32(c->r[13]+0xFFFFA1C8u); // 8017220C
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80172210
  W32(c->r[13]+0xFFFFA1C8u,c->r[0]); // 80172214
  if (!crb(c,2)) { goto L_80172228; } // 80172218
  c->r[3]=R32(c->r[13]+0xFFFFA1DCu); // 8017221C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80172220
  W32(c->r[13]+0xFFFFA1DCu,c->r[0]); // 80172224
L_80172228:;
  c->r[3]=R32(c->r[13]+0xFFFFA1E4u); // 80172228
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8017222C
  W32(c->r[13]+0xFFFFA1E4u,c->r[0]); // 80172230
  return; // 80172234
}

// AHXSJD_Create__11CriAcAhxsjdFP6SJ_OBJlPP6SJ_OBJPvl
void f_80172238(Ctx* __restrict c) {
  trace_call(0x80172238u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172238
  c->r[0]=c->lr; // 8017223C
  cmps(c,0,(int32_t)c->r[7],7304); // 80172240
  W32(c->r[1]+0x00000034u,c->r[0]); // 80172244
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80172248
  c->r[25]=c->r[3]|c->r[3]; // 8017224C
  c->r[29]=c->r[4]|c->r[4]; // 80172250
  c->r[30]=c->r[5]|c->r[5]; // 80172254
  if (!crb(c,0)) { goto L_80172264; } // 80172258
  c->r[3]=0u+0x00000000u; // 8017225C
  goto L_80172464; // 80172260
L_80172264:;
  c->r[0]=c->r[6]+0x00000007u; // 80172264
  c->r[26]=c->r[6]+c->r[7]; // 80172268
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFF8u; // 8017226C
  c->r[28]=c->r[31]+0x0000005Cu; // 80172270
  cmpu(c,0,c->r[28],c->r[26]); // 80172274
  if (!crb(c,1)) { goto L_80172284; } // 80172278
  c->r[3]=0u+0x00000000u; // 8017227C
  goto L_80172464; // 80172280
L_80172284:;
  c->r[3]=c->r[31]|c->r[31]; // 80172284
  c->r[4]=0u+0x00000000u; // 80172288
  c->r[5]=0u+0x0000005Cu; // 8017228C
  c->lr=0x80172294u; f_80004714(c); // 80172290
  c->r[27]=c->r[28]+0x00000034u; // 80172294
  cmpu(c,0,c->r[27],c->r[26]); // 80172298
  if (!crb(c,1)) { goto L_801722A8; } // 8017229C
  c->r[3]=0u+0x00000000u; // 801722A0
  goto L_80172464; // 801722A4
L_801722A8:;
  c->r[3]=c->r[25]|c->r[25]; // 801722A8
  c->r[4]=c->r[28]|c->r[28]; // 801722AC
  c->r[5]=0u+0x00000034u; // 801722B0
  c->lr=0x801722B8u; f_8016F994(c); // 801722B4
  cmps(c,1,(int32_t)c->r[3],0); // 801722B8
  W32(c->r[31]+0x00000004u,c->r[3]); // 801722BC
  if (!crb(c,6)) { goto L_801722CC; } // 801722C0
  c->r[3]=0u+0x00000000u; // 801722C4
  goto L_80172464; // 801722C8
L_801722CC:;
  c->r[0]=c->r[27]+0x00001BF0u; // 801722CC
  cmpu(c,0,c->r[0],c->r[26]); // 801722D0
  if (!crb(c,1)) { goto L_801722F0; } // 801722D4
  if (crb(c,6)) { goto L_801722E8; } // 801722D8
  c->r[4]=0u+0x00000000u; // 801722DC
  c->r[5]=0u+0x0000002Cu; // 801722E0
  c->lr=0x801722E8u; f_80004714(c); // 801722E4
L_801722E8:;
  c->r[3]=0u+0x00000000u; // 801722E8
  goto L_80172464; // 801722EC
L_801722F0:;
  c->r[3]=c->r[27]|c->r[27]; // 801722F0
  c->r[4]=0u+0x00001BF0u; // 801722F4
  c->lr=0x801722FCu; f_8016FCD0(c); // 801722F8
  cmps(c,0,(int32_t)c->r[3],0); // 801722FC
  W32(c->r[31]+0x00000000u,c->r[3]); // 80172300
  if (!crb(c,2)) { goto L_80172328; } // 80172304
  c->r[3]=R32(c->r[31]+0x00000004u); // 80172308
  cmps(c,0,(int32_t)c->r[3],0); // 8017230C
  if (crb(c,2)) { goto L_80172320; } // 80172310
  c->r[4]=0u+0x00000000u; // 80172314
  c->r[5]=0u+0x0000002Cu; // 80172318
  c->lr=0x80172320u; f_80004714(c); // 8017231C
L_80172320:;
  c->r[3]=0u+0x00000000u; // 80172320
  goto L_80172464; // 80172324
L_80172328:;
  W8(c->r[31]+0x0000000Au,c->r[29]); // 80172328
  cmps(c,1,(int32_t)c->r[29],0); // 8017232C
  c->r[6]=0u+0x00000000u; // 80172330
  W32(c->r[31]+0x00000010u,c->r[25]); // 80172334
  if (!crb(c,5)) { goto L_80172408; } // 80172338
  cmps(c,0,(int32_t)c->r[29],8); // 8017233C
  c->r[4]=c->r[29]+0xFFFFFFF8u; // 80172340
  if (!crb(c,1)) { goto L_801723D8; } // 80172344
  c->r[5]=0u+0x00000000u; // 80172348
  if (crb(c,4)) { goto L_80172364; } // 8017234C
  c->r[3]=0u+0x80000000u; // 80172350
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80172354
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80172358
  if (crb(c,1)) { goto L_80172364; } // 8017235C
  c->r[5]=0u+0x00000001u; // 80172360
L_80172364:;
  cmps(c,0,(int32_t)c->r[5],0); // 80172364
  if (crb(c,2)) { goto L_801723D8; } // 80172368
  c->r[0]=c->r[4]+0x00000007u; // 8017236C
  c->r[3]=c->r[30]|c->r[30]; // 80172370
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80172374
  c->r[5]=c->r[31]|c->r[31]; // 80172378
  c->ctr=c->r[0]; // 8017237C
  cmps(c,0,(int32_t)c->r[4],0); // 80172380
  if (!crb(c,1)) { goto L_801723D8; } // 80172384
L_80172388:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172388
  c->r[6]=c->r[6]+0x00000008u; // 8017238C
  W32(c->r[5]+0x00000014u,c->r[0]); // 80172390
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172394
  W32(c->r[5]+0x00000018u,c->r[0]); // 80172398
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017239C
  W32(c->r[5]+0x0000001Cu,c->r[0]); // 801723A0
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801723A4
  W32(c->r[5]+0x00000020u,c->r[0]); // 801723A8
  c->r[0]=R32(c->r[3]+0x00000010u); // 801723AC
  W32(c->r[5]+0x00000024u,c->r[0]); // 801723B0
  c->r[0]=R32(c->r[3]+0x00000014u); // 801723B4
  W32(c->r[5]+0x00000028u,c->r[0]); // 801723B8
  c->r[0]=R32(c->r[3]+0x00000018u); // 801723BC
  W32(c->r[5]+0x0000002Cu,c->r[0]); // 801723C0
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801723C4
  c->r[3]=c->r[3]+0x00000020u; // 801723C8
  W32(c->r[5]+0x00000030u,c->r[0]); // 801723CC
  c->r[5]=c->r[5]+0x00000020u; // 801723D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80172388; } // 801723D4
L_801723D8:;
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 801723D8
  c->r[0]=c->r[29]-c->r[6]; // 801723DC
  c->r[3]=c->r[30]+c->r[4]; // 801723E0
  c->r[4]=c->r[31]+c->r[4]; // 801723E4
  c->ctr=c->r[0]; // 801723E8
  cmps(c,0,(int32_t)c->r[6],(int32_t)c->r[29]); // 801723EC
  if (!crb(c,0)) { goto L_80172408; } // 801723F0
L_801723F4:;
  c->r[0]=R32(c->r[3]+0x00000000u); // 801723F4
  c->r[3]=c->r[3]+0x00000004u; // 801723F8
  W32(c->r[4]+0x00000014u,c->r[0]); // 801723FC
  c->r[4]=c->r[4]+0x00000004u; // 80172400
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801723F4; } // 80172404
L_80172408:;
  c->r[6]=0u+0x00000000u; // 80172408
  W8(c->r[31]+0x00000009u,c->r[6]); // 8017240C
  c->r[3]=0u+0x80000000u; // 80172410
  c->r[4]=0u+0xFFFFFFFFu; // 80172414
  W32(c->r[31]+0x0000000Cu,c->r[6]); // 80172418
  c->r[5]=c->r[3]+0xFFFFFFFFu; // 8017241C
  c->r[0]=0u+0x00000001u; // 80172420
  c->r[3]=c->r[31]|c->r[31]; // 80172424
  W32(c->r[31]+0x0000001Cu,c->r[6]); // 80172428
  W32(c->r[31]+0x00000020u,c->r[6]); // 8017242C
  W32(c->r[31]+0x00000024u,c->r[6]); // 80172430
  W32(c->r[31]+0x00000028u,c->r[6]); // 80172434
  W32(c->r[31]+0x0000002Cu,c->r[6]); // 80172438
  W32(c->r[31]+0x00000030u,c->r[6]); // 8017243C
  W32(c->r[31]+0x00000034u,c->r[5]); // 80172440
  W32(c->r[31]+0x0000003Cu,c->r[4]); // 80172444
  W32(c->r[31]+0x00000040u,c->r[6]); // 80172448
  W32(c->r[31]+0x00000044u,c->r[6]); // 8017244C
  W32(c->r[31]+0x0000004Cu,c->r[6]); // 80172450
  W32(c->r[31]+0x00000050u,c->r[6]); // 80172454
  W32(c->r[31]+0x00000054u,c->r[6]); // 80172458
  W32(c->r[31]+0x00000058u,c->r[6]); // 8017245C
  W8(c->r[31]+0x00000008u,c->r[0]); // 80172460
L_80172464:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80172464
  c->r[0]=R32(c->r[1]+0x00000034u); // 80172468
  c->lr=c->r[0]; // 8017246C
  c->r[1]=c->r[1]+0x00000030u; // 80172470
  return; // 80172474
}

// AHXSJD_Destroy__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXSJD_OBJ
void f_80172478(Ctx* __restrict c) {
  trace_call(0x80172478u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172478
  c->r[0]=c->lr; // 8017247C
  cmps(c,0,(int32_t)c->r[3],0); // 80172480
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172488
  W32(c->r[1]+0x00000008u,c->r[30]); // 8017248C
  c->r[30]=c->r[3]|c->r[3]; // 80172490
  if (crb(c,2)) { goto L_80172510; } // 80172494
  c->r[4]=R32(c->r[3]+0x00000004u); // 80172498
  cmps(c,0,(int32_t)c->r[4],0); // 8017249C
  if (crb(c,2)) { goto L_801724C0; } // 801724A0
  c->r[0]=0u+0x00000000u; // 801724A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801724A8
  if (crb(c,2)) { goto L_801724C0; } // 801724AC
  c->r[3]=c->r[4]|c->r[4]; // 801724B0
  c->r[4]=0u+0x00000000u; // 801724B4
  c->r[5]=0u+0x0000002Cu; // 801724B8
  c->lr=0x801724C0u; f_80004714(c); // 801724BC
L_801724C0:;
  c->r[31]=R32(c->r[30]+0x00000000u); // 801724C0
  cmps(c,0,(int32_t)c->r[31],0); // 801724C4
  if (crb(c,2)) { goto L_80172500; } // 801724C8
  c->r[0]=0u+0x00000000u; // 801724CC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801724D0
  c->r[3]=R32(c->r[31]+0x00000354u); // 801724D4
  cmps(c,0,(int32_t)c->r[3],0); // 801724D8
  if (crb(c,2)) { goto L_801724F0; } // 801724DC
  W32(c->r[31]+0x00000354u,c->r[0]); // 801724E0
  c->r[4]=0u+0x00000000u; // 801724E4
  c->r[5]=0u+0x00001014u; // 801724E8
  c->lr=0x801724F0u; f_80004714(c); // 801724EC
L_801724F0:;
  c->r[3]=c->r[31]|c->r[31]; // 801724F0
  c->r[4]=0u+0x00000000u; // 801724F4
  c->r[5]=0u+0x00000BCCu; // 801724F8
  c->lr=0x80172500u; f_80004714(c); // 801724FC
L_80172500:;
  c->r[3]=c->r[30]|c->r[30]; // 80172500
  c->r[4]=0u+0x00000000u; // 80172504
  c->r[5]=0u+0x0000005Cu; // 80172508
  c->lr=0x80172510u; f_80004714(c); // 8017250C
L_80172510:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172510
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172514
  c->r[30]=R32(c->r[1]+0x00000008u); // 80172518
  c->lr=c->r[0]; // 8017251C
  c->r[1]=c->r[1]+0x00000010u; // 80172520
  return; // 80172524
}

// AHXSJD_GetStat__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXSJD_OBJ
void f_80172528(Ctx* __restrict c) {
  trace_call(0x80172528u);
  c->r[3]=R8(c->r[3]+0x00000009u); // 80172528
  c->r[3]=(uint32_t)(int32_t)(int8_t)c->r[3]; // 8017252C
  return; // 80172530
}

// AHXSJD_Start__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXSJD_OBJ
void f_80172534(Ctx* __restrict c) {
  trace_call(0x80172534u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172534
  c->r[0]=c->lr; // 80172538
  c->r[4]=0u+0x80000000u; // 8017253C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80172540
  c->r[0]=0u+0xFFFFFFFFu; // 80172544
  c->r[4]=c->r[4]+0xFFFFFFFFu; // 80172548
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017254C
  c->r[30]=0u+0x00000000u; // 80172550
  c->r[27]=c->r[3]|c->r[3]; // 80172554
  c->r[29]=R32(c->r[3]+0x00000004u); // 80172558
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 8017255C
  cmps(c,0,(int32_t)c->r[29],0); // 80172560
  c->r[28]=R32(c->r[3]+0x00000010u); // 80172564
  W32(c->r[3]+0x0000001Cu,c->r[30]); // 80172568
  W32(c->r[3]+0x00000020u,c->r[30]); // 8017256C
  W32(c->r[3]+0x00000024u,c->r[30]); // 80172570
  W32(c->r[3]+0x00000028u,c->r[30]); // 80172574
  W32(c->r[3]+0x0000002Cu,c->r[30]); // 80172578
  W32(c->r[3]+0x00000030u,c->r[30]); // 8017257C
  W32(c->r[3]+0x00000034u,c->r[4]); // 80172580
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 80172584
  W32(c->r[3]+0x00000040u,c->r[30]); // 80172588
  W32(c->r[3]+0x00000044u,c->r[30]); // 8017258C
  if (crb(c,2)) { goto L_8017260C; } // 80172590
  c->r[3]=c->r[29]|c->r[29]; // 80172594
  c->r[4]=0u+0x00000000u; // 80172598
  c->r[5]=0u+0x0000002Cu; // 8017259C
  c->lr=0x801725A4u; f_80004714(c); // 801725A0
  W32(c->r[29]+0x00000004u,c->r[28]); // 801725A4
  c->r[3]=c->r[28]|c->r[28]; // 801725A8
  c->r[4]=0u+0x00000000u; // 801725AC
  W32(c->r[29]+0x00000010u,c->r[30]); // 801725B0
  c->r[5]=R32(c->r[28]+0x00000000u); // 801725B4
  c->r[12]=R32(c->r[5]+0x00000024u); // 801725B8
  c->ctr=c->r[12]; // 801725BC
  if (true) { c->lr=0x801725C4u; dispatch(c,c->ctr); } // 801725C0
  c->r[5]=R32(c->r[28]+0x00000000u); // 801725C4
  c->r[31]=c->r[3]|c->r[3]; // 801725C8
  c->r[3]=c->r[28]|c->r[28]; // 801725CC
  c->r[4]=0u+0x00000001u; // 801725D0
  c->r[12]=R32(c->r[5]+0x00000024u); // 801725D4
  c->ctr=c->r[12]; // 801725D8
  if (true) { c->lr=0x801725E0u; dispatch(c,c->ctr); } // 801725DC
  c->r[0]=c->r[3]+c->r[31]; // 801725E0
  W32(c->r[29]+0x00000014u,c->r[0]); // 801725E4
  c->r[3]=sraw(c,c->r[0],2); // 801725E8
  c->r[3]=addc(c,c->r[3],0,c->xer_ca); // 801725EC
  W32(c->r[29]+0x00000018u,c->r[3]); // 801725F0
  c->r[0]=0u+0x00000001u; // 801725F4
  W32(c->r[29]+0x00000024u,c->r[30]); // 801725F8
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 801725FC
  W32(c->r[29]+0x00000020u,c->r[30]); // 80172600
  W32(c->r[29]+0x00000028u,c->r[30]); // 80172604
  W32(c->r[29]+0x00000000u,c->r[0]); // 80172608
L_8017260C:;
  c->r[28]=R32(c->r[27]+0x00000000u); // 8017260C
  c->r[29]=R32(c->r[27]+0x00000004u); // 80172610
  c->r[3]=c->r[28]|c->r[28]; // 80172614
  c->lr=0x8017261Cu; f_8016FDF4(c); // 80172618
  W32(c->r[28]+0x00000350u,c->r[29]); // 8017261C
  c->r[0]=0u+0x00000001u; // 80172620
  W8(c->r[27]+0x00000009u,c->r[0]); // 80172624
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80172628
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017262C
  c->lr=c->r[0]; // 80172630
  c->r[1]=c->r[1]+0x00000020u; // 80172634
  return; // 80172638
}

// AHXSJD_Stop__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXSJD_OBJ
void f_8017263C(Ctx* __restrict c) {
  trace_call(0x8017263Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017263C
  c->r[0]=c->lr; // 80172640
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172644
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172648
  c->r[31]=c->r[3]|c->r[3]; // 8017264C
  c->r[3]=R32(c->r[3]+0x00000000u); // 80172650
  c->lr=0x80172658u; f_8016FDF4(c); // 80172654
  c->r[0]=0u+0x00000000u; // 80172658
  W8(c->r[31]+0x00000009u,c->r[0]); // 8017265C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172660
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172664
  c->lr=c->r[0]; // 80172668
  c->r[1]=c->r[1]+0x00000010u; // 8017266C
  return; // 80172670
}

// fn_80172674
void f_80172674(Ctx* __restrict c) {
  trace_call(0x80172674u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172674
  c->r[0]=c->lr; // 80172678
  c->r[4]=0u+0x00000000u; // 8017267C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80172680
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80172684
  c->r[25]=c->r[3]|c->r[3]; // 80172688
  c->r[27]=R32(c->r[3]+0x00000000u); // 8017268C
  c->r[3]=R32(c->r[3]+0x00000014u); // 80172690
  c->r[0]=R8(c->r[27]+0x0000034Bu); // 80172694
  c->r[5]=R32(c->r[3]+0x00000000u); // 80172698
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 8017269C
  c->r[0]=sraw(c,c->r[0],3); // 801726A0
  c->r[12]=R32(c->r[5]+0x00000024u); // 801726A4
  c->r[26]=addc(c,c->r[0],0,c->xer_ca); // 801726A8
  c->ctr=c->r[12]; // 801726AC
  if (true) { c->lr=0x801726B4u; dispatch(c,c->ctr); } // 801726B0
  c->r[0]=divw((int32_t)c->r[3],(int32_t)c->r[26]); // 801726B4
  cmps(c,0,(int32_t)c->r[0],96); // 801726B8
  if (crb(c,0)) { goto L_801729C8; } // 801726BC
  c->r[0]=R32(c->r[27]+0x0000034Cu); // 801726C0
  cmps(c,0,(int32_t)c->r[0],12); // 801726C4
  if (!crb(c,2)) { goto L_8017271C; } // 801726C8
  c->r[3]=c->r[27]|c->r[27]; // 801726CC
  c->lr=0x801726D4u; f_80170160(c); // 801726D0
  cmps(c,0,(int32_t)c->r[3],1); // 801726D4
  if (!crb(c,2)) { goto L_80172714; } // 801726D8
  c->r[0]=R32(c->r[25]+0x00000038u); // 801726DC
  cmps(c,0,(int32_t)c->r[0],0); // 801726E0
  if (!crb(c,2)) { goto L_801726F4; } // 801726E4
  c->r[0]=0u+0x00000003u; // 801726E8
  W8(c->r[25]+0x00000009u,c->r[0]); // 801726EC
  goto L_801729C8; // 801726F0
L_801726F4:;
  c->r[4]=R32(c->r[25]+0x0000002Cu); // 801726F4
  c->r[0]=0u+0x00000000u; // 801726F8
  c->r[3]=R32(c->r[25]+0x00000028u); // 801726FC
  W32(c->r[25]+0x00000020u,c->r[0]); // 80172700
  c->r[3]=c->r[4]+c->r[3]; // 80172704
  W32(c->r[25]+0x0000002Cu,c->r[3]); // 80172708
  W32(c->r[25]+0x00000028u,c->r[0]); // 8017270C
  goto L_801729C8; // 80172710
L_80172714:;
  cmps(c,0,(int32_t)c->r[3],-1); // 80172714
  if (crb(c,2)) { goto L_801729C8; } // 80172718
L_8017271C:;
  c->r[3]=R32(c->r[25]+0x00000014u); // 8017271C
  c->r[5]=(uint32_t)((int32_t)c->r[26]*(int32_t)96); // 80172720
  c->r[6]=c->r[1]+0x00000010u; // 80172724
  c->r[7]=R32(c->r[3]+0x00000000u); // 80172728
  c->r[4]=0u+0x00000000u; // 8017272C
  c->r[12]=R32(c->r[7]+0x00000018u); // 80172730
  c->ctr=c->r[12]; // 80172734
  if (true) { c->lr=0x8017273Cu; dispatch(c,c->ctr); } // 80172738
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017273C
  c->r[0]=divw((int32_t)c->r[0],(int32_t)c->r[26]); // 80172740
  cmps(c,0,(int32_t)c->r[0],96); // 80172744
  if (crb(c,2)) { goto L_8017276C; } // 80172748
  c->r[3]=R32(c->r[25]+0x00000014u); // 8017274C
  c->r[5]=c->r[1]+0x00000010u; // 80172750
  c->r[4]=0u+0x00000000u; // 80172754
  c->r[6]=R32(c->r[3]+0x00000000u); // 80172758
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 8017275C
  c->ctr=c->r[12]; // 80172760
  if (true) { c->lr=0x80172768u; dispatch(c,c->ctr); } // 80172764
  goto L_801729C8; // 80172768
L_8017276C:;
  c->r[0]=R32(c->r[27]+0x0000034Cu); // 8017276C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80172770
  cmps(c,0,(int32_t)c->r[0],12); // 80172774
  if (!crb(c,2)) { goto L_80172784; } // 80172778
  c->r[31]=0u+0x00000000u; // 8017277C
  goto L_80172848; // 80172780
L_80172784:;
  c->r[3]=R32(c->r[27]+0x00000350u); // 80172784
  c->r[4]=c->r[27]+0x00000388u; // 80172788
  c->r[8]=R32(c->r[27]+0x00000000u); // 8017278C
  c->r[5]=c->r[27]+0x000003C4u; // 80172790
  c->r[9]=R32(c->r[27]+0x00000344u); // 80172794
  c->r[6]=c->r[27]+0x000005C4u; // 80172798
  c->r[7]=sraw(c,c->r[0],2); // 8017279C
  c->lr=0x801727A4u; f_801712D0(c); // 801727A0
  c->r[24]=0u+0x80330000u; // 801727A4
  c->r[30]=0u+0x00000000u; // 801727A8
  c->r[24]=c->r[24]+0x00001950u; // 801727AC
  c->r[29]=0u+0x00000000u; // 801727B0
L_801727B4:;
  c->r[31]=R32(c->r[27]+0x00000354u); // 801727B4
  c->r[0]=R32(c->r[27]+0x00000000u); // 801727B8
  c->r[4]=R32(c->r[31]+0x00000004u); // 801727BC
  c->r[3]=c->r[0]+c->r[29]; // 801727C0
  c->r[4]=c->r[4]+0xFFFFFFC0u; // 801727C4
  c->r[0]=rotl(c->r[4],0)&0x000003FFu; // 801727C8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801727CC
  c->r[0]=rotl(c->r[3],0)&0x0000001Fu; cr0(c,c->r[0]); // 801727D0
  c->r[0]=rotl(c->r[4],2)&0x00000FFCu; // 801727D4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801727D8
  c->r[5]=c->r[31]+c->r[0]; // 801727DC
  c->r[5]=c->r[5]+0x00000014u; // 801727E0
  if (!crb(c,2)) { goto L_801727F0; } // 801727E4
  c->r[0]=rotl(c->r[4],0)&0x0000001Fu; cr0(c,c->r[0]); // 801727E8
  if (crb(c,2)) { goto L_801727F4; } // 801727EC
L_801727F0:;
  IRQCHK(c); goto L_801727F0; // 801727F0
L_801727F4:;
  c->lr=0x801727F8u; f_801719FC(c); // 801727F4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801727F8
  c->r[5]=c->r[28]|c->r[28]; // 801727FC
  c->r[4]=R32(c->r[31]+0x00000010u); // 80172800
  c->r[0]=sraw(c,c->r[3],6); // 80172804
  c->r[3]=rotl(c->r[3],2)&0xFFFFFFFCu; // 80172808
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8017280C
  c->r[12]=R32(c->r[24]+c->r[0]); // 80172810
  c->r[3]=c->r[31]+c->r[3]; // 80172814
  c->r[3]=c->r[3]+0x00000014u; // 80172818
  c->ctr=c->r[12]; // 8017281C
  if (true) { c->lr=0x80172824u; dispatch(c,c->ctr); } // 80172820
  c->r[30]=c->r[30]+0x00000001u; // 80172824
  c->r[28]=c->r[28]+0x00000040u; // 80172828
  cmps(c,0,(int32_t)c->r[30],3); // 8017282C
  c->r[29]=c->r[29]+0x00000080u; // 80172830
  if (crb(c,0)) { IRQCHK(c); goto L_801727B4; } // 80172834
  c->r[3]=R32(c->r[27]+0x0000034Cu); // 80172838
  c->r[31]=0u+0x00000060u; // 8017283C
  c->r[0]=c->r[3]+0x00000001u; // 80172840
  W32(c->r[27]+0x0000034Cu,c->r[0]); // 80172844
L_80172848:;
  c->r[6]=R32(c->r[25]+0x00000000u); // 80172848
  c->r[3]=0u+0x000001E0u; // 8017284C
  c->r[5]=R32(c->r[25]+0x00000020u); // 80172850
  c->r[4]=0u+0x00000000u; // 80172854
  c->r[0]=R8(c->r[6]+0x00000349u); // 80172858
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 8017285C
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80172860
  c->r[3]=rotl(c->r[5],1)&0x00000001u; // 80172864
  c->r[0]=addc(c,~c->r[3],c->r[4],c->xer_ca); // 80172868
  c->r[27]=c->r[31]&~c->r[0]; // 8017286C
  if (!crb(c,2)) { goto L_8017287C; } // 80172870
  c->r[30]=0u+0x00000000u; // 80172874
  goto L_80172880; // 80172878
L_8017287C:;
  c->r[30]=R32(c->r[6]+0x00000394u); // 8017287C
L_80172880:;
  c->r[3]=R32(c->r[25]+0x00000028u); // 80172880
  c->r[0]=c->r[27]+c->r[3]; // 80172884
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 80172888
  if (!crb(c,1)) { goto L_80172894; } // 8017288C
  c->r[27]=c->r[30]-c->r[3]; // 80172890
L_80172894:;
  c->r[4]=(uint32_t)((int32_t)c->r[27]*(int32_t)c->r[26]); // 80172894
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172898
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8017289C
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801728A0
  if (!crb(c,1)) { goto L_801728AC; } // 801728A4
  W32(c->r[1]+0x00000014u,c->r[4]); // 801728A8
L_801728AC:;
  c->r[6]=R32(c->r[1]+0x00000014u); // 801728AC
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801728B0
  c->r[0]=c->r[0]-c->r[6]; cr0(c,c->r[0]); // 801728B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801728B8
  if (!crb(c,2)) { goto L_801728C8; } // 801728BC
  c->r[0]=0u+0x00000000u; // 801728C0
  goto L_801728D0; // 801728C4
L_801728C8:;
  c->r[0]=R32(c->r[1]+0x00000010u); // 801728C8
  c->r[0]=c->r[0]+c->r[6]; // 801728CC
L_801728D0:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 801728D0
  c->r[12]=R32(c->r[25]+0x00000054u); // 801728D4
  cmps(c,0,(int32_t)c->r[12],0); // 801728D8
  if (crb(c,2)) { goto L_801728FC; } // 801728DC
  cmps(c,0,(int32_t)c->r[27],0); // 801728E0
  if (!crb(c,1)) { goto L_801728FC; } // 801728E4
  c->r[3]=R32(c->r[25]+0x00000058u); // 801728E8
  c->r[4]=0u+0x00000000u; // 801728EC
  c->r[5]=R32(c->r[1]+0x00000010u); // 801728F0
  c->ctr=c->r[12]; // 801728F4
  if (true) { c->lr=0x801728FCu; dispatch(c,c->ctr); } // 801728F8
L_801728FC:;
  c->r[3]=R32(c->r[25]+0x00000014u); // 801728FC
  c->r[5]=c->r[1]+0x00000010u; // 80172900
  c->r[4]=0u+0x00000001u; // 80172904
  c->r[6]=R32(c->r[3]+0x00000000u); // 80172908
  c->r[12]=R32(c->r[6]+0x00000020u); // 8017290C
  c->ctr=c->r[12]; // 80172910
  if (true) { c->lr=0x80172918u; dispatch(c,c->ctr); } // 80172914
  c->r[3]=R32(c->r[25]+0x00000014u); // 80172918
  c->r[5]=c->r[1]+0x00000008u; // 8017291C
  c->r[4]=0u+0x00000000u; // 80172920
  c->r[6]=R32(c->r[3]+0x00000000u); // 80172924
  c->r[12]=R32(c->r[6]+0x0000001Cu); // 80172928
  c->ctr=c->r[12]; // 8017292C
  if (true) { c->lr=0x80172934u; dispatch(c,c->ctr); } // 80172930
  c->r[0]=R32(c->r[25]+0x00000020u); // 80172934
  c->r[6]=R32(c->r[25]+0x0000003Cu); // 80172938
  c->r[0]=c->r[0]+c->r[31]; // 8017293C
  W32(c->r[25]+0x00000020u,c->r[0]); // 80172940
  c->r[3]=R32(c->r[25]+0x00000004u); // 80172944
  cmps(c,0,(int32_t)c->r[6],0); // 80172948
  c->r[0]=R32(c->r[25]+0x00000028u); // 8017294C
  c->r[5]=R32(c->r[3]+0x00000010u); // 80172950
  c->r[4]=c->r[0]+c->r[27]; // 80172954
  c->r[3]=R32(c->r[25]+0x00000030u); // 80172958
  c->r[5]=c->r[5]+0x00000007u; // 8017295C
  c->r[0]=R32(c->r[25]+0x00000040u); // 80172960
  c->r[5]=sraw(c,c->r[5],3); // 80172964
  c->r[3]=c->r[3]+c->r[31]; // 80172968
  c->r[5]=addc(c,c->r[5],0,c->xer_ca); // 8017296C
  c->r[0]=c->r[0]+c->r[31]; // 80172970
  W32(c->r[25]+0x00000024u,c->r[5]); // 80172974
  W32(c->r[25]+0x00000028u,c->r[4]); // 80172978
  W32(c->r[25]+0x00000030u,c->r[3]); // 8017297C
  W32(c->r[25]+0x00000040u,c->r[0]); // 80172980
  if (crb(c,0)) { goto L_801729A8; } // 80172984
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[6]); // 80172988
  if (crb(c,0)) { goto L_801729A8; } // 8017298C
  c->r[12]=R32(c->r[25]+0x0000004Cu); // 80172990
  cmps(c,0,(int32_t)c->r[12],0); // 80172994
  if (crb(c,2)) { goto L_801729A8; } // 80172998
  c->r[3]=R32(c->r[25]+0x00000050u); // 8017299C
  c->ctr=c->r[12]; // 801729A0
  if (true) { c->lr=0x801729A8u; dispatch(c,c->ctr); } // 801729A4
L_801729A8:;
  c->r[0]=R32(c->r[25]+0x00000038u); // 801729A8
  cmps(c,0,(int32_t)c->r[0],0); // 801729AC
  if (!crb(c,2)) { goto L_801729C8; } // 801729B0
  c->r[0]=R32(c->r[25]+0x00000028u); // 801729B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[30]); // 801729B8
  if (crb(c,0)) { goto L_801729C8; } // 801729BC
  c->r[0]=0u+0x00000003u; // 801729C0
  W8(c->r[25]+0x00000009u,c->r[0]); // 801729C4
L_801729C8:;
  {uint32_t ea=c->r[1]+0x00000020u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801729C8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801729CC
  c->lr=c->r[0]; // 801729D0
  c->r[1]=c->r[1]+0x00000040u; // 801729D4
  return; // 801729D8
}

// AHXSJD_ExecHndl__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXSJD_OBJ
void f_801729DC(Ctx* __restrict c) {
  trace_call(0x801729DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801729DC
  c->r[0]=c->lr; // 801729E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801729E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801729E8
  c->r[31]=c->r[3]|c->r[3]; // 801729EC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801729F0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; // 801729F4
  cmps(c,0,(int32_t)c->r[0],2); // 801729F8
  if (!crb(c,2)) { goto L_80172A08; } // 801729FC
  c->lr=0x80172A04u; f_80172674(c); // 80172A00
  goto L_80172A48; // 80172A04
L_80172A08:;
  cmps(c,0,(int32_t)c->r[0],1); // 80172A08
  if (!crb(c,2)) { goto L_80172A48; } // 80172A0C
  c->r[3]=R32(c->r[3]+0x00000010u); // 80172A10
  c->r[4]=0u+0x00000001u; // 80172A14
  c->r[5]=R32(c->r[3]+0x00000000u); // 80172A18
  c->r[12]=R32(c->r[5]+0x00000024u); // 80172A1C
  c->ctr=c->r[12]; // 80172A20
  if (true) { c->lr=0x80172A28u; dispatch(c,c->ctr); } // 80172A24
  cmps(c,0,(int32_t)c->r[3],36); // 80172A28
  if (crb(c,0)) { goto L_80172A48; } // 80172A2C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80172A30
  c->lr=0x80172A38u; f_8016FF18(c); // 80172A34
  c->r[3]=R32(c->r[31]+0x00000000u); // 80172A38
  c->lr=0x80172A40u; f_80170160(c); // 80172A3C
  c->r[0]=0u+0x00000002u; // 80172A40
  W8(c->r[31]+0x00000009u,c->r[0]); // 80172A44
L_80172A48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172A48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172A4C
  c->lr=c->r[0]; // 80172A50
  c->r[1]=c->r[1]+0x00000010u; // 80172A54
  return; // 80172A58
}

// AHXSJD_GetDecNumSmpl__11CriAcAhxsjdFPQ211CriAcAhxsjd10AHXSJD_OBJ
void f_80172A5C(Ctx* __restrict c) {
  trace_call(0x80172A5Cu);
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 80172A5C
  c->r[0]=R32(c->r[3]+0x00000028u); // 80172A60
  c->r[3]=c->r[4]+c->r[0]; // 80172A64
  return; // 80172A68
}

// AHXTBL_GetAtblInfo__11CriAcAhxsjdFPPvPUl
void f_80172A6C(Ctx* __restrict c) {
  trace_call(0x80172A6Cu);
  cmps(c,0,(int32_t)c->r[3],0); // 80172A6C
  if (crb(c,2)) { goto L_80172A7C; } // 80172A70
  c->r[0]=R32(c->r[13]+0xFFFF8A88u); // 80172A74
  W32(c->r[3]+0x00000000u,c->r[0]); // 80172A78
L_80172A7C:;
  cmps(c,0,(int32_t)c->r[4],0); // 80172A7C
  if (crb(c,2)) return; // 80172A80
  c->r[0]=R32(c->r[13]+0xFFFF8A8Cu); // 80172A84
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172A88
  return; // 80172A8C
}

// AHXTBL_GetMtblInfo__11CriAcAhxsjdFPPvPUl
void f_80172A90(Ctx* __restrict c) {
  trace_call(0x80172A90u);
  cmps(c,0,(int32_t)c->r[3],0); // 80172A90
  if (crb(c,2)) { goto L_80172AA0; } // 80172A94
  c->r[0]=R32(c->r[13]+0xFFFF8A90u); // 80172A98
  W32(c->r[3]+0x00000000u,c->r[0]); // 80172A9C
L_80172AA0:;
  cmps(c,0,(int32_t)c->r[4],0); // 80172AA0
  if (crb(c,2)) return; // 80172AA4
  c->r[0]=R32(c->r[13]+0xFFFF8A94u); // 80172AA8
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172AAC
  return; // 80172AB0
}

// AHXTBL_GetFtblInfo__11CriAcAhxsjdFPPvPUl
void f_80172AB4(Ctx* __restrict c) {
  trace_call(0x80172AB4u);
  cmps(c,0,(int32_t)c->r[3],0); // 80172AB4
  if (crb(c,2)) { goto L_80172AC4; } // 80172AB8
  c->r[0]=R32(c->r[13]+0xFFFF8A98u); // 80172ABC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80172AC0
L_80172AC4:;
  cmps(c,0,(int32_t)c->r[4],0); // 80172AC4
  if (crb(c,2)) return; // 80172AC8
  c->r[0]=R32(c->r[13]+0xFFFF8A9Cu); // 80172ACC
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172AD0
  return; // 80172AD4
}

// AHXTBL_GetWtblInfo__11CriAcAhxsjdFPPvPUl
void f_80172AD8(Ctx* __restrict c) {
  trace_call(0x80172AD8u);
  cmps(c,0,(int32_t)c->r[3],0); // 80172AD8
  if (crb(c,2)) { goto L_80172AE8; } // 80172ADC
  c->r[0]=R32(c->r[13]+0xFFFF8AA0u); // 80172AE0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80172AE4
L_80172AE8:;
  cmps(c,0,(int32_t)c->r[4],0); // 80172AE8
  if (crb(c,2)) return; // 80172AEC
  c->r[0]=R32(c->r[13]+0xFFFF8AA4u); // 80172AF0
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172AF4
  return; // 80172AF8
}

// Create__15CriSrVocRegSyncFP15_criheap_structUl
void f_80172AFC(Ctx* __restrict c) {
  trace_call(0x80172AFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172AFC
  c->r[0]=c->lr; // 80172B00
  c->r[6]=0u+0x802D0000u; // 80172B04
  c->r[5]=0u+0x00000002u; // 80172B08
  W32(c->r[1]+0x00000034u,c->r[0]); // 80172B0C
  c->r[6]=c->r[6]+0x00000698u; // 80172B10
  c->r[7]=0u+0x00000004u; // 80172B14
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80172B18
  c->r[31]=c->r[1]|c->r[1]; // 80172B1C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80172B20
  c->r[30]=c->r[4]|c->r[4]; // 80172B24
  W32(c->r[1]+0x00000024u,c->r[29]); // 80172B28
  c->r[29]=c->r[3]|c->r[3]; // 80172B2C
  c->r[3]=0u+0x00000028u; // 80172B30
  c->r[4]=c->r[29]|c->r[29]; // 80172B34
  c->lr=0x80172B3Cu; f_8017BF5C(c); // 80172B38
  cmps(c,0,(int32_t)c->r[3],0); // 80172B3C
  if (crb(c,2)) { goto L_80172B88; } // 80172B40
  c->r[5]=0u+0x80330000u; // 80172B44
  c->r[4]=0u+0x00000001u; // 80172B48
  c->r[5]=c->r[5]+0x00007390u; // 80172B4C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80172B50
  c->r[0]=0u+0x00000000u; // 80172B54
  W32(c->r[3]+0x00000004u,c->r[29]); // 80172B58
  W32(c->r[3]+0x00000008u,c->r[30]); // 80172B5C
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 80172B60
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80172B64
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80172B68
  W32(c->r[3]+0x00000010u,c->r[0]); // 80172B6C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80172B70
  W32(c->r[3]+0x00000018u,c->r[0]); // 80172B74
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80172B78
  W32(c->r[3]+0x00000020u,c->r[0]); // 80172B7C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80172B80
  W32(c->r[3]+0x00000024u,c->r[0]); // 80172B84
L_80172B88:;
  cmps(c,0,(int32_t)c->r[3],0); // 80172B88
  if (!crb(c,2)) { goto L_80172BAC; } // 80172B8C
  c->r[4]=0u+0x802D0000u; // 80172B90
  c->r[3]=0u+0x00000000u; // 80172B94
  c->r[4]=c->r[4]+0x00000698u; // 80172B98
  c->r[5]=0u+0xFFFFFFFDu; // 80172B9C
  c->r[4]=c->r[4]+0x0000000Bu; // 80172BA0
  c->lr=0x80172BA8u; f_8017968C(c); // 80172BA4
  c->r[3]=0u+0x00000000u; // 80172BA8
L_80172BAC:;
  c->r[10]=c->r[31]|c->r[31]; // 80172BAC
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80172BB0
  c->r[30]=R32(c->r[10]+0x00000028u); // 80172BB4
  c->r[29]=R32(c->r[10]+0x00000024u); // 80172BB8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80172BBC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80172BC0
  c->r[1]=c->r[10]|c->r[10]; // 80172BC4
  c->lr=c->r[0]; // 80172BC8
  return; // 80172BCC
}

// Create__15CriSrVocRegSyncFP15_criheap_structUlR15CriSrVocRegSync
void f_80172BD0(Ctx* __restrict c) {
  trace_call(0x80172BD0u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172BD0
  c->r[0]=c->lr; // 80172BD4
  c->r[6]=0u+0x802D0000u; // 80172BD8
  c->r[7]=0u+0x00000004u; // 80172BDC
  W32(c->r[1]+0x00000074u,c->r[0]); // 80172BE0
  c->r[6]=c->r[6]+0x00000698u; // 80172BE4
  {uint32_t ea=c->r[1]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80172BE8
  c->r[27]=c->r[3]|c->r[3]; // 80172BEC
  c->r[28]=c->r[4]|c->r[4]; // 80172BF0
  c->r[29]=c->r[5]|c->r[5]; // 80172BF4
  c->r[31]=c->r[1]|c->r[1]; // 80172BF8
  c->r[4]=c->r[27]|c->r[27]; // 80172BFC
  c->r[3]=0u+0x00000028u; // 80172C00
  c->r[5]=0u+0x00000002u; // 80172C04
  c->lr=0x80172C0Cu; f_8017BF5C(c); // 80172C08
  cmps(c,0,(int32_t)c->r[3],0); // 80172C0C
  c->r[30]=c->r[3]|c->r[3]; // 80172C10
  if (crb(c,2)) { goto L_80172C5C; } // 80172C14
  c->r[5]=0u+0x80330000u; // 80172C18
  c->r[4]=0u+0x00000001u; // 80172C1C
  c->r[5]=c->r[5]+0x00007390u; // 80172C20
  W32(c->r[3]+0x00000000u,c->r[5]); // 80172C24
  c->r[0]=0u+0x00000000u; // 80172C28
  W32(c->r[3]+0x00000004u,c->r[27]); // 80172C2C
  W32(c->r[3]+0x00000008u,c->r[28]); // 80172C30
  W16(c->r[3]+0x0000000Cu,c->r[4]); // 80172C34
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80172C38
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 80172C3C
  W32(c->r[3]+0x00000010u,c->r[0]); // 80172C40
  W32(c->r[3]+0x00000014u,c->r[0]); // 80172C44
  W32(c->r[3]+0x00000018u,c->r[0]); // 80172C48
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80172C4C
  W32(c->r[3]+0x00000020u,c->r[0]); // 80172C50
  W32(c->r[31]+0x00000054u,c->r[1]); // 80172C54
  W32(c->r[3]+0x00000024u,c->r[0]); // 80172C58
L_80172C5C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80172C5C
  if (!crb(c,2)) { goto L_80172C84; } // 80172C60
  c->r[4]=0u+0x802D0000u; // 80172C64
  c->r[3]=0u+0x00000000u; // 80172C68
  c->r[4]=c->r[4]+0x00000698u; // 80172C6C
  c->r[5]=0u+0xFFFFFFFDu; // 80172C70
  c->r[4]=c->r[4]+0x00000015u; // 80172C74
  c->lr=0x80172C7Cu; f_8017968C(c); // 80172C78
  c->r[3]=0u+0x00000000u; // 80172C7C
  goto L_80172E4C; // 80172C80
L_80172C84:;
  c->r[3]=c->r[30]|c->r[30]; // 80172C84
  c->r[4]=c->r[29]|c->r[29]; // 80172C88
  c->lr=0x80172C90u; f_801733BC(c); // 80172C8C
  cmps(c,0,(int32_t)c->r[3],0); // 80172C90
  if (!crb(c,2)) { goto L_80172E48; } // 80172C94
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000000Cu); // 80172C98
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80172C9C
  W16(c->r[30]+0x0000000Cu,c->r[0]); // 80172CA0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 80172CA4
  if (crb(c,1)) { goto L_80172E40; } // 80172CA8
  c->r[0]=R32(c->r[30]+0x00000010u); // 80172CAC
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80172CB0
  W32(c->r[31]+0x00000034u,c->r[0]); // 80172CB4
  W32(c->r[31]+0x0000003Cu,c->r[0]); // 80172CB8
  goto L_80172D58; // 80172CBC
L_80172CC0:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80172CC0
  c->r[0]=R32(c->r[30]+0x00000010u); // 80172CC4
  W32(c->r[31]+0x0000002Cu,c->r[3]); // 80172CC8
  cmpu(c,0,c->r[3],c->r[0]); // 80172CCC
  if (!crb(c,2)) { goto L_80172CDC; } // 80172CD0
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172CD4
  W32(c->r[30]+0x00000010u,c->r[0]); // 80172CD8
L_80172CDC:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80172CDC
  c->r[0]=R32(c->r[30]+0x00000014u); // 80172CE0
  cmpu(c,0,c->r[3],c->r[0]); // 80172CE4
  if (!crb(c,2)) { goto L_80172CF8; } // 80172CE8
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80172CEC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172CF0
  W32(c->r[30]+0x00000014u,c->r[0]); // 80172CF4
L_80172CF8:;
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80172CF8
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 80172CFC
  c->r[5]=R32(c->r[3]+0x00000000u); // 80172D00
  W32(c->r[31]+0x00000014u,c->r[3]); // 80172D04
  cmps(c,0,(int32_t)c->r[5],0); // 80172D08
  c->r[29]=R32(c->r[4]+0x00000004u); // 80172D0C
  if (crb(c,2)) { goto L_80172D1C; } // 80172D10
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172D14
  W32(c->r[5]+0x00000004u,c->r[0]); // 80172D18
L_80172D1C:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80172D1C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80172D20
  cmps(c,0,(int32_t)c->r[4],0); // 80172D24
  if (crb(c,2)) { goto L_80172D34; } // 80172D28
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172D2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172D30
L_80172D34:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80172D34
  c->r[4]=0u+0x0000000Cu; // 80172D38
  c->lr=0x80172D40u; f_8017BFE8(c); // 80172D3C
  c->r[3]=R32(c->r[30]+0x00000018u); // 80172D40
  W32(c->r[31]+0x00000018u,c->r[29]); // 80172D44
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80172D48
  W32(c->r[30]+0x00000018u,c->r[0]); // 80172D4C
  W32(c->r[31]+0x00000030u,c->r[29]); // 80172D50
  W32(c->r[31]+0x0000003Cu,c->r[29]); // 80172D54
L_80172D58:;
  c->r[0]=R32(c->r[31]+0x0000003Cu); // 80172D58
  cmps(c,0,(int32_t)c->r[0],0); // 80172D5C
  if (!crb(c,2)) { IRQCHK(c); goto L_80172CC0; } // 80172D60
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80172D64
  W32(c->r[31]+0x00000010u,c->r[0]); // 80172D68
  W32(c->r[31]+0x00000028u,c->r[0]); // 80172D6C
  W32(c->r[31]+0x00000038u,c->r[0]); // 80172D70
  goto L_80172E10; // 80172D74
L_80172D78:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 80172D78
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80172D7C
  W32(c->r[31]+0x00000020u,c->r[3]); // 80172D80
  cmpu(c,0,c->r[3],c->r[0]); // 80172D84
  if (!crb(c,2)) { goto L_80172D94; } // 80172D88
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172D8C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80172D90
L_80172D94:;
  c->r[3]=R32(c->r[31]+0x00000020u); // 80172D94
  c->r[0]=R32(c->r[30]+0x00000020u); // 80172D98
  cmpu(c,0,c->r[3],c->r[0]); // 80172D9C
  if (!crb(c,2)) { goto L_80172DB0; } // 80172DA0
  c->r[3]=R32(c->r[31]+0x00000020u); // 80172DA4
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172DA8
  W32(c->r[30]+0x00000020u,c->r[0]); // 80172DAC
L_80172DB0:;
  c->r[3]=R32(c->r[31]+0x00000038u); // 80172DB0
  c->r[4]=R32(c->r[31]+0x00000020u); // 80172DB4
  c->r[5]=R32(c->r[3]+0x00000000u); // 80172DB8
  W32(c->r[31]+0x00000008u,c->r[3]); // 80172DBC
  cmps(c,0,(int32_t)c->r[5],0); // 80172DC0
  c->r[29]=R32(c->r[4]+0x00000004u); // 80172DC4
  if (crb(c,2)) { goto L_80172DD4; } // 80172DC8
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172DCC
  W32(c->r[5]+0x00000004u,c->r[0]); // 80172DD0
L_80172DD4:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80172DD4
  c->r[4]=R32(c->r[3]+0x00000004u); // 80172DD8
  cmps(c,0,(int32_t)c->r[4],0); // 80172DDC
  if (crb(c,2)) { goto L_80172DEC; } // 80172DE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172DE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172DE8
L_80172DEC:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80172DEC
  c->r[4]=0u+0x0000000Cu; // 80172DF0
  c->lr=0x80172DF8u; f_8017BFE8(c); // 80172DF4
  c->r[3]=R32(c->r[30]+0x00000024u); // 80172DF8
  W32(c->r[31]+0x0000000Cu,c->r[29]); // 80172DFC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80172E00
  W32(c->r[30]+0x00000024u,c->r[0]); // 80172E04
  W32(c->r[31]+0x00000024u,c->r[29]); // 80172E08
  W32(c->r[31]+0x00000038u,c->r[29]); // 80172E0C
L_80172E10:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 80172E10
  cmps(c,0,(int32_t)c->r[0],0); // 80172E14
  if (!crb(c,2)) { IRQCHK(c); goto L_80172D78; } // 80172E18
  cmps(c,0,(int32_t)c->r[30],0); // 80172E1C
  if (crb(c,2)) { goto L_80172E40; } // 80172E20
  c->r[12]=R32(c->r[30]+0x00000000u); // 80172E24
  c->r[0]=0u+0x00000001u; // 80172E28
  c->r[3]=c->r[30]|c->r[30]; // 80172E2C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80172E30
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80172E34
  c->ctr=c->r[12]; // 80172E38
  if (true) { c->lr=0x80172E40u; dispatch(c,c->ctr); } // 80172E3C
L_80172E40:;
  c->r[3]=0u+0x00000000u; // 80172E40
  goto L_80172E4C; // 80172E44
L_80172E48:;
  c->r[3]=c->r[30]|c->r[30]; // 80172E48
L_80172E4C:;
  c->r[10]=c->r[31]|c->r[31]; // 80172E4C
  {uint32_t ea=c->r[10]+0x0000005Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80172E50
  c->r[10]=R32(c->r[1]+0x00000000u); // 80172E54
  c->r[0]=R32(c->r[10]+0x00000004u); // 80172E58
  c->r[1]=c->r[10]|c->r[10]; // 80172E5C
  c->lr=c->r[0]; // 80172E60
  return; // 80172E64
}

// Release__15CriSrVocRegSyncFv
void f_80172E68(Ctx* __restrict c) {
  trace_call(0x80172E68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172E68
  c->r[0]=c->lr; // 80172E6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172E70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172E74
  c->r[31]=c->r[3]|c->r[3]; // 80172E78
  W32(c->r[1]+0x00000008u,c->r[30]); // 80172E7C
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[3]+0x0000000Cu); // 80172E80
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80172E84
  W16(c->r[3]+0x0000000Cu,c->r[0]); // 80172E88
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[0]; cr0(c,c->r[0]); // 80172E8C
  if (crb(c,1)) { goto L_80172FA4; } // 80172E90
  c->r[3]=R32(c->r[3]+0x00000010u); // 80172E94
  goto L_80172F04; // 80172E98
L_80172E9C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 80172E9C
  cmpu(c,0,c->r[3],c->r[0]); // 80172EA0
  if (!crb(c,2)) { goto L_80172EB0; } // 80172EA4
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172EA8
  W32(c->r[31]+0x00000010u,c->r[0]); // 80172EAC
L_80172EB0:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80172EB0
  cmpu(c,0,c->r[3],c->r[0]); // 80172EB4
  if (!crb(c,2)) { goto L_80172EC4; } // 80172EB8
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172EBC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80172EC0
L_80172EC4:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80172EC4
  c->r[30]=R32(c->r[3]+0x00000004u); // 80172EC8
  cmps(c,0,(int32_t)c->r[4],0); // 80172ECC
  if (crb(c,2)) { goto L_80172ED8; } // 80172ED0
  W32(c->r[4]+0x00000004u,c->r[30]); // 80172ED4
L_80172ED8:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80172ED8
  cmps(c,0,(int32_t)c->r[4],0); // 80172EDC
  if (crb(c,2)) { goto L_80172EEC; } // 80172EE0
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172EE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172EE8
L_80172EEC:;
  c->r[4]=0u+0x0000000Cu; // 80172EEC
  c->lr=0x80172EF4u; f_8017BFE8(c); // 80172EF0
  c->r[4]=R32(c->r[31]+0x00000018u); // 80172EF4
  c->r[3]=c->r[30]|c->r[30]; // 80172EF8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80172EFC
  W32(c->r[31]+0x00000018u,c->r[0]); // 80172F00
L_80172F04:;
  cmps(c,0,(int32_t)c->r[3],0); // 80172F04
  if (!crb(c,2)) { IRQCHK(c); goto L_80172E9C; } // 80172F08
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80172F0C
  goto L_80172F7C; // 80172F10
L_80172F14:;
  c->r[0]=R32(c->r[31]+0x0000001Cu); // 80172F14
  cmpu(c,0,c->r[3],c->r[0]); // 80172F18
  if (!crb(c,2)) { goto L_80172F28; } // 80172F1C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80172F20
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80172F24
L_80172F28:;
  c->r[0]=R32(c->r[31]+0x00000020u); // 80172F28
  cmpu(c,0,c->r[3],c->r[0]); // 80172F2C
  if (!crb(c,2)) { goto L_80172F3C; } // 80172F30
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172F34
  W32(c->r[31]+0x00000020u,c->r[0]); // 80172F38
L_80172F3C:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80172F3C
  c->r[30]=R32(c->r[3]+0x00000004u); // 80172F40
  cmps(c,0,(int32_t)c->r[4],0); // 80172F44
  if (crb(c,2)) { goto L_80172F50; } // 80172F48
  W32(c->r[4]+0x00000004u,c->r[30]); // 80172F4C
L_80172F50:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 80172F50
  cmps(c,0,(int32_t)c->r[4],0); // 80172F54
  if (crb(c,2)) { goto L_80172F64; } // 80172F58
  c->r[0]=R32(c->r[3]+0x00000000u); // 80172F5C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80172F60
L_80172F64:;
  c->r[4]=0u+0x0000000Cu; // 80172F64
  c->lr=0x80172F6Cu; f_8017BFE8(c); // 80172F68
  c->r[4]=R32(c->r[31]+0x00000024u); // 80172F6C
  c->r[3]=c->r[30]|c->r[30]; // 80172F70
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80172F74
  W32(c->r[31]+0x00000024u,c->r[0]); // 80172F78
L_80172F7C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80172F7C
  if (!crb(c,2)) { IRQCHK(c); goto L_80172F14; } // 80172F80
  cmps(c,0,(int32_t)c->r[31],0); // 80172F84
  if (crb(c,2)) { goto L_80172FA4; } // 80172F88
  c->r[12]=R32(c->r[31]+0x00000000u); // 80172F8C
  c->r[3]=c->r[31]|c->r[31]; // 80172F90
  c->r[4]=0u+0x00000001u; // 80172F94
  c->r[12]=R32(c->r[12]+0x00000008u); // 80172F98
  c->ctr=c->r[12]; // 80172F9C
  if (true) { c->lr=0x80172FA4u; dispatch(c,c->ctr); } // 80172FA0
L_80172FA4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172FA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80172FAC
  c->lr=c->r[0]; // 80172FB0
  c->r[1]=c->r[1]+0x00000010u; // 80172FB4
  return; // 80172FB8
}

// __dt__15CriSrVocRegSyncFv
void f_80172FBC(Ctx* __restrict c) {
  trace_call(0x80172FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80172FBC
  c->r[0]=c->lr; // 80172FC0
  cmps(c,0,(int32_t)c->r[3],0); // 80172FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80172FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80172FCC
  c->r[31]=c->r[3]|c->r[3]; // 80172FD0
  if (crb(c,2)) { goto L_80172FE8; } // 80172FD4
  cmps(c,0,(int32_t)c->r[4],0); // 80172FD8
  if (!crb(c,1)) { goto L_80172FE8; } // 80172FDC
  c->r[4]=0u+0x00000028u; // 80172FE0
  c->lr=0x80172FE8u; f_8017BFE8(c); // 80172FE4
L_80172FE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80172FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80172FEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80172FF0
  c->lr=c->r[0]; // 80172FF4
  c->r[1]=c->r[1]+0x00000010u; // 80172FF8
  return; // 80172FFC
}

// Register__15CriSrVocRegSyncFP18CriSrVoiceRegSlave
void f_80173000(Ctx* __restrict c) {
  trace_call(0x80173000u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173000
  c->r[0]=c->lr; // 80173004
  W32(c->r[1]+0x00000054u,c->r[0]); // 80173008
  W32(c->r[1]+0x0000004Cu,c->r[31]); // 8017300C
  c->r[31]=c->r[1]|c->r[1]; // 80173010
  W32(c->r[1]+0x00000048u,c->r[30]); // 80173014
  W32(c->r[1]+0x00000044u,c->r[29]); // 80173018
  c->r[29]=c->r[4]|c->r[4]; // 8017301C
  W32(c->r[1]+0x00000040u,c->r[28]); // 80173020
  c->r[28]=c->r[3]|c->r[3]; // 80173024
  c->r[30]=R32(c->r[3]+0x00000020u); // 80173028
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017302C
  cmps(c,0,(int32_t)c->r[30],0); // 80173030
  if (crb(c,2)) { goto L_801730C8; } // 80173034
  c->r[6]=0u+0x80330000u; // 80173038
  c->r[4]=c->r[0]|c->r[0]; // 8017303C
  c->r[6]=c->r[6]+0x000073B4u; // 80173040
  c->r[3]=0u+0x0000000Cu; // 80173044
  c->r[5]=0u+0x00000002u; // 80173048
  c->r[7]=0u+0x00000004u; // 8017304C
  c->lr=0x80173054u; f_8017BF5C(c); // 80173050
  cmps(c,0,(int32_t)c->r[3],0); // 80173054
  if (crb(c,2)) { goto L_80173070; } // 80173058
  c->r[0]=0u+0x00000000u; // 8017305C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80173060
  W32(c->r[3]+0x00000004u,c->r[0]); // 80173064
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80173068
  W32(c->r[3]+0x00000008u,c->r[29]); // 8017306C
L_80173070:;
  cmps(c,0,(int32_t)c->r[3],0); // 80173070
  if (!crb(c,2)) { goto L_80173090; } // 80173074
  c->r[4]=0u+0x80330000u; // 80173078
  c->r[3]=0u+0x00000000u; // 8017307C
  c->r[4]=c->r[4]+0x000073A8u; // 80173080
  c->r[5]=0u+0xFFFFFFFDu; // 80173084
  c->lr=0x8017308Cu; f_8017968C(c); // 80173088
  c->r[3]=0u+0x00000000u; // 8017308C
L_80173090:;
  cmps(c,0,(int32_t)c->r[3],0); // 80173090
  if (!crb(c,2)) { goto L_801730A0; } // 80173094
  c->r[3]=0u+0x00000000u; // 80173098
  goto L_801730B0; // 8017309C
L_801730A0:;
  W32(c->r[3]+0x00000000u,c->r[30]); // 801730A0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801730A4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801730A8
  W32(c->r[30]+0x00000004u,c->r[3]); // 801730AC
L_801730B0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801730B0
  if (!crb(c,2)) { goto L_801730C0; } // 801730B4
  c->r[4]=0u+0x00000000u; // 801730B8
  goto L_80173148; // 801730BC
L_801730C0:;
  W32(c->r[28]+0x00000020u,c->r[3]); // 801730C0
  goto L_80173138; // 801730C4
L_801730C8:;
  c->r[6]=0u+0x80330000u; // 801730C8
  c->r[4]=c->r[0]|c->r[0]; // 801730CC
  c->r[6]=c->r[6]+0x000073B4u; // 801730D0
  c->r[3]=0u+0x0000000Cu; // 801730D4
  c->r[5]=0u+0x00000002u; // 801730D8
  c->r[7]=0u+0x00000004u; // 801730DC
  c->lr=0x801730E4u; f_8017BF5C(c); // 801730E0
  cmps(c,0,(int32_t)c->r[3],0); // 801730E4
  if (crb(c,2)) { goto L_80173100; } // 801730E8
  c->r[0]=0u+0x00000000u; // 801730EC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801730F0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801730F4
  W32(c->r[31]+0x00000034u,c->r[1]); // 801730F8
  W32(c->r[3]+0x00000008u,c->r[29]); // 801730FC
L_80173100:;
  cmps(c,0,(int32_t)c->r[3],0); // 80173100
  if (!crb(c,2)) { goto L_80173120; } // 80173104
  c->r[4]=0u+0x80330000u; // 80173108
  c->r[3]=0u+0x00000000u; // 8017310C
  c->r[4]=c->r[4]+0x000073A8u; // 80173110
  c->r[5]=0u+0xFFFFFFFDu; // 80173114
  c->lr=0x8017311Cu; f_8017968C(c); // 80173118
  c->r[3]=0u+0x00000000u; // 8017311C
L_80173120:;
  cmps(c,0,(int32_t)c->r[3],0); // 80173120
  W32(c->r[28]+0x00000020u,c->r[3]); // 80173124
  if (!crb(c,2)) { goto L_80173134; } // 80173128
  c->r[4]=0u+0x00000000u; // 8017312C
  goto L_80173148; // 80173130
L_80173134:;
  W32(c->r[28]+0x0000001Cu,c->r[3]); // 80173134
L_80173138:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 80173138
  c->r[4]=0u+0x00000001u; // 8017313C
  c->r[0]=c->r[3]+0x00000001u; // 80173140
  W32(c->r[28]+0x00000024u,c->r[0]); // 80173144
L_80173148:;
  cmps(c,0,(int32_t)c->r[4],0); // 80173148
  if (!crb(c,2)) { goto L_80173158; } // 8017314C
  c->r[3]=0u+0x00000000u; // 80173150
  goto L_80173168; // 80173154
L_80173158:;
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[28]+0x0000000Cu); // 80173158
  c->r[3]=0u+0x00000001u; // 8017315C
  c->r[0]=c->r[4]+0x00000001u; // 80173160
  W16(c->r[28]+0x0000000Cu,c->r[0]); // 80173164
L_80173168:;
  c->r[10]=c->r[31]|c->r[31]; // 80173168
  c->r[31]=R32(c->r[31]+0x0000004Cu); // 8017316C
  c->r[30]=R32(c->r[10]+0x00000048u); // 80173170
  c->r[29]=R32(c->r[10]+0x00000044u); // 80173174
  c->r[28]=R32(c->r[10]+0x00000040u); // 80173178
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017317C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80173180
  c->r[1]=c->r[10]|c->r[10]; // 80173184
  c->lr=c->r[0]; // 80173188
  return; // 8017318C
}

// Invalidate__15CriSrVocRegSyncFP18CriSrVoiceRegSlave
void f_80173190(Ctx* __restrict c) {
  trace_call(0x80173190u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173190
  c->r[0]=c->lr; // 80173194
  W32(c->r[1]+0x00000024u,c->r[0]); // 80173198
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017319C
  c->r[31]=c->r[4]|c->r[4]; // 801731A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801731A4
  c->r[30]=c->r[3]|c->r[3]; // 801731A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801731AC
  c->r[5]=R32(c->r[3]+0x00000010u); // 801731B0
  goto L_80173244; // 801731B4
L_801731B8:;
  c->r[0]=R32(c->r[5]+0x00000008u); // 801731B8
  cmpu(c,0,c->r[0],c->r[31]); // 801731BC
  if (!crb(c,2)) { goto L_80173240; } // 801731C0
  c->r[0]=R32(c->r[30]+0x00000010u); // 801731C4
  cmpu(c,0,c->r[5],c->r[0]); // 801731C8
  if (!crb(c,2)) { goto L_801731D8; } // 801731CC
  c->r[0]=R32(c->r[5]+0x00000004u); // 801731D0
  W32(c->r[30]+0x00000010u,c->r[0]); // 801731D4
L_801731D8:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 801731D8
  cmpu(c,0,c->r[5],c->r[0]); // 801731DC
  if (!crb(c,2)) { goto L_801731EC; } // 801731E0
  c->r[0]=R32(c->r[5]+0x00000000u); // 801731E4
  W32(c->r[30]+0x00000014u,c->r[0]); // 801731E8
L_801731EC:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 801731EC
  c->r[29]=R32(c->r[5]+0x00000004u); // 801731F0
  cmps(c,0,(int32_t)c->r[3],0); // 801731F4
  if (crb(c,2)) { goto L_80173200; } // 801731F8
  W32(c->r[3]+0x00000004u,c->r[29]); // 801731FC
L_80173200:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 80173200
  cmps(c,0,(int32_t)c->r[3],0); // 80173204
  if (crb(c,2)) { goto L_80173214; } // 80173208
  c->r[0]=R32(c->r[5]+0x00000000u); // 8017320C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80173210
L_80173214:;
  c->r[3]=c->r[5]|c->r[5]; // 80173214
  c->r[4]=0u+0x0000000Cu; // 80173218
  c->lr=0x80173220u; f_8017BFE8(c); // 8017321C
  c->r[4]=R32(c->r[30]+0x00000018u); // 80173220
  c->r[5]=c->r[29]|c->r[29]; // 80173224
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000000Cu); // 80173228
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 8017322C
  W32(c->r[30]+0x00000018u,c->r[0]); // 80173230
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80173234
  W16(c->r[30]+0x0000000Cu,c->r[0]); // 80173238
  goto L_80173244; // 8017323C
L_80173240:;
  c->r[5]=R32(c->r[5]+0x00000004u); // 80173240
L_80173244:;
  cmps(c,0,(int32_t)c->r[5],0); // 80173244
  if (!crb(c,2)) { IRQCHK(c); goto L_801731B8; } // 80173248
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 8017324C
  goto L_801732DC; // 80173250
L_80173254:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80173254
  cmpu(c,0,c->r[0],c->r[31]); // 80173258
  if (!crb(c,2)) { goto L_801732D8; } // 8017325C
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 80173260
  cmpu(c,0,c->r[3],c->r[0]); // 80173264
  if (!crb(c,2)) { goto L_80173274; } // 80173268
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017326C
  W32(c->r[30]+0x0000001Cu,c->r[0]); // 80173270
L_80173274:;
  c->r[0]=R32(c->r[30]+0x00000020u); // 80173274
  cmpu(c,0,c->r[3],c->r[0]); // 80173278
  if (!crb(c,2)) { goto L_80173288; } // 8017327C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80173280
  W32(c->r[30]+0x00000020u,c->r[0]); // 80173284
L_80173288:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80173288
  c->r[29]=R32(c->r[3]+0x00000004u); // 8017328C
  cmps(c,0,(int32_t)c->r[4],0); // 80173290
  if (crb(c,2)) { goto L_8017329C; } // 80173294
  W32(c->r[4]+0x00000004u,c->r[29]); // 80173298
L_8017329C:;
  c->r[4]=R32(c->r[3]+0x00000004u); // 8017329C
  cmps(c,0,(int32_t)c->r[4],0); // 801732A0
  if (crb(c,2)) { goto L_801732B0; } // 801732A4
  c->r[0]=R32(c->r[3]+0x00000000u); // 801732A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801732AC
L_801732B0:;
  c->r[4]=0u+0x0000000Cu; // 801732B0
  c->lr=0x801732B8u; f_8017BFE8(c); // 801732B4
  c->r[5]=R32(c->r[30]+0x00000024u); // 801732B8
  c->r[3]=c->r[29]|c->r[29]; // 801732BC
  c->r[4]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000000Cu); // 801732C0
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 801732C4
  W32(c->r[30]+0x00000024u,c->r[0]); // 801732C8
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801732CC
  W16(c->r[30]+0x0000000Cu,c->r[0]); // 801732D0
  goto L_801732DC; // 801732D4
L_801732D8:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 801732D8
L_801732DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801732DC
  if (!crb(c,2)) { IRQCHK(c); goto L_80173254; } // 801732E0
  c->r[0]=R32(c->r[1]+0x00000024u); // 801732E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801732E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801732EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801732F0
  c->lr=c->r[0]; // 801732F4
  c->r[1]=c->r[1]+0x00000020u; // 801732F8
  return; // 801732FC
}

// Activate__15CriSrVocRegSyncFv
void f_80173300(Ctx* __restrict c) {
  trace_call(0x80173300u);
  c->r[0]=0u+0x00000001u; // 80173300
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 80173304
  return; // 80173308
}

// IsSynchronized__15CriSrVocRegSyncCFv
void f_8017330C(Ctx* __restrict c) {
  trace_call(0x8017330Cu);
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 8017330C
  return; // 80173310
}

// IsAllInvalidated__15CriSrVocRegSyncCFv
void f_80173314(Ctx* __restrict c) {
  trace_call(0x80173314u);
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 80173314
  cmpu(c,0,c->r[0],0x00000001u); // 80173318
  if (!crb(c,2)) { goto L_80173340; } // 8017331C
  c->r[0]=R32(c->r[3]+0x00000024u); // 80173320
  cmps(c,0,(int32_t)c->r[0],0); // 80173324
  if (!crb(c,2)) { goto L_80173340; } // 80173328
  c->r[0]=R32(c->r[3]+0x00000018u); // 8017332C
  cmps(c,0,(int32_t)c->r[0],0); // 80173330
  if (!crb(c,2)) { goto L_80173340; } // 80173334
  c->r[3]=0u+0x00000001u; // 80173338
  return; // 8017333C
L_80173340:;
  c->r[3]=0u+0x00000000u; // 80173340
  return; // 80173344
}

// Execute__15CriSrVocRegSyncFv
void f_80173348(Ctx* __restrict c) {
  trace_call(0x80173348u);
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 80173348
  cmps(c,0,(int32_t)c->r[0],0); // 8017334C
  if (crb(c,2)) return; // 80173350
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 80173354
  cmpu(c,0,c->r[0],0x00000001u); // 80173358
  if (crb(c,2)) return; // 8017335C
  c->r[5]=R32(c->r[3]+0x0000001Cu); // 80173360
  goto L_8017337C; // 80173364
L_80173368:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 80173368
  c->r[0]=R32(c->r[4]+0x00000048u); // 8017336C
  cmps(c,0,(int32_t)c->r[0],3); // 80173370
  if (!crb(c,2)) return; // 80173374
  c->r[5]=R32(c->r[5]+0x00000004u); // 80173378
L_8017337C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8017337C
  if (!crb(c,2)) { IRQCHK(c); goto L_80173368; } // 80173380
  c->r[5]=R32(c->r[3]+0x00000010u); // 80173384
  goto L_801733A0; // 80173388
L_8017338C:;
  c->r[4]=R32(c->r[5]+0x00000008u); // 8017338C
  c->r[0]=R32(c->r[4]+0x0000003Cu); // 80173390
  cmps(c,0,(int32_t)c->r[0],0); // 80173394
  if (!crb(c,2)) return; // 80173398
  c->r[5]=R32(c->r[5]+0x00000004u); // 8017339C
L_801733A0:;
  cmps(c,0,(int32_t)c->r[5],0); // 801733A0
  if (!crb(c,2)) { IRQCHK(c); goto L_8017338C; } // 801733A4
  c->r[0]=0u+0x00000001u; // 801733A8
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 801733AC
  return; // 801733B0
}

// GetId__15CriSrVocRegSyncCFv
void f_801733B4(Ctx* __restrict c) {
  trace_call(0x801733B4u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 801733B4
  return; // 801733B8
}

// RegisterCausersFromExistingSync__15CriSrVocRegSyncFR15CriSrVocRegSync
void f_801733BC(Ctx* __restrict c) {
  trace_call(0x801733BCu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801733BC
  c->r[0]=c->lr; // 801733C0
  W32(c->r[1]+0x00000074u,c->r[0]); // 801733C4
  {uint32_t ea=c->r[1]+0x00000058u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801733C8
  c->r[31]=c->r[1]|c->r[1]; // 801733CC
  c->r[30]=c->r[3]|c->r[3]; // 801733D0
  c->r[26]=c->r[4]|c->r[4]; // 801733D4
  c->r[28]=R32(c->r[4]+0x0000001Cu); // 801733D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801733DC
  W32(c->r[1]+0x0000001Cu,c->r[28]); // 801733E0
  goto L_801735BC; // 801733E4
L_801733E8:;
  c->r[3]=R32(c->r[28]+0x00000008u); // 801733E8
  c->r[4]=c->r[30]|c->r[30]; // 801733EC
  c->lr=0x801733F4u; f_8016BF48(c); // 801733F0
  cmps(c,0,(int32_t)c->r[3],0); // 801733F4
  if (!crb(c,2)) { goto L_80173438; } // 801733F8
  c->r[28]=R32(c->r[26]+0x0000001Cu); // 801733FC
  W32(c->r[31]+0x0000000Cu,c->r[28]); // 80173400
  W32(c->r[31]+0x00000018u,c->r[28]); // 80173404
  goto L_80173428; // 80173408
L_8017340C:;
  c->r[4]=R32(c->r[28]+0x00000008u); // 8017340C
  c->r[3]=c->r[30]|c->r[30]; // 80173410
  c->lr=0x80173418u; f_80173190(c); // 80173414
  c->r[3]=R32(c->r[28]+0x00000008u); // 80173418
  c->r[4]=c->r[30]|c->r[30]; // 8017341C
  c->lr=0x80173424u; f_8016C0C4(c); // 80173420
  c->r[28]=R32(c->r[28]+0x00000004u); // 80173424
L_80173428:;
  cmps(c,0,(int32_t)c->r[28],0); // 80173428
  if (!crb(c,2)) { IRQCHK(c); goto L_8017340C; } // 8017342C
  c->r[3]=0u+0x00000000u; // 80173430
  goto L_801735C8; // 80173434
L_80173438:;
  c->r[27]=R32(c->r[30]+0x00000014u); // 80173438
  c->r[29]=R32(c->r[28]+0x00000008u); // 8017343C
  cmps(c,0,(int32_t)c->r[27],0); // 80173440
  c->r[4]=R32(c->r[30]+0x00000004u); // 80173444
  if (crb(c,2)) { goto L_801734D8; } // 80173448
  c->r[6]=0u+0x80330000u; // 8017344C
  c->r[3]=0u+0x0000000Cu; // 80173450
  c->r[6]=c->r[6]+0x000073B4u; // 80173454
  c->r[5]=0u+0x00000002u; // 80173458
  c->r[7]=0u+0x00000004u; // 8017345C
  c->lr=0x80173464u; f_8017BF5C(c); // 80173460
  cmps(c,0,(int32_t)c->r[3],0); // 80173464
  if (crb(c,2)) { goto L_80173480; } // 80173468
  c->r[0]=0u+0x00000000u; // 8017346C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80173470
  W32(c->r[3]+0x00000004u,c->r[0]); // 80173474
  W32(c->r[31]+0x0000004Cu,c->r[1]); // 80173478
  W32(c->r[3]+0x00000008u,c->r[29]); // 8017347C
L_80173480:;
  cmps(c,0,(int32_t)c->r[3],0); // 80173480
  if (!crb(c,2)) { goto L_801734A0; } // 80173484
  c->r[4]=0u+0x80330000u; // 80173488
  c->r[3]=0u+0x00000000u; // 8017348C
  c->r[4]=c->r[4]+0x000073A8u; // 80173490
  c->r[5]=0u+0xFFFFFFFDu; // 80173494
  c->lr=0x8017349Cu; f_8017968C(c); // 80173498
  c->r[3]=0u+0x00000000u; // 8017349C
L_801734A0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801734A0
  if (!crb(c,2)) { goto L_801734B0; } // 801734A4
  c->r[3]=0u+0x00000000u; // 801734A8
  goto L_801734C0; // 801734AC
L_801734B0:;
  W32(c->r[3]+0x00000000u,c->r[27]); // 801734B0
  c->r[0]=R32(c->r[27]+0x00000004u); // 801734B4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801734B8
  W32(c->r[27]+0x00000004u,c->r[3]); // 801734BC
L_801734C0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801734C0
  if (!crb(c,2)) { goto L_801734D0; } // 801734C4
  c->r[4]=0u+0x00000000u; // 801734C8
  goto L_80173554; // 801734CC
L_801734D0:;
  W32(c->r[30]+0x00000014u,c->r[3]); // 801734D0
  goto L_80173544; // 801734D4
L_801734D8:;
  c->r[6]=0u+0x80330000u; // 801734D8
  c->r[3]=0u+0x0000000Cu; // 801734DC
  c->r[6]=c->r[6]+0x000073B4u; // 801734E0
  c->r[5]=0u+0x00000002u; // 801734E4
  c->r[7]=0u+0x00000004u; // 801734E8
  c->lr=0x801734F0u; f_8017BF5C(c); // 801734EC
  cmps(c,0,(int32_t)c->r[3],0); // 801734F0
  if (crb(c,2)) { goto L_8017350C; } // 801734F4
  c->r[0]=0u+0x00000000u; // 801734F8
  W32(c->r[3]+0x00000000u,c->r[0]); // 801734FC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80173500
  W32(c->r[31]+0x00000034u,c->r[1]); // 80173504
  W32(c->r[3]+0x00000008u,c->r[29]); // 80173508
L_8017350C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017350C
  if (!crb(c,2)) { goto L_8017352C; } // 80173510
  c->r[4]=0u+0x80330000u; // 80173514
  c->r[3]=0u+0x00000000u; // 80173518
  c->r[4]=c->r[4]+0x000073A8u; // 8017351C
  c->r[5]=0u+0xFFFFFFFDu; // 80173520
  c->lr=0x80173528u; f_8017968C(c); // 80173524
  c->r[3]=0u+0x00000000u; // 80173528
L_8017352C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017352C
  W32(c->r[30]+0x00000014u,c->r[3]); // 80173530
  if (!crb(c,2)) { goto L_80173540; } // 80173534
  c->r[4]=0u+0x00000000u; // 80173538
  goto L_80173554; // 8017353C
L_80173540:;
  W32(c->r[30]+0x00000010u,c->r[3]); // 80173540
L_80173544:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 80173544
  c->r[4]=0u+0x00000001u; // 80173548
  c->r[0]=c->r[3]+0x00000001u; // 8017354C
  W32(c->r[30]+0x00000018u,c->r[0]); // 80173550
L_80173554:;
  cmps(c,0,(int32_t)c->r[4],0); // 80173554
  if (!crb(c,2)) { goto L_80173564; } // 80173558
  c->r[4]=0u+0x00000000u; // 8017355C
  goto L_80173574; // 80173560
L_80173564:;
  c->r[3]=(uint32_t)(int32_t)(int16_t)R16(c->r[30]+0x0000000Cu); // 80173564
  c->r[4]=0u+0x00000001u; // 80173568
  c->r[0]=c->r[3]+0x00000001u; // 8017356C
  W16(c->r[30]+0x0000000Cu,c->r[0]); // 80173570
L_80173574:;
  cmps(c,0,(int32_t)c->r[4],0); // 80173574
  if (!crb(c,2)) { goto L_801735B8; } // 80173578
  c->r[28]=R32(c->r[26]+0x0000001Cu); // 8017357C
  W32(c->r[31]+0x00000008u,c->r[28]); // 80173580
  W32(c->r[31]+0x00000014u,c->r[28]); // 80173584
  goto L_801735A8; // 80173588
L_8017358C:;
  c->r[4]=R32(c->r[28]+0x00000008u); // 8017358C
  c->r[3]=c->r[30]|c->r[30]; // 80173590
  c->lr=0x80173598u; f_80173190(c); // 80173594
  c->r[3]=R32(c->r[28]+0x00000008u); // 80173598
  c->r[4]=c->r[30]|c->r[30]; // 8017359C
  c->lr=0x801735A4u; f_8016C0C4(c); // 801735A0
  c->r[28]=R32(c->r[28]+0x00000004u); // 801735A4
L_801735A8:;
  cmps(c,0,(int32_t)c->r[28],0); // 801735A8
  if (!crb(c,2)) { IRQCHK(c); goto L_8017358C; } // 801735AC
  c->r[3]=0u+0x00000000u; // 801735B0
  goto L_801735C8; // 801735B4
L_801735B8:;
  c->r[28]=R32(c->r[28]+0x00000004u); // 801735B8
L_801735BC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801735BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801733E8; } // 801735C0
  c->r[3]=0u+0x00000001u; // 801735C4
L_801735C8:;
  c->r[10]=c->r[31]|c->r[31]; // 801735C8
  {uint32_t ea=c->r[10]+0x00000058u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801735CC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801735D0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801735D4
  c->r[1]=c->r[10]|c->r[10]; // 801735D8
  c->lr=c->r[0]; // 801735DC
  return; // 801735E0
}

// Create__11CriAuCueLocFP15_criheap_struct11CriHeapTypeR16CriAuCueSheetLocR15CriAuTblCueItemR8CriError
void f_801735E4(Ctx* __restrict c) {
  trace_call(0x801735E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801735E4
  c->r[0]=c->lr; // 801735E8
  c->r[8]=0u+0x802D0000u; // 801735EC
  W32(c->r[1]+0x00000044u,c->r[0]); // 801735F0
  c->r[0]=c->r[4]|c->r[4]; // 801735F4
  c->r[8]=c->r[8]+0x000006D0u; // 801735F8
  {uint32_t ea=c->r[1]+0x00000024u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801735FC
  c->r[25]=c->r[3]|c->r[3]; // 80173600
  c->r[30]=0u+0x00000000u; // 80173604
  c->r[26]=c->r[5]|c->r[5]; // 80173608
  c->r[27]=c->r[6]|c->r[6]; // 8017360C
  c->r[31]=c->r[1]|c->r[1]; // 80173610
  c->r[28]=c->r[7]|c->r[7]; // 80173614
  c->r[4]=c->r[25]|c->r[25]; // 80173618
  c->r[5]=c->r[0]|c->r[0]; // 8017361C
  c->r[6]=c->r[8]+0x0000001Eu; // 80173620
  c->r[3]=0u+0x0000003Cu; // 80173624
  W32(c->r[7]+0x00000000u,c->r[30]); // 80173628
  c->r[7]=0u+0x00000004u; // 8017362C
  c->lr=0x80173634u; f_8017BF5C(c); // 80173630
  cmps(c,0,(int32_t)c->r[3],0); // 80173634
  c->r[29]=c->r[3]|c->r[3]; // 80173638
  if (crb(c,2)) { goto L_8017368C; } // 8017363C
  W32(c->r[3]+0x00000004u,c->r[25]); // 80173640
  c->r[4]=0u+0x80330000u; // 80173644
  c->r[4]=c->r[4]+0x000073C8u; // 80173648
  c->r[0]=0u+0x00000001u; // 8017364C
  W32(c->r[3]+0x00000008u,c->r[30]); // 80173650
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 80173654
  W32(c->r[3]+0x00000010u,c->r[30]); // 80173658
  W32(c->r[3]+0x00000014u,c->r[30]); // 8017365C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80173660
  W32(c->r[3]+0x00000018u,c->r[30]); // 80173664
  W32(c->r[3]+0x0000001Cu,c->r[30]); // 80173668
  W32(c->r[3]+0x00000020u,c->r[30]); // 8017366C
  W32(c->r[3]+0x00000024u,c->r[30]); // 80173670
  W8(c->r[3]+0x00000028u,c->r[30]); // 80173674
  W32(c->r[3]+0x0000002Cu,c->r[30]); // 80173678
  W32(c->r[3]+0x00000030u,c->r[30]); // 8017367C
  W32(c->r[3]+0x00000034u,c->r[0]); // 80173680
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80173684
  W32(c->r[3]+0x00000038u,c->r[30]); // 80173688
L_8017368C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8017368C
  if (!crb(c,2)) { goto L_801736BC; } // 80173690
  c->r[3]=0u+0x802D0000u; // 80173694
  c->r[0]=0u+0xFFFFFFFDu; // 80173698
  c->r[3]=c->r[3]+0x000006D0u; // 8017369C
  W32(c->r[28]+0x00000000u,c->r[0]); // 801736A0
  c->r[4]=c->r[3]+0x00000050u; // 801736A4
  c->r[5]=0u+0xFFFFFFFDu; // 801736A8
  c->r[3]=0u+0x00000000u; // 801736AC
  c->lr=0x801736B4u; f_8017968C(c); // 801736B0
  c->r[3]=0u+0x00000000u; // 801736B4
  goto L_80173704; // 801736B8
L_801736BC:;
  c->r[3]=c->r[29]|c->r[29]; // 801736BC
  c->r[4]=c->r[26]|c->r[26]; // 801736C0
  c->r[5]=c->r[27]|c->r[27]; // 801736C4
  c->lr=0x801736CCu; f_8017393C(c); // 801736C8
  cmps(c,0,(int32_t)c->r[3],0); // 801736CC
  if (!crb(c,2)) { goto L_80173700; } // 801736D0
  cmps(c,0,(int32_t)c->r[29],0); // 801736D4
  if (crb(c,2)) { goto L_801736F8; } // 801736D8
  c->r[12]=R32(c->r[29]+0x00000000u); // 801736DC
  c->r[0]=0u+0x00000001u; // 801736E0
  c->r[3]=c->r[29]|c->r[29]; // 801736E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801736E8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801736EC
  c->ctr=c->r[12]; // 801736F0
  if (true) { c->lr=0x801736F8u; dispatch(c,c->ctr); } // 801736F4
L_801736F8:;
  c->r[3]=0u+0x00000000u; // 801736F8
  goto L_80173704; // 801736FC
L_80173700:;
  c->r[3]=c->r[29]|c->r[29]; // 80173700
L_80173704:;
  c->r[10]=c->r[31]|c->r[31]; // 80173704
  {uint32_t ea=c->r[10]+0x00000024u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80173708
  c->r[10]=R32(c->r[1]+0x00000000u); // 8017370C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80173710
  c->r[1]=c->r[10]|c->r[10]; // 80173714
  c->lr=c->r[0]; // 80173718
  return; // 8017371C
}

// ReleaseCueSheet__11CriAuCueLocFP16CriAuCueSheetLoc
void f_80173720(Ctx* __restrict c) {
  trace_call(0x80173720u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173720
  c->r[0]=c->lr; // 80173724
  c->r[4]=0u+0x803F0000u; // 80173728
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017372C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80173730
  W32(c->r[1]+0x00000018u,c->r[30]); // 80173734
  W32(c->r[1]+0x00000014u,c->r[29]); // 80173738
  c->r[29]=c->r[3]|c->r[3]; // 8017373C
  c->r[30]=R32(c->r[4]+0xFFFFFF08u); // 80173740
  cmps(c,0,(int32_t)c->r[30],0); // 80173744
  if (crb(c,2)) { goto L_80173750; } // 80173748
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 8017374C
L_80173750:;
  c->r[31]=0u+0x00000000u; // 80173750
  goto L_801737A0; // 80173754
L_80173758:;
  c->r[3]=R32(c->r[30]+0x0000002Cu); // 80173758
  cmpu(c,0,c->r[3],c->r[29]); // 8017375C
  if (!crb(c,2)) { goto L_80173790; } // 80173760
  c->r[12]=R32(c->r[3]+0x00000000u); // 80173764
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80173768
  c->ctr=c->r[12]; // 8017376C
  if (true) { c->lr=0x80173774u; dispatch(c,c->ctr); } // 80173770
  c->r[3]=R32(c->r[30]+0x00000030u); // 80173774
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80173778
  c->r[12]=R32(c->r[12]+0x00000008u); // 8017377C
  c->ctr=c->r[12]; // 80173780
  if (true) { c->lr=0x80173788u; dispatch(c,c->ctr); } // 80173784
  W32(c->r[30]+0x00000030u,c->r[31]); // 80173788
  W32(c->r[30]+0x0000002Cu,c->r[31]); // 8017378C
L_80173790:;
  c->r[30]=R32(c->r[30]+0x00000010u); // 80173790
  cmps(c,0,(int32_t)c->r[30],0); // 80173794
  if (crb(c,2)) { goto L_801737A0; } // 80173798
  c->r[30]=c->r[30]+0xFFFFFFF4u; // 8017379C
L_801737A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801737A0
  if (!crb(c,2)) { IRQCHK(c); goto L_80173758; } // 801737A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801737A8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801737AC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801737B0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801737B4
  c->lr=c->r[0]; // 801737B8
  c->r[1]=c->r[1]+0x00000020u; // 801737BC
  return; // 801737C0
}

// Destroy__11CriAuCueLocFR8CriError
void f_801737C4(Ctx* __restrict c) {
  trace_call(0x801737C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801737C4
  c->r[0]=c->lr; // 801737C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801737CC
  c->r[0]=0u+0x00000000u; // 801737D0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801737D4
  c->r[31]=c->r[3]|c->r[3]; // 801737D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801737DC
  c->r[0]=R32(c->r[3]+0x00000038u); // 801737E0
  cmps(c,0,(int32_t)c->r[0],0); // 801737E4
  if (crb(c,2)) { goto L_80173814; } // 801737E8
  c->r[0]=R32(c->r[3]+0x00000034u); // 801737EC
  cmps(c,0,(int32_t)c->r[0],1); // 801737F0
  if (!crb(c,1)) { goto L_80173814; } // 801737F4
  c->r[4]=0u+0x802D0000u; // 801737F8
  c->r[3]=0u+0x00000001u; // 801737FC
  c->r[4]=c->r[4]+0x000006D0u; // 80173800
  c->r[4]=c->r[4]+0x0000005Bu; // 80173804
  c->lr=0x8017380Cu; f_80179434(c); // 80173808
  c->r[3]=c->r[31]|c->r[31]; // 8017380C
  c->lr=0x80173814u; f_80153A98(c); // 80173810
L_80173814:;
  c->r[0]=R32(c->r[31]+0x00000038u); // 80173814
  cmps(c,0,(int32_t)c->r[0],0); // 80173818
  if (crb(c,2)) { goto L_801738C8; } // 8017381C
  cmps(c,0,(int32_t)c->r[31],0); // 80173820
  c->r[5]=c->r[31]|c->r[31]; // 80173824
  if (crb(c,2)) { goto L_80173830; } // 80173828
  c->r[5]=c->r[31]+0x0000000Cu; // 8017382C
L_80173830:;
  cmps(c,0,(int32_t)c->r[5],0); // 80173830
  if (!crb(c,2)) { goto L_8017384C; } // 80173834
  c->r[4]=0u+0x80330000u; // 80173838
  c->r[3]=0u+0x00000000u; // 8017383C
  c->r[4]=c->r[4]+0x00000C2Cu; // 80173840
  c->lr=0x80173848u; f_80179434(c); // 80173844
  goto L_801738C8; // 80173848
L_8017384C:;
  c->r[3]=0u+0x803F0000u; // 8017384C
  c->r[0]=R32(c->r[3]+0xFFFFFF08u); // 80173850
  cmpu(c,0,c->r[0],c->r[5]); // 80173854
  if (!crb(c,2)) { goto L_80173864; } // 80173858
  c->r[0]=R32(c->r[5]+0x00000004u); // 8017385C
  W32(c->r[3]+0xFFFFFF08u,c->r[0]); // 80173860
L_80173864:;
  c->r[3]=0u+0x803F0000u; // 80173864
  c->r[3]=c->r[3]+0xFFFFFF08u; // 80173868
  c->r[0]=R32(c->r[3]+0x00000004u); // 8017386C
  cmpu(c,0,c->r[0],c->r[5]); // 80173870
  if (!crb(c,2)) { goto L_80173880; } // 80173874
  c->r[0]=R32(c->r[5]+0x00000000u); // 80173878
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017387C
L_80173880:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80173880
  cmps(c,0,(int32_t)c->r[3],0); // 80173884
  if (crb(c,2)) { goto L_80173894; } // 80173888
  c->r[0]=R32(c->r[5]+0x00000004u); // 8017388C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80173890
L_80173894:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 80173894
  cmps(c,0,(int32_t)c->r[3],0); // 80173898
  if (crb(c,2)) { goto L_801738A8; } // 8017389C
  c->r[0]=R32(c->r[5]+0x00000000u); // 801738A0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801738A4
L_801738A8:;
  c->r[0]=0u+0x00000000u; // 801738A8
  W32(c->r[5]+0x00000004u,c->r[0]); // 801738AC
  c->r[4]=0u+0x803F0000u; // 801738B0
  W32(c->r[5]+0x00000000u,c->r[0]); // 801738B4
  c->r[4]=c->r[4]+0xFFFFFF08u; // 801738B8
  c->r[3]=R32(c->r[4]+0x00000008u); // 801738BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801738C0
  W32(c->r[4]+0x00000008u,c->r[0]); // 801738C4
L_801738C8:;
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 801738C8
  cmps(c,0,(int32_t)c->r[3],0); // 801738CC
  if (crb(c,2)) { goto L_801738E4; } // 801738D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801738D4
  c->r[12]=R32(c->r[12]+0x000000ACu); // 801738D8
  c->ctr=c->r[12]; // 801738DC
  if (true) { c->lr=0x801738E4u; dispatch(c,c->ctr); } // 801738E0
L_801738E4:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 801738E4
  cmps(c,0,(int32_t)c->r[3],0); // 801738E8
  if (crb(c,2)) { goto L_80173908; } // 801738EC
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801738F0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801738F4
  c->ctr=c->r[12]; // 801738F8
  if (true) { c->lr=0x80173900u; dispatch(c,c->ctr); } // 801738FC
  c->r[0]=0u+0x00000000u; // 80173900
  W32(c->r[31]+0x00000030u,c->r[0]); // 80173904
L_80173908:;
  cmps(c,0,(int32_t)c->r[31],0); // 80173908
  if (crb(c,2)) { goto L_80173928; } // 8017390C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80173910
  c->r[3]=c->r[31]|c->r[31]; // 80173914
  c->r[4]=0u+0x00000001u; // 80173918
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8017391C
  c->ctr=c->r[12]; // 80173920
  if (true) { c->lr=0x80173928u; dispatch(c,c->ctr); } // 80173924
L_80173928:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173928
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8017392C
  c->lr=c->r[0]; // 80173930
  c->r[1]=c->r[1]+0x00000010u; // 80173934
  return; // 80173938
}

// Initialize__11CriAuCueLocFR16CriAuCueSheetLocR15CriAuTblCueItem
void f_8017393C(Ctx* __restrict c) {
  trace_call(0x8017393Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017393C
  c->r[0]=c->lr; // 80173940
  {uint32_t ea=c->r[2]+0xFFFFB498u; c->f[0]=c->ps1[0]=RF32(ea);} // 80173944
  W32(c->r[1]+0x00000184u,c->r[0]); // 80173948
  W32(c->r[1]+0x0000017Cu,c->r[31]); // 8017394C
  c->r[31]=c->r[3]|c->r[3]; // 80173950
  W32(c->r[1]+0x00000178u,c->r[30]); // 80173954
  c->r[30]=0u+0x00000000u; // 80173958
  W32(c->r[1]+0x00000174u,c->r[29]); // 8017395C
  c->r[29]=c->r[5]|c->r[5]; // 80173960
  W32(c->r[1]+0x00000170u,c->r[28]); // 80173964
  c->r[28]=c->r[4]|c->r[4]; // 80173968
  c->r[3]=c->r[28]|c->r[28]; // 8017396C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80173970
  W32(c->r[1]+0x00000024u,c->r[30]); // 80173974
  W32(c->r[1]+0x00000028u,c->r[30]); // 80173978
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8017397C
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 80173980
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 80173984
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 80173988
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8017398C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80173990
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 80173994
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 80173998
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8017399C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 801739A0
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 801739A4
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 801739A8
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 801739AC
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 801739B0
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 801739B4
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 801739B8
  W32(c->r[1]+0x000000E8u,c->r[30]); // 801739BC
  W32(c->r[1]+0x000000ECu,c->r[30]); // 801739C0
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 801739C4
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 801739C8
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 801739CC
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 801739D0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 801739D4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 801739D8
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 801739DC
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 801739E0
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 801739E4
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 801739E8
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 801739EC
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 801739F0
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 801739F4
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 801739F8
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 801739FC
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 80173A00
  W32(c->r[1]+0x00000130u,c->r[30]); // 80173A04
  W32(c->r[1]+0x00000134u,c->r[30]); // 80173A08
  W32(c->r[1]+0x00000138u,c->r[30]); // 80173A0C
  W32(c->r[1]+0x0000013Cu,c->r[30]); // 80173A10
  W32(c->r[1]+0x00000140u,c->r[30]); // 80173A14
  W32(c->r[1]+0x00000144u,c->r[30]); // 80173A18
  W32(c->r[1]+0x00000148u,c->r[30]); // 80173A1C
  W32(c->r[1]+0x0000014Cu,c->r[30]); // 80173A20
  W32(c->r[1]+0x00000150u,c->r[30]); // 80173A24
  c->r[4]=R32(c->r[5]+0x00000008u); // 80173A28
  c->r[5]=c->r[1]+0x00000018u; // 80173A2C
  c->lr=0x80173A34u; f_8014ACEC(c); // 80173A30
  cmps(c,0,(int32_t)c->r[3],0); // 80173A34
  if (!crb(c,2)) { goto L_80173A9C; } // 80173A38
  c->r[4]=0u+0x802D0000u; // 80173A3C
  c->r[5]=R32(c->r[29]+0x00000008u); // 80173A40
  c->r[4]=c->r[4]+0x000006D0u; // 80173A44
  c->r[3]=0u+0x00000000u; // 80173A48
  c->r[4]=c->r[4]+0x0000007Eu; // 80173A4C
  c->lr=0x80173A54u; f_801794C0(c); // 80173A50
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80173A54
  cmps(c,0,(int32_t)c->r[3],0); // 80173A58
  if (crb(c,2)) { goto L_80173A70; } // 80173A5C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80173A60
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80173A64
  c->ctr=c->r[12]; // 80173A68
  if (true) { c->lr=0x80173A70u; dispatch(c,c->ctr); } // 80173A6C
L_80173A70:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 80173A70
  cmps(c,0,(int32_t)c->r[3],0); // 80173A74
  if (crb(c,2)) { goto L_80173A94; } // 80173A78
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80173A7C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80173A80
  c->ctr=c->r[12]; // 80173A84
  if (true) { c->lr=0x80173A8Cu; dispatch(c,c->ctr); } // 80173A88
  c->r[0]=0u+0x00000000u; // 80173A8C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80173A90
L_80173A94:;
  c->r[3]=0u+0x00000000u; // 80173A94
  goto L_80173BD4; // 80173A98
L_80173A9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80173A9C
  cmps(c,0,(int32_t)c->r[0],0); // 80173AA0
  if (!crb(c,2)) { goto L_80173B08; } // 80173AA4
  c->r[4]=0u+0x802D0000u; // 80173AA8
  c->r[5]=R32(c->r[29]+0x00000008u); // 80173AAC
  c->r[4]=c->r[4]+0x000006D0u; // 80173AB0
  c->r[3]=0u+0x00000001u; // 80173AB4
  c->r[4]=c->r[4]+0x000000A4u; // 80173AB8
  c->lr=0x80173AC0u; f_801794C0(c); // 80173ABC
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80173AC0
  cmps(c,0,(int32_t)c->r[3],0); // 80173AC4
  if (crb(c,2)) { goto L_80173ADC; } // 80173AC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80173ACC
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80173AD0
  c->ctr=c->r[12]; // 80173AD4
  if (true) { c->lr=0x80173ADCu; dispatch(c,c->ctr); } // 80173AD8
L_80173ADC:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 80173ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80173AE0
  if (crb(c,2)) { goto L_80173B00; } // 80173AE4
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80173AE8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80173AEC
  c->ctr=c->r[12]; // 80173AF0
  if (true) { c->lr=0x80173AF8u; dispatch(c,c->ctr); } // 80173AF4
  c->r[0]=0u+0x00000000u; // 80173AF8
  W32(c->r[31]+0x00000030u,c->r[0]); // 80173AFC
L_80173B00:;
  c->r[3]=0u+0x00000000u; // 80173B00
  goto L_80173BD4; // 80173B04
L_80173B08:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80173B08
  c->r[0]=c->r[1]+0x00000018u; // 80173B0C
  W32(c->r[1]+0x00000008u,c->r[3]); // 80173B10
  c->r[3]=c->r[1]+0x00000008u; // 80173B14
  W32(c->r[1]+0x0000000Cu,c->r[28]); // 80173B18
  W32(c->r[1]+0x00000010u,c->r[0]); // 80173B1C
  W32(c->r[1]+0x00000014u,c->r[30]); // 80173B20
  c->lr=0x80173B28u; f_80158AA0(c); // 80173B24
  cmps(c,0,(int32_t)c->r[3],0); // 80173B28
  W32(c->r[31]+0x00000030u,c->r[3]); // 80173B2C
  if (!crb(c,2)) { goto L_80173B90; } // 80173B30
  c->r[4]=0u+0x802D0000u; // 80173B34
  c->r[3]=0u+0x00000000u; // 80173B38
  c->r[4]=c->r[4]+0x000006D0u; // 80173B3C
  c->r[4]=c->r[4]+0x000000D3u; // 80173B40
  c->lr=0x80173B48u; f_80179434(c); // 80173B44
  c->r[3]=R32(c->r[31]+0x0000002Cu); // 80173B48
  cmps(c,0,(int32_t)c->r[3],0); // 80173B4C
  if (crb(c,2)) { goto L_80173B64; } // 80173B50
  c->r[12]=R32(c->r[3]+0x00000000u); // 80173B54
  c->r[12]=R32(c->r[12]+0x000000ACu); // 80173B58
  c->ctr=c->r[12]; // 80173B5C
  if (true) { c->lr=0x80173B64u; dispatch(c,c->ctr); } // 80173B60
L_80173B64:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 80173B64
  cmps(c,0,(int32_t)c->r[3],0); // 80173B68
  if (crb(c,2)) { goto L_80173B88; } // 80173B6C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80173B70
  c->r[12]=R32(c->r[12]+0x00000008u); // 80173B74
  c->ctr=c->r[12]; // 80173B78
  if (true) { c->lr=0x80173B80u; dispatch(c,c->ctr); } // 80173B7C
  c->r[0]=0u+0x00000000u; // 80173B80
  W32(c->r[31]+0x00000030u,c->r[0]); // 80173B84
L_80173B88:;
  c->r[3]=0u+0x00000000u; // 80173B88
  goto L_80173BD4; // 80173B8C
L_80173B90:;
  W32(c->r[31]+0x0000002Cu,c->r[28]); // 80173B90
  c->r[3]=c->r[28]|c->r[28]; // 80173B94
  c->r[0]=R32(c->r[29]+0x00000000u); // 80173B98
  W32(c->r[31]+0x00000018u,c->r[0]); // 80173B9C
  c->r[0]=R32(c->r[29]+0x00000004u); // 80173BA0
  W32(c->r[31]+0x0000001Cu,c->r[0]); // 80173BA4
  c->r[0]=R32(c->r[29]+0x00000008u); // 80173BA8
  W32(c->r[31]+0x00000020u,c->r[0]); // 80173BAC
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 80173BB0
  W32(c->r[31]+0x00000024u,c->r[0]); // 80173BB4
  c->r[0]=R8(c->r[29]+0x00000010u); // 80173BB8
  W8(c->r[31]+0x00000028u,c->r[0]); // 80173BBC
  c->r[12]=R32(c->r[28]+0x00000000u); // 80173BC0
  c->r[12]=R32(c->r[12]+0x000000A8u); // 80173BC4
  c->ctr=c->r[12]; // 80173BC8
  if (true) { c->lr=0x80173BD0u; dispatch(c,c->ctr); } // 80173BCC
  c->r[3]=0u+0x00000001u; // 80173BD0
L_80173BD4:;
  c->r[0]=R32(c->r[1]+0x00000184u); // 80173BD4
  c->r[31]=R32(c->r[1]+0x0000017Cu); // 80173BD8
  c->r[30]=R32(c->r[1]+0x00000178u); // 80173BDC
  c->r[29]=R32(c->r[1]+0x00000174u); // 80173BE0
  c->r[28]=R32(c->r[1]+0x00000170u); // 80173BE4
  c->lr=c->r[0]; // 80173BE8
  c->r[1]=c->r[1]+0x00000180u; // 80173BEC
  return; // 80173BF0
}

// __dt__11CriAuCueLocFv
void f_80173BF4(Ctx* __restrict c) {
  trace_call(0x80173BF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173BF4
  c->r[0]=c->lr; // 80173BF8
  cmps(c,0,(int32_t)c->r[3],0); // 80173BFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80173C00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80173C04
  c->r[31]=c->r[3]|c->r[3]; // 80173C08
  if (crb(c,2)) { goto L_80173C20; } // 80173C0C
  cmps(c,0,(int32_t)c->r[4],0); // 80173C10
  if (!crb(c,1)) { goto L_80173C20; } // 80173C14
  c->r[4]=0u+0x0000003Cu; // 80173C18
  c->lr=0x80173C20u; f_8017BFE8(c); // 80173C1C
L_80173C20:;
  c->r[3]=c->r[31]|c->r[31]; // 80173C20
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80173C24
  c->r[0]=R32(c->r[1]+0x00000014u); // 80173C28
  c->lr=c->r[0]; // 80173C2C
  c->r[1]=c->r[1]+0x00000010u; // 80173C30
  return; // 80173C34
}

// SetSynth__11CriAuCueLocFP10CriAuSynth
void f_80173C38(Ctx* __restrict c) {
  trace_call(0x80173C38u);
  W32(c->r[3]+0x00000030u,c->r[4]); // 80173C38
  return; // 80173C3C
}

// GetSynth__11CriAuCueLocFv
void f_80173C40(Ctx* __restrict c) {
  trace_call(0x80173C40u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 80173C40
  return; // 80173C44
}

// CountUp__11CriAuCueLocFv
void f_80173C48(Ctx* __restrict c) {
  trace_call(0x80173C48u);
  c->r[4]=R32(c->r[3]+0x00000034u); // 80173C48
  c->r[0]=c->r[4]+0x00000001u; // 80173C4C
  W32(c->r[3]+0x00000034u,c->r[0]); // 80173C50
  return; // 80173C54
}

// CountDown__11CriAuCueLocFv
void f_80173C58(Ctx* __restrict c) {
  trace_call(0x80173C58u);
  c->r[4]=R32(c->r[3]+0x00000034u); // 80173C58
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80173C5C
  W32(c->r[3]+0x00000034u,c->r[0]); // 80173C60
  c->r[3]=c->r[0]|c->r[0]; // 80173C64
  return; // 80173C68
}

// GetCueSheet__11CriAuCueLocFv
void f_80173C6C(Ctx* __restrict c) {
  trace_call(0x80173C6Cu);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80173C6C
  return; // 80173C70
}

// SetAisacControlToPlayer__11CriAuCueLocFP14CriAuPlayerLoc
void f_80173C74(Ctx* __restrict c) {
  trace_call(0x80173C74u);
  c->r[3]=R32(c->r[3]+0x00000030u); // 80173C74
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80173C78
  c->r[12]=R32(c->r[12]+0x00000044u); // 80173C7C
  c->ctr=c->r[12]; // 80173C80
  if (true) { dispatch(c,c->ctr); return; } // 80173C84
}

// fn_80173C88
void f_80173C88(Ctx* __restrict c) {
  trace_call(0x80173C88u);
  c->r[4]=0u+0x803F0000u; // 80173C88
  c->r[0]=0u+0x00000000u; // 80173C8C
  c->r[3]=c->r[4]+0xFFFFFF08u; // 80173C90
  W32(c->r[4]+0xFFFFFF08u,c->r[0]); // 80173C94
  W32(c->r[3]+0x00000004u,c->r[0]); // 80173C98
  W32(c->r[3]+0x00000008u,c->r[0]); // 80173C9C
  return; // 80173CA0
}

// Create__17CriAuVoiceManagerFP8CriAuObj
void f_80173CA4(Ctx* __restrict c) {
  trace_call(0x80173CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173CA4
  c->r[0]=c->lr; // 80173CA8
  c->r[6]=0u+0x00000004u; // 80173CAC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80173CB0
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80173CB4
  c->r[28]=0u+0x802D0000u; // 80173CB8
  c->r[28]=c->r[28]+0x000007C8u; // 80173CBC
  c->r[31]=c->r[1]|c->r[1]; // 80173CC0
  c->r[30]=c->r[3]|c->r[3]; // 80173CC4
  c->r[5]=c->r[28]|c->r[28]; // 80173CC8
  c->r[27]=R32(c->r[3]+0x00000004u); // 80173CCC
  c->r[3]=0u+0x00000024u; // 80173CD0
  c->r[4]=c->r[27]|c->r[27]; // 80173CD4
  c->lr=0x80173CDCu; f_8017BEDC(c); // 80173CD8
  cmps(c,0,(int32_t)c->r[3],0); // 80173CDC
  c->r[29]=c->r[3]|c->r[3]; // 80173CE0
  if (crb(c,2)) { goto L_80173D40; } // 80173CE4
  W32(c->r[3]+0x00000000u,c->r[30]); // 80173CE8
  c->r[30]=0u+0x00000000u; // 80173CEC
  W32(c->r[3]+0x00000004u,c->r[30]); // 80173CF0
  W32(c->r[3]+0x00000008u,c->r[30]); // 80173CF4
  W32(c->r[3]+0x0000000Cu,c->r[30]); // 80173CF8
  W32(c->r[3]+0x00000010u,c->r[30]); // 80173CFC
  W32(c->r[3]+0x00000014u,c->r[30]); // 80173D00
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80173D04
  W32(c->r[3]+0x00000018u,c->r[30]); // 80173D08
  c->lr=0x80173D10u; f_801480EC(c); // 80173D0C
  W32(c->r[29]+0x0000001Cu,c->r[3]); // 80173D10
  W32(c->r[29]+0x00000020u,c->r[30]); // 80173D14
  goto L_80173D40; // 80173D18
  c->r[3]=c->r[29]|c->r[29]; // 80173D1C
  c->r[4]=c->r[27]|c->r[27]; // 80173D20
  c->r[5]=c->r[28]|c->r[28]; // 80173D24
  c->r[6]=0u+0x00000004u; // 80173D28
  c->lr=0x80173D30u; f_8017BFF8(c); // 80173D2C
  c->r[3]=0u+0x00000000u; // 80173D30
  c->r[4]=0u+0x00000000u; // 80173D34
  c->r[5]=0u+0x00000000u; // 80173D38
  c->lr=0x80173D40u; f_800AF804(c); // 80173D3C
L_80173D40:;
  cmps(c,0,(int32_t)c->r[29],0); // 80173D40
  if (!crb(c,2)) { goto L_80173D68; } // 80173D44
  c->r[4]=0u+0x802D0000u; // 80173D48
  c->r[3]=0u+0x00000000u; // 80173D4C
  c->r[4]=c->r[4]+0x000007C8u; // 80173D50
  c->r[5]=0u+0xFFFFFFFDu; // 80173D54
  c->r[4]=c->r[4]+0x0000000Du; // 80173D58
  c->lr=0x80173D60u; f_8017968C(c); // 80173D5C
  c->r[3]=0u+0x00000000u; // 80173D60
  goto L_80173D6C; // 80173D64
L_80173D68:;
  c->r[3]=c->r[29]|c->r[29]; // 80173D68
L_80173D6C:;
  c->r[10]=c->r[31]|c->r[31]; // 80173D6C
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80173D70
  c->r[10]=R32(c->r[1]+0x00000000u); // 80173D74
  c->r[0]=R32(c->r[10]+0x00000004u); // 80173D78
  c->r[1]=c->r[10]|c->r[10]; // 80173D7C
  c->lr=c->r[0]; // 80173D80
  return; // 80173D84
}

// Destroy__17CriAuVoiceManagerFv
void f_80173D88(Ctx* __restrict c) {
  trace_call(0x80173D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173D88
  c->r[0]=c->lr; // 80173D8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80173D90
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80173D94
  c->r[27]=c->r[3]|c->r[3]; // 80173D98
  c->r[30]=0u+0x80330000u; // 80173D9C
  c->r[31]=0u+0x00000000u; // 80173DA0
  c->r[29]=R32(c->r[3]+0x00000004u); // 80173DA4
L_80173DA8:;
  cmps(c,0,(int32_t)c->r[29],0); // 80173DA8
  if (crb(c,2)) { goto L_80173E44; } // 80173DAC
  c->r[28]=R32(c->r[29]+0x00000004u); // 80173DB0
  if (!crb(c,2)) { goto L_80173DC8; } // 80173DB4
  c->r[4]=c->r[30]+0x00000C2Cu; // 80173DB8
  c->r[3]=0u+0x00000000u; // 80173DBC
  c->lr=0x80173DC4u; f_80179434(c); // 80173DC0
  goto L_80173E28; // 80173DC4
L_80173DC8:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 80173DC8
  cmpu(c,0,c->r[0],c->r[29]); // 80173DCC
  if (!crb(c,2)) { goto L_80173DD8; } // 80173DD0
  W32(c->r[27]+0x00000004u,c->r[28]); // 80173DD4
L_80173DD8:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80173DD8
  cmpu(c,0,c->r[0],c->r[29]); // 80173DDC
  if (!crb(c,2)) { goto L_80173DEC; } // 80173DE0
  c->r[0]=R32(c->r[29]+0x00000000u); // 80173DE4
  W32(c->r[27]+0x00000008u,c->r[0]); // 80173DE8
L_80173DEC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80173DEC
  cmps(c,0,(int32_t)c->r[3],0); // 80173DF0
  if (crb(c,2)) { goto L_80173E00; } // 80173DF4
  c->r[0]=R32(c->r[29]+0x00000004u); // 80173DF8
  W32(c->r[3]+0x00000004u,c->r[0]); // 80173DFC
L_80173E00:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80173E00
  cmps(c,0,(int32_t)c->r[3],0); // 80173E04
  if (crb(c,2)) { goto L_80173E14; } // 80173E08
  c->r[0]=R32(c->r[29]+0x00000000u); // 80173E0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80173E10
L_80173E14:;
  W32(c->r[29]+0x00000004u,c->r[31]); // 80173E14
  W32(c->r[29]+0x00000000u,c->r[31]); // 80173E18
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80173E1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80173E20
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80173E24
L_80173E28:;
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80173E28
  c->r[3]=c->r[29]|c->r[29]; // 80173E2C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80173E30
  c->ctr=c->r[12]; // 80173E34
  if (true) { c->lr=0x80173E3Cu; dispatch(c,c->ctr); } // 80173E38
  c->r[29]=c->r[28]|c->r[28]; // 80173E3C
  IRQCHK(c); goto L_80173DA8; // 80173E40
L_80173E44:;
  cmps(c,0,(int32_t)c->r[27],0); // 80173E44
  if (crb(c,2)) { goto L_80173E58; } // 80173E48
  c->r[3]=c->r[27]|c->r[27]; // 80173E4C
  c->r[4]=0u+0x00000024u; // 80173E50
  c->lr=0x80173E58u; f_8017BFE8(c); // 80173E54
L_80173E58:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80173E58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80173E5C
  c->lr=c->r[0]; // 80173E60
  c->r[1]=c->r[1]+0x00000020u; // 80173E64
  return; // 80173E68
}

// Play__17CriAuVoiceManagerFP25CriAuVoiceParameterPacketUl
void f_80173E6C(Ctx* __restrict c) {
  trace_call(0x80173E6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80173E6C
  c->r[0]=c->lr; // 80173E70
  W32(c->r[1]+0x00000024u,c->r[0]); // 80173E74
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80173E78
  c->r[30]=c->r[3]|c->r[3]; // 80173E7C
  c->r[27]=c->r[4]|c->r[4]; // 80173E80
  c->r[28]=c->r[5]|c->r[5]; // 80173E84
  c->r[29]=R32(c->r[4]+0x000003B0u); // 80173E88
  c->lr=0x80173E90u; f_80174D4C(c); // 80173E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80173E90
  if (crb(c,2)) { goto L_80174054; } // 80173E94
  c->r[3]=R32(c->r[30]+0x00000000u); // 80173E98
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80173E9C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80173EA0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80173EA4
  c->ctr=c->r[12]; // 80173EA8
  if (true) { c->lr=0x80173EB0u; dispatch(c,c->ctr); } // 80173EAC
  c->r[3]=R32(c->r[30]+0x00000000u); // 80173EB0
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80173EB4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80173EB8
  c->r[12]=R32(c->r[12]+0x00000014u); // 80173EBC
  c->ctr=c->r[12]; // 80173EC0
  if (true) { c->lr=0x80173EC8u; dispatch(c,c->ctr); } // 80173EC4
  c->r[3]=c->r[29]|c->r[29]; // 80173EC8
  c->lr=0x80173ED0u; f_80158510(c); // 80173ECC
  c->r[31]=c->r[3]|c->r[3]; // 80173ED0
  c->r[3]=c->r[29]|c->r[29]; // 80173ED4
  c->lr=0x80173EDCu; f_80158508(c); // 80173ED8
  c->r[4]=0u+0x802D0000u; // 80173EDC
  c->r[6]=c->r[3]|c->r[3]; // 80173EE0
  c->r[4]=c->r[4]+0x000007C8u; // 80173EE4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80173EE8
  c->r[9]=R32(c->r[29]+0x000007C8u); // 80173EEC
  c->r[5]=c->r[27]|c->r[27]; // 80173EF0
  c->r[7]=c->r[31]|c->r[31]; // 80173EF4
  c->r[8]=c->r[28]|c->r[28]; // 80173EF8
  c->r[4]=c->r[4]+0x00000017u; // 80173EFC
  c->lr=0x80173F04u; f_8016557C(c); // 80173F00
  cmps(c,0,(int32_t)c->r[3],0); // 80173F04
  c->r[31]=c->r[3]|c->r[3]; // 80173F08
  if (crb(c,2)) { goto L_80174020; } // 80173F0C
  c->lr=0x80173F14u; f_8016794C(c); // 80173F10
  cmps(c,0,(int32_t)c->r[3],6); // 80173F14
  if (crb(c,2)) { goto L_80173FA4; } // 80173F18
  c->r[3]=c->r[31]|c->r[31]; // 80173F1C
  c->lr=0x80173F24u; f_80167400(c); // 80173F20
  c->r[29]=R32(c->r[30]+0x00000004u); // 80173F24
  cmps(c,0,(int32_t)c->r[29],0); // 80173F28
  if (crb(c,2)) { goto L_80173F70; } // 80173F2C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80173F30
  cmps(c,0,(int32_t)c->r[0],0); // 80173F34
  if (!crb(c,2)) { goto L_80173F48; } // 80173F38
  c->r[0]=R32(c->r[31]+0x00000004u); // 80173F3C
  cmps(c,0,(int32_t)c->r[0],0); // 80173F40
  if (crb(c,2)) { goto L_80173F58; } // 80173F44
L_80173F48:;
  c->r[4]=0u+0x80330000u; // 80173F48
  c->r[3]=0u+0x00000000u; // 80173F4C
  c->r[4]=c->r[4]+0x000008F4u; // 80173F50
  c->lr=0x80173F58u; f_80179434(c); // 80173F54
L_80173F58:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80173F58
  W32(c->r[31]+0x00000000u,c->r[0]); // 80173F5C
  W32(c->r[31]+0x00000004u,c->r[29]); // 80173F60
  W32(c->r[29]+0x00000000u,c->r[31]); // 80173F64
  W32(c->r[30]+0x00000004u,c->r[31]); // 80173F68
  goto L_80173F94; // 80173F6C
L_80173F70:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 80173F70
  W32(c->r[30]+0x00000004u,c->r[31]); // 80173F74
  cmps(c,0,(int32_t)c->r[0],0); // 80173F78
  if (crb(c,2)) { goto L_80173F90; } // 80173F7C
  c->r[4]=0u+0x80330000u; // 80173F80
  c->r[3]=0u+0x00000000u; // 80173F84
  c->r[4]=c->r[4]+0x000008CCu; // 80173F88
  c->lr=0x80173F90u; f_80179434(c); // 80173F8C
L_80173F90:;
  W32(c->r[30]+0x00000008u,c->r[31]); // 80173F90
L_80173F94:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80173F94
  c->r[0]=c->r[3]+0x00000001u; // 80173F98
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80173F9C
  goto L_80174020; // 80173FA0
L_80173FA4:;
  c->r[29]=R32(c->r[30]+0x00000010u); // 80173FA4
  cmps(c,0,(int32_t)c->r[29],0); // 80173FA8
  if (crb(c,2)) { goto L_80173FF0; } // 80173FAC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80173FB0
  cmps(c,0,(int32_t)c->r[0],0); // 80173FB4
  if (!crb(c,2)) { goto L_80173FC8; } // 80173FB8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80173FBC
  cmps(c,0,(int32_t)c->r[0],0); // 80173FC0
  if (crb(c,2)) { goto L_80173FD8; } // 80173FC4
L_80173FC8:;
  c->r[4]=0u+0x80330000u; // 80173FC8
  c->r[3]=0u+0x00000000u; // 80173FCC
  c->r[4]=c->r[4]+0x000008F4u; // 80173FD0
  c->lr=0x80173FD8u; f_80179434(c); // 80173FD4
L_80173FD8:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80173FD8
  W32(c->r[31]+0x00000000u,c->r[0]); // 80173FDC
  W32(c->r[31]+0x00000004u,c->r[29]); // 80173FE0
  W32(c->r[29]+0x00000000u,c->r[31]); // 80173FE4
  W32(c->r[30]+0x00000010u,c->r[31]); // 80173FE8
  goto L_80174014; // 80173FEC
L_80173FF0:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80173FF0
  W32(c->r[30]+0x00000010u,c->r[31]); // 80173FF4
  cmps(c,0,(int32_t)c->r[0],0); // 80173FF8
  if (crb(c,2)) { goto L_80174010; } // 80173FFC
  c->r[4]=0u+0x80330000u; // 80174000
  c->r[3]=0u+0x00000000u; // 80174004
  c->r[4]=c->r[4]+0x000008CCu; // 80174008
  c->lr=0x80174010u; f_80179434(c); // 8017400C
L_80174010:;
  W32(c->r[30]+0x00000014u,c->r[31]); // 80174010
L_80174014:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 80174014
  c->r[0]=c->r[3]+0x00000001u; // 80174018
  W32(c->r[30]+0x00000018u,c->r[0]); // 8017401C
L_80174020:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80174020
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80174024
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174028
  c->r[12]=R32(c->r[12]+0x00000018u); // 8017402C
  c->ctr=c->r[12]; // 80174030
  if (true) { c->lr=0x80174038u; dispatch(c,c->ctr); } // 80174034
  c->r[3]=R32(c->r[30]+0x00000000u); // 80174038
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017403C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174040
  c->r[12]=R32(c->r[12]+0x00000010u); // 80174044
  c->ctr=c->r[12]; // 80174048
  if (true) { c->lr=0x80174050u; dispatch(c,c->ctr); } // 8017404C
  goto L_80174058; // 80174050
L_80174054:;
  c->r[31]=0u+0x00000000u; // 80174054
L_80174058:;
  cmps(c,0,(int32_t)c->r[31],0); // 80174058
  if (crb(c,2)) { goto L_80174068; } // 8017405C
  c->r[3]=0u+0x00000001u; // 80174060
  goto L_8017406C; // 80174064
L_80174068:;
  c->r[3]=0u+0x00000000u; // 80174068
L_8017406C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017406C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80174070
  c->lr=c->r[0]; // 80174074
  c->r[1]=c->r[1]+0x00000020u; // 80174078
  return; // 8017407C
}

// ChangeVoiceParameters__17CriAuVoiceManagerFP25CriAuVoiceParameterPacketUl
void f_80174080(Ctx* __restrict c) {
  trace_call(0x80174080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174080
  c->r[0]=c->lr; // 80174084
  W32(c->r[1]+0x00000024u,c->r[0]); // 80174088
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017408C
  c->r[26]=c->r[3]|c->r[3]; // 80174090
  c->r[27]=c->r[4]|c->r[4]; // 80174094
  c->r[28]=c->r[5]|c->r[5]; // 80174098
  c->r[29]=R32(c->r[4]+0x000003B0u); // 8017409C
  c->r[30]=R32(c->r[3]+0x00000004u); // 801740A0
  goto L_80174124; // 801740A4
L_801740A8:;
  c->r[3]=c->r[29]|c->r[29]; // 801740A8
  c->lr=0x801740B0u; f_80158510(c); // 801740AC
  c->r[31]=c->r[3]|c->r[3]; // 801740B0
  c->r[3]=c->r[29]|c->r[29]; // 801740B4
  c->lr=0x801740BCu; f_80158508(c); // 801740B8
  c->r[4]=c->r[3]|c->r[3]; // 801740BC
  c->r[3]=c->r[30]|c->r[30]; // 801740C0
  c->r[5]=c->r[31]|c->r[31]; // 801740C4
  c->r[6]=c->r[28]|c->r[28]; // 801740C8
  c->lr=0x801740D0u; f_80167980(c); // 801740CC
  cmps(c,0,(int32_t)c->r[3],0); // 801740D0
  if (crb(c,2)) { goto L_80174120; } // 801740D4
  c->r[3]=R32(c->r[26]+0x00000000u); // 801740D8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801740DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801740E0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801740E4
  c->ctr=c->r[12]; // 801740E8
  if (true) { c->lr=0x801740F0u; dispatch(c,c->ctr); } // 801740EC
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801740F0
  c->r[3]=c->r[30]|c->r[30]; // 801740F4
  c->r[4]=c->r[27]|c->r[27]; // 801740F8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801740FC
  c->ctr=c->r[12]; // 80174100
  if (true) { c->lr=0x80174108u; dispatch(c,c->ctr); } // 80174104
  c->r[3]=R32(c->r[26]+0x00000000u); // 80174108
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017410C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174110
  c->r[12]=R32(c->r[12]+0x00000018u); // 80174114
  c->ctr=c->r[12]; // 80174118
  if (true) { c->lr=0x80174120u; dispatch(c,c->ctr); } // 8017411C
L_80174120:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 80174120
L_80174124:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174124
  if (!crb(c,2)) { IRQCHK(c); goto L_801740A8; } // 80174128
  c->r[30]=R32(c->r[26]+0x00000010u); // 8017412C
  goto L_80174180; // 80174130
L_80174134:;
  c->r[3]=c->r[29]|c->r[29]; // 80174134
  c->lr=0x8017413Cu; f_80158510(c); // 80174138
  c->r[31]=c->r[3]|c->r[3]; // 8017413C
  c->r[3]=c->r[29]|c->r[29]; // 80174140
  c->lr=0x80174148u; f_80158508(c); // 80174144
  c->r[4]=c->r[3]|c->r[3]; // 80174148
  c->r[3]=c->r[30]|c->r[30]; // 8017414C
  c->r[5]=c->r[31]|c->r[31]; // 80174150
  c->r[6]=c->r[28]|c->r[28]; // 80174154
  c->lr=0x8017415Cu; f_80167980(c); // 80174158
  cmps(c,0,(int32_t)c->r[3],0); // 8017415C
  if (crb(c,2)) { goto L_8017417C; } // 80174160
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80174164
  c->r[3]=c->r[30]|c->r[30]; // 80174168
  c->r[4]=c->r[27]|c->r[27]; // 8017416C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80174170
  c->ctr=c->r[12]; // 80174174
  if (true) { c->lr=0x8017417Cu; dispatch(c,c->ctr); } // 80174178
L_8017417C:;
  c->r[30]=R32(c->r[30]+0x00000004u); // 8017417C
L_80174180:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174180
  if (!crb(c,2)) { IRQCHK(c); goto L_80174134; } // 80174184
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174188
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017418C
  c->lr=c->r[0]; // 80174190
  c->r[1]=c->r[1]+0x00000020u; // 80174194
  return; // 80174198
}

// Stop__17CriAuVoiceManagerFP25CriAuVoiceParameterPacketUl
void f_8017419C(Ctx* __restrict c) {
  trace_call(0x8017419Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017419C
  c->r[0]=c->lr; // 801741A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801741A4
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801741A8
  c->r[27]=c->r[3]|c->r[3]; // 801741AC
  c->r[28]=c->r[5]|c->r[5]; // 801741B0
  c->r[25]=R32(c->r[3]+0x00000004u); // 801741B4
  c->r[29]=R32(c->r[4]+0x000003B0u); // 801741B8
L_801741BC:;
  cmps(c,0,(int32_t)c->r[25],0); // 801741BC
  if (crb(c,2)) { goto L_80174208; } // 801741C0
  c->r[26]=R32(c->r[25]+0x00000004u); // 801741C4
  c->r[3]=c->r[29]|c->r[29]; // 801741C8
  c->lr=0x801741D0u; f_80158510(c); // 801741CC
  c->r[24]=c->r[3]|c->r[3]; // 801741D0
  c->r[3]=c->r[29]|c->r[29]; // 801741D4
  c->lr=0x801741DCu; f_80158508(c); // 801741D8
  c->r[4]=c->r[3]|c->r[3]; // 801741DC
  c->r[3]=c->r[25]|c->r[25]; // 801741E0
  c->r[5]=c->r[24]|c->r[24]; // 801741E4
  c->r[6]=c->r[28]|c->r[28]; // 801741E8
  c->lr=0x801741F0u; f_80167980(c); // 801741EC
  cmps(c,0,(int32_t)c->r[3],0); // 801741F0
  if (crb(c,2)) { goto L_80174200; } // 801741F4
  c->r[3]=c->r[25]|c->r[25]; // 801741F8
  c->lr=0x80174200u; f_801674CC(c); // 801741FC
L_80174200:;
  c->r[25]=c->r[26]|c->r[26]; // 80174200
  IRQCHK(c); goto L_801741BC; // 80174204
L_80174208:;
  c->r[31]=R32(c->r[27]+0x00000010u); // 80174208
  c->r[25]=0u+0x80330000u; // 8017420C
  c->r[26]=0u+0x00000000u; // 80174210
L_80174214:;
  cmps(c,0,(int32_t)c->r[31],0); // 80174214
  if (crb(c,2)) { goto L_801742DC; } // 80174218
  c->r[30]=R32(c->r[31]+0x00000004u); // 8017421C
  c->r[3]=c->r[29]|c->r[29]; // 80174220
  c->lr=0x80174228u; f_80158510(c); // 80174224
  c->r[24]=c->r[3]|c->r[3]; // 80174228
  c->r[3]=c->r[29]|c->r[29]; // 8017422C
  c->lr=0x80174234u; f_80158508(c); // 80174230
  c->r[4]=c->r[3]|c->r[3]; // 80174234
  c->r[3]=c->r[31]|c->r[31]; // 80174238
  c->r[5]=c->r[24]|c->r[24]; // 8017423C
  c->r[6]=c->r[28]|c->r[28]; // 80174240
  c->lr=0x80174248u; f_80167980(c); // 80174244
  cmps(c,0,(int32_t)c->r[3],0); // 80174248
  if (crb(c,2)) { goto L_801742D4; } // 8017424C
  cmps(c,0,(int32_t)c->r[31],0); // 80174250
  if (!crb(c,2)) { goto L_80174268; } // 80174254
  c->r[4]=c->r[25]+0x00000C2Cu; // 80174258
  c->r[3]=0u+0x00000000u; // 8017425C
  c->lr=0x80174264u; f_80179434(c); // 80174260
  goto L_801742CC; // 80174264
L_80174268:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 80174268
  cmpu(c,0,c->r[0],c->r[31]); // 8017426C
  if (!crb(c,2)) { goto L_8017427C; } // 80174270
  c->r[0]=R32(c->r[31]+0x00000004u); // 80174274
  W32(c->r[27]+0x00000010u,c->r[0]); // 80174278
L_8017427C:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 8017427C
  cmpu(c,0,c->r[0],c->r[31]); // 80174280
  if (!crb(c,2)) { goto L_80174290; } // 80174284
  c->r[0]=R32(c->r[31]+0x00000000u); // 80174288
  W32(c->r[27]+0x00000014u,c->r[0]); // 8017428C
L_80174290:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80174290
  cmps(c,0,(int32_t)c->r[3],0); // 80174294
  if (crb(c,2)) { goto L_801742A4; } // 80174298
  c->r[0]=R32(c->r[31]+0x00000004u); // 8017429C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801742A0
L_801742A4:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801742A4
  cmps(c,0,(int32_t)c->r[3],0); // 801742A8
  if (crb(c,2)) { goto L_801742B8; } // 801742AC
  c->r[0]=R32(c->r[31]+0x00000000u); // 801742B0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801742B4
L_801742B8:;
  W32(c->r[31]+0x00000004u,c->r[26]); // 801742B8
  W32(c->r[31]+0x00000000u,c->r[26]); // 801742BC
  c->r[3]=R32(c->r[27]+0x00000018u); // 801742C0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801742C4
  W32(c->r[27]+0x00000018u,c->r[0]); // 801742C8
L_801742CC:;
  c->r[3]=c->r[31]|c->r[31]; // 801742CC
  c->lr=0x801742D4u; f_80165DE8(c); // 801742D0
L_801742D4:;
  c->r[31]=c->r[30]|c->r[30]; // 801742D4
  IRQCHK(c); goto L_80174214; // 801742D8
L_801742DC:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801742DC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801742E0
  c->lr=c->r[0]; // 801742E4
  c->r[1]=c->r[1]+0x00000030u; // 801742E8
  return; // 801742EC
}

// Stop__17CriAuVoiceManagerFQ217CriAuVoiceManager8StopTypeUl
void f_801742F0(Ctx* __restrict c) {
  trace_call(0x801742F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801742F0
  c->r[0]=c->lr; // 801742F4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801742F8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801742FC
  c->r[26]=c->r[3]|c->r[3]; // 80174300
  c->r[27]=c->r[4]|c->r[4]; // 80174304
  c->r[28]=c->r[5]|c->r[5]; // 80174308
  c->r[25]=R32(c->r[3]+0x00000004u); // 8017430C
L_80174310:;
  cmps(c,0,(int32_t)c->r[25],0); // 80174310
  if (crb(c,2)) { goto L_8017437C; } // 80174314
  cmps(c,0,(int32_t)c->r[27],0); // 80174318
  c->r[29]=R32(c->r[25]+0x00000004u); // 8017431C
  if (crb(c,2)) { goto L_80174330; } // 80174320
  cmps(c,0,(int32_t)c->r[27],1); // 80174324
  if (crb(c,2)) { goto L_80174358; } // 80174328
  goto L_80174374; // 8017432C
L_80174330:;
  c->r[3]=c->r[25]|c->r[25]; // 80174330
  c->r[4]=c->r[28]|c->r[28]; // 80174334
  c->r[5]=0u+0xFFFFFFFFu; // 80174338
  c->r[6]=0u+0xFFFFFFFFu; // 8017433C
  c->lr=0x80174344u; f_80167980(c); // 80174340
  cmps(c,0,(int32_t)c->r[3],0); // 80174344
  if (crb(c,2)) { goto L_80174374; } // 80174348
  c->r[3]=c->r[25]|c->r[25]; // 8017434C
  c->lr=0x80174354u; f_801674CC(c); // 80174350
  goto L_80174374; // 80174354
L_80174358:;
  c->r[3]=c->r[25]|c->r[25]; // 80174358
  c->r[4]=c->r[28]|c->r[28]; // 8017435C
  c->lr=0x80174364u; f_80167A24(c); // 80174360
  cmps(c,0,(int32_t)c->r[3],0); // 80174364
  if (crb(c,2)) { goto L_80174374; } // 80174368
  c->r[3]=c->r[25]|c->r[25]; // 8017436C
  c->lr=0x80174374u; f_801674CC(c); // 80174370
L_80174374:;
  c->r[25]=c->r[29]|c->r[29]; // 80174374
  IRQCHK(c); goto L_80174310; // 80174378
L_8017437C:;
  c->r[30]=R32(c->r[26]+0x00000010u); // 8017437C
  c->r[31]=0u+0x80330000u; // 80174380
  c->r[25]=0u+0x00000000u; // 80174384
L_80174388:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174388
  if (crb(c,2)) { goto L_801744EC; } // 8017438C
  cmps(c,0,(int32_t)c->r[27],0); // 80174390
  c->r[29]=R32(c->r[30]+0x00000004u); // 80174394
  if (crb(c,2)) { goto L_801743A8; } // 80174398
  cmps(c,0,(int32_t)c->r[27],1); // 8017439C
  if (crb(c,2)) { goto L_8017444C; } // 801743A0
  goto L_801744E4; // 801743A4
L_801743A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801743A8
  c->r[4]=c->r[28]|c->r[28]; // 801743AC
  c->r[5]=0u+0xFFFFFFFFu; // 801743B0
  c->r[6]=0u+0xFFFFFFFFu; // 801743B4
  c->lr=0x801743BCu; f_80167980(c); // 801743B8
  cmps(c,0,(int32_t)c->r[3],0); // 801743BC
  if (crb(c,2)) { goto L_801744E4; } // 801743C0
  cmps(c,0,(int32_t)c->r[30],0); // 801743C4
  if (!crb(c,2)) { goto L_801743DC; } // 801743C8
  c->r[4]=c->r[31]+0x00000C2Cu; // 801743CC
  c->r[3]=0u+0x00000000u; // 801743D0
  c->lr=0x801743D8u; f_80179434(c); // 801743D4
  goto L_80174440; // 801743D8
L_801743DC:;
  c->r[0]=R32(c->r[26]+0x00000010u); // 801743DC
  cmpu(c,0,c->r[0],c->r[30]); // 801743E0
  if (!crb(c,2)) { goto L_801743F0; } // 801743E4
  c->r[0]=R32(c->r[30]+0x00000004u); // 801743E8
  W32(c->r[26]+0x00000010u,c->r[0]); // 801743EC
L_801743F0:;
  c->r[0]=R32(c->r[26]+0x00000014u); // 801743F0
  cmpu(c,0,c->r[0],c->r[30]); // 801743F4
  if (!crb(c,2)) { goto L_80174404; } // 801743F8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801743FC
  W32(c->r[26]+0x00000014u,c->r[0]); // 80174400
L_80174404:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80174404
  cmps(c,0,(int32_t)c->r[3],0); // 80174408
  if (crb(c,2)) { goto L_80174418; } // 8017440C
  c->r[0]=R32(c->r[30]+0x00000004u); // 80174410
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174414
L_80174418:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80174418
  cmps(c,0,(int32_t)c->r[3],0); // 8017441C
  if (crb(c,2)) { goto L_8017442C; } // 80174420
  c->r[0]=R32(c->r[30]+0x00000000u); // 80174424
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174428
L_8017442C:;
  W32(c->r[30]+0x00000004u,c->r[25]); // 8017442C
  W32(c->r[30]+0x00000000u,c->r[25]); // 80174430
  c->r[3]=R32(c->r[26]+0x00000018u); // 80174434
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174438
  W32(c->r[26]+0x00000018u,c->r[0]); // 8017443C
L_80174440:;
  c->r[3]=c->r[30]|c->r[30]; // 80174440
  c->lr=0x80174448u; f_80165DE8(c); // 80174444
  goto L_801744E4; // 80174448
L_8017444C:;
  c->r[3]=c->r[30]|c->r[30]; // 8017444C
  c->r[4]=c->r[28]|c->r[28]; // 80174450
  c->lr=0x80174458u; f_80167A24(c); // 80174454
  cmps(c,0,(int32_t)c->r[3],0); // 80174458
  if (crb(c,2)) { goto L_801744E4; } // 8017445C
  cmps(c,0,(int32_t)c->r[30],0); // 80174460
  if (!crb(c,2)) { goto L_80174478; } // 80174464
  c->r[4]=c->r[31]+0x00000C2Cu; // 80174468
  c->r[3]=0u+0x00000000u; // 8017446C
  c->lr=0x80174474u; f_80179434(c); // 80174470
  goto L_801744DC; // 80174474
L_80174478:;
  c->r[0]=R32(c->r[26]+0x00000010u); // 80174478
  cmpu(c,0,c->r[0],c->r[30]); // 8017447C
  if (!crb(c,2)) { goto L_8017448C; } // 80174480
  c->r[0]=R32(c->r[30]+0x00000004u); // 80174484
  W32(c->r[26]+0x00000010u,c->r[0]); // 80174488
L_8017448C:;
  c->r[0]=R32(c->r[26]+0x00000014u); // 8017448C
  cmpu(c,0,c->r[0],c->r[30]); // 80174490
  if (!crb(c,2)) { goto L_801744A0; } // 80174494
  c->r[0]=R32(c->r[30]+0x00000000u); // 80174498
  W32(c->r[26]+0x00000014u,c->r[0]); // 8017449C
L_801744A0:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 801744A0
  cmps(c,0,(int32_t)c->r[3],0); // 801744A4
  if (crb(c,2)) { goto L_801744B4; } // 801744A8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801744AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801744B0
L_801744B4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801744B4
  cmps(c,0,(int32_t)c->r[3],0); // 801744B8
  if (crb(c,2)) { goto L_801744C8; } // 801744BC
  c->r[0]=R32(c->r[30]+0x00000000u); // 801744C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801744C4
L_801744C8:;
  W32(c->r[30]+0x00000004u,c->r[25]); // 801744C8
  W32(c->r[30]+0x00000000u,c->r[25]); // 801744CC
  c->r[3]=R32(c->r[26]+0x00000018u); // 801744D0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801744D4
  W32(c->r[26]+0x00000018u,c->r[0]); // 801744D8
L_801744DC:;
  c->r[3]=c->r[30]|c->r[30]; // 801744DC
  c->lr=0x801744E4u; f_80165DE8(c); // 801744E0
L_801744E4:;
  c->r[30]=c->r[29]|c->r[29]; // 801744E4
  IRQCHK(c); goto L_80174388; // 801744E8
L_801744EC:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801744EC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801744F0
  c->lr=c->r[0]; // 801744F4
  c->r[1]=c->r[1]+0x00000030u; // 801744F8
  return; // 801744FC
}

// Release__17CriAuVoiceManagerFP25CriAuVoiceParameterPacketUl
void f_80174500(Ctx* __restrict c) {
  trace_call(0x80174500u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174500
  c->r[0]=c->lr; // 80174504
  W32(c->r[1]+0x00000034u,c->r[0]); // 80174508
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017450C
  c->r[27]=c->r[3]|c->r[3]; // 80174510
  c->r[28]=c->r[5]|c->r[5]; // 80174514
  c->r[25]=R32(c->r[3]+0x00000004u); // 80174518
  c->r[29]=R32(c->r[4]+0x000003B0u); // 8017451C
L_80174520:;
  cmps(c,0,(int32_t)c->r[25],0); // 80174520
  if (crb(c,2)) { goto L_8017456C; } // 80174524
  c->r[26]=R32(c->r[25]+0x00000004u); // 80174528
  c->r[3]=c->r[29]|c->r[29]; // 8017452C
  c->lr=0x80174534u; f_80158510(c); // 80174530
  c->r[24]=c->r[3]|c->r[3]; // 80174534
  c->r[3]=c->r[29]|c->r[29]; // 80174538
  c->lr=0x80174540u; f_80158508(c); // 8017453C
  c->r[4]=c->r[3]|c->r[3]; // 80174540
  c->r[3]=c->r[25]|c->r[25]; // 80174544
  c->r[5]=c->r[24]|c->r[24]; // 80174548
  c->r[6]=c->r[28]|c->r[28]; // 8017454C
  c->lr=0x80174554u; f_80167980(c); // 80174550
  cmps(c,0,(int32_t)c->r[3],0); // 80174554
  if (crb(c,2)) { goto L_80174564; } // 80174558
  c->r[3]=c->r[25]|c->r[25]; // 8017455C
  c->lr=0x80174564u; f_80167448(c); // 80174560
L_80174564:;
  c->r[25]=c->r[26]|c->r[26]; // 80174564
  IRQCHK(c); goto L_80174520; // 80174568
L_8017456C:;
  c->r[31]=R32(c->r[27]+0x00000010u); // 8017456C
  c->r[25]=0u+0x80330000u; // 80174570
  c->r[26]=0u+0x00000000u; // 80174574
L_80174578:;
  cmps(c,0,(int32_t)c->r[31],0); // 80174578
  if (crb(c,2)) { goto L_80174640; } // 8017457C
  c->r[30]=R32(c->r[31]+0x00000004u); // 80174580
  c->r[3]=c->r[29]|c->r[29]; // 80174584
  c->lr=0x8017458Cu; f_80158510(c); // 80174588
  c->r[24]=c->r[3]|c->r[3]; // 8017458C
  c->r[3]=c->r[29]|c->r[29]; // 80174590
  c->lr=0x80174598u; f_80158508(c); // 80174594
  c->r[4]=c->r[3]|c->r[3]; // 80174598
  c->r[3]=c->r[31]|c->r[31]; // 8017459C
  c->r[5]=c->r[24]|c->r[24]; // 801745A0
  c->r[6]=c->r[28]|c->r[28]; // 801745A4
  c->lr=0x801745ACu; f_80167980(c); // 801745A8
  cmps(c,0,(int32_t)c->r[3],0); // 801745AC
  if (crb(c,2)) { goto L_80174638; } // 801745B0
  cmps(c,0,(int32_t)c->r[31],0); // 801745B4
  if (!crb(c,2)) { goto L_801745CC; } // 801745B8
  c->r[4]=c->r[25]+0x00000C2Cu; // 801745BC
  c->r[3]=0u+0x00000000u; // 801745C0
  c->lr=0x801745C8u; f_80179434(c); // 801745C4
  goto L_80174630; // 801745C8
L_801745CC:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 801745CC
  cmpu(c,0,c->r[0],c->r[31]); // 801745D0
  if (!crb(c,2)) { goto L_801745E0; } // 801745D4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801745D8
  W32(c->r[27]+0x00000010u,c->r[0]); // 801745DC
L_801745E0:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 801745E0
  cmpu(c,0,c->r[0],c->r[31]); // 801745E4
  if (!crb(c,2)) { goto L_801745F4; } // 801745E8
  c->r[0]=R32(c->r[31]+0x00000000u); // 801745EC
  W32(c->r[27]+0x00000014u,c->r[0]); // 801745F0
L_801745F4:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 801745F4
  cmps(c,0,(int32_t)c->r[3],0); // 801745F8
  if (crb(c,2)) { goto L_80174608; } // 801745FC
  c->r[0]=R32(c->r[31]+0x00000004u); // 80174600
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174604
L_80174608:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80174608
  cmps(c,0,(int32_t)c->r[3],0); // 8017460C
  if (crb(c,2)) { goto L_8017461C; } // 80174610
  c->r[0]=R32(c->r[31]+0x00000000u); // 80174614
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174618
L_8017461C:;
  W32(c->r[31]+0x00000004u,c->r[26]); // 8017461C
  W32(c->r[31]+0x00000000u,c->r[26]); // 80174620
  c->r[3]=R32(c->r[27]+0x00000018u); // 80174624
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174628
  W32(c->r[27]+0x00000018u,c->r[0]); // 8017462C
L_80174630:;
  c->r[3]=c->r[31]|c->r[31]; // 80174630
  c->lr=0x80174638u; f_80165DE8(c); // 80174634
L_80174638:;
  c->r[31]=c->r[30]|c->r[30]; // 80174638
  IRQCHK(c); goto L_80174578; // 8017463C
L_80174640:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174640
  c->r[0]=R32(c->r[1]+0x00000034u); // 80174644
  c->lr=c->r[0]; // 80174648
  c->r[1]=c->r[1]+0x00000030u; // 8017464C
  return; // 80174650
}

// Release__17CriAuVoiceManagerFUl
void f_80174654(Ctx* __restrict c) {
  trace_call(0x80174654u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174654
  c->r[0]=c->lr; // 80174658
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017465C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174660
  c->r[30]=c->r[3]|c->r[3]; // 80174664
  c->r[31]=c->r[4]|c->r[4]; // 80174668
  c->r[26]=R32(c->r[3]+0x00000004u); // 8017466C
L_80174670:;
  cmps(c,0,(int32_t)c->r[26],0); // 80174670
  if (crb(c,2)) { goto L_801746A8; } // 80174674
  c->r[27]=R32(c->r[26]+0x00000004u); // 80174678
  c->r[3]=c->r[26]|c->r[26]; // 8017467C
  c->r[4]=c->r[31]|c->r[31]; // 80174680
  c->r[5]=0u+0xFFFFFFFFu; // 80174684
  c->r[6]=0u+0xFFFFFFFFu; // 80174688
  c->lr=0x80174690u; f_80167980(c); // 8017468C
  cmps(c,0,(int32_t)c->r[3],0); // 80174690
  if (crb(c,2)) { goto L_801746A0; } // 80174694
  c->r[3]=c->r[26]|c->r[26]; // 80174698
  c->lr=0x801746A0u; f_80167448(c); // 8017469C
L_801746A0:;
  c->r[26]=c->r[27]|c->r[27]; // 801746A0
  IRQCHK(c); goto L_80174670; // 801746A4
L_801746A8:;
  c->r[27]=R32(c->r[30]+0x00000010u); // 801746A8
  c->r[28]=0u+0x80330000u; // 801746AC
  c->r[29]=0u+0x00000000u; // 801746B0
L_801746B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801746B4
  if (crb(c,2)) { goto L_80174768; } // 801746B8
  c->r[26]=R32(c->r[27]+0x00000004u); // 801746BC
  c->r[3]=c->r[27]|c->r[27]; // 801746C0
  c->r[4]=c->r[31]|c->r[31]; // 801746C4
  c->r[5]=0u+0xFFFFFFFFu; // 801746C8
  c->r[6]=0u+0xFFFFFFFFu; // 801746CC
  c->lr=0x801746D4u; f_80167980(c); // 801746D0
  cmps(c,0,(int32_t)c->r[3],0); // 801746D4
  if (crb(c,2)) { goto L_80174760; } // 801746D8
  cmps(c,0,(int32_t)c->r[27],0); // 801746DC
  if (!crb(c,2)) { goto L_801746F4; } // 801746E0
  c->r[4]=c->r[28]+0x00000C2Cu; // 801746E4
  c->r[3]=0u+0x00000000u; // 801746E8
  c->lr=0x801746F0u; f_80179434(c); // 801746EC
  goto L_80174758; // 801746F0
L_801746F4:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 801746F4
  cmpu(c,0,c->r[0],c->r[27]); // 801746F8
  if (!crb(c,2)) { goto L_80174708; } // 801746FC
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174700
  W32(c->r[30]+0x00000010u,c->r[0]); // 80174704
L_80174708:;
  c->r[0]=R32(c->r[30]+0x00000014u); // 80174708
  cmpu(c,0,c->r[0],c->r[27]); // 8017470C
  if (!crb(c,2)) { goto L_8017471C; } // 80174710
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174714
  W32(c->r[30]+0x00000014u,c->r[0]); // 80174718
L_8017471C:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017471C
  cmps(c,0,(int32_t)c->r[3],0); // 80174720
  if (crb(c,2)) { goto L_80174730; } // 80174724
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174728
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017472C
L_80174730:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80174730
  cmps(c,0,(int32_t)c->r[3],0); // 80174734
  if (crb(c,2)) { goto L_80174744; } // 80174738
  c->r[0]=R32(c->r[27]+0x00000000u); // 8017473C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174740
L_80174744:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80174744
  W32(c->r[27]+0x00000000u,c->r[29]); // 80174748
  c->r[3]=R32(c->r[30]+0x00000018u); // 8017474C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174750
  W32(c->r[30]+0x00000018u,c->r[0]); // 80174754
L_80174758:;
  c->r[3]=c->r[27]|c->r[27]; // 80174758
  c->lr=0x80174760u; f_80165DE8(c); // 8017475C
L_80174760:;
  c->r[27]=c->r[26]|c->r[26]; // 80174760
  IRQCHK(c); goto L_801746B4; // 80174764
L_80174768:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174768
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017476C
  c->lr=c->r[0]; // 80174770
  c->r[1]=c->r[1]+0x00000020u; // 80174774
  return; // 80174778
}

// IsPlaying__17CriAuVoiceManagerFP25CriAuVoiceParameterPacketUl
void f_8017477C(Ctx* __restrict c) {
  trace_call(0x8017477Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017477C
  c->r[0]=c->lr; // 80174780
  W32(c->r[1]+0x00000034u,c->r[0]); // 80174784
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174788
  c->r[25]=c->r[3]|c->r[3]; // 8017478C
  c->r[26]=c->r[5]|c->r[5]; // 80174790
  c->r[28]=0u+0x00000000u; // 80174794
  c->r[29]=R32(c->r[3]+0x00000004u); // 80174798
  c->r[27]=R32(c->r[4]+0x000003B0u); // 8017479C
L_801747A0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801747A0
  if (crb(c,2)) { goto L_80174800; } // 801747A4
  c->r[30]=R32(c->r[29]+0x00000004u); // 801747A8
  c->r[3]=c->r[27]|c->r[27]; // 801747AC
  c->lr=0x801747B4u; f_80158510(c); // 801747B0
  c->r[31]=c->r[3]|c->r[3]; // 801747B4
  c->r[3]=c->r[27]|c->r[27]; // 801747B8
  c->lr=0x801747C0u; f_80158508(c); // 801747BC
  c->r[4]=c->r[3]|c->r[3]; // 801747C0
  c->r[3]=c->r[29]|c->r[29]; // 801747C4
  c->r[5]=c->r[31]|c->r[31]; // 801747C8
  c->r[6]=c->r[26]|c->r[26]; // 801747CC
  c->lr=0x801747D4u; f_80167980(c); // 801747D0
  cmps(c,0,(int32_t)c->r[3],0); // 801747D4
  if (crb(c,2)) { goto L_801747F8; } // 801747D8
  c->r[3]=c->r[29]|c->r[29]; // 801747DC
  c->lr=0x801747E4u; f_8016794C(c); // 801747E0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801747E4
  cmpu(c,0,c->r[0],0x00000003u); // 801747E8
  if (crb(c,1)) { goto L_801747F8; } // 801747EC
  c->r[28]=0u+0x00000001u; // 801747F0
  goto L_80174800; // 801747F4
L_801747F8:;
  c->r[29]=c->r[30]|c->r[30]; // 801747F8
  IRQCHK(c); goto L_801747A0; // 801747FC
L_80174800:;
  c->r[30]=R32(c->r[25]+0x00000010u); // 80174800
L_80174804:;
  cmps(c,0,(int32_t)c->r[30],0); // 80174804
  if (crb(c,2)) { goto L_80174864; } // 80174808
  c->r[29]=R32(c->r[30]+0x00000004u); // 8017480C
  c->r[3]=c->r[27]|c->r[27]; // 80174810
  c->lr=0x80174818u; f_80158510(c); // 80174814
  c->r[31]=c->r[3]|c->r[3]; // 80174818
  c->r[3]=c->r[27]|c->r[27]; // 8017481C
  c->lr=0x80174824u; f_80158508(c); // 80174820
  c->r[4]=c->r[3]|c->r[3]; // 80174824
  c->r[3]=c->r[30]|c->r[30]; // 80174828
  c->r[5]=c->r[31]|c->r[31]; // 8017482C
  c->r[6]=c->r[26]|c->r[26]; // 80174830
  c->lr=0x80174838u; f_80167980(c); // 80174834
  cmps(c,0,(int32_t)c->r[3],0); // 80174838
  if (crb(c,2)) { goto L_8017485C; } // 8017483C
  c->r[3]=c->r[30]|c->r[30]; // 80174840
  c->lr=0x80174848u; f_8016794C(c); // 80174844
  c->r[0]=c->r[3]+0xFFFFFFFAu; // 80174848
  cmpu(c,0,c->r[0],0x00000001u); // 8017484C
  if (crb(c,1)) { goto L_8017485C; } // 80174850
  c->r[28]=0u+0x00000001u; // 80174854
  goto L_80174864; // 80174858
L_8017485C:;
  c->r[30]=c->r[29]|c->r[29]; // 8017485C
  IRQCHK(c); goto L_80174804; // 80174860
L_80174864:;
  c->r[3]=c->r[28]|c->r[28]; // 80174864
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174868
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017486C
  c->lr=c->r[0]; // 80174870
  c->r[1]=c->r[1]+0x00000030u; // 80174874
  return; // 80174878
}

// Pause__17CriAuVoiceManagerFUlUlUll
void f_8017487C(Ctx* __restrict c) {
  trace_call(0x8017487Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017487C
  c->r[0]=c->lr; // 80174880
  W32(c->r[1]+0x00000034u,c->r[0]); // 80174884
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174888
  c->r[25]=c->r[3]|c->r[3]; // 8017488C
  c->r[26]=c->r[4]|c->r[4]; // 80174890
  c->r[27]=c->r[5]|c->r[5]; // 80174894
  c->r[28]=c->r[6]|c->r[6]; // 80174898
  c->r[29]=c->r[7]|c->r[7]; // 8017489C
  c->r[30]=R32(c->r[3]+0x00000004u); // 801748A0
L_801748A4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801748A4
  if (crb(c,2)) { goto L_801748E0; } // 801748A8
  c->r[31]=R32(c->r[30]+0x00000004u); // 801748AC
  c->r[3]=c->r[30]|c->r[30]; // 801748B0
  c->r[4]=c->r[26]|c->r[26]; // 801748B4
  c->r[5]=c->r[27]|c->r[27]; // 801748B8
  c->r[6]=c->r[28]|c->r[28]; // 801748BC
  c->lr=0x801748C4u; f_80167980(c); // 801748C0
  cmps(c,0,(int32_t)c->r[3],0); // 801748C4
  if (crb(c,2)) { goto L_801748D8; } // 801748C8
  c->r[3]=c->r[30]|c->r[30]; // 801748CC
  c->r[4]=c->r[29]|c->r[29]; // 801748D0
  c->lr=0x801748D8u; f_80167598(c); // 801748D4
L_801748D8:;
  c->r[30]=c->r[31]|c->r[31]; // 801748D8
  IRQCHK(c); goto L_801748A4; // 801748DC
L_801748E0:;
  c->r[31]=R32(c->r[25]+0x00000010u); // 801748E0
L_801748E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801748E4
  if (crb(c,2)) { goto L_80174920; } // 801748E8
  c->r[30]=R32(c->r[31]+0x00000004u); // 801748EC
  c->r[3]=c->r[31]|c->r[31]; // 801748F0
  c->r[4]=c->r[26]|c->r[26]; // 801748F4
  c->r[5]=c->r[27]|c->r[27]; // 801748F8
  c->r[6]=c->r[28]|c->r[28]; // 801748FC
  c->lr=0x80174904u; f_80167980(c); // 80174900
  cmps(c,0,(int32_t)c->r[3],0); // 80174904
  if (crb(c,2)) { goto L_80174918; } // 80174908
  c->r[3]=c->r[31]|c->r[31]; // 8017490C
  c->r[4]=c->r[29]|c->r[29]; // 80174910
  c->lr=0x80174918u; f_80167608(c); // 80174914
L_80174918:;
  c->r[31]=c->r[30]|c->r[30]; // 80174918
  IRQCHK(c); goto L_801748E4; // 8017491C
L_80174920:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174920
  c->r[0]=R32(c->r[1]+0x00000034u); // 80174924
  c->lr=c->r[0]; // 80174928
  c->r[1]=c->r[1]+0x00000030u; // 8017492C
  return; // 80174930
}

// Execute__17CriAuVoiceManagerFv
void f_80174934(Ctx* __restrict c) {
  trace_call(0x80174934u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174934
  c->r[0]=c->lr; // 80174938
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017493C
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174940
  c->r[25]=c->r[3]|c->r[3]; // 80174944
  c->r[27]=0u+0x80330000u; // 80174948
  c->r[26]=0u+0x00000000u; // 8017494C
  c->r[24]=R32(c->r[3]+0x00000004u); // 80174950
L_80174954:;
  cmps(c,0,(int32_t)c->r[24],0); // 80174954
  if (crb(c,2)) { goto L_80174A44; } // 80174958
  c->r[28]=R32(c->r[24]+0x00000004u); // 8017495C
  c->r[3]=c->r[24]|c->r[24]; // 80174960
  c->lr=0x80174968u; f_80167614(c); // 80174964
  c->r[3]=c->r[24]|c->r[24]; // 80174968
  c->lr=0x80174970u; f_8016794C(c); // 8017496C
  cmps(c,0,(int32_t)c->r[3],5); // 80174970
  if (crb(c,2)) { goto L_80174980; } // 80174974
  cmps(c,0,(int32_t)c->r[3],0); // 80174978
  if (!crb(c,2)) { goto L_80174A3C; } // 8017497C
L_80174980:;
  c->r[3]=c->r[24]|c->r[24]; // 80174980
  c->lr=0x80174988u; f_8016794C(c); // 80174984
  cmps(c,0,(int32_t)c->r[3],0); // 80174988
  if (crb(c,2)) { goto L_801749AC; } // 8017498C
  cmps(c,0,(int32_t)c->r[3],5); // 80174990
  if (crb(c,2)) { goto L_801749AC; } // 80174994
  c->r[3]=c->r[24]|c->r[24]; // 80174998
  c->lr=0x801749A0u; f_80167550(c); // 8017499C
  c->r[3]=c->r[24]|c->r[24]; // 801749A0
  c->lr=0x801749A8u; f_80167614(c); // 801749A4
  goto L_80174A3C; // 801749A8
L_801749AC:;
  cmps(c,0,(int32_t)c->r[24],0); // 801749AC
  if (!crb(c,2)) { goto L_801749C4; } // 801749B0
  c->r[4]=c->r[27]+0x00000C2Cu; // 801749B4
  c->r[3]=0u+0x00000000u; // 801749B8
  c->lr=0x801749C0u; f_80179434(c); // 801749BC
  goto L_80174A28; // 801749C0
L_801749C4:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 801749C4
  cmpu(c,0,c->r[0],c->r[24]); // 801749C8
  if (!crb(c,2)) { goto L_801749D8; } // 801749CC
  c->r[0]=R32(c->r[24]+0x00000004u); // 801749D0
  W32(c->r[25]+0x00000004u,c->r[0]); // 801749D4
L_801749D8:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 801749D8
  cmpu(c,0,c->r[0],c->r[24]); // 801749DC
  if (!crb(c,2)) { goto L_801749EC; } // 801749E0
  c->r[0]=R32(c->r[24]+0x00000000u); // 801749E4
  W32(c->r[25]+0x00000008u,c->r[0]); // 801749E8
L_801749EC:;
  c->r[3]=R32(c->r[24]+0x00000000u); // 801749EC
  cmps(c,0,(int32_t)c->r[3],0); // 801749F0
  if (crb(c,2)) { goto L_80174A00; } // 801749F4
  c->r[0]=R32(c->r[24]+0x00000004u); // 801749F8
  W32(c->r[3]+0x00000004u,c->r[0]); // 801749FC
L_80174A00:;
  c->r[3]=R32(c->r[24]+0x00000004u); // 80174A00
  cmps(c,0,(int32_t)c->r[3],0); // 80174A04
  if (crb(c,2)) { goto L_80174A14; } // 80174A08
  c->r[0]=R32(c->r[24]+0x00000000u); // 80174A0C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174A10
L_80174A14:;
  W32(c->r[24]+0x00000004u,c->r[26]); // 80174A14
  W32(c->r[24]+0x00000000u,c->r[26]); // 80174A18
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 80174A1C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174A20
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 80174A24
L_80174A28:;
  c->r[12]=R32(c->r[24]+0x0000000Cu); // 80174A28
  c->r[3]=c->r[24]|c->r[24]; // 80174A2C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80174A30
  c->ctr=c->r[12]; // 80174A34
  if (true) { c->lr=0x80174A3Cu; dispatch(c,c->ctr); } // 80174A38
L_80174A3C:;
  c->r[24]=c->r[28]|c->r[28]; // 80174A3C
  IRQCHK(c); goto L_80174954; // 80174A40
L_80174A44:;
  c->r[27]=R32(c->r[25]+0x00000010u); // 80174A44
  c->r[30]=0u+0x80330000u; // 80174A48
  c->r[28]=0u+0x80330000u; // 80174A4C
  c->r[29]=0u+0x00000000u; // 80174A50
  c->r[31]=0u+0x80330000u; // 80174A54
L_80174A58:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174A58
  if (crb(c,2)) { goto L_80174D38; } // 80174A5C
  c->r[26]=R32(c->r[27]+0x00000004u); // 80174A60
  c->r[3]=c->r[27]|c->r[27]; // 80174A64
  c->lr=0x80174A6Cu; f_80167614(c); // 80174A68
  c->r[3]=c->r[27]|c->r[27]; // 80174A6C
  c->lr=0x80174A74u; f_8016794C(c); // 80174A70
  cmps(c,0,(int32_t)c->r[3],7); // 80174A74
  if (crb(c,2)) { goto L_80174A88; } // 80174A78
  cmps(c,0,(int32_t)c->r[3],0); // 80174A7C
  if (crb(c,2)) { goto L_80174B84; } // 80174A80
  goto L_80174D30; // 80174A84
L_80174A88:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174A88
  if (!crb(c,2)) { goto L_80174AA0; } // 80174A8C
  c->r[4]=c->r[28]+0x00000C2Cu; // 80174A90
  c->r[3]=0u+0x00000000u; // 80174A94
  c->lr=0x80174A9Cu; f_80179434(c); // 80174A98
  goto L_80174B04; // 80174A9C
L_80174AA0:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 80174AA0
  cmpu(c,0,c->r[0],c->r[27]); // 80174AA4
  if (!crb(c,2)) { goto L_80174AB4; } // 80174AA8
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174AAC
  W32(c->r[25]+0x00000010u,c->r[0]); // 80174AB0
L_80174AB4:;
  c->r[0]=R32(c->r[25]+0x00000014u); // 80174AB4
  cmpu(c,0,c->r[0],c->r[27]); // 80174AB8
  if (!crb(c,2)) { goto L_80174AC8; } // 80174ABC
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174AC0
  W32(c->r[25]+0x00000014u,c->r[0]); // 80174AC4
L_80174AC8:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80174AC8
  cmps(c,0,(int32_t)c->r[3],0); // 80174ACC
  if (crb(c,2)) { goto L_80174ADC; } // 80174AD0
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174AD4
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174AD8
L_80174ADC:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80174ADC
  cmps(c,0,(int32_t)c->r[3],0); // 80174AE0
  if (crb(c,2)) { goto L_80174AF0; } // 80174AE4
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174AE8
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174AEC
L_80174AF0:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80174AF0
  W32(c->r[27]+0x00000000u,c->r[29]); // 80174AF4
  c->r[3]=R32(c->r[25]+0x00000018u); // 80174AF8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174AFC
  W32(c->r[25]+0x00000018u,c->r[0]); // 80174B00
L_80174B04:;
  c->r[3]=c->r[27]|c->r[27]; // 80174B04
  c->lr=0x80174B0Cu; f_80167400(c); // 80174B08
  c->r[24]=R32(c->r[25]+0x00000004u); // 80174B0C
  cmps(c,0,(int32_t)c->r[24],0); // 80174B10
  if (crb(c,2)) { goto L_80174B54; } // 80174B14
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174B18
  cmps(c,0,(int32_t)c->r[0],0); // 80174B1C
  if (!crb(c,2)) { goto L_80174B30; } // 80174B20
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174B24
  cmps(c,0,(int32_t)c->r[0],0); // 80174B28
  if (crb(c,2)) { goto L_80174B3C; } // 80174B2C
L_80174B30:;
  c->r[4]=c->r[30]+0x000008F4u; // 80174B30
  c->r[3]=0u+0x00000000u; // 80174B34
  c->lr=0x80174B3Cu; f_80179434(c); // 80174B38
L_80174B3C:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80174B3C
  W32(c->r[27]+0x00000000u,c->r[0]); // 80174B40
  W32(c->r[27]+0x00000004u,c->r[24]); // 80174B44
  W32(c->r[24]+0x00000000u,c->r[27]); // 80174B48
  W32(c->r[25]+0x00000004u,c->r[27]); // 80174B4C
  goto L_80174B74; // 80174B50
L_80174B54:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 80174B54
  W32(c->r[25]+0x00000004u,c->r[27]); // 80174B58
  cmps(c,0,(int32_t)c->r[0],0); // 80174B5C
  if (crb(c,2)) { goto L_80174B70; } // 80174B60
  c->r[4]=c->r[31]+0x000008CCu; // 80174B64
  c->r[3]=0u+0x00000000u; // 80174B68
  c->lr=0x80174B70u; f_80179434(c); // 80174B6C
L_80174B70:;
  W32(c->r[25]+0x00000008u,c->r[27]); // 80174B70
L_80174B74:;
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 80174B74
  c->r[0]=c->r[3]+0x00000001u; // 80174B78
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 80174B7C
  goto L_80174D30; // 80174B80
L_80174B84:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174B84
  if (!crb(c,2)) { goto L_80174B9C; } // 80174B88
  c->r[4]=c->r[28]+0x00000C2Cu; // 80174B8C
  c->r[3]=0u+0x00000000u; // 80174B90
  c->lr=0x80174B98u; f_80179434(c); // 80174B94
  goto L_80174C00; // 80174B98
L_80174B9C:;
  c->r[0]=R32(c->r[25]+0x00000010u); // 80174B9C
  cmpu(c,0,c->r[0],c->r[27]); // 80174BA0
  if (!crb(c,2)) { goto L_80174BB0; } // 80174BA4
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174BA8
  W32(c->r[25]+0x00000010u,c->r[0]); // 80174BAC
L_80174BB0:;
  c->r[0]=R32(c->r[25]+0x00000014u); // 80174BB0
  cmpu(c,0,c->r[0],c->r[27]); // 80174BB4
  if (!crb(c,2)) { goto L_80174BC4; } // 80174BB8
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174BBC
  W32(c->r[25]+0x00000014u,c->r[0]); // 80174BC0
L_80174BC4:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80174BC4
  cmps(c,0,(int32_t)c->r[3],0); // 80174BC8
  if (crb(c,2)) { goto L_80174BD8; } // 80174BCC
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174BD0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174BD4
L_80174BD8:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80174BD8
  cmps(c,0,(int32_t)c->r[3],0); // 80174BDC
  if (crb(c,2)) { goto L_80174BEC; } // 80174BE0
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174BE4
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174BE8
L_80174BEC:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80174BEC
  W32(c->r[27]+0x00000000u,c->r[29]); // 80174BF0
  c->r[3]=R32(c->r[25]+0x00000018u); // 80174BF4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174BF8
  W32(c->r[25]+0x00000018u,c->r[0]); // 80174BFC
L_80174C00:;
  c->r[24]=R32(c->r[25]+0x00000004u); // 80174C00
  cmps(c,0,(int32_t)c->r[24],0); // 80174C04
  if (crb(c,2)) { goto L_80174C48; } // 80174C08
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174C0C
  cmps(c,0,(int32_t)c->r[0],0); // 80174C10
  if (!crb(c,2)) { goto L_80174C24; } // 80174C14
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174C18
  cmps(c,0,(int32_t)c->r[0],0); // 80174C1C
  if (crb(c,2)) { goto L_80174C30; } // 80174C20
L_80174C24:;
  c->r[4]=c->r[30]+0x000008F4u; // 80174C24
  c->r[3]=0u+0x00000000u; // 80174C28
  c->lr=0x80174C30u; f_80179434(c); // 80174C2C
L_80174C30:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 80174C30
  W32(c->r[27]+0x00000000u,c->r[0]); // 80174C34
  W32(c->r[27]+0x00000004u,c->r[24]); // 80174C38
  W32(c->r[24]+0x00000000u,c->r[27]); // 80174C3C
  W32(c->r[25]+0x00000004u,c->r[27]); // 80174C40
  goto L_80174C68; // 80174C44
L_80174C48:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 80174C48
  W32(c->r[25]+0x00000004u,c->r[27]); // 80174C4C
  cmps(c,0,(int32_t)c->r[0],0); // 80174C50
  if (crb(c,2)) { goto L_80174C64; } // 80174C54
  c->r[4]=c->r[31]+0x000008CCu; // 80174C58
  c->r[3]=0u+0x00000000u; // 80174C5C
  c->lr=0x80174C64u; f_80179434(c); // 80174C60
L_80174C64:;
  W32(c->r[25]+0x00000008u,c->r[27]); // 80174C64
L_80174C68:;
  c->r[4]=R32(c->r[25]+0x0000000Cu); // 80174C68
  c->r[3]=c->r[27]|c->r[27]; // 80174C6C
  c->r[0]=c->r[4]+0x00000001u; // 80174C70
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 80174C74
  c->lr=0x80174C7Cu; f_8016794C(c); // 80174C78
  cmps(c,0,(int32_t)c->r[3],0); // 80174C7C
  if (crb(c,2)) { goto L_80174CA0; } // 80174C80
  cmps(c,0,(int32_t)c->r[3],5); // 80174C84
  if (crb(c,2)) { goto L_80174CA0; } // 80174C88
  c->r[3]=c->r[27]|c->r[27]; // 80174C8C
  c->lr=0x80174C94u; f_80167550(c); // 80174C90
  c->r[3]=c->r[27]|c->r[27]; // 80174C94
  c->lr=0x80174C9Cu; f_80167614(c); // 80174C98
  goto L_80174D30; // 80174C9C
L_80174CA0:;
  cmps(c,0,(int32_t)c->r[27],0); // 80174CA0
  if (!crb(c,2)) { goto L_80174CB8; } // 80174CA4
  c->r[4]=c->r[28]+0x00000C2Cu; // 80174CA8
  c->r[3]=0u+0x00000000u; // 80174CAC
  c->lr=0x80174CB4u; f_80179434(c); // 80174CB0
  goto L_80174D1C; // 80174CB4
L_80174CB8:;
  c->r[0]=R32(c->r[25]+0x00000004u); // 80174CB8
  cmpu(c,0,c->r[0],c->r[27]); // 80174CBC
  if (!crb(c,2)) { goto L_80174CCC; } // 80174CC0
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174CC4
  W32(c->r[25]+0x00000004u,c->r[0]); // 80174CC8
L_80174CCC:;
  c->r[0]=R32(c->r[25]+0x00000008u); // 80174CCC
  cmpu(c,0,c->r[0],c->r[27]); // 80174CD0
  if (!crb(c,2)) { goto L_80174CE0; } // 80174CD4
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174CD8
  W32(c->r[25]+0x00000008u,c->r[0]); // 80174CDC
L_80174CE0:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80174CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80174CE4
  if (crb(c,2)) { goto L_80174CF4; } // 80174CE8
  c->r[0]=R32(c->r[27]+0x00000004u); // 80174CEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174CF0
L_80174CF4:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80174CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80174CF8
  if (crb(c,2)) { goto L_80174D08; } // 80174CFC
  c->r[0]=R32(c->r[27]+0x00000000u); // 80174D00
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174D04
L_80174D08:;
  W32(c->r[27]+0x00000004u,c->r[29]); // 80174D08
  W32(c->r[27]+0x00000000u,c->r[29]); // 80174D0C
  c->r[3]=R32(c->r[25]+0x0000000Cu); // 80174D10
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174D14
  W32(c->r[25]+0x0000000Cu,c->r[0]); // 80174D18
L_80174D1C:;
  c->r[12]=R32(c->r[27]+0x0000000Cu); // 80174D1C
  c->r[3]=c->r[27]|c->r[27]; // 80174D20
  c->r[12]=R32(c->r[12]+0x00000008u); // 80174D24
  c->ctr=c->r[12]; // 80174D28
  if (true) { c->lr=0x80174D30u; dispatch(c,c->ctr); } // 80174D2C
L_80174D30:;
  c->r[27]=c->r[26]|c->r[26]; // 80174D30
  IRQCHK(c); goto L_80174A58; // 80174D34
L_80174D38:;
  {uint32_t ea=c->r[1]+0x00000010u; for(int i=24;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80174D38
  c->r[0]=R32(c->r[1]+0x00000034u); // 80174D3C
  c->lr=c->r[0]; // 80174D40
  c->r[1]=c->r[1]+0x00000030u; // 80174D44
  return; // 80174D48
}

// CanCreateVoice__17CriAuVoiceManagerFP25CriAuVoiceParameterPacket
void f_80174D4C(Ctx* __restrict c) {
  trace_call(0x80174D4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80174D4C
  c->r[0]=c->lr; // 80174D50
  W32(c->r[1]+0x00000034u,c->r[0]); // 80174D54
  c->r[5]=c->r[1]+0x00000008u; // 80174D58
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80174D5C
  c->r[29]=c->r[3]|c->r[3]; // 80174D60
  c->r[30]=c->r[4]|c->r[4]; // 80174D64
  c->lr=0x80174D6Cu; f_8017505C(c); // 80174D68
  cmps(c,0,(int32_t)c->r[3],0); // 80174D6C
  c->r[31]=c->r[3]|c->r[3]; // 80174D70
  if (!crb(c,2)) { goto L_80174D80; } // 80174D74
  c->r[3]=0u+0x00000001u; // 80174D78
  goto L_80175048; // 80174D7C
L_80174D80:;
  c->r[4]=R32(c->r[1]+0x00000008u); // 80174D80
  c->r[0]=R32(c->r[30]+0x000000A4u); // 80174D84
  cmpu(c,0,c->r[4],c->r[0]); // 80174D88
  if (crb(c,0)) { goto L_80175044; } // 80174D8C
  c->r[27]=R32(c->r[30]+0x00000098u); // 80174D90
  c->r[28]=R32(c->r[30]+0x000000A8u); // 80174D94
  c->lr=0x80174D9Cu; f_80167964(c); // 80174D98
  c->r[0]=c->r[28]+c->r[27]; // 80174D9C
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80174DA0
  if (!crb(c,1)) { goto L_80174DB0; } // 80174DA4
  c->r[27]=0u+0x00000000u; // 80174DA8
  goto L_80174DEC; // 80174DAC
L_80174DB0:;
  c->r[27]=R32(c->r[30]+0x00000098u); // 80174DB0
  c->r[3]=c->r[31]|c->r[31]; // 80174DB4
  c->r[28]=R32(c->r[30]+0x000000A8u); // 80174DB8
  c->lr=0x80174DC0u; f_80167964(c); // 80174DBC
  c->r[0]=c->r[28]+c->r[27]; // 80174DC0
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80174DC4
  if (!crb(c,2)) { goto L_80174DE8; } // 80174DC8
  c->r[0]=R32(c->r[30]+0x00000090u); // 80174DCC
  cmps(c,0,(int32_t)c->r[0],0); // 80174DD0
  if (!crb(c,2)) { goto L_80174DE0; } // 80174DD4
  c->r[27]=0u+0x00000001u; // 80174DD8
  goto L_80174DEC; // 80174DDC
L_80174DE0:;
  c->r[27]=0u+0x00000000u; // 80174DE0
  goto L_80174DEC; // 80174DE4
L_80174DE8:;
  c->r[27]=0u+0x00000001u; // 80174DE8
L_80174DEC:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80174DEC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80174DF0
  c->r[0]=0u-c->r[3]; // 80174DF4
  c->r[0]=c->r[0]|c->r[3]; // 80174DF8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80174DFC
  cmps(c,0,(int32_t)c->r[0],1); // 80174E00
  if (!crb(c,2)) { goto L_80174E48; } // 80174E04
  c->r[0]=0u+0x00000000u; // 80174E08
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80174E0C
  cmps(c,0,(int32_t)c->r[27],1); // 80174E10
  c->r[3]=R32(c->r[30]+0x000003A8u); // 80174E14
  c->r[0]=R32(c->r[3]+0x00000014u); // 80174E18
  W32(c->r[1]+0x00000010u,c->r[0]); // 80174E1C
  if (!crb(c,2)) { goto L_80174E34; } // 80174E20
  c->r[3]=c->r[31]|c->r[31]; // 80174E24
  c->lr=0x80174E2Cu; f_80167974(c); // 80174E28
  W32(c->r[1]+0x00000014u,c->r[3]); // 80174E2C
  goto L_80174E3C; // 80174E30
L_80174E34:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80174E34
  W32(c->r[1]+0x00000014u,c->r[0]); // 80174E38
L_80174E3C:;
  c->r[3]=R32(c->r[29]+0x0000001Cu); // 80174E3C
  c->r[4]=c->r[1]+0x0000000Cu; // 80174E40
  c->lr=0x80174E48u; f_80148188(c); // 80174E44
L_80174E48:;
  cmps(c,0,(int32_t)c->r[27],1); // 80174E48
  if (!crb(c,2)) { goto L_8017503C; } // 80174E4C
  c->r[0]=R32(c->r[29]+0x00000020u); // 80174E50
  cmps(c,0,(int32_t)c->r[0],1); // 80174E54
  if (!crb(c,2)) { goto L_80175030; } // 80174E58
  cmps(c,0,(int32_t)c->r[31],0); // 80174E5C
  if (!crb(c,2)) { goto L_80174E78; } // 80174E60
  c->r[4]=0u+0x80330000u; // 80174E64
  c->r[3]=0u+0x00000000u; // 80174E68
  c->r[4]=c->r[4]+0x00000C2Cu; // 80174E6C
  c->lr=0x80174E74u; f_80179434(c); // 80174E70
  goto L_80174EE0; // 80174E74
L_80174E78:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80174E78
  cmpu(c,0,c->r[0],c->r[31]); // 80174E7C
  if (!crb(c,2)) { goto L_80174E8C; } // 80174E80
  c->r[0]=R32(c->r[31]+0x00000004u); // 80174E84
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174E88
L_80174E8C:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 80174E8C
  cmpu(c,0,c->r[0],c->r[31]); // 80174E90
  if (!crb(c,2)) { goto L_80174EA0; } // 80174E94
  c->r[0]=R32(c->r[31]+0x00000000u); // 80174E98
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174E9C
L_80174EA0:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80174EA0
  cmps(c,0,(int32_t)c->r[3],0); // 80174EA4
  if (crb(c,2)) { goto L_80174EB4; } // 80174EA8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80174EAC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174EB0
L_80174EB4:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80174EB4
  cmps(c,0,(int32_t)c->r[3],0); // 80174EB8
  if (crb(c,2)) { goto L_80174EC8; } // 80174EBC
  c->r[0]=R32(c->r[31]+0x00000000u); // 80174EC0
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174EC4
L_80174EC8:;
  c->r[0]=0u+0x00000000u; // 80174EC8
  W32(c->r[31]+0x00000004u,c->r[0]); // 80174ECC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80174ED0
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80174ED4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174ED8
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80174EDC
L_80174EE0:;
  c->r[28]=0u+0x80330000u; // 80174EE0
  c->r[30]=0u+0x00000000u; // 80174EE4
L_80174EE8:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80174EE8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80174EEC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174EF0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80174EF4
  c->ctr=c->r[12]; // 80174EF8
  if (true) { c->lr=0x80174F00u; dispatch(c,c->ctr); } // 80174EFC
  c->r[3]=R32(c->r[29]+0x00000000u); // 80174F00
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80174F04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174F08
  c->r[12]=R32(c->r[12]+0x00000014u); // 80174F0C
  c->ctr=c->r[12]; // 80174F10
  if (true) { c->lr=0x80174F18u; dispatch(c,c->ctr); } // 80174F14
  c->r[3]=c->r[31]|c->r[31]; // 80174F18
  c->lr=0x80174F20u; f_8016794C(c); // 80174F1C
  cmps(c,0,(int32_t)c->r[3],0); // 80174F20
  if (crb(c,2)) { goto L_80174F48; } // 80174F24
  cmps(c,0,(int32_t)c->r[3],5); // 80174F28
  if (crb(c,2)) { goto L_80174F48; } // 80174F2C
  c->r[3]=c->r[31]|c->r[31]; // 80174F30
  c->lr=0x80174F38u; f_80167550(c); // 80174F34
  c->r[3]=c->r[31]|c->r[31]; // 80174F38
  c->lr=0x80174F40u; f_80167614(c); // 80174F3C
  c->r[27]=0u+0x00000000u; // 80174F40
  goto L_80174FDC; // 80174F44
L_80174F48:;
  cmps(c,0,(int32_t)c->r[31],0); // 80174F48
  if (!crb(c,2)) { goto L_80174F60; } // 80174F4C
  c->r[4]=c->r[28]+0x00000C2Cu; // 80174F50
  c->r[3]=0u+0x00000000u; // 80174F54
  c->lr=0x80174F5Cu; f_80179434(c); // 80174F58
  goto L_80174FC4; // 80174F5C
L_80174F60:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 80174F60
  cmpu(c,0,c->r[0],c->r[31]); // 80174F64
  if (!crb(c,2)) { goto L_80174F74; } // 80174F68
  c->r[0]=R32(c->r[31]+0x00000004u); // 80174F6C
  W32(c->r[29]+0x00000004u,c->r[0]); // 80174F70
L_80174F74:;
  c->r[0]=R32(c->r[29]+0x00000008u); // 80174F74
  cmpu(c,0,c->r[0],c->r[31]); // 80174F78
  if (!crb(c,2)) { goto L_80174F88; } // 80174F7C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80174F80
  W32(c->r[29]+0x00000008u,c->r[0]); // 80174F84
L_80174F88:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80174F88
  cmps(c,0,(int32_t)c->r[3],0); // 80174F8C
  if (crb(c,2)) { goto L_80174F9C; } // 80174F90
  c->r[0]=R32(c->r[31]+0x00000004u); // 80174F94
  W32(c->r[3]+0x00000004u,c->r[0]); // 80174F98
L_80174F9C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80174F9C
  cmps(c,0,(int32_t)c->r[3],0); // 80174FA0
  if (crb(c,2)) { goto L_80174FB0; } // 80174FA4
  c->r[0]=R32(c->r[31]+0x00000000u); // 80174FA8
  W32(c->r[3]+0x00000000u,c->r[0]); // 80174FAC
L_80174FB0:;
  W32(c->r[31]+0x00000004u,c->r[30]); // 80174FB0
  W32(c->r[31]+0x00000000u,c->r[30]); // 80174FB4
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80174FB8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80174FBC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 80174FC0
L_80174FC4:;
  c->r[12]=R32(c->r[31]+0x0000000Cu); // 80174FC4
  c->r[3]=c->r[31]|c->r[31]; // 80174FC8
  c->r[12]=R32(c->r[12]+0x00000008u); // 80174FCC
  c->ctr=c->r[12]; // 80174FD0
  if (true) { c->lr=0x80174FD8u; dispatch(c,c->ctr); } // 80174FD4
  c->r[27]=0u+0x00000001u; // 80174FD8
L_80174FDC:;
  c->r[3]=R32(c->r[29]+0x00000000u); // 80174FDC
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80174FE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174FE4
  c->r[12]=R32(c->r[12]+0x00000018u); // 80174FE8
  c->ctr=c->r[12]; // 80174FEC
  if (true) { c->lr=0x80174FF4u; dispatch(c,c->ctr); } // 80174FF0
  c->r[3]=R32(c->r[29]+0x00000000u); // 80174FF4
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80174FF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80174FFC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80175000
  c->ctr=c->r[12]; // 80175004
  if (true) { c->lr=0x8017500Cu; dispatch(c,c->ctr); } // 80175008
  cmps(c,0,(int32_t)c->r[27],1); // 8017500C
  if (crb(c,2)) { goto L_80175044; } // 80175010
  c->r[3]=R32(c->r[29]+0x00000000u); // 80175014
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80175018
  c->r[3]=R32(c->r[3]+0x000000A8u); // 8017501C
  c->lr=0x80175024u; f_8017906C(c); // 80175020
  c->r[3]=0u+0x00000001u; // 80175024
  c->lr=0x8017502Cu; f_8017A4A0(c); // 80175028
  IRQCHK(c); goto L_80174EE8; // 8017502C
L_80175030:;
  c->r[3]=c->r[31]|c->r[31]; // 80175030
  c->lr=0x80175038u; f_801674CC(c); // 80175034
  goto L_80175044; // 80175038
L_8017503C:;
  c->r[3]=0u+0x00000000u; // 8017503C
  goto L_80175048; // 80175040
L_80175044:;
  c->r[3]=0u+0x00000001u; // 80175044
L_80175048:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175048
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017504C
  c->lr=c->r[0]; // 80175050
  c->r[1]=c->r[1]+0x00000030u; // 80175054
  return; // 80175058
}

// FindLowPriorityByGroup__17CriAuVoiceManagerFP25CriAuVoiceParameterPacketPUl
void f_8017505C(Ctx* __restrict c) {
  trace_call(0x8017505Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017505C
  c->r[0]=c->lr; // 80175060
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175064
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80175068
  c->r[26]=c->r[3]|c->r[3]; // 8017506C
  c->r[27]=c->r[5]|c->r[5]; // 80175070
  c->r[28]=0u+0x00000000u; // 80175074
  c->r[30]=R32(c->r[4]+0x00000094u); // 80175078
  cmps(c,0,(int32_t)c->r[30],0); // 8017507C
  if (!crb(c,2)) { goto L_8017508C; } // 80175080
  c->r[3]=0u+0x00000000u; // 80175084
  goto L_80175168; // 80175088
L_8017508C:;
  c->r[4]=0u+0x802D0000u; // 8017508C
  c->r[3]=c->r[30]|c->r[30]; // 80175090
  c->r[4]=c->r[4]+0x000007C8u; // 80175094
  c->r[4]=c->r[4]+0x0000001Du; // 80175098
  c->lr=0x801750A0u; f_800B7948(c); // 8017509C
  cmps(c,0,(int32_t)c->r[3],0); // 801750A0
  if (!crb(c,2)) { goto L_801750B0; } // 801750A4
  c->r[3]=0u+0x00000000u; // 801750A8
  goto L_80175168; // 801750AC
L_801750B0:;
  c->r[29]=R32(c->r[26]+0x00000008u); // 801750B0
  c->r[0]=0u+0x00000000u; // 801750B4
  W32(c->r[27]+0x00000000u,c->r[0]); // 801750B8
L_801750BC:;
  cmps(c,0,(int32_t)c->r[29],0); // 801750BC
  if (crb(c,2)) { goto L_80175164; } // 801750C0
  c->r[3]=c->r[29]|c->r[29]; // 801750C4
  c->r[31]=0u+0x00000000u; // 801750C8
  c->lr=0x801750D0u; f_8016796C(c); // 801750CC
  c->r[4]=c->r[30]|c->r[30]; // 801750D0
  c->lr=0x801750D8u; f_800B7948(c); // 801750D4
  cmps(c,0,(int32_t)c->r[3],0); // 801750D8
  if (!crb(c,2)) { goto L_80175118; } // 801750DC
  c->r[3]=c->r[29]|c->r[29]; // 801750E0
  c->lr=0x801750E8u; f_8016794C(c); // 801750E4
  c->r[0]=R32(c->r[26]+0x00000020u); // 801750E8
  cmps(c,0,(int32_t)c->r[0],1); // 801750EC
  if (!crb(c,2)) { goto L_80175108; } // 801750F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801750F4
  cmpu(c,0,c->r[0],0x00000003u); // 801750F8
  if (crb(c,1)) { goto L_80175118; } // 801750FC
  c->r[31]=0u+0x00000001u; // 80175100
  goto L_80175118; // 80175104
L_80175108:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80175108
  cmpu(c,0,c->r[0],0x00000002u); // 8017510C
  if (crb(c,1)) { goto L_80175118; } // 80175110
  c->r[31]=0u+0x00000001u; // 80175114
L_80175118:;
  cmps(c,0,(int32_t)c->r[31],1); // 80175118
  if (!crb(c,2)) { goto L_8017515C; } // 8017511C
  cmps(c,0,(int32_t)c->r[28],0); // 80175120
  if (!crb(c,2)) { goto L_80175130; } // 80175124
  c->r[28]=c->r[29]|c->r[29]; // 80175128
  goto L_80175150; // 8017512C
L_80175130:;
  c->r[3]=c->r[28]|c->r[28]; // 80175130
  c->lr=0x80175138u; f_80167964(c); // 80175134
  c->r[31]=c->r[3]|c->r[3]; // 80175138
  c->r[3]=c->r[29]|c->r[29]; // 8017513C
  c->lr=0x80175144u; f_80167964(c); // 80175140
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[31]); // 80175144
  if (!crb(c,0)) { goto L_80175150; } // 80175148
  c->r[28]=c->r[29]|c->r[29]; // 8017514C
L_80175150:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80175150
  c->r[0]=c->r[3]+0x00000001u; // 80175154
  W32(c->r[27]+0x00000000u,c->r[0]); // 80175158
L_8017515C:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 8017515C
  IRQCHK(c); goto L_801750BC; // 80175160
L_80175164:;
  c->r[3]=c->r[28]|c->r[28]; // 80175164
L_80175168:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175168
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017516C
  c->lr=c->r[0]; // 80175170
  c->r[1]=c->r[1]+0x00000020u; // 80175174
  return; // 80175178
}

// GetBufferedTime__17CriAuVoiceManagerFUlUl
void f_8017517C(Ctx* __restrict c) {
  trace_call(0x8017517Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017517C
  c->r[0]=c->lr; // 80175180
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175184
  c->r[11]=c->r[1]+0x00000020u; // 80175188
  c->lr=0x80175190u; f_800ADA2C(c); // 8017518C
  c->r[30]=R32(c->r[3]+0x00000008u); // 80175190
  c->r[27]=c->r[4]|c->r[4]; // 80175194
  c->r[28]=c->r[5]|c->r[5]; // 80175198
  c->r[29]=0u+0x00000000u; // 8017519C
  c->r[31]=0u+0x00000000u; // 801751A0
  goto L_801751DC; // 801751A4
L_801751A8:;
  c->r[3]=c->r[30]|c->r[30]; // 801751A8
  c->r[4]=c->r[27]|c->r[27]; // 801751AC
  c->r[5]=0u+0xFFFFFFFFu; // 801751B0
  c->r[6]=0u+0xFFFFFFFFu; // 801751B4
  c->lr=0x801751BCu; f_80167980(c); // 801751B8
  cmps(c,0,(int32_t)c->r[3],0); // 801751BC
  if (crb(c,2)) { goto L_801751D8; } // 801751C0
  cmpu(c,0,c->r[31],c->r[28]); // 801751C4
  if (!crb(c,2)) { goto L_801751D4; } // 801751C8
  c->r[29]=c->r[30]|c->r[30]; // 801751CC
  goto L_801751E4; // 801751D0
L_801751D4:;
  c->r[31]=c->r[31]+0x00000001u; // 801751D4
L_801751D8:;
  c->r[30]=R32(c->r[30]+0x00000000u); // 801751D8
L_801751DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801751DC
  if (!crb(c,2)) { IRQCHK(c); goto L_801751A8; } // 801751E0
L_801751E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801751E4
  if (crb(c,2)) { goto L_801751F8; } // 801751E8
  c->r[3]=c->r[29]|c->r[29]; // 801751EC
  c->lr=0x801751F4u; f_80167A4C(c); // 801751F0
  goto L_801751FC; // 801751F4
L_801751F8:;
  {uint32_t ea=c->r[2]+0xFFFFB4A0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801751F8
L_801751FC:;
  c->r[11]=c->r[1]+0x00000020u; // 801751FC
  c->lr=0x80175204u; f_800ADA78(c); // 80175200
  c->r[0]=R32(c->r[1]+0x00000024u); // 80175204
  c->lr=c->r[0]; // 80175208
  c->r[1]=c->r[1]+0x00000020u; // 8017520C
  return; // 80175210
}

// GetNumPlayedSamples__17CriAuVoiceManagerFUlUlRUl
void f_80175214(Ctx* __restrict c) {
  trace_call(0x80175214u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175214
  c->r[0]=c->lr; // 80175218
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017521C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80175220
  W32(c->r[1]+0x00000018u,c->r[30]); // 80175224
  c->r[30]=c->r[6]|c->r[6]; // 80175228
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017522C
  c->r[29]=c->r[5]|c->r[5]; // 80175230
  W32(c->r[1]+0x00000010u,c->r[28]); // 80175234
  c->r[28]=c->r[4]|c->r[4]; // 80175238
  c->r[31]=R32(c->r[3]+0x00000004u); // 8017523C
  goto L_80175268; // 80175240
L_80175244:;
  c->r[3]=c->r[31]|c->r[31]; // 80175244
  c->r[4]=c->r[28]|c->r[28]; // 80175248
  c->r[5]=c->r[29]|c->r[29]; // 8017524C
  c->r[6]=0u+0xFFFFFFFFu; // 80175250
  c->lr=0x80175258u; f_80167980(c); // 80175254
  cmps(c,0,(int32_t)c->r[3],0); // 80175258
  if (crb(c,2)) { goto L_80175264; } // 8017525C
  goto L_80175274; // 80175260
L_80175264:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 80175264
L_80175268:;
  cmps(c,0,(int32_t)c->r[31],0); // 80175268
  if (!crb(c,2)) { IRQCHK(c); goto L_80175244; } // 8017526C
  c->r[31]=0u+0x00000000u; // 80175270
L_80175274:;
  cmps(c,0,(int32_t)c->r[31],0); // 80175274
  if (crb(c,2)) { goto L_80175290; } // 80175278
  c->r[3]=c->r[31]|c->r[31]; // 8017527C
  c->lr=0x80175284u; f_80167A54(c); // 80175280
  W32(c->r[30]+0x00000000u,c->r[3]); // 80175284
  c->r[3]=0u+0x00000001u; // 80175288
  goto L_8017529C; // 8017528C
L_80175290:;
  c->r[0]=0u+0x00000000u; // 80175290
  W32(c->r[30]+0x00000000u,c->r[0]); // 80175294
  c->r[3]=0u+0x00000000u; // 80175298
L_8017529C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017529C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801752A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801752A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801752A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801752AC
  c->lr=c->r[0]; // 801752B0
  c->r[1]=c->r[1]+0x00000020u; // 801752B4
  return; // 801752B8
}

// GetPlaybackPosition__17CriAuVoiceManagerFUlUlRUlRUl
void f_801752BC(Ctx* __restrict c) {
  trace_call(0x801752BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801752BC
  c->r[0]=c->lr; // 801752C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801752C4
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801752C8
  c->r[27]=c->r[4]|c->r[4]; // 801752CC
  c->r[28]=c->r[5]|c->r[5]; // 801752D0
  c->r[29]=c->r[6]|c->r[6]; // 801752D4
  c->r[30]=c->r[7]|c->r[7]; // 801752D8
  c->r[31]=R32(c->r[3]+0x00000004u); // 801752DC
  goto L_80175308; // 801752E0
L_801752E4:;
  c->r[3]=c->r[31]|c->r[31]; // 801752E4
  c->r[4]=c->r[27]|c->r[27]; // 801752E8
  c->r[5]=c->r[28]|c->r[28]; // 801752EC
  c->r[6]=0u+0xFFFFFFFFu; // 801752F0
  c->lr=0x801752F8u; f_80167980(c); // 801752F4
  cmps(c,0,(int32_t)c->r[3],0); // 801752F8
  if (crb(c,2)) { goto L_80175304; } // 801752FC
  goto L_80175314; // 80175300
L_80175304:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 80175304
L_80175308:;
  cmps(c,0,(int32_t)c->r[31],0); // 80175308
  if (!crb(c,2)) { IRQCHK(c); goto L_801752E4; } // 8017530C
  c->r[31]=0u+0x00000000u; // 80175310
L_80175314:;
  cmps(c,0,(int32_t)c->r[31],0); // 80175314
  if (crb(c,2)) { goto L_8017533C; } // 80175318
  c->r[3]=c->r[31]|c->r[31]; // 8017531C
  c->lr=0x80175324u; f_80167A68(c); // 80175320
  W32(c->r[29]+0x00000000u,c->r[3]); // 80175324
  c->r[3]=c->r[31]|c->r[31]; // 80175328
  c->lr=0x80175330u; f_80167A5C(c); // 8017532C
  c->lr=0x80175334u; f_800AD904(c); // 80175330
  W32(c->r[30]+0x00000000u,c->r[3]); // 80175334
  goto L_8017534C; // 80175338
L_8017533C:;
  c->r[0]=0u+0x00000000u; // 8017533C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80175340
  c->r[0]=0u+0x00000001u; // 80175344
  W32(c->r[30]+0x00000000u,c->r[0]); // 80175348
L_8017534C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8017534C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80175350
  c->lr=c->r[0]; // 80175354
  c->r[1]=c->r[1]+0x00000020u; // 80175358
  return; // 8017535C
}

// GetTime__17CriAuVoiceManagerFUlUlRUlRUl
void f_80175360(Ctx* __restrict c) {
  trace_call(0x80175360u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175360
  c->r[0]=c->lr; // 80175364
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175368
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8017536C
  c->r[27]=c->r[4]|c->r[4]; // 80175370
  c->r[28]=c->r[5]|c->r[5]; // 80175374
  c->r[29]=c->r[6]|c->r[6]; // 80175378
  c->r[30]=c->r[7]|c->r[7]; // 8017537C
  c->r[31]=R32(c->r[3]+0x00000004u); // 80175380
  goto L_801753AC; // 80175384
L_80175388:;
  c->r[3]=c->r[31]|c->r[31]; // 80175388
  c->r[4]=c->r[27]|c->r[27]; // 8017538C
  c->r[5]=c->r[28]|c->r[28]; // 80175390
  c->r[6]=0u+0xFFFFFFFFu; // 80175394
  c->lr=0x8017539Cu; f_80167980(c); // 80175398
  cmps(c,0,(int32_t)c->r[3],0); // 8017539C
  if (crb(c,2)) { goto L_801753A8; } // 801753A0
  goto L_801753B8; // 801753A4
L_801753A8:;
  c->r[31]=R32(c->r[31]+0x00000004u); // 801753A8
L_801753AC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801753AC
  if (!crb(c,2)) { IRQCHK(c); goto L_80175388; } // 801753B0
  c->r[31]=0u+0x00000000u; // 801753B4
L_801753B8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801753B8
  if (crb(c,2)) { goto L_801753E4; } // 801753BC
  c->r[3]=c->r[31]|c->r[31]; // 801753C0
  c->lr=0x801753C8u; f_80167A54(c); // 801753C4
  W32(c->r[29]+0x00000000u,c->r[3]); // 801753C8
  c->r[3]=c->r[31]|c->r[31]; // 801753CC
  c->lr=0x801753D4u; f_80167A5C(c); // 801753D0
  c->lr=0x801753D8u; f_800AD904(c); // 801753D4
  W32(c->r[30]+0x00000000u,c->r[3]); // 801753D8
  c->r[3]=0u+0x00000001u; // 801753DC
  goto L_801753F4; // 801753E0
L_801753E4:;
  c->r[0]=0u+0x00000000u; // 801753E4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801753E8
  c->r[3]=0u+0x00000000u; // 801753EC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801753F0
L_801753F4:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801753F4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801753F8
  c->lr=c->r[0]; // 801753FC
  c->r[1]=c->r[1]+0x00000020u; // 80175400
  return; // 80175404
}

// GetTotalTime__17CriAuVoiceManagerFUlUlRUlRUl
void f_80175408(Ctx* __restrict c) {
  trace_call(0x80175408u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175408
  c->r[0]=c->lr; // 8017540C
  W32(c->r[1]+0x00000064u,c->r[0]); // 80175410
  c->r[11]=c->r[1]+0x00000040u; // 80175414
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80175418
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 8017541C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80175420
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80175424
  c->lr=0x8017542Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80175428
  c->r[0]=0u+0x00000000u; // 8017542C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80175430
  c->r[0]=0u+0x00000001u; // 80175434
  {uint32_t ea=c->r[2]+0xFFFFB4A0u; c->f[30]=c->ps1[30]=RF32(ea);} // 80175438
  W32(c->r[7]+0x00000000u,c->r[0]); // 8017543C
  c->r[22]=c->r[3]|c->r[3]; // 80175440
  {uint32_t ea=c->r[2]+0xFFFFB4A8u; c->f[31]=RF64(ea);} // 80175444
  c->r[23]=c->r[4]|c->r[4]; // 80175448
  c->r[24]=c->r[5]|c->r[5]; // 8017544C
  c->r[25]=c->r[6]|c->r[6]; // 80175450
  c->r[26]=c->r[7]|c->r[7]; // 80175454
  c->r[27]=0u+0x00000000u; // 80175458
  c->r[31]=0u+0x43300000u; // 8017545C
L_80175460:;
  c->r[29]=R32(c->r[22]+0x00000008u); // 80175460
  c->r[28]=0u+0x00000000u; // 80175464
  c->r[30]=0u+0x00000000u; // 80175468
  goto L_801754A4; // 8017546C
L_80175470:;
  c->r[3]=c->r[29]|c->r[29]; // 80175470
  c->r[4]=c->r[23]|c->r[23]; // 80175474
  c->r[5]=c->r[24]|c->r[24]; // 80175478
  c->r[6]=0u+0xFFFFFFFFu; // 8017547C
  c->lr=0x80175484u; f_80167980(c); // 80175480
  cmps(c,0,(int32_t)c->r[3],0); // 80175484
  if (crb(c,2)) { goto L_801754A0; } // 80175488
  cmpu(c,0,c->r[30],c->r[27]); // 8017548C
  if (!crb(c,2)) { goto L_8017549C; } // 80175490
  c->r[28]=c->r[29]|c->r[29]; // 80175494
  goto L_801754AC; // 80175498
L_8017549C:;
  c->r[30]=c->r[30]+0x00000001u; // 8017549C
L_801754A0:;
  c->r[29]=R32(c->r[29]+0x00000000u); // 801754A0
L_801754A4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801754A4
  if (!crb(c,2)) { IRQCHK(c); goto L_80175470; } // 801754A8
L_801754AC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801754AC
  if (crb(c,2)) { goto L_8017550C; } // 801754B0
  c->r[3]=c->r[28]|c->r[28]; // 801754B4
  c->lr=0x801754BCu; f_80167A70(c); // 801754B8
  c->r[30]=c->r[3]|c->r[3]; // 801754BC
  c->r[3]=c->r[28]|c->r[28]; // 801754C0
  c->lr=0x801754C8u; f_80167A5C(c); // 801754C4
  c->lr=0x801754CCu; f_800AD904(c); // 801754C8
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 801754CC
  W32(c->r[1]+0x00000008u,c->r[31]); // 801754D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 801754D4
  W32(c->r[1]+0x00000014u,c->r[3]); // 801754D8
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[31]); // 801754DC
  W32(c->r[1]+0x00000010u,c->r[31]); // 801754E0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 801754E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801754E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801754EC
  fcmp(c,0,c->f[30],c->f[0]); // 801754F0
  if (!crb(c,0)) { goto L_80175504; } // 801754F4
  W32(c->r[25]+0x00000000u,c->r[30]); // 801754F8
  c->f[30]=c->f[0]; // 801754FC
  W32(c->r[26]+0x00000000u,c->r[3]); // 80175500
L_80175504:;
  c->r[27]=c->r[27]+0x00000001u; // 80175504
  IRQCHK(c); goto L_80175460; // 80175508
L_8017550C:;
  c->r[11]=c->r[1]+0x00000040u; // 8017550C
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80175510
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80175514
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80175518
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 8017551C
  c->lr=0x80175524u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80175520
  c->r[0]=R32(c->r[1]+0x00000064u); // 80175524
  c->lr=c->r[0]; // 80175528
  c->r[1]=c->r[1]+0x00000060u; // 8017552C
  return; // 80175530
}

// DestroyRelatedVoice__17CriAuVoiceManagerFP13CriAuCueSheet
void f_80175534(Ctx* __restrict c) {
  trace_call(0x80175534u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175534
  c->r[0]=c->lr; // 80175538
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017553C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80175540
  c->r[27]=c->r[3]|c->r[3]; // 80175544
  c->r[28]=c->r[4]|c->r[4]; // 80175548
  c->r[31]=0u+0x80330000u; // 8017554C
  c->r[26]=0u+0x00000000u; // 80175550
  c->r[30]=R32(c->r[3]+0x00000004u); // 80175554
L_80175558:;
  cmps(c,0,(int32_t)c->r[30],0); // 80175558
  if (crb(c,2)) { goto L_801756C0; } // 8017555C
  c->r[0]=R32(c->r[30]+0x00000040u); // 80175560
  c->r[29]=R32(c->r[30]+0x00000004u); // 80175564
  cmpu(c,0,c->r[0],c->r[28]); // 80175568
  if (!crb(c,2)) { goto L_801756B8; } // 8017556C
L_80175570:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80175570
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80175574
  c->r[12]=R32(c->r[3]+0x00000000u); // 80175578
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8017557C
  c->ctr=c->r[12]; // 80175580
  if (true) { c->lr=0x80175588u; dispatch(c,c->ctr); } // 80175584
  c->r[3]=R32(c->r[27]+0x00000000u); // 80175588
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8017558C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80175590
  c->r[12]=R32(c->r[12]+0x00000014u); // 80175594
  c->ctr=c->r[12]; // 80175598
  if (true) { c->lr=0x801755A0u; dispatch(c,c->ctr); } // 8017559C
  c->r[3]=c->r[30]|c->r[30]; // 801755A0
  c->lr=0x801755A8u; f_8016794C(c); // 801755A4
  cmps(c,0,(int32_t)c->r[3],0); // 801755A8
  if (crb(c,2)) { goto L_801755D0; } // 801755AC
  cmps(c,0,(int32_t)c->r[3],5); // 801755B0
  if (crb(c,2)) { goto L_801755D0; } // 801755B4
  c->r[3]=c->r[30]|c->r[30]; // 801755B8
  c->lr=0x801755C0u; f_80167550(c); // 801755BC
  c->r[3]=c->r[30]|c->r[30]; // 801755C0
  c->lr=0x801755C8u; f_80167614(c); // 801755C4
  c->r[25]=0u+0x00000000u; // 801755C8
  goto L_80175664; // 801755CC
L_801755D0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801755D0
  if (!crb(c,2)) { goto L_801755E8; } // 801755D4
  c->r[4]=c->r[31]+0x00000C2Cu; // 801755D8
  c->r[3]=0u+0x00000000u; // 801755DC
  c->lr=0x801755E4u; f_80179434(c); // 801755E0
  goto L_8017564C; // 801755E4
L_801755E8:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 801755E8
  cmpu(c,0,c->r[0],c->r[30]); // 801755EC
  if (!crb(c,2)) { goto L_801755FC; } // 801755F0
  c->r[0]=R32(c->r[30]+0x00000004u); // 801755F4
  W32(c->r[27]+0x00000004u,c->r[0]); // 801755F8
L_801755FC:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 801755FC
  cmpu(c,0,c->r[0],c->r[30]); // 80175600
  if (!crb(c,2)) { goto L_80175610; } // 80175604
  c->r[0]=R32(c->r[30]+0x00000000u); // 80175608
  W32(c->r[27]+0x00000008u,c->r[0]); // 8017560C
L_80175610:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80175610
  cmps(c,0,(int32_t)c->r[3],0); // 80175614
  if (crb(c,2)) { goto L_80175624; } // 80175618
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017561C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80175620
L_80175624:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80175624
  cmps(c,0,(int32_t)c->r[3],0); // 80175628
  if (crb(c,2)) { goto L_80175638; } // 8017562C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80175630
  W32(c->r[3]+0x00000000u,c->r[0]); // 80175634
L_80175638:;
  W32(c->r[30]+0x00000004u,c->r[26]); // 80175638
  W32(c->r[30]+0x00000000u,c->r[26]); // 8017563C
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80175640
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80175644
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80175648
L_8017564C:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8017564C
  c->r[3]=c->r[30]|c->r[30]; // 80175650
  c->r[12]=R32(c->r[12]+0x00000008u); // 80175654
  c->ctr=c->r[12]; // 80175658
  if (true) { c->lr=0x80175660u; dispatch(c,c->ctr); } // 8017565C
  c->r[25]=0u+0x00000001u; // 80175660
L_80175664:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 80175664
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80175668
  c->r[12]=R32(c->r[3]+0x00000000u); // 8017566C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80175670
  c->ctr=c->r[12]; // 80175674
  if (true) { c->lr=0x8017567Cu; dispatch(c,c->ctr); } // 80175678
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017567C
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80175680
  c->r[12]=R32(c->r[3]+0x00000000u); // 80175684
  c->r[12]=R32(c->r[12]+0x00000010u); // 80175688
  c->ctr=c->r[12]; // 8017568C
  if (true) { c->lr=0x80175694u; dispatch(c,c->ctr); } // 80175690
  cmps(c,0,(int32_t)c->r[25],1); // 80175694
  if (crb(c,2)) { goto L_801756B8; } // 80175698
  c->r[3]=R32(c->r[27]+0x00000000u); // 8017569C
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801756A0
  c->r[3]=R32(c->r[3]+0x000000A8u); // 801756A4
  c->lr=0x801756ACu; f_8017906C(c); // 801756A8
  c->r[3]=0u+0x00000001u; // 801756AC
  c->lr=0x801756B4u; f_8017A4A0(c); // 801756B0
  IRQCHK(c); goto L_80175570; // 801756B4
L_801756B8:;
  c->r[30]=c->r[29]|c->r[29]; // 801756B8
  IRQCHK(c); goto L_80175558; // 801756BC
L_801756C0:;
  c->r[25]=R32(c->r[27]+0x00000010u); // 801756C0
  c->r[30]=0u+0x80330000u; // 801756C4
  c->r[29]=0u+0x00000000u; // 801756C8
L_801756CC:;
  cmps(c,1,(int32_t)c->r[25],0); // 801756CC
  if (crb(c,6)) { goto L_80175768; } // 801756D0
  c->r[0]=R32(c->r[25]+0x00000040u); // 801756D4
  c->r[26]=R32(c->r[25]+0x00000004u); // 801756D8
  cmpu(c,0,c->r[0],c->r[28]); // 801756DC
  if (!crb(c,2)) { goto L_80175760; } // 801756E0
  if (!crb(c,6)) { goto L_801756F8; } // 801756E4
  c->r[4]=c->r[30]+0x00000C2Cu; // 801756E8
  c->r[3]=0u+0x00000000u; // 801756EC
  c->lr=0x801756F4u; f_80179434(c); // 801756F0
  goto L_80175758; // 801756F4
L_801756F8:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 801756F8
  cmpu(c,0,c->r[0],c->r[25]); // 801756FC
  if (!crb(c,2)) { goto L_80175708; } // 80175700
  W32(c->r[27]+0x00000010u,c->r[26]); // 80175704
L_80175708:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 80175708
  cmpu(c,0,c->r[0],c->r[25]); // 8017570C
  if (!crb(c,2)) { goto L_8017571C; } // 80175710
  c->r[0]=R32(c->r[25]+0x00000000u); // 80175714
  W32(c->r[27]+0x00000014u,c->r[0]); // 80175718
L_8017571C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8017571C
  cmps(c,0,(int32_t)c->r[3],0); // 80175720
  if (crb(c,2)) { goto L_80175730; } // 80175724
  c->r[0]=R32(c->r[25]+0x00000004u); // 80175728
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017572C
L_80175730:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80175730
  cmps(c,0,(int32_t)c->r[3],0); // 80175734
  if (crb(c,2)) { goto L_80175744; } // 80175738
  c->r[0]=R32(c->r[25]+0x00000000u); // 8017573C
  W32(c->r[3]+0x00000000u,c->r[0]); // 80175740
L_80175744:;
  W32(c->r[25]+0x00000004u,c->r[29]); // 80175744
  W32(c->r[25]+0x00000000u,c->r[29]); // 80175748
  c->r[3]=R32(c->r[27]+0x00000018u); // 8017574C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80175750
  W32(c->r[27]+0x00000018u,c->r[0]); // 80175754
L_80175758:;
  c->r[3]=c->r[25]|c->r[25]; // 80175758
  c->lr=0x80175760u; f_80165DE8(c); // 8017575C
L_80175760:;
  c->r[25]=c->r[26]|c->r[26]; // 80175760
  IRQCHK(c); goto L_801756CC; // 80175764
L_80175768:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175768
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017576C
  c->lr=c->r[0]; // 80175770
  c->r[1]=c->r[1]+0x00000030u; // 80175774
  return; // 80175778
}

// DestroyRelatedVoice__17CriAuVoiceManagerFUl
void f_8017577C(Ctx* __restrict c) {
  trace_call(0x8017577Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017577C
  c->r[0]=c->lr; // 80175780
  W32(c->r[1]+0x00000034u,c->r[0]); // 80175784
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80175788
  c->r[27]=c->r[3]|c->r[3]; // 8017578C
  c->r[28]=c->r[4]|c->r[4]; // 80175790
  c->r[31]=0u+0x80330000u; // 80175794
  c->r[26]=0u+0x00000000u; // 80175798
  c->r[30]=R32(c->r[3]+0x00000004u); // 8017579C
L_801757A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 801757A0
  if (crb(c,2)) { goto L_80175918; } // 801757A4
  c->r[29]=R32(c->r[30]+0x00000004u); // 801757A8
  c->r[3]=c->r[30]|c->r[30]; // 801757AC
  c->r[4]=c->r[28]|c->r[28]; // 801757B0
  c->r[5]=0u+0xFFFFFFFFu; // 801757B4
  c->r[6]=0u+0xFFFFFFFFu; // 801757B8
  c->lr=0x801757C0u; f_80167980(c); // 801757BC
  cmps(c,0,(int32_t)c->r[3],0); // 801757C0
  if (crb(c,2)) { goto L_80175910; } // 801757C4
L_801757C8:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801757C8
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801757CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801757D0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801757D4
  c->ctr=c->r[12]; // 801757D8
  if (true) { c->lr=0x801757E0u; dispatch(c,c->ctr); } // 801757DC
  c->r[3]=R32(c->r[27]+0x00000000u); // 801757E0
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801757E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801757E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801757EC
  c->ctr=c->r[12]; // 801757F0
  if (true) { c->lr=0x801757F8u; dispatch(c,c->ctr); } // 801757F4
  c->r[3]=c->r[30]|c->r[30]; // 801757F8
  c->lr=0x80175800u; f_8016794C(c); // 801757FC
  cmps(c,0,(int32_t)c->r[3],0); // 80175800
  if (crb(c,2)) { goto L_80175828; } // 80175804
  cmps(c,0,(int32_t)c->r[3],5); // 80175808
  if (crb(c,2)) { goto L_80175828; } // 8017580C
  c->r[3]=c->r[30]|c->r[30]; // 80175810
  c->lr=0x80175818u; f_80167550(c); // 80175814
  c->r[3]=c->r[30]|c->r[30]; // 80175818
  c->lr=0x80175820u; f_80167614(c); // 8017581C
  c->r[25]=0u+0x00000000u; // 80175820
  goto L_801758BC; // 80175824
L_80175828:;
  cmps(c,0,(int32_t)c->r[30],0); // 80175828
  if (!crb(c,2)) { goto L_80175840; } // 8017582C
  c->r[4]=c->r[31]+0x00000C2Cu; // 80175830
  c->r[3]=0u+0x00000000u; // 80175834
  c->lr=0x8017583Cu; f_80179434(c); // 80175838
  goto L_801758A4; // 8017583C
L_80175840:;
  c->r[0]=R32(c->r[27]+0x00000004u); // 80175840
  cmpu(c,0,c->r[0],c->r[30]); // 80175844
  if (!crb(c,2)) { goto L_80175854; } // 80175848
  c->r[0]=R32(c->r[30]+0x00000004u); // 8017584C
  W32(c->r[27]+0x00000004u,c->r[0]); // 80175850
L_80175854:;
  c->r[0]=R32(c->r[27]+0x00000008u); // 80175854
  cmpu(c,0,c->r[0],c->r[30]); // 80175858
  if (!crb(c,2)) { goto L_80175868; } // 8017585C
  c->r[0]=R32(c->r[30]+0x00000000u); // 80175860
  W32(c->r[27]+0x00000008u,c->r[0]); // 80175864
L_80175868:;
  c->r[3]=R32(c->r[30]+0x00000000u); // 80175868
  cmps(c,0,(int32_t)c->r[3],0); // 8017586C
  if (crb(c,2)) { goto L_8017587C; } // 80175870
  c->r[0]=R32(c->r[30]+0x00000004u); // 80175874
  W32(c->r[3]+0x00000004u,c->r[0]); // 80175878
L_8017587C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8017587C
  cmps(c,0,(int32_t)c->r[3],0); // 80175880
  if (crb(c,2)) { goto L_80175890; } // 80175884
  c->r[0]=R32(c->r[30]+0x00000000u); // 80175888
  W32(c->r[3]+0x00000000u,c->r[0]); // 8017588C
L_80175890:;
  W32(c->r[30]+0x00000004u,c->r[26]); // 80175890
  W32(c->r[30]+0x00000000u,c->r[26]); // 80175894
  c->r[3]=R32(c->r[27]+0x0000000Cu); // 80175898
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8017589C
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 801758A0
L_801758A4:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801758A4
  c->r[3]=c->r[30]|c->r[30]; // 801758A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801758AC
  c->ctr=c->r[12]; // 801758B0
  if (true) { c->lr=0x801758B8u; dispatch(c,c->ctr); } // 801758B4
  c->r[25]=0u+0x00000001u; // 801758B8
L_801758BC:;
  c->r[3]=R32(c->r[27]+0x00000000u); // 801758BC
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801758C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801758C4
  c->r[12]=R32(c->r[12]+0x00000018u); // 801758C8
  c->ctr=c->r[12]; // 801758CC
  if (true) { c->lr=0x801758D4u; dispatch(c,c->ctr); } // 801758D0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801758D4
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801758D8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801758DC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801758E0
  c->ctr=c->r[12]; // 801758E4
  if (true) { c->lr=0x801758ECu; dispatch(c,c->ctr); } // 801758E8
  cmps(c,0,(int32_t)c->r[25],1); // 801758EC
  if (crb(c,2)) { goto L_80175910; } // 801758F0
  c->r[3]=R32(c->r[27]+0x00000000u); // 801758F4
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801758F8
  c->r[3]=R32(c->r[3]+0x000000A8u); // 801758FC
  c->lr=0x80175904u; f_8017906C(c); // 80175900
  c->r[3]=0u+0x00000001u; // 80175904
  c->lr=0x8017590Cu; f_8017A4A0(c); // 80175908
  IRQCHK(c); goto L_801757C8; // 8017590C
L_80175910:;
  c->r[30]=c->r[29]|c->r[29]; // 80175910
  IRQCHK(c); goto L_801757A0; // 80175914
L_80175918:;
  c->r[25]=R32(c->r[27]+0x00000010u); // 80175918
  c->r[30]=0u+0x80330000u; // 8017591C
  c->r[29]=0u+0x00000000u; // 80175920
L_80175924:;
  cmps(c,0,(int32_t)c->r[25],0); // 80175924
  if (crb(c,2)) { goto L_801759D8; } // 80175928
  c->r[26]=R32(c->r[25]+0x00000004u); // 8017592C
  c->r[3]=c->r[25]|c->r[25]; // 80175930
  c->r[4]=c->r[28]|c->r[28]; // 80175934
  c->r[5]=0u+0xFFFFFFFFu; // 80175938
  c->r[6]=0u+0xFFFFFFFFu; // 8017593C
  c->lr=0x80175944u; f_80167980(c); // 80175940
  cmps(c,0,(int32_t)c->r[3],0); // 80175944
  if (crb(c,2)) { goto L_801759D0; } // 80175948
  cmps(c,0,(int32_t)c->r[25],0); // 8017594C
  if (!crb(c,2)) { goto L_80175964; } // 80175950
  c->r[4]=c->r[30]+0x00000C2Cu; // 80175954
  c->r[3]=0u+0x00000000u; // 80175958
  c->lr=0x80175960u; f_80179434(c); // 8017595C
  goto L_801759C8; // 80175960
L_80175964:;
  c->r[0]=R32(c->r[27]+0x00000010u); // 80175964
  cmpu(c,0,c->r[0],c->r[25]); // 80175968
  if (!crb(c,2)) { goto L_80175978; } // 8017596C
  c->r[0]=R32(c->r[25]+0x00000004u); // 80175970
  W32(c->r[27]+0x00000010u,c->r[0]); // 80175974
L_80175978:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 80175978
  cmpu(c,0,c->r[0],c->r[25]); // 8017597C
  if (!crb(c,2)) { goto L_8017598C; } // 80175980
  c->r[0]=R32(c->r[25]+0x00000000u); // 80175984
  W32(c->r[27]+0x00000014u,c->r[0]); // 80175988
L_8017598C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8017598C
  cmps(c,0,(int32_t)c->r[3],0); // 80175990
  if (crb(c,2)) { goto L_801759A0; } // 80175994
  c->r[0]=R32(c->r[25]+0x00000004u); // 80175998
  W32(c->r[3]+0x00000004u,c->r[0]); // 8017599C
L_801759A0:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 801759A0
  cmps(c,0,(int32_t)c->r[3],0); // 801759A4
  if (crb(c,2)) { goto L_801759B4; } // 801759A8
  c->r[0]=R32(c->r[25]+0x00000000u); // 801759AC
  W32(c->r[3]+0x00000000u,c->r[0]); // 801759B0
L_801759B4:;
  W32(c->r[25]+0x00000004u,c->r[29]); // 801759B4
  W32(c->r[25]+0x00000000u,c->r[29]); // 801759B8
  c->r[3]=R32(c->r[27]+0x00000018u); // 801759BC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801759C0
  W32(c->r[27]+0x00000018u,c->r[0]); // 801759C4
L_801759C8:;
  c->r[3]=c->r[25]|c->r[25]; // 801759C8
  c->lr=0x801759D0u; f_80165DE8(c); // 801759CC
L_801759D0:;
  c->r[25]=c->r[26]|c->r[26]; // 801759D0
  IRQCHK(c); goto L_80175924; // 801759D4
L_801759D8:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801759D8
  c->r[0]=R32(c->r[1]+0x00000034u); // 801759DC
  c->lr=c->r[0]; // 801759E0
  c->r[1]=c->r[1]+0x00000030u; // 801759E4
  return; // 801759E8
}

// GetNumberOfVoices__17CriAuVoiceManagerFv
void f_801759EC(Ctx* __restrict c) {
  trace_call(0x801759ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801759EC
  c->r[0]=c->lr; // 801759F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801759F4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801759F8
  c->r[31]=0u+0x00000000u; // 801759FC
  W32(c->r[1]+0x00000008u,c->r[30]); // 80175A00
  c->r[3]=R32(c->r[3]+0x00000004u); // 80175A04
L_80175A08:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175A08
  if (crb(c,2)) { goto L_80175A30; } // 80175A0C
  c->r[30]=R32(c->r[3]+0x00000004u); // 80175A10
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80175A14
  c->lr=0x80175A1Cu; f_80168500(c); // 80175A18
  cmps(c,0,(int32_t)c->r[3],0); // 80175A1C
  if (crb(c,2)) { goto L_80175A28; } // 80175A20
  c->r[31]=c->r[31]+0x00000001u; // 80175A24
L_80175A28:;
  c->r[3]=c->r[30]|c->r[30]; // 80175A28
  IRQCHK(c); goto L_80175A08; // 80175A2C
L_80175A30:;
  c->r[3]=c->r[31]|c->r[31]; // 80175A30
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175A34
  c->r[30]=R32(c->r[1]+0x00000008u); // 80175A38
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175A3C
  c->lr=c->r[0]; // 80175A40
  c->r[1]=c->r[1]+0x00000010u; // 80175A44
  return; // 80175A48
}

// Create__18CriAuStmBufManagerFP15_criheap_structll
void f_80175A4C(Ctx* __restrict c) {
  trace_call(0x80175A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175A4C
  c->r[0]=c->lr; // 80175A50
  W32(c->r[1]+0x00000044u,c->r[0]); // 80175A54
  c->r[11]=c->r[1]+0x00000040u; // 80175A58
  c->lr=0x80175A60u; f_800ADA2C(c); // 80175A5C
  c->r[31]=c->r[1]|c->r[1]; // 80175A60
  c->r[0]=c->r[5]+0x00000040u; // 80175A64
  c->r[27]=c->r[3]|c->r[3]; // 80175A68
  c->r[29]=divw((int32_t)c->r[4],(int32_t)c->r[0]); // 80175A6C
  c->r[3]=0u+0x802D0000u; // 80175A70
  c->r[28]=c->r[5]|c->r[5]; // 80175A74
  c->r[5]=c->r[3]+0x000007FCu; // 80175A78
  c->r[4]=c->r[27]|c->r[27]; // 80175A7C
  c->r[3]=0u+0x00000030u; // 80175A80
  c->r[6]=0u+0x00000008u; // 80175A84
  c->lr=0x80175A8Cu; f_8017BEDC(c); // 80175A88
  cmps(c,0,(int32_t)c->r[3],0); // 80175A8C
  c->r[30]=c->r[3]|c->r[3]; // 80175A90
  if (crb(c,2)) { goto L_80175AE0; } // 80175A94
  c->r[5]=0u+0x80330000u; // 80175A98
  c->r[4]=0u+0x00000020u; // 80175A9C
  c->r[5]=c->r[5]+0x00007418u; // 80175AA0
  W32(c->r[3]+0x00000000u,c->r[5]); // 80175AA4
  c->r[0]=0u+0x00000000u; // 80175AA8
  {uint32_t ea=c->r[2]+0xFFFFB4B0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80175AAC
  W32(c->r[3]+0x00000004u,c->r[27]); // 80175AB0
  W32(c->r[3]+0x00000008u,c->r[29]); // 80175AB4
  W32(c->r[3]+0x0000000Cu,c->r[28]); // 80175AB8
  W32(c->r[3]+0x00000010u,c->r[4]); // 80175ABC
  W32(c->r[3]+0x00000014u,c->r[0]); // 80175AC0
  W32(c->r[3]+0x00000018u,c->r[0]); // 80175AC4
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80175AC8
  W32(c->r[3]+0x00000020u,c->r[0]); // 80175ACC
  W32(c->r[3]+0x00000024u,c->r[0]); // 80175AD0
  {uint32_t ea=c->r[3]+0x00000028u; WF32(ea,c->f[0]);} // 80175AD4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80175AD8
  {uint32_t ea=c->r[3]+0x0000002Cu; WF32(ea,c->f[0]);} // 80175ADC
L_80175AE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80175AE0
  if (!crb(c,2)) { goto L_80175B08; } // 80175AE4
  c->r[4]=0u+0x802D0000u; // 80175AE8
  c->r[3]=0u+0x00000000u; // 80175AEC
  c->r[4]=c->r[4]+0x000007FCu; // 80175AF0
  c->r[5]=0u+0xFFFFFFFDu; // 80175AF4
  c->r[4]=c->r[4]+0x00000013u; // 80175AF8
  c->lr=0x80175B00u; f_8017968C(c); // 80175AFC
  c->r[3]=0u+0x00000000u; // 80175B00
  goto L_80175B48; // 80175B04
L_80175B08:;
  c->r[3]=c->r[30]|c->r[30]; // 80175B08
  c->lr=0x80175B10u; f_80175C2C(c); // 80175B0C
  cmps(c,0,(int32_t)c->r[3],0); // 80175B10
  if (!crb(c,2)) { goto L_80175B44; } // 80175B14
  cmps(c,0,(int32_t)c->r[30],0); // 80175B18
  if (crb(c,2)) { goto L_80175B3C; } // 80175B1C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80175B20
  c->r[0]=0u+0x00000001u; // 80175B24
  c->r[3]=c->r[30]|c->r[30]; // 80175B28
  c->r[12]=R32(c->r[12]+0x00000008u); // 80175B2C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80175B30
  c->ctr=c->r[12]; // 80175B34
  if (true) { c->lr=0x80175B3Cu; dispatch(c,c->ctr); } // 80175B38
L_80175B3C:;
  c->r[3]=0u+0x00000000u; // 80175B3C
  goto L_80175B48; // 80175B40
L_80175B44:;
  c->r[3]=c->r[30]|c->r[30]; // 80175B44
L_80175B48:;
  c->r[10]=c->r[31]|c->r[31]; // 80175B48
  c->r[11]=c->r[10]+0x00000040u; // 80175B4C
  c->lr=0x80175B54u; f_800ADA78(c); // 80175B50
  c->r[10]=R32(c->r[1]+0x00000000u); // 80175B54
  c->r[0]=R32(c->r[10]+0x00000004u); // 80175B58
  c->r[1]=c->r[10]|c->r[10]; // 80175B5C
  c->lr=c->r[0]; // 80175B60
  return; // 80175B64
}

// Destroy__18CriAuStmBufManagerFv
void f_80175B68(Ctx* __restrict c) {
  trace_call(0x80175B68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175B68
  c->r[0]=c->lr; // 80175B6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175B70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80175B74
  c->r[31]=c->r[3]|c->r[3]; // 80175B78
  c->r[4]=R32(c->r[3]+0x00000018u); // 80175B7C
  cmps(c,0,(int32_t)c->r[4],0); // 80175B80
  if (crb(c,2)) { goto L_80175B98; } // 80175B84
  c->r[3]=R32(c->r[3]+0x00000004u); // 80175B88
  c->lr=0x80175B90u; f_8017C228(c); // 80175B8C
  c->r[0]=0u+0x00000000u; // 80175B90
  W32(c->r[31]+0x00000018u,c->r[0]); // 80175B94
L_80175B98:;
  c->r[4]=R32(c->r[31]+0x00000014u); // 80175B98
  cmps(c,0,(int32_t)c->r[4],0); // 80175B9C
  if (crb(c,2)) { goto L_80175BB4; } // 80175BA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 80175BA4
  c->lr=0x80175BACu; f_8017C228(c); // 80175BA8
  c->r[0]=0u+0x00000000u; // 80175BAC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80175BB0
L_80175BB4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80175BB4
  if (crb(c,2)) { goto L_80175BD4; } // 80175BB8
  c->r[12]=R32(c->r[31]+0x00000000u); // 80175BBC
  c->r[3]=c->r[31]|c->r[31]; // 80175BC0
  c->r[4]=0u+0x00000001u; // 80175BC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80175BC8
  c->ctr=c->r[12]; // 80175BCC
  if (true) { c->lr=0x80175BD4u; dispatch(c,c->ctr); } // 80175BD0
L_80175BD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175BD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175BD8
  c->lr=c->r[0]; // 80175BDC
  c->r[1]=c->r[1]+0x00000010u; // 80175BE0
  return; // 80175BE4
}

// __dt__18CriAuStmBufManagerFv
void f_80175BE8(Ctx* __restrict c) {
  trace_call(0x80175BE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175BE8
  c->r[0]=c->lr; // 80175BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80175BF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175BF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80175BF8
  c->r[31]=c->r[3]|c->r[3]; // 80175BFC
  if (crb(c,2)) { goto L_80175C14; } // 80175C00
  cmps(c,0,(int32_t)c->r[4],0); // 80175C04
  if (!crb(c,1)) { goto L_80175C14; } // 80175C08
  c->r[4]=0u+0x00000030u; // 80175C0C
  c->lr=0x80175C14u; f_8017BFE8(c); // 80175C10
L_80175C14:;
  c->r[3]=c->r[31]|c->r[31]; // 80175C14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175C18
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175C1C
  c->lr=c->r[0]; // 80175C20
  c->r[1]=c->r[1]+0x00000010u; // 80175C24
  return; // 80175C28
}

// InitializeMembers__18CriAuStmBufManagerFv
void f_80175C2C(Ctx* __restrict c) {
  trace_call(0x80175C2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175C2C
  c->r[0]=c->lr; // 80175C30
  c->r[6]=0u+0x00000004u; // 80175C34
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175C38
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80175C3C
  c->r[27]=0u+0x802D0000u; // 80175C40
  c->r[27]=c->r[27]+0x000007FCu; // 80175C44
  c->r[28]=c->r[3]|c->r[3]; // 80175C48
  c->r[5]=c->r[27]+0x0000001Fu; // 80175C4C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80175C50
  c->r[3]=R32(c->r[3]+0x00000004u); // 80175C54
  c->r[4]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80175C58
  c->lr=0x80175C60u; f_8017C100(c); // 80175C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80175C60
  W32(c->r[28]+0x00000014u,c->r[3]); // 80175C64
  if (!crb(c,2)) { goto L_80175CBC; } // 80175C68
  c->r[4]=c->r[27]+0x00000028u; // 80175C6C
  c->r[3]=0u+0x00000000u; // 80175C70
  c->r[5]=0u+0xFFFFFFFDu; // 80175C74
  c->lr=0x80175C7Cu; f_8017968C(c); // 80175C78
  c->r[4]=R32(c->r[28]+0x00000018u); // 80175C7C
  cmps(c,0,(int32_t)c->r[4],0); // 80175C80
  if (crb(c,2)) { goto L_80175C98; } // 80175C84
  c->r[3]=R32(c->r[28]+0x00000004u); // 80175C88
  c->lr=0x80175C90u; f_8017C228(c); // 80175C8C
  c->r[0]=0u+0x00000000u; // 80175C90
  W32(c->r[28]+0x00000018u,c->r[0]); // 80175C94
L_80175C98:;
  c->r[4]=R32(c->r[28]+0x00000014u); // 80175C98
  cmps(c,0,(int32_t)c->r[4],0); // 80175C9C
  if (crb(c,2)) { goto L_80175CB4; } // 80175CA0
  c->r[3]=R32(c->r[28]+0x00000004u); // 80175CA4
  c->lr=0x80175CACu; f_8017C228(c); // 80175CA8
  c->r[0]=0u+0x00000000u; // 80175CAC
  W32(c->r[28]+0x00000014u,c->r[0]); // 80175CB0
L_80175CB4:;
  c->r[3]=0u+0x00000000u; // 80175CB4
  goto L_80175E28; // 80175CB8
L_80175CBC:;
  c->r[3]=R32(c->r[28]+0x0000000Cu); // 80175CBC
  c->r[5]=c->r[27]+0x00000035u; // 80175CC0
  c->r[0]=R32(c->r[28]+0x00000010u); // 80175CC4
  c->r[6]=0u+0x00000020u; // 80175CC8
  c->r[4]=R32(c->r[28]+0x00000008u); // 80175CCC
  c->r[0]=c->r[3]+c->r[0]; // 80175CD0
  c->r[3]=R32(c->r[28]+0x00000004u); // 80175CD4
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80175CD8
  c->lr=0x80175CE0u; f_8017C100(c); // 80175CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80175CE0
  W32(c->r[28]+0x00000018u,c->r[3]); // 80175CE4
  if (!crb(c,2)) { goto L_80175D3C; } // 80175CE8
  c->r[4]=c->r[27]+0x00000041u; // 80175CEC
  c->r[3]=0u+0x00000000u; // 80175CF0
  c->r[5]=0u+0xFFFFFFFDu; // 80175CF4
  c->lr=0x80175CFCu; f_8017968C(c); // 80175CF8
  c->r[4]=R32(c->r[28]+0x00000018u); // 80175CFC
  cmps(c,0,(int32_t)c->r[4],0); // 80175D00
  if (crb(c,2)) { goto L_80175D18; } // 80175D04
  c->r[3]=R32(c->r[28]+0x00000004u); // 80175D08
  c->lr=0x80175D10u; f_8017C228(c); // 80175D0C
  c->r[0]=0u+0x00000000u; // 80175D10
  W32(c->r[28]+0x00000018u,c->r[0]); // 80175D14
L_80175D18:;
  c->r[4]=R32(c->r[28]+0x00000014u); // 80175D18
  cmps(c,0,(int32_t)c->r[4],0); // 80175D1C
  if (crb(c,2)) { goto L_80175D34; } // 80175D20
  c->r[3]=R32(c->r[28]+0x00000004u); // 80175D24
  c->lr=0x80175D2Cu; f_8017C228(c); // 80175D28
  c->r[0]=0u+0x00000000u; // 80175D2C
  W32(c->r[28]+0x00000014u,c->r[0]); // 80175D30
L_80175D34:;
  c->r[3]=0u+0x00000000u; // 80175D34
  goto L_80175E28; // 80175D38
L_80175D3C:;
  c->r[0]=R32(c->r[28]+0x00000014u); // 80175D3C
  c->r[29]=0u+0x00000000u; // 80175D40
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 80175D44
  c->r[30]=0u+0x00000000u; // 80175D48
  c->r[31]=0u+0xFFFFFFFFu; // 80175D4C
  c->r[27]=0u+0x00000000u; // 80175D50
  goto L_80175E18; // 80175D54
L_80175D58:;
  c->r[7]=R32(c->r[28]+0x00000010u); // 80175D58
  c->r[4]=0u+0x00000040u; // 80175D5C
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80175D60
  c->r[5]=R32(c->r[28]+0x00000018u); // 80175D64
  c->r[3]=c->r[0]+c->r[7]; // 80175D68
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80175D6C
  c->r[6]=(uint32_t)((int32_t)c->r[29]*(int32_t)c->r[3]); // 80175D70
  c->r[5]=c->r[5]+c->r[7]; // 80175D74
  c->r[3]=c->r[0]+c->r[30]; // 80175D78
  c->r[0]=c->r[6]+c->r[5]; // 80175D7C
  W32(c->r[3]+0x00000018u,c->r[0]); // 80175D80
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80175D84
  c->r[5]=R32(c->r[28]+0x00000010u); // 80175D88
  c->r[3]=c->r[0]+c->r[30]; // 80175D8C
  c->r[0]=R32(c->r[3]+0x00000018u); // 80175D90
  c->r[3]=c->r[0]-c->r[5]; // 80175D94
  c->lr=0x80175D9Cu; f_80004714(c); // 80175D98
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80175D9C
  c->r[4]=0u+0x00000000u; // 80175DA0
  c->r[5]=R32(c->r[28]+0x0000000Cu); // 80175DA4
  c->r[3]=c->r[0]+c->r[30]; // 80175DA8
  c->r[3]=R32(c->r[3]+0x00000018u); // 80175DAC
  c->lr=0x80175DB4u; f_80004714(c); // 80175DB0
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80175DB4
  c->r[3]=c->r[0]+c->r[30]; // 80175DB8
  W32(c->r[3]+0x0000000Cu,c->r[31]); // 80175DBC
  W32(c->r[3]+0x00000008u,c->r[31]); // 80175DC0
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80175DC4
  c->r[4]=R32(c->r[28]+0x0000000Cu); // 80175DC8
  c->r[3]=c->r[0]+c->r[30]; // 80175DCC
  W32(c->r[3]+0x00000010u,c->r[4]); // 80175DD0
  c->r[0]=R32(c->r[28]+0x0000001Cu); // 80175DD4
  c->r[3]=c->r[0]+c->r[30]; // 80175DD8
  W32(c->r[3]+0x00000014u,c->r[27]); // 80175DDC
  c->r[3]=R32(c->r[28]+0x00000008u); // 80175DE0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80175DE4
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80175DE8
  if (!crb(c,2)) { goto L_80175DFC; } // 80175DEC
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 80175DF0
  W32(c->r[3]+c->r[30],c->r[27]); // 80175DF4
  goto L_80175E10; // 80175DF8
L_80175DFC:;
  c->r[0]=c->r[29]+0x00000001u; // 80175DFC
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 80175E00
  c->r[0]=rotl(c->r[0],5)&0xFFFFFFE0u; // 80175E04
  c->r[0]=c->r[3]+c->r[0]; // 80175E08
  W32(c->r[3]+c->r[30],c->r[0]); // 80175E0C
L_80175E10:;
  c->r[30]=c->r[30]+0x00000020u; // 80175E10
  c->r[29]=c->r[29]+0x00000001u; // 80175E14
L_80175E18:;
  c->r[0]=R32(c->r[28]+0x00000008u); // 80175E18
  cmps(c,0,(int32_t)c->r[29],(int32_t)c->r[0]); // 80175E1C
  if (crb(c,0)) { IRQCHK(c); goto L_80175D58; } // 80175E20
  c->r[3]=0u+0x00000001u; // 80175E24
L_80175E28:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80175E28
  c->r[0]=R32(c->r[1]+0x00000024u); // 80175E2C
  c->lr=c->r[0]; // 80175E30
  c->r[1]=c->r[1]+0x00000020u; // 80175E34
  return; // 80175E38
}

// GetFreeBlock__18CriAuStmBufManagerFP14CriAuStmBuffer
void f_80175E3C(Ctx* __restrict c) {
  trace_call(0x80175E3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175E3C
  c->r[0]=c->lr; // 80175E40
  W32(c->r[1]+0x00000034u,c->r[0]); // 80175E44
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80175E48
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 80175E4C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80175E50
  W32(c->r[1]+0x00000018u,c->r[30]); // 80175E54
  W32(c->r[1]+0x00000014u,c->r[29]); // 80175E58
  W32(c->r[1]+0x00000010u,c->r[28]); // 80175E5C
  c->r[28]=c->r[4]|c->r[4]; // 80175E60
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 80175E64
  cmps(c,0,(int32_t)c->r[31],0); // 80175E68
  if (crb(c,2)) { goto L_80175E84; } // 80175E6C
  c->r[4]=R32(c->r[31]+0x00000000u); // 80175E70
  c->r[0]=0u+0x00000000u; // 80175E74
  W32(c->r[3]+0x0000001Cu,c->r[4]); // 80175E78
  W32(c->r[31]+0x00000000u,c->r[0]); // 80175E7C
  goto L_80175EE4; // 80175E80
L_80175E84:;
  {uint32_t ea=c->r[2]+0xFFFFB4B4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80175E84
  c->r[29]=0u+0x00000000u; // 80175E88
  c->r[30]=R32(c->r[3]+0x00000020u); // 80175E8C
  goto L_80175EC0; // 80175E90
L_80175E94:;
  c->r[3]=c->r[30]|c->r[30]; // 80175E94
  c->lr=0x80175E9Cu; f_80176BA4(c); // 80175E98
  fcmp(c,0,c->f[31],c->f[1]); // 80175E9C
  if (!crb(c,0)) { goto L_80175EB4; } // 80175EA0
  c->r[29]=c->r[30]|c->r[30]; // 80175EA4
  c->r[3]=c->r[30]|c->r[30]; // 80175EA8
  c->lr=0x80175EB0u; f_80176BA4(c); // 80175EAC
  c->f[31]=c->f[1]; // 80175EB0
L_80175EB4:;
  c->r[3]=c->r[30]|c->r[30]; // 80175EB4
  c->lr=0x80175EBCu; f_80176AD0(c); // 80175EB8
  c->r[30]=c->r[3]|c->r[3]; // 80175EBC
L_80175EC0:;
  cmps(c,0,(int32_t)c->r[30],0); // 80175EC0
  if (!crb(c,2)) { IRQCHK(c); goto L_80175E94; } // 80175EC4
  cmps(c,0,(int32_t)c->r[29],0); // 80175EC8
  if (crb(c,2)) { goto L_80175EE4; } // 80175ECC
  cmpu(c,0,c->r[29],c->r[28]); // 80175ED0
  if (crb(c,2)) { goto L_80175EE4; } // 80175ED4
  c->r[3]=c->r[29]|c->r[29]; // 80175ED8
  c->lr=0x80175EE0u; f_80176960(c); // 80175EDC
  c->r[31]=c->r[3]|c->r[3]; // 80175EE0
L_80175EE4:;
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80175EE4
  c->r[3]=c->r[31]|c->r[31]; // 80175EE8
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80175EEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80175EF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80175EF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80175EF8
  c->r[28]=R32(c->r[1]+0x00000010u); // 80175EFC
  c->r[0]=R32(c->r[1]+0x00000034u); // 80175F00
  c->lr=c->r[0]; // 80175F04
  c->r[1]=c->r[1]+0x00000030u; // 80175F08
  return; // 80175F0C
}

// PutFreeBlock__18CriAuStmBufManagerFP19CriAuStmBufBlockTag
void f_80175F10(Ctx* __restrict c) {
  trace_call(0x80175F10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175F10
  c->r[0]=c->lr; // 80175F14
  W32(c->r[1]+0x00000024u,c->r[0]); // 80175F18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80175F1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80175F20
  c->r[30]=c->r[4]|c->r[4]; // 80175F24
  W32(c->r[1]+0x00000014u,c->r[29]); // 80175F28
  c->r[29]=c->r[3]|c->r[3]; // 80175F2C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80175F30
  cmps(c,0,(int32_t)c->r[0],0); // 80175F34
  if (crb(c,2)) { goto L_80175F54; } // 80175F38
  c->r[4]=0u+0x802D0000u; // 80175F3C
  c->r[3]=0u+0x00000000u; // 80175F40
  c->r[4]=c->r[4]+0x000007FCu; // 80175F44
  c->r[5]=0u+0xFFFFFFFFu; // 80175F48
  c->r[4]=c->r[4]+0x0000004Eu; // 80175F4C
  c->lr=0x80175F54u; f_8017968C(c); // 80175F50
L_80175F54:;
  c->r[3]=R32(c->r[30]+0x00000018u); // 80175F54
  c->r[31]=0u+0x802D0000u; // 80175F58
  c->r[31]=c->r[31]+0x000007FCu; // 80175F5C
  c->r[5]=0u+0x00000004u; // 80175F60
  c->r[3]=c->r[3]+0xFFFFFFE0u; // 80175F64
  c->r[4]=c->r[31]+0x0000005Au; // 80175F68
  c->lr=0x80175F70u; f_800B3824(c); // 80175F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80175F70
  if (crb(c,2)) { goto L_80175F88; } // 80175F74
  c->r[4]=c->r[31]+0x0000005Fu; // 80175F78
  c->r[3]=0u+0x00000000u; // 80175F7C
  c->r[5]=0u+0xFFFFFFFFu; // 80175F80
  c->lr=0x80175F88u; f_8017968C(c); // 80175F84
L_80175F88:;
  c->r[0]=R32(c->r[29]+0x0000001Cu); // 80175F88
  W32(c->r[30]+0x00000000u,c->r[0]); // 80175F8C
  W32(c->r[29]+0x0000001Cu,c->r[30]); // 80175F90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80175F94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80175F98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80175F9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80175FA0
  c->lr=c->r[0]; // 80175FA4
  c->r[1]=c->r[1]+0x00000020u; // 80175FA8
  return; // 80175FAC
}

// GetHeap__18CriAuStmBufManagerFv
void f_80175FB0(Ctx* __restrict c) {
  trace_call(0x80175FB0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80175FB0
  return; // 80175FB4
}

// AddBuffer__18CriAuStmBufManagerFP14CriAuStmBuffer
void f_80175FB8(Ctx* __restrict c) {
  trace_call(0x80175FB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80175FB8
  c->r[0]=c->lr; // 80175FBC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80175FC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80175FC4
  c->r[31]=c->r[4]|c->r[4]; // 80175FC8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80175FCC
  c->r[30]=c->r[3]|c->r[3]; // 80175FD0
  c->r[4]=R32(c->r[3]+0x00000020u); // 80175FD4
  c->r[3]=c->r[31]|c->r[31]; // 80175FD8
  c->lr=0x80175FE0u; f_80176AD8(c); // 80175FDC
  W32(c->r[30]+0x00000020u,c->r[31]); // 80175FE0
  c->r[3]=c->r[30]|c->r[30]; // 80175FE4
  c->lr=0x80175FECu; f_801760F4(c); // 80175FE8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80175FEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80175FF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80175FF4
  c->lr=c->r[0]; // 80175FF8
  c->r[1]=c->r[1]+0x00000010u; // 80175FFC
  return; // 80176000
}

// DeleteBuffer__18CriAuStmBufManagerFP14CriAuStmBuffer
void f_80176004(Ctx* __restrict c) {
  trace_call(0x80176004u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176004
  c->r[0]=c->lr; // 80176008
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017600C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80176010
  W32(c->r[1]+0x00000018u,c->r[30]); // 80176014
  W32(c->r[1]+0x00000014u,c->r[29]); // 80176018
  c->r[29]=c->r[4]|c->r[4]; // 8017601C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80176020
  c->r[28]=c->r[3]|c->r[3]; // 80176024
  c->r[30]=R32(c->r[3]+0x00000020u); // 80176028
  cmps(c,0,(int32_t)c->r[30],0); // 8017602C
  if (crb(c,2)) { goto L_801760D4; } // 80176030
  cmpu(c,0,c->r[30],c->r[4]); // 80176034
  c->r[31]=0u+0x00000000u; // 80176038
  if (!crb(c,2)) { goto L_80176090; } // 8017603C
  c->r[3]=c->r[29]|c->r[29]; // 80176040
  c->lr=0x80176048u; f_80176AD0(c); // 80176044
  W32(c->r[28]+0x00000020u,c->r[3]); // 80176048
  c->r[31]=0u+0x00000001u; // 8017604C
  goto L_801760A0; // 80176050
  goto L_80176090; // 80176054
L_80176058:;
  c->r[3]=c->r[30]|c->r[30]; // 80176058
  c->lr=0x80176060u; f_80176AD0(c); // 8017605C
  cmpu(c,0,c->r[3],c->r[29]); // 80176060
  if (!crb(c,2)) { goto L_80176084; } // 80176064
  c->r[3]=c->r[29]|c->r[29]; // 80176068
  c->lr=0x80176070u; f_80176AD0(c); // 8017606C
  c->r[4]=c->r[3]|c->r[3]; // 80176070
  c->r[3]=c->r[30]|c->r[30]; // 80176074
  c->lr=0x8017607Cu; f_80176AD8(c); // 80176078
  c->r[31]=0u+0x00000001u; // 8017607C
  goto L_801760A0; // 80176080
L_80176084:;
  c->r[3]=c->r[30]|c->r[30]; // 80176084
  c->lr=0x8017608Cu; f_80176AD0(c); // 80176088
  c->r[30]=c->r[3]|c->r[3]; // 8017608C
L_80176090:;
  c->r[3]=c->r[30]|c->r[30]; // 80176090
  c->lr=0x80176098u; f_80176AD0(c); // 80176094
  cmps(c,0,(int32_t)c->r[3],0); // 80176098
  if (!crb(c,2)) { IRQCHK(c); goto L_80176058; } // 8017609C
L_801760A0:;
  c->r[3]=c->r[29]|c->r[29]; // 801760A0
  c->r[4]=0u+0x00000000u; // 801760A4
  c->lr=0x801760ACu; f_80176AD8(c); // 801760A8
  cmps(c,0,(int32_t)c->r[31],0); // 801760AC
  if (!crb(c,2)) { goto L_801760CC; } // 801760B0
  c->r[4]=0u+0x802D0000u; // 801760B4
  c->r[3]=0u+0x00000000u; // 801760B8
  c->r[4]=c->r[4]+0x000007FCu; // 801760BC
  c->r[5]=0u+0xFFFFFFFFu; // 801760C0
  c->r[4]=c->r[4]+0x0000006Bu; // 801760C4
  c->lr=0x801760CCu; f_8017968C(c); // 801760C8
L_801760CC:;
  c->r[3]=c->r[28]|c->r[28]; // 801760CC
  c->lr=0x801760D4u; f_801760F4(c); // 801760D0
L_801760D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801760D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801760D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801760DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801760E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801760E4
  c->lr=c->r[0]; // 801760E8
  c->r[1]=c->r[1]+0x00000020u; // 801760EC
  return; // 801760F0
}

// UpdateSafetyThresholdTimes__18CriAuStmBufManagerFv
void f_801760F4(Ctx* __restrict c) {
  trace_call(0x801760F4u);
  {uint32_t ea=c->r[1]+0xFFFFFB90u; W32(ea,c->r[1]); c->r[1]=ea;} // 801760F4
  c->r[0]=c->lr; // 801760F8
  W32(c->r[1]+0x00000474u,c->r[0]); // 801760FC
  c->r[11]=c->r[1]+0x00000440u; // 80176100
  {uint32_t ea=c->r[1]+0x00000460u; WF64(ea,c->f[31]);} // 80176104
  {uint32_t ea=c->r[1]+0x00000468u; psq_store(c,31,ea,0,0);} // 80176108
  {uint32_t ea=c->r[1]+0x00000450u; WF64(ea,c->f[30]);} // 8017610C
  {uint32_t ea=c->r[1]+0x00000458u; psq_store(c,30,ea,0,0);} // 80176110
  {uint32_t ea=c->r[1]+0x00000440u; WF64(ea,c->f[29]);} // 80176114
  {uint32_t ea=c->r[1]+0x00000448u; psq_store(c,29,ea,0,0);} // 80176118
  c->lr=0x80176120u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8017611C
  c->r[30]=R32(c->r[3]+0x00000008u); // 80176120
  c->r[29]=c->r[3]|c->r[3]; // 80176124
  c->r[27]=R32(c->r[3]+0x00000020u); // 80176128
  c->r[31]=0u+0x00000000u; // 8017612C
  goto L_80176154; // 80176130
L_80176134:;
  c->r[3]=c->r[27]|c->r[27]; // 80176134
  c->lr=0x8017613Cu; f_80176CB0(c); // 80176138
  cmps(c,0,(int32_t)c->r[3],1); // 8017613C
  if (!crb(c,2)) { goto L_80176148; } // 80176140
  c->r[31]=c->r[31]+0x00000001u; // 80176144
L_80176148:;
  c->r[3]=c->r[27]|c->r[27]; // 80176148
  c->lr=0x80176150u; f_80176AD0(c); // 8017614C
  c->r[27]=c->r[3]|c->r[3]; // 80176150
L_80176154:;
  cmps(c,0,(int32_t)c->r[27],0); // 80176154
  if (!crb(c,2)) { IRQCHK(c); goto L_80176134; } // 80176158
  cmps(c,0,(int32_t)c->r[30],0); // 8017615C
  if (!crb(c,1)) { goto L_801763AC; } // 80176160
  c->r[3]=c->r[30]^0x80000000u; // 80176164
  c->r[0]=0u+0x43300000u; // 80176168
  W32(c->r[1]+0x0000040Cu,c->r[3]); // 8017616C
  c->r[25]=c->r[1]+0x00000208u; // 80176170
  {uint32_t ea=c->r[2]+0xFFFFB4C0u; c->f[1]=RF64(ea);} // 80176174
  c->r[26]=c->r[1]+0x00000008u; // 80176178
  W32(c->r[1]+0x00000408u,c->r[0]); // 8017617C
  c->r[24]=0u+0x00000000u; // 80176180
  {uint32_t ea=c->r[2]+0xFFFFB4B4u; c->f[30]=c->ps1[30]=RF32(ea);} // 80176184
  c->r[27]=0u+0x00000000u; // 80176188
  {uint32_t ea=c->r[1]+0x00000408u; c->f[0]=RF64(ea);} // 8017618C
  c->r[23]=R32(c->r[29]+0x00000020u); // 80176190
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 80176194
  goto L_80176210; // 80176198
  goto L_801761AC; // 8017619C
L_801761A0:;
  c->r[3]=c->r[23]|c->r[23]; // 801761A0
  c->lr=0x801761A8u; f_80176AD0(c); // 801761A4
  c->r[23]=c->r[3]|c->r[3]; // 801761A8
L_801761AC:;
  cmps(c,0,(int32_t)c->r[23],0); // 801761AC
  if (crb(c,2)) { goto L_801761C4; } // 801761B0
  c->r[3]=c->r[23]|c->r[23]; // 801761B4
  c->lr=0x801761BCu; f_80176CB0(c); // 801761B8
  cmps(c,0,(int32_t)c->r[3],1); // 801761BC
  if (!crb(c,2)) { IRQCHK(c); goto L_801761A0; } // 801761C0
L_801761C4:;
  cmps(c,0,(int32_t)c->r[23],0); // 801761C4
  if (!crb(c,2)) { goto L_801761E4; } // 801761C8
  c->r[4]=0u+0x802D0000u; // 801761CC
  c->r[3]=0u+0x00000000u; // 801761D0
  c->r[4]=c->r[4]+0x000007FCu; // 801761D4
  c->r[4]=c->r[4]+0x00000077u; // 801761D8
  c->lr=0x801761E0u; f_80179434(c); // 801761DC
  goto L_801763AC; // 801761E0
L_801761E4:;
  W32(c->r[25]+0x00000000u,c->r[27]); // 801761E4
  c->r[3]=c->r[23]|c->r[23]; // 801761E8
  W32(c->r[26]+0x00000000u,c->r[23]); // 801761EC
  c->lr=0x801761F4u; f_80176B9C(c); // 801761F0
  c->f[30]=c->ps1[30]=S(c->f[30]+c->f[1]); // 801761F4
  c->r[3]=c->r[23]|c->r[23]; // 801761F8
  c->lr=0x80176200u; f_80176AD0(c); // 801761FC
  c->r[23]=c->r[3]|c->r[3]; // 80176200
  c->r[25]=c->r[25]+0x00000004u; // 80176204
  c->r[26]=c->r[26]+0x00000004u; // 80176208
  c->r[24]=c->r[24]+0x00000001u; // 8017620C
L_80176210:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[31]); // 80176210
  if (crb(c,0)) { IRQCHK(c); goto L_801761AC; } // 80176214
  c->r[25]=c->r[1]+0x00000008u; // 80176218
  c->r[26]=c->r[1]+0x00000208u; // 8017621C
  c->r[24]=0u+0x00000000u; // 80176220
  goto L_80176258; // 80176224
L_80176228:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80176228
  c->lr=0x80176230u; f_80176B9C(c); // 8017622C
  c->f[0]=c->ps1[0]=S(c->f[29]*c->f[1]); // 80176230
  c->r[25]=c->r[25]+0x00000004u; // 80176234
  c->r[24]=c->r[24]+0x00000001u; // 80176238
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8017623C
  c->f[0]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[0],true)); // 80176240
  {uint32_t ea=c->r[1]+0x00000408u; WF64(ea,c->f[0]);} // 80176244
  c->r[0]=R32(c->r[1]+0x0000040Cu); // 80176248
  W32(c->r[26]+0x00000000u,c->r[0]); // 8017624C
  c->r[26]=c->r[26]+0x00000004u; // 80176250
  c->r[30]=c->r[30]-c->r[0]; // 80176254
L_80176258:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[31]); // 80176258
  if (crb(c,0)) { IRQCHK(c); goto L_80176228; } // 8017625C
  {uint32_t ea=c->r[2]+0xFFFFB4C0u; c->f[31]=RF64(ea);} // 80176260
  c->r[27]=c->r[1]+0x00000208u; // 80176264
  {uint32_t ea=c->r[2]+0xFFFFB4BCu; c->f[30]=c->ps1[30]=RF32(ea);} // 80176268
  c->r[28]=0u+0x43300000u; // 8017626C
L_80176270:;
  cmps(c,0,(int32_t)c->r[30],0); // 80176270
  if (!crb(c,1)) { goto L_801762FC; } // 80176274
  {uint32_t ea=c->r[2]+0xFFFFB4B8u; c->f[29]=c->ps1[29]=RF32(ea);} // 80176278
  c->r[25]=c->r[1]+0x00000008u; // 8017627C
  c->r[26]=c->r[1]+0x00000208u; // 80176280
  c->r[23]=0u+0x00000000u; // 80176284
  c->r[24]=0u+0x00000000u; // 80176288
  goto L_801762DC; // 8017628C
L_80176290:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80176290
  c->lr=0x80176298u; f_80176B9C(c); // 80176294
  c->r[3]=R32(c->r[29]+0x0000000Cu); // 80176298
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[30]); // 8017629C
  c->r[0]=R32(c->r[26]+0x00000000u); // 801762A0
  W32(c->r[1]+0x00000408u,c->r[28]); // 801762A4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 801762A8
  c->r[0]=c->r[0]^0x80000000u; // 801762AC
  W32(c->r[1]+0x0000040Cu,c->r[0]); // 801762B0
  {uint32_t ea=c->r[1]+0x00000408u; c->f[1]=RF64(ea);} // 801762B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[31]); // 801762B8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801762BC
  fcmp(c,0,c->f[0],c->f[29]); // 801762C0
  if (!crb(c,0)) { goto L_801762D0; } // 801762C4
  c->r[23]=c->r[24]|c->r[24]; // 801762C8
  c->f[29]=c->f[0]; // 801762CC
L_801762D0:;
  c->r[25]=c->r[25]+0x00000004u; // 801762D0
  c->r[26]=c->r[26]+0x00000004u; // 801762D4
  c->r[24]=c->r[24]+0x00000001u; // 801762D8
L_801762DC:;
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[31]); // 801762DC
  if (crb(c,0)) { IRQCHK(c); goto L_80176290; } // 801762E0
  c->r[4]=rotl(c->r[23],2)&0xFFFFFFFCu; // 801762E4
  c->r[30]=c->r[30]+0xFFFFFFFFu; // 801762E8
  c->r[3]=R32(c->r[27]+c->r[4]); // 801762EC
  c->r[0]=c->r[3]+0x00000001u; // 801762F0
  W32(c->r[27]+c->r[4],c->r[0]); // 801762F4
  IRQCHK(c); goto L_80176270; // 801762F8
L_801762FC:;
  c->r[27]=0u+0x802D0000u; // 801762FC
  {uint32_t ea=c->r[2]+0xFFFFB4C0u; c->f[30]=RF64(ea);} // 80176300
  {uint32_t ea=c->r[2]+0xFFFFB4BCu; c->f[31]=c->ps1[31]=RF32(ea);} // 80176304
  c->r[26]=c->r[1]+0x00000208u; // 80176308
  c->r[25]=c->r[1]+0x00000008u; // 8017630C
  c->r[27]=c->r[27]+0x000007FCu; // 80176310
  c->r[30]=0u+0x00000000u; // 80176314
  c->r[28]=0u+0x43300000u; // 80176318
  goto L_801763A4; // 8017631C
L_80176320:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 80176320
  cmps(c,0,(int32_t)c->r[0],0); // 80176324
  if (crb(c,1)) { goto L_8017633C; } // 80176328
  c->r[4]=c->r[27]+0x00000093u; // 8017632C
  c->r[3]=0u+0x00000001u; // 80176330
  c->lr=0x80176338u; f_80179434(c); // 80176334
  goto L_80176398; // 80176338
L_8017633C:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 8017633C
  c->lr=0x80176344u; f_80176B9C(c); // 80176340
  c->r[3]=R32(c->r[26]+0x00000000u); // 80176344
  cmps(c,0,(int32_t)c->r[3],2); // 80176348
  if (crb(c,0)) { goto L_8017638C; } // 8017634C
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80176350
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80176354
  W32(c->r[1]+0x00000408u,c->r[28]); // 80176358
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[31]); // 8017635C
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)c->r[0]); // 80176360
  c->r[3]=rotl(c->r[4],1)&0x00000001u; // 80176364
  c->r[3]=c->r[3]+c->r[4]; // 80176368
  c->r[3]=sraw(c,c->r[3],1); // 8017636C
  c->r[0]=c->r[3]+c->r[0]; // 80176370
  c->r[0]=c->r[0]^0x80000000u; // 80176374
  W32(c->r[1]+0x0000040Cu,c->r[0]); // 80176378
  {uint32_t ea=c->r[1]+0x00000408u; c->f[1]=RF64(ea);} // 8017637C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80176380
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80176384
  goto L_80176390; // 80176388
L_8017638C:;
  {uint32_t ea=c->r[2]+0xFFFFB4B4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017638C
L_80176390:;
  c->r[3]=R32(c->r[25]+0x00000000u); // 80176390
  {uint32_t ea=c->r[3]+0x00000050u; WF32(ea,c->f[0]);} // 80176394
L_80176398:;
  c->r[26]=c->r[26]+0x00000004u; // 80176398
  c->r[25]=c->r[25]+0x00000004u; // 8017639C
  c->r[30]=c->r[30]+0x00000001u; // 801763A0
L_801763A4:;
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 801763A4
  if (crb(c,0)) { IRQCHK(c); goto L_80176320; } // 801763A8
L_801763AC:;
  c->r[11]=c->r[1]+0x00000440u; // 801763AC
  {uint32_t ea=c->r[1]+0x00000468u; psq_load(c,31,ea,0,0);} // 801763B0
  {uint32_t ea=c->r[1]+0x00000460u; c->f[31]=RF64(ea);} // 801763B4
  {uint32_t ea=c->r[1]+0x00000458u; psq_load(c,30,ea,0,0);} // 801763B8
  {uint32_t ea=c->r[1]+0x00000450u; c->f[30]=RF64(ea);} // 801763BC
  {uint32_t ea=c->r[1]+0x00000448u; psq_load(c,29,ea,0,0);} // 801763C0
  {uint32_t ea=c->r[1]+0x00000440u; c->f[29]=RF64(ea);} // 801763C4
  c->lr=0x801763CCu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801763C8
  c->r[0]=R32(c->r[1]+0x00000474u); // 801763CC
  c->lr=c->r[0]; // 801763D0
  c->r[1]=c->r[1]+0x00000470u; // 801763D4
  return; // 801763D8
}

// GetEmergencyThresholdTime__18CriAuStmBufManagerFl
void f_801763DC(Ctx* __restrict c) {
  trace_call(0x801763DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801763DC
  c->r[0]=c->lr; // 801763E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801763E4
  c->r[0]=0u+0x43300000u; // 801763E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801763EC
  W32(c->r[1]+0x00000028u,c->r[30]); // 801763F0
  c->r[30]=0u+0x00000000u; // 801763F4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801763F8
  c->r[29]=c->r[4]|c->r[4]; // 801763FC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80176400
  c->r[28]=c->r[3]|c->r[3]; // 80176404
  W32(c->r[1]+0x00000008u,c->r[0]); // 80176408
  c->r[31]=R32(c->r[3]+0x00000020u); // 8017640C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80176410
  goto L_80176438; // 80176414
L_80176418:;
  c->r[3]=c->r[31]|c->r[31]; // 80176418
  c->lr=0x80176420u; f_80176CB0(c); // 8017641C
  cmps(c,0,(int32_t)c->r[3],1); // 80176420
  if (!crb(c,2)) { goto L_8017642C; } // 80176424
  c->r[30]=c->r[30]+0x00000001u; // 80176428
L_8017642C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017642C
  c->lr=0x80176434u; f_80176AD0(c); // 80176430
  c->r[31]=c->r[3]|c->r[3]; // 80176434
L_80176438:;
  cmps(c,0,(int32_t)c->r[31],0); // 80176438
  if (!crb(c,2)) { IRQCHK(c); goto L_80176418; } // 8017643C
  c->r[0]=c->r[30]^0x80000000u; // 80176440
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176444
  c->r[3]=c->r[29]^0x80000000u; // 80176448
  {uint32_t ea=c->r[2]+0xFFFFB4C0u; c->f[4]=RF64(ea);} // 8017644C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80176450
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80176454
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80176458
  {uint32_t ea=c->r[28]+0x00000028u; c->f[2]=c->ps1[2]=RF32(ea);} // 8017645C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[3]=RF64(ea);} // 80176460
  {uint32_t ea=c->r[28]+0x0000002Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176464
  c->f[3]=c->ps1[3]=S(c->f[3]-c->f[4]); // 80176468
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 8017646C
  c->f[0]=c->ps1[0]=S(c->f[3]*c->f[0]); // 80176470
  fcmp(c,0,c->f[0],c->f[1]); // 80176474
  if (!crb(c,1)) { goto L_8017649C; } // 80176478
  W32(c->r[1]+0x00000014u,c->r[0]); // 8017647C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80176480
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80176484
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[4]); // 80176488
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8017648C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[4]); // 80176490
  c->f[0]=c->ps1[0]=S(c->f[0]*c->f[2]); // 80176494
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[0]); // 80176498
L_8017649C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017649C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801764A0
  c->r[30]=R32(c->r[1]+0x00000028u); // 801764A4
  c->r[29]=R32(c->r[1]+0x00000024u); // 801764A8
  c->r[28]=R32(c->r[1]+0x00000020u); // 801764AC
  c->lr=c->r[0]; // 801764B0
  c->r[1]=c->r[1]+0x00000030u; // 801764B4
  return; // 801764B8
}

// Execute__18CriAuStmBufManagerFv
void f_801764BC(Ctx* __restrict c) {
  trace_call(0x801764BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801764BC
  c->r[0]=c->lr; // 801764C0
  W32(c->r[1]+0x00000044u,c->r[0]); // 801764C4
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 801764C8
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 801764CC
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 801764D0
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 801764D4
  {uint32_t ea=c->r[2]+0xFFFFB4B8u; c->f[30]=c->ps1[30]=RF32(ea);} // 801764D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801764DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801764E0
  c->r[30]=0u+0x00000000u; // 801764E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801764E8
  c->r[29]=c->r[3]|c->r[3]; // 801764EC
  c->r[31]=R32(c->r[3]+0x00000020u); // 801764F0
  goto L_80176540; // 801764F4
L_801764F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801764F8
  c->lr=0x80176500u; f_80176CB0(c); // 801764FC
  cmps(c,0,(int32_t)c->r[3],0); // 80176500
  if (crb(c,2)) { goto L_80176534; } // 80176504
  c->r[3]=c->r[31]|c->r[31]; // 80176508
  c->lr=0x80176510u; f_80176BA4(c); // 8017650C
  c->f[31]=c->f[1]; // 80176510
  c->r[3]=c->r[31]|c->r[31]; // 80176514
  c->lr=0x8017651Cu; f_80176E14(c); // 80176518
  cmps(c,0,(int32_t)c->r[3],1); // 8017651C
  if (!crb(c,2)) { goto L_80176534; } // 80176520
  fcmp(c,0,c->f[30],c->f[31]); // 80176524
  if (!crb(c,1)) { goto L_80176534; } // 80176528
  c->r[30]=c->r[31]|c->r[31]; // 8017652C
  c->f[30]=c->f[31]; // 80176530
L_80176534:;
  c->r[3]=c->r[31]|c->r[31]; // 80176534
  c->lr=0x8017653Cu; f_80176AD0(c); // 80176538
  c->r[31]=c->r[3]|c->r[3]; // 8017653C
L_80176540:;
  cmps(c,0,(int32_t)c->r[31],0); // 80176540
  if (!crb(c,2)) { IRQCHK(c); goto L_801764F8; } // 80176544
  W32(c->r[29]+0x00000024u,c->r[30]); // 80176548
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8017654C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80176550
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 80176554
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80176558
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017655C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80176560
  c->r[29]=R32(c->r[1]+0x00000014u); // 80176564
  c->r[0]=R32(c->r[1]+0x00000044u); // 80176568
  c->lr=c->r[0]; // 8017656C
  c->r[1]=c->r[1]+0x00000040u; // 80176570
  return; // 80176574
}

// Create__14CriAuStmBufferFP18CriAuStmBufManager
void f_80176578(Ctx* __restrict c) {
  trace_call(0x80176578u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176578
  c->r[0]=c->lr; // 8017657C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80176580
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80176584
  c->r[31]=c->r[1]|c->r[1]; // 80176588
  W32(c->r[1]+0x00000028u,c->r[30]); // 8017658C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80176590
  W32(c->r[1]+0x00000020u,c->r[28]); // 80176594
  c->r[28]=c->r[3]|c->r[3]; // 80176598
  c->lr=0x801765A0u; f_80175FB0(c); // 8017659C
  c->r[30]=c->r[3]|c->r[3]; // 801765A0
  c->r[6]=0u+0x802D0000u; // 801765A4
  c->r[4]=c->r[30]|c->r[30]; // 801765A8
  c->r[3]=0u+0x00000058u; // 801765AC
  c->r[6]=c->r[6]+0x000008D0u; // 801765B0
  c->r[5]=0u+0x00000002u; // 801765B4
  c->r[7]=0u+0x00000004u; // 801765B8
  c->lr=0x801765C0u; f_8017BF5C(c); // 801765BC
  cmps(c,0,(int32_t)c->r[3],0); // 801765C0
  c->r[29]=c->r[3]|c->r[3]; // 801765C4
  if (crb(c,2)) { goto L_801765D0; } // 801765C8
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801765CC
L_801765D0:;
  cmps(c,0,(int32_t)c->r[3],0); // 801765D0
  if (!crb(c,2)) { goto L_801765F8; } // 801765D4
  c->r[4]=0u+0x802D0000u; // 801765D8
  c->r[3]=0u+0x00000000u; // 801765DC
  c->r[4]=c->r[4]+0x000008D0u; // 801765E0
  c->r[5]=0u+0xFFFFFFFDu; // 801765E4
  c->r[4]=c->r[4]+0x0000000Fu; // 801765E8
  c->lr=0x801765F0u; f_8017968C(c); // 801765EC
  c->r[3]=0u+0x00000000u; // 801765F0
  goto L_8017665C; // 801765F4
L_801765F8:;
  W32(c->r[3]+0x00000004u,c->r[30]); // 801765F8
  c->r[30]=0u+0x00000000u; // 801765FC
  c->r[4]=c->r[29]|c->r[29]; // 80176600
  W32(c->r[3]+0x00000008u,c->r[28]); // 80176604
  W32(c->r[3]+0x00000000u,c->r[30]); // 80176608
  c->r[3]=c->r[28]|c->r[28]; // 8017660C
  c->lr=0x80176614u; f_80175FB8(c); // 80176610
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 80176614
  c->r[3]=c->r[29]|c->r[29]; // 80176618
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 8017661C
  W32(c->r[29]+0x00000010u,c->r[30]); // 80176620
  W32(c->r[29]+0x00000014u,c->r[30]); // 80176624
  W32(c->r[29]+0x00000018u,c->r[30]); // 80176628
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 8017662C
  W32(c->r[29]+0x00000024u,c->r[30]); // 80176630
  W32(c->r[29]+0x0000002Cu,c->r[30]); // 80176634
  W32(c->r[29]+0x00000028u,c->r[30]); // 80176638
  W32(c->r[29]+0x00000034u,c->r[30]); // 8017663C
  W32(c->r[29]+0x00000030u,c->r[30]); // 80176640
  W32(c->r[29]+0x0000003Cu,c->r[30]); // 80176644
  W32(c->r[29]+0x00000038u,c->r[30]); // 80176648
  W32(c->r[29]+0x00000040u,c->r[30]); // 8017664C
  W32(c->r[29]+0x00000044u,c->r[30]); // 80176650
  W32(c->r[29]+0x0000004Cu,c->r[30]); // 80176654
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 80176658
L_8017665C:;
  c->r[10]=c->r[31]|c->r[31]; // 8017665C
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80176660
  c->r[30]=R32(c->r[10]+0x00000028u); // 80176664
  c->r[29]=R32(c->r[10]+0x00000024u); // 80176668
  c->r[28]=R32(c->r[10]+0x00000020u); // 8017666C
  c->r[10]=R32(c->r[1]+0x00000000u); // 80176670
  c->r[0]=R32(c->r[10]+0x00000004u); // 80176674
  c->r[1]=c->r[10]|c->r[10]; // 80176678
  c->lr=c->r[0]; // 8017667C
  return; // 80176680
}

// Destroy__14CriAuStmBufferFv
void f_80176684(Ctx* __restrict c) {
  trace_call(0x80176684u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176684
  c->r[0]=c->lr; // 80176688
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017668C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80176690
  c->r[31]=c->r[3]|c->r[3]; // 80176694
  W32(c->r[1]+0x00000018u,c->r[30]); // 80176698
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017669C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 801766A0
  cmps(c,0,(int32_t)c->r[4],0); // 801766A4
  if (!crb(c,2)) { goto L_801766C0; } // 801766A8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801766AC
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801766B0
  goto L_801766D4; // 801766B4
  goto L_801766C0; // 801766B8
L_801766BC:;
  c->r[4]=c->r[0]|c->r[0]; // 801766BC
L_801766C0:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 801766C0
  cmps(c,0,(int32_t)c->r[0],0); // 801766C4
  if (!crb(c,2)) { IRQCHK(c); goto L_801766BC; } // 801766C8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801766CC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801766D0
L_801766D4:;
  c->r[30]=0u+0x00000000u; // 801766D4
  W32(c->r[3]+0x00000014u,c->r[30]); // 801766D8
  c->r[29]=0u+0xFFFFFFFFu; // 801766DC
  W32(c->r[3]+0x00000040u,c->r[30]); // 801766E0
L_801766E4:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 801766E4
  cmps(c,0,(int32_t)c->r[4],0); // 801766E8
  if (crb(c,2)) { goto L_80176704; } // 801766EC
  if (crb(c,2)) { goto L_8017673C; } // 801766F0
  c->r[0]=R32(c->r[4]+0x00000000u); // 801766F4
  W32(c->r[31]+0x00000010u,c->r[0]); // 801766F8
  W32(c->r[4]+0x00000000u,c->r[30]); // 801766FC
  goto L_8017673C; // 80176700
L_80176704:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80176704
  cmps(c,0,(int32_t)c->r[4],0); // 80176708
  if (crb(c,2)) { goto L_8017673C; } // 8017670C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80176710
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80176714
  W32(c->r[4]+0x00000000u,c->r[30]); // 80176718
  c->r[3]=R32(c->r[4]+0x00000014u); // 8017671C
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 80176720
  c->r[0]=sraw(c,c->r[3],31); // 80176724
  c->r[5]=R32(c->r[31]+0x00000038u); // 80176728
  c->r[3]=addc(c,c->r[6],c->r[3],0); // 8017672C
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 80176730
  c->r[0]=addc(c,c->r[5],c->r[0],c->xer_ca); // 80176734
  W32(c->r[31]+0x00000038u,c->r[0]); // 80176738
L_8017673C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017673C
  if (crb(c,2)) { goto L_80176758; } // 80176740
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80176744
  W32(c->r[4]+0x00000008u,c->r[29]); // 80176748
  c->r[3]=R32(c->r[31]+0x00000008u); // 8017674C
  c->lr=0x80176754u; f_80175F10(c); // 80176750
  IRQCHK(c); goto L_801766E4; // 80176754
L_80176758:;
  c->r[29]=0u+0x00000000u; // 80176758
  c->r[30]=0u+0xFFFFFFFFu; // 8017675C
L_80176760:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 80176760
  cmps(c,0,(int32_t)c->r[4],0); // 80176764
  if (crb(c,2)) { goto L_80176778; } // 80176768
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017676C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80176770
  W32(c->r[4]+0x00000000u,c->r[29]); // 80176774
L_80176778:;
  cmps(c,0,(int32_t)c->r[4],0); // 80176778
  if (crb(c,2)) { goto L_80176794; } // 8017677C
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 80176780
  W32(c->r[4]+0x00000008u,c->r[30]); // 80176784
  c->r[3]=R32(c->r[31]+0x00000008u); // 80176788
  c->lr=0x80176790u; f_80175F10(c); // 8017678C
  IRQCHK(c); goto L_80176760; // 80176790
L_80176794:;
  c->r[3]=R32(c->r[31]+0x00000008u); // 80176794
  c->r[4]=c->r[31]|c->r[31]; // 80176798
  c->lr=0x801767A0u; f_80176004(c); // 8017679C
  cmps(c,0,(int32_t)c->r[31],0); // 801767A0
  if (crb(c,2)) { goto L_801767B4; } // 801767A4
  c->r[3]=c->r[31]|c->r[31]; // 801767A8
  c->r[4]=0u+0x00000058u; // 801767AC
  c->lr=0x801767B4u; f_8017BFE8(c); // 801767B0
L_801767B4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801767B4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801767B8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801767BC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801767C0
  c->lr=c->r[0]; // 801767C4
  c->r[1]=c->r[1]+0x00000020u; // 801767C8
  return; // 801767CC
}

// GetFreeBlock__14CriAuStmBufferFv
void f_801767D0(Ctx* __restrict c) {
  trace_call(0x801767D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801767D0
  c->r[0]=c->lr; // 801767D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801767D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801767DC
  c->r[31]=c->r[3]|c->r[3]; // 801767E0
  c->r[4]=c->r[31]|c->r[31]; // 801767E4
  c->r[3]=R32(c->r[3]+0x00000008u); // 801767E8
  c->lr=0x801767F0u; f_80175E3C(c); // 801767EC
  cmps(c,0,(int32_t)c->r[3],0); // 801767F0
  if (!crb(c,2)) { goto L_80176800; } // 801767F4
  c->r[3]=0u+0x00000000u; // 801767F8
  goto L_801768D0; // 801767FC
L_80176800:;
  c->r[6]=R32(c->r[31]+0x0000000Cu); // 80176800
  c->r[5]=0u+0x00000000u; // 80176804
  c->r[7]=0u+0x00000000u; // 80176808
  goto L_80176824; // 8017680C
L_80176810:;
  c->r[4]=R32(c->r[6]+0x00000014u); // 80176810
  c->r[6]=R32(c->r[6]+0x00000000u); // 80176814
  c->r[0]=sraw(c,c->r[4],31); // 80176818
  c->r[5]=addc(c,c->r[5],c->r[4],0); // 8017681C
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80176820
L_80176824:;
  cmps(c,0,(int32_t)c->r[6],0); // 80176824
  if (!crb(c,2)) { IRQCHK(c); goto L_80176810; } // 80176828
  c->r[9]=R32(c->r[31]+0x00000014u); // 8017682C
  c->r[6]=0u+0x00000000u; // 80176830
  c->r[8]=0u+0x00000000u; // 80176834
  goto L_80176850; // 80176838
L_8017683C:;
  c->r[4]=R32(c->r[9]+0x00000014u); // 8017683C
  c->r[9]=R32(c->r[9]+0x00000000u); // 80176840
  c->r[0]=sraw(c,c->r[4],31); // 80176844
  c->r[6]=addc(c,c->r[6],c->r[4],0); // 80176848
  c->r[8]=addc(c,c->r[8],c->r[0],c->xer_ca); // 8017684C
L_80176850:;
  cmps(c,0,(int32_t)c->r[9],0); // 80176850
  if (!crb(c,2)) { IRQCHK(c); goto L_8017683C; } // 80176854
  c->r[4]=addc(c,c->r[5],c->r[6],0); // 80176858
  c->r[6]=R32(c->r[31]+0x00000038u); // 8017685C
  c->r[5]=R32(c->r[31]+0x0000003Cu); // 80176860
  c->r[0]=addc(c,c->r[7],c->r[8],c->xer_ca); // 80176864
  c->r[5]=addc(c,c->r[5],c->r[4],0); // 80176868
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 8017686C
  c->r[6]=addc(c,c->r[6],c->r[0],c->xer_ca); // 80176870
  W32(c->r[3]+0x00000008u,c->r[6]); // 80176874
  c->r[4]=R32(c->r[31]+0x0000002Cu); // 80176878
  c->r[0]=R32(c->r[31]+0x00000028u); // 8017687C
  c->r[4]=addc(c,~c->r[4],c->r[5],1); // 80176880
  c->r[5]=R32(c->r[31]+0x00000034u); // 80176884
  c->r[0]=addc(c,~c->r[0],c->r[6],c->xer_ca); // 80176888
  c->r[4]=addc(c,~c->r[4],c->r[5],1); cr0(c,c->r[4]); // 8017688C
  if (!crb(c,2)) { goto L_801768B4; } // 80176890
  c->r[0]=0u+0xFFFFFFFFu; // 80176894
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80176898
  c->r[4]=c->r[3]|c->r[3]; // 8017689C
  W32(c->r[3]+0x00000008u,c->r[0]); // 801768A0
  c->r[3]=R32(c->r[31]+0x00000008u); // 801768A4
  c->lr=0x801768ACu; f_80175F10(c); // 801768A8
  c->r[3]=0u+0x00000000u; // 801768AC
  goto L_801768D0; // 801768B0
L_801768B4:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801768B4
  cmps(c,0,(int32_t)c->r[0],(int32_t)c->r[4]); // 801768B8
  if (!crb(c,0)) { goto L_801768C4; } // 801768BC
  c->r[4]=c->r[0]|c->r[0]; // 801768C0
L_801768C4:;
  W32(c->r[3]+0x00000014u,c->r[4]); // 801768C4
  c->r[0]=0u+0x00000001u; // 801768C8
  W32(c->r[31]+0x00000040u,c->r[0]); // 801768CC
L_801768D0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801768D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801768D4
  c->lr=c->r[0]; // 801768D8
  c->r[1]=c->r[1]+0x00000010u; // 801768DC
  return; // 801768E0
}

// PutFreeBlock__14CriAuStmBufferFP19CriAuStmBufBlockTag
void f_801768E4(Ctx* __restrict c) {
  trace_call(0x801768E4u);
  c->r[0]=0u+0xFFFFFFFFu; // 801768E4
  W32(c->r[4]+0x0000000Cu,c->r[0]); // 801768E8
  W32(c->r[4]+0x00000008u,c->r[0]); // 801768EC
  c->r[3]=R32(c->r[3]+0x00000008u); // 801768F0
  f_80175F10(c); return; // 801768F4
}

// GetDataBlock__14CriAuStmBufferFv
void f_801768F8(Ctx* __restrict c) {
  trace_call(0x801768F8u);
  c->r[7]=R32(c->r[3]+0x00000010u); // 801768F8
  cmps(c,0,(int32_t)c->r[7],0); // 801768FC
  if (crb(c,2)) { goto L_8017691C; } // 80176900
  if (crb(c,2)) { goto L_80176958; } // 80176904
  c->r[4]=R32(c->r[7]+0x00000000u); // 80176908
  c->r[0]=0u+0x00000000u; // 8017690C
  W32(c->r[3]+0x00000010u,c->r[4]); // 80176910
  W32(c->r[7]+0x00000000u,c->r[0]); // 80176914
  goto L_80176958; // 80176918
L_8017691C:;
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 8017691C
  cmps(c,0,(int32_t)c->r[7],0); // 80176920
  if (crb(c,2)) { goto L_80176958; } // 80176924
  c->r[4]=R32(c->r[7]+0x00000000u); // 80176928
  c->r[0]=0u+0x00000000u; // 8017692C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80176930
  W32(c->r[7]+0x00000000u,c->r[0]); // 80176934
  c->r[4]=R32(c->r[7]+0x00000014u); // 80176938
  c->r[6]=R32(c->r[3]+0x0000003Cu); // 8017693C
  c->r[0]=sraw(c,c->r[4],31); // 80176940
  c->r[5]=R32(c->r[3]+0x00000038u); // 80176944
  c->r[4]=addc(c,c->r[6],c->r[4],0); // 80176948
  W32(c->r[3]+0x0000003Cu,c->r[4]); // 8017694C
  c->r[0]=addc(c,c->r[5],c->r[0],c->xer_ca); // 80176950
  W32(c->r[3]+0x00000038u,c->r[0]); // 80176954
L_80176958:;
  c->r[3]=c->r[7]|c->r[7]; // 80176958
  return; // 8017695C
}

// GetLastDataBlock__14CriAuStmBufferFv
void f_80176960(Ctx* __restrict c) {
  trace_call(0x80176960u);
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80176960
  c->r[6]=0u+0x00000000u; // 80176964
  cmps(c,0,(int32_t)c->r[5],0); // 80176968
  if (crb(c,2)) { goto L_801769B0; } // 8017696C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80176970
  cmps(c,0,(int32_t)c->r[0],0); // 80176974
  if (crb(c,2)) { goto L_801769B0; } // 80176978
L_8017697C:;
  c->r[4]=R32(c->r[5]+0x00000000u); // 8017697C
  c->r[0]=R32(c->r[4]+0x00000000u); // 80176980
  cmps(c,0,(int32_t)c->r[0],0); // 80176984
  if (!crb(c,2)) { goto L_801769A8; } // 80176988
  c->r[0]=R32(c->r[3]+0x00000044u); // 8017698C
  cmps(c,0,(int32_t)c->r[0],1); // 80176990
  if (crb(c,2)) { goto L_801769B0; } // 80176994
  c->r[0]=0u+0x00000000u; // 80176998
  W32(c->r[5]+0x00000000u,c->r[0]); // 8017699C
  c->r[6]=c->r[4]|c->r[4]; // 801769A0
  goto L_801769B0; // 801769A4
L_801769A8:;
  c->r[5]=c->r[4]|c->r[4]; // 801769A8
  IRQCHK(c); goto L_8017697C; // 801769AC
L_801769B0:;
  c->r[3]=c->r[6]|c->r[6]; // 801769B0
  return; // 801769B4
}

// PutReqReadBlock__14CriAuStmBufferFP19CriAuStmBufBlockTag
void f_801769B8(Ctx* __restrict c) {
  trace_call(0x801769B8u);
  cmps(c,0,(int32_t)c->r[4],0); // 801769B8
  if (!crb(c,2)) { goto L_801769D4; } // 801769BC
  c->r[4]=0u+0x802D0000u; // 801769C0
  c->r[3]=0u+0x00000000u; // 801769C4
  c->r[4]=c->r[4]+0x000008D0u; // 801769C8
  c->r[4]=c->r[4]+0x00000051u; // 801769CC
  f_80179434(c); return; // 801769D0
L_801769D4:;
  c->r[5]=R32(c->r[3]+0x00000014u); // 801769D4
  cmps(c,0,(int32_t)c->r[5],0); // 801769D8
  if (!crb(c,2)) { goto L_801769F8; } // 801769DC
  W32(c->r[3]+0x00000014u,c->r[4]); // 801769E0
  c->r[0]=0u+0x00000000u; // 801769E4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801769E8
  return; // 801769EC
  goto L_801769F8; // 801769F0
L_801769F4:;
  c->r[5]=c->r[0]|c->r[0]; // 801769F4
L_801769F8:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 801769F8
  cmps(c,0,(int32_t)c->r[0],0); // 801769FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801769F4; } // 80176A00
  W32(c->r[5]+0x00000000u,c->r[4]); // 80176A04
  c->r[0]=0u+0x00000000u; // 80176A08
  W32(c->r[4]+0x00000000u,c->r[0]); // 80176A0C
  return; // 80176A10
}

// PutDataBlockAll__14CriAuStmBufferFv
void f_80176A14(Ctx* __restrict c) {
  trace_call(0x80176A14u);
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80176A14
  cmps(c,0,(int32_t)c->r[4],0); // 80176A18
  if (!crb(c,2)) { goto L_80176A34; } // 80176A1C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80176A20
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80176A24
  goto L_80176A48; // 80176A28
  goto L_80176A34; // 80176A2C
L_80176A30:;
  c->r[4]=c->r[0]|c->r[0]; // 80176A30
L_80176A34:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80176A34
  cmps(c,0,(int32_t)c->r[0],0); // 80176A38
  if (!crb(c,2)) { IRQCHK(c); goto L_80176A30; } // 80176A3C
  c->r[0]=R32(c->r[3]+0x00000014u); // 80176A40
  W32(c->r[4]+0x00000000u,c->r[0]); // 80176A44
L_80176A48:;
  c->r[0]=0u+0x00000000u; // 80176A48
  W32(c->r[3]+0x00000014u,c->r[0]); // 80176A4C
  W32(c->r[3]+0x00000040u,c->r[0]); // 80176A50
  return; // 80176A54
}

// PutTransBlock__14CriAuStmBufferFP19CriAuStmBufBlockTag
void f_80176A58(Ctx* __restrict c) {
  trace_call(0x80176A58u);
  cmps(c,0,(int32_t)c->r[4],0); // 80176A58
  if (!crb(c,2)) { goto L_80176A74; } // 80176A5C
  c->r[4]=0u+0x802D0000u; // 80176A60
  c->r[3]=0u+0x00000000u; // 80176A64
  c->r[4]=c->r[4]+0x000008D0u; // 80176A68
  c->r[4]=c->r[4]+0x0000008Au; // 80176A6C
  f_80179434(c); return; // 80176A70
L_80176A74:;
  c->r[5]=R32(c->r[3]+0x00000018u); // 80176A74
  cmps(c,0,(int32_t)c->r[5],0); // 80176A78
  if (!crb(c,2)) { goto L_80176A90; } // 80176A7C
  W32(c->r[3]+0x00000018u,c->r[4]); // 80176A80
  return; // 80176A84
  goto L_80176A90; // 80176A88
L_80176A8C:;
  c->r[5]=c->r[0]|c->r[0]; // 80176A8C
L_80176A90:;
  c->r[0]=R32(c->r[5]+0x00000000u); // 80176A90
  cmps(c,0,(int32_t)c->r[0],0); // 80176A94
  if (!crb(c,2)) { IRQCHK(c); goto L_80176A8C; } // 80176A98
  W32(c->r[5]+0x00000000u,c->r[4]); // 80176A9C
  return; // 80176AA0
}

// GetTransBlock__14CriAuStmBufferFv
void f_80176AA4(Ctx* __restrict c) {
  trace_call(0x80176AA4u);
  c->r[5]=R32(c->r[3]+0x00000018u); // 80176AA4
  cmps(c,0,(int32_t)c->r[5],0); // 80176AA8
  if (crb(c,2)) { goto L_80176AC0; } // 80176AAC
  c->r[4]=R32(c->r[5]+0x00000000u); // 80176AB0
  c->r[0]=0u+0x00000000u; // 80176AB4
  W32(c->r[3]+0x00000018u,c->r[4]); // 80176AB8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80176ABC
L_80176AC0:;
  c->r[3]=c->r[5]|c->r[5]; // 80176AC0
  return; // 80176AC4
}

// PeekTransBlock__14CriAuStmBufferFv
void f_80176AC8(Ctx* __restrict c) {
  trace_call(0x80176AC8u);
  c->r[3]=R32(c->r[3]+0x00000018u); // 80176AC8
  return; // 80176ACC
}

// GetNext__14CriAuStmBufferFv
void f_80176AD0(Ctx* __restrict c) {
  trace_call(0x80176AD0u);
  c->r[3]=R32(c->r[3]+0x00000000u); // 80176AD0
  return; // 80176AD4
}

// SetNext__14CriAuStmBufferFP14CriAuStmBuffer
void f_80176AD8(Ctx* __restrict c) {
  trace_call(0x80176AD8u);
  W32(c->r[3]+0x00000000u,c->r[4]); // 80176AD8
  return; // 80176ADC
}

// GetNumData__14CriAuStmBufferFv
void f_80176AE0(Ctx* __restrict c) {
  trace_call(0x80176AE0u);
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80176AE0
  c->r[4]=0u+0x00000000u; // 80176AE4
  c->r[3]=0u+0x00000000u; // 80176AE8
  goto L_80176B04; // 80176AEC
L_80176AF0:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80176AF0
  c->r[6]=R32(c->r[6]+0x00000000u); // 80176AF4
  c->r[0]=sraw(c,c->r[5],31); // 80176AF8
  c->r[4]=addc(c,c->r[4],c->r[5],0); // 80176AFC
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 80176B00
L_80176B04:;
  cmps(c,0,(int32_t)c->r[6],0); // 80176B04
  if (!crb(c,2)) { IRQCHK(c); goto L_80176AF0; } // 80176B08
  return; // 80176B0C
}

// GetNumKeepData__14CriAuStmBufferFv
void f_80176B10(Ctx* __restrict c) {
  trace_call(0x80176B10u);
  c->r[6]=R32(c->r[3]+0x00000010u); // 80176B10
  c->r[4]=0u+0x00000000u; // 80176B14
  c->r[3]=0u+0x00000000u; // 80176B18
  goto L_80176B34; // 80176B1C
L_80176B20:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80176B20
  c->r[6]=R32(c->r[6]+0x00000000u); // 80176B24
  c->r[0]=sraw(c,c->r[5],31); // 80176B28
  c->r[4]=addc(c,c->r[4],c->r[5],0); // 80176B2C
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 80176B30
L_80176B34:;
  cmps(c,0,(int32_t)c->r[6],0); // 80176B34
  if (!crb(c,2)) { IRQCHK(c); goto L_80176B20; } // 80176B38
  return; // 80176B3C
}

// GetNumTrans__14CriAuStmBufferFv
void f_80176B40(Ctx* __restrict c) {
  trace_call(0x80176B40u);
  c->r[6]=R32(c->r[3]+0x00000018u); // 80176B40
  c->r[4]=0u+0x00000000u; // 80176B44
  c->r[3]=0u+0x00000000u; // 80176B48
  goto L_80176B64; // 80176B4C
L_80176B50:;
  c->r[5]=R32(c->r[6]+0x00000014u); // 80176B50
  c->r[6]=R32(c->r[6]+0x00000000u); // 80176B54
  c->r[0]=sraw(c,c->r[5],31); // 80176B58
  c->r[4]=addc(c,c->r[4],c->r[5],0); // 80176B5C
  c->r[3]=addc(c,c->r[3],c->r[0],c->xer_ca); // 80176B60
L_80176B64:;
  cmps(c,0,(int32_t)c->r[6],0); // 80176B64
  if (!crb(c,2)) { IRQCHK(c); goto L_80176B50; } // 80176B68
  return; // 80176B6C
}

// GetTransChainCount__14CriAuStmBufferCFv
void f_80176B70(Ctx* __restrict c) {
  trace_call(0x80176B70u);
  c->r[4]=R32(c->r[3]+0x00000018u); // 80176B70
  c->r[3]=0u+0x00000000u; // 80176B74
  goto L_80176B84; // 80176B78
L_80176B7C:;
  c->r[4]=R32(c->r[4]+0x00000000u); // 80176B7C
  c->r[3]=c->r[3]+0x00000001u; // 80176B80
L_80176B84:;
  cmps(c,0,(int32_t)c->r[4],0); // 80176B84
  if (!crb(c,2)) { IRQCHK(c); goto L_80176B7C; } // 80176B88
  return; // 80176B8C
}

// SetBandWidth__14CriAuStmBufferFf
void f_80176B90(Ctx* __restrict c) {
  trace_call(0x80176B90u);
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[1]);} // 80176B90
  c->r[3]=R32(c->r[3]+0x00000008u); // 80176B94
  f_801760F4(c); return; // 80176B98
}

// GetBandWidth__14CriAuStmBufferFv
void f_80176B9C(Ctx* __restrict c) {
  trace_call(0x80176B9Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176B9C
  return; // 80176BA0
}

// GetRemainTime__14CriAuStmBufferFv
void f_80176BA4(Ctx* __restrict c) {
  trace_call(0x80176BA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176BA4
  c->r[0]=c->lr; // 80176BA8
  c->r[6]=0u+0x00000000u; // 80176BAC
  c->r[5]=0u+0x00000000u; // 80176BB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176BB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176BB8
  c->r[31]=c->r[3]|c->r[3]; // 80176BBC
  c->r[7]=R32(c->r[3]+0x00000018u); // 80176BC0
  goto L_80176BDC; // 80176BC4
L_80176BC8:;
  c->r[4]=R32(c->r[7]+0x00000014u); // 80176BC8
  c->r[7]=R32(c->r[7]+0x00000000u); // 80176BCC
  c->r[0]=sraw(c,c->r[4],31); // 80176BD0
  c->r[6]=addc(c,c->r[6],c->r[4],0); // 80176BD4
  c->r[5]=addc(c,c->r[5],c->r[0],c->xer_ca); // 80176BD8
L_80176BDC:;
  cmps(c,0,(int32_t)c->r[7],0); // 80176BDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80176BC8; } // 80176BE0
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 80176BE4
  c->r[8]=0u+0x00000000u; // 80176BE8
  c->r[7]=0u+0x00000000u; // 80176BEC
  goto L_80176C08; // 80176BF0
L_80176BF4:;
  c->r[4]=R32(c->r[9]+0x00000014u); // 80176BF4
  c->r[9]=R32(c->r[9]+0x00000000u); // 80176BF8
  c->r[0]=sraw(c,c->r[4],31); // 80176BFC
  c->r[8]=addc(c,c->r[8],c->r[4],0); // 80176C00
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80176C04
L_80176C08:;
  cmps(c,0,(int32_t)c->r[9],0); // 80176C08
  if (!crb(c,2)) { IRQCHK(c); goto L_80176BF4; } // 80176C0C
  c->r[11]=R32(c->r[3]+0x00000010u); // 80176C10
  c->r[10]=0u+0x00000000u; // 80176C14
  c->r[9]=0u+0x00000000u; // 80176C18
  goto L_80176C34; // 80176C1C
L_80176C20:;
  c->r[4]=R32(c->r[11]+0x00000014u); // 80176C20
  c->r[11]=R32(c->r[11]+0x00000000u); // 80176C24
  c->r[0]=sraw(c,c->r[4],31); // 80176C28
  c->r[10]=addc(c,c->r[10],c->r[4],0); // 80176C2C
  c->r[9]=addc(c,c->r[9],c->r[0],c->xer_ca); // 80176C30
L_80176C34:;
  cmps(c,0,(int32_t)c->r[11],0); // 80176C34
  if (!crb(c,2)) { IRQCHK(c); goto L_80176C20; } // 80176C38
  c->r[4]=addc(c,c->r[6],c->r[8],0); // 80176C3C
  c->r[0]=addc(c,c->r[5],c->r[7],c->xer_ca); // 80176C40
  c->r[5]=addc(c,c->r[4],c->r[10],0); // 80176C44
  c->r[4]=addc(c,c->r[0],c->r[9],c->xer_ca); // 80176C48
  c->r[0]=c->r[5]|c->r[4]; cr0(c,c->r[0]); // 80176C4C
  if (!crb(c,2)) { goto L_80176C60; } // 80176C50
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80176C54
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80176C58
  goto L_80176C98; // 80176C5C
L_80176C60:;
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176C60
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176C64
  fcmp(c,0,c->f[1],c->f[0]); // 80176C68
  if (crb(c,2)) { goto L_80176C90; } // 80176C6C
  c->r[3]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80176C70
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80176C74
  c->r[3]=(rotl(c->r[5],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 80176C78
  c->lr=0x80176C80u; f_800ADF9C(c); // 80176C7C
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176C80
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80176C84
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80176C88
  goto L_80176C98; // 80176C8C
L_80176C90:;
  {uint32_t ea=c->r[2]+0xFFFFB4CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176C90
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[0]);} // 80176C94
L_80176C98:;
  {uint32_t ea=c->r[31]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176C98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176C9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176CA0
  c->lr=c->r[0]; // 80176CA4
  c->r[1]=c->r[1]+0x00000010u; // 80176CA8
  return; // 80176CAC
}

// IsRealtime__14CriAuStmBufferFv
void f_80176CB0(Ctx* __restrict c) {
  trace_call(0x80176CB0u);
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176CB0
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176CB4
  fcmp(c,0,c->f[1],c->f[0]); // 80176CB8
  c->r[0]=c->cr; // 80176CBC
  c->r[0]=rotl(c->r[0],3)&0x00000001u; // 80176CC0
  c->r[3]=c->r[0]^0x00000001u; // 80176CC4
  return; // 80176CC8
}

// SetFileInfo__14CriAuStmBufferFPCcxx
void f_80176CCC(Ctx* __restrict c) {
  trace_call(0x80176CCCu);
  c->r[0]=R32(c->r[3]+0x00000010u); // 80176CCC
  cmps(c,0,(int32_t)c->r[0],0); // 80176CD0
  if (crb(c,2)) { goto L_80176CE0; } // 80176CD4
  c->r[3]=0u+0x00000000u; // 80176CD8
  return; // 80176CDC
L_80176CE0:;
  c->r[9]=R32(c->r[3]+0x0000000Cu); // 80176CE0
  c->r[0]=0u+0x00000000u; // 80176CE4
  W32(c->r[3]+0x00000024u,c->r[4]); // 80176CE8
  W32(c->r[3]+0x0000002Cu,c->r[6]); // 80176CEC
  W32(c->r[3]+0x00000028u,c->r[5]); // 80176CF0
  W32(c->r[3]+0x00000034u,c->r[8]); // 80176CF4
  W32(c->r[3]+0x00000030u,c->r[7]); // 80176CF8
  W32(c->r[3]+0x0000003Cu,c->r[6]); // 80176CFC
  W32(c->r[3]+0x00000038u,c->r[5]); // 80176D00
  W32(c->r[3]+0x00000010u,c->r[9]); // 80176D04
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80176D08
  c->r[3]=0u+0x00000001u; // 80176D0C
  return; // 80176D10
}

// IsBufferedAll__14CriAuStmBufferFv
void f_80176D14(Ctx* __restrict c) {
  trace_call(0x80176D14u);
  c->r[5]=R32(c->r[3]+0x0000000Cu); // 80176D14
  c->r[8]=0u+0x00000000u; // 80176D18
  c->r[7]=0u+0x00000000u; // 80176D1C
  goto L_80176D38; // 80176D20
L_80176D24:;
  c->r[4]=R32(c->r[5]+0x00000014u); // 80176D24
  c->r[5]=R32(c->r[5]+0x00000000u); // 80176D28
  c->r[0]=sraw(c,c->r[4],31); // 80176D2C
  c->r[8]=addc(c,c->r[8],c->r[4],0); // 80176D30
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80176D34
L_80176D38:;
  cmps(c,0,(int32_t)c->r[5],0); // 80176D38
  if (!crb(c,2)) { IRQCHK(c); goto L_80176D24; } // 80176D3C
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 80176D40
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80176D44
  c->r[6]=R32(c->r[3]+0x00000038u); // 80176D48
  c->r[4]=addc(c,~c->r[0],c->r[4],1); // 80176D4C
  c->r[5]=R32(c->r[3]+0x00000028u); // 80176D50
  c->r[0]=R32(c->r[3]+0x00000030u); // 80176D54
  c->r[6]=addc(c,~c->r[5],c->r[6],c->xer_ca); // 80176D58
  c->r[3]=R32(c->r[3]+0x00000034u); // 80176D5C
  c->r[5]=addc(c,c->r[4],c->r[8],0); // 80176D60
  c->r[4]=c->r[0]^0x80000000u; // 80176D64
  c->r[0]=addc(c,c->r[6],c->r[7],c->xer_ca); // 80176D68
  c->r[0]=c->r[0]^0x80000000u; // 80176D6C
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 80176D70
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80176D74
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80176D78
  c->r[4]=0u-c->r[4]; // 80176D7C
  c->r[3]=addc(c,~c->r[4],0x00000001u,1); // 80176D80
  return; // 80176D84
}

// IsEndOfStream__14CriAuStmBufferFv
void f_80176D88(Ctx* __restrict c) {
  trace_call(0x80176D88u);
  c->r[5]=R32(c->r[3]+0x00000018u); // 80176D88
  c->r[8]=0u+0x00000000u; // 80176D8C
  c->r[7]=0u+0x00000000u; // 80176D90
  goto L_80176DAC; // 80176D94
L_80176D98:;
  c->r[4]=R32(c->r[5]+0x00000014u); // 80176D98
  c->r[5]=R32(c->r[5]+0x00000000u); // 80176D9C
  c->r[0]=sraw(c,c->r[4],31); // 80176DA0
  c->r[8]=addc(c,c->r[8],c->r[4],0); // 80176DA4
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80176DA8
L_80176DAC:;
  cmps(c,0,(int32_t)c->r[5],0); // 80176DAC
  if (!crb(c,2)) { IRQCHK(c); goto L_80176D98; } // 80176DB0
  c->r[4]=R32(c->r[3]+0x0000003Cu); // 80176DB4
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80176DB8
  c->r[6]=R32(c->r[3]+0x00000038u); // 80176DBC
  c->r[4]=addc(c,~c->r[0],c->r[4],1); // 80176DC0
  c->r[5]=R32(c->r[3]+0x00000028u); // 80176DC4
  c->r[0]=R32(c->r[3]+0x00000030u); // 80176DC8
  c->r[6]=addc(c,~c->r[5],c->r[6],c->xer_ca); // 80176DCC
  c->r[3]=R32(c->r[3]+0x00000034u); // 80176DD0
  c->r[5]=addc(c,~c->r[8],c->r[4],1); // 80176DD4
  c->r[4]=c->r[0]^0x80000000u; // 80176DD8
  c->r[0]=addc(c,~c->r[7],c->r[6],c->xer_ca); // 80176DDC
  c->r[0]=c->r[0]^0x80000000u; // 80176DE0
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 80176DE4
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80176DE8
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80176DEC
  c->r[4]=0u-c->r[4]; // 80176DF0
  c->r[3]=addc(c,~c->r[4],0x00000001u,1); // 80176DF4
  return; // 80176DF8
}

// SetLockFlag__14CriAuStmBufferFl
void f_80176DFC(Ctx* __restrict c) {
  trace_call(0x80176DFCu);
  W32(c->r[3]+0x00000044u,c->r[4]); // 80176DFC
  return; // 80176E00
}

// SetStreamer__14CriAuStmBufferFP13CriAuStreamer
void f_80176E04(Ctx* __restrict c) {
  trace_call(0x80176E04u);
  W32(c->r[3]+0x00000048u,c->r[4]); // 80176E04
  return; // 80176E08
}

// SetActiveFlag__14CriAuStmBufferFl
void f_80176E0C(Ctx* __restrict c) {
  trace_call(0x80176E0Cu);
  W32(c->r[3]+0x0000004Cu,c->r[4]); // 80176E0C
  return; // 80176E10
}

// GetActiveFlag__14CriAuStmBufferFv
void f_80176E14(Ctx* __restrict c) {
  trace_call(0x80176E14u);
  c->r[3]=R32(c->r[3]+0x0000004Cu); // 80176E14
  return; // 80176E18
}

// GetBufferTimeAll__14CriAuStmBufferFv
void f_80176E1C(Ctx* __restrict c) {
  trace_call(0x80176E1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176E1C
  c->r[0]=c->lr; // 80176E20
  c->r[5]=0u+0x00000000u; // 80176E24
  c->r[6]=0u+0x00000000u; // 80176E28
  W32(c->r[1]+0x00000014u,c->r[0]); // 80176E2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80176E30
  c->r[31]=c->r[3]|c->r[3]; // 80176E34
  W32(c->r[1]+0x00000008u,c->r[30]); // 80176E38
  c->r[7]=R32(c->r[3]+0x00000018u); // 80176E3C
  goto L_80176E58; // 80176E40
L_80176E44:;
  c->r[4]=R32(c->r[7]+0x00000014u); // 80176E44
  c->r[7]=R32(c->r[7]+0x00000000u); // 80176E48
  c->r[0]=sraw(c,c->r[4],31); // 80176E4C
  c->r[5]=addc(c,c->r[5],c->r[4],0); // 80176E50
  c->r[6]=addc(c,c->r[6],c->r[0],c->xer_ca); // 80176E54
L_80176E58:;
  cmps(c,0,(int32_t)c->r[7],0); // 80176E58
  if (!crb(c,2)) { IRQCHK(c); goto L_80176E44; } // 80176E5C
  c->r[9]=R32(c->r[3]+0x00000014u); // 80176E60
  c->r[8]=0u+0x00000000u; // 80176E64
  c->r[7]=0u+0x00000000u; // 80176E68
  goto L_80176E84; // 80176E6C
L_80176E70:;
  c->r[4]=R32(c->r[9]+0x00000014u); // 80176E70
  c->r[9]=R32(c->r[9]+0x00000000u); // 80176E74
  c->r[0]=sraw(c,c->r[4],31); // 80176E78
  c->r[8]=addc(c,c->r[8],c->r[4],0); // 80176E7C
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 80176E80
L_80176E84:;
  cmps(c,0,(int32_t)c->r[9],0); // 80176E84
  if (!crb(c,2)) { IRQCHK(c); goto L_80176E70; } // 80176E88
  c->r[11]=R32(c->r[3]+0x0000000Cu); // 80176E8C
  c->r[10]=0u+0x00000000u; // 80176E90
  c->r[9]=0u+0x00000000u; // 80176E94
  goto L_80176EB0; // 80176E98
L_80176E9C:;
  c->r[4]=R32(c->r[11]+0x00000014u); // 80176E9C
  c->r[11]=R32(c->r[11]+0x00000000u); // 80176EA0
  c->r[0]=sraw(c,c->r[4],31); // 80176EA4
  c->r[10]=addc(c,c->r[10],c->r[4],0); // 80176EA8
  c->r[9]=addc(c,c->r[9],c->r[0],c->xer_ca); // 80176EAC
L_80176EB0:;
  cmps(c,0,(int32_t)c->r[11],0); // 80176EB0
  if (!crb(c,2)) { IRQCHK(c); goto L_80176E9C; } // 80176EB4
  c->r[30]=R32(c->r[3]+0x00000010u); // 80176EB8
  c->r[12]=0u+0x00000000u; // 80176EBC
  c->r[11]=0u+0x00000000u; // 80176EC0
  goto L_80176EDC; // 80176EC4
L_80176EC8:;
  c->r[4]=R32(c->r[30]+0x00000014u); // 80176EC8
  c->r[30]=R32(c->r[30]+0x00000000u); // 80176ECC
  c->r[0]=sraw(c,c->r[4],31); // 80176ED0
  c->r[12]=addc(c,c->r[12],c->r[4],0); // 80176ED4
  c->r[11]=addc(c,c->r[11],c->r[0],c->xer_ca); // 80176ED8
L_80176EDC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80176EDC
  if (!crb(c,2)) { IRQCHK(c); goto L_80176EC8; } // 80176EE0
  c->r[5]=addc(c,c->r[5],c->r[12],0); // 80176EE4
  c->r[6]=addc(c,c->r[6],c->r[11],c->xer_ca); // 80176EE8
  c->r[4]=addc(c,c->r[8],c->r[10],0); // 80176EEC
  c->r[0]=addc(c,c->r[7],c->r[9],c->xer_ca); // 80176EF0
  c->r[5]=addc(c,c->r[5],c->r[4],0); // 80176EF4
  c->r[4]=addc(c,c->r[6],c->r[0],c->xer_ca); // 80176EF8
  c->r[0]=c->r[5]|c->r[4]; cr0(c,c->r[0]); // 80176EFC
  if (!crb(c,2)) { goto L_80176F0C; } // 80176F00
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F04
  goto L_80176F3C; // 80176F08
L_80176F0C:;
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F0C
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176F10
  fcmp(c,0,c->f[1],c->f[0]); // 80176F14
  if (crb(c,2)) { goto L_80176F38; } // 80176F18
  c->r[3]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80176F1C
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80176F20
  c->r[3]=(rotl(c->r[5],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 80176F24
  c->lr=0x80176F2Cu; f_800ADF9C(c); // 80176F28
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80176F2C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 80176F30
  goto L_80176F3C; // 80176F34
L_80176F38:;
  {uint32_t ea=c->r[2]+0xFFFFB4CCu; c->f[1]=c->ps1[1]=RF32(ea);} // 80176F38
L_80176F3C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80176F3C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80176F40
  c->r[30]=R32(c->r[1]+0x00000008u); // 80176F44
  c->lr=c->r[0]; // 80176F48
  c->r[1]=c->r[1]+0x00000010u; // 80176F4C
  return; // 80176F50
}

// FreeAllBlocks__14CriAuStmBufferFv
void f_80176F54(Ctx* __restrict c) {
  trace_call(0x80176F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80176F54
  c->r[0]=c->lr; // 80176F58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80176F5C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80176F60
  c->r[31]=c->r[3]|c->r[3]; // 80176F64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80176F68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80176F6C
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80176F70
  cmps(c,0,(int32_t)c->r[4],0); // 80176F74
  if (!crb(c,2)) { goto L_80176F90; } // 80176F78
  c->r[0]=R32(c->r[3]+0x00000014u); // 80176F7C
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80176F80
  goto L_80176FA4; // 80176F84
  goto L_80176F90; // 80176F88
L_80176F8C:;
  c->r[4]=c->r[0]|c->r[0]; // 80176F8C
L_80176F90:;
  c->r[0]=R32(c->r[4]+0x00000000u); // 80176F90
  cmps(c,0,(int32_t)c->r[0],0); // 80176F94
  if (!crb(c,2)) { IRQCHK(c); goto L_80176F8C; } // 80176F98
  c->r[0]=R32(c->r[3]+0x00000014u); // 80176F9C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80176FA0
L_80176FA4:;
  c->r[30]=0u+0x00000000u; // 80176FA4
  W32(c->r[3]+0x00000014u,c->r[30]); // 80176FA8
  c->r[29]=0u+0xFFFFFFFFu; // 80176FAC
  W32(c->r[3]+0x00000040u,c->r[30]); // 80176FB0
L_80176FB4:;
  c->r[4]=R32(c->r[31]+0x00000010u); // 80176FB4
  cmps(c,0,(int32_t)c->r[4],0); // 80176FB8
  if (crb(c,2)) { goto L_80176FD4; } // 80176FBC
  if (crb(c,2)) { goto L_8017700C; } // 80176FC0
  c->r[0]=R32(c->r[4]+0x00000000u); // 80176FC4
  W32(c->r[31]+0x00000010u,c->r[0]); // 80176FC8
  W32(c->r[4]+0x00000000u,c->r[30]); // 80176FCC
  goto L_8017700C; // 80176FD0
L_80176FD4:;
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80176FD4
  cmps(c,0,(int32_t)c->r[4],0); // 80176FD8
  if (crb(c,2)) { goto L_8017700C; } // 80176FDC
  c->r[0]=R32(c->r[4]+0x00000000u); // 80176FE0
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80176FE4
  W32(c->r[4]+0x00000000u,c->r[30]); // 80176FE8
  c->r[3]=R32(c->r[4]+0x00000014u); // 80176FEC
  c->r[6]=R32(c->r[31]+0x0000003Cu); // 80176FF0
  c->r[0]=sraw(c,c->r[3],31); // 80176FF4
  c->r[5]=R32(c->r[31]+0x00000038u); // 80176FF8
  c->r[3]=addc(c,c->r[6],c->r[3],0); // 80176FFC
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 80177000
  c->r[0]=addc(c,c->r[5],c->r[0],c->xer_ca); // 80177004
  W32(c->r[31]+0x00000038u,c->r[0]); // 80177008
L_8017700C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8017700C
  if (crb(c,2)) { goto L_80177028; } // 80177010
  W32(c->r[4]+0x0000000Cu,c->r[29]); // 80177014
  W32(c->r[4]+0x00000008u,c->r[29]); // 80177018
  c->r[3]=R32(c->r[31]+0x00000008u); // 8017701C
  c->lr=0x80177024u; f_80175F10(c); // 80177020
  IRQCHK(c); goto L_80176FB4; // 80177024
L_80177028:;
  c->r[29]=0u+0x00000000u; // 80177028
  c->r[30]=0u+0xFFFFFFFFu; // 8017702C
L_80177030:;
  c->r[4]=R32(c->r[31]+0x00000018u); // 80177030
  cmps(c,0,(int32_t)c->r[4],0); // 80177034
  if (crb(c,2)) { goto L_80177048; } // 80177038
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017703C
  W32(c->r[31]+0x00000018u,c->r[0]); // 80177040
  W32(c->r[4]+0x00000000u,c->r[29]); // 80177044
L_80177048:;
  cmps(c,0,(int32_t)c->r[4],0); // 80177048
  if (crb(c,2)) { goto L_80177064; } // 8017704C
  W32(c->r[4]+0x0000000Cu,c->r[30]); // 80177050
  W32(c->r[4]+0x00000008u,c->r[30]); // 80177054
  c->r[3]=R32(c->r[31]+0x00000008u); // 80177058
  c->lr=0x80177060u; f_80175F10(c); // 8017705C
  IRQCHK(c); goto L_80177030; // 80177060
L_80177064:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177064
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80177068
  c->r[30]=R32(c->r[1]+0x00000018u); // 8017706C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80177070
  c->lr=c->r[0]; // 80177074
  c->r[1]=c->r[1]+0x00000020u; // 80177078
  return; // 8017707C
}

// Execute__14CriAuStmBufferFv
void f_80177080(Ctx* __restrict c) {
  trace_call(0x80177080u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177080
  c->r[0]=c->lr; // 80177084
  c->r[4]=0u+0x00000001u; // 80177088
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017708C
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[31]);} // 80177090
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,31,ea,0,0);} // 80177094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177098
  c->r[31]=c->r[3]|c->r[3]; // 8017709C
  c->r[3]=R32(c->r[3]+0x00000008u); // 801770A0
  c->lr=0x801770A8u; f_801763DC(c); // 801770A4
  c->f[31]=c->f[1]; // 801770A8
  c->r[4]=R32(c->r[31]+0x00000018u); // 801770AC
  c->r[10]=0u+0x00000000u; // 801770B0
  c->r[9]=0u+0x00000000u; // 801770B4
  goto L_801770D0; // 801770B8
L_801770BC:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 801770BC
  c->r[4]=R32(c->r[4]+0x00000000u); // 801770C0
  c->r[0]=sraw(c,c->r[3],31); // 801770C4
  c->r[10]=addc(c,c->r[10],c->r[3],0); // 801770C8
  c->r[9]=addc(c,c->r[9],c->r[0],c->xer_ca); // 801770CC
L_801770D0:;
  cmps(c,0,(int32_t)c->r[4],0); // 801770D0
  if (!crb(c,2)) { IRQCHK(c); goto L_801770BC; } // 801770D4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801770D8
  c->r[8]=0u+0x00000000u; // 801770DC
  c->r[7]=0u+0x00000000u; // 801770E0
  goto L_801770FC; // 801770E4
L_801770E8:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 801770E8
  c->r[4]=R32(c->r[4]+0x00000000u); // 801770EC
  c->r[0]=sraw(c,c->r[3],31); // 801770F0
  c->r[8]=addc(c,c->r[8],c->r[3],0); // 801770F4
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 801770F8
L_801770FC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801770FC
  if (!crb(c,2)) { IRQCHK(c); goto L_801770E8; } // 80177100
  c->r[4]=R32(c->r[31]+0x00000010u); // 80177104
  c->r[5]=0u+0x00000000u; // 80177108
  c->r[6]=0u+0x00000000u; // 8017710C
  goto L_80177128; // 80177110
L_80177114:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 80177114
  c->r[4]=R32(c->r[4]+0x00000000u); // 80177118
  c->r[0]=sraw(c,c->r[3],31); // 8017711C
  c->r[5]=addc(c,c->r[5],c->r[3],0); // 80177120
  c->r[6]=addc(c,c->r[6],c->r[0],c->xer_ca); // 80177124
L_80177128:;
  cmps(c,0,(int32_t)c->r[4],0); // 80177128
  if (!crb(c,2)) { IRQCHK(c); goto L_80177114; } // 8017712C
  c->r[3]=addc(c,c->r[10],c->r[8],0); // 80177130
  c->r[0]=addc(c,c->r[9],c->r[7],c->xer_ca); // 80177134
  c->r[5]=addc(c,c->r[3],c->r[5],0); // 80177138
  c->r[3]=addc(c,c->r[0],c->r[6],c->xer_ca); // 8017713C
  c->r[0]=c->r[5]|c->r[3]; cr0(c,c->r[0]); // 80177140
  if (!crb(c,2)) { goto L_80177154; } // 80177144
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177148
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 8017714C
  goto L_8017718C; // 80177150
L_80177154:;
  {uint32_t ea=c->r[2]+0xFFFFB4C8u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177154
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177158
  fcmp(c,0,c->f[1],c->f[0]); // 8017715C
  if (crb(c,2)) { goto L_80177184; } // 80177160
  c->r[3]=rotl(c->r[3],3)&0xFFFFFFF8u; // 80177164
  c->r[4]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80177168
  c->r[3]=(rotl(c->r[5],3)&0x00000007u)|(c->r[3]&~0x00000007u); // 8017716C
  c->lr=0x80177174u; f_800ADF9C(c); // 80177170
  {uint32_t ea=c->r[31]+0x0000001Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177174
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80177178
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 8017717C
  goto L_8017718C; // 80177180
L_80177184:;
  {uint32_t ea=c->r[2]+0xFFFFB4CCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80177184
  {uint32_t ea=c->r[31]+0x00000020u; WF32(ea,c->f[0]);} // 80177188
L_8017718C:;
  c->r[0]=R32(c->r[31]+0x0000004Cu); // 8017718C
  {uint32_t ea=c->r[31]+0x00000020u; c->f[0]=c->ps1[0]=RF32(ea);} // 80177190
  cmps(c,0,(int32_t)c->r[0],1); // 80177194
  {uint32_t ea=c->r[31]+0x00000050u; c->f[1]=c->ps1[1]=RF32(ea);} // 80177198
  if (!crb(c,2)) { goto L_8017722C; } // 8017719C
  fcmp(c,0,c->f[0],c->f[1]); // 801771A0
  if (crb(c,1)) { goto L_80177220; } // 801771A4
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 801771A8
  c->r[8]=0u+0x00000000u; // 801771AC
  c->r[7]=0u+0x00000000u; // 801771B0
  goto L_801771CC; // 801771B4
L_801771B8:;
  c->r[3]=R32(c->r[4]+0x00000014u); // 801771B8
  c->r[4]=R32(c->r[4]+0x00000000u); // 801771BC
  c->r[0]=sraw(c,c->r[3],31); // 801771C0
  c->r[8]=addc(c,c->r[8],c->r[3],0); // 801771C4
  c->r[7]=addc(c,c->r[7],c->r[0],c->xer_ca); // 801771C8
L_801771CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 801771CC
  if (!crb(c,2)) { IRQCHK(c); goto L_801771B8; } // 801771D0
  c->r[4]=R32(c->r[31]+0x0000003Cu); // 801771D4
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801771D8
  c->r[5]=R32(c->r[31]+0x00000038u); // 801771DC
  c->r[4]=addc(c,~c->r[0],c->r[4],1); // 801771E0
  c->r[3]=R32(c->r[31]+0x00000028u); // 801771E4
  c->r[0]=R32(c->r[31]+0x00000030u); // 801771E8
  c->r[6]=addc(c,~c->r[3],c->r[5],c->xer_ca); // 801771EC
  c->r[3]=R32(c->r[31]+0x00000034u); // 801771F0
  c->r[5]=addc(c,c->r[4],c->r[8],0); // 801771F4
  c->r[4]=c->r[0]^0x80000000u; // 801771F8
  c->r[0]=addc(c,c->r[6],c->r[7],c->xer_ca); // 801771FC
  c->r[0]=c->r[0]^0x80000000u; // 80177200
  c->r[3]=addc(c,~c->r[3],c->r[5],1); // 80177204
  c->r[4]=addc(c,~c->r[4],c->r[0],c->xer_ca); // 80177208
  c->r[4]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8017720C
  c->r[4]=0u-c->r[4]; // 80177210
  c->r[4]=addc(c,~c->r[4],0x00000001u,1); // 80177214
  cmps(c,0,(int32_t)c->r[4],1); // 80177218
  if (!crb(c,2)) { goto L_8017723C; } // 8017721C
L_80177220:;
  c->r[0]=0u+0x00000000u; // 80177220
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 80177224
  goto L_8017723C; // 80177228
L_8017722C:;
  fcmp(c,0,c->f[0],c->f[31]); // 8017722C
  if (!crb(c,0)) { goto L_8017723C; } // 80177230
  c->r[0]=0u+0x00000001u; // 80177234
  W32(c->r[31]+0x0000004Cu,c->r[0]); // 80177238
L_8017723C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017723C
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,31,ea,0,0);} // 80177240
  {uint32_t ea=c->r[1]+0x00000010u; c->f[31]=RF64(ea);} // 80177244
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177248
  c->lr=c->r[0]; // 8017724C
  c->r[1]=c->r[1]+0x00000020u; // 80177250
  return; // 80177254
}

// Create__16CriAuStmIoForFmpFRCQ210CriAuStmIo6ConfigPv
void f_80177258(Ctx* __restrict c) {
  trace_call(0x80177258u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177258
  c->r[0]=c->lr; // 8017725C
  c->r[6]=0u+0x802D0000u; // 80177260
  c->r[4]=R32(c->r[3]+0x00000000u); // 80177264
  W32(c->r[1]+0x00000044u,c->r[0]); // 80177268
  c->r[6]=c->r[6]+0x000009B8u; // 8017726C
  c->r[5]=0u+0x00000002u; // 80177270
  c->r[7]=0u+0x00000004u; // 80177274
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80177278
  c->r[31]=c->r[1]|c->r[1]; // 8017727C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80177280
  W32(c->r[1]+0x00000034u,c->r[29]); // 80177284
  c->r[29]=c->r[3]|c->r[3]; // 80177288
  c->r[3]=0u+0x00000038u; // 8017728C
  c->lr=0x80177294u; f_8017BF5C(c); // 80177290
  cmps(c,0,(int32_t)c->r[3],0); // 80177294
  c->r[30]=c->r[3]|c->r[3]; // 80177298
  if (crb(c,2)) { goto L_801772E8; } // 8017729C
  c->r[5]=0u+0x80330000u; // 801772A0
  c->r[4]=R32(c->r[29]+0x00000000u); // 801772A4
  c->r[5]=c->r[5]+0x00007430u; // 801772A8
  W32(c->r[3]+0x00000000u,c->r[5]); // 801772AC
  c->r[0]=0u+0x00000000u; // 801772B0
  W32(c->r[3]+0x00000004u,c->r[4]); // 801772B4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801772B8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801772BC
  W32(c->r[3]+0x00000010u,c->r[0]); // 801772C0
  W32(c->r[3]+0x00000014u,c->r[0]); // 801772C4
  W32(c->r[3]+0x00000018u,c->r[0]); // 801772C8
  W32(c->r[3]+0x00000024u,c->r[0]); // 801772CC
  W32(c->r[3]+0x00000020u,c->r[0]); // 801772D0
  W32(c->r[3]+0x00000028u,c->r[0]); // 801772D4
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 801772D8
  W32(c->r[3]+0x00000030u,c->r[0]); // 801772DC
  W32(c->r[31]+0x00000024u,c->r[1]); // 801772E0
  W32(c->r[3]+0x00000034u,c->r[0]); // 801772E4
L_801772E8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801772E8
  if (!crb(c,2)) { goto L_80177310; } // 801772EC
  c->r[4]=0u+0x802D0000u; // 801772F0
  c->r[3]=0u+0x00000000u; // 801772F4
  c->r[4]=c->r[4]+0x000009B8u; // 801772F8
  c->r[5]=0u+0xFFFFFFFDu; // 801772FC
  c->r[4]=c->r[4]+0x00000011u; // 80177300
  c->lr=0x80177308u; f_8017968C(c); // 80177304
  c->r[3]=0u+0x00000000u; // 80177308
  goto L_80177464; // 8017730C
L_80177310:;
  c->r[3]=R32(c->r[3]+0x00000004u); // 80177310
  c->r[5]=c->r[31]+0x00000008u; // 80177314
  c->r[4]=0u+0x00000002u; // 80177318
  c->lr=0x80177320u; f_8017F1AC(c); // 8017731C
  cmps(c,0,(int32_t)c->r[3],0); // 80177320
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 80177324
  if (crb(c,2)) { goto L_80177338; } // 80177328
  c->r[0]=R32(c->r[31]+0x00000008u); // 8017732C
  cmps(c,0,(int32_t)c->r[0],0); // 80177330
  if (crb(c,2)) { goto L_80177394; } // 80177334
L_80177338:;
  c->r[4]=0u+0x802D0000u; // 80177338
  c->r[3]=0u+0x00000000u; // 8017733C
  c->r[4]=c->r[4]+0x000009B8u; // 80177340
  c->r[4]=c->r[4]+0x0000001Cu; // 80177344
  c->lr=0x8017734Cu; f_80179434(c); // 80177348
  c->r[3]=R32(c->r[30]+0x00000010u); // 8017734C
  cmps(c,0,(int32_t)c->r[3],0); // 80177350
  if (crb(c,2)) { goto L_80177364; } // 80177354
  c->lr=0x8017735Cu; f_801811CC(c); // 80177358
  c->r[0]=0u+0x00000000u; // 8017735C
  W32(c->r[30]+0x00000010u,c->r[0]); // 80177360
L_80177364:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 80177364
  cmps(c,0,(int32_t)c->r[3],0); // 80177368
  if (crb(c,2)) { goto L_8017738C; } // 8017736C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177370
  c->r[4]=c->r[13]+0xFFFFA278u; // 80177374
  c->r[12]=R32(c->r[12]+0x00000008u); // 80177378
  c->ctr=c->r[12]; // 8017737C
  if (true) { c->lr=0x80177384u; dispatch(c,c->ctr); } // 80177380
  c->r[0]=0u+0x00000000u; // 80177384
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80177388
L_8017738C:;
  c->r[0]=0u+0x00000000u; // 8017738C
  goto L_8017742C; // 80177390
L_80177394:;
  c->r[3]=c->r[30]+0x00000010u; // 80177394
  c->lr=0x8017739Cu; f_80180F6C(c); // 80177398
  cmps(c,0,(int32_t)c->r[3],0); // 8017739C
  if (!crb(c,2)) { goto L_801773B0; } // 801773A0
  c->r[3]=R32(c->r[30]+0x00000010u); // 801773A4
  cmps(c,0,(int32_t)c->r[3],0); // 801773A8
  if (!crb(c,2)) { goto L_8017740C; } // 801773AC
L_801773B0:;
  c->r[4]=0u+0x802D0000u; // 801773B0
  c->r[3]=0u+0x00000000u; // 801773B4
  c->r[4]=c->r[4]+0x000009B8u; // 801773B8
  c->r[4]=c->r[4]+0x0000004Fu; // 801773BC
  c->lr=0x801773C4u; f_80179434(c); // 801773C0
  c->r[3]=R32(c->r[30]+0x00000010u); // 801773C4
  cmps(c,0,(int32_t)c->r[3],0); // 801773C8
  if (crb(c,2)) { goto L_801773DC; } // 801773CC
  c->lr=0x801773D4u; f_801811CC(c); // 801773D0
  c->r[0]=0u+0x00000000u; // 801773D4
  W32(c->r[30]+0x00000010u,c->r[0]); // 801773D8
L_801773DC:;
  c->r[3]=R32(c->r[30]+0x0000000Cu); // 801773DC
  cmps(c,0,(int32_t)c->r[3],0); // 801773E0
  if (crb(c,2)) { goto L_80177404; } // 801773E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801773E8
  c->r[4]=c->r[13]+0xFFFFA278u; // 801773EC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801773F0
  c->ctr=c->r[12]; // 801773F4
  if (true) { c->lr=0x801773FCu; dispatch(c,c->ctr); } // 801773F8
  c->r[0]=0u+0x00000000u; // 801773FC
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 80177400
L_80177404:;
  c->r[0]=0u+0x00000000u; // 80177404
  goto L_8017742C; // 80177408
L_8017740C:;
  c->r[4]=0u+0x00000001u; // 8017740C
  c->lr=0x80177414u; f_801822F8(c); // 80177410
  c->r[4]=0u+0x80170000u; // 80177414
  c->r[3]=R32(c->r[30]+0x00000010u); // 80177418
  c->r[5]=c->r[30]|c->r[30]; // 8017741C
  c->r[4]=c->r[4]+0x00007860u; // 80177420
  c->lr=0x80177428u; f_801813C4(c); // 80177424
  c->r[0]=0u+0x00000001u; // 80177428
L_8017742C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8017742C
  if (!crb(c,2)) { goto L_80177460; } // 80177430
  cmps(c,0,(int32_t)c->r[30],0); // 80177434
  if (crb(c,2)) { goto L_80177458; } // 80177438
  c->r[12]=R32(c->r[30]+0x00000000u); // 8017743C
  c->r[0]=0u+0x00000001u; // 80177440
  c->r[3]=c->r[30]|c->r[30]; // 80177444
  c->r[12]=R32(c->r[12]+0x00000024u); // 80177448
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8017744C
  c->ctr=c->r[12]; // 80177450
  if (true) { c->lr=0x80177458u; dispatch(c,c->ctr); } // 80177454
L_80177458:;
  c->r[3]=0u+0x00000000u; // 80177458
  goto L_80177464; // 8017745C
L_80177460:;
  c->r[3]=c->r[30]|c->r[30]; // 80177460
L_80177464:;
  c->r[10]=c->r[31]|c->r[31]; // 80177464
  c->r[31]=R32(c->r[31]+0x0000003Cu); // 80177468
  c->r[30]=R32(c->r[10]+0x00000038u); // 8017746C
  c->r[29]=R32(c->r[10]+0x00000034u); // 80177470
  c->r[10]=R32(c->r[1]+0x00000000u); // 80177474
  c->r[0]=R32(c->r[10]+0x00000004u); // 80177478
  c->r[1]=c->r[10]|c->r[10]; // 8017747C
  c->lr=c->r[0]; // 80177480
  return; // 80177484
}

// Destroy__16CriAuStmIoForFmpFv
void f_80177488(Ctx* __restrict c) {
  trace_call(0x80177488u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177488
  c->r[0]=c->lr; // 8017748C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177490
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177494
  c->r[31]=c->r[3]|c->r[3]; // 80177498
  c->r[0]=R32(c->r[3]+0x00000010u); // 8017749C
  cmps(c,0,(int32_t)c->r[0],0); // 801774A0
  if (crb(c,2)) { goto L_801774B8; } // 801774A4
  c->r[3]=c->r[0]|c->r[0]; // 801774A8
  c->lr=0x801774B0u; f_801811CC(c); // 801774AC
  c->r[0]=0u+0x00000000u; // 801774B0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801774B4
L_801774B8:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 801774B8
  cmps(c,0,(int32_t)c->r[3],0); // 801774BC
  if (crb(c,2)) { goto L_801774E0; } // 801774C0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801774C4
  c->r[4]=c->r[13]+0xFFFFA278u; // 801774C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801774CC
  c->ctr=c->r[12]; // 801774D0
  if (true) { c->lr=0x801774D8u; dispatch(c,c->ctr); } // 801774D4
  c->r[0]=0u+0x00000000u; // 801774D8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 801774DC
L_801774E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801774E0
  if (crb(c,2)) { goto L_80177500; } // 801774E4
  c->r[12]=R32(c->r[31]+0x00000000u); // 801774E8
  c->r[3]=c->r[31]|c->r[31]; // 801774EC
  c->r[4]=0u+0x00000001u; // 801774F0
  c->r[12]=R32(c->r[12]+0x00000024u); // 801774F4
  c->ctr=c->r[12]; // 801774F8
  if (true) { c->lr=0x80177500u; dispatch(c,c->ctr); } // 801774FC
L_80177500:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177500
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177504
  c->lr=c->r[0]; // 80177508
  c->r[1]=c->r[1]+0x00000010u; // 8017750C
  return; // 80177510
}

// __dt__16CriAuStmIoForFmpFv
void f_80177514(Ctx* __restrict c) {
  trace_call(0x80177514u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177514
  c->r[0]=c->lr; // 80177518
  cmps(c,0,(int32_t)c->r[3],0); // 8017751C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177520
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177524
  c->r[31]=c->r[3]|c->r[3]; // 80177528
  if (crb(c,2)) { goto L_80177540; } // 8017752C
  cmps(c,0,(int32_t)c->r[4],0); // 80177530
  if (!crb(c,1)) { goto L_80177540; } // 80177534
  c->r[4]=0u+0x00000038u; // 80177538
  c->lr=0x80177540u; f_8017BFE8(c); // 8017753C
L_80177540:;
  c->r[3]=c->r[31]|c->r[31]; // 80177540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177544
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177548
  c->lr=c->r[0]; // 8017754C
  c->r[1]=c->r[1]+0x00000010u; // 80177550
  return; // 80177554
}

// Open__16CriAuStmIoForFmpFPvPCc
void f_80177558(Ctx* __restrict c) {
  trace_call(0x80177558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177558
  c->r[0]=c->lr; // 8017755C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177560
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177564
  c->r[31]=c->r[3]|c->r[3]; // 80177568
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017756C
  cmps(c,0,(int32_t)c->r[0],0); // 80177570
  if (crb(c,2)) { goto L_80177598; } // 80177574
  c->r[4]=0u+0x802D0000u; // 80177578
  c->r[3]=0u+0x00000000u; // 8017757C
  c->r[4]=c->r[4]+0x000009B8u; // 80177580
  c->r[4]=c->r[4]+0x00000078u; // 80177584
  c->lr=0x8017758Cu; f_80179434(c); // 80177588
  c->r[0]=0u+0x00000005u; // 8017758C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177590
  goto L_801775A8; // 80177594
L_80177598:;
  c->r[0]=0u+0x00000002u; // 80177598
  W32(c->r[3]+0x00000018u,c->r[5]); // 8017759C
  W32(c->r[3]+0x00000014u,c->r[4]); // 801775A0
  W32(c->r[3]+0x00000008u,c->r[0]); // 801775A4
L_801775A8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801775A8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801775AC
  c->lr=c->r[0]; // 801775B0
  c->r[1]=c->r[1]+0x00000010u; // 801775B4
  return; // 801775B8
}

// Close__16CriAuStmIoForFmpFv
void f_801775BC(Ctx* __restrict c) {
  trace_call(0x801775BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801775BC
  c->r[0]=c->lr; // 801775C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801775C4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801775C8
  c->r[31]=c->r[3]|c->r[3]; // 801775CC
  c->r[4]=R32(c->r[3]+0x00000008u); // 801775D0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801775D4
  cmpu(c,0,c->r[0],0x00000002u); // 801775D8
  if (!crb(c,1)) { goto L_801775EC; } // 801775DC
  cmps(c,0,(int32_t)c->r[4],5); // 801775E0
  if (crb(c,2)) { goto L_80177638; } // 801775E4
  goto L_8017764C; // 801775E8
L_801775EC:;
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801775EC
  c->r[4]=c->r[13]+0xFFFFA278u; // 801775F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801775F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801775F8
  c->ctr=c->r[12]; // 801775FC
  if (true) { c->lr=0x80177604u; dispatch(c,c->ctr); } // 80177600
  c->r[3]=R32(c->r[31]+0x00000010u); // 80177604
  c->lr=0x8017760Cu; f_801820E0(c); // 80177608
  c->r[3]=0u+0x00000001u; // 8017760C
  c->r[0]=0u+0x00000004u; // 80177610
  W32(c->r[31]+0x00000034u,c->r[3]); // 80177614
  c->r[4]=c->r[13]+0xFFFFA278u; // 80177618
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 8017761C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177620
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177624
  c->r[12]=R32(c->r[12]+0x00000010u); // 80177628
  c->ctr=c->r[12]; // 8017762C
  if (true) { c->lr=0x80177634u; dispatch(c,c->ctr); } // 80177630
  goto L_8017764C; // 80177634
L_80177638:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 80177638
  c->lr=0x80177640u; f_801820E0(c); // 8017763C
  c->r[0]=0u+0x00000000u; // 80177640
  W32(c->r[31]+0x00000034u,c->r[0]); // 80177644
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177648
L_8017764C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8017764C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177650
  c->lr=c->r[0]; // 80177654
  c->r[1]=c->r[1]+0x00000010u; // 80177658
  return; // 8017765C
}

// ReadScatter__16CriAuStmIoForFmpFPQ210CriAuStmIo13BufferSegmentl
void f_80177660(Ctx* __restrict c) {
  trace_call(0x80177660u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177660
  c->r[0]=c->lr; // 80177664
  W32(c->r[1]+0x00000024u,c->r[0]); // 80177668
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8017766C
  c->r[31]=c->r[3]|c->r[3]; // 80177670
  c->r[0]=R32(c->r[3]+0x00000008u); // 80177674
  cmps(c,0,(int32_t)c->r[0],2); // 80177678
  if (crb(c,2)) { goto L_801776A0; } // 8017767C
  c->r[4]=0u+0x802D0000u; // 80177680
  c->r[3]=0u+0x00000000u; // 80177684
  c->r[4]=c->r[4]+0x000009B8u; // 80177688
  c->r[4]=c->r[4]+0x0000009Bu; // 8017768C
  c->lr=0x80177694u; f_80179434(c); // 80177690
  c->r[0]=0u+0x00000005u; // 80177694
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177698
  goto L_80177788; // 8017769C
L_801776A0:;
  W32(c->r[3]+0x00000028u,c->r[4]); // 801776A0
  c->r[0]=0u+0x00000000u; // 801776A4
  c->r[4]=c->r[13]+0xFFFFA278u; // 801776A8
  W32(c->r[3]+0x0000002Cu,c->r[5]); // 801776AC
  W32(c->r[3]+0x00000030u,c->r[0]); // 801776B0
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801776B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801776B8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801776BC
  c->ctr=c->r[12]; // 801776C0
  if (true) { c->lr=0x801776C8u; dispatch(c,c->ctr); } // 801776C4
  c->r[0]=R32(c->r[31]+0x00000030u); // 801776C8
  c->r[4]=R32(c->r[31]+0x00000028u); // 801776CC
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 801776D0
  c->r[3]=c->r[4]+c->r[0]; // 801776D4
  c->r[0]=R32(c->r[4]+c->r[0]); // 801776D8
  c->r[9]=R32(c->r[3]+0x00000008u); // 801776DC
  c->r[10]=R32(c->r[3]+0x0000000Cu); // 801776E0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801776E4
  W32(c->r[1]+0x00000014u,c->r[10]); // 801776E8
  W32(c->r[1]+0x00000010u,c->r[9]); // 801776EC
  c->r[3]=R32(c->r[31]+0x00000010u); // 801776F0
  c->r[4]=R32(c->r[31]+0x00000014u); // 801776F4
  c->r[5]=R32(c->r[31]+0x00000018u); // 801776F8
  c->r[7]=R32(c->r[31]+0x00000020u); // 801776FC
  c->r[8]=R32(c->r[31]+0x00000024u); // 80177700
  c->lr=0x80177708u; f_80181414(c); // 80177704
  cmps(c,0,(int32_t)c->r[3],0); // 80177708
  if (crb(c,2)) { goto L_80177718; } // 8017770C
  c->r[8]=0u+0x00000000u; // 80177710
  goto L_80177754; // 80177714
L_80177718:;
  c->r[5]=R32(c->r[31]+0x00000030u); // 80177718
  c->r[8]=0u+0x00000001u; // 8017771C
  c->r[3]=R32(c->r[31]+0x00000028u); // 80177720
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80177724
  c->r[7]=R32(c->r[31]+0x00000024u); // 80177728
  c->r[3]=c->r[3]+c->r[0]; // 8017772C
  c->r[6]=R32(c->r[31]+0x00000020u); // 80177730
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80177734
  c->r[0]=c->r[5]+0x00000001u; // 80177738
  c->r[3]=R32(c->r[3]+0x00000008u); // 8017773C
  c->r[4]=addc(c,c->r[7],c->r[4],0); // 80177740
  c->r[3]=addc(c,c->r[6],c->r[3],c->xer_ca); // 80177744
  W32(c->r[31]+0x00000024u,c->r[4]); // 80177748
  W32(c->r[31]+0x00000020u,c->r[3]); // 8017774C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80177750
L_80177754:;
  cmps(c,0,(int32_t)c->r[8],0); // 80177754
  if (!crb(c,2)) { goto L_80177768; } // 80177758
  c->r[0]=0u+0x00000005u; // 8017775C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177760
  goto L_80177770; // 80177764
L_80177768:;
  c->r[0]=0u+0x00000003u; // 80177768
  W32(c->r[31]+0x00000008u,c->r[0]); // 8017776C
L_80177770:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80177770
  c->r[4]=c->r[13]+0xFFFFA278u; // 80177774
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177778
  c->r[12]=R32(c->r[12]+0x00000010u); // 8017777C
  c->ctr=c->r[12]; // 80177780
  if (true) { c->lr=0x80177788u; dispatch(c,c->ctr); } // 80177784
L_80177788:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177788
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8017778C
  c->lr=c->r[0]; // 80177790
  c->r[1]=c->r[1]+0x00000020u; // 80177794
  return; // 80177798
}

// Seek__16CriAuStmIoForFmpFx
void f_8017779C(Ctx* __restrict c) {
  trace_call(0x8017779Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017779C
  c->r[0]=c->lr; // 801777A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801777A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801777A8
  c->r[31]=c->r[3]|c->r[3]; // 801777AC
  c->r[0]=R32(c->r[3]+0x00000008u); // 801777B0
  cmps(c,0,(int32_t)c->r[0],2); // 801777B4
  if (crb(c,2)) { goto L_801777DC; } // 801777B8
  c->r[4]=0u+0x802D0000u; // 801777BC
  c->r[3]=0u+0x00000000u; // 801777C0
  c->r[4]=c->r[4]+0x000009B8u; // 801777C4
  c->r[4]=c->r[4]+0x000000B8u; // 801777C8
  c->lr=0x801777D0u; f_80179434(c); // 801777CC
  c->r[0]=0u+0x00000005u; // 801777D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801777D4
  goto L_801777E4; // 801777D8
L_801777DC:;
  W32(c->r[3]+0x00000024u,c->r[6]); // 801777DC
  W32(c->r[3]+0x00000020u,c->r[5]); // 801777E0
L_801777E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801777E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801777E8
  c->lr=c->r[0]; // 801777EC
  c->r[1]=c->r[1]+0x00000010u; // 801777F0
  return; // 801777F4
}

// Execute__16CriAuStmIoForFmpFv
void f_801777F8(Ctx* __restrict c) {
  trace_call(0x801777F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801777F8
  c->r[0]=c->lr; // 801777FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80177800
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80177804
  c->r[31]=c->r[3]|c->r[3]; // 80177808
  c->r[0]=R32(c->r[3]+0x00000008u); // 8017780C
  cmps(c,0,(int32_t)c->r[0],4); // 80177810
  if (!crb(c,2)) { goto L_80177844; } // 80177814
  c->r[0]=R32(c->r[3]+0x00000034u); // 80177818
  cmps(c,0,(int32_t)c->r[0],1); // 8017781C
  if (!crb(c,2)) { goto L_80177844; } // 80177820
  c->r[3]=R32(c->r[3]+0x00000010u); // 80177824
  c->r[4]=c->r[1]+0x00000008u; // 80177828
  c->lr=0x80177830u; f_801821D8(c); // 8017782C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80177830
  cmps(c,0,(int32_t)c->r[0],0); // 80177834
  if (!crb(c,2)) { goto L_80177844; } // 80177838
  c->r[0]=0u+0x00000000u; // 8017783C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177840
L_80177844:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177844
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80177848
  c->lr=c->r[0]; // 8017784C
  c->r[1]=c->r[1]+0x00000020u; // 80177850
  return; // 80177854
}

// GetStatus__16CriAuStmIoForFmpCFv
void f_80177858(Ctx* __restrict c) {
  trace_call(0x80177858u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80177858
  return; // 8017785C
}

// LoadEndCallbackFunc__16CriAuStmIoForFmpFPvP15_CriFsLoaderObj
void f_80177860(Ctx* __restrict c) {
  trace_call(0x80177860u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177860
  c->r[0]=c->lr; // 80177864
  c->r[4]=c->r[13]+0xFFFFA278u; // 80177868
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017786C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80177870
  c->r[31]=c->r[3]|c->r[3]; // 80177874
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80177878
  c->r[12]=R32(c->r[3]+0x00000000u); // 8017787C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80177880
  c->ctr=c->r[12]; // 80177884
  if (true) { c->lr=0x8017788Cu; dispatch(c,c->ctr); } // 80177888
  c->r[0]=R32(c->r[31]+0x00000008u); // 8017788C
  cmps(c,0,(int32_t)c->r[0],3); // 80177890
  if (!crb(c,2)) { goto L_80177988; } // 80177894
  c->r[3]=R32(c->r[31]+0x00000010u); // 80177898
  c->r[4]=c->r[1]+0x00000018u; // 8017789C
  c->lr=0x801778A4u; f_801821D8(c); // 801778A0
  c->r[0]=R32(c->r[1]+0x00000018u); // 801778A4
  cmps(c,0,(int32_t)c->r[0],2); // 801778A8
  if (!crb(c,2)) { goto L_80177978; } // 801778AC
  c->r[5]=R32(c->r[31]+0x00000030u); // 801778B0
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 801778B4
  c->r[4]=sraw(c,c->r[5],31); // 801778B8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 801778BC
  c->r[0]=addc(c,~c->r[0],c->r[5],1); // 801778C0
  c->r[0]=addc(c,c->r[4],c->r[3],c->xer_ca); // 801778C4
  cmps(c,0,(int32_t)c->r[0],1); // 801778C8
  if (!crb(c,2)) { goto L_801778DC; } // 801778CC
  c->r[0]=0u+0x00000002u; // 801778D0
  W32(c->r[31]+0x00000008u,c->r[0]); // 801778D4
  goto L_80177988; // 801778D8
L_801778DC:;
  c->r[4]=R32(c->r[31]+0x00000028u); // 801778DC
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 801778E0
  c->r[3]=c->r[4]+c->r[0]; // 801778E4
  c->r[0]=R32(c->r[4]+c->r[0]); // 801778E8
  c->r[9]=R32(c->r[3]+0x00000008u); // 801778EC
  c->r[10]=R32(c->r[3]+0x0000000Cu); // 801778F0
  W32(c->r[1]+0x00000008u,c->r[0]); // 801778F4
  W32(c->r[1]+0x00000014u,c->r[10]); // 801778F8
  W32(c->r[1]+0x00000010u,c->r[9]); // 801778FC
  c->r[3]=R32(c->r[31]+0x00000010u); // 80177900
  c->r[4]=R32(c->r[31]+0x00000014u); // 80177904
  c->r[5]=R32(c->r[31]+0x00000018u); // 80177908
  c->r[7]=R32(c->r[31]+0x00000020u); // 8017790C
  c->r[8]=R32(c->r[31]+0x00000024u); // 80177910
  c->lr=0x80177918u; f_80181414(c); // 80177914
  cmps(c,0,(int32_t)c->r[3],0); // 80177918
  if (crb(c,2)) { goto L_80177928; } // 8017791C
  c->r[8]=0u+0x00000000u; // 80177920
  goto L_80177964; // 80177924
L_80177928:;
  c->r[5]=R32(c->r[31]+0x00000030u); // 80177928
  c->r[8]=0u+0x00000001u; // 8017792C
  c->r[3]=R32(c->r[31]+0x00000028u); // 80177930
  c->r[0]=rotl(c->r[5],4)&0xFFFFFFF0u; // 80177934
  c->r[7]=R32(c->r[31]+0x00000024u); // 80177938
  c->r[3]=c->r[3]+c->r[0]; // 8017793C
  c->r[6]=R32(c->r[31]+0x00000020u); // 80177940
  c->r[4]=R32(c->r[3]+0x0000000Cu); // 80177944
  c->r[0]=c->r[5]+0x00000001u; // 80177948
  c->r[3]=R32(c->r[3]+0x00000008u); // 8017794C
  c->r[4]=addc(c,c->r[7],c->r[4],0); // 80177950
  c->r[3]=addc(c,c->r[6],c->r[3],c->xer_ca); // 80177954
  W32(c->r[31]+0x00000024u,c->r[4]); // 80177958
  W32(c->r[31]+0x00000020u,c->r[3]); // 8017795C
  W32(c->r[31]+0x00000030u,c->r[0]); // 80177960
L_80177964:;
  cmps(c,0,(int32_t)c->r[8],0); // 80177964
  if (!crb(c,2)) { goto L_80177988; } // 80177968
  c->r[0]=0u+0x00000005u; // 8017796C
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177970
  goto L_80177988; // 80177974
L_80177978:;
  cmps(c,0,(int32_t)c->r[0],3); // 80177978
  if (!crb(c,2)) { goto L_80177988; } // 8017797C
  c->r[0]=0u+0x00000005u; // 80177980
  W32(c->r[31]+0x00000008u,c->r[0]); // 80177984
L_80177988:;
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80177988
  c->r[4]=c->r[13]+0xFFFFA278u; // 8017798C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177990
  c->r[12]=R32(c->r[12]+0x00000010u); // 80177994
  c->ctr=c->r[12]; // 80177998
  if (true) { c->lr=0x801779A0u; dispatch(c,c->ctr); } // 8017799C
  c->r[0]=R32(c->r[1]+0x00000034u); // 801779A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801779A4
  c->lr=c->r[0]; // 801779A8
  c->r[1]=c->r[1]+0x00000030u; // 801779AC
  return; // 801779B0
}

// Initialize__13CriAuStreamerFP15_criheap_structll
void f_801779B4(Ctx* __restrict c) {
  trace_call(0x801779B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801779B4
  c->r[0]=c->lr; // 801779B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801779BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801779C0
  c->r[31]=c->r[5]|c->r[5]; // 801779C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801779C8
  c->r[30]=c->r[4]|c->r[4]; // 801779CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801779D0
  c->r[29]=c->r[3]|c->r[3]; // 801779D4
  c->r[6]=R32(c->r[13]+0xFFFFA1FCu); // 801779D8
  c->r[0]=c->r[6]+0x00000001u; // 801779DC
  W32(c->r[13]+0xFFFFA1FCu,c->r[0]); // 801779E0
  cmps(c,0,(int32_t)c->r[0],1); // 801779E4
  if (crb(c,2)) { goto L_801779F4; } // 801779E8
  c->r[3]=0u+0x00000001u; // 801779EC
  goto L_80177A68; // 801779F0
L_801779F4:;
  c->lr=0x801779F8u; f_8017C03C(c); // 801779F4
  c->r[3]=c->r[29]|c->r[29]; // 801779F8
  c->r[4]=c->r[30]|c->r[30]; // 801779FC
  c->r[5]=c->r[31]|c->r[31]; // 80177A00
  c->lr=0x80177A08u; f_80175A4C(c); // 80177A04
  cmps(c,0,(int32_t)c->r[3],0); // 80177A08
  W32(c->r[13]+0xFFFFA1F8u,c->r[3]); // 80177A0C
  if (!crb(c,2)) { goto L_80177A48; } // 80177A10
  c->r[4]=0u+0x802D0000u; // 80177A14
  c->r[3]=0u+0x00000000u; // 80177A18
  c->r[4]=c->r[4]+0x00000AA4u; // 80177A1C
  c->lr=0x80177A24u; f_80179434(c); // 80177A20
  c->r[3]=R32(c->r[13]+0xFFFFA1F8u); // 80177A24
  cmps(c,0,(int32_t)c->r[3],0); // 80177A28
  if (crb(c,2)) { goto L_80177A3C; } // 80177A2C
  c->lr=0x80177A34u; f_80175B68(c); // 80177A30
  c->r[0]=0u+0x00000000u; // 80177A34
  W32(c->r[13]+0xFFFFA1F8u,c->r[0]); // 80177A38
L_80177A3C:;
  c->lr=0x80177A40u; f_8017C0B4(c); // 80177A3C
  c->r[3]=0u+0x00000000u; // 80177A40
  goto L_80177A58; // 80177A44
L_80177A48:;
  c->r[4]=0u+0x80170000u; // 80177A48
  c->r[3]=0u+0x00000001u; // 80177A4C
  c->r[4]=c->r[4]+0x00007258u; // 80177A50
  W32(c->r[13]+0xFFFFA1F0u,c->r[4]); // 80177A54
L_80177A58:;
  cmps(c,0,(int32_t)c->r[3],0); // 80177A58
  if (!crb(c,2)) { goto L_80177A68; } // 80177A5C
  c->r[0]=0u+0x00000000u; // 80177A60
  W32(c->r[13]+0xFFFFA1FCu,c->r[0]); // 80177A64
L_80177A68:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177A68
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80177A6C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80177A70
  c->r[29]=R32(c->r[1]+0x00000014u); // 80177A74
  c->lr=c->r[0]; // 80177A78
  c->r[1]=c->r[1]+0x00000020u; // 80177A7C
  return; // 80177A80
}

// Finalize__13CriAuStreamerFv
void f_80177A84(Ctx* __restrict c) {
  trace_call(0x80177A84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177A84
  c->r[0]=c->lr; // 80177A88
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177A8C
  c->r[0]=R32(c->r[13]+0xFFFFA1FCu); // 80177A90
  c->r[0]=addc(c,c->r[0],0xFFFFFFFFu,0); cr0(c,c->r[0]); // 80177A94
  W32(c->r[13]+0xFFFFA1FCu,c->r[0]); // 80177A98
  if (!crb(c,2)) { goto L_80177ABC; } // 80177A9C
  c->r[3]=R32(c->r[13]+0xFFFFA1F8u); // 80177AA0
  cmps(c,0,(int32_t)c->r[3],0); // 80177AA4
  if (crb(c,2)) { goto L_80177AB8; } // 80177AA8
  c->lr=0x80177AB0u; f_80175B68(c); // 80177AAC
  c->r[0]=0u+0x00000000u; // 80177AB0
  W32(c->r[13]+0xFFFFA1F8u,c->r[0]); // 80177AB4
L_80177AB8:;
  c->lr=0x80177ABCu; f_8017C0B4(c); // 80177AB8
L_80177ABC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177ABC
  c->lr=c->r[0]; // 80177AC0
  c->r[1]=c->r[1]+0x00000010u; // 80177AC4
  return; // 80177AC8
}

// ExecuteServer__13CriAuStreamerFv
void f_80177ACC(Ctx* __restrict c) {
  trace_call(0x80177ACCu);
  c->r[3]=R32(c->r[13]+0xFFFFA1F8u); // 80177ACC
  cmps(c,0,(int32_t)c->r[3],0); // 80177AD0
  if (crb(c,2)) return; // 80177AD4
  f_801764BC(c); return; // 80177AD8
  return; // 80177ADC
}

// Create__13CriAuStreamerFP15_criheap_structP8CriSjObj
void f_80177AE0(Ctx* __restrict c) {
  trace_call(0x80177AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177AE0
  c->r[0]=c->lr; // 80177AE4
  W32(c->r[1]+0x00000034u,c->r[0]); // 80177AE8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80177AEC
  c->r[31]=c->r[1]|c->r[1]; // 80177AF0
  W32(c->r[1]+0x00000028u,c->r[30]); // 80177AF4
  W32(c->r[1]+0x00000024u,c->r[29]); // 80177AF8
  c->r[29]=c->r[4]|c->r[4]; // 80177AFC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80177B00
  c->r[28]=c->r[3]|c->r[3]; // 80177B04
  c->r[0]=R32(c->r[13]+0xFFFFA1F8u); // 80177B08
  cmps(c,0,(int32_t)c->r[0],0); // 80177B0C
  if (!crb(c,2)) { goto L_80177B30; } // 80177B10
  c->r[4]=0u+0x802D0000u; // 80177B14
  c->r[3]=0u+0x00000000u; // 80177B18
  c->r[4]=c->r[4]+0x00000AA4u; // 80177B1C
  c->r[4]=c->r[4]+0x00000031u; // 80177B20
  c->lr=0x80177B28u; f_80179434(c); // 80177B24
  c->r[3]=0u+0x00000000u; // 80177B28
  goto L_80177C38; // 80177B2C
L_80177B30:;
  cmps(c,0,(int32_t)c->r[4],0); // 80177B30
  if (!crb(c,2)) { goto L_80177B58; } // 80177B34
  c->r[4]=0u+0x802D0000u; // 80177B38
  c->r[3]=0u+0x00000000u; // 80177B3C
  c->r[4]=c->r[4]+0x00000AA4u; // 80177B40
  c->r[5]=0u+0xFFFFFFFEu; // 80177B44
  c->r[4]=c->r[4]+0x0000005Cu; // 80177B48
  c->lr=0x80177B50u; f_8017968C(c); // 80177B4C
  c->r[3]=0u+0x00000000u; // 80177B50
  goto L_80177C38; // 80177B54
L_80177B58:;
  c->r[5]=0u+0x802D0000u; // 80177B58
  c->r[4]=c->r[28]|c->r[28]; // 80177B5C
  c->r[5]=c->r[5]+0x00000AA4u; // 80177B60
  c->r[3]=0u+0x000003A8u; // 80177B64
  c->r[6]=c->r[5]+0x00000068u; // 80177B68
  c->r[7]=0u+0x00000004u; // 80177B6C
  c->r[5]=0u+0x00000002u; // 80177B70
  c->lr=0x80177B78u; f_8017BF5C(c); // 80177B74
  cmps(c,0,(int32_t)c->r[3],0); // 80177B78
  c->r[30]=c->r[3]|c->r[3]; // 80177B7C
  if (crb(c,2)) { goto L_80177BE0; } // 80177B80
  W32(c->r[3]+0x00000000u,c->r[28]); // 80177B84
  c->r[4]=0u+0x80330000u; // 80177B88
  c->r[4]=c->r[4]+0x00007470u; // 80177B8C
  c->r[5]=0u+0x00000000u; // 80177B90
  W32(c->r[3]+0x00000004u,c->r[29]); // 80177B94
  c->r[0]=0u+0x00000001u; // 80177B98
  W32(c->r[3]+0x00000008u,c->r[4]); // 80177B9C
  W32(c->r[3]+0x00000250u,c->r[5]); // 80177BA0
  W32(c->r[3]+0x00000254u,c->r[5]); // 80177BA4
  W32(c->r[3]+0x00000258u,c->r[5]); // 80177BA8
  W32(c->r[3]+0x00000260u,c->r[5]); // 80177BAC
  W32(c->r[3]+0x00000264u,c->r[5]); // 80177BB0
  W32(c->r[3]+0x00000268u,c->r[5]); // 80177BB4
  W32(c->r[3]+0x0000026Cu,c->r[5]); // 80177BB8
  W32(c->r[3]+0x00000390u,c->r[5]); // 80177BBC
  W32(c->r[3]+0x00000394u,c->r[5]); // 80177BC0
  c->r[4]=R32(c->r[13]+0xFFFFA1F8u); // 80177BC4
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80177BC8
  c->r[4]=R32(c->r[4]+0x00000008u); // 80177BCC
  W32(c->r[3]+0x00000398u,c->r[4]); // 80177BD0
  W32(c->r[3]+0x0000039Cu,c->r[5]); // 80177BD4
  W32(c->r[3]+0x000003A0u,c->r[5]); // 80177BD8
  W32(c->r[3]+0x000003A4u,c->r[0]); // 80177BDC
L_80177BE0:;
  cmps(c,0,(int32_t)c->r[3],0); // 80177BE0
  if (!crb(c,2)) { goto L_80177C08; } // 80177BE4
  c->r[4]=0u+0x802D0000u; // 80177BE8
  c->r[3]=0u+0x00000000u; // 80177BEC
  c->r[4]=c->r[4]+0x00000AA4u; // 80177BF0
  c->r[5]=0u+0xFFFFFFFDu; // 80177BF4
  c->r[4]=c->r[4]+0x00000076u; // 80177BF8
  c->lr=0x80177C00u; f_8017968C(c); // 80177BFC
  c->r[3]=0u+0x00000000u; // 80177C00
  goto L_80177C38; // 80177C04
L_80177C08:;
  c->r[3]=c->r[30]|c->r[30]; // 80177C08
  c->lr=0x80177C10u; f_80177DC8(c); // 80177C0C
  cmps(c,0,(int32_t)c->r[3],0); // 80177C10
  if (!crb(c,2)) { goto L_80177C34; } // 80177C14
  cmps(c,0,(int32_t)c->r[30],0); // 80177C18
  if (crb(c,2)) { goto L_80177C2C; } // 80177C1C
  c->r[3]=c->r[30]|c->r[30]; // 80177C20
  c->r[4]=0u+0x000003A8u; // 80177C24
  c->lr=0x80177C2Cu; f_8017BFE8(c); // 80177C28
L_80177C2C:;
  c->r[3]=0u+0x00000000u; // 80177C2C
  goto L_80177C38; // 80177C30
L_80177C34:;
  c->r[3]=c->r[30]|c->r[30]; // 80177C34
L_80177C38:;
  c->r[10]=c->r[31]|c->r[31]; // 80177C38
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80177C3C
  c->r[30]=R32(c->r[10]+0x00000028u); // 80177C40
  c->r[29]=R32(c->r[10]+0x00000024u); // 80177C44
  c->r[28]=R32(c->r[10]+0x00000020u); // 80177C48
  c->r[10]=R32(c->r[1]+0x00000000u); // 80177C4C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80177C50
  c->r[1]=c->r[10]|c->r[10]; // 80177C54
  c->lr=c->r[0]; // 80177C58
  return; // 80177C5C
}

// Destroy__13CriAuStreamerFv
void f_80177C60(Ctx* __restrict c) {
  trace_call(0x80177C60u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177C60
  c->r[0]=c->lr; // 80177C64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177C68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177C6C
  c->r[31]=c->r[3]|c->r[3]; // 80177C70
  c->r[0]=R32(c->r[3]+0x00000264u); // 80177C74
  cmps(c,0,(int32_t)c->r[0],0); // 80177C78
  if (crb(c,2)) { goto L_80177D00; } // 80177C7C
  cmps(c,0,(int32_t)c->r[0],3); // 80177C80
  if (!crb(c,2)) { goto L_80177CC4; } // 80177C84
  c->r[0]=R32(c->r[3]+0x00000268u); // 80177C88
  c->r[4]=0u+0x00000000u; // 80177C8C
  W32(c->r[3]+0x00000394u,c->r[4]); // 80177C90
  cmps(c,0,(int32_t)c->r[0],4); // 80177C94
  W32(c->r[3]+0x0000039Cu,c->r[4]); // 80177C98
  W32(c->r[3]+0x00000258u,c->r[4]); // 80177C9C
  W32(c->r[3]+0x00000250u,c->r[4]); // 80177CA0
  W32(c->r[3]+0x00000254u,c->r[4]); // 80177CA4
  if (!crb(c,2)) { goto L_80177CB0; } // 80177CA8
  W32(c->r[13]+0xFFFFA200u,c->r[4]); // 80177CAC
L_80177CB0:;
  c->r[0]=0u+0x00000000u; // 80177CB0
  W32(c->r[3]+0x00000268u,c->r[0]); // 80177CB4
  W32(c->r[3]+0x00000264u,c->r[0]); // 80177CB8
  W32(c->r[3]+0x000003A0u,c->r[0]); // 80177CBC
  goto L_80177CE0; // 80177CC0
L_80177CC4:;
  c->r[3]=R32(c->r[3]+0x0000026Cu); // 80177CC4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177CC8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80177CCC
  c->ctr=c->r[12]; // 80177CD0
  if (true) { c->lr=0x80177CD8u; dispatch(c,c->ctr); } // 80177CD4
  c->r[0]=0u+0x00000001u; // 80177CD8
  W32(c->r[31]+0x000003A0u,c->r[0]); // 80177CDC
L_80177CE0:;
  c->r[0]=R32(c->r[31]+0x00000264u); // 80177CE0
  cmps(c,0,(int32_t)c->r[0],0); // 80177CE4
  if (crb(c,2)) { goto L_80177D00; } // 80177CE8
  c->r[3]=c->r[31]|c->r[31]; // 80177CEC
  c->lr=0x80177CF4u; f_801781A4(c); // 80177CF0
  c->r[3]=0u+0x00000001u; // 80177CF4
  c->lr=0x80177CFCu; f_8017A4A0(c); // 80177CF8
  IRQCHK(c); goto L_80177CE0; // 80177CFC
L_80177D00:;
  c->r[3]=R32(c->r[31]+0x0000026Cu); // 80177D00
  cmps(c,0,(int32_t)c->r[3],0); // 80177D04
  if (crb(c,2)) { goto L_80177D24; } // 80177D08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177D0C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80177D10
  c->ctr=c->r[12]; // 80177D14
  if (true) { c->lr=0x80177D1Cu; dispatch(c,c->ctr); } // 80177D18
  c->r[0]=0u+0x00000000u; // 80177D1C
  W32(c->r[31]+0x0000026Cu,c->r[0]); // 80177D20
L_80177D24:;
  c->r[4]=R32(c->r[31]+0x00000390u); // 80177D24
  cmps(c,0,(int32_t)c->r[4],0); // 80177D28
  if (crb(c,2)) { goto L_80177D40; } // 80177D2C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80177D30
  c->lr=0x80177D38u; f_8017C228(c); // 80177D34
  c->r[0]=0u+0x00000000u; // 80177D38
  W32(c->r[31]+0x00000390u,c->r[0]); // 80177D3C
L_80177D40:;
  c->r[3]=R32(c->r[31]+0x00000260u); // 80177D40
  cmps(c,0,(int32_t)c->r[3],0); // 80177D44
  if (crb(c,2)) { goto L_80177D60; } // 80177D48
  c->lr=0x80177D50u; f_80176F54(c); // 80177D4C
  c->r[3]=R32(c->r[31]+0x00000260u); // 80177D50
  c->lr=0x80177D58u; f_80176684(c); // 80177D54
  c->r[0]=0u+0x00000000u; // 80177D58
  W32(c->r[31]+0x00000260u,c->r[0]); // 80177D5C
L_80177D60:;
  cmps(c,0,(int32_t)c->r[31],0); // 80177D60
  if (crb(c,2)) { goto L_80177D74; } // 80177D64
  c->r[3]=c->r[31]|c->r[31]; // 80177D68
  c->r[4]=0u+0x000003A8u; // 80177D6C
  c->lr=0x80177D74u; f_8017BFE8(c); // 80177D70
L_80177D74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177D74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177D78
  c->lr=c->r[0]; // 80177D7C
  c->r[1]=c->r[1]+0x00000010u; // 80177D80
  return; // 80177D84
}

// __dt__18CriAuStmFinfoQueueFv
void f_80177D88(Ctx* __restrict c) {
  trace_call(0x80177D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177D88
  c->r[0]=c->lr; // 80177D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80177D90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80177D94
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80177D98
  c->r[31]=c->r[3]|c->r[3]; // 80177D9C
  if (crb(c,2)) { goto L_80177DB0; } // 80177DA0
  cmps(c,0,(int32_t)c->r[4],0); // 80177DA4
  if (!crb(c,1)) { goto L_80177DB0; } // 80177DA8
  c->lr=0x80177DB0u; f_80210AFC(c); // 80177DAC
L_80177DB0:;
  c->r[3]=c->r[31]|c->r[31]; // 80177DB0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80177DB4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80177DB8
  c->lr=c->r[0]; // 80177DBC
  c->r[1]=c->r[1]+0x00000010u; // 80177DC0
  return; // 80177DC4
}

// InitializeMembers__13CriAuStreamerFv
void f_80177DC8(Ctx* __restrict c) {
  trace_call(0x80177DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177DC8
  c->r[0]=c->lr; // 80177DCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80177DD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80177DD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80177DD8
  c->r[30]=c->r[3]|c->r[3]; // 80177DDC
  c->r[3]=R32(c->r[13]+0xFFFFA1F8u); // 80177DE0
  c->lr=0x80177DE8u; f_80176578(c); // 80177DE4
  cmps(c,0,(int32_t)c->r[3],0); // 80177DE8
  W32(c->r[30]+0x00000260u,c->r[3]); // 80177DEC
  if (!crb(c,2)) { goto L_80177E70; } // 80177DF0
  c->r[4]=0u+0x802D0000u; // 80177DF4
  c->r[3]=0u+0x00000000u; // 80177DF8
  c->r[4]=c->r[4]+0x00000AA4u; // 80177DFC
  c->r[4]=c->r[4]+0x00000082u; // 80177E00
  c->lr=0x80177E08u; f_80179434(c); // 80177E04
  c->r[3]=R32(c->r[30]+0x0000026Cu); // 80177E08
  cmps(c,0,(int32_t)c->r[3],0); // 80177E0C
  if (crb(c,2)) { goto L_80177E2C; } // 80177E10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177E14
  c->r[12]=R32(c->r[12]+0x00000008u); // 80177E18
  c->ctr=c->r[12]; // 80177E1C
  if (true) { c->lr=0x80177E24u; dispatch(c,c->ctr); } // 80177E20
  c->r[0]=0u+0x00000000u; // 80177E24
  W32(c->r[30]+0x0000026Cu,c->r[0]); // 80177E28
L_80177E2C:;
  c->r[4]=R32(c->r[30]+0x00000390u); // 80177E2C
  cmps(c,0,(int32_t)c->r[4],0); // 80177E30
  if (crb(c,2)) { goto L_80177E48; } // 80177E34
  c->r[3]=R32(c->r[30]+0x00000000u); // 80177E38
  c->lr=0x80177E40u; f_8017C228(c); // 80177E3C
  c->r[0]=0u+0x00000000u; // 80177E40
  W32(c->r[30]+0x00000390u,c->r[0]); // 80177E44
L_80177E48:;
  c->r[3]=R32(c->r[30]+0x00000260u); // 80177E48
  cmps(c,0,(int32_t)c->r[3],0); // 80177E4C
  if (crb(c,2)) { goto L_80177E68; } // 80177E50
  c->lr=0x80177E58u; f_80176F54(c); // 80177E54
  c->r[3]=R32(c->r[30]+0x00000260u); // 80177E58
  c->lr=0x80177E60u; f_80176684(c); // 80177E5C
  c->r[0]=0u+0x00000000u; // 80177E60
  W32(c->r[30]+0x00000260u,c->r[0]); // 80177E64
L_80177E68:;
  c->r[3]=0u+0x00000000u; // 80177E68
  goto L_80177FD4; // 80177E6C
L_80177E70:;
  c->r[4]=c->r[30]|c->r[30]; // 80177E70
  c->lr=0x80177E78u; f_80176E04(c); // 80177E74
  c->r[0]=R32(c->r[30]+0x00000398u); // 80177E78
  c->r[31]=0u+0x802D0000u; // 80177E7C
  c->r[31]=c->r[31]+0x00000AA4u; // 80177E80
  c->r[3]=R32(c->r[30]+0x00000000u); // 80177E84
  c->r[4]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80177E88
  c->r[6]=0u+0x00000004u; // 80177E8C
  c->r[5]=c->r[31]+0x000000AFu; // 80177E90
  c->r[7]=0u+0x00000002u; // 80177E94
  c->lr=0x80177E9Cu; f_8017C15C(c); // 80177E98
  cmps(c,0,(int32_t)c->r[3],0); // 80177E9C
  W32(c->r[30]+0x00000390u,c->r[3]); // 80177EA0
  if (!crb(c,2)) { goto L_80177F20; } // 80177EA4
  c->r[4]=c->r[31]+0x000000BDu; // 80177EA8
  c->r[3]=0u+0x00000000u; // 80177EAC
  c->r[5]=0u+0xFFFFFFFDu; // 80177EB0
  c->lr=0x80177EB8u; f_8017968C(c); // 80177EB4
  c->r[3]=R32(c->r[30]+0x0000026Cu); // 80177EB8
  cmps(c,0,(int32_t)c->r[3],0); // 80177EBC
  if (crb(c,2)) { goto L_80177EDC; } // 80177EC0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177EC4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80177EC8
  c->ctr=c->r[12]; // 80177ECC
  if (true) { c->lr=0x80177ED4u; dispatch(c,c->ctr); } // 80177ED0
  c->r[0]=0u+0x00000000u; // 80177ED4
  W32(c->r[30]+0x0000026Cu,c->r[0]); // 80177ED8
L_80177EDC:;
  c->r[4]=R32(c->r[30]+0x00000390u); // 80177EDC
  cmps(c,0,(int32_t)c->r[4],0); // 80177EE0
  if (crb(c,2)) { goto L_80177EF8; } // 80177EE4
  c->r[3]=R32(c->r[30]+0x00000000u); // 80177EE8
  c->lr=0x80177EF0u; f_8017C228(c); // 80177EEC
  c->r[0]=0u+0x00000000u; // 80177EF0
  W32(c->r[30]+0x00000390u,c->r[0]); // 80177EF4
L_80177EF8:;
  c->r[3]=R32(c->r[30]+0x00000260u); // 80177EF8
  cmps(c,0,(int32_t)c->r[3],0); // 80177EFC
  if (crb(c,2)) { goto L_80177F18; } // 80177F00
  c->lr=0x80177F08u; f_80176F54(c); // 80177F04
  c->r[3]=R32(c->r[30]+0x00000260u); // 80177F08
  c->lr=0x80177F10u; f_80176684(c); // 80177F0C
  c->r[0]=0u+0x00000000u; // 80177F10
  W32(c->r[30]+0x00000260u,c->r[0]); // 80177F14
L_80177F18:;
  c->r[3]=0u+0x00000000u; // 80177F18
  goto L_80177FD4; // 80177F1C
L_80177F20:;
  c->r[12]=R32(c->r[13]+0xFFFFA1F0u); // 80177F20
  cmps(c,0,(int32_t)c->r[12],0); // 80177F24
  if (crb(c,2)) { goto L_80177F48; } // 80177F28
  c->r[0]=R32(c->r[30]+0x00000000u); // 80177F2C
  c->r[3]=c->r[1]+0x00000008u; // 80177F30
  W32(c->r[1]+0x00000008u,c->r[0]); // 80177F34
  c->r[4]=R32(c->r[13]+0xFFFFA1F4u); // 80177F38
  c->ctr=c->r[12]; // 80177F3C
  if (true) { c->lr=0x80177F44u; dispatch(c,c->ctr); } // 80177F40
  W32(c->r[30]+0x0000026Cu,c->r[3]); // 80177F44
L_80177F48:;
  c->r[0]=R32(c->r[30]+0x0000026Cu); // 80177F48
  cmps(c,0,(int32_t)c->r[0],0); // 80177F4C
  if (!crb(c,2)) { goto L_80177FD0; } // 80177F50
  c->r[4]=0u+0x802D0000u; // 80177F54
  c->r[3]=0u+0x00000000u; // 80177F58
  c->r[4]=c->r[4]+0x00000AA4u; // 80177F5C
  c->r[4]=c->r[4]+0x000000C9u; // 80177F60
  c->lr=0x80177F68u; f_80179434(c); // 80177F64
  c->r[3]=R32(c->r[30]+0x0000026Cu); // 80177F68
  cmps(c,0,(int32_t)c->r[3],0); // 80177F6C
  if (crb(c,2)) { goto L_80177F8C; } // 80177F70
  c->r[12]=R32(c->r[3]+0x00000000u); // 80177F74
  c->r[12]=R32(c->r[12]+0x00000008u); // 80177F78
  c->ctr=c->r[12]; // 80177F7C
  if (true) { c->lr=0x80177F84u; dispatch(c,c->ctr); } // 80177F80
  c->r[0]=0u+0x00000000u; // 80177F84
  W32(c->r[30]+0x0000026Cu,c->r[0]); // 80177F88
L_80177F8C:;
  c->r[4]=R32(c->r[30]+0x00000390u); // 80177F8C
  cmps(c,0,(int32_t)c->r[4],0); // 80177F90
  if (crb(c,2)) { goto L_80177FA8; } // 80177F94
  c->r[3]=R32(c->r[30]+0x00000000u); // 80177F98
  c->lr=0x80177FA0u; f_8017C228(c); // 80177F9C
  c->r[0]=0u+0x00000000u; // 80177FA0
  W32(c->r[30]+0x00000390u,c->r[0]); // 80177FA4
L_80177FA8:;
  c->r[3]=R32(c->r[30]+0x00000260u); // 80177FA8
  cmps(c,0,(int32_t)c->r[3],0); // 80177FAC
  if (crb(c,2)) { goto L_80177FC8; } // 80177FB0
  c->lr=0x80177FB8u; f_80176F54(c); // 80177FB4
  c->r[3]=R32(c->r[30]+0x00000260u); // 80177FB8
  c->lr=0x80177FC0u; f_80176684(c); // 80177FBC
  c->r[0]=0u+0x00000000u; // 80177FC0
  W32(c->r[30]+0x00000260u,c->r[0]); // 80177FC4
L_80177FC8:;
  c->r[3]=0u+0x00000000u; // 80177FC8
  goto L_80177FD4; // 80177FCC
L_80177FD0:;
  c->r[3]=0u+0x00000001u; // 80177FD0
L_80177FD4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80177FD4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80177FD8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80177FDC
  c->lr=c->r[0]; // 80177FE0
  c->r[1]=c->r[1]+0x00000020u; // 80177FE4
  return; // 80177FE8
}

// SetNextFile__13CriAuStreamerFPvPCcxxl
void f_80177FEC(Ctx* __restrict c) {
  trace_call(0x80177FECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80177FEC
  c->r[0]=c->lr; // 80177FF0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80177FF4
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80177FF8
  c->r[26]=c->r[3]|c->r[3]; // 80177FFC
  c->r[31]=R32(c->r[1]+0x00000028u); // 80178000
  c->r[28]=c->r[7]|c->r[7]; // 80178004
  c->r[27]=c->r[8]|c->r[8]; // 80178008
  c->r[30]=c->r[9]|c->r[9]; // 8017800C
  c->r[29]=c->r[10]|c->r[10]; // 80178010
  c->r[0]=R32(c->r[3]+0x00000258u); // 80178014
  cmps(c,0,(int32_t)c->r[0],2); // 80178018
  if (crb(c,0)) { goto L_80178028; } // 8017801C
  c->r[3]=0u+0x00000000u; // 80178020
  goto L_801780CC; // 80178024
L_80178028:;
  c->r[0]=R32(c->r[3]+0x00000254u); // 80178028
  c->r[6]=0u+0x000000FFu; // 8017802C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178030
  c->r[7]=c->r[3]+c->r[0]; // 80178034
  W32(c->r[7]+0x00000010u,c->r[4]); // 80178038
  c->r[4]=0u+0x00000100u; // 8017803C
  c->r[0]=R32(c->r[3]+0x00000254u); // 80178040
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178044
  c->r[3]=c->r[3]+c->r[0]; // 80178048
  c->r[3]=c->r[3]+0x00000014u; // 8017804C
  c->lr=0x80178054u; f_801792F0(c); // 80178050
  c->r[0]=R32(c->r[26]+0x00000254u); // 80178054
  c->r[5]=0u+0x00000000u; // 80178058
  c->r[3]=0u+0x00000001u; // 8017805C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178060
  c->r[4]=c->r[26]+c->r[0]; // 80178064
  W8(c->r[4]+0x00000113u,c->r[5]); // 80178068
  c->r[0]=R32(c->r[26]+0x00000254u); // 8017806C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178070
  c->r[4]=c->r[26]+c->r[0]; // 80178074
  W32(c->r[4]+0x0000011Cu,c->r[27]); // 80178078
  W32(c->r[4]+0x00000118u,c->r[28]); // 8017807C
  c->r[0]=R32(c->r[26]+0x00000254u); // 80178080
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178084
  c->r[4]=c->r[26]+c->r[0]; // 80178088
  W32(c->r[4]+0x00000124u,c->r[29]); // 8017808C
  W32(c->r[4]+0x00000120u,c->r[30]); // 80178090
  c->r[0]=R32(c->r[26]+0x00000254u); // 80178094
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178098
  c->r[4]=c->r[26]+c->r[0]; // 8017809C
  W32(c->r[4]+0x00000128u,c->r[31]); // 801780A0
  c->r[5]=R32(c->r[26]+0x00000254u); // 801780A4
  c->r[4]=R32(c->r[26]+0x00000258u); // 801780A8
  c->r[6]=c->r[5]+0x00000001u; // 801780AC
  c->r[0]=c->r[4]+0x00000001u; // 801780B0
  W32(c->r[26]+0x00000258u,c->r[0]); // 801780B4
  c->r[5]=rotl(c->r[6],1)&0x00000001u; // 801780B8
  c->r[4]=rotl(c->r[6],0)&0x00000001u; // 801780BC
  c->r[0]=c->r[4]^c->r[5]; // 801780C0
  c->r[0]=c->r[0]-c->r[5]; // 801780C4
  W32(c->r[26]+0x00000254u,c->r[0]); // 801780C8
L_801780CC:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801780CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801780D0
  c->lr=c->r[0]; // 801780D4
  c->r[1]=c->r[1]+0x00000020u; // 801780D8
  return; // 801780DC
}

// GetStatus__13CriAuStreamerCFv
void f_801780E0(Ctx* __restrict c) {
  trace_call(0x801780E0u);
  c->r[3]=R32(c->r[3]+0x00000264u); // 801780E0
  return; // 801780E4
}

// Start__13CriAuStreamerFv
void f_801780E8(Ctx* __restrict c) {
  trace_call(0x801780E8u);
  c->r[0]=0u+0x00000000u; // 801780E8
  c->r[4]=0u+0x00000001u; // 801780EC
  W32(c->r[3]+0x00000264u,c->r[4]); // 801780F0
  W32(c->r[3]+0x00000268u,c->r[0]); // 801780F4
  W32(c->r[3]+0x000003A0u,c->r[0]); // 801780F8
  return; // 801780FC
}

// Stop__13CriAuStreamerFv
void f_80178100(Ctx* __restrict c) {
  trace_call(0x80178100u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178100
  c->r[0]=c->lr; // 80178104
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178108
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8017810C
  c->r[31]=c->r[3]|c->r[3]; // 80178110
  c->r[0]=R32(c->r[3]+0x00000264u); // 80178114
  cmps(c,0,(int32_t)c->r[0],0); // 80178118
  if (crb(c,2)) { goto L_80178128; } // 8017811C
  cmps(c,0,(int32_t)c->r[0],3); // 80178120
  if (!crb(c,2)) { goto L_80178164; } // 80178124
L_80178128:;
  c->r[0]=R32(c->r[3]+0x00000268u); // 80178128
  c->r[4]=0u+0x00000000u; // 8017812C
  W32(c->r[3]+0x00000394u,c->r[4]); // 80178130
  cmps(c,0,(int32_t)c->r[0],4); // 80178134
  W32(c->r[3]+0x0000039Cu,c->r[4]); // 80178138
  W32(c->r[3]+0x00000258u,c->r[4]); // 8017813C
  W32(c->r[3]+0x00000250u,c->r[4]); // 80178140
  W32(c->r[3]+0x00000254u,c->r[4]); // 80178144
  if (!crb(c,2)) { goto L_80178150; } // 80178148
  W32(c->r[13]+0xFFFFA200u,c->r[4]); // 8017814C
L_80178150:;
  c->r[0]=0u+0x00000000u; // 80178150
  W32(c->r[3]+0x00000268u,c->r[0]); // 80178154
  W32(c->r[3]+0x00000264u,c->r[0]); // 80178158
  W32(c->r[3]+0x000003A0u,c->r[0]); // 8017815C
  goto L_80178180; // 80178160
L_80178164:;
  c->r[3]=R32(c->r[3]+0x0000026Cu); // 80178164
  c->r[12]=R32(c->r[3]+0x00000000u); // 80178168
  c->r[12]=R32(c->r[12]+0x00000010u); // 8017816C
  c->ctr=c->r[12]; // 80178170
  if (true) { c->lr=0x80178178u; dispatch(c,c->ctr); } // 80178174
  c->r[0]=0u+0x00000001u; // 80178178
  W32(c->r[31]+0x000003A0u,c->r[0]); // 8017817C
L_80178180:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178180
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178184
  c->lr=c->r[0]; // 80178188
  c->r[1]=c->r[1]+0x00000010u; // 8017818C
  return; // 80178190
}

// SetBandWidth__13CriAuStreamerFf
void f_80178194(Ctx* __restrict c) {
  trace_call(0x80178194u);
  c->r[3]=R32(c->r[3]+0x00000260u); // 80178194
  f_80176B90(c); return; // 80178198
}

// GetRemainTime__13CriAuStreamerFv
void f_8017819C(Ctx* __restrict c) {
  trace_call(0x8017819Cu);
  c->r[3]=R32(c->r[3]+0x00000260u); // 8017819C
  f_80176BA4(c); return; // 801781A0
}

// Execute__13CriAuStreamerFv
void f_801781A4(Ctx* __restrict c) {
  trace_call(0x801781A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801781A4
  c->r[0]=c->lr; // 801781A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801781AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801781B0
  c->r[31]=c->r[3]|c->r[3]; // 801781B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801781B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801781BC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801781C0
  c->r[4]=R32(c->r[3]+0x00000264u); // 801781C4
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801781C8
  cmpu(c,0,c->r[0],0x00000001u); // 801781CC
  if (crb(c,1)) { goto L_801781E0; } // 801781D0
  c->lr=0x801781D8u; f_80178360(c); // 801781D4
  c->r[3]=R32(c->r[31]+0x00000260u); // 801781D8
  c->lr=0x801781E0u; f_80177080(c); // 801781DC
L_801781E0:;
  c->r[0]=R32(c->r[31]+0x00000264u); // 801781E0
  cmps(c,0,(int32_t)c->r[0],1); // 801781E4
  if (!crb(c,2)) { goto L_80178208; } // 801781E8
  c->r[3]=R32(c->r[31]+0x0000026Cu); // 801781EC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801781F0
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801781F4
  c->ctr=c->r[12]; // 801781F8
  if (true) { c->lr=0x80178200u; dispatch(c,c->ctr); } // 801781FC
  c->r[3]=c->r[31]|c->r[31]; // 80178200
  c->lr=0x80178208u; f_801784D8(c); // 80178204
L_80178208:;
  c->r[3]=R32(c->r[31]+0x0000026Cu); // 80178208
  c->r[12]=R32(c->r[3]+0x00000000u); // 8017820C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80178210
  c->ctr=c->r[12]; // 80178214
  if (true) { c->lr=0x8017821Cu; dispatch(c,c->ctr); } // 80178218
  c->r[0]=R32(c->r[31]+0x000003A0u); // 8017821C
  c->r[28]=c->r[3]|c->r[3]; // 80178220
  cmps(c,0,(int32_t)c->r[0],1); // 80178224
  if (!crb(c,2)) { goto L_8017828C; } // 80178228
  cmps(c,0,(int32_t)c->r[3],0); // 8017822C
  if (crb(c,2)) { goto L_8017823C; } // 80178230
  cmps(c,0,(int32_t)c->r[3],5); // 80178234
  if (!crb(c,2)) { goto L_801782BC; } // 80178238
L_8017823C:;
  c->r[3]=R32(c->r[31]+0x0000026Cu); // 8017823C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80178240
  c->r[12]=R32(c->r[12]+0x00000010u); // 80178244
  c->ctr=c->r[12]; // 80178248
  if (true) { c->lr=0x80178250u; dispatch(c,c->ctr); } // 8017824C
  c->r[0]=R32(c->r[31]+0x00000268u); // 80178250
  c->r[3]=0u+0x00000000u; // 80178254
  W32(c->r[31]+0x00000394u,c->r[3]); // 80178258
  cmps(c,0,(int32_t)c->r[0],4); // 8017825C
  W32(c->r[31]+0x0000039Cu,c->r[3]); // 80178260
  W32(c->r[31]+0x00000258u,c->r[3]); // 80178264
  W32(c->r[31]+0x00000250u,c->r[3]); // 80178268
  W32(c->r[31]+0x00000254u,c->r[3]); // 8017826C
  if (!crb(c,2)) { goto L_80178278; } // 80178270
  W32(c->r[13]+0xFFFFA200u,c->r[3]); // 80178274
L_80178278:;
  c->r[0]=0u+0x00000000u; // 80178278
  W32(c->r[31]+0x00000268u,c->r[0]); // 8017827C
  W32(c->r[31]+0x00000264u,c->r[0]); // 80178280
  W32(c->r[31]+0x000003A0u,c->r[0]); // 80178284
  goto L_801782BC; // 80178288
L_8017828C:;
  cmps(c,0,(int32_t)c->r[3],5); // 8017828C
  if (!crb(c,2)) { goto L_801782BC; } // 80178290
  c->r[0]=0u+0x00000004u; // 80178294
  W32(c->r[31]+0x00000264u,c->r[0]); // 80178298
  c->r[3]=R32(c->r[31]+0x00000260u); // 8017829C
  c->r[4]=0u+0x00000000u; // 801782A0
  c->lr=0x801782A8u; f_80176E0C(c); // 801782A4
  c->r[0]=R32(c->r[31]+0x00000268u); // 801782A8
  cmps(c,0,(int32_t)c->r[0],4); // 801782AC
  if (!crb(c,2)) { goto L_801782BC; } // 801782B0
  c->r[0]=0u+0x00000000u; // 801782B4
  W32(c->r[13]+0xFFFFA200u,c->r[0]); // 801782B8
L_801782BC:;
  c->r[0]=R32(c->r[31]+0x00000268u); // 801782BC
  cmps(c,0,(int32_t)c->r[0],5); // 801782C0
  if (!crb(c,2)) { goto L_8017830C; } // 801782C4
  c->r[0]=R32(c->r[31]+0x0000039Cu); // 801782C8
  cmps(c,0,(int32_t)c->r[0],1); // 801782CC
  if (!crb(c,2)) { goto L_8017830C; } // 801782D0
  c->r[3]=R32(c->r[31]+0x00000260u); // 801782D4
  c->lr=0x801782DCu; f_80176B10(c); // 801782D8
  c->r[30]=c->r[3]|c->r[3]; // 801782DC
  c->r[3]=R32(c->r[31]+0x00000260u); // 801782E0
  c->r[29]=c->r[4]|c->r[4]; // 801782E4
  c->lr=0x801782ECu; f_80176AE0(c); // 801782E8
  c->r[4]=addc(c,c->r[4],c->r[29],0); // 801782EC
  c->r[0]=addc(c,c->r[3],c->r[30],c->xer_ca); // 801782F0
  c->r[0]=c->r[4]|c->r[0]; cr0(c,c->r[0]); // 801782F4
  if (!crb(c,2)) { goto L_8017830C; } // 801782F8
  cmps(c,0,(int32_t)c->r[28],0); // 801782FC
  if (!crb(c,2)) { goto L_8017830C; } // 80178300
  c->r[0]=0u+0x00000002u; // 80178304
  W32(c->r[31]+0x00000264u,c->r[0]); // 80178308
L_8017830C:;
  c->r[0]=R32(c->r[31]+0x00000264u); // 8017830C
  cmps(c,0,(int32_t)c->r[0],2); // 80178310
  if (!crb(c,2)) { goto L_80178330; } // 80178314
  c->r[3]=R32(c->r[31]+0x00000260u); // 80178318
  c->lr=0x80178320u; f_80176D88(c); // 8017831C
  cmps(c,0,(int32_t)c->r[3],1); // 80178320
  if (!crb(c,2)) { goto L_80178330; } // 80178324
  c->r[0]=0u+0x00000003u; // 80178328
  W32(c->r[31]+0x00000264u,c->r[0]); // 8017832C
L_80178330:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80178330
  c->r[3]=0u+0x00000000u; // 80178334
  c->r[30]=R32(c->r[1]+0x00000018u); // 80178338
  c->r[29]=R32(c->r[1]+0x00000014u); // 8017833C
  c->r[28]=R32(c->r[1]+0x00000010u); // 80178340
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178344
  c->lr=c->r[0]; // 80178348
  c->r[1]=c->r[1]+0x00000020u; // 8017834C
  return; // 80178350
}

// TerminateSupply__13CriAuStreamerFv
void f_80178354(Ctx* __restrict c) {
  trace_call(0x80178354u);
  c->r[0]=0u+0x00000001u; // 80178354
  W32(c->r[3]+0x0000039Cu,c->r[0]); // 80178358
  return; // 8017835C
}

// TransferToSj__13CriAuStreamerFv
void f_80178360(Ctx* __restrict c) {
  trace_call(0x80178360u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178360
  c->r[0]=c->lr; // 80178364
  W32(c->r[1]+0x00000044u,c->r[0]); // 80178368
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 8017836C
  W32(c->r[1]+0x00000038u,c->r[30]); // 80178370
  W32(c->r[1]+0x00000034u,c->r[29]); // 80178374
  c->r[29]=c->r[3]|c->r[3]; // 80178378
L_8017837C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8017837C
  c->r[4]=c->r[1]+0x00000020u; // 80178380
  c->lr=0x80178388u; f_8017DE1C(c); // 80178384
  c->r[0]=R32(c->r[1]+0x00000020u); // 80178388
  cmps(c,0,(int32_t)c->r[0],0); // 8017838C
  if (crb(c,2)) { goto L_80178428; } // 80178390
  c->r[3]=R32(c->r[29]+0x00000260u); // 80178394
  c->lr=0x8017839Cu; f_80176AC8(c); // 80178398
  cmps(c,0,(int32_t)c->r[3],0); // 8017839C
  if (!crb(c,2)) { goto L_801783CC; } // 801783A0
  c->r[4]=0u+0x802D0000u; // 801783A4
  c->r[3]=0u+0x00000000u; // 801783A8
  c->r[4]=c->r[4]+0x00000AA4u; // 801783AC
  c->r[4]=c->r[4]+0x0000011Fu; // 801783B0
  c->lr=0x801783B8u; f_80179434(c); // 801783B4
  c->r[3]=R32(c->r[29]+0x00000004u); // 801783B8
  c->r[5]=c->r[1]+0x00000020u; // 801783BC
  c->r[4]=0u+0x00000000u; // 801783C0
  c->lr=0x801783C8u; f_8017DD94(c); // 801783C4
  goto L_80178428; // 801783C8
L_801783CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801783CC
  c->r[4]=R32(c->r[3]+0x00000014u); // 801783D0
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 801783D4
  if (!crb(c,1)) { goto L_801783E8; } // 801783D8
  c->r[0]=c->r[4]-c->r[0]; // 801783DC
  W32(c->r[3]+0x00000014u,c->r[0]); // 801783E0
  IRQCHK(c); goto L_8017837C; // 801783E4
L_801783E8:;
  c->r[3]=c->r[1]+0x00000020u; // 801783E8
  c->r[5]=c->r[1]+0x00000018u; // 801783EC
  c->r[6]=c->r[1]+0x00000010u; // 801783F0
  c->lr=0x801783F8u; f_8017DDC4(c); // 801783F4
  c->r[3]=R32(c->r[29]+0x00000004u); // 801783F8
  c->r[5]=c->r[1]+0x00000010u; // 801783FC
  c->r[4]=0u+0x00000000u; // 80178400
  c->lr=0x80178408u; f_8017DD94(c); // 80178404
  c->r[3]=R32(c->r[29]+0x00000260u); // 80178408
  c->lr=0x80178410u; f_80176AA4(c); // 8017840C
  cmps(c,0,(int32_t)c->r[3],0); // 80178410
  c->r[4]=c->r[3]|c->r[3]; // 80178414
  if (crb(c,2)) { IRQCHK(c); goto L_8017837C; } // 80178418
  c->r[3]=R32(c->r[29]+0x00000260u); // 8017841C
  c->lr=0x80178424u; f_801768E4(c); // 80178420
  IRQCHK(c); goto L_8017837C; // 80178424
L_80178428:;
  c->r[3]=R32(c->r[29]+0x00000260u); // 80178428
  c->lr=0x80178430u; f_80176B70(c); // 8017842C
  cmps(c,0,(int32_t)c->r[3],2); // 80178430
  if (crb(c,0)) { goto L_80178480; } // 80178434
  c->r[3]=R32(c->r[29]+0x00000260u); // 80178438
  c->lr=0x80178440u; f_80176B9C(c); // 8017843C
  {uint32_t ea=c->r[2]+0xFFFFB4D0u; c->f[2]=c->ps1[2]=RF32(ea);} // 80178440
  {uint32_t ea=c->r[2]+0xFFFFB4D4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80178444
  c->f[1]=c->ps1[1]=S(c->f[1]*c->f[2]); // 80178448
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[0]); // 8017844C
  c->lr=0x80178454u; f_800AE050(c); // 80178450
  c->r[31]=c->r[3]|c->r[3]; // 80178454
  c->r[3]=R32(c->r[29]+0x00000260u); // 80178458
  c->r[30]=c->r[4]|c->r[4]; // 8017845C
  c->lr=0x80178464u; f_80176B40(c); // 80178460
  c->r[0]=c->r[3]^0x80000000u; // 80178464
  c->r[5]=c->r[31]^0x80000000u; // 80178468
  c->r[3]=addc(c,~c->r[30],c->r[4],1); // 8017846C
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80178470
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 80178474
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 80178478
  if (crb(c,2)) { goto L_801784BC; } // 8017847C
L_80178480:;
  c->r[3]=R32(c->r[29]+0x00000260u); // 80178480
  c->lr=0x80178488u; f_801768F8(c); // 80178484
  cmps(c,0,(int32_t)c->r[3],0); // 80178488
  c->r[30]=c->r[3]|c->r[3]; // 8017848C
  if (crb(c,2)) { goto L_801784BC; } // 80178490
  c->r[0]=R32(c->r[3]+0x00000018u); // 80178494
  c->r[4]=c->r[1]+0x00000008u; // 80178498
  W32(c->r[1]+0x00000008u,c->r[0]); // 8017849C
  c->r[5]=R32(c->r[3]+0x00000014u); // 801784A0
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 801784A4
  c->r[3]=R32(c->r[29]+0x00000004u); // 801784A8
  c->lr=0x801784B0u; f_8017DE38(c); // 801784AC
  c->r[3]=R32(c->r[29]+0x00000260u); // 801784B0
  c->r[4]=c->r[30]|c->r[30]; // 801784B4
  c->lr=0x801784BCu; f_80176A58(c); // 801784B8
L_801784BC:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801784BC
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801784C0
  c->r[30]=R32(c->r[1]+0x00000038u); // 801784C4
  c->r[29]=R32(c->r[1]+0x00000034u); // 801784C8
  c->lr=c->r[0]; // 801784CC
  c->r[1]=c->r[1]+0x00000040u; // 801784D0
  return; // 801784D4
}

// ProcessReading__13CriAuStreamerFv
void f_801784D8(Ctx* __restrict c) {
  trace_call(0x801784D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801784D8
  c->r[0]=c->lr; // 801784DC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801784E0
  c->r[11]=c->r[1]+0x00000020u; // 801784E4
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 801784E8
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 801784EC
  c->lr=0x801784F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801784F0
  c->r[0]=R32(c->r[3]+0x000003A0u); // 801784F4
  c->r[26]=c->r[3]|c->r[3]; // 801784F8
  c->r[30]=0u+0x00000000u; // 801784FC
  cmps(c,0,(int32_t)c->r[0],1); // 80178500
  if (!crb(c,2)) { goto L_80178510; } // 80178504
  c->r[3]=0u+0x00000000u; // 80178508
  goto L_8017893C; // 8017850C
L_80178510:;
  c->r[0]=R32(c->r[3]+0x00000268u); // 80178510
  cmps(c,0,(int32_t)c->r[0],0); // 80178514
  if (crb(c,2)) { goto L_80178524; } // 80178518
  cmps(c,0,(int32_t)c->r[0],5); // 8017851C
  if (!crb(c,2)) { goto L_801786D8; } // 80178520
L_80178524:;
  c->r[3]=R32(c->r[3]+0x0000026Cu); // 80178524
  c->r[27]=0u+0x00000001u; // 80178528
  c->r[12]=R32(c->r[3]+0x00000000u); // 8017852C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80178530
  c->ctr=c->r[12]; // 80178534
  if (true) { c->lr=0x8017853Cu; dispatch(c,c->ctr); } // 80178538
  cmps(c,0,(int32_t)c->r[3],0); // 8017853C
  if (crb(c,2)) { goto L_80178548; } // 80178540
  c->r[27]=0u+0x00000000u; // 80178544
L_80178548:;
  c->r[0]=R32(c->r[26]+0x00000258u); // 80178548
  cmps(c,0,(int32_t)c->r[0],0); // 8017854C
  if (!crb(c,2)) { goto L_8017855C; } // 80178550
  c->r[5]=0u+0x00000000u; // 80178554
  goto L_801785BC; // 80178558
L_8017855C:;
  c->r[0]=R32(c->r[26]+0x00000250u); // 8017855C
  c->r[3]=c->r[26]+0x00000274u; // 80178560
  c->r[4]=0u+0x00000100u; // 80178564
  c->r[6]=0u+0x000000FFu; // 80178568
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 8017856C
  c->r[5]=c->r[26]+c->r[0]; // 80178570
  c->r[0]=R32(c->r[5]+0x00000010u); // 80178574
  c->r[5]=c->r[5]+0x00000014u; // 80178578
  W32(c->r[26]+0x00000270u,c->r[0]); // 8017857C
  c->lr=0x80178584u; f_801792F0(c); // 80178580
  c->r[0]=R32(c->r[26]+0x00000250u); // 80178584
  c->r[5]=0u+0x00000001u; // 80178588
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 8017858C
  c->r[4]=c->r[26]+c->r[0]; // 80178590
  c->r[0]=R32(c->r[4]+0x00000118u); // 80178594
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 80178598
  W32(c->r[26]+0x0000037Cu,c->r[3]); // 8017859C
  W32(c->r[26]+0x00000378u,c->r[0]); // 801785A0
  c->r[0]=R32(c->r[4]+0x00000120u); // 801785A4
  c->r[3]=R32(c->r[4]+0x00000124u); // 801785A8
  W32(c->r[26]+0x00000384u,c->r[3]); // 801785AC
  W32(c->r[26]+0x00000380u,c->r[0]); // 801785B0
  c->r[0]=R32(c->r[4]+0x00000128u); // 801785B4
  W32(c->r[26]+0x00000388u,c->r[0]); // 801785B8
L_801785BC:;
  cmps(c,0,(int32_t)c->r[5],1); // 801785BC
  if (!crb(c,2)) { goto L_801786D8; } // 801785C0
  cmps(c,0,(int32_t)c->r[27],1); // 801785C4
  if (!crb(c,2)) { goto L_801786D8; } // 801785C8
  c->r[3]=R32(c->r[26]+0x00000260u); // 801785CC
  c->r[4]=c->r[26]+0x00000274u; // 801785D0
  c->r[5]=R32(c->r[26]+0x00000378u); // 801785D4
  c->r[6]=R32(c->r[26]+0x0000037Cu); // 801785D8
  c->r[7]=R32(c->r[26]+0x00000380u); // 801785DC
  c->r[8]=R32(c->r[26]+0x00000384u); // 801785E0
  c->lr=0x801785E8u; f_80176CCC(c); // 801785E4
  cmps(c,0,(int32_t)c->r[3],1); // 801785E8
  if (!crb(c,2)) { goto L_801786D8; } // 801785EC
  c->r[3]=R32(c->r[26]+0x0000026Cu); // 801785F0
  c->r[5]=c->r[26]+0x00000274u; // 801785F4
  c->r[4]=R32(c->r[26]+0x00000270u); // 801785F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801785FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80178600
  c->ctr=c->r[12]; // 80178604
  if (true) { c->lr=0x8017860Cu; dispatch(c,c->ctr); } // 80178608
  c->r[3]=R32(c->r[26]+0x00000260u); // 8017860C
  c->r[4]=0u+0x00000000u; // 80178610
  c->lr=0x80178618u; f_80176DFC(c); // 80178614
  c->r[0]=R32(c->r[26]+0x00000388u); // 80178618
  c->r[3]=0u+0x00000001u; // 8017861C
  W32(c->r[26]+0x00000268u,c->r[3]); // 80178620
  cmps(c,0,(int32_t)c->r[0],0); // 80178624
  if (!crb(c,2)) { goto L_801786D0; } // 80178628
  c->r[0]=R32(c->r[26]+0x00000258u); // 8017862C
  cmps(c,0,(int32_t)c->r[0],0); // 80178630
  if (!crb(c,2)) { goto L_80178640; } // 80178634
  c->r[5]=0u+0x00000000u; // 80178638
  goto L_801786A0; // 8017863C
L_80178640:;
  c->r[0]=R32(c->r[26]+0x00000250u); // 80178640
  c->r[3]=c->r[26]+0x00000274u; // 80178644
  c->r[4]=0u+0x00000100u; // 80178648
  c->r[6]=0u+0x000000FFu; // 8017864C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178650
  c->r[5]=c->r[26]+c->r[0]; // 80178654
  c->r[0]=R32(c->r[5]+0x00000010u); // 80178658
  c->r[5]=c->r[5]+0x00000014u; // 8017865C
  W32(c->r[26]+0x00000270u,c->r[0]); // 80178660
  c->lr=0x80178668u; f_801792F0(c); // 80178664
  c->r[0]=R32(c->r[26]+0x00000250u); // 80178668
  c->r[5]=0u+0x00000001u; // 8017866C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)288); // 80178670
  c->r[4]=c->r[26]+c->r[0]; // 80178674
  c->r[0]=R32(c->r[4]+0x00000118u); // 80178678
  c->r[3]=R32(c->r[4]+0x0000011Cu); // 8017867C
  W32(c->r[26]+0x0000037Cu,c->r[3]); // 80178680
  W32(c->r[26]+0x00000378u,c->r[0]); // 80178684
  c->r[0]=R32(c->r[4]+0x00000120u); // 80178688
  c->r[3]=R32(c->r[4]+0x00000124u); // 8017868C
  W32(c->r[26]+0x00000384u,c->r[3]); // 80178690
  W32(c->r[26]+0x00000380u,c->r[0]); // 80178694
  c->r[0]=R32(c->r[4]+0x00000128u); // 80178698
  W32(c->r[26]+0x00000388u,c->r[0]); // 8017869C
L_801786A0:;
  cmps(c,0,(int32_t)c->r[5],1); // 801786A0
  if (!crb(c,2)) { goto L_801786D0; } // 801786A4
  c->r[4]=R32(c->r[26]+0x00000250u); // 801786A8
  c->r[3]=R32(c->r[26]+0x00000258u); // 801786AC
  c->r[5]=c->r[4]+0x00000001u; // 801786B0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801786B4
  W32(c->r[26]+0x00000258u,c->r[0]); // 801786B8
  c->r[4]=rotl(c->r[5],1)&0x00000001u; // 801786BC
  c->r[3]=rotl(c->r[5],0)&0x00000001u; // 801786C0
  c->r[0]=c->r[3]^c->r[4]; // 801786C4
  c->r[0]=c->r[0]-c->r[4]; // 801786C8
  W32(c->r[26]+0x00000250u,c->r[0]); // 801786CC
L_801786D0:;
  c->r[30]=0u+0x00000001u; // 801786D0
  W32(c->r[26]+0x000003A4u,c->r[30]); // 801786D4
L_801786D8:;
  c->r[0]=R32(c->r[26]+0x00000268u); // 801786D8
  cmps(c,0,(int32_t)c->r[0],1); // 801786DC
  if (!crb(c,2)) { goto L_80178708; } // 801786E0
  c->r[3]=R32(c->r[26]+0x0000026Cu); // 801786E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801786E8
  c->r[12]=R32(c->r[12]+0x00000020u); // 801786EC
  c->ctr=c->r[12]; // 801786F0
  if (true) { c->lr=0x801786F8u; dispatch(c,c->ctr); } // 801786F4
  cmps(c,0,(int32_t)c->r[3],2); // 801786F8
  if (!crb(c,2)) { goto L_80178708; } // 801786FC
  c->r[0]=0u+0x00000002u; // 80178700
  W32(c->r[26]+0x00000268u,c->r[0]); // 80178704
L_80178708:;
  c->r[0]=R32(c->r[26]+0x00000268u); // 80178708
  cmps(c,0,(int32_t)c->r[0],2); // 8017870C
  if (!crb(c,2)) { goto L_80178774; } // 80178710
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178714
  c->lr=0x8017871Cu; f_80176D14(c); // 80178718
  cmps(c,0,(int32_t)c->r[3],1); // 8017871C
  if (!crb(c,2)) { goto L_80178774; } // 80178720
  c->r[3]=R32(c->r[13]+0xFFFFA1F8u); // 80178724
  c->r[4]=0u+0x00000003u; // 80178728
  c->lr=0x80178730u; f_801763DC(c); // 8017872C
  c->f[31]=c->f[1]; // 80178730
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178734
  c->lr=0x8017873Cu; f_80176BA4(c); // 80178738
  fcmp(c,0,c->f[1],c->f[31]); // 8017873C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80178740
  if (!crb(c,2)) { goto L_80178770; } // 80178744
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178748
  c->r[4]=0u+0x00000001u; // 8017874C
  c->lr=0x80178754u; f_80176DFC(c); // 80178750
  c->r[3]=R32(c->r[26]+0x0000026Cu); // 80178754
  c->r[12]=R32(c->r[3]+0x00000000u); // 80178758
  c->r[12]=R32(c->r[12]+0x00000010u); // 8017875C
  c->ctr=c->r[12]; // 80178760
  if (true) { c->lr=0x80178768u; dispatch(c,c->ctr); } // 80178764
  c->r[0]=0u+0x00000005u; // 80178768
  W32(c->r[26]+0x00000268u,c->r[0]); // 8017876C
L_80178770:;
  c->r[30]=0u+0x00000001u; // 80178770
L_80178774:;
  c->r[0]=R32(c->r[26]+0x00000268u); // 80178774
  cmps(c,0,(int32_t)c->r[0],2); // 80178778
  if (!crb(c,2)) { goto L_801788F0; } // 8017877C
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178780
  c->lr=0x80178788u; f_80176E14(c); // 80178784
  cmps(c,0,(int32_t)c->r[3],1); // 80178788
  if (!crb(c,2)) { goto L_801788F0; } // 8017878C
  c->r[0]=R32(c->r[13]+0xFFFFA200u); // 80178790
  cmps(c,0,(int32_t)c->r[0],0); // 80178794
  if (!crb(c,2)) { goto L_801788F0; } // 80178798
  c->r[3]=R32(c->r[13]+0xFFFFA1F8u); // 8017879C
  c->r[4]=R32(c->r[26]+0x00000260u); // 801787A0
  c->r[0]=R32(c->r[3]+0x00000024u); // 801787A4
  cmpu(c,0,c->r[0],c->r[4]); // 801787A8
  if (!crb(c,2)) { goto L_801788F0; } // 801787AC
  c->r[0]=R32(c->r[26]+0x000003A4u); // 801787B0
  c->r[28]=0u+0x00000000u; // 801787B4
  c->r[29]=0u+0x00000000u; // 801787B8
  cmps(c,0,(int32_t)c->r[0],1); // 801787BC
  if (!crb(c,2)) { goto L_801787DC; } // 801787C0
  c->r[4]=0u+0x00000001u; // 801787C4
  c->lr=0x801787CCu; f_801763DC(c); // 801787C8
  c->f[31]=c->f[1]; // 801787CC
  c->r[0]=0u+0x00000000u; // 801787D0
  W32(c->r[26]+0x000003A4u,c->r[0]); // 801787D4
  goto L_801787E0; // 801787D8
L_801787DC:;
  {uint32_t ea=c->r[4]+0x00000050u; c->f[31]=c->ps1[31]=RF32(ea);} // 801787DC
L_801787E0:;
  c->r[27]=0u+0x00000000u; // 801787E0
  c->r[31]=0u+0x00100000u; // 801787E4
L_801787E8:;
  c->r[3]=R32(c->r[26]+0x00000260u); // 801787E8
  c->lr=0x801787F0u; f_80176E1C(c); // 801787EC
  fcmp(c,0,c->f[1],c->f[31]); // 801787F0
  if (crb(c,1)) { goto L_80178898; } // 801787F4
  cmps(c,0,(int32_t)c->r[27],(int32_t)c->r[31]); // 801787F8
  if (!crb(c,0)) { goto L_80178898; } // 801787FC
  c->r[3]=R32(c->r[26]+0x00000394u); // 80178800
  c->r[0]=R32(c->r[26]+0x00000398u); // 80178804
  cmps(c,0,(int32_t)c->r[3],(int32_t)c->r[0]); // 80178808
  if (!crb(c,0)) { goto L_80178898; } // 8017880C
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178810
  c->lr=0x80178818u; f_801767D0(c); // 80178814
  cmps(c,0,(int32_t)c->r[3],0); // 80178818
  if (crb(c,2)) { goto L_80178898; } // 8017881C
  c->r[0]=R32(c->r[26]+0x00000394u); // 80178820
  c->r[6]=R32(c->r[3]+0x00000014u); // 80178824
  c->r[4]=R32(c->r[26]+0x00000390u); // 80178828
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 8017882C
  c->r[5]=R32(c->r[3]+0x00000018u); // 80178830
  c->r[6]=c->r[6]+0x0000001Fu; // 80178834
  W32(c->r[4]+c->r[0],c->r[5]); // 80178838
  c->r[0]=sraw(c,c->r[6],5); // 8017883C
  c->r[4]=addc(c,c->r[0],0,c->xer_ca); // 80178840
  c->r[6]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80178844
  c->r[0]=R32(c->r[26]+0x00000394u); // 80178848
  c->r[4]=R32(c->r[26]+0x00000390u); // 8017884C
  c->r[5]=sraw(c,c->r[6],31); // 80178850
  c->r[0]=rotl(c->r[0],4)&0xFFFFFFF0u; // 80178854
  c->r[27]=c->r[27]+c->r[6]; // 80178858
  c->r[4]=c->r[4]+c->r[0]; // 8017885C
  W32(c->r[4]+0x0000000Cu,c->r[6]); // 80178860
  W32(c->r[4]+0x00000008u,c->r[5]); // 80178864
  c->r[0]=R32(c->r[26]+0x00000394u); // 80178868
  cmps(c,0,(int32_t)c->r[0],0); // 8017886C
  if (!crb(c,2)) { goto L_8017887C; } // 80178870
  c->r[29]=R32(c->r[3]+0x00000008u); // 80178874
  c->r[28]=R32(c->r[3]+0x0000000Cu); // 80178878
L_8017887C:;
  c->r[5]=R32(c->r[26]+0x00000394u); // 8017887C
  c->r[4]=c->r[3]|c->r[3]; // 80178880
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178884
  c->r[0]=c->r[5]+0x00000001u; // 80178888
  W32(c->r[26]+0x00000394u,c->r[0]); // 8017888C
  c->lr=0x80178894u; f_801769B8(c); // 80178890
  IRQCHK(c); goto L_801787E8; // 80178894
L_80178898:;
  c->r[0]=R32(c->r[26]+0x00000394u); // 80178898
  cmps(c,0,(int32_t)c->r[0],0); // 8017889C
  if (crb(c,2)) { goto L_801788F0; } // 801788A0
  c->r[0]=0u+0x00000001u; // 801788A4
  W32(c->r[13]+0xFFFFA200u,c->r[0]); // 801788A8
  c->r[6]=c->r[28]|c->r[28]; // 801788AC
  c->r[5]=c->r[29]|c->r[29]; // 801788B0
  c->r[3]=R32(c->r[26]+0x0000026Cu); // 801788B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801788B8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801788BC
  c->ctr=c->r[12]; // 801788C0
  if (true) { c->lr=0x801788C8u; dispatch(c,c->ctr); } // 801788C4
  c->r[3]=R32(c->r[26]+0x0000026Cu); // 801788C8
  c->r[4]=R32(c->r[26]+0x00000390u); // 801788CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801788D0
  c->r[5]=R32(c->r[26]+0x00000394u); // 801788D4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801788D8
  c->ctr=c->r[12]; // 801788DC
  if (true) { c->lr=0x801788E4u; dispatch(c,c->ctr); } // 801788E0
  c->r[0]=0u+0x00000004u; // 801788E4
  W32(c->r[26]+0x00000268u,c->r[0]); // 801788E8
  c->r[30]=0u+0x00000001u; // 801788EC
L_801788F0:;
  c->r[0]=R32(c->r[26]+0x00000268u); // 801788F0
  cmps(c,0,(int32_t)c->r[0],4); // 801788F4
  if (!crb(c,2)) { goto L_80178938; } // 801788F8
  c->r[3]=R32(c->r[26]+0x0000026Cu); // 801788FC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80178900
  c->r[12]=R32(c->r[12]+0x00000020u); // 80178904
  c->ctr=c->r[12]; // 80178908
  if (true) { c->lr=0x80178910u; dispatch(c,c->ctr); } // 8017890C
  cmps(c,0,(int32_t)c->r[3],2); // 80178910
  if (!crb(c,2)) { goto L_80178938; } // 80178914
  c->r[3]=R32(c->r[26]+0x00000260u); // 80178918
  c->lr=0x80178920u; f_80176A14(c); // 8017891C
  c->r[0]=0u+0x00000002u; // 80178920
  W32(c->r[26]+0x00000268u,c->r[0]); // 80178924
  c->r[0]=0u+0x00000000u; // 80178928
  c->r[30]=0u+0x00000001u; // 8017892C
  W32(c->r[26]+0x00000394u,c->r[0]); // 80178930
  W32(c->r[13]+0xFFFFA200u,c->r[0]); // 80178934
L_80178938:;
  c->r[3]=c->r[30]|c->r[30]; // 80178938
L_8017893C:;
  c->r[11]=c->r[1]+0x00000020u; // 8017893C
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80178940
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80178944
  c->lr=0x8017894Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80178948
  c->r[0]=R32(c->r[1]+0x00000034u); // 8017894C
  c->lr=c->r[0]; // 80178950
  c->r[1]=c->r[1]+0x00000030u; // 80178954
  return; // 80178958
}

// Create__24CriAuFileLoaderForCriFs2FRCQ215CriAuFileLoader6ConfigPv
void f_8017895C(Ctx* __restrict c) {
  trace_call(0x8017895Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8017895C
  c->r[0]=c->lr; // 80178960
  c->r[6]=0u+0x802D0000u; // 80178964
  c->r[4]=R32(c->r[3]+0x00000000u); // 80178968
  W32(c->r[1]+0x00000034u,c->r[0]); // 8017896C
  c->r[6]=c->r[6]+0x00000C30u; // 80178970
  c->r[5]=R32(c->r[3]+0x00000004u); // 80178974
  c->r[3]=0u+0x00000008u; // 80178978
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8017897C
  c->r[31]=c->r[1]|c->r[1]; // 80178980
  c->r[7]=0u+0x00000008u; // 80178984
  W32(c->r[1]+0x00000028u,c->r[30]); // 80178988
  c->lr=0x80178990u; f_8017BF5C(c); // 8017898C
  cmps(c,0,(int32_t)c->r[3],0); // 80178990
  c->r[30]=c->r[3]|c->r[3]; // 80178994
  if (crb(c,2)) { goto L_801789B4; } // 80178998
  c->r[4]=0u+0x80330000u; // 8017899C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801789A0
  c->r[4]=c->r[4]+0x00007480u; // 801789A4
  c->r[0]=0u+0x00000000u; // 801789A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801789AC
  W32(c->r[3]+0x00000004u,c->r[0]); // 801789B0
L_801789B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801789B4
  if (!crb(c,2)) { goto L_801789DC; } // 801789B8
  c->r[4]=0u+0x802D0000u; // 801789BC
  c->r[3]=0u+0x00000000u; // 801789C0
  c->r[4]=c->r[4]+0x00000C30u; // 801789C4
  c->r[5]=0u+0xFFFFFFFDu; // 801789C8
  c->r[4]=c->r[4]+0x00000019u; // 801789CC
  c->lr=0x801789D4u; f_8017968C(c); // 801789D0
  c->r[3]=0u+0x00000000u; // 801789D4
  goto L_80178A68; // 801789D8
L_801789DC:;
  c->r[3]=c->r[3]+0x00000004u; // 801789DC
  c->lr=0x801789E4u; f_80180F6C(c); // 801789E0
  cmps(c,0,(int32_t)c->r[3],0); // 801789E4
  if (!crb(c,2)) { goto L_801789F8; } // 801789E8
  c->r[0]=R32(c->r[30]+0x00000004u); // 801789EC
  cmps(c,0,(int32_t)c->r[0],0); // 801789F0
  if (!crb(c,2)) { goto L_80178A2C; } // 801789F4
L_801789F8:;
  c->r[4]=0u+0x802D0000u; // 801789F8
  c->r[3]=0u+0x00000000u; // 801789FC
  c->r[4]=c->r[4]+0x00000C30u; // 80178A00
  c->r[4]=c->r[4]+0x00000024u; // 80178A04
  c->lr=0x80178A0Cu; f_80179434(c); // 80178A08
  c->r[3]=R32(c->r[30]+0x00000004u); // 80178A0C
  cmps(c,0,(int32_t)c->r[3],0); // 80178A10
  if (crb(c,2)) { goto L_80178A24; } // 80178A14
  c->lr=0x80178A1Cu; f_801811CC(c); // 80178A18
  c->r[0]=0u+0x00000000u; // 80178A1C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80178A20
L_80178A24:;
  c->r[0]=0u+0x00000000u; // 80178A24
  goto L_80178A30; // 80178A28
L_80178A2C:;
  c->r[0]=0u+0x00000001u; // 80178A2C
L_80178A30:;
  cmps(c,0,(int32_t)c->r[0],0); // 80178A30
  if (!crb(c,2)) { goto L_80178A64; } // 80178A34
  cmps(c,0,(int32_t)c->r[30],0); // 80178A38
  if (crb(c,2)) { goto L_80178A5C; } // 80178A3C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80178A40
  c->r[0]=0u+0x00000001u; // 80178A44
  c->r[3]=c->r[30]|c->r[30]; // 80178A48
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80178A4C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80178A50
  c->ctr=c->r[12]; // 80178A54
  if (true) { c->lr=0x80178A5Cu; dispatch(c,c->ctr); } // 80178A58
L_80178A5C:;
  c->r[3]=0u+0x00000000u; // 80178A5C
  goto L_80178A68; // 80178A60
L_80178A64:;
  c->r[3]=c->r[30]|c->r[30]; // 80178A64
L_80178A68:;
  c->r[10]=c->r[31]|c->r[31]; // 80178A68
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80178A6C
  c->r[30]=R32(c->r[10]+0x00000028u); // 80178A70
  c->r[10]=R32(c->r[1]+0x00000000u); // 80178A74
  c->r[0]=R32(c->r[10]+0x00000004u); // 80178A78
  c->r[1]=c->r[10]|c->r[10]; // 80178A7C
  c->lr=c->r[0]; // 80178A80
  return; // 80178A84
}

// Destroy__24CriAuFileLoaderForCriFs2Fv
void f_80178A88(Ctx* __restrict c) {
  trace_call(0x80178A88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178A88
  c->r[0]=c->lr; // 80178A8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178A90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178A94
  c->r[31]=c->r[3]|c->r[3]; // 80178A98
  c->r[0]=R32(c->r[3]+0x00000004u); // 80178A9C
  cmps(c,0,(int32_t)c->r[0],0); // 80178AA0
  if (crb(c,2)) { goto L_80178AB8; } // 80178AA4
  c->r[3]=c->r[0]|c->r[0]; // 80178AA8
  c->lr=0x80178AB0u; f_801811CC(c); // 80178AAC
  c->r[0]=0u+0x00000000u; // 80178AB0
  W32(c->r[31]+0x00000004u,c->r[0]); // 80178AB4
L_80178AB8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80178AB8
  if (crb(c,2)) { goto L_80178AD8; } // 80178ABC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80178AC0
  c->r[3]=c->r[31]|c->r[31]; // 80178AC4
  c->r[4]=0u+0x00000001u; // 80178AC8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80178ACC
  c->ctr=c->r[12]; // 80178AD0
  if (true) { c->lr=0x80178AD8u; dispatch(c,c->ctr); } // 80178AD4
L_80178AD8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178AD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178ADC
  c->lr=c->r[0]; // 80178AE0
  c->r[1]=c->r[1]+0x00000010u; // 80178AE4
  return; // 80178AE8
}

// __dt__24CriAuFileLoaderForCriFs2Fv
void f_80178AEC(Ctx* __restrict c) {
  trace_call(0x80178AECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178AEC
  c->r[0]=c->lr; // 80178AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80178AF4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178AF8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178AFC
  c->r[31]=c->r[3]|c->r[3]; // 80178B00
  if (crb(c,2)) { goto L_80178B18; } // 80178B04
  cmps(c,0,(int32_t)c->r[4],0); // 80178B08
  if (!crb(c,1)) { goto L_80178B18; } // 80178B0C
  c->r[4]=0u+0x00000008u; // 80178B10
  c->lr=0x80178B18u; f_8017BFE8(c); // 80178B14
L_80178B18:;
  c->r[3]=c->r[31]|c->r[31]; // 80178B18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178B1C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178B20
  c->lr=c->r[0]; // 80178B24
  c->r[1]=c->r[1]+0x00000010u; // 80178B28
  return; // 80178B2C
}

// GetFileSize__24CriAuFileLoaderForCriFs2FPvPCcPx
void f_80178B30(Ctx* __restrict c) {
  trace_call(0x80178B30u);
  c->r[3]=c->r[4]|c->r[4]; // 80178B30
  c->r[4]=c->r[5]|c->r[5]; // 80178B34
  c->r[5]=c->r[6]|c->r[6]; // 80178B38
  f_8018A53C(c); return; // 80178B3C
}

// Load__24CriAuFileLoaderForCriFs2FPvPCcPvx
void f_80178B40(Ctx* __restrict c) {
  trace_call(0x80178B40u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178B40
  c->r[0]=c->lr; // 80178B44
  c->r[9]=c->r[7]|c->r[7]; // 80178B48
  c->r[10]=c->r[8]|c->r[8]; // 80178B4C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80178B50
  W32(c->r[1]+0x00000008u,c->r[6]); // 80178B54
  W32(c->r[1]+0x00000014u,c->r[8]); // 80178B58
  c->r[8]=0u+0x00000000u; // 80178B5C
  W32(c->r[1]+0x00000010u,c->r[7]); // 80178B60
  c->r[7]=0u+0x00000000u; // 80178B64
  c->r[3]=R32(c->r[3]+0x00000004u); // 80178B68
  c->lr=0x80178B70u; f_80181414(c); // 80178B6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80178B70
  c->lr=c->r[0]; // 80178B74
  c->r[1]=c->r[1]+0x00000020u; // 80178B78
  return; // 80178B7C
}

// Stop__24CriAuFileLoaderForCriFs2Fv
void f_80178B80(Ctx* __restrict c) {
  trace_call(0x80178B80u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80178B80
  f_801820E0(c); return; // 80178B84
}

// GetStatus__24CriAuFileLoaderForCriFs2CFv
void f_80178B88(Ctx* __restrict c) {
  trace_call(0x80178B88u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178B88
  c->r[0]=c->lr; // 80178B8C
  c->r[3]=R32(c->r[3]+0x00000004u); // 80178B90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178B94
  c->r[4]=c->r[1]+0x00000008u; // 80178B98
  c->lr=0x80178BA0u; f_801821D8(c); // 80178B9C
  c->r[0]=R32(c->r[1]+0x00000008u); // 80178BA0
  cmps(c,0,(int32_t)c->r[0],0); // 80178BA4
  if (crb(c,2)) { goto L_80178BC8; } // 80178BA8
  cmps(c,0,(int32_t)c->r[0],1); // 80178BAC
  if (crb(c,2)) { goto L_80178BD0; } // 80178BB0
  cmps(c,0,(int32_t)c->r[0],2); // 80178BB4
  if (crb(c,2)) { goto L_80178BD8; } // 80178BB8
  cmps(c,0,(int32_t)c->r[0],3); // 80178BBC
  if (crb(c,2)) { goto L_80178BE0; } // 80178BC0
  goto L_80178BE8; // 80178BC4
L_80178BC8:;
  c->r[3]=0u+0x00000000u; // 80178BC8
  goto L_80178C04; // 80178BCC
L_80178BD0:;
  c->r[3]=0u+0x00000001u; // 80178BD0
  goto L_80178C04; // 80178BD4
L_80178BD8:;
  c->r[3]=0u+0x00000002u; // 80178BD8
  goto L_80178C04; // 80178BDC
L_80178BE0:;
  c->r[3]=0u+0x00000003u; // 80178BE0
  goto L_80178C04; // 80178BE4
L_80178BE8:;
  c->r[4]=0u+0x802D0000u; // 80178BE8
  c->r[3]=0u+0x00000000u; // 80178BEC
  c->r[4]=c->r[4]+0x00000C30u; // 80178BF0
  c->r[5]=0u+0xFFFFFFFFu; // 80178BF4
  c->r[4]=c->r[4]+0x0000004Du; // 80178BF8
  c->lr=0x80178C00u; f_8017968C(c); // 80178BFC
  c->r[3]=0u+0x00000003u; // 80178C00
L_80178C04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178C04
  c->lr=c->r[0]; // 80178C08
  c->r[1]=c->r[1]+0x00000010u; // 80178C0C
  return; // 80178C10
}

// Create__17CriSrVoiceManagerFP15_criheap_structR14CriSrObjMaster
void f_80178C14(Ctx* __restrict c) {
  trace_call(0x80178C14u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178C14
  c->r[0]=c->lr; // 80178C18
  c->r[5]=0u+0x802D0000u; // 80178C1C
  c->r[6]=0u+0x00000008u; // 80178C20
  W32(c->r[1]+0x00000034u,c->r[0]); // 80178C24
  c->r[0]=c->r[3]|c->r[3]; // 80178C28
  c->r[3]=0u+0x00004748u; // 80178C2C
  c->r[5]=c->r[5]+0x00000CC8u; // 80178C30
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80178C34
  c->r[31]=c->r[1]|c->r[1]; // 80178C38
  W32(c->r[1]+0x00000028u,c->r[30]); // 80178C3C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80178C40
  c->r[29]=c->r[4]|c->r[4]; // 80178C44
  c->r[4]=c->r[0]|c->r[0]; // 80178C48
  c->lr=0x80178C50u; f_8017BEDC(c); // 80178C4C
  cmps(c,0,(int32_t)c->r[3],0); // 80178C50
  c->r[30]=c->r[3]|c->r[3]; // 80178C54
  if (crb(c,2)) { goto L_80178C8C; } // 80178C58
  c->r[4]=0u+0x80330000u; // 80178C5C
  c->r[0]=0u+0x00000000u; // 80178C60
  c->r[4]=c->r[4]+0x000074B8u; // 80178C64
  W32(c->r[3]+0x00000000u,c->r[4]); // 80178C68
  W32(c->r[3]+0x00000004u,c->r[29]); // 80178C6C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80178C70
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80178C74
  W32(c->r[3]+0x00000010u,c->r[0]); // 80178C78
  W32(c->r[3]+0x00000014u,c->r[0]); // 80178C7C
  W32(c->r[3]+0x00000040u,c->r[0]); // 80178C80
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80178C84
  W32(c->r[3]+0x000023C4u,c->r[0]); // 80178C88
L_80178C8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80178C8C
  if (!crb(c,2)) { goto L_80178CB4; } // 80178C90
  c->r[4]=0u+0x802D0000u; // 80178C94
  c->r[3]=0u+0x00000000u; // 80178C98
  c->r[4]=c->r[4]+0x00000CC8u; // 80178C9C
  c->r[5]=0u+0xFFFFFFFDu; // 80178CA0
  c->r[4]=c->r[4]+0x00000012u; // 80178CA4
  c->lr=0x80178CACu; f_8017968C(c); // 80178CA8
  c->r[3]=0u+0x00000000u; // 80178CAC
  goto L_80178CF4; // 80178CB0
L_80178CB4:;
  c->r[3]=c->r[30]|c->r[30]; // 80178CB4
  c->lr=0x80178CBCu; f_80178DF0(c); // 80178CB8
  cmps(c,0,(int32_t)c->r[3],0); // 80178CBC
  if (!crb(c,2)) { goto L_80178CF0; } // 80178CC0
  cmps(c,0,(int32_t)c->r[30],0); // 80178CC4
  if (crb(c,2)) { goto L_80178CE8; } // 80178CC8
  c->r[12]=R32(c->r[30]+0x00000000u); // 80178CCC
  c->r[0]=0u+0x00000001u; // 80178CD0
  c->r[3]=c->r[30]|c->r[30]; // 80178CD4
  c->r[12]=R32(c->r[12]+0x00000008u); // 80178CD8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80178CDC
  c->ctr=c->r[12]; // 80178CE0
  if (true) { c->lr=0x80178CE8u; dispatch(c,c->ctr); } // 80178CE4
L_80178CE8:;
  c->r[3]=0u+0x00000000u; // 80178CE8
  goto L_80178CF4; // 80178CEC
L_80178CF0:;
  c->r[3]=c->r[30]|c->r[30]; // 80178CF0
L_80178CF4:;
  c->r[10]=c->r[31]|c->r[31]; // 80178CF4
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80178CF8
  c->r[30]=R32(c->r[10]+0x00000028u); // 80178CFC
  c->r[29]=R32(c->r[10]+0x00000024u); // 80178D00
  c->r[10]=R32(c->r[1]+0x00000000u); // 80178D04
  c->r[0]=R32(c->r[10]+0x00000004u); // 80178D08
  c->r[1]=c->r[10]|c->r[10]; // 80178D0C
  c->lr=c->r[0]; // 80178D10
  return; // 80178D14
}

// Destroy__17CriSrVoiceManagerFv
void f_80178D18(Ctx* __restrict c) {
  trace_call(0x80178D18u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178D18
  c->r[0]=c->lr; // 80178D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178D24
  c->r[31]=c->r[3]|c->r[3]; // 80178D28
  c->r[0]=R32(c->r[3]+0x000023C4u); // 80178D2C
  cmps(c,0,(int32_t)c->r[0],0); // 80178D30
  if (crb(c,2)) { goto L_80178D48; } // 80178D34
  c->r[3]=c->r[0]|c->r[0]; // 80178D38
  c->lr=0x80178D40u; f_8017A018(c); // 80178D3C
  c->r[0]=0u+0x00000000u; // 80178D40
  W32(c->r[31]+0x000023C4u,c->r[0]); // 80178D44
L_80178D48:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 80178D48
  cmps(c,0,(int32_t)c->r[3],0); // 80178D4C
  if (crb(c,2)) { goto L_80178D60; } // 80178D50
  c->lr=0x80178D58u; f_8017A018(c); // 80178D54
  c->r[0]=0u+0x00000000u; // 80178D58
  W32(c->r[31]+0x00000040u,c->r[0]); // 80178D5C
L_80178D60:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80178D60
  cmps(c,0,(int32_t)c->r[3],0); // 80178D64
  if (crb(c,2)) { goto L_80178D78; } // 80178D68
  c->lr=0x80178D70u; f_8017A248(c); // 80178D6C
  c->r[0]=0u+0x00000000u; // 80178D70
  W32(c->r[31]+0x00000014u,c->r[0]); // 80178D74
L_80178D78:;
  cmps(c,0,(int32_t)c->r[31],0); // 80178D78
  if (crb(c,2)) { goto L_80178D98; } // 80178D7C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80178D80
  c->r[3]=c->r[31]|c->r[31]; // 80178D84
  c->r[4]=0u+0x00000001u; // 80178D88
  c->r[12]=R32(c->r[12]+0x00000008u); // 80178D8C
  c->ctr=c->r[12]; // 80178D90
  if (true) { c->lr=0x80178D98u; dispatch(c,c->ctr); } // 80178D94
L_80178D98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178D9C
  c->lr=c->r[0]; // 80178DA0
  c->r[1]=c->r[1]+0x00000010u; // 80178DA4
  return; // 80178DA8
}

// __dt__17CriSrVoiceManagerFv
void f_80178DAC(Ctx* __restrict c) {
  trace_call(0x80178DACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178DAC
  c->r[0]=c->lr; // 80178DB0
  cmps(c,0,(int32_t)c->r[3],0); // 80178DB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80178DB8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178DBC
  c->r[31]=c->r[3]|c->r[3]; // 80178DC0
  if (crb(c,2)) { goto L_80178DD8; } // 80178DC4
  cmps(c,0,(int32_t)c->r[4],0); // 80178DC8
  if (!crb(c,1)) { goto L_80178DD8; } // 80178DCC
  c->r[4]=0u+0x00004748u; // 80178DD0
  c->lr=0x80178DD8u; f_8017BFE8(c); // 80178DD4
L_80178DD8:;
  c->r[3]=c->r[31]|c->r[31]; // 80178DD8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80178DDC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80178DE0
  c->lr=c->r[0]; // 80178DE4
  c->r[1]=c->r[1]+0x00000010u; // 80178DE8
  return; // 80178DEC
}

// Initialize__17CriSrVoiceManagerFv
void f_80178DF0(Ctx* __restrict c) {
  trace_call(0x80178DF0u);
  {uint32_t ea=c->r[1]+0xFFFFFF60u; W32(ea,c->r[1]); c->r[1]=ea;} // 80178DF0
  c->r[0]=c->lr; // 80178DF4
  c->r[4]=0u+0x00000028u; // 80178DF8
  W32(c->r[1]+0x000000A4u,c->r[0]); // 80178DFC
  W32(c->r[1]+0x0000009Cu,c->r[31]); // 80178E00
  c->r[31]=c->r[3]|c->r[3]; // 80178E04
  c->r[3]=c->r[3]+0x00000018u; // 80178E08
  W32(c->r[1]+0x00000098u,c->r[30]); // 80178E0C
  c->lr=0x80178E14u; f_8017A1F8(c); // 80178E10
  cmps(c,0,(int32_t)c->r[3],0); // 80178E14
  W32(c->r[31]+0x00000014u,c->r[3]); // 80178E18
  if (!crb(c,2)) { goto L_80178E70; } // 80178E1C
  c->r[3]=R32(c->r[31]+0x000023C4u); // 80178E20
  cmps(c,0,(int32_t)c->r[3],0); // 80178E24
  if (crb(c,2)) { goto L_80178E38; } // 80178E28
  c->lr=0x80178E30u; f_8017A018(c); // 80178E2C
  c->r[0]=0u+0x00000000u; // 80178E30
  W32(c->r[31]+0x000023C4u,c->r[0]); // 80178E34
L_80178E38:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 80178E38
  cmps(c,0,(int32_t)c->r[3],0); // 80178E3C
  if (crb(c,2)) { goto L_80178E50; } // 80178E40
  c->lr=0x80178E48u; f_8017A018(c); // 80178E44
  c->r[0]=0u+0x00000000u; // 80178E48
  W32(c->r[31]+0x00000040u,c->r[0]); // 80178E4C
L_80178E50:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80178E50
  cmps(c,0,(int32_t)c->r[3],0); // 80178E54
  if (crb(c,2)) { goto L_80178E68; } // 80178E58
  c->lr=0x80178E60u; f_8017A248(c); // 80178E5C
  c->r[0]=0u+0x00000000u; // 80178E60
  W32(c->r[31]+0x00000014u,c->r[0]); // 80178E64
L_80178E68:;
  c->r[3]=0u+0x00000000u; // 80178E68
  goto L_80179054; // 80178E6C
L_80178E70:;
  c->r[3]=c->r[1]+0x00000060u; // 80178E70
  c->r[4]=0u+0x00000000u; // 80178E74
  c->r[5]=0u+0x0000002Cu; // 80178E78
  c->lr=0x80178E80u; f_80004714(c); // 80178E7C
  c->r[9]=R32(c->r[2]+0xFFFFB4DCu); // 80178E80
  c->r[12]=0u+0x80180000u; // 80178E84
  c->r[12]=c->r[12]+0xFFFF91E0u; // 80178E88
  c->r[8]=R32(c->r[1]+0x0000007Cu); // 80178E8C
  c->r[7]=R32(c->r[1]+0x00000080u); // 80178E90
  c->r[11]=0u+0x80180000u; // 80178E94
  c->r[11]=c->r[11]+0xFFFF928Cu; // 80178E98
  c->r[6]=R32(c->r[1]+0x00000084u); // 80178E9C
  c->r[0]=R32(c->r[1]+0x00000088u); // 80178EA0
  c->r[10]=0u+0x80180000u; // 80178EA4
  c->r[10]=c->r[10]+0xFFFF9284u; // 80178EA8
  W32(c->r[1]+0x00000060u,c->r[12]); // 80178EAC
  c->r[3]=c->r[31]+0x00000044u; // 80178EB0
  c->r[5]=c->r[1]+0x00000034u; // 80178EB4
  W32(c->r[1]+0x00000064u,c->r[31]); // 80178EB8
  c->r[4]=0u+0x00002380u; // 80178EBC
  W32(c->r[1]+0x00000070u,c->r[11]); // 80178EC0
  W32(c->r[1]+0x00000074u,c->r[31]); // 80178EC4
  W32(c->r[1]+0x00000068u,c->r[10]); // 80178EC8
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80178ECC
  W32(c->r[1]+0x00000078u,c->r[9]); // 80178ED0
  W32(c->r[1]+0x00000034u,c->r[12]); // 80178ED4
  W32(c->r[1]+0x00000038u,c->r[31]); // 80178ED8
  W32(c->r[1]+0x0000003Cu,c->r[10]); // 80178EDC
  W32(c->r[1]+0x00000040u,c->r[31]); // 80178EE0
  W32(c->r[1]+0x00000044u,c->r[11]); // 80178EE4
  W32(c->r[1]+0x00000048u,c->r[31]); // 80178EE8
  W32(c->r[1]+0x0000004Cu,c->r[9]); // 80178EEC
  W32(c->r[1]+0x00000050u,c->r[8]); // 80178EF0
  W32(c->r[1]+0x00000054u,c->r[7]); // 80178EF4
  W32(c->r[1]+0x00000058u,c->r[6]); // 80178EF8
  W32(c->r[1]+0x0000005Cu,c->r[0]); // 80178EFC
  c->lr=0x80178F04u; f_80179F40(c); // 80178F00
  cmps(c,0,(int32_t)c->r[3],0); // 80178F04
  W32(c->r[31]+0x00000040u,c->r[3]); // 80178F08
  if (!crb(c,2)) { goto L_80178F60; } // 80178F0C
  c->r[3]=R32(c->r[31]+0x000023C4u); // 80178F10
  cmps(c,0,(int32_t)c->r[3],0); // 80178F14
  if (crb(c,2)) { goto L_80178F28; } // 80178F18
  c->lr=0x80178F20u; f_8017A018(c); // 80178F1C
  c->r[0]=0u+0x00000000u; // 80178F20
  W32(c->r[31]+0x000023C4u,c->r[0]); // 80178F24
L_80178F28:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 80178F28
  cmps(c,0,(int32_t)c->r[3],0); // 80178F2C
  if (crb(c,2)) { goto L_80178F40; } // 80178F30
  c->lr=0x80178F38u; f_8017A018(c); // 80178F34
  c->r[0]=0u+0x00000000u; // 80178F38
  W32(c->r[31]+0x00000040u,c->r[0]); // 80178F3C
L_80178F40:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80178F40
  cmps(c,0,(int32_t)c->r[3],0); // 80178F44
  if (crb(c,2)) { goto L_80178F58; } // 80178F48
  c->lr=0x80178F50u; f_8017A248(c); // 80178F4C
  c->r[0]=0u+0x00000000u; // 80178F50
  W32(c->r[31]+0x00000014u,c->r[0]); // 80178F54
L_80178F58:;
  c->r[3]=0u+0x00000000u; // 80178F58
  goto L_80179054; // 80178F5C
L_80178F60:;
  c->r[4]=0u+0x0000000Cu; // 80178F60
  c->lr=0x80178F68u; f_8017A2EC(c); // 80178F64
  c->r[3]=c->r[1]+0x00000060u; // 80178F68
  c->r[4]=0u+0x00000000u; // 80178F6C
  c->r[5]=0u+0x0000002Cu; // 80178F70
  c->lr=0x80178F78u; f_80004714(c); // 80178F74
  c->r[9]=R32(c->r[2]+0xFFFFB4D8u); // 80178F78
  c->r[11]=0u+0x80180000u; // 80178F7C
  c->r[30]=0u+0x00000000u; // 80178F80
  c->r[8]=R32(c->r[1]+0x0000007Cu); // 80178F84
  c->r[11]=c->r[11]+0xFFFF91B0u; // 80178F88
  c->r[7]=R32(c->r[1]+0x00000080u); // 80178F8C
  c->r[6]=R32(c->r[1]+0x00000084u); // 80178F90
  c->r[10]=0u+0x80180000u; // 80178F94
  c->r[10]=c->r[10]+0xFFFF91D8u; // 80178F98
  c->r[0]=R32(c->r[1]+0x00000088u); // 80178F9C
  W32(c->r[1]+0x00000060u,c->r[11]); // 80178FA0
  c->r[3]=c->r[31]+0x000023C8u; // 80178FA4
  c->r[5]=c->r[1]+0x00000008u; // 80178FA8
  c->r[4]=0u+0x00002380u; // 80178FAC
  W32(c->r[1]+0x00000064u,c->r[31]); // 80178FB0
  W32(c->r[1]+0x00000070u,c->r[30]); // 80178FB4
  W32(c->r[1]+0x00000074u,c->r[30]); // 80178FB8
  W32(c->r[1]+0x00000068u,c->r[10]); // 80178FBC
  W32(c->r[1]+0x0000006Cu,c->r[31]); // 80178FC0
  W32(c->r[1]+0x00000078u,c->r[9]); // 80178FC4
  W32(c->r[1]+0x00000008u,c->r[11]); // 80178FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80178FCC
  W32(c->r[1]+0x00000010u,c->r[10]); // 80178FD0
  W32(c->r[1]+0x00000014u,c->r[31]); // 80178FD4
  W32(c->r[1]+0x00000018u,c->r[30]); // 80178FD8
  W32(c->r[1]+0x0000001Cu,c->r[30]); // 80178FDC
  W32(c->r[1]+0x00000020u,c->r[9]); // 80178FE0
  W32(c->r[1]+0x00000024u,c->r[8]); // 80178FE4
  W32(c->r[1]+0x00000028u,c->r[7]); // 80178FE8
  W32(c->r[1]+0x0000002Cu,c->r[6]); // 80178FEC
  W32(c->r[1]+0x00000030u,c->r[0]); // 80178FF0
  c->lr=0x80178FF8u; f_80179F40(c); // 80178FF4
  cmps(c,0,(int32_t)c->r[3],0); // 80178FF8
  W32(c->r[31]+0x000023C4u,c->r[3]); // 80178FFC
  if (!crb(c,2)) { goto L_80179048; } // 80179000
  if (crb(c,2)) { goto L_80179010; } // 80179004
  c->lr=0x8017900Cu; f_8017A018(c); // 80179008
  W32(c->r[31]+0x000023C4u,c->r[30]); // 8017900C
L_80179010:;
  c->r[3]=R32(c->r[31]+0x00000040u); // 80179010
  cmps(c,0,(int32_t)c->r[3],0); // 80179014
  if (crb(c,2)) { goto L_80179028; } // 80179018
  c->lr=0x80179020u; f_8017A018(c); // 8017901C
  c->r[0]=0u+0x00000000u; // 80179020
  W32(c->r[31]+0x00000040u,c->r[0]); // 80179024
L_80179028:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80179028
  cmps(c,0,(int32_t)c->r[3],0); // 8017902C
  if (crb(c,2)) { goto L_80179040; } // 80179030
  c->lr=0x80179038u; f_8017A248(c); // 80179034
  c->r[0]=0u+0x00000000u; // 80179038
  W32(c->r[31]+0x00000014u,c->r[0]); // 8017903C
L_80179040:;
  c->r[3]=0u+0x00000000u; // 80179040
  goto L_80179054; // 80179044
L_80179048:;
  c->r[4]=0u+0x0000000Cu; // 80179048
  c->lr=0x80179050u; f_8017A2EC(c); // 8017904C
  c->r[3]=0u+0x00000001u; // 80179050
L_80179054:;
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80179054
  c->r[31]=R32(c->r[1]+0x0000009Cu); // 80179058
  c->r[30]=R32(c->r[1]+0x00000098u); // 8017905C
  c->lr=c->r[0]; // 80179060
  c->r[1]=c->r[1]+0x000000A0u; // 80179064
  return; // 80179068
}

// ExecuteMain__17CriSrVoiceManagerFv
void f_8017906C(Ctx* __restrict c) {
  trace_call(0x8017906Cu);
  c->r[3]=R32(c->r[3]+0x00000040u); // 8017906C
  f_8017A0A8(c); return; // 80179070
}

// AddSrVoice__17CriSrVoiceManagerFP10CriSrVoice
void f_80179074(Ctx* __restrict c) {
  trace_call(0x80179074u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80179074
  c->r[0]=c->lr; // 80179078
  W32(c->r[1]+0x00000024u,c->r[0]); // 8017907C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80179080
  W32(c->r[1]+0x00000018u,c->r[30]); // 80179084
  c->r[30]=c->r[4]|c->r[4]; // 80179088
  W32(c->r[1]+0x00000014u,c->r[29]); // 8017908C
  c->r[29]=c->r[3]|c->r[3]; // 80179090
  c->r[31]=R32(c->r[3]+0x0000000Cu); // 80179094
  cmps(c,0,(int32_t)c->r[31],0); // 80179098
  if (crb(c,2)) { goto L_801790E0; } // 8017909C
  c->r[0]=R32(c->r[4]+0x00000000u); // 801790A0
  cmps(c,0,(int32_t)c->r[0],0); // 801790A4
  if (!crb(c,2)) { goto L_801790B8; } // 801790A8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801790AC
  cmps(c,0,(int32_t)c->r[0],0); // 801790B0
  if (crb(c,2)) { goto L_801790C8; } // 801790B4
L_801790B8:;
  c->r[4]=0u+0x80330000u; // 801790B8
  c->r[3]=0u+0x00000000u; // 801790BC
  c->r[4]=c->r[4]+0x00000FECu; // 801790C0
  c->lr=0x801790C8u; f_80179434(c); // 801790C4
L_801790C8:;
  W32(c->r[30]+0x00000000u,c->r[31]); // 801790C8
  c->r[0]=R32(c->r[31]+0x00000004u); // 801790CC
  W32(c->r[30]+0x00000004u,c->r[0]); // 801790D0
  W32(c->r[31]+0x00000004u,c->r[30]); // 801790D4
  W32(c->r[29]+0x0000000Cu,c->r[30]); // 801790D8
  goto L_80179104; // 801790DC
L_801790E0:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 801790E0
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801790E4
  cmps(c,0,(int32_t)c->r[0],0); // 801790E8
  if (crb(c,2)) { goto L_80179100; } // 801790EC
  c->r[4]=0u+0x80330000u; // 801790F0
  c->r[3]=0u+0x00000000u; // 801790F4
  c->r[4]=c->r[4]+0x00000FC4u; // 801790F8
  c->lr=0x80179100u; f_80179434(c); // 801790FC
L_80179100:;
  W32(c->r[29]+0x00000008u,c->r[30]); // 80179100
L_80179104:;
  c->r[3]=R32(c->r[29]+0x00000010u); // 80179104
  c->r[0]=c->r[3]+0x00000001u; // 80179108
  W32(c->r[29]+0x00000010u,c->r[0]); // 8017910C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80179110
  c->r[30]=R32(c->r[1]+0x00000018u); // 80179114
  c->r[29]=R32(c->r[1]+0x00000014u); // 80179118
  c->r[0]=R32(c->r[1]+0x00000024u); // 8017911C
  c->lr=c->r[0]; // 80179120
  c->r[1]=c->r[1]+0x00000020u; // 80179124
  return; // 80179128
}

// DeleteSrVoice__17CriSrVoiceManagerFP10CriSrVoice
void f_8017912C(Ctx* __restrict c) {
  trace_call(0x8017912Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8017912C
  if (!crb(c,2)) { goto L_80179144; } // 80179130
  c->r[4]=0u+0x80330000u; // 80179134
  c->r[3]=0u+0x00000000u; // 80179138
  c->r[4]=c->r[4]+0x00000C2Cu; // 8017913C
  f_80179434(c); return; // 80179140
L_80179144:;
  c->r[0]=R32(c->r[3]+0x00000008u); // 80179144
  cmpu(c,0,c->r[0],c->r[4]); // 80179148
  if (!crb(c,2)) { goto L_80179158; } // 8017914C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80179150
  W32(c->r[3]+0x00000008u,c->r[0]); // 80179154
L_80179158:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80179158
  cmpu(c,0,c->r[0],c->r[4]); // 8017915C
  if (!crb(c,2)) { goto L_8017916C; } // 80179160
  c->r[0]=R32(c->r[4]+0x00000000u); // 80179164
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80179168
L_8017916C:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 8017916C
  cmps(c,0,(int32_t)c->r[5],0); // 80179170
  if (crb(c,2)) { goto L_80179180; } // 80179174
  c->r[0]=R32(c->r[4]+0x00000004u); // 80179178
  W32(c->r[5]+0x00000004u,c->r[0]); // 8017917C
L_80179180:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 80179180
  cmps(c,0,(int32_t)c->r[5],0); // 80179184
  if (crb(c,2)) { goto L_80179194; } // 80179188
  c->r[0]=R32(c->r[4]+0x00000000u); // 8017918C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80179190
L_80179194:;
  c->r[0]=0u+0x00000000u; // 80179194
  W32(c->r[4]+0x00000004u,c->r[0]); // 80179198
  W32(c->r[4]+0x00000000u,c->r[0]); // 8017919C
  c->r[4]=R32(c->r[3]+0x00000010u); // 801791A0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801791A4
  W32(c->r[3]+0x00000010u,c->r[0]); // 801791A8
  return; // 801791AC
}

// SignalingServerProcessCallback__17CriSrVoiceManagerFPv
void f_801791B0(Ctx* __restrict c) {
  trace_call(0x801791B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801791B0
  c->r[0]=c->lr; // 801791B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801791B8
  c->r[3]=R32(c->r[3]+0x00000040u); // 801791BC
  c->lr=0x801791C4u; f_8017A0A8(c); // 801791C0
  c->r[0]=R32(c->r[1]+0x00000014u); // 801791C4
  c->r[3]=0u+0x00000000u; // 801791C8
  c->lr=c->r[0]; // 801791CC
  c->r[1]=c->r[1]+0x00000010u; // 801791D0
  return; // 801791D4
}

// SignalingServerWaitCallback__17CriSrVoiceManagerFPv
void f_801791D8(Ctx* __restrict c) {
  trace_call(0x801791D8u);
  c->r[3]=0u+0x00000010u; // 801791D8
  f_8017A4A0(c); return; // 801791DC
}

// ProcessServerProcessCallback__17CriSrVoiceManagerFPv
void f_801791E0(Ctx* __restrict c) {
  trace_call(0x801791E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801791E0
  c->r[0]=c->lr; // 801791E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801791E8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801791EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 801791F0
  c->r[30]=c->r[3]|c->r[3]; // 801791F4
  c->r[3]=R32(c->r[3]+0x00000004u); // 801791F8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801791FC
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80179200
  c->ctr=c->r[12]; // 80179204
  if (true) { c->lr=0x8017920Cu; dispatch(c,c->ctr); } // 80179208
  c->r[3]=R32(c->r[30]+0x00000004u); // 8017920C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80179210
  c->r[12]=R32(c->r[12]+0x00000014u); // 80179214
  c->ctr=c->r[12]; // 80179218
  if (true) { c->lr=0x80179220u; dispatch(c,c->ctr); } // 8017921C
  c->lr=0x80179224u; f_80177ACC(c); // 80179220
  c->r[31]=R32(c->r[30]+0x00000008u); // 80179224
  goto L_80179238; // 80179228
L_8017922C:;
  c->r[3]=c->r[31]|c->r[31]; // 8017922C
  c->lr=0x80179234u; f_801682F8(c); // 80179230
  c->r[31]=R32(c->r[31]+0x00000004u); // 80179234
L_80179238:;
  cmps(c,0,(int32_t)c->r[31],0); // 80179238
  if (!crb(c,2)) { IRQCHK(c); goto L_8017922C; } // 8017923C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80179240
  c->r[12]=R32(c->r[3]+0x00000000u); // 80179244
  c->r[12]=R32(c->r[12]+0x00000018u); // 80179248
  c->ctr=c->r[12]; // 8017924C
  if (true) { c->lr=0x80179254u; dispatch(c,c->ctr); } // 80179250
  c->r[3]=R32(c->r[30]+0x00000004u); // 80179254
  c->r[12]=R32(c->r[3]+0x00000000u); // 80179258
  c->r[12]=R32(c->r[12]+0x00000010u); // 8017925C
  c->ctr=c->r[12]; // 80179260
  if (true) { c->lr=0x80179268u; dispatch(c,c->ctr); } // 80179264
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80179268
  c->r[3]=0u+0x00000000u; // 8017926C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80179270
  c->r[0]=R32(c->r[1]+0x00000014u); // 80179274
  c->lr=c->r[0]; // 80179278
  c->r[1]=c->r[1]+0x00000010u; // 8017927C
  return; // 80179280
}

// ProcessServerWaitCallback__17CriSrVoiceManagerFPv
void f_80179284(Ctx* __restrict c) {
  trace_call(0x80179284u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80179284
  f_8017A254(c); return; // 80179288
}

// ProcessServerSignalCallback__17CriSrVoiceManagerFPv
void f_8017928C(Ctx* __restrict c) {
  trace_call(0x8017928Cu);
  c->r[3]=R32(c->r[3]+0x00000014u); // 8017928C
  f_8017A2A8(c); return; // 80179290
}

