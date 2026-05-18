
void FUN_ram_42099a04(int param_1)

{
  short sVar1;
  
  sVar1 = *(short *)(param_1 + 0x2c);
  *(undefined4 *)(param_1 + 0x28) = 0;
  *(ushort *)(param_1 + 0x1b4) = *(ushort *)(param_1 + 0x1b4) | 1;
  *(undefined4 *)(param_1 + 0x10) = 1;
  *(undefined2 *)(param_1 + 0x2c) = 0;
  if (sVar1 == 0) {
    sVar1 = 2;
  }
  FUN_ram_4207f6bc(param_1 + 8,sVar1);
  return;
}

