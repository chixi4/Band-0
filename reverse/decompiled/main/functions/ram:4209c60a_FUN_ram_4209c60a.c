
undefined4
FUN_ram_4209c60a(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                undefined4 param_5,undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_40 [52];
  
  if (param_4 == 2) {
    iVar2 = FUN_ram_4205fd7c(param_1,param_2,param_5,param_6,auStack_40);
    if (iVar2 == 0) {
      FUN_ram_4039c11e(param_7,auStack_40,0x10);
      return 0;
    }
  }
  else {
    if (param_4 == 3) {
      uVar1 = FUN_ram_4206008c(param_1,param_5,param_6,param_7);
      return uVar1;
    }
    if (param_4 == 1) {
      uVar1 = FUN_ram_4205fd50(param_1,param_2,param_5,param_6,param_7);
      return uVar1;
    }
  }
  return 0xffffffff;
}

