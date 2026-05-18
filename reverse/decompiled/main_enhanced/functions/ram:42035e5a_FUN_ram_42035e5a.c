
void FUN_ram_42035e5a(int param_1,byte *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  
  pbVar3 = param_2 + 0xf;
  uVar4 = (~(int)(char)*param_2 >> 0x1f & 0xffffff79U) + 0x87;
  pbVar2 = (byte *)(param_1 + 0xf);
  while( true ) {
    *pbVar2 = (byte)uVar4 ^ *pbVar3 << 1;
    if (pbVar3 == param_2) break;
    bVar1 = *pbVar3;
    pbVar3 = pbVar3 + -1;
    uVar4 = (uint)(bVar1 >> 7);
    pbVar2 = pbVar2 + -1;
  }
  return;
}

