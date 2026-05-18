
void FUN_ram_42027292(int param_1,int *param_2)

{
  int iVar1;
  
  iVar1 = FUN_ram_420271ce(*(undefined2 *)(param_1 + 10),param_1 + 0x5e);
  *param_2 = iVar1;
  if (iVar1 == 0) {
    *(undefined1 *)(param_1 + 0xd) = 5;
  }
  else {
    *(byte *)(param_2 + 5) = *(byte *)(param_2 + 5) | 2;
  }
  return;
}

