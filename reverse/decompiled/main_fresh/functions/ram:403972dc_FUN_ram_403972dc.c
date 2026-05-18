
undefined4 FUN_ram_403972dc(int param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_40396f58();
  }
  iVar1 = *(int *)(param_1 + 8);
  iVar2 = FUN_ram_403989ea();
  uVar3 = 0;
  if (iVar1 == iVar2) {
    iVar1 = *(int *)(param_1 + 0xc) + -1;
    *(int *)(param_1 + 0xc) = iVar1;
    if (iVar1 == 0) {
      FUN_ram_40397156(param_1,0,0,0);
    }
    uVar3 = 1;
  }
  return uVar3;
}

