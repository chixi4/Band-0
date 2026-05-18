
undefined4 FUN_ram_420531dc(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xf) {
    uVar1 = FUN_ram_42053118(*(undefined4 *)(&DAT_ram_3c0f74d0 + param_1 * 4));
    return uVar1;
  }
  return 0;
}

