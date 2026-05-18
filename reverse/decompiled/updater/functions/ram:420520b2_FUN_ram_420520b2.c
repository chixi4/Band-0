
uint FUN_ram_420520b2(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar2 = 0;
  if ((param_1 != (undefined4 *)0x0) && (uVar2 = 0, param_2 != 0)) {
    for (; param_3 != 0; param_3 = param_3 - uVar3 & 0xffff) {
      while( true ) {
        if (param_1 == (undefined4 *)0x0) {
          return uVar2;
        }
        uVar1 = (uint)*(ushort *)((int)param_1 + 10);
        if ((param_4 == 0) || (param_4 < uVar1)) break;
        param_1 = (undefined4 *)*param_1;
        param_4 = param_4 - uVar1 & 0xffff;
      }
      uVar3 = uVar1 - param_4;
      if (param_3 < (uVar1 - param_4 & 0xffff)) {
        uVar3 = param_3;
      }
      uVar3 = uVar3 & 0xffff;
      FUN_ram_40399daa(param_2 + uVar2,param_1[1] + param_4,uVar3);
      param_1 = (undefined4 *)*param_1;
      uVar2 = uVar2 + uVar3 & 0xffff;
      param_4 = 0;
    }
  }
  return uVar2;
}

