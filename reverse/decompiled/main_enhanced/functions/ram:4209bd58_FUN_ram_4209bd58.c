
void FUN_ram_4209bd58(int param_1)

{
  int iVar1;
  uint local_20;
  uint uStack_1c;
  
  FUN_ram_4206031c(&local_20);
  while (iVar1 = *(int *)(param_1 + 0x200), iVar1 != 0) {
    if (uStack_1c < *(uint *)(iVar1 + 100)) break;
    if (*(uint *)(iVar1 + 100) == uStack_1c) {
      if (local_20 < *(uint *)(iVar1 + 0x60)) break;
    }
    FUN_ram_4209bcec(param_1);
  }
  FUN_ram_4209bc98(param_1);
  return;
}

