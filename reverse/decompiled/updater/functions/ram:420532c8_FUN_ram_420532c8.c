
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_420532c8(int *param_1,int *param_2,uint param_3,int param_4)

{
  short sVar1;
  int iVar2;
  undefined2 uVar3;
  int iVar4;
  int *piVar5;
  int *piVar6;
  
  iVar2 = -0x10;
  if (((param_1 != (int *)0x0) && (iVar2 = -0x10, param_2 != (int *)0x0)) &&
     (iVar2 = -10, param_1[5] == 0)) {
    iVar2 = *param_2;
    *(short *)(param_1 + 7) = (short)param_3;
    param_1[1] = iVar2;
    if ((char)param_1[2] == '\0') {
      iVar4 = FUN_ram_42058ae0(param_1,param_1 + 1);
    }
    else {
      iVar4 = FUN_ram_42051704((char)param_1[2]);
    }
    iVar2 = -4;
    if (iVar4 != 0) {
      if (*param_1 == 0) {
        *param_1 = *(int *)(iVar4 + 4);
      }
      sVar1 = *(short *)((int)param_1 + 0x1a);
      if (sVar1 == 0) {
        iVar2 = FUN_ram_420525c0();
        *(short *)((int)param_1 + 0x1a) = (short)iVar2;
        if (iVar2 == 0) {
          return -2;
        }
      }
      else {
        piVar5 = _DAT_ram_3fcb67c0;
        if ((*(byte *)((int)param_1 + 9) & 4) != 0) {
          for (; piVar6 = _DAT_ram_3fcb67bc, piVar5 != (int *)0x0; piVar5 = (int *)piVar5[3]) {
            if (((*(short *)((int)piVar5 + 0x1a) == sVar1) && (*(ushort *)(piVar5 + 7) == param_3))
               && ((*piVar5 == *param_1 && (piVar5[1] == *param_2)))) {
              return -8;
            }
          }
          for (; piVar6 != (int *)0x0; piVar6 = (int *)piVar6[3]) {
            if (((*(short *)((int)piVar6 + 0x1a) == sVar1) && (*(ushort *)(piVar6 + 7) == param_3))
               && ((*piVar6 == *param_1 && (piVar6[1] == *param_2)))) {
              return -8;
            }
          }
        }
      }
      iVar2 = FUN_ram_4205328c(param_1);
      param_1[0xb] = 0x16801680;
      param_1[0x15] = iVar2;
      iVar2 = iVar2 + -1;
      param_1[0x12] = iVar2;
      param_1[0x17] = iVar2;
      param_1[0x18] = iVar2;
      *(undefined2 *)(param_1 + 0x19) = 0x1680;
      param_1[10] = 0;
      param_1[0xc] = 0;
      uVar3 = FUN_ram_4205329c(0x218,iVar4,param_1 + 1);
      *(undefined2 *)((int)param_1 + 0x36) = uVar3;
      *(undefined2 *)(param_1 + 0x13) = 1;
      param_1[0x22] = param_4;
      iVar2 = FUN_ram_42054ed2(param_1,2);
      if (iVar2 == 0) {
        param_1[5] = 2;
        if (sVar1 != 0) {
          piVar5 = _DAT_ram_3fcb67c8;
          if (_DAT_ram_3fcb67c8 == param_1) {
            _DAT_ram_3fcb67c8 = (int *)param_1[3];
          }
          else {
            do {
              piVar6 = piVar5;
              if (piVar6 == (int *)0x0) goto LAB_ram_420533fa;
              piVar5 = (int *)piVar6[3];
            } while ((int *)piVar6[3] != param_1);
            piVar6[3] = param_1[3];
          }
        }
LAB_ram_420533fa:
        piVar5 = param_1;
        param_1[3] = (int)_DAT_ram_3fcb67c0;
        _DAT_ram_3fcb67c0 = piVar5;
        FUN_ram_420559aa();
        DAT_ram_3fcb67ba = 1;
        FUN_ram_420552e2(param_1);
      }
    }
  }
  return iVar2;
}

