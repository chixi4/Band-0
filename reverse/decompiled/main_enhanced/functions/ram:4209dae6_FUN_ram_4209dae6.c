
void FUN_ram_4209dae6(void)

{
  int unaff_retaddr;
  int unaff_s0;
  
  (*(code *)(unaff_retaddr - 0x65aU & 0xfffffffe))();
  *(undefined4 *)(unaff_s0 + 0x118) = 0;
  (*(code *)&SUB_ram_40010488)(unaff_s0 + 0xac,0,0x68);
  (*(code *)&SUB_ram_40010488)(unaff_s0 + 0x174,0,0x24);
  (*(code *)&SUB_ram_40010488)(unaff_s0 + 0x198,0,0x24);
  return;
}

