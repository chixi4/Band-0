
void FUN_ram_42014602(uint param_1,undefined4 param_2)

{
  int iVar1;
  
  if ((param_1 < 2) && (iVar1 = *(int *)(param_1 * 4 + 0x3fcb6670), iVar1 != 0)) {
    *(undefined4 *)(iVar1 + 0x54) = param_2;
  }
  return;
}

