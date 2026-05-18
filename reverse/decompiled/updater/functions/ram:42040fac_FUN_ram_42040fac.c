
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040fac(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined1 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  code *pcVar9;
  uint uVar10;
  int iVar11;
  int iVar12;
  int iVar13;
  uint uVar14;
  undefined1 auStack_5c [32];
  undefined1 uStack_3c;
  undefined1 auStack_3b [6];
  undefined1 uStack_35;
  undefined1 uStack_34;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar13 = *(int *)(gp + -0x2b8);
  uVar14 = (int)param_3 >> 8;
  iVar5 = FUN_ram_420384d8();
  uVar10 = *(uint *)(iVar4 + 0x98);
  uVar3 = uVar14 & 0xff;
  if (uVar10 < 8) {
    uVar7 = *(undefined4 *)(uVar10 * 4 + 0x3c078f88);
  }
  else {
    uVar7 = 0x3c071200;
  }
  if (param_2 < 8) {
    uVar8 = *(undefined4 *)(param_2 * 4 + 0x3c078f88);
  }
  else {
    uVar8 = 0x3c071200;
  }
  FUN_ram_42033fd8(1,4,3,0x3c07e63c,uVar7,uVar8,param_3);
  *(uint *)(iVar4 + 0x98) = param_2;
  FUN_ram_42040f44(param_2);
  iVar12 = *(int *)(iVar4 + 0xe4);
  if (iVar12 == 0) {
    iVar12 = *(int *)(iVar4 + 0xe8);
    uStack_34 = 0x80;
  }
  else {
    uStack_34 = *(undefined1 *)(iVar12 + 0xa4);
  }
  if (param_2 == 3) {
    FUN_ram_42048fbe(2);
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar5 != 0) {
      (*(code *)&SUB_ram_40011ee4)();
    }
    if (uVar10 == 5) {
LAB_ram_42041ae8:
      uVar7 = 0x20;
    }
    else {
      if (5 < uVar10) {
        if (uVar10 != 7) {
          return 0;
        }
        goto LAB_ram_42041ae8;
      }
      if (1 < uVar10 - 2) {
        return 0;
      }
      uVar7 = 0;
    }
    FUN_ram_4203331e(iVar12,uVar7,0);
    iVar5 = iVar4 + 4;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar5,0x400020b4,0);
    uVar7 = 0x3c07c10c;
  }
  else {
    if (3 < param_2) {
      if (param_2 != 5) {
        return 0;
      }
      if (1 < uVar10 - 2) {
        return 0;
      }
      if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x04') {
        FUN_ram_42033fd8(1,4,4,0x3c07c134,4,1);
        *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 1;
      }
      FUN_ram_4203fbf6(iVar4,iVar12,param_3 == 0x10);
      if ((byte)(DAT_ram_3fcb512c - 1U) < 2) {
        FUN_ram_4203ffc8();
        return 0;
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4f48);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4f48);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcb4f48,0x42030854,0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcb4f48,300,0);
      *(undefined1 *)(iVar12 + 0x24) = 1;
      FUN_ram_42048fbe(2);
      iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (iVar4 != 0) {
        (*(code *)&SUB_ram_40011ee4)();
      }
      if ((DAT_ram_3fcb512c != '\a') && (1 < (byte)(DAT_ram_3fcb512d - 0xbU))) {
        return 0;
      }
      *(undefined1 *)(iVar12 + 0x24) = 2;
      if ((*(int *)(param_1 + 0x230) != 0) &&
         (pcVar9 = *(code **)(*(int *)(param_1 + 0x230) + 0x14), pcVar9 != (code *)0x0)) {
        (*pcVar9)();
      }
      if (*(int *)(param_1 + 0x230) == 0) {
        return 0;
      }
      pcVar9 = *(code **)(*(int *)(param_1 + 0x230) + 0x18);
      if (pcVar9 == (code *)0x0) {
        return 0;
      }
      uVar7 = FUN_ram_420390a6();
      (*pcVar9)(uVar7,0);
      return 0;
    }
    uVar2 = (undefined1)(param_3 >> 8);
    if (param_2 == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(1);
      FUN_ram_42033fd8(1,4,4,0x3c07bf34);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4 + 0x18);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4 + 4);
      FUN_ram_42048fbe(0);
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (iVar5 != 0) {
        (*(code *)&SUB_ram_40011ee4)();
      }
      if (uVar10 != 3) {
        if (uVar10 < 4) {
          if (uVar10 != 2) {
            return 0;
          }
          cVar1 = *(char *)(_DAT_ram_3fcb4f84 + 0x128);
          if (uVar3 == 0) {
            FUN_ram_42033fd8(1,4,4,0x3c07bf70,cVar1,6);
            *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
            uStack_35 = 3;
            uVar7 = 3;
            uVar8 = 0x3c07bfd4;
          }
          else {
            if (cVar1 != '\x02') {
              FUN_ram_42033fd8(1,4,4,0x3c07bf88,cVar1,4);
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 4;
            }
            if (((uVar3 == 0xca) || (uVar3 == 6)) &&
               ((DAT_ram_3fcb512d == '\t' || (DAT_ram_3fcb512d == '\x10')))) {
              FUN_ram_42038aa2();
            }
            if (uVar3 == 2) {
              uVar7 = 2;
              uVar8 = 0x3c07bfa0;
              uStack_35 = uVar2;
            }
            else if (uVar3 == 5) {
              uVar7 = 5;
              uVar8 = 0x3c07bfb8;
              uStack_35 = uVar2;
            }
            else {
              uStack_35 = 0xca;
              uVar7 = 0xca;
              uVar8 = 0x3c07bfec;
            }
          }
          FUN_ram_42033fd8(1,4,4,uVar8,uVar7);
          if (*(int *)(iVar4 + 0xe4) != 0) {
            FUN_ram_4203e512(iVar12 + 4);
            (*(code *)&SUB_ram_40011d48)();
            FUN_ram_4204ba6c();
            FUN_ram_4203f960(iVar4,*(undefined4 *)(iVar4 + 0xe4));
          }
          goto LAB_ram_42041354;
        }
        if ((uVar10 & 0xfffffffd) != 5) {
          return 0;
        }
        if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x01') {
          (*(code *)&SUB_ram_40011d48)();
          FUN_ram_4204ba6c();
          if (1 < (byte)(DAT_ram_3fcb512c - 1U)) {
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb4f48);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcb4f48);
          }
        }
        if (((param_3 & 0xff) - 0xa0 & 0xffffffdf) == 0) {
          FUN_ram_42033fd8(1,4,4,0x3c07c064);
          if (_DAT_ram_3fcb5134 != 0) {
            _DAT_ram_3fcb5134 = 0;
          }
          uStack_35 = uVar2;
          if (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 0) {
            if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) == '\x05') {
              FUN_ram_42033fd8(1,4,4,0x3c07c180,5,4);
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 4;
            }
            else {
              FUN_ram_42033fd8(1,4,4,0x3c07c198,*(char *)(_DAT_ram_3fcb4f84 + 0x128),2);
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 2;
              FUN_ram_4203e512(iVar12 + 4);
            }
          }
        }
        else {
          if ((param_3 & 0xff) == 0) {
            uVar6 = *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128);
            if ((uVar3 == 0xcc) || (uVar3 == 0xf)) {
              uStack_35 = uVar2;
              FUN_ram_42033fd8(1,4,4,0x3c07c26c,uVar6,2);
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 2;
              FUN_ram_42033fd8(1,4,4,0x3c07c420,uStack_35);
              FUN_ram_4203e512(iVar12 + 4);
              uVar7 = 0xc0;
              uVar3 = 0xf;
            }
            else if (uVar3 == 200) {
              uStack_35 = 200;
              FUN_ram_42033fd8(1,4,4,0x3c07c4dc,uVar6,3);
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 3;
              FUN_ram_42033fd8(1,4,4,0x3c07bd0c,200);
LAB_ram_42041444:
              uVar7 = 0xa0;
              uVar3 = 4;
            }
            else if (uVar3 == 2) {
              uStack_35 = uVar2;
              FUN_ram_42033fd8(1,4,4,0x3c07bd30,uVar6,6);
              uVar7 = 0xc0;
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
              uVar3 = 3;
            }
            else if (uVar3 == 4) {
              uStack_35 = uVar2;
              FUN_ram_42033fd8(1,4,4,0x3c07bd48,uVar6,6);
              uVar7 = 0xa0;
              *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
            }
            else {
              if (uVar3 == 0xd1) {
                uStack_35 = 0xd1;
                FUN_ram_42033fd8(1,4,4,0x3c07bd60,uVar6,6);
                *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
                goto LAB_ram_42041444;
              }
              if (uVar3 == 0) {
                uStack_35 = 8;
                FUN_ram_42033fd8(1,4,4,0x3c07bd90,uVar6,6);
                *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
                FUN_ram_42033fd8(1,4,4,0x3c07bda8,8);
                uVar7 = 0xa0;
                uVar3 = 8;
              }
              else {
                FUN_ram_42033fd8(1,4,4,0x3c07bd78,uVar6,6);
                *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
                uStack_35 = uVar2;
                if (uVar3 == 0xc) {
                  uStack_35 = 0xcf;
                  DAT_ram_3fcb51a8 = 1;
                }
                uVar7 = 0xc0;
              }
            }
          }
          else {
            uStack_35 = 8;
            FUN_ram_42033fd8(1,4,4,0x3c07bdd8,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),6);
            *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 6;
            FUN_ram_42033fd8(1,4,4,0x3c07bdf0,8);
            uVar3 = 8;
            uVar7 = 0xa0;
          }
          FUN_ram_4203331e(iVar12,uVar7,uVar3);
        }
        FUN_ram_42033fd8(1,4,4,0x3c07be04);
        FUN_ram_4203f960(iVar4,iVar12);
        uVar7 = FUN_ram_42049a00(0);
        (*(code *)&SUB_ram_40011e68)(0,uVar7,1,0);
        FUN_ram_42049a32(0);
        goto LAB_ram_42041354;
      }
      cVar1 = *(char *)(_DAT_ram_3fcb4f84 + 0x128);
      if (uVar3 == 0) {
        FUN_ram_42033fd8(1,4,4,0x3c07be10,cVar1,6);
        uVar6 = 6;
LAB_ram_420415d0:
        *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = uVar6;
      }
      else if (cVar1 != '\x02') {
        FUN_ram_42033fd8(1,4,4,0x3c07be28,cVar1,4);
        uVar6 = 4;
        goto LAB_ram_420415d0;
      }
      if (*(int *)(iVar4 + 0xe4) != 0) {
        FUN_ram_4203e512(iVar12 + 4);
        uVar7 = 0x27;
        if (uVar3 == 0x27) {
LAB_ram_420415fa:
          FUN_ram_4203331e(iVar12,0xc0,uVar7);
        }
        else if (uVar3 == 0) {
          _DAT_ram_3fcb5134 = 0;
          *(undefined1 *)(iVar12 + 0x2f9) = 0;
          uVar7 = 3;
          goto LAB_ram_420415fa;
        }
        (*(code *)&SUB_ram_40011d48)();
        FUN_ram_4204ba6c();
        FUN_ram_4203f960(iVar4,*(undefined4 *)(iVar4 + 0xe4));
      }
      if ((param_3 & 0xdf) == 0x10) {
        if (uVar3 == 0x11) {
          uStack_35 = 5;
          uVar14 = 5;
          uVar7 = 0x3c07be40;
        }
        else if (uVar3 == 0x35) {
          uStack_35 = 0x31;
          uVar14 = 0x31;
          uVar7 = 0x3c07be5c;
        }
        else if (uVar3 == 0xd0) {
          uStack_35 = 0xd0;
          uVar14 = 0xd0;
          uVar7 = 0x3c07be78;
        }
        else {
          uStack_35 = 0xcb;
          uVar14 = uVar14 & 0xff;
          uVar7 = 0x3c07bea4;
        }
      }
      else if (uVar3 == 4) {
        uVar14 = 4;
        uVar7 = 0x3c07bec4;
        uStack_35 = uVar2;
      }
      else if (uVar3 == 5) {
        uVar14 = 5;
        uVar7 = 0x3c07beec;
        uStack_35 = uVar2;
      }
      else if (uVar3 == 0x27) {
        uVar14 = 0x27;
        uVar7 = 0x3c07bf08;
        uStack_35 = uVar2;
      }
      else if (uVar3 == 0) {
        uStack_35 = 3;
        uVar14 = 3;
        uVar7 = 0x3c07bf1c;
      }
      else {
        uStack_35 = 0xcb;
        uVar14 = uVar14 & 0xff;
        uVar7 = 0x3c07bf54;
      }
      FUN_ram_42033fd8(1,4,4,uVar7,uVar14);
LAB_ram_42041354:
      (**(code **)(_DAT_ram_3fcb50e8 + 0x10))(uStack_35);
      if (DAT_ram_3fcb4f16 == '\0' && DAT_ram_3fcb4ee6 == '\0') {
        FUN_ram_40399daa(auStack_3b,iVar4 + 0x9c,6);
        FUN_ram_40399daa(auStack_5c,iVar13 + 8,0x20);
        uStack_3c = (undefined1)*(undefined4 *)(iVar13 + 4);
        FUN_ram_4203e1d8();
        FUN_ram_42033fd8(1,0x24,4,0x3c07c004,uStack_35,DAT_ram_3fcb4ee6);
        FUN_ram_4203bea0(5,auStack_5c,0x29);
        return 0;
      }
      (*(code *)&SUB_ram_40011d44)();
      FUN_ram_4203dfc6();
      return 0;
    }
    if (param_2 != 2) {
      return 0;
    }
    if (((*(char *)(gp + -0x1c4) != '\0') && (*(char *)(iVar5 + 0x471) != '\0')) &&
       (*(char *)(iVar12 + 0x2f9) == '\0')) {
      *(char *)(gp + -0x1c4) = '\0';
      FUN_ram_4203331e(iVar12,0xc0,3);
    }
    FUN_ram_42048fbe(2);
    if (uVar10 < 4) {
      if (uVar10 < 2) {
        if (*(char *)(_DAT_ram_3fcb4f84 + 0x128) != '\x01') {
          FUN_ram_42033fd8(1,4,4,0x3c07c034,*(char *)(_DAT_ram_3fcb4f84 + 0x128),1);
          *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 1;
        }
      }
      else if (((param_3 & 0xff) != 0xb0) &&
              ((((param_3 & 0xff) != 0xc0 || (0x10 < (uVar14 & 0xff))) ||
               ((0x103d1U >> (uVar14 & 0x1f) & 1) == 0)))) goto LAB_ram_4204180c;
      FUN_ram_4203331e(iVar12,0xb0,1);
    }
    else {
      if (uVar10 != 5) {
        return 0;
      }
      if ((param_3 & 0xff) == 0xb0) {
        FUN_ram_4203331e(iVar12,0xb0,1);
        *(undefined4 *)(iVar4 + 0x98) = 5;
      }
      else if (((param_3 & 0xff) - 0xa0 & 0xffffffdf) == 0) {
        if (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 0) {
          FUN_ram_42033fd8(1,4,4,0x3c07c04c,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),2);
          *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 2;
        }
        FUN_ram_42033fd8(1,4,4,0x3c07c07c,uVar14 & 0xff);
        iVar11 = iVar4 + 4;
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4 + 0x18);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar11);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar11);
        FUN_ram_42048fbe(0);
        iVar5 = FUN_ram_420399ec();
        if (iVar5 != 0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar11,0x4202d67a,0);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar11,1000,0);
        }
        FUN_ram_4203f960(iVar4,iVar12);
        uStack_35 = uVar2;
        FUN_ram_40399daa(auStack_3b,iVar4 + 0x9c,6);
        FUN_ram_40399daa(auStack_5c,iVar13 + 8,0x20);
        uStack_3c = (undefined1)*(undefined4 *)(iVar13 + 4);
        FUN_ram_4203e1d8();
        FUN_ram_42033fd8(1,0x24,4,0x3c07c0b8,uStack_35);
        (**(code **)(_DAT_ram_3fcb50e8 + 0x10))(uStack_35);
        FUN_ram_4203bea0(5,auStack_5c,0x29);
      }
    }
LAB_ram_4204180c:
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar5 != 0) {
      (*(code *)&SUB_ram_40011ee4)();
    }
    iVar5 = iVar4 + 4;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar5,0x4202e0d2,0);
    if (DAT_ram_3fcb512c == '\x06') {
      FUN_ram_42033fd8(1,4,4,0x3c07c0dc,4000);
      uVar7 = 4000;
      pcVar9 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
      goto LAB_ram_42041888;
    }
    uVar7 = 0x3c07c0f4;
  }
  FUN_ram_42033fd8(1,4,4,uVar7,1000);
  uVar7 = 1000;
  pcVar9 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
LAB_ram_42041888:
  (*pcVar9)(iVar4 + 4,uVar7,0);
  return 0;
}

