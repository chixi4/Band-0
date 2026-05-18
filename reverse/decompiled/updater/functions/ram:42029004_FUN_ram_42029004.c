
undefined4 FUN_ram_42029004(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 == (int *)0x0) || ((uint *)*param_1 == (uint *)0x0)) {
    return 0xffffaf00;
  }
  uVar2 = *(uint *)*param_1;
  if (uVar2 == 9) {
    uVar1 = 0;
  }
  else {
    if (9 < uVar2) {
      if (uVar2 == 10) {
        uVar1 = 1;
      }
      else {
        uVar1 = 0;
        if (uVar2 != 0xb) {
          return 0xffffaf00;
        }
      }
      uVar1 = FUN_ram_420294c0(param_1[1],uVar1);
      return uVar1;
    }
    if (uVar2 == 5) {
      uVar1 = FUN_ram_4202a9a8(param_1[1]);
      return uVar1;
    }
    if (uVar2 != 8) {
      if (uVar2 != 3) {
        return 0xffffaf00;
      }
      uVar1 = FUN_ram_4202ad0a(param_1[1]);
      return uVar1;
    }
    uVar1 = 1;
  }
  uVar1 = FUN_ram_4202abe0(param_1[1],uVar1);
  return uVar1;
}

