
undefined4 FUN_ram_4039f808(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40391178();
  if ((uint)(iVar1 - *(int *)(param_1 + 0xc)) < 10000) {
    if (19999 < (uint)(iVar1 - *(int *)(param_1 + 8))) {
      uVar3 = 1;
      uVar2 = 0;
      goto LAB_ram_4039f830;
    }
  }
  else {
    *(int *)(param_1 + 8) = iVar1;
  }
  uVar3 = 0;
  uVar2 = 0x107;
LAB_ram_4039f830:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar3;
  }
  return uVar2;
}

