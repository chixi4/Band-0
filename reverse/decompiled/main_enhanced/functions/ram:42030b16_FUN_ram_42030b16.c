
undefined4 FUN_ram_42030b16(int param_1,byte *param_2)

{
  byte bVar1;
  undefined1 uVar2;
  undefined *puVar3;
  
  if ((*(char *)(param_1 + 0x12) == '\x01') || (*(char *)(param_1 + 0x19) == '\x01')) {
    *param_2 = 5;
LAB_ram_42030b30:
    uVar2 = 2;
  }
  else {
    if (((((*(byte *)(param_1 + 0x13) & 4) == 0) && ((*(byte *)(param_1 + 0x1a) & 4) == 0)) ||
        (4 < *(byte *)(param_1 + 0x11))) || (4 < *(byte *)(param_1 + 0x18))) {
      *param_2 = 0;
LAB_ram_42030b4c:
      *(undefined1 *)(param_1 + 0xc) = 0;
      return 0;
    }
    if ((*(byte *)(param_1 + 8) & 1) == 0) {
      puVar3 = &UNK_ram_3c0f5504;
    }
    else {
      puVar3 = &UNK_ram_3c0f5520;
    }
    bVar1 = puVar3[(uint)*(byte *)(param_1 + 0x11) + (uint)*(byte *)(param_1 + 0x18) * 5];
    *param_2 = bVar1;
    if (bVar1 != 4) {
      if (bVar1 < 5) {
        if (bVar1 == 0) goto LAB_ram_42030b4c;
        if (1 < (byte)(bVar1 - 2)) {
          return 3;
        }
        *(undefined1 *)(param_1 + 0xc) = 1;
        goto LAB_ram_42030bc0;
      }
      if (bVar1 != 5) {
        return 3;
      }
      goto LAB_ram_42030b30;
    }
    uVar2 = 3;
  }
  *(undefined1 *)(param_1 + 0xc) = uVar2;
LAB_ram_42030bc0:
  *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 8;
  return 0;
}

