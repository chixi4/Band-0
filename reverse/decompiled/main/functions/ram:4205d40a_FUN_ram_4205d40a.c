
void FUN_ram_4205d40a(undefined4 param_1,int param_2,int param_3,int *param_4,undefined2 param_5)

{
  undefined2 uVar1;
  int iVar2;
  int *piVar3;
  int extraout_a2;
  int *extraout_a3;
  undefined2 extraout_a4;
  int iVar4;
  undefined8 uVar5;
  
  uVar5 = CONCAT44(param_2,param_1);
  if (param_2 != 0) goto LAB_ram_4205d422;
  do {
    uVar5 = FUN_ram_4039bf1e();
    param_3 = extraout_a2;
    param_4 = extraout_a3;
    param_5 = extraout_a4;
LAB_ram_4205d422:
    iVar2 = (int)uVar5;
  } while ((iVar2 == 0) || (*(int *)(iVar2 + 8) != (int)((ulonglong)uVar5 >> 0x20)));
  if ((*(int *)(iVar2 + 0x10) != 0) &&
     (((*(byte *)(iVar2 + 0x28) & 8) == 0 &&
      (piVar3 = (int *)FUN_ram_420531dc(5), piVar3 != (int *)0x0)))) {
    *piVar3 = param_3;
    piVar3[1] = param_3;
    iVar4 = 0;
    if (param_4 != (int *)0x0) {
      iVar4 = *param_4;
    }
    uVar1 = *(undefined2 *)(param_3 + 8);
    piVar3[2] = iVar4;
    *(undefined2 *)(piVar3 + 3) = param_5;
    iVar4 = FUN_ram_4205c7fc(iVar2 + 0x10,piVar3);
    if (iVar4 != 0) {
      FUN_ram_4205e6e8(piVar3);
      return;
    }
    if (*(code **)(iVar2 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4205d4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(iVar2 + 0x30))(iVar2,0,uVar1);
      return;
    }
    return;
  }
  FUN_ram_42053ac4(param_3);
  return;
}

