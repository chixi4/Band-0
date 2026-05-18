
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a682c(void)

{
  undefined4 uVar1;
  int iVar2;
  
  do {
    do {
      iVar2 = _DAT_ram_3fcb6bd4;
      uVar1 = (**(code **)(_DAT_ram_3fcb6a44 + 0xa8))();
      iVar2 = (**(code **)(_DAT_ram_3fcb6a44 + 0x10))(iVar2,uVar1);
    } while (iVar2 == 0);
    (**(code **)(_DAT_ram_3fcb6a44 + 0x1c))();
  } while (iVar2 != _DAT_ram_3fcb6bd4 + 8);
  return;
}

