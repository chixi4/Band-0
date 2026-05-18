
void FUN_ram_42013686(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 < 2) && (iVar1 = *(int *)(param_1 * 4 + 0x3fcc4f10), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x54) = param_2;
  }
  return;
}

