
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42018d86(void)

{
  int iVar1;
  undefined1 auStack_1c [16];
  
  if ((_DAT_ram_3fcb97b8 != 0) && (_DAT_ram_3fcb97c0 != 0)) {
    while (iVar1 = FUN_ram_403974ca(_DAT_ram_3fcb97c0,auStack_1c,0), iVar1 == 1) {
      if (*(code **)(_DAT_ram_3fcb97b8 + 0x10) != (code *)0x0) {
        (**(code **)(_DAT_ram_3fcb97b8 + 0x10))(auStack_1c);
      }
    }
  }
  return;
}

