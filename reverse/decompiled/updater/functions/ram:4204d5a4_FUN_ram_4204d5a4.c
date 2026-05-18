
void FUN_ram_4204d5a4(int param_1,int param_2,int param_3,int param_4)

{
  uint *puVar1;
  int iVar2;
  
  iVar2 = param_1 * -0x24;
  puVar1 = (uint *)(iVar2 + 0x600471b8);
  if ((int)*puVar1 < 0) {
    param_1 = param_1 * 4;
    *puVar1 = *puVar1 & 0x7fffffff;
    *(undefined4 *)(iVar2 + 0x600471c8) = *(undefined4 *)(param_3 + param_1);
    *(undefined4 *)(iVar2 + 0x600471cc) = *(undefined4 *)(param_4 + param_1);
    *(uint *)(iVar2 + 0x600471c4) =
         *(uint *)(param_2 + param_1) & 0xfff | *(uint *)(iVar2 + 0x600471c4) & 0xfffff000;
    *puVar1 = *puVar1 | 0x80000000;
  }
  return;
}

