
void FUN_ram_40390994(int param_1)

{
  uint *puVar1;
  
  puVar1 = *(uint **)(param_1 + 8);
  FUN_ram_40396966();
  for (; puVar1 != (uint *)0x0; puVar1 = (uint *)puVar1[5]) {
    if (((*puVar1 & 1) == 0) &&
       (((uint *)puVar1[1] == (uint *)0x0 || ((*(uint *)puVar1[1] & puVar1[2]) != 0)))) {
      (*(code *)puVar1[3])(puVar1[4]);
    }
  }
  FUN_ram_40396994();
  return;
}

