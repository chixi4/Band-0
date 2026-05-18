
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4207ffa2(byte param_1)

{
  int iVar1;
  
  if (DAT_ram_3fcc41aa == '\x01') {
    iVar1 = 0;
    if ((param_1 & 0xfd) == 1) {
      iVar1 = FUN_ram_4207e5a8();
      if (1 < *(int *)(iVar1 + 4) + 1U) {
        iVar1 = FUN_ram_4207fde2(iVar1 + (uint)*(byte *)(iVar1 + 0x9f) * 0x8c + 0x10b);
        if (iVar1 == 0) {
          DAT_ram_3fcc41c2 = 1;
        }
        else {
          DAT_ram_3fcc41c2 = 0;
        }
      }
      DAT_ram_3fcc4220 = 0;
      iVar1 = FUN_ram_420893ca(&DAT_ram_3fcc41ce);
      if (iVar1 != 0) {
        FUN_ram_4207a038(1,2,4,&DAT_ram_3c0fc7a8);
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
      if (iVar1 == 0) goto LAB_ram_4207ffc0;
    }
    FUN_ram_4207a038(1,2,4,&DAT_ram_3c0fc7b8);
  }
  else {
LAB_ram_4207ffc0:
    iVar1 = 0;
  }
  return iVar1;
}

