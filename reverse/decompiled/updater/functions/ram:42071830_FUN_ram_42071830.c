
int FUN_ram_42071830(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_40010514)(param_1,0x3a);
  if (iVar1 == 0) {
    iVar1 = FUN_ram_420504a0(2,param_1,param_2);
    iVar1 = (uint)(iVar1 == 1) << 2;
  }
  else {
    iVar1 = FUN_ram_420504a0(0,param_1,param_2);
    iVar1 = (uint)(iVar1 == 1) << 4;
  }
  return iVar1;
}

