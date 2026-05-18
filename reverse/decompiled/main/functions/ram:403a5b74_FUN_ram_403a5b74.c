
void FUN_ram_403a5b74(void)

{
  uint uVar1;
  
  uVar1 = FUN_ram_403946c0();
  if ((int)(uVar1 << 0x12) < 0) {
    if (DAT_ram_3fcb6a00 == '\0') {
      if ((uVar1 & 0x4000) == 0) {
        return;
      }
      goto LAB_ram_403a5b96;
    }
    FUN_ram_403a5b26(0);
  }
  if (((uVar1 & 0x4000) == 0) || (DAT_ram_3fcb6a00 != '\0')) {
    return;
  }
LAB_ram_403a5b96:
  FUN_ram_403a5b26(1);
  return;
}

