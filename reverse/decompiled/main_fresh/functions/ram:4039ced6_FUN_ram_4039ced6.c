
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039ced6(int param_1)

{
  uint *puVar1;
  int iVar2;
  int iVar3;
  
  puVar1 = *(uint **)(param_1 + 0x24);
  if ((*puVar1 & 0x20) == 0) {
    if ((*puVar1 & 0x400000) == 0) {
      iVar3 = *(int *)(gp + 0x6ec);
      iVar2 = *(int *)(gp + 0x6f0);
    }
    else {
      iVar3 = *(int *)(gp + 0x6e4);
      iVar2 = *(int *)(gp + 0x6e8);
    }
    if ((uint)((iVar3 - iVar2) * 0x400) < _DAT_ram_6004d000 - puVar1[6]) {
      puVar1[6] = _DAT_ram_6004d000 + (iVar3 - iVar2) * -0x400;
    }
  }
  return;
}

