
undefined4 FUN_ram_4206e894(int param_1)

{
  undefined4 uVar1;
  
  if (param_1 == 2) {
    uVar1 = 0x400;
  }
  else {
    uVar1 = 0x800;
    if ((param_1 != 3) && (uVar1 = 0x200, param_1 != 1)) {
      return 0x1000;
    }
  }
  return uVar1;
}

