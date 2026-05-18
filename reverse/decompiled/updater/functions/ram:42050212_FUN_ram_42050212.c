
int FUN_ram_42050212(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4,
                    undefined4 *param_5)

{
  int iVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int *piVar6;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  int iStack_30;
  undefined4 uStack_2c;
  int iStack_28;
  undefined4 uStack_24;
  
  iVar1 = FUN_ram_4204ed60();
  if (iVar1 != 0) {
    if ((param_4 == 0) || (param_5 == (undefined4 *)0x0)) {
      puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      *puVar2 = 0xe;
    }
    else {
      uStack_2c = *param_5;
      iStack_28 = 0;
      uStack_3c = param_1;
      uStack_38 = param_2;
      uStack_34 = param_3;
      iStack_30 = param_4;
      uStack_24 = FUN_ram_42059a40();
      iVar3 = FUN_ram_42050602(0x4203f196,&uStack_3c);
      if (iVar3 == 0) {
        FUN_ram_420597d0(uStack_24,0);
        iVar3 = iStack_28;
        *param_5 = uStack_2c;
        if (iStack_28 != 0) {
          piVar6 = (int *)(*(code *)&SUB_ram_40010670)();
          *piVar6 = iVar3;
        }
        FUN_ram_4204ecbc(iVar1);
        return -(uint)(iVar3 != 0);
      }
      iVar4 = FUN_ram_4205b1bc();
      if (iVar4 != 0) {
        puVar2 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
        uVar5 = FUN_ram_4205b1bc(iVar3);
        *puVar2 = uVar5;
      }
    }
    FUN_ram_4204ecbc(iVar1);
  }
  return -1;
}

