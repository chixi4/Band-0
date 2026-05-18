
void FUN_ram_4209ae10(int param_1,int *param_2,int param_3,uint param_4)

{
  byte bVar1;
  uint uVar2;
  uint uVar3;
  bool bVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  char cVar9;
  uint uVar10;
  int *piVar11;
  int iStack_dc;
  undefined4 uStack_d8;
  int iStack_d4;
  undefined4 uStack_d0;
  int iStack_c0;
  undefined1 auStack_a8 [116];
  
  if (param_1 == 0) {
    return;
  }
  if (*(int *)(param_1 + 0x14) == 0) {
    return;
  }
  if (param_2 == (int *)0x0) {
    return;
  }
  if (param_4 < 99) {
    return;
  }
  uVar10 = (uint)*(ushort *)(param_3 + 0x61);
  uVar8 = (uint)*(byte *)(param_3 + 0x62) | (uVar10 & 0xff) << 8;
  if (param_4 - 99 < uVar8) {
    return;
  }
  cVar9 = *(char *)(param_3 + 4);
  if (param_2[0x7f] == 2) {
    if ((cVar9 != -2) && (cVar9 != '\x02')) {
      return;
    }
  }
  else if (cVar9 != -2) {
    return;
  }
  bVar1 = *(byte *)(param_3 + 6);
  uVar7 = (uint)bVar1;
  uVar2 = (*(ushort *)(param_3 + 5) & 0xff) << 8;
  if ((int)((uint)CONCAT21(*(ushort *)(param_3 + 5),bVar1) << 0x12) < 0) {
    return;
  }
  uVar3 = uVar2 & 0x800;
  cVar9 = '\x03';
  if ((uVar3 == 0) && (cVar9 = '\x02', (bVar1 & 8) != 0)) {
    cVar9 = uVar10 == 0;
  }
  if ((param_2[0x80] == 8) || (param_2[0x80] == 0x800)) {
    if (((param_2[0x81] & 0xc18580U) != 0) &&
       (((((uint)param_2[0x81] >> 0x10 & 3) == 0 && (iVar5 = FUN_ram_4209c5ae(), iVar5 == 0)) &&
        ((uVar7 & 7) != 3)))) {
      return;
    }
    if ((((param_2[0x81] & 0xc18580U) == 0) && (iVar5 = FUN_ram_4209c5ae(), iVar5 == 0)) &&
       ((uVar7 & 7) != 2)) {
      return;
    }
  }
  iVar5 = FUN_ram_4209c5ae(param_2[0x81]);
  if ((iVar5 != 0) && ((bVar1 & 7) != 0)) {
    return;
  }
  if (uVar3 == 0) {
    iVar6 = param_3 + 9;
    iVar5 = FUN_ram_42099802(param_2 + 0x4f,iVar6);
    if (iVar5 != 0) goto LAB_ram_4209af12;
    if (cVar9 != '\x01') {
      if (cVar9 != '\0') {
        return;
      }
      iVar5 = FUN_ram_42099802(param_2 + 0x5b,iVar6);
      if (iVar5 == 0) {
        return;
      }
      if (param_2[4] != 10) {
        return;
      }
      iVar5 = FUN_ram_4039c0e0(param_2 + 0x1c,param_3 + 0x11,0x20);
      if (iVar5 == 0) {
        return;
      }
      FUN_ram_4039c11e(param_2 + 0x71,param_2 + 0x1c,0x20);
      *(byte *)(param_2 + 0x6d) = *(byte *)(param_2 + 0x6d) | 0xc0;
      FUN_ram_4039c11e(param_2 + 0x79,param_2 + 0x4f,8);
LAB_ram_4209b0fe:
      if (1 < param_2[4] - 7U) {
        if ((*(ushort *)(param_2 + 0x6d) & 0x40) == 0) {
          return;
        }
        if (param_2[4] != 10) {
          return;
        }
      }
      if (*(int *)(param_2[1] + 0xd0) != 0) {
LAB_ram_4209b128:
        FUN_ram_4207f6bc(param_2 + 2,2);
        return;
      }
      iVar5 = FUN_ram_4209bac6(param_3 + 99,uVar8,&iStack_dc);
      if (iVar5 < 0) {
        return;
      }
      if (iStack_d4 != 0) {
        iStack_dc = iStack_d4;
        uStack_d8 = uStack_d0;
      }
      bVar4 = false;
      if (param_2[0x7f] == 2) {
        bVar4 = (param_2[0x81] & 0x860U) != 0;
      }
      if ((param_2[0x7b] == 0) ||
         (iVar5 = FUN_ram_4209c678(bVar4,param_2[0x7b],param_2[0x7c],iStack_dc,uStack_d8),
         iVar5 != 0)) goto LAB_ram_4209b128;
      goto LAB_ram_4209af22;
    }
    if ((*(ushort *)(param_2 + 0x6d) & 0x80) == 0) {
      return;
    }
    if (param_2[4] != 10) {
      return;
    }
    iVar5 = FUN_ram_4039c0e0(iVar6,param_2 + 0x79,8);
    if (iVar5 != 0) {
      return;
    }
LAB_ram_4209b088:
    iVar6 = param_2[4];
    iVar5 = 10;
LAB_ram_4209b08e:
    if (iVar6 != iVar5) {
      return;
    }
    if (param_2[0x4b] == 0) {
      return;
    }
  }
  else {
    if ((param_2[0x70] != 0) &&
       (iVar5 = FUN_ram_4039c0e0(param_3 + 9,(int)param_2 + 0x1b6,8), iVar5 < 1)) {
      return;
    }
LAB_ram_4209af12:
    iVar5 = 1;
    if (cVar9 == '\x01') goto LAB_ram_4209b088;
    if (cVar9 == '\x02') {
      iVar6 = param_2[5];
      goto LAB_ram_4209b08e;
    }
    if (cVar9 == '\0') goto LAB_ram_4209b0fe;
  }
LAB_ram_4209af22:
  if ((bVar1 & 0x80) != 0) {
    return;
  }
  if ((uVar2 & 0x100) == 0) {
    return;
  }
  param_2[0x12] = 0;
  if ((param_2[0x4b] == 0) || ((*(ushort *)(param_2 + 0x6d) & 0x40) != 0)) {
    if (uVar3 != 0) {
      return;
    }
  }
  else {
    iVar5 = FUN_ram_42099840(param_2[0x81],param_2 + 0x31,param_3,param_4);
    if (iVar5 != 0) {
      if (cVar9 != '\x01') {
        return;
      }
      if ((*(ushort *)(param_2 + 0x6d) & 0x80) == 0) {
        return;
      }
      (*(code *)&SUB_ram_40010488)(auStack_a8,0);
      piVar11 = (int *)0x0;
      while( true ) {
        if (((param_2[0x81] & 0x4000d42U) == 0) || ((param_2[0x81] & 0x4000c00U) != 0)) {
          iVar5 = param_2[0x2c];
          piVar11 = param_2 + 0x24;
        }
        else {
          piVar11 = (int *)FUN_ram_42099aee(param_2 + 2,piVar11);
          if (piVar11 == (int *)0x0) {
            return;
          }
          iVar5 = 0x20;
        }
        FUN_ram_4209c762(piVar11,iVar5,&DAT_ram_3c0c4b5c,*param_2 + 0x78,param_2 + 2,param_2 + 0x14,
                         param_2 + 0x71,auStack_a8,param_2[0x81],param_2[0x80]);
        iVar5 = FUN_ram_42099840(param_2[0x81],auStack_a8,param_3,param_4);
        if (iVar5 == 0) break;
        if ((param_2[0x81] & 0x4000d42U) == 0) {
          return;
        }
        if ((param_2[0x81] & 0x4000c00U) != 0) {
          return;
        }
      }
      FUN_ram_4039c11e(param_2 + 0x31,auStack_a8);
      param_2[0x4b] = 1;
      FUN_ram_4039c11e(param_2 + 0x1c,param_2 + 0x71,0x20);
      *(ushort *)(param_2 + 0x6d) = *(ushort *)(param_2 + 0x6d) & 0xff7f;
    }
    param_2[0x12] = 1;
    FUN_ram_420992a6(0x4208997e,param_2[0x84],0);
    param_2[0x83] = 0;
    if (uVar3 != 0) {
      if (param_2[0x12] == 0) {
        return;
      }
      param_2[0x70] = 1;
      FUN_ram_4039c11e((int)param_2 + 0x1b6,param_3 + 9,8);
      if (((uVar7 | uVar2) & 0x408) == 0) {
        if (((uVar10 == 0) || (iVar5 = FUN_ram_4209bac6(param_3 + 99,uVar8,&iStack_dc), iVar5 != 0))
           || (iStack_c0 == 0)) {
          FUN_ram_420992a6(0x42089efe,param_1,0);
          FUN_ram_42099efe(param_1,0);
        }
      }
      else {
        param_2[0x68] = 1;
        param_2[0x4b] = 0;
      }
      goto LAB_ram_4209b260;
    }
  }
  piVar11 = param_2 + 0x4f;
  do {
    if ((piVar11[2] != 0) && (iVar5 = FUN_ram_4039c0e0(param_3 + 9,piVar11,8), iVar5 == 0)) {
      piVar11[2] = 0;
    }
    piVar11 = piVar11 + 3;
  } while (piVar11 != param_2 + 0x5b);
  if (cVar9 == '\0') {
    FUN_ram_4039c11e(piVar11,param_2 + 0x4f);
  }
  else {
    (*(code *)&SUB_ram_40010488)(piVar11,0,0x30);
  }
  piVar11 = param_2 + 0x51;
  do {
    if (*piVar11 != 0) {
      *piVar11 = 0;
    }
    piVar11 = piVar11 + 3;
  } while (piVar11 != param_2 + 0x5d);
LAB_ram_4209b260:
  thunk_FUN_ram_40390634(param_2[0x6b]);
  iVar5 = thunk_FUN_ram_403904a6(param_4);
  param_2[0x6b] = iVar5;
  if (iVar5 != 0) {
    FUN_ram_4039c11e(iVar5,param_3,param_4);
    *(ushort *)(param_2 + 0x6d) =
         *(ushort *)(param_2 + 0x6d) & 0xffdf | (ushort)((uVar2 & 0x200) >> 4);
    param_2[0x6c] = param_4;
    param_2[0xf] = 1;
    param_2[0x10] = (uVar7 & 8) >> 3;
    param_2[0x11] = uVar3 >> 0xb;
    FUN_ram_4039c11e(param_2 + 0x1c,param_3 + 0x11,0x20);
    FUN_ram_4209a968(param_2);
  }
  return;
}

