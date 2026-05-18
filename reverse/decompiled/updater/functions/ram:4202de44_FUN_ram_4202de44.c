
int FUN_ram_4202de44(int param_1,int param_2,undefined4 param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined1 auStack_30 [8];
  undefined1 auStack_28 [12];
  
  FUN_ram_4202476a(auStack_30);
  FUN_ram_4202476a(auStack_28);
  if (param_4 == 0) {
LAB_ram_4202de70:
    if (param_5 != 0) {
      if (param_2 == 0) goto LAB_ram_4202de7e;
      iVar1 = FUN_ram_4202505a(auStack_30,param_2,1);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_42025026(auStack_28,param_5,param_3), iVar1 != 0)) ||
         (iVar1 = FUN_ram_42025604(auStack_28,auStack_28,auStack_30), iVar1 != 0))
      goto LAB_ram_4202df40;
      iVar1 = FUN_ram_42024dea(auStack_28,0);
      if (iVar1 != 0) goto LAB_ram_4202ded2;
    }
    if (param_6 != 0) {
      if ((param_1 == 0) || (param_2 == 0)) goto LAB_ram_4202de7e;
      iVar1 = FUN_ram_42025088(auStack_30,param_6,param_2);
      if ((iVar1 != 0) ||
         ((iVar1 = FUN_ram_4202505a(auStack_30,auStack_30,1), iVar1 != 0 ||
          (iVar1 = FUN_ram_42025604(auStack_30,auStack_30,param_1), iVar1 != 0))))
      goto LAB_ram_4202df40;
      iVar1 = FUN_ram_42024dea(auStack_30,0);
      if (iVar1 != 0) goto LAB_ram_4202ded2;
    }
    iVar1 = 0;
    goto LAB_ram_4202de84;
  }
  if (param_1 == 0) {
LAB_ram_4202de7e:
    iVar1 = -0x4080;
  }
  else {
    iVar1 = FUN_ram_4202505a(auStack_30,param_1,1);
    if (((iVar1 == 0) && (iVar1 = FUN_ram_42025026(auStack_28,param_4,param_3), iVar1 == 0)) &&
       (iVar1 = FUN_ram_42025604(auStack_28,auStack_28,auStack_30), iVar1 == 0)) {
      iVar1 = FUN_ram_42024dea(auStack_28,0);
      if (iVar1 == 0) goto LAB_ram_4202de70;
    }
    else {
LAB_ram_4202df40:
      if (iVar1 != -0x4200) {
        if (iVar1 != -0x4080) {
          iVar1 = iVar1 + -0x4200;
          goto LAB_ram_4202de84;
        }
        goto LAB_ram_4202de7e;
      }
    }
LAB_ram_4202ded2:
    iVar1 = -0x4200;
  }
LAB_ram_4202de84:
  FUN_ram_42024774(auStack_30);
  FUN_ram_42024774(auStack_28);
  return iVar1;
}

