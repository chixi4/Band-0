
int FUN_ram_4202f378(int param_1,int *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int *piVar5;
  int iVar6;
  undefined1 auStack_38 [16];
  
  if (param_3 < 2) {
    iVar1 = FUN_ram_4202f2d8(param_1,*param_2);
    return iVar1;
  }
  iVar2 = FUN_ram_4202939a(param_3,8);
  iVar1 = -0x4d80;
  if (iVar2 != 0) {
    FUN_ram_4202476a(auStack_38);
    FUN_ram_4202f08e(iVar2,param_3);
    iVar1 = FUN_ram_420249f4(iVar2,*param_2 + 0x10);
    if (iVar1 == 0) {
      iVar4 = iVar2 + 8;
      piVar5 = param_2;
      do {
        piVar5 = piVar5 + 1;
        iVar1 = FUN_ram_4202f224(param_1,iVar4,iVar4 + -8,*piVar5 + 0x10);
        if (iVar1 != 0) goto LAB_ram_4202f478;
        iVar4 = iVar4 + 8;
      } while (iVar4 != param_3 * 8 + iVar2);
      iVar1 = param_3 * 8 + -8 + iVar2;
      iVar1 = FUN_ram_4202595e(0,iVar1,iVar1,param_1 + 4);
      if (iVar1 == 0) {
        iVar4 = param_3 - 1;
        param_2 = param_2 + iVar4;
        do {
          if (iVar4 == 0) {
            iVar1 = FUN_ram_420249f4(auStack_38,iVar2);
          }
          else {
            iVar3 = iVar2 + iVar4 * 8;
            iVar6 = iVar4 * 8 + iVar2 + -8;
            iVar1 = FUN_ram_4202f224(param_1,auStack_38,iVar3,iVar6);
            if (iVar1 != 0) break;
            iVar1 = FUN_ram_4202f224(param_1,iVar6,iVar3,*param_2 + 0x10);
          }
          if ((iVar1 != 0) ||
             (iVar1 = FUN_ram_4202f224(param_1,*param_2 + 8,*param_2 + 8,auStack_38), iVar1 != 0))
          break;
          iVar1 = FUN_ram_4202f224(param_1,auStack_38,auStack_38);
          if (((iVar1 != 0) ||
              (((iVar1 = FUN_ram_4202f224(param_1,*param_2,*param_2,auStack_38), iVar1 != 0 ||
                (iVar1 = FUN_ram_4202f224(param_1,*param_2 + 8,*param_2 + 8,auStack_38), iVar1 != 0)
                ) || (iVar1 = FUN_ram_42024964(*param_2,*(undefined2 *)(param_1 + 10)), iVar1 != 0))
              )) || (((iVar1 = FUN_ram_42024964(*param_2 + 8,*(undefined2 *)(param_1 + 10)),
                      iVar1 != 0 || (iVar1 = FUN_ram_42024a98(*param_2 + 0x10,1), iVar1 != 0)) ||
                     (param_2 = param_2 + -1, iVar4 == 0)))) break;
          iVar4 = iVar4 + -1;
        } while( true );
      }
    }
LAB_ram_4202f478:
    FUN_ram_42024774(auStack_38);
    FUN_ram_4202f0b6(iVar2,param_3);
    FUN_ram_420293a0(iVar2);
  }
  return iVar1;
}

