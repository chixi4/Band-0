
undefined4 FUN_ram_4202c756(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202c63a();
  if ((iVar1 == 0) && (iVar1 = FUN_ram_4202c20a(param_1,1), iVar1 == 0)) {
    iVar1 = FUN_ram_4202dc84(param_1 + 8,param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x10
                             ,0,0);
    if ((iVar1 == 0) &&
       (iVar1 = FUN_ram_4202de44(param_1 + 0x20,param_1 + 0x28,param_1 + 0x18,param_1 + 0x30,
                                 param_1 + 0x38,param_1 + 0x40), iVar1 == 0)) {
      return 0;
    }
  }
  return 0xffffbe00;
}

