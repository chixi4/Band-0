
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207863e(int param_1)

{
  byte bVar1;
  undefined4 uVar2;
  code *UNRECOVERED_JUMPTABLE;
  
  bVar1 = **(byte **)(*(int *)(param_1 + 4) + 4);
  if ((bVar1 & 0xc) == 0) {
    if ((bVar1 & 0xf0) == 0x80) {
      uVar2 = 4;
      UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x19c);
    }
    else {
      if (((bVar1 & 0xf0) + 0x60 & 0xd0) != 0) {
        return;
      }
      uVar2 = 7;
      UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x19c);
    }
  }
  else {
    if (((bVar1 & 0xc) != 8) || ((bVar1 & 0x70) != 0x40)) {
      return;
    }
    uVar2 = 9;
    UNRECOVERED_JUMPTABLE = *(code **)(_DAT_ram_3fcdfdd8 + 0x19c);
  }
                    /* WARNING: Could not recover jumptable at 0x42078666. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar2);
  return;
}

