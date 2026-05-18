
void FUN_ram_4205f4b8(undefined4 param_1,undefined4 param_2)

{
  undefined1 *puVar1;
  
  puVar1 = (undefined1 *)FUN_ram_420658ce(param_1,2);
  puVar1[1] = (char)((uint)param_2 >> 8);
  *puVar1 = (char)param_2;
  return;
}

