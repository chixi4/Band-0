
undefined4 FUN_ram_420666ee(int *param_1,int param_2)

{
  undefined4 uVar1;
  code *pcVar2;
  
  pcVar2 = *(code **)(*(int *)(*param_1 + 0x400) + param_2 * 4);
  if (pcVar2 == (code *)0x0) {
    FUN_ram_42066510(param_1,param_2,0);
  }
  else {
    uVar1 = (*pcVar2)();
    if (param_2 != 0) {
      return uVar1;
    }
  }
  return 0xffffffff;
}

