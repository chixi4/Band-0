
int * FUN_ram_420607f0(int *param_1,undefined4 param_2,uint param_3,undefined4 param_4,
                      undefined4 param_5,int param_6)

{
  int *piVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  int *piVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int *piVar12;
  int *piVar13;
  int *piStack_12c;
  int local_114;
  undefined4 uStack_110;
  undefined4 uStack_10c;
  int iStack_108;
  undefined1 auStack_104 [64];
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  
  local_114 = 0x13;
  uStack_110 = 0;
  piVar8 = &local_114;
  if (param_1 != (int *)0x0) {
    piVar8 = param_1;
  }
  piStack_12c = (int *)0x0;
  piVar12 = (int *)0x0;
  do {
    iVar11 = *piVar8;
    if (iVar11 < 1) {
      return piStack_12c;
    }
    piVar13 = piVar12;
    piVar1 = piStack_12c;
    if ((param_3 < 0x21) && (piVar3 = (int *)FUN_ram_40399d1a(1,0x3c), piVar3 != (int *)0x0)) {
      FUN_ram_40399daa(piVar3 + 6,param_2,param_3);
      piVar3[0xe] = param_3;
      piVar3[1] = iVar11;
      iVar4 = FUN_ram_4205e418(iVar11);
      piVar3[2] = iVar4;
      if (iVar4 == 0) {
        iVar11 = FUN_ram_4206294a(iVar11);
        piVar3[4] = iVar11;
        if (iVar11 != 0) {
          iVar11 = FUN_ram_420602c2(iVar11,param_2,param_3,param_4,param_5,param_6);
          piVar3[5] = iVar11;
          goto joined_r0x42060a70;
        }
      }
      else {
        uVar5 = FUN_ram_4205e4c2();
        uVar6 = FUN_ram_4205e4ae(iVar4);
        if (uVar6 < 0x43) {
          iVar2 = FUN_ram_42060286();
          iVar10 = (uVar6 + 1 >> 1) + uVar6;
          uStack_10c = param_4;
          uStack_c4 = param_5;
          if (param_6 != 0) {
            iStack_108 = param_6;
            uStack_c0 = (*(code *)&SUB_ram_400104a8)(param_6);
          }
          if ((((iVar2 != 0x20) ||
               (iVar2 = FUN_ram_42021b5c(param_2,param_3,(param_6 != 0) + '\x01',&uStack_10c,
                                         &uStack_c4,auStack_104), iVar2 < 0)) ||
              (iVar2 = FUN_ram_4205f370(0x20,auStack_104,0x20,0x3c073338,&uStack_c4,iVar10),
              iVar2 < 0)) || (iVar2 = FUN_ram_42066328(&uStack_c4,iVar10), iVar2 == 0))
          goto LAB_ram_420608de;
          iVar9 = FUN_ram_42066454(iVar2,uVar5,iVar2);
          if ((iVar9 < 0) || (iVar9 = FUN_ram_420663cc(iVar2,&uStack_c4,0x84,uVar6), iVar9 < 0)) {
            iVar11 = 0;
            iVar10 = 0;
            iVar9 = 0;
          }
          else {
            iVar9 = FUN_ram_4205f60a(iVar4,iVar11,iVar2);
            if ((iVar9 != 0) &&
               (iVar7 = FUN_ram_4205f370(0x20,auStack_104,0x20,0x3c073354,&uStack_c4,iVar10),
               -1 < iVar7)) {
              FUN_ram_4206636c(iVar2,1);
              iVar2 = FUN_ram_42066328(&uStack_c4,iVar10);
              if ((iVar2 != 0) &&
                 ((iVar10 = FUN_ram_42066454(iVar2,uVar5,iVar2), -1 < iVar10 &&
                  (iVar10 = FUN_ram_420663cc(iVar2,&uStack_c4,0x84,uVar6), -1 < iVar10)))) {
                iVar10 = FUN_ram_4205f60a(iVar4,iVar11,iVar2);
                iVar11 = 0;
                if ((iVar10 != 0) &&
                   ((iVar11 = FUN_ram_4205e486(iVar4), iVar11 != 0 &&
                    (iVar4 = FUN_ram_4205e5fa(iVar4,iVar9,iVar10,iVar11), iVar4 < 0)))) {
                  FUN_ram_4205e51c(iVar11,1);
                  iVar11 = 0;
                }
                goto LAB_ram_420608e6;
              }
            }
            iVar11 = 0;
            iVar10 = 0;
          }
        }
        else {
LAB_ram_420608de:
          iVar11 = 0;
          iVar10 = 0;
          iVar9 = 0;
          iVar2 = 0;
        }
LAB_ram_420608e6:
        thunk_FUN_ram_420293a6(auStack_104,0x40);
        thunk_FUN_ram_420293a6(&uStack_c4,0x84);
        FUN_ram_4206636c(iVar2,1);
        FUN_ram_4205e51c(iVar9,1);
        FUN_ram_4205e51c(iVar10,1);
        piVar3[3] = iVar11;
joined_r0x42060a70:
        if (iVar11 != 0) {
          piVar13 = piVar3;
          piVar1 = piVar3;
          if (piVar12 != (int *)0x0) {
            *piVar12 = (int)piVar3;
            piVar1 = piStack_12c;
          }
          goto LAB_ram_42060920;
        }
      }
      FUN_ram_420607b4(piVar3);
    }
LAB_ram_42060920:
    piStack_12c = piVar1;
    piVar8 = piVar8 + 1;
    piVar12 = piVar13;
  } while( true );
}

