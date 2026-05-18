
undefined4 FUN_ram_403a1cbe(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_403989f4();
  if (iVar1 == 2) {
    FUN_ram_40398498(1);
  }
  uVar2 = FUN_ram_40391914();
  *(undefined4 *)(param_1 + 8) = uVar2;
  return 0;
}

