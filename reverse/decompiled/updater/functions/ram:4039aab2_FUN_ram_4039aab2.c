
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

bool FUN_ram_4039aab2(int param_1)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint auStack_14 [2];
  
  iVar1 = _DAT_ram_6004d000;
  if ((**(uint **)(param_1 + 0x24) & 0x400000) == 0) {
    iVar3 = *(int *)(gp + 0x5b8);
  }
  else {
    iVar3 = *(int *)(gp + 0x5b0);
  }
  auStack_14[0] = iVar3 << 10;
  FUN_ram_4039aa00(param_1,_DAT_ram_6004d000,auStack_14);
  uVar2 = iVar1 - *(int *)(*(int *)(param_1 + 0x24) + 0x18);
  return auStack_14[0] < uVar2 || auStack_14[0] - 0x1400 < uVar2;
}

