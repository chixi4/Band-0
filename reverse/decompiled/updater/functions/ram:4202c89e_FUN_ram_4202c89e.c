
int FUN_ram_4202c89e(int param_1,int param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  undefined4 auStack_90 [2];
  undefined1 auStack_88 [8];
  undefined1 auStack_80 [8];
  undefined1 auStack_78 [8];
  undefined1 auStack_70 [8];
  undefined1 auStack_68 [8];
  undefined1 auStack_60 [8];
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined4 auStack_40 [2];
  undefined4 auStack_38 [4];
  
  if ((param_2 == 0) || (iVar1 = FUN_ram_4202c20a(param_1,1), iVar1 != 0)) {
    iVar1 = -0x4080;
  }
  else {
    FUN_ram_4202476a(auStack_90);
    FUN_ram_4202476a(auStack_88);
    FUN_ram_4202476a(auStack_80);
    FUN_ram_4202476a(auStack_78);
    FUN_ram_4202476a(auStack_60);
    FUN_ram_4202476a(auStack_58);
    FUN_ram_4202476a(auStack_70);
    FUN_ram_4202476a(auStack_68);
    FUN_ram_4202476a(auStack_50);
    FUN_ram_4202476a(auStack_48);
    iVar1 = FUN_ram_42024c0c(auStack_90,param_4,*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      iVar4 = param_1 + 8;
      iVar2 = FUN_ram_42024d4a(auStack_90,iVar4);
      iVar1 = -4;
      if (iVar2 < 0) {
        FUN_ram_4202476a(auStack_38);
        if (*(int *)(param_1 + 0x68) == 0) {
          FUN_ram_42024a98(auStack_38,0);
          iVar2 = 0xb;
          iVar6 = param_1 + 0x60;
          do {
            iVar1 = FUN_ram_42025e02(param_1 + 0x68,1,iVar4,param_2,param_3);
            if ((iVar1 != 0) ||
               (iVar1 = FUN_ram_4202595e(auStack_38,iVar6,param_1 + 0x68,iVar4), iVar1 != 0))
            goto LAB_ram_4202c990;
            iVar1 = FUN_ram_42024dea(auStack_38,1);
            if (iVar1 == 0) {
              iVar1 = FUN_ram_42025944(iVar6,iVar6,param_1 + 0x10,iVar4,param_1 + 0x48);
              goto LAB_ram_4202c990;
            }
            iVar2 = iVar2 + -1;
          } while (iVar2 != 0);
          iVar1 = -0x4480;
        }
        else {
          iVar2 = param_1 + 0x60;
          iVar1 = FUN_ram_42025088(iVar2,iVar2,iVar2);
          if ((iVar1 == 0) && (iVar1 = FUN_ram_42025604(iVar2,iVar2,iVar4), iVar1 == 0)) {
            iVar2 = param_1 + 0x68;
            iVar1 = FUN_ram_42025088(iVar2,iVar2,iVar2);
            if (iVar1 == 0) {
              iVar1 = FUN_ram_42025604(iVar2,iVar2,iVar4);
            }
          }
        }
LAB_ram_4202c990:
        FUN_ram_42024774(auStack_38);
        if ((((iVar1 == 0) &&
             (iVar1 = FUN_ram_42025088(auStack_90,auStack_90,param_1 + 0x60), iVar1 == 0)) &&
            (iVar1 = FUN_ram_42025604(auStack_90,auStack_90,iVar4), iVar1 == 0)) &&
           (iVar1 = FUN_ram_420249f4(auStack_50,auStack_90), iVar1 == 0)) {
          iVar2 = param_1 + 0x20;
          iVar1 = FUN_ram_4202505a(auStack_88,iVar2,1);
          if (iVar1 == 0) {
            iVar6 = param_1 + 0x28;
            iVar1 = FUN_ram_4202505a(auStack_80,iVar6,1);
            if ((((iVar1 == 0) &&
                 (iVar1 = FUN_ram_42025be4(auStack_78,0x1c,param_2,param_3), iVar1 == 0)) &&
                ((iVar1 = FUN_ram_42025088(auStack_60,auStack_88,auStack_78), iVar1 == 0 &&
                 ((iVar1 = FUN_ram_42025020(auStack_60,auStack_60,param_1 + 0x30), iVar1 == 0 &&
                  (iVar1 = FUN_ram_42025be4(auStack_78,0x1c,param_2,param_3), iVar1 == 0)))))) &&
               (((iVar1 = FUN_ram_42025088(auStack_58,auStack_80,auStack_78), iVar1 == 0 &&
                 ((((iVar1 = FUN_ram_42025020(auStack_58,auStack_58,param_1 + 0x38), iVar1 == 0 &&
                    (iVar1 = FUN_ram_42025944(auStack_70,auStack_90,auStack_60,iVar2,param_1 + 0x50)
                    , iVar1 == 0)) &&
                   (iVar1 = FUN_ram_42025944(auStack_68,auStack_90,auStack_58,iVar6,param_1 + 0x58),
                   iVar1 == 0)) &&
                  ((iVar1 = FUN_ram_42025026(auStack_90,auStack_70,auStack_68), iVar1 == 0 &&
                   (iVar1 = FUN_ram_42025088(auStack_70,auStack_90,param_1 + 0x40), iVar1 == 0))))))
                && (((iVar1 = FUN_ram_42025604(auStack_90,auStack_70,iVar2), iVar1 == 0 &&
                     ((iVar1 = FUN_ram_42025088(auStack_70,auStack_90,iVar6), iVar1 == 0 &&
                      (iVar1 = FUN_ram_42025020(auStack_90,auStack_68,auStack_70), iVar1 == 0)))) &&
                    (iVar1 = FUN_ram_42025944(auStack_48,auStack_90,param_1 + 0x10,iVar4,
                                              param_1 + 0x48), iVar1 == 0)))))) {
              iVar2 = FUN_ram_42024d4a(auStack_48,auStack_50);
              iVar1 = -0x4380;
              if (iVar2 == 0) {
                uVar3 = FUN_ram_42026846(*(undefined4 *)(param_1 + 8));
                uVar5 = (uint)*(ushort *)(param_1 + 0xe);
                FUN_ram_4202476a(auStack_40);
                FUN_ram_4202476a(auStack_38);
                iVar1 = FUN_ram_42026b04(auStack_40,iVar4);
                if ((((iVar1 == 0) &&
                     (iVar1 = FUN_ram_4202479e(auStack_38,uVar5 * 2 + 1), iVar1 == 0)) &&
                    (iVar1 = FUN_ram_4202479e(auStack_90,uVar5), iVar1 == 0)) &&
                   (iVar1 = FUN_ram_4202479e(param_1 + 0x68,uVar5), iVar1 == 0)) {
                  FUN_ram_42026d1a(auStack_90[0],auStack_90[0],*(undefined4 *)(param_1 + 8),uVar5,
                                   uVar3,auStack_40[0],auStack_38[0]);
                  FUN_ram_42026878(auStack_90[0],auStack_90[0],*(undefined4 *)(param_1 + 0x68),uVar5
                                   ,*(undefined4 *)(param_1 + 8),uVar5,uVar3,auStack_38[0]);
                }
                FUN_ram_42024774(auStack_40);
                FUN_ram_42024774(auStack_38);
                if (iVar1 == 0) {
                  iVar1 = FUN_ram_42024c5e(auStack_90,param_5,*(undefined4 *)(param_1 + 4));
                }
              }
            }
          }
        }
      }
    }
    FUN_ram_42024774(auStack_88);
    FUN_ram_42024774(auStack_80);
    FUN_ram_42024774(auStack_78);
    FUN_ram_42024774(auStack_60);
    FUN_ram_42024774(auStack_58);
    FUN_ram_42024774(auStack_90);
    FUN_ram_42024774(auStack_70);
    FUN_ram_42024774(auStack_68);
    FUN_ram_42024774(auStack_48);
    FUN_ram_42024774(auStack_50);
    if ((iVar1 != 0) && (-0x80 < iVar1)) {
      iVar1 = iVar1 + -0x4300;
    }
  }
  return iVar1;
}

