
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42074254(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40390e5c();
  if (uVar1 == 0x20) {
    DAT_ram_3fcb0b05 = 2;
  }
  else {
    if (uVar1 < 0x21) {
      if (uVar1 == 0x1a) {
        DAT_ram_3fcb0b05 = 1;
        goto LAB_ram_4207427e;
      }
    }
    else if ((uVar1 != 0x28) && (uVar1 == 0x30)) {
      DAT_ram_3fcb0b05 = 3;
      goto LAB_ram_4207427e;
    }
    DAT_ram_3fcb0b05 = 0;
  }
LAB_ram_4207427e:
  _DAT_ram_60026004 = uVar1 - 1 & 0xff | _DAT_ram_60026004 & 0xffffff00;
  return;
}

