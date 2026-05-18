
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42063e6a(uint param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if ((_DAT_ram_3fcb60a4 == 0) && (_DAT_ram_3fcb61e4 != 1)) {
    iVar1 = FUN_ram_42062772();
    if (iVar1 == 0) {
      return 0xffffffff;
    }
    iVar1 = FUN_ram_42062742(_DAT_ram_3fcb61e4);
    uVar2 = FUN_ram_4206255c(_DAT_ram_3fcb61e4);
    if (iVar1 != 0) {
      FUN_ram_42063c2c(0x3fcb6250,iVar1,0x3fcb6226,0,1,0x3fcb6268,8,0x3fcb6078,uVar2,param_1 | 0x20)
      ;
      _DAT_ram_3fcb60a4 = 1;
      if (_DAT_ram_3fcb621c != 0) {
        FUN_ram_4205f052(0x42053472,0x3fcb5ffc,0);
        FUN_ram_4205ef06(_DAT_ram_3fcb621c,0,0x42053472,0x3fcb5ffc,0);
      }
    }
  }
  return 0;
}

