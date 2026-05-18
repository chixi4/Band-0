
int FUN_ram_4206f32e(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((((((param_2 == 0) || (iVar1 = FUN_ram_4206826c(param_1 + 8), iVar1 == 0)) &&
        ((param_3 == 0 || (iVar1 = FUN_ram_4206826c(param_1 + 0x20,param_3), iVar1 == 0)))) &&
       ((param_4 == 0 || (iVar1 = FUN_ram_4206826c(param_1 + 0x28,param_4), iVar1 == 0)))) &&
      ((param_5 == 0 || (iVar1 = FUN_ram_4206826c(param_1 + 0x18,param_5), iVar1 == 0)))) &&
     ((param_6 == 0 || (iVar1 = FUN_ram_4206826c(param_1 + 0x10,param_6), iVar1 == 0)))) {
    if (param_2 != 0) {
      uVar2 = FUN_ram_420683c4(param_1 + 8);
      *(undefined4 *)(param_1 + 4) = uVar2;
    }
    iVar1 = 0;
  }
  else {
    iVar1 = iVar1 + -0x4080;
  }
  return iVar1;
}

