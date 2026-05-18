
void FUN_ram_40398abe(int *param_1,int param_2)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 auStack_24 [4];
  
  iVar2 = *(int *)(param_2 + 0x20);
  if (iVar2 != 0) {
    iVar4 = *param_1;
    uVar3 = *(uint *)(param_2 + 0x10);
    for (uVar1 = 0; uVar1 < uVar3; uVar1 = uVar1 + 0x20) {
      FUN_ram_40399daa(auStack_24,((int)uVar1 >> 3) + iVar2,4);
      *(undefined4 *)((((int)uVar1 >> 5) + 0x24) * 4 + iVar4 + 8) = auStack_24[0];
    }
  }
  return;
}

