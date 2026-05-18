
undefined4 FUN_ram_4206c666(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (((param_1 != (int *)0x0) && ((uint *)*param_1 != (uint *)0x0)) &&
     (uVar2 = *(uint *)*param_1, uVar2 < 10)) {
    if (7 < uVar2) {
      uVar1 = FUN_ram_4206dcca(param_1[1]);
      return uVar1;
    }
    if (uVar2 == 3) {
      uVar1 = FUN_ram_4206d562(param_1[1]);
      return uVar1;
    }
    if (uVar2 == 5) {
      uVar1 = FUN_ram_4206da7e(param_1[1]);
      return uVar1;
    }
  }
  return 0xffffaf00;
}

