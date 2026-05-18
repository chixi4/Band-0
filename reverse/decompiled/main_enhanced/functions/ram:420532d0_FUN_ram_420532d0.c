
void FUN_ram_420532d0(int param_1)

{
  int *piVar1;
  int iVar2;
  ushort uVar3;
  int *piVar4;
  
  if (param_1 != 0) {
    while( true ) {
      FUN_ram_4205c96c();
      piVar1 = *(int **)(param_1 + 0x48);
      if (piVar1 == (int *)0x0) {
        FUN_ram_4205c996();
        return;
      }
      uVar3 = 1;
      piVar4 = piVar1;
      while (*(short *)((int)piVar4 + 10) != (short)piVar4[2]) {
        piVar4 = (int *)*piVar4;
        if (piVar4 == (int *)0x0) goto LAB_ram_420532dc;
        uVar3 = uVar3 + 1 & 0xff;
      }
      if (uVar3 == 0) break;
      *(ushort *)(param_1 + 0x50) = *(short *)(param_1 + 0x50) - uVar3;
      if (*(int **)(param_1 + 0x4c) == piVar4) {
        *(undefined4 *)(param_1 + 0x4c) = 0;
        *(undefined4 *)(param_1 + 0x48) = 0;
      }
      else {
        iVar2 = *piVar4;
        *(int *)(param_1 + 0x48) = iVar2;
        if (iVar2 == 0) break;
      }
      *piVar4 = 0;
      FUN_ram_4205c996();
      *(char *)((int)piVar1 + 0xf) = *(char *)(param_1 + 0x3c) + '\x01';
      iVar2 = FUN_ram_4205b928(piVar1,param_1);
      if (iVar2 != 0) {
        FUN_ram_42053ac4(piVar1);
      }
    }
  }
LAB_ram_420532dc:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

