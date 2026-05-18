
undefined4 FUN_ram_4204e3d8(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  
  if (param_2 < 0x100) {
    puVar1 = (uint *)(param_1 + (param_2 >> 5) * 4);
    *puVar1 = ~(1 << (param_2 & 0x1f)) & *puVar1 | param_3 << (param_2 & 0x1f);
    return 0;
  }
  return 0xffffffff;
}

