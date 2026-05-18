
uint FUN_ram_4204965c(uint *param_1,char *param_2,int param_3)

{
  uint uVar1;
  uint uVar2;
  
  if ((param_1 == (uint *)0x0) || (param_2 == (char *)0x0)) {
    return 0xffffffff;
  }
  if (*param_2 == '\0') {
    return (uint)(param_2[1] != '\0') * 2 - 1;
  }
  if (param_2[1] == '\0') {
    return 0;
  }
  uVar1 = param_1[8];
  uVar2 = *param_1;
  if (param_3 == 0) {
    if (uVar1 <= uVar2) goto LAB_ram_42049690;
  }
  else if (uVar2 <= uVar1) goto LAB_ram_42049690;
  uVar1 = uVar2;
LAB_ram_42049690:
  return (uint)(uVar1 != uVar2);
}

