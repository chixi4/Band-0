
void FUN_ram_42012280(undefined4 param_1,uint param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  
  *param_3 = 1;
  iVar2 = 2;
  param_3[1] = 2;
  if ((0x42U >> (param_2 & 0x1f) & 1) == 0) {
    iVar2 = param_2 * 4 + 0x40380000;
    iVar1 = FUN_ram_42017d1a(iVar2);
    iVar2 = (uint)(iVar2 + iVar1 != 0x403801d8) << 1;
  }
  param_3[2] = iVar2;
  return;
}

