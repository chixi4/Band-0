
void FUN_ram_4205f544(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  
  iVar1 = FUN_ram_40399d6c(param_1,param_2,6);
  if (iVar1 < 1) {
    FUN_ram_40399daa(param_3,param_2,6);
  }
  else {
    FUN_ram_40399daa(param_3,param_1);
    param_1 = param_2;
  }
  FUN_ram_40399daa(param_3 + 6,param_1,6);
  return;
}

