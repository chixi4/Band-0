
int FUN_ram_4206c380(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5,undefined4 param_6,undefined4 param_7,undefined4 param_8,
                    undefined4 param_9,undefined4 param_10,undefined4 param_11)

{
  int iVar1;
  undefined1 auStack_24 [12];
  
  iVar1 = FUN_ram_4206be08(param_1,param_2,param_4,param_5);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4206bf28(param_1,param_6,param_7);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4206c058(param_1,param_8,param_3,param_9,param_3,auStack_24);
    if (iVar1 != 0) {
      return iVar1;
    }
    iVar1 = FUN_ram_4206c254(param_1,0,0,auStack_24,param_11,param_10);
    if (iVar1 == 0) {
      return 0;
    }
  }
  return -0x14;
}

