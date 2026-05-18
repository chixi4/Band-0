
undefined4 * FUN_ram_40395634(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_403953d0(1,0,0,param_2,param_1);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = 0;
    *puVar1 = 0;
    puVar1[3] = 0;
    FUN_ram_40395514(puVar1,0,0,0);
  }
  return puVar1;
}

