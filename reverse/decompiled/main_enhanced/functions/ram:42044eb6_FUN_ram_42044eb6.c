
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044eb6(void)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  uint *puVar4;
  byte *pbVar5;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x518))();
  if (-1 < iVar2) {
    iVar3 = *(int *)(*(int *)(_DAT_ram_3fcdfec0 + 4) + iVar2 * 4);
    puVar4 = (uint *)(**(code **)(_DAT_ram_3fcdfecc + 0x1ec))
                               (iVar3 + 2,*(byte *)(iVar3 + 1) >> 6 & 1);
    if (puVar4 != (uint *)0x0) {
      *puVar4 = *puVar4 & 0xfffffdff;
    }
    iVar3 = _DAT_ram_3fcdfec0;
    pbVar5 = *(byte **)(*(int *)(_DAT_ram_3fcdfec0 + 4) + iVar2 * 4);
    if ((*pbVar5 & 1) == 0) {
      pbVar5[1] = pbVar5[1] & 0x7f;
    }
    else {
      *pbVar5 = *pbVar5 & 0xfd;
    }
    uVar1 = (**(code **)(_DAT_ram_3fcdfed0 + 0x51c))();
    *(undefined1 *)(iVar3 + 8) = uVar1;
  }
  return;
}

