
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42055282(void)

{
  int iVar1;
  ushort uVar2;
  int iVar3;
  
  DAT_ram_3fcc52e8 = DAT_ram_3fcc52e8 + '\x01';
  iVar1 = _DAT_ram_3fcc52f0;
LAB_ram_420552aa:
  while( true ) {
    if (iVar1 == 0) {
      return;
    }
    if (*(char *)(iVar1 + 0x22) != DAT_ram_3fcc52e8) break;
    iVar1 = *(int *)(iVar1 + 0xc);
  }
  *(char *)(iVar1 + 0x22) = DAT_ram_3fcc52e8;
  uVar2 = *(ushort *)(iVar1 + 0x1e);
  if ((uVar2 & 1) != 0) {
    *(ushort *)(iVar1 + 0x1e) = uVar2 | 2;
    FUN_ram_42057e96(iVar1);
    uVar2 = *(ushort *)(iVar1 + 0x1e) & 0xfffc;
    *(ushort *)(iVar1 + 0x1e) = uVar2;
  }
  if ((uVar2 & 8) != 0) {
    *(ushort *)(iVar1 + 0x1e) = uVar2 & 0xfff7;
    FUN_ram_4205458e(iVar1);
  }
  iVar3 = *(int *)(iVar1 + 0xc);
  if (*(int *)(iVar1 + 0x7c) != 0) goto code_r0x4205530c;
  goto LAB_ram_4205531c;
code_r0x4205530c:
  DAT_ram_3fcc52ea = '\0';
  FUN_ram_420551fc(iVar1);
  iVar1 = _DAT_ram_3fcc52f0;
  if (DAT_ram_3fcc52ea == '\0') {
LAB_ram_4205531c:
    iVar1 = iVar3;
  }
  goto LAB_ram_420552aa;
}

