
void FUN_ram_4209aec0(void)

{
  int unaff_s0;
  uint unaff_s1;
  bool bVar1;
  int iVar2;
  int iVar3;
  uint unaff_s3;
  uint unaff_s4;
  int unaff_s5;
  int unaff_s7;
  uint uVar4;
  int *unaff_s10;
  int *piVar5;
  int in_stack_00000034;
  undefined4 in_stack_00000038;
  int in_stack_0000003c;
  undefined4 in_stack_00000040;
  int in_stack_00000050;
  
  if ((unaff_s3 == 0) && (unaff_s4 = 2, (unaff_s1 & 8) != 0)) {
    unaff_s4 = (uint)(unaff_s7 == 0);
  }
  uVar4 = unaff_s1 & 7;
  if ((unaff_s10[0x80] == 8) || (unaff_s10[0x80] == 0x800)) {
    if (((unaff_s10[0x81] & 0xc18580U) != 0) &&
       (((((uint)unaff_s10[0x81] >> 0x10 & 3) == 0 && (iVar2 = FUN_ram_4209c5ae(), iVar2 == 0)) &&
        (uVar4 != 3)))) {
      return;
    }
    if ((((unaff_s10[0x81] & 0xc18580U) == 0) && (iVar2 = FUN_ram_4209c5ae(), iVar2 == 0)) &&
       (uVar4 != 2)) {
      return;
    }
  }
  iVar2 = FUN_ram_4209c5ae(unaff_s10[0x81]);
  if ((iVar2 != 0) && (uVar4 != 0)) {
    return;
  }
  if (unaff_s3 == 0) {
    iVar3 = unaff_s0 + 9;
    iVar2 = FUN_ram_42099802(unaff_s10 + 0x4f,iVar3);
    if (iVar2 != 0) goto LAB_ram_4209af12;
    if (unaff_s4 != 1) {
      if (unaff_s4 != 0) {
        return;
      }
      iVar2 = FUN_ram_42099802(unaff_s10 + 0x5b,iVar3);
      if (iVar2 == 0) {
        return;
      }
      if (unaff_s10[4] != 10) {
        return;
      }
      iVar2 = FUN_ram_4039c0e0(unaff_s10 + 0x1c,unaff_s0 + 0x11,0x20);
      if (iVar2 == 0) {
        return;
      }
      FUN_ram_4039c11e(unaff_s10 + 0x71,unaff_s10 + 0x1c,0x20);
      *(byte *)(unaff_s10 + 0x6d) = *(byte *)(unaff_s10 + 0x6d) | 0xc0;
      FUN_ram_4039c11e(unaff_s10 + 0x79,unaff_s10 + 0x4f,8);
LAB_ram_4209b0fe:
      if (1 < unaff_s10[4] - 7U) {
        if ((*(ushort *)(unaff_s10 + 0x6d) & 0x40) == 0) {
          return;
        }
        if (unaff_s10[4] != 10) {
          return;
        }
      }
      if (*(int *)(unaff_s10[1] + 0xd0) != 0) {
LAB_ram_4209b128:
        FUN_ram_4207f6bc(unaff_s10 + 2,2);
        return;
      }
      iVar2 = FUN_ram_4209bac6(unaff_s0 + 99);
      if (iVar2 < 0) {
        return;
      }
      if (in_stack_0000003c != 0) {
        in_stack_00000034 = in_stack_0000003c;
        in_stack_00000038 = in_stack_00000040;
      }
      bVar1 = false;
      if (unaff_s10[0x7f] == 2) {
        bVar1 = (unaff_s10[0x81] & 0x860U) != 0;
      }
      if ((unaff_s10[0x7b] == 0) ||
         (iVar2 = FUN_ram_4209c678(bVar1,unaff_s10[0x7b],unaff_s10[0x7c],in_stack_00000034,
                                   in_stack_00000038), iVar2 != 0)) goto LAB_ram_4209b128;
      goto LAB_ram_4209af22;
    }
    if ((*(ushort *)(unaff_s10 + 0x6d) & 0x80) == 0) {
      return;
    }
    if (unaff_s10[4] != 10) {
      return;
    }
    iVar2 = FUN_ram_4039c0e0(iVar3,unaff_s10 + 0x79,8);
    if (iVar2 != 0) {
      return;
    }
LAB_ram_4209b088:
    iVar3 = unaff_s10[4];
    iVar2 = 10;
LAB_ram_4209b08e:
    if (iVar3 != iVar2) {
      return;
    }
    if (unaff_s10[0x4b] == 0) {
      return;
    }
  }
  else {
    if ((unaff_s10[0x70] != 0) &&
       (iVar2 = FUN_ram_4039c0e0(unaff_s0 + 9,(int)unaff_s10 + 0x1b6,8), iVar2 < 1)) {
      return;
    }
LAB_ram_4209af12:
    iVar2 = 1;
    if (unaff_s4 == 1) goto LAB_ram_4209b088;
    if (unaff_s4 == 2) {
      iVar3 = unaff_s10[5];
      goto LAB_ram_4209b08e;
    }
    if (unaff_s4 == 0) goto LAB_ram_4209b0fe;
  }
LAB_ram_4209af22:
  if ((unaff_s1 & 0x80) != 0) {
    return;
  }
  if ((unaff_s1 & 0x100) == 0) {
    return;
  }
  unaff_s10[0x12] = 0;
  if ((unaff_s10[0x4b] == 0) || ((*(ushort *)(unaff_s10 + 0x6d) & 0x40) != 0)) {
    if (unaff_s3 != 0) {
      return;
    }
  }
  else {
    iVar2 = FUN_ram_42099840(unaff_s10[0x81],unaff_s10 + 0x31);
    if (iVar2 != 0) {
      if (unaff_s4 != 1) {
        return;
      }
      if ((*(ushort *)(unaff_s10 + 0x6d) & 0x80) == 0) {
        return;
      }
      (*(code *)&SUB_ram_40010488)(&stack0x00000068,0);
      piVar5 = (int *)0x0;
      while( true ) {
        if (((unaff_s10[0x81] & 0x4000d42U) == 0) || ((unaff_s10[0x81] & 0x4000c00U) != 0)) {
          iVar2 = unaff_s10[0x2c];
          piVar5 = unaff_s10 + 0x24;
        }
        else {
          piVar5 = (int *)FUN_ram_42099aee(unaff_s10 + 2,piVar5);
          if (piVar5 == (int *)0x0) {
            return;
          }
          iVar2 = 0x20;
        }
        FUN_ram_4209c762(piVar5,iVar2,&DAT_ram_3c0c4b5c,*unaff_s10 + 0x78,unaff_s10 + 2,
                         unaff_s10 + 0x14,unaff_s10 + 0x71,&stack0x00000068);
        iVar2 = FUN_ram_42099840(unaff_s10[0x81],&stack0x00000068);
        if (iVar2 == 0) break;
        if ((unaff_s10[0x81] & 0x4000d42U) == 0) {
          return;
        }
        if ((unaff_s10[0x81] & 0x4000c00U) != 0) {
          return;
        }
      }
      FUN_ram_4039c11e(unaff_s10 + 0x31,&stack0x00000068);
      unaff_s10[0x4b] = 1;
      FUN_ram_4039c11e(unaff_s10 + 0x1c,unaff_s10 + 0x71,0x20);
      *(ushort *)(unaff_s10 + 0x6d) = *(ushort *)(unaff_s10 + 0x6d) & 0xff7f;
    }
    unaff_s10[0x12] = 1;
    FUN_ram_420992a6(0x4208997e,unaff_s10[0x84],0);
    unaff_s10[0x83] = 0;
    if (unaff_s3 != 0) {
      if (unaff_s10[0x12] == 0) {
        return;
      }
      unaff_s10[0x70] = 1;
      FUN_ram_4039c11e((int)unaff_s10 + 0x1b6,unaff_s0 + 9,8);
      if ((unaff_s1 & 0x408) == 0) {
        if (((unaff_s7 == 0) || (iVar2 = FUN_ram_4209bac6(unaff_s0 + 99), iVar2 != 0)) ||
           (in_stack_00000050 == 0)) {
          FUN_ram_420992a6(0x42089efe);
          FUN_ram_42099efe();
        }
      }
      else {
        unaff_s10[0x68] = 1;
        unaff_s10[0x4b] = 0;
      }
      goto LAB_ram_4209b260;
    }
  }
  piVar5 = unaff_s10 + 0x4f;
  do {
    if ((piVar5[2] != 0) && (iVar2 = FUN_ram_4039c0e0(unaff_s0 + 9,piVar5,8), iVar2 == 0)) {
      piVar5[2] = 0;
    }
    piVar5 = piVar5 + 3;
  } while (piVar5 != unaff_s10 + 0x5b);
  if (unaff_s4 == 0) {
    FUN_ram_4039c11e(piVar5,unaff_s10 + 0x4f);
  }
  else {
    (*(code *)&SUB_ram_40010488)(piVar5,0,0x30);
  }
  piVar5 = unaff_s10 + 0x51;
  do {
    if (*piVar5 != 0) {
      *piVar5 = 0;
    }
    piVar5 = piVar5 + 3;
  } while (piVar5 != unaff_s10 + 0x5d);
LAB_ram_4209b260:
  thunk_FUN_ram_40390634(unaff_s10[0x6b]);
  iVar2 = thunk_FUN_ram_403904a6();
  unaff_s10[0x6b] = iVar2;
  if (iVar2 != 0) {
    FUN_ram_4039c11e();
    *(ushort *)(unaff_s10 + 0x6d) =
         *(ushort *)(unaff_s10 + 0x6d) & 0xffdf | (ushort)(unaff_s1 >> 4) & 0x20;
    unaff_s10[0x6c] = unaff_s5;
    unaff_s10[0xf] = 1;
    unaff_s10[0x10] = unaff_s1 >> 3 & 1;
    unaff_s10[0x11] = unaff_s3 >> 0xb;
    FUN_ram_4039c11e(unaff_s10 + 0x1c,unaff_s0 + 0x11,0x20);
    FUN_ram_4209a968();
  }
  return;
}

