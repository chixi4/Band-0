
int FUN_ram_42072d16(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = FUN_ram_42073258(param_2,param_1);
  if (iVar1 == 0) {
    iVar2 = FUN_ram_4207212e(param_2);
    iVar3 = param_2 + 0x60;
    iVar1 = -0x4e80;
    if (((iVar2 != 1) || (iVar1 = FUN_ram_420683d6(iVar3,param_3,param_4), iVar1 != 0)) ||
       (iVar1 = FUN_ram_42072c7e(param_2,iVar3), iVar1 != 0)) {
      FUN_ram_42068078(iVar3);
    }
  }
  return iVar1;
}

