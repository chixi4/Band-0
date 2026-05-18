
undefined4 FUN_ram_4206c624(int *param_1)

{
  undefined4 uVar1;
  uint uVar2;
  
  if ((param_1 != (int *)0x0) && ((uint *)*param_1 != (uint *)0x0)) {
    uVar2 = *(uint *)*param_1;
    if (uVar2 == 8) {
      uVar1 = 1;
LAB_ram_4206c652:
      uVar1 = FUN_ram_4206dc9c(param_1[1],uVar1);
      return uVar1;
    }
    if (uVar2 < 9) {
      if (uVar2 == 3) {
        uVar1 = FUN_ram_4206c958(param_1[1]);
        return uVar1;
      }
      if (uVar2 == 5) {
        uVar1 = FUN_ram_4206da64(param_1[1]);
        return uVar1;
      }
    }
    else {
      uVar1 = 0;
      if (uVar2 == 9) goto LAB_ram_4206c652;
    }
  }
  return 0xffffaf00;
}

