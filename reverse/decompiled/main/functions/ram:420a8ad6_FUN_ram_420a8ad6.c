
undefined4
FUN_ram_420a8ad6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,uint param_6,uint *param_7,undefined4 param_8,undefined4 param_9)

{
  uint uVar1;
  undefined4 uVar2;
  
  uVar2 = *(undefined4 *)(param_1 + 4);
  uVar1 = FUN_ram_4206f68c(uVar2);
  *param_7 = uVar1;
  if (uVar1 <= param_6) {
    uVar2 = FUN_ram_420704ee(uVar2,param_8,param_9,param_2,param_4,param_3,param_5);
    return uVar2;
  }
  return 0xffffc780;
}

