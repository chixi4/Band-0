
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205efc8(int param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int *piVar10;
  uint *puVar11;
  uint uVar12;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  piVar1 = *(int **)(param_1 + 0x10);
  if (piVar1 == (int *)0x0) {
    return 0xffffffff;
  }
  if (*(int *)(*piVar1 + 0x18) == 0) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_4205ea48();
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  if ((*(uint *)*piVar1 & 3) == 3) {
    return 0xffffffff;
  }
  iVar2 = FUN_ram_4039c08e(1,0x6c);
  if (iVar2 == 0) {
    return 0xffffffff;
  }
  iVar3 = FUN_ram_4039c08e(1,0xc);
  if (iVar3 != 0) {
    *(int *)(iVar2 + 8) = iVar3;
    iVar4 = FUN_ram_4039c08e(1,0xc);
    if (iVar4 != 0) {
      *(int *)(iVar2 + 0xc) = iVar4;
      iVar5 = FUN_ram_4039c08e(1,0x54);
      if (iVar5 != 0) {
        *(int *)(iVar2 + 0x10) = iVar5;
        FUN_ram_4205e958(iVar2);
        if ((*(uint *)*piVar1 & 2) != 0) {
          iVar3 = FUN_ram_420977a2();
          *(int *)(iVar2 + 0x24) = iVar3;
          if (iVar3 == 0) goto LAB_ram_4205f08c;
        }
        if ((*piVar1 != 0) && (piVar1[2] != 0)) {
          FUN_ram_4039c11e(iVar2,*piVar1 + 4,6);
          puVar6 = *(undefined4 **)(iVar2 + 8);
          if (*(int *)(*piVar1 + 0xc) == 0) {
            *puVar6 = 0;
            puVar6[2] = 0;
            puVar6[1] = 0;
          }
          else {
            FUN_ram_4039c11e(puVar6,*(int *)(*piVar1 + 0xc),0xc);
          }
          FUN_ram_4039c11e(*(undefined4 *)(iVar2 + 0xc),*(undefined4 *)(iVar2 + 8),0xc);
          puVar11 = (uint *)*piVar1;
          uVar12 = *puVar11;
          uVar7 = puVar11[6];
          *(uint *)(iVar2 + 0x4c) = puVar11[5];
          uVar9 = puVar11[4];
          *(uint *)(iVar2 + 0x54) = uVar12;
          *(uint *)(iVar2 + 0x48) = uVar9;
          if (uVar7 != 0) {
            uVar8 = (*(code *)&SUB_ram_40010510)();
            *(undefined4 *)(iVar2 + 0x5c) = uVar8;
          }
          if (puVar11[7] != 0) {
            uVar8 = (*(code *)&SUB_ram_40010510)();
            *(undefined4 *)(iVar2 + 0x60) = uVar8;
          }
          if (puVar11[8] != 0) {
            *(uint *)(iVar2 + 100) = puVar11[8];
          }
          if ((uVar12 & 0x20) == 0) {
            piVar10 = (int *)piVar1[2];
            iVar3 = *piVar10;
            if (iVar3 != 0) {
              *(int *)(iVar2 + 0x14) = iVar3;
            }
            iVar3 = piVar10[1];
            if (iVar3 != 0) {
              *(int *)(iVar2 + 0x18) = iVar3;
            }
            *(undefined4 *)(iVar2 + 0x1c) = *(undefined4 *)(iVar2 + 0x10);
            piVar1 = (int *)piVar1[1];
            if (piVar1 != (int *)0x0) {
              if (*piVar1 != 0) {
                *(int *)(iVar2 + 0x28) = *piVar1;
              }
              if (piVar1[1] != 0) {
                *(int *)(iVar2 + 0x2c) = piVar1[1];
              }
              if (piVar1[2] != 0) {
                *(int *)(iVar2 + 0x30) = piVar1[2];
              }
              if (piVar1[3] != 0) {
                *(int *)(iVar2 + 0x34) = piVar1[3];
              }
              if (piVar1[4] != 0) {
                *(int *)(iVar2 + 0x38) = piVar1[4];
              }
            }
            iVar3 = _DAT_ram_3fcc5378;
            *(int *)(iVar5 + 0x1c) = iVar2;
            if (iVar3 == 0) {
              FUN_ram_420534ae(&DAT_ram_3fcc5378,0x4204f41c);
            }
            **(int **)(param_1 + 0xc) = iVar2;
            return 0;
          }
        }
LAB_ram_4205f08c:
        uStack_34 = 0;
        uStack_30 = 0;
        uStack_2c = 0;
        uStack_24 = 0;
        iStack_28 = iVar2;
        FUN_ram_4205ef3c(&uStack_34);
        return 0xffffffff;
      }
      thunk_FUN_ram_40390634(iVar4);
    }
    thunk_FUN_ram_40390634(iVar3);
  }
  thunk_FUN_ram_40390634(iVar2);
  return 0xffffffff;
}

