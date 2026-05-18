
undefined4 FUN_ram_4201f9bc(int param_1,uint param_2,int param_3)

{
  uint *puVar1;
  int iVar2;
  
  if (param_2 < 0x7e) {
    puVar1 = (uint *)(param_1 + (param_2 >> 4) * 4);
    iVar2 = (param_2 & 0xf) << 1;
    *puVar1 = ~(3 << iVar2) & *puVar1 | param_3 << iVar2;
    return 0;
  }
  return 0xffffffff;
}

