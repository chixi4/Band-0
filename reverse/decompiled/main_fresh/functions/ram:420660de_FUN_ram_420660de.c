
undefined4 FUN_ram_420660de(int param_1,undefined4 param_2,uint param_3)

{
  int *piVar1;
  int iVar2;
  
  piVar1 = *(int **)(param_1 + 0x310);
  iVar2 = *piVar1;
  if (0x80 < param_3) {
    param_3 = 0x80;
  }
  *(uint *)(iVar2 + 0xb4) = param_3;
  FUN_ram_4039c11e(iVar2 + (0xb1 - param_3));
  return *(undefined4 *)(*piVar1 + 0xb4);
}

