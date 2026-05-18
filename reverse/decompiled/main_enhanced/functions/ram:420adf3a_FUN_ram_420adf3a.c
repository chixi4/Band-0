
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420adf3a(void)

{
  uint uVar1;
  uint uVar2;
  
  DAT_ram_3fcb8086 = 0x4f;
  DAT_ram_3fcb8085 = 0x4f;
  uVar1 = 0;
  do {
    uVar2 = uVar1 & 0xff;
    uVar1 = uVar1 + 1;
    (**(code **)(_DAT_ram_3fcc4c78 + 0xf8))(0x10080000,0x4020,0,uVar2);
  } while (uVar1 != 0x4f);
  (*(code *)&SUB_ram_4001232c)();
                    /* WARNING: Could not recover jumptable at 0x420adfa2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcc4c78 + 0xec))();
  return;
}

