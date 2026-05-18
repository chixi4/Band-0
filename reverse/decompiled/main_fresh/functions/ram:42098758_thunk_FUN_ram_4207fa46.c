
undefined4
thunk_FUN_ram_4207fa46
          (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4,
          undefined4 param_5,undefined1 param_6,uint param_7)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar1 = FUN_ram_4207efc6(*param_4,param_7);
  if ((param_7 & 0x10) == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    uVar2 = 0xffffffff;
    if ((int)uVar1 < 1) {
      FUN_ram_42092494(param_1,param_2,param_4,param_3,uVar1 & 0xff,param_5,param_6);
      uVar2 = 0;
    }
  }
  return uVar2;
}

