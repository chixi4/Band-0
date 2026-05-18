
undefined4 FUN_ram_4204771c(byte *param_1)

{
  uint uVar1;
  uint extraout_a4;
  uint extraout_a5;
  uint uVar2;
  
  uVar1 = 9;
  if (param_1 != (byte *)0x0) goto LAB_ram_42047736;
  param_1 = (byte *)FUN_ram_42046b52();
  uVar1 = extraout_a4;
  uVar2 = extraout_a5;
  do {
    if (uVar1 < (uVar2 - 0x30 & 0xff)) {
      return 0;
    }
    param_1 = param_1 + 1;
LAB_ram_42047736:
    uVar2 = (uint)*param_1;
  } while (uVar2 != 0);
  return 1;
}

