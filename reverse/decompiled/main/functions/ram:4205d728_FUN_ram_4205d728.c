
undefined4 FUN_ram_4205d728(int param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined2 uVar3;
  undefined *extraout_a2;
  int extraout_a3;
  undefined4 uVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_2 != 0) goto LAB_ram_4205d73c;
  do {
    uVar5 = FUN_ram_4039bf1e(param_1);
    param_3 = extraout_a2;
    param_4 = extraout_a3;
LAB_ram_4205d73c:
    iVar2 = (int)((ulonglong)uVar5 >> 0x20);
    iVar1 = (int)uVar5;
    param_1 = iVar1;
  } while (((iVar1 == 0) || (param_4 != 0)) || (param_1 = iVar2, *(int *)(iVar1 + 8) != iVar2));
  uVar4 = 0;
  if ((*(int *)(iVar1 + 0x10) == 0) || ((*(byte *)(iVar1 + 0x28) & 8) != 0)) {
    if (param_3 != (undefined *)0x0) {
      FUN_ram_42054838(iVar2,*(undefined2 *)(param_3 + 8));
      FUN_ram_42053ac4(param_3);
    }
  }
  else {
    if (param_3 == (undefined *)0x0) {
      param_3 = &DAT_ram_3c0f75a2;
      uVar3 = 0;
    }
    else {
      uVar3 = *(undefined2 *)(param_3 + 8);
    }
    iVar2 = FUN_ram_4205c7fc(iVar1 + 0x10,param_3);
    if (iVar2 == 0) {
      if (*(code **)(iVar1 + 0x30) != (code *)0x0) {
        (**(code **)(iVar1 + 0x30))(iVar1,0,uVar3);
      }
    }
    else {
      uVar4 = 0xffffffff;
    }
  }
  return uVar4;
}

