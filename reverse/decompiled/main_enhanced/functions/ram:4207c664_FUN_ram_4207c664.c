
void FUN_ram_4207c664(int param_1,uint param_2,uint param_3)

{
  uint *puVar1;
  
  if (((param_2 >> 0xc < 8) &&
      (puVar1 = *(uint **)(param_1 + ((param_2 >> 0xc) + 0x98) * 4 + 8), puVar1 != (uint *)0x0)) &&
     ((*puVar1 & 4) != 0)) {
    if (((uint)(ushort)puVar1[3] != param_3 >> 4) &&
       ((((param_3 >> 4) + 0x1000) - (uint)(ushort)puVar1[3] >> 0xb & 1) == 0)) {
      (*(code *)&SUB_ram_40011f90)();
      return;
    }
  }
  return;
}

