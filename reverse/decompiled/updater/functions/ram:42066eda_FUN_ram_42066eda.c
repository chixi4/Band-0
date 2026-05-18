
undefined4
FUN_ram_42066eda(int *param_1,int param_2,int param_3,int param_4,undefined4 param_5,
                undefined4 param_6,undefined4 param_7,undefined4 param_8,undefined4 param_9)

{
  int iVar1;
  undefined4 uVar2;
  int aiStack_14 [2];
  
  if ((((param_4 == 0 && param_2 == 0) || (param_3 != 0)) && (*param_1 != 0)) &&
     (aiStack_14[0] = param_4, iVar1 = FUN_ram_42066d86(param_2,aiStack_14), iVar1 == 0)) {
    if (*(code **)(*param_1 + 0x14) == (code *)0x0) {
      return 0xffffc100;
    }
    uVar2 = (**(code **)(*param_1 + 0x14))
                      (param_1,param_2,param_3,aiStack_14[0],param_5,param_6,param_7,param_8,param_9
                      );
    return uVar2;
  }
  return 0xffffc180;
}

