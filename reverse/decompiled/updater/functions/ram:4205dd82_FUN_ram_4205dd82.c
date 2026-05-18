
void FUN_ram_4205dd82(void)

{
  char cVar1;
  char cVar2;
  
  cVar1 = '\0';
  do {
    cVar2 = cVar1 + '\x01';
    FUN_ram_420396f4(cVar1);
    cVar1 = cVar2;
  } while (cVar2 != '\x0f');
  return;
}

