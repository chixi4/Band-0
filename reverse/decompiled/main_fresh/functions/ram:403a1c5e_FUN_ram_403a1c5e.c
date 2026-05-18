
undefined4 FUN_ram_403a1c5e(int param_1,int param_2,undefined4 *param_3)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_2 != 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  iVar2 = FUN_ram_40391914();
  if ((uint)(iVar2 - *(int *)(param_1 + 0xc)) < 10000) {
    if (19999 < (uint)(iVar2 - *(int *)(param_1 + 8))) {
      uVar1 = 1;
      uVar3 = 0;
      goto LAB_ram_403a1c96;
    }
  }
  else {
    *(int *)(param_1 + 8) = iVar2;
  }
  uVar3 = 0x107;
  uVar1 = 0;
LAB_ram_403a1c96:
  if (param_3 != (undefined4 *)0x0) {
    *param_3 = uVar1;
  }
  return uVar3;
}

