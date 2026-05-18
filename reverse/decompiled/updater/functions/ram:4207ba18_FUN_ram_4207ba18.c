
void FUN_ram_4207ba18(undefined4 param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  puVar1 = (uint *)(((param_2 & 0xff) + 0x18002401) * 4);
  *puVar1 = (param_3 & 7) << 0xc | *puVar1 & 0xffff8fff;
  return;
}

