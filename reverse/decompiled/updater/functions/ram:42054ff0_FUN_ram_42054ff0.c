
undefined4 FUN_ram_42054ff0(int param_1)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  piVar5 = *(int **)(param_1 + 0x74);
  piVar6 = piVar5;
  if (piVar5 == (int *)0x0) {
    return 0xfffffffa;
  }
  do {
    piVar2 = piVar6 + 1;
    if ((int *)*piVar6 == (int *)0x0) {
      if (*(char *)(*piVar2 + 0xe) != '\x01') {
        return 0xfffffffa;
      }
      iVar4 = piVar6[3];
      *piVar6 = *(int *)(param_1 + 0x70);
      *(int **)(param_1 + 0x70) = piVar5;
      *(undefined4 *)(param_1 + 0x74) = 0;
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x800;
      iVar4 = FUN_ram_4205074c(*(undefined4 *)(iVar4 + 4));
      uVar1 = *(ushort *)(piVar6 + 2);
      uVar3 = FUN_ram_4205073e(*(undefined2 *)(piVar6[3] + 0xc));
      *(uint *)(param_1 + 0x50) = (uint)((uVar3 & 3) != 0) + iVar4 + (uint)uVar1;
      *(undefined4 *)(param_1 + 0x38) = 0;
      return 0;
    }
    piVar6 = (int *)*piVar6;
  } while (*(char *)(*piVar2 + 0xe) == '\x01');
  return 0xfffffffa;
}

