
int FUN_ram_420a5682(int param_1)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    iVar1 = 1;
    uVar2 = *(uint *)(*(int *)(param_1 + 0x54) + 4) >> 0xc & 0xf;
    if (((uVar2 != 2) && (iVar1 = 3, (uVar2 - 6 & 0xfd) != 0)) && (uVar2 != 0xb)) {
      iVar1 = 0;
    }
  }
  if ((*(int *)(param_1 + 0x4c) == 1) && (iVar1 == 1)) {
    iVar1 = 2;
  }
  return iVar1;
}

