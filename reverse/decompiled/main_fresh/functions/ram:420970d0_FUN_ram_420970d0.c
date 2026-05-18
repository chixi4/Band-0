
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420970d0(undefined4 param_1,int param_2,int param_3,int param_4)

{
  int iVar1;
  
  for (iVar1 = 0; iVar1 != param_3 << 2; iVar1 = iVar1 + 4) {
    *(undefined4 *)(iVar1 + 0x6003b080) = *(undefined4 *)(param_2 + iVar1);
  }
  if (param_4 != 0) {
    _DAT_ram_6003b010 = 1;
    return;
  }
  _DAT_ram_6003b014 = 1;
  return;
}

