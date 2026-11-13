#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// GetNumberOfAisacs__17CriAuPlayerLocWiiFR8CriError
void f_80145A74(Ctx* __restrict c) {
  trace_call(0x80145A74u);
  f_80157458(c); return; // 80145A74
}

// GetAisacControlName__17CriAuPlayerLocWiiFUlR8CriError
void f_80145A78(Ctx* __restrict c) {
  trace_call(0x80145A78u);
  f_80157468(c); return; // 80145A78
}

// AttachAisac__17CriAuPlayerLocWiiFPCcUlR8CriError
void f_80145A7C(Ctx* __restrict c) {
  trace_call(0x80145A7Cu);
  f_801574C4(c); return; // 80145A7C
}

// AttachAisac__17CriAuPlayerLocWiiFPCcUlP13CriAuCueSheetR8CriError
void f_80145A80(Ctx* __restrict c) {
  trace_call(0x80145A80u);
  f_801577A8(c); return; // 80145A80
}

// DetachAisac__17CriAuPlayerLocWiiFUlR8CriError
void f_80145A84(Ctx* __restrict c) {
  trace_call(0x80145A84u);
  f_80157A58(c); return; // 80145A84
}

// GetCueName__17CriAuPlayerLocWiiFR8CriError
void f_80145A88(Ctx* __restrict c) {
  trace_call(0x80145A88u);
  f_80157D70(c); return; // 80145A88
}

// GetSynthName__17CriAuPlayerLocWiiFR8CriError
void f_80145A8C(Ctx* __restrict c) {
  trace_call(0x80145A8Cu);
  f_80157DC8(c); return; // 80145A8C
}

// GetCueId__17CriAuPlayerLocWiiFR8CriError
void f_80145A90(Ctx* __restrict c) {
  trace_call(0x80145A90u);
  f_80157E20(c); return; // 80145A90
}

// GetUserData__17CriAuPlayerLocWiiFR8CriError
void f_80145A94(Ctx* __restrict c) {
  trace_call(0x80145A94u);
  f_80157E78(c); return; // 80145A94
}

// ResetParameters__17CriAuPlayerLocWiiFR8CriError
void f_80145A98(Ctx* __restrict c) {
  trace_call(0x80145A98u);
  f_80158058(c); return; // 80145A98
}

// ResetCueParameters__17CriAuPlayerLocWiiFR8CriError
void f_80145A9C(Ctx* __restrict c) {
  trace_call(0x80145A9Cu);
  f_80158198(c); return; // 80145A9C
}

// SetParameters__17CriAuPlayerLocWiiFPCQ211CriAuPlayer10ParametersR8CriError
void f_80145AA0(Ctx* __restrict c) {
  trace_call(0x80145AA0u);
  f_801582A4(c); return; // 80145AA0
}

// GetBufferedTime__17CriAuPlayerLocWiiFR8CriError
void f_80145AA4(Ctx* __restrict c) {
  trace_call(0x80145AA4u);
  f_801582E0(c); return; // 80145AA4
}

// GetNumPlayedSamples__17CriAuPlayerLocWiiFR8CriError
void f_80145AA8(Ctx* __restrict c) {
  trace_call(0x80145AA8u);
  f_801582FC(c); return; // 80145AA8
}

// SetAutoLoop__17CriAuPlayerLocWiiFlR8CriError
void f_80145AAC(Ctx* __restrict c) {
  trace_call(0x80145AACu);
  f_801583D0(c); return; // 80145AAC
}

// GetAutoLoop__17CriAuPlayerLocWiiFR8CriError
void f_80145AB0(Ctx* __restrict c) {
  trace_call(0x80145AB0u);
  f_801583E0(c); return; // 80145AB0
}

// InvertSourceChannel__17CriAuPlayerLocWiiFQ211CriAuPlayer10InvertModeR8CriError
void f_80145AB4(Ctx* __restrict c) {
  trace_call(0x80145AB4u);
  f_801583F0(c); return; // 80145AB4
}

// GetPlaybackPosition__17CriAuPlayerLocWiiCFRUlRUlR8CriError
void f_80145AB8(Ctx* __restrict c) {
  trace_call(0x80145AB8u);
  f_801588CC(c); return; // 80145AB8
}

// GetTime__17CriAuPlayerLocWiiCFRUlRUl
void f_80145ABC(Ctx* __restrict c) {
  trace_call(0x80145ABCu);
  f_8015892C(c); return; // 80145ABC
}

// GetTotalTime__17CriAuPlayerLocWiiCFRUlRUl
void f_80145AC0(Ctx* __restrict c) {
  trace_call(0x80145AC0u);
  f_80158A10(c); return; // 80145AC0
}

// @2044@SetParameters__17CriAuPlayerLocWiiFPCQ211CriAuPlayer10ParametersR8CriError
void f_80145AC4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145AC4
  f_80145AA0(c); return; // 80145AC8
}

// @2044@GetTotalTime__17CriAuPlayerLocWiiCFRUlRUl
void f_80145ACC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145ACC
  f_80145AC0(c); return; // 80145AD0
}

// @2044@GetTime__17CriAuPlayerLocWiiCFRUlRUl
void f_80145AD4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145AD4
  f_80145ABC(c); return; // 80145AD8
}

// @2044@GetPlaybackPosition__17CriAuPlayerLocWiiCFRUlRUlR8CriError
void f_80145ADC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145ADC
  f_80145AB8(c); return; // 80145AE0
}

// @2044@GetNumPlayedSamples__17CriAuPlayerLocWiiFR8CriError
void f_80145AE4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145AE4
  f_80145AA8(c); return; // 80145AE8
}

// @2044@GetBufferedTime__17CriAuPlayerLocWiiFR8CriError
void f_80145AEC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145AEC
  f_80145AA4(c); return; // 80145AF0
}

// @2044@InvertSourceChannel__17CriAuPlayerLocWiiFQ211CriAuPlayer10InvertModeR8CriError
void f_80145AF4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145AF4
  f_80145AB4(c); return; // 80145AF8
}

// @2044@GetAutoLoop__17CriAuPlayerLocWiiFR8CriError
void f_80145AFC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145AFC
  f_80145AB0(c); return; // 80145B00
}

// @2044@SetAutoLoop__17CriAuPlayerLocWiiFlR8CriError
void f_80145B04(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B04
  f_80145AAC(c); return; // 80145B08
}

// @2044@GetUserData__17CriAuPlayerLocWiiFR8CriError
void f_80145B0C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B0C
  f_80145A94(c); return; // 80145B10
}

// @2044@GetCueId__17CriAuPlayerLocWiiFR8CriError
void f_80145B14(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B14
  f_80145A90(c); return; // 80145B18
}

// @2044@GetSynthName__17CriAuPlayerLocWiiFR8CriError
void f_80145B1C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B1C
  f_80145A8C(c); return; // 80145B20
}

// @2044@GetCueName__17CriAuPlayerLocWiiFR8CriError
void f_80145B24(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B24
  f_80145A88(c); return; // 80145B28
}

// @2044@DetachAisac__17CriAuPlayerLocWiiFUlR8CriError
void f_80145B2C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B2C
  f_80145A84(c); return; // 80145B30
}

// @2044@AttachAisac__17CriAuPlayerLocWiiFPCcUlR8CriError
void f_80145B34(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B34
  f_80145A7C(c); return; // 80145B38
}

// @2044@AttachAisac__17CriAuPlayerLocWiiFPCcUlP13CriAuCueSheetR8CriError
void f_80145B3C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B3C
  f_80145A80(c); return; // 80145B40
}

// @2044@GetAisacControlName__17CriAuPlayerLocWiiFUlR8CriError
void f_80145B44(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B44
  f_80145A78(c); return; // 80145B48
}

// @2044@GetNumberOfAisacs__17CriAuPlayerLocWiiFR8CriError
void f_80145B4C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B4C
  f_80145A74(c); return; // 80145B50
}

// @2044@GetAisacValue__17CriAuPlayerLocWiiFPCcQ25CriAu14AisacGraphTypeR8CriError
void f_80145B54(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B54
  f_80145A70(c); return; // 80145B58
}

// @2044@SetAisacRandomRange__17CriAuPlayerLocWiiFPCcffR8CriError
void f_80145B5C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B5C
  f_80145A6C(c); return; // 80145B60
}

// @2044@SetAisac__17CriAuPlayerLocWiiFPCcfR8CriError
void f_80145B64(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B64
  f_80145A68(c); return; // 80145B68
}

// @2044@SetPriority__17CriAuPlayerLocWiiFlR8CriError
void f_80145B6C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B6C
  f_80145A64(c); return; // 80145B70
}

// @2044@SetPan3dVolume__17CriAuPlayerLocWiiFffR8CriError
void f_80145B74(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B74
  f_80145A60(c); return; // 80145B78
}

// @2044@SetPan3dInteriorDistance__17CriAuPlayerLocWiiFffR8CriError
void f_80145B7C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B7C
  f_80145A5C(c); return; // 80145B80
}

// @2044@SetPan3dAngle__17CriAuPlayerLocWiiFffR8CriError
void f_80145B84(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B84
  f_80145A58(c); return; // 80145B88
}

// @2044@SetWetSendLevel__17CriAuPlayerLocWiiFUlfR8CriError
void f_80145B8C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B8C
  f_80145A50(c); return; // 80145B90
}

// @2044@SetWetSendLevel__17CriAuPlayerLocWiiFUlffR8CriError
void f_80145B94(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B94
  f_80145A54(c); return; // 80145B98
}

// @2044@SetDrySendLevel__17CriAuPlayerLocWiiFRC14CriAuSendLevelR8CriError
void f_80145B9C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145B9C
  f_80145A40(c); return; // 80145BA0
}

// @2044@SetDrySendLevel__17CriAuPlayerLocWiiFRC14CriAuSendLevelRC14CriAuSendLevelR8CriError
void f_80145BA4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BA4
  f_80145A44(c); return; // 80145BA8
}

// @2044@SetDrySendLevel__17CriAuPlayerLocWiiFUlfR8CriError
void f_80145BAC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BAC
  f_80145A48(c); return; // 80145BB0
}

// @2044@SetDrySendLevel__17CriAuPlayerLocWiiFUlffR8CriError
void f_80145BB4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BB4
  f_80145A4C(c); return; // 80145BB8
}

// @2044@SetFilterCutoffHigh__17CriAuPlayerLocWiiFffR8CriError
void f_80145BBC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BBC
  f_80145A3C(c); return; // 80145BC0
}

// @2044@SetFilterCutoffLow__17CriAuPlayerLocWiiFffR8CriError
void f_80145BC4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BC4
  f_80145A38(c); return; // 80145BC8
}

// @2044@SetFilterCutoffFrequency__17CriAuPlayerLocWiiFffR8CriError
void f_80145BCC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BCC
  f_80145A34(c); return; // 80145BD0
}

// @2044@SetPitch__17CriAuPlayerLocWiiFfR8CriError
void f_80145BD4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BD4
  f_80145A2C(c); return; // 80145BD8
}

// @2044@SetPitch__17CriAuPlayerLocWiiFffR8CriError
void f_80145BDC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BDC
  f_80145A30(c); return; // 80145BE0
}

// @2044@SetVolume__17CriAuPlayerLocWiiFfR8CriError
void f_80145BE4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BE4
  f_80145A24(c); return; // 80145BE8
}

// @2044@SetVolume__17CriAuPlayerLocWiiFffR8CriError
void f_80145BEC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BEC
  f_80145A28(c); return; // 80145BF0
}

// @2044@IsPaused__17CriAuPlayerLocWiiFR8CriError
void f_80145BF4(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BF4
  f_80145A20(c); return; // 80145BF8
}

// @2044@Pause__17CriAuPlayerLocWiiFlR8CriError
void f_80145BFC(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145BFC
  f_80145A1C(c); return; // 80145C00
}

// @2044@Stop__17CriAuPlayerLocWiiFR8CriError
void f_80145C04(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C04
  f_80145A00(c); return; // 80145C08
}

// @2044@Stop__17CriAuPlayerLocWiiFQ211CriAuPlayer8StopModeR8CriError
void f_80145C0C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C0C
  f_80145A18(c); return; // 80145C10
}

// @2044@Update__17CriAuPlayerLocWiiFR8CriError
void f_80145C14(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C14
  f_801459FC(c); return; // 80145C18
}

// @2044@Play__17CriAuPlayerLocWiiFR8CriError
void f_80145C1C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C1C
  f_801459F8(c); return; // 80145C20
}

// @2044@ResetCueParameters__17CriAuPlayerLocWiiFR8CriError
void f_80145C24(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C24
  f_80145A9C(c); return; // 80145C28
}

// @2044@ResetParameters__17CriAuPlayerLocWiiFR8CriError
void f_80145C2C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C2C
  f_80145A98(c); return; // 80145C30
}

// @2044@ReleaseCue__17CriAuPlayerLocWiiFR8CriError
void f_80145C34(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C34
  f_801459F4(c); return; // 80145C38
}

// @2044@SetCueByIndex__17CriAuPlayerLocWiiFUlR8CriError
void f_80145C3C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C3C
  f_801459EC(c); return; // 80145C40
}

// @2044@SetCueByIndex__17CriAuPlayerLocWiiFUlP13CriAuCueSheetR8CriError
void f_80145C44(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C44
  f_801459F0(c); return; // 80145C48
}

// @2044@SetCueById__17CriAuPlayerLocWiiFUlR8CriError
void f_80145C4C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C4C
  f_801459E4(c); return; // 80145C50
}

// @2044@SetCueById__17CriAuPlayerLocWiiFUlP13CriAuCueSheetR8CriError
void f_80145C54(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C54
  f_801459E8(c); return; // 80145C58
}

// @2044@SetCue__17CriAuPlayerLocWiiFPCcR8CriError
void f_80145C5C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C5C
  f_801459D8(c); return; // 80145C60
}

// @2044@SetCue__17CriAuPlayerLocWiiFPCcP13CriAuCueSheetR8CriError
void f_80145C64(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C64
  f_801459DC(c); return; // 80145C68
}

// @2044@SetCue__17CriAuPlayerLocWiiFP8CriAuCueR8CriError
void f_80145C6C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C6C
  f_801459E0(c); return; // 80145C70
}

// @2044@GetStatus__17CriAuPlayerLocWiiCFR8CriError
void f_80145C74(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C74
  f_801459D4(c); return; // 80145C78
}

// @2044@Destroy__17CriAuPlayerLocWiiFR8CriError
void f_80145C7C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C7C
  f_80145940(c); return; // 80145C80
}

// @2044@__dt__17CriAuPlayerLocWiiFv
void f_80145C84(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C84
  f_80145754(c); return; // 80145C88
}

// @2044@SetPan3dMode_WII__17CriAuPlayerLocWiiFQ214CriAuPlayerWii9Pan3dModeR8CriError
void f_80145C8C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C8C
  f_801459C4(c); return; // 80145C90
}

// @2044@SetOutputDeviceLevel_WII__17CriAuPlayerLocWiiFUlfR8CriError
void f_80145C94(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C94
  f_8014595C(c); return; // 80145C98
}

// @2044@SetOutputDevice_WII__17CriAuPlayerLocWiiFUlR8CriError
void f_80145C9C(Ctx* __restrict c) {
  c->r[3]=c->r[3]+0xFFFFF804u; // 80145C9C
  f_8014594C(c); return; // 80145CA0
}

// Initialize__15CriAuAisacGraphFRC15CriAuTblIgrItem
void f_80145CA4(Ctx* __restrict c) {
  trace_call(0x80145CA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145CA4
  c->r[0]=c->lr; // 80145CA8
  W32(c->r[1]+0x00000064u,c->r[0]); // 80145CAC
  c->r[11]=c->r[1]+0x00000040u; // 80145CB0
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[31]);} // 80145CB4
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,31,ea,0,0);} // 80145CB8
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[30]);} // 80145CBC
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,30,ea,0,0);} // 80145CC0
  c->lr=0x80145CC8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80145CC4
  c->r[25]=c->r[4]|c->r[4]; // 80145CC8
  c->r[31]=c->r[3]|c->r[3]; // 80145CCC
  c->r[3]=R32(c->r[3]+0x00000000u); // 80145CD0
  c->r[4]=0u+0x00000001u; // 80145CD4
  c->r[5]=R32(c->r[25]+0x00000004u); // 80145CD8
  c->r[6]=R32(c->r[25]+0x00000008u); // 80145CDC
  c->lr=0x80145CE4u; f_8017F37C(c); // 80145CE0
  cmps(c,0,(int32_t)c->r[3],0); // 80145CE4
  c->r[27]=c->r[3]|c->r[3]; // 80145CE8
  if (!crb(c,2)) { goto L_80145D34; } // 80145CEC
  c->r[4]=0u+0x802D0000u; // 80145CF0
  c->r[3]=0u+0x00000000u; // 80145CF4
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80145CF8
  c->r[5]=0u+0xFFFFFFFDu; // 80145CFC
  c->r[4]=c->r[4]+0x0000001Cu; // 80145D00
  c->lr=0x80145D08u; f_8017968C(c); // 80145D04
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80145D08
  cmps(c,0,(int32_t)c->r[4],0); // 80145D0C
  if (crb(c,2)) { goto L_80145D24; } // 80145D10
  c->r[3]=R32(c->r[31]+0x00000000u); // 80145D14
  c->lr=0x80145D1Cu; f_8017C228(c); // 80145D18
  c->r[0]=0u+0x00000000u; // 80145D1C
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80145D20
L_80145D24:;
  c->r[0]=0u+0x00000000u; // 80145D24
  W32(c->r[31]+0x00000008u,c->r[0]); // 80145D28
  c->r[3]=0u+0x00000000u; // 80145D2C
  goto L_80145ECC; // 80145D30
L_80145D34:;
  c->lr=0x80145D38u; f_8017A730(c); // 80145D34
  W32(c->r[31]+0x00000008u,c->r[3]); // 80145D38
  c->r[3]=c->r[27]|c->r[27]; // 80145D3C
  c->lr=0x80145D44u; f_8017BE04(c); // 80145D40
  c->r[0]=R32(c->r[31]+0x00000008u); // 80145D44
  c->r[29]=0u+0x802D0000u; // 80145D48
  c->r[29]=c->r[29]+0xFFFFDA80u; // 80145D4C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80145D50
  c->r[4]=rotl(c->r[0],3)&0xFFFFFFF8u; // 80145D54
  c->r[6]=0u+0x00000004u; // 80145D58
  c->r[5]=c->r[29]+0x00000028u; // 80145D5C
  c->r[7]=0u+0x00000002u; // 80145D60
  c->lr=0x80145D68u; f_8017C15C(c); // 80145D64
  cmps(c,0,(int32_t)c->r[3],0); // 80145D68
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80145D6C
  if (!crb(c,2)) { goto L_80145DB0; } // 80145D70
  c->r[4]=c->r[29]+0x0000003Du; // 80145D74
  c->r[3]=0u+0x00000000u; // 80145D78
  c->r[5]=0u+0xFFFFFFFDu; // 80145D7C
  c->lr=0x80145D84u; f_8017968C(c); // 80145D80
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80145D84
  cmps(c,0,(int32_t)c->r[4],0); // 80145D88
  if (crb(c,2)) { goto L_80145DA0; } // 80145D8C
  c->r[3]=R32(c->r[31]+0x00000000u); // 80145D90
  c->lr=0x80145D98u; f_8017C228(c); // 80145D94
  c->r[0]=0u+0x00000000u; // 80145D98
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80145D9C
L_80145DA0:;
  c->r[0]=0u+0x00000000u; // 80145DA0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80145DA4
  c->r[3]=0u+0x00000000u; // 80145DA8
  goto L_80145ECC; // 80145DAC
L_80145DB0:;
  c->r[3]=R32(c->r[31]+0x00000000u); // 80145DB0
  c->r[4]=0u+0x00000001u; // 80145DB4
  c->r[5]=R32(c->r[25]+0x00000004u); // 80145DB8
  c->r[6]=R32(c->r[25]+0x00000008u); // 80145DBC
  c->lr=0x80145DC4u; f_8017F37C(c); // 80145DC0
  cmps(c,0,(int32_t)c->r[3],0); // 80145DC4
  c->r[27]=c->r[3]|c->r[3]; // 80145DC8
  if (!crb(c,2)) { goto L_80145E0C; } // 80145DCC
  c->r[4]=c->r[29]+0x00000049u; // 80145DD0
  c->r[3]=0u+0x00000000u; // 80145DD4
  c->r[5]=0u+0xFFFFFFFDu; // 80145DD8
  c->lr=0x80145DE0u; f_8017968C(c); // 80145DDC
  c->r[4]=R32(c->r[31]+0x0000000Cu); // 80145DE0
  cmps(c,0,(int32_t)c->r[4],0); // 80145DE4
  if (crb(c,2)) { goto L_80145DFC; } // 80145DE8
  c->r[3]=R32(c->r[31]+0x00000000u); // 80145DEC
  c->lr=0x80145DF4u; f_8017C228(c); // 80145DF0
  c->r[0]=0u+0x00000000u; // 80145DF4
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80145DF8
L_80145DFC:;
  c->r[0]=0u+0x00000000u; // 80145DFC
  W32(c->r[31]+0x00000008u,c->r[0]); // 80145E00
  c->r[3]=0u+0x00000000u; // 80145E04
  goto L_80145ECC; // 80145E08
L_80145E0C:;
  {uint32_t ea=c->r[2]+0xFFFFB2E8u; c->f[30]=RF64(ea);} // 80145E0C
  c->r[26]=0u+0x00000000u; // 80145E10
  {uint32_t ea=c->r[2]+0xFFFFB2E0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80145E14
  c->r[28]=0u+0x00000000u; // 80145E18
  c->r[30]=0u+0x43300000u; // 80145E1C
  goto L_80145EB4; // 80145E20
L_80145E24:;
  c->r[3]=c->r[27]|c->r[27]; // 80145E24
  c->r[4]=c->r[26]|c->r[26]; // 80145E28
  c->r[5]=0u+0x00000000u; // 80145E2C
  c->lr=0x80145E34u; f_8017AC94(c); // 80145E30
  c->r[29]=c->r[3]|c->r[3]; // 80145E34
  c->r[3]=c->r[27]|c->r[27]; // 80145E38
  c->r[4]=c->r[26]|c->r[26]; // 80145E3C
  c->r[5]=0u+0x00000001u; // 80145E40
  c->lr=0x80145E48u; f_8017AC94(c); // 80145E44
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80145E48
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80145E4C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80145E50
  {uint32_t ea=c->r[25]+0x0000000Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80145E54
  W32(c->r[1]+0x00000008u,c->r[30]); // 80145E58
  c->r[26]=c->r[26]+0x00000001u; // 80145E5C
  {uint32_t ea=c->r[25]+0x00000010u; c->f[4]=c->ps1[4]=RF32(ea);} // 80145E60
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 80145E64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80145E68
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[4]); // 80145E6C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[30]); // 80145E70
  c->r[3]=R32(c->r[31]+0x0000000Cu); // 80145E74
  W32(c->r[1]+0x00000010u,c->r[30]); // 80145E78
  {uint32_t ea=c->r[25]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 80145E7C
  c->f[5]=c->ps1[5]=S(c->f[1]/c->f[31]); // 80145E80
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 80145E84
  {uint32_t ea=c->r[25]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80145E88
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[30]); // 80145E8C
  c->f[3]=c->ps1[3]=S(std::fma(c->f[5],c->f[3],c->f[4])); // 80145E90
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80145E94
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[31]); // 80145E98
  {uint32_t ea=c->r[3]+c->r[28]; WF32(ea,c->f[3]);} // 80145E9C
  c->r[0]=R32(c->r[31]+0x0000000Cu); // 80145EA0
  c->r[3]=c->r[0]+c->r[28]; // 80145EA4
  c->r[28]=c->r[28]+0x00000008u; // 80145EA8
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[0],c->f[1])); // 80145EAC
  {uint32_t ea=c->r[3]+0x00000004u; WF32(ea,c->f[0]);} // 80145EB0
L_80145EB4:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80145EB4
  cmpu(c,0,c->r[26],c->r[0]); // 80145EB8
  if (crb(c,0)) { IRQCHK(c); goto L_80145E24; } // 80145EBC
  c->r[3]=c->r[27]|c->r[27]; // 80145EC0
  c->lr=0x80145EC8u; f_8017BE04(c); // 80145EC4
  c->r[3]=0u+0x00000001u; // 80145EC8
L_80145ECC:;
  c->r[11]=c->r[1]+0x00000040u; // 80145ECC
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,31,ea,0,0);} // 80145ED0
  {uint32_t ea=c->r[1]+0x00000050u; c->f[31]=RF64(ea);} // 80145ED4
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,30,ea,0,0);} // 80145ED8
  {uint32_t ea=c->r[1]+0x00000040u; c->f[30]=RF64(ea);} // 80145EDC
  c->lr=0x80145EE4u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80145EE0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80145EE4
  c->lr=c->r[0]; // 80145EE8
  c->r[1]=c->r[1]+0x00000060u; // 80145EEC
  return; // 80145EF0
}

// Destroy__17CriAuAisacPatternFv
void f_80145EF4(Ctx* __restrict c) {
  trace_call(0x80145EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145EF4
  c->r[0]=c->lr; // 80145EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80145EFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80145F00
  c->r[31]=c->r[3]|c->r[3]; // 80145F04
  c->r[12]=R32(c->r[3]+0x00000000u); // 80145F08
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80145F0C
  c->ctr=c->r[12]; // 80145F10
  if (true) { c->lr=0x80145F18u; dispatch(c,c->ctr); } // 80145F14
  cmps(c,0,(int32_t)c->r[31],0); // 80145F18
  if (crb(c,2)) { goto L_80145F38; } // 80145F1C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80145F20
  c->r[3]=c->r[31]|c->r[31]; // 80145F24
  c->r[4]=0u+0x00000001u; // 80145F28
  c->r[12]=R32(c->r[12]+0x00000014u); // 80145F2C
  c->ctr=c->r[12]; // 80145F30
  if (true) { c->lr=0x80145F38u; dispatch(c,c->ctr); } // 80145F34
L_80145F38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80145F38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80145F3C
  c->lr=c->r[0]; // 80145F40
  c->r[1]=c->r[1]+0x00000010u; // 80145F44
  return; // 80145F48
}

// __dt__17CriAuAisacPatternFv
void f_80145F4C(Ctx* __restrict c) {
  trace_call(0x80145F4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145F4C
  c->r[0]=c->lr; // 80145F50
  cmps(c,0,(int32_t)c->r[3],0); // 80145F54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80145F58
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80145F5C
  c->r[31]=c->r[3]|c->r[3]; // 80145F60
  if (crb(c,2)) { goto L_80145F78; } // 80145F64
  cmps(c,0,(int32_t)c->r[4],0); // 80145F68
  if (!crb(c,1)) { goto L_80145F78; } // 80145F6C
  c->r[4]=0u+0x0000001Cu; // 80145F70
  c->lr=0x80145F78u; f_8017BFE8(c); // 80145F74
L_80145F78:;
  c->r[3]=c->r[31]|c->r[31]; // 80145F78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80145F7C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80145F80
  c->lr=c->r[0]; // 80145F84
  c->r[1]=c->r[1]+0x00000010u; // 80145F88
  return; // 80145F8C
}

// Initialize__17CriAuAisacPatternFRC17CriAuTblAisacItem
void f_80145F90(Ctx* __restrict c) {
  trace_call(0x80145F90u);
  {uint32_t ea=c->r[1]+0xFFFFFF80u; W32(ea,c->r[1]); c->r[1]=ea;} // 80145F90
  c->r[0]=c->lr; // 80145F94
  W32(c->r[1]+0x00000084u,c->r[0]); // 80145F98
  {uint32_t ea=c->r[1]+0x00000064u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80145F9C
  c->r[26]=c->r[4]|c->r[4]; // 80145FA0
  c->r[27]=c->r[3]|c->r[3]; // 80145FA4
  c->r[5]=R32(c->r[26]+0x0000000Cu); // 80145FA8
  c->r[6]=R32(c->r[26]+0x00000010u); // 80145FAC
  c->r[31]=c->r[1]|c->r[1]; // 80145FB0
  c->r[4]=0u+0x00000001u; // 80145FB4
  c->r[3]=R32(c->r[3]+0x00000004u); // 80145FB8
  c->lr=0x80145FC0u; f_8017F37C(c); // 80145FBC
  cmps(c,0,(int32_t)c->r[3],0); // 80145FC0
  c->r[25]=c->r[3]|c->r[3]; // 80145FC4
  if (!crb(c,2)) { goto L_80146000; } // 80145FC8
  c->r[4]=0u+0x802D0000u; // 80145FCC
  c->r[3]=0u+0x00000000u; // 80145FD0
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80145FD4
  c->r[5]=0u+0xFFFFFFFDu; // 80145FD8
  c->r[4]=c->r[4]+0x00000055u; // 80145FDC
  c->lr=0x80145FE4u; f_8017968C(c); // 80145FE0
  c->r[12]=R32(c->r[27]+0x00000000u); // 80145FE4
  c->r[3]=c->r[27]|c->r[27]; // 80145FE8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80145FEC
  c->ctr=c->r[12]; // 80145FF0
  if (true) { c->lr=0x80145FF8u; dispatch(c,c->ctr); } // 80145FF4
  c->r[3]=0u+0x00000000u; // 80145FF8
  goto L_801462A4; // 80145FFC
L_80146000:;
  c->lr=0x80146004u; f_8017A730(c); // 80146000
  W32(c->r[27]+0x00000014u,c->r[3]); // 80146004
  c->r[3]=c->r[25]|c->r[25]; // 80146008
  c->lr=0x80146010u; f_8017BE04(c); // 8014600C
  c->r[0]=R32(c->r[27]+0x00000014u); // 80146010
  cmps(c,0,(int32_t)c->r[0],0); // 80146014
  if (!crb(c,2)) { goto L_80146024; } // 80146018
  c->r[3]=0u+0x00000001u; // 8014601C
  goto L_801462A4; // 80146020
L_80146024:;
  c->r[28]=0u+0x802D0000u; // 80146024
  c->r[3]=R32(c->r[27]+0x00000004u); // 80146028
  c->r[28]=c->r[28]+0xFFFFDA80u; // 8014602C
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80146030
  c->r[5]=c->r[28]+0x00000061u; // 80146034
  c->r[6]=0u+0x00000004u; // 80146038
  c->r[7]=0u+0x00000002u; // 8014603C
  c->lr=0x80146044u; f_8017C15C(c); // 80146040
  cmps(c,0,(int32_t)c->r[3],0); // 80146044
  W32(c->r[27]+0x00000018u,c->r[3]); // 80146048
  if (!crb(c,2)) { goto L_8014607C; } // 8014604C
  c->r[4]=c->r[28]+0x00000076u; // 80146050
  c->r[3]=0u+0x00000000u; // 80146054
  c->r[5]=0u+0xFFFFFFFDu; // 80146058
  c->lr=0x80146060u; f_8017968C(c); // 8014605C
  c->r[12]=R32(c->r[27]+0x00000000u); // 80146060
  c->r[3]=c->r[27]|c->r[27]; // 80146064
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80146068
  c->ctr=c->r[12]; // 8014606C
  if (true) { c->lr=0x80146074u; dispatch(c,c->ctr); } // 80146070
  c->r[3]=0u+0x00000000u; // 80146074
  goto L_801462A4; // 80146078
L_8014607C:;
  c->r[5]=0u+0x00000000u; // 8014607C
  c->r[4]=0u+0x00000000u; // 80146080
  goto L_8014609C; // 80146084
L_80146088:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 80146088
  c->r[0]=0u+0x00000000u; // 8014608C
  c->r[5]=c->r[5]+0x00000001u; // 80146090
  W32(c->r[3]+c->r[4],c->r[0]); // 80146094
  c->r[4]=c->r[4]+0x00000004u; // 80146098
L_8014609C:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 8014609C
  cmpu(c,0,c->r[5],c->r[0]); // 801460A0
  if (crb(c,0)) { IRQCHK(c); goto L_80146088; } // 801460A4
  c->r[3]=R32(c->r[27]+0x00000004u); // 801460A8
  c->r[4]=0u+0x00000001u; // 801460AC
  c->r[5]=R32(c->r[26]+0x0000000Cu); // 801460B0
  c->r[6]=R32(c->r[26]+0x00000010u); // 801460B4
  c->lr=0x801460BCu; f_8017F37C(c); // 801460B8
  cmps(c,0,(int32_t)c->r[3],0); // 801460BC
  c->r[29]=c->r[3]|c->r[3]; // 801460C0
  if (!crb(c,2)) { goto L_801460FC; } // 801460C4
  c->r[4]=0u+0x802D0000u; // 801460C8
  c->r[3]=0u+0x00000000u; // 801460CC
  c->r[4]=c->r[4]+0xFFFFDA80u; // 801460D0
  c->r[5]=0u+0xFFFFFFFDu; // 801460D4
  c->r[4]=c->r[4]+0x00000082u; // 801460D8
  c->lr=0x801460E0u; f_8017968C(c); // 801460DC
  c->r[12]=R32(c->r[27]+0x00000000u); // 801460E0
  c->r[3]=c->r[27]|c->r[27]; // 801460E4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801460E8
  c->ctr=c->r[12]; // 801460EC
  if (true) { c->lr=0x801460F4u; dispatch(c,c->ctr); } // 801460F0
  c->r[3]=0u+0x00000000u; // 801460F4
  goto L_801462A4; // 801460F8
L_801460FC:;
  c->r[28]=0u+0x00000000u; // 801460FC
  c->r[30]=0u+0x00000000u; // 80146100
  goto L_8014628C; // 80146104
L_80146108:;
  c->r[3]=c->r[29]|c->r[29]; // 80146108
  c->r[4]=c->r[28]|c->r[28]; // 8014610C
  c->r[5]=0u+0x00000000u; // 80146110
  c->lr=0x80146118u; f_8017AB54(c); // 80146114
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80146118
  W32(c->r[31]+0x00000038u,c->r[0]); // 8014611C
  c->r[3]=c->r[29]|c->r[29]; // 80146120
  c->r[4]=c->r[28]|c->r[28]; // 80146124
  c->r[5]=0u+0x00000001u; // 80146128
  c->lr=0x80146130u; f_8017AFA4(c); // 8014612C
  {uint32_t ea=c->r[31]+0x00000044u; WF32(ea,c->f[1]);} // 80146130
  c->r[3]=c->r[29]|c->r[29]; // 80146134
  c->r[4]=c->r[28]|c->r[28]; // 80146138
  c->r[5]=0u+0x00000002u; // 8014613C
  c->lr=0x80146144u; f_8017AFA4(c); // 80146140
  {uint32_t ea=c->r[31]+0x00000048u; WF32(ea,c->f[1]);} // 80146144
  c->r[3]=c->r[29]|c->r[29]; // 80146148
  c->r[4]=c->r[28]|c->r[28]; // 8014614C
  c->r[5]=0u+0x00000003u; // 80146150
  c->lr=0x80146158u; f_8017AFA4(c); // 80146154
  {uint32_t ea=c->r[31]+0x0000004Cu; WF32(ea,c->f[1]);} // 80146158
  c->r[3]=c->r[29]|c->r[29]; // 8014615C
  c->r[4]=c->r[28]|c->r[28]; // 80146160
  c->r[5]=0u+0x00000004u; // 80146164
  c->lr=0x8014616Cu; f_8017AFA4(c); // 80146168
  {uint32_t ea=c->r[31]+0x00000050u; WF32(ea,c->f[1]);} // 8014616C
  c->r[3]=c->r[29]|c->r[29]; // 80146170
  c->r[4]=c->r[28]|c->r[28]; // 80146174
  c->r[6]=c->r[31]+0x00000020u; // 80146178
  c->r[5]=0u+0x00000005u; // 8014617C
  c->lr=0x80146184u; f_8017A738(c); // 80146180
  c->r[3]=R32(c->r[31]+0x00000028u); // 80146184
  c->r[6]=0u+0x802D0000u; // 80146188
  c->r[0]=R32(c->r[31]+0x0000002Cu); // 8014618C
  c->r[6]=c->r[6]+0xFFFFDA80u; // 80146190
  W32(c->r[31]+0x0000003Cu,c->r[3]); // 80146194
  c->r[3]=0u+0x00000010u; // 80146198
  c->r[5]=0u+0x00000002u; // 8014619C
  c->r[7]=0u+0x00000004u; // 801461A0
  W32(c->r[31]+0x00000040u,c->r[0]); // 801461A4
  c->r[26]=R32(c->r[27]+0x00000004u); // 801461A8
  c->r[4]=c->r[26]|c->r[26]; // 801461AC
  c->lr=0x801461B4u; f_8017BF5C(c); // 801461B0
  cmps(c,0,(int32_t)c->r[3],0); // 801461B4
  c->r[25]=c->r[3]|c->r[3]; // 801461B8
  if (crb(c,2)) { goto L_801461DC; } // 801461BC
  W32(c->r[3]+0x00000000u,c->r[26]); // 801461C0
  c->r[0]=0u+0x00000000u; // 801461C4
  c->r[4]=R32(c->r[31]+0x00000038u); // 801461C8
  W32(c->r[3]+0x00000004u,c->r[4]); // 801461CC
  W32(c->r[3]+0x00000008u,c->r[0]); // 801461D0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801461D4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801461D8
L_801461DC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801461DC
  if (!crb(c,2)) { goto L_80146204; } // 801461E0
  c->r[4]=0u+0x802D0000u; // 801461E4
  c->r[3]=0u+0x00000000u; // 801461E8
  c->r[4]=c->r[4]+0xFFFFDA80u; // 801461EC
  c->r[5]=0u+0xFFFFFFFDu; // 801461F0
  c->r[4]=c->r[4]+0x00000010u; // 801461F4
  c->lr=0x801461FCu; f_8017968C(c); // 801461F8
  c->r[25]=0u+0x00000000u; // 801461FC
  goto L_80146230; // 80146200
L_80146204:;
  c->r[3]=c->r[25]|c->r[25]; // 80146204
  c->r[4]=c->r[31]+0x00000038u; // 80146208
  c->lr=0x80146210u; f_80145CA4(c); // 8014620C
  cmps(c,0,(int32_t)c->r[3],0); // 80146210
  if (!crb(c,2)) { goto L_80146230; } // 80146214
  cmps(c,0,(int32_t)c->r[25],0); // 80146218
  if (crb(c,2)) { goto L_8014622C; } // 8014621C
  c->r[3]=c->r[25]|c->r[25]; // 80146220
  c->r[4]=0u+0x00000010u; // 80146224
  c->lr=0x8014622Cu; f_8017BFE8(c); // 80146228
L_8014622C:;
  c->r[25]=0u+0x00000000u; // 8014622C
L_80146230:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 80146230
  W32(c->r[3]+c->r[30],c->r[25]); // 80146234
  c->r[3]=R32(c->r[27]+0x00000018u); // 80146238
  c->r[0]=R32(c->r[3]+c->r[30]); // 8014623C
  cmps(c,0,(int32_t)c->r[0],0); // 80146240
  if (!crb(c,2)) { goto L_80146284; } // 80146244
  c->r[4]=0u+0x802D0000u; // 80146248
  c->r[3]=0u+0x00000000u; // 8014624C
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80146250
  c->r[5]=0u+0xFFFFFFFDu; // 80146254
  c->r[4]=c->r[4]+0x0000008Eu; // 80146258
  c->lr=0x80146260u; f_8017968C(c); // 8014625C
  c->r[3]=c->r[29]|c->r[29]; // 80146260
  c->lr=0x80146268u; f_8017BE04(c); // 80146264
  c->r[12]=R32(c->r[27]+0x00000000u); // 80146268
  c->r[3]=c->r[27]|c->r[27]; // 8014626C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80146270
  c->ctr=c->r[12]; // 80146274
  if (true) { c->lr=0x8014627Cu; dispatch(c,c->ctr); } // 80146278
  c->r[3]=0u+0x00000000u; // 8014627C
  goto L_801462A4; // 80146280
L_80146284:;
  c->r[30]=c->r[30]+0x00000004u; // 80146284
  c->r[28]=c->r[28]+0x00000001u; // 80146288
L_8014628C:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 8014628C
  cmpu(c,0,c->r[28],c->r[0]); // 80146290
  if (crb(c,0)) { IRQCHK(c); goto L_80146108; } // 80146294
  c->r[3]=c->r[29]|c->r[29]; // 80146298
  c->lr=0x801462A0u; f_8017BE04(c); // 8014629C
  c->r[3]=0u+0x00000001u; // 801462A0
L_801462A4:;
  c->r[10]=c->r[31]|c->r[31]; // 801462A4
  {uint32_t ea=c->r[10]+0x00000064u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801462A8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801462AC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801462B0
  c->r[1]=c->r[10]|c->r[10]; // 801462B4
  c->lr=c->r[0]; // 801462B8
  return; // 801462BC
}

// Finalize__17CriAuAisacPatternFv
void f_801462C0(Ctx* __restrict c) {
  trace_call(0x801462C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801462C0
  c->r[0]=c->lr; // 801462C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801462C8
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801462CC
  c->r[27]=c->r[3]|c->r[3]; // 801462D0
  c->r[0]=R32(c->r[3]+0x00000018u); // 801462D4
  cmps(c,0,(int32_t)c->r[0],0); // 801462D8
  if (crb(c,2)) { goto L_80146358; } // 801462DC
  c->r[28]=0u+0x00000000u; // 801462E0
  c->r[30]=0u+0x00000000u; // 801462E4
  c->r[31]=0u+0x00000000u; // 801462E8
  goto L_80146338; // 801462EC
L_801462F0:;
  c->r[3]=R32(c->r[27]+0x00000018u); // 801462F0
  c->r[29]=R32(c->r[3]+c->r[30]); // 801462F4
  cmps(c,0,(int32_t)c->r[29],0); // 801462F8
  if (crb(c,2)) { goto L_80146330; } // 801462FC
  c->r[4]=R32(c->r[29]+0x0000000Cu); // 80146300
  cmps(c,0,(int32_t)c->r[4],0); // 80146304
  if (crb(c,2)) { goto L_80146318; } // 80146308
  c->r[3]=R32(c->r[29]+0x00000000u); // 8014630C
  c->lr=0x80146314u; f_8017C228(c); // 80146310
  W32(c->r[29]+0x0000000Cu,c->r[31]); // 80146314
L_80146318:;
  cmps(c,0,(int32_t)c->r[29],0); // 80146318
  W32(c->r[29]+0x00000008u,c->r[31]); // 8014631C
  if (crb(c,2)) { goto L_80146330; } // 80146320
  c->r[3]=c->r[29]|c->r[29]; // 80146324
  c->r[4]=0u+0x00000010u; // 80146328
  c->lr=0x80146330u; f_8017BFE8(c); // 8014632C
L_80146330:;
  c->r[30]=c->r[30]+0x00000004u; // 80146330
  c->r[28]=c->r[28]+0x00000001u; // 80146334
L_80146338:;
  c->r[0]=R32(c->r[27]+0x00000014u); // 80146338
  cmpu(c,0,c->r[28],c->r[0]); // 8014633C
  if (crb(c,0)) { IRQCHK(c); goto L_801462F0; } // 80146340
  c->r[3]=R32(c->r[27]+0x00000004u); // 80146344
  c->r[4]=R32(c->r[27]+0x00000018u); // 80146348
  c->lr=0x80146350u; f_8017C228(c); // 8014634C
  c->r[0]=0u+0x00000000u; // 80146350
  W32(c->r[27]+0x00000018u,c->r[0]); // 80146354
L_80146358:;
  c->r[0]=0u+0x00000000u; // 80146358
  W32(c->r[27]+0x00000014u,c->r[0]); // 8014635C
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80146360
  c->r[0]=R32(c->r[1]+0x00000024u); // 80146364
  c->lr=c->r[0]; // 80146368
  c->r[1]=c->r[1]+0x00000020u; // 8014636C
  return; // 80146370
}

// GetControlName__17CriAuAisacPatternCFv
void f_80146374(Ctx* __restrict c) {
  trace_call(0x80146374u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80146374
  return; // 80146378
}

// GetPatternName__17CriAuAisacPatternCFv
void f_8014637C(Ctx* __restrict c) {
  trace_call(0x8014637Cu);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 8014637C
  return; // 80146380
}

// GetInputRange__17CriAuAisacPatternCFPfPf
void f_80146384(Ctx* __restrict c) {
  trace_call(0x80146384u);
  c->r[0]=R32(c->r[3]+0x00000014u); // 80146384
  cmps(c,0,(int32_t)c->r[0],0); // 80146388
  if (!crb(c,2)) { goto L_801463A0; } // 8014638C
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146390
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 80146394
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 80146398
  return; // 8014639C
L_801463A0:;
  c->r[6]=R32(c->r[3]+0x00000018u); // 801463A0
  c->r[9]=0u+0x00000001u; // 801463A4
  c->r[8]=0u+0x00000004u; // 801463A8
  c->r[7]=R32(c->r[6]+0x00000000u); // 801463AC
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 801463B0
  {uint32_t ea=c->r[6]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801463B4
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[0]);} // 801463B8
  c->r[0]=R32(c->r[7]+0x00000008u); // 801463BC
  c->r[6]=R32(c->r[7]+0x0000000Cu); // 801463C0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801463C4
  c->r[6]=c->r[6]+c->r[0]; // 801463C8
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->f[0]=c->ps1[0]=RF32(ea);} // 801463CC
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[0]);} // 801463D0
  goto L_80146420; // 801463D4
L_801463D8:;
  c->r[6]=R32(c->r[3]+0x00000018u); // 801463D8
  {uint32_t ea=c->r[4]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 801463DC
  c->r[6]=R32(c->r[6]+c->r[8]); // 801463E0
  c->r[0]=R32(c->r[6]+0x00000008u); // 801463E4
  c->r[7]=R32(c->r[6]+0x0000000Cu); // 801463E8
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFF8u; // 801463EC
  c->r[6]=c->r[7]+c->r[0]; // 801463F0
  {uint32_t ea=c->r[7]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801463F4
  {uint32_t ea=c->r[6]+0xFFFFFFF8u; c->f[1]=c->ps1[1]=RF32(ea);} // 801463F8
  fcmp(c,0,c->f[1],c->f[0]); // 801463FC
  if (!crb(c,1)) { goto L_80146408; } // 80146400
  {uint32_t ea=c->r[4]+0x00000000u; WF32(ea,c->f[1]);} // 80146404
L_80146408:;
  {uint32_t ea=c->r[5]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146408
  fcmp(c,0,c->f[2],c->f[0]); // 8014640C
  if (!crb(c,0)) { goto L_80146418; } // 80146410
  {uint32_t ea=c->r[5]+0x00000000u; WF32(ea,c->f[2]);} // 80146414
L_80146418:;
  c->r[8]=c->r[8]+0x00000004u; // 80146418
  c->r[9]=c->r[9]+0x00000001u; // 8014641C
L_80146420:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80146420
  cmpu(c,0,c->r[9],c->r[0]); // 80146424
  if (crb(c,0)) { IRQCHK(c); goto L_801463D8; } // 80146428
  return; // 8014642C
}

// SplitName__17CriAuAisacPatternFPCcPcPc
void f_80146430(Ctx* __restrict c) {
  trace_call(0x80146430u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80146430
  c->r[0]=c->lr; // 80146434
  W32(c->r[1]+0x00000024u,c->r[0]); // 80146438
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014643C
  c->r[31]=c->r[5]|c->r[5]; // 80146440
  W32(c->r[1]+0x00000018u,c->r[30]); // 80146444
  c->r[30]=c->r[4]|c->r[4]; // 80146448
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014644C
  c->r[29]=c->r[3]|c->r[3]; // 80146450
  c->lr=0x80146458u; f_800ACEA0(c); // 80146454
  c->r[5]=c->r[30]|c->r[30]; // 80146458
  c->r[4]=c->r[29]|c->r[29]; // 8014645C
  c->r[7]=0u+0x00000000u; // 80146460
  c->r[8]=0u+0x00000000u; // 80146464
  c->ctr=c->r[3]; // 80146468
  cmpu(c,0,c->r[3],0x00000000u); // 8014646C
  if (!crb(c,1)) { goto L_80146498; } // 80146470
L_80146474:;
  c->r[6]=R8(c->r[4]+0x00000000u); // 80146474
  cmps(c,0,(int32_t)c->r[6],58); // 80146478
  if (crb(c,2)) { goto L_80146498; } // 8014647C
  W8(c->r[5]+0x00000000u,c->r[6]); // 80146480
  c->r[7]=c->r[7]+0x00000001u; // 80146484
  c->r[4]=c->r[4]+0x00000001u; // 80146488
  c->r[8]=c->r[8]+0x00000001u; // 8014648C
  c->r[5]=c->r[5]+0x00000001u; // 80146490
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80146474; } // 80146494
L_80146498:;
  c->r[0]=c->r[3]-c->r[7]; // 80146498
  c->r[4]=0u+0x00000000u; // 8014649C
  W8(c->r[30]+c->r[8],c->r[4]); // 801464A0
  c->r[4]=c->r[29]+c->r[7]; // 801464A4
  c->ctr=c->r[0]; // 801464A8
  cmpu(c,0,c->r[7],c->r[3]); // 801464AC
  if (!crb(c,0)) { goto L_801464CC; } // 801464B0
L_801464B4:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801464B4
  cmps(c,0,(int32_t)c->r[0],58); // 801464B8
  if (!crb(c,2)) { goto L_801464CC; } // 801464BC
  c->r[7]=c->r[7]+0x00000001u; // 801464C0
  c->r[4]=c->r[4]+0x00000001u; // 801464C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801464B4; } // 801464C8
L_801464CC:;
  c->r[0]=c->r[3]-c->r[7]; // 801464CC
  c->r[5]=c->r[31]|c->r[31]; // 801464D0
  c->r[4]=c->r[29]+c->r[7]; // 801464D4
  c->r[6]=0u+0x00000000u; // 801464D8
  c->ctr=c->r[0]; // 801464DC
  cmpu(c,0,c->r[7],c->r[3]); // 801464E0
  if (!crb(c,0)) { goto L_80146508; } // 801464E4
L_801464E8:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 801464E8
  cmps(c,0,(int32_t)c->r[3],58); // 801464EC
  if (crb(c,2)) { goto L_80146508; } // 801464F0
  W8(c->r[5]+0x00000000u,c->r[3]); // 801464F4
  c->r[4]=c->r[4]+0x00000001u; // 801464F8
  c->r[6]=c->r[6]+0x00000001u; // 801464FC
  c->r[5]=c->r[5]+0x00000001u; // 80146500
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801464E8; } // 80146504
L_80146508:;
  c->r[0]=0u+0x00000000u; // 80146508
  W8(c->r[31]+c->r[6],c->r[0]); // 8014650C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80146510
  c->r[30]=R32(c->r[1]+0x00000018u); // 80146514
  c->r[29]=R32(c->r[1]+0x00000014u); // 80146518
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014651C
  c->lr=c->r[0]; // 80146520
  c->r[1]=c->r[1]+0x00000020u; // 80146524
  return; // 80146528
}

// GetNumAisacFromListStr__17CriAuAisacPatternFPCc
void f_8014652C(Ctx* __restrict c) {
  trace_call(0x8014652Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014652C
  c->r[0]=c->lr; // 80146530
  cmps(c,0,(int32_t)c->r[3],0); // 80146534
  W32(c->r[1]+0x00000014u,c->r[0]); // 80146538
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014653C
  c->r[31]=c->r[3]|c->r[3]; // 80146540
  if (crb(c,2)) { goto L_80146554; } // 80146544
  c->r[0]=R8(c->r[3]+0x00000000u); // 80146548
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 8014654C
  if (!crb(c,2)) { goto L_8014655C; } // 80146550
L_80146554:;
  c->r[3]=0u+0x00000000u; // 80146554
  goto L_801465A4; // 80146558
L_8014655C:;
  c->lr=0x80146560u; f_800ACEA0(c); // 8014655C
  c->r[4]=c->r[31]|c->r[31]; // 80146560
  c->r[5]=0u+0x00000000u; // 80146564
  c->ctr=c->r[3]; // 80146568
  cmpu(c,0,c->r[3],0x00000000u); // 8014656C
  if (!crb(c,1)) { goto L_8014658C; } // 80146570
L_80146574:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80146574
  cmps(c,0,(int32_t)c->r[0],10); // 80146578
  if (!crb(c,2)) { goto L_80146584; } // 8014657C
  c->r[5]=c->r[5]+0x00000001u; // 80146580
L_80146584:;
  c->r[4]=c->r[4]+0x00000001u; // 80146584
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80146574; } // 80146588
L_8014658C:;
  c->r[3]=c->r[31]+c->r[3]; // 8014658C
  c->r[0]=R8(c->r[3]+0xFFFFFFFFu); // 80146590
  cmps(c,0,(int32_t)c->r[0],10); // 80146594
  if (crb(c,2)) { goto L_801465A0; } // 80146598
  c->r[5]=c->r[5]+0x00000001u; // 8014659C
L_801465A0:;
  c->r[3]=c->r[5]|c->r[5]; // 801465A0
L_801465A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801465A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801465A8
  c->lr=c->r[0]; // 801465AC
  c->r[1]=c->r[1]+0x00000010u; // 801465B0
  return; // 801465B4
}

// ExtractNameFromListStr__17CriAuAisacPatternFPCcUlPc
void f_801465B8(Ctx* __restrict c) {
  trace_call(0x801465B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801465B8
  c->r[0]=c->lr; // 801465BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801465C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801465C4
  c->r[31]=c->r[5]|c->r[5]; // 801465C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801465CC
  c->r[30]=c->r[4]|c->r[4]; // 801465D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801465D4
  c->r[29]=c->r[3]|c->r[3]; // 801465D8
  c->lr=0x801465E0u; f_800ACEA0(c); // 801465DC
  c->r[4]=c->r[29]|c->r[29]; // 801465E0
  c->r[6]=0u+0x00000000u; // 801465E4
  c->r[5]=0u+0x00000000u; // 801465E8
  c->ctr=c->r[3]; // 801465EC
  cmpu(c,0,c->r[3],0x00000000u); // 801465F0
  if (!crb(c,1)) { goto L_8014661C; } // 801465F4
L_801465F8:;
  cmpu(c,0,c->r[5],c->r[30]); // 801465F8
  if (crb(c,2)) { goto L_8014661C; } // 801465FC
  c->r[0]=R8(c->r[4]+0x00000000u); // 80146600
  cmps(c,0,(int32_t)c->r[0],10); // 80146604
  if (!crb(c,2)) { goto L_80146610; } // 80146608
  c->r[5]=c->r[5]+0x00000001u; // 8014660C
L_80146610:;
  c->r[6]=c->r[6]+0x00000001u; // 80146610
  c->r[4]=c->r[4]+0x00000001u; // 80146614
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801465F8; } // 80146618
L_8014661C:;
  c->r[0]=c->r[3]-c->r[6]; // 8014661C
  c->r[5]=c->r[31]|c->r[31]; // 80146620
  c->r[4]=c->r[29]+c->r[6]; // 80146624
  c->r[7]=0u+0x00000000u; // 80146628
  c->ctr=c->r[0]; // 8014662C
  cmpu(c,0,c->r[6],c->r[3]); // 80146630
  if (!crb(c,0)) { goto L_80146658; } // 80146634
L_80146638:;
  c->r[3]=R8(c->r[4]+0x00000000u); // 80146638
  cmps(c,0,(int32_t)c->r[3],10); // 8014663C
  if (crb(c,2)) { goto L_80146658; } // 80146640
  W8(c->r[5]+0x00000000u,c->r[3]); // 80146644
  c->r[4]=c->r[4]+0x00000001u; // 80146648
  c->r[7]=c->r[7]+0x00000001u; // 8014664C
  c->r[5]=c->r[5]+0x00000001u; // 80146650
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80146638; } // 80146654
L_80146658:;
  c->r[0]=0u+0x00000000u; // 80146658
  W8(c->r[31]+c->r[7],c->r[0]); // 8014665C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80146660
  c->r[30]=R32(c->r[1]+0x00000018u); // 80146664
  c->r[29]=R32(c->r[1]+0x00000014u); // 80146668
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014666C
  c->lr=c->r[0]; // 80146670
  c->r[1]=c->r[1]+0x00000020u; // 80146674
  return; // 80146678
}

// Create__25CriAuAisacPatternStandardFP15_criheap_structRC17CriAuTblAisacItem
void f_8014667C(Ctx* __restrict c) {
  trace_call(0x8014667Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014667C
  c->r[0]=c->lr; // 80146680
  c->r[5]=0u+0x802D0000u; // 80146684
  c->r[7]=0u+0x00000004u; // 80146688
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014668C
  c->r[5]=c->r[5]+0xFFFFDA80u; // 80146690
  c->r[6]=c->r[5]+0x0000009Au; // 80146694
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80146698
  c->r[31]=c->r[1]|c->r[1]; // 8014669C
  c->r[5]=0u+0x00000002u; // 801466A0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801466A4
  W32(c->r[1]+0x00000024u,c->r[29]); // 801466A8
  c->r[29]=c->r[4]|c->r[4]; // 801466AC
  W32(c->r[1]+0x00000020u,c->r[28]); // 801466B0
  c->r[28]=c->r[3]|c->r[3]; // 801466B4
  c->r[4]=c->r[28]|c->r[28]; // 801466B8
  c->r[3]=0u+0x0000001Cu; // 801466BC
  c->lr=0x801466C4u; f_8017BF5C(c); // 801466C0
  cmps(c,0,(int32_t)c->r[3],0); // 801466C4
  c->r[30]=c->r[3]|c->r[3]; // 801466C8
  if (crb(c,2)) { goto L_80146714; } // 801466CC
  c->r[5]=0u+0x80330000u; // 801466D0
  c->r[4]=0u+0x80330000u; // 801466D4
  c->r[5]=c->r[5]+0x00000840u; // 801466D8
  W32(c->r[3]+0x00000000u,c->r[5]); // 801466DC
  c->r[0]=0u+0x00000000u; // 801466E0
  c->r[4]=c->r[4]+0x00000808u; // 801466E4
  W32(c->r[3]+0x00000004u,c->r[28]); // 801466E8
  c->r[5]=R32(c->r[29]+0x00000000u); // 801466EC
  W32(c->r[3]+0x00000008u,c->r[5]); // 801466F0
  c->r[5]=R32(c->r[29]+0x00000004u); // 801466F4
  W32(c->r[3]+0x0000000Cu,c->r[5]); // 801466F8
  {uint32_t ea=c->r[29]+0x00000014u; c->f[0]=c->ps1[0]=RF32(ea);} // 801466FC
  {uint32_t ea=c->r[3]+0x00000010u; WF32(ea,c->f[0]);} // 80146700
  W32(c->r[3]+0x00000014u,c->r[0]); // 80146704
  W32(c->r[3]+0x00000018u,c->r[0]); // 80146708
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 8014670C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80146710
L_80146714:;
  cmps(c,0,(int32_t)c->r[3],0); // 80146714
  if (!crb(c,2)) { goto L_8014673C; } // 80146718
  c->r[4]=0u+0x802D0000u; // 8014671C
  c->r[3]=0u+0x00000000u; // 80146720
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80146724
  c->r[5]=0u+0xFFFFFFFDu; // 80146728
  c->r[4]=c->r[4]+0x000000A8u; // 8014672C
  c->lr=0x80146734u; f_8017968C(c); // 80146730
  c->r[3]=0u+0x00000000u; // 80146734
  goto L_8014678C; // 80146738
L_8014673C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 8014673C
  c->r[3]=c->r[30]|c->r[30]; // 80146740
  c->r[4]=c->r[29]|c->r[29]; // 80146744
  c->r[12]=R32(c->r[12]+0x00000018u); // 80146748
  c->ctr=c->r[12]; // 8014674C
  if (true) { c->lr=0x80146754u; dispatch(c,c->ctr); } // 80146750
  cmps(c,0,(int32_t)c->r[3],0); // 80146754
  if (!crb(c,2)) { goto L_80146788; } // 80146758
  cmps(c,0,(int32_t)c->r[30],0); // 8014675C
  if (crb(c,2)) { goto L_80146780; } // 80146760
  c->r[12]=R32(c->r[30]+0x00000000u); // 80146764
  c->r[0]=0u+0x00000001u; // 80146768
  c->r[3]=c->r[30]|c->r[30]; // 8014676C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80146770
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80146774
  c->ctr=c->r[12]; // 80146778
  if (true) { c->lr=0x80146780u; dispatch(c,c->ctr); } // 8014677C
L_80146780:;
  c->r[3]=0u+0x00000000u; // 80146780
  goto L_8014678C; // 80146784
L_80146788:;
  c->r[3]=c->r[30]|c->r[30]; // 80146788
L_8014678C:;
  c->r[10]=c->r[31]|c->r[31]; // 8014678C
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80146790
  c->r[30]=R32(c->r[10]+0x00000028u); // 80146794
  c->r[29]=R32(c->r[10]+0x00000024u); // 80146798
  c->r[28]=R32(c->r[10]+0x00000020u); // 8014679C
  c->r[10]=R32(c->r[1]+0x00000000u); // 801467A0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801467A4
  c->r[1]=c->r[10]|c->r[10]; // 801467A8
  c->lr=c->r[0]; // 801467AC
  return; // 801467B0
}

// __dt__25CriAuAisacPatternStandardFv
void f_801467B4(Ctx* __restrict c) {
  trace_call(0x801467B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801467B4
  c->r[0]=c->lr; // 801467B8
  cmps(c,0,(int32_t)c->r[3],0); // 801467BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801467C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801467C4
  c->r[31]=c->r[3]|c->r[3]; // 801467C8
  if (crb(c,2)) { goto L_801467E0; } // 801467CC
  cmps(c,0,(int32_t)c->r[4],0); // 801467D0
  if (!crb(c,1)) { goto L_801467E0; } // 801467D4
  c->r[4]=0u+0x0000001Cu; // 801467D8
  c->lr=0x801467E0u; f_8017BFE8(c); // 801467DC
L_801467E0:;
  c->r[3]=c->r[31]|c->r[31]; // 801467E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801467E4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801467E8
  c->lr=c->r[0]; // 801467EC
  c->r[1]=c->r[1]+0x00000010u; // 801467F0
  return; // 801467F4
}

// SetVoiceParameters__25CriAuAisacPatternStandardCFR25CriAuVoiceParameterPacketfl
void f_801467F8(Ctx* __restrict c) {
  trace_call(0x801467F8u);
  {uint32_t ea=c->r[1]+0xFFFFFF40u; W32(ea,c->r[1]); c->r[1]=ea;} // 801467F8
  c->r[0]=0u+0x00000000u; // 801467FC
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146800
  c->r[6]=0u+0x00000000u; // 80146804
  {uint32_t ea=c->r[1]+0x000000B0u; WF64(ea,c->f[31]);} // 80146808
  c->r[12]=0u+0x00000000u; // 8014680C
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80146810
  c->r[9]=0u+0x00000001u; // 80146814
  {uint32_t ea=c->r[1]+0x000000B8u; psq_store(c,31,ea,0,0);} // 80146818
  c->r[10]=0u+0x80330000u; // 8014681C
  {uint32_t ea=c->r[1]+0x000000A0u; WF64(ea,c->f[30]);} // 80146820
  {uint32_t ea=c->r[1]+0x000000A8u; psq_store(c,30,ea,0,0);} // 80146824
  {uint32_t ea=c->r[1]+0x00000090u; WF64(ea,c->f[29]);} // 80146828
  {uint32_t ea=c->r[1]+0x00000098u; psq_store(c,29,ea,0,0);} // 8014682C
  {uint32_t ea=c->r[1]+0x00000080u; WF64(ea,c->f[28]);} // 80146830
  {uint32_t ea=c->r[1]+0x00000088u; psq_store(c,28,ea,0,0);} // 80146834
  {uint32_t ea=c->r[1]+0x00000070u; WF64(ea,c->f[27]);} // 80146838
  {uint32_t ea=c->r[1]+0x00000078u; psq_store(c,27,ea,0,0);} // 8014683C
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[26]);} // 80146840
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,26,ea,0,0);} // 80146844
  W32(c->r[1]+0x0000005Cu,c->r[31]); // 80146848
  W32(c->r[1]+0x00000058u,c->r[30]); // 8014684C
  W32(c->r[1]+0x00000054u,c->r[29]); // 80146850
  W32(c->r[1]+0x00000050u,c->r[28]); // 80146854
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 80146858
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014685C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80146860
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80146864
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80146868
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014686C
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 80146870
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80146874
  goto L_80146BD8; // 80146878
L_8014687C:;
  c->r[7]=R32(c->r[3]+0x00000018u); // 8014687C
  c->r[29]=R32(c->r[7]+c->r[12]); // 80146880
  c->r[28]=R32(c->r[29]+0x0000000Cu); // 80146884
  {uint32_t ea=c->r[28]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146888
  fcmp(c,0,c->f[1],c->f[2]); // 8014688C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80146890
  if (!crb(c,2)) { goto L_801468A0; } // 80146894
  {uint32_t ea=c->r[28]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146898
  goto L_8014692C; // 8014689C
L_801468A0:;
  c->r[30]=R32(c->r[29]+0x00000008u); // 801468A0
  c->r[7]=rotl(c->r[30],3)&0xFFFFFFF8u; // 801468A4
  c->r[7]=c->r[28]+c->r[7]; // 801468A8
  {uint32_t ea=c->r[7]+0xFFFFFFF8u; c->f[2]=c->ps1[2]=RF32(ea);} // 801468AC
  fcmp(c,0,c->f[1],c->f[2]); // 801468B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801468B4
  if (!crb(c,2)) { goto L_801468C4; } // 801468B8
  {uint32_t ea=c->r[7]+0xFFFFFFFCu; c->f[2]=c->ps1[2]=RF32(ea);} // 801468BC
  goto L_8014692C; // 801468C0
L_801468C4:;
  c->r[7]=c->r[30]+0xFFFFFFFFu; // 801468C4
  c->r[8]=c->r[28]+0x00000008u; // 801468C8
  c->r[11]=0u+0x00000001u; // 801468CC
  c->r[31]=0u+0x00000008u; // 801468D0
  c->ctr=c->r[7]; // 801468D4
  cmpu(c,0,c->r[30],0x00000001u); // 801468D8
  if (!crb(c,1)) { goto L_80146900; } // 801468DC
L_801468E0:;
  {uint32_t ea=c->r[8]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 801468E0
  fcmp(c,0,c->f[1],c->f[2]); // 801468E4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801468E8
  if (crb(c,2)) { goto L_80146900; } // 801468EC
  c->r[31]=c->r[31]+0x00000008u; // 801468F0
  c->r[8]=c->r[8]+0x00000008u; // 801468F4
  c->r[11]=c->r[11]+0x00000001u; // 801468F8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801468E0; } // 801468FC
L_80146900:;
  c->r[7]=rotl(c->r[11],3)&0xFFFFFFF8u; // 80146900
  c->r[7]=c->r[28]+c->r[7]; // 80146904
  {uint32_t ea=c->r[7]+0xFFFFFFF8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146908
  {uint32_t ea=c->r[7]+0x00000000u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014690C
  c->f[3]=c->ps1[3]=S(c->f[1]-c->f[5]); // 80146910
  {uint32_t ea=c->r[7]+0xFFFFFFFCu; c->f[6]=c->ps1[6]=RF32(ea);} // 80146914
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[5]); // 80146918
  {uint32_t ea=c->r[7]+0x00000004u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014691C
  c->f[5]=c->ps1[5]=S(c->f[5]-c->f[6]); // 80146920
  c->f[2]=c->ps1[2]=S(c->f[3]/c->f[2]); // 80146924
  c->f[2]=c->ps1[2]=S(std::fma(c->f[5],c->f[2],c->f[6])); // 80146928
L_8014692C:;
  c->r[7]=R32(c->r[29]+0x00000004u); // 8014692C
  cmpu(c,0,c->r[7],0x00000018u); // 80146930
  if (crb(c,1)) { goto L_80146BD0; } // 80146934
  c->r[8]=c->r[10]+0x00000720u; // 80146938
  c->r[7]=rotl(c->r[7],2)&0xFFFFFFFCu; // 8014693C
  c->r[8]=R32(c->r[8]+c->r[7]); // 80146940
  c->ctr=c->r[8]; // 80146944
  if (true) { switch (c->ctr) { case 0x8014694Cu: goto L_8014694C; case 0x80146968u: goto L_80146968; case 0x80146984u: goto L_80146984; case 0x801469A0u: goto L_801469A0; case 0x801469CCu: goto L_801469CC; case 0x801469E8u: goto L_801469E8; case 0x801469F4u: goto L_801469F4; case 0x80146A00u: goto L_80146A00; case 0x80146A0Cu: goto L_80146A0C; case 0x80146A18u: goto L_80146A18; case 0x80146A24u: goto L_80146A24; case 0x80146A30u: goto L_80146A30; case 0x80146A3Cu: goto L_80146A3C; case 0x80146A48u: goto L_80146A48; case 0x80146A64u: goto L_80146A64; case 0x80146A80u: goto L_80146A80; case 0x80146A9Cu: goto L_80146A9C; case 0x80146AB8u: goto L_80146AB8; case 0x80146AD4u: goto L_80146AD4; case 0x80146AF0u: goto L_80146AF0; case 0x80146B0Cu: goto L_80146B0C; case 0x80146B28u: goto L_80146B28; case 0x80146B44u: goto L_80146B44; case 0x80146B60u: goto L_80146B60; case 0x80146BB8u: goto L_80146BB8; default: break; } dispatch(c,c->ctr); return; } // 80146948
L_8014694C:;
  {uint32_t ea=c->r[4]+0x00000024u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014694C
  {uint32_t ea=c->r[4]+0x00000020u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146950
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[2]); // 80146954
  c->f[3]=c->ps1[3]=S(std::fma(c->f[0],c->f[5],c->f[3])); // 80146958
  {uint32_t ea=c->r[4]+0x00000024u; WF32(ea,c->f[2]);} // 8014695C
  {uint32_t ea=c->r[4]+0x00000020u; WF32(ea,c->f[3]);} // 80146960
  goto L_80146BD0; // 80146964
L_80146968:;
  {uint32_t ea=c->r[4]+0x0000002Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80146968
  {uint32_t ea=c->r[4]+0x00000028u; c->f[5]=c->ps1[5]=RF32(ea);} // 8014696C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146970
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146974
  {uint32_t ea=c->r[4]+0x0000002Cu; WF32(ea,c->f[3]);} // 80146978
  {uint32_t ea=c->r[4]+0x00000028u; WF32(ea,c->f[2]);} // 8014697C
  goto L_80146BD0; // 80146980
L_80146984:;
  {uint32_t ea=c->r[4]+0x00000034u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146984
  {uint32_t ea=c->r[4]+0x00000030u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146988
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 8014698C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146990
  {uint32_t ea=c->r[4]+0x00000034u; WF32(ea,c->f[3]);} // 80146994
  {uint32_t ea=c->r[4]+0x00000030u; WF32(ea,c->f[2]);} // 80146998
  goto L_80146BD0; // 8014699C
L_801469A0:;
  c->f[6]=c->ps1[6]=S(c->f[4]-c->f[2]); // 801469A0
  {uint32_t ea=c->r[4]+0x00000080u; c->f[5]=c->ps1[5]=RF32(ea);} // 801469A4
  {uint32_t ea=c->r[4]+0x0000007Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 801469A8
  c->f[2]=c->ps1[2]=S(c->f[5]*c->f[4]); // 801469AC
  c->f[5]=c->ps1[5]=S(c->f[6]*c->f[5]); // 801469B0
  c->f[3]=c->ps1[3]=S(c->f[4]-c->f[3]); // 801469B4
  {uint32_t ea=c->r[4]+0x00000080u; WF32(ea,c->f[2]);} // 801469B8
  c->f[2]=c->ps1[2]=S(c->f[5]+c->f[3]); // 801469BC
  c->f[2]=c->ps1[2]=S(c->f[4]-c->f[2]); // 801469C0
  {uint32_t ea=c->r[4]+0x0000007Cu; WF32(ea,c->f[2]);} // 801469C4
  goto L_80146BD0; // 801469C8
L_801469CC:;
  {uint32_t ea=c->r[4]+0x00000078u; c->f[6]=c->ps1[6]=RF32(ea);} // 801469CC
  {uint32_t ea=c->r[4]+0x00000074u; c->f[5]=c->ps1[5]=RF32(ea);} // 801469D0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 801469D4
  c->f[2]=c->ps1[2]=S(std::fma(c->f[6],c->f[2],c->f[5])); // 801469D8
  {uint32_t ea=c->r[4]+0x00000078u; WF32(ea,c->f[3]);} // 801469DC
  {uint32_t ea=c->r[4]+0x00000074u; WF32(ea,c->f[2]);} // 801469E0
  goto L_80146BD0; // 801469E4
L_801469E8:;
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[2]);} // 801469E8
  c->r[0]=0u+0x00000001u; // 801469EC
  goto L_80146BD0; // 801469F0
L_801469F4:;
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[2]);} // 801469F4
  c->r[0]=0u+0x00000001u; // 801469F8
  goto L_80146BD0; // 801469FC
L_80146A00:;
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[2]);} // 80146A00
  c->r[0]=0u+0x00000001u; // 80146A04
  goto L_80146BD0; // 80146A08
L_80146A0C:;
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[2]);} // 80146A0C
  c->r[0]=0u+0x00000001u; // 80146A10
  goto L_80146BD0; // 80146A14
L_80146A18:;
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[2]);} // 80146A18
  c->r[0]=0u+0x00000001u; // 80146A1C
  goto L_80146BD0; // 80146A20
L_80146A24:;
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[2]);} // 80146A24
  c->r[0]=0u+0x00000001u; // 80146A28
  goto L_80146BD0; // 80146A2C
L_80146A30:;
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[2]);} // 80146A30
  c->r[0]=0u+0x00000001u; // 80146A34
  goto L_80146BD0; // 80146A38
L_80146A3C:;
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[2]);} // 80146A3C
  c->r[0]=0u+0x00000001u; // 80146A40
  goto L_80146BD0; // 80146A44
L_80146A48:;
  {uint32_t ea=c->r[4]+0x00000318u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146A48
  {uint32_t ea=c->r[4]+0x000002F8u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146A4C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146A50
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146A54
  {uint32_t ea=c->r[4]+0x00000318u; WF32(ea,c->f[3]);} // 80146A58
  {uint32_t ea=c->r[4]+0x000002F8u; WF32(ea,c->f[2]);} // 80146A5C
  goto L_80146BD0; // 80146A60
L_80146A64:;
  {uint32_t ea=c->r[4]+0x0000031Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80146A64
  {uint32_t ea=c->r[4]+0x000002FCu; c->f[5]=c->ps1[5]=RF32(ea);} // 80146A68
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146A6C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146A70
  {uint32_t ea=c->r[4]+0x0000031Cu; WF32(ea,c->f[3]);} // 80146A74
  {uint32_t ea=c->r[4]+0x000002FCu; WF32(ea,c->f[2]);} // 80146A78
  goto L_80146BD0; // 80146A7C
L_80146A80:;
  {uint32_t ea=c->r[4]+0x00000320u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146A80
  {uint32_t ea=c->r[4]+0x00000300u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146A84
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146A88
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146A8C
  {uint32_t ea=c->r[4]+0x00000320u; WF32(ea,c->f[3]);} // 80146A90
  {uint32_t ea=c->r[4]+0x00000300u; WF32(ea,c->f[2]);} // 80146A94
  goto L_80146BD0; // 80146A98
L_80146A9C:;
  {uint32_t ea=c->r[4]+0x00000324u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146A9C
  {uint32_t ea=c->r[4]+0x00000304u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146AA0
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146AA4
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146AA8
  {uint32_t ea=c->r[4]+0x00000324u; WF32(ea,c->f[3]);} // 80146AAC
  {uint32_t ea=c->r[4]+0x00000304u; WF32(ea,c->f[2]);} // 80146AB0
  goto L_80146BD0; // 80146AB4
L_80146AB8:;
  {uint32_t ea=c->r[4]+0x00000328u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146AB8
  {uint32_t ea=c->r[4]+0x00000308u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146ABC
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146AC0
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146AC4
  {uint32_t ea=c->r[4]+0x00000328u; WF32(ea,c->f[3]);} // 80146AC8
  {uint32_t ea=c->r[4]+0x00000308u; WF32(ea,c->f[2]);} // 80146ACC
  goto L_80146BD0; // 80146AD0
L_80146AD4:;
  {uint32_t ea=c->r[4]+0x0000032Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80146AD4
  {uint32_t ea=c->r[4]+0x0000030Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80146AD8
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146ADC
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146AE0
  {uint32_t ea=c->r[4]+0x0000032Cu; WF32(ea,c->f[3]);} // 80146AE4
  {uint32_t ea=c->r[4]+0x0000030Cu; WF32(ea,c->f[2]);} // 80146AE8
  goto L_80146BD0; // 80146AEC
L_80146AF0:;
  {uint32_t ea=c->r[4]+0x00000330u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146AF0
  {uint32_t ea=c->r[4]+0x00000310u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146AF4
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146AF8
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146AFC
  {uint32_t ea=c->r[4]+0x00000330u; WF32(ea,c->f[3]);} // 80146B00
  {uint32_t ea=c->r[4]+0x00000310u; WF32(ea,c->f[2]);} // 80146B04
  goto L_80146BD0; // 80146B08
L_80146B0C:;
  {uint32_t ea=c->r[4]+0x00000334u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146B0C
  {uint32_t ea=c->r[4]+0x00000314u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146B10
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146B14
  c->f[2]=c->ps1[2]=S(std::fma(c->f[2],c->f[6],c->f[5])); // 80146B18
  {uint32_t ea=c->r[4]+0x00000334u; WF32(ea,c->f[3]);} // 80146B1C
  {uint32_t ea=c->r[4]+0x00000314u; WF32(ea,c->f[2]);} // 80146B20
  goto L_80146BD0; // 80146B24
L_80146B28:;
  {uint32_t ea=c->r[4]+0x00000370u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146B28
  {uint32_t ea=c->r[4]+0x0000036Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80146B2C
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146B30
  c->f[2]=c->ps1[2]=S(std::fma(c->f[6],c->f[2],c->f[5])); // 80146B34
  {uint32_t ea=c->r[4]+0x00000370u; WF32(ea,c->f[3]);} // 80146B38
  {uint32_t ea=c->r[4]+0x0000036Cu; WF32(ea,c->f[2]);} // 80146B3C
  goto L_80146BD0; // 80146B40
L_80146B44:;
  {uint32_t ea=c->r[4]+0x00000378u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146B44
  {uint32_t ea=c->r[4]+0x00000374u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146B48
  c->f[3]=c->ps1[3]=S(c->f[6]*c->f[4]); // 80146B4C
  c->f[2]=c->ps1[2]=S(std::fma(c->f[6],c->f[2],c->f[5])); // 80146B50
  {uint32_t ea=c->r[4]+0x00000378u; WF32(ea,c->f[3]);} // 80146B54
  {uint32_t ea=c->r[4]+0x00000374u; WF32(ea,c->f[2]);} // 80146B58
  goto L_80146BD0; // 80146B5C
L_80146B60:;
  c->r[7]=R8(c->r[4]+0x00000362u); // 80146B60
  c->r[8]=0u+0x00000000u; // 80146B64
  cmpu(c,0,c->r[7],0x00000001u); // 80146B68
  if (!crb(c,2)) { goto L_80146B78; } // 80146B6C
  c->r[8]=0u+0x00000001u; // 80146B70
  goto L_80146B84; // 80146B74
L_80146B78:;
  cmps(c,0,(int32_t)c->r[5],1); // 80146B78
  if (!crb(c,2)) { goto L_80146B84; } // 80146B7C
  c->r[8]=0u+0x00000001u; // 80146B80
L_80146B84:;
  cmps(c,0,(int32_t)c->r[8],0); // 80146B84
  if (crb(c,2)) { goto L_80146BD0; } // 80146B88
  c->r[8]=R32(c->r[4]+0x000003B4u); // 80146B8C
  c->r[7]=rotl(c->r[8],2)&0xC0000000u; // 80146B90
  c->r[7]=sraw(c,c->r[7],31); cr0(c,c->r[7]); // 80146B94
  if (!crb(c,2)) { goto L_80146BA8; } // 80146B98
  c->r[7]=c->r[8]|0x20000000u; // 80146B9C
  W32(c->r[4]+0x000000ACu,c->r[9]); // 80146BA0
  W32(c->r[4]+0x000003B4u,c->r[7]); // 80146BA4
L_80146BA8:;
  {uint32_t ea=c->r[4]+0x0000037Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80146BA8
  c->f[2]=c->ps1[2]=S(c->f[3]+c->f[2]); // 80146BAC
  {uint32_t ea=c->r[4]+0x0000037Cu; WF32(ea,c->f[2]);} // 80146BB0
  goto L_80146BD0; // 80146BB4
L_80146BB8:;
  c->f[2]=u2d(0xFFF8000000000000ull|fctiw(c,c->f[2],true)); // 80146BB8
  c->r[8]=R32(c->r[4]+0x00000098u); // 80146BBC
  {uint32_t ea=c->r[1]+0x00000048u; WF64(ea,c->f[2]);} // 80146BC0
  c->r[7]=R32(c->r[1]+0x0000004Cu); // 80146BC4
  c->r[7]=c->r[8]+c->r[7]; // 80146BC8
  W32(c->r[4]+0x00000098u,c->r[7]); // 80146BCC
L_80146BD0:;
  c->r[12]=c->r[12]+0x00000004u; // 80146BD0
  c->r[6]=c->r[6]+0x00000001u; // 80146BD4
L_80146BD8:;
  c->r[7]=R32(c->r[3]+0x00000014u); // 80146BD8
  cmpu(c,0,c->r[6],c->r[7]); // 80146BDC
  if (crb(c,0)) { IRQCHK(c); goto L_8014687C; } // 80146BE0
  cmps(c,0,(int32_t)c->r[0],1); // 80146BE4
  if (!crb(c,2)) { goto L_80146CF0; } // 80146BE8
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[4]=c->ps1[4]=RF32(ea);} // 80146BEC
  {uint32_t ea=c->r[4]+0x000000D0u; c->f[10]=c->ps1[10]=RF32(ea);} // 80146BF0
  {uint32_t ea=c->r[4]+0x000000D4u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146BF4
  {uint32_t ea=c->r[4]+0x000000D8u; c->f[26]=c->ps1[26]=RF32(ea);} // 80146BF8
  c->f[2]=c->ps1[2]=S(c->f[10]*c->f[4]); // 80146BFC
  {uint32_t ea=c->r[4]+0x000000DCu; c->f[28]=c->ps1[28]=RF32(ea);} // 80146C00
  c->f[0]=c->ps1[0]=S(c->f[6]*c->f[4]); // 80146C04
  {uint32_t ea=c->r[4]+0x000000E0u; c->f[30]=c->ps1[30]=RF32(ea);} // 80146C08
  c->f[27]=c->ps1[27]=S(c->f[26]*c->f[4]); // 80146C0C
  {uint32_t ea=c->r[4]+0x000000E4u; c->f[13]=c->ps1[13]=RF32(ea);} // 80146C10
  c->f[29]=c->ps1[29]=S(c->f[28]*c->f[4]); // 80146C14
  {uint32_t ea=c->r[4]+0x000000E8u; c->f[11]=c->ps1[11]=RF32(ea);} // 80146C18
  c->f[31]=c->ps1[31]=S(c->f[30]*c->f[4]); // 80146C1C
  {uint32_t ea=c->r[1]+0x00000028u; c->f[9]=c->ps1[9]=RF32(ea);} // 80146C20
  {uint32_t ea=c->r[4]+0x000000B0u; c->f[3]=c->ps1[3]=RF32(ea);} // 80146C24
  c->f[12]=c->ps1[12]=S(c->f[13]*c->f[4]); // 80146C28
  c->f[3]=c->ps1[3]=S(std::fma(c->f[10],c->f[9],c->f[3])); // 80146C2C
  {uint32_t ea=c->r[1]+0x0000002Cu; c->f[5]=c->ps1[5]=RF32(ea);} // 80146C30
  {uint32_t ea=c->r[4]+0x000000B4u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146C34
  c->f[8]=c->ps1[8]=S(c->f[11]*c->f[4]); // 80146C38
  {uint32_t ea=c->r[1]+0x00000030u; c->f[10]=c->ps1[10]=RF32(ea);} // 80146C3C
  c->f[1]=c->ps1[1]=S(std::fma(c->f[6],c->f[5],c->f[1])); // 80146C40
  {uint32_t ea=c->r[4]+0x000000B8u; c->f[9]=c->ps1[9]=RF32(ea);} // 80146C44
  {uint32_t ea=c->r[1]+0x00000034u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146C48
  c->f[26]=c->ps1[26]=S(std::fma(c->f[26],c->f[10],c->f[9])); // 80146C4C
  {uint32_t ea=c->r[4]+0x000000BCu; c->f[5]=c->ps1[5]=RF32(ea);} // 80146C50
  {uint32_t ea=c->r[1]+0x00000038u; c->f[10]=c->ps1[10]=RF32(ea);} // 80146C54
  c->f[28]=c->ps1[28]=S(std::fma(c->f[28],c->f[6],c->f[5])); // 80146C58
  {uint32_t ea=c->r[4]+0x000000C0u; c->f[9]=c->ps1[9]=RF32(ea);} // 80146C5C
  {uint32_t ea=c->r[1]+0x0000003Cu; c->f[6]=c->ps1[6]=RF32(ea);} // 80146C60
  c->f[30]=c->ps1[30]=S(std::fma(c->f[30],c->f[10],c->f[9])); // 80146C64
  {uint32_t ea=c->r[4]+0x000000C4u; c->f[5]=c->ps1[5]=RF32(ea);} // 80146C68
  {uint32_t ea=c->r[4]+0x000000ECu; c->f[7]=c->ps1[7]=RF32(ea);} // 80146C6C
  c->f[13]=c->ps1[13]=S(std::fma(c->f[13],c->f[6],c->f[5])); // 80146C70
  {uint32_t ea=c->r[1]+0x00000040u; c->f[10]=c->ps1[10]=RF32(ea);} // 80146C74
  {uint32_t ea=c->r[4]+0x000000C8u; c->f[9]=c->ps1[9]=RF32(ea);} // 80146C78
  {uint32_t ea=c->r[1]+0x00000044u; c->f[6]=c->ps1[6]=RF32(ea);} // 80146C7C
  {uint32_t ea=c->r[4]+0x000000CCu; c->f[5]=c->ps1[5]=RF32(ea);} // 80146C80
  c->f[9]=c->ps1[9]=S(std::fma(c->f[11],c->f[10],c->f[9])); // 80146C84
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[4]);} // 80146C88
  c->f[6]=c->ps1[6]=S(std::fma(c->f[7],c->f[6],c->f[5])); // 80146C8C
  c->f[5]=c->ps1[5]=S(c->f[7]*c->f[4]); // 80146C90
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[4]);} // 80146C94
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[4]);} // 80146C98
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[4]);} // 80146C9C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[4]);} // 80146CA0
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[4]);} // 80146CA4
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[4]);} // 80146CA8
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[4]);} // 80146CAC
  {uint32_t ea=c->r[4]+0x000000B0u; WF32(ea,c->f[3]);} // 80146CB0
  {uint32_t ea=c->r[4]+0x000000D0u; WF32(ea,c->f[2]);} // 80146CB4
  {uint32_t ea=c->r[4]+0x000000B4u; WF32(ea,c->f[1]);} // 80146CB8
  {uint32_t ea=c->r[4]+0x000000D4u; WF32(ea,c->f[0]);} // 80146CBC
  {uint32_t ea=c->r[4]+0x000000B8u; WF32(ea,c->f[26]);} // 80146CC0
  {uint32_t ea=c->r[4]+0x000000D8u; WF32(ea,c->f[27]);} // 80146CC4
  {uint32_t ea=c->r[4]+0x000000BCu; WF32(ea,c->f[28]);} // 80146CC8
  {uint32_t ea=c->r[4]+0x000000DCu; WF32(ea,c->f[29]);} // 80146CCC
  {uint32_t ea=c->r[4]+0x000000C0u; WF32(ea,c->f[30]);} // 80146CD0
  {uint32_t ea=c->r[4]+0x000000E0u; WF32(ea,c->f[31]);} // 80146CD4
  {uint32_t ea=c->r[4]+0x000000C4u; WF32(ea,c->f[13]);} // 80146CD8
  {uint32_t ea=c->r[4]+0x000000E4u; WF32(ea,c->f[12]);} // 80146CDC
  {uint32_t ea=c->r[4]+0x000000C8u; WF32(ea,c->f[9]);} // 80146CE0
  {uint32_t ea=c->r[4]+0x000000E8u; WF32(ea,c->f[8]);} // 80146CE4
  {uint32_t ea=c->r[4]+0x000000CCu; WF32(ea,c->f[6]);} // 80146CE8
  {uint32_t ea=c->r[4]+0x000000ECu; WF32(ea,c->f[5]);} // 80146CEC
L_80146CF0:;
  {uint32_t ea=c->r[1]+0x000000B8u; psq_load(c,31,ea,0,0);} // 80146CF0
  {uint32_t ea=c->r[1]+0x000000B0u; c->f[31]=RF64(ea);} // 80146CF4
  {uint32_t ea=c->r[1]+0x000000A8u; psq_load(c,30,ea,0,0);} // 80146CF8
  {uint32_t ea=c->r[1]+0x000000A0u; c->f[30]=RF64(ea);} // 80146CFC
  {uint32_t ea=c->r[1]+0x00000098u; psq_load(c,29,ea,0,0);} // 80146D00
  {uint32_t ea=c->r[1]+0x00000090u; c->f[29]=RF64(ea);} // 80146D04
  {uint32_t ea=c->r[1]+0x00000088u; psq_load(c,28,ea,0,0);} // 80146D08
  {uint32_t ea=c->r[1]+0x00000080u; c->f[28]=RF64(ea);} // 80146D0C
  {uint32_t ea=c->r[1]+0x00000078u; psq_load(c,27,ea,0,0);} // 80146D10
  {uint32_t ea=c->r[1]+0x00000070u; c->f[27]=RF64(ea);} // 80146D14
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,26,ea,0,0);} // 80146D18
  {uint32_t ea=c->r[1]+0x00000060u; c->f[26]=RF64(ea);} // 80146D1C
  c->r[31]=R32(c->r[1]+0x0000005Cu); // 80146D20
  c->r[30]=R32(c->r[1]+0x00000058u); // 80146D24
  c->r[29]=R32(c->r[1]+0x00000054u); // 80146D28
  c->r[28]=R32(c->r[1]+0x00000050u); // 80146D2C
  c->r[1]=c->r[1]+0x000000C0u; // 80146D30
  return; // 80146D34
}

// GetValue__25CriAuAisacPatternStandardCFfQ25CriAu14AisacGraphType
void f_80146D38(Ctx* __restrict c) {
  trace_call(0x80146D38u);
  cmps(c,0,(int32_t)c->r[4],0); // 80146D38
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146D3C
  if (!crb(c,2)) { goto L_80146D48; } // 80146D40
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146D44
L_80146D48:;
  c->r[0]=R32(c->r[3]+0x00000014u); // 80146D48
  c->r[8]=0u+0x00000000u; // 80146D4C
  c->r[7]=0u+0x00000000u; // 80146D50
  c->ctr=c->r[0]; // 80146D54
  cmpu(c,0,c->r[0],0x00000000u); // 80146D58
  if (!crb(c,1)) { goto L_80146E30; } // 80146D5C
L_80146D60:;
  c->r[6]=R32(c->r[3]+0x00000018u); // 80146D60
  c->r[5]=R32(c->r[6]+c->r[7]); // 80146D64
  c->r[0]=R32(c->r[5]+0x00000004u); // 80146D68
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 80146D6C
  if (!crb(c,2)) { goto L_80146E24; } // 80146D70
  c->r[0]=rotl(c->r[8],2)&0xFFFFFFFCu; // 80146D74
  c->r[3]=R32(c->r[6]+c->r[0]); // 80146D78
  c->r[7]=R32(c->r[3]+0x0000000Cu); // 80146D7C
  {uint32_t ea=c->r[7]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146D80
  fcmp(c,0,c->f[1],c->f[0]); // 80146D84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80146D88
  if (!crb(c,2)) { goto L_80146D98; } // 80146D8C
  {uint32_t ea=c->r[7]+0x00000004u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146D90
  goto L_80146E30; // 80146D94
L_80146D98:;
  c->r[5]=R32(c->r[3]+0x00000008u); // 80146D98
  c->r[6]=c->r[7]+0xFFFFFFF8u; // 80146D9C
  c->r[0]=rotl(c->r[5],3)&0xFFFFFFF8u; // 80146DA0
  {uint32_t ea=c->r[6]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80146DA4
  fcmp(c,0,c->f[1],c->f[0]); // 80146DA8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80146DAC
  if (!crb(c,2)) { goto L_80146DC0; } // 80146DB0
  c->r[3]=c->r[7]+c->r[0]; // 80146DB4
  {uint32_t ea=c->r[3]+0xFFFFFFFCu; c->f[0]=c->ps1[0]=RF32(ea);} // 80146DB8
  goto L_80146E30; // 80146DBC
L_80146DC0:;
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80146DC0
  c->r[3]=c->r[7]+0x00000008u; // 80146DC4
  c->r[4]=0u+0x00000001u; // 80146DC8
  c->ctr=c->r[0]; // 80146DCC
  cmpu(c,0,c->r[5],0x00000001u); // 80146DD0
  if (!crb(c,1)) { goto L_80146DF4; } // 80146DD4
L_80146DD8:;
  {uint32_t ea=c->r[3]+0x00000000u; c->f[0]=c->ps1[0]=RF32(ea);} // 80146DD8
  fcmp(c,0,c->f[1],c->f[0]); // 80146DDC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80146DE0
  if (crb(c,2)) { goto L_80146DF4; } // 80146DE4
  c->r[3]=c->r[3]+0x00000008u; // 80146DE8
  c->r[4]=c->r[4]+0x00000001u; // 80146DEC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80146DD8; } // 80146DF0
L_80146DF4:;
  c->r[0]=rotl(c->r[4],3)&0xFFFFFFF8u; // 80146DF4
  {uint32_t ea=c->r[6]+c->r[0]; c->f[2]=c->ps1[2]=RF32(ea);} // 80146DF8
  c->r[3]=c->r[7]+c->r[0]; // 80146DFC
  {uint32_t ea=c->r[7]+c->r[0]; c->f[0]=c->ps1[0]=RF32(ea);} // 80146E00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80146E04
  {uint32_t ea=c->r[3]+0xFFFFFFFCu; c->f[3]=c->ps1[3]=RF32(ea);} // 80146E08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80146E0C
  {uint32_t ea=c->r[3]+0x00000004u; c->f[2]=c->ps1[2]=RF32(ea);} // 80146E10
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80146E14
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80146E18
  c->f[0]=c->ps1[0]=S(std::fma(c->f[2],c->f[0],c->f[3])); // 80146E1C
  goto L_80146E30; // 80146E20
L_80146E24:;
  c->r[7]=c->r[7]+0x00000004u; // 80146E24
  c->r[8]=c->r[8]+0x00000001u; // 80146E28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80146D60; } // 80146E2C
L_80146E30:;
  c->f[1]=c->f[0]; // 80146E30
  return; // 80146E34
}

// Destroy__10CriAuAisacFv
void f_80146E38(Ctx* __restrict c) {
  trace_call(0x80146E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80146E38
  c->r[0]=c->lr; // 80146E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80146E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80146E44
  c->r[31]=c->r[3]|c->r[3]; // 80146E48
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146E4C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80146E50
  c->ctr=c->r[12]; // 80146E54
  if (true) { c->lr=0x80146E5Cu; dispatch(c,c->ctr); } // 80146E58
  cmps(c,0,(int32_t)c->r[31],0); // 80146E5C
  if (crb(c,2)) { goto L_80146E7C; } // 80146E60
  c->r[12]=R32(c->r[31]+0x00000000u); // 80146E64
  c->r[3]=c->r[31]|c->r[31]; // 80146E68
  c->r[4]=0u+0x00000001u; // 80146E6C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80146E70
  c->ctr=c->r[12]; // 80146E74
  if (true) { c->lr=0x80146E7Cu; dispatch(c,c->ctr); } // 80146E78
L_80146E7C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80146E7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80146E80
  c->lr=c->r[0]; // 80146E84
  c->r[1]=c->r[1]+0x00000010u; // 80146E88
  return; // 80146E8C
}

// __dt__10CriAuAisacFv
void f_80146E90(Ctx* __restrict c) {
  trace_call(0x80146E90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80146E90
  c->r[0]=c->lr; // 80146E94
  cmps(c,0,(int32_t)c->r[3],0); // 80146E98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80146E9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80146EA0
  c->r[31]=c->r[3]|c->r[3]; // 80146EA4
  if (crb(c,2)) { goto L_80146EBC; } // 80146EA8
  cmps(c,0,(int32_t)c->r[4],0); // 80146EAC
  if (!crb(c,1)) { goto L_80146EBC; } // 80146EB0
  c->r[4]=0u+0x0000000Cu; // 80146EB4
  c->lr=0x80146EBCu; f_8017BFE8(c); // 80146EB8
L_80146EBC:;
  c->r[3]=c->r[31]|c->r[31]; // 80146EBC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80146EC0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80146EC4
  c->lr=c->r[0]; // 80146EC8
  c->r[1]=c->r[1]+0x00000010u; // 80146ECC
  return; // 80146ED0
}

// Initialize__10CriAuAisacFv
void f_80146ED4(Ctx* __restrict c) {
  trace_call(0x80146ED4u);
  c->r[3]=0u+0x00000001u; // 80146ED4
  return; // 80146ED8
}

// Finalize__10CriAuAisacFv
void f_80146EDC(Ctx* __restrict c) {
  trace_call(0x80146EDCu);
  return; // 80146EDC
}

// SetVoiceParameters__10CriAuAisacCFR25CriAuVoiceParameterPacketfl
void f_80146EE0(Ctx* __restrict c) {
  trace_call(0x80146EE0u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80146EE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146EE4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80146EE8
  c->ctr=c->r[12]; // 80146EEC
  if (true) { dispatch(c,c->ctr); return; } // 80146EF0
}

// GetValue__10CriAuAisacFfQ25CriAu14AisacGraphType
void f_80146EF4(Ctx* __restrict c) {
  trace_call(0x80146EF4u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80146EF4
  c->r[12]=R32(c->r[3]+0x00000000u); // 80146EF8
  c->r[12]=R32(c->r[12]+0x00000010u); // 80146EFC
  c->ctr=c->r[12]; // 80146F00
  if (true) { dispatch(c,c->ctr); return; } // 80146F04
}

// GetControlName__10CriAuAisacFv
void f_80146F08(Ctx* __restrict c) {
  trace_call(0x80146F08u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80146F08
  c->r[3]=R32(c->r[3]+0x00000008u); // 80146F0C
  return; // 80146F10
}

// GetRandomRange__10CriAuAisacFv
void f_80146F14(Ctx* __restrict c) {
  trace_call(0x80146F14u);
  c->r[3]=R32(c->r[3]+0x00000004u); // 80146F14
  {uint32_t ea=c->r[3]+0x00000010u; c->f[1]=c->ps1[1]=RF32(ea);} // 80146F18
  return; // 80146F1C
}

// Create__15CriAuAisacGroupFP15_criheap_struct11CriHeapTypeUl
void f_80146F20(Ctx* __restrict c) {
  trace_call(0x80146F20u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80146F20
  c->r[0]=c->lr; // 80146F24
  c->r[6]=0u+0x802D0000u; // 80146F28
  c->r[7]=0u+0x00000004u; // 80146F2C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80146F30
  c->r[6]=c->r[6]+0xFFFFDA80u; // 80146F34
  c->r[6]=c->r[6]+0x000000C6u; // 80146F38
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80146F3C
  c->r[27]=c->r[3]|c->r[3]; // 80146F40
  c->r[28]=c->r[4]|c->r[4]; // 80146F44
  c->r[29]=c->r[5]|c->r[5]; // 80146F48
  c->r[31]=c->r[1]|c->r[1]; // 80146F4C
  c->r[4]=c->r[27]|c->r[27]; // 80146F50
  c->r[5]=c->r[28]|c->r[28]; // 80146F54
  c->r[3]=0u+0x00000010u; // 80146F58
  c->lr=0x80146F60u; f_8017BF5C(c); // 80146F5C
  cmps(c,0,(int32_t)c->r[3],0); // 80146F60
  c->r[30]=c->r[3]|c->r[3]; // 80146F64
  if (crb(c,2)) { goto L_80146F8C; } // 80146F68
  c->r[4]=0u+0x80330000u; // 80146F6C
  c->r[0]=0u+0x00000000u; // 80146F70
  c->r[4]=c->r[4]+0x00000788u; // 80146F74
  W32(c->r[3]+0x00000000u,c->r[4]); // 80146F78
  W32(c->r[3]+0x00000004u,c->r[27]); // 80146F7C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80146F80
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80146F84
  W32(c->r[3]+0x0000000Cu,c->r[29]); // 80146F88
L_80146F8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80146F8C
  if (!crb(c,2)) { goto L_80146FB4; } // 80146F90
  c->r[4]=0u+0x802D0000u; // 80146F94
  c->r[3]=0u+0x00000000u; // 80146F98
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80146F9C
  c->r[5]=0u+0xFFFFFFFDu; // 80146FA0
  c->r[4]=c->r[4]+0x000000D3u; // 80146FA4
  c->lr=0x80146FACu; f_8017968C(c); // 80146FA8
  c->r[3]=0u+0x00000000u; // 80146FAC
  goto L_80147004; // 80146FB0
L_80146FB4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80146FB4
  c->r[3]=c->r[30]|c->r[30]; // 80146FB8
  c->r[4]=c->r[28]|c->r[28]; // 80146FBC
  c->r[12]=R32(c->r[12]+0x00000030u); // 80146FC0
  c->ctr=c->r[12]; // 80146FC4
  if (true) { c->lr=0x80146FCCu; dispatch(c,c->ctr); } // 80146FC8
  cmps(c,0,(int32_t)c->r[3],0); // 80146FCC
  if (!crb(c,2)) { goto L_80147000; } // 80146FD0
  cmps(c,0,(int32_t)c->r[30],0); // 80146FD4
  if (crb(c,2)) { goto L_80146FF8; } // 80146FD8
  c->r[12]=R32(c->r[30]+0x00000000u); // 80146FDC
  c->r[0]=0u+0x00000001u; // 80146FE0
  c->r[3]=c->r[30]|c->r[30]; // 80146FE4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80146FE8
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80146FEC
  c->ctr=c->r[12]; // 80146FF0
  if (true) { c->lr=0x80146FF8u; dispatch(c,c->ctr); } // 80146FF4
L_80146FF8:;
  c->r[3]=0u+0x00000000u; // 80146FF8
  goto L_80147004; // 80146FFC
L_80147000:;
  c->r[3]=c->r[30]|c->r[30]; // 80147000
L_80147004:;
  c->r[10]=c->r[31]|c->r[31]; // 80147004
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80147008
  c->r[10]=R32(c->r[1]+0x00000000u); // 8014700C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80147010
  c->r[1]=c->r[10]|c->r[10]; // 80147014
  c->lr=c->r[0]; // 80147018
  return; // 8014701C
}

// Destroy__15CriAuAisacGroupFv
void f_80147020(Ctx* __restrict c) {
  trace_call(0x80147020u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147020
  c->r[0]=c->lr; // 80147024
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147028
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014702C
  c->r[31]=c->r[3]|c->r[3]; // 80147030
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147034
  c->r[12]=R32(c->r[12]+0x00000034u); // 80147038
  c->ctr=c->r[12]; // 8014703C
  if (true) { c->lr=0x80147044u; dispatch(c,c->ctr); } // 80147040
  cmps(c,0,(int32_t)c->r[31],0); // 80147044
  if (crb(c,2)) { goto L_80147064; } // 80147048
  c->r[12]=R32(c->r[31]+0x00000000u); // 8014704C
  c->r[3]=c->r[31]|c->r[31]; // 80147050
  c->r[4]=0u+0x00000001u; // 80147054
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80147058
  c->ctr=c->r[12]; // 8014705C
  if (true) { c->lr=0x80147064u; dispatch(c,c->ctr); } // 80147060
L_80147064:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147064
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80147068
  c->lr=c->r[0]; // 8014706C
  c->r[1]=c->r[1]+0x00000010u; // 80147070
  return; // 80147074
}

// __dt__15CriAuAisacGroupFv
void f_80147078(Ctx* __restrict c) {
  trace_call(0x80147078u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147078
  c->r[0]=c->lr; // 8014707C
  cmps(c,0,(int32_t)c->r[3],0); // 80147080
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147084
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147088
  c->r[31]=c->r[3]|c->r[3]; // 8014708C
  if (crb(c,2)) { goto L_801470A4; } // 80147090
  cmps(c,0,(int32_t)c->r[4],0); // 80147094
  if (!crb(c,1)) { goto L_801470A4; } // 80147098
  c->r[4]=0u+0x00000010u; // 8014709C
  c->lr=0x801470A4u; f_8017BFE8(c); // 801470A0
L_801470A4:;
  c->r[3]=c->r[31]|c->r[31]; // 801470A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801470A8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801470AC
  c->lr=c->r[0]; // 801470B0
  c->r[1]=c->r[1]+0x00000010u; // 801470B4
  return; // 801470B8
}

// Initialize__15CriAuAisacGroupF11CriHeapType
void f_801470BC(Ctx* __restrict c) {
  trace_call(0x801470BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801470BC
  c->r[0]=c->lr; // 801470C0
  c->r[7]=c->r[4]|c->r[4]; // 801470C4
  c->r[6]=0u+0x00000004u; // 801470C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801470CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801470D0
  c->r[31]=0u+0x802D0000u; // 801470D4
  c->r[31]=c->r[31]+0xFFFFDA80u; // 801470D8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801470DC
  c->r[30]=c->r[3]|c->r[3]; // 801470E0
  c->r[5]=c->r[31]+0x000000DDu; // 801470E4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801470E8
  c->r[3]=R32(c->r[3]+0x00000004u); // 801470EC
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 801470F0
  c->lr=0x801470F8u; f_8017C15C(c); // 801470F4
  cmps(c,0,(int32_t)c->r[3],0); // 801470F8
  W32(c->r[30]+0x00000008u,c->r[3]); // 801470FC
  if (!crb(c,2)) { goto L_80147130; } // 80147100
  c->r[4]=c->r[31]+0x000000E7u; // 80147104
  c->r[3]=0u+0x00000000u; // 80147108
  c->r[5]=0u+0xFFFFFFFDu; // 8014710C
  c->lr=0x80147114u; f_8017968C(c); // 80147110
  c->r[12]=R32(c->r[30]+0x00000000u); // 80147114
  c->r[3]=c->r[30]|c->r[30]; // 80147118
  c->r[12]=R32(c->r[12]+0x00000034u); // 8014711C
  c->ctr=c->r[12]; // 80147120
  if (true) { c->lr=0x80147128u; dispatch(c,c->ctr); } // 80147124
  c->r[3]=0u+0x00000000u; // 80147128
  goto L_80147160; // 8014712C
L_80147130:;
  c->r[6]=0u+0x00000000u; // 80147130
  c->r[5]=0u+0x00000000u; // 80147134
  c->r[4]=0u+0x00000000u; // 80147138
  goto L_80147150; // 8014713C
L_80147140:;
  c->r[3]=R32(c->r[30]+0x00000008u); // 80147140
  c->r[6]=c->r[6]+0x00000001u; // 80147144
  W32(c->r[3]+c->r[5],c->r[4]); // 80147148
  c->r[5]=c->r[5]+0x00000004u; // 8014714C
L_80147150:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 80147150
  cmpu(c,0,c->r[6],c->r[0]); // 80147154
  if (crb(c,0)) { IRQCHK(c); goto L_80147140; } // 80147158
  c->r[3]=0u+0x00000001u; // 8014715C
L_80147160:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147160
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80147164
  c->r[30]=R32(c->r[1]+0x00000008u); // 80147168
  c->lr=c->r[0]; // 8014716C
  c->r[1]=c->r[1]+0x00000010u; // 80147170
  return; // 80147174
}

// Finalize__15CriAuAisacGroupFv
void f_80147178(Ctx* __restrict c) {
  trace_call(0x80147178u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147178
  c->r[0]=c->lr; // 8014717C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147180
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147184
  W32(c->r[1]+0x00000008u,c->r[30]); // 80147188
  c->r[30]=c->r[3]|c->r[3]; // 8014718C
  c->r[0]=R32(c->r[3]+0x00000008u); // 80147190
  cmps(c,0,(int32_t)c->r[0],0); // 80147194
  if (crb(c,2)) { goto L_801471E0; } // 80147198
  c->r[31]=0u+0x00000000u; // 8014719C
  goto L_801471C0; // 801471A0
L_801471A4:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801471A4
  c->r[3]=c->r[30]|c->r[30]; // 801471A8
  c->r[4]=c->r[31]|c->r[31]; // 801471AC
  c->r[12]=R32(c->r[12]+0x00000010u); // 801471B0
  c->ctr=c->r[12]; // 801471B4
  if (true) { c->lr=0x801471BCu; dispatch(c,c->ctr); } // 801471B8
  c->r[31]=c->r[31]+0x00000001u; // 801471BC
L_801471C0:;
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 801471C0
  cmpu(c,0,c->r[31],c->r[0]); // 801471C4
  if (crb(c,0)) { IRQCHK(c); goto L_801471A4; } // 801471C8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801471CC
  c->r[4]=R32(c->r[30]+0x00000008u); // 801471D0
  c->lr=0x801471D8u; f_8017C228(c); // 801471D4
  c->r[0]=0u+0x00000000u; // 801471D8
  W32(c->r[30]+0x00000008u,c->r[0]); // 801471DC
L_801471E0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801471E0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801471E4
  c->r[30]=R32(c->r[1]+0x00000008u); // 801471E8
  c->lr=c->r[0]; // 801471EC
  c->r[1]=c->r[1]+0x00000010u; // 801471F0
  return; // 801471F4
}

// CreateAisac__15CriAuAisacGroupFRC17CriAuAisacPatternUlP16CriAuCueSheetLoc
void f_801471F8(Ctx* __restrict c) {
  trace_call(0x801471F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801471F8
  c->r[0]=c->lr; // 801471FC
  W32(c->r[1]+0x00000044u,c->r[0]); // 80147200
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80147204
  c->r[31]=c->r[1]|c->r[1]; // 80147208
  c->r[26]=c->r[3]|c->r[3]; // 8014720C
  c->r[27]=c->r[4]|c->r[4]; // 80147210
  c->r[28]=c->r[6]|c->r[6]; // 80147214
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80147218
  cmpu(c,0,c->r[5],c->r[0]); // 8014721C
  if (crb(c,0)) { goto L_80147244; } // 80147220
  c->r[4]=0u+0x802D0000u; // 80147224
  c->r[6]=c->r[0]|c->r[0]; // 80147228
  c->r[4]=c->r[4]+0xFFFFDA80u; // 8014722C
  c->r[3]=0u+0x00000000u; // 80147230
  c->r[4]=c->r[4]+0x000000F1u; // 80147234
  c->lr=0x8014723Cu; f_80179558(c); // 80147238
  c->r[3]=0u+0x00000000u; // 8014723C
  goto L_80147360; // 80147240
L_80147244:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80147244
  c->r[29]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80147248
  c->r[0]=R32(c->r[3]+c->r[29]); // 8014724C
  cmps(c,0,(int32_t)c->r[0],0); // 80147250
  if (crb(c,2)) { goto L_80147274; } // 80147254
  c->r[4]=0u+0x802D0000u; // 80147258
  c->r[3]=0u+0x00000000u; // 8014725C
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80147260
  c->r[4]=c->r[4]+0x00000138u; // 80147264
  c->lr=0x8014726Cu; f_801794C0(c); // 80147268
  c->r[3]=0u+0x00000000u; // 8014726C
  goto L_80147360; // 80147270
L_80147274:;
  c->r[5]=0u+0x802D0000u; // 80147274
  c->r[4]=R32(c->r[26]+0x00000004u); // 80147278
  c->r[5]=c->r[5]+0xFFFFDA80u; // 8014727C
  c->r[3]=0u+0x0000000Cu; // 80147280
  c->r[6]=c->r[5]+0x000000B4u; // 80147284
  c->r[7]=0u+0x00000004u; // 80147288
  c->r[5]=0u+0x00000002u; // 8014728C
  c->lr=0x80147294u; f_8017BF5C(c); // 80147290
  cmps(c,0,(int32_t)c->r[3],0); // 80147294
  c->r[30]=c->r[3]|c->r[3]; // 80147298
  if (crb(c,2)) { goto L_801472B8; } // 8014729C
  c->r[4]=0u+0x80330000u; // 801472A0
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 801472A4
  c->r[4]=c->r[4]+0x000007D0u; // 801472A8
  W32(c->r[3]+0x00000000u,c->r[4]); // 801472AC
  W32(c->r[3]+0x00000004u,c->r[27]); // 801472B0
  W32(c->r[3]+0x00000008u,c->r[28]); // 801472B4
L_801472B8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801472B8
  if (!crb(c,2)) { goto L_801472E0; } // 801472BC
  c->r[4]=0u+0x802D0000u; // 801472C0
  c->r[3]=0u+0x00000000u; // 801472C4
  c->r[4]=c->r[4]+0xFFFFDA80u; // 801472C8
  c->r[5]=0u+0xFFFFFFFDu; // 801472CC
  c->r[4]=c->r[4]+0x000000BCu; // 801472D0
  c->lr=0x801472D8u; f_8017968C(c); // 801472D4
  c->r[30]=0u+0x00000000u; // 801472D8
  goto L_80147324; // 801472DC
L_801472E0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801472E0
  c->r[3]=c->r[30]|c->r[30]; // 801472E4
  c->r[12]=R32(c->r[12]+0x00000020u); // 801472E8
  c->ctr=c->r[12]; // 801472EC
  if (true) { c->lr=0x801472F4u; dispatch(c,c->ctr); } // 801472F0
  cmps(c,0,(int32_t)c->r[3],0); // 801472F4
  if (!crb(c,2)) { goto L_80147324; } // 801472F8
  cmps(c,0,(int32_t)c->r[30],0); // 801472FC
  if (crb(c,2)) { goto L_80147320; } // 80147300
  c->r[12]=R32(c->r[30]+0x00000000u); // 80147304
  c->r[0]=0u+0x00000001u; // 80147308
  c->r[3]=c->r[30]|c->r[30]; // 8014730C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80147310
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80147314
  c->ctr=c->r[12]; // 80147318
  if (true) { c->lr=0x80147320u; dispatch(c,c->ctr); } // 8014731C
L_80147320:;
  c->r[30]=0u+0x00000000u; // 80147320
L_80147324:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 80147324
  W32(c->r[3]+c->r[29],c->r[30]); // 80147328
  c->r[3]=R32(c->r[26]+0x00000008u); // 8014732C
  c->r[0]=R32(c->r[3]+c->r[29]); // 80147330
  cmps(c,0,(int32_t)c->r[0],0); // 80147334
  if (!crb(c,2)) { goto L_8014735C; } // 80147338
  c->r[4]=0u+0x802D0000u; // 8014733C
  c->r[5]=R32(c->r[27]+0x0000000Cu); // 80147340
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80147344
  c->r[3]=0u+0x00000000u; // 80147348
  c->r[4]=c->r[4]+0x00000170u; // 8014734C
  c->lr=0x80147354u; f_801794C0(c); // 80147350
  c->r[3]=0u+0x00000000u; // 80147354
  goto L_80147360; // 80147358
L_8014735C:;
  c->r[3]=0u+0x00000001u; // 8014735C
L_80147360:;
  c->r[10]=c->r[31]|c->r[31]; // 80147360
  {uint32_t ea=c->r[10]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80147364
  c->r[10]=R32(c->r[1]+0x00000000u); // 80147368
  c->r[0]=R32(c->r[10]+0x00000004u); // 8014736C
  c->r[1]=c->r[10]|c->r[10]; // 80147370
  c->lr=c->r[0]; // 80147374
  return; // 80147378
}

// DestroyAisac__15CriAuAisacGroupFUl
void f_8014737C(Ctx* __restrict c) {
  trace_call(0x8014737Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014737C
  c->r[0]=c->lr; // 80147380
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147384
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147388
  W32(c->r[1]+0x00000008u,c->r[30]); // 8014738C
  c->r[30]=c->r[3]|c->r[3]; // 80147390
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80147394
  cmpu(c,0,c->r[4],c->r[6]); // 80147398
  if (crb(c,0)) { goto L_801473BC; } // 8014739C
  c->r[3]=0u+0x802D0000u; // 801473A0
  c->r[5]=c->r[4]|c->r[4]; // 801473A4
  c->r[3]=c->r[3]+0xFFFFDA80u; // 801473A8
  c->r[4]=c->r[3]+0x00000199u; // 801473AC
  c->r[3]=0u+0x00000000u; // 801473B0
  c->lr=0x801473B8u; f_80179558(c); // 801473B4
  goto L_801473EC; // 801473B8
L_801473BC:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 801473BC
  c->r[31]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801473C0
  c->r[3]=R32(c->r[3]+c->r[31]); // 801473C4
  cmps(c,0,(int32_t)c->r[3],0); // 801473C8
  if (crb(c,2)) { goto L_801473EC; } // 801473CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801473D0
  c->r[12]=R32(c->r[12]+0x00000008u); // 801473D4
  c->ctr=c->r[12]; // 801473D8
  if (true) { c->lr=0x801473E0u; dispatch(c,c->ctr); } // 801473DC
  c->r[3]=R32(c->r[30]+0x00000008u); // 801473E0
  c->r[0]=0u+0x00000000u; // 801473E4
  W32(c->r[3]+c->r[31],c->r[0]); // 801473E8
L_801473EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801473EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801473F0
  c->r[30]=R32(c->r[1]+0x00000008u); // 801473F4
  c->lr=c->r[0]; // 801473F8
  c->r[1]=c->r[1]+0x00000010u; // 801473FC
  return; // 80147400
}

// GetControlName__15CriAuAisacGroupFUl
void f_80147404(Ctx* __restrict c) {
  trace_call(0x80147404u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147404
  c->r[0]=c->lr; // 80147408
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014740C
  c->r[6]=R32(c->r[3]+0x0000000Cu); // 80147410
  cmpu(c,0,c->r[4],c->r[6]); // 80147414
  if (crb(c,0)) { goto L_8014743C; } // 80147418
  c->r[3]=0u+0x802D0000u; // 8014741C
  c->r[5]=c->r[4]|c->r[4]; // 80147420
  c->r[3]=c->r[3]+0xFFFFDA80u; // 80147424
  c->r[4]=c->r[3]+0x00000199u; // 80147428
  c->r[3]=0u+0x00000000u; // 8014742C
  c->lr=0x80147434u; f_80179558(c); // 80147430
  c->r[3]=0u+0x00000000u; // 80147434
  goto L_80147468; // 80147438
L_8014743C:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 8014743C
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80147440
  c->r[3]=R32(c->r[3]+c->r[0]); // 80147444
  cmps(c,0,(int32_t)c->r[3],0); // 80147448
  if (crb(c,2)) { goto L_80147464; } // 8014744C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147450
  c->r[12]=R32(c->r[12]+0x00000014u); // 80147454
  c->ctr=c->r[12]; // 80147458
  if (true) { c->lr=0x80147460u; dispatch(c,c->ctr); } // 8014745C
  goto L_80147468; // 80147460
L_80147464:;
  c->r[3]=0u+0x00000000u; // 80147464
L_80147468:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147468
  c->lr=c->r[0]; // 8014746C
  c->r[1]=c->r[1]+0x00000010u; // 80147470
  return; // 80147474
}

// SetVoiceParameters__15CriAuAisacGroupCFR25CriAuVoiceParameterPacket
void f_80147478(Ctx* __restrict c) {
  trace_call(0x80147478u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147478
  c->r[0]=c->lr; // 8014747C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80147480
  c->r[11]=c->r[1]+0x00000020u; // 80147484
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[31]);} // 80147488
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,31,ea,0,0);} // 8014748C
  c->lr=0x80147494u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80147490
  c->r[30]=R32(c->r[4]+0x000003B0u); // 80147494
  c->r[26]=c->r[3]|c->r[3]; // 80147498
  c->r[27]=c->r[4]|c->r[4]; // 8014749C
  c->r[28]=0u+0x00000000u; // 801474A0
  c->r[31]=0u+0x00000000u; // 801474A4
  goto L_80147564; // 801474A8
L_801474AC:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801474AC
  c->r[3]=R32(c->r[3]+c->r[31]); // 801474B0
  cmps(c,0,(int32_t)c->r[3],0); // 801474B4
  if (crb(c,2)) { goto L_8014755C; } // 801474B8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801474BC
  c->r[12]=R32(c->r[12]+0x00000014u); // 801474C0
  c->ctr=c->r[12]; // 801474C4
  if (true) { c->lr=0x801474CCu; dispatch(c,c->ctr); } // 801474C8
  c->r[4]=c->r[3]|c->r[3]; // 801474CC
  c->r[3]=c->r[30]|c->r[30]; // 801474D0
  c->lr=0x801474D8u; f_8015858C(c); // 801474D4
  cmps(c,0,(int32_t)c->r[3],0); // 801474D8
  c->r[29]=c->r[3]|c->r[3]; // 801474DC
  if (crb(c,2)) { goto L_80147530; } // 801474E0
  c->r[3]=R32(c->r[26]+0x00000008u); // 801474E4
  c->r[3]=R32(c->r[3]+c->r[31]); // 801474E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801474EC
  c->r[12]=R32(c->r[12]+0x00000018u); // 801474F0
  c->ctr=c->r[12]; // 801474F4
  if (true) { c->lr=0x801474FCu; dispatch(c,c->ctr); } // 801474F8
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 801474FC
  c->r[3]=c->r[29]|c->r[29]; // 80147500
  c->r[4]=R8(c->r[27]+0x00000362u); // 80147504
  c->r[12]=R32(c->r[12]+0x00000044u); // 80147508
  c->ctr=c->r[12]; // 8014750C
  if (true) { c->lr=0x80147514u; dispatch(c,c->ctr); } // 80147510
  c->r[12]=R32(c->r[29]+0x0000000Cu); // 80147514
  c->f[31]=c->f[1]; // 80147518
  c->r[3]=c->r[29]|c->r[29]; // 8014751C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80147520
  c->ctr=c->r[12]; // 80147524
  if (true) { c->lr=0x8014752Cu; dispatch(c,c->ctr); } // 80147528
  goto L_80147538; // 8014752C
L_80147530:;
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 80147530
  c->r[3]=0u+0x00000000u; // 80147534
L_80147538:;
  c->r[6]=R32(c->r[26]+0x00000008u); // 80147538
  c->r[5]=c->r[3]|c->r[3]; // 8014753C
  c->f[1]=c->f[31]; // 80147540
  c->r[4]=c->r[27]|c->r[27]; // 80147544
  c->r[3]=R32(c->r[6]+c->r[31]); // 80147548
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014754C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80147550
  c->ctr=c->r[12]; // 80147554
  if (true) { c->lr=0x8014755Cu; dispatch(c,c->ctr); } // 80147558
L_8014755C:;
  c->r[31]=c->r[31]+0x00000004u; // 8014755C
  c->r[28]=c->r[28]+0x00000001u; // 80147560
L_80147564:;
  c->r[0]=R32(c->r[26]+0x0000000Cu); // 80147564
  cmpu(c,0,c->r[28],c->r[0]); // 80147568
  if (crb(c,0)) { IRQCHK(c); goto L_801474AC; } // 8014756C
  c->r[11]=c->r[1]+0x00000020u; // 80147570
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,31,ea,0,0);} // 80147574
  {uint32_t ea=c->r[1]+0x00000020u; c->f[31]=RF64(ea);} // 80147578
  c->lr=0x80147580u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014757C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80147580
  c->lr=c->r[0]; // 80147584
  c->r[1]=c->r[1]+0x00000030u; // 80147588
  return; // 8014758C
}

// GetControlFlag__17CriAuAisacControlFv
void f_80147590(Ctx* __restrict c) {
  trace_call(0x80147590u);
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80147590
  return; // 80147594
}

// IsExistControlName__15CriAuAisacGroupFPCc
void f_80147598(Ctx* __restrict c) {
  trace_call(0x80147598u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147598
  c->r[0]=c->lr; // 8014759C
  W32(c->r[1]+0x00000024u,c->r[0]); // 801475A0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801475A4
  c->r[26]=c->r[3]|c->r[3]; // 801475A8
  c->r[27]=c->r[4]|c->r[4]; // 801475AC
  c->r[29]=0u+0x00000000u; // 801475B0
  c->r[28]=0u+0x00000000u; // 801475B4
  c->r[31]=0u+0x00000000u; // 801475B8
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 801475BC
  goto L_80147604; // 801475C0
L_801475C4:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 801475C4
  c->r[3]=R32(c->r[3]+c->r[31]); // 801475C8
  cmps(c,0,(int32_t)c->r[3],0); // 801475CC
  if (crb(c,2)) { goto L_801475FC; } // 801475D0
  c->r[4]=R32(c->r[3]+0x00000004u); // 801475D4
  c->r[3]=c->r[27]|c->r[27]; // 801475D8
  c->r[4]=R32(c->r[4]+0x00000008u); // 801475DC
  c->lr=0x801475E4u; f_800B7948(c); // 801475E0
  c->r[0]=cntlz(c->r[3]); // 801475E4
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801475E8
  cmps(c,0,(int32_t)c->r[0],1); // 801475EC
  if (!crb(c,2)) { goto L_801475FC; } // 801475F0
  c->r[29]=0u+0x00000001u; // 801475F4
  goto L_8014760C; // 801475F8
L_801475FC:;
  c->r[31]=c->r[31]+0x00000004u; // 801475FC
  c->r[28]=c->r[28]+0x00000001u; // 80147600
L_80147604:;
  cmpu(c,0,c->r[28],c->r[30]); // 80147604
  if (crb(c,0)) { IRQCHK(c); goto L_801475C4; } // 80147608
L_8014760C:;
  c->r[3]=c->r[29]|c->r[29]; // 8014760C
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80147610
  c->r[0]=R32(c->r[1]+0x00000024u); // 80147614
  c->lr=c->r[0]; // 80147618
  c->r[1]=c->r[1]+0x00000020u; // 8014761C
  return; // 80147620
}

// GetParameterValue__15CriAuAisacGroupFPCcQ25CriAu14AisacGraphTypeP17CriAuAisacControlPl
void f_80147624(Ctx* __restrict c) {
  trace_call(0x80147624u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147624
  c->r[0]=c->lr; // 80147628
  W32(c->r[1]+0x00000054u,c->r[0]); // 8014762C
  c->r[11]=c->r[1]+0x00000030u; // 80147630
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80147634
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80147638
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8014763C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80147640
  c->lr=0x80147648u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80147644
  cmps(c,0,(int32_t)c->r[6],0); // 80147648
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014764C
  c->r[25]=c->r[3]|c->r[3]; // 80147650
  c->r[26]=c->r[4]|c->r[4]; // 80147654
  c->r[27]=c->r[5]|c->r[5]; // 80147658
  c->r[28]=c->r[7]|c->r[7]; // 8014765C
  if (crb(c,2)) { goto L_8014767C; } // 80147660
  c->r[12]=R32(c->r[6]+0x0000000Cu); // 80147664
  c->r[3]=c->r[6]|c->r[6]; // 80147668
  c->r[12]=R32(c->r[12]+0x00000028u); // 8014766C
  c->ctr=c->r[12]; // 80147670
  if (true) { c->lr=0x80147678u; dispatch(c,c->ctr); } // 80147674
  c->f[30]=c->f[1]; // 80147678
L_8014767C:;
  cmps(c,0,(int32_t)c->r[27],0); // 8014767C
  if (!crb(c,2)) { goto L_8014768C; } // 80147680
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[31]=c->ps1[31]=RF32(ea);} // 80147684
  goto L_80147690; // 80147688
L_8014768C:;
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014768C
L_80147690:;
  c->r[29]=0u+0x00000000u; // 80147690
  c->r[30]=0u+0x00000000u; // 80147694
  c->r[31]=0u+0x00000001u; // 80147698
  goto L_80147738; // 8014769C
L_801476A0:;
  c->r[3]=R32(c->r[25]+0x00000008u); // 801476A0
  c->r[3]=R32(c->r[3]+c->r[30]); // 801476A4
  cmps(c,0,(int32_t)c->r[3],0); // 801476A8
  if (crb(c,2)) { goto L_80147730; } // 801476AC
  c->r[4]=R32(c->r[3]+0x00000004u); // 801476B0
  c->r[3]=c->r[26]|c->r[26]; // 801476B4
  c->r[4]=R32(c->r[4]+0x00000008u); // 801476B8
  c->lr=0x801476C0u; f_800B7948(c); // 801476BC
  c->r[0]=cntlz(c->r[3]); // 801476C0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801476C4
  cmps(c,0,(int32_t)c->r[0],1); // 801476C8
  if (!crb(c,2)) { goto L_80147730; } // 801476CC
  cmps(c,0,(int32_t)c->r[27],0); // 801476D0
  W32(c->r[28]+0x00000000u,c->r[31]); // 801476D4
  if (crb(c,2)) { goto L_801476E4; } // 801476D8
  cmps(c,0,(int32_t)c->r[27],23); // 801476DC
  if (!crb(c,2)) { goto L_8014770C; } // 801476E0
L_801476E4:;
  c->r[3]=R32(c->r[25]+0x00000008u); // 801476E4
  c->f[1]=c->f[30]; // 801476E8
  c->r[4]=c->r[27]|c->r[27]; // 801476EC
  c->r[3]=R32(c->r[3]+c->r[30]); // 801476F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801476F4
  c->r[12]=R32(c->r[12]+0x00000010u); // 801476F8
  c->ctr=c->r[12]; // 801476FC
  if (true) { c->lr=0x80147704u; dispatch(c,c->ctr); } // 80147700
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 80147704
  goto L_80147730; // 80147708
L_8014770C:;
  c->r[3]=R32(c->r[25]+0x00000008u); // 8014770C
  c->f[1]=c->f[30]; // 80147710
  c->r[4]=c->r[27]|c->r[27]; // 80147714
  c->r[3]=R32(c->r[3]+c->r[30]); // 80147718
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014771C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80147720
  c->ctr=c->r[12]; // 80147724
  if (true) { c->lr=0x8014772Cu; dispatch(c,c->ctr); } // 80147728
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 8014772C
L_80147730:;
  c->r[30]=c->r[30]+0x00000004u; // 80147730
  c->r[29]=c->r[29]+0x00000001u; // 80147734
L_80147738:;
  c->r[0]=R32(c->r[25]+0x0000000Cu); // 80147738
  cmpu(c,0,c->r[29],c->r[0]); // 8014773C
  if (crb(c,0)) { IRQCHK(c); goto L_801476A0; } // 80147740
  c->f[1]=c->f[31]; // 80147744
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 80147748
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 8014774C
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 80147750
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 80147754
  c->r[11]=c->r[1]+0x00000030u; // 80147758
  c->lr=0x80147760u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014775C
  c->r[0]=R32(c->r[1]+0x00000054u); // 80147760
  c->lr=c->r[0]; // 80147764
  c->r[1]=c->r[1]+0x00000050u; // 80147768
  return; // 8014776C
}

// GetNumUsed__15CriAuAisacGroupFPCc
void f_80147770(Ctx* __restrict c) {
  trace_call(0x80147770u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147770
  c->r[0]=c->lr; // 80147774
  W32(c->r[1]+0x00000024u,c->r[0]); // 80147778
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8014777C
  c->r[26]=c->r[3]|c->r[3]; // 80147780
  c->r[27]=c->r[4]|c->r[4]; // 80147784
  c->r[29]=0u+0x00000000u; // 80147788
  c->r[28]=0u+0x00000000u; // 8014778C
  c->r[31]=0u+0x00000000u; // 80147790
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80147794
  goto L_801477D8; // 80147798
L_8014779C:;
  c->r[3]=R32(c->r[26]+0x00000008u); // 8014779C
  c->r[3]=R32(c->r[3]+c->r[31]); // 801477A0
  cmps(c,0,(int32_t)c->r[3],0); // 801477A4
  if (crb(c,2)) { goto L_801477D0; } // 801477A8
  c->r[4]=R32(c->r[3]+0x00000004u); // 801477AC
  c->r[3]=c->r[27]|c->r[27]; // 801477B0
  c->r[4]=R32(c->r[4]+0x00000008u); // 801477B4
  c->lr=0x801477BCu; f_800B7948(c); // 801477B8
  c->r[0]=cntlz(c->r[3]); // 801477BC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 801477C0
  cmps(c,0,(int32_t)c->r[0],1); // 801477C4
  if (!crb(c,2)) { goto L_801477D0; } // 801477C8
  c->r[29]=c->r[29]+0x00000001u; // 801477CC
L_801477D0:;
  c->r[31]=c->r[31]+0x00000004u; // 801477D0
  c->r[28]=c->r[28]+0x00000001u; // 801477D4
L_801477D8:;
  cmpu(c,0,c->r[28],c->r[30]); // 801477D8
  if (crb(c,0)) { IRQCHK(c); goto L_8014779C; } // 801477DC
  c->r[3]=c->r[29]|c->r[29]; // 801477E0
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801477E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801477E8
  c->lr=c->r[0]; // 801477EC
  c->r[1]=c->r[1]+0x00000020u; // 801477F0
  return; // 801477F4
}

// GetControlNamePointer__15CriAuAisacGroupFPCc
void f_801477F8(Ctx* __restrict c) {
  trace_call(0x801477F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801477F8
  c->r[0]=c->lr; // 801477FC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80147800
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80147804
  c->r[26]=c->r[3]|c->r[3]; // 80147808
  c->r[27]=c->r[4]|c->r[4]; // 8014780C
  c->r[28]=0u+0x00000000u; // 80147810
  c->r[31]=0u+0x00000000u; // 80147814
  c->r[30]=R32(c->r[3]+0x0000000Cu); // 80147818
  goto L_80147874; // 8014781C
L_80147820:;
  c->r[29]=R32(c->r[26]+0x00000008u); // 80147820
  c->r[3]=R32(c->r[29]+c->r[31]); // 80147824
  cmps(c,0,(int32_t)c->r[3],0); // 80147828
  if (crb(c,2)) { goto L_8014786C; } // 8014782C
  c->r[4]=R32(c->r[3]+0x00000004u); // 80147830
  c->r[3]=c->r[27]|c->r[27]; // 80147834
  c->r[4]=R32(c->r[4]+0x00000008u); // 80147838
  c->lr=0x80147840u; f_800B7948(c); // 8014783C
  c->r[0]=cntlz(c->r[3]); // 80147840
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80147844
  cmps(c,0,(int32_t)c->r[0],1); // 80147848
  if (!crb(c,2)) { goto L_8014786C; } // 8014784C
  c->r[0]=rotl(c->r[28],2)&0xFFFFFFFCu; // 80147850
  c->r[3]=R32(c->r[29]+c->r[0]); // 80147854
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147858
  c->r[12]=R32(c->r[12]+0x00000014u); // 8014785C
  c->ctr=c->r[12]; // 80147860
  if (true) { c->lr=0x80147868u; dispatch(c,c->ctr); } // 80147864
  goto L_80147880; // 80147868
L_8014786C:;
  c->r[31]=c->r[31]+0x00000004u; // 8014786C
  c->r[28]=c->r[28]+0x00000001u; // 80147870
L_80147874:;
  cmpu(c,0,c->r[28],c->r[30]); // 80147874
  if (crb(c,0)) { IRQCHK(c); goto L_80147820; } // 80147878
  c->r[3]=0u+0x00000000u; // 8014787C
L_80147880:;
  {uint32_t ea=c->r[1]+0x00000008u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80147880
  c->r[0]=R32(c->r[1]+0x00000024u); // 80147884
  c->lr=c->r[0]; // 80147888
  c->r[1]=c->r[1]+0x00000020u; // 8014788C
  return; // 80147890
}

// SetAisacControlToPlayer__15CriAuAisacGroupFP14CriAuPlayerLoc
void f_80147894(Ctx* __restrict c) {
  trace_call(0x80147894u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147894
  c->r[0]=c->lr; // 80147898
  W32(c->r[1]+0x00000044u,c->r[0]); // 8014789C
  c->r[11]=c->r[1]+0x00000040u; // 801478A0
  c->lr=0x801478A8u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801478A4
  c->r[31]=c->r[1]|c->r[1]; // 801478A8
  c->r[27]=c->r[3]|c->r[3]; // 801478AC
  c->r[28]=c->r[4]|c->r[4]; // 801478B0
  c->r[29]=0u+0x00000000u; // 801478B4
  c->r[30]=0u+0x00000000u; // 801478B8
  goto L_80147A84; // 801478BC
L_801478C0:;
  c->r[3]=R32(c->r[27]+0x00000008u); // 801478C0
  c->r[3]=R32(c->r[3]+c->r[30]); // 801478C4
  cmps(c,0,(int32_t)c->r[3],0); // 801478C8
  if (crb(c,2)) { goto L_80147A7C; } // 801478CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801478D0
  c->r[12]=R32(c->r[12]+0x00000014u); // 801478D4
  c->ctr=c->r[12]; // 801478D8
  if (true) { c->lr=0x801478E0u; dispatch(c,c->ctr); } // 801478DC
  c->r[4]=c->r[3]|c->r[3]; // 801478E0
  c->r[3]=c->r[28]|c->r[28]; // 801478E4
  c->lr=0x801478ECu; f_8015858C(c); // 801478E8
  cmps(c,0,(int32_t)c->r[3],0); // 801478EC
  c->r[25]=c->r[3]|c->r[3]; // 801478F0
  if (!crb(c,2)) { goto L_80147A64; } // 801478F4
  c->r[4]=R32(c->r[28]+0x00000010u); // 801478F8
  c->r[5]=0u+0x802D0000u; // 801478FC
  c->r[5]=c->r[5]+0xFFFFDA80u; // 80147900
  c->r[3]=0u+0x00000030u; // 80147904
  c->r[4]=R32(c->r[4]+0x00000004u); // 80147908
  c->r[6]=c->r[5]+0x000001E0u; // 8014790C
  c->r[5]=0u+0x00000002u; // 80147910
  c->r[7]=0u+0x00000004u; // 80147914
  c->lr=0x8014791Cu; f_8017BF5C(c); // 80147918
  cmps(c,0,(int32_t)c->r[3],0); // 8014791C
  if (crb(c,2)) { goto L_8014796C; } // 80147920
  c->r[5]=0u+0x00000000u; // 80147924
  W32(c->r[3]+0x00000000u,c->r[5]); // 80147928
  c->r[4]=0u+0x80330000u; // 8014792C
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147930
  W32(c->r[3]+0x00000004u,c->r[5]); // 80147934
  c->r[4]=c->r[4]+0x0000086Cu; // 80147938
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014793C
  c->r[0]=0u+0x00000001u; // 80147940
  W32(c->r[3]+0x00000008u,c->r[5]); // 80147944
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80147948
  W32(c->r[3]+0x00000010u,c->r[5]); // 8014794C
  W32(c->r[3]+0x00000014u,c->r[5]); // 80147950
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 80147954
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80147958
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 8014795C
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[1]);} // 80147960
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80147964
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80147968
L_8014796C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8014796C
  if (!crb(c,2)) { goto L_80147994; } // 80147970
  c->r[4]=0u+0x802D0000u; // 80147974
  c->r[3]=0u+0x00000000u; // 80147978
  c->r[4]=c->r[4]+0xFFFFDA80u; // 8014797C
  c->r[5]=0u+0xFFFFFFFDu; // 80147980
  c->r[4]=c->r[4]+0x000001EFu; // 80147984
  c->lr=0x8014798Cu; f_8017968C(c); // 80147988
  c->r[25]=0u+0x00000000u; // 8014798C
  goto L_80147998; // 80147990
L_80147994:;
  c->r[25]=c->r[3]|c->r[3]; // 80147994
L_80147998:;
  cmps(c,0,(int32_t)c->r[25],0); // 80147998
  if (!crb(c,2)) { goto L_801479B8; } // 8014799C
  c->r[4]=0u+0x802D0000u; // 801479A0
  c->r[3]=0u+0x00000000u; // 801479A4
  c->r[4]=c->r[4]+0xFFFFDA80u; // 801479A8
  c->r[4]=c->r[4]+0x000001FCu; // 801479AC
  c->lr=0x801479B4u; f_80179434(c); // 801479B0
  goto L_80147A90; // 801479B4
L_801479B8:;
  c->r[26]=R32(c->r[28]+0x000007F0u); // 801479B8
  cmps(c,0,(int32_t)c->r[26],0); // 801479BC
  if (crb(c,2)) { goto L_80147A04; } // 801479C0
  c->r[0]=R32(c->r[25]+0x00000000u); // 801479C4
  cmps(c,0,(int32_t)c->r[0],0); // 801479C8
  if (!crb(c,2)) { goto L_801479DC; } // 801479CC
  c->r[0]=R32(c->r[25]+0x00000004u); // 801479D0
  cmps(c,0,(int32_t)c->r[0],0); // 801479D4
  if (crb(c,2)) { goto L_801479EC; } // 801479D8
L_801479DC:;
  c->r[4]=0u+0x80330000u; // 801479DC
  c->r[3]=0u+0x00000000u; // 801479E0
  c->r[4]=c->r[4]+0x000008F4u; // 801479E4
  c->lr=0x801479ECu; f_80179434(c); // 801479E8
L_801479EC:;
  c->r[0]=R32(c->r[26]+0x00000000u); // 801479EC
  W32(c->r[25]+0x00000000u,c->r[0]); // 801479F0
  W32(c->r[25]+0x00000004u,c->r[26]); // 801479F4
  W32(c->r[26]+0x00000000u,c->r[25]); // 801479F8
  W32(c->r[28]+0x000007F0u,c->r[25]); // 801479FC
  goto L_80147A28; // 80147A00
L_80147A04:;
  c->r[0]=R32(c->r[28]+0x000007F4u); // 80147A04
  W32(c->r[28]+0x000007F0u,c->r[25]); // 80147A08
  cmps(c,0,(int32_t)c->r[0],0); // 80147A0C
  if (crb(c,2)) { goto L_80147A24; } // 80147A10
  c->r[4]=0u+0x80330000u; // 80147A14
  c->r[3]=0u+0x00000000u; // 80147A18
  c->r[4]=c->r[4]+0x000008CCu; // 80147A1C
  c->lr=0x80147A24u; f_80179434(c); // 80147A20
L_80147A24:;
  W32(c->r[28]+0x000007F4u,c->r[25]); // 80147A24
L_80147A28:;
  c->r[3]=R32(c->r[28]+0x000007F8u); // 80147A28
  c->r[0]=c->r[3]+0x00000001u; // 80147A2C
  W32(c->r[28]+0x000007F8u,c->r[0]); // 80147A30
  c->r[3]=R32(c->r[27]+0x00000008u); // 80147A34
  c->r[3]=R32(c->r[3]+c->r[30]); // 80147A38
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147A3C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80147A40
  c->ctr=c->r[12]; // 80147A44
  if (true) { c->lr=0x80147A4Cu; dispatch(c,c->ctr); } // 80147A48
  c->r[12]=R32(c->r[25]+0x0000000Cu); // 80147A4C
  c->r[4]=c->r[3]|c->r[3]; // 80147A50
  c->r[3]=c->r[25]|c->r[25]; // 80147A54
  c->r[12]=R32(c->r[12]+0x00000038u); // 80147A58
  c->ctr=c->r[12]; // 80147A5C
  if (true) { c->lr=0x80147A64u; dispatch(c,c->ctr); } // 80147A60
L_80147A64:;
  c->r[12]=R32(c->r[25]+0x0000000Cu); // 80147A64
  c->r[3]=c->r[25]|c->r[25]; // 80147A68
  c->r[4]=0u+0x00000001u; // 80147A6C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80147A70
  c->ctr=c->r[12]; // 80147A74
  if (true) { c->lr=0x80147A7Cu; dispatch(c,c->ctr); } // 80147A78
L_80147A7C:;
  c->r[30]=c->r[30]+0x00000004u; // 80147A7C
  c->r[29]=c->r[29]+0x00000001u; // 80147A80
L_80147A84:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 80147A84
  cmpu(c,0,c->r[29],c->r[0]); // 80147A88
  if (crb(c,0)) { IRQCHK(c); goto L_801478C0; } // 80147A8C
L_80147A90:;
  c->r[10]=c->r[31]|c->r[31]; // 80147A90
  c->r[11]=c->r[10]+0x00000040u; // 80147A94
  c->lr=0x80147A9Cu; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80147A98
  c->r[10]=R32(c->r[1]+0x00000000u); // 80147A9C
  c->r[0]=R32(c->r[10]+0x00000004u); // 80147AA0
  c->r[1]=c->r[10]|c->r[10]; // 80147AA4
  c->lr=c->r[0]; // 80147AA8
  return; // 80147AAC
}

// GetCueSheet__15CriAuAisacGroupFUl
void f_80147AB0(Ctx* __restrict c) {
  trace_call(0x80147AB0u);
  c->r[3]=R32(c->r[3]+0x00000008u); // 80147AB0
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80147AB4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80147AB8
  cmps(c,0,(int32_t)c->r[3],0); // 80147ABC
  if (crb(c,2)) { goto L_80147ACC; } // 80147AC0
  c->r[3]=R32(c->r[3]+0x00000008u); // 80147AC4
  return; // 80147AC8
L_80147ACC:;
  c->r[3]=0u+0x00000000u; // 80147ACC
  return; // 80147AD0
}

// Create__17CriAuAisacControlFP15_criheap_structf
void f_80147AD4(Ctx* __restrict c) {
  trace_call(0x80147AD4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147AD4
  c->r[0]=c->lr; // 80147AD8
  c->r[5]=0u+0x802D0000u; // 80147ADC
  c->r[4]=c->r[3]|c->r[3]; // 80147AE0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80147AE4
  c->r[5]=c->r[5]+0xFFFFDA80u; // 80147AE8
  c->r[6]=c->r[5]+0x000001E0u; // 80147AEC
  c->r[3]=0u+0x00000030u; // 80147AF0
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80147AF4
  c->r[5]=0u+0x00000002u; // 80147AF8
  c->r[7]=0u+0x00000004u; // 80147AFC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80147B00
  c->f[31]=c->f[1]; // 80147B04
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80147B08
  c->r[31]=c->r[1]|c->r[1]; // 80147B0C
  c->lr=0x80147B14u; f_8017BF5C(c); // 80147B10
  cmps(c,0,(int32_t)c->r[3],0); // 80147B14
  if (crb(c,2)) { goto L_80147B64; } // 80147B18
  c->r[5]=0u+0x00000000u; // 80147B1C
  W32(c->r[3]+0x00000000u,c->r[5]); // 80147B20
  c->r[4]=0u+0x80330000u; // 80147B24
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147B28
  W32(c->r[3]+0x00000004u,c->r[5]); // 80147B2C
  c->r[4]=c->r[4]+0x0000086Cu; // 80147B30
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147B34
  c->r[0]=0u+0x00000001u; // 80147B38
  W32(c->r[3]+0x00000008u,c->r[5]); // 80147B3C
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 80147B40
  W32(c->r[3]+0x00000010u,c->r[5]); // 80147B44
  W32(c->r[3]+0x00000014u,c->r[5]); // 80147B48
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 80147B4C
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[0]);} // 80147B50
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[31]);} // 80147B54
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[31]);} // 80147B58
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80147B5C
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80147B60
L_80147B64:;
  cmps(c,0,(int32_t)c->r[3],0); // 80147B64
  if (!crb(c,2)) { goto L_80147B88; } // 80147B68
  c->r[4]=0u+0x802D0000u; // 80147B6C
  c->r[3]=0u+0x00000000u; // 80147B70
  c->r[4]=c->r[4]+0xFFFFDA80u; // 80147B74
  c->r[5]=0u+0xFFFFFFFDu; // 80147B78
  c->r[4]=c->r[4]+0x000001EFu; // 80147B7C
  c->lr=0x80147B84u; f_8017968C(c); // 80147B80
  c->r[3]=0u+0x00000000u; // 80147B84
L_80147B88:;
  c->r[10]=c->r[31]|c->r[31]; // 80147B88
  {uint32_t ea=c->r[10]+0x00000038u; psq_load(c,31,ea,0,0);} // 80147B8C
  {uint32_t ea=c->r[31]+0x00000030u; c->f[31]=RF64(ea);} // 80147B90
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80147B94
  c->r[10]=R32(c->r[1]+0x00000000u); // 80147B98
  c->r[0]=R32(c->r[10]+0x00000004u); // 80147B9C
  c->r[1]=c->r[10]|c->r[10]; // 80147BA0
  c->lr=c->r[0]; // 80147BA4
  return; // 80147BA8
}

// Destroy__17CriAuAisacControlFv
void f_80147BAC(Ctx* __restrict c) {
  trace_call(0x80147BACu);
  cmps(c,0,(int32_t)c->r[3],0); // 80147BAC
  if (crb(c,2)) return; // 80147BB0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80147BB4
  c->r[4]=0u+0x00000001u; // 80147BB8
  c->r[12]=R32(c->r[12]+0x00000048u); // 80147BBC
  c->ctr=c->r[12]; // 80147BC0
  if (true) { dispatch(c,c->ctr); return; } // 80147BC4
  return; // 80147BC8
}

// __dt__17CriAuAisacControlFv
void f_80147BCC(Ctx* __restrict c) {
  trace_call(0x80147BCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147BCC
  c->r[0]=c->lr; // 80147BD0
  cmps(c,0,(int32_t)c->r[3],0); // 80147BD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147BD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147BDC
  c->r[31]=c->r[3]|c->r[3]; // 80147BE0
  if (crb(c,2)) { goto L_80147BF8; } // 80147BE4
  cmps(c,0,(int32_t)c->r[4],0); // 80147BE8
  if (!crb(c,1)) { goto L_80147BF8; } // 80147BEC
  c->r[4]=0u+0x00000030u; // 80147BF0
  c->lr=0x80147BF8u; f_8017BFE8(c); // 80147BF4
L_80147BF8:;
  c->r[3]=c->r[31]|c->r[31]; // 80147BF8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80147BFC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147C00
  c->lr=c->r[0]; // 80147C04
  c->r[1]=c->r[1]+0x00000010u; // 80147C08
  return; // 80147C0C
}

// SetPlayerReferenceCounter__17CriAuAisacControlFl
void f_80147C10(Ctx* __restrict c) {
  trace_call(0x80147C10u);
  W32(c->r[3]+0x00000010u,c->r[4]); // 80147C10
  return; // 80147C14
}

// GetPlayerReferenceCounter__17CriAuAisacControlFv
void f_80147C18(Ctx* __restrict c) {
  trace_call(0x80147C18u);
  c->r[3]=R32(c->r[3]+0x00000010u); // 80147C18
  return; // 80147C1C
}

// SetSynthReferenceFlag__17CriAuAisacControlFl
void f_80147C20(Ctx* __restrict c) {
  trace_call(0x80147C20u);
  W32(c->r[3]+0x00000014u,c->r[4]); // 80147C20
  return; // 80147C24
}

// GetSynthReferenceFlag__17CriAuAisacControlFv
void f_80147C28(Ctx* __restrict c) {
  trace_call(0x80147C28u);
  c->r[3]=R32(c->r[3]+0x00000014u); // 80147C28
  return; // 80147C2C
}

// SetControlFlag__17CriAuAisacControlFl
void f_80147C30(Ctx* __restrict c) {
  trace_call(0x80147C30u);
  W32(c->r[3]+0x0000002Cu,c->r[4]); // 80147C30
  return; // 80147C34
}

// SetControlValue__17CriAuAisacControlFf
void f_80147C38(Ctx* __restrict c) {
  trace_call(0x80147C38u);
  {uint32_t ea=c->r[3]+0x00000020u; WF32(ea,c->f[1]);} // 80147C38
  return; // 80147C3C
}

// GetControlValue__17CriAuAisacControlFv
void f_80147C40(Ctx* __restrict c) {
  trace_call(0x80147C40u);
  {uint32_t ea=c->r[3]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147C40
  return; // 80147C44
}

// SetRandomRange__17CriAuAisacControlFff
void f_80147C48(Ctx* __restrict c) {
  trace_call(0x80147C48u);
  {uint32_t ea=c->r[3]+0x00000018u; WF32(ea,c->f[1]);} // 80147C48
  {uint32_t ea=c->r[3]+0x0000001Cu; WF32(ea,c->f[2]);} // 80147C4C
  return; // 80147C50
}

// GetRandomRangeOffset__17CriAuAisacControlFv
void f_80147C54(Ctx* __restrict c) {
  trace_call(0x80147C54u);
  {uint32_t ea=c->r[3]+0x00000018u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147C54
  return; // 80147C58
}

// GetRandomRangeGain__17CriAuAisacControlFv
void f_80147C5C(Ctx* __restrict c) {
  trace_call(0x80147C5Cu);
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80147C5C
  return; // 80147C60
}

// SetControlName__17CriAuAisacControlFPCc
void f_80147C64(Ctx* __restrict c) {
  trace_call(0x80147C64u);
  W32(c->r[3]+0x00000028u,c->r[4]); // 80147C64
  return; // 80147C68
}

// GetControlName__17CriAuAisacControlFv
void f_80147C6C(Ctx* __restrict c) {
  trace_call(0x80147C6Cu);
  c->r[3]=R32(c->r[3]+0x00000028u); // 80147C6C
  return; // 80147C70
}

// Randomize__17CriAuAisacControlFf
void f_80147C74(Ctx* __restrict c) {
  trace_call(0x80147C74u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147C74
  c->r[0]=c->lr; // 80147C78
  W32(c->r[1]+0x00000044u,c->r[0]); // 80147C7C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80147C80
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80147C84
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80147C88
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80147C8C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80147C90
  W32(c->r[1]+0x00000018u,c->r[30]); // 80147C94
  c->r[30]=c->r[3]|c->r[3]; // 80147C98
  {uint32_t ea=c->r[3]+0x0000001Cu; c->f[3]=c->ps1[3]=RF32(ea);} // 80147C9C
  {uint32_t ea=c->r[3]+0x00000018u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147CA0
  {uint32_t ea=c->r[3]+0x00000020u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147CA4
  c->f[1]=c->ps1[1]=S(std::fma(c->f[1],c->f[3],c->f[0])); // 80147CA8
  {uint32_t ea=c->r[2]+0xFFFFB2F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147CAC
  {uint32_t ea=c->r[3]+0x00000024u; WF32(ea,c->f[2]);} // 80147CB0
  fcmp(c,0,c->f[1],c->f[0]); // 80147CB4
  if (!crb(c,1)) { goto L_80147D40; } // 80147CB8
  c->f[31]=c->ps1[31]=S(c->f[2]-c->f[1]); // 80147CBC
  c->f[1]=c->ps1[1]=S(c->f[2]+c->f[1]); // 80147CC0
  fcmp(c,0,c->f[31],c->f[0]); // 80147CC4
  if (!crb(c,1)) { goto L_80147CD0; } // 80147CC8
  goto L_80147CD4; // 80147CCC
L_80147CD0:;
  c->f[31]=c->f[0]; // 80147CD0
L_80147CD4:;
  {uint32_t ea=c->r[2]+0xFFFFB2F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147CD4
  fcmp(c,0,c->f[1],c->f[0]); // 80147CD8
  if (!crb(c,0)) { goto L_80147CE4; } // 80147CDC
  goto L_80147CE8; // 80147CE0
L_80147CE4:;
  c->f[1]=c->f[0]; // 80147CE4
L_80147CE8:;
  c->f[30]=c->ps1[30]=S(c->f[1]-c->f[31]); // 80147CE8
  c->lr=0x80147CF0u; f_80148044(c); // 80147CEC
  c->r[31]=R32(c->r[3]+0x00000004u); // 80147CF0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80147CF4
  c->r[3]=c->r[31]|c->r[31]; // 80147CF8
  c->ctr=c->r[12]; // 80147CFC
  if (true) { c->lr=0x80147D04u; dispatch(c,c->ctr); } // 80147D00
  c->r[4]=0u+0x43300000u; // 80147D04
  c->r[3]=c->r[3]^0x80000000u; // 80147D08
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 80147D0C
  c->r[0]=c->r[31]^0x80000000u; // 80147D10
  {uint32_t ea=c->r[2]+0xFFFFB2F8u; c->f[2]=RF64(ea);} // 80147D14
  W32(c->r[1]+0x00000008u,c->r[4]); // 80147D18
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147D1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147D20
  c->f[1]=c->ps1[1]=S(c->f[0]-c->f[2]); // 80147D24
  W32(c->r[1]+0x00000010u,c->r[4]); // 80147D28
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80147D2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80147D30
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80147D34
  c->f[0]=c->ps1[0]=S(std::fma(c->f[30],c->f[0],c->f[31])); // 80147D38
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 80147D3C
L_80147D40:;
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 80147D40
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80147D44
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 80147D48
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80147D4C
  {uint32_t ea=c->r[30]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147D50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80147D54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80147D58
  c->r[0]=R32(c->r[1]+0x00000044u); // 80147D5C
  c->lr=c->r[0]; // 80147D60
  c->r[1]=c->r[1]+0x00000040u; // 80147D64
  return; // 80147D68
}

// GetRandomizedValue__17CriAuAisacControlFfl
void f_80147D6C(Ctx* __restrict c) {
  trace_call(0x80147D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147D6C
  c->r[0]=c->lr; // 80147D70
  cmps(c,0,(int32_t)c->r[4],0); // 80147D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80147D7C
  c->r[31]=c->r[3]|c->r[3]; // 80147D80
  if (crb(c,2)) { goto L_80147DA0; } // 80147D84
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80147D88
  c->r[12]=R32(c->r[12]+0x00000040u); // 80147D8C
  c->ctr=c->r[12]; // 80147D90
  if (true) { c->lr=0x80147D98u; dispatch(c,c->ctr); } // 80147D94
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 80147D98
  goto L_80147DC0; // 80147D9C
L_80147DA0:;
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80147DA0
  cmps(c,0,(int32_t)c->r[0],0); // 80147DA4
  if (crb(c,2)) { goto L_80147DC0; } // 80147DA8
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80147DAC
  c->r[12]=R32(c->r[12]+0x00000040u); // 80147DB0
  c->ctr=c->r[12]; // 80147DB4
  if (true) { c->lr=0x80147DBCu; dispatch(c,c->ctr); } // 80147DB8
  {uint32_t ea=c->r[31]+0x00000024u; WF32(ea,c->f[1]);} // 80147DBC
L_80147DC0:;
  {uint32_t ea=c->r[31]+0x00000024u; c->f[1]=c->ps1[1]=RF32(ea);} // 80147DC0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80147DC4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80147DC8
  c->lr=c->r[0]; // 80147DCC
  c->r[1]=c->r[1]+0x00000010u; // 80147DD0
  return; // 80147DD4
}

// CalcStreamingMinimumBufferSize__12CriAuUtilityFUlPQ25CriAu15StreamSpecSoundfR8CriError
void f_80147DD8(Ctx* __restrict c) {
  trace_call(0x80147DD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80147DD8
  c->r[0]=c->lr; // 80147DDC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80147DE0
  c->r[11]=c->r[1]+0x00000030u; // 80147DE4
  c->lr=0x80147DECu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80147DE8
  cmpu(c,0,c->r[3],0x00000001u); // 80147DEC
  c->r[6]=0u+0x43300000u; // 80147DF0
  c->r[0]=0u+0x00000000u; // 80147DF4
  W32(c->r[1]+0x00000008u,c->r[6]); // 80147DF8
  c->r[31]=c->r[3]|c->r[3]; // 80147DFC
  W32(c->r[1]+0x00000010u,c->r[6]); // 80147E00
  W32(c->r[5]+0x00000000u,c->r[0]); // 80147E04
  if (crb(c,1)) { goto L_80147E14; } // 80147E08
  {uint32_t ea=c->r[2]+0xFFFFB300u; c->f[4]=c->ps1[4]=RF32(ea);} // 80147E0C
  goto L_80147E34; // 80147E10
L_80147E14:;
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80147E14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80147E18
  {uint32_t ea=c->r[2]+0xFFFFB310u; c->f[3]=RF64(ea);} // 80147E1C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147E20
  {uint32_t ea=c->r[2]+0xFFFFB300u; c->f[2]=c->ps1[2]=RF32(ea);} // 80147E24
  c->f[3]=c->ps1[3]=S(c->f[0]-c->f[3]); // 80147E28
  {uint32_t ea=c->r[2]+0xFFFFB304u; c->f[0]=c->ps1[0]=RF32(ea);} // 80147E2C
  c->f[4]=c->ps1[4]=S(std::fma(c->f[2],c->f[3],c->f[0])); // 80147E30
L_80147E34:;
  cmps(c,0,(int32_t)c->r[3],0); // 80147E34
  {uint32_t ea=c->r[2]+0xFFFFB308u; c->f[5]=c->ps1[5]=RF32(ea);} // 80147E38
  c->r[6]=0u+0x00000000u; // 80147E3C
  if (crb(c,2)) { goto L_80147FE0; } // 80147E40
  cmpu(c,0,c->r[3],0x00000008u); // 80147E44
  c->r[7]=c->r[3]+0xFFFFFFF8u; // 80147E48
  if (!crb(c,1)) { goto L_80147F98; } // 80147E4C
  c->r[0]=c->r[7]+0x00000007u; // 80147E50
  c->r[5]=c->r[4]|c->r[4]; // 80147E54
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 80147E58
  {uint32_t ea=c->r[2]+0xFFFFB310u; c->f[3]=RF64(ea);} // 80147E5C
  c->ctr=c->r[0]; // 80147E60
  cmpu(c,0,c->r[7],0x00000000u); // 80147E64
  if (!crb(c,1)) { goto L_80147F98; } // 80147E68
L_80147E6C:;
  c->r[7]=R32(c->r[5]+0x00000008u); // 80147E6C
  c->r[6]=c->r[6]+0x00000008u; // 80147E70
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80147E74
  c->r[9]=R32(c->r[5]+0x00000018u); // 80147E78
  c->r[10]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 80147E7C
  c->r[8]=R32(c->r[5]+0x0000001Cu); // 80147E80
  c->r[7]=R32(c->r[5]+0x00000028u); // 80147E84
  c->r[0]=R32(c->r[5]+0x0000002Cu); // 80147E88
  c->r[28]=R32(c->r[5]+0x00000038u); // 80147E8C
  c->r[29]=R32(c->r[5]+0x0000003Cu); // 80147E90
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 80147E94
  c->r[9]=rotl(c->r[10],27)&0x07FFFFFFu; // 80147E98
  c->r[30]=R32(c->r[5]+0x00000048u); // 80147E9C
  c->r[12]=R32(c->r[5]+0x0000004Cu); // 80147EA0
  c->r[11]=R32(c->r[5]+0x00000058u); // 80147EA4
  c->r[10]=R32(c->r[5]+0x0000005Cu); // 80147EA8
  c->r[27]=(uint32_t)((int32_t)c->r[9]*(int32_t)18); // 80147EAC
  c->r[26]=rotl(c->r[8],27)&0x07FFFFFFu; // 80147EB0
  c->r[9]=R32(c->r[5]+0x00000068u); // 80147EB4
  W32(c->r[1]+0x00000014u,c->r[27]); // 80147EB8
  c->r[27]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 80147EBC
  c->r[8]=R32(c->r[5]+0x0000006Cu); // 80147EC0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80147EC4
  c->r[7]=R32(c->r[5]+0x00000078u); // 80147EC8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147ECC
  c->r[0]=R32(c->r[5]+0x0000007Cu); // 80147ED0
  c->r[26]=(uint32_t)((int32_t)c->r[26]*(int32_t)18); // 80147ED4
  c->r[27]=rotl(c->r[27],27)&0x07FFFFFFu; // 80147ED8
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147EDC
  c->r[5]=c->r[5]+0x00000080u; // 80147EE0
  W32(c->r[1]+0x0000000Cu,c->r[26]); // 80147EE4
  c->r[29]=(uint32_t)((int32_t)c->r[28]*(int32_t)c->r[29]); // 80147EE8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147EEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147EF0
  c->r[28]=(uint32_t)((int32_t)c->r[27]*(int32_t)18); // 80147EF4
  c->r[29]=rotl(c->r[29],27)&0x07FFFFFFu; // 80147EF8
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147EFC
  W32(c->r[1]+0x00000014u,c->r[28]); // 80147F00
  c->r[12]=(uint32_t)((int32_t)c->r[30]*(int32_t)c->r[12]); // 80147F04
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80147F08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147F0C
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)18); // 80147F10
  c->r[12]=rotl(c->r[12],27)&0x07FFFFFFu; // 80147F14
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147F18
  W32(c->r[1]+0x0000000Cu,c->r[30]); // 80147F1C
  c->r[10]=(uint32_t)((int32_t)c->r[11]*(int32_t)c->r[10]); // 80147F20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147F24
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147F28
  c->r[11]=(uint32_t)((int32_t)c->r[12]*(int32_t)18); // 80147F2C
  c->r[10]=rotl(c->r[10],27)&0x07FFFFFFu; // 80147F30
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147F34
  W32(c->r[1]+0x00000014u,c->r[11]); // 80147F38
  c->r[8]=(uint32_t)((int32_t)c->r[9]*(int32_t)c->r[8]); // 80147F3C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80147F40
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147F44
  c->r[9]=(uint32_t)((int32_t)c->r[10]*(int32_t)18); // 80147F48
  c->r[8]=rotl(c->r[8],27)&0x07FFFFFFu; // 80147F4C
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147F50
  W32(c->r[1]+0x0000000Cu,c->r[9]); // 80147F54
  c->r[0]=(uint32_t)((int32_t)c->r[7]*(int32_t)c->r[0]); // 80147F58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147F5C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147F60
  c->r[7]=(uint32_t)((int32_t)c->r[8]*(int32_t)18); // 80147F64
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80147F68
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147F6C
  W32(c->r[1]+0x00000014u,c->r[7]); // 80147F70
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 80147F74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80147F78
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80147F7C
  c->f[2]=c->ps1[2]=S(c->f[0]-c->f[3]); // 80147F80
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147F84
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[2],c->f[5])); // 80147F88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[3]); // 80147F8C
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147F90
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80147E6C; } // 80147F94
L_80147F98:;
  c->r[5]=rotl(c->r[6],4)&0xFFFFFFF0u; // 80147F98
  c->r[0]=c->r[3]-c->r[6]; // 80147F9C
  c->r[5]=c->r[4]+c->r[5]; // 80147FA0
  {uint32_t ea=c->r[2]+0xFFFFB310u; c->f[2]=RF64(ea);} // 80147FA4
  c->ctr=c->r[0]; // 80147FA8
  cmpu(c,0,c->r[6],c->r[3]); // 80147FAC
  if (!crb(c,0)) { goto L_80147FE0; } // 80147FB0
L_80147FB4:;
  c->r[3]=R32(c->r[5]+0x00000008u); // 80147FB4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80147FB8
  c->r[5]=c->r[5]+0x00000010u; // 80147FBC
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 80147FC0
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80147FC4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 80147FC8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80147FCC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 80147FD0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80147FD4
  c->f[5]=c->ps1[5]=S(std::fma(c->f[4],c->f[0],c->f[5])); // 80147FD8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80147FB4; } // 80147FDC
L_80147FE0:;
  c->r[3]=R32(c->r[4]+0x00000008u); // 80147FE0
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 80147FE4
  {uint32_t ea=c->r[2]+0xFFFFB310u; c->f[2]=RF64(ea);} // 80147FE8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)c->r[0]); // 80147FEC
  c->r[0]=rotl(c->r[0],27)&0x07FFFFFFu; // 80147FF0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)18); // 80147FF4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80147FF8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 80147FFC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[2]); // 80148000
  c->f[0]=c->ps1[0]=S(c->f[1]*c->f[0]); // 80148004
  fcmp(c,0,c->f[0],c->f[5]); // 80148008
  if (!crb(c,1)) { goto L_80148014; } // 8014800C
  c->f[5]=c->f[0]; // 80148010
L_80148014:;
  c->f[1]=c->f[5]; // 80148014
  c->lr=0x8014801Cu; f_800AD904(c); // 80148018
  c->r[0]=rotl(c->r[31],17)&0xFFFE0000u; // 8014801C
  cmpu(c,0,c->r[3],c->r[0]); // 80148020
  if (!crb(c,0)) { goto L_8014802C; } // 80148024
  c->r[3]=c->r[0]|c->r[0]; // 80148028
L_8014802C:;
  c->r[11]=c->r[1]+0x00000030u; // 8014802C
  c->lr=0x80148034u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80148030
  c->r[0]=R32(c->r[1]+0x00000034u); // 80148034
  c->lr=c->r[0]; // 80148038
  c->r[1]=c->r[1]+0x00000030u; // 8014803C
  return; // 80148040
}

// GetInstance__Q25CriAu20RandomFunctionObjectFv
void f_80148044(Ctx* __restrict c) {
  trace_call(0x80148044u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148044
  c->r[0]=c->lr; // 80148048
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014804C
  c->r[0]=R8(c->r[13]+0xFFFFA178u); // 80148050
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 80148054
  if (!crb(c,2)) { goto L_80148094; } // 80148058
  c->r[3]=0u+0x80150000u; // 8014805C
  c->r[6]=c->r[13]+0xFFFFA180u; // 80148060
  c->r[3]=c->r[3]+0xFFFF80E8u; // 80148064
  c->r[0]=0u+0x00007FFFu; // 80148068
  c->r[4]=0u+0x80150000u; // 8014806C
  c->r[5]=0u+0x803F0000u; // 80148070
  W32(c->r[13]+0xFFFFA180u,c->r[3]); // 80148074
  c->r[4]=c->r[4]+0xFFFF80A8u; // 80148078
  c->r[5]=c->r[5]+0xFFFFFCB8u; // 8014807C
  c->r[3]=c->r[13]+0xFFFFA180u; // 80148080
  W32(c->r[6]+0x00000004u,c->r[0]); // 80148084
  c->lr=0x8014808Cu; f_800ACF84(c); // 80148088
  c->r[0]=0u+0x00000001u; // 8014808C
  W8(c->r[13]+0xFFFFA178u,c->r[0]); // 80148090
L_80148094:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148094
  c->r[3]=c->r[13]+0xFFFFA180u; // 80148098
  c->lr=c->r[0]; // 8014809C
  c->r[1]=c->r[1]+0x00000010u; // 801480A0
  return; // 801480A4
}

// __dt__Q25CriAu20RandomFunctionObjectFv
void f_801480A8(Ctx* __restrict c) {
  trace_call(0x801480A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801480A8
  c->r[0]=c->lr; // 801480AC
  cmps(c,0,(int32_t)c->r[3],0); // 801480B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801480B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801480B8
  c->r[31]=c->r[3]|c->r[3]; // 801480BC
  if (crb(c,2)) { goto L_801480D0; } // 801480C0
  cmps(c,0,(int32_t)c->r[4],0); // 801480C4
  if (!crb(c,1)) { goto L_801480D0; } // 801480C8
  c->lr=0x801480D0u; f_80210AFC(c); // 801480CC
L_801480D0:;
  c->r[3]=c->r[31]|c->r[31]; // 801480D0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801480D4
  c->r[0]=R32(c->r[1]+0x00000014u); // 801480D8
  c->lr=c->r[0]; // 801480DC
  c->r[1]=c->r[1]+0x00000010u; // 801480E0
  return; // 801480E4
}

// DefaultRandomFunction__Q25CriAu20RandomFunctionObjectFl
void f_801480E8(Ctx* __restrict c) {
  trace_call(0x801480E8u);
  f_800B6218(c); return; // 801480E8
}

// GetInstance__Q25CriAu24VoiceLimitCallbackObjectFv
void f_801480EC(Ctx* __restrict c) {
  trace_call(0x801480ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801480EC
  c->r[0]=c->lr; // 801480F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801480F4
  c->r[0]=R8(c->r[13]+0xFFFFA188u); // 801480F8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[0]; cr0(c,c->r[0]); // 801480FC
  if (!crb(c,2)) { goto L_80148134; } // 80148100
  c->r[6]=c->r[13]+0xFFFFA190u; // 80148104
  c->r[0]=0u+0x00000000u; // 80148108
  c->r[4]=0u+0x80150000u; // 8014810C
  c->r[5]=0u+0x803F0000u; // 80148110
  W32(c->r[13]+0xFFFFA190u,c->r[0]); // 80148114
  c->r[4]=c->r[4]+0xFFFF8148u; // 80148118
  c->r[5]=c->r[5]+0xFFFFFCC4u; // 8014811C
  c->r[3]=c->r[13]+0xFFFFA190u; // 80148120
  W32(c->r[6]+0x00000004u,c->r[0]); // 80148124
  c->lr=0x8014812Cu; f_800ACF84(c); // 80148128
  c->r[0]=0u+0x00000001u; // 8014812C
  W8(c->r[13]+0xFFFFA188u,c->r[0]); // 80148130
L_80148134:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148134
  c->r[3]=c->r[13]+0xFFFFA190u; // 80148138
  c->lr=c->r[0]; // 8014813C
  c->r[1]=c->r[1]+0x00000010u; // 80148140
  return; // 80148144
}

// __dt__Q25CriAu24VoiceLimitCallbackObjectFv
void f_80148148(Ctx* __restrict c) {
  trace_call(0x80148148u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148148
  c->r[0]=c->lr; // 8014814C
  cmps(c,0,(int32_t)c->r[3],0); // 80148150
  W32(c->r[1]+0x00000014u,c->r[0]); // 80148154
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80148158
  c->r[31]=c->r[3]|c->r[3]; // 8014815C
  if (crb(c,2)) { goto L_80148170; } // 80148160
  cmps(c,0,(int32_t)c->r[4],0); // 80148164
  if (!crb(c,1)) { goto L_80148170; } // 80148168
  c->lr=0x80148170u; f_80210AFC(c); // 8014816C
L_80148170:;
  c->r[3]=c->r[31]|c->r[31]; // 80148170
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148174
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148178
  c->lr=c->r[0]; // 8014817C
  c->r[1]=c->r[1]+0x00000010u; // 80148180
  return; // 80148184
}

// Callback__Q25CriAu24VoiceLimitCallbackObjectCFRCQ25CriAu29VoiceLimitCallbackInformation
void f_80148188(Ctx* __restrict c) {
  trace_call(0x80148188u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80148188
  c->r[5]=c->r[3]|c->r[3]; // 8014818C
  cmps(c,0,(int32_t)c->r[12],0); // 80148190
  if (crb(c,2)) return; // 80148194
  c->r[3]=c->r[4]|c->r[4]; // 80148198
  c->r[4]=R32(c->r[5]+0x00000004u); // 8014819C
  c->ctr=c->r[12]; // 801481A0
  if (true) { dispatch(c,c->ctr); return; } // 801481A4
  return; // 801481A8
}

// AllocateStreamingBuffer__5CriAuFP15_criheap_structUlR8CriError
void f_801481AC(Ctx* __restrict c) {
  trace_call(0x801481ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801481AC
  c->r[0]=c->lr; // 801481B0
  c->r[6]=0u+0x00010000u; // 801481B4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801481B8
  c->r[6]=c->r[6]+0xFFFF8000u; // 801481BC
  c->r[0]=0u+0x00000000u; // 801481C0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801481C4
  c->r[31]=c->r[5]|c->r[5]; // 801481C8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801481CC
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 801481D0
  cmpu(c,0,c->r[4],c->r[0]); // 801481D4
  if (crb(c,0)) { goto L_80148220; } // 801481D8
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801481DC
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 801481E0
  cmpu(c,0,c->r[4],c->r[0]); // 801481E4
  if (crb(c,0)) { goto L_80148220; } // 801481E8
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801481EC
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 801481F0
  cmpu(c,0,c->r[4],c->r[0]); // 801481F4
  if (crb(c,0)) { goto L_80148220; } // 801481F8
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 801481FC
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 80148200
  cmpu(c,0,c->r[4],c->r[0]); // 80148204
  if (crb(c,0)) { goto L_80148220; } // 80148208
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8014820C
  c->r[0]=rotl(c->r[6],8)&0xFFFFFF00u; // 80148210
  cmpu(c,0,c->r[4],c->r[0]); // 80148214
  if (crb(c,0)) { goto L_80148220; } // 80148218
  c->r[6]=rotl(c->r[6],1)&0xFFFFFFFEu; // 8014821C
L_80148220:;
  c->r[5]=c->r[6]|c->r[6]; // 80148220
  c->r[4]=c->r[4]+0x00000400u; // 80148224
  c->lr=0x8014822Cu; f_801779B4(c); // 80148228
  cmps(c,0,(int32_t)c->r[3],0); // 8014822C
  if (!crb(c,2)) { goto L_8014823C; } // 80148230
  c->r[0]=0u+0xFFFFFFFFu; // 80148234
  W32(c->r[31]+0x00000000u,c->r[0]); // 80148238
L_8014823C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014823C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148240
  c->lr=c->r[0]; // 80148244
  c->r[1]=c->r[1]+0x00000010u; // 80148248
  return; // 8014824C
}

// ReleaseStreamingBuffer__5CriAuFR8CriError
void f_80148250(Ctx* __restrict c) {
  trace_call(0x80148250u);
  c->r[0]=0u+0x00000000u; // 80148250
  W32(c->r[3]+0x00000000u,c->r[0]); // 80148254
  f_80177A84(c); return; // 80148258
}

// Create__13CriAuCueSheetFP15_criheap_structR8CriError
void f_8014825C(Ctx* __restrict c) {
  trace_call(0x8014825Cu);
  f_8014830C(c); return; // 8014825C
}

// __ct__16CriAuCueSheetLocFP15_criheap_struct
void f_80148260(Ctx* __restrict c) {
  trace_call(0x80148260u);
  c->r[5]=0u+0x80330000u; // 80148260
  c->r[0]=0u+0x00000000u; // 80148264
  c->r[5]=c->r[5]+0x00000A48u; // 80148268
  W32(c->r[3]+0x00000004u,c->r[4]); // 8014826C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80148270
  W32(c->r[3]+0x00000000u,c->r[5]); // 80148274
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 80148278
  W32(c->r[3]+0x00000010u,c->r[0]); // 8014827C
  W32(c->r[3]+0x00000014u,c->r[0]); // 80148280
  W32(c->r[3]+0x00000018u,c->r[0]); // 80148284
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 80148288
  W32(c->r[3]+0x00000020u,c->r[0]); // 8014828C
  W32(c->r[3]+0x00000024u,c->r[0]); // 80148290
  W32(c->r[3]+0x00000028u,c->r[0]); // 80148294
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80148298
  W32(c->r[3]+0x00000030u,c->r[0]); // 8014829C
  W32(c->r[3]+0x00000034u,c->r[0]); // 801482A0
  W32(c->r[3]+0x00000038u,c->r[0]); // 801482A4
  W32(c->r[3]+0x0000003Cu,c->r[0]); // 801482A8
  W32(c->r[3]+0x00000040u,c->r[0]); // 801482AC
  W32(c->r[3]+0x00000144u,c->r[0]); // 801482B0
  W32(c->r[3]+0x00000148u,c->r[0]); // 801482B4
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 801482B8
  W32(c->r[3]+0x00000150u,c->r[0]); // 801482BC
  W8(c->r[3]+0x00000044u,c->r[0]); // 801482C0
  return; // 801482C4
}

// __dt__16CriAuCueSheetLocFv
void f_801482C8(Ctx* __restrict c) {
  trace_call(0x801482C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801482C8
  c->r[0]=c->lr; // 801482CC
  cmps(c,0,(int32_t)c->r[3],0); // 801482D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801482D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801482D8
  c->r[31]=c->r[3]|c->r[3]; // 801482DC
  if (crb(c,2)) { goto L_801482F4; } // 801482E0
  cmps(c,0,(int32_t)c->r[4],0); // 801482E4
  if (!crb(c,1)) { goto L_801482F4; } // 801482E8
  c->r[4]=0u+0x00000154u; // 801482EC
  c->lr=0x801482F4u; f_8017BFE8(c); // 801482F0
L_801482F4:;
  c->r[3]=c->r[31]|c->r[31]; // 801482F4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801482F8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801482FC
  c->lr=c->r[0]; // 80148300
  c->r[1]=c->r[1]+0x00000010u; // 80148304
  return; // 80148308
}

// Create__16CriAuCueSheetLocFP15_criheap_structR8CriError
void f_8014830C(Ctx* __restrict c) {
  trace_call(0x8014830Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014830C
  c->r[0]=c->lr; // 80148310
  W32(c->r[1]+0x00000034u,c->r[0]); // 80148314
  c->r[0]=0u+0x00000000u; // 80148318
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8014831C
  c->r[31]=c->r[1]|c->r[1]; // 80148320
  W32(c->r[1]+0x00000028u,c->r[30]); // 80148324
  W32(c->r[1]+0x00000024u,c->r[29]); // 80148328
  c->r[29]=c->r[4]|c->r[4]; // 8014832C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80148330
  c->r[28]=c->r[3]|c->r[3]; // 80148334
  W32(c->r[4]+0x00000000u,c->r[0]); // 80148338
  c->r[0]=R32(c->r[13]+0xFFFF88F8u); // 8014833C
  cmps(c,0,(int32_t)c->r[0],0); // 80148340
  if (!crb(c,2)) { goto L_80148368; } // 80148344
  c->r[4]=0u+0x802D0000u; // 80148348
  c->r[3]=0u+0x00000000u; // 8014834C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148350
  c->lr=0x80148358u; f_80179434(c); // 80148354
  c->r[0]=0u+0xFFFFFFFFu; // 80148358
  W32(c->r[29]+0x00000000u,c->r[0]); // 8014835C
  c->r[3]=0u+0x00000000u; // 80148360
  goto L_801483CC; // 80148364
L_80148368:;
  c->r[5]=0u+0x802D0000u; // 80148368
  c->r[4]=c->r[28]|c->r[28]; // 8014836C
  c->r[5]=c->r[5]+0xFFFFDD30u; // 80148370
  c->r[3]=0u+0x00000154u; // 80148374
  c->r[5]=c->r[5]+0x00000044u; // 80148378
  c->r[6]=0u+0x00000004u; // 8014837C
  c->lr=0x80148384u; f_8017BEDC(c); // 80148380
  cmps(c,0,(int32_t)c->r[3],0); // 80148384
  c->r[30]=c->r[3]|c->r[3]; // 80148388
  if (crb(c,2)) { goto L_8014839C; } // 8014838C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80148390
  c->r[4]=c->r[28]|c->r[28]; // 80148394
  c->lr=0x8014839Cu; f_80148260(c); // 80148398
L_8014839C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8014839C
  if (!crb(c,2)) { goto L_801483C8; } // 801483A0
  c->r[4]=0u+0x802D0000u; // 801483A4
  c->r[5]=0u+0xFFFFFFFDu; // 801483A8
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801483AC
  W32(c->r[29]+0x00000000u,c->r[5]); // 801483B0
  c->r[3]=0u+0x00000000u; // 801483B4
  c->r[4]=c->r[4]+0x0000004Du; // 801483B8
  c->lr=0x801483C0u; f_8017968C(c); // 801483BC
  c->r[3]=0u+0x00000000u; // 801483C0
  goto L_801483CC; // 801483C4
L_801483C8:;
  c->r[3]=c->r[30]|c->r[30]; // 801483C8
L_801483CC:;
  c->r[10]=c->r[31]|c->r[31]; // 801483CC
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 801483D0
  c->r[30]=R32(c->r[10]+0x00000028u); // 801483D4
  c->r[29]=R32(c->r[10]+0x00000024u); // 801483D8
  c->r[28]=R32(c->r[10]+0x00000020u); // 801483DC
  c->r[10]=R32(c->r[1]+0x00000000u); // 801483E0
  c->r[0]=R32(c->r[10]+0x00000004u); // 801483E4
  c->r[1]=c->r[10]|c->r[10]; // 801483E8
  c->lr=c->r[0]; // 801483EC
  return; // 801483F0
}

// Destroy__16CriAuCueSheetLocFR8CriError
void f_801483F4(Ctx* __restrict c) {
  trace_call(0x801483F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801483F4
  c->r[0]=c->lr; // 801483F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801483FC
  c->r[0]=0u+0x00000000u; // 80148400
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80148404
  c->r[31]=c->r[3]|c->r[3]; // 80148408
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014840C
  c->r[0]=R32(c->r[3]+0x00000010u); // 80148410
  cmps(c,0,(int32_t)c->r[0],0); // 80148414
  if (crb(c,2)) { goto L_80148430; } // 80148418
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014841C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80148420
  c->ctr=c->r[12]; // 80148424
  if (true) { c->lr=0x8014842Cu; dispatch(c,c->ctr); } // 80148428
  goto L_80148440; // 8014842C
L_80148430:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80148430
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80148434
  c->ctr=c->r[12]; // 80148438
  if (true) { c->lr=0x80148440u; dispatch(c,c->ctr); } // 8014843C
L_80148440:;
  c->r[3]=R32(c->r[31]+0x00000144u); // 80148440
  cmps(c,0,(int32_t)c->r[3],0); // 80148444
  if (crb(c,2)) { goto L_80148464; } // 80148448
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014844C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80148450
  c->ctr=c->r[12]; // 80148454
  if (true) { c->lr=0x8014845Cu; dispatch(c,c->ctr); } // 80148458
  c->r[0]=0u+0x00000000u; // 8014845C
  W32(c->r[31]+0x00000144u,c->r[0]); // 80148460
L_80148464:;
  cmps(c,0,(int32_t)c->r[31],0); // 80148464
  if (crb(c,2)) { goto L_80148484; } // 80148468
  c->r[12]=R32(c->r[31]+0x00000000u); // 8014846C
  c->r[3]=c->r[31]|c->r[31]; // 80148470
  c->r[4]=0u+0x00000001u; // 80148474
  c->r[12]=R32(c->r[12]+0x000000A0u); // 80148478
  c->ctr=c->r[12]; // 8014847C
  if (true) { c->lr=0x80148484u; dispatch(c,c->ctr); } // 80148480
L_80148484:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148484
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148488
  c->lr=c->r[0]; // 8014848C
  c->r[1]=c->r[1]+0x00000010u; // 80148490
  return; // 80148494
}

// LoadCueSheetBinaryFileFromMemory__16CriAuCueSheetLocFPCUcUlR8CriError
void f_80148498(Ctx* __restrict c) {
  trace_call(0x80148498u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148498
  c->r[0]=c->lr; // 8014849C
  W32(c->r[1]+0x00000034u,c->r[0]); // 801484A0
  c->r[0]=0u+0x00000000u; // 801484A4
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801484A8
  c->r[27]=c->r[3]|c->r[3]; // 801484AC
  c->r[28]=c->r[4]|c->r[4]; // 801484B0
  c->r[30]=c->r[5]|c->r[5]; // 801484B4
  c->r[29]=c->r[6]|c->r[6]; // 801484B8
  W32(c->r[6]+0x00000000u,c->r[0]); // 801484BC
  c->r[0]=R32(c->r[3]+0x00000148u); // 801484C0
  cmps(c,0,(int32_t)c->r[0],1); // 801484C4
  if (!crb(c,2)) { goto L_801484EC; } // 801484C8
  c->r[3]=0u+0x802D0000u; // 801484CC
  c->r[0]=0u+0xFFFFFFFFu; // 801484D0
  c->r[3]=c->r[3]+0xFFFFDD30u; // 801484D4
  W32(c->r[6]+0x00000000u,c->r[0]); // 801484D8
  c->r[4]=c->r[3]+0x00000059u; // 801484DC
  c->r[3]=0u+0x00000000u; // 801484E0
  c->lr=0x801484E8u; f_80179434(c); // 801484E4
  goto L_8014864C; // 801484E8
L_801484EC:;
  c->r[0]=R32(c->r[3]+0x00000010u); // 801484EC
  cmps(c,0,(int32_t)c->r[0],0); // 801484F0
  if (crb(c,2)) { goto L_8014850C; } // 801484F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801484F8
  c->r[4]=c->r[1]+0x00000008u; // 801484FC
  c->r[12]=R32(c->r[12]+0x00000020u); // 80148500
  c->ctr=c->r[12]; // 80148504
  if (true) { c->lr=0x8014850Cu; dispatch(c,c->ctr); } // 80148508
L_8014850C:;
  c->r[0]=R32(c->r[27]+0x0000000Cu); // 8014850C
  cmps(c,0,(int32_t)c->r[0],0); // 80148510
  if (crb(c,2)) { goto L_80148538; } // 80148514
  c->r[3]=0u+0x802D0000u; // 80148518
  c->r[0]=0u+0xFFFFFFFFu; // 8014851C
  c->r[3]=c->r[3]+0xFFFFDD30u; // 80148520
  W32(c->r[29]+0x00000000u,c->r[0]); // 80148524
  c->r[4]=c->r[3]+0x00000088u; // 80148528
  c->r[3]=0u+0x00000000u; // 8014852C
  c->lr=0x80148534u; f_80179434(c); // 80148530
  goto L_8014864C; // 80148534
L_80148538:;
  c->r[3]=R32(c->r[27]+0x00000004u); // 80148538
  c->r[4]=c->r[28]|c->r[28]; // 8014853C
  c->r[5]=c->r[30]|c->r[30]; // 80148540
  c->lr=0x80148548u; f_8017F330(c); // 80148544
  cmps(c,0,(int32_t)c->r[3],0); // 80148548
  c->r[31]=c->r[3]|c->r[3]; // 8014854C
  if (!crb(c,2)) { goto L_80148570; } // 80148550
  c->r[4]=0u+0x802D0000u; // 80148554
  c->r[3]=0u+0x00000000u; // 80148558
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014855C
  c->r[4]=c->r[4]+0x000000AEu; // 80148560
  c->lr=0x80148568u; f_80179434(c); // 80148564
  c->r[30]=0u+0x00000000u; // 80148568
  goto L_80148580; // 8014856C
L_80148570:;
  c->lr=0x80148574u; f_8017A6A0(c); // 80148570
  c->r[30]=c->r[3]|c->r[3]; // 80148574
  c->r[3]=c->r[31]|c->r[31]; // 80148578
  c->lr=0x80148580u; f_8017BE04(c); // 8014857C
L_80148580:;
  cmps(c,0,(int32_t)c->r[30],0); // 80148580
  if (!crb(c,2)) { goto L_801485A8; } // 80148584
  c->r[3]=0u+0x802D0000u; // 80148588
  c->r[0]=0u+0xFFFFFFFFu; // 8014858C
  c->r[3]=c->r[3]+0xFFFFDD30u; // 80148590
  W32(c->r[29]+0x00000000u,c->r[0]); // 80148594
  c->r[4]=c->r[3]+0x000000D4u; // 80148598
  c->r[3]=0u+0x00000000u; // 8014859C
  c->lr=0x801485A4u; f_80179434(c); // 801485A0
  goto L_8014864C; // 801485A4
L_801485A8:;
  c->r[31]=0u+0x802D0000u; // 801485A8
  c->r[3]=R32(c->r[27]+0x00000004u); // 801485AC
  c->r[31]=c->r[31]+0xFFFFDD30u; // 801485B0
  c->r[4]=c->r[30]|c->r[30]; // 801485B4
  c->r[5]=c->r[31]+0x000000F9u; // 801485B8
  c->r[6]=0u+0x00000008u; // 801485BC
  c->lr=0x801485C4u; f_8017C100(c); // 801485C0
  cmps(c,0,(int32_t)c->r[3],0); // 801485C4
  W32(c->r[27]+0x00000010u,c->r[3]); // 801485C8
  if (!crb(c,2)) { goto L_801485EC; } // 801485CC
  c->r[0]=0u+0xFFFFFFFDu; // 801485D0
  W32(c->r[29]+0x00000000u,c->r[0]); // 801485D4
  c->r[4]=c->r[31]+0x00000108u; // 801485D8
  c->r[3]=0u+0x00000000u; // 801485DC
  c->r[5]=0u+0xFFFFFFFDu; // 801485E0
  c->lr=0x801485E8u; f_8017968C(c); // 801485E4
  goto L_8014864C; // 801485E8
L_801485EC:;
  W32(c->r[27]+0x00000014u,c->r[30]); // 801485EC
  c->r[4]=c->r[28]|c->r[28]; // 801485F0
  c->r[5]=c->r[30]|c->r[30]; // 801485F4
  c->lr=0x801485FCu; f_800043C4(c); // 801485F8
  c->r[0]=R32(c->r[27]+0x00000010u); // 801485FC
  c->r[3]=c->r[27]|c->r[27]; // 80148600
  W32(c->r[27]+0x0000000Cu,c->r[0]); // 80148604
  c->lr=0x8014860Cu; f_801513A0(c); // 80148608
  cmps(c,0,(int32_t)c->r[3],0); // 8014860C
  if (!crb(c,2)) { goto L_80148644; } // 80148610
  c->r[0]=0u+0xFFFFFFFFu; // 80148614
  W32(c->r[29]+0x00000000u,c->r[0]); // 80148618
  c->r[4]=c->r[31]+0x00000115u; // 8014861C
  c->r[3]=0u+0x00000000u; // 80148620
  c->lr=0x80148628u; f_80179434(c); // 80148624
  c->r[12]=R32(c->r[27]+0x00000000u); // 80148628
  c->r[3]=c->r[27]|c->r[27]; // 8014862C
  c->r[4]=c->r[1]+0x00000008u; // 80148630
  c->r[12]=R32(c->r[12]+0x00000020u); // 80148634
  c->ctr=c->r[12]; // 80148638
  if (true) { c->lr=0x80148640u; dispatch(c,c->ctr); } // 8014863C
  goto L_8014864C; // 80148640
L_80148644:;
  c->r[0]=0u+0x00000002u; // 80148644
  W32(c->r[27]+0x00000148u,c->r[0]); // 80148648
L_8014864C:;
  {uint32_t ea=c->r[1]+0x0000001Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8014864C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80148650
  c->lr=c->r[0]; // 80148654
  c->r[1]=c->r[1]+0x00000030u; // 80148658
  return; // 8014865C
}

// LoadCueSheetBinaryFileFromMemory__16CriAuCueSheetLocFPCcPCUcUlR8CriError
void f_80148660(Ctx* __restrict c) {
  trace_call(0x80148660u);
  c->r[0]=0u+0x00000000u; // 80148660
  W32(c->r[7]+0x00000000u,c->r[0]); // 80148664
  c->r[0]=c->r[4]|c->r[4]; // 80148668
  c->r[4]=c->r[5]|c->r[5]; // 8014866C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80148670
  c->r[5]=c->r[6]|c->r[6]; // 80148674
  c->r[6]=c->r[7]|c->r[7]; // 80148678
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014867C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80148680
  c->ctr=c->r[12]; // 80148684
  if (true) { dispatch(c,c->ctr); return; } // 80148688
}

// StartLoadingCueSheetBinaryFile__16CriAuCueSheetLocFP12CriFsManagerPCcR8CriError
void f_8014868C(Ctx* __restrict c) {
  trace_call(0x8014868Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014868C
  c->r[0]=c->lr; // 80148690
  cmps(c,0,(int32_t)c->r[4],0); // 80148694
  W32(c->r[1]+0x00000024u,c->r[0]); // 80148698
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014869C
  c->r[31]=c->r[6]|c->r[6]; // 801486A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801486A4
  c->r[30]=c->r[5]|c->r[5]; // 801486A8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801486AC
  c->r[29]=c->r[3]|c->r[3]; // 801486B0
  if (!crb(c,2)) { goto L_801486D8; } // 801486B4
  c->r[4]=0u+0x802D0000u; // 801486B8
  c->r[3]=0u+0x00000000u; // 801486BC
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801486C0
  c->r[4]=c->r[4]+0x0000013Bu; // 801486C4
  c->lr=0x801486CCu; f_80179434(c); // 801486C8
  c->r[0]=0u+0xFFFFFFFEu; // 801486CC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801486D0
  goto L_80148704; // 801486D4
L_801486D8:;
  c->r[3]=c->r[4]|c->r[4]; // 801486D8
  c->r[4]=c->r[13]+0xFFFFA338u; // 801486DC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801486E0
  c->r[12]=R32(c->r[12]+0x00000010u); // 801486E4
  c->ctr=c->r[12]; // 801486E8
  if (true) { c->lr=0x801486F0u; dispatch(c,c->ctr); } // 801486EC
  c->r[4]=c->r[3]|c->r[3]; // 801486F0
  c->r[3]=c->r[29]|c->r[29]; // 801486F4
  c->r[5]=c->r[30]|c->r[30]; // 801486F8
  c->r[6]=c->r[31]|c->r[31]; // 801486FC
  c->lr=0x80148704u; f_80153260(c); // 80148700
L_80148704:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80148704
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80148708
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014870C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80148710
  c->lr=c->r[0]; // 80148714
  c->r[1]=c->r[1]+0x00000020u; // 80148718
  return; // 8014871C
}

// StartLoadingCueSheetBinaryFile__16CriAuCueSheetLocFP17_CriFsBinderHnObjPCcR8CriError
void f_80148720(Ctx* __restrict c) {
  trace_call(0x80148720u);
  f_80153260(c); return; // 80148720
}

// GetLoadStatus__16CriAuCueSheetLocFR8CriError
void f_80148724(Ctx* __restrict c) {
  trace_call(0x80148724u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148724
  c->r[0]=c->lr; // 80148728
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014872C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80148730
  c->r[31]=0u+0x00000000u; // 80148734
  W32(c->r[1]+0x00000018u,c->r[30]); // 80148738
  c->r[30]=c->r[4]|c->r[4]; // 8014873C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80148740
  c->r[29]=c->r[3]|c->r[3]; // 80148744
  W32(c->r[4]+0x00000000u,c->r[31]); // 80148748
  c->r[0]=R32(c->r[3]+0x00000148u); // 8014874C
  cmps(c,0,(int32_t)c->r[0],1); // 80148750
  if (!crb(c,2)) { goto L_8014885C; } // 80148754
  c->r[3]=R32(c->r[3]+0x00000144u); // 80148758
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014875C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80148760
  c->ctr=c->r[12]; // 80148764
  if (true) { c->lr=0x8014876Cu; dispatch(c,c->ctr); } // 80148768
  cmps(c,0,(int32_t)c->r[3],0); // 8014876C
  if (crb(c,2)) { goto L_80148790; } // 80148770
  cmps(c,0,(int32_t)c->r[3],1); // 80148774
  if (crb(c,2)) { goto L_8014885C; } // 80148778
  cmps(c,0,(int32_t)c->r[3],2); // 8014877C
  if (crb(c,2)) { goto L_801487BC; } // 80148780
  cmps(c,0,(int32_t)c->r[3],3); // 80148784
  if (crb(c,2)) { goto L_80148834; } // 80148788
  goto L_80148840; // 8014878C
L_80148790:;
  c->r[3]=0u+0x802D0000u; // 80148790
  c->r[0]=0u+0xFFFFFFFFu; // 80148794
  c->r[3]=c->r[3]+0xFFFFDD30u; // 80148798
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014879C
  c->r[4]=c->r[3]+0x00000167u; // 801487A0
  c->r[5]=0u+0xFFFFFFFFu; // 801487A4
  c->r[3]=0u+0x00000000u; // 801487A8
  c->lr=0x801487B0u; f_8017968C(c); // 801487AC
  c->r[0]=0u+0x00000003u; // 801487B0
  W32(c->r[29]+0x00000148u,c->r[0]); // 801487B4
  goto L_8014885C; // 801487B8
L_801487BC:;
  c->r[3]=R32(c->r[29]+0x00000144u); // 801487BC
  cmps(c,0,(int32_t)c->r[3],0); // 801487C0
  if (crb(c,2)) { goto L_801487DC; } // 801487C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801487C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801487CC
  c->ctr=c->r[12]; // 801487D0
  if (true) { c->lr=0x801487D8u; dispatch(c,c->ctr); } // 801487D4
  W32(c->r[29]+0x00000144u,c->r[31]); // 801487D8
L_801487DC:;
  c->r[3]=c->r[29]|c->r[29]; // 801487DC
  c->lr=0x801487E4u; f_801513A0(c); // 801487E0
  cmps(c,0,(int32_t)c->r[3],0); // 801487E4
  if (!crb(c,2)) { goto L_80148828; } // 801487E8
  c->r[3]=0u+0x802D0000u; // 801487EC
  c->r[0]=0u+0xFFFFFFFFu; // 801487F0
  c->r[3]=c->r[3]+0xFFFFDD30u; // 801487F4
  W32(c->r[30]+0x00000000u,c->r[0]); // 801487F8
  c->r[4]=c->r[3]+0x00000174u; // 801487FC
  c->r[3]=0u+0x00000000u; // 80148800
  c->lr=0x80148808u; f_80179434(c); // 80148804
  c->r[12]=R32(c->r[29]+0x00000000u); // 80148808
  c->r[3]=c->r[29]|c->r[29]; // 8014880C
  c->r[4]=c->r[1]+0x00000008u; // 80148810
  c->r[12]=R32(c->r[12]+0x00000020u); // 80148814
  c->ctr=c->r[12]; // 80148818
  if (true) { c->lr=0x80148820u; dispatch(c,c->ctr); } // 8014881C
  c->r[0]=0u+0x00000003u; // 80148820
  W32(c->r[29]+0x00000148u,c->r[0]); // 80148824
L_80148828:;
  c->r[0]=0u+0x00000002u; // 80148828
  W32(c->r[29]+0x00000148u,c->r[0]); // 8014882C
  goto L_8014885C; // 80148830
L_80148834:;
  c->r[0]=0u+0x00000003u; // 80148834
  W32(c->r[29]+0x00000148u,c->r[0]); // 80148838
  goto L_8014885C; // 8014883C
L_80148840:;
  c->r[4]=0u+0x802D0000u; // 80148840
  c->r[3]=0u+0x00000000u; // 80148844
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148848
  c->r[4]=c->r[4]+0x0000019Au; // 8014884C
  c->lr=0x80148854u; f_80179434(c); // 80148850
  c->r[0]=0u+0x00000003u; // 80148854
  W32(c->r[29]+0x00000148u,c->r[0]); // 80148858
L_8014885C:;
  c->r[0]=R32(c->r[29]+0x00000148u); // 8014885C
  cmps(c,0,(int32_t)c->r[0],3); // 80148860
  if (!crb(c,2)) { goto L_8014888C; } // 80148864
  c->r[3]=R32(c->r[29]+0x00000144u); // 80148868
  cmps(c,0,(int32_t)c->r[3],0); // 8014886C
  if (crb(c,2)) { goto L_8014888C; } // 80148870
  c->r[12]=R32(c->r[3]+0x00000000u); // 80148874
  c->r[12]=R32(c->r[12]+0x00000008u); // 80148878
  c->ctr=c->r[12]; // 8014887C
  if (true) { c->lr=0x80148884u; dispatch(c,c->ctr); } // 80148880
  c->r[0]=0u+0x00000000u; // 80148884
  W32(c->r[29]+0x00000144u,c->r[0]); // 80148888
L_8014888C:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014888C
  c->r[3]=R32(c->r[29]+0x00000148u); // 80148890
  c->r[30]=R32(c->r[1]+0x00000018u); // 80148894
  c->r[29]=R32(c->r[1]+0x00000014u); // 80148898
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014889C
  c->lr=c->r[0]; // 801488A0
  c->r[1]=c->r[1]+0x00000020u; // 801488A4
  return; // 801488A8
}

// UnloadCueSheetBinaryFile__16CriAuCueSheetLocFR8CriError
void f_801488AC(Ctx* __restrict c) {
  trace_call(0x801488ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801488AC
  c->r[0]=c->lr; // 801488B0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801488B4
  c->r[0]=0u+0x00000000u; // 801488B8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801488BC
  c->r[31]=c->r[3]|c->r[3]; // 801488C0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801488C4
  c->r[0]=R32(c->r[3]+0x00000010u); // 801488C8
  cmps(c,0,(int32_t)c->r[0],0); // 801488CC
  if (!crb(c,2)) { goto L_801488F4; } // 801488D0
  c->r[3]=0u+0x802D0000u; // 801488D4
  c->r[0]=0u+0xFFFFFFFFu; // 801488D8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801488DC
  c->r[3]=c->r[3]+0xFFFFDD30u; // 801488E0
  c->r[4]=c->r[3]+0x000001DCu; // 801488E4
  c->r[3]=0u+0x00000000u; // 801488E8
  c->lr=0x801488F0u; f_80179434(c); // 801488EC
  goto L_8014894C; // 801488F0
L_801488F4:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 801488F4
  cmps(c,0,(int32_t)c->r[0],0); // 801488F8
  if (!crb(c,1)) { goto L_8014891C; } // 801488FC
  c->r[4]=0u+0x802D0000u; // 80148900
  c->r[3]=0u+0x00000001u; // 80148904
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148908
  c->r[4]=c->r[4]+0x00000201u; // 8014890C
  c->lr=0x80148914u; f_80179434(c); // 80148910
  c->r[3]=c->r[31]|c->r[31]; // 80148914
  c->lr=0x8014891Cu; f_80153B58(c); // 80148918
L_8014891C:;
  c->r[3]=c->r[31]|c->r[31]; // 8014891C
  c->lr=0x80148924u; f_80173720(c); // 80148920
  c->r[3]=c->r[31]|c->r[31]; // 80148924
  c->lr=0x8014892Cu; f_80152154(c); // 80148928
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014892C
  c->r[4]=R32(c->r[31]+0x00000010u); // 80148930
  c->lr=0x80148938u; f_8017C228(c); // 80148934
  c->r[0]=0u+0x00000000u; // 80148938
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 8014893C
  W32(c->r[31]+0x00000010u,c->r[0]); // 80148940
  W32(c->r[31]+0x00000014u,c->r[0]); // 80148944
  W32(c->r[31]+0x00000148u,c->r[0]); // 80148948
L_8014894C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014894C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148950
  c->lr=c->r[0]; // 80148954
  c->r[1]=c->r[1]+0x00000010u; // 80148958
  return; // 8014895C
}

// SetCueSheetBinaryFile__16CriAuCueSheetLocFPCUcUlR8CriError
void f_80148960(Ctx* __restrict c) {
  trace_call(0x80148960u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148960
  c->r[0]=c->lr; // 80148964
  W32(c->r[1]+0x00000024u,c->r[0]); // 80148968
  c->r[0]=0u+0x00000000u; // 8014896C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80148970
  c->r[31]=c->r[6]|c->r[6]; // 80148974
  W32(c->r[1]+0x00000018u,c->r[30]); // 80148978
  c->r[30]=c->r[3]|c->r[3]; // 8014897C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80148980
  c->r[0]=R32(c->r[3]+0x00000010u); // 80148984
  cmps(c,0,(int32_t)c->r[0],0); // 80148988
  if (crb(c,2)) { goto L_801489B0; } // 8014898C
  c->r[3]=0u+0x802D0000u; // 80148990
  c->r[0]=0u+0xFFFFFFFFu; // 80148994
  c->r[3]=c->r[3]+0xFFFFDD30u; // 80148998
  W32(c->r[6]+0x00000000u,c->r[0]); // 8014899C
  c->r[4]=c->r[3]+0x00000231u; // 801489A0
  c->r[3]=0u+0x00000000u; // 801489A4
  c->lr=0x801489ACu; f_80179434(c); // 801489A8
  goto L_80148A24; // 801489AC
L_801489B0:;
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 801489B0
  cmps(c,0,(int32_t)c->r[0],0); // 801489B4
  if (crb(c,2)) { goto L_801489DC; } // 801489B8
  c->r[3]=0u+0x802D0000u; // 801489BC
  c->r[0]=0u+0xFFFFFFFFu; // 801489C0
  c->r[3]=c->r[3]+0xFFFFDD30u; // 801489C4
  W32(c->r[6]+0x00000000u,c->r[0]); // 801489C8
  c->r[4]=c->r[3]+0x0000025Au; // 801489CC
  c->r[3]=0u+0x00000000u; // 801489D0
  c->lr=0x801489D8u; f_80179434(c); // 801489D4
  goto L_80148A24; // 801489D8
L_801489DC:;
  W32(c->r[3]+0x0000000Cu,c->r[4]); // 801489DC
  W32(c->r[3]+0x00000014u,c->r[5]); // 801489E0
  c->lr=0x801489E8u; f_801513A0(c); // 801489E4
  cmps(c,0,(int32_t)c->r[3],0); // 801489E8
  if (!crb(c,2)) { goto L_80148A24; } // 801489EC
  c->r[3]=0u+0x802D0000u; // 801489F0
  c->r[0]=0u+0xFFFFFFFFu; // 801489F4
  c->r[3]=c->r[3]+0xFFFFDD30u; // 801489F8
  W32(c->r[31]+0x00000000u,c->r[0]); // 801489FC
  c->r[4]=c->r[3]+0x00000280u; // 80148A00
  c->r[3]=0u+0x00000000u; // 80148A04
  c->lr=0x80148A0Cu; f_80179434(c); // 80148A08
  c->r[12]=R32(c->r[30]+0x00000000u); // 80148A0C
  c->r[3]=c->r[30]|c->r[30]; // 80148A10
  c->r[4]=c->r[1]+0x00000008u; // 80148A14
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80148A18
  c->ctr=c->r[12]; // 80148A1C
  if (true) { c->lr=0x80148A24u; dispatch(c,c->ctr); } // 80148A20
L_80148A24:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80148A24
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80148A28
  c->r[30]=R32(c->r[1]+0x00000018u); // 80148A2C
  c->lr=c->r[0]; // 80148A30
  c->r[1]=c->r[1]+0x00000020u; // 80148A34
  return; // 80148A38
}

// SetCueSheetBinaryFile__16CriAuCueSheetLocFPCcPCUcUlR8CriError
void f_80148A3C(Ctx* __restrict c) {
  trace_call(0x80148A3Cu);
  c->r[0]=0u+0x00000000u; // 80148A3C
  W32(c->r[7]+0x00000000u,c->r[0]); // 80148A40
  c->r[0]=c->r[4]|c->r[4]; // 80148A44
  c->r[4]=c->r[5]|c->r[5]; // 80148A48
  W32(c->r[3]+0x00000008u,c->r[0]); // 80148A4C
  c->r[5]=c->r[6]|c->r[6]; // 80148A50
  c->r[6]=c->r[7]|c->r[7]; // 80148A54
  c->r[12]=R32(c->r[3]+0x00000000u); // 80148A58
  c->r[12]=R32(c->r[12]+0x00000024u); // 80148A5C
  c->ctr=c->r[12]; // 80148A60
  if (true) { dispatch(c,c->ctr); return; } // 80148A64
}

// UnsetCueSheetBinaryFile__16CriAuCueSheetLocFR8CriError
void f_80148A68(Ctx* __restrict c) {
  trace_call(0x80148A68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148A68
  c->r[0]=c->lr; // 80148A6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80148A70
  c->r[0]=0u+0x00000000u; // 80148A74
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80148A78
  c->r[31]=c->r[3]|c->r[3]; // 80148A7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80148A80
  c->r[0]=R32(c->r[3]+0x00000010u); // 80148A84
  cmps(c,0,(int32_t)c->r[0],0); // 80148A88
  if (crb(c,2)) { goto L_80148AB0; } // 80148A8C
  c->r[3]=0u+0x802D0000u; // 80148A90
  c->r[0]=0u+0xFFFFFFFFu; // 80148A94
  W32(c->r[4]+0x00000000u,c->r[0]); // 80148A98
  c->r[3]=c->r[3]+0xFFFFDD30u; // 80148A9C
  c->r[4]=c->r[3]+0x000002A6u; // 80148AA0
  c->r[3]=0u+0x00000000u; // 80148AA4
  c->lr=0x80148AACu; f_80179434(c); // 80148AA8
  goto L_80148AF4; // 80148AAC
L_80148AB0:;
  c->r[0]=R32(c->r[3]+0x0000014Cu); // 80148AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80148AB4
  if (!crb(c,1)) { goto L_80148AD8; } // 80148AB8
  c->r[4]=0u+0x802D0000u; // 80148ABC
  c->r[3]=0u+0x00000001u; // 80148AC0
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148AC4
  c->r[4]=c->r[4]+0x000002C7u; // 80148AC8
  c->lr=0x80148AD0u; f_80179434(c); // 80148ACC
  c->r[3]=c->r[31]|c->r[31]; // 80148AD0
  c->lr=0x80148AD8u; f_80153B58(c); // 80148AD4
L_80148AD8:;
  c->r[3]=c->r[31]|c->r[31]; // 80148AD8
  c->lr=0x80148AE0u; f_80173720(c); // 80148ADC
  c->r[3]=c->r[31]|c->r[31]; // 80148AE0
  c->lr=0x80148AE8u; f_80152154(c); // 80148AE4
  c->r[0]=0u+0x00000000u; // 80148AE8
  W32(c->r[31]+0x0000000Cu,c->r[0]); // 80148AEC
  W32(c->r[31]+0x00000014u,c->r[0]); // 80148AF0
L_80148AF4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148AF4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148AF8
  c->lr=c->r[0]; // 80148AFC
  c->r[1]=c->r[1]+0x00000010u; // 80148B00
  return; // 80148B04
}

// GetNumberOfCues__16CriAuCueSheetLocFR8CriError
void f_80148B08(Ctx* __restrict c) {
  trace_call(0x80148B08u);
  c->r[0]=0u+0x00000000u; // 80148B08
  W32(c->r[4]+0x00000000u,c->r[0]); // 80148B0C
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80148B10
  cmps(c,0,(int32_t)c->r[3],0); // 80148B14
  if (!crb(c,2)) { goto L_80148B24; } // 80148B18
  c->r[3]=0u+0x00000000u; // 80148B1C
  return; // 80148B20
L_80148B24:;
  c->r[3]=R32(c->r[3]+0x00000008u); // 80148B24
  return; // 80148B28
}

// GetCueName__16CriAuCueSheetLocFUlR8CriError
void f_80148B2C(Ctx* __restrict c) {
  trace_call(0x80148B2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148B2C
  c->r[0]=c->lr; // 80148B30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80148B34
  c->r[0]=0u+0x00000000u; // 80148B38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80148B3C
  c->r[31]=0u+0x00000000u; // 80148B40
  W32(c->r[1]+0x00000018u,c->r[30]); // 80148B44
  W32(c->r[1]+0x00000014u,c->r[29]); // 80148B48
  c->r[29]=c->r[5]|c->r[5]; // 80148B4C
  W32(c->r[1]+0x00000010u,c->r[28]); // 80148B50
  c->r[28]=c->r[4]|c->r[4]; // 80148B54
  W32(c->r[5]+0x00000000u,c->r[0]); // 80148B58
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 80148B5C
  cmps(c,0,(int32_t)c->r[30],0); // 80148B60
  if (!crb(c,2)) { goto L_80148B88; } // 80148B64
  c->r[4]=0u+0x802D0000u; // 80148B68
  c->r[5]=c->r[28]|c->r[28]; // 80148B6C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148B70
  c->r[3]=0u+0x00000000u; // 80148B74
  c->r[4]=c->r[4]+0x000002F7u; // 80148B78
  c->lr=0x80148B80u; f_801794C0(c); // 80148B7C
  c->r[0]=0u+0x00000000u; // 80148B80
  goto L_80148C2C; // 80148B84
L_80148B88:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 80148B88
  cmpu(c,0,c->r[4],c->r[0]); // 80148B8C
  if (crb(c,0)) { goto L_80148B9C; } // 80148B90
  c->r[0]=0u+0x00000000u; // 80148B94
  goto L_80148C00; // 80148B98
L_80148B9C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148B9C
  c->r[5]=0u+0x00000000u; // 80148BA0
  c->lr=0x80148BA8u; f_8017B030(c); // 80148BA4
  c->r[31]=c->r[3]|c->r[3]; // 80148BA8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148BAC
  c->r[4]=c->r[28]|c->r[28]; // 80148BB0
  c->r[5]=0u+0x00000001u; // 80148BB4
  c->lr=0x80148BBCu; f_8017ADCC(c); // 80148BB8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148BBC
  c->r[4]=c->r[28]|c->r[28]; // 80148BC0
  c->r[5]=0u+0x00000002u; // 80148BC4
  c->lr=0x80148BCCu; f_8017B030(c); // 80148BC8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148BCC
  c->lr=0x80148BD4u; f_8017A6AC(c); // 80148BD0
  cmpu(c,0,c->r[3],0x00000003u); // 80148BD4
  if (!crb(c,1)) { goto L_80148BEC; } // 80148BD8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148BDC
  c->r[4]=c->r[28]|c->r[28]; // 80148BE0
  c->r[5]=0u+0x00000003u; // 80148BE4
  c->lr=0x80148BECu; f_8017B030(c); // 80148BE8
L_80148BEC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148BEC
  c->r[4]=c->r[28]|c->r[28]; // 80148BF0
  c->r[5]=0u+0x00000004u; // 80148BF4
  c->lr=0x80148BFCu; f_8017AB54(c); // 80148BF8
  c->r[0]=0u+0x00000001u; // 80148BFC
L_80148C00:;
  cmps(c,0,(int32_t)c->r[0],0); // 80148C00
  if (!crb(c,2)) { goto L_80148C28; } // 80148C04
  c->r[4]=0u+0x802D0000u; // 80148C08
  c->r[5]=c->r[28]|c->r[28]; // 80148C0C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148C10
  c->r[3]=0u+0x00000000u; // 80148C14
  c->r[4]=c->r[4]+0x00000329u; // 80148C18
  c->lr=0x80148C20u; f_801794C0(c); // 80148C1C
  c->r[0]=0u+0x00000000u; // 80148C20
  goto L_80148C2C; // 80148C24
L_80148C28:;
  c->r[0]=0u+0x00000001u; // 80148C28
L_80148C2C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80148C2C
  if (!crb(c,2)) { goto L_80148C44; } // 80148C30
  c->r[0]=0u+0xFFFFFFFFu; // 80148C34
  W32(c->r[29]+0x00000000u,c->r[0]); // 80148C38
  c->r[3]=0u+0x00000000u; // 80148C3C
  goto L_80148C48; // 80148C40
L_80148C44:;
  c->r[3]=c->r[31]|c->r[31]; // 80148C44
L_80148C48:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80148C48
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80148C4C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80148C50
  c->r[29]=R32(c->r[1]+0x00000014u); // 80148C54
  c->r[28]=R32(c->r[1]+0x00000010u); // 80148C58
  c->lr=c->r[0]; // 80148C5C
  c->r[1]=c->r[1]+0x00000020u; // 80148C60
  return; // 80148C64
}

// GetCueId__16CriAuCueSheetLocFUlR8CriError
void f_80148C68(Ctx* __restrict c) {
  trace_call(0x80148C68u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148C68
  c->r[0]=c->lr; // 80148C6C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80148C70
  c->r[0]=0u+0x00000000u; // 80148C74
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80148C78
  c->r[31]=0u+0x00000000u; // 80148C7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80148C80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80148C84
  c->r[29]=c->r[5]|c->r[5]; // 80148C88
  W32(c->r[1]+0x00000010u,c->r[28]); // 80148C8C
  c->r[28]=c->r[4]|c->r[4]; // 80148C90
  W32(c->r[5]+0x00000000u,c->r[0]); // 80148C94
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 80148C98
  cmps(c,0,(int32_t)c->r[30],0); // 80148C9C
  if (!crb(c,2)) { goto L_80148CC4; } // 80148CA0
  c->r[4]=0u+0x802D0000u; // 80148CA4
  c->r[5]=c->r[28]|c->r[28]; // 80148CA8
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148CAC
  c->r[3]=0u+0x00000000u; // 80148CB0
  c->r[4]=c->r[4]+0x000002F7u; // 80148CB4
  c->lr=0x80148CBCu; f_801794C0(c); // 80148CB8
  c->r[0]=0u+0x00000000u; // 80148CBC
  goto L_80148D68; // 80148CC0
L_80148CC4:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 80148CC4
  cmpu(c,0,c->r[4],c->r[0]); // 80148CC8
  if (crb(c,0)) { goto L_80148CD8; } // 80148CCC
  c->r[0]=0u+0x00000000u; // 80148CD0
  goto L_80148D3C; // 80148CD4
L_80148CD8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148CD8
  c->r[5]=0u+0x00000000u; // 80148CDC
  c->lr=0x80148CE4u; f_8017B030(c); // 80148CE0
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148CE4
  c->r[4]=c->r[28]|c->r[28]; // 80148CE8
  c->r[5]=0u+0x00000001u; // 80148CEC
  c->lr=0x80148CF4u; f_8017ADCC(c); // 80148CF0
  c->r[31]=c->r[3]|c->r[3]; // 80148CF4
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148CF8
  c->r[4]=c->r[28]|c->r[28]; // 80148CFC
  c->r[5]=0u+0x00000002u; // 80148D00
  c->lr=0x80148D08u; f_8017B030(c); // 80148D04
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148D08
  c->lr=0x80148D10u; f_8017A6AC(c); // 80148D0C
  cmpu(c,0,c->r[3],0x00000003u); // 80148D10
  if (!crb(c,1)) { goto L_80148D28; } // 80148D14
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148D18
  c->r[4]=c->r[28]|c->r[28]; // 80148D1C
  c->r[5]=0u+0x00000003u; // 80148D20
  c->lr=0x80148D28u; f_8017B030(c); // 80148D24
L_80148D28:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80148D28
  c->r[4]=c->r[28]|c->r[28]; // 80148D2C
  c->r[5]=0u+0x00000004u; // 80148D30
  c->lr=0x80148D38u; f_8017AB54(c); // 80148D34
  c->r[0]=0u+0x00000001u; // 80148D38
L_80148D3C:;
  cmps(c,0,(int32_t)c->r[0],0); // 80148D3C
  if (!crb(c,2)) { goto L_80148D64; } // 80148D40
  c->r[4]=0u+0x802D0000u; // 80148D44
  c->r[5]=c->r[28]|c->r[28]; // 80148D48
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80148D4C
  c->r[3]=0u+0x00000000u; // 80148D50
  c->r[4]=c->r[4]+0x00000329u; // 80148D54
  c->lr=0x80148D5Cu; f_801794C0(c); // 80148D58
  c->r[0]=0u+0x00000000u; // 80148D5C
  goto L_80148D68; // 80148D60
L_80148D64:;
  c->r[0]=0u+0x00000001u; // 80148D64
L_80148D68:;
  cmps(c,0,(int32_t)c->r[0],0); // 80148D68
  if (!crb(c,2)) { goto L_80148D80; } // 80148D6C
  c->r[0]=0u+0xFFFFFFFFu; // 80148D70
  W32(c->r[29]+0x00000000u,c->r[0]); // 80148D74
  c->r[3]=0u+0x00000000u; // 80148D78
  goto L_80148D84; // 80148D7C
L_80148D80:;
  c->r[3]=c->r[31]|c->r[31]; // 80148D80
L_80148D84:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80148D84
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80148D88
  c->r[30]=R32(c->r[1]+0x00000018u); // 80148D8C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80148D90
  c->r[28]=R32(c->r[1]+0x00000010u); // 80148D94
  c->lr=c->r[0]; // 80148D98
  c->r[1]=c->r[1]+0x00000020u; // 80148D9C
  return; // 80148DA0
}

// GetNumberOfAisacs__16CriAuCueSheetLocFR8CriError
void f_80148DA4(Ctx* __restrict c) {
  trace_call(0x80148DA4u);
  c->r[0]=0u+0x00000000u; // 80148DA4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80148DA8
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 80148DAC
  return; // 80148DB0
}

// GetAisacControlName__16CriAuCueSheetLocFUlR8CriError
void f_80148DB4(Ctx* __restrict c) {
  trace_call(0x80148DB4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148DB4
  c->r[0]=c->lr; // 80148DB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80148DBC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80148DC0
  c->r[31]=c->r[5]|c->r[5]; // 80148DC4
  c->r[6]=R32(c->r[3]+0x00000030u); // 80148DC8
  cmps(c,0,(int32_t)c->r[6],0); // 80148DCC
  if (crb(c,2)) { goto L_80148DE0; } // 80148DD0
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80148DD4
  cmpu(c,0,c->r[4],c->r[0]); // 80148DD8
  if (crb(c,0)) { goto L_80148E00; } // 80148DDC
L_80148DE0:;
  c->r[6]=0u+0x802D0000u; // 80148DE0
  c->r[5]=c->r[4]|c->r[4]; // 80148DE4
  c->r[6]=c->r[6]+0xFFFFDD30u; // 80148DE8
  c->r[3]=0u+0x00000000u; // 80148DEC
  c->r[4]=c->r[6]+0x0000035Bu; // 80148DF0
  c->lr=0x80148DF8u; f_801794C0(c); // 80148DF4
  c->r[3]=0u+0x00000000u; // 80148DF8
  goto L_80148E08; // 80148DFC
L_80148E00:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80148E00
  c->r[3]=R32(c->r[6]+c->r[0]); // 80148E04
L_80148E08:;
  cmps(c,0,(int32_t)c->r[3],0); // 80148E08
  if (!crb(c,2)) { goto L_80148E20; } // 80148E0C
  c->r[0]=0u+0xFFFFFFFFu; // 80148E10
  W32(c->r[31]+0x00000000u,c->r[0]); // 80148E14
  c->r[3]=0u+0x00000000u; // 80148E18
  goto L_80148E24; // 80148E1C
L_80148E20:;
  c->lr=0x80148E24u; f_80146374(c); // 80148E20
L_80148E24:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148E24
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148E28
  c->lr=c->r[0]; // 80148E2C
  c->r[1]=c->r[1]+0x00000010u; // 80148E30
  return; // 80148E34
}

// GetAisacPatternName__16CriAuCueSheetLocFUlR8CriError
void f_80148E38(Ctx* __restrict c) {
  trace_call(0x80148E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148E38
  c->r[0]=c->lr; // 80148E3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80148E40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80148E44
  c->r[31]=c->r[5]|c->r[5]; // 80148E48
  c->r[6]=R32(c->r[3]+0x00000030u); // 80148E4C
  cmps(c,0,(int32_t)c->r[6],0); // 80148E50
  if (crb(c,2)) { goto L_80148E64; } // 80148E54
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80148E58
  cmpu(c,0,c->r[4],c->r[0]); // 80148E5C
  if (crb(c,0)) { goto L_80148E84; } // 80148E60
L_80148E64:;
  c->r[6]=0u+0x802D0000u; // 80148E64
  c->r[5]=c->r[4]|c->r[4]; // 80148E68
  c->r[6]=c->r[6]+0xFFFFDD30u; // 80148E6C
  c->r[3]=0u+0x00000000u; // 80148E70
  c->r[4]=c->r[6]+0x0000035Bu; // 80148E74
  c->lr=0x80148E7Cu; f_801794C0(c); // 80148E78
  c->r[3]=0u+0x00000000u; // 80148E7C
  goto L_80148E8C; // 80148E80
L_80148E84:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80148E84
  c->r[3]=R32(c->r[6]+c->r[0]); // 80148E88
L_80148E8C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80148E8C
  if (!crb(c,2)) { goto L_80148EA4; } // 80148E90
  c->r[0]=0u+0xFFFFFFFFu; // 80148E94
  W32(c->r[31]+0x00000000u,c->r[0]); // 80148E98
  c->r[3]=0u+0x00000000u; // 80148E9C
  goto L_80148EA8; // 80148EA0
L_80148EA4:;
  c->lr=0x80148EA8u; f_8014637C(c); // 80148EA4
L_80148EA8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80148EA8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80148EAC
  c->lr=c->r[0]; // 80148EB0
  c->r[1]=c->r[1]+0x00000010u; // 80148EB4
  return; // 80148EB8
}

// GetAisacInputRange__16CriAuCueSheetLocFUlPfPfR8CriError
void f_80148EBC(Ctx* __restrict c) {
  trace_call(0x80148EBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148EBC
  c->r[0]=c->lr; // 80148EC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80148EC4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80148EC8
  c->r[31]=c->r[7]|c->r[7]; // 80148ECC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80148ED0
  c->r[30]=c->r[6]|c->r[6]; // 80148ED4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80148ED8
  c->r[29]=c->r[5]|c->r[5]; // 80148EDC
  c->r[8]=R32(c->r[3]+0x00000030u); // 80148EE0
  cmps(c,0,(int32_t)c->r[8],0); // 80148EE4
  if (crb(c,2)) { goto L_80148EF8; } // 80148EE8
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 80148EEC
  cmpu(c,0,c->r[4],c->r[0]); // 80148EF0
  if (crb(c,0)) { goto L_80148F18; } // 80148EF4
L_80148EF8:;
  c->r[6]=0u+0x802D0000u; // 80148EF8
  c->r[5]=c->r[4]|c->r[4]; // 80148EFC
  c->r[6]=c->r[6]+0xFFFFDD30u; // 80148F00
  c->r[3]=0u+0x00000000u; // 80148F04
  c->r[4]=c->r[6]+0x0000035Bu; // 80148F08
  c->lr=0x80148F10u; f_801794C0(c); // 80148F0C
  c->r[3]=0u+0x00000000u; // 80148F10
  goto L_80148F20; // 80148F14
L_80148F18:;
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80148F18
  c->r[3]=R32(c->r[8]+c->r[0]); // 80148F1C
L_80148F20:;
  cmps(c,0,(int32_t)c->r[3],0); // 80148F20
  if (!crb(c,2)) { goto L_80148F34; } // 80148F24
  c->r[0]=0u+0xFFFFFFFFu; // 80148F28
  W32(c->r[31]+0x00000000u,c->r[0]); // 80148F2C
  goto L_80148F40; // 80148F30
L_80148F34:;
  c->r[4]=c->r[29]|c->r[29]; // 80148F34
  c->r[5]=c->r[30]|c->r[30]; // 80148F38
  c->lr=0x80148F40u; f_80146384(c); // 80148F3C
L_80148F40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80148F40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80148F44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80148F48
  c->r[29]=R32(c->r[1]+0x00000014u); // 80148F4C
  c->lr=c->r[0]; // 80148F50
  c->r[1]=c->r[1]+0x00000020u; // 80148F54
  return; // 80148F58
}

// GetUserData__16CriAuCueSheetLocFPCcR8CriError
void f_80148F5C(Ctx* __restrict c) {
  trace_call(0x80148F5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80148F5C
  c->r[0]=c->lr; // 80148F60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80148F64
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80148F68
  c->r[31]=0u+0x00000000u; // 80148F6C
  c->r[27]=c->r[5]|c->r[5]; // 80148F70
  c->r[29]=0u+0x00000000u; // 80148F74
  W32(c->r[5]+0x00000000u,c->r[31]); // 80148F78
  c->r[28]=R32(c->r[3]+0x0000001Cu); // 80148F7C
  cmps(c,0,(int32_t)c->r[28],0); // 80148F80
  if (!crb(c,2)) { goto L_80148FA8; } // 80148F84
  c->r[6]=0u+0x802D0000u; // 80148F88
  c->r[5]=c->r[4]|c->r[4]; // 80148F8C
  c->r[6]=c->r[6]+0xFFFFDD30u; // 80148F90
  c->r[3]=0u+0x00000000u; // 80148F94
  c->r[4]=c->r[6]+0x0000038Fu; // 80148F98
  c->lr=0x80148FA0u; f_801794C0(c); // 80148F9C
  c->r[0]=0u+0x00000000u; // 80148FA0
  goto L_80149048; // 80148FA4
L_80148FA8:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80148FA8
  c->r[5]=c->r[4]|c->r[4]; // 80148FAC
  c->r[4]=0u+0x00000000u; // 80148FB0
  c->lr=0x80148FB8u; f_8017A8C0(c); // 80148FB4
  c->r[0]=R32(c->r[28]+0x00000008u); // 80148FB8
  c->r[30]=c->r[3]|c->r[3]; // 80148FBC
  cmpu(c,0,c->r[3],c->r[0]); // 80148FC0
  if (crb(c,0)) { goto L_80148FD0; } // 80148FC4
  c->r[3]=0u+0x00000000u; // 80148FC8
  goto L_8014903C; // 80148FCC
L_80148FD0:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80148FD0
  c->r[4]=c->r[30]|c->r[30]; // 80148FD4
  c->r[5]=0u+0x00000000u; // 80148FD8
  c->lr=0x80148FE0u; f_8017B030(c); // 80148FDC
  c->r[3]=R32(c->r[28]+0x00000004u); // 80148FE0
  c->r[4]=c->r[30]|c->r[30]; // 80148FE4
  c->r[5]=0u+0x00000001u; // 80148FE8
  c->lr=0x80148FF0u; f_8017ADCC(c); // 80148FEC
  c->r[3]=R32(c->r[28]+0x00000004u); // 80148FF0
  c->r[4]=c->r[30]|c->r[30]; // 80148FF4
  c->r[5]=0u+0x00000002u; // 80148FF8
  c->lr=0x80149000u; f_8017B030(c); // 80148FFC
  c->r[3]=R32(c->r[28]+0x00000004u); // 80149000
  c->lr=0x80149008u; f_8017A6AC(c); // 80149004
  cmpu(c,0,c->r[3],0x00000003u); // 80149008
  if (!crb(c,1)) { goto L_80149024; } // 8014900C
  c->r[3]=R32(c->r[28]+0x00000004u); // 80149010
  c->r[4]=c->r[30]|c->r[30]; // 80149014
  c->r[5]=0u+0x00000003u; // 80149018
  c->lr=0x80149020u; f_8017B030(c); // 8014901C
  c->r[31]=c->r[3]|c->r[3]; // 80149020
L_80149024:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80149024
  c->r[29]=c->r[31]|c->r[31]; // 80149028
  c->r[4]=c->r[30]|c->r[30]; // 8014902C
  c->r[5]=0u+0x00000004u; // 80149030
  c->lr=0x80149038u; f_8017AB54(c); // 80149034
  c->r[3]=0u+0x00000001u; // 80149038
L_8014903C:;
  c->r[0]=0u-c->r[3]; // 8014903C
  c->r[0]=c->r[0]|c->r[3]; // 80149040
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80149044
L_80149048:;
  cmps(c,0,(int32_t)c->r[0],0); // 80149048
  if (!crb(c,2)) { goto L_80149060; } // 8014904C
  c->r[0]=0u+0xFFFFFFFFu; // 80149050
  W32(c->r[27]+0x00000000u,c->r[0]); // 80149054
  c->r[3]=0u+0x00000000u; // 80149058
  goto L_80149064; // 8014905C
L_80149060:;
  c->r[3]=c->r[29]|c->r[29]; // 80149060
L_80149064:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80149064
  c->r[0]=R32(c->r[1]+0x00000024u); // 80149068
  c->lr=c->r[0]; // 8014906C
  c->r[1]=c->r[1]+0x00000020u; // 80149070
  return; // 80149074
}

// GetUserDataById__16CriAuCueSheetLocFUlR8CriError
void f_80149078(Ctx* __restrict c) {
  trace_call(0x80149078u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80149078
  c->r[0]=c->lr; // 8014907C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80149080
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80149084
  c->r[31]=0u+0x00000000u; // 80149088
  c->r[27]=c->r[5]|c->r[5]; // 8014908C
  c->r[29]=0u+0x00000000u; // 80149090
  W32(c->r[5]+0x00000000u,c->r[31]); // 80149094
  c->r[28]=R32(c->r[3]+0x0000001Cu); // 80149098
  cmps(c,0,(int32_t)c->r[28],0); // 8014909C
  if (!crb(c,2)) { goto L_801490C4; } // 801490A0
  c->r[6]=0u+0x802D0000u; // 801490A4
  c->r[5]=c->r[4]|c->r[4]; // 801490A8
  c->r[6]=c->r[6]+0xFFFFDD30u; // 801490AC
  c->r[3]=0u+0x00000000u; // 801490B0
  c->r[4]=c->r[6]+0x000003C2u; // 801490B4
  c->lr=0x801490BCu; f_801794C0(c); // 801490B8
  c->r[0]=0u+0x00000000u; // 801490BC
  goto L_80149164; // 801490C0
L_801490C4:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801490C4
  c->r[5]=c->r[4]|c->r[4]; // 801490C8
  c->r[4]=0u+0x00000001u; // 801490CC
  c->lr=0x801490D4u; f_8017AAA8(c); // 801490D0
  c->r[0]=R32(c->r[28]+0x00000008u); // 801490D4
  c->r[30]=c->r[3]|c->r[3]; // 801490D8
  cmpu(c,0,c->r[3],c->r[0]); // 801490DC
  if (crb(c,0)) { goto L_801490EC; } // 801490E0
  c->r[3]=0u+0x00000000u; // 801490E4
  goto L_80149158; // 801490E8
L_801490EC:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801490EC
  c->r[4]=c->r[30]|c->r[30]; // 801490F0
  c->r[5]=0u+0x00000000u; // 801490F4
  c->lr=0x801490FCu; f_8017B030(c); // 801490F8
  c->r[3]=R32(c->r[28]+0x00000004u); // 801490FC
  c->r[4]=c->r[30]|c->r[30]; // 80149100
  c->r[5]=0u+0x00000001u; // 80149104
  c->lr=0x8014910Cu; f_8017ADCC(c); // 80149108
  c->r[3]=R32(c->r[28]+0x00000004u); // 8014910C
  c->r[4]=c->r[30]|c->r[30]; // 80149110
  c->r[5]=0u+0x00000002u; // 80149114
  c->lr=0x8014911Cu; f_8017B030(c); // 80149118
  c->r[3]=R32(c->r[28]+0x00000004u); // 8014911C
  c->lr=0x80149124u; f_8017A6AC(c); // 80149120
  cmpu(c,0,c->r[3],0x00000003u); // 80149124
  if (!crb(c,1)) { goto L_80149140; } // 80149128
  c->r[3]=R32(c->r[28]+0x00000004u); // 8014912C
  c->r[4]=c->r[30]|c->r[30]; // 80149130
  c->r[5]=0u+0x00000003u; // 80149134
  c->lr=0x8014913Cu; f_8017B030(c); // 80149138
  c->r[31]=c->r[3]|c->r[3]; // 8014913C
L_80149140:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80149140
  c->r[29]=c->r[31]|c->r[31]; // 80149144
  c->r[4]=c->r[30]|c->r[30]; // 80149148
  c->r[5]=0u+0x00000004u; // 8014914C
  c->lr=0x80149154u; f_8017AB54(c); // 80149150
  c->r[3]=0u+0x00000001u; // 80149154
L_80149158:;
  c->r[0]=0u-c->r[3]; // 80149158
  c->r[0]=c->r[0]|c->r[3]; // 8014915C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80149160
L_80149164:;
  cmps(c,0,(int32_t)c->r[0],0); // 80149164
  if (!crb(c,2)) { goto L_8014917C; } // 80149168
  c->r[0]=0u+0xFFFFFFFFu; // 8014916C
  W32(c->r[27]+0x00000000u,c->r[0]); // 80149170
  c->r[3]=0u+0x00000000u; // 80149174
  goto L_80149180; // 80149178
L_8014917C:;
  c->r[3]=c->r[29]|c->r[29]; // 8014917C
L_80149180:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80149180
  c->r[0]=R32(c->r[1]+0x00000024u); // 80149184
  c->lr=c->r[0]; // 80149188
  c->r[1]=c->r[1]+0x00000020u; // 8014918C
  return; // 80149190
}

// GetCueId__16CriAuCueSheetLocFPCcR8CriError
void f_80149194(Ctx* __restrict c) {
  trace_call(0x80149194u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80149194
  c->r[0]=c->lr; // 80149198
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014919C
  c->r[0]=0u+0x00000000u; // 801491A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801491A4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801491A8
  c->r[30]=0u+0x00000000u; // 801491AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801491B0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801491B4
  c->r[28]=c->r[5]|c->r[5]; // 801491B8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801491BC
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801491C0
  cmps(c,0,(int32_t)c->r[29],0); // 801491C4
  if (!crb(c,2)) { goto L_801491EC; } // 801491C8
  c->r[6]=0u+0x802D0000u; // 801491CC
  c->r[5]=c->r[4]|c->r[4]; // 801491D0
  c->r[6]=c->r[6]+0xFFFFDD30u; // 801491D4
  c->r[3]=0u+0x00000000u; // 801491D8
  c->r[4]=c->r[6]+0x0000038Fu; // 801491DC
  c->lr=0x801491E4u; f_801794C0(c); // 801491E0
  c->r[0]=0u+0x00000000u; // 801491E4
  goto L_80149288; // 801491E8
L_801491EC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 801491EC
  c->r[5]=c->r[4]|c->r[4]; // 801491F0
  c->r[4]=0u+0x00000000u; // 801491F4
  c->lr=0x801491FCu; f_8017A8C0(c); // 801491F8
  c->r[0]=R32(c->r[29]+0x00000008u); // 801491FC
  c->r[31]=c->r[3]|c->r[3]; // 80149200
  cmpu(c,0,c->r[3],c->r[0]); // 80149204
  if (crb(c,0)) { goto L_80149214; } // 80149208
  c->r[3]=0u+0x00000000u; // 8014920C
  goto L_8014927C; // 80149210
L_80149214:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149214
  c->r[4]=c->r[31]|c->r[31]; // 80149218
  c->r[5]=0u+0x00000000u; // 8014921C
  c->lr=0x80149224u; f_8017B030(c); // 80149220
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149224
  c->r[4]=c->r[31]|c->r[31]; // 80149228
  c->r[5]=0u+0x00000001u; // 8014922C
  c->lr=0x80149234u; f_8017ADCC(c); // 80149230
  c->r[30]=c->r[3]|c->r[3]; // 80149234
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149238
  c->r[4]=c->r[31]|c->r[31]; // 8014923C
  c->r[5]=0u+0x00000002u; // 80149240
  c->lr=0x80149248u; f_8017B030(c); // 80149244
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149248
  c->lr=0x80149250u; f_8017A6AC(c); // 8014924C
  cmpu(c,0,c->r[3],0x00000003u); // 80149250
  if (!crb(c,1)) { goto L_80149268; } // 80149254
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149258
  c->r[4]=c->r[31]|c->r[31]; // 8014925C
  c->r[5]=0u+0x00000003u; // 80149260
  c->lr=0x80149268u; f_8017B030(c); // 80149264
L_80149268:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149268
  c->r[4]=c->r[31]|c->r[31]; // 8014926C
  c->r[5]=0u+0x00000004u; // 80149270
  c->lr=0x80149278u; f_8017AB54(c); // 80149274
  c->r[3]=0u+0x00000001u; // 80149278
L_8014927C:;
  c->r[0]=0u-c->r[3]; // 8014927C
  c->r[0]=c->r[0]|c->r[3]; // 80149280
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80149284
L_80149288:;
  cmps(c,0,(int32_t)c->r[0],0); // 80149288
  if (!crb(c,2)) { goto L_801492A0; } // 8014928C
  c->r[0]=0u+0xFFFFFFFFu; // 80149290
  W32(c->r[28]+0x00000000u,c->r[0]); // 80149294
  c->r[3]=0u+0x00000000u; // 80149298
  goto L_801492A4; // 8014929C
L_801492A0:;
  c->r[3]=c->r[30]|c->r[30]; // 801492A0
L_801492A4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801492A4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801492A8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801492AC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801492B0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801492B4
  c->lr=c->r[0]; // 801492B8
  c->r[1]=c->r[1]+0x00000020u; // 801492BC
  return; // 801492C0
}

// GetCueNameById__16CriAuCueSheetLocFUlR8CriError
void f_801492C4(Ctx* __restrict c) {
  trace_call(0x801492C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801492C4
  c->r[0]=c->lr; // 801492C8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801492CC
  c->r[0]=0u+0x00000000u; // 801492D0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801492D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801492D8
  c->r[30]=0u+0x00000000u; // 801492DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801492E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 801492E4
  c->r[28]=c->r[5]|c->r[5]; // 801492E8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801492EC
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 801492F0
  cmps(c,0,(int32_t)c->r[29],0); // 801492F4
  if (!crb(c,2)) { goto L_8014931C; } // 801492F8
  c->r[6]=0u+0x802D0000u; // 801492FC
  c->r[5]=c->r[4]|c->r[4]; // 80149300
  c->r[6]=c->r[6]+0xFFFFDD30u; // 80149304
  c->r[3]=0u+0x00000000u; // 80149308
  c->r[4]=c->r[6]+0x000003C2u; // 8014930C
  c->lr=0x80149314u; f_801794C0(c); // 80149310
  c->r[0]=0u+0x00000000u; // 80149314
  goto L_801493B8; // 80149318
L_8014931C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014931C
  c->r[5]=c->r[4]|c->r[4]; // 80149320
  c->r[4]=0u+0x00000001u; // 80149324
  c->lr=0x8014932Cu; f_8017AAA8(c); // 80149328
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014932C
  c->r[31]=c->r[3]|c->r[3]; // 80149330
  cmpu(c,0,c->r[3],c->r[0]); // 80149334
  if (crb(c,0)) { goto L_80149344; } // 80149338
  c->r[3]=0u+0x00000000u; // 8014933C
  goto L_801493AC; // 80149340
L_80149344:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149344
  c->r[4]=c->r[31]|c->r[31]; // 80149348
  c->r[5]=0u+0x00000000u; // 8014934C
  c->lr=0x80149354u; f_8017B030(c); // 80149350
  c->r[30]=c->r[3]|c->r[3]; // 80149354
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149358
  c->r[4]=c->r[31]|c->r[31]; // 8014935C
  c->r[5]=0u+0x00000001u; // 80149360
  c->lr=0x80149368u; f_8017ADCC(c); // 80149364
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149368
  c->r[4]=c->r[31]|c->r[31]; // 8014936C
  c->r[5]=0u+0x00000002u; // 80149370
  c->lr=0x80149378u; f_8017B030(c); // 80149374
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149378
  c->lr=0x80149380u; f_8017A6AC(c); // 8014937C
  cmpu(c,0,c->r[3],0x00000003u); // 80149380
  if (!crb(c,1)) { goto L_80149398; } // 80149384
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149388
  c->r[4]=c->r[31]|c->r[31]; // 8014938C
  c->r[5]=0u+0x00000003u; // 80149390
  c->lr=0x80149398u; f_8017B030(c); // 80149394
L_80149398:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 80149398
  c->r[4]=c->r[31]|c->r[31]; // 8014939C
  c->r[5]=0u+0x00000004u; // 801493A0
  c->lr=0x801493A8u; f_8017AB54(c); // 801493A4
  c->r[3]=0u+0x00000001u; // 801493A8
L_801493AC:;
  c->r[0]=0u-c->r[3]; // 801493AC
  c->r[0]=c->r[0]|c->r[3]; // 801493B0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801493B4
L_801493B8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801493B8
  if (!crb(c,2)) { goto L_801493D0; } // 801493BC
  c->r[0]=0u+0xFFFFFFFFu; // 801493C0
  W32(c->r[28]+0x00000000u,c->r[0]); // 801493C4
  c->r[3]=0u+0x00000000u; // 801493C8
  goto L_801493D4; // 801493CC
L_801493D0:;
  c->r[3]=c->r[30]|c->r[30]; // 801493D0
L_801493D4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801493D4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801493D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801493DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801493E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801493E4
  c->lr=c->r[0]; // 801493E8
  c->r[1]=c->r[1]+0x00000020u; // 801493EC
  return; // 801493F0
}

// GetCueAisacControlByIndex__16CriAuCueSheetLocFUlPA128_cUlR8CriError
void f_801493F4(Ctx* __restrict c) {
  trace_call(0x801493F4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801493F4
  c->r[0]=c->lr; // 801493F8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801493FC
  c->r[0]=0u+0x00000000u; // 80149400
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80149404
  c->r[25]=c->r[3]|c->r[3]; // 80149408
  c->r[26]=c->r[4]|c->r[4]; // 8014940C
  c->r[27]=c->r[5]|c->r[5]; // 80149410
  c->r[28]=c->r[6]|c->r[6]; // 80149414
  c->r[29]=c->r[7]|c->r[7]; // 80149418
  c->r[31]=0u+0x00000000u; // 8014941C
  W32(c->r[7]+0x00000000u,c->r[0]); // 80149420
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 80149424
  cmps(c,0,(int32_t)c->r[30],0); // 80149428
  if (!crb(c,2)) { goto L_80149450; } // 8014942C
  c->r[4]=0u+0x802D0000u; // 80149430
  c->r[5]=c->r[26]|c->r[26]; // 80149434
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80149438
  c->r[3]=0u+0x00000000u; // 8014943C
  c->r[4]=c->r[4]+0x000002F7u; // 80149440
  c->lr=0x80149448u; f_801794C0(c); // 80149444
  c->r[0]=0u+0x00000000u; // 80149448
  goto L_801494F4; // 8014944C
L_80149450:;
  c->r[0]=R32(c->r[30]+0x00000008u); // 80149450
  cmpu(c,0,c->r[4],c->r[0]); // 80149454
  if (crb(c,0)) { goto L_80149464; } // 80149458
  c->r[0]=0u+0x00000000u; // 8014945C
  goto L_801494C8; // 80149460
L_80149464:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149464
  c->r[5]=0u+0x00000000u; // 80149468
  c->lr=0x80149470u; f_8017B030(c); // 8014946C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149470
  c->r[4]=c->r[26]|c->r[26]; // 80149474
  c->r[5]=0u+0x00000001u; // 80149478
  c->lr=0x80149480u; f_8017ADCC(c); // 8014947C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149480
  c->r[4]=c->r[26]|c->r[26]; // 80149484
  c->r[5]=0u+0x00000002u; // 80149488
  c->lr=0x80149490u; f_8017B030(c); // 8014948C
  c->r[31]=c->r[3]|c->r[3]; // 80149490
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149494
  c->lr=0x8014949Cu; f_8017A6AC(c); // 80149498
  cmpu(c,0,c->r[3],0x00000003u); // 8014949C
  if (!crb(c,1)) { goto L_801494B4; } // 801494A0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801494A4
  c->r[4]=c->r[26]|c->r[26]; // 801494A8
  c->r[5]=0u+0x00000003u; // 801494AC
  c->lr=0x801494B4u; f_8017B030(c); // 801494B0
L_801494B4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801494B4
  c->r[4]=c->r[26]|c->r[26]; // 801494B8
  c->r[5]=0u+0x00000004u; // 801494BC
  c->lr=0x801494C4u; f_8017AB54(c); // 801494C0
  c->r[0]=0u+0x00000001u; // 801494C4
L_801494C8:;
  cmps(c,0,(int32_t)c->r[0],0); // 801494C8
  if (!crb(c,2)) { goto L_801494F0; } // 801494CC
  c->r[4]=0u+0x802D0000u; // 801494D0
  c->r[5]=c->r[26]|c->r[26]; // 801494D4
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801494D8
  c->r[3]=0u+0x00000000u; // 801494DC
  c->r[4]=c->r[4]+0x00000329u; // 801494E0
  c->lr=0x801494E8u; f_801794C0(c); // 801494E4
  c->r[0]=0u+0x00000000u; // 801494E8
  goto L_801494F4; // 801494EC
L_801494F0:;
  c->r[0]=0u+0x00000001u; // 801494F0
L_801494F4:;
  cmps(c,0,(int32_t)c->r[0],0); // 801494F4
  if (!crb(c,2)) { goto L_8014950C; } // 801494F8
  c->r[0]=0u+0xFFFFFFFFu; // 801494FC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80149500
  c->r[3]=0u+0x00000000u; // 80149504
  goto L_80149534; // 80149508
L_8014950C:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8014950C
  c->r[3]=c->r[25]|c->r[25]; // 80149510
  c->r[4]=c->r[31]|c->r[31]; // 80149514
  c->r[5]=c->r[27]|c->r[27]; // 80149518
  c->r[12]=R32(c->r[12]+0x000000A4u); // 8014951C
  c->r[6]=c->r[28]|c->r[28]; // 80149520
  c->r[8]=c->r[29]|c->r[29]; // 80149524
  c->r[7]=0u+0x00000000u; // 80149528
  c->ctr=c->r[12]; // 8014952C
  if (true) { c->lr=0x80149534u; dispatch(c,c->ctr); } // 80149530
L_80149534:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80149534
  c->r[0]=R32(c->r[1]+0x00000034u); // 80149538
  c->lr=c->r[0]; // 8014953C
  c->r[1]=c->r[1]+0x00000030u; // 80149540
  return; // 80149544
}

// GetSynthAisacControl__16CriAuCueSheetLocFPCcPA128_cUlUlR8CriError
void f_80149548(Ctx* __restrict c) {
  trace_call(0x80149548u);
  {uint32_t ea=c->r[1]+0xFFFFFC20u; W32(ea,c->r[1]); c->r[1]=ea;} // 80149548
  c->r[0]=c->lr; // 8014954C
  W32(c->r[1]+0x000003E4u,c->r[0]); // 80149550
  c->r[11]=c->r[1]+0x000003A0u; // 80149554
  {uint32_t ea=c->r[1]+0x000003D0u; WF64(ea,c->f[31]);} // 80149558
  {uint32_t ea=c->r[1]+0x000003D8u; psq_store(c,31,ea,0,0);} // 8014955C
  {uint32_t ea=c->r[1]+0x000003C0u; WF64(ea,c->f[30]);} // 80149560
  {uint32_t ea=c->r[1]+0x000003C8u; psq_store(c,30,ea,0,0);} // 80149564
  {uint32_t ea=c->r[1]+0x000003B0u; WF64(ea,c->f[29]);} // 80149568
  {uint32_t ea=c->r[1]+0x000003B8u; psq_store(c,29,ea,0,0);} // 8014956C
  {uint32_t ea=c->r[1]+0x000003A0u; WF64(ea,c->f[28]);} // 80149570
  {uint32_t ea=c->r[1]+0x000003A8u; psq_store(c,28,ea,0,0);} // 80149574
  c->lr=0x8014957Cu; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80149578
  c->r[0]=0u+0x00000000u; // 8014957C
  W32(c->r[8]+0x00000000u,c->r[0]); // 80149580
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149584
  c->r[9]=0u+0x43300000u; // 80149588
  c->r[30]=R32(c->r[3]+0x00000020u); // 8014958C
  c->r[25]=c->r[3]|c->r[3]; // 80149590
  W32(c->r[1]+0x00000368u,c->r[9]); // 80149594
  c->r[26]=c->r[5]|c->r[5]; // 80149598
  cmps(c,0,(int32_t)c->r[30],0); // 8014959C
  c->r[27]=c->r[6]|c->r[6]; // 801495A0
  W32(c->r[1]+0x00000370u,c->r[9]); // 801495A4
  c->r[28]=c->r[7]|c->r[7]; // 801495A8
  c->r[29]=c->r[8]|c->r[8]; // 801495AC
  W32(c->r[1]+0x00000210u,c->r[0]); // 801495B0
  W32(c->r[1]+0x0000021Cu,c->r[0]); // 801495B4
  W32(c->r[1]+0x00000220u,c->r[0]); // 801495B8
  {uint32_t ea=c->r[1]+0x000002A0u; WF32(ea,c->f[0]);} // 801495BC
  {uint32_t ea=c->r[1]+0x000002A4u; WF32(ea,c->f[0]);} // 801495C0
  {uint32_t ea=c->r[1]+0x000002A8u; WF32(ea,c->f[0]);} // 801495C4
  {uint32_t ea=c->r[1]+0x000002ACu; WF32(ea,c->f[0]);} // 801495C8
  {uint32_t ea=c->r[1]+0x000002B0u; WF32(ea,c->f[0]);} // 801495CC
  {uint32_t ea=c->r[1]+0x000002B4u; WF32(ea,c->f[0]);} // 801495D0
  {uint32_t ea=c->r[1]+0x000002B8u; WF32(ea,c->f[0]);} // 801495D4
  {uint32_t ea=c->r[1]+0x000002BCu; WF32(ea,c->f[0]);} // 801495D8
  {uint32_t ea=c->r[1]+0x000002C0u; WF32(ea,c->f[0]);} // 801495DC
  {uint32_t ea=c->r[1]+0x000002C4u; WF32(ea,c->f[0]);} // 801495E0
  {uint32_t ea=c->r[1]+0x000002C8u; WF32(ea,c->f[0]);} // 801495E4
  {uint32_t ea=c->r[1]+0x000002CCu; WF32(ea,c->f[0]);} // 801495E8
  {uint32_t ea=c->r[1]+0x000002D0u; WF32(ea,c->f[0]);} // 801495EC
  {uint32_t ea=c->r[1]+0x000002D4u; WF32(ea,c->f[0]);} // 801495F0
  {uint32_t ea=c->r[1]+0x000002D8u; WF32(ea,c->f[0]);} // 801495F4
  {uint32_t ea=c->r[1]+0x000002DCu; WF32(ea,c->f[0]);} // 801495F8
  W32(c->r[1]+0x000002E0u,c->r[0]); // 801495FC
  W32(c->r[1]+0x000002E4u,c->r[0]); // 80149600
  {uint32_t ea=c->r[1]+0x000002E8u; WF32(ea,c->f[0]);} // 80149604
  {uint32_t ea=c->r[1]+0x000002ECu; WF32(ea,c->f[0]);} // 80149608
  {uint32_t ea=c->r[1]+0x000002F0u; WF32(ea,c->f[0]);} // 8014960C
  {uint32_t ea=c->r[1]+0x000002F4u; WF32(ea,c->f[0]);} // 80149610
  {uint32_t ea=c->r[1]+0x000002F8u; WF32(ea,c->f[0]);} // 80149614
  {uint32_t ea=c->r[1]+0x000002FCu; WF32(ea,c->f[0]);} // 80149618
  {uint32_t ea=c->r[1]+0x00000300u; WF32(ea,c->f[0]);} // 8014961C
  {uint32_t ea=c->r[1]+0x00000304u; WF32(ea,c->f[0]);} // 80149620
  {uint32_t ea=c->r[1]+0x00000308u; WF32(ea,c->f[0]);} // 80149624
  {uint32_t ea=c->r[1]+0x0000030Cu; WF32(ea,c->f[0]);} // 80149628
  {uint32_t ea=c->r[1]+0x00000310u; WF32(ea,c->f[0]);} // 8014962C
  {uint32_t ea=c->r[1]+0x00000314u; WF32(ea,c->f[0]);} // 80149630
  {uint32_t ea=c->r[1]+0x00000318u; WF32(ea,c->f[0]);} // 80149634
  {uint32_t ea=c->r[1]+0x0000031Cu; WF32(ea,c->f[0]);} // 80149638
  {uint32_t ea=c->r[1]+0x00000320u; WF32(ea,c->f[0]);} // 8014963C
  {uint32_t ea=c->r[1]+0x00000324u; WF32(ea,c->f[0]);} // 80149640
  W32(c->r[1]+0x00000328u,c->r[0]); // 80149644
  W32(c->r[1]+0x0000032Cu,c->r[0]); // 80149648
  W32(c->r[1]+0x00000330u,c->r[0]); // 8014964C
  W32(c->r[1]+0x00000334u,c->r[0]); // 80149650
  W32(c->r[1]+0x00000338u,c->r[0]); // 80149654
  W32(c->r[1]+0x0000033Cu,c->r[0]); // 80149658
  W32(c->r[1]+0x00000340u,c->r[0]); // 8014965C
  W32(c->r[1]+0x00000344u,c->r[0]); // 80149660
  W32(c->r[1]+0x00000348u,c->r[0]); // 80149664
  if (!crb(c,2)) { goto L_8014968C; } // 80149668
  c->r[6]=0u+0x802D0000u; // 8014966C
  c->r[5]=c->r[4]|c->r[4]; // 80149670
  c->r[6]=c->r[6]+0xFFFFDD30u; // 80149674
  c->r[3]=0u+0x00000000u; // 80149678
  c->r[4]=c->r[6]+0x000003F3u; // 8014967C
  c->lr=0x80149684u; f_801794C0(c); // 80149680
  c->r[0]=0u+0x00000000u; // 80149684
  goto L_8014A284; // 80149688
L_8014968C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014968C
  c->r[5]=c->r[4]|c->r[4]; // 80149690
  c->r[4]=0u+0x00000000u; // 80149694
  c->lr=0x8014969Cu; f_8017A8C0(c); // 80149698
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014969C
  c->r[31]=c->r[3]|c->r[3]; // 801496A0
  cmpu(c,0,c->r[3],c->r[0]); // 801496A4
  if (crb(c,0)) { goto L_801496B4; } // 801496A8
  c->r[3]=0u+0x00000000u; // 801496AC
  goto L_8014A278; // 801496B0
L_801496B4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801496B4
  c->r[4]=c->r[31]|c->r[31]; // 801496B8
  c->r[5]=0u+0x00000000u; // 801496BC
  c->lr=0x801496C4u; f_8017B030(c); // 801496C0
  W32(c->r[1]+0x00000210u,c->r[3]); // 801496C4
  c->r[4]=c->r[31]|c->r[31]; // 801496C8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801496CC
  c->r[5]=0u+0x00000001u; // 801496D0
  c->lr=0x801496D8u; f_8017AB54(c); // 801496D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801496D8
  W32(c->r[1]+0x00000214u,c->r[0]); // 801496DC
  c->r[3]=R32(c->r[30]+0x00000004u); // 801496E0
  c->r[4]=c->r[31]|c->r[31]; // 801496E4
  c->r[5]=0u+0x00000002u; // 801496E8
  c->lr=0x801496F0u; f_8017AB54(c); // 801496EC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801496F0
  W32(c->r[1]+0x00000218u,c->r[0]); // 801496F4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801496F8
  c->r[4]=c->r[31]|c->r[31]; // 801496FC
  c->r[5]=0u+0x00000003u; // 80149700
  c->lr=0x80149708u; f_8017B030(c); // 80149704
  W32(c->r[1]+0x0000021Cu,c->r[3]); // 80149708
  c->r[4]=c->r[31]|c->r[31]; // 8014970C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149710
  c->r[5]=0u+0x00000004u; // 80149714
  c->lr=0x8014971Cu; f_8017B030(c); // 80149718
  W32(c->r[1]+0x00000220u,c->r[3]); // 8014971C
  c->r[4]=c->r[31]|c->r[31]; // 80149720
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149724
  c->r[5]=0u+0x00000005u; // 80149728
  c->lr=0x80149730u; f_8017ADA8(c); // 8014972C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80149730
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80149734
  c->r[0]=c->r[0]^0x80000000u; // 80149738
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 8014973C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149740
  c->r[4]=c->r[31]|c->r[31]; // 80149744
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 80149748
  c->r[5]=0u+0x00000006u; // 8014974C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149750
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149754
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149758
  {uint32_t ea=c->r[1]+0x00000224u; WF32(ea,c->f[0]);} // 8014975C
  c->lr=0x80149764u; f_8017ADA8(c); // 80149760
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80149764
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 80149768
  c->r[0]=c->r[0]^0x80000000u; // 8014976C
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149770
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149774
  c->r[4]=c->r[31]|c->r[31]; // 80149778
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 8014977C
  c->r[5]=0u+0x00000007u; // 80149780
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80149784
  {uint32_t ea=c->r[1]+0x00000228u; WF32(ea,c->f[0]);} // 80149788
  c->lr=0x80149790u; f_8017ADCC(c); // 8014978C
  W32(c->r[1]+0x0000036Cu,c->r[3]); // 80149790
  c->r[4]=c->r[31]|c->r[31]; // 80149794
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80149798
  c->r[5]=0u+0x00000009u; // 8014979C
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 801497A0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801497A4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801497A8
  {uint32_t ea=c->r[1]+0x0000022Cu; WF32(ea,c->f[0]);} // 801497AC
  c->lr=0x801497B4u; f_8017AC94(c); // 801497B0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801497B4
  W32(c->r[1]+0x00000374u,c->r[0]); // 801497B8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801497BC
  c->r[4]=c->r[31]|c->r[31]; // 801497C0
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 801497C4
  c->r[5]=0u+0x0000000Au; // 801497C8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801497CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801497D0
  {uint32_t ea=c->r[1]+0x00000230u; WF32(ea,c->f[0]);} // 801497D4
  c->lr=0x801497DCu; f_8017AC94(c); // 801497D8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801497DC
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 801497E0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801497E4
  c->r[4]=c->r[31]|c->r[31]; // 801497E8
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 801497EC
  c->r[5]=0u+0x0000000Bu; // 801497F0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801497F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801497F8
  {uint32_t ea=c->r[1]+0x00000234u; WF32(ea,c->f[0]);} // 801497FC
  c->lr=0x80149804u; f_8017AC94(c); // 80149800
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149804
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149808
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014980C
  c->r[4]=c->r[31]|c->r[31]; // 80149810
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 80149814
  c->r[5]=0u+0x0000000Cu; // 80149818
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014981C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80149820
  {uint32_t ea=c->r[1]+0x00000238u; WF32(ea,c->f[0]);} // 80149824
  c->lr=0x8014982Cu; f_8017AC94(c); // 80149828
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014982C
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149830
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80149834
  c->r[4]=c->r[31]|c->r[31]; // 80149838
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 8014983C
  c->r[5]=0u+0x0000000Du; // 80149840
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149844
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80149848
  {uint32_t ea=c->r[1]+0x0000023Cu; WF32(ea,c->f[0]);} // 8014984C
  c->lr=0x80149854u; f_8017AC94(c); // 80149850
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149854
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149858
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014985C
  c->r[4]=c->r[31]|c->r[31]; // 80149860
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 80149864
  c->r[5]=0u+0x0000000Eu; // 80149868
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014986C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80149870
  {uint32_t ea=c->r[1]+0x00000240u; WF32(ea,c->f[0]);} // 80149874
  c->lr=0x8014987Cu; f_8017AC94(c); // 80149878
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014987C
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149880
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149884
  c->r[4]=c->r[31]|c->r[31]; // 80149888
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 8014988C
  c->r[5]=0u+0x00000014u; // 80149890
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149894
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149898
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014989C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801498A0
  {uint32_t ea=c->r[1]+0x00000244u; WF32(ea,c->f[0]);} // 801498A4
  c->lr=0x801498ACu; f_8017B030(c); // 801498A8
  W32(c->r[1]+0x000002E0u,c->r[3]); // 801498AC
  c->r[4]=c->r[31]|c->r[31]; // 801498B0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801498B4
  c->r[5]=0u+0x00000015u; // 801498B8
  c->lr=0x801498C0u; f_8017B030(c); // 801498BC
  W32(c->r[1]+0x000002E4u,c->r[3]); // 801498C0
  c->r[23]=c->r[1]+0x00000210u; // 801498C4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 801498C8
  c->r[22]=0u+0x00000000u; // 801498CC
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 801498D0
L_801498D4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 801498D4
  c->r[4]=c->r[31]|c->r[31]; // 801498D8
  c->r[5]=c->r[22]+0x00000016u; // 801498DC
  c->lr=0x801498E4u; f_8017AC94(c); // 801498E0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801498E4
  W32(c->r[1]+0x00000374u,c->r[0]); // 801498E8
  c->r[22]=c->r[22]+0x00000001u; // 801498EC
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 801498F0
  cmpu(c,0,c->r[22],0x00000008u); // 801498F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801498F8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 801498FC
  {uint32_t ea=c->r[23]+0x00000090u; WF32(ea,c->f[0]);} // 80149900
  c->r[23]=c->r[23]+0x00000004u; // 80149904
  if (crb(c,0)) { IRQCHK(c); goto L_801498D4; } // 80149908
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014990C
  c->r[4]=c->r[31]|c->r[31]; // 80149910
  c->r[5]=0u+0x0000001Eu; // 80149914
  c->lr=0x8014991Cu; f_8017B030(c); // 80149918
  W32(c->r[1]+0x00000328u,c->r[3]); // 8014991C
  c->r[23]=c->r[1]+0x00000210u; // 80149920
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 80149924
  c->r[22]=0u+0x00000000u; // 80149928
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014992C
L_80149930:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149930
  c->r[4]=c->r[31]|c->r[31]; // 80149934
  c->r[5]=c->r[22]+0x0000001Fu; // 80149938
  c->lr=0x80149940u; f_8017AC94(c); // 8014993C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149940
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149944
  c->r[22]=c->r[22]+0x00000001u; // 80149948
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 8014994C
  cmpu(c,0,c->r[22],0x00000008u); // 80149950
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80149954
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 80149958
  {uint32_t ea=c->r[23]+0x000000D8u; WF32(ea,c->f[0]);} // 8014995C
  c->r[23]=c->r[23]+0x00000004u; // 80149960
  if (crb(c,0)) { IRQCHK(c); goto L_80149930; } // 80149964
  c->r[23]=c->r[1]+0x00000210u; // 80149968
  c->r[22]=0u+0x00000000u; // 8014996C
L_80149970:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149970
  c->r[4]=c->r[31]|c->r[31]; // 80149974
  c->r[5]=c->r[22]+0x00000027u; // 80149978
  c->lr=0x80149980u; f_8017B030(c); // 8014997C
  c->r[22]=c->r[22]+0x00000001u; // 80149980
  W32(c->r[23]+0x0000011Cu,c->r[3]); // 80149984
  cmpu(c,0,c->r[22],0x00000008u); // 80149988
  c->r[23]=c->r[23]+0x00000004u; // 8014998C
  if (crb(c,0)) { IRQCHK(c); goto L_80149970; } // 80149990
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149994
  c->r[4]=c->r[31]|c->r[31]; // 80149998
  c->r[5]=0u+0x0000002Fu; // 8014999C
  c->lr=0x801499A4u; f_8017B030(c); // 801499A0
  W32(c->r[1]+0x0000028Cu,c->r[3]); // 801499A4
  c->r[4]=c->r[31]|c->r[31]; // 801499A8
  c->r[3]=R32(c->r[30]+0x00000004u); // 801499AC
  c->r[5]=0u+0x00000030u; // 801499B0
  c->lr=0x801499B8u; f_8017AB54(c); // 801499B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801499B8
  W32(c->r[1]+0x00000288u,c->r[0]); // 801499BC
  c->r[3]=R32(c->r[30]+0x00000004u); // 801499C0
  c->r[4]=c->r[31]|c->r[31]; // 801499C4
  c->r[5]=0u+0x00000031u; // 801499C8
  c->lr=0x801499D0u; f_8017AB54(c); // 801499CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801499D0
  W32(c->r[1]+0x00000290u,c->r[0]); // 801499D4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801499D8
  c->r[4]=c->r[31]|c->r[31]; // 801499DC
  c->r[5]=0u+0x00000032u; // 801499E0
  c->lr=0x801499E8u; f_8017AC94(c); // 801499E4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801499E8
  W32(c->r[1]+0x00000374u,c->r[0]); // 801499EC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801499F0
  c->r[4]=c->r[31]|c->r[31]; // 801499F4
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 801499F8
  c->r[5]=0u+0x00000033u; // 801499FC
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149A00
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80149A04
  {uint32_t ea=c->r[1]+0x00000294u; WF32(ea,c->f[0]);} // 80149A08
  c->lr=0x80149A10u; f_8017AC70(c); // 80149A0C
  W8(c->r[1]+0x00000298u,c->r[3]); // 80149A10
  c->r[22]=0u+0x00000000u; // 80149A14
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149A18
  W32(c->r[1]+0x0000029Cu,c->r[22]); // 80149A1C
  c->lr=0x80149A24u; f_8017A6AC(c); // 80149A20
  cmpu(c,0,c->r[3],0x00000034u); // 80149A24
  if (crb(c,1)) { goto L_80149C98; } // 80149A28
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149A2C
  c->r[6]=0u+0x00000002u; // 80149A30
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149A34
  c->r[0]=0u+0x00000005u; // 80149A38
  {uint32_t ea=c->r[1]+0x000002C0u; WF32(ea,c->f[1]);} // 80149A3C
  c->r[4]=c->r[31]|c->r[31]; // 80149A40
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149A44
  c->r[5]=0u+0x00000010u; // 80149A48
  {uint32_t ea=c->r[1]+0x000002C4u; WF32(ea,c->f[1]);} // 80149A4C
  {uint32_t ea=c->r[1]+0x000002C8u; WF32(ea,c->f[1]);} // 80149A50
  {uint32_t ea=c->r[1]+0x000002CCu; WF32(ea,c->f[1]);} // 80149A54
  {uint32_t ea=c->r[1]+0x000002D0u; WF32(ea,c->f[1]);} // 80149A58
  {uint32_t ea=c->r[1]+0x000002D4u; WF32(ea,c->f[1]);} // 80149A5C
  {uint32_t ea=c->r[1]+0x000002D8u; WF32(ea,c->f[1]);} // 80149A60
  {uint32_t ea=c->r[1]+0x000002DCu; WF32(ea,c->f[1]);} // 80149A64
  {uint32_t ea=c->r[1]+0x00000308u; WF32(ea,c->f[1]);} // 80149A68
  {uint32_t ea=c->r[1]+0x0000030Cu; WF32(ea,c->f[1]);} // 80149A6C
  {uint32_t ea=c->r[1]+0x00000310u; WF32(ea,c->f[1]);} // 80149A70
  {uint32_t ea=c->r[1]+0x00000314u; WF32(ea,c->f[1]);} // 80149A74
  {uint32_t ea=c->r[1]+0x00000318u; WF32(ea,c->f[1]);} // 80149A78
  {uint32_t ea=c->r[1]+0x0000031Cu; WF32(ea,c->f[1]);} // 80149A7C
  {uint32_t ea=c->r[1]+0x00000320u; WF32(ea,c->f[1]);} // 80149A80
  {uint32_t ea=c->r[1]+0x00000324u; WF32(ea,c->f[1]);} // 80149A84
  W32(c->r[1]+0x00000248u,c->r[22]); // 80149A88
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[0]);} // 80149A8C
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[0]);} // 80149A90
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[0]);} // 80149A94
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[0]);} // 80149A98
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 80149A9C
  {uint32_t ea=c->r[1]+0x00000260u; WF32(ea,c->f[0]);} // 80149AA0
  W8(c->r[1]+0x00000264u,c->r[6]); // 80149AA4
  W32(c->r[1]+0x00000268u,c->r[0]); // 80149AA8
  c->lr=0x80149AB0u; f_8017AC94(c); // 80149AAC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149AB0
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149AB4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80149AB8
  c->r[4]=c->r[31]|c->r[31]; // 80149ABC
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 80149AC0
  c->r[5]=0u+0x00000011u; // 80149AC4
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149AC8
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 80149ACC
  c->lr=0x80149AD4u; f_8017AC94(c); // 80149AD0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149AD4
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149AD8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80149ADC
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 80149AE0
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 80149AE4
  fcmp(c,0,c->f[29],c->f[31]); // 80149AE8
  if (crb(c,2)) { goto L_80149C4C; } // 80149AEC
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149AF0
  fcmp(c,0,c->f[29],c->f[0]); // 80149AF4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80149AF8
  if (!crb(c,2)) { goto L_80149B04; } // 80149AFC
  goto L_80149B08; // 80149B00
L_80149B04:;
  c->f[29]=c->f[0]; // 80149B04
L_80149B08:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149B08
  fcmp(c,0,c->f[29],c->f[0]); // 80149B0C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80149B10
  if (!crb(c,2)) { goto L_80149B1C; } // 80149B14
  goto L_80149B20; // 80149B18
L_80149B1C:;
  c->f[29]=c->f[0]; // 80149B1C
L_80149B20:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149B20
  c->lr=0x80149B28u; f_800C02CC(c); // 80149B24
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149B28
  c->f[30]=c->ps1[30]=S(c->f[1]); // 80149B2C
  c->f[1]=c->f[0]; // 80149B30
  c->lr=0x80149B38u; f_800C02CC(c); // 80149B34
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80149B38
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149B3C
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149B40
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 80149B44
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80149B48
  c->lr=0x80149B50u; f_800C02CC(c); // 80149B4C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80149B50
  c->f[1]=c->f[29]; // 80149B54
  c->lr=0x80149B5Cu; f_800C02CC(c); // 80149B58
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80149B5C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149B60
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149B64
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80149B68
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80149B6C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80149B70
  fcmp(c,0,c->f[1],c->f[0]); // 80149B74
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80149B78
  if (!crb(c,2)) { goto L_80149B84; } // 80149B7C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149B80
L_80149B84:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149B84
  fcmp(c,0,c->f[1],c->f[0]); // 80149B88
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80149B8C
  if (!crb(c,2)) { goto L_80149B98; } // 80149B90
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149B94
L_80149B98:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149B98
  {uint32_t ea=c->r[1]+0x0000026Cu; WF32(ea,c->f[1]);} // 80149B9C
  fcmp(c,0,c->f[31],c->f[0]); // 80149BA0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80149BA4
  if (!crb(c,2)) { goto L_80149BB0; } // 80149BA8
  goto L_80149BB4; // 80149BAC
L_80149BB0:;
  c->f[31]=c->f[0]; // 80149BB0
L_80149BB4:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149BB4
  fcmp(c,0,c->f[31],c->f[0]); // 80149BB8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80149BBC
  if (!crb(c,2)) { goto L_80149BC8; } // 80149BC0
  goto L_80149BCC; // 80149BC4
L_80149BC8:;
  c->f[31]=c->f[0]; // 80149BC8
L_80149BCC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149BCC
  c->lr=0x80149BD4u; f_800C02CC(c); // 80149BD0
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149BD4
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80149BD8
  c->f[1]=c->f[0]; // 80149BDC
  c->lr=0x80149BE4u; f_800C02CC(c); // 80149BE0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80149BE4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149BE8
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149BEC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80149BF0
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80149BF4
  c->lr=0x80149BFCu; f_800C02CC(c); // 80149BF8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80149BFC
  c->f[1]=c->f[31]; // 80149C00
  c->lr=0x80149C08u; f_800C02CC(c); // 80149C04
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80149C08
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149C0C
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149C10
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80149C14
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80149C18
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80149C1C
  fcmp(c,0,c->f[1],c->f[0]); // 80149C20
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80149C24
  if (!crb(c,2)) { goto L_80149C30; } // 80149C28
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149C2C
L_80149C30:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149C30
  fcmp(c,0,c->f[1],c->f[0]); // 80149C34
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80149C38
  if (!crb(c,2)) { goto L_80149C44; } // 80149C3C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149C40
L_80149C44:;
  {uint32_t ea=c->r[1]+0x00000274u; WF32(ea,c->f[1]);} // 80149C44
  goto L_80149C5C; // 80149C48
L_80149C4C:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149C4C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149C50
  {uint32_t ea=c->r[1]+0x0000026Cu; WF32(ea,c->f[1]);} // 80149C54
  {uint32_t ea=c->r[1]+0x00000274u; WF32(ea,c->f[0]);} // 80149C58
L_80149C5C:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149C5C
  c->r[0]=0u+0x00000002u; // 80149C60
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149C64
  {uint32_t ea=c->r[1]+0x00000270u; WF32(ea,c->f[1]);} // 80149C68
  {uint32_t ea=c->r[1]+0x00000278u; WF32(ea,c->f[1]);} // 80149C6C
  {uint32_t ea=c->r[1]+0x0000027Cu; WF32(ea,c->f[0]);} // 80149C70
  {uint32_t ea=c->r[1]+0x00000280u; WF32(ea,c->f[1]);} // 80149C74
  W8(c->r[1]+0x00000284u,c->r[0]); // 80149C78
  {uint32_t ea=c->r[1]+0x0000034Cu; WF32(ea,c->f[0]);} // 80149C7C
  {uint32_t ea=c->r[1]+0x00000350u; WF32(ea,c->f[0]);} // 80149C80
  {uint32_t ea=c->r[1]+0x00000354u; WF32(ea,c->f[0]);} // 80149C84
  {uint32_t ea=c->r[1]+0x00000358u; WF32(ea,c->f[0]);} // 80149C88
  {uint32_t ea=c->r[1]+0x0000035Cu; WF32(ea,c->f[0]);} // 80149C8C
  {uint32_t ea=c->r[1]+0x00000360u; WF32(ea,c->f[0]);} // 80149C90
  goto L_8014A20C; // 80149C94
L_80149C98:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 80149C98
  c->r[23]=c->r[1]+0x00000210u; // 80149C9C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 80149CA0
  c->r[22]=0u+0x00000000u; // 80149CA4
L_80149CA8:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149CA8
  c->r[4]=c->r[31]|c->r[31]; // 80149CAC
  c->r[5]=c->r[22]+0x0000003Au; // 80149CB0
  c->lr=0x80149CB8u; f_8017AC94(c); // 80149CB4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149CB8
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149CBC
  c->r[22]=c->r[22]+0x00000001u; // 80149CC0
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 80149CC4
  cmpu(c,0,c->r[22],0x00000008u); // 80149CC8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80149CCC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 80149CD0
  {uint32_t ea=c->r[23]+0x000000B0u; WF32(ea,c->f[0]);} // 80149CD4
  c->r[23]=c->r[23]+0x00000004u; // 80149CD8
  if (crb(c,0)) { IRQCHK(c); goto L_80149CA8; } // 80149CDC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 80149CE0
  c->r[23]=c->r[1]+0x00000210u; // 80149CE4
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 80149CE8
  c->r[22]=0u+0x00000000u; // 80149CEC
L_80149CF0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149CF0
  c->r[4]=c->r[31]|c->r[31]; // 80149CF4
  c->r[5]=c->r[22]+0x00000042u; // 80149CF8
  c->lr=0x80149D00u; f_8017AC94(c); // 80149CFC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149D00
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149D04
  c->r[22]=c->r[22]+0x00000001u; // 80149D08
  {uint32_t ea=c->r[1]+0x00000370u; c->f[0]=RF64(ea);} // 80149D0C
  cmpu(c,0,c->r[22],0x00000008u); // 80149D10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80149D14
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 80149D18
  {uint32_t ea=c->r[23]+0x000000F8u; WF32(ea,c->f[0]);} // 80149D1C
  c->r[23]=c->r[23]+0x00000004u; // 80149D20
  if (crb(c,0)) { IRQCHK(c); goto L_80149CF0; } // 80149D24
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149D28
  c->r[4]=c->r[31]|c->r[31]; // 80149D2C
  c->r[5]=0u+0x0000004Au; // 80149D30
  c->lr=0x80149D38u; f_8017AB54(c); // 80149D34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80149D38
  W32(c->r[1]+0x00000248u,c->r[0]); // 80149D3C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149D40
  c->r[4]=c->r[31]|c->r[31]; // 80149D44
  c->r[5]=0u+0x0000004Bu; // 80149D48
  c->lr=0x80149D50u; f_8017AC94(c); // 80149D4C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149D50
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149D54
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149D58
  c->r[4]=c->r[31]|c->r[31]; // 80149D5C
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 80149D60
  c->r[5]=0u+0x0000004Cu; // 80149D64
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149D68
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149D6C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149D70
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149D74
  {uint32_t ea=c->r[1]+0x0000024Cu; WF32(ea,c->f[0]);} // 80149D78
  c->lr=0x80149D80u; f_8017AC94(c); // 80149D7C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149D80
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149D84
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149D88
  c->r[4]=c->r[31]|c->r[31]; // 80149D8C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80149D90
  c->r[5]=0u+0x0000004Du; // 80149D94
  {uint32_t ea=c->r[1]+0x00000370u; c->f[2]=RF64(ea);} // 80149D98
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149D9C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 80149DA0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80149DA4
  {uint32_t ea=c->r[1]+0x00000254u; WF32(ea,c->f[1]);} // 80149DA8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149DAC
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 80149DB0
  {uint32_t ea=c->r[1]+0x00000258u; WF32(ea,c->f[0]);} // 80149DB4
  {uint32_t ea=c->r[1]+0x00000250u; WF32(ea,c->f[1]);} // 80149DB8
  c->lr=0x80149DC0u; f_8017AC94(c); // 80149DBC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149DC0
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149DC4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149DC8
  c->r[4]=c->r[31]|c->r[31]; // 80149DCC
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 80149DD0
  c->r[5]=0u+0x0000004Eu; // 80149DD4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149DD8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149DDC
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149DE0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149DE4
  {uint32_t ea=c->r[1]+0x0000025Cu; WF32(ea,c->f[0]);} // 80149DE8
  c->lr=0x80149DF0u; f_8017AC94(c); // 80149DEC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149DF0
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149DF4
  c->r[3]=0u+0x00000002u; // 80149DF8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149DFC
  {uint32_t ea=c->r[1]+0x00000370u; c->f[1]=RF64(ea);} // 80149E00
  c->r[0]=0u+0x00000005u; // 80149E04
  W8(c->r[1]+0x00000264u,c->r[3]); // 80149E08
  c->r[4]=c->r[31]|c->r[31]; // 80149E0C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149E10
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149E14
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149E18
  c->r[5]=0u+0x00000010u; // 80149E1C
  W32(c->r[1]+0x00000268u,c->r[0]); // 80149E20
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149E24
  {uint32_t ea=c->r[1]+0x00000260u; WF32(ea,c->f[0]);} // 80149E28
  c->lr=0x80149E30u; f_8017AC94(c); // 80149E2C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149E30
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149E34
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149E38
  c->r[4]=c->r[31]|c->r[31]; // 80149E3C
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 80149E40
  c->r[5]=0u+0x00000011u; // 80149E44
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149E48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149E4C
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149E50
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 80149E54
  c->lr=0x80149E5Cu; f_8017AC94(c); // 80149E58
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149E5C
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149E60
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149E64
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80149E68
  {uint32_t ea=c->r[1]+0x00000370u; c->f[2]=RF64(ea);} // 80149E6C
  fcmp(c,0,c->f[0],c->f[28]); // 80149E70
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80149E74
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80149E78
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 80149E7C
  if (!crb(c,2)) { goto L_80149F50; } // 80149E80
  fcmp(c,0,c->f[0],c->f[31]); // 80149E84
  if (!crb(c,2)) { goto L_80149F50; } // 80149E88
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149E8C
  c->r[4]=c->r[31]|c->r[31]; // 80149E90
  c->r[5]=0u+0x00000050u; // 80149E94
  c->lr=0x80149E9Cu; f_8017AC94(c); // 80149E98
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149E9C
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149EA0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149EA4
  c->r[4]=c->r[31]|c->r[31]; // 80149EA8
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 80149EAC
  c->r[5]=0u+0x00000051u; // 80149EB0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149EB4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149EB8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149EBC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149EC0
  {uint32_t ea=c->r[1]+0x0000026Cu; WF32(ea,c->f[0]);} // 80149EC4
  c->lr=0x80149ECCu; f_8017AC94(c); // 80149EC8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149ECC
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149ED0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149ED4
  c->r[4]=c->r[31]|c->r[31]; // 80149ED8
  {uint32_t ea=c->r[1]+0x00000370u; c->f[1]=RF64(ea);} // 80149EDC
  c->r[5]=0u+0x00000052u; // 80149EE0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149EE4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149EE8
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149EEC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149EF0
  {uint32_t ea=c->r[1]+0x00000270u; WF32(ea,c->f[0]);} // 80149EF4
  c->lr=0x80149EFCu; f_8017AC94(c); // 80149EF8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149EFC
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 80149F00
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149F04
  c->r[4]=c->r[31]|c->r[31]; // 80149F08
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 80149F0C
  c->r[5]=0u+0x00000053u; // 80149F10
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149F14
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149F18
  c->r[3]=R32(c->r[30]+0x00000004u); // 80149F1C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149F20
  {uint32_t ea=c->r[1]+0x00000274u; WF32(ea,c->f[0]);} // 80149F24
  c->lr=0x80149F2Cu; f_8017AC94(c); // 80149F28
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80149F2C
  W32(c->r[1]+0x00000374u,c->r[0]); // 80149F30
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80149F34
  {uint32_t ea=c->r[1]+0x00000370u; c->f[1]=RF64(ea);} // 80149F38
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149F3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80149F40
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80149F44
  {uint32_t ea=c->r[1]+0x00000278u; WF32(ea,c->f[0]);} // 80149F48
  goto L_8014A0B8; // 80149F4C
L_80149F50:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149F50
  fcmp(c,0,c->f[28],c->f[0]); // 80149F54
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80149F58
  if (!crb(c,2)) { goto L_80149F64; } // 80149F5C
  goto L_80149F68; // 80149F60
L_80149F64:;
  c->f[28]=c->f[0]; // 80149F64
L_80149F68:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149F68
  fcmp(c,0,c->f[28],c->f[0]); // 80149F6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80149F70
  if (!crb(c,2)) { goto L_80149F7C; } // 80149F74
  goto L_80149F80; // 80149F78
L_80149F7C:;
  c->f[28]=c->f[0]; // 80149F7C
L_80149F80:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149F80
  c->lr=0x80149F88u; f_800C02CC(c); // 80149F84
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149F88
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80149F8C
  c->f[1]=c->f[0]; // 80149F90
  c->lr=0x80149F98u; f_800C02CC(c); // 80149F94
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80149F98
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149F9C
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149FA0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80149FA4
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80149FA8
  c->lr=0x80149FB0u; f_800C02CC(c); // 80149FAC
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80149FB0
  c->f[1]=c->f[28]; // 80149FB4
  c->lr=0x80149FBCu; f_800C02CC(c); // 80149FB8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80149FBC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149FC0
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149FC4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80149FC8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80149FCC
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 80149FD0
  fcmp(c,0,c->f[2],c->f[0]); // 80149FD4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80149FD8
  if (!crb(c,2)) { goto L_80149FE4; } // 80149FDC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 80149FE0
L_80149FE4:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80149FE4
  fcmp(c,0,c->f[2],c->f[0]); // 80149FE8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80149FEC
  if (!crb(c,2)) { goto L_80149FF8; } // 80149FF0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 80149FF4
L_80149FF8:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80149FF8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80149FFC
  fcmp(c,0,c->f[31],c->f[0]); // 8014A000
  {uint32_t ea=c->r[1]+0x0000026Cu; WF32(ea,c->f[2]);} // 8014A004
  {uint32_t ea=c->r[1]+0x00000270u; WF32(ea,c->f[1]);} // 8014A008
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014A00C
  if (!crb(c,2)) { goto L_8014A018; } // 8014A010
  goto L_8014A01C; // 8014A014
L_8014A018:;
  c->f[31]=c->f[0]; // 8014A018
L_8014A01C:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A01C
  fcmp(c,0,c->f[31],c->f[0]); // 8014A020
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014A024
  if (!crb(c,2)) { goto L_8014A030; } // 8014A028
  goto L_8014A034; // 8014A02C
L_8014A030:;
  c->f[31]=c->f[0]; // 8014A030
L_8014A034:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014A034
  c->lr=0x8014A03Cu; f_800C02CC(c); // 8014A038
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A03C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014A040
  c->f[1]=c->f[0]; // 8014A044
  c->lr=0x8014A04Cu; f_800C02CC(c); // 8014A048
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014A04C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A050
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014A054
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014A058
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014A05C
  c->lr=0x8014A064u; f_800C02CC(c); // 8014A060
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014A064
  c->f[1]=c->f[31]; // 8014A068
  c->lr=0x8014A070u; f_800C02CC(c); // 8014A06C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014A070
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014A074
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A078
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014A07C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014A080
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014A084
  fcmp(c,0,c->f[1],c->f[0]); // 8014A088
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014A08C
  if (!crb(c,2)) { goto L_8014A098; } // 8014A090
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014A094
L_8014A098:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A098
  fcmp(c,0,c->f[1],c->f[0]); // 8014A09C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014A0A0
  if (!crb(c,2)) { goto L_8014A0AC; } // 8014A0A4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014A0A8
L_8014A0AC:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A0AC
  {uint32_t ea=c->r[1]+0x00000274u; WF32(ea,c->f[1]);} // 8014A0B0
  {uint32_t ea=c->r[1]+0x00000278u; WF32(ea,c->f[0]);} // 8014A0B4
L_8014A0B8:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014A0B8
  c->r[4]=c->r[31]|c->r[31]; // 8014A0BC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A0C0
  c->r[5]=0u+0x00000013u; // 8014A0C4
  {uint32_t ea=c->r[1]+0x0000027Cu; WF32(ea,c->f[1]);} // 8014A0C8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A0CC
  {uint32_t ea=c->r[1]+0x00000280u; WF32(ea,c->f[0]);} // 8014A0D0
  c->lr=0x8014A0D8u; f_8017AB54(c); // 8014A0D4
  W8(c->r[1]+0x00000284u,c->r[3]); // 8014A0D8
  c->r[4]=c->r[31]|c->r[31]; // 8014A0DC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A0E0
  c->r[5]=0u+0x00000034u; // 8014A0E4
  c->lr=0x8014A0ECu; f_8017ADA8(c); // 8014A0E8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014A0EC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014A0F0
  c->r[0]=c->r[0]^0x80000000u; // 8014A0F4
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 8014A0F8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A0FC
  c->r[4]=c->r[31]|c->r[31]; // 8014A100
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 8014A104
  c->r[5]=0u+0x00000035u; // 8014A108
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A10C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014A110
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014A114
  {uint32_t ea=c->r[1]+0x0000034Cu; WF32(ea,c->f[0]);} // 8014A118
  c->lr=0x8014A120u; f_8017ADA8(c); // 8014A11C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014A120
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014A124
  c->r[0]=c->r[0]^0x80000000u; // 8014A128
  W32(c->r[1]+0x00000374u,c->r[0]); // 8014A12C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A130
  c->r[4]=c->r[31]|c->r[31]; // 8014A134
  {uint32_t ea=c->r[1]+0x00000370u; c->f[1]=RF64(ea);} // 8014A138
  c->r[5]=0u+0x00000036u; // 8014A13C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A140
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014A144
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014A148
  {uint32_t ea=c->r[1]+0x00000350u; WF32(ea,c->f[0]);} // 8014A14C
  c->lr=0x8014A154u; f_8017ADA8(c); // 8014A150
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014A154
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014A158
  c->r[0]=c->r[0]^0x80000000u; // 8014A15C
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 8014A160
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A164
  c->r[4]=c->r[31]|c->r[31]; // 8014A168
  {uint32_t ea=c->r[1]+0x00000368u; c->f[0]=RF64(ea);} // 8014A16C
  c->r[5]=0u+0x00000037u; // 8014A170
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014A174
  {uint32_t ea=c->r[1]+0x00000354u; WF32(ea,c->f[0]);} // 8014A178
  c->lr=0x8014A180u; f_8017ADA8(c); // 8014A17C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014A180
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014A184
  c->r[0]=c->r[0]^0x80000000u; // 8014A188
  W32(c->r[1]+0x00000374u,c->r[0]); // 8014A18C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A190
  c->r[4]=c->r[31]|c->r[31]; // 8014A194
  {uint32_t ea=c->r[1]+0x00000370u; c->f[1]=RF64(ea);} // 8014A198
  c->r[5]=0u+0x00000038u; // 8014A19C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A1A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014A1A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014A1A8
  {uint32_t ea=c->r[1]+0x00000358u; WF32(ea,c->f[0]);} // 8014A1AC
  c->lr=0x8014A1B4u; f_8017ADA8(c); // 8014A1B0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014A1B4
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014A1B8
  c->r[0]=c->r[0]^0x80000000u; // 8014A1BC
  W32(c->r[1]+0x0000036Cu,c->r[0]); // 8014A1C0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A1C4
  c->r[4]=c->r[31]|c->r[31]; // 8014A1C8
  {uint32_t ea=c->r[1]+0x00000368u; c->f[1]=RF64(ea);} // 8014A1CC
  c->r[5]=0u+0x00000039u; // 8014A1D0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A1D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014A1D8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014A1DC
  {uint32_t ea=c->r[1]+0x0000035Cu; WF32(ea,c->f[0]);} // 8014A1E0
  c->lr=0x8014A1E8u; f_8017ADA8(c); // 8014A1E4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014A1E8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014A1EC
  c->r[0]=c->r[0]^0x80000000u; // 8014A1F0
  W32(c->r[1]+0x00000374u,c->r[0]); // 8014A1F4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A1F8
  {uint32_t ea=c->r[1]+0x00000370u; c->f[1]=RF64(ea);} // 8014A1FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014A200
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014A204
  {uint32_t ea=c->r[1]+0x00000360u; WF32(ea,c->f[0]);} // 8014A208
L_8014A20C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A20C
  c->lr=0x8014A214u; f_8017A6AC(c); // 8014A210
  cmpu(c,0,c->r[3],0x00000054u); // 8014A214
  if (crb(c,1)) { goto L_8014A238; } // 8014A218
  c->r[4]=0u+0x00000064u; // 8014A21C
  c->r[3]=0u+0x00000000u; // 8014A220
  c->r[0]=0u+0x00000001u; // 8014A224
  W8(c->r[1]+0x00000364u,c->r[4]); // 8014A228
  W8(c->r[1]+0x00000365u,c->r[3]); // 8014A22C
  W8(c->r[1]+0x00000366u,c->r[0]); // 8014A230
  goto L_8014A274; // 8014A234
L_8014A238:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A238
  c->r[4]=c->r[31]|c->r[31]; // 8014A23C
  c->r[5]=0u+0x00000054u; // 8014A240
  c->lr=0x8014A248u; f_8017AB54(c); // 8014A244
  W8(c->r[1]+0x00000364u,c->r[3]); // 8014A248
  c->r[4]=c->r[31]|c->r[31]; // 8014A24C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A250
  c->r[5]=0u+0x00000055u; // 8014A254
  c->lr=0x8014A25Cu; f_8017AB54(c); // 8014A258
  W8(c->r[1]+0x00000365u,c->r[3]); // 8014A25C
  c->r[4]=c->r[31]|c->r[31]; // 8014A260
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014A264
  c->r[5]=0u+0x00000056u; // 8014A268
  c->lr=0x8014A270u; f_8017AB54(c); // 8014A26C
  W8(c->r[1]+0x00000366u,c->r[3]); // 8014A270
L_8014A274:;
  c->r[3]=0u+0x00000001u; // 8014A274
L_8014A278:;
  c->r[0]=0u-c->r[3]; // 8014A278
  c->r[0]=c->r[0]|c->r[3]; // 8014A27C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014A280
L_8014A284:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014A284
  if (!crb(c,2)) { goto L_8014A29C; } // 8014A288
  c->r[0]=0u+0xFFFFFFFFu; // 8014A28C
  W32(c->r[29]+0x00000000u,c->r[0]); // 8014A290
  c->r[3]=c->r[28]|c->r[28]; // 8014A294
  goto L_8014A490; // 8014A298
L_8014A29C:;
  c->r[3]=R32(c->r[1]+0x00000220u); // 8014A29C
  c->lr=0x8014A2A4u; f_8014652C(c); // 8014A2A0
  c->r[0]=rotl(c->r[28],7)&0xFFFFFF80u; // 8014A2A4
  c->r[22]=rotl(c->r[3],0)&0x0000FFFFu; // 8014A2A8
  c->r[23]=c->r[26]+c->r[0]; // 8014A2AC
  c->r[30]=0u+0x00000000u; // 8014A2B0
  goto L_8014A330; // 8014A2B4
L_8014A2B8:;
  c->r[3]=R32(c->r[1]+0x00000220u); // 8014A2B8
  c->r[4]=c->r[30]|c->r[30]; // 8014A2BC
  c->r[5]=c->r[1]+0x00000108u; // 8014A2C0
  c->lr=0x8014A2C8u; f_801465B8(c); // 8014A2C4
  c->r[3]=c->r[1]+0x00000108u; // 8014A2C8
  c->r[4]=c->r[1]+0x00000088u; // 8014A2CC
  c->r[5]=c->r[1]+0x00000008u; // 8014A2D0
  c->lr=0x8014A2D8u; f_80146430(c); // 8014A2D4
  c->r[24]=c->r[26]|c->r[26]; // 8014A2D8
  c->r[31]=0u+0x00000000u; // 8014A2DC
  goto L_8014A300; // 8014A2E0
L_8014A2E4:;
  c->r[3]=c->r[24]|c->r[24]; // 8014A2E4
  c->r[4]=c->r[1]+0x00000088u; // 8014A2E8
  c->lr=0x8014A2F0u; f_800B7948(c); // 8014A2EC
  cmps(c,0,(int32_t)c->r[3],0); // 8014A2F0
  if (crb(c,2)) { goto L_8014A308; } // 8014A2F4
  c->r[24]=c->r[24]+0x00000080u; // 8014A2F8
  c->r[31]=c->r[31]+0x00000001u; // 8014A2FC
L_8014A300:;
  cmpu(c,0,c->r[31],c->r[28]); // 8014A300
  if (crb(c,0)) { IRQCHK(c); goto L_8014A2E4; } // 8014A304
L_8014A308:;
  cmpu(c,0,c->r[31],c->r[28]); // 8014A308
  if (!crb(c,2)) { goto L_8014A32C; } // 8014A30C
  c->r[3]=c->r[23]|c->r[23]; // 8014A310
  c->r[5]=c->r[1]+0x00000088u; // 8014A314
  c->r[4]=0u+0x00000080u; // 8014A318
  c->r[6]=0u+0x00000080u; // 8014A31C
  c->lr=0x8014A324u; f_801792F0(c); // 8014A320
  c->r[23]=c->r[23]+0x00000080u; // 8014A324
  c->r[28]=c->r[28]+0x00000001u; // 8014A328
L_8014A32C:;
  c->r[30]=c->r[30]+0x00000001u; // 8014A32C
L_8014A330:;
  cmpu(c,0,c->r[30],c->r[22]); // 8014A330
  if (crb(c,0)) { IRQCHK(c); goto L_8014A2B8; } // 8014A334
  c->r[0]=R32(c->r[1]+0x00000214u); // 8014A338
  cmps(c,0,(int32_t)c->r[0],1); // 8014A33C
  if (!crb(c,2)) { goto L_8014A48C; } // 8014A340
  c->r[3]=R32(c->r[1]+0x0000021Cu); // 8014A344
  c->r[31]=0u+0x00000000u; // 8014A348
  goto L_8014A368; // 8014A34C
L_8014A350:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8014A350
  cmps(c,0,(int32_t)c->r[0],10); // 8014A354
  if (!crb(c,2)) { goto L_8014A364; } // 8014A358
  c->r[0]=c->r[31]+0x00000001u; // 8014A35C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 8014A360
L_8014A364:;
  c->r[3]=c->r[3]+0x00000001u; // 8014A364
L_8014A368:;
  c->r[4]=R8(c->r[3]+0x00000000u); // 8014A368
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 8014A36C
  if (!crb(c,2)) { IRQCHK(c); goto L_8014A350; } // 8014A370
  c->r[23]=c->r[1]+0x00000188u; // 8014A374
  c->r[30]=0u+0x00000000u; // 8014A378
  c->r[22]=0u+0x00000000u; // 8014A37C
  c->r[24]=0u+0x00000020u; // 8014A380
  goto L_8014A484; // 8014A384
L_8014A388:;
  c->r[5]=R32(c->r[1]+0x0000021Cu); // 8014A388
  c->r[3]=0u+0x00000000u; // 8014A38C
  goto L_8014A3B0; // 8014A390
L_8014A394:;
  cmpu(c,0,c->r[3],c->r[30]); // 8014A394
  if (crb(c,2)) { goto L_8014A3BC; } // 8014A398
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; // 8014A39C
  cmps(c,0,(int32_t)c->r[0],10); // 8014A3A0
  if (!crb(c,2)) { goto L_8014A3AC; } // 8014A3A4
  c->r[3]=c->r[3]+0x00000001u; // 8014A3A8
L_8014A3AC:;
  c->r[5]=c->r[5]+0x00000001u; // 8014A3AC
L_8014A3B0:;
  c->r[4]=R8(c->r[5]+0x00000000u); // 8014A3B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 8014A3B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8014A394; } // 8014A3B8
L_8014A3BC:;
  cmpu(c,0,c->r[3],c->r[30]); // 8014A3BC
  if (crb(c,0)) { goto L_8014A3CC; } // 8014A3C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[4]; cr0(c,c->r[0]); // 8014A3C4
  if (!crb(c,2)) { goto L_8014A3D4; } // 8014A3C8
L_8014A3CC:;
  W8(c->r[1]+0x00000188u,c->r[22]); // 8014A3CC
  goto L_8014A454; // 8014A3D0
L_8014A3D4:;
  c->r[6]=c->r[1]+0x00000188u; // 8014A3D4
  c->r[4]=0u+0x00000000u; // 8014A3D8
  c->ctr=c->r[24]; // 8014A3DC
L_8014A3E0:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8014A3E0
  W8(c->r[6]+0x00000000u,c->r[0]); // 8014A3E4
  c->r[3]=R8(c->r[5]+0x00000001u); // 8014A3E8
  cmps(c,0,(int32_t)c->r[3],10); // 8014A3EC
  if (!crb(c,2)) { goto L_8014A3FC; } // 8014A3F0
  c->r[4]=c->r[4]+0x00000001u; // 8014A3F4
  goto L_8014A450; // 8014A3F8
L_8014A3FC:;
  W8(c->r[6]+0x00000001u,c->r[3]); // 8014A3FC
  c->r[3]=R8(c->r[5]+0x00000002u); // 8014A400
  cmps(c,0,(int32_t)c->r[3],10); // 8014A404
  if (!crb(c,2)) { goto L_8014A414; } // 8014A408
  c->r[4]=c->r[4]+0x00000002u; // 8014A40C
  goto L_8014A450; // 8014A410
L_8014A414:;
  W8(c->r[6]+0x00000002u,c->r[3]); // 8014A414
  c->r[3]=R8(c->r[5]+0x00000003u); // 8014A418
  cmps(c,0,(int32_t)c->r[3],10); // 8014A41C
  if (!crb(c,2)) { goto L_8014A42C; } // 8014A420
  c->r[4]=c->r[4]+0x00000003u; // 8014A424
  goto L_8014A450; // 8014A428
L_8014A42C:;
  W8(c->r[6]+0x00000003u,c->r[3]); // 8014A42C
  {uint32_t ea=c->r[5]+0x00000004u; c->r[3]=R8(ea); c->r[5]=ea;} // 8014A430
  cmps(c,0,(int32_t)c->r[3],10); // 8014A434
  if (!crb(c,2)) { goto L_8014A444; } // 8014A438
  c->r[4]=c->r[4]+0x00000004u; // 8014A43C
  goto L_8014A450; // 8014A440
L_8014A444:;
  c->r[6]=c->r[6]+0x00000004u; // 8014A444
  c->r[4]=c->r[4]+0x00000004u; // 8014A448
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014A3E0; } // 8014A44C
L_8014A450:;
  W8(c->r[23]+c->r[4],c->r[22]); // 8014A450
L_8014A454:;
  c->r[12]=R32(c->r[25]+0x00000000u); // 8014A454
  c->r[3]=c->r[25]|c->r[25]; // 8014A458
  c->r[5]=c->r[26]|c->r[26]; // 8014A45C
  c->r[6]=c->r[27]|c->r[27]; // 8014A460
  c->r[12]=R32(c->r[12]+0x000000A4u); // 8014A464
  c->r[7]=c->r[28]|c->r[28]; // 8014A468
  c->r[8]=c->r[29]|c->r[29]; // 8014A46C
  c->r[4]=c->r[1]+0x00000188u; // 8014A470
  c->ctr=c->r[12]; // 8014A474
  if (true) { c->lr=0x8014A47Cu; dispatch(c,c->ctr); } // 8014A478
  c->r[28]=c->r[3]|c->r[3]; // 8014A47C
  c->r[30]=c->r[30]+0x00000001u; // 8014A480
L_8014A484:;
  cmpu(c,0,c->r[30],c->r[31]); // 8014A484
  if (crb(c,0)) { IRQCHK(c); goto L_8014A388; } // 8014A488
L_8014A48C:;
  c->r[3]=c->r[28]|c->r[28]; // 8014A48C
L_8014A490:;
  c->r[11]=c->r[1]+0x000003A0u; // 8014A490
  {uint32_t ea=c->r[1]+0x000003D8u; psq_load(c,31,ea,0,0);} // 8014A494
  {uint32_t ea=c->r[1]+0x000003D0u; c->f[31]=RF64(ea);} // 8014A498
  {uint32_t ea=c->r[1]+0x000003C8u; psq_load(c,30,ea,0,0);} // 8014A49C
  {uint32_t ea=c->r[1]+0x000003C0u; c->f[30]=RF64(ea);} // 8014A4A0
  {uint32_t ea=c->r[1]+0x000003B8u; psq_load(c,29,ea,0,0);} // 8014A4A4
  {uint32_t ea=c->r[1]+0x000003B0u; c->f[29]=RF64(ea);} // 8014A4A8
  {uint32_t ea=c->r[1]+0x000003A8u; psq_load(c,28,ea,0,0);} // 8014A4AC
  {uint32_t ea=c->r[1]+0x000003A0u; c->f[28]=RF64(ea);} // 8014A4B0
  c->lr=0x8014A4B8u; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8014A4B4
  c->r[0]=R32(c->r[1]+0x000003E4u); // 8014A4B8
  c->lr=c->r[0]; // 8014A4BC
  c->r[1]=c->r[1]+0x000003E0u; // 8014A4C0
  return; // 8014A4C4
}

// __ct__15CriAuTblSynItemFv
void f_8014A4C8(Ctx* __restrict c) {
  trace_call(0x8014A4C8u);
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014A4C8
  c->r[0]=0u+0x00000000u; // 8014A4CC
  W32(c->r[3]+0x00000000u,c->r[0]); // 8014A4D0
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 8014A4D4
  W32(c->r[3]+0x00000010u,c->r[0]); // 8014A4D8
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[0]);} // 8014A4DC
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[0]);} // 8014A4E0
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[0]);} // 8014A4E4
  {uint32_t ea=c->r[3]+0x0000009Cu; WF32(ea,c->f[0]);} // 8014A4E8
  {uint32_t ea=c->r[3]+0x000000A0u; WF32(ea,c->f[0]);} // 8014A4EC
  {uint32_t ea=c->r[3]+0x000000A4u; WF32(ea,c->f[0]);} // 8014A4F0
  {uint32_t ea=c->r[3]+0x000000A8u; WF32(ea,c->f[0]);} // 8014A4F4
  {uint32_t ea=c->r[3]+0x000000ACu; WF32(ea,c->f[0]);} // 8014A4F8
  {uint32_t ea=c->r[3]+0x000000B0u; WF32(ea,c->f[0]);} // 8014A4FC
  {uint32_t ea=c->r[3]+0x000000B4u; WF32(ea,c->f[0]);} // 8014A500
  {uint32_t ea=c->r[3]+0x000000B8u; WF32(ea,c->f[0]);} // 8014A504
  {uint32_t ea=c->r[3]+0x000000BCu; WF32(ea,c->f[0]);} // 8014A508
  {uint32_t ea=c->r[3]+0x000000C0u; WF32(ea,c->f[0]);} // 8014A50C
  {uint32_t ea=c->r[3]+0x000000C4u; WF32(ea,c->f[0]);} // 8014A510
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 8014A514
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 8014A518
  W32(c->r[3]+0x000000D0u,c->r[0]); // 8014A51C
  W32(c->r[3]+0x000000D4u,c->r[0]); // 8014A520
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 8014A524
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 8014A528
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 8014A52C
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 8014A530
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 8014A534
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 8014A538
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 8014A53C
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 8014A540
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[0]);} // 8014A544
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 8014A548
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 8014A54C
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 8014A550
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[0]);} // 8014A554
  {uint32_t ea=c->r[3]+0x0000010Cu; WF32(ea,c->f[0]);} // 8014A558
  {uint32_t ea=c->r[3]+0x00000110u; WF32(ea,c->f[0]);} // 8014A55C
  {uint32_t ea=c->r[3]+0x00000114u; WF32(ea,c->f[0]);} // 8014A560
  W32(c->r[3]+0x00000118u,c->r[0]); // 8014A564
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 8014A568
  W32(c->r[3]+0x00000120u,c->r[0]); // 8014A56C
  W32(c->r[3]+0x00000124u,c->r[0]); // 8014A570
  W32(c->r[3]+0x00000128u,c->r[0]); // 8014A574
  W32(c->r[3]+0x0000012Cu,c->r[0]); // 8014A578
  W32(c->r[3]+0x00000130u,c->r[0]); // 8014A57C
  W32(c->r[3]+0x00000134u,c->r[0]); // 8014A580
  W32(c->r[3]+0x00000138u,c->r[0]); // 8014A584
  return; // 8014A588
}

// GetSynthName__11CriAuTblSynFPcUlPc
void f_8014A58C(Ctx* __restrict c) {
  trace_call(0x8014A58Cu);
  c->r[7]=0u+0x00000000u; // 8014A58C
  goto L_8014A5B0; // 8014A590
L_8014A594:;
  cmpu(c,0,c->r[7],c->r[4]); // 8014A594
  if (crb(c,2)) { goto L_8014A5BC; } // 8014A598
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; // 8014A59C
  cmps(c,0,(int32_t)c->r[0],10); // 8014A5A0
  if (!crb(c,2)) { goto L_8014A5AC; } // 8014A5A4
  c->r[7]=c->r[7]+0x00000001u; // 8014A5A8
L_8014A5AC:;
  c->r[3]=c->r[3]+0x00000001u; // 8014A5AC
L_8014A5B0:;
  c->r[6]=R8(c->r[3]+0x00000000u); // 8014A5B0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 8014A5B4
  if (!crb(c,2)) { IRQCHK(c); goto L_8014A594; } // 8014A5B8
L_8014A5BC:;
  cmpu(c,0,c->r[7],c->r[4]); // 8014A5BC
  if (crb(c,0)) { goto L_8014A5CC; } // 8014A5C0
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[6]; cr0(c,c->r[0]); // 8014A5C4
  if (!crb(c,2)) { goto L_8014A5DC; } // 8014A5C8
L_8014A5CC:;
  c->r[0]=0u+0x00000000u; // 8014A5CC
  W8(c->r[5]+0x00000000u,c->r[0]); // 8014A5D0
  c->r[3]=0u+0x00000000u; // 8014A5D4
  return; // 8014A5D8
L_8014A5DC:;
  c->r[0]=0u+0x00000010u; // 8014A5DC
  c->r[4]=c->r[5]|c->r[5]; // 8014A5E0
  c->r[7]=0u+0x00000000u; // 8014A5E4
  c->ctr=c->r[0]; // 8014A5E8
L_8014A5EC:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8014A5EC
  W8(c->r[4]+0x00000000u,c->r[0]); // 8014A5F0
  c->r[6]=R8(c->r[3]+0x00000001u); // 8014A5F4
  cmps(c,0,(int32_t)c->r[6],10); // 8014A5F8
  if (!crb(c,2)) { goto L_8014A608; } // 8014A5FC
  c->r[7]=c->r[7]+0x00000001u; // 8014A600
  goto L_8014A6BC; // 8014A604
L_8014A608:;
  W8(c->r[4]+0x00000001u,c->r[6]); // 8014A608
  c->r[6]=R8(c->r[3]+0x00000002u); // 8014A60C
  cmps(c,0,(int32_t)c->r[6],10); // 8014A610
  if (!crb(c,2)) { goto L_8014A620; } // 8014A614
  c->r[7]=c->r[7]+0x00000002u; // 8014A618
  goto L_8014A6BC; // 8014A61C
L_8014A620:;
  W8(c->r[4]+0x00000002u,c->r[6]); // 8014A620
  c->r[6]=R8(c->r[3]+0x00000003u); // 8014A624
  cmps(c,0,(int32_t)c->r[6],10); // 8014A628
  if (!crb(c,2)) { goto L_8014A638; } // 8014A62C
  c->r[7]=c->r[7]+0x00000003u; // 8014A630
  goto L_8014A6BC; // 8014A634
L_8014A638:;
  W8(c->r[4]+0x00000003u,c->r[6]); // 8014A638
  c->r[6]=R8(c->r[3]+0x00000004u); // 8014A63C
  cmps(c,0,(int32_t)c->r[6],10); // 8014A640
  if (!crb(c,2)) { goto L_8014A650; } // 8014A644
  c->r[7]=c->r[7]+0x00000004u; // 8014A648
  goto L_8014A6BC; // 8014A64C
L_8014A650:;
  W8(c->r[4]+0x00000004u,c->r[6]); // 8014A650
  c->r[6]=R8(c->r[3]+0x00000005u); // 8014A654
  cmps(c,0,(int32_t)c->r[6],10); // 8014A658
  if (!crb(c,2)) { goto L_8014A668; } // 8014A65C
  c->r[7]=c->r[7]+0x00000005u; // 8014A660
  goto L_8014A6BC; // 8014A664
L_8014A668:;
  W8(c->r[4]+0x00000005u,c->r[6]); // 8014A668
  c->r[6]=R8(c->r[3]+0x00000006u); // 8014A66C
  cmps(c,0,(int32_t)c->r[6],10); // 8014A670
  if (!crb(c,2)) { goto L_8014A680; } // 8014A674
  c->r[7]=c->r[7]+0x00000006u; // 8014A678
  goto L_8014A6BC; // 8014A67C
L_8014A680:;
  W8(c->r[4]+0x00000006u,c->r[6]); // 8014A680
  c->r[6]=R8(c->r[3]+0x00000007u); // 8014A684
  cmps(c,0,(int32_t)c->r[6],10); // 8014A688
  if (!crb(c,2)) { goto L_8014A698; } // 8014A68C
  c->r[7]=c->r[7]+0x00000007u; // 8014A690
  goto L_8014A6BC; // 8014A694
L_8014A698:;
  W8(c->r[4]+0x00000007u,c->r[6]); // 8014A698
  {uint32_t ea=c->r[3]+0x00000008u; c->r[6]=R8(ea); c->r[3]=ea;} // 8014A69C
  cmps(c,0,(int32_t)c->r[6],10); // 8014A6A0
  if (!crb(c,2)) { goto L_8014A6B0; } // 8014A6A4
  c->r[7]=c->r[7]+0x00000008u; // 8014A6A8
  goto L_8014A6BC; // 8014A6AC
L_8014A6B0:;
  c->r[7]=c->r[7]+0x00000008u; // 8014A6B0
  c->r[4]=c->r[4]+0x00000008u; // 8014A6B4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8014A5EC; } // 8014A6B8
L_8014A6BC:;
  c->r[0]=0u+0x00000000u; // 8014A6BC
  W8(c->r[5]+c->r[7],c->r[0]); // 8014A6C0
  c->r[3]=0u+0x00000001u; // 8014A6C4
  return; // 8014A6C8
}

// GetLoopFlag__16CriAuCueSheetLocFPCcR8CriError
void f_8014A6CC(Ctx* __restrict c) {
  trace_call(0x8014A6CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A6CC
  c->r[0]=c->lr; // 8014A6D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014A6D4
  c->r[0]=0u+0x00000000u; // 8014A6D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014A6DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014A6E0
  c->r[30]=0u+0x00000000u; // 8014A6E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014A6E8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014A6EC
  c->r[28]=c->r[5]|c->r[5]; // 8014A6F0
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014A6F4
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8014A6F8
  cmps(c,0,(int32_t)c->r[29],0); // 8014A6FC
  if (!crb(c,2)) { goto L_8014A724; } // 8014A700
  c->r[6]=0u+0x802D0000u; // 8014A704
  c->r[5]=c->r[4]|c->r[4]; // 8014A708
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014A70C
  c->r[3]=0u+0x00000000u; // 8014A710
  c->r[4]=c->r[6]+0x0000038Fu; // 8014A714
  c->lr=0x8014A71Cu; f_801794C0(c); // 8014A718
  c->r[0]=0u+0x00000000u; // 8014A71C
  goto L_8014A7C0; // 8014A720
L_8014A724:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A724
  c->r[5]=c->r[4]|c->r[4]; // 8014A728
  c->r[4]=0u+0x00000000u; // 8014A72C
  c->lr=0x8014A734u; f_8017A8C0(c); // 8014A730
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014A734
  c->r[31]=c->r[3]|c->r[3]; // 8014A738
  cmpu(c,0,c->r[3],c->r[0]); // 8014A73C
  if (crb(c,0)) { goto L_8014A74C; } // 8014A740
  c->r[3]=0u+0x00000000u; // 8014A744
  goto L_8014A7B4; // 8014A748
L_8014A74C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A74C
  c->r[4]=c->r[31]|c->r[31]; // 8014A750
  c->r[5]=0u+0x00000000u; // 8014A754
  c->lr=0x8014A75Cu; f_8017B030(c); // 8014A758
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A75C
  c->r[4]=c->r[31]|c->r[31]; // 8014A760
  c->r[5]=0u+0x00000001u; // 8014A764
  c->lr=0x8014A76Cu; f_8017ADCC(c); // 8014A768
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A76C
  c->r[4]=c->r[31]|c->r[31]; // 8014A770
  c->r[5]=0u+0x00000002u; // 8014A774
  c->lr=0x8014A77Cu; f_8017B030(c); // 8014A778
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A77C
  c->lr=0x8014A784u; f_8017A6AC(c); // 8014A780
  cmpu(c,0,c->r[3],0x00000003u); // 8014A784
  if (!crb(c,1)) { goto L_8014A79C; } // 8014A788
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A78C
  c->r[4]=c->r[31]|c->r[31]; // 8014A790
  c->r[5]=0u+0x00000003u; // 8014A794
  c->lr=0x8014A79Cu; f_8017B030(c); // 8014A798
L_8014A79C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A79C
  c->r[4]=c->r[31]|c->r[31]; // 8014A7A0
  c->r[5]=0u+0x00000004u; // 8014A7A4
  c->lr=0x8014A7ACu; f_8017AB54(c); // 8014A7A8
  c->r[30]=c->r[3]|c->r[3]; // 8014A7AC
  c->r[3]=0u+0x00000001u; // 8014A7B0
L_8014A7B4:;
  c->r[0]=0u-c->r[3]; // 8014A7B4
  c->r[0]=c->r[0]|c->r[3]; // 8014A7B8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014A7BC
L_8014A7C0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014A7C0
  if (!crb(c,2)) { goto L_8014A7D8; } // 8014A7C4
  c->r[0]=0u+0xFFFFFFFFu; // 8014A7C8
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014A7CC
  c->r[3]=0u+0x00000000u; // 8014A7D0
  goto L_8014A7E4; // 8014A7D4
L_8014A7D8:;
  c->r[0]=0u+0x00000000u; // 8014A7D8
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014A7DC
  c->r[3]=rotl(c->r[30],0)&0x00000001u; // 8014A7E0
L_8014A7E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014A7E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014A7E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014A7EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014A7F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014A7F4
  c->lr=c->r[0]; // 8014A7F8
  c->r[1]=c->r[1]+0x00000020u; // 8014A7FC
  return; // 8014A800
}

// GetLoopFlagById__16CriAuCueSheetLocFUlR8CriError
void f_8014A804(Ctx* __restrict c) {
  trace_call(0x8014A804u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A804
  c->r[0]=c->lr; // 8014A808
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014A80C
  c->r[0]=0u+0x00000000u; // 8014A810
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014A814
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014A818
  c->r[30]=0u+0x00000000u; // 8014A81C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014A820
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014A824
  c->r[28]=c->r[5]|c->r[5]; // 8014A828
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014A82C
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8014A830
  cmps(c,0,(int32_t)c->r[29],0); // 8014A834
  if (!crb(c,2)) { goto L_8014A85C; } // 8014A838
  c->r[6]=0u+0x802D0000u; // 8014A83C
  c->r[5]=c->r[4]|c->r[4]; // 8014A840
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014A844
  c->r[3]=0u+0x00000000u; // 8014A848
  c->r[4]=c->r[6]+0x000003C2u; // 8014A84C
  c->lr=0x8014A854u; f_801794C0(c); // 8014A850
  c->r[0]=0u+0x00000000u; // 8014A854
  goto L_8014A8F8; // 8014A858
L_8014A85C:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A85C
  c->r[5]=c->r[4]|c->r[4]; // 8014A860
  c->r[4]=0u+0x00000001u; // 8014A864
  c->lr=0x8014A86Cu; f_8017AAA8(c); // 8014A868
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014A86C
  c->r[31]=c->r[3]|c->r[3]; // 8014A870
  cmpu(c,0,c->r[3],c->r[0]); // 8014A874
  if (crb(c,0)) { goto L_8014A884; } // 8014A878
  c->r[3]=0u+0x00000000u; // 8014A87C
  goto L_8014A8EC; // 8014A880
L_8014A884:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A884
  c->r[4]=c->r[31]|c->r[31]; // 8014A888
  c->r[5]=0u+0x00000000u; // 8014A88C
  c->lr=0x8014A894u; f_8017B030(c); // 8014A890
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A894
  c->r[4]=c->r[31]|c->r[31]; // 8014A898
  c->r[5]=0u+0x00000001u; // 8014A89C
  c->lr=0x8014A8A4u; f_8017ADCC(c); // 8014A8A0
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A8A4
  c->r[4]=c->r[31]|c->r[31]; // 8014A8A8
  c->r[5]=0u+0x00000002u; // 8014A8AC
  c->lr=0x8014A8B4u; f_8017B030(c); // 8014A8B0
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A8B4
  c->lr=0x8014A8BCu; f_8017A6AC(c); // 8014A8B8
  cmpu(c,0,c->r[3],0x00000003u); // 8014A8BC
  if (!crb(c,1)) { goto L_8014A8D4; } // 8014A8C0
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A8C4
  c->r[4]=c->r[31]|c->r[31]; // 8014A8C8
  c->r[5]=0u+0x00000003u; // 8014A8CC
  c->lr=0x8014A8D4u; f_8017B030(c); // 8014A8D0
L_8014A8D4:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014A8D4
  c->r[4]=c->r[31]|c->r[31]; // 8014A8D8
  c->r[5]=0u+0x00000004u; // 8014A8DC
  c->lr=0x8014A8E4u; f_8017AB54(c); // 8014A8E0
  c->r[30]=c->r[3]|c->r[3]; // 8014A8E4
  c->r[3]=0u+0x00000001u; // 8014A8E8
L_8014A8EC:;
  c->r[0]=0u-c->r[3]; // 8014A8EC
  c->r[0]=c->r[0]|c->r[3]; // 8014A8F0
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014A8F4
L_8014A8F8:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014A8F8
  if (!crb(c,2)) { goto L_8014A910; } // 8014A8FC
  c->r[0]=0u+0xFFFFFFFFu; // 8014A900
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014A904
  c->r[3]=0u+0x00000000u; // 8014A908
  goto L_8014A91C; // 8014A90C
L_8014A910:;
  c->r[0]=0u+0x00000000u; // 8014A910
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014A914
  c->r[3]=rotl(c->r[30],0)&0x00000001u; // 8014A918
L_8014A91C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014A91C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014A920
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014A924
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014A928
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014A92C
  c->lr=c->r[0]; // 8014A930
  c->r[1]=c->r[1]+0x00000020u; // 8014A934
  return; // 8014A938
}

// GetMaxNumberOfVoices__16CriAuCueSheetLocFPCcR8CriError
void f_8014A93C(Ctx* __restrict c) {
  trace_call(0x8014A93Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A93C
  c->r[0]=c->lr; // 8014A940
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014A944
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014A948
  c->r[31]=0u+0x00000000u; // 8014A94C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014A950
  c->r[30]=c->r[5]|c->r[5]; // 8014A954
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014A958
  c->r[29]=c->r[3]|c->r[3]; // 8014A95C
  W32(c->r[5]+0x00000000u,c->r[31]); // 8014A960
  c->r[12]=R32(c->r[3]+0x00000000u); // 8014A964
  c->r[12]=R32(c->r[12]+0x00000080u); // 8014A968
  c->ctr=c->r[12]; // 8014A96C
  if (true) { c->lr=0x8014A974u; dispatch(c,c->ctr); } // 8014A970
  c->r[0]=R32(c->r[30]+0x00000000u); // 8014A974
  c->r[4]=c->r[3]|c->r[3]; // 8014A978
  cmps(c,0,(int32_t)c->r[0],0); // 8014A97C
  if (crb(c,2)) { goto L_8014A988; } // 8014A980
  goto L_8014A998; // 8014A984
L_8014A988:;
  c->r[3]=c->r[29]|c->r[29]; // 8014A988
  c->r[5]=c->r[30]|c->r[30]; // 8014A98C
  c->lr=0x8014A994u; f_8015235C(c); // 8014A990
  c->r[31]=c->r[3]|c->r[3]; // 8014A994
L_8014A998:;
  c->r[3]=c->r[31]|c->r[31]; // 8014A998
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014A99C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014A9A0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014A9A4
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014A9A8
  c->lr=c->r[0]; // 8014A9AC
  c->r[1]=c->r[1]+0x00000020u; // 8014A9B0
  return; // 8014A9B4
}

// SetStreamingFileSystemManager__16CriAuCueSheetLocFP12CriFsManagerPCcR8CriError
void f_8014A9B8(Ctx* __restrict c) {
  trace_call(0x8014A9B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014A9B8
  c->r[0]=c->lr; // 8014A9BC
  cmps(c,0,(int32_t)c->r[5],0); // 8014A9C0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014A9C4
  c->r[0]=0u+0x00000000u; // 8014A9C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014A9CC
  c->r[31]=c->r[5]|c->r[5]; // 8014A9D0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014A9D4
  c->r[30]=c->r[6]|c->r[6]; // 8014A9D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014A9DC
  c->r[29]=c->r[4]|c->r[4]; // 8014A9E0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014A9E4
  c->r[28]=c->r[3]|c->r[3]; // 8014A9E8
  W32(c->r[6]+0x00000000u,c->r[0]); // 8014A9EC
  if (!crb(c,2)) { goto L_8014AA00; } // 8014A9F0
  c->r[3]=0u+0x802D0000u; // 8014A9F4
  c->r[3]=c->r[3]+0xFFFFDD30u; // 8014A9F8
  c->r[31]=c->r[3]+0x00000428u; // 8014A9FC
L_8014AA00:;
  c->r[3]=c->r[31]|c->r[31]; // 8014AA00
  c->lr=0x8014AA08u; f_800ACEA0(c); // 8014AA04
  cmps(c,0,(int32_t)c->r[3],255); // 8014AA08
  if (!crb(c,1)) { goto L_8014AA30; } // 8014AA0C
  c->r[3]=0u+0x802D0000u; // 8014AA10
  c->r[0]=0u+0xFFFFFFFFu; // 8014AA14
  c->r[3]=c->r[3]+0xFFFFDD30u; // 8014AA18
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014AA1C
  c->r[4]=c->r[3]+0x00000429u; // 8014AA20
  c->r[3]=0u+0x00000000u; // 8014AA24
  c->lr=0x8014AA2Cu; f_80179434(c); // 8014AA28
  goto L_8014AA4C; // 8014AA2C
L_8014AA30:;
  c->r[5]=c->r[31]|c->r[31]; // 8014AA30
  c->r[3]=c->r[28]+0x00000044u; // 8014AA34
  c->r[4]=0u+0x00000100u; // 8014AA38
  c->r[6]=0u+0x000000FFu; // 8014AA3C
  c->lr=0x8014AA44u; f_801792F0(c); // 8014AA40
  c->r[0]=0u+0x00000000u; // 8014AA44
  W8(c->r[28]+0x00000143u,c->r[0]); // 8014AA48
L_8014AA4C:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8014AA4C
  cmps(c,0,(int32_t)c->r[0],0); // 8014AA50
  if (!crb(c,2)) { goto L_8014AA78; } // 8014AA54
  W32(c->r[28]+0x0000003Cu,c->r[29]); // 8014AA58
  c->r[3]=c->r[29]|c->r[29]; // 8014AA5C
  c->r[4]=c->r[13]+0xFFFFA338u; // 8014AA60
  c->r[12]=R32(c->r[29]+0x00000000u); // 8014AA64
  c->r[12]=R32(c->r[12]+0x00000010u); // 8014AA68
  c->ctr=c->r[12]; // 8014AA6C
  if (true) { c->lr=0x8014AA74u; dispatch(c,c->ctr); } // 8014AA70
  W32(c->r[28]+0x00000040u,c->r[3]); // 8014AA74
L_8014AA78:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014AA78
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014AA7C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014AA80
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014AA84
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014AA88
  c->lr=c->r[0]; // 8014AA8C
  c->r[1]=c->r[1]+0x00000020u; // 8014AA90
  return; // 8014AA94
}

// GetStreamingFileSystemManager__16CriAuCueSheetLocFPPCcR8CriError
void f_8014AA98(Ctx* __restrict c) {
  trace_call(0x8014AA98u);
  c->r[0]=0u+0x00000000u; // 8014AA98
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014AA9C
  c->r[0]=c->r[3]+0x00000044u; // 8014AAA0
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014AAA4
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 8014AAA8
  return; // 8014AAAC
}

// SetStreamingBinder__16CriAuCueSheetLocFP17_CriFsBinderHnObjPCcR8CriError
void f_8014AAB0(Ctx* __restrict c) {
  trace_call(0x8014AAB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AAB0
  c->r[0]=c->lr; // 8014AAB4
  cmps(c,0,(int32_t)c->r[5],0); // 8014AAB8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014AABC
  c->r[0]=0u+0x00000000u; // 8014AAC0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014AAC4
  c->r[31]=c->r[5]|c->r[5]; // 8014AAC8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014AACC
  c->r[30]=c->r[6]|c->r[6]; // 8014AAD0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014AAD4
  c->r[29]=c->r[4]|c->r[4]; // 8014AAD8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014AADC
  c->r[28]=c->r[3]|c->r[3]; // 8014AAE0
  W32(c->r[6]+0x00000000u,c->r[0]); // 8014AAE4
  if (!crb(c,2)) { goto L_8014AAF8; } // 8014AAE8
  c->r[3]=0u+0x802D0000u; // 8014AAEC
  c->r[3]=c->r[3]+0xFFFFDD30u; // 8014AAF0
  c->r[31]=c->r[3]+0x00000428u; // 8014AAF4
L_8014AAF8:;
  c->r[3]=c->r[31]|c->r[31]; // 8014AAF8
  c->lr=0x8014AB00u; f_800ACEA0(c); // 8014AAFC
  cmps(c,0,(int32_t)c->r[3],255); // 8014AB00
  if (!crb(c,1)) { goto L_8014AB28; } // 8014AB04
  c->r[3]=0u+0x802D0000u; // 8014AB08
  c->r[0]=0u+0xFFFFFFFFu; // 8014AB0C
  c->r[3]=c->r[3]+0xFFFFDD30u; // 8014AB10
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014AB14
  c->r[4]=c->r[3]+0x00000429u; // 8014AB18
  c->r[3]=0u+0x00000000u; // 8014AB1C
  c->lr=0x8014AB24u; f_80179434(c); // 8014AB20
  goto L_8014AB44; // 8014AB24
L_8014AB28:;
  c->r[5]=c->r[31]|c->r[31]; // 8014AB28
  c->r[3]=c->r[28]+0x00000044u; // 8014AB2C
  c->r[4]=0u+0x00000100u; // 8014AB30
  c->r[6]=0u+0x000000FFu; // 8014AB34
  c->lr=0x8014AB3Cu; f_801792F0(c); // 8014AB38
  c->r[0]=0u+0x00000000u; // 8014AB3C
  W8(c->r[28]+0x00000143u,c->r[0]); // 8014AB40
L_8014AB44:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 8014AB44
  cmps(c,0,(int32_t)c->r[0],0); // 8014AB48
  if (!crb(c,2)) { goto L_8014AB54; } // 8014AB4C
  W32(c->r[28]+0x00000040u,c->r[29]); // 8014AB50
L_8014AB54:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014AB54
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014AB58
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014AB5C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014AB60
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014AB64
  c->lr=c->r[0]; // 8014AB68
  c->r[1]=c->r[1]+0x00000020u; // 8014AB6C
  return; // 8014AB70
}

// GetStreamingBinder__16CriAuCueSheetLocFPPCcR8CriError
void f_8014AB74(Ctx* __restrict c) {
  trace_call(0x8014AB74u);
  c->r[0]=0u+0x00000000u; // 8014AB74
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014AB78
  c->r[0]=c->r[3]+0x00000044u; // 8014AB7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 8014AB80
  c->r[3]=R32(c->r[3]+0x00000040u); // 8014AB84
  return; // 8014AB88
}

// GetSoundElementItem__16CriAuCueSheetLocFPCcR15CriAuTblSdlItem
void f_8014AB8C(Ctx* __restrict c) {
  trace_call(0x8014AB8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014AB8C
  c->r[0]=c->lr; // 8014AB90
  W32(c->r[1]+0x00000034u,c->r[0]); // 8014AB94
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8014AB98
  W32(c->r[1]+0x00000028u,c->r[30]); // 8014AB9C
  W32(c->r[1]+0x00000024u,c->r[29]); // 8014ABA0
  c->r[29]=c->r[5]|c->r[5]; // 8014ABA4
  c->r[30]=R32(c->r[3]+0x00000024u); // 8014ABA8
  cmps(c,0,(int32_t)c->r[30],0); // 8014ABAC
  if (!crb(c,2)) { goto L_8014ABD4; } // 8014ABB0
  c->r[6]=0u+0x802D0000u; // 8014ABB4
  c->r[5]=c->r[4]|c->r[4]; // 8014ABB8
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014ABBC
  c->r[3]=0u+0x00000000u; // 8014ABC0
  c->r[4]=c->r[6]+0x00000452u; // 8014ABC4
  c->lr=0x8014ABCCu; f_801794C0(c); // 8014ABC8
  c->r[3]=0u+0x00000000u; // 8014ABCC
  goto L_8014ACD0; // 8014ABD0
L_8014ABD4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ABD4
  c->r[5]=c->r[4]|c->r[4]; // 8014ABD8
  c->r[4]=0u+0x00000000u; // 8014ABDC
  c->lr=0x8014ABE4u; f_8017A8C0(c); // 8014ABE0
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014ABE4
  c->r[31]=c->r[3]|c->r[3]; // 8014ABE8
  cmpu(c,0,c->r[3],c->r[0]); // 8014ABEC
  if (crb(c,0)) { goto L_8014ABFC; } // 8014ABF0
  c->r[0]=0u+0x00000000u; // 8014ABF4
  goto L_8014ACBC; // 8014ABF8
L_8014ABFC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ABFC
  c->r[4]=c->r[31]|c->r[31]; // 8014AC00
  c->r[5]=0u+0x00000000u; // 8014AC04
  c->lr=0x8014AC0Cu; f_8017B030(c); // 8014AC08
  W32(c->r[29]+0x00000000u,c->r[3]); // 8014AC0C
  c->r[4]=c->r[31]|c->r[31]; // 8014AC10
  c->r[6]=c->r[1]+0x00000008u; // 8014AC14
  c->r[5]=0u+0x00000001u; // 8014AC18
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC1C
  c->lr=0x8014AC24u; f_8017A738(c); // 8014AC20
  c->r[0]=R32(c->r[1]+0x00000010u); // 8014AC24
  c->r[4]=c->r[31]|c->r[31]; // 8014AC28
  W32(c->r[29]+0x00000004u,c->r[0]); // 8014AC2C
  c->r[5]=0u+0x00000002u; // 8014AC30
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014AC34
  W32(c->r[29]+0x00000008u,c->r[0]); // 8014AC38
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC3C
  c->lr=0x8014AC44u; f_8017AB54(c); // 8014AC40
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014AC44
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8014AC48
  c->r[4]=c->r[31]|c->r[31]; // 8014AC4C
  c->r[5]=0u+0x00000003u; // 8014AC50
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC54
  c->lr=0x8014AC5Cu; f_8017AB54(c); // 8014AC58
  W8(c->r[29]+0x00000014u,c->r[3]); // 8014AC5C
  c->r[4]=c->r[31]|c->r[31]; // 8014AC60
  c->r[5]=0u+0x00000004u; // 8014AC64
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC68
  c->lr=0x8014AC70u; f_8017AB54(c); // 8014AC6C
  W8(c->r[29]+0x00000015u,c->r[3]); // 8014AC70
  c->r[4]=c->r[31]|c->r[31]; // 8014AC74
  c->r[5]=0u+0x00000005u; // 8014AC78
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC7C
  c->lr=0x8014AC84u; f_8017ADCC(c); // 8014AC80
  W32(c->r[29]+0x00000010u,c->r[3]); // 8014AC84
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC88
  c->lr=0x8014AC90u; f_8017A6AC(c); // 8014AC8C
  cmpu(c,0,c->r[3],0x00000006u); // 8014AC90
  if (!crb(c,1)) { goto L_8014ACB0; } // 8014AC94
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AC98
  c->r[4]=c->r[31]|c->r[31]; // 8014AC9C
  c->r[5]=0u+0x00000006u; // 8014ACA0
  c->lr=0x8014ACA8u; f_8017ADCC(c); // 8014ACA4
  W32(c->r[29]+0x00000018u,c->r[3]); // 8014ACA8
  goto L_8014ACB8; // 8014ACAC
L_8014ACB0:;
  c->r[0]=0u+0x00000000u; // 8014ACB0
  W32(c->r[29]+0x00000018u,c->r[0]); // 8014ACB4
L_8014ACB8:;
  c->r[0]=0u+0x00000001u; // 8014ACB8
L_8014ACBC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014ACBC
  if (!crb(c,2)) { goto L_8014ACCC; } // 8014ACC0
  c->r[3]=0u+0x00000000u; // 8014ACC4
  goto L_8014ACD0; // 8014ACC8
L_8014ACCC:;
  c->r[3]=0u+0x00000001u; // 8014ACCC
L_8014ACD0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8014ACD0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8014ACD4
  c->r[30]=R32(c->r[1]+0x00000028u); // 8014ACD8
  c->r[29]=R32(c->r[1]+0x00000024u); // 8014ACDC
  c->lr=c->r[0]; // 8014ACE0
  c->r[1]=c->r[1]+0x00000030u; // 8014ACE4
  return; // 8014ACE8
}

// GetSynthItem__16CriAuCueSheetLocFPCcR15CriAuTblSynItem
void f_8014ACEC(Ctx* __restrict c) {
  trace_call(0x8014ACECu);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014ACEC
  c->r[0]=c->lr; // 8014ACF0
  W32(c->r[1]+0x00000074u,c->r[0]); // 8014ACF4
  c->r[11]=c->r[1]+0x00000030u; // 8014ACF8
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8014ACFC
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8014AD00
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8014AD04
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8014AD08
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 8014AD0C
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 8014AD10
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 8014AD14
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 8014AD18
  c->lr=0x8014AD20u; f_800ADA2C(c); // 8014AD1C
  c->r[30]=R32(c->r[3]+0x00000020u); // 8014AD20
  c->r[0]=0u+0x43300000u; // 8014AD24
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014AD28
  c->r[29]=c->r[5]|c->r[5]; // 8014AD2C
  cmps(c,0,(int32_t)c->r[30],0); // 8014AD30
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014AD34
  if (!crb(c,2)) { goto L_8014AD5C; } // 8014AD38
  c->r[6]=0u+0x802D0000u; // 8014AD3C
  c->r[5]=c->r[4]|c->r[4]; // 8014AD40
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014AD44
  c->r[3]=0u+0x00000000u; // 8014AD48
  c->r[4]=c->r[6]+0x000003F3u; // 8014AD4C
  c->lr=0x8014AD54u; f_801794C0(c); // 8014AD50
  c->r[3]=0u+0x00000000u; // 8014AD54
  goto L_8014B95C; // 8014AD58
L_8014AD5C:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AD5C
  c->r[5]=c->r[4]|c->r[4]; // 8014AD60
  c->r[4]=0u+0x00000000u; // 8014AD64
  c->lr=0x8014AD6Cu; f_8017A8C0(c); // 8014AD68
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014AD6C
  c->r[31]=c->r[3]|c->r[3]; // 8014AD70
  cmpu(c,0,c->r[3],c->r[0]); // 8014AD74
  if (crb(c,0)) { goto L_8014AD84; } // 8014AD78
  c->r[0]=0u+0x00000000u; // 8014AD7C
  goto L_8014B948; // 8014AD80
L_8014AD84:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AD84
  c->r[4]=c->r[31]|c->r[31]; // 8014AD88
  c->r[5]=0u+0x00000000u; // 8014AD8C
  c->lr=0x8014AD94u; f_8017B030(c); // 8014AD90
  W32(c->r[29]+0x00000000u,c->r[3]); // 8014AD94
  c->r[4]=c->r[31]|c->r[31]; // 8014AD98
  c->r[5]=0u+0x00000001u; // 8014AD9C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ADA0
  c->lr=0x8014ADA8u; f_8017AB54(c); // 8014ADA4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014ADA8
  W32(c->r[29]+0x00000004u,c->r[0]); // 8014ADAC
  c->r[4]=c->r[31]|c->r[31]; // 8014ADB0
  c->r[5]=0u+0x00000002u; // 8014ADB4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ADB8
  c->lr=0x8014ADC0u; f_8017AB54(c); // 8014ADBC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014ADC0
  W32(c->r[29]+0x00000008u,c->r[0]); // 8014ADC4
  c->r[4]=c->r[31]|c->r[31]; // 8014ADC8
  c->r[5]=0u+0x00000003u; // 8014ADCC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ADD0
  c->lr=0x8014ADD8u; f_8017B030(c); // 8014ADD4
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8014ADD8
  c->r[4]=c->r[31]|c->r[31]; // 8014ADDC
  c->r[5]=0u+0x00000004u; // 8014ADE0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ADE4
  c->lr=0x8014ADECu; f_8017B030(c); // 8014ADE8
  W32(c->r[29]+0x00000010u,c->r[3]); // 8014ADEC
  c->r[4]=c->r[31]|c->r[31]; // 8014ADF0
  c->r[5]=0u+0x00000005u; // 8014ADF4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014ADF8
  c->lr=0x8014AE00u; f_8017ADA8(c); // 8014ADFC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014AE00
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014AE04
  c->r[0]=c->r[0]^0x80000000u; // 8014AE08
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014AE0C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AE10
  c->r[4]=c->r[31]|c->r[31]; // 8014AE14
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014AE18
  c->r[5]=0u+0x00000006u; // 8014AE1C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014AE20
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014AE24
  {uint32_t ea=c->r[29]+0x00000014u; WF32(ea,c->f[0]);} // 8014AE28
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AE2C
  c->lr=0x8014AE34u; f_8017ADA8(c); // 8014AE30
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014AE34
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014AE38
  c->r[0]=c->r[0]^0x80000000u; // 8014AE3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AE40
  c->r[4]=c->r[31]|c->r[31]; // 8014AE44
  c->r[5]=0u+0x00000007u; // 8014AE48
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014AE4C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AE50
  {uint32_t ea=c->r[29]+0x00000018u; WF32(ea,c->f[0]);} // 8014AE54
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AE58
  c->lr=0x8014AE60u; f_8017ADCC(c); // 8014AE5C
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8014AE60
  c->r[4]=c->r[31]|c->r[31]; // 8014AE64
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014AE68
  c->r[5]=0u+0x00000009u; // 8014AE6C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014AE70
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AE74
  {uint32_t ea=c->r[29]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014AE78
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AE7C
  c->lr=0x8014AE84u; f_8017AC94(c); // 8014AE80
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AE84
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AE88
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014AE8C
  c->r[4]=c->r[31]|c->r[31]; // 8014AE90
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014AE94
  c->r[5]=0u+0x0000000Au; // 8014AE98
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AE9C
  {uint32_t ea=c->r[29]+0x00000020u; WF32(ea,c->f[0]);} // 8014AEA0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AEA4
  c->lr=0x8014AEACu; f_8017AC94(c); // 8014AEA8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AEAC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014AEB0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014AEB4
  c->r[4]=c->r[31]|c->r[31]; // 8014AEB8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014AEBC
  c->r[5]=0u+0x0000000Bu; // 8014AEC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AEC4
  {uint32_t ea=c->r[29]+0x00000024u; WF32(ea,c->f[0]);} // 8014AEC8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AECC
  c->lr=0x8014AED4u; f_8017AC94(c); // 8014AED0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AED4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AED8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014AEDC
  c->r[4]=c->r[31]|c->r[31]; // 8014AEE0
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014AEE4
  c->r[5]=0u+0x0000000Cu; // 8014AEE8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AEEC
  {uint32_t ea=c->r[29]+0x00000028u; WF32(ea,c->f[0]);} // 8014AEF0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AEF4
  c->lr=0x8014AEFCu; f_8017AC94(c); // 8014AEF8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AEFC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014AF00
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014AF04
  c->r[4]=c->r[31]|c->r[31]; // 8014AF08
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014AF0C
  c->r[5]=0u+0x0000000Du; // 8014AF10
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AF14
  {uint32_t ea=c->r[29]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014AF18
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AF1C
  c->lr=0x8014AF24u; f_8017AC94(c); // 8014AF20
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AF24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AF28
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014AF2C
  c->r[4]=c->r[31]|c->r[31]; // 8014AF30
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014AF34
  c->r[5]=0u+0x0000000Eu; // 8014AF38
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014AF3C
  {uint32_t ea=c->r[29]+0x00000030u; WF32(ea,c->f[0]);} // 8014AF40
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AF44
  c->lr=0x8014AF4Cu; f_8017AC94(c); // 8014AF48
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AF4C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014AF50
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014AF54
  c->r[4]=c->r[31]|c->r[31]; // 8014AF58
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014AF5C
  c->r[5]=0u+0x00000014u; // 8014AF60
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014AF64
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014AF68
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014AF6C
  {uint32_t ea=c->r[29]+0x00000034u; WF32(ea,c->f[0]);} // 8014AF70
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AF74
  c->lr=0x8014AF7Cu; f_8017B030(c); // 8014AF78
  W32(c->r[29]+0x000000D0u,c->r[3]); // 8014AF7C
  c->r[4]=c->r[31]|c->r[31]; // 8014AF80
  c->r[5]=0u+0x00000015u; // 8014AF84
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AF88
  c->lr=0x8014AF90u; f_8017B030(c); // 8014AF8C
  W32(c->r[29]+0x000000D4u,c->r[3]); // 8014AF90
  c->r[27]=c->r[29]|c->r[29]; // 8014AF94
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014AF98
  c->r[28]=0u+0x00000000u; // 8014AF9C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014AFA0
L_8014AFA4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AFA4
  c->r[4]=c->r[31]|c->r[31]; // 8014AFA8
  c->r[5]=c->r[28]+0x00000016u; // 8014AFAC
  c->lr=0x8014AFB4u; f_8017AC94(c); // 8014AFB0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014AFB4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014AFB8
  c->r[28]=c->r[28]+0x00000001u; // 8014AFBC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014AFC0
  cmpu(c,0,c->r[28],0x00000008u); // 8014AFC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014AFC8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014AFCC
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 8014AFD0
  c->r[27]=c->r[27]+0x00000004u; // 8014AFD4
  if (crb(c,0)) { IRQCHK(c); goto L_8014AFA4; } // 8014AFD8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014AFDC
  c->r[4]=c->r[31]|c->r[31]; // 8014AFE0
  c->r[5]=0u+0x0000001Eu; // 8014AFE4
  c->lr=0x8014AFECu; f_8017B030(c); // 8014AFE8
  W32(c->r[29]+0x00000118u,c->r[3]); // 8014AFEC
  c->r[27]=c->r[29]|c->r[29]; // 8014AFF0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014AFF4
  c->r[28]=0u+0x00000000u; // 8014AFF8
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014AFFC
L_8014B000:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B000
  c->r[4]=c->r[31]|c->r[31]; // 8014B004
  c->r[5]=c->r[28]+0x0000001Fu; // 8014B008
  c->lr=0x8014B010u; f_8017AC94(c); // 8014B00C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B010
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B014
  c->r[28]=c->r[28]+0x00000001u; // 8014B018
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014B01C
  cmpu(c,0,c->r[28],0x00000008u); // 8014B020
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014B024
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014B028
  {uint32_t ea=c->r[27]+0x000000D8u; WF32(ea,c->f[0]);} // 8014B02C
  c->r[27]=c->r[27]+0x00000004u; // 8014B030
  if (crb(c,0)) { IRQCHK(c); goto L_8014B000; } // 8014B034
  c->r[27]=c->r[29]|c->r[29]; // 8014B038
  c->r[28]=0u+0x00000000u; // 8014B03C
L_8014B040:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B040
  c->r[4]=c->r[31]|c->r[31]; // 8014B044
  c->r[5]=c->r[28]+0x00000027u; // 8014B048
  c->lr=0x8014B050u; f_8017B030(c); // 8014B04C
  c->r[28]=c->r[28]+0x00000001u; // 8014B050
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8014B054
  cmpu(c,0,c->r[28],0x00000008u); // 8014B058
  c->r[27]=c->r[27]+0x00000004u; // 8014B05C
  if (crb(c,0)) { IRQCHK(c); goto L_8014B040; } // 8014B060
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B064
  c->r[4]=c->r[31]|c->r[31]; // 8014B068
  c->r[5]=0u+0x0000002Fu; // 8014B06C
  c->lr=0x8014B074u; f_8017B030(c); // 8014B070
  W32(c->r[29]+0x0000007Cu,c->r[3]); // 8014B074
  c->r[4]=c->r[31]|c->r[31]; // 8014B078
  c->r[5]=0u+0x00000030u; // 8014B07C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B080
  c->lr=0x8014B088u; f_8017AB54(c); // 8014B084
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014B088
  W32(c->r[29]+0x00000078u,c->r[0]); // 8014B08C
  c->r[4]=c->r[31]|c->r[31]; // 8014B090
  c->r[5]=0u+0x00000031u; // 8014B094
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B098
  c->lr=0x8014B0A0u; f_8017AB54(c); // 8014B09C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014B0A0
  W32(c->r[29]+0x00000080u,c->r[0]); // 8014B0A4
  c->r[4]=c->r[31]|c->r[31]; // 8014B0A8
  c->r[5]=0u+0x00000032u; // 8014B0AC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B0B0
  c->lr=0x8014B0B8u; f_8017AC94(c); // 8014B0B4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B0B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B0BC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014B0C0
  c->r[4]=c->r[31]|c->r[31]; // 8014B0C4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014B0C8
  c->r[5]=0u+0x00000033u; // 8014B0CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014B0D0
  {uint32_t ea=c->r[29]+0x00000084u; WF32(ea,c->f[0]);} // 8014B0D4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B0D8
  c->lr=0x8014B0E0u; f_8017AC70(c); // 8014B0DC
  c->r[28]=0u+0x00000000u; // 8014B0E0
  W8(c->r[29]+0x00000088u,c->r[3]); // 8014B0E4
  W32(c->r[29]+0x0000008Cu,c->r[28]); // 8014B0E8
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B0EC
  c->lr=0x8014B0F4u; f_8017A6AC(c); // 8014B0F0
  cmpu(c,0,c->r[3],0x00000034u); // 8014B0F4
  if (crb(c,1)) { goto L_8014B368; } // 8014B0F8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B0FC
  c->r[3]=0u+0x00000002u; // 8014B100
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B104
  c->r[0]=0u+0x00000005u; // 8014B108
  {uint32_t ea=c->r[29]+0x000000B0u; WF32(ea,c->f[1]);} // 8014B10C
  c->r[4]=c->r[31]|c->r[31]; // 8014B110
  c->r[5]=0u+0x00000010u; // 8014B114
  {uint32_t ea=c->r[29]+0x000000B4u; WF32(ea,c->f[1]);} // 8014B118
  {uint32_t ea=c->r[29]+0x000000B8u; WF32(ea,c->f[1]);} // 8014B11C
  {uint32_t ea=c->r[29]+0x000000BCu; WF32(ea,c->f[1]);} // 8014B120
  {uint32_t ea=c->r[29]+0x000000C0u; WF32(ea,c->f[1]);} // 8014B124
  {uint32_t ea=c->r[29]+0x000000C4u; WF32(ea,c->f[1]);} // 8014B128
  {uint32_t ea=c->r[29]+0x000000C8u; WF32(ea,c->f[1]);} // 8014B12C
  {uint32_t ea=c->r[29]+0x000000CCu; WF32(ea,c->f[1]);} // 8014B130
  {uint32_t ea=c->r[29]+0x000000F8u; WF32(ea,c->f[1]);} // 8014B134
  {uint32_t ea=c->r[29]+0x000000FCu; WF32(ea,c->f[1]);} // 8014B138
  {uint32_t ea=c->r[29]+0x00000100u; WF32(ea,c->f[1]);} // 8014B13C
  {uint32_t ea=c->r[29]+0x00000104u; WF32(ea,c->f[1]);} // 8014B140
  {uint32_t ea=c->r[29]+0x00000108u; WF32(ea,c->f[1]);} // 8014B144
  {uint32_t ea=c->r[29]+0x0000010Cu; WF32(ea,c->f[1]);} // 8014B148
  {uint32_t ea=c->r[29]+0x00000110u; WF32(ea,c->f[1]);} // 8014B14C
  {uint32_t ea=c->r[29]+0x00000114u; WF32(ea,c->f[1]);} // 8014B150
  W32(c->r[29]+0x00000038u,c->r[28]); // 8014B154
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014B158
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[0]);} // 8014B15C
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[0]);} // 8014B160
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 8014B164
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014B168
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 8014B16C
  W8(c->r[29]+0x00000054u,c->r[3]); // 8014B170
  W32(c->r[29]+0x00000058u,c->r[0]); // 8014B174
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B178
  c->lr=0x8014B180u; f_8017AC94(c); // 8014B17C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B180
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B184
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014B188
  c->r[4]=c->r[31]|c->r[31]; // 8014B18C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014B190
  c->r[5]=0u+0x00000011u; // 8014B194
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B198
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8014B19C
  c->lr=0x8014B1A4u; f_8017AC94(c); // 8014B1A0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B1A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B1A8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014B1AC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014B1B0
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8014B1B4
  fcmp(c,0,c->f[29],c->f[31]); // 8014B1B8
  if (crb(c,2)) { goto L_8014B31C; } // 8014B1BC
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B1C0
  fcmp(c,0,c->f[29],c->f[0]); // 8014B1C4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B1C8
  if (!crb(c,2)) { goto L_8014B1D4; } // 8014B1CC
  goto L_8014B1D8; // 8014B1D0
L_8014B1D4:;
  c->f[29]=c->f[0]; // 8014B1D4
L_8014B1D8:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B1D8
  fcmp(c,0,c->f[29],c->f[0]); // 8014B1DC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B1E0
  if (!crb(c,2)) { goto L_8014B1EC; } // 8014B1E4
  goto L_8014B1F0; // 8014B1E8
L_8014B1EC:;
  c->f[29]=c->f[0]; // 8014B1EC
L_8014B1F0:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B1F0
  c->lr=0x8014B1F8u; f_800C02CC(c); // 8014B1F4
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B1F8
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8014B1FC
  c->f[1]=c->f[0]; // 8014B200
  c->lr=0x8014B208u; f_800C02CC(c); // 8014B204
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B208
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B20C
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B210
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 8014B214
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014B218
  c->lr=0x8014B220u; f_800C02CC(c); // 8014B21C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014B220
  c->f[1]=c->f[29]; // 8014B224
  c->lr=0x8014B22Cu; f_800C02CC(c); // 8014B228
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B22C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B230
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B234
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014B238
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014B23C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014B240
  fcmp(c,0,c->f[1],c->f[0]); // 8014B244
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B248
  if (!crb(c,2)) { goto L_8014B254; } // 8014B24C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B250
L_8014B254:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B254
  fcmp(c,0,c->f[1],c->f[0]); // 8014B258
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B25C
  if (!crb(c,2)) { goto L_8014B268; } // 8014B260
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B264
L_8014B268:;
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 8014B268
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B26C
  fcmp(c,0,c->f[31],c->f[0]); // 8014B270
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B274
  if (!crb(c,2)) { goto L_8014B280; } // 8014B278
  goto L_8014B284; // 8014B27C
L_8014B280:;
  c->f[31]=c->f[0]; // 8014B280
L_8014B284:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B284
  fcmp(c,0,c->f[31],c->f[0]); // 8014B288
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B28C
  if (!crb(c,2)) { goto L_8014B298; } // 8014B290
  goto L_8014B29C; // 8014B294
L_8014B298:;
  c->f[31]=c->f[0]; // 8014B298
L_8014B29C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B29C
  c->lr=0x8014B2A4u; f_800C02CC(c); // 8014B2A0
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B2A4
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014B2A8
  c->f[1]=c->f[0]; // 8014B2AC
  c->lr=0x8014B2B4u; f_800C02CC(c); // 8014B2B0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B2B4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B2B8
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B2BC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014B2C0
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014B2C4
  c->lr=0x8014B2CCu; f_800C02CC(c); // 8014B2C8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014B2CC
  c->f[1]=c->f[31]; // 8014B2D0
  c->lr=0x8014B2D8u; f_800C02CC(c); // 8014B2D4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B2D8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B2DC
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B2E0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014B2E4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014B2E8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014B2EC
  fcmp(c,0,c->f[1],c->f[0]); // 8014B2F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B2F4
  if (!crb(c,2)) { goto L_8014B300; } // 8014B2F8
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B2FC
L_8014B300:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B300
  fcmp(c,0,c->f[1],c->f[0]); // 8014B304
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B308
  if (!crb(c,2)) { goto L_8014B314; } // 8014B30C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B310
L_8014B314:;
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 8014B314
  goto L_8014B32C; // 8014B318
L_8014B31C:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B31C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B320
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 8014B324
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 8014B328
L_8014B32C:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B32C
  c->r[0]=0u+0x00000002u; // 8014B330
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B334
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[1]);} // 8014B338
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[1]);} // 8014B33C
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014B340
  {uint32_t ea=c->r[29]+0x00000070u; WF32(ea,c->f[1]);} // 8014B344
  W8(c->r[29]+0x00000074u,c->r[0]); // 8014B348
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[0]);} // 8014B34C
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[0]);} // 8014B350
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[0]);} // 8014B354
  {uint32_t ea=c->r[29]+0x00000148u; WF32(ea,c->f[0]);} // 8014B358
  {uint32_t ea=c->r[29]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014B35C
  {uint32_t ea=c->r[29]+0x00000150u; WF32(ea,c->f[0]);} // 8014B360
  goto L_8014B8DC; // 8014B364
L_8014B368:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014B368
  c->r[27]=c->r[29]|c->r[29]; // 8014B36C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014B370
  c->r[28]=0u+0x00000000u; // 8014B374
L_8014B378:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B378
  c->r[4]=c->r[31]|c->r[31]; // 8014B37C
  c->r[5]=c->r[28]+0x0000003Au; // 8014B380
  c->lr=0x8014B388u; f_8017AC94(c); // 8014B384
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B388
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B38C
  c->r[28]=c->r[28]+0x00000001u; // 8014B390
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014B394
  cmpu(c,0,c->r[28],0x00000008u); // 8014B398
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014B39C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014B3A0
  {uint32_t ea=c->r[27]+0x000000B0u; WF32(ea,c->f[0]);} // 8014B3A4
  c->r[27]=c->r[27]+0x00000004u; // 8014B3A8
  if (crb(c,0)) { IRQCHK(c); goto L_8014B378; } // 8014B3AC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 8014B3B0
  c->r[27]=c->r[29]|c->r[29]; // 8014B3B4
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014B3B8
  c->r[28]=0u+0x00000000u; // 8014B3BC
L_8014B3C0:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B3C0
  c->r[4]=c->r[31]|c->r[31]; // 8014B3C4
  c->r[5]=c->r[28]+0x00000042u; // 8014B3C8
  c->lr=0x8014B3D0u; f_8017AC94(c); // 8014B3CC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B3D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B3D4
  c->r[28]=c->r[28]+0x00000001u; // 8014B3D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014B3DC
  cmpu(c,0,c->r[28],0x00000008u); // 8014B3E0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8014B3E4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 8014B3E8
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 8014B3EC
  c->r[27]=c->r[27]+0x00000004u; // 8014B3F0
  if (crb(c,0)) { IRQCHK(c); goto L_8014B3C0; } // 8014B3F4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B3F8
  c->r[4]=c->r[31]|c->r[31]; // 8014B3FC
  c->r[5]=0u+0x0000004Au; // 8014B400
  c->lr=0x8014B408u; f_8017AB54(c); // 8014B404
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014B408
  W32(c->r[29]+0x00000038u,c->r[0]); // 8014B40C
  c->r[4]=c->r[31]|c->r[31]; // 8014B410
  c->r[5]=0u+0x0000004Bu; // 8014B414
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B418
  c->lr=0x8014B420u; f_8017AC94(c); // 8014B41C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B420
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B424
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B428
  c->r[4]=c->r[31]|c->r[31]; // 8014B42C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B430
  c->r[5]=0u+0x0000004Cu; // 8014B434
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B438
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B43C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B440
  {uint32_t ea=c->r[29]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014B444
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B448
  c->lr=0x8014B450u; f_8017AC94(c); // 8014B44C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B450
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B454
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B458
  c->r[4]=c->r[31]|c->r[31]; // 8014B45C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014B460
  c->r[5]=0u+0x0000004Du; // 8014B464
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8014B468
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B46C
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 8014B470
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014B474
  {uint32_t ea=c->r[29]+0x00000044u; WF32(ea,c->f[1]);} // 8014B478
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 8014B47C
  {uint32_t ea=c->r[29]+0x00000048u; WF32(ea,c->f[0]);} // 8014B480
  {uint32_t ea=c->r[29]+0x00000040u; WF32(ea,c->f[1]);} // 8014B484
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B488
  c->lr=0x8014B490u; f_8017AC94(c); // 8014B48C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B490
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B494
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B498
  c->r[4]=c->r[31]|c->r[31]; // 8014B49C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B4A0
  c->r[5]=0u+0x0000004Eu; // 8014B4A4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B4A8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B4AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B4B0
  {uint32_t ea=c->r[29]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014B4B4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B4B8
  c->lr=0x8014B4C0u; f_8017AC94(c); // 8014B4BC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B4C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B4C4
  c->r[3]=0u+0x00000002u; // 8014B4C8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B4CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014B4D0
  c->r[0]=0u+0x00000005u; // 8014B4D4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B4D8
  c->r[4]=c->r[31]|c->r[31]; // 8014B4DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B4E0
  W8(c->r[29]+0x00000054u,c->r[3]); // 8014B4E4
  c->r[5]=0u+0x00000010u; // 8014B4E8
  W32(c->r[29]+0x00000058u,c->r[0]); // 8014B4EC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B4F0
  {uint32_t ea=c->r[29]+0x00000050u; WF32(ea,c->f[0]);} // 8014B4F4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B4F8
  c->lr=0x8014B500u; f_8017AC94(c); // 8014B4FC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B500
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B504
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B508
  c->r[4]=c->r[31]|c->r[31]; // 8014B50C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B510
  c->r[5]=0u+0x00000011u; // 8014B514
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B518
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B51C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B520
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 8014B524
  c->lr=0x8014B52Cu; f_8017AC94(c); // 8014B528
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B52C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B530
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B534
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014B538
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8014B53C
  fcmp(c,0,c->f[0],c->f[28]); // 8014B540
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B544
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8014B548
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 8014B54C
  if (!crb(c,2)) { goto L_8014B620; } // 8014B550
  fcmp(c,0,c->f[0],c->f[31]); // 8014B554
  if (!crb(c,2)) { goto L_8014B620; } // 8014B558
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B55C
  c->r[4]=c->r[31]|c->r[31]; // 8014B560
  c->r[5]=0u+0x00000050u; // 8014B564
  c->lr=0x8014B56Cu; f_8017AC94(c); // 8014B568
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B56C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B570
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B574
  c->r[4]=c->r[31]|c->r[31]; // 8014B578
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B57C
  c->r[5]=0u+0x00000051u; // 8014B580
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B584
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B588
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B58C
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[0]);} // 8014B590
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B594
  c->lr=0x8014B59Cu; f_8017AC94(c); // 8014B598
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B59C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B5A0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B5A4
  c->r[4]=c->r[31]|c->r[31]; // 8014B5A8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014B5AC
  c->r[5]=0u+0x00000052u; // 8014B5B0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B5B4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B5B8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B5BC
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 8014B5C0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B5C4
  c->lr=0x8014B5CCu; f_8017AC94(c); // 8014B5C8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B5CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B5D0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B5D4
  c->r[4]=c->r[31]|c->r[31]; // 8014B5D8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B5DC
  c->r[5]=0u+0x00000053u; // 8014B5E0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B5E4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B5E8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B5EC
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[0]);} // 8014B5F0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B5F4
  c->lr=0x8014B5FCu; f_8017AC94(c); // 8014B5F8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014B5FC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B600
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014B604
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014B608
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B60C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B610
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B614
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 8014B618
  goto L_8014B788; // 8014B61C
L_8014B620:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B620
  fcmp(c,0,c->f[28],c->f[0]); // 8014B624
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B628
  if (!crb(c,2)) { goto L_8014B634; } // 8014B62C
  goto L_8014B638; // 8014B630
L_8014B634:;
  c->f[28]=c->f[0]; // 8014B634
L_8014B638:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B638
  fcmp(c,0,c->f[28],c->f[0]); // 8014B63C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B640
  if (!crb(c,2)) { goto L_8014B64C; } // 8014B644
  goto L_8014B650; // 8014B648
L_8014B64C:;
  c->f[28]=c->f[0]; // 8014B64C
L_8014B650:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B650
  c->lr=0x8014B658u; f_800C02CC(c); // 8014B654
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B658
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014B65C
  c->f[1]=c->f[0]; // 8014B660
  c->lr=0x8014B668u; f_800C02CC(c); // 8014B664
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B668
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B66C
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B670
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014B674
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014B678
  c->lr=0x8014B680u; f_800C02CC(c); // 8014B67C
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014B680
  c->f[1]=c->f[28]; // 8014B684
  c->lr=0x8014B68Cu; f_800C02CC(c); // 8014B688
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B68C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B690
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B694
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014B698
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014B69C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014B6A0
  fcmp(c,0,c->f[1],c->f[0]); // 8014B6A4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B6A8
  if (!crb(c,2)) { goto L_8014B6B4; } // 8014B6AC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B6B0
L_8014B6B4:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B6B4
  fcmp(c,0,c->f[1],c->f[0]); // 8014B6B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B6BC
  if (!crb(c,2)) { goto L_8014B6C8; } // 8014B6C0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B6C4
L_8014B6C8:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B6C8
  {uint32_t ea=c->r[29]+0x0000005Cu; WF32(ea,c->f[1]);} // 8014B6CC
  {uint32_t ea=c->r[29]+0x00000060u; WF32(ea,c->f[0]);} // 8014B6D0
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B6D4
  fcmp(c,0,c->f[31],c->f[0]); // 8014B6D8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B6DC
  if (!crb(c,2)) { goto L_8014B6E8; } // 8014B6E0
  goto L_8014B6EC; // 8014B6E4
L_8014B6E8:;
  c->f[31]=c->f[0]; // 8014B6E8
L_8014B6EC:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B6EC
  fcmp(c,0,c->f[31],c->f[0]); // 8014B6F0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B6F4
  if (!crb(c,2)) { goto L_8014B700; } // 8014B6F8
  goto L_8014B704; // 8014B6FC
L_8014B700:;
  c->f[31]=c->f[0]; // 8014B700
L_8014B704:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B704
  c->lr=0x8014B70Cu; f_800C02CC(c); // 8014B708
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B70C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014B710
  c->f[1]=c->f[0]; // 8014B714
  c->lr=0x8014B71Cu; f_800C02CC(c); // 8014B718
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B71C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B720
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B724
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014B728
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014B72C
  c->lr=0x8014B734u; f_800C02CC(c); // 8014B730
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014B734
  c->f[1]=c->f[31]; // 8014B738
  c->lr=0x8014B740u; f_800C02CC(c); // 8014B73C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014B740
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B744
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B748
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014B74C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014B750
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014B754
  fcmp(c,0,c->f[1],c->f[0]); // 8014B758
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014B75C
  if (!crb(c,2)) { goto L_8014B768; } // 8014B760
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B764
L_8014B768:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B768
  fcmp(c,0,c->f[1],c->f[0]); // 8014B76C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014B770
  if (!crb(c,2)) { goto L_8014B77C; } // 8014B774
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B778
L_8014B77C:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B77C
  {uint32_t ea=c->r[29]+0x00000064u; WF32(ea,c->f[1]);} // 8014B780
  {uint32_t ea=c->r[29]+0x00000068u; WF32(ea,c->f[0]);} // 8014B784
L_8014B788:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014B788
  c->r[4]=c->r[31]|c->r[31]; // 8014B78C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B790
  c->r[5]=0u+0x00000013u; // 8014B794
  {uint32_t ea=c->r[29]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014B798
  {uint32_t ea=c->r[29]+0x00000070u; WF32(ea,c->f[0]);} // 8014B79C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B7A0
  c->lr=0x8014B7A8u; f_8017AB54(c); // 8014B7A4
  W8(c->r[29]+0x00000074u,c->r[3]); // 8014B7A8
  c->r[4]=c->r[31]|c->r[31]; // 8014B7AC
  c->r[5]=0u+0x00000034u; // 8014B7B0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B7B4
  c->lr=0x8014B7BCu; f_8017ADA8(c); // 8014B7B8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014B7BC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014B7C0
  c->r[0]=c->r[0]^0x80000000u; // 8014B7C4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B7C8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B7CC
  c->r[4]=c->r[31]|c->r[31]; // 8014B7D0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B7D4
  c->r[5]=0u+0x00000035u; // 8014B7D8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B7DC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B7E0
  {uint32_t ea=c->r[29]+0x0000013Cu; WF32(ea,c->f[0]);} // 8014B7E4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B7E8
  c->lr=0x8014B7F0u; f_8017ADA8(c); // 8014B7EC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014B7F0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014B7F4
  c->r[0]=c->r[0]^0x80000000u; // 8014B7F8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B7FC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B800
  c->r[4]=c->r[31]|c->r[31]; // 8014B804
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014B808
  c->r[5]=0u+0x00000036u; // 8014B80C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B810
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B814
  {uint32_t ea=c->r[29]+0x00000140u; WF32(ea,c->f[0]);} // 8014B818
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B81C
  c->lr=0x8014B824u; f_8017ADA8(c); // 8014B820
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014B824
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014B828
  c->r[0]=c->r[0]^0x80000000u; // 8014B82C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B830
  c->r[4]=c->r[31]|c->r[31]; // 8014B834
  c->r[5]=0u+0x00000037u; // 8014B838
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014B83C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014B840
  {uint32_t ea=c->r[29]+0x00000144u; WF32(ea,c->f[0]);} // 8014B844
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B848
  c->lr=0x8014B850u; f_8017ADA8(c); // 8014B84C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014B850
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014B854
  c->r[0]=c->r[0]^0x80000000u; // 8014B858
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B85C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B860
  c->r[4]=c->r[31]|c->r[31]; // 8014B864
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014B868
  c->r[5]=0u+0x00000038u; // 8014B86C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B870
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B874
  {uint32_t ea=c->r[29]+0x00000148u; WF32(ea,c->f[0]);} // 8014B878
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B87C
  c->lr=0x8014B884u; f_8017ADA8(c); // 8014B880
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014B884
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014B888
  c->r[0]=c->r[0]^0x80000000u; // 8014B88C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014B890
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B894
  c->r[4]=c->r[31]|c->r[31]; // 8014B898
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014B89C
  c->r[5]=0u+0x00000039u; // 8014B8A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B8A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B8A8
  {uint32_t ea=c->r[29]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014B8AC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B8B0
  c->lr=0x8014B8B8u; f_8017ADA8(c); // 8014B8B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014B8B8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014B8BC
  c->r[0]=c->r[0]^0x80000000u; // 8014B8C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014B8C4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014B8C8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014B8CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014B8D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014B8D4
  {uint32_t ea=c->r[29]+0x00000150u; WF32(ea,c->f[0]);} // 8014B8D8
L_8014B8DC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B8DC
  c->lr=0x8014B8E4u; f_8017A6AC(c); // 8014B8E0
  cmpu(c,0,c->r[3],0x00000054u); // 8014B8E4
  if (crb(c,1)) { goto L_8014B908; } // 8014B8E8
  c->r[4]=0u+0x00000064u; // 8014B8EC
  c->r[3]=0u+0x00000000u; // 8014B8F0
  c->r[0]=0u+0x00000001u; // 8014B8F4
  W8(c->r[29]+0x00000154u,c->r[4]); // 8014B8F8
  W8(c->r[29]+0x00000155u,c->r[3]); // 8014B8FC
  W8(c->r[29]+0x00000156u,c->r[0]); // 8014B900
  goto L_8014B944; // 8014B904
L_8014B908:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B908
  c->r[4]=c->r[31]|c->r[31]; // 8014B90C
  c->r[5]=0u+0x00000054u; // 8014B910
  c->lr=0x8014B918u; f_8017AB54(c); // 8014B914
  W8(c->r[29]+0x00000154u,c->r[3]); // 8014B918
  c->r[4]=c->r[31]|c->r[31]; // 8014B91C
  c->r[5]=0u+0x00000055u; // 8014B920
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B924
  c->lr=0x8014B92Cu; f_8017AB54(c); // 8014B928
  W8(c->r[29]+0x00000155u,c->r[3]); // 8014B92C
  c->r[4]=c->r[31]|c->r[31]; // 8014B930
  c->r[5]=0u+0x00000056u; // 8014B934
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014B938
  c->lr=0x8014B940u; f_8017AB54(c); // 8014B93C
  W8(c->r[29]+0x00000156u,c->r[3]); // 8014B940
L_8014B944:;
  c->r[0]=0u+0x00000001u; // 8014B944
L_8014B948:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014B948
  if (!crb(c,2)) { goto L_8014B958; } // 8014B94C
  c->r[3]=0u+0x00000000u; // 8014B950
  goto L_8014B95C; // 8014B954
L_8014B958:;
  c->r[3]=0u+0x00000001u; // 8014B958
L_8014B95C:;
  c->r[11]=c->r[1]+0x00000030u; // 8014B95C
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8014B960
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8014B964
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8014B968
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8014B96C
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8014B970
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8014B974
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 8014B978
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 8014B97C
  c->lr=0x8014B984u; f_800ADA78(c); // 8014B980
  c->r[0]=R32(c->r[1]+0x00000074u); // 8014B984
  c->lr=c->r[0]; // 8014B988
  c->r[1]=c->r[1]+0x00000070u; // 8014B98C
  return; // 8014B990
}

// GetSynthItemByIndex__16CriAuCueSheetLocFUlR15CriAuTblSynItem
void f_8014B994(Ctx* __restrict c) {
  trace_call(0x8014B994u);
  {uint32_t ea=c->r[1]+0xFFFFFF90u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014B994
  c->r[0]=c->lr; // 8014B998
  W32(c->r[1]+0x00000074u,c->r[0]); // 8014B99C
  c->r[11]=c->r[1]+0x00000030u; // 8014B9A0
  {uint32_t ea=c->r[1]+0x00000060u; WF64(ea,c->f[31]);} // 8014B9A4
  {uint32_t ea=c->r[1]+0x00000068u; psq_store(c,31,ea,0,0);} // 8014B9A8
  {uint32_t ea=c->r[1]+0x00000050u; WF64(ea,c->f[30]);} // 8014B9AC
  {uint32_t ea=c->r[1]+0x00000058u; psq_store(c,30,ea,0,0);} // 8014B9B0
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[29]);} // 8014B9B4
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,29,ea,0,0);} // 8014B9B8
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[28]);} // 8014B9BC
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,28,ea,0,0);} // 8014B9C0
  c->lr=0x8014B9C8u; f_800ADA2C(c); // 8014B9C4
  c->r[31]=R32(c->r[3]+0x00000020u); // 8014B9C8
  c->r[0]=0u+0x43300000u; // 8014B9CC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014B9D0
  c->r[29]=c->r[4]|c->r[4]; // 8014B9D4
  cmps(c,0,(int32_t)c->r[31],0); // 8014B9D8
  c->r[30]=c->r[5]|c->r[5]; // 8014B9DC
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014B9E0
  if (!crb(c,2)) { goto L_8014BA08; } // 8014B9E4
  c->r[4]=0u+0x802D0000u; // 8014B9E8
  c->r[5]=c->r[29]|c->r[29]; // 8014B9EC
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014B9F0
  c->r[3]=0u+0x00000000u; // 8014B9F4
  c->r[4]=c->r[4]+0x0000048Fu; // 8014B9F8
  c->lr=0x8014BA00u; f_801794C0(c); // 8014B9FC
  c->r[3]=0u+0x00000000u; // 8014BA00
  goto L_8014C5F0; // 8014BA04
L_8014BA08:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014BA08
  cmpu(c,0,c->r[4],c->r[0]); // 8014BA0C
  if (crb(c,0)) { goto L_8014BA1C; } // 8014BA10
  c->r[0]=0u+0x00000000u; // 8014BA14
  goto L_8014C5DC; // 8014BA18
L_8014BA1C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BA1C
  c->r[5]=0u+0x00000000u; // 8014BA20
  c->lr=0x8014BA28u; f_8017B030(c); // 8014BA24
  W32(c->r[30]+0x00000000u,c->r[3]); // 8014BA28
  c->r[4]=c->r[29]|c->r[29]; // 8014BA2C
  c->r[5]=0u+0x00000001u; // 8014BA30
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BA34
  c->lr=0x8014BA3Cu; f_8017AB54(c); // 8014BA38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014BA3C
  W32(c->r[30]+0x00000004u,c->r[0]); // 8014BA40
  c->r[4]=c->r[29]|c->r[29]; // 8014BA44
  c->r[5]=0u+0x00000002u; // 8014BA48
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BA4C
  c->lr=0x8014BA54u; f_8017AB54(c); // 8014BA50
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014BA54
  W32(c->r[30]+0x00000008u,c->r[0]); // 8014BA58
  c->r[4]=c->r[29]|c->r[29]; // 8014BA5C
  c->r[5]=0u+0x00000003u; // 8014BA60
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BA64
  c->lr=0x8014BA6Cu; f_8017B030(c); // 8014BA68
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8014BA6C
  c->r[4]=c->r[29]|c->r[29]; // 8014BA70
  c->r[5]=0u+0x00000004u; // 8014BA74
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BA78
  c->lr=0x8014BA80u; f_8017B030(c); // 8014BA7C
  W32(c->r[30]+0x00000010u,c->r[3]); // 8014BA80
  c->r[4]=c->r[29]|c->r[29]; // 8014BA84
  c->r[5]=0u+0x00000005u; // 8014BA88
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BA8C
  c->lr=0x8014BA94u; f_8017ADA8(c); // 8014BA90
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014BA94
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014BA98
  c->r[0]=c->r[0]^0x80000000u; // 8014BA9C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014BAA0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BAA4
  c->r[4]=c->r[29]|c->r[29]; // 8014BAA8
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014BAAC
  c->r[5]=0u+0x00000006u; // 8014BAB0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014BAB4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014BAB8
  {uint32_t ea=c->r[30]+0x00000014u; WF32(ea,c->f[0]);} // 8014BABC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BAC0
  c->lr=0x8014BAC8u; f_8017ADA8(c); // 8014BAC4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014BAC8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014BACC
  c->r[0]=c->r[0]^0x80000000u; // 8014BAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BAD4
  c->r[4]=c->r[29]|c->r[29]; // 8014BAD8
  c->r[5]=0u+0x00000007u; // 8014BADC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BAE0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BAE4
  {uint32_t ea=c->r[30]+0x00000018u; WF32(ea,c->f[0]);} // 8014BAE8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BAEC
  c->lr=0x8014BAF4u; f_8017ADCC(c); // 8014BAF0
  W32(c->r[1]+0x0000000Cu,c->r[3]); // 8014BAF4
  c->r[4]=c->r[29]|c->r[29]; // 8014BAF8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BAFC
  c->r[5]=0u+0x00000009u; // 8014BB00
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014BB04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BB08
  {uint32_t ea=c->r[30]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014BB0C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BB10
  c->lr=0x8014BB18u; f_8017AC94(c); // 8014BB14
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BB18
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BB1C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BB20
  c->r[4]=c->r[29]|c->r[29]; // 8014BB24
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BB28
  c->r[5]=0u+0x0000000Au; // 8014BB2C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BB30
  {uint32_t ea=c->r[30]+0x00000020u; WF32(ea,c->f[0]);} // 8014BB34
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BB38
  c->lr=0x8014BB40u; f_8017AC94(c); // 8014BB3C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BB40
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014BB44
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BB48
  c->r[4]=c->r[29]|c->r[29]; // 8014BB4C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014BB50
  c->r[5]=0u+0x0000000Bu; // 8014BB54
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BB58
  {uint32_t ea=c->r[30]+0x00000024u; WF32(ea,c->f[0]);} // 8014BB5C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BB60
  c->lr=0x8014BB68u; f_8017AC94(c); // 8014BB64
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BB68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BB6C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BB70
  c->r[4]=c->r[29]|c->r[29]; // 8014BB74
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BB78
  c->r[5]=0u+0x0000000Cu; // 8014BB7C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BB80
  {uint32_t ea=c->r[30]+0x00000028u; WF32(ea,c->f[0]);} // 8014BB84
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BB88
  c->lr=0x8014BB90u; f_8017AC94(c); // 8014BB8C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BB90
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014BB94
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BB98
  c->r[4]=c->r[29]|c->r[29]; // 8014BB9C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014BBA0
  c->r[5]=0u+0x0000000Du; // 8014BBA4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BBA8
  {uint32_t ea=c->r[30]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014BBAC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BBB0
  c->lr=0x8014BBB8u; f_8017AC94(c); // 8014BBB4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BBB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BBBC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BBC0
  c->r[4]=c->r[29]|c->r[29]; // 8014BBC4
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BBC8
  c->r[5]=0u+0x0000000Eu; // 8014BBCC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BBD0
  {uint32_t ea=c->r[30]+0x00000030u; WF32(ea,c->f[0]);} // 8014BBD4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BBD8
  c->lr=0x8014BBE0u; f_8017AC94(c); // 8014BBDC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BBE0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014BBE4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014BBE8
  c->r[4]=c->r[29]|c->r[29]; // 8014BBEC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014BBF0
  c->r[5]=0u+0x00000014u; // 8014BBF4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BBF8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014BBFC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014BC00
  {uint32_t ea=c->r[30]+0x00000034u; WF32(ea,c->f[0]);} // 8014BC04
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BC08
  c->lr=0x8014BC10u; f_8017B030(c); // 8014BC0C
  W32(c->r[30]+0x000000D0u,c->r[3]); // 8014BC10
  c->r[4]=c->r[29]|c->r[29]; // 8014BC14
  c->r[5]=0u+0x00000015u; // 8014BC18
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BC1C
  c->lr=0x8014BC24u; f_8017B030(c); // 8014BC20
  W32(c->r[30]+0x000000D4u,c->r[3]); // 8014BC24
  c->r[27]=c->r[30]|c->r[30]; // 8014BC28
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014BC2C
  c->r[28]=0u+0x00000000u; // 8014BC30
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014BC34
L_8014BC38:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BC38
  c->r[4]=c->r[29]|c->r[29]; // 8014BC3C
  c->r[5]=c->r[28]+0x00000016u; // 8014BC40
  c->lr=0x8014BC48u; f_8017AC94(c); // 8014BC44
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BC48
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BC4C
  c->r[28]=c->r[28]+0x00000001u; // 8014BC50
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BC54
  cmpu(c,0,c->r[28],0x00000008u); // 8014BC58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014BC5C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014BC60
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 8014BC64
  c->r[27]=c->r[27]+0x00000004u; // 8014BC68
  if (crb(c,0)) { IRQCHK(c); goto L_8014BC38; } // 8014BC6C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BC70
  c->r[4]=c->r[29]|c->r[29]; // 8014BC74
  c->r[5]=0u+0x0000001Eu; // 8014BC78
  c->lr=0x8014BC80u; f_8017B030(c); // 8014BC7C
  W32(c->r[30]+0x00000118u,c->r[3]); // 8014BC80
  c->r[27]=c->r[30]|c->r[30]; // 8014BC84
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014BC88
  c->r[28]=0u+0x00000000u; // 8014BC8C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014BC90
L_8014BC94:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BC94
  c->r[4]=c->r[29]|c->r[29]; // 8014BC98
  c->r[5]=c->r[28]+0x0000001Fu; // 8014BC9C
  c->lr=0x8014BCA4u; f_8017AC94(c); // 8014BCA0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BCA4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014BCA8
  c->r[28]=c->r[28]+0x00000001u; // 8014BCAC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014BCB0
  cmpu(c,0,c->r[28],0x00000008u); // 8014BCB4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014BCB8
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014BCBC
  {uint32_t ea=c->r[27]+0x000000D8u; WF32(ea,c->f[0]);} // 8014BCC0
  c->r[27]=c->r[27]+0x00000004u; // 8014BCC4
  if (crb(c,0)) { IRQCHK(c); goto L_8014BC94; } // 8014BCC8
  c->r[27]=c->r[30]|c->r[30]; // 8014BCCC
  c->r[28]=0u+0x00000000u; // 8014BCD0
L_8014BCD4:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BCD4
  c->r[4]=c->r[29]|c->r[29]; // 8014BCD8
  c->r[5]=c->r[28]+0x00000027u; // 8014BCDC
  c->lr=0x8014BCE4u; f_8017B030(c); // 8014BCE0
  c->r[28]=c->r[28]+0x00000001u; // 8014BCE4
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8014BCE8
  cmpu(c,0,c->r[28],0x00000008u); // 8014BCEC
  c->r[27]=c->r[27]+0x00000004u; // 8014BCF0
  if (crb(c,0)) { IRQCHK(c); goto L_8014BCD4; } // 8014BCF4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BCF8
  c->r[4]=c->r[29]|c->r[29]; // 8014BCFC
  c->r[5]=0u+0x0000002Fu; // 8014BD00
  c->lr=0x8014BD08u; f_8017B030(c); // 8014BD04
  W32(c->r[30]+0x0000007Cu,c->r[3]); // 8014BD08
  c->r[4]=c->r[29]|c->r[29]; // 8014BD0C
  c->r[5]=0u+0x00000030u; // 8014BD10
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BD14
  c->lr=0x8014BD1Cu; f_8017AB54(c); // 8014BD18
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014BD1C
  W32(c->r[30]+0x00000078u,c->r[0]); // 8014BD20
  c->r[4]=c->r[29]|c->r[29]; // 8014BD24
  c->r[5]=0u+0x00000031u; // 8014BD28
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BD2C
  c->lr=0x8014BD34u; f_8017AB54(c); // 8014BD30
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014BD34
  W32(c->r[30]+0x00000080u,c->r[0]); // 8014BD38
  c->r[4]=c->r[29]|c->r[29]; // 8014BD3C
  c->r[5]=0u+0x00000032u; // 8014BD40
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BD44
  c->lr=0x8014BD4Cu; f_8017AC94(c); // 8014BD48
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BD4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BD50
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BD54
  c->r[4]=c->r[29]|c->r[29]; // 8014BD58
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BD5C
  c->r[5]=0u+0x00000033u; // 8014BD60
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014BD64
  {uint32_t ea=c->r[30]+0x00000084u; WF32(ea,c->f[0]);} // 8014BD68
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BD6C
  c->lr=0x8014BD74u; f_8017AC70(c); // 8014BD70
  c->r[28]=0u+0x00000000u; // 8014BD74
  W8(c->r[30]+0x00000088u,c->r[3]); // 8014BD78
  W32(c->r[30]+0x0000008Cu,c->r[28]); // 8014BD7C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BD80
  c->lr=0x8014BD88u; f_8017A6AC(c); // 8014BD84
  cmpu(c,0,c->r[3],0x00000034u); // 8014BD88
  if (crb(c,1)) { goto L_8014BFFC; } // 8014BD8C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BD90
  c->r[3]=0u+0x00000002u; // 8014BD94
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BD98
  c->r[0]=0u+0x00000005u; // 8014BD9C
  {uint32_t ea=c->r[30]+0x000000B0u; WF32(ea,c->f[1]);} // 8014BDA0
  c->r[4]=c->r[29]|c->r[29]; // 8014BDA4
  c->r[5]=0u+0x00000010u; // 8014BDA8
  {uint32_t ea=c->r[30]+0x000000B4u; WF32(ea,c->f[1]);} // 8014BDAC
  {uint32_t ea=c->r[30]+0x000000B8u; WF32(ea,c->f[1]);} // 8014BDB0
  {uint32_t ea=c->r[30]+0x000000BCu; WF32(ea,c->f[1]);} // 8014BDB4
  {uint32_t ea=c->r[30]+0x000000C0u; WF32(ea,c->f[1]);} // 8014BDB8
  {uint32_t ea=c->r[30]+0x000000C4u; WF32(ea,c->f[1]);} // 8014BDBC
  {uint32_t ea=c->r[30]+0x000000C8u; WF32(ea,c->f[1]);} // 8014BDC0
  {uint32_t ea=c->r[30]+0x000000CCu; WF32(ea,c->f[1]);} // 8014BDC4
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[1]);} // 8014BDC8
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[1]);} // 8014BDCC
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[1]);} // 8014BDD0
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[1]);} // 8014BDD4
  {uint32_t ea=c->r[30]+0x00000108u; WF32(ea,c->f[1]);} // 8014BDD8
  {uint32_t ea=c->r[30]+0x0000010Cu; WF32(ea,c->f[1]);} // 8014BDDC
  {uint32_t ea=c->r[30]+0x00000110u; WF32(ea,c->f[1]);} // 8014BDE0
  {uint32_t ea=c->r[30]+0x00000114u; WF32(ea,c->f[1]);} // 8014BDE4
  W32(c->r[30]+0x00000038u,c->r[28]); // 8014BDE8
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014BDEC
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[0]);} // 8014BDF0
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 8014BDF4
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8014BDF8
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014BDFC
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8014BE00
  W8(c->r[30]+0x00000054u,c->r[3]); // 8014BE04
  W32(c->r[30]+0x00000058u,c->r[0]); // 8014BE08
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BE0C
  c->lr=0x8014BE14u; f_8017AC94(c); // 8014BE10
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BE14
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014BE18
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BE1C
  c->r[4]=c->r[29]|c->r[29]; // 8014BE20
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014BE24
  c->r[5]=0u+0x00000011u; // 8014BE28
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014BE2C
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8014BE30
  c->lr=0x8014BE38u; f_8017AC94(c); // 8014BE34
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014BE38
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014BE3C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014BE40
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014BE44
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8014BE48
  fcmp(c,0,c->f[29],c->f[31]); // 8014BE4C
  if (crb(c,2)) { goto L_8014BFB0; } // 8014BE50
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BE54
  fcmp(c,0,c->f[29],c->f[0]); // 8014BE58
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014BE5C
  if (!crb(c,2)) { goto L_8014BE68; } // 8014BE60
  goto L_8014BE6C; // 8014BE64
L_8014BE68:;
  c->f[29]=c->f[0]; // 8014BE68
L_8014BE6C:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BE6C
  fcmp(c,0,c->f[29],c->f[0]); // 8014BE70
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014BE74
  if (!crb(c,2)) { goto L_8014BE80; } // 8014BE78
  goto L_8014BE84; // 8014BE7C
L_8014BE80:;
  c->f[29]=c->f[0]; // 8014BE80
L_8014BE84:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BE84
  c->lr=0x8014BE8Cu; f_800C02CC(c); // 8014BE88
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BE8C
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8014BE90
  c->f[1]=c->f[0]; // 8014BE94
  c->lr=0x8014BE9Cu; f_800C02CC(c); // 8014BE98
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014BE9C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BEA0
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BEA4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 8014BEA8
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014BEAC
  c->lr=0x8014BEB4u; f_800C02CC(c); // 8014BEB0
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014BEB4
  c->f[1]=c->f[29]; // 8014BEB8
  c->lr=0x8014BEC0u; f_800C02CC(c); // 8014BEBC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014BEC0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BEC4
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BEC8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014BECC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014BED0
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014BED4
  fcmp(c,0,c->f[1],c->f[0]); // 8014BED8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014BEDC
  if (!crb(c,2)) { goto L_8014BEE8; } // 8014BEE0
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BEE4
L_8014BEE8:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BEE8
  fcmp(c,0,c->f[1],c->f[0]); // 8014BEEC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014BEF0
  if (!crb(c,2)) { goto L_8014BEFC; } // 8014BEF4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BEF8
L_8014BEFC:;
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 8014BEFC
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BF00
  fcmp(c,0,c->f[31],c->f[0]); // 8014BF04
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014BF08
  if (!crb(c,2)) { goto L_8014BF14; } // 8014BF0C
  goto L_8014BF18; // 8014BF10
L_8014BF14:;
  c->f[31]=c->f[0]; // 8014BF14
L_8014BF18:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BF18
  fcmp(c,0,c->f[31],c->f[0]); // 8014BF1C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014BF20
  if (!crb(c,2)) { goto L_8014BF2C; } // 8014BF24
  goto L_8014BF30; // 8014BF28
L_8014BF2C:;
  c->f[31]=c->f[0]; // 8014BF2C
L_8014BF30:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BF30
  c->lr=0x8014BF38u; f_800C02CC(c); // 8014BF34
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BF38
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014BF3C
  c->f[1]=c->f[0]; // 8014BF40
  c->lr=0x8014BF48u; f_800C02CC(c); // 8014BF44
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014BF48
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BF4C
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BF50
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014BF54
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014BF58
  c->lr=0x8014BF60u; f_800C02CC(c); // 8014BF5C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014BF60
  c->f[1]=c->f[31]; // 8014BF64
  c->lr=0x8014BF6Cu; f_800C02CC(c); // 8014BF68
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014BF6C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BF70
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BF74
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014BF78
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014BF7C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014BF80
  fcmp(c,0,c->f[1],c->f[0]); // 8014BF84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014BF88
  if (!crb(c,2)) { goto L_8014BF94; } // 8014BF8C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BF90
L_8014BF94:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BF94
  fcmp(c,0,c->f[1],c->f[0]); // 8014BF98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014BF9C
  if (!crb(c,2)) { goto L_8014BFA8; } // 8014BFA0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BFA4
L_8014BFA8:;
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 8014BFA8
  goto L_8014BFC0; // 8014BFAC
L_8014BFB0:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BFB0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BFB4
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 8014BFB8
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 8014BFBC
L_8014BFC0:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014BFC0
  c->r[0]=0u+0x00000002u; // 8014BFC4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014BFC8
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[1]);} // 8014BFCC
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[1]);} // 8014BFD0
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014BFD4
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[1]);} // 8014BFD8
  W8(c->r[30]+0x00000074u,c->r[0]); // 8014BFDC
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[0]);} // 8014BFE0
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[0]);} // 8014BFE4
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[0]);} // 8014BFE8
  {uint32_t ea=c->r[30]+0x00000148u; WF32(ea,c->f[0]);} // 8014BFEC
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014BFF0
  {uint32_t ea=c->r[30]+0x00000150u; WF32(ea,c->f[0]);} // 8014BFF4
  goto L_8014C570; // 8014BFF8
L_8014BFFC:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014BFFC
  c->r[27]=c->r[30]|c->r[30]; // 8014C000
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014C004
  c->r[28]=0u+0x00000000u; // 8014C008
L_8014C00C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C00C
  c->r[4]=c->r[29]|c->r[29]; // 8014C010
  c->r[5]=c->r[28]+0x0000003Au; // 8014C014
  c->lr=0x8014C01Cu; f_8017AC94(c); // 8014C018
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C01C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C020
  c->r[28]=c->r[28]+0x00000001u; // 8014C024
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014C028
  cmpu(c,0,c->r[28],0x00000008u); // 8014C02C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014C030
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014C034
  {uint32_t ea=c->r[27]+0x000000B0u; WF32(ea,c->f[0]);} // 8014C038
  c->r[27]=c->r[27]+0x00000004u; // 8014C03C
  if (crb(c,0)) { IRQCHK(c); goto L_8014C00C; } // 8014C040
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 8014C044
  c->r[27]=c->r[30]|c->r[30]; // 8014C048
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014C04C
  c->r[28]=0u+0x00000000u; // 8014C050
L_8014C054:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C054
  c->r[4]=c->r[29]|c->r[29]; // 8014C058
  c->r[5]=c->r[28]+0x00000042u; // 8014C05C
  c->lr=0x8014C064u; f_8017AC94(c); // 8014C060
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C064
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C068
  c->r[28]=c->r[28]+0x00000001u; // 8014C06C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[0]=RF64(ea);} // 8014C070
  cmpu(c,0,c->r[28],0x00000008u); // 8014C074
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8014C078
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 8014C07C
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 8014C080
  c->r[27]=c->r[27]+0x00000004u; // 8014C084
  if (crb(c,0)) { IRQCHK(c); goto L_8014C054; } // 8014C088
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C08C
  c->r[4]=c->r[29]|c->r[29]; // 8014C090
  c->r[5]=0u+0x0000004Au; // 8014C094
  c->lr=0x8014C09Cu; f_8017AB54(c); // 8014C098
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014C09C
  W32(c->r[30]+0x00000038u,c->r[0]); // 8014C0A0
  c->r[4]=c->r[29]|c->r[29]; // 8014C0A4
  c->r[5]=0u+0x0000004Bu; // 8014C0A8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C0AC
  c->lr=0x8014C0B4u; f_8017AC94(c); // 8014C0B0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C0B4
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C0B8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C0BC
  c->r[4]=c->r[29]|c->r[29]; // 8014C0C0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C0C4
  c->r[5]=0u+0x0000004Cu; // 8014C0C8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C0CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C0D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C0D4
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014C0D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C0DC
  c->lr=0x8014C0E4u; f_8017AC94(c); // 8014C0E0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C0E8
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C0EC
  c->r[4]=c->r[29]|c->r[29]; // 8014C0F0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014C0F4
  c->r[5]=0u+0x0000004Du; // 8014C0F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8014C0FC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C100
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 8014C104
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014C108
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[1]);} // 8014C10C
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 8014C110
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[0]);} // 8014C114
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 8014C118
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C11C
  c->lr=0x8014C124u; f_8017AC94(c); // 8014C120
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C124
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C128
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C12C
  c->r[4]=c->r[29]|c->r[29]; // 8014C130
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C134
  c->r[5]=0u+0x0000004Eu; // 8014C138
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C13C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C140
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C144
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014C148
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C14C
  c->lr=0x8014C154u; f_8017AC94(c); // 8014C150
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C154
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C158
  c->r[3]=0u+0x00000002u; // 8014C15C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C160
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014C164
  c->r[0]=0u+0x00000005u; // 8014C168
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C16C
  c->r[4]=c->r[29]|c->r[29]; // 8014C170
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C174
  W8(c->r[30]+0x00000054u,c->r[3]); // 8014C178
  c->r[5]=0u+0x00000010u; // 8014C17C
  W32(c->r[30]+0x00000058u,c->r[0]); // 8014C180
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C184
  {uint32_t ea=c->r[30]+0x00000050u; WF32(ea,c->f[0]);} // 8014C188
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C18C
  c->lr=0x8014C194u; f_8017AC94(c); // 8014C190
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C194
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C198
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C19C
  c->r[4]=c->r[29]|c->r[29]; // 8014C1A0
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C1A4
  c->r[5]=0u+0x00000011u; // 8014C1A8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C1AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C1B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C1B4
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 8014C1B8
  c->lr=0x8014C1C0u; f_8017AC94(c); // 8014C1BC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C1C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C1C4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C1C8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014C1CC
  {uint32_t ea=c->r[1]+0x00000010u; c->f[2]=RF64(ea);} // 8014C1D0
  fcmp(c,0,c->f[0],c->f[28]); // 8014C1D4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C1D8
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8014C1DC
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 8014C1E0
  if (!crb(c,2)) { goto L_8014C2B4; } // 8014C1E4
  fcmp(c,0,c->f[0],c->f[31]); // 8014C1E8
  if (!crb(c,2)) { goto L_8014C2B4; } // 8014C1EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C1F0
  c->r[4]=c->r[29]|c->r[29]; // 8014C1F4
  c->r[5]=0u+0x00000050u; // 8014C1F8
  c->lr=0x8014C200u; f_8017AC94(c); // 8014C1FC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C200
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C204
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C208
  c->r[4]=c->r[29]|c->r[29]; // 8014C20C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C210
  c->r[5]=0u+0x00000051u; // 8014C214
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C218
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C21C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C220
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[0]);} // 8014C224
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C228
  c->lr=0x8014C230u; f_8017AC94(c); // 8014C22C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C230
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C234
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C238
  c->r[4]=c->r[29]|c->r[29]; // 8014C23C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014C240
  c->r[5]=0u+0x00000052u; // 8014C244
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C248
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C24C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C250
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 8014C254
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C258
  c->lr=0x8014C260u; f_8017AC94(c); // 8014C25C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C260
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C264
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C268
  c->r[4]=c->r[29]|c->r[29]; // 8014C26C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C270
  c->r[5]=0u+0x00000053u; // 8014C274
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C278
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C27C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C280
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[0]);} // 8014C284
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C288
  c->lr=0x8014C290u; f_8017AC94(c); // 8014C28C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014C290
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C294
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014C298
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014C29C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C2A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C2A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C2A8
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 8014C2AC
  goto L_8014C41C; // 8014C2B0
L_8014C2B4:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C2B4
  fcmp(c,0,c->f[28],c->f[0]); // 8014C2B8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014C2BC
  if (!crb(c,2)) { goto L_8014C2C8; } // 8014C2C0
  goto L_8014C2CC; // 8014C2C4
L_8014C2C8:;
  c->f[28]=c->f[0]; // 8014C2C8
L_8014C2CC:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C2CC
  fcmp(c,0,c->f[28],c->f[0]); // 8014C2D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014C2D4
  if (!crb(c,2)) { goto L_8014C2E0; } // 8014C2D8
  goto L_8014C2E4; // 8014C2DC
L_8014C2E0:;
  c->f[28]=c->f[0]; // 8014C2E0
L_8014C2E4:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C2E4
  c->lr=0x8014C2ECu; f_800C02CC(c); // 8014C2E8
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C2EC
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014C2F0
  c->f[1]=c->f[0]; // 8014C2F4
  c->lr=0x8014C2FCu; f_800C02CC(c); // 8014C2F8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014C2FC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C300
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C304
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014C308
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014C30C
  c->lr=0x8014C314u; f_800C02CC(c); // 8014C310
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014C314
  c->f[1]=c->f[28]; // 8014C318
  c->lr=0x8014C320u; f_800C02CC(c); // 8014C31C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014C320
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C324
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C328
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014C32C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014C330
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014C334
  fcmp(c,0,c->f[1],c->f[0]); // 8014C338
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014C33C
  if (!crb(c,2)) { goto L_8014C348; } // 8014C340
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C344
L_8014C348:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C348
  fcmp(c,0,c->f[1],c->f[0]); // 8014C34C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014C350
  if (!crb(c,2)) { goto L_8014C35C; } // 8014C354
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C358
L_8014C35C:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C35C
  {uint32_t ea=c->r[30]+0x0000005Cu; WF32(ea,c->f[1]);} // 8014C360
  {uint32_t ea=c->r[30]+0x00000060u; WF32(ea,c->f[0]);} // 8014C364
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C368
  fcmp(c,0,c->f[31],c->f[0]); // 8014C36C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014C370
  if (!crb(c,2)) { goto L_8014C37C; } // 8014C374
  goto L_8014C380; // 8014C378
L_8014C37C:;
  c->f[31]=c->f[0]; // 8014C37C
L_8014C380:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C380
  fcmp(c,0,c->f[31],c->f[0]); // 8014C384
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014C388
  if (!crb(c,2)) { goto L_8014C394; } // 8014C38C
  goto L_8014C398; // 8014C390
L_8014C394:;
  c->f[31]=c->f[0]; // 8014C394
L_8014C398:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C398
  c->lr=0x8014C3A0u; f_800C02CC(c); // 8014C39C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C3A0
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014C3A4
  c->f[1]=c->f[0]; // 8014C3A8
  c->lr=0x8014C3B0u; f_800C02CC(c); // 8014C3AC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014C3B0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C3B4
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C3B8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014C3BC
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014C3C0
  c->lr=0x8014C3C8u; f_800C02CC(c); // 8014C3C4
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014C3C8
  c->f[1]=c->f[31]; // 8014C3CC
  c->lr=0x8014C3D4u; f_800C02CC(c); // 8014C3D0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014C3D4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C3D8
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C3DC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014C3E0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014C3E4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014C3E8
  fcmp(c,0,c->f[1],c->f[0]); // 8014C3EC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014C3F0
  if (!crb(c,2)) { goto L_8014C3FC; } // 8014C3F4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C3F8
L_8014C3FC:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C3FC
  fcmp(c,0,c->f[1],c->f[0]); // 8014C400
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014C404
  if (!crb(c,2)) { goto L_8014C410; } // 8014C408
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C40C
L_8014C410:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C410
  {uint32_t ea=c->r[30]+0x00000064u; WF32(ea,c->f[1]);} // 8014C414
  {uint32_t ea=c->r[30]+0x00000068u; WF32(ea,c->f[0]);} // 8014C418
L_8014C41C:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014C41C
  c->r[4]=c->r[29]|c->r[29]; // 8014C420
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C424
  c->r[5]=0u+0x00000013u; // 8014C428
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014C42C
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[0]);} // 8014C430
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C434
  c->lr=0x8014C43Cu; f_8017AB54(c); // 8014C438
  W8(c->r[30]+0x00000074u,c->r[3]); // 8014C43C
  c->r[4]=c->r[29]|c->r[29]; // 8014C440
  c->r[5]=0u+0x00000034u; // 8014C444
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C448
  c->lr=0x8014C450u; f_8017ADA8(c); // 8014C44C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014C450
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014C454
  c->r[0]=c->r[0]^0x80000000u; // 8014C458
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C45C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C460
  c->r[4]=c->r[29]|c->r[29]; // 8014C464
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C468
  c->r[5]=0u+0x00000035u; // 8014C46C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C470
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C474
  {uint32_t ea=c->r[30]+0x0000013Cu; WF32(ea,c->f[0]);} // 8014C478
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C47C
  c->lr=0x8014C484u; f_8017ADA8(c); // 8014C480
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014C484
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014C488
  c->r[0]=c->r[0]^0x80000000u; // 8014C48C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C490
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C494
  c->r[4]=c->r[29]|c->r[29]; // 8014C498
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014C49C
  c->r[5]=0u+0x00000036u; // 8014C4A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C4A4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C4A8
  {uint32_t ea=c->r[30]+0x00000140u; WF32(ea,c->f[0]);} // 8014C4AC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C4B0
  c->lr=0x8014C4B8u; f_8017ADA8(c); // 8014C4B4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014C4B8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014C4BC
  c->r[0]=c->r[0]^0x80000000u; // 8014C4C0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C4C4
  c->r[4]=c->r[29]|c->r[29]; // 8014C4C8
  c->r[5]=0u+0x00000037u; // 8014C4CC
  {uint32_t ea=c->r[1]+0x00000008u; c->f[0]=RF64(ea);} // 8014C4D0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014C4D4
  {uint32_t ea=c->r[30]+0x00000144u; WF32(ea,c->f[0]);} // 8014C4D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C4DC
  c->lr=0x8014C4E4u; f_8017ADA8(c); // 8014C4E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014C4E4
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014C4E8
  c->r[0]=c->r[0]^0x80000000u; // 8014C4EC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C4F0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C4F4
  c->r[4]=c->r[29]|c->r[29]; // 8014C4F8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014C4FC
  c->r[5]=0u+0x00000038u; // 8014C500
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C504
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C508
  {uint32_t ea=c->r[30]+0x00000148u; WF32(ea,c->f[0]);} // 8014C50C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C510
  c->lr=0x8014C518u; f_8017ADA8(c); // 8014C514
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014C518
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014C51C
  c->r[0]=c->r[0]^0x80000000u; // 8014C520
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014C524
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C528
  c->r[4]=c->r[29]|c->r[29]; // 8014C52C
  {uint32_t ea=c->r[1]+0x00000008u; c->f[1]=RF64(ea);} // 8014C530
  c->r[5]=0u+0x00000039u; // 8014C534
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C538
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C53C
  {uint32_t ea=c->r[30]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014C540
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C544
  c->lr=0x8014C54Cu; f_8017ADA8(c); // 8014C548
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014C54C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014C550
  c->r[0]=c->r[0]^0x80000000u; // 8014C554
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014C558
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014C55C
  {uint32_t ea=c->r[1]+0x00000010u; c->f[1]=RF64(ea);} // 8014C560
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014C564
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014C568
  {uint32_t ea=c->r[30]+0x00000150u; WF32(ea,c->f[0]);} // 8014C56C
L_8014C570:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C570
  c->lr=0x8014C578u; f_8017A6AC(c); // 8014C574
  cmpu(c,0,c->r[3],0x00000054u); // 8014C578
  if (crb(c,1)) { goto L_8014C59C; } // 8014C57C
  c->r[4]=0u+0x00000064u; // 8014C580
  c->r[3]=0u+0x00000000u; // 8014C584
  c->r[0]=0u+0x00000001u; // 8014C588
  W8(c->r[30]+0x00000154u,c->r[4]); // 8014C58C
  W8(c->r[30]+0x00000155u,c->r[3]); // 8014C590
  W8(c->r[30]+0x00000156u,c->r[0]); // 8014C594
  goto L_8014C5D8; // 8014C598
L_8014C59C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C59C
  c->r[4]=c->r[29]|c->r[29]; // 8014C5A0
  c->r[5]=0u+0x00000054u; // 8014C5A4
  c->lr=0x8014C5ACu; f_8017AB54(c); // 8014C5A8
  W8(c->r[30]+0x00000154u,c->r[3]); // 8014C5AC
  c->r[4]=c->r[29]|c->r[29]; // 8014C5B0
  c->r[5]=0u+0x00000055u; // 8014C5B4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C5B8
  c->lr=0x8014C5C0u; f_8017AB54(c); // 8014C5BC
  W8(c->r[30]+0x00000155u,c->r[3]); // 8014C5C0
  c->r[4]=c->r[29]|c->r[29]; // 8014C5C4
  c->r[5]=0u+0x00000056u; // 8014C5C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C5CC
  c->lr=0x8014C5D4u; f_8017AB54(c); // 8014C5D0
  W8(c->r[30]+0x00000156u,c->r[3]); // 8014C5D4
L_8014C5D8:;
  c->r[0]=0u+0x00000001u; // 8014C5D8
L_8014C5DC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014C5DC
  if (!crb(c,2)) { goto L_8014C5EC; } // 8014C5E0
  c->r[3]=0u+0x00000000u; // 8014C5E4
  goto L_8014C5F0; // 8014C5E8
L_8014C5EC:;
  c->r[3]=0u+0x00000001u; // 8014C5EC
L_8014C5F0:;
  c->r[11]=c->r[1]+0x00000030u; // 8014C5F0
  {uint32_t ea=c->r[1]+0x00000068u; psq_load(c,31,ea,0,0);} // 8014C5F4
  {uint32_t ea=c->r[1]+0x00000060u; c->f[31]=RF64(ea);} // 8014C5F8
  {uint32_t ea=c->r[1]+0x00000058u; psq_load(c,30,ea,0,0);} // 8014C5FC
  {uint32_t ea=c->r[1]+0x00000050u; c->f[30]=RF64(ea);} // 8014C600
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,29,ea,0,0);} // 8014C604
  {uint32_t ea=c->r[1]+0x00000040u; c->f[29]=RF64(ea);} // 8014C608
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,28,ea,0,0);} // 8014C60C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[28]=RF64(ea);} // 8014C610
  c->lr=0x8014C618u; f_800ADA78(c); // 8014C614
  c->r[0]=R32(c->r[1]+0x00000074u); // 8014C618
  c->lr=c->r[0]; // 8014C61C
  c->r[1]=c->r[1]+0x00000070u; // 8014C620
  return; // 8014C624
}

// GetCueItem__16CriAuCueSheetLocFPCcR15CriAuTblCueItem
void f_8014C628(Ctx* __restrict c) {
  trace_call(0x8014C628u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C628
  c->r[0]=c->lr; // 8014C62C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014C630
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014C634
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014C638
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014C63C
  c->r[29]=c->r[5]|c->r[5]; // 8014C640
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 8014C644
  cmps(c,0,(int32_t)c->r[30],0); // 8014C648
  if (!crb(c,2)) { goto L_8014C670; } // 8014C64C
  c->r[6]=0u+0x802D0000u; // 8014C650
  c->r[5]=c->r[4]|c->r[4]; // 8014C654
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014C658
  c->r[3]=0u+0x00000000u; // 8014C65C
  c->r[4]=c->r[6]+0x0000038Fu; // 8014C660
  c->lr=0x8014C668u; f_801794C0(c); // 8014C664
  c->r[3]=0u+0x00000000u; // 8014C668
  goto L_8014C730; // 8014C66C
L_8014C670:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C670
  c->r[5]=c->r[4]|c->r[4]; // 8014C674
  c->r[4]=0u+0x00000000u; // 8014C678
  c->lr=0x8014C680u; f_8017A8C0(c); // 8014C67C
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014C680
  c->r[31]=c->r[3]|c->r[3]; // 8014C684
  cmpu(c,0,c->r[3],c->r[0]); // 8014C688
  if (crb(c,0)) { goto L_8014C698; } // 8014C68C
  c->r[0]=0u+0x00000000u; // 8014C690
  goto L_8014C71C; // 8014C694
L_8014C698:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C698
  c->r[4]=c->r[31]|c->r[31]; // 8014C69C
  c->r[5]=0u+0x00000000u; // 8014C6A0
  c->lr=0x8014C6A8u; f_8017B030(c); // 8014C6A4
  W32(c->r[29]+0x00000000u,c->r[3]); // 8014C6A8
  c->r[4]=c->r[31]|c->r[31]; // 8014C6AC
  c->r[5]=0u+0x00000001u; // 8014C6B0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C6B4
  c->lr=0x8014C6BCu; f_8017ADCC(c); // 8014C6B8
  W32(c->r[29]+0x00000004u,c->r[3]); // 8014C6BC
  c->r[4]=c->r[31]|c->r[31]; // 8014C6C0
  c->r[5]=0u+0x00000002u; // 8014C6C4
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C6C8
  c->lr=0x8014C6D0u; f_8017B030(c); // 8014C6CC
  W32(c->r[29]+0x00000008u,c->r[3]); // 8014C6D0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C6D4
  c->lr=0x8014C6DCu; f_8017A6AC(c); // 8014C6D8
  cmpu(c,0,c->r[3],0x00000003u); // 8014C6DC
  if (!crb(c,1)) { goto L_8014C6FC; } // 8014C6E0
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C6E4
  c->r[4]=c->r[31]|c->r[31]; // 8014C6E8
  c->r[5]=0u+0x00000003u; // 8014C6EC
  c->lr=0x8014C6F4u; f_8017B030(c); // 8014C6F0
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8014C6F4
  goto L_8014C704; // 8014C6F8
L_8014C6FC:;
  c->r[0]=0u+0x00000000u; // 8014C6FC
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8014C700
L_8014C704:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C704
  c->r[4]=c->r[31]|c->r[31]; // 8014C708
  c->r[5]=0u+0x00000004u; // 8014C70C
  c->lr=0x8014C714u; f_8017AB54(c); // 8014C710
  W8(c->r[29]+0x00000010u,c->r[3]); // 8014C714
  c->r[0]=0u+0x00000001u; // 8014C718
L_8014C71C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014C71C
  if (!crb(c,2)) { goto L_8014C72C; } // 8014C720
  c->r[3]=0u+0x00000000u; // 8014C724
  goto L_8014C730; // 8014C728
L_8014C72C:;
  c->r[3]=0u+0x00000001u; // 8014C72C
L_8014C730:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014C730
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014C734
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014C738
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014C73C
  c->lr=c->r[0]; // 8014C740
  c->r[1]=c->r[1]+0x00000020u; // 8014C744
  return; // 8014C748
}

// GetCueItem__16CriAuCueSheetLocFUlR15CriAuTblCueItem
void f_8014C74C(Ctx* __restrict c) {
  trace_call(0x8014C74Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C74C
  c->r[0]=c->lr; // 8014C750
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014C754
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014C758
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014C75C
  c->r[30]=c->r[5]|c->r[5]; // 8014C760
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014C764
  c->r[29]=c->r[4]|c->r[4]; // 8014C768
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 8014C76C
  cmps(c,0,(int32_t)c->r[31],0); // 8014C770
  if (!crb(c,2)) { goto L_8014C798; } // 8014C774
  c->r[4]=0u+0x802D0000u; // 8014C778
  c->r[5]=c->r[29]|c->r[29]; // 8014C77C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014C780
  c->r[3]=0u+0x00000000u; // 8014C784
  c->r[4]=c->r[4]+0x000002F7u; // 8014C788
  c->lr=0x8014C790u; f_801794C0(c); // 8014C78C
  c->r[3]=0u+0x00000000u; // 8014C790
  goto L_8014C858; // 8014C794
L_8014C798:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014C798
  cmpu(c,0,c->r[4],c->r[0]); // 8014C79C
  if (crb(c,0)) { goto L_8014C7AC; } // 8014C7A0
  c->r[0]=0u+0x00000000u; // 8014C7A4
  goto L_8014C82C; // 8014C7A8
L_8014C7AC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C7AC
  c->r[5]=0u+0x00000000u; // 8014C7B0
  c->lr=0x8014C7B8u; f_8017B030(c); // 8014C7B4
  W32(c->r[30]+0x00000000u,c->r[3]); // 8014C7B8
  c->r[4]=c->r[29]|c->r[29]; // 8014C7BC
  c->r[5]=0u+0x00000001u; // 8014C7C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C7C4
  c->lr=0x8014C7CCu; f_8017ADCC(c); // 8014C7C8
  W32(c->r[30]+0x00000004u,c->r[3]); // 8014C7CC
  c->r[4]=c->r[29]|c->r[29]; // 8014C7D0
  c->r[5]=0u+0x00000002u; // 8014C7D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C7D8
  c->lr=0x8014C7E0u; f_8017B030(c); // 8014C7DC
  W32(c->r[30]+0x00000008u,c->r[3]); // 8014C7E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C7E4
  c->lr=0x8014C7ECu; f_8017A6AC(c); // 8014C7E8
  cmpu(c,0,c->r[3],0x00000003u); // 8014C7EC
  if (!crb(c,1)) { goto L_8014C80C; } // 8014C7F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C7F4
  c->r[4]=c->r[29]|c->r[29]; // 8014C7F8
  c->r[5]=0u+0x00000003u; // 8014C7FC
  c->lr=0x8014C804u; f_8017B030(c); // 8014C800
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 8014C804
  goto L_8014C814; // 8014C808
L_8014C80C:;
  c->r[0]=0u+0x00000000u; // 8014C80C
  W32(c->r[30]+0x0000000Cu,c->r[0]); // 8014C810
L_8014C814:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014C814
  c->r[4]=c->r[29]|c->r[29]; // 8014C818
  c->r[5]=0u+0x00000004u; // 8014C81C
  c->lr=0x8014C824u; f_8017AB54(c); // 8014C820
  W8(c->r[30]+0x00000010u,c->r[3]); // 8014C824
  c->r[0]=0u+0x00000001u; // 8014C828
L_8014C82C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014C82C
  if (!crb(c,2)) { goto L_8014C854; } // 8014C830
  c->r[4]=0u+0x802D0000u; // 8014C834
  c->r[5]=c->r[29]|c->r[29]; // 8014C838
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014C83C
  c->r[3]=0u+0x00000000u; // 8014C840
  c->r[4]=c->r[4]+0x00000329u; // 8014C844
  c->lr=0x8014C84Cu; f_801794C0(c); // 8014C848
  c->r[3]=0u+0x00000000u; // 8014C84C
  goto L_8014C858; // 8014C850
L_8014C854:;
  c->r[3]=0u+0x00000001u; // 8014C854
L_8014C858:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014C858
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014C85C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014C860
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014C864
  c->lr=c->r[0]; // 8014C868
  c->r[1]=c->r[1]+0x00000020u; // 8014C86C
  return; // 8014C870
}

// GetCueItemById__16CriAuCueSheetLocFUlR15CriAuTblCueItem
void f_8014C874(Ctx* __restrict c) {
  trace_call(0x8014C874u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C874
  c->r[0]=c->lr; // 8014C878
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014C87C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014C880
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014C884
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014C888
  c->r[29]=c->r[5]|c->r[5]; // 8014C88C
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 8014C890
  cmps(c,0,(int32_t)c->r[30],0); // 8014C894
  if (!crb(c,2)) { goto L_8014C8BC; } // 8014C898
  c->r[6]=0u+0x802D0000u; // 8014C89C
  c->r[5]=c->r[4]|c->r[4]; // 8014C8A0
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014C8A4
  c->r[3]=0u+0x00000000u; // 8014C8A8
  c->r[4]=c->r[6]+0x000003C2u; // 8014C8AC
  c->lr=0x8014C8B4u; f_801794C0(c); // 8014C8B0
  c->r[3]=0u+0x00000000u; // 8014C8B4
  goto L_8014C97C; // 8014C8B8
L_8014C8BC:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C8BC
  c->r[5]=c->r[4]|c->r[4]; // 8014C8C0
  c->r[4]=0u+0x00000001u; // 8014C8C4
  c->lr=0x8014C8CCu; f_8017AAA8(c); // 8014C8C8
  c->r[0]=R32(c->r[30]+0x00000008u); // 8014C8CC
  c->r[31]=c->r[3]|c->r[3]; // 8014C8D0
  cmpu(c,0,c->r[3],c->r[0]); // 8014C8D4
  if (crb(c,0)) { goto L_8014C8E4; } // 8014C8D8
  c->r[0]=0u+0x00000000u; // 8014C8DC
  goto L_8014C968; // 8014C8E0
L_8014C8E4:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C8E4
  c->r[4]=c->r[31]|c->r[31]; // 8014C8E8
  c->r[5]=0u+0x00000000u; // 8014C8EC
  c->lr=0x8014C8F4u; f_8017B030(c); // 8014C8F0
  W32(c->r[29]+0x00000000u,c->r[3]); // 8014C8F4
  c->r[4]=c->r[31]|c->r[31]; // 8014C8F8
  c->r[5]=0u+0x00000001u; // 8014C8FC
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C900
  c->lr=0x8014C908u; f_8017ADCC(c); // 8014C904
  W32(c->r[29]+0x00000004u,c->r[3]); // 8014C908
  c->r[4]=c->r[31]|c->r[31]; // 8014C90C
  c->r[5]=0u+0x00000002u; // 8014C910
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C914
  c->lr=0x8014C91Cu; f_8017B030(c); // 8014C918
  W32(c->r[29]+0x00000008u,c->r[3]); // 8014C91C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C920
  c->lr=0x8014C928u; f_8017A6AC(c); // 8014C924
  cmpu(c,0,c->r[3],0x00000003u); // 8014C928
  if (!crb(c,1)) { goto L_8014C948; } // 8014C92C
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C930
  c->r[4]=c->r[31]|c->r[31]; // 8014C934
  c->r[5]=0u+0x00000003u; // 8014C938
  c->lr=0x8014C940u; f_8017B030(c); // 8014C93C
  W32(c->r[29]+0x0000000Cu,c->r[3]); // 8014C940
  goto L_8014C950; // 8014C944
L_8014C948:;
  c->r[0]=0u+0x00000000u; // 8014C948
  W32(c->r[29]+0x0000000Cu,c->r[0]); // 8014C94C
L_8014C950:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 8014C950
  c->r[4]=c->r[31]|c->r[31]; // 8014C954
  c->r[5]=0u+0x00000004u; // 8014C958
  c->lr=0x8014C960u; f_8017AB54(c); // 8014C95C
  W8(c->r[29]+0x00000010u,c->r[3]); // 8014C960
  c->r[0]=0u+0x00000001u; // 8014C964
L_8014C968:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014C968
  if (!crb(c,2)) { goto L_8014C978; } // 8014C96C
  c->r[3]=0u+0x00000000u; // 8014C970
  goto L_8014C97C; // 8014C974
L_8014C978:;
  c->r[3]=0u+0x00000001u; // 8014C978
L_8014C97C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014C97C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014C980
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014C984
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014C988
  c->lr=c->r[0]; // 8014C98C
  c->r[1]=c->r[1]+0x00000020u; // 8014C990
  return; // 8014C994
}

// GetAisacPattern__16CriAuCueSheetLocFPCc
void f_8014C998(Ctx* __restrict c) {
  trace_call(0x8014C998u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014C998
  c->r[0]=c->lr; // 8014C99C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014C9A0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014C9A4
  c->r[31]=0u+0x00000000u; // 8014C9A8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014C9AC
  c->r[30]=0u+0x00000000u; // 8014C9B0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014C9B4
  c->r[29]=c->r[4]|c->r[4]; // 8014C9B8
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014C9BC
  c->r[28]=c->r[3]|c->r[3]; // 8014C9C0
  goto L_8014C9FC; // 8014C9C4
L_8014C9C8:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 8014C9C8
  c->r[3]=R32(c->r[3]+c->r[31]); // 8014C9CC
  c->lr=0x8014C9D4u; f_8014637C(c); // 8014C9D0
  c->r[4]=c->r[29]|c->r[29]; // 8014C9D4
  c->lr=0x8014C9DCu; f_800B7948(c); // 8014C9D8
  cmps(c,0,(int32_t)c->r[3],0); // 8014C9DC
  if (!crb(c,2)) { goto L_8014C9F4; } // 8014C9E0
  c->r[3]=R32(c->r[28]+0x00000030u); // 8014C9E4
  c->r[0]=rotl(c->r[30],2)&0xFFFFFFFCu; // 8014C9E8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8014C9EC
  goto L_8014CA0C; // 8014C9F0
L_8014C9F4:;
  c->r[31]=c->r[31]+0x00000004u; // 8014C9F4
  c->r[30]=c->r[30]+0x00000001u; // 8014C9F8
L_8014C9FC:;
  c->r[0]=R32(c->r[28]+0x0000002Cu); // 8014C9FC
  cmpu(c,0,c->r[30],c->r[0]); // 8014CA00
  if (crb(c,0)) { IRQCHK(c); goto L_8014C9C8; } // 8014CA04
  c->r[3]=0u+0x00000000u; // 8014CA08
L_8014CA0C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014CA0C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014CA10
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014CA14
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014CA18
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014CA1C
  c->lr=c->r[0]; // 8014CA20
  c->r[1]=c->r[1]+0x00000020u; // 8014CA24
  return; // 8014CA28
}

// GetVlgMaxVoices__16CriAuCueSheetLocFPCc
void f_8014CA2C(Ctx* __restrict c) {
  trace_call(0x8014CA2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CA2C
  c->r[0]=c->lr; // 8014CA30
  cmps(c,0,(int32_t)c->r[4],0); // 8014CA34
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014CA38
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014CA3C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014CA40
  c->r[30]=0u+0x00000000u; // 8014CA44
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014CA48
  if (!crb(c,2)) { goto L_8014CA5C; } // 8014CA4C
  c->r[3]=0u+0x00010000u; // 8014CA50
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 8014CA54
  goto L_8014CAEC; // 8014CA58
L_8014CA5C:;
  c->r[29]=R32(c->r[3]+0x00000034u); // 8014CA5C
  cmps(c,0,(int32_t)c->r[29],0); // 8014CA60
  if (!crb(c,2)) { goto L_8014CA88; } // 8014CA64
  c->r[6]=0u+0x802D0000u; // 8014CA68
  c->r[5]=c->r[4]|c->r[4]; // 8014CA6C
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014CA70
  c->r[3]=0u+0x00000000u; // 8014CA74
  c->r[4]=c->r[6]+0x000004C5u; // 8014CA78
  c->lr=0x8014CA80u; f_801794C0(c); // 8014CA7C
  c->r[3]=0u+0x00000000u; // 8014CA80
  goto L_8014CAEC; // 8014CA84
L_8014CA88:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CA88
  c->r[5]=c->r[4]|c->r[4]; // 8014CA8C
  c->r[4]=0u+0x00000000u; // 8014CA90
  c->lr=0x8014CA98u; f_8017A8C0(c); // 8014CA94
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014CA98
  c->r[31]=c->r[3]|c->r[3]; // 8014CA9C
  cmpu(c,0,c->r[3],c->r[0]); // 8014CAA0
  if (crb(c,0)) { goto L_8014CAB0; } // 8014CAA4
  c->r[0]=0u+0x00000000u; // 8014CAA8
  goto L_8014CAD8; // 8014CAAC
L_8014CAB0:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CAB0
  c->r[4]=c->r[31]|c->r[31]; // 8014CAB4
  c->r[5]=0u+0x00000000u; // 8014CAB8
  c->lr=0x8014CAC0u; f_8017B030(c); // 8014CABC
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CAC0
  c->r[4]=c->r[31]|c->r[31]; // 8014CAC4
  c->r[5]=0u+0x00000001u; // 8014CAC8
  c->lr=0x8014CAD0u; f_8017ADCC(c); // 8014CACC
  c->r[30]=c->r[3]|c->r[3]; // 8014CAD0
  c->r[0]=0u+0x00000001u; // 8014CAD4
L_8014CAD8:;
  cmps(c,0,(int32_t)c->r[0],1); // 8014CAD8
  if (!crb(c,2)) { goto L_8014CAE8; } // 8014CADC
  c->r[3]=c->r[30]|c->r[30]; // 8014CAE0
  goto L_8014CAEC; // 8014CAE4
L_8014CAE8:;
  c->r[3]=0u+0x00000000u; // 8014CAE8
L_8014CAEC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014CAEC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014CAF0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014CAF4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014CAF8
  c->lr=c->r[0]; // 8014CAFC
  c->r[1]=c->r[1]+0x00000020u; // 8014CB00
  return; // 8014CB04
}

// GetSynthName__16CriAuCueSheetLocFPCcR8CriError
void f_8014CB08(Ctx* __restrict c) {
  trace_call(0x8014CB08u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CB08
  c->r[0]=c->lr; // 8014CB0C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014CB10
  c->r[0]=0u+0x00000000u; // 8014CB14
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8014CB18
  W32(c->r[1]+0x00000018u,c->r[30]); // 8014CB1C
  c->r[30]=0u+0x00000000u; // 8014CB20
  W32(c->r[1]+0x00000014u,c->r[29]); // 8014CB24
  W32(c->r[1]+0x00000010u,c->r[28]); // 8014CB28
  c->r[28]=c->r[5]|c->r[5]; // 8014CB2C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014CB30
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8014CB34
  cmps(c,0,(int32_t)c->r[29],0); // 8014CB38
  if (!crb(c,2)) { goto L_8014CB60; } // 8014CB3C
  c->r[6]=0u+0x802D0000u; // 8014CB40
  c->r[5]=c->r[4]|c->r[4]; // 8014CB44
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014CB48
  c->r[3]=0u+0x00000000u; // 8014CB4C
  c->r[4]=c->r[6]+0x0000038Fu; // 8014CB50
  c->lr=0x8014CB58u; f_801794C0(c); // 8014CB54
  c->r[0]=0u+0x00000000u; // 8014CB58
  goto L_8014CBFC; // 8014CB5C
L_8014CB60:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CB60
  c->r[5]=c->r[4]|c->r[4]; // 8014CB64
  c->r[4]=0u+0x00000000u; // 8014CB68
  c->lr=0x8014CB70u; f_8017A8C0(c); // 8014CB6C
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014CB70
  c->r[31]=c->r[3]|c->r[3]; // 8014CB74
  cmpu(c,0,c->r[3],c->r[0]); // 8014CB78
  if (crb(c,0)) { goto L_8014CB88; } // 8014CB7C
  c->r[3]=0u+0x00000000u; // 8014CB80
  goto L_8014CBF0; // 8014CB84
L_8014CB88:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CB88
  c->r[4]=c->r[31]|c->r[31]; // 8014CB8C
  c->r[5]=0u+0x00000000u; // 8014CB90
  c->lr=0x8014CB98u; f_8017B030(c); // 8014CB94
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CB98
  c->r[4]=c->r[31]|c->r[31]; // 8014CB9C
  c->r[5]=0u+0x00000001u; // 8014CBA0
  c->lr=0x8014CBA8u; f_8017ADCC(c); // 8014CBA4
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CBA8
  c->r[4]=c->r[31]|c->r[31]; // 8014CBAC
  c->r[5]=0u+0x00000002u; // 8014CBB0
  c->lr=0x8014CBB8u; f_8017B030(c); // 8014CBB4
  c->r[30]=c->r[3]|c->r[3]; // 8014CBB8
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CBBC
  c->lr=0x8014CBC4u; f_8017A6AC(c); // 8014CBC0
  cmpu(c,0,c->r[3],0x00000003u); // 8014CBC4
  if (!crb(c,1)) { goto L_8014CBDC; } // 8014CBC8
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CBCC
  c->r[4]=c->r[31]|c->r[31]; // 8014CBD0
  c->r[5]=0u+0x00000003u; // 8014CBD4
  c->lr=0x8014CBDCu; f_8017B030(c); // 8014CBD8
L_8014CBDC:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CBDC
  c->r[4]=c->r[31]|c->r[31]; // 8014CBE0
  c->r[5]=0u+0x00000004u; // 8014CBE4
  c->lr=0x8014CBECu; f_8017AB54(c); // 8014CBE8
  c->r[3]=0u+0x00000001u; // 8014CBEC
L_8014CBF0:;
  c->r[0]=0u-c->r[3]; // 8014CBF0
  c->r[0]=c->r[0]|c->r[3]; // 8014CBF4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014CBF8
L_8014CBFC:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014CBFC
  if (!crb(c,2)) { goto L_8014CC14; } // 8014CC00
  c->r[0]=0u+0xFFFFFFFFu; // 8014CC04
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014CC08
  c->r[3]=0u+0x00000000u; // 8014CC0C
  goto L_8014CC18; // 8014CC10
L_8014CC14:;
  c->r[3]=c->r[30]|c->r[30]; // 8014CC14
L_8014CC18:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014CC18
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8014CC1C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8014CC20
  c->r[29]=R32(c->r[1]+0x00000014u); // 8014CC24
  c->r[28]=R32(c->r[1]+0x00000010u); // 8014CC28
  c->lr=c->r[0]; // 8014CC2C
  c->r[1]=c->r[1]+0x00000020u; // 8014CC30
  return; // 8014CC34
}

// GetSynthIndex__16CriAuCueSheetLocFPCcR8CriError
void f_8014CC38(Ctx* __restrict c) {
  trace_call(0x8014CC38u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CC38
  c->r[0]=c->lr; // 8014CC3C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8014CC40
  c->r[0]=0u+0x00000000u; // 8014CC44
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8014CC48
  c->r[27]=c->r[3]|c->r[3]; // 8014CC4C
  c->r[28]=c->r[5]|c->r[5]; // 8014CC50
  c->r[30]=0u+0x00000000u; // 8014CC54
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014CC58
  c->r[29]=R32(c->r[3]+0x0000001Cu); // 8014CC5C
  cmps(c,0,(int32_t)c->r[29],0); // 8014CC60
  if (!crb(c,2)) { goto L_8014CC88; } // 8014CC64
  c->r[6]=0u+0x802D0000u; // 8014CC68
  c->r[5]=c->r[4]|c->r[4]; // 8014CC6C
  c->r[6]=c->r[6]+0xFFFFDD30u; // 8014CC70
  c->r[3]=0u+0x00000000u; // 8014CC74
  c->r[4]=c->r[6]+0x0000038Fu; // 8014CC78
  c->lr=0x8014CC80u; f_801794C0(c); // 8014CC7C
  c->r[0]=0u+0x00000000u; // 8014CC80
  goto L_8014CD24; // 8014CC84
L_8014CC88:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CC88
  c->r[5]=c->r[4]|c->r[4]; // 8014CC8C
  c->r[4]=0u+0x00000000u; // 8014CC90
  c->lr=0x8014CC98u; f_8017A8C0(c); // 8014CC94
  c->r[0]=R32(c->r[29]+0x00000008u); // 8014CC98
  c->r[31]=c->r[3]|c->r[3]; // 8014CC9C
  cmpu(c,0,c->r[3],c->r[0]); // 8014CCA0
  if (crb(c,0)) { goto L_8014CCB0; } // 8014CCA4
  c->r[3]=0u+0x00000000u; // 8014CCA8
  goto L_8014CD18; // 8014CCAC
L_8014CCB0:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CCB0
  c->r[4]=c->r[31]|c->r[31]; // 8014CCB4
  c->r[5]=0u+0x00000000u; // 8014CCB8
  c->lr=0x8014CCC0u; f_8017B030(c); // 8014CCBC
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CCC0
  c->r[4]=c->r[31]|c->r[31]; // 8014CCC4
  c->r[5]=0u+0x00000001u; // 8014CCC8
  c->lr=0x8014CCD0u; f_8017ADCC(c); // 8014CCCC
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CCD0
  c->r[4]=c->r[31]|c->r[31]; // 8014CCD4
  c->r[5]=0u+0x00000002u; // 8014CCD8
  c->lr=0x8014CCE0u; f_8017B030(c); // 8014CCDC
  c->r[30]=c->r[3]|c->r[3]; // 8014CCE0
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CCE4
  c->lr=0x8014CCECu; f_8017A6AC(c); // 8014CCE8
  cmpu(c,0,c->r[3],0x00000003u); // 8014CCEC
  if (!crb(c,1)) { goto L_8014CD04; } // 8014CCF0
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CCF4
  c->r[4]=c->r[31]|c->r[31]; // 8014CCF8
  c->r[5]=0u+0x00000003u; // 8014CCFC
  c->lr=0x8014CD04u; f_8017B030(c); // 8014CD00
L_8014CD04:;
  c->r[3]=R32(c->r[29]+0x00000004u); // 8014CD04
  c->r[4]=c->r[31]|c->r[31]; // 8014CD08
  c->r[5]=0u+0x00000004u; // 8014CD0C
  c->lr=0x8014CD14u; f_8017AB54(c); // 8014CD10
  c->r[3]=0u+0x00000001u; // 8014CD14
L_8014CD18:;
  c->r[0]=0u-c->r[3]; // 8014CD18
  c->r[0]=c->r[0]|c->r[3]; // 8014CD1C
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014CD20
L_8014CD24:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014CD24
  if (!crb(c,2)) { goto L_8014CD3C; } // 8014CD28
  c->r[0]=0u+0xFFFFFFFFu; // 8014CD2C
  W32(c->r[28]+0x00000000u,c->r[0]); // 8014CD30
  c->r[3]=0u+0xFFFFFFFFu; // 8014CD34
  goto L_8014CD58; // 8014CD38
L_8014CD3C:;
  c->r[12]=R32(c->r[27]+0x00000000u); // 8014CD3C
  c->r[3]=c->r[27]|c->r[27]; // 8014CD40
  c->r[4]=c->r[30]|c->r[30]; // 8014CD44
  c->r[5]=c->r[28]|c->r[28]; // 8014CD48
  c->r[12]=R32(c->r[12]+0x00000084u); // 8014CD4C
  c->ctr=c->r[12]; // 8014CD50
  if (true) { c->lr=0x8014CD58u; dispatch(c,c->ctr); } // 8014CD54
L_8014CD58:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 8014CD58
  c->r[0]=R32(c->r[1]+0x00000024u); // 8014CD5C
  c->lr=c->r[0]; // 8014CD60
  c->r[1]=c->r[1]+0x00000020u; // 8014CD64
  return; // 8014CD68
}

// GetSynthIndexFromSynthName__16CriAuCueSheetLocFPCcR8CriError
void f_8014CD6C(Ctx* __restrict c) {
  trace_call(0x8014CD6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CD6C
  c->r[0]=c->lr; // 8014CD70
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014CD74
  c->r[0]=0u+0x00000000u; // 8014CD78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8014CD7C
  c->r[31]=c->r[5]|c->r[5]; // 8014CD80
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014CD84
  c->r[5]=c->r[4]|c->r[4]; // 8014CD88
  c->r[4]=0u+0x00000000u; // 8014CD8C
  c->r[3]=R32(c->r[3]+0x00000020u); // 8014CD90
  c->r[3]=R32(c->r[3]+0x00000004u); // 8014CD94
  c->lr=0x8014CD9Cu; f_8017A8C0(c); // 8014CD98
  c->r[0]=c->r[3]+0x00010000u; // 8014CD9C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 8014CDA0
  if (!crb(c,2)) { goto L_8014CDB4; } // 8014CDA4
  c->r[0]=0u+0xFFFFFFFFu; // 8014CDA8
  W32(c->r[31]+0x00000000u,c->r[0]); // 8014CDAC
  c->r[3]=0u+0xFFFFFFFFu; // 8014CDB0
L_8014CDB4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8014CDB4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8014CDB8
  c->lr=c->r[0]; // 8014CDBC
  c->r[1]=c->r[1]+0x00000010u; // 8014CDC0
  return; // 8014CDC4
}

// GetSynthType__16CriAuCueSheetLocFUlR8CriError
void f_8014CDC8(Ctx* __restrict c) {
  trace_call(0x8014CDC8u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014CDC8
  c->r[0]=c->lr; // 8014CDCC
  W32(c->r[1]+0x000001D4u,c->r[0]); // 8014CDD0
  c->r[11]=c->r[1]+0x00000190u; // 8014CDD4
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8014CDD8
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 8014CDDC
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 8014CDE0
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 8014CDE4
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8014CDE8
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 8014CDEC
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 8014CDF0
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 8014CDF4
  c->lr=0x8014CDFCu; f_800ADA2C(c); // 8014CDF8
  c->r[0]=0u+0x00000000u; // 8014CDFC
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014CE00
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CE04
  c->r[6]=0u+0x43300000u; // 8014CE08
  c->r[31]=R32(c->r[3]+0x00000020u); // 8014CE0C
  c->r[29]=c->r[4]|c->r[4]; // 8014CE10
  W32(c->r[1]+0x00000160u,c->r[6]); // 8014CE14
  c->r[30]=c->r[5]|c->r[5]; // 8014CE18
  cmps(c,0,(int32_t)c->r[31],0); // 8014CE1C
  W32(c->r[1]+0x00000168u,c->r[6]); // 8014CE20
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014CE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014CE28
  W32(c->r[1]+0x00000018u,c->r[0]); // 8014CE2C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8014CE30
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8014CE34
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8014CE38
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8014CE3C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8014CE40
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8014CE44
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8014CE48
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8014CE4C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8014CE50
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8014CE54
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8014CE58
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8014CE5C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8014CE60
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8014CE64
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8014CE68
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 8014CE6C
  W32(c->r[1]+0x000000D8u,c->r[0]); // 8014CE70
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8014CE74
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 8014CE78
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8014CE7C
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8014CE80
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8014CE84
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8014CE88
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 8014CE8C
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8014CE90
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8014CE94
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8014CE98
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8014CE9C
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8014CEA0
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8014CEA4
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 8014CEA8
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8014CEAC
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8014CEB0
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8014CEB4
  W32(c->r[1]+0x00000120u,c->r[0]); // 8014CEB8
  W32(c->r[1]+0x00000124u,c->r[0]); // 8014CEBC
  W32(c->r[1]+0x00000128u,c->r[0]); // 8014CEC0
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8014CEC4
  W32(c->r[1]+0x00000130u,c->r[0]); // 8014CEC8
  W32(c->r[1]+0x00000134u,c->r[0]); // 8014CECC
  W32(c->r[1]+0x00000138u,c->r[0]); // 8014CED0
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8014CED4
  W32(c->r[1]+0x00000140u,c->r[0]); // 8014CED8
  if (!crb(c,2)) { goto L_8014CF00; } // 8014CEDC
  c->r[4]=0u+0x802D0000u; // 8014CEE0
  c->r[5]=c->r[29]|c->r[29]; // 8014CEE4
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014CEE8
  c->r[3]=0u+0x00000000u; // 8014CEEC
  c->r[4]=c->r[4]+0x0000048Fu; // 8014CEF0
  c->lr=0x8014CEF8u; f_801794C0(c); // 8014CEF4
  c->r[0]=0u+0x00000000u; // 8014CEF8
  goto L_8014DAE0; // 8014CEFC
L_8014CF00:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014CF00
  cmpu(c,0,c->r[4],c->r[0]); // 8014CF04
  if (crb(c,0)) { goto L_8014CF14; } // 8014CF08
  c->r[3]=0u+0x00000000u; // 8014CF0C
  goto L_8014DAD4; // 8014CF10
L_8014CF14:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CF14
  c->r[5]=0u+0x00000000u; // 8014CF18
  c->lr=0x8014CF20u; f_8017B030(c); // 8014CF1C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014CF20
  c->r[4]=c->r[29]|c->r[29]; // 8014CF24
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CF28
  c->r[5]=0u+0x00000001u; // 8014CF2C
  c->lr=0x8014CF34u; f_8017AB54(c); // 8014CF30
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014CF34
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014CF38
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CF3C
  c->r[4]=c->r[29]|c->r[29]; // 8014CF40
  c->r[5]=0u+0x00000002u; // 8014CF44
  c->lr=0x8014CF4Cu; f_8017AB54(c); // 8014CF48
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014CF4C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014CF50
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CF54
  c->r[4]=c->r[29]|c->r[29]; // 8014CF58
  c->r[5]=0u+0x00000003u; // 8014CF5C
  c->lr=0x8014CF64u; f_8017B030(c); // 8014CF60
  W32(c->r[1]+0x00000014u,c->r[3]); // 8014CF64
  c->r[4]=c->r[29]|c->r[29]; // 8014CF68
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CF6C
  c->r[5]=0u+0x00000004u; // 8014CF70
  c->lr=0x8014CF78u; f_8017B030(c); // 8014CF74
  W32(c->r[1]+0x00000018u,c->r[3]); // 8014CF78
  c->r[4]=c->r[29]|c->r[29]; // 8014CF7C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CF80
  c->r[5]=0u+0x00000005u; // 8014CF84
  c->lr=0x8014CF8Cu; f_8017ADA8(c); // 8014CF88
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014CF8C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014CF90
  c->r[0]=c->r[0]^0x80000000u; // 8014CF94
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014CF98
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014CF9C
  c->r[4]=c->r[29]|c->r[29]; // 8014CFA0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014CFA4
  c->r[5]=0u+0x00000006u; // 8014CFA8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CFAC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014CFB0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014CFB4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014CFB8
  c->lr=0x8014CFC0u; f_8017ADA8(c); // 8014CFBC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014CFC0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014CFC4
  c->r[0]=c->r[0]^0x80000000u; // 8014CFC8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014CFCC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014CFD0
  c->r[4]=c->r[29]|c->r[29]; // 8014CFD4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014CFD8
  c->r[5]=0u+0x00000007u; // 8014CFDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014CFE0
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8014CFE4
  c->lr=0x8014CFECu; f_8017ADCC(c); // 8014CFE8
  W32(c->r[1]+0x00000164u,c->r[3]); // 8014CFEC
  c->r[4]=c->r[29]|c->r[29]; // 8014CFF0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014CFF4
  c->r[5]=0u+0x00000009u; // 8014CFF8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014CFFC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D000
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D004
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8014D008
  c->lr=0x8014D010u; f_8017AC94(c); // 8014D00C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D010
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D014
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D018
  c->r[4]=c->r[29]|c->r[29]; // 8014D01C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D020
  c->r[5]=0u+0x0000000Au; // 8014D024
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D028
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D02C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8014D030
  c->lr=0x8014D038u; f_8017AC94(c); // 8014D034
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D038
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D03C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D040
  c->r[4]=c->r[29]|c->r[29]; // 8014D044
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014D048
  c->r[5]=0u+0x0000000Bu; // 8014D04C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D050
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D054
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014D058
  c->lr=0x8014D060u; f_8017AC94(c); // 8014D05C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D060
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D064
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D068
  c->r[4]=c->r[29]|c->r[29]; // 8014D06C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D070
  c->r[5]=0u+0x0000000Cu; // 8014D074
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D078
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D07C
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8014D080
  c->lr=0x8014D088u; f_8017AC94(c); // 8014D084
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D088
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D08C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D090
  c->r[4]=c->r[29]|c->r[29]; // 8014D094
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014D098
  c->r[5]=0u+0x0000000Du; // 8014D09C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D0A0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D0A4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8014D0A8
  c->lr=0x8014D0B0u; f_8017AC94(c); // 8014D0AC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D0B0
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D0B4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D0B8
  c->r[4]=c->r[29]|c->r[29]; // 8014D0BC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D0C0
  c->r[5]=0u+0x0000000Eu; // 8014D0C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D0C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D0CC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8014D0D0
  c->lr=0x8014D0D8u; f_8017AC94(c); // 8014D0D4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D0D8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D0DC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D0E0
  c->r[4]=c->r[29]|c->r[29]; // 8014D0E4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D0E8
  c->r[5]=0u+0x00000014u; // 8014D0EC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D0F0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D0F4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D0F8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D0FC
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014D100
  c->lr=0x8014D108u; f_8017B030(c); // 8014D104
  W32(c->r[1]+0x000000D8u,c->r[3]); // 8014D108
  c->r[4]=c->r[29]|c->r[29]; // 8014D10C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D110
  c->r[5]=0u+0x00000015u; // 8014D114
  c->lr=0x8014D11Cu; f_8017B030(c); // 8014D118
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8014D11C
  c->r[27]=c->r[1]+0x00000008u; // 8014D120
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014D124
  c->r[28]=0u+0x00000000u; // 8014D128
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014D12C
L_8014D130:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D130
  c->r[4]=c->r[29]|c->r[29]; // 8014D134
  c->r[5]=c->r[28]+0x00000016u; // 8014D138
  c->lr=0x8014D140u; f_8017AC94(c); // 8014D13C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D140
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D144
  c->r[28]=c->r[28]+0x00000001u; // 8014D148
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D14C
  cmpu(c,0,c->r[28],0x00000008u); // 8014D150
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014D154
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014D158
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 8014D15C
  c->r[27]=c->r[27]+0x00000004u; // 8014D160
  if (crb(c,0)) { IRQCHK(c); goto L_8014D130; } // 8014D164
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D168
  c->r[4]=c->r[29]|c->r[29]; // 8014D16C
  c->r[5]=0u+0x0000001Eu; // 8014D170
  c->lr=0x8014D178u; f_8017B030(c); // 8014D174
  W32(c->r[1]+0x00000120u,c->r[3]); // 8014D178
  c->r[27]=c->r[1]+0x00000008u; // 8014D17C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014D180
  c->r[28]=0u+0x00000000u; // 8014D184
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014D188
L_8014D18C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D18C
  c->r[4]=c->r[29]|c->r[29]; // 8014D190
  c->r[5]=c->r[28]+0x0000001Fu; // 8014D194
  c->lr=0x8014D19Cu; f_8017AC94(c); // 8014D198
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D19C
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D1A0
  c->r[28]=c->r[28]+0x00000001u; // 8014D1A4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014D1A8
  cmpu(c,0,c->r[28],0x00000008u); // 8014D1AC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014D1B0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014D1B4
  {uint32_t ea=c->r[27]+0x000000D8u; WF32(ea,c->f[0]);} // 8014D1B8
  c->r[27]=c->r[27]+0x00000004u; // 8014D1BC
  if (crb(c,0)) { IRQCHK(c); goto L_8014D18C; } // 8014D1C0
  c->r[27]=c->r[1]+0x00000008u; // 8014D1C4
  c->r[28]=0u+0x00000000u; // 8014D1C8
L_8014D1CC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D1CC
  c->r[4]=c->r[29]|c->r[29]; // 8014D1D0
  c->r[5]=c->r[28]+0x00000027u; // 8014D1D4
  c->lr=0x8014D1DCu; f_8017B030(c); // 8014D1D8
  c->r[28]=c->r[28]+0x00000001u; // 8014D1DC
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8014D1E0
  cmpu(c,0,c->r[28],0x00000008u); // 8014D1E4
  c->r[27]=c->r[27]+0x00000004u; // 8014D1E8
  if (crb(c,0)) { IRQCHK(c); goto L_8014D1CC; } // 8014D1EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D1F0
  c->r[4]=c->r[29]|c->r[29]; // 8014D1F4
  c->r[5]=0u+0x0000002Fu; // 8014D1F8
  c->lr=0x8014D200u; f_8017B030(c); // 8014D1FC
  W32(c->r[1]+0x00000084u,c->r[3]); // 8014D200
  c->r[4]=c->r[29]|c->r[29]; // 8014D204
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D208
  c->r[5]=0u+0x00000030u; // 8014D20C
  c->lr=0x8014D214u; f_8017AB54(c); // 8014D210
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014D214
  W32(c->r[1]+0x00000080u,c->r[0]); // 8014D218
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D21C
  c->r[4]=c->r[29]|c->r[29]; // 8014D220
  c->r[5]=0u+0x00000031u; // 8014D224
  c->lr=0x8014D22Cu; f_8017AB54(c); // 8014D228
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014D22C
  W32(c->r[1]+0x00000088u,c->r[0]); // 8014D230
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D234
  c->r[4]=c->r[29]|c->r[29]; // 8014D238
  c->r[5]=0u+0x00000032u; // 8014D23C
  c->lr=0x8014D244u; f_8017AC94(c); // 8014D240
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D244
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D248
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D24C
  c->r[4]=c->r[29]|c->r[29]; // 8014D250
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D254
  c->r[5]=0u+0x00000033u; // 8014D258
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D25C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D260
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8014D264
  c->lr=0x8014D26Cu; f_8017AC70(c); // 8014D268
  W8(c->r[1]+0x00000090u,c->r[3]); // 8014D26C
  c->r[28]=0u+0x00000000u; // 8014D270
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D274
  W32(c->r[1]+0x00000094u,c->r[28]); // 8014D278
  c->lr=0x8014D280u; f_8017A6AC(c); // 8014D27C
  cmpu(c,0,c->r[3],0x00000034u); // 8014D280
  if (crb(c,1)) { goto L_8014D4F4; } // 8014D284
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D288
  c->r[6]=0u+0x00000002u; // 8014D28C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D290
  c->r[0]=0u+0x00000005u; // 8014D294
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8014D298
  c->r[4]=c->r[29]|c->r[29]; // 8014D29C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D2A0
  c->r[5]=0u+0x00000010u; // 8014D2A4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8014D2A8
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8014D2AC
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 8014D2B0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 8014D2B4
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 8014D2B8
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 8014D2BC
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 8014D2C0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 8014D2C4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8014D2C8
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 8014D2CC
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 8014D2D0
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 8014D2D4
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8014D2D8
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 8014D2DC
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 8014D2E0
  W32(c->r[1]+0x00000040u,c->r[28]); // 8014D2E4
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014D2E8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8014D2EC
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014D2F0
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014D2F4
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014D2F8
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014D2FC
  W8(c->r[1]+0x0000005Cu,c->r[6]); // 8014D300
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014D304
  c->lr=0x8014D30Cu; f_8017AC94(c); // 8014D308
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D30C
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D310
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D314
  c->r[4]=c->r[29]|c->r[29]; // 8014D318
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014D31C
  c->r[5]=0u+0x00000011u; // 8014D320
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D324
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8014D328
  c->lr=0x8014D330u; f_8017AC94(c); // 8014D32C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D330
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D334
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014D338
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D33C
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8014D340
  fcmp(c,0,c->f[29],c->f[31]); // 8014D344
  if (crb(c,2)) { goto L_8014D4A8; } // 8014D348
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D34C
  fcmp(c,0,c->f[29],c->f[0]); // 8014D350
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D354
  if (!crb(c,2)) { goto L_8014D360; } // 8014D358
  goto L_8014D364; // 8014D35C
L_8014D360:;
  c->f[29]=c->f[0]; // 8014D360
L_8014D364:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D364
  fcmp(c,0,c->f[29],c->f[0]); // 8014D368
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D36C
  if (!crb(c,2)) { goto L_8014D378; } // 8014D370
  goto L_8014D37C; // 8014D374
L_8014D378:;
  c->f[29]=c->f[0]; // 8014D378
L_8014D37C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D37C
  c->lr=0x8014D384u; f_800C02CC(c); // 8014D380
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D384
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8014D388
  c->f[1]=c->f[0]; // 8014D38C
  c->lr=0x8014D394u; f_800C02CC(c); // 8014D390
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D394
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D398
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D39C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 8014D3A0
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014D3A4
  c->lr=0x8014D3ACu; f_800C02CC(c); // 8014D3A8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014D3AC
  c->f[1]=c->f[29]; // 8014D3B0
  c->lr=0x8014D3B8u; f_800C02CC(c); // 8014D3B4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D3B8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D3BC
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D3C0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014D3C4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014D3C8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014D3CC
  fcmp(c,0,c->f[1],c->f[0]); // 8014D3D0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D3D4
  if (!crb(c,2)) { goto L_8014D3E0; } // 8014D3D8
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D3DC
L_8014D3E0:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D3E0
  fcmp(c,0,c->f[1],c->f[0]); // 8014D3E4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D3E8
  if (!crb(c,2)) { goto L_8014D3F4; } // 8014D3EC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D3F0
L_8014D3F4:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D3F4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014D3F8
  fcmp(c,0,c->f[31],c->f[0]); // 8014D3FC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D400
  if (!crb(c,2)) { goto L_8014D40C; } // 8014D404
  goto L_8014D410; // 8014D408
L_8014D40C:;
  c->f[31]=c->f[0]; // 8014D40C
L_8014D410:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D410
  fcmp(c,0,c->f[31],c->f[0]); // 8014D414
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D418
  if (!crb(c,2)) { goto L_8014D424; } // 8014D41C
  goto L_8014D428; // 8014D420
L_8014D424:;
  c->f[31]=c->f[0]; // 8014D424
L_8014D428:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D428
  c->lr=0x8014D430u; f_800C02CC(c); // 8014D42C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D430
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014D434
  c->f[1]=c->f[0]; // 8014D438
  c->lr=0x8014D440u; f_800C02CC(c); // 8014D43C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D440
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D444
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D448
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014D44C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014D450
  c->lr=0x8014D458u; f_800C02CC(c); // 8014D454
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014D458
  c->f[1]=c->f[31]; // 8014D45C
  c->lr=0x8014D464u; f_800C02CC(c); // 8014D460
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D464
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D468
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D46C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014D470
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014D474
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014D478
  fcmp(c,0,c->f[1],c->f[0]); // 8014D47C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D480
  if (!crb(c,2)) { goto L_8014D48C; } // 8014D484
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D488
L_8014D48C:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D48C
  fcmp(c,0,c->f[1],c->f[0]); // 8014D490
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D494
  if (!crb(c,2)) { goto L_8014D4A0; } // 8014D498
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D49C
L_8014D4A0:;
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014D4A0
  goto L_8014D4B8; // 8014D4A4
L_8014D4A8:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D4A8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D4AC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014D4B0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014D4B4
L_8014D4B8:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D4B8
  c->r[0]=0u+0x00000002u; // 8014D4BC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D4C0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014D4C4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8014D4C8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8014D4CC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8014D4D0
  W8(c->r[1]+0x0000007Cu,c->r[0]); // 8014D4D4
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014D4D8
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014D4DC
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014D4E0
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014D4E4
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014D4E8
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014D4EC
  goto L_8014DA68; // 8014D4F0
L_8014D4F4:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014D4F4
  c->r[27]=c->r[1]+0x00000008u; // 8014D4F8
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014D4FC
  c->r[28]=0u+0x00000000u; // 8014D500
L_8014D504:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D504
  c->r[4]=c->r[29]|c->r[29]; // 8014D508
  c->r[5]=c->r[28]+0x0000003Au; // 8014D50C
  c->lr=0x8014D514u; f_8017AC94(c); // 8014D510
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D514
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D518
  c->r[28]=c->r[28]+0x00000001u; // 8014D51C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014D520
  cmpu(c,0,c->r[28],0x00000008u); // 8014D524
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014D528
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014D52C
  {uint32_t ea=c->r[27]+0x000000B0u; WF32(ea,c->f[0]);} // 8014D530
  c->r[27]=c->r[27]+0x00000004u; // 8014D534
  if (crb(c,0)) { IRQCHK(c); goto L_8014D504; } // 8014D538
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 8014D53C
  c->r[27]=c->r[1]+0x00000008u; // 8014D540
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014D544
  c->r[28]=0u+0x00000000u; // 8014D548
L_8014D54C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D54C
  c->r[4]=c->r[29]|c->r[29]; // 8014D550
  c->r[5]=c->r[28]+0x00000042u; // 8014D554
  c->lr=0x8014D55Cu; f_8017AC94(c); // 8014D558
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D55C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D560
  c->r[28]=c->r[28]+0x00000001u; // 8014D564
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014D568
  cmpu(c,0,c->r[28],0x00000008u); // 8014D56C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8014D570
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 8014D574
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 8014D578
  c->r[27]=c->r[27]+0x00000004u; // 8014D57C
  if (crb(c,0)) { IRQCHK(c); goto L_8014D54C; } // 8014D580
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D584
  c->r[4]=c->r[29]|c->r[29]; // 8014D588
  c->r[5]=0u+0x0000004Au; // 8014D58C
  c->lr=0x8014D594u; f_8017AB54(c); // 8014D590
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014D594
  W32(c->r[1]+0x00000040u,c->r[0]); // 8014D598
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D59C
  c->r[4]=c->r[29]|c->r[29]; // 8014D5A0
  c->r[5]=0u+0x0000004Bu; // 8014D5A4
  c->lr=0x8014D5ACu; f_8017AC94(c); // 8014D5A8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D5AC
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D5B0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D5B4
  c->r[4]=c->r[29]|c->r[29]; // 8014D5B8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D5BC
  c->r[5]=0u+0x0000004Cu; // 8014D5C0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D5C4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D5C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D5CC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D5D0
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014D5D4
  c->lr=0x8014D5DCu; f_8017AC94(c); // 8014D5D8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D5DC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D5E0
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D5E4
  c->r[4]=c->r[29]|c->r[29]; // 8014D5E8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014D5EC
  c->r[5]=0u+0x0000004Du; // 8014D5F0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014D5F4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D5F8
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 8014D5FC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014D600
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8014D604
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D608
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 8014D60C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014D610
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8014D614
  c->lr=0x8014D61Cu; f_8017AC94(c); // 8014D618
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D61C
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D620
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D624
  c->r[4]=c->r[29]|c->r[29]; // 8014D628
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D62C
  c->r[5]=0u+0x0000004Eu; // 8014D630
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D634
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D638
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D63C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D640
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014D644
  c->lr=0x8014D64Cu; f_8017AC94(c); // 8014D648
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D64C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D650
  c->r[3]=0u+0x00000002u; // 8014D654
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D658
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014D65C
  c->r[0]=0u+0x00000005u; // 8014D660
  W8(c->r[1]+0x0000005Cu,c->r[3]); // 8014D664
  c->r[4]=c->r[29]|c->r[29]; // 8014D668
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D66C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D670
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D674
  c->r[5]=0u+0x00000010u; // 8014D678
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014D67C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D680
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014D684
  c->lr=0x8014D68Cu; f_8017AC94(c); // 8014D688
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D68C
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D690
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D694
  c->r[4]=c->r[29]|c->r[29]; // 8014D698
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D69C
  c->r[5]=0u+0x00000011u; // 8014D6A0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D6A4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D6A8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D6AC
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 8014D6B0
  c->lr=0x8014D6B8u; f_8017AC94(c); // 8014D6B4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D6B8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D6BC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D6C0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014D6C4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014D6C8
  fcmp(c,0,c->f[0],c->f[28]); // 8014D6CC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D6D0
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8014D6D4
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 8014D6D8
  if (!crb(c,2)) { goto L_8014D7AC; } // 8014D6DC
  fcmp(c,0,c->f[0],c->f[31]); // 8014D6E0
  if (!crb(c,2)) { goto L_8014D7AC; } // 8014D6E4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D6E8
  c->r[4]=c->r[29]|c->r[29]; // 8014D6EC
  c->r[5]=0u+0x00000050u; // 8014D6F0
  c->lr=0x8014D6F8u; f_8017AC94(c); // 8014D6F4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D6F8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D6FC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D700
  c->r[4]=c->r[29]|c->r[29]; // 8014D704
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D708
  c->r[5]=0u+0x00000051u; // 8014D70C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D710
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D714
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D718
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D71C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8014D720
  c->lr=0x8014D728u; f_8017AC94(c); // 8014D724
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D728
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D72C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D730
  c->r[4]=c->r[29]|c->r[29]; // 8014D734
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014D738
  c->r[5]=0u+0x00000052u; // 8014D73C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D740
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D744
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D748
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D74C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8014D750
  c->lr=0x8014D758u; f_8017AC94(c); // 8014D754
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D758
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D75C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D760
  c->r[4]=c->r[29]|c->r[29]; // 8014D764
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D768
  c->r[5]=0u+0x00000053u; // 8014D76C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D770
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D774
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D778
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D77C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014D780
  c->lr=0x8014D788u; f_8017AC94(c); // 8014D784
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014D788
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D78C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014D790
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014D794
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D798
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D79C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D7A0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014D7A4
  goto L_8014D914; // 8014D7A8
L_8014D7AC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D7AC
  fcmp(c,0,c->f[28],c->f[0]); // 8014D7B0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D7B4
  if (!crb(c,2)) { goto L_8014D7C0; } // 8014D7B8
  goto L_8014D7C4; // 8014D7BC
L_8014D7C0:;
  c->f[28]=c->f[0]; // 8014D7C0
L_8014D7C4:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D7C4
  fcmp(c,0,c->f[28],c->f[0]); // 8014D7C8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D7CC
  if (!crb(c,2)) { goto L_8014D7D8; } // 8014D7D0
  goto L_8014D7DC; // 8014D7D4
L_8014D7D8:;
  c->f[28]=c->f[0]; // 8014D7D8
L_8014D7DC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D7DC
  c->lr=0x8014D7E4u; f_800C02CC(c); // 8014D7E0
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D7E4
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014D7E8
  c->f[1]=c->f[0]; // 8014D7EC
  c->lr=0x8014D7F4u; f_800C02CC(c); // 8014D7F0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D7F4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D7F8
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D7FC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014D800
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014D804
  c->lr=0x8014D80Cu; f_800C02CC(c); // 8014D808
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014D80C
  c->f[1]=c->f[28]; // 8014D810
  c->lr=0x8014D818u; f_800C02CC(c); // 8014D814
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D818
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D81C
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D820
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014D824
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014D828
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 8014D82C
  fcmp(c,0,c->f[2],c->f[0]); // 8014D830
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D834
  if (!crb(c,2)) { goto L_8014D840; } // 8014D838
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014D83C
L_8014D840:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D840
  fcmp(c,0,c->f[2],c->f[0]); // 8014D844
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D848
  if (!crb(c,2)) { goto L_8014D854; } // 8014D84C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014D850
L_8014D854:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D854
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D858
  fcmp(c,0,c->f[31],c->f[0]); // 8014D85C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 8014D860
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014D864
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D868
  if (!crb(c,2)) { goto L_8014D874; } // 8014D86C
  goto L_8014D878; // 8014D870
L_8014D874:;
  c->f[31]=c->f[0]; // 8014D874
L_8014D878:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D878
  fcmp(c,0,c->f[31],c->f[0]); // 8014D87C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D880
  if (!crb(c,2)) { goto L_8014D88C; } // 8014D884
  goto L_8014D890; // 8014D888
L_8014D88C:;
  c->f[31]=c->f[0]; // 8014D88C
L_8014D890:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D890
  c->lr=0x8014D898u; f_800C02CC(c); // 8014D894
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D898
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014D89C
  c->f[1]=c->f[0]; // 8014D8A0
  c->lr=0x8014D8A8u; f_800C02CC(c); // 8014D8A4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D8A8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D8AC
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D8B0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014D8B4
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014D8B8
  c->lr=0x8014D8C0u; f_800C02CC(c); // 8014D8BC
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014D8C0
  c->f[1]=c->f[31]; // 8014D8C4
  c->lr=0x8014D8CCu; f_800C02CC(c); // 8014D8C8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014D8CC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D8D0
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D8D4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014D8D8
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014D8DC
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014D8E0
  fcmp(c,0,c->f[1],c->f[0]); // 8014D8E4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014D8E8
  if (!crb(c,2)) { goto L_8014D8F4; } // 8014D8EC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D8F0
L_8014D8F4:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D8F4
  fcmp(c,0,c->f[1],c->f[0]); // 8014D8F8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014D8FC
  if (!crb(c,2)) { goto L_8014D908; } // 8014D900
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D904
L_8014D908:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D908
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014D90C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014D910
L_8014D914:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014D914
  c->r[4]=c->r[29]|c->r[29]; // 8014D918
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D91C
  c->r[5]=0u+0x00000013u; // 8014D920
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8014D924
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D928
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8014D92C
  c->lr=0x8014D934u; f_8017AB54(c); // 8014D930
  W8(c->r[1]+0x0000007Cu,c->r[3]); // 8014D934
  c->r[4]=c->r[29]|c->r[29]; // 8014D938
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D93C
  c->r[5]=0u+0x00000034u; // 8014D940
  c->lr=0x8014D948u; f_8017ADA8(c); // 8014D944
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014D948
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014D94C
  c->r[0]=c->r[0]^0x80000000u; // 8014D950
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D954
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D958
  c->r[4]=c->r[29]|c->r[29]; // 8014D95C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014D960
  c->r[5]=0u+0x00000035u; // 8014D964
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D968
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D96C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D970
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014D974
  c->lr=0x8014D97Cu; f_8017ADA8(c); // 8014D978
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014D97C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014D980
  c->r[0]=c->r[0]^0x80000000u; // 8014D984
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D988
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D98C
  c->r[4]=c->r[29]|c->r[29]; // 8014D990
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014D994
  c->r[5]=0u+0x00000036u; // 8014D998
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D99C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014D9A0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014D9A4
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014D9A8
  c->lr=0x8014D9B0u; f_8017ADA8(c); // 8014D9AC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014D9B0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014D9B4
  c->r[0]=c->r[0]^0x80000000u; // 8014D9B8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014D9BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D9C0
  c->r[4]=c->r[29]|c->r[29]; // 8014D9C4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014D9C8
  c->r[5]=0u+0x00000037u; // 8014D9CC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014D9D0
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014D9D4
  c->lr=0x8014D9DCu; f_8017ADA8(c); // 8014D9D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014D9DC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014D9E0
  c->r[0]=c->r[0]^0x80000000u; // 8014D9E4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014D9E8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014D9EC
  c->r[4]=c->r[29]|c->r[29]; // 8014D9F0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014D9F4
  c->r[5]=0u+0x00000038u; // 8014D9F8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014D9FC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014DA00
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014DA04
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014DA08
  c->lr=0x8014DA10u; f_8017ADA8(c); // 8014DA0C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014DA10
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014DA14
  c->r[0]=c->r[0]^0x80000000u; // 8014DA18
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014DA1C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014DA20
  c->r[4]=c->r[29]|c->r[29]; // 8014DA24
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014DA28
  c->r[5]=0u+0x00000039u; // 8014DA2C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DA30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014DA34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014DA38
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014DA3C
  c->lr=0x8014DA44u; f_8017ADA8(c); // 8014DA40
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014DA44
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014DA48
  c->r[0]=c->r[0]^0x80000000u; // 8014DA4C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DA50
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014DA54
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014DA58
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014DA5C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014DA60
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014DA64
L_8014DA68:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DA68
  c->lr=0x8014DA70u; f_8017A6AC(c); // 8014DA6C
  cmpu(c,0,c->r[3],0x00000054u); // 8014DA70
  if (crb(c,1)) { goto L_8014DA94; } // 8014DA74
  c->r[4]=0u+0x00000064u; // 8014DA78
  c->r[3]=0u+0x00000000u; // 8014DA7C
  c->r[0]=0u+0x00000001u; // 8014DA80
  W8(c->r[1]+0x0000015Cu,c->r[4]); // 8014DA84
  W8(c->r[1]+0x0000015Du,c->r[3]); // 8014DA88
  W8(c->r[1]+0x0000015Eu,c->r[0]); // 8014DA8C
  goto L_8014DAD0; // 8014DA90
L_8014DA94:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DA94
  c->r[4]=c->r[29]|c->r[29]; // 8014DA98
  c->r[5]=0u+0x00000054u; // 8014DA9C
  c->lr=0x8014DAA4u; f_8017AB54(c); // 8014DAA0
  W8(c->r[1]+0x0000015Cu,c->r[3]); // 8014DAA4
  c->r[4]=c->r[29]|c->r[29]; // 8014DAA8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DAAC
  c->r[5]=0u+0x00000055u; // 8014DAB0
  c->lr=0x8014DAB8u; f_8017AB54(c); // 8014DAB4
  W8(c->r[1]+0x0000015Du,c->r[3]); // 8014DAB8
  c->r[4]=c->r[29]|c->r[29]; // 8014DABC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DAC0
  c->r[5]=0u+0x00000056u; // 8014DAC4
  c->lr=0x8014DACCu; f_8017AB54(c); // 8014DAC8
  W8(c->r[1]+0x0000015Eu,c->r[3]); // 8014DACC
L_8014DAD0:;
  c->r[3]=0u+0x00000001u; // 8014DAD0
L_8014DAD4:;
  c->r[0]=0u-c->r[3]; // 8014DAD4
  c->r[0]=c->r[0]|c->r[3]; // 8014DAD8
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014DADC
L_8014DAE0:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014DAE0
  if (!crb(c,2)) { goto L_8014DAF8; } // 8014DAE4
  c->r[0]=0u+0xFFFFFFFFu; // 8014DAE8
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014DAEC
  c->r[3]=0u+0x00000000u; // 8014DAF0
  goto L_8014DB2C; // 8014DAF4
L_8014DAF8:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 8014DAF8
  cmps(c,0,(int32_t)c->r[0],0); // 8014DAFC
  if (crb(c,2)) { goto L_8014DB10; } // 8014DB00
  cmps(c,0,(int32_t)c->r[0],1); // 8014DB04
  if (crb(c,2)) { goto L_8014DB18; } // 8014DB08
  goto L_8014DB20; // 8014DB0C
L_8014DB10:;
  c->r[3]=0u+0x00000000u; // 8014DB10
  goto L_8014DB2C; // 8014DB14
L_8014DB18:;
  c->r[3]=0u+0x00000001u; // 8014DB18
  goto L_8014DB2C; // 8014DB1C
L_8014DB20:;
  c->r[0]=0u+0xFFFFFFFFu; // 8014DB20
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014DB24
  c->r[3]=0u+0x00000000u; // 8014DB28
L_8014DB2C:;
  c->r[11]=c->r[1]+0x00000190u; // 8014DB2C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8014DB30
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 8014DB34
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 8014DB38
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 8014DB3C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 8014DB40
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 8014DB44
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 8014DB48
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8014DB4C
  c->lr=0x8014DB54u; f_800ADA78(c); // 8014DB50
  c->r[0]=R32(c->r[1]+0x000001D4u); // 8014DB54
  c->lr=c->r[0]; // 8014DB58
  c->r[1]=c->r[1]+0x000001D0u; // 8014DB5C
  return; // 8014DB60
}

// GetNumberOfChildSynth__16CriAuCueSheetLocFUlR8CriError
void f_8014DB64(Ctx* __restrict c) {
  trace_call(0x8014DB64u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014DB64
  c->r[0]=c->lr; // 8014DB68
  W32(c->r[1]+0x000001D4u,c->r[0]); // 8014DB6C
  c->r[11]=c->r[1]+0x00000190u; // 8014DB70
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8014DB74
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 8014DB78
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 8014DB7C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 8014DB80
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8014DB84
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 8014DB88
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 8014DB8C
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 8014DB90
  c->lr=0x8014DB98u; f_800ADA2C(c); // 8014DB94
  c->r[0]=0u+0x00000000u; // 8014DB98
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014DB9C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014DBA0
  c->r[6]=0u+0x43300000u; // 8014DBA4
  c->r[31]=R32(c->r[3]+0x00000020u); // 8014DBA8
  c->r[29]=c->r[4]|c->r[4]; // 8014DBAC
  W32(c->r[1]+0x00000160u,c->r[6]); // 8014DBB0
  c->r[30]=c->r[5]|c->r[5]; // 8014DBB4
  cmps(c,0,(int32_t)c->r[31],0); // 8014DBB8
  W32(c->r[1]+0x00000168u,c->r[6]); // 8014DBBC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014DBC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014DBC4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8014DBC8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8014DBCC
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8014DBD0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8014DBD4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8014DBD8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8014DBDC
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8014DBE0
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8014DBE4
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8014DBE8
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8014DBEC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8014DBF0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8014DBF4
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8014DBF8
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8014DBFC
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8014DC00
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8014DC04
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 8014DC08
  W32(c->r[1]+0x000000D8u,c->r[0]); // 8014DC0C
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8014DC10
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 8014DC14
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8014DC18
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8014DC1C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8014DC20
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8014DC24
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 8014DC28
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8014DC2C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8014DC30
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8014DC34
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8014DC38
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8014DC3C
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8014DC40
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 8014DC44
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8014DC48
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8014DC4C
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8014DC50
  W32(c->r[1]+0x00000120u,c->r[0]); // 8014DC54
  W32(c->r[1]+0x00000124u,c->r[0]); // 8014DC58
  W32(c->r[1]+0x00000128u,c->r[0]); // 8014DC5C
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8014DC60
  W32(c->r[1]+0x00000130u,c->r[0]); // 8014DC64
  W32(c->r[1]+0x00000134u,c->r[0]); // 8014DC68
  W32(c->r[1]+0x00000138u,c->r[0]); // 8014DC6C
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8014DC70
  W32(c->r[1]+0x00000140u,c->r[0]); // 8014DC74
  if (!crb(c,2)) { goto L_8014DC9C; } // 8014DC78
  c->r[4]=0u+0x802D0000u; // 8014DC7C
  c->r[5]=c->r[29]|c->r[29]; // 8014DC80
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014DC84
  c->r[3]=0u+0x00000000u; // 8014DC88
  c->r[4]=c->r[4]+0x0000048Fu; // 8014DC8C
  c->lr=0x8014DC94u; f_801794C0(c); // 8014DC90
  c->r[0]=0u+0x00000000u; // 8014DC94
  goto L_8014E87C; // 8014DC98
L_8014DC9C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014DC9C
  cmpu(c,0,c->r[4],c->r[0]); // 8014DCA0
  if (crb(c,0)) { goto L_8014DCB0; } // 8014DCA4
  c->r[3]=0u+0x00000000u; // 8014DCA8
  goto L_8014E870; // 8014DCAC
L_8014DCB0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DCB0
  c->r[5]=0u+0x00000000u; // 8014DCB4
  c->lr=0x8014DCBCu; f_8017B030(c); // 8014DCB8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014DCBC
  c->r[4]=c->r[29]|c->r[29]; // 8014DCC0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DCC4
  c->r[5]=0u+0x00000001u; // 8014DCC8
  c->lr=0x8014DCD0u; f_8017AB54(c); // 8014DCCC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014DCD0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014DCD4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DCD8
  c->r[4]=c->r[29]|c->r[29]; // 8014DCDC
  c->r[5]=0u+0x00000002u; // 8014DCE0
  c->lr=0x8014DCE8u; f_8017AB54(c); // 8014DCE4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014DCE8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014DCEC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DCF0
  c->r[4]=c->r[29]|c->r[29]; // 8014DCF4
  c->r[5]=0u+0x00000003u; // 8014DCF8
  c->lr=0x8014DD00u; f_8017B030(c); // 8014DCFC
  W32(c->r[1]+0x00000014u,c->r[3]); // 8014DD00
  c->r[4]=c->r[29]|c->r[29]; // 8014DD04
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DD08
  c->r[5]=0u+0x00000004u; // 8014DD0C
  c->lr=0x8014DD14u; f_8017B030(c); // 8014DD10
  W32(c->r[1]+0x00000018u,c->r[3]); // 8014DD14
  c->r[4]=c->r[29]|c->r[29]; // 8014DD18
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DD1C
  c->r[5]=0u+0x00000005u; // 8014DD20
  c->lr=0x8014DD28u; f_8017ADA8(c); // 8014DD24
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014DD28
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014DD2C
  c->r[0]=c->r[0]^0x80000000u; // 8014DD30
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014DD34
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014DD38
  c->r[4]=c->r[29]|c->r[29]; // 8014DD3C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014DD40
  c->r[5]=0u+0x00000006u; // 8014DD44
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DD48
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014DD4C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014DD50
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014DD54
  c->lr=0x8014DD5Cu; f_8017ADA8(c); // 8014DD58
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014DD5C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014DD60
  c->r[0]=c->r[0]^0x80000000u; // 8014DD64
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DD68
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DD6C
  c->r[4]=c->r[29]|c->r[29]; // 8014DD70
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014DD74
  c->r[5]=0u+0x00000007u; // 8014DD78
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DD7C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8014DD80
  c->lr=0x8014DD88u; f_8017ADCC(c); // 8014DD84
  W32(c->r[1]+0x00000164u,c->r[3]); // 8014DD88
  c->r[4]=c->r[29]|c->r[29]; // 8014DD8C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DD90
  c->r[5]=0u+0x00000009u; // 8014DD94
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014DD98
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DD9C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DDA0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8014DDA4
  c->lr=0x8014DDACu; f_8017AC94(c); // 8014DDA8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DDAC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DDB0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DDB4
  c->r[4]=c->r[29]|c->r[29]; // 8014DDB8
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014DDBC
  c->r[5]=0u+0x0000000Au; // 8014DDC0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DDC4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DDC8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8014DDCC
  c->lr=0x8014DDD4u; f_8017AC94(c); // 8014DDD0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DDD4
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014DDD8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DDDC
  c->r[4]=c->r[29]|c->r[29]; // 8014DDE0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014DDE4
  c->r[5]=0u+0x0000000Bu; // 8014DDE8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DDEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DDF0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014DDF4
  c->lr=0x8014DDFCu; f_8017AC94(c); // 8014DDF8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DDFC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DE00
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DE04
  c->r[4]=c->r[29]|c->r[29]; // 8014DE08
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014DE0C
  c->r[5]=0u+0x0000000Cu; // 8014DE10
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DE14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DE18
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8014DE1C
  c->lr=0x8014DE24u; f_8017AC94(c); // 8014DE20
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DE24
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014DE28
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DE2C
  c->r[4]=c->r[29]|c->r[29]; // 8014DE30
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014DE34
  c->r[5]=0u+0x0000000Du; // 8014DE38
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DE3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DE40
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8014DE44
  c->lr=0x8014DE4Cu; f_8017AC94(c); // 8014DE48
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DE4C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DE50
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DE54
  c->r[4]=c->r[29]|c->r[29]; // 8014DE58
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014DE5C
  c->r[5]=0u+0x0000000Eu; // 8014DE60
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DE64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DE68
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8014DE6C
  c->lr=0x8014DE74u; f_8017AC94(c); // 8014DE70
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DE74
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014DE78
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014DE7C
  c->r[4]=c->r[29]|c->r[29]; // 8014DE80
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014DE84
  c->r[5]=0u+0x00000014u; // 8014DE88
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014DE8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014DE90
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DE94
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014DE98
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014DE9C
  c->lr=0x8014DEA4u; f_8017B030(c); // 8014DEA0
  W32(c->r[1]+0x000000D8u,c->r[3]); // 8014DEA4
  c->r[4]=c->r[29]|c->r[29]; // 8014DEA8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DEAC
  c->r[5]=0u+0x00000015u; // 8014DEB0
  c->lr=0x8014DEB8u; f_8017B030(c); // 8014DEB4
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8014DEB8
  c->r[27]=c->r[1]+0x00000008u; // 8014DEBC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014DEC0
  c->r[28]=0u+0x00000000u; // 8014DEC4
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014DEC8
L_8014DECC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DECC
  c->r[4]=c->r[29]|c->r[29]; // 8014DED0
  c->r[5]=c->r[28]+0x00000016u; // 8014DED4
  c->lr=0x8014DEDCu; f_8017AC94(c); // 8014DED8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DEDC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DEE0
  c->r[28]=c->r[28]+0x00000001u; // 8014DEE4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014DEE8
  cmpu(c,0,c->r[28],0x00000008u); // 8014DEEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014DEF0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014DEF4
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 8014DEF8
  c->r[27]=c->r[27]+0x00000004u; // 8014DEFC
  if (crb(c,0)) { IRQCHK(c); goto L_8014DECC; } // 8014DF00
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DF04
  c->r[4]=c->r[29]|c->r[29]; // 8014DF08
  c->r[5]=0u+0x0000001Eu; // 8014DF0C
  c->lr=0x8014DF14u; f_8017B030(c); // 8014DF10
  W32(c->r[1]+0x00000120u,c->r[3]); // 8014DF14
  c->r[27]=c->r[1]+0x00000008u; // 8014DF18
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014DF1C
  c->r[28]=0u+0x00000000u; // 8014DF20
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014DF24
L_8014DF28:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DF28
  c->r[4]=c->r[29]|c->r[29]; // 8014DF2C
  c->r[5]=c->r[28]+0x0000001Fu; // 8014DF30
  c->lr=0x8014DF38u; f_8017AC94(c); // 8014DF34
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DF38
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014DF3C
  c->r[28]=c->r[28]+0x00000001u; // 8014DF40
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014DF44
  cmpu(c,0,c->r[28],0x00000008u); // 8014DF48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014DF4C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014DF50
  {uint32_t ea=c->r[27]+0x000000D8u; WF32(ea,c->f[0]);} // 8014DF54
  c->r[27]=c->r[27]+0x00000004u; // 8014DF58
  if (crb(c,0)) { IRQCHK(c); goto L_8014DF28; } // 8014DF5C
  c->r[27]=c->r[1]+0x00000008u; // 8014DF60
  c->r[28]=0u+0x00000000u; // 8014DF64
L_8014DF68:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DF68
  c->r[4]=c->r[29]|c->r[29]; // 8014DF6C
  c->r[5]=c->r[28]+0x00000027u; // 8014DF70
  c->lr=0x8014DF78u; f_8017B030(c); // 8014DF74
  c->r[28]=c->r[28]+0x00000001u; // 8014DF78
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8014DF7C
  cmpu(c,0,c->r[28],0x00000008u); // 8014DF80
  c->r[27]=c->r[27]+0x00000004u; // 8014DF84
  if (crb(c,0)) { IRQCHK(c); goto L_8014DF68; } // 8014DF88
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DF8C
  c->r[4]=c->r[29]|c->r[29]; // 8014DF90
  c->r[5]=0u+0x0000002Fu; // 8014DF94
  c->lr=0x8014DF9Cu; f_8017B030(c); // 8014DF98
  W32(c->r[1]+0x00000084u,c->r[3]); // 8014DF9C
  c->r[4]=c->r[29]|c->r[29]; // 8014DFA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DFA4
  c->r[5]=0u+0x00000030u; // 8014DFA8
  c->lr=0x8014DFB0u; f_8017AB54(c); // 8014DFAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014DFB0
  W32(c->r[1]+0x00000080u,c->r[0]); // 8014DFB4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DFB8
  c->r[4]=c->r[29]|c->r[29]; // 8014DFBC
  c->r[5]=0u+0x00000031u; // 8014DFC0
  c->lr=0x8014DFC8u; f_8017AB54(c); // 8014DFC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014DFC8
  W32(c->r[1]+0x00000088u,c->r[0]); // 8014DFCC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DFD0
  c->r[4]=c->r[29]|c->r[29]; // 8014DFD4
  c->r[5]=0u+0x00000032u; // 8014DFD8
  c->lr=0x8014DFE0u; f_8017AC94(c); // 8014DFDC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014DFE0
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014DFE4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014DFE8
  c->r[4]=c->r[29]|c->r[29]; // 8014DFEC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014DFF0
  c->r[5]=0u+0x00000033u; // 8014DFF4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014DFF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014DFFC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8014E000
  c->lr=0x8014E008u; f_8017AC70(c); // 8014E004
  W8(c->r[1]+0x00000090u,c->r[3]); // 8014E008
  c->r[28]=0u+0x00000000u; // 8014E00C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E010
  W32(c->r[1]+0x00000094u,c->r[28]); // 8014E014
  c->lr=0x8014E01Cu; f_8017A6AC(c); // 8014E018
  cmpu(c,0,c->r[3],0x00000034u); // 8014E01C
  if (crb(c,1)) { goto L_8014E290; } // 8014E020
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E024
  c->r[6]=0u+0x00000002u; // 8014E028
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E02C
  c->r[0]=0u+0x00000005u; // 8014E030
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8014E034
  c->r[4]=c->r[29]|c->r[29]; // 8014E038
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E03C
  c->r[5]=0u+0x00000010u; // 8014E040
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8014E044
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8014E048
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 8014E04C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 8014E050
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 8014E054
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 8014E058
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 8014E05C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 8014E060
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8014E064
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 8014E068
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 8014E06C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 8014E070
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8014E074
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 8014E078
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 8014E07C
  W32(c->r[1]+0x00000040u,c->r[28]); // 8014E080
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014E084
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8014E088
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014E08C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014E090
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014E094
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014E098
  W8(c->r[1]+0x0000005Cu,c->r[6]); // 8014E09C
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014E0A0
  c->lr=0x8014E0A8u; f_8017AC94(c); // 8014E0A4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E0A8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E0AC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014E0B0
  c->r[4]=c->r[29]|c->r[29]; // 8014E0B4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014E0B8
  c->r[5]=0u+0x00000011u; // 8014E0BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E0C0
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8014E0C4
  c->lr=0x8014E0CCu; f_8017AC94(c); // 8014E0C8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E0CC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E0D0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014E0D4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014E0D8
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8014E0DC
  fcmp(c,0,c->f[29],c->f[31]); // 8014E0E0
  if (crb(c,2)) { goto L_8014E244; } // 8014E0E4
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E0E8
  fcmp(c,0,c->f[29],c->f[0]); // 8014E0EC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E0F0
  if (!crb(c,2)) { goto L_8014E0FC; } // 8014E0F4
  goto L_8014E100; // 8014E0F8
L_8014E0FC:;
  c->f[29]=c->f[0]; // 8014E0FC
L_8014E100:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E100
  fcmp(c,0,c->f[29],c->f[0]); // 8014E104
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E108
  if (!crb(c,2)) { goto L_8014E114; } // 8014E10C
  goto L_8014E118; // 8014E110
L_8014E114:;
  c->f[29]=c->f[0]; // 8014E114
L_8014E118:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E118
  c->lr=0x8014E120u; f_800C02CC(c); // 8014E11C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E120
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8014E124
  c->f[1]=c->f[0]; // 8014E128
  c->lr=0x8014E130u; f_800C02CC(c); // 8014E12C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E130
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E134
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E138
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 8014E13C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014E140
  c->lr=0x8014E148u; f_800C02CC(c); // 8014E144
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014E148
  c->f[1]=c->f[29]; // 8014E14C
  c->lr=0x8014E154u; f_800C02CC(c); // 8014E150
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E154
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E158
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E15C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014E160
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014E164
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014E168
  fcmp(c,0,c->f[1],c->f[0]); // 8014E16C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E170
  if (!crb(c,2)) { goto L_8014E17C; } // 8014E174
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E178
L_8014E17C:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E17C
  fcmp(c,0,c->f[1],c->f[0]); // 8014E180
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E184
  if (!crb(c,2)) { goto L_8014E190; } // 8014E188
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E18C
L_8014E190:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E190
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014E194
  fcmp(c,0,c->f[31],c->f[0]); // 8014E198
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E19C
  if (!crb(c,2)) { goto L_8014E1A8; } // 8014E1A0
  goto L_8014E1AC; // 8014E1A4
L_8014E1A8:;
  c->f[31]=c->f[0]; // 8014E1A8
L_8014E1AC:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E1AC
  fcmp(c,0,c->f[31],c->f[0]); // 8014E1B0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E1B4
  if (!crb(c,2)) { goto L_8014E1C0; } // 8014E1B8
  goto L_8014E1C4; // 8014E1BC
L_8014E1C0:;
  c->f[31]=c->f[0]; // 8014E1C0
L_8014E1C4:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E1C4
  c->lr=0x8014E1CCu; f_800C02CC(c); // 8014E1C8
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E1CC
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014E1D0
  c->f[1]=c->f[0]; // 8014E1D4
  c->lr=0x8014E1DCu; f_800C02CC(c); // 8014E1D8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E1DC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E1E0
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E1E4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014E1E8
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014E1EC
  c->lr=0x8014E1F4u; f_800C02CC(c); // 8014E1F0
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014E1F4
  c->f[1]=c->f[31]; // 8014E1F8
  c->lr=0x8014E200u; f_800C02CC(c); // 8014E1FC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E200
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E204
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E208
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014E20C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014E210
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014E214
  fcmp(c,0,c->f[1],c->f[0]); // 8014E218
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E21C
  if (!crb(c,2)) { goto L_8014E228; } // 8014E220
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E224
L_8014E228:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E228
  fcmp(c,0,c->f[1],c->f[0]); // 8014E22C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E230
  if (!crb(c,2)) { goto L_8014E23C; } // 8014E234
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E238
L_8014E23C:;
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014E23C
  goto L_8014E254; // 8014E240
L_8014E244:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E244
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E248
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014E24C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014E250
L_8014E254:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E254
  c->r[0]=0u+0x00000002u; // 8014E258
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E25C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014E260
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8014E264
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8014E268
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8014E26C
  W8(c->r[1]+0x0000007Cu,c->r[0]); // 8014E270
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014E274
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014E278
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014E27C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014E280
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014E284
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014E288
  goto L_8014E804; // 8014E28C
L_8014E290:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014E290
  c->r[27]=c->r[1]+0x00000008u; // 8014E294
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014E298
  c->r[28]=0u+0x00000000u; // 8014E29C
L_8014E2A0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E2A0
  c->r[4]=c->r[29]|c->r[29]; // 8014E2A4
  c->r[5]=c->r[28]+0x0000003Au; // 8014E2A8
  c->lr=0x8014E2B0u; f_8017AC94(c); // 8014E2AC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E2B0
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E2B4
  c->r[28]=c->r[28]+0x00000001u; // 8014E2B8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014E2BC
  cmpu(c,0,c->r[28],0x00000008u); // 8014E2C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014E2C4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014E2C8
  {uint32_t ea=c->r[27]+0x000000B0u; WF32(ea,c->f[0]);} // 8014E2CC
  c->r[27]=c->r[27]+0x00000004u; // 8014E2D0
  if (crb(c,0)) { IRQCHK(c); goto L_8014E2A0; } // 8014E2D4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 8014E2D8
  c->r[27]=c->r[1]+0x00000008u; // 8014E2DC
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014E2E0
  c->r[28]=0u+0x00000000u; // 8014E2E4
L_8014E2E8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E2E8
  c->r[4]=c->r[29]|c->r[29]; // 8014E2EC
  c->r[5]=c->r[28]+0x00000042u; // 8014E2F0
  c->lr=0x8014E2F8u; f_8017AC94(c); // 8014E2F4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E2F8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E2FC
  c->r[28]=c->r[28]+0x00000001u; // 8014E300
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014E304
  cmpu(c,0,c->r[28],0x00000008u); // 8014E308
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8014E30C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 8014E310
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 8014E314
  c->r[27]=c->r[27]+0x00000004u; // 8014E318
  if (crb(c,0)) { IRQCHK(c); goto L_8014E2E8; } // 8014E31C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E320
  c->r[4]=c->r[29]|c->r[29]; // 8014E324
  c->r[5]=0u+0x0000004Au; // 8014E328
  c->lr=0x8014E330u; f_8017AB54(c); // 8014E32C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014E330
  W32(c->r[1]+0x00000040u,c->r[0]); // 8014E334
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E338
  c->r[4]=c->r[29]|c->r[29]; // 8014E33C
  c->r[5]=0u+0x0000004Bu; // 8014E340
  c->lr=0x8014E348u; f_8017AC94(c); // 8014E344
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E348
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E34C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E350
  c->r[4]=c->r[29]|c->r[29]; // 8014E354
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E358
  c->r[5]=0u+0x0000004Cu; // 8014E35C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E360
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E364
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E368
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E36C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014E370
  c->lr=0x8014E378u; f_8017AC94(c); // 8014E374
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E378
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E37C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E380
  c->r[4]=c->r[29]|c->r[29]; // 8014E384
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014E388
  c->r[5]=0u+0x0000004Du; // 8014E38C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014E390
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E394
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 8014E398
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014E39C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8014E3A0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E3A4
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 8014E3A8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014E3AC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8014E3B0
  c->lr=0x8014E3B8u; f_8017AC94(c); // 8014E3B4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E3B8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E3BC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E3C0
  c->r[4]=c->r[29]|c->r[29]; // 8014E3C4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E3C8
  c->r[5]=0u+0x0000004Eu; // 8014E3CC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E3D0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E3D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E3D8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E3DC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014E3E0
  c->lr=0x8014E3E8u; f_8017AC94(c); // 8014E3E4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E3E8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E3EC
  c->r[3]=0u+0x00000002u; // 8014E3F0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E3F4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014E3F8
  c->r[0]=0u+0x00000005u; // 8014E3FC
  W8(c->r[1]+0x0000005Cu,c->r[3]); // 8014E400
  c->r[4]=c->r[29]|c->r[29]; // 8014E404
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E408
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E40C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E410
  c->r[5]=0u+0x00000010u; // 8014E414
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014E418
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E41C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014E420
  c->lr=0x8014E428u; f_8017AC94(c); // 8014E424
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E428
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E42C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E430
  c->r[4]=c->r[29]|c->r[29]; // 8014E434
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E438
  c->r[5]=0u+0x00000011u; // 8014E43C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E440
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E444
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E448
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 8014E44C
  c->lr=0x8014E454u; f_8017AC94(c); // 8014E450
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E454
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E458
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E45C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014E460
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014E464
  fcmp(c,0,c->f[0],c->f[28]); // 8014E468
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E46C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8014E470
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 8014E474
  if (!crb(c,2)) { goto L_8014E548; } // 8014E478
  fcmp(c,0,c->f[0],c->f[31]); // 8014E47C
  if (!crb(c,2)) { goto L_8014E548; } // 8014E480
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E484
  c->r[4]=c->r[29]|c->r[29]; // 8014E488
  c->r[5]=0u+0x00000050u; // 8014E48C
  c->lr=0x8014E494u; f_8017AC94(c); // 8014E490
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E494
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E498
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E49C
  c->r[4]=c->r[29]|c->r[29]; // 8014E4A0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E4A4
  c->r[5]=0u+0x00000051u; // 8014E4A8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E4AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E4B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E4B4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E4B8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8014E4BC
  c->lr=0x8014E4C4u; f_8017AC94(c); // 8014E4C0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E4C4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E4C8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E4CC
  c->r[4]=c->r[29]|c->r[29]; // 8014E4D0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014E4D4
  c->r[5]=0u+0x00000052u; // 8014E4D8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E4DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E4E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E4E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E4E8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8014E4EC
  c->lr=0x8014E4F4u; f_8017AC94(c); // 8014E4F0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E4F4
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E4F8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E4FC
  c->r[4]=c->r[29]|c->r[29]; // 8014E500
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E504
  c->r[5]=0u+0x00000053u; // 8014E508
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E50C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E510
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E514
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E518
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014E51C
  c->lr=0x8014E524u; f_8017AC94(c); // 8014E520
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014E524
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E528
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014E52C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014E530
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E534
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E538
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E53C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014E540
  goto L_8014E6B0; // 8014E544
L_8014E548:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E548
  fcmp(c,0,c->f[28],c->f[0]); // 8014E54C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E550
  if (!crb(c,2)) { goto L_8014E55C; } // 8014E554
  goto L_8014E560; // 8014E558
L_8014E55C:;
  c->f[28]=c->f[0]; // 8014E55C
L_8014E560:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E560
  fcmp(c,0,c->f[28],c->f[0]); // 8014E564
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E568
  if (!crb(c,2)) { goto L_8014E574; } // 8014E56C
  goto L_8014E578; // 8014E570
L_8014E574:;
  c->f[28]=c->f[0]; // 8014E574
L_8014E578:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E578
  c->lr=0x8014E580u; f_800C02CC(c); // 8014E57C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E580
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014E584
  c->f[1]=c->f[0]; // 8014E588
  c->lr=0x8014E590u; f_800C02CC(c); // 8014E58C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E590
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E594
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E598
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014E59C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014E5A0
  c->lr=0x8014E5A8u; f_800C02CC(c); // 8014E5A4
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014E5A8
  c->f[1]=c->f[28]; // 8014E5AC
  c->lr=0x8014E5B4u; f_800C02CC(c); // 8014E5B0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E5B4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E5B8
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E5BC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014E5C0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014E5C4
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 8014E5C8
  fcmp(c,0,c->f[2],c->f[0]); // 8014E5CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E5D0
  if (!crb(c,2)) { goto L_8014E5DC; } // 8014E5D4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014E5D8
L_8014E5DC:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E5DC
  fcmp(c,0,c->f[2],c->f[0]); // 8014E5E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E5E4
  if (!crb(c,2)) { goto L_8014E5F0; } // 8014E5E8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014E5EC
L_8014E5F0:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E5F0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E5F4
  fcmp(c,0,c->f[31],c->f[0]); // 8014E5F8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 8014E5FC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014E600
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E604
  if (!crb(c,2)) { goto L_8014E610; } // 8014E608
  goto L_8014E614; // 8014E60C
L_8014E610:;
  c->f[31]=c->f[0]; // 8014E610
L_8014E614:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E614
  fcmp(c,0,c->f[31],c->f[0]); // 8014E618
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E61C
  if (!crb(c,2)) { goto L_8014E628; } // 8014E620
  goto L_8014E62C; // 8014E624
L_8014E628:;
  c->f[31]=c->f[0]; // 8014E628
L_8014E62C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E62C
  c->lr=0x8014E634u; f_800C02CC(c); // 8014E630
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E634
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014E638
  c->f[1]=c->f[0]; // 8014E63C
  c->lr=0x8014E644u; f_800C02CC(c); // 8014E640
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E644
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E648
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E64C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014E650
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014E654
  c->lr=0x8014E65Cu; f_800C02CC(c); // 8014E658
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014E65C
  c->f[1]=c->f[31]; // 8014E660
  c->lr=0x8014E668u; f_800C02CC(c); // 8014E664
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014E668
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E66C
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E670
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014E674
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014E678
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014E67C
  fcmp(c,0,c->f[1],c->f[0]); // 8014E680
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014E684
  if (!crb(c,2)) { goto L_8014E690; } // 8014E688
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E68C
L_8014E690:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E690
  fcmp(c,0,c->f[1],c->f[0]); // 8014E694
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014E698
  if (!crb(c,2)) { goto L_8014E6A4; } // 8014E69C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E6A0
L_8014E6A4:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E6A4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014E6A8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014E6AC
L_8014E6B0:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014E6B0
  c->r[4]=c->r[29]|c->r[29]; // 8014E6B4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E6B8
  c->r[5]=0u+0x00000013u; // 8014E6BC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8014E6C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E6C4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8014E6C8
  c->lr=0x8014E6D0u; f_8017AB54(c); // 8014E6CC
  W8(c->r[1]+0x0000007Cu,c->r[3]); // 8014E6D0
  c->r[4]=c->r[29]|c->r[29]; // 8014E6D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E6D8
  c->r[5]=0u+0x00000034u; // 8014E6DC
  c->lr=0x8014E6E4u; f_8017ADA8(c); // 8014E6E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014E6E4
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014E6E8
  c->r[0]=c->r[0]^0x80000000u; // 8014E6EC
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E6F0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E6F4
  c->r[4]=c->r[29]|c->r[29]; // 8014E6F8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E6FC
  c->r[5]=0u+0x00000035u; // 8014E700
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E704
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E708
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E70C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014E710
  c->lr=0x8014E718u; f_8017ADA8(c); // 8014E714
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014E718
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014E71C
  c->r[0]=c->r[0]^0x80000000u; // 8014E720
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E724
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E728
  c->r[4]=c->r[29]|c->r[29]; // 8014E72C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014E730
  c->r[5]=0u+0x00000036u; // 8014E734
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E738
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E73C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E740
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014E744
  c->lr=0x8014E74Cu; f_8017ADA8(c); // 8014E748
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014E74C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014E750
  c->r[0]=c->r[0]^0x80000000u; // 8014E754
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E758
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E75C
  c->r[4]=c->r[29]|c->r[29]; // 8014E760
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014E764
  c->r[5]=0u+0x00000037u; // 8014E768
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014E76C
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014E770
  c->lr=0x8014E778u; f_8017ADA8(c); // 8014E774
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014E778
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014E77C
  c->r[0]=c->r[0]^0x80000000u; // 8014E780
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E784
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E788
  c->r[4]=c->r[29]|c->r[29]; // 8014E78C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014E790
  c->r[5]=0u+0x00000038u; // 8014E794
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E798
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E79C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E7A0
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014E7A4
  c->lr=0x8014E7ACu; f_8017ADA8(c); // 8014E7A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014E7AC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014E7B0
  c->r[0]=c->r[0]^0x80000000u; // 8014E7B4
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014E7B8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E7BC
  c->r[4]=c->r[29]|c->r[29]; // 8014E7C0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014E7C4
  c->r[5]=0u+0x00000039u; // 8014E7C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E7CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E7D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E7D4
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014E7D8
  c->lr=0x8014E7E0u; f_8017ADA8(c); // 8014E7DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014E7E0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014E7E4
  c->r[0]=c->r[0]^0x80000000u; // 8014E7E8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014E7EC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014E7F0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014E7F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014E7F8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014E7FC
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014E800
L_8014E804:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E804
  c->lr=0x8014E80Cu; f_8017A6AC(c); // 8014E808
  cmpu(c,0,c->r[3],0x00000054u); // 8014E80C
  if (crb(c,1)) { goto L_8014E830; } // 8014E810
  c->r[4]=0u+0x00000064u; // 8014E814
  c->r[3]=0u+0x00000000u; // 8014E818
  c->r[0]=0u+0x00000001u; // 8014E81C
  W8(c->r[1]+0x0000015Cu,c->r[4]); // 8014E820
  W8(c->r[1]+0x0000015Du,c->r[3]); // 8014E824
  W8(c->r[1]+0x0000015Eu,c->r[0]); // 8014E828
  goto L_8014E86C; // 8014E82C
L_8014E830:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E830
  c->r[4]=c->r[29]|c->r[29]; // 8014E834
  c->r[5]=0u+0x00000054u; // 8014E838
  c->lr=0x8014E840u; f_8017AB54(c); // 8014E83C
  W8(c->r[1]+0x0000015Cu,c->r[3]); // 8014E840
  c->r[4]=c->r[29]|c->r[29]; // 8014E844
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E848
  c->r[5]=0u+0x00000055u; // 8014E84C
  c->lr=0x8014E854u; f_8017AB54(c); // 8014E850
  W8(c->r[1]+0x0000015Du,c->r[3]); // 8014E854
  c->r[4]=c->r[29]|c->r[29]; // 8014E858
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014E85C
  c->r[5]=0u+0x00000056u; // 8014E860
  c->lr=0x8014E868u; f_8017AB54(c); // 8014E864
  W8(c->r[1]+0x0000015Eu,c->r[3]); // 8014E868
L_8014E86C:;
  c->r[3]=0u+0x00000001u; // 8014E86C
L_8014E870:;
  c->r[0]=0u-c->r[3]; // 8014E870
  c->r[0]=c->r[0]|c->r[3]; // 8014E874
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014E878
L_8014E87C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014E87C
  if (!crb(c,2)) { goto L_8014E894; } // 8014E880
  c->r[0]=0u+0xFFFFFFFFu; // 8014E884
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014E888
  c->r[3]=0u+0x00000000u; // 8014E88C
  goto L_8014E8C4; // 8014E890
L_8014E894:;
  c->r[4]=R32(c->r[1]+0x00000014u); // 8014E894
  c->r[3]=0u+0x00000000u; // 8014E898
  goto L_8014E8B8; // 8014E89C
L_8014E8A0:;
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 8014E8A0
  cmps(c,0,(int32_t)c->r[0],10); // 8014E8A4
  if (!crb(c,2)) { goto L_8014E8B4; } // 8014E8A8
  c->r[0]=c->r[3]+0x00000001u; // 8014E8AC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 8014E8B0
L_8014E8B4:;
  c->r[4]=c->r[4]+0x00000001u; // 8014E8B4
L_8014E8B8:;
  c->r[5]=R8(c->r[4]+0x00000000u); // 8014E8B8
  c->r[0]=(uint32_t)(int32_t)(int8_t)c->r[5]; cr0(c,c->r[0]); // 8014E8BC
  if (!crb(c,2)) { IRQCHK(c); goto L_8014E8A0; } // 8014E8C0
L_8014E8C4:;
  c->r[11]=c->r[1]+0x00000190u; // 8014E8C4
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8014E8C8
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 8014E8CC
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 8014E8D0
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 8014E8D4
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 8014E8D8
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 8014E8DC
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 8014E8E0
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8014E8E4
  c->lr=0x8014E8ECu; f_800ADA78(c); // 8014E8E8
  c->r[0]=R32(c->r[1]+0x000001D4u); // 8014E8EC
  c->lr=c->r[0]; // 8014E8F0
  c->r[1]=c->r[1]+0x000001D0u; // 8014E8F4
  return; // 8014E8F8
}

// GetChildSynthName__16CriAuCueSheetLocFUlUlR8CriError
void f_8014E8FC(Ctx* __restrict c) {
  trace_call(0x8014E8FCu);
  {uint32_t ea=c->r[1]+0xFFFFFCB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E8FC
  c->r[0]=c->lr; // 8014E900
  W32(c->r[1]+0x00000354u,c->r[0]); // 8014E904
  c->r[0]=0u+0x00000000u; // 8014E908
  W32(c->r[1]+0x0000034Cu,c->r[31]); // 8014E90C
  c->r[31]=c->r[6]|c->r[6]; // 8014E910
  W32(c->r[1]+0x00000348u,c->r[30]); // 8014E914
  c->r[30]=c->r[5]|c->r[5]; // 8014E918
  W32(c->r[1]+0x00000344u,c->r[29]); // 8014E91C
  c->r[29]=c->r[4]|c->r[4]; // 8014E920
  W32(c->r[1]+0x00000340u,c->r[28]); // 8014E924
  c->r[28]=c->r[3]|c->r[3]; // 8014E928
  c->r[3]=c->r[1]+0x000001E8u; // 8014E92C
  W32(c->r[6]+0x00000000u,c->r[0]); // 8014E930
  c->lr=0x8014E938u; f_8014A4C8(c); // 8014E934
  c->r[3]=c->r[28]|c->r[28]; // 8014E938
  c->r[4]=c->r[29]|c->r[29]; // 8014E93C
  c->r[5]=c->r[1]+0x000001E8u; // 8014E940
  c->lr=0x8014E948u; f_8014B994(c); // 8014E944
  cmps(c,0,(int32_t)c->r[3],0); // 8014E948
  if (!crb(c,2)) { goto L_8014E960; } // 8014E94C
  c->r[0]=0u+0xFFFFFFFFu; // 8014E950
  W32(c->r[31]+0x00000000u,c->r[0]); // 8014E954
  c->r[3]=0u+0x00000000u; // 8014E958
  goto L_8014E9D8; // 8014E95C
L_8014E960:;
  c->r[3]=c->r[1]+0x00000090u; // 8014E960
  c->lr=0x8014E968u; f_8014A4C8(c); // 8014E964
  c->r[3]=R32(c->r[1]+0x000001F4u); // 8014E968
  c->r[4]=c->r[30]|c->r[30]; // 8014E96C
  c->r[5]=c->r[1]+0x00000008u; // 8014E970
  c->lr=0x8014E978u; f_8014A58C(c); // 8014E974
  cmps(c,0,(int32_t)c->r[3],0); // 8014E978
  if (!crb(c,2)) { goto L_8014E9AC; } // 8014E97C
  c->r[3]=0u+0x802D0000u; // 8014E980
  c->r[0]=0u+0xFFFFFFFFu; // 8014E984
  c->r[3]=c->r[3]+0xFFFFDD30u; // 8014E988
  W32(c->r[31]+0x00000000u,c->r[0]); // 8014E98C
  c->r[4]=c->r[3]+0x000004F2u; // 8014E990
  c->r[5]=c->r[29]|c->r[29]; // 8014E994
  c->r[6]=c->r[30]|c->r[30]; // 8014E998
  c->r[3]=0u+0x00000000u; // 8014E99C
  c->lr=0x8014E9A4u; f_80179558(c); // 8014E9A0
  c->r[3]=0u+0x00000000u; // 8014E9A4
  goto L_8014E9D8; // 8014E9A8
L_8014E9AC:;
  c->r[3]=c->r[28]|c->r[28]; // 8014E9AC
  c->r[4]=c->r[1]+0x00000008u; // 8014E9B0
  c->r[5]=c->r[1]+0x00000090u; // 8014E9B4
  c->lr=0x8014E9BCu; f_8014ACEC(c); // 8014E9B8
  cmps(c,0,(int32_t)c->r[3],0); // 8014E9BC
  if (!crb(c,2)) { goto L_8014E9D4; } // 8014E9C0
  c->r[0]=0u+0xFFFFFFFFu; // 8014E9C4
  W32(c->r[31]+0x00000000u,c->r[0]); // 8014E9C8
  c->r[3]=0u+0x00000000u; // 8014E9CC
  goto L_8014E9D8; // 8014E9D0
L_8014E9D4:;
  c->r[3]=R32(c->r[1]+0x00000090u); // 8014E9D4
L_8014E9D8:;
  c->r[0]=R32(c->r[1]+0x00000354u); // 8014E9D8
  c->r[31]=R32(c->r[1]+0x0000034Cu); // 8014E9DC
  c->r[30]=R32(c->r[1]+0x00000348u); // 8014E9E0
  c->r[29]=R32(c->r[1]+0x00000344u); // 8014E9E4
  c->r[28]=R32(c->r[1]+0x00000340u); // 8014E9E8
  c->lr=c->r[0]; // 8014E9EC
  c->r[1]=c->r[1]+0x00000350u; // 8014E9F0
  return; // 8014E9F4
}

// GetVolume__16CriAuCueSheetLocFUlR8CriError
void f_8014E9F8(Ctx* __restrict c) {
  trace_call(0x8014E9F8u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014E9F8
  c->r[0]=c->lr; // 8014E9FC
  W32(c->r[1]+0x000001D4u,c->r[0]); // 8014EA00
  c->r[11]=c->r[1]+0x00000190u; // 8014EA04
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8014EA08
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 8014EA0C
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 8014EA10
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 8014EA14
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8014EA18
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 8014EA1C
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 8014EA20
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 8014EA24
  c->lr=0x8014EA2Cu; f_800ADA2C(c); // 8014EA28
  c->r[0]=0u+0x00000000u; // 8014EA2C
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014EA30
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EA34
  c->r[6]=0u+0x43300000u; // 8014EA38
  c->r[31]=R32(c->r[3]+0x00000020u); // 8014EA3C
  c->r[29]=c->r[4]|c->r[4]; // 8014EA40
  W32(c->r[1]+0x00000160u,c->r[6]); // 8014EA44
  c->r[30]=c->r[5]|c->r[5]; // 8014EA48
  cmps(c,0,(int32_t)c->r[31],0); // 8014EA4C
  W32(c->r[1]+0x00000168u,c->r[6]); // 8014EA50
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014EA54
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014EA58
  W32(c->r[1]+0x00000018u,c->r[0]); // 8014EA5C
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8014EA60
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8014EA64
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8014EA68
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8014EA6C
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8014EA70
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8014EA74
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8014EA78
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8014EA7C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8014EA80
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8014EA84
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8014EA88
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8014EA8C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8014EA90
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8014EA94
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8014EA98
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 8014EA9C
  W32(c->r[1]+0x000000D8u,c->r[0]); // 8014EAA0
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8014EAA4
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 8014EAA8
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8014EAAC
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8014EAB0
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8014EAB4
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8014EAB8
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 8014EABC
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8014EAC0
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8014EAC4
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8014EAC8
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8014EACC
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8014EAD0
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8014EAD4
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 8014EAD8
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8014EADC
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8014EAE0
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8014EAE4
  W32(c->r[1]+0x00000120u,c->r[0]); // 8014EAE8
  W32(c->r[1]+0x00000124u,c->r[0]); // 8014EAEC
  W32(c->r[1]+0x00000128u,c->r[0]); // 8014EAF0
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8014EAF4
  W32(c->r[1]+0x00000130u,c->r[0]); // 8014EAF8
  W32(c->r[1]+0x00000134u,c->r[0]); // 8014EAFC
  W32(c->r[1]+0x00000138u,c->r[0]); // 8014EB00
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8014EB04
  W32(c->r[1]+0x00000140u,c->r[0]); // 8014EB08
  if (!crb(c,2)) { goto L_8014EB30; } // 8014EB0C
  c->r[4]=0u+0x802D0000u; // 8014EB10
  c->r[5]=c->r[29]|c->r[29]; // 8014EB14
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014EB18
  c->r[3]=0u+0x00000000u; // 8014EB1C
  c->r[4]=c->r[4]+0x0000048Fu; // 8014EB20
  c->lr=0x8014EB28u; f_801794C0(c); // 8014EB24
  c->r[0]=0u+0x00000000u; // 8014EB28
  goto L_8014F710; // 8014EB2C
L_8014EB30:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014EB30
  cmpu(c,0,c->r[4],c->r[0]); // 8014EB34
  if (crb(c,0)) { goto L_8014EB44; } // 8014EB38
  c->r[3]=0u+0x00000000u; // 8014EB3C
  goto L_8014F704; // 8014EB40
L_8014EB44:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EB44
  c->r[5]=0u+0x00000000u; // 8014EB48
  c->lr=0x8014EB50u; f_8017B030(c); // 8014EB4C
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014EB50
  c->r[4]=c->r[29]|c->r[29]; // 8014EB54
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EB58
  c->r[5]=0u+0x00000001u; // 8014EB5C
  c->lr=0x8014EB64u; f_8017AB54(c); // 8014EB60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014EB64
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014EB68
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EB6C
  c->r[4]=c->r[29]|c->r[29]; // 8014EB70
  c->r[5]=0u+0x00000002u; // 8014EB74
  c->lr=0x8014EB7Cu; f_8017AB54(c); // 8014EB78
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014EB7C
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014EB80
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EB84
  c->r[4]=c->r[29]|c->r[29]; // 8014EB88
  c->r[5]=0u+0x00000003u; // 8014EB8C
  c->lr=0x8014EB94u; f_8017B030(c); // 8014EB90
  W32(c->r[1]+0x00000014u,c->r[3]); // 8014EB94
  c->r[4]=c->r[29]|c->r[29]; // 8014EB98
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EB9C
  c->r[5]=0u+0x00000004u; // 8014EBA0
  c->lr=0x8014EBA8u; f_8017B030(c); // 8014EBA4
  W32(c->r[1]+0x00000018u,c->r[3]); // 8014EBA8
  c->r[4]=c->r[29]|c->r[29]; // 8014EBAC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EBB0
  c->r[5]=0u+0x00000005u; // 8014EBB4
  c->lr=0x8014EBBCu; f_8017ADA8(c); // 8014EBB8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014EBBC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014EBC0
  c->r[0]=c->r[0]^0x80000000u; // 8014EBC4
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014EBC8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EBCC
  c->r[4]=c->r[29]|c->r[29]; // 8014EBD0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014EBD4
  c->r[5]=0u+0x00000006u; // 8014EBD8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EBDC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014EBE0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014EBE4
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014EBE8
  c->lr=0x8014EBF0u; f_8017ADA8(c); // 8014EBEC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014EBF0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014EBF4
  c->r[0]=c->r[0]^0x80000000u; // 8014EBF8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014EBFC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EC00
  c->r[4]=c->r[29]|c->r[29]; // 8014EC04
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014EC08
  c->r[5]=0u+0x00000007u; // 8014EC0C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014EC10
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8014EC14
  c->lr=0x8014EC1Cu; f_8017ADCC(c); // 8014EC18
  W32(c->r[1]+0x00000164u,c->r[3]); // 8014EC1C
  c->r[4]=c->r[29]|c->r[29]; // 8014EC20
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EC24
  c->r[5]=0u+0x00000009u; // 8014EC28
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014EC2C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EC30
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014EC34
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8014EC38
  c->lr=0x8014EC40u; f_8017AC94(c); // 8014EC3C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EC40
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014EC44
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EC48
  c->r[4]=c->r[29]|c->r[29]; // 8014EC4C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014EC50
  c->r[5]=0u+0x0000000Au; // 8014EC54
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EC58
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014EC5C
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8014EC60
  c->lr=0x8014EC68u; f_8017AC94(c); // 8014EC64
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EC68
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014EC6C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EC70
  c->r[4]=c->r[29]|c->r[29]; // 8014EC74
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014EC78
  c->r[5]=0u+0x0000000Bu; // 8014EC7C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EC80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014EC84
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014EC88
  c->lr=0x8014EC90u; f_8017AC94(c); // 8014EC8C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EC90
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014EC94
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EC98
  c->r[4]=c->r[29]|c->r[29]; // 8014EC9C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014ECA0
  c->r[5]=0u+0x0000000Cu; // 8014ECA4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ECA8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014ECAC
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8014ECB0
  c->lr=0x8014ECB8u; f_8017AC94(c); // 8014ECB4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014ECB8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014ECBC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014ECC0
  c->r[4]=c->r[29]|c->r[29]; // 8014ECC4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014ECC8
  c->r[5]=0u+0x0000000Du; // 8014ECCC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ECD0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014ECD4
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8014ECD8
  c->lr=0x8014ECE0u; f_8017AC94(c); // 8014ECDC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014ECE0
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014ECE4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014ECE8
  c->r[4]=c->r[29]|c->r[29]; // 8014ECEC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014ECF0
  c->r[5]=0u+0x0000000Eu; // 8014ECF4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ECF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014ECFC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8014ED00
  c->lr=0x8014ED08u; f_8017AC94(c); // 8014ED04
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014ED08
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014ED0C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014ED10
  c->r[4]=c->r[29]|c->r[29]; // 8014ED14
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014ED18
  c->r[5]=0u+0x00000014u; // 8014ED1C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014ED20
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014ED24
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ED28
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014ED2C
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014ED30
  c->lr=0x8014ED38u; f_8017B030(c); // 8014ED34
  W32(c->r[1]+0x000000D8u,c->r[3]); // 8014ED38
  c->r[4]=c->r[29]|c->r[29]; // 8014ED3C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ED40
  c->r[5]=0u+0x00000015u; // 8014ED44
  c->lr=0x8014ED4Cu; f_8017B030(c); // 8014ED48
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8014ED4C
  c->r[27]=c->r[1]+0x00000008u; // 8014ED50
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014ED54
  c->r[28]=0u+0x00000000u; // 8014ED58
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014ED5C
L_8014ED60:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ED60
  c->r[4]=c->r[29]|c->r[29]; // 8014ED64
  c->r[5]=c->r[28]+0x00000016u; // 8014ED68
  c->lr=0x8014ED70u; f_8017AC94(c); // 8014ED6C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014ED70
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014ED74
  c->r[28]=c->r[28]+0x00000001u; // 8014ED78
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014ED7C
  cmpu(c,0,c->r[28],0x00000008u); // 8014ED80
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014ED84
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014ED88
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 8014ED8C
  c->r[27]=c->r[27]+0x00000004u; // 8014ED90
  if (crb(c,0)) { IRQCHK(c); goto L_8014ED60; } // 8014ED94
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014ED98
  c->r[4]=c->r[29]|c->r[29]; // 8014ED9C
  c->r[5]=0u+0x0000001Eu; // 8014EDA0
  c->lr=0x8014EDA8u; f_8017B030(c); // 8014EDA4
  W32(c->r[1]+0x00000120u,c->r[3]); // 8014EDA8
  c->r[27]=c->r[1]+0x00000008u; // 8014EDAC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014EDB0
  c->r[28]=0u+0x00000000u; // 8014EDB4
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014EDB8
L_8014EDBC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EDBC
  c->r[4]=c->r[29]|c->r[29]; // 8014EDC0
  c->r[5]=c->r[28]+0x0000001Fu; // 8014EDC4
  c->lr=0x8014EDCCu; f_8017AC94(c); // 8014EDC8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EDCC
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014EDD0
  c->r[28]=c->r[28]+0x00000001u; // 8014EDD4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014EDD8
  cmpu(c,0,c->r[28],0x00000008u); // 8014EDDC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014EDE0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014EDE4
  {uint32_t ea=c->r[27]+0x000000D8u; WF32(ea,c->f[0]);} // 8014EDE8
  c->r[27]=c->r[27]+0x00000004u; // 8014EDEC
  if (crb(c,0)) { IRQCHK(c); goto L_8014EDBC; } // 8014EDF0
  c->r[27]=c->r[1]+0x00000008u; // 8014EDF4
  c->r[28]=0u+0x00000000u; // 8014EDF8
L_8014EDFC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EDFC
  c->r[4]=c->r[29]|c->r[29]; // 8014EE00
  c->r[5]=c->r[28]+0x00000027u; // 8014EE04
  c->lr=0x8014EE0Cu; f_8017B030(c); // 8014EE08
  c->r[28]=c->r[28]+0x00000001u; // 8014EE0C
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8014EE10
  cmpu(c,0,c->r[28],0x00000008u); // 8014EE14
  c->r[27]=c->r[27]+0x00000004u; // 8014EE18
  if (crb(c,0)) { IRQCHK(c); goto L_8014EDFC; } // 8014EE1C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EE20
  c->r[4]=c->r[29]|c->r[29]; // 8014EE24
  c->r[5]=0u+0x0000002Fu; // 8014EE28
  c->lr=0x8014EE30u; f_8017B030(c); // 8014EE2C
  W32(c->r[1]+0x00000084u,c->r[3]); // 8014EE30
  c->r[4]=c->r[29]|c->r[29]; // 8014EE34
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EE38
  c->r[5]=0u+0x00000030u; // 8014EE3C
  c->lr=0x8014EE44u; f_8017AB54(c); // 8014EE40
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014EE44
  W32(c->r[1]+0x00000080u,c->r[0]); // 8014EE48
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EE4C
  c->r[4]=c->r[29]|c->r[29]; // 8014EE50
  c->r[5]=0u+0x00000031u; // 8014EE54
  c->lr=0x8014EE5Cu; f_8017AB54(c); // 8014EE58
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014EE5C
  W32(c->r[1]+0x00000088u,c->r[0]); // 8014EE60
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EE64
  c->r[4]=c->r[29]|c->r[29]; // 8014EE68
  c->r[5]=0u+0x00000032u; // 8014EE6C
  c->lr=0x8014EE74u; f_8017AC94(c); // 8014EE70
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EE74
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014EE78
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EE7C
  c->r[4]=c->r[29]|c->r[29]; // 8014EE80
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014EE84
  c->r[5]=0u+0x00000033u; // 8014EE88
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EE8C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014EE90
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8014EE94
  c->lr=0x8014EE9Cu; f_8017AC70(c); // 8014EE98
  W8(c->r[1]+0x00000090u,c->r[3]); // 8014EE9C
  c->r[28]=0u+0x00000000u; // 8014EEA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EEA4
  W32(c->r[1]+0x00000094u,c->r[28]); // 8014EEA8
  c->lr=0x8014EEB0u; f_8017A6AC(c); // 8014EEAC
  cmpu(c,0,c->r[3],0x00000034u); // 8014EEB0
  if (crb(c,1)) { goto L_8014F124; } // 8014EEB4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014EEB8
  c->r[6]=0u+0x00000002u; // 8014EEBC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EEC0
  c->r[0]=0u+0x00000005u; // 8014EEC4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8014EEC8
  c->r[4]=c->r[29]|c->r[29]; // 8014EECC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EED0
  c->r[5]=0u+0x00000010u; // 8014EED4
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8014EED8
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8014EEDC
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 8014EEE0
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 8014EEE4
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 8014EEE8
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 8014EEEC
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 8014EEF0
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 8014EEF4
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8014EEF8
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 8014EEFC
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 8014EF00
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 8014EF04
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8014EF08
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 8014EF0C
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 8014EF10
  W32(c->r[1]+0x00000040u,c->r[28]); // 8014EF14
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014EF18
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8014EF1C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014EF20
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014EF24
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014EF28
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014EF2C
  W8(c->r[1]+0x0000005Cu,c->r[6]); // 8014EF30
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014EF34
  c->lr=0x8014EF3Cu; f_8017AC94(c); // 8014EF38
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EF3C
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014EF40
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EF44
  c->r[4]=c->r[29]|c->r[29]; // 8014EF48
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014EF4C
  c->r[5]=0u+0x00000011u; // 8014EF50
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014EF54
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8014EF58
  c->lr=0x8014EF60u; f_8017AC94(c); // 8014EF5C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014EF60
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014EF64
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014EF68
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014EF6C
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8014EF70
  fcmp(c,0,c->f[29],c->f[31]); // 8014EF74
  if (crb(c,2)) { goto L_8014F0D8; } // 8014EF78
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EF7C
  fcmp(c,0,c->f[29],c->f[0]); // 8014EF80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014EF84
  if (!crb(c,2)) { goto L_8014EF90; } // 8014EF88
  goto L_8014EF94; // 8014EF8C
L_8014EF90:;
  c->f[29]=c->f[0]; // 8014EF90
L_8014EF94:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EF94
  fcmp(c,0,c->f[29],c->f[0]); // 8014EF98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014EF9C
  if (!crb(c,2)) { goto L_8014EFA8; } // 8014EFA0
  goto L_8014EFAC; // 8014EFA4
L_8014EFA8:;
  c->f[29]=c->f[0]; // 8014EFA8
L_8014EFAC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014EFAC
  c->lr=0x8014EFB4u; f_800C02CC(c); // 8014EFB0
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EFB4
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8014EFB8
  c->f[1]=c->f[0]; // 8014EFBC
  c->lr=0x8014EFC4u; f_800C02CC(c); // 8014EFC0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014EFC4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EFC8
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014EFCC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 8014EFD0
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014EFD4
  c->lr=0x8014EFDCu; f_800C02CC(c); // 8014EFD8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014EFDC
  c->f[1]=c->f[29]; // 8014EFE0
  c->lr=0x8014EFE8u; f_800C02CC(c); // 8014EFE4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014EFE8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014EFEC
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014EFF0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014EFF4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014EFF8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014EFFC
  fcmp(c,0,c->f[1],c->f[0]); // 8014F000
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F004
  if (!crb(c,2)) { goto L_8014F010; } // 8014F008
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F00C
L_8014F010:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F010
  fcmp(c,0,c->f[1],c->f[0]); // 8014F014
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F018
  if (!crb(c,2)) { goto L_8014F024; } // 8014F01C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F020
L_8014F024:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F024
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014F028
  fcmp(c,0,c->f[31],c->f[0]); // 8014F02C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F030
  if (!crb(c,2)) { goto L_8014F03C; } // 8014F034
  goto L_8014F040; // 8014F038
L_8014F03C:;
  c->f[31]=c->f[0]; // 8014F03C
L_8014F040:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F040
  fcmp(c,0,c->f[31],c->f[0]); // 8014F044
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F048
  if (!crb(c,2)) { goto L_8014F054; } // 8014F04C
  goto L_8014F058; // 8014F050
L_8014F054:;
  c->f[31]=c->f[0]; // 8014F054
L_8014F058:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F058
  c->lr=0x8014F060u; f_800C02CC(c); // 8014F05C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F060
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014F064
  c->f[1]=c->f[0]; // 8014F068
  c->lr=0x8014F070u; f_800C02CC(c); // 8014F06C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014F070
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F074
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F078
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014F07C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014F080
  c->lr=0x8014F088u; f_800C02CC(c); // 8014F084
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014F088
  c->f[1]=c->f[31]; // 8014F08C
  c->lr=0x8014F094u; f_800C02CC(c); // 8014F090
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014F094
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F098
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F09C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014F0A0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014F0A4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014F0A8
  fcmp(c,0,c->f[1],c->f[0]); // 8014F0AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F0B0
  if (!crb(c,2)) { goto L_8014F0BC; } // 8014F0B4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F0B8
L_8014F0BC:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F0BC
  fcmp(c,0,c->f[1],c->f[0]); // 8014F0C0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F0C4
  if (!crb(c,2)) { goto L_8014F0D0; } // 8014F0C8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F0CC
L_8014F0D0:;
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014F0D0
  goto L_8014F0E8; // 8014F0D4
L_8014F0D8:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F0D8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F0DC
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014F0E0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014F0E4
L_8014F0E8:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F0E8
  c->r[0]=0u+0x00000002u; // 8014F0EC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F0F0
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014F0F4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8014F0F8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8014F0FC
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8014F100
  W8(c->r[1]+0x0000007Cu,c->r[0]); // 8014F104
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014F108
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014F10C
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014F110
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014F114
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014F118
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014F11C
  goto L_8014F698; // 8014F120
L_8014F124:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014F124
  c->r[27]=c->r[1]+0x00000008u; // 8014F128
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014F12C
  c->r[28]=0u+0x00000000u; // 8014F130
L_8014F134:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F134
  c->r[4]=c->r[29]|c->r[29]; // 8014F138
  c->r[5]=c->r[28]+0x0000003Au; // 8014F13C
  c->lr=0x8014F144u; f_8017AC94(c); // 8014F140
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F144
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F148
  c->r[28]=c->r[28]+0x00000001u; // 8014F14C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014F150
  cmpu(c,0,c->r[28],0x00000008u); // 8014F154
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014F158
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014F15C
  {uint32_t ea=c->r[27]+0x000000B0u; WF32(ea,c->f[0]);} // 8014F160
  c->r[27]=c->r[27]+0x00000004u; // 8014F164
  if (crb(c,0)) { IRQCHK(c); goto L_8014F134; } // 8014F168
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 8014F16C
  c->r[27]=c->r[1]+0x00000008u; // 8014F170
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014F174
  c->r[28]=0u+0x00000000u; // 8014F178
L_8014F17C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F17C
  c->r[4]=c->r[29]|c->r[29]; // 8014F180
  c->r[5]=c->r[28]+0x00000042u; // 8014F184
  c->lr=0x8014F18Cu; f_8017AC94(c); // 8014F188
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F18C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F190
  c->r[28]=c->r[28]+0x00000001u; // 8014F194
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014F198
  cmpu(c,0,c->r[28],0x00000008u); // 8014F19C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8014F1A0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 8014F1A4
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 8014F1A8
  c->r[27]=c->r[27]+0x00000004u; // 8014F1AC
  if (crb(c,0)) { IRQCHK(c); goto L_8014F17C; } // 8014F1B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F1B4
  c->r[4]=c->r[29]|c->r[29]; // 8014F1B8
  c->r[5]=0u+0x0000004Au; // 8014F1BC
  c->lr=0x8014F1C4u; f_8017AB54(c); // 8014F1C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014F1C4
  W32(c->r[1]+0x00000040u,c->r[0]); // 8014F1C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F1CC
  c->r[4]=c->r[29]|c->r[29]; // 8014F1D0
  c->r[5]=0u+0x0000004Bu; // 8014F1D4
  c->lr=0x8014F1DCu; f_8017AC94(c); // 8014F1D8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F1DC
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F1E0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F1E4
  c->r[4]=c->r[29]|c->r[29]; // 8014F1E8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F1EC
  c->r[5]=0u+0x0000004Cu; // 8014F1F0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F1F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F1F8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F1FC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F200
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014F204
  c->lr=0x8014F20Cu; f_8017AC94(c); // 8014F208
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F20C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F210
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F214
  c->r[4]=c->r[29]|c->r[29]; // 8014F218
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014F21C
  c->r[5]=0u+0x0000004Du; // 8014F220
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014F224
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F228
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 8014F22C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014F230
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8014F234
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F238
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 8014F23C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014F240
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8014F244
  c->lr=0x8014F24Cu; f_8017AC94(c); // 8014F248
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F24C
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F250
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F254
  c->r[4]=c->r[29]|c->r[29]; // 8014F258
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F25C
  c->r[5]=0u+0x0000004Eu; // 8014F260
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F264
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F268
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F26C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F270
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014F274
  c->lr=0x8014F27Cu; f_8017AC94(c); // 8014F278
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F27C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F280
  c->r[3]=0u+0x00000002u; // 8014F284
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F288
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014F28C
  c->r[0]=0u+0x00000005u; // 8014F290
  W8(c->r[1]+0x0000005Cu,c->r[3]); // 8014F294
  c->r[4]=c->r[29]|c->r[29]; // 8014F298
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F29C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F2A0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F2A4
  c->r[5]=0u+0x00000010u; // 8014F2A8
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014F2AC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F2B0
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014F2B4
  c->lr=0x8014F2BCu; f_8017AC94(c); // 8014F2B8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F2BC
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F2C0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F2C4
  c->r[4]=c->r[29]|c->r[29]; // 8014F2C8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F2CC
  c->r[5]=0u+0x00000011u; // 8014F2D0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F2D4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F2D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F2DC
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 8014F2E0
  c->lr=0x8014F2E8u; f_8017AC94(c); // 8014F2E4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F2E8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F2EC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F2F0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014F2F4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014F2F8
  fcmp(c,0,c->f[0],c->f[28]); // 8014F2FC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F300
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 8014F304
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 8014F308
  if (!crb(c,2)) { goto L_8014F3DC; } // 8014F30C
  fcmp(c,0,c->f[0],c->f[31]); // 8014F310
  if (!crb(c,2)) { goto L_8014F3DC; } // 8014F314
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F318
  c->r[4]=c->r[29]|c->r[29]; // 8014F31C
  c->r[5]=0u+0x00000050u; // 8014F320
  c->lr=0x8014F328u; f_8017AC94(c); // 8014F324
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F328
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F32C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F330
  c->r[4]=c->r[29]|c->r[29]; // 8014F334
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F338
  c->r[5]=0u+0x00000051u; // 8014F33C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F340
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F344
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F348
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F34C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 8014F350
  c->lr=0x8014F358u; f_8017AC94(c); // 8014F354
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F358
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F35C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F360
  c->r[4]=c->r[29]|c->r[29]; // 8014F364
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014F368
  c->r[5]=0u+0x00000052u; // 8014F36C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F370
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F374
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F378
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F37C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 8014F380
  c->lr=0x8014F388u; f_8017AC94(c); // 8014F384
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F388
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F38C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F390
  c->r[4]=c->r[29]|c->r[29]; // 8014F394
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F398
  c->r[5]=0u+0x00000053u; // 8014F39C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F3A0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F3A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F3A8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F3AC
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014F3B0
  c->lr=0x8014F3B8u; f_8017AC94(c); // 8014F3B4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F3B8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F3BC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014F3C0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014F3C4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F3C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F3CC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F3D0
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014F3D4
  goto L_8014F544; // 8014F3D8
L_8014F3DC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F3DC
  fcmp(c,0,c->f[28],c->f[0]); // 8014F3E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F3E4
  if (!crb(c,2)) { goto L_8014F3F0; } // 8014F3E8
  goto L_8014F3F4; // 8014F3EC
L_8014F3F0:;
  c->f[28]=c->f[0]; // 8014F3F0
L_8014F3F4:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F3F4
  fcmp(c,0,c->f[28],c->f[0]); // 8014F3F8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F3FC
  if (!crb(c,2)) { goto L_8014F408; } // 8014F400
  goto L_8014F40C; // 8014F404
L_8014F408:;
  c->f[28]=c->f[0]; // 8014F408
L_8014F40C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F40C
  c->lr=0x8014F414u; f_800C02CC(c); // 8014F410
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F414
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014F418
  c->f[1]=c->f[0]; // 8014F41C
  c->lr=0x8014F424u; f_800C02CC(c); // 8014F420
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014F424
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F428
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F42C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014F430
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014F434
  c->lr=0x8014F43Cu; f_800C02CC(c); // 8014F438
  c->f[29]=c->ps1[29]=S(c->f[1]); // 8014F43C
  c->f[1]=c->f[28]; // 8014F440
  c->lr=0x8014F448u; f_800C02CC(c); // 8014F444
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014F448
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F44C
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F450
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8014F454
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014F458
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 8014F45C
  fcmp(c,0,c->f[2],c->f[0]); // 8014F460
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F464
  if (!crb(c,2)) { goto L_8014F470; } // 8014F468
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014F46C
L_8014F470:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F470
  fcmp(c,0,c->f[2],c->f[0]); // 8014F474
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F478
  if (!crb(c,2)) { goto L_8014F484; } // 8014F47C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 8014F480
L_8014F484:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F484
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F488
  fcmp(c,0,c->f[31],c->f[0]); // 8014F48C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 8014F490
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014F494
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F498
  if (!crb(c,2)) { goto L_8014F4A4; } // 8014F49C
  goto L_8014F4A8; // 8014F4A0
L_8014F4A4:;
  c->f[31]=c->f[0]; // 8014F4A4
L_8014F4A8:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F4A8
  fcmp(c,0,c->f[31],c->f[0]); // 8014F4AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F4B0
  if (!crb(c,2)) { goto L_8014F4BC; } // 8014F4B4
  goto L_8014F4C0; // 8014F4B8
L_8014F4BC:;
  c->f[31]=c->f[0]; // 8014F4BC
L_8014F4C0:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F4C0
  c->lr=0x8014F4C8u; f_800C02CC(c); // 8014F4C4
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F4C8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014F4CC
  c->f[1]=c->f[0]; // 8014F4D0
  c->lr=0x8014F4D8u; f_800C02CC(c); // 8014F4D4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014F4D8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F4DC
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F4E0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014F4E4
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014F4E8
  c->lr=0x8014F4F0u; f_800C02CC(c); // 8014F4EC
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014F4F0
  c->f[1]=c->f[31]; // 8014F4F4
  c->lr=0x8014F4FCu; f_800C02CC(c); // 8014F4F8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014F4FC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F500
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F504
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014F508
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014F50C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014F510
  fcmp(c,0,c->f[1],c->f[0]); // 8014F514
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014F518
  if (!crb(c,2)) { goto L_8014F524; } // 8014F51C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F520
L_8014F524:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F524
  fcmp(c,0,c->f[1],c->f[0]); // 8014F528
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014F52C
  if (!crb(c,2)) { goto L_8014F538; } // 8014F530
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F534
L_8014F538:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F538
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014F53C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 8014F540
L_8014F544:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F544
  c->r[4]=c->r[29]|c->r[29]; // 8014F548
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F54C
  c->r[5]=0u+0x00000013u; // 8014F550
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 8014F554
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F558
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 8014F55C
  c->lr=0x8014F564u; f_8017AB54(c); // 8014F560
  W8(c->r[1]+0x0000007Cu,c->r[3]); // 8014F564
  c->r[4]=c->r[29]|c->r[29]; // 8014F568
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F56C
  c->r[5]=0u+0x00000034u; // 8014F570
  c->lr=0x8014F578u; f_8017ADA8(c); // 8014F574
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F578
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014F57C
  c->r[0]=c->r[0]^0x80000000u; // 8014F580
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F584
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F588
  c->r[4]=c->r[29]|c->r[29]; // 8014F58C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F590
  c->r[5]=0u+0x00000035u; // 8014F594
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F598
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F59C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F5A0
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014F5A4
  c->lr=0x8014F5ACu; f_8017ADA8(c); // 8014F5A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F5AC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014F5B0
  c->r[0]=c->r[0]^0x80000000u; // 8014F5B4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F5B8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F5BC
  c->r[4]=c->r[29]|c->r[29]; // 8014F5C0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014F5C4
  c->r[5]=0u+0x00000036u; // 8014F5C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F5CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F5D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F5D4
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014F5D8
  c->lr=0x8014F5E0u; f_8017ADA8(c); // 8014F5DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F5E0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014F5E4
  c->r[0]=c->r[0]^0x80000000u; // 8014F5E8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F5EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F5F0
  c->r[4]=c->r[29]|c->r[29]; // 8014F5F4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014F5F8
  c->r[5]=0u+0x00000037u; // 8014F5FC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014F600
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014F604
  c->lr=0x8014F60Cu; f_8017ADA8(c); // 8014F608
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F60C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014F610
  c->r[0]=c->r[0]^0x80000000u; // 8014F614
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F618
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F61C
  c->r[4]=c->r[29]|c->r[29]; // 8014F620
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014F624
  c->r[5]=0u+0x00000038u; // 8014F628
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F62C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F630
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F634
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014F638
  c->lr=0x8014F640u; f_8017ADA8(c); // 8014F63C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F640
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014F644
  c->r[0]=c->r[0]^0x80000000u; // 8014F648
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F64C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F650
  c->r[4]=c->r[29]|c->r[29]; // 8014F654
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F658
  c->r[5]=0u+0x00000039u; // 8014F65C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F660
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F664
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F668
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014F66C
  c->lr=0x8014F674u; f_8017ADA8(c); // 8014F670
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F674
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014F678
  c->r[0]=c->r[0]^0x80000000u; // 8014F67C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F680
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F684
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014F688
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F68C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F690
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014F694
L_8014F698:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F698
  c->lr=0x8014F6A0u; f_8017A6AC(c); // 8014F69C
  cmpu(c,0,c->r[3],0x00000054u); // 8014F6A0
  if (crb(c,1)) { goto L_8014F6C4; } // 8014F6A4
  c->r[4]=0u+0x00000064u; // 8014F6A8
  c->r[3]=0u+0x00000000u; // 8014F6AC
  c->r[0]=0u+0x00000001u; // 8014F6B0
  W8(c->r[1]+0x0000015Cu,c->r[4]); // 8014F6B4
  W8(c->r[1]+0x0000015Du,c->r[3]); // 8014F6B8
  W8(c->r[1]+0x0000015Eu,c->r[0]); // 8014F6BC
  goto L_8014F700; // 8014F6C0
L_8014F6C4:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F6C4
  c->r[4]=c->r[29]|c->r[29]; // 8014F6C8
  c->r[5]=0u+0x00000054u; // 8014F6CC
  c->lr=0x8014F6D4u; f_8017AB54(c); // 8014F6D0
  W8(c->r[1]+0x0000015Cu,c->r[3]); // 8014F6D4
  c->r[4]=c->r[29]|c->r[29]; // 8014F6D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F6DC
  c->r[5]=0u+0x00000055u; // 8014F6E0
  c->lr=0x8014F6E8u; f_8017AB54(c); // 8014F6E4
  W8(c->r[1]+0x0000015Du,c->r[3]); // 8014F6E8
  c->r[4]=c->r[29]|c->r[29]; // 8014F6EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F6F0
  c->r[5]=0u+0x00000056u; // 8014F6F4
  c->lr=0x8014F6FCu; f_8017AB54(c); // 8014F6F8
  W8(c->r[1]+0x0000015Eu,c->r[3]); // 8014F6FC
L_8014F700:;
  c->r[3]=0u+0x00000001u; // 8014F700
L_8014F704:;
  c->r[0]=0u-c->r[3]; // 8014F704
  c->r[0]=c->r[0]|c->r[3]; // 8014F708
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 8014F70C
L_8014F710:;
  cmps(c,0,(int32_t)c->r[0],0); // 8014F710
  if (!crb(c,2)) { goto L_8014F728; } // 8014F714
  c->r[0]=0u+0xFFFFFFFFu; // 8014F718
  W32(c->r[30]+0x00000000u,c->r[0]); // 8014F71C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F720
  goto L_8014F72C; // 8014F724
L_8014F728:;
  {uint32_t ea=c->r[1]+0x0000001Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8014F728
L_8014F72C:;
  c->r[11]=c->r[1]+0x00000190u; // 8014F72C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8014F730
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 8014F734
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 8014F738
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 8014F73C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 8014F740
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 8014F744
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 8014F748
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8014F74C
  c->lr=0x8014F754u; f_800ADA78(c); // 8014F750
  c->r[0]=R32(c->r[1]+0x000001D4u); // 8014F754
  c->lr=c->r[0]; // 8014F758
  c->r[1]=c->r[1]+0x000001D0u; // 8014F75C
  return; // 8014F760
}

// GetPitch__16CriAuCueSheetLocFUlR8CriError
void f_8014F764(Ctx* __restrict c) {
  trace_call(0x8014F764u);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8014F764
  c->r[0]=c->lr; // 8014F768
  W32(c->r[1]+0x000001D4u,c->r[0]); // 8014F76C
  c->r[11]=c->r[1]+0x00000190u; // 8014F770
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8014F774
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 8014F778
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 8014F77C
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 8014F780
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8014F784
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 8014F788
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 8014F78C
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 8014F790
  c->lr=0x8014F798u; f_800ADA2C(c); // 8014F794
  c->r[0]=0u+0x00000000u; // 8014F798
  W32(c->r[5]+0x00000000u,c->r[0]); // 8014F79C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F7A0
  c->r[6]=0u+0x43300000u; // 8014F7A4
  c->r[31]=R32(c->r[3]+0x00000020u); // 8014F7A8
  c->r[29]=c->r[4]|c->r[4]; // 8014F7AC
  W32(c->r[1]+0x00000160u,c->r[6]); // 8014F7B0
  c->r[30]=c->r[5]|c->r[5]; // 8014F7B4
  cmps(c,0,(int32_t)c->r[31],0); // 8014F7B8
  W32(c->r[1]+0x00000168u,c->r[6]); // 8014F7BC
  W32(c->r[1]+0x00000008u,c->r[0]); // 8014F7C0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8014F7C4
  W32(c->r[1]+0x00000018u,c->r[0]); // 8014F7C8
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 8014F7CC
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 8014F7D0
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 8014F7D4
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 8014F7D8
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 8014F7DC
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 8014F7E0
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8014F7E4
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 8014F7E8
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 8014F7EC
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 8014F7F0
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8014F7F4
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 8014F7F8
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 8014F7FC
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 8014F800
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8014F804
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 8014F808
  W32(c->r[1]+0x000000D8u,c->r[0]); // 8014F80C
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8014F810
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 8014F814
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 8014F818
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 8014F81C
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8014F820
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 8014F824
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 8014F828
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 8014F82C
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8014F830
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8014F834
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 8014F838
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 8014F83C
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8014F840
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 8014F844
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 8014F848
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 8014F84C
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8014F850
  W32(c->r[1]+0x00000120u,c->r[0]); // 8014F854
  W32(c->r[1]+0x00000124u,c->r[0]); // 8014F858
  W32(c->r[1]+0x00000128u,c->r[0]); // 8014F85C
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8014F860
  W32(c->r[1]+0x00000130u,c->r[0]); // 8014F864
  W32(c->r[1]+0x00000134u,c->r[0]); // 8014F868
  W32(c->r[1]+0x00000138u,c->r[0]); // 8014F86C
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8014F870
  W32(c->r[1]+0x00000140u,c->r[0]); // 8014F874
  if (!crb(c,2)) { goto L_8014F89C; } // 8014F878
  c->r[4]=0u+0x802D0000u; // 8014F87C
  c->r[5]=c->r[29]|c->r[29]; // 8014F880
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8014F884
  c->r[3]=0u+0x00000000u; // 8014F888
  c->r[4]=c->r[4]+0x0000048Fu; // 8014F88C
  c->lr=0x8014F894u; f_801794C0(c); // 8014F890
  c->r[0]=0u+0x00000000u; // 8014F894
  goto L_8015047C; // 8014F898
L_8014F89C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8014F89C
  cmpu(c,0,c->r[4],c->r[0]); // 8014F8A0
  if (crb(c,0)) { goto L_8014F8B0; } // 8014F8A4
  c->r[3]=0u+0x00000000u; // 8014F8A8
  goto L_80150470; // 8014F8AC
L_8014F8B0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F8B0
  c->r[5]=0u+0x00000000u; // 8014F8B4
  c->lr=0x8014F8BCu; f_8017B030(c); // 8014F8B8
  W32(c->r[1]+0x00000008u,c->r[3]); // 8014F8BC
  c->r[4]=c->r[29]|c->r[29]; // 8014F8C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F8C4
  c->r[5]=0u+0x00000001u; // 8014F8C8
  c->lr=0x8014F8D0u; f_8017AB54(c); // 8014F8CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014F8D0
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8014F8D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F8D8
  c->r[4]=c->r[29]|c->r[29]; // 8014F8DC
  c->r[5]=0u+0x00000002u; // 8014F8E0
  c->lr=0x8014F8E8u; f_8017AB54(c); // 8014F8E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014F8E8
  W32(c->r[1]+0x00000010u,c->r[0]); // 8014F8EC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F8F0
  c->r[4]=c->r[29]|c->r[29]; // 8014F8F4
  c->r[5]=0u+0x00000003u; // 8014F8F8
  c->lr=0x8014F900u; f_8017B030(c); // 8014F8FC
  W32(c->r[1]+0x00000014u,c->r[3]); // 8014F900
  c->r[4]=c->r[29]|c->r[29]; // 8014F904
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F908
  c->r[5]=0u+0x00000004u; // 8014F90C
  c->lr=0x8014F914u; f_8017B030(c); // 8014F910
  W32(c->r[1]+0x00000018u,c->r[3]); // 8014F914
  c->r[4]=c->r[29]|c->r[29]; // 8014F918
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F91C
  c->r[5]=0u+0x00000005u; // 8014F920
  c->lr=0x8014F928u; f_8017ADA8(c); // 8014F924
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F928
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8014F92C
  c->r[0]=c->r[0]^0x80000000u; // 8014F930
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F934
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014F938
  c->r[4]=c->r[29]|c->r[29]; // 8014F93C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014F940
  c->r[5]=0u+0x00000006u; // 8014F944
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F948
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014F94C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014F950
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 8014F954
  c->lr=0x8014F95Cu; f_8017ADA8(c); // 8014F958
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8014F95C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8014F960
  c->r[0]=c->r[0]^0x80000000u; // 8014F964
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F968
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F96C
  c->r[4]=c->r[29]|c->r[29]; // 8014F970
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014F974
  c->r[5]=0u+0x00000007u; // 8014F978
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014F97C
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8014F980
  c->lr=0x8014F988u; f_8017ADCC(c); // 8014F984
  W32(c->r[1]+0x00000164u,c->r[3]); // 8014F988
  c->r[4]=c->r[29]|c->r[29]; // 8014F98C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014F990
  c->r[5]=0u+0x00000009u; // 8014F994
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014F998
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F99C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014F9A0
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 8014F9A4
  c->lr=0x8014F9ACu; f_8017AC94(c); // 8014F9A8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F9AC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014F9B0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014F9B4
  c->r[4]=c->r[29]|c->r[29]; // 8014F9B8
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014F9BC
  c->r[5]=0u+0x0000000Au; // 8014F9C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F9C4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014F9C8
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 8014F9CC
  c->lr=0x8014F9D4u; f_8017AC94(c); // 8014F9D0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F9D4
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014F9D8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014F9DC
  c->r[4]=c->r[29]|c->r[29]; // 8014F9E0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014F9E4
  c->r[5]=0u+0x0000000Bu; // 8014F9E8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014F9EC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014F9F0
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 8014F9F4
  c->lr=0x8014F9FCu; f_8017AC94(c); // 8014F9F8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014F9FC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FA00
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014FA04
  c->r[4]=c->r[29]|c->r[29]; // 8014FA08
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014FA0C
  c->r[5]=0u+0x0000000Cu; // 8014FA10
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FA14
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014FA18
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 8014FA1C
  c->lr=0x8014FA24u; f_8017AC94(c); // 8014FA20
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FA24
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FA28
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014FA2C
  c->r[4]=c->r[29]|c->r[29]; // 8014FA30
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014FA34
  c->r[5]=0u+0x0000000Du; // 8014FA38
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FA3C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014FA40
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 8014FA44
  c->lr=0x8014FA4Cu; f_8017AC94(c); // 8014FA48
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FA4C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FA50
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014FA54
  c->r[4]=c->r[29]|c->r[29]; // 8014FA58
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014FA5C
  c->r[5]=0u+0x0000000Eu; // 8014FA60
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FA64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014FA68
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 8014FA6C
  c->lr=0x8014FA74u; f_8017AC94(c); // 8014FA70
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FA74
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FA78
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014FA7C
  c->r[4]=c->r[29]|c->r[29]; // 8014FA80
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014FA84
  c->r[5]=0u+0x00000014u; // 8014FA88
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FA8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014FA90
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FA94
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014FA98
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 8014FA9C
  c->lr=0x8014FAA4u; f_8017B030(c); // 8014FAA0
  W32(c->r[1]+0x000000D8u,c->r[3]); // 8014FAA4
  c->r[4]=c->r[29]|c->r[29]; // 8014FAA8
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FAAC
  c->r[5]=0u+0x00000015u; // 8014FAB0
  c->lr=0x8014FAB8u; f_8017B030(c); // 8014FAB4
  W32(c->r[1]+0x000000DCu,c->r[3]); // 8014FAB8
  c->r[27]=c->r[1]+0x00000008u; // 8014FABC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014FAC0
  c->r[28]=0u+0x00000000u; // 8014FAC4
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014FAC8
L_8014FACC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FACC
  c->r[4]=c->r[29]|c->r[29]; // 8014FAD0
  c->r[5]=c->r[28]+0x00000016u; // 8014FAD4
  c->lr=0x8014FADCu; f_8017AC94(c); // 8014FAD8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FADC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FAE0
  c->r[28]=c->r[28]+0x00000001u; // 8014FAE4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014FAE8
  cmpu(c,0,c->r[28],0x00000008u); // 8014FAEC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014FAF0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014FAF4
  {uint32_t ea=c->r[27]+0x00000090u; WF32(ea,c->f[0]);} // 8014FAF8
  c->r[27]=c->r[27]+0x00000004u; // 8014FAFC
  if (crb(c,0)) { IRQCHK(c); goto L_8014FACC; } // 8014FB00
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FB04
  c->r[4]=c->r[29]|c->r[29]; // 8014FB08
  c->r[5]=0u+0x0000001Eu; // 8014FB0C
  c->lr=0x8014FB14u; f_8017B030(c); // 8014FB10
  W32(c->r[1]+0x00000120u,c->r[3]); // 8014FB14
  c->r[27]=c->r[1]+0x00000008u; // 8014FB18
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014FB1C
  c->r[28]=0u+0x00000000u; // 8014FB20
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014FB24
L_8014FB28:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FB28
  c->r[4]=c->r[29]|c->r[29]; // 8014FB2C
  c->r[5]=c->r[28]+0x0000001Fu; // 8014FB30
  c->lr=0x8014FB38u; f_8017AC94(c); // 8014FB34
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FB38
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FB3C
  c->r[28]=c->r[28]+0x00000001u; // 8014FB40
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014FB44
  cmpu(c,0,c->r[28],0x00000008u); // 8014FB48
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014FB4C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014FB50
  {uint32_t ea=c->r[27]+0x000000D8u; WF32(ea,c->f[0]);} // 8014FB54
  c->r[27]=c->r[27]+0x00000004u; // 8014FB58
  if (crb(c,0)) { IRQCHK(c); goto L_8014FB28; } // 8014FB5C
  c->r[27]=c->r[1]+0x00000008u; // 8014FB60
  c->r[28]=0u+0x00000000u; // 8014FB64
L_8014FB68:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FB68
  c->r[4]=c->r[29]|c->r[29]; // 8014FB6C
  c->r[5]=c->r[28]+0x00000027u; // 8014FB70
  c->lr=0x8014FB78u; f_8017B030(c); // 8014FB74
  c->r[28]=c->r[28]+0x00000001u; // 8014FB78
  W32(c->r[27]+0x0000011Cu,c->r[3]); // 8014FB7C
  cmpu(c,0,c->r[28],0x00000008u); // 8014FB80
  c->r[27]=c->r[27]+0x00000004u; // 8014FB84
  if (crb(c,0)) { IRQCHK(c); goto L_8014FB68; } // 8014FB88
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FB8C
  c->r[4]=c->r[29]|c->r[29]; // 8014FB90
  c->r[5]=0u+0x0000002Fu; // 8014FB94
  c->lr=0x8014FB9Cu; f_8017B030(c); // 8014FB98
  W32(c->r[1]+0x00000084u,c->r[3]); // 8014FB9C
  c->r[4]=c->r[29]|c->r[29]; // 8014FBA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FBA4
  c->r[5]=0u+0x00000030u; // 8014FBA8
  c->lr=0x8014FBB0u; f_8017AB54(c); // 8014FBAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014FBB0
  W32(c->r[1]+0x00000080u,c->r[0]); // 8014FBB4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FBB8
  c->r[4]=c->r[29]|c->r[29]; // 8014FBBC
  c->r[5]=0u+0x00000031u; // 8014FBC0
  c->lr=0x8014FBC8u; f_8017AB54(c); // 8014FBC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014FBC8
  W32(c->r[1]+0x00000088u,c->r[0]); // 8014FBCC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FBD0
  c->r[4]=c->r[29]|c->r[29]; // 8014FBD4
  c->r[5]=0u+0x00000032u; // 8014FBD8
  c->lr=0x8014FBE0u; f_8017AC94(c); // 8014FBDC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FBE0
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FBE4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014FBE8
  c->r[4]=c->r[29]|c->r[29]; // 8014FBEC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014FBF0
  c->r[5]=0u+0x00000033u; // 8014FBF4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FBF8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8014FBFC
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 8014FC00
  c->lr=0x8014FC08u; f_8017AC70(c); // 8014FC04
  W8(c->r[1]+0x00000090u,c->r[3]); // 8014FC08
  c->r[28]=0u+0x00000000u; // 8014FC0C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FC10
  W32(c->r[1]+0x00000094u,c->r[28]); // 8014FC14
  c->lr=0x8014FC1Cu; f_8017A6AC(c); // 8014FC18
  cmpu(c,0,c->r[3],0x00000034u); // 8014FC1C
  if (crb(c,1)) { goto L_8014FE90; } // 8014FC20
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FC24
  c->r[6]=0u+0x00000002u; // 8014FC28
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FC2C
  c->r[0]=0u+0x00000005u; // 8014FC30
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 8014FC34
  c->r[4]=c->r[29]|c->r[29]; // 8014FC38
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FC3C
  c->r[5]=0u+0x00000010u; // 8014FC40
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 8014FC44
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 8014FC48
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 8014FC4C
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 8014FC50
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 8014FC54
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 8014FC58
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 8014FC5C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 8014FC60
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 8014FC64
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 8014FC68
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 8014FC6C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 8014FC70
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 8014FC74
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 8014FC78
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 8014FC7C
  W32(c->r[1]+0x00000040u,c->r[28]); // 8014FC80
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014FC84
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8014FC88
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 8014FC8C
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014FC90
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014FC94
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 8014FC98
  W8(c->r[1]+0x0000005Cu,c->r[6]); // 8014FC9C
  W32(c->r[1]+0x00000060u,c->r[0]); // 8014FCA0
  c->lr=0x8014FCA8u; f_8017AC94(c); // 8014FCA4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FCA8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FCAC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014FCB0
  c->r[4]=c->r[29]|c->r[29]; // 8014FCB4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014FCB8
  c->r[5]=0u+0x00000011u; // 8014FCBC
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FCC0
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 8014FCC4
  c->lr=0x8014FCCCu; f_8017AC94(c); // 8014FCC8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FCCC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FCD0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8014FCD4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014FCD8
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 8014FCDC
  fcmp(c,0,c->f[29],c->f[31]); // 8014FCE0
  if (crb(c,2)) { goto L_8014FE44; } // 8014FCE4
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FCE8
  fcmp(c,0,c->f[29],c->f[0]); // 8014FCEC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014FCF0
  if (!crb(c,2)) { goto L_8014FCFC; } // 8014FCF4
  goto L_8014FD00; // 8014FCF8
L_8014FCFC:;
  c->f[29]=c->f[0]; // 8014FCFC
L_8014FD00:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FD00
  fcmp(c,0,c->f[29],c->f[0]); // 8014FD04
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014FD08
  if (!crb(c,2)) { goto L_8014FD14; } // 8014FD0C
  goto L_8014FD18; // 8014FD10
L_8014FD14:;
  c->f[29]=c->f[0]; // 8014FD14
L_8014FD18:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FD18
  c->lr=0x8014FD20u; f_800C02CC(c); // 8014FD1C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FD20
  c->f[30]=c->ps1[30]=S(c->f[1]); // 8014FD24
  c->f[1]=c->f[0]; // 8014FD28
  c->lr=0x8014FD30u; f_800C02CC(c); // 8014FD2C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014FD30
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FD34
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FD38
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 8014FD3C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014FD40
  c->lr=0x8014FD48u; f_800C02CC(c); // 8014FD44
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014FD48
  c->f[1]=c->f[29]; // 8014FD4C
  c->lr=0x8014FD54u; f_800C02CC(c); // 8014FD50
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014FD54
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FD58
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FD5C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014FD60
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014FD64
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014FD68
  fcmp(c,0,c->f[1],c->f[0]); // 8014FD6C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014FD70
  if (!crb(c,2)) { goto L_8014FD7C; } // 8014FD74
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FD78
L_8014FD7C:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FD7C
  fcmp(c,0,c->f[1],c->f[0]); // 8014FD80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014FD84
  if (!crb(c,2)) { goto L_8014FD90; } // 8014FD88
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FD8C
L_8014FD90:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FD90
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014FD94
  fcmp(c,0,c->f[31],c->f[0]); // 8014FD98
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014FD9C
  if (!crb(c,2)) { goto L_8014FDA8; } // 8014FDA0
  goto L_8014FDAC; // 8014FDA4
L_8014FDA8:;
  c->f[31]=c->f[0]; // 8014FDA8
L_8014FDAC:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FDAC
  fcmp(c,0,c->f[31],c->f[0]); // 8014FDB0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014FDB4
  if (!crb(c,2)) { goto L_8014FDC0; } // 8014FDB8
  goto L_8014FDC4; // 8014FDBC
L_8014FDC0:;
  c->f[31]=c->f[0]; // 8014FDC0
L_8014FDC4:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FDC4
  c->lr=0x8014FDCCu; f_800C02CC(c); // 8014FDC8
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FDCC
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014FDD0
  c->f[1]=c->f[0]; // 8014FDD4
  c->lr=0x8014FDDCu; f_800C02CC(c); // 8014FDD8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014FDDC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FDE0
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FDE4
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014FDE8
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8014FDEC
  c->lr=0x8014FDF4u; f_800C02CC(c); // 8014FDF0
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8014FDF4
  c->f[1]=c->f[31]; // 8014FDF8
  c->lr=0x8014FE00u; f_800C02CC(c); // 8014FDFC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8014FE00
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FE04
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FE08
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8014FE0C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 8014FE10
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8014FE14
  fcmp(c,0,c->f[1],c->f[0]); // 8014FE18
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8014FE1C
  if (!crb(c,2)) { goto L_8014FE28; } // 8014FE20
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FE24
L_8014FE28:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FE28
  fcmp(c,0,c->f[1],c->f[0]); // 8014FE2C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8014FE30
  if (!crb(c,2)) { goto L_8014FE3C; } // 8014FE34
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FE38
L_8014FE3C:;
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 8014FE3C
  goto L_8014FE54; // 8014FE40
L_8014FE44:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FE44
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FE48
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 8014FE4C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8014FE50
L_8014FE54:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FE54
  c->r[0]=0u+0x00000002u; // 8014FE58
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FE5C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 8014FE60
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 8014FE64
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 8014FE68
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 8014FE6C
  W8(c->r[1]+0x0000007Cu,c->r[0]); // 8014FE70
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 8014FE74
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 8014FE78
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 8014FE7C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 8014FE80
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 8014FE84
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 8014FE88
  goto L_80150404; // 8014FE8C
L_8014FE90:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8014FE90
  c->r[27]=c->r[1]+0x00000008u; // 8014FE94
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 8014FE98
  c->r[28]=0u+0x00000000u; // 8014FE9C
L_8014FEA0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FEA0
  c->r[4]=c->r[29]|c->r[29]; // 8014FEA4
  c->r[5]=c->r[28]+0x0000003Au; // 8014FEA8
  c->lr=0x8014FEB0u; f_8017AC94(c); // 8014FEAC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FEB0
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FEB4
  c->r[28]=c->r[28]+0x00000001u; // 8014FEB8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 8014FEBC
  cmpu(c,0,c->r[28],0x00000008u); // 8014FEC0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 8014FEC4
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8014FEC8
  {uint32_t ea=c->r[27]+0x000000B0u; WF32(ea,c->f[0]);} // 8014FECC
  c->r[27]=c->r[27]+0x00000004u; // 8014FED0
  if (crb(c,0)) { IRQCHK(c); goto L_8014FEA0; } // 8014FED4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 8014FED8
  c->r[27]=c->r[1]+0x00000008u; // 8014FEDC
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 8014FEE0
  c->r[28]=0u+0x00000000u; // 8014FEE4
L_8014FEE8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FEE8
  c->r[4]=c->r[29]|c->r[29]; // 8014FEEC
  c->r[5]=c->r[28]+0x00000042u; // 8014FEF0
  c->lr=0x8014FEF8u; f_8017AC94(c); // 8014FEF4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FEF8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FEFC
  c->r[28]=c->r[28]+0x00000001u; // 8014FF00
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 8014FF04
  cmpu(c,0,c->r[28],0x00000008u); // 8014FF08
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 8014FF0C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 8014FF10
  {uint32_t ea=c->r[27]+0x000000F8u; WF32(ea,c->f[0]);} // 8014FF14
  c->r[27]=c->r[27]+0x00000004u; // 8014FF18
  if (crb(c,0)) { IRQCHK(c); goto L_8014FEE8; } // 8014FF1C
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FF20
  c->r[4]=c->r[29]|c->r[29]; // 8014FF24
  c->r[5]=0u+0x0000004Au; // 8014FF28
  c->lr=0x8014FF30u; f_8017AB54(c); // 8014FF2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8014FF30
  W32(c->r[1]+0x00000040u,c->r[0]); // 8014FF34
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FF38
  c->r[4]=c->r[29]|c->r[29]; // 8014FF3C
  c->r[5]=0u+0x0000004Bu; // 8014FF40
  c->lr=0x8014FF48u; f_8017AC94(c); // 8014FF44
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FF48
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FF4C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014FF50
  c->r[4]=c->r[29]|c->r[29]; // 8014FF54
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014FF58
  c->r[5]=0u+0x0000004Cu; // 8014FF5C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FF60
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014FF64
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FF68
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014FF6C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 8014FF70
  c->lr=0x8014FF78u; f_8017AC94(c); // 8014FF74
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FF78
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FF7C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8014FF80
  c->r[4]=c->r[29]|c->r[29]; // 8014FF84
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 8014FF88
  c->r[5]=0u+0x0000004Du; // 8014FF8C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 8014FF90
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FF94
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 8014FF98
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 8014FF9C
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 8014FFA0
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FFA4
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 8014FFA8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8014FFAC
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 8014FFB0
  c->lr=0x8014FFB8u; f_8017AC94(c); // 8014FFB4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FFB8
  W32(c->r[1]+0x00000164u,c->r[0]); // 8014FFBC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014FFC0
  c->r[4]=c->r[29]|c->r[29]; // 8014FFC4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8014FFC8
  c->r[5]=0u+0x0000004Eu; // 8014FFCC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8014FFD0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8014FFD4
  c->r[3]=R32(c->r[31]+0x00000004u); // 8014FFD8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8014FFDC
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8014FFE0
  c->lr=0x8014FFE8u; f_8017AC94(c); // 8014FFE4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8014FFE8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8014FFEC
  c->r[3]=0u+0x00000002u; // 8014FFF0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8014FFF4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 8014FFF8
  c->r[0]=0u+0x00000005u; // 8014FFFC
  W8(c->r[1]+0x0000005Cu,c->r[3]); // 80150000
  c->r[4]=c->r[29]|c->r[29]; // 80150004
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150008
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8015000C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150010
  c->r[5]=0u+0x00000010u; // 80150014
  W32(c->r[1]+0x00000060u,c->r[0]); // 80150018
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8015001C
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80150020
  c->lr=0x80150028u; f_8017AC94(c); // 80150024
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150028
  W32(c->r[1]+0x00000164u,c->r[0]); // 8015002C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150030
  c->r[4]=c->r[29]|c->r[29]; // 80150034
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80150038
  c->r[5]=0u+0x00000011u; // 8015003C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150040
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150044
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150048
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 8015004C
  c->lr=0x80150054u; f_8017AC94(c); // 80150050
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150054
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80150058
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8015005C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80150060
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 80150064
  fcmp(c,0,c->f[0],c->f[28]); // 80150068
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 8015006C
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80150070
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 80150074
  if (!crb(c,2)) { goto L_80150148; } // 80150078
  fcmp(c,0,c->f[0],c->f[31]); // 8015007C
  if (!crb(c,2)) { goto L_80150148; } // 80150080
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150084
  c->r[4]=c->r[29]|c->r[29]; // 80150088
  c->r[5]=0u+0x00000050u; // 8015008C
  c->lr=0x80150094u; f_8017AC94(c); // 80150090
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150094
  W32(c->r[1]+0x00000164u,c->r[0]); // 80150098
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8015009C
  c->r[4]=c->r[29]|c->r[29]; // 801500A0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 801500A4
  c->r[5]=0u+0x00000051u; // 801500A8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801500AC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801500B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801500B4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801500B8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 801500BC
  c->lr=0x801500C4u; f_8017AC94(c); // 801500C0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801500C4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801500C8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 801500CC
  c->r[4]=c->r[29]|c->r[29]; // 801500D0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 801500D4
  c->r[5]=0u+0x00000052u; // 801500D8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801500DC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801500E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801500E4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801500E8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 801500EC
  c->lr=0x801500F4u; f_8017AC94(c); // 801500F0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801500F4
  W32(c->r[1]+0x00000164u,c->r[0]); // 801500F8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 801500FC
  c->r[4]=c->r[29]|c->r[29]; // 80150100
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80150104
  c->r[5]=0u+0x00000053u; // 80150108
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8015010C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150110
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150114
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150118
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 8015011C
  c->lr=0x80150124u; f_8017AC94(c); // 80150120
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150124
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80150128
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 8015012C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80150130
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150134
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150138
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8015013C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80150140
  goto L_801502B0; // 80150144
L_80150148:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150148
  fcmp(c,0,c->f[28],c->f[0]); // 8015014C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150150
  if (!crb(c,2)) { goto L_8015015C; } // 80150154
  goto L_80150160; // 80150158
L_8015015C:;
  c->f[28]=c->f[0]; // 8015015C
L_80150160:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150160
  fcmp(c,0,c->f[28],c->f[0]); // 80150164
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150168
  if (!crb(c,2)) { goto L_80150174; } // 8015016C
  goto L_80150178; // 80150170
L_80150174:;
  c->f[28]=c->f[0]; // 80150174
L_80150178:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150178
  c->lr=0x80150180u; f_800C02CC(c); // 8015017C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150180
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80150184
  c->f[1]=c->f[0]; // 80150188
  c->lr=0x80150190u; f_800C02CC(c); // 8015018C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150190
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150194
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150198
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 8015019C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 801501A0
  c->lr=0x801501A8u; f_800C02CC(c); // 801501A4
  c->f[29]=c->ps1[29]=S(c->f[1]); // 801501A8
  c->f[1]=c->f[28]; // 801501AC
  c->lr=0x801501B4u; f_800C02CC(c); // 801501B0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801501B4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 801501B8
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 801501BC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 801501C0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801501C4
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 801501C8
  fcmp(c,0,c->f[2],c->f[0]); // 801501CC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801501D0
  if (!crb(c,2)) { goto L_801501DC; } // 801501D4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 801501D8
L_801501DC:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801501DC
  fcmp(c,0,c->f[2],c->f[0]); // 801501E0
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801501E4
  if (!crb(c,2)) { goto L_801501F0; } // 801501E8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 801501EC
L_801501F0:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801501F0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 801501F4
  fcmp(c,0,c->f[31],c->f[0]); // 801501F8
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 801501FC
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80150200
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150204
  if (!crb(c,2)) { goto L_80150210; } // 80150208
  goto L_80150214; // 8015020C
L_80150210:;
  c->f[31]=c->f[0]; // 80150210
L_80150214:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150214
  fcmp(c,0,c->f[31],c->f[0]); // 80150218
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8015021C
  if (!crb(c,2)) { goto L_80150228; } // 80150220
  goto L_8015022C; // 80150224
L_80150228:;
  c->f[31]=c->f[0]; // 80150228
L_8015022C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015022C
  c->lr=0x80150234u; f_800C02CC(c); // 80150230
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150234
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80150238
  c->f[1]=c->f[0]; // 8015023C
  c->lr=0x80150244u; f_800C02CC(c); // 80150240
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150244
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150248
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015024C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150250
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80150254
  c->lr=0x8015025Cu; f_800C02CC(c); // 80150258
  c->f[28]=c->ps1[28]=S(c->f[1]); // 8015025C
  c->f[1]=c->f[31]; // 80150260
  c->lr=0x80150268u; f_800C02CC(c); // 80150264
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150268
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015026C
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150270
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150274
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80150278
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 8015027C
  fcmp(c,0,c->f[1],c->f[0]); // 80150280
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150284
  if (!crb(c,2)) { goto L_80150290; } // 80150288
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015028C
L_80150290:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150290
  fcmp(c,0,c->f[1],c->f[0]); // 80150294
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150298
  if (!crb(c,2)) { goto L_801502A4; } // 8015029C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 801502A0
L_801502A4:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 801502A4
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 801502A8
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 801502AC
L_801502B0:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 801502B0
  c->r[4]=c->r[29]|c->r[29]; // 801502B4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 801502B8
  c->r[5]=0u+0x00000013u; // 801502BC
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 801502C0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801502C4
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 801502C8
  c->lr=0x801502D0u; f_8017AB54(c); // 801502CC
  W8(c->r[1]+0x0000007Cu,c->r[3]); // 801502D0
  c->r[4]=c->r[29]|c->r[29]; // 801502D4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801502D8
  c->r[5]=0u+0x00000034u; // 801502DC
  c->lr=0x801502E4u; f_8017ADA8(c); // 801502E0
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801502E4
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 801502E8
  c->r[0]=c->r[0]^0x80000000u; // 801502EC
  W32(c->r[1]+0x00000164u,c->r[0]); // 801502F0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801502F4
  c->r[4]=c->r[29]|c->r[29]; // 801502F8
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 801502FC
  c->r[5]=0u+0x00000035u; // 80150300
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150304
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150308
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8015030C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 80150310
  c->lr=0x80150318u; f_8017ADA8(c); // 80150314
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80150318
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8015031C
  c->r[0]=c->r[0]^0x80000000u; // 80150320
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80150324
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150328
  c->r[4]=c->r[29]|c->r[29]; // 8015032C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80150330
  c->r[5]=0u+0x00000036u; // 80150334
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150338
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8015033C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150340
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 80150344
  c->lr=0x8015034Cu; f_8017ADA8(c); // 80150348
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8015034C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 80150350
  c->r[0]=c->r[0]^0x80000000u; // 80150354
  W32(c->r[1]+0x00000164u,c->r[0]); // 80150358
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015035C
  c->r[4]=c->r[29]|c->r[29]; // 80150360
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80150364
  c->r[5]=0u+0x00000037u; // 80150368
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8015036C
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 80150370
  c->lr=0x80150378u; f_8017ADA8(c); // 80150374
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80150378
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8015037C
  c->r[0]=c->r[0]^0x80000000u; // 80150380
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80150384
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150388
  c->r[4]=c->r[29]|c->r[29]; // 8015038C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80150390
  c->r[5]=0u+0x00000038u; // 80150394
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150398
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8015039C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801503A0
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 801503A4
  c->lr=0x801503ACu; f_8017ADA8(c); // 801503A8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801503AC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 801503B0
  c->r[0]=c->r[0]^0x80000000u; // 801503B4
  W32(c->r[1]+0x00000164u,c->r[0]); // 801503B8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801503BC
  c->r[4]=c->r[29]|c->r[29]; // 801503C0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 801503C4
  c->r[5]=0u+0x00000039u; // 801503C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801503CC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801503D0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801503D4
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 801503D8
  c->lr=0x801503E0u; f_8017ADA8(c); // 801503DC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801503E0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 801503E4
  c->r[0]=c->r[0]^0x80000000u; // 801503E8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801503EC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801503F0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 801503F4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801503F8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801503FC
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 80150400
L_80150404:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150404
  c->lr=0x8015040Cu; f_8017A6AC(c); // 80150408
  cmpu(c,0,c->r[3],0x00000054u); // 8015040C
  if (crb(c,1)) { goto L_80150430; } // 80150410
  c->r[4]=0u+0x00000064u; // 80150414
  c->r[3]=0u+0x00000000u; // 80150418
  c->r[0]=0u+0x00000001u; // 8015041C
  W8(c->r[1]+0x0000015Cu,c->r[4]); // 80150420
  W8(c->r[1]+0x0000015Du,c->r[3]); // 80150424
  W8(c->r[1]+0x0000015Eu,c->r[0]); // 80150428
  goto L_8015046C; // 8015042C
L_80150430:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150430
  c->r[4]=c->r[29]|c->r[29]; // 80150434
  c->r[5]=0u+0x00000054u; // 80150438
  c->lr=0x80150440u; f_8017AB54(c); // 8015043C
  W8(c->r[1]+0x0000015Cu,c->r[3]); // 80150440
  c->r[4]=c->r[29]|c->r[29]; // 80150444
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150448
  c->r[5]=0u+0x00000055u; // 8015044C
  c->lr=0x80150454u; f_8017AB54(c); // 80150450
  W8(c->r[1]+0x0000015Du,c->r[3]); // 80150454
  c->r[4]=c->r[29]|c->r[29]; // 80150458
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015045C
  c->r[5]=0u+0x00000056u; // 80150460
  c->lr=0x80150468u; f_8017AB54(c); // 80150464
  W8(c->r[1]+0x0000015Eu,c->r[3]); // 80150468
L_8015046C:;
  c->r[3]=0u+0x00000001u; // 8015046C
L_80150470:;
  c->r[0]=0u-c->r[3]; // 80150470
  c->r[0]=c->r[0]|c->r[3]; // 80150474
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80150478
L_8015047C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8015047C
  if (!crb(c,2)) { goto L_80150494; } // 80150480
  c->r[0]=0u+0xFFFFFFFFu; // 80150484
  W32(c->r[30]+0x00000000u,c->r[0]); // 80150488
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015048C
  goto L_80150498; // 80150490
L_80150494:;
  {uint32_t ea=c->r[1]+0x00000020u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150494
L_80150498:;
  c->r[11]=c->r[1]+0x00000190u; // 80150498
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 8015049C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 801504A0
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 801504A4
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 801504A8
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 801504AC
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 801504B0
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 801504B4
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 801504B8
  c->lr=0x801504C0u; f_800ADA78(c); // 801504BC
  c->r[0]=R32(c->r[1]+0x000001D4u); // 801504C0
  c->lr=c->r[0]; // 801504C4
  c->r[1]=c->r[1]+0x000001D0u; // 801504C8
  return; // 801504CC
}

// GetWaveFormInfo__16CriAuCueSheetLocFUlRQ213CriAuCueSheet12WaveFormInfoR8CriError
void f_801504D0(Ctx* __restrict c) {
  trace_call(0x801504D0u);
  {uint32_t ea=c->r[1]+0xFFFFFE10u; W32(ea,c->r[1]); c->r[1]=ea;} // 801504D0
  c->r[0]=c->lr; // 801504D4
  W32(c->r[1]+0x000001F4u,c->r[0]); // 801504D8
  c->r[11]=c->r[1]+0x000001B0u; // 801504DC
  {uint32_t ea=c->r[1]+0x000001E0u; WF64(ea,c->f[31]);} // 801504E0
  {uint32_t ea=c->r[1]+0x000001E8u; psq_store(c,31,ea,0,0);} // 801504E4
  {uint32_t ea=c->r[1]+0x000001D0u; WF64(ea,c->f[30]);} // 801504E8
  {uint32_t ea=c->r[1]+0x000001D8u; psq_store(c,30,ea,0,0);} // 801504EC
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[29]);} // 801504F0
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,29,ea,0,0);} // 801504F4
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[28]);} // 801504F8
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,28,ea,0,0);} // 801504FC
  c->lr=0x80150504u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80150500
  c->r[0]=0u+0x00000000u; // 80150504
  W32(c->r[6]+0x00000000u,c->r[0]); // 80150508
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 8015050C
  c->r[7]=0u+0x43300000u; // 80150510
  W32(c->r[5]+0x00000000u,c->r[0]); // 80150514
  c->r[27]=c->r[3]|c->r[3]; // 80150518
  c->r[28]=c->r[4]|c->r[4]; // 8015051C
  c->r[29]=c->r[5]|c->r[5]; // 80150520
  W32(c->r[5]+0x00000004u,c->r[0]); // 80150524
  c->r[30]=c->r[6]|c->r[6]; // 80150528
  W32(c->r[5]+0x00000008u,c->r[0]); // 8015052C
  c->r[31]=R32(c->r[3]+0x00000020u); // 80150530
  W32(c->r[1]+0x00000178u,c->r[7]); // 80150534
  cmps(c,0,(int32_t)c->r[31],0); // 80150538
  W32(c->r[1]+0x00000180u,c->r[7]); // 8015053C
  W32(c->r[1]+0x00000020u,c->r[0]); // 80150540
  W32(c->r[1]+0x0000002Cu,c->r[0]); // 80150544
  W32(c->r[1]+0x00000030u,c->r[0]); // 80150548
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 8015054C
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 80150550
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 80150554
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 80150558
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 8015055C
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 80150560
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 80150564
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 80150568
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 8015056C
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 80150570
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[0]);} // 80150574
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[0]);} // 80150578
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 8015057C
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 80150580
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80150584
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 80150588
  W32(c->r[1]+0x000000F0u,c->r[0]); // 8015058C
  W32(c->r[1]+0x000000F4u,c->r[0]); // 80150590
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80150594
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 80150598
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 8015059C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 801505A0
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 801505A4
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 801505A8
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 801505AC
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 801505B0
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 801505B4
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 801505B8
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[0]);} // 801505BC
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[0]);} // 801505C0
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[0]);} // 801505C4
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[0]);} // 801505C8
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[0]);} // 801505CC
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[0]);} // 801505D0
  W32(c->r[1]+0x00000138u,c->r[0]); // 801505D4
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 801505D8
  W32(c->r[1]+0x00000140u,c->r[0]); // 801505DC
  W32(c->r[1]+0x00000144u,c->r[0]); // 801505E0
  W32(c->r[1]+0x00000148u,c->r[0]); // 801505E4
  W32(c->r[1]+0x0000014Cu,c->r[0]); // 801505E8
  W32(c->r[1]+0x00000150u,c->r[0]); // 801505EC
  W32(c->r[1]+0x00000154u,c->r[0]); // 801505F0
  W32(c->r[1]+0x00000158u,c->r[0]); // 801505F4
  if (!crb(c,2)) { goto L_8015061C; } // 801505F8
  c->r[4]=0u+0x802D0000u; // 801505FC
  c->r[5]=c->r[28]|c->r[28]; // 80150600
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80150604
  c->r[3]=0u+0x00000000u; // 80150608
  c->r[4]=c->r[4]+0x0000048Fu; // 8015060C
  c->lr=0x80150614u; f_801794C0(c); // 80150610
  c->r[0]=0u+0x00000000u; // 80150614
  goto L_801511FC; // 80150618
L_8015061C:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 8015061C
  cmpu(c,0,c->r[4],c->r[0]); // 80150620
  if (crb(c,0)) { goto L_80150630; } // 80150624
  c->r[3]=0u+0x00000000u; // 80150628
  goto L_801511F0; // 8015062C
L_80150630:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150630
  c->r[5]=0u+0x00000000u; // 80150634
  c->lr=0x8015063Cu; f_8017B030(c); // 80150638
  W32(c->r[1]+0x00000020u,c->r[3]); // 8015063C
  c->r[4]=c->r[28]|c->r[28]; // 80150640
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150644
  c->r[5]=0u+0x00000001u; // 80150648
  c->lr=0x80150650u; f_8017AB54(c); // 8015064C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80150650
  W32(c->r[1]+0x00000024u,c->r[0]); // 80150654
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150658
  c->r[4]=c->r[28]|c->r[28]; // 8015065C
  c->r[5]=0u+0x00000002u; // 80150660
  c->lr=0x80150668u; f_8017AB54(c); // 80150664
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80150668
  W32(c->r[1]+0x00000028u,c->r[0]); // 8015066C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150670
  c->r[4]=c->r[28]|c->r[28]; // 80150674
  c->r[5]=0u+0x00000003u; // 80150678
  c->lr=0x80150680u; f_8017B030(c); // 8015067C
  W32(c->r[1]+0x0000002Cu,c->r[3]); // 80150680
  c->r[4]=c->r[28]|c->r[28]; // 80150684
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150688
  c->r[5]=0u+0x00000004u; // 8015068C
  c->lr=0x80150694u; f_8017B030(c); // 80150690
  W32(c->r[1]+0x00000030u,c->r[3]); // 80150694
  c->r[4]=c->r[28]|c->r[28]; // 80150698
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015069C
  c->r[5]=0u+0x00000005u; // 801506A0
  c->lr=0x801506A8u; f_8017ADA8(c); // 801506A4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801506A8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 801506AC
  c->r[0]=c->r[0]^0x80000000u; // 801506B0
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 801506B4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801506B8
  c->r[4]=c->r[28]|c->r[28]; // 801506BC
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 801506C0
  c->r[5]=0u+0x00000006u; // 801506C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801506C8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801506CC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801506D0
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 801506D4
  c->lr=0x801506DCu; f_8017ADA8(c); // 801506D8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801506DC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 801506E0
  c->r[0]=c->r[0]^0x80000000u; // 801506E4
  W32(c->r[1]+0x00000184u,c->r[0]); // 801506E8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801506EC
  c->r[4]=c->r[28]|c->r[28]; // 801506F0
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 801506F4
  c->r[5]=0u+0x00000007u; // 801506F8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801506FC
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80150700
  c->lr=0x80150708u; f_8017ADCC(c); // 80150704
  W32(c->r[1]+0x0000017Cu,c->r[3]); // 80150708
  c->r[4]=c->r[28]|c->r[28]; // 8015070C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80150710
  c->r[5]=0u+0x00000009u; // 80150714
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 80150718
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015071C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80150720
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80150724
  c->lr=0x8015072Cu; f_8017AC94(c); // 80150728
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8015072C
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150730
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80150734
  c->r[4]=c->r[28]|c->r[28]; // 80150738
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 8015073C
  c->r[5]=0u+0x0000000Au; // 80150740
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150744
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80150748
  {uint32_t ea=c->r[1]+0x00000040u; WF32(ea,c->f[0]);} // 8015074C
  c->lr=0x80150754u; f_8017AC94(c); // 80150750
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150754
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150758
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8015075C
  c->r[4]=c->r[28]|c->r[28]; // 80150760
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 80150764
  c->r[5]=0u+0x0000000Bu; // 80150768
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015076C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80150770
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80150774
  c->lr=0x8015077Cu; f_8017AC94(c); // 80150778
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8015077C
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150780
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80150784
  c->r[4]=c->r[28]|c->r[28]; // 80150788
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 8015078C
  c->r[5]=0u+0x0000000Cu; // 80150790
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150794
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80150798
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 8015079C
  c->lr=0x801507A4u; f_8017AC94(c); // 801507A0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801507A4
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 801507A8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801507AC
  c->r[4]=c->r[28]|c->r[28]; // 801507B0
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 801507B4
  c->r[5]=0u+0x0000000Du; // 801507B8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801507BC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801507C0
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 801507C4
  c->lr=0x801507CCu; f_8017AC94(c); // 801507C8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801507CC
  W32(c->r[1]+0x00000184u,c->r[0]); // 801507D0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801507D4
  c->r[4]=c->r[28]|c->r[28]; // 801507D8
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 801507DC
  c->r[5]=0u+0x0000000Eu; // 801507E0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801507E4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801507E8
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 801507EC
  c->lr=0x801507F4u; f_8017AC94(c); // 801507F0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801507F4
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 801507F8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 801507FC
  c->r[4]=c->r[28]|c->r[28]; // 80150800
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80150804
  c->r[5]=0u+0x00000014u; // 80150808
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8015080C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150810
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150814
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150818
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 8015081C
  c->lr=0x80150824u; f_8017B030(c); // 80150820
  W32(c->r[1]+0x000000F0u,c->r[3]); // 80150824
  c->r[4]=c->r[28]|c->r[28]; // 80150828
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015082C
  c->r[5]=0u+0x00000015u; // 80150830
  c->lr=0x80150838u; f_8017B030(c); // 80150834
  W32(c->r[1]+0x000000F4u,c->r[3]); // 80150838
  c->r[25]=c->r[1]+0x00000020u; // 8015083C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 80150840
  c->r[26]=0u+0x00000000u; // 80150844
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 80150848
L_8015084C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015084C
  c->r[4]=c->r[28]|c->r[28]; // 80150850
  c->r[5]=c->r[26]+0x00000016u; // 80150854
  c->lr=0x8015085Cu; f_8017AC94(c); // 80150858
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 8015085C
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150860
  c->r[26]=c->r[26]+0x00000001u; // 80150864
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 80150868
  cmpu(c,0,c->r[26],0x00000008u); // 8015086C
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80150870
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 80150874
  {uint32_t ea=c->r[25]+0x00000090u; WF32(ea,c->f[0]);} // 80150878
  c->r[25]=c->r[25]+0x00000004u; // 8015087C
  if (crb(c,0)) { IRQCHK(c); goto L_8015084C; } // 80150880
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150884
  c->r[4]=c->r[28]|c->r[28]; // 80150888
  c->r[5]=0u+0x0000001Eu; // 8015088C
  c->lr=0x80150894u; f_8017B030(c); // 80150890
  W32(c->r[1]+0x00000138u,c->r[3]); // 80150894
  c->r[25]=c->r[1]+0x00000020u; // 80150898
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 8015089C
  c->r[26]=0u+0x00000000u; // 801508A0
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 801508A4
L_801508A8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801508A8
  c->r[4]=c->r[28]|c->r[28]; // 801508AC
  c->r[5]=c->r[26]+0x0000001Fu; // 801508B0
  c->lr=0x801508B8u; f_8017AC94(c); // 801508B4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801508B8
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 801508BC
  c->r[26]=c->r[26]+0x00000001u; // 801508C0
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 801508C4
  cmpu(c,0,c->r[26],0x00000008u); // 801508C8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801508CC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 801508D0
  {uint32_t ea=c->r[25]+0x000000D8u; WF32(ea,c->f[0]);} // 801508D4
  c->r[25]=c->r[25]+0x00000004u; // 801508D8
  if (crb(c,0)) { IRQCHK(c); goto L_801508A8; } // 801508DC
  c->r[25]=c->r[1]+0x00000020u; // 801508E0
  c->r[26]=0u+0x00000000u; // 801508E4
L_801508E8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801508E8
  c->r[4]=c->r[28]|c->r[28]; // 801508EC
  c->r[5]=c->r[26]+0x00000027u; // 801508F0
  c->lr=0x801508F8u; f_8017B030(c); // 801508F4
  c->r[26]=c->r[26]+0x00000001u; // 801508F8
  W32(c->r[25]+0x0000011Cu,c->r[3]); // 801508FC
  cmpu(c,0,c->r[26],0x00000008u); // 80150900
  c->r[25]=c->r[25]+0x00000004u; // 80150904
  if (crb(c,0)) { IRQCHK(c); goto L_801508E8; } // 80150908
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015090C
  c->r[4]=c->r[28]|c->r[28]; // 80150910
  c->r[5]=0u+0x0000002Fu; // 80150914
  c->lr=0x8015091Cu; f_8017B030(c); // 80150918
  W32(c->r[1]+0x0000009Cu,c->r[3]); // 8015091C
  c->r[4]=c->r[28]|c->r[28]; // 80150920
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150924
  c->r[5]=0u+0x00000030u; // 80150928
  c->lr=0x80150930u; f_8017AB54(c); // 8015092C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80150930
  W32(c->r[1]+0x00000098u,c->r[0]); // 80150934
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150938
  c->r[4]=c->r[28]|c->r[28]; // 8015093C
  c->r[5]=0u+0x00000031u; // 80150940
  c->lr=0x80150948u; f_8017AB54(c); // 80150944
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80150948
  W32(c->r[1]+0x000000A0u,c->r[0]); // 8015094C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150950
  c->r[4]=c->r[28]|c->r[28]; // 80150954
  c->r[5]=0u+0x00000032u; // 80150958
  c->lr=0x80150960u; f_8017AC94(c); // 8015095C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150960
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150964
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80150968
  c->r[4]=c->r[28]|c->r[28]; // 8015096C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 80150970
  c->r[5]=0u+0x00000033u; // 80150974
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150978
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8015097C
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 80150980
  c->lr=0x80150988u; f_8017AC70(c); // 80150984
  W8(c->r[1]+0x000000A8u,c->r[3]); // 80150988
  c->r[26]=0u+0x00000000u; // 8015098C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150990
  W32(c->r[1]+0x000000ACu,c->r[26]); // 80150994
  c->lr=0x8015099Cu; f_8017A6AC(c); // 80150998
  cmpu(c,0,c->r[3],0x00000034u); // 8015099C
  if (crb(c,1)) { goto L_80150C10; } // 801509A0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 801509A4
  c->r[6]=0u+0x00000002u; // 801509A8
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 801509AC
  c->r[0]=0u+0x00000005u; // 801509B0
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 801509B4
  c->r[4]=c->r[28]|c->r[28]; // 801509B8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801509BC
  c->r[5]=0u+0x00000010u; // 801509C0
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 801509C4
  {uint32_t ea=c->r[1]+0x000000D8u; WF32(ea,c->f[1]);} // 801509C8
  {uint32_t ea=c->r[1]+0x000000DCu; WF32(ea,c->f[1]);} // 801509CC
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[1]);} // 801509D0
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[1]);} // 801509D4
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[1]);} // 801509D8
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[1]);} // 801509DC
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 801509E0
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 801509E4
  {uint32_t ea=c->r[1]+0x00000120u; WF32(ea,c->f[1]);} // 801509E8
  {uint32_t ea=c->r[1]+0x00000124u; WF32(ea,c->f[1]);} // 801509EC
  {uint32_t ea=c->r[1]+0x00000128u; WF32(ea,c->f[1]);} // 801509F0
  {uint32_t ea=c->r[1]+0x0000012Cu; WF32(ea,c->f[1]);} // 801509F4
  {uint32_t ea=c->r[1]+0x00000130u; WF32(ea,c->f[1]);} // 801509F8
  {uint32_t ea=c->r[1]+0x00000134u; WF32(ea,c->f[1]);} // 801509FC
  W32(c->r[1]+0x00000058u,c->r[26]); // 80150A00
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80150A04
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[0]);} // 80150A08
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80150A0C
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80150A10
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80150A14
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80150A18
  W8(c->r[1]+0x00000074u,c->r[6]); // 80150A1C
  W32(c->r[1]+0x00000078u,c->r[0]); // 80150A20
  c->lr=0x80150A28u; f_8017AC94(c); // 80150A24
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150A28
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150A2C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80150A30
  c->r[4]=c->r[28]|c->r[28]; // 80150A34
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 80150A38
  c->r[5]=0u+0x00000011u; // 80150A3C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150A40
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 80150A44
  c->lr=0x80150A4Cu; f_8017AC94(c); // 80150A48
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150A4C
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150A50
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80150A54
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 80150A58
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 80150A5C
  fcmp(c,0,c->f[29],c->f[31]); // 80150A60
  if (crb(c,2)) { goto L_80150BC4; } // 80150A64
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150A68
  fcmp(c,0,c->f[29],c->f[0]); // 80150A6C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150A70
  if (!crb(c,2)) { goto L_80150A7C; } // 80150A74
  goto L_80150A80; // 80150A78
L_80150A7C:;
  c->f[29]=c->f[0]; // 80150A7C
L_80150A80:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150A80
  fcmp(c,0,c->f[29],c->f[0]); // 80150A84
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150A88
  if (!crb(c,2)) { goto L_80150A94; } // 80150A8C
  goto L_80150A98; // 80150A90
L_80150A94:;
  c->f[29]=c->f[0]; // 80150A94
L_80150A98:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150A98
  c->lr=0x80150AA0u; f_800C02CC(c); // 80150A9C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150AA0
  c->f[30]=c->ps1[30]=S(c->f[1]); // 80150AA4
  c->f[1]=c->f[0]; // 80150AA8
  c->lr=0x80150AB0u; f_800C02CC(c); // 80150AAC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150AB0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150AB4
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150AB8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 80150ABC
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80150AC0
  c->lr=0x80150AC8u; f_800C02CC(c); // 80150AC4
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80150AC8
  c->f[1]=c->f[29]; // 80150ACC
  c->lr=0x80150AD4u; f_800C02CC(c); // 80150AD0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150AD4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150AD8
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150ADC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150AE0
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80150AE4
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80150AE8
  fcmp(c,0,c->f[1],c->f[0]); // 80150AEC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150AF0
  if (!crb(c,2)) { goto L_80150AFC; } // 80150AF4
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150AF8
L_80150AFC:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150AFC
  fcmp(c,0,c->f[1],c->f[0]); // 80150B00
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150B04
  if (!crb(c,2)) { goto L_80150B10; } // 80150B08
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150B0C
L_80150B10:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150B10
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80150B14
  fcmp(c,0,c->f[31],c->f[0]); // 80150B18
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150B1C
  if (!crb(c,2)) { goto L_80150B28; } // 80150B20
  goto L_80150B2C; // 80150B24
L_80150B28:;
  c->f[31]=c->f[0]; // 80150B28
L_80150B2C:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150B2C
  fcmp(c,0,c->f[31],c->f[0]); // 80150B30
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150B34
  if (!crb(c,2)) { goto L_80150B40; } // 80150B38
  goto L_80150B44; // 80150B3C
L_80150B40:;
  c->f[31]=c->f[0]; // 80150B40
L_80150B44:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150B44
  c->lr=0x80150B4Cu; f_800C02CC(c); // 80150B48
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150B4C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80150B50
  c->f[1]=c->f[0]; // 80150B54
  c->lr=0x80150B5Cu; f_800C02CC(c); // 80150B58
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150B5C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150B60
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150B64
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150B68
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80150B6C
  c->lr=0x80150B74u; f_800C02CC(c); // 80150B70
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80150B74
  c->f[1]=c->f[31]; // 80150B78
  c->lr=0x80150B80u; f_800C02CC(c); // 80150B7C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150B80
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150B84
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150B88
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150B8C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80150B90
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80150B94
  fcmp(c,0,c->f[1],c->f[0]); // 80150B98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150B9C
  if (!crb(c,2)) { goto L_80150BA8; } // 80150BA0
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150BA4
L_80150BA8:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150BA8
  fcmp(c,0,c->f[1],c->f[0]); // 80150BAC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150BB0
  if (!crb(c,2)) { goto L_80150BBC; } // 80150BB4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150BB8
L_80150BBC:;
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80150BBC
  goto L_80150BD4; // 80150BC0
L_80150BC4:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150BC4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150BC8
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[1]);} // 80150BCC
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80150BD0
L_80150BD4:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150BD4
  c->r[0]=0u+0x00000002u; // 80150BD8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150BDC
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 80150BE0
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[1]);} // 80150BE4
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 80150BE8
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[1]);} // 80150BEC
  W8(c->r[1]+0x00000094u,c->r[0]); // 80150BF0
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 80150BF4
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[0]);} // 80150BF8
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[0]);} // 80150BFC
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 80150C00
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 80150C04
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 80150C08
  goto L_80151184; // 80150C0C
L_80150C10:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 80150C10
  c->r[25]=c->r[1]+0x00000020u; // 80150C14
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 80150C18
  c->r[26]=0u+0x00000000u; // 80150C1C
L_80150C20:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150C20
  c->r[4]=c->r[28]|c->r[28]; // 80150C24
  c->r[5]=c->r[26]+0x0000003Au; // 80150C28
  c->lr=0x80150C30u; f_8017AC94(c); // 80150C2C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150C30
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150C34
  c->r[26]=c->r[26]+0x00000001u; // 80150C38
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 80150C3C
  cmpu(c,0,c->r[26],0x00000008u); // 80150C40
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80150C44
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 80150C48
  {uint32_t ea=c->r[25]+0x000000B0u; WF32(ea,c->f[0]);} // 80150C4C
  c->r[25]=c->r[25]+0x00000004u; // 80150C50
  if (crb(c,0)) { IRQCHK(c); goto L_80150C20; } // 80150C54
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 80150C58
  c->r[25]=c->r[1]+0x00000020u; // 80150C5C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 80150C60
  c->r[26]=0u+0x00000000u; // 80150C64
L_80150C68:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150C68
  c->r[4]=c->r[28]|c->r[28]; // 80150C6C
  c->r[5]=c->r[26]+0x00000042u; // 80150C70
  c->lr=0x80150C78u; f_8017AC94(c); // 80150C74
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150C78
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150C7C
  c->r[26]=c->r[26]+0x00000001u; // 80150C80
  {uint32_t ea=c->r[1]+0x00000180u; c->f[0]=RF64(ea);} // 80150C84
  cmpu(c,0,c->r[26],0x00000008u); // 80150C88
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80150C8C
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 80150C90
  {uint32_t ea=c->r[25]+0x000000F8u; WF32(ea,c->f[0]);} // 80150C94
  c->r[25]=c->r[25]+0x00000004u; // 80150C98
  if (crb(c,0)) { IRQCHK(c); goto L_80150C68; } // 80150C9C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150CA0
  c->r[4]=c->r[28]|c->r[28]; // 80150CA4
  c->r[5]=0u+0x0000004Au; // 80150CA8
  c->lr=0x80150CB0u; f_8017AB54(c); // 80150CAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80150CB0
  W32(c->r[1]+0x00000058u,c->r[0]); // 80150CB4
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150CB8
  c->r[4]=c->r[28]|c->r[28]; // 80150CBC
  c->r[5]=0u+0x0000004Bu; // 80150CC0
  c->lr=0x80150CC8u; f_8017AC94(c); // 80150CC4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150CC8
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150CCC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150CD0
  c->r[4]=c->r[28]|c->r[28]; // 80150CD4
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80150CD8
  c->r[5]=0u+0x0000004Cu; // 80150CDC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150CE0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150CE4
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150CE8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150CEC
  {uint32_t ea=c->r[1]+0x0000005Cu; WF32(ea,c->f[0]);} // 80150CF0
  c->lr=0x80150CF8u; f_8017AC94(c); // 80150CF4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150CF8
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150CFC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150D00
  c->r[4]=c->r[28]|c->r[28]; // 80150D04
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80150D08
  c->r[5]=0u+0x0000004Du; // 80150D0C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[2]=RF64(ea);} // 80150D10
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150D14
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 80150D18
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80150D1C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80150D20
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150D24
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 80150D28
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80150D2C
  {uint32_t ea=c->r[1]+0x00000060u; WF32(ea,c->f[1]);} // 80150D30
  c->lr=0x80150D38u; f_8017AC94(c); // 80150D34
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150D38
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150D3C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150D40
  c->r[4]=c->r[28]|c->r[28]; // 80150D44
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80150D48
  c->r[5]=0u+0x0000004Eu; // 80150D4C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150D50
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150D54
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150D58
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150D5C
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80150D60
  c->lr=0x80150D68u; f_8017AC94(c); // 80150D64
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150D68
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150D6C
  c->r[3]=0u+0x00000002u; // 80150D70
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150D74
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=RF64(ea);} // 80150D78
  c->r[0]=0u+0x00000005u; // 80150D7C
  W8(c->r[1]+0x00000074u,c->r[3]); // 80150D80
  c->r[4]=c->r[28]|c->r[28]; // 80150D84
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150D88
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150D8C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150D90
  c->r[5]=0u+0x00000010u; // 80150D94
  W32(c->r[1]+0x00000078u,c->r[0]); // 80150D98
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150D9C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80150DA0
  c->lr=0x80150DA8u; f_8017AC94(c); // 80150DA4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150DA8
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150DAC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150DB0
  c->r[4]=c->r[28]|c->r[28]; // 80150DB4
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80150DB8
  c->r[5]=0u+0x00000011u; // 80150DBC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150DC0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150DC4
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150DC8
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 80150DCC
  c->lr=0x80150DD4u; f_8017AC94(c); // 80150DD0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150DD4
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150DD8
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150DDC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80150DE0
  {uint32_t ea=c->r[1]+0x00000180u; c->f[2]=RF64(ea);} // 80150DE4
  fcmp(c,0,c->f[0],c->f[28]); // 80150DE8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80150DEC
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80150DF0
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 80150DF4
  if (!crb(c,2)) { goto L_80150EC8; } // 80150DF8
  fcmp(c,0,c->f[0],c->f[31]); // 80150DFC
  if (!crb(c,2)) { goto L_80150EC8; } // 80150E00
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150E04
  c->r[4]=c->r[28]|c->r[28]; // 80150E08
  c->r[5]=0u+0x00000050u; // 80150E0C
  c->lr=0x80150E14u; f_8017AC94(c); // 80150E10
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150E14
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150E18
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150E1C
  c->r[4]=c->r[28]|c->r[28]; // 80150E20
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80150E24
  c->r[5]=0u+0x00000051u; // 80150E28
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150E2C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150E30
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150E34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150E38
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[0]);} // 80150E3C
  c->lr=0x80150E44u; f_8017AC94(c); // 80150E40
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150E44
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150E48
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150E4C
  c->r[4]=c->r[28]|c->r[28]; // 80150E50
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=RF64(ea);} // 80150E54
  c->r[5]=0u+0x00000052u; // 80150E58
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150E5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150E60
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150E64
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150E68
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[0]);} // 80150E6C
  c->lr=0x80150E74u; f_8017AC94(c); // 80150E70
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150E74
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80150E78
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150E7C
  c->r[4]=c->r[28]|c->r[28]; // 80150E80
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80150E84
  c->r[5]=0u+0x00000053u; // 80150E88
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150E8C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150E90
  c->r[3]=R32(c->r[31]+0x00000004u); // 80150E94
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150E98
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[0]);} // 80150E9C
  c->lr=0x80150EA4u; f_8017AC94(c); // 80150EA0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80150EA4
  W32(c->r[1]+0x00000184u,c->r[0]); // 80150EA8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80150EAC
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=RF64(ea);} // 80150EB0
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150EB4
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80150EB8
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80150EBC
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 80150EC0
  goto L_80151030; // 80150EC4
L_80150EC8:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150EC8
  fcmp(c,0,c->f[28],c->f[0]); // 80150ECC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150ED0
  if (!crb(c,2)) { goto L_80150EDC; } // 80150ED4
  goto L_80150EE0; // 80150ED8
L_80150EDC:;
  c->f[28]=c->f[0]; // 80150EDC
L_80150EE0:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150EE0
  fcmp(c,0,c->f[28],c->f[0]); // 80150EE4
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150EE8
  if (!crb(c,2)) { goto L_80150EF4; } // 80150EEC
  goto L_80150EF8; // 80150EF0
L_80150EF4:;
  c->f[28]=c->f[0]; // 80150EF4
L_80150EF8:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150EF8
  c->lr=0x80150F00u; f_800C02CC(c); // 80150EFC
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150F00
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80150F04
  c->f[1]=c->f[0]; // 80150F08
  c->lr=0x80150F10u; f_800C02CC(c); // 80150F0C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150F10
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150F14
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150F18
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80150F1C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80150F20
  c->lr=0x80150F28u; f_800C02CC(c); // 80150F24
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80150F28
  c->f[1]=c->f[28]; // 80150F2C
  c->lr=0x80150F34u; f_800C02CC(c); // 80150F30
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150F34
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150F38
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150F3C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80150F40
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80150F44
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 80150F48
  fcmp(c,0,c->f[2],c->f[0]); // 80150F4C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150F50
  if (!crb(c,2)) { goto L_80150F5C; } // 80150F54
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 80150F58
L_80150F5C:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80150F5C
  fcmp(c,0,c->f[2],c->f[0]); // 80150F60
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150F64
  if (!crb(c,2)) { goto L_80150F70; } // 80150F68
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 80150F6C
L_80150F70:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150F70
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150F74
  fcmp(c,0,c->f[31],c->f[0]); // 80150F78
  {uint32_t ea=c->r[1]+0x0000007Cu; WF32(ea,c->f[2]);} // 80150F7C
  {uint32_t ea=c->r[1]+0x00000080u; WF32(ea,c->f[1]);} // 80150F80
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80150F84
  if (!crb(c,2)) { goto L_80150F90; } // 80150F88
  goto L_80150F94; // 80150F8C
L_80150F90:;
  c->f[31]=c->f[0]; // 80150F90
L_80150F94:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150F94
  fcmp(c,0,c->f[31],c->f[0]); // 80150F98
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80150F9C
  if (!crb(c,2)) { goto L_80150FA8; } // 80150FA0
  goto L_80150FAC; // 80150FA4
L_80150FA8:;
  c->f[31]=c->f[0]; // 80150FA8
L_80150FAC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150FAC
  c->lr=0x80150FB4u; f_800C02CC(c); // 80150FB0
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150FB4
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80150FB8
  c->f[1]=c->f[0]; // 80150FBC
  c->lr=0x80150FC4u; f_800C02CC(c); // 80150FC0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150FC4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150FC8
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150FCC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150FD0
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80150FD4
  c->lr=0x80150FDCu; f_800C02CC(c); // 80150FD8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80150FDC
  c->f[1]=c->f[31]; // 80150FE0
  c->lr=0x80150FE8u; f_800C02CC(c); // 80150FE4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80150FE8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80150FEC
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80150FF0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80150FF4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80150FF8
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80150FFC
  fcmp(c,0,c->f[1],c->f[0]); // 80151000
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80151004
  if (!crb(c,2)) { goto L_80151010; } // 80151008
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015100C
L_80151010:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80151010
  fcmp(c,0,c->f[1],c->f[0]); // 80151014
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80151018
  if (!crb(c,2)) { goto L_80151024; } // 8015101C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80151020
L_80151024:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80151024
  {uint32_t ea=c->r[1]+0x00000084u; WF32(ea,c->f[1]);} // 80151028
  {uint32_t ea=c->r[1]+0x00000088u; WF32(ea,c->f[0]);} // 8015102C
L_80151030:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80151030
  c->r[4]=c->r[28]|c->r[28]; // 80151034
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80151038
  c->r[5]=0u+0x00000013u; // 8015103C
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[1]);} // 80151040
  c->r[3]=R32(c->r[31]+0x00000004u); // 80151044
  {uint32_t ea=c->r[1]+0x00000090u; WF32(ea,c->f[0]);} // 80151048
  c->lr=0x80151050u; f_8017AB54(c); // 8015104C
  W8(c->r[1]+0x00000094u,c->r[3]); // 80151050
  c->r[4]=c->r[28]|c->r[28]; // 80151054
  c->r[3]=R32(c->r[31]+0x00000004u); // 80151058
  c->r[5]=0u+0x00000034u; // 8015105C
  c->lr=0x80151064u; f_8017ADA8(c); // 80151060
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80151064
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80151068
  c->r[0]=c->r[0]^0x80000000u; // 8015106C
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80151070
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80151074
  c->r[4]=c->r[28]|c->r[28]; // 80151078
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 8015107C
  c->r[5]=0u+0x00000035u; // 80151080
  c->r[3]=R32(c->r[31]+0x00000004u); // 80151084
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80151088
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8015108C
  {uint32_t ea=c->r[1]+0x0000015Cu; WF32(ea,c->f[0]);} // 80151090
  c->lr=0x80151098u; f_8017ADA8(c); // 80151094
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80151098
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 8015109C
  c->r[0]=c->r[0]^0x80000000u; // 801510A0
  W32(c->r[1]+0x00000184u,c->r[0]); // 801510A4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801510A8
  c->r[4]=c->r[28]|c->r[28]; // 801510AC
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=RF64(ea);} // 801510B0
  c->r[5]=0u+0x00000036u; // 801510B4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801510B8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 801510BC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 801510C0
  {uint32_t ea=c->r[1]+0x00000160u; WF32(ea,c->f[0]);} // 801510C4
  c->lr=0x801510CCu; f_8017ADA8(c); // 801510C8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801510CC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 801510D0
  c->r[0]=c->r[0]^0x80000000u; // 801510D4
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 801510D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801510DC
  c->r[4]=c->r[28]|c->r[28]; // 801510E0
  {uint32_t ea=c->r[1]+0x00000178u; c->f[0]=RF64(ea);} // 801510E4
  c->r[5]=0u+0x00000037u; // 801510E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801510EC
  {uint32_t ea=c->r[1]+0x00000164u; WF32(ea,c->f[0]);} // 801510F0
  c->lr=0x801510F8u; f_8017ADA8(c); // 801510F4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 801510F8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 801510FC
  c->r[0]=c->r[0]^0x80000000u; // 80151100
  W32(c->r[1]+0x00000184u,c->r[0]); // 80151104
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80151108
  c->r[4]=c->r[28]|c->r[28]; // 8015110C
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=RF64(ea);} // 80151110
  c->r[5]=0u+0x00000038u; // 80151114
  c->r[3]=R32(c->r[31]+0x00000004u); // 80151118
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8015111C
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80151120
  {uint32_t ea=c->r[1]+0x00000168u; WF32(ea,c->f[0]);} // 80151124
  c->lr=0x8015112Cu; f_8017ADA8(c); // 80151128
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 8015112C
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80151130
  c->r[0]=c->r[0]^0x80000000u; // 80151134
  W32(c->r[1]+0x0000017Cu,c->r[0]); // 80151138
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 8015113C
  c->r[4]=c->r[28]|c->r[28]; // 80151140
  {uint32_t ea=c->r[1]+0x00000178u; c->f[1]=RF64(ea);} // 80151144
  c->r[5]=0u+0x00000039u; // 80151148
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015114C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80151150
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80151154
  {uint32_t ea=c->r[1]+0x0000016Cu; WF32(ea,c->f[0]);} // 80151158
  c->lr=0x80151160u; f_8017ADA8(c); // 8015115C
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80151160
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80151164
  c->r[0]=c->r[0]^0x80000000u; // 80151168
  W32(c->r[1]+0x00000184u,c->r[0]); // 8015116C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80151170
  {uint32_t ea=c->r[1]+0x00000180u; c->f[1]=RF64(ea);} // 80151174
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80151178
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8015117C
  {uint32_t ea=c->r[1]+0x00000170u; WF32(ea,c->f[0]);} // 80151180
L_80151184:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80151184
  c->lr=0x8015118Cu; f_8017A6AC(c); // 80151188
  cmpu(c,0,c->r[3],0x00000054u); // 8015118C
  if (crb(c,1)) { goto L_801511B0; } // 80151190
  c->r[4]=0u+0x00000064u; // 80151194
  c->r[3]=0u+0x00000000u; // 80151198
  c->r[0]=0u+0x00000001u; // 8015119C
  W8(c->r[1]+0x00000174u,c->r[4]); // 801511A0
  W8(c->r[1]+0x00000175u,c->r[3]); // 801511A4
  W8(c->r[1]+0x00000176u,c->r[0]); // 801511A8
  goto L_801511EC; // 801511AC
L_801511B0:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801511B0
  c->r[4]=c->r[28]|c->r[28]; // 801511B4
  c->r[5]=0u+0x00000054u; // 801511B8
  c->lr=0x801511C0u; f_8017AB54(c); // 801511BC
  W8(c->r[1]+0x00000174u,c->r[3]); // 801511C0
  c->r[4]=c->r[28]|c->r[28]; // 801511C4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801511C8
  c->r[5]=0u+0x00000055u; // 801511CC
  c->lr=0x801511D4u; f_8017AB54(c); // 801511D0
  W8(c->r[1]+0x00000175u,c->r[3]); // 801511D4
  c->r[4]=c->r[28]|c->r[28]; // 801511D8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801511DC
  c->r[5]=0u+0x00000056u; // 801511E0
  c->lr=0x801511E8u; f_8017AB54(c); // 801511E4
  W8(c->r[1]+0x00000176u,c->r[3]); // 801511E8
L_801511EC:;
  c->r[3]=0u+0x00000001u; // 801511EC
L_801511F0:;
  c->r[0]=0u-c->r[3]; // 801511F0
  c->r[0]=c->r[0]|c->r[3]; // 801511F4
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 801511F8
L_801511FC:;
  cmps(c,0,(int32_t)c->r[0],0); // 801511FC
  if (!crb(c,2)) { goto L_80151210; } // 80151200
  c->r[0]=0u+0xFFFFFFFFu; // 80151204
  W32(c->r[30]+0x00000000u,c->r[0]); // 80151208
  goto L_80151368; // 8015120C
L_80151210:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80151210
  cmps(c,0,(int32_t)c->r[0],0); // 80151214
  if (crb(c,2)) { goto L_80151228; } // 80151218
  c->r[0]=0u+0xFFFFFFFFu; // 8015121C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80151220
  goto L_80151368; // 80151224
L_80151228:;
  c->r[25]=R32(c->r[27]+0x00000024u); // 80151228
  c->r[27]=0u+0x00000000u; // 8015122C
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 80151230
  c->r[28]=0u+0x00000000u; // 80151234
  cmps(c,0,(int32_t)c->r[25],0); // 80151238
  c->r[31]=0u+0x00000000u; // 8015123C
  if (!crb(c,2)) { goto L_80151260; } // 80151240
  c->r[4]=0u+0x802D0000u; // 80151244
  c->r[3]=0u+0x00000000u; // 80151248
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8015124C
  c->r[4]=c->r[4]+0x00000452u; // 80151250
  c->lr=0x80151258u; f_801794C0(c); // 80151254
  c->r[0]=0u+0x00000000u; // 80151258
  goto L_8015132C; // 8015125C
L_80151260:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80151260
  c->r[4]=0u+0x00000000u; // 80151264
  c->lr=0x8015126Cu; f_8017A8C0(c); // 80151268
  c->r[0]=R32(c->r[25]+0x00000008u); // 8015126C
  c->r[26]=c->r[3]|c->r[3]; // 80151270
  cmpu(c,0,c->r[3],c->r[0]); // 80151274
  if (crb(c,0)) { goto L_80151284; } // 80151278
  c->r[3]=0u+0x00000000u; // 8015127C
  goto L_80151320; // 80151280
L_80151284:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80151284
  c->r[4]=c->r[26]|c->r[26]; // 80151288
  c->r[5]=0u+0x00000000u; // 8015128C
  c->lr=0x80151294u; f_8017B030(c); // 80151290
  c->r[3]=R32(c->r[25]+0x00000004u); // 80151294
  c->r[4]=c->r[26]|c->r[26]; // 80151298
  c->r[6]=c->r[1]+0x00000008u; // 8015129C
  c->r[5]=0u+0x00000001u; // 801512A0
  c->lr=0x801512A8u; f_8017A738(c); // 801512A4
  c->r[3]=R32(c->r[25]+0x00000004u); // 801512A8
  c->r[4]=c->r[26]|c->r[26]; // 801512AC
  c->r[5]=0u+0x00000002u; // 801512B0
  c->lr=0x801512B8u; f_8017AB54(c); // 801512B4
  c->r[3]=R32(c->r[25]+0x00000004u); // 801512B8
  c->r[4]=c->r[26]|c->r[26]; // 801512BC
  c->r[5]=0u+0x00000003u; // 801512C0
  c->lr=0x801512C8u; f_8017AB54(c); // 801512C4
  c->r[28]=c->r[3]|c->r[3]; // 801512C8
  c->r[3]=R32(c->r[25]+0x00000004u); // 801512CC
  c->r[4]=c->r[26]|c->r[26]; // 801512D0
  c->r[5]=0u+0x00000004u; // 801512D4
  c->lr=0x801512DCu; f_8017AB54(c); // 801512D8
  c->r[3]=R32(c->r[25]+0x00000004u); // 801512DC
  c->r[4]=c->r[26]|c->r[26]; // 801512E0
  c->r[5]=0u+0x00000005u; // 801512E4
  c->lr=0x801512ECu; f_8017ADCC(c); // 801512E8
  c->r[27]=c->r[3]|c->r[3]; // 801512EC
  c->r[3]=R32(c->r[25]+0x00000004u); // 801512F0
  c->lr=0x801512F8u; f_8017A6AC(c); // 801512F4
  cmpu(c,0,c->r[3],0x00000006u); // 801512F8
  if (!crb(c,1)) { goto L_80151314; } // 801512FC
  c->r[3]=R32(c->r[25]+0x00000004u); // 80151300
  c->r[4]=c->r[26]|c->r[26]; // 80151304
  c->r[5]=0u+0x00000006u; // 80151308
  c->lr=0x80151310u; f_8017ADCC(c); // 8015130C
  goto L_80151318; // 80151310
L_80151314:;
  c->r[3]=0u+0x00000000u; // 80151314
L_80151318:;
  c->r[31]=c->r[3]|c->r[3]; // 80151318
  c->r[3]=0u+0x00000001u; // 8015131C
L_80151320:;
  c->r[0]=0u-c->r[3]; // 80151320
  c->r[0]=c->r[0]|c->r[3]; // 80151324
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80151328
L_8015132C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8015132C
  if (!crb(c,2)) { goto L_80151358; } // 80151330
  c->r[4]=0u+0x802D0000u; // 80151334
  c->r[5]=R32(c->r[1]+0x0000002Cu); // 80151338
  c->r[4]=c->r[4]+0xFFFFDD30u; // 8015133C
  c->r[3]=0u+0x00000000u; // 80151340
  c->r[4]=c->r[4]+0x0000053Au; // 80151344
  c->lr=0x8015134Cu; f_801794C0(c); // 80151348
  c->r[0]=0u+0xFFFFFFFFu; // 8015134C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80151350
  goto L_80151368; // 80151354
L_80151358:;
  c->r[0]=rotl(c->r[28],0)&0x000000FFu; // 80151358
  W32(c->r[29]+0x00000004u,c->r[27]); // 8015135C
  W32(c->r[29]+0x00000000u,c->r[0]); // 80151360
  W32(c->r[29]+0x00000008u,c->r[31]); // 80151364
L_80151368:;
  c->r[11]=c->r[1]+0x000001B0u; // 80151368
  {uint32_t ea=c->r[1]+0x000001E8u; psq_load(c,31,ea,0,0);} // 8015136C
  {uint32_t ea=c->r[1]+0x000001E0u; c->f[31]=RF64(ea);} // 80151370
  {uint32_t ea=c->r[1]+0x000001D8u; psq_load(c,30,ea,0,0);} // 80151374
  {uint32_t ea=c->r[1]+0x000001D0u; c->f[30]=RF64(ea);} // 80151378
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,29,ea,0,0);} // 8015137C
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[29]=RF64(ea);} // 80151380
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,28,ea,0,0);} // 80151384
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[28]=RF64(ea);} // 80151388
  c->lr=0x80151390u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8015138C
  c->r[0]=R32(c->r[1]+0x000001F4u); // 80151390
  c->lr=c->r[0]; // 80151394
  c->r[1]=c->r[1]+0x000001F0u; // 80151398
  return; // 8015139C
}

// CreateTables__16CriAuCueSheetLocFv
void f_801513A0(Ctx* __restrict c) {
  trace_call(0x801513A0u);
  {uint32_t ea=c->r[1]+0xFFFFFE80u; W32(ea,c->r[1]); c->r[1]=ea;} // 801513A0
  c->r[0]=c->lr; // 801513A4
  W32(c->r[1]+0x00000184u,c->r[0]); // 801513A8
  c->r[11]=c->r[1]+0x00000180u; // 801513AC
  c->lr=0x801513B4u; { W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801513B0
  c->r[31]=c->r[1]|c->r[1]; // 801513B4
  c->r[0]=R32(c->r[3]+0x00000018u); // 801513B8
  c->r[19]=c->r[3]|c->r[3]; // 801513BC
  cmps(c,0,(int32_t)c->r[0],0); // 801513C0
  if (crb(c,2)) { goto L_801513E4; } // 801513C4
  c->r[4]=0u+0x802D0000u; // 801513C8
  c->r[3]=0u+0x00000000u; // 801513CC
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801513D0
  c->r[4]=c->r[4]+0x00000562u; // 801513D4
  c->lr=0x801513DCu; f_80179434(c); // 801513D8
  c->r[3]=0u+0x00000000u; // 801513DC
  goto L_80151ED4; // 801513E0
L_801513E4:;
  c->r[20]=R32(c->r[3]+0x00000004u); // 801513E4
  c->r[6]=0u+0x80330000u; // 801513E8
  c->r[22]=R32(c->r[3]+0x00000014u); // 801513EC
  c->r[6]=c->r[6]+0x00000B90u; // 801513F0
  c->r[21]=R32(c->r[3]+0x0000000Cu); // 801513F4
  c->r[4]=c->r[20]|c->r[20]; // 801513F8
  c->r[3]=0u+0x0000000Cu; // 801513FC
  c->r[5]=0u+0x00000002u; // 80151400
  c->r[7]=0u+0x00000004u; // 80151404
  c->lr=0x8015140Cu; f_8017BF5C(c); // 80151408
  cmps(c,0,(int32_t)c->r[3],0); // 8015140C
  c->r[30]=c->r[3]|c->r[3]; // 80151410
  if (crb(c,2)) { goto L_80151434; } // 80151414
  c->r[0]=0u+0x00000000u; // 80151418
  W32(c->r[3]+0x00000004u,c->r[0]); // 8015141C
  c->r[4]=0u+0x80330000u; // 80151420
  W32(c->r[3]+0x00000008u,c->r[0]); // 80151424
  c->r[4]=c->r[4]+0x000009E0u; // 80151428
  W32(c->r[31]+0x00000124u,c->r[1]); // 8015142C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80151430
L_80151434:;
  cmps(c,0,(int32_t)c->r[3],0); // 80151434
  if (!crb(c,2)) { goto L_80151458; } // 80151438
  c->r[4]=0u+0x80330000u; // 8015143C
  c->r[3]=0u+0x00000000u; // 80151440
  c->r[4]=c->r[4]+0x00000B84u; // 80151444
  c->r[5]=0u+0xFFFFFFFDu; // 80151448
  c->lr=0x80151450u; f_8017968C(c); // 8015144C
  c->r[30]=0u+0x00000000u; // 80151450
  goto L_801514A8; // 80151454
L_80151458:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80151458
  c->r[3]=c->r[30]|c->r[30]; // 8015145C
  c->r[4]=c->r[20]|c->r[20]; // 80151460
  c->r[5]=c->r[21]|c->r[21]; // 80151464
  c->r[12]=R32(c->r[12]+0x00000010u); // 80151468
  c->r[6]=c->r[22]|c->r[22]; // 8015146C
  c->ctr=c->r[12]; // 80151470
  if (true) { c->lr=0x80151478u; dispatch(c,c->ctr); } // 80151474
  cmps(c,0,(int32_t)c->r[3],0); // 80151478
  if (!crb(c,2)) { goto L_801514A8; } // 8015147C
  cmps(c,0,(int32_t)c->r[30],0); // 80151480
  if (crb(c,2)) { goto L_801514A4; } // 80151484
  c->r[12]=R32(c->r[30]+0x00000000u); // 80151488
  c->r[0]=0u+0x00000001u; // 8015148C
  c->r[3]=c->r[30]|c->r[30]; // 80151490
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80151494
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80151498
  c->ctr=c->r[12]; // 8015149C
  if (true) { c->lr=0x801514A4u; dispatch(c,c->ctr); } // 801514A0
L_801514A4:;
  c->r[30]=0u+0x00000000u; // 801514A4
L_801514A8:;
  cmps(c,0,(int32_t)c->r[30],0); // 801514A8
  W32(c->r[19]+0x00000018u,c->r[30]); // 801514AC
  if (!crb(c,2)) { goto L_801514D0; } // 801514B0
  c->r[4]=0u+0x802D0000u; // 801514B4
  c->r[3]=0u+0x00000000u; // 801514B8
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801514BC
  c->r[4]=c->r[4]+0x0000058Eu; // 801514C0
  c->lr=0x801514C8u; f_80179434(c); // 801514C4
  c->r[3]=0u+0x00000000u; // 801514C8
  goto L_80151ED4; // 801514CC
L_801514D0:;
  c->r[4]=0u+0x802D0000u; // 801514D0
  c->r[3]=R32(c->r[30]+0x00000004u); // 801514D4
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801514D8
  c->r[29]=0u+0x00000000u; // 801514DC
  c->r[5]=c->r[4]+0x000005B9u; // 801514E0
  c->r[28]=0u+0x00000000u; // 801514E4
  c->r[27]=0u+0x00000000u; // 801514E8
  c->r[26]=0u+0x00000000u; // 801514EC
  c->r[25]=0u+0x00000000u; // 801514F0
  c->r[24]=0u+0x00000000u; // 801514F4
  c->r[23]=0u+0x00000000u; // 801514F8
  c->r[22]=0u+0x00000000u; // 801514FC
  c->r[21]=0u+0x00000000u; // 80151500
  c->r[20]=0u+0x00000000u; // 80151504
  c->r[4]=0u+0x00000000u; // 80151508
  c->lr=0x80151510u; f_8017A8C0(c); // 8015150C
  c->r[0]=R32(c->r[30]+0x00000008u); // 80151510
  c->r[18]=c->r[3]|c->r[3]; // 80151514
  cmpu(c,0,c->r[3],c->r[0]); // 80151518
  if (crb(c,0)) { goto L_80151528; } // 8015151C
  c->r[0]=0u+0x00000000u; // 80151520
  goto L_80151568; // 80151524
L_80151528:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80151528
  c->r[4]=c->r[18]|c->r[18]; // 8015152C
  c->r[5]=0u+0x00000000u; // 80151530
  c->lr=0x80151538u; f_8017B030(c); // 80151534
  c->r[3]=R32(c->r[30]+0x00000004u); // 80151538
  c->r[4]=c->r[18]|c->r[18]; // 8015153C
  c->r[6]=c->r[31]+0x000000F8u; // 80151540
  c->r[5]=0u+0x00000002u; // 80151544
  c->lr=0x8015154Cu; f_8017A738(c); // 80151548
  c->r[29]=R32(c->r[31]+0x00000100u); // 8015154C
  c->r[4]=c->r[18]|c->r[18]; // 80151550
  c->r[28]=R32(c->r[31]+0x00000104u); // 80151554
  c->r[5]=0u+0x00000001u; // 80151558
  c->r[3]=R32(c->r[30]+0x00000004u); // 8015155C
  c->lr=0x80151564u; f_8017AB54(c); // 80151560
  c->r[0]=0u+0x00000001u; // 80151564
L_80151568:;
  cmps(c,0,(int32_t)c->r[0],1); // 80151568
  if (!crb(c,2)) { goto L_801516A0; } // 8015156C
  c->r[18]=R32(c->r[19]+0x00000004u); // 80151570
  c->r[6]=0u+0x80330000u; // 80151574
  c->r[6]=c->r[6]+0x00000BA8u; // 80151578
  c->r[3]=0u+0x0000000Cu; // 8015157C
  c->r[4]=c->r[18]|c->r[18]; // 80151580
  c->r[5]=0u+0x00000002u; // 80151584
  c->r[7]=0u+0x00000004u; // 80151588
  c->lr=0x80151590u; f_8017BF5C(c); // 8015158C
  cmps(c,0,(int32_t)c->r[3],0); // 80151590
  c->r[30]=c->r[3]|c->r[3]; // 80151594
  if (crb(c,2)) { goto L_801515B8; } // 80151598
  c->r[0]=0u+0x00000000u; // 8015159C
  W32(c->r[3]+0x00000004u,c->r[0]); // 801515A0
  c->r[4]=0u+0x80330000u; // 801515A4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801515A8
  c->r[4]=c->r[4]+0x00000A10u; // 801515AC
  W32(c->r[31]+0x000000F4u,c->r[1]); // 801515B0
  W32(c->r[3]+0x00000000u,c->r[4]); // 801515B4
L_801515B8:;
  cmps(c,0,(int32_t)c->r[3],0); // 801515B8
  if (!crb(c,2)) { goto L_801515DC; } // 801515BC
  c->r[4]=0u+0x80330000u; // 801515C0
  c->r[3]=0u+0x00000000u; // 801515C4
  c->r[4]=c->r[4]+0x00000B9Cu; // 801515C8
  c->r[5]=0u+0xFFFFFFFDu; // 801515CC
  c->lr=0x801515D4u; f_8017968C(c); // 801515D0
  c->r[30]=0u+0x00000000u; // 801515D4
  goto L_80151670; // 801515D8
L_801515DC:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801515DC
  c->r[3]=c->r[30]|c->r[30]; // 801515E0
  c->r[4]=c->r[18]|c->r[18]; // 801515E4
  c->r[5]=c->r[29]|c->r[29]; // 801515E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801515EC
  c->r[6]=c->r[28]|c->r[28]; // 801515F0
  c->ctr=c->r[12]; // 801515F4
  if (true) { c->lr=0x801515FCu; dispatch(c,c->ctr); } // 801515F8
  cmps(c,0,(int32_t)c->r[3],0); // 801515FC
  if (!crb(c,2)) { goto L_80151630; } // 80151600
  cmps(c,0,(int32_t)c->r[30],0); // 80151604
  if (crb(c,2)) { goto L_80151628; } // 80151608
  c->r[12]=R32(c->r[30]+0x00000000u); // 8015160C
  c->r[0]=0u+0x00000001u; // 80151610
  c->r[3]=c->r[30]|c->r[30]; // 80151614
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80151618
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8015161C
  c->ctr=c->r[12]; // 80151620
  if (true) { c->lr=0x80151628u; dispatch(c,c->ctr); } // 80151624
L_80151628:;
  c->r[30]=0u+0x00000000u; // 80151628
  goto L_80151670; // 8015162C
L_80151630:;
  c->r[3]=R32(c->r[30]+0x00000004u); // 80151630
  c->r[4]=0u+0x00000000u; // 80151634
  c->r[5]=0u+0x00000000u; // 80151638
  c->lr=0x80151640u; f_8017B648(c); // 8015163C
  cmps(c,0,(int32_t)c->r[3],0); // 80151640
  if (!crb(c,2)) { goto L_80151670; } // 80151644
  cmps(c,0,(int32_t)c->r[30],0); // 80151648
  if (crb(c,2)) { goto L_8015166C; } // 8015164C
  c->r[12]=R32(c->r[30]+0x00000000u); // 80151650
  c->r[0]=0u+0x00000001u; // 80151654
  c->r[3]=c->r[30]|c->r[30]; // 80151658
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8015165C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80151660
  c->ctr=c->r[12]; // 80151664
  if (true) { c->lr=0x8015166Cu; dispatch(c,c->ctr); } // 80151668
L_8015166C:;
  c->r[30]=0u+0x00000000u; // 8015166C
L_80151670:;
  cmps(c,0,(int32_t)c->r[30],0); // 80151670
  W32(c->r[19]+0x0000001Cu,c->r[30]); // 80151674
  if (!crb(c,2)) { goto L_801516A0; } // 80151678
  c->r[4]=0u+0x802D0000u; // 8015167C
  c->r[3]=0u+0x00000000u; // 80151680
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80151684
  c->r[4]=c->r[4]+0x000005BDu; // 80151688
  c->lr=0x80151690u; f_80179434(c); // 8015168C
  c->r[3]=c->r[19]|c->r[19]; // 80151690
  c->lr=0x80151698u; f_80152154(c); // 80151694
  c->r[3]=0u+0x00000000u; // 80151698
  goto L_80151ED4; // 8015169C
L_801516A0:;
  c->r[18]=R32(c->r[19]+0x00000018u); // 801516A0
  c->r[5]=0u+0x802D0000u; // 801516A4
  c->r[5]=c->r[5]+0xFFFFDD30u; // 801516A8
  c->r[4]=0u+0x00000000u; // 801516AC
  c->r[3]=R32(c->r[18]+0x00000004u); // 801516B0
  c->r[5]=c->r[5]+0x000005E8u; // 801516B4
  c->lr=0x801516BCu; f_8017A8C0(c); // 801516B8
  c->r[0]=R32(c->r[18]+0x00000008u); // 801516BC
  c->r[28]=c->r[3]|c->r[3]; // 801516C0
  cmpu(c,0,c->r[3],c->r[0]); // 801516C4
  if (crb(c,0)) { goto L_801516D4; } // 801516C8
  c->r[0]=0u+0x00000000u; // 801516CC
  goto L_80151714; // 801516D0
L_801516D4:;
  c->r[3]=R32(c->r[18]+0x00000004u); // 801516D4
  c->r[4]=c->r[28]|c->r[28]; // 801516D8
  c->r[5]=0u+0x00000000u; // 801516DC
  c->lr=0x801516E4u; f_8017B030(c); // 801516E0
  c->r[3]=R32(c->r[18]+0x00000004u); // 801516E4
  c->r[4]=c->r[28]|c->r[28]; // 801516E8
  c->r[6]=c->r[31]+0x000000C8u; // 801516EC
  c->r[5]=0u+0x00000002u; // 801516F0
  c->lr=0x801516F8u; f_8017A738(c); // 801516F4
  c->r[27]=R32(c->r[31]+0x000000D0u); // 801516F8
  c->r[4]=c->r[28]|c->r[28]; // 801516FC
  c->r[26]=R32(c->r[31]+0x000000D4u); // 80151700
  c->r[5]=0u+0x00000001u; // 80151704
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151708
  c->lr=0x80151710u; f_8017AB54(c); // 8015170C
  c->r[0]=0u+0x00000001u; // 80151710
L_80151714:;
  cmps(c,0,(int32_t)c->r[0],1); // 80151714
  if (!crb(c,2)) { goto L_8015184C; } // 80151718
  c->r[18]=R32(c->r[19]+0x00000004u); // 8015171C
  c->r[6]=0u+0x80330000u; // 80151720
  c->r[6]=c->r[6]+0x00000B78u; // 80151724
  c->r[3]=0u+0x0000000Cu; // 80151728
  c->r[4]=c->r[18]|c->r[18]; // 8015172C
  c->r[5]=0u+0x00000002u; // 80151730
  c->r[7]=0u+0x00000004u; // 80151734
  c->lr=0x8015173Cu; f_8017BF5C(c); // 80151738
  cmps(c,0,(int32_t)c->r[3],0); // 8015173C
  c->r[28]=c->r[3]|c->r[3]; // 80151740
  if (crb(c,2)) { goto L_80151764; } // 80151744
  c->r[0]=0u+0x00000000u; // 80151748
  W32(c->r[3]+0x00000004u,c->r[0]); // 8015174C
  c->r[4]=0u+0x80330000u; // 80151750
  W32(c->r[3]+0x00000008u,c->r[0]); // 80151754
  c->r[4]=c->r[4]+0x000009B0u; // 80151758
  W32(c->r[31]+0x000000C4u,c->r[1]); // 8015175C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80151760
L_80151764:;
  cmps(c,0,(int32_t)c->r[3],0); // 80151764
  if (!crb(c,2)) { goto L_80151788; } // 80151768
  c->r[4]=0u+0x80330000u; // 8015176C
  c->r[3]=0u+0x00000000u; // 80151770
  c->r[4]=c->r[4]+0x00000B6Cu; // 80151774
  c->r[5]=0u+0xFFFFFFFDu; // 80151778
  c->lr=0x80151780u; f_8017968C(c); // 8015177C
  c->r[28]=0u+0x00000000u; // 80151780
  goto L_8015181C; // 80151784
L_80151788:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 80151788
  c->r[3]=c->r[28]|c->r[28]; // 8015178C
  c->r[4]=c->r[18]|c->r[18]; // 80151790
  c->r[5]=c->r[27]|c->r[27]; // 80151794
  c->r[12]=R32(c->r[12]+0x00000010u); // 80151798
  c->r[6]=c->r[26]|c->r[26]; // 8015179C
  c->ctr=c->r[12]; // 801517A0
  if (true) { c->lr=0x801517A8u; dispatch(c,c->ctr); } // 801517A4
  cmps(c,0,(int32_t)c->r[3],0); // 801517A8
  if (!crb(c,2)) { goto L_801517DC; } // 801517AC
  cmps(c,0,(int32_t)c->r[28],0); // 801517B0
  if (crb(c,2)) { goto L_801517D4; } // 801517B4
  c->r[12]=R32(c->r[28]+0x00000000u); // 801517B8
  c->r[0]=0u+0x00000001u; // 801517BC
  c->r[3]=c->r[28]|c->r[28]; // 801517C0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801517C4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801517C8
  c->ctr=c->r[12]; // 801517CC
  if (true) { c->lr=0x801517D4u; dispatch(c,c->ctr); } // 801517D0
L_801517D4:;
  c->r[28]=0u+0x00000000u; // 801517D4
  goto L_8015181C; // 801517D8
L_801517DC:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 801517DC
  c->r[4]=0u+0x00000000u; // 801517E0
  c->r[5]=0u+0x00000000u; // 801517E4
  c->lr=0x801517ECu; f_8017B648(c); // 801517E8
  cmps(c,0,(int32_t)c->r[3],0); // 801517EC
  if (!crb(c,2)) { goto L_8015181C; } // 801517F0
  cmps(c,0,(int32_t)c->r[28],0); // 801517F4
  if (crb(c,2)) { goto L_80151818; } // 801517F8
  c->r[12]=R32(c->r[28]+0x00000000u); // 801517FC
  c->r[0]=0u+0x00000001u; // 80151800
  c->r[3]=c->r[28]|c->r[28]; // 80151804
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80151808
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 8015180C
  c->ctr=c->r[12]; // 80151810
  if (true) { c->lr=0x80151818u; dispatch(c,c->ctr); } // 80151814
L_80151818:;
  c->r[28]=0u+0x00000000u; // 80151818
L_8015181C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8015181C
  W32(c->r[19]+0x00000020u,c->r[28]); // 80151820
  if (!crb(c,2)) { goto L_8015184C; } // 80151824
  c->r[4]=0u+0x802D0000u; // 80151828
  c->r[3]=0u+0x00000000u; // 8015182C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80151830
  c->r[4]=c->r[4]+0x000005EEu; // 80151834
  c->lr=0x8015183Cu; f_80179434(c); // 80151838
  c->r[3]=c->r[19]|c->r[19]; // 8015183C
  c->lr=0x80151844u; f_80152154(c); // 80151840
  c->r[3]=0u+0x00000000u; // 80151844
  goto L_80151ED4; // 80151848
L_8015184C:;
  c->r[18]=R32(c->r[19]+0x00000018u); // 8015184C
  c->r[5]=0u+0x802D0000u; // 80151850
  c->r[5]=c->r[5]+0xFFFFDD30u; // 80151854
  c->r[4]=0u+0x00000000u; // 80151858
  c->r[3]=R32(c->r[18]+0x00000004u); // 8015185C
  c->r[5]=c->r[5]+0x00000619u; // 80151860
  c->lr=0x80151868u; f_8017A8C0(c); // 80151864
  c->r[0]=R32(c->r[18]+0x00000008u); // 80151868
  c->r[26]=c->r[3]|c->r[3]; // 8015186C
  cmpu(c,0,c->r[3],c->r[0]); // 80151870
  if (crb(c,0)) { goto L_80151880; } // 80151874
  c->r[0]=0u+0x00000000u; // 80151878
  goto L_801518C0; // 8015187C
L_80151880:;
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151880
  c->r[4]=c->r[26]|c->r[26]; // 80151884
  c->r[5]=0u+0x00000000u; // 80151888
  c->lr=0x80151890u; f_8017B030(c); // 8015188C
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151890
  c->r[4]=c->r[26]|c->r[26]; // 80151894
  c->r[6]=c->r[31]+0x00000098u; // 80151898
  c->r[5]=0u+0x00000002u; // 8015189C
  c->lr=0x801518A4u; f_8017A738(c); // 801518A0
  c->r[25]=R32(c->r[31]+0x000000A0u); // 801518A4
  c->r[4]=c->r[26]|c->r[26]; // 801518A8
  c->r[24]=R32(c->r[31]+0x000000A4u); // 801518AC
  c->r[5]=0u+0x00000001u; // 801518B0
  c->r[3]=R32(c->r[18]+0x00000004u); // 801518B4
  c->lr=0x801518BCu; f_8017AB54(c); // 801518B8
  c->r[0]=0u+0x00000001u; // 801518BC
L_801518C0:;
  cmps(c,0,(int32_t)c->r[0],1); // 801518C0
  if (!crb(c,2)) { goto L_801519F8; } // 801518C4
  c->r[18]=R32(c->r[19]+0x00000004u); // 801518C8
  c->r[6]=0u+0x80330000u; // 801518CC
  c->r[6]=c->r[6]+0x00000B60u; // 801518D0
  c->r[3]=0u+0x0000000Cu; // 801518D4
  c->r[4]=c->r[18]|c->r[18]; // 801518D8
  c->r[5]=0u+0x00000002u; // 801518DC
  c->r[7]=0u+0x00000004u; // 801518E0
  c->lr=0x801518E8u; f_8017BF5C(c); // 801518E4
  cmps(c,0,(int32_t)c->r[3],0); // 801518E8
  c->r[26]=c->r[3]|c->r[3]; // 801518EC
  if (crb(c,2)) { goto L_80151910; } // 801518F0
  c->r[0]=0u+0x00000000u; // 801518F4
  W32(c->r[3]+0x00000004u,c->r[0]); // 801518F8
  c->r[4]=0u+0x80330000u; // 801518FC
  W32(c->r[3]+0x00000008u,c->r[0]); // 80151900
  c->r[4]=c->r[4]+0x00000980u; // 80151904
  W32(c->r[31]+0x00000094u,c->r[1]); // 80151908
  W32(c->r[3]+0x00000000u,c->r[4]); // 8015190C
L_80151910:;
  cmps(c,0,(int32_t)c->r[3],0); // 80151910
  if (!crb(c,2)) { goto L_80151934; } // 80151914
  c->r[4]=0u+0x80330000u; // 80151918
  c->r[3]=0u+0x00000000u; // 8015191C
  c->r[4]=c->r[4]+0x00000B54u; // 80151920
  c->r[5]=0u+0xFFFFFFFDu; // 80151924
  c->lr=0x8015192Cu; f_8017968C(c); // 80151928
  c->r[26]=0u+0x00000000u; // 8015192C
  goto L_801519C8; // 80151930
L_80151934:;
  c->r[12]=R32(c->r[26]+0x00000000u); // 80151934
  c->r[3]=c->r[26]|c->r[26]; // 80151938
  c->r[4]=c->r[18]|c->r[18]; // 8015193C
  c->r[5]=c->r[25]|c->r[25]; // 80151940
  c->r[12]=R32(c->r[12]+0x00000010u); // 80151944
  c->r[6]=c->r[24]|c->r[24]; // 80151948
  c->ctr=c->r[12]; // 8015194C
  if (true) { c->lr=0x80151954u; dispatch(c,c->ctr); } // 80151950
  cmps(c,0,(int32_t)c->r[3],0); // 80151954
  if (!crb(c,2)) { goto L_80151988; } // 80151958
  cmps(c,0,(int32_t)c->r[26],0); // 8015195C
  if (crb(c,2)) { goto L_80151980; } // 80151960
  c->r[12]=R32(c->r[26]+0x00000000u); // 80151964
  c->r[0]=0u+0x00000001u; // 80151968
  c->r[3]=c->r[26]|c->r[26]; // 8015196C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80151970
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80151974
  c->ctr=c->r[12]; // 80151978
  if (true) { c->lr=0x80151980u; dispatch(c,c->ctr); } // 8015197C
L_80151980:;
  c->r[26]=0u+0x00000000u; // 80151980
  goto L_801519C8; // 80151984
L_80151988:;
  c->r[3]=R32(c->r[26]+0x00000004u); // 80151988
  c->r[4]=0u+0x00000000u; // 8015198C
  c->r[5]=0u+0x00000000u; // 80151990
  c->lr=0x80151998u; f_8017B648(c); // 80151994
  cmps(c,0,(int32_t)c->r[3],0); // 80151998
  if (!crb(c,2)) { goto L_801519C8; } // 8015199C
  cmps(c,0,(int32_t)c->r[26],0); // 801519A0
  if (crb(c,2)) { goto L_801519C4; } // 801519A4
  c->r[12]=R32(c->r[26]+0x00000000u); // 801519A8
  c->r[0]=0u+0x00000001u; // 801519AC
  c->r[3]=c->r[26]|c->r[26]; // 801519B0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801519B4
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801519B8
  c->ctr=c->r[12]; // 801519BC
  if (true) { c->lr=0x801519C4u; dispatch(c,c->ctr); } // 801519C0
L_801519C4:;
  c->r[26]=0u+0x00000000u; // 801519C4
L_801519C8:;
  cmps(c,0,(int32_t)c->r[26],0); // 801519C8
  W32(c->r[19]+0x00000024u,c->r[26]); // 801519CC
  if (!crb(c,2)) { goto L_801519F8; } // 801519D0
  c->r[4]=0u+0x802D0000u; // 801519D4
  c->r[3]=0u+0x00000000u; // 801519D8
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801519DC
  c->r[4]=c->r[4]+0x00000627u; // 801519E0
  c->lr=0x801519E8u; f_80179434(c); // 801519E4
  c->r[3]=c->r[19]|c->r[19]; // 801519E8
  c->lr=0x801519F0u; f_80152154(c); // 801519EC
  c->r[3]=0u+0x00000000u; // 801519F0
  goto L_80151ED4; // 801519F4
L_801519F8:;
  c->r[18]=R32(c->r[19]+0x00000018u); // 801519F8
  c->r[5]=0u+0x802D0000u; // 801519FC
  c->r[5]=c->r[5]+0xFFFFDD30u; // 80151A00
  c->r[4]=0u+0x00000000u; // 80151A04
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151A08
  c->r[5]=c->r[5]+0x00000652u; // 80151A0C
  c->lr=0x80151A14u; f_8017A8C0(c); // 80151A10
  c->r[0]=R32(c->r[18]+0x00000008u); // 80151A14
  c->r[24]=c->r[3]|c->r[3]; // 80151A18
  cmpu(c,0,c->r[3],c->r[0]); // 80151A1C
  if (crb(c,0)) { goto L_80151A2C; } // 80151A20
  c->r[0]=0u+0x00000000u; // 80151A24
  goto L_80151A6C; // 80151A28
L_80151A2C:;
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151A2C
  c->r[4]=c->r[24]|c->r[24]; // 80151A30
  c->r[5]=0u+0x00000000u; // 80151A34
  c->lr=0x80151A3Cu; f_8017B030(c); // 80151A38
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151A3C
  c->r[4]=c->r[24]|c->r[24]; // 80151A40
  c->r[6]=c->r[31]+0x00000068u; // 80151A44
  c->r[5]=0u+0x00000002u; // 80151A48
  c->lr=0x80151A50u; f_8017A738(c); // 80151A4C
  c->r[21]=R32(c->r[31]+0x00000070u); // 80151A50
  c->r[4]=c->r[24]|c->r[24]; // 80151A54
  c->r[20]=R32(c->r[31]+0x00000074u); // 80151A58
  c->r[5]=0u+0x00000001u; // 80151A5C
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151A60
  c->lr=0x80151A68u; f_8017AB54(c); // 80151A64
  c->r[0]=0u+0x00000001u; // 80151A68
L_80151A6C:;
  cmps(c,0,(int32_t)c->r[0],1); // 80151A6C
  if (!crb(c,2)) { goto L_80151B60; } // 80151A70
  c->r[18]=R32(c->r[19]+0x00000004u); // 80151A74
  c->r[6]=0u+0x80330000u; // 80151A78
  c->r[6]=c->r[6]+0x00000B24u; // 80151A7C
  c->r[3]=0u+0x0000000Cu; // 80151A80
  c->r[4]=c->r[18]|c->r[18]; // 80151A84
  c->r[5]=0u+0x00000002u; // 80151A88
  c->r[7]=0u+0x00000004u; // 80151A8C
  c->lr=0x80151A94u; f_8017BF5C(c); // 80151A90
  cmps(c,0,(int32_t)c->r[3],0); // 80151A94
  c->r[24]=c->r[3]|c->r[3]; // 80151A98
  if (crb(c,2)) { goto L_80151ABC; } // 80151A9C
  c->r[0]=0u+0x00000000u; // 80151AA0
  W32(c->r[3]+0x00000004u,c->r[0]); // 80151AA4
  c->r[4]=0u+0x80330000u; // 80151AA8
  W32(c->r[3]+0x00000008u,c->r[0]); // 80151AAC
  c->r[4]=c->r[4]+0x00000920u; // 80151AB0
  W32(c->r[31]+0x00000064u,c->r[1]); // 80151AB4
  W32(c->r[3]+0x00000000u,c->r[4]); // 80151AB8
L_80151ABC:;
  cmps(c,0,(int32_t)c->r[3],0); // 80151ABC
  if (!crb(c,2)) { goto L_80151AE0; } // 80151AC0
  c->r[4]=0u+0x80330000u; // 80151AC4
  c->r[3]=0u+0x00000000u; // 80151AC8
  c->r[4]=c->r[4]+0x00000B18u; // 80151ACC
  c->r[5]=0u+0xFFFFFFFDu; // 80151AD0
  c->lr=0x80151AD8u; f_8017968C(c); // 80151AD4
  c->r[24]=0u+0x00000000u; // 80151AD8
  goto L_80151B30; // 80151ADC
L_80151AE0:;
  c->r[12]=R32(c->r[24]+0x00000000u); // 80151AE0
  c->r[3]=c->r[24]|c->r[24]; // 80151AE4
  c->r[4]=c->r[18]|c->r[18]; // 80151AE8
  c->r[5]=c->r[21]|c->r[21]; // 80151AEC
  c->r[12]=R32(c->r[12]+0x00000010u); // 80151AF0
  c->r[6]=c->r[20]|c->r[20]; // 80151AF4
  c->ctr=c->r[12]; // 80151AF8
  if (true) { c->lr=0x80151B00u; dispatch(c,c->ctr); } // 80151AFC
  cmps(c,0,(int32_t)c->r[3],0); // 80151B00
  if (!crb(c,2)) { goto L_80151B30; } // 80151B04
  cmps(c,0,(int32_t)c->r[24],0); // 80151B08
  if (crb(c,2)) { goto L_80151B2C; } // 80151B0C
  c->r[12]=R32(c->r[24]+0x00000000u); // 80151B10
  c->r[0]=0u+0x00000001u; // 80151B14
  c->r[3]=c->r[24]|c->r[24]; // 80151B18
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80151B1C
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80151B20
  c->ctr=c->r[12]; // 80151B24
  if (true) { c->lr=0x80151B2Cu; dispatch(c,c->ctr); } // 80151B28
L_80151B2C:;
  c->r[24]=0u+0x00000000u; // 80151B2C
L_80151B30:;
  cmps(c,0,(int32_t)c->r[24],0); // 80151B30
  W32(c->r[19]+0x00000034u,c->r[24]); // 80151B34
  if (!crb(c,2)) { goto L_80151B60; } // 80151B38
  c->r[4]=0u+0x802D0000u; // 80151B3C
  c->r[3]=0u+0x00000000u; // 80151B40
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80151B44
  c->r[4]=c->r[4]+0x00000664u; // 80151B48
  c->lr=0x80151B50u; f_80179434(c); // 80151B4C
  c->r[3]=c->r[19]|c->r[19]; // 80151B50
  c->lr=0x80151B58u; f_80152154(c); // 80151B54
  c->r[3]=0u+0x00000000u; // 80151B58
  goto L_80151ED4; // 80151B5C
L_80151B60:;
  c->r[18]=R32(c->r[19]+0x00000018u); // 80151B60
  c->r[5]=0u+0x802D0000u; // 80151B64
  c->r[5]=c->r[5]+0xFFFFDD30u; // 80151B68
  c->r[4]=0u+0x00000000u; // 80151B6C
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151B70
  c->r[5]=c->r[5]+0x0000069Bu; // 80151B74
  c->lr=0x80151B7Cu; f_8017A8C0(c); // 80151B78
  c->r[0]=R32(c->r[18]+0x00000008u); // 80151B7C
  c->r[20]=c->r[3]|c->r[3]; // 80151B80
  cmpu(c,0,c->r[3],c->r[0]); // 80151B84
  if (crb(c,0)) { goto L_80151B94; } // 80151B88
  c->r[0]=0u+0x00000000u; // 80151B8C
  goto L_80151BD4; // 80151B90
L_80151B94:;
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151B94
  c->r[4]=c->r[20]|c->r[20]; // 80151B98
  c->r[5]=0u+0x00000000u; // 80151B9C
  c->lr=0x80151BA4u; f_8017B030(c); // 80151BA0
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151BA4
  c->r[4]=c->r[20]|c->r[20]; // 80151BA8
  c->r[6]=c->r[31]+0x00000038u; // 80151BAC
  c->r[5]=0u+0x00000002u; // 80151BB0
  c->lr=0x80151BB8u; f_8017A738(c); // 80151BB4
  c->r[23]=R32(c->r[31]+0x00000040u); // 80151BB8
  c->r[4]=c->r[20]|c->r[20]; // 80151BBC
  c->r[22]=R32(c->r[31]+0x00000044u); // 80151BC0
  c->r[5]=0u+0x00000001u; // 80151BC4
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151BC8
  c->lr=0x80151BD0u; f_8017AB54(c); // 80151BCC
  c->r[0]=0u+0x00000001u; // 80151BD0
L_80151BD4:;
  cmps(c,0,(int32_t)c->r[0],1); // 80151BD4
  if (!crb(c,2)) { goto L_80151ED0; } // 80151BD8
  c->r[18]=R32(c->r[19]+0x00000004u); // 80151BDC
  c->r[6]=0u+0x80330000u; // 80151BE0
  c->r[6]=c->r[6]+0x00000B48u; // 80151BE4
  c->r[3]=0u+0x0000000Cu; // 80151BE8
  c->r[4]=c->r[18]|c->r[18]; // 80151BEC
  c->r[5]=0u+0x00000002u; // 80151BF0
  c->r[7]=0u+0x00000004u; // 80151BF4
  c->lr=0x80151BFCu; f_8017BF5C(c); // 80151BF8
  cmps(c,0,(int32_t)c->r[3],0); // 80151BFC
  c->r[20]=c->r[3]|c->r[3]; // 80151C00
  if (crb(c,2)) { goto L_80151C24; } // 80151C04
  c->r[0]=0u+0x00000000u; // 80151C08
  W32(c->r[3]+0x00000004u,c->r[0]); // 80151C0C
  c->r[4]=0u+0x80330000u; // 80151C10
  W32(c->r[3]+0x00000008u,c->r[0]); // 80151C14
  c->r[4]=c->r[4]+0x00000950u; // 80151C18
  W32(c->r[31]+0x00000034u,c->r[1]); // 80151C1C
  W32(c->r[3]+0x00000000u,c->r[4]); // 80151C20
L_80151C24:;
  cmps(c,0,(int32_t)c->r[3],0); // 80151C24
  if (!crb(c,2)) { goto L_80151C48; } // 80151C28
  c->r[4]=0u+0x80330000u; // 80151C2C
  c->r[3]=0u+0x00000000u; // 80151C30
  c->r[4]=c->r[4]+0x00000B3Cu; // 80151C34
  c->r[5]=0u+0xFFFFFFFDu; // 80151C38
  c->lr=0x80151C40u; f_8017968C(c); // 80151C3C
  c->r[20]=0u+0x00000000u; // 80151C40
  goto L_80151C98; // 80151C44
L_80151C48:;
  c->r[12]=R32(c->r[20]+0x00000000u); // 80151C48
  c->r[3]=c->r[20]|c->r[20]; // 80151C4C
  c->r[4]=c->r[18]|c->r[18]; // 80151C50
  c->r[5]=c->r[23]|c->r[23]; // 80151C54
  c->r[12]=R32(c->r[12]+0x00000010u); // 80151C58
  c->r[6]=c->r[22]|c->r[22]; // 80151C5C
  c->ctr=c->r[12]; // 80151C60
  if (true) { c->lr=0x80151C68u; dispatch(c,c->ctr); } // 80151C64
  cmps(c,0,(int32_t)c->r[3],0); // 80151C68
  if (!crb(c,2)) { goto L_80151C98; } // 80151C6C
  cmps(c,0,(int32_t)c->r[20],0); // 80151C70
  if (crb(c,2)) { goto L_80151C94; } // 80151C74
  c->r[12]=R32(c->r[20]+0x00000000u); // 80151C78
  c->r[0]=0u+0x00000001u; // 80151C7C
  c->r[3]=c->r[20]|c->r[20]; // 80151C80
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80151C84
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80151C88
  c->ctr=c->r[12]; // 80151C8C
  if (true) { c->lr=0x80151C94u; dispatch(c,c->ctr); } // 80151C90
L_80151C94:;
  c->r[20]=0u+0x00000000u; // 80151C94
L_80151C98:;
  cmps(c,0,(int32_t)c->r[20],0); // 80151C98
  W32(c->r[19]+0x00000028u,c->r[20]); // 80151C9C
  if (!crb(c,2)) { goto L_80151CC8; } // 80151CA0
  c->r[4]=0u+0x802D0000u; // 80151CA4
  c->r[3]=0u+0x00000000u; // 80151CA8
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80151CAC
  c->r[4]=c->r[4]+0x000006A1u; // 80151CB0
  c->lr=0x80151CB8u; f_80179434(c); // 80151CB4
  c->r[3]=c->r[19]|c->r[19]; // 80151CB8
  c->lr=0x80151CC0u; f_80152154(c); // 80151CBC
  c->r[3]=0u+0x00000000u; // 80151CC0
  goto L_80151ED4; // 80151CC4
L_80151CC8:;
  c->r[0]=R32(c->r[20]+0x00000008u); // 80151CC8
  W32(c->r[19]+0x0000002Cu,c->r[0]); // 80151CCC
  cmps(c,0,(int32_t)c->r[0],0); // 80151CD0
  if (crb(c,2)) { goto L_80151ED0; } // 80151CD4
  c->r[20]=0u+0x802D0000u; // 80151CD8
  c->r[3]=R32(c->r[19]+0x00000004u); // 80151CDC
  c->r[20]=c->r[20]+0xFFFFDD30u; // 80151CE0
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80151CE4
  c->r[5]=c->r[20]+0x000006CEu; // 80151CE8
  c->r[6]=0u+0x00000004u; // 80151CEC
  c->r[7]=0u+0x00000002u; // 80151CF0
  c->lr=0x80151CF8u; f_8017C15C(c); // 80151CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80151CF8
  W32(c->r[19]+0x00000030u,c->r[3]); // 80151CFC
  if (!crb(c,2)) { goto L_80151D24; } // 80151D00
  c->r[4]=c->r[20]+0x000006DCu; // 80151D04
  c->r[3]=0u+0x00000000u; // 80151D08
  c->r[5]=0u+0xFFFFFFFDu; // 80151D0C
  c->lr=0x80151D14u; f_8017968C(c); // 80151D10
  c->r[3]=c->r[19]|c->r[19]; // 80151D14
  c->lr=0x80151D1Cu; f_80152154(c); // 80151D18
  c->r[3]=0u+0x00000000u; // 80151D1C
  goto L_80151ED4; // 80151D20
L_80151D24:;
  c->r[5]=0u+0x00000000u; // 80151D24
  c->r[4]=0u+0x00000000u; // 80151D28
  goto L_80151D44; // 80151D2C
L_80151D30:;
  c->r[3]=R32(c->r[19]+0x00000030u); // 80151D30
  c->r[0]=0u+0x00000000u; // 80151D34
  c->r[5]=c->r[5]+0x00000001u; // 80151D38
  W32(c->r[3]+c->r[4],c->r[0]); // 80151D3C
  c->r[4]=c->r[4]+0x00000004u; // 80151D40
L_80151D44:;
  c->r[0]=R32(c->r[19]+0x0000002Cu); // 80151D44
  cmpu(c,0,c->r[5],c->r[0]); // 80151D48
  if (crb(c,0)) { IRQCHK(c); goto L_80151D30; } // 80151D4C
  c->r[21]=0u+0x00000000u; // 80151D50
  c->r[20]=0u+0x00000000u; // 80151D54
  goto L_80151EC4; // 80151D58
L_80151D5C:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80151D5C
  c->r[0]=0u+0x00000000u; // 80151D60
  W32(c->r[31]+0x00000128u,c->r[0]); // 80151D64
  W32(c->r[31]+0x0000012Cu,c->r[0]); // 80151D68
  W32(c->r[31]+0x00000130u,c->r[0]); // 80151D6C
  W32(c->r[31]+0x00000134u,c->r[0]); // 80151D70
  W32(c->r[31]+0x00000138u,c->r[0]); // 80151D74
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[0]);} // 80151D78
  c->r[18]=R32(c->r[19]+0x00000028u); // 80151D7C
  c->r[0]=R32(c->r[18]+0x00000008u); // 80151D80
  cmpu(c,0,c->r[21],c->r[0]); // 80151D84
  if (!crb(c,0)) { goto L_80151E44; } // 80151D88
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151D8C
  c->r[4]=c->r[21]|c->r[21]; // 80151D90
  c->r[5]=0u+0x00000000u; // 80151D94
  c->lr=0x80151D9Cu; f_8017B030(c); // 80151D98
  W32(c->r[31]+0x00000128u,c->r[3]); // 80151D9C
  c->r[4]=c->r[21]|c->r[21]; // 80151DA0
  c->r[5]=0u+0x00000001u; // 80151DA4
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151DA8
  c->lr=0x80151DB0u; f_8017B030(c); // 80151DAC
  W32(c->r[31]+0x0000012Cu,c->r[3]); // 80151DB0
  c->r[4]=c->r[21]|c->r[21]; // 80151DB4
  c->r[5]=0u+0x00000002u; // 80151DB8
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151DBC
  c->lr=0x80151DC4u; f_8017AB54(c); // 80151DC0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80151DC4
  W32(c->r[31]+0x00000130u,c->r[0]); // 80151DC8
  c->r[4]=c->r[21]|c->r[21]; // 80151DCC
  c->r[6]=c->r[31]+0x00000008u; // 80151DD0
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151DD4
  c->r[5]=0u+0x00000003u; // 80151DD8
  c->lr=0x80151DE0u; f_8017A738(c); // 80151DDC
  c->r[3]=R32(c->r[31]+0x00000010u); // 80151DE0
  c->r[0]=R32(c->r[31]+0x00000014u); // 80151DE4
  W32(c->r[31]+0x00000134u,c->r[3]); // 80151DE8
  W32(c->r[31]+0x00000138u,c->r[0]); // 80151DEC
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151DF0
  c->lr=0x80151DF8u; f_8017A6AC(c); // 80151DF4
  cmpu(c,0,c->r[3],0x00000004u); // 80151DF8
  if (crb(c,1)) { goto L_80151E0C; } // 80151DFC
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80151E00
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[0]);} // 80151E04
  goto L_80151E44; // 80151E08
L_80151E0C:;
  c->r[3]=R32(c->r[18]+0x00000004u); // 80151E0C
  c->r[4]=c->r[21]|c->r[21]; // 80151E10
  c->r[5]=0u+0x00000004u; // 80151E14
  c->lr=0x80151E1Cu; f_8017AB54(c); // 80151E18
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 80151E1C
  c->r[0]=0u+0x43300000u; // 80151E20
  W32(c->r[31]+0x00000144u,c->r[3]); // 80151E24
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80151E28
  W32(c->r[31]+0x00000140u,c->r[0]); // 80151E2C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[0]=c->ps1[0]=RF32(ea);} // 80151E30
  {uint32_t ea=c->r[31]+0x00000140u; c->f[1]=RF64(ea);} // 80151E34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80151E38
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80151E3C
  {uint32_t ea=c->r[31]+0x0000013Cu; WF32(ea,c->f[0]);} // 80151E40
L_80151E44:;
  c->r[0]=R32(c->r[31]+0x00000130u); // 80151E44
  cmps(c,0,(int32_t)c->r[0],0); // 80151E48
  if (!crb(c,2)) { goto L_80151E98; } // 80151E4C
  c->r[3]=R32(c->r[19]+0x00000004u); // 80151E50
  c->r[4]=c->r[31]+0x00000128u; // 80151E54
  c->lr=0x80151E5Cu; f_8014667C(c); // 80151E58
  c->r[4]=R32(c->r[19]+0x00000030u); // 80151E5C
  W32(c->r[4]+c->r[20],c->r[3]); // 80151E60
  c->r[3]=R32(c->r[19]+0x00000030u); // 80151E64
  c->r[0]=R32(c->r[3]+c->r[20]); // 80151E68
  cmps(c,0,(int32_t)c->r[0],0); // 80151E6C
  if (!crb(c,2)) { goto L_80151EBC; } // 80151E70
  c->r[4]=0u+0x802D0000u; // 80151E74
  c->r[3]=0u+0x00000000u; // 80151E78
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80151E7C
  c->r[4]=c->r[4]+0x000006E9u; // 80151E80
  c->lr=0x80151E88u; f_80179434(c); // 80151E84
  c->r[3]=c->r[19]|c->r[19]; // 80151E88
  c->lr=0x80151E90u; f_80152154(c); // 80151E8C
  c->r[3]=0u+0x00000000u; // 80151E90
  goto L_80151ED4; // 80151E94
L_80151E98:;
  c->r[4]=0u+0x802D0000u; // 80151E98
  c->r[3]=0u+0x00000000u; // 80151E9C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80151EA0
  c->r[4]=c->r[4]+0x00000722u; // 80151EA4
  c->lr=0x80151EACu; f_80179434(c); // 80151EA8
  c->r[3]=c->r[19]|c->r[19]; // 80151EAC
  c->lr=0x80151EB4u; f_80152154(c); // 80151EB0
  c->r[3]=0u+0x00000000u; // 80151EB4
  goto L_80151ED4; // 80151EB8
L_80151EBC:;
  c->r[20]=c->r[20]+0x00000004u; // 80151EBC
  c->r[21]=c->r[21]+0x00000001u; // 80151EC0
L_80151EC4:;
  c->r[0]=R32(c->r[19]+0x0000002Cu); // 80151EC4
  cmpu(c,0,c->r[21],c->r[0]); // 80151EC8
  if (crb(c,0)) { IRQCHK(c); goto L_80151D5C; } // 80151ECC
L_80151ED0:;
  c->r[3]=0u+0x00000001u; // 80151ED0
L_80151ED4:;
  c->r[10]=c->r[31]|c->r[31]; // 80151ED4
  c->r[11]=c->r[10]+0x00000180u; // 80151ED8
  c->lr=0x80151EE0u; { c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80151EDC
  c->r[10]=R32(c->r[1]+0x00000000u); // 80151EE0
  c->r[0]=R32(c->r[10]+0x00000004u); // 80151EE4
  c->r[1]=c->r[10]|c->r[10]; // 80151EE8
  c->lr=c->r[0]; // 80151EEC
  return; // 80151EF0
}

// Initialize__8CriAuTblFP15_criheap_structPUcUl
void f_80151EF4(Ctx* __restrict c) {
  trace_call(0x80151EF4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80151EF4
  c->r[0]=c->lr; // 80151EF8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80151EFC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80151F00
  c->r[31]=c->r[3]|c->r[3]; // 80151F04
  c->r[3]=c->r[4]|c->r[4]; // 80151F08
  c->r[4]=0u+0x00000002u; // 80151F0C
  c->lr=0x80151F14u; f_8017F37C(c); // 80151F10
  cmps(c,0,(int32_t)c->r[3],0); // 80151F14
  W32(c->r[31]+0x00000004u,c->r[3]); // 80151F18
  if (!crb(c,2)) { goto L_80151F50; } // 80151F1C
  c->r[4]=0u+0x80330000u; // 80151F20
  c->r[3]=0u+0x00000000u; // 80151F24
  c->r[4]=c->r[4]+0x00000BB4u; // 80151F28
  c->r[5]=0u+0xFFFFFFFDu; // 80151F2C
  c->lr=0x80151F34u; f_8017968C(c); // 80151F30
  c->r[12]=R32(c->r[31]+0x00000000u); // 80151F34
  c->r[3]=c->r[31]|c->r[31]; // 80151F38
  c->r[12]=R32(c->r[12]+0x00000014u); // 80151F3C
  c->ctr=c->r[12]; // 80151F40
  if (true) { c->lr=0x80151F48u; dispatch(c,c->ctr); } // 80151F44
  c->r[3]=0u+0x00000000u; // 80151F48
  goto L_80151F5C; // 80151F4C
L_80151F50:;
  c->lr=0x80151F54u; f_8017A730(c); // 80151F50
  W32(c->r[31]+0x00000008u,c->r[3]); // 80151F54
  c->r[3]=0u+0x00000001u; // 80151F58
L_80151F5C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80151F5C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80151F60
  c->lr=c->r[0]; // 80151F64
  c->r[1]=c->r[1]+0x00000010u; // 80151F68
  return; // 80151F6C
}

// Finalize__8CriAuTblFv
void f_80151F70(Ctx* __restrict c) {
  trace_call(0x80151F70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80151F70
  c->r[0]=c->lr; // 80151F74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80151F78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80151F7C
  c->r[31]=c->r[3]|c->r[3]; // 80151F80
  c->r[0]=R32(c->r[3]+0x00000004u); // 80151F84
  cmps(c,0,(int32_t)c->r[0],0); // 80151F88
  if (crb(c,2)) { goto L_80151FA0; } // 80151F8C
  c->r[3]=c->r[0]|c->r[0]; // 80151F90
  c->lr=0x80151F98u; f_8017BE04(c); // 80151F94
  c->r[0]=0u+0x00000000u; // 80151F98
  W32(c->r[31]+0x00000004u,c->r[0]); // 80151F9C
L_80151FA0:;
  c->r[0]=0u+0x00000000u; // 80151FA0
  W32(c->r[31]+0x00000008u,c->r[0]); // 80151FA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80151FA8
  c->r[0]=R32(c->r[1]+0x00000014u); // 80151FAC
  c->lr=c->r[0]; // 80151FB0
  c->r[1]=c->r[1]+0x00000010u; // 80151FB4
  return; // 80151FB8
}

// __dt__11CriAuTblCsbFv
void f_80151FBC(Ctx* __restrict c) {
  trace_call(0x80151FBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80151FBC
  c->r[0]=c->lr; // 80151FC0
  cmps(c,0,(int32_t)c->r[3],0); // 80151FC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80151FC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80151FCC
  c->r[31]=c->r[3]|c->r[3]; // 80151FD0
  if (crb(c,2)) { goto L_80151FE8; } // 80151FD4
  cmps(c,0,(int32_t)c->r[4],0); // 80151FD8
  if (!crb(c,1)) { goto L_80151FE8; } // 80151FDC
  c->r[4]=0u+0x0000000Cu; // 80151FE0
  c->lr=0x80151FE8u; f_8017BFE8(c); // 80151FE4
L_80151FE8:;
  c->r[3]=c->r[31]|c->r[31]; // 80151FE8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80151FEC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80151FF0
  c->lr=c->r[0]; // 80151FF4
  c->r[1]=c->r[1]+0x00000010u; // 80151FF8
  return; // 80151FFC
}

// __dt__11CriAuTblCueFv
void f_80152000(Ctx* __restrict c) {
  trace_call(0x80152000u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152000
  c->r[0]=c->lr; // 80152004
  cmps(c,0,(int32_t)c->r[3],0); // 80152008
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015200C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80152010
  c->r[31]=c->r[3]|c->r[3]; // 80152014
  if (crb(c,2)) { goto L_8015202C; } // 80152018
  cmps(c,0,(int32_t)c->r[4],0); // 8015201C
  if (!crb(c,1)) { goto L_8015202C; } // 80152020
  c->r[4]=0u+0x0000000Cu; // 80152024
  c->lr=0x8015202Cu; f_8017BFE8(c); // 80152028
L_8015202C:;
  c->r[3]=c->r[31]|c->r[31]; // 8015202C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80152030
  c->r[0]=R32(c->r[1]+0x00000014u); // 80152034
  c->lr=c->r[0]; // 80152038
  c->r[1]=c->r[1]+0x00000010u; // 8015203C
  return; // 80152040
}

// __dt__11CriAuTblSynFv
void f_80152044(Ctx* __restrict c) {
  trace_call(0x80152044u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152044
  c->r[0]=c->lr; // 80152048
  cmps(c,0,(int32_t)c->r[3],0); // 8015204C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80152050
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80152054
  c->r[31]=c->r[3]|c->r[3]; // 80152058
  if (crb(c,2)) { goto L_80152070; } // 8015205C
  cmps(c,0,(int32_t)c->r[4],0); // 80152060
  if (!crb(c,1)) { goto L_80152070; } // 80152064
  c->r[4]=0u+0x0000000Cu; // 80152068
  c->lr=0x80152070u; f_8017BFE8(c); // 8015206C
L_80152070:;
  c->r[3]=c->r[31]|c->r[31]; // 80152070
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80152074
  c->r[0]=R32(c->r[1]+0x00000014u); // 80152078
  c->lr=c->r[0]; // 8015207C
  c->r[1]=c->r[1]+0x00000010u; // 80152080
  return; // 80152084
}

// __dt__11CriAuTblSdlFv
void f_80152088(Ctx* __restrict c) {
  trace_call(0x80152088u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152088
  c->r[0]=c->lr; // 8015208C
  cmps(c,0,(int32_t)c->r[3],0); // 80152090
  W32(c->r[1]+0x00000014u,c->r[0]); // 80152094
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80152098
  c->r[31]=c->r[3]|c->r[3]; // 8015209C
  if (crb(c,2)) { goto L_801520B4; } // 801520A0
  cmps(c,0,(int32_t)c->r[4],0); // 801520A4
  if (!crb(c,1)) { goto L_801520B4; } // 801520A8
  c->r[4]=0u+0x0000000Cu; // 801520AC
  c->lr=0x801520B4u; f_8017BFE8(c); // 801520B0
L_801520B4:;
  c->r[3]=c->r[31]|c->r[31]; // 801520B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801520B8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801520BC
  c->lr=c->r[0]; // 801520C0
  c->r[1]=c->r[1]+0x00000010u; // 801520C4
  return; // 801520C8
}

// __dt__23CriAuTblVoiceLimitGroupFv
void f_801520CC(Ctx* __restrict c) {
  trace_call(0x801520CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801520CC
  c->r[0]=c->lr; // 801520D0
  cmps(c,0,(int32_t)c->r[3],0); // 801520D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801520D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801520DC
  c->r[31]=c->r[3]|c->r[3]; // 801520E0
  if (crb(c,2)) { goto L_801520F8; } // 801520E4
  cmps(c,0,(int32_t)c->r[4],0); // 801520E8
  if (!crb(c,1)) { goto L_801520F8; } // 801520EC
  c->r[4]=0u+0x0000000Cu; // 801520F0
  c->lr=0x801520F8u; f_8017BFE8(c); // 801520F4
L_801520F8:;
  c->r[3]=c->r[31]|c->r[31]; // 801520F8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801520FC
  c->r[0]=R32(c->r[1]+0x00000014u); // 80152100
  c->lr=c->r[0]; // 80152104
  c->r[1]=c->r[1]+0x00000010u; // 80152108
  return; // 8015210C
}

// __dt__13CriAuTblAisacFv
void f_80152110(Ctx* __restrict c) {
  trace_call(0x80152110u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152110
  c->r[0]=c->lr; // 80152114
  cmps(c,0,(int32_t)c->r[3],0); // 80152118
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015211C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80152120
  c->r[31]=c->r[3]|c->r[3]; // 80152124
  if (crb(c,2)) { goto L_8015213C; } // 80152128
  cmps(c,0,(int32_t)c->r[4],0); // 8015212C
  if (!crb(c,1)) { goto L_8015213C; } // 80152130
  c->r[4]=0u+0x0000000Cu; // 80152134
  c->lr=0x8015213Cu; f_8017BFE8(c); // 80152138
L_8015213C:;
  c->r[3]=c->r[31]|c->r[31]; // 8015213C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80152140
  c->r[0]=R32(c->r[1]+0x00000014u); // 80152144
  c->lr=c->r[0]; // 80152148
  c->r[1]=c->r[1]+0x00000010u; // 8015214C
  return; // 80152150
}

// ReleaseTables__16CriAuCueSheetLocFv
void f_80152154(Ctx* __restrict c) {
  trace_call(0x80152154u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152154
  c->r[0]=c->lr; // 80152158
  W32(c->r[1]+0x00000024u,c->r[0]); // 8015215C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80152160
  W32(c->r[1]+0x00000018u,c->r[30]); // 80152164
  W32(c->r[1]+0x00000014u,c->r[29]); // 80152168
  W32(c->r[1]+0x00000010u,c->r[28]); // 8015216C
  c->r[28]=c->r[3]|c->r[3]; // 80152170
  c->r[0]=R32(c->r[3]+0x00000150u); // 80152174
  cmps(c,0,(int32_t)c->r[0],0); // 80152178
  if (!crb(c,1)) { goto L_8015219C; } // 8015217C
  c->r[4]=0u+0x802D0000u; // 80152180
  c->r[3]=0u+0x00000001u; // 80152184
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80152188
  c->r[4]=c->r[4]+0x00000754u; // 8015218C
  c->lr=0x80152194u; f_80179434(c); // 80152190
  c->r[3]=c->r[28]|c->r[28]; // 80152194
  c->lr=0x8015219Cu; f_80153C18(c); // 80152198
L_8015219C:;
  c->r[0]=R32(c->r[28]+0x00000030u); // 8015219C
  cmps(c,0,(int32_t)c->r[0],0); // 801521A0
  if (crb(c,2)) { goto L_8015220C; } // 801521A4
  c->r[29]=0u+0x00000000u; // 801521A8
  c->r[30]=0u+0x00000000u; // 801521AC
  c->r[31]=0u+0x00000000u; // 801521B0
  goto L_801521E8; // 801521B4
L_801521B8:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 801521B8
  c->r[3]=R32(c->r[3]+c->r[30]); // 801521BC
  cmps(c,0,(int32_t)c->r[3],0); // 801521C0
  if (crb(c,2)) { goto L_801521E0; } // 801521C4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801521C8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801521CC
  c->ctr=c->r[12]; // 801521D0
  if (true) { c->lr=0x801521D8u; dispatch(c,c->ctr); } // 801521D4
  c->r[3]=R32(c->r[28]+0x00000030u); // 801521D8
  W32(c->r[3]+c->r[30],c->r[31]); // 801521DC
L_801521E0:;
  c->r[30]=c->r[30]+0x00000004u; // 801521E0
  c->r[29]=c->r[29]+0x00000001u; // 801521E4
L_801521E8:;
  c->r[0]=R32(c->r[28]+0x0000002Cu); // 801521E8
  cmpu(c,0,c->r[29],c->r[0]); // 801521EC
  if (crb(c,0)) { IRQCHK(c); goto L_801521B8; } // 801521F0
  c->r[3]=R32(c->r[28]+0x00000004u); // 801521F4
  c->r[4]=R32(c->r[28]+0x00000030u); // 801521F8
  c->lr=0x80152200u; f_8017C228(c); // 801521FC
  c->r[0]=0u+0x00000000u; // 80152200
  W32(c->r[28]+0x00000030u,c->r[0]); // 80152204
  W32(c->r[28]+0x0000002Cu,c->r[0]); // 80152208
L_8015220C:;
  c->r[3]=R32(c->r[28]+0x00000028u); // 8015220C
  cmps(c,0,(int32_t)c->r[3],0); // 80152210
  if (crb(c,2)) { goto L_80152230; } // 80152214
  c->r[12]=R32(c->r[3]+0x00000000u); // 80152218
  c->r[12]=R32(c->r[12]+0x00000008u); // 8015221C
  c->ctr=c->r[12]; // 80152220
  if (true) { c->lr=0x80152228u; dispatch(c,c->ctr); } // 80152224
  c->r[0]=0u+0x00000000u; // 80152228
  W32(c->r[28]+0x00000028u,c->r[0]); // 8015222C
L_80152230:;
  c->r[3]=R32(c->r[28]+0x00000034u); // 80152230
  cmps(c,0,(int32_t)c->r[3],0); // 80152234
  if (crb(c,2)) { goto L_80152254; } // 80152238
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015223C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80152240
  c->ctr=c->r[12]; // 80152244
  if (true) { c->lr=0x8015224Cu; dispatch(c,c->ctr); } // 80152248
  c->r[0]=0u+0x00000000u; // 8015224C
  W32(c->r[28]+0x00000034u,c->r[0]); // 80152250
L_80152254:;
  c->r[3]=R32(c->r[28]+0x00000024u); // 80152254
  cmps(c,0,(int32_t)c->r[3],0); // 80152258
  if (crb(c,2)) { goto L_80152278; } // 8015225C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80152260
  c->r[12]=R32(c->r[12]+0x00000008u); // 80152264
  c->ctr=c->r[12]; // 80152268
  if (true) { c->lr=0x80152270u; dispatch(c,c->ctr); } // 8015226C
  c->r[0]=0u+0x00000000u; // 80152270
  W32(c->r[28]+0x00000024u,c->r[0]); // 80152274
L_80152278:;
  c->r[3]=R32(c->r[28]+0x00000020u); // 80152278
  cmps(c,0,(int32_t)c->r[3],0); // 8015227C
  if (crb(c,2)) { goto L_8015229C; } // 80152280
  c->r[12]=R32(c->r[3]+0x00000000u); // 80152284
  c->r[12]=R32(c->r[12]+0x00000008u); // 80152288
  c->ctr=c->r[12]; // 8015228C
  if (true) { c->lr=0x80152294u; dispatch(c,c->ctr); } // 80152290
  c->r[0]=0u+0x00000000u; // 80152294
  W32(c->r[28]+0x00000020u,c->r[0]); // 80152298
L_8015229C:;
  c->r[3]=R32(c->r[28]+0x0000001Cu); // 8015229C
  cmps(c,0,(int32_t)c->r[3],0); // 801522A0
  if (crb(c,2)) { goto L_801522C0; } // 801522A4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801522A8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801522AC
  c->ctr=c->r[12]; // 801522B0
  if (true) { c->lr=0x801522B8u; dispatch(c,c->ctr); } // 801522B4
  c->r[0]=0u+0x00000000u; // 801522B8
  W32(c->r[28]+0x0000001Cu,c->r[0]); // 801522BC
L_801522C0:;
  c->r[3]=R32(c->r[28]+0x00000018u); // 801522C0
  cmps(c,0,(int32_t)c->r[3],0); // 801522C4
  if (crb(c,2)) { goto L_801522E4; } // 801522C8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801522CC
  c->r[12]=R32(c->r[12]+0x00000008u); // 801522D0
  c->ctr=c->r[12]; // 801522D4
  if (true) { c->lr=0x801522DCu; dispatch(c,c->ctr); } // 801522D8
  c->r[0]=0u+0x00000000u; // 801522DC
  W32(c->r[28]+0x00000018u,c->r[0]); // 801522E0
L_801522E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801522E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801522E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801522EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801522F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801522F4
  c->lr=c->r[0]; // 801522F8
  c->r[1]=c->r[1]+0x00000020u; // 801522FC
  return; // 80152300
}

// Destroy__8CriAuTblFv
void f_80152304(Ctx* __restrict c) {
  trace_call(0x80152304u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80152304
  c->r[0]=c->lr; // 80152308
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015230C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80152310
  c->r[31]=c->r[3]|c->r[3]; // 80152314
  c->r[12]=R32(c->r[3]+0x00000000u); // 80152318
  c->r[12]=R32(c->r[12]+0x00000014u); // 8015231C
  c->ctr=c->r[12]; // 80152320
  if (true) { c->lr=0x80152328u; dispatch(c,c->ctr); } // 80152324
  cmps(c,0,(int32_t)c->r[31],0); // 80152328
  if (crb(c,2)) { goto L_80152348; } // 8015232C
  c->r[12]=R32(c->r[31]+0x00000000u); // 80152330
  c->r[3]=c->r[31]|c->r[31]; // 80152334
  c->r[4]=0u+0x00000001u; // 80152338
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8015233C
  c->ctr=c->r[12]; // 80152340
  if (true) { c->lr=0x80152348u; dispatch(c,c->ctr); } // 80152344
L_80152348:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80152348
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015234C
  c->lr=c->r[0]; // 80152350
  c->r[1]=c->r[1]+0x00000010u; // 80152354
  return; // 80152358
}

// GetMaxNumberOfVoicesBySynth__16CriAuCueSheetLocFUlR8CriError
void f_8015235C(Ctx* __restrict c) {
  trace_call(0x8015235Cu);
  {uint32_t ea=c->r[1]+0xFFFFFE30u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015235C
  c->r[0]=c->lr; // 80152360
  W32(c->r[1]+0x000001D4u,c->r[0]); // 80152364
  c->r[11]=c->r[1]+0x00000190u; // 80152368
  {uint32_t ea=c->r[1]+0x000001C0u; WF64(ea,c->f[31]);} // 8015236C
  {uint32_t ea=c->r[1]+0x000001C8u; psq_store(c,31,ea,0,0);} // 80152370
  {uint32_t ea=c->r[1]+0x000001B0u; WF64(ea,c->f[30]);} // 80152374
  {uint32_t ea=c->r[1]+0x000001B8u; psq_store(c,30,ea,0,0);} // 80152378
  {uint32_t ea=c->r[1]+0x000001A0u; WF64(ea,c->f[29]);} // 8015237C
  {uint32_t ea=c->r[1]+0x000001A8u; psq_store(c,29,ea,0,0);} // 80152380
  {uint32_t ea=c->r[1]+0x00000190u; WF64(ea,c->f[28]);} // 80152384
  {uint32_t ea=c->r[1]+0x00000198u; psq_store(c,28,ea,0,0);} // 80152388
  c->lr=0x80152390u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8015238C
  c->r[0]=0u+0x00000000u; // 80152390
  W32(c->r[5]+0x00000000u,c->r[0]); // 80152394
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152398
  c->r[6]=0u+0x43300000u; // 8015239C
  c->r[31]=R32(c->r[3]+0x00000020u); // 801523A0
  c->r[28]=c->r[3]|c->r[3]; // 801523A4
  W32(c->r[1]+0x00000160u,c->r[6]); // 801523A8
  c->r[29]=c->r[4]|c->r[4]; // 801523AC
  cmps(c,0,(int32_t)c->r[31],0); // 801523B0
  c->r[30]=c->r[5]|c->r[5]; // 801523B4
  W32(c->r[1]+0x00000168u,c->r[6]); // 801523B8
  W32(c->r[1]+0x00000008u,c->r[0]); // 801523BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801523C0
  W32(c->r[1]+0x00000018u,c->r[0]); // 801523C4
  {uint32_t ea=c->r[1]+0x00000098u; WF32(ea,c->f[0]);} // 801523C8
  {uint32_t ea=c->r[1]+0x0000009Cu; WF32(ea,c->f[0]);} // 801523CC
  {uint32_t ea=c->r[1]+0x000000A0u; WF32(ea,c->f[0]);} // 801523D0
  {uint32_t ea=c->r[1]+0x000000A4u; WF32(ea,c->f[0]);} // 801523D4
  {uint32_t ea=c->r[1]+0x000000A8u; WF32(ea,c->f[0]);} // 801523D8
  {uint32_t ea=c->r[1]+0x000000ACu; WF32(ea,c->f[0]);} // 801523DC
  {uint32_t ea=c->r[1]+0x000000B0u; WF32(ea,c->f[0]);} // 801523E0
  {uint32_t ea=c->r[1]+0x000000B4u; WF32(ea,c->f[0]);} // 801523E4
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[0]);} // 801523E8
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[0]);} // 801523EC
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[0]);} // 801523F0
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[0]);} // 801523F4
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[0]);} // 801523F8
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[0]);} // 801523FC
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[0]);} // 80152400
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[0]);} // 80152404
  W32(c->r[1]+0x000000D8u,c->r[0]); // 80152408
  W32(c->r[1]+0x000000DCu,c->r[0]); // 8015240C
  {uint32_t ea=c->r[1]+0x000000E0u; WF32(ea,c->f[0]);} // 80152410
  {uint32_t ea=c->r[1]+0x000000E4u; WF32(ea,c->f[0]);} // 80152414
  {uint32_t ea=c->r[1]+0x000000E8u; WF32(ea,c->f[0]);} // 80152418
  {uint32_t ea=c->r[1]+0x000000ECu; WF32(ea,c->f[0]);} // 8015241C
  {uint32_t ea=c->r[1]+0x000000F0u; WF32(ea,c->f[0]);} // 80152420
  {uint32_t ea=c->r[1]+0x000000F4u; WF32(ea,c->f[0]);} // 80152424
  {uint32_t ea=c->r[1]+0x000000F8u; WF32(ea,c->f[0]);} // 80152428
  {uint32_t ea=c->r[1]+0x000000FCu; WF32(ea,c->f[0]);} // 8015242C
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[0]);} // 80152430
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[0]);} // 80152434
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[0]);} // 80152438
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[0]);} // 8015243C
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[0]);} // 80152440
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[0]);} // 80152444
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[0]);} // 80152448
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[0]);} // 8015244C
  W32(c->r[1]+0x00000120u,c->r[0]); // 80152450
  W32(c->r[1]+0x00000124u,c->r[0]); // 80152454
  W32(c->r[1]+0x00000128u,c->r[0]); // 80152458
  W32(c->r[1]+0x0000012Cu,c->r[0]); // 8015245C
  W32(c->r[1]+0x00000130u,c->r[0]); // 80152460
  W32(c->r[1]+0x00000134u,c->r[0]); // 80152464
  W32(c->r[1]+0x00000138u,c->r[0]); // 80152468
  W32(c->r[1]+0x0000013Cu,c->r[0]); // 8015246C
  W32(c->r[1]+0x00000140u,c->r[0]); // 80152470
  if (!crb(c,2)) { goto L_80152498; } // 80152474
  c->r[4]=0u+0x802D0000u; // 80152478
  c->r[5]=c->r[29]|c->r[29]; // 8015247C
  c->r[4]=c->r[4]+0xFFFFDD30u; // 80152480
  c->r[3]=0u+0x00000000u; // 80152484
  c->r[4]=c->r[4]+0x0000048Fu; // 80152488
  c->lr=0x80152490u; f_801794C0(c); // 8015248C
  c->r[0]=0u+0x00000000u; // 80152490
  goto L_80153078; // 80152494
L_80152498:;
  c->r[0]=R32(c->r[31]+0x00000008u); // 80152498
  cmpu(c,0,c->r[4],c->r[0]); // 8015249C
  if (crb(c,0)) { goto L_801524AC; } // 801524A0
  c->r[3]=0u+0x00000000u; // 801524A4
  goto L_8015306C; // 801524A8
L_801524AC:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801524AC
  c->r[5]=0u+0x00000000u; // 801524B0
  c->lr=0x801524B8u; f_8017B030(c); // 801524B4
  W32(c->r[1]+0x00000008u,c->r[3]); // 801524B8
  c->r[4]=c->r[29]|c->r[29]; // 801524BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 801524C0
  c->r[5]=0u+0x00000001u; // 801524C4
  c->lr=0x801524CCu; f_8017AB54(c); // 801524C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801524CC
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 801524D0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801524D4
  c->r[4]=c->r[29]|c->r[29]; // 801524D8
  c->r[5]=0u+0x00000002u; // 801524DC
  c->lr=0x801524E4u; f_8017AB54(c); // 801524E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801524E4
  W32(c->r[1]+0x00000010u,c->r[0]); // 801524E8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801524EC
  c->r[4]=c->r[29]|c->r[29]; // 801524F0
  c->r[5]=0u+0x00000003u; // 801524F4
  c->lr=0x801524FCu; f_8017B030(c); // 801524F8
  W32(c->r[1]+0x00000014u,c->r[3]); // 801524FC
  c->r[4]=c->r[29]|c->r[29]; // 80152500
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152504
  c->r[5]=0u+0x00000004u; // 80152508
  c->lr=0x80152510u; f_8017B030(c); // 8015250C
  W32(c->r[1]+0x00000018u,c->r[3]); // 80152510
  c->r[4]=c->r[29]|c->r[29]; // 80152514
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152518
  c->r[5]=0u+0x00000005u; // 8015251C
  c->lr=0x80152524u; f_8017ADA8(c); // 80152520
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152524
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80152528
  c->r[0]=c->r[0]^0x80000000u; // 8015252C
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152530
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152534
  c->r[4]=c->r[29]|c->r[29]; // 80152538
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 8015253C
  c->r[5]=0u+0x00000006u; // 80152540
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152544
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152548
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 8015254C
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80152550
  c->lr=0x80152558u; f_8017ADA8(c); // 80152554
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152558
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 8015255C
  c->r[0]=c->r[0]^0x80000000u; // 80152560
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152564
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152568
  c->r[4]=c->r[29]|c->r[29]; // 8015256C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 80152570
  c->r[5]=0u+0x00000007u; // 80152574
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80152578
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 8015257C
  c->lr=0x80152584u; f_8017ADCC(c); // 80152580
  W32(c->r[1]+0x00000164u,c->r[3]); // 80152584
  c->r[4]=c->r[29]|c->r[29]; // 80152588
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 8015258C
  c->r[5]=0u+0x00000009u; // 80152590
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80152594
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152598
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8015259C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 801525A0
  c->lr=0x801525A8u; f_8017AC94(c); // 801525A4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801525A8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801525AC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801525B0
  c->r[4]=c->r[29]|c->r[29]; // 801525B4
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 801525B8
  c->r[5]=0u+0x0000000Au; // 801525BC
  c->r[3]=R32(c->r[31]+0x00000004u); // 801525C0
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801525C4
  {uint32_t ea=c->r[1]+0x00000028u; WF32(ea,c->f[0]);} // 801525C8
  c->lr=0x801525D0u; f_8017AC94(c); // 801525CC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801525D0
  W32(c->r[1]+0x00000164u,c->r[0]); // 801525D4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801525D8
  c->r[4]=c->r[29]|c->r[29]; // 801525DC
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801525E0
  c->r[5]=0u+0x0000000Bu; // 801525E4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801525E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801525EC
  {uint32_t ea=c->r[1]+0x0000002Cu; WF32(ea,c->f[0]);} // 801525F0
  c->lr=0x801525F8u; f_8017AC94(c); // 801525F4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801525F8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801525FC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80152600
  c->r[4]=c->r[29]|c->r[29]; // 80152604
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 80152608
  c->r[5]=0u+0x0000000Cu; // 8015260C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152610
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80152614
  {uint32_t ea=c->r[1]+0x00000030u; WF32(ea,c->f[0]);} // 80152618
  c->lr=0x80152620u; f_8017AC94(c); // 8015261C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152620
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152624
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80152628
  c->r[4]=c->r[29]|c->r[29]; // 8015262C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80152630
  c->r[5]=0u+0x0000000Du; // 80152634
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152638
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 8015263C
  {uint32_t ea=c->r[1]+0x00000034u; WF32(ea,c->f[0]);} // 80152640
  c->lr=0x80152648u; f_8017AC94(c); // 80152644
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152648
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 8015264C
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 80152650
  c->r[4]=c->r[29]|c->r[29]; // 80152654
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 80152658
  c->r[5]=0u+0x0000000Eu; // 8015265C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152660
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80152664
  {uint32_t ea=c->r[1]+0x00000038u; WF32(ea,c->f[0]);} // 80152668
  c->lr=0x80152670u; f_8017AC94(c); // 8015266C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152670
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152674
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152678
  c->r[4]=c->r[29]|c->r[29]; // 8015267C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152680
  c->r[5]=0u+0x00000014u; // 80152684
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152688
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 8015268C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152690
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152694
  {uint32_t ea=c->r[1]+0x0000003Cu; WF32(ea,c->f[0]);} // 80152698
  c->lr=0x801526A0u; f_8017B030(c); // 8015269C
  W32(c->r[1]+0x000000D8u,c->r[3]); // 801526A0
  c->r[4]=c->r[29]|c->r[29]; // 801526A4
  c->r[3]=R32(c->r[31]+0x00000004u); // 801526A8
  c->r[5]=0u+0x00000015u; // 801526AC
  c->lr=0x801526B4u; f_8017B030(c); // 801526B0
  W32(c->r[1]+0x000000DCu,c->r[3]); // 801526B4
  c->r[26]=c->r[1]+0x00000008u; // 801526B8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 801526BC
  c->r[27]=0u+0x00000000u; // 801526C0
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 801526C4
L_801526C8:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 801526C8
  c->r[4]=c->r[29]|c->r[29]; // 801526CC
  c->r[5]=c->r[27]+0x00000016u; // 801526D0
  c->lr=0x801526D8u; f_8017AC94(c); // 801526D4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801526D8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801526DC
  c->r[27]=c->r[27]+0x00000001u; // 801526E0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 801526E4
  cmpu(c,0,c->r[27],0x00000008u); // 801526E8
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 801526EC
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 801526F0
  {uint32_t ea=c->r[26]+0x00000090u; WF32(ea,c->f[0]);} // 801526F4
  c->r[26]=c->r[26]+0x00000004u; // 801526F8
  if (crb(c,0)) { IRQCHK(c); goto L_801526C8; } // 801526FC
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152700
  c->r[4]=c->r[29]|c->r[29]; // 80152704
  c->r[5]=0u+0x0000001Eu; // 80152708
  c->lr=0x80152710u; f_8017B030(c); // 8015270C
  W32(c->r[1]+0x00000120u,c->r[3]); // 80152710
  c->r[26]=c->r[1]+0x00000008u; // 80152714
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 80152718
  c->r[27]=0u+0x00000000u; // 8015271C
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 80152720
L_80152724:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152724
  c->r[4]=c->r[29]|c->r[29]; // 80152728
  c->r[5]=c->r[27]+0x0000001Fu; // 8015272C
  c->lr=0x80152734u; f_8017AC94(c); // 80152730
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152734
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152738
  c->r[27]=c->r[27]+0x00000001u; // 8015273C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80152740
  cmpu(c,0,c->r[27],0x00000008u); // 80152744
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80152748
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 8015274C
  {uint32_t ea=c->r[26]+0x000000D8u; WF32(ea,c->f[0]);} // 80152750
  c->r[26]=c->r[26]+0x00000004u; // 80152754
  if (crb(c,0)) { IRQCHK(c); goto L_80152724; } // 80152758
  c->r[26]=c->r[1]+0x00000008u; // 8015275C
  c->r[27]=0u+0x00000000u; // 80152760
L_80152764:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152764
  c->r[4]=c->r[29]|c->r[29]; // 80152768
  c->r[5]=c->r[27]+0x00000027u; // 8015276C
  c->lr=0x80152774u; f_8017B030(c); // 80152770
  c->r[27]=c->r[27]+0x00000001u; // 80152774
  W32(c->r[26]+0x0000011Cu,c->r[3]); // 80152778
  cmpu(c,0,c->r[27],0x00000008u); // 8015277C
  c->r[26]=c->r[26]+0x00000004u; // 80152780
  if (crb(c,0)) { IRQCHK(c); goto L_80152764; } // 80152784
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152788
  c->r[4]=c->r[29]|c->r[29]; // 8015278C
  c->r[5]=0u+0x0000002Fu; // 80152790
  c->lr=0x80152798u; f_8017B030(c); // 80152794
  W32(c->r[1]+0x00000084u,c->r[3]); // 80152798
  c->r[4]=c->r[29]|c->r[29]; // 8015279C
  c->r[3]=R32(c->r[31]+0x00000004u); // 801527A0
  c->r[5]=0u+0x00000030u; // 801527A4
  c->lr=0x801527ACu; f_8017AB54(c); // 801527A8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801527AC
  W32(c->r[1]+0x00000080u,c->r[0]); // 801527B0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801527B4
  c->r[4]=c->r[29]|c->r[29]; // 801527B8
  c->r[5]=0u+0x00000031u; // 801527BC
  c->lr=0x801527C4u; f_8017AB54(c); // 801527C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801527C4
  W32(c->r[1]+0x00000088u,c->r[0]); // 801527C8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801527CC
  c->r[4]=c->r[29]|c->r[29]; // 801527D0
  c->r[5]=0u+0x00000032u; // 801527D4
  c->lr=0x801527DCu; f_8017AC94(c); // 801527D8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801527DC
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801527E0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801527E4
  c->r[4]=c->r[29]|c->r[29]; // 801527E8
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 801527EC
  c->r[5]=0u+0x00000033u; // 801527F0
  c->r[3]=R32(c->r[31]+0x00000004u); // 801527F4
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 801527F8
  {uint32_t ea=c->r[1]+0x0000008Cu; WF32(ea,c->f[0]);} // 801527FC
  c->lr=0x80152804u; f_8017AC70(c); // 80152800
  W8(c->r[1]+0x00000090u,c->r[3]); // 80152804
  c->r[27]=0u+0x00000000u; // 80152808
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015280C
  W32(c->r[1]+0x00000094u,c->r[27]); // 80152810
  c->lr=0x80152818u; f_8017A6AC(c); // 80152814
  cmpu(c,0,c->r[3],0x00000034u); // 80152818
  if (crb(c,1)) { goto L_80152A8C; } // 8015281C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152820
  c->r[6]=0u+0x00000002u; // 80152824
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152828
  c->r[0]=0u+0x00000005u; // 8015282C
  {uint32_t ea=c->r[1]+0x000000B8u; WF32(ea,c->f[1]);} // 80152830
  c->r[4]=c->r[29]|c->r[29]; // 80152834
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152838
  c->r[5]=0u+0x00000010u; // 8015283C
  {uint32_t ea=c->r[1]+0x000000BCu; WF32(ea,c->f[1]);} // 80152840
  {uint32_t ea=c->r[1]+0x000000C0u; WF32(ea,c->f[1]);} // 80152844
  {uint32_t ea=c->r[1]+0x000000C4u; WF32(ea,c->f[1]);} // 80152848
  {uint32_t ea=c->r[1]+0x000000C8u; WF32(ea,c->f[1]);} // 8015284C
  {uint32_t ea=c->r[1]+0x000000CCu; WF32(ea,c->f[1]);} // 80152850
  {uint32_t ea=c->r[1]+0x000000D0u; WF32(ea,c->f[1]);} // 80152854
  {uint32_t ea=c->r[1]+0x000000D4u; WF32(ea,c->f[1]);} // 80152858
  {uint32_t ea=c->r[1]+0x00000100u; WF32(ea,c->f[1]);} // 8015285C
  {uint32_t ea=c->r[1]+0x00000104u; WF32(ea,c->f[1]);} // 80152860
  {uint32_t ea=c->r[1]+0x00000108u; WF32(ea,c->f[1]);} // 80152864
  {uint32_t ea=c->r[1]+0x0000010Cu; WF32(ea,c->f[1]);} // 80152868
  {uint32_t ea=c->r[1]+0x00000110u; WF32(ea,c->f[1]);} // 8015286C
  {uint32_t ea=c->r[1]+0x00000114u; WF32(ea,c->f[1]);} // 80152870
  {uint32_t ea=c->r[1]+0x00000118u; WF32(ea,c->f[1]);} // 80152874
  {uint32_t ea=c->r[1]+0x0000011Cu; WF32(ea,c->f[1]);} // 80152878
  W32(c->r[1]+0x00000040u,c->r[27]); // 8015287C
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80152880
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[0]);} // 80152884
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[0]);} // 80152888
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 8015288C
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80152890
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80152894
  W8(c->r[1]+0x0000005Cu,c->r[6]); // 80152898
  W32(c->r[1]+0x00000060u,c->r[0]); // 8015289C
  c->lr=0x801528A4u; f_8017AC94(c); // 801528A0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801528A4
  W32(c->r[1]+0x00000164u,c->r[0]); // 801528A8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801528AC
  c->r[4]=c->r[29]|c->r[29]; // 801528B0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 801528B4
  c->r[5]=0u+0x00000011u; // 801528B8
  c->r[3]=R32(c->r[31]+0x00000004u); // 801528BC
  c->f[29]=c->ps1[29]=S(c->f[0]-c->f[1]); // 801528C0
  c->lr=0x801528C8u; f_8017AC94(c); // 801528C4
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 801528C8
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 801528CC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[1]=RF64(ea);} // 801528D0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 801528D4
  c->f[31]=c->ps1[31]=S(c->f[0]-c->f[1]); // 801528D8
  fcmp(c,0,c->f[29],c->f[31]); // 801528DC
  if (crb(c,2)) { goto L_80152A40; } // 801528E0
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 801528E4
  fcmp(c,0,c->f[29],c->f[0]); // 801528E8
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801528EC
  if (!crb(c,2)) { goto L_801528F8; } // 801528F0
  goto L_801528FC; // 801528F4
L_801528F8:;
  c->f[29]=c->f[0]; // 801528F8
L_801528FC:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801528FC
  fcmp(c,0,c->f[29],c->f[0]); // 80152900
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80152904
  if (!crb(c,2)) { goto L_80152910; } // 80152908
  goto L_80152914; // 8015290C
L_80152910:;
  c->f[29]=c->f[0]; // 80152910
L_80152914:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152914
  c->lr=0x8015291Cu; f_800C02CC(c); // 80152918
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8015291C
  c->f[30]=c->ps1[30]=S(c->f[1]); // 80152920
  c->f[1]=c->f[0]; // 80152924
  c->lr=0x8015292Cu; f_800C02CC(c); // 80152928
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8015292C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152930
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152934
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 80152938
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 8015293C
  c->lr=0x80152944u; f_800C02CC(c); // 80152940
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80152944
  c->f[1]=c->f[29]; // 80152948
  c->lr=0x80152950u; f_800C02CC(c); // 8015294C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80152950
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152954
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152958
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8015295C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80152960
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80152964
  fcmp(c,0,c->f[1],c->f[0]); // 80152968
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8015296C
  if (!crb(c,2)) { goto L_80152978; } // 80152970
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152974
L_80152978:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152978
  fcmp(c,0,c->f[1],c->f[0]); // 8015297C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152980
  if (!crb(c,2)) { goto L_8015298C; } // 80152984
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152988
L_8015298C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 8015298C
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80152990
  fcmp(c,0,c->f[31],c->f[0]); // 80152994
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152998
  if (!crb(c,2)) { goto L_801529A4; } // 8015299C
  goto L_801529A8; // 801529A0
L_801529A4:;
  c->f[31]=c->f[0]; // 801529A4
L_801529A8:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801529A8
  fcmp(c,0,c->f[31],c->f[0]); // 801529AC
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801529B0
  if (!crb(c,2)) { goto L_801529BC; } // 801529B4
  goto L_801529C0; // 801529B8
L_801529BC:;
  c->f[31]=c->f[0]; // 801529BC
L_801529C0:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801529C0
  c->lr=0x801529C8u; f_800C02CC(c); // 801529C4
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 801529C8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 801529CC
  c->f[1]=c->f[0]; // 801529D0
  c->lr=0x801529D8u; f_800C02CC(c); // 801529D4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801529D8
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 801529DC
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801529E0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 801529E4
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 801529E8
  c->lr=0x801529F0u; f_800C02CC(c); // 801529EC
  c->f[28]=c->ps1[28]=S(c->f[1]); // 801529F0
  c->f[1]=c->f[31]; // 801529F4
  c->lr=0x801529FCu; f_800C02CC(c); // 801529F8
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801529FC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152A00
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152A04
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80152A08
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80152A0C
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80152A10
  fcmp(c,0,c->f[1],c->f[0]); // 80152A14
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80152A18
  if (!crb(c,2)) { goto L_80152A24; } // 80152A1C
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152A20
L_80152A24:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152A24
  fcmp(c,0,c->f[1],c->f[0]); // 80152A28
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152A2C
  if (!crb(c,2)) { goto L_80152A38; } // 80152A30
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152A34
L_80152A38:;
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80152A38
  goto L_80152A50; // 80152A3C
L_80152A40:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152A40
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152A44
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[1]);} // 80152A48
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80152A4C
L_80152A50:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152A50
  c->r[0]=0u+0x00000002u; // 80152A54
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152A58
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80152A5C
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[1]);} // 80152A60
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[0]);} // 80152A64
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[1]);} // 80152A68
  W8(c->r[1]+0x0000007Cu,c->r[0]); // 80152A6C
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 80152A70
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 80152A74
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 80152A78
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 80152A7C
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80152A80
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 80152A84
  goto L_80153000; // 80152A88
L_80152A8C:;
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[31]=RF64(ea);} // 80152A8C
  c->r[26]=c->r[1]+0x00000008u; // 80152A90
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[30]=c->ps1[30]=RF32(ea);} // 80152A94
  c->r[27]=0u+0x00000000u; // 80152A98
L_80152A9C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152A9C
  c->r[4]=c->r[29]|c->r[29]; // 80152AA0
  c->r[5]=c->r[27]+0x0000003Au; // 80152AA4
  c->lr=0x80152AACu; f_8017AC94(c); // 80152AA8
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152AAC
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152AB0
  c->r[27]=c->r[27]+0x00000001u; // 80152AB4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80152AB8
  cmpu(c,0,c->r[27],0x00000008u); // 80152ABC
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[31]); // 80152AC0
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[30]); // 80152AC4
  {uint32_t ea=c->r[26]+0x000000B0u; WF32(ea,c->f[0]);} // 80152AC8
  c->r[26]=c->r[26]+0x00000004u; // 80152ACC
  if (crb(c,0)) { IRQCHK(c); goto L_80152A9C; } // 80152AD0
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[30]=RF64(ea);} // 80152AD4
  c->r[26]=c->r[1]+0x00000008u; // 80152AD8
  {uint32_t ea=c->r[2]+0xFFFFB320u; c->f[31]=c->ps1[31]=RF32(ea);} // 80152ADC
  c->r[27]=0u+0x00000000u; // 80152AE0
L_80152AE4:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152AE4
  c->r[4]=c->r[29]|c->r[29]; // 80152AE8
  c->r[5]=c->r[27]+0x00000042u; // 80152AEC
  c->lr=0x80152AF4u; f_8017AC94(c); // 80152AF0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152AF4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152AF8
  c->r[27]=c->r[27]+0x00000001u; // 80152AFC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[0]=RF64(ea);} // 80152B00
  cmpu(c,0,c->r[27],0x00000008u); // 80152B04
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[30]); // 80152B08
  c->f[0]=c->ps1[0]=S(c->f[0]/c->f[31]); // 80152B0C
  {uint32_t ea=c->r[26]+0x000000F8u; WF32(ea,c->f[0]);} // 80152B10
  c->r[26]=c->r[26]+0x00000004u; // 80152B14
  if (crb(c,0)) { IRQCHK(c); goto L_80152AE4; } // 80152B18
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152B1C
  c->r[4]=c->r[29]|c->r[29]; // 80152B20
  c->r[5]=0u+0x0000004Au; // 80152B24
  c->lr=0x80152B2Cu; f_8017AB54(c); // 80152B28
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80152B2C
  W32(c->r[1]+0x00000040u,c->r[0]); // 80152B30
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152B34
  c->r[4]=c->r[29]|c->r[29]; // 80152B38
  c->r[5]=0u+0x0000004Bu; // 80152B3C
  c->lr=0x80152B44u; f_8017AC94(c); // 80152B40
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152B44
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152B48
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152B4C
  c->r[4]=c->r[29]|c->r[29]; // 80152B50
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152B54
  c->r[5]=0u+0x0000004Cu; // 80152B58
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152B5C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152B60
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152B64
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152B68
  {uint32_t ea=c->r[1]+0x00000044u; WF32(ea,c->f[0]);} // 80152B6C
  c->lr=0x80152B74u; f_8017AC94(c); // 80152B70
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152B74
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152B78
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152B7C
  c->r[4]=c->r[29]|c->r[29]; // 80152B80
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80152B84
  c->r[5]=0u+0x0000004Du; // 80152B88
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 80152B8C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152B90
  c->f[3]=c->ps1[3]=S(c->f[2]-c->f[3]); // 80152B94
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[2]=c->ps1[2]=RF32(ea);} // 80152B98
  {uint32_t ea=c->r[1]+0x0000004Cu; WF32(ea,c->f[1]);} // 80152B9C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152BA0
  c->f[1]=c->ps1[1]=S(c->f[3]/c->f[2]); // 80152BA4
  {uint32_t ea=c->r[1]+0x00000050u; WF32(ea,c->f[0]);} // 80152BA8
  {uint32_t ea=c->r[1]+0x00000048u; WF32(ea,c->f[1]);} // 80152BAC
  c->lr=0x80152BB4u; f_8017AC94(c); // 80152BB0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152BB4
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152BB8
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152BBC
  c->r[4]=c->r[29]|c->r[29]; // 80152BC0
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152BC4
  c->r[5]=0u+0x0000004Eu; // 80152BC8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152BCC
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152BD0
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152BD4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152BD8
  {uint32_t ea=c->r[1]+0x00000054u; WF32(ea,c->f[0]);} // 80152BDC
  c->lr=0x80152BE4u; f_8017AC94(c); // 80152BE0
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152BE4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152BE8
  c->r[3]=0u+0x00000002u; // 80152BEC
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152BF0
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80152BF4
  c->r[0]=0u+0x00000005u; // 80152BF8
  W8(c->r[1]+0x0000005Cu,c->r[3]); // 80152BFC
  c->r[4]=c->r[29]|c->r[29]; // 80152C00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152C04
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152C08
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152C0C
  c->r[5]=0u+0x00000010u; // 80152C10
  W32(c->r[1]+0x00000060u,c->r[0]); // 80152C14
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152C18
  {uint32_t ea=c->r[1]+0x00000058u; WF32(ea,c->f[0]);} // 80152C1C
  c->lr=0x80152C24u; f_8017AC94(c); // 80152C20
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152C24
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152C28
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152C2C
  c->r[4]=c->r[29]|c->r[29]; // 80152C30
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152C34
  c->r[5]=0u+0x00000011u; // 80152C38
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152C3C
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152C40
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152C44
  c->f[28]=c->ps1[28]=S(c->f[1]/c->f[0]); // 80152C48
  c->lr=0x80152C50u; f_8017AC94(c); // 80152C4C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152C50
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152C54
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152C58
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[3]=RF64(ea);} // 80152C5C
  {uint32_t ea=c->r[1]+0x00000168u; c->f[2]=RF64(ea);} // 80152C60
  fcmp(c,0,c->f[0],c->f[28]); // 80152C64
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[1]=c->ps1[1]=RF32(ea);} // 80152C68
  c->f[2]=c->ps1[2]=S(c->f[2]-c->f[3]); // 80152C6C
  c->f[31]=c->ps1[31]=S(c->f[2]/c->f[1]); // 80152C70
  if (!crb(c,2)) { goto L_80152D44; } // 80152C74
  fcmp(c,0,c->f[0],c->f[31]); // 80152C78
  if (!crb(c,2)) { goto L_80152D44; } // 80152C7C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152C80
  c->r[4]=c->r[29]|c->r[29]; // 80152C84
  c->r[5]=0u+0x00000050u; // 80152C88
  c->lr=0x80152C90u; f_8017AC94(c); // 80152C8C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152C90
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152C94
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152C98
  c->r[4]=c->r[29]|c->r[29]; // 80152C9C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152CA0
  c->r[5]=0u+0x00000051u; // 80152CA4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152CA8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152CAC
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152CB0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152CB4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[0]);} // 80152CB8
  c->lr=0x80152CC0u; f_8017AC94(c); // 80152CBC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152CC0
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152CC4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152CC8
  c->r[4]=c->r[29]|c->r[29]; // 80152CCC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80152CD0
  c->r[5]=0u+0x00000052u; // 80152CD4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152CD8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152CDC
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152CE0
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152CE4
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[0]);} // 80152CE8
  c->lr=0x80152CF0u; f_8017AC94(c); // 80152CEC
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152CF0
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152CF4
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152CF8
  c->r[4]=c->r[29]|c->r[29]; // 80152CFC
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152D00
  c->r[5]=0u+0x00000053u; // 80152D04
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152D08
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152D0C
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152D10
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152D14
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[0]);} // 80152D18
  c->lr=0x80152D20u; f_8017AC94(c); // 80152D1C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; // 80152D20
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152D24
  {uint32_t ea=c->r[2]+0xFFFFB338u; c->f[2]=RF64(ea);} // 80152D28
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80152D2C
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152D30
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152D34
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152D38
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80152D3C
  goto L_80152EAC; // 80152D40
L_80152D44:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152D44
  fcmp(c,0,c->f[28],c->f[0]); // 80152D48
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152D4C
  if (!crb(c,2)) { goto L_80152D58; } // 80152D50
  goto L_80152D5C; // 80152D54
L_80152D58:;
  c->f[28]=c->f[0]; // 80152D58
L_80152D5C:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152D5C
  fcmp(c,0,c->f[28],c->f[0]); // 80152D60
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80152D64
  if (!crb(c,2)) { goto L_80152D70; } // 80152D68
  goto L_80152D74; // 80152D6C
L_80152D70:;
  c->f[28]=c->f[0]; // 80152D70
L_80152D74:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152D74
  c->lr=0x80152D7Cu; f_800C02CC(c); // 80152D78
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152D7C
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80152D80
  c->f[1]=c->f[0]; // 80152D84
  c->lr=0x80152D8Cu; f_800C02CC(c); // 80152D88
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80152D8C
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152D90
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152D94
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80152D98
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80152D9C
  c->lr=0x80152DA4u; f_800C02CC(c); // 80152DA0
  c->f[29]=c->ps1[29]=S(c->f[1]); // 80152DA4
  c->f[1]=c->f[28]; // 80152DA8
  c->lr=0x80152DB0u; f_800C02CC(c); // 80152DAC
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80152DB0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152DB4
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152DB8
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[29]); // 80152DBC
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80152DC0
  c->f[2]=c->ps1[2]=S(c->f[1]/c->f[30]); // 80152DC4
  fcmp(c,0,c->f[2],c->f[0]); // 80152DC8
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80152DCC
  if (!crb(c,2)) { goto L_80152DD8; } // 80152DD0
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[2]=c->ps1[2]=RF32(ea);} // 80152DD4
L_80152DD8:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152DD8
  fcmp(c,0,c->f[2],c->f[0]); // 80152DDC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152DE0
  if (!crb(c,2)) { goto L_80152DEC; } // 80152DE4
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[2]=c->ps1[2]=RF32(ea);} // 80152DE8
L_80152DEC:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152DEC
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152DF0
  fcmp(c,0,c->f[31],c->f[0]); // 80152DF4
  {uint32_t ea=c->r[1]+0x00000064u; WF32(ea,c->f[2]);} // 80152DF8
  {uint32_t ea=c->r[1]+0x00000068u; WF32(ea,c->f[1]);} // 80152DFC
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152E00
  if (!crb(c,2)) { goto L_80152E0C; } // 80152E04
  goto L_80152E10; // 80152E08
L_80152E0C:;
  c->f[31]=c->f[0]; // 80152E0C
L_80152E10:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152E10
  fcmp(c,0,c->f[31],c->f[0]); // 80152E14
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80152E18
  if (!crb(c,2)) { goto L_80152E24; } // 80152E1C
  goto L_80152E28; // 80152E20
L_80152E24:;
  c->f[31]=c->f[0]; // 80152E24
L_80152E28:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152E28
  c->lr=0x80152E30u; f_800C02CC(c); // 80152E2C
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152E30
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80152E34
  c->f[1]=c->f[0]; // 80152E38
  c->lr=0x80152E40u; f_800C02CC(c); // 80152E3C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80152E40
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152E44
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152E48
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80152E4C
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 80152E50
  c->lr=0x80152E58u; f_800C02CC(c); // 80152E54
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80152E58
  c->f[1]=c->f[31]; // 80152E5C
  c->lr=0x80152E64u; f_800C02CC(c); // 80152E60
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80152E64
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152E68
  {uint32_t ea=c->r[2]+0xFFFFB328u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152E6C
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80152E70
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80152E74
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[30]); // 80152E78
  fcmp(c,0,c->f[1],c->f[0]); // 80152E7C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80152E80
  if (!crb(c,2)) { goto L_80152E8C; } // 80152E84
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152E88
L_80152E8C:;
  {uint32_t ea=c->r[2]+0xFFFFB32Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152E8C
  fcmp(c,0,c->f[1],c->f[0]); // 80152E90
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80152E94
  if (!crb(c,2)) { goto L_80152EA0; } // 80152E98
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152E9C
L_80152EA0:;
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152EA0
  {uint32_t ea=c->r[1]+0x0000006Cu; WF32(ea,c->f[1]);} // 80152EA4
  {uint32_t ea=c->r[1]+0x00000070u; WF32(ea,c->f[0]);} // 80152EA8
L_80152EAC:;
  {uint32_t ea=c->r[2]+0xFFFFB318u; c->f[1]=c->ps1[1]=RF32(ea);} // 80152EAC
  c->r[4]=c->r[29]|c->r[29]; // 80152EB0
  {uint32_t ea=c->r[2]+0xFFFFB324u; c->f[0]=c->ps1[0]=RF32(ea);} // 80152EB4
  c->r[5]=0u+0x00000013u; // 80152EB8
  {uint32_t ea=c->r[1]+0x00000074u; WF32(ea,c->f[1]);} // 80152EBC
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152EC0
  {uint32_t ea=c->r[1]+0x00000078u; WF32(ea,c->f[0]);} // 80152EC4
  c->lr=0x80152ECCu; f_8017AB54(c); // 80152EC8
  W8(c->r[1]+0x0000007Cu,c->r[3]); // 80152ECC
  c->r[4]=c->r[29]|c->r[29]; // 80152ED0
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152ED4
  c->r[5]=0u+0x00000034u; // 80152ED8
  c->lr=0x80152EE0u; f_8017ADA8(c); // 80152EDC
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152EE0
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80152EE4
  c->r[0]=c->r[0]^0x80000000u; // 80152EE8
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152EEC
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152EF0
  c->r[4]=c->r[29]|c->r[29]; // 80152EF4
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152EF8
  c->r[5]=0u+0x00000035u; // 80152EFC
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152F00
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152F04
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152F08
  {uint32_t ea=c->r[1]+0x00000144u; WF32(ea,c->f[0]);} // 80152F0C
  c->lr=0x80152F14u; f_8017ADA8(c); // 80152F10
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152F14
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80152F18
  c->r[0]=c->r[0]^0x80000000u; // 80152F1C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152F20
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152F24
  c->r[4]=c->r[29]|c->r[29]; // 80152F28
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80152F2C
  c->r[5]=0u+0x00000036u; // 80152F30
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152F34
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152F38
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152F3C
  {uint32_t ea=c->r[1]+0x00000148u; WF32(ea,c->f[0]);} // 80152F40
  c->lr=0x80152F48u; f_8017ADA8(c); // 80152F44
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152F48
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[1]=RF64(ea);} // 80152F4C
  c->r[0]=c->r[0]^0x80000000u; // 80152F50
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152F54
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152F58
  c->r[4]=c->r[29]|c->r[29]; // 80152F5C
  {uint32_t ea=c->r[1]+0x00000160u; c->f[0]=RF64(ea);} // 80152F60
  c->r[5]=0u+0x00000037u; // 80152F64
  c->f[0]=c->ps1[0]=S(c->f[0]-c->f[1]); // 80152F68
  {uint32_t ea=c->r[1]+0x0000014Cu; WF32(ea,c->f[0]);} // 80152F6C
  c->lr=0x80152F74u; f_8017ADA8(c); // 80152F70
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152F74
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80152F78
  c->r[0]=c->r[0]^0x80000000u; // 80152F7C
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152F80
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152F84
  c->r[4]=c->r[29]|c->r[29]; // 80152F88
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80152F8C
  c->r[5]=0u+0x00000038u; // 80152F90
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152F94
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152F98
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152F9C
  {uint32_t ea=c->r[1]+0x00000150u; WF32(ea,c->f[0]);} // 80152FA0
  c->lr=0x80152FA8u; f_8017ADA8(c); // 80152FA4
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152FA8
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80152FAC
  c->r[0]=c->r[0]^0x80000000u; // 80152FB0
  W32(c->r[1]+0x00000164u,c->r[0]); // 80152FB4
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152FB8
  c->r[4]=c->r[29]|c->r[29]; // 80152FBC
  {uint32_t ea=c->r[1]+0x00000160u; c->f[1]=RF64(ea);} // 80152FC0
  c->r[5]=0u+0x00000039u; // 80152FC4
  c->r[3]=R32(c->r[31]+0x00000004u); // 80152FC8
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152FCC
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152FD0
  {uint32_t ea=c->r[1]+0x00000154u; WF32(ea,c->f[0]);} // 80152FD4
  c->lr=0x80152FDCu; f_8017ADA8(c); // 80152FD8
  c->r[0]=(uint32_t)(int32_t)(int16_t)c->r[3]; // 80152FDC
  {uint32_t ea=c->r[2]+0xFFFFB330u; c->f[2]=RF64(ea);} // 80152FE0
  c->r[0]=c->r[0]^0x80000000u; // 80152FE4
  W32(c->r[1]+0x0000016Cu,c->r[0]); // 80152FE8
  {uint32_t ea=c->r[2]+0xFFFFB31Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80152FEC
  {uint32_t ea=c->r[1]+0x00000168u; c->f[1]=RF64(ea);} // 80152FF0
  c->f[1]=c->ps1[1]=S(c->f[1]-c->f[2]); // 80152FF4
  c->f[0]=c->ps1[0]=S(c->f[1]/c->f[0]); // 80152FF8
  {uint32_t ea=c->r[1]+0x00000158u; WF32(ea,c->f[0]);} // 80152FFC
L_80153000:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 80153000
  c->lr=0x80153008u; f_8017A6AC(c); // 80153004
  cmpu(c,0,c->r[3],0x00000054u); // 80153008
  if (crb(c,1)) { goto L_8015302C; } // 8015300C
  c->r[4]=0u+0x00000064u; // 80153010
  c->r[3]=0u+0x00000000u; // 80153014
  c->r[0]=0u+0x00000001u; // 80153018
  W8(c->r[1]+0x0000015Cu,c->r[4]); // 8015301C
  W8(c->r[1]+0x0000015Du,c->r[3]); // 80153020
  W8(c->r[1]+0x0000015Eu,c->r[0]); // 80153024
  goto L_80153068; // 80153028
L_8015302C:;
  c->r[3]=R32(c->r[31]+0x00000004u); // 8015302C
  c->r[4]=c->r[29]|c->r[29]; // 80153030
  c->r[5]=0u+0x00000054u; // 80153034
  c->lr=0x8015303Cu; f_8017AB54(c); // 80153038
  W8(c->r[1]+0x0000015Cu,c->r[3]); // 8015303C
  c->r[4]=c->r[29]|c->r[29]; // 80153040
  c->r[3]=R32(c->r[31]+0x00000004u); // 80153044
  c->r[5]=0u+0x00000055u; // 80153048
  c->lr=0x80153050u; f_8017AB54(c); // 8015304C
  W8(c->r[1]+0x0000015Du,c->r[3]); // 80153050
  c->r[4]=c->r[29]|c->r[29]; // 80153054
  c->r[3]=R32(c->r[31]+0x00000004u); // 80153058
  c->r[5]=0u+0x00000056u; // 8015305C
  c->lr=0x80153064u; f_8017AB54(c); // 80153060
  W8(c->r[1]+0x0000015Eu,c->r[3]); // 80153064
L_80153068:;
  c->r[3]=0u+0x00000001u; // 80153068
L_8015306C:;
  c->r[0]=0u-c->r[3]; // 8015306C
  c->r[0]=c->r[0]|c->r[3]; // 80153070
  c->r[0]=rotl(c->r[0],1)&0x00000001u; // 80153074
L_80153078:;
  cmps(c,0,(int32_t)c->r[0],0); // 80153078
  if (!crb(c,2)) { goto L_80153090; } // 8015307C
  c->r[0]=0u+0xFFFFFFFFu; // 80153080
  W32(c->r[30]+0x00000000u,c->r[0]); // 80153084
  c->r[3]=0u+0x00000000u; // 80153088
  goto L_801531EC; // 8015308C
L_80153090:;
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80153090
  cmps(c,0,(int32_t)c->r[0],0); // 80153094
  if (crb(c,2)) { goto L_801530A8; } // 80153098
  cmps(c,0,(int32_t)c->r[0],1); // 8015309C
  if (crb(c,2)) { goto L_801530B0; } // 801530A0
  goto L_801531DC; // 801530A4
L_801530A8:;
  c->r[27]=0u+0x00000001u; // 801530A8
  goto L_801531E8; // 801530AC
L_801530B0:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801530B0
  c->r[3]=c->r[28]|c->r[28]; // 801530B4
  c->r[4]=c->r[29]|c->r[29]; // 801530B8
  c->r[5]=c->r[30]|c->r[30]; // 801530BC
  c->r[12]=R32(c->r[12]+0x0000008Cu); // 801530C0
  c->ctr=c->r[12]; // 801530C4
  if (true) { c->lr=0x801530CCu; dispatch(c,c->ctr); } // 801530C8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801530CC
  c->r[31]=c->r[3]|c->r[3]; // 801530D0
  cmps(c,0,(int32_t)c->r[0],0); // 801530D4
  if (crb(c,2)) { goto L_801530E4; } // 801530D8
  c->r[3]=0u+0x00000000u; // 801530DC
  goto L_801531EC; // 801530E0
L_801530E4:;
  c->r[26]=0u+0x00000000u; // 801530E4
  c->r[27]=0u+0x00000000u; // 801530E8
  c->r[25]=0u+0x00000000u; // 801530EC
  goto L_80153190; // 801530F0
L_801530F4:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 801530F4
  c->r[3]=c->r[28]|c->r[28]; // 801530F8
  c->r[4]=c->r[29]|c->r[29]; // 801530FC
  c->r[5]=c->r[25]|c->r[25]; // 80153100
  c->r[12]=R32(c->r[12]+0x00000090u); // 80153104
  c->r[6]=c->r[30]|c->r[30]; // 80153108
  c->ctr=c->r[12]; // 8015310C
  if (true) { c->lr=0x80153114u; dispatch(c,c->ctr); } // 80153110
  c->r[0]=R32(c->r[30]+0x00000000u); // 80153114
  c->r[4]=c->r[3]|c->r[3]; // 80153118
  cmps(c,0,(int32_t)c->r[0],0); // 8015311C
  if (crb(c,2)) { goto L_8015312C; } // 80153120
  c->r[3]=0u+0x00000000u; // 80153124
  goto L_801531EC; // 80153128
L_8015312C:;
  c->r[12]=R32(c->r[28]+0x00000000u); // 8015312C
  c->r[3]=c->r[28]|c->r[28]; // 80153130
  c->r[5]=c->r[30]|c->r[30]; // 80153134
  c->r[12]=R32(c->r[12]+0x00000084u); // 80153138
  c->ctr=c->r[12]; // 8015313C
  if (true) { c->lr=0x80153144u; dispatch(c,c->ctr); } // 80153140
  c->r[0]=R32(c->r[30]+0x00000000u); // 80153144
  c->r[4]=c->r[3]|c->r[3]; // 80153148
  cmps(c,0,(int32_t)c->r[0],0); // 8015314C
  if (crb(c,2)) { goto L_8015315C; } // 80153150
  c->r[3]=0u+0x00000000u; // 80153154
  goto L_801531EC; // 80153158
L_8015315C:;
  c->r[3]=c->r[28]|c->r[28]; // 8015315C
  c->r[5]=c->r[30]|c->r[30]; // 80153160
  c->lr=0x80153168u; f_8015235C(c); // 80153164
  c->r[0]=R32(c->r[30]+0x00000000u); // 80153168
  cmps(c,0,(int32_t)c->r[0],0); // 8015316C
  if (crb(c,2)) { goto L_8015317C; } // 80153170
  c->r[3]=0u+0x00000000u; // 80153174
  goto L_801531EC; // 80153178
L_8015317C:;
  cmpu(c,0,c->r[26],c->r[3]); // 8015317C
  if (!crb(c,0)) { goto L_80153188; } // 80153180
  c->r[26]=c->r[3]|c->r[3]; // 80153184
L_80153188:;
  c->r[27]=c->r[27]+c->r[3]; // 80153188
  c->r[25]=c->r[25]+0x00000001u; // 8015318C
L_80153190:;
  cmpu(c,0,c->r[25],c->r[31]); // 80153190
  if (crb(c,0)) { IRQCHK(c); goto L_801530F4; } // 80153194
  c->r[0]=R32(c->r[1]+0x00000010u); // 80153198
  cmps(c,0,(int32_t)c->r[0],0); // 8015319C
  if (crb(c,2)) { goto L_801531E8; } // 801531A0
  cmps(c,0,(int32_t)c->r[0],1); // 801531A4
  if (crb(c,2)) { goto L_801531BC; } // 801531A8
  cmps(c,0,(int32_t)c->r[0],2); // 801531AC
  if (crb(c,2)) { goto L_801531C4; } // 801531B0
  goto L_801531CC; // 801531B4
  goto L_801531E8; // 801531B8
L_801531BC:;
  c->r[27]=c->r[26]|c->r[26]; // 801531BC
  goto L_801531E8; // 801531C0
L_801531C4:;
  c->r[27]=c->r[26]|c->r[26]; // 801531C4
  goto L_801531E8; // 801531C8
L_801531CC:;
  c->r[0]=0u+0xFFFFFFFFu; // 801531CC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801531D0
  c->r[27]=0u+0x00000000u; // 801531D4
  goto L_801531E8; // 801531D8
L_801531DC:;
  c->r[0]=0u+0xFFFFFFFFu; // 801531DC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801531E0
  c->r[27]=0u+0x00000000u; // 801531E4
L_801531E8:;
  c->r[3]=c->r[27]|c->r[27]; // 801531E8
L_801531EC:;
  c->r[11]=c->r[1]+0x00000190u; // 801531EC
  {uint32_t ea=c->r[1]+0x000001C8u; psq_load(c,31,ea,0,0);} // 801531F0
  {uint32_t ea=c->r[1]+0x000001C0u; c->f[31]=RF64(ea);} // 801531F4
  {uint32_t ea=c->r[1]+0x000001B8u; psq_load(c,30,ea,0,0);} // 801531F8
  {uint32_t ea=c->r[1]+0x000001B0u; c->f[30]=RF64(ea);} // 801531FC
  {uint32_t ea=c->r[1]+0x000001A8u; psq_load(c,29,ea,0,0);} // 80153200
  {uint32_t ea=c->r[1]+0x000001A0u; c->f[29]=RF64(ea);} // 80153204
  {uint32_t ea=c->r[1]+0x00000198u; psq_load(c,28,ea,0,0);} // 80153208
  {uint32_t ea=c->r[1]+0x00000190u; c->f[28]=RF64(ea);} // 8015320C
  c->lr=0x80153214u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80153210
  c->r[0]=R32(c->r[1]+0x000001D4u); // 80153214
  c->lr=c->r[0]; // 80153218
  c->r[1]=c->r[1]+0x000001D0u; // 8015321C
  return; // 80153220
}

// CountUp__16CriAuCueSheetLocFv
void f_80153224(Ctx* __restrict c) {
  trace_call(0x80153224u);
  c->r[4]=R32(c->r[3]+0x0000014Cu); // 80153224
  c->r[0]=c->r[4]+0x00000001u; // 80153228
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8015322C
  return; // 80153230
}

// CountDown__16CriAuCueSheetLocFv
void f_80153234(Ctx* __restrict c) {
  trace_call(0x80153234u);
  c->r[4]=R32(c->r[3]+0x0000014Cu); // 80153234
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80153238
  W32(c->r[3]+0x0000014Cu,c->r[0]); // 8015323C
  c->r[3]=c->r[0]|c->r[0]; // 80153240
  return; // 80153244
}

// GetStmIoFileManager__16CriAuCueSheetLocFPPCcR8CriError
void f_80153248(Ctx* __restrict c) {
  trace_call(0x80153248u);
  c->r[0]=0u+0x00000000u; // 80153248
  W32(c->r[5]+0x00000000u,c->r[0]); // 8015324C
  c->r[0]=c->r[3]+0x00000044u; // 80153250
  W32(c->r[4]+0x00000000u,c->r[0]); // 80153254
  c->r[3]=R32(c->r[3]+0x00000040u); // 80153258
  return; // 8015325C
}

// StartLoadingCueSheetBinaryFile__16CriAuCueSheetLocFPvPCcR8CriError
void f_80153260(Ctx* __restrict c) {
  trace_call(0x80153260u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153260
  c->r[0]=c->lr; // 80153264
  W32(c->r[1]+0x00000044u,c->r[0]); // 80153268
  c->r[0]=0u+0x00000000u; // 8015326C
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80153270
  c->r[28]=c->r[3]|c->r[3]; // 80153274
  c->r[29]=c->r[4]|c->r[4]; // 80153278
  c->r[30]=c->r[5]|c->r[5]; // 8015327C
  c->r[31]=c->r[6]|c->r[6]; // 80153280
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153284
  c->r[0]=0u+0x00000002u; // 80153288
  c->r[3]=R32(c->r[3]+0x00000004u); // 8015328C
  c->r[12]=R32(c->r[13]+0xFFFF88F8u); // 80153290
  W32(c->r[1]+0x00000018u,c->r[3]); // 80153294
  c->r[3]=c->r[1]+0x00000018u; // 80153298
  c->r[4]=R32(c->r[13]+0xFFFFA198u); // 8015329C
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801532A0
  c->ctr=c->r[12]; // 801532A4
  if (true) { c->lr=0x801532ACu; dispatch(c,c->ctr); } // 801532A8
  cmps(c,0,(int32_t)c->r[3],0); // 801532AC
  W32(c->r[28]+0x00000144u,c->r[3]); // 801532B0
  if (!crb(c,2)) { goto L_801532E0; } // 801532B4
  c->r[4]=0u+0x802D0000u; // 801532B8
  c->r[3]=0u+0x00000000u; // 801532BC
  c->r[4]=c->r[4]+0xFFFFDD30u; // 801532C0
  c->r[4]=c->r[4]+0x00000794u; // 801532C4
  c->lr=0x801532CCu; f_80179434(c); // 801532C8
  c->r[0]=0u+0xFFFFFFFFu; // 801532CC
  W32(c->r[31]+0x00000000u,c->r[0]); // 801532D0
  c->r[0]=0u+0x00000003u; // 801532D4
  W32(c->r[28]+0x00000148u,c->r[0]); // 801532D8
  goto L_80153484; // 801532DC
L_801532E0:;
  c->r[0]=R32(c->r[28]+0x00000148u); // 801532E0
  cmps(c,0,(int32_t)c->r[0],1); // 801532E4
  if (!crb(c,2)) { goto L_8015330C; } // 801532E8
  c->r[3]=0u+0x802D0000u; // 801532EC
  c->r[0]=0u+0xFFFFFFFFu; // 801532F0
  c->r[3]=c->r[3]+0xFFFFDD30u; // 801532F4
  W32(c->r[31]+0x00000000u,c->r[0]); // 801532F8
  c->r[4]=c->r[3]+0x000007C2u; // 801532FC
  c->r[3]=0u+0x00000000u; // 80153300
  c->lr=0x80153308u; f_80179434(c); // 80153304
  goto L_80153484; // 80153308
L_8015330C:;
  c->r[0]=R32(c->r[28]+0x00000010u); // 8015330C
  cmps(c,0,(int32_t)c->r[0],0); // 80153310
  if (crb(c,2)) { goto L_80153330; } // 80153314
  c->r[12]=R32(c->r[28]+0x00000000u); // 80153318
  c->r[3]=c->r[28]|c->r[28]; // 8015331C
  c->r[4]=c->r[1]+0x00000008u; // 80153320
  c->r[12]=R32(c->r[12]+0x00000020u); // 80153324
  c->ctr=c->r[12]; // 80153328
  if (true) { c->lr=0x80153330u; dispatch(c,c->ctr); } // 8015332C
L_80153330:;
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80153330
  cmps(c,0,(int32_t)c->r[0],0); // 80153334
  if (crb(c,2)) { goto L_8015335C; } // 80153338
  c->r[3]=0u+0x802D0000u; // 8015333C
  c->r[0]=0u+0xFFFFFFFFu; // 80153340
  c->r[3]=c->r[3]+0xFFFFDD30u; // 80153344
  W32(c->r[31]+0x00000000u,c->r[0]); // 80153348
  c->r[4]=c->r[3]+0x000007F1u; // 8015334C
  c->r[3]=0u+0x00000000u; // 80153350
  c->lr=0x80153358u; f_80179434(c); // 80153354
  goto L_80153484; // 80153358
L_8015335C:;
  c->r[3]=R32(c->r[28]+0x00000144u); // 8015335C
  c->r[4]=c->r[29]|c->r[29]; // 80153360
  c->r[5]=c->r[30]|c->r[30]; // 80153364
  c->r[6]=c->r[1]+0x00000010u; // 80153368
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015336C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80153370
  c->ctr=c->r[12]; // 80153374
  if (true) { c->lr=0x8015337Cu; dispatch(c,c->ctr); } // 80153378
  W32(c->r[31]+0x00000000u,c->r[3]); // 8015337C
  c->r[4]=0u+0x00000000u; // 80153380
  c->r[0]=c->r[4]^0x80000000u; // 80153384
  c->r[5]=R32(c->r[1]+0x00000010u); // 80153388
  c->r[6]=R32(c->r[1]+0x00000014u); // 8015338C
  c->r[5]=c->r[5]^0x80000000u; // 80153390
  c->r[4]=addc(c,~c->r[6],c->r[4],1); // 80153394
  c->r[5]=addc(c,~c->r[5],c->r[0],c->xer_ca); // 80153398
  c->r[5]=addc(c,~c->r[0],c->r[0],c->xer_ca); // 8015339C
  c->r[5]=0u-c->r[5]; cr0(c,c->r[5]); // 801533A0
  if (crb(c,2)) { goto L_801533B0; } // 801533A4
  cmps(c,0,(int32_t)c->r[3],0); // 801533A8
  if (crb(c,2)) { goto L_801533C4; } // 801533AC
L_801533B0:;
  c->r[0]=0u+0xFFFFFFFFu; // 801533B0
  W32(c->r[31]+0x00000000u,c->r[0]); // 801533B4
  c->r[0]=0u+0x00000003u; // 801533B8
  W32(c->r[28]+0x00000148u,c->r[0]); // 801533BC
  goto L_80153484; // 801533C0
L_801533C4:;
  c->r[0]=c->r[6]+0x0000001Fu; // 801533C4
  c->r[27]=0u+0x802D0000u; // 801533C8
  c->r[26]=rotl(c->r[0],0)&0xFFFFFFE0u; // 801533CC
  W32(c->r[28]+0x00000014u,c->r[6]); // 801533D0
  c->r[27]=c->r[27]+0xFFFFDD30u; // 801533D4
  c->r[3]=R32(c->r[28]+0x00000004u); // 801533D8
  c->r[4]=c->r[26]|c->r[26]; // 801533DC
  c->r[6]=0u+0x00000020u; // 801533E0
  c->r[5]=c->r[27]+0x000000F9u; // 801533E4
  c->lr=0x801533ECu; f_8017C100(c); // 801533E8
  cmps(c,0,(int32_t)c->r[3],0); // 801533EC
  W32(c->r[28]+0x00000010u,c->r[3]); // 801533F0
  c->r[6]=c->r[3]|c->r[3]; // 801533F4
  if (!crb(c,2)) { goto L_80153418; } // 801533F8
  c->r[0]=0u+0xFFFFFFFDu; // 801533FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80153400
  c->r[4]=c->r[27]+0x00000817u; // 80153404
  c->r[3]=0u+0x00000000u; // 80153408
  c->r[5]=0u+0xFFFFFFFDu; // 8015340C
  c->lr=0x80153414u; f_8017968C(c); // 80153410
  goto L_80153484; // 80153414
L_80153418:;
  W32(c->r[28]+0x0000000Cu,c->r[3]); // 80153418
  c->r[4]=c->r[29]|c->r[29]; // 8015341C
  c->r[3]=R32(c->r[28]+0x00000144u); // 80153420
  c->r[5]=c->r[30]|c->r[30]; // 80153424
  c->r[8]=c->r[26]|c->r[26]; // 80153428
  c->r[7]=sraw(c,c->r[26],31); // 8015342C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80153430
  c->r[12]=R32(c->r[12]+0x00000010u); // 80153434
  c->ctr=c->r[12]; // 80153438
  if (true) { c->lr=0x80153440u; dispatch(c,c->ctr); } // 8015343C
  cmps(c,0,(int32_t)c->r[3],0); // 80153440
  W32(c->r[31]+0x00000000u,c->r[3]); // 80153444
  if (crb(c,2)) { goto L_8015347C; } // 80153448
  c->r[4]=c->r[27]+0x00000824u; // 8015344C
  c->r[3]=0u+0x00000000u; // 80153450
  c->lr=0x80153458u; f_80179434(c); // 80153454
  c->r[0]=0u+0x00000003u; // 80153458
  W32(c->r[28]+0x00000148u,c->r[0]); // 8015345C
  c->r[3]=c->r[28]|c->r[28]; // 80153460
  c->r[4]=c->r[1]+0x00000008u; // 80153464
  c->r[12]=R32(c->r[28]+0x00000000u); // 80153468
  c->r[12]=R32(c->r[12]+0x00000020u); // 8015346C
  c->ctr=c->r[12]; // 80153470
  if (true) { c->lr=0x80153478u; dispatch(c,c->ctr); } // 80153474
  goto L_80153484; // 80153478
L_8015347C:;
  c->r[0]=0u+0x00000001u; // 8015347C
  W32(c->r[28]+0x00000148u,c->r[0]); // 80153480
L_80153484:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80153484
  c->r[0]=R32(c->r[1]+0x00000044u); // 80153488
  c->lr=c->r[0]; // 8015348C
  c->r[1]=c->r[1]+0x00000040u; // 80153490
  return; // 80153494
}

// Create__8CriAuObjFP15_criheap_structP16CriSoundRendererPCcR8CriError
void f_80153498(Ctx* __restrict c) {
  trace_call(0x80153498u);
  c->r[7]=c->r[6]|c->r[6]; // 80153498
  c->r[6]=0u+0x00000010u; // 8015349C
  f_801535AC(c); return; // 801534A0
}

// ExecuteMain__8CriAuObjFR8CriError
void f_801534A4(Ctx* __restrict c) {
  trace_call(0x801534A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801534A4
  c->r[0]=c->lr; // 801534A8
  c->r[4]=0u+0x803F0000u; // 801534AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801534B0
  c->r[0]=0u+0x00000000u; // 801534B4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801534B8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801534BC
  c->r[30]=c->r[3]|c->r[3]; // 801534C0
  W32(c->r[3]+0x00000000u,c->r[0]); // 801534C4
  c->r[31]=R32(c->r[4]+0xFFFFFCD0u); // 801534C8
  cmps(c,0,(int32_t)c->r[31],0); // 801534CC
  if (crb(c,2)) { goto L_80153504; } // 801534D0
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 801534D4
  goto L_80153504; // 801534D8
L_801534DC:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 801534DC
  c->r[3]=c->r[31]|c->r[31]; // 801534E0
  c->r[4]=c->r[30]|c->r[30]; // 801534E4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801534E8
  c->ctr=c->r[12]; // 801534EC
  if (true) { c->lr=0x801534F4u; dispatch(c,c->ctr); } // 801534F0
  c->r[31]=R32(c->r[31]+0x00000014u); // 801534F4
  cmps(c,0,(int32_t)c->r[31],0); // 801534F8
  if (crb(c,2)) { goto L_80153504; } // 801534FC
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153500
L_80153504:;
  cmps(c,0,(int32_t)c->r[31],0); // 80153504
  if (!crb(c,2)) { IRQCHK(c); goto L_801534DC; } // 80153508
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015350C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80153510
  c->r[30]=R32(c->r[1]+0x00000008u); // 80153514
  c->lr=c->r[0]; // 80153518
  c->r[1]=c->r[1]+0x00000010u; // 8015351C
  return; // 80153520
}

// __dt__8CriAuObjFv
void f_80153524(Ctx* __restrict c) {
  trace_call(0x80153524u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153524
  c->r[0]=c->lr; // 80153528
  cmps(c,0,(int32_t)c->r[3],0); // 8015352C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153530
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80153534
  c->r[31]=c->r[3]|c->r[3]; // 80153538
  if (crb(c,2)) { goto L_80153550; } // 8015353C
  cmps(c,0,(int32_t)c->r[4],0); // 80153540
  if (!crb(c,1)) { goto L_80153550; } // 80153544
  c->r[4]=0u+0x00000010u; // 80153548
  c->lr=0x80153550u; f_8017BFE8(c); // 8015354C
L_80153550:;
  c->r[3]=c->r[31]|c->r[31]; // 80153550
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80153554
  c->r[0]=R32(c->r[1]+0x00000014u); // 80153558
  c->lr=c->r[0]; // 8015355C
  c->r[1]=c->r[1]+0x00000010u; // 80153560
  return; // 80153564
}

// __dt__11CriAuObjLocFv
void f_80153568(Ctx* __restrict c) {
  trace_call(0x80153568u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153568
  c->r[0]=c->lr; // 8015356C
  cmps(c,0,(int32_t)c->r[3],0); // 80153570
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80153578
  c->r[31]=c->r[3]|c->r[3]; // 8015357C
  if (crb(c,2)) { goto L_80153594; } // 80153580
  cmps(c,0,(int32_t)c->r[4],0); // 80153584
  if (!crb(c,1)) { goto L_80153594; } // 80153588
  c->r[4]=0u+0x00000044u; // 8015358C
  c->lr=0x80153594u; f_8017BFE8(c); // 80153590
L_80153594:;
  c->r[3]=c->r[31]|c->r[31]; // 80153594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80153598
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015359C
  c->lr=c->r[0]; // 801535A0
  c->r[1]=c->r[1]+0x00000010u; // 801535A4
  return; // 801535A8
}

// Create__11CriAuObjLocFP15_criheap_structP16CriSoundRendererPCcUlR8CriError
void f_801535AC(Ctx* __restrict c) {
  trace_call(0x801535ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801535AC
  c->r[0]=c->lr; // 801535B0
  W32(c->r[1]+0x00000054u,c->r[0]); // 801535B4
  {uint32_t ea=c->r[1]+0x0000002Cu; for(int i=23;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801535B8
  c->r[29]=0u+0x802D0000u; // 801535BC
  c->r[23]=c->r[3]|c->r[3]; // 801535C0
  c->r[30]=0u+0x00000000u; // 801535C4
  c->r[24]=c->r[4]|c->r[4]; // 801535C8
  c->r[26]=c->r[6]|c->r[6]; // 801535CC
  c->r[29]=c->r[29]+0xFFFFE608u; // 801535D0
  c->r[25]=c->r[5]|c->r[5]; // 801535D4
  c->r[31]=c->r[1]|c->r[1]; // 801535D8
  c->r[27]=c->r[7]|c->r[7]; // 801535DC
  c->r[4]=c->r[23]|c->r[23]; // 801535E0
  c->r[5]=c->r[29]|c->r[29]; // 801535E4
  c->r[3]=0u+0x00000044u; // 801535E8
  c->r[6]=0u+0x00000004u; // 801535EC
  W32(c->r[7]+0x00000000u,c->r[30]); // 801535F0
  c->lr=0x801535F8u; f_8017BEDC(c); // 801535F4
  cmps(c,0,(int32_t)c->r[3],0); // 801535F8
  c->r[28]=c->r[3]|c->r[3]; // 801535FC
  if (crb(c,2)) { goto L_8015369C; } // 80153600
  W32(c->r[3]+0x00000004u,c->r[23]); // 80153604
  c->r[4]=0u+0x80330000u; // 80153608
  c->r[4]=c->r[4]+0x00000BC0u; // 8015360C
  W32(c->r[3]+0x00000008u,c->r[24]); // 80153610
  W32(c->r[3]+0x0000000Cu,c->r[25]); // 80153614
  W32(c->r[3]+0x00000010u,c->r[30]); // 80153618
  W32(c->r[3]+0x00000014u,c->r[30]); // 8015361C
  W32(c->r[3]+0x00000018u,c->r[30]); // 80153620
  W32(c->r[3]+0x00000000u,c->r[4]); // 80153624
  W32(c->r[3]+0x0000001Cu,c->r[30]); // 80153628
  W32(c->r[3]+0x00000020u,c->r[30]); // 8015362C
  W32(c->r[3]+0x00000024u,c->r[30]); // 80153630
  W32(c->r[3]+0x00000028u,c->r[26]); // 80153634
  W32(c->r[3]+0x0000002Cu,c->r[30]); // 80153638
  W32(c->r[3]+0x00000030u,c->r[30]); // 8015363C
  W32(c->r[3]+0x00000034u,c->r[30]); // 80153640
  W32(c->r[3]+0x00000038u,c->r[30]); // 80153644
  c->r[3]=c->r[24]|c->r[24]; // 80153648
  c->r[12]=R32(c->r[24]+0x00000000u); // 8015364C
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80153650
  c->r[12]=R32(c->r[12]+0x00000018u); // 80153654
  c->ctr=c->r[12]; // 80153658
  if (true) { c->lr=0x80153660u; dispatch(c,c->ctr); } // 8015365C
  W32(c->r[28]+0x0000003Cu,c->r[3]); // 80153660
  c->r[3]=0u+0x802D0000u; // 80153664
  c->r[3]=c->r[3]+0xFFFFE588u; // 80153668
  W32(c->r[28]+0x00000040u,c->r[30]); // 8015366C
  W32(c->r[13]+0xFFFFA1A0u,c->r[3]); // 80153670
  goto L_8015369C; // 80153674
  c->r[3]=c->r[28]|c->r[28]; // 80153678
  c->r[4]=c->r[23]|c->r[23]; // 8015367C
  c->r[5]=c->r[29]|c->r[29]; // 80153680
  c->r[6]=0u+0x00000004u; // 80153684
  c->lr=0x8015368Cu; f_8017BFF8(c); // 80153688
  c->r[3]=0u+0x00000000u; // 8015368C
  c->r[4]=0u+0x00000000u; // 80153690
  c->r[5]=0u+0x00000000u; // 80153694
  c->lr=0x8015369Cu; f_800AF804(c); // 80153698
L_8015369C:;
  cmps(c,0,(int32_t)c->r[28],0); // 8015369C
  if (!crb(c,2)) { goto L_801536C8; } // 801536A0
  c->r[4]=0u+0x802D0000u; // 801536A4
  c->r[5]=0u+0xFFFFFFFDu; // 801536A8
  c->r[4]=c->r[4]+0xFFFFE608u; // 801536AC
  W32(c->r[27]+0x00000000u,c->r[5]); // 801536B0
  c->r[3]=0u+0x00000000u; // 801536B4
  c->r[4]=c->r[4]+0x00000006u; // 801536B8
  c->lr=0x801536C0u; f_8017968C(c); // 801536BC
  c->r[3]=0u+0x00000000u; // 801536C0
  goto L_801537B4; // 801536C4
L_801536C8:;
  c->r[3]=c->r[28]|c->r[28]; // 801536C8
  c->r[4]=c->r[27]|c->r[27]; // 801536CC
  c->lr=0x801536D4u; f_801537D0(c); // 801536D0
  cmps(c,0,(int32_t)c->r[3],0); // 801536D4
  if (!crb(c,2)) { goto L_80153708; } // 801536D8
  cmps(c,0,(int32_t)c->r[28],0); // 801536DC
  if (crb(c,2)) { goto L_80153700; } // 801536E0
  c->r[12]=R32(c->r[28]+0x00000000u); // 801536E4
  c->r[0]=0u+0x00000001u; // 801536E8
  c->r[3]=c->r[28]|c->r[28]; // 801536EC
  c->r[12]=R32(c->r[12]+0x00000040u); // 801536F0
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 801536F4
  c->ctr=c->r[12]; // 801536F8
  if (true) { c->lr=0x80153700u; dispatch(c,c->ctr); } // 801536FC
L_80153700:;
  c->r[3]=0u+0x00000000u; // 80153700
  goto L_801537B4; // 80153704
L_80153708:;
  cmps(c,0,(int32_t)c->r[28],0); // 80153708
  c->r[29]=c->r[28]|c->r[28]; // 8015370C
  if (crb(c,2)) { goto L_80153718; } // 80153710
  c->r[29]=c->r[28]+0x00000010u; // 80153714
L_80153718:;
  c->r[4]=0u+0x803F0000u; // 80153718
  c->r[30]=R32(c->r[4]+0xFFFFFCD0u); // 8015371C
  cmps(c,0,(int32_t)c->r[30],0); // 80153720
  if (crb(c,2)) { goto L_8015376C; } // 80153724
  c->r[0]=R32(c->r[29]+0x00000000u); // 80153728
  cmps(c,0,(int32_t)c->r[0],0); // 8015372C
  if (!crb(c,2)) { goto L_80153740; } // 80153730
  c->r[0]=R32(c->r[29]+0x00000004u); // 80153734
  cmps(c,0,(int32_t)c->r[0],0); // 80153738
  if (crb(c,2)) { goto L_80153750; } // 8015373C
L_80153740:;
  c->r[4]=0u+0x80330000u; // 80153740
  c->r[3]=0u+0x00000000u; // 80153744
  c->r[4]=c->r[4]+0x000008F4u; // 80153748
  c->lr=0x80153750u; f_80179434(c); // 8015374C
L_80153750:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80153750
  c->r[3]=0u+0x803F0000u; // 80153754
  W32(c->r[29]+0x00000000u,c->r[0]); // 80153758
  W32(c->r[29]+0x00000004u,c->r[30]); // 8015375C
  W32(c->r[30]+0x00000000u,c->r[29]); // 80153760
  W32(c->r[3]+0xFFFFFCD0u,c->r[29]); // 80153764
  goto L_8015379C; // 80153768
L_8015376C:;
  c->r[3]=c->r[4]+0xFFFFFCD0u; // 8015376C
  W32(c->r[4]+0xFFFFFCD0u,c->r[29]); // 80153770
  c->r[0]=R32(c->r[3]+0x00000004u); // 80153774
  cmps(c,0,(int32_t)c->r[0],0); // 80153778
  if (crb(c,2)) { goto L_80153790; } // 8015377C
  c->r[4]=0u+0x80330000u; // 80153780
  c->r[3]=0u+0x00000000u; // 80153784
  c->r[4]=c->r[4]+0x000008CCu; // 80153788
  c->lr=0x80153790u; f_80179434(c); // 8015378C
L_80153790:;
  c->r[3]=0u+0x803F0000u; // 80153790
  c->r[3]=c->r[3]+0xFFFFFCD0u; // 80153794
  W32(c->r[3]+0x00000004u,c->r[29]); // 80153798
L_8015379C:;
  c->r[5]=0u+0x803F0000u; // 8015379C
  c->r[3]=c->r[28]|c->r[28]; // 801537A0
  c->r[5]=c->r[5]+0xFFFFFCD0u; // 801537A4
  c->r[4]=R32(c->r[5]+0x00000008u); // 801537A8
  c->r[0]=c->r[4]+0x00000001u; // 801537AC
  W32(c->r[5]+0x00000008u,c->r[0]); // 801537B0
L_801537B4:;
  c->r[10]=c->r[31]|c->r[31]; // 801537B4
  {uint32_t ea=c->r[10]+0x0000002Cu; for(int i=23;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801537B8
  c->r[10]=R32(c->r[1]+0x00000000u); // 801537BC
  c->r[0]=R32(c->r[10]+0x00000004u); // 801537C0
  c->r[1]=c->r[10]|c->r[10]; // 801537C4
  c->lr=c->r[0]; // 801537C8
  return; // 801537CC
}

// Initialize__11CriAuObjLocFR8CriError
void f_801537D0(Ctx* __restrict c) {
  trace_call(0x801537D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801537D0
  c->r[0]=c->lr; // 801537D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801537D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801537DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801537E0
  c->r[30]=0u+0x00000000u; // 801537E4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801537E8
  c->r[29]=c->r[4]|c->r[4]; // 801537EC
  W32(c->r[1]+0x00000010u,c->r[28]); // 801537F0
  c->r[28]=c->r[3]|c->r[3]; // 801537F4
  W32(c->r[4]+0x00000000u,c->r[30]); // 801537F8
  c->lr=0x80153800u; f_80173CA4(c); // 801537FC
  cmps(c,0,(int32_t)c->r[3],0); // 80153800
  W32(c->r[28]+0x00000034u,c->r[3]); // 80153804
  if (!crb(c,2)) { goto L_8015383C; } // 80153808
  c->r[3]=0u+0x802D0000u; // 8015380C
  c->r[0]=0u+0xFFFFFFFDu; // 80153810
  c->r[3]=c->r[3]+0xFFFFE608u; // 80153814
  W32(c->r[29]+0x00000000u,c->r[0]); // 80153818
  c->r[4]=c->r[3]+0x00000012u; // 8015381C
  c->r[5]=0u+0xFFFFFFFDu; // 80153820
  c->r[3]=0u+0x00000000u; // 80153824
  c->lr=0x8015382Cu; f_8017968C(c); // 80153828
  c->r[3]=c->r[28]|c->r[28]; // 8015382C
  c->lr=0x80153834u; f_80153948(c); // 80153830
  c->r[3]=0u+0x00000000u; // 80153834
  goto L_80153928; // 80153838
L_8015383C:;
  c->r[3]=c->r[28]|c->r[28]; // 8015383C
  c->r[4]=c->r[29]|c->r[29]; // 80153840
  c->lr=0x80153848u; f_80154DB0(c); // 80153844
  cmps(c,0,(int32_t)c->r[3],0); // 80153848
  W32(c->r[28]+0x00000038u,c->r[3]); // 8015384C
  if (!crb(c,2)) { goto L_80153864; } // 80153850
  c->r[3]=c->r[28]|c->r[28]; // 80153854
  c->lr=0x8015385Cu; f_80153948(c); // 80153858
  c->r[3]=0u+0x00000000u; // 8015385C
  goto L_80153928; // 80153860
L_80153864:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 80153864
  c->r[31]=0u+0x802D0000u; // 80153868
  c->r[31]=c->r[31]+0xFFFFE608u; // 8015386C
  c->r[3]=R32(c->r[28]+0x00000004u); // 80153870
  c->r[4]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80153874
  c->r[6]=0u+0x00000004u; // 80153878
  c->r[5]=c->r[31]+0x0000001Cu; // 8015387C
  c->lr=0x80153884u; f_8017C100(c); // 80153880
  cmps(c,0,(int32_t)c->r[3],0); // 80153884
  W32(c->r[28]+0x00000030u,c->r[3]); // 80153888
  if (!crb(c,2)) { goto L_801538B8; } // 8015388C
  c->r[0]=0u+0xFFFFFFFDu; // 80153890
  W32(c->r[29]+0x00000000u,c->r[0]); // 80153894
  c->r[4]=c->r[31]+0x0000002Au; // 80153898
  c->r[3]=0u+0x00000000u; // 8015389C
  c->r[5]=0u+0xFFFFFFFDu; // 801538A0
  c->lr=0x801538A8u; f_8017968C(c); // 801538A4
  c->r[3]=c->r[28]|c->r[28]; // 801538A8
  c->lr=0x801538B0u; f_80153948(c); // 801538AC
  c->r[3]=0u+0x00000000u; // 801538B0
  goto L_80153928; // 801538B4
L_801538B8:;
  c->r[5]=0u+0x00000000u; // 801538B8
  c->r[4]=0u+0x00000000u; // 801538BC
  goto L_801538D4; // 801538C0
L_801538C4:;
  c->r[3]=R32(c->r[28]+0x00000030u); // 801538C4
  c->r[5]=c->r[5]+0x00000001u; // 801538C8
  W32(c->r[3]+c->r[4],c->r[30]); // 801538CC
  c->r[4]=c->r[4]+0x00000004u; // 801538D0
L_801538D4:;
  c->r[0]=R32(c->r[28]+0x00000028u); // 801538D4
  cmpu(c,0,c->r[5],c->r[0]); // 801538D8
  if (crb(c,0)) { IRQCHK(c); goto L_801538C4; } // 801538DC
  c->r[3]=R32(c->r[28]+0x00000004u); // 801538E0
  c->lr=0x801538E8u; f_8015E7B4(c); // 801538E4
  cmps(c,0,(int32_t)c->r[3],0); // 801538E8
  W32(c->r[28]+0x00000040u,c->r[3]); // 801538EC
  if (!crb(c,2)) { goto L_80153924; } // 801538F0
  c->r[3]=0u+0x802D0000u; // 801538F4
  c->r[0]=0u+0xFFFFFFFDu; // 801538F8
  c->r[3]=c->r[3]+0xFFFFE608u; // 801538FC
  W32(c->r[29]+0x00000000u,c->r[0]); // 80153900
  c->r[4]=c->r[3]+0x00000034u; // 80153904
  c->r[5]=0u+0xFFFFFFFDu; // 80153908
  c->r[3]=0u+0x00000000u; // 8015390C
  c->lr=0x80153914u; f_8017968C(c); // 80153910
  c->r[3]=c->r[28]|c->r[28]; // 80153914
  c->lr=0x8015391Cu; f_80153948(c); // 80153918
  c->r[3]=0u+0x00000000u; // 8015391C
  goto L_80153928; // 80153920
L_80153924:;
  c->r[3]=0u+0x00000001u; // 80153924
L_80153928:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80153928
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8015392C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80153930
  c->r[29]=R32(c->r[1]+0x00000014u); // 80153934
  c->r[28]=R32(c->r[1]+0x00000010u); // 80153938
  c->lr=c->r[0]; // 8015393C
  c->r[1]=c->r[1]+0x00000020u; // 80153940
  return; // 80153944
}

// Finalize__11CriAuObjLocFv
void f_80153948(Ctx* __restrict c) {
  trace_call(0x80153948u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153948
  c->r[0]=c->lr; // 8015394C
  c->r[4]=0u+0x00000001u; // 80153950
  W32(c->r[1]+0x00000024u,c->r[0]); // 80153954
  c->r[0]=0u+0x00000000u; // 80153958
  c->r[5]=c->r[1]+0x0000000Cu; // 8015395C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80153960
  W32(c->r[1]+0x00000018u,c->r[30]); // 80153964
  c->r[30]=c->r[3]|c->r[3]; // 80153968
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8015396C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80153970
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80153974
  c->ctr=c->r[12]; // 80153978
  if (true) { c->lr=0x80153980u; dispatch(c,c->ctr); } // 8015397C
L_80153980:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80153980
  c->r[3]=c->r[30]|c->r[30]; // 80153984
  c->r[4]=c->r[1]+0x0000000Cu; // 80153988
  c->r[12]=R32(c->r[12]+0x00000030u); // 8015398C
  c->ctr=c->r[12]; // 80153990
  if (true) { c->lr=0x80153998u; dispatch(c,c->ctr); } // 80153994
  cmps(c,0,(int32_t)c->r[3],1); // 80153998
  if (!crb(c,2)) { goto L_801539BC; } // 8015399C
  c->r[12]=R32(c->r[30]+0x00000000u); // 801539A0
  c->r[3]=c->r[30]|c->r[30]; // 801539A4
  c->r[4]=c->r[1]+0x0000000Cu; // 801539A8
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801539AC
  c->ctr=c->r[12]; // 801539B0
  if (true) { c->lr=0x801539B8u; dispatch(c,c->ctr); } // 801539B4
  IRQCHK(c); goto L_80153980; // 801539B8
L_801539BC:;
  c->r[4]=R32(c->r[30]+0x00000030u); // 801539BC
  cmps(c,0,(int32_t)c->r[4],0); // 801539C0
  if (crb(c,2)) { goto L_801539D8; } // 801539C4
  c->r[3]=R32(c->r[30]+0x00000004u); // 801539C8
  c->lr=0x801539D0u; f_8017C228(c); // 801539CC
  c->r[0]=0u+0x00000000u; // 801539D0
  W32(c->r[30]+0x00000030u,c->r[0]); // 801539D4
L_801539D8:;
  c->r[3]=R32(c->r[30]+0x00000038u); // 801539D8
  cmps(c,0,(int32_t)c->r[3],0); // 801539DC
  if (crb(c,2)) { goto L_80153A00; } // 801539E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801539E4
  c->r[4]=c->r[1]+0x0000000Cu; // 801539E8
  c->r[12]=R32(c->r[12]+0x00000008u); // 801539EC
  c->ctr=c->r[12]; // 801539F0
  if (true) { c->lr=0x801539F8u; dispatch(c,c->ctr); } // 801539F4
  c->r[0]=0u+0x00000000u; // 801539F8
  W32(c->r[30]+0x00000038u,c->r[0]); // 801539FC
L_80153A00:;
  c->r[3]=R32(c->r[30]+0x0000001Cu); // 80153A00
  cmps(c,0,(int32_t)c->r[3],0); // 80153A04
  if (crb(c,2)) { goto L_80153A3C; } // 80153A08
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 80153A0C
  goto L_80153A3C; // 80153A10
L_80153A14:;
  c->r[31]=R32(c->r[3]+0x00000008u); // 80153A14
  cmps(c,0,(int32_t)c->r[31],0); // 80153A18
  if (crb(c,2)) { goto L_80153A24; } // 80153A1C
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 80153A20
L_80153A24:;
  c->r[12]=R32(c->r[3]+0x00000000u); // 80153A24
  c->r[4]=c->r[1]+0x00000008u; // 80153A28
  c->r[12]=R32(c->r[12]+0x00000008u); // 80153A2C
  c->ctr=c->r[12]; // 80153A30
  if (true) { c->lr=0x80153A38u; dispatch(c,c->ctr); } // 80153A34
  c->r[3]=c->r[31]|c->r[31]; // 80153A38
L_80153A3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80153A3C
  if (!crb(c,2)) { IRQCHK(c); goto L_80153A14; } // 80153A40
  c->r[3]=R32(c->r[30]+0x00000034u); // 80153A44
  cmps(c,0,(int32_t)c->r[3],0); // 80153A48
  if (crb(c,2)) { goto L_80153A5C; } // 80153A4C
  c->lr=0x80153A54u; f_80173D88(c); // 80153A50
  c->r[0]=0u+0x00000000u; // 80153A54
  W32(c->r[30]+0x00000034u,c->r[0]); // 80153A58
L_80153A5C:;
  c->r[3]=R32(c->r[30]+0x00000040u); // 80153A5C
  cmps(c,0,(int32_t)c->r[3],0); // 80153A60
  if (crb(c,2)) { goto L_80153A80; } // 80153A64
  c->r[12]=R32(c->r[3]+0x00000000u); // 80153A68
  c->r[12]=R32(c->r[12]+0x00000008u); // 80153A6C
  c->ctr=c->r[12]; // 80153A70
  if (true) { c->lr=0x80153A78u; dispatch(c,c->ctr); } // 80153A74
  c->r[0]=0u+0x00000000u; // 80153A78
  W32(c->r[30]+0x00000040u,c->r[0]); // 80153A7C
L_80153A80:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80153A80
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80153A84
  c->r[30]=R32(c->r[1]+0x00000018u); // 80153A88
  c->lr=c->r[0]; // 80153A8C
  c->r[1]=c->r[1]+0x00000020u; // 80153A90
  return; // 80153A94
}

// SearchAndReleaseCue__11CriAuObjLocFP8CriAuCue
void f_80153A98(Ctx* __restrict c) {
  trace_call(0x80153A98u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153A98
  c->r[0]=c->lr; // 80153A9C
  c->r[4]=0u+0x803F0000u; // 80153AA0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80153AA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80153AA8
  W32(c->r[1]+0x00000018u,c->r[30]); // 80153AAC
  W32(c->r[1]+0x00000014u,c->r[29]); // 80153AB0
  c->r[29]=c->r[3]|c->r[3]; // 80153AB4
  c->r[31]=R32(c->r[4]+0xFFFFFCD0u); // 80153AB8
  cmps(c,0,(int32_t)c->r[31],0); // 80153ABC
  if (crb(c,2)) { goto L_80153B34; } // 80153AC0
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153AC4
  goto L_80153B34; // 80153AC8
L_80153ACC:;
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 80153ACC
  cmps(c,0,(int32_t)c->r[30],0); // 80153AD0
  if (crb(c,2)) { goto L_80153ADC; } // 80153AD4
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80153AD8
L_80153ADC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80153ADC
  if (crb(c,2)) { goto L_80153B24; } // 80153AE0
  c->r[3]=c->r[30]|c->r[30]; // 80153AE4
  c->r[4]=c->r[29]|c->r[29]; // 80153AE8
  c->lr=0x80153AF0u; f_80158520(c); // 80153AEC
  cmps(c,0,(int32_t)c->r[3],0); // 80153AF0
  if (crb(c,2)) { goto L_80153B10; } // 80153AF4
  c->r[12]=R32(c->r[30]+0x00000000u); // 80153AF8
  c->r[3]=c->r[30]|c->r[30]; // 80153AFC
  c->r[4]=c->r[1]+0x00000008u; // 80153B00
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80153B04
  c->ctr=c->r[12]; // 80153B08
  if (true) { c->lr=0x80153B10u; dispatch(c,c->ctr); } // 80153B0C
L_80153B10:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 80153B10
  cmps(c,0,(int32_t)c->r[30],0); // 80153B14
  if (crb(c,2)) { IRQCHK(c); goto L_80153ADC; } // 80153B18
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80153B1C
  IRQCHK(c); goto L_80153ADC; // 80153B20
L_80153B24:;
  c->r[31]=R32(c->r[31]+0x00000014u); // 80153B24
  cmps(c,0,(int32_t)c->r[31],0); // 80153B28
  if (crb(c,2)) { goto L_80153B34; } // 80153B2C
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153B30
L_80153B34:;
  cmps(c,0,(int32_t)c->r[31],0); // 80153B34
  if (!crb(c,2)) { IRQCHK(c); goto L_80153ACC; } // 80153B38
  c->r[0]=R32(c->r[1]+0x00000024u); // 80153B3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80153B40
  c->r[30]=R32(c->r[1]+0x00000018u); // 80153B44
  c->r[29]=R32(c->r[1]+0x00000014u); // 80153B48
  c->lr=c->r[0]; // 80153B4C
  c->r[1]=c->r[1]+0x00000020u; // 80153B50
  return; // 80153B54
}

// SearchAndReleaseCueSheet__11CriAuObjLocFP13CriAuCueSheet
void f_80153B58(Ctx* __restrict c) {
  trace_call(0x80153B58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153B58
  c->r[0]=c->lr; // 80153B5C
  c->r[4]=0u+0x803F0000u; // 80153B60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80153B64
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80153B68
  W32(c->r[1]+0x00000018u,c->r[30]); // 80153B6C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80153B70
  c->r[29]=c->r[3]|c->r[3]; // 80153B74
  c->r[31]=R32(c->r[4]+0xFFFFFCD0u); // 80153B78
  cmps(c,0,(int32_t)c->r[31],0); // 80153B7C
  if (crb(c,2)) { goto L_80153BF4; } // 80153B80
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153B84
  goto L_80153BF4; // 80153B88
L_80153B8C:;
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 80153B8C
  cmps(c,0,(int32_t)c->r[30],0); // 80153B90
  if (crb(c,2)) { goto L_80153B9C; } // 80153B94
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80153B98
L_80153B9C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80153B9C
  if (crb(c,2)) { goto L_80153BE4; } // 80153BA0
  c->r[3]=c->r[30]|c->r[30]; // 80153BA4
  c->r[4]=c->r[29]|c->r[29]; // 80153BA8
  c->lr=0x80153BB0u; f_80158534(c); // 80153BAC
  cmps(c,0,(int32_t)c->r[3],0); // 80153BB0
  if (crb(c,2)) { goto L_80153BD0; } // 80153BB4
  c->r[12]=R32(c->r[30]+0x00000000u); // 80153BB8
  c->r[3]=c->r[30]|c->r[30]; // 80153BBC
  c->r[4]=c->r[1]+0x00000008u; // 80153BC0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80153BC4
  c->ctr=c->r[12]; // 80153BC8
  if (true) { c->lr=0x80153BD0u; dispatch(c,c->ctr); } // 80153BCC
L_80153BD0:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 80153BD0
  cmps(c,0,(int32_t)c->r[30],0); // 80153BD4
  if (crb(c,2)) { IRQCHK(c); goto L_80153B9C; } // 80153BD8
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80153BDC
  IRQCHK(c); goto L_80153B9C; // 80153BE0
L_80153BE4:;
  c->r[31]=R32(c->r[31]+0x00000014u); // 80153BE4
  cmps(c,0,(int32_t)c->r[31],0); // 80153BE8
  if (crb(c,2)) { goto L_80153BF4; } // 80153BEC
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153BF0
L_80153BF4:;
  cmps(c,0,(int32_t)c->r[31],0); // 80153BF4
  if (!crb(c,2)) { IRQCHK(c); goto L_80153B8C; } // 80153BF8
  c->r[0]=R32(c->r[1]+0x00000024u); // 80153BFC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80153C00
  c->r[30]=R32(c->r[1]+0x00000018u); // 80153C04
  c->r[29]=R32(c->r[1]+0x00000014u); // 80153C08
  c->lr=c->r[0]; // 80153C0C
  c->r[1]=c->r[1]+0x00000020u; // 80153C10
  return; // 80153C14
}

// SearchAndReleaseAisac__11CriAuObjLocFP16CriAuCueSheetLoc
void f_80153C18(Ctx* __restrict c) {
  trace_call(0x80153C18u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153C18
  c->r[0]=c->lr; // 80153C1C
  c->r[4]=0u+0x803F0000u; // 80153C20
  W32(c->r[1]+0x00000024u,c->r[0]); // 80153C24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80153C28
  W32(c->r[1]+0x00000018u,c->r[30]); // 80153C2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80153C30
  W32(c->r[1]+0x00000010u,c->r[28]); // 80153C34
  c->r[28]=c->r[3]|c->r[3]; // 80153C38
  c->r[31]=R32(c->r[4]+0xFFFFFCD0u); // 80153C3C
  cmps(c,0,(int32_t)c->r[31],0); // 80153C40
  if (crb(c,2)) { goto L_80153CE8; } // 80153C44
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153C48
  goto L_80153CE8; // 80153C4C
L_80153C50:;
  c->r[30]=R32(c->r[31]+0x0000001Cu); // 80153C50
  cmps(c,0,(int32_t)c->r[30],0); // 80153C54
  if (crb(c,2)) { goto L_80153C60; } // 80153C58
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80153C5C
L_80153C60:;
  cmps(c,0,(int32_t)c->r[30],0); // 80153C60
  if (crb(c,2)) { goto L_80153CD8; } // 80153C64
  c->r[0]=R32(c->r[30]+0x000007CCu); // 80153C68
  cmps(c,0,(int32_t)c->r[0],0); // 80153C6C
  if (crb(c,2)) { goto L_80153CC4; } // 80153C70
  c->r[29]=0u+0x00000000u; // 80153C74
  goto L_80153CB4; // 80153C78
L_80153C7C:;
  c->r[4]=c->r[29]|c->r[29]; // 80153C7C
  c->lr=0x80153C84u; f_80147AB0(c); // 80153C80
  cmps(c,0,(int32_t)c->r[3],0); // 80153C84
  if (crb(c,2)) { goto L_80153CB0; } // 80153C88
  cmpu(c,0,c->r[28],c->r[3]); // 80153C8C
  if (!crb(c,2)) { goto L_80153CB0; } // 80153C90
  c->r[12]=R32(c->r[30]+0x00000000u); // 80153C94
  c->r[3]=c->r[30]|c->r[30]; // 80153C98
  c->r[4]=c->r[29]|c->r[29]; // 80153C9C
  c->r[5]=c->r[1]+0x00000008u; // 80153CA0
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80153CA4
  c->ctr=c->r[12]; // 80153CA8
  if (true) { c->lr=0x80153CB0u; dispatch(c,c->ctr); } // 80153CAC
L_80153CB0:;
  c->r[29]=c->r[29]+0x00000001u; // 80153CB0
L_80153CB4:;
  c->r[3]=R32(c->r[30]+0x000007CCu); // 80153CB4
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80153CB8
  cmpu(c,0,c->r[29],c->r[0]); // 80153CBC
  if (crb(c,0)) { IRQCHK(c); goto L_80153C7C; } // 80153CC0
L_80153CC4:;
  c->r[30]=R32(c->r[30]+0x00000008u); // 80153CC4
  cmps(c,0,(int32_t)c->r[30],0); // 80153CC8
  if (crb(c,2)) { IRQCHK(c); goto L_80153C60; } // 80153CCC
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80153CD0
  IRQCHK(c); goto L_80153C60; // 80153CD4
L_80153CD8:;
  c->r[31]=R32(c->r[31]+0x00000014u); // 80153CD8
  cmps(c,0,(int32_t)c->r[31],0); // 80153CDC
  if (crb(c,2)) { goto L_80153CE8; } // 80153CE0
  c->r[31]=c->r[31]+0xFFFFFFF0u; // 80153CE4
L_80153CE8:;
  cmps(c,0,(int32_t)c->r[31],0); // 80153CE8
  if (!crb(c,2)) { IRQCHK(c); goto L_80153C50; } // 80153CEC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80153CF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80153CF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 80153CF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 80153CFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 80153D00
  c->lr=c->r[0]; // 80153D04
  c->r[1]=c->r[1]+0x00000020u; // 80153D08
  return; // 80153D0C
}

// Destroy__11CriAuObjLocFR8CriError
void f_80153D10(Ctx* __restrict c) {
  trace_call(0x80153D10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153D10
  c->r[0]=c->lr; // 80153D14
  cmps(c,0,(int32_t)c->r[3],0); // 80153D18
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153D1C
  c->r[0]=0u+0x00000000u; // 80153D20
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80153D24
  c->r[31]=c->r[3]|c->r[3]; // 80153D28
  c->r[5]=c->r[31]|c->r[31]; // 80153D2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80153D30
  if (crb(c,2)) { goto L_80153D3C; } // 80153D34
  c->r[5]=c->r[3]+0x00000010u; // 80153D38
L_80153D3C:;
  cmps(c,0,(int32_t)c->r[5],0); // 80153D3C
  if (!crb(c,2)) { goto L_80153D58; } // 80153D40
  c->r[4]=0u+0x80330000u; // 80153D44
  c->r[3]=0u+0x00000000u; // 80153D48
  c->r[4]=c->r[4]+0x00000C2Cu; // 80153D4C
  c->lr=0x80153D54u; f_80179434(c); // 80153D50
  goto L_80153DD4; // 80153D54
L_80153D58:;
  c->r[3]=0u+0x803F0000u; // 80153D58
  c->r[0]=R32(c->r[3]+0xFFFFFCD0u); // 80153D5C
  cmpu(c,0,c->r[0],c->r[5]); // 80153D60
  if (!crb(c,2)) { goto L_80153D70; } // 80153D64
  c->r[0]=R32(c->r[5]+0x00000004u); // 80153D68
  W32(c->r[3]+0xFFFFFCD0u,c->r[0]); // 80153D6C
L_80153D70:;
  c->r[3]=0u+0x803F0000u; // 80153D70
  c->r[3]=c->r[3]+0xFFFFFCD0u; // 80153D74
  c->r[0]=R32(c->r[3]+0x00000004u); // 80153D78
  cmpu(c,0,c->r[0],c->r[5]); // 80153D7C
  if (!crb(c,2)) { goto L_80153D8C; } // 80153D80
  c->r[0]=R32(c->r[5]+0x00000000u); // 80153D84
  W32(c->r[3]+0x00000004u,c->r[0]); // 80153D88
L_80153D8C:;
  c->r[3]=R32(c->r[5]+0x00000000u); // 80153D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80153D90
  if (crb(c,2)) { goto L_80153DA0; } // 80153D94
  c->r[0]=R32(c->r[5]+0x00000004u); // 80153D98
  W32(c->r[3]+0x00000004u,c->r[0]); // 80153D9C
L_80153DA0:;
  c->r[3]=R32(c->r[5]+0x00000004u); // 80153DA0
  cmps(c,0,(int32_t)c->r[3],0); // 80153DA4
  if (crb(c,2)) { goto L_80153DB4; } // 80153DA8
  c->r[0]=R32(c->r[5]+0x00000000u); // 80153DAC
  W32(c->r[3]+0x00000000u,c->r[0]); // 80153DB0
L_80153DB4:;
  c->r[0]=0u+0x00000000u; // 80153DB4
  W32(c->r[5]+0x00000004u,c->r[0]); // 80153DB8
  c->r[4]=0u+0x803F0000u; // 80153DBC
  W32(c->r[5]+0x00000000u,c->r[0]); // 80153DC0
  c->r[4]=c->r[4]+0xFFFFFCD0u; // 80153DC4
  c->r[3]=R32(c->r[4]+0x00000008u); // 80153DC8
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80153DCC
  W32(c->r[4]+0x00000008u,c->r[0]); // 80153DD0
L_80153DD4:;
  c->r[3]=c->r[31]|c->r[31]; // 80153DD4
  c->lr=0x80153DDCu; f_80153948(c); // 80153DD8
  cmps(c,0,(int32_t)c->r[31],0); // 80153DDC
  if (crb(c,2)) { goto L_80153DFC; } // 80153DE0
  c->r[12]=R32(c->r[31]+0x00000000u); // 80153DE4
  c->r[3]=c->r[31]|c->r[31]; // 80153DE8
  c->r[4]=0u+0x00000001u; // 80153DEC
  c->r[12]=R32(c->r[12]+0x00000040u); // 80153DF0
  c->ctr=c->r[12]; // 80153DF4
  if (true) { c->lr=0x80153DFCu; dispatch(c,c->ctr); } // 80153DF8
L_80153DFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80153DFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80153E00
  c->lr=c->r[0]; // 80153E04
  c->r[1]=c->r[1]+0x00000010u; // 80153E08
  return; // 80153E0C
}

// AttachCueSheet__11CriAuObjLocFP13CriAuCueSheetR8CriError
void f_80153E10(Ctx* __restrict c) {
  trace_call(0x80153E10u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153E10
  c->r[0]=c->lr; // 80153E14
  W32(c->r[1]+0x00000014u,c->r[0]); // 80153E18
  c->r[0]=0u+0x00000000u; // 80153E1C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80153E20
  c->r[31]=c->r[5]|c->r[5]; // 80153E24
  W32(c->r[5]+0x00000000u,c->r[0]); // 80153E28
  c->r[5]=R32(c->r[3]+0x00000028u); // 80153E2C
  c->r[7]=R32(c->r[3]+0x0000002Cu); // 80153E30
  cmpu(c,0,c->r[7],c->r[5]); // 80153E34
  if (!crb(c,2)) { goto L_80153E5C; } // 80153E38
  c->r[4]=0u+0x802D0000u; // 80153E3C
  c->r[3]=0u+0x00000000u; // 80153E40
  c->r[4]=c->r[4]+0xFFFFE608u; // 80153E44
  c->r[4]=c->r[4]+0x0000003Fu; // 80153E48
  c->lr=0x80153E50u; f_801794C0(c); // 80153E4C
  c->r[0]=0u+0xFFFFFFFFu; // 80153E50
  W32(c->r[31]+0x00000000u,c->r[0]); // 80153E54
  goto L_80153F98; // 80153E58
L_80153E5C:;
  c->r[6]=0u+0x00000000u; // 80153E5C
  c->ctr=c->r[7]; // 80153E60
  cmpu(c,0,c->r[7],0x00000000u); // 80153E64
  if (!crb(c,1)) { goto L_80153EA4; } // 80153E68
L_80153E6C:;
  c->r[5]=R32(c->r[3]+0x00000030u); // 80153E6C
  c->r[0]=R32(c->r[5]+c->r[6]); // 80153E70
  cmpu(c,0,c->r[0],c->r[4]); // 80153E74
  if (!crb(c,2)) { goto L_80153E9C; } // 80153E78
  c->r[4]=0u+0x802D0000u; // 80153E7C
  c->r[3]=0u+0x00000000u; // 80153E80
  c->r[4]=c->r[4]+0xFFFFE608u; // 80153E84
  c->r[4]=c->r[4]+0x00000097u; // 80153E88
  c->lr=0x80153E90u; f_80179434(c); // 80153E8C
  c->r[0]=0u+0xFFFFFFFFu; // 80153E90
  W32(c->r[31]+0x00000000u,c->r[0]); // 80153E94
  goto L_80153F98; // 80153E98
L_80153E9C:;
  c->r[6]=c->r[6]+0x00000004u; // 80153E9C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153E6C; } // 80153EA0
L_80153EA4:;
  cmps(c,0,(int32_t)c->r[7],0); // 80153EA4
  c->r[5]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80153EA8
  if (crb(c,2)) { goto L_80153F84; } // 80153EAC
  c->r[0]=rotl(c->r[7],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80153EB0
  c->ctr=c->r[0]; // 80153EB4
  if (crb(c,2)) { goto L_80153F68; } // 80153EB8
L_80153EBC:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153EBC
  c->r[6]=c->r[0]+c->r[5]; // 80153EC0
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153EC4
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153EC8
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153ECC
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153ED0
  c->r[6]=c->r[0]+c->r[5]; // 80153ED4
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153ED8
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153EDC
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153EE0
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153EE4
  c->r[6]=c->r[0]+c->r[5]; // 80153EE8
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153EEC
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153EF0
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153EF4
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153EF8
  c->r[6]=c->r[0]+c->r[5]; // 80153EFC
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153F00
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153F04
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153F08
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153F0C
  c->r[6]=c->r[0]+c->r[5]; // 80153F10
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153F14
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153F18
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153F1C
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153F20
  c->r[6]=c->r[0]+c->r[5]; // 80153F24
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153F28
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153F2C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153F30
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153F34
  c->r[6]=c->r[0]+c->r[5]; // 80153F38
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153F3C
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153F40
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153F44
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153F48
  c->r[6]=c->r[0]+c->r[5]; // 80153F4C
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153F50
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153F54
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153F58
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153EBC; } // 80153F5C
  c->r[7]=c->r[7]&0x00000007u; cr0(c,c->r[7]); // 80153F60
  if (crb(c,2)) { goto L_80153F84; } // 80153F64
L_80153F68:;
  c->ctr=c->r[7]; // 80153F68
L_80153F6C:;
  c->r[0]=R32(c->r[3]+0x00000030u); // 80153F6C
  c->r[6]=c->r[0]+c->r[5]; // 80153F70
  c->r[5]=c->r[5]+0xFFFFFFFCu; // 80153F74
  c->r[0]=R32(c->r[6]+0xFFFFFFFCu); // 80153F78
  W32(c->r[6]+0x00000000u,c->r[0]); // 80153F7C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80153F6C; } // 80153F80
L_80153F84:;
  c->r[5]=R32(c->r[3]+0x00000030u); // 80153F84
  W32(c->r[5]+0x00000000u,c->r[4]); // 80153F88
  c->r[4]=R32(c->r[3]+0x0000002Cu); // 80153F8C
  c->r[0]=c->r[4]+0x00000001u; // 80153F90
  W32(c->r[3]+0x0000002Cu,c->r[0]); // 80153F94
L_80153F98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80153F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80153F9C
  c->lr=c->r[0]; // 80153FA0
  c->r[1]=c->r[1]+0x00000010u; // 80153FA4
  return; // 80153FA8
}

// DetachCueSheet__11CriAuObjLocFP13CriAuCueSheetR8CriError
void f_80153FAC(Ctx* __restrict c) {
  trace_call(0x80153FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80153FAC
  c->r[0]=c->lr; // 80153FB0
  W32(c->r[1]+0x00000044u,c->r[0]); // 80153FB4
  c->r[0]=0u+0x00000000u; // 80153FB8
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80153FBC
  c->r[29]=c->r[3]|c->r[3]; // 80153FC0
  c->r[30]=c->r[4]|c->r[4]; // 80153FC4
  c->r[31]=c->r[5]|c->r[5]; // 80153FC8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80153FCC
  c->r[21]=R32(c->r[3]+0x0000001Cu); // 80153FD0
  cmps(c,0,(int32_t)c->r[21],0); // 80153FD4
  if (crb(c,2)) { goto L_80153FE0; } // 80153FD8
  c->r[21]=c->r[21]+0xFFFFFFFCu; // 80153FDC
L_80153FE0:;
  c->r[22]=0u+0x802D0000u; // 80153FE0
  c->r[24]=0u+0x80000000u; // 80153FE4
  c->r[22]=c->r[22]+0xFFFFE608u; // 80153FE8
  c->r[25]=0u+0x10620000u; // 80153FEC
  c->r[26]=0u+0x00000000u; // 80153FF0
  c->r[27]=0u+0x00000005u; // 80153FF4
L_80153FF8:;
  cmps(c,0,(int32_t)c->r[21],0); // 80153FF8
  if (crb(c,2)) { goto L_801540F8; } // 80153FFC
  c->r[3]=c->r[21]|c->r[21]; // 80154000
  c->r[4]=c->r[1]+0x00000008u; // 80154004
  c->lr=0x8015400Cu; f_80158400(c); // 80154008
  cmpu(c,0,c->r[3],c->r[30]); // 8015400C
  if (!crb(c,2)) { goto L_801540E4; } // 80154010
  c->r[12]=R32(c->r[21]+0x00000000u); // 80154014
  c->r[3]=c->r[21]|c->r[21]; // 80154018
  c->r[4]=c->r[1]+0x00000008u; // 8015401C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80154020
  c->ctr=c->r[12]; // 80154024
  if (true) { c->lr=0x8015402Cu; dispatch(c,c->ctr); } // 80154028
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8015402C
  cmpu(c,0,c->r[0],0x00000001u); // 80154030
  if (crb(c,1)) { goto L_801540CC; } // 80154034
  c->r[4]=c->r[22]+0x000000E6u; // 80154038
  c->r[3]=0u+0x00000001u; // 8015403C
  c->lr=0x80154044u; f_80179434(c); // 80154040
  c->r[12]=R32(c->r[21]+0x00000000u); // 80154044
  c->r[3]=c->r[21]|c->r[21]; // 80154048
  c->r[5]=c->r[1]+0x00000008u; // 8015404C
  c->r[4]=0u+0x00000001u; // 80154050
  c->r[12]=R32(c->r[12]+0x00000044u); // 80154054
  c->ctr=c->r[12]; // 80154058
  if (true) { c->lr=0x80154060u; dispatch(c,c->ctr); } // 8015405C
  c->r[28]=(uint32_t)((int32_t)c->r[26]*(int32_t)c->r[27]); // 80154060
  c->r[23]=c->r[25]+0x00004DD3u; // 80154064
L_80154068:;
  c->r[12]=R32(c->r[21]+0x00000000u); // 80154068
  c->r[3]=c->r[21]|c->r[21]; // 8015406C
  c->r[4]=c->r[1]+0x00000008u; // 80154070
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80154074
  c->ctr=c->r[12]; // 80154078
  if (true) { c->lr=0x80154080u; dispatch(c,c->ctr); } // 8015407C
  cmps(c,0,(int32_t)c->r[3],1); // 80154080
  if (crb(c,2)) { goto L_80154090; } // 80154084
  cmps(c,0,(int32_t)c->r[3],2); // 80154088
  if (!crb(c,2)) { goto L_801540CC; } // 8015408C
L_80154090:;
  c->r[12]=R32(c->r[29]+0x00000000u); // 80154090
  c->r[3]=c->r[29]|c->r[29]; // 80154094
  c->r[4]=c->r[1]+0x00000008u; // 80154098
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 8015409C
  c->ctr=c->r[12]; // 801540A0
  if (true) { c->lr=0x801540A8u; dispatch(c,c->ctr); } // 801540A4
  c->r[0]=R32(c->r[24]+0x000000F8u); // 801540A8
  c->r[0]=rotl(c->r[0],30)&0x3FFFFFFFu; // 801540AC
  c->r[0]=(uint32_t)(((uint64_t)c->r[23]*(uint64_t)c->r[0])>>32); // 801540B0
  c->r[3]=rotl(c->r[0],26)&0x03FFFFFFu; // 801540B4
  c->r[0]=(uint32_t)(((uint64_t)c->r[3]*(uint64_t)c->r[27])>>32); // 801540B8
  c->r[4]=(uint32_t)((int32_t)c->r[3]*(int32_t)5); // 801540BC
  c->r[3]=c->r[0]+c->r[28]; // 801540C0
  c->lr=0x801540C8u; f_800842D0(c); // 801540C4
  IRQCHK(c); goto L_80154068; // 801540C8
L_801540CC:;
  c->r[12]=R32(c->r[21]+0x00000000u); // 801540CC
  c->r[3]=c->r[21]|c->r[21]; // 801540D0
  c->r[4]=c->r[1]+0x00000008u; // 801540D4
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801540D8
  c->ctr=c->r[12]; // 801540DC
  if (true) { c->lr=0x801540E4u; dispatch(c,c->ctr); } // 801540E0
L_801540E4:;
  c->r[21]=R32(c->r[21]+0x00000008u); // 801540E4
  cmps(c,0,(int32_t)c->r[21],0); // 801540E8
  if (crb(c,2)) { IRQCHK(c); goto L_80153FF8; } // 801540EC
  c->r[21]=c->r[21]+0xFFFFFFFCu; // 801540F0
  IRQCHK(c); goto L_80153FF8; // 801540F4
L_801540F8:;
  c->r[5]=R32(c->r[29]+0x0000002Cu); // 801540F8
  c->r[6]=0u+0x00000000u; // 801540FC
  c->r[4]=0u+0x00000000u; // 80154100
  c->ctr=c->r[5]; // 80154104
  cmpu(c,0,c->r[5],0x00000000u); // 80154108
  if (!crb(c,1)) { goto L_8015412C; } // 8015410C
L_80154110:;
  c->r[3]=R32(c->r[29]+0x00000030u); // 80154110
  c->r[0]=R32(c->r[3]+c->r[4]); // 80154114
  cmpu(c,0,c->r[0],c->r[30]); // 80154118
  if (crb(c,2)) { goto L_8015412C; } // 8015411C
  c->r[4]=c->r[4]+0x00000004u; // 80154120
  c->r[6]=c->r[6]+0x00000001u; // 80154124
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80154110; } // 80154128
L_8015412C:;
  cmpu(c,0,c->r[6],c->r[5]); // 8015412C
  if (!crb(c,2)) { goto L_80154154; } // 80154130
  c->r[4]=0u+0x802D0000u; // 80154134
  c->r[3]=0u+0x00000000u; // 80154138
  c->r[4]=c->r[4]+0xFFFFE608u; // 8015413C
  c->r[4]=c->r[4]+0x00000131u; // 80154140
  c->lr=0x80154148u; f_80179434(c); // 80154144
  c->r[0]=0u+0xFFFFFFFFu; // 80154148
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015414C
  goto L_801541A4; // 80154150
L_80154154:;
  c->r[3]=R32(c->r[29]+0x00000030u); // 80154154
  c->r[4]=rotl(c->r[6],2)&0xFFFFFFFCu; // 80154158
  c->r[0]=0u+0x00000000u; // 8015415C
  W32(c->r[3]+c->r[4],c->r[0]); // 80154160
  c->r[3]=R32(c->r[29]+0x0000002Cu); // 80154164
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80154168
  W32(c->r[29]+0x0000002Cu,c->r[0]); // 8015416C
  goto L_8015418C; // 80154170
L_80154174:;
  c->r[0]=R32(c->r[29]+0x00000030u); // 80154174
  c->r[6]=c->r[6]+0x00000001u; // 80154178
  c->r[3]=c->r[0]+c->r[4]; // 8015417C
  c->r[4]=c->r[4]+0x00000004u; // 80154180
  c->r[0]=R32(c->r[3]+0x00000004u); // 80154184
  W32(c->r[3]+0x00000000u,c->r[0]); // 80154188
L_8015418C:;
  c->r[0]=R32(c->r[29]+0x0000002Cu); // 8015418C
  cmpu(c,0,c->r[6],c->r[0]); // 80154190
  if (crb(c,0)) { IRQCHK(c); goto L_80154174; } // 80154194
  c->r[3]=R32(c->r[29]+0x00000034u); // 80154198
  c->r[4]=c->r[30]|c->r[30]; // 8015419C
  c->lr=0x801541A4u; f_80175534(c); // 801541A0
L_801541A4:;
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=21;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801541A4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801541A8
  c->lr=c->r[0]; // 801541AC
  c->r[1]=c->r[1]+0x00000040u; // 801541B0
  return; // 801541B4
}

// DetachAllCueSheet__11CriAuObjLocFR8CriError
void f_801541B8(Ctx* __restrict c) {
  trace_call(0x801541B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801541B8
  c->r[0]=c->lr; // 801541BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801541C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801541C4
  c->r[31]=0u+0x00000000u; // 801541C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801541CC
  c->r[30]=0u+0x00000000u; // 801541D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801541D4
  c->r[29]=0u+0x00000000u; // 801541D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801541DC
  c->r[28]=c->r[3]|c->r[3]; // 801541E0
  W32(c->r[4]+0x00000000u,c->r[31]); // 801541E4
  goto L_8015420C; // 801541E8
L_801541EC:;
  c->r[4]=R32(c->r[28]+0x00000030u); // 801541EC
  c->r[3]=R32(c->r[28]+0x00000034u); // 801541F0
  c->r[4]=R32(c->r[4]+c->r[30]); // 801541F4
  c->lr=0x801541FCu; f_80175534(c); // 801541F8
  c->r[3]=R32(c->r[28]+0x00000030u); // 801541FC
  c->r[29]=c->r[29]+0x00000001u; // 80154200
  W32(c->r[3]+c->r[30],c->r[31]); // 80154204
  c->r[30]=c->r[30]+0x00000004u; // 80154208
L_8015420C:;
  c->r[0]=R32(c->r[28]+0x0000002Cu); // 8015420C
  cmpu(c,0,c->r[29],c->r[0]); // 80154210
  if (crb(c,0)) { IRQCHK(c); goto L_801541EC; } // 80154214
  c->r[0]=0u+0x00000000u; // 80154218
  W32(c->r[28]+0x0000002Cu,c->r[0]); // 8015421C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154220
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154224
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154228
  c->r[28]=R32(c->r[1]+0x00000010u); // 8015422C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80154230
  c->lr=c->r[0]; // 80154234
  c->r[1]=c->r[1]+0x00000020u; // 80154238
  return; // 8015423C
}

// GetCueSheet__11CriAuObjLocFUlR8CriError
void f_80154240(Ctx* __restrict c) {
  trace_call(0x80154240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154240
  c->r[0]=c->lr; // 80154244
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154248
  c->r[0]=0u+0x00000000u; // 8015424C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154250
  c->r[31]=c->r[5]|c->r[5]; // 80154254
  W32(c->r[5]+0x00000000u,c->r[0]); // 80154258
  c->r[0]=R32(c->r[3]+0x0000002Cu); // 8015425C
  cmpu(c,0,c->r[4],c->r[0]); // 80154260
  if (crb(c,0)) { goto L_80154290; } // 80154264
  c->r[6]=0u+0x802D0000u; // 80154268
  c->r[5]=c->r[4]|c->r[4]; // 8015426C
  c->r[6]=c->r[6]+0xFFFFE608u; // 80154270
  c->r[3]=0u+0x00000000u; // 80154274
  c->r[4]=c->r[6]+0x00000153u; // 80154278
  c->lr=0x80154280u; f_801794C0(c); // 8015427C
  c->r[0]=0u+0xFFFFFFFFu; // 80154280
  W32(c->r[31]+0x00000000u,c->r[0]); // 80154284
  c->r[3]=0u+0x00000000u; // 80154288
  goto L_8015429C; // 8015428C
L_80154290:;
  c->r[3]=R32(c->r[3]+0x00000030u); // 80154290
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80154294
  c->r[3]=R32(c->r[3]+c->r[0]); // 80154298
L_8015429C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015429C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801542A0
  c->lr=c->r[0]; // 801542A4
  c->r[1]=c->r[1]+0x00000010u; // 801542A8
  return; // 801542AC
}

// GetNumberOfCueSheets__11CriAuObjLocFR8CriError
void f_801542B0(Ctx* __restrict c) {
  trace_call(0x801542B0u);
  c->r[0]=0u+0x00000000u; // 801542B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801542B4
  c->r[3]=R32(c->r[3]+0x0000002Cu); // 801542B8
  return; // 801542BC
}

// Play__11CriAuObjLocFPCcR8CriError
void f_801542C0(Ctx* __restrict c) {
  trace_call(0x801542C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801542C0
  c->r[0]=c->lr; // 801542C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801542C8
  c->r[0]=0u+0x00000000u; // 801542CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801542D0
  c->r[31]=c->r[5]|c->r[5]; // 801542D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801542D8
  c->r[30]=c->r[3]|c->r[3]; // 801542DC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801542E0
  c->r[3]=R32(c->r[3]+0x00000038u); // 801542E4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801542E8
  c->r[12]=R32(c->r[12]+0x00000010u); // 801542EC
  c->ctr=c->r[12]; // 801542F0
  if (true) { c->lr=0x801542F8u; dispatch(c,c->ctr); } // 801542F4
  c->r[0]=R32(c->r[31]+0x00000000u); // 801542F8
  cmps(c,0,(int32_t)c->r[0],0); // 801542FC
  if (!crb(c,2)) { goto L_8015431C; } // 80154300
  c->r[3]=R32(c->r[30]+0x00000038u); // 80154304
  c->r[4]=c->r[31]|c->r[31]; // 80154308
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015430C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80154310
  c->ctr=c->r[12]; // 80154314
  if (true) { c->lr=0x8015431Cu; dispatch(c,c->ctr); } // 80154318
L_8015431C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015431C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154320
  c->r[30]=R32(c->r[1]+0x00000008u); // 80154324
  c->lr=c->r[0]; // 80154328
  c->r[1]=c->r[1]+0x00000010u; // 8015432C
  return; // 80154330
}

// PlayById__11CriAuObjLocFUlR8CriError
void f_80154334(Ctx* __restrict c) {
  trace_call(0x80154334u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154334
  c->r[0]=c->lr; // 80154338
  W32(c->r[1]+0x00000014u,c->r[0]); // 8015433C
  c->r[0]=0u+0x00000000u; // 80154340
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154344
  c->r[31]=c->r[5]|c->r[5]; // 80154348
  W32(c->r[1]+0x00000008u,c->r[30]); // 8015434C
  c->r[30]=c->r[3]|c->r[3]; // 80154350
  W32(c->r[5]+0x00000000u,c->r[0]); // 80154354
  c->r[3]=R32(c->r[3]+0x00000038u); // 80154358
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015435C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80154360
  c->ctr=c->r[12]; // 80154364
  if (true) { c->lr=0x8015436Cu; dispatch(c,c->ctr); } // 80154368
  c->r[0]=R32(c->r[31]+0x00000000u); // 8015436C
  cmps(c,0,(int32_t)c->r[0],0); // 80154370
  if (!crb(c,2)) { goto L_80154390; } // 80154374
  c->r[3]=R32(c->r[30]+0x00000038u); // 80154378
  c->r[4]=c->r[31]|c->r[31]; // 8015437C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154380
  c->r[12]=R32(c->r[12]+0x00000038u); // 80154384
  c->ctr=c->r[12]; // 80154388
  if (true) { c->lr=0x80154390u; dispatch(c,c->ctr); } // 8015438C
L_80154390:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154390
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154394
  c->r[30]=R32(c->r[1]+0x00000008u); // 80154398
  c->lr=c->r[0]; // 8015439C
  c->r[1]=c->r[1]+0x00000010u; // 801543A0
  return; // 801543A4
}

// Stop__11CriAuObjLocFR8CriError
void f_801543A8(Ctx* __restrict c) {
  trace_call(0x801543A8u);
  c->r[0]=0u+0x00000000u; // 801543A8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801543AC
  c->r[5]=c->r[4]|c->r[4]; // 801543B0
  c->r[4]=0u+0x00000000u; // 801543B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801543B8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801543BC
  c->ctr=c->r[12]; // 801543C0
  if (true) { dispatch(c,c->ctr); return; } // 801543C4
}

// Stop__11CriAuObjLocFQ28CriAuObj8StopModeR8CriError
void f_801543C8(Ctx* __restrict c) {
  trace_call(0x801543C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801543C8
  c->r[0]=c->lr; // 801543CC
  cmps(c,0,(int32_t)c->r[4],0); // 801543D0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801543D4
  c->r[0]=0u+0x00000000u; // 801543D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801543DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801543E0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801543E4
  c->r[29]=c->r[5]|c->r[5]; // 801543E8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801543EC
  if (crb(c,2)) { goto L_80154400; } // 801543F0
  cmps(c,0,(int32_t)c->r[4],1); // 801543F4
  if (crb(c,2)) { goto L_80154408; } // 801543F8
  goto L_80154410; // 801543FC
L_80154400:;
  c->r[31]=0u+0x00000000u; // 80154400
  goto L_80154414; // 80154404
L_80154408:;
  c->r[31]=0u+0x00000001u; // 80154408
  goto L_80154414; // 8015440C
L_80154410:;
  c->r[31]=0u+0x00000000u; // 80154410
L_80154414:;
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 80154414
  cmps(c,0,(int32_t)c->r[30],0); // 80154418
  if (crb(c,2)) { goto L_80154424; } // 8015441C
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80154420
L_80154424:;
  cmps(c,0,(int32_t)c->r[30],0); // 80154424
  if (crb(c,2)) { goto L_8015445C; } // 80154428
  c->r[12]=R32(c->r[30]+0x00000000u); // 8015442C
  c->r[3]=c->r[30]|c->r[30]; // 80154430
  c->r[4]=c->r[31]|c->r[31]; // 80154434
  c->r[5]=c->r[29]|c->r[29]; // 80154438
  c->r[12]=R32(c->r[12]+0x00000044u); // 8015443C
  c->ctr=c->r[12]; // 80154440
  if (true) { c->lr=0x80154448u; dispatch(c,c->ctr); } // 80154444
  c->r[30]=R32(c->r[30]+0x00000008u); // 80154448
  cmps(c,0,(int32_t)c->r[30],0); // 8015444C
  if (crb(c,2)) { IRQCHK(c); goto L_80154424; } // 80154450
  c->r[30]=c->r[30]+0xFFFFFFFCu; // 80154454
  IRQCHK(c); goto L_80154424; // 80154458
L_8015445C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015445C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154460
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154464
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154468
  c->lr=c->r[0]; // 8015446C
  c->r[1]=c->r[1]+0x00000020u; // 80154470
  return; // 80154474
}

// GetPlaybackStatus__11CriAuObjLocFR8CriError
void f_80154478(Ctx* __restrict c) {
  trace_call(0x80154478u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154478
  c->r[0]=c->lr; // 8015447C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154480
  c->r[0]=0u+0x00000000u; // 80154484
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154488
  c->r[31]=c->r[3]|c->r[3]; // 8015448C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80154490
  c->r[30]=c->r[4]|c->r[4]; // 80154494
  W32(c->r[4]+0x00000000u,c->r[0]); // 80154498
  c->r[3]=R32(c->r[3]+0x00000038u); // 8015449C
  c->r[12]=R32(c->r[3]+0x00000000u); // 801544A0
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801544A4
  c->ctr=c->r[12]; // 801544A8
  if (true) { c->lr=0x801544B0u; dispatch(c,c->ctr); } // 801544AC
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801544B0
  cmpu(c,0,c->r[0],0x00000001u); // 801544B4
  if (crb(c,1)) { goto L_801544C4; } // 801544B8
  c->r[3]=0u+0x00000001u; // 801544BC
  goto L_80154520; // 801544C0
L_801544C4:;
  c->r[31]=R32(c->r[31]+0x0000001Cu); // 801544C4
  cmps(c,0,(int32_t)c->r[31],0); // 801544C8
  if (crb(c,2)) { goto L_801544D4; } // 801544CC
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 801544D0
L_801544D4:;
  cmps(c,0,(int32_t)c->r[31],0); // 801544D4
  if (crb(c,2)) { goto L_8015451C; } // 801544D8
  c->r[12]=R32(c->r[31]+0x00000000u); // 801544DC
  c->r[3]=c->r[31]|c->r[31]; // 801544E0
  c->r[4]=c->r[30]|c->r[30]; // 801544E4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801544E8
  c->ctr=c->r[12]; // 801544EC
  if (true) { c->lr=0x801544F4u; dispatch(c,c->ctr); } // 801544F0
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 801544F4
  cmpu(c,0,c->r[0],0x00000001u); // 801544F8
  if (crb(c,1)) { goto L_80154508; } // 801544FC
  c->r[3]=0u+0x00000001u; // 80154500
  goto L_80154520; // 80154504
L_80154508:;
  c->r[31]=R32(c->r[31]+0x00000008u); // 80154508
  cmps(c,0,(int32_t)c->r[31],0); // 8015450C
  if (crb(c,2)) { IRQCHK(c); goto L_801544D4; } // 80154510
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 80154514
  IRQCHK(c); goto L_801544D4; // 80154518
L_8015451C:;
  c->r[3]=0u+0x00000000u; // 8015451C
L_80154520:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154520
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154524
  c->r[30]=R32(c->r[1]+0x00000008u); // 80154528
  c->lr=c->r[0]; // 8015452C
  c->r[1]=c->r[1]+0x00000010u; // 80154530
  return; // 80154534
}

// GetNumberOfVoices__11CriAuObjLocFR8CriError
void f_80154538(Ctx* __restrict c) {
  trace_call(0x80154538u);
  c->r[0]=0u+0x00000000u; // 80154538
  W32(c->r[4]+0x00000000u,c->r[0]); // 8015453C
  c->r[3]=R32(c->r[3]+0x00000034u); // 80154540
  f_801759EC(c); return; // 80154544
}

// Pause__11CriAuObjLocFlR8CriError
void f_80154548(Ctx* __restrict c) {
  trace_call(0x80154548u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154548
  c->r[0]=c->lr; // 8015454C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154550
  c->r[0]=0u+0x00000000u; // 80154554
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154558
  W32(c->r[1]+0x00000018u,c->r[30]); // 8015455C
  c->r[30]=c->r[5]|c->r[5]; // 80154560
  W32(c->r[1]+0x00000014u,c->r[29]); // 80154564
  c->r[29]=c->r[4]|c->r[4]; // 80154568
  W32(c->r[5]+0x00000000u,c->r[0]); // 8015456C
  c->r[31]=R32(c->r[3]+0x0000001Cu); // 80154570
  cmps(c,0,(int32_t)c->r[31],0); // 80154574
  if (crb(c,2)) { goto L_80154580; } // 80154578
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 8015457C
L_80154580:;
  cmps(c,0,(int32_t)c->r[31],0); // 80154580
  if (crb(c,2)) { goto L_801545B8; } // 80154584
  c->r[12]=R32(c->r[31]+0x00000000u); // 80154588
  c->r[3]=c->r[31]|c->r[31]; // 8015458C
  c->r[4]=c->r[29]|c->r[29]; // 80154590
  c->r[5]=c->r[30]|c->r[30]; // 80154594
  c->r[12]=R32(c->r[12]+0x00000048u); // 80154598
  c->ctr=c->r[12]; // 8015459C
  if (true) { c->lr=0x801545A4u; dispatch(c,c->ctr); } // 801545A0
  c->r[31]=R32(c->r[31]+0x00000008u); // 801545A4
  cmps(c,0,(int32_t)c->r[31],0); // 801545A8
  if (crb(c,2)) { IRQCHK(c); goto L_80154580; } // 801545AC
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 801545B0
  IRQCHK(c); goto L_80154580; // 801545B4
L_801545B8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801545B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801545BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801545C0
  c->r[29]=R32(c->r[1]+0x00000014u); // 801545C4
  c->lr=c->r[0]; // 801545C8
  c->r[1]=c->r[1]+0x00000020u; // 801545CC
  return; // 801545D0
}

// Execute__11CriAuObjLocFR8CriError
void f_801545D4(Ctx* __restrict c) {
  trace_call(0x801545D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801545D4
  c->r[0]=c->lr; // 801545D8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801545DC
  c->r[0]=0u+0x00000000u; // 801545E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801545E4
  c->r[31]=c->r[3]|c->r[3]; // 801545E8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801545EC
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 801545F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801545F4
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801545F8
  c->ctr=c->r[12]; // 801545FC
  if (true) { c->lr=0x80154604u; dispatch(c,c->ctr); } // 80154600
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80154604
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154608
  c->r[12]=R32(c->r[12]+0x00000014u); // 8015460C
  c->ctr=c->r[12]; // 80154610
  if (true) { c->lr=0x80154618u; dispatch(c,c->ctr); } // 80154614
  c->r[3]=R32(c->r[31]+0x00000034u); // 80154618
  c->lr=0x80154620u; f_80174934(c); // 8015461C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80154620
  c->r[3]=R32(c->r[3]+0x000000A4u); // 80154624
  c->lr=0x8015462Cu; f_8016A478(c); // 80154628
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 8015462C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154630
  c->r[12]=R32(c->r[12]+0x00000018u); // 80154634
  c->ctr=c->r[12]; // 80154638
  if (true) { c->lr=0x80154640u; dispatch(c,c->ctr); } // 8015463C
  c->r[3]=R32(c->r[31]+0x0000003Cu); // 80154640
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154644
  c->r[12]=R32(c->r[12]+0x00000010u); // 80154648
  c->ctr=c->r[12]; // 8015464C
  if (true) { c->lr=0x80154654u; dispatch(c,c->ctr); } // 80154650
  c->r[3]=R32(c->r[31]+0x00000008u); // 80154654
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80154658
  c->lr=0x80154660u; f_80165528(c); // 8015465C
  c->r[5]=c->r[3]|c->r[3]; // 80154660
  c->r[3]=R32(c->r[31]+0x00000040u); // 80154664
  c->r[6]=c->r[4]|c->r[4]; // 80154668
  c->lr=0x80154670u; f_8015E85C(c); // 8015466C
  c->r[3]=R32(c->r[31]+0x0000001Cu); // 80154670
  cmps(c,0,(int32_t)c->r[3],0); // 80154674
  if (crb(c,2)) { goto L_80154680; } // 80154678
  c->r[3]=c->r[3]+0xFFFFFFFCu; // 8015467C
L_80154680:;
  cmps(c,0,(int32_t)c->r[3],0); // 80154680
  if (crb(c,2)) { goto L_801546A4; } // 80154684
  c->r[31]=R32(c->r[3]+0x00000008u); // 80154688
  cmps(c,0,(int32_t)c->r[31],0); // 8015468C
  if (crb(c,2)) { goto L_80154698; } // 80154690
  c->r[31]=c->r[31]+0xFFFFFFFCu; // 80154694
L_80154698:;
  c->lr=0x8015469Cu; f_80158200(c); // 80154698
  c->r[3]=c->r[31]|c->r[31]; // 8015469C
  IRQCHK(c); goto L_80154680; // 801546A0
L_801546A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801546A4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801546A8
  c->lr=c->r[0]; // 801546AC
  c->r[1]=c->r[1]+0x00000010u; // 801546B0
  return; // 801546B4
}

// EnterCriticalSection__14CriSrObjMasterFv
void f_801546B8(Ctx* __restrict c) {
  trace_call(0x801546B8u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801546B8
  f_801793D8(c); return; // 801546BC
}

// EnterVoiceCriticalSection__14CriSrObjMasterFv
void f_801546C0(Ctx* __restrict c) {
  trace_call(0x801546C0u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 801546C0
  f_801793D8(c); return; // 801546C4
}

// LeaveVoiceCriticalSection__14CriSrObjMasterFv
void f_801546C8(Ctx* __restrict c) {
  trace_call(0x801546C8u);
  c->r[3]=R32(c->r[3]+0x00000058u); // 801546C8
  f_801793DC(c); return; // 801546CC
}

// LeaveCriticalSection__14CriSrObjMasterFv
void f_801546D0(Ctx* __restrict c) {
  trace_call(0x801546D0u);
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 801546D0
  f_801793DC(c); return; // 801546D4
}

// AddPlayer__11CriAuObjLocFP14CriAuPlayerLoc
void f_801546D8(Ctx* __restrict c) {
  trace_call(0x801546D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801546D8
  c->r[0]=c->lr; // 801546DC
  cmps(c,0,(int32_t)c->r[4],0); // 801546E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801546E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801546E8
  c->r[31]=c->r[4]|c->r[4]; // 801546EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801546F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801546F4
  c->r[29]=c->r[3]|c->r[3]; // 801546F8
  if (crb(c,2)) { goto L_80154704; } // 801546FC
  c->r[31]=c->r[4]+0x00000004u; // 80154700
L_80154704:;
  c->r[30]=R32(c->r[3]+0x0000001Cu); // 80154704
  cmps(c,0,(int32_t)c->r[30],0); // 80154708
  if (crb(c,2)) { goto L_80154750; } // 8015470C
  c->r[0]=R32(c->r[31]+0x00000000u); // 80154710
  cmps(c,0,(int32_t)c->r[0],0); // 80154714
  if (!crb(c,2)) { goto L_80154728; } // 80154718
  c->r[0]=R32(c->r[31]+0x00000004u); // 8015471C
  cmps(c,0,(int32_t)c->r[0],0); // 80154720
  if (crb(c,2)) { goto L_80154738; } // 80154724
L_80154728:;
  c->r[4]=0u+0x80330000u; // 80154728
  c->r[3]=0u+0x00000000u; // 8015472C
  c->r[4]=c->r[4]+0x000008F4u; // 80154730
  c->lr=0x80154738u; f_80179434(c); // 80154734
L_80154738:;
  c->r[0]=R32(c->r[30]+0x00000000u); // 80154738
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015473C
  W32(c->r[31]+0x00000004u,c->r[30]); // 80154740
  W32(c->r[30]+0x00000000u,c->r[31]); // 80154744
  W32(c->r[29]+0x0000001Cu,c->r[31]); // 80154748
  goto L_80154774; // 8015474C
L_80154750:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 80154750
  W32(c->r[3]+0x0000001Cu,c->r[31]); // 80154754
  cmps(c,0,(int32_t)c->r[0],0); // 80154758
  if (crb(c,2)) { goto L_80154770; } // 8015475C
  c->r[4]=0u+0x80330000u; // 80154760
  c->r[3]=0u+0x00000000u; // 80154764
  c->r[4]=c->r[4]+0x000008CCu; // 80154768
  c->lr=0x80154770u; f_80179434(c); // 8015476C
L_80154770:;
  W32(c->r[29]+0x00000020u,c->r[31]); // 80154770
L_80154774:;
  c->r[3]=R32(c->r[29]+0x00000024u); // 80154774
  c->r[0]=c->r[3]+0x00000001u; // 80154778
  W32(c->r[29]+0x00000024u,c->r[0]); // 8015477C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80154780
  c->r[30]=R32(c->r[1]+0x00000018u); // 80154784
  c->r[29]=R32(c->r[1]+0x00000014u); // 80154788
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015478C
  c->lr=c->r[0]; // 80154790
  c->r[1]=c->r[1]+0x00000020u; // 80154794
  return; // 80154798
}

// DeletePlayer__11CriAuObjLocFP14CriAuPlayerLoc
void f_8015479C(Ctx* __restrict c) {
  trace_call(0x8015479Cu);
  cmps(c,0,(int32_t)c->r[4],0); // 8015479C
  if (crb(c,2)) { goto L_801547A8; } // 801547A0
  c->r[4]=c->r[4]+0x00000004u; // 801547A4
L_801547A8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801547A8
  if (!crb(c,2)) { goto L_801547C0; } // 801547AC
  c->r[4]=0u+0x80330000u; // 801547B0
  c->r[3]=0u+0x00000000u; // 801547B4
  c->r[4]=c->r[4]+0x00000C2Cu; // 801547B8
  f_80179434(c); return; // 801547BC
L_801547C0:;
  c->r[0]=R32(c->r[3]+0x0000001Cu); // 801547C0
  cmpu(c,0,c->r[0],c->r[4]); // 801547C4
  if (!crb(c,2)) { goto L_801547D4; } // 801547C8
  c->r[0]=R32(c->r[4]+0x00000004u); // 801547CC
  W32(c->r[3]+0x0000001Cu,c->r[0]); // 801547D0
L_801547D4:;
  c->r[0]=R32(c->r[3]+0x00000020u); // 801547D4
  cmpu(c,0,c->r[0],c->r[4]); // 801547D8
  if (!crb(c,2)) { goto L_801547E8; } // 801547DC
  c->r[0]=R32(c->r[4]+0x00000000u); // 801547E0
  W32(c->r[3]+0x00000020u,c->r[0]); // 801547E4
L_801547E8:;
  c->r[5]=R32(c->r[4]+0x00000000u); // 801547E8
  cmps(c,0,(int32_t)c->r[5],0); // 801547EC
  if (crb(c,2)) { goto L_801547FC; } // 801547F0
  c->r[0]=R32(c->r[4]+0x00000004u); // 801547F4
  W32(c->r[5]+0x00000004u,c->r[0]); // 801547F8
L_801547FC:;
  c->r[5]=R32(c->r[4]+0x00000004u); // 801547FC
  cmps(c,0,(int32_t)c->r[5],0); // 80154800
  if (crb(c,2)) { goto L_80154810; } // 80154804
  c->r[0]=R32(c->r[4]+0x00000000u); // 80154808
  W32(c->r[5]+0x00000000u,c->r[0]); // 8015480C
L_80154810:;
  c->r[0]=0u+0x00000000u; // 80154810
  W32(c->r[4]+0x00000004u,c->r[0]); // 80154814
  W32(c->r[4]+0x00000000u,c->r[0]); // 80154818
  c->r[4]=R32(c->r[3]+0x00000024u); // 8015481C
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80154820
  W32(c->r[3]+0x00000024u,c->r[0]); // 80154824
  return; // 80154828
}

// fn_8015482C
void f_8015482C(Ctx* __restrict c) {
  trace_call(0x8015482Cu);
  c->r[4]=0u+0x803F0000u; // 8015482C
  c->r[0]=0u+0x00000000u; // 80154830
  c->r[3]=c->r[4]+0xFFFFFCD0u; // 80154834
  W32(c->r[4]+0xFFFFFCD0u,c->r[0]); // 80154838
  W32(c->r[3]+0x00000004u,c->r[0]); // 8015483C
  W32(c->r[3]+0x00000008u,c->r[0]); // 80154840
  return; // 80154844
}

// Create__11CriAuPlayerFP8CriAuObjR8CriError
void f_80154848(Ctx* __restrict c) {
  trace_call(0x80154848u);
  f_80145728(c); return; // 80154848
}

// __ct__11CriAuPlayerFv
void f_8015484C(Ctx* __restrict c) {
  trace_call(0x8015484Cu);
  c->r[4]=0u+0x80330000u; // 8015484C
  c->r[4]=c->r[4]+0x00000D5Cu; // 80154850
  W32(c->r[3]+0x00000000u,c->r[4]); // 80154854
  return; // 80154858
}

// __dt__11CriAuPlayerFv
void f_8015485C(Ctx* __restrict c) {
  trace_call(0x8015485Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015485C
  c->r[0]=c->lr; // 80154860
  cmps(c,0,(int32_t)c->r[3],0); // 80154864
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154868
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015486C
  c->r[31]=c->r[3]|c->r[3]; // 80154870
  if (crb(c,2)) { goto L_80154888; } // 80154874
  cmps(c,0,(int32_t)c->r[4],0); // 80154878
  if (!crb(c,1)) { goto L_80154888; } // 8015487C
  c->r[4]=0u+0x00000004u; // 80154880
  c->lr=0x80154888u; f_8017BFE8(c); // 80154884
L_80154888:;
  c->r[3]=c->r[31]|c->r[31]; // 80154888
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8015488C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154890
  c->lr=c->r[0]; // 80154894
  c->r[1]=c->r[1]+0x00000010u; // 80154898
  return; // 8015489C
}

// __ct__14CriAuPlayerLocFP11CriAuObjLoc
void f_801548A0(Ctx* __restrict c) {
  trace_call(0x801548A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801548A0
  c->r[0]=c->lr; // 801548A4
  c->r[5]=0u+0x80330000u; // 801548A8
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 801548AC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801548B0
  c->r[0]=0u+0x00000000u; // 801548B4
  c->r[5]=c->r[5]+0x00000C58u; // 801548B8
  c->r[6]=c->r[3]+0x00000108u; // 801548BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801548C0
  c->r[31]=c->r[4]|c->r[4]; // 801548C4
  c->r[7]=c->r[3]+0x00000208u; // 801548C8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801548CC
  c->r[30]=c->r[3]|c->r[3]; // 801548D0
  W32(c->r[3]+0x00000004u,c->r[0]); // 801548D4
  W32(c->r[3]+0x00000008u,c->r[0]); // 801548D8
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 801548DC
  W32(c->r[3]+0x00000000u,c->r[5]); // 801548E0
  W32(c->r[3]+0x00000010u,c->r[4]); // 801548E4
  W32(c->r[3]+0x00000014u,c->r[0]); // 801548E8
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[0]);} // 801548EC
  {uint32_t ea=c->r[3]+0x000000CCu; WF32(ea,c->f[0]);} // 801548F0
  {uint32_t ea=c->r[3]+0x000000D0u; WF32(ea,c->f[0]);} // 801548F4
  {uint32_t ea=c->r[3]+0x000000D4u; WF32(ea,c->f[0]);} // 801548F8
  {uint32_t ea=c->r[3]+0x000000D8u; WF32(ea,c->f[0]);} // 801548FC
  {uint32_t ea=c->r[3]+0x000000DCu; WF32(ea,c->f[0]);} // 80154900
  {uint32_t ea=c->r[3]+0x000000E0u; WF32(ea,c->f[0]);} // 80154904
  {uint32_t ea=c->r[3]+0x000000E4u; WF32(ea,c->f[0]);} // 80154908
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 8015490C
  {uint32_t ea=c->r[3]+0x000000ECu; WF32(ea,c->f[0]);} // 80154910
  {uint32_t ea=c->r[3]+0x000000F0u; WF32(ea,c->f[0]);} // 80154914
  {uint32_t ea=c->r[3]+0x000000F4u; WF32(ea,c->f[0]);} // 80154918
  {uint32_t ea=c->r[3]+0x000000F8u; WF32(ea,c->f[0]);} // 8015491C
  {uint32_t ea=c->r[3]+0x000000FCu; WF32(ea,c->f[0]);} // 80154920
  {uint32_t ea=c->r[3]+0x00000100u; WF32(ea,c->f[0]);} // 80154924
  {uint32_t ea=c->r[3]+0x00000104u; WF32(ea,c->f[0]);} // 80154928
L_8015492C:;
  {uint32_t ea=c->r[6]+0x00000000u; WF32(ea,c->f[0]);} // 8015492C
  {uint32_t ea=c->r[6]+0x00000004u; WF32(ea,c->f[0]);} // 80154930
  {uint32_t ea=c->r[6]+0x00000008u; WF32(ea,c->f[0]);} // 80154934
  {uint32_t ea=c->r[6]+0x0000000Cu; WF32(ea,c->f[0]);} // 80154938
  {uint32_t ea=c->r[6]+0x00000010u; WF32(ea,c->f[0]);} // 8015493C
  {uint32_t ea=c->r[6]+0x00000014u; WF32(ea,c->f[0]);} // 80154940
  {uint32_t ea=c->r[6]+0x00000018u; WF32(ea,c->f[0]);} // 80154944
  {uint32_t ea=c->r[6]+0x0000001Cu; WF32(ea,c->f[0]);} // 80154948
  c->r[6]=c->r[6]+0x00000020u; // 8015494C
  cmpu(c,0,c->r[6],c->r[7]); // 80154950
  if (crb(c,0)) { IRQCHK(c); goto L_8015492C; } // 80154954
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80154958
  c->r[0]=c->r[3]+0x00000308u; // 8015495C
L_80154960:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 80154960
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 80154964
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 80154968
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 8015496C
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80154970
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80154974
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[0]);} // 80154978
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[0]);} // 8015497C
  c->r[7]=c->r[7]+0x00000020u; // 80154980
  cmpu(c,0,c->r[7],c->r[0]); // 80154984
  if (crb(c,0)) { IRQCHK(c); goto L_80154960; } // 80154988
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[0]);} // 8015498C
  c->r[4]=0u+0x00000000u; // 80154990
  c->r[5]=0u+0x000003B8u; // 80154994
  {uint32_t ea=c->r[3]+0x00000314u; WF32(ea,c->f[0]);} // 80154998
  {uint32_t ea=c->r[3]+0x00000318u; WF32(ea,c->f[0]);} // 8015499C
  {uint32_t ea=c->r[3]+0x0000031Cu; WF32(ea,c->f[0]);} // 801549A0
  {uint32_t ea=c->r[3]+0x00000320u; WF32(ea,c->f[0]);} // 801549A4
  {uint32_t ea=c->r[3]+0x00000324u; WF32(ea,c->f[0]);} // 801549A8
  {uint32_t ea=c->r[3]+0x00000328u; WF32(ea,c->f[0]);} // 801549AC
  {uint32_t ea=c->r[3]+0x0000032Cu; WF32(ea,c->f[0]);} // 801549B0
  {uint32_t ea=c->r[3]+0x00000330u; WF32(ea,c->f[0]);} // 801549B4
  {uint32_t ea=c->r[3]+0x00000334u; WF32(ea,c->f[0]);} // 801549B8
  {uint32_t ea=c->r[3]+0x00000338u; WF32(ea,c->f[0]);} // 801549BC
  {uint32_t ea=c->r[3]+0x0000033Cu; WF32(ea,c->f[0]);} // 801549C0
  {uint32_t ea=c->r[3]+0x00000340u; WF32(ea,c->f[0]);} // 801549C4
  {uint32_t ea=c->r[3]+0x00000344u; WF32(ea,c->f[0]);} // 801549C8
  {uint32_t ea=c->r[3]+0x00000348u; WF32(ea,c->f[0]);} // 801549CC
  {uint32_t ea=c->r[3]+0x0000034Cu; WF32(ea,c->f[0]);} // 801549D0
  c->r[3]=c->r[3]+0x00000018u; // 801549D4
  c->lr=0x801549DCu; f_80004714(c); // 801549D8
  c->r[3]=c->r[30]+0x00000018u; // 801549DC
  c->r[4]=0u+0x00000000u; // 801549E0
  c->r[5]=0u+0x000003D0u; // 801549E4
  c->lr=0x801549ECu; f_80004714(c); // 801549E8
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 801549EC
  c->r[6]=0u+0x00000000u; // 801549F0
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 801549F4
  c->r[5]=0u+0x00000002u; // 801549F8
  c->r[4]=0u+0x00000005u; // 801549FC
  c->r[3]=0u+0x00000001u; // 80154A00
  c->r[0]=0u+0x00000064u; // 80154A04
  {uint32_t ea=c->r[30]+0x00000038u; WF32(ea,c->f[1]);} // 80154A08
  c->r[8]=c->r[30]+0x000004D8u; // 80154A0C
  c->r[7]=c->r[30]+0x000005D8u; // 80154A10
  {uint32_t ea=c->r[30]+0x0000003Cu; WF32(ea,c->f[0]);} // 80154A14
  {uint32_t ea=c->r[30]+0x00000040u; WF32(ea,c->f[1]);} // 80154A18
  {uint32_t ea=c->r[30]+0x00000044u; WF32(ea,c->f[0]);} // 80154A1C
  {uint32_t ea=c->r[30]+0x00000048u; WF32(ea,c->f[1]);} // 80154A20
  {uint32_t ea=c->r[30]+0x0000004Cu; WF32(ea,c->f[0]);} // 80154A24
  W32(c->r[30]+0x000000B0u,c->r[6]); // 80154A28
  {uint32_t ea=c->r[30]+0x000000E8u; WF32(ea,c->f[0]);} // 80154A2C
  {uint32_t ea=c->r[30]+0x000000ECu; WF32(ea,c->f[0]);} // 80154A30
  {uint32_t ea=c->r[30]+0x000000F0u; WF32(ea,c->f[0]);} // 80154A34
  {uint32_t ea=c->r[30]+0x000000F4u; WF32(ea,c->f[0]);} // 80154A38
  {uint32_t ea=c->r[30]+0x000000F8u; WF32(ea,c->f[0]);} // 80154A3C
  {uint32_t ea=c->r[30]+0x000000FCu; WF32(ea,c->f[0]);} // 80154A40
  {uint32_t ea=c->r[30]+0x00000100u; WF32(ea,c->f[0]);} // 80154A44
  {uint32_t ea=c->r[30]+0x00000104u; WF32(ea,c->f[0]);} // 80154A48
  {uint32_t ea=c->r[30]+0x00000330u; WF32(ea,c->f[0]);} // 80154A4C
  {uint32_t ea=c->r[30]+0x00000334u; WF32(ea,c->f[0]);} // 80154A50
  {uint32_t ea=c->r[30]+0x00000338u; WF32(ea,c->f[0]);} // 80154A54
  {uint32_t ea=c->r[30]+0x0000033Cu; WF32(ea,c->f[0]);} // 80154A58
  {uint32_t ea=c->r[30]+0x00000340u; WF32(ea,c->f[0]);} // 80154A5C
  {uint32_t ea=c->r[30]+0x00000344u; WF32(ea,c->f[0]);} // 80154A60
  {uint32_t ea=c->r[30]+0x00000348u; WF32(ea,c->f[0]);} // 80154A64
  {uint32_t ea=c->r[30]+0x0000034Cu; WF32(ea,c->f[0]);} // 80154A68
  {uint32_t ea=c->r[30]+0x00000380u; WF32(ea,c->f[0]);} // 80154A6C
  {uint32_t ea=c->r[30]+0x0000037Cu; WF32(ea,c->f[1]);} // 80154A70
  {uint32_t ea=c->r[30]+0x00000388u; WF32(ea,c->f[0]);} // 80154A74
  {uint32_t ea=c->r[30]+0x00000384u; WF32(ea,c->f[1]);} // 80154A78
  {uint32_t ea=c->r[30]+0x00000390u; WF32(ea,c->f[0]);} // 80154A7C
  {uint32_t ea=c->r[30]+0x0000038Cu; WF32(ea,c->f[1]);} // 80154A80
  {uint32_t ea=c->r[30]+0x0000006Cu; WF32(ea,c->f[0]);} // 80154A84
  {uint32_t ea=c->r[30]+0x00000070u; WF32(ea,c->f[0]);} // 80154A88
  {uint32_t ea=c->r[30]+0x00000074u; WF32(ea,c->f[0]);} // 80154A8C
  {uint32_t ea=c->r[30]+0x00000078u; WF32(ea,c->f[0]);} // 80154A90
  {uint32_t ea=c->r[30]+0x0000007Cu; WF32(ea,c->f[1]);} // 80154A94
  {uint32_t ea=c->r[30]+0x00000080u; WF32(ea,c->f[0]);} // 80154A98
  W8(c->r[30]+0x00000084u,c->r[5]); // 80154A9C
  W32(c->r[30]+0x00000068u,c->r[4]); // 80154AA0
  {uint32_t ea=c->r[30]+0x0000008Cu; WF32(ea,c->f[1]);} // 80154AA4
  {uint32_t ea=c->r[30]+0x00000090u; WF32(ea,c->f[0]);} // 80154AA8
  {uint32_t ea=c->r[30]+0x00000094u; WF32(ea,c->f[0]);} // 80154AAC
  {uint32_t ea=c->r[30]+0x00000098u; WF32(ea,c->f[0]);} // 80154AB0
  {uint32_t ea=c->r[30]+0x0000009Cu; WF32(ea,c->f[1]);} // 80154AB4
  {uint32_t ea=c->r[30]+0x000000A0u; WF32(ea,c->f[0]);} // 80154AB8
  W8(c->r[30]+0x000000A4u,c->r[5]); // 80154ABC
  {uint32_t ea=c->r[30]+0x00000374u; WF32(ea,c->f[1]);} // 80154AC0
  {uint32_t ea=c->r[30]+0x00000394u; WF32(ea,c->f[1]);} // 80154AC4
  W32(c->r[30]+0x00000398u,c->r[6]); // 80154AC8
  W32(c->r[30]+0x000003A4u,c->r[3]); // 80154ACC
  {uint32_t ea=c->r[30]+0x000003A8u; WF32(ea,c->f[0]);} // 80154AD0
  {uint32_t ea=c->r[30]+0x000003ACu; WF32(ea,c->f[0]);} // 80154AD4
  {uint32_t ea=c->r[30]+0x000003B0u; WF32(ea,c->f[0]);} // 80154AD8
  {uint32_t ea=c->r[30]+0x000003B4u; WF32(ea,c->f[0]);} // 80154ADC
  {uint32_t ea=c->r[30]+0x000003B8u; WF32(ea,c->f[0]);} // 80154AE0
  W32(c->r[30]+0x000003BCu,c->r[6]); // 80154AE4
  W8(c->r[30]+0x0000039Cu,c->r[0]); // 80154AE8
  {uint32_t ea=c->r[30]+0x00000498u; WF32(ea,c->f[1]);} // 80154AEC
  {uint32_t ea=c->r[30]+0x0000049Cu; WF32(ea,c->f[1]);} // 80154AF0
  {uint32_t ea=c->r[30]+0x000004A0u; WF32(ea,c->f[1]);} // 80154AF4
  {uint32_t ea=c->r[30]+0x000004A4u; WF32(ea,c->f[1]);} // 80154AF8
  {uint32_t ea=c->r[30]+0x000004A8u; WF32(ea,c->f[1]);} // 80154AFC
  {uint32_t ea=c->r[30]+0x000004ACu; WF32(ea,c->f[1]);} // 80154B00
  {uint32_t ea=c->r[30]+0x000004B0u; WF32(ea,c->f[1]);} // 80154B04
  {uint32_t ea=c->r[30]+0x000004B4u; WF32(ea,c->f[1]);} // 80154B08
  {uint32_t ea=c->r[30]+0x000004B8u; WF32(ea,c->f[1]);} // 80154B0C
  {uint32_t ea=c->r[30]+0x000004BCu; WF32(ea,c->f[1]);} // 80154B10
  {uint32_t ea=c->r[30]+0x000004C0u; WF32(ea,c->f[1]);} // 80154B14
  {uint32_t ea=c->r[30]+0x000004C4u; WF32(ea,c->f[1]);} // 80154B18
  {uint32_t ea=c->r[30]+0x000004C8u; WF32(ea,c->f[1]);} // 80154B1C
  {uint32_t ea=c->r[30]+0x000004CCu; WF32(ea,c->f[1]);} // 80154B20
  {uint32_t ea=c->r[30]+0x000004D0u; WF32(ea,c->f[1]);} // 80154B24
  {uint32_t ea=c->r[30]+0x000004D4u; WF32(ea,c->f[1]);} // 80154B28
L_80154B2C:;
  {uint32_t ea=c->r[8]+0x00000000u; WF32(ea,c->f[1]);} // 80154B2C
  {uint32_t ea=c->r[8]+0x00000004u; WF32(ea,c->f[1]);} // 80154B30
  {uint32_t ea=c->r[8]+0x00000008u; WF32(ea,c->f[1]);} // 80154B34
  {uint32_t ea=c->r[8]+0x0000000Cu; WF32(ea,c->f[1]);} // 80154B38
  {uint32_t ea=c->r[8]+0x00000010u; WF32(ea,c->f[1]);} // 80154B3C
  {uint32_t ea=c->r[8]+0x00000014u; WF32(ea,c->f[1]);} // 80154B40
  {uint32_t ea=c->r[8]+0x00000018u; WF32(ea,c->f[1]);} // 80154B44
  {uint32_t ea=c->r[8]+0x0000001Cu; WF32(ea,c->f[1]);} // 80154B48
  c->r[8]=c->r[8]+0x00000020u; // 80154B4C
  cmpu(c,0,c->r[8],c->r[7]); // 80154B50
  if (crb(c,0)) { IRQCHK(c); goto L_80154B2C; } // 80154B54
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80154B58
  c->r[0]=c->r[30]+0x000006D8u; // 80154B5C
L_80154B60:;
  {uint32_t ea=c->r[7]+0x00000000u; WF32(ea,c->f[0]);} // 80154B60
  {uint32_t ea=c->r[7]+0x00000004u; WF32(ea,c->f[0]);} // 80154B64
  {uint32_t ea=c->r[7]+0x00000008u; WF32(ea,c->f[0]);} // 80154B68
  {uint32_t ea=c->r[7]+0x0000000Cu; WF32(ea,c->f[0]);} // 80154B6C
  {uint32_t ea=c->r[7]+0x00000010u; WF32(ea,c->f[0]);} // 80154B70
  {uint32_t ea=c->r[7]+0x00000014u; WF32(ea,c->f[0]);} // 80154B74
  {uint32_t ea=c->r[7]+0x00000018u; WF32(ea,c->f[0]);} // 80154B78
  {uint32_t ea=c->r[7]+0x0000001Cu; WF32(ea,c->f[0]);} // 80154B7C
  c->r[7]=c->r[7]+0x00000020u; // 80154B80
  cmpu(c,0,c->r[7],c->r[0]); // 80154B84
  if (crb(c,0)) { IRQCHK(c); goto L_80154B60; } // 80154B88
  {uint32_t ea=c->r[30]+0x000006E0u; WF32(ea,c->f[0]);} // 80154B8C
  c->r[3]=c->r[30]+0x000003E8u; // 80154B90
  c->r[4]=0u+0x00000000u; // 80154B94
  c->r[5]=0u+0x000003B8u; // 80154B98
  {uint32_t ea=c->r[30]+0x000006E4u; WF32(ea,c->f[0]);} // 80154B9C
  {uint32_t ea=c->r[30]+0x000006E8u; WF32(ea,c->f[0]);} // 80154BA0
  {uint32_t ea=c->r[30]+0x000006ECu; WF32(ea,c->f[0]);} // 80154BA4
  {uint32_t ea=c->r[30]+0x000006F0u; WF32(ea,c->f[0]);} // 80154BA8
  {uint32_t ea=c->r[30]+0x000006F4u; WF32(ea,c->f[0]);} // 80154BAC
  {uint32_t ea=c->r[30]+0x000006F8u; WF32(ea,c->f[0]);} // 80154BB0
  {uint32_t ea=c->r[30]+0x000006FCu; WF32(ea,c->f[0]);} // 80154BB4
  {uint32_t ea=c->r[30]+0x00000700u; WF32(ea,c->f[0]);} // 80154BB8
  {uint32_t ea=c->r[30]+0x00000704u; WF32(ea,c->f[0]);} // 80154BBC
  {uint32_t ea=c->r[30]+0x00000708u; WF32(ea,c->f[0]);} // 80154BC0
  {uint32_t ea=c->r[30]+0x0000070Cu; WF32(ea,c->f[0]);} // 80154BC4
  {uint32_t ea=c->r[30]+0x00000710u; WF32(ea,c->f[0]);} // 80154BC8
  {uint32_t ea=c->r[30]+0x00000714u; WF32(ea,c->f[0]);} // 80154BCC
  {uint32_t ea=c->r[30]+0x00000718u; WF32(ea,c->f[0]);} // 80154BD0
  {uint32_t ea=c->r[30]+0x0000071Cu; WF32(ea,c->f[0]);} // 80154BD4
  c->lr=0x80154BDCu; f_80004714(c); // 80154BD8
  c->r[3]=c->r[30]+0x000003E8u; // 80154BDC
  c->r[4]=0u+0x00000000u; // 80154BE0
  c->r[5]=0u+0x000003D0u; // 80154BE4
  c->lr=0x80154BECu; f_80004714(c); // 80154BE8
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 80154BEC
  c->r[6]=0u+0x00000000u; // 80154BF0
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 80154BF4
  c->r[5]=0u+0x00000002u; // 80154BF8
  c->r[4]=0u+0x00000005u; // 80154BFC
  c->r[3]=0u+0x00000001u; // 80154C00
  c->r[0]=0u+0x00000064u; // 80154C04
  {uint32_t ea=c->r[30]+0x00000408u; WF32(ea,c->f[1]);} // 80154C08
  {uint32_t ea=c->r[30]+0x0000040Cu; WF32(ea,c->f[0]);} // 80154C0C
  {uint32_t ea=c->r[30]+0x00000410u; WF32(ea,c->f[1]);} // 80154C10
  {uint32_t ea=c->r[30]+0x00000414u; WF32(ea,c->f[0]);} // 80154C14
  {uint32_t ea=c->r[30]+0x00000418u; WF32(ea,c->f[1]);} // 80154C18
  {uint32_t ea=c->r[30]+0x0000041Cu; WF32(ea,c->f[0]);} // 80154C1C
  W32(c->r[30]+0x00000480u,c->r[6]); // 80154C20
  {uint32_t ea=c->r[30]+0x000004B8u; WF32(ea,c->f[0]);} // 80154C24
  {uint32_t ea=c->r[30]+0x000004BCu; WF32(ea,c->f[0]);} // 80154C28
  {uint32_t ea=c->r[30]+0x000004C0u; WF32(ea,c->f[0]);} // 80154C2C
  {uint32_t ea=c->r[30]+0x000004C4u; WF32(ea,c->f[0]);} // 80154C30
  {uint32_t ea=c->r[30]+0x000004C8u; WF32(ea,c->f[0]);} // 80154C34
  {uint32_t ea=c->r[30]+0x000004CCu; WF32(ea,c->f[0]);} // 80154C38
  {uint32_t ea=c->r[30]+0x000004D0u; WF32(ea,c->f[0]);} // 80154C3C
  {uint32_t ea=c->r[30]+0x000004D4u; WF32(ea,c->f[0]);} // 80154C40
  {uint32_t ea=c->r[30]+0x00000700u; WF32(ea,c->f[0]);} // 80154C44
  {uint32_t ea=c->r[30]+0x00000704u; WF32(ea,c->f[0]);} // 80154C48
  {uint32_t ea=c->r[30]+0x00000708u; WF32(ea,c->f[0]);} // 80154C4C
  {uint32_t ea=c->r[30]+0x0000070Cu; WF32(ea,c->f[0]);} // 80154C50
  {uint32_t ea=c->r[30]+0x00000710u; WF32(ea,c->f[0]);} // 80154C54
  {uint32_t ea=c->r[30]+0x00000714u; WF32(ea,c->f[0]);} // 80154C58
  {uint32_t ea=c->r[30]+0x00000718u; WF32(ea,c->f[0]);} // 80154C5C
  {uint32_t ea=c->r[30]+0x0000071Cu; WF32(ea,c->f[0]);} // 80154C60
  {uint32_t ea=c->r[30]+0x00000750u; WF32(ea,c->f[0]);} // 80154C64
  {uint32_t ea=c->r[30]+0x0000074Cu; WF32(ea,c->f[1]);} // 80154C68
  {uint32_t ea=c->r[30]+0x00000758u; WF32(ea,c->f[0]);} // 80154C6C
  {uint32_t ea=c->r[30]+0x00000754u; WF32(ea,c->f[1]);} // 80154C70
  {uint32_t ea=c->r[30]+0x00000760u; WF32(ea,c->f[0]);} // 80154C74
  {uint32_t ea=c->r[30]+0x0000075Cu; WF32(ea,c->f[1]);} // 80154C78
  {uint32_t ea=c->r[30]+0x0000043Cu; WF32(ea,c->f[0]);} // 80154C7C
  {uint32_t ea=c->r[30]+0x00000440u; WF32(ea,c->f[0]);} // 80154C80
  {uint32_t ea=c->r[30]+0x00000444u; WF32(ea,c->f[0]);} // 80154C84
  {uint32_t ea=c->r[30]+0x00000448u; WF32(ea,c->f[0]);} // 80154C88
  {uint32_t ea=c->r[30]+0x0000044Cu; WF32(ea,c->f[1]);} // 80154C8C
  {uint32_t ea=c->r[30]+0x00000450u; WF32(ea,c->f[0]);} // 80154C90
  W8(c->r[30]+0x00000454u,c->r[5]); // 80154C94
  W32(c->r[30]+0x00000438u,c->r[4]); // 80154C98
  {uint32_t ea=c->r[30]+0x0000045Cu; WF32(ea,c->f[1]);} // 80154C9C
  {uint32_t ea=c->r[30]+0x00000460u; WF32(ea,c->f[0]);} // 80154CA0
  {uint32_t ea=c->r[30]+0x00000464u; WF32(ea,c->f[0]);} // 80154CA4
  {uint32_t ea=c->r[30]+0x00000468u; WF32(ea,c->f[0]);} // 80154CA8
  {uint32_t ea=c->r[30]+0x0000046Cu; WF32(ea,c->f[1]);} // 80154CAC
  {uint32_t ea=c->r[30]+0x00000470u; WF32(ea,c->f[0]);} // 80154CB0
  W8(c->r[30]+0x00000474u,c->r[5]); // 80154CB4
  {uint32_t ea=c->r[30]+0x00000744u; WF32(ea,c->f[1]);} // 80154CB8
  {uint32_t ea=c->r[30]+0x00000764u; WF32(ea,c->f[1]);} // 80154CBC
  W32(c->r[30]+0x00000768u,c->r[6]); // 80154CC0
  W32(c->r[30]+0x00000774u,c->r[3]); // 80154CC4
  {uint32_t ea=c->r[30]+0x00000778u; WF32(ea,c->f[0]);} // 80154CC8
  {uint32_t ea=c->r[30]+0x0000077Cu; WF32(ea,c->f[0]);} // 80154CCC
  {uint32_t ea=c->r[30]+0x00000780u; WF32(ea,c->f[0]);} // 80154CD0
  {uint32_t ea=c->r[30]+0x00000784u; WF32(ea,c->f[0]);} // 80154CD4
  {uint32_t ea=c->r[30]+0x00000788u; WF32(ea,c->f[0]);} // 80154CD8
  W32(c->r[30]+0x0000078Cu,c->r[6]); // 80154CDC
  W8(c->r[30]+0x0000076Cu,c->r[0]); // 80154CE0
  W32(c->r[30]+0x000007B8u,c->r[6]); // 80154CE4
  c->r[0]=R32(c->r[31]+0x00000034u); // 80154CE8
  W32(c->r[30]+0x000007BCu,c->r[0]); // 80154CEC
  c->r[3]=R32(c->r[13]+0xFFFFA1A8u); // 80154CF0
  c->r[3]=c->r[3]+0x00000001u; // 80154CF4
  W32(c->r[13]+0xFFFFA1A8u,c->r[3]); // 80154CF8
  c->r[0]=c->r[3]+0x00010000u; // 80154CFC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80154D00
  if (!crb(c,2)) { goto L_80154D10; } // 80154D04
  c->r[3]=c->r[3]+0x00000001u; // 80154D08
  W32(c->r[13]+0xFFFFA1A8u,c->r[3]); // 80154D0C
L_80154D10:;
  c->r[4]=0u+0x00000000u; // 80154D10
  c->r[0]=0u+0x00000001u; // 80154D14
  W32(c->r[30]+0x000007C0u,c->r[3]); // 80154D18
  c->r[3]=c->r[30]|c->r[30]; // 80154D1C
  W32(c->r[30]+0x000007C4u,c->r[4]); // 80154D20
  W32(c->r[30]+0x000007C8u,c->r[4]); // 80154D24
  W32(c->r[30]+0x000007CCu,c->r[4]); // 80154D28
  W32(c->r[30]+0x000007D0u,c->r[4]); // 80154D2C
  W32(c->r[30]+0x000007D4u,c->r[4]); // 80154D30
  W32(c->r[30]+0x000007D8u,c->r[4]); // 80154D34
  W32(c->r[30]+0x000007DCu,c->r[0]); // 80154D38
  W32(c->r[30]+0x000007E0u,c->r[4]); // 80154D3C
  W32(c->r[30]+0x000007E4u,c->r[4]); // 80154D40
  W32(c->r[30]+0x000007E8u,c->r[4]); // 80154D44
  W32(c->r[30]+0x000007F0u,c->r[4]); // 80154D48
  W32(c->r[30]+0x000007F4u,c->r[4]); // 80154D4C
  W32(c->r[30]+0x000007F8u,c->r[4]); // 80154D50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154D54
  c->r[30]=R32(c->r[1]+0x00000008u); // 80154D58
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154D5C
  c->lr=c->r[0]; // 80154D60
  c->r[1]=c->r[1]+0x00000010u; // 80154D64
  return; // 80154D68
}

// __dt__14CriAuPlayerLocFv
void f_80154D6C(Ctx* __restrict c) {
  trace_call(0x80154D6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154D6C
  c->r[0]=c->lr; // 80154D70
  cmps(c,0,(int32_t)c->r[3],0); // 80154D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154D78
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154D7C
  c->r[31]=c->r[3]|c->r[3]; // 80154D80
  if (crb(c,2)) { goto L_80154D98; } // 80154D84
  cmps(c,0,(int32_t)c->r[4],0); // 80154D88
  if (!crb(c,1)) { goto L_80154D98; } // 80154D8C
  c->r[4]=0u+0x00000800u; // 80154D90
  c->lr=0x80154D98u; f_8017BFE8(c); // 80154D94
L_80154D98:;
  c->r[3]=c->r[31]|c->r[31]; // 80154D98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154D9C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154DA0
  c->lr=c->r[0]; // 80154DA4
  c->r[1]=c->r[1]+0x00000010u; // 80154DA8
  return; // 80154DAC
}

// Create__14CriAuPlayerLocFP11CriAuObjLocR8CriError
void f_80154DB0(Ctx* __restrict c) {
  trace_call(0x80154DB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154DB0
  c->r[0]=c->lr; // 80154DB4
  c->r[5]=0u+0x802D0000u; // 80154DB8
  c->r[6]=0u+0x00000004u; // 80154DBC
  W32(c->r[1]+0x00000034u,c->r[0]); // 80154DC0
  c->r[0]=0u+0x00000000u; // 80154DC4
  c->r[5]=c->r[5]+0xFFFFE788u; // 80154DC8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80154DCC
  c->r[31]=c->r[1]|c->r[1]; // 80154DD0
  W32(c->r[1]+0x00000028u,c->r[30]); // 80154DD4
  W32(c->r[1]+0x00000024u,c->r[29]); // 80154DD8
  c->r[29]=c->r[4]|c->r[4]; // 80154DDC
  W32(c->r[1]+0x00000020u,c->r[28]); // 80154DE0
  c->r[28]=c->r[3]|c->r[3]; // 80154DE4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80154DE8
  c->r[4]=R32(c->r[3]+0x00000004u); // 80154DEC
  c->r[3]=0u+0x00000800u; // 80154DF0
  c->lr=0x80154DF8u; f_8017BEDC(c); // 80154DF4
  cmps(c,0,(int32_t)c->r[3],0); // 80154DF8
  c->r[30]=c->r[3]|c->r[3]; // 80154DFC
  if (crb(c,2)) { goto L_80154E10; } // 80154E00
  W32(c->r[31]+0x0000001Cu,c->r[1]); // 80154E04
  c->r[4]=c->r[28]|c->r[28]; // 80154E08
  c->lr=0x80154E10u; f_801548A0(c); // 80154E0C
L_80154E10:;
  cmps(c,0,(int32_t)c->r[30],0); // 80154E10
  if (!crb(c,2)) { goto L_80154E3C; } // 80154E14
  c->r[4]=0u+0x802D0000u; // 80154E18
  c->r[5]=0u+0xFFFFFFFDu; // 80154E1C
  c->r[4]=c->r[4]+0xFFFFE788u; // 80154E20
  W32(c->r[29]+0x00000000u,c->r[5]); // 80154E24
  c->r[3]=0u+0x00000000u; // 80154E28
  c->r[4]=c->r[4]+0x00000006u; // 80154E2C
  c->lr=0x80154E34u; f_8017968C(c); // 80154E30
  c->r[3]=0u+0x00000000u; // 80154E34
  goto L_80154E98; // 80154E38
L_80154E3C:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80154E3C
  c->r[3]=c->r[30]|c->r[30]; // 80154E40
  c->r[4]=0u+0x00000008u; // 80154E44
  c->r[12]=R32(c->r[12]+0x000000FCu); // 80154E48
  c->ctr=c->r[12]; // 80154E4C
  if (true) { c->lr=0x80154E54u; dispatch(c,c->ctr); } // 80154E50
  cmps(c,0,(int32_t)c->r[3],0); // 80154E54
  if (!crb(c,2)) { goto L_80154E88; } // 80154E58
  cmps(c,0,(int32_t)c->r[30],0); // 80154E5C
  if (crb(c,2)) { goto L_80154E80; } // 80154E60
  c->r[12]=R32(c->r[30]+0x00000000u); // 80154E64
  c->r[0]=0u+0x00000001u; // 80154E68
  c->r[3]=c->r[30]|c->r[30]; // 80154E6C
  c->r[12]=R32(c->r[12]+0x000000E8u); // 80154E70
  c->r[4]=(uint32_t)(int32_t)(int16_t)c->r[0]; // 80154E74
  c->ctr=c->r[12]; // 80154E78
  if (true) { c->lr=0x80154E80u; dispatch(c,c->ctr); } // 80154E7C
L_80154E80:;
  c->r[3]=0u+0x00000000u; // 80154E80
  goto L_80154E98; // 80154E84
L_80154E88:;
  c->r[3]=c->r[28]|c->r[28]; // 80154E88
  c->r[4]=c->r[30]|c->r[30]; // 80154E8C
  c->lr=0x80154E94u; f_801546D8(c); // 80154E90
  c->r[3]=c->r[30]|c->r[30]; // 80154E94
L_80154E98:;
  c->r[10]=c->r[31]|c->r[31]; // 80154E98
  c->r[31]=R32(c->r[31]+0x0000002Cu); // 80154E9C
  c->r[30]=R32(c->r[10]+0x00000028u); // 80154EA0
  c->r[29]=R32(c->r[10]+0x00000024u); // 80154EA4
  c->r[28]=R32(c->r[10]+0x00000020u); // 80154EA8
  c->r[10]=R32(c->r[1]+0x00000000u); // 80154EAC
  c->r[0]=R32(c->r[10]+0x00000004u); // 80154EB0
  c->r[1]=c->r[10]|c->r[10]; // 80154EB4
  c->lr=c->r[0]; // 80154EB8
  return; // 80154EBC
}

// Destroy__14CriAuPlayerLocFR8CriError
void f_80154EC0(Ctx* __restrict c) {
  trace_call(0x80154EC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154EC0
  c->r[0]=c->lr; // 80154EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154EC8
  c->r[0]=0u+0x00000000u; // 80154ECC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154ED0
  c->r[31]=c->r[3]|c->r[3]; // 80154ED4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80154ED8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154EDC
  c->r[12]=R32(c->r[12]+0x00000100u); // 80154EE0
  c->ctr=c->r[12]; // 80154EE4
  if (true) { c->lr=0x80154EECu; dispatch(c,c->ctr); } // 80154EE8
  c->r[3]=R32(c->r[31]+0x00000010u); // 80154EEC
  c->r[4]=c->r[31]|c->r[31]; // 80154EF0
  c->lr=0x80154EF8u; f_8015479C(c); // 80154EF4
  cmps(c,0,(int32_t)c->r[31],0); // 80154EF8
  if (crb(c,2)) { goto L_80154F18; } // 80154EFC
  c->r[12]=R32(c->r[31]+0x00000000u); // 80154F00
  c->r[3]=c->r[31]|c->r[31]; // 80154F04
  c->r[4]=0u+0x00000001u; // 80154F08
  c->r[12]=R32(c->r[12]+0x000000E8u); // 80154F0C
  c->ctr=c->r[12]; // 80154F10
  if (true) { c->lr=0x80154F18u; dispatch(c,c->ctr); } // 80154F14
L_80154F18:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154F18
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154F1C
  c->lr=c->r[0]; // 80154F20
  c->r[1]=c->r[1]+0x00000010u; // 80154F24
  return; // 80154F28
}

// Initialize__14CriAuPlayerLocFUl
void f_80154F2C(Ctx* __restrict c) {
  trace_call(0x80154F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154F2C
  c->r[0]=c->lr; // 80154F30
  c->r[5]=c->r[4]|c->r[4]; // 80154F34
  c->r[4]=0u+0x00000001u; // 80154F38
  W32(c->r[1]+0x00000014u,c->r[0]); // 80154F3C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80154F40
  c->r[31]=c->r[3]|c->r[3]; // 80154F44
  c->r[6]=R32(c->r[3]+0x00000010u); // 80154F48
  c->r[3]=R32(c->r[6]+0x00000004u); // 80154F4C
  c->lr=0x80154F54u; f_80146F20(c); // 80154F50
  cmps(c,0,(int32_t)c->r[3],0); // 80154F54
  W32(c->r[31]+0x000007CCu,c->r[3]); // 80154F58
  if (!crb(c,2)) { goto L_80154F90; } // 80154F5C
  c->r[4]=0u+0x802D0000u; // 80154F60
  c->r[3]=0u+0x00000000u; // 80154F64
  c->r[4]=c->r[4]+0xFFFFE788u; // 80154F68
  c->r[4]=c->r[4]+0x00000012u; // 80154F6C
  c->lr=0x80154F74u; f_80179434(c); // 80154F70
  c->r[12]=R32(c->r[31]+0x00000000u); // 80154F74
  c->r[3]=c->r[31]|c->r[31]; // 80154F78
  c->r[12]=R32(c->r[12]+0x00000100u); // 80154F7C
  c->ctr=c->r[12]; // 80154F80
  if (true) { c->lr=0x80154F88u; dispatch(c,c->ctr); } // 80154F84
  c->r[3]=0u+0x00000000u; // 80154F88
  goto L_80154F98; // 80154F8C
L_80154F90:;
  W32(c->r[31]+0x000003C8u,c->r[31]); // 80154F90
  c->r[3]=0u+0x00000001u; // 80154F94
L_80154F98:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80154F98
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80154F9C
  c->lr=c->r[0]; // 80154FA0
  c->r[1]=c->r[1]+0x00000010u; // 80154FA4
  return; // 80154FA8
}

// Finalize__14CriAuPlayerLocFv
void f_80154FAC(Ctx* __restrict c) {
  trace_call(0x80154FACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80154FAC
  c->r[0]=c->lr; // 80154FB0
  c->r[4]=0u+0x00000001u; // 80154FB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80154FB8
  c->r[5]=c->r[1]+0x00000008u; // 80154FBC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80154FC0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80154FC4
  c->r[30]=c->r[3]|c->r[3]; // 80154FC8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154FCC
  c->r[12]=R32(c->r[12]+0x00000044u); // 80154FD0
  c->ctr=c->r[12]; // 80154FD4
  if (true) { c->lr=0x80154FDCu; dispatch(c,c->ctr); } // 80154FD8
L_80154FDC:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 80154FDC
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80154FE0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80154FE4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80154FE8
  c->ctr=c->r[12]; // 80154FEC
  if (true) { c->lr=0x80154FF4u; dispatch(c,c->ctr); } // 80154FF0
  c->r[3]=R32(c->r[30]+0x000007BCu); // 80154FF4
  c->lr=0x80154FFCu; f_80174934(c); // 80154FF8
  c->r[3]=c->r[30]|c->r[30]; // 80154FFC
  c->lr=0x80155004u; f_80158200(c); // 80155000
  c->r[3]=R32(c->r[30]+0x00000010u); // 80155004
  c->r[3]=R32(c->r[3]+0x0000003Cu); // 80155008
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015500C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80155010
  c->ctr=c->r[12]; // 80155014
  if (true) { c->lr=0x8015501Cu; dispatch(c,c->ctr); } // 80155018
  c->r[0]=R32(c->r[30]+0x000007B8u); // 8015501C
  cmps(c,0,(int32_t)c->r[0],0); // 80155020
  if (!crb(c,2)) { IRQCHK(c); goto L_80154FDC; } // 80155024
  c->r[3]=c->r[30]|c->r[30]; // 80155028
  c->r[4]=0u+0x00000002u; // 8015502C
  c->lr=0x80155034u; f_80158620(c); // 80155030
  c->r[0]=R32(c->r[30]+0x000007CCu); // 80155034
  cmps(c,0,(int32_t)c->r[0],0); // 80155038
  if (crb(c,2)) { goto L_801550A0; } // 8015503C
  c->r[31]=0u+0x00000000u; // 80155040
  goto L_80155078; // 80155044
L_80155048:;
  c->r[4]=c->r[31]|c->r[31]; // 80155048
  c->lr=0x80155050u; f_80147AB0(c); // 8015504C
  cmps(c,0,(int32_t)c->r[3],0); // 80155050
  if (crb(c,2)) { goto L_80155074; } // 80155054
  c->r[12]=R32(c->r[30]+0x00000000u); // 80155058
  c->r[3]=c->r[30]|c->r[30]; // 8015505C
  c->r[4]=c->r[31]|c->r[31]; // 80155060
  c->r[5]=c->r[1]+0x00000008u; // 80155064
  c->r[12]=R32(c->r[12]+0x000000B0u); // 80155068
  c->ctr=c->r[12]; // 8015506C
  if (true) { c->lr=0x80155074u; dispatch(c,c->ctr); } // 80155070
L_80155074:;
  c->r[31]=c->r[31]+0x00000001u; // 80155074
L_80155078:;
  c->r[3]=R32(c->r[30]+0x000007CCu); // 80155078
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 8015507C
  cmpu(c,0,c->r[31],c->r[0]); // 80155080
  if (crb(c,0)) { IRQCHK(c); goto L_80155048; } // 80155084
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155088
  c->r[12]=R32(c->r[12]+0x00000008u); // 8015508C
  c->ctr=c->r[12]; // 80155090
  if (true) { c->lr=0x80155098u; dispatch(c,c->ctr); } // 80155094
  c->r[0]=0u+0x00000000u; // 80155098
  W32(c->r[30]+0x000007CCu,c->r[0]); // 8015509C
L_801550A0:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 801550A0
  c->r[3]=c->r[30]|c->r[30]; // 801550A4
  c->r[4]=c->r[1]+0x00000008u; // 801550A8
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 801550AC
  c->ctr=c->r[12]; // 801550B0
  if (true) { c->lr=0x801550B8u; dispatch(c,c->ctr); } // 801550B4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801550B8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801550BC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801550C0
  c->lr=c->r[0]; // 801550C4
  c->r[1]=c->r[1]+0x00000020u; // 801550C8
  return; // 801550CC
}

// GetStatus__14CriAuPlayerLocCFR8CriError
void f_801550D0(Ctx* __restrict c) {
  trace_call(0x801550D0u);
  c->r[0]=0u+0x00000000u; // 801550D0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801550D4
  c->r[3]=R32(c->r[3]+0x000007B8u); // 801550D8
  return; // 801550DC
}

// SetCue__14CriAuPlayerLocFPCcR8CriError
void f_801550E0(Ctx* __restrict c) {
  trace_call(0x801550E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801550E0
  c->r[0]=c->lr; // 801550E4
  W32(c->r[1]+0x00000044u,c->r[0]); // 801550E8
  c->r[0]=0u+0x00000000u; // 801550EC
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 801550F0
  c->r[26]=c->r[3]|c->r[3]; // 801550F4
  c->r[28]=c->r[5]|c->r[5]; // 801550F8
  c->r[27]=c->r[4]|c->r[4]; // 801550FC
  c->r[4]=c->r[28]|c->r[28]; // 80155100
  W32(c->r[5]+0x00000000u,c->r[0]); // 80155104
  W32(c->r[1]+0x00000008u,c->r[0]); // 80155108
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8015510C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80155110
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155114
  W8(c->r[1]+0x00000018u,c->r[0]); // 80155118
  c->r[3]=R32(c->r[3]+0x00000010u); // 8015511C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155120
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80155124
  c->ctr=c->r[12]; // 80155128
  if (true) { c->lr=0x80155130u; dispatch(c,c->ctr); } // 8015512C
  c->r[31]=c->r[3]|c->r[3]; // 80155130
  c->r[30]=0u+0x00000000u; // 80155134
  goto L_80155194; // 80155138
L_8015513C:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 8015513C
  c->r[4]=c->r[30]|c->r[30]; // 80155140
  c->r[5]=c->r[28]|c->r[28]; // 80155144
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155148
  c->r[12]=R32(c->r[12]+0x00000018u); // 8015514C
  c->ctr=c->r[12]; // 80155150
  if (true) { c->lr=0x80155158u; dispatch(c,c->ctr); } // 80155154
  cmps(c,0,(int32_t)c->r[3],0); // 80155158
  c->r[29]=c->r[3]|c->r[3]; // 8015515C
  if (crb(c,2)) { goto L_8015519C; } // 80155160
  c->r[4]=c->r[27]|c->r[27]; // 80155164
  c->r[5]=c->r[1]+0x00000008u; // 80155168
  c->lr=0x80155170u; f_8014C628(c); // 8015516C
  cmps(c,0,(int32_t)c->r[3],1); // 80155170
  if (!crb(c,2)) { goto L_80155190; } // 80155174
  c->r[3]=c->r[26]|c->r[26]; // 80155178
  c->r[5]=c->r[29]|c->r[29]; // 8015517C
  c->r[6]=c->r[28]|c->r[28]; // 80155180
  c->r[4]=c->r[1]+0x00000008u; // 80155184
  c->lr=0x8015518Cu; f_80157ED0(c); // 80155188
  goto L_8015519C; // 8015518C
L_80155190:;
  c->r[30]=c->r[30]+0x00000001u; // 80155190
L_80155194:;
  cmpu(c,0,c->r[30],c->r[31]); // 80155194
  if (crb(c,0)) { IRQCHK(c); goto L_8015513C; } // 80155198
L_8015519C:;
  cmpu(c,0,c->r[30],c->r[31]); // 8015519C
  if (!crb(c,2)) { goto L_801551C4; } // 801551A0
  c->r[4]=0u+0x802D0000u; // 801551A4
  c->r[5]=c->r[27]|c->r[27]; // 801551A8
  c->r[4]=c->r[4]+0xFFFFE788u; // 801551AC
  c->r[3]=0u+0x00000000u; // 801551B0
  c->r[4]=c->r[4]+0x0000003Cu; // 801551B4
  c->lr=0x801551BCu; f_801794C0(c); // 801551B8
  c->r[0]=0u+0xFFFFFFFFu; // 801551BC
  W32(c->r[28]+0x00000000u,c->r[0]); // 801551C0
L_801551C4:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 801551C4
  c->r[0]=R32(c->r[1]+0x00000044u); // 801551C8
  c->lr=c->r[0]; // 801551CC
  c->r[1]=c->r[1]+0x00000040u; // 801551D0
  return; // 801551D4
}

// SetCue__14CriAuPlayerLocFPCcP13CriAuCueSheetR8CriError
void f_801551D8(Ctx* __restrict c) {
  trace_call(0x801551D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801551D8
  c->r[0]=c->lr; // 801551DC
  cmps(c,0,(int32_t)c->r[5],0); // 801551E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801551E4
  c->r[0]=0u+0x00000000u; // 801551E8
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801551EC
  c->r[31]=c->r[5]|c->r[5]; // 801551F0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801551F4
  c->r[30]=c->r[6]|c->r[6]; // 801551F8
  W32(c->r[1]+0x00000024u,c->r[29]); // 801551FC
  c->r[29]=c->r[4]|c->r[4]; // 80155200
  W32(c->r[1]+0x00000020u,c->r[28]); // 80155204
  c->r[28]=c->r[3]|c->r[3]; // 80155208
  W32(c->r[6]+0x00000000u,c->r[0]); // 8015520C
  if (!crb(c,2)) { goto L_80155234; } // 80155210
  c->r[4]=0u+0x802D0000u; // 80155214
  c->r[3]=0u+0x00000000u; // 80155218
  c->r[4]=c->r[4]+0xFFFFE788u; // 8015521C
  c->r[4]=c->r[4]+0x00000059u; // 80155220
  c->lr=0x80155228u; f_80179434(c); // 80155224
  c->r[0]=0u+0xFFFFFFFEu; // 80155228
  W32(c->r[30]+0x00000000u,c->r[0]); // 8015522C
  goto L_80155294; // 80155230
L_80155234:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 80155234
  c->r[3]=c->r[31]|c->r[31]; // 80155238
  c->r[5]=c->r[1]+0x00000008u; // 8015523C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80155240
  W32(c->r[1]+0x00000010u,c->r[0]); // 80155244
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155248
  W8(c->r[1]+0x00000018u,c->r[0]); // 8015524C
  c->lr=0x80155254u; f_8014C628(c); // 80155250
  cmps(c,0,(int32_t)c->r[3],1); // 80155254
  if (!crb(c,2)) { goto L_80155274; } // 80155258
  c->r[3]=c->r[28]|c->r[28]; // 8015525C
  c->r[5]=c->r[31]|c->r[31]; // 80155260
  c->r[6]=c->r[30]|c->r[30]; // 80155264
  c->r[4]=c->r[1]+0x00000008u; // 80155268
  c->lr=0x80155270u; f_80157ED0(c); // 8015526C
  goto L_80155294; // 80155270
L_80155274:;
  c->r[4]=0u+0x802D0000u; // 80155274
  c->r[5]=c->r[29]|c->r[29]; // 80155278
  c->r[4]=c->r[4]+0xFFFFE788u; // 8015527C
  c->r[3]=0u+0x00000000u; // 80155280
  c->r[4]=c->r[4]+0x0000008Au; // 80155284
  c->lr=0x8015528Cu; f_801794C0(c); // 80155288
  c->r[0]=0u+0xFFFFFFFFu; // 8015528C
  W32(c->r[30]+0x00000000u,c->r[0]); // 80155290
L_80155294:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80155294
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80155298
  c->r[30]=R32(c->r[1]+0x00000028u); // 8015529C
  c->r[29]=R32(c->r[1]+0x00000024u); // 801552A0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801552A4
  c->lr=c->r[0]; // 801552A8
  c->r[1]=c->r[1]+0x00000030u; // 801552AC
  return; // 801552B0
}

// SetCue__14CriAuPlayerLocFP8CriAuCueR8CriError
void f_801552B4(Ctx* __restrict c) {
  trace_call(0x801552B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801552B4
  c->r[0]=c->lr; // 801552B8
  cmps(c,0,(int32_t)c->r[4],0); // 801552BC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801552C0
  c->r[0]=0u+0x00000000u; // 801552C4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801552C8
  c->r[31]=c->r[5]|c->r[5]; // 801552CC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801552D0
  c->r[30]=c->r[4]|c->r[4]; // 801552D4
  W32(c->r[1]+0x00000014u,c->r[29]); // 801552D8
  c->r[29]=c->r[3]|c->r[3]; // 801552DC
  W32(c->r[5]+0x00000000u,c->r[0]); // 801552E0
  if (!crb(c,2)) { goto L_80155308; } // 801552E4
  c->r[4]=0u+0x802D0000u; // 801552E8
  c->r[3]=0u+0x00000000u; // 801552EC
  c->r[4]=c->r[4]+0xFFFFE788u; // 801552F0
  c->r[4]=c->r[4]+0x000000A7u; // 801552F4
  c->lr=0x801552FCu; f_80179434(c); // 801552F8
  c->r[0]=0u+0xFFFFFFFFu; // 801552FC
  W32(c->r[31]+0x00000000u,c->r[0]); // 80155300
  goto L_80155420; // 80155304
L_80155308:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80155308
  c->r[3]=c->r[30]|c->r[30]; // 8015530C
  c->r[12]=R32(c->r[12]+0x00000020u); // 80155310
  c->ctr=c->r[12]; // 80155314
  if (true) { c->lr=0x8015531Cu; dispatch(c,c->ctr); } // 80155318
  cmps(c,0,(int32_t)c->r[3],0); // 8015531C
  if (!crb(c,2)) { goto L_80155344; } // 80155320
  c->r[4]=0u+0x802D0000u; // 80155324
  c->r[3]=0u+0x00000000u; // 80155328
  c->r[4]=c->r[4]+0xFFFFE788u; // 8015532C
  c->r[4]=c->r[4]+0x000000BFu; // 80155330
  c->lr=0x80155338u; f_80179434(c); // 80155334
  c->r[0]=0u+0xFFFFFFFFu; // 80155338
  W32(c->r[31]+0x00000000u,c->r[0]); // 8015533C
  goto L_80155420; // 80155340
L_80155344:;
  c->r[0]=R32(c->r[29]+0x00000014u); // 80155344
  cmps(c,0,(int32_t)c->r[0],0); // 80155348
  if (crb(c,2)) { goto L_80155358; } // 8015534C
  cmpu(c,0,c->r[0],c->r[30]); // 80155350
  if (crb(c,2)) { goto L_80155420; } // 80155354
L_80155358:;
  c->r[3]=c->r[29]|c->r[29]; // 80155358
  c->r[4]=0u+0x00000003u; // 8015535C
  c->lr=0x80155364u; f_80158620(c); // 80155360
  c->r[3]=R32(c->r[29]+0x00000014u); // 80155364
  cmps(c,0,(int32_t)c->r[3],0); // 80155368
  if (crb(c,2)) { goto L_801553BC; } // 8015536C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155370
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80155374
  c->ctr=c->r[12]; // 80155378
  if (true) { c->lr=0x80155380u; dispatch(c,c->ctr); } // 8015537C
  cmps(c,0,(int32_t)c->r[3],0); // 80155380
  if (!crb(c,2)) { goto L_801553A0; } // 80155384
  c->r[3]=R32(c->r[29]+0x00000014u); // 80155388
  c->r[4]=c->r[1]+0x00000008u; // 8015538C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155390
  c->r[12]=R32(c->r[12]+0x00000008u); // 80155394
  c->ctr=c->r[12]; // 80155398
  if (true) { c->lr=0x801553A0u; dispatch(c,c->ctr); } // 8015539C
L_801553A0:;
  c->r[0]=0u+0x00000000u; // 801553A0
  W32(c->r[29]+0x00000014u,c->r[0]); // 801553A4
  goto L_801553BC; // 801553A8
  c->lr=0x801553B0u; f_80173C74(c); // 801553AC
  c->r[3]=c->r[29]|c->r[29]; // 801553B0
  c->r[4]=0u+0x00000001u; // 801553B4
  c->lr=0x801553BCu; f_80158620(c); // 801553B8
L_801553BC:;
  c->r[3]=R32(c->r[13]+0xFFFFA1B8u); // 801553BC
  c->r[3]=c->r[3]+0x00000001u; // 801553C0
  W32(c->r[13]+0xFFFFA1B8u,c->r[3]); // 801553C4
  c->r[0]=c->r[3]+0x00010000u; // 801553C8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801553CC
  if (!crb(c,2)) { goto L_801553DC; } // 801553D0
  c->r[3]=c->r[3]+0x00000001u; // 801553D4
  W32(c->r[13]+0xFFFFA1B8u,c->r[3]); // 801553D8
L_801553DC:;
  cmps(c,0,(int32_t)c->r[30],0); // 801553DC
  W32(c->r[29]+0x000007C4u,c->r[3]); // 801553E0
  W32(c->r[29]+0x00000014u,c->r[30]); // 801553E4
  if (crb(c,2)) { goto L_80155404; } // 801553E8
  c->r[3]=c->r[30]|c->r[30]; // 801553EC
  c->r[4]=c->r[29]|c->r[29]; // 801553F0
  c->lr=0x801553F8u; f_80173C74(c); // 801553F4
  c->r[3]=c->r[29]|c->r[29]; // 801553F8
  c->r[4]=0u+0x00000001u; // 801553FC
  c->lr=0x80155404u; f_80158620(c); // 80155400
L_80155404:;
  c->r[12]=R32(c->r[30]+0x00000000u); // 80155404
  c->r[3]=c->r[30]|c->r[30]; // 80155408
  c->r[12]=R32(c->r[12]+0x00000018u); // 8015540C
  c->ctr=c->r[12]; // 80155410
  if (true) { c->lr=0x80155418u; dispatch(c,c->ctr); } // 80155414
  c->r[0]=0u+0x00000000u; // 80155418
  W32(c->r[29]+0x000007D4u,c->r[0]); // 8015541C
L_80155420:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80155420
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80155424
  c->r[30]=R32(c->r[1]+0x00000018u); // 80155428
  c->r[29]=R32(c->r[1]+0x00000014u); // 8015542C
  c->lr=c->r[0]; // 80155430
  c->r[1]=c->r[1]+0x00000020u; // 80155434
  return; // 80155438
}

// SetCueById__14CriAuPlayerLocFUlR8CriError
void f_8015543C(Ctx* __restrict c) {
  trace_call(0x8015543Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015543C
  c->r[0]=c->lr; // 80155440
  W32(c->r[1]+0x00000044u,c->r[0]); // 80155444
  c->r[0]=0u+0x00000000u; // 80155448
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 8015544C
  c->r[26]=c->r[3]|c->r[3]; // 80155450
  c->r[28]=c->r[5]|c->r[5]; // 80155454
  c->r[27]=c->r[4]|c->r[4]; // 80155458
  c->r[4]=c->r[28]|c->r[28]; // 8015545C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80155460
  W32(c->r[1]+0x00000008u,c->r[0]); // 80155464
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80155468
  W32(c->r[1]+0x00000010u,c->r[0]); // 8015546C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155470
  W8(c->r[1]+0x00000018u,c->r[0]); // 80155474
  c->r[3]=R32(c->r[3]+0x00000010u); // 80155478
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015547C
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80155480
  c->ctr=c->r[12]; // 80155484
  if (true) { c->lr=0x8015548Cu; dispatch(c,c->ctr); } // 80155488
  c->r[31]=c->r[3]|c->r[3]; // 8015548C
  c->r[30]=0u+0x00000000u; // 80155490
  goto L_801554F0; // 80155494
L_80155498:;
  c->r[3]=R32(c->r[26]+0x00000010u); // 80155498
  c->r[4]=c->r[30]|c->r[30]; // 8015549C
  c->r[5]=c->r[28]|c->r[28]; // 801554A0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801554A4
  c->r[12]=R32(c->r[12]+0x00000018u); // 801554A8
  c->ctr=c->r[12]; // 801554AC
  if (true) { c->lr=0x801554B4u; dispatch(c,c->ctr); } // 801554B0
  cmps(c,0,(int32_t)c->r[3],0); // 801554B4
  c->r[29]=c->r[3]|c->r[3]; // 801554B8
  if (crb(c,2)) { goto L_801554F8; } // 801554BC
  c->r[4]=c->r[27]|c->r[27]; // 801554C0
  c->r[5]=c->r[1]+0x00000008u; // 801554C4
  c->lr=0x801554CCu; f_8014C874(c); // 801554C8
  cmps(c,0,(int32_t)c->r[3],1); // 801554CC
  if (!crb(c,2)) { goto L_801554EC; } // 801554D0
  c->r[3]=c->r[26]|c->r[26]; // 801554D4
  c->r[5]=c->r[29]|c->r[29]; // 801554D8
  c->r[6]=c->r[28]|c->r[28]; // 801554DC
  c->r[4]=c->r[1]+0x00000008u; // 801554E0
  c->lr=0x801554E8u; f_80157ED0(c); // 801554E4
  goto L_801554F8; // 801554E8
L_801554EC:;
  c->r[30]=c->r[30]+0x00000001u; // 801554EC
L_801554F0:;
  cmpu(c,0,c->r[30],c->r[31]); // 801554F0
  if (crb(c,0)) { IRQCHK(c); goto L_80155498; } // 801554F4
L_801554F8:;
  cmpu(c,0,c->r[30],c->r[31]); // 801554F8
  if (!crb(c,2)) { goto L_80155520; } // 801554FC
  c->r[4]=0u+0x802D0000u; // 80155500
  c->r[5]=c->r[27]|c->r[27]; // 80155504
  c->r[4]=c->r[4]+0xFFFFE788u; // 80155508
  c->r[3]=0u+0x00000000u; // 8015550C
  c->r[4]=c->r[4]+0x000000D7u; // 80155510
  c->lr=0x80155518u; f_801794C0(c); // 80155514
  c->r[0]=0u+0xFFFFFFFFu; // 80155518
  W32(c->r[28]+0x00000000u,c->r[0]); // 8015551C
L_80155520:;
  {uint32_t ea=c->r[1]+0x00000028u; for(int i=26;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80155520
  c->r[0]=R32(c->r[1]+0x00000044u); // 80155524
  c->lr=c->r[0]; // 80155528
  c->r[1]=c->r[1]+0x00000040u; // 8015552C
  return; // 80155530
}

// SetCueById__14CriAuPlayerLocFUlP13CriAuCueSheetR8CriError
void f_80155534(Ctx* __restrict c) {
  trace_call(0x80155534u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155534
  c->r[0]=c->lr; // 80155538
  cmps(c,0,(int32_t)c->r[5],0); // 8015553C
  W32(c->r[1]+0x00000034u,c->r[0]); // 80155540
  c->r[0]=0u+0x00000000u; // 80155544
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80155548
  c->r[31]=c->r[5]|c->r[5]; // 8015554C
  W32(c->r[1]+0x00000028u,c->r[30]); // 80155550
  c->r[30]=c->r[6]|c->r[6]; // 80155554
  W32(c->r[1]+0x00000024u,c->r[29]); // 80155558
  c->r[29]=c->r[4]|c->r[4]; // 8015555C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80155560
  c->r[28]=c->r[3]|c->r[3]; // 80155564
  W32(c->r[6]+0x00000000u,c->r[0]); // 80155568
  if (!crb(c,2)) { goto L_80155590; } // 8015556C
  c->r[4]=0u+0x802D0000u; // 80155570
  c->r[3]=0u+0x00000000u; // 80155574
  c->r[4]=c->r[4]+0xFFFFE788u; // 80155578
  c->r[4]=c->r[4]+0x000000F7u; // 8015557C
  c->lr=0x80155584u; f_80179434(c); // 80155580
  c->r[0]=0u+0xFFFFFFFEu; // 80155584
  W32(c->r[30]+0x00000000u,c->r[0]); // 80155588
  goto L_801555F0; // 8015558C
L_80155590:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 80155590
  c->r[3]=c->r[31]|c->r[31]; // 80155594
  c->r[5]=c->r[1]+0x00000008u; // 80155598
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8015559C
  W32(c->r[1]+0x00000010u,c->r[0]); // 801555A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801555A4
  W8(c->r[1]+0x00000018u,c->r[0]); // 801555A8
  c->lr=0x801555B0u; f_8014C874(c); // 801555AC
  cmps(c,0,(int32_t)c->r[3],1); // 801555B0
  if (!crb(c,2)) { goto L_801555D0; } // 801555B4
  c->r[3]=c->r[28]|c->r[28]; // 801555B8
  c->r[5]=c->r[31]|c->r[31]; // 801555BC
  c->r[6]=c->r[30]|c->r[30]; // 801555C0
  c->r[4]=c->r[1]+0x00000008u; // 801555C4
  c->lr=0x801555CCu; f_80157ED0(c); // 801555C8
  goto L_801555F0; // 801555CC
L_801555D0:;
  c->r[4]=0u+0x802D0000u; // 801555D0
  c->r[5]=c->r[29]|c->r[29]; // 801555D4
  c->r[4]=c->r[4]+0xFFFFE788u; // 801555D8
  c->r[3]=0u+0x00000000u; // 801555DC
  c->r[4]=c->r[4]+0x00000128u; // 801555E0
  c->lr=0x801555E8u; f_801794C0(c); // 801555E4
  c->r[0]=0u+0xFFFFFFFFu; // 801555E8
  W32(c->r[30]+0x00000000u,c->r[0]); // 801555EC
L_801555F0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801555F0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801555F4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801555F8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801555FC
  c->r[28]=R32(c->r[1]+0x00000020u); // 80155600
  c->lr=c->r[0]; // 80155604
  c->r[1]=c->r[1]+0x00000030u; // 80155608
  return; // 8015560C
}

// SetCueByIndex__14CriAuPlayerLocFUlR8CriError
void f_80155610(Ctx* __restrict c) {
  trace_call(0x80155610u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155610
  c->r[0]=c->lr; // 80155614
  W32(c->r[1]+0x00000034u,c->r[0]); // 80155618
  c->r[0]=0u+0x00000000u; // 8015561C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80155620
  W32(c->r[1]+0x00000028u,c->r[30]); // 80155624
  c->r[30]=c->r[5]|c->r[5]; // 80155628
  W32(c->r[1]+0x00000024u,c->r[29]); // 8015562C
  c->r[29]=c->r[4]|c->r[4]; // 80155630
  c->r[4]=0u+0x00000000u; // 80155634
  W32(c->r[1]+0x00000020u,c->r[28]); // 80155638
  c->r[28]=c->r[3]|c->r[3]; // 8015563C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80155640
  W32(c->r[1]+0x00000008u,c->r[0]); // 80155644
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80155648
  W32(c->r[1]+0x00000010u,c->r[0]); // 8015564C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155650
  W8(c->r[1]+0x00000018u,c->r[0]); // 80155654
  c->r[3]=R32(c->r[3]+0x00000010u); // 80155658
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015565C
  c->r[12]=R32(c->r[12]+0x00000018u); // 80155660
  c->ctr=c->r[12]; // 80155664
  if (true) { c->lr=0x8015566Cu; dispatch(c,c->ctr); } // 80155668
  cmps(c,0,(int32_t)c->r[3],0); // 8015566C
  c->r[31]=c->r[3]|c->r[3]; // 80155670
  if (crb(c,2)) { goto L_801556C4; } // 80155674
  c->r[4]=c->r[29]|c->r[29]; // 80155678
  c->r[5]=c->r[1]+0x00000008u; // 8015567C
  c->lr=0x80155684u; f_8014C74C(c); // 80155680
  cmps(c,0,(int32_t)c->r[3],1); // 80155684
  if (!crb(c,2)) { goto L_801556A4; } // 80155688
  c->r[3]=c->r[28]|c->r[28]; // 8015568C
  c->r[5]=c->r[31]|c->r[31]; // 80155690
  c->r[6]=c->r[30]|c->r[30]; // 80155694
  c->r[4]=c->r[1]+0x00000008u; // 80155698
  c->lr=0x801556A0u; f_80157ED0(c); // 8015569C
  goto L_801556C4; // 801556A0
L_801556A4:;
  c->r[4]=0u+0x802D0000u; // 801556A4
  c->r[5]=c->r[29]|c->r[29]; // 801556A8
  c->r[4]=c->r[4]+0xFFFFE788u; // 801556AC
  c->r[3]=0u+0x00000000u; // 801556B0
  c->r[4]=c->r[4]+0x00000148u; // 801556B4
  c->lr=0x801556BCu; f_801794C0(c); // 801556B8
  c->r[0]=0u+0xFFFFFFFFu; // 801556BC
  W32(c->r[30]+0x00000000u,c->r[0]); // 801556C0
L_801556C4:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801556C4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801556C8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801556CC
  c->r[29]=R32(c->r[1]+0x00000024u); // 801556D0
  c->r[28]=R32(c->r[1]+0x00000020u); // 801556D4
  c->lr=c->r[0]; // 801556D8
  c->r[1]=c->r[1]+0x00000030u; // 801556DC
  return; // 801556E0
}

// SetCueByIndex__14CriAuPlayerLocFUlP13CriAuCueSheetR8CriError
void f_801556E4(Ctx* __restrict c) {
  trace_call(0x801556E4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801556E4
  c->r[0]=c->lr; // 801556E8
  cmps(c,0,(int32_t)c->r[5],0); // 801556EC
  W32(c->r[1]+0x00000034u,c->r[0]); // 801556F0
  c->r[0]=0u+0x00000000u; // 801556F4
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801556F8
  c->r[31]=c->r[5]|c->r[5]; // 801556FC
  W32(c->r[1]+0x00000028u,c->r[30]); // 80155700
  c->r[30]=c->r[6]|c->r[6]; // 80155704
  W32(c->r[1]+0x00000024u,c->r[29]); // 80155708
  c->r[29]=c->r[4]|c->r[4]; // 8015570C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80155710
  c->r[28]=c->r[3]|c->r[3]; // 80155714
  W32(c->r[6]+0x00000000u,c->r[0]); // 80155718
  if (!crb(c,2)) { goto L_80155740; } // 8015571C
  c->r[4]=0u+0x802D0000u; // 80155720
  c->r[3]=0u+0x00000000u; // 80155724
  c->r[4]=c->r[4]+0xFFFFE788u; // 80155728
  c->r[4]=c->r[4]+0x0000016Bu; // 8015572C
  c->lr=0x80155734u; f_80179434(c); // 80155730
  c->r[0]=0u+0xFFFFFFFEu; // 80155734
  W32(c->r[30]+0x00000000u,c->r[0]); // 80155738
  goto L_801557A0; // 8015573C
L_80155740:;
  W32(c->r[1]+0x00000008u,c->r[0]); // 80155740
  c->r[3]=c->r[31]|c->r[31]; // 80155744
  c->r[5]=c->r[1]+0x00000008u; // 80155748
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 8015574C
  W32(c->r[1]+0x00000010u,c->r[0]); // 80155750
  W32(c->r[1]+0x00000014u,c->r[0]); // 80155754
  W8(c->r[1]+0x00000018u,c->r[0]); // 80155758
  c->lr=0x80155760u; f_8014C74C(c); // 8015575C
  cmps(c,0,(int32_t)c->r[3],1); // 80155760
  if (!crb(c,2)) { goto L_80155780; } // 80155764
  c->r[3]=c->r[28]|c->r[28]; // 80155768
  c->r[5]=c->r[31]|c->r[31]; // 8015576C
  c->r[6]=c->r[30]|c->r[30]; // 80155770
  c->r[4]=c->r[1]+0x00000008u; // 80155774
  c->lr=0x8015577Cu; f_80157ED0(c); // 80155778
  goto L_801557A0; // 8015577C
L_80155780:;
  c->r[4]=0u+0x802D0000u; // 80155780
  c->r[5]=c->r[29]|c->r[29]; // 80155784
  c->r[4]=c->r[4]+0xFFFFE788u; // 80155788
  c->r[3]=0u+0x00000000u; // 8015578C
  c->r[4]=c->r[4]+0x0000019Cu; // 80155790
  c->lr=0x80155798u; f_801794C0(c); // 80155794
  c->r[0]=0u+0xFFFFFFFFu; // 80155798
  W32(c->r[30]+0x00000000u,c->r[0]); // 8015579C
L_801557A0:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 801557A0
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801557A4
  c->r[30]=R32(c->r[1]+0x00000028u); // 801557A8
  c->r[29]=R32(c->r[1]+0x00000024u); // 801557AC
  c->r[28]=R32(c->r[1]+0x00000020u); // 801557B0
  c->lr=c->r[0]; // 801557B4
  c->r[1]=c->r[1]+0x00000030u; // 801557B8
  return; // 801557BC
}

// ReleaseCue__14CriAuPlayerLocFR8CriError
void f_801557C0(Ctx* __restrict c) {
  trace_call(0x801557C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801557C0
  c->r[0]=c->lr; // 801557C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801557C8
  c->r[0]=0u+0x00000000u; // 801557CC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801557D0
  c->r[31]=c->r[4]|c->r[4]; // 801557D4
  W32(c->r[1]+0x00000008u,c->r[30]); // 801557D8
  c->r[30]=c->r[3]|c->r[3]; // 801557DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801557E0
  c->r[4]=0u+0x00000000u; // 801557E4
  c->lr=0x801557ECu; f_80158620(c); // 801557E8
  c->r[3]=R32(c->r[30]+0x00000014u); // 801557EC
  cmps(c,0,(int32_t)c->r[3],0); // 801557F0
  if (crb(c,2)) { goto L_80155844; } // 801557F4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801557F8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 801557FC
  c->ctr=c->r[12]; // 80155800
  if (true) { c->lr=0x80155808u; dispatch(c,c->ctr); } // 80155804
  cmps(c,0,(int32_t)c->r[3],0); // 80155808
  if (!crb(c,2)) { goto L_80155828; } // 8015580C
  c->r[3]=R32(c->r[30]+0x00000014u); // 80155810
  c->r[4]=c->r[31]|c->r[31]; // 80155814
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155818
  c->r[12]=R32(c->r[12]+0x00000008u); // 8015581C
  c->ctr=c->r[12]; // 80155820
  if (true) { c->lr=0x80155828u; dispatch(c,c->ctr); } // 80155824
L_80155828:;
  c->r[0]=0u+0x00000000u; // 80155828
  W32(c->r[30]+0x00000014u,c->r[0]); // 8015582C
  goto L_80155844; // 80155830
  c->lr=0x80155838u; f_80173C74(c); // 80155834
  c->r[3]=c->r[30]|c->r[30]; // 80155838
  c->r[4]=0u+0x00000001u; // 8015583C
  c->lr=0x80155844u; f_80158620(c); // 80155840
L_80155844:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80155844
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80155848
  c->r[30]=R32(c->r[1]+0x00000008u); // 8015584C
  c->lr=c->r[0]; // 80155850
  c->r[1]=c->r[1]+0x00000010u; // 80155854
  return; // 80155858
}

// Play__14CriAuPlayerLocFR8CriError
void f_8015585C(Ctx* __restrict c) {
  trace_call(0x8015585Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015585C
  c->r[0]=c->lr; // 80155860
  W32(c->r[1]+0x00000104u,c->r[0]); // 80155864
  c->r[11]=c->r[1]+0x00000100u; // 80155868
  c->lr=0x80155870u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8015586C
  c->r[0]=0u+0x00000000u; // 80155870
  W32(c->r[4]+0x00000000u,c->r[0]); // 80155874
  c->r[31]=c->r[3]|c->r[3]; // 80155878
  c->r[0]=R32(c->r[3]+0x00000014u); // 8015587C
  cmps(c,0,(int32_t)c->r[0],0); // 80155880
  if (!crb(c,2)) { goto L_801558A8; } // 80155884
  c->r[3]=0u+0x802D0000u; // 80155888
  c->r[0]=0u+0xFFFFFFFFu; // 8015588C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80155890
  c->r[3]=c->r[3]+0xFFFFE788u; // 80155894
  c->r[4]=c->r[3]+0x000001BFu; // 80155898
  c->r[3]=0u+0x00000000u; // 8015589C
  c->lr=0x801558A4u; f_80179434(c); // 801558A0
  goto L_80155F0C; // 801558A4
L_801558A8:;
  c->r[15]=R32(c->r[3]+0x00000098u); // 801558A8
  W32(c->r[1]+0x000000A4u,c->r[15]); // 801558AC
  c->r[15]=R32(c->r[3]+0x0000009Cu); // 801558B0
  c->r[0]=R32(c->r[3]+0x00000090u); // 801558B4
  W32(c->r[1]+0x00000008u,c->r[15]); // 801558B8
  c->r[15]=R32(c->r[3]+0x000000A0u); // 801558BC
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 801558C0
  c->r[15]=R32(c->r[3]+0x000000A4u); // 801558C4
  W32(c->r[3]+0x00000460u,c->r[0]); // 801558C8
  c->r[0]=R32(c->r[1]+0x000000A4u); // 801558CC
  W32(c->r[1]+0x00000010u,c->r[15]); // 801558D0
  c->r[15]=R32(c->r[3]+0x000000A8u); // 801558D4
  W32(c->r[3]+0x00000468u,c->r[0]); // 801558D8
  c->r[0]=R32(c->r[1]+0x00000008u); // 801558DC
  W32(c->r[1]+0x00000014u,c->r[15]); // 801558E0
  c->r[15]=R32(c->r[3]+0x000000ACu); // 801558E4
  W32(c->r[3]+0x0000046Cu,c->r[0]); // 801558E8
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 801558EC
  W32(c->r[1]+0x00000018u,c->r[15]); // 801558F0
  c->r[15]=R32(c->r[3]+0x000000B0u); // 801558F4
  W32(c->r[3]+0x00000470u,c->r[0]); // 801558F8
  c->r[0]=R32(c->r[1]+0x00000010u); // 801558FC
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 80155900
  c->r[15]=R32(c->r[3]+0x000000B4u); // 80155904
  W32(c->r[3]+0x00000474u,c->r[0]); // 80155908
  c->r[0]=R32(c->r[1]+0x00000014u); // 8015590C
  W32(c->r[1]+0x00000020u,c->r[15]); // 80155910
  c->r[15]=R32(c->r[3]+0x000000B8u); // 80155914
  W32(c->r[3]+0x00000478u,c->r[0]); // 80155918
  c->r[0]=R32(c->r[1]+0x00000018u); // 8015591C
  W32(c->r[1]+0x00000024u,c->r[15]); // 80155920
  c->r[15]=R32(c->r[3]+0x000000BCu); // 80155924
  W32(c->r[3]+0x0000047Cu,c->r[0]); // 80155928
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 8015592C
  W32(c->r[1]+0x00000028u,c->r[15]); // 80155930
  c->r[15]=R32(c->r[3]+0x000000C0u); // 80155934
  W32(c->r[3]+0x00000480u,c->r[0]); // 80155938
  c->r[0]=R32(c->r[1]+0x00000020u); // 8015593C
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 80155940
  c->r[15]=R32(c->r[3]+0x000000C8u); // 80155944
  W32(c->r[3]+0x00000484u,c->r[0]); // 80155948
  c->r[0]=R32(c->r[1]+0x00000024u); // 8015594C
  W32(c->r[1]+0x00000030u,c->r[15]); // 80155950
  c->r[15]=R32(c->r[3]+0x000000CCu); // 80155954
  W32(c->r[3]+0x00000488u,c->r[0]); // 80155958
  c->r[0]=R32(c->r[1]+0x00000028u); // 8015595C
  W32(c->r[1]+0x00000034u,c->r[15]); // 80155960
  c->r[15]=R32(c->r[3]+0x000000D0u); // 80155964
  W32(c->r[3]+0x0000048Cu,c->r[0]); // 80155968
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 8015596C
  W32(c->r[1]+0x00000038u,c->r[15]); // 80155970
  c->r[15]=R32(c->r[3]+0x000000D4u); // 80155974
  W32(c->r[3]+0x00000490u,c->r[0]); // 80155978
  c->r[0]=0u+0x00000000u; // 8015597C
  c->r[16]=R32(c->r[3]+0x00000018u); // 80155980
  W32(c->r[3]+0x00000494u,c->r[0]); // 80155984
  c->r[0]=R32(c->r[1]+0x00000030u); // 80155988
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 8015598C
  c->r[15]=R32(c->r[3]+0x000000D8u); // 80155990
  W32(c->r[3]+0x00000498u,c->r[0]); // 80155994
  c->r[0]=R32(c->r[1]+0x00000034u); // 80155998
  W32(c->r[1]+0x00000040u,c->r[15]); // 8015599C
  c->r[15]=R32(c->r[3]+0x000000DCu); // 801559A0
  W32(c->r[3]+0x0000049Cu,c->r[0]); // 801559A4
  c->r[0]=R32(c->r[1]+0x00000038u); // 801559A8
  W32(c->r[1]+0x00000044u,c->r[15]); // 801559AC
  c->r[15]=R32(c->r[3]+0x000000E0u); // 801559B0
  W32(c->r[3]+0x000004A0u,c->r[0]); // 801559B4
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 801559B8
  W32(c->r[1]+0x00000048u,c->r[15]); // 801559BC
  c->r[15]=R32(c->r[3]+0x000000E4u); // 801559C0
  W32(c->r[3]+0x000004A4u,c->r[0]); // 801559C4
  c->r[0]=R32(c->r[1]+0x00000040u); // 801559C8
  W32(c->r[1]+0x0000004Cu,c->r[15]); // 801559CC
  c->r[15]=0u+0x00000000u; // 801559D0
  c->r[17]=R32(c->r[3]+0x0000001Cu); // 801559D4
  W32(c->r[3]+0x000004A8u,c->r[0]); // 801559D8
  c->r[0]=R32(c->r[1]+0x00000044u); // 801559DC
  W32(c->r[3]+0x000004ACu,c->r[0]); // 801559E0
  c->r[0]=R32(c->r[1]+0x00000048u); // 801559E4
  c->r[18]=R32(c->r[3]+0x00000020u); // 801559E8
  c->r[19]=R32(c->r[3]+0x00000024u); // 801559EC
  c->r[20]=R32(c->r[3]+0x00000028u); // 801559F0
  c->r[21]=R32(c->r[3]+0x0000002Cu); // 801559F4
  c->r[22]=R32(c->r[3]+0x00000030u); // 801559F8
  c->r[23]=R32(c->r[3]+0x00000034u); // 801559FC
  {uint32_t ea=c->r[3]+0x00000038u; c->f[5]=c->ps1[5]=RF32(ea);} // 80155A00
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 80155A04
  {uint32_t ea=c->r[3]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 80155A08
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 80155A0C
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 80155A10
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80155A14
  c->r[24]=R32(c->r[3]+0x00000050u); // 80155A18
  c->r[25]=R32(c->r[3]+0x00000054u); // 80155A1C
  c->r[26]=R32(c->r[3]+0x00000058u); // 80155A20
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 80155A24
  c->r[28]=R32(c->r[3]+0x00000060u); // 80155A28
  c->r[29]=R32(c->r[3]+0x00000064u); // 80155A2C
  c->r[30]=R32(c->r[3]+0x00000068u); // 80155A30
  c->r[12]=R32(c->r[3]+0x0000006Cu); // 80155A34
  c->r[11]=R32(c->r[3]+0x00000070u); // 80155A38
  c->r[10]=R32(c->r[3]+0x00000074u); // 80155A3C
  c->r[9]=R32(c->r[3]+0x00000078u); // 80155A40
  c->r[8]=R32(c->r[3]+0x0000007Cu); // 80155A44
  c->r[7]=R32(c->r[3]+0x00000080u); // 80155A48
  c->r[6]=R32(c->r[3]+0x00000084u); // 80155A4C
  c->r[5]=R32(c->r[3]+0x00000088u); // 80155A50
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 80155A54
  c->r[14]=R32(c->r[3]+0x00000094u); // 80155A58
  W32(c->r[3]+0x000004B0u,c->r[0]); // 80155A5C
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80155A60
  W32(c->r[3]+0x000000C4u,c->r[15]); // 80155A64
  W32(c->r[3]+0x000003E8u,c->r[16]); // 80155A68
  W32(c->r[3]+0x000003ECu,c->r[17]); // 80155A6C
  W32(c->r[3]+0x000003F0u,c->r[18]); // 80155A70
  W32(c->r[3]+0x000003F4u,c->r[19]); // 80155A74
  W32(c->r[3]+0x000003F8u,c->r[20]); // 80155A78
  W32(c->r[3]+0x000003FCu,c->r[21]); // 80155A7C
  W32(c->r[3]+0x00000400u,c->r[22]); // 80155A80
  W32(c->r[3]+0x00000404u,c->r[23]); // 80155A84
  {uint32_t ea=c->r[3]+0x00000408u; WF32(ea,c->f[5]);} // 80155A88
  {uint32_t ea=c->r[3]+0x0000040Cu; WF32(ea,c->f[4]);} // 80155A8C
  {uint32_t ea=c->r[3]+0x00000410u; WF32(ea,c->f[3]);} // 80155A90
  {uint32_t ea=c->r[3]+0x00000414u; WF32(ea,c->f[2]);} // 80155A94
  {uint32_t ea=c->r[3]+0x00000418u; WF32(ea,c->f[1]);} // 80155A98
  {uint32_t ea=c->r[3]+0x0000041Cu; WF32(ea,c->f[0]);} // 80155A9C
  W32(c->r[3]+0x00000420u,c->r[24]); // 80155AA0
  W32(c->r[3]+0x00000424u,c->r[25]); // 80155AA4
  W32(c->r[3]+0x00000428u,c->r[26]); // 80155AA8
  W32(c->r[3]+0x0000042Cu,c->r[27]); // 80155AAC
  W32(c->r[3]+0x00000430u,c->r[28]); // 80155AB0
  W32(c->r[3]+0x00000434u,c->r[29]); // 80155AB4
  W32(c->r[3]+0x00000438u,c->r[30]); // 80155AB8
  W32(c->r[3]+0x0000043Cu,c->r[12]); // 80155ABC
  W32(c->r[3]+0x00000440u,c->r[11]); // 80155AC0
  W32(c->r[3]+0x00000444u,c->r[10]); // 80155AC4
  W32(c->r[3]+0x00000448u,c->r[9]); // 80155AC8
  W32(c->r[3]+0x0000044Cu,c->r[8]); // 80155ACC
  W32(c->r[3]+0x00000450u,c->r[7]); // 80155AD0
  W32(c->r[3]+0x00000454u,c->r[6]); // 80155AD4
  W32(c->r[3]+0x00000458u,c->r[5]); // 80155AD8
  W32(c->r[3]+0x0000045Cu,c->r[4]); // 80155ADC
  W32(c->r[3]+0x00000464u,c->r[14]); // 80155AE0
  W32(c->r[3]+0x000004B4u,c->r[0]); // 80155AE4
  c->r[14]=R32(c->r[3]+0x000000E8u); // 80155AE8
  c->r[0]=0u+0x00000020u; // 80155AEC
  c->r[12]=R32(c->r[3]+0x000000ECu); // 80155AF0
  c->r[6]=c->r[3]+0x000004D4u; // 80155AF4
  c->r[11]=R32(c->r[3]+0x000000F0u); // 80155AF8
  c->r[5]=c->r[3]+0x00000104u; // 80155AFC
  c->r[10]=R32(c->r[3]+0x000000F4u); // 80155B00
  c->r[9]=R32(c->r[3]+0x000000F8u); // 80155B04
  c->r[8]=R32(c->r[3]+0x000000FCu); // 80155B08
  c->r[7]=R32(c->r[3]+0x00000100u); // 80155B0C
  c->r[4]=R32(c->r[3]+0x00000104u); // 80155B10
  W32(c->r[3]+0x000004B8u,c->r[14]); // 80155B14
  W32(c->r[3]+0x000004BCu,c->r[12]); // 80155B18
  W32(c->r[3]+0x000004C0u,c->r[11]); // 80155B1C
  W32(c->r[3]+0x000004C4u,c->r[10]); // 80155B20
  W32(c->r[3]+0x000004C8u,c->r[9]); // 80155B24
  W32(c->r[3]+0x000004CCu,c->r[8]); // 80155B28
  W32(c->r[3]+0x000004D0u,c->r[7]); // 80155B2C
  W32(c->r[3]+0x000004D4u,c->r[4]); // 80155B30
  c->ctr=c->r[0]; // 80155B34
L_80155B38:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80155B38
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80155B3C
  W32(c->r[6]+0x00000004u,c->r[4]); // 80155B40
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80155B44
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80155B38; } // 80155B48
  c->r[0]=0u+0x00000020u; // 80155B4C
  c->r[6]=c->r[3]+0x000005D4u; // 80155B50
  c->r[5]=c->r[3]+0x00000204u; // 80155B54
  c->ctr=c->r[0]; // 80155B58
L_80155B5C:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80155B5C
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80155B60
  W32(c->r[6]+0x00000004u,c->r[4]); // 80155B64
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80155B68
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80155B5C; } // 80155B6C
  c->r[29]=R32(c->r[3]+0x00000370u); // 80155B70
  W32(c->r[1]+0x000000A8u,c->r[29]); // 80155B74
  c->r[29]=R8(c->r[3]+0x00000378u); // 80155B78
  c->r[0]=R32(c->r[3]+0x00000368u); // 80155B7C
  W32(c->r[1]+0x00000050u,c->r[29]); // 80155B80
  c->r[29]=R8(c->r[3]+0x00000379u); // 80155B84
  W32(c->r[1]+0x00000054u,c->r[29]); // 80155B88
  c->r[29]=R8(c->r[3]+0x0000037Bu); // 80155B8C
  W32(c->r[3]+0x00000738u,c->r[0]); // 80155B90
  c->r[0]=R32(c->r[1]+0x000000A8u); // 80155B94
  W32(c->r[1]+0x00000058u,c->r[29]); // 80155B98
  c->r[29]=R32(c->r[3]+0x0000037Cu); // 80155B9C
  W32(c->r[3]+0x00000740u,c->r[0]); // 80155BA0
  c->r[0]=R32(c->r[1]+0x00000050u); // 80155BA4
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 80155BA8
  c->r[29]=R32(c->r[3]+0x00000380u); // 80155BAC
  W8(c->r[3]+0x00000748u,c->r[0]); // 80155BB0
  c->r[0]=R32(c->r[1]+0x00000054u); // 80155BB4
  W32(c->r[1]+0x00000060u,c->r[29]); // 80155BB8
  c->r[29]=R32(c->r[3]+0x00000384u); // 80155BBC
  W8(c->r[3]+0x00000749u,c->r[0]); // 80155BC0
  c->r[0]=R32(c->r[1]+0x00000058u); // 80155BC4
  W32(c->r[1]+0x00000064u,c->r[29]); // 80155BC8
  c->r[29]=R32(c->r[3]+0x00000388u); // 80155BCC
  W8(c->r[3]+0x0000074Bu,c->r[0]); // 80155BD0
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 80155BD4
  W32(c->r[1]+0x00000068u,c->r[29]); // 80155BD8
  c->r[29]=R32(c->r[3]+0x0000038Cu); // 80155BDC
  W32(c->r[3]+0x0000074Cu,c->r[0]); // 80155BE0
  c->r[0]=R32(c->r[1]+0x00000060u); // 80155BE4
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 80155BE8
  c->r[29]=R32(c->r[3]+0x00000390u); // 80155BEC
  W32(c->r[3]+0x00000750u,c->r[0]); // 80155BF0
  c->r[0]=R32(c->r[1]+0x00000064u); // 80155BF4
  W32(c->r[1]+0x00000070u,c->r[29]); // 80155BF8
  c->r[29]=R32(c->r[3]+0x00000398u); // 80155BFC
  W32(c->r[3]+0x00000754u,c->r[0]); // 80155C00
  c->r[0]=R32(c->r[1]+0x00000068u); // 80155C04
  W32(c->r[1]+0x00000074u,c->r[29]); // 80155C08
  c->r[29]=R8(c->r[3]+0x0000039Cu); // 80155C0C
  W32(c->r[3]+0x00000758u,c->r[0]); // 80155C10
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 80155C14
  W32(c->r[1]+0x00000078u,c->r[29]); // 80155C18
  c->r[29]=R16(c->r[3]+0x0000039Du); // 80155C1C
  W32(c->r[3]+0x0000075Cu,c->r[0]); // 80155C20
  c->r[0]=R32(c->r[1]+0x00000070u); // 80155C24
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 80155C28
  c->r[29]=R8(c->r[3]+0x0000039Fu); // 80155C2C
  W32(c->r[3]+0x00000760u,c->r[0]); // 80155C30
  c->r[0]=R32(c->r[1]+0x00000074u); // 80155C34
  W32(c->r[1]+0x00000080u,c->r[29]); // 80155C38
  c->r[29]=R32(c->r[3]+0x000003A0u); // 80155C3C
  W32(c->r[3]+0x00000768u,c->r[0]); // 80155C40
  c->r[0]=R32(c->r[1]+0x00000078u); // 80155C44
  W32(c->r[1]+0x00000084u,c->r[29]); // 80155C48
  c->r[29]=R32(c->r[3]+0x000003A4u); // 80155C4C
  W8(c->r[3]+0x0000076Cu,c->r[0]); // 80155C50
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 80155C54
  W32(c->r[1]+0x00000088u,c->r[29]); // 80155C58
  c->r[29]=R32(c->r[3]+0x000003A8u); // 80155C5C
  W16(c->r[3]+0x0000076Du,c->r[0]); // 80155C60
  c->r[0]=R32(c->r[1]+0x00000080u); // 80155C64
  W32(c->r[1]+0x0000008Cu,c->r[29]); // 80155C68
  c->r[29]=R32(c->r[3]+0x000003ACu); // 80155C6C
  W8(c->r[3]+0x0000076Fu,c->r[0]); // 80155C70
  c->r[0]=R32(c->r[1]+0x00000084u); // 80155C74
  W32(c->r[1]+0x00000090u,c->r[29]); // 80155C78
  c->r[29]=R32(c->r[3]+0x000003B0u); // 80155C7C
  W32(c->r[3]+0x00000770u,c->r[0]); // 80155C80
  c->r[0]=R32(c->r[1]+0x00000088u); // 80155C84
  W32(c->r[1]+0x00000094u,c->r[29]); // 80155C88
  c->r[29]=R32(c->r[3]+0x000003B4u); // 80155C8C
  W32(c->r[3]+0x00000774u,c->r[0]); // 80155C90
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 80155C94
  W32(c->r[1]+0x00000098u,c->r[29]); // 80155C98
  c->r[29]=R32(c->r[3]+0x000003B8u); // 80155C9C
  W32(c->r[3]+0x00000778u,c->r[0]); // 80155CA0
  c->r[0]=R32(c->r[1]+0x00000090u); // 80155CA4
  W32(c->r[1]+0x0000009Cu,c->r[29]); // 80155CA8
  c->r[29]=R32(c->r[3]+0x000003BCu); // 80155CAC
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80155CB0
  c->r[0]=R32(c->r[1]+0x00000094u); // 80155CB4
  W32(c->r[3]+0x00000780u,c->r[0]); // 80155CB8
  c->r[0]=R32(c->r[1]+0x00000098u); // 80155CBC
  c->r[28]=R32(c->r[3]+0x00000308u); // 80155CC0
  c->r[27]=R32(c->r[3]+0x0000030Cu); // 80155CC4
  c->r[26]=R32(c->r[3]+0x00000310u); // 80155CC8
  c->r[25]=R32(c->r[3]+0x00000314u); // 80155CCC
  c->r[24]=R32(c->r[3]+0x00000318u); // 80155CD0
  c->r[23]=R32(c->r[3]+0x0000031Cu); // 80155CD4
  c->r[22]=R32(c->r[3]+0x00000320u); // 80155CD8
  c->r[21]=R32(c->r[3]+0x00000324u); // 80155CDC
  c->r[20]=R32(c->r[3]+0x00000328u); // 80155CE0
  c->r[19]=R32(c->r[3]+0x0000032Cu); // 80155CE4
  c->r[18]=R32(c->r[3]+0x00000330u); // 80155CE8
  c->r[17]=R32(c->r[3]+0x00000334u); // 80155CEC
  c->r[16]=R32(c->r[3]+0x00000338u); // 80155CF0
  c->r[15]=R32(c->r[3]+0x0000033Cu); // 80155CF4
  c->r[14]=R32(c->r[3]+0x00000340u); // 80155CF8
  c->r[12]=R32(c->r[3]+0x00000344u); // 80155CFC
  c->r[11]=R32(c->r[3]+0x00000348u); // 80155D00
  c->r[10]=R32(c->r[3]+0x0000034Cu); // 80155D04
  c->r[9]=R32(c->r[3]+0x00000350u); // 80155D08
  c->r[8]=R32(c->r[3]+0x00000354u); // 80155D0C
  c->r[7]=R32(c->r[3]+0x00000358u); // 80155D10
  c->r[6]=R32(c->r[3]+0x0000035Cu); // 80155D14
  c->r[5]=R32(c->r[3]+0x00000360u); // 80155D18
  c->r[4]=R32(c->r[3]+0x00000364u); // 80155D1C
  c->r[30]=R32(c->r[3]+0x0000036Cu); // 80155D20
  {uint32_t ea=c->r[3]+0x00000374u; c->f[1]=c->ps1[1]=RF32(ea);} // 80155D24
  {uint32_t ea=c->r[3]+0x00000394u; c->f[0]=c->ps1[0]=RF32(ea);} // 80155D28
  W32(c->r[3]+0x00000784u,c->r[0]); // 80155D2C
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 80155D30
  W32(c->r[3]+0x00000788u,c->r[0]); // 80155D34
  c->r[0]=c->r[29]|c->r[29]; // 80155D38
  W32(c->r[1]+0x000000A0u,c->r[29]); // 80155D3C
  W32(c->r[3]+0x000006D8u,c->r[28]); // 80155D40
  W32(c->r[3]+0x000006DCu,c->r[27]); // 80155D44
  W32(c->r[3]+0x000006E0u,c->r[26]); // 80155D48
  W32(c->r[3]+0x000006E4u,c->r[25]); // 80155D4C
  W32(c->r[3]+0x000006E8u,c->r[24]); // 80155D50
  W32(c->r[3]+0x000006ECu,c->r[23]); // 80155D54
  W32(c->r[3]+0x000006F0u,c->r[22]); // 80155D58
  W32(c->r[3]+0x000006F4u,c->r[21]); // 80155D5C
  W32(c->r[3]+0x000006F8u,c->r[20]); // 80155D60
  W32(c->r[3]+0x000006FCu,c->r[19]); // 80155D64
  W32(c->r[3]+0x00000700u,c->r[18]); // 80155D68
  W32(c->r[3]+0x00000704u,c->r[17]); // 80155D6C
  W32(c->r[3]+0x00000708u,c->r[16]); // 80155D70
  W32(c->r[3]+0x0000070Cu,c->r[15]); // 80155D74
  W32(c->r[3]+0x00000710u,c->r[14]); // 80155D78
  W32(c->r[3]+0x00000714u,c->r[12]); // 80155D7C
  W32(c->r[3]+0x00000718u,c->r[11]); // 80155D80
  W32(c->r[3]+0x0000071Cu,c->r[10]); // 80155D84
  W32(c->r[3]+0x00000720u,c->r[9]); // 80155D88
  W32(c->r[3]+0x00000724u,c->r[8]); // 80155D8C
  W32(c->r[3]+0x00000728u,c->r[7]); // 80155D90
  W32(c->r[3]+0x0000072Cu,c->r[6]); // 80155D94
  W32(c->r[3]+0x00000730u,c->r[5]); // 80155D98
  W32(c->r[3]+0x00000734u,c->r[4]); // 80155D9C
  W32(c->r[3]+0x0000073Cu,c->r[30]); // 80155DA0
  {uint32_t ea=c->r[3]+0x00000744u; WF32(ea,c->f[1]);} // 80155DA4
  {uint32_t ea=c->r[3]+0x00000764u; WF32(ea,c->f[0]);} // 80155DA8
  W32(c->r[3]+0x0000078Cu,c->r[0]); // 80155DAC
  c->r[0]=R32(c->r[3]+0x000003D8u); // 80155DB0
  c->r[14]=0u+0x00000001u; // 80155DB4
  W32(c->r[3]+0x000007A8u,c->r[0]); // 80155DB8
  c->r[10]=R32(c->r[3]+0x000003C0u); // 80155DBC
  c->r[9]=R32(c->r[3]+0x000003C4u); // 80155DC0
  c->r[8]=R32(c->r[3]+0x000003C8u); // 80155DC4
  c->r[7]=R32(c->r[3]+0x000003CCu); // 80155DC8
  c->r[6]=R32(c->r[3]+0x000003D0u); // 80155DCC
  c->r[5]=R32(c->r[3]+0x000003D4u); // 80155DD0
  c->r[4]=R32(c->r[3]+0x000003D9u); // 80155DD4
  c->r[0]=R32(c->r[3]+0x000003DDu); // 80155DD8
  W32(c->r[3]+0x00000790u,c->r[10]); // 80155DDC
  W32(c->r[3]+0x00000794u,c->r[9]); // 80155DE0
  W32(c->r[3]+0x00000798u,c->r[8]); // 80155DE4
  W32(c->r[3]+0x0000079Cu,c->r[7]); // 80155DE8
  W32(c->r[3]+0x000007A0u,c->r[6]); // 80155DEC
  W32(c->r[3]+0x000007A4u,c->r[5]); // 80155DF0
  W32(c->r[3]+0x000007A9u,c->r[4]); // 80155DF4
  W32(c->r[3]+0x000007ADu,c->r[0]); // 80155DF8
  W8(c->r[3]+0x0000074Au,c->r[14]); // 80155DFC
  c->r[3]=R32(c->r[3]+0x00000014u); // 80155E00
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155E04
  c->r[12]=R32(c->r[12]+0x00000020u); // 80155E08
  c->ctr=c->r[12]; // 80155E0C
  if (true) { c->lr=0x80155E14u; dispatch(c,c->ctr); } // 80155E10
  W32(c->r[31]+0x00000770u,c->r[3]); // 80155E14
  c->r[4]=c->r[31]+0x000003E8u; // 80155E18
  c->r[3]=R32(c->r[31]+0x000007CCu); // 80155E1C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155E20
  c->r[12]=R32(c->r[12]+0x00000018u); // 80155E24
  c->ctr=c->r[12]; // 80155E28
  if (true) { c->lr=0x80155E30u; dispatch(c,c->ctr); } // 80155E2C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80155E30
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155E34
  c->r[12]=R32(c->r[12]+0x00000014u); // 80155E38
  c->ctr=c->r[12]; // 80155E3C
  if (true) { c->lr=0x80155E44u; dispatch(c,c->ctr); } // 80155E40
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80155E44
  c->r[12]=R32(c->r[12]+0x00000030u); // 80155E48
  c->ctr=c->r[12]; // 80155E4C
  if (true) { c->lr=0x80155E54u; dispatch(c,c->ctr); } // 80155E50
  cmps(c,0,(int32_t)c->r[3],0); // 80155E54
  if (crb(c,2)) { goto L_80155E60; } // 80155E58
  W8(c->r[31]+0x00000749u,c->r[14]); // 80155E5C
L_80155E60:;
  c->r[3]=R32(c->r[13]+0xFFFFA1ACu); // 80155E60
  c->r[3]=c->r[3]+0x00000001u; // 80155E64
  W32(c->r[13]+0xFFFFA1ACu,c->r[3]); // 80155E68
  c->r[0]=c->r[3]+0x00010000u; // 80155E6C
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80155E70
  if (!crb(c,2)) { goto L_80155E80; } // 80155E74
  c->r[3]=c->r[3]+0x00000001u; // 80155E78
  W32(c->r[13]+0xFFFFA1ACu,c->r[3]); // 80155E7C
L_80155E80:;
  W32(c->r[31]+0x000007C8u,c->r[3]); // 80155E80
  c->r[3]=R32(c->r[31]+0x00000014u); // 80155E84
  c->r[12]=R32(c->r[3]+0x00000000u); // 80155E88
  c->r[12]=R32(c->r[12]+0x00000014u); // 80155E8C
  c->ctr=c->r[12]; // 80155E90
  if (true) { c->lr=0x80155E98u; dispatch(c,c->ctr); } // 80155E94
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80155E98
  c->r[4]=c->r[31]+0x000003E8u; // 80155E9C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80155EA0
  c->ctr=c->r[12]; // 80155EA4
  if (true) { c->lr=0x80155EACu; dispatch(c,c->ctr); } // 80155EA8
  c->r[0]=0u+0x00000000u; // 80155EAC
  W32(c->r[31]+0x00000794u,c->r[0]); // 80155EB0
  c->r[3]=R32(c->r[31]+0x000007F0u); // 80155EB4
L_80155EB8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80155EB8
  if (crb(c,2)) { goto L_80155EE0; } // 80155EBC
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80155EC0
  c->r[4]=0u+0x00000000u; // 80155EC4
  c->r[14]=R32(c->r[3]+0x00000004u); // 80155EC8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80155ECC
  c->ctr=c->r[12]; // 80155ED0
  if (true) { c->lr=0x80155ED8u; dispatch(c,c->ctr); } // 80155ED4
  c->r[3]=c->r[14]|c->r[14]; // 80155ED8
  IRQCHK(c); goto L_80155EB8; // 80155EDC
L_80155EE0:;
  c->r[3]=R32(c->r[31]+0x000007BCu); // 80155EE0
  c->r[6]=c->r[31]+0x000007D8u; // 80155EE4
  c->r[4]=R32(c->r[31]+0x000007C0u); // 80155EE8
  c->r[7]=c->r[31]+0x000007DCu; // 80155EEC
  c->r[5]=R32(c->r[31]+0x000007C4u); // 80155EF0
  c->lr=0x80155EF8u; f_80175408(c); // 80155EF4
  c->r[3]=0u+0x00000001u; // 80155EF8
  c->r[0]=0u+0x00000000u; // 80155EFC
  W32(c->r[31]+0x000007B8u,c->r[3]); // 80155F00
  W32(c->r[31]+0x000007D0u,c->r[0]); // 80155F04
  W32(c->r[31]+0x000007D4u,c->r[3]); // 80155F08
L_80155F0C:;
  c->r[11]=c->r[1]+0x00000100u; // 80155F0C
  c->lr=0x80155F14u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80155F10
  c->r[0]=R32(c->r[1]+0x00000104u); // 80155F14
  c->lr=c->r[0]; // 80155F18
  c->r[1]=c->r[1]+0x00000100u; // 80155F1C
  return; // 80155F20
}

// IsSequence__10CriAuSynthFv
void f_80155F24(Ctx* __restrict c) {
  trace_call(0x80155F24u);
  c->r[3]=0u+0x00000000u; // 80155F24
  return; // 80155F28
}

// Update__14CriAuPlayerLocFR8CriError
void f_80155F2C(Ctx* __restrict c) {
  trace_call(0x80155F2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFF00u; W32(ea,c->r[1]); c->r[1]=ea;} // 80155F2C
  c->r[0]=c->lr; // 80155F30
  W32(c->r[1]+0x00000104u,c->r[0]); // 80155F34
  c->r[11]=c->r[1]+0x00000100u; // 80155F38
  c->lr=0x80155F40u; { W32(c->r[11]+0xFFFFFFB8u,c->r[14]); W32(c->r[11]+0xFFFFFFBCu,c->r[15]); W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80155F3C
  c->r[0]=0u+0x00000000u; // 80155F40
  W32(c->r[4]+0x00000000u,c->r[0]); // 80155F44
  c->r[31]=c->r[3]|c->r[3]; // 80155F48
  c->r[0]=R32(c->r[3]+0x00000014u); // 80155F4C
  cmps(c,0,(int32_t)c->r[0],0); // 80155F50
  if (!crb(c,2)) { goto L_80155F70; } // 80155F54
  c->r[4]=0u+0x802D0000u; // 80155F58
  c->r[3]=0u+0x00000001u; // 80155F5C
  c->r[4]=c->r[4]+0xFFFFE788u; // 80155F60
  c->r[4]=c->r[4]+0x000001D9u; // 80155F64
  c->lr=0x80155F6Cu; f_80179434(c); // 80155F68
  goto L_80156568; // 80155F6C
L_80155F70:;
  c->r[15]=R32(c->r[3]+0x00000098u); // 80155F70
  W32(c->r[1]+0x000000A4u,c->r[15]); // 80155F74
  c->r[15]=R32(c->r[3]+0x0000009Cu); // 80155F78
  c->r[0]=R32(c->r[3]+0x00000090u); // 80155F7C
  W32(c->r[1]+0x00000008u,c->r[15]); // 80155F80
  c->r[15]=R32(c->r[3]+0x000000A0u); // 80155F84
  W32(c->r[1]+0x0000000Cu,c->r[15]); // 80155F88
  c->r[15]=R32(c->r[3]+0x000000A4u); // 80155F8C
  W32(c->r[3]+0x00000460u,c->r[0]); // 80155F90
  c->r[0]=R32(c->r[1]+0x000000A4u); // 80155F94
  W32(c->r[1]+0x00000010u,c->r[15]); // 80155F98
  c->r[15]=R32(c->r[3]+0x000000A8u); // 80155F9C
  W32(c->r[3]+0x00000468u,c->r[0]); // 80155FA0
  c->r[0]=R32(c->r[1]+0x00000008u); // 80155FA4
  W32(c->r[1]+0x00000014u,c->r[15]); // 80155FA8
  c->r[15]=R32(c->r[3]+0x000000ACu); // 80155FAC
  W32(c->r[3]+0x0000046Cu,c->r[0]); // 80155FB0
  c->r[0]=R32(c->r[1]+0x0000000Cu); // 80155FB4
  W32(c->r[1]+0x00000018u,c->r[15]); // 80155FB8
  c->r[15]=R32(c->r[3]+0x000000B0u); // 80155FBC
  W32(c->r[3]+0x00000470u,c->r[0]); // 80155FC0
  c->r[0]=R32(c->r[1]+0x00000010u); // 80155FC4
  W32(c->r[1]+0x0000001Cu,c->r[15]); // 80155FC8
  c->r[15]=R32(c->r[3]+0x000000B4u); // 80155FCC
  W32(c->r[3]+0x00000474u,c->r[0]); // 80155FD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80155FD4
  W32(c->r[1]+0x00000020u,c->r[15]); // 80155FD8
  c->r[15]=R32(c->r[3]+0x000000B8u); // 80155FDC
  W32(c->r[3]+0x00000478u,c->r[0]); // 80155FE0
  c->r[0]=R32(c->r[1]+0x00000018u); // 80155FE4
  W32(c->r[1]+0x00000024u,c->r[15]); // 80155FE8
  c->r[15]=R32(c->r[3]+0x000000BCu); // 80155FEC
  W32(c->r[3]+0x0000047Cu,c->r[0]); // 80155FF0
  c->r[0]=R32(c->r[1]+0x0000001Cu); // 80155FF4
  W32(c->r[1]+0x00000028u,c->r[15]); // 80155FF8
  c->r[15]=R32(c->r[3]+0x000000C0u); // 80155FFC
  W32(c->r[3]+0x00000480u,c->r[0]); // 80156000
  c->r[0]=R32(c->r[1]+0x00000020u); // 80156004
  W32(c->r[1]+0x0000002Cu,c->r[15]); // 80156008
  c->r[15]=R32(c->r[3]+0x000000C8u); // 8015600C
  W32(c->r[3]+0x00000484u,c->r[0]); // 80156010
  c->r[0]=R32(c->r[1]+0x00000024u); // 80156014
  W32(c->r[1]+0x00000030u,c->r[15]); // 80156018
  c->r[15]=R32(c->r[3]+0x000000CCu); // 8015601C
  W32(c->r[3]+0x00000488u,c->r[0]); // 80156020
  c->r[0]=R32(c->r[1]+0x00000028u); // 80156024
  W32(c->r[1]+0x00000034u,c->r[15]); // 80156028
  c->r[15]=R32(c->r[3]+0x000000D0u); // 8015602C
  W32(c->r[3]+0x0000048Cu,c->r[0]); // 80156030
  c->r[0]=R32(c->r[1]+0x0000002Cu); // 80156034
  W32(c->r[1]+0x00000038u,c->r[15]); // 80156038
  c->r[15]=R32(c->r[3]+0x000000D4u); // 8015603C
  W32(c->r[3]+0x00000490u,c->r[0]); // 80156040
  c->r[0]=0u+0x00000000u; // 80156044
  c->r[16]=R32(c->r[3]+0x00000018u); // 80156048
  W32(c->r[3]+0x00000494u,c->r[0]); // 8015604C
  c->r[0]=R32(c->r[1]+0x00000030u); // 80156050
  W32(c->r[1]+0x0000003Cu,c->r[15]); // 80156054
  c->r[15]=R32(c->r[3]+0x000000D8u); // 80156058
  W32(c->r[3]+0x00000498u,c->r[0]); // 8015605C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80156060
  W32(c->r[1]+0x00000040u,c->r[15]); // 80156064
  c->r[15]=R32(c->r[3]+0x000000DCu); // 80156068
  W32(c->r[3]+0x0000049Cu,c->r[0]); // 8015606C
  c->r[0]=R32(c->r[1]+0x00000038u); // 80156070
  W32(c->r[1]+0x00000044u,c->r[15]); // 80156074
  c->r[15]=R32(c->r[3]+0x000000E0u); // 80156078
  W32(c->r[3]+0x000004A0u,c->r[0]); // 8015607C
  c->r[0]=R32(c->r[1]+0x0000003Cu); // 80156080
  W32(c->r[1]+0x00000048u,c->r[15]); // 80156084
  c->r[15]=R32(c->r[3]+0x000000E4u); // 80156088
  W32(c->r[3]+0x000004A4u,c->r[0]); // 8015608C
  c->r[0]=R32(c->r[1]+0x00000040u); // 80156090
  W32(c->r[1]+0x0000004Cu,c->r[15]); // 80156094
  c->r[15]=0u+0x00000000u; // 80156098
  c->r[17]=R32(c->r[3]+0x0000001Cu); // 8015609C
  W32(c->r[3]+0x000004A8u,c->r[0]); // 801560A0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801560A4
  W32(c->r[3]+0x000004ACu,c->r[0]); // 801560A8
  c->r[0]=R32(c->r[1]+0x00000048u); // 801560AC
  c->r[18]=R32(c->r[3]+0x00000020u); // 801560B0
  c->r[19]=R32(c->r[3]+0x00000024u); // 801560B4
  c->r[20]=R32(c->r[3]+0x00000028u); // 801560B8
  c->r[21]=R32(c->r[3]+0x0000002Cu); // 801560BC
  c->r[22]=R32(c->r[3]+0x00000030u); // 801560C0
  c->r[23]=R32(c->r[3]+0x00000034u); // 801560C4
  {uint32_t ea=c->r[3]+0x00000038u; c->f[5]=c->ps1[5]=RF32(ea);} // 801560C8
  {uint32_t ea=c->r[3]+0x0000003Cu; c->f[4]=c->ps1[4]=RF32(ea);} // 801560CC
  {uint32_t ea=c->r[3]+0x00000040u; c->f[3]=c->ps1[3]=RF32(ea);} // 801560D0
  {uint32_t ea=c->r[3]+0x00000044u; c->f[2]=c->ps1[2]=RF32(ea);} // 801560D4
  {uint32_t ea=c->r[3]+0x00000048u; c->f[1]=c->ps1[1]=RF32(ea);} // 801560D8
  {uint32_t ea=c->r[3]+0x0000004Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801560DC
  c->r[24]=R32(c->r[3]+0x00000050u); // 801560E0
  c->r[25]=R32(c->r[3]+0x00000054u); // 801560E4
  c->r[26]=R32(c->r[3]+0x00000058u); // 801560E8
  c->r[27]=R32(c->r[3]+0x0000005Cu); // 801560EC
  c->r[28]=R32(c->r[3]+0x00000060u); // 801560F0
  c->r[29]=R32(c->r[3]+0x00000064u); // 801560F4
  c->r[30]=R32(c->r[3]+0x00000068u); // 801560F8
  c->r[12]=R32(c->r[3]+0x0000006Cu); // 801560FC
  c->r[11]=R32(c->r[3]+0x00000070u); // 80156100
  c->r[10]=R32(c->r[3]+0x00000074u); // 80156104
  c->r[9]=R32(c->r[3]+0x00000078u); // 80156108
  c->r[8]=R32(c->r[3]+0x0000007Cu); // 8015610C
  c->r[7]=R32(c->r[3]+0x00000080u); // 80156110
  c->r[6]=R32(c->r[3]+0x00000084u); // 80156114
  c->r[5]=R32(c->r[3]+0x00000088u); // 80156118
  c->r[4]=R32(c->r[3]+0x0000008Cu); // 8015611C
  c->r[14]=R32(c->r[3]+0x00000094u); // 80156120
  W32(c->r[3]+0x000004B0u,c->r[0]); // 80156124
  c->r[0]=R32(c->r[1]+0x0000004Cu); // 80156128
  W32(c->r[3]+0x000000C4u,c->r[15]); // 8015612C
  W32(c->r[3]+0x000003E8u,c->r[16]); // 80156130
  W32(c->r[3]+0x000003ECu,c->r[17]); // 80156134
  W32(c->r[3]+0x000003F0u,c->r[18]); // 80156138
  W32(c->r[3]+0x000003F4u,c->r[19]); // 8015613C
  W32(c->r[3]+0x000003F8u,c->r[20]); // 80156140
  W32(c->r[3]+0x000003FCu,c->r[21]); // 80156144
  W32(c->r[3]+0x00000400u,c->r[22]); // 80156148
  W32(c->r[3]+0x00000404u,c->r[23]); // 8015614C
  {uint32_t ea=c->r[3]+0x00000408u; WF32(ea,c->f[5]);} // 80156150
  {uint32_t ea=c->r[3]+0x0000040Cu; WF32(ea,c->f[4]);} // 80156154
  {uint32_t ea=c->r[3]+0x00000410u; WF32(ea,c->f[3]);} // 80156158
  {uint32_t ea=c->r[3]+0x00000414u; WF32(ea,c->f[2]);} // 8015615C
  {uint32_t ea=c->r[3]+0x00000418u; WF32(ea,c->f[1]);} // 80156160
  {uint32_t ea=c->r[3]+0x0000041Cu; WF32(ea,c->f[0]);} // 80156164
  W32(c->r[3]+0x00000420u,c->r[24]); // 80156168
  W32(c->r[3]+0x00000424u,c->r[25]); // 8015616C
  W32(c->r[3]+0x00000428u,c->r[26]); // 80156170
  W32(c->r[3]+0x0000042Cu,c->r[27]); // 80156174
  W32(c->r[3]+0x00000430u,c->r[28]); // 80156178
  W32(c->r[3]+0x00000434u,c->r[29]); // 8015617C
  W32(c->r[3]+0x00000438u,c->r[30]); // 80156180
  W32(c->r[3]+0x0000043Cu,c->r[12]); // 80156184
  W32(c->r[3]+0x00000440u,c->r[11]); // 80156188
  W32(c->r[3]+0x00000444u,c->r[10]); // 8015618C
  W32(c->r[3]+0x00000448u,c->r[9]); // 80156190
  W32(c->r[3]+0x0000044Cu,c->r[8]); // 80156194
  W32(c->r[3]+0x00000450u,c->r[7]); // 80156198
  W32(c->r[3]+0x00000454u,c->r[6]); // 8015619C
  W32(c->r[3]+0x00000458u,c->r[5]); // 801561A0
  W32(c->r[3]+0x0000045Cu,c->r[4]); // 801561A4
  W32(c->r[3]+0x00000464u,c->r[14]); // 801561A8
  W32(c->r[3]+0x000004B4u,c->r[0]); // 801561AC
  c->r[14]=R32(c->r[3]+0x000000E8u); // 801561B0
  c->r[0]=0u+0x00000020u; // 801561B4
  c->r[12]=R32(c->r[3]+0x000000ECu); // 801561B8
  c->r[6]=c->r[3]+0x000004D4u; // 801561BC
  c->r[11]=R32(c->r[3]+0x000000F0u); // 801561C0
  c->r[5]=c->r[3]+0x00000104u; // 801561C4
  c->r[10]=R32(c->r[3]+0x000000F4u); // 801561C8
  c->r[9]=R32(c->r[3]+0x000000F8u); // 801561CC
  c->r[8]=R32(c->r[3]+0x000000FCu); // 801561D0
  c->r[7]=R32(c->r[3]+0x00000100u); // 801561D4
  c->r[4]=R32(c->r[3]+0x00000104u); // 801561D8
  W32(c->r[3]+0x000004B8u,c->r[14]); // 801561DC
  W32(c->r[3]+0x000004BCu,c->r[12]); // 801561E0
  W32(c->r[3]+0x000004C0u,c->r[11]); // 801561E4
  W32(c->r[3]+0x000004C4u,c->r[10]); // 801561E8
  W32(c->r[3]+0x000004C8u,c->r[9]); // 801561EC
  W32(c->r[3]+0x000004CCu,c->r[8]); // 801561F0
  W32(c->r[3]+0x000004D0u,c->r[7]); // 801561F4
  W32(c->r[3]+0x000004D4u,c->r[4]); // 801561F8
  c->ctr=c->r[0]; // 801561FC
L_80156200:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80156200
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80156204
  W32(c->r[6]+0x00000004u,c->r[4]); // 80156208
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 8015620C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80156200; } // 80156210
  c->r[0]=0u+0x00000020u; // 80156214
  c->r[6]=c->r[3]+0x000005D4u; // 80156218
  c->r[5]=c->r[3]+0x00000204u; // 8015621C
  c->ctr=c->r[0]; // 80156220
L_80156224:;
  c->r[4]=R32(c->r[5]+0x00000004u); // 80156224
  {uint32_t ea=c->r[5]+0x00000008u; c->r[0]=R32(ea); c->r[5]=ea;} // 80156228
  W32(c->r[6]+0x00000004u,c->r[4]); // 8015622C
  {uint32_t ea=c->r[6]+0x00000008u; W32(ea,c->r[0]); c->r[6]=ea;} // 80156230
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80156224; } // 80156234
  c->r[29]=R32(c->r[3]+0x00000370u); // 80156238
  W32(c->r[1]+0x000000A8u,c->r[29]); // 8015623C
  c->r[29]=R8(c->r[3]+0x00000378u); // 80156240
  c->r[0]=R32(c->r[3]+0x00000368u); // 80156244
  W32(c->r[1]+0x00000050u,c->r[29]); // 80156248
  c->r[29]=R8(c->r[3]+0x00000379u); // 8015624C
  W32(c->r[1]+0x00000054u,c->r[29]); // 80156250
  c->r[29]=R8(c->r[3]+0x0000037Bu); // 80156254
  W32(c->r[3]+0x00000738u,c->r[0]); // 80156258
  c->r[0]=R32(c->r[1]+0x000000A8u); // 8015625C
  W32(c->r[1]+0x00000058u,c->r[29]); // 80156260
  c->r[29]=R32(c->r[3]+0x0000037Cu); // 80156264
  W32(c->r[3]+0x00000740u,c->r[0]); // 80156268
  c->r[0]=R32(c->r[1]+0x00000050u); // 8015626C
  W32(c->r[1]+0x0000005Cu,c->r[29]); // 80156270
  c->r[29]=R32(c->r[3]+0x00000380u); // 80156274
  W8(c->r[3]+0x00000748u,c->r[0]); // 80156278
  c->r[0]=R32(c->r[1]+0x00000054u); // 8015627C
  W32(c->r[1]+0x00000060u,c->r[29]); // 80156280
  c->r[29]=R32(c->r[3]+0x00000384u); // 80156284
  W8(c->r[3]+0x00000749u,c->r[0]); // 80156288
  c->r[0]=R32(c->r[1]+0x00000058u); // 8015628C
  W32(c->r[1]+0x00000064u,c->r[29]); // 80156290
  c->r[29]=R32(c->r[3]+0x00000388u); // 80156294
  W8(c->r[3]+0x0000074Bu,c->r[0]); // 80156298
  c->r[0]=R32(c->r[1]+0x0000005Cu); // 8015629C
  W32(c->r[1]+0x00000068u,c->r[29]); // 801562A0
  c->r[29]=R32(c->r[3]+0x0000038Cu); // 801562A4
  W32(c->r[3]+0x0000074Cu,c->r[0]); // 801562A8
  c->r[0]=R32(c->r[1]+0x00000060u); // 801562AC
  W32(c->r[1]+0x0000006Cu,c->r[29]); // 801562B0
  c->r[29]=R32(c->r[3]+0x00000390u); // 801562B4
  W32(c->r[3]+0x00000750u,c->r[0]); // 801562B8
  c->r[0]=R32(c->r[1]+0x00000064u); // 801562BC
  W32(c->r[1]+0x00000070u,c->r[29]); // 801562C0
  c->r[29]=R32(c->r[3]+0x00000398u); // 801562C4
  W32(c->r[3]+0x00000754u,c->r[0]); // 801562C8
  c->r[0]=R32(c->r[1]+0x00000068u); // 801562CC
  W32(c->r[1]+0x00000074u,c->r[29]); // 801562D0
  c->r[29]=R8(c->r[3]+0x0000039Cu); // 801562D4
  W32(c->r[3]+0x00000758u,c->r[0]); // 801562D8
  c->r[0]=R32(c->r[1]+0x0000006Cu); // 801562DC
  W32(c->r[1]+0x00000078u,c->r[29]); // 801562E0
  c->r[29]=R16(c->r[3]+0x0000039Du); // 801562E4
  W32(c->r[3]+0x0000075Cu,c->r[0]); // 801562E8
  c->r[0]=R32(c->r[1]+0x00000070u); // 801562EC
  W32(c->r[1]+0x0000007Cu,c->r[29]); // 801562F0
  c->r[29]=R8(c->r[3]+0x0000039Fu); // 801562F4
  W32(c->r[3]+0x00000760u,c->r[0]); // 801562F8
  c->r[0]=R32(c->r[1]+0x00000074u); // 801562FC
  W32(c->r[1]+0x00000080u,c->r[29]); // 80156300
  c->r[29]=R32(c->r[3]+0x000003A0u); // 80156304
  W32(c->r[3]+0x00000768u,c->r[0]); // 80156308
  c->r[0]=R32(c->r[1]+0x00000078u); // 8015630C
  W32(c->r[1]+0x00000084u,c->r[29]); // 80156310
  c->r[29]=R32(c->r[3]+0x000003A4u); // 80156314
  W8(c->r[3]+0x0000076Cu,c->r[0]); // 80156318
  c->r[0]=R32(c->r[1]+0x0000007Cu); // 8015631C
  W32(c->r[1]+0x00000088u,c->r[29]); // 80156320
  c->r[29]=R32(c->r[3]+0x000003A8u); // 80156324
  W16(c->r[3]+0x0000076Du,c->r[0]); // 80156328
  c->r[0]=R32(c->r[1]+0x00000080u); // 8015632C
  W32(c->r[1]+0x0000008Cu,c->r[29]); // 80156330
  c->r[29]=R32(c->r[3]+0x000003ACu); // 80156334
  W8(c->r[3]+0x0000076Fu,c->r[0]); // 80156338
  c->r[0]=R32(c->r[1]+0x00000084u); // 8015633C
  W32(c->r[1]+0x00000090u,c->r[29]); // 80156340
  c->r[29]=R32(c->r[3]+0x000003B0u); // 80156344
  W32(c->r[3]+0x00000770u,c->r[0]); // 80156348
  c->r[0]=R32(c->r[1]+0x00000088u); // 8015634C
  W32(c->r[1]+0x00000094u,c->r[29]); // 80156350
  c->r[29]=R32(c->r[3]+0x000003B4u); // 80156354
  W32(c->r[3]+0x00000774u,c->r[0]); // 80156358
  c->r[0]=R32(c->r[1]+0x0000008Cu); // 8015635C
  W32(c->r[1]+0x00000098u,c->r[29]); // 80156360
  c->r[29]=R32(c->r[3]+0x000003B8u); // 80156364
  W32(c->r[3]+0x00000778u,c->r[0]); // 80156368
  c->r[0]=R32(c->r[1]+0x00000090u); // 8015636C
  W32(c->r[1]+0x0000009Cu,c->r[29]); // 80156370
  c->r[29]=R32(c->r[3]+0x000003BCu); // 80156374
  W32(c->r[3]+0x0000077Cu,c->r[0]); // 80156378
  c->r[0]=R32(c->r[1]+0x00000094u); // 8015637C
  W32(c->r[3]+0x00000780u,c->r[0]); // 80156380
  c->r[0]=R32(c->r[1]+0x00000098u); // 80156384
  c->r[28]=R32(c->r[3]+0x00000308u); // 80156388
  c->r[27]=R32(c->r[3]+0x0000030Cu); // 8015638C
  c->r[26]=R32(c->r[3]+0x00000310u); // 80156390
  c->r[25]=R32(c->r[3]+0x00000314u); // 80156394
  c->r[24]=R32(c->r[3]+0x00000318u); // 80156398
  c->r[23]=R32(c->r[3]+0x0000031Cu); // 8015639C
  c->r[22]=R32(c->r[3]+0x00000320u); // 801563A0
  c->r[21]=R32(c->r[3]+0x00000324u); // 801563A4
  c->r[20]=R32(c->r[3]+0x00000328u); // 801563A8
  c->r[19]=R32(c->r[3]+0x0000032Cu); // 801563AC
  c->r[18]=R32(c->r[3]+0x00000330u); // 801563B0
  c->r[17]=R32(c->r[3]+0x00000334u); // 801563B4
  c->r[16]=R32(c->r[3]+0x00000338u); // 801563B8
  c->r[15]=R32(c->r[3]+0x0000033Cu); // 801563BC
  c->r[14]=R32(c->r[3]+0x00000340u); // 801563C0
  c->r[12]=R32(c->r[3]+0x00000344u); // 801563C4
  c->r[11]=R32(c->r[3]+0x00000348u); // 801563C8
  c->r[10]=R32(c->r[3]+0x0000034Cu); // 801563CC
  c->r[9]=R32(c->r[3]+0x00000350u); // 801563D0
  c->r[8]=R32(c->r[3]+0x00000354u); // 801563D4
  c->r[7]=R32(c->r[3]+0x00000358u); // 801563D8
  c->r[6]=R32(c->r[3]+0x0000035Cu); // 801563DC
  c->r[5]=R32(c->r[3]+0x00000360u); // 801563E0
  c->r[4]=R32(c->r[3]+0x00000364u); // 801563E4
  c->r[30]=R32(c->r[3]+0x0000036Cu); // 801563E8
  {uint32_t ea=c->r[3]+0x00000374u; c->f[1]=c->ps1[1]=RF32(ea);} // 801563EC
  {uint32_t ea=c->r[3]+0x00000394u; c->f[0]=c->ps1[0]=RF32(ea);} // 801563F0
  W32(c->r[3]+0x00000784u,c->r[0]); // 801563F4
  c->r[0]=R32(c->r[1]+0x0000009Cu); // 801563F8
  W32(c->r[3]+0x00000788u,c->r[0]); // 801563FC
  c->r[0]=c->r[29]|c->r[29]; // 80156400
  W32(c->r[1]+0x000000A0u,c->r[29]); // 80156404
  W32(c->r[3]+0x000006D8u,c->r[28]); // 80156408
  W32(c->r[3]+0x000006DCu,c->r[27]); // 8015640C
  W32(c->r[3]+0x000006E0u,c->r[26]); // 80156410
  W32(c->r[3]+0x000006E4u,c->r[25]); // 80156414
  W32(c->r[3]+0x000006E8u,c->r[24]); // 80156418
  W32(c->r[3]+0x000006ECu,c->r[23]); // 8015641C
  W32(c->r[3]+0x000006F0u,c->r[22]); // 80156420
  W32(c->r[3]+0x000006F4u,c->r[21]); // 80156424
  W32(c->r[3]+0x000006F8u,c->r[20]); // 80156428
  W32(c->r[3]+0x000006FCu,c->r[19]); // 8015642C
  W32(c->r[3]+0x00000700u,c->r[18]); // 80156430
  W32(c->r[3]+0x00000704u,c->r[17]); // 80156434
  W32(c->r[3]+0x00000708u,c->r[16]); // 80156438
  W32(c->r[3]+0x0000070Cu,c->r[15]); // 8015643C
  W32(c->r[3]+0x00000710u,c->r[14]); // 80156440
  W32(c->r[3]+0x00000714u,c->r[12]); // 80156444
  W32(c->r[3]+0x00000718u,c->r[11]); // 80156448
  W32(c->r[3]+0x0000071Cu,c->r[10]); // 8015644C
  W32(c->r[3]+0x00000720u,c->r[9]); // 80156450
  W32(c->r[3]+0x00000724u,c->r[8]); // 80156454
  W32(c->r[3]+0x00000728u,c->r[7]); // 80156458
  W32(c->r[3]+0x0000072Cu,c->r[6]); // 8015645C
  W32(c->r[3]+0x00000730u,c->r[5]); // 80156460
  W32(c->r[3]+0x00000734u,c->r[4]); // 80156464
  W32(c->r[3]+0x0000073Cu,c->r[30]); // 80156468
  {uint32_t ea=c->r[3]+0x00000744u; WF32(ea,c->f[1]);} // 8015646C
  {uint32_t ea=c->r[3]+0x00000764u; WF32(ea,c->f[0]);} // 80156470
  W32(c->r[3]+0x0000078Cu,c->r[0]); // 80156474
  c->r[4]=R32(c->r[3]+0x000003D8u); // 80156478
  c->r[0]=0u+0x00000000u; // 8015647C
  W32(c->r[3]+0x000007A8u,c->r[4]); // 80156480
  c->r[4]=c->r[31]+0x000003E8u; // 80156484
  c->r[12]=R32(c->r[3]+0x000003C0u); // 80156488
  c->r[11]=R32(c->r[3]+0x000003C4u); // 8015648C
  c->r[10]=R32(c->r[3]+0x000003C8u); // 80156490
  c->r[9]=R32(c->r[3]+0x000003CCu); // 80156494
  c->r[8]=R32(c->r[3]+0x000003D0u); // 80156498
  c->r[7]=R32(c->r[3]+0x000003D4u); // 8015649C
  c->r[6]=R32(c->r[3]+0x000003D9u); // 801564A0
  c->r[5]=R32(c->r[3]+0x000003DDu); // 801564A4
  W32(c->r[3]+0x00000790u,c->r[12]); // 801564A8
  W32(c->r[3]+0x00000794u,c->r[11]); // 801564AC
  W32(c->r[3]+0x00000798u,c->r[10]); // 801564B0
  W32(c->r[3]+0x0000079Cu,c->r[9]); // 801564B4
  W32(c->r[3]+0x000007A0u,c->r[8]); // 801564B8
  W32(c->r[3]+0x000007A4u,c->r[7]); // 801564BC
  W32(c->r[3]+0x000007A9u,c->r[6]); // 801564C0
  W32(c->r[3]+0x000007ADu,c->r[5]); // 801564C4
  W8(c->r[3]+0x0000074Au,c->r[0]); // 801564C8
  c->r[3]=R32(c->r[3]+0x000007CCu); // 801564CC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801564D0
  c->r[12]=R32(c->r[12]+0x00000018u); // 801564D4
  c->ctr=c->r[12]; // 801564D8
  if (true) { c->lr=0x801564E0u; dispatch(c,c->ctr); } // 801564DC
  c->r[3]=R32(c->r[31]+0x00000014u); // 801564E0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801564E4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801564E8
  c->ctr=c->r[12]; // 801564EC
  if (true) { c->lr=0x801564F4u; dispatch(c,c->ctr); } // 801564F0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801564F4
  c->r[12]=R32(c->r[12]+0x00000030u); // 801564F8
  c->ctr=c->r[12]; // 801564FC
  if (true) { c->lr=0x80156504u; dispatch(c,c->ctr); } // 80156500
  cmps(c,0,(int32_t)c->r[3],0); // 80156504
  if (crb(c,2)) { goto L_80156514; } // 80156508
  c->r[0]=0u+0x00000001u; // 8015650C
  W8(c->r[31]+0x00000749u,c->r[0]); // 80156510
L_80156514:;
  c->r[3]=R32(c->r[31]+0x00000014u); // 80156514
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156518
  c->r[12]=R32(c->r[12]+0x00000014u); // 8015651C
  c->ctr=c->r[12]; // 80156520
  if (true) { c->lr=0x80156528u; dispatch(c,c->ctr); } // 80156524
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80156528
  c->r[4]=c->r[31]+0x000003E8u; // 8015652C
  c->r[12]=R32(c->r[12]+0x00000010u); // 80156530
  c->ctr=c->r[12]; // 80156534
  if (true) { c->lr=0x8015653Cu; dispatch(c,c->ctr); } // 80156538
  c->r[3]=R32(c->r[31]+0x000007F0u); // 8015653C
L_80156540:;
  cmps(c,0,(int32_t)c->r[3],0); // 80156540
  if (crb(c,2)) { goto L_80156568; } // 80156544
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80156548
  c->r[4]=0u+0x00000000u; // 8015654C
  c->r[14]=R32(c->r[3]+0x00000004u); // 80156550
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80156554
  c->ctr=c->r[12]; // 80156558
  if (true) { c->lr=0x80156560u; dispatch(c,c->ctr); } // 8015655C
  c->r[3]=c->r[14]|c->r[14]; // 80156560
  IRQCHK(c); goto L_80156540; // 80156564
L_80156568:;
  c->r[11]=c->r[1]+0x00000100u; // 80156568
  c->lr=0x80156570u; { c->r[14]=R32(c->r[11]+0xFFFFFFB8u); c->r[15]=R32(c->r[11]+0xFFFFFFBCu); c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8015656C
  c->r[0]=R32(c->r[1]+0x00000104u); // 80156570
  c->lr=c->r[0]; // 80156574
  c->r[1]=c->r[1]+0x00000100u; // 80156578
  return; // 8015657C
}

// Stop__14CriAuPlayerLocFR8CriError
void f_80156580(Ctx* __restrict c) {
  trace_call(0x80156580u);
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156580
  c->r[5]=c->r[4]|c->r[4]; // 80156584
  c->r[4]=0u+0x00000000u; // 80156588
  c->r[12]=R32(c->r[12]+0x00000044u); // 8015658C
  c->ctr=c->r[12]; // 80156590
  if (true) { dispatch(c,c->ctr); return; } // 80156594
}

// Stop__14CriAuPlayerLocFQ211CriAuPlayer8StopModeR8CriError
void f_80156598(Ctx* __restrict c) {
  trace_call(0x80156598u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156598
  c->r[0]=c->lr; // 8015659C
  W32(c->r[1]+0x00000014u,c->r[0]); // 801565A0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801565A4
  c->r[31]=0u+0x00000000u; // 801565A8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801565AC
  c->r[30]=c->r[3]|c->r[3]; // 801565B0
  W32(c->r[5]+0x00000000u,c->r[31]); // 801565B4
  c->r[0]=R32(c->r[3]+0x000007B8u); // 801565B8
  cmpu(c,0,c->r[0],0x00000002u); // 801565BC
  if (!crb(c,1)) { goto L_801565D8; } // 801565C0
  cmps(c,0,(int32_t)c->r[0],3); // 801565C4
  if (crb(c,2)) { goto L_80156618; } // 801565C8
  cmps(c,0,(int32_t)c->r[0],4); // 801565CC
  if (crb(c,2)) { goto L_80156620; } // 801565D0
  goto L_80156630; // 801565D4
L_801565D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801565D8
  if (crb(c,2)) { goto L_801565EC; } // 801565DC
  cmps(c,0,(int32_t)c->r[4],1); // 801565E0
  if (crb(c,2)) { goto L_801565FC; } // 801565E4
  goto L_8015660C; // 801565E8
L_801565EC:;
  c->r[3]=R32(c->r[3]+0x000007BCu); // 801565EC
  c->r[4]=R32(c->r[30]+0x000007C0u); // 801565F0
  c->lr=0x801565F8u; f_80174654(c); // 801565F4
  goto L_8015660C; // 801565F8
L_801565FC:;
  c->r[3]=R32(c->r[3]+0x000007BCu); // 801565FC
  c->r[4]=0u+0x00000000u; // 80156600
  c->r[5]=R32(c->r[30]+0x000007C0u); // 80156604
  c->lr=0x8015660Cu; f_801742F0(c); // 80156608
L_8015660C:;
  c->r[0]=0u+0x00000001u; // 8015660C
  W32(c->r[30]+0x000007D0u,c->r[0]); // 80156610
  goto L_80156630; // 80156614
L_80156618:;
  W32(c->r[3]+0x000007B8u,c->r[31]); // 80156618
  goto L_80156630; // 8015661C
L_80156620:;
  c->r[3]=R32(c->r[3]+0x000007BCu); // 80156620
  c->r[4]=R32(c->r[30]+0x000007C0u); // 80156624
  c->lr=0x8015662Cu; f_8017577C(c); // 80156628
  W32(c->r[30]+0x000007B8u,c->r[31]); // 8015662C
L_80156630:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80156630
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156634
  c->r[30]=R32(c->r[1]+0x00000008u); // 80156638
  c->lr=c->r[0]; // 8015663C
  c->r[1]=c->r[1]+0x00000010u; // 80156640
  return; // 80156644
}

// Pause__14CriAuPlayerLocFlR8CriError
void f_80156648(Ctx* __restrict c) {
  trace_call(0x80156648u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156648
  c->r[0]=c->lr; // 8015664C
  c->r[6]=0u+0xFFFFFFFFu; // 80156650
  W32(c->r[1]+0x00000014u,c->r[0]); // 80156654
  c->r[0]=0u+0x00000000u; // 80156658
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8015665C
  c->r[31]=c->r[4]|c->r[4]; // 80156660
  c->r[7]=c->r[31]|c->r[31]; // 80156664
  W32(c->r[1]+0x00000008u,c->r[30]); // 80156668
  c->r[30]=c->r[3]|c->r[3]; // 8015666C
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156670
  c->r[5]=0u+0xFFFFFFFFu; // 80156674
  c->r[3]=R32(c->r[3]+0x000007BCu); // 80156678
  c->r[4]=R32(c->r[30]+0x000007C0u); // 8015667C
  c->lr=0x80156684u; f_8017487C(c); // 80156680
  W8(c->r[30]+0x0000037Bu,c->r[31]); // 80156684
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80156688
  c->r[30]=R32(c->r[1]+0x00000008u); // 8015668C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80156690
  c->lr=c->r[0]; // 80156694
  c->r[1]=c->r[1]+0x00000010u; // 80156698
  return; // 8015669C
}

// IsPaused__14CriAuPlayerLocFR8CriError
void f_801566A0(Ctx* __restrict c) {
  trace_call(0x801566A0u);
  c->r[0]=0u+0x00000000u; // 801566A0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801566A4
  c->r[3]=R8(c->r[3]+0x0000037Bu); // 801566A8
  return; // 801566AC
}

// SetVolume__14CriAuPlayerLocFfR8CriError
void f_801566B0(Ctx* __restrict c) {
  trace_call(0x801566B0u);
  c->r[0]=0u+0x00000000u; // 801566B0
  W32(c->r[4]+0x00000000u,c->r[0]); // 801566B4
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 801566B8
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[0]);} // 801566BC
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[1]);} // 801566C0
  return; // 801566C4
}

// SetVolume__14CriAuPlayerLocFffR8CriError
void f_801566C8(Ctx* __restrict c) {
  trace_call(0x801566C8u);
  c->r[0]=0u+0x00000000u; // 801566C8
  W32(c->r[4]+0x00000000u,c->r[0]); // 801566CC
  {uint32_t ea=c->r[3]+0x00000038u; WF32(ea,c->f[1]);} // 801566D0
  {uint32_t ea=c->r[3]+0x0000003Cu; WF32(ea,c->f[2]);} // 801566D4
  return; // 801566D8
}

// SetPitch__14CriAuPlayerLocFfR8CriError
void f_801566DC(Ctx* __restrict c) {
  trace_call(0x801566DCu);
  c->r[0]=0u+0x00000000u; // 801566DC
  W32(c->r[4]+0x00000000u,c->r[0]); // 801566E0
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 801566E4
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801566E8
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[0]);} // 801566EC
  return; // 801566F0
}

// SetPitch__14CriAuPlayerLocFffR8CriError
void f_801566F4(Ctx* __restrict c) {
  trace_call(0x801566F4u);
  c->r[0]=0u+0x00000000u; // 801566F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801566F8
  {uint32_t ea=c->r[3]+0x00000040u; WF32(ea,c->f[1]);} // 801566FC
  {uint32_t ea=c->r[3]+0x00000044u; WF32(ea,c->f[2]);} // 80156700
  return; // 80156704
}

// SetFilterCutoffFrequency__14CriAuPlayerLocFffR8CriError
void f_80156708(Ctx* __restrict c) {
  trace_call(0x80156708u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156708
  c->r[0]=c->lr; // 8015670C
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156710
  W32(c->r[1]+0x00000054u,c->r[0]); // 80156714
  c->r[0]=0u+0x00000000u; // 80156718
  fcmp(c,0,c->f[0],c->f[1]); // 8015671C
  {uint32_t ea=c->r[1]+0x00000040u; WF64(ea,c->f[31]);} // 80156720
  {uint32_t ea=c->r[1]+0x00000048u; psq_store(c,31,ea,0,0);} // 80156724
  c->f[31]=c->f[2]; // 80156728
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[30]);} // 8015672C
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,30,ea,0,0);} // 80156730
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[29]);} // 80156734
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,29,ea,0,0);} // 80156738
  {uint32_t ea=c->r[1]+0x00000010u; WF64(ea,c->f[28]);} // 8015673C
  {uint32_t ea=c->r[1]+0x00000018u; psq_store(c,28,ea,0,0);} // 80156740
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80156744
  c->r[31]=c->r[3]|c->r[3]; // 80156748
  W32(c->r[4]+0x00000000u,c->r[0]); // 8015674C
  if (!crb(c,2)) { goto L_80156760; } // 80156750
  fcmp(c,0,c->f[0],c->f[2]); // 80156754
  if (!crb(c,2)) { goto L_80156760; } // 80156758
  {uint32_t ea=c->r[2]+0xFFFFB348u; c->f[31]=c->ps1[31]=RF32(ea);} // 8015675C
L_80156760:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156760
  fcmp(c,0,c->f[1],c->f[0]); // 80156764
  setcrb(c,2,crb(c,1)|crb(c,2)); // 80156768
  if (!crb(c,2)) { goto L_80156774; } // 8015676C
  goto L_80156778; // 80156770
L_80156774:;
  c->f[1]=c->f[0]; // 80156774
L_80156778:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[29]=c->ps1[29]=RF32(ea);} // 80156778
  fcmp(c,0,c->f[1],c->f[29]); // 8015677C
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80156780
  if (!crb(c,2)) { goto L_8015678C; } // 80156784
  c->f[29]=c->f[1]; // 80156788
L_8015678C:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015678C
  c->lr=0x80156794u; f_800C02CC(c); // 80156790
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156794
  c->f[30]=c->ps1[30]=S(c->f[1]); // 80156798
  c->f[1]=c->f[0]; // 8015679C
  c->lr=0x801567A4u; f_800C02CC(c); // 801567A0
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801567A4
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 801567A8
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 801567AC
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[30]); // 801567B0
  c->f[30]=c->ps1[30]=S(c->f[2]-c->f[0]); // 801567B4
  c->lr=0x801567BCu; f_800C02CC(c); // 801567B8
  c->f[28]=c->ps1[28]=S(c->f[1]); // 801567BC
  c->f[1]=c->f[29]; // 801567C0
  c->lr=0x801567C8u; f_800C02CC(c); // 801567C4
  c->f[2]=c->ps1[2]=S(c->f[1]); // 801567C8
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[1]=c->ps1[1]=RF32(ea);} // 801567CC
  {uint32_t ea=c->r[2]+0xFFFFB34Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 801567D0
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 801567D4
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 801567D8
  c->f[30]=c->ps1[30]=S(c->f[1]/c->f[30]); // 801567DC
  fcmp(c,0,c->f[30],c->f[0]); // 801567E0
  setcrb(c,2,crb(c,0)|crb(c,2)); // 801567E4
  if (!crb(c,2)) { goto L_801567F0; } // 801567E8
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[30]=c->ps1[30]=RF32(ea);} // 801567EC
L_801567F0:;
  {uint32_t ea=c->r[2]+0xFFFFB350u; c->f[0]=c->ps1[0]=RF32(ea);} // 801567F0
  fcmp(c,0,c->f[30],c->f[0]); // 801567F4
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801567F8
  if (!crb(c,2)) { goto L_80156804; } // 801567FC
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[30]=c->ps1[30]=RF32(ea);} // 80156800
L_80156804:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156804
  fcmp(c,0,c->f[31],c->f[0]); // 80156808
  setcrb(c,2,crb(c,1)|crb(c,2)); // 8015680C
  if (!crb(c,2)) { goto L_80156818; } // 80156810
  goto L_8015681C; // 80156814
L_80156818:;
  c->f[31]=c->f[0]; // 80156818
L_8015681C:;
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8015681C
  fcmp(c,0,c->f[31],c->f[0]); // 80156820
  setcrb(c,2,crb(c,0)|crb(c,2)); // 80156824
  if (!crb(c,2)) { goto L_80156830; } // 80156828
  goto L_80156834; // 8015682C
L_80156830:;
  c->f[31]=c->f[0]; // 80156830
L_80156834:;
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80156834
  c->lr=0x8015683Cu; f_800C02CC(c); // 80156838
  {uint32_t ea=c->r[13]+0xFFFF88F4u; c->f[0]=c->ps1[0]=RF32(ea);} // 8015683C
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80156840
  c->f[1]=c->f[0]; // 80156844
  c->lr=0x8015684Cu; f_800C02CC(c); // 80156848
  c->f[2]=c->ps1[2]=S(c->f[1]); // 8015684C
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156850
  {uint32_t ea=c->r[13]+0xFFFF88F0u; c->f[1]=c->ps1[1]=RF32(ea);} // 80156854
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 80156858
  c->f[29]=c->ps1[29]=S(c->f[2]-c->f[0]); // 8015685C
  c->lr=0x80156864u; f_800C02CC(c); // 80156860
  c->f[28]=c->ps1[28]=S(c->f[1]); // 80156864
  c->f[1]=c->f[31]; // 80156868
  c->lr=0x80156870u; f_800C02CC(c); // 8015686C
  c->f[2]=c->ps1[2]=S(c->f[1]); // 80156870
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[1]=c->ps1[1]=RF32(ea);} // 80156874
  {uint32_t ea=c->r[2]+0xFFFFB34Cu; c->f[0]=c->ps1[0]=RF32(ea);} // 80156878
  c->f[2]=c->ps1[2]=S(c->f[2]/c->f[28]); // 8015687C
  c->f[1]=c->ps1[1]=S(c->f[2]-c->f[1]); // 80156880
  c->f[1]=c->ps1[1]=S(c->f[1]/c->f[29]); // 80156884
  fcmp(c,0,c->f[1],c->f[0]); // 80156888
  setcrb(c,2,crb(c,0)|crb(c,2)); // 8015688C
  if (!crb(c,2)) { goto L_80156898; } // 80156890
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 80156894
L_80156898:;
  {uint32_t ea=c->r[2]+0xFFFFB350u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156898
  fcmp(c,0,c->f[1],c->f[0]); // 8015689C
  setcrb(c,2,crb(c,1)|crb(c,2)); // 801568A0
  if (!crb(c,2)) { goto L_801568AC; } // 801568A4
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[1]=c->ps1[1]=RF32(ea);} // 801568A8
L_801568AC:;
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 801568AC
  {uint32_t ea=c->r[31]+0x0000008Cu; WF32(ea,c->f[30]);} // 801568B0
  {uint32_t ea=c->r[31]+0x00000090u; WF32(ea,c->f[0]);} // 801568B4
  {uint32_t ea=c->r[31]+0x00000094u; WF32(ea,c->f[1]);} // 801568B8
  {uint32_t ea=c->r[31]+0x00000098u; WF32(ea,c->f[0]);} // 801568BC
  {uint32_t ea=c->r[1]+0x00000048u; psq_load(c,31,ea,0,0);} // 801568C0
  {uint32_t ea=c->r[1]+0x00000040u; c->f[31]=RF64(ea);} // 801568C4
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,30,ea,0,0);} // 801568C8
  {uint32_t ea=c->r[1]+0x00000030u; c->f[30]=RF64(ea);} // 801568CC
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,29,ea,0,0);} // 801568D0
  {uint32_t ea=c->r[1]+0x00000020u; c->f[29]=RF64(ea);} // 801568D4
  {uint32_t ea=c->r[1]+0x00000018u; psq_load(c,28,ea,0,0);} // 801568D8
  {uint32_t ea=c->r[1]+0x00000010u; c->f[28]=RF64(ea);} // 801568DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801568E0
  c->r[0]=R32(c->r[1]+0x00000054u); // 801568E4
  c->lr=c->r[0]; // 801568E8
  c->r[1]=c->r[1]+0x00000050u; // 801568EC
  return; // 801568F0
}

// SetFilterCutoffLow__14CriAuPlayerLocFffR8CriError
void f_801568F4(Ctx* __restrict c) {
  trace_call(0x801568F4u);
  c->r[0]=0u+0x00000000u; // 801568F4
  W32(c->r[4]+0x00000000u,c->r[0]); // 801568F8
  {uint32_t ea=c->r[3]+0x0000008Cu; WF32(ea,c->f[1]);} // 801568FC
  {uint32_t ea=c->r[3]+0x00000090u; WF32(ea,c->f[2]);} // 80156900
  return; // 80156904
}

// SetFilterCutoffHigh__14CriAuPlayerLocFffR8CriError
void f_80156908(Ctx* __restrict c) {
  trace_call(0x80156908u);
  c->r[0]=0u+0x00000000u; // 80156908
  W32(c->r[4]+0x00000000u,c->r[0]); // 8015690C
  {uint32_t ea=c->r[3]+0x00000094u; WF32(ea,c->f[1]);} // 80156910
  {uint32_t ea=c->r[3]+0x00000098u; WF32(ea,c->f[2]);} // 80156914
  return; // 80156918
}

// SetDrySendLevel__14CriAuPlayerLocFRC14CriAuSendLevelR8CriError
void f_8015691C(Ctx* __restrict c) {
  trace_call(0x8015691Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8015691C
  c->r[0]=c->lr; // 80156920
  W32(c->r[1]+0x00000044u,c->r[0]); // 80156924
  c->r[11]=c->r[1]+0x00000040u; // 80156928
  c->lr=0x80156930u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8015692C
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156930
  c->r[0]=0u+0x00000000u; // 80156934
  {uint32_t ea=c->r[1]+0x00000008u; WF32(ea,c->f[0]);} // 80156938
  c->r[26]=R32(c->r[4]+0x00000000u); // 8015693C
  {uint32_t ea=c->r[1]+0x0000000Cu; WF32(ea,c->f[0]);} // 80156940
  c->r[27]=R32(c->r[4]+0x00000004u); // 80156944
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156948
  c->r[28]=R32(c->r[4]+0x00000008u); // 8015694C
  {uint32_t ea=c->r[1]+0x00000010u; WF32(ea,c->f[0]);} // 80156950
  c->r[29]=R32(c->r[4]+0x0000000Cu); // 80156954
  {uint32_t ea=c->r[1]+0x00000014u; WF32(ea,c->f[0]);} // 80156958
  c->r[30]=R32(c->r[4]+0x00000010u); // 8015695C
  {uint32_t ea=c->r[1]+0x00000018u; WF32(ea,c->f[0]);} // 80156960
  c->r[31]=R32(c->r[4]+0x00000014u); // 80156964
  {uint32_t ea=c->r[1]+0x0000001Cu; WF32(ea,c->f[0]);} // 80156968
  c->r[12]=R32(c->r[4]+0x00000018u); // 8015696C
  {uint32_t ea=c->r[1]+0x00000024u; WF32(ea,c->f[0]);} // 80156970
  c->r[11]=R32(c->r[4]+0x0000001Cu); // 80156974
  {uint32_t ea=c->r[1]+0x00000020u; WF32(ea,c->f[0]);} // 80156978
  c->r[10]=R32(c->r[1]+0x00000008u); // 8015697C
  c->r[9]=R32(c->r[1]+0x0000000Cu); // 80156980
  c->r[8]=R32(c->r[1]+0x00000010u); // 80156984
  c->r[7]=R32(c->r[1]+0x00000014u); // 80156988
  c->r[6]=R32(c->r[1]+0x00000018u); // 8015698C
  c->r[5]=R32(c->r[1]+0x0000001Cu); // 80156990
  c->r[4]=R32(c->r[1]+0x00000020u); // 80156994
  c->r[0]=R32(c->r[1]+0x00000024u); // 80156998
  W32(c->r[3]+0x000000E4u,c->r[11]); // 8015699C
  c->r[11]=c->r[1]+0x00000040u; // 801569A0
  W32(c->r[3]+0x000000C8u,c->r[26]); // 801569A4
  W32(c->r[3]+0x000000CCu,c->r[27]); // 801569A8
  W32(c->r[3]+0x000000D0u,c->r[28]); // 801569AC
  W32(c->r[3]+0x000000D4u,c->r[29]); // 801569B0
  W32(c->r[3]+0x000000D8u,c->r[30]); // 801569B4
  W32(c->r[3]+0x000000DCu,c->r[31]); // 801569B8
  W32(c->r[3]+0x000000E0u,c->r[12]); // 801569BC
  W32(c->r[3]+0x000000E8u,c->r[10]); // 801569C0
  W32(c->r[3]+0x000000ECu,c->r[9]); // 801569C4
  W32(c->r[3]+0x000000F0u,c->r[8]); // 801569C8
  W32(c->r[3]+0x000000F4u,c->r[7]); // 801569CC
  W32(c->r[3]+0x000000F8u,c->r[6]); // 801569D0
  W32(c->r[3]+0x000000FCu,c->r[5]); // 801569D4
  W32(c->r[3]+0x00000100u,c->r[4]); // 801569D8
  W32(c->r[3]+0x00000104u,c->r[0]); // 801569DC
  c->lr=0x801569E4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801569E0
  c->r[0]=R32(c->r[1]+0x00000044u); // 801569E4
  c->lr=c->r[0]; // 801569E8
  c->r[1]=c->r[1]+0x00000040u; // 801569EC
  return; // 801569F0
}

// SetDrySendLevel__14CriAuPlayerLocFUlfR8CriError
void f_801569F4(Ctx* __restrict c) {
  trace_call(0x801569F4u);
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 801569F4
  c->r[0]=0u+0x00000000u; // 801569F8
  W32(c->r[5]+0x00000000u,c->r[0]); // 801569FC
  c->r[3]=c->r[3]+c->r[4]; // 80156A00
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156A04
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[1]);} // 80156A08
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[0]);} // 80156A0C
  return; // 80156A10
}

// SetDrySendLevel__14CriAuPlayerLocFUlffR8CriError
void f_80156A14(Ctx* __restrict c) {
  trace_call(0x80156A14u);
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80156A14
  c->r[0]=0u+0x00000000u; // 80156A18
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156A1C
  c->r[3]=c->r[3]+c->r[4]; // 80156A20
  {uint32_t ea=c->r[3]+0x000000C8u; WF32(ea,c->f[1]);} // 80156A24
  {uint32_t ea=c->r[3]+0x000000E8u; WF32(ea,c->f[2]);} // 80156A28
  return; // 80156A2C
}

// SetDrySendLevel__14CriAuPlayerLocFRC14CriAuSendLevelRC14CriAuSendLevelR8CriError
void f_80156A30(Ctx* __restrict c) {
  trace_call(0x80156A30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156A30
  c->r[0]=0u+0x00000000u; // 80156A34
  c->r[12]=R32(c->r[4]+0x0000001Cu); // 80156A38
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80156A3C
  c->r[25]=R32(c->r[4]+0x00000000u); // 80156A40
  c->r[26]=R32(c->r[4]+0x00000004u); // 80156A44
  c->r[27]=R32(c->r[4]+0x00000008u); // 80156A48
  c->r[28]=R32(c->r[4]+0x0000000Cu); // 80156A4C
  c->r[29]=R32(c->r[4]+0x00000010u); // 80156A50
  c->r[30]=R32(c->r[4]+0x00000014u); // 80156A54
  c->r[31]=R32(c->r[4]+0x00000018u); // 80156A58
  c->r[11]=R32(c->r[5]+0x00000000u); // 80156A5C
  W32(c->r[6]+0x00000000u,c->r[0]); // 80156A60
  c->r[10]=R32(c->r[5]+0x00000004u); // 80156A64
  c->r[9]=R32(c->r[5]+0x00000008u); // 80156A68
  c->r[8]=R32(c->r[5]+0x0000000Cu); // 80156A6C
  c->r[7]=R32(c->r[5]+0x00000010u); // 80156A70
  c->r[6]=R32(c->r[5]+0x00000014u); // 80156A74
  c->r[4]=R32(c->r[5]+0x00000018u); // 80156A78
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80156A7C
  W32(c->r[3]+0x000000C8u,c->r[25]); // 80156A80
  W32(c->r[3]+0x000000CCu,c->r[26]); // 80156A84
  W32(c->r[3]+0x000000D0u,c->r[27]); // 80156A88
  W32(c->r[3]+0x000000D4u,c->r[28]); // 80156A8C
  W32(c->r[3]+0x000000D8u,c->r[29]); // 80156A90
  W32(c->r[3]+0x000000DCu,c->r[30]); // 80156A94
  W32(c->r[3]+0x000000E0u,c->r[31]); // 80156A98
  W32(c->r[3]+0x000000E4u,c->r[12]); // 80156A9C
  W32(c->r[3]+0x000000E8u,c->r[11]); // 80156AA0
  W32(c->r[3]+0x000000ECu,c->r[10]); // 80156AA4
  W32(c->r[3]+0x000000F0u,c->r[9]); // 80156AA8
  W32(c->r[3]+0x000000F4u,c->r[8]); // 80156AAC
  W32(c->r[3]+0x000000F8u,c->r[7]); // 80156AB0
  W32(c->r[3]+0x000000FCu,c->r[6]); // 80156AB4
  W32(c->r[3]+0x00000100u,c->r[4]); // 80156AB8
  W32(c->r[3]+0x00000104u,c->r[0]); // 80156ABC
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=25;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80156AC0
  c->r[1]=c->r[1]+0x00000030u; // 80156AC4
  return; // 80156AC8
}

// SetDrySendLevelEachChannel__14CriAuPlayerLocFUlRC14CriAuSendLevelRC14CriAuSendLevelR8CriError
void f_80156ACC(Ctx* __restrict c) {
  trace_call(0x80156ACCu);
  c->r[4]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80156ACC
  c->r[0]=0u+0x00000000u; // 80156AD0
  W32(c->r[7]+0x00000000u,c->r[0]); // 80156AD4
  c->r[3]=c->r[3]+c->r[4]; // 80156AD8
  c->r[0]=R32(c->r[5]+0x00000000u); // 80156ADC
  W32(c->r[3]+0x00000108u,c->r[0]); // 80156AE0
  c->r[0]=R32(c->r[5]+0x00000004u); // 80156AE4
  W32(c->r[3]+0x0000010Cu,c->r[0]); // 80156AE8
  c->r[0]=R32(c->r[5]+0x00000008u); // 80156AEC
  W32(c->r[3]+0x00000110u,c->r[0]); // 80156AF0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 80156AF4
  W32(c->r[3]+0x00000114u,c->r[0]); // 80156AF8
  c->r[0]=R32(c->r[5]+0x00000010u); // 80156AFC
  W32(c->r[3]+0x00000118u,c->r[0]); // 80156B00
  c->r[0]=R32(c->r[5]+0x00000014u); // 80156B04
  W32(c->r[3]+0x0000011Cu,c->r[0]); // 80156B08
  c->r[0]=R32(c->r[5]+0x00000018u); // 80156B0C
  W32(c->r[3]+0x00000120u,c->r[0]); // 80156B10
  c->r[0]=R32(c->r[5]+0x0000001Cu); // 80156B14
  W32(c->r[3]+0x00000124u,c->r[0]); // 80156B18
  c->r[0]=R32(c->r[6]+0x00000000u); // 80156B1C
  W32(c->r[3]+0x00000208u,c->r[0]); // 80156B20
  c->r[0]=R32(c->r[6]+0x00000004u); // 80156B24
  W32(c->r[3]+0x0000020Cu,c->r[0]); // 80156B28
  c->r[0]=R32(c->r[6]+0x00000008u); // 80156B2C
  W32(c->r[3]+0x00000210u,c->r[0]); // 80156B30
  c->r[0]=R32(c->r[6]+0x0000000Cu); // 80156B34
  W32(c->r[3]+0x00000214u,c->r[0]); // 80156B38
  c->r[0]=R32(c->r[6]+0x00000010u); // 80156B3C
  W32(c->r[3]+0x00000218u,c->r[0]); // 80156B40
  c->r[0]=R32(c->r[6]+0x00000014u); // 80156B44
  W32(c->r[3]+0x0000021Cu,c->r[0]); // 80156B48
  c->r[0]=R32(c->r[6]+0x00000018u); // 80156B4C
  W32(c->r[3]+0x00000220u,c->r[0]); // 80156B50
  c->r[0]=R32(c->r[6]+0x0000001Cu); // 80156B54
  W32(c->r[3]+0x00000224u,c->r[0]); // 80156B58
  return; // 80156B5C
}

// SetDrySendLevelEachChannel__14CriAuPlayerLocFUlUlffR8CriError
void f_80156B60(Ctx* __restrict c) {
  trace_call(0x80156B60u);
  c->r[7]=rotl(c->r[4],5)&0xFFFFFFE0u; // 80156B60
  c->r[0]=0u+0x00000000u; // 80156B64
  W32(c->r[6]+0x00000000u,c->r[0]); // 80156B68
  c->r[4]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80156B6C
  c->r[0]=c->r[3]+c->r[7]; // 80156B70
  c->r[3]=c->r[0]+c->r[4]; // 80156B74
  {uint32_t ea=c->r[3]+0x00000108u; WF32(ea,c->f[1]);} // 80156B78
  {uint32_t ea=c->r[3]+0x00000208u; WF32(ea,c->f[2]);} // 80156B7C
  return; // 80156B80
}

// SetWetSendLevel__14CriAuPlayerLocFUlfR8CriError
void f_80156B84(Ctx* __restrict c) {
  trace_call(0x80156B84u);
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80156B84
  c->r[0]=0u+0x00000000u; // 80156B88
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156B8C
  c->r[3]=c->r[3]+c->r[4]; // 80156B90
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[0]=c->ps1[0]=RF32(ea);} // 80156B94
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[1]);} // 80156B98
  {uint32_t ea=c->r[3]+0x00000330u; WF32(ea,c->f[0]);} // 80156B9C
  return; // 80156BA0
}

// SetWetSendLevel__14CriAuPlayerLocFUlffR8CriError
void f_80156BA4(Ctx* __restrict c) {
  trace_call(0x80156BA4u);
  c->r[4]=rotl(c->r[4],2)&0xFFFFFFFCu; // 80156BA4
  c->r[0]=0u+0x00000000u; // 80156BA8
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156BAC
  c->r[3]=c->r[3]+c->r[4]; // 80156BB0
  {uint32_t ea=c->r[3]+0x00000310u; WF32(ea,c->f[1]);} // 80156BB4
  {uint32_t ea=c->r[3]+0x00000330u; WF32(ea,c->f[2]);} // 80156BB8
  return; // 80156BBC
}

// SetPan3dAngle__14CriAuPlayerLocFffR8CriError
void f_80156BC0(Ctx* __restrict c) {
  trace_call(0x80156BC0u);
  c->r[0]=0u+0x00000000u; // 80156BC0
  W32(c->r[4]+0x00000000u,c->r[0]); // 80156BC4
  {uint32_t ea=c->r[3]+0x00000384u; WF32(ea,c->f[1]);} // 80156BC8
  {uint32_t ea=c->r[3]+0x00000388u; WF32(ea,c->f[2]);} // 80156BCC
  return; // 80156BD0
}

// SetPan3dInteriorDistance__14CriAuPlayerLocFffR8CriError
void f_80156BD4(Ctx* __restrict c) {
  trace_call(0x80156BD4u);
  c->r[0]=0u+0x00000000u; // 80156BD4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80156BD8
  {uint32_t ea=c->r[3]+0x0000038Cu; WF32(ea,c->f[1]);} // 80156BDC
  {uint32_t ea=c->r[3]+0x00000390u; WF32(ea,c->f[2]);} // 80156BE0
  return; // 80156BE4
}

// SetPan3dVolume__14CriAuPlayerLocFffR8CriError
void f_80156BE8(Ctx* __restrict c) {
  trace_call(0x80156BE8u);
  c->r[0]=0u+0x00000000u; // 80156BE8
  W32(c->r[4]+0x00000000u,c->r[0]); // 80156BEC
  {uint32_t ea=c->r[3]+0x0000037Cu; WF32(ea,c->f[1]);} // 80156BF0
  {uint32_t ea=c->r[3]+0x00000380u; WF32(ea,c->f[2]);} // 80156BF4
  return; // 80156BF8
}

// SetPriority__14CriAuPlayerLocFlR8CriError
void f_80156BFC(Ctx* __restrict c) {
  trace_call(0x80156BFCu);
  c->r[0]=0u+0x00000000u; // 80156BFC
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156C00
  W32(c->r[3]+0x000000C0u,c->r[4]); // 80156C04
  return; // 80156C08
}

// SetAisac__14CriAuPlayerLocFPCcfR8CriError
void f_80156C0C(Ctx* __restrict c) {
  trace_call(0x80156C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156C0C
  c->r[0]=c->lr; // 80156C10
  cmps(c,0,(int32_t)c->r[4],0); // 80156C14
  W32(c->r[1]+0x00000034u,c->r[0]); // 80156C18
  c->r[0]=0u+0x00000000u; // 80156C1C
  {uint32_t ea=c->r[1]+0x00000028u; WF64(ea,c->f[31]);} // 80156C20
  c->f[31]=c->f[1]; // 80156C24
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80156C28
  c->r[27]=c->r[3]|c->r[3]; // 80156C2C
  c->r[28]=c->r[4]|c->r[4]; // 80156C30
  c->r[29]=0u+0x00000000u; // 80156C34
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156C38
  if (!crb(c,2)) { goto L_80156C48; } // 80156C3C
  c->r[30]=0u+0x00000000u; // 80156C40
  goto L_80156C90; // 80156C44
L_80156C48:;
  c->r[30]=R32(c->r[3]+0x000007F0u); // 80156C48
L_80156C4C:;
  cmps(c,0,(int32_t)c->r[30],0); // 80156C4C
  if (crb(c,2)) { goto L_80156C8C; } // 80156C50
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156C54
  c->r[3]=c->r[30]|c->r[30]; // 80156C58
  c->r[31]=R32(c->r[30]+0x00000004u); // 80156C5C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80156C60
  c->ctr=c->r[12]; // 80156C64
  if (true) { c->lr=0x80156C6Cu; dispatch(c,c->ctr); } // 80156C68
  c->r[4]=c->r[3]|c->r[3]; // 80156C6C
  c->r[3]=c->r[28]|c->r[28]; // 80156C70
  c->lr=0x80156C78u; f_800B7948(c); // 80156C74
  cmps(c,0,(int32_t)c->r[3],0); // 80156C78
  if (!crb(c,2)) { goto L_80156C84; } // 80156C7C
  goto L_80156C90; // 80156C80
L_80156C84:;
  c->r[30]=c->r[31]|c->r[31]; // 80156C84
  IRQCHK(c); goto L_80156C4C; // 80156C88
L_80156C8C:;
  c->r[30]=0u+0x00000000u; // 80156C8C
L_80156C90:;
  cmps(c,0,(int32_t)c->r[30],0); // 80156C90
  if (crb(c,2)) { goto L_80156CCC; } // 80156C94
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156C98
  c->f[1]=c->f[31]; // 80156C9C
  c->r[3]=c->r[30]|c->r[30]; // 80156CA0
  c->r[12]=R32(c->r[12]+0x00000024u); // 80156CA4
  c->ctr=c->r[12]; // 80156CA8
  if (true) { c->lr=0x80156CB0u; dispatch(c,c->ctr); } // 80156CAC
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156CB0
  c->r[3]=c->r[30]|c->r[30]; // 80156CB4
  c->r[4]=0u+0x00000001u; // 80156CB8
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80156CBC
  c->ctr=c->r[12]; // 80156CC0
  if (true) { c->lr=0x80156CC8u; dispatch(c,c->ctr); } // 80156CC4
  goto L_80156E04; // 80156CC8
L_80156CCC:;
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80156CCC
  c->r[4]=c->r[28]|c->r[28]; // 80156CD0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156CD4
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80156CD8
  c->ctr=c->r[12]; // 80156CDC
  if (true) { c->lr=0x80156CE4u; dispatch(c,c->ctr); } // 80156CE0
  cmps(c,0,(int32_t)c->r[3],1); // 80156CE4
  if (!crb(c,2)) { goto L_80156CF4; } // 80156CE8
  c->r[29]=0u+0x00000001u; // 80156CEC
  goto L_80156D30; // 80156CF0
L_80156CF4:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 80156CF4
  cmps(c,0,(int32_t)c->r[3],0); // 80156CF8
  if (crb(c,2)) { goto L_80156D30; } // 80156CFC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156D00
  c->r[12]=R32(c->r[12]+0x00000014u); // 80156D04
  c->ctr=c->r[12]; // 80156D08
  if (true) { c->lr=0x80156D10u; dispatch(c,c->ctr); } // 80156D0C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80156D10
  c->r[4]=c->r[28]|c->r[28]; // 80156D14
  c->r[12]=R32(c->r[12]+0x00000014u); // 80156D18
  c->ctr=c->r[12]; // 80156D1C
  if (true) { c->lr=0x80156D24u; dispatch(c,c->ctr); } // 80156D20
  cmps(c,0,(int32_t)c->r[3],1); // 80156D24
  if (!crb(c,2)) { goto L_80156D30; } // 80156D28
  c->r[29]=0u+0x00000001u; // 80156D2C
L_80156D30:;
  cmps(c,0,(int32_t)c->r[29],0); // 80156D30
  if (!crb(c,2)) { goto L_80156D54; } // 80156D34
  c->r[4]=0u+0x802D0000u; // 80156D38
  c->r[5]=c->r[28]|c->r[28]; // 80156D3C
  c->r[4]=c->r[4]+0xFFFFE788u; // 80156D40
  c->r[3]=0u+0x00000001u; // 80156D44
  c->r[4]=c->r[4]+0x000001F3u; // 80156D48
  c->lr=0x80156D50u; f_801794C0(c); // 80156D4C
  goto L_80156F1C; // 80156D50
L_80156D54:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 80156D54
  c->f[1]=c->f[31]; // 80156D58
  c->r[3]=R32(c->r[3]+0x00000004u); // 80156D5C
  c->lr=0x80156D64u; f_80147AD4(c); // 80156D60
  cmps(c,0,(int32_t)c->r[3],0); // 80156D64
  c->r[30]=c->r[3]|c->r[3]; // 80156D68
  if (!crb(c,2)) { goto L_80156D88; } // 80156D6C
  c->r[4]=0u+0x802D0000u; // 80156D70
  c->r[3]=0u+0x00000000u; // 80156D74
  c->r[4]=c->r[4]+0xFFFFE788u; // 80156D78
  c->r[4]=c->r[4]+0x0000021Bu; // 80156D7C
  c->lr=0x80156D84u; f_80179434(c); // 80156D80
  goto L_80156F1C; // 80156D84
L_80156D88:;
  c->r[31]=R32(c->r[27]+0x000007F0u); // 80156D88
  cmps(c,0,(int32_t)c->r[31],0); // 80156D8C
  if (crb(c,2)) { goto L_80156DD4; } // 80156D90
  c->r[0]=R32(c->r[3]+0x00000000u); // 80156D94
  cmps(c,0,(int32_t)c->r[0],0); // 80156D98
  if (!crb(c,2)) { goto L_80156DAC; } // 80156D9C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80156DA0
  cmps(c,0,(int32_t)c->r[0],0); // 80156DA4
  if (crb(c,2)) { goto L_80156DBC; } // 80156DA8
L_80156DAC:;
  c->r[4]=0u+0x80330000u; // 80156DAC
  c->r[3]=0u+0x00000000u; // 80156DB0
  c->r[4]=c->r[4]+0x000008F4u; // 80156DB4
  c->lr=0x80156DBCu; f_80179434(c); // 80156DB8
L_80156DBC:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80156DBC
  W32(c->r[30]+0x00000000u,c->r[0]); // 80156DC0
  W32(c->r[30]+0x00000004u,c->r[31]); // 80156DC4
  W32(c->r[31]+0x00000000u,c->r[30]); // 80156DC8
  W32(c->r[27]+0x000007F0u,c->r[30]); // 80156DCC
  goto L_80156DF8; // 80156DD0
L_80156DD4:;
  c->r[0]=R32(c->r[27]+0x000007F4u); // 80156DD4
  W32(c->r[27]+0x000007F0u,c->r[3]); // 80156DD8
  cmps(c,0,(int32_t)c->r[0],0); // 80156DDC
  if (crb(c,2)) { goto L_80156DF4; } // 80156DE0
  c->r[4]=0u+0x80330000u; // 80156DE4
  c->r[3]=0u+0x00000000u; // 80156DE8
  c->r[4]=c->r[4]+0x000008CCu; // 80156DEC
  c->lr=0x80156DF4u; f_80179434(c); // 80156DF0
L_80156DF4:;
  W32(c->r[27]+0x000007F4u,c->r[30]); // 80156DF4
L_80156DF8:;
  c->r[3]=R32(c->r[27]+0x000007F8u); // 80156DF8
  c->r[0]=c->r[3]+0x00000001u; // 80156DFC
  W32(c->r[27]+0x000007F8u,c->r[0]); // 80156E00
L_80156E04:;
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80156E04
  c->r[4]=c->r[28]|c->r[28]; // 80156E08
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156E0C
  c->r[12]=R32(c->r[12]+0x00000024u); // 80156E10
  c->ctr=c->r[12]; // 80156E14
  if (true) { c->lr=0x80156E1Cu; dispatch(c,c->ctr); } // 80156E18
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156E1C
  c->r[29]=c->r[3]|c->r[3]; // 80156E20
  c->r[3]=c->r[30]|c->r[30]; // 80156E24
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80156E28
  c->r[4]=c->r[29]|c->r[29]; // 80156E2C
  c->ctr=c->r[12]; // 80156E30
  if (true) { c->lr=0x80156E38u; dispatch(c,c->ctr); } // 80156E34
  cmps(c,0,(int32_t)c->r[29],0); // 80156E38
  if (!crb(c,1)) { goto L_80156E70; } // 80156E3C
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80156E40
  c->r[4]=c->r[28]|c->r[28]; // 80156E44
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156E48
  c->r[12]=R32(c->r[12]+0x00000028u); // 80156E4C
  c->ctr=c->r[12]; // 80156E50
  if (true) { c->lr=0x80156E58u; dispatch(c,c->ctr); } // 80156E54
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156E58
  c->r[4]=c->r[3]|c->r[3]; // 80156E5C
  c->r[3]=c->r[30]|c->r[30]; // 80156E60
  c->r[12]=R32(c->r[12]+0x00000038u); // 80156E64
  c->ctr=c->r[12]; // 80156E68
  if (true) { c->lr=0x80156E70u; dispatch(c,c->ctr); } // 80156E6C
L_80156E70:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156E70
  c->r[3]=c->r[30]|c->r[30]; // 80156E74
  c->r[12]=R32(c->r[12]+0x00000018u); // 80156E78
  c->ctr=c->r[12]; // 80156E7C
  if (true) { c->lr=0x80156E84u; dispatch(c,c->ctr); } // 80156E80
  cmps(c,0,(int32_t)c->r[3],0); // 80156E84
  if (!crb(c,2)) { goto L_80156F1C; } // 80156E88
  c->r[3]=R32(c->r[27]+0x00000014u); // 80156E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80156E90
  if (crb(c,2)) { goto L_80156F1C; } // 80156E94
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156E98
  c->r[12]=R32(c->r[12]+0x00000014u); // 80156E9C
  c->ctr=c->r[12]; // 80156EA0
  if (true) { c->lr=0x80156EA8u; dispatch(c,c->ctr); } // 80156EA4
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80156EA8
  c->r[4]=c->r[28]|c->r[28]; // 80156EAC
  c->r[12]=R32(c->r[12]+0x00000014u); // 80156EB0
  c->ctr=c->r[12]; // 80156EB4
  if (true) { c->lr=0x80156EBCu; dispatch(c,c->ctr); } // 80156EB8
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156EBC
  c->r[4]=c->r[3]|c->r[3]; // 80156EC0
  c->r[3]=c->r[30]|c->r[30]; // 80156EC4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80156EC8
  c->ctr=c->r[12]; // 80156ECC
  if (true) { c->lr=0x80156ED4u; dispatch(c,c->ctr); } // 80156ED0
  cmps(c,0,(int32_t)c->r[29],0); // 80156ED4
  if (!crb(c,2)) { goto L_80156F1C; } // 80156ED8
  c->r[3]=R32(c->r[27]+0x00000014u); // 80156EDC
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156EE0
  c->r[12]=R32(c->r[12]+0x00000014u); // 80156EE4
  c->ctr=c->r[12]; // 80156EE8
  if (true) { c->lr=0x80156EF0u; dispatch(c,c->ctr); } // 80156EEC
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80156EF0
  c->r[4]=c->r[28]|c->r[28]; // 80156EF4
  c->r[12]=R32(c->r[12]+0x00000018u); // 80156EF8
  c->ctr=c->r[12]; // 80156EFC
  if (true) { c->lr=0x80156F04u; dispatch(c,c->ctr); } // 80156F00
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156F04
  c->r[4]=c->r[3]|c->r[3]; // 80156F08
  c->r[3]=c->r[30]|c->r[30]; // 80156F0C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80156F10
  c->ctr=c->r[12]; // 80156F14
  if (true) { c->lr=0x80156F1Cu; dispatch(c,c->ctr); } // 80156F18
L_80156F1C:;
  {uint32_t ea=c->r[1]+0x00000028u; c->f[31]=RF64(ea);} // 80156F1C
  {uint32_t ea=c->r[1]+0x00000014u; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80156F20
  c->r[0]=R32(c->r[1]+0x00000034u); // 80156F24
  c->lr=c->r[0]; // 80156F28
  c->r[1]=c->r[1]+0x00000030u; // 80156F2C
  return; // 80156F30
}

// SetAisacRandomRange__14CriAuPlayerLocFPCcffR8CriError
void f_80156F34(Ctx* __restrict c) {
  trace_call(0x80156F34u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80156F34
  c->r[0]=c->lr; // 80156F38
  W32(c->r[1]+0x00000044u,c->r[0]); // 80156F3C
  c->r[11]=c->r[1]+0x00000020u; // 80156F40
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80156F44
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80156F48
  {uint32_t ea=c->r[1]+0x00000020u; WF64(ea,c->f[30]);} // 80156F4C
  {uint32_t ea=c->r[1]+0x00000028u; psq_store(c,30,ea,0,0);} // 80156F50
  c->lr=0x80156F58u; f_800ADA2C(c); // 80156F54
  c->f[30]=c->f[1]; // 80156F58
  cmps(c,0,(int32_t)c->r[4],0); // 80156F5C
  c->r[0]=0u+0x00000000u; // 80156F60
  c->f[31]=c->f[2]; // 80156F64
  W32(c->r[5]+0x00000000u,c->r[0]); // 80156F68
  c->r[27]=c->r[3]|c->r[3]; // 80156F6C
  c->r[28]=c->r[4]|c->r[4]; // 80156F70
  c->r[29]=0u+0x00000000u; // 80156F74
  if (!crb(c,2)) { goto L_80156F84; } // 80156F78
  c->r[30]=0u+0x00000000u; // 80156F7C
  goto L_80156FCC; // 80156F80
L_80156F84:;
  c->r[30]=R32(c->r[3]+0x000007F0u); // 80156F84
L_80156F88:;
  cmps(c,0,(int32_t)c->r[30],0); // 80156F88
  if (crb(c,2)) { goto L_80156FC8; } // 80156F8C
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156F90
  c->r[3]=c->r[30]|c->r[30]; // 80156F94
  c->r[31]=R32(c->r[30]+0x00000004u); // 80156F98
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80156F9C
  c->ctr=c->r[12]; // 80156FA0
  if (true) { c->lr=0x80156FA8u; dispatch(c,c->ctr); } // 80156FA4
  c->r[4]=c->r[3]|c->r[3]; // 80156FA8
  c->r[3]=c->r[28]|c->r[28]; // 80156FAC
  c->lr=0x80156FB4u; f_800B7948(c); // 80156FB0
  cmps(c,0,(int32_t)c->r[3],0); // 80156FB4
  if (!crb(c,2)) { goto L_80156FC0; } // 80156FB8
  goto L_80156FCC; // 80156FBC
L_80156FC0:;
  c->r[30]=c->r[31]|c->r[31]; // 80156FC0
  IRQCHK(c); goto L_80156F88; // 80156FC4
L_80156FC8:;
  c->r[30]=0u+0x00000000u; // 80156FC8
L_80156FCC:;
  cmps(c,0,(int32_t)c->r[30],0); // 80156FCC
  if (crb(c,2)) { goto L_80156FF4; } // 80156FD0
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80156FD4
  c->f[1]=c->f[30]; // 80156FD8
  c->f[2]=c->f[31]; // 80156FDC
  c->r[3]=c->r[30]|c->r[30]; // 80156FE0
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 80156FE4
  c->ctr=c->r[12]; // 80156FE8
  if (true) { c->lr=0x80156FF0u; dispatch(c,c->ctr); } // 80156FEC
  goto L_80157148; // 80156FF0
L_80156FF4:;
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80156FF4
  c->r[4]=c->r[28]|c->r[28]; // 80156FF8
  c->r[12]=R32(c->r[3]+0x00000000u); // 80156FFC
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80157000
  c->ctr=c->r[12]; // 80157004
  if (true) { c->lr=0x8015700Cu; dispatch(c,c->ctr); } // 80157008
  cmps(c,0,(int32_t)c->r[3],1); // 8015700C
  if (!crb(c,2)) { goto L_8015701C; } // 80157010
  c->r[29]=0u+0x00000001u; // 80157014
  goto L_80157058; // 80157018
L_8015701C:;
  c->r[3]=R32(c->r[27]+0x00000014u); // 8015701C
  cmps(c,0,(int32_t)c->r[3],0); // 80157020
  if (crb(c,2)) { goto L_80157058; } // 80157024
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157028
  c->r[12]=R32(c->r[12]+0x00000014u); // 8015702C
  c->ctr=c->r[12]; // 80157030
  if (true) { c->lr=0x80157038u; dispatch(c,c->ctr); } // 80157034
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80157038
  c->r[4]=c->r[28]|c->r[28]; // 8015703C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157040
  c->ctr=c->r[12]; // 80157044
  if (true) { c->lr=0x8015704Cu; dispatch(c,c->ctr); } // 80157048
  cmps(c,0,(int32_t)c->r[3],1); // 8015704C
  if (!crb(c,2)) { goto L_80157058; } // 80157050
  c->r[29]=0u+0x00000001u; // 80157054
L_80157058:;
  cmps(c,0,(int32_t)c->r[29],0); // 80157058
  if (!crb(c,2)) { goto L_8015707C; } // 8015705C
  c->r[4]=0u+0x802D0000u; // 80157060
  c->r[5]=c->r[28]|c->r[28]; // 80157064
  c->r[4]=c->r[4]+0xFFFFE788u; // 80157068
  c->r[3]=0u+0x00000001u; // 8015706C
  c->r[4]=c->r[4]+0x00000245u; // 80157070
  c->lr=0x80157078u; f_801794C0(c); // 80157074
  goto L_80157258; // 80157078
L_8015707C:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 8015707C
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 80157080
  c->r[3]=R32(c->r[3]+0x00000004u); // 80157084
  c->lr=0x8015708Cu; f_80147AD4(c); // 80157088
  cmps(c,0,(int32_t)c->r[3],0); // 8015708C
  c->r[30]=c->r[3]|c->r[3]; // 80157090
  if (!crb(c,2)) { goto L_801570B0; } // 80157094
  c->r[4]=0u+0x802D0000u; // 80157098
  c->r[3]=0u+0x00000000u; // 8015709C
  c->r[4]=c->r[4]+0xFFFFE788u; // 801570A0
  c->r[4]=c->r[4]+0x0000026Cu; // 801570A4
  c->lr=0x801570ACu; f_80179434(c); // 801570A8
  goto L_80157258; // 801570AC
L_801570B0:;
  c->r[31]=R32(c->r[27]+0x000007F0u); // 801570B0
  cmps(c,0,(int32_t)c->r[31],0); // 801570B4
  if (crb(c,2)) { goto L_801570FC; } // 801570B8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801570BC
  cmps(c,0,(int32_t)c->r[0],0); // 801570C0
  if (!crb(c,2)) { goto L_801570D4; } // 801570C4
  c->r[0]=R32(c->r[3]+0x00000004u); // 801570C8
  cmps(c,0,(int32_t)c->r[0],0); // 801570CC
  if (crb(c,2)) { goto L_801570E4; } // 801570D0
L_801570D4:;
  c->r[4]=0u+0x80330000u; // 801570D4
  c->r[3]=0u+0x00000000u; // 801570D8
  c->r[4]=c->r[4]+0x000008F4u; // 801570DC
  c->lr=0x801570E4u; f_80179434(c); // 801570E0
L_801570E4:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 801570E4
  W32(c->r[30]+0x00000000u,c->r[0]); // 801570E8
  W32(c->r[30]+0x00000004u,c->r[31]); // 801570EC
  W32(c->r[31]+0x00000000u,c->r[30]); // 801570F0
  W32(c->r[27]+0x000007F0u,c->r[30]); // 801570F4
  goto L_80157120; // 801570F8
L_801570FC:;
  c->r[0]=R32(c->r[27]+0x000007F4u); // 801570FC
  W32(c->r[27]+0x000007F0u,c->r[3]); // 80157100
  cmps(c,0,(int32_t)c->r[0],0); // 80157104
  if (crb(c,2)) { goto L_8015711C; } // 80157108
  c->r[4]=0u+0x80330000u; // 8015710C
  c->r[3]=0u+0x00000000u; // 80157110
  c->r[4]=c->r[4]+0x000008CCu; // 80157114
  c->lr=0x8015711Cu; f_80179434(c); // 80157118
L_8015711C:;
  W32(c->r[27]+0x000007F4u,c->r[30]); // 8015711C
L_80157120:;
  c->r[4]=R32(c->r[27]+0x000007F8u); // 80157120
  c->f[1]=c->f[30]; // 80157124
  c->f[2]=c->f[31]; // 80157128
  c->r[3]=c->r[30]|c->r[30]; // 8015712C
  c->r[0]=c->r[4]+0x00000001u; // 80157130
  W32(c->r[27]+0x000007F8u,c->r[0]); // 80157134
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80157138
  c->r[12]=R32(c->r[12]+0x0000002Cu); // 8015713C
  c->ctr=c->r[12]; // 80157140
  if (true) { c->lr=0x80157148u; dispatch(c,c->ctr); } // 80157144
L_80157148:;
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80157148
  c->r[4]=c->r[28]|c->r[28]; // 8015714C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157150
  c->r[12]=R32(c->r[12]+0x00000024u); // 80157154
  c->ctr=c->r[12]; // 80157158
  if (true) { c->lr=0x80157160u; dispatch(c,c->ctr); } // 8015715C
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80157160
  c->r[29]=c->r[3]|c->r[3]; // 80157164
  c->r[3]=c->r[30]|c->r[30]; // 80157168
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8015716C
  c->r[4]=c->r[29]|c->r[29]; // 80157170
  c->ctr=c->r[12]; // 80157174
  if (true) { c->lr=0x8015717Cu; dispatch(c,c->ctr); } // 80157178
  cmps(c,0,(int32_t)c->r[29],0); // 8015717C
  if (!crb(c,1)) { goto L_801571B4; } // 80157180
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80157184
  c->r[4]=c->r[28]|c->r[28]; // 80157188
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015718C
  c->r[12]=R32(c->r[12]+0x00000028u); // 80157190
  c->ctr=c->r[12]; // 80157194
  if (true) { c->lr=0x8015719Cu; dispatch(c,c->ctr); } // 80157198
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 8015719C
  c->r[4]=c->r[3]|c->r[3]; // 801571A0
  c->r[3]=c->r[30]|c->r[30]; // 801571A4
  c->r[12]=R32(c->r[12]+0x00000038u); // 801571A8
  c->ctr=c->r[12]; // 801571AC
  if (true) { c->lr=0x801571B4u; dispatch(c,c->ctr); } // 801571B0
L_801571B4:;
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801571B4
  c->r[3]=c->r[30]|c->r[30]; // 801571B8
  c->r[12]=R32(c->r[12]+0x00000018u); // 801571BC
  c->ctr=c->r[12]; // 801571C0
  if (true) { c->lr=0x801571C8u; dispatch(c,c->ctr); } // 801571C4
  cmps(c,0,(int32_t)c->r[3],0); // 801571C8
  if (!crb(c,2)) { goto L_80157258; } // 801571CC
  c->r[3]=R32(c->r[27]+0x00000014u); // 801571D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801571D4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801571D8
  c->ctr=c->r[12]; // 801571DC
  if (true) { c->lr=0x801571E4u; dispatch(c,c->ctr); } // 801571E0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801571E4
  c->r[4]=c->r[28]|c->r[28]; // 801571E8
  c->r[12]=R32(c->r[12]+0x00000014u); // 801571EC
  c->ctr=c->r[12]; // 801571F0
  if (true) { c->lr=0x801571F8u; dispatch(c,c->ctr); } // 801571F4
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801571F8
  c->r[4]=c->r[3]|c->r[3]; // 801571FC
  c->r[3]=c->r[30]|c->r[30]; // 80157200
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157204
  c->ctr=c->r[12]; // 80157208
  if (true) { c->lr=0x80157210u; dispatch(c,c->ctr); } // 8015720C
  cmps(c,0,(int32_t)c->r[29],0); // 80157210
  if (!crb(c,2)) { goto L_80157258; } // 80157214
  c->r[3]=R32(c->r[27]+0x00000014u); // 80157218
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015721C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157220
  c->ctr=c->r[12]; // 80157224
  if (true) { c->lr=0x8015722Cu; dispatch(c,c->ctr); } // 80157228
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 8015722C
  c->r[4]=c->r[28]|c->r[28]; // 80157230
  c->r[12]=R32(c->r[12]+0x00000018u); // 80157234
  c->ctr=c->r[12]; // 80157238
  if (true) { c->lr=0x80157240u; dispatch(c,c->ctr); } // 8015723C
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 80157240
  c->r[4]=c->r[3]|c->r[3]; // 80157244
  c->r[3]=c->r[30]|c->r[30]; // 80157248
  c->r[12]=R32(c->r[12]+0x00000038u); // 8015724C
  c->ctr=c->r[12]; // 80157250
  if (true) { c->lr=0x80157258u; dispatch(c,c->ctr); } // 80157254
L_80157258:;
  c->r[11]=c->r[1]+0x00000020u; // 80157258
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8015725C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80157260
  {uint32_t ea=c->r[1]+0x00000028u; psq_load(c,30,ea,0,0);} // 80157264
  {uint32_t ea=c->r[1]+0x00000020u; c->f[30]=RF64(ea);} // 80157268
  c->lr=0x80157270u; f_800ADA78(c); // 8015726C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80157270
  c->lr=c->r[0]; // 80157274
  c->r[1]=c->r[1]+0x00000040u; // 80157278
  return; // 8015727C
}

// GetAisacValue__14CriAuPlayerLocFPCcQ25CriAu14AisacGraphTypeR8CriError
void f_80157280(Ctx* __restrict c) {
  trace_call(0x80157280u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157280
  c->r[0]=c->lr; // 80157284
  W32(c->r[1]+0x00000044u,c->r[0]); // 80157288
  c->r[11]=c->r[1]+0x00000030u; // 8015728C
  {uint32_t ea=c->r[1]+0x00000030u; WF64(ea,c->f[31]);} // 80157290
  {uint32_t ea=c->r[1]+0x00000038u; psq_store(c,31,ea,0,0);} // 80157294
  c->lr=0x8015729Cu; f_800ADA2C(c); // 80157298
  c->r[7]=0u+0x00000000u; // 8015729C
  W32(c->r[6]+0x00000000u,c->r[7]); // 801572A0
  c->r[27]=c->r[3]|c->r[3]; // 801572A4
  c->r[28]=c->r[4]|c->r[4]; // 801572A8
  c->r[0]=R32(c->r[3]+0x00000014u); // 801572AC
  c->r[29]=c->r[5]|c->r[5]; // 801572B0
  cmps(c,0,(int32_t)c->r[0],0); // 801572B4
  if (!crb(c,2)) { goto L_801572D8; } // 801572B8
  c->r[4]=0u+0x802D0000u; // 801572BC
  c->r[3]=0u+0x00000001u; // 801572C0
  c->r[4]=c->r[4]+0xFFFFE788u; // 801572C4
  c->r[4]=c->r[4]+0x00000296u; // 801572C8
  c->lr=0x801572D0u; f_80179434(c); // 801572CC
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 801572D0
  goto L_80157438; // 801572D4
L_801572D8:;
  cmps(c,0,(int32_t)c->r[4],0); // 801572D8
  W32(c->r[1]+0x00000008u,c->r[7]); // 801572DC
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[31]=c->ps1[31]=RF32(ea);} // 801572E0
  if (!crb(c,2)) { goto L_801572F0; } // 801572E4
  c->r[30]=0u+0x00000000u; // 801572E8
  goto L_80157338; // 801572EC
L_801572F0:;
  c->r[30]=R32(c->r[3]+0x000007F0u); // 801572F0
L_801572F4:;
  cmps(c,0,(int32_t)c->r[30],0); // 801572F4
  if (crb(c,2)) { goto L_80157334; } // 801572F8
  c->r[12]=R32(c->r[30]+0x0000000Cu); // 801572FC
  c->r[3]=c->r[30]|c->r[30]; // 80157300
  c->r[31]=R32(c->r[30]+0x00000004u); // 80157304
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157308
  c->ctr=c->r[12]; // 8015730C
  if (true) { c->lr=0x80157314u; dispatch(c,c->ctr); } // 80157310
  c->r[4]=c->r[3]|c->r[3]; // 80157314
  c->r[3]=c->r[28]|c->r[28]; // 80157318
  c->lr=0x80157320u; f_800B7948(c); // 8015731C
  cmps(c,0,(int32_t)c->r[3],0); // 80157320
  if (!crb(c,2)) { goto L_8015732C; } // 80157324
  goto L_80157338; // 80157328
L_8015732C:;
  c->r[30]=c->r[31]|c->r[31]; // 8015732C
  IRQCHK(c); goto L_801572F4; // 80157330
L_80157334:;
  c->r[30]=0u+0x00000000u; // 80157334
L_80157338:;
  cmps(c,0,(int32_t)c->r[29],0); // 80157338
  if (!crb(c,2)) { goto L_801573A8; } // 8015733C
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80157340
  c->r[4]=c->r[28]|c->r[28]; // 80157344
  c->r[5]=c->r[29]|c->r[29]; // 80157348
  c->r[6]=c->r[30]|c->r[30]; // 8015734C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157350
  c->r[7]=c->r[1]+0x00000008u; // 80157354
  {uint32_t ea=c->r[2]+0xFFFFB344u; c->f[31]=c->ps1[31]=RF32(ea);} // 80157358
  c->r[12]=R32(c->r[12]+0x00000020u); // 8015735C
  c->ctr=c->r[12]; // 80157360
  if (true) { c->lr=0x80157368u; dispatch(c,c->ctr); } // 80157364
  c->r[3]=R32(c->r[27]+0x00000014u); // 80157368
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 8015736C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157370
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157374
  c->ctr=c->r[12]; // 80157378
  if (true) { c->lr=0x80157380u; dispatch(c,c->ctr); } // 8015737C
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80157380
  c->r[4]=c->r[28]|c->r[28]; // 80157384
  c->r[5]=c->r[29]|c->r[29]; // 80157388
  c->r[6]=c->r[30]|c->r[30]; // 8015738C
  c->r[12]=R32(c->r[12]+0x00000028u); // 80157390
  c->r[7]=c->r[1]+0x00000008u; // 80157394
  c->ctr=c->r[12]; // 80157398
  if (true) { c->lr=0x801573A0u; dispatch(c,c->ctr); } // 8015739C
  c->f[31]=c->ps1[31]=S(c->f[31]*c->f[1]); // 801573A0
  goto L_80157408; // 801573A4
L_801573A8:;
  c->r[3]=R32(c->r[27]+0x000007CCu); // 801573A8
  c->r[4]=c->r[28]|c->r[28]; // 801573AC
  c->r[5]=c->r[29]|c->r[29]; // 801573B0
  c->r[6]=c->r[30]|c->r[30]; // 801573B4
  c->r[12]=R32(c->r[3]+0x00000000u); // 801573B8
  c->r[7]=c->r[1]+0x00000008u; // 801573BC
  c->r[12]=R32(c->r[12]+0x00000020u); // 801573C0
  c->ctr=c->r[12]; // 801573C4
  if (true) { c->lr=0x801573CCu; dispatch(c,c->ctr); } // 801573C8
  c->r[3]=R32(c->r[27]+0x00000014u); // 801573CC
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 801573D0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801573D4
  c->r[12]=R32(c->r[12]+0x00000014u); // 801573D8
  c->ctr=c->r[12]; // 801573DC
  if (true) { c->lr=0x801573E4u; dispatch(c,c->ctr); } // 801573E0
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801573E4
  c->r[4]=c->r[28]|c->r[28]; // 801573E8
  c->r[5]=c->r[29]|c->r[29]; // 801573EC
  c->r[6]=c->r[30]|c->r[30]; // 801573F0
  c->r[12]=R32(c->r[12]+0x00000028u); // 801573F4
  c->r[7]=c->r[1]+0x00000008u; // 801573F8
  c->ctr=c->r[12]; // 801573FC
  if (true) { c->lr=0x80157404u; dispatch(c,c->ctr); } // 80157400
  c->f[31]=c->ps1[31]=S(c->f[31]+c->f[1]); // 80157404
L_80157408:;
  c->r[0]=R32(c->r[1]+0x00000008u); // 80157408
  cmps(c,0,(int32_t)c->r[0],0); // 8015740C
  if (!crb(c,2)) { goto L_80157434; } // 80157410
  c->r[4]=0u+0x802D0000u; // 80157414
  c->r[5]=c->r[28]|c->r[28]; // 80157418
  c->r[4]=c->r[4]+0xFFFFE788u; // 8015741C
  c->r[3]=0u+0x00000001u; // 80157420
  c->r[4]=c->r[4]+0x000002BCu; // 80157424
  c->lr=0x8015742Cu; f_801794C0(c); // 80157428
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 8015742C
  goto L_80157438; // 80157430
L_80157434:;
  c->f[1]=c->f[31]; // 80157434
L_80157438:;
  c->r[11]=c->r[1]+0x00000030u; // 80157438
  {uint32_t ea=c->r[1]+0x00000038u; psq_load(c,31,ea,0,0);} // 8015743C
  {uint32_t ea=c->r[1]+0x00000030u; c->f[31]=RF64(ea);} // 80157440
  c->lr=0x80157448u; f_800ADA78(c); // 80157444
  c->r[0]=R32(c->r[1]+0x00000044u); // 80157448
  c->lr=c->r[0]; // 8015744C
  c->r[1]=c->r[1]+0x00000040u; // 80157450
  return; // 80157454
}

// GetNumberOfAisacs__14CriAuPlayerLocFR8CriError
void f_80157458(Ctx* __restrict c) {
  trace_call(0x80157458u);
  c->r[0]=0u+0x00000000u; // 80157458
  W32(c->r[4]+0x00000000u,c->r[0]); // 8015745C
  c->r[3]=R32(c->r[3]+0x000007F8u); // 80157460
  return; // 80157464
}

// GetAisacControlName__14CriAuPlayerLocFUlR8CriError
void f_80157468(Ctx* __restrict c) {
  trace_call(0x80157468u);
  c->r[0]=0u+0x00000000u; // 80157468
  W32(c->r[5]+0x00000000u,c->r[0]); // 8015746C
  c->r[0]=c->r[4]+0x00000001u; // 80157470
  c->r[5]=0u+0x00000000u; // 80157474
  c->r[3]=R32(c->r[3]+0x000007F0u); // 80157478
  c->ctr=c->r[0]; // 8015747C
  cmpu(c,0,c->r[4],0x00000000u); // 80157480
  if (crb(c,0)) { goto L_801574A4; } // 80157484
L_80157488:;
  cmps(c,0,(int32_t)c->r[3],0); // 80157488
  if (crb(c,2)) { goto L_801574A4; } // 8015748C
  cmpu(c,0,c->r[5],c->r[4]); // 80157490
  if (crb(c,2)) { goto L_801574A4; } // 80157494
  c->r[3]=R32(c->r[3]+0x00000004u); // 80157498
  c->r[5]=c->r[5]+0x00000001u; // 8015749C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80157488; } // 801574A0
L_801574A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801574A4
  if (crb(c,2)) { goto L_801574BC; } // 801574A8
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 801574AC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801574B0
  c->ctr=c->r[12]; // 801574B4
  if (true) { dispatch(c,c->ctr); return; } // 801574B8
L_801574BC:;
  c->r[3]=0u+0x00000000u; // 801574BC
  return; // 801574C0
}

// AttachAisac__14CriAuPlayerLocFPCcUlR8CriError
void f_801574C4(Ctx* __restrict c) {
  trace_call(0x801574C4u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801574C4
  c->r[0]=c->lr; // 801574C8
  W32(c->r[1]+0x00000034u,c->r[0]); // 801574CC
  c->r[11]=c->r[1]+0x00000030u; // 801574D0
  c->lr=0x801574D8u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801574D4
  cmpu(c,0,c->r[5],0x00000008u); // 801574D8
  c->r[0]=0u+0x00000000u; // 801574DC
  W32(c->r[6]+0x00000000u,c->r[0]); // 801574E0
  c->r[27]=c->r[3]|c->r[3]; // 801574E4
  c->r[28]=c->r[4]|c->r[4]; // 801574E8
  c->r[23]=c->r[5]|c->r[5]; // 801574EC
  c->r[29]=c->r[6]|c->r[6]; // 801574F0
  if (!crb(c,1)) { goto L_80157518; } // 801574F4
  c->r[3]=0u+0x802D0000u; // 801574F8
  c->r[0]=0u+0xFFFFFFFFu; // 801574FC
  c->r[3]=c->r[3]+0xFFFFE788u; // 80157500
  W32(c->r[6]+0x00000000u,c->r[0]); // 80157504
  c->r[4]=c->r[3]+0x000002E3u; // 80157508
  c->r[3]=0u+0x00000000u; // 8015750C
  c->lr=0x80157514u; f_80179434(c); // 80157510
  goto L_80157790; // 80157514
L_80157518:;
  c->r[3]=R32(c->r[3]+0x00000010u); // 80157518
  c->r[4]=c->r[29]|c->r[29]; // 8015751C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157520
  c->r[12]=R32(c->r[12]+0x0000001Cu); // 80157524
  c->ctr=c->r[12]; // 80157528
  if (true) { c->lr=0x80157530u; dispatch(c,c->ctr); } // 8015752C
  c->r[26]=c->r[3]|c->r[3]; // 80157530
  c->r[31]=0u+0x00000000u; // 80157534
  goto L_80157760; // 80157538
L_8015753C:;
  c->r[3]=R32(c->r[27]+0x00000010u); // 8015753C
  c->r[4]=c->r[31]|c->r[31]; // 80157540
  c->r[5]=c->r[29]|c->r[29]; // 80157544
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157548
  c->r[12]=R32(c->r[12]+0x00000018u); // 8015754C
  c->ctr=c->r[12]; // 80157550
  if (true) { c->lr=0x80157558u; dispatch(c,c->ctr); } // 80157554
  cmps(c,0,(int32_t)c->r[3],0); // 80157558
  c->r[24]=c->r[3]|c->r[3]; // 8015755C
  if (crb(c,2)) { goto L_80157768; } // 80157560
  c->r[4]=c->r[28]|c->r[28]; // 80157564
  c->lr=0x8015756Cu; f_8014C998(c); // 80157568
  cmps(c,0,(int32_t)c->r[3],0); // 8015756C
  c->r[30]=c->r[3]|c->r[3]; // 80157570
  if (crb(c,2)) { goto L_8015775C; } // 80157574
  c->r[3]=R32(c->r[27]+0x000007CCu); // 80157578
  c->r[4]=c->r[30]|c->r[30]; // 8015757C
  c->r[5]=c->r[23]|c->r[23]; // 80157580
  c->r[6]=c->r[24]|c->r[24]; // 80157584
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157588
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 8015758C
  c->ctr=c->r[12]; // 80157590
  if (true) { c->lr=0x80157598u; dispatch(c,c->ctr); } // 80157594
  cmps(c,0,(int32_t)c->r[3],0); // 80157598
  if (!crb(c,2)) { goto L_801575C4; } // 8015759C
  c->r[4]=0u+0x802D0000u; // 801575A0
  c->r[0]=0u+0xFFFFFFFFu; // 801575A4
  c->r[4]=c->r[4]+0xFFFFE788u; // 801575A8
  W32(c->r[29]+0x00000000u,c->r[0]); // 801575AC
  c->r[5]=c->r[28]|c->r[28]; // 801575B0
  c->r[3]=0u+0x00000000u; // 801575B4
  c->r[4]=c->r[4]+0x0000030Bu; // 801575B8
  c->lr=0x801575C0u; f_801794C0(c); // 801575BC
  goto L_80157790; // 801575C0
L_801575C4:;
  c->r[4]=R32(c->r[24]+0x00000150u); // 801575C4
  c->r[3]=c->r[30]|c->r[30]; // 801575C8
  c->r[0]=c->r[4]+0x00000001u; // 801575CC
  W32(c->r[24]+0x00000150u,c->r[0]); // 801575D0
  c->lr=0x801575D8u; f_80146374(c); // 801575D4
  cmps(c,0,(int32_t)c->r[3],0); // 801575D8
  c->r[25]=c->r[3]|c->r[3]; // 801575DC
  if (!crb(c,2)) { goto L_801575EC; } // 801575E0
  c->r[23]=0u+0x00000000u; // 801575E4
  goto L_80157634; // 801575E8
L_801575EC:;
  c->r[23]=R32(c->r[27]+0x000007F0u); // 801575EC
L_801575F0:;
  cmps(c,0,(int32_t)c->r[23],0); // 801575F0
  if (crb(c,2)) { goto L_80157630; } // 801575F4
  c->r[12]=R32(c->r[23]+0x0000000Cu); // 801575F8
  c->r[3]=c->r[23]|c->r[23]; // 801575FC
  c->r[24]=R32(c->r[23]+0x00000004u); // 80157600
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157604
  c->ctr=c->r[12]; // 80157608
  if (true) { c->lr=0x80157610u; dispatch(c,c->ctr); } // 8015760C
  c->r[4]=c->r[3]|c->r[3]; // 80157610
  c->r[3]=c->r[25]|c->r[25]; // 80157614
  c->lr=0x8015761Cu; f_800B7948(c); // 80157618
  cmps(c,0,(int32_t)c->r[3],0); // 8015761C
  if (!crb(c,2)) { goto L_80157628; } // 80157620
  goto L_80157634; // 80157624
L_80157628:;
  c->r[23]=c->r[24]|c->r[24]; // 80157628
  IRQCHK(c); goto L_801575F0; // 8015762C
L_80157630:;
  c->r[23]=0u+0x00000000u; // 80157630
L_80157634:;
  cmps(c,0,(int32_t)c->r[23],0); // 80157634
  if (!crb(c,2)) { goto L_801576D4; } // 80157638
  c->r[3]=R32(c->r[27]+0x00000010u); // 8015763C
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 80157640
  c->r[3]=R32(c->r[3]+0x00000004u); // 80157644
  c->lr=0x8015764Cu; f_80147AD4(c); // 80157648
  cmps(c,0,(int32_t)c->r[3],0); // 8015764C
  c->r[23]=c->r[3]|c->r[3]; // 80157650
  if (crb(c,2)) { goto L_801576D4; } // 80157654
  c->r[24]=R32(c->r[27]+0x000007F0u); // 80157658
  cmps(c,0,(int32_t)c->r[24],0); // 8015765C
  if (crb(c,2)) { goto L_801576A4; } // 80157660
  c->r[0]=R32(c->r[3]+0x00000000u); // 80157664
  cmps(c,0,(int32_t)c->r[0],0); // 80157668
  if (!crb(c,2)) { goto L_8015767C; } // 8015766C
  c->r[0]=R32(c->r[3]+0x00000004u); // 80157670
  cmps(c,0,(int32_t)c->r[0],0); // 80157674
  if (crb(c,2)) { goto L_8015768C; } // 80157678
L_8015767C:;
  c->r[4]=0u+0x80330000u; // 8015767C
  c->r[3]=0u+0x00000000u; // 80157680
  c->r[4]=c->r[4]+0x000008F4u; // 80157684
  c->lr=0x8015768Cu; f_80179434(c); // 80157688
L_8015768C:;
  c->r[0]=R32(c->r[24]+0x00000000u); // 8015768C
  W32(c->r[23]+0x00000000u,c->r[0]); // 80157690
  W32(c->r[23]+0x00000004u,c->r[24]); // 80157694
  W32(c->r[24]+0x00000000u,c->r[23]); // 80157698
  W32(c->r[27]+0x000007F0u,c->r[23]); // 8015769C
  goto L_801576C8; // 801576A0
L_801576A4:;
  c->r[0]=R32(c->r[27]+0x000007F4u); // 801576A4
  W32(c->r[27]+0x000007F0u,c->r[3]); // 801576A8
  cmps(c,0,(int32_t)c->r[0],0); // 801576AC
  if (crb(c,2)) { goto L_801576C4; } // 801576B0
  c->r[4]=0u+0x80330000u; // 801576B4
  c->r[3]=0u+0x00000000u; // 801576B8
  c->r[4]=c->r[4]+0x000008CCu; // 801576BC
  c->lr=0x801576C4u; f_80179434(c); // 801576C0
L_801576C4:;
  W32(c->r[27]+0x000007F4u,c->r[23]); // 801576C4
L_801576C8:;
  c->r[3]=R32(c->r[27]+0x000007F8u); // 801576C8
  c->r[0]=c->r[3]+0x00000001u; // 801576CC
  W32(c->r[27]+0x000007F8u,c->r[0]); // 801576D0
L_801576D4:;
  cmps(c,0,(int32_t)c->r[23],0); // 801576D4
  if (crb(c,2)) { goto L_80157768; } // 801576D8
  c->r[3]=c->r[30]|c->r[30]; // 801576DC
  c->lr=0x801576E4u; f_80146374(c); // 801576E0
  c->r[4]=c->r[3]|c->r[3]; // 801576E4
  c->r[3]=R32(c->r[27]+0x000007CCu); // 801576E8
  c->r[12]=R32(c->r[3]+0x00000000u); // 801576EC
  c->r[12]=R32(c->r[12]+0x00000024u); // 801576F0
  c->ctr=c->r[12]; // 801576F4
  if (true) { c->lr=0x801576FCu; dispatch(c,c->ctr); } // 801576F8
  c->r[12]=R32(c->r[23]+0x0000000Cu); // 801576FC
  c->r[24]=c->r[3]|c->r[3]; // 80157700
  c->r[3]=c->r[23]|c->r[23]; // 80157704
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80157708
  c->r[4]=c->r[24]|c->r[24]; // 8015770C
  c->ctr=c->r[12]; // 80157710
  if (true) { c->lr=0x80157718u; dispatch(c,c->ctr); } // 80157714
  cmps(c,0,(int32_t)c->r[24],0); // 80157718
  if (!crb(c,1)) { goto L_80157768; } // 8015771C
  c->r[3]=c->r[30]|c->r[30]; // 80157720
  c->lr=0x80157728u; f_80146374(c); // 80157724
  c->r[4]=c->r[3]|c->r[3]; // 80157728
  c->r[3]=R32(c->r[27]+0x000007CCu); // 8015772C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157730
  c->r[12]=R32(c->r[12]+0x00000028u); // 80157734
  c->ctr=c->r[12]; // 80157738
  if (true) { c->lr=0x80157740u; dispatch(c,c->ctr); } // 8015773C
  c->r[12]=R32(c->r[23]+0x0000000Cu); // 80157740
  c->r[4]=c->r[3]|c->r[3]; // 80157744
  c->r[3]=c->r[23]|c->r[23]; // 80157748
  c->r[12]=R32(c->r[12]+0x00000038u); // 8015774C
  c->ctr=c->r[12]; // 80157750
  if (true) { c->lr=0x80157758u; dispatch(c,c->ctr); } // 80157754
  goto L_80157768; // 80157758
L_8015775C:;
  c->r[31]=c->r[31]+0x00000001u; // 8015775C
L_80157760:;
  cmpu(c,0,c->r[31],c->r[26]); // 80157760
  if (crb(c,0)) { IRQCHK(c); goto L_8015753C; } // 80157764
L_80157768:;
  cmpu(c,0,c->r[31],c->r[26]); // 80157768
  if (!crb(c,2)) { goto L_80157790; } // 8015776C
  c->r[4]=0u+0x802D0000u; // 80157770
  c->r[0]=0u+0xFFFFFFFFu; // 80157774
  c->r[4]=c->r[4]+0xFFFFE788u; // 80157778
  W32(c->r[29]+0x00000000u,c->r[0]); // 8015777C
  c->r[5]=c->r[28]|c->r[28]; // 80157780
  c->r[3]=0u+0x00000000u; // 80157784
  c->r[4]=c->r[4]+0x00000331u; // 80157788
  c->lr=0x80157790u; f_801794C0(c); // 8015778C
L_80157790:;
  c->r[11]=c->r[1]+0x00000030u; // 80157790
  c->lr=0x80157798u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80157794
  c->r[0]=R32(c->r[1]+0x00000034u); // 80157798
  c->lr=c->r[0]; // 8015779C
  c->r[1]=c->r[1]+0x00000030u; // 801577A0
  return; // 801577A4
}

// AttachAisac__14CriAuPlayerLocFPCcUlP13CriAuCueSheetR8CriError
void f_801577A8(Ctx* __restrict c) {
  trace_call(0x801577A8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801577A8
  c->r[0]=c->lr; // 801577AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801577B0
  c->r[11]=c->r[1]+0x00000020u; // 801577B4
  c->lr=0x801577BCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801577B8
  cmpu(c,0,c->r[5],0x00000008u); // 801577BC
  c->r[0]=0u+0x00000000u; // 801577C0
  W32(c->r[7]+0x00000000u,c->r[0]); // 801577C4
  c->r[31]=c->r[3]|c->r[3]; // 801577C8
  c->r[26]=c->r[4]|c->r[4]; // 801577CC
  c->r[30]=c->r[5]|c->r[5]; // 801577D0
  c->r[29]=c->r[6]|c->r[6]; // 801577D4
  c->r[27]=c->r[7]|c->r[7]; // 801577D8
  if (!crb(c,1)) { goto L_80157800; } // 801577DC
  c->r[3]=0u+0x802D0000u; // 801577E0
  c->r[0]=0u+0xFFFFFFFFu; // 801577E4
  c->r[3]=c->r[3]+0xFFFFE788u; // 801577E8
  W32(c->r[7]+0x00000000u,c->r[0]); // 801577EC
  c->r[4]=c->r[3]+0x0000034Fu; // 801577F0
  c->r[3]=0u+0x00000000u; // 801577F4
  c->lr=0x801577FCu; f_80179434(c); // 801577F8
  goto L_80157A40; // 801577FC
L_80157800:;
  cmps(c,0,(int32_t)c->r[6],0); // 80157800
  if (!crb(c,2)) { goto L_80157828; } // 80157804
  c->r[3]=0u+0x802D0000u; // 80157808
  c->r[0]=0u+0xFFFFFFFFu; // 8015780C
  c->r[3]=c->r[3]+0xFFFFE788u; // 80157810
  W32(c->r[7]+0x00000000u,c->r[0]); // 80157814
  c->r[4]=c->r[3]+0x0000037Au; // 80157818
  c->r[3]=0u+0x00000000u; // 8015781C
  c->lr=0x80157824u; f_80179434(c); // 80157820
  goto L_80157A40; // 80157824
L_80157828:;
  c->r[3]=c->r[29]|c->r[29]; // 80157828
  c->lr=0x80157830u; f_8014C998(c); // 8015782C
  cmps(c,0,(int32_t)c->r[3],0); // 80157830
  c->r[28]=c->r[3]|c->r[3]; // 80157834
  if (crb(c,2)) { goto L_80157A20; } // 80157838
  c->r[3]=R32(c->r[31]+0x000007CCu); // 8015783C
  c->r[4]=c->r[28]|c->r[28]; // 80157840
  c->r[5]=c->r[30]|c->r[30]; // 80157844
  c->r[6]=c->r[29]|c->r[29]; // 80157848
  c->r[12]=R32(c->r[3]+0x00000000u); // 8015784C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80157850
  c->ctr=c->r[12]; // 80157854
  if (true) { c->lr=0x8015785Cu; dispatch(c,c->ctr); } // 80157858
  cmps(c,0,(int32_t)c->r[3],0); // 8015785C
  if (!crb(c,2)) { goto L_80157888; } // 80157860
  c->r[4]=0u+0x802D0000u; // 80157864
  c->r[0]=0u+0xFFFFFFFFu; // 80157868
  c->r[4]=c->r[4]+0xFFFFE788u; // 8015786C
  W32(c->r[27]+0x00000000u,c->r[0]); // 80157870
  c->r[5]=c->r[26]|c->r[26]; // 80157874
  c->r[3]=0u+0x00000000u; // 80157878
  c->r[4]=c->r[4]+0x000003A4u; // 8015787C
  c->lr=0x80157884u; f_801794C0(c); // 80157880
  goto L_80157A40; // 80157884
L_80157888:;
  c->r[4]=R32(c->r[29]+0x00000150u); // 80157888
  c->r[3]=c->r[28]|c->r[28]; // 8015788C
  c->r[0]=c->r[4]+0x00000001u; // 80157890
  W32(c->r[29]+0x00000150u,c->r[0]); // 80157894
  c->lr=0x8015789Cu; f_80146374(c); // 80157898
  cmps(c,0,(int32_t)c->r[3],0); // 8015789C
  c->r[30]=c->r[3]|c->r[3]; // 801578A0
  if (!crb(c,2)) { goto L_801578B0; } // 801578A4
  c->r[27]=0u+0x00000000u; // 801578A8
  goto L_801578F8; // 801578AC
L_801578B0:;
  c->r[27]=R32(c->r[31]+0x000007F0u); // 801578B0
L_801578B4:;
  cmps(c,0,(int32_t)c->r[27],0); // 801578B4
  if (crb(c,2)) { goto L_801578F4; } // 801578B8
  c->r[12]=R32(c->r[27]+0x0000000Cu); // 801578BC
  c->r[3]=c->r[27]|c->r[27]; // 801578C0
  c->r[29]=R32(c->r[27]+0x00000004u); // 801578C4
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 801578C8
  c->ctr=c->r[12]; // 801578CC
  if (true) { c->lr=0x801578D4u; dispatch(c,c->ctr); } // 801578D0
  c->r[4]=c->r[3]|c->r[3]; // 801578D4
  c->r[3]=c->r[30]|c->r[30]; // 801578D8
  c->lr=0x801578E0u; f_800B7948(c); // 801578DC
  cmps(c,0,(int32_t)c->r[3],0); // 801578E0
  if (!crb(c,2)) { goto L_801578EC; } // 801578E4
  goto L_801578F8; // 801578E8
L_801578EC:;
  c->r[27]=c->r[29]|c->r[29]; // 801578EC
  IRQCHK(c); goto L_801578B4; // 801578F0
L_801578F4:;
  c->r[27]=0u+0x00000000u; // 801578F4
L_801578F8:;
  cmps(c,0,(int32_t)c->r[27],0); // 801578F8
  if (!crb(c,2)) { goto L_80157998; } // 801578FC
  c->r[3]=R32(c->r[31]+0x00000010u); // 80157900
  {uint32_t ea=c->r[2]+0xFFFFB340u; c->f[1]=c->ps1[1]=RF32(ea);} // 80157904
  c->r[3]=R32(c->r[3]+0x00000004u); // 80157908
  c->lr=0x80157910u; f_80147AD4(c); // 8015790C
  cmps(c,0,(int32_t)c->r[3],0); // 80157910
  c->r[27]=c->r[3]|c->r[3]; // 80157914
  if (crb(c,2)) { goto L_80157998; } // 80157918
  c->r[29]=R32(c->r[31]+0x000007F0u); // 8015791C
  cmps(c,0,(int32_t)c->r[29],0); // 80157920
  if (crb(c,2)) { goto L_80157968; } // 80157924
  c->r[0]=R32(c->r[3]+0x00000000u); // 80157928
  cmps(c,0,(int32_t)c->r[0],0); // 8015792C
  if (!crb(c,2)) { goto L_80157940; } // 80157930
  c->r[0]=R32(c->r[3]+0x00000004u); // 80157934
  cmps(c,0,(int32_t)c->r[0],0); // 80157938
  if (crb(c,2)) { goto L_80157950; } // 8015793C
L_80157940:;
  c->r[4]=0u+0x80330000u; // 80157940
  c->r[3]=0u+0x00000000u; // 80157944
  c->r[4]=c->r[4]+0x000008F4u; // 80157948
  c->lr=0x80157950u; f_80179434(c); // 8015794C
L_80157950:;
  c->r[0]=R32(c->r[29]+0x00000000u); // 80157950
  W32(c->r[27]+0x00000000u,c->r[0]); // 80157954
  W32(c->r[27]+0x00000004u,c->r[29]); // 80157958
  W32(c->r[29]+0x00000000u,c->r[27]); // 8015795C
  W32(c->r[31]+0x000007F0u,c->r[27]); // 80157960
  goto L_8015798C; // 80157964
L_80157968:;
  c->r[0]=R32(c->r[31]+0x000007F4u); // 80157968
  W32(c->r[31]+0x000007F0u,c->r[3]); // 8015796C
  cmps(c,0,(int32_t)c->r[0],0); // 80157970
  if (crb(c,2)) { goto L_80157988; } // 80157974
  c->r[4]=0u+0x80330000u; // 80157978
  c->r[3]=0u+0x00000000u; // 8015797C
  c->r[4]=c->r[4]+0x000008CCu; // 80157980
  c->lr=0x80157988u; f_80179434(c); // 80157984
L_80157988:;
  W32(c->r[31]+0x000007F4u,c->r[27]); // 80157988
L_8015798C:;
  c->r[3]=R32(c->r[31]+0x000007F8u); // 8015798C
  c->r[0]=c->r[3]+0x00000001u; // 80157990
  W32(c->r[31]+0x000007F8u,c->r[0]); // 80157994
L_80157998:;
  cmps(c,0,(int32_t)c->r[27],0); // 80157998
  if (crb(c,2)) { goto L_80157A40; } // 8015799C
  c->r[3]=c->r[28]|c->r[28]; // 801579A0
  c->lr=0x801579A8u; f_80146374(c); // 801579A4
  c->r[4]=c->r[3]|c->r[3]; // 801579A8
  c->r[3]=R32(c->r[31]+0x000007CCu); // 801579AC
  c->r[12]=R32(c->r[3]+0x00000000u); // 801579B0
  c->r[12]=R32(c->r[12]+0x00000024u); // 801579B4
  c->ctr=c->r[12]; // 801579B8
  if (true) { c->lr=0x801579C0u; dispatch(c,c->ctr); } // 801579BC
  c->r[12]=R32(c->r[27]+0x0000000Cu); // 801579C0
  c->r[29]=c->r[3]|c->r[3]; // 801579C4
  c->r[3]=c->r[27]|c->r[27]; // 801579C8
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 801579CC
  c->r[4]=c->r[29]|c->r[29]; // 801579D0
  c->ctr=c->r[12]; // 801579D4
  if (true) { c->lr=0x801579DCu; dispatch(c,c->ctr); } // 801579D8
  cmps(c,0,(int32_t)c->r[29],0); // 801579DC
  if (!crb(c,1)) { goto L_80157A40; } // 801579E0
  c->r[3]=c->r[28]|c->r[28]; // 801579E4
  c->lr=0x801579ECu; f_80146374(c); // 801579E8
  c->r[4]=c->r[3]|c->r[3]; // 801579EC
  c->r[3]=R32(c->r[31]+0x000007CCu); // 801579F0
  c->r[12]=R32(c->r[3]+0x00000000u); // 801579F4
  c->r[12]=R32(c->r[12]+0x00000028u); // 801579F8
  c->ctr=c->r[12]; // 801579FC
  if (true) { c->lr=0x80157A04u; dispatch(c,c->ctr); } // 80157A00
  c->r[12]=R32(c->r[27]+0x0000000Cu); // 80157A04
  c->r[4]=c->r[3]|c->r[3]; // 80157A08
  c->r[3]=c->r[27]|c->r[27]; // 80157A0C
  c->r[12]=R32(c->r[12]+0x00000038u); // 80157A10
  c->ctr=c->r[12]; // 80157A14
  if (true) { c->lr=0x80157A1Cu; dispatch(c,c->ctr); } // 80157A18
  goto L_80157A40; // 80157A1C
L_80157A20:;
  c->r[4]=0u+0x802D0000u; // 80157A20
  c->r[0]=0u+0xFFFFFFFFu; // 80157A24
  c->r[4]=c->r[4]+0xFFFFE788u; // 80157A28
  W32(c->r[27]+0x00000000u,c->r[0]); // 80157A2C
  c->r[5]=c->r[26]|c->r[26]; // 80157A30
  c->r[3]=0u+0x00000000u; // 80157A34
  c->r[4]=c->r[4]+0x000003CDu; // 80157A38
  c->lr=0x80157A40u; f_801794C0(c); // 80157A3C
L_80157A40:;
  c->r[11]=c->r[1]+0x00000020u; // 80157A40
  c->lr=0x80157A48u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80157A44
  c->r[0]=R32(c->r[1]+0x00000024u); // 80157A48
  c->lr=c->r[0]; // 80157A4C
  c->r[1]=c->r[1]+0x00000020u; // 80157A50
  return; // 80157A54
}

// DetachAisac__14CriAuPlayerLocFUlR8CriError
void f_80157A58(Ctx* __restrict c) {
  trace_call(0x80157A58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157A58
  c->r[0]=c->lr; // 80157A5C
  cmpu(c,0,c->r[4],0x00000008u); // 80157A60
  W32(c->r[1]+0x00000024u,c->r[0]); // 80157A64
  c->r[0]=0u+0x00000000u; // 80157A68
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) W32(ea,c->r[i]);} // 80157A6C
  c->r[31]=c->r[3]|c->r[3]; // 80157A70
  c->r[27]=c->r[4]|c->r[4]; // 80157A74
  W32(c->r[5]+0x00000000u,c->r[0]); // 80157A78
  if (!crb(c,1)) { goto L_80157AA0; } // 80157A7C
  c->r[3]=0u+0x802D0000u; // 80157A80
  c->r[0]=0u+0xFFFFFFFFu; // 80157A84
  c->r[3]=c->r[3]+0xFFFFE788u; // 80157A88
  W32(c->r[5]+0x00000000u,c->r[0]); // 80157A8C
  c->r[4]=c->r[3]+0x000003EEu; // 80157A90
  c->r[3]=0u+0x00000000u; // 80157A94
  c->lr=0x80157A9Cu; f_80179434(c); // 80157A98
  goto L_80157D5C; // 80157A9C
L_80157AA0:;
  c->r[3]=R32(c->r[3]+0x000007CCu); // 80157AA0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157AA4
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157AA8
  c->ctr=c->r[12]; // 80157AAC
  if (true) { c->lr=0x80157AB4u; dispatch(c,c->ctr); } // 80157AB0
  cmps(c,0,(int32_t)c->r[3],0); // 80157AB4
  c->r[30]=c->r[3]|c->r[3]; // 80157AB8
  if (!crb(c,2)) { goto L_80157AC8; } // 80157ABC
  c->r[28]=0u+0x00000000u; // 80157AC0
  goto L_80157B10; // 80157AC4
L_80157AC8:;
  c->r[28]=R32(c->r[31]+0x000007F0u); // 80157AC8
L_80157ACC:;
  cmps(c,0,(int32_t)c->r[28],0); // 80157ACC
  if (crb(c,2)) { goto L_80157B0C; } // 80157AD0
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157AD4
  c->r[3]=c->r[28]|c->r[28]; // 80157AD8
  c->r[29]=R32(c->r[28]+0x00000004u); // 80157ADC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157AE0
  c->ctr=c->r[12]; // 80157AE4
  if (true) { c->lr=0x80157AECu; dispatch(c,c->ctr); } // 80157AE8
  c->r[4]=c->r[3]|c->r[3]; // 80157AEC
  c->r[3]=c->r[30]|c->r[30]; // 80157AF0
  c->lr=0x80157AF8u; f_800B7948(c); // 80157AF4
  cmps(c,0,(int32_t)c->r[3],0); // 80157AF8
  if (!crb(c,2)) { goto L_80157B04; } // 80157AFC
  goto L_80157B10; // 80157B00
L_80157B04:;
  c->r[28]=c->r[29]|c->r[29]; // 80157B04
  IRQCHK(c); goto L_80157ACC; // 80157B08
L_80157B0C:;
  c->r[28]=0u+0x00000000u; // 80157B0C
L_80157B10:;
  c->r[3]=R32(c->r[31]+0x000007CCu); // 80157B10
  c->r[4]=c->r[27]|c->r[27]; // 80157B14
  c->lr=0x80157B1Cu; f_80147AB0(c); // 80157B18
  c->r[5]=R32(c->r[3]+0x00000150u); // 80157B1C
  c->r[4]=c->r[27]|c->r[27]; // 80157B20
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80157B24
  W32(c->r[3]+0x00000150u,c->r[0]); // 80157B28
  c->r[3]=R32(c->r[31]+0x000007CCu); // 80157B2C
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157B30
  c->r[12]=R32(c->r[12]+0x00000010u); // 80157B34
  c->ctr=c->r[12]; // 80157B38
  if (true) { c->lr=0x80157B40u; dispatch(c,c->ctr); } // 80157B3C
  cmps(c,0,(int32_t)c->r[28],0); // 80157B40
  if (crb(c,2)) { goto L_80157D5C; } // 80157B44
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157B48
  c->r[3]=c->r[28]|c->r[28]; // 80157B4C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157B50
  c->ctr=c->r[12]; // 80157B54
  if (true) { c->lr=0x80157B5Cu; dispatch(c,c->ctr); } // 80157B58
  c->r[4]=c->r[3]|c->r[3]; // 80157B5C
  c->r[3]=R32(c->r[31]+0x000007CCu); // 80157B60
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157B64
  c->r[12]=R32(c->r[12]+0x00000024u); // 80157B68
  c->ctr=c->r[12]; // 80157B6C
  if (true) { c->lr=0x80157B74u; dispatch(c,c->ctr); } // 80157B70
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157B74
  c->r[29]=c->r[3]|c->r[3]; // 80157B78
  c->r[3]=c->r[28]|c->r[28]; // 80157B7C
  c->r[12]=R32(c->r[12]+0x0000000Cu); // 80157B80
  c->r[4]=c->r[29]|c->r[29]; // 80157B84
  c->ctr=c->r[12]; // 80157B88
  if (true) { c->lr=0x80157B90u; dispatch(c,c->ctr); } // 80157B8C
  cmps(c,0,(int32_t)c->r[29],0); // 80157B90
  if (!crb(c,1)) { goto L_80157BDC; } // 80157B94
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157B98
  c->r[3]=c->r[28]|c->r[28]; // 80157B9C
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157BA0
  c->ctr=c->r[12]; // 80157BA4
  if (true) { c->lr=0x80157BACu; dispatch(c,c->ctr); } // 80157BA8
  c->r[4]=c->r[3]|c->r[3]; // 80157BAC
  c->r[3]=R32(c->r[31]+0x000007CCu); // 80157BB0
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157BB4
  c->r[12]=R32(c->r[12]+0x00000028u); // 80157BB8
  c->ctr=c->r[12]; // 80157BBC
  if (true) { c->lr=0x80157BC4u; dispatch(c,c->ctr); } // 80157BC0
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157BC4
  c->r[4]=c->r[3]|c->r[3]; // 80157BC8
  c->r[3]=c->r[28]|c->r[28]; // 80157BCC
  c->r[12]=R32(c->r[12]+0x00000038u); // 80157BD0
  c->ctr=c->r[12]; // 80157BD4
  if (true) { c->lr=0x80157BDCu; dispatch(c,c->ctr); } // 80157BD8
L_80157BDC:;
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157BDC
  c->r[3]=c->r[28]|c->r[28]; // 80157BE0
  c->r[12]=R32(c->r[12]+0x00000018u); // 80157BE4
  c->ctr=c->r[12]; // 80157BE8
  if (true) { c->lr=0x80157BF0u; dispatch(c,c->ctr); } // 80157BEC
  cmps(c,0,(int32_t)c->r[3],0); // 80157BF0
  if (!crb(c,2)) { goto L_80157D5C; } // 80157BF4
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157BF8
  c->r[3]=c->r[28]|c->r[28]; // 80157BFC
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157C00
  c->ctr=c->r[12]; // 80157C04
  if (true) { c->lr=0x80157C0Cu; dispatch(c,c->ctr); } // 80157C08
  c->r[30]=c->r[3]|c->r[3]; // 80157C0C
  c->r[3]=R32(c->r[31]+0x00000014u); // 80157C10
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157C14
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157C18
  c->ctr=c->r[12]; // 80157C1C
  if (true) { c->lr=0x80157C24u; dispatch(c,c->ctr); } // 80157C20
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80157C24
  c->r[4]=c->r[30]|c->r[30]; // 80157C28
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157C2C
  c->ctr=c->r[12]; // 80157C30
  if (true) { c->lr=0x80157C38u; dispatch(c,c->ctr); } // 80157C34
  cmps(c,0,(int32_t)c->r[3],0); // 80157C38
  if (crb(c,2)) { goto L_80157CBC; } // 80157C3C
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157C40
  c->r[3]=c->r[28]|c->r[28]; // 80157C44
  c->r[4]=0u+0x00000001u; // 80157C48
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157C4C
  c->ctr=c->r[12]; // 80157C50
  if (true) { c->lr=0x80157C58u; dispatch(c,c->ctr); } // 80157C54
  cmps(c,0,(int32_t)c->r[29],0); // 80157C58
  if (!crb(c,2)) { goto L_80157D5C; } // 80157C5C
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157C60
  c->r[3]=c->r[28]|c->r[28]; // 80157C64
  c->r[12]=R32(c->r[12]+0x0000003Cu); // 80157C68
  c->ctr=c->r[12]; // 80157C6C
  if (true) { c->lr=0x80157C74u; dispatch(c,c->ctr); } // 80157C70
  c->r[30]=c->r[3]|c->r[3]; // 80157C74
  c->r[3]=R32(c->r[31]+0x00000014u); // 80157C78
  c->r[12]=R32(c->r[3]+0x00000000u); // 80157C7C
  c->r[12]=R32(c->r[12]+0x00000014u); // 80157C80
  c->ctr=c->r[12]; // 80157C84
  if (true) { c->lr=0x80157C8Cu; dispatch(c,c->ctr); } // 80157C88
  c->r[12]=R32(c->r[3]+0x0000000Cu); // 80157C8C
  c->r[4]=c->r[30]|c->r[30]; // 80157C90
  c->r[12]=R32(c->r[12]+0x00000018u); // 80157C94
  c->ctr=c->r[12]; // 80157C98
  if (true) { c->lr=0x80157CA0u; dispatch(c,c->ctr); } // 80157C9C
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157CA0
  c->r[4]=c->r[3]|c->r[3]; // 80157CA4
  c->r[3]=c->r[28]|c->r[28]; // 80157CA8
  c->r[12]=R32(c->r[12]+0x00000038u); // 80157CAC
  c->ctr=c->r[12]; // 80157CB0
  if (true) { c->lr=0x80157CB8u; dispatch(c,c->ctr); } // 80157CB4
  goto L_80157D5C; // 80157CB8
L_80157CBC:;
  cmps(c,0,(int32_t)c->r[29],0); // 80157CBC
  if (!crb(c,2)) { goto L_80157D5C; } // 80157CC0
  cmps(c,0,(int32_t)c->r[28],0); // 80157CC4
  if (!crb(c,2)) { goto L_80157CE0; } // 80157CC8
  c->r[4]=0u+0x80330000u; // 80157CCC
  c->r[3]=0u+0x00000000u; // 80157CD0
  c->r[4]=c->r[4]+0x00000C2Cu; // 80157CD4
  c->lr=0x80157CDCu; f_80179434(c); // 80157CD8
  goto L_80157D48; // 80157CDC
L_80157CE0:;
  c->r[0]=R32(c->r[31]+0x000007F0u); // 80157CE0
  cmpu(c,0,c->r[0],c->r[28]); // 80157CE4
  if (!crb(c,2)) { goto L_80157CF4; } // 80157CE8
  c->r[0]=R32(c->r[28]+0x00000004u); // 80157CEC
  W32(c->r[31]+0x000007F0u,c->r[0]); // 80157CF0
L_80157CF4:;
  c->r[0]=R32(c->r[31]+0x000007F4u); // 80157CF4
  cmpu(c,0,c->r[0],c->r[28]); // 80157CF8
  if (!crb(c,2)) { goto L_80157D08; } // 80157CFC
  c->r[0]=R32(c->r[28]+0x00000000u); // 80157D00
  W32(c->r[31]+0x000007F4u,c->r[0]); // 80157D04
L_80157D08:;
  c->r[3]=R32(c->r[28]+0x00000000u); // 80157D08
  cmps(c,0,(int32_t)c->r[3],0); // 80157D0C
  if (crb(c,2)) { goto L_80157D1C; } // 80157D10
  c->r[0]=R32(c->r[28]+0x00000004u); // 80157D14
  W32(c->r[3]+0x00000004u,c->r[0]); // 80157D18
L_80157D1C:;
  c->r[3]=R32(c->r[28]+0x00000004u); // 80157D1C
  cmps(c,0,(int32_t)c->r[3],0); // 80157D20
  if (crb(c,2)) { goto L_80157D30; } // 80157D24
  c->r[0]=R32(c->r[28]+0x00000000u); // 80157D28
  W32(c->r[3]+0x00000000u,c->r[0]); // 80157D2C
L_80157D30:;
  c->r[0]=0u+0x00000000u; // 80157D30
  W32(c->r[28]+0x00000004u,c->r[0]); // 80157D34
  W32(c->r[28]+0x00000000u,c->r[0]); // 80157D38
  c->r[3]=R32(c->r[31]+0x000007F8u); // 80157D3C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80157D40
  W32(c->r[31]+0x000007F8u,c->r[0]); // 80157D44
L_80157D48:;
  c->r[12]=R32(c->r[28]+0x0000000Cu); // 80157D48
  c->r[3]=c->r[28]|c->r[28]; // 80157D4C
  c->r[12]=R32(c->r[12]+0x00000008u); // 80157D50
  c->ctr=c->r[12]; // 80157D54
  if (true) { c->lr=0x80157D5Cu; dispatch(c,c->ctr); } // 80157D58
L_80157D5C:;
  {uint32_t ea=c->r[1]+0x0000000Cu; for(int i=27;i<32;i++,ea+=4) c->r[i]=R32(ea);} // 80157D5C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80157D60
  c->lr=c->r[0]; // 80157D64
  c->r[1]=c->r[1]+0x00000020u; // 80157D68
  return; // 80157D6C
}

// GetCueName__14CriAuPlayerLocFR8CriError
void f_80157D70(Ctx* __restrict c) {
  trace_call(0x80157D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157D70
  c->r[0]=c->lr; // 80157D74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80157D78
  c->r[0]=0u+0x00000000u; // 80157D7C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80157D80
  c->r[3]=R32(c->r[3]+0x00000014u); // 80157D84
  cmps(c,0,(int32_t)c->r[3],0); // 80157D88
  if (!crb(c,2)) { goto L_80157DB4; } // 80157D8C
  c->r[3]=0u+0x802D0000u; // 80157D90
  c->r[0]=0u+0xFFFFFFFFu; // 80157D94
  W32(c->r[4]+0x00000000u,c->r[0]); // 80157D98
  c->r[3]=c->r[3]+0xFFFFE788u; // 80157D9C
  c->r[4]=c->r[3]+0x00000416u; // 80157DA0
  c->r[3]=0u+0x00000000u; // 80157DA4
  c->lr=0x80157DACu; f_80179434(c); // 80157DA8
  c->r[3]=0u+0x00000000u; // 80157DAC
  goto L_80157DB8; // 80157DB0
L_80157DB4:;
  c->r[3]=R32(c->r[3]+0x00000018u); // 80157DB4
L_80157DB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80157DB8
  c->lr=c->r[0]; // 80157DBC
  c->r[1]=c->r[1]+0x00000010u; // 80157DC0
  return; // 80157DC4
}

// GetSynthName__14CriAuPlayerLocFR8CriError
void f_80157DC8(Ctx* __restrict c) {
  trace_call(0x80157DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157DC8
  c->r[0]=c->lr; // 80157DCC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80157DD0
  c->r[0]=0u+0x00000000u; // 80157DD4
  W32(c->r[4]+0x00000000u,c->r[0]); // 80157DD8
  c->r[3]=R32(c->r[3]+0x00000014u); // 80157DDC
  cmps(c,0,(int32_t)c->r[3],0); // 80157DE0
  if (!crb(c,2)) { goto L_80157E0C; } // 80157DE4
  c->r[3]=0u+0x802D0000u; // 80157DE8
  c->r[0]=0u+0xFFFFFFFFu; // 80157DEC
  W32(c->r[4]+0x00000000u,c->r[0]); // 80157DF0
  c->r[3]=c->r[3]+0xFFFFE788u; // 80157DF4
  c->r[4]=c->r[3]+0x00000430u; // 80157DF8
  c->r[3]=0u+0x00000000u; // 80157DFC
  c->lr=0x80157E04u; f_80179434(c); // 80157E00
  c->r[3]=0u+0x00000000u; // 80157E04
  goto L_80157E10; // 80157E08
L_80157E0C:;
  c->r[3]=R32(c->r[3]+0x00000020u); // 80157E0C
L_80157E10:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80157E10
  c->lr=c->r[0]; // 80157E14
  c->r[1]=c->r[1]+0x00000010u; // 80157E18
  return; // 80157E1C
}

// GetCueId__14CriAuPlayerLocFR8CriError
void f_80157E20(Ctx* __restrict c) {
  trace_call(0x80157E20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80157E20
  c->r[0]=c->lr; // 80157E24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80157E28
  c->r[0]=0u+0x00000000u; // 80157E2C
  W32(c->r[4]+0x00000000u,c->r[0]); // 80157E30
  c->r[3]=R32(c->r[3]+0x00000014u); // 80157E34
  cmps(c,0,(int32_t)c->r[3],0); // 80157E38
  if (!crb(c,2)) { goto L_80157E64; } // 80157E3C
  c->r[3]=0u+0x802D0000u; // 80157E40
  c->r[0]=0u+0xFFFFFFFFu; // 80157E44
  W32(c->r[4]+0x00000000u,c->r[0]); // 80157E48
  c->r[3]=c->r[3]+0xFFFFE788u; // 80157E4C
  c->r[4]=c->r[3]+0x0000044Au; // 80157E50
  c->r[3]=0u+0x00000000u; // 80157E54
  c->lr=0x80157E5Cu; f_80179434(c); // 80157E58
  c->r[3]=0u+0x00000000u; // 80157E5C
  goto L_80157E68; // 80157E60
L_80157E64:;
  c->r[3]=R32(c->r[3]+0x0000001Cu); // 80157E64
L_80157E68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80157E68
  c->lr=c->r[0]; // 80157E6C
  c->r[1]=c->r[1]+0x00000010u; // 80157E70
  return; // 80157E74
}

