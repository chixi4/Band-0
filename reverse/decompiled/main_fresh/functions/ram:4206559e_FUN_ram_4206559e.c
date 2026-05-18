
void FUN_ram_4206559e(undefined4 *param_1)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  
  piVar1 = (int *)param_1[0xc4];
  if (*(char *)(param_1 + 200) == '\0') {
    iVar2 = *piVar1;
    if (*(int *)(iVar2 + 4) != param_1[0xc6]) {
      FUN_ram_42065b30(iVar2 + 4,*(undefined4 *)(iVar2 + 0x14));
    }
  }
  iVar3 = *piVar1;
  iVar2 = piVar1[1];
  *(undefined4 *)(iVar3 + 4) = param_1[0xc6];
  *(undefined4 *)(iVar3 + 0x14) = param_1[199];
  *(undefined1 *)(iVar3 + 8) = *(undefined1 *)(param_1 + 200);
  *piVar1 = 0;
  thunk_FUN_ram_40390634(iVar2);
  piVar1[1] = 0;
  piVar1[2] = 0;
  piVar1[3] = 0;
  *param_1 = 0;
  param_1[0xc4] = 0;
  param_1[0xc5] = 0;
  return;
}

