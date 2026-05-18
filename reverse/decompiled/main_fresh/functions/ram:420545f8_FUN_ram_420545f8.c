
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420545f8(int *param_1,int *param_2,uint param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  
  if (param_2 == (int *)0x0) {
    param_2 = &DAT_ram_3c0f7590;
  }
  uVar1 = 0xfffffff0;
  if ((param_1 != (int *)0x0) && (uVar1 = 0xfffffffa, param_1[5] == 0)) {
    iVar2 = ((*(byte *)((int)param_1 + 9) & 4) == 0) + 3;
    if (param_3 == 0) {
      param_3 = FUN_ram_420544a0();
      iVar2 = -2;
      if (param_3 == 0) {
        return 0xfffffffe;
      }
    }
    else {
      puVar4 = &DAT_ram_3c0f7548;
      iVar3 = 0;
      do {
        for (piVar5 = *(int **)*puVar4; piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
          if (((*(ushort *)((int)piVar5 + 0x1a) == param_3) &&
              (((*(byte *)((int)param_1 + 9) & 4) == 0 || ((*(byte *)((int)piVar5 + 9) & 4) == 0))))
             && ((*piVar5 == 0 || ((*param_2 == 0 || (*piVar5 == *param_2)))))) {
            return 0xfffffff8;
          }
        }
        iVar3 = iVar3 + 1;
        puVar4 = puVar4 + 1;
      } while (iVar2 != iVar3);
    }
    if (*param_2 != 0) {
      *param_1 = *param_2;
    }
    *(short *)((int)param_1 + 0x1a) = (short)param_3;
    piVar5 = param_1;
    param_1[3] = (int)_DAT_ram_3fcc52f8;
    _DAT_ram_3fcc52f8 = piVar5;
    FUN_ram_420585e0(iVar2);
    uVar1 = 0;
  }
  return uVar1;
}

