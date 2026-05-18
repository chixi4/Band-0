
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42039ace(byte param_1)

{
  int iVar1;
  
  if (DAT_ram_3fcb511a == '\x01') {
    iVar1 = 0;
    if ((param_1 & 0xfd) == 1) {
      iVar1 = FUN_ram_420384d8();
      if (1 < *(int *)(iVar1 + 4) + 1U) {
        iVar1 = FUN_ram_4203990e(iVar1 + (uint)*(byte *)(iVar1 + 0x9f) * 0x8c + 0x10b);
        if (iVar1 == 0) {
          DAT_ram_3fcb5132 = 1;
        }
        else {
          DAT_ram_3fcb5132 = 0;
        }
      }
      DAT_ram_3fcb5190 = 0;
      iVar1 = FUN_ram_42040e62(&DAT_ram_3fcb513e);
      if (iVar1 != 0) {
        FUN_ram_42033fd8(1,2,4,0x3c07b458);
      }
    }
    if (1 < (byte)(param_1 - 2)) {
      return iVar1;
    }
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x280) == (code *)0x0) {
      iVar1 = 0x102;
    }
    else {
      iVar1 = (**(code **)(_DAT_ram_3fcdfb24 + 0x280))();
      if (iVar1 == 0) goto LAB_ram_42039aec;
    }
    FUN_ram_42033fd8(1,2,4,0x3c07b468);
  }
  else {
LAB_ram_42039aec:
    iVar1 = 0;
  }
  return iVar1;
}

