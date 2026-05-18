
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40398f56(void)

{
  int iVar1;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 auStack_14 [2];
  
  uStack_1c = 0;
  uStack_18 = 0;
  FUN_ram_40396adc(&uStack_1c,&uStack_18,auStack_14);
  _DAT_ram_3fcc4e68 =
       FUN_ram_40398eaa(0x403884d0,0x3c0a85b4,auStack_14[0],0,0,uStack_18,uStack_1c,0);
  if (_DAT_ram_3fcc4e68 != 0) {
    iVar1 = FUN_ram_40398f52();
    if (iVar1 == 1) {
      FUN_ram_4039693c();
      _DAT_ram_3fcc4e6c = 0xffffffff;
      _DAT_ram_3fcc4e88 = 0;
      _DAT_ram_3fcc4e80 = iVar1;
      FUN_ram_40396a1c();
    }
    else if (iVar1 == -1) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_40397dfa();
    }
  }
  return;
}

