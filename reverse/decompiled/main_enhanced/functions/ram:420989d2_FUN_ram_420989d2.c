
void FUN_ram_420989d2(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    FUN_ram_4207fb20(cVar1);
    cVar1 = cVar2;
  } while (cVar2 != '\x0f');
  return;
}

