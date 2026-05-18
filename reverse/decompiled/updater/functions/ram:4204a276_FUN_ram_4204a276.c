
bool FUN_ram_4204a276(int param_1)

{
  bool bVar1;
  byte *pbVar2;
  uint uVar3;
  
  if (((*(uint **)(param_1 + 0x24))[4] >> 0x13 & 1) != 0) {
    return false;
  }
  uVar3 = **(uint **)(param_1 + 0x24);
  if ((uVar3 & 0x200000) == 0) {
    bVar1 = false;
    if (((*(int *)(param_1 + 0x1c) != 0) && (-1 < *(char *)(*(int *)(param_1 + 0x1c) + 0xb))) &&
       (bVar1 = true, (uVar3 & 0x2000) == 0)) {
      pbVar2 = *(byte **)(*(int *)(param_1 + 4) + 4);
      if ((uVar3 & 0x40000) != 0) {
        pbVar2 = pbVar2 + 8;
      }
      return (*pbVar2 & 0xc) == 0;
    }
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

