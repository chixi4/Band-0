
undefined4 FUN_ram_42052196(int *param_1,int param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  
  while( true ) {
    if (param_1 == (int *)0x0) {
      return 0xffffffff;
    }
    uVar2 = (uint)*(ushort *)((int)param_1 + 10);
    if (param_4 < uVar2) break;
    param_1 = (int *)*param_1;
    param_4 = param_4 - uVar2 & 0xffff;
  }
  if ((int)(uint)*(ushort *)(param_1 + 2) < (int)(param_4 + param_3)) {
    return 0xffffffff;
  }
  uVar3 = param_3;
  if ((int)(uVar2 - param_4) < (int)param_3) {
    uVar3 = uVar2 - param_4 & 0xffff;
  }
  FUN_ram_40399daa(param_1[1] + param_4,param_2,uVar3);
  if ((param_3 - uVar3 & 0xffff) != 0) {
    uVar1 = FUN_ram_42052134(*param_1,param_2 + uVar3);
    return uVar1;
  }
  return 0;
}

