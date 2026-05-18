
undefined4 FUN_ram_420309c2(int param_1)

{
  undefined4 uVar1;
  
  if ((*(char *)(param_1 + 0xc) == '\x01') && (*(byte *)(param_1 + 0x110) < 0x14)) {
    *(undefined1 *)(param_1 + 0xd) = 1;
    FUN_ram_4202829c();
    uVar1 = FUN_ram_42027918();
    return uVar1;
  }
  *(undefined1 *)(param_1 + 0xd) = 10;
  return 0;
}

