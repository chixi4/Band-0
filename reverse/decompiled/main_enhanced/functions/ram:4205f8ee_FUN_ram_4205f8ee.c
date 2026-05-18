
undefined4 FUN_ram_4205f8ee(int param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if (param_1 == 0) {
    return 0x102;
  }
  uVar1 = 0x102;
  if (param_2 != (undefined4 *)0x0) {
    iVar2 = *(int *)(param_1 + 0x10);
    if ((iVar2 == 0) || ((*(byte *)(iVar2 + 0x39) & 1) == 0)) {
      FUN_ram_4039c11e(param_2,*(undefined4 *)(param_1 + 8),0xc);
      return 0;
    }
    uVar1 = 0;
    *param_2 = *(undefined4 *)(iVar2 + 4);
    param_2[1] = *(undefined4 *)(iVar2 + 8);
    param_2[2] = *(undefined4 *)(iVar2 + 0xc);
  }
  return uVar1;
}

