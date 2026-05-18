
undefined4 FUN_ram_42053fa4(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  undefined4 uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  
  if (param_1 == (int *)0x0) {
    return 0xfffffff0;
  }
  if (param_2 == 0) {
    uVar2 = 0xfffffff0;
  }
  else {
    if (param_3 <= *(ushort *)((int)param_1 + 8)) {
      uVar5 = 0;
      iVar1 = (int)param_1;
      uVar3 = param_3;
      do {
        if (uVar3 == 0) {
          iVar1 = 0;
          if (uVar5 == param_3) {
            return 0;
          }
LAB_ram_42053fe8:
          FUN_ram_4039bf1e(iVar1);
        }
        else if (param_1 == (int *)0x0) goto LAB_ram_42053fe8;
        uVar4 = (uint)*(ushort *)((int)param_1 + 10);
        if (uVar3 < *(ushort *)((int)param_1 + 10)) {
          uVar4 = uVar3;
        }
        iVar1 = FUN_ram_4039c11e(param_1[1],param_2 + uVar5,uVar4);
        uVar3 = uVar3 - uVar4;
        param_1 = (int *)*param_1;
        uVar5 = uVar5 + uVar4;
      } while( true );
    }
    uVar2 = 0xffffffff;
  }
  return uVar2;
}

