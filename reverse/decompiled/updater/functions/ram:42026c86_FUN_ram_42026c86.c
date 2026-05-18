
int FUN_ram_42026c86(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = 1;
  if (0x4f < (uint)(param_2 << 5)) {
    iVar1 = 3;
  }
  return ((1 << iVar1) + 3) * param_1 + 1;
}

