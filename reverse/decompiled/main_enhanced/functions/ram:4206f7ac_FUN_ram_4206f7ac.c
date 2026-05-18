
undefined4 FUN_ram_4206f7ac(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4206f690();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4206f260(param_1,1), iVar1 == 0)) {
    iVar1 = FUN_ram_42070cda(param_1 + 8,param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x10
                             ,0,0);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_ram_42070e9a(param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x30,
                                 param_1 + 0x38,param_1 + 0x40), iVar1 == 0)) {
      return 0;
    }
  }
  return 0xffffbe00;
}

