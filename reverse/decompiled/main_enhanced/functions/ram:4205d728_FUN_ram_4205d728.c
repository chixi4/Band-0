
undefined4 FUN_ram_4205d728(int param_1,int param_2,undefined *param_3,int param_4)

{
  int iVar1;
  undefined2 uVar2;
  undefined4 uVar3;
  
  if ((((param_2 != 0) && (param_1 != 0)) && (param_4 == 0)) && (*(int *)(param_1 + 8) == param_2))
  {
    uVar3 = 0;
    if ((*(int *)(param_1 + 0x10) == 0) || ((*(byte *)(param_1 + 0x28) & 8) != 0)) {
      if (param_3 != (undefined *)0x0) {
        FUN_ram_42054838(param_2,*(undefined2 *)(param_3 + 8));
        FUN_ram_42053ac4(param_3);
      }
    }
    else {
      if (param_3 == (undefined *)0x0) {
        param_3 = &DAT_ram_3c0f75a2;
        uVar2 = 0;
      }
      else {
        uVar2 = *(undefined2 *)(param_3 + 8);
      }
      iVar1 = FUN_ram_4205c7fc(param_1 + 0x10,param_3);
      if (iVar1 == 0) {
        if (*(code **)(param_1 + 0x30) != (code *)0x0) {
          (**(code **)(param_1 + 0x30))(param_1,0,uVar2);
        }
      }
      else {
        uVar3 = 0xffffffff;
      }
    }
    return uVar3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

