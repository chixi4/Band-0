
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420414a0(byte *param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  byte bVar7;
  code *pcVar8;
  int iVar9;
  uint uVar10;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  ushort uStack_24;
  
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_50 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_3c = 0;
  uStack_38 = 0;
  uStack_34 = 0;
  uStack_30 = 0;
  uStack_2c = 0;
  uStack_28 = 0;
  uStack_24 = 0;
  if (9 < param_2) {
    if ((*(int *)(_DAT_ram_3fcdff64 + 0x10) != 0) ||
       (iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x2b0))(), uVar4 = uStack_5c, iVar1 != 0)) {
      return 0xc;
    }
    bVar7 = *param_1;
    if (bVar7 < 2) {
      uStack_5c._0_2_ = CONCAT11(param_1[1],bVar7);
      if (param_1[1] < 4) {
        if (bVar7 == 0) {
          uStack_5c._3_1_ = SUB41(uVar4,3);
          uStack_5c._0_3_ = CONCAT12(param_1[2],(undefined2)uStack_5c);
          if (3 < param_1[2]) {
            return 0x12;
          }
          iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x39c))(param_1 + 3);
          if (iVar1 != 0) {
            return 0xb;
          }
          FUN_ram_4039c11e((int)&uStack_5c + 3,param_1 + 3,6);
        }
        bVar7 = param_1[9];
        uStack_54._0_2_ = CONCAT11(bVar7,(undefined1)uStack_54);
        if (((bVar7 & 0xf8) == 0) && ((bVar7 & 5) != 0)) {
          uVar10 = param_2 - 10 & 0xff;
          if ((bVar7 & 1) == 0) {
            param_1 = param_1 + 10;
            iVar1 = 0;
          }
          else {
            if (uVar10 < 0x10) {
              return 0x12;
            }
            uStack_54 = CONCAT22(*(undefined2 *)(param_1 + 10),(undefined2)uStack_54);
            uStack_50 = CONCAT22(uStack_50._2_2_,*(undefined2 *)(param_1 + 0xc));
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x138))();
            if (iVar1 != 0) {
              return iVar1;
            }
            uStack_4c = *(undefined4 *)(param_1 + 0x10);
            uStack_50 = CONCAT22(*(undefined2 *)(param_1 + 0xe),(undefined2)uStack_50);
            uStack_48 = CONCAT22(uStack_48._2_2_,*(undefined2 *)(param_1 + 0x14));
            iVar1 = (**(code **)(_DAT_ram_3fcdfecc + 0x134))();
            if (iVar1 != 0) {
              return iVar1;
            }
            uStack_48 = CONCAT22(*(ushort *)(param_1 + 0x16),(undefined2)uStack_48);
            uStack_44 = CONCAT22(uStack_44._2_2_,*(ushort *)(param_1 + 0x18));
            if (*(ushort *)(param_1 + 0x18) < *(ushort *)(param_1 + 0x16)) {
              return 0x12;
            }
            uVar10 = param_2 - 0x1a & 0xff;
            param_1 = param_1 + 0x1a;
            iVar1 = (int)&uStack_54 + 2;
            bVar7 = uStack_54._1_1_;
          }
          if ((bVar7 & 2) != 0) {
            if (uVar10 < 0x10) {
              return 0x12;
            }
            uStack_3c = *(undefined4 *)(param_1 + 6);
            uStack_40 = CONCAT22(*(undefined2 *)(param_1 + 4),(undefined2)uStack_40);
            uStack_38 = CONCAT22(uStack_38._2_2_,*(undefined2 *)(param_1 + 10));
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x134))();
            if (iVar2 != 0) {
              return iVar2;
            }
            uStack_38 = CONCAT22(*(ushort *)(param_1 + 0xc),(undefined2)uStack_38);
            uStack_34 = CONCAT22(uStack_34._2_2_,*(ushort *)(param_1 + 0xe));
            if (*(ushort *)(param_1 + 0xe) < *(ushort *)(param_1 + 0xc)) {
              return 0x12;
            }
            uVar10 = uVar10 - 0x10 & 0xff;
            param_1 = param_1 + 0x10;
            bVar7 = uStack_54._1_1_;
          }
          if ((bVar7 & 4) == 0) {
LAB_ram_420416c0:
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 400))();
            if (iVar2 != 0) {
              return 7;
            }
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x3cc))();
            if (iVar2 == 0) {
              return 9;
            }
            (**(code **)(_DAT_ram_3fcdfecc + 300))(&uStack_5c,iVar1);
            (**(code **)(_DAT_ram_3fcdfecc + 0x380))(iVar2,&uStack_5c);
            (**(code **)(_DAT_ram_3fcdfecc + 0x3d0))(iVar2);
            iVar1 = _DAT_ram_3fcdff64;
            pcVar8 = *(code **)(_DAT_ram_3fcdfecc + 0x2b8);
            *(undefined1 *)(_DAT_ram_3fcdfee0 + 0x42) = 1;
            *(int *)(iVar1 + 0x10) = iVar2;
            iVar3 = (*pcVar8)(&uStack_5c,iVar2 + 0x19c);
            iVar1 = _DAT_ram_3fcdff64;
            if (iVar3 != 0) {
              uVar4 = *(undefined4 *)(iVar2 + 0xec);
              piVar6 = (int *)(_DAT_ram_3fcdff64 + 0x20);
              *(undefined4 *)(_DAT_ram_3fcdff64 + 0x10) = 0;
              iVar9 = *piVar6;
              if (*piVar6 == iVar2) {
                *(undefined4 *)(iVar1 + 0x20) = uVar4;
              }
              else {
                do {
                  iVar5 = iVar9;
                  iVar9 = *(int *)(iVar5 + 0xec);
                } while (iVar9 != iVar2);
                *(undefined4 *)(iVar5 + 0xec) = uVar4;
              }
              piVar6 = *(int **)(iVar1 + 0x28);
              *(undefined4 *)(iVar2 + 0xec) = 0;
              *piVar6 = iVar2;
              *(int *)(iVar1 + 0x28) = iVar2 + 0xec;
            }
            (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x600f,iVar3);
            *(undefined1 *)(_DAT_ram_3fcdfee0 + 0x42) = 0;
            return iVar3;
          }
          if (0xf < uVar10) {
            uStack_34 = CONCAT22(*(undefined2 *)param_1,(undefined2)uStack_34);
            uStack_30 = CONCAT22(uStack_30._2_2_,*(undefined2 *)(param_1 + 2));
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x138))();
            if (iVar2 != 0) {
              return iVar2;
            }
            uStack_2c = *(undefined4 *)(param_1 + 6);
            uStack_30 = CONCAT22(*(undefined2 *)(param_1 + 4),(undefined2)uStack_30);
            uStack_28 = CONCAT22(uStack_28._2_2_,*(undefined2 *)(param_1 + 10));
            iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x134))();
            if (iVar2 != 0) {
              return iVar2;
            }
            uStack_24 = *(ushort *)(param_1 + 0xe);
            uStack_28 = CONCAT22(*(ushort *)(param_1 + 0xc),(undefined2)uStack_28);
            if (*(ushort *)(param_1 + 0xc) <= uStack_24) {
              if (iVar1 == 0) {
                iVar1 = (int)&uStack_34 + 2;
              }
              goto LAB_ram_420416c0;
            }
          }
        }
      }
    }
  }
  return 0x12;
}

