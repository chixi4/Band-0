
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42041ef6(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(_DAT_ram_3fcb4f84 + 0xe4) != 0) {
    iVar1 = _DAT_ram_3fcb4f84 + 0x54;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
    iVar1 = FUN_ram_42040e12();
    if ((iVar1 == 0) || (DAT_ram_3fcb512c != '\x06')) {
      uVar3 = 0;
      uVar2 = 3;
    }
    else {
      (**(code **)(_DAT_ram_3fcb50e8 + 100))();
      uVar3 = 0xb0;
      uVar2 = 2;
    }
    FUN_ram_42040fac(&DAT_ram_3fcb4f74,uVar2,uVar3);
    return;
  }
  return;
}

