
void FUN_ram_4201ff9a(char *param_1,uint param_2)

{
  int iVar1;
  
  FUN_ram_4201fe48(0x50);
  if (param_1 == (char *)0x0) {
    iVar1 = 0x47;
    if (param_2 == 0xffffffff) goto LAB_ram_4201ffbe;
    param_2 = param_2 >> 1;
  }
  else {
    param_2 = (int)*param_1 >> 0x1f;
  }
  iVar1 = (param_2 & 0x40) + 0x47;
LAB_ram_4201ffbe:
  FUN_ram_4201fe50(iVar1);
  return;
}

