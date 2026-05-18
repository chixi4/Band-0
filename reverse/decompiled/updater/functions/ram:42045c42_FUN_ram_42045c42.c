
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42045c42(int param_1,int param_2)

{
  int iVar1;
  char *pcVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined1 uVar6;
  uint uVar7;
  byte bVar8;
  int iVar9;
  char cVar10;
  int iVar11;
  int iVar12;
  uint uStack_58;
  undefined1 auStack_54 [32];
  byte bStack_34;
  
  iVar12 = *(int *)(gp + -0x2b8);
  FUN_ram_42040f3a();
  (*(code *)&SUB_ram_40010488)(auStack_54,0,0x24);
  iVar9 = *(int *)(gp + -0x2b8);
  cVar10 = '\x01';
  if (*(char *)(iVar9 + 0x361) == '\0') {
    cVar10 = DAT_ram_3fcb51c3;
  }
  if (DAT_ram_3fcb4f8c == '\x02') {
    return 1;
  }
  if ((((DAT_ram_3fcb51c9 != '\0') && (*(char *)(iVar9 + 0x415) != '\0')) &&
      ((*(ushort *)(param_2 + 6) & 0x10) == 0)) && (*(int *)(param_2 + 100) == 0)) {
    FUN_ram_42033fd8(1,8,4,0x3c07c968);
    DAT_ram_3fcb3fe1 = 1;
    return 0;
  }
  iVar11 = *(int *)(param_2 + 0x24);
  iVar1 = FUN_ram_420455c4(iVar11);
  if (iVar1 == 0) {
    if (*(uint *)(iVar12 + 4) != (uint)*(byte *)(iVar11 + 1)) {
      return 0;
    }
    iVar12 = FUN_ram_40399d6c(iVar12 + 8,iVar11 + 2);
    if (iVar12 != 0) {
      return 0;
    }
  }
  if (((*(char *)(iVar9 + 0x92) != '\0') && (*(int *)(param_2 + 100) == 0)) &&
     (iVar12 = FUN_ram_40399d6c(iVar9 + 0x93,param_1 + 0x10,6), iVar12 != 0)) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 6) & 2) != 0) {
    DAT_ram_3fcb3fe0 = 1;
    return 0;
  }
  if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') {
    return 1;
  }
  if (*(int *)(_DAT_ram_3fcb4f84 + 0x98) - 2U < 2) {
    return 0;
  }
  if (*(int *)(_DAT_ram_3fcb4f84 + 0x98) == 5) {
    return 0;
  }
  iVar12 = *(int *)(param_2 + 0x3c);
  *(undefined1 *)(param_2 + 0x60) = 0;
  if ((iVar12 == 0) && (*(int *)(param_2 + 0x34) == 0)) {
    if (*(int *)(param_2 + 0x38) == 0) {
      if ((*(ushort *)(param_2 + 6) & 0x10) == 0) {
        if (((*(char *)(iVar9 + 0x415) != '\0') && (*(int *)(param_2 + 100) != 0)) &&
           (*(char *)(iVar11 + 1) != '\0')) {
          return 1;
        }
        FUN_ram_42045c02();
        *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) = *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) & 0xffffffef;
        *(undefined1 *)(param_2 + 0x60) = 0;
      }
      else {
        uStack_58 = (*(code *)&SUB_ram_400104a8)(iVar9 + 0x2f);
        if ((_DAT_ram_3fcb50e8 == 0) || (*(code **)(_DAT_ram_3fcb50e8 + 0x38) == (code *)0x0)) {
          uVar5 = 0x3c07dcd8;
          uVar4 = 1;
          uVar3 = 8;
          goto LAB_ram_42045f64;
        }
        iVar9 = (**(code **)(_DAT_ram_3fcb50e8 + 0x38))(iVar9 + 0x2f,&uStack_58);
        if (iVar9 == 0) {
          FUN_ram_42033fd8(1,8,2,&DAT_ram_3c080048,*(int *)(gp + -0x2b8) + 0x2f);
          DAT_ram_3fcb3fe0 = 1;
          return 0;
        }
        if ((uStack_58 & 0xfffffff7) != 5) {
          FUN_ram_42033fd8(1,8,4,0x3c07ca80,*(int *)(gp + -0x2b8) + 0x2f);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar9);
          DAT_ram_3fcb3fe0 = 1;
          return 0;
        }
        FUN_ram_42045c02();
        uVar6 = 7;
        if ((uStack_58 != 5) && (uVar6 = DAT_ram_3fcb512e, uStack_58 == 0xd)) {
          uVar6 = 8;
        }
        DAT_ram_3fcb512e = uVar6;
        _DAT_ram_3fcb511c = 0;
        _DAT_ram_3fcb5120 = 0;
        _DAT_ram_3fcb5124 = 0;
        _DAT_ram_3fcb5128 = 0;
        FUN_ram_40399daa(&DAT_ram_3fcb511c,iVar9);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar9);
        *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) = *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) | 0x10;
        uVar6 = 1;
LAB_ram_42045de0:
        *(undefined1 *)(param_2 + 0x60) = uVar6;
      }
    }
    else {
      FUN_ram_42045c02();
      FUN_ram_4203513a(param_2);
      *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) = *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) | 0x10;
    }
  }
  else {
    FUN_ram_42045c02();
    iVar9 = _DAT_ram_3fcb4f84;
    *(undefined1 *)(param_2 + 0x60) = 5;
    uVar7 = *(uint *)(iVar9 + 0xa4) & 0xffffffef;
    if (iVar12 == 0) {
      *(uint *)(iVar9 + 0xa4) = uVar7;
LAB_ram_42045d90:
      iVar9 = 0;
    }
    else {
      *(uint *)(iVar9 + 0xa4) = uVar7 | 0x10;
      iVar9 = FUN_ram_42034980(param_2);
      DAT_ram_3fcb3fe0 = *(undefined1 *)(param_2 + 0x6c);
      if (iVar9 == 0) goto LAB_ram_42045d90;
      FUN_ram_42033fd8(1,8,4,0x3c07c9a4,DAT_ram_3fcb5130,DAT_ram_3fcb512e,DAT_ram_3fcb512d,
                       *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                       *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),
                       *(undefined1 *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0xf));
    }
    if (*(int *)(param_2 + 0x34) == 0) {
LAB_ram_42046356:
      if (iVar9 == 0) {
        return 0;
      }
    }
    else if (cVar10 == '\0') {
      if (*(char *)(*(int *)(gp + -0x2b8) + 0x364) != '\0') goto LAB_ram_42046356;
      if (iVar9 == 0) {
        FUN_ram_42045c02();
        *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) = *(uint *)(_DAT_ram_3fcb4f84 + 0xa4) | 0x10;
        iVar9 = FUN_ram_42034714(param_2);
        DAT_ram_3fcb3fe0 = *(undefined1 *)(param_2 + 0x6c);
        if (iVar9 == 0) {
          FUN_ram_42033fd8(1,8,4,0x3c07c9f0,DAT_ram_3fcb5130,DAT_ram_3fcb512e,DAT_ram_3fcb512d,
                           *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                           *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),
                           *(undefined1 *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0xf));
          return 0;
        }
      }
      else {
        iVar9 = FUN_ram_42034714(param_2);
        if (iVar9 != 0) {
          FUN_ram_42045c02();
          FUN_ram_42034980(param_2);
          DAT_ram_3fcb3fe0 = *(undefined1 *)(param_2 + 0x6c);
          if ((*(char *)(param_2 + 0x60) != '\a') && (_DAT_ram_3fcb50ec == 0)) {
            uVar6 = 4;
            goto LAB_ram_42045de0;
          }
        }
      }
    }
    else if (iVar9 == 0) {
      FUN_ram_42033fd8(1,8,4,0x3c07ca3c);
      DAT_ram_3fcb3fe0 = 1;
      return 0;
    }
  }
  iVar9 = *(int *)(param_2 + 0x2c);
  if (iVar9 != 0) {
    for (iVar12 = 2; iVar12 <= (int)(*(byte *)(iVar9 + 1) + 1); iVar12 = iVar12 + 1) {
      if ((((*(byte *)(iVar9 + iVar12) & 0x7f) == 0x7b) &&
          (*(char *)(*(int *)(gp + -0x2b8) + 0x417) == '\0')) &&
         (*(char *)(param_2 + 0x60) == '\x06')) {
        uVar5 = 0x3c07dcf8;
        uVar4 = 1;
        goto LAB_ram_42046050;
      }
    }
  }
  iVar9 = *(int *)(param_2 + 0x68);
  if (iVar9 == 0) {
LAB_ram_42046092:
    if (((*(char *)(*(int *)(gp + -0x2b8) + 0x418) != '\x01') && (DAT_ram_3fcb51c2 == '\0')) ||
       (DAT_ram_3fcb51c1 != '\0')) {
      cVar10 = *(char *)(*(int *)(gp + -0x2b8) + 0x417);
      if ((cVar10 == '\x01') && (DAT_ram_3fcb51c0 == '\0')) {
        FUN_ram_42033fd8(1,4,3,0x3c07e894);
        DAT_ram_3fcb3fe0 = 1;
        return 0;
      }
      if (DAT_ram_3fcb512d == '\x10') {
        bVar8 = cVar10 - 1;
        if (((bStack_34 & 0x20) == 0) || (1 < bVar8)) {
          if ((*(uint *)(param_2 + 0x70) & 0x200) == 0) {
            if (*(char *)(param_2 + 0x60) != '\a') goto LAB_ram_420461ea;
            if ((*(uint *)(param_2 + 0x70) & 0x100) == 0) {
              if ((bStack_34 & 0x20) == 0) {
                uVar4 = 0x3c072f34;
              }
              else {
                uVar4 = 0x3c072f38;
              }
              FUN_ram_42033fd8(1,4,3,0x3c07e948,uVar4);
              DAT_ram_3fcb512d = '\x05';
            }
            else {
              if ((bStack_34 & 0x20) == 0) {
                uVar4 = 0x3c072f34;
              }
              else {
                uVar4 = 0x3c072f38;
              }
              FUN_ram_42033fd8(1,4,3,0x3c07e908,uVar4);
              DAT_ram_3fcb512d = '\b';
            }
          }
          else {
            if (1 < (byte)(*(char *)(param_2 + 0x60) - 6U)) {
LAB_ram_420461ea:
              if ((bStack_34 & 0x20) == 0) {
                uVar4 = 0x3c072f34;
              }
              else {
                uVar4 = 0x3c072f38;
              }
              FUN_ram_42033fd8(1,4,1,0x3c07dd44,uVar4);
              if ((bStack_34 & 0x20) != 0) {
                if (1 < bVar8) {
                  DAT_ram_3fcb3fe0 = 1;
                  return 0;
                }
                return 0;
              }
              return 0;
            }
            if ((bStack_34 & 0x20) == 0) {
              uVar4 = 0x3c072f34;
            }
            else {
              uVar4 = 0x3c072f38;
            }
            FUN_ram_42033fd8(1,4,3,0x3c07e8d4,uVar4);
            DAT_ram_3fcb512d = '\t';
          }
        }
      }
      if (((*(char *)(param_2 + 0x60) == '\t') && (*(char *)(*(int *)(gp + -0x2b8) + 0x35f) == '\t')
          ) && (*(char *)(*(int *)(gp + -0x2b8) + 0x415) == '\0')) {
        uVar5 = 0x3c07caac;
      }
      else {
        iVar9 = FUN_ram_4203e432(param_1 + 0x10);
        if (iVar9 != 0) {
          FUN_ram_42033fd8(1,4,4,0x3c07cabc,*(undefined1 *)(param_1 + 0x10),
                           *(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0x12),
                           *(undefined1 *)(param_1 + 0x13),*(undefined1 *)(param_1 + 0x14),
                           *(undefined1 *)(param_1 + 0x15));
          DAT_ram_3fcb4f14 = 1;
          return 0;
        }
        pcVar2 = (char *)FUN_ram_420390a6();
        uVar7 = (uint)*(byte *)(param_2 + 0x60);
        if ((*pcVar2 == '\0') &&
           (((*(int *)(_DAT_ram_3fcdfaf0 + 4) == 0 || (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 0)) ||
            (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 3)))) {
          if (_DAT_ram_3fcb50ec == 0) {
            if ((uVar7 == 0) || ((uVar7 & 0xfb) == 9)) goto LAB_ram_420462d2;
            uVar5 = 0x3c07caf4;
            goto LAB_ram_42045f10;
          }
        }
        else if (_DAT_ram_3fcb50ec == 0) goto LAB_ram_420462d2;
        if ((uVar7 == 0x10) ||
           (((uVar7 - 5 & 0xff) < 0xb && ((0x621U >> (uVar7 - 5 & 0x1f) & 1) != 0)))) {
LAB_ram_420462d2:
          iVar9 = *(int *)(gp + -0x2b8);
          uVar6 = *(undefined1 *)(iVar9 + 0x35f);
          if (uVar7 < 0x11) {
            iVar12 = FUN_ram_42045c28(uVar7);
            iVar1 = FUN_ram_42045c28(uVar6);
            if (iVar1 <= iVar12) {
              if ((int)*(char *)(iVar9 + 0x35e) <= *(int *)(param_2 + 0x74)) {
                return 1;
              }
              FUN_ram_42033fd8(1,4,4,0x3c07cba0);
              DAT_ram_3fcb4f15 = 1;
              return 0;
            }
          }
          FUN_ram_42033fd8(1,4,4,0x3c07cb60,uVar7,uVar6);
          DAT_ram_3fcb3fe1 = 1;
          return 0;
        }
        uVar5 = 0x3c07cb34;
      }
      goto LAB_ram_42045f10;
    }
    uVar5 = 0x3c07e864;
    uVar4 = 3;
  }
  else {
    if ((_DAT_ram_3fcb50e8 == 0) || (*(code **)(_DAT_ram_3fcb50e8 + 0x3c) == (code *)0x0)) {
      FUN_ram_42033fd8(1,8,1,0x3c07dd2c);
      goto LAB_ram_42046092;
    }
    iVar9 = (**(code **)(_DAT_ram_3fcb50e8 + 0x3c))(iVar9,*(byte *)(iVar9 + 1) + 2,auStack_54);
    if (iVar9 == 0) {
      cVar10 = *(char *)(*(int *)(gp + -0x2b8) + 0x417);
      if (((cVar10 != '\0') && (cVar10 != '\x03')) && ((bStack_34 & 0x20) != 0)) {
        DAT_ram_3fcb51c0 = '\x01';
      }
      if ((*(char *)(*(int *)(gp + -0x2b8) + 0x418) != '\x02') && ((bStack_34 & 0x40) != 0)) {
        DAT_ram_3fcb51c1 = '\x01';
      }
      goto LAB_ram_42046092;
    }
    uVar5 = 0x3c07ca94;
LAB_ram_42045f10:
    uVar4 = 4;
  }
LAB_ram_42046050:
  uVar3 = 4;
LAB_ram_42045f64:
  FUN_ram_42033fd8(1,uVar3,uVar4,uVar5);
  DAT_ram_3fcb3fe0 = 1;
  return 0;
}

