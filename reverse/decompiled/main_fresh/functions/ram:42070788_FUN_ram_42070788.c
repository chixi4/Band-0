
undefined4 FUN_ram_42070788(int param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  
  if ((param_2 != 0 || param_3 != 0) && (param_4 == 0)) {
    return 0xffffbf80;
  }
  if (*(int *)(param_1 + 0x70) == 0) {
    uVar1 = FUN_ram_420706d8();
    return uVar1;
  }
  if (*(int *)(param_1 + 0x70) != 1) {
    return 0xffffbf00;
  }
  uVar1 = FUN_ram_420706b8();
  return uVar1;
}

