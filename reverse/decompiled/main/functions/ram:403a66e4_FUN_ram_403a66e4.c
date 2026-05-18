
int FUN_ram_403a66e4(undefined4 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  param_1 = (undefined4 *)*param_1;
  FUN_ram_40392fe4(*param_1);
  iVar1 = FUN_ram_40392ec0(*param_1,param_2 * 1000,0);
  if (iVar1 == 0x102) {
    iVar2 = 3;
  }
  else {
    iVar2 = 2;
    if (iVar1 != 0x103) {
      iVar2 = (-(uint)(iVar1 == 0) & 0xfffffff4) + 0xc;
    }
  }
  return iVar2;
}

