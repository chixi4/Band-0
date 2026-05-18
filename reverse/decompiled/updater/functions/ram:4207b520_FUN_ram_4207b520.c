
void FUN_ram_4207b520(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_40399d1a(1,0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1;
    *puVar1 = 0x4206b4d8;
  }
  return;
}

