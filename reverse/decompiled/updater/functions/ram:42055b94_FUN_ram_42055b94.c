
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42055b94(int param_1,int param_2)

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
  int iVar10;
  int *piVar11;
  
  if (7 < *(ushort *)(param_1 + 10)) {
    puVar2 = *(undefined2 **)(param_1 + 4);
    iVar6 = FUN_ram_42059006(_DAT_ram_3fcb5e68,_DAT_ram_3fcb5e54);
    uVar7 = FUN_ram_4205073e(*puVar2);
    uVar8 = FUN_ram_4205073e(puVar2[1]);
    piVar3 = _DAT_ram_3fcb6804;
    iVar10 = _DAT_ram_3fcb5e64;
    piVar4 = (int *)0x0;
    piVar1 = _DAT_ram_3fcb6804;
    piVar11 = (int *)0x0;
    while (piVar5 = piVar1, piVar5 != (int *)0x0) {
      if ((*(ushort *)((int)piVar5 + 0x12) == uVar8) &&
         (iVar9 = FUN_ram_42055b1c(piVar5,param_2,iVar6), iVar9 != 0)) {
        if ((*(byte *)(piVar5 + 4) & 4) != 0) goto LAB_ram_42055c84;
        if (piVar4 == (int *)0x0) {
LAB_ram_42055c7c:
          piVar4 = piVar5;
        }
        else if ((iVar6 == 0) || (_DAT_ram_3fcb5e68 != 0xffffffff)) {
          if (*piVar5 != 0) goto LAB_ram_42055c7c;
        }
        else if ((*piVar4 != *(int *)(param_2 + 4)) && (*(int *)(param_2 + 4) == *piVar5))
        goto LAB_ram_42055c7c;
LAB_ram_42055c84:
        if ((*(ushort *)(piVar5 + 5) == uVar7) && ((piVar5[1] == 0 || (piVar5[1] == iVar10)))) {
          if (piVar11 != (int *)0x0) {
            _DAT_ram_3fcb6804 = piVar5;
            piVar11[3] = piVar5[3];
            piVar5[3] = (int)piVar3;
          }
          goto LAB_ram_42055ca8;
        }
      }
      piVar11 = piVar5;
      piVar1 = (int *)piVar5[3];
    }
    piVar5 = piVar4;
    if ((piVar4 != (int *)0x0) || (*(uint *)(param_2 + 4) == _DAT_ram_3fcb5e68)) {
LAB_ram_42055ca8:
      iVar10 = FUN_ram_42051cb2(param_1,8);
      if (iVar10 == 0) {
        if (piVar5 == (int *)0x0) {
          if ((iVar6 == 0) && ((_DAT_ram_3fcb5e68 & 0xf0) != 0xe0)) {
            FUN_ram_42051cf0(param_1,(int)((_DAT_ram_3fcb5e60 + 8) * 0x10000) >> 0x10);
            FUN_ram_420582f2(param_1,3);
          }
        }
        else {
          if (((*(byte *)((int)piVar5 + 9) & 4) != 0) &&
             ((piVar3 = _DAT_ram_3fcb6804, iVar6 != 0 || ((_DAT_ram_3fcb5e68 & 0xf0) == 0xe0)))) {
            for (; piVar3 != (int *)0x0; piVar3 = (int *)piVar3[3]) {
              if ((((piVar5 != piVar3) && (*(ushort *)((int)piVar3 + 0x12) == uVar8)) &&
                  (iVar10 = FUN_ram_42055b1c(piVar3,param_2,iVar6), iVar10 != 0)) &&
                 ((piVar3[8] != 0 && (iVar10 = FUN_ram_42052212(0,0x182,param_1), iVar10 != 0)))) {
                (*(code *)piVar3[8])
                          (piVar3[9],piVar3,iVar10,&DAT_ram_3fcb5e64,uVar7,(code *)piVar3[8]);
              }
            }
          }
          if ((code *)piVar5[8] != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x42055cf0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
            (*(code *)piVar5[8])(piVar5[9],piVar5,param_1,&DAT_ram_3fcb5e64,uVar7);
            return;
          }
        }
      }
    }
  }
  FUN_ram_42051d02(param_1);
  return;
}

