
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4039d0ae(void)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1bc))();
  uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x1d4))();
  if (uVar2 <= uVar1) {
    uVar2 = uVar1;
  }
  return uVar2 & 0xff;
}

