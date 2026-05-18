
void thunk_FUN_ram_420395b4
               (undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
               undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
               uint param_9)

{
  undefined4 uVar1;
  
  FUN_ram_42038ef6(param_3,param_9);
  uVar1 = 1;
  if (((param_9 & 0x10) == 0) && (uVar1 = param_4, (param_9 & 0x20) != 0)) {
    if ((param_9 & 1) == 0) {
      if ((param_9 & 0xc) == 4) {
        uVar1 = 0;
      }
    }
    else {
      uVar1 = 2;
    }
  }
  FUN_ram_42039492(param_1,param_2,param_3,uVar1,param_5,param_6,param_7,param_8);
  return;
}

