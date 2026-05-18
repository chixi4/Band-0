
void FUN_ram_42018eec(int param_1,uint param_2,uint param_3)

{
  byte *pbVar1;
  
  if ((param_2 < 200) && (param_3 < 200)) {
    pbVar1 = (byte *)(param_1 + param_3 * 0x19 + ((int)param_2 >> 3));
    *pbVar1 = ~(byte)(1 << (~param_2 & 7)) & *pbVar1;
  }
  return;
}

