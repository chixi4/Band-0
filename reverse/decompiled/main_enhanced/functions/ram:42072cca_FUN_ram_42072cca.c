
int FUN_ram_42072cca(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  
  iVar1 = FUN_ram_4207212e();
  if (iVar1 == 1) {
    iVar1 = FUN_ram_4206959e(param_2,1,param_1 + 0x34,param_3,param_4);
    if (iVar1 == -0xe) {
      iVar1 = -0x4d00;
    }
  }
  else {
    iVar1 = -0x4f80;
  }
  return iVar1;
}

