
undefined4 FUN_ram_42052134(undefined4 *param_1,int param_2,uint param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  
  if (param_1 != (undefined4 *)0x0) {
    uVar1 = 0xfffffff0;
    if (param_2 != 0) {
      uVar1 = 0xffffffff;
      iVar3 = 0;
      if (param_3 <= *(ushort *)(param_1 + 2)) {
        for (; param_3 != 0; param_3 = param_3 - uVar2) {
          uVar2 = (uint)*(ushort *)((int)param_1 + 10);
          if (param_3 < *(ushort *)((int)param_1 + 10)) {
            uVar2 = param_3;
          }
          FUN_ram_40399daa(param_1[1],param_2 + iVar3,uVar2);
          param_1 = (undefined4 *)*param_1;
          iVar3 = iVar3 + uVar2;
        }
        uVar1 = 0;
      }
    }
    return uVar1;
  }
  return 0xfffffff0;
}

