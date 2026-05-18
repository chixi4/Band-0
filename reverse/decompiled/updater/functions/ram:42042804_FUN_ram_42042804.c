
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42042804(int param_1,int param_2,uint param_3,int param_4,undefined4 param_5)

{
  short sVar1;
  undefined2 uVar2;
  ushort uVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  char cVar8;
  ushort *puVar9;
  int iVar10;
  byte *pbVar11;
  uint uVar12;
  undefined1 auStack_c4 [8];
  undefined4 auStack_bc [19];
  int iStack_70;
  
  iVar5 = *(int *)(param_1 + 0xe4);
  (*(code *)&SUB_ram_40011fd0)(0,auStack_c4);
  uVar12 = (uint)*(ushort *)(param_2 + 0x16);
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 4);
  puVar9 = (ushort *)(iVar4 + 0x18);
  pbVar11 = (byte *)((int)puVar9 + uVar12);
  if (param_3 == 0xa0) {
    DAT_ram_3fcb3958 = DAT_ram_3fcb3958 + '\x01';
    if ((*(int *)(param_1 + 0x98) != 5) && (1 < *(int *)(param_1 + 0x98) - 2U)) {
      return;
    }
    iVar10 = FUN_ram_40399d6c(iVar4 + 4,auStack_c4,6);
    if ((iVar10 != 0) && (iVar10 = FUN_ram_40399d6c(iVar4 + 4,0x3c078fac,6), iVar10 != 0)) {
      return;
    }
    if ((_DAT_ram_3fcb5134 == 0) || ((*(uint *)(*(int *)(param_1 + 0xe4) + 0xc) & 1) == 0)) {
      if ((*(byte *)(iVar4 + 1) & 0x40) != 0) {
        uVar7 = 0x3c07c44c;
LAB_ram_42042960:
        FUN_ram_42033fd8(1,4,4,uVar7);
        return;
      }
    }
    else if ((*(byte *)(iVar4 + 1) & 0x40) == 0) {
      if ((*(byte *)(iVar4 + 4) & 1) == 0) {
        if (uVar12 < 2) {
          return;
        }
        sVar1 = *(short *)(iVar4 + 0x18);
        uVar7 = 0x3c07c3f8;
LAB_ram_42042e26:
        FUN_ram_42033fd8(1,4,4,uVar7,sVar1);
        if (1 < (ushort)(sVar1 - 6U)) {
          return;
        }
        if (*(char *)(iVar5 + 0x2fa) != '\0') {
          return;
        }
        FUN_ram_42042676();
        return;
      }
    }
    else {
      iVar4 = FUN_ram_42044294(param_2,*(undefined4 *)
                                        ((*(byte *)(iVar5 + 0x134) + 0x4c) * 4 + 0x3fcb4f78));
      if (iVar4 != 0) {
        return;
      }
      puVar9 = *(ushort **)(*(int *)(param_2 + 4) + 4);
      pbVar11 = (byte *)((uint)*(ushort *)(param_2 + 0x16) + (int)puVar9);
    }
    if ((int)pbVar11 - (int)puVar9 < 2) {
      return;
    }
    uVar3 = *puVar9;
    FUN_ram_42033fd8(1,4,4,0x3c07c47c,(uint)uVar3);
    uVar12 = (uint)uVar3 << 8 | 0xa0;
LAB_ram_42042dfe:
    FUN_ram_42040fac(&DAT_ram_3fcb4f74,0,uVar12);
    return;
  }
  cVar8 = (char)param_4;
  if ((int)param_3 < 0xa1) {
    if (param_3 == 0x50) {
      iVar10 = 1;
LAB_ram_4204296e:
      (*(code *)&SUB_ram_40010488)(auStack_bc,0,0x7c);
      _DAT_ram_3fcb3954 = _DAT_ram_3fcb3954 + 1;
      if (((*(int *)(param_1 + 0xe4) != 0) &&
          (iVar6 = FUN_ram_40399d6c(iVar4 + 10,*(int *)(param_1 + 0xe4) + 4,6), iVar6 == 0)) &&
         (iVar10 == 0)) {
        if (((DAT_ram_3fcb526a & 1) == 0) && (DAT_ram_3fcb51c8 != '\0')) {
          FUN_ram_42040bee((int)cVar8);
        }
        if (DAT_ram_3fcdfae8 == '\0') {
          if (-0x19 < param_4) {
            DAT_ram_3fcdfae8 = '\x01';
          }
        }
        else {
          iVar6 = _DAT_ram_3fcdfae0;
          if (_DAT_ram_3fcdfae0 < _DAT_ram_3fcdfae4) {
            iVar6 = _DAT_ram_3fcdfae4;
          }
          if (iVar6 < param_4) {
            iVar6 = param_4;
          }
          if (iVar6 < -0x2d) {
            DAT_ram_3fcdfae8 = '\0';
          }
        }
        uVar12 = (uint)DAT_ram_3fcdfadc;
        DAT_ram_3fcdfadc = DAT_ram_3fcdfadc + 1 & 1;
        *(int *)(&DAT_ram_3fcdfae0 + uVar12 * 4) = param_4;
      }
      if (((iVar5 != 0) && ((*(byte *)(iVar4 + 1) & 3) == 0)) &&
         ((iVar6 = FUN_ram_40399d6c(iVar4 + 0x10,iVar5 + 4,6), iVar6 == 0 &&
          (*(char *)(iVar5 + 0x2f4) == '\0')))) {
        *(undefined1 *)(iVar5 + 0x2f4) = 1;
      }
      iVar6 = FUN_ram_4203423c(*(undefined4 *)(param_1 + 0xe8),param_2,auStack_bc,iVar10,param_4);
      if (iVar6 != 0) {
        return;
      }
      (*(code *)&SUB_ram_40012080)();
      iVar6 = FUN_ram_42046e7e(param_2,auStack_bc,iVar10);
      if (iVar6 != -1) {
        if (*(int *)(param_1 + 0xe4) == 0) {
          return;
        }
        if (*(int *)(param_1 + 0x98) != 5) {
          return;
        }
        if (((iStack_70 != 0) && (iVar10 == 0)) &&
           (iVar4 = FUN_ram_40399d6c(iVar4 + 0x10,iVar5 + 4,6), iVar4 == 0)) {
          FUN_ram_42040aa6(param_1,iStack_70);
        }
        if ((*(byte *)(*(int *)(param_1 + 0xe4) + 10) & 4) == 0) {
          return;
        }
        iVar4 = FUN_ram_40399d6c(auStack_bc[0],iVar5 + 4,6);
        if (iVar4 != 0) {
          return;
        }
        if (*(char *)(_DAT_ram_3fcb4f84 + 0x94) != '\0') {
          if (iVar10 != 0) {
            (*(code *)&SUB_ram_40011ed4)
                      (*(undefined4 *)(iVar5 + 0x20),*(undefined4 *)(iVar5 + 0x18),
                       *(undefined4 *)(iVar5 + 0x1c));
            FUN_ram_4204911e(*(undefined2 *)(iVar5 + 0x28),*(undefined4 *)(iVar5 + 0x20),
                             *(undefined4 *)(iVar5 + 0x18),*(undefined4 *)(iVar5 + 0x1c));
          }
          *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x94) = 0;
          FUN_ram_42048b70();
        }
        if (0xe9fc < (ushort)(*(short *)(*(int *)(param_1 + 0xe4) + 0x28) - 100U)) {
          *(undefined2 *)(*(int *)(param_1 + 0xe4) + 0x28) = 100;
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))
                  (param_1 + 0x18,(uint)*(ushort *)(param_1 + 0x20e) * 1000,0);
        return;
      }
      cVar8 = *(char *)(*(int *)(param_2 + 0x24) + 8);
      iVar4 = (*(code *)&SUB_ram_40012080)();
      if (iVar4 == 0) {
        return;
      }
      if (*(char *)(_DAT_ram_3fcdfb1c + 0x50) != cVar8) {
        return;
      }
      iVar4 = FUN_ram_40399d6c(auStack_bc[0],iVar5 + 4,6);
      if (iVar4 != 0) {
        return;
      }
      if ((uint)(*(int *)(*(int *)(param_2 + 0x24) + 4) - *(int *)(iVar5 + 0x20)) <=
          (uint)*(ushort *)(param_1 + 0x20e) * 1000000) {
        return;
      }
      if (*(char *)(_DAT_ram_3fcb4f84 + 0x94) != '\0') {
        return;
      }
      FUN_ram_42033fd8(1,0x20,4,0x3c07c284,0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(param_1 + 0x18);
      FUN_ram_4203f69a();
      return;
    }
    if ((int)param_3 < 0x51) {
      if ((param_3 & 0xffffffdf) == 0x10) {
        DAT_ram_3fcb3956 = DAT_ram_3fcb3956 + '\x01';
        if (*(int *)(param_1 + 0x98) != 3) {
          return;
        }
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0x28);
        if (uVar12 < 6) {
          return;
        }
        FUN_ram_42033fd8(1,4,4,0x3c07c39c,param_3);
        FUN_ram_42041f72(iVar5,iVar4,pbVar11,param_3,param_4);
        if (*(code **)(_DAT_ram_3fcb50e8 + 0x54) == (code *)0x0) {
          return;
        }
        if ((1 << ((int)param_3 >> 4 & 0x1fU) & _DAT_ram_3fcb5198) == 0) {
          return;
        }
        (**(code **)(_DAT_ram_3fcb50e8 + 0x54))
                  ((int)param_3 >> 4 & 0xff,puVar9,uVar12,iVar4 + 10,(int)cVar8,
                   *(undefined1 *)(*(int *)(param_2 + 0x24) + 8),0,0);
        return;
      }
    }
    else {
      iVar10 = 0;
      if (param_3 == 0x80) goto LAB_ram_4204296e;
    }
LAB_ram_42042918:
    iVar4 = 0x498;
LAB_ram_42042d48:
    FUN_ram_42033fd8(1,4,4,iVar4 + 0x3c07c000,param_3);
    return;
  }
  if (param_3 == 0xc0) {
    DAT_ram_3fcb3958 = DAT_ram_3fcb3958 + '\x01';
    if ((*(int *)(param_1 + 0x98) != 5) && (1 < *(int *)(param_1 + 0x98) - 2U)) {
      return;
    }
    if ((_DAT_ram_3fcb5134 != 0) && ((*(uint *)(*(int *)(param_1 + 0xe4) + 0xc) & 1) != 0)) {
      if ((*(byte *)(iVar4 + 1) & 0x40) == 0) {
        if ((*(byte *)(iVar4 + 4) & 1) == 0) {
          if (uVar12 < 2) {
            return;
          }
          sVar1 = *(short *)(iVar4 + 0x18);
          uVar7 = 0x3c07c3b4;
          goto LAB_ram_42042e26;
        }
      }
      else {
        iVar4 = FUN_ram_42044294(param_2,*(undefined4 *)
                                          ((*(byte *)(iVar5 + 0x134) + 0x4c) * 4 + 0x3fcb4f78));
        if (iVar4 != 0) {
          return;
        }
        puVar9 = *(ushort **)(*(int *)(param_2 + 4) + 4);
        pbVar11 = (byte *)((uint)*(ushort *)(param_2 + 0x16) + (int)puVar9);
      }
    }
    if ((int)pbVar11 - (int)puVar9 < 2) {
      return;
    }
    uVar3 = *puVar9;
    FUN_ram_42033fd8(1,4,4,0x3c07c3dc,(uint)uVar3);
    uVar12 = (uint)uVar3 << 8 | 0xc0;
    goto LAB_ram_42042dfe;
  }
  if (param_3 != 0xd0) {
    if (param_3 == 0xb0) {
      DAT_ram_3fcb3957 = DAT_ram_3fcb3957 + '\x01';
      if (*(int *)(param_1 + 0x98) != 2) {
        uVar7 = 0x3c07c2c4;
        goto LAB_ram_42042960;
      }
      if (uVar12 < 6) {
        return;
      }
      sVar1 = *(short *)(iVar4 + 0x18);
      param_3 = (uint)*(ushort *)(iVar4 + 0x1a);
      uVar2 = *(undefined2 *)(iVar4 + 0x1c);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0x28);
      FUN_ram_42033fd8(1,4,4,0x3c07c2dc,param_3,uVar2,sVar1);
      if (*(short *)(iVar5 + 0x3b2) != sVar1) {
        if (((*(short *)(iVar5 + 0x3b2) != 0) || (sVar1 != 1)) || (DAT_ram_3fcb512c != '\x01')) {
          FUN_ram_42033fd8(1,4,4,0x3c07c344,sVar1);
          return;
        }
        FUN_ram_42033fd8(1,4,4,0x3c07c304,1,0,1);
      }
      if ((*(code **)(_DAT_ram_3fcb50e8 + 0x54) != (code *)0x0) &&
         ((_DAT_ram_3fcb5198 >> 0xb & 1) != 0)) {
        (**(code **)(_DAT_ram_3fcb50e8 + 0x54))
                  (0xb,puVar9,uVar12,iVar4 + 10,(int)cVar8,
                   *(undefined1 *)(*(int *)(param_2 + 0x24) + 8),0,0);
      }
      if (sVar1 == 1) {
        (*(code *)&SUB_ram_400120a4)(iVar5,iVar4,iVar4 + 0x1e,pbVar11,param_4,param_5,param_3,uVar2)
        ;
        return;
      }
      if (sVar1 == 0) {
        FUN_ram_42041c52(iVar5,iVar4,param_4,param_5,param_3,uVar2);
        return;
      }
      if (sVar1 == 2) {
        FUN_ram_42041ba4(iVar5,iVar4,param_4,param_5,param_3,uVar2);
        return;
      }
      if (sVar1 != 3) {
        return;
      }
      if (((*(byte *)(iVar4 + 1) & 8) == 0) || (DAT_ram_3fcb5137 != param_3)) {
        FUN_ram_42041d66(iVar5,iVar4 + 0x1e,(int)pbVar11 - (iVar4 + 0x1e),param_3,uVar2);
        return;
      }
      iVar4 = 0x37c;
      goto LAB_ram_42042d48;
    }
    goto LAB_ram_42042918;
  }
  DAT_ram_3fcb3959 = DAT_ram_3fcb3959 + '\x01';
  if (_DAT_ram_3fcb5134 == 0) {
    if ((*(byte *)(iVar4 + 1) & 0x40) == 0) goto LAB_ram_42043052;
    puVar9 = (ushort *)((int)puVar9 + *(int *)(gp + -0x1a4));
    uVar12 = uVar12 - (*(int *)(gp + -0x1a0) + *(int *)(gp + -0x1a4));
    *(ushort **)(*(int *)(param_2 + 4) + 4) = puVar9;
    *(short *)(param_2 + 0x16) = (short)(uVar12 * 0x10000 >> 0x10);
    pbVar11 = (byte *)((int)puVar9 + (uVar12 & 0xffff));
  }
  else {
    if ((*(byte *)(iVar4 + 1) & 0x40) != 0) {
      iVar10 = FUN_ram_42040442(iVar4 + 10);
      if ((((*(byte *)(iVar4 + 1) & 3) == 0) && (iVar10 != 0)) &&
         (*(byte *)(iVar10 + 0xb9) == *(byte *)(iVar4 + 0x1b) >> 6)) {
        iVar10 = FUN_ram_4204424e(param_2);
      }
      else {
        if (iVar5 == 0) {
          return;
        }
        iVar10 = FUN_ram_42044294(param_2,*(undefined4 *)
                                           ((*(byte *)(iVar5 + 0x134) + 0x4c) * 4 + 0x3fcb4f78));
      }
      if (iVar10 != 0) {
        return;
      }
      puVar9 = *(ushort **)(*(int *)(param_2 + 4) + 4);
      pbVar11 = (byte *)((uint)*(ushort *)(param_2 + 0x16) + (int)puVar9);
      goto LAB_ram_42042f9e;
    }
LAB_ram_42043052:
    iVar10 = FUN_ram_42040442(iVar4 + 10);
    if ((((*(byte *)(iVar4 + 1) & 3) == 0) &&
        (iVar6 = FUN_ram_40399d6c(iVar4 + 4,0x3c078fac,6), iVar6 != 0)) && (iVar10 != 0)) {
      return;
    }
  }
  iVar10 = FUN_ram_42040826((byte)*puVar9);
  if ((iVar10 != 0) && (_DAT_ram_3fcb5134 != 0)) {
    return;
  }
LAB_ram_42042f9e:
  if (((((*(code **)(_DAT_ram_3fcb50e8 + 0x54) == (code *)0x0) ||
        ((_DAT_ram_3fcb5198 & 0x2000) == 0)) ||
       ((1 << ((byte)*puVar9 & 0x1f) & _DAT_ram_3fcb519c) == 0)) ||
      (iVar10 = (**(code **)(_DAT_ram_3fcb50e8 + 0x54))
                          (0xd,puVar9,(int)pbVar11 - (int)puVar9,iVar4 + 10,(int)cVar8,
                           *(undefined1 *)(*(int *)(param_2 + 0x24) + 8),0,0), iVar10 != 0)) &&
     ((iVar10 = FUN_ram_42033f78(), iVar10 == 0 ||
      (iVar10 = FUN_ram_42033f86(iVar4,puVar9,(int)pbVar11 - (int)puVar9,
                                 *(undefined1 *)(*(int *)(param_2 + 0x24) + 8)), iVar10 != 0)))) {
    if (((byte)((byte)*puVar9 + 0x82) < 2) ||
       (((byte)*puVar9 == 4 && (*(byte *)((int)puVar9 + 1) == 0x21)))) {
      if ((iVar5 == 0) && (iVar5 = *(int *)(param_1 + 0xe8), iVar5 == 0)) {
        return;
      }
    }
    else {
      if (iVar5 == 0) {
        return;
      }
      if (*(int *)(param_1 + 0x98) != 5) {
        return;
      }
    }
    iVar10 = FUN_ram_420351d2(iVar5,iVar4,puVar9,pbVar11);
    if (iVar10 == 0) {
      FUN_ram_42044692(iVar5,iVar4,puVar9,pbVar11);
    }
  }
  return;
}

