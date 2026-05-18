
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42036d60(undefined4 param_1)

{
  uint uVar1;
  
  uVar1 = FUN_ram_4202ef08(param_1,0x13);
  if ((uVar1 & 0xfffffffd) == 0) {
    *(char *)(_DAT_ram_3fcb6bec + 0x10) = *(char *)(_DAT_ram_3fcb6bec + 0x10) + '\x01';
  }
  return 0;
}

