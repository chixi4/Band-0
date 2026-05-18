
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac28a(void)

{
  int iVar1;
  int iVar2;
  
  iVar1 = ((uint)_DAT_ram_3fcb80f0 - (uint)_DAT_ram_3fcb80a4) * 0x10000;
  iVar2 = iVar1 >> 0x10;
  iVar1 = iVar1 >> 0x13;
  if (iVar2 < 0) {
    iVar1 = iVar2 / 6;
  }
  iVar1 = (*(code *)&SUB_ram_40012218)(iVar1,0xf,0xfffffff1);
  if ((ushort)((uint)DAT_ram_3fcb812a + iVar1) != (ushort)DAT_ram_3fcb812b) {
    DAT_ram_3fcb812b = (byte)(((uint)DAT_ram_3fcb812a + iVar1) * 0x10000 >> 0x10);
    FUN_ram_420ac218(0);
    return;
  }
  return;
}

