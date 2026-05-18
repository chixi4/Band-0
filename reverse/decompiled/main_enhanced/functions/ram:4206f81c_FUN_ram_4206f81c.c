
undefined4 FUN_ram_4206f81c(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206f690();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_4206f7ac(param_2), iVar1 == 0)) &&
      (iVar1 = FUN_ram_42068514(param_1 + 8,param_2 + 8), iVar1 == 0)) &&
     (iVar1 = FUN_ram_42068514(param_1 + 0x10,param_2 + 0x10), iVar1 == 0)) {
    return 0;
  }
  return 0xffffbe00;
}

