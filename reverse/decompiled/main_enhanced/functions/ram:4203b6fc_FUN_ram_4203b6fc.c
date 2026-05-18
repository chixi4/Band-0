
undefined4 FUN_ram_4203b6fc(int param_1,short *param_2)

{
  byte bVar1;
  short sVar2;
  short in_a5;
  
  sVar2 = *(short *)(param_1 + 0x42);
  bVar1 = *(byte *)(param_1 + 0xb);
  param_2[2] = 2;
  *param_2 = in_a5 * 2 + (ushort)bVar1 + 10 + (sVar2 + 1) * 3;
  param_2[1] = 0;
  param_2[4] = 0;
  param_2[3] = 0;
  return 0;
}

