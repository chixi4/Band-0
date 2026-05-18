
undefined4 FUN_ram_4202c7c6(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_4202c63a();
  if ((((iVar1 == 0) && (iVar1 = FUN_ram_4202c756(param_2), iVar1 == 0)) &&
      (iVar1 = FUN_ram_42024d4a(param_1 + 8,param_2 + 8), iVar1 == 0)) &&
     (iVar1 = FUN_ram_42024d4a(param_1 + 0x10,param_2 + 0x10), iVar1 == 0)) {
    return 0;
  }
  return 0xffffbe00;
}

