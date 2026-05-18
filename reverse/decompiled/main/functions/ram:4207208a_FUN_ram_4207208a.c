
int FUN_ram_4207208a(int param_1,undefined4 param_2)

{
  int iVar1;
  
  do {
    iVar1 = FUN_ram_42068514(param_2,param_1 + 4);
    if (iVar1 < 0) {
      return 0;
    }
    iVar1 = FUN_ram_42068692(param_2,param_2,param_1 + 4);
  } while (iVar1 == 0);
  return iVar1;
}

