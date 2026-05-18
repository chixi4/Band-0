
void FUN_ram_42054c00(undefined4 param_1,int param_2)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_2 != 0) goto LAB_ram_42054c12;
  do {
    do {
      uVar5 = FUN_ram_4039bf1e();
LAB_ram_42054c12:
      iVar3 = (int)((ulonglong)uVar5 >> 0x20);
      piVar2 = (int *)uVar5;
    } while (piVar2 == (int *)0x0);
    iVar1 = *piVar2;
    if (*piVar2 == iVar3) {
      *piVar2 = *(int *)(iVar3 + 0xc);
    }
    else {
      do {
        iVar4 = iVar1;
        if (iVar4 == 0) goto LAB_ram_42054c20;
        iVar1 = *(int *)(iVar4 + 0xc);
      } while (*(int *)(iVar4 + 0xc) != iVar3);
      *(undefined4 *)(iVar4 + 0xc) = *(undefined4 *)(iVar3 + 0xc);
    }
LAB_ram_42054c20:
    *(undefined4 *)(iVar3 + 0xc) = 0;
    FUN_ram_42054ba6(iVar3);
    if (*(int *)(iVar3 + 0x14) != 10) {
      if (*(int *)(iVar3 + 0x14) == 1) break;
      if ((*(ushort *)(iVar3 + 0x1e) & 1) != 0) {
        *(ushort *)(iVar3 + 0x1e) = *(ushort *)(iVar3 + 0x1e) | 2;
        FUN_ram_42057e96(iVar3);
        if (*(int *)(iVar3 + 0x14) == 1) break;
      }
    }
  } while (((*(int *)(iVar3 + 0x70) != 0) || (*(int *)(iVar3 + 0x74) != 0)) ||
          (*(int *)(iVar3 + 0x78) != 0));
  *(undefined4 *)(iVar3 + 0x14) = 0;
  *(undefined2 *)(iVar3 + 0x1a) = 0;
  return;
}

