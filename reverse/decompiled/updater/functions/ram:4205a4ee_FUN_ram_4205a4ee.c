
undefined4 FUN_ram_4205a4ee(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  uVar3 = 0xfffffffa;
  if (param_1 != 0) {
    if ((*(int *)(param_1 + 0x10) == 0) || ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
      if (param_3 != 0) {
        FUN_ram_4205270c(param_2,*(undefined2 *)(param_3 + 8));
        FUN_ram_42051d02(param_3);
      }
    }
    else {
      if (param_3 == 0) {
        param_3 = 0x3c0793e6;
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined2 *)(param_3 + 8);
      }
      iVar1 = FUN_ram_42059878(param_1 + 0x10,param_3);
      if (iVar1 != 0) {
        return 0xffffffff;
      }
      if (*(code **)(param_1 + 0x30) != (code *)0x0) {
        (**(code **)(param_1 + 0x30))(param_1,0,uVar2);
      }
    }
    uVar3 = 0;
  }
  return uVar3;
}

