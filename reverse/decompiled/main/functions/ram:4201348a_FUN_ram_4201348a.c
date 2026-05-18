
undefined4 FUN_ram_4201348a(uint param_1)

{
  int iVar1;
  
  if (2 < param_1) {
    param_1 = FUN_ram_42013334();
  }
  iVar1 = *(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20);
  FUN_ram_403917e6(iVar1 + 0xc);
  (*(code *)&SUB_ram_40010074)(param_1 & 0xff);
  FUN_ram_403917fc(iVar1 + 0xc);
  return 0;
}

