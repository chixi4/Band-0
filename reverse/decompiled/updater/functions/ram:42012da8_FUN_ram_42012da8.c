
undefined4 FUN_ram_42012da8(int *param_1)

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
    iVar2 = FUN_ram_40395490(*puVar1);
    iVar3 = FUN_ram_403968bc();
    if (iVar2 != iVar3) {
      return 1;
    }
    if (puVar1[1] == 1) {
      FUN_ram_4039566c(*puVar1);
      return 0;
    }
  }
  FUN_ram_40395514(*puVar1,0,0,0);
  return 0;
}

