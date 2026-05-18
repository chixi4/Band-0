
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420587d4(int param_1,undefined4 param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  int iVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  undefined8 uVar13;
  
  uVar13 = CONCAT44(param_2,param_1);
  if (param_1 != 0) goto LAB_ram_420587f8;
  do {
    do {
      uVar13 = FUN_ram_4039bf1e();
LAB_ram_420587f8:
      iVar11 = (int)((ulonglong)uVar13 >> 0x20);
      iVar6 = (int)uVar13;
    } while (iVar11 == 0);
    if (*(ushort *)(iVar6 + 10) < 8) goto LAB_ram_42058808;
    puVar2 = *(undefined2 **)(iVar6 + 4);
    piVar4 = (int *)0x0;
    iVar7 = FUN_ram_4205be44(_DAT_ram_3fcc26bc,_DAT_ram_3fcc26a8);
    uVar8 = FUN_ram_420523aa(*puVar2);
    uVar9 = FUN_ram_420523aa(puVar2[1]);
    piVar3 = _DAT_ram_3fcc5334;
    piVar1 = _DAT_ram_3fcc5334;
    piVar12 = (int *)0x0;
    while (piVar5 = piVar1, piVar5 != (int *)0x0) {
      if ((*(ushort *)((int)piVar5 + 0x12) == uVar9) &&
         (iVar10 = FUN_ram_42058752(piVar5,iVar11,iVar7), iVar10 != 0)) {
        if ((*(byte *)(piVar5 + 4) & 4) != 0) goto LAB_ram_420588c8;
        if (piVar4 == (int *)0x0) {
LAB_ram_420588c0:
          piVar4 = piVar5;
        }
        else if ((iVar7 == 0) || (_DAT_ram_3fcc26bc != 0xffffffff)) {
          if (*piVar5 != 0) goto LAB_ram_420588c0;
        }
        else if ((*piVar4 != *(int *)(iVar11 + 4)) && (*(int *)(iVar11 + 4) == *piVar5))
        goto LAB_ram_420588c0;
LAB_ram_420588c8:
        if ((*(ushort *)(piVar5 + 5) == uVar8) &&
           ((piVar5[1] == 0 || (piVar5[1] == _DAT_ram_3fcc26b8)))) {
          if (piVar12 != (int *)0x0) {
            _DAT_ram_3fcc5334 = piVar5;
            piVar12[3] = piVar5[3];
            piVar5[3] = (int)piVar3;
          }
          goto LAB_ram_420588f0;
        }
      }
      piVar12 = piVar5;
      piVar1 = (int *)piVar5[3];
    }
    piVar5 = piVar4;
    if ((piVar4 == (int *)0x0) && (*(uint *)(iVar11 + 4) != _DAT_ram_3fcc26bc))
    goto LAB_ram_42058808;
LAB_ram_420588f0:
    iVar10 = FUN_ram_42053a6a(iVar6,8);
  } while (iVar10 != 0);
  if (piVar5 == (int *)0x0) {
    if ((iVar7 == 0) && ((_DAT_ram_3fcc26bc & 0xf0) != 0xe0)) {
      FUN_ram_42053ab2(iVar6,(int)((_DAT_ram_3fcc26b4 + 8) * 0x10000) >> 0x10);
      FUN_ram_4205b0d4(iVar6,3);
    }
  }
  else {
    if (((*(byte *)((int)piVar5 + 9) & 4) != 0) &&
       ((piVar3 = _DAT_ram_3fcc5334, iVar7 != 0 || ((_DAT_ram_3fcc26bc & 0xf0) == 0xe0)))) {
      for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[3]) {
        if ((((piVar5 != piVar3) && (*(ushort *)((int)piVar3 + 0x12) == uVar9)) &&
            (iVar10 = FUN_ram_42058752(piVar3,iVar11,iVar7), iVar10 != 0)) &&
           ((piVar3[8] != 0 && (iVar10 = FUN_ram_4205409c(0,0x182,iVar6), iVar10 != 0)))) {
          (*(code *)piVar3[8])(piVar3[9],piVar3,iVar10,&DAT_ram_3fcc26b8,uVar8,(code *)piVar3[8]);
        }
      }
    }
    if ((code *)piVar5[8] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42058936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (*(code *)piVar5[8])(piVar5[9],piVar5,iVar6,&DAT_ram_3fcc26b8,uVar8);
      return;
    }
  }
LAB_ram_42058808:
  FUN_ram_42053ac4(iVar6);
  return;
}

