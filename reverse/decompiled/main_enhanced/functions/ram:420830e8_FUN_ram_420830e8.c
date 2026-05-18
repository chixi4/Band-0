
bool FUN_ram_420830e8(int param_1)

{
  bool bVar1;
  int in_a5;
  
  bVar1 = *(int *)(in_a5 + 0x10) != 0;
  if (bVar1) {
    FUN_ram_4208f1e2(*(undefined4 *)(param_1 + 4));
  }
  else {
    FUN_ram_4207a038(1,0x10000,3,&DAT_ram_3c0ffd64,&DAT_ram_3c0faa18);
  }
  return bVar1;
}

