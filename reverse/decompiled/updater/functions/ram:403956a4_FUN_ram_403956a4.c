
undefined4 * FUN_ram_403956a4(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_40395430(1,0,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    FUN_ram_40395514(puVar1,0,0,0);
  }
  return puVar1;
}

