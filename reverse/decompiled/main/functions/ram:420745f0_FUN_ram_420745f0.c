
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 * FUN_ram_420745f0(undefined1 *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined1 uVar3;
  
  iVar2 = *param_2;
  *param_1 = 0x5a;
  param_1[1] = 3;
  iVar1 = _DAT_ram_3fcc4018;
  if (_DAT_ram_3fcc4018 == iVar2) {
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)((int)param_2 + 0x332);
    if (*(char *)(*(int *)(gp + -0xb4) + 0x3f4) == '\0') {
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined1 *)(iVar1 + 0x211);
    }
  }
  else {
    *(undefined2 *)(param_1 + 2) = *(undefined2 *)(iVar2 + 0x212);
    uVar3 = *(char *)((int)param_2 + 0x28b) != '\0';
  }
  param_1[4] = uVar3;
  return param_1 + 5;
}

