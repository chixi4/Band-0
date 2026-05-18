
undefined4 FUN_ram_4201c7f4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = *(int *)(gp + -0x7b4 + param_1 * 4);
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = *(undefined4 *)(iVar1 + 0x60);
  }
  return uVar2;
}

