
void FUN_ram_420adfec(byte *param_1,uint param_2,int param_3)

{
  byte bVar1;
  byte bVar2;
  uint uVar3;
  
  uVar3 = param_2 >> 6;
  if (param_3 == 0) {
    bVar1 = (byte)uVar3 & 0x1f;
    if ((uVar3 & 0x10) != 0) {
      bVar1 = bVar1 - 0x20;
    }
  }
  else {
    bVar1 = (byte)uVar3 & 0x3f;
    if ((uVar3 & 0x20) != 0) {
      bVar1 = bVar1 - 0x40;
    }
  }
  bVar2 = (byte)param_2 & 0x3f;
  *param_1 = bVar1;
  if ((param_2 & 0x20) != 0) {
    bVar2 = bVar2 - 0x40;
  }
  param_1[1] = bVar2;
  return;
}

