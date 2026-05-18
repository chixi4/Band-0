
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42049f5e(void)

{
  code *pcVar1;
  undefined4 uVar2;
  
  FUN_ram_4204db16();
  pcVar1 = *(code **)(_DAT_ram_3fcdfdd8 + 8);
  uVar2 = FUN_ram_4204d482();
  (*pcVar1)(uVar2,2,1,1);
  pcVar1 = *(code **)(_DAT_ram_3fcdfdd8 + 8);
  uVar2 = FUN_ram_4204d482();
  (*pcVar1)(uVar2,0,1,1);
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x10))(1,0x40382f1e,0);
                    /* WARNING: Could not recover jumptable at 0x42049fb6. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x14))(2);
  return;
}

