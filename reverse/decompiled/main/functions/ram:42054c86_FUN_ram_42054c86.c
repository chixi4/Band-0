
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42054c86(int param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int extraout_a5;
  short sVar4;
  code *UNRECOVERED_JUMPTABLE;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined8 uVar8;
  
  uVar8 = CONCAT44(param_2,param_1);
  if (param_1 == 0) {
    return;
  }
  iVar3 = *(int *)(param_1 + 0x14);
  if (iVar3 == 1) {
    uVar8 = FUN_ram_4039bf1e();
    iVar3 = extraout_a5;
  }
  iVar1 = (int)((ulonglong)uVar8 >> 0x20);
  iVar2 = (int)uVar8;
  if (iVar3 == 10) {
    FUN_ram_42054c00(&DAT_ram_3fcc52ec,iVar2);
    FUN_ram_42054506(param_1);
    return;
  }
  uVar6 = *(undefined4 *)(iVar2 + 0x54);
  uVar7 = *(undefined4 *)(iVar2 + 0x28);
  UNRECOVERED_JUMPTABLE = *(code **)(iVar2 + 0x94);
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  sVar4 = *(short *)(iVar2 + 0x1a);
  if (iVar3 == 0) {
    if (sVar4 != 0) {
      iVar3 = _DAT_ram_3fcc52f8;
      if (_DAT_ram_3fcc52f8 == iVar2) {
        _DAT_ram_3fcc52f8 = *(int *)(iVar2 + 0xc);
      }
      else {
        do {
          iVar1 = iVar3;
          if (iVar1 == 0) goto LAB_ram_42054d6a;
          iVar3 = *(int *)(iVar1 + 0xc);
        } while (*(int *)(iVar1 + 0xc) != param_1);
        *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)(param_1 + 0xc);
      }
LAB_ram_42054d6a:
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
    sVar4 = 0;
    iVar1 = 0;
  }
  else {
    FUN_ram_42054c00(&DAT_ram_3fcc52f0,iVar2);
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
  if (iVar1 != 0) {
    FUN_ram_42057d6a(param_1,uVar6,uVar7,param_1,param_1 + 4,sVar4,*(undefined2 *)(param_1 + 0x1c));
  }
  FUN_ram_42054506(param_1);
  if (UNRECOVERED_JUMPTABLE == (code *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x42054d56. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (*UNRECOVERED_JUMPTABLE)(uVar5,0xfffffff3);
  return;
}

