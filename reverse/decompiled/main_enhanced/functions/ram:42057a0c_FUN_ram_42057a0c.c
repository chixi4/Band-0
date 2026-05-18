
undefined4 FUN_ram_42057a0c(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  uint uVar6;
  
  iVar2 = param_1;
  if (((param_2 & 3) != 0) && (param_1 != 0)) {
    uVar3 = param_2 >> 1 & 1;
    uVar6 = uVar3 << 2;
    iVar2 = FUN_ram_42053b52(0x36,uVar6,0x280);
    if (iVar2 == 0) {
LAB_ram_42057a4a:
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x80;
      return 0xffffffff;
    }
    if (uVar6 <= *(ushort *)(iVar2 + 10)) {
      iVar2 = FUN_ram_4205725a(param_1,iVar2,param_2,*(undefined4 *)(param_1 + 0x60),uVar3);
      if (iVar2 == 0) goto LAB_ram_42057a4a;
      if (((*(uint *)(iVar2 + 0xc) & 3) == 0) && (*(short *)(iVar2 + 8) == 0)) {
        piVar5 = *(int **)(param_1 + 0x70);
        if (*(int **)(param_1 + 0x70) == (int *)0x0) {
          *(int *)(param_1 + 0x70) = iVar2;
        }
        else {
          do {
            piVar4 = piVar5;
            piVar5 = (int *)*piVar4;
          } while (piVar5 != (int *)0x0);
          *piVar4 = iVar2;
        }
        *(undefined2 *)(param_1 + 0x6c) = 0;
        *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
        if ((param_2 & 1) != 0) {
          *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x20;
        }
        sVar1 = FUN_ram_42053d72(*(undefined4 *)(iVar2 + 4));
        sVar1 = sVar1 + *(short *)(param_1 + 0x6a);
        *(short *)(param_1 + 0x6a) = sVar1;
        if (sVar1 == 0) {
          return 0;
        }
        iVar2 = 0;
        if (*(int *)(param_1 + 0x74) != 0) {
          return 0;
        }
        if (*(int *)(param_1 + 0x70) != 0) {
          return 0;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e(iVar2);
}

