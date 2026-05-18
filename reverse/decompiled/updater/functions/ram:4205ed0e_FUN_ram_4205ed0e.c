
int FUN_ram_4205ed0e(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = thunk_FUN_ram_4039047a(0x80);
  if (iVar1 == 0) {
    iVar3 = -1;
  }
  else {
    thunk_FUN_ram_4202f998();
    iVar2 = FUN_ram_4205e3f6(*param_1,param_1[1]);
    iVar3 = FUN_ram_4202fa9a(iVar1,iVar2);
    if (((iVar3 == 0) && (iVar3 = FUN_ram_4202fa5c(iVar1 + 0x68,iVar2 + 0x68), iVar3 == 0)) &&
       (iVar3 = FUN_ram_4202f07c(iVar1,param_2,param_3,param_4,param_5), iVar3 == 0)) {
      iVar3 = 1;
    }
    FUN_ram_4202f086(iVar1);
    thunk_FUN_ram_40390608(iVar1);
  }
  return iVar3;
}

