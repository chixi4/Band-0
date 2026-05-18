
undefined4 FUN_ram_4202d10c(int param_1,byte *param_2)

{
  byte bVar1;
  undefined *puVar2;
  
  if ((*(char *)(param_1 + 0x12) == '\x01') && (*(char *)(param_1 + 0x19) == '\x01')) {
    *param_2 = 1;
LAB_ram_4202d124:
    *(undefined1 *)(param_1 + 0xc) = 2;
LAB_ram_4202d12a:
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
  }
  else {
    if ((((*(byte *)(param_1 + 0x13) & 4) == 0) && ((*(byte *)(param_1 + 0x1a) & 4) == 0)) ||
       ((4 < *(byte *)(param_1 + 0x11) || (4 < *(byte *)(param_1 + 0x18))))) {
      *param_2 = 0;
    }
    else {
      if ((*(byte *)(param_1 + 8) & 1) == 0) {
        puVar2 = &DAT_ram_3c0f5460;
      }
      else {
        puVar2 = &UNK_ram_3c0f547c;
      }
      bVar1 = puVar2[(uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x18) * 5];
      *param_2 = bVar1;
      if (3 < bVar1) {
        return 3;
      }
      if (1 < bVar1) {
        *(undefined1 *)(param_1 + 0xc) = 1;
        goto LAB_ram_4202d12a;
      }
      if (bVar1 != 0) goto LAB_ram_4202d124;
    }
    *(undefined1 *)(param_1 + 0xc) = 0;
  }
  return 0;
}

