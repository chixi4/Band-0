
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42093faa(int param_1,int param_2,undefined1 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  uint *puVar6;
  int iVar7;
  
  iVar1 = _DAT_ram_3fcdfdec;
  if ((*(byte *)(param_1 + 0x1d) < 3) &&
     (iVar2 = *(int *)(param_2 + 0x20), iVar3 = iVar2, iVar2 != 0)) {
    do {
      iVar4 = iVar3;
      iVar3 = *(int *)(iVar4 + 0x20);
    } while (*(int *)(iVar4 + 0x20) != 0);
    uVar5 = *(uint *)(*(int *)(param_2 + 0x24) + 0x10) >> 0x14 & 0xf;
    iVar3 = uVar5 * 0x30 + _DAT_ram_3fcdfdec;
    iVar7 = *(int *)(iVar3 + 0x20);
    *(int *)(iVar4 + 0x20) = iVar7;
    if (iVar7 == 0) {
      *(int *)(iVar3 + 0x24) = iVar4 + 0x20;
    }
    *(int *)(iVar1 + uVar5 * 0x30 + 0x20) = iVar2;
  }
  do {
    FUN_ram_42093df0();
    *(int *)(param_1 + 0x24) = *(int *)(param_1 + 0x24) + 1;
    puVar6 = *(uint **)(param_2 + 0x24);
    *(undefined1 *)((int)puVar6 + 0x13) = param_3;
    uVar5 = puVar6[4];
    if ((*puVar6 & 0xc0) != 0x80) {
      (*(code *)&SUB_ram_40011b50)(param_2,param_4);
      return;
    }
    (*(code *)&SUB_ram_40011b50)(param_2,0);
    param_2 = (*(code *)&SUB_ram_40011be4)(uVar5 >> 0x14 & 0xf);
  } while (param_2 != 0);
  return;
}

