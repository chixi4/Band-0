
int FUN_ram_420548e2(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    param_1 = FUN_ram_4039bf1e();
  }
  iVar1 = FUN_ram_420531dc(4);
  if (iVar1 != 0) {
    FUN_ram_4039c11e(iVar1,param_1,0x10);
    FUN_ram_42053d88(*(undefined4 *)(iVar1 + 4));
  }
  return iVar1;
}

