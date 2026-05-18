
undefined4
FUN_ram_4204e7f2(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,int param_6)

{
  undefined4 uVar1;
  
  if (param_6 != 0) {
    uVar1 = FUN_ram_4204e24a(*(undefined4 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0x10),param_2,
                             param_3,param_4);
    return uVar1;
  }
  return 0x1107;
}

