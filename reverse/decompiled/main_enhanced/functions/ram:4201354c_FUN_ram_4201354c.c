
undefined4 FUN_ram_4201354c(uint param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 extraout_a1;
  
  if (2 < param_1) {
    FUN_ram_42013334();
    param_2 = extraout_a1;
  }
  iVar1 = (*(code *)&SUB_ram_40010488)(param_2,0,0x58);
  *(undefined4 *)(iVar1 + 4) = 0x2000;
  return 0;
}

