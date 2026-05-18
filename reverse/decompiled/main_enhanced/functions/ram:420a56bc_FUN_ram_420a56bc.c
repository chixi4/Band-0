
undefined4 FUN_ram_420a56bc(int param_1,int param_2)

{
  int iVar1;
  uint uVar2;
  
  iVar1 = FUN_ram_4206a944(*(undefined1 *)(param_2 + 8));
  if (iVar1 != 0) {
    uVar2 = *(uint *)(iVar1 + 4) >> 0xc & 0xf;
    if (uVar2 == 2) {
      if (param_1 == 1) {
        return 2;
      }
      return 1;
    }
    if (((uVar2 - 6 & 0xfd) == 0) || (uVar2 == 0xb)) {
      return 3;
    }
  }
  return 0;
}

