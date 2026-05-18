
int FUN_ram_42015720(void)

{
  int iVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int aiStack_14 [4];
  
  iVar1 = FUN_ram_420155d4(aiStack_14);
  if ((iVar1 == 0) && (0x95 < aiStack_14[0])) {
    aiStack_14[0] = aiStack_14[0] * 2;
    if (aiStack_14[0] < 0x1068) {
      iVar1 = 0;
      if (3000 < aiStack_14[0]) {
        pcVar2 = "onger.";
        iVar3 = 0x1068;
        iVar5 = 0;
        do {
          iVar4 = *(int *)(pcVar2 + 8);
          iVar6 = iVar5 + 1;
          if (iVar4 <= aiStack_14[0]) {
            return ((*(int *)("Choose the path that lasts longer." + iVar5 * 8 + 0x20) -
                    *(int *)("Choose the path that lasts longer." + iVar6 * 8 + 0x20)) *
                   (aiStack_14[0] - iVar4)) / (iVar3 - iVar4) +
                   *(int *)("Choose the path that lasts longer." + iVar6 * 8 + 0x20);
          }
          pcVar2 = pcVar2 + 8;
          iVar3 = iVar4;
          iVar5 = iVar6;
        } while (iVar6 != 0xb);
      }
    }
    else {
      iVar1 = 100;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

