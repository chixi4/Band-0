
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204a630(void)

{
  int iVar1;
  
  iVar1 = FUN_ram_40394a24(4);
  if (iVar1 == 0) {
    _DAT_ram_600c0010 = _DAT_ram_600c0010 | 0x2000;
    _DAT_ram_600c0018 = _DAT_ram_600c0018 & 0xffffdfff;
    _DAT_ram_6001f048 = _DAT_ram_6001f048 & 0xffffbfff;
  }
  FUN_ram_40394a46(4,iVar1);
  (*(code *)&SUB_ram_4001027c)(0x3fcc51f8,1,20000);
  (*(code *)&SUB_ram_40010288)(0x3fcc51f8);
  (*(code *)&SUB_ram_40010284)(0x3fcc51f8,0,10000,1);
  (*(code *)&SUB_ram_40010284)(0x3fcc51f8,1,10000,3);
  (*(code *)&SUB_ram_40010290)(0x3fcc51f8);
  (*(code *)&SUB_ram_4001028c)(0x3fcc51f8);
  return;
}

