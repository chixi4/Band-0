
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201aac6(int param_1)

{
  undefined4 uVar1;
  undefined1 auStack_14 [16];
  
  if (_DAT_ram_3fcb66dc != 0) {
    if (param_1 == 0) {
      param_1 = FUN_ram_403968bc(0,0);
    }
    uVar1 = FUN_ram_4201a9c4(1,param_1,auStack_14);
    return uVar1;
  }
  return 0x103;
}

