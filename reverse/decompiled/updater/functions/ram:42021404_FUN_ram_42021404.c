
undefined4 FUN_ram_42021404(int param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 0x39) & 1) != 0) {
      if ((*(uint *)(iVar1 + 0x50) & 2) != 0) {
        return 0x106;
      }
      if ((*(uint *)(iVar1 + 0x50) & 1) != 0) {
        FUN_ram_4205791c(iVar2);
        thunk_FUN_ram_420574e6(iVar2);
        FUN_ram_42057234(iVar2);
        *(undefined4 *)(iVar1 + 0x38) = 0;
        FUN_ram_4202101c(*(undefined4 *)(iVar1 + 8));
      }
      FUN_ram_42051a34(iVar2);
      FUN_ram_42020eda(iVar1);
      FUN_ram_4202109a(iVar1,3);
      return 0;
    }
    FUN_ram_42020eda(iVar1);
  }
  return 0x5002;
}

