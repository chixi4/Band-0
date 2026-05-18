
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42085f52(void)

{
  int iVar1;
  
  iVar1 = _DAT_ram_3fcc4014;
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fca98);
  if (iVar1 == 0) {
    FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fcaa8);
    return;
  }
  if (*(int *)(iVar1 + 0x98) != 0) {
    DAT_ram_3fcc3fa6 = 1;
    FUN_ram_42089514(&DAT_ram_3fcc4004,0,0x2700);
    DAT_ram_3fcc3fa6 = 0;
  }
  FUN_ram_4208589e(0);
  return;
}

