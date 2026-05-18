
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4
FUN_ram_4201159e(uint param_1,uint param_2,uint param_3,uint param_4,uint param_5,uint param_6,
                int *param_7,undefined4 *param_8)

{
  uint uVar1;
  int iVar2;
  undefined4 *puVar3;
  uint *puVar4;
  ushort *puVar5;
  int iVar6;
  ushort uVar7;
  uint uVar8;
  int *piVar9;
  uint uVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  uint uStack_78;
  int aiStack_5c [3];
  uint local_50 [7];
  
  if ((((((param_2 & 0x300) == 0x300) || (((param_2 & 0xf0) != 0 && (param_5 != 0)))) ||
       ((uVar1 = param_2 & 0x100, uVar1 != 0 && ((param_5 == 0 || ((int)param_1 < 0)))))) ||
      ((param_3 != 0 && (param_4 == 0)))) ||
     (((((param_2 & 0x400) != 0 && (param_5 != 0)) &&
       (iVar2 = FUN_ram_42011556(param_5), iVar2 == 0)) || ((param_7 != (int *)0x0 && (uVar1 == 0)))
      ))) {
    return 0x102;
  }
  if ((param_2 & 0xfe) == 0) {
    if (uVar1 == 0) {
      param_2 = param_2 | 0xe;
    }
    else {
      param_2 = param_2 | 2;
    }
  }
  uVar1 = 6;
  if (((param_1 != 0xffffffff) && (uVar1 = 0xf, param_1 != 0xfffffffe)) &&
     ((uVar1 = 0x10, param_1 != 0xfffffffd &&
      (((uVar1 = 7, param_1 != 0xfffffffc && (uVar1 = 0x1d, param_1 != 0xfffffffb)) &&
       (uVar1 = 0xb, param_1 != 0xfffffffa)))))) {
    uVar1 = 0xffffffff;
  }
  puVar3 = (undefined4 *)FUN_ram_40390448(8,0x804);
  if (puVar3 != (undefined4 *)0x0) {
    FUN_ram_40394d60();
    if (param_7 == (int *)0x0) {
      uVar12 = 0;
    }
    else {
      if ((uint *)*param_7 == (uint *)0x0) {
        FUN_ram_40394d8e();
        return 0x102;
      }
      uVar12 = *(uint *)*param_7;
      uVar1 = uVar12 >> 0x11 & 0x1f;
      uVar12 = uVar12 >> 0x10 & 1;
    }
    local_50[0] = 0;
    local_50[1] = 0;
    local_50[2] = 0;
    local_50[3] = 0;
    puVar4 = _DAT_ram_3fcb65a8;
    uStack_78 = param_2;
    if ((param_2 & 0xfe) == 0) {
      uStack_78 = param_2 | 0xe;
    }
    for (; puVar4 != (uint *)0x0; puVar4 = (uint *)puVar4[3]) {
      if ((*puVar4 & 4) == 0) {
        if ((param_1 == (int)(short)(ushort)puVar4[1]) &&
           (uVar12 == (*(ushort *)((int)puVar4 + 2) & 1))) {
LAB_ram_42011720:
          if ((uVar1 == 0xffffffff) || (uVar1 == (*puVar4 >> 0x11 & 0x1f))) goto LAB_ram_42011732;
          goto LAB_ram_4201180c;
        }
      }
      else if (uVar12 == (*(ushort *)((int)puVar4 + 2) & 1)) {
        for (piVar9 = (int *)puVar4[2]; piVar9 != (int *)0x0; piVar9 = (int *)piVar9[5]) {
          if (param_1 == (*piVar9 << 0xf) >> 0x10) goto LAB_ram_42011720;
        }
      }
    }
    if (uVar1 == 0xffffffff) {
      iVar13 = 9;
      iVar2 = 0x7fffffff;
      uVar10 = 0;
      uVar1 = 0xffffffff;
      do {
        puVar4 = (uint *)FUN_ram_420113f0(uVar10,uVar12);
        if (puVar4 == (uint *)0x0) {
          local_50[0] = local_50[0] & 0xffc1ffff | (uVar10 & 0x1f) << 0x11;
          puVar4 = local_50;
        }
        FUN_ram_42012280(uVar12,uVar10,aiStack_5c);
        iVar6 = FUN_ram_42011416(puVar4,uStack_78,uVar12,0xffffffff);
        if (iVar6 != 0) {
          iVar6 = iVar2;
          if ((uStack_78 & 0x100) == 0) {
joined_r0x42011832:
            if (iVar13 <= aiStack_5c[0]) goto LAB_ram_420117fc;
          }
          else {
            if ((*puVar4 & 4) == 0) {
              if (uVar1 != 0xffffffff) goto LAB_ram_420117fc;
              goto joined_r0x42011832;
            }
            iVar6 = 0;
            for (uVar8 = puVar4[2]; uVar8 != 0; uVar8 = *(uint *)(uVar8 + 0x14)) {
              iVar6 = iVar6 + 1;
            }
            if (iVar2 <= iVar6) goto joined_r0x42011832;
          }
          uVar1 = uVar10;
          iVar2 = iVar6;
          iVar13 = aiStack_5c[0];
        }
LAB_ram_420117fc:
        uVar10 = uVar10 + 1;
      } while (uVar10 != 0x20);
      if (uVar1 == 0xffffffff) goto LAB_ram_4201180c;
    }
    else {
      puVar4 = (uint *)FUN_ram_420113f0(uVar1,uVar12);
      if (puVar4 == (uint *)0x0) {
        local_50[0] = local_50[0] & 0xffc1ffff | (uVar1 & 0x1f) << 0x11;
        puVar4 = local_50;
      }
LAB_ram_42011732:
      iVar2 = FUN_ram_42011416(puVar4,uStack_78,uVar12,uVar1);
      if (iVar2 == 0) {
LAB_ram_4201180c:
        FUN_ram_40394d8e();
        thunk_FUN_ram_40390608(puVar3);
        return 0x105;
      }
      uVar1 = *puVar4 >> 0x11 & 0x1f;
    }
    puVar5 = (ushort *)FUN_ram_420114a0(uVar1,uVar12);
    if (puVar5 != (ushort *)0x0) {
      if ((param_2 & 0x100) == 0) {
        *puVar5 = 8;
        if (param_5 != 0) {
          FUN_ram_4207bb00(uVar1,param_5,param_6);
        }
        if ((param_2 & 0x200) != 0) {
          _DAT_ram_600c20c0 = _DAT_ram_600c20c0 | uVar1;
        }
        puVar5[2] = (ushort)param_1;
LAB_ram_420118c0:
        uVar10 = 1 << (uVar1 & 0x1f);
        if ((param_2 & 0x400) == 0) {
          uVar7 = *puVar5 & 0xfffd;
          uVar10 = uVar10 | *(uint *)(&DAT_ram_3fcb65a4 + uVar12 * 4);
        }
        else {
          uVar7 = *puVar5 | 2;
          uVar10 = ~uVar10 & *(uint *)(&DAT_ram_3fcb65a4 + uVar12 * 4);
        }
        *puVar5 = uVar7;
        *(uint *)(&DAT_ram_3fcb65a4 + uVar12 * 4) = uVar10;
        if (-1 < (int)param_1) {
          (*(code *)&SUB_ram_400107e4)(uVar12,param_1,uVar1);
        }
        uVar11 = *(undefined4 *)(puVar5 + 4);
        *puVar3 = puVar5;
        puVar3[1] = uVar11;
        FUN_ram_403909f6(uVar1);
        if ((int)(param_2 << 0x14) < 0) {
          FUN_ram_40390ab4(puVar3);
        }
        iVar2 = (*(code *)&SUB_ram_40010918)((int)param_2 >> 1 & 0x7f);
        *puVar5 = *puVar5 | (ushort)(iVar2 << 8);
        (*(code *)&SUB_ram_400107cc)(uVar1,iVar2);
        (*(code *)&SUB_ram_400107dc)(uVar1,(param_2 & 0x200) != 0);
        FUN_ram_40394d8e();
        if (param_8 == (undefined4 *)0x0) {
          thunk_FUN_ram_40390608(puVar3);
        }
        else {
          *param_8 = puVar3;
        }
        return 0;
      }
      puVar4 = (uint *)FUN_ram_40390448(0x18,0x804);
      if (puVar4 != (uint *)0x0) {
        (*(code *)&SUB_ram_40010488)(puVar4,0,0x18);
        puVar4[2] = param_4;
        puVar4[4] = param_6;
        uVar10 = *(uint *)(puVar5 + 4);
        puVar4[1] = param_3;
        puVar4[5] = uVar10;
        puVar4[3] = param_5;
        *puVar4 = *puVar4 & 0xfffe0001 | (param_1 & 0xffff) << 1;
        *(uint **)(puVar5 + 4) = puVar4;
        *puVar5 = *puVar5 | 4;
        FUN_ram_4207bb00(uVar1,0x4038090a,puVar5);
        goto LAB_ram_420118c0;
      }
    }
    FUN_ram_40394d8e();
    thunk_FUN_ram_40390608(puVar3);
  }
  return 0x101;
}

