
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204b2f2(undefined4 param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined4 *puVar5;
  
  iVar1 = _DAT_ram_3fcc521c;
  puVar5 = (undefined4 *)&DAT_ram_3fcc1d90;
  iVar2 = 0;
  while( true ) {
    if (iVar1 == iVar2) {
      return;
    }
    if ((iVar2 != 0) &&
       (*(uint *)(&DAT_ram_3fcc1d94 + iVar2 * 8) >> 3 <=
        *(uint *)(&DAT_ram_3fcc1d94 + (iVar2 - 1U >> 1) * 8) >> 3)) break;
    uVar3 = *puVar5;
    puVar5 = puVar5 + 2;
    iVar4 = FUN_ram_4039c438(uVar3,param_1);
    if (iVar4 == 0) {
      *(uint *)(&DAT_ram_3fcc1d94 + iVar2 * 8) =
           *(uint *)(&DAT_ram_3fcc1d94 + iVar2 * 8) & 0xfffffff8 | param_2 & 7;
      return;
    }
    iVar2 = iVar2 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

