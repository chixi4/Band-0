
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42048d56(void)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
  if (_DAT_ram_3fcc51d4 != 0) {
    return _DAT_ram_3fcc51d4;
  }
  uVar1 = FUN_ram_4204a45e(0x42038d56);
  if ((uVar1 != 0xffffffff) && (iVar2 = FUN_ram_42049162(0,0xff,0), iVar2 != 0)) {
    while( true ) {
      iVar3 = FUN_ram_420491fa(iVar2);
      if ((*(uint *)(iVar3 + 0xc) <= uVar1) &&
         (uVar1 < *(uint *)(iVar3 + 0xc) + *(int *)(iVar3 + 0x10))) break;
      iVar2 = FUN_ram_420490c4(iVar2);
      if (iVar2 == 0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
    }
    thunk_FUN_ram_40390634();
    _DAT_ram_3fcc51d4 = iVar3;
    return iVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

