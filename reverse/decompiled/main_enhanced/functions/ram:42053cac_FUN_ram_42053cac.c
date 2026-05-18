
void FUN_ram_42053cac(int *param_1,uint param_2)

{
  ushort uVar1;
  short sVar2;
  int *piVar3;
  uint uVar4;
  
  if (param_1 != (int *)0x0) {
    uVar1 = *(ushort *)(param_1 + 2);
    if (uVar1 <= param_2) {
      return;
    }
    sVar2 = (short)param_2;
    do {
      uVar4 = (uint)*(ushort *)((int)param_1 + 10);
      if (param_2 <= uVar4) {
        if (((((*(byte *)(param_1 + 3) & 0xf) != 0) || (uVar4 == param_2)) ||
            ((*(byte *)((int)param_1 + 0xd) & 2) != 0)) ||
           ((piVar3 = (int *)FUN_ram_420530b8(param_1,(param_1[1] - (int)param_1) + param_2),
            piVar3 != (int *)0x0 && (param_1 == piVar3)))) {
          *(short *)((int)param_1 + 10) = (short)param_2;
          *(short *)(param_1 + 2) = (short)param_2;
          if (*param_1 != 0) {
            FUN_ram_42053ac4();
          }
          *param_1 = 0;
          return;
        }
        break;
      }
      param_2 = param_2 - uVar4 & 0xffff;
      *(ushort *)(param_1 + 2) = (short)param_1[2] + (sVar2 - uVar1);
      param_1 = (int *)*param_1;
    } while (param_1 != (int *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf1e();
}

