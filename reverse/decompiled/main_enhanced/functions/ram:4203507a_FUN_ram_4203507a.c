
void FUN_ram_4203507a(int param_1,int param_2)

{
  int iVar1;
  
  for (iVar1 = 0; (char)iVar1 < param_2; iVar1 = iVar1 + 1) {
    *(undefined4 *)(iVar1 * 4 + param_1) = 0;
  }
  return;
}

