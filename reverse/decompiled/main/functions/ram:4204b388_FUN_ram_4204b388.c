
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204b388(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = _DAT_ram_3fcc521c;
  iVar2 = 0;
  piVar3 = (int *)&DAT_ram_3fcc1d90;
  if (_DAT_ram_3fcc521c == 0) {
    _DAT_ram_3fcc5218 = _DAT_ram_3fcc5218 + 1;
    return 0;
  }
  do {
    if ((iVar2 != 0) &&
       (*(uint *)(&DAT_ram_3fcc1d94 + iVar2 * 8) >> 3 <=
        *(uint *)(&DAT_ram_3fcc1d94 + (iVar2 - 1U >> 1) * 8) >> 3)) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    iVar5 = *piVar3;
    piVar3 = piVar3 + 2;
    if (iVar5 == param_1) {
      iVar2 = iVar2 * 8;
      *param_2 = *(uint *)(&DAT_ram_3fcc1d94 + iVar2) & 7;
      if (iVar1 == 0x1f) {
        iVar1 = _DAT_ram_3fcc5220 + 1;
        uVar4 = _DAT_ram_3fcc5220 << 3;
        _DAT_ram_3fcc5220 = iVar1;
        *(uint *)(&DAT_ram_3fcc1d94 + iVar2) = *(uint *)(&DAT_ram_3fcc1d94 + iVar2) & 7 | uVar4;
        FUN_ram_4204b288();
        if (iVar1 == 0x1fffffff) {
          FUN_ram_4204b256();
        }
      }
      return 1;
    }
    iVar2 = iVar2 + 1;
  } while (_DAT_ram_3fcc521c != iVar2);
  _DAT_ram_3fcc5218 = _DAT_ram_3fcc5218 + 1;
  return 0;
}

