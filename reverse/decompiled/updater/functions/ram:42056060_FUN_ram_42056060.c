
undefined4 FUN_ram_42056060(int param_1,int param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (param_2 != 0)) {
    uVar1 = FUN_ram_42055fc6(param_1,param_2,param_1 + 4,*(undefined2 *)(param_1 + 0x14));
    return uVar1;
  }
  return 0xfffffff0;
}

