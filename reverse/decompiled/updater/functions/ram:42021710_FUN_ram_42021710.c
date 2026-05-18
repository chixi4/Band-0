
undefined4 FUN_ram_42021710(int param_1,undefined4 param_2)

{
  undefined4 uVar1;
  
  if ((param_1 != 0) && (*(int *)(param_1 + 0x10) != 0)) {
    uVar1 = FUN_ram_42020fc4(0x42010e82,param_1,param_2);
    return uVar1;
  }
  return 0x5002;
}

