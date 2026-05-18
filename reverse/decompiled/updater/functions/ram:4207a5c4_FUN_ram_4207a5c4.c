
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207a5c4(undefined4 *param_1,int *param_2)

{
  bool bVar1;
  int *piVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  uint uVar9;
  int *piVar10;
  int *piVar11;
  undefined4 auStack_34 [2];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  if (param_2 == (int *)0x0) {
    return 0x102;
  }
  uVar9 = -(*(byte *)(param_1 + 2) & 1) & 3;
  if (param_1[1] == 0) {
    puVar3 = (undefined4 *)FUN_ram_40390574(1,0x34,0x804);
    uVar9 = uVar9 | 2;
    puVar8 = (undefined4 *)0x0;
    if (puVar3 == (undefined4 *)0x0) {
      return 0x101;
    }
  }
  else {
    puVar8 = (undefined4 *)0x0;
    if (param_1[1] == 1) {
      uVar9 = uVar9 | 1;
      puVar8 = (undefined4 *)FUN_ram_40390574(1,0x38,0x804);
      if (puVar8 == (undefined4 *)0x0) {
        return 0x101;
      }
    }
    puVar3 = (undefined4 *)0x0;
  }
  puVar7 = (undefined4 *)*param_1;
  if (puVar7 == (undefined4 *)0x0) {
    piVar10 = (int *)0x0;
    if (uVar9 == 0) {
LAB_ram_4207a7d2:
      if (puVar3 != (undefined4 *)0x0) {
        piVar10[2] = (int)puVar3;
        uVar5 = param_1[2];
        puVar3[5] = 0x3f;
        *puVar3 = piVar10;
        *(byte *)(puVar3 + 9) = *(byte *)(puVar3 + 9) & 0xfd | (byte)uVar5 & 2;
        puVar3[4] = 0;
        puVar3[8] = 0x4206a53a;
        *param_2 = (int)puVar3;
      }
      if (puVar8 != (undefined4 *)0x0) {
        piVar10[3] = (int)puVar8;
        puVar8[4] = 1;
        uVar5 = param_1[2];
        puVar8[5] = 0x3f;
        *puVar8 = piVar10;
        *(byte *)(puVar8 + 9) = *(byte *)(puVar8 + 9) & 0xfd | (byte)uVar5 & 2;
        puVar8[8] = 0x4206a4b0;
        *param_2 = (int)puVar8;
      }
      iVar6 = *param_2;
      *(undefined4 *)(iVar6 + 8) = 0xb33fffff;
      *(undefined4 *)(iVar6 + 0xc) = 0;
      return 0;
    }
    piVar10 = (int *)FUN_ram_40390574(1,100,0x804);
    if (piVar10 == (int *)0x0) {
      piVar2 = (int *)0x0;
    }
    else {
      FUN_ram_40394d60();
      bVar1 = _DAT_ram_3fcb0a00 != (int *)0x0;
      if (!bVar1) {
        _DAT_ram_3fcb0a00 = piVar10;
      }
      piVar2 = _DAT_ram_3fcb0a00;
      _DAT_ram_3fcb0a04 = _DAT_ram_3fcb0a04 + 1;
      FUN_ram_40394d8e();
      if (bVar1) {
        thunk_FUN_ram_40390608(piVar10);
      }
      else {
        piVar2[0x13] = -0x4cc00001;
        *piVar2 = 0;
        piVar2[0x14] = 0;
        FUN_ram_4039398a();
        _DAT_ram_600c0014 = _DAT_ram_600c0014 | 0x40;
        _DAT_ram_600c001c = _DAT_ram_600c001c & 0xffffffbf;
        FUN_ram_4039399a();
        auStack_34[0] = 0;
        FUN_ram_4207b89c(piVar2 + 2,auStack_34);
      }
      piVar2[1] = 0;
      piVar4 = (int *)FUN_ram_40390574(1,0x1c,0x804);
      if (piVar4 != (int *)0x0) {
        FUN_ram_40394d60();
        piVar11 = (int *)piVar2[0x17];
        piVar10 = piVar11;
        if (piVar11 == (int *)0x0) {
          piVar2[0x17] = (int)piVar4;
          piVar10 = piVar4;
        }
        piVar2[0x18] = piVar2[0x18] + 1;
        FUN_ram_40394d8e();
        if (piVar11 != (int *)0x0) {
          thunk_FUN_ram_40390608(piVar4);
        }
        else {
          piVar10[5] = -0x4cc00001;
          *piVar10 = (int)piVar2;
          piVar10[1] = 0;
          piVar10[6] = 0;
          FUN_ram_40394d60();
          *(int *)(&DAT_ram_3fcb0a04 + *piVar2 * 4) = *(int *)(&DAT_ram_3fcb0a04 + *piVar2 * 4) + 1;
          FUN_ram_40394d8e();
        }
        FUN_ram_40394d60();
        if ((piVar10[4] & uVar9) == 0) {
          piVar10[4] = piVar10[4] | uVar9;
          FUN_ram_40394d8e();
          FUN_ram_40394d60();
          uVar9 = 0;
          piVar2[piVar10[1] + 0x18] = piVar2[piVar10[1] + 0x18] + 1;
          FUN_ram_40394d8e();
        }
        else {
          FUN_ram_40394d8e();
        }
        FUN_ram_4207a450(piVar10);
        FUN_ram_4207a3d0(piVar2);
        if (uVar9 != 0) {
          piVar2 = (int *)0x0;
          piVar10 = (int *)0x0;
          uVar5 = 0x105;
          goto LAB_ram_4207a8c6;
        }
        goto LAB_ram_4207a7d2;
      }
    }
    piVar10 = (int *)0x0;
    uVar5 = 0x101;
  }
  else {
    piVar10 = (int *)*puVar7;
    if ((piVar10 != (int *)0x0) && (puVar7[4] != param_1[1])) {
      iVar6 = *piVar10;
      FUN_ram_40394d60();
      iVar6 = piVar10[1] * 4 + iVar6;
      *(int *)(iVar6 + 0x60) = *(int *)(iVar6 + 0x60) + 1;
      FUN_ram_40394d8e();
      goto LAB_ram_4207a7d2;
    }
    piVar2 = (int *)0x0;
    uVar5 = 0x102;
  }
LAB_ram_4207a8c6:
  if (puVar3 != (undefined4 *)0x0) {
    thunk_FUN_ram_40390608(puVar3);
  }
  if (puVar8 != (undefined4 *)0x0) {
    thunk_FUN_ram_40390608(puVar8);
  }
  if (piVar10 != (int *)0x0) {
    FUN_ram_4207a450(piVar10);
  }
  if (piVar2 != (int *)0x0) {
    FUN_ram_4207a3d0(piVar2);
  }
  return uVar5;
}

