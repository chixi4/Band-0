
int FUN_ram_42053364(int param_1,undefined4 param_2)

{
  bool bVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int iVar6;
  int *piVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_4205337a;
  while( true ) {
    do {
      uVar8 = FUN_ram_4039bf1e();
LAB_ram_4205337a:
      iVar6 = (int)((ulonglong)uVar8 >> 0x20);
      iVar3 = (int)uVar8;
    } while (iVar6 == 0);
    piVar4 = (int *)FUN_ram_42053b52(0xe,*(undefined2 *)(iVar6 + 8),0x280);
    if (piVar4 == (int *)0x0) {
      return -1;
    }
    iVar5 = FUN_ram_42053d72();
    iVar5 = iVar5 + (uint)*(ushort *)(iVar3 + 0x50);
    if (8 < iVar5) {
      FUN_ram_42053ac4(piVar4);
      return -1;
    }
    *(short *)(iVar3 + 0x50) = (short)iVar5;
    iVar6 = FUN_ram_42053f12(piVar4,iVar6);
    piVar2 = piVar4;
    if (iVar6 != 0) {
      FUN_ram_42053ac4(piVar4);
      return iVar6;
    }
    do {
      piVar7 = piVar2;
      piVar2 = (int *)*piVar7;
    } while ((int *)*piVar7 != (int *)0x0);
    FUN_ram_4205c96c();
    if (*(int *)(iVar3 + 0x48) == 0) break;
    if (*(int **)(iVar3 + 0x4c) != (int *)0x0) {
      **(int **)(iVar3 + 0x4c) = (int)piVar4;
      *(int **)(iVar3 + 0x4c) = piVar7;
      bVar1 = false;
      if (*(char *)(iVar3 + 0x52) != '\0') {
        *(undefined1 *)(iVar3 + 0x52) = 0;
LAB_ram_420533f2:
        bVar1 = true;
      }
      FUN_ram_4205c996();
      if ((bVar1) && (iVar6 = FUN_ram_42051ea6(0x420432d0,iVar3), iVar6 != 0)) {
        FUN_ram_4205c96c();
        *(undefined1 *)(iVar3 + 0x52) = 1;
        FUN_ram_4205c996();
      }
      return 0;
    }
  }
  *(int **)(iVar3 + 0x48) = piVar4;
  *(int **)(iVar3 + 0x4c) = piVar7;
  goto LAB_ram_420533f2;
}

