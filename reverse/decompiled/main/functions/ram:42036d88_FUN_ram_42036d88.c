
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42036d88(undefined4 param_1)

{
  undefined4 *puVar1;
  
  (**(code **)(_DAT_ram_3fcb6a44 + 0x68))(_DAT_ram_3fcb6bec + 0x14);
  thunk_FUN_ram_4202b7dc();
  if (*(char *)(_DAT_ram_3fcb6b88 + 1) != '\x01') {
    thunk_FUN_ram_4202b7f6();
    return;
  }
  FUN_ram_4202fd9e(_DAT_ram_3fcb6bec);
  puVar1 = *(undefined4 **)(_DAT_ram_3fcb6bec + 0xc);
  *(undefined4 *)(_DAT_ram_3fcb6bec + 0xc) = 0;
  *(undefined1 *)(_DAT_ram_3fcb6b88 + 1) = 0;
  thunk_FUN_ram_4202b7f6();
  for (; puVar1 != (undefined4 *)0x0; puVar1 = (undefined4 *)puVar1[2]) {
    (*(code *)*puVar1)(param_1,puVar1[1]);
  }
  return;
}

