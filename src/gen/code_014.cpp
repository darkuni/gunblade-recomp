#include "funcs.h"
#pragma GCC diagnostic ignored "-Wunused-label"

// bta_hh_cback
void f_800FC878(Ctx* __restrict c) {
  trace_call(0x800FC878u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FC878
  c->r[0]=c->lr; // 800FC87C
  c->r[7]=0u+0x80330000u; // 800FC880
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FC884
  c->r[7]=c->r[7]+0xFFFF9F18u; // 800FC888
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FC88C
  c->r[31]=0u+0x00001710u; // 800FC890
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FC894
  c->r[30]=c->r[5]|c->r[5]; // 800FC898
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FC89C
  c->r[29]=c->r[4]|c->r[4]; // 800FC8A0
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FC8A4
  c->r[28]=c->r[3]|c->r[3]; // 800FC8A8
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FC8AC
  W32(c->r[1]+0x00000008u,c->r[6]); // 800FC8B0
  cmpu(c,0,c->r[0],0x00000005u); // 800FC8B4
  if (crb(c,0)) { goto L_800FC934; } // 800FC8B8
  cmpu(c,0,c->r[4],0x00000008u); // 800FC8BC
  if (crb(c,1)) { goto L_800FC924; } // 800FC8C0
  c->r[3]=0u+0x80330000u; // 800FC8C4
  c->r[0]=rotl(c->r[4],2)&0xFFFFFFFCu; // 800FC8C8
  c->r[3]=c->r[3]+0xFFFFA3ECu; // 800FC8CC
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FC8D0
  c->ctr=c->r[3]; // 800FC8D4
  if (true) { switch (c->ctr) { case 0x800FC8DCu: goto L_800FC8DC; case 0x800FC8E4u: goto L_800FC8E4; case 0x800FC8ECu: goto L_800FC8EC; case 0x800FC8F4u: goto L_800FC8F4; case 0x800FC8FCu: goto L_800FC8FC; case 0x800FC904u: goto L_800FC904; case 0x800FC90Cu: goto L_800FC90C; case 0x800FC914u: goto L_800FC914; case 0x800FC91Cu: goto L_800FC91C; case 0x800FC954u: goto L_800FC954; case 0x800FC95Cu: goto L_800FC95C; case 0x800FC964u: goto L_800FC964; case 0x800FC96Cu: goto L_800FC96C; case 0x800FC974u: goto L_800FC974; case 0x800FC97Cu: goto L_800FC97C; case 0x800FC988u: goto L_800FC988; case 0x800FCAC0u: goto L_800FCAC0; default: break; } dispatch(c,c->ctr); return; } // 800FC8D8
L_800FC8DC:;
  c->r[5]=c->r[7]+0x000003ACu; // 800FC8DC
  goto L_800FC928; // 800FC8E0
L_800FC8E4:;
  c->r[5]=c->r[7]+0x000003C0u; // 800FC8E4
  goto L_800FC928; // 800FC8E8
L_800FC8EC:;
  c->r[5]=c->r[7]+0x000003D4u; // 800FC8EC
  goto L_800FC928; // 800FC8F0
L_800FC8F4:;
  c->r[5]=c->r[7]+0x000003ECu; // 800FC8F4
  goto L_800FC928; // 800FC8F8
L_800FC8FC:;
  c->r[5]=c->r[7]+0x00000404u; // 800FC8FC
  goto L_800FC928; // 800FC900
L_800FC904:;
  c->r[5]=c->r[7]+0x0000041Cu; // 800FC904
  goto L_800FC928; // 800FC908
L_800FC90C:;
  c->r[5]=c->r[7]+0x00000434u; // 800FC90C
  goto L_800FC928; // 800FC910
L_800FC914:;
  c->r[5]=c->r[7]+0x0000044Cu; // 800FC914
  goto L_800FC928; // 800FC918
L_800FC91C:;
  c->r[5]=c->r[7]+0x00000464u; // 800FC91C
  goto L_800FC928; // 800FC920
L_800FC924:;
  c->r[5]=c->r[7]+0x0000047Cu; // 800FC924
L_800FC928:;
  c->r[4]=c->r[7]+0x00000490u; // 800FC928
  c->r[3]=0u+0x00000504u; // 800FC92C
  c->lr=0x800FC934u; f_800F72A0(c); // 800FC930
L_800FC934:;
  cmpu(c,0,c->r[29],0x00000008u); // 800FC934
  if (crb(c,1)) { goto L_800FCAC0; } // 800FC938
  c->r[3]=0u+0x80330000u; // 800FC93C
  c->r[0]=rotl(c->r[29],2)&0xFFFFFFFCu; // 800FC940
  c->r[3]=c->r[3]+0xFFFFA3C8u; // 800FC944
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FC948
  c->ctr=c->r[3]; // 800FC94C
  if (true) { switch (c->ctr) { case 0x800FC8DCu: goto L_800FC8DC; case 0x800FC8E4u: goto L_800FC8E4; case 0x800FC8ECu: goto L_800FC8EC; case 0x800FC8F4u: goto L_800FC8F4; case 0x800FC8FCu: goto L_800FC8FC; case 0x800FC904u: goto L_800FC904; case 0x800FC90Cu: goto L_800FC90C; case 0x800FC914u: goto L_800FC914; case 0x800FC91Cu: goto L_800FC91C; case 0x800FC954u: goto L_800FC954; case 0x800FC95Cu: goto L_800FC95C; case 0x800FC964u: goto L_800FC964; case 0x800FC96Cu: goto L_800FC96C; case 0x800FC974u: goto L_800FC974; case 0x800FC97Cu: goto L_800FC97C; case 0x800FC988u: goto L_800FC988; case 0x800FCAC0u: goto L_800FCAC0; default: break; } dispatch(c,c->ctr); return; } // 800FC950
L_800FC954:;
  c->r[31]=0u+0x00001702u; // 800FC954
  goto L_800FCAC0; // 800FC958
L_800FC95C:;
  c->r[31]=0u+0x00001703u; // 800FC95C
  goto L_800FCAC0; // 800FC960
L_800FC964:;
  c->r[31]=0u+0x00001704u; // 800FC964
  goto L_800FCAC0; // 800FC968
L_800FC96C:;
  c->r[31]=0u+0x00001706u; // 800FC96C
  goto L_800FCAC0; // 800FC970
L_800FC974:;
  c->r[31]=0u+0x00001705u; // 800FC974
  goto L_800FCAC0; // 800FC978
L_800FC97C:;
  c->r[3]=c->r[1]+0x00000008u; // 800FC97C
  c->lr=0x800FC984u; f_800F8060(c); // 800FC980
  goto L_800FCAC0; // 800FC984
L_800FC988:;
  c->r[4]=0u+0x803D0000u; // 800FC988
  c->r[0]=0u+0x00000002u; // 800FC98C
  c->r[4]=c->r[4]+0xFFFF9FE8u; // 800FC990
  c->r[5]=0u+0x00000000u; // 800FC994
  c->ctr=c->r[0]; // 800FC998
L_800FC99C:;
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FC99C
  c->r[3]=c->r[4]+c->r[0]; // 800FC9A0
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FC9A4
  cmpu(c,0,c->r[28],c->r[0]); // 800FC9A8
  if (!crb(c,2)) { goto L_800FC9BC; } // 800FC9AC
  c->r[0]=0u+0x00000001u; // 800FC9B0
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FC9B4
  goto L_800FCAC0; // 800FC9B8
L_800FC9BC:;
  c->r[5]=c->r[5]+0x00000001u; // 800FC9BC
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FC9C0
  c->r[3]=c->r[4]+c->r[0]; // 800FC9C4
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FC9C8
  cmpu(c,0,c->r[28],c->r[0]); // 800FC9CC
  if (!crb(c,2)) { goto L_800FC9E0; } // 800FC9D0
  c->r[0]=0u+0x00000001u; // 800FC9D4
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FC9D8
  goto L_800FCAC0; // 800FC9DC
L_800FC9E0:;
  c->r[5]=c->r[5]+0x00000001u; // 800FC9E0
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FC9E4
  c->r[3]=c->r[4]+c->r[0]; // 800FC9E8
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FC9EC
  cmpu(c,0,c->r[28],c->r[0]); // 800FC9F0
  if (!crb(c,2)) { goto L_800FCA04; } // 800FC9F4
  c->r[0]=0u+0x00000001u; // 800FC9F8
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FC9FC
  goto L_800FCAC0; // 800FCA00
L_800FCA04:;
  c->r[5]=c->r[5]+0x00000001u; // 800FCA04
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FCA08
  c->r[3]=c->r[4]+c->r[0]; // 800FCA0C
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FCA10
  cmpu(c,0,c->r[28],c->r[0]); // 800FCA14
  if (!crb(c,2)) { goto L_800FCA28; } // 800FCA18
  c->r[0]=0u+0x00000001u; // 800FCA1C
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FCA20
  goto L_800FCAC0; // 800FCA24
L_800FCA28:;
  c->r[5]=c->r[5]+0x00000001u; // 800FCA28
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FCA2C
  c->r[3]=c->r[4]+c->r[0]; // 800FCA30
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FCA34
  cmpu(c,0,c->r[28],c->r[0]); // 800FCA38
  if (!crb(c,2)) { goto L_800FCA4C; } // 800FCA3C
  c->r[0]=0u+0x00000001u; // 800FCA40
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FCA44
  goto L_800FCAC0; // 800FCA48
L_800FCA4C:;
  c->r[5]=c->r[5]+0x00000001u; // 800FCA4C
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FCA50
  c->r[3]=c->r[4]+c->r[0]; // 800FCA54
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FCA58
  cmpu(c,0,c->r[28],c->r[0]); // 800FCA5C
  if (!crb(c,2)) { goto L_800FCA70; } // 800FCA60
  c->r[0]=0u+0x00000001u; // 800FCA64
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FCA68
  goto L_800FCAC0; // 800FCA6C
L_800FCA70:;
  c->r[5]=c->r[5]+0x00000001u; // 800FCA70
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FCA74
  c->r[3]=c->r[4]+c->r[0]; // 800FCA78
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FCA7C
  cmpu(c,0,c->r[28],c->r[0]); // 800FCA80
  if (!crb(c,2)) { goto L_800FCA94; } // 800FCA84
  c->r[0]=0u+0x00000001u; // 800FCA88
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FCA8C
  goto L_800FCAC0; // 800FCA90
L_800FCA94:;
  c->r[5]=c->r[5]+0x00000001u; // 800FCA94
  c->r[0]=rotl(c->r[5],5)&0x00001FE0u; // 800FCA98
  c->r[3]=c->r[4]+c->r[0]; // 800FCA9C
  c->r[0]=R8(c->r[3]+0x00000026u); // 800FCAA0
  cmpu(c,0,c->r[28],c->r[0]); // 800FCAA4
  if (!crb(c,2)) { goto L_800FCAB8; } // 800FCAA8
  c->r[0]=0u+0x00000001u; // 800FCAAC
  W8(c->r[3]+0x00000027u,c->r[0]); // 800FCAB0
  goto L_800FCAC0; // 800FCAB4
L_800FCAB8:;
  c->r[5]=c->r[5]+0x00000001u; // 800FCAB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FC99C; } // 800FCABC
L_800FCAC0:;
  cmpu(c,0,c->r[31],0x00001710u); // 800FCAC0
  if (crb(c,2)) { goto L_800FCAF0; } // 800FCAC4
  c->r[3]=0u+0x00000018u; // 800FCAC8
  c->lr=0x800FCAD0u; f_800F4530(c); // 800FCACC
  cmps(c,0,(int32_t)c->r[3],0); // 800FCAD0
  if (crb(c,2)) { goto L_800FCAF0; } // 800FCAD4
  W16(c->r[3]+0x00000000u,c->r[31]); // 800FCAD8
  W16(c->r[3]+0x00000006u,c->r[28]); // 800FCADC
  W32(c->r[3]+0x00000008u,c->r[30]); // 800FCAE0
  c->r[0]=R32(c->r[1]+0x00000008u); // 800FCAE4
  W32(c->r[3]+0x0000000Cu,c->r[0]); // 800FCAE8
  c->lr=0x800FCAF0u; f_800F7DC0(c); // 800FCAEC
L_800FCAF0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCAF0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FCAF4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FCAF8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FCAFC
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FCB00
  c->lr=c->r[0]; // 800FCB04
  c->r[1]=c->r[1]+0x00000020u; // 800FCB08
  return; // 800FCB0C
}

// BTA_HhEnable
void f_800FCB10(Ctx* __restrict c) {
  trace_call(0x800FCB10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCB10
  c->r[0]=c->lr; // 800FCB14
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCB18
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FCB1C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FCB20
  c->r[30]=c->r[4]|c->r[4]; // 800FCB24
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FCB28
  c->r[29]=c->r[3]|c->r[3]; // 800FCB2C
  c->lr=0x800FCB34u; f_800F5BC0(c); // 800FCB30
  c->r[3]=0u+0x00000017u; // 800FCB34
  c->r[4]=c->r[2]+0xFFFFB188u; // 800FCB38
  c->lr=0x800FCB40u; f_800F7DAC(c); // 800FCB3C
  c->lr=0x800FCB44u; f_800F5BD0(c); // 800FCB40
  c->r[3]=0u+0x00000034u; // 800FCB44
  c->lr=0x800FCB4Cu; f_800F4530(c); // 800FCB48
  cmps(c,0,(int32_t)c->r[3],0); // 800FCB4C
  c->r[31]=c->r[3]|c->r[3]; // 800FCB50
  if (crb(c,2)) { goto L_800FCB7C; } // 800FCB54
  c->r[4]=0u+0x00000000u; // 800FCB58
  c->r[5]=0u+0x00000034u; // 800FCB5C
  c->lr=0x800FCB64u; f_80004714(c); // 800FCB60
  c->r[0]=0u+0x0000170Cu; // 800FCB64
  c->r[3]=c->r[31]|c->r[31]; // 800FCB68
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FCB6C
  W32(c->r[31]+0x00000030u,c->r[30]); // 800FCB70
  W8(c->r[31]+0x00000008u,c->r[29]); // 800FCB74
  c->lr=0x800FCB7Cu; f_800F7DC0(c); // 800FCB78
L_800FCB7C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCB7C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FCB80
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FCB84
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FCB88
  c->lr=c->r[0]; // 800FCB8C
  c->r[1]=c->r[1]+0x00000020u; // 800FCB90
  return; // 800FCB94
}

// BTA_HhDisable
void f_800FCB98(Ctx* __restrict c) {
  trace_call(0x800FCB98u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCB98
  c->r[0]=c->lr; // 800FCB9C
  c->r[3]=0u+0x00000008u; // 800FCBA0
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCBA4
  c->lr=0x800FCBACu; f_800F4530(c); // 800FCBA8
  cmps(c,0,(int32_t)c->r[3],0); // 800FCBAC
  if (crb(c,2)) { goto L_800FCBC0; } // 800FCBB0
  c->r[0]=0u+0x0000170Du; // 800FCBB4
  W16(c->r[3]+0x00000000u,c->r[0]); // 800FCBB8
  c->lr=0x800FCBC0u; f_800F7DC0(c); // 800FCBBC
L_800FCBC0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCBC0
  c->lr=c->r[0]; // 800FCBC4
  c->r[1]=c->r[1]+0x00000010u; // 800FCBC8
  return; // 800FCBCC
}

// BTA_HhClose
void f_800FCBD0(Ctx* __restrict c) {
  trace_call(0x800FCBD0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCBD0
  c->r[0]=c->lr; // 800FCBD4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCBD8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCBDC
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FCBE0
  c->r[30]=c->r[3]|c->r[3]; // 800FCBE4
  c->r[3]=0u+0x00000008u; // 800FCBE8
  c->lr=0x800FCBF0u; f_800F4530(c); // 800FCBEC
  cmps(c,0,(int32_t)c->r[3],0); // 800FCBF0
  c->r[31]=c->r[3]|c->r[3]; // 800FCBF4
  if (crb(c,2)) { goto L_800FCC1C; } // 800FCBF8
  c->r[4]=0u+0x00000000u; // 800FCBFC
  c->r[5]=0u+0x00000008u; // 800FCC00
  c->lr=0x800FCC08u; f_80004714(c); // 800FCC04
  c->r[0]=0u+0x00001701u; // 800FCC08
  c->r[3]=c->r[31]|c->r[31]; // 800FCC0C
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FCC10
  W16(c->r[31]+0x00000006u,c->r[30]); // 800FCC14
  c->lr=0x800FCC1Cu; f_800F7DC0(c); // 800FCC18
L_800FCC1C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCC1C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCC20
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FCC24
  c->lr=c->r[0]; // 800FCC28
  c->r[1]=c->r[1]+0x00000010u; // 800FCC2C
  return; // 800FCC30
}

// BTA_HhOpen
void f_800FCC34(Ctx* __restrict c) {
  trace_call(0x800FCC34u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCC34
  c->r[0]=c->lr; // 800FCC38
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCC3C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FCC40
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FCC44
  c->r[30]=c->r[5]|c->r[5]; // 800FCC48
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FCC4C
  c->r[29]=c->r[4]|c->r[4]; // 800FCC50
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FCC54
  c->r[28]=c->r[3]|c->r[3]; // 800FCC58
  c->r[3]=0u+0x00000010u; // 800FCC5C
  c->lr=0x800FCC64u; f_800F4530(c); // 800FCC60
  cmps(c,0,(int32_t)c->r[3],0); // 800FCC64
  c->r[31]=c->r[3]|c->r[3]; // 800FCC68
  if (crb(c,2)) { goto L_800FCCAC; } // 800FCC6C
  c->r[4]=0u+0x00000000u; // 800FCC70
  c->r[5]=0u+0x00000010u; // 800FCC74
  c->lr=0x800FCC7Cu; f_80004714(c); // 800FCC78
  c->r[3]=0u+0x00001700u; // 800FCC7C
  c->r[0]=0u+0x000000FFu; // 800FCC80
  W16(c->r[31]+0x00000000u,c->r[3]); // 800FCC84
  c->r[4]=c->r[28]|c->r[28]; // 800FCC88
  c->r[3]=c->r[31]+0x00000008u; // 800FCC8C
  W16(c->r[31]+0x00000006u,c->r[0]); // 800FCC90
  W8(c->r[31]+0x0000000Eu,c->r[30]); // 800FCC94
  W8(c->r[31]+0x0000000Fu,c->r[29]); // 800FCC98
  c->lr=0x800FCCA0u; f_800F7914(c); // 800FCC9C
  c->r[3]=c->r[31]|c->r[31]; // 800FCCA0
  c->lr=0x800FCCA8u; f_800F7DC0(c); // 800FCCA4
  goto L_800FCCC8; // 800FCCA8
L_800FCCAC:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FCCAC
  cmpu(c,0,c->r[0],0x00000001u); // 800FCCB0
  if (crb(c,0)) { goto L_800FCCC8; } // 800FCCB4
  c->r[4]=0u+0x80330000u; // 800FCCB8
  c->r[3]=0u+0x00000500u; // 800FCCBC
  c->r[4]=c->r[4]+0xFFFFA410u; // 800FCCC0
  c->lr=0x800FCCC8u; f_800F7280(c); // 800FCCC4
L_800FCCC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCCC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FCCCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FCCD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FCCD4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FCCD8
  c->lr=c->r[0]; // 800FCCDC
  c->r[1]=c->r[1]+0x00000020u; // 800FCCE0
  return; // 800FCCE4
}

// BTA_HhSendData
void f_800FCCE8(Ctx* __restrict c) {
  trace_call(0x800FCCE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCCE8
  c->r[0]=c->lr; // 800FCCEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCCF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FCCF4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FCCF8
  c->r[30]=c->r[4]|c->r[4]; // 800FCCFC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FCD00
  c->r[29]=c->r[3]|c->r[3]; // 800FCD04
  c->r[3]=0u+0x00000014u; // 800FCD08
  c->lr=0x800FCD10u; f_800F4530(c); // 800FCD0C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCD10
  c->r[31]=c->r[3]|c->r[3]; // 800FCD14
  if (crb(c,2)) { goto L_800FCD5C; } // 800FCD18
  c->r[4]=0u+0x00000000u; // 800FCD1C
  c->r[5]=0u+0x00000014u; // 800FCD20
  c->lr=0x800FCD28u; f_80004714(c); // 800FCD24
  c->r[0]=0u+0x00001708u; // 800FCD28
  c->r[5]=0u+0x0000000Au; // 800FCD2C
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FCD30
  c->r[4]=0u+0x00000000u; // 800FCD34
  c->r[0]=0u+0x00000002u; // 800FCD38
  c->r[3]=c->r[31]|c->r[31]; // 800FCD3C
  W16(c->r[31]+0x00000006u,c->r[29]); // 800FCD40
  W8(c->r[31]+0x00000008u,c->r[5]); // 800FCD44
  W16(c->r[31]+0x0000000Cu,c->r[4]); // 800FCD48
  W8(c->r[31]+0x00000009u,c->r[0]); // 800FCD4C
  W32(c->r[31]+0x00000010u,c->r[30]); // 800FCD50
  W8(c->r[31]+0x0000000Au,c->r[4]); // 800FCD54
  c->lr=0x800FCD5Cu; f_800F7DC0(c); // 800FCD58
L_800FCD5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCD5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FCD60
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FCD64
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FCD68
  c->lr=c->r[0]; // 800FCD6C
  c->r[1]=c->r[1]+0x00000020u; // 800FCD70
  return; // 800FCD74
}

// BTA_HhAddDev
void f_800FCD78(Ctx* __restrict c) {
  trace_call(0x800FCD78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCD78
  c->r[0]=c->lr; // 800FCD7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FCD80
  c->r[11]=c->r[1]+0x00000020u; // 800FCD84
  c->lr=0x800FCD8Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FCD88
  c->r[26]=c->r[3]|c->r[3]; // 800FCD8C
  c->r[27]=c->r[4]|c->r[4]; // 800FCD90
  c->r[28]=c->r[5]|c->r[5]; // 800FCD94
  c->r[29]=c->r[6]|c->r[6]; // 800FCD98
  c->r[30]=c->r[7]|c->r[7]; // 800FCD9C
  c->r[3]=0u+0x0000001Cu; // 800FCDA0
  c->lr=0x800FCDA8u; f_800F4530(c); // 800FCDA4
  cmps(c,0,(int32_t)c->r[3],0); // 800FCDA8
  c->r[31]=c->r[3]|c->r[3]; // 800FCDAC
  if (crb(c,2)) { goto L_800FCE08; } // 800FCDB0
  c->r[4]=0u+0x00000000u; // 800FCDB4
  c->r[5]=0u+0x0000001Cu; // 800FCDB8
  c->lr=0x800FCDC0u; f_80004714(c); // 800FCDBC
  c->r[0]=0u+0x0000170Au; // 800FCDC0
  c->r[5]=0u+0x0000000Bu; // 800FCDC4
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FCDC8
  c->r[0]=0u+0x000000FFu; // 800FCDCC
  c->r[4]=c->r[30]|c->r[30]; // 800FCDD0
  c->r[3]=c->r[31]+0x00000014u; // 800FCDD4
  W16(c->r[31]+0x00000010u,c->r[5]); // 800FCDD8
  c->r[5]=0u+0x00000008u; // 800FCDDC
  W16(c->r[31]+0x00000006u,c->r[0]); // 800FCDE0
  W16(c->r[31]+0x0000000Eu,c->r[27]); // 800FCDE4
  W8(c->r[31]+0x00000012u,c->r[28]); // 800FCDE8
  W8(c->r[31]+0x00000013u,c->r[29]); // 800FCDEC
  c->lr=0x800FCDF4u; f_800043C4(c); // 800FCDF0
  c->r[4]=c->r[26]|c->r[26]; // 800FCDF4
  c->r[3]=c->r[31]+0x00000008u; // 800FCDF8
  c->lr=0x800FCE00u; f_800F7914(c); // 800FCDFC
  c->r[3]=c->r[31]|c->r[31]; // 800FCE00
  c->lr=0x800FCE08u; f_800F7DC0(c); // 800FCE04
L_800FCE08:;
  c->r[11]=c->r[1]+0x00000020u; // 800FCE08
  c->lr=0x800FCE10u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FCE0C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FCE10
  c->lr=c->r[0]; // 800FCE14
  c->r[1]=c->r[1]+0x00000020u; // 800FCE18
  return; // 800FCE1C
}

// BTA_HhRemoveDev
void f_800FCE20(Ctx* __restrict c) {
  trace_call(0x800FCE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCE20
  c->r[0]=c->lr; // 800FCE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCE28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCE2C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FCE30
  c->r[30]=c->r[3]|c->r[3]; // 800FCE34
  c->r[3]=0u+0x0000001Cu; // 800FCE38
  c->lr=0x800FCE40u; f_800F4530(c); // 800FCE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800FCE40
  c->r[31]=c->r[3]|c->r[3]; // 800FCE44
  if (crb(c,2)) { goto L_800FCE74; } // 800FCE48
  c->r[4]=0u+0x00000000u; // 800FCE4C
  c->r[5]=0u+0x0000001Cu; // 800FCE50
  c->lr=0x800FCE58u; f_80004714(c); // 800FCE54
  c->r[3]=0u+0x0000170Au; // 800FCE58
  c->r[0]=0u+0x0000000Cu; // 800FCE5C
  W16(c->r[31]+0x00000000u,c->r[3]); // 800FCE60
  c->r[3]=c->r[31]|c->r[31]; // 800FCE64
  W16(c->r[31]+0x00000010u,c->r[0]); // 800FCE68
  W16(c->r[31]+0x00000006u,c->r[30]); // 800FCE6C
  c->lr=0x800FCE74u; f_800F7DC0(c); // 800FCE70
L_800FCE74:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCE74
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCE78
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FCE7C
  c->lr=c->r[0]; // 800FCE80
  c->r[1]=c->r[1]+0x00000010u; // 800FCE84
  return; // 800FCE88
}

// BTA_HhGetAclQueueInfo
void f_800FCE8C(Ctx* __restrict c) {
  trace_call(0x800FCE8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCE8C
  c->r[0]=c->lr; // 800FCE90
  c->r[3]=0u+0x00000008u; // 800FCE94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FCE98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FCE9C
  c->lr=0x800FCEA4u; f_800F4530(c); // 800FCEA0
  cmps(c,0,(int32_t)c->r[3],0); // 800FCEA4
  c->r[31]=c->r[3]|c->r[3]; // 800FCEA8
  if (crb(c,2)) { goto L_800FCECC; } // 800FCEAC
  c->r[4]=0u+0x00000000u; // 800FCEB0
  c->r[5]=0u+0x00000008u; // 800FCEB4
  c->lr=0x800FCEBCu; f_80004714(c); // 800FCEB8
  c->r[0]=0u+0x0000170Eu; // 800FCEBC
  c->r[3]=c->r[31]|c->r[31]; // 800FCEC0
  W16(c->r[31]+0x00000000u,c->r[0]); // 800FCEC4
  c->lr=0x800FCECCu; f_800F7DC0(c); // 800FCEC8
L_800FCECC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FCECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FCED0
  c->lr=c->r[0]; // 800FCED4
  c->r[1]=c->r[1]+0x00000010u; // 800FCED8
  return; // 800FCEDC
}

// bta_hh_sm_execute
void f_800FCEE0(Ctx* __restrict c) {
  trace_call(0x800FCEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FCEE0
  c->r[0]=c->lr; // 800FCEE4
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FCEE8
  c->r[11]=c->r[1]+0x00000040u; // 800FCEEC
  c->lr=0x800FCEF4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FCEF0
  c->r[31]=0u+0x80330000u; // 800FCEF4
  c->r[27]=c->r[3]|c->r[3]; // 800FCEF8
  c->r[28]=c->r[4]|c->r[4]; // 800FCEFC
  c->r[29]=c->r[5]|c->r[5]; // 800FCF00
  c->r[31]=c->r[31]+0xFFFFA440u; // 800FCF04
  c->r[3]=c->r[1]+0x00000008u; // 800FCF08
  c->r[30]=0u+0x00000000u; // 800FCF0C
  c->r[4]=0u+0x00000000u; // 800FCF10
  c->r[5]=0u+0x00000020u; // 800FCF14
  c->lr=0x800FCF1Cu; f_80004714(c); // 800FCF18
  cmps(c,0,(int32_t)c->r[27],0); // 800FCF1C
  if (!crb(c,2)) { goto L_800FD078; } // 800FCF20
  c->r[3]=0u+0x803D0000u; // 800FCF24
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FCF28
  c->r[0]=R32(c->r[3]+0x00000224u); // 800FCF2C
  cmps(c,0,(int32_t)c->r[0],0); // 800FCF30
  if (crb(c,2)) { goto L_800FD21C; } // 800FCF34
  cmps(c,0,(int32_t)c->r[28],5896); // 800FCF38
  if (crb(c,2)) { goto L_800FCFCC; } // 800FCF3C
  if (!crb(c,0)) { goto L_800FCF5C; } // 800FCF40
  cmps(c,0,(int32_t)c->r[28],5889); // 800FCF44
  if (crb(c,2)) { goto L_800FD020; } // 800FCF48
  if (!crb(c,0)) { goto L_800FD038; } // 800FCF4C
  cmps(c,0,(int32_t)c->r[28],5888); // 800FCF50
  if (!crb(c,0)) { goto L_800FCF68; } // 800FCF54
  goto L_800FD038; // 800FCF58
L_800FCF5C:;
  cmps(c,0,(int32_t)c->r[28],5898); // 800FCF5C
  if (crb(c,2)) { goto L_800FCF8C; } // 800FCF60
  goto L_800FD038; // 800FCF64
L_800FCF68:;
  c->r[3]=c->r[1]+0x00000008u; // 800FCF68
  c->r[4]=c->r[29]+0x00000008u; // 800FCF6C
  c->r[30]=0u+0x00000002u; // 800FCF70
  c->lr=0x800FCF78u; f_800F7914(c); // 800FCF74
  c->r[3]=0u+0x00000009u; // 800FCF78
  c->r[0]=0u+0x000000FFu; // 800FCF7C
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800FCF80
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800FCF84
  goto L_800FD054; // 800FCF88
L_800FCF8C:;
  c->r[30]=R16(c->r[29]+0x00000010u); // 800FCF8C
  cmpu(c,0,c->r[30],0x0000000Bu); // 800FCF90
  if (!crb(c,2)) { goto L_800FCFB8; } // 800FCF94
  c->r[3]=c->r[1]+0x00000008u; // 800FCF98
  c->r[4]=c->r[29]+0x00000008u; // 800FCF9C
  c->lr=0x800FCFA4u; f_800F7914(c); // 800FCFA0
  c->r[3]=0u+0x00000009u; // 800FCFA4
  c->r[0]=0u+0x000000FFu; // 800FCFA8
  W8(c->r[1]+0x0000000Eu,c->r[3]); // 800FCFAC
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800FCFB0
  goto L_800FD054; // 800FCFB4
L_800FCFB8:;
  c->r[0]=0u+0x0000000Du; // 800FCFB8
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 800FCFBC
  c->r[0]=R16(c->r[29]+0x00000006u); // 800FCFC0
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 800FCFC4
  goto L_800FD054; // 800FCFC8
L_800FCFCC:;
  c->r[30]=R8(c->r[29]+0x00000008u); // 800FCFCC
  cmpu(c,0,c->r[30],0x00000007u); // 800FCFD0
  if (crb(c,2)) { goto L_800FCFE8; } // 800FCFD4
  cmpu(c,0,c->r[30],0x00000005u); // 800FCFD8
  if (crb(c,2)) { goto L_800FCFE8; } // 800FCFDC
  cmpu(c,0,c->r[30],0x00000009u); // 800FCFE0
  if (!crb(c,2)) { goto L_800FCFFC; } // 800FCFE4
L_800FCFE8:;
  c->r[0]=0u+0x0000000Du; // 800FCFE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FCFEC
  c->r[0]=R16(c->r[29]+0x00000006u); // 800FCFF0
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FCFF4
  goto L_800FD054; // 800FCFF8
L_800FCFFC:;
  cmpu(c,0,c->r[30],0x0000000Au); // 800FCFFC
  if (crb(c,2)) { goto L_800FD054; } // 800FD000
  cmpu(c,0,c->r[30],0x00000001u); // 800FD004
  if (crb(c,2)) { goto L_800FD054; } // 800FD008
  c->r[3]=R16(c->r[29]+0x00000006u); // 800FD00C
  c->r[0]=0u+0x0000000Du; // 800FD010
  W8(c->r[1]+0x00000009u,c->r[3]); // 800FD014
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FD018
  goto L_800FD054; // 800FD01C
L_800FD020:;
  c->r[0]=0u+0x0000000Du; // 800FD020
  c->r[30]=0u+0x00000003u; // 800FD024
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FD028
  c->r[0]=R16(c->r[29]+0x00000006u); // 800FD02C
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FD030
  goto L_800FD054; // 800FD034
L_800FD038:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD038
  cmpu(c,0,c->r[0],0x00000001u); // 800FD03C
  if (crb(c,0)) { goto L_800FD054; } // 800FD040
  c->r[5]=R16(c->r[29]+0x00000006u); // 800FD044
  c->r[4]=c->r[31]+0x00000000u; // 800FD048
  c->r[3]=0u+0x00000500u; // 800FD04C
  c->lr=0x800FD054u; f_800F72A0(c); // 800FD050
L_800FD054:;
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; cr0(c,c->r[3]); // 800FD054
  if (crb(c,2)) { goto L_800FD21C; } // 800FD058
  c->r[5]=0u+0x803D0000u; // 800FD05C
  c->r[4]=c->r[1]+0x00000008u; // 800FD060
  c->r[5]=c->r[5]+0xFFFF9FE8u; // 800FD064
  c->r[12]=R32(c->r[5]+0x00000224u); // 800FD068
  c->ctr=c->r[12]; // 800FD06C
  if (true) { c->lr=0x800FD074u; dispatch(c,c->ctr); } // 800FD070
  goto L_800FD21C; // 800FD074
L_800FD078:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD078
  c->r[30]=R8(c->r[27]+0x0000001Cu); // 800FD07C
  cmpu(c,0,c->r[0],0x00000004u); // 800FD080
  if (crb(c,0)) { goto L_800FD0F4; } // 800FD084
  cmps(c,0,(int32_t)c->r[30],2); // 800FD088
  if (crb(c,2)) { goto L_800FD0C0; } // 800FD08C
  if (!crb(c,0)) { goto L_800FD0A4; } // 800FD090
  cmps(c,0,(int32_t)c->r[30],0); // 800FD094
  if (crb(c,2)) { goto L_800FD0B0; } // 800FD098
  if (!crb(c,0)) { goto L_800FD0B8; } // 800FD09C
  goto L_800FD0D0; // 800FD0A0
L_800FD0A4:;
  cmps(c,0,(int32_t)c->r[30],4); // 800FD0A4
  if (!crb(c,0)) { goto L_800FD0D0; } // 800FD0A8
  goto L_800FD0C8; // 800FD0AC
L_800FD0B0:;
  c->r[26]=c->r[31]+0x0000001Cu; // 800FD0B0
  goto L_800FD0D4; // 800FD0B4
L_800FD0B8:;
  c->r[26]=c->r[31]+0x0000002Cu; // 800FD0B8
  goto L_800FD0D4; // 800FD0BC
L_800FD0C0:;
  c->r[26]=c->r[31]+0x0000003Cu; // 800FD0C0
  goto L_800FD0D4; // 800FD0C4
L_800FD0C8:;
  c->r[26]=c->r[31]+0x00000050u; // 800FD0C8
  goto L_800FD0D4; // 800FD0CC
L_800FD0D0:;
  c->r[26]=c->r[31]+0x00000060u; // 800FD0D0
L_800FD0D4:;
  c->r[3]=c->r[28]|c->r[28]; // 800FD0D4
  c->lr=0x800FD0DCu; f_800FD380(c); // 800FD0D8
  c->r[7]=c->r[3]|c->r[3]; // 800FD0DC
  c->r[5]=c->r[30]|c->r[30]; // 800FD0E0
  c->r[6]=c->r[26]|c->r[26]; // 800FD0E4
  c->r[4]=c->r[31]+0x00000078u; // 800FD0E8
  c->r[3]=0u+0x00000503u; // 800FD0EC
  c->lr=0x800FD0F4u; f_800F72E0(c); // 800FD0F0
L_800FD0F4:;
  c->r[4]=R8(c->r[27]+0x0000001Cu); // 800FD0F4
  c->r[3]=0u+0x802D0000u; // 800FD0F8
  c->r[3]=c->r[3]+0xFFFF9AF8u; // 800FD0FC
  c->r[28]=rotl(c->r[28],0)&0x000000FFu; // 800FD100
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 800FD104
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD108
  c->r[4]=rotl(c->r[28],1)&0xFFFFFFFEu; // 800FD10C
  c->r[5]=R32(c->r[3]+c->r[0]); // 800FD110
  c->r[3]=c->r[5]+c->r[4]; // 800FD114
  c->r[0]=R8(c->r[3]+0x00000001u); // 800FD118
  W8(c->r[27]+0x0000001Cu,c->r[0]); // 800FD11C
  c->r[0]=R8(c->r[5]+c->r[4]); // 800FD120
  cmpu(c,0,c->r[0],0x0000000Cu); // 800FD124
  if (crb(c,2)) { goto L_800FD14C; } // 800FD128
  c->r[4]=0u+0x802D0000u; // 800FD12C
  c->r[0]=rotl(c->r[0],2)&0x000003FCu; // 800FD130
  c->r[4]=c->r[4]+0xFFFF9A80u; // 800FD134
  c->r[3]=c->r[27]|c->r[27]; // 800FD138
  c->r[12]=R32(c->r[4]+c->r[0]); // 800FD13C
  c->r[4]=c->r[29]|c->r[29]; // 800FD140
  c->ctr=c->r[12]; // 800FD144
  if (true) { c->lr=0x800FD14Cu; dispatch(c,c->ctr); } // 800FD148
L_800FD14C:;
  c->r[3]=R8(c->r[27]+0x0000001Cu); // 800FD14C
  cmpu(c,0,c->r[30],c->r[3]); // 800FD150
  if (crb(c,2)) { goto L_800FD21C; } // 800FD154
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD158
  cmpu(c,0,c->r[0],0x00000005u); // 800FD15C
  if (crb(c,0)) { goto L_800FD21C; } // 800FD160
  cmps(c,0,(int32_t)c->r[30],2); // 800FD164
  if (crb(c,2)) { goto L_800FD19C; } // 800FD168
  if (!crb(c,0)) { goto L_800FD180; } // 800FD16C
  cmps(c,0,(int32_t)c->r[30],0); // 800FD170
  if (crb(c,2)) { goto L_800FD18C; } // 800FD174
  if (!crb(c,0)) { goto L_800FD194; } // 800FD178
  goto L_800FD1AC; // 800FD17C
L_800FD180:;
  cmps(c,0,(int32_t)c->r[30],4); // 800FD180
  if (!crb(c,0)) { goto L_800FD1AC; } // 800FD184
  goto L_800FD1A4; // 800FD188
L_800FD18C:;
  c->r[26]=c->r[31]+0x0000001Cu; // 800FD18C
  goto L_800FD1B0; // 800FD190
L_800FD194:;
  c->r[26]=c->r[31]+0x0000002Cu; // 800FD194
  goto L_800FD1B0; // 800FD198
L_800FD19C:;
  c->r[26]=c->r[31]+0x0000003Cu; // 800FD19C
  goto L_800FD1B0; // 800FD1A0
L_800FD1A4:;
  c->r[26]=c->r[31]+0x00000050u; // 800FD1A4
  goto L_800FD1B0; // 800FD1A8
L_800FD1AC:;
  c->r[26]=c->r[31]+0x00000060u; // 800FD1AC
L_800FD1B0:;
  cmps(c,0,(int32_t)c->r[3],2); // 800FD1B0
  if (crb(c,2)) { goto L_800FD1E8; } // 800FD1B4
  if (!crb(c,0)) { goto L_800FD1CC; } // 800FD1B8
  cmps(c,0,(int32_t)c->r[3],0); // 800FD1BC
  if (crb(c,2)) { goto L_800FD1D8; } // 800FD1C0
  if (!crb(c,0)) { goto L_800FD1E0; } // 800FD1C4
  goto L_800FD1F8; // 800FD1C8
L_800FD1CC:;
  cmps(c,0,(int32_t)c->r[3],4); // 800FD1CC
  if (!crb(c,0)) { goto L_800FD1F8; } // 800FD1D0
  goto L_800FD1F0; // 800FD1D4
L_800FD1D8:;
  c->r[27]=c->r[31]+0x0000001Cu; // 800FD1D8
  goto L_800FD1FC; // 800FD1DC
L_800FD1E0:;
  c->r[27]=c->r[31]+0x0000002Cu; // 800FD1E0
  goto L_800FD1FC; // 800FD1E4
L_800FD1E8:;
  c->r[27]=c->r[31]+0x0000003Cu; // 800FD1E8
  goto L_800FD1FC; // 800FD1EC
L_800FD1F0:;
  c->r[27]=c->r[31]+0x00000050u; // 800FD1F0
  goto L_800FD1FC; // 800FD1F4
L_800FD1F8:;
  c->r[27]=c->r[31]+0x00000060u; // 800FD1F8
L_800FD1FC:;
  c->r[3]=c->r[28]|c->r[28]; // 800FD1FC
  c->lr=0x800FD204u; f_800FD380(c); // 800FD200
  c->r[7]=c->r[3]|c->r[3]; // 800FD204
  c->r[5]=c->r[26]|c->r[26]; // 800FD208
  c->r[6]=c->r[27]|c->r[27]; // 800FD20C
  c->r[4]=c->r[31]+0x000000ACu; // 800FD210
  c->r[3]=0u+0x00000504u; // 800FD214
  c->lr=0x800FD21Cu; f_800F72E0(c); // 800FD218
L_800FD21C:;
  c->r[11]=c->r[1]+0x00000040u; // 800FD21C
  c->lr=0x800FD224u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FD220
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FD224
  c->lr=c->r[0]; // 800FD228
  c->r[1]=c->r[1]+0x00000040u; // 800FD22C
  return; // 800FD230
}

// bta_hh_hdl_event
void f_800FD234(Ctx* __restrict c) {
  trace_call(0x800FD234u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD234
  c->r[0]=c->lr; // 800FD238
  c->r[6]=0u+0x00000010u; // 800FD23C
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD240
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD244
  c->r[31]=0u+0x00000000u; // 800FD248
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FD24C
  c->r[30]=c->r[3]|c->r[3]; // 800FD250
  c->r[0]=R16(c->r[3]+0x00000000u); // 800FD254
  cmps(c,0,(int32_t)c->r[0],5902); // 800FD258
  if (crb(c,2)) { goto L_800FD298; } // 800FD25C
  if (!crb(c,0)) { goto L_800FD274; } // 800FD260
  cmps(c,0,(int32_t)c->r[0],5900); // 800FD264
  if (crb(c,2)) { goto L_800FD280; } // 800FD268
  if (!crb(c,0)) { goto L_800FD288; } // 800FD26C
  goto L_800FD2A0; // 800FD270
L_800FD274:;
  cmps(c,0,(int32_t)c->r[0],5904); // 800FD274
  if (!crb(c,0)) { goto L_800FD2A0; } // 800FD278
  goto L_800FD290; // 800FD27C
L_800FD280:;
  c->lr=0x800FD284u; f_800FB3C8(c); // 800FD280
  goto L_800FD364; // 800FD284
L_800FD288:;
  c->lr=0x800FD28Cu; f_800FB53C(c); // 800FD288
  goto L_800FD364; // 800FD28C
L_800FD290:;
  c->lr=0x800FD294u; f_800FB640(c); // 800FD290
  goto L_800FD364; // 800FD294
L_800FD298:;
  c->lr=0x800FD29Cu; f_800FC594(c); // 800FD298
  goto L_800FD364; // 800FD29C
L_800FD2A0:;
  cmpu(c,0,c->r[0],0x00001700u); // 800FD2A0
  if (!crb(c,2)) { goto L_800FD2B8; } // 800FD2A4
  c->r[3]=c->r[3]+0x00000008u; // 800FD2A8
  c->lr=0x800FD2B0u; f_800FD434(c); // 800FD2AC
  c->r[6]=c->r[3]|c->r[3]; // 800FD2B0
  goto L_800FD310; // 800FD2B4
L_800FD2B8:;
  cmpu(c,0,c->r[0],0x0000170Au); // 800FD2B8
  if (!crb(c,2)) { goto L_800FD2F4; } // 800FD2BC
  c->r[0]=R16(c->r[3]+0x00000010u); // 800FD2C0
  cmpu(c,0,c->r[0],0x0000000Bu); // 800FD2C4
  if (!crb(c,2)) { goto L_800FD2DC; } // 800FD2C8
  c->r[3]=c->r[3]+0x00000008u; // 800FD2CC
  c->lr=0x800FD2D4u; f_800FD434(c); // 800FD2D0
  c->r[6]=c->r[3]|c->r[3]; // 800FD2D4
  goto L_800FD310; // 800FD2D8
L_800FD2DC:;
  c->r[4]=0u+0x803D0000u; // 800FD2DC
  c->r[0]=R16(c->r[3]+0x00000006u); // 800FD2E0
  c->r[4]=c->r[4]+0xFFFF9FE8u; // 800FD2E4
  c->r[3]=c->r[4]+c->r[0]; // 800FD2E8
  c->r[6]=R8(c->r[3]+0x00000214u); // 800FD2EC
  goto L_800FD310; // 800FD2F0
L_800FD2F4:;
  c->r[0]=R16(c->r[3]+0x00000006u); // 800FD2F4
  cmpu(c,0,c->r[0],0x00000010u); // 800FD2F8
  if (!crb(c,0)) { goto L_800FD310; } // 800FD2FC
  c->r[3]=0u+0x803D0000u; // 800FD300
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FD304
  c->r[3]=c->r[3]+c->r[0]; // 800FD308
  c->r[6]=R8(c->r[3]+0x00000214u); // 800FD30C
L_800FD310:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 800FD310
  cmpu(c,0,c->r[0],0x00000010u); // 800FD314
  if (crb(c,2)) { goto L_800FD330; } // 800FD318
  c->r[3]=0u+0x803D0000u; // 800FD31C
  c->r[0]=rotl(c->r[6],5)&0x00001FE0u; // 800FD320
  c->r[3]=c->r[3]+0xFFFF9FE8u; // 800FD324
  c->r[3]=c->r[3]+c->r[0]; // 800FD328
  c->r[31]=c->r[3]+0x00000010u; // 800FD32C
L_800FD330:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD330
  cmpu(c,0,c->r[0],0x00000005u); // 800FD334
  if (crb(c,0)) { goto L_800FD354; } // 800FD338
  c->r[4]=0u+0x80330000u; // 800FD33C
  c->r[5]=R16(c->r[30]+0x00000006u); // 800FD340
  c->r[4]=c->r[4]+0xFFFFA51Cu; // 800FD344
  c->r[6]=rotl(c->r[6],0)&0x000000FFu; // 800FD348
  c->r[3]=0u+0x00000504u; // 800FD34C
  c->lr=0x800FD354u; f_800F72C0(c); // 800FD350
L_800FD354:;
  c->r[4]=R16(c->r[30]+0x00000000u); // 800FD354
  c->r[3]=c->r[31]|c->r[31]; // 800FD358
  c->r[5]=c->r[30]|c->r[30]; // 800FD35C
  c->lr=0x800FD364u; f_800FCEE0(c); // 800FD360
L_800FD364:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD364
  c->r[3]=0u+0x00000001u; // 800FD368
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FD36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD370
  c->lr=c->r[0]; // 800FD374
  c->r[1]=c->r[1]+0x00000010u; // 800FD378
  return; // 800FD37C
}

// bta_hh_evt_code
void f_800FD380(Ctx* __restrict c) {
  trace_call(0x800FD380u);
  c->r[0]=c->r[3]+0xFFFFE900u; // 800FD380
  c->r[4]=0u+0x80330000u; // 800FD384
  cmpu(c,0,c->r[0],0x0000000Fu); // 800FD388
  c->r[4]=c->r[4]+0xFFFFA440u; // 800FD38C
  if (crb(c,1)) { goto L_800FD42C; } // 800FD390
  c->r[3]=0u+0x80330000u; // 800FD394
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 800FD398
  c->r[3]=c->r[3]+0xFFFFA6E0u; // 800FD39C
  c->r[3]=R32(c->r[3]+c->r[0]); // 800FD3A0
  c->ctr=c->r[3]; // 800FD3A4
  if (true) { switch (c->ctr) { case 0x800FD3ACu: goto L_800FD3AC; case 0x800FD3B4u: goto L_800FD3B4; case 0x800FD3BCu: goto L_800FD3BC; case 0x800FD3C4u: goto L_800FD3C4; case 0x800FD3CCu: goto L_800FD3CC; case 0x800FD3D4u: goto L_800FD3D4; case 0x800FD3DCu: goto L_800FD3DC; case 0x800FD3E4u: goto L_800FD3E4; case 0x800FD3ECu: goto L_800FD3EC; case 0x800FD3F4u: goto L_800FD3F4; case 0x800FD3FCu: goto L_800FD3FC; case 0x800FD404u: goto L_800FD404; case 0x800FD40Cu: goto L_800FD40C; case 0x800FD414u: goto L_800FD414; case 0x800FD41Cu: goto L_800FD41C; case 0x800FD424u: goto L_800FD424; default: break; } dispatch(c,c->ctr); return; } // 800FD3A8
L_800FD3AC:;
  c->r[3]=c->r[4]+0x00000108u; // 800FD3AC
  return; // 800FD3B0
L_800FD3B4:;
  c->r[3]=c->r[4]+0x00000120u; // 800FD3B4
  return; // 800FD3B8
L_800FD3BC:;
  c->r[3]=c->r[4]+0x00000138u; // 800FD3BC
  return; // 800FD3C0
L_800FD3C4:;
  c->r[3]=c->r[4]+0x0000014Cu; // 800FD3C4
  return; // 800FD3C8
L_800FD3CC:;
  c->r[3]=c->r[4]+0x00000164u; // 800FD3CC
  return; // 800FD3D0
L_800FD3D4:;
  c->r[3]=c->r[4]+0x00000178u; // 800FD3D4
  return; // 800FD3D8
L_800FD3DC:;
  c->r[3]=c->r[4]+0x00000190u; // 800FD3DC
  return; // 800FD3E0
L_800FD3E4:;
  c->r[3]=c->r[4]+0x000001A8u; // 800FD3E4
  return; // 800FD3E8
L_800FD3EC:;
  c->r[3]=c->r[4]+0x000001BCu; // 800FD3EC
  return; // 800FD3F0
L_800FD3F4:;
  c->r[3]=c->r[4]+0x000001D4u; // 800FD3F4
  return; // 800FD3F8
L_800FD3FC:;
  c->r[3]=c->r[4]+0x000001F0u; // 800FD3FC
  return; // 800FD400
L_800FD404:;
  c->r[3]=c->r[4]+0x00000204u; // 800FD404
  return; // 800FD408
L_800FD40C:;
  c->r[3]=c->r[4]+0x0000021Cu; // 800FD40C
  return; // 800FD410
L_800FD414:;
  c->r[3]=c->r[4]+0x00000238u; // 800FD414
  return; // 800FD418
L_800FD41C:;
  c->r[3]=c->r[4]+0x00000250u; // 800FD41C
  return; // 800FD420
L_800FD424:;
  c->r[3]=c->r[4]+0x00000268u; // 800FD424
  return; // 800FD428
L_800FD42C:;
  c->r[3]=c->r[4]+0x00000284u; // 800FD42C
  return; // 800FD430
}

// bta_hh_find_cb
void f_800FD434(Ctx* __restrict c) {
  trace_call(0x800FD434u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD434
  c->r[0]=c->lr; // 800FD438
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD43C
  c->r[11]=c->r[1]+0x00000020u; // 800FD440
  c->lr=0x800FD448u; f_800ADA2C(c); // 800FD444
  c->r[31]=0u+0x803D0000u; // 800FD448
  c->r[30]=0u+0x80330000u; // 800FD44C
  c->r[27]=c->r[3]|c->r[3]; // 800FD450
  c->r[28]=0u+0x00000000u; // 800FD454
  c->r[30]=c->r[30]+0xFFFFA720u; // 800FD458
  c->r[31]=c->r[31]+0xFFFF9FE8u; // 800FD45C
L_800FD460:;
  c->r[29]=rotl(c->r[28],5)&0x00001FE0u; // 800FD460
  c->r[3]=c->r[27]|c->r[27]; // 800FD464
  c->r[4]=c->r[31]+c->r[29]; // 800FD468
  c->r[4]=c->r[4]+0x00000018u; // 800FD46C
  c->lr=0x800FD474u; f_800F7948(c); // 800FD470
  cmps(c,0,(int32_t)c->r[3],0); // 800FD474
  if (!crb(c,2)) { goto L_800FD4BC; } // 800FD478
  c->r[3]=c->r[27]|c->r[27]; // 800FD47C
  c->r[4]=c->r[2]+0xFFFFC1C8u; // 800FD480
  c->lr=0x800FD488u; f_800F7948(c); // 800FD484
  cmps(c,0,(int32_t)c->r[3],0); // 800FD488
  if (crb(c,2)) { goto L_800FD4BC; } // 800FD48C
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD490
  cmpu(c,0,c->r[0],0x00000005u); // 800FD494
  if (crb(c,0)) { goto L_800FD4B4; } // 800FD498
  c->r[3]=c->r[31]+c->r[29]; // 800FD49C
  c->r[4]=c->r[30]+0x00000000u; // 800FD4A0
  c->r[6]=R8(c->r[3]+0x00000026u); // 800FD4A4
  c->r[5]=rotl(c->r[28],0)&0x000000FFu; // 800FD4A8
  c->r[3]=0u+0x00000504u; // 800FD4AC
  c->lr=0x800FD4B4u; f_800F72C0(c); // 800FD4B0
L_800FD4B4:;
  c->r[3]=c->r[28]|c->r[28]; // 800FD4B4
  goto L_800FD558; // 800FD4B8
L_800FD4BC:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD4BC
  cmpu(c,0,c->r[0],0x00000005u); // 800FD4C0
  if (crb(c,0)) { goto L_800FD4E8; } // 800FD4C4
  c->r[8]=c->r[31]+c->r[29]; // 800FD4C8
  c->r[4]=c->r[30]+0x00000024u; // 800FD4CC
  c->r[5]=R8(c->r[8]+0x00000028u); // 800FD4D0
  c->r[6]=rotl(c->r[28],0)&0x000000FFu; // 800FD4D4
  c->r[7]=R8(c->r[8]+0x00000026u); // 800FD4D8
  c->r[3]=0u+0x00000504u; // 800FD4DC
  c->r[8]=R8(c->r[8]+0x0000002Cu); // 800FD4E0
  c->lr=0x800FD4E8u; f_800F7300(c); // 800FD4E4
L_800FD4E8:;
  c->r[28]=c->r[28]+0x00000001u; // 800FD4E8
  cmpu(c,0,c->r[28],0x00000010u); // 800FD4EC
  if (crb(c,0)) { IRQCHK(c); goto L_800FD460; } // 800FD4F0
  c->r[4]=0u+0x803D0000u; // 800FD4F4
  c->r[0]=0u+0x00000010u; // 800FD4F8
  c->r[4]=c->r[4]+0xFFFF9FE8u; // 800FD4FC
  c->r[29]=0u+0x00000000u; // 800FD500
  c->ctr=c->r[0]; // 800FD504
L_800FD508:;
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 800FD508
  c->r[3]=c->r[4]+c->r[0]; // 800FD50C
  c->r[0]=R8(c->r[3]+0x00000028u); // 800FD510
  cmps(c,0,(int32_t)c->r[0],0); // 800FD514
  if (!crb(c,2)) { goto L_800FD52C; } // 800FD518
  c->r[4]=c->r[27]|c->r[27]; // 800FD51C
  c->r[3]=c->r[3]+0x00000018u; // 800FD520
  c->lr=0x800FD528u; f_800F7914(c); // 800FD524
  goto L_800FD534; // 800FD528
L_800FD52C:;
  c->r[29]=c->r[29]+0x00000001u; // 800FD52C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FD508; } // 800FD530
L_800FD534:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD534
  cmpu(c,0,c->r[0],0x00000005u); // 800FD538
  if (crb(c,0)) { goto L_800FD554; } // 800FD53C
  c->r[4]=c->r[30]+0x00000058u; // 800FD540
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 800FD544
  c->r[3]=0u+0x00000504u; // 800FD548
  c->r[6]=0u+0x00000010u; // 800FD54C
  c->lr=0x800FD554u; f_800F72C0(c); // 800FD550
L_800FD554:;
  c->r[3]=c->r[29]|c->r[29]; // 800FD554
L_800FD558:;
  c->r[11]=c->r[1]+0x00000020u; // 800FD558
  c->lr=0x800FD560u; f_800ADA78(c); // 800FD55C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD560
  c->lr=c->r[0]; // 800FD564
  c->r[1]=c->r[1]+0x00000020u; // 800FD568
  return; // 800FD56C
}

// bta_hh_clean_up_kdev
void f_800FD570(Ctx* __restrict c) {
  trace_call(0x800FD570u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD570
  c->r[0]=c->lr; // 800FD574
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FD578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FD57C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FD580
  c->r[30]=c->r[3]|c->r[3]; // 800FD584
  c->r[5]=R8(c->r[3]+0x00000016u); // 800FD588
  cmpu(c,0,c->r[5],0x000000FFu); // 800FD58C
  if (crb(c,2)) { goto L_800FD5A8; } // 800FD590
  c->r[4]=0u+0x803D0000u; // 800FD594
  c->r[0]=0u+0x00000010u; // 800FD598
  c->r[4]=c->r[4]+0xFFFF9FE8u; // 800FD59C
  c->r[4]=c->r[4]+c->r[5]; // 800FD5A0
  W8(c->r[4]+0x00000214u,c->r[0]); // 800FD5A4
L_800FD5A8:;
  c->r[31]=R8(c->r[3]+0x00000012u); // 800FD5A8
  c->r[3]=c->r[3]+0x00000004u; // 800FD5AC
  c->lr=0x800FD5B4u; f_800F8060(c); // 800FD5B0
  c->r[3]=c->r[30]|c->r[30]; // 800FD5B4
  c->r[4]=0u+0x00000000u; // 800FD5B8
  c->r[5]=0u+0x00000020u; // 800FD5BC
  c->lr=0x800FD5C4u; f_80004714(c); // 800FD5C0
  c->r[3]=0u+0x00000001u; // 800FD5C4
  c->r[0]=0u+0x000000FFu; // 800FD5C8
  W8(c->r[30]+0x00000012u,c->r[31]); // 800FD5CC
  W8(c->r[30]+0x0000001Cu,c->r[3]); // 800FD5D0
  W8(c->r[30]+0x00000016u,c->r[0]); // 800FD5D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FD5D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FD5DC
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FD5E0
  c->lr=c->r[0]; // 800FD5E4
  c->r[1]=c->r[1]+0x00000010u; // 800FD5E8
  return; // 800FD5EC
}

// bta_hh_add_device_to_list
void f_800FD5F0(Ctx* __restrict c) {
  trace_call(0x800FD5F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD5F0
  c->r[0]=c->lr; // 800FD5F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD5F8
  c->r[11]=c->r[1]+0x00000020u; // 800FD5FC
  c->lr=0x800FD604u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FD600
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD604
  c->r[26]=c->r[3]|c->r[3]; // 800FD608
  c->r[27]=c->r[4]|c->r[4]; // 800FD60C
  c->r[28]=c->r[5]|c->r[5]; // 800FD610
  cmpu(c,0,c->r[0],0x00000005u); // 800FD614
  c->r[29]=c->r[6]|c->r[6]; // 800FD618
  c->r[30]=c->r[7]|c->r[7]; // 800FD61C
  c->r[31]=c->r[8]|c->r[8]; // 800FD620
  if (crb(c,0)) { goto L_800FD63C; } // 800FD624
  c->r[4]=0u+0x80330000u; // 800FD628
  c->r[5]=c->r[30]|c->r[30]; // 800FD62C
  c->r[4]=c->r[4]+0xFFFFA7A4u; // 800FD630
  c->r[3]=0u+0x00000504u; // 800FD634
  c->lr=0x800FD63Cu; f_800F72A0(c); // 800FD638
L_800FD63C:;
  c->r[0]=0u+0x00000001u; // 800FD63C
  cmps(c,0,(int32_t)c->r[29],0); // 800FD640
  W8(c->r[26]+0x00000016u,c->r[27]); // 800FD644
  W8(c->r[26]+0x00000018u,c->r[0]); // 800FD648
  W16(c->r[26]+0x0000000Eu,c->r[28]); // 800FD64C
  W8(c->r[26]+0x00000013u,c->r[30]); // 800FD650
  W8(c->r[26]+0x00000015u,c->r[31]); // 800FD654
  if (crb(c,2)) { goto L_800FD694; } // 800FD658
  c->r[3]=c->r[26]+0x00000004u; // 800FD65C
  c->lr=0x800FD664u; f_800F8060(c); // 800FD660
  c->r[3]=R16(c->r[29]+0x00000000u); // 800FD664
  cmps(c,0,(int32_t)c->r[3],0); // 800FD668
  if (crb(c,2)) { goto L_800FD694; } // 800FD66C
  c->lr=0x800FD674u; f_800F4530(c); // 800FD670
  cmps(c,0,(int32_t)c->r[3],0); // 800FD674
  W32(c->r[26]+0x00000004u,c->r[3]); // 800FD678
  if (crb(c,2)) { goto L_800FD694; } // 800FD67C
  c->r[0]=R16(c->r[29]+0x00000000u); // 800FD680
  W16(c->r[26]+0x00000000u,c->r[0]); // 800FD684
  c->r[4]=R32(c->r[29]+0x00000004u); // 800FD688
  c->r[5]=R16(c->r[29]+0x00000000u); // 800FD68C
  c->lr=0x800FD694u; f_800043C4(c); // 800FD690
L_800FD694:;
  c->r[11]=c->r[1]+0x00000020u; // 800FD694
  c->lr=0x800FD69Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FD698
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD69C
  c->lr=c->r[0]; // 800FD6A0
  c->r[1]=c->r[1]+0x00000020u; // 800FD6A4
  return; // 800FD6A8
}

// bta_hh_tod_spt
void f_800FD6AC(Ctx* __restrict c) {
  trace_call(0x800FD6ACu);
  c->r[7]=R32(c->r[13]+0xFFFF8788u); // 800FD6AC
  c->r[9]=rotl(c->r[4],30)&0x0000003Fu; // 800FD6B0
  c->r[8]=0u+0x00000000u; // 800FD6B4
  c->r[5]=R8(c->r[7]+0x00000000u); // 800FD6B8
  goto L_800FD6EC; // 800FD6BC
L_800FD6C0:;
  c->r[4]=R32(c->r[7]+0x00000004u); // 800FD6C0
  c->r[6]=rotl(c->r[8],1)&0x000001FEu; // 800FD6C4
  c->r[0]=R8(c->r[4]+c->r[6]); // 800FD6C8
  cmpu(c,0,c->r[9],c->r[0]); // 800FD6CC
  if (!crb(c,2)) { goto L_800FD6E8; } // 800FD6D0
  c->r[4]=c->r[4]+c->r[6]; // 800FD6D4
  c->r[0]=R8(c->r[4]+0x00000001u); // 800FD6D8
  W8(c->r[3]+0x00000015u,c->r[0]); // 800FD6DC
  c->r[3]=0u+0x00000001u; // 800FD6E0
  return; // 800FD6E4
L_800FD6E8:;
  c->r[8]=c->r[8]+0x00000001u; // 800FD6E8
L_800FD6EC:;
  c->r[0]=rotl(c->r[8],0)&0x000000FFu; // 800FD6EC
  cmpu(c,0,c->r[0],c->r[5]); // 800FD6F0
  if (crb(c,0)) { IRQCHK(c); goto L_800FD6C0; } // 800FD6F4
  c->r[3]=0u+0x00000000u; // 800FD6F8
  return; // 800FD6FC
}

// bta_hh_trace_dev_db
void f_800FD700(Ctx* __restrict c) {
  trace_call(0x800FD700u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD700
  c->r[0]=c->lr; // 800FD704
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FD708
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FD70C
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FD710
  c->r[30]=0u+0x80330000u; // 800FD714
  c->r[30]=c->r[30]+0xFFFFA720u; // 800FD718
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FD71C
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD720
  cmpu(c,0,c->r[0],0x00000005u); // 800FD724
  if (crb(c,0)) { goto L_800FD738; } // 800FD728
  c->r[4]=c->r[30]+0x000001E4u; // 800FD72C
  c->r[3]=0u+0x00000504u; // 800FD730
  c->lr=0x800FD738u; f_800F7280(c); // 800FD734
L_800FD738:;
  c->r[3]=0u+0x803D0000u; // 800FD738
  c->r[29]=0u+0x00000000u; // 800FD73C
  c->r[31]=c->r[3]+0xFFFF9FE8u; // 800FD740
L_800FD744:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD744
  cmpu(c,0,c->r[0],0x00000005u); // 800FD748
  if (crb(c,0)) { goto L_800FD770; } // 800FD74C
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 800FD750
  c->r[4]=c->r[30]+0x00000220u; // 800FD754
  c->r[7]=c->r[31]+c->r[0]; // 800FD758
  c->r[5]=rotl(c->r[29],0)&0x000000FFu; // 800FD75C
  c->r[6]=R8(c->r[7]+0x00000028u); // 800FD760
  c->r[3]=0u+0x00000504u; // 800FD764
  c->r[7]=R8(c->r[7]+0x00000026u); // 800FD768
  c->lr=0x800FD770u; f_800F72E0(c); // 800FD76C
L_800FD770:;
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD770
  cmpu(c,0,c->r[0],0x00000005u); // 800FD774
  if (crb(c,0)) { goto L_800FD7A0; } // 800FD778
  c->r[0]=rotl(c->r[29],5)&0x00001FE0u; // 800FD77C
  c->r[4]=c->r[30]+0x00000244u; // 800FD780
  c->r[8]=c->r[31]+c->r[0]; // 800FD784
  c->r[3]=0u+0x00000504u; // 800FD788
  c->r[5]=R16(c->r[8]+0x0000001Eu); // 800FD78C
  c->r[6]=R8(c->r[8]+0x0000002Cu); // 800FD790
  c->r[7]=R8(c->r[8]+0x00000023u); // 800FD794
  c->r[8]=R8(c->r[8]+0x00000022u); // 800FD798
  c->lr=0x800FD7A0u; f_800F7300(c); // 800FD79C
L_800FD7A0:;
  c->r[29]=c->r[29]+0x00000001u; // 800FD7A0
  cmpu(c,0,c->r[29],0x00000010u); // 800FD7A4
  if (crb(c,0)) { IRQCHK(c); goto L_800FD744; } // 800FD7A8
  c->r[0]=R8(c->r[13]+0xFFFFA100u); // 800FD7AC
  cmpu(c,0,c->r[0],0x00000005u); // 800FD7B0
  if (crb(c,0)) { goto L_800FD7C4; } // 800FD7B4
  c->r[4]=c->r[30]+0x00000280u; // 800FD7B8
  c->r[3]=0u+0x00000504u; // 800FD7BC
  c->lr=0x800FD7C4u; f_800F7280(c); // 800FD7C0
L_800FD7C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FD7C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FD7C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FD7CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FD7D0
  c->lr=c->r[0]; // 800FD7D4
  c->r[1]=c->r[1]+0x00000020u; // 800FD7D8
  return; // 800FD7DC
}

// btm_acl_init
void f_800FD7E0(Ctx* __restrict c) {
  trace_call(0x800FD7E0u);
  c->r[3]=0u+0x803D0000u; // 800FD7E0
  c->r[4]=0u+0x00007D00u; // 800FD7E4
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FD7E8
  c->r[0]=0u+0x000000FFu; // 800FD7EC
  W16(c->r[3]+0x000004C6u,c->r[4]); // 800FD7F0
  W8(c->r[3]+0x000027BFu,c->r[0]); // 800FD7F4
  return; // 800FD7F8
}

// btm_handle_to_acl_index
void f_800FD7FC(Ctx* __restrict c) {
  trace_call(0x800FD7FCu);
  c->r[4]=0u+0x803D0000u; // 800FD7FC
  c->r[5]=0u+0x00000000u; // 800FD800
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FD804
  c->r[0]=R8(c->r[4]+0x0000014Du); // 800FD808
  cmps(c,0,(int32_t)c->r[0],0); // 800FD80C
  if (crb(c,2)) { goto L_800FD820; } // 800FD810
  c->r[0]=R16(c->r[4]+0x00000034u); // 800FD814
  cmpu(c,0,c->r[0],c->r[3]); // 800FD818
  if (crb(c,2)) { goto L_800FD878; } // 800FD81C
L_800FD820:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 800FD820
  c->r[5]=0u+0x00000001u; // 800FD824
  cmps(c,0,(int32_t)c->r[0],0); // 800FD828
  if (crb(c,2)) { goto L_800FD83C; } // 800FD82C
  c->r[0]=R16(c->r[4]+0x00000150u); // 800FD830
  cmpu(c,0,c->r[0],c->r[3]); // 800FD834
  if (crb(c,2)) { goto L_800FD878; } // 800FD838
L_800FD83C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 800FD83C
  c->r[5]=0u+0x00000002u; // 800FD840
  cmps(c,0,(int32_t)c->r[0],0); // 800FD844
  if (crb(c,2)) { goto L_800FD858; } // 800FD848
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 800FD84C
  cmpu(c,0,c->r[0],c->r[3]); // 800FD850
  if (crb(c,2)) { goto L_800FD878; } // 800FD854
L_800FD858:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 800FD858
  c->r[5]=0u+0x00000003u; // 800FD85C
  cmps(c,0,(int32_t)c->r[0],0); // 800FD860
  if (crb(c,2)) { goto L_800FD874; } // 800FD864
  c->r[0]=R16(c->r[4]+0x00000388u); // 800FD868
  cmpu(c,0,c->r[0],c->r[3]); // 800FD86C
  if (crb(c,2)) { goto L_800FD878; } // 800FD870
L_800FD874:;
  c->r[5]=0u+0x00000004u; // 800FD874
L_800FD878:;
  c->r[3]=c->r[5]|c->r[5]; // 800FD878
  return; // 800FD87C
}

// btm_acl_created
void f_800FD880(Ctx* __restrict c) {
  trace_call(0x800FD880u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FD880
  c->r[0]=c->lr; // 800FD884
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FD888
  c->r[11]=c->r[1]+0x00000030u; // 800FD88C
  c->lr=0x800FD894u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FD890
  c->r[8]=0u+0x803D0000u; // 800FD894
  c->r[30]=c->r[3]|c->r[3]; // 800FD898
  c->r[8]=c->r[8]+0xFFFFA218u; // 800FD89C
  c->r[25]=c->r[4]|c->r[4]; // 800FD8A0
  c->r[26]=c->r[5]|c->r[5]; // 800FD8A4
  c->r[27]=c->r[6]|c->r[6]; // 800FD8A8
  c->r[28]=c->r[7]|c->r[7]; // 800FD8AC
  c->r[29]=c->r[8]+0x00000034u; // 800FD8B0
  c->r[31]=0u+0x00000000u; // 800FD8B4
L_800FD8B8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FD8B8
  cmps(c,0,(int32_t)c->r[0],0); // 800FD8BC
  if (crb(c,2)) { goto L_800FD8E0; } // 800FD8C0
  c->r[4]=c->r[30]|c->r[30]; // 800FD8C4
  c->r[3]=c->r[29]+0x00000008u; // 800FD8C8
  c->r[5]=0u+0x00000006u; // 800FD8CC
  c->lr=0x800FD8D4u; f_800B3824(c); // 800FD8D0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD8D4
  if (!crb(c,2)) { goto L_800FD8E0; } // 800FD8D8
  goto L_800FD8F4; // 800FD8DC
L_800FD8E0:;
  c->r[31]=c->r[31]+0x00000001u; // 800FD8E0
  c->r[29]=c->r[29]+0x0000011Cu; // 800FD8E4
  cmpu(c,0,c->r[31],0x00000004u); // 800FD8E8
  if (crb(c,0)) { IRQCHK(c); goto L_800FD8B8; } // 800FD8EC
  c->r[29]=0u+0x00000000u; // 800FD8F0
L_800FD8F4:;
  cmps(c,0,(int32_t)c->r[29],0); // 800FD8F4
  if (crb(c,2)) { goto L_800FD948; } // 800FD8F8
  W16(c->r[29]+0x00000000u,c->r[27]); // 800FD8FC
  c->r[3]=0u+0x803D0000u; // 800FD900
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FD904
  W8(c->r[29]+0x0000011Au,c->r[28]); // 800FD908
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FD90C
  cmpu(c,0,c->r[0],0x00000004u); // 800FD910
  if (crb(c,0)) { goto L_800FDB7C; } // 800FD914
  c->r[3]=0u+0x000D0000u; // 800FD918
  c->r[4]=0u+0x80330000u; // 800FD91C
  c->r[5]=R8(c->r[30]+0x00000000u); // 800FD920
  c->r[3]=c->r[3]+0x00000003u; // 800FD924
  c->r[6]=R8(c->r[30]+0x00000001u); // 800FD928
  c->r[4]=c->r[4]+0xFFFFA9E0u; // 800FD92C
  c->r[7]=R8(c->r[30]+0x00000002u); // 800FD930
  c->r[8]=R8(c->r[30]+0x00000003u); // 800FD934
  c->r[9]=R8(c->r[30]+0x00000004u); // 800FD938
  c->r[10]=R8(c->r[30]+0x00000005u); // 800FD93C
  c->lr=0x800FD944u; f_800F7340(c); // 800FD940
  goto L_800FDB7C; // 800FD944
L_800FD948:;
  c->r[3]=0u+0x803D0000u; // 800FD948
  c->r[0]=0u+0x00000004u; // 800FD94C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FD950
  c->r[4]=0u+0x00000000u; // 800FD954
  c->r[31]=c->r[3]+0x00000034u; // 800FD958
  c->ctr=c->r[0]; // 800FD95C
L_800FD960:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 800FD960
  cmps(c,0,(int32_t)c->r[0],0); // 800FD964
  if (!crb(c,2)) { goto L_800FDB70; } // 800FD968
  c->r[3]=0u+0x00000001u; // 800FD96C
  c->r[0]=0u+0x00000000u; // 800FD970
  W8(c->r[31]+0x00000119u,c->r[3]); // 800FD974
  c->r[3]=rotl(c->r[4],0)&0x000000FFu; // 800FD978
  W16(c->r[31]+0x00000000u,c->r[27]); // 800FD97C
  W8(c->r[31]+0x0000011Au,c->r[28]); // 800FD980
  W16(c->r[31]+0x00000004u,c->r[0]); // 800FD984
  c->lr=0x800FD98Cu; f_8010355C(c); // 800FD988
  c->r[4]=c->r[30]|c->r[30]; // 800FD98C
  c->r[3]=c->r[31]+0x00000008u; // 800FD990
  c->r[5]=0u+0x00000006u; // 800FD994
  c->lr=0x800FD99Cu; f_800043C4(c); // 800FD998
  cmps(c,0,(int32_t)c->r[25],0); // 800FD99C
  if (crb(c,2)) { goto L_800FD9B4; } // 800FD9A0
  c->r[4]=c->r[25]|c->r[25]; // 800FD9A4
  c->r[3]=c->r[31]+0x0000000Eu; // 800FD9A8
  c->r[5]=0u+0x00000003u; // 800FD9AC
  c->lr=0x800FD9B4u; f_800043C4(c); // 800FD9B0
L_800FD9B4:;
  cmps(c,0,(int32_t)c->r[26],0); // 800FD9B4
  if (crb(c,2)) { goto L_800FD9CC; } // 800FD9B8
  c->r[4]=c->r[26]|c->r[26]; // 800FD9BC
  c->r[3]=c->r[31]+0x00000011u; // 800FD9C0
  c->r[5]=0u+0x000000F8u; // 800FD9C4
  c->lr=0x800FD9CCu; f_800043C4(c); // 800FD9C8
L_800FD9CC:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FD9CC
  c->lr=0x800FD9D4u; f_8010AEE0(c); // 800FD9D0
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FD9D4
  c->lr=0x800FD9DCu; f_8010AE64(c); // 800FD9D8
  c->r[3]=c->r[27]|c->r[27]; // 800FD9DC
  c->lr=0x800FD9E4u; f_800FF918(c); // 800FD9E0
  cmps(c,0,(int32_t)c->r[3],0); // 800FD9E4
  c->r[5]=c->r[3]|c->r[3]; // 800FD9E8
  if (crb(c,2)) { goto L_800FDB64; } // 800FD9EC
  c->r[0]=0u+0x00000008u; // 800FD9F0
  c->r[6]=0u+0x00000000u; // 800FD9F4
  c->ctr=c->r[0]; // 800FD9F8
L_800FD9FC:;
  c->r[0]=rotl(c->r[6],0)&0x000000FFu; // 800FD9FC
  c->r[4]=c->r[3]+c->r[0]; // 800FDA00
  c->r[0]=R8(c->r[4]+0x00000077u); // 800FDA04
  cmps(c,0,(int32_t)c->r[0],0); // 800FDA08
  if (crb(c,2)) { goto L_800FDB5C; } // 800FDA0C
  c->r[4]=c->r[5]+0x00000077u; // 800FDA10
  c->r[3]=c->r[31]+0x00000110u; // 800FDA14
  c->r[5]=0u+0x00000008u; // 800FDA18
  c->lr=0x800FDA20u; f_800043C4(c); // 800FDA1C
  c->r[3]=0u+0x803D0000u; // 800FDA20
  c->r[0]=0u+0xFFFFCCF9u; // 800FDA24
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDA28
  c->r[5]=R16(c->r[3]+0x00000654u); // 800FDA2C
  c->r[3]=R8(c->r[3]+0x00000636u); // 800FDA30
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 800FDA34
  cmpu(c,0,c->r[3],0x00000003u); // 800FDA38
  c->r[30]=c->r[4]&c->r[0]; // 800FDA3C
  if (crb(c,0)) { goto L_800FDA50; } // 800FDA40
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 800FDA44
  c->r[0]=c->r[4]|c->r[0]; // 800FDA48
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 800FDA4C
L_800FDA50:;
  c->r[3]=0u+0x803D0000u; // 800FDA50
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDA54
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FDA58
  cmpu(c,0,c->r[0],0x00000004u); // 800FDA5C
  if (crb(c,0)) { goto L_800FDA7C; } // 800FDA60
  c->r[3]=0u+0x000D0000u; // 800FDA64
  c->r[4]=0u+0x80330000u; // 800FDA68
  c->r[3]=c->r[3]+0x00000003u; // 800FDA6C
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 800FDA70
  c->r[4]=c->r[4]+0xFFFFAA20u; // 800FDA74
  c->lr=0x800FDA7Cu; f_800F72A0(c); // 800FDA78
L_800FDA7C:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FDA7C
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 800FDA80
  c->lr=0x800FDA88u; f_8010AAD8(c); // 800FDA84
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FDA88
  if (crb(c,2)) { goto L_800FDA94; } // 800FDA8C
  W16(c->r[31]+0x00000002u,c->r[30]); // 800FDA90
L_800FDA94:;
  c->r[4]=0u+0x803D0000u; // 800FDA94
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FDA98
  c->r[0]=R16(c->r[4]+0x000004C4u); // 800FDA9C
  cmps(c,0,(int32_t)c->r[0],0); // 800FDAA0
  if (crb(c,2)) { goto L_800FDAB4; } // 800FDAA4
  c->r[3]=c->r[31]+0x00000008u; // 800FDAA8
  c->r[4]=c->r[4]+0x000004C4u; // 800FDAAC
  c->lr=0x800FDAB4u; f_800FE048(c); // 800FDAB0
L_800FDAB4:;
  c->r[3]=0u+0x803D0000u; // 800FDAB4
  c->r[29]=0u+0x00000000u; // 800FDAB8
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDABC
  c->r[28]=R16(c->r[3]+0x000004C6u); // 800FDAC0
  c->r[30]=c->r[3]+0x00000034u; // 800FDAC4
L_800FDAC8:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FDAC8
  cmps(c,0,(int32_t)c->r[0],0); // 800FDACC
  if (crb(c,2)) { goto L_800FDAF0; } // 800FDAD0
  c->r[3]=c->r[30]+0x00000008u; // 800FDAD4
  c->r[4]=c->r[31]+0x00000008u; // 800FDAD8
  c->r[5]=0u+0x00000006u; // 800FDADC
  c->lr=0x800FDAE4u; f_800B3824(c); // 800FDAE0
  cmps(c,0,(int32_t)c->r[3],0); // 800FDAE4
  if (!crb(c,2)) { goto L_800FDAF0; } // 800FDAE8
  goto L_800FDB04; // 800FDAEC
L_800FDAF0:;
  c->r[29]=c->r[29]+0x00000001u; // 800FDAF0
  c->r[30]=c->r[30]+0x0000011Cu; // 800FDAF4
  cmpu(c,0,c->r[29],0x00000004u); // 800FDAF8
  if (crb(c,0)) { IRQCHK(c); goto L_800FDAC8; } // 800FDAFC
  c->r[30]=0u+0x00000000u; // 800FDB00
L_800FDB04:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FDB04
  if (crb(c,2)) { goto L_800FDB28; } // 800FDB08
  W16(c->r[30]+0x0000010Eu,c->r[28]); // 800FDB0C
  c->r[0]=R8(c->r[30]+0x0000011Au); // 800FDB10
  cmps(c,0,(int32_t)c->r[0],0); // 800FDB14
  if (!crb(c,2)) { goto L_800FDB28; } // 800FDB18
  c->r[3]=R16(c->r[30]+0x00000000u); // 800FDB1C
  c->r[4]=c->r[28]|c->r[28]; // 800FDB20
  c->lr=0x800FDB28u; f_8010BFD8(c); // 800FDB24
L_800FDB28:;
  c->r[3]=0u+0x803D0000u; // 800FDB28
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDB2C
  c->r[12]=R32(c->r[3]+0x000004C8u); // 800FDB30
  cmps(c,0,(int32_t)c->r[12],0); // 800FDB34
  if (crb(c,2)) { goto L_800FDB7C; } // 800FDB38
  c->r[3]=c->r[31]+0x00000008u; // 800FDB3C
  c->r[4]=c->r[31]+0x0000000Eu; // 800FDB40
  c->r[5]=c->r[31]+0x00000011u; // 800FDB44
  c->r[6]=c->r[31]+0x00000110u; // 800FDB48
  c->r[7]=0u+0x00000001u; // 800FDB4C
  c->ctr=c->r[12]; // 800FDB50
  if (true) { c->lr=0x800FDB58u; dispatch(c,c->ctr); } // 800FDB54
  goto L_800FDB7C; // 800FDB58
L_800FDB5C:;
  c->r[6]=c->r[6]+0x00000001u; // 800FDB5C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FD9FC; } // 800FDB60
L_800FDB64:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FDB64
  c->lr=0x800FDB6Cu; f_8010ADE8(c); // 800FDB68
  goto L_800FDB7C; // 800FDB6C
L_800FDB70:;
  c->r[4]=c->r[4]+0x00000001u; // 800FDB70
  c->r[31]=c->r[31]+0x0000011Cu; // 800FDB74
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FD960; } // 800FDB78
L_800FDB7C:;
  c->r[11]=c->r[1]+0x00000030u; // 800FDB7C
  c->lr=0x800FDB84u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FDB80
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDB84
  c->lr=c->r[0]; // 800FDB88
  c->r[1]=c->r[1]+0x00000030u; // 800FDB8C
  return; // 800FDB90
}

// btm_acl_removed
void f_800FDB94(Ctx* __restrict c) {
  trace_call(0x800FDB94u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDB94
  c->r[0]=c->lr; // 800FDB98
  c->r[4]=0u+0x803D0000u; // 800FDB9C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FDBA0
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FDBA4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FDBA8
  c->r[31]=0u+0x00000000u; // 800FDBAC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FDBB0
  c->r[30]=c->r[4]+0x00000034u; // 800FDBB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FDBB8
  c->r[29]=c->r[3]|c->r[3]; // 800FDBBC
L_800FDBC0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FDBC0
  cmps(c,0,(int32_t)c->r[0],0); // 800FDBC4
  if (crb(c,2)) { goto L_800FDBE8; } // 800FDBC8
  c->r[4]=c->r[29]|c->r[29]; // 800FDBCC
  c->r[3]=c->r[30]+0x00000008u; // 800FDBD0
  c->r[5]=0u+0x00000006u; // 800FDBD4
  c->lr=0x800FDBDCu; f_800B3824(c); // 800FDBD8
  cmps(c,0,(int32_t)c->r[3],0); // 800FDBDC
  if (!crb(c,2)) { goto L_800FDBE8; } // 800FDBE0
  goto L_800FDBFC; // 800FDBE4
L_800FDBE8:;
  c->r[31]=c->r[31]+0x00000001u; // 800FDBE8
  c->r[30]=c->r[30]+0x0000011Cu; // 800FDBEC
  cmpu(c,0,c->r[31],0x00000004u); // 800FDBF0
  if (crb(c,0)) { IRQCHK(c); goto L_800FDBC0; } // 800FDBF4
  c->r[30]=0u+0x00000000u; // 800FDBF8
L_800FDBFC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FDBFC
  if (crb(c,2)) { goto L_800FDC3C; } // 800FDC00
  c->r[0]=0u+0x00000000u; // 800FDC04
  c->r[3]=0u+0x803D0000u; // 800FDC08
  W8(c->r[30]+0x00000119u,c->r[0]); // 800FDC0C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDC10
  c->r[12]=R32(c->r[3]+0x000004C8u); // 800FDC14
  cmps(c,0,(int32_t)c->r[12],0); // 800FDC18
  if (crb(c,2)) { goto L_800FDC3C; } // 800FDC1C
  c->r[3]=c->r[29]|c->r[29]; // 800FDC20
  c->r[4]=0u+0x00000000u; // 800FDC24
  c->r[5]=0u+0x00000000u; // 800FDC28
  c->r[6]=0u+0x00000000u; // 800FDC2C
  c->r[7]=0u+0x00000000u; // 800FDC30
  c->ctr=c->r[12]; // 800FDC34
  if (true) { c->lr=0x800FDC3Cu; dispatch(c,c->ctr); } // 800FDC38
L_800FDC3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FDC3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FDC40
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FDC44
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FDC48
  c->lr=c->r[0]; // 800FDC4C
  c->r[1]=c->r[1]+0x00000020u; // 800FDC50
  return; // 800FDC54
}

// btm_acl_device_down
void f_800FDC58(Ctx* __restrict c) {
  trace_call(0x800FDC58u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDC58
  c->r[0]=c->lr; // 800FDC5C
  c->r[3]=0u+0x803D0000u; // 800FDC60
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FDC64
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDC68
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FDC6C
  c->r[31]=c->r[3]+0x00000034u; // 800FDC70
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FDC74
  c->r[30]=0u+0x00000000u; // 800FDC78
L_800FDC7C:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 800FDC7C
  cmps(c,0,(int32_t)c->r[0],0); // 800FDC80
  if (crb(c,2)) { goto L_800FDC94; } // 800FDC84
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FDC88
  c->r[4]=0u+0x00000003u; // 800FDC8C
  c->lr=0x800FDC94u; f_801120CC(c); // 800FDC90
L_800FDC94:;
  c->r[30]=c->r[30]+0x00000001u; // 800FDC94
  c->r[31]=c->r[31]+0x0000011Cu; // 800FDC98
  cmpu(c,0,c->r[30],0x00000004u); // 800FDC9C
  if (crb(c,0)) { IRQCHK(c); goto L_800FDC7C; } // 800FDCA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FDCA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FDCA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FDCAC
  c->lr=c->r[0]; // 800FDCB0
  c->r[1]=c->r[1]+0x00000010u; // 800FDCB4
  return; // 800FDCB8
}

// BTM_SwitchRole
void f_800FDCBC(Ctx* __restrict c) {
  trace_call(0x800FDCBCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDCBC
  c->r[0]=c->lr; // 800FDCC0
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FDCC4
  c->r[11]=c->r[1]+0x00000030u; // 800FDCC8
  c->lr=0x800FDCD0u; f_800ADA2C(c); // 800FDCCC
  c->r[6]=0u+0x803D0000u; // 800FDCD0
  c->r[28]=c->r[3]|c->r[3]; // 800FDCD4
  c->r[6]=c->r[6]+0xFFFFA218u; // 800FDCD8
  c->r[29]=c->r[4]|c->r[4]; // 800FDCDC
  c->r[0]=R8(c->r[6]+0x00000640u); // 800FDCE0
  c->r[30]=c->r[5]|c->r[5]; // 800FDCE4
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800FDCE8
  if (!crb(c,2)) { goto L_800FDCF8; } // 800FDCEC
  c->r[3]=0u+0x00000004u; // 800FDCF0
  goto L_800FDEC0; // 800FDCF4
L_800FDCF8:;
  c->r[31]=c->r[6]+0x00000034u; // 800FDCF8
  c->r[27]=0u+0x00000000u; // 800FDCFC
L_800FDD00:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 800FDD00
  cmps(c,0,(int32_t)c->r[0],0); // 800FDD04
  if (crb(c,2)) { goto L_800FDD28; } // 800FDD08
  c->r[4]=c->r[28]|c->r[28]; // 800FDD0C
  c->r[3]=c->r[31]+0x00000008u; // 800FDD10
  c->r[5]=0u+0x00000006u; // 800FDD14
  c->lr=0x800FDD1Cu; f_800B3824(c); // 800FDD18
  cmps(c,0,(int32_t)c->r[3],0); // 800FDD1C
  if (!crb(c,2)) { goto L_800FDD28; } // 800FDD20
  goto L_800FDD3C; // 800FDD24
L_800FDD28:;
  c->r[27]=c->r[27]+0x00000001u; // 800FDD28
  c->r[31]=c->r[31]+0x0000011Cu; // 800FDD2C
  cmpu(c,0,c->r[27],0x00000004u); // 800FDD30
  if (crb(c,0)) { IRQCHK(c); goto L_800FDD00; } // 800FDD34
  c->r[31]=0u+0x00000000u; // 800FDD38
L_800FDD3C:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FDD3C
  if (!crb(c,2)) { goto L_800FDD4C; } // 800FDD40
  c->r[3]=0u+0x00000007u; // 800FDD44
  goto L_800FDEC0; // 800FDD48
L_800FDD4C:;
  c->r[0]=R8(c->r[31]+0x0000011Au); // 800FDD4C
  cmpu(c,0,c->r[0],c->r[29]); // 800FDD50
  if (!crb(c,2)) { goto L_800FDD60; } // 800FDD54
  c->r[3]=0u+0x00000000u; // 800FDD58
  goto L_800FDEC0; // 800FDD5C
L_800FDD60:;
  c->r[3]=c->r[28]|c->r[28]; // 800FDD60
  c->lr=0x800FDD68u; f_80104BE4(c); // 800FDD64
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800FDD68
  cmpu(c,0,c->r[0],0x00000001u); // 800FDD6C
  if (!crb(c,2)) { goto L_800FDD7C; } // 800FDD70
  c->r[3]=0u+0x00000003u; // 800FDD74
  goto L_800FDEC0; // 800FDD78
L_800FDD7C:;
  c->r[0]=R8(c->r[31]+0x0000011Bu); // 800FDD7C
  cmps(c,0,(int32_t)c->r[0],0); // 800FDD80
  if (crb(c,2)) { goto L_800FDDB8; } // 800FDD84
  c->r[3]=0u+0x803D0000u; // 800FDD88
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDD8C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FDD90
  cmpu(c,0,c->r[0],0x00000005u); // 800FDD94
  if (crb(c,0)) { goto L_800FDDB0; } // 800FDD98
  c->r[3]=0u+0x000D0000u; // 800FDD9C
  c->r[4]=0u+0x80330000u; // 800FDDA0
  c->r[3]=c->r[3]+0x00000004u; // 800FDDA4
  c->r[4]=c->r[4]+0xFFFFAA40u; // 800FDDA8
  c->lr=0x800FDDB0u; f_800F7280(c); // 800FDDAC
L_800FDDB0:;
  c->r[3]=0u+0x00000002u; // 800FDDB0
  goto L_800FDEC0; // 800FDDB4
L_800FDDB8:;
  c->r[3]=0u+0x803D0000u; // 800FDDB8
  c->r[4]=0u+0x00000000u; // 800FDDBC
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FDDC0
  c->r[5]=0u+0x00000008u; // 800FDDC4
  c->r[3]=c->r[3]+0x00000624u; // 800FDDC8
  c->lr=0x800FDDD0u; f_80004714(c); // 800FDDCC
  c->r[3]=c->r[31]+0x00000008u; // 800FDDD0
  c->r[4]=c->r[1]+0x00000008u; // 800FDDD4
  c->lr=0x800FDDDCu; f_8010342C(c); // 800FDDD8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FDDDC
  if (crb(c,2)) { goto L_800FDDE8; } // 800FDDE0
  goto L_800FDEC0; // 800FDDE4
L_800FDDE8:;
  c->r[3]=R8(c->r[1]+0x00000008u); // 800FDDE8
  c->r[0]=c->r[3]+0x000000FEu; // 800FDDEC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 800FDDF0
  cmpu(c,0,c->r[0],0x00000001u); // 800FDDF4
  if (crb(c,1)) { goto L_800FDE34; } // 800FDDF8
  c->r[0]=0u+0x00000000u; // 800FDDFC
  c->r[4]=c->r[31]+0x00000008u; // 800FDE00
  W8(c->r[1]+0x00000014u,c->r[0]); // 800FDE04
  c->r[5]=c->r[1]+0x0000000Cu; // 800FDE08
  c->r[3]=0u+0x00000080u; // 800FDE0C
  c->lr=0x800FDE14u; f_8010325C(c); // 800FDE10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 800FDE14
  cmpu(c,0,c->r[0],0x00000001u); // 800FDE18
  if (crb(c,2)) { goto L_800FDE28; } // 800FDE1C
  c->r[3]=0u+0x00000006u; // 800FDE20
  goto L_800FDEC0; // 800FDE24
L_800FDE28:;
  c->r[0]=0u+0x00000001u; // 800FDE28
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 800FDE2C
  goto L_800FDE9C; // 800FDE30
L_800FDE34:;
  c->r[3]=c->r[28]|c->r[28]; // 800FDE34
  c->lr=0x800FDE3Cu; f_800FF9D0(c); // 800FDE38
  cmps(c,0,(int32_t)c->r[3],0); // 800FDE3C
  if (crb(c,2)) { goto L_800FDE78; } // 800FDE40
  c->r[0]=R8(c->r[3]+0x00000076u); // 800FDE44
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 800FDE48
  if (crb(c,2)) { goto L_800FDE78; } // 800FDE4C
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FDE50
  c->r[4]=0u+0x00000000u; // 800FDE54
  c->lr=0x800FDE5Cu; f_8010ABE4(c); // 800FDE58
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FDE5C
  if (!crb(c,2)) { goto L_800FDE6C; } // 800FDE60
  c->r[3]=0u+0x00000003u; // 800FDE64
  goto L_800FDEC0; // 800FDE68
L_800FDE6C:;
  c->r[0]=0u+0x00000002u; // 800FDE6C
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 800FDE70
  goto L_800FDE9C; // 800FDE74
L_800FDE78:;
  c->r[3]=c->r[28]|c->r[28]; // 800FDE78
  c->r[4]=c->r[29]|c->r[29]; // 800FDE7C
  c->lr=0x800FDE84u; f_8010B4DC(c); // 800FDE80
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FDE84
  if (!crb(c,2)) { goto L_800FDE94; } // 800FDE88
  c->r[3]=0u+0x00000003u; // 800FDE8C
  goto L_800FDEC0; // 800FDE90
L_800FDE94:;
  c->r[0]=0u+0x00000005u; // 800FDE94
  W8(c->r[31]+0x0000011Bu,c->r[0]); // 800FDE98
L_800FDE9C:;
  c->r[31]=0u+0x803D0000u; // 800FDE9C
  c->r[4]=c->r[28]|c->r[28]; // 800FDEA0
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FDEA4
  c->r[5]=0u+0x00000006u; // 800FDEA8
  c->r[3]=c->r[31]+0x00000626u; // 800FDEAC
  c->lr=0x800FDEB4u; f_800043C4(c); // 800FDEB0
  W8(c->r[31]+0x00000625u,c->r[29]); // 800FDEB4
  c->r[3]=0u+0x00000001u; // 800FDEB8
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 800FDEBC
L_800FDEC0:;
  c->r[11]=c->r[1]+0x00000030u; // 800FDEC0
  c->lr=0x800FDEC8u; f_800ADA78(c); // 800FDEC4
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FDEC8
  c->lr=c->r[0]; // 800FDECC
  c->r[1]=c->r[1]+0x00000030u; // 800FDED0
  return; // 800FDED4
}

// btm_acl_encrypt_change
void f_800FDED8(Ctx* __restrict c) {
  trace_call(0x800FDED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FDED8
  c->r[0]=c->lr; // 800FDEDC
  c->r[4]=0u+0x803D0000u; // 800FDEE0
  c->r[6]=0u+0x00000000u; // 800FDEE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FDEE8
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FDEEC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FDEF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FDEF4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FDEF8
  c->r[0]=R8(c->r[4]+0x0000014Du); // 800FDEFC
  cmps(c,0,(int32_t)c->r[0],0); // 800FDF00
  if (crb(c,2)) { goto L_800FDF14; } // 800FDF04
  c->r[0]=R16(c->r[4]+0x00000034u); // 800FDF08
  cmpu(c,0,c->r[0],c->r[3]); // 800FDF0C
  if (crb(c,2)) { goto L_800FDF6C; } // 800FDF10
L_800FDF14:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 800FDF14
  c->r[6]=0u+0x00000001u; // 800FDF18
  cmps(c,0,(int32_t)c->r[0],0); // 800FDF1C
  if (crb(c,2)) { goto L_800FDF30; } // 800FDF20
  c->r[0]=R16(c->r[4]+0x00000150u); // 800FDF24
  cmpu(c,0,c->r[0],c->r[3]); // 800FDF28
  if (crb(c,2)) { goto L_800FDF6C; } // 800FDF2C
L_800FDF30:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 800FDF30
  c->r[6]=0u+0x00000002u; // 800FDF34
  cmps(c,0,(int32_t)c->r[0],0); // 800FDF38
  if (crb(c,2)) { goto L_800FDF4C; } // 800FDF3C
  c->r[0]=R16(c->r[4]+0x0000026Cu); // 800FDF40
  cmpu(c,0,c->r[0],c->r[3]); // 800FDF44
  if (crb(c,2)) { goto L_800FDF6C; } // 800FDF48
L_800FDF4C:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 800FDF4C
  c->r[6]=0u+0x00000003u; // 800FDF50
  cmps(c,0,(int32_t)c->r[0],0); // 800FDF54
  if (crb(c,2)) { goto L_800FDF68; } // 800FDF58
  c->r[0]=R16(c->r[4]+0x00000388u); // 800FDF5C
  cmpu(c,0,c->r[0],c->r[3]); // 800FDF60
  if (crb(c,2)) { goto L_800FDF6C; } // 800FDF64
L_800FDF68:;
  c->r[6]=0u+0x00000004u; // 800FDF68
L_800FDF6C:;
  cmpu(c,0,c->r[6],0x00000004u); // 800FDF6C
  if (!crb(c,0)) { goto L_800FE02C; } // 800FDF70
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 800FDF74
  c->r[30]=0u+0x803D0000u; // 800FDF78
  c->r[30]=c->r[30]+0xFFFFA218u; // 800FDF7C
  c->r[29]=c->r[30]+c->r[0]; // 800FDF80
  goto L_800FDF8C; // 800FDF84
  goto L_800FE02C; // 800FDF88
L_800FDF8C:;
  c->r[0]=R8(c->r[29]+0x0000014Fu); // 800FDF8C
  cmpu(c,0,c->r[0],0x00000002u); // 800FDF90
  if (!crb(c,2)) { goto L_800FE000; } // 800FDF94
  cmps(c,0,(int32_t)c->r[5],0); // 800FDF98
  if (crb(c,2)) { goto L_800FDFAC; } // 800FDF9C
  c->r[0]=0u+0x00000000u; // 800FDFA0
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 800FDFA4
  goto L_800FDFB4; // 800FDFA8
L_800FDFAC:;
  c->r[0]=0u+0x00000003u; // 800FDFAC
  W8(c->r[29]+0x0000014Fu,c->r[0]); // 800FDFB0
L_800FDFB4:;
  c->r[0]=R8(c->r[29]+0x0000014Eu); // 800FDFB4
  c->r[3]=c->r[29]+0x0000003Cu; // 800FDFB8
  c->r[0]=cntlz(c->r[0]); // 800FDFBC
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 800FDFC0
  c->lr=0x800FDFC8u; f_8010B4DC(c); // 800FDFC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FDFC8
  if (!crb(c,2)) { goto L_800FE02C; } // 800FDFCC
  c->r[30]=0u+0x00000000u; // 800FDFD0
  c->r[31]=0u+0x803D0000u; // 800FDFD4
  W8(c->r[29]+0x0000014Fu,c->r[30]); // 800FDFD8
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FDFDC
  c->r[12]=R32(c->r[31]+0x0000062Cu); // 800FDFE0
  cmps(c,0,(int32_t)c->r[12],0); // 800FDFE4
  if (crb(c,2)) { goto L_800FE02C; } // 800FDFE8
  c->r[3]=c->r[31]+0x00000624u; // 800FDFEC
  c->ctr=c->r[12]; // 800FDFF0
  if (true) { c->lr=0x800FDFF8u; dispatch(c,c->ctr); } // 800FDFF4
  W32(c->r[31]+0x0000062Cu,c->r[30]); // 800FDFF8
  goto L_800FE02C; // 800FDFFC
L_800FE000:;
  cmpu(c,0,c->r[0],0x00000004u); // 800FE000
  if (!crb(c,2)) { goto L_800FE02C; } // 800FE004
  c->r[31]=0u+0x00000000u; // 800FE008
  W8(c->r[29]+0x0000014Fu,c->r[31]); // 800FE00C
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 800FE010
  cmps(c,0,(int32_t)c->r[12],0); // 800FE014
  if (crb(c,2)) { goto L_800FE02C; } // 800FE018
  c->r[3]=c->r[30]+0x00000624u; // 800FE01C
  c->ctr=c->r[12]; // 800FE020
  if (true) { c->lr=0x800FE028u; dispatch(c,c->ctr); } // 800FE024
  W32(c->r[30]+0x0000062Cu,c->r[31]); // 800FE028
L_800FE02C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE02C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE030
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE034
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE038
  c->lr=c->r[0]; // 800FE03C
  c->r[1]=c->r[1]+0x00000020u; // 800FE040
  return; // 800FE044
}

// BTM_SetLinkPolicy
void f_800FE048(Ctx* __restrict c) {
  trace_call(0x800FE048u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE048
  c->r[0]=c->lr; // 800FE04C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE050
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE054
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FE058
  c->r[30]=0u+0x80330000u; // 800FE05C
  c->r[30]=c->r[30]+0xFFFFA9E0u; // 800FE060
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FE064
  c->r[29]=c->r[4]|c->r[4]; // 800FE068
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FE06C
  c->r[28]=c->r[3]|c->r[3]; // 800FE070
  c->lr=0x800FE078u; f_80100D14(c); // 800FE074
  c->r[4]=R16(c->r[29]+0x00000000u); // 800FE078
  c->r[31]=c->r[3]|c->r[3]; // 800FE07C
  cmps(c,0,(int32_t)c->r[4],0); // 800FE080
  if (crb(c,2)) { goto L_800FE1A0; } // 800FE084
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 800FE088
  if (crb(c,2)) { goto L_800FE0C8; } // 800FE08C
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FE090
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 800FE094
  if (!crb(c,2)) { goto L_800FE0C8; } // 800FE098
  c->r[5]=rotl(c->r[4],0)&0x0000FFFEu; // 800FE09C
  c->r[3]=0u+0x803D0000u; // 800FE0A0
  W16(c->r[29]+0x00000000u,c->r[5]); // 800FE0A4
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE0A8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FE0AC
  cmpu(c,0,c->r[0],0x00000003u); // 800FE0B0
  if (crb(c,0)) { goto L_800FE0C8; } // 800FE0B4
  c->r[3]=0u+0x000D0000u; // 800FE0B8
  c->r[4]=c->r[30]+0x000000BCu; // 800FE0BC
  c->r[3]=c->r[3]+0x00000002u; // 800FE0C0
  c->lr=0x800FE0C8u; f_800F72A0(c); // 800FE0C4
L_800FE0C8:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 800FE0C8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 800FE0CC
  if (crb(c,2)) { goto L_800FE110; } // 800FE0D0
  c->r[0]=R8(c->r[31]+0x00000000u); // 800FE0D4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 800FE0D8
  if (!crb(c,2)) { goto L_800FE110; } // 800FE0DC
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFDu; // 800FE0E0
  c->r[3]=0u+0x803D0000u; // 800FE0E4
  W16(c->r[29]+0x00000000u,c->r[5]); // 800FE0E8
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE0EC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FE0F0
  cmpu(c,0,c->r[0],0x00000003u); // 800FE0F4
  if (crb(c,0)) { goto L_800FE110; } // 800FE0F8
  c->r[3]=0u+0x000D0000u; // 800FE0FC
  c->r[4]=c->r[30]+0x000000F8u; // 800FE100
  c->r[3]=c->r[3]+0x00000002u; // 800FE104
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800FE108
  c->lr=0x800FE110u; f_800F72A0(c); // 800FE10C
L_800FE110:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 800FE110
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 800FE114
  if (crb(c,2)) { goto L_800FE158; } // 800FE118
  c->r[0]=R8(c->r[31]+0x00000000u); // 800FE11C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FE120
  if (!crb(c,2)) { goto L_800FE158; } // 800FE124
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFFBu; // 800FE128
  c->r[3]=0u+0x803D0000u; // 800FE12C
  W16(c->r[29]+0x00000000u,c->r[5]); // 800FE130
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE134
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FE138
  cmpu(c,0,c->r[0],0x00000003u); // 800FE13C
  if (crb(c,0)) { goto L_800FE158; } // 800FE140
  c->r[3]=0u+0x000D0000u; // 800FE144
  c->r[4]=c->r[30]+0x00000130u; // 800FE148
  c->r[3]=c->r[3]+0x00000002u; // 800FE14C
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800FE150
  c->lr=0x800FE158u; f_800F72A0(c); // 800FE154
L_800FE158:;
  c->r[3]=R16(c->r[29]+0x00000000u); // 800FE158
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 800FE15C
  if (crb(c,2)) { goto L_800FE1A0; } // 800FE160
  c->r[0]=R8(c->r[31]+0x00000001u); // 800FE164
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 800FE168
  if (!crb(c,2)) { goto L_800FE1A0; } // 800FE16C
  c->r[5]=rotl(c->r[3],0)&0xFFFFFFF7u; // 800FE170
  c->r[3]=0u+0x803D0000u; // 800FE174
  W16(c->r[29]+0x00000000u,c->r[5]); // 800FE178
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE17C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FE180
  cmpu(c,0,c->r[0],0x00000003u); // 800FE184
  if (crb(c,0)) { goto L_800FE1A0; } // 800FE188
  c->r[3]=0u+0x000D0000u; // 800FE18C
  c->r[4]=c->r[30]+0x00000170u; // 800FE190
  c->r[3]=c->r[3]+0x00000002u; // 800FE194
  c->r[5]=rotl(c->r[5],0)&0x0000FFFFu; // 800FE198
  c->lr=0x800FE1A0u; f_800F72A0(c); // 800FE19C
L_800FE1A0:;
  c->r[3]=0u+0x803D0000u; // 800FE1A0
  c->r[30]=0u+0x00000000u; // 800FE1A4
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE1A8
  c->r[31]=c->r[3]+0x00000034u; // 800FE1AC
L_800FE1B0:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 800FE1B0
  cmps(c,0,(int32_t)c->r[0],0); // 800FE1B4
  if (crb(c,2)) { goto L_800FE1D8; } // 800FE1B8
  c->r[4]=c->r[28]|c->r[28]; // 800FE1BC
  c->r[3]=c->r[31]+0x00000008u; // 800FE1C0
  c->r[5]=0u+0x00000006u; // 800FE1C4
  c->lr=0x800FE1CCu; f_800B3824(c); // 800FE1C8
  cmps(c,0,(int32_t)c->r[3],0); // 800FE1CC
  if (!crb(c,2)) { goto L_800FE1D8; } // 800FE1D0
  goto L_800FE1EC; // 800FE1D4
L_800FE1D8:;
  c->r[30]=c->r[30]+0x00000001u; // 800FE1D8
  c->r[31]=c->r[31]+0x0000011Cu; // 800FE1DC
  cmpu(c,0,c->r[30],0x00000004u); // 800FE1E0
  if (crb(c,0)) { IRQCHK(c); goto L_800FE1B0; } // 800FE1E4
  c->r[31]=0u+0x00000000u; // 800FE1E8
L_800FE1EC:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FE1EC
  if (crb(c,2)) { goto L_800FE214; } // 800FE1F0
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FE1F4
  c->r[4]=R16(c->r[29]+0x00000000u); // 800FE1F8
  c->lr=0x800FE200u; f_8010B58C(c); // 800FE1FC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FE200
  c->r[3]=0u+0x00000003u; // 800FE204
  if (crb(c,2)) { goto L_800FE218; } // 800FE208
  c->r[3]=0u+0x00000001u; // 800FE20C
  goto L_800FE218; // 800FE210
L_800FE214:;
  c->r[3]=0u+0x00000007u; // 800FE214
L_800FE218:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE218
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE21C
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE220
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE224
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FE228
  c->lr=c->r[0]; // 800FE22C
  c->r[1]=c->r[1]+0x00000020u; // 800FE230
  return; // 800FE234
}

// BTM_SetDefaultLinkPolicy
void f_800FE238(Ctx* __restrict c) {
  trace_call(0x800FE238u);
  c->r[4]=0u+0x803D0000u; // 800FE238
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE23C
  W16(c->r[4]+0x000004C4u,c->r[3]); // 800FE240
  return; // 800FE244
}

// btm_read_link_policy_complete
void f_800FE248(Ctx* __restrict c) {
  trace_call(0x800FE248u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE248
  c->r[0]=c->lr; // 800FE24C
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FE250
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FE254
  c->r[31]=0u+0x803D0000u; // 800FE258
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FE25C
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FE260
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FE264
  c->r[29]=c->r[31]+0x00000034u; // 800FE268
  W32(c->r[1]+0x00000020u,c->r[28]); // 800FE26C
  c->r[28]=c->r[3]|c->r[3]; // 800FE270
  c->r[3]=c->r[31]+0x000005ACu; // 800FE274
  c->r[30]=R32(c->r[31]+0x000005C4u); // 800FE278
  c->lr=0x800FE280u; f_800F7900(c); // 800FE27C
  c->r[3]=0u+0x00000000u; // 800FE280
  cmps(c,0,(int32_t)c->r[30],0); // 800FE284
  W32(c->r[31]+0x000005C4u,c->r[3]); // 800FE288
  if (crb(c,2)) { goto L_800FE32C; } // 800FE28C
  c->r[0]=R8(c->r[28]+0x00000000u); // 800FE290
  cmps(c,0,(int32_t)c->r[0],0); // 800FE294
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FE298
  if (!crb(c,2)) { goto L_800FE314; } // 800FE29C
  W8(c->r[1]+0x00000008u,c->r[3]); // 800FE2A0
  c->r[0]=0u+0x00000004u; // 800FE2A4
  c->r[7]=0u+0x00000000u; // 800FE2A8
  c->r[4]=R8(c->r[28]+0x00000002u); // 800FE2AC
  c->r[3]=R8(c->r[28]+0x00000004u); // 800FE2B0
  c->r[5]=rotl(c->r[4],8)&0xFFFFFF00u; // 800FE2B4
  c->r[6]=R8(c->r[28]+0x00000001u); // 800FE2B8
  c->r[4]=R8(c->r[28]+0x00000003u); // 800FE2BC
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FE2C0
  c->r[5]=c->r[6]+c->r[5]; // 800FE2C4
  c->r[3]=c->r[4]+c->r[3]; // 800FE2C8
  W16(c->r[1]+0x00000010u,c->r[3]); // 800FE2CC
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 800FE2D0
  c->ctr=c->r[0]; // 800FE2D4
L_800FE2D8:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FE2D8
  cmps(c,0,(int32_t)c->r[0],0); // 800FE2DC
  if (crb(c,2)) { goto L_800FE304; } // 800FE2E0
  c->r[0]=R16(c->r[29]+0x00000000u); // 800FE2E4
  cmpu(c,0,c->r[3],c->r[0]); // 800FE2E8
  if (!crb(c,2)) { goto L_800FE304; } // 800FE2EC
  c->r[3]=c->r[1]+0x0000000Au; // 800FE2F0
  c->r[4]=c->r[29]+0x00000008u; // 800FE2F4
  c->r[5]=0u+0x00000006u; // 800FE2F8
  c->lr=0x800FE300u; f_800043C4(c); // 800FE2FC
  goto L_800FE31C; // 800FE300
L_800FE304:;
  c->r[7]=c->r[7]+0x00000001u; // 800FE304
  c->r[29]=c->r[29]+0x0000011Cu; // 800FE308
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE2D8; } // 800FE30C
  goto L_800FE31C; // 800FE310
L_800FE314:;
  c->r[0]=0u+0x0000000Au; // 800FE314
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FE318
L_800FE31C:;
  c->r[12]=c->r[30]|c->r[30]; // 800FE31C
  c->r[3]=c->r[1]+0x00000008u; // 800FE320
  c->ctr=c->r[12]; // 800FE324
  if (true) { c->lr=0x800FE32Cu; dispatch(c,c->ctr); } // 800FE328
L_800FE32C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FE32C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FE330
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FE334
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FE338
  c->r[28]=R32(c->r[1]+0x00000020u); // 800FE33C
  c->lr=c->r[0]; // 800FE340
  c->r[1]=c->r[1]+0x00000030u; // 800FE344
  return; // 800FE348
}

// btm_read_remote_version_complete
void f_800FE34C(Ctx* __restrict c) {
  trace_call(0x800FE34Cu);
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FE34C
  c->r[4]=0u+0x803D0000u; // 800FE350
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE354
  cmps(c,0,(int32_t)c->r[0],0); // 800FE358
  c->r[6]=c->r[4]+0x00000034u; // 800FE35C
  if (!crb(c,2)) return; // 800FE360
  c->r[4]=R8(c->r[3]+0x00000002u); // 800FE364
  c->r[0]=0u+0x00000004u; // 800FE368
  c->r[5]=R8(c->r[3]+0x00000001u); // 800FE36C
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800FE370
  c->r[4]=c->r[5]+c->r[4]; // 800FE374
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 800FE378
  c->ctr=c->r[0]; // 800FE37C
L_800FE380:;
  c->r[0]=R8(c->r[6]+0x00000119u); // 800FE380
  cmps(c,0,(int32_t)c->r[0],0); // 800FE384
  if (crb(c,2)) { goto L_800FE3CC; } // 800FE388
  c->r[0]=R16(c->r[6]+0x00000000u); // 800FE38C
  cmpu(c,0,c->r[0],c->r[4]); // 800FE390
  if (!crb(c,2)) { goto L_800FE3CC; } // 800FE394
  c->r[0]=R8(c->r[3]+0x00000003u); // 800FE398
  W8(c->r[6]+0x00000118u,c->r[0]); // 800FE39C
  c->r[0]=R8(c->r[3]+0x00000005u); // 800FE3A0
  c->r[4]=R8(c->r[3]+0x00000004u); // 800FE3A4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FE3A8
  c->r[0]=c->r[4]+c->r[0]; // 800FE3AC
  W16(c->r[6]+0x0000010Au,c->r[0]); // 800FE3B0
  c->r[0]=R8(c->r[3]+0x00000007u); // 800FE3B4
  c->r[3]=R8(c->r[3]+0x00000006u); // 800FE3B8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 800FE3BC
  c->r[0]=c->r[3]+c->r[0]; // 800FE3C0
  W16(c->r[6]+0x0000010Cu,c->r[0]); // 800FE3C4
  return; // 800FE3C8
L_800FE3CC:;
  c->r[6]=c->r[6]+0x0000011Cu; // 800FE3CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE380; } // 800FE3D0
  return; // 800FE3D4
}

// btm_read_remote_features_complete
void f_800FE3D8(Ctx* __restrict c) {
  trace_call(0x800FE3D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE3D8
  c->r[0]=c->lr; // 800FE3DC
  c->r[4]=0u+0x803D0000u; // 800FE3E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE3E4
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE3E8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE3EC
  c->r[31]=c->r[4]+0x00000034u; // 800FE3F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FE3F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FE3F8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FE3FC
  c->r[0]=R8(c->r[3]+0x00000000u); // 800FE400
  cmps(c,0,(int32_t)c->r[0],0); // 800FE404
  if (!crb(c,2)) { goto L_800FE5E4; } // 800FE408
  c->r[4]=R8(c->r[3]+0x00000002u); // 800FE40C
  c->r[0]=0u+0x00000004u; // 800FE410
  c->r[5]=R8(c->r[3]+0x00000001u); // 800FE414
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 800FE418
  c->r[4]=c->r[5]+c->r[4]; // 800FE41C
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 800FE420
  c->ctr=c->r[0]; // 800FE424
L_800FE428:;
  c->r[0]=R8(c->r[31]+0x00000119u); // 800FE428
  cmps(c,0,(int32_t)c->r[0],0); // 800FE42C
  if (crb(c,2)) { goto L_800FE5DC; } // 800FE430
  c->r[0]=R16(c->r[31]+0x00000000u); // 800FE434
  cmpu(c,0,c->r[0],c->r[4]); // 800FE438
  if (!crb(c,2)) { goto L_800FE5DC; } // 800FE43C
  c->r[0]=R8(c->r[3]+0x00000003u); // 800FE440
  W8(c->r[31]+0x00000110u,c->r[0]); // 800FE444
  c->r[0]=R8(c->r[3]+0x00000004u); // 800FE448
  W8(c->r[31]+0x00000111u,c->r[0]); // 800FE44C
  c->r[0]=R8(c->r[3]+0x00000005u); // 800FE450
  W8(c->r[31]+0x00000112u,c->r[0]); // 800FE454
  c->r[0]=R8(c->r[3]+0x00000006u); // 800FE458
  W8(c->r[31]+0x00000113u,c->r[0]); // 800FE45C
  c->r[0]=R8(c->r[3]+0x00000007u); // 800FE460
  W8(c->r[31]+0x00000114u,c->r[0]); // 800FE464
  c->r[0]=R8(c->r[3]+0x00000008u); // 800FE468
  W8(c->r[31]+0x00000115u,c->r[0]); // 800FE46C
  c->r[0]=R8(c->r[3]+0x00000009u); // 800FE470
  W8(c->r[31]+0x00000116u,c->r[0]); // 800FE474
  c->r[0]=R8(c->r[3]+0x0000000Au); // 800FE478
  c->r[3]=c->r[4]|c->r[4]; // 800FE47C
  W8(c->r[31]+0x00000117u,c->r[0]); // 800FE480
  c->lr=0x800FE488u; f_800FF918(c); // 800FE484
  cmps(c,0,(int32_t)c->r[3],0); // 800FE488
  if (crb(c,2)) { goto L_800FE4A0; } // 800FE48C
  c->r[4]=c->r[31]+0x00000110u; // 800FE490
  c->r[5]=0u+0x00000008u; // 800FE494
  c->r[3]=c->r[3]+0x00000077u; // 800FE498
  c->lr=0x800FE4A0u; f_800043C4(c); // 800FE49C
L_800FE4A0:;
  c->r[3]=0u+0x803D0000u; // 800FE4A0
  c->r[0]=0u+0xFFFFCCF9u; // 800FE4A4
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE4A8
  c->r[5]=R16(c->r[3]+0x00000654u); // 800FE4AC
  c->r[3]=R8(c->r[3]+0x00000636u); // 800FE4B0
  c->r[4]=c->r[5]&0x0000CC18u; cr0(c,c->r[4]); // 800FE4B4
  cmpu(c,0,c->r[3],0x00000003u); // 800FE4B8
  c->r[30]=c->r[4]&c->r[0]; // 800FE4BC
  if (crb(c,0)) { goto L_800FE4D0; } // 800FE4C0
  c->r[0]=c->r[5]&0x00003306u; cr0(c,c->r[0]); // 800FE4C4
  c->r[0]=c->r[4]|c->r[0]; // 800FE4C8
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 800FE4CC
L_800FE4D0:;
  c->r[3]=0u+0x803D0000u; // 800FE4D0
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE4D4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FE4D8
  cmpu(c,0,c->r[0],0x00000004u); // 800FE4DC
  if (crb(c,0)) { goto L_800FE4FC; } // 800FE4E0
  c->r[3]=0u+0x000D0000u; // 800FE4E4
  c->r[4]=0u+0x80330000u; // 800FE4E8
  c->r[3]=c->r[3]+0x00000003u; // 800FE4EC
  c->r[5]=rotl(c->r[30],0)&0x0000FFFFu; // 800FE4F0
  c->r[4]=c->r[4]+0xFFFFAA20u; // 800FE4F4
  c->lr=0x800FE4FCu; f_800F72A0(c); // 800FE4F8
L_800FE4FC:;
  c->r[3]=R16(c->r[31]+0x00000000u); // 800FE4FC
  c->r[4]=rotl(c->r[30],0)&0x0000FFFFu; // 800FE500
  c->lr=0x800FE508u; f_8010AAD8(c); // 800FE504
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FE508
  if (crb(c,2)) { goto L_800FE514; } // 800FE50C
  W16(c->r[31]+0x00000002u,c->r[30]); // 800FE510
L_800FE514:;
  c->r[4]=0u+0x803D0000u; // 800FE514
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE518
  c->r[0]=R16(c->r[4]+0x000004C4u); // 800FE51C
  cmps(c,0,(int32_t)c->r[0],0); // 800FE520
  if (crb(c,2)) { goto L_800FE534; } // 800FE524
  c->r[3]=c->r[31]+0x00000008u; // 800FE528
  c->r[4]=c->r[4]+0x000004C4u; // 800FE52C
  c->lr=0x800FE534u; f_800FE048(c); // 800FE530
L_800FE534:;
  c->r[3]=0u+0x803D0000u; // 800FE534
  c->r[30]=0u+0x00000000u; // 800FE538
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE53C
  c->r[28]=R16(c->r[3]+0x000004C6u); // 800FE540
  c->r[29]=c->r[3]+0x00000034u; // 800FE544
L_800FE548:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FE548
  cmps(c,0,(int32_t)c->r[0],0); // 800FE54C
  if (crb(c,2)) { goto L_800FE570; } // 800FE550
  c->r[3]=c->r[29]+0x00000008u; // 800FE554
  c->r[4]=c->r[31]+0x00000008u; // 800FE558
  c->r[5]=0u+0x00000006u; // 800FE55C
  c->lr=0x800FE564u; f_800B3824(c); // 800FE560
  cmps(c,0,(int32_t)c->r[3],0); // 800FE564
  if (!crb(c,2)) { goto L_800FE570; } // 800FE568
  goto L_800FE584; // 800FE56C
L_800FE570:;
  c->r[30]=c->r[30]+0x00000001u; // 800FE570
  c->r[29]=c->r[29]+0x0000011Cu; // 800FE574
  cmpu(c,0,c->r[30],0x00000004u); // 800FE578
  if (crb(c,0)) { IRQCHK(c); goto L_800FE548; } // 800FE57C
  c->r[29]=0u+0x00000000u; // 800FE580
L_800FE584:;
  cmps(c,0,(int32_t)c->r[29],0); // 800FE584
  if (crb(c,2)) { goto L_800FE5A8; } // 800FE588
  W16(c->r[29]+0x0000010Eu,c->r[28]); // 800FE58C
  c->r[0]=R8(c->r[29]+0x0000011Au); // 800FE590
  cmps(c,0,(int32_t)c->r[0],0); // 800FE594
  if (!crb(c,2)) { goto L_800FE5A8; } // 800FE598
  c->r[3]=R16(c->r[29]+0x00000000u); // 800FE59C
  c->r[4]=c->r[28]|c->r[28]; // 800FE5A0
  c->lr=0x800FE5A8u; f_8010BFD8(c); // 800FE5A4
L_800FE5A8:;
  c->r[3]=0u+0x803D0000u; // 800FE5A8
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE5AC
  c->r[12]=R32(c->r[3]+0x000004C8u); // 800FE5B0
  cmps(c,0,(int32_t)c->r[12],0); // 800FE5B4
  if (crb(c,2)) { goto L_800FE5E4; } // 800FE5B8
  c->r[3]=c->r[31]+0x00000008u; // 800FE5BC
  c->r[4]=c->r[31]+0x0000000Eu; // 800FE5C0
  c->r[5]=c->r[31]+0x00000011u; // 800FE5C4
  c->r[6]=c->r[31]+0x00000110u; // 800FE5C8
  c->r[7]=0u+0x00000001u; // 800FE5CC
  c->ctr=c->r[12]; // 800FE5D0
  if (true) { c->lr=0x800FE5D8u; dispatch(c,c->ctr); } // 800FE5D4
  goto L_800FE5E4; // 800FE5D8
L_800FE5DC:;
  c->r[31]=c->r[31]+0x0000011Cu; // 800FE5DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FE428; } // 800FE5E0
L_800FE5E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE5E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE5E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE5EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE5F0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FE5F4
  c->lr=c->r[0]; // 800FE5F8
  c->r[1]=c->r[1]+0x00000020u; // 800FE5FC
  return; // 800FE600
}

// BTM_SetDefaultLinkSuperTout
void f_800FE604(Ctx* __restrict c) {
  trace_call(0x800FE604u);
  c->r[4]=0u+0x803D0000u; // 800FE604
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE608
  W16(c->r[4]+0x000004C6u,c->r[3]); // 800FE60C
  return; // 800FE610
}

// BTM_IsAclConnectionUp
void f_800FE614(Ctx* __restrict c) {
  trace_call(0x800FE614u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE614
  c->r[0]=c->lr; // 800FE618
  c->r[4]=0u+0x803D0000u; // 800FE61C
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE620
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE624
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE628
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FE62C
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FE630
  c->r[29]=c->r[3]|c->r[3]; // 800FE634
  c->r[0]=R8(c->r[4]+0x000027C0u); // 800FE638
  cmpu(c,0,c->r[0],0x00000003u); // 800FE63C
  if (crb(c,0)) { goto L_800FE670; } // 800FE640
  c->r[3]=0u+0x000D0000u; // 800FE644
  c->r[4]=0u+0x80330000u; // 800FE648
  c->r[5]=R8(c->r[29]+0x00000000u); // 800FE64C
  c->r[3]=c->r[3]+0x00000002u; // 800FE650
  c->r[6]=R8(c->r[29]+0x00000001u); // 800FE654
  c->r[4]=c->r[4]+0xFFFFABC0u; // 800FE658
  c->r[7]=R8(c->r[29]+0x00000002u); // 800FE65C
  c->r[8]=R8(c->r[29]+0x00000003u); // 800FE660
  c->r[9]=R8(c->r[29]+0x00000004u); // 800FE664
  c->r[10]=R8(c->r[29]+0x00000005u); // 800FE668
  c->lr=0x800FE670u; f_800F7340(c); // 800FE66C
L_800FE670:;
  c->r[3]=0u+0x803D0000u; // 800FE670
  c->r[31]=0u+0x00000000u; // 800FE674
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE678
  c->r[30]=c->r[3]+0x00000034u; // 800FE67C
L_800FE680:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FE680
  cmps(c,0,(int32_t)c->r[0],0); // 800FE684
  if (crb(c,2)) { goto L_800FE6A8; } // 800FE688
  c->r[4]=c->r[29]|c->r[29]; // 800FE68C
  c->r[3]=c->r[30]+0x00000008u; // 800FE690
  c->r[5]=0u+0x00000006u; // 800FE694
  c->lr=0x800FE69Cu; f_800B3824(c); // 800FE698
  cmps(c,0,(int32_t)c->r[3],0); // 800FE69C
  if (!crb(c,2)) { goto L_800FE6A8; } // 800FE6A0
  goto L_800FE6BC; // 800FE6A4
L_800FE6A8:;
  c->r[31]=c->r[31]+0x00000001u; // 800FE6A8
  c->r[30]=c->r[30]+0x0000011Cu; // 800FE6AC
  cmpu(c,0,c->r[31],0x00000004u); // 800FE6B0
  if (crb(c,0)) { IRQCHK(c); goto L_800FE680; } // 800FE6B4
  c->r[30]=0u+0x00000000u; // 800FE6B8
L_800FE6BC:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FE6BC
  if (crb(c,2)) { goto L_800FE6CC; } // 800FE6C0
  c->r[3]=0u+0x00000001u; // 800FE6C4
  goto L_800FE6D0; // 800FE6C8
L_800FE6CC:;
  c->r[3]=0u+0x00000000u; // 800FE6CC
L_800FE6D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE6D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE6D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE6D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE6DC
  c->lr=c->r[0]; // 800FE6E0
  c->r[1]=c->r[1]+0x00000020u; // 800FE6E4
  return; // 800FE6E8
}

// BTM_GetNumAclLinks
void f_800FE6EC(Ctx* __restrict c) {
  trace_call(0x800FE6ECu);
  c->r[4]=0u+0x803D0000u; // 800FE6EC
  c->r[3]=0u+0x00000000u; // 800FE6F0
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE6F4
  c->r[0]=R8(c->r[4]+0x0000014Du); // 800FE6F8
  cmps(c,0,(int32_t)c->r[0],0); // 800FE6FC
  if (crb(c,2)) { goto L_800FE708; } // 800FE700
  c->r[3]=0u+0x00000001u; // 800FE704
L_800FE708:;
  c->r[0]=R8(c->r[4]+0x00000269u); // 800FE708
  cmps(c,0,(int32_t)c->r[0],0); // 800FE70C
  if (crb(c,2)) { goto L_800FE71C; } // 800FE710
  c->r[0]=c->r[3]+0x00000001u; // 800FE714
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800FE718
L_800FE71C:;
  c->r[0]=R8(c->r[4]+0x00000385u); // 800FE71C
  cmps(c,0,(int32_t)c->r[0],0); // 800FE720
  if (crb(c,2)) { goto L_800FE730; } // 800FE724
  c->r[0]=c->r[3]+0x00000001u; // 800FE728
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800FE72C
L_800FE730:;
  c->r[0]=R8(c->r[4]+0x000004A1u); // 800FE730
  cmps(c,0,(int32_t)c->r[0],0); // 800FE734
  if (crb(c,2)) return; // 800FE738
  c->r[0]=c->r[3]+0x00000001u; // 800FE73C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 800FE740
  return; // 800FE744
}

// btm_get_acl_disc_reason_code
void f_800FE748(Ctx* __restrict c) {
  trace_call(0x800FE748u);
  c->r[3]=0u+0x803D0000u; // 800FE748
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE74C
  c->r[3]=R8(c->r[3]+0x000027BFu); // 800FE750
  return; // 800FE754
}

// BTM_GetHCIConnHandle
void f_800FE758(Ctx* __restrict c) {
  trace_call(0x800FE758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE758
  c->r[0]=c->lr; // 800FE75C
  c->r[4]=0u+0x803D0000u; // 800FE760
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FE764
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FE768
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FE76C
  c->r[31]=0u+0x00000000u; // 800FE770
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FE774
  c->r[30]=c->r[4]+0x00000034u; // 800FE778
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FE77C
  c->r[29]=c->r[3]|c->r[3]; // 800FE780
L_800FE784:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FE784
  cmps(c,0,(int32_t)c->r[0],0); // 800FE788
  if (crb(c,2)) { goto L_800FE7AC; } // 800FE78C
  c->r[4]=c->r[29]|c->r[29]; // 800FE790
  c->r[3]=c->r[30]+0x00000008u; // 800FE794
  c->r[5]=0u+0x00000006u; // 800FE798
  c->lr=0x800FE7A0u; f_800B3824(c); // 800FE79C
  cmps(c,0,(int32_t)c->r[3],0); // 800FE7A0
  if (!crb(c,2)) { goto L_800FE7AC; } // 800FE7A4
  goto L_800FE7C0; // 800FE7A8
L_800FE7AC:;
  c->r[31]=c->r[31]+0x00000001u; // 800FE7AC
  c->r[30]=c->r[30]+0x0000011Cu; // 800FE7B0
  cmpu(c,0,c->r[31],0x00000004u); // 800FE7B4
  if (crb(c,0)) { IRQCHK(c); goto L_800FE784; } // 800FE7B8
  c->r[30]=0u+0x00000000u; // 800FE7BC
L_800FE7C0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FE7C0
  if (crb(c,2)) { goto L_800FE7D0; } // 800FE7C4
  c->r[3]=R16(c->r[30]+0x00000000u); // 800FE7C8
  goto L_800FE7D8; // 800FE7CC
L_800FE7D0:;
  c->r[3]=0u+0x00010000u; // 800FE7D0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800FE7D4
L_800FE7D8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FE7D8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FE7DC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FE7E0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FE7E4
  c->lr=c->r[0]; // 800FE7E8
  c->r[1]=c->r[1]+0x00000020u; // 800FE7EC
  return; // 800FE7F0
}

// btm_process_clk_off_comp_evt
void f_800FE7F4(Ctx* __restrict c) {
  trace_call(0x800FE7F4u);
  c->r[5]=0u+0x803D0000u; // 800FE7F4
  c->r[6]=0u+0x00000000u; // 800FE7F8
  c->r[5]=c->r[5]+0xFFFFA218u; // 800FE7FC
  c->r[0]=R8(c->r[5]+0x0000014Du); // 800FE800
  cmps(c,0,(int32_t)c->r[0],0); // 800FE804
  if (crb(c,2)) { goto L_800FE818; } // 800FE808
  c->r[0]=R16(c->r[5]+0x00000034u); // 800FE80C
  cmpu(c,0,c->r[0],c->r[3]); // 800FE810
  if (crb(c,2)) { goto L_800FE870; } // 800FE814
L_800FE818:;
  c->r[0]=R8(c->r[5]+0x00000269u); // 800FE818
  c->r[6]=0u+0x00000001u; // 800FE81C
  cmps(c,0,(int32_t)c->r[0],0); // 800FE820
  if (crb(c,2)) { goto L_800FE834; } // 800FE824
  c->r[0]=R16(c->r[5]+0x00000150u); // 800FE828
  cmpu(c,0,c->r[0],c->r[3]); // 800FE82C
  if (crb(c,2)) { goto L_800FE870; } // 800FE830
L_800FE834:;
  c->r[0]=R8(c->r[5]+0x00000385u); // 800FE834
  c->r[6]=0u+0x00000002u; // 800FE838
  cmps(c,0,(int32_t)c->r[0],0); // 800FE83C
  if (crb(c,2)) { goto L_800FE850; } // 800FE840
  c->r[0]=R16(c->r[5]+0x0000026Cu); // 800FE844
  cmpu(c,0,c->r[0],c->r[3]); // 800FE848
  if (crb(c,2)) { goto L_800FE870; } // 800FE84C
L_800FE850:;
  c->r[0]=R8(c->r[5]+0x000004A1u); // 800FE850
  c->r[6]=0u+0x00000003u; // 800FE854
  cmps(c,0,(int32_t)c->r[0],0); // 800FE858
  if (crb(c,2)) { goto L_800FE86C; } // 800FE85C
  c->r[0]=R16(c->r[5]+0x00000388u); // 800FE860
  cmpu(c,0,c->r[0],c->r[3]); // 800FE864
  if (crb(c,2)) { goto L_800FE870; } // 800FE868
L_800FE86C:;
  c->r[6]=0u+0x00000004u; // 800FE86C
L_800FE870:;
  cmpu(c,0,c->r[6],0x00000004u); // 800FE870
  if (!crb(c,0)) return; // 800FE874
  c->r[0]=(uint32_t)((int32_t)c->r[6]*(int32_t)284); // 800FE878
  c->r[3]=0u+0x803D0000u; // 800FE87C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE880
  c->r[3]=c->r[3]+c->r[0]; // 800FE884
  W16(c->r[3]+0x0000003Au,c->r[4]); // 800FE888
  return; // 800FE88C
}

// btm_acl_role_changed
void f_800FE890(Ctx* __restrict c) {
  trace_call(0x800FE890u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FE890
  c->r[0]=c->lr; // 800FE894
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FE898
  c->r[11]=c->r[1]+0x00000030u; // 800FE89C
  c->lr=0x800FE8A4u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FE8A0
  cmps(c,0,(int32_t)c->r[4],0); // 800FE8A4
  c->r[25]=c->r[3]|c->r[3]; // 800FE8A8
  c->r[26]=c->r[4]|c->r[4]; // 800FE8AC
  c->r[28]=c->r[5]|c->r[5]; // 800FE8B0
  if (crb(c,2)) { goto L_800FE8C0; } // 800FE8B4
  c->r[27]=c->r[26]|c->r[26]; // 800FE8B8
  goto L_800FE8CC; // 800FE8BC
L_800FE8C0:;
  c->r[3]=0u+0x803D0000u; // 800FE8C0
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE8C4
  c->r[27]=c->r[3]+0x000027B4u; // 800FE8C8
L_800FE8CC:;
  c->r[3]=0u+0x803D0000u; // 800FE8CC
  c->r[30]=0u+0x00000000u; // 800FE8D0
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE8D4
  c->r[29]=c->r[3]+0x00000034u; // 800FE8D8
L_800FE8DC:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FE8DC
  cmps(c,0,(int32_t)c->r[0],0); // 800FE8E0
  if (crb(c,2)) { goto L_800FE904; } // 800FE8E4
  c->r[4]=c->r[27]|c->r[27]; // 800FE8E8
  c->r[3]=c->r[29]+0x00000008u; // 800FE8EC
  c->r[5]=0u+0x00000006u; // 800FE8F0
  c->lr=0x800FE8F8u; f_800B3824(c); // 800FE8F4
  cmps(c,0,(int32_t)c->r[3],0); // 800FE8F8
  if (!crb(c,2)) { goto L_800FE904; } // 800FE8FC
  goto L_800FE918; // 800FE900
L_800FE904:;
  c->r[30]=c->r[30]+0x00000001u; // 800FE904
  c->r[29]=c->r[29]+0x0000011Cu; // 800FE908
  cmpu(c,0,c->r[30],0x00000004u); // 800FE90C
  if (crb(c,0)) { IRQCHK(c); goto L_800FE8DC; } // 800FE910
  c->r[29]=0u+0x00000000u; // 800FE914
L_800FE918:;
  c->r[3]=0u+0x803D0000u; // 800FE918
  cmps(c,0,(int32_t)c->r[29],0); // 800FE91C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE920
  c->r[31]=c->r[3]+0x00000624u; // 800FE924
  if (crb(c,2)) { goto L_800FEA6C; } // 800FE928
  cmps(c,0,(int32_t)c->r[25],0); // 800FE92C
  W8(c->r[31]+0x00000000u,c->r[25]); // 800FE930
  if (!crb(c,2)) { goto L_800FE950; } // 800FE934
  W8(c->r[31]+0x00000001u,c->r[28]); // 800FE938
  c->r[4]=c->r[27]|c->r[27]; // 800FE93C
  c->r[3]=c->r[31]+0x00000002u; // 800FE940
  c->r[5]=0u+0x00000006u; // 800FE944
  c->lr=0x800FE94Cu; f_800043C4(c); // 800FE948
  W8(c->r[29]+0x0000011Au,c->r[28]); // 800FE94C
L_800FE950:;
  cmps(c,0,(int32_t)c->r[26],0); // 800FE950
  if (crb(c,2)) { goto L_800FE9CC; } // 800FE954
  c->r[3]=0u+0x803D0000u; // 800FE958
  c->r[30]=R16(c->r[29]+0x0000010Eu); // 800FE95C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FE960
  c->r[28]=0u+0x00000000u; // 800FE964
  c->r[27]=c->r[3]+0x00000034u; // 800FE968
L_800FE96C:;
  c->r[0]=R8(c->r[27]+0x00000119u); // 800FE96C
  cmps(c,0,(int32_t)c->r[0],0); // 800FE970
  if (crb(c,2)) { goto L_800FE994; } // 800FE974
  c->r[3]=c->r[27]+0x00000008u; // 800FE978
  c->r[4]=c->r[29]+0x00000008u; // 800FE97C
  c->r[5]=0u+0x00000006u; // 800FE980
  c->lr=0x800FE988u; f_800B3824(c); // 800FE984
  cmps(c,0,(int32_t)c->r[3],0); // 800FE988
  if (!crb(c,2)) { goto L_800FE994; } // 800FE98C
  goto L_800FE9A8; // 800FE990
L_800FE994:;
  c->r[28]=c->r[28]+0x00000001u; // 800FE994
  c->r[27]=c->r[27]+0x0000011Cu; // 800FE998
  cmpu(c,0,c->r[28],0x00000004u); // 800FE99C
  if (crb(c,0)) { IRQCHK(c); goto L_800FE96C; } // 800FE9A0
  c->r[27]=0u+0x00000000u; // 800FE9A4
L_800FE9A8:;
  cmps(c,0,(int32_t)c->r[27],0); // 800FE9A8
  if (crb(c,2)) { goto L_800FE9CC; } // 800FE9AC
  W16(c->r[27]+0x0000010Eu,c->r[30]); // 800FE9B0
  c->r[0]=R8(c->r[27]+0x0000011Au); // 800FE9B4
  cmps(c,0,(int32_t)c->r[0],0); // 800FE9B8
  if (!crb(c,2)) { goto L_800FE9CC; } // 800FE9BC
  c->r[3]=R16(c->r[27]+0x00000000u); // 800FE9C0
  c->r[4]=c->r[30]|c->r[30]; // 800FE9C4
  c->lr=0x800FE9CCu; f_8010BFD8(c); // 800FE9C8
L_800FE9CC:;
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 800FE9CC
  cmpu(c,0,c->r[0],0x00000003u); // 800FE9D0
  if (!crb(c,2)) { goto L_800FE9F8; } // 800FE9D4
  c->r[3]=R16(c->r[29]+0x00000000u); // 800FE9D8
  c->r[4]=0u+0x00000001u; // 800FE9DC
  c->lr=0x800FE9E4u; f_8010ABE4(c); // 800FE9E0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FE9E4
  if (crb(c,2)) { goto L_800FE9F8; } // 800FE9E8
  c->r[0]=0u+0x00000004u; // 800FE9EC
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 800FE9F0
  goto L_800FEA6C; // 800FE9F4
L_800FE9F8:;
  cmps(c,0,(int32_t)c->r[29],0); // 800FE9F8
  if (crb(c,2)) { goto L_800FEA14; } // 800FE9FC
  c->r[0]=R8(c->r[29]+0x0000011Bu); // 800FEA00
  cmpu(c,0,c->r[0],0x00000005u); // 800FEA04
  if (!crb(c,2)) { goto L_800FEA14; } // 800FEA08
  c->r[0]=0u+0x00000000u; // 800FEA0C
  W8(c->r[29]+0x0000011Bu,c->r[0]); // 800FEA10
L_800FEA14:;
  c->r[30]=0u+0x803D0000u; // 800FEA14
  c->r[30]=c->r[30]+0xFFFFA218u; // 800FEA18
  c->r[12]=R32(c->r[30]+0x0000062Cu); // 800FEA1C
  cmps(c,0,(int32_t)c->r[12],0); // 800FEA20
  if (crb(c,2)) { goto L_800FEA3C; } // 800FEA24
  c->r[3]=c->r[31]|c->r[31]; // 800FEA28
  c->ctr=c->r[12]; // 800FEA2C
  if (true) { c->lr=0x800FEA34u; dispatch(c,c->ctr); } // 800FEA30
  c->r[0]=0u+0x00000000u; // 800FEA34
  W32(c->r[30]+0x0000062Cu,c->r[0]); // 800FEA38
L_800FEA3C:;
  c->r[3]=0u+0x803D0000u; // 800FEA3C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FEA40
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FEA44
  cmpu(c,0,c->r[0],0x00000004u); // 800FEA48
  if (crb(c,0)) { goto L_800FEA6C; } // 800FEA4C
  c->r[3]=0u+0x000D0000u; // 800FEA50
  c->r[4]=0u+0x80330000u; // 800FEA54
  c->r[5]=R8(c->r[31]+0x00000001u); // 800FEA58
  c->r[3]=c->r[3]+0x00000003u; // 800FEA5C
  c->r[6]=R8(c->r[31]+0x00000000u); // 800FEA60
  c->r[4]=c->r[4]+0xFFFFABFCu; // 800FEA64
  c->lr=0x800FEA6Cu; f_800F72C0(c); // 800FEA68
L_800FEA6C:;
  c->r[11]=c->r[1]+0x00000030u; // 800FEA6C
  c->lr=0x800FEA74u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FEA70
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FEA74
  c->lr=c->r[0]; // 800FEA78
  c->r[1]=c->r[1]+0x00000030u; // 800FEA7C
  return; // 800FEA80
}

// btm_acl_timeout
void f_800FEA84(Ctx* __restrict c) {
  trace_call(0x800FEA84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEA84
  c->r[0]=c->lr; // 800FEA88
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEA8C
  c->r[0]=R32(c->r[3]+0x00000010u); // 800FEA90
  cmpu(c,0,c->r[0],0x00000004u); // 800FEA94
  if (!crb(c,2)) { goto L_800FEAD0; } // 800FEA98
  c->r[4]=0u+0x803D0000u; // 800FEA9C
  c->r[3]=0u+0x0000000Au; // 800FEAA0
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FEAA4
  c->r[0]=0u+0x00000000u; // 800FEAA8
  c->r[12]=R32(c->r[4]+0x000005C4u); // 800FEAAC
  W8(c->r[1]+0x00000008u,c->r[3]); // 800FEAB0
  cmps(c,0,(int32_t)c->r[12],0); // 800FEAB4
  W16(c->r[1]+0x00000010u,c->r[0]); // 800FEAB8
  W32(c->r[4]+0x000005C4u,c->r[0]); // 800FEABC
  if (crb(c,2)) { goto L_800FEAD0; } // 800FEAC0
  c->r[3]=c->r[1]+0x00000008u; // 800FEAC4
  c->ctr=c->r[12]; // 800FEAC8
  if (true) { c->lr=0x800FEAD0u; dispatch(c,c->ctr); } // 800FEACC
L_800FEAD0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEAD0
  c->lr=c->r[0]; // 800FEAD4
  c->r[1]=c->r[1]+0x00000020u; // 800FEAD8
  return; // 800FEADC
}

// btm_get_max_packet_size
void f_800FEAE0(Ctx* __restrict c) {
  trace_call(0x800FEAE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEAE0
  c->r[0]=c->lr; // 800FEAE4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEAE8
  c->r[11]=c->r[1]+0x00000020u; // 800FEAEC
  c->lr=0x800FEAF4u; f_800ADA2C(c); // 800FEAF0
  c->r[4]=0u+0x803D0000u; // 800FEAF4
  c->r[27]=c->r[3]|c->r[3]; // 800FEAF8
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FEAFC
  c->r[30]=0u+0x00000000u; // 800FEB00
  c->r[29]=c->r[4]+0x00000034u; // 800FEB04
L_800FEB08:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FEB08
  cmps(c,0,(int32_t)c->r[0],0); // 800FEB0C
  if (crb(c,2)) { goto L_800FEB30; } // 800FEB10
  c->r[4]=c->r[27]|c->r[27]; // 800FEB14
  c->r[3]=c->r[29]+0x00000008u; // 800FEB18
  c->r[5]=0u+0x00000006u; // 800FEB1C
  c->lr=0x800FEB24u; f_800B3824(c); // 800FEB20
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB24
  if (!crb(c,2)) { goto L_800FEB30; } // 800FEB28
  goto L_800FEB44; // 800FEB2C
L_800FEB30:;
  c->r[30]=c->r[30]+0x00000001u; // 800FEB30
  c->r[29]=c->r[29]+0x0000011Cu; // 800FEB34
  cmpu(c,0,c->r[30],0x00000004u); // 800FEB38
  if (crb(c,0)) { IRQCHK(c); goto L_800FEB08; } // 800FEB3C
  c->r[29]=0u+0x00000000u; // 800FEB40
L_800FEB44:;
  cmps(c,0,(int32_t)c->r[29],0); // 800FEB44
  c->r[28]=0u+0x00000000u; // 800FEB48
  c->r[31]=0u+0x00000000u; // 800FEB4C
  if (crb(c,2)) { goto L_800FEB5C; } // 800FEB50
  c->r[28]=R16(c->r[29]+0x00000002u); // 800FEB54
  goto L_800FEB80; // 800FEB58
L_800FEB5C:;
  c->r[30]=0u+0x803D0000u; // 800FEB5C
  c->r[4]=c->r[27]|c->r[27]; // 800FEB60
  c->r[30]=c->r[30]+0xFFFFA218u; // 800FEB64
  c->r[5]=0u+0x00000006u; // 800FEB68
  c->r[3]=c->r[30]+0x00000630u; // 800FEB6C
  c->lr=0x800FEB74u; f_800B3824(c); // 800FEB70
  cmps(c,0,(int32_t)c->r[3],0); // 800FEB74
  if (!crb(c,2)) { goto L_800FEB80; } // 800FEB78
  c->r[28]=R16(c->r[30]+0x00000654u); // 800FEB7C
L_800FEB80:;
  cmps(c,0,(int32_t)c->r[28],0); // 800FEB80
  if (crb(c,2)) { goto L_800FEC44; } // 800FEB84
  c->r[0]=rotl(c->r[28],0)&0x00002000u; cr0(c,c->r[0]); // 800FEB88
  if (!crb(c,2)) { goto L_800FEB98; } // 800FEB8C
  c->r[31]=0u+0x000003FDu; // 800FEB90
  goto L_800FEC44; // 800FEB94
L_800FEB98:;
  c->r[0]=rotl(c->r[28],0)&0x00001000u; cr0(c,c->r[0]); // 800FEB98
  if (!crb(c,2)) { goto L_800FEBA8; } // 800FEB9C
  c->r[31]=0u+0x000002A7u; // 800FEBA0
  goto L_800FEC44; // 800FEBA4
L_800FEBA8:;
  c->r[0]=rotl(c->r[28],0)&0x00000200u; cr0(c,c->r[0]); // 800FEBA8
  if (!crb(c,2)) { goto L_800FEBB8; } // 800FEBAC
  c->r[31]=0u+0x00000228u; // 800FEBB0
  goto L_800FEC44; // 800FEBB4
L_800FEBB8:;
  c->r[0]=rotl(c->r[28],0)&0x00008000u; cr0(c,c->r[0]); // 800FEBB8
  if (crb(c,2)) { goto L_800FEBC8; } // 800FEBBC
  c->r[31]=0u+0x00000153u; // 800FEBC0
  goto L_800FEC44; // 800FEBC4
L_800FEBC8:;
  c->r[0]=rotl(c->r[28],0)&0x00000100u; cr0(c,c->r[0]); // 800FEBC8
  if (!crb(c,2)) { goto L_800FEBD8; } // 800FEBCC
  c->r[31]=0u+0x0000016Fu; // 800FEBD0
  goto L_800FEC44; // 800FEBD4
L_800FEBD8:;
  c->r[0]=rotl(c->r[28],0)&0x00004000u; cr0(c,c->r[0]); // 800FEBD8
  if (crb(c,2)) { goto L_800FEBE8; } // 800FEBDC
  c->r[31]=0u+0x000000E0u; // 800FEBE0
  goto L_800FEC44; // 800FEBE4
L_800FEBE8:;
  c->r[0]=rotl(c->r[28],0)&0x00000800u; cr0(c,c->r[0]); // 800FEBE8
  if (crb(c,2)) { goto L_800FEBF8; } // 800FEBEC
  c->r[31]=0u+0x000000B7u; // 800FEBF0
  goto L_800FEC44; // 800FEBF4
L_800FEBF8:;
  c->r[0]=rotl(c->r[28],0)&0x00000400u; cr0(c,c->r[0]); // 800FEBF8
  if (crb(c,2)) { goto L_800FEC08; } // 800FEBFC
  c->r[31]=0u+0x00000079u; // 800FEC00
  goto L_800FEC44; // 800FEC04
L_800FEC08:;
  c->r[0]=rotl(c->r[28],0)&0x00000004u; cr0(c,c->r[0]); // 800FEC08
  if (!crb(c,2)) { goto L_800FEC18; } // 800FEC0C
  c->r[31]=0u+0x00000053u; // 800FEC10
  goto L_800FEC44; // 800FEC14
L_800FEC18:;
  c->r[0]=rotl(c->r[28],0)&0x00000002u; cr0(c,c->r[0]); // 800FEC18
  if (!crb(c,2)) { goto L_800FEC28; } // 800FEC1C
  c->r[31]=0u+0x00000036u; // 800FEC20
  goto L_800FEC44; // 800FEC24
L_800FEC28:;
  c->r[0]=rotl(c->r[28],0)&0x00000010u; cr0(c,c->r[0]); // 800FEC28
  if (crb(c,2)) { goto L_800FEC38; } // 800FEC2C
  c->r[31]=0u+0x0000001Bu; // 800FEC30
  goto L_800FEC44; // 800FEC34
L_800FEC38:;
  c->r[0]=rotl(c->r[28],0)&0x00000008u; cr0(c,c->r[0]); // 800FEC38
  if (crb(c,2)) { goto L_800FEC44; } // 800FEC3C
  c->r[31]=0u+0x00000011u; // 800FEC40
L_800FEC44:;
  cmpu(c,0,c->r[31],0x000003FDu); // 800FEC44
  if (!crb(c,2)) { goto L_800FEC64; } // 800FEC48
  c->r[3]=0u+0x803D0000u; // 800FEC4C
  c->r[3]=c->r[3]+0xFFFF9CF0u; // 800FEC50
  c->r[0]=R16(c->r[3]+0x0000007Cu); // 800FEC54
  cmpu(c,0,c->r[0],0x000003F9u); // 800FEC58
  if (!crb(c,2)) { goto L_800FEC64; } // 800FEC5C
  c->r[31]=0u+0x000003F9u; // 800FEC60
L_800FEC64:;
  c->r[11]=c->r[1]+0x00000020u; // 800FEC64
  c->r[3]=c->r[31]|c->r[31]; // 800FEC68
  c->lr=0x800FEC70u; f_800ADA78(c); // 800FEC6C
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEC70
  c->lr=c->r[0]; // 800FEC74
  c->r[1]=c->r[1]+0x00000020u; // 800FEC78
  return; // 800FEC7C
}

// BTM_AclRegisterForChanges
void f_800FEC80(Ctx* __restrict c) {
  trace_call(0x800FEC80u);
  cmps(c,0,(int32_t)c->r[3],0); // 800FEC80
  if (!crb(c,2)) { goto L_800FEC9C; } // 800FEC84
  c->r[3]=0u+0x803D0000u; // 800FEC88
  c->r[0]=0u+0x00000000u; // 800FEC8C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FEC90
  W32(c->r[3]+0x000004C8u,c->r[0]); // 800FEC94
  goto L_800FECBC; // 800FEC98
L_800FEC9C:;
  c->r[4]=0u+0x803D0000u; // 800FEC9C
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FECA0
  c->r[0]=R32(c->r[4]+0x000004C8u); // 800FECA4
  cmps(c,0,(int32_t)c->r[0],0); // 800FECA8
  if (crb(c,2)) { goto L_800FECB8; } // 800FECAC
  c->r[3]=0u+0x00000002u; // 800FECB0
  return; // 800FECB4
L_800FECB8:;
  W32(c->r[4]+0x000004C8u,c->r[3]); // 800FECB8
L_800FECBC:;
  c->r[3]=0u+0x00000000u; // 800FECBC
  return; // 800FECC0
}

// btm_qos_setup_complete
void f_800FECC4(Ctx* __restrict c) {
  trace_call(0x800FECC4u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FECC4
  c->r[0]=c->lr; // 800FECC8
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FECCC
  c->r[11]=c->r[1]+0x00000040u; // 800FECD0
  c->lr=0x800FECD8u; f_800ADA2C(c); // 800FECD4
  c->r[31]=0u+0x803D0000u; // 800FECD8
  c->r[27]=c->r[3]|c->r[3]; // 800FECDC
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FECE0
  c->r[28]=c->r[4]|c->r[4]; // 800FECE4
  c->r[30]=R32(c->r[31]+0x00000618u); // 800FECE8
  c->r[29]=c->r[5]|c->r[5]; // 800FECEC
  c->r[3]=c->r[31]+0x00000600u; // 800FECF0
  c->lr=0x800FECF8u; f_800F7900(c); // 800FECF4
  c->r[0]=0u+0x00000000u; // 800FECF8
  cmps(c,0,(int32_t)c->r[30],0); // 800FECFC
  W32(c->r[31]+0x00000618u,c->r[0]); // 800FED00
  if (crb(c,2)) { goto L_800FED84; } // 800FED04
  cmps(c,0,(int32_t)c->r[29],0); // 800FED08
  W8(c->r[1]+0x00000022u,c->r[27]); // 800FED0C
  W16(c->r[1]+0x00000020u,c->r[28]); // 800FED10
  if (crb(c,2)) { goto L_800FED48; } // 800FED14
  c->r[0]=R8(c->r[29]+0x00000000u); // 800FED18
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FED1C
  c->r[0]=R8(c->r[29]+0x00000001u); // 800FED20
  W8(c->r[1]+0x00000009u,c->r[0]); // 800FED24
  c->r[0]=R32(c->r[29]+0x00000004u); // 800FED28
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 800FED2C
  c->r[0]=R32(c->r[29]+0x0000000Cu); // 800FED30
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FED34
  c->r[0]=R32(c->r[29]+0x00000010u); // 800FED38
  W32(c->r[1]+0x00000018u,c->r[0]); // 800FED3C
  c->r[0]=R32(c->r[29]+0x00000014u); // 800FED40
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 800FED44
L_800FED48:;
  c->r[3]=0u+0x803D0000u; // 800FED48
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FED4C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 800FED50
  cmpu(c,0,c->r[0],0x00000005u); // 800FED54
  if (crb(c,0)) { goto L_800FED74; } // 800FED58
  c->r[3]=0u+0x000D0000u; // 800FED5C
  c->r[4]=0u+0x80330000u; // 800FED60
  c->r[5]=R32(c->r[29]+0x00000014u); // 800FED64
  c->r[3]=c->r[3]+0x00000004u; // 800FED68
  c->r[4]=c->r[4]+0xFFFFAC64u; // 800FED6C
  c->lr=0x800FED74u; f_800F72A0(c); // 800FED70
L_800FED74:;
  c->r[12]=c->r[30]|c->r[30]; // 800FED74
  c->r[3]=c->r[1]+0x00000008u; // 800FED78
  c->ctr=c->r[12]; // 800FED7C
  if (true) { c->lr=0x800FED84u; dispatch(c,c->ctr); } // 800FED80
L_800FED84:;
  c->r[11]=c->r[1]+0x00000040u; // 800FED84
  c->lr=0x800FED8Cu; f_800ADA78(c); // 800FED88
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FED8C
  c->lr=c->r[0]; // 800FED90
  c->r[1]=c->r[1]+0x00000040u; // 800FED94
  return; // 800FED98
}

// BTM_ReadRSSI
void f_800FED9C(Ctx* __restrict c) {
  trace_call(0x800FED9Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FED9C
  c->r[0]=c->lr; // 800FEDA0
  c->r[5]=0u+0x803D0000u; // 800FEDA4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEDA8
  c->r[5]=c->r[5]+0xFFFFA218u; // 800FEDAC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FEDB0
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FEDB4
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FEDB8
  c->r[29]=c->r[4]|c->r[4]; // 800FEDBC
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FEDC0
  c->r[28]=c->r[3]|c->r[3]; // 800FEDC4
  c->r[0]=R8(c->r[5]+0x000027C0u); // 800FEDC8
  cmpu(c,0,c->r[0],0x00000003u); // 800FEDCC
  if (crb(c,0)) { goto L_800FEE00; } // 800FEDD0
  c->r[3]=0u+0x000D0000u; // 800FEDD4
  c->r[4]=0u+0x80330000u; // 800FEDD8
  c->r[5]=R8(c->r[28]+0x00000000u); // 800FEDDC
  c->r[3]=c->r[3]+0x00000002u; // 800FEDE0
  c->r[6]=R8(c->r[28]+0x00000001u); // 800FEDE4
  c->r[4]=c->r[4]+0xFFFFAC8Cu; // 800FEDE8
  c->r[7]=R8(c->r[28]+0x00000002u); // 800FEDEC
  c->r[8]=R8(c->r[28]+0x00000003u); // 800FEDF0
  c->r[9]=R8(c->r[28]+0x00000004u); // 800FEDF4
  c->r[10]=R8(c->r[28]+0x00000005u); // 800FEDF8
  c->lr=0x800FEE00u; f_800F7340(c); // 800FEDFC
L_800FEE00:;
  c->r[3]=0u+0x803D0000u; // 800FEE00
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FEE04
  c->r[0]=R32(c->r[3]+0x000005E0u); // 800FEE08
  cmps(c,0,(int32_t)c->r[0],0); // 800FEE0C
  if (crb(c,2)) { goto L_800FEE1C; } // 800FEE10
  c->r[3]=0u+0x00000002u; // 800FEE14
  goto L_800FEEB8; // 800FEE18
L_800FEE1C:;
  c->r[30]=c->r[3]+0x00000034u; // 800FEE1C
  c->r[31]=0u+0x00000000u; // 800FEE20
L_800FEE24:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FEE24
  cmps(c,0,(int32_t)c->r[0],0); // 800FEE28
  if (crb(c,2)) { goto L_800FEE4C; } // 800FEE2C
  c->r[4]=c->r[28]|c->r[28]; // 800FEE30
  c->r[3]=c->r[30]+0x00000008u; // 800FEE34
  c->r[5]=0u+0x00000006u; // 800FEE38
  c->lr=0x800FEE40u; f_800B3824(c); // 800FEE3C
  cmps(c,0,(int32_t)c->r[3],0); // 800FEE40
  if (!crb(c,2)) { goto L_800FEE4C; } // 800FEE44
  goto L_800FEE60; // 800FEE48
L_800FEE4C:;
  c->r[31]=c->r[31]+0x00000001u; // 800FEE4C
  c->r[30]=c->r[30]+0x0000011Cu; // 800FEE50
  cmpu(c,0,c->r[31],0x00000004u); // 800FEE54
  if (crb(c,0)) { IRQCHK(c); goto L_800FEE24; } // 800FEE58
  c->r[30]=0u+0x00000000u; // 800FEE5C
L_800FEE60:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FEE60
  if (crb(c,2)) { goto L_800FEEB4; } // 800FEE64
  c->r[31]=0u+0x803D0000u; // 800FEE68
  c->r[4]=0u+0x00000009u; // 800FEE6C
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FEE70
  c->r[5]=0u+0x00000003u; // 800FEE74
  c->r[3]=c->r[31]+0x000005C8u; // 800FEE78
  c->lr=0x800FEE80u; f_800F7890(c); // 800FEE7C
  W32(c->r[31]+0x000005E0u,c->r[29]); // 800FEE80
  c->r[3]=R16(c->r[30]+0x00000000u); // 800FEE84
  c->lr=0x800FEE8Cu; f_8010C29C(c); // 800FEE88
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FEE8C
  if (!crb(c,2)) { goto L_800FEEAC; } // 800FEE90
  c->r[0]=0u+0x00000000u; // 800FEE94
  c->r[3]=c->r[31]+0x000005C8u; // 800FEE98
  W32(c->r[31]+0x000005E0u,c->r[0]); // 800FEE9C
  c->lr=0x800FEEA4u; f_800F7900(c); // 800FEEA0
  c->r[3]=0u+0x00000003u; // 800FEEA4
  goto L_800FEEB8; // 800FEEA8
L_800FEEAC:;
  c->r[3]=0u+0x00000001u; // 800FEEAC
  goto L_800FEEB8; // 800FEEB0
L_800FEEB4:;
  c->r[3]=0u+0x00000007u; // 800FEEB4
L_800FEEB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEEB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FEEBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FEEC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FEEC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FEEC8
  c->lr=c->r[0]; // 800FEECC
  c->r[1]=c->r[1]+0x00000020u; // 800FEED0
  return; // 800FEED4
}

// BTM_ReadLinkQuality
void f_800FEED8(Ctx* __restrict c) {
  trace_call(0x800FEED8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FEED8
  c->r[0]=c->lr; // 800FEEDC
  c->r[5]=0u+0x803D0000u; // 800FEEE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FEEE4
  c->r[5]=c->r[5]+0xFFFFA218u; // 800FEEE8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FEEEC
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FEEF0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FEEF4
  c->r[29]=c->r[4]|c->r[4]; // 800FEEF8
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FEEFC
  c->r[28]=c->r[3]|c->r[3]; // 800FEF00
  c->r[0]=R8(c->r[5]+0x000027C0u); // 800FEF04
  cmpu(c,0,c->r[0],0x00000003u); // 800FEF08
  if (crb(c,0)) { goto L_800FEF3C; } // 800FEF0C
  c->r[3]=0u+0x000D0000u; // 800FEF10
  c->r[4]=0u+0x80330000u; // 800FEF14
  c->r[5]=R8(c->r[28]+0x00000000u); // 800FEF18
  c->r[3]=c->r[3]+0x00000002u; // 800FEF1C
  c->r[6]=R8(c->r[28]+0x00000001u); // 800FEF20
  c->r[4]=c->r[4]+0xFFFFACC0u; // 800FEF24
  c->r[7]=R8(c->r[28]+0x00000002u); // 800FEF28
  c->r[8]=R8(c->r[28]+0x00000003u); // 800FEF2C
  c->r[9]=R8(c->r[28]+0x00000004u); // 800FEF30
  c->r[10]=R8(c->r[28]+0x00000005u); // 800FEF34
  c->lr=0x800FEF3Cu; f_800F7340(c); // 800FEF38
L_800FEF3C:;
  c->r[3]=0u+0x803D0000u; // 800FEF3C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FEF40
  c->r[0]=R32(c->r[3]+0x000005FCu); // 800FEF44
  cmps(c,0,(int32_t)c->r[0],0); // 800FEF48
  if (crb(c,2)) { goto L_800FEF58; } // 800FEF4C
  c->r[3]=0u+0x00000002u; // 800FEF50
  goto L_800FEFF4; // 800FEF54
L_800FEF58:;
  c->r[30]=c->r[3]+0x00000034u; // 800FEF58
  c->r[31]=0u+0x00000000u; // 800FEF5C
L_800FEF60:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FEF60
  cmps(c,0,(int32_t)c->r[0],0); // 800FEF64
  if (crb(c,2)) { goto L_800FEF88; } // 800FEF68
  c->r[4]=c->r[28]|c->r[28]; // 800FEF6C
  c->r[3]=c->r[30]+0x00000008u; // 800FEF70
  c->r[5]=0u+0x00000006u; // 800FEF74
  c->lr=0x800FEF7Cu; f_800B3824(c); // 800FEF78
  cmps(c,0,(int32_t)c->r[3],0); // 800FEF7C
  if (!crb(c,2)) { goto L_800FEF88; } // 800FEF80
  goto L_800FEF9C; // 800FEF84
L_800FEF88:;
  c->r[31]=c->r[31]+0x00000001u; // 800FEF88
  c->r[30]=c->r[30]+0x0000011Cu; // 800FEF8C
  cmpu(c,0,c->r[31],0x00000004u); // 800FEF90
  if (crb(c,0)) { IRQCHK(c); goto L_800FEF60; } // 800FEF94
  c->r[30]=0u+0x00000000u; // 800FEF98
L_800FEF9C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FEF9C
  if (crb(c,2)) { goto L_800FEFF0; } // 800FEFA0
  c->r[31]=0u+0x803D0000u; // 800FEFA4
  c->r[4]=0u+0x00000009u; // 800FEFA8
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FEFAC
  c->r[5]=0u+0x00000003u; // 800FEFB0
  c->r[3]=c->r[31]+0x000005E4u; // 800FEFB4
  c->lr=0x800FEFBCu; f_800F7890(c); // 800FEFB8
  W32(c->r[31]+0x000005FCu,c->r[29]); // 800FEFBC
  c->r[3]=R16(c->r[30]+0x00000000u); // 800FEFC0
  c->lr=0x800FEFC8u; f_8010C220(c); // 800FEFC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FEFC8
  if (!crb(c,2)) { goto L_800FEFE8; } // 800FEFCC
  c->r[3]=c->r[31]+0x000005E4u; // 800FEFD0
  c->lr=0x800FEFD8u; f_800F7900(c); // 800FEFD4
  c->r[0]=0u+0x00000000u; // 800FEFD8
  c->r[3]=0u+0x00000003u; // 800FEFDC
  W32(c->r[31]+0x000005FCu,c->r[0]); // 800FEFE0
  goto L_800FEFF4; // 800FEFE4
L_800FEFE8:;
  c->r[3]=0u+0x00000001u; // 800FEFE8
  goto L_800FEFF4; // 800FEFEC
L_800FEFF0:;
  c->r[3]=0u+0x00000007u; // 800FEFF0
L_800FEFF4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FEFF4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FEFF8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FEFFC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FF000
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FF004
  c->lr=c->r[0]; // 800FF008
  c->r[1]=c->r[1]+0x00000020u; // 800FF00C
  return; // 800FF010
}

// btm_read_rssi_complete
void f_800FF014(Ctx* __restrict c) {
  trace_call(0x800FF014u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF014
  c->r[0]=c->lr; // 800FF018
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FF01C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FF020
  c->r[31]=0u+0x803D0000u; // 800FF024
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FF028
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FF02C
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FF030
  c->r[29]=c->r[31]+0x00000034u; // 800FF034
  W32(c->r[1]+0x00000020u,c->r[28]); // 800FF038
  c->r[28]=c->r[3]|c->r[3]; // 800FF03C
  c->r[3]=c->r[31]+0x000005C8u; // 800FF040
  c->r[30]=R32(c->r[31]+0x000005E0u); // 800FF044
  c->lr=0x800FF04Cu; f_800F7900(c); // 800FF048
  c->r[0]=0u+0x00000000u; // 800FF04C
  cmps(c,0,(int32_t)c->r[30],0); // 800FF050
  W32(c->r[31]+0x000005E0u,c->r[0]); // 800FF054
  if (crb(c,2)) { goto L_800FF110; } // 800FF058
  c->r[6]=R8(c->r[28]+0x00000000u); // 800FF05C
  cmps(c,0,(int32_t)c->r[6],0); // 800FF060
  W8(c->r[1]+0x00000009u,c->r[6]); // 800FF064
  if (!crb(c,2)) { goto L_800FF0F8; } // 800FF068
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FF06C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF070
  c->r[3]=R8(c->r[28]+0x00000002u); // 800FF074
  c->r[4]=R8(c->r[28]+0x00000001u); // 800FF078
  cmpu(c,0,c->r[0],0x00000004u); // 800FF07C
  c->r[5]=R8(c->r[28]+0x00000003u); // 800FF080
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF084
  c->r[0]=c->r[4]+c->r[0]; // 800FF088
  W8(c->r[1]+0x0000000Au,c->r[5]); // 800FF08C
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 800FF090
  if (crb(c,0)) { goto L_800FF0B0; } // 800FF094
  c->r[3]=0u+0x000D0000u; // 800FF098
  c->r[4]=0u+0x80330000u; // 800FF09C
  c->r[3]=c->r[3]+0x00000003u; // 800FF0A0
  c->r[5]=(uint32_t)(int32_t)(int8_t)c->r[5]; // 800FF0A4
  c->r[4]=c->r[4]+0xFFFFACFCu; // 800FF0A8
  c->lr=0x800FF0B0u; f_800F72C0(c); // 800FF0AC
L_800FF0B0:;
  c->r[0]=0u+0x00000004u; // 800FF0B0
  c->r[3]=0u+0x00000000u; // 800FF0B4
  c->ctr=c->r[0]; // 800FF0B8
L_800FF0BC:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FF0BC
  cmps(c,0,(int32_t)c->r[0],0); // 800FF0C0
  if (crb(c,2)) { goto L_800FF0E8; } // 800FF0C4
  c->r[0]=R16(c->r[29]+0x00000000u); // 800FF0C8
  cmpu(c,0,c->r[31],c->r[0]); // 800FF0CC
  if (!crb(c,2)) { goto L_800FF0E8; } // 800FF0D0
  c->r[3]=c->r[1]+0x0000000Bu; // 800FF0D4
  c->r[4]=c->r[29]+0x00000008u; // 800FF0D8
  c->r[5]=0u+0x00000006u; // 800FF0DC
  c->lr=0x800FF0E4u; f_800043C4(c); // 800FF0E0
  goto L_800FF100; // 800FF0E4
L_800FF0E8:;
  c->r[3]=c->r[3]+0x00000001u; // 800FF0E8
  c->r[29]=c->r[29]+0x0000011Cu; // 800FF0EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF0BC; } // 800FF0F0
  goto L_800FF100; // 800FF0F4
L_800FF0F8:;
  c->r[0]=0u+0x0000000Au; // 800FF0F8
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FF0FC
L_800FF100:;
  c->r[12]=c->r[30]|c->r[30]; // 800FF100
  c->r[3]=c->r[1]+0x00000008u; // 800FF104
  c->ctr=c->r[12]; // 800FF108
  if (true) { c->lr=0x800FF110u; dispatch(c,c->ctr); } // 800FF10C
L_800FF110:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FF110
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FF114
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FF118
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FF11C
  c->r[28]=R32(c->r[1]+0x00000020u); // 800FF120
  c->lr=c->r[0]; // 800FF124
  c->r[1]=c->r[1]+0x00000030u; // 800FF128
  return; // 800FF12C
}

// btm_read_link_quality_complete
void f_800FF130(Ctx* __restrict c) {
  trace_call(0x800FF130u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF130
  c->r[0]=c->lr; // 800FF134
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FF138
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 800FF13C
  c->r[31]=0u+0x803D0000u; // 800FF140
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FF144
  W32(c->r[1]+0x00000028u,c->r[30]); // 800FF148
  W32(c->r[1]+0x00000024u,c->r[29]); // 800FF14C
  c->r[29]=c->r[31]+0x00000034u; // 800FF150
  W32(c->r[1]+0x00000020u,c->r[28]); // 800FF154
  c->r[28]=c->r[3]|c->r[3]; // 800FF158
  c->r[3]=c->r[31]+0x000005C8u; // 800FF15C
  c->r[30]=R32(c->r[31]+0x000005FCu); // 800FF160
  c->lr=0x800FF168u; f_800F7900(c); // 800FF164
  c->r[0]=0u+0x00000000u; // 800FF168
  cmps(c,0,(int32_t)c->r[30],0); // 800FF16C
  W32(c->r[31]+0x000005FCu,c->r[0]); // 800FF170
  if (crb(c,2)) { goto L_800FF228; } // 800FF174
  c->r[6]=R8(c->r[28]+0x00000000u); // 800FF178
  cmps(c,0,(int32_t)c->r[6],0); // 800FF17C
  W8(c->r[1]+0x00000009u,c->r[6]); // 800FF180
  if (!crb(c,2)) { goto L_800FF210; } // 800FF184
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FF188
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF18C
  c->r[3]=R8(c->r[28]+0x00000002u); // 800FF190
  c->r[4]=R8(c->r[28]+0x00000001u); // 800FF194
  cmpu(c,0,c->r[0],0x00000004u); // 800FF198
  c->r[5]=R8(c->r[28]+0x00000003u); // 800FF19C
  c->r[0]=rotl(c->r[3],8)&0xFFFFFF00u; // 800FF1A0
  c->r[0]=c->r[4]+c->r[0]; // 800FF1A4
  W8(c->r[1]+0x0000000Au,c->r[5]); // 800FF1A8
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 800FF1AC
  if (crb(c,0)) { goto L_800FF1C8; } // 800FF1B0
  c->r[3]=0u+0x000D0000u; // 800FF1B4
  c->r[4]=0u+0x80330000u; // 800FF1B8
  c->r[3]=c->r[3]+0x00000003u; // 800FF1BC
  c->r[4]=c->r[4]+0xFFFFAD2Cu; // 800FF1C0
  c->lr=0x800FF1C8u; f_800F72C0(c); // 800FF1C4
L_800FF1C8:;
  c->r[0]=0u+0x00000004u; // 800FF1C8
  c->r[3]=0u+0x00000000u; // 800FF1CC
  c->ctr=c->r[0]; // 800FF1D0
L_800FF1D4:;
  c->r[0]=R8(c->r[29]+0x00000119u); // 800FF1D4
  cmps(c,0,(int32_t)c->r[0],0); // 800FF1D8
  if (crb(c,2)) { goto L_800FF200; } // 800FF1DC
  c->r[0]=R16(c->r[29]+0x00000000u); // 800FF1E0
  cmpu(c,0,c->r[31],c->r[0]); // 800FF1E4
  if (!crb(c,2)) { goto L_800FF200; } // 800FF1E8
  c->r[3]=c->r[1]+0x0000000Bu; // 800FF1EC
  c->r[4]=c->r[29]+0x00000008u; // 800FF1F0
  c->r[5]=0u+0x00000006u; // 800FF1F4
  c->lr=0x800FF1FCu; f_800043C4(c); // 800FF1F8
  goto L_800FF218; // 800FF1FC
L_800FF200:;
  c->r[3]=c->r[3]+0x00000001u; // 800FF200
  c->r[29]=c->r[29]+0x0000011Cu; // 800FF204
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF1D4; } // 800FF208
  goto L_800FF218; // 800FF20C
L_800FF210:;
  c->r[0]=0u+0x0000000Au; // 800FF210
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FF214
L_800FF218:;
  c->r[12]=c->r[30]|c->r[30]; // 800FF218
  c->r[3]=c->r[1]+0x00000008u; // 800FF21C
  c->ctr=c->r[12]; // 800FF220
  if (true) { c->lr=0x800FF228u; dispatch(c,c->ctr); } // 800FF224
L_800FF228:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FF228
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 800FF22C
  c->r[30]=R32(c->r[1]+0x00000028u); // 800FF230
  c->r[29]=R32(c->r[1]+0x00000024u); // 800FF234
  c->r[28]=R32(c->r[1]+0x00000020u); // 800FF238
  c->lr=c->r[0]; // 800FF23C
  c->r[1]=c->r[1]+0x00000030u; // 800FF240
  return; // 800FF244
}

// btm_remove_acl
void f_800FF248(Ctx* __restrict c) {
  trace_call(0x800FF248u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF248
  c->r[0]=c->lr; // 800FF24C
  c->r[4]=0u+0x803D0000u; // 800FF250
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF254
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF258
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF25C
  c->r[31]=0u+0x00000000u; // 800FF260
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FF264
  c->r[30]=c->r[4]+0x00000034u; // 800FF268
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FF26C
  c->r[29]=c->r[3]|c->r[3]; // 800FF270
L_800FF274:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 800FF274
  cmps(c,0,(int32_t)c->r[0],0); // 800FF278
  if (crb(c,2)) { goto L_800FF29C; } // 800FF27C
  c->r[4]=c->r[29]|c->r[29]; // 800FF280
  c->r[3]=c->r[30]+0x00000008u; // 800FF284
  c->r[5]=0u+0x00000006u; // 800FF288
  c->lr=0x800FF290u; f_800B3824(c); // 800FF28C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF290
  if (!crb(c,2)) { goto L_800FF29C; } // 800FF294
  goto L_800FF2B0; // 800FF298
L_800FF29C:;
  c->r[31]=c->r[31]+0x00000001u; // 800FF29C
  c->r[30]=c->r[30]+0x0000011Cu; // 800FF2A0
  cmpu(c,0,c->r[31],0x00000004u); // 800FF2A4
  if (crb(c,0)) { IRQCHK(c); goto L_800FF274; } // 800FF2A8
  c->r[30]=0u+0x00000000u; // 800FF2AC
L_800FF2B0:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FF2B0
  if (crb(c,2)) { goto L_800FF2C0; } // 800FF2B4
  c->r[3]=R16(c->r[30]+0x00000000u); // 800FF2B8
  goto L_800FF2C8; // 800FF2BC
L_800FF2C0:;
  c->r[3]=0u+0x00010000u; // 800FF2C0
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 800FF2C4
L_800FF2C8:;
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 800FF2C8
  c->r[4]=0u+0x00000013u; // 800FF2CC
  c->lr=0x800FF2D4u; f_8010A444(c); // 800FF2D0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FF2D4
  if (!crb(c,2)) { goto L_800FF2E4; } // 800FF2D8
  c->r[3]=0u+0x00000003u; // 800FF2DC
  goto L_800FF2E8; // 800FF2E0
L_800FF2E4:;
  c->r[3]=0u+0x00000000u; // 800FF2E4
L_800FF2E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF2E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF2EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FF2F0
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FF2F4
  c->lr=c->r[0]; // 800FF2F8
  c->r[1]=c->r[1]+0x00000020u; // 800FF2FC
  return; // 800FF300
}

// btm_chg_all_acl_pkt_types
void f_800FF304(Ctx* __restrict c) {
  trace_call(0x800FF304u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF304
  c->r[0]=c->lr; // 800FF308
  W32(c->r[1]+0x00000044u,c->r[0]); // 800FF30C
  c->r[11]=c->r[1]+0x00000040u; // 800FF310
  c->lr=0x800FF318u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF314
  c->r[4]=0u+0x803D0000u; // 800FF318
  cmps(c,0,(int32_t)c->r[3],0); // 800FF31C
  c->r[31]=c->r[4]+0xFFFFA218u; // 800FF320
  c->r[30]=0u+0x80330000u; // 800FF324
  c->r[30]=c->r[30]+0xFFFFA9E0u; // 800FF328
  c->r[28]=c->r[31]+0x00000034u; // 800FF32C
  if (crb(c,2)) { goto L_800FF3F8; } // 800FF330
  c->r[29]=0u+0x00000000u; // 800FF334
  c->r[26]=0u+0x000D0000u; // 800FF338
  c->r[24]=0u+0xFFFFCCF9u; // 800FF33C
L_800FF340:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 800FF340
  cmps(c,0,(int32_t)c->r[0],0); // 800FF344
  if (crb(c,2)) { goto L_800FF3E4; } // 800FF348
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF34C
  cmpu(c,0,c->r[0],0x00000005u); // 800FF350
  if (crb(c,0)) { goto L_800FF368; } // 800FF354
  c->r[5]=R16(c->r[28]+0x00000000u); // 800FF358
  c->r[3]=c->r[26]+0x00000004u; // 800FF35C
  c->r[4]=c->r[30]+0x0000038Cu; // 800FF360
  c->lr=0x800FF368u; f_800F72A0(c); // 800FF364
L_800FF368:;
  c->r[0]=R16(c->r[28]+0x00000002u); // 800FF368
  c->r[5]=0u+0x00000018u; // 800FF36C
  W16(c->r[28]+0x00000004u,c->r[0]); // 800FF370
  c->r[3]=R8(c->r[31]+0x00000636u); // 800FF374
  cmpu(c,0,c->r[3],0x00000003u); // 800FF378
  if (crb(c,0)) { goto L_800FF388; } // 800FF37C
  c->r[0]=c->r[5]|0x00003300u; // 800FF380
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 800FF384
L_800FF388:;
  c->r[4]=R16(c->r[31]+0x00000654u); // 800FF388
  cmpu(c,1,c->r[3],0x00000003u); // 800FF38C
  c->r[0]=c->r[5]&c->r[4]; // 800FF390
  c->r[3]=c->r[0]&0x0000CC18u; cr0(c,c->r[3]); // 800FF394
  c->r[25]=c->r[3]&c->r[24]; // 800FF398
  if (crb(c,4)) { goto L_800FF3B0; } // 800FF39C
  c->r[0]=c->r[5]|c->r[4]; // 800FF3A0
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 800FF3A4
  c->r[0]=c->r[3]|c->r[0]; // 800FF3A8
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 800FF3AC
L_800FF3B0:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF3B0
  cmpu(c,0,c->r[0],0x00000004u); // 800FF3B4
  if (crb(c,0)) { goto L_800FF3CC; } // 800FF3B8
  c->r[3]=c->r[26]+0x00000003u; // 800FF3BC
  c->r[4]=c->r[30]+0x00000040u; // 800FF3C0
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 800FF3C4
  c->lr=0x800FF3CCu; f_800F72A0(c); // 800FF3C8
L_800FF3CC:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 800FF3CC
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 800FF3D0
  c->lr=0x800FF3D8u; f_8010AAD8(c); // 800FF3D4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FF3D8
  if (crb(c,2)) { goto L_800FF3E4; } // 800FF3DC
  W16(c->r[28]+0x00000002u,c->r[25]); // 800FF3E0
L_800FF3E4:;
  c->r[29]=c->r[29]+0x00000001u; // 800FF3E4
  c->r[28]=c->r[28]+0x0000011Cu; // 800FF3E8
  cmpu(c,0,c->r[29],0x00000004u); // 800FF3EC
  if (crb(c,0)) { IRQCHK(c); goto L_800FF340; } // 800FF3F0
  goto L_800FF50C; // 800FF3F4
L_800FF3F8:;
  c->r[29]=0u+0x00000000u; // 800FF3F8
  c->r[24]=0u+0x000D0000u; // 800FF3FC
  c->r[25]=0u+0x00000000u; // 800FF400
  c->r[27]=0u+0xFFFFCCF9u; // 800FF404
L_800FF408:;
  c->r[0]=R8(c->r[28]+0x00000119u); // 800FF408
  cmps(c,0,(int32_t)c->r[0],0); // 800FF40C
  if (crb(c,2)) { goto L_800FF4FC; } // 800FF410
  c->r[0]=R16(c->r[28]+0x00000004u); // 800FF414
  cmps(c,0,(int32_t)c->r[0],0); // 800FF418
  if (crb(c,2)) { goto L_800FF4FC; } // 800FF41C
  c->r[3]=c->r[28]+0x00000008u; // 800FF420
  c->r[4]=c->r[1]+0x00000008u; // 800FF424
  c->lr=0x800FF42Cu; f_8010342C(c); // 800FF428
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FF42C
  if (!crb(c,2)) { goto L_800FF4FC; } // 800FF430
  c->r[0]=R8(c->r[1]+0x00000008u); // 800FF434
  cmpu(c,0,c->r[0],0x00000002u); // 800FF438
  if (!crb(c,2)) { goto L_800FF474; } // 800FF43C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF440
  cmpu(c,0,c->r[0],0x00000005u); // 800FF444
  if (crb(c,0)) { goto L_800FF45C; } // 800FF448
  c->r[5]=R16(c->r[28]+0x00000000u); // 800FF44C
  c->r[3]=c->r[24]+0x00000004u; // 800FF450
  c->r[4]=c->r[30]+0x000003BCu; // 800FF454
  c->lr=0x800FF45Cu; f_800F72A0(c); // 800FF458
L_800FF45C:;
  W8(c->r[1]+0x00000014u,c->r[25]); // 800FF45C
  c->r[4]=c->r[28]+0x00000008u; // 800FF460
  c->r[5]=c->r[1]+0x0000000Cu; // 800FF464
  c->r[3]=0u+0x00000080u; // 800FF468
  c->lr=0x800FF470u; f_8010325C(c); // 800FF46C
  goto L_800FF4FC; // 800FF470
L_800FF474:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF474
  cmpu(c,0,c->r[0],0x00000005u); // 800FF478
  if (crb(c,0)) { goto L_800FF494; } // 800FF47C
  c->r[5]=R16(c->r[28]+0x00000000u); // 800FF480
  c->r[3]=c->r[24]+0x00000004u; // 800FF484
  c->r[6]=R16(c->r[28]+0x00000002u); // 800FF488
  c->r[4]=c->r[30]+0x000003ECu; // 800FF48C
  c->lr=0x800FF494u; f_800F72C0(c); // 800FF490
L_800FF494:;
  c->r[4]=R16(c->r[28]+0x00000004u); // 800FF494
  c->r[5]=R16(c->r[31]+0x00000654u); // 800FF498
  c->r[0]=R8(c->r[31]+0x00000636u); // 800FF49C
  c->r[3]=c->r[4]&c->r[5]; // 800FF4A0
  c->r[3]=c->r[3]&0x0000CC18u; cr0(c,c->r[3]); // 800FF4A4
  cmpu(c,0,c->r[0],0x00000003u); // 800FF4A8
  c->r[26]=c->r[3]&c->r[27]; // 800FF4AC
  if (crb(c,0)) { goto L_800FF4C4; } // 800FF4B0
  c->r[0]=c->r[4]|c->r[5]; // 800FF4B4
  c->r[0]=c->r[0]&0x00003306u; cr0(c,c->r[0]); // 800FF4B8
  c->r[0]=c->r[3]|c->r[0]; // 800FF4BC
  c->r[26]=rotl(c->r[0],0)&0x0000FFFFu; // 800FF4C0
L_800FF4C4:;
  c->r[0]=R8(c->r[31]+0x000027C0u); // 800FF4C4
  cmpu(c,0,c->r[0],0x00000004u); // 800FF4C8
  if (crb(c,0)) { goto L_800FF4E0; } // 800FF4CC
  c->r[3]=c->r[24]+0x00000003u; // 800FF4D0
  c->r[4]=c->r[30]+0x00000040u; // 800FF4D4
  c->r[5]=rotl(c->r[26],0)&0x0000FFFFu; // 800FF4D8
  c->lr=0x800FF4E0u; f_800F72A0(c); // 800FF4DC
L_800FF4E0:;
  c->r[3]=R16(c->r[28]+0x00000000u); // 800FF4E0
  c->r[4]=rotl(c->r[26],0)&0x0000FFFFu; // 800FF4E4
  c->lr=0x800FF4ECu; f_8010AAD8(c); // 800FF4E8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FF4EC
  if (crb(c,2)) { goto L_800FF4F8; } // 800FF4F0
  W16(c->r[28]+0x00000002u,c->r[26]); // 800FF4F4
L_800FF4F8:;
  W16(c->r[28]+0x00000004u,c->r[25]); // 800FF4F8
L_800FF4FC:;
  c->r[29]=c->r[29]+0x00000001u; // 800FF4FC
  c->r[28]=c->r[28]+0x0000011Cu; // 800FF500
  cmpu(c,0,c->r[29],0x00000004u); // 800FF504
  if (crb(c,0)) { IRQCHK(c); goto L_800FF408; } // 800FF508
L_800FF50C:;
  c->r[11]=c->r[1]+0x00000040u; // 800FF50C
  c->lr=0x800FF514u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF510
  c->r[0]=R32(c->r[1]+0x00000044u); // 800FF514
  c->lr=c->r[0]; // 800FF518
  c->r[1]=c->r[1]+0x00000040u; // 800FF51C
  return; // 800FF520
}

// BTM_SecAddDevice
void f_800FF524(Ctx* __restrict c) {
  trace_call(0x800FF524u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF524
  c->r[0]=c->lr; // 800FF528
  W32(c->r[1]+0x00000034u,c->r[0]); // 800FF52C
  c->r[11]=c->r[1]+0x00000030u; // 800FF530
  c->lr=0x800FF538u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 800FF534
  c->r[9]=0u+0x803D0000u; // 800FF538
  c->r[24]=c->r[3]|c->r[3]; // 800FF53C
  c->r[9]=c->r[9]+0xFFFFA218u; // 800FF540
  c->r[25]=c->r[4]|c->r[4]; // 800FF544
  c->r[26]=c->r[5]|c->r[5]; // 800FF548
  c->r[27]=c->r[6]|c->r[6]; // 800FF54C
  c->r[28]=c->r[7]|c->r[7]; // 800FF550
  c->r[29]=c->r[8]|c->r[8]; // 800FF554
  c->r[30]=c->r[9]+0x00001F30u; // 800FF558
  c->r[31]=0u+0x00000000u; // 800FF55C
L_800FF560:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 800FF560
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF564
  if (crb(c,2)) { goto L_800FF588; } // 800FF568
  c->r[4]=c->r[24]|c->r[24]; // 800FF56C
  c->r[3]=c->r[30]+0x0000001Cu; // 800FF570
  c->r[5]=0u+0x00000006u; // 800FF574
  c->lr=0x800FF57Cu; f_800B3824(c); // 800FF578
  cmps(c,0,(int32_t)c->r[3],0); // 800FF57C
  if (!crb(c,2)) { goto L_800FF588; } // 800FF580
  goto L_800FF59C; // 800FF584
L_800FF588:;
  c->r[31]=c->r[31]+0x00000001u; // 800FF588
  c->r[30]=c->r[30]+0x00000088u; // 800FF58C
  cmps(c,0,(int32_t)c->r[31],16); // 800FF590
  if (crb(c,0)) { IRQCHK(c); goto L_800FF560; } // 800FF594
  c->r[30]=0u+0x00000000u; // 800FF598
L_800FF59C:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FF59C
  if (!crb(c,2)) { goto L_800FF5C0; } // 800FF5A0
  c->r[3]=c->r[24]|c->r[24]; // 800FF5A4
  c->lr=0x800FF5ACu; f_800FF7F8(c); // 800FF5A8
  cmps(c,0,(int32_t)c->r[3],0); // 800FF5AC
  c->r[30]=c->r[3]|c->r[3]; // 800FF5B0
  if (!crb(c,2)) { goto L_800FF5D8; } // 800FF5B4
  c->r[3]=0u+0x00000000u; // 800FF5B8
  goto L_800FF694; // 800FF5BC
L_800FF5C0:;
  c->r[4]=0u+0x803D0000u; // 800FF5C0
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF5C4
  c->r[3]=R32(c->r[4]+0x00001974u); // 800FF5C8
  W32(c->r[30]+0x0000000Cu,c->r[3]); // 800FF5CC
  c->r[0]=c->r[3]+0x00000001u; // 800FF5D0
  W32(c->r[4]+0x00001974u,c->r[0]); // 800FF5D4
L_800FF5D8:;
  cmps(c,0,(int32_t)c->r[25],0); // 800FF5D8
  if (crb(c,2)) { goto L_800FF5F0; } // 800FF5DC
  c->r[4]=c->r[25]|c->r[25]; // 800FF5E0
  c->r[3]=c->r[30]+0x00000022u; // 800FF5E4
  c->r[5]=0u+0x00000003u; // 800FF5E8
  c->lr=0x800FF5F0u; f_800043C4(c); // 800FF5EC
L_800FF5F0:;
  c->r[3]=c->r[30]+0x00000035u; // 800FF5F0
  c->r[4]=0u+0x00000000u; // 800FF5F4
  c->r[5]=0u+0x00000041u; // 800FF5F8
  c->lr=0x800FF600u; f_80004714(c); // 800FF5FC
  cmps(c,0,(int32_t)c->r[26],0); // 800FF600
  if (crb(c,2)) { goto L_800FF630; } // 800FF604
  c->r[0]=R8(c->r[26]+0x00000000u); // 800FF608
  cmps(c,0,(int32_t)c->r[0],0); // 800FF60C
  if (crb(c,2)) { goto L_800FF630; } // 800FF610
  c->r[0]=R8(c->r[30]+0x00000076u); // 800FF614
  c->r[4]=c->r[26]|c->r[26]; // 800FF618
  c->r[3]=c->r[30]+0x00000035u; // 800FF61C
  c->r[5]=0u+0x00000040u; // 800FF620
  c->r[0]=c->r[0]|0x00000008u; // 800FF624
  W8(c->r[30]+0x00000076u,c->r[0]); // 800FF628
  c->lr=0x800FF630u; f_800B788C(c); // 800FF62C
L_800FF630:;
  cmps(c,0,(int32_t)c->r[27],0); // 800FF630
  if (crb(c,2)) { goto L_800FF64C; } // 800FF634
  c->r[4]=c->r[27]|c->r[27]; // 800FF638
  c->r[3]=c->r[30]+0x00000077u; // 800FF63C
  c->r[5]=0u+0x00000008u; // 800FF640
  c->lr=0x800FF648u; f_800043C4(c); // 800FF644
  goto L_800FF65C; // 800FF648
L_800FF64C:;
  c->r[3]=c->r[30]+0x00000077u; // 800FF64C
  c->r[4]=0u+0x00000000u; // 800FF650
  c->r[5]=0u+0x00000008u; // 800FF654
  c->lr=0x800FF65Cu; f_80004714(c); // 800FF658
L_800FF65C:;
  c->r[0]=R32(c->r[28]+0x00000000u); // 800FF65C
  cmps(c,0,(int32_t)c->r[29],0); // 800FF660
  W32(c->r[30]+0x00000010u,c->r[0]); // 800FF664
  c->r[0]=R32(c->r[28]+0x00000004u); // 800FF668
  W32(c->r[30]+0x00000014u,c->r[0]); // 800FF66C
  if (crb(c,2)) { goto L_800FF690; } // 800FF670
  c->r[0]=R8(c->r[30]+0x00000076u); // 800FF674
  c->r[4]=c->r[29]|c->r[29]; // 800FF678
  c->r[3]=c->r[30]+0x00000025u; // 800FF67C
  c->r[5]=0u+0x00000010u; // 800FF680
  c->r[0]=c->r[0]|0x00000010u; // 800FF684
  W8(c->r[30]+0x00000076u,c->r[0]); // 800FF688
  c->lr=0x800FF690u; f_800043C4(c); // 800FF68C
L_800FF690:;
  c->r[3]=0u+0x00000001u; // 800FF690
L_800FF694:;
  c->r[11]=c->r[1]+0x00000030u; // 800FF694
  c->lr=0x800FF69Cu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 800FF698
  c->r[0]=R32(c->r[1]+0x00000034u); // 800FF69C
  c->lr=c->r[0]; // 800FF6A0
  c->r[1]=c->r[1]+0x00000030u; // 800FF6A4
  return; // 800FF6A8
}

// BTM_SecDeleteDevice
void f_800FF6AC(Ctx* __restrict c) {
  trace_call(0x800FF6ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF6AC
  c->r[0]=c->lr; // 800FF6B0
  c->r[4]=0u+0x803D0000u; // 800FF6B4
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF6B8
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF6BC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF6C0
  c->r[31]=0u+0x00000000u; // 800FF6C4
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FF6C8
  c->r[30]=c->r[4]+0x00001F30u; // 800FF6CC
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FF6D0
  c->r[29]=c->r[3]|c->r[3]; // 800FF6D4
L_800FF6D8:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 800FF6D8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF6DC
  if (crb(c,2)) { goto L_800FF700; } // 800FF6E0
  c->r[4]=c->r[29]|c->r[29]; // 800FF6E4
  c->r[3]=c->r[30]+0x0000001Cu; // 800FF6E8
  c->r[5]=0u+0x00000006u; // 800FF6EC
  c->lr=0x800FF6F4u; f_800B3824(c); // 800FF6F0
  cmps(c,0,(int32_t)c->r[3],0); // 800FF6F4
  if (!crb(c,2)) { goto L_800FF700; } // 800FF6F8
  goto L_800FF714; // 800FF6FC
L_800FF700:;
  c->r[31]=c->r[31]+0x00000001u; // 800FF700
  c->r[30]=c->r[30]+0x00000088u; // 800FF704
  cmps(c,0,(int32_t)c->r[31],16); // 800FF708
  if (crb(c,0)) { IRQCHK(c); goto L_800FF6D8; } // 800FF70C
  c->r[30]=0u+0x00000000u; // 800FF710
L_800FF714:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FF714
  if (!crb(c,2)) { goto L_800FF724; } // 800FF718
  c->r[3]=0u+0x00000000u; // 800FF71C
  goto L_800FF73C; // 800FF720
L_800FF724:;
  c->r[0]=0u+0x00000000u; // 800FF724
  c->r[3]=c->r[29]|c->r[29]; // 800FF728
  W8(c->r[30]+0x00000076u,c->r[0]); // 800FF72C
  c->r[4]=0u+0x00000000u; // 800FF730
  c->lr=0x800FF738u; f_801011BC(c); // 800FF734
  c->r[3]=0u+0x00000001u; // 800FF738
L_800FF73C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF73C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF740
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FF744
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FF748
  c->lr=c->r[0]; // 800FF74C
  c->r[1]=c->r[1]+0x00000020u; // 800FF750
  return; // 800FF754
}

// BTM_SecReadDevName
void f_800FF758(Ctx* __restrict c) {
  trace_call(0x800FF758u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF758
  c->r[0]=c->lr; // 800FF75C
  c->r[4]=0u+0x803D0000u; // 800FF760
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF764
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF768
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF76C
  c->r[31]=0u+0x00000000u; // 800FF770
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FF774
  c->r[30]=c->r[4]+0x00001F30u; // 800FF778
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FF77C
  c->r[29]=0u+0x00000000u; // 800FF780
  W32(c->r[1]+0x00000010u,c->r[28]); // 800FF784
  c->r[28]=c->r[3]|c->r[3]; // 800FF788
L_800FF78C:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 800FF78C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF790
  if (crb(c,2)) { goto L_800FF7B4; } // 800FF794
  c->r[4]=c->r[28]|c->r[28]; // 800FF798
  c->r[3]=c->r[30]+0x0000001Cu; // 800FF79C
  c->r[5]=0u+0x00000006u; // 800FF7A0
  c->lr=0x800FF7A8u; f_800B3824(c); // 800FF7A4
  cmps(c,0,(int32_t)c->r[3],0); // 800FF7A8
  if (!crb(c,2)) { goto L_800FF7B4; } // 800FF7AC
  goto L_800FF7C8; // 800FF7B0
L_800FF7B4:;
  c->r[31]=c->r[31]+0x00000001u; // 800FF7B4
  c->r[30]=c->r[30]+0x00000088u; // 800FF7B8
  cmps(c,0,(int32_t)c->r[31],16); // 800FF7BC
  if (crb(c,0)) { IRQCHK(c); goto L_800FF78C; } // 800FF7C0
  c->r[30]=0u+0x00000000u; // 800FF7C4
L_800FF7C8:;
  cmps(c,0,(int32_t)c->r[30],0); // 800FF7C8
  if (crb(c,2)) { goto L_800FF7D4; } // 800FF7CC
  c->r[29]=c->r[30]+0x00000035u; // 800FF7D0
L_800FF7D4:;
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FF7D4
  c->r[3]=c->r[29]|c->r[29]; // 800FF7D8
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FF7DC
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FF7E0
  c->r[28]=R32(c->r[1]+0x00000010u); // 800FF7E4
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FF7E8
  c->lr=c->r[0]; // 800FF7EC
  c->r[1]=c->r[1]+0x00000020u; // 800FF7F0
  return; // 800FF7F4
}

// btm_sec_alloc_dev
void f_800FF7F8(Ctx* __restrict c) {
  trace_call(0x800FF7F8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF7F8
  c->r[0]=c->lr; // 800FF7FC
  c->r[4]=0u+0x803D0000u; // 800FF800
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FF804
  c->r[0]=0u+0x00000010u; // 800FF808
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF80C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FF810
  c->r[31]=0u+0x00000000u; // 800FF814
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FF818
  c->r[30]=c->r[3]|c->r[3]; // 800FF81C
  c->r[3]=0u+0x00000000u; // 800FF820
  c->ctr=c->r[0]; // 800FF824
L_800FF828:;
  c->r[0]=R8(c->r[4]+0x00001FA6u); // 800FF828
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF82C
  if (!crb(c,2)) { goto L_800FF84C; } // 800FF830
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)136); // 800FF834
  c->r[3]=0u+0x803D0000u; // 800FF838
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FF83C
  c->r[3]=c->r[3]+c->r[0]; // 800FF840
  c->r[31]=c->r[3]+0x00001F30u; // 800FF844
  goto L_800FF858; // 800FF848
L_800FF84C:;
  c->r[4]=c->r[4]+0x00000088u; // 800FF84C
  c->r[3]=c->r[3]+0x00000001u; // 800FF850
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF828; } // 800FF854
L_800FF858:;
  cmps(c,0,(int32_t)c->r[31],0); // 800FF858
  if (!crb(c,2)) { goto L_800FF868; } // 800FF85C
  c->lr=0x800FF864u; f_800FFA58(c); // 800FF860
  c->r[31]=c->r[3]|c->r[3]; // 800FF864
L_800FF868:;
  c->r[3]=c->r[31]|c->r[31]; // 800FF868
  c->r[4]=0u+0x00000000u; // 800FF86C
  c->r[5]=0u+0x00000088u; // 800FF870
  c->lr=0x800FF878u; f_80004714(c); // 800FF874
  c->r[3]=0u+0x00000080u; // 800FF878
  c->r[0]=0u+0x00000000u; // 800FF87C
  W8(c->r[31]+0x00000076u,c->r[3]); // 800FF880
  c->r[3]=c->r[30]|c->r[30]; // 800FF884
  W8(c->r[31]+0x00000085u,c->r[0]); // 800FF888
  c->lr=0x800FF890u; f_801020DC(c); // 800FF88C
  cmps(c,0,(int32_t)c->r[3],0); // 800FF890
  c->r[4]=c->r[3]|c->r[3]; // 800FF894
  if (crb(c,2)) { goto L_800FF8B0; } // 800FF898
  c->r[3]=c->r[31]+0x00000022u; // 800FF89C
  c->r[4]=c->r[4]+0x00000008u; // 800FF8A0
  c->r[5]=0u+0x00000003u; // 800FF8A4
  c->lr=0x800FF8ACu; f_800043C4(c); // 800FF8A8
  goto L_800FF8C8; // 800FF8AC
L_800FF8B0:;
  c->r[4]=0u+0x803D0000u; // 800FF8B0
  c->r[3]=c->r[31]+0x00000022u; // 800FF8B4
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF8B8
  c->r[5]=0u+0x00000003u; // 800FF8BC
  c->r[4]=c->r[4]+0x000027BAu; // 800FF8C0
  c->lr=0x800FF8C8u; f_800043C4(c); // 800FF8C4
L_800FF8C8:;
  c->r[4]=c->r[30]|c->r[30]; // 800FF8C8
  c->r[3]=c->r[31]+0x0000001Cu; // 800FF8CC
  c->r[5]=0u+0x00000006u; // 800FF8D0
  c->lr=0x800FF8D8u; f_800043C4(c); // 800FF8D4
  c->r[3]=c->r[30]|c->r[30]; // 800FF8D8
  c->lr=0x800FF8E0u; f_800FE758(c); // 800FF8DC
  W16(c->r[31]+0x00000018u,c->r[3]); // 800FF8E0
  c->r[5]=0u+0x803D0000u; // 800FF8E4
  c->r[5]=c->r[5]+0xFFFFA218u; // 800FF8E8
  c->r[3]=c->r[31]|c->r[31]; // 800FF8EC
  c->r[4]=R32(c->r[5]+0x00001974u); // 800FF8F0
  W32(c->r[31]+0x0000000Cu,c->r[4]); // 800FF8F4
  c->r[0]=c->r[4]+0x00000001u; // 800FF8F8
  W32(c->r[5]+0x00001974u,c->r[0]); // 800FF8FC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FF900
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FF904
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FF908
  c->lr=c->r[0]; // 800FF90C
  c->r[1]=c->r[1]+0x00000010u; // 800FF910
  return; // 800FF914
}

// btm_find_dev_by_handle
void f_800FF918(Ctx* __restrict c) {
  trace_call(0x800FF918u);
  c->r[4]=0u+0x803D0000u; // 800FF918
  c->r[0]=0u+0x00000004u; // 800FF91C
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF920
  c->r[5]=0u+0x00000000u; // 800FF924
  c->r[4]=c->r[4]+0x00001F30u; // 800FF928
  c->ctr=c->r[0]; // 800FF92C
L_800FF930:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 800FF930
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF934
  if (crb(c,2)) { goto L_800FF950; } // 800FF938
  c->r[0]=R16(c->r[4]+0x00000018u); // 800FF93C
  cmpu(c,0,c->r[0],c->r[3]); // 800FF940
  if (!crb(c,2)) { goto L_800FF950; } // 800FF944
  c->r[3]=c->r[4]|c->r[4]; // 800FF948
  return; // 800FF94C
L_800FF950:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 800FF950
  c->r[4]=c->r[4]+0x00000088u; // 800FF954
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF958
  if (crb(c,2)) { goto L_800FF974; } // 800FF95C
  c->r[0]=R16(c->r[4]+0x00000018u); // 800FF960
  cmpu(c,0,c->r[0],c->r[3]); // 800FF964
  if (!crb(c,2)) { goto L_800FF974; } // 800FF968
  c->r[3]=c->r[4]|c->r[4]; // 800FF96C
  return; // 800FF970
L_800FF974:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 800FF974
  c->r[4]=c->r[4]+0x00000088u; // 800FF978
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF97C
  if (crb(c,2)) { goto L_800FF998; } // 800FF980
  c->r[0]=R16(c->r[4]+0x00000018u); // 800FF984
  cmpu(c,0,c->r[0],c->r[3]); // 800FF988
  if (!crb(c,2)) { goto L_800FF998; } // 800FF98C
  c->r[3]=c->r[4]|c->r[4]; // 800FF990
  return; // 800FF994
L_800FF998:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 800FF998
  c->r[4]=c->r[4]+0x00000088u; // 800FF99C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FF9A0
  if (crb(c,2)) { goto L_800FF9BC; } // 800FF9A4
  c->r[0]=R16(c->r[4]+0x00000018u); // 800FF9A8
  cmpu(c,0,c->r[0],c->r[3]); // 800FF9AC
  if (!crb(c,2)) { goto L_800FF9BC; } // 800FF9B0
  c->r[3]=c->r[4]|c->r[4]; // 800FF9B4
  return; // 800FF9B8
L_800FF9BC:;
  c->r[5]=c->r[5]+0x00000003u; // 800FF9BC
  c->r[4]=c->r[4]+0x00000088u; // 800FF9C0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FF930; } // 800FF9C4
  c->r[3]=0u+0x00000000u; // 800FF9C8
  return; // 800FF9CC
}

// btm_find_dev
void f_800FF9D0(Ctx* __restrict c) {
  trace_call(0x800FF9D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FF9D0
  c->r[0]=c->lr; // 800FF9D4
  c->r[4]=0u+0x803D0000u; // 800FF9D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 800FF9DC
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FF9E0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 800FF9E4
  c->r[31]=c->r[4]+0x00001F30u; // 800FF9E8
  W32(c->r[1]+0x00000018u,c->r[30]); // 800FF9EC
  c->r[30]=0u+0x00000000u; // 800FF9F0
  W32(c->r[1]+0x00000014u,c->r[29]); // 800FF9F4
  c->r[29]=c->r[3]|c->r[3]; // 800FF9F8
L_800FF9FC:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 800FF9FC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FFA00
  if (crb(c,2)) { goto L_800FFA28; } // 800FFA04
  c->r[4]=c->r[29]|c->r[29]; // 800FFA08
  c->r[3]=c->r[31]+0x0000001Cu; // 800FFA0C
  c->r[5]=0u+0x00000006u; // 800FFA10
  c->lr=0x800FFA18u; f_800B3824(c); // 800FFA14
  cmps(c,0,(int32_t)c->r[3],0); // 800FFA18
  if (!crb(c,2)) { goto L_800FFA28; } // 800FFA1C
  c->r[3]=c->r[31]|c->r[31]; // 800FFA20
  goto L_800FFA3C; // 800FFA24
L_800FFA28:;
  c->r[30]=c->r[30]+0x00000001u; // 800FFA28
  c->r[31]=c->r[31]+0x00000088u; // 800FFA2C
  cmps(c,0,(int32_t)c->r[30],16); // 800FFA30
  if (crb(c,0)) { IRQCHK(c); goto L_800FF9FC; } // 800FFA34
  c->r[3]=0u+0x00000000u; // 800FFA38
L_800FFA3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 800FFA3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 800FFA40
  c->r[30]=R32(c->r[1]+0x00000018u); // 800FFA44
  c->r[29]=R32(c->r[1]+0x00000014u); // 800FFA48
  c->lr=c->r[0]; // 800FFA4C
  c->r[1]=c->r[1]+0x00000020u; // 800FFA50
  return; // 800FFA54
}

// btm_find_oldest_dev
void f_800FFA58(Ctx* __restrict c) {
  trace_call(0x800FFA58u);
  c->r[3]=0u+0x803D0000u; // 800FFA58
  c->r[0]=0u+0x00000004u; // 800FFA5C
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFA60
  c->r[6]=0u+0xFFFFFFFFu; // 800FFA64
  c->r[5]=c->r[3]+0x00001F30u; // 800FFA68
  c->r[7]=0u+0x00000000u; // 800FFA6C
  c->r[3]=c->r[5]|c->r[5]; // 800FFA70
  c->ctr=c->r[0]; // 800FFA74
L_800FFA78:;
  c->r[4]=R8(c->r[5]+0x00000076u); // 800FFA78
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 800FFA7C
  if (crb(c,2)) { goto L_800FFAA0; } // 800FFA80
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800FFA84
  if (!crb(c,2)) { goto L_800FFAA0; } // 800FFA88
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800FFA8C
  cmpu(c,0,c->r[0],c->r[6]); // 800FFA90
  if (!crb(c,0)) { goto L_800FFAA0; } // 800FFA94
  c->r[3]=c->r[5]|c->r[5]; // 800FFA98
  c->r[6]=c->r[0]|c->r[0]; // 800FFA9C
L_800FFAA0:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 800FFAA0
  c->r[5]=c->r[5]+0x00000088u; // 800FFAA4
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 800FFAA8
  if (crb(c,2)) { goto L_800FFACC; } // 800FFAAC
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800FFAB0
  if (!crb(c,2)) { goto L_800FFACC; } // 800FFAB4
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800FFAB8
  cmpu(c,0,c->r[0],c->r[6]); // 800FFABC
  if (!crb(c,0)) { goto L_800FFACC; } // 800FFAC0
  c->r[3]=c->r[5]|c->r[5]; // 800FFAC4
  c->r[6]=c->r[0]|c->r[0]; // 800FFAC8
L_800FFACC:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 800FFACC
  c->r[5]=c->r[5]+0x00000088u; // 800FFAD0
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 800FFAD4
  if (crb(c,2)) { goto L_800FFAF8; } // 800FFAD8
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800FFADC
  if (!crb(c,2)) { goto L_800FFAF8; } // 800FFAE0
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800FFAE4
  cmpu(c,0,c->r[0],c->r[6]); // 800FFAE8
  if (!crb(c,0)) { goto L_800FFAF8; } // 800FFAEC
  c->r[3]=c->r[5]|c->r[5]; // 800FFAF0
  c->r[6]=c->r[0]|c->r[0]; // 800FFAF4
L_800FFAF8:;
  c->r[4]=R8(c->r[5]+0x000000FEu); // 800FFAF8
  c->r[5]=c->r[5]+0x00000088u; // 800FFAFC
  c->r[0]=rotl(c->r[4],0)&0x00000080u; cr0(c,c->r[0]); // 800FFB00
  if (crb(c,2)) { goto L_800FFB24; } // 800FFB04
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800FFB08
  if (!crb(c,2)) { goto L_800FFB24; } // 800FFB0C
  c->r[0]=R32(c->r[5]+0x0000000Cu); // 800FFB10
  cmpu(c,0,c->r[0],c->r[6]); // 800FFB14
  if (!crb(c,0)) { goto L_800FFB24; } // 800FFB18
  c->r[3]=c->r[5]|c->r[5]; // 800FFB1C
  c->r[6]=c->r[0]|c->r[0]; // 800FFB20
L_800FFB24:;
  c->r[7]=c->r[7]+0x00000003u; // 800FFB24
  c->r[5]=c->r[5]+0x00000088u; // 800FFB28
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FFA78; } // 800FFB2C
  c->r[0]=c->r[6]+0x00010000u; // 800FFB30
  cmpu(c,0,c->r[0],0x0000FFFFu); // 800FFB34
  if (!crb(c,2)) return; // 800FFB38
  c->r[4]=0u+0x803D0000u; // 800FFB3C
  c->r[0]=0u+0x00000004u; // 800FFB40
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FFB44
  c->r[5]=0u+0x00000000u; // 800FFB48
  c->r[4]=c->r[4]+0x00001F30u; // 800FFB4C
  c->ctr=c->r[0]; // 800FFB50
L_800FFB54:;
  c->r[0]=R8(c->r[4]+0x00000076u); // 800FFB54
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FFB58
  if (crb(c,2)) { goto L_800FFB74; } // 800FFB5C
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800FFB60
  cmpu(c,0,c->r[0],c->r[6]); // 800FFB64
  if (!crb(c,0)) { goto L_800FFB74; } // 800FFB68
  c->r[3]=c->r[4]|c->r[4]; // 800FFB6C
  c->r[6]=c->r[0]|c->r[0]; // 800FFB70
L_800FFB74:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 800FFB74
  c->r[4]=c->r[4]+0x00000088u; // 800FFB78
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FFB7C
  if (crb(c,2)) { goto L_800FFB98; } // 800FFB80
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800FFB84
  cmpu(c,0,c->r[0],c->r[6]); // 800FFB88
  if (!crb(c,0)) { goto L_800FFB98; } // 800FFB8C
  c->r[3]=c->r[4]|c->r[4]; // 800FFB90
  c->r[6]=c->r[0]|c->r[0]; // 800FFB94
L_800FFB98:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 800FFB98
  c->r[4]=c->r[4]+0x00000088u; // 800FFB9C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FFBA0
  if (crb(c,2)) { goto L_800FFBBC; } // 800FFBA4
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800FFBA8
  cmpu(c,0,c->r[0],c->r[6]); // 800FFBAC
  if (!crb(c,0)) { goto L_800FFBBC; } // 800FFBB0
  c->r[3]=c->r[4]|c->r[4]; // 800FFBB4
  c->r[6]=c->r[0]|c->r[0]; // 800FFBB8
L_800FFBBC:;
  c->r[0]=R8(c->r[4]+0x000000FEu); // 800FFBBC
  c->r[4]=c->r[4]+0x00000088u; // 800FFBC0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 800FFBC4
  if (crb(c,2)) { goto L_800FFBE0; } // 800FFBC8
  c->r[0]=R32(c->r[4]+0x0000000Cu); // 800FFBCC
  cmpu(c,0,c->r[0],c->r[6]); // 800FFBD0
  if (!crb(c,0)) { goto L_800FFBE0; } // 800FFBD4
  c->r[3]=c->r[4]|c->r[4]; // 800FFBD8
  c->r[6]=c->r[0]|c->r[0]; // 800FFBDC
L_800FFBE0:;
  c->r[5]=c->r[5]+0x00000003u; // 800FFBE0
  c->r[4]=c->r[4]+0x00000088u; // 800FFBE4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_800FFB54; } // 800FFBE8
  return; // 800FFBEC
}

// btm_dev_init
void f_800FFBF0(Ctx* __restrict c) {
  trace_call(0x800FFBF0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFBF0
  c->r[0]=c->lr; // 800FFBF4
  c->r[4]=c->r[13]+0xFFFF87B8u; // 800FFBF8
  c->r[5]=0u+0x00000003u; // 800FFBFC
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFC00
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFC04
  c->r[31]=0u+0x803D0000u; // 800FFC08
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FFC0C
  c->r[3]=c->r[31]+0x00000648u; // 800FFC10
  c->lr=0x800FFC18u; f_800043C4(c); // 800FFC14
  c->r[3]=0u+0x00010000u; // 800FFC18
  c->r[7]=0u+0x000000FFu; // 800FFC1C
  c->r[9]=c->r[3]+0xFFFFCC18u; // 800FFC20
  c->r[12]=0u+0x00000001u; // 800FFC24
  c->r[3]=0u+0x00001400u; // 800FFC28
  c->r[11]=0u+0x00000002u; // 800FFC2C
  c->r[10]=0u+0x00000004u; // 800FFC30
  c->r[8]=0u+0x0000003Fu; // 800FFC34
  c->r[6]=0u+0x00000000u; // 800FFC38
  c->r[0]=0u+0x00000005u; // 800FFC3C
  W16(c->r[31]+0x0000064Cu,c->r[3]); // 800FFC40
  c->r[3]=c->r[31]+0x00000574u; // 800FFC44
  c->r[4]=0u+0x00000001u; // 800FFC48
  c->r[5]=0u+0x00000004u; // 800FFC4C
  W32(c->r[31]+0x00000584u,c->r[12]); // 800FFC50
  W32(c->r[31]+0x000005A0u,c->r[11]); // 800FFC54
  W32(c->r[31]+0x000005BCu,c->r[10]); // 800FFC58
  W16(c->r[31]+0x00000654u,c->r[9]); // 800FFC5C
  W16(c->r[31]+0x00000656u,c->r[8]); // 800FFC60
  W8(c->r[31]+0x000027BDu,c->r[7]); // 800FFC64
  W8(c->r[31]+0x000027BEu,c->r[7]); // 800FFC68
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 800FFC6C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 800FFC70
  c->lr=0x800FFC78u; f_800F7890(c); // 800FFC74
  c->lr=0x800FFC7Cu; f_8010B620(c); // 800FFC78
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFC7C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFC80
  c->lr=c->r[0]; // 800FFC84
  c->r[1]=c->r[1]+0x00000010u; // 800FFC88
  return; // 800FFC8C
}

// btm_db_reset
void f_800FFC90(Ctx* __restrict c) {
  trace_call(0x800FFC90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFC90
  c->r[0]=c->lr; // 800FFC94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFC98
  c->r[0]=0u+0x0000000Cu; // 800FFC9C
  W8(c->r[1]+0x00000008u,c->r[0]); // 800FFCA0
  c->lr=0x800FFCA8u; f_80102460(c); // 800FFCA4
  c->lr=0x800FFCACu; f_801015F0(c); // 800FFCA8
  c->r[3]=0u+0x803D0000u; // 800FFCAC
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFCB0
  c->r[12]=R32(c->r[3]+0x000005A8u); // 800FFCB4
  cmps(c,0,(int32_t)c->r[12],0); // 800FFCB8
  if (crb(c,2)) { goto L_800FFCD8; } // 800FFCBC
  c->r[0]=0u+0x00000000u; // 800FFCC0
  W32(c->r[3]+0x000005A8u,c->r[0]); // 800FFCC4
  if (crb(c,2)) { goto L_800FFCD8; } // 800FFCC8
  c->r[3]=0u+0x00000000u; // 800FFCCC
  c->ctr=c->r[12]; // 800FFCD0
  if (true) { c->lr=0x800FFCD8u; dispatch(c,c->ctr); } // 800FFCD4
L_800FFCD8:;
  c->r[3]=0u+0x803D0000u; // 800FFCD8
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFCDC
  c->r[12]=R32(c->r[3]+0x000005C4u); // 800FFCE0
  cmps(c,0,(int32_t)c->r[12],0); // 800FFCE4
  if (crb(c,2)) { goto L_800FFD04; } // 800FFCE8
  c->r[0]=0u+0x00000000u; // 800FFCEC
  W32(c->r[3]+0x000005C4u,c->r[0]); // 800FFCF0
  if (crb(c,2)) { goto L_800FFD04; } // 800FFCF4
  c->r[3]=c->r[1]+0x00000008u; // 800FFCF8
  c->ctr=c->r[12]; // 800FFCFC
  if (true) { c->lr=0x800FFD04u; dispatch(c,c->ctr); } // 800FFD00
L_800FFD04:;
  c->r[3]=0u+0x803D0000u; // 800FFD04
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFD08
  c->r[12]=R32(c->r[3]+0x000005E0u); // 800FFD0C
  cmps(c,0,(int32_t)c->r[12],0); // 800FFD10
  if (crb(c,2)) { goto L_800FFD30; } // 800FFD14
  c->r[0]=0u+0x00000000u; // 800FFD18
  W32(c->r[3]+0x000005E0u,c->r[0]); // 800FFD1C
  if (crb(c,2)) { goto L_800FFD30; } // 800FFD20
  c->r[3]=c->r[1]+0x00000008u; // 800FFD24
  c->ctr=c->r[12]; // 800FFD28
  if (true) { c->lr=0x800FFD30u; dispatch(c,c->ctr); } // 800FFD2C
L_800FFD30:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFD30
  c->lr=c->r[0]; // 800FFD34
  c->r[1]=c->r[1]+0x00000010u; // 800FFD38
  return; // 800FFD3C
}

// BTM_DeviceReset
void f_800FFD40(Ctx* __restrict c) {
  trace_call(0x800FFD40u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFD40
  c->r[0]=c->lr; // 800FFD44
  c->r[4]=0u+0x803D0000u; // 800FFD48
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFD4C
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FFD50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFD54
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFD58
  c->r[30]=c->r[3]|c->r[3]; // 800FFD5C
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 800FFD60
  cmps(c,0,(int32_t)c->r[0],0); // 800FFD64
  if (crb(c,2)) { goto L_800FFD74; } // 800FFD68
  cmpu(c,0,c->r[0],c->r[3]); // 800FFD6C
  if (!crb(c,2)) { goto L_800FFDC4; } // 800FFD70
L_800FFD74:;
  c->lr=0x800FFD78u; f_800FDC58(c); // 800FFD74
  c->lr=0x800FFD7Cu; f_800FFC90(c); // 800FFD78
  c->r[31]=0u+0x803D0000u; // 800FFD7C
  c->r[6]=0u+0x00000000u; // 800FFD80
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FFD84
  c->r[0]=0u+0x00000005u; // 800FFD88
  W32(c->r[31]+0x0000058Cu,c->r[30]); // 800FFD8C
  c->r[3]=c->r[31]+0x00000574u; // 800FFD90
  c->r[4]=0u+0x00000001u; // 800FFD94
  c->r[5]=0u+0x00000004u; // 800FFD98
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 800FFD9C
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 800FFDA0
  c->lr=0x800FFDA8u; f_800F7890(c); // 800FFDA4
  c->lr=0x800FFDACu; f_8010B620(c); // 800FFDA8
  c->r[12]=R32(c->r[31]+0x00000568u); // 800FFDAC
  cmps(c,0,(int32_t)c->r[12],0); // 800FFDB0
  if (crb(c,2)) { goto L_800FFDC4; } // 800FFDB4
  c->r[3]=0u+0x00000001u; // 800FFDB8
  c->ctr=c->r[12]; // 800FFDBC
  if (true) { c->lr=0x800FFDC4u; dispatch(c,c->ctr); } // 800FFDC0
L_800FFDC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFDC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFDC8
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFDCC
  c->lr=c->r[0]; // 800FFDD0
  c->r[1]=c->r[1]+0x00000010u; // 800FFDD4
  return; // 800FFDD8
}

// BTM_SendHciReset
void f_800FFDDC(Ctx* __restrict c) {
  trace_call(0x800FFDDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFDDC
  c->r[0]=c->lr; // 800FFDE0
  c->r[4]=0u+0x803D0000u; // 800FFDE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFDE8
  c->r[4]=c->r[4]+0xFFFFA218u; // 800FFDEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFDF0
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFDF4
  c->r[30]=c->r[3]|c->r[3]; // 800FFDF8
  c->r[0]=R32(c->r[4]+0x0000058Cu); // 800FFDFC
  cmps(c,0,(int32_t)c->r[0],0); // 800FFE00
  if (crb(c,2)) { goto L_800FFE1C; } // 800FFE04
  cmpu(c,0,c->r[0],c->r[3]); // 800FFE08
  if (crb(c,2)) { goto L_800FFE1C; } // 800FFE0C
  c->r[0]=R32(c->r[4]+0x00000620u); // 800FFE10
  cmpu(c,0,c->r[0],c->r[3]); // 800FFE14
  if (!crb(c,2)) { goto L_800FFE6C; } // 800FFE18
L_800FFE1C:;
  c->lr=0x800FFE20u; f_800FDC58(c); // 800FFE1C
  c->lr=0x800FFE24u; f_800FFC90(c); // 800FFE20
  c->r[31]=0u+0x803D0000u; // 800FFE24
  c->r[6]=0u+0x00000000u; // 800FFE28
  c->r[31]=c->r[31]+0xFFFFA218u; // 800FFE2C
  c->r[0]=0u+0x00000005u; // 800FFE30
  W32(c->r[31]+0x00000620u,c->r[30]); // 800FFE34
  c->r[3]=c->r[31]+0x00000574u; // 800FFE38
  c->r[4]=0u+0x00000001u; // 800FFE3C
  c->r[5]=0u+0x00000004u; // 800FFE40
  W8(c->r[31]+0x0000064Eu,c->r[6]); // 800FFE44
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 800FFE48
  c->lr=0x800FFE50u; f_800F7890(c); // 800FFE4C
  c->lr=0x800FFE54u; f_8010B620(c); // 800FFE50
  c->r[12]=R32(c->r[31]+0x00000568u); // 800FFE54
  cmps(c,0,(int32_t)c->r[12],0); // 800FFE58
  if (crb(c,2)) { goto L_800FFE6C; } // 800FFE5C
  c->r[3]=0u+0x00000001u; // 800FFE60
  c->ctr=c->r[12]; // 800FFE64
  if (true) { c->lr=0x800FFE6Cu; dispatch(c,c->ctr); } // 800FFE68
L_800FFE6C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFE6C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFE70
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFE74
  c->lr=c->r[0]; // 800FFE78
  c->r[1]=c->r[1]+0x00000010u; // 800FFE7C
  return; // 800FFE80
}

// BTM_IsDeviceUp
void f_800FFE84(Ctx* __restrict c) {
  trace_call(0x800FFE84u);
  c->r[3]=0u+0x803D0000u; // 800FFE84
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFE88
  c->r[3]=R8(c->r[3]+0x0000064Eu); // 800FFE8C
  c->r[0]=c->r[3]+0xFFFFFFFBu; // 800FFE90
  c->r[0]=cntlz(c->r[0]); // 800FFE94
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 800FFE98
  return; // 800FFE9C
}

// BTM_SetAfhChannels
void f_800FFEA0(Ctx* __restrict c) {
  trace_call(0x800FFEA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFEA0
  c->r[0]=c->lr; // 800FFEA4
  c->r[7]=0u+0x803D0000u; // 800FFEA8
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFEAC
  c->r[7]=c->r[7]+0xFFFFA218u; // 800FFEB0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFEB4
  c->r[31]=c->r[4]|c->r[4]; // 800FFEB8
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFEBC
  c->r[30]=c->r[3]|c->r[3]; // 800FFEC0
  c->r[0]=R8(c->r[7]+0x000027C0u); // 800FFEC4
  cmpu(c,0,c->r[0],0x00000003u); // 800FFEC8
  if (crb(c,0)) { goto L_800FFEF4; } // 800FFECC
  c->r[3]=0u+0x000D0000u; // 800FFED0
  c->r[4]=0u+0x80330000u; // 800FFED4
  c->r[6]=R8(c->r[7]+0x000027BDu); // 800FFED8
  c->r[5]=c->r[30]|c->r[30]; // 800FFEDC
  c->r[8]=R8(c->r[7]+0x000027BEu); // 800FFEE0
  c->r[7]=c->r[31]|c->r[31]; // 800FFEE4
  c->r[3]=c->r[3]+0x00000002u; // 800FFEE8
  c->r[4]=c->r[4]+0xFFFFAE00u; // 800FFEEC
  c->lr=0x800FFEF4u; f_800F7300(c); // 800FFEF0
L_800FFEF4:;
  c->r[3]=0u+0x803D0000u; // 800FFEF4
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFEF8
  c->r[4]=R8(c->r[3]+0x00000645u); // 800FFEFC
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 800FFF00
  if (!crb(c,2)) { goto L_800FFF24; } // 800FFF04
  c->r[0]=R8(c->r[3]+0x00000644u); // 800FFF08
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 800FFF0C
  if (!crb(c,2)) { goto L_800FFF24; } // 800FFF10
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 800FFF14
  if (!crb(c,2)) { goto L_800FFF24; } // 800FFF18
  c->r[3]=0u+0x00000004u; // 800FFF1C
  goto L_800FFF78; // 800FFF20
L_800FFF24:;
  c->r[3]=0u+0x803D0000u; // 800FFF24
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFF28
  c->r[0]=R8(c->r[3]+0x000027BDu); // 800FFF2C
  cmpu(c,0,c->r[0],c->r[30]); // 800FFF30
  if (!crb(c,2)) { goto L_800FFF44; } // 800FFF34
  c->r[0]=R8(c->r[3]+0x000027BEu); // 800FFF38
  cmpu(c,0,c->r[0],c->r[31]); // 800FFF3C
  if (crb(c,2)) { goto L_800FFF74; } // 800FFF40
L_800FFF44:;
  c->r[3]=c->r[30]|c->r[30]; // 800FFF44
  c->r[4]=c->r[31]|c->r[31]; // 800FFF48
  c->lr=0x800FFF50u; f_8010C314(c); // 800FFF4C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 800FFF50
  if (crb(c,2)) { goto L_800FFF6C; } // 800FFF54
  c->r[3]=0u+0x803D0000u; // 800FFF58
  c->r[3]=c->r[3]+0xFFFFA218u; // 800FFF5C
  W8(c->r[3]+0x000027BDu,c->r[30]); // 800FFF60
  W8(c->r[3]+0x000027BEu,c->r[31]); // 800FFF64
  goto L_800FFF74; // 800FFF68
L_800FFF6C:;
  c->r[3]=0u+0x00000003u; // 800FFF6C
  goto L_800FFF78; // 800FFF70
L_800FFF74:;
  c->r[3]=0u+0x00000000u; // 800FFF74
L_800FFF78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 800FFF78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 800FFF7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 800FFF80
  c->lr=c->r[0]; // 800FFF84
  c->r[1]=c->r[1]+0x00000010u; // 800FFF88
  return; // 800FFF8C
}

// btm_dev_timeout
void f_800FFF90(Ctx* __restrict c) {
  trace_call(0x800FFF90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 800FFF90
  c->r[0]=c->lr; // 800FFF94
  W32(c->r[1]+0x00000014u,c->r[0]); // 800FFF98
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 800FFF9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 800FFFA0
  c->r[0]=R32(c->r[3]+0x00000010u); // 800FFFA4
  cmpu(c,0,c->r[0],0x00000001u); // 800FFFA8
  if (!crb(c,2)) { goto L_801001E0; } // 800FFFAC
  c->r[6]=0u+0x803D0000u; // 800FFFB0
  c->r[6]=c->r[6]+0xFFFFA218u; // 800FFFB4
  c->r[0]=R8(c->r[6]+0x0000064Eu); // 800FFFB8
  cmps(c,0,(int32_t)c->r[0],2); // 800FFFBC
  if (crb(c,2)) { goto L_80100120; } // 800FFFC0
  if (!crb(c,0)) { goto L_800FFFD8; } // 800FFFC4
  cmps(c,0,(int32_t)c->r[0],0); // 800FFFC8
  if (crb(c,2)) { goto L_800FFFE4; } // 800FFFCC
  if (!crb(c,0)) { goto L_8010000C; } // 800FFFD0
  goto L_80100210; // 800FFFD4
L_800FFFD8:;
  cmps(c,0,(int32_t)c->r[0],4); // 800FFFD8
  if (!crb(c,0)) { goto L_80100210; } // 800FFFDC
  goto L_80100184; // 800FFFE0
L_800FFFE4:;
  c->r[3]=0u+0x00000000u; // 800FFFE4
  c->r[0]=0u+0x00000005u; // 800FFFE8
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 800FFFEC
  c->r[3]=c->r[6]+0x00000574u; // 800FFFF0
  c->r[4]=0u+0x00000001u; // 800FFFF4
  c->r[5]=0u+0x00000004u; // 800FFFF8
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 800FFFFC
  c->lr=0x80100004u; f_800F7890(c); // 80100000
  c->lr=0x80100008u; f_8010B620(c); // 80100004
  goto L_80100210; // 80100008
L_8010000C:;
  c->r[0]=0u+0x00000004u; // 8010000C
  c->r[3]=0u+0x00000002u; // 80100010
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 80100014
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 80100018
  goto L_80100034; // 8010001C
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 80100020
  W8(c->r[6]+0x0000064Eu,c->r[0]); // 80100024
  c->lr=0x8010002Cu; f_800F7890(c); // 80100028
  c->lr=0x80100030u; f_8010B620(c); // 8010002C
  goto L_80100058; // 80100030
L_80100034:;
  c->r[3]=c->r[6]+0x00000574u; // 80100034
  c->r[4]=0u+0x00000001u; // 80100038
  c->r[5]=0u+0x00000001u; // 8010003C
  c->lr=0x80100044u; f_800F7890(c); // 80100040
  c->r[3]=0u+0x00000002u; // 80100044
  c->lr=0x8010004Cu; f_800F46D0(c); // 80100048
  cmps(c,0,(int32_t)c->r[3],0); // 8010004C
  if (crb(c,2)) { goto L_80100058; } // 80100050
  c->lr=0x80100058u; f_8010C198(c); // 80100054
L_80100058:;
  c->r[31]=0u+0x803D0000u; // 80100058
  c->r[5]=0u+0x00000003u; // 8010005C
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100060
  c->r[3]=c->r[31]+0x00000648u; // 80100064
  c->r[4]=c->r[3]|c->r[3]; // 80100068
  c->lr=0x80100070u; f_800043C4(c); // 8010006C
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80100070
  cmps(c,0,(int32_t)c->r[0],0); // 80100074
  if (crb(c,2)) { goto L_8010009C; } // 80100078
  cmpu(c,0,c->r[0],0x00000001u); // 8010007C
  if (crb(c,2)) { goto L_8010009C; } // 80100080
  c->r[3]=0u+0x00000002u; // 80100084
  c->lr=0x8010008Cu; f_800F46D0(c); // 80100088
  cmps(c,0,(int32_t)c->r[3],0); // 8010008C
  if (crb(c,2)) { goto L_8010009C; } // 80100090
  c->r[4]=c->r[31]+0x00000648u; // 80100094
  c->lr=0x8010009Cu; f_8010BE94(c); // 80100098
L_8010009C:;
  c->r[0]=0u+0x803D0000u; // 8010009C
  c->r[31]=addc(c,c->r[0],0xFFFFA218u,0); cr0(c,c->r[31]); // 801000A0
  if (crb(c,2)) { goto L_80100104; } // 801000A4
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 801000A8
  cmps(c,0,(int32_t)c->r[0],0); // 801000AC
  if (crb(c,2)) { goto L_80100104; } // 801000B0
  cmpu(c,0,c->r[0],0x00000001u); // 801000B4
  if (crb(c,2)) { goto L_80100104; } // 801000B8
  c->r[3]=0u+0x00000002u; // 801000BC
  c->lr=0x801000C4u; f_800F46D0(c); // 801000C0
  cmps(c,0,(int32_t)c->r[3],0); // 801000C4
  c->r[30]=c->r[3]|c->r[3]; // 801000C8
  if (crb(c,2)) { goto L_80100104; } // 801000CC
  cmpu(c,0,c->r[31],c->r[31]); // 801000D0
  if (crb(c,2)) { goto L_801000F8; } // 801000D4
  c->r[3]=c->r[31]|c->r[31]; // 801000D8
  c->r[4]=0u+0x00000000u; // 801000DC
  c->r[5]=0u+0x00000020u; // 801000E0
  c->lr=0x801000E8u; f_80004714(c); // 801000E4
  c->r[3]=c->r[31]|c->r[31]; // 801000E8
  c->r[4]=c->r[31]|c->r[31]; // 801000EC
  c->r[5]=0u+0x0000001Fu; // 801000F0
  c->lr=0x801000F8u; f_800B788C(c); // 801000F4
L_801000F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801000F8
  c->r[4]=c->r[31]|c->r[31]; // 801000FC
  c->lr=0x80100104u; f_8010BB7C(c); // 80100100
L_80100104:;
  c->r[5]=0u+0x803D0000u; // 80100104
  c->r[5]=c->r[5]+0xFFFFA218u; // 80100108
  c->r[3]=R8(c->r[5]+0x00000020u); // 8010010C
  c->r[4]=c->r[5]+0x00000022u; // 80100110
  c->r[5]=R8(c->r[5]+0x00000021u); // 80100114
  c->lr=0x8010011Cu; f_80104D88(c); // 80100118
  goto L_80100210; // 8010011C
L_80100120:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 80100120
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80100124
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80100128
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 8010012C
  if (!crb(c,2)) { goto L_8010015C; } // 80100130
  c->r[3]=0u+0x00000000u; // 80100134
  c->r[0]=0u+0x00000005u; // 80100138
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 8010013C
  c->r[3]=c->r[6]+0x00000574u; // 80100140
  c->r[4]=0u+0x00000001u; // 80100144
  c->r[5]=0u+0x00000004u; // 80100148
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 8010014C
  c->lr=0x80100154u; f_800F7890(c); // 80100150
  c->lr=0x80100158u; f_8010B620(c); // 80100154
  goto L_80100210; // 80100158
L_8010015C:;
  c->r[3]=c->r[6]+0x00000574u; // 8010015C
  c->r[4]=0u+0x00000001u; // 80100160
  c->r[5]=0u+0x00000001u; // 80100164
  c->lr=0x8010016Cu; f_800F7890(c); // 80100168
  c->r[3]=0u+0x00000002u; // 8010016C
  c->lr=0x80100174u; f_800F46D0(c); // 80100170
  cmps(c,0,(int32_t)c->r[3],0); // 80100174
  if (crb(c,2)) { goto L_80100210; } // 80100178
  c->lr=0x80100180u; f_8010C198(c); // 8010017C
  goto L_80100210; // 80100180
L_80100184:;
  c->r[3]=R8(c->r[6]+0x0000064Fu); // 80100184
  c->r[3]=c->r[3]+0xFFFFFFFFu; // 80100188
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010018C
  W8(c->r[6]+0x0000064Fu,c->r[3]); // 80100190
  if (!crb(c,2)) { goto L_801001C0; } // 80100194
  c->r[3]=0u+0x00000000u; // 80100198
  c->r[0]=0u+0x00000005u; // 8010019C
  W8(c->r[6]+0x0000064Eu,c->r[3]); // 801001A0
  c->r[3]=c->r[6]+0x00000574u; // 801001A4
  c->r[4]=0u+0x00000001u; // 801001A8
  c->r[5]=0u+0x00000004u; // 801001AC
  W8(c->r[6]+0x0000064Fu,c->r[0]); // 801001B0
  c->lr=0x801001B8u; f_800F7890(c); // 801001B4
  c->lr=0x801001BCu; f_8010B620(c); // 801001B8
  goto L_80100210; // 801001BC
L_801001C0:;
  c->r[3]=c->r[6]+0x00000574u; // 801001C0
  c->r[4]=0u+0x00000001u; // 801001C4
  c->r[5]=0u+0x00000001u; // 801001C8
  c->lr=0x801001D0u; f_800F7890(c); // 801001CC
  c->lr=0x801001D4u; f_8010C0DC(c); // 801001D0
  c->lr=0x801001D8u; f_8010C1C0(c); // 801001D4
  c->lr=0x801001DCu; f_801034E4(c); // 801001D8
  goto L_80100210; // 801001DC
L_801001E0:;
  cmpu(c,0,c->r[0],0x00000002u); // 801001E0
  if (!crb(c,2)) { goto L_80100210; } // 801001E4
  c->r[3]=0u+0x803D0000u; // 801001E8
  c->r[0]=0u+0x00000000u; // 801001EC
  c->r[3]=c->r[3]+0xFFFFA218u; // 801001F0
  c->r[12]=R32(c->r[3]+0x000005A8u); // 801001F4
  cmps(c,0,(int32_t)c->r[12],0); // 801001F8
  W32(c->r[3]+0x000005A8u,c->r[0]); // 801001FC
  if (crb(c,2)) { goto L_80100210; } // 80100200
  c->r[3]=0u+0x00000000u; // 80100204
  c->ctr=c->r[12]; // 80100208
  if (true) { c->lr=0x80100210u; dispatch(c,c->ctr); } // 8010020C
L_80100210:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100210
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100214
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100218
  c->lr=c->r[0]; // 8010021C
  c->r[1]=c->r[1]+0x00000010u; // 80100220
  return; // 80100224
}

// btm_reset_complete
void f_80100228(Ctx* __restrict c) {
  trace_call(0x80100228u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100228
  c->r[0]=c->lr; // 8010022C
  c->r[3]=0u+0x803D0000u; // 80100230
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100234
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100238
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010023C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100240
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80100244
  cmpu(c,0,c->r[0],0x00000004u); // 80100248
  if (crb(c,0)) { goto L_80100264; } // 8010024C
  c->r[3]=0u+0x000D0000u; // 80100250
  c->r[4]=0u+0x80330000u; // 80100254
  c->r[3]=c->r[3]+0x00000003u; // 80100258
  c->r[4]=c->r[4]+0xFFFFAE30u; // 8010025C
  c->lr=0x80100264u; f_800F7280(c); // 80100260
L_80100264:;
  c->r[31]=0u+0x803D0000u; // 80100264
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100268
  c->r[12]=R32(c->r[31]+0x00000620u); // 8010026C
  cmps(c,0,(int32_t)c->r[12],0); // 80100270
  if (crb(c,2)) { goto L_80100290; } // 80100274
  c->r[0]=0u+0x00000000u; // 80100278
  c->r[3]=0u+0x00000000u; // 8010027C
  W32(c->r[31]+0x00000620u,c->r[0]); // 80100280
  c->ctr=c->r[12]; // 80100284
  if (true) { c->lr=0x8010028Cu; dispatch(c,c->ctr); } // 80100288
  goto L_801003D4; // 8010028C
L_80100290:;
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80100290
  cmps(c,0,(int32_t)c->r[0],0); // 80100294
  if (!crb(c,2)) { goto L_801003D4; } // 80100298
  c->lr=0x801002A0u; f_80115940(c); // 8010029C
  c->r[6]=0u+0x00000012u; // 801002A0
  c->r[5]=0u+0x00000800u; // 801002A4
  c->r[4]=0u+0x00000000u; // 801002A8
  c->r[0]=0u+0x00000004u; // 801002AC
  c->r[3]=0u+0x00000002u; // 801002B0
  W16(c->r[31]+0x000016A0u,c->r[6]); // 801002B4
  W16(c->r[31]+0x000016A2u,c->r[5]); // 801002B8
  W16(c->r[31]+0x000016A4u,c->r[4]); // 801002BC
  W16(c->r[31]+0x0000169Cu,c->r[6]); // 801002C0
  W16(c->r[31]+0x0000169Eu,c->r[5]); // 801002C4
  W16(c->r[31]+0x000016A6u,c->r[4]); // 801002C8
  W8(c->r[31]+0x0000064Eu,c->r[3]); // 801002CC
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801002D0
  goto L_801002EC; // 801002D4
  W8(c->r[31]+0x0000064Eu,c->r[4]); // 801002D8
  W8(c->r[31]+0x0000064Fu,c->r[0]); // 801002DC
  c->lr=0x801002E4u; f_800F7890(c); // 801002E0
  c->lr=0x801002E8u; f_8010B620(c); // 801002E4
  goto L_80100310; // 801002E8
L_801002EC:;
  c->r[3]=c->r[31]+0x00000574u; // 801002EC
  c->r[4]=0u+0x00000001u; // 801002F0
  c->r[5]=0u+0x00000001u; // 801002F4
  c->lr=0x801002FCu; f_800F7890(c); // 801002F8
  c->r[3]=0u+0x00000002u; // 801002FC
  c->lr=0x80100304u; f_800F46D0(c); // 80100300
  cmps(c,0,(int32_t)c->r[3],0); // 80100304
  if (crb(c,2)) { goto L_80100310; } // 80100308
  c->lr=0x80100310u; f_8010C198(c); // 8010030C
L_80100310:;
  c->r[31]=0u+0x803D0000u; // 80100310
  c->r[5]=0u+0x00000003u; // 80100314
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100318
  c->r[3]=c->r[31]+0x00000648u; // 8010031C
  c->r[4]=c->r[3]|c->r[3]; // 80100320
  c->lr=0x80100328u; f_800043C4(c); // 80100324
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80100328
  cmps(c,0,(int32_t)c->r[0],0); // 8010032C
  if (crb(c,2)) { goto L_80100354; } // 80100330
  cmpu(c,0,c->r[0],0x00000001u); // 80100334
  if (crb(c,2)) { goto L_80100354; } // 80100338
  c->r[3]=0u+0x00000002u; // 8010033C
  c->lr=0x80100344u; f_800F46D0(c); // 80100340
  cmps(c,0,(int32_t)c->r[3],0); // 80100344
  if (crb(c,2)) { goto L_80100354; } // 80100348
  c->r[4]=c->r[31]+0x00000648u; // 8010034C
  c->lr=0x80100354u; f_8010BE94(c); // 80100350
L_80100354:;
  c->r[0]=0u+0x803D0000u; // 80100354
  c->r[31]=addc(c,c->r[0],0xFFFFA218u,0); cr0(c,c->r[31]); // 80100358
  if (crb(c,2)) { goto L_801003BC; } // 8010035C
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80100360
  cmps(c,0,(int32_t)c->r[0],0); // 80100364
  if (crb(c,2)) { goto L_801003BC; } // 80100368
  cmpu(c,0,c->r[0],0x00000001u); // 8010036C
  if (crb(c,2)) { goto L_801003BC; } // 80100370
  c->r[3]=0u+0x00000002u; // 80100374
  c->lr=0x8010037Cu; f_800F46D0(c); // 80100378
  cmps(c,0,(int32_t)c->r[3],0); // 8010037C
  c->r[30]=c->r[3]|c->r[3]; // 80100380
  if (crb(c,2)) { goto L_801003BC; } // 80100384
  cmpu(c,0,c->r[31],c->r[31]); // 80100388
  if (crb(c,2)) { goto L_801003B0; } // 8010038C
  c->r[3]=c->r[31]|c->r[31]; // 80100390
  c->r[4]=0u+0x00000000u; // 80100394
  c->r[5]=0u+0x00000020u; // 80100398
  c->lr=0x801003A0u; f_80004714(c); // 8010039C
  c->r[3]=c->r[31]|c->r[31]; // 801003A0
  c->r[4]=c->r[31]|c->r[31]; // 801003A4
  c->r[5]=0u+0x0000001Fu; // 801003A8
  c->lr=0x801003B0u; f_800B788C(c); // 801003AC
L_801003B0:;
  c->r[3]=c->r[30]|c->r[30]; // 801003B0
  c->r[4]=c->r[31]|c->r[31]; // 801003B4
  c->lr=0x801003BCu; f_8010BB7C(c); // 801003B8
L_801003BC:;
  c->r[5]=0u+0x803D0000u; // 801003BC
  c->r[5]=c->r[5]+0xFFFFA218u; // 801003C0
  c->r[3]=R8(c->r[5]+0x00000020u); // 801003C4
  c->r[4]=c->r[5]+0x00000022u; // 801003C8
  c->r[5]=R8(c->r[5]+0x00000021u); // 801003CC
  c->lr=0x801003D4u; f_80104D88(c); // 801003D0
L_801003D4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801003D4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801003D8
  c->r[30]=R32(c->r[1]+0x00000008u); // 801003DC
  c->lr=c->r[0]; // 801003E0
  c->r[1]=c->r[1]+0x00000010u; // 801003E4
  return; // 801003E8
}

// btm_read_hci_buf_size_complete
void f_801003EC(Ctx* __restrict c) {
  trace_call(0x801003ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801003EC
  c->r[0]=c->lr; // 801003F0
  W32(c->r[1]+0x00000014u,c->r[0]); // 801003F4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801003F8
  cmps(c,0,(int32_t)c->r[0],0); // 801003FC
  if (!crb(c,2)) { goto L_80100458; } // 80100400
  c->r[0]=R8(c->r[3]+0x00000002u); // 80100404
  c->r[6]=0u+0x803D0000u; // 80100408
  c->r[4]=R8(c->r[3]+0x00000001u); // 8010040C
  c->r[6]=c->r[6]+0xFFFF9CF0u; // 80100410
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80100414
  c->r[0]=c->r[4]+c->r[0]; // 80100418
  W16(c->r[6]+0x0000007Cu,c->r[0]); // 8010041C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80100420
  c->r[0]=c->r[4]+0x00000004u; // 80100424
  c->r[4]=R8(c->r[3]+0x00000005u); // 80100428
  c->r[5]=R8(c->r[3]+0x00000004u); // 8010042C
  c->r[3]=rotl(c->r[4],8)&0xFFFFFF00u; // 80100430
  c->r[3]=c->r[5]+c->r[3]; // 80100434
  W16(c->r[6]+0x0000007Eu,c->r[0]); // 80100438
  c->r[3]=rotl(c->r[3],0)&0x0000FFFFu; // 8010043C
  c->lr=0x80100444u; f_801129BC(c); // 80100440
  c->r[3]=0u+0x0000069Bu; // 80100444
  c->r[4]=0u+0x0000001Eu; // 80100448
  c->r[5]=0u+0x00000014u; // 8010044C
  c->r[6]=0u+0x0000000Au; // 80100450
  c->lr=0x80100458u; f_8010BF1C(c); // 80100454
L_80100458:;
  c->r[3]=0u+0x803D0000u; // 80100458
  c->r[0]=0u+0x00000004u; // 8010045C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100460
  c->r[4]=0u+0x00000003u; // 80100464
  W8(c->r[3]+0x0000064Eu,c->r[4]); // 80100468
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 8010046C
  goto L_80100488; // 80100470
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 80100474
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 80100478
  c->lr=0x80100480u; f_800F7890(c); // 8010047C
  c->lr=0x80100484u; f_8010B620(c); // 80100480
  goto L_801004A4; // 80100484
L_80100488:;
  c->r[3]=c->r[3]+0x00000574u; // 80100488
  c->r[4]=0u+0x00000001u; // 8010048C
  c->r[5]=0u+0x00000001u; // 80100490
  c->lr=0x80100498u; f_800F7890(c); // 80100494
  c->lr=0x8010049Cu; f_8010C0DC(c); // 80100498
  c->lr=0x801004A0u; f_8010C1C0(c); // 8010049C
  c->lr=0x801004A4u; f_801034E4(c); // 801004A0
L_801004A4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801004A4
  c->lr=c->r[0]; // 801004A8
  c->r[1]=c->r[1]+0x00000010u; // 801004AC
  return; // 801004B0
}

// btm_read_local_version_complete
void f_801004B4(Ctx* __restrict c) {
  trace_call(0x801004B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801004B4
  c->r[0]=c->lr; // 801004B8
  c->r[5]=0u+0x803D0000u; // 801004BC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801004C0
  c->r[5]=c->r[5]+0xFFFFA218u; // 801004C4
  c->r[0]=R8(c->r[3]+0x00000000u); // 801004C8
  cmps(c,0,(int32_t)c->r[0],0); // 801004CC
  if (!crb(c,2)) { goto L_80100520; } // 801004D0
  c->r[0]=R8(c->r[3]+0x00000001u); // 801004D4
  W8(c->r[5]+0x00000636u,c->r[0]); // 801004D8
  c->r[0]=R8(c->r[3]+0x00000003u); // 801004DC
  c->r[4]=R8(c->r[3]+0x00000002u); // 801004E0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801004E4
  c->r[0]=c->r[4]+c->r[0]; // 801004E8
  W16(c->r[5]+0x00000638u,c->r[0]); // 801004EC
  c->r[0]=R8(c->r[3]+0x00000004u); // 801004F0
  W8(c->r[5]+0x0000063Au,c->r[0]); // 801004F4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801004F8
  c->r[4]=R8(c->r[3]+0x00000005u); // 801004FC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80100500
  c->r[0]=c->r[4]+c->r[0]; // 80100504
  W16(c->r[5]+0x0000063Cu,c->r[0]); // 80100508
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010050C
  c->r[3]=R8(c->r[3]+0x00000007u); // 80100510
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80100514
  c->r[0]=c->r[3]+c->r[0]; // 80100518
  W16(c->r[5]+0x0000063Eu,c->r[0]); // 8010051C
L_80100520:;
  c->r[3]=0u+0x803D0000u; // 80100520
  c->r[0]=0u+0x00000004u; // 80100524
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100528
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 8010052C
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 80100530
  goto L_8010054C; // 80100534
  W8(c->r[3]+0x0000064Fu,c->r[0]); // 80100538
  W8(c->r[3]+0x0000064Eu,c->r[0]); // 8010053C
  c->lr=0x80100544u; f_800F7890(c); // 80100540
  c->lr=0x80100548u; f_8010B620(c); // 80100544
  goto L_80100560; // 80100548
L_8010054C:;
  c->r[3]=c->r[3]+0x00000574u; // 8010054C
  c->r[4]=0u+0x00000001u; // 80100550
  c->r[5]=0u+0x00000001u; // 80100554
  c->lr=0x8010055Cu; f_800F7890(c); // 80100558
  c->lr=0x80100560u; f_8010C13C(c); // 8010055C
L_80100560:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100560
  c->lr=c->r[0]; // 80100564
  c->r[1]=c->r[1]+0x00000010u; // 80100568
  return; // 8010056C
}

// btm_read_local_features_complete
void f_80100570(Ctx* __restrict c) {
  trace_call(0x80100570u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100570
  c->r[0]=c->lr; // 80100574
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100578
  c->r[11]=c->r[1]+0x00000020u; // 8010057C
  c->lr=0x80100584u; f_800ADA2C(c); // 80100580
  c->r[31]=0u+0x803D0000u; // 80100584
  c->r[30]=0u+0x80330000u; // 80100588
  c->r[31]=c->r[31]+0xFFFFA218u; // 8010058C
  c->r[0]=0u+0x00000000u; // 80100590
  c->r[28]=R32(c->r[31]+0x0000058Cu); // 80100594
  c->r[30]=c->r[30]+0xFFFFAE00u; // 80100598
  W32(c->r[31]+0x0000058Cu,c->r[0]); // 8010059C
  c->r[0]=R8(c->r[3]+0x00000000u); // 801005A0
  cmps(c,0,(int32_t)c->r[0],0); // 801005A4
  if (!crb(c,2)) { goto L_80100A54; } // 801005A8
  c->r[0]=0u+0x00000005u; // 801005AC
  c->r[4]=0u+0x00000018u; // 801005B0
  W8(c->r[31]+0x0000064Eu,c->r[0]); // 801005B4
  c->r[0]=R8(c->r[3]+0x00000001u); // 801005B8
  W8(c->r[31]+0x00000640u,c->r[0]); // 801005BC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801005C0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801005C4
  W8(c->r[31]+0x00000641u,c->r[0]); // 801005C8
  c->r[0]=R8(c->r[3]+0x00000003u); // 801005CC
  W8(c->r[31]+0x00000642u,c->r[0]); // 801005D0
  c->r[0]=R8(c->r[3]+0x00000004u); // 801005D4
  W8(c->r[31]+0x00000643u,c->r[0]); // 801005D8
  c->r[0]=R8(c->r[3]+0x00000005u); // 801005DC
  W8(c->r[31]+0x00000644u,c->r[0]); // 801005E0
  c->r[0]=R8(c->r[3]+0x00000006u); // 801005E4
  W8(c->r[31]+0x00000645u,c->r[0]); // 801005E8
  c->r[0]=R8(c->r[3]+0x00000007u); // 801005EC
  W8(c->r[31]+0x00000646u,c->r[0]); // 801005F0
  c->r[0]=R8(c->r[3]+0x00000008u); // 801005F4
  W8(c->r[31]+0x00000647u,c->r[0]); // 801005F8
  W16(c->r[31]+0x00000654u,c->r[4]); // 801005FC
  if (crb(c,2)) { goto L_8010060C; } // 80100600
  c->r[0]=c->r[4]|0x00000C00u; // 80100604
  W16(c->r[31]+0x00000654u,c->r[0]); // 80100608
L_8010060C:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 8010060C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80100610
  if (crb(c,2)) { goto L_8010062C; } // 80100614
  c->r[3]=0u+0x803D0000u; // 80100618
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010061C
  c->r[0]=R16(c->r[3]+0x00000654u); // 80100620
  c->r[0]=c->r[0]|0x0000C000u; // 80100624
  W16(c->r[3]+0x00000654u,c->r[0]); // 80100628
L_8010062C:;
  c->r[3]=0u+0x803D0000u; // 8010062C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100630
  c->r[0]=R8(c->r[3]+0x00000636u); // 80100634
  cmpu(c,0,c->r[0],0x00000003u); // 80100638
  if (crb(c,0)) { goto L_801006CC; } // 8010063C
  c->r[0]=R8(c->r[31]+0x00000643u); // 80100640
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80100644
  if (!crb(c,2)) { goto L_80100658; } // 80100648
  c->r[0]=R16(c->r[3]+0x00000654u); // 8010064C
  c->r[0]=c->r[0]|0x00001102u; // 80100650
  W16(c->r[3]+0x00000654u,c->r[0]); // 80100654
L_80100658:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 80100658
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8010065C
  if (!crb(c,2)) { goto L_80100678; } // 80100660
  c->r[3]=0u+0x803D0000u; // 80100664
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100668
  c->r[0]=R16(c->r[3]+0x00000654u); // 8010066C
  c->r[0]=c->r[0]|0x00002204u; // 80100670
  W16(c->r[3]+0x00000654u,c->r[0]); // 80100674
L_80100678:;
  c->r[3]=R8(c->r[31]+0x00000643u); // 80100678
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8010067C
  if (!crb(c,2)) { goto L_8010068C; } // 80100680
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80100684
  if (crb(c,2)) { goto L_801006CC; } // 80100688
L_8010068C:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 8010068C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80100690
  if (!crb(c,2)) { goto L_801006AC; } // 80100694
  c->r[3]=0u+0x803D0000u; // 80100698
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010069C
  c->r[0]=R16(c->r[3]+0x00000654u); // 801006A0
  c->r[0]=c->r[0]|0x00000300u; // 801006A4
  W16(c->r[3]+0x00000654u,c->r[0]); // 801006A8
L_801006AC:;
  c->r[0]=R8(c->r[31]+0x00000645u); // 801006AC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801006B0
  if (!crb(c,2)) { goto L_801006CC; } // 801006B4
  c->r[3]=0u+0x803D0000u; // 801006B8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801006BC
  c->r[0]=R16(c->r[3]+0x00000654u); // 801006C0
  c->r[0]=c->r[0]|0x00003000u; // 801006C4
  W16(c->r[3]+0x00000654u,c->r[0]); // 801006C8
L_801006CC:;
  c->r[4]=0u+0x803D0000u; // 801006CC
  c->r[4]=c->r[4]+0xFFFFA218u; // 801006D0
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801006D4
  cmpu(c,0,c->r[0],0x00000005u); // 801006D8
  if (crb(c,0)) { goto L_801006F4; } // 801006DC
  c->r[3]=0u+0x000D0000u; // 801006E0
  c->r[5]=R16(c->r[4]+0x00000654u); // 801006E4
  c->r[3]=c->r[3]+0x00000004u; // 801006E8
  c->r[4]=c->r[30]+0x00000044u; // 801006EC
  c->lr=0x801006F4u; f_800F72A0(c); // 801006F0
L_801006F4:;
  c->r[3]=R8(c->r[31]+0x00000641u); // 801006F4
  c->r[4]=0u+0x803D0000u; // 801006F8
  c->r[4]=c->r[4]+0xFFFFA218u; // 801006FC
  c->r[5]=0u+0x00000000u; // 80100700
  c->r[0]=rotl(c->r[3],0)&0x00000008u; cr0(c,c->r[0]); // 80100704
  W16(c->r[4]+0x00000656u,c->r[5]); // 80100708
  W8(c->r[4]+0x00001908u,c->r[5]); // 8010070C
  if (crb(c,2)) { goto L_8010074C; } // 80100710
  c->r[0]=rotl(c->r[3],0)&0x00000010u; cr0(c,c->r[0]); // 80100714
  c->r[0]=0u+0x00000001u; // 80100718
  W16(c->r[4]+0x00000656u,c->r[0]); // 8010071C
  if (crb(c,2)) { goto L_8010072C; } // 80100720
  c->r[0]=c->r[0]|0x00000002u; // 80100724
  W16(c->r[4]+0x00000656u,c->r[0]); // 80100728
L_8010072C:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 8010072C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80100730
  if (crb(c,2)) { goto L_8010074C; } // 80100734
  c->r[3]=0u+0x803D0000u; // 80100738
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010073C
  c->r[0]=R16(c->r[3]+0x00000656u); // 80100740
  c->r[0]=c->r[0]|0x00000004u; // 80100744
  W16(c->r[3]+0x00000656u,c->r[0]); // 80100748
L_8010074C:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 8010074C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80100750
  if (crb(c,2)) { goto L_8010076C; } // 80100754
  c->r[3]=0u+0x803D0000u; // 80100758
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010075C
  c->r[0]=R16(c->r[3]+0x00000656u); // 80100760
  c->r[0]=c->r[0]|0x00000008u; // 80100764
  W16(c->r[3]+0x00000656u,c->r[0]); // 80100768
L_8010076C:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 8010076C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80100770
  if (crb(c,2)) { goto L_8010078C; } // 80100774
  c->r[3]=0u+0x803D0000u; // 80100778
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010077C
  c->r[0]=R16(c->r[3]+0x00000656u); // 80100780
  c->r[0]=c->r[0]|0x00000010u; // 80100784
  W16(c->r[3]+0x00000656u,c->r[0]); // 80100788
L_8010078C:;
  c->r[0]=R8(c->r[31]+0x00000644u); // 8010078C
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80100790
  if (crb(c,2)) { goto L_801007AC; } // 80100794
  c->r[3]=0u+0x803D0000u; // 80100798
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010079C
  c->r[0]=R16(c->r[3]+0x00000656u); // 801007A0
  c->r[0]=c->r[0]|0x00000020u; // 801007A4
  W16(c->r[3]+0x00000656u,c->r[0]); // 801007A8
L_801007AC:;
  c->r[4]=0u+0x803D0000u; // 801007AC
  c->r[4]=c->r[4]+0xFFFFA218u; // 801007B0
  c->r[3]=R16(c->r[4]+0x00000656u); // 801007B4
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 801007B8
  if (crb(c,2)) { goto L_80100830; } // 801007BC
  c->r[5]=R8(c->r[31]+0x00000645u); // 801007C0
  c->r[0]=0u+0x00000001u; // 801007C4
  W8(c->r[4]+0x00001908u,c->r[0]); // 801007C8
  c->r[0]=rotl(c->r[5],0)&0x00000020u; cr0(c,c->r[0]); // 801007CC
  if (crb(c,2)) { goto L_801007E8; } // 801007D0
  c->r[0]=rotl(c->r[5],0)&0x00000080u; cr0(c,c->r[0]); // 801007D4
  if (!crb(c,2)) { goto L_801007F0; } // 801007D8
  c->r[0]=c->r[3]|0x00000100u; // 801007DC
  W16(c->r[4]+0x00000656u,c->r[0]); // 801007E0
  goto L_801007F0; // 801007E4
L_801007E8:;
  c->r[0]=c->r[3]|0x00000140u; // 801007E8
  W16(c->r[4]+0x00000656u,c->r[0]); // 801007EC
L_801007F0:;
  c->r[3]=R8(c->r[31]+0x00000645u); // 801007F0
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801007F4
  if (crb(c,2)) { goto L_8010081C; } // 801007F8
  c->r[0]=rotl(c->r[3],0)&0x00000080u; cr0(c,c->r[0]); // 801007FC
  if (!crb(c,2)) { goto L_80100830; } // 80100800
  c->r[3]=0u+0x803D0000u; // 80100804
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100808
  c->r[0]=R16(c->r[3]+0x00000656u); // 8010080C
  c->r[0]=c->r[0]|0x00000200u; // 80100810
  W16(c->r[3]+0x00000656u,c->r[0]); // 80100814
  goto L_80100830; // 80100818
L_8010081C:;
  c->r[3]=0u+0x803D0000u; // 8010081C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100820
  c->r[0]=R16(c->r[3]+0x00000656u); // 80100824
  c->r[0]=c->r[0]|0x00000280u; // 80100828
  W16(c->r[3]+0x00000656u,c->r[0]); // 8010082C
L_80100830:;
  c->r[4]=0u+0x803D0000u; // 80100830
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100834
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80100838
  cmpu(c,0,c->r[0],0x00000005u); // 8010083C
  if (crb(c,0)) { goto L_80100858; } // 80100840
  c->r[3]=0u+0x000D0000u; // 80100844
  c->r[5]=R16(c->r[4]+0x00000656u); // 80100848
  c->r[3]=c->r[3]+0x00000004u; // 8010084C
  c->r[4]=c->r[30]+0x00000070u; // 80100850
  c->lr=0x80100858u; f_800F72A0(c); // 80100854
L_80100858:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 80100858
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8010085C
  if (crb(c,2)) { goto L_8010087C; } // 80100860
  c->r[3]=0u+0x803D0000u; // 80100864
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100868
  c->r[0]=R16(c->r[3]+0x000004C4u); // 8010086C
  c->r[0]=c->r[0]|0x00000001u; // 80100870
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80100874
  goto L_80100890; // 80100878
L_8010087C:;
  c->r[3]=0u+0x803D0000u; // 8010087C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100880
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80100884
  c->r[0]=rotl(c->r[0],0)&0x0000FFFEu; // 80100888
  W16(c->r[3]+0x000004C4u,c->r[0]); // 8010088C
L_80100890:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 80100890
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80100894
  if (crb(c,2)) { goto L_801008B4; } // 80100898
  c->r[3]=0u+0x803D0000u; // 8010089C
  c->r[3]=c->r[3]+0xFFFFA218u; // 801008A0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801008A4
  c->r[0]=c->r[0]|0x00000002u; // 801008A8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801008AC
  goto L_801008C8; // 801008B0
L_801008B4:;
  c->r[3]=0u+0x803D0000u; // 801008B4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801008B8
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801008BC
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFDu; // 801008C0
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801008C4
L_801008C8:;
  c->r[0]=R8(c->r[31]+0x00000640u); // 801008C8
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801008CC
  if (crb(c,2)) { goto L_801008EC; } // 801008D0
  c->r[3]=0u+0x803D0000u; // 801008D4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801008D8
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801008DC
  c->r[0]=c->r[0]|0x00000004u; // 801008E0
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801008E4
  goto L_80100900; // 801008E8
L_801008EC:;
  c->r[3]=0u+0x803D0000u; // 801008EC
  c->r[3]=c->r[3]+0xFFFFA218u; // 801008F0
  c->r[0]=R16(c->r[3]+0x000004C4u); // 801008F4
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFFBu; // 801008F8
  W16(c->r[3]+0x000004C4u,c->r[0]); // 801008FC
L_80100900:;
  c->r[0]=R8(c->r[31]+0x00000641u); // 80100900
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80100904
  if (crb(c,2)) { goto L_80100924; } // 80100908
  c->r[3]=0u+0x803D0000u; // 8010090C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100910
  c->r[0]=R16(c->r[3]+0x000004C4u); // 80100914
  c->r[0]=c->r[0]|0x00000008u; // 80100918
  W16(c->r[3]+0x000004C4u,c->r[0]); // 8010091C
  goto L_80100938; // 80100920
L_80100924:;
  c->r[3]=0u+0x803D0000u; // 80100924
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100928
  c->r[0]=R16(c->r[3]+0x000004C4u); // 8010092C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFF7u; // 80100930
  W16(c->r[3]+0x000004C4u,c->r[0]); // 80100934
L_80100938:;
  c->lr=0x8010093Cu; f_80105F14(c); // 80100938
  c->r[4]=0u+0x803D0000u; // 8010093C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100940
  c->r[29]=R8(c->r[4]+0x000027BEu); // 80100944
  cmpu(c,0,c->r[29],0x000000FFu); // 80100948
  if (crb(c,2)) { goto L_801009F8; } // 8010094C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80100950
  c->r[3]=0u+0x000000FFu; // 80100954
  c->r[27]=R8(c->r[4]+0x000027BDu); // 80100958
  cmpu(c,0,c->r[0],0x00000003u); // 8010095C
  W8(c->r[4]+0x000027BEu,c->r[3]); // 80100960
  W8(c->r[4]+0x000027BDu,c->r[3]); // 80100964
  if (crb(c,0)) { goto L_8010098C; } // 80100968
  c->r[3]=0u+0x000D0000u; // 8010096C
  c->r[5]=c->r[27]|c->r[27]; // 80100970
  c->r[7]=c->r[29]|c->r[29]; // 80100974
  c->r[4]=c->r[30]+0x00000000u; // 80100978
  c->r[3]=c->r[3]+0x00000002u; // 8010097C
  c->r[6]=0u+0x000000FFu; // 80100980
  c->r[8]=0u+0x000000FFu; // 80100984
  c->lr=0x8010098Cu; f_800F7300(c); // 80100988
L_8010098C:;
  c->r[3]=0u+0x803D0000u; // 8010098C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100990
  c->r[4]=R8(c->r[3]+0x00000645u); // 80100994
  c->r[0]=rotl(c->r[4],0)&0x00000008u; cr0(c,c->r[0]); // 80100998
  if (!crb(c,2)) { goto L_801009B4; } // 8010099C
  c->r[0]=R8(c->r[3]+0x00000644u); // 801009A0
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801009A4
  if (!crb(c,2)) { goto L_801009B4; } // 801009A8
  c->r[0]=rotl(c->r[4],0)&0x00000010u; cr0(c,c->r[0]); // 801009AC
  if (crb(c,2)) { goto L_801009F8; } // 801009B0
L_801009B4:;
  c->r[3]=0u+0x803D0000u; // 801009B4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801009B8
  c->r[0]=R8(c->r[3]+0x000027BDu); // 801009BC
  cmpu(c,0,c->r[0],c->r[27]); // 801009C0
  if (!crb(c,2)) { goto L_801009D4; } // 801009C4
  c->r[0]=R8(c->r[3]+0x000027BEu); // 801009C8
  cmpu(c,0,c->r[0],c->r[29]); // 801009CC
  if (crb(c,2)) { goto L_801009F8; } // 801009D0
L_801009D4:;
  c->r[3]=c->r[27]|c->r[27]; // 801009D4
  c->r[4]=c->r[29]|c->r[29]; // 801009D8
  c->lr=0x801009E0u; f_8010C314(c); // 801009DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801009E0
  if (crb(c,2)) { goto L_801009F8; } // 801009E4
  c->r[3]=0u+0x803D0000u; // 801009E8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801009EC
  W8(c->r[3]+0x000027BDu,c->r[27]); // 801009F0
  W8(c->r[3]+0x000027BEu,c->r[29]); // 801009F4
L_801009F8:;
  c->r[0]=R8(c->r[31]+0x00000643u); // 801009F8
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801009FC
  if (crb(c,2)) { goto L_80100A0C; } // 80100A00
  c->r[3]=0u+0x00000001u; // 80100A04
  c->lr=0x80100A0Cu; f_80101A90(c); // 80100A08
L_80100A0C:;
  c->r[3]=0u+0x00000001u; // 80100A0C
  c->lr=0x80100A14u; f_801019E0(c); // 80100A10
  c->r[3]=0u+0x00000001u; // 80100A14
  c->lr=0x80100A1Cu; f_80101930(c); // 80100A18
  c->r[3]=0u+0x803D0000u; // 80100A1C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100A20
  c->r[12]=R32(c->r[3]+0x00000568u); // 80100A24
  cmps(c,0,(int32_t)c->r[12],0); // 80100A28
  if (crb(c,2)) { goto L_80100A3C; } // 80100A2C
  c->r[3]=0u+0x00000000u; // 80100A30
  c->ctr=c->r[12]; // 80100A34
  if (true) { c->lr=0x80100A3Cu; dispatch(c,c->ctr); } // 80100A38
L_80100A3C:;
  cmps(c,0,(int32_t)c->r[28],0); // 80100A3C
  if (crb(c,2)) { goto L_80100A54; } // 80100A40
  c->r[12]=c->r[28]|c->r[28]; // 80100A44
  c->r[3]=0u+0x00000000u; // 80100A48
  c->ctr=c->r[12]; // 80100A4C
  if (true) { c->lr=0x80100A54u; dispatch(c,c->ctr); } // 80100A50
L_80100A54:;
  c->r[11]=c->r[1]+0x00000020u; // 80100A54
  c->lr=0x80100A5Cu; f_800ADA78(c); // 80100A58
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100A5C
  c->lr=c->r[0]; // 80100A60
  c->r[1]=c->r[1]+0x00000020u; // 80100A64
  return; // 80100A68
}

// BTM_SetLocalDeviceName
void f_80100A6C(Ctx* __restrict c) {
  trace_call(0x80100A6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100A6C
  c->r[0]=c->lr; // 80100A70
  cmps(c,0,(int32_t)c->r[3],0); // 80100A74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100A78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100A7C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100A80
  W32(c->r[1]+0x00000014u,c->r[29]); // 80100A84
  c->r[29]=c->r[3]|c->r[3]; // 80100A88
  if (!crb(c,2)) { goto L_80100A98; } // 80100A8C
  c->r[3]=0u+0x00000005u; // 80100A90
  goto L_80100B08; // 80100A94
L_80100A98:;
  c->r[30]=0u+0x803D0000u; // 80100A98
  c->r[30]=c->r[30]+0xFFFFA218u; // 80100A9C
  c->r[0]=R8(c->r[30]+0x0000064Eu); // 80100AA0
  cmpu(c,0,c->r[0],0x00000001u); // 80100AA4
  if (crb(c,1)) { goto L_80100AB4; } // 80100AA8
  c->r[3]=0u+0x0000000Cu; // 80100AAC
  goto L_80100B08; // 80100AB0
L_80100AB4:;
  c->r[3]=0u+0x00000002u; // 80100AB4
  c->lr=0x80100ABCu; f_800F46D0(c); // 80100AB8
  cmps(c,0,(int32_t)c->r[3],0); // 80100ABC
  c->r[31]=c->r[3]|c->r[3]; // 80100AC0
  if (crb(c,2)) { goto L_80100B04; } // 80100AC4
  cmpu(c,0,c->r[30],c->r[29]); // 80100AC8
  if (crb(c,2)) { goto L_80100AF0; } // 80100ACC
  c->r[3]=c->r[30]|c->r[30]; // 80100AD0
  c->r[4]=0u+0x00000000u; // 80100AD4
  c->r[5]=0u+0x00000020u; // 80100AD8
  c->lr=0x80100AE0u; f_80004714(c); // 80100ADC
  c->r[3]=c->r[30]|c->r[30]; // 80100AE0
  c->r[4]=c->r[29]|c->r[29]; // 80100AE4
  c->r[5]=0u+0x0000001Fu; // 80100AE8
  c->lr=0x80100AF0u; f_800B788C(c); // 80100AEC
L_80100AF0:;
  c->r[3]=c->r[31]|c->r[31]; // 80100AF0
  c->r[4]=c->r[30]|c->r[30]; // 80100AF4
  c->lr=0x80100AFCu; f_8010BB7C(c); // 80100AF8
  c->r[3]=0u+0x00000001u; // 80100AFC
  goto L_80100B08; // 80100B00
L_80100B04:;
  c->r[3]=0u+0x00000003u; // 80100B04
L_80100B08:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100B08
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100B0C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80100B10
  c->r[29]=R32(c->r[1]+0x00000014u); // 80100B14
  c->lr=c->r[0]; // 80100B18
  c->r[1]=c->r[1]+0x00000020u; // 80100B1C
  return; // 80100B20
}

// btm_read_local_name_complete
void f_80100B24(Ctx* __restrict c) {
  trace_call(0x80100B24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100B24
  c->r[0]=c->lr; // 80100B28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100B2C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100B30
  c->r[31]=0u+0x803D0000u; // 80100B34
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100B38
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100B3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80100B40
  c->r[29]=c->r[3]|c->r[3]; // 80100B44
  c->r[3]=c->r[31]+0x00000590u; // 80100B48
  c->r[30]=R32(c->r[31]+0x000005A8u); // 80100B4C
  c->lr=0x80100B54u; f_800F7900(c); // 80100B50
  c->r[0]=0u+0x00000000u; // 80100B54
  cmps(c,0,(int32_t)c->r[30],0); // 80100B58
  W32(c->r[31]+0x000005A8u,c->r[0]); // 80100B5C
  if (crb(c,2)) { goto L_80100B94; } // 80100B60
  c->r[0]=R8(c->r[29]+0x00000000u); // 80100B64
  cmps(c,0,(int32_t)c->r[0],0); // 80100B68
  if (!crb(c,2)) { goto L_80100B84; } // 80100B6C
  c->r[12]=c->r[30]|c->r[30]; // 80100B70
  c->r[3]=c->r[29]+0x00000001u; // 80100B74
  c->ctr=c->r[12]; // 80100B78
  if (true) { c->lr=0x80100B80u; dispatch(c,c->ctr); } // 80100B7C
  goto L_80100B94; // 80100B80
L_80100B84:;
  c->r[12]=c->r[30]|c->r[30]; // 80100B84
  c->r[3]=0u+0x00000000u; // 80100B88
  c->ctr=c->r[12]; // 80100B8C
  if (true) { c->lr=0x80100B94u; dispatch(c,c->ctr); } // 80100B90
L_80100B94:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100B94
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100B98
  c->r[30]=R32(c->r[1]+0x00000018u); // 80100B9C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80100BA0
  c->lr=c->r[0]; // 80100BA4
  c->r[1]=c->r[1]+0x00000020u; // 80100BA8
  return; // 80100BAC
}

// BTM_ReadLocalDeviceAddr
void f_80100BB0(Ctx* __restrict c) {
  trace_call(0x80100BB0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100BB0
  c->r[0]=c->lr; // 80100BB4
  cmps(c,0,(int32_t)c->r[3],0); // 80100BB8
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100BBC
  if (crb(c,2)) { goto L_80100BDC; } // 80100BC0
  c->r[4]=0u+0x803D0000u; // 80100BC4
  c->r[12]=c->r[3]|c->r[3]; // 80100BC8
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100BCC
  c->r[3]=c->r[4]+0x00000630u; // 80100BD0
  c->ctr=c->r[12]; // 80100BD4
  if (true) { c->lr=0x80100BDCu; dispatch(c,c->ctr); } // 80100BD8
L_80100BDC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100BDC
  c->r[3]=0u+0x00000000u; // 80100BE0
  c->lr=c->r[0]; // 80100BE4
  c->r[1]=c->r[1]+0x00000010u; // 80100BE8
  return; // 80100BEC
}

// btm_read_local_addr_complete
void f_80100BF0(Ctx* __restrict c) {
  trace_call(0x80100BF0u);
  c->r[0]=R8(c->r[3]+0x00000000u); // 80100BF0
  cmps(c,0,(int32_t)c->r[0],0); // 80100BF4
  if (!crb(c,2)) return; // 80100BF8
  c->r[4]=0u+0x803D0000u; // 80100BFC
  c->r[0]=R8(c->r[3]+0x00000001u); // 80100C00
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100C04
  W8(c->r[4]+0x00000635u,c->r[0]); // 80100C08
  c->r[0]=R8(c->r[3]+0x00000002u); // 80100C0C
  W8(c->r[4]+0x00000634u,c->r[0]); // 80100C10
  c->r[0]=R8(c->r[3]+0x00000003u); // 80100C14
  W8(c->r[4]+0x00000633u,c->r[0]); // 80100C18
  c->r[0]=R8(c->r[3]+0x00000004u); // 80100C1C
  W8(c->r[4]+0x00000632u,c->r[0]); // 80100C20
  c->r[0]=R8(c->r[3]+0x00000005u); // 80100C24
  W8(c->r[4]+0x00000631u,c->r[0]); // 80100C28
  c->r[0]=R8(c->r[3]+0x00000006u); // 80100C2C
  W8(c->r[4]+0x00000630u,c->r[0]); // 80100C30
  return; // 80100C34
}

// BTM_ReadLocalVersion
void f_80100C38(Ctx* __restrict c) {
  trace_call(0x80100C38u);
  c->r[5]=0u+0x803D0000u; // 80100C38
  c->r[5]=c->r[5]+0xFFFFA218u; // 80100C3C
  c->r[0]=R8(c->r[5]+0x0000064Eu); // 80100C40
  cmpu(c,0,c->r[0],0x00000004u); // 80100C44
  if (!crb(c,0)) { goto L_80100C54; } // 80100C48
  c->r[3]=0u+0x0000000Cu; // 80100C4C
  return; // 80100C50
L_80100C54:;
  c->r[4]=R16(c->r[5]+0x00000636u); // 80100C54
  c->r[0]=R16(c->r[5]+0x00000638u); // 80100C58
  W16(c->r[3]+0x00000000u,c->r[4]); // 80100C5C
  W16(c->r[3]+0x00000002u,c->r[0]); // 80100C60
  c->r[4]=R16(c->r[5]+0x0000063Au); // 80100C64
  c->r[0]=R16(c->r[5]+0x0000063Cu); // 80100C68
  W16(c->r[3]+0x00000004u,c->r[4]); // 80100C6C
  W16(c->r[3]+0x00000006u,c->r[0]); // 80100C70
  c->r[0]=R16(c->r[5]+0x0000063Eu); // 80100C74
  W16(c->r[3]+0x00000008u,c->r[0]); // 80100C78
  c->r[3]=0u+0x00000000u; // 80100C7C
  return; // 80100C80
}

// BTM_SetDeviceClass
void f_80100C84(Ctx* __restrict c) {
  trace_call(0x80100C84u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100C84
  c->r[0]=c->lr; // 80100C88
  c->r[5]=0u+0x00000003u; // 80100C8C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100C90
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100C94
  c->r[31]=0u+0x803D0000u; // 80100C98
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100C9C
  W32(c->r[1]+0x00000008u,c->r[30]); // 80100CA0
  c->r[30]=c->r[3]|c->r[3]; // 80100CA4
  c->r[4]=c->r[30]|c->r[30]; // 80100CA8
  c->r[3]=c->r[31]+0x00000648u; // 80100CAC
  c->lr=0x80100CB4u; f_800043C4(c); // 80100CB0
  c->r[0]=R8(c->r[31]+0x0000064Eu); // 80100CB4
  cmpu(c,0,c->r[0],0x00000001u); // 80100CB8
  if (crb(c,1)) { goto L_80100CC8; } // 80100CBC
  c->r[3]=0u+0x0000000Cu; // 80100CC0
  goto L_80100CEC; // 80100CC4
L_80100CC8:;
  c->r[3]=0u+0x00000002u; // 80100CC8
  c->lr=0x80100CD0u; f_800F46D0(c); // 80100CCC
  cmps(c,0,(int32_t)c->r[3],0); // 80100CD0
  if (crb(c,2)) { goto L_80100CE8; } // 80100CD4
  c->r[4]=c->r[30]|c->r[30]; // 80100CD8
  c->lr=0x80100CE0u; f_8010BE94(c); // 80100CDC
  c->r[3]=0u+0x00000000u; // 80100CE0
  goto L_80100CEC; // 80100CE4
L_80100CE8:;
  c->r[3]=0u+0x00000003u; // 80100CE8
L_80100CEC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80100CEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80100CF0
  c->r[30]=R32(c->r[1]+0x00000008u); // 80100CF4
  c->lr=c->r[0]; // 80100CF8
  c->r[1]=c->r[1]+0x00000010u; // 80100CFC
  return; // 80100D00
}

// BTM_ReadDeviceClass
void f_80100D04(Ctx* __restrict c) {
  trace_call(0x80100D04u);
  c->r[3]=0u+0x803D0000u; // 80100D04
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100D08
  c->r[3]=c->r[3]+0x00000648u; // 80100D0C
  return; // 80100D10
}

// BTM_ReadLocalFeatures
void f_80100D14(Ctx* __restrict c) {
  trace_call(0x80100D14u);
  c->r[3]=0u+0x803D0000u; // 80100D14
  c->r[3]=c->r[3]+0xFFFFA218u; // 80100D18
  c->r[3]=c->r[3]+0x00000640u; // 80100D1C
  return; // 80100D20
}

// BTM_RegisterForDeviceStatusNotif
void f_80100D24(Ctx* __restrict c) {
  trace_call(0x80100D24u);
  c->r[4]=0u+0x803D0000u; // 80100D24
  c->r[0]=c->r[3]|c->r[3]; // 80100D28
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100D2C
  c->r[3]=R32(c->r[4]+0x00000568u); // 80100D30
  W32(c->r[4]+0x00000568u,c->r[0]); // 80100D34
  return; // 80100D38
}

// BTM_VendorSpecificCommand
void f_80100D3C(Ctx* __restrict c) {
  trace_call(0x80100D3Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100D3C
  c->r[0]=c->lr; // 80100D40
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100D44
  c->r[11]=c->r[1]+0x00000020u; // 80100D48
  c->lr=0x80100D50u; f_800ADA2C(c); // 80100D4C
  c->r[7]=0u+0x803D0000u; // 80100D50
  c->r[27]=c->r[3]|c->r[3]; // 80100D54
  c->r[7]=c->r[7]+0xFFFFA218u; // 80100D58
  c->r[28]=c->r[4]|c->r[4]; // 80100D5C
  c->r[0]=R8(c->r[7]+0x000027C0u); // 80100D60
  c->r[29]=c->r[5]|c->r[5]; // 80100D64
  c->r[30]=c->r[6]|c->r[6]; // 80100D68
  cmpu(c,0,c->r[0],0x00000004u); // 80100D6C
  if (crb(c,0)) { goto L_80100D90; } // 80100D70
  c->r[3]=0u+0x000D0000u; // 80100D74
  c->r[4]=0u+0x80330000u; // 80100D78
  c->r[5]=c->r[27]|c->r[27]; // 80100D7C
  c->r[6]=c->r[28]|c->r[28]; // 80100D80
  c->r[3]=c->r[3]+0x00000003u; // 80100D84
  c->r[4]=c->r[4]+0xFFFFAE9Cu; // 80100D88
  c->lr=0x80100D90u; f_800F72C0(c); // 80100D8C
L_80100D90:;
  c->r[31]=0u+0x803D0000u; // 80100D90
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100D94
  c->r[0]=R8(c->r[31]+0x00000650u); // 80100D98
  cmps(c,0,(int32_t)c->r[0],0); // 80100D9C
  if (crb(c,2)) { goto L_80100DCC; } // 80100DA0
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80100DA4
  cmpu(c,0,c->r[0],0x00000004u); // 80100DA8
  if (crb(c,0)) { goto L_80100DC4; } // 80100DAC
  c->r[3]=0u+0x000D0000u; // 80100DB0
  c->r[4]=0u+0x80330000u; // 80100DB4
  c->r[3]=c->r[3]+0x00000003u; // 80100DB8
  c->r[4]=c->r[4]+0xFFFFAEDCu; // 80100DBC
  c->lr=0x80100DC4u; f_800F7280(c); // 80100DC0
L_80100DC4:;
  c->r[3]=0u+0x00000002u; // 80100DC4
  goto L_80100E20; // 80100DC8
L_80100DCC:;
  c->r[0]=c->r[28]+0x0000000Bu; // 80100DCC
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80100DD0
  c->lr=0x80100DD8u; f_800F4530(c); // 80100DD4
  cmps(c,0,(int32_t)c->r[3],0); // 80100DD8
  if (crb(c,2)) { goto L_80100E1C; } // 80100DDC
  cmps(c,0,(int32_t)c->r[30],0); // 80100DE0
  W32(c->r[31]+0x0000061Cu,c->r[30]); // 80100DE4
  if (crb(c,2)) { goto L_80100DF4; } // 80100DE8
  c->r[0]=0u+0x00000001u; // 80100DEC
  W8(c->r[31]+0x00000650u,c->r[0]); // 80100DF0
L_80100DF4:;
  c->r[4]=c->r[27]|c->r[27]; // 80100DF4
  c->r[5]=c->r[28]|c->r[28]; // 80100DF8
  c->r[6]=c->r[29]|c->r[29]; // 80100DFC
  c->lr=0x80100E04u; f_8010C7C4(c); // 80100E00
  cmps(c,0,(int32_t)c->r[30],0); // 80100E04
  if (crb(c,2)) { goto L_80100E14; } // 80100E08
  c->r[3]=0u+0x00000001u; // 80100E0C
  goto L_80100E20; // 80100E10
L_80100E14:;
  c->r[3]=0u+0x00000000u; // 80100E14
  goto L_80100E20; // 80100E18
L_80100E1C:;
  c->r[3]=0u+0x00000003u; // 80100E1C
L_80100E20:;
  c->r[11]=c->r[1]+0x00000020u; // 80100E20
  c->lr=0x80100E28u; f_800ADA78(c); // 80100E24
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100E28
  c->lr=c->r[0]; // 80100E2C
  c->r[1]=c->r[1]+0x00000020u; // 80100E30
  return; // 80100E34
}

// btm_vsc_complete
void f_80100E38(Ctx* __restrict c) {
  trace_call(0x80100E38u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100E38
  c->r[0]=c->lr; // 80100E3C
  c->r[6]=0u+0x803D0000u; // 80100E40
  c->r[7]=c->r[3]|c->r[3]; // 80100E44
  W32(c->r[1]+0x00000124u,c->r[0]); // 80100E48
  c->r[6]=c->r[6]+0xFFFFA218u; // 80100E4C
  c->r[0]=0u+0x00000000u; // 80100E50
  c->r[3]=c->r[1]+0x0000000Cu; // 80100E54
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 80100E58
  c->r[31]=R32(c->r[6]+0x0000061Cu); // 80100E5C
  W8(c->r[6]+0x00000650u,c->r[0]); // 80100E60
  cmps(c,0,(int32_t)c->r[31],0); // 80100E64
  W32(c->r[6]+0x0000061Cu,c->r[0]); // 80100E68
  if (crb(c,2)) { goto L_80100E90; } // 80100E6C
  W16(c->r[1]+0x00000008u,c->r[4]); // 80100E70
  c->r[4]=c->r[7]|c->r[7]; // 80100E74
  W16(c->r[1]+0x0000000Au,c->r[5]); // 80100E78
  c->lr=0x80100E80u; f_800043C4(c); // 80100E7C
  c->r[12]=c->r[31]|c->r[31]; // 80100E80
  c->r[3]=c->r[1]+0x00000008u; // 80100E84
  c->ctr=c->r[12]; // 80100E88
  if (true) { c->lr=0x80100E90u; dispatch(c,c->ctr); } // 80100E8C
L_80100E90:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 80100E90
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80100E94
  c->lr=c->r[0]; // 80100E98
  c->r[1]=c->r[1]+0x00000120u; // 80100E9C
  return; // 80100EA0
}

// BTM_RegisterForVSEvents
void f_80100EA4(Ctx* __restrict c) {
  trace_call(0x80100EA4u);
  c->r[4]=0u+0x803D0000u; // 80100EA4
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100EA8
  c->r[0]=R32(c->r[4]+0x0000056Cu); // 80100EAC
  cmps(c,0,(int32_t)c->r[0],0); // 80100EB0
  if (crb(c,2)) { goto L_80100EC8; } // 80100EB4
  cmps(c,0,(int32_t)c->r[3],0); // 80100EB8
  if (crb(c,2)) { goto L_80100EC8; } // 80100EBC
  c->r[3]=0u+0x00000002u; // 80100EC0
  return; // 80100EC4
L_80100EC8:;
  c->r[4]=0u+0x803D0000u; // 80100EC8
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100ECC
  W32(c->r[4]+0x0000056Cu,c->r[3]); // 80100ED0
  c->r[3]=0u+0x00000000u; // 80100ED4
  return; // 80100ED8
}

// btm_vendor_specific_evt
void f_80100EDC(Ctx* __restrict c) {
  trace_call(0x80100EDCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100EDC
  c->r[0]=c->lr; // 80100EE0
  W32(c->r[1]+0x00000024u,c->r[0]); // 80100EE4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80100EE8
  c->r[31]=0u+0x803D0000u; // 80100EEC
  c->r[31]=c->r[31]+0xFFFFA218u; // 80100EF0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80100EF4
  c->r[30]=c->r[4]|c->r[4]; // 80100EF8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80100EFC
  c->r[29]=c->r[3]|c->r[3]; // 80100F00
  c->r[0]=R16(c->r[31]+0x0000063Cu); // 80100F04
  cmpu(c,0,c->r[0],0x00000012u); // 80100F08
  if (crb(c,2)) { goto L_80100F30; } // 80100F0C
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80100F10
  cmpu(c,0,c->r[0],0x00000004u); // 80100F14
  if (crb(c,0)) { goto L_80100F30; } // 80100F18
  c->r[3]=0u+0x000D0000u; // 80100F1C
  c->r[4]=0u+0x80330000u; // 80100F20
  c->r[3]=c->r[3]+0x00000003u; // 80100F24
  c->r[4]=c->r[4]+0xFFFFAF20u; // 80100F28
  c->lr=0x80100F30u; f_800F7280(c); // 80100F2C
L_80100F30:;
  c->r[12]=R32(c->r[31]+0x0000056Cu); // 80100F30
  c->r[0]=0u+0x00000000u; // 80100F34
  W32(c->r[31]+0x0000061Cu,c->r[0]); // 80100F38
  cmps(c,0,(int32_t)c->r[12],0); // 80100F3C
  W8(c->r[31]+0x00000650u,c->r[0]); // 80100F40
  if (crb(c,2)) { goto L_80100F58; } // 80100F44
  c->r[3]=c->r[30]|c->r[30]; // 80100F48
  c->r[4]=c->r[29]|c->r[29]; // 80100F4C
  c->ctr=c->r[12]; // 80100F50
  if (true) { c->lr=0x80100F58u; dispatch(c,c->ctr); } // 80100F54
L_80100F58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80100F58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80100F5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80100F60
  c->r[29]=R32(c->r[1]+0x00000014u); // 80100F64
  c->lr=c->r[0]; // 80100F68
  c->r[1]=c->r[1]+0x00000020u; // 80100F6C
  return; // 80100F70
}

// BTM_WritePageTimeout
void f_80100F74(Ctx* __restrict c) {
  trace_call(0x80100F74u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80100F74
  c->r[0]=c->lr; // 80100F78
  c->r[4]=0u+0x803D0000u; // 80100F7C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80100F80
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100F84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80100F88
  c->r[31]=c->r[3]|c->r[3]; // 80100F8C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80100F90
  cmpu(c,0,c->r[0],0x00000004u); // 80100F94
  if (crb(c,0)) { goto L_80100FB4; } // 80100F98
  c->r[3]=0u+0x000D0000u; // 80100F9C
  c->r[4]=0u+0x80330000u; // 80100FA0
  c->r[5]=c->r[31]|c->r[31]; // 80100FA4
  c->r[3]=c->r[3]+0x00000003u; // 80100FA8
  c->r[4]=c->r[4]+0xFFFFAF60u; // 80100FAC
  c->lr=0x80100FB4u; f_800F72A0(c); // 80100FB0
L_80100FB4:;
  c->r[0]=(uint32_t)((int32_t)c->r[31]*(int32_t)625); // 80100FB4
  c->r[3]=0u+0x10620000u; // 80100FB8
  c->r[4]=0u+0x803D0000u; // 80100FBC
  c->r[3]=c->r[3]+0x00004DD3u; // 80100FC0
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 80100FC4
  c->r[4]=c->r[4]+0xFFFFA218u; // 80100FC8
  c->r[3]=0u+0x00000002u; // 80100FCC
  c->r[0]=sraw(c,c->r[0],6); // 80100FD0
  c->r[5]=rotl(c->r[0],1)&0x00000001u; // 80100FD4
  c->r[0]=c->r[0]+c->r[5]; // 80100FD8
  W16(c->r[4]+0x0000064Cu,c->r[0]); // 80100FDC
  c->lr=0x80100FE4u; f_800F46D0(c); // 80100FE0
  cmps(c,0,(int32_t)c->r[3],0); // 80100FE4
  if (crb(c,2)) { goto L_80100FFC; } // 80100FE8
  c->r[4]=c->r[31]|c->r[31]; // 80100FEC
  c->lr=0x80100FF4u; f_8010BCBC(c); // 80100FF0
  c->r[3]=0u+0x00000000u; // 80100FF4
  goto L_80101000; // 80100FF8
L_80100FFC:;
  c->r[3]=0u+0x00000003u; // 80100FFC
L_80101000:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101000
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101004
  c->lr=c->r[0]; // 80101008
  c->r[1]=c->r[1]+0x00000010u; // 8010100C
  return; // 80101010
}

// BTM_ReadStoredLinkKey
void f_80101014(Ctx* __restrict c) {
  trace_call(0x80101014u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101014
  c->r[0]=c->lr; // 80101018
  c->r[5]=0u+0x803D0000u; // 8010101C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101020
  c->r[5]=c->r[5]+0xFFFFA218u; // 80101024
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80101028
  c->r[31]=0u+0x00000000u; // 8010102C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80101030
  c->r[30]=c->r[4]|c->r[4]; // 80101034
  W32(c->r[1]+0x00000014u,c->r[29]); // 80101038
  c->r[29]=c->r[3]|c->r[3]; // 8010103C
  c->r[0]=R32(c->r[5]+0x00000570u); // 80101040
  cmps(c,0,(int32_t)c->r[0],0); // 80101044
  if (crb(c,2)) { goto L_80101054; } // 80101048
  c->r[3]=0u+0x00000002u; // 8010104C
  goto L_801010D0; // 80101050
L_80101054:;
  cmps(c,0,(int32_t)c->r[3],0); // 80101054
  if (!crb(c,2)) { goto L_80101064; } // 80101058
  c->r[31]=0u+0x00000001u; // 8010105C
  c->r[29]=c->r[1]+0x00000008u; // 80101060
L_80101064:;
  c->r[3]=0u+0x803D0000u; // 80101064
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101068
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8010106C
  cmpu(c,0,c->r[0],0x00000004u); // 80101070
  if (crb(c,0)) { goto L_8010109C; } // 80101074
  cmps(c,0,(int32_t)c->r[31],0); // 80101078
  c->r[3]=0u+0x000D0000u; // 8010107C
  c->r[4]=0u+0x80330000u; // 80101080
  c->r[5]=c->r[13]+0xFFFF87C4u; // 80101084
  c->r[3]=c->r[3]+0x00000003u; // 80101088
  c->r[4]=c->r[4]+0xFFFFAFD0u; // 8010108C
  if (crb(c,2)) { goto L_80101098; } // 80101090
  c->r[5]=c->r[13]+0xFFFF87BCu; // 80101094
L_80101098:;
  c->lr=0x8010109Cu; f_800F72A0(c); // 80101098
L_8010109C:;
  c->r[3]=0u+0x00000002u; // 8010109C
  c->lr=0x801010A4u; f_800F46D0(c); // 801010A0
  cmps(c,0,(int32_t)c->r[3],0); // 801010A4
  if (crb(c,2)) { goto L_801010CC; } // 801010A8
  c->r[6]=0u+0x803D0000u; // 801010AC
  c->r[4]=c->r[29]|c->r[29]; // 801010B0
  c->r[6]=c->r[6]+0xFFFFA218u; // 801010B4
  c->r[5]=c->r[31]|c->r[31]; // 801010B8
  W32(c->r[6]+0x00000570u,c->r[30]); // 801010BC
  c->lr=0x801010C4u; f_8010B8AC(c); // 801010C0
  c->r[3]=0u+0x00000000u; // 801010C4
  goto L_801010D0; // 801010C8
L_801010CC:;
  c->r[3]=0u+0x00000003u; // 801010CC
L_801010D0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801010D0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801010D4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801010D8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801010DC
  c->lr=c->r[0]; // 801010E0
  c->r[1]=c->r[1]+0x00000020u; // 801010E4
  return; // 801010E8
}

// BTM_WriteStoredLinkKey
void f_801010EC(Ctx* __restrict c) {
  trace_call(0x801010ECu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801010EC
  c->r[0]=c->lr; // 801010F0
  c->r[7]=0u+0x803D0000u; // 801010F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801010F8
  c->r[7]=c->r[7]+0xFFFFA218u; // 801010FC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80101100
  c->r[31]=c->r[6]|c->r[6]; // 80101104
  W32(c->r[1]+0x00000018u,c->r[30]); // 80101108
  c->r[30]=c->r[5]|c->r[5]; // 8010110C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80101110
  c->r[29]=c->r[4]|c->r[4]; // 80101114
  W32(c->r[1]+0x00000010u,c->r[28]); // 80101118
  c->r[28]=c->r[3]|c->r[3]; // 8010111C
  c->r[0]=R32(c->r[7]+0x00000570u); // 80101120
  cmps(c,0,(int32_t)c->r[0],0); // 80101124
  if (crb(c,2)) { goto L_80101134; } // 80101128
  c->r[3]=0u+0x00000002u; // 8010112C
  goto L_8010119C; // 80101130
L_80101134:;
  c->r[0]=R8(c->r[7]+0x000027C0u); // 80101134
  cmpu(c,0,c->r[0],0x00000004u); // 80101138
  if (crb(c,0)) { goto L_80101158; } // 8010113C
  c->r[3]=0u+0x000D0000u; // 80101140
  c->r[4]=0u+0x80330000u; // 80101144
  c->r[5]=c->r[28]|c->r[28]; // 80101148
  c->r[3]=c->r[3]+0x00000003u; // 8010114C
  c->r[4]=c->r[4]+0xFFFFAFFCu; // 80101150
  c->lr=0x80101158u; f_800F72A0(c); // 80101154
L_80101158:;
  cmpu(c,0,c->r[28],0x0000000Bu); // 80101158
  if (!crb(c,1)) { goto L_80101164; } // 8010115C
  c->r[28]=0u+0x0000000Bu; // 80101160
L_80101164:;
  c->r[3]=0u+0x00000002u; // 80101164
  c->lr=0x8010116Cu; f_800F46D0(c); // 80101168
  cmps(c,0,(int32_t)c->r[3],0); // 8010116C
  if (crb(c,2)) { goto L_80101198; } // 80101170
  c->r[6]=0u+0x803D0000u; // 80101174
  c->r[4]=c->r[28]|c->r[28]; // 80101178
  c->r[6]=c->r[6]+0xFFFFA218u; // 8010117C
  c->r[5]=c->r[29]|c->r[29]; // 80101180
  W32(c->r[6]+0x00000570u,c->r[31]); // 80101184
  c->r[6]=c->r[30]|c->r[30]; // 80101188
  c->lr=0x80101190u; f_8010B90C(c); // 8010118C
  c->r[3]=0u+0x00000000u; // 80101190
  goto L_8010119C; // 80101194
L_80101198:;
  c->r[3]=0u+0x00000003u; // 80101198
L_8010119C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010119C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801011A0
  c->r[30]=R32(c->r[1]+0x00000018u); // 801011A4
  c->r[29]=R32(c->r[1]+0x00000014u); // 801011A8
  c->r[28]=R32(c->r[1]+0x00000010u); // 801011AC
  c->lr=c->r[0]; // 801011B0
  c->r[1]=c->r[1]+0x00000020u; // 801011B4
  return; // 801011B8
}

// BTM_DeleteStoredLinkKey
void f_801011BC(Ctx* __restrict c) {
  trace_call(0x801011BCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801011BC
  c->r[0]=c->lr; // 801011C0
  c->r[5]=0u+0x803D0000u; // 801011C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801011C8
  c->r[5]=c->r[5]+0xFFFFA218u; // 801011CC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801011D0
  c->r[31]=0u+0x00000000u; // 801011D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801011D8
  c->r[30]=c->r[4]|c->r[4]; // 801011DC
  W32(c->r[1]+0x00000014u,c->r[29]); // 801011E0
  c->r[29]=c->r[3]|c->r[3]; // 801011E4
  c->r[0]=R32(c->r[5]+0x00000570u); // 801011E8
  cmps(c,0,(int32_t)c->r[0],0); // 801011EC
  if (crb(c,2)) { goto L_801011FC; } // 801011F0
  c->r[3]=0u+0x00000002u; // 801011F4
  goto L_80101270; // 801011F8
L_801011FC:;
  cmps(c,0,(int32_t)c->r[3],0); // 801011FC
  if (!crb(c,2)) { goto L_8010120C; } // 80101200
  c->r[31]=0u+0x00000001u; // 80101204
  c->r[29]=c->r[1]+0x00000008u; // 80101208
L_8010120C:;
  c->r[3]=0u+0x803D0000u; // 8010120C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101210
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80101214
  cmpu(c,0,c->r[0],0x00000004u); // 80101218
  if (crb(c,0)) { goto L_80101244; } // 8010121C
  cmps(c,0,(int32_t)c->r[31],0); // 80101220
  c->r[3]=0u+0x000D0000u; // 80101224
  c->r[4]=0u+0x80330000u; // 80101228
  c->r[5]=c->r[13]+0xFFFF87C4u; // 8010122C
  c->r[3]=c->r[3]+0x00000003u; // 80101230
  c->r[4]=c->r[4]+0xFFFFB028u; // 80101234
  if (crb(c,2)) { goto L_80101240; } // 80101238
  c->r[5]=c->r[13]+0xFFFF87BCu; // 8010123C
L_80101240:;
  c->lr=0x80101244u; f_800F72A0(c); // 80101240
L_80101244:;
  c->r[5]=0u+0x803D0000u; // 80101244
  c->r[3]=c->r[29]|c->r[29]; // 80101248
  c->r[5]=c->r[5]+0xFFFFA218u; // 8010124C
  c->r[4]=c->r[31]|c->r[31]; // 80101250
  W32(c->r[5]+0x00000570u,c->r[30]); // 80101254
  c->lr=0x8010125Cu; f_8010BACC(c); // 80101258
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010125C
  if (!crb(c,2)) { goto L_8010126C; } // 80101260
  c->r[3]=0u+0x00000003u; // 80101264
  goto L_80101270; // 80101268
L_8010126C:;
  c->r[3]=0u+0x00000000u; // 8010126C
L_80101270:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101270
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80101274
  c->r[30]=R32(c->r[1]+0x00000018u); // 80101278
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010127C
  c->lr=c->r[0]; // 80101280
  c->r[1]=c->r[1]+0x00000020u; // 80101284
  return; // 80101288
}

// btm_read_stored_link_key_complete
void f_8010128C(Ctx* __restrict c) {
  trace_call(0x8010128Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010128C
  c->r[0]=c->lr; // 80101290
  c->r[4]=0u+0x803D0000u; // 80101294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101298
  c->r[4]=c->r[4]+0xFFFFA218u; // 8010129C
  c->r[0]=0u+0x00000000u; // 801012A0
  c->r[12]=R32(c->r[4]+0x00000570u); // 801012A4
  cmps(c,0,(int32_t)c->r[12],0); // 801012A8
  W32(c->r[4]+0x00000570u,c->r[0]); // 801012AC
  if (crb(c,2)) { goto L_801012F8; } // 801012B0
  c->r[0]=0u+0x00000002u; // 801012B4
  W8(c->r[1]+0x00000008u,c->r[0]); // 801012B8
  c->r[0]=R8(c->r[3]+0x00000000u); // 801012BC
  W8(c->r[1]+0x00000009u,c->r[0]); // 801012C0
  c->r[0]=R8(c->r[3]+0x00000002u); // 801012C4
  c->r[4]=R8(c->r[3]+0x00000001u); // 801012C8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801012CC
  c->r[0]=c->r[4]+c->r[0]; // 801012D0
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801012D4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801012D8
  c->r[4]=R8(c->r[3]+0x00000003u); // 801012DC
  c->r[3]=c->r[1]+0x00000008u; // 801012E0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801012E4
  c->r[0]=c->r[4]+c->r[0]; // 801012E8
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 801012EC
  c->ctr=c->r[12]; // 801012F0
  if (true) { c->lr=0x801012F8u; dispatch(c,c->ctr); } // 801012F4
L_801012F8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801012F8
  c->lr=c->r[0]; // 801012FC
  c->r[1]=c->r[1]+0x00000010u; // 80101300
  return; // 80101304
}

// btm_write_stored_link_key_complete
void f_80101308(Ctx* __restrict c) {
  trace_call(0x80101308u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101308
  c->r[0]=c->lr; // 8010130C
  c->r[4]=0u+0x803D0000u; // 80101310
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101314
  c->r[4]=c->r[4]+0xFFFFA218u; // 80101318
  c->r[0]=0u+0x00000000u; // 8010131C
  c->r[12]=R32(c->r[4]+0x00000570u); // 80101320
  cmps(c,0,(int32_t)c->r[12],0); // 80101324
  W32(c->r[4]+0x00000570u,c->r[0]); // 80101328
  if (crb(c,2)) { goto L_80101354; } // 8010132C
  c->r[0]=0u+0x00000003u; // 80101330
  W8(c->r[1]+0x00000008u,c->r[0]); // 80101334
  c->r[0]=R8(c->r[3]+0x00000000u); // 80101338
  W8(c->r[1]+0x00000009u,c->r[0]); // 8010133C
  c->r[0]=R8(c->r[3]+0x00000001u); // 80101340
  c->r[3]=c->r[1]+0x00000008u; // 80101344
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80101348
  c->ctr=c->r[12]; // 8010134C
  if (true) { c->lr=0x80101354u; dispatch(c,c->ctr); } // 80101350
L_80101354:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101354
  c->lr=c->r[0]; // 80101358
  c->r[1]=c->r[1]+0x00000010u; // 8010135C
  return; // 80101360
}

// btm_delete_stored_link_key_complete
void f_80101364(Ctx* __restrict c) {
  trace_call(0x80101364u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101364
  c->r[0]=c->lr; // 80101368
  c->r[4]=0u+0x803D0000u; // 8010136C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101370
  c->r[4]=c->r[4]+0xFFFFA218u; // 80101374
  c->r[0]=0u+0x00000000u; // 80101378
  c->r[12]=R32(c->r[4]+0x00000570u); // 8010137C
  cmps(c,0,(int32_t)c->r[12],0); // 80101380
  W32(c->r[4]+0x00000570u,c->r[0]); // 80101384
  if (crb(c,2)) { goto L_801013BC; } // 80101388
  c->r[0]=0u+0x00000004u; // 8010138C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80101390
  c->r[0]=R8(c->r[3]+0x00000000u); // 80101394
  W8(c->r[1]+0x00000009u,c->r[0]); // 80101398
  c->r[0]=R8(c->r[3]+0x00000002u); // 8010139C
  c->r[4]=R8(c->r[3]+0x00000001u); // 801013A0
  c->r[3]=c->r[1]+0x00000008u; // 801013A4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801013A8
  c->r[0]=c->r[4]+c->r[0]; // 801013AC
  W16(c->r[1]+0x0000000Au,c->r[0]); // 801013B0
  c->ctr=c->r[12]; // 801013B4
  if (true) { c->lr=0x801013BCu; dispatch(c,c->ctr); } // 801013B8
L_801013BC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801013BC
  c->lr=c->r[0]; // 801013C0
  c->r[1]=c->r[1]+0x00000010u; // 801013C4
  return; // 801013C8
}

// btm_return_link_keys_evt
void f_801013CC(Ctx* __restrict c) {
  trace_call(0x801013CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801013CC
  c->r[0]=c->lr; // 801013D0
  c->r[4]=0u+0x803D0000u; // 801013D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801013D8
  c->r[4]=c->r[4]+0xFFFFA218u; // 801013DC
  c->r[12]=R32(c->r[4]+0x00000570u); // 801013E0
  cmps(c,0,(int32_t)c->r[12],0); // 801013E4
  if (crb(c,2)) { goto L_80101548; } // 801013E8
  c->r[5]=c->r[3]+0x00000002u; // 801013EC
  c->r[4]=0u+0x00000000u; // 801013F0
  goto L_80101530; // 801013F4
L_801013F8:;
  c->r[11]=R8(c->r[5]+0x00000000u); // 801013F8
  c->r[4]=c->r[4]+0x00000001u; // 801013FC
  c->r[10]=R8(c->r[5]+0x00000001u); // 80101400
  c->r[9]=R8(c->r[5]+0x00000002u); // 80101404
  c->r[8]=R8(c->r[5]+0x00000003u); // 80101408
  c->r[7]=R8(c->r[5]+0x00000004u); // 8010140C
  c->r[6]=R8(c->r[5]+0x00000005u); // 80101410
  c->r[0]=R8(c->r[5]+0x00000006u); // 80101414
  W8(c->r[1]+0x00000017u,c->r[0]); // 80101418
  c->r[0]=R8(c->r[5]+0x00000007u); // 8010141C
  W8(c->r[1]+0x00000016u,c->r[0]); // 80101420
  c->r[0]=R8(c->r[5]+0x00000008u); // 80101424
  W8(c->r[1]+0x00000015u,c->r[0]); // 80101428
  c->r[0]=R8(c->r[5]+0x00000009u); // 8010142C
  W8(c->r[1]+0x00000014u,c->r[0]); // 80101430
  c->r[0]=R8(c->r[5]+0x0000000Au); // 80101434
  W8(c->r[1]+0x00000013u,c->r[0]); // 80101438
  c->r[0]=R8(c->r[5]+0x0000000Bu); // 8010143C
  W8(c->r[1]+0x00000012u,c->r[0]); // 80101440
  c->r[0]=R8(c->r[5]+0x0000000Cu); // 80101444
  W8(c->r[1]+0x00000011u,c->r[0]); // 80101448
  c->r[0]=R8(c->r[5]+0x0000000Du); // 8010144C
  W8(c->r[1]+0x00000010u,c->r[0]); // 80101450
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 80101454
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80101458
  c->r[0]=R8(c->r[5]+0x0000000Fu); // 8010145C
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80101460
  c->r[0]=R8(c->r[5]+0x00000010u); // 80101464
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80101468
  c->r[0]=R8(c->r[5]+0x00000011u); // 8010146C
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80101470
  c->r[0]=R8(c->r[5]+0x00000012u); // 80101474
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80101478
  c->r[0]=R8(c->r[5]+0x00000013u); // 8010147C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80101480
  c->r[0]=R8(c->r[5]+0x00000014u); // 80101484
  W8(c->r[1]+0x00000009u,c->r[0]); // 80101488
  c->r[0]=R8(c->r[5]+0x00000015u); // 8010148C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80101490
  W8(c->r[5]+0x00000000u,c->r[6]); // 80101494
  W8(c->r[5]+0x00000001u,c->r[7]); // 80101498
  W8(c->r[5]+0x00000002u,c->r[8]); // 8010149C
  W8(c->r[5]+0x00000003u,c->r[9]); // 801014A0
  W8(c->r[5]+0x00000004u,c->r[10]); // 801014A4
  W8(c->r[5]+0x00000005u,c->r[11]); // 801014A8
  c->r[0]=R8(c->r[1]+0x00000008u); // 801014AC
  W8(c->r[5]+0x00000006u,c->r[0]); // 801014B0
  c->r[0]=R8(c->r[1]+0x00000009u); // 801014B4
  W8(c->r[5]+0x00000007u,c->r[0]); // 801014B8
  c->r[0]=R8(c->r[1]+0x0000000Au); // 801014BC
  W8(c->r[5]+0x00000008u,c->r[0]); // 801014C0
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 801014C4
  W8(c->r[5]+0x00000009u,c->r[0]); // 801014C8
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 801014CC
  W8(c->r[5]+0x0000000Au,c->r[0]); // 801014D0
  c->r[0]=R8(c->r[1]+0x0000000Du); // 801014D4
  W8(c->r[5]+0x0000000Bu,c->r[0]); // 801014D8
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 801014DC
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 801014E0
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 801014E4
  W8(c->r[5]+0x0000000Du,c->r[0]); // 801014E8
  c->r[0]=R8(c->r[1]+0x00000010u); // 801014EC
  W8(c->r[5]+0x0000000Eu,c->r[0]); // 801014F0
  c->r[0]=R8(c->r[1]+0x00000011u); // 801014F4
  W8(c->r[5]+0x0000000Fu,c->r[0]); // 801014F8
  c->r[0]=R8(c->r[1]+0x00000012u); // 801014FC
  W8(c->r[5]+0x00000010u,c->r[0]); // 80101500
  c->r[0]=R8(c->r[1]+0x00000013u); // 80101504
  W8(c->r[5]+0x00000011u,c->r[0]); // 80101508
  c->r[0]=R8(c->r[1]+0x00000014u); // 8010150C
  W8(c->r[5]+0x00000012u,c->r[0]); // 80101510
  c->r[0]=R8(c->r[1]+0x00000015u); // 80101514
  W8(c->r[5]+0x00000013u,c->r[0]); // 80101518
  c->r[0]=R8(c->r[1]+0x00000016u); // 8010151C
  W8(c->r[5]+0x00000014u,c->r[0]); // 80101520
  c->r[0]=R8(c->r[1]+0x00000017u); // 80101524
  W8(c->r[5]+0x00000015u,c->r[0]); // 80101528
  c->r[5]=c->r[5]+0x00000016u; // 8010152C
L_80101530:;
  c->r[0]=R8(c->r[3]+0x00000001u); // 80101530
  c->r[6]=rotl(c->r[4],0)&0x000000FFu; // 80101534
  cmpu(c,0,c->r[6],c->r[0]); // 80101538
  if (crb(c,0)) { IRQCHK(c); goto L_801013F8; } // 8010153C
  c->ctr=c->r[12]; // 80101540
  if (true) { c->lr=0x80101548u; dispatch(c,c->ctr); } // 80101544
L_80101548:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101548
  c->lr=c->r[0]; // 8010154C
  c->r[1]=c->r[1]+0x00000020u; // 80101550
  return; // 80101554
}

// btm_report_device_status
void f_80101558(Ctx* __restrict c) {
  trace_call(0x80101558u);
  c->r[4]=0u+0x803D0000u; // 80101558
  c->r[4]=c->r[4]+0xFFFFA218u; // 8010155C
  c->r[12]=R32(c->r[4]+0x00000568u); // 80101560
  cmps(c,0,(int32_t)c->r[12],0); // 80101564
  if (crb(c,2)) return; // 80101568
  c->ctr=c->r[12]; // 8010156C
  if (true) { dispatch(c,c->ctr); return; } // 80101570
  return; // 80101574
}

// btm_discovery_db_init
void f_80101578(Ctx* __restrict c) {
  trace_call(0x80101578u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101578
  c->r[0]=c->lr; // 8010157C
  c->r[4]=0u+0x00000000u; // 80101580
  c->r[5]=0u+0x00001020u; // 80101584
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101588
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010158C
  c->r[31]=0u+0x803D0000u; // 80101590
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101594
  c->r[0]=c->r[31]+0x000006D4u; // 80101598
  W32(c->r[31]+0x00001678u,c->r[0]); // 8010159C
  c->r[3]=c->r[31]+0x00000658u; // 801015A0
  c->lr=0x801015A8u; f_80004714(c); // 801015A4
  c->r[3]=0u+0x00000001u; // 801015A8
  c->r[4]=0u+0x00000002u; // 801015AC
  c->r[0]=0u+0x00001002u; // 801015B0
  W16(c->r[31]+0x00000670u,c->r[3]); // 801015B4
  c->r[3]=R32(c->r[31]+0x00001678u); // 801015B8
  c->r[6]=c->r[31]+0x00000674u; // 801015BC
  W16(c->r[31]+0x00000674u,c->r[4]); // 801015C0
  c->r[4]=0u+0x00000FA0u; // 801015C4
  c->r[5]=0u+0x00000001u; // 801015C8
  c->r[7]=0u+0x00000000u; // 801015CC
  W16(c->r[31]+0x00000678u,c->r[0]); // 801015D0
  c->r[8]=0u+0x00000000u; // 801015D4
  c->lr=0x801015DCu; f_8011C19C(c); // 801015D8
  c->r[0]=R32(c->r[1]+0x00000014u); // 801015DC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801015E0
  c->lr=c->r[0]; // 801015E4
  c->r[1]=c->r[1]+0x00000010u; // 801015E8
  return; // 801015EC
}

// btm_discovery_db_reset
void f_801015F0(Ctx* __restrict c) {
  trace_call(0x801015F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801015F0
  c->r[0]=c->lr; // 801015F4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801015F8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801015FC
  c->r[31]=0u+0x803D0000u; // 80101600
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101604
  c->r[3]=c->r[31]+0x00000658u; // 80101608
  c->lr=0x80101610u; f_800F7900(c); // 8010160C
  c->r[0]=R8(c->r[31]+0x00001674u); // 80101610
  cmps(c,0,(int32_t)c->r[0],0); // 80101614
  if (crb(c,2)) { goto L_80101640; } // 80101618
  c->r[12]=R32(c->r[31]+0x000006D0u); // 8010161C
  c->r[0]=0u+0x00000000u; // 80101620
  W8(c->r[31]+0x00001674u,c->r[0]); // 80101624
  cmps(c,0,(int32_t)c->r[12],0); // 80101628
  W32(c->r[31]+0x000006D0u,c->r[0]); // 8010162C
  if (crb(c,2)) { goto L_80101640; } // 80101630
  c->r[3]=0u+0x00000000u; // 80101634
  c->ctr=c->r[12]; // 80101638
  if (true) { c->lr=0x80101640u; dispatch(c,c->ctr); } // 8010163C
L_80101640:;
  c->r[31]=0u+0x803D0000u; // 80101640
  c->r[4]=0u+0x00000000u; // 80101644
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101648
  c->r[5]=0u+0x00001020u; // 8010164C
  c->r[0]=c->r[31]+0x000006D4u; // 80101650
  W32(c->r[31]+0x00001678u,c->r[0]); // 80101654
  c->r[3]=c->r[31]+0x00000658u; // 80101658
  c->lr=0x80101660u; f_80004714(c); // 8010165C
  c->r[3]=0u+0x00000001u; // 80101660
  c->r[4]=0u+0x00000002u; // 80101664
  c->r[0]=0u+0x00001002u; // 80101668
  W16(c->r[31]+0x00000670u,c->r[3]); // 8010166C
  c->r[3]=R32(c->r[31]+0x00001678u); // 80101670
  c->r[6]=c->r[31]+0x00000674u; // 80101674
  W16(c->r[31]+0x00000674u,c->r[4]); // 80101678
  c->r[4]=0u+0x00000FA0u; // 8010167C
  c->r[5]=0u+0x00000001u; // 80101680
  c->r[7]=0u+0x00000000u; // 80101684
  W16(c->r[31]+0x00000678u,c->r[0]); // 80101688
  c->r[8]=0u+0x00000000u; // 8010168C
  c->lr=0x80101694u; f_8011C19C(c); // 80101690
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101694
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101698
  c->lr=c->r[0]; // 8010169C
  c->r[1]=c->r[1]+0x00000010u; // 801016A0
  return; // 801016A4
}

// btm_discovery_timeout
void f_801016A8(Ctx* __restrict c) {
  trace_call(0x801016A8u);
  return; // 801016A8
}

// BTM_SetDiscoverability
void f_801016AC(Ctx* __restrict c) {
  trace_call(0x801016ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801016AC
  c->r[0]=c->lr; // 801016B0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801016B4
  c->r[11]=c->r[1]+0x00000030u; // 801016B8
  c->lr=0x801016C0u; f_800ADA2C(c); // 801016BC
  cmps(c,0,(int32_t)c->r[3],0); // 801016C0
  c->r[31]=c->r[3]|c->r[3]; // 801016C4
  c->r[27]=c->r[4]|c->r[4]; // 801016C8
  c->r[28]=c->r[5]|c->r[5]; // 801016CC
  c->r[30]=0u+0x00000000u; // 801016D0
  if (crb(c,2)) { goto L_801016F0; } // 801016D4
  cmpu(c,0,c->r[3],0x00000001u); // 801016D8
  if (crb(c,2)) { goto L_801016F0; } // 801016DC
  cmpu(c,0,c->r[3],0x00000002u); // 801016E0
  if (crb(c,2)) { goto L_801016F0; } // 801016E4
  c->r[3]=0u+0x00000005u; // 801016E8
  goto L_80101918; // 801016EC
L_801016F0:;
  c->r[3]=0u+0x803D0000u; // 801016F0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801016F4
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 801016F8
  cmpu(c,0,c->r[0],0x00000003u); // 801016FC
  if (!crb(c,0)) { goto L_8010170C; } // 80101700
  c->r[3]=0u+0x0000000Cu; // 80101704
  goto L_80101918; // 80101708
L_8010170C:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010170C
  if (!crb(c,2)) { goto L_80101718; } // 80101710
  c->r[27]=0u+0x00000012u; // 80101714
L_80101718:;
  cmps(c,0,(int32_t)c->r[5],0); // 80101718
  if (!crb(c,2)) { goto L_80101724; } // 8010171C
  c->r[28]=0u+0x00000800u; // 80101720
L_80101724:;
  c->r[3]=0u+0x803D0000u; // 80101724
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101728
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8010172C
  cmpu(c,0,c->r[0],0x00000003u); // 80101730
  if (crb(c,0)) { goto L_80101758; } // 80101734
  c->r[3]=0u+0x000D0000u; // 80101738
  c->r[4]=0u+0x80330000u; // 8010173C
  c->r[5]=c->r[31]|c->r[31]; // 80101740
  c->r[6]=c->r[27]|c->r[27]; // 80101744
  c->r[7]=c->r[28]|c->r[28]; // 80101748
  c->r[3]=c->r[3]+0x00000002u; // 8010174C
  c->r[4]=c->r[4]+0xFFFFB060u; // 80101750
  c->lr=0x80101758u; f_800F72E0(c); // 80101754
L_80101758:;
  cmps(c,0,(int32_t)c->r[31],0); // 80101758
  if (crb(c,2)) { goto L_80101790; } // 8010175C
  cmpu(c,0,c->r[27],0x00000012u); // 80101760
  if (crb(c,0)) { goto L_80101788; } // 80101764
  cmpu(c,0,c->r[27],0x00001000u); // 80101768
  if (crb(c,1)) { goto L_80101788; } // 8010176C
  cmpu(c,0,c->r[28],0x00000012u); // 80101770
  if (crb(c,0)) { goto L_80101788; } // 80101774
  cmpu(c,0,c->r[28],0x00001000u); // 80101778
  if (crb(c,1)) { goto L_80101788; } // 8010177C
  cmpu(c,0,c->r[27],c->r[28]); // 80101780
  if (!crb(c,1)) { goto L_80101790; } // 80101784
L_80101788:;
  c->r[3]=0u+0x00000005u; // 80101788
  goto L_80101918; // 8010178C
L_80101790:;
  cmps(c,0,(int32_t)c->r[31],0); // 80101790
  if (crb(c,2)) { goto L_80101804; } // 80101794
  c->r[3]=0u+0x00000002u; // 80101798
  c->lr=0x801017A0u; f_800F46D0(c); // 8010179C
  cmps(c,0,(int32_t)c->r[3],0); // 801017A0
  c->r[29]=c->r[3]|c->r[3]; // 801017A4
  if (crb(c,2)) { goto L_801017FC; } // 801017A8
  c->r[0]=rotl(c->r[31],0)&0x00000001u; cr0(c,c->r[0]); // 801017AC
  if (crb(c,2)) { goto L_801017E8; } // 801017B0
  c->r[3]=c->r[1]+0x0000000Cu; // 801017B4
  c->r[4]=c->r[2]+0xFFFFB194u; // 801017B8
  c->r[5]=0u+0x00000003u; // 801017BC
  c->lr=0x801017C4u; f_800043C4(c); // 801017C0
  c->r[3]=c->r[1]+0x0000000Fu; // 801017C4
  c->r[4]=c->r[2]+0xFFFFB190u; // 801017C8
  c->r[5]=0u+0x00000003u; // 801017CC
  c->lr=0x801017D4u; f_800043C4(c); // 801017D0
  c->r[3]=c->r[29]|c->r[29]; // 801017D4
  c->r[5]=c->r[1]+0x0000000Cu; // 801017D8
  c->r[4]=0u+0x00000002u; // 801017DC
  c->lr=0x801017E4u; f_8010C06C(c); // 801017E0
  goto L_801017F4; // 801017E4
L_801017E8:;
  c->r[4]=0u+0x00000001u; // 801017E8
  c->r[5]=c->r[2]+0xFFFFB190u; // 801017EC
  c->lr=0x801017F4u; f_8010C06C(c); // 801017F0
L_801017F4:;
  c->r[30]=c->r[30]|0x00000001u; // 801017F4
  goto L_80101804; // 801017F8
L_801017FC:;
  c->r[3]=0u+0x00000003u; // 801017FC
  goto L_80101918; // 80101800
L_80101804:;
  c->r[3]=0u+0x803D0000u; // 80101804
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101808
  c->r[0]=R16(c->r[3]+0x000016A0u); // 8010180C
  cmpu(c,0,c->r[27],c->r[0]); // 80101810
  if (!crb(c,2)) { goto L_80101824; } // 80101814
  c->r[0]=R16(c->r[3]+0x000016A2u); // 80101818
  cmpu(c,0,c->r[28],c->r[0]); // 8010181C
  if (crb(c,2)) { goto L_8010185C; } // 80101820
L_80101824:;
  c->r[3]=0u+0x00000002u; // 80101824
  c->lr=0x8010182Cu; f_800F46D0(c); // 80101828
  cmps(c,0,(int32_t)c->r[3],0); // 8010182C
  if (crb(c,2)) { goto L_80101854; } // 80101830
  c->r[6]=0u+0x803D0000u; // 80101834
  c->r[4]=c->r[28]|c->r[28]; // 80101838
  c->r[6]=c->r[6]+0xFFFFA218u; // 8010183C
  c->r[5]=c->r[27]|c->r[27]; // 80101840
  W16(c->r[6]+0x000016A0u,c->r[27]); // 80101844
  W16(c->r[6]+0x000016A2u,c->r[28]); // 80101848
  c->lr=0x80101850u; f_8010BD68(c); // 8010184C
  goto L_8010185C; // 80101850
L_80101854:;
  c->r[3]=0u+0x00000003u; // 80101854
  goto L_80101918; // 80101858
L_8010185C:;
  c->r[3]=0u+0x00000002u; // 8010185C
  c->lr=0x80101864u; f_800F46D0(c); // 80101860
  cmps(c,0,(int32_t)c->r[3],0); // 80101864
  if (crb(c,2)) { goto L_801018A0; } // 80101868
  c->r[4]=0u+0x803D0000u; // 8010186C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80101870
  c->r[0]=R16(c->r[4]+0x0000169Au); // 80101874
  cmps(c,0,(int32_t)c->r[0],0); // 80101878
  if (crb(c,2)) { goto L_80101888; } // 8010187C
  c->r[0]=c->r[30]|0x00000002u; // 80101880
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 80101884
L_80101888:;
  c->r[5]=0u+0x803D0000u; // 80101888
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 8010188C
  c->r[5]=c->r[5]+0xFFFFA218u; // 80101890
  W16(c->r[5]+0x00001698u,c->r[31]); // 80101894
  c->lr=0x8010189Cu; f_8010BCF4(c); // 80101898
  goto L_801018A8; // 8010189C
L_801018A0:;
  c->r[3]=0u+0x00000003u; // 801018A0
  goto L_80101918; // 801018A4
L_801018A8:;
  c->lr=0x801018ACu; f_80100D04(c); // 801018A8
  c->r[4]=R8(c->r[3]+0x00000000u); // 801018AC
  c->r[6]=rotl(c->r[31],0)&0x00000001u; // 801018B0
  c->r[5]=R8(c->r[3]+0x00000001u); // 801018B4
  c->r[4]=rotl(c->r[4],8)&0x0000FF00u; // 801018B8
  c->r[0]=rotl(c->r[5],0)&0x000000E0u; // 801018BC
  c->r[4]=c->r[4]+c->r[0]; // 801018C0
  c->r[0]=rotl(c->r[4],27)&0x00000001u; // 801018C4
  c->r[0]=c->r[6]^c->r[0]; cr0(c,c->r[0]); // 801018C8
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 801018CC
  if (crb(c,2)) { goto L_80101914; } // 801018D0
  c->r[3]=R8(c->r[3]+0x00000002u); // 801018D4
  cmps(c,0,(int32_t)c->r[6],0); // 801018D8
  c->r[0]=rotl(c->r[4],0)&0xFFFFFFDFu; // 801018DC
  c->r[5]=rotl(c->r[5],0)&0x0000001Fu; // 801018E0
  c->r[6]=rotl(c->r[3],0)&0x000000FCu; // 801018E4
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801018E8
  if (crb(c,2)) { goto L_801018F4; } // 801018EC
  c->r[0]=c->r[4]|0x00000020u; // 801018F0
L_801018F4:;
  c->r[3]=rotl(c->r[0],0)&0x000000E0u; // 801018F4
  c->r[0]=rotl(c->r[0],24)&0x000000FFu; // 801018F8
  c->r[4]=c->r[5]+c->r[3]; // 801018FC
  W8(c->r[1]+0x0000000Au,c->r[6]); // 80101900
  c->r[3]=c->r[1]+0x00000008u; // 80101904
  W8(c->r[1]+0x00000009u,c->r[4]); // 80101908
  W8(c->r[1]+0x00000008u,c->r[0]); // 8010190C
  c->lr=0x80101914u; f_80100C84(c); // 80101910
L_80101914:;
  c->r[3]=0u+0x00000000u; // 80101914
L_80101918:;
  c->r[11]=c->r[1]+0x00000030u; // 80101918
  c->lr=0x80101920u; f_800ADA78(c); // 8010191C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80101920
  c->lr=c->r[0]; // 80101924
  c->r[1]=c->r[1]+0x00000030u; // 80101928
  return; // 8010192C
}

// BTM_SetInquiryScanType
void f_80101930(Ctx* __restrict c) {
  trace_call(0x80101930u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101930
  c->r[0]=c->lr; // 80101934
  cmps(c,0,(int32_t)c->r[3],0); // 80101938
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010193C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101940
  W32(c->r[1]+0x00000008u,c->r[30]); // 80101944
  c->r[30]=c->r[3]|c->r[3]; // 80101948
  if (crb(c,2)) { goto L_80101960; } // 8010194C
  cmpu(c,0,c->r[3],0x00000001u); // 80101950
  if (crb(c,2)) { goto L_80101960; } // 80101954
  c->r[3]=0u+0x00000005u; // 80101958
  goto L_801019C8; // 8010195C
L_80101960:;
  c->r[31]=0u+0x803D0000u; // 80101960
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101964
  c->r[0]=R8(c->r[31]+0x00000643u); // 80101968
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8010196C
  if (!crb(c,2)) { goto L_8010197C; } // 80101970
  c->r[3]=0u+0x00000004u; // 80101974
  goto L_801019C8; // 80101978
L_8010197C:;
  c->r[0]=R16(c->r[31]+0x000016A4u); // 8010197C
  cmpu(c,0,c->r[3],c->r[0]); // 80101980
  if (crb(c,2)) { goto L_801019C4; } // 80101984
  c->lr=0x8010198Cu; f_800FFE84(c); // 80101988
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010198C
  if (crb(c,2)) { goto L_801019BC; } // 80101990
  c->r[3]=0u+0x00000002u; // 80101994
  c->lr=0x8010199Cu; f_800F46D0(c); // 80101998
  cmps(c,0,(int32_t)c->r[3],0); // 8010199C
  if (crb(c,2)) { goto L_801019B4; } // 801019A0
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 801019A4
  c->lr=0x801019ACu; f_8010C734(c); // 801019A8
  W16(c->r[31]+0x000016A4u,c->r[30]); // 801019AC
  goto L_801019C4; // 801019B0
L_801019B4:;
  c->r[3]=0u+0x00000003u; // 801019B4
  goto L_801019C8; // 801019B8
L_801019BC:;
  c->r[3]=0u+0x00000006u; // 801019BC
  goto L_801019C8; // 801019C0
L_801019C4:;
  c->r[3]=0u+0x00000000u; // 801019C4
L_801019C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801019C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801019CC
  c->r[30]=R32(c->r[1]+0x00000008u); // 801019D0
  c->lr=c->r[0]; // 801019D4
  c->r[1]=c->r[1]+0x00000010u; // 801019D8
  return; // 801019DC
}

// BTM_SetPageScanType
void f_801019E0(Ctx* __restrict c) {
  trace_call(0x801019E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801019E0
  c->r[0]=c->lr; // 801019E4
  cmps(c,0,(int32_t)c->r[3],0); // 801019E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 801019EC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801019F0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801019F4
  c->r[30]=c->r[3]|c->r[3]; // 801019F8
  if (crb(c,2)) { goto L_80101A10; } // 801019FC
  cmpu(c,0,c->r[3],0x00000001u); // 80101A00
  if (crb(c,2)) { goto L_80101A10; } // 80101A04
  c->r[3]=0u+0x00000005u; // 80101A08
  goto L_80101A78; // 80101A0C
L_80101A10:;
  c->r[31]=0u+0x803D0000u; // 80101A10
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101A14
  c->r[0]=R8(c->r[31]+0x00000643u); // 80101A18
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80101A1C
  if (!crb(c,2)) { goto L_80101A2C; } // 80101A20
  c->r[3]=0u+0x00000004u; // 80101A24
  goto L_80101A78; // 80101A28
L_80101A2C:;
  c->r[0]=R16(c->r[31]+0x000016A6u); // 80101A2C
  cmpu(c,0,c->r[3],c->r[0]); // 80101A30
  if (crb(c,2)) { goto L_80101A74; } // 80101A34
  c->lr=0x80101A3Cu; f_800FFE84(c); // 80101A38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80101A3C
  if (crb(c,2)) { goto L_80101A6C; } // 80101A40
  c->r[3]=0u+0x00000002u; // 80101A44
  c->lr=0x80101A4Cu; f_800F46D0(c); // 80101A48
  cmps(c,0,(int32_t)c->r[3],0); // 80101A4C
  if (crb(c,2)) { goto L_80101A64; } // 80101A50
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80101A54
  c->lr=0x80101A5Cu; f_8010C794(c); // 80101A58
  W16(c->r[31]+0x000016A6u,c->r[30]); // 80101A5C
  goto L_80101A74; // 80101A60
L_80101A64:;
  c->r[3]=0u+0x00000003u; // 80101A64
  goto L_80101A78; // 80101A68
L_80101A6C:;
  c->r[3]=0u+0x00000006u; // 80101A6C
  goto L_80101A78; // 80101A70
L_80101A74:;
  c->r[3]=0u+0x00000000u; // 80101A74
L_80101A78:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101A78
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101A7C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80101A80
  c->lr=c->r[0]; // 80101A84
  c->r[1]=c->r[1]+0x00000010u; // 80101A88
  return; // 80101A8C
}

// BTM_SetInquiryMode
void f_80101A90(Ctx* __restrict c) {
  trace_call(0x80101A90u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101A90
  c->r[0]=c->lr; // 80101A94
  cmps(c,0,(int32_t)c->r[3],0); // 80101A98
  W32(c->r[1]+0x00000014u,c->r[0]); // 80101A9C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80101AA0
  c->r[31]=c->r[3]|c->r[3]; // 80101AA4
  if (crb(c,2)) { goto L_80101ABC; } // 80101AA8
  cmpu(c,0,c->r[3],0x00000001u); // 80101AAC
  if (crb(c,2)) { goto L_80101ABC; } // 80101AB0
  c->r[3]=0u+0x00000005u; // 80101AB4
  goto L_80101B14; // 80101AB8
L_80101ABC:;
  c->r[3]=0u+0x803D0000u; // 80101ABC
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101AC0
  c->r[0]=R8(c->r[3]+0x00000643u); // 80101AC4
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80101AC8
  if (!crb(c,2)) { goto L_80101AD8; } // 80101ACC
  c->r[3]=0u+0x00000004u; // 80101AD0
  goto L_80101B14; // 80101AD4
L_80101AD8:;
  c->lr=0x80101ADCu; f_800FFE84(c); // 80101AD8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80101ADC
  if (!crb(c,2)) { goto L_80101AEC; } // 80101AE0
  c->r[3]=0u+0x00000006u; // 80101AE4
  goto L_80101B14; // 80101AE8
L_80101AEC:;
  c->r[3]=0u+0x00000002u; // 80101AEC
  c->lr=0x80101AF4u; f_800F46D0(c); // 80101AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80101AF4
  if (crb(c,2)) { goto L_80101B08; } // 80101AF8
  c->r[4]=c->r[31]|c->r[31]; // 80101AFC
  c->lr=0x80101B04u; f_8010C764(c); // 80101B00
  goto L_80101B10; // 80101B04
L_80101B08:;
  c->r[3]=0u+0x00000003u; // 80101B08
  goto L_80101B14; // 80101B0C
L_80101B10:;
  c->r[3]=0u+0x00000000u; // 80101B10
L_80101B14:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80101B14
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80101B18
  c->lr=c->r[0]; // 80101B1C
  c->r[1]=c->r[1]+0x00000010u; // 80101B20
  return; // 80101B24
}

// BTM_SetConnectability
void f_80101B28(Ctx* __restrict c) {
  trace_call(0x80101B28u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101B28
  c->r[0]=c->lr; // 80101B2C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101B30
  c->r[11]=c->r[1]+0x00000020u; // 80101B34
  c->lr=0x80101B3Cu; f_800ADA2C(c); // 80101B38
  cmps(c,0,(int32_t)c->r[3],0); // 80101B3C
  c->r[31]=0u+0x803D0000u; // 80101B40
  c->r[27]=c->r[3]|c->r[3]; // 80101B44
  c->r[28]=c->r[4]|c->r[4]; // 80101B48
  c->r[29]=c->r[5]|c->r[5]; // 80101B4C
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101B50
  c->r[30]=0u+0x00000000u; // 80101B54
  if (crb(c,2)) { goto L_80101B6C; } // 80101B58
  cmpu(c,0,c->r[3],0x00000001u); // 80101B5C
  if (crb(c,2)) { goto L_80101B6C; } // 80101B60
  c->r[3]=0u+0x00000005u; // 80101B64
  goto L_80101C98; // 80101B68
L_80101B6C:;
  c->r[3]=0u+0x803D0000u; // 80101B6C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101B70
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 80101B74
  cmpu(c,0,c->r[0],0x00000003u); // 80101B78
  if (!crb(c,0)) { goto L_80101B88; } // 80101B7C
  c->r[3]=0u+0x0000000Cu; // 80101B80
  goto L_80101C98; // 80101B84
L_80101B88:;
  cmps(c,0,(int32_t)c->r[4],0); // 80101B88
  if (!crb(c,2)) { goto L_80101B94; } // 80101B8C
  c->r[28]=0u+0x00000012u; // 80101B90
L_80101B94:;
  cmps(c,0,(int32_t)c->r[5],0); // 80101B94
  if (!crb(c,2)) { goto L_80101BA0; } // 80101B98
  c->r[29]=0u+0x00000800u; // 80101B9C
L_80101BA0:;
  c->r[3]=0u+0x803D0000u; // 80101BA0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101BA4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80101BA8
  cmpu(c,0,c->r[0],0x00000003u); // 80101BAC
  if (crb(c,0)) { goto L_80101BD4; } // 80101BB0
  c->r[3]=0u+0x000D0000u; // 80101BB4
  c->r[4]=0u+0x80330000u; // 80101BB8
  c->r[5]=c->r[27]|c->r[27]; // 80101BBC
  c->r[6]=c->r[28]|c->r[28]; // 80101BC0
  c->r[7]=c->r[29]|c->r[29]; // 80101BC4
  c->r[3]=c->r[3]+0x00000002u; // 80101BC8
  c->r[4]=c->r[4]+0xFFFFB0BCu; // 80101BCC
  c->lr=0x80101BD4u; f_800F72E0(c); // 80101BD0
L_80101BD4:;
  cmpu(c,0,c->r[27],0x00000001u); // 80101BD4
  if (!crb(c,2)) { goto L_80101C10; } // 80101BD8
  cmpu(c,0,c->r[28],0x00000012u); // 80101BDC
  if (crb(c,0)) { goto L_80101C04; } // 80101BE0
  cmpu(c,0,c->r[28],0x00001000u); // 80101BE4
  if (crb(c,1)) { goto L_80101C04; } // 80101BE8
  cmpu(c,0,c->r[29],0x00000012u); // 80101BEC
  if (crb(c,0)) { goto L_80101C04; } // 80101BF0
  cmpu(c,0,c->r[29],0x00001000u); // 80101BF4
  if (crb(c,1)) { goto L_80101C04; } // 80101BF8
  cmpu(c,0,c->r[28],c->r[29]); // 80101BFC
  if (!crb(c,1)) { goto L_80101C0C; } // 80101C00
L_80101C04:;
  c->r[3]=0u+0x00000005u; // 80101C04
  goto L_80101C98; // 80101C08
L_80101C0C:;
  c->r[30]=c->r[30]|0x00000002u; // 80101C0C
L_80101C10:;
  c->r[0]=R16(c->r[31]+0x0000169Cu); // 80101C10
  cmpu(c,0,c->r[28],c->r[0]); // 80101C14
  if (!crb(c,2)) { goto L_80101C28; } // 80101C18
  c->r[0]=R16(c->r[31]+0x0000169Eu); // 80101C1C
  cmpu(c,0,c->r[29],c->r[0]); // 80101C20
  if (crb(c,2)) { goto L_80101C58; } // 80101C24
L_80101C28:;
  c->r[3]=0u+0x00000002u; // 80101C28
  c->lr=0x80101C30u; f_800F46D0(c); // 80101C2C
  cmps(c,0,(int32_t)c->r[3],0); // 80101C30
  if (crb(c,2)) { goto L_80101C50; } // 80101C34
  W16(c->r[31]+0x0000169Cu,c->r[28]); // 80101C38
  c->r[4]=c->r[29]|c->r[29]; // 80101C3C
  c->r[5]=c->r[28]|c->r[28]; // 80101C40
  W16(c->r[31]+0x0000169Eu,c->r[29]); // 80101C44
  c->lr=0x80101C4Cu; f_8010BD24(c); // 80101C48
  goto L_80101C58; // 80101C4C
L_80101C50:;
  c->r[3]=0u+0x00000003u; // 80101C50
  goto L_80101C98; // 80101C54
L_80101C58:;
  c->r[3]=0u+0x00000002u; // 80101C58
  c->lr=0x80101C60u; f_800F46D0(c); // 80101C5C
  cmps(c,0,(int32_t)c->r[3],0); // 80101C60
  if (crb(c,2)) { goto L_80101C8C; } // 80101C64
  c->r[0]=R16(c->r[31]+0x00001698u); // 80101C68
  cmps(c,0,(int32_t)c->r[0],0); // 80101C6C
  if (crb(c,2)) { goto L_80101C7C; } // 80101C70
  c->r[0]=c->r[30]|0x00000001u; // 80101C74
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 80101C78
L_80101C7C:;
  W16(c->r[31]+0x0000169Au,c->r[27]); // 80101C7C
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 80101C80
  c->lr=0x80101C88u; f_8010BCF4(c); // 80101C84
  goto L_80101C94; // 80101C88
L_80101C8C:;
  c->r[3]=0u+0x00000003u; // 80101C8C
  goto L_80101C98; // 80101C90
L_80101C94:;
  c->r[3]=0u+0x00000000u; // 80101C94
L_80101C98:;
  c->r[11]=c->r[1]+0x00000020u; // 80101C98
  c->lr=0x80101CA0u; f_800ADA78(c); // 80101C9C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101CA0
  c->lr=c->r[0]; // 80101CA4
  c->r[1]=c->r[1]+0x00000020u; // 80101CA8
  return; // 80101CAC
}

// BTM_IsInquiryActive
void f_80101CB0(Ctx* __restrict c) {
  trace_call(0x80101CB0u);
  c->r[3]=0u+0x803D0000u; // 80101CB0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101CB4
  c->r[3]=R8(c->r[3]+0x00001848u); // 80101CB8
  return; // 80101CBC
}

// BTM_CancelInquiry
void f_80101CC0(Ctx* __restrict c) {
  trace_call(0x80101CC0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101CC0
  c->r[0]=c->lr; // 80101CC4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101CC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80101CCC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80101CD0
  c->r[30]=0u+0x803D0000u; // 80101CD4
  c->r[30]=c->r[30]+0xFFFFA218u; // 80101CD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80101CDC
  c->r[29]=0u+0x00000000u; // 80101CE0
  c->r[0]=R8(c->r[30]+0x000027C0u); // 80101CE4
  cmpu(c,0,c->r[0],0x00000003u); // 80101CE8
  if (crb(c,0)) { goto L_80101D04; } // 80101CEC
  c->r[3]=0u+0x000D0000u; // 80101CF0
  c->r[4]=0u+0x80330000u; // 80101CF4
  c->r[3]=c->r[3]+0x00000002u; // 80101CF8
  c->r[4]=c->r[4]+0xFFFFB110u; // 80101CFC
  c->lr=0x80101D04u; f_800F7280(c); // 80101D00
L_80101D04:;
  c->lr=0x80101D08u; f_800FFE84(c); // 80101D04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80101D08
  if (!crb(c,2)) { goto L_80101D18; } // 80101D0C
  c->r[3]=0u+0x00000006u; // 80101D10
  goto L_80101DAC; // 80101D14
L_80101D18:;
  c->r[0]=R8(c->r[30]+0x00001848u); // 80101D18
  cmps(c,0,(int32_t)c->r[0],0); // 80101D1C
  if (crb(c,2)) { goto L_80101DA8; } // 80101D20
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80101D24
  if (!crb(c,2)) { goto L_80101DA8; } // 80101D28
  c->r[0]=R8(c->r[30]+0x00001844u); // 80101D2C
  c->r[4]=0u+0x00000000u; // 80101D30
  W8(c->r[30]+0x00001848u,c->r[4]); // 80101D34
  cmps(c,0,(int32_t)c->r[0],0); // 80101D38
  W8(c->r[30]+0x00001847u,c->r[4]); // 80101D3C
  W32(c->r[30]+0x000016B4u,c->r[4]); // 80101D40
  W32(c->r[30]+0x000016B0u,c->r[4]); // 80101D44
  if (crb(c,2)) { goto L_80101D60; } // 80101D48
  c->r[3]=R8(c->r[30]+0x00001845u); // 80101D4C
  W8(c->r[30]+0x00001844u,c->r[4]); // 80101D50
  c->r[0]=c->r[3]+0x00000001u; // 80101D54
  W8(c->r[30]+0x00001845u,c->r[0]); // 80101D58
  goto L_80101D70; // 80101D5C
L_80101D60:;
  c->lr=0x80101D64u; f_8010A244(c); // 80101D60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80101D64
  if (!crb(c,2)) { goto L_80101D70; } // 80101D68
  c->r[29]=0u+0x00000003u; // 80101D6C
L_80101D70:;
  c->r[31]=0u+0x803D0000u; // 80101D70
  c->r[4]=R32(c->r[30]+0x000016C0u); // 80101D74
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101D78
  c->r[3]=R32(c->r[31]+0x000016DCu); // 80101D7C
  c->r[0]=c->r[4]+0x00000001u; // 80101D80
  W32(c->r[30]+0x000016C0u,c->r[0]); // 80101D84
  cmps(c,0,(int32_t)c->r[3],0); // 80101D88
  if (crb(c,2)) { goto L_80101D9C; } // 80101D8C
  c->lr=0x80101D94u; f_800F47C0(c); // 80101D90
  c->r[0]=0u+0x00000000u; // 80101D94
  W32(c->r[31]+0x000016DCu,c->r[0]); // 80101D98
L_80101D9C:;
  c->r[0]=0u+0x00000000u; // 80101D9C
  W16(c->r[31]+0x000016E0u,c->r[0]); // 80101DA0
  W16(c->r[31]+0x000016E2u,c->r[0]); // 80101DA4
L_80101DA8:;
  c->r[3]=c->r[29]|c->r[29]; // 80101DA8
L_80101DAC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101DAC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80101DB0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80101DB4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80101DB8
  c->lr=c->r[0]; // 80101DBC
  c->r[1]=c->r[1]+0x00000020u; // 80101DC0
  return; // 80101DC4
}

// BTM_StartInquiry
void f_80101DC8(Ctx* __restrict c) {
  trace_call(0x80101DC8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101DC8
  c->r[0]=c->lr; // 80101DCC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101DD0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80101DD4
  c->r[31]=0u+0x803D0000u; // 80101DD8
  c->r[31]=c->r[31]+0xFFFFA218u; // 80101DDC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80101DE0
  c->r[30]=c->r[5]|c->r[5]; // 80101DE4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80101DE8
  c->r[29]=c->r[4]|c->r[4]; // 80101DEC
  W32(c->r[1]+0x00000010u,c->r[28]); // 80101DF0
  c->r[28]=c->r[3]|c->r[3]; // 80101DF4
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80101DF8
  cmpu(c,0,c->r[0],0x00000003u); // 80101DFC
  if (crb(c,0)) { goto L_80101E28; } // 80101E00
  c->r[3]=0u+0x000D0000u; // 80101E04
  c->r[4]=0u+0x80330000u; // 80101E08
  c->r[5]=R8(c->r[28]+0x00000000u); // 80101E0C
  c->r[3]=c->r[3]+0x00000002u; // 80101E10
  c->r[6]=R8(c->r[28]+0x00000001u); // 80101E14
  c->r[4]=c->r[4]+0xFFFFB12Cu; // 80101E18
  c->r[7]=R8(c->r[28]+0x00000002u); // 80101E1C
  c->r[8]=R8(c->r[28]+0x00000003u); // 80101E20
  c->lr=0x80101E28u; f_800F7300(c); // 80101E24
L_80101E28:;
  c->r[0]=R8(c->r[31]+0x00001848u); // 80101E28
  cmps(c,0,(int32_t)c->r[0],0); // 80101E2C
  if (!crb(c,2)) { goto L_80101E40; } // 80101E30
  c->r[0]=R8(c->r[31]+0x00001844u); // 80101E34
  cmps(c,0,(int32_t)c->r[0],0); // 80101E38
  if (crb(c,2)) { goto L_80101E48; } // 80101E3C
L_80101E40:;
  c->r[3]=0u+0x00000002u; // 80101E40
  goto L_80101F5C; // 80101E44
L_80101E48:;
  c->r[0]=R8(c->r[28]+0x00000000u); // 80101E48
  cmps(c,0,(int32_t)c->r[0],0); // 80101E4C
  if (crb(c,2)) { goto L_80101E64; } // 80101E50
  cmpu(c,0,c->r[0],0x00000001u); // 80101E54
  if (crb(c,2)) { goto L_80101E64; } // 80101E58
  c->r[3]=0u+0x00000005u; // 80101E5C
  goto L_80101F5C; // 80101E60
L_80101E64:;
  c->lr=0x80101E68u; f_800FFE84(c); // 80101E64
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80101E68
  if (!crb(c,2)) { goto L_80101E78; } // 80101E6C
  c->r[3]=0u+0x00000006u; // 80101E70
  goto L_80101F5C; // 80101E74
L_80101E78:;
  c->r[5]=R8(c->r[28]+0x00000000u); // 80101E78
  c->r[0]=0u+0x00000003u; // 80101E7C
  c->r[3]=R8(c->r[28]+0x00000001u); // 80101E80
  c->r[6]=0u+0x00000000u; // 80101E84
  c->r[4]=0u+0x00000001u; // 80101E88
  W8(c->r[31]+0x00001834u,c->r[5]); // 80101E8C
  W8(c->r[31]+0x00001835u,c->r[3]); // 80101E90
  c->r[5]=R8(c->r[28]+0x00000002u); // 80101E94
  c->r[3]=R8(c->r[28]+0x00000003u); // 80101E98
  W8(c->r[31]+0x00001836u,c->r[5]); // 80101E9C
  W8(c->r[31]+0x00001837u,c->r[3]); // 80101EA0
  c->r[5]=R8(c->r[28]+0x00000004u); // 80101EA4
  c->r[3]=R8(c->r[28]+0x00000005u); // 80101EA8
  W8(c->r[31]+0x00001838u,c->r[5]); // 80101EAC
  W8(c->r[31]+0x00001839u,c->r[3]); // 80101EB0
  c->r[5]=R8(c->r[28]+0x00000006u); // 80101EB4
  c->r[3]=R8(c->r[28]+0x00000007u); // 80101EB8
  W8(c->r[31]+0x0000183Au,c->r[5]); // 80101EBC
  W8(c->r[31]+0x0000183Bu,c->r[3]); // 80101EC0
  c->r[3]=R8(c->r[28]+0x00000008u); // 80101EC4
  W8(c->r[31]+0x0000183Cu,c->r[3]); // 80101EC8
  c->r[3]=R8(c->r[28]+0x00000009u); // 80101ECC
  W8(c->r[31]+0x0000183Du,c->r[3]); // 80101ED0
  W8(c->r[31]+0x00001847u,c->r[0]); // 80101ED4
  W32(c->r[31]+0x000016B0u,c->r[30]); // 80101ED8
  W32(c->r[31]+0x000016B4u,c->r[29]); // 80101EDC
  W8(c->r[31]+0x0000183Fu,c->r[6]); // 80101EE0
  c->r[5]=R8(c->r[28]+0x00000000u); // 80101EE4
  c->r[3]=c->r[5]+0xFFFFFFFFu; // 80101EE8
  c->r[0]=addc(c,~c->r[5],0x00000001u,1); // 80101EEC
  c->r[0]=~(c->r[3]|c->r[0]); // 80101EF0
  c->r[3]=sraw(c,c->r[0],31); // 80101EF4
  c->r[0]=c->r[3]+0x00000002u; // 80101EF8
  W8(c->r[31]+0x00001848u,c->r[0]); // 80101EFC
  c->r[0]=R8(c->r[28]+0x00000003u); // 80101F00
  cmps(c,0,(int32_t)c->r[0],0); // 80101F04
  if (crb(c,2)) { goto L_80101F1C; } // 80101F08
  if (crb(c,0)) { goto L_80101F34; } // 80101F0C
  cmps(c,0,(int32_t)c->r[0],3); // 80101F10
  if (!crb(c,0)) { goto L_80101F34; } // 80101F14
  goto L_80101F28; // 80101F18
L_80101F1C:;
  c->r[0]=0u+0x00000002u; // 80101F1C
  W8(c->r[31]+0x00001847u,c->r[0]); // 80101F20
  goto L_80101F3C; // 80101F24
L_80101F28:;
  W8(c->r[31]+0x00001847u,c->r[4]); // 80101F28
  W8(c->r[28]+0x00000003u,c->r[6]); // 80101F2C
  goto L_80101F3C; // 80101F30
L_80101F34:;
  c->r[3]=0u+0x00000005u; // 80101F34
  goto L_80101F5C; // 80101F38
L_80101F3C:;
  c->r[3]=R8(c->r[28]+0x00000003u); // 80101F3C
  c->r[4]=c->r[28]+0x00000004u; // 80101F40
  c->lr=0x80101F48u; f_801027DC(c); // 80101F44
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80101F48
  cmpu(c,0,c->r[0],0x00000001u); // 80101F4C
  if (crb(c,2)) { goto L_80101F5C; } // 80101F50
  c->r[0]=0u+0x00000000u; // 80101F54
  W8(c->r[31]+0x00001847u,c->r[0]); // 80101F58
L_80101F5C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80101F5C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80101F60
  c->r[30]=R32(c->r[1]+0x00000018u); // 80101F64
  c->r[29]=R32(c->r[1]+0x00000014u); // 80101F68
  c->r[28]=R32(c->r[1]+0x00000010u); // 80101F6C
  c->lr=c->r[0]; // 80101F70
  c->r[1]=c->r[1]+0x00000020u; // 80101F74
  return; // 80101F78
}

// BTM_ReadRemoteDeviceName
void f_80101F7C(Ctx* __restrict c) {
  trace_call(0x80101F7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80101F7C
  c->r[0]=c->lr; // 80101F80
  W32(c->r[1]+0x00000024u,c->r[0]); // 80101F84
  c->r[11]=c->r[1]+0x00000020u; // 80101F88
  c->lr=0x80101F90u; f_800ADA2C(c); // 80101F8C
  c->r[5]=0u+0x803D0000u; // 80101F90
  c->r[27]=c->r[3]|c->r[3]; // 80101F94
  c->r[5]=c->r[5]+0xFFFFA218u; // 80101F98
  c->r[28]=c->r[4]|c->r[4]; // 80101F9C
  c->r[0]=R8(c->r[5]+0x000027C0u); // 80101FA0
  c->r[29]=0u+0x00000000u; // 80101FA4
  cmpu(c,0,c->r[0],0x00000003u); // 80101FA8
  if (crb(c,0)) { goto L_80101FDC; } // 80101FAC
  c->r[3]=0u+0x000D0000u; // 80101FB0
  c->r[4]=0u+0x80330000u; // 80101FB4
  c->r[5]=R8(c->r[27]+0x00000000u); // 80101FB8
  c->r[3]=c->r[3]+0x00000002u; // 80101FBC
  c->r[6]=R8(c->r[27]+0x00000001u); // 80101FC0
  c->r[4]=c->r[4]+0xFFFFB164u; // 80101FC4
  c->r[7]=R8(c->r[27]+0x00000002u); // 80101FC8
  c->r[8]=R8(c->r[27]+0x00000003u); // 80101FCC
  c->r[9]=R8(c->r[27]+0x00000004u); // 80101FD0
  c->r[10]=R8(c->r[27]+0x00000005u); // 80101FD4
  c->lr=0x80101FDCu; f_800F7340(c); // 80101FD8
L_80101FDC:;
  c->r[3]=0u+0x803D0000u; // 80101FDC
  c->r[30]=0u+0x00000000u; // 80101FE0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80101FE4
  c->r[31]=c->r[3]+0x000016E4u; // 80101FE8
L_80101FEC:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 80101FEC
  cmps(c,0,(int32_t)c->r[0],0); // 80101FF0
  if (crb(c,2)) { goto L_80102014; } // 80101FF4
  c->r[4]=c->r[27]|c->r[27]; // 80101FF8
  c->r[3]=c->r[31]+0x0000000Au; // 80101FFC
  c->r[5]=0u+0x00000006u; // 80102000
  c->lr=0x80102008u; f_800B3824(c); // 80102004
  cmps(c,0,(int32_t)c->r[3],0); // 80102008
  if (!crb(c,2)) { goto L_80102014; } // 8010200C
  goto L_80102028; // 80102010
L_80102014:;
  c->r[30]=c->r[30]+0x00000001u; // 80102014
  c->r[31]=c->r[31]+0x0000001Cu; // 80102018
  cmpu(c,0,c->r[30],0x0000000Cu); // 8010201C
  if (crb(c,0)) { IRQCHK(c); goto L_80101FEC; } // 80102020
  c->r[31]=0u+0x00000000u; // 80102024
L_80102028:;
  cmps(c,0,(int32_t)c->r[31],0); // 80102028
  if (crb(c,2)) { goto L_80102034; } // 8010202C
  c->r[29]=c->r[31]+0x00000008u; // 80102030
L_80102034:;
  c->r[3]=c->r[27]|c->r[27]; // 80102034
  c->r[4]=c->r[29]|c->r[29]; // 80102038
  c->r[7]=c->r[28]|c->r[28]; // 8010203C
  c->r[5]=0u+0x00000001u; // 80102040
  c->r[6]=0u+0x00000028u; // 80102044
  c->lr=0x8010204Cu; f_80102E5C(c); // 80102048
  c->r[11]=c->r[1]+0x00000020u; // 8010204C
  c->lr=0x80102054u; f_800ADA78(c); // 80102050
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102054
  c->lr=c->r[0]; // 80102058
  c->r[1]=c->r[1]+0x00000020u; // 8010205C
  return; // 80102060
}

// BTM_CancelRemoteDeviceName
void f_80102064(Ctx* __restrict c) {
  trace_call(0x80102064u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102064
  c->r[0]=c->lr; // 80102068
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010206C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80102070
  c->r[31]=0u+0x803D0000u; // 80102074
  c->r[31]=c->r[31]+0xFFFFA218u; // 80102078
  c->r[0]=R8(c->r[31]+0x000027C0u); // 8010207C
  cmpu(c,0,c->r[0],0x00000003u); // 80102080
  if (crb(c,0)) { goto L_8010209C; } // 80102084
  c->r[3]=0u+0x000D0000u; // 80102088
  c->r[4]=0u+0x80330000u; // 8010208C
  c->r[3]=c->r[3]+0x00000002u; // 80102090
  c->r[4]=c->r[4]+0xFFFFB1A4u; // 80102094
  c->lr=0x8010209Cu; f_800F7280(c); // 80102098
L_8010209C:;
  c->r[0]=R8(c->r[31]+0x000016AEu); // 8010209C
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801020A0
  if (crb(c,2)) { goto L_801020C4; } // 801020A4
  c->r[3]=c->r[31]+0x000016A8u; // 801020A8
  c->lr=0x801020B0u; f_8010AD48(c); // 801020AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801020B0
  c->r[3]=0u+0x00000003u; // 801020B4
  if (crb(c,2)) { goto L_801020C8; } // 801020B8
  c->r[3]=0u+0x00000001u; // 801020BC
  goto L_801020C8; // 801020C0
L_801020C4:;
  c->r[3]=0u+0x00000006u; // 801020C4
L_801020C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801020C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801020CC
  c->lr=c->r[0]; // 801020D0
  c->r[1]=c->r[1]+0x00000010u; // 801020D4
  return; // 801020D8
}

// BTM_InqDbRead
void f_801020DC(Ctx* __restrict c) {
  trace_call(0x801020DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801020DC
  c->r[0]=c->lr; // 801020E0
  c->r[4]=0u+0x803D0000u; // 801020E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801020E8
  c->r[4]=c->r[4]+0xFFFFA218u; // 801020EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801020F0
  W32(c->r[1]+0x00000018u,c->r[30]); // 801020F4
  c->r[30]=c->r[4]+0x000016E4u; // 801020F8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801020FC
  c->r[29]=c->r[3]|c->r[3]; // 80102100
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80102104
  cmpu(c,0,c->r[0],0x00000003u); // 80102108
  if (crb(c,0)) { goto L_8010213C; } // 8010210C
  c->r[3]=0u+0x000D0000u; // 80102110
  c->r[4]=0u+0x80330000u; // 80102114
  c->r[5]=R8(c->r[29]+0x00000000u); // 80102118
  c->r[3]=c->r[3]+0x00000002u; // 8010211C
  c->r[6]=R8(c->r[29]+0x00000001u); // 80102120
  c->r[4]=c->r[4]+0xFFFFB1C4u; // 80102124
  c->r[7]=R8(c->r[29]+0x00000002u); // 80102128
  c->r[8]=R8(c->r[29]+0x00000003u); // 8010212C
  c->r[9]=R8(c->r[29]+0x00000004u); // 80102130
  c->r[10]=R8(c->r[29]+0x00000005u); // 80102134
  c->lr=0x8010213Cu; f_800F7340(c); // 80102138
L_8010213C:;
  c->r[31]=0u+0x00000000u; // 8010213C
L_80102140:;
  c->r[0]=R8(c->r[30]+0x0000001Au); // 80102140
  cmps(c,0,(int32_t)c->r[0],0); // 80102144
  if (crb(c,2)) { goto L_8010216C; } // 80102148
  c->r[4]=c->r[29]|c->r[29]; // 8010214C
  c->r[3]=c->r[30]+0x0000000Au; // 80102150
  c->r[5]=0u+0x00000006u; // 80102154
  c->lr=0x8010215Cu; f_800B3824(c); // 80102158
  cmps(c,0,(int32_t)c->r[3],0); // 8010215C
  if (!crb(c,2)) { goto L_8010216C; } // 80102160
  c->r[3]=c->r[30]+0x00000008u; // 80102164
  goto L_80102180; // 80102168
L_8010216C:;
  c->r[31]=c->r[31]+0x00000001u; // 8010216C
  c->r[30]=c->r[30]+0x0000001Cu; // 80102170
  cmpu(c,0,c->r[31],0x0000000Cu); // 80102174
  if (crb(c,0)) { IRQCHK(c); goto L_80102140; } // 80102178
  c->r[3]=0u+0x00000000u; // 8010217C
L_80102180:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102180
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80102184
  c->r[30]=R32(c->r[1]+0x00000018u); // 80102188
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010218C
  c->lr=c->r[0]; // 80102190
  c->r[1]=c->r[1]+0x00000020u; // 80102194
  return; // 80102198
}

// BTM_InqDbFirst
void f_8010219C(Ctx* __restrict c) {
  trace_call(0x8010219Cu);
  c->r[3]=0u+0x803D0000u; // 8010219C
  c->r[0]=0u+0x00000002u; // 801021A0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801021A4
  c->r[4]=0u+0x00000000u; // 801021A8
  c->r[3]=c->r[3]+0x000016E4u; // 801021AC
  c->ctr=c->r[0]; // 801021B0
L_801021B4:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801021B4
  cmps(c,0,(int32_t)c->r[0],0); // 801021B8
  if (crb(c,2)) { goto L_801021C8; } // 801021BC
  c->r[3]=c->r[3]+0x00000008u; // 801021C0
  return; // 801021C4
L_801021C8:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 801021C8
  c->r[4]=c->r[4]+0x00000001u; // 801021CC
  cmps(c,0,(int32_t)c->r[0],0); // 801021D0
  if (crb(c,2)) { goto L_801021E0; } // 801021D4
  c->r[3]=c->r[3]+0x00000024u; // 801021D8
  return; // 801021DC
L_801021E0:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 801021E0
  c->r[4]=c->r[4]+0x00000001u; // 801021E4
  cmps(c,0,(int32_t)c->r[0],0); // 801021E8
  if (crb(c,2)) { goto L_801021F8; } // 801021EC
  c->r[3]=c->r[3]+0x00000040u; // 801021F0
  return; // 801021F4
L_801021F8:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 801021F8
  c->r[4]=c->r[4]+0x00000001u; // 801021FC
  cmps(c,0,(int32_t)c->r[0],0); // 80102200
  if (crb(c,2)) { goto L_80102210; } // 80102204
  c->r[3]=c->r[3]+0x0000005Cu; // 80102208
  return; // 8010220C
L_80102210:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 80102210
  c->r[4]=c->r[4]+0x00000001u; // 80102214
  cmps(c,0,(int32_t)c->r[0],0); // 80102218
  if (crb(c,2)) { goto L_80102228; } // 8010221C
  c->r[3]=c->r[3]+0x00000078u; // 80102220
  return; // 80102224
L_80102228:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 80102228
  c->r[4]=c->r[4]+0x00000001u; // 8010222C
  cmps(c,0,(int32_t)c->r[0],0); // 80102230
  if (crb(c,2)) { goto L_80102240; } // 80102234
  c->r[3]=c->r[3]+0x00000094u; // 80102238
  return; // 8010223C
L_80102240:;
  c->r[4]=c->r[4]+0x00000001u; // 80102240
  c->r[3]=c->r[3]+0x000000A8u; // 80102244
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801021B4; } // 80102248
  c->r[3]=0u+0x00000000u; // 8010224C
  return; // 80102250
}

// BTM_InqDbNext
void f_80102254(Ctx* __restrict c) {
  trace_call(0x80102254u);
  cmps(c,0,(int32_t)c->r[3],0); // 80102254
  if (crb(c,2)) { goto L_801022D8; } // 80102258
  c->r[5]=0u+0x803D0000u; // 8010225C
  c->r[4]=0u+0x92490000u; // 80102260
  c->r[5]=c->r[5]+0xFFFFA218u; // 80102264
  c->r[0]=c->r[3]+0xFFFFFFF8u; // 80102268
  c->r[3]=c->r[5]+0x000016E4u; // 8010226C
  c->r[4]=c->r[4]+0x00002493u; // 80102270
  c->r[0]=c->r[0]-c->r[3]; // 80102274
  c->r[3]=(uint32_t)(((int64_t)(int32_t)c->r[4]*(int64_t)(int32_t)c->r[0])>>32); // 80102278
  c->r[0]=c->r[3]+c->r[0]; // 8010227C
  c->r[0]=sraw(c,c->r[0],4); // 80102280
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 80102284
  c->r[3]=c->r[0]+c->r[3]; // 80102288
  c->r[0]=c->r[3]+0x00000001u; // 8010228C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80102290
  c->r[3]=(uint32_t)((int32_t)c->r[4]*(int32_t)28); // 80102294
  c->r[0]=addc(c,~c->r[4],0x0000000Cu,1); // 80102298
  c->r[3]=c->r[5]+c->r[3]; // 8010229C
  c->r[3]=c->r[3]+0x000016E4u; // 801022A0
  c->ctr=c->r[0]; // 801022A4
  cmpu(c,0,c->r[4],0x0000000Cu); // 801022A8
  if (!crb(c,0)) { goto L_801022D0; } // 801022AC
L_801022B0:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801022B0
  cmps(c,0,(int32_t)c->r[0],0); // 801022B4
  if (crb(c,2)) { goto L_801022C4; } // 801022B8
  c->r[3]=c->r[3]+0x00000008u; // 801022BC
  return; // 801022C0
L_801022C4:;
  c->r[4]=c->r[4]+0x00000001u; // 801022C4
  c->r[3]=c->r[3]+0x0000001Cu; // 801022C8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801022B0; } // 801022CC
L_801022D0:;
  c->r[3]=0u+0x00000000u; // 801022D0
  return; // 801022D4
L_801022D8:;
  c->r[3]=0u+0x803D0000u; // 801022D8
  c->r[0]=0u+0x00000002u; // 801022DC
  c->r[3]=c->r[3]+0xFFFFA218u; // 801022E0
  c->r[4]=0u+0x00000000u; // 801022E4
  c->r[3]=c->r[3]+0x000016E4u; // 801022E8
  c->ctr=c->r[0]; // 801022EC
L_801022F0:;
  c->r[0]=R8(c->r[3]+0x0000001Au); // 801022F0
  cmps(c,0,(int32_t)c->r[0],0); // 801022F4
  if (crb(c,2)) { goto L_80102304; } // 801022F8
  c->r[3]=c->r[3]+0x00000008u; // 801022FC
  return; // 80102300
L_80102304:;
  c->r[0]=R8(c->r[3]+0x00000036u); // 80102304
  c->r[4]=c->r[4]+0x00000001u; // 80102308
  cmps(c,0,(int32_t)c->r[0],0); // 8010230C
  if (crb(c,2)) { goto L_8010231C; } // 80102310
  c->r[3]=c->r[3]+0x00000024u; // 80102314
  return; // 80102318
L_8010231C:;
  c->r[0]=R8(c->r[3]+0x00000052u); // 8010231C
  c->r[4]=c->r[4]+0x00000001u; // 80102320
  cmps(c,0,(int32_t)c->r[0],0); // 80102324
  if (crb(c,2)) { goto L_80102334; } // 80102328
  c->r[3]=c->r[3]+0x00000040u; // 8010232C
  return; // 80102330
L_80102334:;
  c->r[0]=R8(c->r[3]+0x0000006Eu); // 80102334
  c->r[4]=c->r[4]+0x00000001u; // 80102338
  cmps(c,0,(int32_t)c->r[0],0); // 8010233C
  if (crb(c,2)) { goto L_8010234C; } // 80102340
  c->r[3]=c->r[3]+0x0000005Cu; // 80102344
  return; // 80102348
L_8010234C:;
  c->r[0]=R8(c->r[3]+0x0000008Au); // 8010234C
  c->r[4]=c->r[4]+0x00000001u; // 80102350
  cmps(c,0,(int32_t)c->r[0],0); // 80102354
  if (crb(c,2)) { goto L_80102364; } // 80102358
  c->r[3]=c->r[3]+0x00000078u; // 8010235C
  return; // 80102360
L_80102364:;
  c->r[0]=R8(c->r[3]+0x000000A6u); // 80102364
  c->r[4]=c->r[4]+0x00000001u; // 80102368
  cmps(c,0,(int32_t)c->r[0],0); // 8010236C
  if (crb(c,2)) { goto L_8010237C; } // 80102370
  c->r[3]=c->r[3]+0x00000094u; // 80102374
  return; // 80102378
L_8010237C:;
  c->r[4]=c->r[4]+0x00000001u; // 8010237C
  c->r[3]=c->r[3]+0x000000A8u; // 80102380
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801022F0; } // 80102384
  c->r[3]=0u+0x00000000u; // 80102388
  return; // 8010238C
}

// BTM_ClearInqDb
void f_80102390(Ctx* __restrict c) {
  trace_call(0x80102390u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102390
  c->r[0]=c->lr; // 80102394
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102398
  c->r[11]=c->r[1]+0x00000020u; // 8010239C
  c->lr=0x801023A4u; f_800ADA2C(c); // 801023A0
  c->r[4]=0u+0x803D0000u; // 801023A4
  c->r[27]=c->r[3]|c->r[3]; // 801023A8
  c->r[30]=c->r[4]+0xFFFFA218u; // 801023AC
  c->r[0]=R8(c->r[30]+0x00001848u); // 801023B0
  cmps(c,0,(int32_t)c->r[0],0); // 801023B4
  if (!crb(c,2)) { goto L_801023D4; } // 801023B8
  c->r[0]=R8(c->r[30]+0x000016AEu); // 801023BC
  cmps(c,0,(int32_t)c->r[0],0); // 801023C0
  if (!crb(c,2)) { goto L_801023D4; } // 801023C4
  c->r[0]=R8(c->r[30]+0x00001844u); // 801023C8
  cmps(c,0,(int32_t)c->r[0],0); // 801023CC
  if (crb(c,2)) { goto L_801023DC; } // 801023D0
L_801023D4:;
  c->r[3]=0u+0x00000002u; // 801023D4
  goto L_80102448; // 801023D8
L_801023DC:;
  c->r[28]=c->r[30]+0x000016E4u; // 801023DC
  c->r[29]=0u+0x00000000u; // 801023E0
  c->r[31]=0u+0x00000000u; // 801023E4
L_801023E8:;
  c->r[0]=R8(c->r[28]+0x0000001Au); // 801023E8
  cmps(c,0,(int32_t)c->r[0],0); // 801023EC
  if (crb(c,2)) { goto L_80102434; } // 801023F0
  cmps(c,0,(int32_t)c->r[27],0); // 801023F4
  if (crb(c,2)) { goto L_80102414; } // 801023F8
  c->r[4]=c->r[27]|c->r[27]; // 801023FC
  c->r[3]=c->r[28]+0x0000000Au; // 80102400
  c->r[5]=0u+0x00000006u; // 80102404
  c->lr=0x8010240Cu; f_800B3824(c); // 80102408
  cmps(c,0,(int32_t)c->r[3],0); // 8010240C
  if (!crb(c,2)) { goto L_80102434; } // 80102410
L_80102414:;
  W8(c->r[28]+0x0000001Au,c->r[31]); // 80102414
  c->r[12]=R32(c->r[30]+0x000016BCu); // 80102418
  cmps(c,0,(int32_t)c->r[12],0); // 8010241C
  if (crb(c,2)) { goto L_80102434; } // 80102420
  c->r[3]=c->r[28]+0x00000008u; // 80102424
  c->r[4]=0u+0x00000000u; // 80102428
  c->ctr=c->r[12]; // 8010242C
  if (true) { c->lr=0x80102434u; dispatch(c,c->ctr); } // 80102430
L_80102434:;
  c->r[29]=c->r[29]+0x00000001u; // 80102434
  c->r[28]=c->r[28]+0x0000001Cu; // 80102438
  cmpu(c,0,c->r[29],0x0000000Cu); // 8010243C
  if (crb(c,0)) { IRQCHK(c); goto L_801023E8; } // 80102440
  c->r[3]=0u+0x00000000u; // 80102444
L_80102448:;
  c->r[11]=c->r[1]+0x00000020u; // 80102448
  c->lr=0x80102450u; f_800ADA78(c); // 8010244C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102450
  c->lr=c->r[0]; // 80102454
  c->r[1]=c->r[1]+0x00000020u; // 80102458
  return; // 8010245C
}

// btm_inq_db_reset
void f_80102460(Ctx* __restrict c) {
  trace_call(0x80102460u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102460
  c->r[0]=c->lr; // 80102464
  W32(c->r[1]+0x00000124u,c->r[0]); // 80102468
  c->r[11]=c->r[1]+0x00000120u; // 8010246C
  c->lr=0x80102474u; f_800ADA2C(c); // 80102470
  c->r[29]=0u+0x803D0000u; // 80102474
  c->r[29]=c->r[29]+0xFFFFA218u; // 80102478
  c->r[3]=c->r[29]+0x000016C4u; // 8010247C
  c->lr=0x80102484u; f_800F7900(c); // 80102480
  c->r[3]=R8(c->r[29]+0x00001848u); // 80102484
  cmps(c,0,(int32_t)c->r[3],0); // 80102488
  if (crb(c,2)) { goto L_801024C4; } // 8010248C
  c->r[0]=c->r[3]+0x000000FFu; // 80102490
  c->r[3]=0u+0x00000000u; // 80102494
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80102498
  W8(c->r[29]+0x00001848u,c->r[3]); // 8010249C
  cmpu(c,0,c->r[0],0x00000001u); // 801024A0
  if (crb(c,1)) { goto L_801024C4; } // 801024A4
  c->r[12]=R32(c->r[29]+0x000016B0u); // 801024A8
  cmps(c,0,(int32_t)c->r[12],0); // 801024AC
  if (crb(c,2)) { goto L_801024C4; } // 801024B0
  W8(c->r[1]+0x00000009u,c->r[3]); // 801024B4
  c->r[3]=c->r[1]+0x00000009u; // 801024B8
  c->ctr=c->r[12]; // 801024BC
  if (true) { c->lr=0x801024C4u; dispatch(c,c->ctr); } // 801024C0
L_801024C4:;
  c->r[0]=R8(c->r[29]+0x000016AEu); // 801024C4
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801024C8
  if (crb(c,2)) { goto L_80102514; } // 801024CC
  c->r[3]=c->r[29]+0x00001680u; // 801024D0
  c->lr=0x801024D8u; f_800F7900(c); // 801024D4
  c->r[30]=0u+0x00000000u; // 801024D8
  c->r[3]=c->r[29]+0x000016A8u; // 801024DC
  W8(c->r[29]+0x000016AEu,c->r[30]); // 801024E0
  c->r[4]=0u+0x00000000u; // 801024E4
  c->r[5]=0u+0x00000006u; // 801024E8
  c->lr=0x801024F0u; f_80004714(c); // 801024EC
  c->r[12]=R32(c->r[29]+0x0000167Cu); // 801024F0
  cmps(c,0,(int32_t)c->r[12],0); // 801024F4
  if (crb(c,2)) { goto L_80102514; } // 801024F8
  c->r[0]=0u+0x0000000Cu; // 801024FC
  c->r[3]=c->r[1]+0x0000000Cu; // 80102500
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 80102504
  c->ctr=c->r[12]; // 80102508
  if (true) { c->lr=0x80102510u; dispatch(c,c->ctr); } // 8010250C
  W32(c->r[29]+0x0000167Cu,c->r[30]); // 80102510
L_80102514:;
  c->r[0]=R8(c->r[29]+0x00001844u); // 80102514
  cmps(c,0,(int32_t)c->r[0],0); // 80102518
  if (crb(c,2)) { goto L_80102548; } // 8010251C
  c->r[12]=R32(c->r[29]+0x000016B8u); // 80102520
  c->r[0]=0u+0x00000000u; // 80102524
  W8(c->r[29]+0x00001844u,c->r[0]); // 80102528
  cmps(c,0,(int32_t)c->r[12],0); // 8010252C
  if (crb(c,2)) { goto L_80102548; } // 80102530
  c->r[0]=0u+0x0000000Cu; // 80102534
  c->r[3]=c->r[1]+0x00000008u; // 80102538
  W8(c->r[1]+0x00000008u,c->r[0]); // 8010253C
  c->ctr=c->r[12]; // 80102540
  if (true) { c->lr=0x80102548u; dispatch(c,c->ctr); } // 80102544
L_80102548:;
  c->r[30]=0u+0x00000000u; // 80102548
  c->r[31]=0u+0x803D0000u; // 8010254C
  c->r[31]=c->r[31]+0xFFFFA218u; // 80102550
  W8(c->r[29]+0x00001847u,c->r[30]); // 80102554
  c->r[28]=0u+0x00000000u; // 80102558
  W8(c->r[29]+0x00001845u,c->r[30]); // 8010255C
  c->r[27]=c->r[31]+0x000016E4u; // 80102560
  W32(c->r[29]+0x000016B4u,c->r[30]); // 80102564
L_80102568:;
  c->r[0]=R8(c->r[27]+0x0000001Au); // 80102568
  cmps(c,0,(int32_t)c->r[0],0); // 8010256C
  if (crb(c,2)) { goto L_80102594; } // 80102570
  W8(c->r[27]+0x0000001Au,c->r[30]); // 80102574
  c->r[12]=R32(c->r[31]+0x000016BCu); // 80102578
  cmps(c,0,(int32_t)c->r[12],0); // 8010257C
  if (crb(c,2)) { goto L_80102594; } // 80102580
  c->r[3]=c->r[27]+0x00000008u; // 80102584
  c->r[4]=0u+0x00000000u; // 80102588
  c->ctr=c->r[12]; // 8010258C
  if (true) { c->lr=0x80102594u; dispatch(c,c->ctr); } // 80102590
L_80102594:;
  c->r[28]=c->r[28]+0x00000001u; // 80102594
  c->r[27]=c->r[27]+0x0000001Cu; // 80102598
  cmpu(c,0,c->r[28],0x0000000Cu); // 8010259C
  if (crb(c,0)) { IRQCHK(c); goto L_80102568; } // 801025A0
  c->r[31]=0u+0x803D0000u; // 801025A4
  c->r[31]=c->r[31]+0xFFFFA218u; // 801025A8
  c->r[3]=R32(c->r[31]+0x000016DCu); // 801025AC
  cmps(c,0,(int32_t)c->r[3],0); // 801025B0
  if (crb(c,2)) { goto L_801025C4; } // 801025B4
  c->lr=0x801025BCu; f_800F47C0(c); // 801025B8
  c->r[0]=0u+0x00000000u; // 801025BC
  W32(c->r[31]+0x000016DCu,c->r[0]); // 801025C0
L_801025C4:;
  c->r[0]=0u+0x00000000u; // 801025C4
  c->r[11]=c->r[1]+0x00000120u; // 801025C8
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801025CC
  W16(c->r[31]+0x000016E2u,c->r[0]); // 801025D0
  W16(c->r[29]+0x00001698u,c->r[0]); // 801025D4
  W16(c->r[29]+0x0000169Au,c->r[0]); // 801025D8
  W16(c->r[29]+0x000016A6u,c->r[0]); // 801025DC
  W16(c->r[29]+0x000016A4u,c->r[0]); // 801025E0
  c->lr=0x801025E8u; f_800ADA78(c); // 801025E4
  c->r[0]=R32(c->r[1]+0x00000124u); // 801025E8
  c->lr=c->r[0]; // 801025EC
  c->r[1]=c->r[1]+0x00000120u; // 801025F0
  return; // 801025F4
}

// btm_inq_db_init
void f_801025F8(Ctx* __restrict c) {
  trace_call(0x801025F8u);
  return; // 801025F8
}

// btm_inq_find_bdaddr
void f_801025FC(Ctx* __restrict c) {
  trace_call(0x801025FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801025FC
  c->r[0]=c->lr; // 80102600
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102604
  c->r[11]=c->r[1]+0x00000020u; // 80102608
  c->lr=0x80102610u; f_800ADA2C(c); // 8010260C
  c->r[31]=0u+0x803D0000u; // 80102610
  c->r[27]=c->r[3]|c->r[3]; // 80102614
  c->r[31]=c->r[31]+0xFFFFA218u; // 80102618
  c->r[0]=R8(c->r[31]+0x00001848u); // 8010261C
  c->r[29]=R32(c->r[31]+0x000016DCu); // 80102620
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80102624
  if (!crb(c,2)) { goto L_80102634; } // 80102628
  cmps(c,0,(int32_t)c->r[29],0); // 8010262C
  if (!crb(c,2)) { goto L_8010263C; } // 80102630
L_80102634:;
  c->r[3]=0u+0x00000000u; // 80102634
  goto L_801026C0; // 80102638
L_8010263C:;
  c->r[30]=R16(c->r[31]+0x000016E0u); // 8010263C
  c->r[28]=0u+0x00000000u; // 80102640
  goto L_80102680; // 80102644
L_80102648:;
  c->r[4]=c->r[27]|c->r[27]; // 80102648
  c->r[3]=c->r[29]+0x00000004u; // 8010264C
  c->r[5]=0u+0x00000006u; // 80102650
  c->lr=0x80102658u; f_800B3824(c); // 80102654
  cmps(c,0,(int32_t)c->r[3],0); // 80102658
  if (!crb(c,2)) { goto L_80102678; } // 8010265C
  c->r[3]=R32(c->r[29]+0x00000000u); // 80102660
  c->r[0]=R32(c->r[31]+0x000016C0u); // 80102664
  cmpu(c,0,c->r[3],c->r[0]); // 80102668
  if (!crb(c,2)) { goto L_80102678; } // 8010266C
  c->r[3]=0u+0x00000001u; // 80102670
  goto L_801026C0; // 80102674
L_80102678:;
  c->r[28]=c->r[28]+0x00000001u; // 80102678
  c->r[29]=c->r[29]+0x0000000Cu; // 8010267C
L_80102680:;
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 80102680
  cmpu(c,0,c->r[3],c->r[30]); // 80102684
  if (crb(c,0)) { IRQCHK(c); goto L_80102648; } // 80102688
  c->r[0]=R16(c->r[31]+0x000016E2u); // 8010268C
  cmpu(c,0,c->r[3],c->r[0]); // 80102690
  if (!crb(c,0)) { goto L_801026BC; } // 80102694
  c->r[0]=R32(c->r[31]+0x000016C0u); // 80102698
  c->r[4]=c->r[27]|c->r[27]; // 8010269C
  c->r[3]=c->r[29]+0x00000004u; // 801026A0
  c->r[5]=0u+0x00000006u; // 801026A4
  W32(c->r[29]+0x00000000u,c->r[0]); // 801026A8
  c->lr=0x801026B0u; f_800043C4(c); // 801026AC
  c->r[3]=R16(c->r[31]+0x000016E0u); // 801026B0
  c->r[0]=c->r[3]+0x00000001u; // 801026B4
  W16(c->r[31]+0x000016E0u,c->r[0]); // 801026B8
L_801026BC:;
  c->r[3]=0u+0x00000000u; // 801026BC
L_801026C0:;
  c->r[11]=c->r[1]+0x00000020u; // 801026C0
  c->lr=0x801026C8u; f_800ADA78(c); // 801026C4
  c->r[0]=R32(c->r[1]+0x00000024u); // 801026C8
  c->lr=c->r[0]; // 801026CC
  c->r[1]=c->r[1]+0x00000020u; // 801026D0
  return; // 801026D4
}

// btm_inq_db_new
void f_801026D8(Ctx* __restrict c) {
  trace_call(0x801026D8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801026D8
  c->r[0]=c->lr; // 801026DC
  c->r[4]=0u+0x803D0000u; // 801026E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801026E4
  c->r[4]=c->r[4]+0xFFFFA218u; // 801026E8
  c->r[0]=0u+0x0000000Cu; // 801026EC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801026F0
  c->r[31]=c->r[4]+0x000016E4u; // 801026F4
  c->r[4]=0u+0xFFFFFFFFu; // 801026F8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801026FC
  c->r[30]=c->r[31]|c->r[31]; // 80102700
  W32(c->r[1]+0x00000014u,c->r[29]); // 80102704
  c->r[29]=c->r[3]|c->r[3]; // 80102708
  c->r[3]=0u+0x00000000u; // 8010270C
  c->ctr=c->r[0]; // 80102710
L_80102714:;
  c->r[0]=R8(c->r[31]+0x0000001Au); // 80102714
  cmps(c,0,(int32_t)c->r[0],0); // 80102718
  if (!crb(c,2)) { goto L_80102750; } // 8010271C
  c->r[3]=c->r[31]|c->r[31]; // 80102720
  c->r[4]=0u+0x00000000u; // 80102724
  c->r[5]=0u+0x0000001Cu; // 80102728
  c->lr=0x80102730u; f_80004714(c); // 8010272C
  c->r[4]=c->r[29]|c->r[29]; // 80102730
  c->r[3]=c->r[31]+0x0000000Au; // 80102734
  c->r[5]=0u+0x00000006u; // 80102738
  c->lr=0x80102740u; f_800043C4(c); // 8010273C
  c->r[0]=0u+0x00000001u; // 80102740
  c->r[3]=c->r[31]|c->r[31]; // 80102744
  W8(c->r[31]+0x0000001Au,c->r[0]); // 80102748
  goto L_801027C0; // 8010274C
L_80102750:;
  c->r[0]=R32(c->r[31]+0x00000000u); // 80102750
  cmpu(c,0,c->r[0],c->r[4]); // 80102754
  if (!crb(c,0)) { goto L_80102764; } // 80102758
  c->r[30]=c->r[31]|c->r[31]; // 8010275C
  c->r[4]=c->r[0]|c->r[0]; // 80102760
L_80102764:;
  c->r[3]=c->r[3]+0x00000001u; // 80102764
  c->r[31]=c->r[31]+0x0000001Cu; // 80102768
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80102714; } // 8010276C
  c->r[3]=0u+0x803D0000u; // 80102770
  c->r[3]=c->r[3]+0xFFFFA218u; // 80102774
  c->r[12]=R32(c->r[3]+0x000016BCu); // 80102778
  cmps(c,0,(int32_t)c->r[12],0); // 8010277C
  if (crb(c,2)) { goto L_80102794; } // 80102780
  c->r[3]=c->r[30]+0x00000008u; // 80102784
  c->r[4]=0u+0x00000000u; // 80102788
  c->ctr=c->r[12]; // 8010278C
  if (true) { c->lr=0x80102794u; dispatch(c,c->ctr); } // 80102790
L_80102794:;
  c->r[3]=c->r[30]|c->r[30]; // 80102794
  c->r[4]=0u+0x00000000u; // 80102798
  c->r[5]=0u+0x0000001Cu; // 8010279C
  c->lr=0x801027A4u; f_80004714(c); // 801027A0
  c->r[4]=c->r[29]|c->r[29]; // 801027A4
  c->r[3]=c->r[30]+0x0000000Au; // 801027A8
  c->r[5]=0u+0x00000006u; // 801027AC
  c->lr=0x801027B4u; f_800043C4(c); // 801027B0
  c->r[0]=0u+0x00000001u; // 801027B4
  c->r[3]=c->r[30]|c->r[30]; // 801027B8
  W8(c->r[30]+0x0000001Au,c->r[0]); // 801027BC
L_801027C0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801027C0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801027C4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801027C8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801027CC
  c->lr=c->r[0]; // 801027D0
  c->r[1]=c->r[1]+0x00000020u; // 801027D4
  return; // 801027D8
}

// btm_set_inq_event_filter
void f_801027DC(Ctx* __restrict c) {
  trace_call(0x801027DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801027DC
  c->r[0]=c->lr; // 801027E0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801027E4
  c->r[11]=c->r[1]+0x00000030u; // 801027E8
  c->lr=0x801027F0u; f_800ADA2C(c); // 801027EC
  c->r[27]=c->r[3]|c->r[3]; // 801027F0
  c->r[28]=c->r[4]|c->r[4]; // 801027F4
  c->r[29]=c->r[1]+0x00000008u; // 801027F8
  c->r[30]=0u+0x00000006u; // 801027FC
  c->r[3]=0u+0x00000002u; // 80102800
  c->lr=0x80102808u; f_800F46D0(c); // 80102804
  cmps(c,0,(int32_t)c->r[3],0); // 80102808
  c->r[31]=c->r[3]|c->r[3]; // 8010280C
  if (crb(c,2)) { goto L_801028A4; } // 80102810
  cmps(c,0,(int32_t)c->r[27],1); // 80102814
  if (crb(c,2)) { goto L_80102838; } // 80102818
  if (!crb(c,0)) { goto L_8010282C; } // 8010281C
  cmps(c,0,(int32_t)c->r[27],0); // 80102820
  if (!crb(c,0)) { goto L_80102864; } // 80102824
  goto L_8010286C; // 80102828
L_8010282C:;
  cmps(c,0,(int32_t)c->r[27],3); // 8010282C
  if (!crb(c,0)) { goto L_8010286C; } // 80102830
  goto L_8010285C; // 80102834
L_80102838:;
  c->r[3]=c->r[29]|c->r[29]; // 80102838
  c->r[4]=c->r[28]|c->r[28]; // 8010283C
  c->r[5]=0u+0x00000003u; // 80102840
  c->lr=0x80102848u; f_800043C4(c); // 80102844
  c->r[3]=c->r[1]+0x0000000Bu; // 80102848
  c->r[4]=c->r[28]+0x00000003u; // 8010284C
  c->r[5]=0u+0x00000003u; // 80102850
  c->lr=0x80102858u; f_800043C4(c); // 80102854
  goto L_80102874; // 80102858
L_8010285C:;
  c->r[29]=c->r[28]|c->r[28]; // 8010285C
  goto L_80102874; // 80102860
L_80102864:;
  c->r[30]=0u+0x00000000u; // 80102864
  goto L_80102874; // 80102868
L_8010286C:;
  c->r[3]=0u+0x00000005u; // 8010286C
  goto L_801028A8; // 80102870
L_80102874:;
  c->r[4]=0u+0x803D0000u; // 80102874
  c->r[0]=0u+0x00000001u; // 80102878
  c->r[4]=c->r[4]+0xFFFFA218u; // 8010287C
  c->r[3]=c->r[31]|c->r[31]; // 80102880
  W8(c->r[4]+0x00001844u,c->r[0]); // 80102884
  c->r[5]=c->r[27]|c->r[27]; // 80102888
  c->r[6]=c->r[29]|c->r[29]; // 8010288C
  c->r[7]=c->r[30]|c->r[30]; // 80102890
  c->r[4]=0u+0x00000001u; // 80102894
  c->lr=0x8010289Cu; f_8010B67C(c); // 80102898
  c->r[3]=0u+0x00000001u; // 8010289C
  goto L_801028A8; // 801028A0
L_801028A4:;
  c->r[3]=0u+0x00000003u; // 801028A4
L_801028A8:;
  c->r[11]=c->r[1]+0x00000030u; // 801028A8
  c->lr=0x801028B0u; f_800ADA78(c); // 801028AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801028B0
  c->lr=c->r[0]; // 801028B4
  c->r[1]=c->r[1]+0x00000030u; // 801028B8
  return; // 801028BC
}

// btm_event_filter_complete
void f_801028C0(Ctx* __restrict c) {
  trace_call(0x801028C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801028C0
  c->r[0]=c->lr; // 801028C4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801028C8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801028CC
  c->r[31]=0u+0x803D0000u; // 801028D0
  c->r[31]=c->r[31]+0xFFFFA218u; // 801028D4
  W32(c->r[1]+0x00000018u,c->r[30]); // 801028D8
  W32(c->r[1]+0x00000014u,c->r[29]); // 801028DC
  c->r[4]=R8(c->r[31]+0x00001845u); // 801028E0
  c->r[29]=R32(c->r[31]+0x000016B8u); // 801028E4
  cmps(c,0,(int32_t)c->r[4],0); // 801028E8
  if (crb(c,2)) { goto L_801028FC; } // 801028EC
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 801028F0
  W8(c->r[31]+0x00001845u,c->r[0]); // 801028F4
  goto L_80102AC4; // 801028F8
L_801028FC:;
  c->r[0]=R8(c->r[31]+0x00001844u); // 801028FC
  cmpu(c,0,c->r[0],0x00000001u); // 80102900
  if (!crb(c,2)) { goto L_80102AC4; } // 80102904
  c->r[5]=R8(c->r[3]+0x00000000u); // 80102908
  cmps(c,0,(int32_t)c->r[5],0); // 8010290C
  if (crb(c,2)) { goto L_80102940; } // 80102910
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80102914
  cmpu(c,0,c->r[0],0x00000002u); // 80102918
  if (crb(c,0)) { goto L_80102934; } // 8010291C
  c->r[3]=0u+0x000D0000u; // 80102920
  c->r[4]=0u+0x80330000u; // 80102924
  c->r[3]=c->r[3]+0x00000001u; // 80102928
  c->r[4]=c->r[4]+0xFFFFB1F8u; // 8010292C
  c->lr=0x80102934u; f_800F72A0(c); // 80102930
L_80102934:;
  c->r[0]=0u+0x0000000Au; // 80102934
  W8(c->r[1]+0x00000008u,c->r[0]); // 80102938
  goto L_80102948; // 8010293C
L_80102940:;
  c->r[0]=0u+0x00000000u; // 80102940
  W8(c->r[1]+0x00000008u,c->r[0]); // 80102944
L_80102948:;
  c->r[3]=R8(c->r[31]+0x00001847u); // 80102948
  cmps(c,0,(int32_t)c->r[3],0); // 8010294C
  if (!crb(c,2)) { goto L_80102978; } // 80102950
  c->r[0]=0u+0x00000000u; // 80102954
  cmps(c,0,(int32_t)c->r[29],0); // 80102958
  W8(c->r[31]+0x00001844u,c->r[0]); // 8010295C
  if (crb(c,2)) { goto L_80102AC4; } // 80102960
  c->r[12]=c->r[29]|c->r[29]; // 80102964
  c->r[3]=c->r[1]+0x00000008u; // 80102968
  c->ctr=c->r[12]; // 8010296C
  if (true) { c->lr=0x80102974u; dispatch(c,c->ctr); } // 80102970
  goto L_80102AC4; // 80102974
L_80102978:;
  cmps(c,0,(int32_t)c->r[0],0); // 80102978
  if (crb(c,2)) { goto L_8010299C; } // 8010297C
  c->r[3]=0u+0x0000000Au; // 80102980
  c->lr=0x80102988u; f_80102D58(c); // 80102984
  c->r[0]=0u+0x00000000u; // 80102988
  W8(c->r[31]+0x00001844u,c->r[0]); // 8010298C
  W8(c->r[31]+0x00001848u,c->r[0]); // 80102990
  W8(c->r[31]+0x00001847u,c->r[0]); // 80102994
  goto L_80102AC4; // 80102998
L_8010299C:;
  cmpu(c,0,c->r[3],0x00000001u); // 8010299C
  if (!crb(c,2)) { goto L_801029E0; } // 801029A0
  c->r[3]=R8(c->r[31]+0x00001837u); // 801029A4
  c->r[4]=c->r[31]+0x00001838u; // 801029A8
  c->lr=0x801029B0u; f_801027DC(c); // 801029AC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801029B0
  W8(c->r[1]+0x00000008u,c->r[3]); // 801029B4
  cmpu(c,0,c->r[0],0x00000001u); // 801029B8
  if (!crb(c,2)) { goto L_801029CC; } // 801029BC
  c->r[0]=0u+0x00000002u; // 801029C0
  W8(c->r[31]+0x00001847u,c->r[0]); // 801029C4
  goto L_80102AC4; // 801029C8
L_801029CC:;
  c->r[0]=0u+0x00000000u; // 801029CC
  c->r[3]=0u+0x0000000Au; // 801029D0
  W8(c->r[31]+0x00001844u,c->r[0]); // 801029D4
  c->lr=0x801029DCu; f_80102D58(c); // 801029D8
  goto L_80102AC4; // 801029DC
L_801029E0:;
  c->r[4]=R8(c->r[31]+0x00001836u); // 801029E0
  c->r[0]=0u+0x00000003u; // 801029E4
  c->r[3]=0u+0x00000000u; // 801029E8
  W8(c->r[31]+0x00001847u,c->r[0]); // 801029EC
  cmpu(c,0,c->r[4],0x0000000Cu); // 801029F0
  c->r[0]=0u+0x0000000Cu; // 801029F4
  W8(c->r[31]+0x00001844u,c->r[3]); // 801029F8
  if (crb(c,1)) { goto L_80102A04; } // 801029FC
  c->r[0]=c->r[4]|c->r[4]; // 80102A00
L_80102A04:;
  c->r[3]=R8(c->r[31]+0x00001848u); // 80102A04
  c->r[29]=c->r[2]+0xFFFFB190u; // 80102A08
  W8(c->r[31]+0x00001836u,c->r[0]); // 80102A0C
  c->r[0]=rotl(c->r[3],0)&0x00000001u; cr0(c,c->r[0]); // 80102A10
  if (crb(c,2)) { goto L_80102A1C; } // 80102A14
  c->r[29]=c->r[2]+0xFFFFB194u; // 80102A18
L_80102A1C:;
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 80102A1C
  if (crb(c,2)) { goto L_80102A50; } // 80102A20
  c->r[3]=R16(c->r[31]+0x00001842u); // 80102A24
  c->r[5]=c->r[29]|c->r[29]; // 80102A28
  c->r[4]=R16(c->r[31]+0x00001840u); // 80102A2C
  c->r[6]=R8(c->r[31]+0x00001835u); // 80102A30
  c->r[7]=R8(c->r[31]+0x00001836u); // 80102A34
  c->lr=0x80102A3Cu; f_8010A2A4(c); // 80102A38
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102A3C
  if (!crb(c,2)) { goto L_80102AC4; } // 80102A40
  c->r[3]=0u+0x00000003u; // 80102A44
  c->lr=0x80102A4Cu; f_80102D58(c); // 80102A48
  goto L_80102AC4; // 80102A4C
L_80102A50:;
  c->r[30]=0u+0x803D0000u; // 80102A50
  c->r[30]=c->r[30]+0xFFFFA218u; // 80102A54
  c->r[3]=R32(c->r[30]+0x000016DCu); // 80102A58
  cmps(c,0,(int32_t)c->r[3],0); // 80102A5C
  if (crb(c,2)) { goto L_80102A70; } // 80102A60
  c->lr=0x80102A68u; f_800F47C0(c); // 80102A64
  c->r[0]=0u+0x00000000u; // 80102A68
  W32(c->r[30]+0x000016DCu,c->r[0]); // 80102A6C
L_80102A70:;
  c->r[0]=0u+0x00000000u; // 80102A70
  c->r[3]=0u+0x00000708u; // 80102A74
  W16(c->r[30]+0x000016E0u,c->r[0]); // 80102A78
  W16(c->r[30]+0x000016E2u,c->r[0]); // 80102A7C
  c->lr=0x80102A84u; f_800F4530(c); // 80102A80
  cmps(c,0,(int32_t)c->r[3],0); // 80102A84
  W32(c->r[31]+0x000016DCu,c->r[3]); // 80102A88
  if (crb(c,2)) { goto L_80102AA4; } // 80102A8C
  c->r[0]=0u+0x00000096u; // 80102A90
  c->r[4]=0u+0x00000000u; // 80102A94
  W16(c->r[31]+0x000016E2u,c->r[0]); // 80102A98
  c->r[5]=0u+0x00000708u; // 80102A9C
  c->lr=0x80102AA4u; f_80004714(c); // 80102AA0
L_80102AA4:;
  c->r[4]=R8(c->r[31]+0x00001835u); // 80102AA4
  c->r[3]=c->r[29]|c->r[29]; // 80102AA8
  c->r[5]=0u+0x00000000u; // 80102AAC
  c->lr=0x80102AB4u; f_8010A19C(c); // 80102AB0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102AB4
  if (!crb(c,2)) { goto L_80102AC4; } // 80102AB8
  c->r[3]=0u+0x00000003u; // 80102ABC
  c->lr=0x80102AC4u; f_80102D58(c); // 80102AC0
L_80102AC4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102AC4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80102AC8
  c->r[30]=R32(c->r[1]+0x00000018u); // 80102ACC
  c->r[29]=R32(c->r[1]+0x00000014u); // 80102AD0
  c->lr=c->r[0]; // 80102AD4
  c->r[1]=c->r[1]+0x00000020u; // 80102AD8
  return; // 80102ADC
}

// btm_process_inq_results
void f_80102AE0(Ctx* __restrict c) {
  trace_call(0x80102AE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFA0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102AE0
  c->r[0]=c->lr; // 80102AE4
  W32(c->r[1]+0x00000064u,c->r[0]); // 80102AE8
  c->r[11]=c->r[1]+0x00000060u; // 80102AEC
  c->lr=0x80102AF4u; { W32(c->r[11]+0xFFFFFFC0u,c->r[16]); W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80102AF0
  c->r[5]=0u+0x803D0000u; // 80102AF4
  c->r[18]=c->r[4]|c->r[4]; // 80102AF8
  c->r[27]=c->r[5]+0xFFFFA218u; // 80102AFC
  c->r[23]=0u+0x00000001u; // 80102B00
  c->r[0]=R8(c->r[27]+0x00001848u); // 80102B04
  c->r[21]=0u+0x00000000u; // 80102B08
  c->r[22]=R32(c->r[27]+0x000016B4u); // 80102B0C
  c->r[20]=0u+0x00000000u; // 80102B10
  cmps(c,0,(int32_t)c->r[0],0); // 80102B14
  if (crb(c,2)) { goto L_80102D40; } // 80102B18
  c->r[28]=R8(c->r[3]+0x00000000u); // 80102B1C
  c->r[17]=c->r[3]+0x00000001u; // 80102B20
  c->r[26]=0u+0x00000000u; // 80102B24
  c->r[31]=0u+0x0000007Fu; // 80102B28
  c->r[16]=0u+0x00000000u; // 80102B2C
  goto L_80102D34; // 80102B30
L_80102B34:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 80102B34
  cmps(c,0,(int32_t)c->r[18],0); // 80102B38
  W8(c->r[1]+0x00000011u,c->r[0]); // 80102B3C
  c->r[0]=R8(c->r[17]+0x00000001u); // 80102B40
  W8(c->r[1]+0x00000010u,c->r[0]); // 80102B44
  c->r[0]=R8(c->r[17]+0x00000002u); // 80102B48
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80102B4C
  c->r[0]=R8(c->r[17]+0x00000003u); // 80102B50
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80102B54
  c->r[0]=R8(c->r[17]+0x00000004u); // 80102B58
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80102B5C
  c->r[0]=R8(c->r[17]+0x00000005u); // 80102B60
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80102B64
  c->r[29]=R8(c->r[17]+0x00000006u); // 80102B68
  c->r[30]=R8(c->r[17]+0x00000007u); // 80102B6C
  c->r[17]=c->r[17]+0x00000008u; // 80102B70
  if (!crb(c,2)) { goto L_80102B80; } // 80102B74
  c->r[21]=R8(c->r[17]+0x00000000u); // 80102B78
  c->r[17]=c->r[17]+0x00000001u; // 80102B7C
L_80102B80:;
  c->r[0]=R8(c->r[17]+0x00000000u); // 80102B80
  cmps(c,0,(int32_t)c->r[18],0); // 80102B84
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80102B88
  c->r[0]=R8(c->r[17]+0x00000001u); // 80102B8C
  W8(c->r[1]+0x00000009u,c->r[0]); // 80102B90
  c->r[0]=R8(c->r[17]+0x00000002u); // 80102B94
  W8(c->r[1]+0x00000008u,c->r[0]); // 80102B98
  c->r[0]=R8(c->r[17]+0x00000004u); // 80102B9C
  c->r[3]=R8(c->r[17]+0x00000003u); // 80102BA0
  c->r[17]=c->r[17]+0x00000005u; // 80102BA4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80102BA8
  c->r[0]=c->r[3]+c->r[0]; // 80102BAC
  c->r[19]=rotl(c->r[0],0)&0x0000FFFFu; // 80102BB0
  if (crb(c,2)) { goto L_80102BC0; } // 80102BB4
  c->r[20]=R8(c->r[17]+0x00000000u); // 80102BB8
  c->r[17]=c->r[17]+0x00000001u; // 80102BBC
L_80102BC0:;
  c->r[3]=c->r[1]+0x0000000Cu; // 80102BC0
  c->lr=0x80102BC8u; f_801025FC(c); // 80102BC4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102BC8
  if (!crb(c,2)) { goto L_80102D30; } // 80102BCC
  c->r[12]=R32(c->r[27]+0x0000184Cu); // 80102BD0
  cmps(c,0,(int32_t)c->r[12],0); // 80102BD4
  if (crb(c,2)) { goto L_80102BF4; } // 80102BD8
  c->r[3]=c->r[1]+0x0000000Cu; // 80102BDC
  c->r[4]=c->r[1]+0x00000008u; // 80102BE0
  c->ctr=c->r[12]; // 80102BE4
  if (true) { c->lr=0x80102BECu; dispatch(c,c->ctr); } // 80102BE8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102BEC
  if (crb(c,2)) { goto L_80102D30; } // 80102BF0
L_80102BF4:;
  c->r[25]=c->r[27]+0x000016E4u; // 80102BF4
  c->r[24]=0u+0x00000000u; // 80102BF8
L_80102BFC:;
  c->r[0]=R8(c->r[25]+0x0000001Au); // 80102BFC
  cmps(c,0,(int32_t)c->r[0],0); // 80102C00
  if (crb(c,2)) { goto L_80102C24; } // 80102C04
  c->r[3]=c->r[25]+0x0000000Au; // 80102C08
  c->r[4]=c->r[1]+0x0000000Cu; // 80102C0C
  c->r[5]=0u+0x00000006u; // 80102C10
  c->lr=0x80102C18u; f_800B3824(c); // 80102C14
  cmps(c,0,(int32_t)c->r[3],0); // 80102C18
  if (!crb(c,2)) { goto L_80102C24; } // 80102C1C
  goto L_80102C38; // 80102C20
L_80102C24:;
  c->r[24]=c->r[24]+0x00000001u; // 80102C24
  c->r[25]=c->r[25]+0x0000001Cu; // 80102C28
  cmpu(c,0,c->r[24],0x0000000Cu); // 80102C2C
  if (crb(c,0)) { IRQCHK(c); goto L_80102BFC; } // 80102C30
  c->r[25]=0u+0x00000000u; // 80102C34
L_80102C38:;
  cmps(c,0,(int32_t)c->r[25],0); // 80102C38
  if (!crb(c,2)) { goto L_80102C54; } // 80102C3C
  c->r[3]=c->r[1]+0x0000000Cu; // 80102C40
  c->lr=0x80102C48u; f_801026D8(c); // 80102C44
  c->r[25]=c->r[3]|c->r[3]; // 80102C48
  c->r[23]=0u+0x00000001u; // 80102C4C
  goto L_80102C68; // 80102C50
L_80102C54:;
  c->r[3]=R32(c->r[25]+0x00000004u); // 80102C54
  c->r[0]=R32(c->r[27]+0x000016C0u); // 80102C58
  cmpu(c,0,c->r[3],c->r[0]); // 80102C5C
  if (!crb(c,2)) { goto L_80102C68; } // 80102C60
  c->r[23]=0u+0x00000000u; // 80102C64
L_80102C68:;
  cmpu(c,0,c->r[23],0x00000001u); // 80102C68
  if (!crb(c,2)) { goto L_80102D30; } // 80102C6C
  W8(c->r[25]+0x00000013u,c->r[29]); // 80102C70
  cmps(c,0,(int32_t)c->r[18],0); // 80102C74
  c->r[5]=R8(c->r[1]+0x00000008u); // 80102C78
  c->r[0]=c->r[19]|0x00008000u; // 80102C7C
  W8(c->r[25]+0x00000014u,c->r[30]); // 80102C80
  c->r[24]=c->r[25]+0x00000008u; // 80102C84
  c->r[4]=R8(c->r[1]+0x00000009u); // 80102C88
  W8(c->r[25]+0x00000015u,c->r[21]); // 80102C8C
  c->r[3]=R8(c->r[1]+0x0000000Au); // 80102C90
  W8(c->r[25]+0x00000010u,c->r[5]); // 80102C94
  W8(c->r[25]+0x00000011u,c->r[4]); // 80102C98
  W8(c->r[25]+0x00000012u,c->r[3]); // 80102C9C
  W16(c->r[25]+0x00000008u,c->r[0]); // 80102CA0
  if (crb(c,2)) { goto L_80102CB0; } // 80102CA4
  W8(c->r[24]+0x0000000Eu,c->r[20]); // 80102CA8
  goto L_80102CB4; // 80102CAC
L_80102CB0:;
  W8(c->r[24]+0x0000000Eu,c->r[31]); // 80102CB0
L_80102CB4:;
  c->lr=0x80102CB8u; f_800F55A0(c); // 80102CB4
  W32(c->r[25]+0x00000000u,c->r[3]); // 80102CB8
  c->r[0]=R32(c->r[27]+0x000016C0u); // 80102CBC
  W32(c->r[25]+0x00000004u,c->r[0]); // 80102CC0
  c->r[0]=R8(c->r[27]+0x00001848u); // 80102CC4
  c->r[3]=R8(c->r[27]+0x0000183Fu); // 80102CC8
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80102CCC
  c->r[0]=c->r[3]+0x00000001u; // 80102CD0
  W8(c->r[27]+0x0000183Fu,c->r[0]); // 80102CD4
  if (!crb(c,2)) { goto L_80102CF8; } // 80102CD8
  c->r[3]=R8(c->r[27]+0x00001836u); // 80102CDC
  cmps(c,0,(int32_t)c->r[3],0); // 80102CE0
  if (crb(c,2)) { goto L_80102CF8; } // 80102CE4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80102CE8
  cmpu(c,0,c->r[0],c->r[3]); // 80102CEC
  if (!crb(c,2)) { goto L_80102CF8; } // 80102CF0
  c->lr=0x80102CF8u; f_8010A244(c); // 80102CF4
L_80102CF8:;
  cmps(c,0,(int32_t)c->r[22],0); // 80102CF8
  W8(c->r[25]+0x00000018u,c->r[16]); // 80102CFC
  if (crb(c,2)) { goto L_80102D14; } // 80102D00
  c->r[12]=c->r[22]|c->r[22]; // 80102D04
  c->r[3]=c->r[24]|c->r[24]; // 80102D08
  c->ctr=c->r[12]; // 80102D0C
  if (true) { c->lr=0x80102D14u; dispatch(c,c->ctr); } // 80102D10
L_80102D14:;
  c->r[12]=R32(c->r[27]+0x000016BCu); // 80102D14
  cmps(c,0,(int32_t)c->r[12],0); // 80102D18
  if (crb(c,2)) { goto L_80102D30; } // 80102D1C
  c->r[3]=c->r[25]+0x00000008u; // 80102D20
  c->r[4]=0u+0x00000001u; // 80102D24
  c->ctr=c->r[12]; // 80102D28
  if (true) { c->lr=0x80102D30u; dispatch(c,c->ctr); } // 80102D2C
L_80102D30:;
  c->r[26]=c->r[26]+0x00000001u; // 80102D30
L_80102D34:;
  c->r[0]=rotl(c->r[26],0)&0x000000FFu; // 80102D34
  cmpu(c,0,c->r[0],c->r[28]); // 80102D38
  if (crb(c,0)) { IRQCHK(c); goto L_80102B34; } // 80102D3C
L_80102D40:;
  c->r[11]=c->r[1]+0x00000060u; // 80102D40
  c->lr=0x80102D48u; { c->r[16]=R32(c->r[11]+0xFFFFFFC0u); c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80102D44
  c->r[0]=R32(c->r[1]+0x00000064u); // 80102D48
  c->lr=c->r[0]; // 80102D4C
  c->r[1]=c->r[1]+0x00000060u; // 80102D50
  return; // 80102D54
}

// btm_process_inq_complete
void f_80102D58(Ctx* __restrict c) {
  trace_call(0x80102D58u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102D58
  c->r[0]=c->lr; // 80102D5C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80102D60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80102D64
  W32(c->r[1]+0x00000018u,c->r[30]); // 80102D68
  W32(c->r[1]+0x00000014u,c->r[29]); // 80102D6C
  c->r[29]=0u+0x803D0000u; // 80102D70
  c->r[29]=c->r[29]+0xFFFFA218u; // 80102D74
  W32(c->r[1]+0x00000010u,c->r[28]); // 80102D78
  c->r[0]=R8(c->r[29]+0x00001848u); // 80102D7C
  c->r[28]=R32(c->r[29]+0x000016B0u); // 80102D80
  cmps(c,0,(int32_t)c->r[0],0); // 80102D84
  if (crb(c,2)) { goto L_80102E3C; } // 80102D88
  c->r[4]=R32(c->r[29]+0x000016C0u); // 80102D8C
  cmps(c,0,(int32_t)c->r[3],0); // 80102D90
  c->r[3]=0u+0x0000000Au; // 80102D94
  c->r[0]=c->r[4]+0x00000001u; // 80102D98
  W32(c->r[29]+0x000016C0u,c->r[0]); // 80102D9C
  if (!crb(c,2)) { goto L_80102DA8; } // 80102DA0
  c->r[3]=0u+0x00000000u; // 80102DA4
L_80102DA8:;
  c->r[0]=R8(c->r[29]+0x00001848u); // 80102DA8
  W8(c->r[29]+0x0000183Eu,c->r[3]); // 80102DAC
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80102DB0
  if (!crb(c,2)) { goto L_80102E3C; } // 80102DB4
  c->r[31]=0u+0x803D0000u; // 80102DB8
  c->r[30]=0u+0x00000000u; // 80102DBC
  c->r[31]=c->r[31]+0xFFFFA218u; // 80102DC0
  W32(c->r[29]+0x000016B4u,c->r[30]); // 80102DC4
  c->r[3]=R32(c->r[31]+0x000016DCu); // 80102DC8
  W8(c->r[29]+0x00001848u,c->r[30]); // 80102DCC
  cmps(c,0,(int32_t)c->r[3],0); // 80102DD0
  W8(c->r[29]+0x00001847u,c->r[30]); // 80102DD4
  W32(c->r[29]+0x000016B0u,c->r[30]); // 80102DD8
  if (crb(c,2)) { goto L_80102DE8; } // 80102DDC
  c->lr=0x80102DE4u; f_800F47C0(c); // 80102DE0
  W32(c->r[31]+0x000016DCu,c->r[30]); // 80102DE4
L_80102DE8:;
  c->r[3]=0u+0x803D0000u; // 80102DE8
  c->r[4]=0u+0x00000000u; // 80102DEC
  c->r[3]=c->r[3]+0xFFFFA218u; // 80102DF0
  W16(c->r[31]+0x000016E0u,c->r[4]); // 80102DF4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80102DF8
  W16(c->r[31]+0x000016E2u,c->r[4]); // 80102DFC
  cmpu(c,0,c->r[0],0x00000005u); // 80102E00
  if (crb(c,0)) { goto L_80102E24; } // 80102E04
  c->r[3]=0u+0x000D0000u; // 80102E08
  c->r[4]=0u+0x80330000u; // 80102E0C
  c->r[5]=R8(c->r[29]+0x0000183Eu); // 80102E10
  c->r[3]=c->r[3]+0x00000004u; // 80102E14
  c->r[6]=R8(c->r[29]+0x0000183Fu); // 80102E18
  c->r[4]=c->r[4]+0xFFFFB234u; // 80102E1C
  c->lr=0x80102E24u; f_800F72C0(c); // 80102E20
L_80102E24:;
  cmps(c,0,(int32_t)c->r[28],0); // 80102E24
  if (crb(c,2)) { goto L_80102E3C; } // 80102E28
  c->r[12]=c->r[28]|c->r[28]; // 80102E2C
  c->r[3]=c->r[29]+0x0000183Eu; // 80102E30
  c->ctr=c->r[12]; // 80102E34
  if (true) { c->lr=0x80102E3Cu; dispatch(c,c->ctr); } // 80102E38
L_80102E3C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80102E3C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80102E40
  c->r[30]=R32(c->r[1]+0x00000018u); // 80102E44
  c->r[29]=R32(c->r[1]+0x00000014u); // 80102E48
  c->r[28]=R32(c->r[1]+0x00000010u); // 80102E4C
  c->lr=c->r[0]; // 80102E50
  c->r[1]=c->r[1]+0x00000020u; // 80102E54
  return; // 80102E58
}

// btm_initiate_rem_name
void f_80102E5C(Ctx* __restrict c) {
  trace_call(0x80102E5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102E5C
  c->r[0]=c->lr; // 80102E60
  W32(c->r[1]+0x00000034u,c->r[0]); // 80102E64
  c->r[11]=c->r[1]+0x00000030u; // 80102E68
  c->lr=0x80102E70u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80102E6C
  c->r[31]=0u+0x803D0000u; // 80102E70
  c->r[23]=c->r[3]|c->r[3]; // 80102E74
  c->r[24]=c->r[4]|c->r[4]; // 80102E78
  c->r[25]=c->r[5]|c->r[5]; // 80102E7C
  c->r[26]=c->r[6]|c->r[6]; // 80102E80
  c->r[27]=c->r[7]|c->r[7]; // 80102E84
  c->r[31]=c->r[31]+0xFFFFA218u; // 80102E88
  c->r[30]=0u+0x00000001u; // 80102E8C
  c->r[29]=0u+0x00000001u; // 80102E90
  c->r[28]=0u+0x00000001u; // 80102E94
  c->lr=0x80102E9Cu; f_800FFE84(c); // 80102E98
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80102E9C
  if (!crb(c,2)) { goto L_80102EAC; } // 80102EA0
  c->r[3]=0u+0x00000006u; // 80102EA4
  goto L_80102F94; // 80102EA8
L_80102EAC:;
  c->r[3]=R8(c->r[31]+0x000016AEu); // 80102EAC
  c->r[0]=c->r[3]&c->r[25]; cr0(c,c->r[0]); // 80102EB0
  if (!crb(c,2)) { goto L_80102F8C; } // 80102EB4
  cmpu(c,0,c->r[25],0x00000001u); // 80102EB8
  if (!crb(c,2)) { goto L_80102EF8; } // 80102EBC
  cmps(c,0,(int32_t)c->r[3],0); // 80102EC0
  if (crb(c,2)) { goto L_80102EF0; } // 80102EC4
  c->r[3]=c->r[23]|c->r[23]; // 80102EC8
  c->r[4]=c->r[31]+0x000016A8u; // 80102ECC
  c->r[5]=0u+0x00000006u; // 80102ED0
  c->lr=0x80102ED8u; f_800B3824(c); // 80102ED4
  cmps(c,0,(int32_t)c->r[3],0); // 80102ED8
  if (!crb(c,2)) { goto L_80102EE8; } // 80102EDC
  c->r[30]=0u+0x00000000u; // 80102EE0
  goto L_80102EF0; // 80102EE4
L_80102EE8:;
  c->r[3]=0u+0x00000002u; // 80102EE8
  goto L_80102F94; // 80102EEC
L_80102EF0:;
  W32(c->r[31]+0x0000167Cu,c->r[27]); // 80102EF0
  goto L_80102F08; // 80102EF4
L_80102EF8:;
  cmps(c,0,(int32_t)c->r[3],0); // 80102EF8
  if (crb(c,2)) { goto L_80102F08; } // 80102EFC
  c->r[3]=0u+0x00000002u; // 80102F00
  goto L_80102F94; // 80102F04
L_80102F08:;
  cmps(c,0,(int32_t)c->r[30],0); // 80102F08
  if (crb(c,2)) { goto L_80102F6C; } // 80102F0C
  c->r[4]=c->r[23]|c->r[23]; // 80102F10
  c->r[3]=c->r[31]+0x000016A8u; // 80102F14
  c->r[5]=0u+0x00000006u; // 80102F18
  c->lr=0x80102F20u; f_800043C4(c); // 80102F1C
  c->r[5]=c->r[26]|c->r[26]; // 80102F20
  c->r[3]=c->r[31]+0x00001680u; // 80102F24
  c->r[4]=0u+0x0000000Au; // 80102F28
  c->lr=0x80102F30u; f_800F7890(c); // 80102F2C
  cmps(c,0,(int32_t)c->r[24],0); // 80102F30
  if (crb(c,2)) { goto L_80102F54; } // 80102F34
  c->r[0]=R16(c->r[24]+0x00000000u); // 80102F38
  c->r[3]=c->r[23]|c->r[23]; // 80102F3C
  c->r[4]=R8(c->r[24]+0x0000000Bu); // 80102F40
  c->r[5]=R8(c->r[24]+0x0000000Du); // 80102F44
  c->r[6]=c->r[0]|0x00008000u; // 80102F48
  c->lr=0x80102F50u; f_8010AC70(c); // 80102F4C
  goto L_80102F68; // 80102F50
L_80102F54:;
  c->r[3]=c->r[23]|c->r[23]; // 80102F54
  c->r[4]=0u+0x00000001u; // 80102F58
  c->r[5]=0u+0x00000000u; // 80102F5C
  c->r[6]=0u+0x00000000u; // 80102F60
  c->lr=0x80102F68u; f_8010AC70(c); // 80102F64
L_80102F68:;
  c->r[29]=c->r[3]|c->r[3]; // 80102F68
L_80102F6C:;
  c->r[0]=rotl(c->r[29],0)&0x000000FFu; cr0(c,c->r[0]); // 80102F6C
  if (crb(c,2)) { goto L_80102F84; } // 80102F70
  c->r[0]=R8(c->r[31]+0x000016AEu); // 80102F74
  c->r[0]=c->r[0]|c->r[25]; // 80102F78
  W8(c->r[31]+0x000016AEu,c->r[0]); // 80102F7C
  goto L_80102F90; // 80102F80
L_80102F84:;
  c->r[28]=0u+0x00000003u; // 80102F84
  goto L_80102F90; // 80102F88
L_80102F8C:;
  c->r[28]=0u+0x00000002u; // 80102F8C
L_80102F90:;
  c->r[3]=c->r[28]|c->r[28]; // 80102F90
L_80102F94:;
  c->r[11]=c->r[1]+0x00000030u; // 80102F94
  c->lr=0x80102F9Cu; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80102F98
  c->r[0]=R32(c->r[1]+0x00000034u); // 80102F9C
  c->lr=c->r[0]; // 80102FA0
  c->r[1]=c->r[1]+0x00000030u; // 80102FA4
  return; // 80102FA8
}

// btm_process_remote_name
void f_80102FAC(Ctx* __restrict c) {
  trace_call(0x80102FACu);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80102FAC
  c->r[0]=c->lr; // 80102FB0
  W32(c->r[1]+0x00000124u,c->r[0]); // 80102FB4
  c->r[11]=c->r[1]+0x00000120u; // 80102FB8
  c->lr=0x80102FC0u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80102FBC
  c->r[31]=0u+0x803D0000u; // 80102FC0
  c->r[26]=c->r[4]|c->r[4]; // 80102FC4
  c->r[31]=c->r[31]+0xFFFFA218u; // 80102FC8
  c->r[27]=c->r[5]|c->r[5]; // 80102FCC
  c->r[30]=R32(c->r[31]+0x0000167Cu); // 80102FD0
  c->r[28]=c->r[6]|c->r[6]; // 80102FD4
  c->r[29]=R8(c->r[31]+0x000016AEu); // 80102FD8
  c->r[3]=c->r[31]+0x00001680u; // 80102FDC
  c->lr=0x80102FE4u; f_800F7900(c); // 80102FE0
  c->r[3]=0u+0x00000000u; // 80102FE4
  cmps(c,0,(int32_t)c->r[28],0); // 80102FE8
  W8(c->r[31]+0x000016AEu,c->r[3]); // 80102FEC
  if (!crb(c,2)) { goto L_801030A4; } // 80102FF0
  cmpu(c,0,c->r[27],0x000000F8u); // 80102FF4
  c->r[4]=c->r[1]+0x0000000Cu; // 80102FF8
  c->r[3]=0u+0x000000F8u; // 80102FFC
  if (!crb(c,0)) { goto L_80103008; } // 80103000
  c->r[3]=c->r[27]|c->r[27]; // 80103004
L_80103008:;
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[5]); // 80103008
  c->r[0]=0u+0x00000000u; // 8010300C
  W16(c->r[1]+0x0000000Au,c->r[3]); // 80103010
  W16(c->r[1]+0x00000008u,c->r[0]); // 80103014
  c->r[3]=c->r[5]|c->r[5]; // 80103018
  if (crb(c,2)) { goto L_801030B4; } // 8010301C
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 80103020
  c->ctr=c->r[0]; // 80103024
  if (crb(c,2)) { goto L_80103084; } // 80103028
L_8010302C:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 8010302C
  c->r[5]=c->r[5]+0xFFFFFFF8u; // 80103030
  W8(c->r[4]+0x00000000u,c->r[0]); // 80103034
  c->r[0]=R8(c->r[26]+0x00000001u); // 80103038
  W8(c->r[4]+0x00000001u,c->r[0]); // 8010303C
  c->r[0]=R8(c->r[26]+0x00000002u); // 80103040
  W8(c->r[4]+0x00000002u,c->r[0]); // 80103044
  c->r[0]=R8(c->r[26]+0x00000003u); // 80103048
  W8(c->r[4]+0x00000003u,c->r[0]); // 8010304C
  c->r[0]=R8(c->r[26]+0x00000004u); // 80103050
  W8(c->r[4]+0x00000004u,c->r[0]); // 80103054
  c->r[0]=R8(c->r[26]+0x00000005u); // 80103058
  W8(c->r[4]+0x00000005u,c->r[0]); // 8010305C
  c->r[0]=R8(c->r[26]+0x00000006u); // 80103060
  W8(c->r[4]+0x00000006u,c->r[0]); // 80103064
  c->r[0]=R8(c->r[26]+0x00000007u); // 80103068
  c->r[26]=c->r[26]+0x00000008u; // 8010306C
  W8(c->r[4]+0x00000007u,c->r[0]); // 80103070
  c->r[4]=c->r[4]+0x00000008u; // 80103074
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010302C; } // 80103078
  c->r[3]=c->r[3]&0x00000007u; cr0(c,c->r[3]); // 8010307C
  if (crb(c,2)) { goto L_801030B4; } // 80103080
L_80103084:;
  c->ctr=c->r[3]; // 80103084
L_80103088:;
  c->r[0]=R8(c->r[26]+0x00000000u); // 80103088
  c->r[5]=c->r[5]+0xFFFFFFFFu; // 8010308C
  c->r[26]=c->r[26]+0x00000001u; // 80103090
  W8(c->r[4]+0x00000000u,c->r[0]); // 80103094
  c->r[4]=c->r[4]+0x00000001u; // 80103098
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80103088; } // 8010309C
  goto L_801030B4; // 801030A0
L_801030A4:;
  c->r[0]=0u+0x00000009u; // 801030A4
  W16(c->r[1]+0x0000000Au,c->r[3]); // 801030A8
  W16(c->r[1]+0x00000008u,c->r[0]); // 801030AC
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 801030B0
L_801030B4:;
  c->r[3]=c->r[31]+0x000016A8u; // 801030B4
  c->r[4]=0u+0x00000000u; // 801030B8
  c->r[5]=0u+0x00000006u; // 801030BC
  c->lr=0x801030C4u; f_80004714(c); // 801030C0
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 801030C4
  if (crb(c,2)) { goto L_801030EC; } // 801030C8
  c->r[0]=0u+0x00000000u; // 801030CC
  cmps(c,0,(int32_t)c->r[30],0); // 801030D0
  W32(c->r[31]+0x0000167Cu,c->r[0]); // 801030D4
  if (crb(c,2)) { goto L_801030EC; } // 801030D8
  c->r[12]=c->r[30]|c->r[30]; // 801030DC
  c->r[3]=c->r[1]+0x00000008u; // 801030E0
  c->ctr=c->r[12]; // 801030E4
  if (true) { c->lr=0x801030ECu; dispatch(c,c->ctr); } // 801030E8
L_801030EC:;
  c->r[11]=c->r[1]+0x00000120u; // 801030EC
  c->lr=0x801030F4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801030F0
  c->r[0]=R32(c->r[1]+0x00000124u); // 801030F4
  c->lr=c->r[0]; // 801030F8
  c->r[1]=c->r[1]+0x00000120u; // 801030FC
  return; // 80103100
}

// btm_inq_rmt_name_failed
void f_80103104(Ctx* __restrict c) {
  trace_call(0x80103104u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103104
  c->r[0]=c->lr; // 80103108
  c->r[3]=0u+0x00000000u; // 8010310C
  c->r[4]=0u+0x00000000u; // 80103110
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103114
  c->r[5]=0u+0x00000000u; // 80103118
  c->r[6]=0u+0x0000001Fu; // 8010311C
  c->lr=0x80103124u; f_80102FAC(c); // 80103120
  c->r[3]=0u+0x00000000u; // 80103124
  c->r[4]=0u+0x00000000u; // 80103128
  c->r[5]=0u+0x0000001Fu; // 8010312C
  c->lr=0x80103134u; f_80106008(c); // 80103130
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103134
  c->lr=c->r[0]; // 80103138
  c->r[1]=c->r[1]+0x00000010u; // 8010313C
  return; // 80103140
}

// btm_init
void f_80103144(Ctx* __restrict c) {
  trace_call(0x80103144u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103144
  c->r[0]=c->lr; // 80103148
  c->r[4]=0u+0x00000000u; // 8010314C
  c->r[5]=0u+0x000027C4u; // 80103150
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103154
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103158
  c->r[31]=0u+0x803D0000u; // 8010315C
  c->r[3]=c->r[31]+0xFFFFA218u; // 80103160
  c->lr=0x80103168u; f_80004714(c); // 80103164
  c->r[3]=c->r[31]+0xFFFFA218u; // 80103168
  c->r[0]=0u+0x00000000u; // 8010316C
  W8(c->r[3]+0x000027C0u,c->r[0]); // 80103170
  c->lr=0x80103178u; f_801025F8(c); // 80103174
  c->lr=0x8010317Cu; f_800FD7E0(c); // 80103178
  c->r[3]=0u+0x00000002u; // 8010317C
  c->lr=0x80103184u; f_80105EF8(c); // 80103180
  c->lr=0x80103188u; f_80103E34(c); // 80103184
  c->lr=0x8010318Cu; f_800FFBF0(c); // 80103188
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010318C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103190
  c->lr=c->r[0]; // 80103194
  c->r[1]=c->r[1]+0x00000010u; // 80103198
  return; // 8010319C
}

// BTM_PmRegister
void f_801031A0(Ctx* __restrict c) {
  trace_call(0x801031A0u);
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 801031A0
  if (crb(c,2)) { goto L_801031DC; } // 801031A4
  c->r[0]=R8(c->r[4]+0x00000000u); // 801031A8
  cmpu(c,0,c->r[0],0x00000002u); // 801031AC
  if (crb(c,0)) { goto L_801031BC; } // 801031B0
  c->r[3]=0u+0x00000005u; // 801031B4
  return; // 801031B8
L_801031BC:;
  c->r[3]=0u+0x803D0000u; // 801031BC
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801031C0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801031C4
  c->r[5]=0u+0x00000000u; // 801031C8
  c->r[4]=c->r[3]+c->r[0]; // 801031CC
  W8(c->r[4]+0x00000558u,c->r[5]); // 801031D0
  c->r[3]=0u+0x00000000u; // 801031D4
  return; // 801031D8
L_801031DC:;
  c->r[6]=0u+0x803D0000u; // 801031DC
  c->r[0]=0u+0x00000002u; // 801031E0
  c->r[6]=c->r[6]+0xFFFFA218u; // 801031E4
  c->r[7]=0u+0x00000000u; // 801031E8
  c->ctr=c->r[0]; // 801031EC
L_801031F0:;
  c->r[0]=R8(c->r[6]+0x00000558u); // 801031F0
  cmps(c,0,(int32_t)c->r[0],0); // 801031F4
  if (!crb(c,2)) { goto L_80103248; } // 801031F8
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 801031FC
  if (crb(c,2)) { goto L_80103228; } // 80103200
  cmps(c,0,(int32_t)c->r[5],0); // 80103204
  if (!crb(c,2)) { goto L_80103214; } // 80103208
  c->r[3]=0u+0x00000005u; // 8010320C
  return; // 80103210
L_80103214:;
  c->r[6]=0u+0x803D0000u; // 80103214
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 80103218
  c->r[6]=c->r[6]+0xFFFFA218u; // 8010321C
  c->r[6]=c->r[6]+c->r[0]; // 80103220
  W32(c->r[6]+0x00000554u,c->r[5]); // 80103224
L_80103228:;
  c->r[5]=0u+0x803D0000u; // 80103228
  c->r[0]=rotl(c->r[7],3)&0xFFFFFFF8u; // 8010322C
  c->r[5]=c->r[5]+0xFFFFA218u; // 80103230
  c->r[5]=c->r[5]+c->r[0]; // 80103234
  W8(c->r[5]+0x00000558u,c->r[3]); // 80103238
  c->r[3]=0u+0x00000000u; // 8010323C
  W8(c->r[4]+0x00000000u,c->r[7]); // 80103240
  return; // 80103244
L_80103248:;
  c->r[6]=c->r[6]+0x00000008u; // 80103248
  c->r[7]=c->r[7]+0x00000001u; // 8010324C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801031F0; } // 80103250
  c->r[3]=0u+0x00000003u; // 80103254
  return; // 80103258
}

// BTM_SetPowerMode
void f_8010325C(Ctx* __restrict c) {
  trace_call(0x8010325Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010325C
  c->r[0]=c->lr; // 80103260
  W32(c->r[1]+0x00000024u,c->r[0]); // 80103264
  c->r[11]=c->r[1]+0x00000020u; // 80103268
  c->lr=0x80103270u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010326C
  cmpu(c,0,c->r[3],0x00000002u); // 80103270
  c->r[27]=c->r[3]|c->r[3]; // 80103274
  c->r[26]=c->r[4]|c->r[4]; // 80103278
  c->r[28]=c->r[5]|c->r[5]; // 8010327C
  if (crb(c,0)) { goto L_80103288; } // 80103280
  c->r[27]=0u+0x00000080u; // 80103284
L_80103288:;
  cmps(c,0,(int32_t)c->r[5],0); // 80103288
  if (!crb(c,2)) { goto L_80103298; } // 8010328C
  c->r[3]=0u+0x00000005u; // 80103290
  goto L_80103414; // 80103294
L_80103298:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 80103298
  c->r[3]=0u+0x803D0000u; // 8010329C
  c->r[3]=c->r[3]+0xFFFFA218u; // 801032A0
  c->r[29]=0u+0x00000000u; // 801032A4
  c->r[31]=rotl(c->r[0],0)&0xFFFFFFEFu; // 801032A8
  c->r[30]=c->r[3]+0x00000034u; // 801032AC
L_801032B0:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 801032B0
  cmps(c,0,(int32_t)c->r[0],0); // 801032B4
  if (crb(c,2)) { goto L_801032D4; } // 801032B8
  c->r[4]=c->r[26]|c->r[26]; // 801032BC
  c->r[3]=c->r[30]+0x00000008u; // 801032C0
  c->r[5]=0u+0x00000006u; // 801032C4
  c->lr=0x801032CCu; f_800B3824(c); // 801032C8
  cmps(c,0,(int32_t)c->r[3],0); // 801032CC
  if (crb(c,2)) { goto L_801032E4; } // 801032D0
L_801032D4:;
  c->r[29]=c->r[29]+0x00000001u; // 801032D4
  c->r[30]=c->r[30]+0x0000011Cu; // 801032D8
  cmpu(c,0,c->r[29],0x00000004u); // 801032DC
  if (crb(c,0)) { IRQCHK(c); goto L_801032B0; } // 801032E0
L_801032E4:;
  c->r[30]=rotl(c->r[29],0)&0x000000FFu; // 801032E4
  cmps(c,0,(int32_t)c->r[30],4); // 801032E8
  if (!crb(c,2)) { goto L_801032F8; } // 801032EC
  c->r[3]=0u+0x00000007u; // 801032F0
  goto L_80103414; // 801032F4
L_801032F8:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)34); // 801032F8
  c->r[4]=0u+0x803D0000u; // 801032FC
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; cr0(c,c->r[3]); // 80103300
  c->r[4]=c->r[4]+0xFFFFA218u; // 80103304
  c->r[4]=c->r[4]+c->r[0]; // 80103308
  c->r[29]=c->r[4]+0x000004CCu; // 8010330C
  if (crb(c,2)) { goto L_80103340; } // 80103310
  c->r[26]=c->r[3]+0xFFFFFFFFu; // 80103314
  c->lr=0x8010331Cu; f_80100D14(c); // 80103318
  c->r[4]=c->r[2]+0xFFFFB198u; // 8010331C
  c->r[5]=c->r[2]+0xFFFFB19Cu; // 80103320
  c->r[0]=R8(c->r[4]+c->r[26]); // 80103324
  c->r[4]=R8(c->r[5]+c->r[26]); // 80103328
  c->r[0]=R8(c->r[3]+c->r[0]); // 8010332C
  c->r[0]=c->r[4]&c->r[0]; cr0(c,c->r[0]); // 80103330
  if (!crb(c,2)) { goto L_80103340; } // 80103334
  c->r[3]=0u+0x00000004u; // 80103338
  goto L_80103414; // 8010333C
L_80103340:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 80103340
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 80103344
  cmpu(c,0,c->r[3],c->r[0]); // 80103348
  if (!crb(c,2)) { goto L_8010337C; } // 8010334C
  cmps(c,0,(int32_t)c->r[3],0); // 80103350
  if (crb(c,2)) { goto L_80103374; } // 80103354
  c->r[3]=R16(c->r[29]+0x0000001Eu); // 80103358
  c->r[0]=R16(c->r[28]+0x00000000u); // 8010335C
  cmpu(c,0,c->r[0],c->r[3]); // 80103360
  if (crb(c,0)) { goto L_8010337C; } // 80103364
  c->r[0]=R16(c->r[28]+0x00000002u); // 80103368
  cmpu(c,0,c->r[0],c->r[3]); // 8010336C
  if (crb(c,1)) { goto L_8010337C; } // 80103370
L_80103374:;
  c->r[3]=0u+0x00000000u; // 80103374
  goto L_80103414; // 80103378
L_8010337C:;
  cmpu(c,0,c->r[27],0x00000080u); // 8010337C
  if (crb(c,2)) { goto L_801033D4; } // 80103380
  c->r[3]=0u+0x803D0000u; // 80103384
  c->r[0]=rotl(c->r[27],3)&0x000007F8u; // 80103388
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010338C
  c->r[3]=c->r[3]+c->r[0]; // 80103390
  c->r[0]=R8(c->r[3]+0x00000558u); // 80103394
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 80103398
  if (crb(c,2)) { goto L_801033D4; } // 8010339C
  c->r[4]=R16(c->r[28]+0x00000000u); // 801033A0
  c->r[5]=(uint32_t)((int32_t)c->r[27]*(int32_t)10); // 801033A4
  c->r[3]=R16(c->r[28]+0x00000002u); // 801033A8
  c->r[0]=0u+0x00000001u; // 801033AC
  {uint32_t ea=c->r[5]+c->r[29]; W16(ea,c->r[4]); c->r[5]=ea;} // 801033B0
  W16(c->r[5]+0x00000002u,c->r[3]); // 801033B4
  c->r[4]=R16(c->r[28]+0x00000004u); // 801033B8
  c->r[3]=R16(c->r[28]+0x00000006u); // 801033BC
  W16(c->r[5]+0x00000004u,c->r[4]); // 801033C0
  W16(c->r[5]+0x00000006u,c->r[3]); // 801033C4
  c->r[3]=R16(c->r[28]+0x00000008u); // 801033C8
  W16(c->r[5]+0x00000008u,c->r[3]); // 801033CC
  W8(c->r[29]+0x00000021u,c->r[0]); // 801033D0
L_801033D4:;
  c->r[0]=R8(c->r[29]+0x00000020u); // 801033D4
  cmpu(c,0,c->r[0],0x00000001u); // 801033D8
  if (crb(c,2)) { goto L_801033FC; } // 801033DC
  cmpu(c,0,c->r[0],0x00000004u); // 801033E0
  if (crb(c,2)) { goto L_801033FC; } // 801033E4
  c->r[3]=0u+0x803D0000u; // 801033E8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801033EC
  c->r[0]=R8(c->r[3]+0x00000564u); // 801033F0
  cmpu(c,0,c->r[0],0x00000004u); // 801033F4
  if (crb(c,2)) { goto L_80103404; } // 801033F8
L_801033FC:;
  c->r[3]=0u+0x0000000Du; // 801033FC
  goto L_80103414; // 80103400
L_80103404:;
  c->r[3]=c->r[27]|c->r[27]; // 80103404
  c->r[4]=c->r[30]|c->r[30]; // 80103408
  c->r[5]=c->r[28]|c->r[28]; // 8010340C
  c->lr=0x80103414u; f_80103928(c); // 80103410
L_80103414:;
  c->r[11]=c->r[1]+0x00000020u; // 80103414
  c->lr=0x8010341Cu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80103418
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010341C
  c->lr=c->r[0]; // 80103420
  c->r[1]=c->r[1]+0x00000020u; // 80103424
  return; // 80103428
}

// BTM_ReadPowerMode
void f_8010342C(Ctx* __restrict c) {
  trace_call(0x8010342Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010342C
  c->r[0]=c->lr; // 80103430
  c->r[5]=0u+0x803D0000u; // 80103434
  W32(c->r[1]+0x00000024u,c->r[0]); // 80103438
  c->r[5]=c->r[5]+0xFFFFA218u; // 8010343C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80103440
  c->r[31]=0u+0x00000000u; // 80103444
  W32(c->r[1]+0x00000018u,c->r[30]); // 80103448
  c->r[30]=c->r[5]+0x00000034u; // 8010344C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80103450
  c->r[29]=c->r[4]|c->r[4]; // 80103454
  W32(c->r[1]+0x00000010u,c->r[28]); // 80103458
  c->r[28]=c->r[3]|c->r[3]; // 8010345C
L_80103460:;
  c->r[0]=R8(c->r[30]+0x00000119u); // 80103460
  cmps(c,0,(int32_t)c->r[0],0); // 80103464
  if (crb(c,2)) { goto L_80103484; } // 80103468
  c->r[4]=c->r[28]|c->r[28]; // 8010346C
  c->r[3]=c->r[30]+0x00000008u; // 80103470
  c->r[5]=0u+0x00000006u; // 80103474
  c->lr=0x8010347Cu; f_800B3824(c); // 80103478
  cmps(c,0,(int32_t)c->r[3],0); // 8010347C
  if (crb(c,2)) { goto L_80103494; } // 80103480
L_80103484:;
  c->r[31]=c->r[31]+0x00000001u; // 80103484
  c->r[30]=c->r[30]+0x0000011Cu; // 80103488
  cmpu(c,0,c->r[31],0x00000004u); // 8010348C
  if (crb(c,0)) { IRQCHK(c); goto L_80103460; } // 80103490
L_80103494:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 80103494
  cmps(c,0,(int32_t)c->r[0],4); // 80103498
  if (!crb(c,2)) { goto L_801034A8; } // 8010349C
  c->r[3]=0u+0x00000007u; // 801034A0
  goto L_801034C4; // 801034A4
L_801034A8:;
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 801034A8
  c->r[4]=0u+0x803D0000u; // 801034AC
  c->r[3]=0u+0x00000000u; // 801034B0
  c->r[4]=c->r[4]+0xFFFFA218u; // 801034B4
  c->r[4]=c->r[4]+c->r[0]; // 801034B8
  c->r[0]=R8(c->r[4]+0x000004ECu); // 801034BC
  W8(c->r[29]+0x00000000u,c->r[0]); // 801034C0
L_801034C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801034C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801034C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801034CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801034D0
  c->r[28]=R32(c->r[1]+0x00000010u); // 801034D4
  c->lr=c->r[0]; // 801034D8
  c->r[1]=c->r[1]+0x00000020u; // 801034DC
  return; // 801034E0
}

// btm_pm_reset
void f_801034E4(Ctx* __restrict c) {
  trace_call(0x801034E4u);
  c->r[3]=0u+0x803D0000u; // 801034E4
  c->r[12]=0u+0x00000000u; // 801034E8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801034EC
  c->r[0]=R8(c->r[3]+0x00000565u); // 801034F0
  cmpu(c,0,c->r[0],0x00000080u); // 801034F4
  if (crb(c,2)) { goto L_80103514; } // 801034F8
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 801034FC
  c->r[3]=c->r[3]+c->r[0]; // 80103500
  c->r[0]=R8(c->r[3]+0x00000558u); // 80103504
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80103508
  if (crb(c,2)) { goto L_80103514; } // 8010350C
  c->r[12]=R32(c->r[3]+0x00000554u); // 80103510
L_80103514:;
  c->r[3]=0u+0x803D0000u; // 80103514
  cmps(c,0,(int32_t)c->r[12],0); // 80103518
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010351C
  c->r[0]=0u+0x00000000u; // 80103520
  c->r[4]=0u+0x00000004u; // 80103524
  W8(c->r[3]+0x00000558u,c->r[0]); // 80103528
  W8(c->r[3]+0x00000564u,c->r[4]); // 8010352C
  W8(c->r[3]+0x00000560u,c->r[0]); // 80103530
  if (crb(c,2)) return; // 80103534
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)284); // 80103538
  c->r[4]=0u+0x00000005u; // 8010353C
  c->r[5]=0u+0x0000000Cu; // 80103540
  c->r[6]=0u+0x00000000u; // 80103544
  c->r[3]=c->r[3]+c->r[0]; // 80103548
  c->r[3]=c->r[3]+0x0000003Cu; // 8010354C
  c->ctr=c->r[12]; // 80103550
  if (true) { dispatch(c,c->ctr); return; } // 80103554
  return; // 80103558
}

// btm_pm_sm_alloc
void f_8010355C(Ctx* __restrict c) {
  trace_call(0x8010355Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010355C
  c->r[0]=c->lr; // 80103560
  c->r[4]=0u+0x00000000u; // 80103564
  c->r[5]=0u+0x00000022u; // 80103568
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010356C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)34); // 80103570
  c->r[3]=0u+0x803D0000u; // 80103574
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80103578
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010357C
  c->r[3]=c->r[3]+c->r[0]; // 80103580
  c->r[31]=c->r[3]+0x000004CCu; // 80103584
  c->r[3]=c->r[31]|c->r[31]; // 80103588
  c->lr=0x80103590u; f_80004714(c); // 8010358C
  c->r[0]=0u+0x00000000u; // 80103590
  W8(c->r[31]+0x00000020u,c->r[0]); // 80103594
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80103598
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010359C
  c->lr=c->r[0]; // 801035A0
  c->r[1]=c->r[1]+0x00000010u; // 801035A4
  return; // 801035A8
}

// btm_pm_compare_modes
void f_801035AC(Ctx* __restrict c) {
  trace_call(0x801035ACu);
  cmps(c,0,(int32_t)c->r[3],0); // 801035AC
  if (!crb(c,2)) { goto L_801035E4; } // 801035B0
  c->r[6]=R16(c->r[4]+0x00000000u); // 801035B4
  c->r[3]=c->r[4]|c->r[4]; // 801035B8
  c->r[0]=R16(c->r[4]+0x00000002u); // 801035BC
  W16(c->r[5]+0x00000000u,c->r[6]); // 801035C0
  W16(c->r[5]+0x00000002u,c->r[0]); // 801035C4
  c->r[6]=R16(c->r[4]+0x00000004u); // 801035C8
  c->r[0]=R16(c->r[4]+0x00000006u); // 801035CC
  W16(c->r[5]+0x00000004u,c->r[6]); // 801035D0
  W16(c->r[5]+0x00000006u,c->r[0]); // 801035D4
  c->r[0]=R16(c->r[4]+0x00000008u); // 801035D8
  W16(c->r[5]+0x00000008u,c->r[0]); // 801035DC
  return; // 801035E0
L_801035E4:;
  c->r[9]=R8(c->r[4]+0x00000008u); // 801035E4
  cmps(c,0,(int32_t)c->r[9],0); // 801035E8
  if (crb(c,2)) { goto L_801035FC; } // 801035EC
  c->r[8]=R8(c->r[3]+0x00000008u); // 801035F0
  cmps(c,0,(int32_t)c->r[8],0); // 801035F4
  if (!crb(c,2)) { goto L_80103604; } // 801035F8
L_801035FC:;
  c->r[3]=0u+0x00000000u; // 801035FC
  return; // 80103600
L_80103604:;
  c->r[0]=rotl(c->r[8],0)&0x00000010u; cr0(c,c->r[0]); // 80103604
  if (crb(c,2)) { goto L_80103648; } // 80103608
  c->r[4]=R16(c->r[3]+0x00000000u); // 8010360C
  c->r[0]=R16(c->r[3]+0x00000002u); // 80103610
  W16(c->r[5]+0x00000000u,c->r[4]); // 80103614
  W16(c->r[5]+0x00000002u,c->r[0]); // 80103618
  c->r[4]=R16(c->r[3]+0x00000004u); // 8010361C
  c->r[0]=R16(c->r[3]+0x00000006u); // 80103620
  W16(c->r[5]+0x00000004u,c->r[4]); // 80103624
  W16(c->r[5]+0x00000006u,c->r[0]); // 80103628
  c->r[0]=R16(c->r[3]+0x00000008u); // 8010362C
  c->r[3]=c->r[5]|c->r[5]; // 80103630
  W16(c->r[5]+0x00000008u,c->r[0]); // 80103634
  c->r[0]=R8(c->r[5]+0x00000008u); // 80103638
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8010363C
  W8(c->r[5]+0x00000008u,c->r[0]); // 80103640
  return; // 80103644
L_80103648:;
  c->r[0]=rotl(c->r[9],0)&0x00000010u; cr0(c,c->r[0]); // 80103648
  if (crb(c,2)) { goto L_8010368C; } // 8010364C
  c->r[6]=R16(c->r[4]+0x00000000u); // 80103650
  c->r[3]=c->r[5]|c->r[5]; // 80103654
  c->r[0]=R16(c->r[4]+0x00000002u); // 80103658
  W16(c->r[5]+0x00000000u,c->r[6]); // 8010365C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80103660
  c->r[6]=R16(c->r[4]+0x00000004u); // 80103664
  c->r[0]=R16(c->r[4]+0x00000006u); // 80103668
  W16(c->r[5]+0x00000004u,c->r[6]); // 8010366C
  W16(c->r[5]+0x00000006u,c->r[0]); // 80103670
  c->r[0]=R16(c->r[4]+0x00000008u); // 80103674
  W16(c->r[5]+0x00000008u,c->r[0]); // 80103678
  c->r[0]=R8(c->r[5]+0x00000008u); // 8010367C
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80103680
  W8(c->r[5]+0x00000008u,c->r[0]); // 80103684
  return; // 80103688
L_8010368C:;
  c->r[7]=c->r[8]+0xFFFFFFFFu; // 8010368C
  c->r[6]=0u+0x802D0000u; // 80103690
  c->r[0]=rotl(c->r[7],2)&0xFFFFFFFCu; // 80103694
  c->r[0]=c->r[0]-c->r[7]; // 80103698
  c->r[6]=c->r[6]+0xFFFF9B08u; // 8010369C
  c->r[7]=c->r[9]+c->r[0]; // 801036A0
  c->r[0]=c->r[7]+0xFFFFFFFFu; // 801036A4
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 801036A8
  c->r[0]=R8(c->r[6]+c->r[0]); // 801036AC
  cmps(c,0,(int32_t)c->r[0],2); // 801036B0
  if (crb(c,2)) { goto L_80103700; } // 801036B4
  if (!crb(c,0)) { goto L_801036C8; } // 801036B8
  cmps(c,0,(int32_t)c->r[0],1); // 801036BC
  if (!crb(c,0)) { goto L_801036D4; } // 801036C0
  goto L_801037C0; // 801036C4
L_801036C8:;
  cmps(c,0,(int32_t)c->r[0],4); // 801036C8
  if (!crb(c,0)) { goto L_801037C0; } // 801036CC
  goto L_80103730; // 801036D0
L_801036D4:;
  c->r[4]=R16(c->r[3]+0x00000000u); // 801036D4
  c->r[0]=R16(c->r[3]+0x00000002u); // 801036D8
  W16(c->r[5]+0x00000000u,c->r[4]); // 801036DC
  W16(c->r[5]+0x00000002u,c->r[0]); // 801036E0
  c->r[4]=R16(c->r[3]+0x00000004u); // 801036E4
  c->r[0]=R16(c->r[3]+0x00000006u); // 801036E8
  W16(c->r[5]+0x00000004u,c->r[4]); // 801036EC
  W16(c->r[5]+0x00000006u,c->r[0]); // 801036F0
  c->r[0]=R16(c->r[3]+0x00000008u); // 801036F4
  W16(c->r[5]+0x00000008u,c->r[0]); // 801036F8
  return; // 801036FC
L_80103700:;
  c->r[6]=R16(c->r[4]+0x00000000u); // 80103700
  c->r[3]=c->r[4]|c->r[4]; // 80103704
  c->r[0]=R16(c->r[4]+0x00000002u); // 80103708
  W16(c->r[5]+0x00000000u,c->r[6]); // 8010370C
  W16(c->r[5]+0x00000002u,c->r[0]); // 80103710
  c->r[6]=R16(c->r[4]+0x00000004u); // 80103714
  c->r[0]=R16(c->r[4]+0x00000006u); // 80103718
  W16(c->r[5]+0x00000004u,c->r[6]); // 8010371C
  W16(c->r[5]+0x00000006u,c->r[0]); // 80103720
  c->r[0]=R16(c->r[4]+0x00000008u); // 80103724
  W16(c->r[5]+0x00000008u,c->r[0]); // 80103728
  return; // 8010372C
L_80103730:;
  W8(c->r[5]+0x00000008u,c->r[8]); // 80103730
  c->r[6]=R16(c->r[4]+0x00000000u); // 80103734
  c->r[0]=R16(c->r[3]+0x00000000u); // 80103738
  cmpu(c,0,c->r[0],c->r[6]); // 8010373C
  if (!crb(c,0)) { goto L_80103748; } // 80103740
  c->r[6]=c->r[0]|c->r[0]; // 80103744
L_80103748:;
  W16(c->r[5]+0x00000000u,c->r[6]); // 80103748
  c->r[7]=R16(c->r[4]+0x00000002u); // 8010374C
  c->r[0]=R16(c->r[3]+0x00000002u); // 80103750
  cmpu(c,0,c->r[0],c->r[7]); // 80103754
  if (!crb(c,1)) { goto L_80103760; } // 80103758
  c->r[7]=c->r[0]|c->r[0]; // 8010375C
L_80103760:;
  c->r[6]=R16(c->r[5]+0x00000000u); // 80103760
  c->r[0]=rotl(c->r[7],0)&0x0000FFFFu; // 80103764
  W16(c->r[5]+0x00000002u,c->r[7]); // 80103768
  cmpu(c,0,c->r[6],c->r[0]); // 8010376C
  if (!crb(c,0)) { goto L_8010377C; } // 80103770
  c->r[3]=0u+0x00000000u; // 80103774
  return; // 80103778
L_8010377C:;
  c->r[0]=R8(c->r[5]+0x00000008u); // 8010377C
  cmpu(c,0,c->r[0],0x00000002u); // 80103780
  if (!crb(c,2)) { goto L_801037B8; } // 80103784
  c->r[6]=R16(c->r[4]+0x00000004u); // 80103788
  c->r[0]=R16(c->r[3]+0x00000004u); // 8010378C
  cmpu(c,0,c->r[0],c->r[6]); // 80103790
  if (!crb(c,1)) { goto L_8010379C; } // 80103794
  c->r[6]=c->r[0]|c->r[0]; // 80103798
L_8010379C:;
  W16(c->r[5]+0x00000004u,c->r[6]); // 8010379C
  c->r[4]=R16(c->r[4]+0x00000006u); // 801037A0
  c->r[0]=R16(c->r[3]+0x00000006u); // 801037A4
  cmpu(c,0,c->r[0],c->r[4]); // 801037A8
  if (!crb(c,1)) { goto L_801037B4; } // 801037AC
  c->r[4]=c->r[0]|c->r[0]; // 801037B0
L_801037B4:;
  W16(c->r[5]+0x00000006u,c->r[4]); // 801037B4
L_801037B8:;
  c->r[3]=c->r[5]|c->r[5]; // 801037B8
  return; // 801037BC
L_801037C0:;
  c->r[3]=0u+0x00000000u; // 801037C0
  return; // 801037C4
}

// btm_pm_get_set_mode
void f_801037C8(Ctx* __restrict c) {
  trace_call(0x801037C8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801037C8
  c->r[0]=c->lr; // 801037CC
  W32(c->r[1]+0x00000024u,c->r[0]); // 801037D0
  c->r[11]=c->r[1]+0x00000020u; // 801037D4
  c->lr=0x801037DCu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801037D8
  cmps(c,0,(int32_t)c->r[5],0); // 801037DC
  c->r[26]=c->r[3]|c->r[3]; // 801037E0
  c->r[27]=c->r[5]|c->r[5]; // 801037E4
  c->r[28]=c->r[6]|c->r[6]; // 801037E8
  c->r[7]=0u+0x00000000u; // 801037EC
  if (crb(c,2)) { goto L_80103838; } // 801037F0
  c->r[0]=R8(c->r[5]+0x00000008u); // 801037F4
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 801037F8
  if (crb(c,2)) { goto L_80103838; } // 801037FC
  c->r[3]=R16(c->r[5]+0x00000000u); // 80103800
  c->r[0]=R16(c->r[5]+0x00000002u); // 80103804
  W16(c->r[6]+0x00000000u,c->r[3]); // 80103808
  W16(c->r[6]+0x00000002u,c->r[0]); // 8010380C
  c->r[3]=R16(c->r[5]+0x00000004u); // 80103810
  c->r[0]=R16(c->r[5]+0x00000006u); // 80103814
  W16(c->r[6]+0x00000004u,c->r[3]); // 80103818
  W16(c->r[6]+0x00000006u,c->r[0]); // 8010381C
  c->r[0]=R16(c->r[5]+0x00000008u); // 80103820
  W16(c->r[6]+0x00000008u,c->r[0]); // 80103824
  c->r[0]=R8(c->r[6]+0x00000008u); // 80103828
  c->r[3]=rotl(c->r[0],0)&0xFFFFFFEFu; // 8010382C
  W8(c->r[6]+0x00000008u,c->r[3]); // 80103830
  goto L_80103910; // 80103834
L_80103838:;
  c->r[31]=0u+0x803D0000u; // 80103838
  c->r[30]=c->r[4]|c->r[4]; // 8010383C
  c->r[31]=c->r[31]+0xFFFFA218u; // 80103840
  c->r[29]=0u+0x00000000u; // 80103844
L_80103848:;
  c->r[0]=R8(c->r[31]+0x00000558u); // 80103848
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8010384C
  if (crb(c,2)) { goto L_8010388C; } // 80103850
  c->r[0]=R8(c->r[30]+0x00000008u); // 80103854
  cmps(c,0,(int32_t)c->r[0],0); // 80103858
  if (!crb(c,2)) { goto L_80103868; } // 8010385C
  c->r[3]=0u+0x00000000u; // 80103860
  goto L_80103910; // 80103864
L_80103868:;
  c->r[3]=c->r[7]|c->r[7]; // 80103868
  c->r[4]=c->r[30]|c->r[30]; // 8010386C
  c->r[5]=c->r[28]|c->r[28]; // 80103870
  c->lr=0x80103878u; f_801035AC(c); // 80103874
  cmps(c,0,(int32_t)c->r[3],0); // 80103878
  if (!crb(c,2)) { goto L_80103888; } // 8010387C
  c->r[3]=0u+0x00000000u; // 80103880
  goto L_80103910; // 80103884
L_80103888:;
  c->r[7]=c->r[28]|c->r[28]; // 80103888
L_8010388C:;
  c->r[29]=c->r[29]+0x00000001u; // 8010388C
  c->r[30]=c->r[30]+0x0000000Au; // 80103890
  cmps(c,0,(int32_t)c->r[29],2); // 80103894
  c->r[31]=c->r[31]+0x00000008u; // 80103898
  if (crb(c,0)) { IRQCHK(c); goto L_80103848; } // 8010389C
  cmps(c,0,(int32_t)c->r[7],0); // 801038A0
  if (!crb(c,2)) { goto L_801038E4; } // 801038A4
  cmps(c,0,(int32_t)c->r[27],0); // 801038A8
  if (crb(c,2)) { goto L_801038DC; } // 801038AC
  c->r[3]=R16(c->r[27]+0x00000000u); // 801038B0
  c->r[0]=R16(c->r[27]+0x00000002u); // 801038B4
  W16(c->r[28]+0x00000000u,c->r[3]); // 801038B8
  W16(c->r[28]+0x00000002u,c->r[0]); // 801038BC
  c->r[3]=R16(c->r[27]+0x00000004u); // 801038C0
  c->r[0]=R16(c->r[27]+0x00000006u); // 801038C4
  W16(c->r[28]+0x00000004u,c->r[3]); // 801038C8
  W16(c->r[28]+0x00000006u,c->r[0]); // 801038CC
  c->r[0]=R16(c->r[27]+0x00000008u); // 801038D0
  W16(c->r[28]+0x00000008u,c->r[0]); // 801038D4
  goto L_8010390C; // 801038D8
L_801038DC:;
  c->r[3]=0u+0x00000000u; // 801038DC
  goto L_80103910; // 801038E0
L_801038E4:;
  cmpu(c,0,c->r[26],0x00000080u); // 801038E4
  if (!crb(c,2)) { goto L_8010390C; } // 801038E8
  c->r[3]=c->r[27]|c->r[27]; // 801038EC
  c->r[4]=c->r[7]|c->r[7]; // 801038F0
  c->r[5]=c->r[28]|c->r[28]; // 801038F4
  c->lr=0x801038FCu; f_801035AC(c); // 801038F8
  cmps(c,0,(int32_t)c->r[3],0); // 801038FC
  if (!crb(c,2)) { goto L_8010390C; } // 80103900
  c->r[3]=0u+0x00000000u; // 80103904
  goto L_80103910; // 80103908
L_8010390C:;
  c->r[3]=R8(c->r[28]+0x00000008u); // 8010390C
L_80103910:;
  c->r[11]=c->r[1]+0x00000020u; // 80103910
  c->lr=0x80103918u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80103914
  c->r[0]=R32(c->r[1]+0x00000024u); // 80103918
  c->lr=c->r[0]; // 8010391C
  c->r[1]=c->r[1]+0x00000020u; // 80103920
  return; // 80103924
}

// btm_pm_snd_md_req
void f_80103928(Ctx* __restrict c) {
  trace_call(0x80103928u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103928
  c->r[0]=c->lr; // 8010392C
  c->r[6]=0u+0x803D0000u; // 80103930
  W32(c->r[1]+0x00000034u,c->r[0]); // 80103934
  c->r[0]=(uint32_t)((int32_t)c->r[4]*(int32_t)34); // 80103938
  c->r[6]=c->r[6]+0xFFFFA218u; // 8010393C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80103940
  c->r[31]=0u+0x00000000u; // 80103944
  W32(c->r[1]+0x00000028u,c->r[30]); // 80103948
  c->r[30]=c->r[4]|c->r[4]; // 8010394C
  W32(c->r[1]+0x00000024u,c->r[29]); // 80103950
  c->r[29]=c->r[3]|c->r[3]; // 80103954
  c->r[3]=c->r[6]+c->r[0]; // 80103958
  c->r[6]=c->r[1]+0x00000008u; // 8010395C
  W32(c->r[1]+0x00000020u,c->r[28]); // 80103960
  c->r[28]=c->r[3]+0x000004CCu; // 80103964
  c->r[3]=c->r[29]|c->r[29]; // 80103968
  c->r[4]=c->r[28]|c->r[28]; // 8010396C
  c->lr=0x80103974u; f_801037C8(c); // 80103970
  c->r[4]=R8(c->r[28]+0x00000020u); // 80103974
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80103978
  W8(c->r[1]+0x00000010u,c->r[3]); // 8010397C
  cmpu(c,0,c->r[4],c->r[0]); // 80103980
  if (!crb(c,2)) { goto L_801039B8; } // 80103984
  cmps(c,0,(int32_t)c->r[0],0); // 80103988
  if (crb(c,2)) { goto L_801039AC; } // 8010398C
  c->r[4]=R16(c->r[28]+0x0000001Eu); // 80103990
  c->r[0]=R16(c->r[1]+0x00000008u); // 80103994
  cmpu(c,0,c->r[0],c->r[4]); // 80103998
  if (crb(c,0)) { goto L_801039B4; } // 8010399C
  c->r[0]=R16(c->r[1]+0x0000000Au); // 801039A0
  cmpu(c,0,c->r[0],c->r[4]); // 801039A4
  if (crb(c,1)) { goto L_801039B4; } // 801039A8
L_801039AC:;
  c->r[3]=0u+0x0000000Du; // 801039AC
  goto L_80103B3C; // 801039B0
L_801039B4:;
  c->r[31]=0u+0x00000001u; // 801039B4
L_801039B8:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801039B8
  W8(c->r[28]+0x00000021u,c->r[31]); // 801039BC
  if (crb(c,2)) { goto L_801039D8; } // 801039C0
  c->r[0]=R8(c->r[28]+0x00000020u); // 801039C4
  cmps(c,0,(int32_t)c->r[0],0); // 801039C8
  if (crb(c,2)) { goto L_801039D8; } // 801039CC
  c->r[0]=0u+0x00000001u; // 801039D0
  W8(c->r[28]+0x00000021u,c->r[0]); // 801039D4
L_801039D8:;
  c->r[3]=0u+0x00000002u; // 801039D8
  c->lr=0x801039E0u; f_800F46D0(c); // 801039DC
  cmps(c,0,(int32_t)c->r[3],0); // 801039E0
  c->r[31]=c->r[3]|c->r[3]; // 801039E4
  if (!crb(c,2)) { goto L_801039F4; } // 801039E8
  c->r[3]=0u+0x00000003u; // 801039EC
  goto L_80103B3C; // 801039F0
L_801039F4:;
  c->r[0]=R8(c->r[28]+0x00000021u); // 801039F4
  cmpu(c,0,c->r[0],0x00000001u); // 801039F8
  if (!crb(c,2)) { goto L_80103A08; } // 801039FC
  c->r[0]=0u+0x00000000u; // 80103A00
  W8(c->r[1]+0x00000010u,c->r[0]); // 80103A04
L_80103A08:;
  c->r[0]=R8(c->r[1]+0x00000010u); // 80103A08
  c->r[4]=0u+0x803D0000u; // 80103A0C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80103A10
  cmps(c,0,(int32_t)c->r[0],2); // 80103A14
  W8(c->r[4]+0x00000564u,c->r[30]); // 80103A18
  W8(c->r[4]+0x00000565u,c->r[29]); // 80103A1C
  if (crb(c,2)) { goto L_80103AC4; } // 80103A20
  if (!crb(c,0)) { goto L_80103A38; } // 80103A24
  cmps(c,0,(int32_t)c->r[0],0); // 80103A28
  if (crb(c,2)) { goto L_80103A44; } // 80103A2C
  if (!crb(c,0)) { goto L_80103AA4; } // 80103A30
  goto L_80103B0C; // 80103A34
L_80103A38:;
  cmps(c,0,(int32_t)c->r[0],4); // 80103A38
  if (!crb(c,0)) { goto L_80103B0C; } // 80103A3C
  goto L_80103AEC; // 80103A40
L_80103A44:;
  c->r[0]=R8(c->r[28]+0x00000020u); // 80103A44
  cmps(c,0,(int32_t)c->r[0],3); // 80103A48
  if (crb(c,2)) { goto L_80103A78; } // 80103A4C
  if (!crb(c,0)) { goto L_80103A90; } // 80103A50
  cmps(c,0,(int32_t)c->r[0],2); // 80103A54
  if (!crb(c,0)) { goto L_80103A60; } // 80103A58
  goto L_80103A90; // 80103A5C
L_80103A60:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 80103A60
  c->r[3]=c->r[31]|c->r[31]; // 80103A64
  c->r[4]=c->r[4]+c->r[0]; // 80103A68
  c->r[4]=R16(c->r[4]+0x00000034u); // 80103A6C
  c->lr=0x80103A74u; f_8010B320(c); // 80103A70
  goto L_80103B1C; // 80103A74
L_80103A78:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 80103A78
  c->r[3]=c->r[31]|c->r[31]; // 80103A7C
  c->r[4]=c->r[4]+c->r[0]; // 80103A80
  c->r[4]=R16(c->r[4]+0x00000034u); // 80103A84
  c->lr=0x80103A8Cu; f_8010B458(c); // 80103A88
  goto L_80103B1C; // 80103A8C
L_80103A90:;
  c->r[3]=0u+0x803D0000u; // 80103A90
  c->r[0]=0u+0x00000004u; // 80103A94
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103A98
  W8(c->r[3]+0x00000564u,c->r[0]); // 80103A9C
  goto L_80103B1C; // 80103AA0
L_80103AA4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 80103AA4
  c->r[5]=R16(c->r[1]+0x00000008u); // 80103AA8
  c->r[6]=R16(c->r[1]+0x0000000Au); // 80103AAC
  c->r[3]=c->r[31]|c->r[31]; // 80103AB0
  c->r[4]=c->r[4]+c->r[0]; // 80103AB4
  c->r[4]=R16(c->r[4]+0x00000034u); // 80103AB8
  c->lr=0x80103AC0u; f_8010B1A0(c); // 80103ABC
  goto L_80103B1C; // 80103AC0
L_80103AC4:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 80103AC4
  c->r[5]=R16(c->r[1]+0x00000008u); // 80103AC8
  c->r[6]=R16(c->r[1]+0x0000000Au); // 80103ACC
  c->r[3]=c->r[31]|c->r[31]; // 80103AD0
  c->r[7]=R16(c->r[1]+0x0000000Cu); // 80103AD4
  c->r[4]=c->r[4]+c->r[0]; // 80103AD8
  c->r[4]=R16(c->r[4]+0x00000034u); // 80103ADC
  c->r[8]=R16(c->r[1]+0x0000000Eu); // 80103AE0
  c->lr=0x80103AE8u; f_8010B254(c); // 80103AE4
  goto L_80103B1C; // 80103AE8
L_80103AEC:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)284); // 80103AEC
  c->r[5]=R16(c->r[1]+0x00000008u); // 80103AF0
  c->r[6]=R16(c->r[1]+0x0000000Au); // 80103AF4
  c->r[3]=c->r[31]|c->r[31]; // 80103AF8
  c->r[4]=c->r[4]+c->r[0]; // 80103AFC
  c->r[4]=R16(c->r[4]+0x00000034u); // 80103B00
  c->lr=0x80103B08u; f_8010B3A4(c); // 80103B04
  goto L_80103B1C; // 80103B08
L_80103B0C:;
  c->r[3]=0u+0x803D0000u; // 80103B0C
  c->r[0]=0u+0x00000004u; // 80103B10
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103B14
  W8(c->r[3]+0x00000564u,c->r[0]); // 80103B18
L_80103B1C:;
  c->r[3]=0u+0x803D0000u; // 80103B1C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103B20
  c->r[0]=R8(c->r[3]+0x00000564u); // 80103B24
  cmpu(c,0,c->r[0],0x00000004u); // 80103B28
  if (!crb(c,2)) { goto L_80103B38; } // 80103B2C
  c->r[3]=c->r[31]|c->r[31]; // 80103B30
  c->lr=0x80103B38u; f_800F47C0(c); // 80103B34
L_80103B38:;
  c->r[3]=0u+0x00000001u; // 80103B38
L_80103B3C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103B3C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80103B40
  c->r[30]=R32(c->r[1]+0x00000028u); // 80103B44
  c->r[29]=R32(c->r[1]+0x00000024u); // 80103B48
  c->r[28]=R32(c->r[1]+0x00000020u); // 80103B4C
  c->lr=c->r[0]; // 80103B50
  c->r[1]=c->r[1]+0x00000030u; // 80103B54
  return; // 80103B58
}

// btm_pm_proc_cmd_status
void f_80103B5C(Ctx* __restrict c) {
  trace_call(0x80103B5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103B5C
  c->r[0]=c->lr; // 80103B60
  c->r[4]=0u+0x803D0000u; // 80103B64
  W32(c->r[1]+0x00000014u,c->r[0]); // 80103B68
  c->r[4]=c->r[4]+0xFFFFA218u; // 80103B6C
  c->r[0]=R8(c->r[4]+0x00000564u); // 80103B70
  cmpu(c,0,c->r[0],0x00000004u); // 80103B74
  if (!crb(c,0)) { goto L_80103BFC; } // 80103B78
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)34); // 80103B7C
  cmps(c,0,(int32_t)c->r[3],0); // 80103B80
  c->r[5]=c->r[4]+c->r[0]; // 80103B84
  if (!crb(c,2)) { goto L_80103B9C; } // 80103B88
  c->r[0]=0u+0x00000004u; // 80103B8C
  c->r[4]=0u+0x00000004u; // 80103B90
  W8(c->r[5]+0x000004ECu,c->r[0]); // 80103B94
  goto L_80103BA0; // 80103B98
L_80103B9C:;
  c->r[4]=0u+0x00000005u; // 80103B9C
L_80103BA0:;
  c->r[7]=0u+0x803D0000u; // 80103BA0
  c->r[7]=c->r[7]+0xFFFFA218u; // 80103BA4
  c->r[0]=R8(c->r[7]+0x00000565u); // 80103BA8
  cmpu(c,0,c->r[0],0x00000080u); // 80103BAC
  if (crb(c,2)) { goto L_80103BEC; } // 80103BB0
  c->r[0]=rotl(c->r[0],3)&0x000007F8u; // 80103BB4
  c->r[5]=c->r[7]+c->r[0]; // 80103BB8
  c->r[0]=R8(c->r[5]+0x00000558u); // 80103BBC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80103BC0
  if (crb(c,2)) { goto L_80103BEC; } // 80103BC4
  c->r[0]=R8(c->r[7]+0x00000564u); // 80103BC8
  c->r[6]=c->r[3]|c->r[3]; // 80103BCC
  c->r[12]=R32(c->r[5]+0x00000554u); // 80103BD0
  c->r[5]=0u+0x00000000u; // 80103BD4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)284); // 80103BD8
  c->r[3]=c->r[7]+c->r[0]; // 80103BDC
  c->r[3]=c->r[3]+0x0000003Cu; // 80103BE0
  c->ctr=c->r[12]; // 80103BE4
  if (true) { c->lr=0x80103BECu; dispatch(c,c->ctr); } // 80103BE8
L_80103BEC:;
  c->r[3]=0u+0x803D0000u; // 80103BEC
  c->r[0]=0u+0x00000004u; // 80103BF0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103BF4
  W8(c->r[3]+0x00000564u,c->r[0]); // 80103BF8
L_80103BFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80103BFC
  c->lr=c->r[0]; // 80103C00
  c->r[1]=c->r[1]+0x00000010u; // 80103C04
  return; // 80103C08
}

// btm_pm_proc_mode_change
void f_80103C0C(Ctx* __restrict c) {
  trace_call(0x80103C0Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103C0C
  c->r[0]=c->lr; // 80103C10
  W32(c->r[1]+0x00000034u,c->r[0]); // 80103C14
  c->r[11]=c->r[1]+0x00000030u; // 80103C18
  c->lr=0x80103C20u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80103C1C
  c->r[26]=c->r[4]|c->r[4]; // 80103C20
  c->r[25]=c->r[3]|c->r[3]; // 80103C24
  c->r[27]=c->r[5]|c->r[5]; // 80103C28
  c->r[28]=c->r[6]|c->r[6]; // 80103C2C
  c->r[3]=c->r[26]|c->r[26]; // 80103C30
  c->lr=0x80103C38u; f_800FD7FC(c); // 80103C34
  c->r[29]=rotl(c->r[3],0)&0x000000FFu; // 80103C38
  cmps(c,0,(int32_t)c->r[29],4); // 80103C3C
  if (!crb(c,0)) { goto L_80103E1C; } // 80103C40
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)284); // 80103C44
  c->r[24]=0u+0x803D0000u; // 80103C48
  cmps(c,0,(int32_t)c->r[27],0); // 80103C4C
  c->r[24]=c->r[24]+0xFFFFA218u; // 80103C50
  c->r[31]=c->r[24]+c->r[30]; // 80103C54
  if (!crb(c,2)) { goto L_80103CB0; } // 80103C58
  c->r[0]=R16(c->r[31]+0x00000038u); // 80103C5C
  cmps(c,0,(int32_t)c->r[0],0); // 80103C60
  if (crb(c,2)) { goto L_80103CB0; } // 80103C64
  c->lr=0x80103C6Cu; f_80104B84(c); // 80103C68
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80103C6C
  if (!crb(c,2)) { goto L_80103CB0; } // 80103C70
  c->r[0]=0u+0x00000000u; // 80103C74
  W16(c->r[31]+0x00000038u,c->r[0]); // 80103C78
  c->r[0]=R8(c->r[24]+0x000027C0u); // 80103C7C
  cmpu(c,0,c->r[0],0x00000005u); // 80103C80
  if (crb(c,0)) { goto L_80103CA4; } // 80103C84
  c->r[3]=0u+0x000D0000u; // 80103C88
  c->r[4]=0u+0x80330000u; // 80103C8C
  c->r[6]=R16(c->r[31]+0x00000036u); // 80103C90
  c->r[5]=c->r[26]|c->r[26]; // 80103C94
  c->r[3]=c->r[3]+0x00000004u; // 80103C98
  c->r[4]=c->r[4]+0xFFFFB270u; // 80103C9C
  c->lr=0x80103CA4u; f_800F72C0(c); // 80103CA0
L_80103CA4:;
  c->r[3]=R16(c->r[31]+0x00000034u); // 80103CA4
  c->r[4]=R16(c->r[31]+0x00000036u); // 80103CA8
  c->lr=0x80103CB0u; f_8010AAD8(c); // 80103CAC
L_80103CB0:;
  c->r[0]=(uint32_t)((int32_t)c->r[29]*(int32_t)34); // 80103CB0
  c->r[3]=0u+0x803D0000u; // 80103CB4
  cmps(c,0,(int32_t)c->r[27],0); // 80103CB8
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103CBC
  c->r[4]=c->r[3]+c->r[0]; // 80103CC0
  W8(c->r[4]+0x000004ECu,c->r[27]); // 80103CC4
  c->r[0]=0u+0x00000000u; // 80103CC8
  W16(c->r[4]+0x000004EAu,c->r[28]); // 80103CCC
  if (!crb(c,2)) { goto L_80103CE4; } // 80103CD0
  c->r[3]=R8(c->r[4]+0x000004D4u); // 80103CD4
  cmpu(c,0,c->r[3],0x00000001u); // 80103CD8
  if (!crb(c,2)) { goto L_80103CE4; } // 80103CDC
  W8(c->r[4]+0x000004D4u,c->r[0]); // 80103CE0
L_80103CE4:;
  cmps(c,0,(int32_t)c->r[27],0); // 80103CE4
  c->r[5]=c->r[4]+0x000004D6u; // 80103CE8
  if (!crb(c,2)) { goto L_80103D00; } // 80103CEC
  c->r[3]=R8(c->r[5]+0x00000008u); // 80103CF0
  cmpu(c,0,c->r[3],0x00000001u); // 80103CF4
  if (!crb(c,2)) { goto L_80103D00; } // 80103CF8
  W8(c->r[5]+0x00000008u,c->r[0]); // 80103CFC
L_80103D00:;
  c->r[0]=R8(c->r[4]+0x000004EDu); // 80103D00
  cmpu(c,0,c->r[0],0x00000001u); // 80103D04
  if (!crb(c,2)) { goto L_80103D1C; } // 80103D08
  c->r[4]=c->r[29]|c->r[29]; // 80103D0C
  c->r[3]=0u+0x00000080u; // 80103D10
  c->r[5]=0u+0x00000000u; // 80103D14
  c->lr=0x80103D1Cu; f_80103928(c); // 80103D18
L_80103D1C:;
  c->r[24]=0u+0x803D0000u; // 80103D1C
  c->r[29]=0u+0x00000000u; // 80103D20
  c->r[24]=c->r[24]+0xFFFFA218u; // 80103D24
L_80103D28:;
  c->r[0]=R8(c->r[24]+0x00000558u); // 80103D28
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 80103D2C
  if (crb(c,2)) { goto L_80103D50; } // 80103D30
  c->r[12]=R32(c->r[24]+0x00000554u); // 80103D34
  c->r[4]=c->r[27]|c->r[27]; // 80103D38
  c->r[5]=c->r[28]|c->r[28]; // 80103D3C
  c->r[6]=c->r[25]|c->r[25]; // 80103D40
  c->r[3]=c->r[31]+0x0000003Cu; // 80103D44
  c->ctr=c->r[12]; // 80103D48
  if (true) { c->lr=0x80103D50u; dispatch(c,c->ctr); } // 80103D4C
L_80103D50:;
  c->r[29]=c->r[29]+0x00000001u; // 80103D50
  c->r[24]=c->r[24]+0x00000008u; // 80103D54
  cmps(c,0,(int32_t)c->r[29],2); // 80103D58
  if (crb(c,0)) { IRQCHK(c); goto L_80103D28; } // 80103D5C
  c->r[3]=0u+0x803D0000u; // 80103D60
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103D64
  c->r[28]=c->r[3]+c->r[30]; // 80103D68
  c->r[0]=R8(c->r[28]+0x0000014Fu); // 80103D6C
  cmpu(c,0,c->r[0],0x00000001u); // 80103D70
  if (!crb(c,2)) { goto L_80103E1C; } // 80103D74
  c->r[24]=c->r[28]+0x0000003Cu; // 80103D78
  c->r[3]=c->r[24]|c->r[24]; // 80103D7C
  c->lr=0x80103D84u; f_800FF9D0(c); // 80103D80
  cmps(c,0,(int32_t)c->r[3],0); // 80103D84
  if (crb(c,2)) { goto L_80103DB8; } // 80103D88
  c->r[0]=R8(c->r[3]+0x00000076u); // 80103D8C
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 80103D90
  if (crb(c,2)) { goto L_80103DB8; } // 80103D94
  c->r[3]=c->r[26]|c->r[26]; // 80103D98
  c->r[4]=0u+0x00000000u; // 80103D9C
  c->lr=0x80103DA4u; f_8010ABE4(c); // 80103DA0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80103DA4
  if (crb(c,2)) { goto L_80103DEC; } // 80103DA8
  c->r[0]=0u+0x00000002u; // 80103DAC
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 80103DB0
  goto L_80103E1C; // 80103DB4
L_80103DB8:;
  c->r[4]=0u+0x803D0000u; // 80103DB8
  c->r[3]=c->r[24]|c->r[24]; // 80103DBC
  c->r[4]=c->r[4]+0xFFFFA218u; // 80103DC0
  c->r[4]=c->r[4]+c->r[30]; // 80103DC4
  c->r[0]=R8(c->r[4]+0x0000014Eu); // 80103DC8
  c->r[0]=cntlz(c->r[0]); // 80103DCC
  c->r[4]=rotl(c->r[0],27)&0x000000FFu; // 80103DD0
  c->lr=0x80103DD8u; f_8010B4DC(c); // 80103DD4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80103DD8
  if (crb(c,2)) { goto L_80103DEC; } // 80103DDC
  c->r[0]=0u+0x00000000u; // 80103DE0
  W8(c->r[28]+0x0000014Fu,c->r[0]); // 80103DE4
  goto L_80103E1C; // 80103DE8
L_80103DEC:;
  c->r[27]=0u+0x00000000u; // 80103DEC
  c->r[26]=0u+0x803D0000u; // 80103DF0
  W8(c->r[28]+0x0000014Fu,c->r[27]); // 80103DF4
  c->r[26]=c->r[26]+0xFFFFA218u; // 80103DF8
  c->r[12]=R32(c->r[26]+0x0000062Cu); // 80103DFC
  cmps(c,0,(int32_t)c->r[12],0); // 80103E00
  if (crb(c,2)) { goto L_80103E1C; } // 80103E04
  W8(c->r[26]+0x00000624u,c->r[25]); // 80103E08
  c->r[3]=c->r[26]+0x00000624u; // 80103E0C
  c->ctr=c->r[12]; // 80103E10
  if (true) { c->lr=0x80103E18u; dispatch(c,c->ctr); } // 80103E14
  W32(c->r[26]+0x0000062Cu,c->r[27]); // 80103E18
L_80103E1C:;
  c->r[11]=c->r[1]+0x00000030u; // 80103E1C
  c->lr=0x80103E24u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80103E20
  c->r[0]=R32(c->r[1]+0x00000034u); // 80103E24
  c->lr=c->r[0]; // 80103E28
  c->r[1]=c->r[1]+0x00000030u; // 80103E2C
  return; // 80103E30
}

// btm_sco_init
void f_80103E34(Ctx* __restrict c) {
  trace_call(0x80103E34u);
  c->r[3]=0u+0x802D0000u; // 80103E34
  {uint32_t ea=c->r[3]+0xFFFF9B18u; c->r[6]=R32(ea); c->r[3]=ea;} // 80103E38
  c->r[4]=0u+0x00010000u; // 80103E3C
  c->r[7]=0u+0x803D0000u; // 80103E40
  c->r[8]=c->r[4]+0xFFFFFFFFu; // 80103E44
  c->r[5]=R32(c->r[3]+0x00000004u); // 80103E48
  c->r[7]=c->r[7]+0xFFFFA218u; // 80103E4C
  c->r[4]=R32(c->r[3]+0x00000008u); // 80103E50
  c->r[3]=R32(c->r[3]+0x0000000Cu); // 80103E54
  c->r[0]=0u+0x00000002u; // 80103E58
  W16(c->r[7]+0x000018F6u,c->r[8]); // 80103E5C
  W32(c->r[7]+0x000018F8u,c->r[6]); // 80103E60
  W32(c->r[7]+0x000018FCu,c->r[5]); // 80103E64
  W32(c->r[7]+0x00001900u,c->r[4]); // 80103E68
  W32(c->r[7]+0x00001904u,c->r[3]); // 80103E6C
  W8(c->r[7]+0x00001909u,c->r[0]); // 80103E70
  return; // 80103E74
}

// btm_esco_conn_rsp
void f_80103E78(Ctx* __restrict c) {
  trace_call(0x80103E78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80103E78
  c->r[0]=c->lr; // 80103E7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80103E80
  c->r[11]=c->r[1]+0x00000020u; // 80103E84
  c->lr=0x80103E8Cu; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80103E88
  c->r[26]=c->r[3]|c->r[3]; // 80103E8C
  c->r[27]=c->r[4]|c->r[4]; // 80103E90
  c->r[29]=c->r[5]|c->r[5]; // 80103E94
  c->r[28]=c->r[6]|c->r[6]; // 80103E98
  c->r[31]=0u+0x00000000u; // 80103E9C
  c->r[3]=0u+0x00000002u; // 80103EA0
  c->lr=0x80103EA8u; f_800F46D0(c); // 80103EA4
  cmps(c,0,(int32_t)c->r[3],0); // 80103EA8
  c->r[30]=c->r[3]|c->r[3]; // 80103EAC
  if (!crb(c,2)) { goto L_80103EDC; } // 80103EB0
  c->r[3]=0u+0x803D0000u; // 80103EB4
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103EB8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80103EBC
  cmpu(c,0,c->r[0],0x00000001u); // 80103EC0
  if (crb(c,0)) { goto L_8010403C; } // 80103EC4
  c->r[4]=0u+0x80330000u; // 80103EC8
  c->r[3]=0u+0x000D0000u; // 80103ECC
  c->r[4]=c->r[4]+0xFFFFB2B0u; // 80103ED0
  c->lr=0x80103ED8u; f_800F7280(c); // 80103ED4
  goto L_8010403C; // 80103ED8
L_80103EDC:;
  cmpu(c,0,c->r[26],0x00000003u); // 80103EDC
  if (!crb(c,0)) { goto L_80103EF8; } // 80103EE0
  c->r[0]=(uint32_t)((int32_t)c->r[26]*(int32_t)52); // 80103EE4
  c->r[3]=0u+0x803D0000u; // 80103EE8
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103EEC
  c->r[3]=c->r[3]+c->r[0]; // 80103EF0
  c->r[31]=c->r[3]+0x00001854u; // 80103EF4
L_80103EF8:;
  cmps(c,0,(int32_t)c->r[27],0); // 80103EF8
  if (crb(c,2)) { goto L_80103F58; } // 80103EFC
  cmps(c,0,(int32_t)c->r[31],0); // 80103F00
  if (crb(c,2)) { goto L_80103F1C; } // 80103F04
  c->r[3]=R16(c->r[31]+0x00000008u); // 80103F08
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 80103F0C
  c->r[0]=cntlz(c->r[0]); // 80103F10
  c->r[0]=rotl(c->r[0],27)&0x0000FFFFu; // 80103F14
  W16(c->r[31]+0x00000008u,c->r[0]); // 80103F18
L_80103F1C:;
  c->r[3]=0u+0x803D0000u; // 80103F1C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103F20
  c->r[0]=R8(c->r[3]+0x00001908u); // 80103F24
  cmps(c,0,(int32_t)c->r[0],0); // 80103F28
  if (!crb(c,2)) { goto L_80103F44; } // 80103F2C
  c->r[3]=c->r[30]|c->r[30]; // 80103F30
  c->r[4]=c->r[29]|c->r[29]; // 80103F34
  c->r[5]=c->r[27]|c->r[27]; // 80103F38
  c->lr=0x80103F40u; f_8010A5B8(c); // 80103F3C
  goto L_8010403C; // 80103F40
L_80103F44:;
  c->r[3]=c->r[30]|c->r[30]; // 80103F44
  c->r[4]=c->r[29]|c->r[29]; // 80103F48
  c->r[5]=c->r[27]|c->r[27]; // 80103F4C
  c->lr=0x80103F54u; f_8010B140(c); // 80103F50
  goto L_8010403C; // 80103F54
L_80103F58:;
  c->r[3]=0u+0x00000001u; // 80103F58
  c->lr=0x80103F60u; f_800FF304(c); // 80103F5C
  c->r[0]=0u+0x00000003u; // 80103F60
  c->r[3]=0u+0x803D0000u; // 80103F64
  W16(c->r[31]+0x00000008u,c->r[0]); // 80103F68
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103F6C
  c->r[0]=R8(c->r[3]+0x00001908u); // 80103F70
  cmps(c,0,(int32_t)c->r[0],0); // 80103F74
  if (crb(c,2)) { goto L_8010402C; } // 80103F78
  c->r[0]=R8(c->r[31]+0x0000002Eu); // 80103F7C
  cmpu(c,0,c->r[0],0x00000002u); // 80103F80
  if (!crb(c,2)) { goto L_8010402C; } // 80103F84
  cmps(c,0,(int32_t)c->r[28],0); // 80103F88
  if (crb(c,2)) { goto L_80103FB0; } // 80103F8C
  c->r[3]=R32(c->r[28]+0x00000000u); // 80103F90
  c->r[0]=R32(c->r[28]+0x00000004u); // 80103F94
  W32(c->r[31]+0x00000014u,c->r[3]); // 80103F98
  W32(c->r[31]+0x00000018u,c->r[0]); // 80103F9C
  c->r[3]=R32(c->r[28]+0x00000008u); // 80103FA0
  c->r[0]=R32(c->r[28]+0x0000000Cu); // 80103FA4
  W32(c->r[31]+0x0000001Cu,c->r[3]); // 80103FA8
  W32(c->r[31]+0x00000020u,c->r[0]); // 80103FAC
L_80103FB0:;
  c->r[3]=0u+0x803D0000u; // 80103FB0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103FB4
  c->r[4]=R16(c->r[3]+0x00001904u); // 80103FB8
  W16(c->r[31]+0x00000020u,c->r[4]); // 80103FBC
  c->r[5]=R16(c->r[3]+0x00000656u); // 80103FC0
  c->r[3]=c->r[4]&c->r[5]; // 80103FC4
  c->r[0]=rotl(c->r[3],0)&0x00000038u; cr0(c,c->r[0]); // 80103FC8
  c->r[28]=rotl(c->r[3],0)&0x0000003Fu; // 80103FCC
  if (!crb(c,2)) { goto L_80103FDC; } // 80103FD0
  c->r[0]=c->r[28]|0x00000008u; // 80103FD4
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 80103FD8
L_80103FDC:;
  c->r[3]=0u+0x803D0000u; // 80103FDC
  c->r[3]=c->r[3]+0xFFFFA218u; // 80103FE0
  c->r[0]=R8(c->r[3]+0x00000636u); // 80103FE4
  cmpu(c,0,c->r[0],0x00000003u); // 80103FE8
  if (crb(c,0)) { goto L_80104000; } // 80103FEC
  c->r[0]=c->r[4]|c->r[5]; // 80103FF0
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 80103FF4
  c->r[0]=c->r[28]|c->r[0]; // 80103FF8
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 80103FFC
L_80104000:;
  c->r[5]=R32(c->r[31]+0x00000014u); // 80104000
  c->r[3]=c->r[30]|c->r[30]; // 80104004
  c->r[6]=R32(c->r[31]+0x00000018u); // 80104008
  c->r[4]=c->r[29]|c->r[29]; // 8010400C
  c->r[7]=R16(c->r[31]+0x0000001Cu); // 80104010
  c->r[10]=rotl(c->r[28],0)&0x0000FFFFu; // 80104014
  c->r[8]=R16(c->r[31]+0x0000001Eu); // 80104018
  c->r[9]=R8(c->r[31]+0x00000022u); // 8010401C
  c->lr=0x80104024u; f_8010B058(c); // 80104020
  W16(c->r[31]+0x00000020u,c->r[28]); // 80104024
  goto L_8010403C; // 80104028
L_8010402C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010402C
  c->r[4]=c->r[29]|c->r[29]; // 80104030
  c->r[5]=0u+0x00000000u; // 80104034
  c->lr=0x8010403Cu; f_8010A558(c); // 80104038
L_8010403C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010403C
  c->lr=0x80104044u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80104040
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104044
  c->lr=c->r[0]; // 80104048
  c->r[1]=c->r[1]+0x00000020u; // 8010404C
  return; // 80104050
}

// btm_sco_chk_pend_unpark
void f_80104054(Ctx* __restrict c) {
  trace_call(0x80104054u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104054
  c->r[0]=c->lr; // 80104058
  W32(c->r[1]+0x00000044u,c->r[0]); // 8010405C
  c->r[11]=c->r[1]+0x00000040u; // 80104060
  c->lr=0x80104068u; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80104064
  c->r[28]=0u+0x803D0000u; // 80104068
  c->r[23]=c->r[3]|c->r[3]; // 8010406C
  c->r[28]=c->r[28]+0xFFFFA218u; // 80104070
  c->r[24]=c->r[4]|c->r[4]; // 80104074
  c->r[25]=c->r[5]|c->r[5]; // 80104078
  c->r[27]=0u+0x00000000u; // 8010407C
  c->r[26]=c->r[28]+0x00001854u; // 80104080
  c->r[30]=0u+0x000D0000u; // 80104084
  c->r[31]=0u+0x80330000u; // 80104088
  c->r[21]=0u+0x80330000u; // 8010408C
  c->r[22]=0u+0x00000003u; // 80104090
L_80104094:;
  c->r[0]=R16(c->r[26]+0x00000008u); // 80104094
  cmpu(c,0,c->r[0],0x00000006u); // 80104098
  if (!crb(c,2)) { goto L_801041B8; } // 8010409C
  cmps(c,0,(int32_t)c->r[25],0); // 801040A0
  if (!crb(c,2)) { goto L_801041B8; } // 801040A4
  cmps(c,0,(int32_t)c->r[23],0); // 801040A8
  if (!crb(c,2)) { goto L_801041B8; } // 801040AC
  c->r[3]=c->r[26]+0x00000028u; // 801040B0
  c->lr=0x801040B8u; f_800FE758(c); // 801040B4
  c->r[5]=rotl(c->r[3],0)&0x0000FFFFu; // 801040B8
  c->r[29]=c->r[3]|c->r[3]; // 801040BC
  cmpu(c,0,c->r[24],c->r[5]); // 801040C0
  if (!crb(c,2)) { goto L_801041B8; } // 801040C4
  c->r[0]=R8(c->r[28]+0x000027C0u); // 801040C8
  cmpu(c,0,c->r[0],0x00000003u); // 801040CC
  if (crb(c,0)) { goto L_801040E4; } // 801040D0
  c->r[6]=R8(c->r[28]+0x00001909u); // 801040D4
  c->r[3]=c->r[30]+0x00000002u; // 801040D8
  c->r[4]=c->r[31]+0xFFFFB38Cu; // 801040DC
  c->lr=0x801040E4u; f_800F72C0(c); // 801040E0
L_801040E4:;
  c->r[3]=0u+0x00000001u; // 801040E4
  c->lr=0x801040ECu; f_800FF304(c); // 801040E8
  c->r[0]=R8(c->r[28]+0x00001908u); // 801040EC
  cmps(c,0,(int32_t)c->r[0],0); // 801040F0
  if (!crb(c,2)) { goto L_80104118; } // 801040F4
  c->r[0]=R16(c->r[26]+0x00000020u); // 801040F8
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 801040FC
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 80104100
  c->lr=0x80104108u; f_8010A4CC(c); // 80104104
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80104108
  if (!crb(c,2)) { goto L_801041A8; } // 8010410C
  c->r[0]=0u+0x00000003u; // 80104110
  goto L_801041AC; // 80104114
L_80104118:;
  c->r[0]=R8(c->r[28]+0x00000636u); // 80104118
  c->r[3]=R16(c->r[28]+0x00000656u); // 8010411C
  c->r[4]=R16(c->r[26]+0x00000020u); // 80104120
  cmpu(c,0,c->r[0],0x00000003u); // 80104124
  c->r[0]=c->r[4]&c->r[3]; // 80104128
  c->r[20]=rotl(c->r[0],0)&0x0000003Fu; // 8010412C
  if (crb(c,0)) { goto L_80104144; } // 80104130
  c->r[0]=c->r[4]|c->r[3]; // 80104134
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 80104138
  c->r[0]=c->r[20]|c->r[0]; // 8010413C
  c->r[20]=rotl(c->r[0],0)&0x0000FFFFu; // 80104140
L_80104144:;
  c->r[0]=R8(c->r[28]+0x000027C0u); // 80104144
  cmpu(c,0,c->r[0],0x00000003u); // 80104148
  if (crb(c,0)) { goto L_80104174; } // 8010414C
  c->r[5]=R32(c->r[26]+0x00000014u); // 80104150
  c->r[3]=c->r[30]+0x00000002u; // 80104154
  c->r[6]=R32(c->r[26]+0x00000018u); // 80104158
  c->r[4]=c->r[21]+0xFFFFB33Cu; // 8010415C
  c->r[7]=R16(c->r[26]+0x0000001Cu); // 80104160
  c->r[10]=rotl(c->r[20],0)&0x0000FFFFu; // 80104164
  c->r[8]=R16(c->r[26]+0x0000001Eu); // 80104168
  c->r[9]=R8(c->r[26]+0x00000022u); // 8010416C
  c->lr=0x80104174u; f_800F7340(c); // 80104170
L_80104174:;
  c->r[4]=R32(c->r[26]+0x00000014u); // 80104174
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 80104178
  c->r[5]=R32(c->r[26]+0x00000018u); // 8010417C
  c->r[9]=rotl(c->r[20],0)&0x0000FFFFu; // 80104180
  c->r[6]=R16(c->r[26]+0x0000001Cu); // 80104184
  c->r[7]=R16(c->r[26]+0x0000001Eu); // 80104188
  c->r[8]=R8(c->r[26]+0x00000022u); // 8010418C
  c->lr=0x80104194u; f_8010AF5C(c); // 80104190
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80104194
  if (!crb(c,2)) { goto L_801041A4; } // 80104198
  c->r[0]=0u+0x00000003u; // 8010419C
  goto L_801041AC; // 801041A0
L_801041A4:;
  W16(c->r[26]+0x00000020u,c->r[20]); // 801041A4
L_801041A8:;
  c->r[0]=0u+0x00000001u; // 801041A8
L_801041AC:;
  cmpu(c,0,c->r[0],0x00000001u); // 801041AC
  if (!crb(c,2)) { goto L_801041B8; } // 801041B0
  W16(c->r[26]+0x00000008u,c->r[22]); // 801041B4
L_801041B8:;
  c->r[27]=c->r[27]+0x00000001u; // 801041B8
  c->r[26]=c->r[26]+0x00000034u; // 801041BC
  cmpu(c,0,c->r[27],0x00000003u); // 801041C0
  if (crb(c,0)) { IRQCHK(c); goto L_80104094; } // 801041C4
  c->r[11]=c->r[1]+0x00000040u; // 801041C8
  c->lr=0x801041D0u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801041CC
  c->r[0]=R32(c->r[1]+0x00000044u); // 801041D0
  c->lr=c->r[0]; // 801041D4
  c->r[1]=c->r[1]+0x00000040u; // 801041D8
  return; // 801041DC
}

// btm_sco_conn_req
void f_801041E0(Ctx* __restrict c) {
  trace_call(0x801041E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801041E0
  c->r[0]=c->lr; // 801041E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801041E8
  c->r[11]=c->r[1]+0x00000030u; // 801041EC
  c->lr=0x801041F4u; f_800ADA2C(c); // 801041F0
  c->r[6]=0u+0x803D0000u; // 801041F4
  c->r[30]=c->r[3]|c->r[3]; // 801041F8
  c->r[6]=c->r[6]+0xFFFFA218u; // 801041FC
  c->r[29]=c->r[4]|c->r[4]; // 80104200
  c->r[31]=c->r[5]|c->r[5]; // 80104204
  c->r[28]=0u+0x00000000u; // 80104208
  c->r[27]=c->r[6]+0x00001854u; // 8010420C
L_80104210:;
  c->r[3]=R16(c->r[27]+0x00000008u); // 80104210
  cmpu(c,0,c->r[3],0x00000001u); // 80104214
  if (!crb(c,2)) { goto L_80104228; } // 80104218
  c->r[0]=R8(c->r[27]+0x0000000Du); // 8010421C
  cmps(c,0,(int32_t)c->r[0],0); // 80104220
  if (!crb(c,2)) { goto L_80104230; } // 80104224
L_80104228:;
  cmpu(c,0,c->r[3],0x00000003u); // 80104228
  if (!crb(c,2)) { goto L_801042D0; } // 8010422C
L_80104230:;
  c->r[4]=c->r[30]|c->r[30]; // 80104230
  c->r[3]=c->r[27]+0x00000028u; // 80104234
  c->r[5]=0u+0x00000006u; // 80104238
  c->lr=0x80104240u; f_800B3824(c); // 8010423C
  cmps(c,0,(int32_t)c->r[3],0); // 80104240
  if (!crb(c,2)) { goto L_801042D0; } // 80104244
  c->r[0]=0u+0x00000001u; // 80104248
  c->r[4]=c->r[30]|c->r[30]; // 8010424C
  W8(c->r[27]+0x0000000Du,c->r[0]); // 80104250
  c->r[3]=c->r[27]+0x00000028u; // 80104254
  c->r[5]=0u+0x00000006u; // 80104258
  W8(c->r[27]+0x0000002Eu,c->r[31]); // 8010425C
  c->lr=0x80104264u; f_800043C4(c); // 80104260
  c->r[0]=R32(c->r[27]+0x00000010u); // 80104264
  cmps(c,0,(int32_t)c->r[0],0); // 80104268
  if (!crb(c,2)) { goto L_80104288; } // 8010426C
  c->r[5]=c->r[30]|c->r[30]; // 80104270
  c->r[3]=rotl(c->r[28],0)&0x0000FFFFu; // 80104274
  c->r[4]=0u+0x00000000u; // 80104278
  c->r[6]=0u+0x00000000u; // 8010427C
  c->lr=0x80104284u; f_80103E78(c); // 80104280
  goto L_801043A8; // 80104284
L_80104288:;
  c->r[4]=c->r[30]|c->r[30]; // 80104288
  c->r[3]=c->r[1]+0x0000000Au; // 8010428C
  c->r[5]=0u+0x00000006u; // 80104290
  c->lr=0x80104298u; f_800043C4(c); // 80104294
  c->r[4]=c->r[29]|c->r[29]; // 80104298
  c->r[3]=c->r[1]+0x00000010u; // 8010429C
  c->r[5]=0u+0x00000003u; // 801042A0
  c->lr=0x801042A8u; f_800043C4(c); // 801042A4
  c->r[0]=0u+0x00000002u; // 801042A8
  W8(c->r[1]+0x00000013u,c->r[31]); // 801042AC
  c->r[4]=c->r[1]+0x00000008u; // 801042B0
  c->r[3]=0u+0x00000002u; // 801042B4
  W16(c->r[27]+0x00000008u,c->r[0]); // 801042B8
  c->r[12]=R32(c->r[27]+0x00000010u); // 801042BC
  W16(c->r[1]+0x00000008u,c->r[28]); // 801042C0
  c->ctr=c->r[12]; // 801042C4
  if (true) { c->lr=0x801042CCu; dispatch(c,c->ctr); } // 801042C8
  goto L_801043A8; // 801042CC
L_801042D0:;
  c->r[28]=c->r[28]+0x00000001u; // 801042D0
  c->r[27]=c->r[27]+0x00000034u; // 801042D4
  cmpu(c,0,c->r[28],0x00000003u); // 801042D8
  if (crb(c,0)) { IRQCHK(c); goto L_80104210; } // 801042DC
  c->r[3]=0u+0x803D0000u; // 801042E0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801042E4
  c->r[0]=R32(c->r[3]+0x00001850u); // 801042E8
  cmps(c,0,(int32_t)c->r[0],0); // 801042EC
  if (crb(c,2)) { goto L_8010436C; } // 801042F0
  c->r[0]=0u+0x00000003u; // 801042F4
  c->r[28]=c->r[3]+0x00001854u; // 801042F8
  c->r[27]=0u+0x00000000u; // 801042FC
  c->ctr=c->r[0]; // 80104300
L_80104304:;
  c->r[0]=R16(c->r[28]+0x00000008u); // 80104304
  cmps(c,0,(int32_t)c->r[0],0); // 80104308
  if (!crb(c,2)) { goto L_8010433C; } // 8010430C
  c->r[0]=0u+0x00000000u; // 80104310
  c->r[29]=0u+0x00000001u; // 80104314
  W8(c->r[28]+0x0000000Cu,c->r[0]); // 80104318
  c->r[4]=c->r[30]|c->r[30]; // 8010431C
  c->r[3]=c->r[28]+0x00000028u; // 80104320
  c->r[5]=0u+0x00000006u; // 80104324
  W16(c->r[28]+0x00000008u,c->r[29]); // 80104328
  W8(c->r[28]+0x0000002Eu,c->r[31]); // 8010432C
  c->lr=0x80104334u; f_800043C4(c); // 80104330
  W8(c->r[28]+0x0000000Du,c->r[29]); // 80104334
  goto L_80104348; // 80104338
L_8010433C:;
  c->r[27]=c->r[27]+0x00000001u; // 8010433C
  c->r[28]=c->r[28]+0x00000034u; // 80104340
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104304; } // 80104344
L_80104348:;
  c->r[3]=rotl(c->r[27],0)&0x0000FFFFu; // 80104348
  cmpu(c,0,c->r[3],0x00000003u); // 8010434C
  if (!crb(c,0)) { goto L_8010436C; } // 80104350
  c->r[4]=0u+0x803D0000u; // 80104354
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104358
  c->r[12]=R32(c->r[4]+0x00001850u); // 8010435C
  c->ctr=c->r[12]; // 80104360
  if (true) { c->lr=0x80104368u; dispatch(c,c->ctr); } // 80104364
  goto L_801043A8; // 80104368
L_8010436C:;
  c->r[3]=0u+0x803D0000u; // 8010436C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104370
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80104374
  cmpu(c,0,c->r[0],0x00000002u); // 80104378
  if (crb(c,0)) { goto L_80104394; } // 8010437C
  c->r[3]=0u+0x000D0000u; // 80104380
  c->r[4]=0u+0x80330000u; // 80104384
  c->r[3]=c->r[3]+0x00000001u; // 80104388
  c->r[4]=c->r[4]+0xFFFFB3DCu; // 8010438C
  c->lr=0x80104394u; f_800F7280(c); // 80104390
L_80104394:;
  c->r[5]=c->r[30]|c->r[30]; // 80104394
  c->r[3]=0u+0x00000003u; // 80104398
  c->r[4]=0u+0x0000000Du; // 8010439C
  c->r[6]=0u+0x00000000u; // 801043A0
  c->lr=0x801043A8u; f_80103E78(c); // 801043A4
L_801043A8:;
  c->r[11]=c->r[1]+0x00000030u; // 801043A8
  c->lr=0x801043B0u; f_800ADA78(c); // 801043AC
  c->r[0]=R32(c->r[1]+0x00000034u); // 801043B0
  c->lr=c->r[0]; // 801043B4
  c->r[1]=c->r[1]+0x00000030u; // 801043B8
  return; // 801043BC
}

// btm_sco_connected
void f_801043C0(Ctx* __restrict c) {
  trace_call(0x801043C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801043C0
  c->r[0]=c->lr; // 801043C4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801043C8
  c->r[11]=c->r[1]+0x00000030u; // 801043CC
  c->lr=0x801043D4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801043D0
  c->r[7]=0u+0x803D0000u; // 801043D4
  c->r[24]=c->r[3]|c->r[3]; // 801043D8
  c->r[7]=c->r[7]+0xFFFFA218u; // 801043DC
  c->r[25]=c->r[4]|c->r[4]; // 801043E0
  W16(c->r[7]+0x000018F6u,c->r[3]); // 801043E4
  c->r[26]=c->r[5]|c->r[5]; // 801043E8
  c->r[29]=c->r[6]|c->r[6]; // 801043EC
  c->r[31]=c->r[7]+0x00001854u; // 801043F0
  c->r[27]=0u+0x00000000u; // 801043F4
  c->r[30]=0u+0x00000000u; // 801043F8
L_801043FC:;
  c->r[28]=R16(c->r[31]+0x00000008u); // 801043FC
  c->r[3]=c->r[28]+0x00010000u; // 80104400
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 80104404
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80104408
  cmpu(c,0,c->r[0],0x00000002u); // 8010440C
  if (crb(c,1)) { goto L_80104538; } // 80104410
  c->r[0]=R8(c->r[31]+0x0000000Du); // 80104414
  cmps(c,0,(int32_t)c->r[0],0); // 80104418
  if (crb(c,2)) { goto L_80104538; } // 8010441C
  cmps(c,0,(int32_t)c->r[25],0); // 80104420
  if (crb(c,2)) { goto L_80104440; } // 80104424
  c->r[4]=c->r[25]|c->r[25]; // 80104428
  c->r[3]=c->r[31]+0x00000028u; // 8010442C
  c->r[5]=0u+0x00000006u; // 80104430
  c->lr=0x80104438u; f_800B3824(c); // 80104434
  cmps(c,0,(int32_t)c->r[3],0); // 80104438
  if (!crb(c,2)) { goto L_80104538; } // 8010443C
L_80104440:;
  cmps(c,0,(int32_t)c->r[24],0); // 80104440
  if (crb(c,2)) { goto L_80104480; } // 80104444
  cmpu(c,0,c->r[28],0x00000003u); // 80104448
  if (!crb(c,2)) { goto L_80104474; } // 8010444C
  cmpu(c,0,c->r[24],0x00000023u); // 80104450
  if (crb(c,2)) { goto L_80104548; } // 80104454
  c->r[0]=0u+0x00000000u; // 80104458
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 8010445C
  W16(c->r[31]+0x00000008u,c->r[0]); // 80104460
  c->r[12]=R32(c->r[31]+0x00000004u); // 80104464
  c->ctr=c->r[12]; // 80104468
  if (true) { c->lr=0x80104470u; dispatch(c,c->ctr); } // 8010446C
  goto L_80104548; // 80104470
L_80104474:;
  c->r[0]=0u+0x00000001u; // 80104474
  W16(c->r[31]+0x00000008u,c->r[0]); // 80104478
  goto L_80104548; // 8010447C
L_80104480:;
  cmpu(c,0,c->r[28],0x00000001u); // 80104480
  if (!crb(c,2)) { goto L_8010448C; } // 80104484
  c->r[27]=0u+0x00000001u; // 80104488
L_8010448C:;
  c->r[0]=0u+0x00000004u; // 8010448C
  c->r[3]=0u+0x803D0000u; // 80104490
  W16(c->r[31]+0x00000008u,c->r[0]); // 80104494
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104498
  W16(c->r[31]+0x0000000Au,c->r[26]); // 8010449C
  c->r[0]=R8(c->r[3]+0x00001908u); // 801044A0
  cmps(c,0,(int32_t)c->r[0],0); // 801044A4
  if (!crb(c,2)) { goto L_801044E4; } // 801044A8
  c->r[0]=0u+0x00000000u; // 801044AC
  cmps(c,0,(int32_t)c->r[27],0); // 801044B0
  W8(c->r[31]+0x0000002Eu,c->r[0]); // 801044B4
  if (crb(c,2)) { goto L_80104524; } // 801044B8
  c->r[6]=R16(c->r[31]+0x00000020u); // 801044BC
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 801044C0
  c->r[5]=R16(c->r[31]+0x0000001Cu); // 801044C4
  c->r[4]=c->r[1]+0x00000008u; // 801044C8
  c->r[0]=R8(c->r[31]+0x00000022u); // 801044CC
  W16(c->r[1]+0x0000000Au,c->r[6]); // 801044D0
  W16(c->r[1]+0x00000008u,c->r[5]); // 801044D4
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801044D8
  c->lr=0x801044E0u; f_80104868(c); // 801044DC
  goto L_80104524; // 801044E0
L_801044E4:;
  cmps(c,0,(int32_t)c->r[29],0); // 801044E4
  if (crb(c,2)) { goto L_80104524; } // 801044E8
  c->r[3]=R16(c->r[29]+0x00000000u); // 801044EC
  c->r[0]=R16(c->r[29]+0x00000002u); // 801044F0
  W16(c->r[31]+0x00000024u,c->r[3]); // 801044F4
  W16(c->r[31]+0x00000026u,c->r[0]); // 801044F8
  c->r[3]=R16(c->r[29]+0x00000004u); // 801044FC
  c->r[0]=R16(c->r[29]+0x00000006u); // 80104500
  W16(c->r[31]+0x00000028u,c->r[3]); // 80104504
  W16(c->r[31]+0x0000002Au,c->r[0]); // 80104508
  c->r[0]=R16(c->r[29]+0x00000008u); // 8010450C
  W16(c->r[31]+0x0000002Cu,c->r[0]); // 80104510
  c->r[0]=R16(c->r[29]+0x0000000Au); // 80104514
  W16(c->r[31]+0x0000002Eu,c->r[0]); // 80104518
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 8010451C
  W16(c->r[31]+0x00000030u,c->r[0]); // 80104520
L_80104524:;
  c->r[12]=R32(c->r[31]+0x00000000u); // 80104524
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80104528
  c->ctr=c->r[12]; // 8010452C
  if (true) { c->lr=0x80104534u; dispatch(c,c->ctr); } // 80104530
  goto L_80104548; // 80104534
L_80104538:;
  c->r[30]=c->r[30]+0x00000001u; // 80104538
  c->r[31]=c->r[31]+0x00000034u; // 8010453C
  cmpu(c,0,c->r[30],0x00000003u); // 80104540
  if (crb(c,0)) { IRQCHK(c); goto L_801043FC; } // 80104544
L_80104548:;
  c->r[11]=c->r[1]+0x00000030u; // 80104548
  c->lr=0x80104550u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010454C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80104550
  c->lr=c->r[0]; // 80104554
  c->r[1]=c->r[1]+0x00000030u; // 80104558
  return; // 8010455C
}

// BTM_RemoveSco
void f_80104560(Ctx* __restrict c) {
  trace_call(0x80104560u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104560
  c->r[0]=c->lr; // 80104564
  c->r[4]=0u+0x803D0000u; // 80104568
  cmpu(c,0,c->r[3],0x00000003u); // 8010456C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104570
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 80104574
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104578
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010457C
  c->r[31]=c->r[4]+c->r[0]; // 80104580
  W32(c->r[1]+0x00000008u,c->r[30]); // 80104584
  if (!crb(c,0)) { goto L_80104598; } // 80104588
  c->r[30]=R16(c->r[31]+0x0000185Cu); // 8010458C
  cmps(c,0,(int32_t)c->r[30],0); // 80104590
  if (!crb(c,2)) { goto L_801045A0; } // 80104594
L_80104598:;
  c->r[3]=0u+0x00000007u; // 80104598
  goto L_80104600; // 8010459C
L_801045A0:;
  c->r[0]=R16(c->r[31]+0x0000185Eu); // 801045A0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801045A4
  if (crb(c,2)) { goto L_801045B4; } // 801045A8
  cmpu(c,0,c->r[30],0x00000006u); // 801045AC
  if (!crb(c,2)) { goto L_801045D4; } // 801045B0
L_801045B4:;
  c->r[3]=0u+0x00010000u; // 801045B4
  c->r[0]=0u+0x00000000u; // 801045B8
  c->r[4]=c->r[3]+0xFFFFFFFFu; // 801045BC
  W16(c->r[31]+0x0000185Eu,c->r[4]); // 801045C0
  c->r[3]=0u+0x00000000u; // 801045C4
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801045C8
  W32(c->r[31]+0x00001864u,c->r[0]); // 801045CC
  goto L_80104600; // 801045D0
L_801045D4:;
  c->r[0]=0u+0x00000005u; // 801045D4
  c->r[4]=0u+0x00000013u; // 801045D8
  W16(c->r[31]+0x0000185Cu,c->r[0]); // 801045DC
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801045E0
  c->lr=0x801045E8u; f_8010A444(c); // 801045E4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801045E8
  if (!crb(c,2)) { goto L_801045FC; } // 801045EC
  W16(c->r[31]+0x0000185Cu,c->r[30]); // 801045F0
  c->r[3]=0u+0x00000003u; // 801045F4
  goto L_80104600; // 801045F8
L_801045FC:;
  c->r[3]=0u+0x00000001u; // 801045FC
L_80104600:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104600
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80104604
  c->r[30]=R32(c->r[1]+0x00000008u); // 80104608
  c->lr=c->r[0]; // 8010460C
  c->r[1]=c->r[1]+0x00000010u; // 80104610
  return; // 80104614
}

// btm_remove_sco_links
void f_80104618(Ctx* __restrict c) {
  trace_call(0x80104618u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104618
  c->r[0]=c->lr; // 8010461C
  c->r[4]=0u+0x803D0000u; // 80104620
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104624
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104628
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010462C
  c->r[31]=c->r[4]+0x00001854u; // 80104630
  W32(c->r[1]+0x00000018u,c->r[30]); // 80104634
  c->r[30]=0u+0x00000000u; // 80104638
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010463C
  c->r[29]=c->r[3]|c->r[3]; // 80104640
L_80104644:;
  c->r[0]=R8(c->r[31]+0x0000000Du); // 80104644
  cmps(c,0,(int32_t)c->r[0],0); // 80104648
  if (crb(c,2)) { goto L_80104670; } // 8010464C
  c->r[4]=c->r[29]|c->r[29]; // 80104650
  c->r[3]=c->r[31]+0x00000028u; // 80104654
  c->r[5]=0u+0x00000006u; // 80104658
  c->lr=0x80104660u; f_800B3824(c); // 8010465C
  cmps(c,0,(int32_t)c->r[3],0); // 80104660
  if (!crb(c,2)) { goto L_80104670; } // 80104664
  c->r[3]=rotl(c->r[30],0)&0x0000FFFFu; // 80104668
  c->lr=0x80104670u; f_80104560(c); // 8010466C
L_80104670:;
  c->r[30]=c->r[30]+0x00000001u; // 80104670
  c->r[31]=c->r[31]+0x00000034u; // 80104674
  cmpu(c,0,c->r[30],0x00000003u); // 80104678
  if (crb(c,0)) { IRQCHK(c); goto L_80104644; } // 8010467C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104680
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80104684
  c->r[30]=R32(c->r[1]+0x00000018u); // 80104688
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010468C
  c->lr=c->r[0]; // 80104690
  c->r[1]=c->r[1]+0x00000020u; // 80104694
  return; // 80104698
}

// btm_sco_removed
void f_8010469C(Ctx* __restrict c) {
  trace_call(0x8010469Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010469C
  c->r[0]=c->lr; // 801046A0
  c->r[5]=0u+0x803D0000u; // 801046A4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801046A8
  c->r[5]=c->r[5]+0xFFFFA218u; // 801046AC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801046B0
  c->r[31]=c->r[3]|c->r[3]; // 801046B4
  c->r[3]=0u+0x00000000u; // 801046B8
  W16(c->r[5]+0x000018F6u,c->r[4]); // 801046BC
  c->r[0]=R16(c->r[5]+0x0000185Cu); // 801046C0
  cmps(c,0,(int32_t)c->r[0],7); // 801046C4
  if (!crb(c,0)) { goto L_801046DC; } // 801046C8
  cmps(c,0,(int32_t)c->r[0],2); // 801046CC
  if (!crb(c,0)) { goto L_801046D8; } // 801046D0
  goto L_801046DC; // 801046D4
L_801046D8:;
  c->r[3]=0u+0x00000001u; // 801046D8
L_801046DC:;
  c->r[0]=R16(c->r[5]+0x00001890u); // 801046DC
  cmps(c,0,(int32_t)c->r[0],7); // 801046E0
  if (!crb(c,0)) { goto L_801046F8; } // 801046E4
  cmps(c,0,(int32_t)c->r[0],2); // 801046E8
  if (!crb(c,0)) { goto L_801046F4; } // 801046EC
  goto L_801046F8; // 801046F0
L_801046F4:;
  c->r[3]=c->r[3]+0x00000001u; // 801046F4
L_801046F8:;
  c->r[0]=R16(c->r[5]+0x000018C4u); // 801046F8
  cmps(c,0,(int32_t)c->r[0],7); // 801046FC
  if (!crb(c,0)) { goto L_80104714; } // 80104700
  cmps(c,0,(int32_t)c->r[0],2); // 80104704
  if (!crb(c,0)) { goto L_80104710; } // 80104708
  goto L_80104714; // 8010470C
L_80104710:;
  c->r[3]=c->r[3]+0x00000001u; // 80104710
L_80104714:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80104714
  cmpu(c,0,c->r[0],0x00000001u); // 80104718
  if (crb(c,1)) { goto L_80104728; } // 8010471C
  c->r[3]=0u+0x00000000u; // 80104720
  c->lr=0x80104728u; f_800FF304(c); // 80104724
L_80104728:;
  c->r[3]=0u+0x803D0000u; // 80104728
  c->r[0]=0u+0x00000003u; // 8010472C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104730
  c->r[6]=0u+0x00000000u; // 80104734
  c->r[5]=c->r[3]+0x00001854u; // 80104738
  c->ctr=c->r[0]; // 8010473C
L_80104740:;
  c->r[0]=R16(c->r[5]+0x00000008u); // 80104740
  cmps(c,0,(int32_t)c->r[0],0); // 80104744
  if (crb(c,2)) { goto L_80104790; } // 80104748
  cmpu(c,0,c->r[0],0x00000001u); // 8010474C
  if (crb(c,2)) { goto L_80104790; } // 80104750
  c->r[0]=R16(c->r[5]+0x0000000Au); // 80104754
  cmpu(c,0,c->r[0],c->r[31]); // 80104758
  if (!crb(c,2)) { goto L_80104790; } // 8010475C
  c->r[4]=0u+0x00000000u; // 80104760
  c->r[3]=0u+0x00010000u; // 80104764
  W16(c->r[5]+0x00000008u,c->r[4]); // 80104768
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010476C
  c->r[3]=rotl(c->r[6],0)&0x0000FFFFu; // 80104770
  W16(c->r[5]+0x0000000Au,c->r[0]); // 80104774
  W8(c->r[5]+0x0000000Du,c->r[4]); // 80104778
  W32(c->r[5]+0x00000010u,c->r[4]); // 8010477C
  c->r[12]=R32(c->r[5]+0x00000004u); // 80104780
  c->ctr=c->r[12]; // 80104784
  if (true) { c->lr=0x8010478Cu; dispatch(c,c->ctr); } // 80104788
  goto L_8010479C; // 8010478C
L_80104790:;
  c->r[6]=c->r[6]+0x00000001u; // 80104790
  c->r[5]=c->r[5]+0x00000034u; // 80104794
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104740; } // 80104798
L_8010479C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010479C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801047A0
  c->lr=c->r[0]; // 801047A4
  c->r[1]=c->r[1]+0x00000010u; // 801047A8
  return; // 801047AC
}

// btm_sco_acl_removed
void f_801047B0(Ctx* __restrict c) {
  trace_call(0x801047B0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801047B0
  c->r[0]=c->lr; // 801047B4
  c->r[4]=0u+0x803D0000u; // 801047B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801047BC
  c->r[4]=c->r[4]+0xFFFFA218u; // 801047C0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801047C4
  c->r[31]=0u+0x00000000u; // 801047C8
  W32(c->r[1]+0x00000018u,c->r[30]); // 801047CC
  c->r[30]=c->r[4]+0x00001854u; // 801047D0
  W32(c->r[1]+0x00000014u,c->r[29]); // 801047D4
  c->r[29]=0u+0x00000000u; // 801047D8
  W32(c->r[1]+0x00000010u,c->r[28]); // 801047DC
  c->r[28]=c->r[3]|c->r[3]; // 801047E0
L_801047E4:;
  c->r[0]=R16(c->r[30]+0x00000008u); // 801047E4
  cmps(c,0,(int32_t)c->r[0],0); // 801047E8
  if (crb(c,2)) { goto L_80104834; } // 801047EC
  cmps(c,0,(int32_t)c->r[28],0); // 801047F0
  if (crb(c,2)) { goto L_8010481C; } // 801047F4
  c->r[4]=c->r[28]|c->r[28]; // 801047F8
  c->r[3]=c->r[30]+0x00000028u; // 801047FC
  c->r[5]=0u+0x00000006u; // 80104800
  c->lr=0x80104808u; f_800B3824(c); // 80104804
  cmps(c,0,(int32_t)c->r[3],0); // 80104808
  if (!crb(c,2)) { goto L_80104834; } // 8010480C
  c->r[0]=R8(c->r[30]+0x0000000Du); // 80104810
  cmps(c,0,(int32_t)c->r[0],0); // 80104814
  if (crb(c,2)) { goto L_80104834; } // 80104818
L_8010481C:;
  W16(c->r[30]+0x00000008u,c->r[31]); // 8010481C
  c->r[3]=rotl(c->r[29],0)&0x0000FFFFu; // 80104820
  W32(c->r[30]+0x00000010u,c->r[31]); // 80104824
  c->r[12]=R32(c->r[30]+0x00000004u); // 80104828
  c->ctr=c->r[12]; // 8010482C
  if (true) { c->lr=0x80104834u; dispatch(c,c->ctr); } // 80104830
L_80104834:;
  c->r[29]=c->r[29]+0x00000001u; // 80104834
  c->r[30]=c->r[30]+0x00000034u; // 80104838
  cmpu(c,0,c->r[29],0x00000003u); // 8010483C
  if (crb(c,0)) { IRQCHK(c); goto L_801047E4; } // 80104840
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104844
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80104848
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010484C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80104850
  c->r[28]=R32(c->r[1]+0x00000010u); // 80104854
  c->lr=c->r[0]; // 80104858
  c->r[1]=c->r[1]+0x00000020u; // 8010485C
  return; // 80104860
}

// btm_route_sco_data
void f_80104864(Ctx* __restrict c) {
  trace_call(0x80104864u);
  f_800F47C0(c); return; // 80104864
}

// BTM_ChangeEScoLinkParms
void f_80104868(Ctx* __restrict c) {
  trace_call(0x80104868u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104868
  c->r[0]=c->lr; // 8010486C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104870
  c->r[11]=c->r[1]+0x00000020u; // 80104874
  c->lr=0x8010487Cu; f_800ADA2C(c); // 80104878
  cmpu(c,0,c->r[3],0x00000003u); // 8010487C
  c->r[30]=0u+0x80330000u; // 80104880
  c->r[28]=c->r[4]|c->r[4]; // 80104884
  c->r[30]=c->r[30]+0xFFFFB2B0u; // 80104888
  if (!crb(c,0)) { goto L_801048AC; } // 8010488C
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 80104890
  c->r[3]=0u+0x803D0000u; // 80104894
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104898
  c->r[31]=c->r[3]+c->r[0]; // 8010489C
  c->r[0]=R16(c->r[31]+0x0000185Cu); // 801048A0
  cmpu(c,0,c->r[0],0x00000004u); // 801048A4
  if (crb(c,2)) { goto L_801048B4; } // 801048A8
L_801048AC:;
  c->r[3]=0u+0x00000006u; // 801048AC
  goto L_801049F8; // 801048B0
L_801048B4:;
  c->r[0]=R8(c->r[31]+0x00001882u); // 801048B4
  c->r[29]=c->r[31]+0x00001868u; // 801048B8
  cmps(c,0,(int32_t)c->r[0],0); // 801048BC
  if (crb(c,2)) { goto L_801048D0; } // 801048C0
  c->r[0]=R8(c->r[3]+0x00001908u); // 801048C4
  cmps(c,0,(int32_t)c->r[0],0); // 801048C8
  if (!crb(c,2)) { goto L_80104930; } // 801048CC
L_801048D0:;
  c->r[3]=0u+0x803D0000u; // 801048D0
  c->r[4]=R16(c->r[4]+0x00000002u); // 801048D4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801048D8
  c->r[0]=R16(c->r[3]+0x00000656u); // 801048DC
  c->r[0]=rotl(c->r[0],0)&0x00000007u; // 801048E0
  c->r[0]=c->r[4]&c->r[0]; // 801048E4
  W16(c->r[29]+0x0000000Cu,c->r[0]); // 801048E8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801048EC
  cmpu(c,0,c->r[0],0x00000003u); // 801048F0
  if (crb(c,0)) { goto L_80104910; } // 801048F4
  c->r[3]=0u+0x000D0000u; // 801048F8
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 801048FC
  c->r[6]=R16(c->r[29]+0x0000000Cu); // 80104900
  c->r[3]=c->r[3]+0x00000002u; // 80104904
  c->r[4]=c->r[30]+0x00000248u; // 80104908
  c->lr=0x80104910u; f_800F72C0(c); // 8010490C
L_80104910:;
  c->r[0]=R16(c->r[29]+0x0000000Cu); // 80104910
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 80104914
  c->r[4]=rotl(c->r[0],5)&0x000000E0u; // 80104918
  c->lr=0x80104920u; f_8010AAD8(c); // 8010491C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80104920
  if (!crb(c,2)) { goto L_801049F4; } // 80104924
  c->r[3]=0u+0x00000003u; // 80104928
  goto L_801049F8; // 8010492C
L_80104930:;
  c->r[0]=R8(c->r[3]+0x00000636u); // 80104930
  c->r[3]=R16(c->r[3]+0x00000656u); // 80104934
  c->r[4]=R16(c->r[4]+0x00000002u); // 80104938
  cmpu(c,0,c->r[0],0x00000003u); // 8010493C
  c->r[0]=c->r[4]&c->r[3]; // 80104940
  c->r[27]=rotl(c->r[0],0)&0x0000003Fu; // 80104944
  if (crb(c,0)) { goto L_8010495C; } // 80104948
  c->r[0]=c->r[4]|c->r[3]; // 8010494C
  c->r[0]=rotl(c->r[0],0)&0x000003C0u; // 80104950
  c->r[0]=c->r[27]|c->r[0]; // 80104954
  c->r[27]=rotl(c->r[0],0)&0x0000FFFFu; // 80104958
L_8010495C:;
  c->r[3]=0u+0x803D0000u; // 8010495C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104960
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80104964
  cmpu(c,0,c->r[0],0x00000003u); // 80104968
  if (crb(c,0)) { goto L_80104984; } // 8010496C
  c->r[3]=0u+0x000D0000u; // 80104970
  c->r[5]=R16(c->r[31]+0x0000185Eu); // 80104974
  c->r[3]=c->r[3]+0x00000002u; // 80104978
  c->r[4]=c->r[30]+0x0000028Cu; // 8010497C
  c->lr=0x80104984u; f_800F72A0(c); // 80104980
L_80104984:;
  c->r[3]=0u+0x803D0000u; // 80104984
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104988
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8010498C
  cmpu(c,0,c->r[0],0x00000003u); // 80104990
  if (crb(c,0)) { goto L_801049C0; } // 80104994
  c->r[3]=0u+0x000D0000u; // 80104998
  c->r[5]=R32(c->r[29]+0x00000000u); // 8010499C
  c->r[6]=R32(c->r[29]+0x00000004u); // 801049A0
  c->r[3]=c->r[3]+0x00000002u; // 801049A4
  c->r[7]=R16(c->r[28]+0x00000000u); // 801049A8
  c->r[4]=c->r[30]+0x0000008Cu; // 801049AC
  c->r[8]=R16(c->r[29]+0x0000000Au); // 801049B0
  c->r[10]=rotl(c->r[27],0)&0x0000FFFFu; // 801049B4
  c->r[9]=R8(c->r[28]+0x00000004u); // 801049B8
  c->lr=0x801049C0u; f_800F7340(c); // 801049BC
L_801049C0:;
  c->r[3]=R16(c->r[31]+0x0000185Eu); // 801049C0
  c->r[9]=rotl(c->r[27],0)&0x0000FFFFu; // 801049C4
  c->r[4]=R32(c->r[29]+0x00000000u); // 801049C8
  c->r[5]=R32(c->r[29]+0x00000004u); // 801049CC
  c->r[6]=R16(c->r[28]+0x00000000u); // 801049D0
  c->r[7]=R16(c->r[29]+0x0000000Au); // 801049D4
  c->r[8]=R8(c->r[28]+0x00000004u); // 801049D8
  c->lr=0x801049E0u; f_8010AF5C(c); // 801049DC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801049E0
  if (!crb(c,2)) { goto L_801049F0; } // 801049E4
  c->r[3]=0u+0x00000003u; // 801049E8
  goto L_801049F8; // 801049EC
L_801049F0:;
  W16(c->r[28]+0x00000002u,c->r[27]); // 801049F0
L_801049F4:;
  c->r[3]=0u+0x00000001u; // 801049F4
L_801049F8:;
  c->r[11]=c->r[1]+0x00000020u; // 801049F8
  c->lr=0x80104A00u; f_800ADA78(c); // 801049FC
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104A00
  c->lr=c->r[0]; // 80104A04
  c->r[1]=c->r[1]+0x00000020u; // 80104A08
  return; // 80104A0C
}

// btm_esco_proc_conn_chg
void f_80104A10(Ctx* __restrict c) {
  trace_call(0x80104A10u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104A10
  c->r[0]=c->lr; // 80104A14
  W32(c->r[1]+0x00000044u,c->r[0]); // 80104A18
  c->r[11]=c->r[1]+0x00000040u; // 80104A1C
  c->lr=0x80104A24u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80104A20
  c->r[9]=0u+0x803D0000u; // 80104A24
  c->r[24]=c->r[3]|c->r[3]; // 80104A28
  c->r[9]=c->r[9]+0xFFFFA218u; // 80104A2C
  c->r[25]=c->r[4]|c->r[4]; // 80104A30
  c->r[0]=R8(c->r[9]+0x000027C0u); // 80104A34
  c->r[26]=c->r[5]|c->r[5]; // 80104A38
  c->r[27]=c->r[6]|c->r[6]; // 80104A3C
  c->r[28]=c->r[7]|c->r[7]; // 80104A40
  cmpu(c,0,c->r[0],0x00000004u); // 80104A44
  c->r[29]=c->r[8]|c->r[8]; // 80104A48
  c->r[31]=c->r[9]+0x00001854u; // 80104A4C
  if (crb(c,0)) { goto L_80104A70; } // 80104A50
  c->r[3]=0u+0x000D0000u; // 80104A54
  c->r[4]=0u+0x80330000u; // 80104A58
  c->r[5]=c->r[25]|c->r[25]; // 80104A5C
  c->r[6]=c->r[24]|c->r[24]; // 80104A60
  c->r[3]=c->r[3]+0x00000003u; // 80104A64
  c->r[4]=c->r[4]+0xFFFFB574u; // 80104A68
  c->lr=0x80104A70u; f_800F72C0(c); // 80104A6C
L_80104A70:;
  c->r[0]=0u+0x00000003u; // 80104A70
  c->r[30]=0u+0x00000000u; // 80104A74
  c->ctr=c->r[0]; // 80104A78
L_80104A7C:;
  c->r[0]=R16(c->r[31]+0x00000008u); // 80104A7C
  cmpu(c,0,c->r[0],0x00000004u); // 80104A80
  if (!crb(c,2)) { goto L_80104AF0; } // 80104A84
  c->r[0]=R16(c->r[31]+0x0000000Au); // 80104A88
  cmpu(c,0,c->r[25],c->r[0]); // 80104A8C
  if (!crb(c,2)) { goto L_80104AF0; } // 80104A90
  c->r[0]=R32(c->r[31]+0x00000010u); // 80104A94
  cmps(c,0,(int32_t)c->r[0],0); // 80104A98
  if (crb(c,2)) { goto L_80104AFC; } // 80104A9C
  c->r[3]=c->r[1]+0x0000000Eu; // 80104AA0
  c->r[4]=c->r[31]+0x00000028u; // 80104AA4
  c->r[5]=0u+0x00000006u; // 80104AA8
  c->lr=0x80104AB0u; f_800043C4(c); // 80104AAC
  W16(c->r[31]+0x00000024u,c->r[28]); // 80104AB0
  c->r[4]=c->r[1]+0x00000008u; // 80104AB4
  c->r[3]=0u+0x00000001u; // 80104AB8
  W16(c->r[31]+0x00000026u,c->r[29]); // 80104ABC
  W8(c->r[31]+0x0000002Fu,c->r[26]); // 80104AC0
  W8(c->r[31]+0x00000030u,c->r[27]); // 80104AC4
  c->r[12]=R32(c->r[31]+0x00000010u); // 80104AC8
  W8(c->r[1]+0x00000014u,c->r[24]); // 80104ACC
  W16(c->r[1]+0x00000008u,c->r[30]); // 80104AD0
  W16(c->r[1]+0x0000000Au,c->r[28]); // 80104AD4
  W16(c->r[1]+0x0000000Cu,c->r[29]); // 80104AD8
  W8(c->r[1]+0x00000015u,c->r[26]); // 80104ADC
  W8(c->r[1]+0x00000016u,c->r[27]); // 80104AE0
  c->ctr=c->r[12]; // 80104AE4
  if (true) { c->lr=0x80104AECu; dispatch(c,c->ctr); } // 80104AE8
  goto L_80104AFC; // 80104AEC
L_80104AF0:;
  c->r[30]=c->r[30]+0x00000001u; // 80104AF0
  c->r[31]=c->r[31]+0x00000034u; // 80104AF4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104A7C; } // 80104AF8
L_80104AFC:;
  c->r[11]=c->r[1]+0x00000040u; // 80104AFC
  c->lr=0x80104B04u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80104B00
  c->r[0]=R32(c->r[1]+0x00000044u); // 80104B04
  c->lr=c->r[0]; // 80104B08
  c->r[1]=c->r[1]+0x00000040u; // 80104B0C
  return; // 80104B10
}

// btm_is_sco_active
void f_80104B14(Ctx* __restrict c) {
  trace_call(0x80104B14u);
  c->r[4]=0u+0x803D0000u; // 80104B14
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104B18
  c->r[0]=R16(c->r[4]+0x0000185Eu); // 80104B1C
  cmpu(c,0,c->r[3],c->r[0]); // 80104B20
  if (!crb(c,2)) { goto L_80104B3C; } // 80104B24
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 80104B28
  cmpu(c,0,c->r[0],0x00000004u); // 80104B2C
  if (!crb(c,2)) { goto L_80104B3C; } // 80104B30
  c->r[3]=0u+0x00000001u; // 80104B34
  return; // 80104B38
L_80104B3C:;
  c->r[0]=R16(c->r[4]+0x00001892u); // 80104B3C
  cmpu(c,0,c->r[3],c->r[0]); // 80104B40
  if (!crb(c,2)) { goto L_80104B5C; } // 80104B44
  c->r[0]=R16(c->r[4]+0x00001890u); // 80104B48
  cmpu(c,0,c->r[0],0x00000004u); // 80104B4C
  if (!crb(c,2)) { goto L_80104B5C; } // 80104B50
  c->r[3]=0u+0x00000001u; // 80104B54
  return; // 80104B58
L_80104B5C:;
  c->r[0]=R16(c->r[4]+0x000018C6u); // 80104B5C
  cmpu(c,0,c->r[3],c->r[0]); // 80104B60
  if (!crb(c,2)) { goto L_80104B7C; } // 80104B64
  c->r[0]=R16(c->r[4]+0x000018C4u); // 80104B68
  cmpu(c,0,c->r[0],0x00000004u); // 80104B6C
  if (!crb(c,2)) { goto L_80104B7C; } // 80104B70
  c->r[3]=0u+0x00000001u; // 80104B74
  return; // 80104B78
L_80104B7C:;
  c->r[3]=0u+0x00000000u; // 80104B7C
  return; // 80104B80
}

// btm_num_sco_links_active
void f_80104B84(Ctx* __restrict c) {
  trace_call(0x80104B84u);
  c->r[4]=0u+0x803D0000u; // 80104B84
  c->r[3]=0u+0x00000000u; // 80104B88
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104B8C
  c->r[0]=R16(c->r[4]+0x0000185Cu); // 80104B90
  cmps(c,0,(int32_t)c->r[0],7); // 80104B94
  if (!crb(c,0)) { goto L_80104BAC; } // 80104B98
  cmps(c,0,(int32_t)c->r[0],2); // 80104B9C
  if (!crb(c,0)) { goto L_80104BA8; } // 80104BA0
  goto L_80104BAC; // 80104BA4
L_80104BA8:;
  c->r[3]=0u+0x00000001u; // 80104BA8
L_80104BAC:;
  c->r[0]=R16(c->r[4]+0x00001890u); // 80104BAC
  cmps(c,0,(int32_t)c->r[0],7); // 80104BB0
  if (!crb(c,0)) { goto L_80104BC8; } // 80104BB4
  cmps(c,0,(int32_t)c->r[0],2); // 80104BB8
  if (!crb(c,0)) { goto L_80104BC4; } // 80104BBC
  goto L_80104BC8; // 80104BC0
L_80104BC4:;
  c->r[3]=c->r[3]+0x00000001u; // 80104BC4
L_80104BC8:;
  c->r[0]=R16(c->r[4]+0x000018C4u); // 80104BC8
  cmps(c,0,(int32_t)c->r[0],7); // 80104BCC
  if (!crb(c,0)) return; // 80104BD0
  cmps(c,0,(int32_t)c->r[0],2); // 80104BD4
  if (crb(c,0)) return; // 80104BD8
  c->r[3]=c->r[3]+0x00000001u; // 80104BDC
  return; // 80104BE0
}

// btm_is_sco_active_by_bdaddr
void f_80104BE4(Ctx* __restrict c) {
  trace_call(0x80104BE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104BE4
  c->r[0]=c->lr; // 80104BE8
  c->r[4]=0u+0x803D0000u; // 80104BEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104BF0
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104BF4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80104BF8
  c->r[31]=0u+0x00000000u; // 80104BFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80104C00
  c->r[30]=c->r[4]+0x00001854u; // 80104C04
  W32(c->r[1]+0x00000014u,c->r[29]); // 80104C08
  c->r[29]=c->r[3]|c->r[3]; // 80104C0C
L_80104C10:;
  c->r[4]=c->r[29]|c->r[29]; // 80104C10
  c->r[3]=c->r[30]+0x00000028u; // 80104C14
  c->r[5]=0u+0x00000006u; // 80104C18
  c->lr=0x80104C20u; f_800B3824(c); // 80104C1C
  cmps(c,0,(int32_t)c->r[3],0); // 80104C20
  if (!crb(c,2)) { goto L_80104C3C; } // 80104C24
  c->r[0]=R16(c->r[30]+0x00000008u); // 80104C28
  cmpu(c,0,c->r[0],0x00000004u); // 80104C2C
  if (!crb(c,2)) { goto L_80104C3C; } // 80104C30
  c->r[3]=0u+0x00000001u; // 80104C34
  goto L_80104C50; // 80104C38
L_80104C3C:;
  c->r[31]=c->r[31]+0x00000001u; // 80104C3C
  c->r[30]=c->r[30]+0x00000034u; // 80104C40
  cmpu(c,0,c->r[31],0x00000003u); // 80104C44
  if (crb(c,0)) { IRQCHK(c); goto L_80104C10; } // 80104C48
  c->r[3]=0u+0x00000000u; // 80104C4C
L_80104C50:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104C50
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80104C54
  c->r[30]=R32(c->r[1]+0x00000018u); // 80104C58
  c->r[29]=R32(c->r[1]+0x00000014u); // 80104C5C
  c->lr=c->r[0]; // 80104C60
  c->r[1]=c->r[1]+0x00000020u; // 80104C64
  return; // 80104C68
}

// BTM_SecRegister
void f_80104C6C(Ctx* __restrict c) {
  trace_call(0x80104C6Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104C6C
  c->r[0]=c->lr; // 80104C70
  c->r[6]=0u+0x803D0000u; // 80104C74
  W32(c->r[1]+0x00000014u,c->r[0]); // 80104C78
  c->r[6]=c->r[6]+0xFFFFA218u; // 80104C7C
  c->r[5]=R32(c->r[3]+0x00000000u); // 80104C80
  c->r[4]=R32(c->r[3]+0x00000004u); // 80104C84
  c->r[0]=R8(c->r[6]+0x000027C0u); // 80104C88
  W32(c->r[6]+0x0000190Cu,c->r[5]); // 80104C8C
  cmpu(c,0,c->r[0],0x00000004u); // 80104C90
  W32(c->r[6]+0x00001910u,c->r[4]); // 80104C94
  c->r[4]=R32(c->r[3]+0x00000008u); // 80104C98
  c->r[0]=R32(c->r[3]+0x0000000Cu); // 80104C9C
  W32(c->r[6]+0x00001914u,c->r[4]); // 80104CA0
  W32(c->r[6]+0x00001918u,c->r[0]); // 80104CA4
  c->r[4]=R32(c->r[3]+0x00000010u); // 80104CA8
  c->r[0]=R32(c->r[3]+0x00000014u); // 80104CAC
  W32(c->r[6]+0x0000191Cu,c->r[4]); // 80104CB0
  W32(c->r[6]+0x00001920u,c->r[0]); // 80104CB4
  if (crb(c,0)) { goto L_80104CD0; } // 80104CB8
  c->r[3]=0u+0x000D0000u; // 80104CBC
  c->r[4]=0u+0x80330000u; // 80104CC0
  c->r[3]=c->r[3]+0x00000003u; // 80104CC4
  c->r[4]=c->r[4]+0xFFFFB5B0u; // 80104CC8
  c->lr=0x80104CD0u; f_800F7280(c); // 80104CCC
L_80104CD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80104CD0
  c->r[3]=0u+0x00000001u; // 80104CD4
  c->lr=c->r[0]; // 80104CD8
  c->r[1]=c->r[1]+0x00000010u; // 80104CDC
  return; // 80104CE0
}

// BTM_SecAddRmtNameNotifyCallback
void f_80104CE4(Ctx* __restrict c) {
  trace_call(0x80104CE4u);
  c->r[4]=0u+0x803D0000u; // 80104CE4
  c->r[0]=0u+0x00000002u; // 80104CE8
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104CEC
  c->r[5]=0u+0x00000000u; // 80104CF0
  c->ctr=c->r[0]; // 80104CF4
L_80104CF8:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 80104CF8
  cmps(c,0,(int32_t)c->r[0],0); // 80104CFC
  if (!crb(c,2)) { goto L_80104D20; } // 80104D00
  c->r[4]=0u+0x803D0000u; // 80104D04
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80104D08
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104D0C
  c->r[4]=c->r[4]+c->r[0]; // 80104D10
  W32(c->r[4]+0x0000192Cu,c->r[3]); // 80104D14
  c->r[3]=0u+0x00000001u; // 80104D18
  return; // 80104D1C
L_80104D20:;
  c->r[4]=c->r[4]+0x00000004u; // 80104D20
  c->r[5]=c->r[5]+0x00000001u; // 80104D24
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104CF8; } // 80104D28
  c->r[3]=0u+0x00000000u; // 80104D2C
  return; // 80104D30
}

// BTM_SecDeleteRmtNameNotifyCallback
void f_80104D34(Ctx* __restrict c) {
  trace_call(0x80104D34u);
  c->r[4]=0u+0x803D0000u; // 80104D34
  c->r[0]=0u+0x00000002u; // 80104D38
  c->r[4]=c->r[4]+0xFFFFA218u; // 80104D3C
  c->r[5]=0u+0x00000000u; // 80104D40
  c->ctr=c->r[0]; // 80104D44
L_80104D48:;
  c->r[0]=R32(c->r[4]+0x0000192Cu); // 80104D48
  cmpu(c,0,c->r[0],c->r[3]); // 80104D4C
  if (!crb(c,2)) { goto L_80104D74; } // 80104D50
  c->r[3]=0u+0x803D0000u; // 80104D54
  c->r[0]=rotl(c->r[5],2)&0xFFFFFFFCu; // 80104D58
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104D5C
  c->r[5]=0u+0x00000000u; // 80104D60
  c->r[4]=c->r[3]+c->r[0]; // 80104D64
  W32(c->r[4]+0x0000192Cu,c->r[5]); // 80104D68
  c->r[3]=0u+0x00000001u; // 80104D6C
  return; // 80104D70
L_80104D74:;
  c->r[4]=c->r[4]+0x00000004u; // 80104D74
  c->r[5]=c->r[5]+0x00000001u; // 80104D78
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80104D48; } // 80104D7C
  c->r[3]=0u+0x00000000u; // 80104D80
  return; // 80104D84
}

// BTM_SetPinType
void f_80104D88(Ctx* __restrict c) {
  trace_call(0x80104D88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104D88
  c->r[0]=c->lr; // 80104D8C
  c->r[6]=0u+0x803D0000u; // 80104D90
  W32(c->r[1]+0x00000024u,c->r[0]); // 80104D94
  c->r[6]=c->r[6]+0xFFFFA218u; // 80104D98
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80104D9C
  c->r[31]=c->r[5]|c->r[5]; // 80104DA0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80104DA4
  c->r[30]=c->r[4]|c->r[4]; // 80104DA8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80104DAC
  c->r[29]=c->r[3]|c->r[3]; // 80104DB0
  c->r[0]=R8(c->r[6]+0x000027C0u); // 80104DB4
  cmpu(c,0,c->r[0],0x00000003u); // 80104DB8
  if (crb(c,0)) { goto L_80104DE0; } // 80104DBC
  c->r[3]=0u+0x000D0000u; // 80104DC0
  c->r[4]=0u+0x80330000u; // 80104DC4
  c->r[5]=c->r[29]|c->r[29]; // 80104DC8
  c->r[6]=c->r[30]|c->r[30]; // 80104DCC
  c->r[7]=c->r[31]|c->r[31]; // 80104DD0
  c->r[3]=c->r[3]+0x00000002u; // 80104DD4
  c->r[4]=c->r[4]+0xFFFFB648u; // 80104DD8
  c->lr=0x80104DE0u; f_800F72E0(c); // 80104DDC
L_80104DE0:;
  c->r[3]=0u+0x803D0000u; // 80104DE0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104DE4
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 80104DE8
  cmpu(c,0,c->r[0],0x00000001u); // 80104DEC
  if (!crb(c,1)) { goto L_80104DFC; } // 80104DF0
  c->r[3]=c->r[29]|c->r[29]; // 80104DF4
  c->lr=0x80104DFCu; f_8010B838(c); // 80104DF8
L_80104DFC:;
  c->r[6]=0u+0x803D0000u; // 80104DFC
  c->r[4]=c->r[30]|c->r[30]; // 80104E00
  c->r[6]=c->r[6]+0xFFFFA218u; // 80104E04
  c->r[5]=c->r[31]|c->r[31]; // 80104E08
  W8(c->r[6]+0x00000020u,c->r[29]); // 80104E0C
  c->r[3]=c->r[6]+0x00000022u; // 80104E10
  W8(c->r[6]+0x00000021u,c->r[31]); // 80104E14
  c->lr=0x80104E1Cu; f_800043C4(c); // 80104E18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80104E1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80104E20
  c->r[30]=R32(c->r[1]+0x00000018u); // 80104E24
  c->r[29]=R32(c->r[1]+0x00000014u); // 80104E28
  c->lr=c->r[0]; // 80104E2C
  c->r[1]=c->r[1]+0x00000020u; // 80104E30
  return; // 80104E34
}

// BTM_SetSecurityLevel
void f_80104E38(Ctx* __restrict c) {
  trace_call(0x80104E38u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80104E38
  c->r[0]=c->lr; // 80104E3C
  W32(c->r[1]+0x00000044u,c->r[0]); // 80104E40
  c->r[11]=c->r[1]+0x00000040u; // 80104E44
  c->lr=0x80104E4Cu; { W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80104E48
  c->r[10]=0u+0x803D0000u; // 80104E4C
  c->r[31]=0u+0x80330000u; // 80104E50
  c->r[10]=c->r[10]+0xFFFFA218u; // 80104E54
  c->r[11]=0u+0x00010000u; // 80104E58
  c->r[20]=c->r[3]|c->r[3]; // 80104E5C
  c->r[21]=c->r[4]|c->r[4]; // 80104E60
  c->r[22]=c->r[5]|c->r[5]; // 80104E64
  c->r[23]=c->r[6]|c->r[6]; // 80104E68
  c->r[24]=c->r[7]|c->r[7]; // 80104E6C
  c->r[25]=c->r[8]|c->r[8]; // 80104E70
  c->r[26]=c->r[9]|c->r[9]; // 80104E74
  c->r[31]=c->r[31]+0xFFFFB5B0u; // 80104E78
  c->r[28]=c->r[11]+0xFFFFFFFFu; // 80104E7C
  c->r[30]=c->r[10]+0x00001990u; // 80104E80
  c->r[27]=0u+0x00000000u; // 80104E84
  c->r[29]=0u+0x00000000u; // 80104E88
L_80104E8C:;
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 80104E8C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80104E90
  if (crb(c,2)) { goto L_80104EF4; } // 80104E94
  c->r[0]=R16(c->r[30]+0x0000000Cu); // 80104E98
  cmpu(c,0,c->r[0],c->r[24]); // 80104E9C
  if (!crb(c,2)) { goto L_80104F04; } // 80104EA0
  c->r[0]=R32(c->r[30]+0x00000000u); // 80104EA4
  cmpu(c,0,c->r[0],c->r[25]); // 80104EA8
  if (!crb(c,2)) { goto L_80104F04; } // 80104EAC
  c->r[0]=R8(c->r[30]+0x0000000Fu); // 80104EB0
  cmpu(c,0,c->r[22],c->r[0]); // 80104EB4
  if (!crb(c,2)) { goto L_80104F04; } // 80104EB8
  c->r[3]=c->r[21]|c->r[21]; // 80104EBC
  c->r[4]=c->r[30]+0x00000010u; // 80104EC0
  c->r[5]=0u+0x00000015u; // 80104EC4
  c->lr=0x80104ECCu; f_800B7A64(c); // 80104EC8
  cmps(c,0,(int32_t)c->r[3],0); // 80104ECC
  if (crb(c,2)) { goto L_80104EEC; } // 80104ED0
  c->r[3]=c->r[21]|c->r[21]; // 80104ED4
  c->r[4]=c->r[30]+0x00000026u; // 80104ED8
  c->r[5]=0u+0x00000015u; // 80104EDC
  c->lr=0x80104EE4u; f_800B7A64(c); // 80104EE0
  cmps(c,0,(int32_t)c->r[3],0); // 80104EE4
  if (!crb(c,2)) { goto L_80104F04; } // 80104EE8
L_80104EEC:;
  c->r[27]=0u+0x00000001u; // 80104EEC
  goto L_80104F14; // 80104EF0
L_80104EF4:;
  cmps(c,0,(int32_t)c->r[27],0); // 80104EF4
  if (!crb(c,2)) { goto L_80104F04; } // 80104EF8
  c->r[27]=0u+0x00000001u; // 80104EFC
  c->r[28]=c->r[29]|c->r[29]; // 80104F00
L_80104F04:;
  c->r[29]=c->r[29]+0x00000001u; // 80104F04
  c->r[30]=c->r[30]+0x0000003Cu; // 80104F08
  cmpu(c,0,c->r[29],0x00000018u); // 80104F0C
  if (crb(c,0)) { IRQCHK(c); goto L_80104E8C; } // 80104F10
L_80104F14:;
  cmps(c,0,(int32_t)c->r[27],0); // 80104F14
  if (crb(c,2)) { goto L_8010501C; } // 80104F18
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 80104F1C
  cmpu(c,0,c->r[0],0x00000018u); // 80104F20
  if (crb(c,0)) { goto L_80104F44; } // 80104F24
  c->r[0]=rotl(c->r[28],0)&0x0000FFFFu; // 80104F28
  c->r[3]=0u+0x803D0000u; // 80104F2C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)60); // 80104F30
  c->r[29]=c->r[28]|c->r[28]; // 80104F34
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104F38
  c->r[3]=c->r[3]+c->r[0]; // 80104F3C
  c->r[30]=c->r[3]+0x00001990u; // 80104F40
L_80104F44:;
  W16(c->r[30]+0x0000000Cu,c->r[24]); // 80104F44
  cmps(c,0,(int32_t)c->r[20],0); // 80104F48
  W8(c->r[30]+0x0000000Fu,c->r[22]); // 80104F4C
  W32(c->r[30]+0x00000000u,c->r[25]); // 80104F50
  if (crb(c,2)) { goto L_80104F7C; } // 80104F54
  W32(c->r[30]+0x00000004u,c->r[26]); // 80104F58
  c->r[4]=c->r[21]|c->r[21]; // 80104F5C
  c->r[3]=c->r[30]+0x00000010u; // 80104F60
  c->r[5]=0u+0x00000015u; // 80104F64
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 80104F68
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFC7u; // 80104F6C
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 80104F70
  c->lr=0x80104F78u; f_800B788C(c); // 80104F74
  goto L_80104F9C; // 80104F78
L_80104F7C:;
  W32(c->r[30]+0x00000008u,c->r[26]); // 80104F7C
  c->r[4]=c->r[21]|c->r[21]; // 80104F80
  c->r[3]=c->r[30]+0x00000026u; // 80104F84
  c->r[5]=0u+0x00000015u; // 80104F88
  c->r[0]=R8(c->r[30]+0x0000000Eu); // 80104F8C
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 80104F90
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 80104F94
  c->lr=0x80104F9Cu; f_800B788C(c); // 80104F98
L_80104F9C:;
  c->r[4]=R8(c->r[30]+0x0000000Eu); // 80104F9C
  c->r[0]=c->r[23]|0x00000080u; // 80104FA0
  c->r[3]=0u+0x803D0000u; // 80104FA4
  c->r[0]=c->r[4]|c->r[0]; // 80104FA8
  W8(c->r[30]+0x0000000Eu,c->r[0]); // 80104FAC
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104FB0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80104FB4
  cmpu(c,0,c->r[0],0x00000003u); // 80104FB8
  if (crb(c,0)) { goto L_80104FE8; } // 80104FBC
  c->r[3]=0u+0x000D0000u; // 80104FC0
  c->r[6]=c->r[22]|c->r[22]; // 80104FC4
  c->r[7]=c->r[20]|c->r[20]; // 80104FC8
  c->r[8]=c->r[24]|c->r[24]; // 80104FCC
  c->r[9]=c->r[25]|c->r[25]; // 80104FD0
  c->r[10]=c->r[26]|c->r[26]; // 80104FD4
  c->r[3]=c->r[3]+0x00000002u; // 80104FD8
  c->r[4]=c->r[31]+0x000000E0u; // 80104FDC
  c->r[5]=rotl(c->r[29],0)&0x0000FFFFu; // 80104FE0
  c->lr=0x80104FE8u; f_800F7340(c); // 80104FE4
L_80104FE8:;
  c->r[3]=0u+0x803D0000u; // 80104FE8
  c->r[3]=c->r[3]+0xFFFFA218u; // 80104FEC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80104FF0
  cmpu(c,0,c->r[0],0x00000003u); // 80104FF4
  if (crb(c,0)) { goto L_80105044; } // 80104FF8
  c->r[3]=0u+0x000D0000u; // 80104FFC
  c->r[5]=R8(c->r[30]+0x0000000Eu); // 80105000
  c->r[6]=c->r[21]|c->r[21]; // 80105004
  c->r[4]=c->r[31]+0x00000128u; // 80105008
  c->r[3]=c->r[3]+0x00000002u; // 8010500C
  c->r[7]=0u+0x00000015u; // 80105010
  c->lr=0x80105018u; f_800F72E0(c); // 80105014
  goto L_80105044; // 80105018
L_8010501C:;
  c->r[3]=0u+0x803D0000u; // 8010501C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105020
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105024
  cmpu(c,0,c->r[0],0x00000002u); // 80105028
  if (crb(c,0)) { goto L_80105044; } // 8010502C
  c->r[3]=0u+0x000D0000u; // 80105030
  c->r[4]=c->r[31]+0x00000170u; // 80105034
  c->r[3]=c->r[3]+0x00000001u; // 80105038
  c->r[5]=0u+0x00000018u; // 8010503C
  c->lr=0x80105044u; f_800F72A0(c); // 80105040
L_80105044:;
  c->r[11]=c->r[1]+0x00000040u; // 80105044
  c->r[3]=c->r[27]|c->r[27]; // 80105048
  c->lr=0x80105050u; { c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010504C
  c->r[0]=R32(c->r[1]+0x00000044u); // 80105050
  c->lr=c->r[0]; // 80105054
  c->r[1]=c->r[1]+0x00000040u; // 80105058
  return; // 8010505C
}

// BTM_PINCodeReply
void f_80105060(Ctx* __restrict c) {
  trace_call(0x80105060u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105060
  c->r[0]=c->lr; // 80105064
  W32(c->r[1]+0x00000034u,c->r[0]); // 80105068
  c->r[11]=c->r[1]+0x00000030u; // 8010506C
  c->lr=0x80105074u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80105070
  c->r[30]=0u+0x803D0000u; // 80105074
  c->r[25]=c->r[3]|c->r[3]; // 80105078
  c->r[30]=c->r[30]+0xFFFFA218u; // 8010507C
  c->r[26]=c->r[4]|c->r[4]; // 80105080
  c->r[0]=R32(c->r[30]+0x0000194Cu); // 80105084
  c->r[27]=c->r[5]|c->r[5]; // 80105088
  c->r[28]=c->r[6]|c->r[6]; // 8010508C
  c->r[29]=c->r[7]|c->r[7]; // 80105090
  cmps(c,0,(int32_t)c->r[0],0); // 80105094
  if (crb(c,2)) { goto L_8010510C; } // 80105098
  c->r[3]=c->r[30]+0x0000193Cu; // 8010509C
  c->lr=0x801050A4u; f_800F7900(c); // 801050A0
  c->r[31]=0u+0x00000000u; // 801050A4
  c->r[3]=c->r[30]+0x00001954u; // 801050A8
  W32(c->r[30]+0x0000194Cu,c->r[31]); // 801050AC
  c->r[4]=0u+0x000000FFu; // 801050B0
  c->r[5]=0u+0x00000006u; // 801050B4
  c->lr=0x801050BCu; f_80004714(c); // 801050B8
  cmps(c,0,(int32_t)c->r[26],0); // 801050BC
  if (crb(c,2)) { goto L_801050D8; } // 801050C0
  c->r[0]=0u+0x0000000Eu; // 801050C4
  c->r[3]=c->r[25]|c->r[25]; // 801050C8
  W8(c->r[30]+0x000027BFu,c->r[0]); // 801050CC
  c->lr=0x801050D4u; f_8010AA38(c); // 801050D0
  goto L_8010510C; // 801050D4
L_801050D8:;
  W8(c->r[30]+0x000027BFu,c->r[31]); // 801050D8
  c->r[3]=c->r[25]|c->r[25]; // 801050DC
  c->r[4]=c->r[27]|c->r[27]; // 801050E0
  c->r[5]=c->r[28]|c->r[28]; // 801050E4
  c->lr=0x801050ECu; f_8010A854(c); // 801050E8
  c->r[3]=c->r[25]|c->r[25]; // 801050EC
  c->lr=0x801050F4u; f_800FF9D0(c); // 801050F0
  cmps(c,0,(int32_t)c->r[3],0); // 801050F4
  if (crb(c,2)) { goto L_8010510C; } // 801050F8
  c->r[0]=R32(c->r[29]+0x00000000u); // 801050FC
  W32(c->r[3]+0x00000010u,c->r[0]); // 80105100
  c->r[0]=R32(c->r[29]+0x00000004u); // 80105104
  W32(c->r[3]+0x00000014u,c->r[0]); // 80105108
L_8010510C:;
  c->r[11]=c->r[1]+0x00000030u; // 8010510C
  c->lr=0x80105114u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80105110
  c->r[0]=R32(c->r[1]+0x00000034u); // 80105114
  c->lr=c->r[0]; // 80105118
  c->r[1]=c->r[1]+0x00000030u; // 8010511C
  return; // 80105120
}

// BTM_DeviceAuthorized
void f_80105124(Ctx* __restrict c) {
  trace_call(0x80105124u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105124
  c->r[0]=c->lr; // 80105128
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010512C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80105130
  W32(c->r[1]+0x00000018u,c->r[30]); // 80105134
  c->r[30]=c->r[3]|c->r[3]; // 80105138
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010513C
  c->r[29]=c->r[5]|c->r[5]; // 80105140
  W32(c->r[1]+0x00000010u,c->r[28]); // 80105144
  c->r[28]=c->r[4]|c->r[4]; // 80105148
  c->lr=0x80105150u; f_800FF9D0(c); // 8010514C
  cmps(c,1,(int32_t)c->r[3],0); // 80105150
  c->r[31]=c->r[3]|c->r[3]; // 80105154
  if (!crb(c,6)) { goto L_801051A0; } // 80105158
  c->r[3]=0u+0x803D0000u; // 8010515C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105160
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105164
  cmpu(c,0,c->r[0],0x00000002u); // 80105168
  if (crb(c,0)) { goto L_801052E0; } // 8010516C
  c->r[3]=0u+0x000D0000u; // 80105170
  c->r[4]=0u+0x80330000u; // 80105174
  c->r[5]=R8(c->r[30]+0x00000000u); // 80105178
  c->r[3]=c->r[3]+0x00000001u; // 8010517C
  c->r[6]=R8(c->r[30]+0x00000001u); // 80105180
  c->r[4]=c->r[4]+0xFFFFB750u; // 80105184
  c->r[7]=R8(c->r[30]+0x00000002u); // 80105188
  c->r[8]=R8(c->r[30]+0x00000003u); // 8010518C
  c->r[9]=R8(c->r[30]+0x00000004u); // 80105190
  c->r[10]=R8(c->r[30]+0x00000005u); // 80105194
  c->lr=0x8010519Cu; f_800F7340(c); // 80105198
  goto L_801052E0; // 8010519C
L_801051A0:;
  c->r[3]=0u+0x803D0000u; // 801051A0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801051A4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801051A8
  cmpu(c,0,c->r[0],0x00000004u); // 801051AC
  if (crb(c,0)) { goto L_801051DC; } // 801051B0
  c->r[3]=0u+0x000D0000u; // 801051B4
  c->r[4]=0u+0x80330000u; // 801051B8
  c->r[5]=c->r[28]|c->r[28]; // 801051BC
  c->r[3]=c->r[3]+0x00000003u; // 801051C0
  c->r[4]=c->r[4]+0xFFFFB7B0u; // 801051C4
  if (crb(c,6)) { goto L_801051D4; } // 801051C8
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801051CC
  goto L_801051D8; // 801051D0
L_801051D4:;
  c->r[6]=0u+0x00000000u; // 801051D4
L_801051D8:;
  c->lr=0x801051DCu; f_800F72C0(c); // 801051D8
L_801051DC:;
  cmps(c,0,(int32_t)c->r[28],0); // 801051DC
  if (!crb(c,2)) { goto L_80105200; } // 801051E0
  c->r[0]=R8(c->r[31]+0x00000076u); // 801051E4
  c->r[0]=c->r[0]|0x00000001u; // 801051E8
  W8(c->r[31]+0x00000076u,c->r[0]); // 801051EC
  c->r[0]=R32(c->r[29]+0x00000000u); // 801051F0
  W32(c->r[31]+0x00000010u,c->r[0]); // 801051F4
  c->r[0]=R32(c->r[29]+0x00000004u); // 801051F8
  W32(c->r[31]+0x00000014u,c->r[0]); // 801051FC
L_80105200:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 80105200
  cmpu(c,0,c->r[0],0x00000004u); // 80105204
  if (!crb(c,2)) { goto L_801052E0; } // 80105208
  c->r[29]=0u+0x00000000u; // 8010520C
  cmps(c,0,(int32_t)c->r[28],0); // 80105210
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 80105214
  if (crb(c,2)) { goto L_80105274; } // 80105218
  c->r[0]=R32(c->r[31]+0x00000004u); // 8010521C
  cmps(c,0,(int32_t)c->r[0],0); // 80105220
  if (crb(c,2)) { goto L_801052E0; } // 80105224
  c->r[0]=R8(c->r[31]+0x00000080u); // 80105228
  cmps(c,0,(int32_t)c->r[0],0); // 8010522C
  if (crb(c,2)) { goto L_80105250; } // 80105230
  c->r[3]=R32(c->r[31]+0x00000000u); // 80105234
  cmps(c,0,(int32_t)c->r[3],0); // 80105238
  if (crb(c,2)) { goto L_80105250; } // 8010523C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80105240
  cmpu(c,0,c->r[0],0x00000003u); // 80105244
  if (!crb(c,2)) { goto L_80105250; } // 80105248
  W32(c->r[3]+0x00000004u,c->r[29]); // 8010524C
L_80105250:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80105250
  c->r[3]=c->r[30]|c->r[30]; // 80105254
  c->r[5]=c->r[28]|c->r[28]; // 80105258
  c->r[4]=R32(c->r[31]+0x00000008u); // 8010525C
  c->ctr=c->r[12]; // 80105260
  if (true) { c->lr=0x80105268u; dispatch(c,c->ctr); } // 80105264
  c->r[0]=0u+0x00000000u; // 80105268
  W32(c->r[31]+0x00000004u,c->r[0]); // 8010526C
  goto L_801052E0; // 80105270
L_80105274:;
  c->r[3]=c->r[31]|c->r[31]; // 80105274
  c->lr=0x8010527Cu; f_80107620(c); // 80105278
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8010527C
  c->r[4]=c->r[3]|c->r[3]; // 80105280
  cmpu(c,0,c->r[0],0x00000001u); // 80105284
  if (crb(c,2)) { goto L_801052E0; } // 80105288
  c->r[0]=R32(c->r[31]+0x00000004u); // 8010528C
  cmps(c,0,(int32_t)c->r[0],0); // 80105290
  if (crb(c,2)) { goto L_801052E0; } // 80105294
  c->r[0]=R8(c->r[31]+0x00000080u); // 80105298
  cmps(c,0,(int32_t)c->r[0],0); // 8010529C
  if (crb(c,2)) { goto L_801052C0; } // 801052A0
  c->r[3]=R32(c->r[31]+0x00000000u); // 801052A4
  cmps(c,0,(int32_t)c->r[3],0); // 801052A8
  if (crb(c,2)) { goto L_801052C0; } // 801052AC
  c->r[0]=R32(c->r[3]+0x00000000u); // 801052B0
  cmpu(c,0,c->r[0],0x00000003u); // 801052B4
  if (!crb(c,2)) { goto L_801052C0; } // 801052B8
  W32(c->r[3]+0x00000004u,c->r[29]); // 801052BC
L_801052C0:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801052C0
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 801052C4
  c->r[3]=c->r[30]|c->r[30]; // 801052C8
  c->r[4]=R32(c->r[31]+0x00000008u); // 801052CC
  c->ctr=c->r[12]; // 801052D0
  if (true) { c->lr=0x801052D8u; dispatch(c,c->ctr); } // 801052D4
  c->r[0]=0u+0x00000000u; // 801052D8
  W32(c->r[31]+0x00000004u,c->r[0]); // 801052DC
L_801052E0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801052E0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801052E4
  c->r[30]=R32(c->r[1]+0x00000018u); // 801052E8
  c->r[29]=R32(c->r[1]+0x00000014u); // 801052EC
  c->r[28]=R32(c->r[1]+0x00000010u); // 801052F0
  c->lr=c->r[0]; // 801052F4
  c->r[1]=c->r[1]+0x00000020u; // 801052F8
  return; // 801052FC
}

// BTM_SecBond
void f_80105300(Ctx* __restrict c) {
  trace_call(0x80105300u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105300
  c->r[0]=c->lr; // 80105304
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105308
  c->r[11]=c->r[1]+0x00000020u; // 8010530C
  c->lr=0x80105314u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80105310
  c->r[7]=0u+0x803D0000u; // 80105314
  c->r[31]=0u+0x80330000u; // 80105318
  c->r[7]=c->r[7]+0xFFFFA218u; // 8010531C
  c->r[28]=c->r[3]|c->r[3]; // 80105320
  c->r[0]=R8(c->r[7]+0x000027C0u); // 80105324
  c->r[29]=c->r[4]|c->r[4]; // 80105328
  c->r[26]=c->r[5]|c->r[5]; // 8010532C
  c->r[27]=c->r[6]|c->r[6]; // 80105330
  cmpu(c,0,c->r[0],0x00000003u); // 80105334
  c->r[31]=c->r[31]+0xFFFFB5B0u; // 80105338
  if (crb(c,0)) { goto L_80105368; } // 8010533C
  c->r[3]=0u+0x000D0000u; // 80105340
  c->r[5]=R8(c->r[28]+0x00000000u); // 80105344
  c->r[6]=R8(c->r[28]+0x00000001u); // 80105348
  c->r[3]=c->r[3]+0x00000002u; // 8010534C
  c->r[7]=R8(c->r[28]+0x00000002u); // 80105350
  c->r[4]=c->r[31]+0x00000230u; // 80105354
  c->r[8]=R8(c->r[28]+0x00000003u); // 80105358
  c->r[9]=R8(c->r[28]+0x00000004u); // 8010535C
  c->r[10]=R8(c->r[28]+0x00000005u); // 80105360
  c->lr=0x80105368u; f_800F7340(c); // 80105364
L_80105368:;
  cmpu(c,0,c->r[29],0x00000010u); // 80105368
  if (!crb(c,1)) { goto L_8010539C; } // 8010536C
  c->r[3]=0u+0x803D0000u; // 80105370
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105374
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105378
  cmpu(c,0,c->r[0],0x00000001u); // 8010537C
  if (crb(c,0)) { goto L_80105394; } // 80105380
  c->r[5]=c->r[29]|c->r[29]; // 80105384
  c->r[4]=c->r[31]+0x00000260u; // 80105388
  c->r[3]=0u+0x000D0000u; // 8010538C
  c->lr=0x80105394u; f_800F72A0(c); // 80105390
L_80105394:;
  c->r[3]=0u+0x00000005u; // 80105394
  goto L_801056B4; // 80105398
L_8010539C:;
  c->r[3]=c->r[28]|c->r[28]; // 8010539C
  c->lr=0x801053A4u; f_800FF9D0(c); // 801053A0
  cmps(c,0,(int32_t)c->r[3],0); // 801053A4
  c->r[30]=c->r[3]|c->r[3]; // 801053A8
  if (!crb(c,2)) { goto L_801053EC; } // 801053AC
  c->r[3]=c->r[28]|c->r[28]; // 801053B0
  c->lr=0x801053B8u; f_800FF7F8(c); // 801053B4
  cmps(c,0,(int32_t)c->r[3],0); // 801053B8
  c->r[30]=c->r[3]|c->r[3]; // 801053BC
  if (!crb(c,2)) { goto L_801053EC; } // 801053C0
  c->r[3]=0u+0x803D0000u; // 801053C4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801053C8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801053CC
  cmpu(c,0,c->r[0],0x00000001u); // 801053D0
  if (crb(c,0)) { goto L_801053E4; } // 801053D4
  c->r[4]=c->r[31]+0x00000280u; // 801053D8
  c->r[3]=0u+0x000D0000u; // 801053DC
  c->lr=0x801053E4u; f_800F7280(c); // 801053E0
L_801053E4:;
  c->r[3]=0u+0x00000003u; // 801053E4
  goto L_801056B4; // 801053E8
L_801053EC:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801053EC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801053F0
  if (crb(c,2)) { goto L_80105430; } // 801053F4
  c->r[0]=R8(c->r[30]+0x00000076u); // 801053F8
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801053FC
  if (crb(c,2)) { goto L_80105430; } // 80105400
  c->r[3]=0u+0x803D0000u; // 80105404
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105408
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8010540C
  cmpu(c,0,c->r[0],0x00000002u); // 80105410
  if (crb(c,0)) { goto L_80105428; } // 80105414
  c->r[3]=0u+0x000D0000u; // 80105418
  c->r[4]=c->r[31]+0x000002A0u; // 8010541C
  c->r[3]=c->r[3]+0x00000001u; // 80105420
  c->lr=0x80105428u; f_800F7280(c); // 80105424
L_80105428:;
  c->r[3]=0u+0x00000000u; // 80105428
  goto L_801056B4; // 8010542C
L_80105430:;
  c->r[3]=c->r[28]|c->r[28]; // 80105430
  c->r[4]=0u+0x00000000u; // 80105434
  c->lr=0x8010543Cu; f_801011BC(c); // 80105438
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010543C
  if (crb(c,2)) { goto L_8010544C; } // 80105440
  c->r[3]=0u+0x00000003u; // 80105444
  goto L_801056B4; // 80105448
L_8010544C:;
  c->r[0]=0u+0x00000050u; // 8010544C
  c->r[3]=0u+0x803D0000u; // 80105450
  W8(c->r[30]+0x00000081u,c->r[0]); // 80105454
  c->r[0]=0u+0x00000001u; // 80105458
  cmps(c,0,(int32_t)c->r[29],0); // 8010545C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105460
  W8(c->r[30]+0x00000080u,c->r[0]); // 80105464
  c->r[0]=R32(c->r[27]+0x00000000u); // 80105468
  W32(c->r[30]+0x00000010u,c->r[0]); // 8010546C
  c->r[0]=R32(c->r[27]+0x00000004u); // 80105470
  W32(c->r[30]+0x00000014u,c->r[0]); // 80105474
  W8(c->r[3]+0x0000197Fu,c->r[29]); // 80105478
  if (crb(c,2)) { goto L_80105490; } // 8010547C
  c->r[4]=c->r[26]|c->r[26]; // 80105480
  c->r[5]=c->r[29]|c->r[29]; // 80105484
  c->r[3]=c->r[3]+0x00001980u; // 80105488
  c->lr=0x80105490u; f_800043C4(c); // 8010548C
L_80105490:;
  c->r[3]=R8(c->r[30]+0x00000076u); // 80105490
  c->r[0]=0u+0xFFFFFFE9u; // 80105494
  c->r[0]=c->r[3]&c->r[0]; // 80105498
  W8(c->r[30]+0x00000076u,c->r[0]); // 8010549C
  c->r[0]=R8(c->r[30]+0x00000023u); // 801054A0
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801054A4
  cmps(c,0,(int32_t)c->r[0],5); // 801054A8
  if (!crb(c,2)) { goto L_801054E0; } // 801054AC
  c->r[0]=R8(c->r[30]+0x00000024u); // 801054B0
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 801054B4
  if (crb(c,2)) { goto L_801054E0; } // 801054B8
  c->r[4]=0u+0x803D0000u; // 801054BC
  c->r[4]=c->r[4]+0xFFFFA218u; // 801054C0
  c->r[0]=R8(c->r[4]+0x00000020u); // 801054C4
  cmpu(c,0,c->r[0],0x00000001u); // 801054C8
  if (crb(c,2)) { goto L_801054E0; } // 801054CC
  c->r[0]=0u+0x00000001u; // 801054D0
  c->r[3]=0u+0x00000001u; // 801054D4
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801054D8
  c->lr=0x801054E0u; f_8010B838(c); // 801054DC
L_801054E0:;
  c->r[29]=0u+0x803D0000u; // 801054E0
  c->r[27]=0u+0x00000000u; // 801054E4
  c->r[29]=c->r[29]+0xFFFFA218u; // 801054E8
  W8(c->r[29]+0x0000197Eu,c->r[27]); // 801054EC
  c->r[0]=R16(c->r[30]+0x00000018u); // 801054F0
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801054F4
  if (crb(c,2)) { goto L_80105534; } // 801054F8
  c->r[3]=R8(c->r[30]+0x00000076u); // 801054FC
  c->r[0]=0u+0x00000001u; // 80105500
  c->r[3]=rotl(c->r[3],0)&0xFFFFFFEFu; // 80105504
  W8(c->r[30]+0x00000076u,c->r[3]); // 80105508
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 8010550C
  c->r[3]=R16(c->r[30]+0x00000018u); // 80105510
  c->lr=0x80105518u; f_8010AB68(c); // 80105514
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80105518
  if (!crb(c,2)) { goto L_80105528; } // 8010551C
  c->r[3]=0u+0x00000003u; // 80105520
  goto L_801056B4; // 80105524
L_80105528:;
  W8(c->r[29]+0x0000197Du,c->r[27]); // 80105528
  c->r[3]=0u+0x00000001u; // 8010552C
  goto L_801056B4; // 80105530
L_80105534:;
  c->r[0]=R8(c->r[29]+0x00001978u); // 80105534
  cmpu(c,0,c->r[0],0x00000003u); // 80105538
  if (crb(c,2)) { goto L_801055A4; } // 8010553C
  c->r[0]=R8(c->r[29]+0x000027C0u); // 80105540
  cmpu(c,0,c->r[0],0x00000005u); // 80105544
  if (crb(c,0)) { goto L_8010555C; } // 80105548
  c->r[3]=0u+0x000D0000u; // 8010554C
  c->r[4]=c->r[31]+0x000002C0u; // 80105550
  c->r[3]=c->r[3]+0x00000004u; // 80105554
  c->lr=0x8010555Cu; f_800F7280(c); // 80105558
L_8010555C:;
  c->r[3]=0u+0x00000001u; // 8010555C
  c->lr=0x80105564u; f_8010BDAC(c); // 80105560
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80105564
  if (!crb(c,2)) { goto L_80105594; } // 80105568
  c->r[3]=0u+0x803D0000u; // 8010556C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105570
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105574
  cmpu(c,0,c->r[0],0x00000001u); // 80105578
  if (crb(c,0)) { goto L_8010558C; } // 8010557C
  c->r[4]=c->r[31]+0x000002E4u; // 80105580
  c->r[3]=0u+0x000D0000u; // 80105584
  c->lr=0x8010558Cu; f_800F7280(c); // 80105588
L_8010558C:;
  c->r[3]=0u+0x00000003u; // 8010558C
  goto L_801056B4; // 80105590
L_80105594:;
  c->r[3]=0u+0x803D0000u; // 80105594
  c->r[0]=0u+0x00000001u; // 80105598
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010559C
  W8(c->r[3]+0x0000197Bu,c->r[0]); // 801055A0
L_801055A4:;
  c->r[3]=0u+0x803D0000u; // 801055A4
  c->r[0]=0u+0x00000001u; // 801055A8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801055AC
  W8(c->r[3]+0x0000197Du,c->r[0]); // 801055B0
  c->lr=0x801055B8u; f_80100D14(c); // 801055B4
  c->r[4]=R8(c->r[3]+0x00000000u); // 801055B8
  c->r[0]=0u+0x00000000u; // 801055BC
  c->r[3]=c->r[28]|c->r[28]; // 801055C0
  W8(c->r[30]+0x00000085u,c->r[0]); // 801055C4
  c->r[27]=rotl(c->r[4],27)&0x00000001u; // 801055C8
  c->lr=0x801055D0u; f_801020DC(c); // 801055CC
  cmps(c,0,(int32_t)c->r[3],0); // 801055D0
  c->r[4]=c->r[3]|c->r[3]; // 801055D4
  if (crb(c,2)) { goto L_80105600; } // 801055D8
  c->r[0]=R16(c->r[4]+0x00000000u); // 801055DC
  c->r[3]=c->r[28]|c->r[28]; // 801055E0
  c->r[5]=R8(c->r[4]+0x0000000Bu); // 801055E4
  c->r[8]=c->r[27]|c->r[27]; // 801055E8
  c->r[6]=R8(c->r[4]+0x0000000Du); // 801055EC
  c->r[7]=c->r[0]|0x00008000u; // 801055F0
  c->r[4]=0u+0x00000018u; // 801055F4
  c->lr=0x801055FCu; f_8010A364(c); // 801055F8
  goto L_8010561C; // 801055FC
L_80105600:;
  c->r[7]=R16(c->r[30]+0x0000001Au); // 80105600
  c->r[3]=c->r[28]|c->r[28]; // 80105604
  c->r[8]=c->r[27]|c->r[27]; // 80105608
  c->r[4]=0u+0x00000018u; // 8010560C
  c->r[5]=0u+0x00000001u; // 80105610
  c->r[6]=0u+0x00000000u; // 80105614
  c->lr=0x8010561Cu; f_8010A364(c); // 80105618
L_8010561C:;
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010561C
  if (crb(c,2)) { goto L_8010562C; } // 80105620
  c->r[3]=0u+0x00000001u; // 80105624
  goto L_801056B4; // 80105628
L_8010562C:;
  c->r[3]=0u+0x803D0000u; // 8010562C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105630
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105634
  cmpu(c,0,c->r[0],0x00000001u); // 80105638
  if (crb(c,0)) { goto L_8010564C; } // 8010563C
  c->r[4]=c->r[31]+0x000002E4u; // 80105640
  c->r[3]=0u+0x000D0000u; // 80105644
  c->lr=0x8010564Cu; f_800F7280(c); // 80105648
L_8010564C:;
  c->r[4]=0u+0x803D0000u; // 8010564C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80105650
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 80105654
  cmps(c,0,(int32_t)c->r[0],0); // 80105658
  if (crb(c,2)) { goto L_801056B0; } // 8010565C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80105660
  c->r[3]=0u+0x00000000u; // 80105664
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 80105668
  cmpu(c,0,c->r[0],0x00000005u); // 8010566C
  if (crb(c,0)) { goto L_80105694; } // 80105670
  c->r[5]=R8(c->r[4]+0x00001978u); // 80105674
  c->r[3]=0u+0x000D0000u; // 80105678
  c->r[3]=c->r[3]+0x00000004u; // 8010567C
  c->r[4]=c->r[31]+0x000002FCu; // 80105680
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 80105684
  c->r[0]=cntlz(c->r[0]); // 80105688
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 8010568C
  c->lr=0x80105694u; f_800F72A0(c); // 80105690
L_80105694:;
  c->r[3]=0u+0x803D0000u; // 80105694
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105698
  c->r[3]=R8(c->r[3]+0x00001978u); // 8010569C
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801056A0
  c->r[0]=cntlz(c->r[0]); // 801056A4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801056A8
  c->lr=0x801056B0u; f_8010BDAC(c); // 801056AC
L_801056B0:;
  c->r[3]=0u+0x00000003u; // 801056B0
L_801056B4:;
  c->r[11]=c->r[1]+0x00000020u; // 801056B4
  c->lr=0x801056BCu; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801056B8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801056BC
  c->lr=c->r[0]; // 801056C0
  c->r[1]=c->r[1]+0x00000020u; // 801056C4
  return; // 801056C8
}

// btm_sec_l2cap_access_req
void f_801056CC(Ctx* __restrict c) {
  trace_call(0x801056CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801056CC
  c->r[0]=c->lr; // 801056D0
  W32(c->r[1]+0x00000034u,c->r[0]); // 801056D4
  c->r[11]=c->r[1]+0x00000030u; // 801056D8
  c->lr=0x801056E0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801056DC
  c->r[31]=0u+0x80330000u; // 801056E0
  c->r[24]=c->r[3]|c->r[3]; // 801056E4
  c->r[25]=c->r[4]|c->r[4]; // 801056E8
  c->r[26]=c->r[5]|c->r[5]; // 801056EC
  c->r[27]=c->r[6]|c->r[6]; // 801056F0
  c->r[28]=c->r[7]|c->r[7]; // 801056F4
  c->r[31]=c->r[31]+0xFFFFB5B0u; // 801056F8
  c->lr=0x80105700u; f_800FF9D0(c); // 801056FC
  cmps(c,0,(int32_t)c->r[3],0); // 80105700
  c->r[30]=c->r[3]|c->r[3]; // 80105704
  if (!crb(c,2)) { goto L_80105770; } // 80105708
  c->r[3]=c->r[24]|c->r[24]; // 8010570C
  c->lr=0x80105714u; f_800FF7F8(c); // 80105710
  cmps(c,0,(int32_t)c->r[3],0); // 80105714
  c->r[30]=c->r[3]|c->r[3]; // 80105718
  if (!crb(c,2)) { goto L_80105770; } // 8010571C
  c->r[3]=0u+0x803D0000u; // 80105720
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105724
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105728
  cmpu(c,0,c->r[0],0x00000002u); // 8010572C
  if (crb(c,0)) { goto L_80105748; } // 80105730
  c->r[3]=0u+0x000D0000u; // 80105734
  c->r[5]=c->r[25]|c->r[25]; // 80105738
  c->r[3]=c->r[3]+0x00000001u; // 8010573C
  c->r[4]=c->r[31]+0x00000410u; // 80105740
  c->lr=0x80105748u; f_800F72A0(c); // 80105744
L_80105748:;
  cmps(c,0,(int32_t)c->r[28],0); // 80105748
  if (crb(c,2)) { goto L_80105768; } // 8010574C
  c->r[12]=c->r[28]|c->r[28]; // 80105750
  c->r[3]=c->r[24]|c->r[24]; // 80105754
  c->r[4]=0u+0x00000000u; // 80105758
  c->r[5]=0u+0x00000003u; // 8010575C
  c->ctr=c->r[12]; // 80105760
  if (true) { c->lr=0x80105768u; dispatch(c,c->ctr); } // 80105764
L_80105768:;
  c->r[3]=0u+0x00000003u; // 80105768
  goto L_80105B18; // 8010576C
L_80105770:;
  c->r[3]=0u+0x803D0000u; // 80105770
  c->r[0]=0u+0x00000004u; // 80105774
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105778
  W16(c->r[30]+0x00000018u,c->r[26]); // 8010577C
  c->r[4]=c->r[3]+0x00001990u; // 80105780
  c->r[3]=0u+0x00000000u; // 80105784
  c->ctr=c->r[0]; // 80105788
L_8010578C:;
  c->r[0]=R8(c->r[4]+0x0000000Eu); // 8010578C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105790
  if (crb(c,2)) { goto L_801057A8; } // 80105794
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80105798
  cmpu(c,0,c->r[0],c->r[25]); // 8010579C
  if (!crb(c,2)) { goto L_801057A8; } // 801057A0
  goto L_80105858; // 801057A4
L_801057A8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801057A8
  c->r[4]=c->r[4]+0x0000003Cu; // 801057AC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801057B0
  if (crb(c,2)) { goto L_801057C8; } // 801057B4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801057B8
  cmpu(c,0,c->r[0],c->r[25]); // 801057BC
  if (!crb(c,2)) { goto L_801057C8; } // 801057C0
  goto L_80105858; // 801057C4
L_801057C8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801057C8
  c->r[4]=c->r[4]+0x0000003Cu; // 801057CC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801057D0
  if (crb(c,2)) { goto L_801057E8; } // 801057D4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801057D8
  cmpu(c,0,c->r[0],c->r[25]); // 801057DC
  if (!crb(c,2)) { goto L_801057E8; } // 801057E0
  goto L_80105858; // 801057E4
L_801057E8:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 801057E8
  c->r[4]=c->r[4]+0x0000003Cu; // 801057EC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801057F0
  if (crb(c,2)) { goto L_80105808; } // 801057F4
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801057F8
  cmpu(c,0,c->r[0],c->r[25]); // 801057FC
  if (!crb(c,2)) { goto L_80105808; } // 80105800
  goto L_80105858; // 80105804
L_80105808:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 80105808
  c->r[4]=c->r[4]+0x0000003Cu; // 8010580C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105810
  if (crb(c,2)) { goto L_80105828; } // 80105814
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80105818
  cmpu(c,0,c->r[0],c->r[25]); // 8010581C
  if (!crb(c,2)) { goto L_80105828; } // 80105820
  goto L_80105858; // 80105824
L_80105828:;
  c->r[0]=R8(c->r[4]+0x0000004Au); // 80105828
  c->r[4]=c->r[4]+0x0000003Cu; // 8010582C
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105830
  if (crb(c,2)) { goto L_80105848; } // 80105834
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80105838
  cmpu(c,0,c->r[0],c->r[25]); // 8010583C
  if (!crb(c,2)) { goto L_80105848; } // 80105840
  goto L_80105858; // 80105844
L_80105848:;
  c->r[3]=c->r[3]+0x00000005u; // 80105848
  c->r[4]=c->r[4]+0x0000003Cu; // 8010584C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010578C; } // 80105850
  c->r[4]=0u+0x00000000u; // 80105854
L_80105858:;
  cmps(c,0,(int32_t)c->r[4],0); // 80105858
  if (!crb(c,2)) { goto L_801058B0; } // 8010585C
  c->r[3]=0u+0x803D0000u; // 80105860
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105864
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105868
  cmpu(c,0,c->r[0],0x00000002u); // 8010586C
  if (crb(c,0)) { goto L_80105888; } // 80105870
  c->r[3]=0u+0x000D0000u; // 80105874
  c->r[5]=c->r[25]|c->r[25]; // 80105878
  c->r[3]=c->r[3]+0x00000001u; // 8010587C
  c->r[4]=c->r[31]+0x00000448u; // 80105880
  c->lr=0x80105888u; f_800F72A0(c); // 80105884
L_80105888:;
  cmps(c,0,(int32_t)c->r[28],0); // 80105888
  if (crb(c,2)) { goto L_801058A8; } // 8010588C
  c->r[12]=c->r[28]|c->r[28]; // 80105890
  c->r[3]=c->r[24]|c->r[24]; // 80105894
  c->r[4]=0u+0x00000000u; // 80105898
  c->r[5]=0u+0x00000004u; // 8010589C
  c->ctr=c->r[12]; // 801058A0
  if (true) { c->lr=0x801058A8u; dispatch(c,c->ctr); } // 801058A4
L_801058A8:;
  c->r[3]=0u+0x00000004u; // 801058A8
  goto L_80105B18; // 801058AC
L_801058B0:;
  cmps(c,0,(int32_t)c->r[27],0); // 801058B0
  if (crb(c,2)) { goto L_801058C8; } // 801058B4
  if (crb(c,2)) { goto L_801058CC; } // 801058B8
  c->r[0]=R32(c->r[30]+0x00000000u); // 801058BC
  cmps(c,0,(int32_t)c->r[0],0); // 801058C0
  if (!crb(c,2)) { goto L_801058CC; } // 801058C4
L_801058C8:;
  W32(c->r[30]+0x00000000u,c->r[4]); // 801058C8
L_801058CC:;
  c->r[3]=0u+0x803D0000u; // 801058CC
  c->r[0]=0u+0x00000006u; // 801058D0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801058D4
  c->r[29]=R8(c->r[4]+0x0000000Eu); // 801058D8
  c->r[7]=c->r[3]+0x00001990u; // 801058DC
  c->r[6]=0u+0x00000000u; // 801058E0
  c->r[5]=0u+0x00000000u; // 801058E4
  c->ctr=c->r[0]; // 801058E8
L_801058EC:;
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801058EC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801058F0
  if (crb(c,2)) { goto L_80105924; } // 801058F4
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801058F8
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801058FC
  cmpu(c,0,c->r[3],c->r[0]); // 80105900
  if (!crb(c,2)) { goto L_80105924; } // 80105904
  cmps(c,0,(int32_t)c->r[6],0); // 80105908
  if (!crb(c,2)) { goto L_801059E8; } // 8010590C
  cmpu(c,0,c->r[4],c->r[7]); // 80105910
  if (!crb(c,2)) { goto L_80105924; } // 80105914
  c->r[6]=0u+0x00000001u; // 80105918
  goto L_80105924; // 8010591C
  goto L_801059E8; // 80105920
L_80105924:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 80105924
  c->r[7]=c->r[7]+0x0000003Cu; // 80105928
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 8010592C
  if (crb(c,2)) { goto L_80105960; } // 80105930
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 80105934
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80105938
  cmpu(c,0,c->r[3],c->r[0]); // 8010593C
  if (!crb(c,2)) { goto L_80105960; } // 80105940
  cmps(c,0,(int32_t)c->r[6],0); // 80105944
  if (!crb(c,2)) { goto L_801059E8; } // 80105948
  cmpu(c,0,c->r[4],c->r[7]); // 8010594C
  if (!crb(c,2)) { goto L_80105960; } // 80105950
  c->r[6]=0u+0x00000001u; // 80105954
  goto L_80105960; // 80105958
  goto L_801059E8; // 8010595C
L_80105960:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 80105960
  c->r[7]=c->r[7]+0x0000003Cu; // 80105964
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105968
  if (crb(c,2)) { goto L_8010599C; } // 8010596C
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 80105970
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 80105974
  cmpu(c,0,c->r[3],c->r[0]); // 80105978
  if (!crb(c,2)) { goto L_8010599C; } // 8010597C
  cmps(c,0,(int32_t)c->r[6],0); // 80105980
  if (!crb(c,2)) { goto L_801059E8; } // 80105984
  cmpu(c,0,c->r[4],c->r[7]); // 80105988
  if (!crb(c,2)) { goto L_8010599C; } // 8010598C
  c->r[6]=0u+0x00000001u; // 80105990
  goto L_8010599C; // 80105994
  goto L_801059E8; // 80105998
L_8010599C:;
  c->r[0]=R8(c->r[7]+0x0000004Au); // 8010599C
  c->r[7]=c->r[7]+0x0000003Cu; // 801059A0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801059A4
  if (crb(c,2)) { goto L_801059D8; } // 801059A8
  c->r[3]=R16(c->r[7]+0x0000000Cu); // 801059AC
  c->r[0]=R16(c->r[4]+0x0000000Cu); // 801059B0
  cmpu(c,0,c->r[3],c->r[0]); // 801059B4
  if (!crb(c,2)) { goto L_801059D8; } // 801059B8
  cmps(c,0,(int32_t)c->r[6],0); // 801059BC
  if (!crb(c,2)) { goto L_801059E8; } // 801059C0
  cmpu(c,0,c->r[4],c->r[7]); // 801059C4
  if (!crb(c,2)) { goto L_801059D8; } // 801059C8
  c->r[6]=0u+0x00000001u; // 801059CC
  goto L_801059D8; // 801059D0
  goto L_801059E8; // 801059D4
L_801059D8:;
  c->r[5]=c->r[5]+0x00000003u; // 801059D8
  c->r[7]=c->r[7]+0x0000003Cu; // 801059DC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801058EC; } // 801059E0
  c->r[7]=0u+0x00000000u; // 801059E4
L_801059E8:;
  cmps(c,0,(int32_t)c->r[7],0); // 801059E8
  if (crb(c,2)) { goto L_80105A40; } // 801059EC
  c->r[3]=0u+0x803D0000u; // 801059F0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801059F4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801059F8
  cmpu(c,0,c->r[0],0x00000004u); // 801059FC
  if (crb(c,0)) { goto L_80105A18; } // 80105A00
  c->r[3]=0u+0x000D0000u; // 80105A04
  c->r[5]=c->r[25]|c->r[25]; // 80105A08
  c->r[3]=c->r[3]+0x00000003u; // 80105A0C
  c->r[4]=c->r[31]+0x0000048Cu; // 80105A10
  c->lr=0x80105A18u; f_800F72A0(c); // 80105A14
L_80105A18:;
  cmps(c,0,(int32_t)c->r[28],0); // 80105A18
  if (crb(c,2)) { goto L_80105A38; } // 80105A1C
  c->r[12]=c->r[28]|c->r[28]; // 80105A20
  c->r[3]=c->r[24]|c->r[24]; // 80105A24
  c->r[4]=0u+0x00000000u; // 80105A28
  c->r[5]=0u+0x00000000u; // 80105A2C
  c->ctr=c->r[12]; // 80105A30
  if (true) { c->lr=0x80105A38u; dispatch(c,c->ctr); } // 80105A34
L_80105A38:;
  c->r[3]=0u+0x00000000u; // 80105A38
  goto L_80105B18; // 80105A3C
L_80105A40:;
  W32(c->r[30]+0x00000004u,c->r[28]); // 80105A40
  c->r[0]=0u+0x00000000u; // 80105A44
  c->r[3]=0u+0x803D0000u; // 80105A48
  W32(c->r[30]+0x00000008u,c->r[0]); // 80105A4C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105A50
  W8(c->r[30]+0x00000081u,c->r[29]); // 80105A54
  W8(c->r[30]+0x00000080u,c->r[27]); // 80105A58
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105A5C
  cmpu(c,0,c->r[0],0x00000004u); // 80105A60
  if (crb(c,0)) { goto L_80105A8C; } // 80105A64
  c->r[3]=0u+0x000D0000u; // 80105A68
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 80105A6C
  c->r[8]=R8(c->r[30]+0x00000076u); // 80105A70
  c->r[5]=c->r[25]|c->r[25]; // 80105A74
  c->r[6]=c->r[26]|c->r[26]; // 80105A78
  c->r[9]=c->r[29]|c->r[29]; // 80105A7C
  c->r[3]=c->r[3]+0x00000003u; // 80105A80
  c->r[4]=c->r[31]+0x000004D0u; // 80105A84
  c->lr=0x80105A8Cu; f_800F7320(c); // 80105A88
L_80105A8C:;
  cmps(c,0,(int32_t)c->r[27],0); // 80105A8C
  if (!crb(c,2)) { goto L_80105AD8; } // 80105A90
  c->r[0]=rotl(c->r[29],0)&0x00000001u; cr0(c,c->r[0]); // 80105A94
  if (crb(c,2)) { goto L_80105AD8; } // 80105A98
  c->r[0]=R8(c->r[30]+0x00000076u); // 80105A9C
  c->r[3]=0u+0x803D0000u; // 80105AA0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105AA4
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80105AA8
  W8(c->r[30]+0x00000076u,c->r[0]); // 80105AAC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105AB0
  cmpu(c,0,c->r[0],0x00000004u); // 80105AB4
  if (crb(c,0)) { goto L_80105AD8; } // 80105AB8
  c->r[3]=0u+0x000D0000u; // 80105ABC
  c->r[5]=R32(c->r[30]+0x00000014u); // 80105AC0
  c->r[6]=R32(c->r[30]+0x00000010u); // 80105AC4
  c->r[3]=c->r[3]+0x00000003u; // 80105AC8
  c->r[7]=R8(c->r[30]+0x00000076u); // 80105ACC
  c->r[4]=c->r[31]+0x00000528u; // 80105AD0
  c->lr=0x80105AD8u; f_800F72E0(c); // 80105AD4
L_80105AD8:;
  c->r[3]=c->r[30]|c->r[30]; // 80105AD8
  c->lr=0x80105AE0u; f_80107620(c); // 80105ADC
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80105AE0
  c->r[25]=c->r[3]|c->r[3]; // 80105AE4
  cmpu(c,0,c->r[5],0x00000001u); // 80105AE8
  if (crb(c,2)) { goto L_80105B14; } // 80105AEC
  cmps(c,0,(int32_t)c->r[28],0); // 80105AF0
  if (crb(c,2)) { goto L_80105B14; } // 80105AF4
  c->r[12]=c->r[28]|c->r[28]; // 80105AF8
  c->r[3]=c->r[24]|c->r[24]; // 80105AFC
  c->r[4]=R32(c->r[30]+0x00000008u); // 80105B00
  c->ctr=c->r[12]; // 80105B04
  if (true) { c->lr=0x80105B0Cu; dispatch(c,c->ctr); } // 80105B08
  c->r[0]=0u+0x00000000u; // 80105B0C
  W32(c->r[30]+0x00000004u,c->r[0]); // 80105B10
L_80105B14:;
  c->r[3]=c->r[25]|c->r[25]; // 80105B14
L_80105B18:;
  c->r[11]=c->r[1]+0x00000030u; // 80105B18
  c->lr=0x80105B20u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80105B1C
  c->r[0]=R32(c->r[1]+0x00000034u); // 80105B20
  c->lr=c->r[0]; // 80105B24
  c->r[1]=c->r[1]+0x00000030u; // 80105B28
  return; // 80105B2C
}

// btm_sec_mx_access_request
void f_80105B30(Ctx* __restrict c) {
  trace_call(0x80105B30u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105B30
  c->r[0]=c->lr; // 80105B34
  W32(c->r[1]+0x00000034u,c->r[0]); // 80105B38
  c->r[11]=c->r[1]+0x00000030u; // 80105B3C
  c->lr=0x80105B44u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80105B40
  c->r[24]=c->r[3]|c->r[3]; // 80105B44
  c->r[25]=c->r[4]|c->r[4]; // 80105B48
  c->r[26]=c->r[5]|c->r[5]; // 80105B4C
  c->r[27]=c->r[6]|c->r[6]; // 80105B50
  c->r[28]=c->r[7]|c->r[7]; // 80105B54
  c->r[29]=c->r[8]|c->r[8]; // 80105B58
  c->r[30]=c->r[9]|c->r[9]; // 80105B5C
  c->lr=0x80105B64u; f_800FF9D0(c); // 80105B60
  cmps(c,0,(int32_t)c->r[3],0); // 80105B64
  c->r[31]=c->r[3]|c->r[3]; // 80105B68
  if (!crb(c,2)) { goto L_80105BA8; } // 80105B6C
  c->r[3]=c->r[24]|c->r[24]; // 80105B70
  c->lr=0x80105B78u; f_800FF7F8(c); // 80105B74
  cmps(c,0,(int32_t)c->r[3],0); // 80105B78
  c->r[31]=c->r[3]|c->r[3]; // 80105B7C
  if (!crb(c,2)) { goto L_80105BA8; } // 80105B80
  cmps(c,0,(int32_t)c->r[29],0); // 80105B84
  if (crb(c,2)) { goto L_80105DB4; } // 80105B88
  c->r[12]=c->r[29]|c->r[29]; // 80105B8C
  c->r[3]=c->r[24]|c->r[24]; // 80105B90
  c->r[4]=c->r[30]|c->r[30]; // 80105B94
  c->r[5]=0u+0x00000003u; // 80105B98
  c->ctr=c->r[12]; // 80105B9C
  if (true) { c->lr=0x80105BA4u; dispatch(c,c->ctr); } // 80105BA0
  goto L_80105DB4; // 80105BA4
L_80105BA8:;
  c->r[3]=0u+0x803D0000u; // 80105BA8
  c->r[0]=0u+0x00000008u; // 80105BAC
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105BB0
  c->r[4]=0u+0x00000000u; // 80105BB4
  c->r[5]=c->r[3]+0x00001990u; // 80105BB8
  c->ctr=c->r[0]; // 80105BBC
L_80105BC0:;
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 80105BC0
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105BC4
  if (crb(c,2)) { goto L_80105C10; } // 80105BC8
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 80105BCC
  cmpu(c,0,c->r[0],c->r[25]); // 80105BD0
  if (!crb(c,2)) { goto L_80105C10; } // 80105BD4
  c->r[0]=R32(c->r[5]+0x00000000u); // 80105BD8
  cmpu(c,0,c->r[0],c->r[27]); // 80105BDC
  if (!crb(c,2)) { goto L_80105C10; } // 80105BE0
  cmps(c,0,(int32_t)c->r[26],0); // 80105BE4
  if (crb(c,2)) { goto L_80105BF8; } // 80105BE8
  c->r[0]=R32(c->r[5]+0x00000004u); // 80105BEC
  cmpu(c,0,c->r[0],c->r[28]); // 80105BF0
  if (crb(c,2)) { goto L_80105CC8; } // 80105BF4
L_80105BF8:;
  cmps(c,0,(int32_t)c->r[26],0); // 80105BF8
  if (!crb(c,2)) { goto L_80105C10; } // 80105BFC
  c->r[0]=R32(c->r[5]+0x00000008u); // 80105C00
  cmpu(c,0,c->r[0],c->r[28]); // 80105C04
  if (!crb(c,2)) { goto L_80105C10; } // 80105C08
  goto L_80105CC8; // 80105C0C
L_80105C10:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 80105C10
  c->r[5]=c->r[5]+0x0000003Cu; // 80105C14
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105C18
  if (crb(c,2)) { goto L_80105C64; } // 80105C1C
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 80105C20
  cmpu(c,0,c->r[0],c->r[25]); // 80105C24
  if (!crb(c,2)) { goto L_80105C64; } // 80105C28
  c->r[0]=R32(c->r[5]+0x00000000u); // 80105C2C
  cmpu(c,0,c->r[0],c->r[27]); // 80105C30
  if (!crb(c,2)) { goto L_80105C64; } // 80105C34
  cmps(c,0,(int32_t)c->r[26],0); // 80105C38
  if (crb(c,2)) { goto L_80105C4C; } // 80105C3C
  c->r[0]=R32(c->r[5]+0x00000004u); // 80105C40
  cmpu(c,0,c->r[0],c->r[28]); // 80105C44
  if (crb(c,2)) { goto L_80105CC8; } // 80105C48
L_80105C4C:;
  cmps(c,0,(int32_t)c->r[26],0); // 80105C4C
  if (!crb(c,2)) { goto L_80105C64; } // 80105C50
  c->r[0]=R32(c->r[5]+0x00000008u); // 80105C54
  cmpu(c,0,c->r[0],c->r[28]); // 80105C58
  if (!crb(c,2)) { goto L_80105C64; } // 80105C5C
  goto L_80105CC8; // 80105C60
L_80105C64:;
  c->r[0]=R8(c->r[5]+0x0000004Au); // 80105C64
  c->r[5]=c->r[5]+0x0000003Cu; // 80105C68
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80105C6C
  if (crb(c,2)) { goto L_80105CB8; } // 80105C70
  c->r[0]=R16(c->r[5]+0x0000000Cu); // 80105C74
  cmpu(c,0,c->r[0],c->r[25]); // 80105C78
  if (!crb(c,2)) { goto L_80105CB8; } // 80105C7C
  c->r[0]=R32(c->r[5]+0x00000000u); // 80105C80
  cmpu(c,0,c->r[0],c->r[27]); // 80105C84
  if (!crb(c,2)) { goto L_80105CB8; } // 80105C88
  cmps(c,0,(int32_t)c->r[26],0); // 80105C8C
  if (crb(c,2)) { goto L_80105CA0; } // 80105C90
  c->r[0]=R32(c->r[5]+0x00000004u); // 80105C94
  cmpu(c,0,c->r[0],c->r[28]); // 80105C98
  if (crb(c,2)) { goto L_80105CC8; } // 80105C9C
L_80105CA0:;
  cmps(c,0,(int32_t)c->r[26],0); // 80105CA0
  if (!crb(c,2)) { goto L_80105CB8; } // 80105CA4
  c->r[0]=R32(c->r[5]+0x00000008u); // 80105CA8
  cmpu(c,0,c->r[0],c->r[28]); // 80105CAC
  if (!crb(c,2)) { goto L_80105CB8; } // 80105CB0
  goto L_80105CC8; // 80105CB4
L_80105CB8:;
  c->r[4]=c->r[4]+0x00000002u; // 80105CB8
  c->r[5]=c->r[5]+0x0000003Cu; // 80105CBC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80105BC0; } // 80105CC0
  c->r[5]=0u+0x00000000u; // 80105CC4
L_80105CC8:;
  cmps(c,0,(int32_t)c->r[5],0); // 80105CC8
  if (!crb(c,2)) { goto L_80105D24; } // 80105CCC
  cmps(c,0,(int32_t)c->r[29],0); // 80105CD0
  if (crb(c,2)) { goto L_80105CF0; } // 80105CD4
  c->r[12]=c->r[29]|c->r[29]; // 80105CD8
  c->r[3]=c->r[24]|c->r[24]; // 80105CDC
  c->r[4]=c->r[30]|c->r[30]; // 80105CE0
  c->r[5]=0u+0x00000004u; // 80105CE4
  c->ctr=c->r[12]; // 80105CE8
  if (true) { c->lr=0x80105CF0u; dispatch(c,c->ctr); } // 80105CEC
L_80105CF0:;
  c->r[3]=0u+0x803D0000u; // 80105CF0
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105CF4
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105CF8
  cmpu(c,0,c->r[0],0x00000001u); // 80105CFC
  if (crb(c,0)) { goto L_80105DB4; } // 80105D00
  c->r[4]=0u+0x80330000u; // 80105D04
  c->r[5]=c->r[25]|c->r[25]; // 80105D08
  c->r[6]=c->r[27]|c->r[27]; // 80105D0C
  c->r[7]=c->r[28]|c->r[28]; // 80105D10
  c->r[4]=c->r[4]+0xFFFFBB08u; // 80105D14
  c->r[3]=0u+0x000D0000u; // 80105D18
  c->lr=0x80105D20u; f_800F72E0(c); // 80105D1C
  goto L_80105DB4; // 80105D20
L_80105D24:;
  W32(c->r[31]+0x00000000u,c->r[5]); // 80105D24
  c->r[3]=c->r[31]|c->r[31]; // 80105D28
  c->r[0]=R8(c->r[5]+0x0000000Eu); // 80105D2C
  W8(c->r[31]+0x00000081u,c->r[0]); // 80105D30
  W8(c->r[31]+0x00000080u,c->r[26]); // 80105D34
  W32(c->r[31]+0x00000004u,c->r[29]); // 80105D38
  W32(c->r[31]+0x00000008u,c->r[30]); // 80105D3C
  c->r[0]=R8(c->r[31]+0x00000076u); // 80105D40
  c->r[0]=rotl(c->r[0],0)&0x000000FEu; // 80105D44
  W8(c->r[31]+0x00000076u,c->r[0]); // 80105D48
  c->lr=0x80105D50u; f_80107620(c); // 80105D4C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80105D50
  c->r[5]=c->r[3]|c->r[3]; // 80105D54
  cmpu(c,0,c->r[0],0x00000001u); // 80105D58
  if (crb(c,2)) { goto L_80105DB4; } // 80105D5C
  cmps(c,0,(int32_t)c->r[29],0); // 80105D60
  if (crb(c,2)) { goto L_80105DB4; } // 80105D64
  c->r[0]=R8(c->r[31]+0x00000080u); // 80105D68
  cmps(c,0,(int32_t)c->r[0],0); // 80105D6C
  if (crb(c,2)) { goto L_80105D94; } // 80105D70
  c->r[3]=R32(c->r[31]+0x00000000u); // 80105D74
  cmps(c,0,(int32_t)c->r[3],0); // 80105D78
  if (crb(c,2)) { goto L_80105D94; } // 80105D7C
  c->r[0]=R32(c->r[3]+0x00000000u); // 80105D80
  cmpu(c,0,c->r[0],0x00000003u); // 80105D84
  if (!crb(c,2)) { goto L_80105D94; } // 80105D88
  c->r[0]=0u+0x00000000u; // 80105D8C
  W32(c->r[3]+0x00000004u,c->r[0]); // 80105D90
L_80105D94:;
  c->r[12]=c->r[29]|c->r[29]; // 80105D94
  c->r[3]=c->r[24]|c->r[24]; // 80105D98
  c->r[4]=c->r[30]|c->r[30]; // 80105D9C
  c->r[5]=rotl(c->r[5],0)&0x000000FFu; // 80105DA0
  c->ctr=c->r[12]; // 80105DA4
  if (true) { c->lr=0x80105DACu; dispatch(c,c->ctr); } // 80105DA8
  c->r[0]=0u+0x00000000u; // 80105DAC
  W32(c->r[31]+0x00000004u,c->r[0]); // 80105DB0
L_80105DB4:;
  c->r[11]=c->r[1]+0x00000030u; // 80105DB4
  c->lr=0x80105DBCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80105DB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 80105DBC
  c->lr=c->r[0]; // 80105DC0
  c->r[1]=c->r[1]+0x00000030u; // 80105DC4
  return; // 80105DC8
}

// btm_sec_conn_req
void f_80105DCC(Ctx* __restrict c) {
  trace_call(0x80105DCCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105DCC
  c->r[0]=c->lr; // 80105DD0
  c->r[5]=0u+0x803D0000u; // 80105DD4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80105DD8
  c->r[5]=c->r[5]+0xFFFFA218u; // 80105DDC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80105DE0
  W32(c->r[1]+0x00000018u,c->r[30]); // 80105DE4
  c->r[30]=c->r[4]|c->r[4]; // 80105DE8
  W32(c->r[1]+0x00000014u,c->r[29]); // 80105DEC
  c->r[29]=c->r[3]|c->r[3]; // 80105DF0
  c->r[0]=R8(c->r[5]+0x0000197Au); // 80105DF4
  cmps(c,0,(int32_t)c->r[0],0); // 80105DF8
  if (crb(c,2)) { goto L_80105E60; } // 80105DFC
  c->lr=0x80105E04u; f_800FF9D0(c); // 80105E00
  cmps(c,0,(int32_t)c->r[3],0); // 80105E04
  if (crb(c,2)) { goto L_80105E18; } // 80105E08
  c->r[0]=R8(c->r[3]+0x00000076u); // 80105E0C
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 80105E10
  if (!crb(c,2)) { goto L_80105E60; } // 80105E14
L_80105E18:;
  c->r[3]=0u+0x803D0000u; // 80105E18
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105E1C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80105E20
  cmpu(c,0,c->r[0],0x00000004u); // 80105E24
  if (crb(c,0)) { goto L_80105E40; } // 80105E28
  c->r[3]=0u+0x000D0000u; // 80105E2C
  c->r[4]=0u+0x80330000u; // 80105E30
  c->r[3]=c->r[3]+0x00000003u; // 80105E34
  c->r[4]=c->r[4]+0xFFFFBB48u; // 80105E38
  c->lr=0x80105E40u; f_800F7280(c); // 80105E3C
L_80105E40:;
  c->r[3]=0u+0x00000002u; // 80105E40
  c->lr=0x80105E48u; f_800F46D0(c); // 80105E44
  cmps(c,0,(int32_t)c->r[3],0); // 80105E48
  if (crb(c,2)) { goto L_80105EDC; } // 80105E4C
  c->r[4]=c->r[29]|c->r[29]; // 80105E50
  c->r[5]=0u+0x0000000Fu; // 80105E54
  c->lr=0x80105E5Cu; f_8010A5B8(c); // 80105E58
  goto L_80105EDC; // 80105E5C
L_80105E60:;
  c->r[3]=0u+0x803D0000u; // 80105E60
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105E64
  c->r[12]=R32(c->r[3]+0x00001934u); // 80105E68
  cmps(c,0,(int32_t)c->r[12],0); // 80105E6C
  if (crb(c,2)) { goto L_80105EAC; } // 80105E70
  c->r[3]=c->r[29]|c->r[29]; // 80105E74
  c->r[4]=c->r[30]|c->r[30]; // 80105E78
  c->ctr=c->r[12]; // 80105E7C
  if (true) { c->lr=0x80105E84u; dispatch(c,c->ctr); } // 80105E80
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80105E84
  if (!crb(c,2)) { goto L_80105EAC; } // 80105E88
  c->r[3]=0u+0x00000002u; // 80105E8C
  c->lr=0x80105E94u; f_800F46D0(c); // 80105E90
  cmps(c,0,(int32_t)c->r[3],0); // 80105E94
  if (crb(c,2)) { goto L_80105EDC; } // 80105E98
  c->r[4]=c->r[29]|c->r[29]; // 80105E9C
  c->r[5]=0u+0x0000000Fu; // 80105EA0
  c->lr=0x80105EA8u; f_8010A5B8(c); // 80105EA4
  goto L_80105EDC; // 80105EA8
L_80105EAC:;
  c->r[31]=0u+0x803D0000u; // 80105EAC
  c->r[4]=c->r[29]|c->r[29]; // 80105EB0
  c->r[31]=c->r[31]+0xFFFFA218u; // 80105EB4
  c->r[5]=0u+0x00000006u; // 80105EB8
  c->r[3]=c->r[31]+0x000027B4u; // 80105EBC
  c->lr=0x80105EC4u; f_800043C4(c); // 80105EC0
  c->r[4]=c->r[30]|c->r[30]; // 80105EC4
  c->r[3]=c->r[31]+0x000027BAu; // 80105EC8
  c->r[5]=0u+0x00000003u; // 80105ECC
  c->lr=0x80105ED4u; f_800043C4(c); // 80105ED0
  c->r[3]=c->r[29]|c->r[29]; // 80105ED4
  c->lr=0x80105EDCu; f_80111C8C(c); // 80105ED8
L_80105EDC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80105EDC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80105EE0
  c->r[30]=R32(c->r[1]+0x00000018u); // 80105EE4
  c->r[29]=R32(c->r[1]+0x00000014u); // 80105EE8
  c->lr=c->r[0]; // 80105EEC
  c->r[1]=c->r[1]+0x00000020u; // 80105EF0
  return; // 80105EF4
}

// btm_sec_init
void f_80105EF8(Ctx* __restrict c) {
  trace_call(0x80105EF8u);
  c->r[6]=0u+0x803D0000u; // 80105EF8
  c->r[4]=0u+0x000000FFu; // 80105EFC
  c->r[6]=c->r[6]+0xFFFFA218u; // 80105F00
  c->r[5]=0u+0x00000006u; // 80105F04
  W8(c->r[6]+0x00001978u,c->r[3]); // 80105F08
  c->r[3]=c->r[6]+0x00001954u; // 80105F0C
  f_80004714(c); return; // 80105F10
}

// btm_sec_dev_reset
void f_80105F14(Ctx* __restrict c) {
  trace_call(0x80105F14u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105F14
  c->r[0]=c->lr; // 80105F18
  c->r[3]=0u+0x803D0000u; // 80105F1C
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105F20
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105F24
  c->r[0]=R8(c->r[3]+0x00001978u); // 80105F28
  cmpu(c,0,c->r[0],0x00000003u); // 80105F2C
  if (!crb(c,2)) { goto L_80105F44; } // 80105F30
  c->r[3]=0u+0x00000001u; // 80105F34
  c->lr=0x80105F3Cu; f_8010BDAC(c); // 80105F38
  c->r[3]=0u+0x00000001u; // 80105F3C
  c->lr=0x80105F44u; f_8010BE20(c); // 80105F40
L_80105F44:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105F44
  c->lr=c->r[0]; // 80105F48
  c->r[1]=c->r[1]+0x00000010u; // 80105F4C
  return; // 80105F50
}

// btm_sec_abort_access_req
void f_80105F54(Ctx* __restrict c) {
  trace_call(0x80105F54u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80105F54
  c->r[0]=c->lr; // 80105F58
  W32(c->r[1]+0x00000014u,c->r[0]); // 80105F5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80105F60
  W32(c->r[1]+0x00000008u,c->r[30]); // 80105F64
  c->r[30]=c->r[3]|c->r[3]; // 80105F68
  c->lr=0x80105F70u; f_800FF9D0(c); // 80105F6C
  cmps(c,0,(int32_t)c->r[3],0); // 80105F70
  c->r[31]=c->r[3]|c->r[3]; // 80105F74
  if (crb(c,2)) { goto L_80105FF0; } // 80105F78
  c->r[3]=0u+0x803D0000u; // 80105F7C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80105F80
  c->r[12]=R32(c->r[3]+0x00001920u); // 80105F84
  cmps(c,0,(int32_t)c->r[12],0); // 80105F88
  if (crb(c,2)) { goto L_80105FA4; } // 80105F8C
  c->r[3]=c->r[30]|c->r[30]; // 80105F90
  c->r[4]=c->r[31]+0x00000022u; // 80105F94
  c->r[5]=c->r[31]+0x00000035u; // 80105F98
  c->ctr=c->r[12]; // 80105F9C
  if (true) { c->lr=0x80105FA4u; dispatch(c,c->ctr); } // 80105FA0
L_80105FA4:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 80105FA4
  cmpu(c,0,c->r[0],0x00000004u); // 80105FA8
  if (crb(c,2)) { goto L_80105FB8; } // 80105FAC
  cmpu(c,0,c->r[0],0x00000001u); // 80105FB0
  if (!crb(c,2)) { goto L_80105FF0; } // 80105FB4
L_80105FB8:;
  c->r[3]=0u+0x00000000u; // 80105FB8
  W8(c->r[31]+0x0000007Fu,c->r[3]); // 80105FBC
  c->r[0]=R8(c->r[31]+0x00000080u); // 80105FC0
  cmps(c,0,(int32_t)c->r[0],0); // 80105FC4
  if (crb(c,2)) { goto L_80105FE8; } // 80105FC8
  c->r[4]=R32(c->r[31]+0x00000000u); // 80105FCC
  cmps(c,0,(int32_t)c->r[4],0); // 80105FD0
  if (crb(c,2)) { goto L_80105FE8; } // 80105FD4
  c->r[0]=R32(c->r[4]+0x00000000u); // 80105FD8
  cmpu(c,0,c->r[0],0x00000003u); // 80105FDC
  if (!crb(c,2)) { goto L_80105FE8; } // 80105FE0
  W32(c->r[4]+0x00000004u,c->r[3]); // 80105FE4
L_80105FE8:;
  c->r[0]=0u+0x00000000u; // 80105FE8
  W32(c->r[31]+0x00000004u,c->r[0]); // 80105FEC
L_80105FF0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80105FF0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80105FF4
  c->r[30]=R32(c->r[1]+0x00000008u); // 80105FF8
  c->lr=c->r[0]; // 80105FFC
  c->r[1]=c->r[1]+0x00000010u; // 80106000
  return; // 80106004
}

// btm_sec_rmt_name_request_complete
void f_80106008(Ctx* __restrict c) {
  trace_call(0x80106008u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106008
  c->r[0]=c->lr; // 8010600C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80106010
  c->r[11]=c->r[1]+0x00000020u; // 80106014
  c->lr=0x8010601Cu; f_800ADA2C(c); // 80106018
  cmps(c,0,(int32_t)c->r[3],0); // 8010601C
  c->r[27]=c->r[3]|c->r[3]; // 80106020
  c->r[28]=c->r[4]|c->r[4]; // 80106024
  c->r[30]=c->r[5]|c->r[5]; // 80106028
  if (crb(c,2)) { goto L_8010603C; } // 8010602C
  c->lr=0x80106034u; f_800FF9D0(c); // 80106030
  c->r[31]=c->r[3]|c->r[3]; // 80106034
  goto L_801060E4; // 80106038
L_8010603C:;
  c->r[3]=0u+0x803D0000u; // 8010603C
  c->r[0]=0u+0x00000004u; // 80106040
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106044
  c->r[4]=0u+0x00000000u; // 80106048
  c->r[31]=c->r[3]+0x00001F30u; // 8010604C
  c->ctr=c->r[0]; // 80106050
L_80106054:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106054
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80106058
  if (crb(c,2)) { goto L_8010606C; } // 8010605C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 80106060
  cmpu(c,0,c->r[0],0x00000003u); // 80106064
  if (crb(c,2)) { goto L_801060D8; } // 80106068
L_8010606C:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 8010606C
  c->r[4]=c->r[4]+0x00000001u; // 80106070
  c->r[31]=c->r[31]+0x00000088u; // 80106074
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80106078
  if (crb(c,2)) { goto L_8010608C; } // 8010607C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 80106080
  cmpu(c,0,c->r[0],0x00000003u); // 80106084
  if (crb(c,2)) { goto L_801060D8; } // 80106088
L_8010608C:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 8010608C
  c->r[4]=c->r[4]+0x00000001u; // 80106090
  c->r[31]=c->r[31]+0x00000088u; // 80106094
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80106098
  if (crb(c,2)) { goto L_801060AC; } // 8010609C
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801060A0
  cmpu(c,0,c->r[0],0x00000003u); // 801060A4
  if (crb(c,2)) { goto L_801060D8; } // 801060A8
L_801060AC:;
  c->r[0]=R8(c->r[31]+0x000000FEu); // 801060AC
  c->r[4]=c->r[4]+0x00000001u; // 801060B0
  c->r[31]=c->r[31]+0x00000088u; // 801060B4
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 801060B8
  if (crb(c,2)) { goto L_801060CC; } // 801060BC
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 801060C0
  cmpu(c,0,c->r[0],0x00000003u); // 801060C4
  if (crb(c,2)) { goto L_801060D8; } // 801060C8
L_801060CC:;
  c->r[4]=c->r[4]+0x00000001u; // 801060CC
  c->r[31]=c->r[31]+0x00000088u; // 801060D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80106054; } // 801060D4
L_801060D8:;
  cmps(c,0,(int32_t)c->r[4],16); // 801060D8
  if (!crb(c,2)) { goto L_801060E4; } // 801060DC
  c->r[31]=0u+0x00000000u; // 801060E0
L_801060E4:;
  c->r[3]=0u+0x803D0000u; // 801060E4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801060E8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801060EC
  cmpu(c,0,c->r[0],0x00000004u); // 801060F0
  if (crb(c,0)) { goto L_80106124; } // 801060F4
  cmps(c,0,(int32_t)c->r[31],0); // 801060F8
  c->r[3]=0u+0x000D0000u; // 801060FC
  c->r[4]=0u+0x80330000u; // 80106100
  c->r[5]=c->r[30]|c->r[30]; // 80106104
  c->r[3]=c->r[3]+0x00000003u; // 80106108
  c->r[4]=c->r[4]+0xFFFFBB84u; // 8010610C
  if (crb(c,2)) { goto L_8010611C; } // 80106110
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 80106114
  goto L_80106120; // 80106118
L_8010611C:;
  c->r[6]=0u+0x00000000u; // 8010611C
L_80106120:;
  c->lr=0x80106124u; f_800F72C0(c); // 80106120
L_80106124:;
  cmps(c,0,(int32_t)c->r[31],0); // 80106124
  if (crb(c,2)) { goto L_801062D8; } // 80106128
  cmps(c,0,(int32_t)c->r[30],0); // 8010612C
  if (!crb(c,2)) { goto L_8010618C; } // 80106130
  c->r[4]=c->r[28]|c->r[28]; // 80106134
  c->r[3]=c->r[31]+0x00000035u; // 80106138
  c->r[5]=0u+0x00000040u; // 8010613C
  c->lr=0x80106144u; f_800043C4(c); // 80106140
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106144
  c->r[29]=0u+0x803D0000u; // 80106148
  c->r[29]=c->r[29]+0xFFFFA218u; // 8010614C
  c->r[28]=0u+0x00000000u; // 80106150
  c->r[0]=c->r[0]|0x00000008u; // 80106154
  W8(c->r[31]+0x00000076u,c->r[0]); // 80106158
L_8010615C:;
  c->r[12]=R32(c->r[29]+0x0000192Cu); // 8010615C
  cmps(c,0,(int32_t)c->r[12],0); // 80106160
  if (crb(c,2)) { goto L_8010617C; } // 80106164
  c->r[3]=c->r[27]|c->r[27]; // 80106168
  c->r[4]=c->r[31]+0x00000022u; // 8010616C
  c->r[5]=c->r[31]+0x00000035u; // 80106170
  c->ctr=c->r[12]; // 80106174
  if (true) { c->lr=0x8010617Cu; dispatch(c,c->ctr); } // 80106178
L_8010617C:;
  c->r[28]=c->r[28]+0x00000001u; // 8010617C
  c->r[29]=c->r[29]+0x00000004u; // 80106180
  cmps(c,0,(int32_t)c->r[28],2); // 80106184
  if (crb(c,0)) { IRQCHK(c); goto L_8010615C; } // 80106188
L_8010618C:;
  c->r[0]=R8(c->r[31]+0x00000082u); // 8010618C
  cmps(c,0,(int32_t)c->r[0],0); // 80106190
  if (crb(c,2)) { goto L_8010622C; } // 80106194
  c->r[0]=R8(c->r[31]+0x00000081u); // 80106198
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8010619C
  if (crb(c,2)) { goto L_801061B0; } // 801061A0
  c->r[0]=R8(c->r[31]+0x00000085u); // 801061A4
  cmps(c,0,(int32_t)c->r[0],0); // 801061A8
  if (crb(c,2)) { goto L_801062D8; } // 801061AC
L_801061B0:;
  c->r[0]=0u+0x00000000u; // 801061B0
  c->r[3]=0u+0x803D0000u; // 801061B4
  W8(c->r[31]+0x00000082u,c->r[0]); // 801061B8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801061BC
  c->r[12]=R32(c->r[3]+0x00001914u); // 801061C0
  cmps(c,0,(int32_t)c->r[12],0); // 801061C4
  if (crb(c,2)) { goto L_801061E8; } // 801061C8
  c->r[3]=c->r[31]+0x0000001Cu; // 801061CC
  c->r[4]=c->r[31]+0x00000022u; // 801061D0
  c->r[5]=c->r[31]+0x00000035u; // 801061D4
  c->r[6]=c->r[31]+0x00000025u; // 801061D8
  c->r[7]=R8(c->r[31]+0x00000083u); // 801061DC
  c->ctr=c->r[12]; // 801061E0
  if (true) { c->lr=0x801061E8u; dispatch(c,c->ctr); } // 801061E4
L_801061E8:;
  c->r[29]=0u+0x803D0000u; // 801061E8
  c->r[28]=0u+0x00000000u; // 801061EC
  c->r[29]=c->r[29]+0xFFFFA218u; // 801061F0
L_801061F4:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 801061F4
  cmps(c,0,(int32_t)c->r[12],0); // 801061F8
  if (crb(c,2)) { goto L_8010621C; } // 801061FC
  c->r[3]=c->r[31]+0x0000001Cu; // 80106200
  c->r[4]=c->r[31]+0x00000022u; // 80106204
  c->r[5]=c->r[31]+0x00000035u; // 80106208
  c->r[6]=c->r[31]+0x00000025u; // 8010620C
  c->r[7]=R8(c->r[31]+0x00000083u); // 80106210
  c->ctr=c->r[12]; // 80106214
  if (true) { c->lr=0x8010621Cu; dispatch(c,c->ctr); } // 80106218
L_8010621C:;
  c->r[28]=c->r[28]+0x00000001u; // 8010621C
  c->r[29]=c->r[29]+0x00000004u; // 80106220
  cmps(c,0,(int32_t)c->r[28],2); // 80106224
  if (crb(c,0)) { IRQCHK(c); goto L_801061F4; } // 80106228
L_8010622C:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 8010622C
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80106230
  if (crb(c,2)) { goto L_80106260; } // 80106234
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106238
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 8010623C
  if (crb(c,2)) { goto L_80106260; } // 80106240
  c->r[0]=0u+0xFFFFFFAFu; // 80106244
  c->r[4]=0u+0x00000013u; // 80106248
  c->r[0]=c->r[3]&c->r[0]; // 8010624C
  W8(c->r[31]+0x00000081u,c->r[0]); // 80106250
  c->r[3]=R16(c->r[31]+0x00000018u); // 80106254
  c->lr=0x8010625Cu; f_8010A444(c); // 80106258
  goto L_801062D8; // 8010625C
L_80106260:;
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 80106260
  cmpu(c,0,c->r[0],0x00000003u); // 80106264
  if (!crb(c,2)) { goto L_801062D8; } // 80106268
  c->r[29]=0u+0x00000000u; // 8010626C
  cmps(c,0,(int32_t)c->r[30],0); // 80106270
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 80106274
  if (crb(c,2)) { goto L_801062A4; } // 80106278
  c->r[12]=R32(c->r[31]+0x00000004u); // 8010627C
  cmps(c,0,(int32_t)c->r[12],0); // 80106280
  if (crb(c,2)) { goto L_801062D8; } // 80106284
  c->r[3]=c->r[31]+0x0000001Cu; // 80106288
  c->r[4]=R32(c->r[31]+0x00000008u); // 8010628C
  c->r[5]=0u+0x0000000Au; // 80106290
  c->ctr=c->r[12]; // 80106294
  if (true) { c->lr=0x8010629Cu; dispatch(c,c->ctr); } // 80106298
  W32(c->r[31]+0x00000004u,c->r[29]); // 8010629C
  goto L_801062D8; // 801062A0
L_801062A4:;
  c->r[3]=c->r[31]|c->r[31]; // 801062A4
  c->lr=0x801062ACu; f_80107620(c); // 801062A8
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 801062AC
  cmpu(c,0,c->r[5],0x00000001u); // 801062B0
  if (crb(c,2)) { goto L_801062D8; } // 801062B4
  c->r[12]=R32(c->r[31]+0x00000004u); // 801062B8
  cmps(c,0,(int32_t)c->r[12],0); // 801062BC
  if (crb(c,2)) { goto L_801062D8; } // 801062C0
  c->r[3]=c->r[31]+0x0000001Cu; // 801062C4
  c->r[4]=R32(c->r[31]+0x00000008u); // 801062C8
  c->ctr=c->r[12]; // 801062CC
  if (true) { c->lr=0x801062D4u; dispatch(c,c->ctr); } // 801062D0
  W32(c->r[31]+0x00000004u,c->r[29]); // 801062D4
L_801062D8:;
  c->r[11]=c->r[1]+0x00000020u; // 801062D8
  c->lr=0x801062E0u; f_800ADA78(c); // 801062DC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801062E0
  c->lr=c->r[0]; // 801062E4
  c->r[1]=c->r[1]+0x00000020u; // 801062E8
  return; // 801062EC
}

// btm_sec_auth_complete
void f_801062F0(Ctx* __restrict c) {
  trace_call(0x801062F0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801062F0
  c->r[0]=c->lr; // 801062F4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801062F8
  c->r[11]=c->r[1]+0x00000020u; // 801062FC
  c->lr=0x80106304u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80106300
  c->r[29]=c->r[3]|c->r[3]; // 80106304
  c->r[30]=c->r[4]|c->r[4]; // 80106308
  c->lr=0x80106310u; f_800FF918(c); // 8010630C
  c->r[4]=0u+0x803D0000u; // 80106310
  c->r[31]=c->r[3]|c->r[3]; // 80106314
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106318
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8010631C
  cmpu(c,0,c->r[0],0x00000004u); // 80106320
  if (crb(c,0)) { goto L_80106354; } // 80106324
  cmps(c,0,(int32_t)c->r[31],0); // 80106328
  c->r[3]=0u+0x000D0000u; // 8010632C
  c->r[4]=0u+0x80330000u; // 80106330
  c->r[5]=c->r[30]|c->r[30]; // 80106334
  c->r[3]=c->r[3]+0x00000003u; // 80106338
  c->r[4]=c->r[4]+0xFFFFBBBCu; // 8010633C
  if (crb(c,2)) { goto L_8010634C; } // 80106340
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 80106344
  goto L_80106350; // 80106348
L_8010634C:;
  c->r[6]=0u+0x00000000u; // 8010634C
L_80106350:;
  c->lr=0x80106354u; f_800F72C0(c); // 80106350
L_80106354:;
  c->r[4]=0u+0x803D0000u; // 80106354
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106358
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 8010635C
  cmps(c,0,(int32_t)c->r[0],0); // 80106360
  if (crb(c,2)) { goto L_801063BC; } // 80106364
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80106368
  c->r[3]=0u+0x00000000u; // 8010636C
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 80106370
  cmpu(c,0,c->r[0],0x00000005u); // 80106374
  if (crb(c,0)) { goto L_801063A0; } // 80106378
  c->r[3]=R8(c->r[4]+0x00001978u); // 8010637C
  c->r[4]=0u+0x80330000u; // 80106380
  c->r[5]=0u+0x000D0000u; // 80106384
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80106388
  c->r[4]=c->r[4]+0xFFFFB8ACu; // 8010638C
  c->r[0]=cntlz(c->r[0]); // 80106390
  c->r[3]=c->r[5]+0x00000004u; // 80106394
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 80106398
  c->lr=0x801063A0u; f_800F72A0(c); // 8010639C
L_801063A0:;
  c->r[3]=0u+0x803D0000u; // 801063A0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801063A4
  c->r[3]=R8(c->r[3]+0x00001978u); // 801063A8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801063AC
  c->r[0]=cntlz(c->r[0]); // 801063B0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801063B4
  c->lr=0x801063BCu; f_8010BDAC(c); // 801063B8
L_801063BC:;
  c->r[4]=0u+0x803D0000u; // 801063BC
  c->r[4]=c->r[4]+0xFFFFA218u; // 801063C0
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801063C4
  cmps(c,0,(int32_t)c->r[0],0); // 801063C8
  if (crb(c,2)) { goto L_801063E0; } // 801063CC
  c->r[0]=0u+0x00000000u; // 801063D0
  c->r[3]=R8(c->r[4]+0x00000020u); // 801063D4
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801063D8
  c->lr=0x801063E0u; f_8010B838(c); // 801063DC
L_801063E0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801063E0
  if (crb(c,2)) { goto L_80106474; } // 801063E4
  c->r[3]=R8(c->r[31]+0x00000081u); // 801063E8
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 801063EC
  if (crb(c,2)) { goto L_80106474; } // 801063F0
  c->r[27]=0u+0x803D0000u; // 801063F4
  c->r[27]=c->r[27]+0xFFFFA218u; // 801063F8
  c->r[0]=R8(c->r[27]+0x0000197Du); // 801063FC
  cmps(c,0,(int32_t)c->r[0],0); // 80106400
  if (!crb(c,2)) { goto L_80106474; } // 80106404
  c->r[0]=0u+0xFFFFFFAFu; // 80106408
  c->r[0]=c->r[3]&c->r[0]; // 8010640C
  W8(c->r[31]+0x00000081u,c->r[0]); // 80106410
  c->r[26]=R8(c->r[27]+0x0000197Eu); // 80106414
  cmps(c,0,(int32_t)c->r[26],0); // 80106418
  if (crb(c,2)) { goto L_80106474; } // 8010641C
  c->r[3]=c->r[29]|c->r[29]; // 80106420
  c->lr=0x80106428u; f_800FF918(c); // 80106424
  cmps(c,0,(int32_t)c->r[3],0); // 80106428
  c->r[28]=c->r[3]|c->r[3]; // 8010642C
  if (crb(c,2)) { goto L_80106474; } // 80106430
  c->r[0]=R8(c->r[3]+0x00000081u); // 80106434
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80106438
  if (crb(c,2)) { goto L_80106448; } // 8010643C
  W8(c->r[27]+0x0000197Eu,c->r[26]); // 80106440
  goto L_80106474; // 80106444
L_80106448:;
  c->r[27]=R8(c->r[3]+0x0000007Fu); // 80106448
  cmpu(c,0,c->r[27],0x00000005u); // 8010644C
  if (crb(c,2)) { goto L_80106474; } // 80106450
  c->r[0]=0u+0x00000005u; // 80106454
  c->r[4]=c->r[26]|c->r[26]; // 80106458
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 8010645C
  c->r[3]=c->r[29]|c->r[29]; // 80106460
  c->lr=0x80106468u; f_8010A444(c); // 80106464
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80106468
  if (!crb(c,2)) { goto L_80106474; } // 8010646C
  W8(c->r[28]+0x0000007Fu,c->r[27]); // 80106470
L_80106474:;
  cmps(c,0,(int32_t)c->r[31],0); // 80106474
  if (crb(c,2)) { goto L_8010661C; } // 80106478
  c->r[0]=R8(c->r[31]+0x0000007Fu); // 8010647C
  cmpu(c,0,c->r[0],0x00000001u); // 80106480
  if (crb(c,2)) { goto L_801064C0; } // 80106484
  c->r[3]=0u+0x803D0000u; // 80106488
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010648C
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 80106490
  cmps(c,0,(int32_t)c->r[12],0); // 80106494
  if (crb(c,2)) { goto L_8010661C; } // 80106498
  cmps(c,0,(int32_t)c->r[30],0); // 8010649C
  if (crb(c,2)) { goto L_8010661C; } // 801064A0
  c->r[6]=c->r[30]|c->r[30]; // 801064A4
  c->r[3]=c->r[31]+0x0000001Cu; // 801064A8
  c->r[4]=c->r[31]+0x00000022u; // 801064AC
  c->r[5]=c->r[31]+0x00000035u; // 801064B0
  c->ctr=c->r[12]; // 801064B4
  if (true) { c->lr=0x801064BCu; dispatch(c,c->ctr); } // 801064B8
  goto L_8010661C; // 801064BC
L_801064C0:;
  cmpu(c,0,c->r[30],0x0000000Cu); // 801064C0
  if (!crb(c,2)) { goto L_801064DC; } // 801064C4
  c->r[0]=R8(c->r[31]+0x00000076u); // 801064C8
  c->r[0]=rotl(c->r[0],0)&0x00000006u; // 801064CC
  cmps(c,0,(int32_t)c->r[0],6); // 801064D0
  if (!crb(c,2)) { goto L_801064DC; } // 801064D4
  c->r[30]=0u+0x00000000u; // 801064D8
L_801064DC:;
  c->r[3]=0u+0x803D0000u; // 801064DC
  c->r[3]=c->r[3]+0xFFFFA218u; // 801064E0
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 801064E4
  cmps(c,0,(int32_t)c->r[12],0); // 801064E8
  if (crb(c,2)) { goto L_80106508; } // 801064EC
  c->r[6]=c->r[30]|c->r[30]; // 801064F0
  c->r[3]=c->r[31]+0x0000001Cu; // 801064F4
  c->r[4]=c->r[31]+0x00000022u; // 801064F8
  c->r[5]=c->r[31]+0x00000035u; // 801064FC
  c->ctr=c->r[12]; // 80106500
  if (true) { c->lr=0x80106508u; dispatch(c,c->ctr); } // 80106504
L_80106508:;
  c->r[29]=0u+0x00000000u; // 80106508
  W8(c->r[31]+0x0000007Fu,c->r[29]); // 8010650C
  c->r[3]=R8(c->r[31]+0x00000081u); // 80106510
  c->r[0]=rotl(c->r[3],0)&0x00000040u; cr0(c,c->r[0]); // 80106514
  if (crb(c,2)) { goto L_80106538; } // 80106518
  c->r[0]=0u+0xFFFFFFAFu; // 8010651C
  c->r[4]=0u+0x00000013u; // 80106520
  c->r[0]=c->r[3]&c->r[0]; // 80106524
  W8(c->r[31]+0x00000081u,c->r[0]); // 80106528
  c->r[3]=R16(c->r[31]+0x00000018u); // 8010652C
  c->lr=0x80106534u; f_8010A444(c); // 80106530
  goto L_8010661C; // 80106534
L_80106538:;
  cmps(c,0,(int32_t)c->r[30],0); // 80106538
  if (crb(c,2)) { goto L_801065A4; } // 8010653C
  c->r[0]=R32(c->r[31]+0x00000004u); // 80106540
  cmps(c,0,(int32_t)c->r[0],0); // 80106544
  if (crb(c,2)) { goto L_80106594; } // 80106548
  c->r[0]=R8(c->r[31]+0x00000080u); // 8010654C
  cmps(c,0,(int32_t)c->r[0],0); // 80106550
  if (crb(c,2)) { goto L_80106574; } // 80106554
  c->r[3]=R32(c->r[31]+0x00000000u); // 80106558
  cmps(c,0,(int32_t)c->r[3],0); // 8010655C
  if (crb(c,2)) { goto L_80106574; } // 80106560
  c->r[0]=R32(c->r[3]+0x00000000u); // 80106564
  cmpu(c,0,c->r[0],0x00000003u); // 80106568
  if (!crb(c,2)) { goto L_80106574; } // 8010656C
  W32(c->r[3]+0x00000004u,c->r[29]); // 80106570
L_80106574:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80106574
  c->r[3]=c->r[31]+0x0000001Cu; // 80106578
  c->r[4]=R32(c->r[31]+0x00000008u); // 8010657C
  c->r[5]=0u+0x0000000Au; // 80106580
  c->ctr=c->r[12]; // 80106584
  if (true) { c->lr=0x8010658Cu; dispatch(c,c->ctr); } // 80106588
  c->r[0]=0u+0x00000000u; // 8010658C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106590
L_80106594:;
  c->r[3]=R16(c->r[31]+0x00000018u); // 80106594
  c->r[4]=0u+0x00000005u; // 80106598
  c->lr=0x801065A0u; f_8010A444(c); // 8010659C
  goto L_8010661C; // 801065A0
L_801065A4:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 801065A4
  c->r[3]=c->r[31]|c->r[31]; // 801065A8
  c->r[0]=c->r[0]|0x00000002u; // 801065AC
  W8(c->r[31]+0x00000076u,c->r[0]); // 801065B0
  c->lr=0x801065B8u; f_80107620(c); // 801065B4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 801065B8
  c->r[4]=c->r[3]|c->r[3]; // 801065BC
  cmpu(c,0,c->r[0],0x00000001u); // 801065C0
  if (crb(c,2)) { goto L_8010661C; } // 801065C4
  c->r[0]=R32(c->r[31]+0x00000004u); // 801065C8
  cmps(c,0,(int32_t)c->r[0],0); // 801065CC
  if (crb(c,2)) { goto L_8010661C; } // 801065D0
  c->r[0]=R8(c->r[31]+0x00000080u); // 801065D4
  cmps(c,0,(int32_t)c->r[0],0); // 801065D8
  if (crb(c,2)) { goto L_801065FC; } // 801065DC
  c->r[3]=R32(c->r[31]+0x00000000u); // 801065E0
  cmps(c,0,(int32_t)c->r[3],0); // 801065E4
  if (crb(c,2)) { goto L_801065FC; } // 801065E8
  c->r[0]=R32(c->r[3]+0x00000000u); // 801065EC
  cmpu(c,0,c->r[0],0x00000003u); // 801065F0
  if (!crb(c,2)) { goto L_801065FC; } // 801065F4
  W32(c->r[3]+0x00000004u,c->r[29]); // 801065F8
L_801065FC:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 801065FC
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 80106600
  c->r[3]=c->r[31]+0x0000001Cu; // 80106604
  c->r[4]=R32(c->r[31]+0x00000008u); // 80106608
  c->ctr=c->r[12]; // 8010660C
  if (true) { c->lr=0x80106614u; dispatch(c,c->ctr); } // 80106610
  c->r[0]=0u+0x00000000u; // 80106614
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106618
L_8010661C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010661C
  c->lr=0x80106624u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 80106620
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106624
  c->lr=c->r[0]; // 80106628
  c->r[1]=c->r[1]+0x00000020u; // 8010662C
  return; // 80106630
}

// btm_sec_mkey_comp_event
void f_80106634(Ctx* __restrict c) {
  trace_call(0x80106634u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106634
  c->r[0]=c->lr; // 80106638
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010663C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80106640
  W32(c->r[1]+0x00000018u,c->r[30]); // 80106644
  c->r[30]=c->r[5]|c->r[5]; // 80106648
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010664C
  c->r[29]=c->r[4]|c->r[4]; // 80106650
  c->lr=0x80106658u; f_800FF918(c); // 80106654
  c->r[4]=0u+0x803D0000u; // 80106658
  c->r[7]=R8(c->r[2]+0xFFFFB1A0u); // 8010665C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106660
  c->r[6]=R8(c->r[2]+0xFFFFB1A1u); // 80106664
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80106668
  c->r[31]=c->r[3]|c->r[3]; // 8010666C
  c->r[5]=R8(c->r[2]+0xFFFFB1A2u); // 80106670
  c->r[4]=R8(c->r[2]+0xFFFFB1A3u); // 80106674
  cmpu(c,0,c->r[0],0x00000004u); // 80106678
  c->r[3]=R8(c->r[2]+0xFFFFB1A4u); // 8010667C
  c->r[0]=R8(c->r[2]+0xFFFFB1A5u); // 80106680
  W8(c->r[1]+0x00000008u,c->r[7]); // 80106684
  W8(c->r[1]+0x00000009u,c->r[6]); // 80106688
  W8(c->r[1]+0x0000000Au,c->r[5]); // 8010668C
  W8(c->r[1]+0x0000000Bu,c->r[4]); // 80106690
  W8(c->r[1]+0x0000000Cu,c->r[3]); // 80106694
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80106698
  if (crb(c,0)) { goto L_801066CC; } // 8010669C
  cmps(c,0,(int32_t)c->r[31],0); // 801066A0
  c->r[3]=0u+0x000D0000u; // 801066A4
  c->r[4]=0u+0x80330000u; // 801066A8
  c->r[5]=c->r[29]|c->r[29]; // 801066AC
  c->r[3]=c->r[3]+0x00000003u; // 801066B0
  c->r[4]=c->r[4]+0xFFFFBBF0u; // 801066B4
  if (crb(c,2)) { goto L_801066C4; } // 801066B8
  c->r[6]=R8(c->r[31]+0x0000007Fu); // 801066BC
  goto L_801066C8; // 801066C0
L_801066C4:;
  c->r[6]=0u+0x00000000u; // 801066C4
L_801066C8:;
  c->lr=0x801066CCu; f_800F72C0(c); // 801066C8
L_801066CC:;
  c->r[3]=0u+0x803D0000u; // 801066CC
  c->r[3]=c->r[3]+0xFFFFA218u; // 801066D0
  c->r[12]=R32(c->r[3]+0x000027B0u); // 801066D4
  cmps(c,0,(int32_t)c->r[12],0); // 801066D8
  if (crb(c,2)) { goto L_80106714; } // 801066DC
  cmps(c,0,(int32_t)c->r[31],0); // 801066E0
  if (!crb(c,2)) { goto L_80106700; } // 801066E4
  c->r[4]=c->r[29]|c->r[29]; // 801066E8
  c->r[5]=c->r[30]|c->r[30]; // 801066EC
  c->r[3]=c->r[1]+0x00000008u; // 801066F0
  c->ctr=c->r[12]; // 801066F4
  if (true) { c->lr=0x801066FCu; dispatch(c,c->ctr); } // 801066F8
  goto L_80106714; // 801066FC
L_80106700:;
  c->r[4]=c->r[29]|c->r[29]; // 80106700
  c->r[5]=c->r[30]|c->r[30]; // 80106704
  c->r[3]=c->r[31]+0x0000001Cu; // 80106708
  c->ctr=c->r[12]; // 8010670C
  if (true) { c->lr=0x80106714u; dispatch(c,c->ctr); } // 80106710
L_80106714:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106714
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80106718
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010671C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80106720
  c->lr=c->r[0]; // 80106724
  c->r[1]=c->r[1]+0x00000020u; // 80106728
  return; // 8010672C
}

// btm_sec_encrypt_change
void f_80106730(Ctx* __restrict c) {
  trace_call(0x80106730u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106730
  c->r[0]=c->lr; // 80106734
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106738
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010673C
  c->r[31]=c->r[4]|c->r[4]; // 80106740
  W32(c->r[1]+0x00000008u,c->r[30]); // 80106744
  c->lr=0x8010674Cu; f_800FF918(c); // 80106748
  c->r[4]=0u+0x803D0000u; // 8010674C
  c->r[30]=c->r[3]|c->r[3]; // 80106750
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106754
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80106758
  cmpu(c,0,c->r[0],0x00000004u); // 8010675C
  if (crb(c,0)) { goto L_80106790; } // 80106760
  cmps(c,0,(int32_t)c->r[30],0); // 80106764
  c->r[3]=0u+0x000D0000u; // 80106768
  c->r[4]=0u+0x80330000u; // 8010676C
  c->r[5]=c->r[31]|c->r[31]; // 80106770
  c->r[3]=c->r[3]+0x00000003u; // 80106774
  c->r[4]=c->r[4]+0xFFFFBC20u; // 80106778
  if (crb(c,2)) { goto L_80106788; } // 8010677C
  c->r[6]=R8(c->r[30]+0x0000007Fu); // 80106780
  goto L_8010678C; // 80106784
L_80106788:;
  c->r[6]=0u+0x00000000u; // 80106788
L_8010678C:;
  c->lr=0x80106790u; f_800F72C0(c); // 8010678C
L_80106790:;
  cmps(c,0,(int32_t)c->r[30],0); // 80106790
  if (crb(c,2)) { goto L_80106854; } // 80106794
  cmpu(c,0,c->r[31],0x00000023u); // 80106798
  if (!crb(c,2)) { goto L_801067CC; } // 8010679C
  c->r[7]=0u+0x803D0000u; // 801067A0
  c->r[6]=0u+0x80100000u; // 801067A4
  c->r[7]=c->r[7]+0xFFFFA218u; // 801067A8
  c->r[4]=0u+0x00000016u; // 801067AC
  c->r[6]=c->r[6]+0x00007B1Cu; // 801067B0
  W32(c->r[7]+0x00001938u,c->r[30]); // 801067B4
  c->r[3]=c->r[7]+0x0000195Cu; // 801067B8
  c->r[5]=0u+0x00000001u; // 801067BC
  W32(c->r[7]+0x0000196Cu,c->r[6]); // 801067C0
  c->lr=0x801067C8u; f_800F7890(c); // 801067C4
  goto L_80106854; // 801067C8
L_801067CC:;
  cmps(c,0,(int32_t)c->r[31],0); // 801067CC
  if (crb(c,2)) { goto L_80106800; } // 801067D0
  c->r[12]=R32(c->r[30]+0x00000004u); // 801067D4
  cmps(c,0,(int32_t)c->r[12],0); // 801067D8
  if (crb(c,2)) { goto L_80106854; } // 801067DC
  c->r[3]=c->r[30]+0x0000001Cu; // 801067E0
  c->r[4]=R32(c->r[30]+0x00000008u); // 801067E4
  c->r[5]=0u+0x0000000Au; // 801067E8
  c->ctr=c->r[12]; // 801067EC
  if (true) { c->lr=0x801067F4u; dispatch(c,c->ctr); } // 801067F0
  c->r[0]=0u+0x00000000u; // 801067F4
  W32(c->r[30]+0x00000004u,c->r[0]); // 801067F8
  goto L_80106854; // 801067FC
L_80106800:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 80106800
  c->r[0]=c->r[0]|0x00000006u; // 80106804
  W8(c->r[30]+0x00000076u,c->r[0]); // 80106808
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 8010680C
  cmpu(c,0,c->r[0],0x00000002u); // 80106810
  if (!crb(c,2)) { goto L_80106854; } // 80106814
  c->r[31]=0u+0x00000000u; // 80106818
  c->r[3]=c->r[30]|c->r[30]; // 8010681C
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 80106820
  c->lr=0x80106828u; f_80107620(c); // 80106824
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80106828
  cmpu(c,0,c->r[5],0x00000001u); // 8010682C
  if (crb(c,2)) { goto L_80106854; } // 80106830
  c->r[12]=R32(c->r[30]+0x00000004u); // 80106834
  cmps(c,0,(int32_t)c->r[12],0); // 80106838
  if (crb(c,2)) { goto L_80106854; } // 8010683C
  c->r[3]=c->r[30]+0x0000001Cu; // 80106840
  c->r[4]=R32(c->r[30]+0x00000008u); // 80106844
  c->ctr=c->r[12]; // 80106848
  if (true) { c->lr=0x80106850u; dispatch(c,c->ctr); } // 8010684C
  W32(c->r[30]+0x00000004u,c->r[31]); // 80106850
L_80106854:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106854
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80106858
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010685C
  c->lr=c->r[0]; // 80106860
  c->r[1]=c->r[1]+0x00000010u; // 80106864
  return; // 80106868
}

// btm_sec_is_bonding
void f_8010686C(Ctx* __restrict c) {
  trace_call(0x8010686Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010686C
  c->r[0]=c->lr; // 80106870
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106874
  c->lr=0x8010687Cu; f_800FF918(c); // 80106878
  cmps(c,0,(int32_t)c->r[3],0); // 8010687C
  if (crb(c,2)) { goto L_80106898; } // 80106880
  c->r[0]=R8(c->r[3]+0x00000081u); // 80106884
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80106888
  if (crb(c,2)) { goto L_80106898; } // 8010688C
  c->r[3]=0u+0x00000001u; // 80106890
  goto L_8010689C; // 80106894
L_80106898:;
  c->r[3]=0u+0x00000000u; // 80106898
L_8010689C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010689C
  c->lr=c->r[0]; // 801068A0
  c->r[1]=c->r[1]+0x00000010u; // 801068A4
  return; // 801068A8
}

// btm_sec_connected
void f_801068AC(Ctx* __restrict c) {
  trace_call(0x801068ACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801068AC
  c->r[0]=c->lr; // 801068B0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801068B4
  c->r[11]=c->r[1]+0x00000020u; // 801068B8
  c->lr=0x801068C0u; f_800ADA2C(c); // 801068BC
  c->r[27]=c->r[3]|c->r[3]; // 801068C0
  c->r[28]=c->r[4]|c->r[4]; // 801068C4
  c->r[29]=c->r[5]|c->r[5]; // 801068C8
  c->r[30]=c->r[6]|c->r[6]; // 801068CC
  c->lr=0x801068D4u; f_800FF9D0(c); // 801068D0
  c->r[4]=0u+0x803D0000u; // 801068D4
  c->r[31]=c->r[3]|c->r[3]; // 801068D8
  c->r[4]=c->r[4]+0xFFFFA218u; // 801068DC
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801068E0
  cmpu(c,0,c->r[0],0x00000004u); // 801068E4
  if (crb(c,0)) { goto L_8010690C; } // 801068E8
  c->r[3]=0u+0x000D0000u; // 801068EC
  c->r[4]=0u+0x80330000u; // 801068F0
  c->r[5]=c->r[28]|c->r[28]; // 801068F4
  c->r[6]=c->r[29]|c->r[29]; // 801068F8
  c->r[7]=c->r[30]|c->r[30]; // 801068FC
  c->r[3]=c->r[3]+0x00000003u; // 80106900
  c->r[4]=c->r[4]+0xFFFFBC54u; // 80106904
  c->lr=0x8010690Cu; f_800F72E0(c); // 80106908
L_8010690C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010690C
  if (!crb(c,2)) { goto L_80106938; } // 80106910
  cmps(c,0,(int32_t)c->r[29],0); // 80106914
  if (!crb(c,2)) { goto L_80106D14; } // 80106918
  c->r[3]=c->r[27]|c->r[27]; // 8010691C
  c->lr=0x80106924u; f_800FF7F8(c); // 80106920
  cmps(c,0,(int32_t)c->r[3],0); // 80106924
  c->r[31]=c->r[3]|c->r[3]; // 80106928
  if (!crb(c,2)) { goto L_80106958; } // 8010692C
  goto L_80106D14; // 80106930
  goto L_80106D14; // 80106934
L_80106938:;
  c->r[4]=0u+0x803D0000u; // 80106938
  c->r[0]=0u+0x00000001u; // 8010693C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106940
  c->r[3]=R32(c->r[4]+0x00001974u); // 80106944
  W32(c->r[31]+0x0000000Cu,c->r[3]); // 80106948
  c->r[3]=c->r[3]+0x00000001u; // 8010694C
  W32(c->r[4]+0x00001974u,c->r[3]); // 80106950
  W8(c->r[31]+0x00000085u,c->r[0]); // 80106954
L_80106958:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 80106958
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8010695C
  if (crb(c,2)) { goto L_801069F0; } // 80106960
  c->r[4]=0u+0x803D0000u; // 80106964
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106968
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 8010696C
  cmps(c,0,(int32_t)c->r[0],0); // 80106970
  if (crb(c,2)) { goto L_801069CC; } // 80106974
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80106978
  c->r[3]=0u+0x00000000u; // 8010697C
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 80106980
  cmpu(c,0,c->r[0],0x00000005u); // 80106984
  if (crb(c,0)) { goto L_801069B0; } // 80106988
  c->r[3]=R8(c->r[4]+0x00001978u); // 8010698C
  c->r[4]=0u+0x80330000u; // 80106990
  c->r[5]=0u+0x000D0000u; // 80106994
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 80106998
  c->r[4]=c->r[4]+0xFFFFB8ACu; // 8010699C
  c->r[0]=cntlz(c->r[0]); // 801069A0
  c->r[3]=c->r[5]+0x00000004u; // 801069A4
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801069A8
  c->lr=0x801069B0u; f_800F72A0(c); // 801069AC
L_801069B0:;
  c->r[3]=0u+0x803D0000u; // 801069B0
  c->r[3]=c->r[3]+0xFFFFA218u; // 801069B4
  c->r[3]=R8(c->r[3]+0x00001978u); // 801069B8
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801069BC
  c->r[0]=cntlz(c->r[0]); // 801069C0
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801069C4
  c->lr=0x801069CCu; f_8010BDAC(c); // 801069C8
L_801069CC:;
  c->r[4]=0u+0x803D0000u; // 801069CC
  c->r[4]=c->r[4]+0xFFFFA218u; // 801069D0
  c->r[0]=R8(c->r[4]+0x0000197Cu); // 801069D4
  cmps(c,0,(int32_t)c->r[0],0); // 801069D8
  if (crb(c,2)) { goto L_801069F0; } // 801069DC
  c->r[0]=0u+0x00000000u; // 801069E0
  c->r[3]=R8(c->r[4]+0x00000020u); // 801069E4
  W8(c->r[4]+0x0000197Cu,c->r[0]); // 801069E8
  c->lr=0x801069F0u; f_8010B838(c); // 801069EC
L_801069F0:;
  cmps(c,0,(int32_t)c->r[29],0); // 801069F0
  if (crb(c,2)) { goto L_80106B60; } // 801069F4
  cmpu(c,0,c->r[29],0x00000005u); // 801069F8
  if (crb(c,2)) { goto L_80106A4C; } // 801069FC
  cmpu(c,0,c->r[29],0x00000006u); // 80106A00
  if (crb(c,2)) { goto L_80106A4C; } // 80106A04
  cmpu(c,0,c->r[29],0x0000000Eu); // 80106A08
  if (crb(c,2)) { goto L_80106A4C; } // 80106A0C
  cmpu(c,0,c->r[29],0x00000018u); // 80106A10
  if (crb(c,2)) { goto L_80106A4C; } // 80106A14
  cmpu(c,0,c->r[29],0x00000026u); // 80106A18
  if (crb(c,2)) { goto L_80106A4C; } // 80106A1C
  cmpu(c,0,c->r[29],0x00000029u); // 80106A20
  if (crb(c,2)) { goto L_80106A4C; } // 80106A24
  cmpu(c,0,c->r[29],0x00000025u); // 80106A28
  if (crb(c,2)) { goto L_80106A4C; } // 80106A2C
  cmpu(c,0,c->r[29],0x00000017u); // 80106A30
  if (crb(c,2)) { goto L_80106A4C; } // 80106A34
  cmpu(c,0,c->r[29],0x00000022u); // 80106A38
  if (crb(c,2)) { goto L_80106A4C; } // 80106A3C
  c->r[0]=R8(c->r[31]+0x00000081u); // 80106A40
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80106A44
  if (crb(c,2)) { goto L_80106AD8; } // 80106A48
L_80106A4C:;
  c->r[3]=R8(c->r[31]+0x00000081u); // 80106A4C
  c->r[0]=0u+0xFFFFFFAFu; // 80106A50
  c->r[28]=0u+0x803D0000u; // 80106A54
  c->r[0]=c->r[3]&c->r[0]; // 80106A58
  W8(c->r[31]+0x00000081u,c->r[0]); // 80106A5C
  c->r[28]=c->r[28]+0xFFFFA218u; // 80106A60
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106A64
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFEFu; // 80106A68
  W8(c->r[31]+0x00000076u,c->r[0]); // 80106A6C
  c->r[0]=R32(c->r[28]+0x0000194Cu); // 80106A70
  cmps(c,0,(int32_t)c->r[0],0); // 80106A74
  if (crb(c,2)) { goto L_80106A90; } // 80106A78
  c->r[3]=c->r[28]+0x0000193Cu; // 80106A7C
  c->lr=0x80106A84u; f_800F7900(c); // 80106A80
  c->r[0]=0u+0x00000000u; // 80106A84
  c->r[29]=0u+0x0000000Eu; // 80106A88
  W32(c->r[28]+0x0000194Cu,c->r[0]); // 80106A8C
L_80106A90:;
  c->r[3]=0u+0x803D0000u; // 80106A90
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106A94
  c->r[0]=R8(c->r[3]+0x000027BFu); // 80106A98
  cmpu(c,0,c->r[0],0x0000000Eu); // 80106A9C
  if (!crb(c,2)) { goto L_80106AA8; } // 80106AA0
  c->r[29]=0u+0x0000000Eu; // 80106AA4
L_80106AA8:;
  c->r[3]=0u+0x803D0000u; // 80106AA8
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106AAC
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 80106AB0
  cmps(c,0,(int32_t)c->r[12],0); // 80106AB4
  if (crb(c,2)) { goto L_80106D14; } // 80106AB8
  c->r[6]=c->r[29]|c->r[29]; // 80106ABC
  c->r[3]=c->r[31]+0x0000001Cu; // 80106AC0
  c->r[4]=c->r[31]+0x00000022u; // 80106AC4
  c->r[5]=c->r[31]+0x00000035u; // 80106AC8
  c->ctr=c->r[12]; // 80106ACC
  if (true) { c->lr=0x80106AD4u; dispatch(c,c->ctr); } // 80106AD0
  goto L_80106D14; // 80106AD4
L_80106AD8:;
  c->r[0]=R32(c->r[31]+0x00000004u); // 80106AD8
  cmps(c,0,(int32_t)c->r[0],0); // 80106ADC
  if (crb(c,2)) { goto L_80106D14; } // 80106AE0
  c->r[0]=R8(c->r[31]+0x00000080u); // 80106AE4
  cmps(c,0,(int32_t)c->r[0],0); // 80106AE8
  if (crb(c,2)) { goto L_80106B10; } // 80106AEC
  c->r[3]=R32(c->r[31]+0x00000000u); // 80106AF0
  cmps(c,0,(int32_t)c->r[3],0); // 80106AF4
  if (crb(c,2)) { goto L_80106B10; } // 80106AF8
  c->r[0]=R32(c->r[3]+0x00000000u); // 80106AFC
  cmpu(c,0,c->r[0],0x00000003u); // 80106B00
  if (!crb(c,2)) { goto L_80106B10; } // 80106B04
  c->r[0]=0u+0x00000000u; // 80106B08
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106B0C
L_80106B10:;
  cmpu(c,0,c->r[29],0x00000008u); // 80106B10
  if (crb(c,2)) { goto L_80106B28; } // 80106B14
  cmpu(c,0,c->r[29],0x0000001Fu); // 80106B18
  if (crb(c,2)) { goto L_80106B28; } // 80106B1C
  cmpu(c,0,c->r[29],0x00000004u); // 80106B20
  if (!crb(c,2)) { goto L_80106B44; } // 80106B24
L_80106B28:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80106B28
  c->r[3]=c->r[31]+0x0000001Cu; // 80106B2C
  c->r[4]=R32(c->r[31]+0x00000008u); // 80106B30
  c->r[5]=0u+0x00000008u; // 80106B34
  c->ctr=c->r[12]; // 80106B38
  if (true) { c->lr=0x80106B40u; dispatch(c,c->ctr); } // 80106B3C
  goto L_80106D14; // 80106B40
L_80106B44:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80106B44
  c->r[3]=c->r[31]+0x0000001Cu; // 80106B48
  c->r[4]=R32(c->r[31]+0x00000008u); // 80106B4C
  c->r[5]=0u+0x0000000Au; // 80106B50
  c->ctr=c->r[12]; // 80106B54
  if (true) { c->lr=0x80106B5Cu; dispatch(c,c->ctr); } // 80106B58
  goto L_80106D14; // 80106B5C
L_80106B60:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 80106B60
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80106B64
  if (crb(c,2)) { goto L_80106C40; } // 80106B68
  c->r[0]=R8(c->r[31]+0x00000082u); // 80106B6C
  cmps(c,0,(int32_t)c->r[0],0); // 80106B70
  if (crb(c,2)) { goto L_80106C40; } // 80106B74
  c->r[0]=0u+0x00000000u; // 80106B78
  c->r[3]=0u+0x803D0000u; // 80106B7C
  W8(c->r[31]+0x00000082u,c->r[0]); // 80106B80
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106B84
  c->r[12]=R32(c->r[3]+0x00001914u); // 80106B88
  cmps(c,0,(int32_t)c->r[12],0); // 80106B8C
  if (crb(c,2)) { goto L_80106BB0; } // 80106B90
  c->r[3]=c->r[31]+0x0000001Cu; // 80106B94
  c->r[4]=c->r[31]+0x00000022u; // 80106B98
  c->r[5]=c->r[31]+0x00000035u; // 80106B9C
  c->r[6]=c->r[31]+0x00000025u; // 80106BA0
  c->r[7]=R8(c->r[31]+0x00000083u); // 80106BA4
  c->ctr=c->r[12]; // 80106BA8
  if (true) { c->lr=0x80106BB0u; dispatch(c,c->ctr); } // 80106BAC
L_80106BB0:;
  c->r[29]=0u+0x803D0000u; // 80106BB0
  c->r[30]=0u+0x00000000u; // 80106BB4
  c->r[29]=c->r[29]+0xFFFFA218u; // 80106BB8
L_80106BBC:;
  c->r[12]=R32(c->r[29]+0x00001924u); // 80106BBC
  cmps(c,0,(int32_t)c->r[12],0); // 80106BC0
  if (crb(c,2)) { goto L_80106BE4; } // 80106BC4
  c->r[3]=c->r[31]+0x0000001Cu; // 80106BC8
  c->r[4]=c->r[31]+0x00000022u; // 80106BCC
  c->r[5]=c->r[31]+0x00000035u; // 80106BD0
  c->r[6]=c->r[31]+0x00000025u; // 80106BD4
  c->r[7]=R8(c->r[31]+0x00000083u); // 80106BD8
  c->ctr=c->r[12]; // 80106BDC
  if (true) { c->lr=0x80106BE4u; dispatch(c,c->ctr); } // 80106BE0
L_80106BE4:;
  c->r[30]=c->r[30]+0x00000001u; // 80106BE4
  c->r[29]=c->r[29]+0x00000004u; // 80106BE8
  cmps(c,0,(int32_t)c->r[30],2); // 80106BEC
  if (crb(c,0)) { IRQCHK(c); goto L_80106BBC; } // 80106BF0
  c->r[3]=0u+0x803D0000u; // 80106BF4
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106BF8
  c->r[12]=R32(c->r[3]+0x0000191Cu); // 80106BFC
  cmps(c,0,(int32_t)c->r[12],0); // 80106C00
  if (crb(c,2)) { goto L_80106C20; } // 80106C04
  c->r[3]=c->r[31]+0x0000001Cu; // 80106C08
  c->r[4]=c->r[31]+0x00000022u; // 80106C0C
  c->r[5]=c->r[31]+0x00000035u; // 80106C10
  c->r[6]=0u+0x00000000u; // 80106C14
  c->ctr=c->r[12]; // 80106C18
  if (true) { c->lr=0x80106C20u; dispatch(c,c->ctr); } // 80106C1C
L_80106C20:;
  c->r[5]=R8(c->r[31]+0x00000081u); // 80106C20
  c->r[0]=0u+0xFFFFFFAFu; // 80106C24
  c->r[3]=c->r[28]|c->r[28]; // 80106C28
  c->r[4]=0u+0x00000013u; // 80106C2C
  c->r[0]=c->r[5]&c->r[0]; // 80106C30
  W8(c->r[31]+0x00000081u,c->r[0]); // 80106C34
  c->lr=0x80106C3Cu; f_8010A444(c); // 80106C38
  goto L_80106D14; // 80106C3C
L_80106C40:;
  W16(c->r[31]+0x00000018u,c->r[28]); // 80106C40
  cmps(c,0,(int32_t)c->r[30],0); // 80106C44
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106C48
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 80106C4C
  W8(c->r[31]+0x00000076u,c->r[0]); // 80106C50
  if (crb(c,2)) { goto L_80106C64; } // 80106C54
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106C58
  c->r[0]=c->r[0]|0x00000006u; // 80106C5C
  W8(c->r[31]+0x00000076u,c->r[0]); // 80106C60
L_80106C64:;
  c->r[3]=0u+0x803D0000u; // 80106C64
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106C68
  c->r[0]=R8(c->r[3]+0x00001978u); // 80106C6C
  cmpu(c,0,c->r[0],0x00000003u); // 80106C70
  if (!crb(c,2)) { goto L_80106C84; } // 80106C74
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106C78
  c->r[0]=c->r[0]|0x00000002u; // 80106C7C
  W8(c->r[31]+0x00000076u,c->r[0]); // 80106C80
L_80106C84:;
  c->r[0]=0u+0x00000000u; // 80106C84
  W8(c->r[31]+0x00000084u,c->r[0]); // 80106C88
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106C8C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80106C90
  if (crb(c,2)) { goto L_80106CA4; } // 80106C94
  c->r[0]=R8(c->r[31]+0x00000080u); // 80106C98
  cmps(c,0,(int32_t)c->r[0],0); // 80106C9C
  if (crb(c,2)) { goto L_80106D14; } // 80106CA0
L_80106CA4:;
  c->r[3]=c->r[31]|c->r[31]; // 80106CA4
  c->lr=0x80106CACu; f_80107620(c); // 80106CA8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80106CAC
  c->r[4]=c->r[3]|c->r[3]; // 80106CB0
  cmpu(c,0,c->r[0],0x00000001u); // 80106CB4
  if (crb(c,2)) { goto L_80106D14; } // 80106CB8
  c->r[0]=R32(c->r[31]+0x00000004u); // 80106CBC
  cmps(c,0,(int32_t)c->r[0],0); // 80106CC0
  if (crb(c,2)) { goto L_80106D14; } // 80106CC4
  c->r[0]=R8(c->r[31]+0x00000080u); // 80106CC8
  cmps(c,0,(int32_t)c->r[0],0); // 80106CCC
  if (crb(c,2)) { goto L_80106CF4; } // 80106CD0
  c->r[3]=R32(c->r[31]+0x00000000u); // 80106CD4
  cmps(c,0,(int32_t)c->r[3],0); // 80106CD8
  if (crb(c,2)) { goto L_80106CF4; } // 80106CDC
  c->r[0]=R32(c->r[3]+0x00000000u); // 80106CE0
  cmpu(c,0,c->r[0],0x00000003u); // 80106CE4
  if (!crb(c,2)) { goto L_80106CF4; } // 80106CE8
  c->r[0]=0u+0x00000000u; // 80106CEC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80106CF0
L_80106CF4:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80106CF4
  c->r[5]=rotl(c->r[4],0)&0x000000FFu; // 80106CF8
  c->r[3]=c->r[31]+0x0000001Cu; // 80106CFC
  c->r[4]=R32(c->r[31]+0x00000008u); // 80106D00
  c->ctr=c->r[12]; // 80106D04
  if (true) { c->lr=0x80106D0Cu; dispatch(c,c->ctr); } // 80106D08
  c->r[0]=0u+0x00000000u; // 80106D0C
  W32(c->r[31]+0x00000004u,c->r[0]); // 80106D10
L_80106D14:;
  c->r[11]=c->r[1]+0x00000020u; // 80106D14
  c->lr=0x80106D1Cu; f_800ADA78(c); // 80106D18
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106D1C
  c->lr=c->r[0]; // 80106D20
  c->r[1]=c->r[1]+0x00000020u; // 80106D24
  return; // 80106D28
}

// btm_sec_disconnect
void f_80106D2C(Ctx* __restrict c) {
  trace_call(0x80106D2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106D2C
  c->r[0]=c->lr; // 80106D30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80106D34
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80106D38
  W32(c->r[1]+0x00000018u,c->r[30]); // 80106D3C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80106D40
  c->r[29]=c->r[4]|c->r[4]; // 80106D44
  W32(c->r[1]+0x00000010u,c->r[28]); // 80106D48
  c->r[28]=c->r[3]|c->r[3]; // 80106D4C
  c->lr=0x80106D54u; f_800FF918(c); // 80106D50
  cmps(c,0,(int32_t)c->r[3],0); // 80106D54
  c->r[31]=c->r[3]|c->r[3]; // 80106D58
  if (!crb(c,2)) { goto L_80106D68; } // 80106D5C
  c->r[3]=0u+0x00000005u; // 80106D60
  goto L_80106DC8; // 80106D64
L_80106D68:;
  c->r[0]=R8(c->r[3]+0x00000081u); // 80106D68
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80106D6C
  if (crb(c,2)) { goto L_80106D88; } // 80106D70
  c->r[4]=0u+0x803D0000u; // 80106D74
  c->r[3]=0u+0x00000000u; // 80106D78
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106D7C
  W8(c->r[4]+0x0000197Eu,c->r[29]); // 80106D80
  goto L_80106DC8; // 80106D84
L_80106D88:;
  c->r[30]=R8(c->r[3]+0x0000007Fu); // 80106D88
  cmpu(c,0,c->r[30],0x00000005u); // 80106D8C
  if (!crb(c,2)) { goto L_80106D9C; } // 80106D90
  c->r[3]=0u+0x00000001u; // 80106D94
  goto L_80106DC8; // 80106D98
L_80106D9C:;
  c->r[0]=0u+0x00000005u; // 80106D9C
  c->r[4]=c->r[29]|c->r[29]; // 80106DA0
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 80106DA4
  c->r[3]=c->r[28]|c->r[28]; // 80106DA8
  c->lr=0x80106DB0u; f_8010A444(c); // 80106DAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80106DB0
  if (crb(c,2)) { goto L_80106DC0; } // 80106DB4
  c->r[3]=0u+0x00000001u; // 80106DB8
  goto L_80106DC8; // 80106DBC
L_80106DC0:;
  W8(c->r[31]+0x0000007Fu,c->r[30]); // 80106DC0
  c->r[3]=0u+0x00000003u; // 80106DC4
L_80106DC8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80106DC8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80106DCC
  c->r[30]=R32(c->r[1]+0x00000018u); // 80106DD0
  c->r[29]=R32(c->r[1]+0x00000014u); // 80106DD4
  c->r[28]=R32(c->r[1]+0x00000010u); // 80106DD8
  c->lr=c->r[0]; // 80106DDC
  c->r[1]=c->r[1]+0x00000020u; // 80106DE0
  return; // 80106DE4
}

// btm_sec_disconnected
void f_80106DE8(Ctx* __restrict c) {
  trace_call(0x80106DE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106DE8
  c->r[0]=c->lr; // 80106DEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 80106DF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80106DF4
  c->r[31]=c->r[4]|c->r[4]; // 80106DF8
  W32(c->r[1]+0x00000008u,c->r[30]); // 80106DFC
  c->lr=0x80106E04u; f_800FF918(c); // 80106E00
  cmps(c,0,(int32_t)c->r[3],0); // 80106E04
  c->r[30]=c->r[3]|c->r[3]; // 80106E08
  if (crb(c,2)) { goto L_80106F0C; } // 80106E0C
  c->r[0]=R8(c->r[3]+0x00000081u); // 80106E10
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80106E14
  if (crb(c,2)) { goto L_80106E6C; } // 80106E18
  c->r[4]=0u+0x803D0000u; // 80106E1C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80106E20
  c->r[12]=R32(c->r[4]+0x0000191Cu); // 80106E24
  cmps(c,0,(int32_t)c->r[12],0); // 80106E28
  if (crb(c,2)) { goto L_80106E6C; } // 80106E2C
  cmpu(c,0,c->r[31],0x00000017u); // 80106E30
  if (!crb(c,2)) { goto L_80106E54; } // 80106E34
  c->r[4]=c->r[3]+0x00000022u; // 80106E38
  c->r[5]=c->r[3]+0x00000035u; // 80106E3C
  c->r[6]=0u+0x00000017u; // 80106E40
  c->ctr=c->r[12]; // 80106E44
  c->r[3]=c->r[3]+0x0000001Cu; // 80106E48
  if (true) { c->lr=0x80106E50u; dispatch(c,c->ctr); } // 80106E4C
  goto L_80106E6C; // 80106E50
L_80106E54:;
  c->r[4]=c->r[3]+0x00000022u; // 80106E54
  c->r[5]=c->r[3]+0x00000035u; // 80106E58
  c->r[6]=0u+0x00000005u; // 80106E5C
  c->ctr=c->r[12]; // 80106E60
  c->r[3]=c->r[3]+0x0000001Cu; // 80106E64
  if (true) { c->lr=0x80106E6Cu; dispatch(c,c->ctr); } // 80106E68
L_80106E6C:;
  c->r[31]=0u+0x803D0000u; // 80106E6C
  c->r[31]=c->r[31]+0xFFFFA218u; // 80106E70
  c->r[0]=R32(c->r[31]+0x0000194Cu); // 80106E74
  cmps(c,0,(int32_t)c->r[0],0); // 80106E78
  if (crb(c,2)) { goto L_80106EDC; } // 80106E7C
  c->r[3]=c->r[31]+0x00001954u; // 80106E80
  c->r[4]=c->r[30]+0x0000001Cu; // 80106E84
  c->r[5]=0u+0x00000006u; // 80106E88
  c->lr=0x80106E90u; f_800B3824(c); // 80106E8C
  cmps(c,0,(int32_t)c->r[3],0); // 80106E90
  if (!crb(c,2)) { goto L_80106EDC; } // 80106E94
  c->r[3]=c->r[31]+0x0000193Cu; // 80106E98
  c->lr=0x80106EA0u; f_800F7900(c); // 80106E9C
  c->r[0]=0u+0x00000000u; // 80106EA0
  c->r[3]=c->r[31]+0x00001954u; // 80106EA4
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 80106EA8
  c->r[4]=0u+0x000000FFu; // 80106EAC
  c->r[5]=0u+0x00000006u; // 80106EB0
  c->lr=0x80106EB8u; f_80004714(c); // 80106EB4
  c->r[12]=R32(c->r[31]+0x0000191Cu); // 80106EB8
  cmps(c,0,(int32_t)c->r[12],0); // 80106EBC
  if (crb(c,2)) { goto L_80106EDC; } // 80106EC0
  c->r[3]=c->r[30]+0x0000001Cu; // 80106EC4
  c->r[4]=c->r[30]+0x00000022u; // 80106EC8
  c->r[5]=c->r[30]+0x00000035u; // 80106ECC
  c->r[6]=0u+0x0000000Eu; // 80106ED0
  c->ctr=c->r[12]; // 80106ED4
  if (true) { c->lr=0x80106EDCu; dispatch(c,c->ctr); } // 80106ED8
L_80106EDC:;
  c->r[4]=0u+0x00010000u; // 80106EDC
  c->r[3]=0u+0x00000000u; // 80106EE0
  c->r[0]=c->r[4]+0xFFFFFFFFu; // 80106EE4
  W16(c->r[30]+0x00000018u,c->r[0]); // 80106EE8
  W8(c->r[30]+0x0000007Fu,c->r[3]); // 80106EEC
  c->r[0]=R8(c->r[30]+0x00000076u); // 80106EF0
  c->r[0]=rotl(c->r[0],0)&0x000000F8u; // 80106EF4
  W8(c->r[30]+0x00000076u,c->r[0]); // 80106EF8
  c->r[0]=R8(c->r[30]+0x00000081u); // 80106EFC
  c->r[0]=rotl(c->r[0],0)&0x00000080u; // 80106F00
  W8(c->r[30]+0x00000081u,c->r[0]); // 80106F04
  W32(c->r[30]+0x00000004u,c->r[3]); // 80106F08
L_80106F0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80106F0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80106F10
  c->r[30]=R32(c->r[1]+0x00000008u); // 80106F14
  c->lr=c->r[0]; // 80106F18
  c->r[1]=c->r[1]+0x00000010u; // 80106F1C
  return; // 80106F20
}

// btm_sec_link_key_notification
void f_80106F24(Ctx* __restrict c) {
  trace_call(0x80106F24u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80106F24
  c->r[0]=c->lr; // 80106F28
  W32(c->r[1]+0x00000024u,c->r[0]); // 80106F2C
  c->r[11]=c->r[1]+0x00000020u; // 80106F30
  c->lr=0x80106F38u; f_800ADA2C(c); // 80106F34
  c->r[29]=c->r[3]|c->r[3]; // 80106F38
  c->r[30]=c->r[4]|c->r[4]; // 80106F3C
  c->r[27]=c->r[5]|c->r[5]; // 80106F40
  c->lr=0x80106F48u; f_800FF9D0(c); // 80106F44
  cmps(c,0,(int32_t)c->r[3],0); // 80106F48
  c->r[31]=c->r[3]|c->r[3]; // 80106F4C
  if (!crb(c,2)) { goto L_80106F68; } // 80106F50
  c->r[3]=c->r[29]|c->r[29]; // 80106F54
  c->lr=0x80106F5Cu; f_800FF7F8(c); // 80106F58
  cmps(c,0,(int32_t)c->r[3],0); // 80106F5C
  c->r[31]=c->r[3]|c->r[3]; // 80106F60
  if (crb(c,2)) { goto L_801070B8; } // 80106F64
L_80106F68:;
  c->r[3]=0u+0x803D0000u; // 80106F68
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106F6C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80106F70
  cmpu(c,0,c->r[0],0x00000004u); // 80106F74
  if (crb(c,0)) { goto L_80106FA8; } // 80106F78
  c->r[3]=0u+0x000D0000u; // 80106F7C
  c->r[4]=0u+0x80330000u; // 80106F80
  c->r[5]=R8(c->r[29]+0x00000000u); // 80106F84
  c->r[3]=c->r[3]+0x00000003u; // 80106F88
  c->r[6]=R8(c->r[29]+0x00000001u); // 80106F8C
  c->r[4]=c->r[4]+0xFFFFBC98u; // 80106F90
  c->r[7]=R8(c->r[29]+0x00000002u); // 80106F94
  c->r[8]=R8(c->r[29]+0x00000003u); // 80106F98
  c->r[9]=R8(c->r[29]+0x00000004u); // 80106F9C
  c->r[10]=R8(c->r[29]+0x00000005u); // 80106FA0
  c->lr=0x80106FA8u; f_800F7340(c); // 80106FA4
L_80106FA8:;
  c->r[3]=0u+0x803D0000u; // 80106FA8
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106FAC
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80106FB0
  cmpu(c,0,c->r[0],0x00000004u); // 80106FB4
  if (crb(c,0)) { goto L_80106FD4; } // 80106FB8
  c->r[3]=0u+0x000D0000u; // 80106FBC
  c->r[4]=0u+0x80330000u; // 80106FC0
  c->r[5]=c->r[27]|c->r[27]; // 80106FC4
  c->r[3]=c->r[3]+0x00000003u; // 80106FC8
  c->r[4]=c->r[4]+0xFFFFBCDCu; // 80106FCC
  c->lr=0x80106FD4u; f_800F72A0(c); // 80106FD0
L_80106FD4:;
  c->r[3]=0u+0x803D0000u; // 80106FD4
  c->r[3]=c->r[3]+0xFFFFA218u; // 80106FD8
  c->r[0]=R8(c->r[3]+0x00000636u); // 80106FDC
  cmpu(c,0,c->r[0],0x00000001u); // 80106FE0
  if (!crb(c,0)) { goto L_80106FF4; } // 80106FE4
  c->r[0]=0u+0x000000FFu; // 80106FE8
  W8(c->r[31]+0x00000083u,c->r[0]); // 80106FEC
  goto L_80106FF8; // 80106FF0
L_80106FF4:;
  W8(c->r[31]+0x00000083u,c->r[27]); // 80106FF4
L_80106FF8:;
  c->r[0]=R8(c->r[31]+0x00000076u); // 80106FF8
  c->r[4]=c->r[30]|c->r[30]; // 80106FFC
  c->r[3]=c->r[31]+0x00000025u; // 80107000
  c->r[5]=0u+0x00000010u; // 80107004
  c->r[0]=c->r[0]|0x00000010u; // 80107008
  W8(c->r[31]+0x00000076u,c->r[0]); // 8010700C
  c->lr=0x80107014u; f_800043C4(c); // 80107010
  c->r[0]=R8(c->r[31]+0x00000076u); // 80107014
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80107018
  if (crb(c,2)) { goto L_80107038; } // 8010701C
  c->r[0]=R8(c->r[31]+0x00000081u); // 80107020
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80107024
  if (crb(c,2)) { goto L_80107044; } // 80107028
  c->r[0]=R8(c->r[31]+0x00000085u); // 8010702C
  cmps(c,0,(int32_t)c->r[0],0); // 80107030
  if (!crb(c,2)) { goto L_80107044; } // 80107034
L_80107038:;
  c->r[0]=0u+0x00000001u; // 80107038
  W8(c->r[31]+0x00000082u,c->r[0]); // 8010703C
  goto L_801070B8; // 80107040
L_80107044:;
  c->r[3]=0u+0x803D0000u; // 80107044
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107048
  c->r[12]=R32(c->r[3]+0x00001914u); // 8010704C
  cmps(c,0,(int32_t)c->r[12],0); // 80107050
  if (crb(c,2)) { goto L_80107074; } // 80107054
  c->r[3]=c->r[29]|c->r[29]; // 80107058
  c->r[6]=c->r[30]|c->r[30]; // 8010705C
  c->r[4]=c->r[31]+0x00000022u; // 80107060
  c->r[5]=c->r[31]+0x00000035u; // 80107064
  c->r[7]=R8(c->r[31]+0x00000083u); // 80107068
  c->ctr=c->r[12]; // 8010706C
  if (true) { c->lr=0x80107074u; dispatch(c,c->ctr); } // 80107070
L_80107074:;
  c->r[28]=0u+0x803D0000u; // 80107074
  c->r[27]=0u+0x00000000u; // 80107078
  c->r[28]=c->r[28]+0xFFFFA218u; // 8010707C
L_80107080:;
  c->r[12]=R32(c->r[28]+0x00001924u); // 80107080
  cmps(c,0,(int32_t)c->r[12],0); // 80107084
  if (crb(c,2)) { goto L_801070A8; } // 80107088
  c->r[3]=c->r[29]|c->r[29]; // 8010708C
  c->r[6]=c->r[30]|c->r[30]; // 80107090
  c->r[4]=c->r[31]+0x00000022u; // 80107094
  c->r[5]=c->r[31]+0x00000035u; // 80107098
  c->r[7]=R8(c->r[31]+0x00000083u); // 8010709C
  c->ctr=c->r[12]; // 801070A0
  if (true) { c->lr=0x801070A8u; dispatch(c,c->ctr); } // 801070A4
L_801070A8:;
  c->r[27]=c->r[27]+0x00000001u; // 801070A8
  c->r[28]=c->r[28]+0x00000004u; // 801070AC
  cmps(c,0,(int32_t)c->r[27],2); // 801070B0
  if (crb(c,0)) { IRQCHK(c); goto L_80107080; } // 801070B4
L_801070B8:;
  c->r[11]=c->r[1]+0x00000020u; // 801070B8
  c->lr=0x801070C0u; f_800ADA78(c); // 801070BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801070C0
  c->lr=c->r[0]; // 801070C4
  c->r[1]=c->r[1]+0x00000020u; // 801070C8
  return; // 801070CC
}

// btm_sec_link_key_request
void f_801070D0(Ctx* __restrict c) {
  trace_call(0x801070D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801070D0
  c->r[0]=c->lr; // 801070D4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801070D8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801070DC
  W32(c->r[1]+0x00000018u,c->r[30]); // 801070E0
  c->r[30]=c->r[3]|c->r[3]; // 801070E4
  c->lr=0x801070ECu; f_800FF9D0(c); // 801070E8
  c->r[4]=0u+0x803D0000u; // 801070EC
  c->r[31]=c->r[3]|c->r[3]; // 801070F0
  c->r[4]=c->r[4]+0xFFFFA218u; // 801070F4
  c->r[0]=R8(c->r[4]+0x000027C0u); // 801070F8
  cmpu(c,0,c->r[0],0x00000004u); // 801070FC
  if (crb(c,0)) { goto L_80107130; } // 80107100
  c->r[3]=0u+0x000D0000u; // 80107104
  c->r[4]=0u+0x80330000u; // 80107108
  c->r[5]=R8(c->r[30]+0x00000000u); // 8010710C
  c->r[3]=c->r[3]+0x00000003u; // 80107110
  c->r[6]=R8(c->r[30]+0x00000001u); // 80107114
  c->r[4]=c->r[4]+0xFFFFBD08u; // 80107118
  c->r[7]=R8(c->r[30]+0x00000002u); // 8010711C
  c->r[8]=R8(c->r[30]+0x00000003u); // 80107120
  c->r[9]=R8(c->r[30]+0x00000004u); // 80107124
  c->r[10]=R8(c->r[30]+0x00000005u); // 80107128
  c->lr=0x80107130u; f_800F7340(c); // 8010712C
L_80107130:;
  cmps(c,0,(int32_t)c->r[31],0); // 80107130
  if (crb(c,2)) { goto L_80107154; } // 80107134
  c->r[0]=R8(c->r[31]+0x00000076u); // 80107138
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8010713C
  if (crb(c,2)) { goto L_80107154; } // 80107140
  c->r[3]=c->r[30]|c->r[30]; // 80107144
  c->r[4]=c->r[31]+0x00000025u; // 80107148
  c->lr=0x80107150u; f_8010A614(c); // 8010714C
  goto L_801071E8; // 80107150
L_80107154:;
  cmps(c,0,(int32_t)c->r[31],0); // 80107154
  if (!crb(c,2)) { goto L_80107168; } // 80107158
  c->r[3]=c->r[30]|c->r[30]; // 8010715C
  c->lr=0x80107164u; f_800FF7F8(c); // 80107160
  c->r[31]=c->r[3]|c->r[3]; // 80107164
L_80107168:;
  c->r[0]=R8(c->r[31]+0x00000081u); // 80107168
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8010716C
  if (!crb(c,2)) { goto L_801071E0; } // 80107170
  c->r[3]=0u+0x803D0000u; // 80107174
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107178
  c->r[12]=R32(c->r[3]+0x00001918u); // 8010717C
  cmps(c,0,(int32_t)c->r[12],0); // 80107180
  if (crb(c,2)) { goto L_801071E0; } // 80107184
  cmps(c,0,(int32_t)c->r[31],0); // 80107188
  if (crb(c,2)) { goto L_801071B8; } // 8010718C
  c->r[3]=c->r[30]|c->r[30]; // 80107190
  c->r[4]=c->r[31]+0x00000025u; // 80107194
  c->ctr=c->r[12]; // 80107198
  if (true) { c->lr=0x801071A0u; dispatch(c,c->ctr); } // 8010719C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801071A0
  if (!crb(c,2)) { goto L_801071E0; } // 801071A4
  c->r[3]=c->r[30]|c->r[30]; // 801071A8
  c->r[4]=c->r[31]+0x00000025u; // 801071AC
  c->lr=0x801071B4u; f_8010A614(c); // 801071B0
  goto L_801071E8; // 801071B4
L_801071B8:;
  c->r[3]=c->r[30]|c->r[30]; // 801071B8
  c->r[4]=c->r[1]+0x00000008u; // 801071BC
  c->ctr=c->r[12]; // 801071C0
  if (true) { c->lr=0x801071C8u; dispatch(c,c->ctr); } // 801071C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801071C8
  if (!crb(c,2)) { goto L_801071E0; } // 801071CC
  c->r[3]=c->r[30]|c->r[30]; // 801071D0
  c->r[4]=c->r[1]+0x00000008u; // 801071D4
  c->lr=0x801071DCu; f_8010A614(c); // 801071D8
  goto L_801071E8; // 801071DC
L_801071E0:;
  c->r[3]=c->r[30]|c->r[30]; // 801071E0
  c->lr=0x801071E8u; f_8010A7B4(c); // 801071E4
L_801071E8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801071E8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801071EC
  c->r[30]=R32(c->r[1]+0x00000018u); // 801071F0
  c->lr=c->r[0]; // 801071F4
  c->r[1]=c->r[1]+0x00000020u; // 801071F8
  return; // 801071FC
}

// btm_sec_pin_code_request_timeout
void f_80107200(Ctx* __restrict c) {
  trace_call(0x80107200u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107200
  c->r[0]=c->lr; // 80107204
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107208
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010720C
  c->r[31]=0u+0x803D0000u; // 80107210
  c->r[31]=c->r[31]+0xFFFFA218u; // 80107214
  c->r[0]=R8(c->r[31]+0x000027C0u); // 80107218
  cmpu(c,0,c->r[0],0x00000004u); // 8010721C
  if (crb(c,0)) { goto L_80107238; } // 80107220
  c->r[3]=0u+0x000D0000u; // 80107224
  c->r[4]=0u+0x80330000u; // 80107228
  c->r[3]=c->r[3]+0x00000003u; // 8010722C
  c->r[4]=c->r[4]+0xFFFFBD48u; // 80107230
  c->lr=0x80107238u; f_800F7280(c); // 80107234
L_80107238:;
  c->r[0]=0u+0x00000000u; // 80107238
  c->r[3]=0u+0x803D0000u; // 8010723C
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107240
  W32(c->r[31]+0x0000194Cu,c->r[0]); // 80107244
  c->r[3]=c->r[3]+0x00001954u; // 80107248
  c->r[4]=0u+0x000000FFu; // 8010724C
  c->r[5]=0u+0x00000006u; // 80107250
  c->lr=0x80107258u; f_80004714(c); // 80107254
  c->r[3]=c->r[31]+0x000027B4u; // 80107258
  c->lr=0x80107260u; f_8010AA38(c); // 8010725C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107260
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107264
  c->lr=c->r[0]; // 80107268
  c->r[1]=c->r[1]+0x00000010u; // 8010726C
  return; // 80107270
}

// btm_sec_pin_code_request
void f_80107274(Ctx* __restrict c) {
  trace_call(0x80107274u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107274
  c->r[0]=c->lr; // 80107278
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010727C
  c->r[11]=c->r[1]+0x00000020u; // 80107280
  c->lr=0x80107288u; f_800ADA2C(c); // 80107284
  c->r[29]=0u+0x803D0000u; // 80107288
  c->r[31]=0u+0x80330000u; // 8010728C
  c->r[29]=c->r[29]+0xFFFFA218u; // 80107290
  c->r[27]=c->r[3]|c->r[3]; // 80107294
  c->r[0]=R8(c->r[29]+0x000027C0u); // 80107298
  c->r[31]=c->r[31]+0xFFFFB5B0u; // 8010729C
  c->r[28]=0u+0x00000000u; // 801072A0
  c->r[30]=0u+0x00000000u; // 801072A4
  cmpu(c,0,c->r[0],0x00000004u); // 801072A8
  if (crb(c,0)) { goto L_801072D8; } // 801072AC
  c->r[3]=0u+0x000D0000u; // 801072B0
  c->r[5]=R8(c->r[27]+0x00000000u); // 801072B4
  c->r[6]=R8(c->r[27]+0x00000001u); // 801072B8
  c->r[3]=c->r[3]+0x00000003u; // 801072BC
  c->r[7]=R8(c->r[27]+0x00000002u); // 801072C0
  c->r[4]=c->r[31]+0x000007BCu; // 801072C4
  c->r[8]=R8(c->r[27]+0x00000003u); // 801072C8
  c->r[9]=R8(c->r[27]+0x00000004u); // 801072CC
  c->r[10]=R8(c->r[27]+0x00000005u); // 801072D0
  c->lr=0x801072D8u; f_800F7340(c); // 801072D4
L_801072D8:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801072D8
  cmps(c,0,(int32_t)c->r[0],0); // 801072DC
  if (!crb(c,2)) { goto L_801073C4; } // 801072E0
  c->r[0]=R8(c->r[29]+0x00000020u); // 801072E4
  cmpu(c,0,c->r[0],0x00000001u); // 801072E8
  if (!crb(c,2)) { goto L_801073C4; } // 801072EC
  c->r[3]=c->r[27]|c->r[27]; // 801072F0
  c->lr=0x801072F8u; f_800FF9D0(c); // 801072F4
  cmps(c,0,(int32_t)c->r[3],0); // 801072F8
  if (!crb(c,2)) { goto L_8010739C; } // 801072FC
  c->r[3]=0u+0x803D0000u; // 80107300
  c->r[0]=0u+0x00000002u; // 80107304
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107308
  c->r[3]=c->r[3]+0x00001F30u; // 8010730C
  c->ctr=c->r[0]; // 80107310
L_80107314:;
  c->r[0]=R8(c->r[3]+0x00000076u); // 80107314
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107318
  if (crb(c,2)) { goto L_8010739C; } // 8010731C
  c->r[0]=R8(c->r[3]+0x000000FEu); // 80107320
  c->r[30]=c->r[30]+0x00000001u; // 80107324
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107328
  if (crb(c,2)) { goto L_8010739C; } // 8010732C
  c->r[0]=R8(c->r[3]+0x00000186u); // 80107330
  c->r[30]=c->r[30]+0x00000001u; // 80107334
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107338
  if (crb(c,2)) { goto L_8010739C; } // 8010733C
  c->r[0]=R8(c->r[3]+0x0000020Eu); // 80107340
  c->r[30]=c->r[30]+0x00000001u; // 80107344
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107348
  if (crb(c,2)) { goto L_8010739C; } // 8010734C
  c->r[0]=R8(c->r[3]+0x00000296u); // 80107350
  c->r[30]=c->r[30]+0x00000001u; // 80107354
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107358
  if (crb(c,2)) { goto L_8010739C; } // 8010735C
  c->r[0]=R8(c->r[3]+0x0000031Eu); // 80107360
  c->r[30]=c->r[30]+0x00000001u; // 80107364
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107368
  if (crb(c,2)) { goto L_8010739C; } // 8010736C
  c->r[0]=R8(c->r[3]+0x000003A6u); // 80107370
  c->r[30]=c->r[30]+0x00000001u; // 80107374
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107378
  if (crb(c,2)) { goto L_8010739C; } // 8010737C
  c->r[0]=R8(c->r[3]+0x0000042Eu); // 80107380
  c->r[30]=c->r[30]+0x00000001u; // 80107384
  c->r[0]=rotl(c->r[0],0)&0x00000080u; cr0(c,c->r[0]); // 80107388
  if (crb(c,2)) { goto L_8010739C; } // 8010738C
  c->r[30]=c->r[30]+0x00000001u; // 80107390
  c->r[3]=c->r[3]+0x00000440u; // 80107394
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80107314; } // 80107398
L_8010739C:;
  cmps(c,0,(int32_t)c->r[30],16); // 8010739C
  if (crb(c,0)) { goto L_801073B0; } // 801073A0
  c->r[3]=c->r[27]|c->r[27]; // 801073A4
  c->lr=0x801073ACu; f_8010AA38(c); // 801073A8
  goto L_801075B8; // 801073AC
L_801073B0:;
  c->r[4]=R8(c->r[29]+0x00000021u); // 801073B0
  c->r[3]=c->r[27]|c->r[27]; // 801073B4
  c->r[5]=c->r[29]+0x00000022u; // 801073B8
  c->lr=0x801073C0u; f_8010A854(c); // 801073BC
  goto L_801075B8; // 801073C0
L_801073C4:;
  c->r[3]=c->r[27]|c->r[27]; // 801073C4
  c->lr=0x801073CCu; f_800FF9D0(c); // 801073C8
  cmps(c,0,(int32_t)c->r[3],0); // 801073CC
  c->r[30]=c->r[3]|c->r[3]; // 801073D0
  if (!crb(c,2)) { goto L_801073E4; } // 801073D4
  c->r[3]=c->r[27]|c->r[27]; // 801073D8
  c->lr=0x801073E0u; f_800FF7F8(c); // 801073DC
  c->r[30]=c->r[3]|c->r[3]; // 801073E0
L_801073E4:;
  c->r[3]=0u+0x803D0000u; // 801073E4
  c->r[4]=c->r[27]|c->r[27]; // 801073E8
  c->r[3]=c->r[3]+0xFFFFA218u; // 801073EC
  c->r[5]=0u+0x00000006u; // 801073F0
  c->r[3]=c->r[3]+0x00001954u; // 801073F4
  c->lr=0x801073FCu; f_800043C4(c); // 801073F8
  cmps(c,0,(int32_t)c->r[30],0); // 801073FC
  if (crb(c,2)) { goto L_80107574; } // 80107400
  c->r[3]=c->r[27]|c->r[27]; // 80107404
  c->r[4]=c->r[29]+0x000027B4u; // 80107408
  c->r[5]=0u+0x00000006u; // 8010740C
  c->lr=0x80107414u; f_800B3824(c); // 80107410
  cmps(c,0,(int32_t)c->r[3],0); // 80107414
  if (!crb(c,2)) { goto L_8010742C; } // 80107418
  c->r[3]=c->r[30]+0x00000022u; // 8010741C
  c->r[4]=c->r[29]+0x000027BAu; // 80107420
  c->r[5]=0u+0x00000003u; // 80107424
  c->lr=0x8010742Cu; f_800043C4(c); // 80107428
L_8010742C:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 8010742C
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 80107430
  if (crb(c,2)) { goto L_801074D4; } // 80107434
  c->r[3]=0u+0x803D0000u; // 80107438
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010743C
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80107440
  cmpu(c,0,c->r[0],0x00000004u); // 80107444
  if (crb(c,0)) { goto L_8010745C; } // 80107448
  c->r[3]=0u+0x000D0000u; // 8010744C
  c->r[4]=c->r[31]+0x000007FCu; // 80107450
  c->r[3]=c->r[3]+0x00000003u; // 80107454
  c->lr=0x8010745Cu; f_800F7280(c); // 80107458
L_8010745C:;
  c->r[4]=R8(c->r[29]+0x0000197Fu); // 8010745C
  c->r[3]=c->r[27]|c->r[27]; // 80107460
  c->r[5]=c->r[29]+0x00001980u; // 80107464
  c->lr=0x8010746Cu; f_8010A854(c); // 80107468
  c->r[4]=0u+0x803D0000u; // 8010746C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80107470
  c->r[0]=R8(c->r[4]+0x0000197Bu); // 80107474
  cmps(c,0,(int32_t)c->r[0],0); // 80107478
  if (crb(c,2)) { goto L_80107578; } // 8010747C
  c->r[0]=R8(c->r[4]+0x000027C0u); // 80107480
  c->r[3]=0u+0x00000000u; // 80107484
  W8(c->r[4]+0x0000197Bu,c->r[3]); // 80107488
  cmpu(c,0,c->r[0],0x00000005u); // 8010748C
  if (crb(c,0)) { goto L_801074B4; } // 80107490
  c->r[5]=R8(c->r[4]+0x00001978u); // 80107494
  c->r[3]=0u+0x000D0000u; // 80107498
  c->r[3]=c->r[3]+0x00000004u; // 8010749C
  c->r[4]=c->r[31]+0x0000082Cu; // 801074A0
  c->r[0]=c->r[5]+0xFFFFFFFDu; // 801074A4
  c->r[0]=cntlz(c->r[0]); // 801074A8
  c->r[5]=rotl(c->r[0],27)&0x07FFFFFFu; // 801074AC
  c->lr=0x801074B4u; f_800F72A0(c); // 801074B0
L_801074B4:;
  c->r[3]=0u+0x803D0000u; // 801074B4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801074B8
  c->r[3]=R8(c->r[3]+0x00001978u); // 801074BC
  c->r[0]=c->r[3]+0xFFFFFFFDu; // 801074C0
  c->r[0]=cntlz(c->r[0]); // 801074C4
  c->r[3]=rotl(c->r[0],27)&0x000000FFu; // 801074C8
  c->lr=0x801074D0u; f_8010BDAC(c); // 801074CC
  goto L_80107578; // 801074D0
L_801074D4:;
  c->r[0]=R8(c->r[29]+0x00001979u); // 801074D4
  cmps(c,0,(int32_t)c->r[0],0); // 801074D8
  if (!crb(c,2)) { goto L_80107514; } // 801074DC
  c->r[0]=R32(c->r[29]+0x00001910u); // 801074E0
  cmps(c,0,(int32_t)c->r[0],0); // 801074E4
  if (crb(c,2)) { goto L_80107514; } // 801074E8
  c->r[0]=R8(c->r[30]+0x00000080u); // 801074EC
  cmps(c,0,(int32_t)c->r[0],0); // 801074F0
  if (!crb(c,2)) { goto L_8010751C; } // 801074F4
  c->r[0]=R8(c->r[30]+0x00000023u); // 801074F8
  c->r[0]=rotl(c->r[0],0)&0x0000001Fu; // 801074FC
  cmps(c,0,(int32_t)c->r[0],5); // 80107500
  if (!crb(c,2)) { goto L_8010751C; } // 80107504
  c->r[0]=R8(c->r[30]+0x00000024u); // 80107508
  c->r[0]=rotl(c->r[0],0)&0x00000040u; cr0(c,c->r[0]); // 8010750C
  if (crb(c,2)) { goto L_8010751C; } // 80107510
L_80107514:;
  c->r[28]=0u+0x00000001u; // 80107514
  goto L_80107578; // 80107518
L_8010751C:;
  c->r[4]=c->r[27]|c->r[27]; // 8010751C
  c->r[3]=c->r[29]+0x000027B4u; // 80107520
  c->r[5]=0u+0x00000006u; // 80107524
  c->lr=0x8010752Cu; f_800043C4(c); // 80107528
  c->r[3]=c->r[29]+0x000027BAu; // 8010752C
  c->r[4]=c->r[30]+0x00000022u; // 80107530
  c->r[5]=0u+0x00000003u; // 80107534
  c->lr=0x8010753Cu; f_800043C4(c); // 80107538
  c->r[5]=0u+0x80100000u; // 8010753C
  c->r[3]=c->r[29]+0x0000193Cu; // 80107540
  c->r[5]=c->r[5]+0x00007200u; // 80107544
  c->r[4]=0u+0x00000016u; // 80107548
  W32(c->r[29]+0x0000194Cu,c->r[5]); // 8010754C
  c->r[5]=0u+0x0000003Cu; // 80107550
  c->lr=0x80107558u; f_800F7890(c); // 80107554
  c->r[12]=R32(c->r[29]+0x00001910u); // 80107558
  c->r[3]=c->r[27]|c->r[27]; // 8010755C
  c->r[4]=c->r[30]+0x00000022u; // 80107560
  c->r[5]=c->r[30]+0x00000035u; // 80107564
  c->ctr=c->r[12]; // 80107568
  if (true) { c->lr=0x80107570u; dispatch(c,c->ctr); } // 8010756C
  goto L_80107578; // 80107570
L_80107574:;
  c->r[28]=0u+0x00000001u; // 80107574
L_80107578:;
  cmps(c,0,(int32_t)c->r[28],0); // 80107578
  if (crb(c,2)) { goto L_801075B8; } // 8010757C
  c->r[3]=0u+0x803D0000u; // 80107580
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107584
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80107588
  cmpu(c,0,c->r[0],0x00000002u); // 8010758C
  if (crb(c,0)) { goto L_801075B0; } // 80107590
  c->r[3]=0u+0x000D0000u; // 80107594
  c->r[5]=R8(c->r[29]+0x00001979u); // 80107598
  c->r[6]=R32(c->r[29]+0x00001910u); // 8010759C
  c->r[7]=c->r[30]|c->r[30]; // 801075A0
  c->r[3]=c->r[3]+0x00000001u; // 801075A4
  c->r[4]=c->r[31]+0x0000085Cu; // 801075A8
  c->lr=0x801075B0u; f_800F72E0(c); // 801075AC
L_801075B0:;
  c->r[3]=c->r[27]|c->r[27]; // 801075B0
  c->lr=0x801075B8u; f_8010AA38(c); // 801075B4
L_801075B8:;
  c->r[11]=c->r[1]+0x00000020u; // 801075B8
  c->lr=0x801075C0u; f_800ADA78(c); // 801075BC
  c->r[0]=R32(c->r[1]+0x00000024u); // 801075C0
  c->lr=c->r[0]; // 801075C4
  c->r[1]=c->r[1]+0x00000020u; // 801075C8
  return; // 801075CC
}

// btm_sec_update_clock_offset
void f_801075D0(Ctx* __restrict c) {
  trace_call(0x801075D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801075D0
  c->r[0]=c->lr; // 801075D4
  W32(c->r[1]+0x00000014u,c->r[0]); // 801075D8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801075DC
  c->r[31]=c->r[4]|c->r[4]; // 801075E0
  c->lr=0x801075E8u; f_800FF918(c); // 801075E4
  cmps(c,0,(int32_t)c->r[3],0); // 801075E8
  if (crb(c,2)) { goto L_8010760C; } // 801075EC
  c->r[31]=c->r[31]|0x00008000u; // 801075F0
  W16(c->r[3]+0x0000001Au,c->r[31]); // 801075F4
  c->r[3]=c->r[3]+0x0000001Cu; // 801075F8
  c->lr=0x80107600u; f_801020DC(c); // 801075FC
  cmps(c,0,(int32_t)c->r[3],0); // 80107600
  if (crb(c,2)) { goto L_8010760C; } // 80107604
  W16(c->r[3]+0x00000000u,c->r[31]); // 80107608
L_8010760C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010760C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107610
  c->lr=c->r[0]; // 80107614
  c->r[1]=c->r[1]+0x00000010u; // 80107618
  return; // 8010761C
}

// btm_sec_execute_procedure
void f_80107620(Ctx* __restrict c) {
  trace_call(0x80107620u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107620
  c->r[0]=c->lr; // 80107624
  c->r[4]=0u+0x803D0000u; // 80107628
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010762C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80107630
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80107634
  c->r[31]=0u+0x80330000u; // 80107638
  c->r[31]=c->r[31]+0xFFFFB5B0u; // 8010763C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80107640
  c->r[30]=c->r[3]|c->r[3]; // 80107644
  W32(c->r[1]+0x00000014u,c->r[29]); // 80107648
  c->r[0]=R8(c->r[4]+0x000027C0u); // 8010764C
  cmpu(c,0,c->r[0],0x00000004u); // 80107650
  if (crb(c,0)) { goto L_80107674; } // 80107654
  c->r[3]=0u+0x000D0000u; // 80107658
  c->r[5]=R8(c->r[30]+0x00000081u); // 8010765C
  c->r[6]=R8(c->r[30]+0x00000076u); // 80107660
  c->r[3]=c->r[3]+0x00000003u; // 80107664
  c->r[7]=R8(c->r[30]+0x0000007Fu); // 80107668
  c->r[4]=c->r[31]+0x000008ACu; // 8010766C
  c->lr=0x80107674u; f_800F72E0(c); // 80107670
L_80107674:;
  c->r[0]=R8(c->r[30]+0x0000007Fu); // 80107674
  cmps(c,0,(int32_t)c->r[0],0); // 80107678
  if (crb(c,2)) { goto L_80107688; } // 8010767C
  c->r[3]=0u+0x00000001u; // 80107680
  goto L_801079E4; // 80107684
L_80107688:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 80107688
  cmpu(c,1,c->r[0],0x0000FFFFu); // 8010768C
  if (!crb(c,6)) { goto L_801076F0; } // 80107690
  c->r[3]=c->r[30]+0x0000001Cu; // 80107694
  c->lr=0x8010769Cu; f_80113E48(c); // 80107698
  cmps(c,0,(int32_t)c->r[3],0); // 8010769C
  if (!crb(c,2)) { goto L_801076CC; } // 801076A0
  c->r[3]=0u+0x803D0000u; // 801076A4
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 801076A8
  cmpu(c,0,c->r[0],0x00000002u); // 801076AC
  if (crb(c,0)) { goto L_801076C4; } // 801076B0
  c->r[3]=0u+0x00080000u; // 801076B4
  c->r[4]=c->r[31]+0x000008ECu; // 801076B8
  c->r[3]=c->r[3]+0x00000001u; // 801076BC
  c->lr=0x801076C4u; f_800F7280(c); // 801076C0
L_801076C4:;
  c->r[3]=0u+0x00000003u; // 801076C4
  goto L_801079E4; // 801076C8
L_801076CC:;
  c->lr=0x801076D0u; f_801159AC(c); // 801076CC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801076D0
  if (!crb(c,2)) { goto L_801076E0; } // 801076D4
  c->r[3]=0u+0x00000003u; // 801076D8
  goto L_801079E4; // 801076DC
L_801076E0:;
  c->r[0]=0u+0x00000001u; // 801076E0
  c->r[3]=0u+0x00000001u; // 801076E4
  W8(c->r[30]+0x00000080u,c->r[0]); // 801076E8
  goto L_801079E4; // 801076EC
L_801076F0:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 801076F0
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801076F4
  if (!crb(c,2)) { goto L_80107780; } // 801076F8
  if (crb(c,6)) { goto L_80107780; } // 801076FC
  c->r[3]=0u+0x803D0000u; // 80107700
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107704
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80107708
  cmpu(c,0,c->r[0],0x00000004u); // 8010770C
  if (crb(c,0)) { goto L_80107724; } // 80107710
  c->r[3]=0u+0x000D0000u; // 80107714
  c->r[4]=c->r[31]+0x00000910u; // 80107718
  c->r[3]=c->r[3]+0x00000003u; // 8010771C
  c->lr=0x80107724u; f_800F7280(c); // 80107720
L_80107724:;
  c->r[29]=R8(c->r[30]+0x0000007Fu); // 80107724
  c->r[0]=0u+0x00000003u; // 80107728
  c->r[3]=c->r[30]+0x0000001Cu; // 8010772C
  c->r[4]=0u+0x00000000u; // 80107730
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 80107734
  c->r[5]=0u+0x00000002u; // 80107738
  c->r[6]=0u+0x0000001Eu; // 8010773C
  c->r[7]=0u+0x00000000u; // 80107740
  c->lr=0x80107748u; f_80102E5C(c); // 80107744
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80107748
  cmpu(c,0,c->r[0],0x00000001u); // 8010774C
  if (crb(c,2)) { goto L_80107760; } // 80107750
  W8(c->r[30]+0x0000007Fu,c->r[29]); // 80107754
  c->r[0]=0u+0x00000000u; // 80107758
  goto L_80107764; // 8010775C
L_80107760:;
  c->r[0]=0u+0x00000001u; // 80107760
L_80107764:;
  cmps(c,0,(int32_t)c->r[0],0); // 80107764
  if (crb(c,2)) { goto L_80107774; } // 80107768
  c->r[3]=0u+0x00000001u; // 8010776C
  goto L_801079E4; // 80107770
L_80107774:;
  c->r[0]=R8(c->r[30]+0x00000076u); // 80107774
  c->r[0]=c->r[0]|0x00000008u; // 80107778
  W8(c->r[30]+0x00000076u,c->r[0]); // 8010777C
L_80107780:;
  c->r[4]=R8(c->r[30]+0x00000076u); // 80107780
  c->r[0]=rotl(c->r[4],0)&0x00000002u; cr0(c,c->r[0]); // 80107784
  if (!crb(c,2)) { goto L_80107810; } // 80107788
  c->r[3]=R8(c->r[30]+0x00000080u); // 8010778C
  cmps(c,0,(int32_t)c->r[3],0); // 80107790
  if (crb(c,2)) { goto L_801077A4; } // 80107794
  c->r[0]=R8(c->r[30]+0x00000081u); // 80107798
  c->r[0]=rotl(c->r[0],0)&0x00000010u; cr0(c,c->r[0]); // 8010779C
  if (!crb(c,2)) { goto L_801077B8; } // 801077A0
L_801077A4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801077A4
  if (!crb(c,2)) { goto L_80107810; } // 801077A8
  c->r[0]=R8(c->r[30]+0x00000081u); // 801077AC
  c->r[0]=rotl(c->r[0],0)&0x00000002u; cr0(c,c->r[0]); // 801077B0
  if (crb(c,2)) { goto L_80107810; } // 801077B4
L_801077B8:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 801077B8
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801077BC
  if (crb(c,2)) { goto L_80107810; } // 801077C0
  c->r[3]=0u+0x803D0000u; // 801077C4
  c->r[3]=c->r[3]+0xFFFFA218u; // 801077C8
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801077CC
  cmpu(c,0,c->r[0],0x00000004u); // 801077D0
  if (crb(c,0)) { goto L_801077E8; } // 801077D4
  c->r[3]=0u+0x000D0000u; // 801077D8
  c->r[4]=c->r[31]+0x00000934u; // 801077DC
  c->r[3]=c->r[3]+0x00000003u; // 801077E0
  c->lr=0x801077E8u; f_800F7280(c); // 801077E4
L_801077E8:;
  c->r[0]=0u+0x00000001u; // 801077E8
  c->r[3]=R16(c->r[30]+0x00000018u); // 801077EC
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 801077F0
  c->lr=0x801077F8u; f_8010AB68(c); // 801077F4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801077F8
  if (!crb(c,2)) { goto L_80107808; } // 801077FC
  c->r[3]=0u+0x00000003u; // 80107800
  goto L_801079E4; // 80107804
L_80107808:;
  c->r[3]=0u+0x00000001u; // 80107808
  goto L_801079E4; // 8010780C
L_80107810:;
  c->r[0]=rotl(c->r[4],0)&0x00000004u; cr0(c,c->r[0]); // 80107810
  if (!crb(c,2)) { goto L_801078B4; } // 80107814
  c->r[3]=R8(c->r[30]+0x00000080u); // 80107818
  cmps(c,0,(int32_t)c->r[3],0); // 8010781C
  if (crb(c,2)) { goto L_80107830; } // 80107820
  c->r[0]=R8(c->r[30]+0x00000081u); // 80107824
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 80107828
  if (!crb(c,2)) { goto L_80107844; } // 8010782C
L_80107830:;
  cmps(c,0,(int32_t)c->r[3],0); // 80107830
  if (!crb(c,2)) { goto L_801078B4; } // 80107834
  c->r[0]=R8(c->r[30]+0x00000081u); // 80107838
  c->r[0]=rotl(c->r[0],0)&0x00000004u; cr0(c,c->r[0]); // 8010783C
  if (crb(c,2)) { goto L_801078B4; } // 80107840
L_80107844:;
  c->r[0]=R16(c->r[30]+0x00000018u); // 80107844
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80107848
  if (crb(c,2)) { goto L_801078B4; } // 8010784C
  c->r[3]=0u+0x803D0000u; // 80107850
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107854
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80107858
  cmpu(c,0,c->r[0],0x00000004u); // 8010785C
  if (crb(c,0)) { goto L_80107874; } // 80107860
  c->r[3]=0u+0x000D0000u; // 80107864
  c->r[4]=c->r[31]+0x0000095Cu; // 80107868
  c->r[3]=c->r[3]+0x00000003u; // 8010786C
  c->lr=0x80107874u; f_800F7280(c); // 80107870
L_80107874:;
  c->r[3]=R16(c->r[30]+0x00000018u); // 80107874
  c->r[4]=0u+0x00000001u; // 80107878
  c->lr=0x80107880u; f_8010ABE4(c); // 8010787C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80107880
  if (!crb(c,2)) { goto L_80107890; } // 80107884
  c->r[3]=0u+0x00000000u; // 80107888
  goto L_8010789C; // 8010788C
L_80107890:;
  c->r[0]=0u+0x00000002u; // 80107890
  c->r[3]=0u+0x00000001u; // 80107894
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 80107898
L_8010789C:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010789C
  if (!crb(c,2)) { goto L_801078AC; } // 801078A0
  c->r[3]=0u+0x00000003u; // 801078A4
  goto L_801079E4; // 801078A8
L_801078AC:;
  c->r[3]=0u+0x00000001u; // 801078AC
  goto L_801079E4; // 801078B0
L_801078B4:;
  c->r[0]=rotl(c->r[4],0)&0x00000001u; cr0(c,c->r[0]); // 801078B4
  if (!crb(c,2)) { goto L_80107984; } // 801078B8
  c->r[3]=R8(c->r[30]+0x00000080u); // 801078BC
  cmps(c,0,(int32_t)c->r[3],0); // 801078C0
  if (crb(c,2)) { goto L_801078D4; } // 801078C4
  c->r[0]=R8(c->r[30]+0x00000081u); // 801078C8
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 801078CC
  if (!crb(c,2)) { goto L_801078E8; } // 801078D0
L_801078D4:;
  cmps(c,0,(int32_t)c->r[3],0); // 801078D4
  if (!crb(c,2)) { goto L_80107984; } // 801078D8
  c->r[0]=R8(c->r[30]+0x00000081u); // 801078DC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 801078E0
  if (crb(c,2)) { goto L_80107984; } // 801078E4
L_801078E8:;
  c->r[3]=R32(c->r[30]+0x00000010u); // 801078E8
  c->r[0]=c->r[3]+0x00010000u; // 801078EC
  cmpu(c,0,c->r[0],0x0000FFFFu); // 801078F0
  if (crb(c,2)) { goto L_80107900; } // 801078F4
  c->r[0]=0u+0x00000000u; // 801078F8
  goto L_8010791C; // 801078FC
L_80107900:;
  c->r[3]=R32(c->r[30]+0x00000014u); // 80107900
  c->r[0]=c->r[3]+0x00010000u; // 80107904
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80107908
  if (crb(c,2)) { goto L_80107918; } // 8010790C
  c->r[0]=0u+0x00000000u; // 80107910
  goto L_8010791C; // 80107914
L_80107918:;
  c->r[0]=0u+0x00000001u; // 80107918
L_8010791C:;
  cmps(c,0,(int32_t)c->r[0],0); // 8010791C
  if (!crb(c,2)) { goto L_80107984; } // 80107920
  c->r[3]=R32(c->r[30]+0x00000000u); // 80107924
  c->r[3]=R8(c->r[3]+0x0000000Fu); // 80107928
  cmpu(c,0,c->r[3],0x0000002Eu); // 8010792C
  if (!crb(c,0)) { goto L_80107984; } // 80107930
  c->r[0]=rotl(c->r[3],29)&0x0000001Cu; // 80107934
  c->r[4]=rotl(c->r[3],0)&0x0000001Fu; // 80107938
  c->r[3]=c->r[30]+c->r[0]; // 8010793C
  c->r[5]=0u+0x00000001u; // 80107940
  c->r[0]=R32(c->r[3]+0x00000010u); // 80107944
  c->r[3]=((c->r[4])&0x20)?0u:(c->r[5]<<((c->r[4])&31)); // 80107948
  c->r[0]=c->r[3]&c->r[0]; cr0(c,c->r[0]); // 8010794C
  if (!crb(c,2)) { goto L_80107984; } // 80107950
  c->r[3]=0u+0x803D0000u; // 80107954
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107958
  c->r[0]=R8(c->r[3]+0x000027C0u); // 8010795C
  cmpu(c,0,c->r[0],0x00000004u); // 80107960
  if (crb(c,0)) { goto L_80107978; } // 80107964
  c->r[3]=0u+0x000D0000u; // 80107968
  c->r[4]=c->r[31]+0x00000980u; // 8010796C
  c->r[3]=c->r[3]+0x00000003u; // 80107970
  c->lr=0x80107978u; f_800F7280(c); // 80107974
L_80107978:;
  c->r[3]=c->r[30]|c->r[30]; // 80107978
  c->lr=0x80107980u; f_80107A00(c); // 8010797C
  goto L_801079E4; // 80107980
L_80107984:;
  c->r[0]=R8(c->r[30]+0x00000081u); // 80107984
  c->r[3]=0u+0x803D0000u; // 80107988
  c->r[3]=c->r[3]+0xFFFFA218u; // 8010798C
  c->r[0]=rotl(c->r[0],0)&0x000000C0u; // 80107990
  W8(c->r[30]+0x00000081u,c->r[0]); // 80107994
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80107998
  cmpu(c,0,c->r[0],0x00000004u); // 8010799C
  if (crb(c,0)) { goto L_801079BC; } // 801079A0
  c->r[3]=0u+0x000D0000u; // 801079A4
  c->r[5]=R32(c->r[30]+0x00000014u); // 801079A8
  c->r[6]=R32(c->r[30]+0x00000010u); // 801079AC
  c->r[3]=c->r[3]+0x00000003u; // 801079B0
  c->r[4]=c->r[31]+0x000009A8u; // 801079B4
  c->lr=0x801079BCu; f_800F72C0(c); // 801079B8
L_801079BC:;
  c->r[3]=0u+0x803D0000u; // 801079BC
  c->r[3]=c->r[3]+0xFFFFA218u; // 801079C0
  c->r[0]=R8(c->r[3]+0x000027C0u); // 801079C4
  cmpu(c,0,c->r[0],0x00000004u); // 801079C8
  if (crb(c,0)) { goto L_801079E0; } // 801079CC
  c->r[3]=0u+0x000D0000u; // 801079D0
  c->r[4]=c->r[31]+0x000009D0u; // 801079D4
  c->r[3]=c->r[3]+0x00000003u; // 801079D8
  c->lr=0x801079E0u; f_800F7280(c); // 801079DC
L_801079E0:;
  c->r[3]=0u+0x00000000u; // 801079E0
L_801079E4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801079E4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 801079E8
  c->r[30]=R32(c->r[1]+0x00000018u); // 801079EC
  c->r[29]=R32(c->r[1]+0x00000014u); // 801079F0
  c->lr=c->r[0]; // 801079F4
  c->r[1]=c->r[1]+0x00000020u; // 801079F8
  return; // 801079FC
}

// btm_sec_start_authorization
void f_80107A00(Ctx* __restrict c) {
  trace_call(0x80107A00u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107A00
  c->r[0]=c->lr; // 80107A04
  c->r[6]=0u+0x00000000u; // 80107A08
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107A0C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107A10
  W32(c->r[1]+0x00000008u,c->r[30]); // 80107A14
  c->r[30]=c->r[3]|c->r[3]; // 80107A18
  c->r[0]=R8(c->r[3]+0x00000076u); // 80107A1C
  c->r[0]=rotl(c->r[0],0)&0x00000008u; cr0(c,c->r[0]); // 80107A20
  if (!crb(c,2)) { goto L_80107A34; } // 80107A24
  c->r[0]=R16(c->r[3]+0x00000018u); // 80107A28
  cmpu(c,0,c->r[0],0x0000FFFFu); // 80107A2C
  if (!crb(c,2)) { goto L_80107ACC; } // 80107A30
L_80107A34:;
  c->r[4]=0u+0x803D0000u; // 80107A34
  c->r[4]=c->r[4]+0xFFFFA218u; // 80107A38
  c->r[0]=R32(c->r[4]+0x0000190Cu); // 80107A3C
  cmps(c,0,(int32_t)c->r[0],0); // 80107A40
  if (!crb(c,2)) { goto L_80107A50; } // 80107A44
  c->r[3]=0u+0x00000004u; // 80107A48
  goto L_80107B04; // 80107A4C
L_80107A50:;
  c->r[4]=R32(c->r[3]+0x00000000u); // 80107A50
  cmps(c,0,(int32_t)c->r[4],0); // 80107A54
  if (crb(c,2)) { goto L_80107A7C; } // 80107A58
  c->r[0]=R8(c->r[3]+0x00000080u); // 80107A5C
  cmps(c,0,(int32_t)c->r[0],0); // 80107A60
  if (crb(c,2)) { goto L_80107A70; } // 80107A64
  c->r[6]=c->r[4]+0x00000010u; // 80107A68
  goto L_80107A74; // 80107A6C
L_80107A70:;
  c->r[6]=c->r[4]+0x00000026u; // 80107A70
L_80107A74:;
  c->r[7]=R8(c->r[4]+0x0000000Fu); // 80107A74
  goto L_80107A80; // 80107A78
L_80107A7C:;
  c->r[7]=0u+0x00000000u; // 80107A7C
L_80107A80:;
  c->r[0]=0u+0x00000004u; // 80107A80
  c->r[4]=0u+0x803D0000u; // 80107A84
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 80107A88
  c->r[4]=c->r[4]+0xFFFFA218u; // 80107A8C
  c->r[5]=c->r[3]+0x00000035u; // 80107A90
  c->r[8]=R8(c->r[3]+0x00000080u); // 80107A94
  c->r[12]=R32(c->r[4]+0x0000190Cu); // 80107A98
  c->r[4]=c->r[3]+0x00000022u; // 80107A9C
  c->ctr=c->r[12]; // 80107AA0
  c->r[3]=c->r[3]+0x0000001Cu; // 80107AA4
  if (true) { c->lr=0x80107AACu; dispatch(c,c->ctr); } // 80107AA8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80107AAC
  if (!crb(c,2)) { goto L_80107B04; } // 80107AB0
  c->r[4]=R8(c->r[30]+0x00000076u); // 80107AB4
  c->r[0]=0u+0x00000000u; // 80107AB8
  W8(c->r[30]+0x0000007Fu,c->r[0]); // 80107ABC
  c->r[0]=c->r[4]|0x00000001u; // 80107AC0
  W8(c->r[30]+0x00000076u,c->r[0]); // 80107AC4
  goto L_80107B04; // 80107AC8
L_80107ACC:;
  c->r[31]=R8(c->r[3]+0x0000007Fu); // 80107ACC
  c->r[0]=0u+0x00000003u; // 80107AD0
  c->r[4]=0u+0x00000000u; // 80107AD4
  c->r[5]=0u+0x00000002u; // 80107AD8
  W8(c->r[3]+0x0000007Fu,c->r[0]); // 80107ADC
  c->r[6]=0u+0x0000001Eu; // 80107AE0
  c->r[7]=0u+0x00000000u; // 80107AE4
  c->r[3]=c->r[3]+0x0000001Cu; // 80107AE8
  c->lr=0x80107AF0u; f_80102E5C(c); // 80107AEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80107AF0
  cmpu(c,0,c->r[0],0x00000001u); // 80107AF4
  if (crb(c,2)) { goto L_80107B00; } // 80107AF8
  W8(c->r[30]+0x0000007Fu,c->r[31]); // 80107AFC
L_80107B00:;
  c->r[3]=0u+0x00000001u; // 80107B00
L_80107B04:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107B04
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107B08
  c->r[30]=R32(c->r[1]+0x00000008u); // 80107B0C
  c->lr=c->r[0]; // 80107B10
  c->r[1]=c->r[1]+0x00000010u; // 80107B14
  return; // 80107B18
}

// btm_sec_collision_timeout
void f_80107B1C(Ctx* __restrict c) {
  trace_call(0x80107B1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107B1C
  c->r[0]=c->lr; // 80107B20
  c->r[3]=0u+0x803D0000u; // 80107B24
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107B28
  c->r[3]=c->r[3]+0xFFFFA218u; // 80107B2C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80107B30
  W32(c->r[1]+0x00000008u,c->r[30]); // 80107B34
  c->r[0]=R8(c->r[3]+0x000027C0u); // 80107B38
  cmpu(c,0,c->r[0],0x00000004u); // 80107B3C
  if (crb(c,0)) { goto L_80107B58; } // 80107B40
  c->r[3]=0u+0x000D0000u; // 80107B44
  c->r[4]=0u+0x80330000u; // 80107B48
  c->r[3]=c->r[3]+0x00000003u; // 80107B4C
  c->r[4]=c->r[4]+0xFFFFBFA4u; // 80107B50
  c->lr=0x80107B58u; f_800F7280(c); // 80107B54
L_80107B58:;
  c->r[31]=0u+0x803D0000u; // 80107B58
  c->r[30]=0u+0x00000000u; // 80107B5C
  c->r[31]=c->r[31]+0xFFFFA218u; // 80107B60
  W32(c->r[31]+0x0000196Cu,c->r[30]); // 80107B64
  c->r[3]=R32(c->r[31]+0x00001938u); // 80107B68
  c->lr=0x80107B70u; f_80107620(c); // 80107B6C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80107B70
  cmpu(c,0,c->r[0],0x00000001u); // 80107B74
  if (crb(c,2)) { goto L_80107BE4; } // 80107B78
  c->r[4]=R32(c->r[31]+0x00001938u); // 80107B7C
  c->r[0]=R32(c->r[4]+0x00000004u); // 80107B80
  cmps(c,0,(int32_t)c->r[0],0); // 80107B84
  if (crb(c,2)) { goto L_80107BE4; } // 80107B88
  c->r[0]=R8(c->r[4]+0x00000080u); // 80107B8C
  cmps(c,0,(int32_t)c->r[0],0); // 80107B90
  if (crb(c,2)) { goto L_80107BB4; } // 80107B94
  c->r[4]=R32(c->r[4]+0x00000000u); // 80107B98
  cmps(c,0,(int32_t)c->r[4],0); // 80107B9C
  if (crb(c,2)) { goto L_80107BB4; } // 80107BA0
  c->r[0]=R32(c->r[4]+0x00000000u); // 80107BA4
  cmpu(c,0,c->r[0],0x00000003u); // 80107BA8
  if (!crb(c,2)) { goto L_80107BB4; } // 80107BAC
  W32(c->r[4]+0x00000004u,c->r[30]); // 80107BB0
L_80107BB4:;
  c->r[31]=0u+0x803D0000u; // 80107BB4
  c->r[5]=rotl(c->r[3],0)&0x000000FFu; // 80107BB8
  c->r[31]=c->r[31]+0xFFFFA218u; // 80107BBC
  c->r[4]=R32(c->r[31]+0x00001938u); // 80107BC0
  c->r[12]=R32(c->r[4]+0x00000004u); // 80107BC4
  c->r[3]=c->r[4]+0x0000001Cu; // 80107BC8
  c->r[4]=R32(c->r[4]+0x00000008u); // 80107BCC
  c->ctr=c->r[12]; // 80107BD0
  if (true) { c->lr=0x80107BD8u; dispatch(c,c->ctr); } // 80107BD4
  c->r[3]=R32(c->r[31]+0x00001938u); // 80107BD8
  c->r[0]=0u+0x00000000u; // 80107BDC
  W32(c->r[3]+0x00000004u,c->r[0]); // 80107BE0
L_80107BE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107BE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80107BE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 80107BEC
  c->lr=c->r[0]; // 80107BF0
  c->r[1]=c->r[1]+0x00000010u; // 80107BF4
  return; // 80107BF8
}

// btm_read_trusted_mask
void f_80107BFC(Ctx* __restrict c) {
  trace_call(0x80107BFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107BFC
  c->r[0]=c->lr; // 80107C00
  W32(c->r[1]+0x00000014u,c->r[0]); // 80107C04
  c->lr=0x80107C0Cu; f_800FF9D0(c); // 80107C08
  cmps(c,0,(int32_t)c->r[3],0); // 80107C0C
  if (crb(c,2)) { goto L_80107C1C; } // 80107C10
  c->r[3]=c->r[3]+0x00000010u; // 80107C14
  goto L_80107C20; // 80107C18
L_80107C1C:;
  c->r[3]=0u+0x00000000u; // 80107C1C
L_80107C20:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80107C20
  c->lr=c->r[0]; // 80107C24
  c->r[1]=c->r[1]+0x00000010u; // 80107C28
  return; // 80107C2C
}

// btu_hcif_process_event
void f_80107C30(Ctx* __restrict c) {
  trace_call(0x80107C30u);
  {uint32_t ea=c->r[1]+0xFFFFFFC0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80107C30
  c->r[0]=c->lr; // 80107C34
  c->r[4]=0u+0x803D0000u; // 80107C38
  W32(c->r[1]+0x00000044u,c->r[0]); // 80107C3C
  c->r[4]=c->r[4]+0xFFFFA218u; // 80107C40
  W32(c->r[1]+0x0000003Cu,c->r[31]); // 80107C44
  W32(c->r[1]+0x00000038u,c->r[30]); // 80107C48
  W32(c->r[1]+0x00000034u,c->r[29]); // 80107C4C
  W32(c->r[1]+0x00000030u,c->r[28]); // 80107C50
  c->r[5]=R16(c->r[3]+0x00000004u); // 80107C54
  c->r[0]=R8(c->r[4]+0x0000064Eu); // 80107C58
  c->r[7]=c->r[3]+c->r[5]; // 80107C5C
  cmps(c,0,(int32_t)c->r[0],0); // 80107C60
  c->r[3]=R8(c->r[7]+0x00000008u); // 80107C64
  c->r[4]=R8(c->r[7]+0x00000009u); // 80107C68
  if (!crb(c,2)) { goto L_80107C80; } // 80107C6C
  cmpu(c,0,c->r[3],0x0000000Eu); // 80107C70
  if (crb(c,2)) { goto L_80107C80; } // 80107C74
  cmpu(c,0,c->r[3],0x0000000Fu); // 80107C78
  if (!crb(c,2)) { goto L_801081C8; } // 80107C7C
L_80107C80:;
  cmps(c,0,(int32_t)c->r[3],20); // 80107C80
  if (crb(c,2)) { goto L_80107FE4; } // 80107C84
  if (!crb(c,0)) { goto L_80107D1C; } // 80107C88
  cmps(c,0,(int32_t)c->r[3],10); // 80107C8C
  if (crb(c,2)) { goto L_80107EF0; } // 80107C90
  if (!crb(c,0)) { goto L_80107CE0; } // 80107C94
  cmps(c,0,(int32_t)c->r[3],5); // 80107C98
  if (crb(c,2)) { goto L_80107DE4; } // 80107C9C
  if (!crb(c,0)) { goto L_80107CC8; } // 80107CA0
  cmps(c,0,(int32_t)c->r[3],2); // 80107CA4
  if (crb(c,2)) { goto L_80107DAC; } // 80107CA8
  if (!crb(c,0)) { goto L_80107CBC; } // 80107CAC
  cmps(c,0,(int32_t)c->r[3],1); // 80107CB0
  if (!crb(c,0)) { goto L_80107DA0; } // 80107CB4
  goto L_801081C8; // 80107CB8
L_80107CBC:;
  cmps(c,0,(int32_t)c->r[3],4); // 80107CBC
  if (!crb(c,0)) { goto L_80107DD8; } // 80107CC0
  goto L_80107DCC; // 80107CC4
L_80107CC8:;
  cmps(c,0,(int32_t)c->r[3],8); // 80107CC8
  if (crb(c,2)) { goto L_80107EB0; } // 80107CCC
  if (!crb(c,0)) { goto L_801081C8; } // 80107CD0
  cmps(c,0,(int32_t)c->r[3],7); // 80107CD4
  if (!crb(c,0)) { goto L_80107E4C; } // 80107CD8
  goto L_80107E2C; // 80107CDC
L_80107CE0:;
  cmps(c,0,(int32_t)c->r[3],15); // 80107CE0
  if (crb(c,2)) { goto L_80107F44; } // 80107CE4
  if (!crb(c,0)) { goto L_80107D04; } // 80107CE8
  cmps(c,0,(int32_t)c->r[3],13); // 80107CEC
  if (crb(c,2)) { goto L_80107F2C; } // 80107CF0
  if (!crb(c,0)) { goto L_80107F38; } // 80107CF4
  cmps(c,0,(int32_t)c->r[3],12); // 80107CF8
  if (!crb(c,0)) { goto L_80107F20; } // 80107CFC
  goto L_80107F14; // 80107D00
L_80107D04:;
  cmps(c,0,(int32_t)c->r[3],18); // 80107D04
  if (crb(c,2)) { goto L_80107F78; } // 80107D08
  if (!crb(c,0)) { goto L_80107FD8; } // 80107D0C
  cmps(c,0,(int32_t)c->r[3],17); // 80107D10
  if (!crb(c,0)) { goto L_801081C8; } // 80107D14
  goto L_80107F50; // 80107D18
L_80107D1C:;
  cmps(c,0,(int32_t)c->r[3],33); // 80107D1C
  if (crb(c,2)) { goto L_801081C8; } // 80107D20
  if (!crb(c,0)) { goto L_80107D64; } // 80107D24
  cmps(c,0,(int32_t)c->r[3],28); // 80107D28
  if (crb(c,2)) { goto L_801080F8; } // 80107D2C
  if (!crb(c,0)) { goto L_80107D58; } // 80107D30
  cmps(c,0,(int32_t)c->r[3],23); // 80107D34
  if (crb(c,2)) { goto L_801080B0; } // 80107D38
  if (!crb(c,0)) { goto L_80107D4C; } // 80107D3C
  cmps(c,0,(int32_t)c->r[3],22); // 80107D40
  if (!crb(c,0)) { goto L_8010806C; } // 80107D44
  goto L_8010804C; // 80107D48
L_80107D4C:;
  cmps(c,0,(int32_t)c->r[3],25); // 80107D4C
  if (!crb(c,0)) { goto L_801081C8; } // 80107D50
  goto L_801080EC; // 80107D54
L_80107D58:;
  cmps(c,0,(int32_t)c->r[3],30); // 80107D58
  if (crb(c,2)) { goto L_80108148; } // 80107D5C
  goto L_801081C8; // 80107D60
L_80107D64:;
  cmps(c,0,(int32_t)c->r[3],239); // 80107D64
  if (crb(c,2)) { goto L_801081C0; } // 80107D68
  if (!crb(c,0)) { goto L_80107D94; } // 80107D6C
  cmps(c,0,(int32_t)c->r[3],44); // 80107D70
  if (crb(c,2)) { goto L_80108164; } // 80107D74
  if (!crb(c,0)) { goto L_80107D88; } // 80107D78
  cmps(c,0,(int32_t)c->r[3],35); // 80107D7C
  if (!crb(c,0)) { goto L_801081C8; } // 80107D80
  goto L_80107DBC; // 80107D84
L_80107D88:;
  cmps(c,0,(int32_t)c->r[3],46); // 80107D88
  if (!crb(c,0)) { goto L_801081C8; } // 80107D8C
  goto L_80108170; // 80107D90
L_80107D94:;
  cmps(c,0,(int32_t)c->r[3],255); // 80107D94
  if (crb(c,2)) { goto L_801081C0; } // 80107D98
  goto L_801081C8; // 80107D9C
L_80107DA0:;
  c->r[3]=R8(c->r[7]+0x0000000Au); // 80107DA0
  c->lr=0x80107DA8u; f_80102D58(c); // 80107DA4
  goto L_801081C8; // 80107DA8
L_80107DAC:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107DAC
  c->r[4]=0u+0x00000000u; // 80107DB0
  c->lr=0x80107DB8u; f_80102AE0(c); // 80107DB4
  goto L_801081C8; // 80107DB8
L_80107DBC:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107DBC
  c->r[4]=0u+0x00000001u; // 80107DC0
  c->lr=0x80107DC8u; f_80102AE0(c); // 80107DC4
  goto L_801081C8; // 80107DC8
L_80107DCC:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107DCC
  c->lr=0x80107DD4u; f_80108374(c); // 80107DD0
  goto L_801081C8; // 80107DD4
L_80107DD8:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107DD8
  c->lr=0x80107DE0u; f_80108450(c); // 80107DDC
  goto L_801081C8; // 80107DE0
L_80107DE4:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80107DE4
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 80107DE8
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80107DEC
  c->r[31]=R8(c->r[7]+0x0000000Du); // 80107DF0
  c->r[0]=c->r[3]+c->r[0]; // 80107DF4
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 80107DF8
  c->r[4]=c->r[31]|c->r[31]; // 80107DFC
  c->r[3]=c->r[28]|c->r[28]; // 80107E00
  c->lr=0x80107E08u; f_801120CC(c); // 80107E04
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80107E08
  if (!crb(c,2)) { goto L_80107E1C; } // 80107E0C
  c->r[3]=c->r[28]|c->r[28]; // 80107E10
  c->r[4]=c->r[31]|c->r[31]; // 80107E14
  c->lr=0x80107E1Cu; f_8010469C(c); // 80107E18
L_80107E1C:;
  c->r[3]=c->r[28]|c->r[28]; // 80107E1C
  c->r[4]=c->r[31]|c->r[31]; // 80107E20
  c->lr=0x80107E28u; f_80106DE8(c); // 80107E24
  goto L_801081C8; // 80107E28
L_80107E2C:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80107E2C
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 80107E30
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80107E34
  c->r[4]=R8(c->r[7]+0x0000000Au); // 80107E38
  c->r[0]=c->r[3]+c->r[0]; // 80107E3C
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80107E40
  c->lr=0x80107E48u; f_801062F0(c); // 80107E44
  goto L_801081C8; // 80107E48
L_80107E4C:;
  c->r[30]=R8(c->r[7]+0x0000000Au); // 80107E4C
  c->r[0]=c->r[4]+0xFFFFFFF9u; // 80107E50
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 80107E54
  c->r[31]=c->r[7]+0x00000011u; // 80107E58
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80107E5C
  c->r[6]=c->r[30]|c->r[30]; // 80107E60
  W8(c->r[1]+0x00000025u,c->r[3]); // 80107E64
  c->r[4]=c->r[31]|c->r[31]; // 80107E68
  c->r[3]=c->r[1]+0x00000020u; // 80107E6C
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80107E70
  W8(c->r[1]+0x00000024u,c->r[0]); // 80107E74
  c->r[0]=R8(c->r[7]+0x0000000Du); // 80107E78
  W8(c->r[1]+0x00000023u,c->r[0]); // 80107E7C
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 80107E80
  W8(c->r[1]+0x00000022u,c->r[0]); // 80107E84
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 80107E88
  W8(c->r[1]+0x00000021u,c->r[0]); // 80107E8C
  c->r[0]=R8(c->r[7]+0x00000010u); // 80107E90
  W8(c->r[1]+0x00000020u,c->r[0]); // 80107E94
  c->lr=0x80107E9Cu; f_80102FAC(c); // 80107E98
  c->r[4]=c->r[31]|c->r[31]; // 80107E9C
  c->r[5]=c->r[30]|c->r[30]; // 80107EA0
  c->r[3]=c->r[1]+0x00000020u; // 80107EA4
  c->lr=0x80107EACu; f_80106008(c); // 80107EA8
  goto L_801081C8; // 80107EAC
L_80107EB0:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80107EB0
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 80107EB4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80107EB8
  c->r[29]=R8(c->r[7]+0x0000000Au); // 80107EBC
  c->r[0]=c->r[3]+c->r[0]; // 80107EC0
  c->r[30]=R8(c->r[7]+0x0000000Du); // 80107EC4
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80107EC8
  c->r[4]=c->r[29]|c->r[29]; // 80107ECC
  c->r[3]=c->r[31]|c->r[31]; // 80107ED0
  c->r[5]=c->r[30]|c->r[30]; // 80107ED4
  c->lr=0x80107EDCu; f_800FDED8(c); // 80107ED8
  c->r[3]=c->r[31]|c->r[31]; // 80107EDC
  c->r[4]=c->r[29]|c->r[29]; // 80107EE0
  c->r[5]=c->r[30]|c->r[30]; // 80107EE4
  c->lr=0x80107EECu; f_80106730(c); // 80107EE8
  goto L_801081C8; // 80107EEC
L_80107EF0:;
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80107EF0
  c->r[3]=R8(c->r[7]+0x0000000Bu); // 80107EF4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80107EF8
  c->r[4]=R8(c->r[7]+0x0000000Au); // 80107EFC
  c->r[0]=c->r[3]+c->r[0]; // 80107F00
  c->r[5]=R8(c->r[7]+0x0000000Du); // 80107F04
  c->r[3]=rotl(c->r[0],0)&0x0000FFFFu; // 80107F08
  c->lr=0x80107F10u; f_80106634(c); // 80107F0C
  goto L_801081C8; // 80107F10
L_80107F14:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107F14
  c->lr=0x80107F1Cu; f_800FE3D8(c); // 80107F18
  goto L_801081C8; // 80107F1C
L_80107F20:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107F20
  c->lr=0x80107F28u; f_800FE34C(c); // 80107F24
  goto L_801081C8; // 80107F28
L_80107F2C:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107F2C
  c->lr=0x80107F34u; f_801084DC(c); // 80107F30
  goto L_801081C8; // 80107F34
L_80107F38:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107F38
  c->lr=0x80107F40u; f_80108814(c); // 80107F3C
  goto L_801081C8; // 80107F40
L_80107F44:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107F44
  c->lr=0x80107F4Cu; f_80108B2C(c); // 80107F48
  goto L_801081C8; // 80107F4C
L_80107F50:;
  c->r[4]=0u+0x80330000u; // 80107F50
  c->r[3]=0u+0x00070000u; // 80107F54
  c->r[4]=c->r[4]+0xFFFFBFC0u; // 80107F58
  c->lr=0x80107F60u; f_800F7280(c); // 80107F5C
  c->lr=0x80107F64u; f_800FFE84(c); // 80107F60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80107F64
  if (crb(c,2)) { goto L_801081C8; } // 80107F68
  c->r[3]=0u+0x00000000u; // 80107F6C
  c->lr=0x80107F74u; f_800FFD40(c); // 80107F70
  goto L_801081C8; // 80107F74
L_80107F78:;
  c->r[29]=R8(c->r[7]+0x0000000Au); // 80107F78
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 80107F7C
  cmps(c,0,(int32_t)c->r[29],0); // 80107F80
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80107F84
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80107F88
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80107F8C
  c->r[0]=R8(c->r[7]+0x0000000Du); // 80107F90
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80107F94
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 80107F98
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80107F9C
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 80107FA0
  W8(c->r[1]+0x00000019u,c->r[0]); // 80107FA4
  c->r[0]=R8(c->r[7]+0x00000010u); // 80107FA8
  W8(c->r[1]+0x00000018u,c->r[0]); // 80107FAC
  c->r[31]=R8(c->r[7]+0x00000011u); // 80107FB0
  if (!crb(c,2)) { goto L_80107FC4; } // 80107FB4
  c->r[4]=c->r[31]|c->r[31]; // 80107FB8
  c->r[3]=c->r[1]+0x00000018u; // 80107FBC
  c->lr=0x80107FC4u; f_80112C0C(c); // 80107FC0
L_80107FC4:;
  c->r[3]=c->r[29]|c->r[29]; // 80107FC4
  c->r[5]=c->r[31]|c->r[31]; // 80107FC8
  c->r[4]=c->r[1]+0x00000018u; // 80107FCC
  c->lr=0x80107FD4u; f_800FE890(c); // 80107FD0
  goto L_801081C8; // 80107FD4
L_80107FD8:;
  c->r[3]=c->r[7]+0x0000000Au; // 80107FD8
  c->lr=0x80107FE0u; f_801128D8(c); // 80107FDC
  goto L_801081C8; // 80107FE0
L_80107FE4:;
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 80107FE4
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 80107FE8
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 80107FEC
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 80107FF0
  c->r[3]=R8(c->r[7]+0x0000000Eu); // 80107FF4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80107FF8
  c->r[4]=c->r[5]+c->r[4]; // 80107FFC
  c->r[30]=R8(c->r[7]+0x0000000Du); // 80108000
  c->r[31]=rotl(c->r[4],0)&0x0000FFFFu; // 80108004
  c->r[0]=c->r[3]+c->r[0]; // 80108008
  c->r[28]=R8(c->r[7]+0x0000000Au); // 8010800C
  c->r[4]=c->r[31]|c->r[31]; // 80108010
  c->r[5]=c->r[30]|c->r[30]; // 80108014
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 80108018
  c->r[3]=c->r[28]|c->r[28]; // 8010801C
  c->lr=0x80108024u; f_80104054(c); // 80108020
  c->r[3]=c->r[28]|c->r[28]; // 80108024
  c->r[4]=c->r[31]|c->r[31]; // 80108028
  c->r[5]=c->r[30]|c->r[30]; // 8010802C
  c->r[6]=c->r[29]|c->r[29]; // 80108030
  c->lr=0x80108038u; f_80103C0C(c); // 80108034
  c->r[3]=c->r[28]|c->r[28]; // 80108038
  c->r[4]=c->r[30]|c->r[30]; // 8010803C
  c->r[5]=c->r[29]|c->r[29]; // 80108040
  c->lr=0x80108048u; f_8010CC80(c); // 80108044
  goto L_801081C8; // 80108048
L_8010804C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 8010804C
  cmps(c,0,(int32_t)c->r[0],0); // 80108050
  if (crb(c,2)) { goto L_801081C8; } // 80108054
  c->r[0]=0u+0x00000001u; // 80108058
  c->r[3]=c->r[7]+0x00000009u; // 8010805C
  W8(c->r[7]+0x00000009u,c->r[0]); // 80108060
  c->lr=0x80108068u; f_801013CC(c); // 80108064
  goto L_801081C8; // 80108068
L_8010806C:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 8010806C
  c->r[3]=c->r[1]+0x00000010u; // 80108070
  W8(c->r[1]+0x00000015u,c->r[0]); // 80108074
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 80108078
  W8(c->r[1]+0x00000014u,c->r[0]); // 8010807C
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 80108080
  W8(c->r[1]+0x00000013u,c->r[0]); // 80108084
  c->r[0]=R8(c->r[7]+0x0000000Du); // 80108088
  W8(c->r[1]+0x00000012u,c->r[0]); // 8010808C
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 80108090
  W8(c->r[1]+0x00000011u,c->r[0]); // 80108094
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 80108098
  W8(c->r[1]+0x00000010u,c->r[0]); // 8010809C
  c->lr=0x801080A4u; f_80112DD4(c); // 801080A0
  c->r[3]=c->r[1]+0x00000010u; // 801080A4
  c->lr=0x801080ACu; f_80107274(c); // 801080A8
  goto L_801081C8; // 801080AC
L_801080B0:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801080B0
  c->r[3]=c->r[1]+0x00000008u; // 801080B4
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801080B8
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 801080BC
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801080C0
  c->r[0]=R8(c->r[7]+0x0000000Cu); // 801080C4
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801080C8
  c->r[0]=R8(c->r[7]+0x0000000Du); // 801080CC
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801080D0
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 801080D4
  W8(c->r[1]+0x00000009u,c->r[0]); // 801080D8
  c->r[0]=R8(c->r[7]+0x0000000Fu); // 801080DC
  W8(c->r[1]+0x00000008u,c->r[0]); // 801080E0
  c->lr=0x801080E8u; f_801070D0(c); // 801080E4
  goto L_801081C8; // 801080E8
L_801080EC:;
  c->r[3]=c->r[7]+0x0000000Au; // 801080EC
  c->lr=0x801080F4u; f_80108DAC(c); // 801080F0
  goto L_801081C8; // 801080F4
L_801080F8:;
  c->r[0]=R8(c->r[7]+0x0000000Au); // 801080F8
  cmps(c,0,(int32_t)c->r[0],0); // 801080FC
  if (!crb(c,2)) { goto L_801081C8; } // 80108100
  c->r[3]=R8(c->r[7]+0x0000000Cu); // 80108104
  c->r[0]=R8(c->r[7]+0x0000000Eu); // 80108108
  c->r[4]=rotl(c->r[3],8)&0xFFFFFF00u; // 8010810C
  c->r[5]=R8(c->r[7]+0x0000000Bu); // 80108110
  c->r[3]=R8(c->r[7]+0x0000000Du); // 80108114
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108118
  c->r[4]=c->r[5]+c->r[4]; // 8010811C
  c->r[0]=c->r[3]+c->r[0]; // 80108120
  c->r[29]=rotl(c->r[4],0)&0x00000FFFu; // 80108124
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 80108128
  c->r[3]=c->r[29]|c->r[29]; // 8010812C
  c->r[4]=c->r[28]|c->r[28]; // 80108130
  c->lr=0x80108138u; f_800FE7F4(c); // 80108134
  c->r[3]=c->r[29]|c->r[29]; // 80108138
  c->r[4]=c->r[28]|c->r[28]; // 8010813C
  c->lr=0x80108144u; f_801075D0(c); // 80108140
  goto L_801081C8; // 80108144
L_80108148:;
  c->r[0]=R8(c->r[7]+0x0000000Bu); // 80108148
  c->r[3]=R8(c->r[7]+0x0000000Au); // 8010814C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108150
  c->r[0]=c->r[3]+c->r[0]; // 80108154
  c->r[3]=rotl(c->r[0],0)&0x00000FFFu; // 80108158
  c->lr=0x80108160u; f_80112188(c); // 8010815C
  goto L_801081C8; // 80108160
L_80108164:;
  c->r[3]=c->r[7]+0x0000000Au; // 80108164
  c->lr=0x8010816Cu; f_801085DC(c); // 80108168
  goto L_801081C8; // 8010816C
L_80108170:;
  c->r[4]=R8(c->r[7]+0x0000000Cu); // 80108170
  c->r[3]=R8(c->r[7]+0x00000010u); // 80108174
  c->r[0]=R8(c->r[7]+0x00000012u); // 80108178
  c->r[6]=rotl(c->r[4],8)&0xFFFFFF00u; // 8010817C
  c->r[8]=R8(c->r[7]+0x0000000Bu); // 80108180
  c->r[3]=rotl(c->r[3],8)&0xFFFFFF00u; // 80108184
  c->r[5]=R8(c->r[7]+0x0000000Fu); // 80108188
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8010818C
  c->r[9]=c->r[8]+c->r[6]; // 80108190
  c->r[4]=R8(c->r[7]+0x00000011u); // 80108194
  c->r[8]=c->r[5]+c->r[3]; // 80108198
  c->r[3]=R8(c->r[7]+0x0000000Au); // 8010819C
  c->r[0]=c->r[4]+c->r[0]; // 801081A0
  c->r[5]=R8(c->r[7]+0x0000000Du); // 801081A4
  c->r[6]=R8(c->r[7]+0x0000000Eu); // 801081A8
  c->r[7]=rotl(c->r[8],0)&0x0000FFFFu; // 801081AC
  c->r[4]=rotl(c->r[9],0)&0x0000FFFFu; // 801081B0
  c->r[8]=rotl(c->r[0],0)&0x0000FFFFu; // 801081B4
  c->lr=0x801081BCu; f_80104A10(c); // 801081B8
  goto L_801081C8; // 801081BC
L_801081C0:;
  c->r[3]=c->r[7]+0x0000000Au; // 801081C0
  c->lr=0x801081C8u; f_80100EDC(c); // 801081C4
L_801081C8:;
  c->r[0]=R32(c->r[1]+0x00000044u); // 801081C8
  c->r[31]=R32(c->r[1]+0x0000003Cu); // 801081CC
  c->r[30]=R32(c->r[1]+0x00000038u); // 801081D0
  c->r[29]=R32(c->r[1]+0x00000034u); // 801081D4
  c->r[28]=R32(c->r[1]+0x00000030u); // 801081D8
  c->lr=c->r[0]; // 801081DC
  c->r[1]=c->r[1]+0x00000040u; // 801081E0
  return; // 801081E4
}

// btu_hcif_send_cmd
void f_801081E8(Ctx* __restrict c) {
  trace_call(0x801081E8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801081E8
  c->r[0]=c->lr; // 801081EC
  cmps(c,0,(int32_t)c->r[3],0); // 801081F0
  W32(c->r[1]+0x00000024u,c->r[0]); // 801081F4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 801081F8
  c->r[31]=c->r[3]|c->r[3]; // 801081FC
  W32(c->r[1]+0x00000018u,c->r[30]); // 80108200
  W32(c->r[1]+0x00000014u,c->r[29]); // 80108204
  if (crb(c,2)) { goto L_80108230; } // 80108208
  c->r[3]=0u+0x803D0000u; // 8010820C
  c->r[3]=c->r[3]+0xFFFF9CF0u; // 80108210
  c->r[0]=R16(c->r[3]+0x0000006Cu); // 80108214
  cmps(c,0,(int32_t)c->r[0],0); // 80108218
  if (crb(c,2)) { goto L_80108230; } // 8010821C
  c->r[4]=c->r[31]|c->r[31]; // 80108220
  c->r[3]=c->r[3]+0x00000064u; // 80108224
  c->lr=0x8010822Cu; f_800F4BF0(c); // 80108228
  c->r[31]=0u+0x00000000u; // 8010822C
L_80108230:;
  c->r[4]=0u+0x803D0000u; // 80108230
  c->r[4]=c->r[4]+0xFFFF9CF0u; // 80108234
  c->r[0]=R16(c->r[4]+0x00000080u); // 80108238
  cmps(c,0,(int32_t)c->r[0],0); // 8010823C
  if (!crb(c,2)) { goto L_80108264; } // 80108240
  c->r[3]=0u+0x803D0000u; // 80108244
  c->r[3]=c->r[3]+0xFFFFA218u; // 80108248
  c->r[0]=R8(c->r[3]+0x0000064Eu); // 8010824C
  cmps(c,0,(int32_t)c->r[0],0); // 80108250
  if (!crb(c,2)) { goto L_80108264; } // 80108254
  c->r[3]=R16(c->r[4]+0x0000006Cu); // 80108258
  c->r[0]=c->r[3]+0x00000001u; // 8010825C
  W16(c->r[4]+0x00000080u,c->r[0]); // 80108260
L_80108264:;
  c->r[3]=0u+0x803D0000u; // 80108264
  c->r[30]=c->r[3]+0xFFFF9CF0u; // 80108268
  goto L_80108330; // 8010826C
L_80108270:;
  cmps(c,0,(int32_t)c->r[31],0); // 80108270
  if (!crb(c,2)) { goto L_80108284; } // 80108274
  c->r[3]=c->r[30]+0x00000064u; // 80108278
  c->lr=0x80108280u; f_800F4E70(c); // 8010827C
  c->r[31]=c->r[3]|c->r[3]; // 80108280
L_80108284:;
  cmps(c,0,(int32_t)c->r[31],0); // 80108284
  if (crb(c,2)) { goto L_8010833C; } // 80108288
  c->r[0]=R16(c->r[31]+0x00000004u); // 8010828C
  c->r[3]=c->r[31]+c->r[0]; // 80108290
  c->r[0]=R8(c->r[3]+0x00000009u); // 80108294
  c->r[3]=R8(c->r[3]+0x00000008u); // 80108298
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8010829C
  c->r[0]=c->r[3]+c->r[0]; // 801082A0
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 801082A4
  cmpu(c,0,c->r[0],0x00000C03u); // 801082A8
  if (crb(c,2)) { goto L_80108314; } // 801082AC
  cmpu(c,0,c->r[0],0x00000C35u); // 801082B0
  if (crb(c,2)) { goto L_80108314; } // 801082B4
  c->r[3]=0u+0x00000002u; // 801082B8
  c->lr=0x801082C0u; f_800F46D0(c); // 801082BC
  cmps(c,0,(int32_t)c->r[3],0); // 801082C0
  c->r[29]=c->r[3]|c->r[3]; // 801082C4
  if (crb(c,2)) { goto L_80108314; } // 801082C8
  c->r[4]=c->r[31]|c->r[31]; // 801082CC
  c->r[5]=0u+0x00000008u; // 801082D0
  c->lr=0x801082D8u; f_800043C4(c); // 801082D4
  c->r[3]=R16(c->r[29]+0x00000004u); // 801082D8
  c->r[0]=R16(c->r[31]+0x00000004u); // 801082DC
  c->r[3]=c->r[29]+c->r[3]; // 801082E0
  c->r[5]=R16(c->r[31]+0x00000002u); // 801082E4
  c->r[4]=c->r[31]+c->r[0]; // 801082E8
  c->r[3]=c->r[3]+0x00000008u; // 801082EC
  c->r[4]=c->r[4]+0x00000008u; // 801082F0
  c->lr=0x801082F8u; f_800043C4(c); // 801082F4
  c->r[4]=c->r[29]|c->r[29]; // 801082F8
  c->r[3]=c->r[30]+0x00000070u; // 801082FC
  c->lr=0x80108304u; f_800F4BF0(c); // 80108300
  c->r[3]=c->r[30]+0x0000004Cu; // 80108304
  c->r[4]=0u+0x0000003Cu; // 80108308
  c->r[5]=0u+0x00000008u; // 8010830C
  c->lr=0x80108314u; f_800F7890(c); // 80108310
L_80108314:;
  c->r[5]=R16(c->r[30]+0x00000080u); // 80108314
  c->r[3]=c->r[31]|c->r[31]; // 80108318
  c->r[4]=0u+0x00002000u; // 8010831C
  c->r[0]=c->r[5]+0xFFFFFFFFu; // 80108320
  W16(c->r[30]+0x00000080u,c->r[0]); // 80108324
  c->lr=0x8010832Cu; f_800F70C0(c); // 80108328
  c->r[31]=0u+0x00000000u; // 8010832C
L_80108330:;
  c->r[0]=R16(c->r[30]+0x00000080u); // 80108330
  cmps(c,0,(int32_t)c->r[0],0); // 80108334
  if (!crb(c,2)) { IRQCHK(c); goto L_80108270; } // 80108338
L_8010833C:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010833C
  if (crb(c,2)) { goto L_80108358; } // 80108340
  c->r[3]=0u+0x803D0000u; // 80108344
  c->r[4]=c->r[31]|c->r[31]; // 80108348
  c->r[3]=c->r[3]+0xFFFF9CF0u; // 8010834C
  c->r[3]=c->r[3]+0x00000064u; // 80108350
  c->lr=0x80108358u; f_800F4BF0(c); // 80108354
L_80108358:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108358
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010835C
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108360
  c->r[29]=R32(c->r[1]+0x00000014u); // 80108364
  c->lr=c->r[0]; // 80108368
  c->r[1]=c->r[1]+0x00000020u; // 8010836C
  return; // 80108370
}

// btu_hcif_connection_comp_evt
void f_80108374(Ctx* __restrict c) {
  trace_call(0x80108374u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108374
  c->r[0]=c->lr; // 80108378
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010837C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80108380
  W32(c->r[1]+0x00000028u,c->r[30]); // 80108384
  c->r[0]=R8(c->r[3]+0x00000002u); // 80108388
  c->r[31]=R8(c->r[3]+0x00000000u); // 8010838C
  c->r[4]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108390
  c->r[5]=R8(c->r[3]+0x00000001u); // 80108394
  c->r[0]=R8(c->r[3]+0x00000003u); // 80108398
  c->r[4]=c->r[5]+c->r[4]; // 8010839C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 801083A0
  c->r[30]=rotl(c->r[4],0)&0x00000FFFu; // 801083A4
  c->r[0]=R8(c->r[3]+0x00000004u); // 801083A8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 801083AC
  c->r[0]=R8(c->r[3]+0x00000005u); // 801083B0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 801083B4
  c->r[0]=R8(c->r[3]+0x00000006u); // 801083B8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 801083BC
  c->r[0]=R8(c->r[3]+0x00000007u); // 801083C0
  W8(c->r[1]+0x00000009u,c->r[0]); // 801083C4
  c->r[0]=R8(c->r[3]+0x00000008u); // 801083C8
  W8(c->r[1]+0x00000008u,c->r[0]); // 801083CC
  c->r[0]=R8(c->r[3]+0x00000009u); // 801083D0
  c->r[6]=R8(c->r[3]+0x0000000Au); // 801083D4
  cmpu(c,0,c->r[0],0x00000001u); // 801083D8
  if (!crb(c,2)) { goto L_80108404; } // 801083DC
  c->r[4]=c->r[30]|c->r[30]; // 801083E0
  c->r[5]=c->r[31]|c->r[31]; // 801083E4
  c->r[3]=c->r[1]+0x00000008u; // 801083E8
  c->lr=0x801083F0u; f_801068AC(c); // 801083EC
  c->r[3]=c->r[31]|c->r[31]; // 801083F0
  c->r[4]=c->r[30]|c->r[30]; // 801083F4
  c->r[5]=c->r[1]+0x00000008u; // 801083F8
  c->lr=0x80108400u; f_80111DE0(c); // 801083FC
  goto L_80108438; // 80108400
L_80108404:;
  c->r[3]=c->r[1]+0x00000010u; // 80108404
  c->r[4]=0u+0x00000000u; // 80108408
  c->r[5]=0u+0x0000000Eu; // 8010840C
  c->lr=0x80108414u; f_80004714(c); // 80108410
  c->r[3]=c->r[1]+0x00000014u; // 80108414
  c->r[4]=c->r[1]+0x00000008u; // 80108418
  c->r[5]=0u+0x00000006u; // 8010841C
  c->lr=0x80108424u; f_800043C4(c); // 80108420
  c->r[3]=c->r[31]|c->r[31]; // 80108424
  c->r[5]=c->r[30]|c->r[30]; // 80108428
  c->r[4]=c->r[1]+0x00000008u; // 8010842C
  c->r[6]=c->r[1]+0x00000010u; // 80108430
  c->lr=0x80108438u; f_801043C0(c); // 80108434
L_80108438:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80108438
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010843C
  c->r[30]=R32(c->r[1]+0x00000028u); // 80108440
  c->lr=c->r[0]; // 80108444
  c->r[1]=c->r[1]+0x00000030u; // 80108448
  return; // 8010844C
}

// btu_hcif_connection_request_evt
void f_80108450(Ctx* __restrict c) {
  trace_call(0x80108450u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108450
  c->r[0]=c->lr; // 80108454
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108458
  c->r[0]=R8(c->r[3]+0x00000000u); // 8010845C
  W8(c->r[1]+0x00000011u,c->r[0]); // 80108460
  c->r[0]=R8(c->r[3]+0x00000001u); // 80108464
  W8(c->r[1]+0x00000010u,c->r[0]); // 80108468
  c->r[0]=R8(c->r[3]+0x00000002u); // 8010846C
  W8(c->r[1]+0x0000000Fu,c->r[0]); // 80108470
  c->r[0]=R8(c->r[3]+0x00000003u); // 80108474
  W8(c->r[1]+0x0000000Eu,c->r[0]); // 80108478
  c->r[0]=R8(c->r[3]+0x00000004u); // 8010847C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80108480
  c->r[0]=R8(c->r[3]+0x00000005u); // 80108484
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80108488
  c->r[0]=R8(c->r[3]+0x00000006u); // 8010848C
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80108490
  c->r[0]=R8(c->r[3]+0x00000007u); // 80108494
  W8(c->r[1]+0x00000009u,c->r[0]); // 80108498
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010849C
  W8(c->r[1]+0x00000008u,c->r[0]); // 801084A0
  c->r[5]=R8(c->r[3]+0x00000009u); // 801084A4
  cmpu(c,0,c->r[5],0x00000001u); // 801084A8
  if (!crb(c,2)) { goto L_801084C0; } // 801084AC
  c->r[3]=c->r[1]+0x0000000Cu; // 801084B0
  c->r[4]=c->r[1]+0x00000008u; // 801084B4
  c->lr=0x801084BCu; f_80105DCC(c); // 801084B8
  goto L_801084CC; // 801084BC
L_801084C0:;
  c->r[3]=c->r[1]+0x0000000Cu; // 801084C0
  c->r[4]=c->r[1]+0x00000008u; // 801084C4
  c->lr=0x801084CCu; f_801041E0(c); // 801084C8
L_801084CC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 801084CC
  c->lr=c->r[0]; // 801084D0
  c->r[1]=c->r[1]+0x00000020u; // 801084D4
  return; // 801084D8
}

// btu_hcif_qos_setup_comp_evt
void f_801084DC(Ctx* __restrict c) {
  trace_call(0x801084DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801084DC
  c->r[0]=c->lr; // 801084E0
  c->r[6]=c->r[3]|c->r[3]; // 801084E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 801084E8
  c->r[5]=c->r[1]+0x00000008u; // 801084EC
  c->r[4]=R8(c->r[6]+0x00000002u); // 801084F0
  c->r[3]=R8(c->r[3]+0x00000000u); // 801084F4
  c->r[7]=R8(c->r[6]+0x00000001u); // 801084F8
  c->r[4]=rotl(c->r[4],8)&0xFFFFFF00u; // 801084FC
  c->r[0]=R8(c->r[6]+0x00000003u); // 80108500
  c->r[4]=c->r[7]+c->r[4]; // 80108504
  W8(c->r[1]+0x00000008u,c->r[0]); // 80108508
  c->r[4]=rotl(c->r[4],0)&0x0000FFFFu; // 8010850C
  c->r[0]=R8(c->r[6]+0x00000004u); // 80108510
  W8(c->r[1]+0x00000009u,c->r[0]); // 80108514
  c->r[7]=R8(c->r[6]+0x00000008u); // 80108518
  c->r[8]=R8(c->r[6]+0x00000007u); // 8010851C
  c->r[0]=R8(c->r[6]+0x00000006u); // 80108520
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 80108524
  c->r[7]=R8(c->r[6]+0x00000005u); // 80108528
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 8010852C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108530
  c->r[7]=c->r[8]+c->r[7]; // 80108534
  c->r[0]=c->r[9]+c->r[0]; // 80108538
  c->r[0]=c->r[7]+c->r[0]; // 8010853C
  W32(c->r[1]+0x0000000Cu,c->r[0]); // 80108540
  c->r[7]=R8(c->r[6]+0x0000000Cu); // 80108544
  c->r[8]=R8(c->r[6]+0x0000000Bu); // 80108548
  c->r[0]=R8(c->r[6]+0x0000000Au); // 8010854C
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 80108550
  c->r[7]=R8(c->r[6]+0x00000009u); // 80108554
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 80108558
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 8010855C
  c->r[7]=c->r[8]+c->r[7]; // 80108560
  c->r[0]=c->r[9]+c->r[0]; // 80108564
  c->r[0]=c->r[7]+c->r[0]; // 80108568
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010856C
  c->r[7]=R8(c->r[6]+0x00000010u); // 80108570
  c->r[8]=R8(c->r[6]+0x0000000Fu); // 80108574
  c->r[0]=R8(c->r[6]+0x0000000Eu); // 80108578
  c->r[9]=rotl(c->r[7],24)&0xFF000000u; // 8010857C
  c->r[7]=R8(c->r[6]+0x0000000Du); // 80108580
  c->r[8]=rotl(c->r[8],16)&0xFFFF0000u; // 80108584
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108588
  c->r[7]=c->r[8]+c->r[7]; // 8010858C
  c->r[0]=c->r[9]+c->r[0]; // 80108590
  c->r[0]=c->r[7]+c->r[0]; // 80108594
  W32(c->r[1]+0x00000018u,c->r[0]); // 80108598
  c->r[8]=R8(c->r[6]+0x00000014u); // 8010859C
  c->r[7]=R8(c->r[6]+0x00000013u); // 801085A0
  c->r[0]=R8(c->r[6]+0x00000012u); // 801085A4
  c->r[8]=rotl(c->r[8],24)&0xFF000000u; // 801085A8
  c->r[6]=R8(c->r[6]+0x00000011u); // 801085AC
  c->r[7]=rotl(c->r[7],16)&0xFFFF0000u; // 801085B0
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 801085B4
  c->r[6]=c->r[7]+c->r[6]; // 801085B8
  c->r[0]=c->r[8]+c->r[0]; // 801085BC
  c->r[0]=c->r[6]+c->r[0]; // 801085C0
  W32(c->r[1]+0x0000001Cu,c->r[0]); // 801085C4
  c->lr=0x801085CCu; f_800FECC4(c); // 801085C8
  c->r[0]=R32(c->r[1]+0x00000024u); // 801085CC
  c->lr=c->r[0]; // 801085D0
  c->r[1]=c->r[1]+0x00000020u; // 801085D4
  return; // 801085D8
}

// btu_hcif_esco_connection_comp_evt
void f_801085DC(Ctx* __restrict c) {
  trace_call(0x801085DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801085DC
  c->r[0]=c->lr; // 801085E0
  c->r[5]=0u+0x00000006u; // 801085E4
  W32(c->r[1]+0x00000034u,c->r[0]); // 801085E8
  c->r[4]=c->r[1]+0x00000008u; // 801085EC
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 801085F0
  W32(c->r[1]+0x00000028u,c->r[30]); // 801085F4
  c->r[0]=R8(c->r[3]+0x00000002u); // 801085F8
  c->r[31]=R8(c->r[3]+0x00000000u); // 801085FC
  c->r[6]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108600
  c->r[7]=R8(c->r[3]+0x00000001u); // 80108604
  c->r[0]=R8(c->r[3]+0x00000003u); // 80108608
  c->r[6]=c->r[7]+c->r[6]; // 8010860C
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80108610
  c->r[30]=rotl(c->r[6],0)&0x0000FFFFu; // 80108614
  c->r[0]=R8(c->r[3]+0x00000004u); // 80108618
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 8010861C
  c->r[0]=R8(c->r[3]+0x00000005u); // 80108620
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80108624
  c->r[0]=R8(c->r[3]+0x00000006u); // 80108628
  W8(c->r[1]+0x0000000Au,c->r[0]); // 8010862C
  c->r[0]=R8(c->r[3]+0x00000007u); // 80108630
  W8(c->r[1]+0x00000009u,c->r[0]); // 80108634
  c->r[0]=R8(c->r[3]+0x00000008u); // 80108638
  W8(c->r[1]+0x00000008u,c->r[0]); // 8010863C
  c->r[0]=R8(c->r[3]+0x00000009u); // 80108640
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80108644
  c->r[0]=R8(c->r[3]+0x0000000Au); // 80108648
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 8010864C
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80108650
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80108654
  c->r[0]=R8(c->r[3]+0x0000000Du); // 80108658
  c->r[6]=R8(c->r[3]+0x0000000Cu); // 8010865C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108660
  c->r[0]=c->r[6]+c->r[0]; // 80108664
  W16(c->r[1]+0x00000010u,c->r[0]); // 80108668
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 8010866C
  c->r[6]=R8(c->r[3]+0x0000000Eu); // 80108670
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108674
  c->r[0]=c->r[6]+c->r[0]; // 80108678
  W16(c->r[1]+0x00000012u,c->r[0]); // 8010867C
  c->r[0]=R8(c->r[3]+0x00000010u); // 80108680
  c->r[3]=c->r[1]+0x00000014u; // 80108684
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80108688
  c->lr=0x80108690u; f_800043C4(c); // 8010868C
  c->r[3]=c->r[31]|c->r[31]; // 80108690
  c->r[5]=c->r[30]|c->r[30]; // 80108694
  c->r[4]=c->r[1]+0x00000008u; // 80108698
  c->r[6]=c->r[1]+0x00000010u; // 8010869C
  c->lr=0x801086A4u; f_801043C0(c); // 801086A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801086A4
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 801086A8
  c->r[30]=R32(c->r[1]+0x00000028u); // 801086AC
  c->lr=c->r[0]; // 801086B0
  c->r[1]=c->r[1]+0x00000030u; // 801086B4
  return; // 801086B8
}

// btu_hcif_hdl_command_complete
void f_801086BC(Ctx* __restrict c) {
  trace_call(0x801086BCu);
  cmps(c,0,(int32_t)c->r[3],3092); // 801086BC
  c->r[6]=c->r[3]|c->r[3]; // 801086C0
  if (crb(c,2)) { goto L_801087CC; } // 801086C4
  if (!crb(c,0)) { goto L_80108720; } // 801086C8
  cmps(c,0,(int32_t)c->r[3],3077); // 801086CC
  if (crb(c,2)) { goto L_80108780; } // 801086D0
  if (!crb(c,0)) { goto L_801086FC; } // 801086D4
  cmps(c,0,(int32_t)c->r[3],2060); // 801086D8
  if (crb(c,2)) { goto L_801087AC; } // 801086DC
  if (!crb(c,0)) { goto L_801086F0; } // 801086E0
  cmps(c,0,(int32_t)c->r[3],1026); // 801086E4
  if (crb(c,2)) { goto L_80108778; } // 801086E8
  goto L_801087F4; // 801086EC
L_801086F0:;
  cmps(c,0,(int32_t)c->r[3],3075); // 801086F0
  if (crb(c,2)) { goto L_80108774; } // 801086F4
  goto L_801087F4; // 801086F8
L_801086FC:;
  cmps(c,0,(int32_t)c->r[3],3089); // 801086FC
  if (crb(c,2)) { goto L_80108790; } // 80108700
  if (!crb(c,0)) { goto L_80108714; } // 80108704
  cmps(c,0,(int32_t)c->r[3],3085); // 80108708
  if (crb(c,2)) { goto L_80108788; } // 8010870C
  goto L_801087F4; // 80108710
L_80108714:;
  cmps(c,0,(int32_t)c->r[3],3091); // 80108714
  if (!crb(c,0)) { goto L_801087F4; } // 80108718
  goto L_80108798; // 8010871C
L_80108720:;
  cmps(c,0,(int32_t)c->r[3],4105); // 80108720
  if (crb(c,2)) { goto L_801087D8; } // 80108724
  if (!crb(c,0)) { goto L_80108750; } // 80108728
  cmps(c,0,(int32_t)c->r[3],4099); // 8010872C
  if (crb(c,2)) { goto L_801087C0; } // 80108730
  if (!crb(c,0)) { goto L_80108744; } // 80108734
  cmps(c,0,(int32_t)c->r[3],4097); // 80108738
  if (crb(c,2)) { goto L_801087A0; } // 8010873C
  goto L_801087F4; // 80108740
L_80108744:;
  cmps(c,0,(int32_t)c->r[3],4101); // 80108744
  if (crb(c,2)) { goto L_801087B4; } // 80108748
  goto L_801087F4; // 8010874C
L_80108750:;
  cmps(c,0,(int32_t)c->r[3],5124); // 80108750
  if (crb(c,2)) { goto L_801087F4; } // 80108754
  if (!crb(c,0)) { goto L_80108768; } // 80108758
  cmps(c,0,(int32_t)c->r[3],5123); // 8010875C
  if (!crb(c,0)) { goto L_801087E4; } // 80108760
  goto L_801087F4; // 80108764
L_80108768:;
  cmps(c,0,(int32_t)c->r[3],5126); // 80108768
  if (!crb(c,0)) { goto L_801087F4; } // 8010876C
  goto L_801087EC; // 80108770
L_80108774:;
  f_80100228(c); return; // 80108774
L_80108778:;
  c->r[3]=0u+0x00000000u; // 80108778
  f_80102D58(c); return; // 8010877C
L_80108780:;
  c->r[3]=c->r[4]|c->r[4]; // 80108780
  f_801028C0(c); return; // 80108784
L_80108788:;
  c->r[3]=c->r[4]|c->r[4]; // 80108788
  f_8010128C(c); return; // 8010878C
L_80108790:;
  c->r[3]=c->r[4]|c->r[4]; // 80108790
  f_80101308(c); return; // 80108794
L_80108798:;
  c->r[3]=c->r[4]|c->r[4]; // 80108798
  f_80101364(c); return; // 8010879C
L_801087A0:;
  c->r[3]=c->r[4]|c->r[4]; // 801087A0
  c->r[4]=c->r[5]|c->r[5]; // 801087A4
  f_801004B4(c); return; // 801087A8
L_801087AC:;
  c->r[3]=c->r[4]|c->r[4]; // 801087AC
  f_800FE248(c); return; // 801087B0
L_801087B4:;
  c->r[3]=c->r[4]|c->r[4]; // 801087B4
  c->r[4]=c->r[5]|c->r[5]; // 801087B8
  f_801003EC(c); return; // 801087BC
L_801087C0:;
  c->r[3]=c->r[4]|c->r[4]; // 801087C0
  c->r[4]=c->r[5]|c->r[5]; // 801087C4
  f_80100570(c); return; // 801087C8
L_801087CC:;
  c->r[3]=c->r[4]|c->r[4]; // 801087CC
  c->r[4]=c->r[5]|c->r[5]; // 801087D0
  f_80100B24(c); return; // 801087D4
L_801087D8:;
  c->r[3]=c->r[4]|c->r[4]; // 801087D8
  c->r[4]=c->r[5]|c->r[5]; // 801087DC
  f_80100BF0(c); return; // 801087E0
L_801087E4:;
  c->r[3]=c->r[4]|c->r[4]; // 801087E4
  f_800FF130(c); return; // 801087E8
L_801087EC:;
  c->r[3]=c->r[4]|c->r[4]; // 801087EC
  f_800FF014(c); return; // 801087F0
L_801087F4:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 801087F4
  c->r[0]=c->r[3]+0x00000000u; // 801087F8
  cmpu(c,0,c->r[0],0x0000FC00u); // 801087FC
  if (!crb(c,2)) return; // 80108800
  c->r[3]=c->r[4]|c->r[4]; // 80108804
  c->r[4]=c->r[6]|c->r[6]; // 80108808
  f_80100E38(c); return; // 8010880C
  return; // 80108810
}

// btu_hcif_command_complete_evt
void f_80108814(Ctx* __restrict c) {
  trace_call(0x80108814u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108814
  c->r[0]=c->lr; // 80108818
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010881C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80108820
  c->r[31]=0u+0x803D0000u; // 80108824
  c->r[31]=c->r[31]+0xFFFF9CF0u; // 80108828
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010882C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80108830
  c->r[29]=c->r[4]|c->r[4]; // 80108834
  W32(c->r[1]+0x00000010u,c->r[28]); // 80108838
  c->r[28]=c->r[3]|c->r[3]; // 8010883C
  c->r[0]=R8(c->r[3]+0x00000000u); // 80108840
  W16(c->r[31]+0x00000080u,c->r[0]); // 80108844
  c->r[0]=R8(c->r[3]+0x00000002u); // 80108848
  c->r[3]=R8(c->r[3]+0x00000001u); // 8010884C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108850
  c->r[0]=c->r[3]+c->r[0]; // 80108854
  c->r[30]=rotl(c->r[0],0)&0x0000FFFFu; // 80108858
  cmpu(c,0,c->r[30],0x00000C03u); // 8010885C
  if (crb(c,2)) { goto L_801088F0; } // 80108860
  cmpu(c,0,c->r[30],0x00000C35u); // 80108864
  if (crb(c,2)) { goto L_801088F0; } // 80108868
  cmps(c,0,(int32_t)c->r[30],0); // 8010886C
  if (crb(c,2)) { goto L_801088F0; } // 80108870
  c->r[3]=c->r[31]+0x00000070u; // 80108874
  c->lr=0x8010887Cu; f_800F4E70(c); // 80108878
  cmps(c,0,(int32_t)c->r[3],0); // 8010887C
  if (crb(c,2)) { goto L_801088BC; } // 80108880
  c->r[0]=R8(c->r[3]+0x00000009u); // 80108884
  cmpu(c,0,c->r[30],0x0000FC4Cu); // 80108888
  c->r[4]=R8(c->r[3]+0x00000008u); // 8010888C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108890
  c->r[0]=c->r[4]+c->r[0]; // 80108894
  c->r[0]=rotl(c->r[0],0)&0x0000FFFFu; // 80108898
  if (!crb(c,2)) { goto L_801088B8; } // 8010889C
  cmpu(c,0,c->r[0],c->r[30]); // 801088A0
  if (crb(c,2)) { goto L_801088B8; } // 801088A4
  c->r[4]=c->r[3]|c->r[3]; // 801088A8
  c->r[3]=c->r[31]+0x00000070u; // 801088AC
  c->lr=0x801088B4u; f_800F4D30(c); // 801088B0
  goto L_8010890C; // 801088B4
L_801088B8:;
  c->lr=0x801088BCu; f_800F47C0(c); // 801088B8
L_801088BC:;
  c->r[31]=0u+0x803D0000u; // 801088BC
  c->r[31]=c->r[31]+0xFFFF9CF0u; // 801088C0
  c->r[3]=c->r[31]+0x00000070u; // 801088C4
  c->lr=0x801088CCu; f_800F5010(c); // 801088C8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 801088CC
  if (!crb(c,2)) { goto L_801088E8; } // 801088D0
  c->r[3]=c->r[31]+0x0000004Cu; // 801088D4
  c->r[4]=0u+0x0000003Cu; // 801088D8
  c->r[5]=0u+0x00000008u; // 801088DC
  c->lr=0x801088E4u; f_800F7890(c); // 801088E0
  goto L_801088F0; // 801088E4
L_801088E8:;
  c->r[3]=c->r[31]+0x0000004Cu; // 801088E8
  c->lr=0x801088F0u; f_800F7900(c); // 801088EC
L_801088F0:;
  c->r[0]=c->r[29]+0xFFFFFFFDu; // 801088F0
  c->r[3]=c->r[30]|c->r[30]; // 801088F4
  c->r[4]=c->r[28]+0x00000003u; // 801088F8
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 801088FC
  c->lr=0x80108904u; f_801086BC(c); // 80108900
  c->r[3]=0u+0x00000000u; // 80108904
  c->lr=0x8010890Cu; f_801081E8(c); // 80108908
L_8010890C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010890C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108910
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108914
  c->r[29]=R32(c->r[1]+0x00000014u); // 80108918
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010891C
  c->lr=c->r[0]; // 80108920
  c->r[1]=c->r[1]+0x00000020u; // 80108924
  return; // 80108928
}

// btu_hcif_hdl_command_status
void f_8010892C(Ctx* __restrict c) {
  trace_call(0x8010892Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010892C
  c->r[0]=c->lr; // 80108930
  cmps(c,0,(int32_t)c->r[3],2050); // 80108934
  c->r[6]=c->r[3]|c->r[3]; // 80108938
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010893C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 80108940
  W32(c->r[1]+0x00000028u,c->r[30]); // 80108944
  c->r[30]=c->r[4]|c->r[4]; // 80108948
  if (crb(c,2)) { goto L_80108974; } // 8010894C
  if (!crb(c,0)) { goto L_80108960; } // 80108950
  cmps(c,0,(int32_t)c->r[3],2049); // 80108954
  if (!crb(c,0)) { goto L_80108968; } // 80108958
  goto L_80108974; // 8010895C
L_80108960:;
  cmps(c,0,(int32_t)c->r[3],2055); // 80108960
  if (!crb(c,0)) { goto L_80108974; } // 80108964
L_80108968:;
  c->r[3]=c->r[30]|c->r[30]; // 80108968
  c->lr=0x80108970u; f_80103B5C(c); // 8010896C
  goto L_80108B14; // 80108970
L_80108974:;
  cmps(c,0,(int32_t)c->r[4],0); // 80108974
  if (crb(c,2)) { goto L_80108B14; } // 80108978
  cmps(c,0,(int32_t)c->r[3],1049); // 8010897C
  if (crb(c,2)) { goto L_801089D0; } // 80108980
  if (!crb(c,0)) { goto L_801089AC; } // 80108984
  cmps(c,0,(int32_t)c->r[3],1025); // 80108988
  if (crb(c,2)) { goto L_801089C4; } // 8010898C
  if (!crb(c,0)) { goto L_801089A0; } // 80108990
  cmps(c,0,(int32_t)c->r[3],13); // 80108994
  if (crb(c,2)) { goto L_801089F8; } // 80108998
  goto L_80108AF4; // 8010899C
L_801089A0:;
  cmps(c,0,(int32_t)c->r[3],1029); // 801089A0
  if (crb(c,2)) { goto L_80108A24; } // 801089A4
  goto L_80108AF4; // 801089A8
L_801089AC:;
  cmps(c,0,(int32_t)c->r[3],2059); // 801089AC
  if (crb(c,2)) { goto L_80108A0C; } // 801089B0
  if (!crb(c,0)) { goto L_80108AF4; } // 801089B4
  cmps(c,0,(int32_t)c->r[3],1064); // 801089B8
  if (crb(c,2)) { goto L_80108A90; } // 801089BC
  goto L_80108AF4; // 801089C0
L_801089C4:;
  c->r[3]=c->r[30]|c->r[30]; // 801089C4
  c->lr=0x801089CCu; f_80102D58(c); // 801089C8
  goto L_80108B14; // 801089CC
L_801089D0:;
  c->r[6]=c->r[30]|c->r[30]; // 801089D0
  c->r[3]=0u+0x00000000u; // 801089D4
  c->r[4]=0u+0x00000000u; // 801089D8
  c->r[5]=0u+0x00000000u; // 801089DC
  c->lr=0x801089E4u; f_80102FAC(c); // 801089E0
  c->r[5]=c->r[30]|c->r[30]; // 801089E4
  c->r[3]=0u+0x00000000u; // 801089E8
  c->r[4]=0u+0x00000000u; // 801089EC
  c->lr=0x801089F4u; f_80106008(c); // 801089F0
  goto L_80108B14; // 801089F4
L_801089F8:;
  c->r[3]=c->r[30]|c->r[30]; // 801089F8
  c->r[4]=0u+0x00000000u; // 801089FC
  c->r[5]=0u+0x00000000u; // 80108A00
  c->lr=0x80108A08u; f_800FECC4(c); // 80108A04
  goto L_80108B14; // 80108A08
L_80108A0C:;
  c->r[3]=c->r[30]|c->r[30]; // 80108A0C
  c->r[4]=0u+0x00000000u; // 80108A10
  c->r[5]=0u+0x000000FFu; // 80108A14
  c->lr=0x80108A1Cu; f_800FE890(c); // 80108A18
  c->lr=0x80108A20u; f_80112C8C(c); // 80108A1C
  goto L_80108B14; // 80108A20
L_80108A24:;
  cmps(c,0,(int32_t)c->r[5],0); // 80108A24
  if (crb(c,2)) { goto L_80108B14; } // 80108A28
  c->r[4]=R8(c->r[5]+0x00000001u); // 80108A2C
  c->r[31]=0u+0x00010000u; // 80108A30
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80108A34
  c->r[3]=c->r[1]+0x00000008u; // 80108A38
  W8(c->r[1]+0x0000000Du,c->r[4]); // 80108A3C
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80108A40
  c->r[6]=0u+0x00000000u; // 80108A44
  c->r[0]=R8(c->r[5]+0x00000002u); // 80108A48
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80108A4C
  c->r[0]=R8(c->r[5]+0x00000003u); // 80108A50
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80108A54
  c->r[0]=R8(c->r[5]+0x00000004u); // 80108A58
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80108A5C
  c->r[0]=R8(c->r[5]+0x00000005u); // 80108A60
  W8(c->r[1]+0x00000009u,c->r[0]); // 80108A64
  c->r[0]=R8(c->r[5]+0x00000006u); // 80108A68
  c->r[5]=c->r[30]|c->r[30]; // 80108A6C
  W8(c->r[1]+0x00000008u,c->r[0]); // 80108A70
  c->lr=0x80108A78u; f_801068AC(c); // 80108A74
  c->r[0]=c->r[31]+0xFFFFFFFFu; // 80108A78
  c->r[3]=c->r[30]|c->r[30]; // 80108A7C
  c->r[5]=c->r[1]+0x00000008u; // 80108A80
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80108A84
  c->lr=0x80108A8Cu; f_80111DE0(c); // 80108A88
  goto L_80108B14; // 80108A8C
L_80108A90:;
  cmps(c,0,(int32_t)c->r[5],0); // 80108A90
  if (crb(c,2)) { goto L_80108B14; } // 80108A94
  c->r[0]=R8(c->r[5]+0x00000002u); // 80108A98
  c->r[3]=R8(c->r[5]+0x00000001u); // 80108A9C
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108AA0
  c->r[0]=c->r[3]+c->r[0]; // 80108AA4
  c->r[31]=rotl(c->r[0],0)&0x0000FFFFu; // 80108AA8
  c->r[3]=c->r[31]|c->r[31]; // 80108AAC
  c->lr=0x80108AB4u; f_80104B14(c); // 80108AB0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80108AB4
  if (crb(c,2)) { goto L_80108ADC; } // 80108AB8
  c->r[3]=c->r[30]|c->r[30]; // 80108ABC
  c->r[4]=c->r[31]|c->r[31]; // 80108AC0
  c->r[5]=0u+0x00000000u; // 80108AC4
  c->r[6]=0u+0x00000000u; // 80108AC8
  c->r[7]=0u+0x00000000u; // 80108ACC
  c->r[8]=0u+0x00000000u; // 80108AD0
  c->lr=0x80108AD8u; f_80104A10(c); // 80108AD4
  goto L_80108B14; // 80108AD8
L_80108ADC:;
  c->r[3]=c->r[30]|c->r[30]; // 80108ADC
  c->r[5]=c->r[31]|c->r[31]; // 80108AE0
  c->r[6]=c->r[1]+0x00000010u; // 80108AE4
  c->r[4]=0u+0x00000000u; // 80108AE8
  c->lr=0x80108AF0u; f_801043C0(c); // 80108AEC
  goto L_80108B14; // 80108AF0
L_80108AF4:;
  c->r[3]=rotl(c->r[3],0)&0x0000FC00u; // 80108AF4
  c->r[0]=c->r[3]+0x00000000u; // 80108AF8
  cmpu(c,0,c->r[0],0x0000FC00u); // 80108AFC
  if (!crb(c,2)) { goto L_80108B14; } // 80108B00
  c->r[3]=c->r[5]|c->r[5]; // 80108B04
  c->r[4]=c->r[6]|c->r[6]; // 80108B08
  c->r[5]=0u+0x00000001u; // 80108B0C
  c->lr=0x80108B14u; f_80100E38(c); // 80108B10
L_80108B14:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 80108B14
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 80108B18
  c->r[30]=R32(c->r[1]+0x00000028u); // 80108B1C
  c->lr=c->r[0]; // 80108B20
  c->r[1]=c->r[1]+0x00000030u; // 80108B24
  return; // 80108B28
}

// btu_hcif_command_status_evt
void f_80108B2C(Ctx* __restrict c) {
  trace_call(0x80108B2Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108B2C
  c->r[0]=c->lr; // 80108B30
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108B34
  c->r[11]=c->r[1]+0x00000020u; // 80108B38
  c->lr=0x80108B40u; f_800ADA2C(c); // 80108B3C
  c->r[4]=0u+0x803D0000u; // 80108B40
  c->r[29]=R8(c->r[3]+0x00000000u); // 80108B44
  c->r[0]=R8(c->r[3]+0x00000001u); // 80108B48
  c->r[4]=c->r[4]+0xFFFF9CF0u; // 80108B4C
  c->r[31]=0u+0x00000000u; // 80108B50
  c->r[27]=0u+0x00000000u; // 80108B54
  W16(c->r[4]+0x00000080u,c->r[0]); // 80108B58
  c->r[0]=R8(c->r[3]+0x00000003u); // 80108B5C
  c->r[3]=R8(c->r[3]+0x00000002u); // 80108B60
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108B64
  c->r[0]=c->r[3]+c->r[0]; // 80108B68
  c->r[28]=rotl(c->r[0],0)&0x0000FFFFu; // 80108B6C
  cmpu(c,0,c->r[28],0x00000C03u); // 80108B70
  if (crb(c,2)) { goto L_80108C14; } // 80108B74
  cmpu(c,0,c->r[28],0x00000C35u); // 80108B78
  if (crb(c,2)) { goto L_80108C14; } // 80108B7C
  cmps(c,0,(int32_t)c->r[28],0); // 80108B80
  if (crb(c,2)) { goto L_80108C14; } // 80108B84
  c->r[3]=c->r[4]+0x00000070u; // 80108B88
  c->lr=0x80108B90u; f_800F4E70(c); // 80108B8C
  cmps(c,0,(int32_t)c->r[3],0); // 80108B90
  c->r[31]=c->r[3]|c->r[3]; // 80108B94
  if (crb(c,2)) { goto L_80108BE0; } // 80108B98
  c->r[0]=R16(c->r[3]+0x00000004u); // 80108B9C
  c->r[3]=c->r[3]+c->r[0]; // 80108BA0
  c->r[0]=R8(c->r[3]+0x00000009u); // 80108BA4
  c->r[27]=c->r[3]+0x0000000Au; // 80108BA8
  c->r[3]=R8(c->r[3]+0x00000008u); // 80108BAC
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108BB0
  c->r[0]=c->r[3]+c->r[0]; // 80108BB4
  c->r[6]=rotl(c->r[0],0)&0x0000FFFFu; // 80108BB8
  cmpu(c,0,c->r[6],c->r[28]); // 80108BBC
  if (crb(c,2)) { goto L_80108BE0; } // 80108BC0
  c->r[3]=0u+0x00070000u; // 80108BC4
  c->r[4]=0u+0x80330000u; // 80108BC8
  c->r[5]=c->r[28]|c->r[28]; // 80108BCC
  c->r[27]=0u+0x00000000u; // 80108BD0
  c->r[3]=c->r[3]+0x00000001u; // 80108BD4
  c->r[4]=c->r[4]+0xFFFFBFD8u; // 80108BD8
  c->lr=0x80108BE0u; f_800F72C0(c); // 80108BDC
L_80108BE0:;
  c->r[30]=0u+0x803D0000u; // 80108BE0
  c->r[30]=c->r[30]+0xFFFF9CF0u; // 80108BE4
  c->r[3]=c->r[30]+0x00000070u; // 80108BE8
  c->lr=0x80108BF0u; f_800F5010(c); // 80108BEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80108BF0
  if (!crb(c,2)) { goto L_80108C0C; } // 80108BF4
  c->r[3]=c->r[30]+0x0000004Cu; // 80108BF8
  c->r[4]=0u+0x0000003Cu; // 80108BFC
  c->r[5]=0u+0x00000008u; // 80108C00
  c->lr=0x80108C08u; f_800F7890(c); // 80108C04
  goto L_80108C14; // 80108C08
L_80108C0C:;
  c->r[3]=c->r[30]+0x0000004Cu; // 80108C0C
  c->lr=0x80108C14u; f_800F7900(c); // 80108C10
L_80108C14:;
  c->r[3]=c->r[28]|c->r[28]; // 80108C14
  c->r[4]=c->r[29]|c->r[29]; // 80108C18
  c->r[5]=c->r[27]|c->r[27]; // 80108C1C
  c->lr=0x80108C24u; f_8010892C(c); // 80108C20
  cmps(c,0,(int32_t)c->r[31],0); // 80108C24
  if (crb(c,2)) { goto L_80108C34; } // 80108C28
  c->r[3]=c->r[31]|c->r[31]; // 80108C2C
  c->lr=0x80108C34u; f_800F47C0(c); // 80108C30
L_80108C34:;
  c->r[3]=0u+0x00000000u; // 80108C34
  c->lr=0x80108C3Cu; f_801081E8(c); // 80108C38
  c->r[11]=c->r[1]+0x00000020u; // 80108C3C
  c->lr=0x80108C44u; f_800ADA78(c); // 80108C40
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108C44
  c->lr=c->r[0]; // 80108C48
  c->r[1]=c->r[1]+0x00000020u; // 80108C4C
  return; // 80108C50
}

// btu_hcif_cmd_timeout
void f_80108C54(Ctx* __restrict c) {
  trace_call(0x80108C54u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108C54
  c->r[0]=c->lr; // 80108C58
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108C5C
  c->r[0]=0u+0x00000001u; // 80108C60
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80108C64
  c->r[31]=0u+0x803D0000u; // 80108C68
  c->r[31]=c->r[31]+0xFFFF9CF0u; // 80108C6C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80108C70
  c->r[3]=c->r[31]+0x00000070u; // 80108C74
  W32(c->r[1]+0x00000014u,c->r[29]); // 80108C78
  W16(c->r[31]+0x00000080u,c->r[0]); // 80108C7C
  c->lr=0x80108C84u; f_800F4E70(c); // 80108C80
  cmps(c,0,(int32_t)c->r[3],0); // 80108C84
  c->r[30]=c->r[3]|c->r[3]; // 80108C88
  if (!crb(c,2)) { goto L_80108CA8; } // 80108C8C
  c->r[3]=0u+0x00070000u; // 80108C90
  c->r[4]=0u+0x80330000u; // 80108C94
  c->r[3]=c->r[3]+0x00000001u; // 80108C98
  c->r[4]=c->r[4]+0xFFFFC000u; // 80108C9C
  c->lr=0x80108CA4u; f_800F7280(c); // 80108CA0
  goto L_80108D90; // 80108CA4
L_80108CA8:;
  c->r[3]=c->r[31]+0x00000070u; // 80108CA8
  c->lr=0x80108CB0u; f_800F5010(c); // 80108CAC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 80108CB0
  if (!crb(c,2)) { goto L_80108CC8; } // 80108CB4
  c->r[3]=c->r[31]+0x0000004Cu; // 80108CB8
  c->r[4]=0u+0x0000003Cu; // 80108CBC
  c->r[5]=0u+0x00000008u; // 80108CC0
  c->lr=0x80108CC8u; f_800F7890(c); // 80108CC4
L_80108CC8:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 80108CC8
  c->r[3]=0u+0x00070000u; // 80108CCC
  c->r[4]=0u+0x80330000u; // 80108CD0
  c->r[31]=c->r[30]+c->r[0]; // 80108CD4
  c->r[3]=c->r[3]+0x00000001u; // 80108CD8
  c->r[0]=R8(c->r[31]+0x00000009u); // 80108CDC
  c->r[4]=c->r[4]+0xFFFFC020u; // 80108CE0
  c->r[5]=R8(c->r[31]+0x00000008u); // 80108CE4
  c->r[0]=rotl(c->r[0],8)&0xFFFFFF00u; // 80108CE8
  c->r[0]=c->r[5]+c->r[0]; // 80108CEC
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 80108CF0
  c->r[5]=c->r[29]|c->r[29]; // 80108CF4
  c->lr=0x80108CFCu; f_800F72A0(c); // 80108CF8
  cmps(c,0,(int32_t)c->r[29],1049); // 80108CFC
  if (crb(c,2)) { goto L_80108D4C; } // 80108D00
  if (!crb(c,0)) { goto L_80108D2C; } // 80108D04
  cmps(c,0,(int32_t)c->r[29],1025); // 80108D08
  if (crb(c,2)) { goto L_80108D4C; } // 80108D0C
  if (!crb(c,0)) { goto L_80108D20; } // 80108D10
  cmps(c,0,(int32_t)c->r[29],13); // 80108D14
  if (crb(c,2)) { goto L_80108D4C; } // 80108D18
  goto L_80108D60; // 80108D1C
L_80108D20:;
  cmps(c,0,(int32_t)c->r[29],1029); // 80108D20
  if (crb(c,2)) { goto L_80108D4C; } // 80108D24
  goto L_80108D60; // 80108D28
L_80108D2C:;
  cmps(c,0,(int32_t)c->r[29],2050); // 80108D2C
  if (crb(c,2)) { goto L_80108D60; } // 80108D30
  if (!crb(c,0)) { goto L_80108D44; } // 80108D34
  cmps(c,0,(int32_t)c->r[29],2049); // 80108D38
  if (!crb(c,0)) { goto L_80108D4C; } // 80108D3C
  goto L_80108D60; // 80108D40
L_80108D44:;
  cmps(c,0,(int32_t)c->r[29],2055); // 80108D44
  if (!crb(c,0)) { goto L_80108D60; } // 80108D48
L_80108D4C:;
  c->r[3]=c->r[29]|c->r[29]; // 80108D4C
  c->r[5]=c->r[31]+0x0000000Au; // 80108D50
  c->r[4]=0u+0x0000001Fu; // 80108D54
  c->lr=0x80108D5Cu; f_8010892C(c); // 80108D58
  goto L_80108D78; // 80108D5C
L_80108D60:;
  c->r[0]=0u+0x0000001Fu; // 80108D60
  c->r[3]=c->r[29]|c->r[29]; // 80108D64
  W8(c->r[1]+0x00000008u,c->r[0]); // 80108D68
  c->r[4]=c->r[1]+0x00000008u; // 80108D6C
  c->r[5]=0u+0x00000001u; // 80108D70
  c->lr=0x80108D78u; f_801086BC(c); // 80108D74
L_80108D78:;
  c->r[3]=c->r[30]|c->r[30]; // 80108D78
  c->lr=0x80108D80u; f_800F47C0(c); // 80108D7C
  c->r[3]=0u+0x00000002u; // 80108D80
  c->lr=0x80108D88u; f_80101558(c); // 80108D84
  c->r[3]=0u+0x00000000u; // 80108D88
  c->lr=0x80108D90u; f_801081E8(c); // 80108D8C
L_80108D90:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108D90
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80108D94
  c->r[30]=R32(c->r[1]+0x00000018u); // 80108D98
  c->r[29]=R32(c->r[1]+0x00000014u); // 80108D9C
  c->lr=c->r[0]; // 80108DA0
  c->r[1]=c->r[1]+0x00000020u; // 80108DA4
  return; // 80108DA8
}

// btu_hcif_link_key_notification_evt
void f_80108DAC(Ctx* __restrict c) {
  trace_call(0x80108DACu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108DAC
  c->r[0]=c->lr; // 80108DB0
  c->r[5]=c->r[3]+0x00000016u; // 80108DB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 80108DB8
  c->r[4]=c->r[1]+0x00000010u; // 80108DBC
  c->r[0]=R8(c->r[3]+0x00000000u); // 80108DC0
  W8(c->r[1]+0x0000000Du,c->r[0]); // 80108DC4
  c->r[0]=R8(c->r[3]+0x00000001u); // 80108DC8
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80108DCC
  c->r[0]=R8(c->r[3]+0x00000002u); // 80108DD0
  W8(c->r[1]+0x0000000Bu,c->r[0]); // 80108DD4
  c->r[0]=R8(c->r[3]+0x00000003u); // 80108DD8
  W8(c->r[1]+0x0000000Au,c->r[0]); // 80108DDC
  c->r[0]=R8(c->r[3]+0x00000004u); // 80108DE0
  W8(c->r[1]+0x00000009u,c->r[0]); // 80108DE4
  c->r[0]=R8(c->r[3]+0x00000005u); // 80108DE8
  W8(c->r[1]+0x00000008u,c->r[0]); // 80108DEC
  c->r[0]=R8(c->r[3]+0x00000006u); // 80108DF0
  W8(c->r[1]+0x0000001Fu,c->r[0]); // 80108DF4
  c->r[0]=R8(c->r[3]+0x00000007u); // 80108DF8
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80108DFC
  c->r[0]=R8(c->r[3]+0x00000008u); // 80108E00
  W8(c->r[1]+0x0000001Du,c->r[0]); // 80108E04
  c->r[0]=R8(c->r[3]+0x00000009u); // 80108E08
  W8(c->r[1]+0x0000001Cu,c->r[0]); // 80108E0C
  c->r[0]=R8(c->r[3]+0x0000000Au); // 80108E10
  W8(c->r[1]+0x0000001Bu,c->r[0]); // 80108E14
  c->r[0]=R8(c->r[3]+0x0000000Bu); // 80108E18
  W8(c->r[1]+0x0000001Au,c->r[0]); // 80108E1C
  c->r[0]=R8(c->r[3]+0x0000000Cu); // 80108E20
  W8(c->r[1]+0x00000019u,c->r[0]); // 80108E24
  c->r[0]=R8(c->r[3]+0x0000000Du); // 80108E28
  W8(c->r[1]+0x00000018u,c->r[0]); // 80108E2C
  c->r[0]=R8(c->r[3]+0x0000000Eu); // 80108E30
  W8(c->r[1]+0x00000017u,c->r[0]); // 80108E34
  c->r[0]=R8(c->r[3]+0x0000000Fu); // 80108E38
  W8(c->r[1]+0x00000016u,c->r[0]); // 80108E3C
  c->r[0]=R8(c->r[3]+0x00000010u); // 80108E40
  W8(c->r[1]+0x00000015u,c->r[0]); // 80108E44
  c->r[0]=R8(c->r[3]+0x00000011u); // 80108E48
  W8(c->r[1]+0x00000014u,c->r[0]); // 80108E4C
  c->r[0]=R8(c->r[3]+0x00000012u); // 80108E50
  W8(c->r[1]+0x00000013u,c->r[0]); // 80108E54
  c->r[0]=R8(c->r[3]+0x00000013u); // 80108E58
  W8(c->r[1]+0x00000012u,c->r[0]); // 80108E5C
  c->r[0]=R8(c->r[3]+0x00000014u); // 80108E60
  W8(c->r[1]+0x00000011u,c->r[0]); // 80108E64
  c->r[0]=R8(c->r[3]+0x00000015u); // 80108E68
  c->r[3]=c->r[1]+0x00000008u; // 80108E6C
  W8(c->r[1]+0x00000010u,c->r[0]); // 80108E70
  c->r[5]=R8(c->r[5]+0x00000000u); // 80108E74
  c->lr=0x80108E7Cu; f_80106F24(c); // 80108E78
  c->r[0]=R32(c->r[1]+0x00000024u); // 80108E7C
  c->lr=c->r[0]; // 80108E80
  c->r[1]=c->r[1]+0x00000020u; // 80108E84
  return; // 80108E88
}

// btu_init_core
void f_80108E8C(Ctx* __restrict c) {
  trace_call(0x80108E8Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108E8C
  c->r[0]=c->lr; // 80108E90
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108E94
  c->lr=0x80108E9Cu; f_80103144(c); // 80108E98
  c->lr=0x80108EA0u; f_80112E18(c); // 80108E9C
  c->lr=0x80108EA4u; f_8011EF48(c); // 80108EA0
  c->lr=0x80108EA8u; f_80101578(c); // 80108EA4
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108EA8
  c->lr=c->r[0]; // 80108EAC
  c->r[1]=c->r[1]+0x00000010u; // 80108EB0
  return; // 80108EB4
}

// BTE_Init
void f_80108EB8(Ctx* __restrict c) {
  trace_call(0x80108EB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108EB8
  c->r[0]=c->lr; // 80108EBC
  c->r[4]=0u+0x00000000u; // 80108EC0
  c->r[5]=0u+0x00000084u; // 80108EC4
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108EC8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108ECC
  c->r[31]=0u+0x803D0000u; // 80108ED0
  c->r[3]=c->r[31]+0xFFFF9CF0u; // 80108ED4
  c->lr=0x80108EDCu; f_80004714(c); // 80108ED8
  c->r[3]=c->r[31]+0xFFFF9CF0u; // 80108EDC
  c->r[4]=0u+0x000002A4u; // 80108EE0
  c->r[0]=0u+0x00000001u; // 80108EE4
  W16(c->r[3]+0x0000007Eu,c->r[4]); // 80108EE8
  W16(c->r[3]+0x00000080u,c->r[0]); // 80108EEC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80108EF0
  c->r[0]=R32(c->r[1]+0x00000014u); // 80108EF4
  c->lr=c->r[0]; // 80108EF8
  c->r[1]=c->r[1]+0x00000010u; // 80108EFC
  return; // 80108F00
}

// WBT_ExtCreateRecord
void f_80108F04(Ctx* __restrict c) {
  trace_call(0x80108F04u);
  {uint32_t ea=c->r[1]+0xFFFFFEE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108F04
  c->r[0]=c->lr; // 80108F08
  W32(c->r[1]+0x00000124u,c->r[0]); // 80108F0C
  c->r[0]=0u+0x00001002u; // 80108F10
  c->r[3]=c->r[1]+0x00000014u; // 80108F14
  c->r[4]=c->r[1]+0x00000010u; // 80108F18
  W32(c->r[1]+0x0000011Cu,c->r[31]); // 80108F1C
  c->r[31]=0u+0x00000000u; // 80108F20
  W32(c->r[1]+0x00000118u,c->r[30]); // 80108F24
  W32(c->r[1]+0x00000010u,c->r[31]); // 80108F28
  W16(c->r[1]+0x00000008u,c->r[0]); // 80108F2C
  c->lr=0x80108F34u; f_8011CB30(c); // 80108F30
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80108F34
  if (crb(c,2)) { goto L_80108F84; } // 80108F38
  c->r[30]=c->r[1]+0x00000016u; // 80108F3C
  c->r[4]=0u+0x00000000u; // 80108F40
  c->r[3]=c->r[30]|c->r[30]; // 80108F44
  c->r[5]=0u+0x000000FAu; // 80108F48
  c->lr=0x80108F50u; f_80004714(c); // 80108F4C
  c->r[0]=0u+0x00000001u; // 80108F50
  c->r[3]=0u+0x0000000Fu; // 80108F54
  W16(c->r[1]+0x00000016u,c->r[3]); // 80108F58
  c->r[3]=c->r[30]|c->r[30]; // 80108F5C
  c->r[4]=c->r[1]+0x00000010u; // 80108F60
  W16(c->r[1]+0x00000018u,c->r[0]); // 80108F64
  W8(c->r[1]+0x0000001Eu,c->r[0]); // 80108F68
  c->lr=0x80108F70u; f_8011C7D0(c); // 80108F6C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 80108F70
  if (crb(c,2)) { goto L_80108F84; } // 80108F74
  W32(c->r[1]+0x00000010u,c->r[31]); // 80108F78
  c->r[3]=0u+0x00000000u; // 80108F7C
  goto L_80108FCC; // 80108F80
L_80108F84:;
  c->r[3]=R32(c->r[1]+0x00000010u); // 80108F84
  c->r[6]=c->r[1]+0x00000008u; // 80108F88
  c->r[4]=0u+0x00000005u; // 80108F8C
  c->r[5]=0u+0x00000001u; // 80108F90
  c->lr=0x80108F98u; f_8011D840(c); // 80108F94
  c->r[0]=0u+0x00000000u; // 80108F98
  c->r[4]=0u+0x00000001u; // 80108F9C
  c->r[3]=0u+0x00010000u; // 80108FA0
  W8(c->r[1]+0x0000000Cu,c->r[0]); // 80108FA4
  c->r[0]=c->r[3]+0xFFFF8001u; // 80108FA8
  c->r[3]=R32(c->r[1]+0x00000010u); // 80108FAC
  W8(c->r[1]+0x0000000Du,c->r[4]); // 80108FB0
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80108FB4
  c->r[7]=c->r[1]+0x0000000Cu; // 80108FB8
  c->r[5]=0u+0x00000001u; // 80108FBC
  c->r[6]=0u+0x00000002u; // 80108FC0
  c->lr=0x80108FC8u; f_8011D4A8(c); // 80108FC4
  c->r[3]=0u+0x00000001u; // 80108FC8
L_80108FCC:;
  c->r[0]=R32(c->r[1]+0x00000124u); // 80108FCC
  c->r[31]=R32(c->r[1]+0x0000011Cu); // 80108FD0
  c->r[30]=R32(c->r[1]+0x00000118u); // 80108FD4
  c->lr=c->r[0]; // 80108FD8
  c->r[1]=c->r[1]+0x00000120u; // 80108FDC
  return; // 80108FE0
}

// GAP_Init
void f_80108FE4(Ctx* __restrict c) {
  trace_call(0x80108FE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80108FE4
  c->r[0]=c->lr; // 80108FE8
  c->r[4]=0u+0x00000000u; // 80108FEC
  c->r[5]=0u+0x000003ACu; // 80108FF0
  W32(c->r[1]+0x00000014u,c->r[0]); // 80108FF4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80108FF8
  c->r[31]=0u+0x803D0000u; // 80108FFC
  c->r[3]=c->r[31]+0xFFFFC9E0u; // 80109000
  c->lr=0x80109008u; f_80004714(c); // 80109004
  c->r[5]=0u+0x80110000u; // 80109008
  c->r[3]=0u+0x80110000u; // 8010900C
  c->r[5]=c->r[5]+0xFFFF9D58u; // 80109010
  c->r[4]=c->r[31]+0xFFFFC9E0u; // 80109014
  c->r[3]=c->r[3]+0xFFFF9D64u; // 80109018
  c->r[0]=0u+0x00000005u; // 8010901C
  W32(c->r[4]+0x00000020u,c->r[5]); // 80109020
  W32(c->r[4]+0x00000024u,c->r[3]); // 80109024
  W8(c->r[4]+0x00000028u,c->r[0]); // 80109028
  c->lr=0x80109030u; f_80109044(c); // 8010902C
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109030
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109034
  c->lr=c->r[0]; // 80109038
  c->r[1]=c->r[1]+0x00000010u; // 8010903C
  return; // 80109040
}

// gap_conn_init
void f_80109044(Ctx* __restrict c) {
  trace_call(0x80109044u);
  c->r[10]=0u+0x80110000u; // 80109044
  c->r[9]=0u+0x803D0000u; // 80109048
  c->r[8]=0u+0x80110000u; // 8010904C
  c->r[7]=0u+0x80110000u; // 80109050
  c->r[6]=0u+0x80110000u; // 80109054
  c->r[5]=0u+0x80110000u; // 80109058
  c->r[4]=0u+0x80110000u; // 8010905C
  c->r[3]=0u+0x80110000u; // 80109060
  c->r[10]=c->r[10]+0xFFFF90B4u; // 80109064
  c->r[9]=c->r[9]+0xFFFFC9E0u; // 80109068
  c->r[0]=0u+0x00000000u; // 8010906C
  c->r[8]=c->r[8]+0xFFFF9240u; // 80109070
  c->r[7]=c->r[7]+0xFFFF941Cu; // 80109074
  c->r[6]=c->r[6]+0xFFFF9558u; // 80109078
  c->r[5]=c->r[5]+0xFFFF9744u; // 8010907C
  c->r[4]=c->r[4]+0xFFFF993Cu; // 80109080
  c->r[3]=c->r[3]+0xFFFF9A4Cu; // 80109084
  W32(c->r[9]+0x00000084u,c->r[10]); // 80109088
  W32(c->r[9]+0x00000088u,c->r[8]); // 8010908C
  W32(c->r[9]+0x0000008Cu,c->r[0]); // 80109090
  W32(c->r[9]+0x00000090u,c->r[7]); // 80109094
  W32(c->r[9]+0x00000094u,c->r[6]); // 80109098
  W32(c->r[9]+0x00000098u,c->r[5]); // 8010909C
  W32(c->r[9]+0x0000009Cu,c->r[0]); // 801090A0
  W32(c->r[9]+0x000000A0u,c->r[0]); // 801090A4
  W32(c->r[9]+0x000000A4u,c->r[4]); // 801090A8
  W32(c->r[9]+0x000000A8u,c->r[3]); // 801090AC
  return; // 801090B0
}

// gap_connect_ind
void f_801090B4(Ctx* __restrict c) {
  trace_call(0x801090B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801090B4
  c->r[0]=c->lr; // 801090B8
  W32(c->r[1]+0x00000024u,c->r[0]); // 801090BC
  c->r[11]=c->r[1]+0x00000020u; // 801090C0
  c->lr=0x801090C8u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 801090C4
  c->r[7]=0u+0x803D0000u; // 801090C8
  c->r[26]=c->r[3]|c->r[3]; // 801090CC
  c->r[7]=c->r[7]+0xFFFFC9E0u; // 801090D0
  c->r[31]=c->r[4]|c->r[4]; // 801090D4
  c->r[27]=c->r[5]|c->r[5]; // 801090D8
  c->r[28]=c->r[6]|c->r[6]; // 801090DC
  c->r[29]=c->r[7]+0x000000ACu; // 801090E0
  c->r[30]=0u+0x00000000u; // 801090E4
L_801090E8:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 801090E8
  cmpu(c,0,c->r[0],0x00000001u); // 801090EC
  if (!crb(c,2)) { goto L_80109124; } // 801090F0
  c->r[0]=R16(c->r[29]+0x00000010u); // 801090F4
  cmpu(c,0,c->r[0],c->r[27]); // 801090F8
  if (!crb(c,2)) { goto L_80109124; } // 801090FC
  c->r[0]=R8(c->r[29]+0x00000008u); // 80109100
  cmps(c,0,(int32_t)c->r[0],0); // 80109104
  if (crb(c,2)) { goto L_80109134; } // 80109108
  c->r[3]=c->r[26]|c->r[26]; // 8010910C
  c->r[4]=c->r[29]+0x00000009u; // 80109110
  c->r[5]=0u+0x00000006u; // 80109114
  c->lr=0x8010911Cu; f_800B3824(c); // 80109118
  cmps(c,0,(int32_t)c->r[3],0); // 8010911C
  if (crb(c,2)) { goto L_80109134; } // 80109120
L_80109124:;
  c->r[30]=c->r[30]+0x00000001u; // 80109124
  c->r[29]=c->r[29]+0x00000060u; // 80109128
  cmpu(c,0,c->r[30],0x00000008u); // 8010912C
  if (crb(c,0)) { IRQCHK(c); goto L_801090E8; } // 80109130
L_80109134:;
  c->r[0]=rotl(c->r[30],0)&0x0000FFFFu; // 80109134
  cmpu(c,0,c->r[0],0x00000008u); // 80109138
  if (!crb(c,2)) { goto L_801091BC; } // 8010913C
  c->r[3]=0u+0x803D0000u; // 80109140
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109144
  c->r[0]=R8(c->r[3]+0x00000028u); // 80109148
  cmpu(c,0,c->r[0],0x00000002u); // 8010914C
  if (crb(c,0)) { goto L_80109164; } // 80109150
  c->r[3]=0u+0x000E0000u; // 80109154
  c->r[4]=c->r[13]+0xFFFF87D0u; // 80109158
  c->r[3]=c->r[3]+0x00000001u; // 8010915C
  c->lr=0x80109164u; f_800F7280(c); // 80109160
L_80109164:;
  c->r[3]=0u+0x803D0000u; // 80109164
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109168
  c->r[0]=R8(c->r[3]+0x00000028u); // 8010916C
  cmpu(c,0,c->r[0],0x00000002u); // 80109170
  if (crb(c,0)) { goto L_8010918C; } // 80109174
  c->r[3]=0u+0x000E0000u; // 80109178
  c->r[4]=0u+0x80330000u; // 8010917C
  c->r[3]=c->r[3]+0x00000001u; // 80109180
  c->r[4]=c->r[4]+0xFFFFC050u; // 80109184
  c->lr=0x8010918Cu; f_800F7280(c); // 80109188
L_8010918C:;
  c->r[3]=0u+0x803D0000u; // 8010918C
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109190
  c->r[0]=R8(c->r[3]+0x00000028u); // 80109194
  cmpu(c,0,c->r[0],0x00000002u); // 80109198
  if (crb(c,0)) { goto L_801091B0; } // 8010919C
  c->r[3]=0u+0x000E0000u; // 801091A0
  c->r[4]=c->r[13]+0xFFFF87D0u; // 801091A4
  c->r[3]=c->r[3]+0x00000001u; // 801091A8
  c->lr=0x801091B0u; f_800F7280(c); // 801091AC
L_801091B0:;
  c->r[3]=c->r[31]|c->r[31]; // 801091B0
  c->lr=0x801091B8u; f_8011035C(c); // 801091B4
  goto L_80109228; // 801091B8
L_801091BC:;
  c->r[0]=0u+0x00000003u; // 801091BC
  c->r[4]=c->r[26]|c->r[26]; // 801091C0
  W8(c->r[29]+0x00000000u,c->r[0]); // 801091C4
  c->r[3]=c->r[29]+0x00000009u; // 801091C8
  c->r[5]=0u+0x00000006u; // 801091CC
  c->lr=0x801091D4u; f_800043C4(c); // 801091D0
  W16(c->r[29]+0x00000006u,c->r[31]); // 801091D4
  c->r[3]=c->r[26]|c->r[26]; // 801091D8
  c->r[4]=c->r[28]|c->r[28]; // 801091DC
  c->r[5]=c->r[31]|c->r[31]; // 801091E0
  c->r[6]=0u+0x00000000u; // 801091E4
  c->r[7]=0u+0x00000000u; // 801091E8
  c->lr=0x801091F0u; f_80110044(c); // 801091EC
  c->r[3]=0u+0x803D0000u; // 801091F0
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 801091F4
  c->r[0]=R8(c->r[3]+0x00000028u); // 801091F8
  cmpu(c,0,c->r[0],0x00000004u); // 801091FC
  if (crb(c,0)) { goto L_8010921C; } // 80109200
  c->r[3]=0u+0x000E0000u; // 80109204
  c->r[4]=0u+0x80330000u; // 80109208
  c->r[5]=R16(c->r[29]+0x00000006u); // 8010920C
  c->r[3]=c->r[3]+0x00000003u; // 80109210
  c->r[4]=c->r[4]+0xFFFFC094u; // 80109214
  c->lr=0x8010921Cu; f_800F72A0(c); // 80109218
L_8010921C:;
  c->r[3]=c->r[31]|c->r[31]; // 8010921C
  c->r[4]=c->r[29]+0x00000024u; // 80109220
  c->lr=0x80109228u; f_801101D4(c); // 80109224
L_80109228:;
  c->r[11]=c->r[1]+0x00000020u; // 80109228
  c->lr=0x80109230u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010922C
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109230
  c->lr=c->r[0]; // 80109234
  c->r[1]=c->r[1]+0x00000020u; // 80109238
  return; // 8010923C
}

// gap_connect_cfm
void f_80109240(Ctx* __restrict c) {
  trace_call(0x80109240u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109240
  c->r[0]=c->lr; // 80109244
  c->r[5]=0u+0x803D0000u; // 80109248
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010924C
  c->r[0]=0u+0x00000002u; // 80109250
  c->r[5]=c->r[5]+0xFFFFC9E0u; // 80109254
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109258
  c->r[31]=c->r[5]+0x000000ACu; // 8010925C
  c->r[5]=0u+0x00000000u; // 80109260
  W32(c->r[1]+0x00000008u,c->r[30]); // 80109264
  c->ctr=c->r[0]; // 80109268
L_8010926C:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8010926C
  cmps(c,0,(int32_t)c->r[0],0); // 80109270
  if (crb(c,2)) { goto L_80109288; } // 80109274
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109278
  cmpu(c,0,c->r[0],c->r[3]); // 8010927C
  if (!crb(c,2)) { goto L_80109288; } // 80109280
  goto L_801092F8; // 80109284
L_80109288:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 80109288
  c->r[5]=c->r[5]+0x00000001u; // 8010928C
  cmps(c,0,(int32_t)c->r[0],0); // 80109290
  if (crb(c,2)) { goto L_801092A8; } // 80109294
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109298
  cmpu(c,0,c->r[0],c->r[3]); // 8010929C
  if (!crb(c,2)) { goto L_801092A8; } // 801092A0
  goto L_801092F8; // 801092A4
L_801092A8:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801092A8
  c->r[5]=c->r[5]+0x00000001u; // 801092AC
  cmps(c,0,(int32_t)c->r[0],0); // 801092B0
  if (crb(c,2)) { goto L_801092C8; } // 801092B4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801092B8
  cmpu(c,0,c->r[0],c->r[3]); // 801092BC
  if (!crb(c,2)) { goto L_801092C8; } // 801092C0
  goto L_801092F8; // 801092C4
L_801092C8:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801092C8
  c->r[5]=c->r[5]+0x00000001u; // 801092CC
  cmps(c,0,(int32_t)c->r[0],0); // 801092D0
  if (crb(c,2)) { goto L_801092E8; } // 801092D4
  c->r[0]=R16(c->r[31]+0x00000006u); // 801092D8
  cmpu(c,0,c->r[0],c->r[3]); // 801092DC
  if (!crb(c,2)) { goto L_801092E8; } // 801092E0
  goto L_801092F8; // 801092E4
L_801092E8:;
  c->r[5]=c->r[5]+0x00000001u; // 801092E8
  c->r[31]=c->r[31]+0x00000060u; // 801092EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010926C; } // 801092F0
  c->r[31]=0u+0x00000000u; // 801092F4
L_801092F8:;
  cmps(c,0,(int32_t)c->r[31],0); // 801092F8
  if (crb(c,2)) { goto L_80109404; } // 801092FC
  cmps(c,0,(int32_t)c->r[4],0); // 80109300
  if (!crb(c,2)) { goto L_80109328; } // 80109304
  c->r[0]=R8(c->r[31]+0x00000000u); // 80109308
  cmpu(c,0,c->r[0],0x00000002u); // 8010930C
  if (!crb(c,2)) { goto L_80109328; } // 80109310
  c->r[0]=0u+0x00000003u; // 80109314
  c->r[4]=c->r[31]+0x00000024u; // 80109318
  W8(c->r[31]+0x00000000u,c->r[0]); // 8010931C
  c->lr=0x80109324u; f_801101D4(c); // 80109320
  goto L_80109404; // 80109324
L_80109328:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 80109328
  cmps(c,0,(int32_t)c->r[12],0); // 8010932C
  if (crb(c,2)) { goto L_80109344; } // 80109330
  c->r[3]=R16(c->r[31]+0x00000004u); // 80109334
  c->r[4]=0u+0x00000101u; // 80109338
  c->ctr=c->r[12]; // 8010933C
  if (true) { c->lr=0x80109344u; dispatch(c,c->ctr); } // 80109340
L_80109344:;
  c->r[30]=R16(c->r[31]+0x00000010u); // 80109344
  goto L_80109358; // 80109348
L_8010934C:;
  c->r[3]=c->r[31]+0x00000014u; // 8010934C
  c->lr=0x80109354u; f_800F4E70(c); // 80109350
  c->lr=0x80109358u; f_800F47C0(c); // 80109354
L_80109358:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80109358
  cmps(c,0,(int32_t)c->r[0],0); // 8010935C
  if (!crb(c,2)) { IRQCHK(c); goto L_8010934C; } // 80109360
  c->r[3]=0u+0x803D0000u; // 80109364
  c->r[4]=0u+0x00000000u; // 80109368
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 8010936C
  c->r[0]=0u+0x00000002u; // 80109370
  W8(c->r[31]+0x00000000u,c->r[4]); // 80109374
  c->r[4]=c->r[3]+0x000000ACu; // 80109378
  c->r[3]=0u+0x00000000u; // 8010937C
  c->ctr=c->r[0]; // 80109380
L_80109384:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 80109384
  cmps(c,0,(int32_t)c->r[0],0); // 80109388
  if (crb(c,2)) { goto L_8010939C; } // 8010938C
  c->r[0]=R16(c->r[4]+0x00000010u); // 80109390
  cmpu(c,0,c->r[0],c->r[30]); // 80109394
  if (crb(c,2)) { goto L_80109404; } // 80109398
L_8010939C:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 8010939C
  c->r[3]=c->r[3]+0x00000001u; // 801093A0
  cmps(c,0,(int32_t)c->r[0],0); // 801093A4
  if (crb(c,2)) { goto L_801093B8; } // 801093A8
  c->r[0]=R16(c->r[4]+0x00000070u); // 801093AC
  cmpu(c,0,c->r[0],c->r[30]); // 801093B0
  if (crb(c,2)) { goto L_80109404; } // 801093B4
L_801093B8:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801093B8
  c->r[3]=c->r[3]+0x00000001u; // 801093BC
  cmps(c,0,(int32_t)c->r[0],0); // 801093C0
  if (crb(c,2)) { goto L_801093D4; } // 801093C4
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801093C8
  cmpu(c,0,c->r[0],c->r[30]); // 801093CC
  if (crb(c,2)) { goto L_80109404; } // 801093D0
L_801093D4:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801093D4
  c->r[3]=c->r[3]+0x00000001u; // 801093D8
  cmps(c,0,(int32_t)c->r[0],0); // 801093DC
  if (crb(c,2)) { goto L_801093F0; } // 801093E0
  c->r[0]=R16(c->r[4]+0x00000130u); // 801093E4
  cmpu(c,0,c->r[0],c->r[30]); // 801093E8
  if (crb(c,2)) { goto L_80109404; } // 801093EC
L_801093F0:;
  c->r[3]=c->r[3]+0x00000001u; // 801093F0
  c->r[4]=c->r[4]+0x00000180u; // 801093F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109384; } // 801093F8
  c->r[3]=c->r[30]|c->r[30]; // 801093FC
  c->lr=0x80109404u; f_8010FD80(c); // 80109400
L_80109404:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109404
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109408
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010940C
  c->lr=c->r[0]; // 80109410
  c->r[1]=c->r[1]+0x00000010u; // 80109414
  return; // 80109418
}

// gap_config_ind
void f_8010941C(Ctx* __restrict c) {
  trace_call(0x8010941Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010941C
  c->r[0]=c->lr; // 80109420
  c->r[5]=0u+0x803D0000u; // 80109424
  c->r[6]=0u+0x00000000u; // 80109428
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010942C
  c->r[0]=0u+0x00000002u; // 80109430
  c->r[5]=c->r[5]+0xFFFFC9E0u; // 80109434
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109438
  c->r[31]=c->r[5]+0x000000ACu; // 8010943C
  c->ctr=c->r[0]; // 80109440
L_80109444:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80109444
  cmps(c,0,(int32_t)c->r[0],0); // 80109448
  if (crb(c,2)) { goto L_80109460; } // 8010944C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109450
  cmpu(c,0,c->r[0],c->r[3]); // 80109454
  if (!crb(c,2)) { goto L_80109460; } // 80109458
  goto L_801094D0; // 8010945C
L_80109460:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 80109460
  c->r[6]=c->r[6]+0x00000001u; // 80109464
  cmps(c,0,(int32_t)c->r[0],0); // 80109468
  if (crb(c,2)) { goto L_80109480; } // 8010946C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109470
  cmpu(c,0,c->r[0],c->r[3]); // 80109474
  if (!crb(c,2)) { goto L_80109480; } // 80109478
  goto L_801094D0; // 8010947C
L_80109480:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 80109480
  c->r[6]=c->r[6]+0x00000001u; // 80109484
  cmps(c,0,(int32_t)c->r[0],0); // 80109488
  if (crb(c,2)) { goto L_801094A0; } // 8010948C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109490
  cmpu(c,0,c->r[0],c->r[3]); // 80109494
  if (!crb(c,2)) { goto L_801094A0; } // 80109498
  goto L_801094D0; // 8010949C
L_801094A0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801094A0
  c->r[6]=c->r[6]+0x00000001u; // 801094A4
  cmps(c,0,(int32_t)c->r[0],0); // 801094A8
  if (crb(c,2)) { goto L_801094C0; } // 801094AC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801094B0
  cmpu(c,0,c->r[0],c->r[3]); // 801094B4
  if (!crb(c,2)) { goto L_801094C0; } // 801094B8
  goto L_801094D0; // 801094BC
L_801094C0:;
  c->r[6]=c->r[6]+0x00000001u; // 801094C0
  c->r[31]=c->r[31]+0x00000060u; // 801094C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109444; } // 801094C8
  c->r[31]=0u+0x00000000u; // 801094CC
L_801094D0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801094D0
  if (crb(c,2)) { goto L_80109544; } // 801094D4
  c->r[0]=R8(c->r[4]+0x00000002u); // 801094D8
  cmps(c,0,(int32_t)c->r[0],0); // 801094DC
  if (crb(c,2)) { goto L_801094F0; } // 801094E0
  c->r[0]=R16(c->r[4]+0x00000004u); // 801094E4
  cmpu(c,0,c->r[0],0x0000069Bu); // 801094E8
  if (!crb(c,1)) { goto L_801094FC; } // 801094EC
L_801094F0:;
  c->r[0]=0u+0x0000069Bu; // 801094F0
  W16(c->r[31]+0x00000012u,c->r[0]); // 801094F4
  goto L_80109500; // 801094F8
L_801094FC:;
  W16(c->r[31]+0x00000012u,c->r[0]); // 801094FC
L_80109500:;
  c->r[0]=0u+0x00000000u; // 80109500
  W8(c->r[4]+0x00000020u,c->r[0]); // 80109504
  W8(c->r[4]+0x00000002u,c->r[0]); // 80109508
  W16(c->r[4]+0x00000000u,c->r[0]); // 8010950C
  c->lr=0x80109514u; f_8011028C(c); // 80109510
  c->r[0]=R8(c->r[31]+0x00000001u); // 80109514
  c->r[3]=c->r[0]|0x00000002u; // 80109518
  c->r[0]=rotl(c->r[3],0)&0x00000004u; cr0(c,c->r[0]); // 8010951C
  W8(c->r[31]+0x00000001u,c->r[3]); // 80109520
  if (crb(c,2)) { goto L_80109544; } // 80109524
  c->r[0]=0u+0x00000004u; // 80109528
  c->r[4]=0u+0x00000100u; // 8010952C
  W8(c->r[31]+0x00000000u,c->r[0]); // 80109530
  c->r[12]=R32(c->r[31]+0x00000020u); // 80109534
  c->r[3]=R16(c->r[31]+0x00000004u); // 80109538
  c->ctr=c->r[12]; // 8010953C
  if (true) { c->lr=0x80109544u; dispatch(c,c->ctr); } // 80109540
L_80109544:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109544
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109548
  c->lr=c->r[0]; // 8010954C
  c->r[1]=c->r[1]+0x00000010u; // 80109550
  return; // 80109554
}

// gap_config_cfm
void f_80109558(Ctx* __restrict c) {
  trace_call(0x80109558u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109558
  c->r[0]=c->lr; // 8010955C
  c->r[5]=0u+0x803D0000u; // 80109560
  c->r[6]=0u+0x00000000u; // 80109564
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109568
  c->r[0]=0u+0x00000002u; // 8010956C
  c->r[5]=c->r[5]+0xFFFFC9E0u; // 80109570
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109574
  c->r[31]=c->r[5]+0x000000ACu; // 80109578
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010957C
  c->ctr=c->r[0]; // 80109580
L_80109584:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80109584
  cmps(c,0,(int32_t)c->r[0],0); // 80109588
  if (crb(c,2)) { goto L_801095A0; } // 8010958C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109590
  cmpu(c,0,c->r[0],c->r[3]); // 80109594
  if (!crb(c,2)) { goto L_801095A0; } // 80109598
  goto L_80109610; // 8010959C
L_801095A0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801095A0
  c->r[6]=c->r[6]+0x00000001u; // 801095A4
  cmps(c,0,(int32_t)c->r[0],0); // 801095A8
  if (crb(c,2)) { goto L_801095C0; } // 801095AC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801095B0
  cmpu(c,0,c->r[0],c->r[3]); // 801095B4
  if (!crb(c,2)) { goto L_801095C0; } // 801095B8
  goto L_80109610; // 801095BC
L_801095C0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801095C0
  c->r[6]=c->r[6]+0x00000001u; // 801095C4
  cmps(c,0,(int32_t)c->r[0],0); // 801095C8
  if (crb(c,2)) { goto L_801095E0; } // 801095CC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801095D0
  cmpu(c,0,c->r[0],c->r[3]); // 801095D4
  if (!crb(c,2)) { goto L_801095E0; } // 801095D8
  goto L_80109610; // 801095DC
L_801095E0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801095E0
  c->r[6]=c->r[6]+0x00000001u; // 801095E4
  cmps(c,0,(int32_t)c->r[0],0); // 801095E8
  if (crb(c,2)) { goto L_80109600; } // 801095EC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801095F0
  cmpu(c,0,c->r[0],c->r[3]); // 801095F4
  if (!crb(c,2)) { goto L_80109600; } // 801095F8
  goto L_80109610; // 801095FC
L_80109600:;
  c->r[6]=c->r[6]+0x00000001u; // 80109600
  c->r[31]=c->r[31]+0x00000060u; // 80109604
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109584; } // 80109608
  c->r[31]=0u+0x00000000u; // 8010960C
L_80109610:;
  cmps(c,0,(int32_t)c->r[31],0); // 80109610
  if (crb(c,2)) { goto L_8010972C; } // 80109614
  c->r[0]=R16(c->r[4]+0x00000000u); // 80109618
  cmps(c,0,(int32_t)c->r[0],0); // 8010961C
  if (!crb(c,2)) { goto L_80109658; } // 80109620
  c->r[0]=R8(c->r[31]+0x00000001u); // 80109624
  c->r[3]=c->r[0]|0x00000004u; // 80109628
  c->r[0]=rotl(c->r[3],0)&0x00000002u; cr0(c,c->r[0]); // 8010962C
  W8(c->r[31]+0x00000001u,c->r[3]); // 80109630
  if (crb(c,2)) { goto L_8010972C; } // 80109634
  c->r[0]=0u+0x00000004u; // 80109638
  c->r[4]=0u+0x00000100u; // 8010963C
  W8(c->r[31]+0x00000000u,c->r[0]); // 80109640
  c->r[12]=R32(c->r[31]+0x00000020u); // 80109644
  c->r[3]=R16(c->r[31]+0x00000004u); // 80109648
  c->ctr=c->r[12]; // 8010964C
  if (true) { c->lr=0x80109654u; dispatch(c,c->ctr); } // 80109650
  goto L_8010972C; // 80109654
L_80109658:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 80109658
  c->r[4]=0u+0x00000101u; // 8010965C
  c->r[3]=R16(c->r[31]+0x00000004u); // 80109660
  c->ctr=c->r[12]; // 80109664
  if (true) { c->lr=0x8010966Cu; dispatch(c,c->ctr); } // 80109668
  c->r[30]=R16(c->r[31]+0x00000010u); // 8010966C
  goto L_80109680; // 80109670
L_80109674:;
  c->r[3]=c->r[31]+0x00000014u; // 80109674
  c->lr=0x8010967Cu; f_800F4E70(c); // 80109678
  c->lr=0x80109680u; f_800F47C0(c); // 8010967C
L_80109680:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80109680
  cmps(c,0,(int32_t)c->r[0],0); // 80109684
  if (!crb(c,2)) { IRQCHK(c); goto L_80109674; } // 80109688
  c->r[3]=0u+0x803D0000u; // 8010968C
  c->r[4]=0u+0x00000000u; // 80109690
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109694
  c->r[0]=0u+0x00000002u; // 80109698
  W8(c->r[31]+0x00000000u,c->r[4]); // 8010969C
  c->r[4]=c->r[3]+0x000000ACu; // 801096A0
  c->r[3]=0u+0x00000000u; // 801096A4
  c->ctr=c->r[0]; // 801096A8
L_801096AC:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801096AC
  cmps(c,0,(int32_t)c->r[0],0); // 801096B0
  if (crb(c,2)) { goto L_801096C4; } // 801096B4
  c->r[0]=R16(c->r[4]+0x00000010u); // 801096B8
  cmpu(c,0,c->r[0],c->r[30]); // 801096BC
  if (crb(c,2)) { goto L_8010972C; } // 801096C0
L_801096C4:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801096C4
  c->r[3]=c->r[3]+0x00000001u; // 801096C8
  cmps(c,0,(int32_t)c->r[0],0); // 801096CC
  if (crb(c,2)) { goto L_801096E0; } // 801096D0
  c->r[0]=R16(c->r[4]+0x00000070u); // 801096D4
  cmpu(c,0,c->r[0],c->r[30]); // 801096D8
  if (crb(c,2)) { goto L_8010972C; } // 801096DC
L_801096E0:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801096E0
  c->r[3]=c->r[3]+0x00000001u; // 801096E4
  cmps(c,0,(int32_t)c->r[0],0); // 801096E8
  if (crb(c,2)) { goto L_801096FC; } // 801096EC
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801096F0
  cmpu(c,0,c->r[0],c->r[30]); // 801096F4
  if (crb(c,2)) { goto L_8010972C; } // 801096F8
L_801096FC:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801096FC
  c->r[3]=c->r[3]+0x00000001u; // 80109700
  cmps(c,0,(int32_t)c->r[0],0); // 80109704
  if (crb(c,2)) { goto L_80109718; } // 80109708
  c->r[0]=R16(c->r[4]+0x00000130u); // 8010970C
  cmpu(c,0,c->r[0],c->r[30]); // 80109710
  if (crb(c,2)) { goto L_8010972C; } // 80109714
L_80109718:;
  c->r[3]=c->r[3]+0x00000001u; // 80109718
  c->r[4]=c->r[4]+0x00000180u; // 8010971C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801096AC; } // 80109720
  c->r[3]=c->r[30]|c->r[30]; // 80109724
  c->lr=0x8010972Cu; f_8010FD80(c); // 80109728
L_8010972C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010972C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109730
  c->r[30]=R32(c->r[1]+0x00000008u); // 80109734
  c->lr=c->r[0]; // 80109738
  c->r[1]=c->r[1]+0x00000010u; // 8010973C
  return; // 80109740
}

// gap_disconnect_ind
void f_80109744(Ctx* __restrict c) {
  trace_call(0x80109744u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109744
  c->r[0]=c->lr; // 80109748
  c->r[5]=0u+0x803D0000u; // 8010974C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109750
  c->r[5]=c->r[5]+0xFFFFC9E0u; // 80109754
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80109758
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010975C
  c->r[30]=c->r[4]|c->r[4]; // 80109760
  W32(c->r[1]+0x00000014u,c->r[29]); // 80109764
  c->r[29]=c->r[3]|c->r[3]; // 80109768
  c->r[0]=R8(c->r[5]+0x00000028u); // 8010976C
  cmpu(c,0,c->r[0],0x00000004u); // 80109770
  if (crb(c,0)) { goto L_80109790; } // 80109774
  c->r[3]=0u+0x000E0000u; // 80109778
  c->r[4]=0u+0x80330000u; // 8010977C
  c->r[5]=c->r[29]|c->r[29]; // 80109780
  c->r[3]=c->r[3]+0x00000003u; // 80109784
  c->r[4]=c->r[4]+0xFFFFC0C0u; // 80109788
  c->lr=0x80109790u; f_800F72A0(c); // 8010978C
L_80109790:;
  c->r[3]=0u+0x803D0000u; // 80109790
  c->r[0]=0u+0x00000002u; // 80109794
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109798
  c->r[4]=0u+0x00000000u; // 8010979C
  c->r[31]=c->r[3]+0x000000ACu; // 801097A0
  c->ctr=c->r[0]; // 801097A4
L_801097A8:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 801097A8
  cmps(c,0,(int32_t)c->r[0],0); // 801097AC
  if (crb(c,2)) { goto L_801097C4; } // 801097B0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801097B4
  cmpu(c,0,c->r[0],c->r[29]); // 801097B8
  if (!crb(c,2)) { goto L_801097C4; } // 801097BC
  goto L_80109834; // 801097C0
L_801097C4:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801097C4
  c->r[4]=c->r[4]+0x00000001u; // 801097C8
  cmps(c,0,(int32_t)c->r[0],0); // 801097CC
  if (crb(c,2)) { goto L_801097E4; } // 801097D0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801097D4
  cmpu(c,0,c->r[0],c->r[29]); // 801097D8
  if (!crb(c,2)) { goto L_801097E4; } // 801097DC
  goto L_80109834; // 801097E0
L_801097E4:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801097E4
  c->r[4]=c->r[4]+0x00000001u; // 801097E8
  cmps(c,0,(int32_t)c->r[0],0); // 801097EC
  if (crb(c,2)) { goto L_80109804; } // 801097F0
  c->r[0]=R16(c->r[31]+0x00000006u); // 801097F4
  cmpu(c,0,c->r[0],c->r[29]); // 801097F8
  if (!crb(c,2)) { goto L_80109804; } // 801097FC
  goto L_80109834; // 80109800
L_80109804:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 80109804
  c->r[4]=c->r[4]+0x00000001u; // 80109808
  cmps(c,0,(int32_t)c->r[0],0); // 8010980C
  if (crb(c,2)) { goto L_80109824; } // 80109810
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109814
  cmpu(c,0,c->r[0],c->r[29]); // 80109818
  if (!crb(c,2)) { goto L_80109824; } // 8010981C
  goto L_80109834; // 80109820
L_80109824:;
  c->r[4]=c->r[4]+0x00000001u; // 80109824
  c->r[31]=c->r[31]+0x00000060u; // 80109828
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801097A8; } // 8010982C
  c->r[31]=0u+0x00000000u; // 80109830
L_80109834:;
  cmps(c,0,(int32_t)c->r[31],0); // 80109834
  if (crb(c,2)) { goto L_80109920; } // 80109838
  cmps(c,0,(int32_t)c->r[30],0); // 8010983C
  if (crb(c,2)) { goto L_8010984C; } // 80109840
  c->r[3]=c->r[29]|c->r[29]; // 80109844
  c->lr=0x8010984Cu; f_80110400(c); // 80109848
L_8010984C:;
  c->r[12]=R32(c->r[31]+0x00000020u); // 8010984C
  c->r[4]=0u+0x00000101u; // 80109850
  c->r[3]=R16(c->r[31]+0x00000004u); // 80109854
  c->ctr=c->r[12]; // 80109858
  if (true) { c->lr=0x80109860u; dispatch(c,c->ctr); } // 8010985C
  c->r[30]=R16(c->r[31]+0x00000010u); // 80109860
  goto L_80109874; // 80109864
L_80109868:;
  c->r[3]=c->r[31]+0x00000014u; // 80109868
  c->lr=0x80109870u; f_800F4E70(c); // 8010986C
  c->lr=0x80109874u; f_800F47C0(c); // 80109870
L_80109874:;
  c->r[0]=R32(c->r[31]+0x00000014u); // 80109874
  cmps(c,0,(int32_t)c->r[0],0); // 80109878
  if (!crb(c,2)) { IRQCHK(c); goto L_80109868; } // 8010987C
  c->r[3]=0u+0x803D0000u; // 80109880
  c->r[4]=0u+0x00000000u; // 80109884
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109888
  c->r[0]=0u+0x00000002u; // 8010988C
  W8(c->r[31]+0x00000000u,c->r[4]); // 80109890
  c->r[4]=c->r[3]+0x000000ACu; // 80109894
  c->r[3]=0u+0x00000000u; // 80109898
  c->ctr=c->r[0]; // 8010989C
L_801098A0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 801098A0
  cmps(c,0,(int32_t)c->r[0],0); // 801098A4
  if (crb(c,2)) { goto L_801098B8; } // 801098A8
  c->r[0]=R16(c->r[4]+0x00000010u); // 801098AC
  cmpu(c,0,c->r[0],c->r[30]); // 801098B0
  if (crb(c,2)) { goto L_80109920; } // 801098B4
L_801098B8:;
  c->r[0]=R8(c->r[4]+0x00000060u); // 801098B8
  c->r[3]=c->r[3]+0x00000001u; // 801098BC
  cmps(c,0,(int32_t)c->r[0],0); // 801098C0
  if (crb(c,2)) { goto L_801098D4; } // 801098C4
  c->r[0]=R16(c->r[4]+0x00000070u); // 801098C8
  cmpu(c,0,c->r[0],c->r[30]); // 801098CC
  if (crb(c,2)) { goto L_80109920; } // 801098D0
L_801098D4:;
  c->r[0]=R8(c->r[4]+0x000000C0u); // 801098D4
  c->r[3]=c->r[3]+0x00000001u; // 801098D8
  cmps(c,0,(int32_t)c->r[0],0); // 801098DC
  if (crb(c,2)) { goto L_801098F0; } // 801098E0
  c->r[0]=R16(c->r[4]+0x000000D0u); // 801098E4
  cmpu(c,0,c->r[0],c->r[30]); // 801098E8
  if (crb(c,2)) { goto L_80109920; } // 801098EC
L_801098F0:;
  c->r[0]=R8(c->r[4]+0x00000120u); // 801098F0
  c->r[3]=c->r[3]+0x00000001u; // 801098F4
  cmps(c,0,(int32_t)c->r[0],0); // 801098F8
  if (crb(c,2)) { goto L_8010990C; } // 801098FC
  c->r[0]=R16(c->r[4]+0x00000130u); // 80109900
  cmpu(c,0,c->r[0],c->r[30]); // 80109904
  if (crb(c,2)) { goto L_80109920; } // 80109908
L_8010990C:;
  c->r[3]=c->r[3]+0x00000001u; // 8010990C
  c->r[4]=c->r[4]+0x00000180u; // 80109910
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_801098A0; } // 80109914
  c->r[3]=c->r[30]|c->r[30]; // 80109918
  c->lr=0x80109920u; f_8010FD80(c); // 8010991C
L_80109920:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109920
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80109924
  c->r[30]=R32(c->r[1]+0x00000018u); // 80109928
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010992C
  c->lr=c->r[0]; // 80109930
  c->r[1]=c->r[1]+0x00000020u; // 80109934
  return; // 80109938
}

// gap_data_ind
void f_8010993C(Ctx* __restrict c) {
  trace_call(0x8010993Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010993C
  c->r[0]=c->lr; // 80109940
  c->r[5]=0u+0x803D0000u; // 80109944
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109948
  c->r[0]=0u+0x00000002u; // 8010994C
  c->r[5]=c->r[5]+0xFFFFC9E0u; // 80109950
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109954
  c->r[31]=c->r[5]+0x000000ACu; // 80109958
  c->r[5]=0u+0x00000000u; // 8010995C
  c->ctr=c->r[0]; // 80109960
L_80109964:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80109964
  cmps(c,0,(int32_t)c->r[0],0); // 80109968
  if (crb(c,2)) { goto L_80109980; } // 8010996C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109970
  cmpu(c,0,c->r[0],c->r[3]); // 80109974
  if (!crb(c,2)) { goto L_80109980; } // 80109978
  goto L_801099F0; // 8010997C
L_80109980:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 80109980
  c->r[5]=c->r[5]+0x00000001u; // 80109984
  cmps(c,0,(int32_t)c->r[0],0); // 80109988
  if (crb(c,2)) { goto L_801099A0; } // 8010998C
  c->r[0]=R16(c->r[31]+0x00000006u); // 80109990
  cmpu(c,0,c->r[0],c->r[3]); // 80109994
  if (!crb(c,2)) { goto L_801099A0; } // 80109998
  goto L_801099F0; // 8010999C
L_801099A0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801099A0
  c->r[5]=c->r[5]+0x00000001u; // 801099A4
  cmps(c,0,(int32_t)c->r[0],0); // 801099A8
  if (crb(c,2)) { goto L_801099C0; } // 801099AC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801099B0
  cmpu(c,0,c->r[0],c->r[3]); // 801099B4
  if (!crb(c,2)) { goto L_801099C0; } // 801099B8
  goto L_801099F0; // 801099BC
L_801099C0:;
  {uint32_t ea=c->r[31]+0x00000060u; c->r[0]=R8(ea); c->r[31]=ea;} // 801099C0
  c->r[5]=c->r[5]+0x00000001u; // 801099C4
  cmps(c,0,(int32_t)c->r[0],0); // 801099C8
  if (crb(c,2)) { goto L_801099E0; } // 801099CC
  c->r[0]=R16(c->r[31]+0x00000006u); // 801099D0
  cmpu(c,0,c->r[0],c->r[3]); // 801099D4
  if (!crb(c,2)) { goto L_801099E0; } // 801099D8
  goto L_801099F0; // 801099DC
L_801099E0:;
  c->r[5]=c->r[5]+0x00000001u; // 801099E0
  c->r[31]=c->r[31]+0x00000060u; // 801099E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109964; } // 801099E8
  c->r[31]=0u+0x00000000u; // 801099EC
L_801099F0:;
  cmps(c,0,(int32_t)c->r[31],0); // 801099F0
  if (!crb(c,2)) { goto L_80109A04; } // 801099F4
  c->r[3]=c->r[4]|c->r[4]; // 801099F8
  c->lr=0x80109A00u; f_800F47C0(c); // 801099FC
  goto L_80109A38; // 80109A00
L_80109A04:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 80109A04
  cmpu(c,0,c->r[0],0x00000004u); // 80109A08
  if (!crb(c,2)) { goto L_80109A30; } // 80109A0C
  c->r[3]=c->r[31]+0x00000014u; // 80109A10
  c->lr=0x80109A18u; f_800F4BF0(c); // 80109A14
  c->r[12]=R32(c->r[31]+0x00000020u); // 80109A18
  c->r[4]=0u+0x00000102u; // 80109A1C
  c->r[3]=R16(c->r[31]+0x00000004u); // 80109A20
  c->ctr=c->r[12]; // 80109A24
  if (true) { c->lr=0x80109A2Cu; dispatch(c,c->ctr); } // 80109A28
  goto L_80109A38; // 80109A2C
L_80109A30:;
  c->r[3]=c->r[4]|c->r[4]; // 80109A30
  c->lr=0x80109A38u; f_800F47C0(c); // 80109A34
L_80109A38:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109A38
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109A3C
  c->lr=c->r[0]; // 80109A40
  c->r[1]=c->r[1]+0x00000010u; // 80109A44
  return; // 80109A48
}

// gap_congestion_ind
void f_80109A4C(Ctx* __restrict c) {
  trace_call(0x80109A4Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109A4C
  c->r[0]=c->lr; // 80109A50
  c->r[5]=0u+0x803D0000u; // 80109A54
  W32(c->r[1]+0x00000014u,c->r[0]); // 80109A58
  c->r[5]=c->r[5]+0xFFFFC9E0u; // 80109A5C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 80109A60
  c->r[31]=c->r[4]|c->r[4]; // 80109A64
  W32(c->r[1]+0x00000008u,c->r[30]); // 80109A68
  c->r[30]=c->r[3]|c->r[3]; // 80109A6C
  c->r[0]=R8(c->r[5]+0x00000028u); // 80109A70
  cmpu(c,0,c->r[0],0x00000004u); // 80109A74
  if (crb(c,0)) { goto L_80109A98; } // 80109A78
  c->r[3]=0u+0x000E0000u; // 80109A7C
  c->r[4]=0u+0x80330000u; // 80109A80
  c->r[5]=c->r[31]|c->r[31]; // 80109A84
  c->r[6]=c->r[30]|c->r[30]; // 80109A88
  c->r[3]=c->r[3]+0x00000003u; // 80109A8C
  c->r[4]=c->r[4]+0xFFFFC0E8u; // 80109A90
  c->lr=0x80109A98u; f_800F72C0(c); // 80109A94
L_80109A98:;
  c->r[3]=0u+0x803D0000u; // 80109A98
  c->r[0]=0u+0x00000002u; // 80109A9C
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109AA0
  c->r[4]=0u+0x00000000u; // 80109AA4
  c->r[3]=c->r[3]+0x000000ACu; // 80109AA8
  c->ctr=c->r[0]; // 80109AAC
L_80109AB0:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 80109AB0
  cmps(c,0,(int32_t)c->r[0],0); // 80109AB4
  if (crb(c,2)) { goto L_80109ACC; } // 80109AB8
  c->r[0]=R16(c->r[3]+0x00000006u); // 80109ABC
  cmpu(c,0,c->r[0],c->r[30]); // 80109AC0
  if (!crb(c,2)) { goto L_80109ACC; } // 80109AC4
  goto L_80109B3C; // 80109AC8
L_80109ACC:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 80109ACC
  c->r[4]=c->r[4]+0x00000001u; // 80109AD0
  cmps(c,0,(int32_t)c->r[0],0); // 80109AD4
  if (crb(c,2)) { goto L_80109AEC; } // 80109AD8
  c->r[0]=R16(c->r[3]+0x00000006u); // 80109ADC
  cmpu(c,0,c->r[0],c->r[30]); // 80109AE0
  if (!crb(c,2)) { goto L_80109AEC; } // 80109AE4
  goto L_80109B3C; // 80109AE8
L_80109AEC:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 80109AEC
  c->r[4]=c->r[4]+0x00000001u; // 80109AF0
  cmps(c,0,(int32_t)c->r[0],0); // 80109AF4
  if (crb(c,2)) { goto L_80109B0C; } // 80109AF8
  c->r[0]=R16(c->r[3]+0x00000006u); // 80109AFC
  cmpu(c,0,c->r[0],c->r[30]); // 80109B00
  if (!crb(c,2)) { goto L_80109B0C; } // 80109B04
  goto L_80109B3C; // 80109B08
L_80109B0C:;
  {uint32_t ea=c->r[3]+0x00000060u; c->r[0]=R8(ea); c->r[3]=ea;} // 80109B0C
  c->r[4]=c->r[4]+0x00000001u; // 80109B10
  cmps(c,0,(int32_t)c->r[0],0); // 80109B14
  if (crb(c,2)) { goto L_80109B2C; } // 80109B18
  c->r[0]=R16(c->r[3]+0x00000006u); // 80109B1C
  cmpu(c,0,c->r[0],c->r[30]); // 80109B20
  if (!crb(c,2)) { goto L_80109B2C; } // 80109B24
  goto L_80109B3C; // 80109B28
L_80109B2C:;
  c->r[4]=c->r[4]+0x00000001u; // 80109B2C
  c->r[3]=c->r[3]+0x00000060u; // 80109B30
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_80109AB0; } // 80109B34
  c->r[3]=0u+0x00000000u; // 80109B38
L_80109B3C:;
  cmps(c,0,(int32_t)c->r[3],0); // 80109B3C
  if (crb(c,2)) { goto L_80109B68; } // 80109B40
  c->r[0]=0u-c->r[31]; // 80109B44
  c->r[12]=R32(c->r[3]+0x00000020u); // 80109B48
  c->r[0]=c->r[0]|c->r[31]; // 80109B4C
  c->r[3]=R16(c->r[3]+0x00000004u); // 80109B50
  c->r[4]=sraw(c,c->r[0],31); // 80109B54
  c->r[0]=c->r[4]+0x00000104u; // 80109B58
  c->r[4]=rotl(c->r[0],0)&0x0000FFFFu; // 80109B5C
  c->ctr=c->r[12]; // 80109B60
  if (true) { c->lr=0x80109B68u; dispatch(c,c->ctr); } // 80109B64
L_80109B68:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80109B68
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80109B6C
  c->r[30]=R32(c->r[1]+0x00000008u); // 80109B70
  c->lr=c->r[0]; // 80109B74
  c->r[1]=c->r[1]+0x00000010u; // 80109B78
  return; // 80109B7C
}

// btm_cback
void f_80109B80(Ctx* __restrict c) {
  trace_call(0x80109B80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109B80
  c->r[0]=c->lr; // 80109B84
  c->r[7]=0u+0x80330000u; // 80109B88
  cmpu(c,0,c->r[3],0x00000002u); // 80109B8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109B90
  c->r[7]=c->r[7]+0xFFFFC120u; // 80109B94
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80109B98
  W32(c->r[1]+0x00000018u,c->r[30]); // 80109B9C
  c->r[30]=c->r[4]|c->r[4]; // 80109BA0
  if (!crb(c,0)) { goto L_80109D40; } // 80109BA4
  c->r[8]=0u+0x803D0000u; // 80109BA8
  c->r[0]=rotl(c->r[3],4)&0x000FFFF0u; // 80109BAC
  c->r[8]=c->r[8]+0xFFFFC9E0u; // 80109BB0
  c->r[31]=c->r[8]+c->r[0]; // 80109BB4
  c->r[0]=R8(c->r[31]+0x0000000Fu); // 80109BB8
  cmps(c,0,(int32_t)c->r[0],0); // 80109BBC
  if (crb(c,2)) { goto L_80109D40; } // 80109BC0
  c->r[0]=R16(c->r[31]+0x0000000Cu); // 80109BC4
  cmps(c,0,(int32_t)c->r[0],3); // 80109BC8
  if (crb(c,2)) { goto L_80109C38; } // 80109BCC
  if (!crb(c,0)) { goto L_80109BE0; } // 80109BD0
  cmps(c,0,(int32_t)c->r[0],2); // 80109BD4
  if (!crb(c,0)) { goto L_80109BEC; } // 80109BD8
  goto L_80109D10; // 80109BDC
L_80109BE0:;
  cmps(c,0,(int32_t)c->r[0],5); // 80109BE0
  if (!crb(c,0)) { goto L_80109D10; } // 80109BE4
  goto L_80109C84; // 80109BE8
L_80109BEC:;
  c->r[6]=R8(c->r[4]+0x00000001u); // 80109BEC
  c->r[3]=0u+0x00000114u; // 80109BF0
  c->r[0]=R8(c->r[8]+0x00000028u); // 80109BF4
  c->r[30]=c->r[1]+0x00000008u; // 80109BF8
  W8(c->r[1]+0x0000000Au,c->r[6]); // 80109BFC
  cmpu(c,0,c->r[0],0x00000004u); // 80109C00
  c->r[0]=R8(c->r[4]+0x00000000u); // 80109C04
  c->r[0]=cntlz(c->r[0]); // 80109C08
  c->r[0]=rotl(c->r[0],27)&0x00000001u; // 80109C0C
  c->r[0]=0u-c->r[0]; // 80109C10
  c->r[0]=c->r[3]&~c->r[0]; // 80109C14
  W16(c->r[1]+0x00000008u,c->r[0]); // 80109C18
  if (crb(c,0)) { goto L_80109D10; } // 80109C1C
  c->r[3]=0u+0x000E0000u; // 80109C20
  c->r[4]=c->r[7]+0x00000000u; // 80109C24
  c->r[3]=c->r[3]+0x00000003u; // 80109C28
  c->r[5]=rotl(c->r[0],0)&0x0000FFFFu; // 80109C2C
  c->lr=0x80109C34u; f_800F72C0(c); // 80109C30
  goto L_80109D10; // 80109C34
L_80109C38:;
  c->r[5]=R16(c->r[4]+0x00000000u); // 80109C38
  cmps(c,0,(int32_t)c->r[5],0); // 80109C3C
  if (crb(c,2)) { goto L_80109C64; } // 80109C40
  c->r[0]=R8(c->r[8]+0x00000028u); // 80109C44
  cmpu(c,0,c->r[0],0x00000004u); // 80109C48
  if (crb(c,0)) { goto L_80109D10; } // 80109C4C
  c->r[3]=0u+0x000E0000u; // 80109C50
  c->r[4]=c->r[7]+0x0000003Cu; // 80109C54
  c->r[3]=c->r[3]+0x00000003u; // 80109C58
  c->lr=0x80109C60u; f_800F72A0(c); // 80109C5C
  goto L_80109D10; // 80109C60
L_80109C64:;
  c->r[0]=R8(c->r[8]+0x00000028u); // 80109C64
  cmpu(c,0,c->r[0],0x00000004u); // 80109C68
  if (crb(c,0)) { goto L_80109D10; } // 80109C6C
  c->r[3]=0u+0x000E0000u; // 80109C70
  c->r[4]=c->r[7]+0x00000070u; // 80109C74
  c->r[3]=c->r[3]+0x00000003u; // 80109C78
  c->lr=0x80109C80u; f_800F7280(c); // 80109C7C
  goto L_80109D10; // 80109C80
L_80109C84:;
  c->r[0]=R16(c->r[4]+0x00000000u); // 80109C84
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80109C88
  cmpu(c,0,c->r[0],0x00000008u); // 80109C8C
  if (crb(c,1)) { goto L_80109CE4; } // 80109C90
  c->r[3]=0u+0x80330000u; // 80109C94
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80109C98
  c->r[3]=c->r[3]+0xFFFFC1ECu; // 80109C9C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80109CA0
  c->ctr=c->r[3]; // 80109CA4
  if (true) { switch (c->ctr) { case 0x80109CACu: goto L_80109CAC; case 0x80109CB4u: goto L_80109CB4; case 0x80109CBCu: goto L_80109CBC; case 0x80109CC4u: goto L_80109CC4; case 0x80109CCCu: goto L_80109CCC; case 0x80109CD4u: goto L_80109CD4; case 0x80109CDCu: goto L_80109CDC; case 0x80109CE4u: goto L_80109CE4; default: break; } dispatch(c,c->ctr); return; } // 80109CA8
L_80109CAC:;
  c->r[5]=0u+0x00000000u; // 80109CAC
  goto L_80109CE8; // 80109CB0
L_80109CB4:;
  c->r[5]=0u+0x0000010Bu; // 80109CB4
  goto L_80109CE8; // 80109CB8
L_80109CBC:;
  c->r[5]=0u+0x00000103u; // 80109CBC
  goto L_80109CE8; // 80109CC0
L_80109CC4:;
  c->r[5]=0u+0x00000109u; // 80109CC4
  goto L_80109CE8; // 80109CC8
L_80109CCC:;
  c->r[5]=0u+0x0000010Cu; // 80109CCC
  goto L_80109CE8; // 80109CD0
L_80109CD4:;
  c->r[5]=0u+0x0000010Du; // 80109CD4
  goto L_80109CE8; // 80109CD8
L_80109CDC:;
  c->r[5]=0u+0x00000115u; // 80109CDC
  goto L_80109CE8; // 80109CE0
L_80109CE4:;
  c->r[5]=0u+0x00000114u; // 80109CE4
L_80109CE8:;
  c->r[3]=0u+0x803D0000u; // 80109CE8
  W16(c->r[4]+0x00000000u,c->r[5]); // 80109CEC
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 80109CF0
  c->r[0]=R8(c->r[3]+0x00000028u); // 80109CF4
  cmpu(c,0,c->r[0],0x00000004u); // 80109CF8
  if (crb(c,0)) { goto L_80109D10; } // 80109CFC
  c->r[3]=0u+0x000E0000u; // 80109D00
  c->r[4]=c->r[7]+0x00000098u; // 80109D04
  c->r[3]=c->r[3]+0x00000003u; // 80109D08
  c->lr=0x80109D10u; f_800F72A0(c); // 80109D0C
L_80109D10:;
  c->r[12]=R32(c->r[31]+0x00000004u); // 80109D10
  cmps(c,0,(int32_t)c->r[12],0); // 80109D14
  if (crb(c,2)) { goto L_80109D2C; } // 80109D18
  c->r[4]=c->r[30]|c->r[30]; // 80109D1C
  c->r[3]=R16(c->r[31]+0x0000000Cu); // 80109D20
  c->ctr=c->r[12]; // 80109D24
  if (true) { c->lr=0x80109D2Cu; dispatch(c,c->ctr); } // 80109D28
L_80109D2C:;
  cmps(c,0,(int32_t)c->r[31],0); // 80109D2C
  if (crb(c,2)) { goto L_80109D40; } // 80109D30
  c->r[0]=0u+0x00000000u; // 80109D34
  W32(c->r[31]+0x00000004u,c->r[0]); // 80109D38
  W8(c->r[31]+0x0000000Fu,c->r[0]); // 80109D3C
L_80109D40:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109D40
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80109D44
  c->r[30]=R32(c->r[1]+0x00000018u); // 80109D48
  c->lr=c->r[0]; // 80109D4C
  c->r[1]=c->r[1]+0x00000020u; // 80109D50
  return; // 80109D54
}

// gap_btm_cback0
void f_80109D58(Ctx* __restrict c) {
  trace_call(0x80109D58u);
  c->r[4]=c->r[3]|c->r[3]; // 80109D58
  c->r[3]=0u+0x00000000u; // 80109D5C
  f_80109B80(c); return; // 80109D60
}

// gap_btm_cback1
void f_80109D64(Ctx* __restrict c) {
  trace_call(0x80109D64u);
  c->r[4]=c->r[3]|c->r[3]; // 80109D64
  c->r[3]=0u+0x00000001u; // 80109D68
  f_80109B80(c); return; // 80109D6C
}

// gap_find_addr_name_cb
void f_80109D70(Ctx* __restrict c) {
  trace_call(0x80109D70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109D70
  c->r[0]=c->lr; // 80109D74
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109D78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80109D7C
  c->r[31]=0u+0x803D0000u; // 80109D80
  c->r[31]=c->r[31]+0xFFFFC9E0u; // 80109D84
  W32(c->r[1]+0x00000018u,c->r[30]); // 80109D88
  c->r[30]=c->r[31]+0x00000034u; // 80109D8C
  W32(c->r[1]+0x00000014u,c->r[29]); // 80109D90
  c->r[29]=c->r[3]|c->r[3]; // 80109D94
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 80109D98
  cmps(c,0,(int32_t)c->r[0],0); // 80109D9C
  if (crb(c,2)) { goto L_80109F6C; } // 80109DA0
  c->r[5]=R16(c->r[3]+0x00000000u); // 80109DA4
  cmps(c,0,(int32_t)c->r[5],0); // 80109DA8
  if (!crb(c,2)) { goto L_80109EBC; } // 80109DAC
  c->r[0]=R8(c->r[31]+0x00000028u); // 80109DB0
  cmpu(c,0,c->r[0],0x00000004u); // 80109DB4
  if (crb(c,0)) { goto L_80109DD4; } // 80109DB8
  c->r[3]=0u+0x000E0000u; // 80109DBC
  c->r[4]=0u+0x80330000u; // 80109DC0
  c->r[6]=c->r[29]+0x00000004u; // 80109DC4
  c->r[3]=c->r[3]+0x00000003u; // 80109DC8
  c->r[4]=c->r[4]+0xFFFFC298u; // 80109DCC
  c->lr=0x80109DD4u; f_800F72C0(c); // 80109DD0
L_80109DD4:;
  c->r[3]=c->r[30]+0x00000008u; // 80109DD4
  c->lr=0x80109DDCu; f_800ACEA0(c); // 80109DD8
  c->r[5]=c->r[3]|c->r[3]; // 80109DDC
  c->r[3]=c->r[30]+0x00000008u; // 80109DE0
  c->r[4]=c->r[29]+0x00000004u; // 80109DE4
  c->lr=0x80109DECu; f_800B7A64(c); // 80109DE8
  cmps(c,0,(int32_t)c->r[3],0); // 80109DEC
  if (!crb(c,2)) { goto L_80109E14; } // 80109DF0
  c->r[4]=R32(c->r[31]+0x00000030u); // 80109DF4
  c->r[3]=c->r[30]+0x00000002u; // 80109DF8
  c->r[5]=0u+0x00000006u; // 80109DFC
  c->r[4]=c->r[4]+0x00000002u; // 80109E00
  c->lr=0x80109E08u; f_800043C4(c); // 80109E04
  c->r[0]=0u+0x00000000u; // 80109E08
  W16(c->r[30]+0x00000000u,c->r[0]); // 80109E0C
  goto L_80109F44; // 80109E10
L_80109E14:;
  c->r[3]=R32(c->r[31]+0x00000030u); // 80109E14
  c->lr=0x80109E1Cu; f_80102254(c); // 80109E18
  cmps(c,0,(int32_t)c->r[3],0); // 80109E1C
  W32(c->r[31]+0x00000030u,c->r[3]); // 80109E20
  if (crb(c,2)) { goto L_80109EB0; } // 80109E24
  c->r[4]=0u+0x80110000u; // 80109E28
  c->r[3]=c->r[3]+0x00000002u; // 80109E2C
  c->r[4]=c->r[4]+0xFFFF9D70u; // 80109E30
  c->lr=0x80109E38u; f_80101F7C(c); // 80109E34
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 80109E38
  cmpu(c,0,c->r[0],0x00000001u); // 80109E3C
  if (crb(c,2)) { goto L_80109F6C; } // 80109E40
  c->r[0]=R16(c->r[29]+0x00000000u); // 80109E44
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80109E48
  cmpu(c,0,c->r[0],0x00000008u); // 80109E4C
  if (crb(c,1)) { goto L_80109EA4; } // 80109E50
  c->r[3]=0u+0x80330000u; // 80109E54
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80109E58
  c->r[3]=c->r[3]+0xFFFFC33Cu; // 80109E5C
  c->r[3]=R32(c->r[3]+c->r[0]); // 80109E60
  c->ctr=c->r[3]; // 80109E64
  if (true) { switch (c->ctr) { case 0x80109E6Cu: goto L_80109E6C; case 0x80109E74u: goto L_80109E74; case 0x80109E7Cu: goto L_80109E7C; case 0x80109E84u: goto L_80109E84; case 0x80109E8Cu: goto L_80109E8C; case 0x80109E94u: goto L_80109E94; case 0x80109E9Cu: goto L_80109E9C; case 0x80109EA4u: goto L_80109EA4; case 0x80109F04u: goto L_80109F04; case 0x80109F0Cu: goto L_80109F0C; case 0x80109F14u: goto L_80109F14; case 0x80109F1Cu: goto L_80109F1C; case 0x80109F24u: goto L_80109F24; case 0x80109F2Cu: goto L_80109F2C; case 0x80109F34u: goto L_80109F34; case 0x80109F3Cu: goto L_80109F3C; default: break; } dispatch(c,c->ctr); return; } // 80109E68
L_80109E6C:;
  c->r[0]=0u+0x00000000u; // 80109E6C
  goto L_80109EA8; // 80109E70
L_80109E74:;
  c->r[0]=0u+0x0000010Bu; // 80109E74
  goto L_80109EA8; // 80109E78
L_80109E7C:;
  c->r[0]=0u+0x00000103u; // 80109E7C
  goto L_80109EA8; // 80109E80
L_80109E84:;
  c->r[0]=0u+0x00000109u; // 80109E84
  goto L_80109EA8; // 80109E88
L_80109E8C:;
  c->r[0]=0u+0x0000010Cu; // 80109E8C
  goto L_80109EA8; // 80109E90
L_80109E94:;
  c->r[0]=0u+0x0000010Du; // 80109E94
  goto L_80109EA8; // 80109E98
L_80109E9C:;
  c->r[0]=0u+0x00000115u; // 80109E9C
  goto L_80109EA8; // 80109EA0
L_80109EA4:;
  c->r[0]=0u+0x00000114u; // 80109EA4
L_80109EA8:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 80109EA8
  goto L_80109F44; // 80109EAC
L_80109EB0:;
  c->r[0]=0u+0x00000102u; // 80109EB0
  W16(c->r[30]+0x00000000u,c->r[0]); // 80109EB4
  goto L_80109F44; // 80109EB8
L_80109EBC:;
  c->r[0]=R8(c->r[31]+0x00000028u); // 80109EBC
  cmpu(c,0,c->r[0],0x00000004u); // 80109EC0
  if (crb(c,0)) { goto L_80109EDC; } // 80109EC4
  c->r[3]=0u+0x000E0000u; // 80109EC8
  c->r[4]=0u+0x80330000u; // 80109ECC
  c->r[3]=c->r[3]+0x00000003u; // 80109ED0
  c->r[4]=c->r[4]+0xFFFFC2DCu; // 80109ED4
  c->lr=0x80109EDCu; f_800F72A0(c); // 80109ED8
L_80109EDC:;
  c->r[0]=R16(c->r[29]+0x00000000u); // 80109EDC
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 80109EE0
  cmpu(c,0,c->r[0],0x00000008u); // 80109EE4
  if (crb(c,1)) { goto L_80109F3C; } // 80109EE8
  c->r[3]=0u+0x80330000u; // 80109EEC
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 80109EF0
  c->r[3]=c->r[3]+0xFFFFC318u; // 80109EF4
  c->r[3]=R32(c->r[3]+c->r[0]); // 80109EF8
  c->ctr=c->r[3]; // 80109EFC
  if (true) { switch (c->ctr) { case 0x80109E6Cu: goto L_80109E6C; case 0x80109E74u: goto L_80109E74; case 0x80109E7Cu: goto L_80109E7C; case 0x80109E84u: goto L_80109E84; case 0x80109E8Cu: goto L_80109E8C; case 0x80109E94u: goto L_80109E94; case 0x80109E9Cu: goto L_80109E9C; case 0x80109EA4u: goto L_80109EA4; case 0x80109F04u: goto L_80109F04; case 0x80109F0Cu: goto L_80109F0C; case 0x80109F14u: goto L_80109F14; case 0x80109F1Cu: goto L_80109F1C; case 0x80109F24u: goto L_80109F24; case 0x80109F2Cu: goto L_80109F2C; case 0x80109F34u: goto L_80109F34; case 0x80109F3Cu: goto L_80109F3C; default: break; } dispatch(c,c->ctr); return; } // 80109F00
L_80109F04:;
  c->r[0]=0u+0x00000000u; // 80109F04
  goto L_80109F40; // 80109F08
L_80109F0C:;
  c->r[0]=0u+0x0000010Bu; // 80109F0C
  goto L_80109F40; // 80109F10
L_80109F14:;
  c->r[0]=0u+0x00000103u; // 80109F14
  goto L_80109F40; // 80109F18
L_80109F1C:;
  c->r[0]=0u+0x00000109u; // 80109F1C
  goto L_80109F40; // 80109F20
L_80109F24:;
  c->r[0]=0u+0x0000010Cu; // 80109F24
  goto L_80109F40; // 80109F28
L_80109F2C:;
  c->r[0]=0u+0x0000010Du; // 80109F2C
  goto L_80109F40; // 80109F30
L_80109F34:;
  c->r[0]=0u+0x00000115u; // 80109F34
  goto L_80109F40; // 80109F38
L_80109F3C:;
  c->r[0]=0u+0x00000114u; // 80109F3C
L_80109F40:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 80109F40
L_80109F44:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 80109F44
  cmps(c,0,(int32_t)c->r[12],0); // 80109F48
  if (crb(c,2)) { goto L_80109F60; } // 80109F4C
  c->r[4]=c->r[30]|c->r[30]; // 80109F50
  c->r[3]=0u+0x00000005u; // 80109F54
  c->ctr=c->r[12]; // 80109F58
  if (true) { c->lr=0x80109F60u; dispatch(c,c->ctr); } // 80109F5C
L_80109F60:;
  c->r[0]=0u+0x00000000u; // 80109F60
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 80109F64
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 80109F68
L_80109F6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80109F6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80109F70
  c->r[30]=R32(c->r[1]+0x00000018u); // 80109F74
  c->r[29]=R32(c->r[1]+0x00000014u); // 80109F78
  c->lr=c->r[0]; // 80109F7C
  c->r[1]=c->r[1]+0x00000020u; // 80109F80
  return; // 80109F84
}

// gap_find_addr_inq_cb
void f_80109F88(Ctx* __restrict c) {
  trace_call(0x80109F88u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80109F88
  c->r[0]=c->lr; // 80109F8C
  W32(c->r[1]+0x00000024u,c->r[0]); // 80109F90
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 80109F94
  c->r[31]=0u+0x803D0000u; // 80109F98
  c->r[31]=c->r[31]+0xFFFFC9E0u; // 80109F9C
  W32(c->r[1]+0x00000018u,c->r[30]); // 80109FA0
  c->r[30]=c->r[31]+0x00000034u; // 80109FA4
  W32(c->r[1]+0x00000014u,c->r[29]); // 80109FA8
  c->r[29]=c->r[3]|c->r[3]; // 80109FAC
  c->r[0]=R8(c->r[31]+0x0000007Eu); // 80109FB0
  cmps(c,0,(int32_t)c->r[0],0); // 80109FB4
  if (crb(c,2)) { goto L_8010A120; } // 80109FB8
  c->r[0]=R8(c->r[31]+0x00000028u); // 80109FBC
  cmpu(c,0,c->r[0],0x00000004u); // 80109FC0
  if (crb(c,0)) { goto L_80109FE4; } // 80109FC4
  c->r[3]=0u+0x000E0000u; // 80109FC8
  c->r[4]=0u+0x80330000u; // 80109FCC
  c->r[5]=R8(c->r[29]+0x00000000u); // 80109FD0
  c->r[3]=c->r[3]+0x00000003u; // 80109FD4
  c->r[6]=R8(c->r[29]+0x00000001u); // 80109FD8
  c->r[4]=c->r[4]+0xFFFFC360u; // 80109FDC
  c->lr=0x80109FE4u; f_800F72C0(c); // 80109FE0
L_80109FE4:;
  c->r[0]=R8(c->r[29]+0x00000000u); // 80109FE4
  cmps(c,0,(int32_t)c->r[0],0); // 80109FE8
  if (!crb(c,2)) { goto L_8010A098; } // 80109FEC
  c->r[0]=0u+0x00000111u; // 80109FF0
  W16(c->r[30]+0x00000000u,c->r[0]); // 80109FF4
  c->lr=0x80109FFCu; f_8010219C(c); // 80109FF8
  cmps(c,0,(int32_t)c->r[3],0); // 80109FFC
  W32(c->r[31]+0x00000030u,c->r[3]); // 8010A000
  if (crb(c,2)) { goto L_8010A08C; } // 8010A004
  c->r[4]=0u+0x80110000u; // 8010A008
  c->r[3]=c->r[3]+0x00000002u; // 8010A00C
  c->r[4]=c->r[4]+0xFFFF9D70u; // 8010A010
  c->lr=0x8010A018u; f_80101F7C(c); // 8010A014
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; // 8010A018
  cmpu(c,0,c->r[0],0x00000001u); // 8010A01C
  if (crb(c,2)) { goto L_8010A120; } // 8010A020
  c->r[0]=R8(c->r[29]+0x00000000u); // 8010A024
  cmpu(c,0,c->r[0],0x00000008u); // 8010A028
  if (crb(c,1)) { goto L_8010A080; } // 8010A02C
  c->r[3]=0u+0x80330000u; // 8010A030
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8010A034
  c->r[3]=c->r[3]+0xFFFFC3C8u; // 8010A038
  c->r[3]=R32(c->r[3]+c->r[0]); // 8010A03C
  c->ctr=c->r[3]; // 8010A040
  if (true) { switch (c->ctr) { case 0x8010A048u: goto L_8010A048; case 0x8010A050u: goto L_8010A050; case 0x8010A058u: goto L_8010A058; case 0x8010A060u: goto L_8010A060; case 0x8010A068u: goto L_8010A068; case 0x8010A070u: goto L_8010A070; case 0x8010A078u: goto L_8010A078; case 0x8010A080u: goto L_8010A080; case 0x8010A0B8u: goto L_8010A0B8; case 0x8010A0C0u: goto L_8010A0C0; case 0x8010A0C8u: goto L_8010A0C8; case 0x8010A0D0u: goto L_8010A0D0; case 0x8010A0D8u: goto L_8010A0D8; case 0x8010A0E0u: goto L_8010A0E0; case 0x8010A0E8u: goto L_8010A0E8; case 0x8010A0F0u: goto L_8010A0F0; default: break; } dispatch(c,c->ctr); return; } // 8010A044
L_8010A048:;
  c->r[0]=0u+0x00000000u; // 8010A048
  goto L_8010A084; // 8010A04C
L_8010A050:;
  c->r[0]=0u+0x0000010Bu; // 8010A050
  goto L_8010A084; // 8010A054
L_8010A058:;
  c->r[0]=0u+0x00000103u; // 8010A058
  goto L_8010A084; // 8010A05C
L_8010A060:;
  c->r[0]=0u+0x00000109u; // 8010A060
  goto L_8010A084; // 8010A064
L_8010A068:;
  c->r[0]=0u+0x0000010Cu; // 8010A068
  goto L_8010A084; // 8010A06C
L_8010A070:;
  c->r[0]=0u+0x0000010Du; // 8010A070
  goto L_8010A084; // 8010A074
L_8010A078:;
  c->r[0]=0u+0x00000115u; // 8010A078
  goto L_8010A084; // 8010A07C
L_8010A080:;
  c->r[0]=0u+0x00000114u; // 8010A080
L_8010A084:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 8010A084
  goto L_8010A0F8; // 8010A088
L_8010A08C:;
  c->r[0]=0u+0x00000102u; // 8010A08C
  W16(c->r[30]+0x00000000u,c->r[0]); // 8010A090
  goto L_8010A0F8; // 8010A094
L_8010A098:;
  cmpu(c,0,c->r[0],0x00000008u); // 8010A098
  if (crb(c,1)) { goto L_8010A0F0; } // 8010A09C
  c->r[3]=0u+0x80330000u; // 8010A0A0
  c->r[0]=rotl(c->r[0],2)&0xFFFFFFFCu; // 8010A0A4
  c->r[3]=c->r[3]+0xFFFFC3A4u; // 8010A0A8
  c->r[3]=R32(c->r[3]+c->r[0]); // 8010A0AC
  c->ctr=c->r[3]; // 8010A0B0
  if (true) { switch (c->ctr) { case 0x8010A048u: goto L_8010A048; case 0x8010A050u: goto L_8010A050; case 0x8010A058u: goto L_8010A058; case 0x8010A060u: goto L_8010A060; case 0x8010A068u: goto L_8010A068; case 0x8010A070u: goto L_8010A070; case 0x8010A078u: goto L_8010A078; case 0x8010A080u: goto L_8010A080; case 0x8010A0B8u: goto L_8010A0B8; case 0x8010A0C0u: goto L_8010A0C0; case 0x8010A0C8u: goto L_8010A0C8; case 0x8010A0D0u: goto L_8010A0D0; case 0x8010A0D8u: goto L_8010A0D8; case 0x8010A0E0u: goto L_8010A0E0; case 0x8010A0E8u: goto L_8010A0E8; case 0x8010A0F0u: goto L_8010A0F0; default: break; } dispatch(c,c->ctr); return; } // 8010A0B4
L_8010A0B8:;
  c->r[0]=0u+0x00000000u; // 8010A0B8
  goto L_8010A0F4; // 8010A0BC
L_8010A0C0:;
  c->r[0]=0u+0x0000010Bu; // 8010A0C0
  goto L_8010A0F4; // 8010A0C4
L_8010A0C8:;
  c->r[0]=0u+0x00000103u; // 8010A0C8
  goto L_8010A0F4; // 8010A0CC
L_8010A0D0:;
  c->r[0]=0u+0x00000109u; // 8010A0D0
  goto L_8010A0F4; // 8010A0D4
L_8010A0D8:;
  c->r[0]=0u+0x0000010Cu; // 8010A0D8
  goto L_8010A0F4; // 8010A0DC
L_8010A0E0:;
  c->r[0]=0u+0x0000010Du; // 8010A0E0
  goto L_8010A0F4; // 8010A0E4
L_8010A0E8:;
  c->r[0]=0u+0x00000115u; // 8010A0E8
  goto L_8010A0F4; // 8010A0EC
L_8010A0F0:;
  c->r[0]=0u+0x00000114u; // 8010A0F0
L_8010A0F4:;
  W16(c->r[30]+0x00000000u,c->r[0]); // 8010A0F4
L_8010A0F8:;
  c->r[12]=R32(c->r[31]+0x0000002Cu); // 8010A0F8
  cmps(c,0,(int32_t)c->r[12],0); // 8010A0FC
  if (crb(c,2)) { goto L_8010A114; } // 8010A100
  c->r[4]=c->r[30]|c->r[30]; // 8010A104
  c->r[3]=0u+0x00000005u; // 8010A108
  c->ctr=c->r[12]; // 8010A10C
  if (true) { c->lr=0x8010A114u; dispatch(c,c->ctr); } // 8010A110
L_8010A114:;
  c->r[0]=0u+0x00000000u; // 8010A114
  W8(c->r[31]+0x0000007Eu,c->r[0]); // 8010A118
  W32(c->r[31]+0x0000002Cu,c->r[0]); // 8010A11C
L_8010A120:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A120
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010A124
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010A128
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010A12C
  c->lr=c->r[0]; // 8010A130
  c->r[1]=c->r[1]+0x00000020u; // 8010A134
  return; // 8010A138
}

// gap_convert_btm_status
void f_8010A13C(Ctx* __restrict c) {
  trace_call(0x8010A13Cu);
  cmpu(c,0,c->r[3],0x00000008u); // 8010A13C
  if (crb(c,1)) { goto L_8010A194; } // 8010A140
  c->r[4]=0u+0x80330000u; // 8010A144
  c->r[0]=rotl(c->r[3],2)&0xFFFFFFFCu; // 8010A148
  c->r[4]=c->r[4]+0xFFFFC3ECu; // 8010A14C
  c->r[4]=R32(c->r[4]+c->r[0]); // 8010A150
  c->ctr=c->r[4]; // 8010A154
  if (true) { switch (c->ctr) { case 0x8010A15Cu: goto L_8010A15C; case 0x8010A164u: goto L_8010A164; case 0x8010A16Cu: goto L_8010A16C; case 0x8010A174u: goto L_8010A174; case 0x8010A17Cu: goto L_8010A17C; case 0x8010A184u: goto L_8010A184; case 0x8010A18Cu: goto L_8010A18C; case 0x8010A194u: goto L_8010A194; default: break; } dispatch(c,c->ctr); return; } // 8010A158
L_8010A15C:;
  c->r[3]=0u+0x00000000u; // 8010A15C
  return; // 8010A160
L_8010A164:;
  c->r[3]=0u+0x0000010Bu; // 8010A164
  return; // 8010A168
L_8010A16C:;
  c->r[3]=0u+0x00000103u; // 8010A16C
  return; // 8010A170
L_8010A174:;
  c->r[3]=0u+0x00000109u; // 8010A174
  return; // 8010A178
L_8010A17C:;
  c->r[3]=0u+0x0000010Cu; // 8010A17C
  return; // 8010A180
L_8010A184:;
  c->r[3]=0u+0x0000010Du; // 8010A184
  return; // 8010A188
L_8010A18C:;
  c->r[3]=0u+0x00000115u; // 8010A18C
  return; // 8010A190
L_8010A194:;
  c->r[3]=0u+0x00000114u; // 8010A194
  return; // 8010A198
}

// btsnd_hcic_inquiry
void f_8010A19C(Ctx* __restrict c) {
  trace_call(0x8010A19Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A19C
  c->r[0]=c->lr; // 8010A1A0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A1A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010A1A8
  c->r[31]=c->r[5]|c->r[5]; // 8010A1AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010A1B0
  c->r[30]=c->r[4]|c->r[4]; // 8010A1B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010A1B8
  c->r[29]=c->r[3]|c->r[3]; // 8010A1BC
  c->r[3]=0u+0x00000002u; // 8010A1C0
  c->lr=0x8010A1C8u; f_800F46D0(c); // 8010A1C4
  cmps(c,0,(int32_t)c->r[3],0); // 8010A1C8
  if (!crb(c,2)) { goto L_8010A1D8; } // 8010A1CC
  c->r[3]=0u+0x00000000u; // 8010A1D0
  goto L_8010A228; // 8010A1D4
L_8010A1D8:;
  c->r[0]=0u+0x00000008u; // 8010A1D8
  c->r[5]=0u+0x00000000u; // 8010A1DC
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010A1E0
  c->r[4]=0u+0x00000001u; // 8010A1E4
  c->r[0]=0u+0x00000004u; // 8010A1E8
  c->r[6]=0u+0x00000005u; // 8010A1EC
  W16(c->r[3]+0x00000004u,c->r[5]); // 8010A1F0
  c->r[5]=R8(c->r[29]+0x00000002u); // 8010A1F4
  W8(c->r[3]+0x00000008u,c->r[4]); // 8010A1F8
  c->r[4]=R8(c->r[29]+0x00000001u); // 8010A1FC
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010A200
  c->r[0]=R8(c->r[29]+0x00000000u); // 8010A204
  W8(c->r[3]+0x0000000Au,c->r[6]); // 8010A208
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 8010A20C
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8010A210
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010A214
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 8010A218
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 8010A21C
  c->lr=0x8010A224u; f_801081E8(c); // 8010A220
  c->r[3]=0u+0x00000001u; // 8010A224
L_8010A228:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A228
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010A22C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010A230
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010A234
  c->lr=c->r[0]; // 8010A238
  c->r[1]=c->r[1]+0x00000020u; // 8010A23C
  return; // 8010A240
}

// btsnd_hcic_inq_cancel
void f_8010A244(Ctx* __restrict c) {
  trace_call(0x8010A244u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A244
  c->r[0]=c->lr; // 8010A248
  c->r[3]=0u+0x00000002u; // 8010A24C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A250
  c->lr=0x8010A258u; f_800F46D0(c); // 8010A254
  cmps(c,0,(int32_t)c->r[3],0); // 8010A258
  if (!crb(c,2)) { goto L_8010A268; } // 8010A25C
  c->r[3]=0u+0x00000000u; // 8010A260
  goto L_8010A294; // 8010A264
L_8010A268:;
  c->r[0]=0u+0x00000003u; // 8010A268
  c->r[5]=0u+0x00000000u; // 8010A26C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010A270
  c->r[4]=0u+0x00000002u; // 8010A274
  c->r[0]=0u+0x00000004u; // 8010A278
  W16(c->r[3]+0x00000004u,c->r[5]); // 8010A27C
  W8(c->r[3]+0x00000008u,c->r[4]); // 8010A280
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010A284
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010A288
  c->lr=0x8010A290u; f_801081E8(c); // 8010A28C
  c->r[3]=0u+0x00000001u; // 8010A290
L_8010A294:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A294
  c->lr=c->r[0]; // 8010A298
  c->r[1]=c->r[1]+0x00000010u; // 8010A29C
  return; // 8010A2A0
}

// btsnd_hcic_per_inq_mode
void f_8010A2A4(Ctx* __restrict c) {
  trace_call(0x8010A2A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A2A4
  c->r[0]=c->lr; // 8010A2A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A2AC
  c->r[11]=c->r[1]+0x00000020u; // 8010A2B0
  c->lr=0x8010A2B8u; f_800ADA2C(c); // 8010A2B4
  c->r[27]=c->r[3]|c->r[3]; // 8010A2B8
  c->r[28]=c->r[4]|c->r[4]; // 8010A2BC
  c->r[29]=c->r[5]|c->r[5]; // 8010A2C0
  c->r[30]=c->r[6]|c->r[6]; // 8010A2C4
  c->r[31]=c->r[7]|c->r[7]; // 8010A2C8
  c->r[3]=0u+0x00000002u; // 8010A2CC
  c->lr=0x8010A2D4u; f_800F46D0(c); // 8010A2D0
  cmps(c,0,(int32_t)c->r[3],0); // 8010A2D4
  if (!crb(c,2)) { goto L_8010A2E4; } // 8010A2D8
  c->r[3]=0u+0x00000000u; // 8010A2DC
  goto L_8010A34C; // 8010A2E0
L_8010A2E4:;
  c->r[0]=0u+0x0000000Cu; // 8010A2E4
  c->r[5]=0u+0x00000000u; // 8010A2E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010A2EC
  c->r[4]=0u+0x00000003u; // 8010A2F0
  c->r[0]=0u+0x00000004u; // 8010A2F4
  c->r[8]=0u+0x00000009u; // 8010A2F8
  W16(c->r[3]+0x00000004u,c->r[5]); // 8010A2FC
  c->r[7]=sraw(c,c->r[27],8); // 8010A300
  c->r[6]=rotl(c->r[28],24)&0x000000FFu; // 8010A304
  c->r[5]=R8(c->r[29]+0x00000002u); // 8010A308
  W8(c->r[3]+0x00000008u,c->r[4]); // 8010A30C
  c->r[4]=R8(c->r[29]+0x00000001u); // 8010A310
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010A314
  c->r[0]=R8(c->r[29]+0x00000000u); // 8010A318
  W8(c->r[3]+0x0000000Au,c->r[8]); // 8010A31C
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 8010A320
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 8010A324
  W8(c->r[3]+0x0000000Du,c->r[28]); // 8010A328
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 8010A32C
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 8010A330
  W8(c->r[3]+0x00000010u,c->r[4]); // 8010A334
  W8(c->r[3]+0x00000011u,c->r[0]); // 8010A338
  W8(c->r[3]+0x00000012u,c->r[30]); // 8010A33C
  W8(c->r[3]+0x00000013u,c->r[31]); // 8010A340
  c->lr=0x8010A348u; f_801081E8(c); // 8010A344
  c->r[3]=0u+0x00000001u; // 8010A348
L_8010A34C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010A34C
  c->lr=0x8010A354u; f_800ADA78(c); // 8010A350
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A354
  c->lr=c->r[0]; // 8010A358
  c->r[1]=c->r[1]+0x00000020u; // 8010A35C
  return; // 8010A360
}

// btsnd_hcic_create_conn
void f_8010A364(Ctx* __restrict c) {
  trace_call(0x8010A364u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A364
  c->r[0]=c->lr; // 8010A368
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A36C
  c->r[11]=c->r[1]+0x00000020u; // 8010A370
  c->lr=0x8010A378u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010A374
  c->r[26]=c->r[3]|c->r[3]; // 8010A378
  c->r[27]=c->r[4]|c->r[4]; // 8010A37C
  c->r[28]=c->r[5]|c->r[5]; // 8010A380
  c->r[29]=c->r[6]|c->r[6]; // 8010A384
  c->r[30]=c->r[7]|c->r[7]; // 8010A388
  c->r[31]=c->r[8]|c->r[8]; // 8010A38C
  c->r[3]=0u+0x00000002u; // 8010A390
  c->lr=0x8010A398u; f_800F46D0(c); // 8010A394
  cmps(c,0,(int32_t)c->r[3],0); // 8010A398
  if (!crb(c,2)) { goto L_8010A3A8; } // 8010A39C
  c->r[3]=0u+0x00000000u; // 8010A3A0
  goto L_8010A42C; // 8010A3A4
L_8010A3A8:;
  c->r[4]=0u+0x00000010u; // 8010A3A8
  c->r[0]=0u+0x00000000u; // 8010A3AC
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010A3B0
  c->r[7]=0u+0x00000005u; // 8010A3B4
  c->r[6]=0u+0x00000004u; // 8010A3B8
  c->r[5]=0u+0x0000000Du; // 8010A3BC
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010A3C0
  c->r[4]=sraw(c,c->r[27],8); // 8010A3C4
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 8010A3C8
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010A3CC
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010A3D0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010A3D4
  c->r[5]=R8(c->r[26]+0x00000005u); // 8010A3D8
  W8(c->r[3]+0x0000000Bu,c->r[5]); // 8010A3DC
  c->r[5]=R8(c->r[26]+0x00000004u); // 8010A3E0
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8010A3E4
  c->r[5]=R8(c->r[26]+0x00000003u); // 8010A3E8
  W8(c->r[3]+0x0000000Du,c->r[5]); // 8010A3EC
  c->r[5]=R8(c->r[26]+0x00000002u); // 8010A3F0
  W8(c->r[3]+0x0000000Eu,c->r[5]); // 8010A3F4
  c->r[5]=R8(c->r[26]+0x00000001u); // 8010A3F8
  W8(c->r[3]+0x0000000Fu,c->r[5]); // 8010A3FC
  c->r[5]=R8(c->r[26]+0x00000000u); // 8010A400
  W8(c->r[3]+0x00000010u,c->r[5]); // 8010A404
  W8(c->r[3]+0x00000011u,c->r[27]); // 8010A408
  W8(c->r[3]+0x00000012u,c->r[4]); // 8010A40C
  W8(c->r[3]+0x00000013u,c->r[28]); // 8010A410
  W8(c->r[3]+0x00000014u,c->r[29]); // 8010A414
  W8(c->r[3]+0x00000015u,c->r[30]); // 8010A418
  W8(c->r[3]+0x00000016u,c->r[0]); // 8010A41C
  W8(c->r[3]+0x00000017u,c->r[31]); // 8010A420
  c->lr=0x8010A428u; f_801081E8(c); // 8010A424
  c->r[3]=0u+0x00000001u; // 8010A428
L_8010A42C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010A42C
  c->lr=0x8010A434u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010A430
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010A434
  c->lr=c->r[0]; // 8010A438
  c->r[1]=c->r[1]+0x00000020u; // 8010A43C
  return; // 8010A440
}

// btsnd_hcic_disconnect
void f_8010A444(Ctx* __restrict c) {
  trace_call(0x8010A444u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A444
  c->r[0]=c->lr; // 8010A448
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A44C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A450
  c->r[31]=c->r[4]|c->r[4]; // 8010A454
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010A458
  c->r[30]=c->r[3]|c->r[3]; // 8010A45C
  c->r[3]=0u+0x00000002u; // 8010A460
  c->lr=0x8010A468u; f_800F46D0(c); // 8010A464
  cmps(c,0,(int32_t)c->r[3],0); // 8010A468
  if (!crb(c,2)) { goto L_8010A478; } // 8010A46C
  c->r[3]=0u+0x00000000u; // 8010A470
  goto L_8010A4B4; // 8010A474
L_8010A478:;
  c->r[7]=0u+0x00000006u; // 8010A478
  c->r[6]=0u+0x00000000u; // 8010A47C
  W16(c->r[3]+0x00000002u,c->r[7]); // 8010A480
  c->r[5]=0u+0x00000004u; // 8010A484
  c->r[4]=0u+0x00000003u; // 8010A488
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 8010A48C
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010A490
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010A494
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010A498
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010A49C
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 8010A4A0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010A4A4
  W8(c->r[3]+0x0000000Du,c->r[31]); // 8010A4A8
  c->lr=0x8010A4B0u; f_801081E8(c); // 8010A4AC
  c->r[3]=0u+0x00000001u; // 8010A4B0
L_8010A4B4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A4B4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A4B8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010A4BC
  c->lr=c->r[0]; // 8010A4C0
  c->r[1]=c->r[1]+0x00000010u; // 8010A4C4
  return; // 8010A4C8
}

// btsnd_hcic_add_SCO_conn
void f_8010A4CC(Ctx* __restrict c) {
  trace_call(0x8010A4CCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A4CC
  c->r[0]=c->lr; // 8010A4D0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A4D4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A4D8
  c->r[31]=c->r[4]|c->r[4]; // 8010A4DC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010A4E0
  c->r[30]=c->r[3]|c->r[3]; // 8010A4E4
  c->r[3]=0u+0x00000002u; // 8010A4E8
  c->lr=0x8010A4F0u; f_800F46D0(c); // 8010A4EC
  cmps(c,0,(int32_t)c->r[3],0); // 8010A4F0
  if (!crb(c,2)) { goto L_8010A500; } // 8010A4F4
  c->r[3]=0u+0x00000000u; // 8010A4F8
  goto L_8010A540; // 8010A4FC
L_8010A500:;
  c->r[7]=0u+0x00000007u; // 8010A500
  c->r[6]=0u+0x00000000u; // 8010A504
  W16(c->r[3]+0x00000002u,c->r[7]); // 8010A508
  c->r[5]=0u+0x00000004u; // 8010A50C
  c->r[4]=sraw(c,c->r[30],8); // 8010A510
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010A514
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010A518
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010A51C
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010A520
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010A524
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 8010A528
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8010A52C
  W8(c->r[3]+0x0000000Du,c->r[31]); // 8010A530
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010A534
  c->lr=0x8010A53Cu; f_801081E8(c); // 8010A538
  c->r[3]=0u+0x00000001u; // 8010A53C
L_8010A540:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A540
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A544
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010A548
  c->lr=c->r[0]; // 8010A54C
  c->r[1]=c->r[1]+0x00000010u; // 8010A550
  return; // 8010A554
}

// btsnd_hcic_accept_conn
void f_8010A558(Ctx* __restrict c) {
  trace_call(0x8010A558u);
  c->r[9]=0u+0x0000000Au; // 8010A558
  c->r[8]=0u+0x00000000u; // 8010A55C
  c->r[7]=0u+0x00000009u; // 8010A560
  c->r[6]=0u+0x00000004u; // 8010A564
  c->r[0]=0u+0x00000007u; // 8010A568
  W16(c->r[3]+0x00000002u,c->r[9]); // 8010A56C
  W16(c->r[3]+0x00000004u,c->r[8]); // 8010A570
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010A574
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010A578
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010A57C
  c->r[0]=R8(c->r[4]+0x00000005u); // 8010A580
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010A584
  c->r[0]=R8(c->r[4]+0x00000004u); // 8010A588
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010A58C
  c->r[0]=R8(c->r[4]+0x00000003u); // 8010A590
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010A594
  c->r[0]=R8(c->r[4]+0x00000002u); // 8010A598
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010A59C
  c->r[0]=R8(c->r[4]+0x00000001u); // 8010A5A0
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010A5A4
  c->r[0]=R8(c->r[4]+0x00000000u); // 8010A5A8
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010A5AC
  W8(c->r[3]+0x00000011u,c->r[5]); // 8010A5B0
  f_801081E8(c); return; // 8010A5B4
}

// btsnd_hcic_reject_conn
void f_8010A5B8(Ctx* __restrict c) {
  trace_call(0x8010A5B8u);
  c->r[8]=0u+0x0000000Au; // 8010A5B8
  c->r[7]=0u+0x00000000u; // 8010A5BC
  c->r[6]=0u+0x00000004u; // 8010A5C0
  c->r[0]=0u+0x00000007u; // 8010A5C4
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010A5C8
  W16(c->r[3]+0x00000004u,c->r[7]); // 8010A5CC
  W8(c->r[3]+0x00000008u,c->r[8]); // 8010A5D0
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010A5D4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010A5D8
  c->r[0]=R8(c->r[4]+0x00000005u); // 8010A5DC
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010A5E0
  c->r[0]=R8(c->r[4]+0x00000004u); // 8010A5E4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010A5E8
  c->r[0]=R8(c->r[4]+0x00000003u); // 8010A5EC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010A5F0
  c->r[0]=R8(c->r[4]+0x00000002u); // 8010A5F4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010A5F8
  c->r[0]=R8(c->r[4]+0x00000001u); // 8010A5FC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010A600
  c->r[0]=R8(c->r[4]+0x00000000u); // 8010A604
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010A608
  W8(c->r[3]+0x00000011u,c->r[5]); // 8010A60C
  f_801081E8(c); return; // 8010A610
}

// btsnd_hcic_link_key_req_reply
void f_8010A614(Ctx* __restrict c) {
  trace_call(0x8010A614u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A614
  c->r[0]=c->lr; // 8010A618
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010A61C
  c->r[11]=c->r[1]+0x00000030u; // 8010A620
  c->lr=0x8010A628u; { W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010A624
  c->r[30]=c->r[3]|c->r[3]; // 8010A628
  c->r[31]=c->r[4]|c->r[4]; // 8010A62C
  c->r[3]=0u+0x00000002u; // 8010A630
  c->lr=0x8010A638u; f_800F46D0(c); // 8010A634
  cmps(c,0,(int32_t)c->r[3],0); // 8010A638
  if (!crb(c,2)) { goto L_8010A648; } // 8010A63C
  c->r[3]=0u+0x00000000u; // 8010A640
  goto L_8010A79C; // 8010A644
L_8010A648:;
  c->r[0]=0u+0x00000019u; // 8010A648
  c->r[4]=0u+0x00000000u; // 8010A64C
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010A650
  c->r[0]=0u+0x0000000Bu; // 8010A654
  c->r[6]=0u+0x00000004u; // 8010A658
  c->r[5]=0u+0x00000016u; // 8010A65C
  W16(c->r[3]+0x00000004u,c->r[4]); // 8010A660
  c->r[24]=addc(c,~c->r[4],0x0000000Fu,1); // 8010A664
  c->r[25]=0u+0x00000001u; // 8010A668
  c->r[27]=0u+0x00000002u; // 8010A66C
  W8(c->r[3]+0x00000008u,c->r[0]); // 8010A670
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 8010A674
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 8010A678
  c->r[4]=0u+0x00000003u; // 8010A67C
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010A680
  c->r[29]=addc(c,~c->r[4],0x0000000Fu,1); // 8010A684
  c->r[9]=0u+0x00000005u; // 8010A688
  c->r[10]=addc(c,~c->r[6],0x0000000Fu,1); // 8010A68C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010A690
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 8010A694
  c->r[7]=0u+0x00000006u; // 8010A698
  c->r[5]=0u+0x00000007u; // 8010A69C
  c->r[4]=R8(c->r[30]+0x00000005u); // 8010A6A0
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 8010A6A4
  c->r[23]=0u+0x00000008u; // 8010A6A8
  c->r[25]=0u+0x00000009u; // 8010A6AC
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010A6B0
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 8010A6B4
  c->r[27]=0u+0x0000000Au; // 8010A6B8
  c->r[11]=0u+0x0000000Cu; // 8010A6BC
  c->r[5]=R8(c->r[30]+0x00000004u); // 8010A6C0
  c->r[9]=0u+0x0000000Du; // 8010A6C4
  c->r[7]=0u+0x0000000Eu; // 8010A6C8
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8010A6CC
  c->r[5]=0u+0x0000000Fu; // 8010A6D0
  c->r[12]=R8(c->r[30]+0x00000003u); // 8010A6D4
  W8(c->r[3]+0x0000000Du,c->r[12]); // 8010A6D8
  c->r[12]=R8(c->r[30]+0x00000002u); // 8010A6DC
  W8(c->r[3]+0x0000000Eu,c->r[12]); // 8010A6E0
  c->r[12]=R8(c->r[30]+0x00000001u); // 8010A6E4
  W8(c->r[3]+0x0000000Fu,c->r[12]); // 8010A6E8
  c->r[12]=R8(c->r[30]+0x00000000u); // 8010A6EC
  W8(c->r[3]+0x00000010u,c->r[12]); // 8010A6F0
  c->r[12]=R8(c->r[31]+c->r[24]); // 8010A6F4
  c->r[24]=addc(c,~c->r[23],0x0000000Fu,1); // 8010A6F8
  W8(c->r[3]+0x00000011u,c->r[12]); // 8010A6FC
  c->r[12]=R8(c->r[31]+c->r[26]); // 8010A700
  c->r[26]=addc(c,~c->r[25],0x0000000Fu,1); // 8010A704
  W8(c->r[3]+0x00000012u,c->r[12]); // 8010A708
  c->r[12]=R8(c->r[31]+c->r[28]); // 8010A70C
  c->r[28]=addc(c,~c->r[27],0x0000000Fu,1); // 8010A710
  W8(c->r[3]+0x00000013u,c->r[12]); // 8010A714
  c->r[12]=R8(c->r[31]+c->r[29]); // 8010A718
  c->r[29]=addc(c,~c->r[0],0x0000000Fu,1); // 8010A71C
  W8(c->r[3]+0x00000014u,c->r[12]); // 8010A720
  c->r[0]=R8(c->r[31]+c->r[10]); // 8010A724
  c->r[10]=addc(c,~c->r[11],0x0000000Fu,1); // 8010A728
  W8(c->r[3]+0x00000015u,c->r[0]); // 8010A72C
  c->r[0]=R8(c->r[31]+c->r[8]); // 8010A730
  c->r[8]=addc(c,~c->r[9],0x0000000Fu,1); // 8010A734
  W8(c->r[3]+0x00000016u,c->r[0]); // 8010A738
  c->r[0]=R8(c->r[31]+c->r[6]); // 8010A73C
  c->r[6]=addc(c,~c->r[7],0x0000000Fu,1); // 8010A740
  W8(c->r[3]+0x00000017u,c->r[0]); // 8010A744
  c->r[0]=R8(c->r[31]+c->r[4]); // 8010A748
  c->r[4]=addc(c,~c->r[5],0x0000000Fu,1); // 8010A74C
  W8(c->r[3]+0x00000018u,c->r[0]); // 8010A750
  c->r[12]=R8(c->r[31]+c->r[24]); // 8010A754
  W8(c->r[3]+0x00000019u,c->r[12]); // 8010A758
  c->r[12]=R8(c->r[31]+c->r[26]); // 8010A75C
  W8(c->r[3]+0x0000001Au,c->r[12]); // 8010A760
  c->r[12]=R8(c->r[31]+c->r[28]); // 8010A764
  W8(c->r[3]+0x0000001Bu,c->r[12]); // 8010A768
  c->r[12]=R8(c->r[31]+c->r[29]); // 8010A76C
  W8(c->r[3]+0x0000001Cu,c->r[12]); // 8010A770
  c->r[0]=R8(c->r[31]+c->r[10]); // 8010A774
  W8(c->r[3]+0x0000001Du,c->r[0]); // 8010A778
  c->r[0]=R8(c->r[31]+c->r[8]); // 8010A77C
  W8(c->r[3]+0x0000001Eu,c->r[0]); // 8010A780
  c->r[0]=R8(c->r[31]+c->r[6]); // 8010A784
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 8010A788
  c->r[0]=R8(c->r[31]+c->r[4]); // 8010A78C
  W8(c->r[3]+0x00000020u,c->r[0]); // 8010A790
  c->lr=0x8010A798u; f_801081E8(c); // 8010A794
  c->r[3]=0u+0x00000001u; // 8010A798
L_8010A79C:;
  c->r[11]=c->r[1]+0x00000030u; // 8010A79C
  c->lr=0x8010A7A4u; { c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010A7A0
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010A7A4
  c->lr=c->r[0]; // 8010A7A8
  c->r[1]=c->r[1]+0x00000030u; // 8010A7AC
  return; // 8010A7B0
}

// btsnd_hcic_link_key_neg_reply
void f_8010A7B4(Ctx* __restrict c) {
  trace_call(0x8010A7B4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A7B4
  c->r[0]=c->lr; // 8010A7B8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010A7BC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010A7C0
  c->r[31]=c->r[3]|c->r[3]; // 8010A7C4
  c->r[3]=0u+0x00000002u; // 8010A7C8
  c->lr=0x8010A7D0u; f_800F46D0(c); // 8010A7CC
  cmps(c,0,(int32_t)c->r[3],0); // 8010A7D0
  if (!crb(c,2)) { goto L_8010A7E0; } // 8010A7D4
  c->r[3]=0u+0x00000000u; // 8010A7D8
  goto L_8010A840; // 8010A7DC
L_8010A7E0:;
  c->r[0]=0u+0x00000009u; // 8010A7E0
  c->r[6]=0u+0x00000000u; // 8010A7E4
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010A7E8
  c->r[5]=0u+0x0000000Cu; // 8010A7EC
  c->r[4]=0u+0x00000004u; // 8010A7F0
  c->r[0]=0u+0x00000006u; // 8010A7F4
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010A7F8
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010A7FC
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010A800
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010A804
  c->r[0]=R8(c->r[31]+0x00000005u); // 8010A808
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010A80C
  c->r[0]=R8(c->r[31]+0x00000004u); // 8010A810
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010A814
  c->r[0]=R8(c->r[31]+0x00000003u); // 8010A818
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010A81C
  c->r[0]=R8(c->r[31]+0x00000002u); // 8010A820
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010A824
  c->r[0]=R8(c->r[31]+0x00000001u); // 8010A828
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010A82C
  c->r[0]=R8(c->r[31]+0x00000000u); // 8010A830
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010A834
  c->lr=0x8010A83Cu; f_801081E8(c); // 8010A838
  c->r[3]=0u+0x00000001u; // 8010A83C
L_8010A840:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010A840
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010A844
  c->lr=c->r[0]; // 8010A848
  c->r[1]=c->r[1]+0x00000010u; // 8010A84C
  return; // 8010A850
}

// btsnd_hcic_pin_code_req_reply
void f_8010A854(Ctx* __restrict c) {
  trace_call(0x8010A854u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010A854
  c->r[0]=c->lr; // 8010A858
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010A85C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010A860
  c->r[31]=c->r[5]|c->r[5]; // 8010A864
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010A868
  c->r[30]=c->r[4]|c->r[4]; // 8010A86C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010A870
  c->r[29]=c->r[3]|c->r[3]; // 8010A874
  c->r[3]=0u+0x00000002u; // 8010A878
  c->lr=0x8010A880u; f_800F46D0(c); // 8010A87C
  cmps(c,0,(int32_t)c->r[3],0); // 8010A880
  if (!crb(c,2)) { goto L_8010A890; } // 8010A884
  c->r[3]=0u+0x00000000u; // 8010A888
  goto L_8010AA1C; // 8010A88C
L_8010A890:;
  c->r[0]=0u+0x0000001Au; // 8010A890
  c->r[4]=0u+0x00000000u; // 8010A894
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010A898
  c->r[7]=0u+0x0000000Du; // 8010A89C
  c->r[6]=0u+0x00000004u; // 8010A8A0
  c->r[0]=0u+0x00000017u; // 8010A8A4
  W16(c->r[3]+0x00000004u,c->r[4]); // 8010A8A8
  cmps(c,1,(int32_t)c->r[30],0); // 8010A8AC
  c->r[4]=c->r[3]+0x00000012u; // 8010A8B0
  c->r[5]=0u+0x00000000u; // 8010A8B4
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010A8B8
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010A8BC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010A8C0
  c->r[0]=R8(c->r[29]+0x00000005u); // 8010A8C4
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010A8C8
  c->r[0]=R8(c->r[29]+0x00000004u); // 8010A8CC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010A8D0
  c->r[0]=R8(c->r[29]+0x00000003u); // 8010A8D4
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010A8D8
  c->r[0]=R8(c->r[29]+0x00000002u); // 8010A8DC
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010A8E0
  c->r[0]=R8(c->r[29]+0x00000001u); // 8010A8E4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010A8E8
  c->r[0]=R8(c->r[29]+0x00000000u); // 8010A8EC
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010A8F0
  W8(c->r[3]+0x00000011u,c->r[30]); // 8010A8F4
  if (!crb(c,5)) { goto L_8010A9B8; } // 8010A8F8
  cmps(c,0,(int32_t)c->r[30],8); // 8010A8FC
  c->r[7]=c->r[30]+0xFFFFFFF8u; // 8010A900
  if (!crb(c,1)) { goto L_8010A990; } // 8010A904
  c->r[8]=0u+0x00000000u; // 8010A908
  if (crb(c,4)) { goto L_8010A924; } // 8010A90C
  c->r[6]=0u+0x80000000u; // 8010A910
  c->r[0]=c->r[6]+0xFFFFFFFEu; // 8010A914
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010A918
  if (crb(c,1)) { goto L_8010A924; } // 8010A91C
  c->r[8]=0u+0x00000001u; // 8010A920
L_8010A924:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010A924
  if (crb(c,2)) { goto L_8010A990; } // 8010A928
  c->r[0]=c->r[7]+0x00000007u; // 8010A92C
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8010A930
  c->ctr=c->r[0]; // 8010A934
  cmps(c,0,(int32_t)c->r[7],0); // 8010A938
  if (!crb(c,1)) { goto L_8010A990; } // 8010A93C
L_8010A940:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8010A940
  c->r[5]=c->r[5]+0x00000008u; // 8010A944
  W8(c->r[4]+0x00000000u,c->r[0]); // 8010A948
  c->r[0]=R8(c->r[31]+0x00000001u); // 8010A94C
  W8(c->r[4]+0x00000001u,c->r[0]); // 8010A950
  c->r[0]=R8(c->r[31]+0x00000002u); // 8010A954
  W8(c->r[4]+0x00000002u,c->r[0]); // 8010A958
  c->r[0]=R8(c->r[31]+0x00000003u); // 8010A95C
  W8(c->r[4]+0x00000003u,c->r[0]); // 8010A960
  c->r[0]=R8(c->r[31]+0x00000004u); // 8010A964
  W8(c->r[4]+0x00000004u,c->r[0]); // 8010A968
  c->r[0]=R8(c->r[31]+0x00000005u); // 8010A96C
  W8(c->r[4]+0x00000005u,c->r[0]); // 8010A970
  c->r[0]=R8(c->r[31]+0x00000006u); // 8010A974
  W8(c->r[4]+0x00000006u,c->r[0]); // 8010A978
  c->r[0]=R8(c->r[31]+0x00000007u); // 8010A97C
  c->r[31]=c->r[31]+0x00000008u; // 8010A980
  W8(c->r[4]+0x00000007u,c->r[0]); // 8010A984
  c->r[4]=c->r[4]+0x00000008u; // 8010A988
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A940; } // 8010A98C
L_8010A990:;
  c->r[0]=c->r[30]-c->r[5]; // 8010A990
  c->ctr=c->r[0]; // 8010A994
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[30]); // 8010A998
  if (!crb(c,0)) { goto L_8010A9B8; } // 8010A99C
L_8010A9A0:;
  c->r[0]=R8(c->r[31]+0x00000000u); // 8010A9A0
  c->r[5]=c->r[5]+0x00000001u; // 8010A9A4
  c->r[31]=c->r[31]+0x00000001u; // 8010A9A8
  W8(c->r[4]+0x00000000u,c->r[0]); // 8010A9AC
  c->r[4]=c->r[4]+0x00000001u; // 8010A9B0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A9A0; } // 8010A9B4
L_8010A9B8:;
  cmps(c,0,(int32_t)c->r[5],16); // 8010A9B8
  c->r[5]=addc(c,~c->r[5],0x00000010u,1); // 8010A9BC
  c->r[6]=0u+0x00000000u; // 8010A9C0
  if (!crb(c,0)) { goto L_8010AA14; } // 8010A9C4
  c->r[0]=rotl(c->r[5],29)&0x1FFFFFFFu; cr0(c,c->r[0]); // 8010A9C8
  c->ctr=c->r[0]; // 8010A9CC
  if (crb(c,2)) { goto L_8010AA04; } // 8010A9D0
L_8010A9D4:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 8010A9D4
  W8(c->r[4]+0x00000001u,c->r[6]); // 8010A9D8
  W8(c->r[4]+0x00000002u,c->r[6]); // 8010A9DC
  W8(c->r[4]+0x00000003u,c->r[6]); // 8010A9E0
  W8(c->r[4]+0x00000004u,c->r[6]); // 8010A9E4
  W8(c->r[4]+0x00000005u,c->r[6]); // 8010A9E8
  W8(c->r[4]+0x00000006u,c->r[6]); // 8010A9EC
  W8(c->r[4]+0x00000007u,c->r[6]); // 8010A9F0
  c->r[4]=c->r[4]+0x00000008u; // 8010A9F4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010A9D4; } // 8010A9F8
  c->r[5]=c->r[5]&0x00000007u; cr0(c,c->r[5]); // 8010A9FC
  if (crb(c,2)) { goto L_8010AA14; } // 8010AA00
L_8010AA04:;
  c->ctr=c->r[5]; // 8010AA04
L_8010AA08:;
  W8(c->r[4]+0x00000000u,c->r[6]); // 8010AA08
  c->r[4]=c->r[4]+0x00000001u; // 8010AA0C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010AA08; } // 8010AA10
L_8010AA14:;
  c->lr=0x8010AA18u; f_801081E8(c); // 8010AA14
  c->r[3]=0u+0x00000001u; // 8010AA18
L_8010AA1C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010AA1C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010AA20
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010AA24
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010AA28
  c->lr=c->r[0]; // 8010AA2C
  c->r[1]=c->r[1]+0x00000020u; // 8010AA30
  return; // 8010AA34
}

// btsnd_hcic_pin_code_neg_reply
void f_8010AA38(Ctx* __restrict c) {
  trace_call(0x8010AA38u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AA38
  c->r[0]=c->lr; // 8010AA3C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AA40
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AA44
  c->r[31]=c->r[3]|c->r[3]; // 8010AA48
  c->r[3]=0u+0x00000002u; // 8010AA4C
  c->lr=0x8010AA54u; f_800F46D0(c); // 8010AA50
  cmps(c,0,(int32_t)c->r[3],0); // 8010AA54
  if (!crb(c,2)) { goto L_8010AA64; } // 8010AA58
  c->r[3]=0u+0x00000000u; // 8010AA5C
  goto L_8010AAC4; // 8010AA60
L_8010AA64:;
  c->r[0]=0u+0x00000009u; // 8010AA64
  c->r[6]=0u+0x00000000u; // 8010AA68
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010AA6C
  c->r[5]=0u+0x0000000Eu; // 8010AA70
  c->r[4]=0u+0x00000004u; // 8010AA74
  c->r[0]=0u+0x00000006u; // 8010AA78
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010AA7C
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010AA80
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010AA84
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010AA88
  c->r[0]=R8(c->r[31]+0x00000005u); // 8010AA8C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010AA90
  c->r[0]=R8(c->r[31]+0x00000004u); // 8010AA94
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010AA98
  c->r[0]=R8(c->r[31]+0x00000003u); // 8010AA9C
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010AAA0
  c->r[0]=R8(c->r[31]+0x00000002u); // 8010AAA4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010AAA8
  c->r[0]=R8(c->r[31]+0x00000001u); // 8010AAAC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010AAB0
  c->r[0]=R8(c->r[31]+0x00000000u); // 8010AAB4
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010AAB8
  c->lr=0x8010AAC0u; f_801081E8(c); // 8010AABC
  c->r[3]=0u+0x00000001u; // 8010AAC0
L_8010AAC4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AAC4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AAC8
  c->lr=c->r[0]; // 8010AACC
  c->r[1]=c->r[1]+0x00000010u; // 8010AAD0
  return; // 8010AAD4
}

// btsnd_hcic_change_conn_type
void f_8010AAD8(Ctx* __restrict c) {
  trace_call(0x8010AAD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AAD8
  c->r[0]=c->lr; // 8010AADC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AAE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AAE4
  c->r[31]=c->r[4]|c->r[4]; // 8010AAE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010AAEC
  c->r[30]=c->r[3]|c->r[3]; // 8010AAF0
  c->r[3]=0u+0x00000002u; // 8010AAF4
  c->lr=0x8010AAFCu; f_800F46D0(c); // 8010AAF8
  cmps(c,0,(int32_t)c->r[3],0); // 8010AAFC
  if (!crb(c,2)) { goto L_8010AB0C; } // 8010AB00
  c->r[3]=0u+0x00000000u; // 8010AB04
  goto L_8010AB50; // 8010AB08
L_8010AB0C:;
  c->r[4]=0u+0x00000007u; // 8010AB0C
  c->r[0]=0u+0x00000000u; // 8010AB10
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010AB14
  c->r[6]=0u+0x0000000Fu; // 8010AB18
  c->r[5]=0u+0x00000004u; // 8010AB1C
  c->r[4]=sraw(c,c->r[30],8); // 8010AB20
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010AB24
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010AB28
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010AB2C
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010AB30
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010AB34
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 8010AB38
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8010AB3C
  W8(c->r[3]+0x0000000Du,c->r[31]); // 8010AB40
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010AB44
  c->lr=0x8010AB4Cu; f_801081E8(c); // 8010AB48
  c->r[3]=0u+0x00000001u; // 8010AB4C
L_8010AB50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AB50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AB54
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010AB58
  c->lr=c->r[0]; // 8010AB5C
  c->r[1]=c->r[1]+0x00000010u; // 8010AB60
  return; // 8010AB64
}

// btsnd_hcic_auth_request
void f_8010AB68(Ctx* __restrict c) {
  trace_call(0x8010AB68u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AB68
  c->r[0]=c->lr; // 8010AB6C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AB70
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AB74
  c->r[31]=c->r[3]|c->r[3]; // 8010AB78
  c->r[3]=0u+0x00000002u; // 8010AB7C
  c->lr=0x8010AB84u; f_800F46D0(c); // 8010AB80
  cmps(c,0,(int32_t)c->r[3],0); // 8010AB84
  if (!crb(c,2)) { goto L_8010AB94; } // 8010AB88
  c->r[3]=0u+0x00000000u; // 8010AB8C
  goto L_8010ABD0; // 8010AB90
L_8010AB94:;
  c->r[4]=0u+0x00000005u; // 8010AB94
  c->r[0]=0u+0x00000000u; // 8010AB98
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010AB9C
  c->r[6]=0u+0x00000011u; // 8010ABA0
  c->r[5]=0u+0x00000004u; // 8010ABA4
  c->r[4]=0u+0x00000002u; // 8010ABA8
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010ABAC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010ABB0
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010ABB4
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010ABB8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010ABBC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010ABC0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010ABC4
  c->lr=0x8010ABCCu; f_801081E8(c); // 8010ABC8
  c->r[3]=0u+0x00000001u; // 8010ABCC
L_8010ABD0:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ABD0
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010ABD4
  c->lr=c->r[0]; // 8010ABD8
  c->r[1]=c->r[1]+0x00000010u; // 8010ABDC
  return; // 8010ABE0
}

// btsnd_hcic_set_conn_encrypt
void f_8010ABE4(Ctx* __restrict c) {
  trace_call(0x8010ABE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ABE4
  c->r[0]=c->lr; // 8010ABE8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010ABEC
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010ABF0
  c->r[31]=c->r[4]|c->r[4]; // 8010ABF4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010ABF8
  c->r[30]=c->r[3]|c->r[3]; // 8010ABFC
  c->r[3]=0u+0x00000002u; // 8010AC00
  c->lr=0x8010AC08u; f_800F46D0(c); // 8010AC04
  cmps(c,0,(int32_t)c->r[3],0); // 8010AC08
  if (!crb(c,2)) { goto L_8010AC18; } // 8010AC0C
  c->r[3]=0u+0x00000000u; // 8010AC10
  goto L_8010AC58; // 8010AC14
L_8010AC18:;
  c->r[4]=0u+0x00000006u; // 8010AC18
  c->r[0]=0u+0x00000000u; // 8010AC1C
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010AC20
  c->r[6]=0u+0x00000013u; // 8010AC24
  c->r[5]=0u+0x00000004u; // 8010AC28
  c->r[4]=0u+0x00000003u; // 8010AC2C
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010AC30
  c->r[0]=rotl(c->r[30],24)&0x000000FFu; // 8010AC34
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010AC38
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010AC3C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010AC40
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 8010AC44
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010AC48
  W8(c->r[3]+0x0000000Du,c->r[31]); // 8010AC4C
  c->lr=0x8010AC54u; f_801081E8(c); // 8010AC50
  c->r[3]=0u+0x00000001u; // 8010AC54
L_8010AC58:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AC58
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AC5C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010AC60
  c->lr=c->r[0]; // 8010AC64
  c->r[1]=c->r[1]+0x00000010u; // 8010AC68
  return; // 8010AC6C
}

// btsnd_hcic_rmt_name_req
void f_8010AC70(Ctx* __restrict c) {
  trace_call(0x8010AC70u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AC70
  c->r[0]=c->lr; // 8010AC74
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010AC78
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010AC7C
  c->r[31]=c->r[6]|c->r[6]; // 8010AC80
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010AC84
  c->r[30]=c->r[5]|c->r[5]; // 8010AC88
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010AC8C
  c->r[29]=c->r[4]|c->r[4]; // 8010AC90
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010AC94
  c->r[28]=c->r[3]|c->r[3]; // 8010AC98
  c->r[3]=0u+0x00000002u; // 8010AC9C
  c->lr=0x8010ACA4u; f_800F46D0(c); // 8010ACA0
  cmps(c,0,(int32_t)c->r[3],0); // 8010ACA4
  if (!crb(c,2)) { goto L_8010ACB4; } // 8010ACA8
  c->r[3]=0u+0x00000000u; // 8010ACAC
  goto L_8010AD28; // 8010ACB0
L_8010ACB4:;
  c->r[4]=0u+0x0000000Du; // 8010ACB4
  c->r[0]=0u+0x00000000u; // 8010ACB8
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010ACBC
  c->r[6]=0u+0x00000019u; // 8010ACC0
  c->r[5]=0u+0x00000004u; // 8010ACC4
  c->r[4]=0u+0x0000000Au; // 8010ACC8
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010ACCC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010ACD0
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010ACD4
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010ACD8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010ACDC
  c->r[4]=R8(c->r[28]+0x00000005u); // 8010ACE0
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010ACE4
  c->r[4]=R8(c->r[28]+0x00000004u); // 8010ACE8
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8010ACEC
  c->r[4]=R8(c->r[28]+0x00000003u); // 8010ACF0
  W8(c->r[3]+0x0000000Du,c->r[4]); // 8010ACF4
  c->r[4]=R8(c->r[28]+0x00000002u); // 8010ACF8
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 8010ACFC
  c->r[4]=R8(c->r[28]+0x00000001u); // 8010AD00
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 8010AD04
  c->r[4]=R8(c->r[28]+0x00000000u); // 8010AD08
  W8(c->r[3]+0x00000010u,c->r[4]); // 8010AD0C
  W8(c->r[3]+0x00000011u,c->r[29]); // 8010AD10
  W8(c->r[3]+0x00000012u,c->r[30]); // 8010AD14
  W8(c->r[3]+0x00000013u,c->r[31]); // 8010AD18
  W8(c->r[3]+0x00000014u,c->r[0]); // 8010AD1C
  c->lr=0x8010AD24u; f_801081E8(c); // 8010AD20
  c->r[3]=0u+0x00000001u; // 8010AD24
L_8010AD28:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010AD28
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010AD2C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010AD30
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010AD34
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010AD38
  c->lr=c->r[0]; // 8010AD3C
  c->r[1]=c->r[1]+0x00000020u; // 8010AD40
  return; // 8010AD44
}

// btsnd_hcic_rmt_name_req_cancel
void f_8010AD48(Ctx* __restrict c) {
  trace_call(0x8010AD48u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AD48
  c->r[0]=c->lr; // 8010AD4C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AD50
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AD54
  c->r[31]=c->r[3]|c->r[3]; // 8010AD58
  c->r[3]=0u+0x00000002u; // 8010AD5C
  c->lr=0x8010AD64u; f_800F46D0(c); // 8010AD60
  cmps(c,0,(int32_t)c->r[3],0); // 8010AD64
  if (!crb(c,2)) { goto L_8010AD74; } // 8010AD68
  c->r[3]=0u+0x00000000u; // 8010AD6C
  goto L_8010ADD4; // 8010AD70
L_8010AD74:;
  c->r[0]=0u+0x00000009u; // 8010AD74
  c->r[6]=0u+0x00000000u; // 8010AD78
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010AD7C
  c->r[5]=0u+0x0000001Au; // 8010AD80
  c->r[4]=0u+0x00000004u; // 8010AD84
  c->r[0]=0u+0x00000006u; // 8010AD88
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010AD8C
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010AD90
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010AD94
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010AD98
  c->r[0]=R8(c->r[31]+0x00000005u); // 8010AD9C
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010ADA0
  c->r[0]=R8(c->r[31]+0x00000004u); // 8010ADA4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010ADA8
  c->r[0]=R8(c->r[31]+0x00000003u); // 8010ADAC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010ADB0
  c->r[0]=R8(c->r[31]+0x00000002u); // 8010ADB4
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010ADB8
  c->r[0]=R8(c->r[31]+0x00000001u); // 8010ADBC
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010ADC0
  c->r[0]=R8(c->r[31]+0x00000000u); // 8010ADC4
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010ADC8
  c->lr=0x8010ADD0u; f_801081E8(c); // 8010ADCC
  c->r[3]=0u+0x00000001u; // 8010ADD0
L_8010ADD4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010ADD4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010ADD8
  c->lr=c->r[0]; // 8010ADDC
  c->r[1]=c->r[1]+0x00000010u; // 8010ADE0
  return; // 8010ADE4
}

// btsnd_hcic_rmt_features_req
void f_8010ADE8(Ctx* __restrict c) {
  trace_call(0x8010ADE8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ADE8
  c->r[0]=c->lr; // 8010ADEC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010ADF0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010ADF4
  c->r[31]=c->r[3]|c->r[3]; // 8010ADF8
  c->r[3]=0u+0x00000002u; // 8010ADFC
  c->lr=0x8010AE04u; f_800F46D0(c); // 8010AE00
  cmps(c,0,(int32_t)c->r[3],0); // 8010AE04
  if (!crb(c,2)) { goto L_8010AE14; } // 8010AE08
  c->r[3]=0u+0x00000000u; // 8010AE0C
  goto L_8010AE50; // 8010AE10
L_8010AE14:;
  c->r[4]=0u+0x00000005u; // 8010AE14
  c->r[0]=0u+0x00000000u; // 8010AE18
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010AE1C
  c->r[6]=0u+0x0000001Bu; // 8010AE20
  c->r[5]=0u+0x00000004u; // 8010AE24
  c->r[4]=0u+0x00000002u; // 8010AE28
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010AE2C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010AE30
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010AE34
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010AE38
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010AE3C
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010AE40
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010AE44
  c->lr=0x8010AE4Cu; f_801081E8(c); // 8010AE48
  c->r[3]=0u+0x00000001u; // 8010AE4C
L_8010AE50:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AE50
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AE54
  c->lr=c->r[0]; // 8010AE58
  c->r[1]=c->r[1]+0x00000010u; // 8010AE5C
  return; // 8010AE60
}

// btsnd_hcic_rmt_ver_req
void f_8010AE64(Ctx* __restrict c) {
  trace_call(0x8010AE64u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AE64
  c->r[0]=c->lr; // 8010AE68
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AE6C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AE70
  c->r[31]=c->r[3]|c->r[3]; // 8010AE74
  c->r[3]=0u+0x00000002u; // 8010AE78
  c->lr=0x8010AE80u; f_800F46D0(c); // 8010AE7C
  cmps(c,0,(int32_t)c->r[3],0); // 8010AE80
  if (!crb(c,2)) { goto L_8010AE90; } // 8010AE84
  c->r[3]=0u+0x00000000u; // 8010AE88
  goto L_8010AECC; // 8010AE8C
L_8010AE90:;
  c->r[4]=0u+0x00000005u; // 8010AE90
  c->r[0]=0u+0x00000000u; // 8010AE94
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010AE98
  c->r[6]=0u+0x0000001Du; // 8010AE9C
  c->r[5]=0u+0x00000004u; // 8010AEA0
  c->r[4]=0u+0x00000002u; // 8010AEA4
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010AEA8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010AEAC
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010AEB0
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010AEB4
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010AEB8
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010AEBC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010AEC0
  c->lr=0x8010AEC8u; f_801081E8(c); // 8010AEC4
  c->r[3]=0u+0x00000001u; // 8010AEC8
L_8010AECC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AECC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AED0
  c->lr=c->r[0]; // 8010AED4
  c->r[1]=c->r[1]+0x00000010u; // 8010AED8
  return; // 8010AEDC
}

// btsnd_hcic_read_rmt_clk_offset
void f_8010AEE0(Ctx* __restrict c) {
  trace_call(0x8010AEE0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AEE0
  c->r[0]=c->lr; // 8010AEE4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010AEE8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010AEEC
  c->r[31]=c->r[3]|c->r[3]; // 8010AEF0
  c->r[3]=0u+0x00000002u; // 8010AEF4
  c->lr=0x8010AEFCu; f_800F46D0(c); // 8010AEF8
  cmps(c,0,(int32_t)c->r[3],0); // 8010AEFC
  if (!crb(c,2)) { goto L_8010AF0C; } // 8010AF00
  c->r[3]=0u+0x00000000u; // 8010AF04
  goto L_8010AF48; // 8010AF08
L_8010AF0C:;
  c->r[4]=0u+0x00000005u; // 8010AF0C
  c->r[0]=0u+0x00000000u; // 8010AF10
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010AF14
  c->r[6]=0u+0x0000001Fu; // 8010AF18
  c->r[5]=0u+0x00000004u; // 8010AF1C
  c->r[4]=0u+0x00000002u; // 8010AF20
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010AF24
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010AF28
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010AF2C
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010AF30
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010AF34
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010AF38
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010AF3C
  c->lr=0x8010AF44u; f_801081E8(c); // 8010AF40
  c->r[3]=0u+0x00000001u; // 8010AF44
L_8010AF48:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010AF48
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010AF4C
  c->lr=c->r[0]; // 8010AF50
  c->r[1]=c->r[1]+0x00000010u; // 8010AF54
  return; // 8010AF58
}

// btsnd_hcic_setup_esco_conn
void f_8010AF5C(Ctx* __restrict c) {
  trace_call(0x8010AF5Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010AF5C
  c->r[0]=c->lr; // 8010AF60
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010AF64
  c->r[11]=c->r[1]+0x00000030u; // 8010AF68
  c->lr=0x8010AF70u; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010AF6C
  c->r[25]=c->r[3]|c->r[3]; // 8010AF70
  c->r[26]=c->r[4]|c->r[4]; // 8010AF74
  c->r[27]=c->r[5]|c->r[5]; // 8010AF78
  c->r[28]=c->r[6]|c->r[6]; // 8010AF7C
  c->r[29]=c->r[7]|c->r[7]; // 8010AF80
  c->r[30]=c->r[8]|c->r[8]; // 8010AF84
  c->r[31]=c->r[9]|c->r[9]; // 8010AF88
  c->r[3]=0u+0x00000002u; // 8010AF8C
  c->lr=0x8010AF94u; f_800F46D0(c); // 8010AF90
  cmps(c,0,(int32_t)c->r[3],0); // 8010AF94
  if (!crb(c,2)) { goto L_8010AFA4; } // 8010AF98
  c->r[3]=0u+0x00000000u; // 8010AF9C
  goto L_8010B040; // 8010AFA0
L_8010AFA4:;
  c->r[0]=0u+0x00000014u; // 8010AFA4
  c->r[12]=sraw(c,c->r[25],8); // 8010AFA8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010AFAC
  c->r[0]=0u+0x00000000u; // 8010AFB0
  c->r[6]=0u+0x00000028u; // 8010AFB4
  c->r[4]=0u+0x00000004u; // 8010AFB8
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010AFBC
  c->r[0]=0u+0x00000011u; // 8010AFC0
  c->r[11]=rotl(c->r[26],24)&0x000000FFu; // 8010AFC4
  c->r[10]=rotl(c->r[26],16)&0x000000FFu; // 8010AFC8
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010AFCC
  c->r[9]=rotl(c->r[26],8)&0x000000FFu; // 8010AFD0
  c->r[8]=rotl(c->r[27],24)&0x000000FFu; // 8010AFD4
  c->r[7]=rotl(c->r[27],16)&0x000000FFu; // 8010AFD8
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010AFDC
  c->r[5]=sraw(c,c->r[28],8); // 8010AFE0
  c->r[6]=rotl(c->r[27],8)&0x000000FFu; // 8010AFE4
  c->r[4]=sraw(c,c->r[29],8); // 8010AFE8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010AFEC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010AFF0
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 8010AFF4
  W8(c->r[3]+0x0000000Cu,c->r[12]); // 8010AFF8
  W8(c->r[3]+0x0000000Du,c->r[26]); // 8010AFFC
  W8(c->r[3]+0x0000000Eu,c->r[11]); // 8010B000
  W8(c->r[3]+0x0000000Fu,c->r[10]); // 8010B004
  W8(c->r[3]+0x00000010u,c->r[9]); // 8010B008
  W8(c->r[3]+0x00000011u,c->r[27]); // 8010B00C
  W8(c->r[3]+0x00000012u,c->r[8]); // 8010B010
  W8(c->r[3]+0x00000013u,c->r[7]); // 8010B014
  W8(c->r[3]+0x00000014u,c->r[6]); // 8010B018
  W8(c->r[3]+0x00000015u,c->r[28]); // 8010B01C
  W8(c->r[3]+0x00000016u,c->r[5]); // 8010B020
  W8(c->r[3]+0x00000017u,c->r[29]); // 8010B024
  W8(c->r[3]+0x00000018u,c->r[4]); // 8010B028
  W8(c->r[3]+0x00000019u,c->r[30]); // 8010B02C
  W8(c->r[3]+0x0000001Au,c->r[31]); // 8010B030
  W8(c->r[3]+0x0000001Bu,c->r[0]); // 8010B034
  c->lr=0x8010B03Cu; f_801081E8(c); // 8010B038
  c->r[3]=0u+0x00000001u; // 8010B03C
L_8010B040:;
  c->r[11]=c->r[1]+0x00000030u; // 8010B040
  c->lr=0x8010B048u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010B044
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010B048
  c->lr=c->r[0]; // 8010B04C
  c->r[1]=c->r[1]+0x00000030u; // 8010B050
  return; // 8010B054
}

// btsnd_hcic_accept_esco_conn
void f_8010B058(Ctx* __restrict c) {
  trace_call(0x8010B058u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B058
  c->r[0]=c->lr; // 8010B05C
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010B060
  c->r[11]=c->r[1]+0x00000030u; // 8010B064
  c->lr=0x8010B06Cu; { W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010B068
  c->r[26]=0u+0x00000018u; // 8010B06C
  c->r[12]=0u+0x00000000u; // 8010B070
  c->r[11]=0u+0x00000029u; // 8010B074
  c->r[0]=0u+0x00000004u; // 8010B078
  c->r[25]=0u+0x00000015u; // 8010B07C
  W16(c->r[3]+0x00000002u,c->r[26]); // 8010B080
  c->r[26]=rotl(c->r[5],24)&0x000000FFu; // 8010B084
  c->r[27]=rotl(c->r[5],16)&0x000000FFu; // 8010B088
  W16(c->r[3]+0x00000004u,c->r[12]); // 8010B08C
  c->r[28]=rotl(c->r[5],8)&0x000000FFu; // 8010B090
  c->r[29]=rotl(c->r[6],24)&0x000000FFu; // 8010B094
  c->r[30]=rotl(c->r[6],16)&0x000000FFu; // 8010B098
  W8(c->r[3]+0x00000008u,c->r[11]); // 8010B09C
  c->r[31]=rotl(c->r[6],8)&0x000000FFu; // 8010B0A0
  c->r[12]=sraw(c,c->r[7],8); // 8010B0A4
  c->r[11]=rotl(c->r[8],24)&0x000000FFu; // 8010B0A8
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010B0AC
  c->r[0]=rotl(c->r[10],24)&0x000000FFu; // 8010B0B0
  W8(c->r[3]+0x0000000Au,c->r[25]); // 8010B0B4
  c->r[25]=R8(c->r[4]+0x00000005u); // 8010B0B8
  W8(c->r[3]+0x0000000Bu,c->r[25]); // 8010B0BC
  c->r[25]=R8(c->r[4]+0x00000004u); // 8010B0C0
  W8(c->r[3]+0x0000000Cu,c->r[25]); // 8010B0C4
  c->r[25]=R8(c->r[4]+0x00000003u); // 8010B0C8
  W8(c->r[3]+0x0000000Du,c->r[25]); // 8010B0CC
  c->r[25]=R8(c->r[4]+0x00000002u); // 8010B0D0
  W8(c->r[3]+0x0000000Eu,c->r[25]); // 8010B0D4
  c->r[25]=R8(c->r[4]+0x00000001u); // 8010B0D8
  W8(c->r[3]+0x0000000Fu,c->r[25]); // 8010B0DC
  c->r[4]=R8(c->r[4]+0x00000000u); // 8010B0E0
  W8(c->r[3]+0x00000010u,c->r[4]); // 8010B0E4
  W8(c->r[3]+0x00000011u,c->r[5]); // 8010B0E8
  W8(c->r[3]+0x00000012u,c->r[26]); // 8010B0EC
  W8(c->r[3]+0x00000013u,c->r[27]); // 8010B0F0
  W8(c->r[3]+0x00000014u,c->r[28]); // 8010B0F4
  W8(c->r[3]+0x00000015u,c->r[6]); // 8010B0F8
  W8(c->r[3]+0x00000016u,c->r[29]); // 8010B0FC
  W8(c->r[3]+0x00000017u,c->r[30]); // 8010B100
  W8(c->r[3]+0x00000018u,c->r[31]); // 8010B104
  W8(c->r[3]+0x00000019u,c->r[7]); // 8010B108
  W8(c->r[3]+0x0000001Au,c->r[12]); // 8010B10C
  W8(c->r[3]+0x0000001Bu,c->r[8]); // 8010B110
  W8(c->r[3]+0x0000001Cu,c->r[11]); // 8010B114
  W8(c->r[3]+0x0000001Du,c->r[9]); // 8010B118
  W8(c->r[3]+0x0000001Eu,c->r[10]); // 8010B11C
  W8(c->r[3]+0x0000001Fu,c->r[0]); // 8010B120
  c->lr=0x8010B128u; f_801081E8(c); // 8010B124
  c->r[11]=c->r[1]+0x00000030u; // 8010B128
  c->lr=0x8010B130u; { c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010B12C
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010B130
  c->lr=c->r[0]; // 8010B134
  c->r[1]=c->r[1]+0x00000030u; // 8010B138
  return; // 8010B13C
}

// btsnd_hcic_reject_esco_conn
void f_8010B140(Ctx* __restrict c) {
  trace_call(0x8010B140u);
  c->r[9]=0u+0x0000000Au; // 8010B140
  c->r[8]=0u+0x00000000u; // 8010B144
  c->r[7]=0u+0x0000002Au; // 8010B148
  c->r[6]=0u+0x00000004u; // 8010B14C
  c->r[0]=0u+0x00000007u; // 8010B150
  W16(c->r[3]+0x00000002u,c->r[9]); // 8010B154
  W16(c->r[3]+0x00000004u,c->r[8]); // 8010B158
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010B15C
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010B160
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010B164
  c->r[0]=R8(c->r[4]+0x00000005u); // 8010B168
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010B16C
  c->r[0]=R8(c->r[4]+0x00000004u); // 8010B170
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010B174
  c->r[0]=R8(c->r[4]+0x00000003u); // 8010B178
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010B17C
  c->r[0]=R8(c->r[4]+0x00000002u); // 8010B180
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010B184
  c->r[0]=R8(c->r[4]+0x00000001u); // 8010B188
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010B18C
  c->r[0]=R8(c->r[4]+0x00000000u); // 8010B190
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010B194
  W8(c->r[3]+0x00000011u,c->r[5]); // 8010B198
  f_801081E8(c); return; // 8010B19C
}

// btsnd_hcic_hold_mode
void f_8010B1A0(Ctx* __restrict c) {
  trace_call(0x8010B1A0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B1A0
  c->r[0]=c->lr; // 8010B1A4
  cmps(c,0,(int32_t)c->r[3],0); // 8010B1A8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010B1AC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010B1B0
  c->r[31]=c->r[6]|c->r[6]; // 8010B1B4
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010B1B8
  c->r[30]=c->r[5]|c->r[5]; // 8010B1BC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010B1C0
  c->r[29]=c->r[4]|c->r[4]; // 8010B1C4
  if (!crb(c,2)) { goto L_8010B1E4; } // 8010B1C8
  c->r[3]=0u+0x00000002u; // 8010B1CC
  c->lr=0x8010B1D4u; f_800F46D0(c); // 8010B1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8010B1D4
  if (!crb(c,2)) { goto L_8010B1E4; } // 8010B1D8
  c->r[3]=0u+0x00000000u; // 8010B1DC
  goto L_8010B238; // 8010B1E0
L_8010B1E4:;
  c->r[0]=0u+0x00000009u; // 8010B1E4
  c->r[5]=sraw(c,c->r[29],8); // 8010B1E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010B1EC
  c->r[0]=0u+0x00000000u; // 8010B1F0
  c->r[8]=0u+0x00000001u; // 8010B1F4
  c->r[7]=0u+0x00000008u; // 8010B1F8
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B1FC
  c->r[6]=0u+0x00000006u; // 8010B200
  c->r[4]=sraw(c,c->r[30],8); // 8010B204
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010B208
  W8(c->r[3]+0x00000008u,c->r[8]); // 8010B20C
  W8(c->r[3]+0x00000009u,c->r[7]); // 8010B210
  W8(c->r[3]+0x0000000Au,c->r[6]); // 8010B214
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 8010B218
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8010B21C
  W8(c->r[3]+0x0000000Du,c->r[30]); // 8010B220
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 8010B224
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 8010B228
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010B22C
  c->lr=0x8010B234u; f_801081E8(c); // 8010B230
  c->r[3]=0u+0x00000001u; // 8010B234
L_8010B238:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010B238
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010B23C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010B240
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010B244
  c->lr=c->r[0]; // 8010B248
  c->r[1]=c->r[1]+0x00000020u; // 8010B24C
  return; // 8010B250
}

// btsnd_hcic_sniff_mode
void f_8010B254(Ctx* __restrict c) {
  trace_call(0x8010B254u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B254
  c->r[0]=c->lr; // 8010B258
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010B25C
  c->r[11]=c->r[1]+0x00000020u; // 8010B260
  c->lr=0x8010B268u; f_800ADA2C(c); // 8010B264
  cmps(c,0,(int32_t)c->r[3],0); // 8010B268
  c->r[27]=c->r[4]|c->r[4]; // 8010B26C
  c->r[28]=c->r[5]|c->r[5]; // 8010B270
  c->r[29]=c->r[6]|c->r[6]; // 8010B274
  c->r[30]=c->r[7]|c->r[7]; // 8010B278
  c->r[31]=c->r[8]|c->r[8]; // 8010B27C
  if (!crb(c,2)) { goto L_8010B29C; } // 8010B280
  c->r[3]=0u+0x00000002u; // 8010B284
  c->lr=0x8010B28Cu; f_800F46D0(c); // 8010B288
  cmps(c,0,(int32_t)c->r[3],0); // 8010B28C
  if (!crb(c,2)) { goto L_8010B29C; } // 8010B290
  c->r[3]=0u+0x00000000u; // 8010B294
  goto L_8010B308; // 8010B298
L_8010B29C:;
  c->r[0]=0u+0x0000000Du; // 8010B29C
  c->r[7]=sraw(c,c->r[27],8); // 8010B2A0
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010B2A4
  c->r[4]=0u+0x00000000u; // 8010B2A8
  c->r[6]=sraw(c,c->r[28],8); // 8010B2AC
  c->r[0]=0u+0x00000003u; // 8010B2B0
  W16(c->r[3]+0x00000004u,c->r[4]); // 8010B2B4
  c->r[5]=sraw(c,c->r[29],8); // 8010B2B8
  c->r[9]=0u+0x00000008u; // 8010B2BC
  c->r[8]=0u+0x0000000Au; // 8010B2C0
  W8(c->r[3]+0x00000008u,c->r[0]); // 8010B2C4
  c->r[4]=sraw(c,c->r[30],8); // 8010B2C8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010B2CC
  W8(c->r[3]+0x00000009u,c->r[9]); // 8010B2D0
  W8(c->r[3]+0x0000000Au,c->r[8]); // 8010B2D4
  W8(c->r[3]+0x0000000Bu,c->r[27]); // 8010B2D8
  W8(c->r[3]+0x0000000Cu,c->r[7]); // 8010B2DC
  W8(c->r[3]+0x0000000Du,c->r[28]); // 8010B2E0
  W8(c->r[3]+0x0000000Eu,c->r[6]); // 8010B2E4
  W8(c->r[3]+0x0000000Fu,c->r[29]); // 8010B2E8
  W8(c->r[3]+0x00000010u,c->r[5]); // 8010B2EC
  W8(c->r[3]+0x00000011u,c->r[30]); // 8010B2F0
  W8(c->r[3]+0x00000012u,c->r[4]); // 8010B2F4
  W8(c->r[3]+0x00000013u,c->r[31]); // 8010B2F8
  W8(c->r[3]+0x00000014u,c->r[0]); // 8010B2FC
  c->lr=0x8010B304u; f_801081E8(c); // 8010B300
  c->r[3]=0u+0x00000001u; // 8010B304
L_8010B308:;
  c->r[11]=c->r[1]+0x00000020u; // 8010B308
  c->lr=0x8010B310u; f_800ADA78(c); // 8010B30C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010B310
  c->lr=c->r[0]; // 8010B314
  c->r[1]=c->r[1]+0x00000020u; // 8010B318
  return; // 8010B31C
}

// btsnd_hcic_exit_sniff_mode
void f_8010B320(Ctx* __restrict c) {
  trace_call(0x8010B320u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B320
  c->r[0]=c->lr; // 8010B324
  cmps(c,0,(int32_t)c->r[3],0); // 8010B328
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B32C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B330
  c->r[31]=c->r[4]|c->r[4]; // 8010B334
  if (!crb(c,2)) { goto L_8010B354; } // 8010B338
  c->r[3]=0u+0x00000002u; // 8010B33C
  c->lr=0x8010B344u; f_800F46D0(c); // 8010B340
  cmps(c,0,(int32_t)c->r[3],0); // 8010B344
  if (!crb(c,2)) { goto L_8010B354; } // 8010B348
  c->r[3]=0u+0x00000000u; // 8010B34C
  goto L_8010B390; // 8010B350
L_8010B354:;
  c->r[4]=0u+0x00000005u; // 8010B354
  c->r[0]=0u+0x00000000u; // 8010B358
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010B35C
  c->r[6]=0u+0x00000004u; // 8010B360
  c->r[5]=0u+0x00000008u; // 8010B364
  c->r[4]=0u+0x00000002u; // 8010B368
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B36C
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010B370
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010B374
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010B378
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010B37C
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010B380
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010B384
  c->lr=0x8010B38Cu; f_801081E8(c); // 8010B388
  c->r[3]=0u+0x00000001u; // 8010B38C
L_8010B390:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B390
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B394
  c->lr=c->r[0]; // 8010B398
  c->r[1]=c->r[1]+0x00000010u; // 8010B39C
  return; // 8010B3A0
}

// btsnd_hcic_park_mode
void f_8010B3A4(Ctx* __restrict c) {
  trace_call(0x8010B3A4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B3A4
  c->r[0]=c->lr; // 8010B3A8
  cmps(c,0,(int32_t)c->r[3],0); // 8010B3AC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010B3B0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010B3B4
  c->r[31]=c->r[6]|c->r[6]; // 8010B3B8
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010B3BC
  c->r[30]=c->r[5]|c->r[5]; // 8010B3C0
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010B3C4
  c->r[29]=c->r[4]|c->r[4]; // 8010B3C8
  if (!crb(c,2)) { goto L_8010B3E8; } // 8010B3CC
  c->r[3]=0u+0x00000002u; // 8010B3D0
  c->lr=0x8010B3D8u; f_800F46D0(c); // 8010B3D4
  cmps(c,0,(int32_t)c->r[3],0); // 8010B3D8
  if (!crb(c,2)) { goto L_8010B3E8; } // 8010B3DC
  c->r[3]=0u+0x00000000u; // 8010B3E0
  goto L_8010B43C; // 8010B3E4
L_8010B3E8:;
  c->r[0]=0u+0x00000009u; // 8010B3E8
  c->r[5]=sraw(c,c->r[29],8); // 8010B3EC
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010B3F0
  c->r[0]=0u+0x00000000u; // 8010B3F4
  c->r[8]=0u+0x00000005u; // 8010B3F8
  c->r[7]=0u+0x00000008u; // 8010B3FC
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B400
  c->r[6]=0u+0x00000006u; // 8010B404
  c->r[4]=sraw(c,c->r[30],8); // 8010B408
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010B40C
  W8(c->r[3]+0x00000008u,c->r[8]); // 8010B410
  W8(c->r[3]+0x00000009u,c->r[7]); // 8010B414
  W8(c->r[3]+0x0000000Au,c->r[6]); // 8010B418
  W8(c->r[3]+0x0000000Bu,c->r[29]); // 8010B41C
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8010B420
  W8(c->r[3]+0x0000000Du,c->r[30]); // 8010B424
  W8(c->r[3]+0x0000000Eu,c->r[4]); // 8010B428
  W8(c->r[3]+0x0000000Fu,c->r[31]); // 8010B42C
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010B430
  c->lr=0x8010B438u; f_801081E8(c); // 8010B434
  c->r[3]=0u+0x00000001u; // 8010B438
L_8010B43C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010B43C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010B440
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010B444
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010B448
  c->lr=c->r[0]; // 8010B44C
  c->r[1]=c->r[1]+0x00000020u; // 8010B450
  return; // 8010B454
}

// btsnd_hcic_exit_park_mode
void f_8010B458(Ctx* __restrict c) {
  trace_call(0x8010B458u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B458
  c->r[0]=c->lr; // 8010B45C
  cmps(c,0,(int32_t)c->r[3],0); // 8010B460
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B464
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B468
  c->r[31]=c->r[4]|c->r[4]; // 8010B46C
  if (!crb(c,2)) { goto L_8010B48C; } // 8010B470
  c->r[3]=0u+0x00000002u; // 8010B474
  c->lr=0x8010B47Cu; f_800F46D0(c); // 8010B478
  cmps(c,0,(int32_t)c->r[3],0); // 8010B47C
  if (!crb(c,2)) { goto L_8010B48C; } // 8010B480
  c->r[3]=0u+0x00000000u; // 8010B484
  goto L_8010B4C8; // 8010B488
L_8010B48C:;
  c->r[4]=0u+0x00000005u; // 8010B48C
  c->r[0]=0u+0x00000000u; // 8010B490
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010B494
  c->r[6]=0u+0x00000006u; // 8010B498
  c->r[5]=0u+0x00000008u; // 8010B49C
  c->r[4]=0u+0x00000002u; // 8010B4A0
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B4A4
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010B4A8
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010B4AC
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010B4B0
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010B4B4
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010B4B8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010B4BC
  c->lr=0x8010B4C4u; f_801081E8(c); // 8010B4C0
  c->r[3]=0u+0x00000001u; // 8010B4C4
L_8010B4C8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B4C8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B4CC
  c->lr=c->r[0]; // 8010B4D0
  c->r[1]=c->r[1]+0x00000010u; // 8010B4D4
  return; // 8010B4D8
}

// btsnd_hcic_switch_role
void f_8010B4DC(Ctx* __restrict c) {
  trace_call(0x8010B4DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B4DC
  c->r[0]=c->lr; // 8010B4E0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B4E4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B4E8
  c->r[31]=c->r[4]|c->r[4]; // 8010B4EC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010B4F0
  c->r[30]=c->r[3]|c->r[3]; // 8010B4F4
  c->r[3]=0u+0x00000002u; // 8010B4F8
  c->lr=0x8010B500u; f_800F46D0(c); // 8010B4FC
  cmps(c,0,(int32_t)c->r[3],0); // 8010B500
  if (!crb(c,2)) { goto L_8010B510; } // 8010B504
  c->r[3]=0u+0x00000000u; // 8010B508
  goto L_8010B574; // 8010B50C
L_8010B510:;
  c->r[0]=0u+0x0000000Au; // 8010B510
  c->r[6]=0u+0x00000000u; // 8010B514
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010B518
  c->r[5]=0u+0x0000000Bu; // 8010B51C
  c->r[4]=0u+0x00000008u; // 8010B520
  c->r[0]=0u+0x00000007u; // 8010B524
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010B528
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010B52C
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010B530
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010B534
  c->r[0]=R8(c->r[30]+0x00000005u); // 8010B538
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010B53C
  c->r[0]=R8(c->r[30]+0x00000004u); // 8010B540
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010B544
  c->r[0]=R8(c->r[30]+0x00000003u); // 8010B548
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010B54C
  c->r[0]=R8(c->r[30]+0x00000002u); // 8010B550
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010B554
  c->r[0]=R8(c->r[30]+0x00000001u); // 8010B558
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010B55C
  c->r[0]=R8(c->r[30]+0x00000000u); // 8010B560
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010B564
  W8(c->r[3]+0x00000011u,c->r[31]); // 8010B568
  c->lr=0x8010B570u; f_801081E8(c); // 8010B56C
  c->r[3]=0u+0x00000001u; // 8010B570
L_8010B574:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B574
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B578
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010B57C
  c->lr=c->r[0]; // 8010B580
  c->r[1]=c->r[1]+0x00000010u; // 8010B584
  return; // 8010B588
}

// btsnd_hcic_write_policy_set
void f_8010B58C(Ctx* __restrict c) {
  trace_call(0x8010B58Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B58C
  c->r[0]=c->lr; // 8010B590
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B594
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B598
  c->r[31]=c->r[4]|c->r[4]; // 8010B59C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010B5A0
  c->r[30]=c->r[3]|c->r[3]; // 8010B5A4
  c->r[3]=0u+0x00000002u; // 8010B5A8
  c->lr=0x8010B5B0u; f_800F46D0(c); // 8010B5AC
  cmps(c,0,(int32_t)c->r[3],0); // 8010B5B0
  if (!crb(c,2)) { goto L_8010B5C0; } // 8010B5B4
  c->r[3]=0u+0x00000000u; // 8010B5B8
  goto L_8010B608; // 8010B5BC
L_8010B5C0:;
  c->r[4]=0u+0x00000007u; // 8010B5C0
  c->r[0]=0u+0x00000000u; // 8010B5C4
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010B5C8
  c->r[7]=0u+0x0000000Du; // 8010B5CC
  c->r[6]=0u+0x00000008u; // 8010B5D0
  c->r[5]=0u+0x00000004u; // 8010B5D4
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B5D8
  c->r[4]=sraw(c,c->r[30],8); // 8010B5DC
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010B5E0
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010B5E4
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010B5E8
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010B5EC
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 8010B5F0
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8010B5F4
  W8(c->r[3]+0x0000000Du,c->r[31]); // 8010B5F8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010B5FC
  c->lr=0x8010B604u; f_801081E8(c); // 8010B600
  c->r[3]=0u+0x00000001u; // 8010B604
L_8010B608:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B608
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B60C
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010B610
  c->lr=c->r[0]; // 8010B614
  c->r[1]=c->r[1]+0x00000010u; // 8010B618
  return; // 8010B61C
}

// btsnd_hcic_reset
void f_8010B620(Ctx* __restrict c) {
  trace_call(0x8010B620u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B620
  c->r[0]=c->lr; // 8010B624
  c->r[3]=0u+0x00000002u; // 8010B628
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B62C
  c->lr=0x8010B634u; f_800F46D0(c); // 8010B630
  cmps(c,0,(int32_t)c->r[3],0); // 8010B634
  if (!crb(c,2)) { goto L_8010B644; } // 8010B638
  c->r[3]=0u+0x00000000u; // 8010B63C
  goto L_8010B66C; // 8010B640
L_8010B644:;
  c->r[5]=0u+0x00000003u; // 8010B644
  c->r[4]=0u+0x00000000u; // 8010B648
  W16(c->r[3]+0x00000002u,c->r[5]); // 8010B64C
  c->r[0]=0u+0x0000000Cu; // 8010B650
  W16(c->r[3]+0x00000004u,c->r[4]); // 8010B654
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010B658
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010B65C
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010B660
  c->lr=0x8010B668u; f_801081E8(c); // 8010B664
  c->r[3]=0u+0x00000001u; // 8010B668
L_8010B66C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B66C
  c->lr=c->r[0]; // 8010B670
  c->r[1]=c->r[1]+0x00000010u; // 8010B674
  return; // 8010B678
}

// btsnd_hcic_set_event_filter
void f_8010B67C(Ctx* __restrict c) {
  trace_call(0x8010B67Cu);
  c->r[0]=0u+0x00000000u; // 8010B67C
  c->r[9]=0u+0x00000005u; // 8010B680
  c->r[8]=0u+0x0000000Cu; // 8010B684
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B688
  cmps(c,0,(int32_t)c->r[4],0); // 8010B68C
  c->r[0]=c->r[6]|c->r[6]; // 8010B690
  W8(c->r[3]+0x00000008u,c->r[9]); // 8010B694
  W8(c->r[3]+0x00000009u,c->r[8]); // 8010B698
  if (crb(c,2)) { goto L_8010B820; } // 8010B69C
  c->r[8]=c->r[7]+0x00000005u; // 8010B6A0
  c->r[9]=c->r[7]+0x00000002u; // 8010B6A4
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010B6A8
  cmpu(c,0,c->r[5],0x00000001u); // 8010B6AC
  c->r[8]=c->r[3]+0x0000000Du; // 8010B6B0
  W8(c->r[3]+0x0000000Au,c->r[9]); // 8010B6B4
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010B6B8
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8010B6BC
  if (!crb(c,2)) { goto L_8010B708; } // 8010B6C0
  c->r[4]=R8(c->r[6]+0x00000002u); // 8010B6C4
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 8010B6C8
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 8010B6CC
  W8(c->r[8]+0x00000000u,c->r[4]); // 8010B6D0
  c->r[0]=c->r[6]+0x00000006u; // 8010B6D4
  c->r[4]=R8(c->r[6]+0x00000001u); // 8010B6D8
  W8(c->r[8]+0x00000001u,c->r[4]); // 8010B6DC
  c->r[4]=R8(c->r[6]+0x00000000u); // 8010B6E0
  W8(c->r[8]+0x00000002u,c->r[4]); // 8010B6E4
  c->r[4]=R8(c->r[6]+0x00000005u); // 8010B6E8
  W8(c->r[8]+0x00000003u,c->r[4]); // 8010B6EC
  c->r[4]=R8(c->r[6]+0x00000004u); // 8010B6F0
  W8(c->r[8]+0x00000004u,c->r[4]); // 8010B6F4
  c->r[4]=R8(c->r[6]+0x00000003u); // 8010B6F8
  W8(c->r[8]+0x00000005u,c->r[4]); // 8010B6FC
  c->r[8]=c->r[8]+0x00000006u; // 8010B700
  goto L_8010B750; // 8010B704
L_8010B708:;
  cmpu(c,0,c->r[5],0x00000002u); // 8010B708
  if (!crb(c,2)) { goto L_8010B750; } // 8010B70C
  c->r[4]=R8(c->r[6]+0x00000005u); // 8010B710
  c->r[0]=c->r[7]+0xFFFFFFFAu; // 8010B714
  c->r[7]=rotl(c->r[0],0)&0x000000FFu; // 8010B718
  W8(c->r[8]+0x00000000u,c->r[4]); // 8010B71C
  c->r[0]=c->r[6]+0x00000006u; // 8010B720
  c->r[4]=R8(c->r[6]+0x00000004u); // 8010B724
  W8(c->r[8]+0x00000001u,c->r[4]); // 8010B728
  c->r[4]=R8(c->r[6]+0x00000003u); // 8010B72C
  W8(c->r[8]+0x00000002u,c->r[4]); // 8010B730
  c->r[4]=R8(c->r[6]+0x00000002u); // 8010B734
  W8(c->r[8]+0x00000003u,c->r[4]); // 8010B738
  c->r[4]=R8(c->r[6]+0x00000001u); // 8010B73C
  W8(c->r[8]+0x00000004u,c->r[4]); // 8010B740
  c->r[4]=R8(c->r[6]+0x00000000u); // 8010B744
  W8(c->r[8]+0x00000005u,c->r[4]); // 8010B748
  c->r[8]=c->r[8]+0x00000006u; // 8010B74C
L_8010B750:;
  cmps(c,1,(int32_t)c->r[7],0); // 8010B750
  if (crb(c,6)) { goto L_8010B834; } // 8010B754
  c->r[9]=0u+0x00000000u; // 8010B758
  if (!crb(c,5)) { goto L_8010B834; } // 8010B75C
  cmps(c,0,(int32_t)c->r[7],8); // 8010B760
  c->r[5]=c->r[7]+0xFFFFFFF8u; // 8010B764
  if (!crb(c,1)) { goto L_8010B7F4; } // 8010B768
  c->r[6]=0u+0x00000000u; // 8010B76C
  if (crb(c,4)) { goto L_8010B788; } // 8010B770
  c->r[4]=0u+0x80000000u; // 8010B774
  c->r[4]=c->r[4]+0xFFFFFFFEu; // 8010B778
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[4]); // 8010B77C
  if (crb(c,1)) { goto L_8010B788; } // 8010B780
  c->r[6]=0u+0x00000001u; // 8010B784
L_8010B788:;
  cmps(c,0,(int32_t)c->r[6],0); // 8010B788
  if (crb(c,2)) { goto L_8010B7F4; } // 8010B78C
  c->r[4]=c->r[5]+0x00000007u; // 8010B790
  c->r[4]=rotl(c->r[4],29)&0x1FFFFFFFu; // 8010B794
  c->ctr=c->r[4]; // 8010B798
  cmps(c,0,(int32_t)c->r[5],0); // 8010B79C
  if (!crb(c,1)) { goto L_8010B7F4; } // 8010B7A0
L_8010B7A4:;
  c->r[4]=R8(c->r[9]+c->r[0]); // 8010B7A4
  c->r[5]=c->r[0]+c->r[9]; // 8010B7A8
  c->r[9]=c->r[9]+0x00000008u; // 8010B7AC
  W8(c->r[8]+0x00000000u,c->r[4]); // 8010B7B0
  c->r[4]=R8(c->r[5]+0x00000001u); // 8010B7B4
  W8(c->r[8]+0x00000001u,c->r[4]); // 8010B7B8
  c->r[4]=R8(c->r[5]+0x00000002u); // 8010B7BC
  W8(c->r[8]+0x00000002u,c->r[4]); // 8010B7C0
  c->r[4]=R8(c->r[5]+0x00000003u); // 8010B7C4
  W8(c->r[8]+0x00000003u,c->r[4]); // 8010B7C8
  c->r[4]=R8(c->r[5]+0x00000004u); // 8010B7CC
  W8(c->r[8]+0x00000004u,c->r[4]); // 8010B7D0
  c->r[4]=R8(c->r[5]+0x00000005u); // 8010B7D4
  W8(c->r[8]+0x00000005u,c->r[4]); // 8010B7D8
  c->r[4]=R8(c->r[5]+0x00000006u); // 8010B7DC
  W8(c->r[8]+0x00000006u,c->r[4]); // 8010B7E0
  c->r[4]=R8(c->r[5]+0x00000007u); // 8010B7E4
  W8(c->r[8]+0x00000007u,c->r[4]); // 8010B7E8
  c->r[8]=c->r[8]+0x00000008u; // 8010B7EC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010B7A4; } // 8010B7F0
L_8010B7F4:;
  c->r[4]=c->r[7]-c->r[9]; // 8010B7F4
  c->r[5]=c->r[0]+c->r[9]; // 8010B7F8
  c->ctr=c->r[4]; // 8010B7FC
  cmps(c,0,(int32_t)c->r[9],(int32_t)c->r[7]); // 8010B800
  if (!crb(c,0)) { goto L_8010B834; } // 8010B804
L_8010B808:;
  c->r[0]=R8(c->r[5]+0x00000000u); // 8010B808
  c->r[5]=c->r[5]+0x00000001u; // 8010B80C
  W8(c->r[8]+0x00000000u,c->r[0]); // 8010B810
  c->r[8]=c->r[8]+0x00000001u; // 8010B814
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010B808; } // 8010B818
  goto L_8010B834; // 8010B81C
L_8010B820:;
  c->r[5]=0u+0x00000004u; // 8010B820
  c->r[0]=0u+0x00000001u; // 8010B824
  W16(c->r[3]+0x00000002u,c->r[5]); // 8010B828
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010B82C
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010B830
L_8010B834:;
  f_801081E8(c); return; // 8010B834
}

// btsnd_hcic_write_pin_type
void f_8010B838(Ctx* __restrict c) {
  trace_call(0x8010B838u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B838
  c->r[0]=c->lr; // 8010B83C
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010B840
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010B844
  c->r[31]=c->r[3]|c->r[3]; // 8010B848
  c->r[3]=0u+0x00000002u; // 8010B84C
  c->lr=0x8010B854u; f_800F46D0(c); // 8010B850
  cmps(c,0,(int32_t)c->r[3],0); // 8010B854
  if (!crb(c,2)) { goto L_8010B864; } // 8010B858
  c->r[3]=0u+0x00000000u; // 8010B85C
  goto L_8010B898; // 8010B860
L_8010B864:;
  c->r[0]=0u+0x00000004u; // 8010B864
  c->r[6]=0u+0x00000000u; // 8010B868
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010B86C
  c->r[5]=0u+0x0000000Au; // 8010B870
  c->r[4]=0u+0x0000000Cu; // 8010B874
  c->r[0]=0u+0x00000001u; // 8010B878
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010B87C
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010B880
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010B884
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010B888
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010B88C
  c->lr=0x8010B894u; f_801081E8(c); // 8010B890
  c->r[3]=0u+0x00000001u; // 8010B894
L_8010B898:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010B898
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010B89C
  c->lr=c->r[0]; // 8010B8A0
  c->r[1]=c->r[1]+0x00000010u; // 8010B8A4
  return; // 8010B8A8
}

// btsnd_hcic_read_stored_key
void f_8010B8AC(Ctx* __restrict c) {
  trace_call(0x8010B8ACu);
  c->r[9]=0u+0x0000000Au; // 8010B8AC
  c->r[8]=0u+0x00000000u; // 8010B8B0
  c->r[7]=0u+0x0000000Du; // 8010B8B4
  c->r[6]=0u+0x0000000Cu; // 8010B8B8
  c->r[0]=0u+0x00000007u; // 8010B8BC
  W16(c->r[3]+0x00000002u,c->r[9]); // 8010B8C0
  W16(c->r[3]+0x00000004u,c->r[8]); // 8010B8C4
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010B8C8
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010B8CC
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010B8D0
  c->r[0]=R8(c->r[4]+0x00000005u); // 8010B8D4
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010B8D8
  c->r[0]=R8(c->r[4]+0x00000004u); // 8010B8DC
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010B8E0
  c->r[0]=R8(c->r[4]+0x00000003u); // 8010B8E4
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010B8E8
  c->r[0]=R8(c->r[4]+0x00000002u); // 8010B8EC
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010B8F0
  c->r[0]=R8(c->r[4]+0x00000001u); // 8010B8F4
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010B8F8
  c->r[0]=R8(c->r[4]+0x00000000u); // 8010B8FC
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010B900
  W8(c->r[3]+0x00000011u,c->r[5]); // 8010B904
  f_801081E8(c); return; // 8010B908
}

// btsnd_hcic_write_stored_key
void f_8010B90C(Ctx* __restrict c) {
  trace_call(0x8010B90Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010B90C
  c->r[0]=c->lr; // 8010B910
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010B914
  c->r[11]=c->r[1]+0x00000030u; // 8010B918
  c->lr=0x8010B920u; { W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010B91C
  c->r[7]=(uint32_t)((int32_t)c->r[4]*(int32_t)22); // 8010B920
  c->r[0]=0u+0x00000000u; // 8010B924
  c->r[9]=0u+0x00000011u; // 8010B928
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010B92C
  c->r[8]=0u+0x0000000Cu; // 8010B930
  c->r[10]=c->r[7]+0x00000004u; // 8010B934
  c->r[7]=rotl(c->r[10],0)&0x0000FFFFu; // 8010B938
  cmpu(c,0,c->r[4],0x0000000Bu); // 8010B93C
  c->r[0]=c->r[7]+0xFFFFFFFDu; // 8010B940
  W16(c->r[3]+0x00000002u,c->r[10]); // 8010B944
  W8(c->r[3]+0x00000008u,c->r[9]); // 8010B948
  W8(c->r[3]+0x00000009u,c->r[8]); // 8010B94C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010B950
  if (!crb(c,1)) { goto L_8010B95C; } // 8010B954
  c->r[4]=0u+0x0000000Bu; // 8010B958
L_8010B95C:;
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010B95C
  c->r[7]=c->r[3]+0x0000000Cu; // 8010B960
  c->ctr=c->r[4]; // 8010B964
  cmps(c,0,(int32_t)c->r[4],0); // 8010B968
  if (!crb(c,1)) { goto L_8010BAB0; } // 8010B96C
L_8010B970:;
  c->r[0]=R8(c->r[5]+0x00000005u); // 8010B970
  c->r[22]=0u+0x00000000u; // 8010B974
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 8010B978
  c->r[24]=0u+0x00000001u; // 8010B97C
  W8(c->r[7]+0x00000000u,c->r[0]); // 8010B980
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 8010B984
  c->r[26]=0u+0x00000002u; // 8010B988
  c->r[28]=0u+0x00000003u; // 8010B98C
  c->r[0]=R8(c->r[5]+0x00000004u); // 8010B990
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 8010B994
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 8010B998
  c->r[30]=0u+0x00000004u; // 8010B99C
  W8(c->r[7]+0x00000001u,c->r[0]); // 8010B9A0
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 8010B9A4
  c->r[12]=0u+0x00000005u; // 8010B9A8
  c->r[10]=0u+0x00000006u; // 8010B9AC
  c->r[0]=R8(c->r[5]+0x00000003u); // 8010B9B0
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 8010B9B4
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 8010B9B8
  c->r[8]=0u+0x00000007u; // 8010B9BC
  W8(c->r[7]+0x00000002u,c->r[0]); // 8010B9C0
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 8010B9C4
  c->r[22]=0u+0x00000008u; // 8010B9C8
  c->r[24]=0u+0x00000009u; // 8010B9CC
  c->r[0]=R8(c->r[5]+0x00000002u); // 8010B9D0
  c->r[26]=0u+0x0000000Au; // 8010B9D4
  c->r[28]=0u+0x0000000Bu; // 8010B9D8
  c->r[30]=0u+0x0000000Cu; // 8010B9DC
  W8(c->r[7]+0x00000003u,c->r[0]); // 8010B9E0
  c->r[12]=0u+0x0000000Du; // 8010B9E4
  c->r[10]=0u+0x0000000Eu; // 8010B9E8
  c->r[8]=0u+0x0000000Fu; // 8010B9EC
  c->r[0]=R8(c->r[5]+0x00000001u); // 8010B9F0
  W8(c->r[7]+0x00000004u,c->r[0]); // 8010B9F4
  c->r[0]=R8(c->r[5]+0x00000000u); // 8010B9F8
  c->r[5]=c->r[5]+0x00000006u; // 8010B9FC
  W8(c->r[7]+0x00000005u,c->r[0]); // 8010BA00
  c->r[0]=R8(c->r[6]+c->r[23]); // 8010BA04
  c->r[23]=addc(c,~c->r[22],0x0000000Fu,1); // 8010BA08
  W8(c->r[7]+0x00000006u,c->r[0]); // 8010BA0C
  c->r[0]=R8(c->r[6]+c->r[25]); // 8010BA10
  c->r[25]=addc(c,~c->r[24],0x0000000Fu,1); // 8010BA14
  W8(c->r[7]+0x00000007u,c->r[0]); // 8010BA18
  c->r[0]=R8(c->r[6]+c->r[27]); // 8010BA1C
  c->r[27]=addc(c,~c->r[26],0x0000000Fu,1); // 8010BA20
  W8(c->r[7]+0x00000008u,c->r[0]); // 8010BA24
  c->r[0]=R8(c->r[6]+c->r[29]); // 8010BA28
  c->r[29]=addc(c,~c->r[28],0x0000000Fu,1); // 8010BA2C
  W8(c->r[7]+0x00000009u,c->r[0]); // 8010BA30
  c->r[0]=R8(c->r[6]+c->r[31]); // 8010BA34
  c->r[31]=addc(c,~c->r[30],0x0000000Fu,1); // 8010BA38
  W8(c->r[7]+0x0000000Au,c->r[0]); // 8010BA3C
  c->r[0]=R8(c->r[6]+c->r[11]); // 8010BA40
  c->r[11]=addc(c,~c->r[12],0x0000000Fu,1); // 8010BA44
  W8(c->r[7]+0x0000000Bu,c->r[0]); // 8010BA48
  c->r[0]=R8(c->r[6]+c->r[9]); // 8010BA4C
  c->r[9]=addc(c,~c->r[10],0x0000000Fu,1); // 8010BA50
  W8(c->r[7]+0x0000000Cu,c->r[0]); // 8010BA54
  c->r[0]=R8(c->r[6]+c->r[4]); // 8010BA58
  c->r[4]=addc(c,~c->r[8],0x0000000Fu,1); // 8010BA5C
  W8(c->r[7]+0x0000000Du,c->r[0]); // 8010BA60
  c->r[0]=R8(c->r[6]+c->r[23]); // 8010BA64
  W8(c->r[7]+0x0000000Eu,c->r[0]); // 8010BA68
  c->r[0]=R8(c->r[6]+c->r[25]); // 8010BA6C
  W8(c->r[7]+0x0000000Fu,c->r[0]); // 8010BA70
  c->r[0]=R8(c->r[6]+c->r[27]); // 8010BA74
  W8(c->r[7]+0x00000010u,c->r[0]); // 8010BA78
  c->r[0]=R8(c->r[6]+c->r[29]); // 8010BA7C
  W8(c->r[7]+0x00000011u,c->r[0]); // 8010BA80
  c->r[0]=R8(c->r[6]+c->r[31]); // 8010BA84
  W8(c->r[7]+0x00000012u,c->r[0]); // 8010BA88
  c->r[0]=R8(c->r[6]+c->r[11]); // 8010BA8C
  W8(c->r[7]+0x00000013u,c->r[0]); // 8010BA90
  c->r[0]=R8(c->r[6]+c->r[9]); // 8010BA94
  W8(c->r[7]+0x00000014u,c->r[0]); // 8010BA98
  c->r[0]=R8(c->r[6]+c->r[4]); // 8010BA9C
  c->r[6]=c->r[6]+0x00000010u; // 8010BAA0
  W8(c->r[7]+0x00000015u,c->r[0]); // 8010BAA4
  c->r[7]=c->r[7]+0x00000016u; // 8010BAA8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010B970; } // 8010BAAC
L_8010BAB0:;
  c->lr=0x8010BAB4u; f_801081E8(c); // 8010BAB0
  c->r[11]=c->r[1]+0x00000030u; // 8010BAB4
  c->lr=0x8010BABCu; { c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010BAB8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010BABC
  c->lr=c->r[0]; // 8010BAC0
  c->r[1]=c->r[1]+0x00000030u; // 8010BAC4
  return; // 8010BAC8
}

// btsnd_hcic_delete_stored_key
void f_8010BACC(Ctx* __restrict c) {
  trace_call(0x8010BACCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BACC
  c->r[0]=c->lr; // 8010BAD0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BAD4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BAD8
  c->r[31]=c->r[4]|c->r[4]; // 8010BADC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BAE0
  c->r[30]=c->r[3]|c->r[3]; // 8010BAE4
  c->r[3]=0u+0x00000002u; // 8010BAE8
  c->lr=0x8010BAF0u; f_800F46D0(c); // 8010BAEC
  cmps(c,0,(int32_t)c->r[3],0); // 8010BAF0
  if (!crb(c,2)) { goto L_8010BB00; } // 8010BAF4
  c->r[3]=0u+0x00000000u; // 8010BAF8
  goto L_8010BB64; // 8010BAFC
L_8010BB00:;
  c->r[0]=0u+0x0000000Au; // 8010BB00
  c->r[6]=0u+0x00000000u; // 8010BB04
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010BB08
  c->r[5]=0u+0x00000012u; // 8010BB0C
  c->r[4]=0u+0x0000000Cu; // 8010BB10
  c->r[0]=0u+0x00000007u; // 8010BB14
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010BB18
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010BB1C
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010BB20
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010BB24
  c->r[0]=R8(c->r[30]+0x00000005u); // 8010BB28
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010BB2C
  c->r[0]=R8(c->r[30]+0x00000004u); // 8010BB30
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010BB34
  c->r[0]=R8(c->r[30]+0x00000003u); // 8010BB38
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010BB3C
  c->r[0]=R8(c->r[30]+0x00000002u); // 8010BB40
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010BB44
  c->r[0]=R8(c->r[30]+0x00000001u); // 8010BB48
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010BB4C
  c->r[0]=R8(c->r[30]+0x00000000u); // 8010BB50
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010BB54
  W8(c->r[3]+0x00000011u,c->r[31]); // 8010BB58
  c->lr=0x8010BB60u; f_801081E8(c); // 8010BB5C
  c->r[3]=0u+0x00000001u; // 8010BB60
L_8010BB64:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BB64
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BB68
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010BB6C
  c->lr=c->r[0]; // 8010BB70
  c->r[1]=c->r[1]+0x00000010u; // 8010BB74
  return; // 8010BB78
}

// btsnd_hcic_change_name
void f_8010BB7C(Ctx* __restrict c) {
  trace_call(0x8010BB7Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BB7C
  c->r[0]=c->lr; // 8010BB80
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BB84
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BB88
  c->r[31]=c->r[3]|c->r[3]; // 8010BB8C
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BB90
  c->r[30]=c->r[4]|c->r[4]; // 8010BB94
  c->r[3]=c->r[30]|c->r[30]; // 8010BB98
  c->lr=0x8010BBA0u; f_800ACEA0(c); // 8010BB9C
  c->r[0]=c->r[3]+0x00000001u; // 8010BBA0
  c->r[6]=0u+0x000000FBu; // 8010BBA4
  c->r[7]=rotl(c->r[0],0)&0x0000FFFFu; // 8010BBA8
  c->r[5]=0u+0x00000000u; // 8010BBAC
  c->r[4]=0u+0x00000013u; // 8010BBB0
  c->r[3]=0u+0x0000000Cu; // 8010BBB4
  c->r[0]=0u+0x000000F8u; // 8010BBB8
  W16(c->r[31]+0x00000002u,c->r[6]); // 8010BBBC
  cmps(c,1,(int32_t)c->r[7],0); // 8010BBC0
  c->r[6]=c->r[31]+0x0000000Bu; // 8010BBC4
  W16(c->r[31]+0x00000004u,c->r[5]); // 8010BBC8
  c->r[8]=0u+0x00000000u; // 8010BBCC
  W8(c->r[31]+0x00000008u,c->r[4]); // 8010BBD0
  W8(c->r[31]+0x00000009u,c->r[3]); // 8010BBD4
  W8(c->r[31]+0x0000000Au,c->r[0]); // 8010BBD8
  if (!crb(c,5)) { goto L_8010BC9C; } // 8010BBDC
  cmps(c,0,(int32_t)c->r[7],8); // 8010BBE0
  c->r[4]=c->r[7]+0xFFFFFFF8u; // 8010BBE4
  if (!crb(c,1)) { goto L_8010BC74; } // 8010BBE8
  c->r[5]=0u+0x00000000u; // 8010BBEC
  if (crb(c,4)) { goto L_8010BC08; } // 8010BBF0
  c->r[3]=0u+0x80000000u; // 8010BBF4
  c->r[0]=c->r[3]+0xFFFFFFFEu; // 8010BBF8
  cmps(c,0,(int32_t)c->r[7],(int32_t)c->r[0]); // 8010BBFC
  if (crb(c,1)) { goto L_8010BC08; } // 8010BC00
  c->r[5]=0u+0x00000001u; // 8010BC04
L_8010BC08:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010BC08
  if (crb(c,2)) { goto L_8010BC74; } // 8010BC0C
  c->r[0]=c->r[4]+0x00000007u; // 8010BC10
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8010BC14
  c->ctr=c->r[0]; // 8010BC18
  cmps(c,0,(int32_t)c->r[4],0); // 8010BC1C
  if (!crb(c,1)) { goto L_8010BC74; } // 8010BC20
L_8010BC24:;
  c->r[0]=R8(c->r[30]+c->r[8]); // 8010BC24
  c->r[3]=c->r[30]+c->r[8]; // 8010BC28
  c->r[8]=c->r[8]+0x00000008u; // 8010BC2C
  W8(c->r[6]+0x00000000u,c->r[0]); // 8010BC30
  c->r[0]=R8(c->r[3]+0x00000001u); // 8010BC34
  W8(c->r[6]+0x00000001u,c->r[0]); // 8010BC38
  c->r[0]=R8(c->r[3]+0x00000002u); // 8010BC3C
  W8(c->r[6]+0x00000002u,c->r[0]); // 8010BC40
  c->r[0]=R8(c->r[3]+0x00000003u); // 8010BC44
  W8(c->r[6]+0x00000003u,c->r[0]); // 8010BC48
  c->r[0]=R8(c->r[3]+0x00000004u); // 8010BC4C
  W8(c->r[6]+0x00000004u,c->r[0]); // 8010BC50
  c->r[0]=R8(c->r[3]+0x00000005u); // 8010BC54
  W8(c->r[6]+0x00000005u,c->r[0]); // 8010BC58
  c->r[0]=R8(c->r[3]+0x00000006u); // 8010BC5C
  W8(c->r[6]+0x00000006u,c->r[0]); // 8010BC60
  c->r[0]=R8(c->r[3]+0x00000007u); // 8010BC64
  W8(c->r[6]+0x00000007u,c->r[0]); // 8010BC68
  c->r[6]=c->r[6]+0x00000008u; // 8010BC6C
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010BC24; } // 8010BC70
L_8010BC74:;
  c->r[0]=c->r[7]-c->r[8]; // 8010BC74
  c->r[3]=c->r[30]+c->r[8]; // 8010BC78
  c->ctr=c->r[0]; // 8010BC7C
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[7]); // 8010BC80
  if (!crb(c,0)) { goto L_8010BC9C; } // 8010BC84
L_8010BC88:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8010BC88
  c->r[3]=c->r[3]+0x00000001u; // 8010BC8C
  W8(c->r[6]+0x00000000u,c->r[0]); // 8010BC90
  c->r[6]=c->r[6]+0x00000001u; // 8010BC94
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010BC88; } // 8010BC98
L_8010BC9C:;
  c->r[3]=c->r[31]|c->r[31]; // 8010BC9C
  c->lr=0x8010BCA4u; f_801081E8(c); // 8010BCA0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BCA4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BCA8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010BCAC
  c->lr=c->r[0]; // 8010BCB0
  c->r[1]=c->r[1]+0x00000010u; // 8010BCB4
  return; // 8010BCB8
}

// btsnd_hcic_write_page_tout
void f_8010BCBC(Ctx* __restrict c) {
  trace_call(0x8010BCBCu);
  c->r[0]=rotl(c->r[4],24)&0x000000FFu; // 8010BCBC
  c->r[9]=0u+0x00000005u; // 8010BCC0
  c->r[8]=0u+0x00000000u; // 8010BCC4
  c->r[7]=0u+0x00000018u; // 8010BCC8
  c->r[6]=0u+0x0000000Cu; // 8010BCCC
  c->r[5]=0u+0x00000002u; // 8010BCD0
  W16(c->r[3]+0x00000002u,c->r[9]); // 8010BCD4
  W16(c->r[3]+0x00000004u,c->r[8]); // 8010BCD8
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010BCDC
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010BCE0
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010BCE4
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010BCE8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010BCEC
  f_801081E8(c); return; // 8010BCF0
}

// btsnd_hcic_write_scan_enable
void f_8010BCF4(Ctx* __restrict c) {
  trace_call(0x8010BCF4u);
  c->r[8]=0u+0x00000004u; // 8010BCF4
  c->r[7]=0u+0x00000000u; // 8010BCF8
  c->r[6]=0u+0x0000001Au; // 8010BCFC
  c->r[5]=0u+0x0000000Cu; // 8010BD00
  c->r[0]=0u+0x00000001u; // 8010BD04
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010BD08
  W16(c->r[3]+0x00000004u,c->r[7]); // 8010BD0C
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010BD10
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010BD14
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010BD18
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010BD1C
  f_801081E8(c); return; // 8010BD20
}

// btsnd_hcic_write_pagescan_cfg
void f_8010BD24(Ctx* __restrict c) {
  trace_call(0x8010BD24u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 8010BD24
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 8010BD28
  c->r[11]=0u+0x00000007u; // 8010BD2C
  c->r[10]=0u+0x00000000u; // 8010BD30
  c->r[9]=0u+0x0000001Cu; // 8010BD34
  c->r[8]=0u+0x0000000Cu; // 8010BD38
  c->r[7]=0u+0x00000004u; // 8010BD3C
  W16(c->r[3]+0x00000002u,c->r[11]); // 8010BD40
  W16(c->r[3]+0x00000004u,c->r[10]); // 8010BD44
  W8(c->r[3]+0x00000008u,c->r[9]); // 8010BD48
  W8(c->r[3]+0x00000009u,c->r[8]); // 8010BD4C
  W8(c->r[3]+0x0000000Au,c->r[7]); // 8010BD50
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010BD54
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 8010BD58
  W8(c->r[3]+0x0000000Du,c->r[5]); // 8010BD5C
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010BD60
  f_801081E8(c); return; // 8010BD64
}

// btsnd_hcic_write_inqscan_cfg
void f_8010BD68(Ctx* __restrict c) {
  trace_call(0x8010BD68u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 8010BD68
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 8010BD6C
  c->r[11]=0u+0x00000007u; // 8010BD70
  c->r[10]=0u+0x00000000u; // 8010BD74
  c->r[9]=0u+0x0000001Eu; // 8010BD78
  c->r[8]=0u+0x0000000Cu; // 8010BD7C
  c->r[7]=0u+0x00000004u; // 8010BD80
  W16(c->r[3]+0x00000002u,c->r[11]); // 8010BD84
  W16(c->r[3]+0x00000004u,c->r[10]); // 8010BD88
  W8(c->r[3]+0x00000008u,c->r[9]); // 8010BD8C
  W8(c->r[3]+0x00000009u,c->r[8]); // 8010BD90
  W8(c->r[3]+0x0000000Au,c->r[7]); // 8010BD94
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010BD98
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 8010BD9C
  W8(c->r[3]+0x0000000Du,c->r[5]); // 8010BDA0
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010BDA4
  f_801081E8(c); return; // 8010BDA8
}

// btsnd_hcic_write_auth_enable
void f_8010BDAC(Ctx* __restrict c) {
  trace_call(0x8010BDACu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BDAC
  c->r[0]=c->lr; // 8010BDB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BDB8
  c->r[31]=c->r[3]|c->r[3]; // 8010BDBC
  c->r[3]=0u+0x00000002u; // 8010BDC0
  c->lr=0x8010BDC8u; f_800F46D0(c); // 8010BDC4
  cmps(c,0,(int32_t)c->r[3],0); // 8010BDC8
  if (!crb(c,2)) { goto L_8010BDD8; } // 8010BDCC
  c->r[3]=0u+0x00000000u; // 8010BDD0
  goto L_8010BE0C; // 8010BDD4
L_8010BDD8:;
  c->r[0]=0u+0x00000004u; // 8010BDD8
  c->r[6]=0u+0x00000000u; // 8010BDDC
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010BDE0
  c->r[5]=0u+0x00000020u; // 8010BDE4
  c->r[4]=0u+0x0000000Cu; // 8010BDE8
  c->r[0]=0u+0x00000001u; // 8010BDEC
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010BDF0
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010BDF4
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010BDF8
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010BDFC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010BE00
  c->lr=0x8010BE08u; f_801081E8(c); // 8010BE04
  c->r[3]=0u+0x00000001u; // 8010BE08
L_8010BE0C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BE0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BE10
  c->lr=c->r[0]; // 8010BE14
  c->r[1]=c->r[1]+0x00000010u; // 8010BE18
  return; // 8010BE1C
}

// btsnd_hcic_write_encr_mode
void f_8010BE20(Ctx* __restrict c) {
  trace_call(0x8010BE20u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BE20
  c->r[0]=c->lr; // 8010BE24
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BE28
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BE2C
  c->r[31]=c->r[3]|c->r[3]; // 8010BE30
  c->r[3]=0u+0x00000002u; // 8010BE34
  c->lr=0x8010BE3Cu; f_800F46D0(c); // 8010BE38
  cmps(c,0,(int32_t)c->r[3],0); // 8010BE3C
  if (!crb(c,2)) { goto L_8010BE4C; } // 8010BE40
  c->r[3]=0u+0x00000000u; // 8010BE44
  goto L_8010BE80; // 8010BE48
L_8010BE4C:;
  c->r[0]=0u+0x00000004u; // 8010BE4C
  c->r[6]=0u+0x00000000u; // 8010BE50
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010BE54
  c->r[5]=0u+0x00000022u; // 8010BE58
  c->r[4]=0u+0x0000000Cu; // 8010BE5C
  c->r[0]=0u+0x00000001u; // 8010BE60
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010BE64
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010BE68
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010BE6C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010BE70
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010BE74
  c->lr=0x8010BE7Cu; f_801081E8(c); // 8010BE78
  c->r[3]=0u+0x00000001u; // 8010BE7C
L_8010BE80:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010BE80
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010BE84
  c->lr=c->r[0]; // 8010BE88
  c->r[1]=c->r[1]+0x00000010u; // 8010BE8C
  return; // 8010BE90
}

// btsnd_hcic_write_dev_class
void f_8010BE94(Ctx* __restrict c) {
  trace_call(0x8010BE94u);
  c->r[8]=0u+0x00000006u; // 8010BE94
  c->r[7]=0u+0x00000000u; // 8010BE98
  c->r[6]=0u+0x00000024u; // 8010BE9C
  c->r[5]=0u+0x0000000Cu; // 8010BEA0
  c->r[0]=0u+0x00000003u; // 8010BEA4
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010BEA8
  W16(c->r[3]+0x00000004u,c->r[7]); // 8010BEAC
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010BEB0
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010BEB4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010BEB8
  c->r[0]=R8(c->r[4]+0x00000002u); // 8010BEBC
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010BEC0
  c->r[0]=R8(c->r[4]+0x00000001u); // 8010BEC4
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010BEC8
  c->r[0]=R8(c->r[4]+0x00000000u); // 8010BECC
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010BED0
  f_801081E8(c); return; // 8010BED4
}

// btsnd_hcic_write_auto_flush_tout
void f_8010BED8(Ctx* __restrict c) {
  trace_call(0x8010BED8u);
  c->r[6]=rotl(c->r[4],24)&0x000000FFu; // 8010BED8
  c->r[0]=rotl(c->r[5],24)&0x000000FFu; // 8010BEDC
  c->r[11]=0u+0x00000007u; // 8010BEE0
  c->r[10]=0u+0x00000000u; // 8010BEE4
  c->r[9]=0u+0x00000028u; // 8010BEE8
  c->r[8]=0u+0x0000000Cu; // 8010BEEC
  c->r[7]=0u+0x00000004u; // 8010BEF0
  W16(c->r[3]+0x00000002u,c->r[11]); // 8010BEF4
  W16(c->r[3]+0x00000004u,c->r[10]); // 8010BEF8
  W8(c->r[3]+0x00000008u,c->r[9]); // 8010BEFC
  W8(c->r[3]+0x00000009u,c->r[8]); // 8010BF00
  W8(c->r[3]+0x0000000Au,c->r[7]); // 8010BF04
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010BF08
  W8(c->r[3]+0x0000000Cu,c->r[6]); // 8010BF0C
  W8(c->r[3]+0x0000000Du,c->r[5]); // 8010BF10
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010BF14
  f_801081E8(c); return; // 8010BF18
}

// btsnd_hcic_set_host_buf_size
void f_8010BF1C(Ctx* __restrict c) {
  trace_call(0x8010BF1Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BF1C
  c->r[0]=c->lr; // 8010BF20
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010BF24
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010BF28
  c->r[31]=c->r[6]|c->r[6]; // 8010BF2C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010BF30
  c->r[30]=c->r[5]|c->r[5]; // 8010BF34
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010BF38
  c->r[29]=c->r[4]|c->r[4]; // 8010BF3C
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010BF40
  c->r[28]=c->r[3]|c->r[3]; // 8010BF44
  c->r[3]=0u+0x00000002u; // 8010BF48
  c->lr=0x8010BF50u; f_800F46D0(c); // 8010BF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8010BF50
  if (!crb(c,2)) { goto L_8010BF60; } // 8010BF54
  c->r[3]=0u+0x00000000u; // 8010BF58
  goto L_8010BFB8; // 8010BF5C
L_8010BF60:;
  c->r[0]=0u+0x0000000Au; // 8010BF60
  c->r[5]=sraw(c,c->r[28],8); // 8010BF64
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010BF68
  c->r[0]=0u+0x00000000u; // 8010BF6C
  c->r[8]=0u+0x00000033u; // 8010BF70
  c->r[7]=0u+0x0000000Cu; // 8010BF74
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010BF78
  c->r[6]=0u+0x00000007u; // 8010BF7C
  c->r[4]=sraw(c,c->r[30],8); // 8010BF80
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010BF84
  W8(c->r[3]+0x00000008u,c->r[8]); // 8010BF88
  W8(c->r[3]+0x00000009u,c->r[7]); // 8010BF8C
  W8(c->r[3]+0x0000000Au,c->r[6]); // 8010BF90
  W8(c->r[3]+0x0000000Bu,c->r[28]); // 8010BF94
  W8(c->r[3]+0x0000000Cu,c->r[5]); // 8010BF98
  W8(c->r[3]+0x0000000Du,c->r[29]); // 8010BF9C
  W8(c->r[3]+0x0000000Eu,c->r[30]); // 8010BFA0
  W8(c->r[3]+0x0000000Fu,c->r[4]); // 8010BFA4
  W8(c->r[3]+0x00000010u,c->r[31]); // 8010BFA8
  W8(c->r[3]+0x00000011u,c->r[0]); // 8010BFAC
  c->lr=0x8010BFB4u; f_801081E8(c); // 8010BFB0
  c->r[3]=0u+0x00000001u; // 8010BFB4
L_8010BFB8:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010BFB8
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010BFBC
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010BFC0
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010BFC4
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010BFC8
  c->lr=c->r[0]; // 8010BFCC
  c->r[1]=c->r[1]+0x00000020u; // 8010BFD0
  return; // 8010BFD4
}

// btsnd_hcic_write_link_super_tout
void f_8010BFD8(Ctx* __restrict c) {
  trace_call(0x8010BFD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010BFD8
  c->r[0]=c->lr; // 8010BFDC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010BFE0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010BFE4
  c->r[31]=c->r[4]|c->r[4]; // 8010BFE8
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010BFEC
  c->r[30]=c->r[3]|c->r[3]; // 8010BFF0
  c->r[3]=0u+0x00000002u; // 8010BFF4
  c->lr=0x8010BFFCu; f_800F46D0(c); // 8010BFF8
  cmps(c,0,(int32_t)c->r[3],0); // 8010BFFC
  if (!crb(c,2)) { goto L_8010C00C; } // 8010C000
  c->r[3]=0u+0x00000000u; // 8010C004
  goto L_8010C054; // 8010C008
L_8010C00C:;
  c->r[4]=0u+0x00000007u; // 8010C00C
  c->r[0]=0u+0x00000000u; // 8010C010
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010C014
  c->r[7]=0u+0x00000037u; // 8010C018
  c->r[6]=0u+0x0000000Cu; // 8010C01C
  c->r[5]=0u+0x00000004u; // 8010C020
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010C024
  c->r[4]=sraw(c,c->r[30],8); // 8010C028
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010C02C
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010C030
  W8(c->r[3]+0x00000009u,c->r[6]); // 8010C034
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010C038
  W8(c->r[3]+0x0000000Bu,c->r[30]); // 8010C03C
  W8(c->r[3]+0x0000000Cu,c->r[4]); // 8010C040
  W8(c->r[3]+0x0000000Du,c->r[31]); // 8010C044
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010C048
  c->lr=0x8010C050u; f_801081E8(c); // 8010C04C
  c->r[3]=0u+0x00000001u; // 8010C050
L_8010C054:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C054
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C058
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010C05C
  c->lr=c->r[0]; // 8010C060
  c->r[1]=c->r[1]+0x00000010u; // 8010C064
  return; // 8010C068
}

// btsnd_hcic_write_cur_iac_lap
void f_8010C06C(Ctx* __restrict c) {
  trace_call(0x8010C06Cu);
  c->r[0]=rotl(c->r[4],2)&0x000003FCu; // 8010C06C
  c->r[9]=0u+0x00000000u; // 8010C070
  c->r[6]=c->r[0]-c->r[4]; // 8010C074
  c->r[8]=0u+0x0000003Au; // 8010C078
  c->r[10]=c->r[6]+0x00000004u; // 8010C07C
  c->r[7]=0u+0x0000000Cu; // 8010C080
  c->r[6]=rotl(c->r[10],0)&0x0000FFFFu; // 8010C084
  W16(c->r[3]+0x00000002u,c->r[10]); // 8010C088
  c->r[0]=c->r[6]+0xFFFFFFFDu; // 8010C08C
  c->r[6]=c->r[3]+0x0000000Cu; // 8010C090
  W16(c->r[3]+0x00000004u,c->r[9]); // 8010C094
  W8(c->r[3]+0x00000008u,c->r[8]); // 8010C098
  W8(c->r[3]+0x00000009u,c->r[7]); // 8010C09C
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010C0A0
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010C0A4
  c->ctr=c->r[4]; // 8010C0A8
  cmps(c,0,(int32_t)c->r[4],0); // 8010C0AC
  if (!crb(c,1)) { goto L_8010C0D8; } // 8010C0B0
L_8010C0B4:;
  c->r[0]=R8(c->r[5]+0x00000002u); // 8010C0B4
  W8(c->r[6]+0x00000000u,c->r[0]); // 8010C0B8
  c->r[0]=R8(c->r[5]+0x00000001u); // 8010C0BC
  W8(c->r[6]+0x00000001u,c->r[0]); // 8010C0C0
  c->r[0]=R8(c->r[5]+0x00000000u); // 8010C0C4
  c->r[5]=c->r[5]+0x00000003u; // 8010C0C8
  W8(c->r[6]+0x00000002u,c->r[0]); // 8010C0CC
  c->r[6]=c->r[6]+0x00000003u; // 8010C0D0
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010C0B4; } // 8010C0D4
L_8010C0D8:;
  f_801081E8(c); return; // 8010C0D8
}

// btsnd_hcic_read_local_ver
void f_8010C0DC(Ctx* __restrict c) {
  trace_call(0x8010C0DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C0DC
  c->r[0]=c->lr; // 8010C0E0
  c->r[3]=0u+0x00000002u; // 8010C0E4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C0E8
  c->lr=0x8010C0F0u; f_800F46D0(c); // 8010C0EC
  cmps(c,0,(int32_t)c->r[3],0); // 8010C0F0
  if (!crb(c,2)) { goto L_8010C100; } // 8010C0F4
  c->r[3]=0u+0x00000000u; // 8010C0F8
  goto L_8010C12C; // 8010C0FC
L_8010C100:;
  c->r[0]=0u+0x00000003u; // 8010C100
  c->r[5]=0u+0x00000000u; // 8010C104
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010C108
  c->r[4]=0u+0x00000001u; // 8010C10C
  c->r[0]=0u+0x00000010u; // 8010C110
  W16(c->r[3]+0x00000004u,c->r[5]); // 8010C114
  W8(c->r[3]+0x00000008u,c->r[4]); // 8010C118
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010C11C
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010C120
  c->lr=0x8010C128u; f_801081E8(c); // 8010C124
  c->r[3]=0u+0x00000001u; // 8010C128
L_8010C12C:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C12C
  c->lr=c->r[0]; // 8010C130
  c->r[1]=c->r[1]+0x00000010u; // 8010C134
  return; // 8010C138
}

// btsnd_hcic_read_local_features
void f_8010C13C(Ctx* __restrict c) {
  trace_call(0x8010C13Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C13C
  c->r[0]=c->lr; // 8010C140
  c->r[3]=0u+0x00000002u; // 8010C144
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C148
  c->lr=0x8010C150u; f_800F46D0(c); // 8010C14C
  cmps(c,0,(int32_t)c->r[3],0); // 8010C150
  if (!crb(c,2)) { goto L_8010C160; } // 8010C154
  c->r[3]=0u+0x00000000u; // 8010C158
  goto L_8010C188; // 8010C15C
L_8010C160:;
  c->r[5]=0u+0x00000003u; // 8010C160
  c->r[4]=0u+0x00000000u; // 8010C164
  W16(c->r[3]+0x00000002u,c->r[5]); // 8010C168
  c->r[0]=0u+0x00000010u; // 8010C16C
  W16(c->r[3]+0x00000004u,c->r[4]); // 8010C170
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010C174
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010C178
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010C17C
  c->lr=0x8010C184u; f_801081E8(c); // 8010C180
  c->r[3]=0u+0x00000001u; // 8010C184
L_8010C188:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C188
  c->lr=c->r[0]; // 8010C18C
  c->r[1]=c->r[1]+0x00000010u; // 8010C190
  return; // 8010C194
}

// btsnd_hcic_read_buffer_size
void f_8010C198(Ctx* __restrict c) {
  trace_call(0x8010C198u);
  c->r[5]=0u+0x00000000u; // 8010C198
  c->r[6]=0u+0x00000003u; // 8010C19C
  c->r[4]=0u+0x00000005u; // 8010C1A0
  c->r[0]=0u+0x00000010u; // 8010C1A4
  W16(c->r[3]+0x00000002u,c->r[6]); // 8010C1A8
  W16(c->r[3]+0x00000004u,c->r[5]); // 8010C1AC
  W8(c->r[3]+0x00000008u,c->r[4]); // 8010C1B0
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010C1B4
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010C1B8
  f_801081E8(c); return; // 8010C1BC
}

// btsnd_hcic_read_bd_addr
void f_8010C1C0(Ctx* __restrict c) {
  trace_call(0x8010C1C0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C1C0
  c->r[0]=c->lr; // 8010C1C4
  c->r[3]=0u+0x00000002u; // 8010C1C8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C1CC
  c->lr=0x8010C1D4u; f_800F46D0(c); // 8010C1D0
  cmps(c,0,(int32_t)c->r[3],0); // 8010C1D4
  if (!crb(c,2)) { goto L_8010C1E4; } // 8010C1D8
  c->r[3]=0u+0x00000000u; // 8010C1DC
  goto L_8010C210; // 8010C1E0
L_8010C1E4:;
  c->r[0]=0u+0x00000003u; // 8010C1E4
  c->r[5]=0u+0x00000000u; // 8010C1E8
  W16(c->r[3]+0x00000002u,c->r[0]); // 8010C1EC
  c->r[4]=0u+0x00000009u; // 8010C1F0
  c->r[0]=0u+0x00000010u; // 8010C1F4
  W16(c->r[3]+0x00000004u,c->r[5]); // 8010C1F8
  W8(c->r[3]+0x00000008u,c->r[4]); // 8010C1FC
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010C200
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010C204
  c->lr=0x8010C20Cu; f_801081E8(c); // 8010C208
  c->r[3]=0u+0x00000001u; // 8010C20C
L_8010C210:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C210
  c->lr=c->r[0]; // 8010C214
  c->r[1]=c->r[1]+0x00000010u; // 8010C218
  return; // 8010C21C
}

// btsnd_hcic_get_link_quality
void f_8010C220(Ctx* __restrict c) {
  trace_call(0x8010C220u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C220
  c->r[0]=c->lr; // 8010C224
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C228
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C22C
  c->r[31]=c->r[3]|c->r[3]; // 8010C230
  c->r[3]=0u+0x00000002u; // 8010C234
  c->lr=0x8010C23Cu; f_800F46D0(c); // 8010C238
  cmps(c,0,(int32_t)c->r[3],0); // 8010C23C
  if (!crb(c,2)) { goto L_8010C24C; } // 8010C240
  c->r[3]=0u+0x00000000u; // 8010C244
  goto L_8010C288; // 8010C248
L_8010C24C:;
  c->r[4]=0u+0x00000005u; // 8010C24C
  c->r[0]=0u+0x00000000u; // 8010C250
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010C254
  c->r[6]=0u+0x00000003u; // 8010C258
  c->r[5]=0u+0x00000014u; // 8010C25C
  c->r[4]=0u+0x00000002u; // 8010C260
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010C264
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010C268
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010C26C
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010C270
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010C274
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010C278
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010C27C
  c->lr=0x8010C284u; f_801081E8(c); // 8010C280
  c->r[3]=0u+0x00000001u; // 8010C284
L_8010C288:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C288
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C28C
  c->lr=c->r[0]; // 8010C290
  c->r[1]=c->r[1]+0x00000010u; // 8010C294
  return; // 8010C298
}

// btsnd_hcic_read_rssi
void f_8010C29C(Ctx* __restrict c) {
  trace_call(0x8010C29Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C29C
  c->r[0]=c->lr; // 8010C2A0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C2A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C2A8
  c->r[31]=c->r[3]|c->r[3]; // 8010C2AC
  c->r[3]=0u+0x00000002u; // 8010C2B0
  c->lr=0x8010C2B8u; f_800F46D0(c); // 8010C2B4
  cmps(c,0,(int32_t)c->r[3],0); // 8010C2B8
  if (!crb(c,2)) { goto L_8010C2C8; } // 8010C2BC
  c->r[3]=0u+0x00000000u; // 8010C2C0
  goto L_8010C300; // 8010C2C4
L_8010C2C8:;
  c->r[7]=0u+0x00000005u; // 8010C2C8
  c->r[6]=0u+0x00000000u; // 8010C2CC
  W16(c->r[3]+0x00000002u,c->r[7]); // 8010C2D0
  c->r[5]=0u+0x00000014u; // 8010C2D4
  c->r[4]=0u+0x00000002u; // 8010C2D8
  c->r[0]=rotl(c->r[31],24)&0x000000FFu; // 8010C2DC
  W16(c->r[3]+0x00000004u,c->r[6]); // 8010C2E0
  W8(c->r[3]+0x00000008u,c->r[7]); // 8010C2E4
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010C2E8
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010C2EC
  W8(c->r[3]+0x0000000Bu,c->r[31]); // 8010C2F0
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010C2F4
  c->lr=0x8010C2FCu; f_801081E8(c); // 8010C2F8
  c->r[3]=0u+0x00000001u; // 8010C2FC
L_8010C300:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C300
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C304
  c->lr=c->r[0]; // 8010C308
  c->r[1]=c->r[1]+0x00000010u; // 8010C30C
  return; // 8010C310
}

// btsnd_hcic_set_afh_channels
void f_8010C314(Ctx* __restrict c) {
  trace_call(0x8010C314u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C314
  c->r[0]=c->lr; // 8010C318
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010C31C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010C320
  c->r[31]=c->r[4]|c->r[4]; // 8010C324
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010C328
  c->r[30]=c->r[3]|c->r[3]; // 8010C32C
  c->r[3]=0u+0x00000002u; // 8010C330
  W32(c->r[1]+0x00000024u,c->r[29]); // 8010C334
  c->r[29]=0u+0x802D0000u; // 8010C338
  {uint32_t ea=c->r[29]+0xFFFF9B28u; c->r[12]=R8(ea); c->r[29]=ea;} // 8010C33C
  c->r[11]=R8(c->r[29]+0x00000001u); // 8010C340
  c->r[10]=R8(c->r[29]+0x00000002u); // 8010C344
  c->r[9]=R8(c->r[29]+0x00000003u); // 8010C348
  c->r[8]=R8(c->r[29]+0x00000004u); // 8010C34C
  c->r[7]=R8(c->r[29]+0x00000005u); // 8010C350
  c->r[6]=R8(c->r[29]+0x00000006u); // 8010C354
  c->r[5]=R8(c->r[29]+0x00000007u); // 8010C358
  c->r[4]=R8(c->r[29]+0x00000008u); // 8010C35C
  c->r[0]=R8(c->r[29]+0x00000009u); // 8010C360
  W8(c->r[1]+0x00000008u,c->r[12]); // 8010C364
  W8(c->r[1]+0x00000009u,c->r[11]); // 8010C368
  W8(c->r[1]+0x0000000Au,c->r[10]); // 8010C36C
  W8(c->r[1]+0x0000000Bu,c->r[9]); // 8010C370
  W8(c->r[1]+0x0000000Cu,c->r[8]); // 8010C374
  W8(c->r[1]+0x0000000Du,c->r[7]); // 8010C378
  W8(c->r[1]+0x0000000Eu,c->r[6]); // 8010C37C
  W8(c->r[1]+0x0000000Fu,c->r[5]); // 8010C380
  W8(c->r[1]+0x00000010u,c->r[4]); // 8010C384
  W8(c->r[1]+0x00000011u,c->r[0]); // 8010C388
  c->lr=0x8010C390u; f_800F46D0(c); // 8010C38C
  cmps(c,0,(int32_t)c->r[3],0); // 8010C390
  if (!crb(c,2)) { goto L_8010C3A0; } // 8010C394
  c->r[3]=0u+0x00000000u; // 8010C398
  goto L_8010C718; // 8010C39C
L_8010C3A0:;
  c->r[4]=0u+0x0000000Du; // 8010C3A0
  c->r[0]=0u+0x00000000u; // 8010C3A4
  W16(c->r[3]+0x00000002u,c->r[4]); // 8010C3A8
  c->r[5]=0u+0x0000003Fu; // 8010C3AC
  c->r[4]=0u+0x0000000Cu; // 8010C3B0
  cmpu(c,0,c->r[30],c->r[31]); // 8010C3B4
  W16(c->r[3]+0x00000004u,c->r[0]); // 8010C3B8
  c->r[0]=0u+0x0000000Au; // 8010C3BC
  W8(c->r[3]+0x00000008u,c->r[5]); // 8010C3C0
  W8(c->r[3]+0x00000009u,c->r[4]); // 8010C3C4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010C3C8
  if (crb(c,1)) { goto L_8010C6C0; } // 8010C3CC
  cmpu(c,0,c->r[31],0x0000004Eu); // 8010C3D0
  if (crb(c,1)) { goto L_8010C6C0; } // 8010C3D4
  cmps(c,1,(int32_t)c->r[30],(int32_t)c->r[31]); // 8010C3D8
  if (crb(c,5)) { goto L_8010C6C0; } // 8010C3DC
  c->r[11]=c->r[31]-c->r[30]; // 8010C3E0
  c->r[7]=c->r[31]+0xFFFFFFF8u; // 8010C3E4
  c->r[12]=c->r[11]+0x00000001u; // 8010C3E8
  cmps(c,0,(int32_t)c->r[12],8); // 8010C3EC
  if (!crb(c,1)) { goto L_8010C670; } // 8010C3F0
  c->r[5]=0u+0x00000000u; // 8010C3F4
  c->r[6]=0u+0x00000000u; // 8010C3F8
  c->r[8]=0u+0x00000000u; // 8010C3FC
  c->r[9]=0u+0x00000000u; // 8010C400
  c->r[10]=0u+0x00000000u; // 8010C404
  if (crb(c,5)) { goto L_8010C420; } // 8010C408
  c->r[4]=0u+0x80000000u; // 8010C40C
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 8010C410
  cmps(c,0,(int32_t)c->r[31],(int32_t)c->r[0]); // 8010C414
  if (crb(c,1)) { goto L_8010C420; } // 8010C418
  c->r[10]=0u+0x00000001u; // 8010C41C
L_8010C420:;
  cmps(c,0,(int32_t)c->r[10],0); // 8010C420
  if (crb(c,2)) { goto L_8010C43C; } // 8010C424
  c->r[4]=0u+0x80000000u; // 8010C428
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 8010C42C
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[0]); // 8010C430
  if (crb(c,1)) { goto L_8010C43C; } // 8010C434
  c->r[9]=0u+0x00000001u; // 8010C438
L_8010C43C:;
  cmps(c,0,(int32_t)c->r[9],0); // 8010C43C
  if (crb(c,2)) { goto L_8010C454; } // 8010C440
  c->r[0]=c->r[30]+0x80000000u; // 8010C444
  cmpu(c,0,c->r[0],0x00000000u); // 8010C448
  if (crb(c,2)) { goto L_8010C454; } // 8010C44C
  c->r[8]=0u+0x00000001u; // 8010C450
L_8010C454:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010C454
  if (crb(c,2)) { goto L_8010C490; } // 8010C458
  c->r[0]=0u-c->r[30]; // 8010C45C
  c->r[8]=rotl(c->r[31],0)&0x80000000u; // 8010C460
  c->r[0]=rotl(c->r[0],0)&0x80000000u; // 8010C464
  c->r[4]=0u+0x00000001u; // 8010C468
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8010C46C
  if (!crb(c,2)) { goto L_8010C484; } // 8010C470
  c->r[0]=rotl(c->r[11],0)&0x80000000u; // 8010C474
  cmps(c,0,(int32_t)c->r[8],(int32_t)c->r[0]); // 8010C478
  if (crb(c,2)) { goto L_8010C484; } // 8010C47C
  c->r[4]=0u+0x00000000u; // 8010C480
L_8010C484:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010C484
  if (crb(c,2)) { goto L_8010C490; } // 8010C488
  c->r[6]=0u+0x00000001u; // 8010C48C
L_8010C490:;
  cmps(c,0,(int32_t)c->r[6],0); // 8010C490
  if (crb(c,2)) { goto L_8010C4BC; } // 8010C494
  c->r[0]=rotl(c->r[11],0)&0x80000000u; cr0(c,c->r[0]); // 8010C498
  c->r[4]=0u+0x00000001u; // 8010C49C
  if (!crb(c,2)) { goto L_8010C4B0; } // 8010C4A0
  c->r[0]=rotl(c->r[12],0)&0x80000000u; cr0(c,c->r[0]); // 8010C4A4
  if (crb(c,2)) { goto L_8010C4B0; } // 8010C4A8
  c->r[4]=0u+0x00000000u; // 8010C4AC
L_8010C4B0:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010C4B0
  if (crb(c,2)) { goto L_8010C4BC; } // 8010C4B4
  c->r[5]=0u+0x00000001u; // 8010C4B8
L_8010C4BC:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010C4BC
  if (crb(c,2)) { goto L_8010C670; } // 8010C4C0
  c->r[5]=c->r[7]+0x00000008u; // 8010C4C4
  c->r[0]=sraw(c,c->r[30],3); // 8010C4C8
  c->r[5]=c->r[5]-c->r[30]; // 8010C4CC
  c->r[4]=c->r[1]+0x00000008u; // 8010C4D0
  c->r[6]=addc(c,c->r[0],0,c->xer_ca); // 8010C4D4
  c->r[0]=0u+0x00000001u; // 8010C4D8
  c->r[5]=rotl(c->r[5],29)&0x1FFFFFFFu; // 8010C4DC
  c->r[6]=c->r[4]+c->r[6]; // 8010C4E0
  c->ctr=c->r[5]; // 8010C4E4
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[7]); // 8010C4E8
  if (crb(c,1)) { goto L_8010C670; } // 8010C4EC
L_8010C4F0:;
  c->r[5]=rotl(c->r[30],29)&0xE0000000u; // 8010C4F0
  c->r[8]=rotl(c->r[30],1)&0x00000001u; // 8010C4F4
  c->r[5]=c->r[5]-c->r[8]; // 8010C4F8
  c->r[10]=R8(c->r[6]+0x00000000u); // 8010C4FC
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C500
  c->r[7]=c->r[30]+0x00000001u; // 8010C504
  c->r[5]=c->r[5]+c->r[8]; // 8010C508
  c->r[9]=c->r[30]+0x00000002u; // 8010C50C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8010C510
  c->r[8]=c->r[30]+0x00000003u; // 8010C514
  c->r[11]=c->r[10]&~c->r[5]; // 8010C518
  c->r[10]=rotl(c->r[7],1)&0x00000001u; // 8010C51C
  W8(c->r[6]+0x00000000u,c->r[11]); // 8010C520
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 8010C524
  c->r[11]=sraw(c,c->r[7],3); // 8010C528
  c->r[7]=c->r[30]+0x00000004u; // 8010C52C
  c->r[5]=c->r[5]-c->r[10]; // 8010C530
  c->r[6]=c->r[6]+0x00000001u; // 8010C534
  c->r[29]=addc(c,c->r[11],0,c->xer_ca); // 8010C538
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C53C
  c->r[12]=R8(c->r[4]+c->r[29]); // 8010C540
  c->r[10]=c->r[5]+c->r[10]; // 8010C544
  c->r[11]=((c->r[10])&0x20)?0u:(c->r[0]<<((c->r[10])&31)); // 8010C548
  c->r[5]=rotl(c->r[9],29)&0xE0000000u; // 8010C54C
  c->r[10]=rotl(c->r[9],1)&0x00000001u; // 8010C550
  c->r[9]=sraw(c,c->r[9],3); // 8010C554
  c->r[11]=c->r[12]&~c->r[11]; // 8010C558
  c->r[5]=c->r[5]-c->r[10]; // 8010C55C
  W8(c->r[4]+c->r[29],c->r[11]); // 8010C560
  c->r[29]=addc(c,c->r[9],0,c->xer_ca); // 8010C564
  c->r[9]=c->r[30]+0x00000005u; // 8010C568
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C56C
  c->r[12]=R8(c->r[4]+c->r[29]); // 8010C570
  c->r[5]=c->r[5]+c->r[10]; // 8010C574
  c->r[10]=sraw(c,c->r[8],3); // 8010C578
  c->r[11]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8010C57C
  c->r[12]=c->r[12]&~c->r[11]; // 8010C580
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 8010C584
  c->r[8]=rotl(c->r[8],1)&0x00000001u; // 8010C588
  W8(c->r[4]+c->r[29],c->r[12]); // 8010C58C
  c->r[5]=c->r[5]-c->r[8]; // 8010C590
  c->r[11]=addc(c,c->r[10],0,c->xer_ca); // 8010C594
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C598
  c->r[10]=R8(c->r[4]+c->r[11]); // 8010C59C
  c->r[8]=c->r[5]+c->r[8]; // 8010C5A0
  c->r[5]=sraw(c,c->r[7],3); // 8010C5A4
  c->r[8]=((c->r[8])&0x20)?0u:(c->r[0]<<((c->r[8])&31)); // 8010C5A8
  c->r[10]=c->r[10]&~c->r[8]; // 8010C5AC
  c->r[29]=addc(c,c->r[5],0,c->xer_ca); // 8010C5B0
  W8(c->r[4]+c->r[11],c->r[10]); // 8010C5B4
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 8010C5B8
  c->r[8]=rotl(c->r[7],1)&0x00000001u; // 8010C5BC
  c->r[7]=sraw(c,c->r[9],3); // 8010C5C0
  c->r[5]=c->r[5]-c->r[8]; // 8010C5C4
  c->r[11]=R8(c->r[4]+c->r[29]); // 8010C5C8
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C5CC
  c->r[12]=addc(c,c->r[7],0,c->xer_ca); // 8010C5D0
  c->r[5]=c->r[5]+c->r[8]; // 8010C5D4
  c->r[8]=c->r[30]+0x00000006u; // 8010C5D8
  c->r[10]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8010C5DC
  c->r[5]=rotl(c->r[9],29)&0xE0000000u; // 8010C5E0
  c->r[9]=rotl(c->r[9],1)&0x00000001u; // 8010C5E4
  c->r[10]=c->r[11]&~c->r[10]; // 8010C5E8
  W8(c->r[4]+c->r[29],c->r[10]); // 8010C5EC
  c->r[5]=c->r[5]-c->r[9]; // 8010C5F0
  c->r[7]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C5F4
  c->r[9]=c->r[7]+c->r[9]; // 8010C5F8
  c->r[5]=sraw(c,c->r[8],3); // 8010C5FC
  c->r[11]=addc(c,c->r[5],0,c->xer_ca); // 8010C600
  c->r[7]=c->r[30]+0x00000007u; // 8010C604
  c->r[10]=R8(c->r[4]+c->r[12]); // 8010C608
  c->r[9]=((c->r[9])&0x20)?0u:(c->r[0]<<((c->r[9])&31)); // 8010C60C
  c->r[5]=rotl(c->r[8],29)&0xE0000000u; // 8010C610
  c->r[30]=c->r[30]+0x00000008u; // 8010C614
  c->r[10]=c->r[10]&~c->r[9]; // 8010C618
  c->r[9]=rotl(c->r[8],1)&0x00000001u; // 8010C61C
  W8(c->r[4]+c->r[12],c->r[10]); // 8010C620
  c->r[5]=c->r[5]-c->r[9]; // 8010C624
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C628
  c->r[8]=sraw(c,c->r[7],3); // 8010C62C
  c->r[5]=c->r[5]+c->r[9]; // 8010C630
  c->r[10]=R8(c->r[4]+c->r[11]); // 8010C634
  c->r[9]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8010C638
  c->r[5]=rotl(c->r[7],29)&0xE0000000u; // 8010C63C
  c->r[7]=rotl(c->r[7],1)&0x00000001u; // 8010C640
  c->r[9]=c->r[10]&~c->r[9]; // 8010C644
  c->r[5]=c->r[5]-c->r[7]; // 8010C648
  W8(c->r[4]+c->r[11],c->r[9]); // 8010C64C
  c->r[9]=addc(c,c->r[8],0,c->xer_ca); // 8010C650
  c->r[5]=rotl(c->r[5],3)&0xFFFFFFFFu; // 8010C654
  c->r[8]=R8(c->r[4]+c->r[9]); // 8010C658
  c->r[5]=c->r[5]+c->r[7]; // 8010C65C
  c->r[5]=((c->r[5])&0x20)?0u:(c->r[0]<<((c->r[5])&31)); // 8010C660
  c->r[5]=c->r[8]&~c->r[5]; // 8010C664
  W8(c->r[4]+c->r[9],c->r[5]); // 8010C668
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010C4F0; } // 8010C66C
L_8010C670:;
  c->r[0]=c->r[31]+0x00000001u; // 8010C670
  c->r[7]=c->r[1]+0x00000008u; // 8010C674
  c->r[0]=c->r[0]-c->r[30]; // 8010C678
  c->r[5]=0u+0x00000001u; // 8010C67C
  c->ctr=c->r[0]; // 8010C680
  cmps(c,0,(int32_t)c->r[30],(int32_t)c->r[31]); // 8010C684
  if (crb(c,1)) { goto L_8010C6C0; } // 8010C688
L_8010C68C:;
  c->r[0]=rotl(c->r[30],29)&0xE0000000u; // 8010C68C
  c->r[4]=rotl(c->r[30],1)&0x00000001u; // 8010C690
  c->r[6]=sraw(c,c->r[30],3); // 8010C694
  c->r[30]=c->r[30]+0x00000001u; // 8010C698
  c->r[0]=c->r[0]-c->r[4]; // 8010C69C
  c->r[8]=addc(c,c->r[6],0,c->xer_ca); // 8010C6A0
  c->r[0]=rotl(c->r[0],3)&0xFFFFFFFFu; // 8010C6A4
  c->r[6]=R8(c->r[7]+c->r[8]); // 8010C6A8
  c->r[0]=c->r[0]+c->r[4]; // 8010C6AC
  c->r[0]=((c->r[0])&0x20)?0u:(c->r[5]<<((c->r[0])&31)); // 8010C6B0
  c->r[0]=c->r[6]&~c->r[0]; // 8010C6B4
  W8(c->r[7]+c->r[8],c->r[0]); // 8010C6B8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010C68C; } // 8010C6BC
L_8010C6C0:;
  c->r[0]=R8(c->r[1]+0x00000008u); // 8010C6C0
  W8(c->r[3]+0x0000000Bu,c->r[0]); // 8010C6C4
  c->r[0]=R8(c->r[1]+0x00000009u); // 8010C6C8
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010C6CC
  c->r[0]=R8(c->r[1]+0x0000000Au); // 8010C6D0
  W8(c->r[3]+0x0000000Du,c->r[0]); // 8010C6D4
  c->r[0]=R8(c->r[1]+0x0000000Bu); // 8010C6D8
  W8(c->r[3]+0x0000000Eu,c->r[0]); // 8010C6DC
  c->r[0]=R8(c->r[1]+0x0000000Cu); // 8010C6E0
  W8(c->r[3]+0x0000000Fu,c->r[0]); // 8010C6E4
  c->r[0]=R8(c->r[1]+0x0000000Du); // 8010C6E8
  W8(c->r[3]+0x00000010u,c->r[0]); // 8010C6EC
  c->r[0]=R8(c->r[1]+0x0000000Eu); // 8010C6F0
  W8(c->r[3]+0x00000011u,c->r[0]); // 8010C6F4
  c->r[0]=R8(c->r[1]+0x0000000Fu); // 8010C6F8
  W8(c->r[3]+0x00000012u,c->r[0]); // 8010C6FC
  c->r[0]=R8(c->r[1]+0x00000010u); // 8010C700
  W8(c->r[3]+0x00000013u,c->r[0]); // 8010C704
  c->r[0]=R8(c->r[1]+0x00000011u); // 8010C708
  W8(c->r[3]+0x00000014u,c->r[0]); // 8010C70C
  c->lr=0x8010C714u; f_801081E8(c); // 8010C710
  c->r[3]=0u+0x00000001u; // 8010C714
L_8010C718:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010C718
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010C71C
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010C720
  c->r[29]=R32(c->r[1]+0x00000024u); // 8010C724
  c->lr=c->r[0]; // 8010C728
  c->r[1]=c->r[1]+0x00000030u; // 8010C72C
  return; // 8010C730
}

// btsnd_hcic_write_inqscan_type
void f_8010C734(Ctx* __restrict c) {
  trace_call(0x8010C734u);
  c->r[8]=0u+0x00000004u; // 8010C734
  c->r[7]=0u+0x00000000u; // 8010C738
  c->r[6]=0u+0x00000043u; // 8010C73C
  c->r[5]=0u+0x0000000Cu; // 8010C740
  c->r[0]=0u+0x00000001u; // 8010C744
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010C748
  W16(c->r[3]+0x00000004u,c->r[7]); // 8010C74C
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010C750
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010C754
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010C758
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010C75C
  f_801081E8(c); return; // 8010C760
}

// btsnd_hcic_write_inquiry_mode
void f_8010C764(Ctx* __restrict c) {
  trace_call(0x8010C764u);
  c->r[8]=0u+0x00000004u; // 8010C764
  c->r[7]=0u+0x00000000u; // 8010C768
  c->r[6]=0u+0x00000045u; // 8010C76C
  c->r[5]=0u+0x0000000Cu; // 8010C770
  c->r[0]=0u+0x00000001u; // 8010C774
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010C778
  W16(c->r[3]+0x00000004u,c->r[7]); // 8010C77C
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010C780
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010C784
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010C788
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010C78C
  f_801081E8(c); return; // 8010C790
}

// btsnd_hcic_write_pagescan_type
void f_8010C794(Ctx* __restrict c) {
  trace_call(0x8010C794u);
  c->r[8]=0u+0x00000004u; // 8010C794
  c->r[7]=0u+0x00000000u; // 8010C798
  c->r[6]=0u+0x00000047u; // 8010C79C
  c->r[5]=0u+0x0000000Cu; // 8010C7A0
  c->r[0]=0u+0x00000001u; // 8010C7A4
  W16(c->r[3]+0x00000002u,c->r[8]); // 8010C7A8
  W16(c->r[3]+0x00000004u,c->r[7]); // 8010C7AC
  W8(c->r[3]+0x00000008u,c->r[6]); // 8010C7B0
  W8(c->r[3]+0x00000009u,c->r[5]); // 8010C7B4
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010C7B8
  W8(c->r[3]+0x0000000Bu,c->r[4]); // 8010C7BC
  f_801081E8(c); return; // 8010C7C0
}

// btsnd_hcic_vendor_spec_cmd
void f_8010C7C4(Ctx* __restrict c) {
  trace_call(0x8010C7C4u);
  c->r[8]=c->r[4]|0x0000FC00u; // 8010C7C4
  c->r[7]=c->r[5]+0x00000003u; // 8010C7C8
  c->r[0]=sraw(c,c->r[8],8); // 8010C7CC
  c->r[4]=0u+0x00000000u; // 8010C7D0
  cmps(c,1,(int32_t)c->r[5],0); // 8010C7D4
  W16(c->r[3]+0x00000002u,c->r[7]); // 8010C7D8
  c->r[9]=c->r[3]+0x0000000Bu; // 8010C7DC
  c->r[10]=0u+0x00000000u; // 8010C7E0
  W16(c->r[3]+0x00000004u,c->r[4]); // 8010C7E4
  W8(c->r[3]+0x00000008u,c->r[8]); // 8010C7E8
  W8(c->r[3]+0x00000009u,c->r[0]); // 8010C7EC
  W8(c->r[3]+0x0000000Au,c->r[5]); // 8010C7F0
  if (!crb(c,5)) { goto L_8010C8B4; } // 8010C7F4
  cmps(c,0,(int32_t)c->r[5],8); // 8010C7F8
  c->r[7]=c->r[5]+0xFFFFFFF8u; // 8010C7FC
  if (!crb(c,1)) { goto L_8010C88C; } // 8010C800
  c->r[8]=0u+0x00000000u; // 8010C804
  if (crb(c,4)) { goto L_8010C820; } // 8010C808
  c->r[4]=0u+0x80000000u; // 8010C80C
  c->r[0]=c->r[4]+0xFFFFFFFEu; // 8010C810
  cmps(c,0,(int32_t)c->r[5],(int32_t)c->r[0]); // 8010C814
  if (crb(c,1)) { goto L_8010C820; } // 8010C818
  c->r[8]=0u+0x00000001u; // 8010C81C
L_8010C820:;
  cmps(c,0,(int32_t)c->r[8],0); // 8010C820
  if (crb(c,2)) { goto L_8010C88C; } // 8010C824
  c->r[0]=c->r[7]+0x00000007u; // 8010C828
  c->r[0]=rotl(c->r[0],29)&0x1FFFFFFFu; // 8010C82C
  c->ctr=c->r[0]; // 8010C830
  cmps(c,0,(int32_t)c->r[7],0); // 8010C834
  if (!crb(c,1)) { goto L_8010C88C; } // 8010C838
L_8010C83C:;
  c->r[0]=R8(c->r[6]+c->r[10]); // 8010C83C
  c->r[4]=c->r[6]+c->r[10]; // 8010C840
  c->r[10]=c->r[10]+0x00000008u; // 8010C844
  W8(c->r[9]+0x00000000u,c->r[0]); // 8010C848
  c->r[0]=R8(c->r[4]+0x00000001u); // 8010C84C
  W8(c->r[9]+0x00000001u,c->r[0]); // 8010C850
  c->r[0]=R8(c->r[4]+0x00000002u); // 8010C854
  W8(c->r[9]+0x00000002u,c->r[0]); // 8010C858
  c->r[0]=R8(c->r[4]+0x00000003u); // 8010C85C
  W8(c->r[9]+0x00000003u,c->r[0]); // 8010C860
  c->r[0]=R8(c->r[4]+0x00000004u); // 8010C864
  W8(c->r[9]+0x00000004u,c->r[0]); // 8010C868
  c->r[0]=R8(c->r[4]+0x00000005u); // 8010C86C
  W8(c->r[9]+0x00000005u,c->r[0]); // 8010C870
  c->r[0]=R8(c->r[4]+0x00000006u); // 8010C874
  W8(c->r[9]+0x00000006u,c->r[0]); // 8010C878
  c->r[0]=R8(c->r[4]+0x00000007u); // 8010C87C
  W8(c->r[9]+0x00000007u,c->r[0]); // 8010C880
  c->r[9]=c->r[9]+0x00000008u; // 8010C884
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010C83C; } // 8010C888
L_8010C88C:;
  c->r[0]=c->r[5]-c->r[10]; // 8010C88C
  c->r[4]=c->r[6]+c->r[10]; // 8010C890
  c->ctr=c->r[0]; // 8010C894
  cmps(c,0,(int32_t)c->r[10],(int32_t)c->r[5]); // 8010C898
  if (!crb(c,0)) { goto L_8010C8B4; } // 8010C89C
L_8010C8A0:;
  c->r[0]=R8(c->r[4]+0x00000000u); // 8010C8A0
  c->r[4]=c->r[4]+0x00000001u; // 8010C8A4
  W8(c->r[9]+0x00000000u,c->r[0]); // 8010C8A8
  c->r[9]=c->r[9]+0x00000001u; // 8010C8AC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010C8A0; } // 8010C8B0
L_8010C8B4:;
  f_801081E8(c); return; // 8010C8B4
}

// HID_DevInit
void f_8010C8B8(Ctx* __restrict c) {
  trace_call(0x8010C8B8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C8B8
  c->r[0]=c->lr; // 8010C8BC
  c->r[4]=0u+0x00000000u; // 8010C8C0
  c->r[5]=0u+0x00000144u; // 8010C8C4
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C8C8
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C8CC
  c->r[31]=0u+0x803D0000u; // 8010C8D0
  c->r[3]=c->r[31]+0xFFFFCD90u; // 8010C8D4
  c->lr=0x8010C8DCu; f_80004714(c); // 8010C8D8
  c->r[3]=0u+0x80110000u; // 8010C8DC
  c->r[5]=c->r[31]+0xFFFFCD90u; // 8010C8E0
  c->r[6]=0u+0x00000001u; // 8010C8E4
  c->r[4]=0u+0x00000040u; // 8010C8E8
  c->r[3]=c->r[3]+0xFFFFC9E0u; // 8010C8EC
  c->r[0]=0u+0x00000000u; // 8010C8F0
  W8(c->r[5]+0x000000CAu,c->r[6]); // 8010C8F4
  W16(c->r[5]+0x000000CCu,c->r[4]); // 8010C8F8
  W8(c->r[5]+0x00000106u,c->r[6]); // 8010C8FC
  W16(c->r[5]+0x00000108u,c->r[4]); // 8010C900
  W32(c->r[5]+0x0000002Cu,c->r[3]); // 8010C904
  W8(c->r[5]+0x00000141u,c->r[0]); // 8010C908
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010C90C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010C910
  c->lr=c->r[0]; // 8010C914
  c->r[1]=c->r[1]+0x00000010u; // 8010C918
  return; // 8010C91C
}

// hidd_conn_initiate
void f_8010C920(Ctx* __restrict c) {
  trace_call(0x8010C920u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C920
  c->r[0]=c->lr; // 8010C924
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010C928
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010C92C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010C930
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010C934
  c->r[29]=0u+0x803D0000u; // 8010C938
  c->r[29]=c->r[29]+0xFFFFCD90u; // 8010C93C
  c->r[0]=R8(c->r[29]+0x00000141u); // 8010C940
  cmpu(c,0,c->r[0],0x00000004u); // 8010C944
  if (crb(c,0)) { goto L_8010C960; } // 8010C948
  c->r[3]=0u+0x001E0000u; // 8010C94C
  c->r[4]=0u+0x80330000u; // 8010C950
  c->r[3]=c->r[3]+0x00000003u; // 8010C954
  c->r[4]=c->r[4]+0xFFFFC410u; // 8010C958
  c->lr=0x8010C960u; f_800F7280(c); // 8010C95C
L_8010C960:;
  c->r[0]=0u+0x00000000u; // 8010C960
  c->r[30]=0u+0x00000001u; // 8010C964
  c->r[31]=0u+0x803D0000u; // 8010C968
  W16(c->r[29]+0x00000014u,c->r[0]); // 8010C96C
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010C970
  c->r[3]=0u+0x00000011u; // 8010C974
  W16(c->r[29]+0x00000016u,c->r[0]); // 8010C978
  W8(c->r[29]+0x00000011u,c->r[30]); // 8010C97C
  c->lr=0x8010C984u; f_8010FE10(c); // 8010C980
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8010C984
  W16(c->r[29]+0x00000014u,c->r[3]); // 8010C988
  if (!crb(c,2)) { goto L_8010C9BC; } // 8010C98C
  c->r[3]=c->r[31]+0xFFFFCD90u; // 8010C990
  c->r[0]=R8(c->r[3]+0x00000141u); // 8010C994
  cmpu(c,0,c->r[0],0x00000002u); // 8010C998
  if (crb(c,0)) { goto L_8010C9B4; } // 8010C99C
  c->r[3]=0u+0x001E0000u; // 8010C9A0
  c->r[4]=0u+0x80330000u; // 8010C9A4
  c->r[3]=c->r[3]+0x00000001u; // 8010C9A8
  c->r[4]=c->r[4]+0xFFFFC428u; // 8010C9AC
  c->lr=0x8010C9B4u; f_800F7280(c); // 8010C9B0
L_8010C9B4:;
  c->r[3]=0u+0x0000000Eu; // 8010C9B4
  goto L_8010C9C4; // 8010C9B8
L_8010C9BC:;
  W8(c->r[29]+0x00000010u,c->r[30]); // 8010C9BC
  c->r[3]=0u+0x00000000u; // 8010C9C0
L_8010C9C4:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010C9C4
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010C9C8
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010C9CC
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010C9D0
  c->lr=c->r[0]; // 8010C9D4
  c->r[1]=c->r[1]+0x00000020u; // 8010C9D8
  return; // 8010C9DC
}

// hidd_proc_repage_timeout
void f_8010C9E0(Ctx* __restrict c) {
  trace_call(0x8010C9E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010C9E0
  c->r[0]=c->lr; // 8010C9E4
  c->r[3]=0u+0x803D0000u; // 8010C9E8
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010C9EC
  c->r[3]=c->r[3]+0xFFFFCD90u; // 8010C9F0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010C9F4
  c->r[0]=R8(c->r[3]+0x00000141u); // 8010C9F8
  cmpu(c,0,c->r[0],0x00000005u); // 8010C9FC
  if (crb(c,0)) { goto L_8010CA18; } // 8010CA00
  c->r[3]=0u+0x001E0000u; // 8010CA04
  c->r[4]=0u+0x80330000u; // 8010CA08
  c->r[3]=c->r[3]+0x00000004u; // 8010CA0C
  c->r[4]=c->r[4]+0xFFFFC440u; // 8010CA10
  c->lr=0x8010CA18u; f_800F7280(c); // 8010CA14
L_8010CA18:;
  c->r[31]=0u+0x803D0000u; // 8010CA18
  c->r[31]=c->r[31]+0xFFFFCD90u; // 8010CA1C
  c->r[3]=R8(c->r[31]+0x00000009u); // 8010CA20
  c->r[0]=c->r[3]+0x00000001u; // 8010CA24
  W8(c->r[31]+0x00000009u,c->r[0]); // 8010CA28
  c->lr=0x8010CA30u; f_8010C920(c); // 8010CA2C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010CA30
  if (crb(c,2)) { goto L_8010CA7C; } // 8010CA34
  c->r[0]=R8(c->r[31]+0x00000009u); // 8010CA38
  cmpu(c,0,c->r[0],0x0000000Fu); // 8010CA3C
  if (!crb(c,1)) { goto L_8010CA68; } // 8010CA40
  c->r[12]=R32(c->r[31]+0x000000C4u); // 8010CA44
  c->r[0]=0u+0x00000000u; // 8010CA48
  W8(c->r[31]+0x00000008u,c->r[0]); // 8010CA4C
  c->r[3]=0u+0x00000001u; // 8010CA50
  c->r[4]=0u+0x00000000u; // 8010CA54
  c->r[5]=0u+0x00000000u; // 8010CA58
  c->ctr=c->r[12]; // 8010CA5C
  if (true) { c->lr=0x8010CA64u; dispatch(c,c->ctr); } // 8010CA60
  goto L_8010CA94; // 8010CA64
L_8010CA68:;
  c->r[3]=c->r[31]+0x0000001Cu; // 8010CA68
  c->r[4]=0u+0x00000016u; // 8010CA6C
  c->r[5]=0u+0x00000001u; // 8010CA70
  c->lr=0x8010CA78u; f_800F7890(c); // 8010CA74
  goto L_8010CA94; // 8010CA78
L_8010CA7C:;
  c->r[12]=R32(c->r[31]+0x000000C4u); // 8010CA7C
  c->r[3]=0u+0x00000002u; // 8010CA80
  c->r[4]=R8(c->r[31]+0x00000009u); // 8010CA84
  c->r[5]=0u+0x00000000u; // 8010CA88
  c->ctr=c->r[12]; // 8010CA8C
  if (true) { c->lr=0x8010CA94u; dispatch(c,c->ctr); } // 8010CA90
L_8010CA94:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CA94
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010CA98
  c->lr=c->r[0]; // 8010CA9C
  c->r[1]=c->r[1]+0x00000010u; // 8010CAA0
  return; // 8010CAA4
}

// hidd_pm_set_now
void f_8010CAA8(Ctx* __restrict c) {
  trace_call(0x8010CAA8u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CAA8
  c->r[0]=c->lr; // 8010CAAC
  c->r[4]=0u+0x803D0000u; // 8010CAB0
  c->r[5]=0u+0x00000000u; // 8010CAB4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010CAB8
  c->r[4]=c->r[4]+0xFFFFCD90u; // 8010CABC
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010CAC0
  c->r[0]=R8(c->r[4]+0x0000006Eu); // 8010CAC4
  W32(c->r[1]+0x0000000Cu,c->r[5]); // 8010CAC8
  cmps(c,0,(int32_t)c->r[0],0); // 8010CACC
  W32(c->r[1]+0x00000010u,c->r[5]); // 8010CAD0
  W16(c->r[1]+0x00000014u,c->r[5]); // 8010CAD4
  W8(c->r[1]+0x00000008u,c->r[5]); // 8010CAD8
  if (!crb(c,2)) { goto L_8010CB14; } // 8010CADC
  c->r[6]=R8(c->r[4]+0x0000006Au); // 8010CAE0
  c->r[5]=R8(c->r[3]+0x00000008u); // 8010CAE4
  cmpu(c,0,c->r[5],c->r[6]); // 8010CAE8
  if (!crb(c,2)) { goto L_8010CB2C; } // 8010CAEC
  cmps(c,0,(int32_t)c->r[5],0); // 8010CAF0
  if (crb(c,2)) { goto L_8010CB14; } // 8010CAF4
  c->r[4]=R16(c->r[4]+0x0000006Cu); // 8010CAF8
  c->r[0]=R16(c->r[3]+0x00000002u); // 8010CAFC
  cmpu(c,0,c->r[4],c->r[0]); // 8010CB00
  if (crb(c,0)) { goto L_8010CB2C; } // 8010CB04
  c->r[0]=R16(c->r[3]+0x00000000u); // 8010CB08
  cmpu(c,0,c->r[4],c->r[0]); // 8010CB0C
  if (crb(c,1)) { goto L_8010CB2C; } // 8010CB10
L_8010CB14:;
  c->r[4]=0u+0x803D0000u; // 8010CB14
  c->r[0]=0u+0x000000FFu; // 8010CB18
  c->r[4]=c->r[4]+0xFFFFCD90u; // 8010CB1C
  c->r[3]=0u+0x00000001u; // 8010CB20
  W8(c->r[4]+0x00000078u,c->r[0]); // 8010CB24
  goto L_8010CC6C; // 8010CB28
L_8010CB2C:;
  cmps(c,0,(int32_t)c->r[5],2); // 8010CB2C
  if (crb(c,2)) { goto L_8010CBB0; } // 8010CB30
  if (!crb(c,0)) { goto L_8010CB44; } // 8010CB34
  cmps(c,0,(int32_t)c->r[5],0); // 8010CB38
  if (crb(c,2)) { goto L_8010CB50; } // 8010CB3C
  goto L_8010CC24; // 8010CB40
L_8010CB44:;
  cmps(c,0,(int32_t)c->r[5],4); // 8010CB44
  if (!crb(c,0)) { goto L_8010CC24; } // 8010CB48
  goto L_8010CBEC; // 8010CB4C
L_8010CB50:;
  cmpu(c,0,c->r[6],0x00000002u); // 8010CB50
  if (!crb(c,2)) { goto L_8010CB80; } // 8010CB54
  c->r[31]=0u+0x803D0000u; // 8010CB58
  c->r[5]=c->r[1]+0x0000000Cu; // 8010CB5C
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CB60
  c->r[3]=0u+0x00000080u; // 8010CB64
  c->lr=0x8010CB6Cu; f_8010325C(c); // 8010CB68
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CB6C
  c->r[0]=0u+0x00000001u; // 8010CB70
  W8(c->r[1]+0x00000008u,c->r[3]); // 8010CB74
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 8010CB78
  goto L_8010CC24; // 8010CB7C
L_8010CB80:;
  cmpu(c,0,c->r[6],0x00000003u); // 8010CB80
  if (!crb(c,2)) { goto L_8010CC24; } // 8010CB84
  c->r[31]=0u+0x803D0000u; // 8010CB88
  c->r[5]=c->r[1]+0x0000000Cu; // 8010CB8C
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CB90
  c->r[3]=0u+0x00000080u; // 8010CB94
  c->lr=0x8010CB9Cu; f_8010325C(c); // 8010CB98
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CB9C
  c->r[0]=0u+0x00000001u; // 8010CBA0
  W8(c->r[1]+0x00000008u,c->r[3]); // 8010CBA4
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 8010CBA8
  goto L_8010CC24; // 8010CBAC
L_8010CBB0:;
  cmps(c,0,(int32_t)c->r[6],0); // 8010CBB0
  if (crb(c,2)) { goto L_8010CBC4; } // 8010CBB4
  c->r[3]=c->r[1]+0x0000000Cu; // 8010CBB8
  c->lr=0x8010CBC0u; f_8010CAA8(c); // 8010CBBC
  goto L_8010CC24; // 8010CBC0
L_8010CBC4:;
  c->r[31]=0u+0x803D0000u; // 8010CBC4
  c->r[5]=c->r[3]|c->r[3]; // 8010CBC8
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CBCC
  c->r[3]=0u+0x00000080u; // 8010CBD0
  c->lr=0x8010CBD8u; f_8010325C(c); // 8010CBD4
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CBD8
  c->r[0]=0u+0x00000001u; // 8010CBDC
  W8(c->r[1]+0x00000008u,c->r[3]); // 8010CBE0
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 8010CBE4
  goto L_8010CC24; // 8010CBE8
L_8010CBEC:;
  cmps(c,0,(int32_t)c->r[6],0); // 8010CBEC
  if (crb(c,2)) { goto L_8010CC00; } // 8010CBF0
  c->r[3]=c->r[1]+0x0000000Cu; // 8010CBF4
  c->lr=0x8010CBFCu; f_8010CAA8(c); // 8010CBF8
  goto L_8010CC24; // 8010CBFC
L_8010CC00:;
  c->r[31]=0u+0x803D0000u; // 8010CC00
  c->r[5]=c->r[3]|c->r[3]; // 8010CC04
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CC08
  c->r[3]=0u+0x00000080u; // 8010CC0C
  c->lr=0x8010CC14u; f_8010325C(c); // 8010CC10
  c->r[4]=c->r[31]+0xFFFFCD90u; // 8010CC14
  c->r[0]=0u+0x00000001u; // 8010CC18
  W8(c->r[1]+0x00000008u,c->r[3]); // 8010CC1C
  W8(c->r[4]+0x0000006Eu,c->r[0]); // 8010CC20
L_8010CC24:;
  c->r[4]=R8(c->r[1]+0x00000008u); // 8010CC24
  cmpu(c,0,c->r[4],0x00000001u); // 8010CC28
  if (crb(c,1)) { goto L_8010CC38; } // 8010CC2C
  c->r[3]=0u+0x00000001u; // 8010CC30
  goto L_8010CC6C; // 8010CC34
L_8010CC38:;
  c->r[3]=0u+0x803D0000u; // 8010CC38
  c->r[0]=c->r[4]+0x00000037u; // 8010CC3C
  c->r[3]=c->r[3]+0xFFFFCD90u; // 8010CC40
  W8(c->r[1]+0x00000008u,c->r[0]); // 8010CC44
  c->r[12]=R32(c->r[3]+0x000000C4u); // 8010CC48
  cmps(c,0,(int32_t)c->r[12],0); // 8010CC4C
  if (crb(c,2)) { goto L_8010CC68; } // 8010CC50
  c->r[4]=R8(c->r[3]+0x0000006Fu); // 8010CC54
  c->r[5]=c->r[1]+0x00000008u; // 8010CC58
  c->r[3]=0u+0x00000004u; // 8010CC5C
  c->ctr=c->r[12]; // 8010CC60
  if (true) { c->lr=0x8010CC68u; dispatch(c,c->ctr); } // 8010CC64
L_8010CC68:;
  c->r[3]=0u+0x00000000u; // 8010CC68
L_8010CC6C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010CC6C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010CC70
  c->lr=c->r[0]; // 8010CC74
  c->r[1]=c->r[1]+0x00000020u; // 8010CC78
  return; // 8010CC7C
}

// hidd_pm_proc_mode_change
void f_8010CC80(Ctx* __restrict c) {
  trace_call(0x8010CC80u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CC80
  c->r[0]=c->lr; // 8010CC84
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010CC88
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010CC8C
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010CC90
  c->r[30]=0u+0x803D0000u; // 8010CC94
  c->r[30]=c->r[30]+0xFFFFCD90u; // 8010CC98
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010CC9C
  c->r[29]=c->r[4]|c->r[4]; // 8010CCA0
  c->r[0]=R8(c->r[30]+0x00000140u); // 8010CCA4
  W8(c->r[1]+0x00000008u,c->r[3]); // 8010CCA8
  cmps(c,0,(int32_t)c->r[0],0); // 8010CCAC
  W16(c->r[1]+0x0000000Au,c->r[5]); // 8010CCB0
  if (crb(c,2)) { goto L_8010CDBC; } // 8010CCB4
  c->r[31]=0u+0x00000000u; // 8010CCB8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010CCBC
  W8(c->r[30]+0x0000006Eu,c->r[31]); // 8010CCC0
  if (crb(c,2)) { goto L_8010CCEC; } // 8010CCC4
  c->r[12]=R32(c->r[30]+0x000000C4u); // 8010CCC8
  cmps(c,0,(int32_t)c->r[12],0); // 8010CCCC
  if (crb(c,2)) { goto L_8010CDBC; } // 8010CCD0
  c->r[5]=c->r[1]+0x00000008u; // 8010CCD4
  c->r[4]=R8(c->r[30]+0x0000006Fu); // 8010CCD8
  c->r[3]=0u+0x00000004u; // 8010CCDC
  c->ctr=c->r[12]; // 8010CCE0
  if (true) { c->lr=0x8010CCE8u; dispatch(c,c->ctr); } // 8010CCE4
  goto L_8010CDBC; // 8010CCE8
L_8010CCEC:;
  c->r[0]=R8(c->r[30]+0x00000078u); // 8010CCEC
  c->r[3]=rotl(c->r[5],0)&0x0000FFFFu; // 8010CCF0
  W8(c->r[30]+0x0000006Au,c->r[4]); // 8010CCF4
  cmpu(c,0,c->r[0],0x000000FFu); // 8010CCF8
  W16(c->r[30]+0x0000006Cu,c->r[5]); // 8010CCFC
  if (crb(c,2)) { goto L_8010CD54; } // 8010CD00
  cmpu(c,0,c->r[0],c->r[4]); // 8010CD04
  if (!crb(c,2)) { goto L_8010CD2C; } // 8010CD08
  cmps(c,0,(int32_t)c->r[0],0); // 8010CD0C
  if (crb(c,2)) { goto L_8010CD40; } // 8010CD10
  c->r[0]=R16(c->r[30]+0x00000072u); // 8010CD14
  cmpu(c,0,c->r[3],c->r[0]); // 8010CD18
  if (crb(c,0)) { goto L_8010CD2C; } // 8010CD1C
  c->r[0]=R16(c->r[30]+0x00000070u); // 8010CD20
  cmpu(c,0,c->r[3],c->r[0]); // 8010CD24
  if (!crb(c,1)) { goto L_8010CD40; } // 8010CD28
L_8010CD2C:;
  c->r[3]=0u+0x803D0000u; // 8010CD2C
  c->r[3]=c->r[3]+0xFFFFCD90u; // 8010CD30
  c->r[3]=c->r[3]+0x00000070u; // 8010CD34
  c->lr=0x8010CD3Cu; f_8010CAA8(c); // 8010CD38
  goto L_8010CD94; // 8010CD3C
L_8010CD40:;
  c->r[3]=0u+0x803D0000u; // 8010CD40
  c->r[0]=0u+0x000000FFu; // 8010CD44
  c->r[3]=c->r[3]+0xFFFFCD90u; // 8010CD48
  W8(c->r[3]+0x00000078u,c->r[0]); // 8010CD4C
  goto L_8010CD94; // 8010CD50
L_8010CD54:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010CD54
  if (!crb(c,2)) { goto L_8010CD94; } // 8010CD58
  c->r[3]=c->r[30]+0x00000070u; // 8010CD5C
  c->r[4]=c->r[30]+0x0000004Cu; // 8010CD60
  c->r[5]=0u+0x0000000Au; // 8010CD64
  c->lr=0x8010CD6Cu; f_800043C4(c); // 8010CD68
  c->r[3]=c->r[30]+0x0000004Cu; // 8010CD6C
  c->lr=0x8010CD74u; f_8010CAA8(c); // 8010CD70
  c->r[3]=0u+0x80110000u; // 8010CD74
  W8(c->r[30]+0x0000006Fu,c->r[31]); // 8010CD78
  c->r[3]=c->r[3]+0xFFFFCDD8u; // 8010CD7C
  c->r[4]=0u+0x00000016u; // 8010CD80
  W32(c->r[30]+0x00000044u,c->r[3]); // 8010CD84
  c->r[3]=c->r[30]+0x00000034u; // 8010CD88
  c->r[5]=0u+0x0000003Cu; // 8010CD8C
  c->lr=0x8010CD94u; f_800F7890(c); // 8010CD90
L_8010CD94:;
  c->r[3]=0u+0x803D0000u; // 8010CD94
  c->r[3]=c->r[3]+0xFFFFCD90u; // 8010CD98
  c->r[12]=R32(c->r[3]+0x000000C4u); // 8010CD9C
  cmps(c,0,(int32_t)c->r[12],0); // 8010CDA0
  if (crb(c,2)) { goto L_8010CDBC; } // 8010CDA4
  c->r[4]=c->r[29]|c->r[29]; // 8010CDA8
  c->r[5]=c->r[1]+0x0000000Au; // 8010CDAC
  c->r[3]=0u+0x00000003u; // 8010CDB0
  c->ctr=c->r[12]; // 8010CDB4
  if (true) { c->lr=0x8010CDBCu; dispatch(c,c->ctr); } // 8010CDB8
L_8010CDBC:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010CDBC
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010CDC0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010CDC4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010CDC8
  c->lr=c->r[0]; // 8010CDCC
  c->r[1]=c->r[1]+0x00000020u; // 8010CDD0
  return; // 8010CDD4
}

// hidd_pm_inact_timeout
void f_8010CDD8(Ctx* __restrict c) {
  trace_call(0x8010CDD8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CDD8
  c->r[0]=c->lr; // 8010CDDC
  c->r[5]=0u+0x0000000Au; // 8010CDE0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010CDE4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010CDE8
  c->r[31]=0u+0x803D0000u; // 8010CDEC
  c->r[31]=c->r[31]+0xFFFFCD90u; // 8010CDF0
  c->r[3]=c->r[31]+0x00000070u; // 8010CDF4
  c->r[4]=c->r[31]+0x00000056u; // 8010CDF8
  c->lr=0x8010CE00u; f_800043C4(c); // 8010CDFC
  c->r[3]=c->r[31]+0x00000056u; // 8010CE00
  c->lr=0x8010CE08u; f_8010CAA8(c); // 8010CE04
  c->r[0]=0u+0x00000001u; // 8010CE08
  W8(c->r[31]+0x0000006Fu,c->r[0]); // 8010CE0C
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010CE10
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010CE14
  c->lr=c->r[0]; // 8010CE18
  c->r[1]=c->r[1]+0x00000010u; // 8010CE1C
  return; // 8010CE20
}

// HID_HostGetSDPRecord
void f_8010CE24(Ctx* __restrict c) {
  trace_call(0x8010CE24u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CE24
  c->r[0]=c->lr; // 8010CE28
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010CE2C
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010CE30
  c->r[31]=0u+0x803D0000u; // 8010CE34
  c->r[31]=c->r[31]+0xFFFFCED8u; // 8010CE38
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010CE3C
  c->r[30]=c->r[6]|c->r[6]; // 8010CE40
  W32(c->r[1]+0x00000024u,c->r[29]); // 8010CE44
  c->r[29]=c->r[4]|c->r[4]; // 8010CE48
  W32(c->r[1]+0x00000020u,c->r[28]); // 8010CE4C
  c->r[28]=c->r[3]|c->r[3]; // 8010CE50
  c->r[0]=R8(c->r[31]+0x00000380u); // 8010CE54
  cmps(c,0,(int32_t)c->r[0],0); // 8010CE58
  if (crb(c,2)) { goto L_8010CE68; } // 8010CE5C
  c->r[3]=0u+0x00000010u; // 8010CE60
  goto L_8010CECC; // 8010CE64
L_8010CE68:;
  c->r[7]=0u+0x00000002u; // 8010CE68
  c->r[0]=0u+0x00001124u; // 8010CE6C
  W32(c->r[31]+0x00000388u,c->r[4]); // 8010CE70
  c->r[4]=c->r[5]|c->r[5]; // 8010CE74
  c->r[3]=c->r[29]|c->r[29]; // 8010CE78
  c->r[6]=c->r[1]+0x00000008u; // 8010CE7C
  W16(c->r[1]+0x00000008u,c->r[7]); // 8010CE80
  c->r[5]=0u+0x00000001u; // 8010CE84
  c->r[7]=0u+0x00000000u; // 8010CE88
  c->r[8]=0u+0x00000000u; // 8010CE8C
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 8010CE90
  c->lr=0x8010CE98u; f_8011C19C(c); // 8010CE94
  c->r[5]=0u+0x80110000u; // 8010CE98
  c->r[3]=c->r[28]|c->r[28]; // 8010CE9C
  c->r[4]=c->r[29]|c->r[29]; // 8010CEA0
  c->r[5]=c->r[5]+0xFFFFCEECu; // 8010CEA4
  c->lr=0x8010CEACu; f_8011C514(c); // 8010CEA8
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010CEAC
  if (crb(c,2)) { goto L_8010CEC8; } // 8010CEB0
  c->r[0]=0u+0x00000001u; // 8010CEB4
  W32(c->r[31]+0x00000384u,c->r[30]); // 8010CEB8
  c->r[3]=0u+0x00000000u; // 8010CEBC
  W8(c->r[31]+0x00000380u,c->r[0]); // 8010CEC0
  goto L_8010CECC; // 8010CEC4
L_8010CEC8:;
  c->r[3]=0u+0x00000003u; // 8010CEC8
L_8010CECC:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010CECC
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010CED0
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010CED4
  c->r[29]=R32(c->r[1]+0x00000024u); // 8010CED8
  c->r[28]=R32(c->r[1]+0x00000020u); // 8010CEDC
  c->lr=c->r[0]; // 8010CEE0
  c->r[1]=c->r[1]+0x00000030u; // 8010CEE4
  return; // 8010CEE8
}

// hidh_search_callback
void f_8010CEEC(Ctx* __restrict c) {
  trace_call(0x8010CEECu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010CEEC
  c->r[0]=c->lr; // 8010CEF0
  c->r[4]=0u+0x00000002u; // 8010CEF4
  cmps(c,0,(int32_t)c->r[3],0); // 8010CEF8
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010CEFC
  c->r[0]=0u+0x00001124u; // 8010CF00
  W32(c->r[1]+0x0000002Cu,c->r[31]); // 8010CF04
  W32(c->r[1]+0x00000028u,c->r[30]); // 8010CF08
  W32(c->r[1]+0x00000024u,c->r[29]); // 8010CF0C
  c->r[29]=0u+0x00000000u; // 8010CF10
  W32(c->r[1]+0x00000020u,c->r[28]); // 8010CF14
  c->r[28]=0u+0x803D0000u; // 8010CF18
  c->r[28]=c->r[28]+0xFFFFCED8u; // 8010CF1C
  W16(c->r[1]+0x00000008u,c->r[4]); // 8010CF20
  c->r[30]=c->r[28]+0x0000038Cu; // 8010CF24
  c->r[4]=R32(c->r[28]+0x00000388u); // 8010CF28
  W16(c->r[1]+0x0000000Cu,c->r[0]); // 8010CF2C
  W8(c->r[28]+0x00000380u,c->r[29]); // 8010CF30
  if (crb(c,2)) { goto L_8010CF50; } // 8010CF34
  c->r[12]=R32(c->r[28]+0x00000384u); // 8010CF38
  c->r[4]=0u+0x00000000u; // 8010CF3C
  c->r[5]=0u+0x00000000u; // 8010CF40
  c->ctr=c->r[12]; // 8010CF44
  if (true) { c->lr=0x8010CF4Cu; dispatch(c,c->ctr); } // 8010CF48
  goto L_8010D31C; // 8010CF4C
L_8010CF50:;
  c->r[3]=c->r[4]|c->r[4]; // 8010CF50
  c->r[4]=c->r[1]+0x00000008u; // 8010CF54
  c->r[5]=0u+0x00000000u; // 8010CF58
  c->lr=0x8010CF60u; f_8011C6C8(c); // 8010CF5C
  cmps(c,0,(int32_t)c->r[3],0); // 8010CF60
  c->r[31]=c->r[3]|c->r[3]; // 8010CF64
  if (!crb(c,2)) { goto L_8010CF88; } // 8010CF68
  c->r[12]=R32(c->r[28]+0x00000384u); // 8010CF6C
  c->r[3]=0u+0x0000000Cu; // 8010CF70
  c->r[4]=0u+0x00000000u; // 8010CF74
  c->r[5]=0u+0x00000000u; // 8010CF78
  c->ctr=c->r[12]; // 8010CF7C
  if (true) { c->lr=0x8010CF84u; dispatch(c,c->ctr); } // 8010CF80
  goto L_8010D31C; // 8010CF84
L_8010CF88:;
  c->r[3]=c->r[30]|c->r[30]; // 8010CF88
  c->r[4]=0u+0x00000000u; // 8010CF8C
  c->r[5]=0u+0x00000074u; // 8010CF90
  c->lr=0x8010CF98u; f_80004714(c); // 8010CF94
  c->r[3]=c->r[31]|c->r[31]; // 8010CF98
  c->r[4]=0u+0x00000206u; // 8010CF9C
  c->lr=0x8010CFA4u; f_8011C5D4(c); // 8010CFA0
  cmps(c,0,(int32_t)c->r[3],0); // 8010CFA4
  if (crb(c,2)) { goto L_8010D000; } // 8010CFA8
  c->r[0]=R16(c->r[3]+0x00000006u); // 8010CFAC
  c->r[0]=sraw(c,c->r[0],12); // 8010CFB0
  cmps(c,0,(int32_t)c->r[0],6); // 8010CFB4
  if (!crb(c,2)) { goto L_8010D000; } // 8010CFB8
  c->r[3]=R32(c->r[3]+0x00000008u); // 8010CFBC
  cmps(c,0,(int32_t)c->r[3],0); // 8010CFC0
  if (crb(c,2)) { goto L_8010D000; } // 8010CFC4
  c->r[0]=R16(c->r[3]+0x00000006u); // 8010CFC8
  c->r[0]=sraw(c,c->r[0],12); // 8010CFCC
  cmps(c,0,(int32_t)c->r[0],6); // 8010CFD0
  if (!crb(c,2)) { goto L_8010D000; } // 8010CFD4
  c->r[3]=R32(c->r[3]+0x00000008u); // 8010CFD8
  cmps(c,0,(int32_t)c->r[3],0); // 8010CFDC
  if (crb(c,2)) { goto L_8010D000; } // 8010CFE0
  c->r[4]=R32(c->r[3]+0x00000000u); // 8010CFE4
  cmps(c,0,(int32_t)c->r[4],0); // 8010CFE8
  if (crb(c,2)) { goto L_8010D000; } // 8010CFEC
  c->r[3]=R16(c->r[4]+0x00000006u); // 8010CFF0
  c->r[0]=sraw(c,c->r[3],12); // 8010CFF4
  cmps(c,0,(int32_t)c->r[0],4); // 8010CFF8
  if (crb(c,2)) { goto L_8010D024; } // 8010CFFC
L_8010D000:;
  c->r[5]=0u+0x803D0000u; // 8010D000
  c->r[3]=0u+0x0000000Du; // 8010D004
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010D008
  c->r[4]=0u+0x00000000u; // 8010D00C
  c->r[12]=R32(c->r[5]+0x00000384u); // 8010D010
  c->r[5]=0u+0x00000000u; // 8010D014
  c->ctr=c->r[12]; // 8010D018
  if (true) { c->lr=0x8010D020u; dispatch(c,c->ctr); } // 8010D01C
  goto L_8010D31C; // 8010D020
L_8010D024:;
  c->r[0]=rotl(c->r[3],0)&0x00000FFFu; cr0(c,c->r[0]); // 8010D024
  W16(c->r[30]+0x00000068u,c->r[0]); // 8010D028
  if (crb(c,2)) { goto L_8010D038; } // 8010D02C
  c->r[0]=c->r[4]+0x00000008u; // 8010D030
  W32(c->r[30]+0x0000006Cu,c->r[0]); // 8010D034
L_8010D038:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D038
  c->r[4]=0u+0x00000204u; // 8010D03C
  c->lr=0x8010D044u; f_8011C5D4(c); // 8010D040
  cmps(c,0,(int32_t)c->r[3],0); // 8010D044
  if (crb(c,2)) { goto L_8010D05C; } // 8010D048
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D04C
  cmps(c,0,(int32_t)c->r[0],0); // 8010D050
  if (crb(c,2)) { goto L_8010D05C; } // 8010D054
  c->r[29]=c->r[29]|0x00000001u; // 8010D058
L_8010D05C:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D05C
  c->r[4]=0u+0x00000205u; // 8010D060
  c->lr=0x8010D068u; f_8011C5D4(c); // 8010D064
  cmps(c,0,(int32_t)c->r[3],0); // 8010D068
  if (crb(c,2)) { goto L_8010D084; } // 8010D06C
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D070
  cmps(c,0,(int32_t)c->r[0],0); // 8010D074
  if (crb(c,2)) { goto L_8010D084; } // 8010D078
  c->r[0]=c->r[29]|0x00000004u; // 8010D07C
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8010D080
L_8010D084:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D084
  c->r[4]=0u+0x0000020Du; // 8010D088
  c->lr=0x8010D090u; f_8011C5D4(c); // 8010D08C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D090
  if (crb(c,2)) { goto L_8010D0AC; } // 8010D094
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D098
  cmps(c,0,(int32_t)c->r[0],0); // 8010D09C
  if (crb(c,2)) { goto L_8010D0AC; } // 8010D0A0
  c->r[0]=c->r[29]|0x00000002u; // 8010D0A4
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8010D0A8
L_8010D0AC:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D0AC
  c->r[4]=0u+0x00000208u; // 8010D0B0
  c->lr=0x8010D0B8u; f_8011C5D4(c); // 8010D0B4
  cmps(c,0,(int32_t)c->r[3],0); // 8010D0B8
  if (crb(c,2)) { goto L_8010D0D4; } // 8010D0BC
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D0C0
  cmps(c,0,(int32_t)c->r[0],0); // 8010D0C4
  if (crb(c,2)) { goto L_8010D0D4; } // 8010D0C8
  c->r[0]=c->r[29]|0x00000008u; // 8010D0CC
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8010D0D0
L_8010D0D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D0D4
  c->r[4]=0u+0x00000209u; // 8010D0D8
  c->lr=0x8010D0E0u; f_8011C5D4(c); // 8010D0DC
  cmps(c,0,(int32_t)c->r[3],0); // 8010D0E0
  if (crb(c,2)) { goto L_8010D0FC; } // 8010D0E4
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D0E8
  cmps(c,0,(int32_t)c->r[0],0); // 8010D0EC
  if (crb(c,2)) { goto L_8010D0FC; } // 8010D0F0
  c->r[0]=c->r[29]|0x00000010u; // 8010D0F4
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8010D0F8
L_8010D0FC:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D0FC
  c->r[4]=0u+0x0000020Au; // 8010D100
  c->lr=0x8010D108u; f_8011C5D4(c); // 8010D104
  cmps(c,0,(int32_t)c->r[3],0); // 8010D108
  if (crb(c,2)) { goto L_8010D124; } // 8010D10C
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D110
  cmps(c,0,(int32_t)c->r[0],0); // 8010D114
  if (crb(c,2)) { goto L_8010D124; } // 8010D118
  c->r[0]=c->r[29]|0x00000020u; // 8010D11C
  c->r[29]=rotl(c->r[0],0)&0x0000FFFFu; // 8010D120
L_8010D124:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D124
  c->r[4]=0u+0x00000100u; // 8010D128
  c->lr=0x8010D130u; f_8011C5D4(c); // 8010D12C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D130
  c->r[4]=c->r[3]|c->r[3]; // 8010D134
  if (crb(c,2)) { goto L_8010D184; } // 8010D138
  c->r[0]=R16(c->r[3]+0x00000006u); // 8010D13C
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 8010D140
  cmpu(c,0,c->r[28],0x00000020u); // 8010D144
  if (!crb(c,0)) { goto L_8010D168; } // 8010D148
  c->r[3]=c->r[30]|c->r[30]; // 8010D14C
  c->r[5]=c->r[28]|c->r[28]; // 8010D150
  c->r[4]=c->r[4]+0x00000008u; // 8010D154
  c->lr=0x8010D15Cu; f_800043C4(c); // 8010D158
  c->r[0]=0u+0x00000000u; // 8010D15C
  W8(c->r[30]+c->r[28],c->r[0]); // 8010D160
  goto L_8010D18C; // 8010D164
L_8010D168:;
  c->r[3]=c->r[30]|c->r[30]; // 8010D168
  c->r[4]=c->r[4]+0x00000008u; // 8010D16C
  c->r[5]=0u+0x0000001Fu; // 8010D170
  c->lr=0x8010D178u; f_800043C4(c); // 8010D174
  c->r[0]=0u+0x00000000u; // 8010D178
  W8(c->r[30]+0x00000020u,c->r[0]); // 8010D17C
  goto L_8010D18C; // 8010D180
L_8010D184:;
  c->r[0]=0u+0x00000000u; // 8010D184
  W8(c->r[30]+0x00000000u,c->r[0]); // 8010D188
L_8010D18C:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D18C
  c->r[4]=0u+0x00000101u; // 8010D190
  c->lr=0x8010D198u; f_8011C5D4(c); // 8010D194
  cmps(c,0,(int32_t)c->r[3],0); // 8010D198
  c->r[4]=c->r[3]|c->r[3]; // 8010D19C
  if (crb(c,2)) { goto L_8010D1F0; } // 8010D1A0
  c->r[0]=R16(c->r[3]+0x00000006u); // 8010D1A4
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 8010D1A8
  cmpu(c,0,c->r[28],0x00000020u); // 8010D1AC
  if (!crb(c,0)) { goto L_8010D1D4; } // 8010D1B0
  c->r[5]=c->r[28]|c->r[28]; // 8010D1B4
  c->r[3]=c->r[30]+0x00000020u; // 8010D1B8
  c->r[4]=c->r[4]+0x00000008u; // 8010D1BC
  c->lr=0x8010D1C4u; f_800043C4(c); // 8010D1C0
  c->r[3]=c->r[30]+c->r[28]; // 8010D1C4
  c->r[0]=0u+0x00000000u; // 8010D1C8
  W8(c->r[3]+0x00000020u,c->r[0]); // 8010D1CC
  goto L_8010D1F8; // 8010D1D0
L_8010D1D4:;
  c->r[3]=c->r[30]+0x00000020u; // 8010D1D4
  c->r[4]=c->r[4]+0x00000008u; // 8010D1D8
  c->r[5]=0u+0x0000001Fu; // 8010D1DC
  c->lr=0x8010D1E4u; f_800043C4(c); // 8010D1E0
  c->r[0]=0u+0x00000000u; // 8010D1E4
  W8(c->r[30]+0x00000040u,c->r[0]); // 8010D1E8
  goto L_8010D1F8; // 8010D1EC
L_8010D1F0:;
  c->r[0]=0u+0x00000000u; // 8010D1F0
  W8(c->r[30]+0x00000020u,c->r[0]); // 8010D1F4
L_8010D1F8:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D1F8
  c->r[4]=0u+0x00000102u; // 8010D1FC
  c->lr=0x8010D204u; f_8011C5D4(c); // 8010D200
  cmps(c,0,(int32_t)c->r[3],0); // 8010D204
  c->r[4]=c->r[3]|c->r[3]; // 8010D208
  if (crb(c,2)) { goto L_8010D25C; } // 8010D20C
  c->r[0]=R16(c->r[3]+0x00000006u); // 8010D210
  c->r[28]=rotl(c->r[0],0)&0x00000FFFu; // 8010D214
  cmpu(c,0,c->r[28],0x00000020u); // 8010D218
  if (!crb(c,0)) { goto L_8010D240; } // 8010D21C
  c->r[5]=c->r[28]|c->r[28]; // 8010D220
  c->r[3]=c->r[30]+0x00000040u; // 8010D224
  c->r[4]=c->r[4]+0x00000008u; // 8010D228
  c->lr=0x8010D230u; f_800043C4(c); // 8010D22C
  c->r[3]=c->r[30]+c->r[28]; // 8010D230
  c->r[0]=0u+0x00000000u; // 8010D234
  W8(c->r[3]+0x00000040u,c->r[0]); // 8010D238
  goto L_8010D264; // 8010D23C
L_8010D240:;
  c->r[3]=c->r[30]+0x00000040u; // 8010D240
  c->r[4]=c->r[4]+0x00000008u; // 8010D244
  c->r[5]=0u+0x0000001Fu; // 8010D248
  c->lr=0x8010D250u; f_800043C4(c); // 8010D24C
  c->r[0]=0u+0x00000000u; // 8010D250
  W8(c->r[30]+0x00000060u,c->r[0]); // 8010D254
  goto L_8010D264; // 8010D258
L_8010D25C:;
  c->r[0]=0u+0x00000000u; // 8010D25C
  W8(c->r[30]+0x00000040u,c->r[0]); // 8010D260
L_8010D264:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D264
  c->r[4]=0u+0x00000200u; // 8010D268
  c->lr=0x8010D270u; f_8011C5D4(c); // 8010D26C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D270
  if (crb(c,2)) { goto L_8010D280; } // 8010D274
  c->r[0]=R16(c->r[3]+0x00000008u); // 8010D278
  W16(c->r[30]+0x00000060u,c->r[0]); // 8010D27C
L_8010D280:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D280
  c->r[4]=0u+0x00000203u; // 8010D284
  c->lr=0x8010D28Cu; f_8011C5D4(c); // 8010D288
  cmps(c,0,(int32_t)c->r[3],0); // 8010D28C
  if (crb(c,2)) { goto L_8010D29C; } // 8010D290
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D294
  W8(c->r[30]+0x00000065u,c->r[0]); // 8010D298
L_8010D29C:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D29C
  c->r[4]=0u+0x00000202u; // 8010D2A0
  c->lr=0x8010D2A8u; f_8011C5D4(c); // 8010D2A4
  cmps(c,0,(int32_t)c->r[3],0); // 8010D2A8
  if (crb(c,2)) { goto L_8010D2B8; } // 8010D2AC
  c->r[0]=R8(c->r[3]+0x00000008u); // 8010D2B0
  W8(c->r[30]+0x00000064u,c->r[0]); // 8010D2B4
L_8010D2B8:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D2B8
  c->r[4]=0u+0x00000201u; // 8010D2BC
  c->lr=0x8010D2C4u; f_8011C5D4(c); // 8010D2C0
  cmps(c,0,(int32_t)c->r[3],0); // 8010D2C4
  if (crb(c,2)) { goto L_8010D2D4; } // 8010D2C8
  c->r[0]=R16(c->r[3]+0x00000008u); // 8010D2CC
  W16(c->r[30]+0x00000062u,c->r[0]); // 8010D2D0
L_8010D2D4:;
  c->r[3]=c->r[31]|c->r[31]; // 8010D2D4
  c->r[4]=0u+0x0000020Cu; // 8010D2D8
  c->lr=0x8010D2E0u; f_8011C5D4(c); // 8010D2DC
  cmps(c,0,(int32_t)c->r[3],0); // 8010D2E0
  if (crb(c,2)) { goto L_8010D2F8; } // 8010D2E4
  c->r[0]=R16(c->r[3]+0x00000008u); // 8010D2E8
  c->r[3]=c->r[29]|0x00000040u; // 8010D2EC
  c->r[29]=rotl(c->r[3],0)&0x0000FFFFu; // 8010D2F0
  W16(c->r[30]+0x00000066u,c->r[0]); // 8010D2F4
L_8010D2F8:;
  c->r[6]=0u+0x803D0000u; // 8010D2F8
  c->r[4]=rotl(c->r[29],0)&0x0000FFFFu; // 8010D2FC
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010D300
  c->r[3]=0u+0x00000000u; // 8010D304
  c->r[12]=R32(c->r[6]+0x00000384u); // 8010D308
  c->r[5]=c->r[6]+0x0000038Cu; // 8010D30C
  W32(c->r[6]+0x000003FCu,c->r[31]); // 8010D310
  c->ctr=c->r[12]; // 8010D314
  if (true) { c->lr=0x8010D31Cu; dispatch(c,c->ctr); } // 8010D318
L_8010D31C:;
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010D31C
  c->r[31]=R32(c->r[1]+0x0000002Cu); // 8010D320
  c->r[30]=R32(c->r[1]+0x00000028u); // 8010D324
  c->r[29]=R32(c->r[1]+0x00000024u); // 8010D328
  c->r[28]=R32(c->r[1]+0x00000020u); // 8010D32C
  c->lr=c->r[0]; // 8010D330
  c->r[1]=c->r[1]+0x00000030u; // 8010D334
  return; // 8010D338
}

// HID_HostInit
void f_8010D33C(Ctx* __restrict c) {
  trace_call(0x8010D33Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D33C
  c->r[0]=c->lr; // 8010D340
  c->r[4]=0u+0x00000000u; // 8010D344
  c->r[5]=0u+0x00000404u; // 8010D348
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D34C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010D350
  c->r[31]=0u+0x803D0000u; // 8010D354
  c->r[3]=c->r[31]+0xFFFFCED8u; // 8010D358
  c->lr=0x8010D360u; f_80004714(c); // 8010D35C
  c->r[3]=c->r[31]+0xFFFFCED8u; // 8010D360
  c->r[0]=0u+0x00000000u; // 8010D364
  W8(c->r[3]+0x00000401u,c->r[0]); // 8010D368
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010D36C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D370
  c->lr=c->r[0]; // 8010D374
  c->r[1]=c->r[1]+0x00000010u; // 8010D378
  return; // 8010D37C
}

// HID_HostRegister
void f_8010D380(Ctx* __restrict c) {
  trace_call(0x8010D380u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D380
  c->r[0]=c->lr; // 8010D384
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010D388
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010D38C
  c->r[31]=0u+0x803D0000u; // 8010D390
  c->r[31]=c->r[31]+0xFFFFCED8u; // 8010D394
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010D398
  c->r[30]=c->r[3]|c->r[3]; // 8010D39C
  c->r[0]=R8(c->r[31]+0x00000400u); // 8010D3A0
  cmps(c,0,(int32_t)c->r[0],0); // 8010D3A4
  if (crb(c,2)) { goto L_8010D3B4; } // 8010D3A8
  c->r[3]=0u+0x00000002u; // 8010D3AC
  goto L_8010D3E4; // 8010D3B0
L_8010D3B4:;
  cmps(c,0,(int32_t)c->r[3],0); // 8010D3B4
  if (!crb(c,2)) { goto L_8010D3C4; } // 8010D3B8
  c->r[3]=0u+0x00000005u; // 8010D3BC
  goto L_8010D3E4; // 8010D3C0
L_8010D3C4:;
  c->lr=0x8010D3C8u; f_8010DBA4(c); // 8010D3C4
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010D3C8
  if (crb(c,2)) { goto L_8010D3D4; } // 8010D3CC
  goto L_8010D3E4; // 8010D3D0
L_8010D3D4:;
  c->r[0]=0u+0x00000001u; // 8010D3D4
  W32(c->r[31]+0x00000340u,c->r[30]); // 8010D3D8
  c->r[3]=0u+0x00000000u; // 8010D3DC
  W8(c->r[31]+0x00000400u,c->r[0]); // 8010D3E0
L_8010D3E4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010D3E4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010D3E8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010D3EC
  c->lr=c->r[0]; // 8010D3F0
  c->r[1]=c->r[1]+0x00000010u; // 8010D3F4
  return; // 8010D3F8
}

// HID_HostDeregister
void f_8010D3FC(Ctx* __restrict c) {
  trace_call(0x8010D3FCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D3FC
  c->r[0]=c->lr; // 8010D400
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D404
  c->r[11]=c->r[1]+0x00000020u; // 8010D408
  c->lr=0x8010D410u; f_800ADA2C(c); // 8010D40C
  c->r[3]=0u+0x803D0000u; // 8010D410
  c->r[29]=c->r[3]+0xFFFFCED8u; // 8010D414
  c->r[0]=R8(c->r[29]+0x00000400u); // 8010D418
  cmps(c,0,(int32_t)c->r[0],0); // 8010D41C
  if (!crb(c,2)) { goto L_8010D42C; } // 8010D420
  c->r[3]=0u+0x00000001u; // 8010D424
  goto L_8010D4C8; // 8010D428
L_8010D42C:;
  c->r[27]=0u+0x00000000u; // 8010D42C
  c->r[30]=0u+0x00000001u; // 8010D430
  c->r[31]=0u+0x00000000u; // 8010D434
L_8010D438:;
  c->r[0]=R8(c->r[29]+0x00000400u); // 8010D438
  cmps(c,6,(int32_t)c->r[0],0); // 8010D43C
  if (crb(c,26)) { goto L_8010D4A4; } // 8010D440
  c->r[0]=rotl(c->r[27],0)&0x000000FFu; // 8010D444
  cmpu(c,1,c->r[0],0x00000010u); // 8010D448
  if (crb(c,5)) { goto L_8010D4A4; } // 8010D44C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010D450
  c->r[28]=c->r[29]+c->r[0]; // 8010D454
  c->r[0]=R8(c->r[29]+c->r[0]); // 8010D458
  cmps(c,0,(int32_t)c->r[0],0); // 8010D45C
  if (crb(c,2)) { goto L_8010D4A4; } // 8010D460
  if (crb(c,26)) { goto L_8010D494; } // 8010D464
  if (crb(c,5)) { goto L_8010D494; } // 8010D468
  if (crb(c,2)) { goto L_8010D494; } // 8010D46C
  W8(c->r[28]+0x0000000Cu,c->r[30]); // 8010D470
  c->r[3]=c->r[28]+0x0000001Cu; // 8010D474
  c->lr=0x8010D47Cu; f_800F7900(c); // 8010D478
  c->r[0]=R8(c->r[28]+0x0000000Au); // 8010D47C
  cmpu(c,0,c->r[0],0x00000001u); // 8010D480
  if (!crb(c,2)) { goto L_8010D494; } // 8010D484
  W8(c->r[28]+0x0000000Cu,c->r[30]); // 8010D488
  c->r[3]=rotl(c->r[27],0)&0x000000FFu; // 8010D48C
  c->lr=0x8010D494u; f_8010DCFC(c); // 8010D490
L_8010D494:;
  W8(c->r[28]+0x00000000u,c->r[31]); // 8010D494
  W8(c->r[28]+0x00000010u,c->r[31]); // 8010D498
  W16(c->r[28]+0x00000016u,c->r[31]); // 8010D49C
  W16(c->r[28]+0x00000014u,c->r[31]); // 8010D4A0
L_8010D4A4:;
  c->r[27]=c->r[27]+0x00000001u; // 8010D4A4
  cmpu(c,0,c->r[27],0x00000010u); // 8010D4A8
  if (crb(c,0)) { IRQCHK(c); goto L_8010D438; } // 8010D4AC
  c->lr=0x8010D4B4u; f_8010FBB8(c); // 8010D4B0
  c->r[4]=0u+0x803D0000u; // 8010D4B4
  c->r[0]=0u+0x00000000u; // 8010D4B8
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010D4BC
  c->r[3]=0u+0x00000000u; // 8010D4C0
  W8(c->r[4]+0x00000400u,c->r[0]); // 8010D4C4
L_8010D4C8:;
  c->r[11]=c->r[1]+0x00000020u; // 8010D4C8
  c->lr=0x8010D4D0u; f_800ADA78(c); // 8010D4CC
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D4D0
  c->lr=c->r[0]; // 8010D4D4
  c->r[1]=c->r[1]+0x00000020u; // 8010D4D8
  return; // 8010D4DC
}

// HID_HostAddDev
void f_8010D4E0(Ctx* __restrict c) {
  trace_call(0x8010D4E0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D4E0
  c->r[0]=c->lr; // 8010D4E4
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D4E8
  c->r[11]=c->r[1]+0x00000020u; // 8010D4EC
  c->lr=0x8010D4F4u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010D4F0
  c->r[31]=0u+0x803D0000u; // 8010D4F4
  c->r[26]=c->r[3]|c->r[3]; // 8010D4F8
  c->r[31]=c->r[31]+0xFFFFCED8u; // 8010D4FC
  c->r[27]=c->r[4]|c->r[4]; // 8010D500
  c->r[0]=R8(c->r[31]+0x00000400u); // 8010D504
  c->r[28]=c->r[5]|c->r[5]; // 8010D508
  cmps(c,0,(int32_t)c->r[0],0); // 8010D50C
  if (!crb(c,2)) { goto L_8010D51C; } // 8010D510
  c->r[3]=0u+0x00000001u; // 8010D514
  goto L_8010D658; // 8010D518
L_8010D51C:;
  c->r[29]=0u+0x00000000u; // 8010D51C
L_8010D520:;
  c->r[3]=c->r[26]|c->r[26]; // 8010D520
  c->r[4]=c->r[31]+0x00000001u; // 8010D524
  c->r[5]=0u+0x00000006u; // 8010D528
  c->lr=0x8010D530u; f_800B3824(c); // 8010D52C
  cmps(c,0,(int32_t)c->r[3],0); // 8010D530
  if (crb(c,2)) { goto L_8010D548; } // 8010D534
  c->r[29]=c->r[29]+0x00000001u; // 8010D538
  c->r[31]=c->r[31]+0x00000034u; // 8010D53C
  cmps(c,0,(int32_t)c->r[29],16); // 8010D540
  if (crb(c,0)) { IRQCHK(c); goto L_8010D520; } // 8010D544
L_8010D548:;
  cmps(c,0,(int32_t)c->r[29],16); // 8010D548
  if (!crb(c,2)) { goto L_8010D5EC; } // 8010D54C
  c->r[3]=0u+0x803D0000u; // 8010D550
  c->r[0]=0u+0x00000002u; // 8010D554
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010D558
  c->r[29]=0u+0x00000000u; // 8010D55C
  c->ctr=c->r[0]; // 8010D560
L_8010D564:;
  c->r[0]=R8(c->r[3]+0x00000000u); // 8010D564
  cmps(c,0,(int32_t)c->r[0],0); // 8010D568
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D56C
  c->r[0]=R8(c->r[3]+0x00000034u); // 8010D570
  c->r[29]=c->r[29]+0x00000001u; // 8010D574
  cmps(c,0,(int32_t)c->r[0],0); // 8010D578
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D57C
  c->r[0]=R8(c->r[3]+0x00000068u); // 8010D580
  c->r[29]=c->r[29]+0x00000001u; // 8010D584
  cmps(c,0,(int32_t)c->r[0],0); // 8010D588
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D58C
  c->r[0]=R8(c->r[3]+0x0000009Cu); // 8010D590
  c->r[29]=c->r[29]+0x00000001u; // 8010D594
  cmps(c,0,(int32_t)c->r[0],0); // 8010D598
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D59C
  c->r[0]=R8(c->r[3]+0x000000D0u); // 8010D5A0
  c->r[29]=c->r[29]+0x00000001u; // 8010D5A4
  cmps(c,0,(int32_t)c->r[0],0); // 8010D5A8
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D5AC
  c->r[0]=R8(c->r[3]+0x00000104u); // 8010D5B0
  c->r[29]=c->r[29]+0x00000001u; // 8010D5B4
  cmps(c,0,(int32_t)c->r[0],0); // 8010D5B8
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D5BC
  c->r[0]=R8(c->r[3]+0x00000138u); // 8010D5C0
  c->r[29]=c->r[29]+0x00000001u; // 8010D5C4
  cmps(c,0,(int32_t)c->r[0],0); // 8010D5C8
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D5CC
  c->r[0]=R8(c->r[3]+0x0000016Cu); // 8010D5D0
  c->r[29]=c->r[29]+0x00000001u; // 8010D5D4
  cmps(c,0,(int32_t)c->r[0],0); // 8010D5D8
  if (crb(c,2)) { goto L_8010D5EC; } // 8010D5DC
  c->r[3]=c->r[3]+0x000001A0u; // 8010D5E0
  c->r[29]=c->r[29]+0x00000001u; // 8010D5E4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010D564; } // 8010D5E8
L_8010D5EC:;
  cmps(c,0,(int32_t)c->r[29],16); // 8010D5EC
  if (!crb(c,2)) { goto L_8010D5FC; } // 8010D5F0
  c->r[3]=0u+0x00000003u; // 8010D5F4
  goto L_8010D658; // 8010D5F8
L_8010D5FC:;
  c->r[30]=(uint32_t)((int32_t)c->r[29]*(int32_t)52); // 8010D5FC
  c->r[31]=0u+0x803D0000u; // 8010D600
  c->r[31]=c->r[31]+0xFFFFCED8u; // 8010D604
  c->r[0]=R8(c->r[31]+c->r[30]); // 8010D608
  cmps(c,0,(int32_t)c->r[0],0); // 8010D60C
  if (!crb(c,2)) { goto L_8010D640; } // 8010D610
  c->r[0]=0u+0x00000001u; // 8010D614
  c->r[3]=c->r[31]+c->r[30]; // 8010D618
  W8(c->r[31]+c->r[30],c->r[0]); // 8010D61C
  c->r[4]=c->r[26]|c->r[26]; // 8010D620
  c->r[3]=c->r[3]+0x00000001u; // 8010D624
  c->r[5]=0u+0x00000006u; // 8010D628
  c->lr=0x8010D630u; f_800043C4(c); // 8010D62C
  c->r[3]=c->r[31]+c->r[30]; // 8010D630
  c->r[0]=0u+0x00000000u; // 8010D634
  W8(c->r[3]+0x0000000Au,c->r[0]); // 8010D638
  W8(c->r[3]+0x0000000Cu,c->r[0]); // 8010D63C
L_8010D640:;
  c->r[4]=0u+0x803D0000u; // 8010D640
  c->r[3]=0u+0x00000000u; // 8010D644
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010D648
  c->r[4]=c->r[4]+c->r[30]; // 8010D64C
  W16(c->r[4]+0x00000008u,c->r[27]); // 8010D650
  W8(c->r[28]+0x00000000u,c->r[29]); // 8010D654
L_8010D658:;
  c->r[11]=c->r[1]+0x00000020u; // 8010D658
  c->lr=0x8010D660u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010D65C
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D660
  c->lr=c->r[0]; // 8010D664
  c->r[1]=c->r[1]+0x00000020u; // 8010D668
  return; // 8010D66C
}

// HID_HostRemoveDev
void f_8010D670(Ctx* __restrict c) {
  trace_call(0x8010D670u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D670
  c->r[0]=c->lr; // 8010D674
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D678
  c->r[11]=c->r[1]+0x00000020u; // 8010D67C
  c->lr=0x8010D684u; f_800ADA2C(c); // 8010D680
  c->r[30]=0u+0x803D0000u; // 8010D684
  c->r[27]=c->r[3]|c->r[3]; // 8010D688
  c->r[30]=c->r[30]+0xFFFFCED8u; // 8010D68C
  c->r[0]=R8(c->r[30]+0x00000400u); // 8010D690
  cmps(c,6,(int32_t)c->r[0],0); // 8010D694
  if (!crb(c,26)) { goto L_8010D6A4; } // 8010D698
  c->r[3]=0u+0x00000001u; // 8010D69C
  goto L_8010D720; // 8010D6A0
L_8010D6A4:;
  cmpu(c,1,c->r[3],0x00000010u); // 8010D6A4
  if (crb(c,5)) { goto L_8010D6C0; } // 8010D6A8
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010D6AC
  c->r[0]=R8(c->r[30]+c->r[28]); // 8010D6B0
  c->r[29]=c->r[30]+c->r[28]; // 8010D6B4
  cmps(c,0,(int32_t)c->r[0],0); // 8010D6B8
  if (!crb(c,2)) { goto L_8010D6C8; } // 8010D6BC
L_8010D6C0:;
  c->r[3]=0u+0x00000005u; // 8010D6C0
  goto L_8010D720; // 8010D6C4
L_8010D6C8:;
  if (crb(c,26)) { goto L_8010D6FC; } // 8010D6C8
  if (crb(c,5)) { goto L_8010D6FC; } // 8010D6CC
  if (crb(c,2)) { goto L_8010D6FC; } // 8010D6D0
  c->r[31]=0u+0x00000001u; // 8010D6D4
  c->r[3]=c->r[29]+0x0000001Cu; // 8010D6D8
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 8010D6DC
  c->lr=0x8010D6E4u; f_800F7900(c); // 8010D6E0
  c->r[0]=R8(c->r[29]+0x0000000Au); // 8010D6E4
  cmpu(c,0,c->r[0],0x00000001u); // 8010D6E8
  if (!crb(c,2)) { goto L_8010D6FC; } // 8010D6EC
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 8010D6F0
  c->r[3]=c->r[27]|c->r[27]; // 8010D6F4
  c->lr=0x8010D6FCu; f_8010DCFC(c); // 8010D6F8
L_8010D6FC:;
  c->r[0]=0u+0x00000000u; // 8010D6FC
  c->r[3]=0u+0x803D0000u; // 8010D700
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010D704
  W8(c->r[29]+0x00000000u,c->r[0]); // 8010D708
  c->r[4]=c->r[3]+c->r[28]; // 8010D70C
  W8(c->r[4]+0x00000010u,c->r[0]); // 8010D710
  c->r[3]=0u+0x00000000u; // 8010D714
  W16(c->r[4]+0x00000016u,c->r[0]); // 8010D718
  W16(c->r[4]+0x00000014u,c->r[0]); // 8010D71C
L_8010D720:;
  c->r[11]=c->r[1]+0x00000020u; // 8010D720
  c->lr=0x8010D728u; f_800ADA78(c); // 8010D724
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D728
  c->lr=c->r[0]; // 8010D72C
  c->r[1]=c->r[1]+0x00000020u; // 8010D730
  return; // 8010D734
}

// HID_HostOpenDev
void f_8010D738(Ctx* __restrict c) {
  trace_call(0x8010D738u);
  c->r[4]=0u+0x803D0000u; // 8010D738
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010D73C
  c->r[0]=R8(c->r[4]+0x00000400u); // 8010D740
  cmps(c,0,(int32_t)c->r[0],0); // 8010D744
  if (!crb(c,2)) { goto L_8010D754; } // 8010D748
  c->r[3]=0u+0x00000001u; // 8010D74C
  return; // 8010D750
L_8010D754:;
  cmpu(c,0,c->r[3],0x00000010u); // 8010D754
  if (crb(c,1)) { goto L_8010D76C; } // 8010D758
  c->r[5]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010D75C
  c->r[0]=R8(c->r[4]+c->r[5]); // 8010D760
  cmps(c,0,(int32_t)c->r[0],0); // 8010D764
  if (!crb(c,2)) { goto L_8010D774; } // 8010D768
L_8010D76C:;
  c->r[3]=0u+0x00000005u; // 8010D76C
  return; // 8010D770
L_8010D774:;
  c->r[4]=c->r[4]+c->r[5]; // 8010D774
  c->r[0]=R8(c->r[4]+0x0000000Au); // 8010D778
  cmps(c,0,(int32_t)c->r[0],0); // 8010D77C
  if (crb(c,2)) { goto L_8010D78C; } // 8010D780
  c->r[3]=0u+0x0000000Au; // 8010D784
  return; // 8010D788
L_8010D78C:;
  c->r[0]=0u+0x00000001u; // 8010D78C
  W8(c->r[4]+0x0000000Cu,c->r[0]); // 8010D790
  f_8010FABC(c); return; // 8010D794
  return; // 8010D798
}

// HID_HostWriteDev
void f_8010D79C(Ctx* __restrict c) {
  trace_call(0x8010D79Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D79C
  c->r[0]=c->lr; // 8010D7A0
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010D7A4
  c->r[11]=c->r[1]+0x00000030u; // 8010D7A8
  c->lr=0x8010D7B0u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010D7AC
  c->r[9]=0u+0x803D0000u; // 8010D7B0
  c->r[31]=0u+0x80330000u; // 8010D7B4
  c->r[9]=c->r[9]+0xFFFFCED8u; // 8010D7B8
  c->r[25]=c->r[3]|c->r[3]; // 8010D7BC
  c->r[0]=R8(c->r[9]+0x00000400u); // 8010D7C0
  c->r[26]=c->r[4]|c->r[4]; // 8010D7C4
  c->r[27]=c->r[5]|c->r[5]; // 8010D7C8
  c->r[28]=c->r[6]|c->r[6]; // 8010D7CC
  cmps(c,0,(int32_t)c->r[0],0); // 8010D7D0
  c->r[29]=c->r[7]|c->r[7]; // 8010D7D4
  c->r[30]=c->r[8]|c->r[8]; // 8010D7D8
  c->r[31]=c->r[31]+0xFFFFC460u; // 8010D7DC
  c->r[24]=0u+0x00000000u; // 8010D7E0
  if (!crb(c,2)) { goto L_8010D804; } // 8010D7E4
  c->r[0]=R8(c->r[9]+0x00000401u); // 8010D7E8
  cmpu(c,0,c->r[0],0x00000001u); // 8010D7EC
  if (crb(c,0)) { goto L_8010D800; } // 8010D7F0
  c->r[4]=c->r[31]+0x00000000u; // 8010D7F4
  c->r[3]=0u+0x001E0000u; // 8010D7F8
  c->lr=0x8010D800u; f_800F7280(c); // 8010D7FC
L_8010D800:;
  c->r[24]=0u+0x00000001u; // 8010D800
L_8010D804:;
  cmpu(c,0,c->r[25],0x00000010u); // 8010D804
  if (crb(c,1)) { goto L_8010D824; } // 8010D808
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)52); // 8010D80C
  c->r[3]=0u+0x803D0000u; // 8010D810
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010D814
  c->r[0]=R8(c->r[3]+c->r[0]); // 8010D818
  cmps(c,0,(int32_t)c->r[0],0); // 8010D81C
  if (!crb(c,2)) { goto L_8010D848; } // 8010D820
L_8010D824:;
  c->r[3]=0u+0x803D0000u; // 8010D824
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010D828
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010D82C
  cmpu(c,0,c->r[0],0x00000001u); // 8010D830
  if (crb(c,0)) { goto L_8010D844; } // 8010D834
  c->r[4]=c->r[31]+0x00000018u; // 8010D838
  c->r[3]=0u+0x001E0000u; // 8010D83C
  c->lr=0x8010D844u; f_800F7280(c); // 8010D840
L_8010D844:;
  c->r[24]=0u+0x00000005u; // 8010D844
L_8010D848:;
  c->r[0]=(uint32_t)((int32_t)c->r[25]*(int32_t)52); // 8010D848
  c->r[4]=0u+0x803D0000u; // 8010D84C
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010D850
  c->r[3]=c->r[4]+c->r[0]; // 8010D854
  c->r[0]=R8(c->r[3]+0x0000000Au); // 8010D858
  cmpu(c,0,c->r[0],0x00000001u); // 8010D85C
  if (crb(c,2)) { goto L_8010D884; } // 8010D860
  c->r[0]=R8(c->r[4]+0x00000401u); // 8010D864
  cmpu(c,0,c->r[0],0x00000001u); // 8010D868
  if (crb(c,0)) { goto L_8010D880; } // 8010D86C
  c->r[5]=c->r[25]|c->r[25]; // 8010D870
  c->r[4]=c->r[31]+0x00000030u; // 8010D874
  c->r[3]=0u+0x001E0000u; // 8010D878
  c->lr=0x8010D880u; f_800F72A0(c); // 8010D87C
L_8010D880:;
  c->r[24]=0u+0x00000004u; // 8010D880
L_8010D884:;
  cmps(c,0,(int32_t)c->r[24],0); // 8010D884
  if (crb(c,2)) { goto L_8010D8A0; } // 8010D888
  cmps(c,0,(int32_t)c->r[30],0); // 8010D88C
  if (crb(c,2)) { goto L_8010D8C0; } // 8010D890
  c->r[3]=c->r[30]|c->r[30]; // 8010D894
  c->lr=0x8010D89Cu; f_800F47C0(c); // 8010D898
  goto L_8010D8C0; // 8010D89C
L_8010D8A0:;
  c->r[3]=c->r[25]|c->r[25]; // 8010D8A0
  c->r[4]=c->r[26]|c->r[26]; // 8010D8A4
  c->r[5]=c->r[27]|c->r[27]; // 8010D8A8
  c->r[6]=c->r[28]|c->r[28]; // 8010D8AC
  c->r[7]=c->r[29]|c->r[29]; // 8010D8B0
  c->r[8]=c->r[30]|c->r[30]; // 8010D8B4
  c->lr=0x8010D8BCu; f_8010F820(c); // 8010D8B8
  c->r[24]=c->r[3]|c->r[3]; // 8010D8BC
L_8010D8C0:;
  c->r[11]=c->r[1]+0x00000030u; // 8010D8C0
  c->r[3]=c->r[24]|c->r[24]; // 8010D8C4
  c->lr=0x8010D8CCu; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010D8C8
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010D8CC
  c->lr=c->r[0]; // 8010D8D0
  c->r[1]=c->r[1]+0x00000030u; // 8010D8D4
  return; // 8010D8D8
}

// HID_HostCloseDev
void f_8010D8DC(Ctx* __restrict c) {
  trace_call(0x8010D8DCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D8DC
  c->r[0]=c->lr; // 8010D8E0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D8E4
  c->r[11]=c->r[1]+0x00000020u; // 8010D8E8
  c->lr=0x8010D8F0u; f_800ADA2C(c); // 8010D8EC
  c->r[30]=0u+0x803D0000u; // 8010D8F0
  c->r[27]=c->r[3]|c->r[3]; // 8010D8F4
  c->r[30]=c->r[30]+0xFFFFCED8u; // 8010D8F8
  c->r[0]=R8(c->r[30]+0x00000400u); // 8010D8FC
  cmps(c,0,(int32_t)c->r[0],0); // 8010D900
  if (!crb(c,2)) { goto L_8010D910; } // 8010D904
  c->r[3]=0u+0x00000001u; // 8010D908
  goto L_8010D964; // 8010D90C
L_8010D910:;
  cmpu(c,0,c->r[3],0x00000010u); // 8010D910
  if (crb(c,1)) { goto L_8010D92C; } // 8010D914
  c->r[28]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010D918
  c->r[0]=R8(c->r[30]+c->r[28]); // 8010D91C
  c->r[29]=c->r[30]+c->r[28]; // 8010D920
  cmps(c,0,(int32_t)c->r[0],0); // 8010D924
  if (!crb(c,2)) { goto L_8010D934; } // 8010D928
L_8010D92C:;
  c->r[3]=0u+0x00000005u; // 8010D92C
  goto L_8010D964; // 8010D930
L_8010D934:;
  c->r[31]=0u+0x00000001u; // 8010D934
  c->r[3]=c->r[29]+0x0000001Cu; // 8010D938
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 8010D93C
  c->lr=0x8010D944u; f_800F7900(c); // 8010D940
  c->r[0]=R8(c->r[29]+0x0000000Au); // 8010D944
  cmpu(c,0,c->r[0],0x00000001u); // 8010D948
  if (crb(c,2)) { goto L_8010D958; } // 8010D94C
  c->r[3]=0u+0x00000004u; // 8010D950
  goto L_8010D964; // 8010D954
L_8010D958:;
  W8(c->r[29]+0x0000000Cu,c->r[31]); // 8010D958
  c->r[3]=c->r[27]|c->r[27]; // 8010D95C
  c->lr=0x8010D964u; f_8010DCFC(c); // 8010D960
L_8010D964:;
  c->r[11]=c->r[1]+0x00000020u; // 8010D964
  c->lr=0x8010D96Cu; f_800ADA78(c); // 8010D968
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010D96C
  c->lr=c->r[0]; // 8010D970
  c->r[1]=c->r[1]+0x00000020u; // 8010D974
  return; // 8010D978
}

// HID_HostSetSecurityLevel
void f_8010D97C(Ctx* __restrict c) {
  trace_call(0x8010D97Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010D97C
  c->r[0]=c->lr; // 8010D980
  c->r[5]=0u+0x00000020u; // 8010D984
  c->r[7]=0u+0x00000011u; // 8010D988
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010D98C
  c->r[8]=0u+0x00000006u; // 8010D990
  c->r[9]=0u+0x00000001u; // 8010D994
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010D998
  c->r[31]=0u+0x80330000u; // 8010D99C
  c->r[31]=c->r[31]+0xFFFFC460u; // 8010D9A0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010D9A4
  c->r[30]=c->r[4]|c->r[4]; // 8010D9A8
  c->r[6]=c->r[30]|c->r[30]; // 8010D9AC
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010D9B0
  c->r[29]=c->r[3]|c->r[3]; // 8010D9B4
  c->r[3]=0u+0x00000000u; // 8010D9B8
  c->r[4]=c->r[29]|c->r[29]; // 8010D9BC
  c->lr=0x8010D9C4u; f_80104E38(c); // 8010D9C0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010D9C4
  if (!crb(c,2)) { goto L_8010D9F4; } // 8010D9C8
  c->r[3]=0u+0x803D0000u; // 8010D9CC
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010D9D0
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010D9D4
  cmpu(c,0,c->r[0],0x00000001u); // 8010D9D8
  if (crb(c,0)) { goto L_8010D9EC; } // 8010D9DC
  c->r[4]=c->r[31]+0x00000054u; // 8010D9E0
  c->r[3]=0u+0x001E0000u; // 8010D9E4
  c->lr=0x8010D9ECu; f_800F7280(c); // 8010D9E8
L_8010D9EC:;
  c->r[3]=0u+0x00000003u; // 8010D9EC
  goto L_8010DB88; // 8010D9F0
L_8010D9F4:;
  c->r[4]=c->r[29]|c->r[29]; // 8010D9F4
  c->r[6]=c->r[30]|c->r[30]; // 8010D9F8
  c->r[3]=0u+0x00000001u; // 8010D9FC
  c->r[5]=0u+0x00000020u; // 8010DA00
  c->r[7]=0u+0x00000011u; // 8010DA04
  c->r[8]=0u+0x00000006u; // 8010DA08
  c->r[9]=0u+0x00000001u; // 8010DA0C
  c->lr=0x8010DA14u; f_80104E38(c); // 8010DA10
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DA14
  if (!crb(c,2)) { goto L_8010DA44; } // 8010DA18
  c->r[3]=0u+0x803D0000u; // 8010DA1C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DA20
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DA24
  cmpu(c,0,c->r[0],0x00000001u); // 8010DA28
  if (crb(c,0)) { goto L_8010DA3C; } // 8010DA2C
  c->r[4]=c->r[31]+0x00000074u; // 8010DA30
  c->r[3]=0u+0x001E0000u; // 8010DA34
  c->lr=0x8010DA3Cu; f_800F7280(c); // 8010DA38
L_8010DA3C:;
  c->r[3]=0u+0x00000003u; // 8010DA3C
  goto L_8010DB88; // 8010DA40
L_8010DA44:;
  c->r[4]=c->r[29]|c->r[29]; // 8010DA44
  c->r[3]=0u+0x00000000u; // 8010DA48
  c->r[5]=0u+0x00000021u; // 8010DA4C
  c->r[6]=0u+0x00000000u; // 8010DA50
  c->r[7]=0u+0x00000011u; // 8010DA54
  c->r[8]=0u+0x00000006u; // 8010DA58
  c->r[9]=0u+0x00000002u; // 8010DA5C
  c->lr=0x8010DA64u; f_80104E38(c); // 8010DA60
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DA64
  if (!crb(c,2)) { goto L_8010DA94; } // 8010DA68
  c->r[3]=0u+0x803D0000u; // 8010DA6C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DA70
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DA74
  cmpu(c,0,c->r[0],0x00000001u); // 8010DA78
  if (crb(c,0)) { goto L_8010DA8C; } // 8010DA7C
  c->r[4]=c->r[31]+0x00000094u; // 8010DA80
  c->r[3]=0u+0x001E0000u; // 8010DA84
  c->lr=0x8010DA8Cu; f_800F7280(c); // 8010DA88
L_8010DA8C:;
  c->r[3]=0u+0x00000003u; // 8010DA8C
  goto L_8010DB88; // 8010DA90
L_8010DA94:;
  c->r[4]=c->r[29]|c->r[29]; // 8010DA94
  c->r[3]=0u+0x00000001u; // 8010DA98
  c->r[5]=0u+0x00000021u; // 8010DA9C
  c->r[6]=0u+0x00000000u; // 8010DAA0
  c->r[7]=0u+0x00000011u; // 8010DAA4
  c->r[8]=0u+0x00000006u; // 8010DAA8
  c->r[9]=0u+0x00000002u; // 8010DAAC
  c->lr=0x8010DAB4u; f_80104E38(c); // 8010DAB0
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DAB4
  if (!crb(c,2)) { goto L_8010DAE4; } // 8010DAB8
  c->r[3]=0u+0x803D0000u; // 8010DABC
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DAC0
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DAC4
  cmpu(c,0,c->r[0],0x00000001u); // 8010DAC8
  if (crb(c,0)) { goto L_8010DADC; } // 8010DACC
  c->r[4]=c->r[31]+0x000000B4u; // 8010DAD0
  c->r[3]=0u+0x001E0000u; // 8010DAD4
  c->lr=0x8010DADCu; f_800F7280(c); // 8010DAD8
L_8010DADC:;
  c->r[3]=0u+0x00000003u; // 8010DADC
  goto L_8010DB88; // 8010DAE0
L_8010DAE4:;
  c->r[4]=c->r[29]|c->r[29]; // 8010DAE4
  c->r[3]=0u+0x00000001u; // 8010DAE8
  c->r[5]=0u+0x00000022u; // 8010DAEC
  c->r[6]=0u+0x00000000u; // 8010DAF0
  c->r[7]=0u+0x00000013u; // 8010DAF4
  c->r[8]=0u+0x00000006u; // 8010DAF8
  c->r[9]=0u+0x00000000u; // 8010DAFC
  c->lr=0x8010DB04u; f_80104E38(c); // 8010DB00
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DB04
  if (!crb(c,2)) { goto L_8010DB34; } // 8010DB08
  c->r[3]=0u+0x803D0000u; // 8010DB0C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DB10
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DB14
  cmpu(c,0,c->r[0],0x00000001u); // 8010DB18
  if (crb(c,0)) { goto L_8010DB2C; } // 8010DB1C
  c->r[4]=c->r[31]+0x000000D4u; // 8010DB20
  c->r[3]=0u+0x001E0000u; // 8010DB24
  c->lr=0x8010DB2Cu; f_800F7280(c); // 8010DB28
L_8010DB2C:;
  c->r[3]=0u+0x00000003u; // 8010DB2C
  goto L_8010DB88; // 8010DB30
L_8010DB34:;
  c->r[4]=c->r[29]|c->r[29]; // 8010DB34
  c->r[3]=0u+0x00000000u; // 8010DB38
  c->r[5]=0u+0x00000022u; // 8010DB3C
  c->r[6]=0u+0x00000000u; // 8010DB40
  c->r[7]=0u+0x00000013u; // 8010DB44
  c->r[8]=0u+0x00000006u; // 8010DB48
  c->r[9]=0u+0x00000000u; // 8010DB4C
  c->lr=0x8010DB54u; f_80104E38(c); // 8010DB50
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DB54
  if (!crb(c,2)) { goto L_8010DB84; } // 8010DB58
  c->r[3]=0u+0x803D0000u; // 8010DB5C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DB60
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DB64
  cmpu(c,0,c->r[0],0x00000001u); // 8010DB68
  if (crb(c,0)) { goto L_8010DB7C; } // 8010DB6C
  c->r[4]=c->r[31]+0x000000F4u; // 8010DB70
  c->r[3]=0u+0x001E0000u; // 8010DB74
  c->lr=0x8010DB7Cu; f_800F7280(c); // 8010DB78
L_8010DB7C:;
  c->r[3]=0u+0x00000003u; // 8010DB7C
  goto L_8010DB88; // 8010DB80
L_8010DB84:;
  c->r[3]=0u+0x00000000u; // 8010DB84
L_8010DB88:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010DB88
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010DB8C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010DB90
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010DB94
  c->lr=c->r[0]; // 8010DB98
  c->r[1]=c->r[1]+0x00000020u; // 8010DB9C
  return; // 8010DBA0
}

// hidh_conn_reg
void f_8010DBA4(Ctx* __restrict c) {
  trace_call(0x8010DBA4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DBA4
  c->r[0]=c->lr; // 8010DBA8
  c->r[3]=0u+0x00010000u; // 8010DBAC
  c->r[6]=0u+0x00000001u; // 8010DBB0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DBB4
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010DBB8
  c->r[5]=0u+0x00000280u; // 8010DBBC
  c->r[3]=0u+0x00000011u; // 8010DBC0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010DBC4
  c->r[31]=0u+0x802D0000u; // 8010DBC8
  c->r[4]=c->r[31]+0xFFFF9B38u; // 8010DBCC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010DBD0
  c->r[30]=0u+0x803D0000u; // 8010DBD4
  c->r[30]=c->r[30]+0xFFFFCED8u; // 8010DBD8
  W8(c->r[30]+0x00000346u,c->r[6]); // 8010DBDC
  W16(c->r[30]+0x00000348u,c->r[5]); // 8010DBE0
  W8(c->r[30]+0x00000364u,c->r[6]); // 8010DBE4
  W16(c->r[30]+0x00000366u,c->r[0]); // 8010DBE8
  c->lr=0x8010DBF0u; f_8010FBE4(c); // 8010DBEC
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DBF0
  if (!crb(c,2)) { goto L_8010DC1C; } // 8010DBF4
  c->r[0]=R8(c->r[30]+0x00000401u); // 8010DBF8
  cmpu(c,0,c->r[0],0x00000001u); // 8010DBFC
  if (crb(c,0)) { goto L_8010DC14; } // 8010DC00
  c->r[4]=0u+0x80330000u; // 8010DC04
  c->r[3]=0u+0x001E0000u; // 8010DC08
  c->r[4]=c->r[4]+0xFFFFC578u; // 8010DC0C
  c->lr=0x8010DC14u; f_800F7280(c); // 8010DC10
L_8010DC14:;
  c->r[3]=0u+0x0000000Eu; // 8010DC14
  goto L_8010DCE4; // 8010DC18
L_8010DC1C:;
  c->r[4]=c->r[31]+0xFFFF9B38u; // 8010DC1C
  c->r[3]=0u+0x00000013u; // 8010DC20
  c->lr=0x8010DC28u; f_8010FBE4(c); // 8010DC24
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010DC28
  if (!crb(c,2)) { goto L_8010DC5C; } // 8010DC2C
  c->r[3]=0u+0x00000011u; // 8010DC30
  c->lr=0x8010DC38u; f_8010FD80(c); // 8010DC34
  c->r[0]=R8(c->r[30]+0x00000401u); // 8010DC38
  cmpu(c,0,c->r[0],0x00000001u); // 8010DC3C
  if (crb(c,0)) { goto L_8010DC54; } // 8010DC40
  c->r[4]=0u+0x80330000u; // 8010DC44
  c->r[3]=0u+0x001E0000u; // 8010DC48
  c->r[4]=c->r[4]+0xFFFFC598u; // 8010DC4C
  c->lr=0x8010DC54u; f_800F7280(c); // 8010DC50
L_8010DC54:;
  c->r[3]=0u+0x0000000Eu; // 8010DC54
  goto L_8010DCE4; // 8010DC58
L_8010DC5C:;
  c->r[0]=0u+0x00000000u; // 8010DC5C
  c->r[3]=0u+0x00000000u; // 8010DC60
  W8(c->r[30]+0x00000000u,c->r[0]); // 8010DC64
  W8(c->r[30]+0x00000010u,c->r[0]); // 8010DC68
  W8(c->r[30]+0x00000034u,c->r[0]); // 8010DC6C
  W8(c->r[30]+0x00000044u,c->r[0]); // 8010DC70
  W8(c->r[30]+0x00000068u,c->r[0]); // 8010DC74
  W8(c->r[30]+0x00000078u,c->r[0]); // 8010DC78
  W8(c->r[30]+0x0000009Cu,c->r[0]); // 8010DC7C
  W8(c->r[30]+0x000000ACu,c->r[0]); // 8010DC80
  W8(c->r[30]+0x000000D0u,c->r[0]); // 8010DC84
  W8(c->r[30]+0x000000E0u,c->r[0]); // 8010DC88
  W8(c->r[30]+0x00000104u,c->r[0]); // 8010DC8C
  W8(c->r[30]+0x00000114u,c->r[0]); // 8010DC90
  W8(c->r[30]+0x00000138u,c->r[0]); // 8010DC94
  W8(c->r[30]+0x00000148u,c->r[0]); // 8010DC98
  W8(c->r[30]+0x0000016Cu,c->r[0]); // 8010DC9C
  W8(c->r[30]+0x0000017Cu,c->r[0]); // 8010DCA0
  W8(c->r[30]+0x000001A0u,c->r[0]); // 8010DCA4
  W8(c->r[30]+0x000001B0u,c->r[0]); // 8010DCA8
  W8(c->r[30]+0x000001D4u,c->r[0]); // 8010DCAC
  W8(c->r[30]+0x000001E4u,c->r[0]); // 8010DCB0
  W8(c->r[30]+0x00000208u,c->r[0]); // 8010DCB4
  W8(c->r[30]+0x00000218u,c->r[0]); // 8010DCB8
  W8(c->r[30]+0x0000023Cu,c->r[0]); // 8010DCBC
  W8(c->r[30]+0x0000024Cu,c->r[0]); // 8010DCC0
  W8(c->r[30]+0x00000270u,c->r[0]); // 8010DCC4
  W8(c->r[30]+0x00000280u,c->r[0]); // 8010DCC8
  W8(c->r[30]+0x000002A4u,c->r[0]); // 8010DCCC
  W8(c->r[30]+0x000002B4u,c->r[0]); // 8010DCD0
  W8(c->r[30]+0x000002D8u,c->r[0]); // 8010DCD4
  W8(c->r[30]+0x000002E8u,c->r[0]); // 8010DCD8
  W8(c->r[30]+0x0000030Cu,c->r[0]); // 8010DCDC
  W8(c->r[30]+0x0000031Cu,c->r[0]); // 8010DCE0
L_8010DCE4:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DCE4
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010DCE8
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010DCEC
  c->lr=c->r[0]; // 8010DCF0
  c->r[1]=c->r[1]+0x00000010u; // 8010DCF4
  return; // 8010DCF8
}

// hidh_conn_disconnect
void f_8010DCFC(Ctx* __restrict c) {
  trace_call(0x8010DCFCu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DCFC
  c->r[0]=c->lr; // 8010DD00
  c->r[4]=0u+0x803D0000u; // 8010DD04
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DD08
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010DD0C
  c->r[3]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010DD10
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010DD14
  c->r[0]=R8(c->r[4]+0x00000401u); // 8010DD18
  c->r[31]=c->r[4]+c->r[3]; // 8010DD1C
  cmpu(c,0,c->r[0],0x00000004u); // 8010DD20
  if (crb(c,0)) { goto L_8010DD3C; } // 8010DD24
  c->r[3]=0u+0x001E0000u; // 8010DD28
  c->r[4]=0u+0x80330000u; // 8010DD2C
  c->r[3]=c->r[3]+0x00000003u; // 8010DD30
  c->r[4]=c->r[4]+0xFFFFC5BCu; // 8010DD34
  c->lr=0x8010DD3Cu; f_800F7280(c); // 8010DD38
L_8010DD3C:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 8010DD3C
  cmps(c,0,(int32_t)c->r[0],0); // 8010DD40
  if (!crb(c,2)) { goto L_8010DD54; } // 8010DD44
  c->r[0]=R16(c->r[31]+0x00000016u); // 8010DD48
  cmps(c,0,(int32_t)c->r[0],0); // 8010DD4C
  if (crb(c,2)) { goto L_8010DD80; } // 8010DD50
L_8010DD54:;
  c->r[0]=0u+0x00000005u; // 8010DD54
  W8(c->r[31]+0x00000010u,c->r[0]); // 8010DD58
  c->r[3]=R16(c->r[31]+0x00000016u); // 8010DD5C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DD60
  if (crb(c,2)) { goto L_8010DD6C; } // 8010DD64
  c->lr=0x8010DD6Cu; f_8011035C(c); // 8010DD68
L_8010DD6C:;
  c->r[3]=R16(c->r[31]+0x00000014u); // 8010DD6C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DD70
  if (crb(c,2)) { goto L_8010DD88; } // 8010DD74
  c->lr=0x8010DD7Cu; f_8011035C(c); // 8010DD78
  goto L_8010DD88; // 8010DD7C
L_8010DD80:;
  c->r[0]=0u+0x00000000u; // 8010DD80
  W8(c->r[31]+0x00000010u,c->r[0]); // 8010DD84
L_8010DD88:;
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010DD88
  c->r[3]=0u+0x00000000u; // 8010DD8C
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DD90
  c->lr=c->r[0]; // 8010DD94
  c->r[1]=c->r[1]+0x00000010u; // 8010DD98
  return; // 8010DD9C
}

// hidh_sec_check_complete_term
void f_8010DDA0(Ctx* __restrict c) {
  trace_call(0x8010DDA0u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DDA0
  c->r[0]=c->lr; // 8010DDA4
  c->r[3]=0u+0x4EC50000u; // 8010DDA8
  cmps(c,0,(int32_t)c->r[5],0); // 8010DDAC
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010DDB0
  c->r[3]=c->r[3]+0xFFFFEC4Fu; // 8010DDB4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010DDB8
  c->r[31]=0u+0x803D0000u; // 8010DDBC
  c->r[31]=c->r[31]+0xFFFFCED8u; // 8010DDC0
  c->r[0]=c->r[4]-c->r[31]; // 8010DDC4
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010DDC8
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8010DDCC
  c->r[30]=c->r[4]|c->r[4]; // 8010DDD0
  c->r[0]=sraw(c,c->r[0],4); // 8010DDD4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8010DDD8
  c->r[0]=c->r[0]+c->r[3]; // 8010DDDC
  c->r[6]=rotl(c->r[0],0)&0x000000FFu; // 8010DDE0
  if (!crb(c,2)) { goto L_8010DE2C; } // 8010DDE4
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010DDE8
  cmpu(c,0,c->r[0],0x00000006u); // 8010DDEC
  if (!crb(c,2)) { goto L_8010DE2C; } // 8010DDF0
  c->r[3]=0u+0x00000000u; // 8010DDF4
  c->r[0]=0u+0x00000002u; // 8010DDF8
  W16(c->r[4]+0x0000001Au,c->r[3]); // 8010DDFC
  c->r[3]=c->r[4]+0x00000001u; // 8010DE00
  c->r[5]=R16(c->r[30]+0x00000014u); // 8010DE04
  c->r[6]=0u+0x00000000u; // 8010DE08
  W8(c->r[4]+0x00000010u,c->r[0]); // 8010DE0C
  c->r[7]=0u+0x00000000u; // 8010DE10
  c->r[4]=R8(c->r[4]+0x00000012u); // 8010DE14
  c->lr=0x8010DE1Cu; f_80110044(c); // 8010DE18
  c->r[3]=R16(c->r[30]+0x00000014u); // 8010DE1C
  c->r[4]=c->r[31]+0x00000344u; // 8010DE20
  c->lr=0x8010DE28u; f_801101D4(c); // 8010DE24
  goto L_8010DEB8; // 8010DE28
L_8010DE2C:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010DE2C
  if (crb(c,2)) { goto L_8010DEB8; } // 8010DE30
  c->r[0]=0u+0x0000000Fu; // 8010DE34
  c->r[3]=0u+0x803D0000u; // 8010DE38
  W16(c->r[4]+0x0000001Au,c->r[0]); // 8010DE3C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DE40
  c->r[4]=(uint32_t)((int32_t)c->r[6]*(int32_t)52); // 8010DE44
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DE48
  cmpu(c,0,c->r[0],0x00000004u); // 8010DE4C
  c->r[31]=c->r[3]+c->r[4]; // 8010DE50
  if (crb(c,0)) { goto L_8010DE6C; } // 8010DE54
  c->r[3]=0u+0x001E0000u; // 8010DE58
  c->r[4]=0u+0x80330000u; // 8010DE5C
  c->r[3]=c->r[3]+0x00000003u; // 8010DE60
  c->r[4]=c->r[4]+0xFFFFC5BCu; // 8010DE64
  c->lr=0x8010DE6Cu; f_800F7280(c); // 8010DE68
L_8010DE6C:;
  c->r[0]=R16(c->r[31]+0x00000014u); // 8010DE6C
  cmps(c,0,(int32_t)c->r[0],0); // 8010DE70
  if (!crb(c,2)) { goto L_8010DE84; } // 8010DE74
  c->r[0]=R16(c->r[31]+0x00000016u); // 8010DE78
  cmps(c,0,(int32_t)c->r[0],0); // 8010DE7C
  if (crb(c,2)) { goto L_8010DEB0; } // 8010DE80
L_8010DE84:;
  c->r[0]=0u+0x00000005u; // 8010DE84
  W8(c->r[31]+0x00000010u,c->r[0]); // 8010DE88
  c->r[3]=R16(c->r[31]+0x00000016u); // 8010DE8C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DE90
  if (crb(c,2)) { goto L_8010DE9C; } // 8010DE94
  c->lr=0x8010DE9Cu; f_8011035C(c); // 8010DE98
L_8010DE9C:;
  c->r[3]=R16(c->r[31]+0x00000014u); // 8010DE9C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DEA0
  if (crb(c,2)) { goto L_8010DEB8; } // 8010DEA4
  c->lr=0x8010DEACu; f_8011035C(c); // 8010DEA8
  goto L_8010DEB8; // 8010DEAC
L_8010DEB0:;
  c->r[0]=0u+0x00000000u; // 8010DEB0
  W8(c->r[31]+0x00000010u,c->r[0]); // 8010DEB4
L_8010DEB8:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010DEB8
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010DEBC
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010DEC0
  c->lr=c->r[0]; // 8010DEC4
  c->r[1]=c->r[1]+0x00000010u; // 8010DEC8
  return; // 8010DECC
}

// hidh_l2cif_connect_ind
void f_8010DED0(Ctx* __restrict c) {
  trace_call(0x8010DED0u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010DED0
  c->r[0]=c->lr; // 8010DED4
  W32(c->r[1]+0x00000034u,c->r[0]); // 8010DED8
  c->r[11]=c->r[1]+0x00000030u; // 8010DEDC
  c->lr=0x8010DEE4u; { W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010DEE0
  c->r[7]=0u+0x803D0000u; // 8010DEE4
  c->r[31]=0u+0x80330000u; // 8010DEE8
  c->r[7]=c->r[7]+0xFFFFCED8u; // 8010DEEC
  c->r[26]=c->r[3]|c->r[3]; // 8010DEF0
  c->r[0]=R8(c->r[7]+0x00000401u); // 8010DEF4
  c->r[27]=c->r[4]|c->r[4]; // 8010DEF8
  c->r[28]=c->r[5]|c->r[5]; // 8010DEFC
  c->r[29]=c->r[6]|c->r[6]; // 8010DF00
  cmpu(c,0,c->r[0],0x00000004u); // 8010DF04
  c->r[31]=c->r[31]+0xFFFFC578u; // 8010DF08
  c->r[25]=0u+0x00000001u; // 8010DF0C
  if (crb(c,0)) { goto L_8010DF28; } // 8010DF10
  c->r[3]=0u+0x001E0000u; // 8010DF14
  c->r[6]=c->r[27]|c->r[27]; // 8010DF18
  c->r[4]=c->r[31]+0x00000058u; // 8010DF1C
  c->r[3]=c->r[3]+0x00000003u; // 8010DF20
  c->lr=0x8010DF28u; f_800F72C0(c); // 8010DF24
L_8010DF28:;
  c->r[30]=0u+0x803D0000u; // 8010DF28
  c->r[24]=0u+0x00000000u; // 8010DF2C
  c->r[30]=c->r[30]+0xFFFFCED8u; // 8010DF30
L_8010DF34:;
  c->r[0]=R8(c->r[30]+0x00000000u); // 8010DF34
  cmps(c,0,(int32_t)c->r[0],0); // 8010DF38
  if (crb(c,2)) { goto L_8010DF58; } // 8010DF3C
  c->r[3]=c->r[26]|c->r[26]; // 8010DF40
  c->r[4]=c->r[30]+0x00000001u; // 8010DF44
  c->r[5]=0u+0x00000006u; // 8010DF48
  c->lr=0x8010DF50u; f_800B3824(c); // 8010DF4C
  cmps(c,0,(int32_t)c->r[3],0); // 8010DF50
  if (crb(c,2)) { goto L_8010DF68; } // 8010DF54
L_8010DF58:;
  c->r[24]=c->r[24]+0x00000001u; // 8010DF58
  c->r[30]=c->r[30]+0x00000034u; // 8010DF5C
  cmps(c,0,(int32_t)c->r[24],16); // 8010DF60
  if (crb(c,0)) { IRQCHK(c); goto L_8010DF34; } // 8010DF64
L_8010DF68:;
  cmps(c,0,(int32_t)c->r[24],16); // 8010DF68
  if (!crb(c,2)) { goto L_8010DF8C; } // 8010DF6C
  c->r[3]=c->r[26]|c->r[26]; // 8010DF70
  c->r[4]=c->r[29]|c->r[29]; // 8010DF74
  c->r[5]=c->r[27]|c->r[27]; // 8010DF78
  c->r[6]=0u+0x00000003u; // 8010DF7C
  c->r[7]=0u+0x00000000u; // 8010DF80
  c->lr=0x8010DF88u; f_80110044(c); // 8010DF84
  goto L_8010E110; // 8010DF88
L_8010DF8C:;
  c->r[0]=(uint32_t)((int32_t)c->r[24]*(int32_t)52); // 8010DF8C
  c->r[3]=0u+0x803D0000u; // 8010DF90
  cmpu(c,0,c->r[28],0x00000013u); // 8010DF94
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DF98
  c->r[30]=c->r[3]+c->r[0]; // 8010DF9C
  if (!crb(c,2)) { goto L_8010E008; } // 8010DFA0
  c->r[0]=R16(c->r[30]+0x00000014u); // 8010DFA4
  cmps(c,0,(int32_t)c->r[0],0); // 8010DFA8
  if (!crb(c,2)) { goto L_8010DFD0; } // 8010DFAC
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DFB0
  cmpu(c,0,c->r[0],0x00000002u); // 8010DFB4
  if (crb(c,0)) { goto L_8010DFCC; } // 8010DFB8
  c->r[3]=0u+0x001E0000u; // 8010DFBC
  c->r[4]=c->r[31]+0x0000008Cu; // 8010DFC0
  c->r[3]=c->r[3]+0x00000001u; // 8010DFC4
  c->lr=0x8010DFCCu; f_800F7280(c); // 8010DFC8
L_8010DFCC:;
  c->r[25]=0u+0x00000000u; // 8010DFCC
L_8010DFD0:;
  c->r[5]=R8(c->r[30]+0x00000010u); // 8010DFD0
  cmpu(c,0,c->r[5],0x00000002u); // 8010DFD4
  if (crb(c,2)) { goto L_8010E034; } // 8010DFD8
  c->r[3]=0u+0x803D0000u; // 8010DFDC
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010DFE0
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010DFE4
  cmpu(c,0,c->r[0],0x00000002u); // 8010DFE8
  if (crb(c,0)) { goto L_8010E000; } // 8010DFEC
  c->r[3]=0u+0x001E0000u; // 8010DFF0
  c->r[4]=c->r[31]+0x000000C0u; // 8010DFF4
  c->r[3]=c->r[3]+0x00000001u; // 8010DFF8
  c->lr=0x8010E000u; f_800F72A0(c); // 8010DFFC
L_8010E000:;
  c->r[25]=0u+0x00000000u; // 8010E000
  goto L_8010E034; // 8010E004
L_8010E008:;
  c->r[5]=R8(c->r[30]+0x00000010u); // 8010E008
  cmps(c,0,(int32_t)c->r[5],0); // 8010E00C
  if (crb(c,2)) { goto L_8010E034; } // 8010E010
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E014
  cmpu(c,0,c->r[0],0x00000002u); // 8010E018
  if (crb(c,0)) { goto L_8010E030; } // 8010E01C
  c->r[3]=0u+0x001E0000u; // 8010E020
  c->r[4]=c->r[31]+0x000000F0u; // 8010E024
  c->r[3]=c->r[3]+0x00000001u; // 8010E028
  c->lr=0x8010E030u; f_800F72A0(c); // 8010E02C
L_8010E030:;
  c->r[25]=0u+0x00000000u; // 8010E030
L_8010E034:;
  cmps(c,0,(int32_t)c->r[25],0); // 8010E034
  if (!crb(c,2)) { goto L_8010E058; } // 8010E038
  c->r[3]=c->r[26]|c->r[26]; // 8010E03C
  c->r[4]=c->r[29]|c->r[29]; // 8010E040
  c->r[5]=c->r[27]|c->r[27]; // 8010E044
  c->r[6]=0u+0x00000004u; // 8010E048
  c->r[7]=0u+0x00000000u; // 8010E04C
  c->lr=0x8010E054u; f_80110044(c); // 8010E050
  goto L_8010E110; // 8010E054
L_8010E058:;
  cmpu(c,0,c->r[28],0x00000011u); // 8010E058
  if (!crb(c,2)) { goto L_8010E0B4; } // 8010E05C
  c->r[0]=0u+0x00000000u; // 8010E060
  c->r[8]=0u+0x80110000u; // 8010E064
  W8(c->r[30]+0x00000011u,c->r[0]); // 8010E068
  c->r[7]=0u+0x00000100u; // 8010E06C
  c->r[0]=0u+0x00000006u; // 8010E070
  c->r[9]=c->r[30]|c->r[30]; // 8010E074
  W16(c->r[30]+0x00000014u,c->r[27]); // 8010E078
  c->r[3]=c->r[30]+0x00000001u; // 8010E07C
  c->r[8]=c->r[8]+0xFFFFDDA0u; // 8010E080
  c->r[4]=0u+0x00000011u; // 8010E084
  W8(c->r[30]+0x00000012u,c->r[29]); // 8010E088
  c->r[5]=0u+0x00000000u; // 8010E08C
  c->r[6]=0u+0x00000006u; // 8010E090
  W16(c->r[30]+0x0000001Au,c->r[7]); // 8010E094
  W8(c->r[30]+0x00000010u,c->r[0]); // 8010E098
  c->r[0]=R16(c->r[30]+0x00000008u); // 8010E09C
  c->r[0]=rotl(c->r[0],17)&0x00000001u; // 8010E0A0
  c->r[7]=0u-c->r[0]; // 8010E0A4
  c->r[7]=c->r[7]+0x00000002u; // 8010E0A8
  c->lr=0x8010E0B0u; f_80105B30(c); // 8010E0AC
  goto L_8010E110; // 8010E0B0
L_8010E0B4:;
  c->r[0]=0u+0x00000003u; // 8010E0B4
  c->r[3]=c->r[26]|c->r[26]; // 8010E0B8
  W8(c->r[30]+0x00000010u,c->r[0]); // 8010E0BC
  c->r[4]=c->r[29]|c->r[29]; // 8010E0C0
  c->r[5]=c->r[27]|c->r[27]; // 8010E0C4
  c->r[6]=0u+0x00000000u; // 8010E0C8
  W16(c->r[30]+0x00000016u,c->r[27]); // 8010E0CC
  c->r[7]=0u+0x00000000u; // 8010E0D0
  c->lr=0x8010E0D8u; f_80110044(c); // 8010E0D4
  c->r[26]=0u+0x803D0000u; // 8010E0D8
  c->r[3]=c->r[27]|c->r[27]; // 8010E0DC
  c->r[26]=c->r[26]+0xFFFFCED8u; // 8010E0E0
  c->r[4]=c->r[26]+0x00000344u; // 8010E0E4
  c->lr=0x8010E0ECu; f_801101D4(c); // 8010E0E8
  c->r[0]=R8(c->r[26]+0x00000401u); // 8010E0EC
  cmpu(c,0,c->r[0],0x00000004u); // 8010E0F0
  if (crb(c,0)) { goto L_8010E110; } // 8010E0F4
  c->r[3]=0u+0x001E0000u; // 8010E0F8
  c->r[5]=c->r[28]|c->r[28]; // 8010E0FC
  c->r[6]=c->r[27]|c->r[27]; // 8010E100
  c->r[4]=c->r[31]+0x00000120u; // 8010E104
  c->r[3]=c->r[3]+0x00000003u; // 8010E108
  c->lr=0x8010E110u; f_800F72C0(c); // 8010E10C
L_8010E110:;
  c->r[11]=c->r[1]+0x00000030u; // 8010E110
  c->lr=0x8010E118u; { c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010E114
  c->r[0]=R32(c->r[1]+0x00000034u); // 8010E118
  c->lr=c->r[0]; // 8010E11C
  c->r[1]=c->r[1]+0x00000030u; // 8010E120
  return; // 8010E124
}

// hidh_proc_repage_timeout
void f_8010E128(Ctx* __restrict c) {
  trace_call(0x8010E128u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E128
  c->r[0]=c->lr; // 8010E12C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E130
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010E134
  c->r[31]=c->r[3]|c->r[3]; // 8010E138
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010E13C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010E140
  c->r[29]=0u+0x803D0000u; // 8010E144
  c->r[29]=c->r[29]+0xFFFFCED8u; // 8010E148
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010E14C
  c->r[0]=R32(c->r[3]+0x00000010u); // 8010E150
  c->r[0]=rotl(c->r[0],0)&0x000000FFu; // 8010E154
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E158
  c->r[28]=c->r[29]+c->r[0]; // 8010E15C
  c->r[0]=R8(c->r[28]+0x00000010u); // 8010E160
  cmps(c,0,(int32_t)c->r[0],0); // 8010E164
  if (!crb(c,2)) { goto L_8010E20C; } // 8010E168
  c->r[5]=0u+0x00000000u; // 8010E16C
  c->r[0]=0u+0x00000100u; // 8010E170
  W16(c->r[28]+0x00000014u,c->r[5]); // 8010E174
  c->r[30]=0u+0x00000001u; // 8010E178
  c->r[4]=c->r[28]+0x00000001u; // 8010E17C
  c->r[3]=0u+0x00000011u; // 8010E180
  W16(c->r[28]+0x00000016u,c->r[5]); // 8010E184
  W16(c->r[28]+0x0000001Au,c->r[0]); // 8010E188
  W8(c->r[28]+0x00000011u,c->r[30]); // 8010E18C
  c->lr=0x8010E194u; f_8010FE10(c); // 8010E190
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8010E194
  W16(c->r[28]+0x00000014u,c->r[3]); // 8010E198
  if (!crb(c,2)) { goto L_8010E208; } // 8010E19C
  c->r[0]=R8(c->r[29]+0x00000401u); // 8010E1A0
  cmpu(c,0,c->r[0],0x00000002u); // 8010E1A4
  if (crb(c,0)) { goto L_8010E1C0; } // 8010E1A8
  c->r[3]=0u+0x001E0000u; // 8010E1AC
  c->r[4]=0u+0x80330000u; // 8010E1B0
  c->r[3]=c->r[3]+0x00000001u; // 8010E1B4
  c->r[4]=c->r[4]+0xFFFFC6DCu; // 8010E1B8
  c->lr=0x8010E1C0u; f_800F7280(c); // 8010E1BC
L_8010E1C0:;
  c->r[5]=0u+0x803D0000u; // 8010E1C0
  c->r[3]=0u+0x4EC50000u; // 8010E1C4
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010E1C8
  c->r[4]=0u+0x00000001u; // 8010E1CC
  c->r[0]=c->r[28]-c->r[5]; // 8010E1D0
  c->r[7]=c->r[3]+0xFFFFEC4Fu; // 8010E1D4
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 8010E1D8
  c->r[12]=R32(c->r[5]+0x00000340u); // 8010E1DC
  c->r[5]=0u+0x0000000Eu; // 8010E1E0
  c->r[6]=0u+0x00000000u; // 8010E1E4
  c->r[0]=sraw(c,c->r[0],4); // 8010E1E8
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8010E1EC
  c->r[0]=c->r[0]+c->r[3]; // 8010E1F0
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[0])>>32); // 8010E1F4
  c->r[3]=rotl(c->r[0],28)&0x000000FFu; // 8010E1F8
  c->ctr=c->r[12]; // 8010E1FC
  if (true) { c->lr=0x8010E204u; dispatch(c,c->ctr); } // 8010E200
  goto L_8010E20C; // 8010E204
L_8010E208:;
  W8(c->r[28]+0x00000010u,c->r[30]); // 8010E208
L_8010E20C:;
  c->r[0]=R32(c->r[31]+0x00000010u); // 8010E20C
  c->r[7]=0u+0x803D0000u; // 8010E210
  c->r[7]=c->r[7]+0xFFFFCED8u; // 8010E214
  c->r[4]=0u+0x00000002u; // 8010E218
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E21C
  c->r[6]=0u+0x00000000u; // 8010E220
  c->r[5]=c->r[7]+c->r[0]; // 8010E224
  c->r[3]=R8(c->r[5]+0x0000000Cu); // 8010E228
  c->r[0]=c->r[3]+0x00000001u; // 8010E22C
  W8(c->r[5]+0x0000000Cu,c->r[0]); // 8010E230
  c->r[3]=R32(c->r[31]+0x00000010u); // 8010E234
  c->r[12]=R32(c->r[7]+0x00000340u); // 8010E238
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010E23C
  c->r[3]=rotl(c->r[3],0)&0x000000FFu; // 8010E240
  c->r[5]=c->r[7]+c->r[0]; // 8010E244
  c->r[5]=R8(c->r[5]+0x0000000Cu); // 8010E248
  c->ctr=c->r[12]; // 8010E24C
  if (true) { c->lr=0x8010E254u; dispatch(c,c->ctr); } // 8010E250
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E254
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010E258
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010E25C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010E260
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010E264
  c->lr=c->r[0]; // 8010E268
  c->r[1]=c->r[1]+0x00000020u; // 8010E26C
  return; // 8010E270
}

// hidh_sec_check_complete_orig
void f_8010E274(Ctx* __restrict c) {
  trace_call(0x8010E274u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E274
  c->r[0]=c->lr; // 8010E278
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E27C
  c->r[11]=c->r[1]+0x00000020u; // 8010E280
  c->lr=0x8010E288u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010E284
  c->r[6]=0u+0x803D0000u; // 8010E288
  c->r[3]=0u+0x4EC50000u; // 8010E28C
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010E290
  c->r[31]=0u+0x80330000u; // 8010E294
  c->r[0]=c->r[4]-c->r[6]; // 8010E298
  c->r[3]=c->r[3]+0xFFFFEC4Fu; // 8010E29C
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[3]*(int64_t)(int32_t)c->r[0])>>32); // 8010E2A0
  cmps(c,0,(int32_t)c->r[5],0); // 8010E2A4
  c->r[28]=c->r[4]|c->r[4]; // 8010E2A8
  c->r[29]=c->r[5]|c->r[5]; // 8010E2AC
  c->r[31]=c->r[31]+0xFFFFC578u; // 8010E2B0
  c->r[0]=sraw(c,c->r[0],4); // 8010E2B4
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8010E2B8
  c->r[0]=c->r[0]+c->r[3]; // 8010E2BC
  c->r[30]=rotl(c->r[0],0)&0x000000FFu; // 8010E2C0
  if (!crb(c,2)) { goto L_8010E3DC; } // 8010E2C4
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010E2C8
  cmpu(c,0,c->r[0],0x00000006u); // 8010E2CC
  if (!crb(c,2)) { goto L_8010E3DC; } // 8010E2D0
  c->r[0]=R8(c->r[6]+0x00000401u); // 8010E2D4
  cmpu(c,0,c->r[0],0x00000004u); // 8010E2D8
  if (crb(c,0)) { goto L_8010E2F0; } // 8010E2DC
  c->r[3]=0u+0x001E0000u; // 8010E2E0
  c->r[4]=c->r[31]+0x00000180u; // 8010E2E4
  c->r[3]=c->r[3]+0x00000003u; // 8010E2E8
  c->lr=0x8010E2F0u; f_800F7280(c); // 8010E2EC
L_8010E2F0:;
  c->r[0]=(uint32_t)((int32_t)c->r[30]*(int32_t)52); // 8010E2F0
  c->r[27]=0u+0x803D0000u; // 8010E2F4
  c->r[3]=0u+0x00000000u; // 8010E2F8
  c->r[27]=c->r[27]+0xFFFFCED8u; // 8010E2FC
  W16(c->r[28]+0x0000001Au,c->r[3]); // 8010E300
  c->r[26]=c->r[27]+c->r[0]; // 8010E304
  c->r[4]=c->r[26]+0x00000001u; // 8010E308
  c->r[3]=0u+0x00000013u; // 8010E30C
  c->lr=0x8010E314u; f_8010FE10(c); // 8010E310
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8010E314
  W16(c->r[28]+0x00000016u,c->r[3]); // 8010E318
  if (!crb(c,2)) { goto L_8010E3D4; } // 8010E31C
  c->r[0]=R8(c->r[27]+0x00000401u); // 8010E320
  cmpu(c,0,c->r[0],0x00000002u); // 8010E324
  if (crb(c,0)) { goto L_8010E33C; } // 8010E328
  c->r[3]=0u+0x001E0000u; // 8010E32C
  c->r[4]=c->r[31]+0x000001A0u; // 8010E330
  c->r[3]=c->r[3]+0x00000001u; // 8010E334
  c->lr=0x8010E33Cu; f_800F7280(c); // 8010E338
L_8010E33C:;
  c->r[3]=0u+0x803D0000u; // 8010E33C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E340
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E344
  cmpu(c,0,c->r[0],0x00000004u); // 8010E348
  if (crb(c,0)) { goto L_8010E360; } // 8010E34C
  c->r[3]=0u+0x001E0000u; // 8010E350
  c->r[4]=c->r[31]+0x00000044u; // 8010E354
  c->r[3]=c->r[3]+0x00000003u; // 8010E358
  c->lr=0x8010E360u; f_800F7280(c); // 8010E35C
L_8010E360:;
  c->r[0]=R16(c->r[26]+0x00000014u); // 8010E360
  cmps(c,0,(int32_t)c->r[0],0); // 8010E364
  if (!crb(c,2)) { goto L_8010E378; } // 8010E368
  c->r[0]=R16(c->r[26]+0x00000016u); // 8010E36C
  cmps(c,0,(int32_t)c->r[0],0); // 8010E370
  if (crb(c,2)) { goto L_8010E3A4; } // 8010E374
L_8010E378:;
  c->r[0]=0u+0x00000005u; // 8010E378
  W8(c->r[26]+0x00000010u,c->r[0]); // 8010E37C
  c->r[3]=R16(c->r[26]+0x00000016u); // 8010E380
  cmps(c,0,(int32_t)c->r[3],0); // 8010E384
  if (crb(c,2)) { goto L_8010E390; } // 8010E388
  c->lr=0x8010E390u; f_8011035C(c); // 8010E38C
L_8010E390:;
  c->r[3]=R16(c->r[26]+0x00000014u); // 8010E390
  cmps(c,0,(int32_t)c->r[3],0); // 8010E394
  if (crb(c,2)) { goto L_8010E3AC; } // 8010E398
  c->lr=0x8010E3A0u; f_8011035C(c); // 8010E39C
  goto L_8010E3AC; // 8010E3A0
L_8010E3A4:;
  c->r[0]=0u+0x00000000u; // 8010E3A4
  W8(c->r[26]+0x00000010u,c->r[0]); // 8010E3A8
L_8010E3AC:;
  c->r[5]=0u+0x803D0000u; // 8010E3AC
  c->r[3]=c->r[30]|c->r[30]; // 8010E3B0
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010E3B4
  c->r[4]=0u+0x00000001u; // 8010E3B8
  c->r[12]=R32(c->r[5]+0x00000340u); // 8010E3BC
  c->r[5]=0u+0x00000200u; // 8010E3C0
  c->r[6]=0u+0x00000000u; // 8010E3C4
  c->ctr=c->r[12]; // 8010E3C8
  if (true) { c->lr=0x8010E3D0u; dispatch(c,c->ctr); } // 8010E3CC
  goto L_8010E470; // 8010E3D0
L_8010E3D4:;
  c->r[0]=0u+0x00000002u; // 8010E3D4
  W8(c->r[28]+0x00000010u,c->r[0]); // 8010E3D8
L_8010E3DC:;
  cmps(c,0,(int32_t)c->r[29],0); // 8010E3DC
  if (crb(c,2)) { goto L_8010E470; } // 8010E3E0
  c->r[0]=R8(c->r[28]+0x00000010u); // 8010E3E4
  cmpu(c,0,c->r[0],0x00000006u); // 8010E3E8
  if (!crb(c,2)) { goto L_8010E470; } // 8010E3EC
  c->r[0]=0u+0x0000000Fu; // 8010E3F0
  c->r[3]=0u+0x803D0000u; // 8010E3F4
  W16(c->r[28]+0x0000001Au,c->r[0]); // 8010E3F8
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E3FC
  c->r[4]=(uint32_t)((int32_t)c->r[30]*(int32_t)52); // 8010E400
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E404
  cmpu(c,0,c->r[0],0x00000004u); // 8010E408
  c->r[27]=c->r[3]+c->r[4]; // 8010E40C
  if (crb(c,0)) { goto L_8010E424; } // 8010E410
  c->r[3]=0u+0x001E0000u; // 8010E414
  c->r[4]=c->r[31]+0x00000044u; // 8010E418
  c->r[3]=c->r[3]+0x00000003u; // 8010E41C
  c->lr=0x8010E424u; f_800F7280(c); // 8010E420
L_8010E424:;
  c->r[0]=R16(c->r[27]+0x00000014u); // 8010E424
  cmps(c,0,(int32_t)c->r[0],0); // 8010E428
  if (!crb(c,2)) { goto L_8010E43C; } // 8010E42C
  c->r[0]=R16(c->r[27]+0x00000016u); // 8010E430
  cmps(c,0,(int32_t)c->r[0],0); // 8010E434
  if (crb(c,2)) { goto L_8010E468; } // 8010E438
L_8010E43C:;
  c->r[0]=0u+0x00000005u; // 8010E43C
  W8(c->r[27]+0x00000010u,c->r[0]); // 8010E440
  c->r[3]=R16(c->r[27]+0x00000016u); // 8010E444
  cmps(c,0,(int32_t)c->r[3],0); // 8010E448
  if (crb(c,2)) { goto L_8010E454; } // 8010E44C
  c->lr=0x8010E454u; f_8011035C(c); // 8010E450
L_8010E454:;
  c->r[3]=R16(c->r[27]+0x00000014u); // 8010E454
  cmps(c,0,(int32_t)c->r[3],0); // 8010E458
  if (crb(c,2)) { goto L_8010E470; } // 8010E45C
  c->lr=0x8010E464u; f_8011035C(c); // 8010E460
  goto L_8010E470; // 8010E464
L_8010E468:;
  c->r[0]=0u+0x00000000u; // 8010E468
  W8(c->r[27]+0x00000010u,c->r[0]); // 8010E46C
L_8010E470:;
  c->r[11]=c->r[1]+0x00000020u; // 8010E470
  c->lr=0x8010E478u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010E474
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E478
  c->lr=c->r[0]; // 8010E47C
  c->r[1]=c->r[1]+0x00000020u; // 8010E480
  return; // 8010E484
}

// hidh_l2cif_connect_cfm
void f_8010E488(Ctx* __restrict c) {
  trace_call(0x8010E488u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E488
  c->r[0]=c->lr; // 8010E48C
  c->r[6]=0u+0x803D0000u; // 8010E490
  c->r[5]=0u+0x00000000u; // 8010E494
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E498
  c->r[0]=0u+0x00000004u; // 8010E49C
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010E4A0
  c->r[9]=0u+0x00000000u; // 8010E4A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010E4A8
  c->r[31]=0u+0x80330000u; // 8010E4AC
  c->r[31]=c->r[31]+0xFFFFC578u; // 8010E4B0
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010E4B4
  c->r[30]=0u+0x00000000u; // 8010E4B8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010E4BC
  c->r[29]=c->r[4]|c->r[4]; // 8010E4C0
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010E4C4
  c->r[28]=c->r[3]|c->r[3]; // 8010E4C8
  c->ctr=c->r[0]; // 8010E4CC
L_8010E4D0:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010E4D0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E4D4
  c->r[7]=c->r[6]+c->r[0]; // 8010E4D8
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010E4DC
  cmps(c,0,(int32_t)c->r[0],0); // 8010E4E0
  if (crb(c,2)) { goto L_8010E50C; } // 8010E4E4
  c->r[0]=R8(c->r[7]+0x00000010u); // 8010E4E8
  cmps(c,0,(int32_t)c->r[0],0); // 8010E4EC
  if (crb(c,2)) { goto L_8010E50C; } // 8010E4F0
  c->r[0]=R16(c->r[7]+0x00000014u); // 8010E4F4
  cmpu(c,0,c->r[3],c->r[0]); // 8010E4F8
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E4FC
  c->r[0]=R16(c->r[7]+0x00000016u); // 8010E500
  cmpu(c,0,c->r[3],c->r[0]); // 8010E504
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E508
L_8010E50C:;
  c->r[30]=c->r[30]+0x00000001u; // 8010E50C
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010E510
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E514
  c->r[7]=c->r[6]+c->r[0]; // 8010E518
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010E51C
  cmps(c,0,(int32_t)c->r[0],0); // 8010E520
  if (crb(c,2)) { goto L_8010E54C; } // 8010E524
  c->r[0]=R8(c->r[7]+0x00000010u); // 8010E528
  cmps(c,0,(int32_t)c->r[0],0); // 8010E52C
  if (crb(c,2)) { goto L_8010E54C; } // 8010E530
  c->r[0]=R16(c->r[7]+0x00000014u); // 8010E534
  cmpu(c,0,c->r[3],c->r[0]); // 8010E538
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E53C
  c->r[0]=R16(c->r[7]+0x00000016u); // 8010E540
  cmpu(c,0,c->r[3],c->r[0]); // 8010E544
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E548
L_8010E54C:;
  c->r[30]=c->r[30]+0x00000001u; // 8010E54C
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010E550
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E554
  c->r[7]=c->r[6]+c->r[0]; // 8010E558
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010E55C
  cmps(c,0,(int32_t)c->r[0],0); // 8010E560
  if (crb(c,2)) { goto L_8010E58C; } // 8010E564
  c->r[0]=R8(c->r[7]+0x00000010u); // 8010E568
  cmps(c,0,(int32_t)c->r[0],0); // 8010E56C
  if (crb(c,2)) { goto L_8010E58C; } // 8010E570
  c->r[0]=R16(c->r[7]+0x00000014u); // 8010E574
  cmpu(c,0,c->r[3],c->r[0]); // 8010E578
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E57C
  c->r[0]=R16(c->r[7]+0x00000016u); // 8010E580
  cmpu(c,0,c->r[3],c->r[0]); // 8010E584
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E588
L_8010E58C:;
  c->r[30]=c->r[30]+0x00000001u; // 8010E58C
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010E590
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E594
  c->r[7]=c->r[6]+c->r[0]; // 8010E598
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010E59C
  cmps(c,0,(int32_t)c->r[0],0); // 8010E5A0
  if (crb(c,2)) { goto L_8010E5CC; } // 8010E5A4
  c->r[0]=R8(c->r[7]+0x00000010u); // 8010E5A8
  cmps(c,0,(int32_t)c->r[0],0); // 8010E5AC
  if (crb(c,2)) { goto L_8010E5CC; } // 8010E5B0
  c->r[0]=R16(c->r[7]+0x00000014u); // 8010E5B4
  cmpu(c,0,c->r[3],c->r[0]); // 8010E5B8
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E5BC
  c->r[0]=R16(c->r[7]+0x00000016u); // 8010E5C0
  cmpu(c,0,c->r[3],c->r[0]); // 8010E5C4
  if (crb(c,2)) { goto L_8010E5D4; } // 8010E5C8
L_8010E5CC:;
  c->r[30]=c->r[30]+0x00000001u; // 8010E5CC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010E4D0; } // 8010E5D0
L_8010E5D4:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010E5D4
  cmpu(c,0,c->r[0],0x00000010u); // 8010E5D8
  if (crb(c,2)) { goto L_8010E5F4; } // 8010E5DC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E5E0
  c->r[5]=0u+0x803D0000u; // 8010E5E4
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010E5E8
  c->r[9]=c->r[5]+c->r[0]; // 8010E5EC
  c->r[5]=c->r[9]+0x00000010u; // 8010E5F0
L_8010E5F4:;
  cmps(c,0,(int32_t)c->r[5],0); // 8010E5F4
  if (crb(c,2)) { goto L_8010E638; } // 8010E5F8
  c->r[0]=R8(c->r[5]+0x00000001u); // 8010E5FC
  c->r[0]=rotl(c->r[0],0)&0x00000001u; cr0(c,c->r[0]); // 8010E600
  if (crb(c,2)) { goto L_8010E638; } // 8010E604
  c->r[6]=R16(c->r[5]+0x00000004u); // 8010E608
  cmpu(c,0,c->r[3],c->r[6]); // 8010E60C
  if (!crb(c,2)) { goto L_8010E620; } // 8010E610
  c->r[0]=R8(c->r[5]+0x00000000u); // 8010E614
  cmpu(c,0,c->r[0],0x00000001u); // 8010E618
  if (!crb(c,2)) { goto L_8010E638; } // 8010E61C
L_8010E620:;
  c->r[0]=R16(c->r[5]+0x00000006u); // 8010E620
  cmpu(c,0,c->r[3],c->r[0]); // 8010E624
  if (!crb(c,2)) { goto L_8010E664; } // 8010E628
  c->r[0]=R8(c->r[5]+0x00000000u); // 8010E62C
  cmpu(c,0,c->r[0],0x00000002u); // 8010E630
  if (crb(c,2)) { goto L_8010E664; } // 8010E634
L_8010E638:;
  c->r[3]=0u+0x803D0000u; // 8010E638
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E63C
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E640
  cmpu(c,0,c->r[0],0x00000002u); // 8010E644
  if (crb(c,0)) { goto L_8010E7B0; } // 8010E648
  c->r[3]=0u+0x001E0000u; // 8010E64C
  c->r[5]=c->r[28]|c->r[28]; // 8010E650
  c->r[3]=c->r[3]+0x00000001u; // 8010E654
  c->r[4]=c->r[31]+0x000001BCu; // 8010E658
  c->lr=0x8010E660u; f_800F72A0(c); // 8010E65C
  goto L_8010E7B0; // 8010E660
L_8010E664:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010E664
  if (crb(c,2)) { goto L_8010E72C; } // 8010E668
  cmpu(c,0,c->r[3],c->r[6]); // 8010E66C
  if (!crb(c,2)) { goto L_8010E680; } // 8010E670
  c->r[0]=0u+0x00000000u; // 8010E674
  W16(c->r[5]+0x00000004u,c->r[0]); // 8010E678
  goto L_8010E688; // 8010E67C
L_8010E680:;
  c->r[0]=0u+0x00000000u; // 8010E680
  W16(c->r[5]+0x00000006u,c->r[0]); // 8010E684
L_8010E688:;
  c->r[3]=0u+0x803D0000u; // 8010E688
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 8010E68C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E690
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E694
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 8010E698
  cmpu(c,0,c->r[0],0x00000004u); // 8010E69C
  c->r[28]=c->r[3]+c->r[4]; // 8010E6A0
  if (crb(c,0)) { goto L_8010E6B8; } // 8010E6A4
  c->r[3]=0u+0x001E0000u; // 8010E6A8
  c->r[4]=c->r[31]+0x00000044u; // 8010E6AC
  c->r[3]=c->r[3]+0x00000003u; // 8010E6B0
  c->lr=0x8010E6B8u; f_800F7280(c); // 8010E6B4
L_8010E6B8:;
  c->r[0]=R16(c->r[28]+0x00000014u); // 8010E6B8
  cmps(c,0,(int32_t)c->r[0],0); // 8010E6BC
  if (!crb(c,2)) { goto L_8010E6D0; } // 8010E6C0
  c->r[0]=R16(c->r[28]+0x00000016u); // 8010E6C4
  cmps(c,0,(int32_t)c->r[0],0); // 8010E6C8
  if (crb(c,2)) { goto L_8010E6FC; } // 8010E6CC
L_8010E6D0:;
  c->r[0]=0u+0x00000005u; // 8010E6D0
  W8(c->r[28]+0x00000010u,c->r[0]); // 8010E6D4
  c->r[3]=R16(c->r[28]+0x00000016u); // 8010E6D8
  cmps(c,0,(int32_t)c->r[3],0); // 8010E6DC
  if (crb(c,2)) { goto L_8010E6E8; } // 8010E6E0
  c->lr=0x8010E6E8u; f_8011035C(c); // 8010E6E4
L_8010E6E8:;
  c->r[3]=R16(c->r[28]+0x00000014u); // 8010E6E8
  cmps(c,0,(int32_t)c->r[3],0); // 8010E6EC
  if (crb(c,2)) { goto L_8010E704; } // 8010E6F0
  c->lr=0x8010E6F8u; f_8011035C(c); // 8010E6F4
  goto L_8010E704; // 8010E6F8
L_8010E6FC:;
  c->r[0]=0u+0x00000000u; // 8010E6FC
  W8(c->r[28]+0x00000010u,c->r[0]); // 8010E700
L_8010E704:;
  c->r[4]=0u+0x803D0000u; // 8010E704
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 8010E708
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010E70C
  c->r[5]=c->r[29]|0x00000100u; // 8010E710
  c->r[12]=R32(c->r[4]+0x00000340u); // 8010E714
  c->r[4]=0u+0x00000001u; // 8010E718
  c->r[6]=0u+0x00000000u; // 8010E71C
  c->ctr=c->r[12]; // 8010E720
  if (true) { c->lr=0x8010E728u; dispatch(c,c->ctr); } // 8010E724
  goto L_8010E7B0; // 8010E728
L_8010E72C:;
  cmpu(c,0,c->r[3],c->r[6]); // 8010E72C
  if (!crb(c,2)) { goto L_8010E774; } // 8010E730
  c->r[0]=0u+0x00000006u; // 8010E734
  c->r[8]=0u+0x80110000u; // 8010E738
  W8(c->r[5]+0x00000000u,c->r[0]); // 8010E73C
  c->r[0]=0u+0x00000100u; // 8010E740
  c->r[3]=c->r[9]+0x00000001u; // 8010E744
  c->r[8]=c->r[8]+0xFFFFE274u; // 8010E748
  W16(c->r[5]+0x0000000Au,c->r[0]); // 8010E74C
  c->r[4]=0u+0x00000011u; // 8010E750
  c->r[5]=0u+0x00000001u; // 8010E754
  c->r[6]=0u+0x00000006u; // 8010E758
  c->r[0]=R16(c->r[9]+0x00000008u); // 8010E75C
  c->r[0]=rotl(c->r[0],17)&0x00000001u; // 8010E760
  c->r[7]=0u-c->r[0]; // 8010E764
  c->r[7]=c->r[7]+0x00000002u; // 8010E768
  c->lr=0x8010E770u; f_80105B30(c); // 8010E76C
  goto L_8010E77C; // 8010E770
L_8010E774:;
  c->r[0]=0u+0x00000003u; // 8010E774
  W8(c->r[5]+0x00000000u,c->r[0]); // 8010E778
L_8010E77C:;
  c->r[29]=0u+0x803D0000u; // 8010E77C
  c->r[3]=c->r[28]|c->r[28]; // 8010E780
  c->r[29]=c->r[29]+0xFFFFCED8u; // 8010E784
  c->r[4]=c->r[29]+0x00000344u; // 8010E788
  c->lr=0x8010E790u; f_801101D4(c); // 8010E78C
  c->r[0]=R8(c->r[29]+0x00000401u); // 8010E790
  cmpu(c,0,c->r[0],0x00000004u); // 8010E794
  if (crb(c,0)) { goto L_8010E7B0; } // 8010E798
  c->r[3]=0u+0x001E0000u; // 8010E79C
  c->r[5]=c->r[28]|c->r[28]; // 8010E7A0
  c->r[3]=c->r[3]+0x00000003u; // 8010E7A4
  c->r[4]=c->r[31]+0x000001E8u; // 8010E7A8
  c->lr=0x8010E7B0u; f_800F72A0(c); // 8010E7AC
L_8010E7B0:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010E7B0
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010E7B4
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010E7B8
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010E7BC
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010E7C0
  c->lr=c->r[0]; // 8010E7C4
  c->r[1]=c->r[1]+0x00000020u; // 8010E7C8
  return; // 8010E7CC
}

// hidh_l2cif_config_ind
void f_8010E7D0(Ctx* __restrict c) {
  trace_call(0x8010E7D0u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010E7D0
  c->r[0]=c->lr; // 8010E7D4
  c->r[5]=0u+0x803D0000u; // 8010E7D8
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010E7DC
  c->r[0]=0u+0x00000004u; // 8010E7E0
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010E7E4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010E7E8
  c->r[31]=0u+0x00000000u; // 8010E7EC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010E7F0
  c->r[30]=0u+0x00000000u; // 8010E7F4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010E7F8
  c->r[29]=c->r[4]|c->r[4]; // 8010E7FC
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010E800
  c->r[28]=c->r[3]|c->r[3]; // 8010E804
  c->ctr=c->r[0]; // 8010E808
L_8010E80C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010E80C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E810
  c->r[4]=c->r[5]+c->r[0]; // 8010E814
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010E818
  cmps(c,0,(int32_t)c->r[0],0); // 8010E81C
  if (crb(c,2)) { goto L_8010E848; } // 8010E820
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010E824
  cmps(c,0,(int32_t)c->r[0],0); // 8010E828
  if (crb(c,2)) { goto L_8010E848; } // 8010E82C
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010E830
  cmpu(c,0,c->r[3],c->r[0]); // 8010E834
  if (crb(c,2)) { goto L_8010E910; } // 8010E838
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010E83C
  cmpu(c,0,c->r[3],c->r[0]); // 8010E840
  if (crb(c,2)) { goto L_8010E910; } // 8010E844
L_8010E848:;
  c->r[31]=c->r[31]+0x00000001u; // 8010E848
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010E84C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E850
  c->r[4]=c->r[5]+c->r[0]; // 8010E854
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010E858
  cmps(c,0,(int32_t)c->r[0],0); // 8010E85C
  if (crb(c,2)) { goto L_8010E888; } // 8010E860
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010E864
  cmps(c,0,(int32_t)c->r[0],0); // 8010E868
  if (crb(c,2)) { goto L_8010E888; } // 8010E86C
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010E870
  cmpu(c,0,c->r[3],c->r[0]); // 8010E874
  if (crb(c,2)) { goto L_8010E910; } // 8010E878
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010E87C
  cmpu(c,0,c->r[3],c->r[0]); // 8010E880
  if (crb(c,2)) { goto L_8010E910; } // 8010E884
L_8010E888:;
  c->r[31]=c->r[31]+0x00000001u; // 8010E888
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010E88C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E890
  c->r[4]=c->r[5]+c->r[0]; // 8010E894
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010E898
  cmps(c,0,(int32_t)c->r[0],0); // 8010E89C
  if (crb(c,2)) { goto L_8010E8C8; } // 8010E8A0
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010E8A4
  cmps(c,0,(int32_t)c->r[0],0); // 8010E8A8
  if (crb(c,2)) { goto L_8010E8C8; } // 8010E8AC
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010E8B0
  cmpu(c,0,c->r[3],c->r[0]); // 8010E8B4
  if (crb(c,2)) { goto L_8010E910; } // 8010E8B8
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010E8BC
  cmpu(c,0,c->r[3],c->r[0]); // 8010E8C0
  if (crb(c,2)) { goto L_8010E910; } // 8010E8C4
L_8010E8C8:;
  c->r[31]=c->r[31]+0x00000001u; // 8010E8C8
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010E8CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E8D0
  c->r[4]=c->r[5]+c->r[0]; // 8010E8D4
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010E8D8
  cmps(c,0,(int32_t)c->r[0],0); // 8010E8DC
  if (crb(c,2)) { goto L_8010E908; } // 8010E8E0
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010E8E4
  cmps(c,0,(int32_t)c->r[0],0); // 8010E8E8
  if (crb(c,2)) { goto L_8010E908; } // 8010E8EC
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010E8F0
  cmpu(c,0,c->r[3],c->r[0]); // 8010E8F4
  if (crb(c,2)) { goto L_8010E910; } // 8010E8F8
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010E8FC
  cmpu(c,0,c->r[3],c->r[0]); // 8010E900
  if (crb(c,2)) { goto L_8010E910; } // 8010E904
L_8010E908:;
  c->r[31]=c->r[31]+0x00000001u; // 8010E908
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010E80C; } // 8010E90C
L_8010E910:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010E910
  cmpu(c,0,c->r[0],0x00000010u); // 8010E914
  if (crb(c,2)) { goto L_8010E930; } // 8010E918
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010E91C
  c->r[3]=0u+0x803D0000u; // 8010E920
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E924
  c->r[30]=c->r[3]+c->r[0]; // 8010E928
  c->r[30]=c->r[30]+0x00000010u; // 8010E92C
L_8010E930:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010E930
  if (!crb(c,2)) { goto L_8010E968; } // 8010E934
  c->r[3]=0u+0x803D0000u; // 8010E938
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E93C
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E940
  cmpu(c,0,c->r[0],0x00000002u); // 8010E944
  if (crb(c,0)) { goto L_8010EA58; } // 8010E948
  c->r[3]=0u+0x001E0000u; // 8010E94C
  c->r[4]=0u+0x80330000u; // 8010E950
  c->r[5]=c->r[28]|c->r[28]; // 8010E954
  c->r[3]=c->r[3]+0x00000001u; // 8010E958
  c->r[4]=c->r[4]+0xFFFFC794u; // 8010E95C
  c->lr=0x8010E964u; f_800F72A0(c); // 8010E960
  goto L_8010EA58; // 8010E964
L_8010E968:;
  c->r[3]=0u+0x803D0000u; // 8010E968
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010E96C
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010E970
  cmpu(c,0,c->r[0],0x00000004u); // 8010E974
  if (crb(c,0)) { goto L_8010E994; } // 8010E978
  c->r[3]=0u+0x001E0000u; // 8010E97C
  c->r[4]=0u+0x80330000u; // 8010E980
  c->r[5]=c->r[28]|c->r[28]; // 8010E984
  c->r[3]=c->r[3]+0x00000003u; // 8010E988
  c->r[4]=c->r[4]+0xFFFFC7C0u; // 8010E98C
  c->lr=0x8010E994u; f_800F72A0(c); // 8010E990
L_8010E994:;
  c->r[0]=R8(c->r[29]+0x00000002u); // 8010E994
  cmps(c,0,(int32_t)c->r[0],0); // 8010E998
  if (crb(c,2)) { goto L_8010E9AC; } // 8010E99C
  c->r[0]=R16(c->r[29]+0x00000004u); // 8010E9A0
  cmpu(c,0,c->r[0],0x00000280u); // 8010E9A4
  if (!crb(c,1)) { goto L_8010E9B8; } // 8010E9A8
L_8010E9AC:;
  c->r[0]=0u+0x00000280u; // 8010E9AC
  W16(c->r[30]+0x00000008u,c->r[0]); // 8010E9B0
  goto L_8010E9BC; // 8010E9B4
L_8010E9B8:;
  W16(c->r[30]+0x00000008u,c->r[0]); // 8010E9B8
L_8010E9BC:;
  c->r[0]=0u+0x00000000u; // 8010E9BC
  c->r[3]=c->r[28]|c->r[28]; // 8010E9C0
  W8(c->r[29]+0x00000020u,c->r[0]); // 8010E9C4
  c->r[4]=c->r[29]|c->r[29]; // 8010E9C8
  W8(c->r[29]+0x00000002u,c->r[0]); // 8010E9CC
  W16(c->r[29]+0x00000000u,c->r[0]); // 8010E9D0
  c->lr=0x8010E9D8u; f_8011028C(c); // 8010E9D4
  c->r[0]=R16(c->r[30]+0x00000004u); // 8010E9D8
  cmpu(c,0,c->r[28],c->r[0]); // 8010E9DC
  if (!crb(c,2)) { goto L_8010E9F4; } // 8010E9E0
  c->r[0]=R8(c->r[30]+0x00000001u); // 8010E9E4
  c->r[0]=c->r[0]|0x00000002u; // 8010E9E8
  W8(c->r[30]+0x00000001u,c->r[0]); // 8010E9EC
  goto L_8010EA00; // 8010E9F0
L_8010E9F4:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 8010E9F4
  c->r[0]=c->r[0]|0x00000008u; // 8010E9F8
  W8(c->r[30]+0x00000001u,c->r[0]); // 8010E9FC
L_8010EA00:;
  c->r[0]=R8(c->r[30]+0x00000001u); // 8010EA00
  c->r[0]=rotl(c->r[0],0)&0x0000001Eu; // 8010EA04
  cmps(c,0,(int32_t)c->r[0],30); // 8010EA08
  if (!crb(c,2)) { goto L_8010EA58; } // 8010EA0C
  c->r[0]=R8(c->r[30]+0x00000000u); // 8010EA10
  cmpu(c,0,c->r[0],0x00000003u); // 8010EA14
  if (!crb(c,2)) { goto L_8010EA58; } // 8010EA18
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010EA1C
  c->r[4]=0u+0x00000004u; // 8010EA20
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010EA24
  c->r[6]=0u+0x803D0000u; // 8010EA28
  W8(c->r[30]+0x00000000u,c->r[4]); // 8010EA2C
  c->r[5]=0u+0x00000001u; // 8010EA30
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010EA34
  c->r[4]=c->r[6]+c->r[0]; // 8010EA38
  W8(c->r[4]+0x0000000Au,c->r[5]); // 8010EA3C
  c->r[4]=0u+0x00000000u; // 8010EA40
  c->r[5]=0u+0x00000000u; // 8010EA44
  c->r[12]=R32(c->r[6]+0x00000340u); // 8010EA48
  c->r[6]=0u+0x00000000u; // 8010EA4C
  c->ctr=c->r[12]; // 8010EA50
  if (true) { c->lr=0x8010EA58u; dispatch(c,c->ctr); } // 8010EA54
L_8010EA58:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010EA58
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010EA5C
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010EA60
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010EA64
  c->r[28]=R32(c->r[1]+0x00000010u); // 8010EA68
  c->lr=c->r[0]; // 8010EA6C
  c->r[1]=c->r[1]+0x00000020u; // 8010EA70
  return; // 8010EA74
}

// hidh_l2cif_config_cfm
void f_8010EA78(Ctx* __restrict c) {
  trace_call(0x8010EA78u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010EA78
  c->r[0]=c->lr; // 8010EA7C
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010EA80
  c->r[11]=c->r[1]+0x00000020u; // 8010EA84
  c->lr=0x8010EA8Cu; f_800ADA2C(c); // 8010EA88
  c->r[5]=0u+0x803D0000u; // 8010EA8C
  c->r[31]=0u+0x80330000u; // 8010EA90
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010EA94
  c->r[27]=c->r[3]|c->r[3]; // 8010EA98
  c->r[0]=R8(c->r[5]+0x00000401u); // 8010EA9C
  c->r[28]=c->r[4]|c->r[4]; // 8010EAA0
  c->r[31]=c->r[31]+0xFFFFC578u; // 8010EAA4
  c->r[29]=0u+0x00000000u; // 8010EAA8
  cmpu(c,0,c->r[0],0x00000004u); // 8010EAAC
  if (crb(c,0)) { goto L_8010EACC; } // 8010EAB0
  c->r[3]=0u+0x001E0000u; // 8010EAB4
  c->r[6]=R16(c->r[28]+0x00000000u); // 8010EAB8
  c->r[5]=c->r[27]|c->r[27]; // 8010EABC
  c->r[4]=c->r[31]+0x00000274u; // 8010EAC0
  c->r[3]=c->r[3]+0x00000003u; // 8010EAC4
  c->lr=0x8010EACCu; f_800F72C0(c); // 8010EAC8
L_8010EACC:;
  c->r[3]=0u+0x803D0000u; // 8010EACC
  c->r[0]=0u+0x00000004u; // 8010EAD0
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EAD4
  c->r[30]=0u+0x00000000u; // 8010EAD8
  c->ctr=c->r[0]; // 8010EADC
L_8010EAE0:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010EAE0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EAE4
  c->r[4]=c->r[3]+c->r[0]; // 8010EAE8
  c->r[0]=R8(c->r[3]+c->r[0]); // 8010EAEC
  cmps(c,0,(int32_t)c->r[0],0); // 8010EAF0
  if (crb(c,2)) { goto L_8010EB1C; } // 8010EAF4
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010EAF8
  cmps(c,0,(int32_t)c->r[0],0); // 8010EAFC
  if (crb(c,2)) { goto L_8010EB1C; } // 8010EB00
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010EB04
  cmpu(c,0,c->r[27],c->r[0]); // 8010EB08
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EB0C
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010EB10
  cmpu(c,0,c->r[27],c->r[0]); // 8010EB14
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EB18
L_8010EB1C:;
  c->r[30]=c->r[30]+0x00000001u; // 8010EB1C
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010EB20
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EB24
  c->r[4]=c->r[3]+c->r[0]; // 8010EB28
  c->r[0]=R8(c->r[3]+c->r[0]); // 8010EB2C
  cmps(c,0,(int32_t)c->r[0],0); // 8010EB30
  if (crb(c,2)) { goto L_8010EB5C; } // 8010EB34
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010EB38
  cmps(c,0,(int32_t)c->r[0],0); // 8010EB3C
  if (crb(c,2)) { goto L_8010EB5C; } // 8010EB40
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010EB44
  cmpu(c,0,c->r[27],c->r[0]); // 8010EB48
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EB4C
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010EB50
  cmpu(c,0,c->r[27],c->r[0]); // 8010EB54
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EB58
L_8010EB5C:;
  c->r[30]=c->r[30]+0x00000001u; // 8010EB5C
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010EB60
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EB64
  c->r[4]=c->r[3]+c->r[0]; // 8010EB68
  c->r[0]=R8(c->r[3]+c->r[0]); // 8010EB6C
  cmps(c,0,(int32_t)c->r[0],0); // 8010EB70
  if (crb(c,2)) { goto L_8010EB9C; } // 8010EB74
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010EB78
  cmps(c,0,(int32_t)c->r[0],0); // 8010EB7C
  if (crb(c,2)) { goto L_8010EB9C; } // 8010EB80
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010EB84
  cmpu(c,0,c->r[27],c->r[0]); // 8010EB88
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EB8C
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010EB90
  cmpu(c,0,c->r[27],c->r[0]); // 8010EB94
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EB98
L_8010EB9C:;
  c->r[30]=c->r[30]+0x00000001u; // 8010EB9C
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010EBA0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EBA4
  c->r[4]=c->r[3]+c->r[0]; // 8010EBA8
  c->r[0]=R8(c->r[3]+c->r[0]); // 8010EBAC
  cmps(c,0,(int32_t)c->r[0],0); // 8010EBB0
  if (crb(c,2)) { goto L_8010EBDC; } // 8010EBB4
  c->r[0]=R8(c->r[4]+0x00000010u); // 8010EBB8
  cmps(c,0,(int32_t)c->r[0],0); // 8010EBBC
  if (crb(c,2)) { goto L_8010EBDC; } // 8010EBC0
  c->r[0]=R16(c->r[4]+0x00000014u); // 8010EBC4
  cmpu(c,0,c->r[27],c->r[0]); // 8010EBC8
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EBCC
  c->r[0]=R16(c->r[4]+0x00000016u); // 8010EBD0
  cmpu(c,0,c->r[27],c->r[0]); // 8010EBD4
  if (crb(c,2)) { goto L_8010EBE4; } // 8010EBD8
L_8010EBDC:;
  c->r[30]=c->r[30]+0x00000001u; // 8010EBDC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010EAE0; } // 8010EBE0
L_8010EBE4:;
  c->r[0]=rotl(c->r[30],0)&0x000000FFu; // 8010EBE4
  cmpu(c,0,c->r[0],0x00000010u); // 8010EBE8
  if (crb(c,2)) { goto L_8010EC04; } // 8010EBEC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EBF0
  c->r[3]=0u+0x803D0000u; // 8010EBF4
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EBF8
  c->r[29]=c->r[3]+c->r[0]; // 8010EBFC
  c->r[29]=c->r[29]+0x00000010u; // 8010EC00
L_8010EC04:;
  cmps(c,0,(int32_t)c->r[29],0); // 8010EC04
  if (!crb(c,2)) { goto L_8010EC38; } // 8010EC08
  c->r[3]=0u+0x803D0000u; // 8010EC0C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EC10
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010EC14
  cmpu(c,0,c->r[0],0x00000002u); // 8010EC18
  if (crb(c,0)) { goto L_8010ED6C; } // 8010EC1C
  c->r[3]=0u+0x001E0000u; // 8010EC20
  c->r[5]=c->r[27]|c->r[27]; // 8010EC24
  c->r[3]=c->r[3]+0x00000001u; // 8010EC28
  c->r[4]=c->r[31]+0x0000021Cu; // 8010EC2C
  c->lr=0x8010EC34u; f_800F72A0(c); // 8010EC30
  goto L_8010ED6C; // 8010EC34
L_8010EC38:;
  c->r[0]=R16(c->r[28]+0x00000000u); // 8010EC38
  cmps(c,0,(int32_t)c->r[0],0); // 8010EC3C
  if (crb(c,2)) { goto L_8010ECEC; } // 8010EC40
  c->r[3]=0u+0x803D0000u; // 8010EC44
  c->r[4]=rotl(c->r[30],0)&0x000000FFu; // 8010EC48
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EC4C
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010EC50
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 8010EC54
  cmpu(c,0,c->r[0],0x00000004u); // 8010EC58
  c->r[27]=c->r[3]+c->r[4]; // 8010EC5C
  if (crb(c,0)) { goto L_8010EC74; } // 8010EC60
  c->r[3]=0u+0x001E0000u; // 8010EC64
  c->r[4]=c->r[31]+0x00000044u; // 8010EC68
  c->r[3]=c->r[3]+0x00000003u; // 8010EC6C
  c->lr=0x8010EC74u; f_800F7280(c); // 8010EC70
L_8010EC74:;
  c->r[0]=R16(c->r[27]+0x00000014u); // 8010EC74
  cmps(c,0,(int32_t)c->r[0],0); // 8010EC78
  if (!crb(c,2)) { goto L_8010EC8C; } // 8010EC7C
  c->r[0]=R16(c->r[27]+0x00000016u); // 8010EC80
  cmps(c,0,(int32_t)c->r[0],0); // 8010EC84
  if (crb(c,2)) { goto L_8010ECB8; } // 8010EC88
L_8010EC8C:;
  c->r[0]=0u+0x00000005u; // 8010EC8C
  W8(c->r[27]+0x00000010u,c->r[0]); // 8010EC90
  c->r[3]=R16(c->r[27]+0x00000016u); // 8010EC94
  cmps(c,0,(int32_t)c->r[3],0); // 8010EC98
  if (crb(c,2)) { goto L_8010ECA4; } // 8010EC9C
  c->lr=0x8010ECA4u; f_8011035C(c); // 8010ECA0
L_8010ECA4:;
  c->r[3]=R16(c->r[27]+0x00000014u); // 8010ECA4
  cmps(c,0,(int32_t)c->r[3],0); // 8010ECA8
  if (crb(c,2)) { goto L_8010ECC0; } // 8010ECAC
  c->lr=0x8010ECB4u; f_8011035C(c); // 8010ECB0
  goto L_8010ECC0; // 8010ECB4
L_8010ECB8:;
  c->r[0]=0u+0x00000000u; // 8010ECB8
  W8(c->r[27]+0x00000010u,c->r[0]); // 8010ECBC
L_8010ECC0:;
  c->r[4]=0u+0x803D0000u; // 8010ECC0
  c->r[0]=R16(c->r[28]+0x00000000u); // 8010ECC4
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010ECC8
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 8010ECCC
  c->r[12]=R32(c->r[4]+0x00000340u); // 8010ECD0
  c->r[5]=c->r[0]|0x00000400u; // 8010ECD4
  c->r[4]=0u+0x00000001u; // 8010ECD8
  c->r[6]=0u+0x00000000u; // 8010ECDC
  c->ctr=c->r[12]; // 8010ECE0
  if (true) { c->lr=0x8010ECE8u; dispatch(c,c->ctr); } // 8010ECE4
  goto L_8010ED6C; // 8010ECE8
L_8010ECEC:;
  c->r[0]=R16(c->r[29]+0x00000004u); // 8010ECEC
  cmpu(c,0,c->r[27],c->r[0]); // 8010ECF0
  if (!crb(c,2)) { goto L_8010ED08; } // 8010ECF4
  c->r[0]=R8(c->r[29]+0x00000001u); // 8010ECF8
  c->r[0]=c->r[0]|0x00000004u; // 8010ECFC
  W8(c->r[29]+0x00000001u,c->r[0]); // 8010ED00
  goto L_8010ED14; // 8010ED04
L_8010ED08:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 8010ED08
  c->r[0]=c->r[0]|0x00000010u; // 8010ED0C
  W8(c->r[29]+0x00000001u,c->r[0]); // 8010ED10
L_8010ED14:;
  c->r[0]=R8(c->r[29]+0x00000001u); // 8010ED14
  c->r[0]=rotl(c->r[0],0)&0x0000001Eu; // 8010ED18
  cmps(c,0,(int32_t)c->r[0],30); // 8010ED1C
  if (!crb(c,2)) { goto L_8010ED6C; } // 8010ED20
  c->r[0]=R8(c->r[29]+0x00000000u); // 8010ED24
  cmpu(c,0,c->r[0],0x00000003u); // 8010ED28
  if (!crb(c,2)) { goto L_8010ED6C; } // 8010ED2C
  c->r[3]=rotl(c->r[30],0)&0x000000FFu; // 8010ED30
  c->r[4]=0u+0x00000004u; // 8010ED34
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010ED38
  c->r[6]=0u+0x803D0000u; // 8010ED3C
  W8(c->r[29]+0x00000000u,c->r[4]); // 8010ED40
  c->r[5]=0u+0x00000001u; // 8010ED44
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010ED48
  c->r[4]=c->r[6]+c->r[0]; // 8010ED4C
  W8(c->r[4]+0x0000000Au,c->r[5]); // 8010ED50
  c->r[4]=0u+0x00000000u; // 8010ED54
  c->r[5]=0u+0x00000000u; // 8010ED58
  c->r[12]=R32(c->r[6]+0x00000340u); // 8010ED5C
  c->r[6]=0u+0x00000000u; // 8010ED60
  c->ctr=c->r[12]; // 8010ED64
  if (true) { c->lr=0x8010ED6Cu; dispatch(c,c->ctr); } // 8010ED68
L_8010ED6C:;
  c->r[11]=c->r[1]+0x00000020u; // 8010ED6C
  c->lr=0x8010ED74u; f_800ADA78(c); // 8010ED70
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010ED74
  c->lr=c->r[0]; // 8010ED78
  c->r[1]=c->r[1]+0x00000020u; // 8010ED7C
  return; // 8010ED80
}

// hidh_l2cif_disconnect_ind
void f_8010ED84(Ctx* __restrict c) {
  trace_call(0x8010ED84u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010ED84
  c->r[0]=c->lr; // 8010ED88
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010ED8C
  c->r[11]=c->r[1]+0x00000020u; // 8010ED90
  c->lr=0x8010ED98u; f_800ADA2C(c); // 8010ED94
  c->r[5]=0u+0x803D0000u; // 8010ED98
  c->r[0]=0u+0x00000004u; // 8010ED9C
  c->r[27]=c->r[3]|c->r[3]; // 8010EDA0
  c->r[28]=c->r[4]|c->r[4]; // 8010EDA4
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010EDA8
  c->r[30]=0u+0x00000000u; // 8010EDAC
  c->r[29]=0u+0x00000000u; // 8010EDB0
  c->r[31]=0u+0x00000000u; // 8010EDB4
  c->ctr=c->r[0]; // 8010EDB8
L_8010EDBC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010EDBC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EDC0
  c->r[6]=c->r[5]+c->r[0]; // 8010EDC4
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010EDC8
  cmps(c,0,(int32_t)c->r[0],0); // 8010EDCC
  if (crb(c,2)) { goto L_8010EDF8; } // 8010EDD0
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010EDD4
  cmps(c,0,(int32_t)c->r[0],0); // 8010EDD8
  if (crb(c,2)) { goto L_8010EDF8; } // 8010EDDC
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010EDE0
  cmpu(c,0,c->r[3],c->r[0]); // 8010EDE4
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EDE8
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010EDEC
  cmpu(c,0,c->r[3],c->r[0]); // 8010EDF0
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EDF4
L_8010EDF8:;
  c->r[31]=c->r[31]+0x00000001u; // 8010EDF8
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010EDFC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EE00
  c->r[6]=c->r[5]+c->r[0]; // 8010EE04
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010EE08
  cmps(c,0,(int32_t)c->r[0],0); // 8010EE0C
  if (crb(c,2)) { goto L_8010EE38; } // 8010EE10
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010EE14
  cmps(c,0,(int32_t)c->r[0],0); // 8010EE18
  if (crb(c,2)) { goto L_8010EE38; } // 8010EE1C
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010EE20
  cmpu(c,0,c->r[3],c->r[0]); // 8010EE24
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EE28
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010EE2C
  cmpu(c,0,c->r[3],c->r[0]); // 8010EE30
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EE34
L_8010EE38:;
  c->r[31]=c->r[31]+0x00000001u; // 8010EE38
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010EE3C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EE40
  c->r[6]=c->r[5]+c->r[0]; // 8010EE44
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010EE48
  cmps(c,0,(int32_t)c->r[0],0); // 8010EE4C
  if (crb(c,2)) { goto L_8010EE78; } // 8010EE50
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010EE54
  cmps(c,0,(int32_t)c->r[0],0); // 8010EE58
  if (crb(c,2)) { goto L_8010EE78; } // 8010EE5C
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010EE60
  cmpu(c,0,c->r[3],c->r[0]); // 8010EE64
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EE68
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010EE6C
  cmpu(c,0,c->r[3],c->r[0]); // 8010EE70
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EE74
L_8010EE78:;
  c->r[31]=c->r[31]+0x00000001u; // 8010EE78
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010EE7C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EE80
  c->r[6]=c->r[5]+c->r[0]; // 8010EE84
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010EE88
  cmps(c,0,(int32_t)c->r[0],0); // 8010EE8C
  if (crb(c,2)) { goto L_8010EEB8; } // 8010EE90
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010EE94
  cmps(c,0,(int32_t)c->r[0],0); // 8010EE98
  if (crb(c,2)) { goto L_8010EEB8; } // 8010EE9C
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010EEA0
  cmpu(c,0,c->r[3],c->r[0]); // 8010EEA4
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EEA8
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010EEAC
  cmpu(c,0,c->r[3],c->r[0]); // 8010EEB0
  if (crb(c,2)) { goto L_8010EEC0; } // 8010EEB4
L_8010EEB8:;
  c->r[31]=c->r[31]+0x00000001u; // 8010EEB8
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010EDBC; } // 8010EEBC
L_8010EEC0:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010EEC0
  cmpu(c,0,c->r[0],0x00000010u); // 8010EEC4
  if (crb(c,2)) { goto L_8010EEE0; } // 8010EEC8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EECC
  c->r[3]=0u+0x803D0000u; // 8010EED0
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EED4
  c->r[30]=c->r[3]+c->r[0]; // 8010EED8
  c->r[30]=c->r[30]+0x00000010u; // 8010EEDC
L_8010EEE0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010EEE0
  if (!crb(c,2)) { goto L_8010EF18; } // 8010EEE4
  c->r[3]=0u+0x803D0000u; // 8010EEE8
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EEEC
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010EEF0
  cmpu(c,0,c->r[0],0x00000002u); // 8010EEF4
  if (crb(c,0)) { goto L_8010F030; } // 8010EEF8
  c->r[3]=0u+0x001E0000u; // 8010EEFC
  c->r[4]=0u+0x80330000u; // 8010EF00
  c->r[5]=c->r[27]|c->r[27]; // 8010EF04
  c->r[3]=c->r[3]+0x00000001u; // 8010EF08
  c->r[4]=c->r[4]+0xFFFFC818u; // 8010EF0C
  c->lr=0x8010EF14u; f_800F72A0(c); // 8010EF10
  goto L_8010F030; // 8010EF14
L_8010EF18:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010EF18
  if (crb(c,2)) { goto L_8010EF28; } // 8010EF1C
  c->r[3]=c->r[27]|c->r[27]; // 8010EF20
  c->lr=0x8010EF28u; f_80110400(c); // 8010EF24
L_8010EF28:;
  c->r[3]=0u+0x803D0000u; // 8010EF28
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EF2C
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010EF30
  cmpu(c,0,c->r[0],0x00000004u); // 8010EF34
  if (crb(c,0)) { goto L_8010EF54; } // 8010EF38
  c->r[3]=0u+0x001E0000u; // 8010EF3C
  c->r[4]=0u+0x80330000u; // 8010EF40
  c->r[5]=c->r[27]|c->r[27]; // 8010EF44
  c->r[3]=c->r[3]+0x00000003u; // 8010EF48
  c->r[4]=c->r[4]+0xFFFFC844u; // 8010EF4C
  c->lr=0x8010EF54u; f_800F72A0(c); // 8010EF50
L_8010EF54:;
  c->r[0]=0u+0x00000005u; // 8010EF54
  W8(c->r[30]+0x00000000u,c->r[0]); // 8010EF58
  c->r[0]=R16(c->r[30]+0x00000004u); // 8010EF5C
  cmpu(c,0,c->r[27],c->r[0]); // 8010EF60
  if (!crb(c,2)) { goto L_8010EF74; } // 8010EF64
  c->r[0]=0u+0x00000000u; // 8010EF68
  W16(c->r[30]+0x00000004u,c->r[0]); // 8010EF6C
  goto L_8010EF7C; // 8010EF70
L_8010EF74:;
  c->r[0]=0u+0x00000000u; // 8010EF74
  W16(c->r[30]+0x00000006u,c->r[0]); // 8010EF78
L_8010EF7C:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 8010EF7C
  cmps(c,0,(int32_t)c->r[0],0); // 8010EF80
  if (!crb(c,2)) { goto L_8010F030; } // 8010EF84
  c->r[0]=R16(c->r[30]+0x00000006u); // 8010EF88
  cmps(c,0,(int32_t)c->r[0],0); // 8010EF8C
  if (!crb(c,2)) { goto L_8010F030; } // 8010EF90
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010EF94
  c->r[3]=0u+0x803D0000u; // 8010EF98
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010EF9C
  c->r[4]=0u+0x00000000u; // 8010EFA0
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010EFA4
  cmps(c,0,(int32_t)c->r[28],0); // 8010EFA8
  c->r[3]=c->r[3]+c->r[0]; // 8010EFAC
  W8(c->r[3]+0x0000000Au,c->r[4]); // 8010EFB0
  W8(c->r[30]+0x00000000u,c->r[4]); // 8010EFB4
  if (!crb(c,2)) { goto L_8010EFC4; } // 8010EFB8
  c->lr=0x8010EFC0u; f_800FE748(c); // 8010EFBC
  c->r[29]=c->r[3]|c->r[3]; // 8010EFC0
L_8010EFC4:;
  c->r[0]=rotl(c->r[29],0)&0x0000FFFFu; // 8010EFC4
  c->r[5]=R16(c->r[30]+0x0000000Au); // 8010EFC8
  cmpu(c,0,c->r[0],0x00000005u); // 8010EFCC
  if (crb(c,2)) { goto L_8010F00C; } // 8010EFD0
  cmpu(c,0,c->r[0],0x00000006u); // 8010EFD4
  if (crb(c,2)) { goto L_8010F00C; } // 8010EFD8
  cmpu(c,0,c->r[0],0x0000000Eu); // 8010EFDC
  if (crb(c,2)) { goto L_8010F00C; } // 8010EFE0
  cmpu(c,0,c->r[0],0x00000018u); // 8010EFE4
  if (crb(c,2)) { goto L_8010F00C; } // 8010EFE8
  cmpu(c,0,c->r[0],0x00000026u); // 8010EFEC
  if (crb(c,2)) { goto L_8010F00C; } // 8010EFF0
  cmpu(c,0,c->r[0],0x00000029u); // 8010EFF4
  if (crb(c,2)) { goto L_8010F00C; } // 8010EFF8
  cmpu(c,0,c->r[0],0x00000025u); // 8010EFFC
  if (crb(c,2)) { goto L_8010F00C; } // 8010F000
  cmpu(c,0,c->r[0],0x00000017u); // 8010F004
  if (!crb(c,2)) { goto L_8010F010; } // 8010F008
L_8010F00C:;
  c->r[5]=0u+0x0000000Fu; // 8010F00C
L_8010F010:;
  c->r[4]=0u+0x803D0000u; // 8010F010
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010F014
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010F018
  c->r[6]=0u+0x00000000u; // 8010F01C
  c->r[12]=R32(c->r[4]+0x00000340u); // 8010F020
  c->r[4]=0u+0x00000001u; // 8010F024
  c->ctr=c->r[12]; // 8010F028
  if (true) { c->lr=0x8010F030u; dispatch(c,c->ctr); } // 8010F02C
L_8010F030:;
  c->r[11]=c->r[1]+0x00000020u; // 8010F030
  c->lr=0x8010F038u; f_800ADA78(c); // 8010F034
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F038
  c->lr=c->r[0]; // 8010F03C
  c->r[1]=c->r[1]+0x00000020u; // 8010F040
  return; // 8010F044
}

// hidh_l2cif_disconnect_cfm
void f_8010F048(Ctx* __restrict c) {
  trace_call(0x8010F048u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F048
  c->r[0]=c->lr; // 8010F04C
  c->r[4]=0u+0x803D0000u; // 8010F050
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F054
  c->r[0]=0u+0x00000004u; // 8010F058
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010F05C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F060
  c->r[31]=0u+0x00000000u; // 8010F064
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010F068
  c->r[30]=0u+0x00000000u; // 8010F06C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010F070
  c->r[29]=c->r[3]|c->r[3]; // 8010F074
  c->ctr=c->r[0]; // 8010F078
L_8010F07C:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F07C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F080
  c->r[5]=c->r[4]+c->r[0]; // 8010F084
  c->r[0]=R8(c->r[4]+c->r[0]); // 8010F088
  cmps(c,0,(int32_t)c->r[0],0); // 8010F08C
  if (crb(c,2)) { goto L_8010F0B8; } // 8010F090
  c->r[0]=R8(c->r[5]+0x00000010u); // 8010F094
  cmps(c,0,(int32_t)c->r[0],0); // 8010F098
  if (crb(c,2)) { goto L_8010F0B8; } // 8010F09C
  c->r[0]=R16(c->r[5]+0x00000014u); // 8010F0A0
  cmpu(c,0,c->r[3],c->r[0]); // 8010F0A4
  if (crb(c,2)) { goto L_8010F180; } // 8010F0A8
  c->r[0]=R16(c->r[5]+0x00000016u); // 8010F0AC
  cmpu(c,0,c->r[3],c->r[0]); // 8010F0B0
  if (crb(c,2)) { goto L_8010F180; } // 8010F0B4
L_8010F0B8:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F0B8
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F0BC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F0C0
  c->r[5]=c->r[4]+c->r[0]; // 8010F0C4
  c->r[0]=R8(c->r[4]+c->r[0]); // 8010F0C8
  cmps(c,0,(int32_t)c->r[0],0); // 8010F0CC
  if (crb(c,2)) { goto L_8010F0F8; } // 8010F0D0
  c->r[0]=R8(c->r[5]+0x00000010u); // 8010F0D4
  cmps(c,0,(int32_t)c->r[0],0); // 8010F0D8
  if (crb(c,2)) { goto L_8010F0F8; } // 8010F0DC
  c->r[0]=R16(c->r[5]+0x00000014u); // 8010F0E0
  cmpu(c,0,c->r[3],c->r[0]); // 8010F0E4
  if (crb(c,2)) { goto L_8010F180; } // 8010F0E8
  c->r[0]=R16(c->r[5]+0x00000016u); // 8010F0EC
  cmpu(c,0,c->r[3],c->r[0]); // 8010F0F0
  if (crb(c,2)) { goto L_8010F180; } // 8010F0F4
L_8010F0F8:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F0F8
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F0FC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F100
  c->r[5]=c->r[4]+c->r[0]; // 8010F104
  c->r[0]=R8(c->r[4]+c->r[0]); // 8010F108
  cmps(c,0,(int32_t)c->r[0],0); // 8010F10C
  if (crb(c,2)) { goto L_8010F138; } // 8010F110
  c->r[0]=R8(c->r[5]+0x00000010u); // 8010F114
  cmps(c,0,(int32_t)c->r[0],0); // 8010F118
  if (crb(c,2)) { goto L_8010F138; } // 8010F11C
  c->r[0]=R16(c->r[5]+0x00000014u); // 8010F120
  cmpu(c,0,c->r[3],c->r[0]); // 8010F124
  if (crb(c,2)) { goto L_8010F180; } // 8010F128
  c->r[0]=R16(c->r[5]+0x00000016u); // 8010F12C
  cmpu(c,0,c->r[3],c->r[0]); // 8010F130
  if (crb(c,2)) { goto L_8010F180; } // 8010F134
L_8010F138:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F138
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F13C
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F140
  c->r[5]=c->r[4]+c->r[0]; // 8010F144
  c->r[0]=R8(c->r[4]+c->r[0]); // 8010F148
  cmps(c,0,(int32_t)c->r[0],0); // 8010F14C
  if (crb(c,2)) { goto L_8010F178; } // 8010F150
  c->r[0]=R8(c->r[5]+0x00000010u); // 8010F154
  cmps(c,0,(int32_t)c->r[0],0); // 8010F158
  if (crb(c,2)) { goto L_8010F178; } // 8010F15C
  c->r[0]=R16(c->r[5]+0x00000014u); // 8010F160
  cmpu(c,0,c->r[3],c->r[0]); // 8010F164
  if (crb(c,2)) { goto L_8010F180; } // 8010F168
  c->r[0]=R16(c->r[5]+0x00000016u); // 8010F16C
  cmpu(c,0,c->r[3],c->r[0]); // 8010F170
  if (crb(c,2)) { goto L_8010F180; } // 8010F174
L_8010F178:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F178
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010F07C; } // 8010F17C
L_8010F180:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F180
  cmpu(c,0,c->r[0],0x00000010u); // 8010F184
  if (crb(c,2)) { goto L_8010F1A0; } // 8010F188
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F18C
  c->r[3]=0u+0x803D0000u; // 8010F190
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F194
  c->r[30]=c->r[3]+c->r[0]; // 8010F198
  c->r[30]=c->r[30]+0x00000010u; // 8010F19C
L_8010F1A0:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010F1A0
  if (!crb(c,2)) { goto L_8010F1D8; } // 8010F1A4
  c->r[3]=0u+0x803D0000u; // 8010F1A8
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F1AC
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010F1B0
  cmpu(c,0,c->r[0],0x00000002u); // 8010F1B4
  if (crb(c,0)) { goto L_8010F274; } // 8010F1B8
  c->r[3]=0u+0x001E0000u; // 8010F1BC
  c->r[4]=0u+0x80330000u; // 8010F1C0
  c->r[5]=c->r[29]|c->r[29]; // 8010F1C4
  c->r[3]=c->r[3]+0x00000001u; // 8010F1C8
  c->r[4]=c->r[4]+0xFFFFC868u; // 8010F1CC
  c->lr=0x8010F1D4u; f_800F72A0(c); // 8010F1D0
  goto L_8010F274; // 8010F1D4
L_8010F1D8:;
  c->r[3]=0u+0x803D0000u; // 8010F1D8
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F1DC
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010F1E0
  cmpu(c,0,c->r[0],0x00000004u); // 8010F1E4
  if (crb(c,0)) { goto L_8010F204; } // 8010F1E8
  c->r[3]=0u+0x001E0000u; // 8010F1EC
  c->r[4]=0u+0x80330000u; // 8010F1F0
  c->r[5]=c->r[29]|c->r[29]; // 8010F1F4
  c->r[3]=c->r[3]+0x00000003u; // 8010F1F8
  c->r[4]=c->r[4]+0xFFFFC898u; // 8010F1FC
  c->lr=0x8010F204u; f_800F72A0(c); // 8010F200
L_8010F204:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 8010F204
  cmpu(c,0,c->r[29],c->r[0]); // 8010F208
  if (!crb(c,2)) { goto L_8010F21C; } // 8010F20C
  c->r[0]=0u+0x00000000u; // 8010F210
  W16(c->r[30]+0x00000004u,c->r[0]); // 8010F214
  goto L_8010F224; // 8010F218
L_8010F21C:;
  c->r[0]=0u+0x00000000u; // 8010F21C
  W16(c->r[30]+0x00000006u,c->r[0]); // 8010F220
L_8010F224:;
  c->r[0]=R16(c->r[30]+0x00000004u); // 8010F224
  cmps(c,0,(int32_t)c->r[0],0); // 8010F228
  if (!crb(c,2)) { goto L_8010F274; } // 8010F22C
  c->r[0]=R16(c->r[30]+0x00000006u); // 8010F230
  cmps(c,0,(int32_t)c->r[0],0); // 8010F234
  if (!crb(c,2)) { goto L_8010F274; } // 8010F238
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010F23C
  c->r[7]=0u+0x803D0000u; // 8010F240
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010F244
  c->r[8]=0u+0x00000000u; // 8010F248
  c->r[7]=c->r[7]+0xFFFFCED8u; // 8010F24C
  c->r[4]=0u+0x00000001u; // 8010F250
  c->r[5]=c->r[7]+c->r[0]; // 8010F254
  c->r[6]=0u+0x00000000u; // 8010F258
  W8(c->r[5]+0x0000000Au,c->r[8]); // 8010F25C
  W8(c->r[30]+0x00000000u,c->r[8]); // 8010F260
  c->r[12]=R32(c->r[7]+0x00000340u); // 8010F264
  c->r[5]=R16(c->r[30]+0x0000000Au); // 8010F268
  c->ctr=c->r[12]; // 8010F26C
  if (true) { c->lr=0x8010F274u; dispatch(c,c->ctr); } // 8010F270
L_8010F274:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F274
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010F278
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010F27C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010F280
  c->lr=c->r[0]; // 8010F284
  c->r[1]=c->r[1]+0x00000020u; // 8010F288
  return; // 8010F28C
}

// hidh_l2cif_cong_ind
void f_8010F290(Ctx* __restrict c) {
  trace_call(0x8010F290u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F290
  c->r[0]=c->lr; // 8010F294
  c->r[5]=0u+0x803D0000u; // 8010F298
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010F29C
  c->r[0]=0u+0x00000004u; // 8010F2A0
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010F2A4
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010F2A8
  c->r[31]=0u+0x00000000u; // 8010F2AC
  W32(c->r[1]+0x00000008u,c->r[30]); // 8010F2B0
  c->r[30]=c->r[4]|c->r[4]; // 8010F2B4
  c->r[4]=0u+0x00000000u; // 8010F2B8
  c->ctr=c->r[0]; // 8010F2BC
L_8010F2C0:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8010F2C0
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F2C4
  c->r[6]=c->r[5]+c->r[0]; // 8010F2C8
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010F2CC
  cmps(c,0,(int32_t)c->r[0],0); // 8010F2D0
  if (crb(c,2)) { goto L_8010F2FC; } // 8010F2D4
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010F2D8
  cmps(c,0,(int32_t)c->r[0],0); // 8010F2DC
  if (crb(c,2)) { goto L_8010F2FC; } // 8010F2E0
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010F2E4
  cmpu(c,0,c->r[3],c->r[0]); // 8010F2E8
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F2EC
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010F2F0
  cmpu(c,0,c->r[3],c->r[0]); // 8010F2F4
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F2F8
L_8010F2FC:;
  c->r[4]=c->r[4]+0x00000001u; // 8010F2FC
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8010F300
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F304
  c->r[6]=c->r[5]+c->r[0]; // 8010F308
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010F30C
  cmps(c,0,(int32_t)c->r[0],0); // 8010F310
  if (crb(c,2)) { goto L_8010F33C; } // 8010F314
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010F318
  cmps(c,0,(int32_t)c->r[0],0); // 8010F31C
  if (crb(c,2)) { goto L_8010F33C; } // 8010F320
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010F324
  cmpu(c,0,c->r[3],c->r[0]); // 8010F328
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F32C
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010F330
  cmpu(c,0,c->r[3],c->r[0]); // 8010F334
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F338
L_8010F33C:;
  c->r[4]=c->r[4]+0x00000001u; // 8010F33C
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8010F340
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F344
  c->r[6]=c->r[5]+c->r[0]; // 8010F348
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010F34C
  cmps(c,0,(int32_t)c->r[0],0); // 8010F350
  if (crb(c,2)) { goto L_8010F37C; } // 8010F354
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010F358
  cmps(c,0,(int32_t)c->r[0],0); // 8010F35C
  if (crb(c,2)) { goto L_8010F37C; } // 8010F360
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010F364
  cmpu(c,0,c->r[3],c->r[0]); // 8010F368
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F36C
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010F370
  cmpu(c,0,c->r[3],c->r[0]); // 8010F374
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F378
L_8010F37C:;
  c->r[4]=c->r[4]+0x00000001u; // 8010F37C
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8010F380
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F384
  c->r[6]=c->r[5]+c->r[0]; // 8010F388
  c->r[0]=R8(c->r[5]+c->r[0]); // 8010F38C
  cmps(c,0,(int32_t)c->r[0],0); // 8010F390
  if (crb(c,2)) { goto L_8010F3BC; } // 8010F394
  c->r[0]=R8(c->r[6]+0x00000010u); // 8010F398
  cmps(c,0,(int32_t)c->r[0],0); // 8010F39C
  if (crb(c,2)) { goto L_8010F3BC; } // 8010F3A0
  c->r[0]=R16(c->r[6]+0x00000014u); // 8010F3A4
  cmpu(c,0,c->r[3],c->r[0]); // 8010F3A8
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F3AC
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010F3B0
  cmpu(c,0,c->r[3],c->r[0]); // 8010F3B4
  if (crb(c,2)) { goto L_8010F3C4; } // 8010F3B8
L_8010F3BC:;
  c->r[4]=c->r[4]+0x00000001u; // 8010F3BC
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010F2C0; } // 8010F3C0
L_8010F3C4:;
  c->r[0]=rotl(c->r[4],0)&0x000000FFu; // 8010F3C4
  cmpu(c,0,c->r[0],0x00000010u); // 8010F3C8
  if (crb(c,2)) { goto L_8010F3E4; } // 8010F3CC
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F3D0
  c->r[4]=0u+0x803D0000u; // 8010F3D4
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010F3D8
  c->r[31]=c->r[4]+c->r[0]; // 8010F3DC
  c->r[31]=c->r[31]+0x00000010u; // 8010F3E0
L_8010F3E4:;
  cmps(c,0,(int32_t)c->r[31],0); // 8010F3E4
  if (!crb(c,2)) { goto L_8010F41C; } // 8010F3E8
  c->r[4]=0u+0x803D0000u; // 8010F3EC
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010F3F0
  c->r[0]=R8(c->r[4]+0x00000401u); // 8010F3F4
  cmpu(c,0,c->r[0],0x00000002u); // 8010F3F8
  if (crb(c,0)) { goto L_8010F470; } // 8010F3FC
  c->r[4]=0u+0x80330000u; // 8010F400
  c->r[6]=0u+0x001E0000u; // 8010F404
  c->r[5]=c->r[3]|c->r[3]; // 8010F408
  c->r[3]=c->r[6]+0x00000001u; // 8010F40C
  c->r[4]=c->r[4]+0xFFFFC8C0u; // 8010F410
  c->lr=0x8010F418u; f_800F72A0(c); // 8010F414
  goto L_8010F470; // 8010F418
L_8010F41C:;
  c->r[4]=0u+0x803D0000u; // 8010F41C
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010F420
  c->r[0]=R8(c->r[4]+0x00000401u); // 8010F424
  cmpu(c,0,c->r[0],0x00000004u); // 8010F428
  if (crb(c,0)) { goto L_8010F44C; } // 8010F42C
  c->r[4]=0u+0x80330000u; // 8010F430
  c->r[7]=0u+0x001E0000u; // 8010F434
  c->r[5]=c->r[3]|c->r[3]; // 8010F438
  c->r[6]=c->r[30]|c->r[30]; // 8010F43C
  c->r[3]=c->r[7]+0x00000003u; // 8010F440
  c->r[4]=c->r[4]+0xFFFFC8F8u; // 8010F444
  c->lr=0x8010F44Cu; f_800F72C0(c); // 8010F448
L_8010F44C:;
  cmps(c,0,(int32_t)c->r[30],0); // 8010F44C
  if (crb(c,2)) { goto L_8010F464; } // 8010F450
  c->r[0]=R8(c->r[31]+0x00000001u); // 8010F454
  c->r[0]=c->r[0]|0x00000020u; // 8010F458
  W8(c->r[31]+0x00000001u,c->r[0]); // 8010F45C
  goto L_8010F470; // 8010F460
L_8010F464:;
  c->r[0]=R8(c->r[31]+0x00000001u); // 8010F464
  c->r[0]=rotl(c->r[0],0)&0xFFFFFFDFu; // 8010F468
  W8(c->r[31]+0x00000001u,c->r[0]); // 8010F46C
L_8010F470:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010F470
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010F474
  c->r[30]=R32(c->r[1]+0x00000008u); // 8010F478
  c->lr=c->r[0]; // 8010F47C
  c->r[1]=c->r[1]+0x00000010u; // 8010F480
  return; // 8010F484
}

// hidh_l2cif_data_ind
void f_8010F488(Ctx* __restrict c) {
  trace_call(0x8010F488u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F488
  c->r[0]=c->lr; // 8010F48C
  c->r[6]=0u+0x803D0000u; // 8010F490
  c->r[5]=c->r[3]|c->r[3]; // 8010F494
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010F498
  c->r[0]=0u+0x00000004u; // 8010F49C
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010F4A0
  c->r[9]=0u+0x00000000u; // 8010F4A4
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010F4A8
  c->r[31]=0u+0x00000000u; // 8010F4AC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010F4B0
  c->r[30]=c->r[4]|c->r[4]; // 8010F4B4
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010F4B8
  c->r[7]=R16(c->r[4]+0x00000004u); // 8010F4BC
  c->r[7]=c->r[4]+c->r[7]; // 8010F4C0
  c->ctr=c->r[0]; // 8010F4C4
L_8010F4C8:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F4C8
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F4CC
  c->r[8]=c->r[6]+c->r[0]; // 8010F4D0
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010F4D4
  cmps(c,0,(int32_t)c->r[0],0); // 8010F4D8
  if (crb(c,2)) { goto L_8010F504; } // 8010F4DC
  c->r[0]=R8(c->r[8]+0x00000010u); // 8010F4E0
  cmps(c,0,(int32_t)c->r[0],0); // 8010F4E4
  if (crb(c,2)) { goto L_8010F504; } // 8010F4E8
  c->r[0]=R16(c->r[8]+0x00000014u); // 8010F4EC
  cmpu(c,0,c->r[3],c->r[0]); // 8010F4F0
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F4F4
  c->r[0]=R16(c->r[8]+0x00000016u); // 8010F4F8
  cmpu(c,0,c->r[3],c->r[0]); // 8010F4FC
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F500
L_8010F504:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F504
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F508
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F50C
  c->r[8]=c->r[6]+c->r[0]; // 8010F510
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010F514
  cmps(c,0,(int32_t)c->r[0],0); // 8010F518
  if (crb(c,2)) { goto L_8010F544; } // 8010F51C
  c->r[0]=R8(c->r[8]+0x00000010u); // 8010F520
  cmps(c,0,(int32_t)c->r[0],0); // 8010F524
  if (crb(c,2)) { goto L_8010F544; } // 8010F528
  c->r[0]=R16(c->r[8]+0x00000014u); // 8010F52C
  cmpu(c,0,c->r[3],c->r[0]); // 8010F530
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F534
  c->r[0]=R16(c->r[8]+0x00000016u); // 8010F538
  cmpu(c,0,c->r[3],c->r[0]); // 8010F53C
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F540
L_8010F544:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F544
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F548
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F54C
  c->r[8]=c->r[6]+c->r[0]; // 8010F550
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010F554
  cmps(c,0,(int32_t)c->r[0],0); // 8010F558
  if (crb(c,2)) { goto L_8010F584; } // 8010F55C
  c->r[0]=R8(c->r[8]+0x00000010u); // 8010F560
  cmps(c,0,(int32_t)c->r[0],0); // 8010F564
  if (crb(c,2)) { goto L_8010F584; } // 8010F568
  c->r[0]=R16(c->r[8]+0x00000014u); // 8010F56C
  cmpu(c,0,c->r[3],c->r[0]); // 8010F570
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F574
  c->r[0]=R16(c->r[8]+0x00000016u); // 8010F578
  cmpu(c,0,c->r[3],c->r[0]); // 8010F57C
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F580
L_8010F584:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F584
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F588
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F58C
  c->r[8]=c->r[6]+c->r[0]; // 8010F590
  c->r[0]=R8(c->r[6]+c->r[0]); // 8010F594
  cmps(c,0,(int32_t)c->r[0],0); // 8010F598
  if (crb(c,2)) { goto L_8010F5C4; } // 8010F59C
  c->r[0]=R8(c->r[8]+0x00000010u); // 8010F5A0
  cmps(c,0,(int32_t)c->r[0],0); // 8010F5A4
  if (crb(c,2)) { goto L_8010F5C4; } // 8010F5A8
  c->r[0]=R16(c->r[8]+0x00000014u); // 8010F5AC
  cmpu(c,0,c->r[3],c->r[0]); // 8010F5B0
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F5B4
  c->r[0]=R16(c->r[8]+0x00000016u); // 8010F5B8
  cmpu(c,0,c->r[3],c->r[0]); // 8010F5BC
  if (crb(c,2)) { goto L_8010F5CC; } // 8010F5C0
L_8010F5C4:;
  c->r[31]=c->r[31]+0x00000001u; // 8010F5C4
  c->ctr--; if (c->ctr != 0) { IRQCHK(c); goto L_8010F4C8; } // 8010F5C8
L_8010F5CC:;
  c->r[0]=rotl(c->r[31],0)&0x000000FFu; // 8010F5CC
  cmpu(c,0,c->r[0],0x00000010u); // 8010F5D0
  if (crb(c,2)) { goto L_8010F5EC; } // 8010F5D4
  c->r[0]=(uint32_t)((int32_t)c->r[0]*(int32_t)52); // 8010F5D8
  c->r[3]=0u+0x803D0000u; // 8010F5DC
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F5E0
  c->r[9]=c->r[3]+c->r[0]; // 8010F5E4
  c->r[9]=c->r[9]+0x00000010u; // 8010F5E8
L_8010F5EC:;
  cmps(c,0,(int32_t)c->r[9],0); // 8010F5EC
  if (!crb(c,2)) { goto L_8010F628; } // 8010F5F0
  c->r[3]=0u+0x803D0000u; // 8010F5F4
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F5F8
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010F5FC
  cmpu(c,0,c->r[0],0x00000002u); // 8010F600
  if (crb(c,0)) { goto L_8010F61C; } // 8010F604
  c->r[3]=0u+0x001E0000u; // 8010F608
  c->r[4]=0u+0x80330000u; // 8010F60C
  c->r[3]=c->r[3]+0x00000001u; // 8010F610
  c->r[4]=c->r[4]+0xFFFFC930u; // 8010F614
  c->lr=0x8010F61Cu; f_800F72A0(c); // 8010F618
L_8010F61C:;
  c->r[3]=c->r[30]|c->r[30]; // 8010F61C
  c->lr=0x8010F624u; f_800F47C0(c); // 8010F620
  goto L_8010F804; // 8010F624
L_8010F628:;
  c->r[7]=R8(c->r[7]+0x00000008u); // 8010F628
  c->r[6]=R16(c->r[4]+0x00000002u); // 8010F62C
  c->r[3]=R16(c->r[4]+0x00000004u); // 8010F630
  c->r[0]=rotl(c->r[7],28)&0x0000000Fu; // 8010F634
  c->r[6]=c->r[6]+0xFFFFFFFFu; // 8010F638
  c->r[8]=rotl(c->r[7],0)&0x0000000Fu; // 8010F63C
  c->r[3]=c->r[3]+0x00000001u; // 8010F640
  cmps(c,0,(int32_t)c->r[0],10); // 8010F644
  W16(c->r[4]+0x00000002u,c->r[6]); // 8010F648
  c->r[7]=rotl(c->r[7],0)&0x00000003u; // 8010F64C
  W16(c->r[4]+0x00000004u,c->r[3]); // 8010F650
  if (crb(c,2)) { goto L_8010F76C; } // 8010F654
  if (!crb(c,0)) { goto L_8010F674; } // 8010F658
  cmps(c,0,(int32_t)c->r[0],1); // 8010F65C
  if (crb(c,2)) { goto L_8010F6B0; } // 8010F660
  if (!crb(c,0)) { goto L_8010F7FC; } // 8010F664
  cmps(c,0,(int32_t)c->r[0],0); // 8010F668
  if (!crb(c,0)) { goto L_8010F680; } // 8010F66C
  goto L_8010F7FC; // 8010F670
L_8010F674:;
  cmps(c,0,(int32_t)c->r[0],12); // 8010F674
  if (!crb(c,0)) { goto L_8010F7FC; } // 8010F678
  goto L_8010F7B4; // 8010F67C
L_8010F680:;
  c->r[4]=0u+0x803D0000u; // 8010F680
  c->r[5]=c->r[8]|c->r[8]; // 8010F684
  c->r[4]=c->r[4]+0xFFFFCED8u; // 8010F688
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010F68C
  c->r[12]=R32(c->r[4]+0x00000340u); // 8010F690
  c->r[4]=0u+0x00000007u; // 8010F694
  c->r[6]=0u+0x00000000u; // 8010F698
  c->ctr=c->r[12]; // 8010F69C
  if (true) { c->lr=0x8010F6A4u; dispatch(c,c->ctr); } // 8010F6A0
  c->r[3]=c->r[30]|c->r[30]; // 8010F6A4
  c->lr=0x8010F6ACu; f_800F47C0(c); // 8010F6A8
  goto L_8010F804; // 8010F6AC
L_8010F6B0:;
  cmps(c,0,(int32_t)c->r[8],5); // 8010F6B0
  if (crb(c,2)) { goto L_8010F6BC; } // 8010F6B4
  goto L_8010F760; // 8010F6B8
L_8010F6BC:;
  c->r[3]=0u+0x803D0000u; // 8010F6BC
  c->r[4]=rotl(c->r[31],0)&0x000000FFu; // 8010F6C0
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F6C4
  c->r[0]=R8(c->r[3]+0x00000401u); // 8010F6C8
  c->r[4]=(uint32_t)((int32_t)c->r[4]*(int32_t)52); // 8010F6CC
  cmpu(c,0,c->r[0],0x00000004u); // 8010F6D0
  c->r[29]=c->r[3]+c->r[4]; // 8010F6D4
  if (crb(c,0)) { goto L_8010F6F0; } // 8010F6D8
  c->r[3]=0u+0x001E0000u; // 8010F6DC
  c->r[4]=0u+0x80330000u; // 8010F6E0
  c->r[3]=c->r[3]+0x00000003u; // 8010F6E4
  c->r[4]=c->r[4]+0xFFFFC5BCu; // 8010F6E8
  c->lr=0x8010F6F0u; f_800F7280(c); // 8010F6EC
L_8010F6F0:;
  c->r[0]=R16(c->r[29]+0x00000014u); // 8010F6F0
  cmps(c,0,(int32_t)c->r[0],0); // 8010F6F4
  if (!crb(c,2)) { goto L_8010F708; } // 8010F6F8
  c->r[0]=R16(c->r[29]+0x00000016u); // 8010F6FC
  cmps(c,0,(int32_t)c->r[0],0); // 8010F700
  if (crb(c,2)) { goto L_8010F734; } // 8010F704
L_8010F708:;
  c->r[0]=0u+0x00000005u; // 8010F708
  W8(c->r[29]+0x00000010u,c->r[0]); // 8010F70C
  c->r[3]=R16(c->r[29]+0x00000016u); // 8010F710
  cmps(c,0,(int32_t)c->r[3],0); // 8010F714
  if (crb(c,2)) { goto L_8010F720; } // 8010F718
  c->lr=0x8010F720u; f_8011035C(c); // 8010F71C
L_8010F720:;
  c->r[3]=R16(c->r[29]+0x00000014u); // 8010F720
  cmps(c,0,(int32_t)c->r[3],0); // 8010F724
  if (crb(c,2)) { goto L_8010F73C; } // 8010F728
  c->lr=0x8010F730u; f_8011035C(c); // 8010F72C
  goto L_8010F73C; // 8010F730
L_8010F734:;
  c->r[0]=0u+0x00000000u; // 8010F734
  W8(c->r[29]+0x00000010u,c->r[0]); // 8010F738
L_8010F73C:;
  c->r[5]=0u+0x803D0000u; // 8010F73C
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010F740
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010F744
  c->r[4]=0u+0x00000008u; // 8010F748
  c->r[12]=R32(c->r[5]+0x00000340u); // 8010F74C
  c->r[5]=0u+0x00000000u; // 8010F750
  c->r[6]=0u+0x00000000u; // 8010F754
  c->ctr=c->r[12]; // 8010F758
  if (true) { c->lr=0x8010F760u; dispatch(c,c->ctr); } // 8010F75C
L_8010F760:;
  c->r[3]=c->r[30]|c->r[30]; // 8010F760
  c->lr=0x8010F768u; f_800F47C0(c); // 8010F764
  goto L_8010F804; // 8010F768
L_8010F76C:;
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010F76C
  c->r[6]=0u+0x803D0000u; // 8010F770
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010F774
  c->r[4]=0u+0x00000005u; // 8010F778
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010F77C
  c->r[6]=c->r[6]+c->r[0]; // 8010F780
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010F784
  cmpu(c,0,c->r[5],c->r[0]); // 8010F788
  if (!crb(c,2)) { goto L_8010F794; } // 8010F78C
  c->r[4]=0u+0x00000003u; // 8010F790
L_8010F794:;
  c->r[6]=0u+0x803D0000u; // 8010F794
  c->r[5]=c->r[7]|c->r[7]; // 8010F798
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010F79C
  c->r[12]=R32(c->r[6]+0x00000340u); // 8010F7A0
  c->r[6]=c->r[30]|c->r[30]; // 8010F7A4
  c->ctr=c->r[12]; // 8010F7A8
  if (true) { c->lr=0x8010F7B0u; dispatch(c,c->ctr); } // 8010F7AC
  goto L_8010F804; // 8010F7B0
L_8010F7B4:;
  c->r[3]=rotl(c->r[31],0)&0x000000FFu; // 8010F7B4
  c->r[6]=0u+0x803D0000u; // 8010F7B8
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010F7BC
  c->r[4]=0u+0x00000006u; // 8010F7C0
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010F7C4
  c->r[6]=c->r[6]+c->r[0]; // 8010F7C8
  c->r[0]=R16(c->r[6]+0x00000016u); // 8010F7CC
  cmpu(c,0,c->r[5],c->r[0]); // 8010F7D0
  if (!crb(c,2)) { goto L_8010F7DC; } // 8010F7D4
  c->r[4]=0u+0x00000004u; // 8010F7D8
L_8010F7DC:;
  c->r[6]=0u+0x803D0000u; // 8010F7DC
  c->r[5]=c->r[7]|c->r[7]; // 8010F7E0
  c->r[6]=c->r[6]+0xFFFFCED8u; // 8010F7E4
  c->r[12]=R32(c->r[6]+0x00000340u); // 8010F7E8
  c->r[6]=c->r[30]|c->r[30]; // 8010F7EC
  c->ctr=c->r[12]; // 8010F7F0
  if (true) { c->lr=0x8010F7F8u; dispatch(c,c->ctr); } // 8010F7F4
  goto L_8010F804; // 8010F7F8
L_8010F7FC:;
  c->r[3]=c->r[30]|c->r[30]; // 8010F7FC
  c->lr=0x8010F804u; f_800F47C0(c); // 8010F800
L_8010F804:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010F804
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010F808
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010F80C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010F810
  c->lr=c->r[0]; // 8010F814
  c->r[1]=c->r[1]+0x00000020u; // 8010F818
  return; // 8010F81C
}

// hidh_conn_snd_data
void f_8010F820(Ctx* __restrict c) {
  trace_call(0x8010F820u);
  {uint32_t ea=c->r[1]+0xFFFFFFB0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010F820
  c->r[0]=c->lr; // 8010F824
  W32(c->r[1]+0x00000054u,c->r[0]); // 8010F828
  c->r[11]=c->r[1]+0x00000050u; // 8010F82C
  c->lr=0x8010F834u; { W32(c->r[11]+0xFFFFFFC4u,c->r[17]); W32(c->r[11]+0xFFFFFFC8u,c->r[18]); W32(c->r[11]+0xFFFFFFCCu,c->r[19]); W32(c->r[11]+0xFFFFFFD0u,c->r[20]); W32(c->r[11]+0xFFFFFFD4u,c->r[21]); W32(c->r[11]+0xFFFFFFD8u,c->r[22]); W32(c->r[11]+0xFFFFFFDCu,c->r[23]); W32(c->r[11]+0xFFFFFFE0u,c->r[24]); W32(c->r[11]+0xFFFFFFE4u,c->r[25]); W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 8010F830
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010F834
  c->r[3]=0u+0x803D0000u; // 8010F838
  c->r[17]=c->r[4]|c->r[4]; // 8010F83C
  c->r[3]=c->r[3]+0xFFFFCED8u; // 8010F840
  c->r[27]=c->r[3]+c->r[0]; // 8010F844
  c->r[18]=c->r[7]|c->r[7]; // 8010F848
  c->r[0]=R8(c->r[27]+0x00000011u); // 8010F84C
  c->r[19]=c->r[8]|c->r[8]; // 8010F850
  c->r[21]=0u+0x00000000u; // 8010F854
  c->r[20]=0u+0x00000000u; // 8010F858
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8010F85C
  if (crb(c,2)) { goto L_8010F87C; } // 8010F860
  cmps(c,0,(int32_t)c->r[8],0); // 8010F864
  if (crb(c,2)) { goto L_8010F874; } // 8010F868
  c->r[3]=c->r[19]|c->r[19]; // 8010F86C
  c->lr=0x8010F874u; f_800F47C0(c); // 8010F870
L_8010F874:;
  c->r[3]=0u+0x00000008u; // 8010F874
  goto L_8010FAA4; // 8010F878
L_8010F87C:;
  cmps(c,0,(int32_t)c->r[4],4); // 8010F87C
  if (!crb(c,0)) { goto L_8010F890; } // 8010F880
  cmps(c,0,(int32_t)c->r[4],1); // 8010F884
  if (crb(c,2)) { goto L_8010F89C; } // 8010F888
  goto L_8010F8B4; // 8010F88C
L_8010F890:;
  cmps(c,0,(int32_t)c->r[4],10); // 8010F890
  if (crb(c,2)) { goto L_8010F8A8; } // 8010F894
  if (!crb(c,0)) { goto L_8010F8B4; } // 8010F898
L_8010F89C:;
  c->r[23]=R16(c->r[27]+0x00000014u); // 8010F89C
  c->r[22]=0u+0x00000002u; // 8010F8A0
  goto L_8010F8BC; // 8010F8A4
L_8010F8A8:;
  c->r[23]=R16(c->r[27]+0x00000016u); // 8010F8A8
  c->r[22]=0u+0x00000002u; // 8010F8AC
  goto L_8010F8BC; // 8010F8B0
L_8010F8B4:;
  c->r[3]=0u+0x00000005u; // 8010F8B4
  goto L_8010FAA4; // 8010F8B8
L_8010F8BC:;
  cmpu(c,0,c->r[4],0x00000009u); // 8010F8BC
  if (!crb(c,2)) { goto L_8010F8CC; } // 8010F8C0
  c->r[21]=0u+0x00000001u; // 8010F8C4
  goto L_8010F8E0; // 8010F8C8
L_8010F8CC:;
  cmpu(c,0,c->r[4],0x00000004u); // 8010F8CC
  if (!crb(c,2)) { goto L_8010F8E0; } // 8010F8D0
  c->r[0]=rotl(c->r[5],0)&0x00000008u; cr0(c,c->r[0]); // 8010F8D4
  if (crb(c,2)) { goto L_8010F8E0; } // 8010F8D8
  c->r[21]=0u+0x00000002u; // 8010F8DC
L_8010F8E0:;
  c->r[30]=rotl(c->r[5],0)&0x0000000Fu; // 8010F8E0
  c->r[29]=rotl(c->r[6],0)&0x000000FFu; // 8010F8E4
  c->r[28]=rotl(c->r[6],24)&0x000000FFu; // 8010F8E8
  c->r[31]=0u+0x00000009u; // 8010F8EC
L_8010F8F0:;
  cmps(c,0,(int32_t)c->r[19],0); // 8010F8F0
  if (crb(c,2)) { goto L_8010F900; } // 8010F8F4
  cmps(c,0,(int32_t)c->r[20],0); // 8010F8F8
  if (crb(c,2)) { goto L_8010F934; } // 8010F8FC
L_8010F900:;
  c->r[3]=c->r[22]|c->r[22]; // 8010F900
  c->lr=0x8010F908u; f_800F46D0(c); // 8010F904
  cmps(c,0,(int32_t)c->r[3],0); // 8010F908
  c->r[26]=c->r[3]|c->r[3]; // 8010F90C
  if (!crb(c,2)) { goto L_8010F91C; } // 8010F910
  c->r[3]=0u+0x00000003u; // 8010F914
  goto L_8010FAA4; // 8010F918
L_8010F91C:;
  W16(c->r[3]+0x00000004u,c->r[31]); // 8010F91C
  c->r[4]=0u+0x00000000u; // 8010F920
  c->r[24]=0u+0x00000000u; // 8010F924
  c->r[25]=0u+0x00000000u; // 8010F928
  c->r[20]=0u+0x00000000u; // 8010F92C
  goto L_8010F998; // 8010F930
L_8010F934:;
  c->r[3]=R16(c->r[27]+0x00000018u); // 8010F934
  c->r[24]=R16(c->r[19]+0x00000002u); // 8010F938
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010F93C
  cmps(c,0,(int32_t)c->r[24],(int32_t)c->r[0]); // 8010F940
  if (!crb(c,1)) { goto L_8010F980; } // 8010F944
  c->r[3]=c->r[22]|c->r[22]; // 8010F948
  c->lr=0x8010F950u; f_800F46D0(c); // 8010F94C
  cmps(c,0,(int32_t)c->r[3],0); // 8010F950
  c->r[26]=c->r[3]|c->r[3]; // 8010F954
  if (!crb(c,2)) { goto L_8010F964; } // 8010F958
  c->r[3]=0u+0x00000003u; // 8010F95C
  goto L_8010FAA4; // 8010F960
L_8010F964:;
  W16(c->r[3]+0x00000004u,c->r[31]); // 8010F964
  c->r[4]=0u+0x00000001u; // 8010F968
  c->r[3]=R16(c->r[27]+0x00000018u); // 8010F96C
  c->r[24]=R16(c->r[19]+0x00000002u); // 8010F970
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010F974
  c->r[25]=rotl(c->r[0],0)&0x0000FFFFu; // 8010F978
  goto L_8010F998; // 8010F97C
L_8010F980:;
  c->r[3]=R16(c->r[19]+0x00000004u); // 8010F980
  c->r[26]=c->r[19]|c->r[19]; // 8010F984
  c->r[25]=c->r[24]|c->r[24]; // 8010F988
  c->r[4]=0u+0x00000000u; // 8010F98C
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010F990
  W16(c->r[19]+0x00000004u,c->r[0]); // 8010F994
L_8010F998:;
  c->r[3]=R16(c->r[26]+0x00000004u); // 8010F998
  c->r[0]=rotl(c->r[17],4)&0x00000FF0u; // 8010F99C
  cmpu(c,0,c->r[17],0x00000004u); // 8010F9A0
  c->r[3]=c->r[26]+c->r[3]; // 8010F9A4
  c->r[0]=c->r[0]|c->r[30]; // 8010F9A8
  W8(c->r[3]+0x00000008u,c->r[0]); // 8010F9AC
  c->r[3]=c->r[3]+0x00000009u; // 8010F9B0
  if (!crb(c,2)) { goto L_8010F9CC; } // 8010F9B4
  cmps(c,0,(int32_t)c->r[18],0); // 8010F9B8
  if (crb(c,2)) { goto L_8010F9CC; } // 8010F9BC
  W8(c->r[3]+0x00000000u,c->r[18]); // 8010F9C0
  c->r[25]=0u+0x00000001u; // 8010F9C4
  c->r[24]=0u+0x00000001u; // 8010F9C8
L_8010F9CC:;
  cmps(c,0,(int32_t)c->r[4],0); // 8010F9CC
  if (crb(c,2)) { goto L_8010FA04; } // 8010F9D0
  c->r[0]=R16(c->r[19]+0x00000004u); // 8010F9D4
  c->r[5]=rotl(c->r[25],0)&0x0000FFFFu; // 8010F9D8
  c->r[4]=c->r[19]+c->r[0]; // 8010F9DC
  c->r[4]=c->r[4]+0x00000008u; // 8010F9E0
  c->lr=0x8010F9E8u; f_800043C4(c); // 8010F9E4
  c->r[3]=R16(c->r[19]+0x00000004u); // 8010F9E8
  c->r[0]=R16(c->r[19]+0x00000002u); // 8010F9EC
  c->r[3]=c->r[3]+c->r[25]; // 8010F9F0
  c->r[0]=c->r[0]-c->r[25]; // 8010F9F4
  W16(c->r[19]+0x00000004u,c->r[3]); // 8010F9F8
  W16(c->r[19]+0x00000002u,c->r[0]); // 8010F9FC
  goto L_8010FA2C; // 8010FA00
L_8010FA04:;
  cmpu(c,0,c->r[21],0x00000001u); // 8010FA04
  if (!crb(c,2)) { goto L_8010FA18; } // 8010FA08
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 8010FA0C
  W8(c->r[3]+c->r[0],c->r[29]); // 8010FA10
  goto L_8010FA2C; // 8010FA14
L_8010FA18:;
  cmpu(c,0,c->r[21],0x00000002u); // 8010FA18
  if (!crb(c,2)) { goto L_8010FA2C; } // 8010FA1C
  c->r[0]=rotl(c->r[25],0)&0x0000FFFFu; // 8010FA20
  {uint32_t ea=c->r[3]+c->r[0]; W8(ea,c->r[29]); c->r[3]=ea;} // 8010FA24
  W8(c->r[3]+0x00000001u,c->r[28]); // 8010FA28
L_8010FA2C:;
  c->r[3]=c->r[25]+c->r[21]; // 8010FA2C
  c->r[24]=c->r[24]-c->r[25]; // 8010FA30
  c->r[0]=c->r[3]+0x00000001u; // 8010FA34
  W16(c->r[26]+0x00000002u,c->r[0]); // 8010FA38
  c->r[0]=R8(c->r[27]+0x00000011u); // 8010FA3C
  c->r[0]=rotl(c->r[0],0)&0x00000020u; cr0(c,c->r[0]); // 8010FA40
  if (!crb(c,2)) { goto L_8010FA5C; } // 8010FA44
  c->r[3]=c->r[23]|c->r[23]; // 8010FA48
  c->r[4]=c->r[26]|c->r[26]; // 8010FA4C
  c->lr=0x8010FA54u; f_801104A4(c); // 8010FA50
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010FA54
  if (!crb(c,2)) { goto L_8010FA64; } // 8010FA58
L_8010FA5C:;
  c->r[3]=0u+0x00000008u; // 8010FA5C
  goto L_8010FAA4; // 8010FA60
L_8010FA64:;
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8010FA64
  if (crb(c,2)) { goto L_8010FA74; } // 8010FA68
  c->r[17]=0u+0x0000000Bu; // 8010FA6C
  goto L_8010FA90; // 8010FA70
L_8010FA74:;
  c->r[3]=R16(c->r[27]+0x00000018u); // 8010FA74
  c->r[4]=rotl(c->r[25],0)&0x0000FFFFu; // 8010FA78
  c->r[0]=c->r[3]+0xFFFFFFFFu; // 8010FA7C
  cmps(c,0,(int32_t)c->r[4],(int32_t)c->r[0]); // 8010FA80
  if (!crb(c,2)) { goto L_8010FA90; } // 8010FA84
  c->r[17]=0u+0x0000000Bu; // 8010FA88
  c->r[20]=0u+0x00000001u; // 8010FA8C
L_8010FA90:;
  c->r[0]=rotl(c->r[24],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8010FA90
  if (!crb(c,2)) { IRQCHK(c); goto L_8010F8F0; } // 8010FA94
  cmps(c,0,(int32_t)c->r[20],0); // 8010FA98
  if (!crb(c,2)) { IRQCHK(c); goto L_8010F8F0; } // 8010FA9C
  c->r[3]=0u+0x00000000u; // 8010FAA0
L_8010FAA4:;
  c->r[11]=c->r[1]+0x00000050u; // 8010FAA4
  c->lr=0x8010FAACu; { c->r[17]=R32(c->r[11]+0xFFFFFFC4u); c->r[18]=R32(c->r[11]+0xFFFFFFC8u); c->r[19]=R32(c->r[11]+0xFFFFFFCCu); c->r[20]=R32(c->r[11]+0xFFFFFFD0u); c->r[21]=R32(c->r[11]+0xFFFFFFD4u); c->r[22]=R32(c->r[11]+0xFFFFFFD8u); c->r[23]=R32(c->r[11]+0xFFFFFFDCu); c->r[24]=R32(c->r[11]+0xFFFFFFE0u); c->r[25]=R32(c->r[11]+0xFFFFFFE4u); c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 8010FAA8
  c->r[0]=R32(c->r[1]+0x00000054u); // 8010FAAC
  c->lr=c->r[0]; // 8010FAB0
  c->r[1]=c->r[1]+0x00000050u; // 8010FAB4
  return; // 8010FAB8
}

// hidh_conn_initiate
void f_8010FABC(Ctx* __restrict c) {
  trace_call(0x8010FABCu);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FABC
  c->r[0]=c->lr; // 8010FAC0
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FAC4
  c->r[0]=(uint32_t)((int32_t)c->r[3]*(int32_t)52); // 8010FAC8
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010FACC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010FAD0
  c->r[30]=0u+0x803D0000u; // 8010FAD4
  c->r[30]=c->r[30]+0xFFFFCED8u; // 8010FAD8
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010FADC
  c->r[29]=c->r[30]+c->r[0]; // 8010FAE0
  c->r[0]=R8(c->r[29]+0x00000010u); // 8010FAE4
  cmps(c,0,(int32_t)c->r[0],0); // 8010FAE8
  if (crb(c,2)) { goto L_8010FAF8; } // 8010FAEC
  c->r[3]=0u+0x00000009u; // 8010FAF0
  goto L_8010FB9C; // 8010FAF4
L_8010FAF8:;
  c->r[5]=0u+0x00000000u; // 8010FAF8
  c->r[0]=0u+0x00000100u; // 8010FAFC
  W16(c->r[29]+0x00000014u,c->r[5]); // 8010FB00
  c->r[31]=0u+0x00000001u; // 8010FB04
  c->r[4]=c->r[29]+0x00000001u; // 8010FB08
  c->r[3]=0u+0x00000011u; // 8010FB0C
  W16(c->r[29]+0x00000016u,c->r[5]); // 8010FB10
  W16(c->r[29]+0x0000001Au,c->r[0]); // 8010FB14
  W8(c->r[29]+0x00000011u,c->r[31]); // 8010FB18
  c->lr=0x8010FB20u; f_8010FE10(c); // 8010FB1C
  c->r[0]=rotl(c->r[3],0)&0x0000FFFFu; cr0(c,c->r[0]); // 8010FB20
  W16(c->r[29]+0x00000014u,c->r[3]); // 8010FB24
  if (!crb(c,2)) { goto L_8010FB94; } // 8010FB28
  c->r[0]=R8(c->r[30]+0x00000401u); // 8010FB2C
  cmpu(c,0,c->r[0],0x00000002u); // 8010FB30
  if (crb(c,0)) { goto L_8010FB4C; } // 8010FB34
  c->r[3]=0u+0x001E0000u; // 8010FB38
  c->r[4]=0u+0x80330000u; // 8010FB3C
  c->r[3]=c->r[3]+0x00000001u; // 8010FB40
  c->r[4]=c->r[4]+0xFFFFC6DCu; // 8010FB44
  c->lr=0x8010FB4Cu; f_800F7280(c); // 8010FB48
L_8010FB4C:;
  c->r[5]=0u+0x803D0000u; // 8010FB4C
  c->r[3]=0u+0x4EC50000u; // 8010FB50
  c->r[5]=c->r[5]+0xFFFFCED8u; // 8010FB54
  c->r[4]=0u+0x00000001u; // 8010FB58
  c->r[0]=c->r[29]-c->r[5]; // 8010FB5C
  c->r[7]=c->r[3]+0xFFFFEC4Fu; // 8010FB60
  c->r[0]=(uint32_t)(((int64_t)(int32_t)c->r[7]*(int64_t)(int32_t)c->r[0])>>32); // 8010FB64
  c->r[12]=R32(c->r[5]+0x00000340u); // 8010FB68
  c->r[5]=0u+0x0000000Eu; // 8010FB6C
  c->r[6]=0u+0x00000000u; // 8010FB70
  c->r[0]=sraw(c,c->r[0],4); // 8010FB74
  c->r[3]=rotl(c->r[0],1)&0x00000001u; // 8010FB78
  c->r[0]=c->r[0]+c->r[3]; // 8010FB7C
  c->r[0]=(uint32_t)(((uint64_t)c->r[7]*(uint64_t)c->r[0])>>32); // 8010FB80
  c->r[3]=rotl(c->r[0],28)&0x000000FFu; // 8010FB84
  c->ctr=c->r[12]; // 8010FB88
  if (true) { c->lr=0x8010FB90u; dispatch(c,c->ctr); } // 8010FB8C
  goto L_8010FB98; // 8010FB90
L_8010FB94:;
  W8(c->r[29]+0x00000010u,c->r[31]); // 8010FB94
L_8010FB98:;
  c->r[3]=0u+0x00000000u; // 8010FB98
L_8010FB9C:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FB9C
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010FBA0
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010FBA4
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010FBA8
  c->lr=c->r[0]; // 8010FBAC
  c->r[1]=c->r[1]+0x00000020u; // 8010FBB0
  return; // 8010FBB4
}

// hidh_conn_dereg
void f_8010FBB8(Ctx* __restrict c) {
  trace_call(0x8010FBB8u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FBB8
  c->r[0]=c->lr; // 8010FBBC
  c->r[3]=0u+0x00000011u; // 8010FBC0
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FBC4
  c->lr=0x8010FBCCu; f_8010FD80(c); // 8010FBC8
  c->r[3]=0u+0x00000013u; // 8010FBCC
  c->lr=0x8010FBD4u; f_8010FD80(c); // 8010FBD0
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FBD4
  c->lr=c->r[0]; // 8010FBD8
  c->r[1]=c->r[1]+0x00000010u; // 8010FBDC
  return; // 8010FBE0
}

// L2CA_Register
void f_8010FBE4(Ctx* __restrict c) {
  trace_call(0x8010FBE4u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FBE4
  c->r[0]=c->lr; // 8010FBE8
  c->r[5]=0u+0x803D0000u; // 8010FBEC
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FBF0
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010FBF4
  c->r[31]=0u+0x80330000u; // 8010FBF8
  c->r[31]=c->r[31]+0xFFFFC960u; // 8010FBFC
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010FC00
  c->r[30]=c->r[4]|c->r[4]; // 8010FC04
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010FC08
  c->r[29]=c->r[3]|c->r[3]; // 8010FC0C
  c->r[0]=R8(c->r[5]+0xFFFFD2E0u); // 8010FC10
  cmpu(c,0,c->r[0],0x00000003u); // 8010FC14
  if (crb(c,0)) { goto L_8010FC30; } // 8010FC18
  c->r[3]=0u+0x00080000u; // 8010FC1C
  c->r[5]=c->r[29]|c->r[29]; // 8010FC20
  c->r[3]=c->r[3]+0x00000002u; // 8010FC24
  c->r[4]=c->r[31]+0x00000000u; // 8010FC28
  c->lr=0x8010FC30u; f_800F72A0(c); // 8010FC2C
L_8010FC30:;
  c->r[0]=R32(c->r[30]+0x00000010u); // 8010FC30
  cmps(c,0,(int32_t)c->r[0],0); // 8010FC34
  if (crb(c,2)) { goto L_8010FC60; } // 8010FC38
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8010FC3C
  cmps(c,0,(int32_t)c->r[0],0); // 8010FC40
  if (crb(c,2)) { goto L_8010FC60; } // 8010FC44
  c->r[0]=R32(c->r[30]+0x00000020u); // 8010FC48
  cmps(c,0,(int32_t)c->r[0],0); // 8010FC4C
  if (crb(c,2)) { goto L_8010FC60; } // 8010FC50
  c->r[0]=R32(c->r[30]+0x00000014u); // 8010FC54
  cmps(c,0,(int32_t)c->r[0],0); // 8010FC58
  if (!crb(c,2)) { goto L_8010FC88; } // 8010FC5C
L_8010FC60:;
  c->r[3]=0u+0x803D0000u; // 8010FC60
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FC64
  cmpu(c,0,c->r[0],0x00000001u); // 8010FC68
  if (crb(c,0)) { goto L_8010FC80; } // 8010FC6C
  c->r[5]=c->r[29]|c->r[29]; // 8010FC70
  c->r[4]=c->r[31]+0x00000030u; // 8010FC74
  c->r[3]=0u+0x00080000u; // 8010FC78
  c->lr=0x8010FC80u; f_800F72A0(c); // 8010FC7C
L_8010FC80:;
  c->r[3]=0u+0x00000000u; // 8010FC80
  goto L_8010FD64; // 8010FC84
L_8010FC88:;
  c->r[0]=c->r[29]&0x00000101u; cr0(c,c->r[0]); // 8010FC88
  cmps(c,0,(int32_t)c->r[0],1); // 8010FC8C
  if (crb(c,2)) { goto L_8010FCBC; } // 8010FC90
  c->r[3]=0u+0x803D0000u; // 8010FC94
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FC98
  cmpu(c,0,c->r[0],0x00000001u); // 8010FC9C
  if (crb(c,0)) { goto L_8010FCB4; } // 8010FCA0
  c->r[5]=c->r[29]|c->r[29]; // 8010FCA4
  c->r[4]=c->r[31]+0x00000058u; // 8010FCA8
  c->r[3]=0u+0x00080000u; // 8010FCAC
  c->lr=0x8010FCB4u; f_800F72A0(c); // 8010FCB0
L_8010FCB4:;
  c->r[3]=0u+0x00000000u; // 8010FCB4
  goto L_8010FD64; // 8010FCB8
L_8010FCBC:;
  c->r[3]=c->r[29]|c->r[29]; // 8010FCBC
  c->lr=0x8010FCC4u; f_801155B0(c); // 8010FCC0
  cmps(c,0,(int32_t)c->r[3],0); // 8010FCC4
  c->r[5]=c->r[3]|c->r[3]; // 8010FCC8
  if (!crb(c,2)) { goto L_8010FD10; } // 8010FCCC
  c->r[3]=c->r[29]|c->r[29]; // 8010FCD0
  c->lr=0x8010FCD8u; f_80115554(c); // 8010FCD4
  cmps(c,0,(int32_t)c->r[3],0); // 8010FCD8
  c->r[5]=c->r[3]|c->r[3]; // 8010FCDC
  if (!crb(c,2)) { goto L_8010FD10; } // 8010FCE0
  c->r[3]=0u+0x803D0000u; // 8010FCE4
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FCE8
  cmpu(c,0,c->r[0],0x00000002u); // 8010FCEC
  if (crb(c,0)) { goto L_8010FD08; } // 8010FCF0
  c->r[3]=0u+0x00080000u; // 8010FCF4
  c->r[5]=c->r[29]|c->r[29]; // 8010FCF8
  c->r[3]=c->r[3]+0x00000001u; // 8010FCFC
  c->r[4]=c->r[31]+0x00000080u; // 8010FD00
  c->lr=0x8010FD08u; f_800F72A0(c); // 8010FD04
L_8010FD08:;
  c->r[3]=0u+0x00000000u; // 8010FD08
  goto L_8010FD64; // 8010FD0C
L_8010FD10:;
  c->r[4]=R32(c->r[30]+0x00000000u); // 8010FD10
  c->r[3]=0u+0x00000001u; // 8010FD14
  c->r[0]=R32(c->r[30]+0x00000004u); // 8010FD18
  W32(c->r[5]+0x00000004u,c->r[4]); // 8010FD1C
  W32(c->r[5]+0x00000008u,c->r[0]); // 8010FD20
  c->r[4]=R32(c->r[30]+0x00000008u); // 8010FD24
  c->r[0]=R32(c->r[30]+0x0000000Cu); // 8010FD28
  W32(c->r[5]+0x0000000Cu,c->r[4]); // 8010FD2C
  W32(c->r[5]+0x00000010u,c->r[0]); // 8010FD30
  c->r[4]=R32(c->r[30]+0x00000010u); // 8010FD34
  c->r[0]=R32(c->r[30]+0x00000014u); // 8010FD38
  W32(c->r[5]+0x00000014u,c->r[4]); // 8010FD3C
  W32(c->r[5]+0x00000018u,c->r[0]); // 8010FD40
  c->r[4]=R32(c->r[30]+0x00000018u); // 8010FD44
  c->r[0]=R32(c->r[30]+0x0000001Cu); // 8010FD48
  W32(c->r[5]+0x0000001Cu,c->r[4]); // 8010FD4C
  W32(c->r[5]+0x00000020u,c->r[0]); // 8010FD50
  c->r[4]=R32(c->r[30]+0x00000020u); // 8010FD54
  c->r[0]=R32(c->r[30]+0x00000024u); // 8010FD58
  W32(c->r[5]+0x00000024u,c->r[4]); // 8010FD5C
  W32(c->r[5]+0x00000028u,c->r[0]); // 8010FD60
L_8010FD64:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 8010FD64
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 8010FD68
  c->r[30]=R32(c->r[1]+0x00000018u); // 8010FD6C
  c->r[29]=R32(c->r[1]+0x00000014u); // 8010FD70
  c->lr=c->r[0]; // 8010FD74
  c->r[1]=c->r[1]+0x00000020u; // 8010FD78
  return; // 8010FD7C
}

// L2CA_Deregister
void f_8010FD80(Ctx* __restrict c) {
  trace_call(0x8010FD80u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FD80
  c->r[0]=c->lr; // 8010FD84
  c->r[4]=0u+0x803D0000u; // 8010FD88
  W32(c->r[1]+0x00000014u,c->r[0]); // 8010FD8C
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8010FD90
  c->r[31]=c->r[3]|c->r[3]; // 8010FD94
  c->r[0]=R8(c->r[4]+0xFFFFD2E0u); // 8010FD98
  cmpu(c,0,c->r[0],0x00000003u); // 8010FD9C
  if (crb(c,0)) { goto L_8010FDBC; } // 8010FDA0
  c->r[3]=0u+0x00080000u; // 8010FDA4
  c->r[4]=0u+0x80330000u; // 8010FDA8
  c->r[5]=c->r[31]|c->r[31]; // 8010FDAC
  c->r[3]=c->r[3]+0x00000002u; // 8010FDB0
  c->r[4]=c->r[4]+0xFFFFCA08u; // 8010FDB4
  c->lr=0x8010FDBCu; f_800F72A0(c); // 8010FDB8
L_8010FDBC:;
  c->r[3]=c->r[31]|c->r[31]; // 8010FDBC
  c->lr=0x8010FDC4u; f_801155B0(c); // 8010FDC0
  cmps(c,0,(int32_t)c->r[3],0); // 8010FDC4
  if (crb(c,2)) { goto L_8010FDD4; } // 8010FDC8
  c->lr=0x8010FDD0u; f_801155A0(c); // 8010FDCC
  goto L_8010FDFC; // 8010FDD0
L_8010FDD4:;
  c->r[3]=0u+0x803D0000u; // 8010FDD4
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FDD8
  cmpu(c,0,c->r[0],0x00000002u); // 8010FDDC
  if (crb(c,0)) { goto L_8010FDFC; } // 8010FDE0
  c->r[3]=0u+0x00080000u; // 8010FDE4
  c->r[4]=0u+0x80330000u; // 8010FDE8
  c->r[5]=c->r[31]|c->r[31]; // 8010FDEC
  c->r[3]=c->r[3]+0x00000001u; // 8010FDF0
  c->r[4]=c->r[4]+0xFFFFCA3Cu; // 8010FDF4
  c->lr=0x8010FDFCu; f_800F72A0(c); // 8010FDF8
L_8010FDFC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 8010FDFC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 8010FE00
  c->lr=c->r[0]; // 8010FE04
  c->r[1]=c->r[1]+0x00000010u; // 8010FE08
  return; // 8010FE0C
}

// L2CA_ConnectReq
void f_8010FE10(Ctx* __restrict c) {
  trace_call(0x8010FE10u);
  {uint32_t ea=c->r[1]+0xFFFFFFE0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8010FE10
  c->r[0]=c->lr; // 8010FE14
  c->r[5]=0u+0x803D0000u; // 8010FE18
  W32(c->r[1]+0x00000024u,c->r[0]); // 8010FE1C
  W32(c->r[1]+0x0000001Cu,c->r[31]); // 8010FE20
  c->r[31]=0u+0x80330000u; // 8010FE24
  c->r[31]=c->r[31]+0xFFFFC960u; // 8010FE28
  W32(c->r[1]+0x00000018u,c->r[30]); // 8010FE2C
  W32(c->r[1]+0x00000014u,c->r[29]); // 8010FE30
  c->r[29]=c->r[3]|c->r[3]; // 8010FE34
  W32(c->r[1]+0x00000010u,c->r[28]); // 8010FE38
  c->r[28]=c->r[4]|c->r[4]; // 8010FE3C
  c->r[0]=R8(c->r[5]+0xFFFFD2E0u); // 8010FE40
  cmpu(c,0,c->r[0],0x00000003u); // 8010FE44
  if (crb(c,0)) { goto L_8010FE60; } // 8010FE48
  c->r[3]=0u+0x00080000u; // 8010FE4C
  c->r[5]=c->r[29]|c->r[29]; // 8010FE50
  c->r[3]=c->r[3]+0x00000002u; // 8010FE54
  c->r[4]=c->r[31]+0x00000110u; // 8010FE58
  c->lr=0x8010FE60u; f_800F72A0(c); // 8010FE5C
L_8010FE60:;
  c->r[3]=0u+0x803D0000u; // 8010FE60
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FE64
  cmpu(c,0,c->r[0],0x00000003u); // 8010FE68
  if (crb(c,0)) { goto L_8010FE98; } // 8010FE6C
  c->r[3]=0u+0x00080000u; // 8010FE70
  c->r[5]=R8(c->r[28]+0x00000000u); // 8010FE74
  c->r[6]=R8(c->r[28]+0x00000001u); // 8010FE78
  c->r[3]=c->r[3]+0x00000002u; // 8010FE7C
  c->r[7]=R8(c->r[28]+0x00000002u); // 8010FE80
  c->r[4]=c->r[31]+0x00000130u; // 8010FE84
  c->r[8]=R8(c->r[28]+0x00000003u); // 8010FE88
  c->r[9]=R8(c->r[28]+0x00000004u); // 8010FE8C
  c->r[10]=R8(c->r[28]+0x00000005u); // 8010FE90
  c->lr=0x8010FE98u; f_800F7340(c); // 8010FE94
L_8010FE98:;
  c->lr=0x8010FE9Cu; f_800FFE84(c); // 8010FE98
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010FE9C
  if (!crb(c,2)) { goto L_8010FECC; } // 8010FEA0
  c->r[3]=0u+0x803D0000u; // 8010FEA4
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FEA8
  cmpu(c,0,c->r[0],0x00000002u); // 8010FEAC
  if (crb(c,0)) { goto L_8010FEC4; } // 8010FEB0
  c->r[3]=0u+0x00080000u; // 8010FEB4
  c->r[4]=c->r[31]+0x00000168u; // 8010FEB8
  c->r[3]=c->r[3]+0x00000001u; // 8010FEBC
  c->lr=0x8010FEC4u; f_800F7280(c); // 8010FEC0
L_8010FEC4:;
  c->r[3]=0u+0x00000000u; // 8010FEC4
  goto L_80110024; // 8010FEC8
L_8010FECC:;
  c->r[3]=c->r[29]|c->r[29]; // 8010FECC
  c->lr=0x8010FED4u; f_801155B0(c); // 8010FED0
  cmps(c,0,(int32_t)c->r[3],0); // 8010FED4
  c->r[30]=c->r[3]|c->r[3]; // 8010FED8
  if (!crb(c,2)) { goto L_8010FF0C; } // 8010FEDC
  c->r[3]=0u+0x803D0000u; // 8010FEE0
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FEE4
  cmpu(c,0,c->r[0],0x00000002u); // 8010FEE8
  if (crb(c,0)) { goto L_8010FF04; } // 8010FEEC
  c->r[3]=0u+0x00080000u; // 8010FEF0
  c->r[5]=c->r[29]|c->r[29]; // 8010FEF4
  c->r[3]=c->r[3]+0x00000001u; // 8010FEF8
  c->r[4]=c->r[31]+0x0000018Cu; // 8010FEFC
  c->lr=0x8010FF04u; f_800F72A0(c); // 8010FF00
L_8010FF04:;
  c->r[3]=0u+0x00000000u; // 8010FF04
  goto L_80110024; // 8010FF08
L_8010FF0C:;
  c->r[3]=c->r[28]|c->r[28]; // 8010FF0C
  c->lr=0x8010FF14u; f_8011401C(c); // 8010FF10
  cmps(c,0,(int32_t)c->r[3],0); // 8010FF14
  c->r[29]=c->r[3]|c->r[3]; // 8010FF18
  if (!crb(c,2)) { goto L_8010FF70; } // 8010FF1C
  c->r[3]=c->r[28]|c->r[28]; // 8010FF20
  c->lr=0x8010FF28u; f_80113E48(c); // 8010FF24
  cmps(c,0,(int32_t)c->r[3],0); // 8010FF28
  c->r[29]=c->r[3]|c->r[3]; // 8010FF2C
  if (!crb(c,2)) { goto L_8010FF5C; } // 8010FF30
  c->r[3]=0u+0x803D0000u; // 8010FF34
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FF38
  cmpu(c,0,c->r[0],0x00000002u); // 8010FF3C
  if (crb(c,0)) { goto L_8010FF54; } // 8010FF40
  c->r[3]=0u+0x00080000u; // 8010FF44
  c->r[4]=c->r[31]+0x000001BCu; // 8010FF48
  c->r[3]=c->r[3]+0x00000001u; // 8010FF4C
  c->lr=0x8010FF54u; f_800F7280(c); // 8010FF50
L_8010FF54:;
  c->r[3]=0u+0x00000000u; // 8010FF54
  goto L_80110024; // 8010FF58
L_8010FF5C:;
  c->lr=0x8010FF60u; f_801159AC(c); // 8010FF5C
  c->r[0]=rotl(c->r[3],0)&0x000000FFu; cr0(c,c->r[0]); // 8010FF60
  if (!crb(c,2)) { goto L_8010FF70; } // 8010FF64
  c->r[3]=0u+0x00000000u; // 8010FF68
  goto L_80110024; // 8010FF6C
L_8010FF70:;
  c->r[0]=R32(c->r[29]+0x00000004u); // 8010FF70
  cmps(c,0,(int32_t)c->r[0],5); // 8010FF74
  if (!crb(c,2)) { goto L_8010FFA4; } // 8010FF78
  c->r[3]=0u+0x803D0000u; // 8010FF7C
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FF80
  cmpu(c,0,c->r[0],0x00000003u); // 8010FF84
  if (crb(c,0)) { goto L_8010FF9C; } // 8010FF88
  c->r[3]=0u+0x00080000u; // 8010FF8C
  c->r[4]=c->r[31]+0x000001E0u; // 8010FF90
  c->r[3]=c->r[3]+0x00000002u; // 8010FF94
  c->lr=0x8010FF9Cu; f_800F7280(c); // 8010FF98
L_8010FF9C:;
  c->r[3]=0u+0x00000000u; // 8010FF9C
  goto L_80110024; // 8010FFA0
L_8010FFA4:;
  c->r[3]=c->r[29]|c->r[29]; // 8010FFA4
  c->lr=0x8010FFACu; f_80115248(c); // 8010FFA8
  cmps(c,0,(int32_t)c->r[3],0); // 8010FFAC
  c->r[28]=c->r[3]|c->r[3]; // 8010FFB0
  if (!crb(c,2)) { goto L_8010FFE0; } // 8010FFB4
  c->r[3]=0u+0x803D0000u; // 8010FFB8
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8010FFBC
  cmpu(c,0,c->r[0],0x00000002u); // 8010FFC0
  if (crb(c,0)) { goto L_8010FFD8; } // 8010FFC4
  c->r[3]=0u+0x00080000u; // 8010FFC8
  c->r[4]=c->r[31]+0x00000218u; // 8010FFCC
  c->r[3]=c->r[3]+0x00000001u; // 8010FFD0
  c->lr=0x8010FFD8u; f_800F7280(c); // 8010FFD4
L_8010FFD8:;
  c->r[3]=0u+0x00000000u; // 8010FFD8
  goto L_80110024; // 8010FFDC
L_8010FFE0:;
  W32(c->r[3]+0x00000030u,c->r[30]); // 8010FFE0
  c->r[0]=R32(c->r[29]+0x00000004u); // 8010FFE4
  cmps(c,0,(int32_t)c->r[0],4); // 8010FFE8
  if (!crb(c,2)) { goto L_8010FFFC; } // 8010FFEC
  c->r[4]=0u+0x00000014u; // 8010FFF0
  c->r[5]=0u+0x00000000u; // 8010FFF4
  c->lr=0x8010FFFCu; f_801107B0(c); // 8010FFF8
L_8010FFFC:;
  c->r[3]=0u+0x803D0000u; // 8010FFFC
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 80110000
  cmpu(c,0,c->r[0],0x00000003u); // 80110004
  if (crb(c,0)) { goto L_80110020; } // 80110008
  c->r[3]=0u+0x00080000u; // 8011000C
  c->r[5]=R16(c->r[28]+0x00000014u); // 80110010
  c->r[3]=c->r[3]+0x00000002u; // 80110014
  c->r[4]=c->r[31]+0x0000023Cu; // 80110018
  c->lr=0x80110020u; f_800F72A0(c); // 8011001C
L_80110020:;
  c->r[3]=R16(c->r[28]+0x00000014u); // 80110020
L_80110024:;
  c->r[0]=R32(c->r[1]+0x00000024u); // 80110024
  c->r[31]=R32(c->r[1]+0x0000001Cu); // 80110028
  c->r[30]=R32(c->r[1]+0x00000018u); // 8011002C
  c->r[29]=R32(c->r[1]+0x00000014u); // 80110030
  c->r[28]=R32(c->r[1]+0x00000010u); // 80110034
  c->lr=c->r[0]; // 80110038
  c->r[1]=c->r[1]+0x00000020u; // 8011003C
  return; // 80110040
}

// L2CA_ConnectRsp
void f_80110044(Ctx* __restrict c) {
  trace_call(0x80110044u);
  {uint32_t ea=c->r[1]+0xFFFFFFD0u; W32(ea,c->r[1]); c->r[1]=ea;} // 80110044
  c->r[0]=c->lr; // 80110048
  W32(c->r[1]+0x00000034u,c->r[0]); // 8011004C
  c->r[11]=c->r[1]+0x00000030u; // 80110050
  c->lr=0x80110058u; { W32(c->r[11]+0xFFFFFFE8u,c->r[26]); W32(c->r[11]+0xFFFFFFECu,c->r[27]); W32(c->r[11]+0xFFFFFFF0u,c->r[28]); W32(c->r[11]+0xFFFFFFF4u,c->r[29]); W32(c->r[11]+0xFFFFFFF8u,c->r[30]); W32(c->r[11]+0xFFFFFFFCu,c->r[31]); } // 80110054
  c->r[8]=0u+0x803D0000u; // 80110058
  c->r[31]=0u+0x80330000u; // 8011005C
  c->r[0]=R8(c->r[8]+0xFFFFD2E0u); // 80110060
  c->r[26]=c->r[3]|c->r[3]; // 80110064
  c->r[27]=c->r[4]|c->r[4]; // 80110068
  c->r[28]=c->r[5]|c->r[5]; // 8011006C
  cmpu(c,0,c->r[0],0x00000003u); // 80110070
  c->r[29]=c->r[6]|c->r[6]; // 80110074
  c->r[30]=c->r[7]|c->r[7]; // 80110078
  c->r[31]=c->r[31]+0xFFFFC960u; // 8011007C
  if (crb(c,0)) { goto L_80110094; } // 80110080
  c->r[3]=0u+0x00080000u; // 80110084
  c->r[4]=c->r[31]+0x0000026Cu; // 80110088
  c->r[3]=c->r[3]+0x00000002u; // 8011008C
  c->lr=0x80110094u; f_800F72E0(c); // 80110090
L_80110094:;
  c->r[3]=0u+0x803D0000u; // 80110094
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 80110098
  cmpu(c,0,c->r[0],0x00000003u); // 8011009C
  if (crb(c,0)) { goto L_801100CC; } // 801100A0
  c->r[3]=0u+0x00080000u; // 801100A4
  c->r[5]=R8(c->r[26]+0x00000000u); // 801100A8
  c->r[6]=R8(c->r[26]+0x00000001u); // 801100AC
  c->r[3]=c->r[3]+0x00000002u; // 801100B0
  c->r[7]=R8(c->r[26]+0x00000002u); // 801100B4
  c->r[4]=c->r[31]+0x000002A4u; // 801100B8
  c->r[8]=R8(c->r[26]+0x00000003u); // 801100BC
  c->r[9]=R8(c->r[26]+0x00000004u); // 801100C0
  c->r[10]=R8(c->r[26]+0x00000005u); // 801100C4
  c->lr=0x801100CCu; f_800F7340(c); // 801100C8
L_801100CC:;
  c->r[3]=c->r[26]|c->r[26]; // 801100CC
  c->lr=0x801100D4u; f_8011401C(c); // 801100D0
  cmps(c,0,(int32_t)c->r[3],0); // 801100D4
  if (!crb(c,2)) { goto L_80110104; } // 801100D8
  c->r[3]=0u+0x803D0000u; // 801100DC
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 801100E0
  cmpu(c,0,c->r[0],0x00000002u); // 801100E4
  if (crb(c,0)) { goto L_801100FC; } // 801100E8
  c->r[3]=0u+0x00080000u; // 801100EC
  c->r[4]=c->r[31]+0x000002DCu; // 801100F0
  c->r[3]=c->r[3]+0x00000001u; // 801100F4
  c->lr=0x801100FCu; f_800F7280(c); // 801100F8
L_801100FC:;
  c->r[3]=0u+0x00000000u; // 801100FC
  goto L_801101BC; // 80110100
L_80110104:;
  c->r[4]=c->r[28]|c->r[28]; // 80110104
  c->lr=0x8011010Cu; f_801154F8(c); // 80110108
  cmps(c,0,(int32_t)c->r[3],0); // 8011010C
  if (!crb(c,2)) { goto L_8011013C; } // 80110110
  c->r[3]=0u+0x803D0000u; // 80110114
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 80110118
  cmpu(c,0,c->r[0],0x00000002u); // 8011011C
  if (crb(c,0)) { goto L_80110134; } // 80110120
  c->r[3]=0u+0x00080000u; // 80110124
  c->r[4]=c->r[31]+0x00000300u; // 80110128
  c->r[3]=c->r[3]+0x00000001u; // 8011012C
  c->lr=0x80110134u; f_800F7280(c); // 80110130
L_80110134:;
  c->r[3]=0u+0x00000000u; // 80110134
  goto L_801101BC; // 80110138
L_8011013C:;
  c->r[5]=R8(c->r[3]+0x00000036u); // 8011013C
  cmpu(c,0,c->r[5],c->r[27]); // 80110140
  if (crb(c,2)) { goto L_80110174; } // 80110144
  c->r[3]=0u+0x803D0000u; // 80110148
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 8011014C
  cmpu(c,0,c->r[0],0x00000002u); // 80110150
  if (crb(c,0)) { goto L_8011016C; } // 80110154
  c->r[3]=0u+0x00080000u; // 80110158
  c->r[6]=c->r[27]|c->r[27]; // 8011015C
  c->r[4]=c->r[31]+0x00000324u; // 80110160
  c->r[3]=c->r[3]+0x00000001u; // 80110164
  c->lr=0x8011016Cu; f_800F72C0(c); // 80110168
L_8011016C:;
  c->r[3]=0u+0x00000000u; // 8011016C
  goto L_801101BC; // 80110170
L_80110174:;
  cmps(c,0,(int32_t)c->r[29],0); // 80110174
  if (!crb(c,2)) { goto L_8011018C; } // 80110178
  c->r[4]=0u+0x00000015u; // 8011017C
  c->r[5]=0u+0x00000000u; // 80110180
  c->lr=0x80110188u; f_801107B0(c); // 80110184
  goto L_801101B8; // 80110188
L_8011018C:;
  cmpu(c,0,c->r[29],0x00000001u); // 8011018C
  W16(c->r[1]+0x00000012u,c->r[29]); // 80110190
  W16(c->r[1]+0x00000014u,c->r[30]); // 80110194
  if (!crb(c,2)) { goto L_801101AC; } // 80110198
  c->r[5]=c->r[1]+0x00000008u; // 8011019C
  c->r[4]=0u+0x00000015u; // 801101A0
  c->lr=0x801101A8u; f_801107B0(c); // 801101A4
  goto L_801101B8; // 801101A8
L_801101AC:;
  c->r[5]=c->r[1]+0x00000008u; // 801101AC
  c->r[4]=0u+0x00000016u; // 801101B0
  c->lr=0x801101B8u; f_801107B0(c); // 801101B4
L_801101B8:;
  c->r[3]=0u+0x00000001u; // 801101B8
L_801101BC:;
  c->r[11]=c->r[1]+0x00000030u; // 801101BC
  c->lr=0x801101C4u; { c->r[26]=R32(c->r[11]+0xFFFFFFE8u); c->r[27]=R32(c->r[11]+0xFFFFFFECu); c->r[28]=R32(c->r[11]+0xFFFFFFF0u); c->r[29]=R32(c->r[11]+0xFFFFFFF4u); c->r[30]=R32(c->r[11]+0xFFFFFFF8u); c->r[31]=R32(c->r[11]+0xFFFFFFFCu); } // 801101C0
  c->r[0]=R32(c->r[1]+0x00000034u); // 801101C4
  c->lr=c->r[0]; // 801101C8
  c->r[1]=c->r[1]+0x00000030u; // 801101CC
  return; // 801101D0
}

// L2CA_ConfigReq
void f_801101D4(Ctx* __restrict c) {
  trace_call(0x801101D4u);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 801101D4
  c->r[0]=c->lr; // 801101D8
  c->r[5]=0u+0x803D0000u; // 801101DC
  W32(c->r[1]+0x00000014u,c->r[0]); // 801101E0
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 801101E4
  c->r[31]=c->r[4]|c->r[4]; // 801101E8
  W32(c->r[1]+0x00000008u,c->r[30]); // 801101EC
  c->r[30]=c->r[3]|c->r[3]; // 801101F0
  c->r[0]=R8(c->r[5]+0xFFFFD2E0u); // 801101F4
  cmpu(c,0,c->r[0],0x00000003u); // 801101F8
  if (crb(c,0)) { goto L_80110218; } // 801101FC
  c->r[3]=0u+0x00080000u; // 80110200
  c->r[4]=0u+0x80330000u; // 80110204
  c->r[5]=c->r[30]|c->r[30]; // 80110208
  c->r[3]=c->r[3]+0x00000002u; // 8011020C
  c->r[4]=c->r[4]+0xFFFFCCB8u; // 80110210
  c->lr=0x80110218u; f_800F72A0(c); // 80110214
L_80110218:;
  c->r[4]=c->r[30]|c->r[30]; // 80110218
  c->r[3]=0u+0x00000000u; // 8011021C
  c->lr=0x80110224u; f_801154F8(c); // 80110220
  cmps(c,0,(int32_t)c->r[3],0); // 80110224
  if (!crb(c,2)) { goto L_8011025C; } // 80110228
  c->r[3]=0u+0x803D0000u; // 8011022C
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 80110230
  cmpu(c,0,c->r[0],0x00000002u); // 80110234
  if (crb(c,0)) { goto L_80110254; } // 80110238
  c->r[3]=0u+0x00080000u; // 8011023C
  c->r[4]=0u+0x80330000u; // 80110240
  c->r[5]=c->r[30]|c->r[30]; // 80110244
  c->r[3]=c->r[3]+0x00000001u; // 80110248
  c->r[4]=c->r[4]+0xFFFFCCD8u; // 8011024C
  c->lr=0x80110254u; f_800F72A0(c); // 80110250
L_80110254:;
  c->r[3]=0u+0x00000000u; // 80110254
  goto L_80110274; // 80110258
L_8011025C:;
  c->r[0]=0u+0x00000000u; // 8011025C
  c->r[5]=c->r[31]|c->r[31]; // 80110260
  W8(c->r[31]+0x00000024u,c->r[0]); // 80110264
  c->r[4]=0u+0x00000017u; // 80110268
  c->lr=0x80110270u; f_801107B0(c); // 8011026C
  c->r[3]=0u+0x00000001u; // 80110270
L_80110274:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110274
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110278
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011027C
  c->lr=c->r[0]; // 80110280
  c->r[1]=c->r[1]+0x00000010u; // 80110284
  return; // 80110288
}

// L2CA_ConfigRsp
void f_8011028C(Ctx* __restrict c) {
  trace_call(0x8011028Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011028C
  c->r[0]=c->lr; // 80110290
  c->r[5]=0u+0x803D0000u; // 80110294
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110298
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011029C
  c->r[31]=c->r[4]|c->r[4]; // 801102A0
  W32(c->r[1]+0x00000008u,c->r[30]); // 801102A4
  c->r[30]=c->r[3]|c->r[3]; // 801102A8
  c->r[0]=R8(c->r[5]+0xFFFFD2E0u); // 801102AC
  cmpu(c,0,c->r[0],0x00000003u); // 801102B0
  if (crb(c,0)) { goto L_801102D4; } // 801102B4
  c->r[3]=0u+0x00080000u; // 801102B8
  c->r[4]=0u+0x80330000u; // 801102BC
  c->r[6]=R16(c->r[31]+0x00000000u); // 801102C0
  c->r[5]=c->r[30]|c->r[30]; // 801102C4
  c->r[3]=c->r[3]+0x00000002u; // 801102C8
  c->r[4]=c->r[4]+0xFFFFCD04u; // 801102CC
  c->lr=0x801102D4u; f_800F72C0(c); // 801102D0
L_801102D4:;
  c->r[4]=c->r[30]|c->r[30]; // 801102D4
  c->r[3]=0u+0x00000000u; // 801102D8
  c->lr=0x801102E0u; f_801154F8(c); // 801102DC
  cmps(c,0,(int32_t)c->r[3],0); // 801102E0
  if (!crb(c,2)) { goto L_80110318; } // 801102E4
  c->r[3]=0u+0x803D0000u; // 801102E8
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 801102EC
  cmpu(c,0,c->r[0],0x00000002u); // 801102F0
  if (crb(c,0)) { goto L_80110310; } // 801102F4
  c->r[3]=0u+0x00080000u; // 801102F8
  c->r[4]=0u+0x80330000u; // 801102FC
  c->r[5]=c->r[30]|c->r[30]; // 80110300
  c->r[3]=c->r[3]+0x00000001u; // 80110304
  c->r[4]=c->r[4]+0xFFFFCD30u; // 80110308
  c->lr=0x80110310u; f_800F72A0(c); // 8011030C
L_80110310:;
  c->r[3]=0u+0x00000000u; // 80110310
  goto L_80110344; // 80110314
L_80110318:;
  c->r[0]=R16(c->r[31]+0x00000000u); // 80110318
  cmps(c,0,(int32_t)c->r[0],0); // 8011031C
  if (!crb(c,2)) { goto L_80110334; } // 80110320
  c->r[5]=c->r[31]|c->r[31]; // 80110324
  c->r[4]=0u+0x00000018u; // 80110328
  c->lr=0x80110330u; f_801107B0(c); // 8011032C
  goto L_80110340; // 80110330
L_80110334:;
  c->r[5]=c->r[31]|c->r[31]; // 80110334
  c->r[4]=0u+0x00000019u; // 80110338
  c->lr=0x80110340u; f_801107B0(c); // 8011033C
L_80110340:;
  c->r[3]=0u+0x00000001u; // 80110340
L_80110344:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 80110344
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 80110348
  c->r[30]=R32(c->r[1]+0x00000008u); // 8011034C
  c->lr=c->r[0]; // 80110350
  c->r[1]=c->r[1]+0x00000010u; // 80110354
  return; // 80110358
}

// L2CA_DisconnectReq
void f_8011035C(Ctx* __restrict c) {
  trace_call(0x8011035Cu);
  {uint32_t ea=c->r[1]+0xFFFFFFF0u; W32(ea,c->r[1]); c->r[1]=ea;} // 8011035C
  c->r[0]=c->lr; // 80110360
  c->r[4]=0u+0x803D0000u; // 80110364
  W32(c->r[1]+0x00000014u,c->r[0]); // 80110368
  W32(c->r[1]+0x0000000Cu,c->r[31]); // 8011036C
  c->r[31]=c->r[3]|c->r[3]; // 80110370
  c->r[0]=R8(c->r[4]+0xFFFFD2E0u); // 80110374
  cmpu(c,0,c->r[0],0x00000003u); // 80110378
  if (crb(c,0)) { goto L_80110398; } // 8011037C
  c->r[3]=0u+0x00080000u; // 80110380
  c->r[4]=0u+0x80330000u; // 80110384
  c->r[5]=c->r[31]|c->r[31]; // 80110388
  c->r[3]=c->r[3]+0x00000002u; // 8011038C
  c->r[4]=c->r[4]+0xFFFFCD5Cu; // 80110390
  c->lr=0x80110398u; f_800F72A0(c); // 80110394
L_80110398:;
  c->r[4]=c->r[31]|c->r[31]; // 80110398
  c->r[3]=0u+0x00000000u; // 8011039C
  c->lr=0x801103A4u; f_801154F8(c); // 801103A0
  cmps(c,0,(int32_t)c->r[3],0); // 801103A4
  if (!crb(c,2)) { goto L_801103DC; } // 801103A8
  c->r[3]=0u+0x803D0000u; // 801103AC
  c->r[0]=R8(c->r[3]+0xFFFFD2E0u); // 801103B0
  cmpu(c,0,c->r[0],0x00000002u); // 801103B4
  if (crb(c,0)) { goto L_801103D4; } // 801103B8
  c->r[3]=0u+0x00080000u; // 801103BC
  c->r[4]=0u+0x80330000u; // 801103C0
  c->r[5]=c->r[31]|c->r[31]; // 801103C4
  c->r[3]=c->r[3]+0x00000001u; // 801103C8
  c->r[4]=c->r[4]+0xFFFFCD80u; // 801103CC
  c->lr=0x801103D4u; f_800F72A0(c); // 801103D0
L_801103D4:;
  c->r[3]=0u+0x00000000u; // 801103D4
  goto L_801103EC; // 801103D8
L_801103DC:;
  c->r[4]=0u+0x0000001Au; // 801103DC
  c->r[5]=0u+0x00000000u; // 801103E0
  c->lr=0x801103E8u; f_801107B0(c); // 801103E4
  c->r[3]=0u+0x00000001u; // 801103E8
L_801103EC:;
  c->r[0]=R32(c->r[1]+0x00000014u); // 801103EC
  c->r[31]=R32(c->r[1]+0x0000000Cu); // 801103F0
  c->lr=c->r[0]; // 801103F4
  c->r[1]=c->r[1]+0x00000010u; // 801103F8
  return; // 801103FC
}

