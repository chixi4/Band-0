
undefined4 FUN_ram_420654e6(int param_1)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  undefined4 uVar4;
  char *pcVar5;
  short sVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar9 = *(int *)(iVar1 + 0x28);
  puVar2 = *(undefined4 **)(iVar9 + 0x310);
  if (*(int *)(iVar1 + 0x2c) == 1) {
    iVar3 = FUN_ram_420652cc();
    if (iVar3 != 0) goto LAB_ram_4206550c;
LAB_ram_42065550:
    iVar3 = *(int *)(param_1 + 8);
    if (iVar3 == -1) {
      iVar3 = 0;
    }
    iVar7 = *(int *)(param_1 + 0x14);
    *(int *)(iVar9 + 0x30c) = iVar3;
    if (-1 < iVar7) {
      uVar4 = *puVar2;
      *(undefined4 *)(iVar1 + 0x2c) = 4;
      puVar2[6] = iVar3;
      FUN_ram_42064d46(3,uVar4);
      return 0;
    }
LAB_ram_42065598:
    *(undefined4 *)(iVar1 + 0x30) = 3;
  }
  else {
    if (*(int *)(iVar1 + 0x2c) == 3) {
      pcVar8 = (char *)(*(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x38));
      iVar3 = *(int *)(iVar1 + 0x44) - ((int)pcVar8 - puVar2[1]);
      if (1 < iVar3) {
        pcVar5 = pcVar8 + iVar3;
        sVar6 = 2;
        for (; pcVar8 != pcVar5; pcVar8 = pcVar8 + 1) {
          if (sVar6 == 0) goto LAB_ram_42065548;
          if (*pcVar8 == '\n') {
            sVar6 = sVar6 + -1;
          }
          *pcVar8 = '\0';
        }
        if (sVar6 == 0) {
LAB_ram_42065548:
          *(char **)(iVar1 + 0x34) = pcVar8;
          puVar2[10] = puVar2[10] + 1;
          goto LAB_ram_42065550;
        }
        goto LAB_ram_42065598;
      }
    }
    *(undefined4 *)(iVar1 + 0x30) = 0;
  }
LAB_ram_4206550c:
  *(undefined4 *)(iVar1 + 0x2c) = 6;
  return 0xffffffff;
}

