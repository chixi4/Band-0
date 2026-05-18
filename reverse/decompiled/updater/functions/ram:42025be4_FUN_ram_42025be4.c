
undefined4 FUN_ram_42025be4(undefined4 *param_1,uint param_2,undefined4 param_3,undefined4 param_4)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4202491a(param_1,(param_2 >> 2) + (uint)((param_2 & 3) != 0));
  if (iVar1 == 0) {
    uVar2 = 0;
    if (param_2 != 0) {
      uVar2 = FUN_ram_42026b4e(*param_1,*(undefined2 *)((int)param_1 + 6),param_2,param_3,param_4);
      return uVar2;
    }
  }
  else {
    uVar2 = 0xfffffff0;
  }
  return uVar2;
}

