
undefined4 FUN_ram_42012b56(int *param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  
  if (param_1 == (int *)0x0) {
    return 0x16;
  }
  puVar1 = (undefined4 *)*param_1;
  if (puVar1 == (undefined4 *)0x0) {
    return 0x16;
  }
  if (puVar1[1] - 1 < 2) {
    iVar2 = FUN_ram_403970d6(*puVar1);
    iVar3 = FUN_ram_403989ea();
    if (iVar2 != iVar3) {
      return 1;
    }
    if (puVar1[1] == 1) {
      iVar2 = FUN_ram_403972dc(*puVar1);
      goto LAB_ram_42012b9a;
    }
  }
  iVar2 = FUN_ram_40397156(*puVar1,0,0,0);
LAB_ram_42012b9a:
  if (iVar2 == 1) {
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

