
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420412a0(undefined4 *param_1,uint param_2)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  code *pcVar9;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ushort uStack_24;
  
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (0x18 < param_2) {
    if ((*(int *)(_DAT_ram_3fcdff64 + 0x10) != 0) ||
       (iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x2b0))(), iVar3 != 0)) {
      return 0xc;
    }
    uStack_3c = *param_1;
    iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x138))();
    uVar5 = uStack_38;
    if (iVar3 == 0) {
      bVar1 = *(byte *)(param_1 + 1);
      uStack_38 = CONCAT31(uStack_38._1_3_,bVar1);
      if (bVar1 < 2) {
        if (bVar1 == 0) {
          uStack_38._2_2_ = SUB42(uVar5,2);
          uStack_38 = (uint)CONCAT21(uStack_38._2_2_,*(byte *)((int)param_1 + 5)) << 8;
          if (3 < *(byte *)((int)param_1 + 5)) {
            return 0x12;
          }
          iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x39c))((int)param_1 + 6);
          if (iVar3 != 0) {
            return 0xb;
          }
          FUN_ram_4039c11e((int)&uStack_38 + 2,(int)param_1 + 6,6);
        }
        uStack_30 = CONCAT31(uStack_30._1_3_,*(byte *)(param_1 + 3));
        if (*(byte *)(param_1 + 3) < 4) {
          uStack_2c = *(undefined4 *)((int)param_1 + 0xf);
          uStack_30 = CONCAT22(*(undefined2 *)((int)param_1 + 0xd),(undefined2)uStack_30);
          uStack_28 = CONCAT22(uStack_28._2_2_,*(undefined2 *)((int)param_1 + 0x13));
          iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x134))();
          if (iVar3 == 0) {
            uStack_24 = *(ushort *)((int)param_1 + 0x17);
            uStack_28 = CONCAT22(*(ushort *)((int)param_1 + 0x15),(undefined2)uStack_28);
            if (uStack_24 < *(ushort *)((int)param_1 + 0x15)) {
              return 0x12;
            }
            iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 400))();
            iVar3 = 7;
            if (iVar4 == 0) {
              iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x3cc))();
              if (iVar4 == 0) {
                iVar3 = 9;
              }
              else {
                (**(code **)(_DAT_ram_3fcdfecc + 0x3a0))(iVar4,&uStack_3c);
                (**(code **)(_DAT_ram_3fcdfecc + 0x3d0))(iVar4);
                iVar3 = _DAT_ram_3fcdff64;
                pcVar9 = *(code **)(_DAT_ram_3fcdfecc + 0x2e0);
                *(undefined1 *)(_DAT_ram_3fcdfee0 + 0x42) = 1;
                *(int *)(iVar3 + 0x10) = iVar4;
                iVar3 = (*pcVar9)(&uStack_3c,iVar4 + 0x19c);
                iVar2 = _DAT_ram_3fcdff64;
                if (iVar3 != 0) {
                  uVar5 = *(undefined4 *)(iVar4 + 0xec);
                  piVar7 = (int *)(_DAT_ram_3fcdff64 + 0x20);
                  *(undefined4 *)(_DAT_ram_3fcdff64 + 0x10) = 0;
                  iVar8 = *piVar7;
                  if (*piVar7 == iVar4) {
                    *(undefined4 *)(iVar2 + 0x20) = uVar5;
                  }
                  else {
                    do {
                      iVar6 = iVar8;
                      iVar8 = *(int *)(iVar6 + 0xec);
                    } while (iVar8 != iVar4);
                    *(undefined4 *)(iVar6 + 0xec) = uVar5;
                  }
                  piVar7 = *(int **)(iVar2 + 0x28);
                  *(undefined4 *)(iVar4 + 0xec) = 0;
                  *piVar7 = iVar4;
                  *(int *)(iVar2 + 0x28) = iVar4 + 0xec;
                }
                *(undefined1 *)(_DAT_ram_3fcdfee0 + 0x42) = 0;
              }
            }
          }
          return iVar3;
        }
      }
    }
  }
  return 0x12;
}

