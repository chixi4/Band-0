
int FUN_ram_4202d64e(int param_1,undefined4 param_2,undefined4 *param_3)

{
  int iVar1;
  int iVar2;
  undefined4 *puVar3;
  
  if (param_3 == (undefined4 *)0x0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      return 0;
    }
    iVar1 = *(int *)(param_1 + 0x7c);
    if (iVar1 == 0) {
      return 0;
    }
    iVar2 = *(int *)(iVar1 + 4);
    *(int *)(param_1 + 0x7c) = iVar2;
    if (iVar2 == 0) {
      *(int *)(param_1 + 0x80) = param_1 + 0x7c;
    }
    param_3 = (undefined4 *)(iVar1 + -0x10);
  }
  iVar1 = FUN_ram_4202c702(*(undefined1 *)*param_3);
  if (iVar1 != 0) {
    if (*(char *)(param_1 + 0x84) != '\0') {
      puVar3 = *(undefined4 **)(param_1 + 0x80);
      param_3[5] = 0;
      *puVar3 = param_3 + 4;
      *(undefined4 **)(param_1 + 0x80) = param_3 + 5;
      return 0;
    }
    *(undefined1 *)(param_1 + 0x84) = 1;
  }
  FUN_ram_4202c62c(*(undefined1 *)*param_3);
  FUN_ram_4202c670(param_2,param_3);
  iVar2 = FUN_ram_4203083c(param_1,param_2,param_3);
  if (iVar2 == 0) {
    return 0;
  }
  if (iVar1 != 0) {
    *(undefined1 *)(param_1 + 0x84) = 0;
    return iVar2;
  }
  return iVar2;
}

