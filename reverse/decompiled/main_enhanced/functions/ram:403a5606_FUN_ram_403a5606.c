
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403a5606(int param_1)

{
  byte bVar1;
  
  _DAT_ram_60045800 = _DAT_ram_60045800 | 0x200;
  bVar1 = *(byte *)(param_1 + 5);
  _DAT_ram_60045870 = (**(code **)(_DAT_ram_3fcdfed0 + 0x50c))();
  _DAT_ram_60045870 = _DAT_ram_60045870 | (uint)bVar1 << 0x10;
  _DAT_ram_60045874 = (**(code **)(_DAT_ram_3fcdfed0 + 0x510))();
  _DAT_ram_60045850 = (**(code **)(_DAT_ram_3fcdfed0 + 0x3d4))();
  _DAT_ram_60045854 = 0xf;
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3dc))
            (*(undefined4 *)(param_1 + 8),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(_DAT_ram_3fcdfebc + 0x60));
  _DAT_ram_60045830 = *(undefined4 *)(_DAT_ram_3fcdfebc + 0x60);
  _DAT_ram_60045834 = *(undefined4 *)(_DAT_ram_3fcdfebc + 100);
  _DAT_ram_60045828 = (uint)*(byte *)(param_1 + 4);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3dc))
            (*(undefined4 *)(param_1 + 0xc),*(undefined4 *)(param_1 + 0x10),
             *(undefined4 *)(_DAT_ram_3fcdfebc + 0x68),_DAT_ram_60045830,_DAT_ram_60045834,
             *(code **)(_DAT_ram_3fcdfed0 + 0x3dc));
  _DAT_ram_60045838 = *(undefined4 *)(_DAT_ram_3fcdfebc + 0x68);
  _DAT_ram_60045890 = 1;
  _DAT_ram_60045880 = (**(code **)(_DAT_ram_3fcdfecc + 0x1cc))();
  if (*(char *)*_DAT_ram_3fcdfef4 == '\0') {
    _DAT_ram_60045884 = 0;
  }
  else {
    _DAT_ram_60045884 = *(undefined4 *)(param_1 + 0x14);
  }
  if (*(char *)(_DAT_ram_3fcdfebc + 0xd) != '\0') {
    _DAT_ram_60045890 = _DAT_ram_60045890 | 0x10;
  }
  _DAT_ram_60045728 = 0;
  return;
}

