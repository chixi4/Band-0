
void FUN_ram_4206e068(int param_1,int param_2,int param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint *puVar3;
  uint *puVar4;
  int iVar5;
  uint uVar6;
  
  uVar1 = param_4 >> 5;
  uVar2 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)(uVar1 * 4 + param_3));
  iVar5 = 0;
  do {
    uVar1 = uVar1 + 1 & 3;
    uVar6 = uVar2 << (param_4 & 0x1f);
    uVar2 = (*(code *)&SUB_ram_400108cc)(*(undefined4 *)(uVar1 * 4 + param_3));
    uVar6 = (*(code *)&SUB_ram_400108cc)(uVar2 >> (0x20 - (param_4 & 0x1f) & 0x1f) | uVar6);
    puVar4 = (uint *)(param_2 + iVar5);
    puVar3 = (uint *)(param_1 + iVar5);
    iVar5 = iVar5 + 4;
    *puVar3 = *puVar4 ^ uVar6;
  } while (iVar5 != 0x10);
  return;
}

