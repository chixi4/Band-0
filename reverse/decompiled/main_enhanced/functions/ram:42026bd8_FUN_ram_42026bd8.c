
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42026bd8(void)

{
  ushort uVar1;
  int iVar2;
  
  iVar2 = _DAT_ram_3fcb6b70;
  if (*(ushort *)(_DAT_ram_3fcb6b70 + 0x1386) < 2) {
    uVar1 = *(ushort *)(_DAT_ram_3fcb6b70 + 0x1386) + 1;
    *(ushort *)(_DAT_ram_3fcb6b70 + 0x1386) = uVar1;
    (*(code *)&SUB_ram_40010488)((uVar1 - 1) * 0x10 + 0x1364 + iVar2,0,0x10);
    iVar2 = FUN_ram_4203293e(iVar2 + 0x1364);
    if ((iVar2 == 0) && (iVar2 = FUN_ram_4203289e(_DAT_ram_3fcb6b70 + 0x1364), iVar2 == 0)) {
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

