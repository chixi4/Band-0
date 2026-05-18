
undefined4 FUN_ram_420476e0(char *param_1)

{
  char *unaff_s0;
  undefined *unaff_s1;
  int iVar1;
  
  if (param_1 == (char *)0x0) {
    FUN_ram_42046b52();
    goto LAB_ram_42047706;
  }
  unaff_s1 = &DAT_ram_3c0c3000;
  while( true ) {
    unaff_s0 = param_1;
    if (*param_1 == '\0') {
      return 1;
    }
LAB_ram_42047706:
    iVar1 = (*(code *)&SUB_ram_40010514)(unaff_s1 + -0x5f8);
    if (iVar1 == 0) break;
    param_1 = unaff_s0 + 1;
  }
  return 0;
}

