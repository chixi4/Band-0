
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_403964ce(int param_1,int param_2,int param_3,uint param_4,int param_5,uint param_6)

{
  undefined4 *unaff_s0;
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 unaff_s2;
  
  uVar3 = (uint)((param_6 >> 1 & 1) != param_4);
  uVar1 = -uVar3;
  if (param_5 != param_2) {
    uVar1 = ~uVar3;
  }
  if (_DAT_ram_3fcc4e14 != (code *)0x0) {
    if (param_3 == 0) {
      param_5 = param_5 + -0xc;
      param_1 = param_1 + 8;
    }
    iVar2 = (*_DAT_ram_3fcc4e14)(param_1,param_5,param_3 == 0,1);
    uVar1 = uVar1 - (iVar2 == 0);
  }
  *unaff_s0 = unaff_s2;
  unaff_s0[1] = unaff_s0[1] + uVar1;
  return 1;
}

