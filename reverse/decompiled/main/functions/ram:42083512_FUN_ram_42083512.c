
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42083512(void)

{
  int iVar1;
  
  iVar1 = (*(code *)&SUB_ram_40012084)();
  if ((iVar1 == 0) && (_DAT_ram_3fcc3058 != 0)) {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))();
  }
  return 0;
}

