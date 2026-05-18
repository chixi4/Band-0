
undefined4 FUN_ram_40397422(int *param_1,undefined4 *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  if (((param_1 == (int *)0x0) || (param_1[0x10] != 0)) || ((*param_1 == 0 && (param_1[2] != 0)))) {
LAB_ram_40397430:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf9e(0,0,0,0);
  }
  uVar3 = FUN_ram_4039693c();
  if ((uint)param_1[0xf] <= (uint)param_1[0xe]) {
    uVar1 = 0;
    goto LAB_ram_4039747a;
  }
  param_1[0xe] = param_1[0xe] + 1;
  uVar2 = (uint)*(char *)((int)param_1 + 0x45);
  if (uVar2 == 0xffffffff) {
    if (param_1[0x12] == 0) {
      if (param_1[9] == 0) goto LAB_ram_40397478;
      iVar4 = FUN_ram_40398762(param_1 + 9);
    }
    else {
      iVar4 = FUN_ram_40396e48(param_1);
    }
    if ((iVar4 != 0) && (param_2 != (undefined4 *)0x0)) {
      *param_2 = 1;
    }
  }
  else {
    uVar5 = FUN_ram_403980ea();
    if (uVar2 < uVar5) {
      if (uVar2 == 0x7f) goto LAB_ram_40397430;
      *(char *)((int)param_1 + 0x45) = (char)((uVar2 + 1) * 0x1000000 >> 0x18);
    }
  }
LAB_ram_40397478:
  uVar1 = 1;
LAB_ram_4039747a:
  FUN_ram_40396956(uVar3);
  return uVar1;
}

