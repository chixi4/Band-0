
int FUN_ram_4202afcc(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  
  FUN_ram_4039c11e(param_4,param_3,8);
  FUN_ram_4039c11e(param_4 + 8,param_2);
  iVar1 = FUN_ram_4202af72(param_1,param_4,param_4);
  if (iVar1 == 0) {
    FUN_ram_4202d766(param_1,0x10);
    FUN_ram_4202d766(param_2,0x10);
    FUN_ram_4202d766(param_3,0x10);
    FUN_ram_4202d766(param_4,0x10);
  }
  return iVar1;
}

