
void FUN_ram_42010c56(undefined4 *param_1,undefined4 *param_2)

{
  uint uVar1;
  int iVar2;
  
  uVar1 = param_1[0x22];
  param_2[1] = 4;
  *param_2 = 0;
  if ((uVar1 < 0x10) && (iVar2 = *(int *)(uVar1 * 4 + 0x3c074688), iVar2 != 0)) {
    param_2[2] = iVar2;
  }
  param_2[3] = 0x3c0702f8;
  param_2[6] = *param_1;
  return;
}

