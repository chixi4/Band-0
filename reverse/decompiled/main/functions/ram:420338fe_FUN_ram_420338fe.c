
int FUN_ram_420338fe(byte *param_1,byte *param_2)

{
  int iVar1;
  
  if ((uint)*param_1 == (uint)*param_2) {
    iVar1 = FUN_ram_4039c0e0(param_1 + 1,param_2 + 1,6);
    return iVar1;
  }
  return (uint)*param_1 - (uint)*param_2;
}

