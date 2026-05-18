
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033272(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcb6bc4;
  if ((param_1 != 0) && (param_2 != 0)) {
    *(short *)(_DAT_ram_3fcb6bc4 + 0x14) = (short)param_1;
    *(short *)(iVar1 + 0x16) = (short)param_2;
    *(short *)(iVar1 + 0x22) = (short)param_2;
    return 0;
  }
  return 3;
}

