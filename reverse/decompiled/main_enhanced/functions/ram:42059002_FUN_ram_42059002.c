
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42059002(void)

{
  int iVar1;
  
  if (DAT_ram_3fcc533c == '\0') {
    if (_DAT_ram_3fcc5340 != 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e();
    }
    iVar1 = FUN_ram_42058da8();
    if (iVar1 == 0) {
      _DAT_ram_3fcc5340 = iVar1;
      return 0xffffffff;
    }
    _DAT_ram_3fcc5340 = iVar1;
    *(byte *)(iVar1 + 9) = *(byte *)(iVar1 + 9) | 0x20;
    FUN_ram_420589c8(iVar1,&DAT_ram_3c0f7590,0x44);
    FUN_ram_42058ce6(_DAT_ram_3fcc5340,&DAT_ram_3c0f7590,0x43);
    FUN_ram_42058d70(_DAT_ram_3fcc5340,0x420499f2,0);
  }
  DAT_ram_3fcc533c = DAT_ram_3fcc533c + '\x01';
  return 0;
}

