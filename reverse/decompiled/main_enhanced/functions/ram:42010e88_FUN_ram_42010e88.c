
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42010e88(int *param_1,undefined4 param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_2c;
  int iStack_28;
  uint uStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  (*(code *)&SUB_ram_40010488)(param_1,0,0x1c);
  for (iVar1 = _DAT_ram_3fcc4e20; iVar1 != 0; iVar1 = *(int *)(iVar1 + 0x20)) {
    iVar2 = FUN_ram_42010dee(iVar1,param_2);
    if (iVar2 != 0) {
      (*(code *)&SUB_ram_4001037c)(*(undefined4 *)(iVar1 + 0x1c),&iStack_2c);
      *param_1 = *param_1 + iStack_2c;
      param_1[1] = param_1[1] + iStack_28;
      uVar3 = uStack_24;
      if (uStack_24 < (uint)param_1[2]) {
        uVar3 = param_1[2];
      }
      param_1[2] = uVar3;
      param_1[3] = param_1[3] + iStack_20;
      param_1[4] = param_1[4] + iStack_1c;
      param_1[5] = param_1[5] + iStack_18;
      param_1[6] = iStack_14 + param_1[6];
    }
  }
  return;
}

