
int FUN_ram_42070e9a(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  FUN_ram_4206806e(auStack_30);
  FUN_ram_4206806e(auStack_28);
  if (param_4 == 0) {
LAB_ram_42070ec6:
    if (param_5 != 0) {
      if (param_2 == 0) goto LAB_ram_42070ed4;
      iVar1 = FUN_ram_42068824(auStack_30,param_2,1);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_420687f0(auStack_28,param_5,param_3), iVar1 != 0)) ||
         (iVar1 = FUN_ram_42068da0(auStack_28,auStack_28,auStack_30), iVar1 != 0))
      goto LAB_ram_42070f96;
      iVar1 = FUN_ram_420685b4(auStack_28,0);
      if (iVar1 != 0) goto LAB_ram_42070f28;
    }
    if (param_6 != 0) {
      if ((param_1 == 0) || (param_2 == 0)) goto LAB_ram_42070ed4;
      iVar1 = FUN_ram_42068852(auStack_30,param_6,param_2);
      if ((iVar1 != 0) ||
         ((iVar1 = FUN_ram_42068824(auStack_30,auStack_30,1), iVar1 != 0 ||
          (iVar1 = FUN_ram_42068da0(auStack_30,auStack_30,param_1), iVar1 != 0))))
      goto LAB_ram_42070f96;
      iVar1 = FUN_ram_420685b4(auStack_30,0);
      if (iVar1 != 0) goto LAB_ram_42070f28;
    }
    iVar1 = 0;
    goto LAB_ram_42070eda;
  }
  if (param_1 == 0) {
LAB_ram_42070ed4:
    iVar1 = -0x4080;
  }
  else {
    iVar1 = FUN_ram_42068824(auStack_30,param_1,1);
    if (((iVar1 == 0) && (iVar1 = FUN_ram_420687f0(auStack_28,param_4,param_3), iVar1 == 0)) &&
       (iVar1 = FUN_ram_42068da0(auStack_28,auStack_28,auStack_30), iVar1 == 0)) {
      iVar1 = FUN_ram_420685b4(auStack_28,0);
      if (iVar1 == 0) goto LAB_ram_42070ec6;
    }
    else {
LAB_ram_42070f96:
      if (iVar1 != -0x4200) {
        if (iVar1 != -0x4080) {
          iVar1 = iVar1 + -0x4200;
          goto LAB_ram_42070eda;
        }
        goto LAB_ram_42070ed4;
      }
    }
LAB_ram_42070f28:
    iVar1 = -0x4200;
  }
LAB_ram_42070eda:
  FUN_ram_42068078(auStack_30);
  FUN_ram_42068078(auStack_28);
  return iVar1;
}

