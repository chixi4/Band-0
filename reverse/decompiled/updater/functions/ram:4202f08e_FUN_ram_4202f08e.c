
void FUN_ram_4202f08e(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = param_2 * 8 + param_1;
  for (; param_1 != iVar1; param_1 = param_1 + 8) {
    FUN_ram_4202476a();
  }
  return;
}

