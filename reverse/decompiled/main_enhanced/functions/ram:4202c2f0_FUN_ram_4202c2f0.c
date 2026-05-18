
void FUN_ram_4202c2f0(void)

{
  int unaff_s0;
  ushort in_a4;
  short in_a5;
  ushort uStack0000000e;
  undefined2 uStack00000010;
  undefined1 uStack00000012;
  
  uStack0000000e = in_a5 << 8 | in_a4;
  uStack00000010 = *(undefined2 *)(unaff_s0 + 0x1c);
  uStack00000012 = *(undefined1 *)(unaff_s0 + 0x1e);
  FUN_ram_4202ebb6();
  return;
}

