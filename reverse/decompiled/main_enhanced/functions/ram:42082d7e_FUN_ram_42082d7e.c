
bool FUN_ram_42082d7e(int param_1)

{
  bool bVar1;
  int in_a5;
  
  bVar1 = *(int *)(in_a5 + 0x14) != 0;
  if (bVar1) {
    FUN_ram_420776f2(*(undefined4 *)(param_1 + 4));
  }
  else {
    FUN_ram_4207a038(1,0x10000,3,&DAT_ram_3c0ffcf8,&DAT_ram_3c0fa9c4);
  }
  return bVar1;
}

