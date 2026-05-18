
void FUN_ram_420a60ba(int *param_1)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  
  cVar1 = *(char *)param_1[0xe];
  if (param_1[0xc] != 0) {
    *(undefined4 *)(param_1[0xd] + 0x70) = *(undefined4 *)(param_1[0xc] + 0x70);
    FUN_ram_420a5988();
    FUN_ram_4206d7d4(param_1[0xc]);
  }
  iVar2 = param_1[0xd];
  param_1[0xd] = 0;
  pcVar3 = *(code **)(*param_1 + 0x28);
  param_1[0xc] = iVar2;
  if (((pcVar3 != (code *)0x0) && (*(int *)(iVar2 + 0xc) != 0)) && (cVar1 == '\0')) {
    (*pcVar3)(*(undefined4 *)(*param_1 + 0x2c),iVar2 + 0x10);
  }
  FUN_ram_420a6086(param_1);
  param_1[1] = 0x1b;
  return;
}

