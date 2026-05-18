
byte FUN_ram_420494d6(uint param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  
  if (0x8c00 < param_1) {
    iVar2 = FUN_ram_42048d56();
    uVar3 = *(uint *)(iVar2 + 0xc);
    if (param_1 < uVar3) {
      bVar1 = uVar3 < param_1 + param_2;
    }
    else {
      bVar1 = param_1 < uVar3 + *(int *)(iVar2 + 0x10);
    }
    return bVar1 ^ 1;
  }
  return 0;
}

