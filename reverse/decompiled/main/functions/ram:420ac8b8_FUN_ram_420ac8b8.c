
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420ac8b8(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_40390f58();
  if (uVar1 == 0x20) {
    DAT_ram_3fcb7f61 = 2;
  }
  else {
    if (uVar1 < 0x21) {
      if (uVar1 == 0x1a) {
        DAT_ram_3fcb7f61 = 1;
        goto LAB_ram_420ac8e2;
      }
    }
    else if ((uVar1 != 0x28) && (uVar1 == 0x30)) {
      DAT_ram_3fcb7f61 = 3;
      goto LAB_ram_420ac8e2;
    }
    DAT_ram_3fcb7f61 = 0;
  }
LAB_ram_420ac8e2:
  _DAT_ram_60026004 = uVar1 - 1 & 0xff | _DAT_ram_60026004 & 0xffffff00;
  return;
}

