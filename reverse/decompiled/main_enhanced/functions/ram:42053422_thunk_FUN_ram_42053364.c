
int thunk_FUN_ram_42053364(int param_1,int param_2)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  if ((param_1 == 0) || (param_2 == 0)) {
LAB_ram_42053372:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  piVar3 = (int *)FUN_ram_42053b52(0xe,*(undefined2 *)(param_2 + 8),0x280);
  if (piVar3 == (int *)0x0) {
    return -1;
  }
  iVar4 = FUN_ram_42053d72();
  iVar4 = iVar4 + (uint)*(ushort *)(param_1 + 0x50);
  if (8 < iVar4) {
    FUN_ram_42053ac4(piVar3);
    return -1;
  }
  *(short *)(param_1 + 0x50) = (short)iVar4;
  iVar4 = FUN_ram_42053f12(piVar3,param_2);
  piVar2 = piVar3;
  if (iVar4 != 0) {
    FUN_ram_42053ac4(piVar3);
    return iVar4;
  }
  do {
    piVar5 = piVar2;
    piVar2 = (int *)*piVar5;
  } while ((int *)*piVar5 != (int *)0x0);
  FUN_ram_4205c96c();
  if (*(int *)(param_1 + 0x48) == 0) {
    *(int **)(param_1 + 0x48) = piVar3;
    *(int **)(param_1 + 0x4c) = piVar5;
  }
  else {
    if (*(int **)(param_1 + 0x4c) == (int *)0x0) goto LAB_ram_42053372;
    **(int **)(param_1 + 0x4c) = (int)piVar3;
    *(int **)(param_1 + 0x4c) = piVar5;
    bVar1 = false;
    if (*(char *)(param_1 + 0x52) == '\0') goto LAB_ram_420533f4;
    *(undefined1 *)(param_1 + 0x52) = 0;
  }
  bVar1 = true;
LAB_ram_420533f4:
  FUN_ram_4205c996();
  if (!bVar1) {
    return 0;
  }
  iVar4 = FUN_ram_42051ea6(0x420432d0,param_1);
  if (iVar4 != 0) {
    FUN_ram_4205c96c();
    *(undefined1 *)(param_1 + 0x52) = 1;
    FUN_ram_4205c996();
    return 0;
  }
  return 0;
}

