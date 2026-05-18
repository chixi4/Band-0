
undefined4 FUN_ram_4206cb20(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  if (((param_1 != 0) && (*(int **)(param_1 + 0x38) != (int *)0x0)) &&
     (iVar2 = **(int **)(param_1 + 0x38), iVar2 != 0)) {
    uVar1 = *(undefined4 *)(iVar2 + 0xc);
    *(undefined4 *)(iVar2 + 0xc) = 0;
    return uVar1;
  }
  return 0xffffffff;
}

