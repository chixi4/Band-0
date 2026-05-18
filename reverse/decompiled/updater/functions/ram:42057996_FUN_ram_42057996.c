
int FUN_ram_42057996(int *param_1,int param_2,int param_3)

{
  ushort uVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  ushort uVar9;
  ushort uVar10;
  ushort uVar11;
  int iVar12;
  
  iVar5 = 10;
  piVar4 = (int *)&DAT_ram_3fcb5d24;
  uVar11 = 0;
  uVar10 = 0;
  uVar9 = 0;
  iVar2 = 0;
  iVar8 = 10;
  iVar7 = 10;
  iVar3 = 10;
  do {
    iVar12 = iVar3;
    if (iVar3 == 10) {
      iVar12 = iVar2;
    }
    if ((char)piVar4[5] != '\0') {
      if ((param_1 != (int *)0x0) && (*param_1 == piVar4[1])) {
        if (param_3 == 0) {
          return iVar2;
        }
        if (piVar4[2] == param_3) {
          return iVar2;
        }
      }
      uVar1 = *(ushort *)((int)piVar4 + 0x12);
      if ((char)piVar4[5] == '\x01') {
        if (*piVar4 == 0) {
          iVar12 = iVar3;
          if (uVar10 <= uVar1) {
            iVar7 = iVar2;
            uVar10 = uVar1;
          }
        }
        else {
          iVar12 = iVar3;
          if (uVar9 <= uVar1) {
            iVar5 = iVar2;
            uVar9 = uVar1;
          }
        }
      }
      else {
        iVar12 = iVar3;
        if (uVar11 <= uVar1) {
          iVar8 = iVar2;
          uVar11 = uVar1;
        }
      }
    }
    uVar6 = iVar2 + 1;
    iVar2 = (int)(uVar6 * 0x10000) >> 0x10;
    piVar4 = piVar4 + 6;
    iVar3 = iVar12;
    if ((uVar6 & 0xffff) == 10) {
      iVar3 = -1;
      if (param_2 == 1) {
        iVar3 = iVar12;
        if (9 < iVar12) {
          iVar3 = iVar8;
          if (((9 < iVar8) && (iVar3 = iVar7, iVar7 == 10)) && (iVar3 = iVar5, 9 < iVar5)) {
            return -1;
          }
          FUN_ram_42057930(iVar3);
        }
        if (param_1 != (int *)0x0) {
          *(int *)(&DAT_ram_3fcb5d28 + iVar3 * 0x18) = *param_1;
        }
        *(undefined2 *)(&DAT_ram_3fcb5d36 + iVar3 * 0x18) = 0;
        *(int *)(&DAT_ram_3fcb5d2c + iVar3 * 0x18) = param_3;
      }
      return iVar3;
    }
  } while( true );
}

