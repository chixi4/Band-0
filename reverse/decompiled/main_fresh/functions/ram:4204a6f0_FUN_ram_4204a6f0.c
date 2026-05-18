
void FUN_ram_4204a6f0(void)

{
  FUN_ram_420b5390(0x40382460,0);
  FUN_ram_40390b18(0x18);
  (*(code *)&SUB_ram_400107e4)(0,0x18);
  (*(code *)&SUB_ram_400107dc)(0x18,0);
  (*(code *)&SUB_ram_400107cc)(0x18,4);
  FUN_ram_40390a80(0x18);
  return;
}

