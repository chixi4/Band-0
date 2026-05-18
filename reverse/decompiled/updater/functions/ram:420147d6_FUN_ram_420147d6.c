
int FUN_ram_420147d6(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  
  param_1 = param_1 + 0x14;
  iVar7 = 0;
  for (iVar2 = 0; iVar2 < param_2; iVar2 = iVar2 + 1) {
    if (*(char *)(param_1 + -0x14) != '\0') {
      iVar6 = gp + -0x600;
      uVar8 = 0;
      do {
        if (*(char *)(iVar6 + 1) == iVar2) {
          uVar1 = *(undefined1 *)(iVar6 + 2);
          iVar4 = (int)uVar8 >> 5;
          if ((param_3 != 0) && (iVar3 = FUN_ram_420147ac(uVar1,param_1 + -0x10), iVar3 != 0)) {
            puVar5 = (uint *)(iVar4 * 4 + param_3);
            iVar7 = iVar7 + 1;
            *puVar5 = *puVar5 | 1 << (uVar8 & 0x1f);
          }
          if ((param_4 != 0) && (iVar3 = FUN_ram_420147ac(uVar1,param_1 + -8), iVar3 != 0)) {
            puVar5 = (uint *)(iVar4 * 4 + param_4);
            iVar7 = iVar7 + 1;
            *puVar5 = *puVar5 | 1 << (uVar8 & 0x1f);
          }
          if ((param_5 != 0) && (iVar3 = FUN_ram_420147ac(uVar1,param_1), iVar3 != 0)) {
            puVar5 = (uint *)(iVar4 * 4 + param_5);
            iVar7 = iVar7 + 1;
            *puVar5 = *puVar5 | 1 << (uVar8 & 0x1f);
          }
        }
        uVar8 = uVar8 + 1;
        iVar6 = iVar6 + 3;
      } while (uVar8 != 0x40);
    }
    param_1 = param_1 + 0x1c;
  }
  return iVar7;
}

