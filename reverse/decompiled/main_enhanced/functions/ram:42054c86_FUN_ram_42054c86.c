
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42054c86(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  short sVar3;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  
  if (param_1 == 0) {
    return;
  }
  iVar1 = *(int *)(param_1 + 0x14);
  if (iVar1 == 1) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  if (iVar1 == 10) {
    FUN_ram_42054c00(&DAT_ram_3fcc52ec,param_1);
    FUN_ram_42054506(param_1);
    return;
  }
  uVar5 = *(undefined4 *)(param_1 + 0x54);
  uVar6 = *(undefined4 *)(param_1 + 0x28);
  UNRECOVERED_JUMPTABLE = *(code **)(param_1 + 0x94);
  uVar4 = *(undefined4 *)(param_1 + 0x10);
  sVar3 = *(short *)(param_1 + 0x1a);
  if (iVar1 == 0) {
    if (sVar3 != 0) {
      iVar1 = _DAT_ram_3fcc52f8;
      if (_DAT_ram_3fcc52f8 == param_1) {
        _DAT_ram_3fcc52f8 = *(int *)(param_1 + 0xc);
      }
      else {
        do {
          iVar2 = iVar1;
          if (iVar2 == 0) goto LAB_ram_42054d6a;
          iVar1 = *(int *)(iVar2 + 0xc);
        } while (*(int *)(iVar2 + 0xc) != param_1);
        *(undefined4 *)(iVar2 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
LAB_ram_42054d6a:
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    sVar3 = 0;
    param_2 = 0;
  }
  else {
    FUN_ram_42054c00(&DAT_ram_3fcc52f0,param_1);
    DAT_ram_3fcc52ea = 1;
  }
  if (*(int *)(param_1 + 0x74) != 0) {
    FUN_ram_420548c6();
  }
  if (*(int *)(param_1 + 0x70) != 0) {
    FUN_ram_420548c6();
  }
  if (*(int *)(param_1 + 0x78) != 0) {
    FUN_ram_420548c6();
  }
  FUN_ram_4205455a(param_1);
  if (param_2 != 0) {
    FUN_ram_42057d6a(param_1,uVar5,uVar6,param_1,param_1 + 4,sVar3,*(undefined2 *)(param_1 + 0x1c));
  }
  FUN_ram_42054506(param_1);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x42054d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar4,0xfffffff3);
  return;
}

