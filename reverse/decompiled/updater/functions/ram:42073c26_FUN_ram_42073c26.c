
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42073c26(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((uint)_DAT_ram_3fcb0c94 - (uint)_DAT_ram_3fcb0c48) * 0x10000;
  iVar2 = iVar1 >> 0x10;
  iVar1 = iVar1 >> 0x13;
  if (iVar2 < 0) {
    iVar1 = iVar2 / 6;
  }
  iVar1 = (*(code *)&SUB_ram_40012218)(iVar1,0xf,0xfffffff1);
  if ((ushort)((uint)DAT_ram_3fcb0cce + iVar1) != (ushort)DAT_ram_3fcb0ccf) {
    DAT_ram_3fcb0ccf = (byte)(((uint)DAT_ram_3fcb0cce + iVar1) * 0x10000 >> 0x10);
    FUN_ram_42073bb4(0);
    return;
  }
  return;
}

