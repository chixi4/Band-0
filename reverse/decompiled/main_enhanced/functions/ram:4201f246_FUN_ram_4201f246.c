
void FUN_ram_4201f246(uint param_1,uint param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  byte *pbVar3;
  byte bVar4;
  
  iVar2 = FUN_ram_4201ee6a();
  if (((iVar2 != 0) && ((param_1 & 0xffff) < 200)) && ((param_2 & 0xffff) < 200)) {
    pbVar3 = (byte *)(iVar2 + ((int)(param_2 * 200 + param_1) >> 3));
    bVar4 = *pbVar3;
    bVar1 = (byte)(1 << (~param_1 & 7));
    if (param_3 == 0) {
      bVar4 = bVar4 | bVar1;
    }
    else {
      bVar4 = bVar4 & ~bVar1;
    }
    *pbVar3 = bVar4;
  }
  return;
}

