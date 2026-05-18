
undefined1 FUN_ram_42039714(void)

{
  undefined1 uVar1;
  uint uVar2;
  
  uVar1 = 0;
  uVar2 = DAT_ram_3fcb5136 - 9 & 0xff;
  if (uVar2 < 6) {
    uVar1 = *(undefined1 *)(uVar2 + 0x3c078d64);
  }
  return uVar1;
}

