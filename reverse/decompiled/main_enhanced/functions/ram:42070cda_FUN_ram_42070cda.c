
int FUN_ram_42070cda(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_ram_4206806e(auStack_30);
  FUN_ram_4206806e(auStack_28);
  if (param_6 == 0) {
    if ((param_2 == 0) || (param_3 == 0)) goto LAB_ram_42070d66;
LAB_ram_42070d72:
    if (param_1 != 0) {
      iVar1 = FUN_ram_42068852(auStack_30,param_2,param_3);
      if (iVar1 != 0) goto LAB_ram_42070d20;
      iVar1 = FUN_ram_420685b4(param_1,1);
      if ((iVar1 < 1) || (iVar1 = FUN_ram_42068514(auStack_30,param_1), iVar1 != 0))
      goto LAB_ram_42070d1a;
      goto LAB_ram_42070da2;
    }
LAB_ram_42070d76:
    if ((param_4 == 0) || (param_5 == 0)) {
LAB_ram_42070d7a:
      iVar1 = 0;
      goto LAB_ram_42070d20;
    }
    iVar1 = FUN_ram_420685b4(param_2,1);
    if ((0 < iVar1) && (iVar1 = FUN_ram_420685b4(param_3,1), 0 < iVar1)) {
      iVar1 = FUN_ram_42068852(auStack_30,param_4,param_5);
      if ((iVar1 != 0) ||
         (((iVar1 = FUN_ram_42068824(auStack_30,auStack_30,1), iVar1 != 0 ||
           (iVar1 = FUN_ram_42068824(auStack_28,param_2,1), iVar1 != 0)) ||
          (iVar1 = FUN_ram_42068da0(auStack_30,auStack_30,auStack_28), iVar1 != 0))))
      goto LAB_ram_42070d20;
      iVar1 = FUN_ram_420685b4(auStack_30,0);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42068852(auStack_30,param_4,param_5);
        if (((iVar1 != 0) || (iVar1 = FUN_ram_42068824(auStack_30,auStack_30,1), iVar1 != 0)) ||
           ((iVar1 = FUN_ram_42068824(auStack_28,param_3,1), iVar1 != 0 ||
            (iVar1 = FUN_ram_42068da0(auStack_30,auStack_30,auStack_28), iVar1 != 0))))
        goto LAB_ram_42070d20;
        iVar1 = FUN_ram_420685b4(auStack_30,0);
        if (iVar1 == 0) goto LAB_ram_42070d7a;
      }
    }
  }
  else if ((param_2 == 0) || (iVar1 = FUN_ram_4206970e(param_2,0x32,param_6,param_7), iVar1 == 0)) {
    if (param_3 != 0) {
      iVar1 = FUN_ram_4206970e(param_3,0x32,param_6,param_7);
      if (iVar1 != 0) goto LAB_ram_42070d1a;
      if (param_2 != 0) goto LAB_ram_42070d72;
    }
LAB_ram_42070d66:
    if (param_1 != 0) {
LAB_ram_42070da2:
      if (((param_4 != 0) && (param_5 != 0)) &&
         ((iVar1 = FUN_ram_420685b4(param_4,1), iVar1 < 1 ||
          (((iVar1 = FUN_ram_420685b4(param_5,1), iVar1 < 1 ||
            (iVar1 = FUN_ram_42068514(param_4,param_1), -1 < iVar1)) ||
           (iVar1 = FUN_ram_42068514(param_5,param_1), -1 < iVar1)))))) goto LAB_ram_42070d1a;
    }
    if ((param_2 != 0) && (param_3 != 0)) goto LAB_ram_42070d76;
    goto LAB_ram_42070d7a;
  }
LAB_ram_42070d1a:
  iVar1 = -0x4200;
LAB_ram_42070d20:
  FUN_ram_42068078(auStack_30);
  FUN_ram_42068078(auStack_28);
  if ((iVar1 != 0) && (iVar1 != -0x4200)) {
    iVar1 = iVar1 + -0x4200;
  }
  return iVar1;
}

