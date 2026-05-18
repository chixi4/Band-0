
undefined4 FUN_ram_420290a6(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && ((uint *)*param_1 != (uint *)0x0)) {
    uVar2 = *(uint *)*param_1;
    if (uVar2 < 10) {
      if (7 < uVar2) {
        uVar1 = FUN_ram_4202ac24(param_1[1]);
        return uVar1;
      }
      if (uVar2 == 3) {
        uVar1 = FUN_ram_4202acda(param_1[1]);
        return uVar1;
      }
      if (uVar2 == 5) {
        uVar1 = FUN_ram_4202a9da(param_1[1]);
        return uVar1;
      }
    }
    else if (uVar2 - 10 < 2) {
      uVar1 = FUN_ram_4202a362(param_1[1]);
      return uVar1;
    }
  }
  return 0xffffaf00;
}

