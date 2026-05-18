
undefined4 FUN_ram_42099588(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(int *)(param_1 + 0x3c) == 0) {
    return 0;
  }
  if (*(int *)(param_1 + 0x38) == 0) {
    iVar1 = FUN_ram_4039c08e(1,0x30);
    *(int *)(param_1 + 0x38) = iVar1;
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    uVar2 = FUN_ram_4207efea(0xffffffff);
    FUN_ram_4039c11e(iVar1 + 8,uVar2,0x20);
  }
  *(undefined4 *)(*(int *)(param_1 + 0x38) + 4) = 1;
  return 0;
}

