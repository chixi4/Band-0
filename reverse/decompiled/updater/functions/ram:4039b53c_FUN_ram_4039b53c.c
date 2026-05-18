
undefined4 FUN_ram_4039b53c(int param_1,uint param_2)

{
  uint *puVar1;
  
  puVar1 = (uint *)((uint)*(byte *)(param_1 + 4) * -8 + 0x60047ce4);
  *puVar1 = *puVar1 & 0xfffff000 | param_2 & 0xfff;
  return 0;
}

