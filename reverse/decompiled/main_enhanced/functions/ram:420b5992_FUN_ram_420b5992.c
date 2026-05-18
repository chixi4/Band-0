
void FUN_ram_420b5992(undefined4 param_1)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)FUN_ram_4039c08e(1,0xc);
  if (puVar1 != (undefined4 *)0x0) {
    puVar1[2] = param_1;
    *puVar1 = 0x420a5916;
  }
  return;
}

