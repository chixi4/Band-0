
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208a45e(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (*(int *)(_DAT_ram_3fcc4014 + 0xe4) != 0) {
    iVar1 = _DAT_ram_3fcc4014 + 0x54;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar1);
    iVar1 = FUN_ram_4208937a();
    if ((iVar1 == 0) || (DAT_ram_3fcc41bc != '\x06')) {
      uVar3 = 0;
      uVar2 = 3;
    }
    else {
      (**(code **)(_DAT_ram_3fcc4178 + 100))();
      uVar3 = 0xb0;
      uVar2 = 2;
    }
    FUN_ram_42089514(&DAT_ram_3fcc4004,uVar2,uVar3);
    return;
  }
  return;
}

