
undefined4 FUN_ram_42057c28(int param_1)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  
  if (param_1 == 0) {
    param_1 = FUN_ram_4039bf1e();
  }
  piVar2 = *(int **)(param_1 + 0x74);
  uVar5 = 0xfffffffa;
  if (piVar2 != (int *)0x0) {
    iVar3 = FUN_ram_4205724c(piVar2);
    uVar5 = 0xfffffffa;
    if (iVar3 == 0) {
      *(int *)(param_1 + 0x74) = *piVar2;
      piVar1 = (int *)(param_1 + 0x70);
      do {
        piVar6 = piVar1;
        if (*piVar6 == 0) break;
        iVar3 = FUN_ram_420523b8(*(undefined4 *)(*(int *)(*piVar6 + 0xc) + 4));
        iVar4 = FUN_ram_420523b8(*(undefined4 *)(piVar2[3] + 4));
        piVar1 = (int *)*piVar6;
      } while (iVar3 - iVar4 < 0);
      *piVar2 = *piVar6;
      *piVar6 = (int)piVar2;
      if (*piVar2 == 0) {
        *(undefined2 *)(param_1 + 0x6c) = 0;
      }
      if (*(char *)(param_1 + 0x46) != -1) {
        *(char *)(param_1 + 0x46) = *(char *)(param_1 + 0x46) + '\x01';
      }
      *(undefined4 *)(param_1 + 0x38) = 0;
      uVar5 = 0;
    }
  }
  return uVar5;
}

