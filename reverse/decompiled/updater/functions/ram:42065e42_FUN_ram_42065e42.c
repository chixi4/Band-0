
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42065e42(int param_1)

{
  undefined1 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  int iVar9;
  char *pcVar10;
  undefined4 uVar11;
  uint uVar12;
  int iVar13;
  int iVar14;
  int iVar15;
  undefined1 auStack_90 [16];
  byte abStack_80 [76];
  
  iVar9 = *(int *)(param_1 + 0x7c);
  if (iVar9 == 0) {
    return -1;
  }
  if ((*(byte *)(param_1 + 0x7a) & 2) == 0) {
    return 0;
  }
  if (*(int *)(iVar9 + 0xdc) != 0) {
    return 0;
  }
  if (((*(uint *)(iVar9 + 0xd8) & 0xffffffef) != 0x20) && (*(uint *)(iVar9 + 0xd8) != 0x40)) {
    return -1;
  }
  if (*(int *)(iVar9 + 100) == 0) {
    return -1;
  }
  FUN_ram_42066bee(0x3fcb5e80);
  uVar1 = DAT_ram_3fcb5f18;
  iVar4 = _DAT_ram_3fcb5f14;
  pcVar10 = _DAT_ram_3fcb5f0c;
  if ((((_DAT_ram_3fcb5f0c != (char *)0x0) && (_DAT_ram_3fcb5f14 != 0)) && (_DAT_ram_3fcb5f1c != 0))
     && (0x1f < DAT_ram_3fcb5f20)) {
    uVar12 = (uint)DAT_ram_3fcb5f10;
    iVar9 = FUN_ram_42066ad8(iVar9 + 0x95,*(undefined4 *)(iVar9 + 0xd8),_DAT_ram_3fcb5f1c,0x20,0,0,0
                             ,auStack_90);
    if ((-1 < iVar9) && (*pcVar10 == '\x02')) {
      pcVar10 = pcVar10 + 1;
      iVar9 = FUN_ram_4205eb0e(pcVar10,uVar12 - 1);
      if (iVar9 != 0) {
        iVar2 = FUN_ram_4205e9e2();
        iVar13 = *(int *)(param_1 + 0x7c);
        if (*(int *)(iVar13 + 300) != 0) {
          iVar14 = 0x30;
          if ((iVar2 != 0x14) && (iVar14 = 0x40, iVar2 != 0x15)) {
            iVar14 = (uint)(iVar2 == 0x13) << 5;
          }
          iVar6 = *(int *)(iVar13 + 0x15c);
          iVar15 = uVar12 + 0xf + iVar6;
          iVar3 = thunk_FUN_ram_4039047a(iVar15);
          if (iVar3 != 0) {
            FUN_ram_40399daa(iVar3,iVar13 + 0x13c,iVar6);
            iVar6 = FUN_ram_40399daa(*(int *)(iVar13 + 0x15c) + iVar3,auStack_90);
            FUN_ram_40399daa(iVar6 + 0x10,pcVar10,uVar12 - 1);
            iVar6 = FUN_ram_42065e1e(iVar14,iVar3,iVar15,abStack_80);
            FUN_ram_42022954(iVar3,iVar15);
            if ((-1 < iVar6) && (uVar8 = *(uint *)(iVar13 + 0x130), uVar8 <= (uint)(iVar14 << 3))) {
              if ((uVar8 & 7) != 0) {
                uVar7 = 8 - (uVar8 & 7);
                abStack_80[uVar8 >> 3] =
                     (byte)(((int)(uint)abStack_80[uVar8 >> 3] >> (uVar7 & 0x1f)) << (uVar7 & 0x1f))
                ;
              }
              iVar13 = FUN_ram_40399d6c(abStack_80,iVar13 + 0xec,*(undefined4 *)(iVar13 + 300));
              if (iVar13 == 0) {
                iVar13 = 0x30;
                if ((iVar2 != 0x14) && (iVar13 = 0x40, iVar2 != 0x15)) {
                  iVar13 = (uint)(iVar2 == 0x13) << 5;
                }
                iVar2 = *(int *)(param_1 + 0x7c);
                iVar14 = FUN_ram_4206582a(*(int *)(iVar2 + 0x68) * 6 + uVar12 + 0x1b);
                if (iVar14 == 0) {
LAB_ram_42066092:
                  iVar2 = -1;
                }
                else {
                  iVar3 = FUN_ram_420658ce(iVar14,*(int *)(iVar2 + 0x68) << 1);
                  iVar3 = FUN_ram_4205e538(*(undefined4 *)(iVar2 + 100),
                                           *(undefined4 *)(iVar2 + 0x54),iVar3,
                                           *(int *)(iVar2 + 0x68) + iVar3);
                  if (iVar3 < 0) goto LAB_ram_42066092;
                  iVar3 = FUN_ram_420658ce(iVar14,*(int *)(iVar2 + 0x68) << 1);
                  iVar3 = FUN_ram_4205e538(*(undefined4 *)(iVar2 + 100),
                                           *(undefined4 *)(iVar2 + 0x4c),iVar3,
                                           *(int *)(iVar2 + 0x68) + iVar3);
                  if (iVar3 < 0) goto LAB_ram_42066092;
                  uVar11 = *(undefined4 *)(param_1 + 0x68);
                  uVar5 = FUN_ram_420658ce(iVar14,*(undefined4 *)(iVar2 + 0x68));
                  iVar3 = FUN_ram_420663cc(uVar11,uVar5,*(undefined4 *)(iVar2 + 0x68));
                  if (iVar3 < 0) goto LAB_ram_42066092;
                  uVar11 = *(undefined4 *)(iVar2 + 0x44);
                  uVar5 = FUN_ram_420658ce(iVar14,*(undefined4 *)(iVar2 + 0x68));
                  iVar3 = FUN_ram_420663cc(uVar11,uVar5,*(undefined4 *)(iVar2 + 0x68));
                  if (iVar3 < 0) goto LAB_ram_42066092;
                  FUN_ram_42065a00(iVar14,auStack_90);
                  FUN_ram_42065a00(iVar14,pcVar10,uVar12 - 1);
                  FUN_ram_42065a00(iVar14,iVar2 + 0xe6,6);
                  FUN_ram_42065a00(iVar14,iVar2 + 0xe0,6);
                  iVar2 = FUN_ram_42065e1e(iVar13,*(undefined4 *)(iVar14 + 8),
                                           *(undefined4 *)(iVar14 + 4),abStack_80);
                  iVar2 = iVar2 >> 0x1f;
                }
                FUN_ram_4206587c(iVar14);
                if (iVar2 == 0) {
                  iVar4 = FUN_ram_4205ed0e(iVar9,abStack_80,iVar13,iVar4,uVar1);
                  FUN_ram_4205eb5e(iVar9);
                  iVar9 = -(uint)(iVar4 != 1);
                  goto LAB_ram_42065f32;
                }
              }
            }
          }
        }
        FUN_ram_4205eb5e(iVar9);
      }
    }
  }
  iVar9 = -1;
LAB_ram_42065f32:
  if (_DAT_ram_3fcb5f0c != (char *)0x0) {
    thunk_FUN_ram_40390608();
  }
  if (_DAT_ram_3fcb5f1c != 0) {
    thunk_FUN_ram_40390608();
  }
  if (_DAT_ram_3fcb5f14 != 0) {
    thunk_FUN_ram_40390608();
  }
  (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb5f0c,0,0x18);
  return iVar9;
}

