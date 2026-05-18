
undefined4
FUN_ram_4206236e(undefined4 param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7)

{
  undefined4 uVar1;
  int iVar2;
  undefined1 auStack_40 [56];
  
  if (param_4 == 2) {
    iVar2 = FUN_ram_42021bc6(param_1,param_2,param_5,param_6,auStack_40);
LAB_ram_420623c4:
    if (iVar2 != 0) {
      return 0xffffffff;
    }
    FUN_ram_40399daa(param_7,auStack_40,0x10);
    return 0;
  }
  if (param_4 < 3) {
    if (param_4 != 0) {
      if (param_4 != 1) {
        return 0xffffffff;
      }
      uVar1 = FUN_ram_42021b9a(param_1,param_2,param_5,param_6,param_7);
      return uVar1;
    }
    if ((param_3 == 0x400000) || (param_3 == 0x4000000)) {
      if (param_2 != 0x10) {
        return 0xffffffff;
      }
      iVar2 = FUN_ram_42021b6e(param_1,0x10,param_5,param_6,auStack_40);
      goto LAB_ram_420623c4;
    }
    if (param_3 != 0x400) {
      return 0xffffffff;
    }
  }
  else if (param_4 != 3) {
    return 0xffffffff;
  }
  uVar1 = FUN_ram_42021f42(param_1,param_5,param_6,param_7);
  return uVar1;
}

