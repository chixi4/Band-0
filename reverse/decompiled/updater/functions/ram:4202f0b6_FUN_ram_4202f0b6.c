
void FUN_ram_4202f0b6(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 8 + param_1;
  for (; param_1 != iVar1; param_1 = param_1 + 8) {
    FUN_ram_42024774();
  }
  return;
}

