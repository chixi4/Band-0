
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42052e2c(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_ram_3fcb67b8 = DAT_ram_3fcb67b8 + '\x01';
  iVar1 = _DAT_ram_3fcb67c0;
LAB_ram_42052e54:
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(char *)(iVar1 + 0x22) != DAT_ram_3fcb67b8) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  *(char *)(iVar1 + 0x22) = DAT_ram_3fcb67b8;
  uVar2 = *(ushort *)(iVar1 + 0x1e);
  if ((uVar2 & 1) != 0) {
    *(ushort *)(iVar1 + 0x1e) = uVar2 | 2;
    FUN_ram_420552e2(iVar1);
    uVar2 = *(ushort *)(iVar1 + 0x1e) & 0xfffc;
    *(ushort *)(iVar1 + 0x1e) = uVar2;
  }
  if ((uVar2 & 8) != 0) {
    *(ushort *)(iVar1 + 0x1e) = uVar2 & 0xfff7;
    FUN_ram_42052650(iVar1);
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  if (*(int *)(iVar1 + 0x78) != 0) goto code_r0x42052eb6;
  goto LAB_ram_42052ec6;
code_r0x42052eb6:
  DAT_ram_3fcb67ba = '\0';
  FUN_ram_42052da6(iVar1);
  iVar1 = _DAT_ram_3fcb67c0;
  if (DAT_ram_3fcb67ba == '\0') {
LAB_ram_42052ec6:
    iVar1 = iVar3;
  }
  goto LAB_ram_42052e54;
}

