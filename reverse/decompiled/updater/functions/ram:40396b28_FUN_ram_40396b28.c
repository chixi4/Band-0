
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_40396b28(void)

{
  if (_DAT_ram_3fcb65fc != 0) {
    *(int *)(_DAT_ram_3fcb65fc + 0x4c) = *(int *)(_DAT_ram_3fcb65fc + 0x4c) + 1;
  }
  return _DAT_ram_3fcb65fc;
}

