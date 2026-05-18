
int FUN_ram_42010ba4(int param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_42010954();
  if (iVar1 != 0) {
    if ((*(int *)(param_1 + 0x88) - 1U < 2) || (*(int *)(param_1 + 0x88) == 5)) {
      *(undefined4 *)(param_1 + 0x88) = 0x19;
    }
    else {
      iVar1 = 0;
    }
  }
  return iVar1;
}

