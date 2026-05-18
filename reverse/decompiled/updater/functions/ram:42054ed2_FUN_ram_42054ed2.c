
undefined4 FUN_ram_42054ed2(int param_1,uint param_2)

{
  short sVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  int *piVar5;
  int *piVar6;
  
  uVar4 = param_2 >> 1 & 1;
  iVar2 = FUN_ram_42051d86(0x36,uVar4 << 2,0x280);
  if ((iVar2 == 0) ||
     (iVar2 = FUN_ram_420547d2(param_1,iVar2,param_2,*(undefined4 *)(param_1 + 0x60),uVar4),
     iVar2 == 0)) {
    uVar3 = 0xffffffff;
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x80;
  }
  else {
    piVar6 = *(int **)(param_1 + 0x70);
    if (*(int **)(param_1 + 0x70) == (int *)0x0) {
      *(int *)(param_1 + 0x70) = iVar2;
    }
    else {
      do {
        piVar5 = piVar6;
        piVar6 = (int *)*piVar5;
      } while (piVar6 != (int *)0x0);
      *piVar5 = iVar2;
    }
    *(undefined2 *)(param_1 + 0x6c) = 0;
    if ((param_2 & 3) != 0) {
      *(int *)(param_1 + 0x60) = *(int *)(param_1 + 0x60) + 1;
      if ((param_2 & 1) != 0) {
        *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x20;
      }
    }
    sVar1 = FUN_ram_42051f4e(*(undefined4 *)(iVar2 + 4));
    *(short *)(param_1 + 0x6a) = sVar1 + *(short *)(param_1 + 0x6a);
    uVar3 = 0;
  }
  return uVar3;
}

