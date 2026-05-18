
int FUN_ram_420a9ca6(int param_1,undefined4 *param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  uint extraout_a2;
  char *pcVar6;
  undefined8 uVar7;
  undefined4 uStack_28;
  int *piStack_24;
  
  iVar2 = FUN_ram_420a8740(param_2);
  if ((iVar2 == 1) || (iVar2 == 6)) {
    uVar3 = FUN_ram_420a8732(param_2);
    bVar1 = uVar3 < *(uint *)(param_1 + 0xc);
LAB_ram_420a9cd6:
    iVar2 = -(uint)bVar1;
  }
  else {
    if (iVar2 - 2U < 3) {
      uStack_28 = *param_2;
      piStack_24 = (int *)param_2[1];
      uVar7 = FUN_ram_420a8740(&uStack_28);
      iVar5 = (int)((ulonglong)uVar7 >> 0x20);
      iVar2 = (int)uVar7;
      if (2 < iVar2 - 2U) {
        ebreak();
        uVar3 = *(uint *)(iVar2 + 2);
        if ((uVar3 == extraout_a2) &&
           (iVar4 = FUN_ram_420a9bb6(iVar5,*(undefined4 *)(iVar2 + 6)), iVar4 == 0)) {
          return 0;
        }
        iVar4 = (*(code *)&SUB_ram_400104a8)(iVar5);
        if (((2 < uVar3) && (pcVar6 = *(char **)(iVar2 + 6), *pcVar6 == '*')) && (pcVar6[1] == '.'))
        {
          for (iVar2 = 0; iVar4 != iVar2; iVar2 = iVar2 + 1) {
            if (*(char *)(iVar5 + iVar2) == '.') {
              if (iVar2 == 0) {
                return -1;
              }
              if (iVar4 - iVar2 != uVar3 - 1) {
                return -1;
              }
              iVar2 = FUN_ram_420a9bb6(pcVar6 + 1);
              return -(uint)(iVar2 != 0);
            }
          }
        }
        return -1;
      }
      if (*piStack_24 != 0) {
        bVar1 = (1 << (*piStack_24 - 1U & 0x1f) & *(uint *)(param_1 + 8)) == 0;
        goto LAB_ram_420a9cd6;
      }
    }
    iVar2 = -1;
  }
  return iVar2;
}

