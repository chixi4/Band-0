
void FUN_ram_42094296(void)

{
  uint uVar1;
  uint uVar2;
  
  for (uVar1 = (*(code *)&SUB_ram_40011d54)(1); uVar1 != 0; uVar1 = uVar1 & ~uVar2) {
    uVar2 = (*(code *)&SUB_ram_400108ec)(uVar1);
    FUN_ram_420941f8(uVar2 & 0xff);
    uVar2 = 1 << (uVar2 & 0x1f);
    (*(code *)&SUB_ram_40011d58)(1,uVar2);
  }
  return;
}

