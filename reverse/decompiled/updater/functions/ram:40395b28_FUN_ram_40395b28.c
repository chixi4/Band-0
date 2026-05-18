
uint FUN_ram_40395b28(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  FUN_ram_403968c6();
  FUN_ram_40396232();
  uVar1 = *param_1;
  if (param_4 == 0) {
    if ((uVar1 & param_2) != 0) goto LAB_ram_40395b80;
LAB_ram_40395b58:
    if (param_5 == 0) goto LAB_ram_40395b8e;
    uVar1 = (uint)(param_3 != 0) << 0x18;
    if (param_4 != 0) {
      uVar1 = uVar1 | 0x4000000;
    }
    FUN_ram_40396630(param_1 + 1,uVar1 | param_2,param_5);
    uVar1 = 0;
  }
  else {
    if ((uVar1 & param_2) != param_2) goto LAB_ram_40395b58;
LAB_ram_40395b80:
    if (param_3 != 0) {
      *param_1 = ~param_2 & uVar1;
    }
LAB_ram_40395b8e:
    param_5 = 0;
  }
  iVar2 = FUN_ram_403963e2();
  if (param_5 == 0) {
    return uVar1;
  }
  if (iVar2 == 0) {
    FUN_ram_40394dce();
  }
  uVar1 = FUN_ram_40396b0c();
  if ((int)(uVar1 << 6) < 0) goto LAB_ram_40395bc2;
  FUN_ram_40394d60();
  uVar1 = *param_1;
  if (param_4 == 0) {
    if ((param_2 & uVar1) != 0) {
LAB_ram_40395bde:
      if (param_3 != 0) {
        *param_1 = ~param_2 & uVar1;
      }
    }
  }
  else if (param_2 == (param_2 & uVar1)) goto LAB_ram_40395bde;
  FUN_ram_40394d8e();
LAB_ram_40395bc2:
  return uVar1 & 0xffffff;
}

