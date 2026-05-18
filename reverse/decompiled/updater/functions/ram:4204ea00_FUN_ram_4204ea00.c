
uint FUN_ram_4204ea00(undefined4 *param_1,int param_2,uint param_3,uint param_4)

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
  iVar5 = (param_4 >> 1 & 4) + 8;
  uVar6 = 0;
  do {
    iVar3 = param_1[1];
    if (param_1[1] == 0) {
      iVar5 = FUN_ram_4205a202(*param_1,aiStack_34,iVar5);
      if (iVar5 != 0) {
        if ((int)uVar6 < 1) {
          iVar3 = FUN_ram_4205b1bc();
          if (iVar3 != 0) {
            puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
            uVar2 = FUN_ram_4205b1bc(iVar5);
            *puVar4 = uVar2;
          }
          return -(uint)(iVar5 != -0xf);
        }
        if ((param_4 & 1) != 0) {
          return uVar6;
        }
        goto LAB_ram_4204ea92;
      }
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
    FUN_ram_420520b2(aiStack_34[0],param_2 + uVar6,uVar1,0);
    uVar6 = uVar6 + uVar1;
    if ((param_4 & 1) != 0) {
      return uVar6;
    }
    if (uVar1 < *(ushort *)(aiStack_34[0] + 8)) {
      uVar2 = FUN_ram_42051f0c(aiStack_34[0],uVar1);
      param_1[1] = uVar2;
    }
    else {
      param_1[1] = 0;
      FUN_ram_42051d02();
    }
    param_3 = param_3 - uVar1;
    iVar5 = 0x1c;
  } while (0 < (int)param_3);
  if (0 < (int)uVar6) {
LAB_ram_4204ea92:
    FUN_ram_42059ed4(*param_1,uVar6);
  }
  return uVar6;
}

