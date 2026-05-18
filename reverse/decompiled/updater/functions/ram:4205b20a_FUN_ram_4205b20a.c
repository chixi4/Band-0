
undefined4 FUN_ram_4205b20a(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0;
  }
  if (*param_1 != 0) {
    FUN_ram_42051d02();
  }
  iVar1 = FUN_ram_42051d86(0x36,param_2,0x280);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    param_1[1] = iVar1;
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

