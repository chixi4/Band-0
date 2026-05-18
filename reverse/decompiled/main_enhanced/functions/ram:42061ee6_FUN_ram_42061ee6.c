
undefined4 FUN_ram_42061ee6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(gp + -0x74c + param_1 * 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 100);
  }
  return uVar2;
}

