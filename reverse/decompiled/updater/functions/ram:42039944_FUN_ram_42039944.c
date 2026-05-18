
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42039944(byte *param_1)

{
  undefined4 uVar1;
  
  if (param_1 == (byte *)0x0) {
    FUN_ram_42033fd8(1,2,1,0x3c07d394);
    uVar1 = 0x102;
  }
  else {
    uVar1 = 0xffffffff;
    if ((*param_1 < 0x50) && (uVar1 = 0xffffffff, *(int *)(param_1 + 4) != 0)) {
      (*(code *)&SUB_ram_40011d44)();
      uVar1 = (**(code **)(param_1 + 4))(param_1);
      (*(code *)&SUB_ram_40011d48)();
    }
  }
  *(undefined4 *)(param_1 + 0xc) = uVar1;
  if ((param_1[1] & 2) == 0) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(param_1);
  }
  else if ((param_1[1] & 3) == 3) {
    if (*(int *)(param_1 + 0x10) == 0) {
      FUN_ram_42033fd8(1,2,2,0x3c07fc20,*param_1);
    }
    else {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x40))();
    }
  }
  return uVar1;
}

