
int FUN_ram_420a3904(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 *puVar2;
  int *piVar3;
  int iVar4;
  
  iVar4 = 0;
  if (param_1 != 0) {
    iVar4 = *(int *)(param_1 + 8);
  }
  iVar1 = FUN_ram_420a3498(param_1,param_4);
  if (iVar1 == -1) {
LAB_ram_420a3932:
    iVar4 = -2;
  }
  else {
    if (iVar1 != 0) {
      iVar4 = FUN_ram_42051410(*(undefined4 *)(iVar4 + 0x70),param_2,param_3,0);
      if (-1 < iVar4) {
        if (iVar4 != 0) {
          return iVar4;
        }
        if (0 < iVar1) {
          FUN_ram_420a3508(param_1,0xffffffff);
        }
        return -1;
      }
      puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      FUN_ram_420a3590(param_1,*puVar2);
      piVar3 = (int *)(*(code *)&SUB_ram_40010670)();
      if (*piVar3 != 0xb) goto LAB_ram_420a3932;
    }
    iVar4 = 0;
  }
  return iVar4;
}

