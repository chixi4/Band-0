
uint FUN_ram_4204fe52(undefined4 *param_1,int param_2,uint param_3,uint param_4)

{
  uint uVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint uVar6;
  int aiStack_34 [4];
  
  if ((int)param_3 < 0) {
    param_3 = 0x7fffffff;
  }
  if ((*(uint *)*param_1 & 0xf0) != 0x10) {
LAB_ram_4204fe88:
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar5 = (param_4 >> 1 & 4) + 8;
  uVar6 = 0;
  do {
    iVar3 = param_1[1];
    if (param_1[1] == 0) {
      iVar5 = FUN_ram_4205d344(*param_1,aiStack_34,iVar5);
      if (iVar5 != 0) {
        if ((int)uVar6 < 1) {
          iVar3 = FUN_ram_4205e6c6();
          if (iVar3 != 0) {
            puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
            uVar2 = FUN_ram_4205e6c6(iVar5);
            *puVar4 = uVar2;
          }
          return -(uint)(iVar5 != -0xf);
        }
        if ((param_4 & 1) != 0) {
          return uVar6;
        }
        goto LAB_ram_4204ff02;
      }
      if (aiStack_34[0] == 0) goto LAB_ram_4204fe88;
      param_1[1] = aiStack_34[0];
      iVar3 = aiStack_34[0];
    }
    aiStack_34[0] = iVar3;
    uVar1 = (uint)*(ushort *)(aiStack_34[0] + 8);
    if ((int)param_3 <= (int)uVar1) {
      uVar1 = param_3 & 0xffff;
    }
    if ((int)(0x7fffffff - uVar1) < (int)uVar6) {
      uVar1 = ~uVar6 & 0xffff;
    }
    FUN_ram_42053f22(aiStack_34[0],param_2 + uVar6,uVar1,0);
    uVar6 = uVar6 + uVar1;
    if ((int)param_3 < (int)uVar1) goto LAB_ram_4204fe88;
    if ((param_4 & 1) != 0) {
      return uVar6;
    }
    if (*(ushort *)(aiStack_34[0] + 8) < uVar1) goto LAB_ram_4204fe88;
    if (uVar1 < *(ushort *)(aiStack_34[0] + 8)) {
      uVar2 = FUN_ram_42053d30(aiStack_34[0],uVar1);
      param_1[1] = uVar2;
    }
    else {
      param_1[1] = 0;
      FUN_ram_42053ac4();
    }
    param_3 = param_3 - uVar1;
    iVar5 = 0x1c;
  } while (param_3 != 0);
  if (0 < (int)uVar6) {
LAB_ram_4204ff02:
    FUN_ram_4205cefe(*param_1,uVar6);
  }
  return uVar6;
}

