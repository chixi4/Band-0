
bool FUN_ram_4205d9ec(void)

{
  bool bVar1;
  int iVar2;
  
  iVar2 = FUN_ram_42063916();
  bVar1 = false;
  if (iVar2 != 0) {
    iVar2 = FUN_ram_4203943e(0x4205499c);
    bVar1 = iVar2 == 0;
  }
  FUN_ram_4205de0a();
  return bVar1;
}

