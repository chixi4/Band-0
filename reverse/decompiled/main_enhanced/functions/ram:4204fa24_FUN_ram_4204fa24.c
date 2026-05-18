
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204fa24(void)

{
  int iVar1;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined *puStack_18;
  undefined4 uStack_14;
  
  uStack_24 = 0x4203f95e;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_14 = 0;
  puStack_18 = &DAT_ram_3c0c2bc0;
  iVar1 = FUN_ram_4204bbc4(&uStack_24,&DAT_ram_3fcc5298);
  if ((iVar1 == 0) && (iVar1 = FUN_ram_40392f42(_DAT_ram_3fcc5298,1000000,0), iVar1 == 0)) {
    return;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

