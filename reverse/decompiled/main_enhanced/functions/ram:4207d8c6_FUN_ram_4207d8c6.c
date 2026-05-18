
bool FUN_ram_4207d8c6(int param_1)

{
  bool bVar1;
  char cVar2;
  char cVar3;
  
  cVar2 = *(char *)(param_1 + 0x18c);
  FUN_ram_4207a038(1,0x40000,4,&DAT_ram_3c0fc4b8,&DAT_ram_3c0fa84c);
  cVar3 = '\0';
  if (*(short *)(param_1 + 0x214) != 0) {
    cVar3 = '\x03';
  }
  bVar1 = cVar3 != cVar2;
  if (bVar1) {
    *(char *)(param_1 + 0x18c) = cVar3;
  }
  return bVar1;
}

