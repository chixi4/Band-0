
int FUN_ram_42071c38(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6)

{
  int iVar1;
  int iVar2;
  undefined1 auStack_58 [8];
  undefined1 auStack_50 [8];
  undefined1 auStack_48 [8];
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [24];
  
  FUN_ram_42072140(auStack_38);
  FUN_ram_4206806e(auStack_58);
  FUN_ram_4206806e(auStack_50);
  FUN_ram_4206806e(auStack_48);
  FUN_ram_4206806e(auStack_40);
  if (*(int *)(param_1 + 0x34) == 0) {
    return -0x4f80;
  }
  iVar1 = FUN_ram_420685b4(param_5,1);
  if (-1 < iVar1) {
    iVar2 = param_1 + 0x34;
    iVar1 = FUN_ram_42068514(param_5,iVar2);
    if (((iVar1 < 0) && (iVar1 = FUN_ram_420685b4(param_6,1), -1 < iVar1)) &&
       (iVar1 = FUN_ram_42068514(param_6,iVar2), iVar1 < 0)) {
      iVar1 = FUN_ram_42071a6a(param_1,auStack_58,param_2,param_3);
      if (((((iVar1 != 0) || (iVar1 = FUN_ram_420690fa(0,auStack_50,param_6,iVar2), iVar1 != 0)) ||
           ((iVar1 = FUN_ram_42068852(auStack_48,auStack_58,auStack_50), iVar1 != 0 ||
            ((iVar1 = FUN_ram_42068da0(auStack_48,auStack_48,iVar2), iVar1 != 0 ||
             (iVar1 = FUN_ram_42068852(auStack_40,param_5,auStack_50), iVar1 != 0)))))) ||
          (iVar1 = FUN_ram_42068da0(auStack_40,auStack_40,iVar2), iVar1 != 0)) ||
         (iVar1 = FUN_ram_420727a2(param_1,auStack_38,auStack_48,param_1 + 0x1c,auStack_40,param_4,0
                                  ), iVar1 != 0)) goto LAB_ram_42071cb2;
      iVar1 = FUN_ram_420723d0(auStack_38);
      if (iVar1 == 0) {
        iVar1 = FUN_ram_42068da0(auStack_38,auStack_38,iVar2);
        if (iVar1 != 0) goto LAB_ram_42071cb2;
        iVar2 = FUN_ram_42068514(auStack_38,param_5);
        iVar1 = 0;
        if (iVar2 == 0) goto LAB_ram_42071cb2;
      }
    }
  }
  iVar1 = -0x4e00;
LAB_ram_42071cb2:
  FUN_ram_420721e2(auStack_38);
  FUN_ram_42068078(auStack_58);
  FUN_ram_42068078(auStack_50);
  FUN_ram_42068078(auStack_48);
  FUN_ram_42068078(auStack_40);
  return iVar1;
}

