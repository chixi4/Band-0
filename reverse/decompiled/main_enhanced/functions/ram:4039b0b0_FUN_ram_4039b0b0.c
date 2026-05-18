
uint FUN_ram_4039b0b0(void)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = DAT_csreg_07e2;
  iVar2 = (*(code *)&SUB_ram_40010770)();
  return uVar1 / (uint)(iVar2 * 1000);
}

