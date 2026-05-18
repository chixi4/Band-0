
void FUN_ram_42096588(int param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  
  puVar1 = (undefined4 *)((param_1 + 0xc008e06) * 8);
  *puVar1 = *param_2;
  puVar1[1] = (uint)*(ushort *)(param_2 + 1);
  puVar1[6] = 0xffffffff;
  puVar1[7] = 0xffff;
  puVar1[7] = puVar1[7] | 0x10000;
  return;
}

