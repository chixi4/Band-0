
void FUN_ram_42010cee(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  
  uVar1 = param_1[0x22];
  param_2[1] = 4;
  *param_2 = 0;
  if ((uVar1 < 0x10) && (*(int *)(&DAT_ram_3c0c55f0 + uVar1 * 4) != 0)) {
    param_2[2] = *(int *)(&DAT_ram_3c0c55f0 + uVar1 * 4);
  }
  param_2[3] = 0x3c0a830c;
  param_2[6] = *param_1;
  return;
}

