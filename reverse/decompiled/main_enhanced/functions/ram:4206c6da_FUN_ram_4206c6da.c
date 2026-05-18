
undefined4 FUN_ram_4206c6da(uint *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 != (uint *)0x0) {
    uVar2 = *param_1;
    if (uVar2 == 8) {
      uVar1 = 1;
LAB_ram_4206c70c:
      uVar1 = FUN_ram_4206d85c(param_2,param_3,param_4,uVar1);
      return uVar1;
    }
    if (uVar2 < 9) {
      if (uVar2 == 3) {
        uVar1 = FUN_ram_4206d764();
        return uVar1;
      }
      if (uVar2 == 5) {
        uVar1 = FUN_ram_4206d816();
        return uVar1;
      }
    }
    else {
      uVar1 = 0;
      if (uVar2 == 9) goto LAB_ram_4206c70c;
    }
  }
  return 0xffffaf00;
}

