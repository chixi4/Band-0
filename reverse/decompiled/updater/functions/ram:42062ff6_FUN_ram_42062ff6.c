
void FUN_ram_42062ff6(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_40399d1a(1,0x14);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[3] = param_1;
    puVar1[4] = param_2;
    puVar1[2] = param_3;
    puVar1[1] = 0;
    *puVar1 = 0;
  }
  return;
}

