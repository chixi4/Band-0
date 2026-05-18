
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420397e4(int param_1)

{
  (**(code **)(_DAT_ram_3fcdfed0 + 0xec))();
  (**(code **)(_DAT_ram_3fcdfecc + 0x5d8))(param_1);
  *(undefined2 *)(param_1 + 0xe) = 0x800;
  *(undefined2 *)(param_1 + 0x10) = 0x800;
  *(undefined1 *)(param_1 + 2) = 7;
  *(undefined1 *)(param_1 + 0x194) = 0;
  *(ushort *)(param_1 + 0xc) = *(ushort *)(param_1 + 0xc) | 0x12;
  return;
}

