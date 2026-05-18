
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204109a(void)

{
  int unaff_s0;
  int unaff_s1;
  int iVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  code *pcVar6;
  
  if (*(ushort *)(unaff_s0 + 0x178) != 0) {
    iVar1 = (uint)*(ushort *)(unaff_s0 + 0x178) * unaff_s1;
    iVar3 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(iVar1);
    pcVar6 = *(code **)(_DAT_ram_3fcdfed0 + 0x580);
    *(int *)(unaff_s0 + 0x94) = *(int *)(unaff_s0 + 0x94) + iVar3;
    iVar4 = (*pcVar6)();
    iVar3 = _DAT_ram_3fcdff6c;
    uVar5 = (iVar1 - iVar4) + (uint)*(byte *)(unaff_s0 + 0x99);
    cVar2 = (char)uVar5;
    *(char *)(unaff_s0 + 0x99) = cVar2;
    if ((uint)*(ushort *)(iVar3 + 0x24) <= (uVar5 & 0xff)) {
      *(char *)(unaff_s0 + 0x99) = cVar2 - (char)*(ushort *)(iVar3 + 0x24);
      *(int *)(unaff_s0 + 0x94) = *(int *)(unaff_s0 + 0x94) + 1;
    }
  }
  return 0;
}

