
void FUN_ram_40397a56(int param_1)

{
  if (param_1 != 0) {
    FUN_ram_403980c6();
    while( true ) {
      if (*(int *)(param_1 + 4) == 0) {
        FUN_ram_40398348();
        if (*(char *)(param_1 + 0x18) == '\0') {
          thunk_FUN_ram_40390634(param_1);
          return;
        }
        return;
      }
      if (*(int *)(param_1 + 0x10) == param_1 + 0xc) break;
      FUN_ram_40398854(*(undefined4 *)(param_1 + 0x10),0x2000000);
    }
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

