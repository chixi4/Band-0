
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044e38(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  int iVar4;
  byte *pbVar5;
  int iVar6;
  
  iVar1 = _DAT_ram_3fcdfec0;
  if (*(char *)(_DAT_ram_3fcdfec0 + 8) != '\0') {
    iVar3 = *(int *)(_DAT_ram_3fcdfec0 + 4);
    iVar4 = ((byte)(*(char *)(_DAT_ram_3fcdfec0 + 8) - 1) + 1) * 4;
    iVar6 = 0;
    do {
      while( true ) {
        pbVar5 = *(byte **)(iVar3 + iVar6);
        if ((*pbVar5 & 1) != 0) break;
        iVar6 = iVar6 + 4;
        pbVar5[1] = pbVar5[1] & 0x7f;
        if (iVar4 == iVar6) goto LAB_ram_42044e8c;
      }
      *pbVar5 = *pbVar5 & 0xfd;
      iVar6 = iVar6 + 4;
    } while (iVar4 != iVar6);
  }
LAB_ram_42044e8c:
  uVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x51c))();
  iVar3 = _DAT_ram_3fcdfecc;
  *(undefined1 *)(iVar1 + 8) = uVar2;
                    /* WARNING: Could not recover jumptable at 0x42044eb0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(iVar3 + 0x1a8))();
  return;
}

