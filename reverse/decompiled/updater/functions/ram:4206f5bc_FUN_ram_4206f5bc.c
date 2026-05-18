
undefined4 FUN_ram_4206f5bc(undefined4 param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4206f590(param_2);
  if (iVar1 != 0) {
    uVar2 = FUN_ram_4206f54a(param_1,iVar1);
    return uVar2;
  }
  return 0xffffffff;
}

