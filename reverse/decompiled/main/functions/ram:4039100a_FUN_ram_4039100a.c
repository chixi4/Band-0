
void FUN_ram_4039100a(void)

{
  uint uVar1;
  undefined1 uVar2;
  
  uVar1 = 0;
  do {
    uVar2 = FUN_ram_40394af0(0x69,0,uVar1 & 0xff);
    *(undefined1 *)(uVar1 + 0x3fcb82a0) = uVar2;
    uVar1 = uVar1 + 1;
  } while (uVar1 != 8);
  return;
}

