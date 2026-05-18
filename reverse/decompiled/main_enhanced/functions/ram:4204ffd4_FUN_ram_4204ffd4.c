
int FUN_ram_4204ffd4(undefined4 *param_1,uint param_2,int *param_3,ushort *param_4)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  undefined4 *puVar5;
  uint uVar6;
  int *apiStack_34 [4];
  
  if ((param_3[2] == 0) && (0 < param_3[3])) {
    iVar3 = -0x10;
  }
  else {
    apiStack_34[0] = (int *)param_1[1];
    if (apiStack_34[0] == (int *)0x0) {
      iVar3 = FUN_ram_4205d26a(*param_1,apiStack_34,param_2 >> 1 & 4);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (apiStack_34[0] == (int *)0x0) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      param_1[1] = apiStack_34[0];
    }
    iVar3 = 0;
    uVar1 = *(ushort *)(*apiStack_34[0] + 8);
    for (uVar2 = 0; (iVar3 < param_3[3] && (uVar2 < uVar1)); uVar2 = uVar2 + uVar6 & 0xffff) {
      puVar5 = (undefined4 *)(param_3[2] + iVar3 * 8);
      uVar4 = puVar5[1];
      uVar6 = uVar1 - uVar2 & 0xffff;
      if (uVar4 <= uVar6) {
        uVar6 = uVar4 & 0xffff;
      }
      FUN_ram_42053f22(*apiStack_34[0],*puVar5,uVar6,uVar2);
      iVar3 = iVar3 + 1;
    }
    if ((*param_3 != 0) && (param_3[1] != 0)) {
      FUN_ram_4204ff78(apiStack_34[0] + 2,(short)apiStack_34[0][3],*param_3,param_3 + 1);
    }
    param_3[6] = 0;
    if (param_3[4] != 0) {
      param_3[5] = 0;
    }
    if ((param_2 & 1) == 0) {
      param_1[1] = 0;
      FUN_ram_4205e6e8(apiStack_34[0]);
    }
    if (param_4 != (ushort *)0x0) {
      *param_4 = uVar1;
    }
    iVar3 = 0;
  }
  return iVar3;
}

