
void FUN_ram_40398b0e(int *param_1)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  undefined4 auStack_24 [2];
  
  iVar4 = param_1[0xb];
  if (iVar4 != 0) {
    iVar5 = *param_1;
    uVar2 = param_1[7];
    for (uVar1 = 0; uVar1 < uVar2; uVar1 = uVar1 + 0x20) {
      auStack_24[0] = *(undefined4 *)((((int)uVar1 >> 5) + 0x24) * 4 + iVar5 + 8);
      iVar3 = uVar2 - uVar1;
      if (0x20 < iVar3) {
        iVar3 = 0x20;
      }
      FUN_ram_40399daa(((int)uVar1 >> 3) + iVar4,auStack_24,(iVar3 + 7) / 8);
    }
  }
  return;
}

