
undefined4 FUN_ram_40397350(int param_1,int param_2,undefined4 *param_3,int param_4)

{
  char cVar1;
  undefined4 uVar2;
  uint uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  
  if ((param_1 == 0) || ((param_2 == 0 && (*(int *)(param_1 + 0x40) != 0)))) {
LAB_ram_40397362:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  if (param_4 == 2) {
    if (*(int *)(param_1 + 0x3c) != 1) goto LAB_ram_40397362;
  }
  uVar4 = FUN_ram_4039693c();
  if (*(uint *)(param_1 + 0x3c) <= *(uint *)(param_1 + 0x38)) {
    uVar2 = 0;
    if (param_4 != 2) goto LAB_ram_403973de;
  }
  cVar1 = *(char *)(param_1 + 0x45);
  iVar6 = *(int *)(param_1 + 0x38);
  FUN_ram_40396da6(param_1,param_2,param_4);
  uVar3 = (uint)cVar1;
  if (uVar3 == 0xffffffff) {
    if (*(int *)(param_1 + 0x48) == 0) {
      if (*(int *)(param_1 + 0x24) != 0) {
        iVar6 = FUN_ram_40398762(param_1 + 0x24);
        goto LAB_ram_403973d0;
      }
    }
    else if ((param_4 != 2) || (iVar6 == 0)) {
      iVar6 = FUN_ram_40396e48(param_1);
LAB_ram_403973d0:
      if ((iVar6 != 0) && (param_3 != (undefined4 *)0x0)) {
        *param_3 = 1;
      }
    }
  }
  else {
    uVar5 = FUN_ram_403980ea();
    if (uVar3 < uVar5) {
      if (uVar3 == 0x7f) goto LAB_ram_40397362;
      *(char *)(param_1 + 0x45) = (char)((uVar3 + 1) * 0x1000000 >> 0x18);
    }
  }
  uVar2 = 1;
LAB_ram_403973de:
  FUN_ram_40396956(uVar4);
  return uVar2;
}

