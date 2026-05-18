
undefined4 FUN_ram_42051500(uint param_1)

{
  undefined4 uVar1;
  
  if (param_1 < 0xf) {
    uVar1 = FUN_ram_42051458(*(undefined4 *)(param_1 * 4 + 0x3c079318));
    return uVar1;
  }
  return 0;
}

