
void FUN_ram_420668ee(byte *param_1)

{
  byte bVar1;
  byte bVar2;
  byte *pbVar3;
  byte *pbVar4;
  
  bVar1 = *param_1;
  pbVar3 = param_1;
  do {
    pbVar4 = pbVar3 + 1;
    *pbVar3 = pbVar3[1] >> 7 | *pbVar3 << 1;
    pbVar3 = pbVar4;
  } while (param_1 + 0xf != pbVar4);
  bVar2 = param_1[0xf] << 1;
  if ((char)bVar1 < '\0') {
    bVar2 = bVar2 ^ 0x87;
  }
  param_1[0xf] = bVar2;
  return;
}

