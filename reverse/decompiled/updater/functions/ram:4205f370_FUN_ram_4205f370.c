
undefined4
FUN_ram_4205f370(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                undefined4 param_5,undefined4 param_6)

{
  undefined4 uVar1;
  
  uVar1 = (*(code *)&SUB_ram_400104a8)(param_4);
  if (param_1 == 0x20) {
    uVar1 = FUN_ram_42062846(param_2,param_3,0,param_4,uVar1,param_5,param_6);
    return uVar1;
  }
  return 0xffffffff;
}

