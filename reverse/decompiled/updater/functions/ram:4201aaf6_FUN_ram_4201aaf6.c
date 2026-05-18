
void FUN_ram_4201aaf6(uint param_1)

{
  int iVar1;
  
  iVar1 = 0;
  for (; param_1 != 0; param_1 = param_1 >> 1) {
    if ((param_1 & 1) != 0) {
      FUN_ram_40396e4c(iVar1);
      FUN_ram_4201aac6();
      FUN_ram_4207b012(0x4200ac36,iVar1);
    }
    iVar1 = iVar1 + 1;
  }
  return;
}

