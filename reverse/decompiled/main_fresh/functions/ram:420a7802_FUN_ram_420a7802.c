
undefined4 FUN_ram_420a7802(int *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (((param_1[0xe] != 0) && (iVar1 = *(int *)(param_1[0xe] + 0xf8), iVar1 != 0)) ||
     (iVar1 = *(int *)(*param_1 + 0x44), uVar2 = 0, iVar1 != 0)) {
    uVar2 = *(undefined4 *)(iVar1 + 4);
  }
  return uVar2;
}

