
bool FUN_ram_42098502(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_4209da36();
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4207f698(0x4208ea22);
    bVar1 = iVar2 == 0;
  }
  FUN_ram_42098a5a();
  return bVar1;
}

