
void FUN_ram_4206373c(int param_1)

{
  int iVar1;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x1c0);
  if (iVar1 != 0) {
    *(undefined4 *)(param_1 + 0x40) = *(undefined4 *)(iVar1 + 0x54);
    FUN_ram_40399daa(param_1,iVar1 + 0x14);
    return;
  }
  *(undefined4 *)(param_1 + 0x40) = 0x40;
  (*(code *)&SUB_ram_40010488)(param_1,0);
  return;
}

