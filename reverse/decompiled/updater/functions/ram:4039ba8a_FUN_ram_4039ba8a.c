
bool FUN_ram_4039ba8a(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  
  pbVar2 = *(byte **)(*(int *)(param_1 + 4) + 4);
  if ((*pbVar2 & 4) == 0) {
    bVar1 = true;
    if ((pbVar2[1] & 4) == 0) {
      return (*(ushort *)(pbVar2 + 0x16) & 0xf) != 0;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}

