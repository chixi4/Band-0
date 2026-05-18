
void FUN_ram_4202c868(int param_1,int param_2)

{
  int iVar1;
  
  if ((param_2 != 7) &&
     (iVar1 = FUN_ram_42032344(*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x10)),
     iVar1 != 0)) {
    return;
  }
  FUN_ram_4202fa3e(param_2,*(undefined2 *)(param_1 + 8),*(undefined2 *)(param_1 + 0x10),1);
  FUN_ram_420322d6(*(undefined2 *)(param_1 + 8));
  return;
}

