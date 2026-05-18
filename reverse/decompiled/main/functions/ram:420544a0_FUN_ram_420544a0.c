
short FUN_ram_420544a0(void)

{
  short sVar1;
  short sVar2;
  int iVar3;
  undefined4 *puVar4;
  short sVar5;
  
  sVar5 = *(short *)(gp + -0x750);
  sVar1 = 0x4000;
LAB_ram_420544ae:
  sVar5 = sVar5 + 1;
  if (sVar5 == -1) {
    sVar5 = -0x4000;
  }
  puVar4 = &DAT_ram_3c0f7548;
  do {
    for (iVar3 = *(int *)*puVar4; iVar3 != 0; iVar3 = *(int *)(iVar3 + 0xc)) {
      if (*(short *)(iVar3 + 0x1a) == sVar5) {
        sVar1 = sVar1 + -1;
        sVar2 = 0;
        if (sVar1 != 0) goto LAB_ram_420544ae;
        goto LAB_ram_420544e2;
      }
    }
    puVar4 = puVar4 + 1;
    sVar2 = sVar5;
  } while (puVar4 != (undefined4 *)&UNK_ram_3c0f7558);
LAB_ram_420544e2:
  *(short *)(gp + -0x750) = sVar5;
  return sVar2;
}

