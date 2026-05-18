
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42046c30(undefined4 param_1)

{
  int *piVar1;
  int iVar2;
  
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  piVar1 = (int *)_DAT_ram_3fcb5098;
  while( true ) {
    if (piVar1 == (int *)0x0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
      return 0;
    }
    iVar2 = FUN_ram_40399d6c(piVar1 + 1,param_1,6);
    if (iVar2 == 0) break;
    piVar1 = (int *)*piVar1;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return 1;
}

