
undefined4 FUN_ram_420290ee(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == (uint *)0x0) {
    return 0xffffaf00;
  }
  uVar2 = *param_1;
  if (uVar2 != 9) {
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
      uVar1 = FUN_ram_4202a68e(param_2,param_3,param_4,uVar1);
      return uVar1;
    }
    if (uVar2 == 5) {
      uVar1 = FUN_ram_420293e2();
      return uVar1;
    }
    if (uVar2 != 8) {
      if (uVar2 != 3) {
        return 0xffffaf00;
      }
      uVar1 = FUN_ram_4202934a();
      return uVar1;
    }
  }
  uVar1 = FUN_ram_42029432();
  return uVar1;
}

