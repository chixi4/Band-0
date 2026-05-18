
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4208e592(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined *puVar4;
  char *pcVar5;
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
  
  iVar12 = *(int *)(gp + -0xb4);
  FUN_ram_420894a2();
  (*(code *)&SUB_ram_40010488)(auStack_54,0,0x24);
  iVar9 = *(int *)(gp + -0xb4);
  cVar10 = '\x01';
  if (*(char *)(iVar9 + 0x361) == '\0') {
    cVar10 = DAT_ram_3fcc4253;
  }
  if (DAT_ram_3fcc401c == '\x02') {
    return 1;
  }
  if ((((DAT_ram_3fcc4259 != '\0') && (*(char *)(iVar9 + 0x415) != '\0')) &&
      ((*(ushort *)(param_2 + 6) & 0x10) == 0)) && (*(int *)(param_2 + 100) == 0)) {
    FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fde18);
    DAT_ram_3fcc3075 = 1;
    return 0;
  }
  iVar11 = *(int *)(param_2 + 0x24);
  iVar1 = FUN_ram_4208df14(iVar11);
  if (iVar1 == 0) {
    if (*(uint *)(iVar12 + 4) != (uint)*(byte *)(iVar11 + 1)) {
      return 0;
    }
    iVar12 = FUN_ram_4039c0e0(iVar12 + 8,iVar11 + 2);
    if (iVar12 != 0) {
      return 0;
    }
  }
  if (((*(char *)(iVar9 + 0x92) != '\0') && (*(int *)(param_2 + 100) == 0)) &&
     (iVar12 = FUN_ram_4039c0e0(iVar9 + 0x93,param_1 + 0x10,6), iVar12 != 0)) {
    return 0;
  }
  if ((*(ushort *)(param_2 + 6) & 2) != 0) {
    DAT_ram_3fcc3074 = 1;
    return 0;
  }
  if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') {
    return 1;
  }
  if (*(int *)(_DAT_ram_3fcc4014 + 0x98) - 2U < 2) {
    return 0;
  }
  if (*(int *)(_DAT_ram_3fcc4014 + 0x98) == 5) {
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
        FUN_ram_4208e552();
        *(uint *)(_DAT_ram_3fcc4014 + 0xa4) = *(uint *)(_DAT_ram_3fcc4014 + 0xa4) & 0xffffffef;
        *(undefined1 *)(param_2 + 0x60) = 0;
      }
      else {
        uStack_58 = (*(code *)&SUB_ram_400104a8)(iVar9 + 0x2f);
        if ((_DAT_ram_3fcc4178 == 0) || (*(code **)(_DAT_ram_3fcc4178 + 0x38) == (code *)0x0)) {
          puVar4 = &DAT_ram_3c0ff4f0;
          uVar3 = 1;
          uVar2 = 8;
          goto LAB_ram_4208e8b4;
        }
        iVar9 = (**(code **)(_DAT_ram_3fcc4178 + 0x38))(iVar9 + 0x2f,&uStack_58);
        if (iVar9 == 0) {
          FUN_ram_4207a038(1,8,2,&DAT_ram_3c102278,*(int *)(gp + -0xb4) + 0x2f);
          DAT_ram_3fcc3074 = 1;
          return 0;
        }
        if ((uStack_58 & 0xfffffff7) != 5) {
          FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdf30,*(int *)(gp + -0xb4) + 0x2f);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar9);
          DAT_ram_3fcc3074 = 1;
          return 0;
        }
        FUN_ram_4208e552();
        uVar6 = 7;
        if ((uStack_58 != 5) && (uVar6 = DAT_ram_3fcc41be, uStack_58 == 0xd)) {
          uVar6 = 8;
        }
        DAT_ram_3fcc41be = uVar6;
        _DAT_ram_3fcc41ac = 0;
        _DAT_ram_3fcc41b0 = 0;
        _DAT_ram_3fcc41b4 = 0;
        _DAT_ram_3fcc41b8 = 0;
        FUN_ram_4039c11e(&DAT_ram_3fcc41ac,iVar9);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(iVar9);
        *(uint *)(_DAT_ram_3fcc4014 + 0xa4) = *(uint *)(_DAT_ram_3fcc4014 + 0xa4) | 0x10;
        uVar6 = 1;
LAB_ram_4208e730:
        *(undefined1 *)(param_2 + 0x60) = uVar6;
      }
    }
    else {
      FUN_ram_4208e552();
      FUN_ram_4207b19a(param_2);
      *(uint *)(_DAT_ram_3fcc4014 + 0xa4) = *(uint *)(_DAT_ram_3fcc4014 + 0xa4) | 0x10;
    }
  }
  else {
    FUN_ram_4208e552();
    iVar9 = _DAT_ram_3fcc4014;
    *(undefined1 *)(param_2 + 0x60) = 5;
    uVar7 = *(uint *)(iVar9 + 0xa4) & 0xffffffef;
    if (iVar12 == 0) {
      *(uint *)(iVar9 + 0xa4) = uVar7;
LAB_ram_4208e6e0:
      iVar9 = 0;
    }
    else {
      *(uint *)(iVar9 + 0xa4) = uVar7 | 0x10;
      iVar9 = FUN_ram_4207a9e0(param_2);
      DAT_ram_3fcc3074 = *(undefined1 *)(param_2 + 0x6c);
      if (iVar9 == 0) goto LAB_ram_4208e6e0;
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fde54,DAT_ram_3fcc41c0,DAT_ram_3fcc41be,DAT_ram_3fcc41bd,
                       *(undefined1 *)(param_1 + 10),*(undefined1 *)(param_1 + 0xb),
                       *(undefined1 *)(param_1 + 0xc),*(undefined1 *)(param_1 + 0xd),
                       *(undefined1 *)(param_1 + 0xe),*(undefined1 *)(param_1 + 0xf));
    }
    if (*(int *)(param_2 + 0x34) == 0) {
LAB_ram_4208eca6:
      if (iVar9 == 0) {
        return 0;
      }
    }
    else if (cVar10 == '\0') {
      if (*(char *)(*(int *)(gp + -0xb4) + 0x364) != '\0') goto LAB_ram_4208eca6;
      if (iVar9 == 0) {
        FUN_ram_4208e552();
        *(uint *)(_DAT_ram_3fcc4014 + 0xa4) = *(uint *)(_DAT_ram_3fcc4014 + 0xa4) | 0x10;
        iVar9 = FUN_ram_4207a774(param_2);
        DAT_ram_3fcc3074 = *(undefined1 *)(param_2 + 0x6c);
        if (iVar9 == 0) {
          FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdea0,DAT_ram_3fcc41c0,DAT_ram_3fcc41be,
                           DAT_ram_3fcc41bd,*(undefined1 *)(param_1 + 10),
                           *(undefined1 *)(param_1 + 0xb),*(undefined1 *)(param_1 + 0xc),
                           *(undefined1 *)(param_1 + 0xd),*(undefined1 *)(param_1 + 0xe),
                           *(undefined1 *)(param_1 + 0xf));
          return 0;
        }
      }
      else {
        iVar9 = FUN_ram_4207a774(param_2);
        if (iVar9 != 0) {
          FUN_ram_4208e552();
          FUN_ram_4207a9e0(param_2);
          DAT_ram_3fcc3074 = *(undefined1 *)(param_2 + 0x6c);
          if ((*(char *)(param_2 + 0x60) != '\a') && (_DAT_ram_3fcc417c == 0)) {
            uVar6 = 4;
            goto LAB_ram_4208e730;
          }
        }
      }
    }
    else if (iVar9 == 0) {
      FUN_ram_4207a038(1,8,4,&DAT_ram_3c0fdeec);
      DAT_ram_3fcc3074 = 1;
      return 0;
    }
  }
  iVar9 = *(int *)(param_2 + 0x2c);
  if (iVar9 != 0) {
    for (iVar12 = 2; iVar12 <= (int)(*(byte *)(iVar9 + 1) + 1); iVar12 = iVar12 + 1) {
      if ((((*(byte *)(iVar9 + iVar12) & 0x7f) == 0x7b) &&
          (*(char *)(*(int *)(gp + -0xb4) + 0x417) == '\0')) &&
         (*(char *)(param_2 + 0x60) == '\x06')) {
        puVar4 = &UNK_ram_3c0ff510;
        uVar3 = 1;
        goto LAB_ram_4208e9a0;
      }
    }
  }
  iVar9 = *(int *)(param_2 + 0x68);
  if (iVar9 == 0) {
LAB_ram_4208e9e2:
    if (((*(char *)(*(int *)(gp + -0xb4) + 0x418) != '\x01') && (DAT_ram_3fcc4252 == '\0')) ||
       (DAT_ram_3fcc4251 != '\0')) {
      cVar10 = *(char *)(*(int *)(gp + -0xb4) + 0x417);
      if ((cVar10 == '\x01') && (DAT_ram_3fcc4250 == '\0')) {
        FUN_ram_4207a038(1,4,3,&DAT_ram_3c1003c4);
        DAT_ram_3fcc3074 = 1;
        return 0;
      }
      if (DAT_ram_3fcc41bd == '\x10') {
        bVar8 = cVar10 - 1;
        if (((bStack_34 & 0x20) == 0) || (1 < bVar8)) {
          if ((*(uint *)(param_2 + 0x70) & 0x200) == 0) {
            if (*(char *)(param_2 + 0x60) != '\a') goto LAB_ram_4208eb3a;
            if ((*(uint *)(param_2 + 0x70) & 0x100) == 0) {
              if ((bStack_34 & 0x20) == 0) {
                pcVar5 = "ergiving.";
              }
              else {
                pcVar5 = "ving.";
              }
              FUN_ram_4207a038(1,4,3,&DAT_ram_3c100478,pcVar5);
              DAT_ram_3fcc41bd = '\x05';
            }
            else {
              if ((bStack_34 & 0x20) == 0) {
                pcVar5 = "ergiving.";
              }
              else {
                pcVar5 = "ving.";
              }
              FUN_ram_4207a038(1,4,3,&DAT_ram_3c100438,pcVar5);
              DAT_ram_3fcc41bd = '\b';
            }
          }
          else {
            if (1 < (byte)(*(char *)(param_2 + 0x60) - 6U)) {
LAB_ram_4208eb3a:
              if ((bStack_34 & 0x20) == 0) {
                pcVar5 = "ergiving.";
              }
              else {
                pcVar5 = "ving.";
              }
              FUN_ram_4207a038(1,4,1,&DAT_ram_3c0ff55c,pcVar5);
              if ((bStack_34 & 0x20) != 0) {
                if (1 < bVar8) {
                  DAT_ram_3fcc3074 = 1;
                  return 0;
                }
                return 0;
              }
              return 0;
            }
            if ((bStack_34 & 0x20) == 0) {
              pcVar5 = "ergiving.";
            }
            else {
              pcVar5 = "ving.";
            }
            FUN_ram_4207a038(1,4,3,&DAT_ram_3c100404,pcVar5);
            DAT_ram_3fcc41bd = '\t';
          }
        }
      }
      if (((*(char *)(param_2 + 0x60) == '\t') && (*(char *)(*(int *)(gp + -0xb4) + 0x35f) == '\t'))
         && (*(char *)(*(int *)(gp + -0xb4) + 0x415) == '\0')) {
        puVar4 = &UNK_ram_3c0fdf5c;
      }
      else {
        iVar9 = FUN_ram_42086328(param_1 + 0x10);
        if (iVar9 != 0) {
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fdf6c,*(undefined1 *)(param_1 + 0x10),
                           *(undefined1 *)(param_1 + 0x11),*(undefined1 *)(param_1 + 0x12),
                           *(undefined1 *)(param_1 + 0x13),*(undefined1 *)(param_1 + 0x14),
                           *(undefined1 *)(param_1 + 0x15));
          DAT_ram_3fcc3fa4 = 1;
          return 0;
        }
        pcVar5 = (char *)FUN_ram_4207f212();
        uVar7 = (uint)*(byte *)(param_2 + 0x60);
        if ((*pcVar5 == '\0') &&
           (((*(int *)(_DAT_ram_3fcdfaf0 + 4) == 0 || (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 0)) ||
            (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 3)))) {
          if (_DAT_ram_3fcc417c == 0) {
            if ((uVar7 == 0) || ((uVar7 & 0xfb) == 9)) goto LAB_ram_4208ec22;
            puVar4 = &UNK_ram_3c0fdfa4;
            goto LAB_ram_4208e860;
          }
        }
        else if (_DAT_ram_3fcc417c == 0) goto LAB_ram_4208ec22;
        if ((uVar7 == 0x10) ||
           (((uVar7 - 5 & 0xff) < 0xb && ((0x621U >> (uVar7 - 5 & 0x1f) & 1) != 0)))) {
LAB_ram_4208ec22:
          iVar9 = *(int *)(gp + -0xb4);
          uVar6 = *(undefined1 *)(iVar9 + 0x35f);
          if (uVar7 < 0x11) {
            iVar12 = FUN_ram_4208e578(uVar7);
            iVar1 = FUN_ram_4208e578(uVar6);
            if (iVar1 <= iVar12) {
              if ((int)*(char *)(iVar9 + 0x35e) <= *(int *)(param_2 + 0x74)) {
                return 1;
              }
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fe050);
              DAT_ram_3fcc3fa5 = 1;
              return 0;
            }
          }
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fe010,uVar7,uVar6);
          DAT_ram_3fcc3075 = 1;
          return 0;
        }
        puVar4 = &UNK_ram_3c0fdfe4;
      }
      goto LAB_ram_4208e860;
    }
    puVar4 = &UNK_ram_3c100394;
    uVar3 = 3;
  }
  else {
    if ((_DAT_ram_3fcc4178 == 0) || (*(code **)(_DAT_ram_3fcc4178 + 0x3c) == (code *)0x0)) {
      FUN_ram_4207a038(1,8,1,&DAT_ram_3c0ff544);
      goto LAB_ram_4208e9e2;
    }
    iVar9 = (**(code **)(_DAT_ram_3fcc4178 + 0x3c))(iVar9,*(byte *)(iVar9 + 1) + 2,auStack_54);
    if (iVar9 == 0) {
      cVar10 = *(char *)(*(int *)(gp + -0xb4) + 0x417);
      if (((cVar10 != '\0') && (cVar10 != '\x03')) && ((bStack_34 & 0x20) != 0)) {
        DAT_ram_3fcc4250 = '\x01';
      }
      if ((*(char *)(*(int *)(gp + -0xb4) + 0x418) != '\x02') && ((bStack_34 & 0x40) != 0)) {
        DAT_ram_3fcc4251 = '\x01';
      }
      goto LAB_ram_4208e9e2;
    }
    puVar4 = &DAT_ram_3c0fdf44;
LAB_ram_4208e860:
    uVar3 = 4;
  }
LAB_ram_4208e9a0:
  uVar2 = 4;
LAB_ram_4208e8b4:
  FUN_ram_4207a038(1,uVar2,uVar3,puVar4);
  DAT_ram_3fcc3074 = 1;
  return 0;
}

