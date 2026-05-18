
void FUN_ram_4201b5f8(int param_1)

{
  int iVar1;
  int iVar2;
  short sVar3;
  
  iVar1 = 0;
  do {
    iVar2 = 0;
    do {
      sVar3 = (short)iVar2;
      iVar2 = iVar2 + 1;
      FUN_ram_4201f246((int)sVar3,(param_1 + iVar1) * 0x10000 >> 0x10,3);
    } while (iVar2 != 200);
    iVar1 = iVar1 + 1;
  } while (iVar1 != 0x28);
  return;
}

