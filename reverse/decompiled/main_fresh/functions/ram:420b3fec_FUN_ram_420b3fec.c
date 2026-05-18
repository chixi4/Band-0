
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420b3fec(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  int *piVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int *piVar9;
  undefined4 uVar10;
  uint uVar11;
  undefined4 auStack_34 [2];
  
  if ((param_1 == (undefined4 *)0x0) || (param_2 == (int *)0x0)) {
    return 0x102;
  }
  uVar11 = -(*(byte *)(param_1 + 2) & 1) & 3;
  if (param_1[1] == 0) {
    puVar3 = (undefined4 *)FUN_ram_403905a0(1,0x34,0x804);
    uVar11 = uVar11 | 2;
    puVar8 = (undefined4 *)0x0;
    if (puVar3 == (undefined4 *)0x0) {
      return 0x101;
    }
  }
  else {
    puVar8 = (undefined4 *)0x0;
    if (param_1[1] == 1) {
      uVar11 = uVar11 | 1;
      puVar8 = (undefined4 *)FUN_ram_403905a0(1,0x38,0x804);
      if (puVar8 == (undefined4 *)0x0) {
        return 0x101;
      }
    }
    puVar3 = (undefined4 *)0x0;
  }
  puVar7 = (undefined4 *)*param_1;
  if (puVar7 == (undefined4 *)0x0) {
    if (uVar11 == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    piVar4 = (int *)FUN_ram_403905a0(1,100,0x804);
    if (piVar4 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_ram_40396966();
      bVar1 = _DAT_ram_3fcb7e5c != (int *)0x0;
      if (!bVar1) {
        _DAT_ram_3fcb7e5c = piVar4;
      }
      piVar2 = _DAT_ram_3fcb7e5c;
      _DAT_ram_3fcb7e60 = _DAT_ram_3fcb7e60 + 1;
      FUN_ram_40396994();
      if (bVar1) {
        thunk_FUN_ram_40390634(piVar4);
      }
      else {
        piVar2[0x13] = -0x4cc00001;
        *piVar2 = 0;
        piVar2[0x14] = 0;
        FUN_ram_40394a58();
        _DAT_ram_600c0014 = _DAT_ram_600c0014 | 0x40;
        _DAT_ram_600c001c = _DAT_ram_600c001c & 0xffffffbf;
        FUN_ram_40394a68();
        auStack_34[0] = 0;
        FUN_ram_420b5f1a(piVar2 + 2,auStack_34);
      }
      piVar2[1] = 0;
      piVar5 = (int *)FUN_ram_403905a0(1,0x1c,0x804);
      if (piVar5 != (int *)0x0) {
        FUN_ram_40396966();
        piVar9 = (int *)piVar2[0x17];
        piVar4 = piVar9;
        if (piVar9 == (int *)0x0) {
          piVar2[0x17] = (int)piVar5;
          piVar4 = piVar5;
        }
        piVar2[0x18] = piVar2[0x18] + 1;
        FUN_ram_40396994();
        if (piVar9 != (int *)0x0) {
          thunk_FUN_ram_40390634(piVar5);
        }
        else {
          piVar4[5] = -0x4cc00001;
          *piVar4 = (int)piVar2;
          piVar4[1] = 0;
          piVar4[6] = 0;
          FUN_ram_40396966();
          *(int *)(&DAT_ram_3fcb7e60 + *piVar2 * 4) = *(int *)(&DAT_ram_3fcb7e60 + *piVar2 * 4) + 1;
          FUN_ram_40396994();
        }
        FUN_ram_40396966();
        if ((piVar4[4] & uVar11) == 0) {
          piVar4[4] = piVar4[4] | uVar11;
          FUN_ram_40396994();
          FUN_ram_40396966();
          uVar11 = 0;
          piVar2[piVar4[1] + 0x18] = piVar2[piVar4[1] + 0x18] + 1;
          FUN_ram_40396994();
        }
        else {
          FUN_ram_40396994();
        }
        FUN_ram_420b3e64(piVar4);
        FUN_ram_420b3dd0(piVar2);
        if (uVar11 == 0) goto LAB_ram_420b40b6;
        piVar2 = (int *)0x0;
        piVar4 = (int *)0x0;
        uVar10 = 0x105;
        goto LAB_ram_420b42f8;
      }
    }
    piVar4 = (int *)0x0;
    uVar10 = 0x101;
  }
  else {
    piVar4 = (int *)*puVar7;
    if ((piVar4 != (int *)0x0) && (puVar7[4] != param_1[1])) {
      iVar6 = *piVar4;
      FUN_ram_40396966();
      iVar6 = piVar4[1] * 4 + iVar6;
      *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
      FUN_ram_40396994();
LAB_ram_420b40b6:
      if (puVar3 != (undefined4 *)0x0) {
        piVar4[2] = (int)puVar3;
        uVar10 = param_1[2];
        puVar3[5] = 0x3f;
        *puVar3 = piVar4;
        *(byte *)(puVar3 + 9) = *(byte *)(puVar3 + 9) & 0xfd | (byte)uVar10 & 2;
        puVar3[4] = 0;
        puVar3[8] = 0x420a3f62;
        *param_2 = (int)puVar3;
      }
      if (puVar8 != (undefined4 *)0x0) {
        piVar4[3] = (int)puVar8;
        puVar8[4] = 1;
        uVar10 = param_1[2];
        puVar8[5] = 0x3f;
        *puVar8 = piVar4;
        *(byte *)(puVar8 + 9) = *(byte *)(puVar8 + 9) & 0xfd | (byte)uVar10 & 2;
        puVar8[8] = 0x420a3ed8;
        *param_2 = (int)puVar8;
      }
      iVar6 = *param_2;
      *(undefined4 *)(iVar6 + 8) = 0xb33fffff;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      return 0;
    }
    piVar2 = (int *)0x0;
    uVar10 = 0x102;
  }
LAB_ram_420b42f8:
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_ram_40390634(puVar3);
  }
  if (puVar8 != (undefined4 *)0x0) {
    thunk_FUN_ram_40390634(puVar8);
  }
  if (piVar4 != (int *)0x0) {
    FUN_ram_420b3e64(piVar4);
  }
  if (piVar2 != (int *)0x0) {
    FUN_ram_420b3dd0(piVar2);
  }
  return uVar10;
}

