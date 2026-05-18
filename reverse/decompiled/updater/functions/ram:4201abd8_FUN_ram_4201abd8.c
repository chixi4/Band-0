
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201abd8(void)

{
  undefined4 uVar1;
  int iVar2;
  char acStack_11 [13];
  
  if (_DAT_ram_3fcb66dc != 0) {
    uVar1 = FUN_ram_403968bc();
    FUN_ram_40394d60();
    iVar2 = FUN_ram_4201a966(uVar1,acStack_11);
    uVar1 = 0x105;
    if (iVar2 != 0) {
      *(undefined1 *)(iVar2 + 0xc) = 1;
      if (acStack_11[0] != '\0') {
        FUN_ram_4201a99a();
      }
      uVar1 = 0;
    }
    FUN_ram_40394d8e();
    return uVar1;
  }
  return 0x103;
}

