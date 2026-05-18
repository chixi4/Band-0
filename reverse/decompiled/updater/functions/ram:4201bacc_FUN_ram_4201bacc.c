
void FUN_ram_4201bacc(int param_1)

{
  int iVar1;
  
  iVar1 = param_1 + 0xc;
  do {
    fence();
    fence();
    iVar1 = iVar1 + 4;
  } while (iVar1 != param_1 + 0x24);
  thunk_FUN_ram_40390608();
  return;
}

