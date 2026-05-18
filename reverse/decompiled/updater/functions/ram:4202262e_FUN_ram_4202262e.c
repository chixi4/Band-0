
void FUN_ram_4202262e(byte *param_1,int param_2,uint param_3)

{
  byte *pbVar1;
  byte *pbVar2;
  
  pbVar2 = param_1 + param_2;
  while (pbVar1 = pbVar2 + -1, param_1 != pbVar1) {
    *pbVar1 = pbVar2[-2] << (8 - param_3 & 0x1f) | (byte)((int)(uint)*pbVar1 >> (param_3 & 0x1f));
    pbVar2 = pbVar1;
  }
  *param_1 = (byte)((int)(uint)*param_1 >> (param_3 & 0x1f));
  return;
}

