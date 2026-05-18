
undefined4 FUN_ram_42053e10(int *param_1,int *param_2,uint param_3,uint param_4)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_2 == (int *)0x0) {
    return 0xfffffff0;
  }
  if (((*(ushort *)(param_2 + 2) < param_3) || (param_1 == (int *)0x0)) ||
     ((int)(uint)*(ushort *)(param_1 + 2) < (int)(param_4 + param_3))) {
LAB_ram_42053ea4:
    uVar1 = 0xfffffff0;
  }
  else {
    uVar4 = 0;
    do {
      uVar3 = *(ushort *)((int)param_1 + 10) - param_4;
      uVar2 = *(ushort *)((int)param_2 + 10) - uVar4;
      if (uVar2 < uVar3) {
        uVar3 = uVar2;
      }
      if (param_3 < uVar3) {
        uVar3 = param_3;
      }
      FUN_ram_4039c11e(param_1[1] + param_4,param_2[1] + uVar4,uVar3);
      uVar2 = (uint)*(ushort *)((int)param_1 + 10);
      param_4 = param_4 + uVar3;
      uVar4 = uVar4 + uVar3;
      param_3 = param_3 - uVar3 & 0xffff;
      if ((uVar2 < param_4) || (*(ushort *)((int)param_2 + 10) < uVar4)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      if (*(ushort *)((int)param_2 + 10) != uVar4) {
        if (uVar2 == param_4) goto LAB_ram_42053ebc;
        goto LAB_ram_42053ec8;
      }
      param_2 = (int *)*param_2;
      if (param_2 == (int *)0x0) {
        if (param_3 != 0) goto LAB_ram_42053ea4;
        uVar4 = 0;
        if (uVar2 == param_4) goto LAB_ram_42053f02;
LAB_ram_42053ed8:
        if (param_1 != (int *)0x0) goto LAB_ram_42053eda;
      }
      else {
        uVar4 = 0;
        if (uVar2 != param_4) goto LAB_ram_42053ec8;
LAB_ram_42053f02:
        uVar4 = 0;
LAB_ram_42053ebc:
        param_1 = (int *)*param_1;
        if (param_1 == (int *)0x0) {
          if (param_3 != 0) goto LAB_ram_42053ea4;
          if (param_2 != (int *)0x0) {
            param_4 = 0;
LAB_ram_42053ec8:
            if ((*(short *)((int)param_2 + 10) == (short)param_2[2]) && (*param_2 != 0)) {
              return 0xfffffffa;
            }
            goto LAB_ram_42053ed8;
          }
          break;
        }
        param_4 = 0;
        if (param_2 != (int *)0x0) goto LAB_ram_42053ec8;
LAB_ram_42053eda:
        if ((*(short *)((int)param_1 + 10) == (short)param_1[2]) && (*param_1 != 0)) {
          return 0xfffffffa;
        }
      }
    } while (param_3 != 0);
    uVar1 = 0;
  }
  return uVar1;
}

