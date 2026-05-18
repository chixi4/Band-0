
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b2ea8(void)

{
  undefined4 uVar1;
  undefined1 auStack_24 [28];
  
  uVar1 = 0x103;
  if (_DAT_ram_3fcc526c == 0) {
    FUN_ram_4039c11e(auStack_24,&DAT_ram_3c0f73b0,0x14);
    uVar1 = FUN_ram_420b339c(auStack_24,&DAT_ram_3fcc526c);
  }
  return uVar1;
}

