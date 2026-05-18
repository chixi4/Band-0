
void FUN_ram_4205d40a(int param_1,int param_2,int param_3,int *param_4,undefined2 param_5)

{
  undefined2 uVar1;
  int *piVar2;
  int iVar3;
  
  if (((param_2 == 0) || (param_1 == 0)) || (*(int *)(param_1 + 8) != param_2)) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (((*(int *)(param_1 + 0x10) != 0) && ((*(byte *)(param_1 + 0x28) & 8) == 0)) &&
     (piVar2 = (int *)FUN_ram_420531dc(5), piVar2 != (int *)0x0)) {
    *piVar2 = param_3;
    piVar2[1] = param_3;
    iVar3 = 0;
    if (param_4 != (int *)0x0) {
      iVar3 = *param_4;
    }
    uVar1 = *(undefined2 *)(param_3 + 8);
    piVar2[2] = iVar3;
    *(undefined2 *)(piVar2 + 3) = param_5;
    iVar3 = FUN_ram_4205c7fc(param_1 + 0x10,piVar2);
    if (iVar3 != 0) {
      FUN_ram_4205e6e8(piVar2);
      return;
    }
    if (*(code **)(param_1 + 0x30) != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4205d4b2. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(param_1 + 0x30))(param_1,0,uVar1);
      return;
    }
    return;
  }
  FUN_ram_42053ac4(param_3);
  return;
}

