
int FUN_ram_4202dc84(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                    undefined4 param_7)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [8];
  
  FUN_ram_4202476a(auStack_30);
  FUN_ram_4202476a(auStack_28);
  if (param_6 == 0) {
    if ((param_2 == 0) || (param_3 == 0)) goto LAB_ram_4202dd10;
LAB_ram_4202dd1c:
    if (param_1 != 0) {
      iVar1 = FUN_ram_42025088(auStack_30,param_2,param_3);
      if (iVar1 != 0) goto LAB_ram_4202dcca;
      iVar1 = FUN_ram_42024dea(param_1,1);
      if ((iVar1 < 1) || (iVar1 = FUN_ram_42024d4a(auStack_30,param_1), iVar1 != 0))
      goto LAB_ram_4202dcc4;
      goto LAB_ram_4202dd4c;
    }
LAB_ram_4202dd20:
    if ((param_4 == 0) || (param_5 == 0)) {
LAB_ram_4202dd24:
      iVar1 = 0;
      goto LAB_ram_4202dcca;
    }
    iVar1 = FUN_ram_42024dea(param_2,1);
    if ((0 < iVar1) && (iVar1 = FUN_ram_42024dea(param_3,1), 0 < iVar1)) {
      iVar1 = FUN_ram_42025088(auStack_30,param_4,param_5);
      if ((iVar1 != 0) ||
         (((iVar1 = FUN_ram_4202505a(auStack_30,auStack_30,1), iVar1 != 0 ||
           (iVar1 = FUN_ram_4202505a(auStack_28,param_2,1), iVar1 != 0)) ||
          (iVar1 = FUN_ram_42025604(auStack_30,auStack_30,auStack_28), iVar1 != 0))))
      goto LAB_ram_4202dcca;
      iVar1 = FUN_ram_42024dea(auStack_30,0);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42025088(auStack_30,param_4,param_5);
        if (((iVar1 != 0) || (iVar1 = FUN_ram_4202505a(auStack_30,auStack_30,1), iVar1 != 0)) ||
           ((iVar1 = FUN_ram_4202505a(auStack_28,param_3,1), iVar1 != 0 ||
            (iVar1 = FUN_ram_42025604(auStack_30,auStack_30,auStack_28), iVar1 != 0))))
        goto LAB_ram_4202dcca;
        iVar1 = FUN_ram_42024dea(auStack_30,0);
        if (iVar1 == 0) goto LAB_ram_4202dd24;
      }
    }
  }
  else if ((param_2 == 0) || (iVar1 = FUN_ram_42026028(param_2,0x32,param_6,param_7), iVar1 == 0)) {
    if (param_3 != 0) {
      iVar1 = FUN_ram_42026028(param_3,0x32,param_6,param_7);
      if (iVar1 != 0) goto LAB_ram_4202dcc4;
      if (param_2 != 0) goto LAB_ram_4202dd1c;
    }
LAB_ram_4202dd10:
    if (param_1 != 0) {
LAB_ram_4202dd4c:
      if (((param_4 != 0) && (param_5 != 0)) &&
         ((iVar1 = FUN_ram_42024dea(param_4,1), iVar1 < 1 ||
          (((iVar1 = FUN_ram_42024dea(param_5,1), iVar1 < 1 ||
            (iVar1 = FUN_ram_42024d4a(param_4,param_1), -1 < iVar1)) ||
           (iVar1 = FUN_ram_42024d4a(param_5,param_1), -1 < iVar1)))))) goto LAB_ram_4202dcc4;
    }
    if ((param_2 != 0) && (param_3 != 0)) goto LAB_ram_4202dd20;
    goto LAB_ram_4202dd24;
  }
LAB_ram_4202dcc4:
  iVar1 = -0x4200;
LAB_ram_4202dcca:
  FUN_ram_42024774(auStack_30);
  FUN_ram_42024774(auStack_28);
  if ((iVar1 != 0) && (iVar1 != -0x4200)) {
    iVar1 = iVar1 + -0x4200;
  }
  return iVar1;
}

