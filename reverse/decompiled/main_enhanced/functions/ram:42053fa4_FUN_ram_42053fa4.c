
int FUN_ram_42053fa4(int *param_1,int param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == (int *)0x0) {
    return -0x10;
  }
  if (param_2 == 0) {
    iVar1 = -0x10;
  }
  else if (*(ushort *)((int)param_1 + 8) < param_3) {
    iVar1 = -1;
  }
  else {
    uVar4 = 0;
    iVar1 = (int)param_1;
    for (uVar2 = param_3; uVar2 != 0; uVar2 = uVar2 - uVar3) {
      if (param_1 == (int *)0x0) goto LAB_ram_42053fe8;
      uVar3 = (uint)*(ushort *)((int)param_1 + 10);
      if (uVar2 < *(ushort *)((int)param_1 + 10)) {
        uVar3 = uVar2;
      }
      iVar1 = FUN_ram_4039c11e(param_1[1],param_2 + uVar4,uVar3);
      param_1 = (int *)*param_1;
      uVar4 = uVar4 + uVar3;
    }
    iVar1 = 0;
    if (uVar4 != param_3) {
LAB_ram_42053fe8:
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf1e(iVar1);
    }
  }
  return iVar1;
}

