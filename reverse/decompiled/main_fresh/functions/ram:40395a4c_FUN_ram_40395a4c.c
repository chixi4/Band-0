
undefined8 FUN_ram_40395a4c(uint param_1,int param_2,uint param_3)

{
  uint uVar1;
  
  uVar1 = param_2 * param_3 + (int)((ulonglong)param_3 * (ulonglong)param_1 >> 0x20);
  return CONCAT44(uVar1 >> 0x13,uVar1 * 0x2000 | param_3 * param_1 >> 0x13);
}

