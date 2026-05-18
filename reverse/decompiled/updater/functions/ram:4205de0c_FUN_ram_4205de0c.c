
void FUN_ram_4205de0c(undefined4 param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  
  iVar1 = thunk_FUN_ram_4039047a(param_3 + 0x80);
  if (iVar1 != 0) {
    iVar2 = 0x80;
    if (param_3 != 0) {
      FUN_ram_40399daa(iVar1,param_2,param_3);
      iVar2 = 0x80 - param_3;
    }
    FUN_ram_4203967e(1,iVar1,0x80U - iVar2 & 0xffff,0);
    thunk_FUN_ram_40390608(iVar1);
    return;
  }
  return;
}

