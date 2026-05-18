
undefined4 * FUN_ram_4207b46a(undefined4 param_1,undefined4 param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_40390448(8,0x804);
  if (puVar1 != (undefined4 *)0x0) {
    uVar2 = FUN_ram_40395430(param_1,param_2,0);
    *puVar1 = uVar2;
  }
  return puVar1;
}

