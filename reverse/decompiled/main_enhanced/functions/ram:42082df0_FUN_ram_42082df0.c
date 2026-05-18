
bool FUN_ram_42082df0(void)

{
  bool bVar1;
  int in_a5;
  
  bVar1 = *(int *)(in_a5 + 0x14) != 0;
  if (bVar1) {
    FUN_ram_42086de2();
  }
  else {
    FUN_ram_4207a038(1,0x10000,3,&DAT_ram_3c0ffd1c,&DAT_ram_3c0fa988);
  }
  return bVar1;
}

