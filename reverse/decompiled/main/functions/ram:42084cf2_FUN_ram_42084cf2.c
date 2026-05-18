
undefined4 FUN_ram_42084cf2(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else if (DAT_ram_3fcc41a9 < 2) {
    uVar2 = 0x3002;
  }
  else {
    DAT_ram_3fcc41db = 1;
    uVar2 = 0;
  }
  return uVar2;
}

