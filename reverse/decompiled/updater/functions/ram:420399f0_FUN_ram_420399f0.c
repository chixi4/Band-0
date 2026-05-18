
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420399f0(byte param_1)

{
  int iVar1;
  
  if (DAT_ram_3fcb511a == '\x01') {
    iVar1 = 0;
    if (((param_1 & 0xfd) == 1) && (iVar1 = FUN_ram_42040cfa(), iVar1 != 0)) {
      FUN_ram_42033fd8(1,2,4,0x3c07b35c);
    }
    if (1 < (byte)(param_1 - 2)) {
      return iVar1;
    }
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x284) == (code *)0x0) {
      iVar1 = 0x102;
    }
    else {
      iVar1 = (**(code **)(_DAT_ram_3fcdfb24 + 0x284))();
      if (iVar1 == 0) goto LAB_ram_42039a06;
    }
    FUN_ram_42033fd8(1,2,4,0x3c07b410);
  }
  else {
LAB_ram_42039a06:
    iVar1 = 0;
  }
  return iVar1;
}

