
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204fb88(uint *param_1)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  int iVar6;
  uint local_40;
  int iStack_3c;
  int iStack_38;
  undefined8 uStack_30;
  undefined4 uStack_28;
  
  if (_DAT_ram_3fcc52a8 == 0) {
    FUN_ram_420127d4(param_1,0);
    _DAT_ram_3fcc52a4 = 1;
  }
  else {
    iVar6 = _DAT_ram_3fcc52a8;
    if (_DAT_ram_3fcc52a8 == 1) {
      FUN_ram_420b1060(&local_40,0);
      uVar1 = *param_1 * 1000000;
      uVar5 = param_1[2] + uVar1;
      uVar3 = iStack_38 + local_40 * 1000000;
      uVar4 = uVar5 - uVar3;
      iVar2 = (((uint)(uVar5 < uVar1) +
               param_1[1] * 1000000 + (int)((ulonglong)*param_1 * 1000000 >> 0x20) +
               ((int)param_1[2] >> 0x1f)) -
              ((uint)(uVar3 < local_40 * 1000000) +
              iStack_3c * 1000000 + (int)((ulonglong)local_40 * 1000000 >> 0x20) +
              (iStack_38 >> 0x1f))) - (uint)(uVar5 < uVar4);
      uStack_30 = (*(code *)&SUB_ram_400108f8)(uVar4,iVar2,1000000,0);
      uStack_28 = (*(code *)&SUB_ram_40010980)(uVar4,iVar2,1000000,0);
      iVar2 = FUN_ram_4201263c(&uStack_30,0);
      if (iVar2 == -1) {
        FUN_ram_420127d4(param_1,0);
        _DAT_ram_3fcc52a4 = iVar6;
      }
      else {
        _DAT_ram_3fcc52a4 = 2;
      }
    }
  }
  if (_DAT_ram_3fcc52a0 != (code *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x4204fbcc. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (*_DAT_ram_3fcc52a0)(param_1);
    return;
  }
  return;
}

