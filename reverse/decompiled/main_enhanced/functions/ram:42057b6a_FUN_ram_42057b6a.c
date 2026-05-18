
undefined4 FUN_ram_42057b6a(int param_1)

{
  ushort uVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  int *piVar6;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  piVar6 = *(int **)(param_1 + 0x74);
  piVar2 = piVar6;
  if (piVar6 != (int *)0x0) {
    do {
      piVar3 = (int *)*piVar2;
      iVar4 = FUN_ram_4205724c(piVar2);
      if (piVar3 == (int *)0x0) {
        if (iVar4 == 0) {
          iVar4 = piVar2[3];
          *piVar2 = *(int *)(param_1 + 0x70);
          *(int **)(param_1 + 0x70) = piVar6;
          *(undefined4 *)(param_1 + 0x74) = 0;
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x800;
          iVar4 = FUN_ram_420523b8(*(undefined4 *)(iVar4 + 4));
          uVar1 = *(ushort *)(piVar2 + 2);
          uVar5 = FUN_ram_420523aa(*(undefined2 *)(piVar2[3] + 0xc));
          *(uint *)(param_1 + 0x50) = (uint)((uVar5 & 3) != 0) + iVar4 + (uint)uVar1;
          *(undefined4 *)(param_1 + 0x38) = 0;
          return 0;
        }
        return 0xfffffffa;
      }
      piVar2 = piVar3;
    } while (iVar4 == 0);
  }
  return 0xfffffffa;
}

