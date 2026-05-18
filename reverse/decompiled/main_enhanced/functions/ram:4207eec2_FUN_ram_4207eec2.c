
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207eec2(void)

{
  if (_DAT_ram_3fcc2a14 != 0) {
    if (_DAT_ram_3fcc2ffc != 0) {
      if (*(int *)(*(int *)(gp + -0xb4) + 0x410) != 0) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x128))();
        *(undefined4 *)(*(int *)(gp + -0xb4) + 0x410) = 0;
      }
    }
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(_DAT_ram_3fcc2a14);
  }
  _DAT_ram_3fcc2a14 = 0;
  return;
}

