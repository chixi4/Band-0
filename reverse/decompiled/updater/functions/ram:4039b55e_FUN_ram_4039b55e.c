
undefined4 FUN_ram_4039b55e(int param_1)

{
  uint *puVar1;
  
  puVar1 = (uint *)((uint)*(byte *)(param_1 + 4) * -8 + 0x60047ce4);
  *puVar1 = (*(byte *)(param_1 + 5) & 0xf) << 0x18 | *puVar1 & 0xf0ffffff;
  *puVar1 = (*(ushort *)(param_1 + 6) & 0x3ff) << 0xc | *puVar1 & 0xffc00fff;
  return 0;
}

