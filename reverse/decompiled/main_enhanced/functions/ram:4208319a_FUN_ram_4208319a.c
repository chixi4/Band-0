
bool FUN_ram_4208319a(void)

{
  bool bVar1;
  int in_a5;
  
  bVar1 = *(int *)(in_a5 + 0x14) != 0;
  if (bVar1) {
    FUN_ram_42076454(0);
  }
  else {
    FUN_ram_4207a038(1,0x10000,3,&DAT_ram_3c0ffbb4,&DAT_ram_3c0fa8e0);
  }
  return bVar1;
}

