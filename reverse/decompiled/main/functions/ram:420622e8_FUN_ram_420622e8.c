
void FUN_ram_420622e8(int param_1,int param_2)

{
  int iVar1;
  
  iVar1 = *(int *)((param_1 * 6 + param_2) * 4 + 0x3fcc26e4);
  if (iVar1 != 0) {
    FUN_ram_40397156(*(undefined4 *)(iVar1 + 0x18),0,0,0);
    return;
  }
  return;
}

