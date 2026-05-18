
undefined1 * FUN_ram_420740fa(undefined1 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(gp + -0xb4);
  *param_1 = 0x24;
  param_1[1] = 0;
  iVar2 = FUN_ram_42079402();
  if (iVar2 == 1) {
    param_1[2] = *(undefined1 *)(iVar1 + 0x407);
    param_1[3] = *(undefined1 *)(iVar1 + 0x408);
    param_1[1] = param_1[1] + '\x02';
  }
  return param_1 + (byte)param_1[1] + 2;
}

