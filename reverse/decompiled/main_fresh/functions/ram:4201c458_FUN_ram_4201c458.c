
undefined4 FUN_ram_4201c458(undefined4 *param_1,ushort *param_2)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  
  pbVar2 = (byte *)*param_1;
  bVar1 = *pbVar2;
  if (bVar1 == 0) {
    return 0;
  }
  if ((char)bVar1 < '\0') {
    if ((bVar1 & 0xe0) == 0xc0) {
      *param_2 = (bVar1 & 0x1f) << 6 | pbVar2[1] & 0x3f;
      pbVar3 = pbVar2 + 2;
    }
    else {
      if ((bVar1 & 0xf0) != 0xe0) {
        *param_1 = pbVar2 + 1;
        return 0;
      }
      pbVar3 = pbVar2 + 3;
      *param_2 = (ushort)bVar1 << 0xc | pbVar2[2] & 0x3f | (pbVar2[1] & 0x3f) << 6;
    }
  }
  else {
    *param_2 = (ushort)bVar1;
    pbVar3 = pbVar2 + 1;
  }
  *param_1 = pbVar3;
  return 1;
}

