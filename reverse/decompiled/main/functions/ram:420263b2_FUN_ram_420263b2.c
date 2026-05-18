
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420263b2(void)

{
  int iVar1;
  int iVar2;
  ushort uVar3;
  
  iVar1 = _DAT_ram_3fcb6b70;
  iVar2 = 0;
  if (*(ushort *)(_DAT_ram_3fcb6b70 + 0x1384) < 0x1a) {
    uVar3 = *(ushort *)(_DAT_ram_3fcb6b70 + 0x1384) + 1;
    *(ushort *)(_DAT_ram_3fcb6b70 + 0x1384) = uVar3;
    iVar2 = (uVar3 - 1) * 0x20 + 0x1024 + iVar1;
  }
  return iVar2;
}

