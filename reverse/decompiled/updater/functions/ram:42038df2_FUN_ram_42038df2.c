
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42038df2(void)

{
  if (_DAT_ram_3fcb398c != 0) {
    if (_DAT_ram_3fcb3f74 != 0) {
      if (*(int *)(*(int *)(gp + -0x2b8) + 0x410) != 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x128))();
        *(undefined4 *)(*(int *)(gp + -0x2b8) + 0x410) = 0;
      }
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(_DAT_ram_3fcb398c);
  }
  _DAT_ram_3fcb398c = 0;
  return;
}

