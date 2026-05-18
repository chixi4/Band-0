
undefined4 FUN_ram_4205f2da(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = *(int *)(param_1 + 0xc);
  iVar2 = *(int *)(iVar1 + 0x10);
  if (iVar2 != 0) {
    if ((*(byte *)(iVar2 + 0x39) & 1) != 0) {
      if ((*(uint *)(iVar1 + 0x54) & 2) == 0) {
        if ((*(uint *)(iVar1 + 0x54) & 1) != 0) {
          FUN_ram_4205a592(iVar2);
          thunk_FUN_ram_4205a190(iVar2);
          FUN_ram_42059ece(iVar2);
          *(undefined4 *)(iVar1 + 0x3c) = 0;
          FUN_ram_4205ee36(*(undefined4 *)(iVar1 + 8));
        }
      }
      else {
        iVar3 = FUN_ram_4209819e(*(undefined4 *)(iVar1 + 0x24),iVar2);
        if ((iVar3 != 0) || (*(int *)(iVar1 + 0x40) != 2)) {
          *(undefined4 *)(iVar1 + 0x40) = 0;
        }
      }
      FUN_ram_4205379a(iVar2);
      FUN_ram_4205ebc6(iVar1);
      FUN_ram_4205eeb4(iVar1,3);
      return 0;
    }
    FUN_ram_4205ebc6(iVar1);
  }
  return 0x5002;
}

