
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420589c8(int *param_1,int *param_2,uint param_3)

{
  bool bVar1;
  int *piVar2;
  short sVar3;
  uint uVar4;
  int *piVar5;
  int iVar6;
  
  piVar2 = _DAT_ram_3fcc5334;
  if (param_2 == (int *)0x0) {
    param_2 = &DAT_ram_3c0f7590;
  }
  piVar5 = _DAT_ram_3fcc5334;
  if (param_1 == (int *)0x0) {
    return 0xfffffff0;
  }
  do {
    if (piVar5 == (int *)0x0) {
      bVar1 = false;
LAB_ram_420589e6:
      piVar5 = _DAT_ram_3fcc5334;
      if (param_3 == 0) {
        uVar4 = (uint)*(ushort *)(gp + -0x74e);
        sVar3 = 0x4000;
        do {
          piVar5 = _DAT_ram_3fcc5334;
          if (uVar4 == 0xffff) {
            uVar4 = 0xc000;
          }
          else {
            uVar4 = uVar4 + 1 & 0xffff;
          }
          while( true ) {
            param_3 = uVar4;
            if (piVar5 == (int *)0x0) goto LAB_ram_42058a26;
            if (*(ushort *)((int)piVar5 + 0x12) == uVar4) break;
            piVar5 = (int *)piVar5[3];
          }
          sVar3 = sVar3 + -1;
          param_3 = 0;
        } while (sVar3 != 0);
LAB_ram_42058a26:
        *(short *)(gp + -0x74e) = (short)uVar4;
        if (param_3 == 0) {
          return 0xfffffff8;
        }
      }
      else {
        for (; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
          if ((piVar5 != param_1) &&
             ((((*(byte *)((int)param_1 + 9) & 4) == 0 || ((*(byte *)((int)piVar5 + 9) & 4) == 0))
              && (*(ushort *)((int)piVar5 + 0x12) == param_3)))) {
            if (*piVar5 == *param_2) {
              return 0xfffffff8;
            }
            if (*param_2 == 0) {
              return 0xfffffff8;
            }
            if (*piVar5 == 0) {
              return 0xfffffff8;
            }
          }
        }
      }
      iVar6 = *param_2;
      *(short *)((int)param_1 + 0x12) = (short)param_3;
      *param_1 = iVar6;
      if (!bVar1) {
        param_1[3] = (int)piVar2;
        _DAT_ram_3fcc5334 = param_1;
      }
      return 0;
    }
    if (piVar5 == param_1) {
      bVar1 = true;
      goto LAB_ram_420589e6;
    }
    piVar5 = (int *)piVar5[3];
  } while( true );
}

