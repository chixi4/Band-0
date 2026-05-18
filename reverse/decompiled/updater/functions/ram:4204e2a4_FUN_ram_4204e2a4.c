
void FUN_ram_4204e2a4(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  
  iVar1 = 5;
  if (param_1 != 0) {
    iVar1 = (uint)(param_1 - 1U < 2) << 3;
  }
  for (iVar2 = 0; iVar2 != iVar1 << 2; iVar2 = iVar2 + 4) {
    *(undefined4 *)(iVar2 + 0x6003b040) = *(undefined4 *)(param_2 + iVar2);
  }
  return;
}

