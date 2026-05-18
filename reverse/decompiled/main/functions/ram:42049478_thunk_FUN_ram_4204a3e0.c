
void thunk_FUN_ram_4204a3e0(int *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 0;
  while( true ) {
    if (param_1[1] <= iVar1) {
      thunk_FUN_ram_40390634();
      thunk_FUN_ram_40390634(param_1);
      return;
    }
    iVar2 = FUN_ram_4204a1c8(*(undefined4 *)(*param_1 + iVar1 * 4));
    if (iVar2 == 0x105) break;
    iVar1 = iVar1 + 1;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

