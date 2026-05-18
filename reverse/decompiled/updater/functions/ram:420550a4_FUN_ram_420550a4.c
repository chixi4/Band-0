
undefined4 FUN_ram_420550a4(int param_1)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = *(int **)(param_1 + 0x74);
  if (piVar2 == (int *)0x0) {
    uVar3 = 0xfffffffa;
  }
  else {
    uVar3 = 0xfffffffa;
    if (*(char *)(piVar2[1] + 0xe) == '\x01') {
      *(int *)(param_1 + 0x74) = *piVar2;
      piVar1 = (int *)(param_1 + 0x70);
      do {
        piVar6 = piVar1;
        if (*piVar6 == 0) break;
        iVar4 = FUN_ram_4205074c(*(undefined4 *)(*(int *)(*piVar6 + 0xc) + 4));
        iVar5 = FUN_ram_4205074c(*(undefined4 *)(piVar2[3] + 4));
        piVar1 = (int *)*piVar6;
      } while (iVar4 - iVar5 < 0);
      *piVar2 = *piVar6;
      *piVar6 = (int)piVar2;
      if (*piVar2 == 0) {
        *(undefined2 *)(param_1 + 0x6c) = 0;
      }
      if (*(char *)(param_1 + 0x46) != -1) {
        *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + '\x01';
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

