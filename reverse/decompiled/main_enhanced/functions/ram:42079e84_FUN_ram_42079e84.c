
bool FUN_ram_42079e84(int param_1)

{
  bool bVar1;
  byte bVar2;
  byte *pbVar3;
  
  pbVar3 = *(byte **)(*(int *)(param_1 + 4) + 4);
  if ((**(uint **)(param_1 + 0x24) & 0x40000) != 0) {
    pbVar3 = pbVar3 + 8;
  }
  bVar1 = false;
  if ((*pbVar3 & 0xc) == 0) {
    bVar2 = *pbVar3 & 0xf0;
    if ((bVar2 + 0x60 & 0xd0) == 0) {
      bVar1 = true;
    }
    else if (bVar2 == 0xd0) {
      bVar1 = true;
      if (pbVar3[(**(uint **)(param_1 + 0x24) & 1) * 8 + 0x18] == 8) {
        return (pbVar3 + (**(uint **)(param_1 + 0x24) & 1) * 8 + 0x18)[1] != 1;
      }
    }
  }
  return bVar1;
}

