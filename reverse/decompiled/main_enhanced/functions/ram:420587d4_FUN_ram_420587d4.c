
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420587d4(int param_1,int param_2)

{
  int *piVar1;
  undefined2 *puVar2;
  int *piVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  int *piVar10;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    if (7 < *(ushort *)(param_1 + 10)) {
      puVar2 = *(undefined2 **)(param_1 + 4);
      piVar4 = (int *)0x0;
      iVar6 = FUN_ram_4205be44(_DAT_ram_3fcc26bc,_DAT_ram_3fcc26a8);
      uVar7 = FUN_ram_420523aa(*puVar2);
      uVar8 = FUN_ram_420523aa(puVar2[1]);
      piVar3 = _DAT_ram_3fcc5334;
      piVar1 = _DAT_ram_3fcc5334;
      piVar10 = (int *)0x0;
      while (piVar5 = piVar1, piVar5 != (int *)0x0) {
        if ((*(ushort *)((int)piVar5 + 0x12) == uVar8) &&
           (iVar9 = FUN_ram_42058752(piVar5,param_2,iVar6), iVar9 != 0)) {
          if ((*(byte *)(piVar5 + 4) & 4) != 0) goto LAB_ram_420588c8;
          if (piVar4 == (int *)0x0) {
LAB_ram_420588c0:
            piVar4 = piVar5;
          }
          else if ((iVar6 == 0) || (_DAT_ram_3fcc26bc != 0xffffffff)) {
            if (*piVar5 != 0) goto LAB_ram_420588c0;
          }
          else if ((*piVar4 != *(int *)(param_2 + 4)) && (*(int *)(param_2 + 4) == *piVar5))
          goto LAB_ram_420588c0;
LAB_ram_420588c8:
          if ((*(ushort *)(piVar5 + 5) == uVar7) &&
             ((piVar5[1] == 0 || (piVar5[1] == _DAT_ram_3fcc26b8)))) {
            if (piVar10 != (int *)0x0) {
              _DAT_ram_3fcc5334 = piVar5;
              piVar10[3] = piVar5[3];
              piVar5[3] = (int)piVar3;
            }
            goto LAB_ram_420588f0;
          }
        }
        piVar10 = piVar5;
        piVar1 = (int *)piVar5[3];
      }
      piVar5 = piVar4;
      if ((piVar4 != (int *)0x0) || (*(uint *)(param_2 + 4) == _DAT_ram_3fcc26bc)) {
LAB_ram_420588f0:
        iVar9 = FUN_ram_42053a6a(param_1,8);
        if (iVar9 != 0) goto LAB_ram_420587f0;
        if (piVar5 == (int *)0x0) {
          if ((iVar6 == 0) && ((_DAT_ram_3fcc26bc & 0xf0) != 0xe0)) {
            FUN_ram_42053ab2(param_1,(int)((_DAT_ram_3fcc26b4 + 8) * 0x10000) >> 0x10);
            FUN_ram_4205b0d4(param_1,3);
          }
        }
        else {
          if (((*(byte *)((int)piVar5 + 9) & 4) != 0) &&
             ((piVar3 = _DAT_ram_3fcc5334, iVar6 != 0 || ((_DAT_ram_3fcc26bc & 0xf0) == 0xe0)))) {
            for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[3]) {
              if ((((piVar5 != piVar3) && (*(ushort *)((int)piVar3 + 0x12) == uVar8)) &&
                  (iVar9 = FUN_ram_42058752(piVar3,param_2,iVar6), iVar9 != 0)) &&
                 ((piVar3[8] != 0 && (iVar9 = FUN_ram_4205409c(0,0x182,param_1), iVar9 != 0)))) {
                (*(code *)piVar3[8])
                          (piVar3[9],piVar3,iVar9,&DAT_ram_3fcc26b8,uVar7,(code *)piVar3[8]);
              }
            }
          }
          if ((code *)piVar5[8] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42058936. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)piVar5[8])(piVar5[9],piVar5,param_1,&DAT_ram_3fcc26b8,uVar7);
            return;
          }
        }
      }
    }
    FUN_ram_42053ac4(param_1);
    return;
  }
LAB_ram_420587f0:
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

