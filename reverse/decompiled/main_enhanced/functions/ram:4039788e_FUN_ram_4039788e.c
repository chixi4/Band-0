
uint FUN_ram_4039788e(uint *param_1,uint param_2,int param_3,int param_4,int param_5)

{
  uint uVar1;
  int iVar2;
  
  if (((param_1 == (uint *)0x0) || (0xfffffe < param_2 - 1)) ||
     ((iVar2 = FUN_ram_403989f4(), iVar2 == 0 && (param_5 != 0)))) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  FUN_ram_403980c6();
  uVar1 = *param_1;
  if (param_4 == 0) {
    if ((param_2 & uVar1) != 0) goto LAB_ram_40397908;
LAB_ram_403978e0:
    if (param_5 == 0) goto LAB_ram_40397916;
    uVar1 = (uint)(param_3 != 0) << 0x18;
    if (param_4 != 0) {
      uVar1 = uVar1 | 0x4000000;
    }
    FUN_ram_403986fe(param_1 + 1,uVar1 | param_2,param_5);
    uVar1 = 0;
  }
  else {
    if ((param_2 & uVar1) != param_2) goto LAB_ram_403978e0;
LAB_ram_40397908:
    if (param_3 != 0) {
      *param_1 = ~param_2 & uVar1;
    }
LAB_ram_40397916:
    param_5 = 0;
  }
  iVar2 = FUN_ram_40398348();
  if (param_5 == 0) {
    return uVar1;
  }
  if (iVar2 == 0) {
    FUN_ram_403969de();
  }
  uVar1 = FUN_ram_40398c60();
  if ((int)(uVar1 << 6) < 0) goto LAB_ram_4039794a;
  FUN_ram_40396966();
  uVar1 = *param_1;
  if (param_4 == 0) {
    if ((param_2 & uVar1) != 0) {
LAB_ram_40397966:
      if (param_3 != 0) {
        *param_1 = ~param_2 & uVar1;
      }
    }
  }
  else if ((param_2 & uVar1) == param_2) goto LAB_ram_40397966;
  FUN_ram_40396994();
LAB_ram_4039794a:
  return uVar1 & 0xffffff;
}

