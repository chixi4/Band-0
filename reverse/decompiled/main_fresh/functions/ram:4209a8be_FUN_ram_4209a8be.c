
void FUN_ram_4209a8be(undefined4 *param_1)

{
  param_1[0x4b] = 0;
  (*(code *)&SUB_ram_40010488)(param_1 + 0x31,0,0x68);
  FUN_ram_4207f742(0,param_1 + 2,0,0,0);
  param_1[0x4c] = 0;
  *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) & 0xff7f;
  FUN_ram_420992a6(0x4208ad90,*param_1,param_1);
  return;
}

