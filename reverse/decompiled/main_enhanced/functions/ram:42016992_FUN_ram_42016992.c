
undefined4 FUN_ram_42016992(int param_1,int param_2,uint param_3)

{
  int iVar1;
  
  iVar1 = 0;
  do {
    if (*(byte *)(param_1 + iVar1) != param_3) {
      return 0;
    }
    iVar1 = iVar1 + 1;
  } while (param_2 != iVar1);
  return 1;
}

