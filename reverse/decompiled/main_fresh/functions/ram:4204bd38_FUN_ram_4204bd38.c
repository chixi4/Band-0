
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204bd38(int param_1,undefined4 *param_2)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcc1e98;
  while( true ) {
    if (iVar1 == 0) {
      return 0x1107;
    }
    if (param_1 == *(int *)(iVar1 + 0xc)) break;
    iVar1 = *(int *)(iVar1 + 4);
  }
  *param_2 = *(undefined4 *)(iVar1 + 8);
  return 0;
}

