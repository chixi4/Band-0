
void FUN_ram_42097110(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 5;
  if (param_1 != 0) {
    iVar1 = (uint)(param_1 - 1U < 2) << 3;
  }
  FUN_ram_42097104();
  for (iVar2 = 0; iVar2 != iVar1 << 2; iVar2 = iVar2 + 4) {
    *(undefined4 *)(param_2 + iVar2) = *(undefined4 *)(iVar2 + 0x6003b040);
  }
  iVar2 = 0;
  while( true ) {
    if (iVar2 == iVar1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    if (*(int *)(iVar2 * 4 + param_2) != 0) break;
    iVar2 = iVar2 + 1;
  }
  return;
}

