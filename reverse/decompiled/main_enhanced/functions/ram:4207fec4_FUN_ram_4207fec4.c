
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4207fec4(byte param_1)

{
  int iVar1;
  
  if (DAT_ram_3fcc41aa == '\x01') {
    iVar1 = 0;
    if (((param_1 & 0xfd) == 1) && (iVar1 = FUN_ram_42089262(), iVar1 != 0)) {
      FUN_ram_4207a038(1,2,4,&DAT_ram_3c0fc6ac);
    }
    if (1 < (byte)(param_1 - 2)) {
      return iVar1;
    }
    if (*(code **)(_DAT_ram_3fcdfb24 + 0x284) == (code *)0x0) {
      iVar1 = 0x102;
    }
    else {
      iVar1 = (**(code **)(_DAT_ram_3fcdfb24 + 0x284))();
      if (iVar1 == 0) goto LAB_ram_4207feda;
    }
    FUN_ram_4207a038(1,2,4,&DAT_ram_3c0fc760);
  }
  else {
LAB_ram_4207feda:
    iVar1 = 0;
  }
  return iVar1;
}

