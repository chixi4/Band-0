
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42089514(int param_1,uint param_2,uint param_3)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  undefined1 uVar7;
  undefined *puVar8;
  undefined *puVar9;
  code *pcVar10;
  uint uVar11;
  int iVar12;
  int iVar13;
  int iVar14;
  uint uVar15;
  undefined1 auStack_5c [32];
  undefined1 uStack_3c;
  undefined1 auStack_3b [6];
  undefined1 uStack_35;
  undefined1 uStack_34;
  
  iVar4 = *(int *)(param_1 + 0x10);
  iVar14 = *(int *)(gp + -0xb4);
  uVar15 = (int)param_3 >> 8;
  iVar5 = FUN_ram_4207e5a8();
  uVar11 = *(uint *)(iVar4 + 0x98);
  uVar3 = uVar15 & 0xff;
  if (uVar11 < 8) {
    puVar8 = *(undefined **)(&DAT_ram_3c0fab4c + uVar11 * 4);
  }
  else {
    puVar8 = &DAT_ram_3c0c4168;
  }
  if (param_2 < 8) {
    puVar9 = *(undefined **)(&DAT_ram_3c0fab4c + param_2 * 4);
  }
  else {
    puVar9 = &DAT_ram_3c0c4168;
  }
  FUN_ram_4207a038(1,4,3,&DAT_ram_3c10016c,puVar8,puVar9,param_3);
  *(uint *)(iVar4 + 0x98) = param_2;
  FUN_ram_420894ac(param_2);
  iVar13 = *(int *)(iVar4 + 0xe4);
  if (iVar13 == 0) {
    iVar13 = *(int *)(iVar4 + 0xe8);
    uStack_34 = 0x80;
  }
  else {
    uStack_34 = *(undefined1 *)(iVar13 + 0xa4);
  }
  if (param_2 == 3) {
    FUN_ram_420919c6(2);
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar5 != 0) {
      (*(code *)&SUB_ram_40011ee4)();
    }
    if (uVar11 == 5) {
LAB_ram_4208a050:
      uVar6 = 0x20;
    }
    else {
      if (5 < uVar11) {
        if (uVar11 != 7) {
          return 0;
        }
        goto LAB_ram_4208a050;
      }
      if (1 < uVar11 - 2) {
        return 0;
      }
      uVar6 = 0;
    }
    FUN_ram_42075b46(iVar13,uVar6,0);
    iVar5 = iVar4 + 4;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar5,0x400020b4,0);
    puVar8 = &DAT_ram_3c0fd5bc;
  }
  else {
    if (3 < param_2) {
      if (param_2 != 5) {
        return 0;
      }
      if (1 < uVar11 - 2) {
        return 0;
      }
      if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x04') {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd5e4,4,1);
        *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 1;
      }
      FUN_ram_42087d40(iVar4,iVar13,param_3 == 0x10);
      if ((byte)(DAT_ram_3fcc41bc - 1U) < 2) {
        FUN_ram_42088530();
        return 0;
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3fd8);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3fd8);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(0x3fcc3fd8,0x42078dbc,0);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(0x3fcc3fd8,300,0);
      *(undefined1 *)(iVar13 + 0x24) = 1;
      FUN_ram_420919c6(2);
      iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (iVar4 != 0) {
        (*(code *)&SUB_ram_40011ee4)();
      }
      if ((DAT_ram_3fcc41bc != '\a') && (1 < (byte)(DAT_ram_3fcc41bd - 0xbU))) {
        return 0;
      }
      *(undefined1 *)(iVar13 + 0x24) = 2;
      if ((*(int *)(param_1 + 0x230) != 0) &&
         (pcVar10 = *(code **)(*(int *)(param_1 + 0x230) + 0x14), pcVar10 != (code *)0x0)) {
        (*pcVar10)();
      }
      if (*(int *)(param_1 + 0x230) == 0) {
        return 0;
      }
      pcVar10 = *(code **)(*(int *)(param_1 + 0x230) + 0x18);
      if (pcVar10 == (code *)0x0) {
        return 0;
      }
      uVar6 = FUN_ram_4207f212();
      (*pcVar10)(uVar6,0);
      return 0;
    }
    uVar2 = (undefined1)(param_3 >> 8);
    if (param_2 == 0) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(1);
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd3e4);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4 + 0x18);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4 + 4);
      FUN_ram_420919c6(0);
      iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
      if (iVar5 != 0) {
        (*(code *)&SUB_ram_40011ee4)();
      }
      if (uVar11 != 3) {
        if (uVar11 < 4) {
          if (uVar11 != 2) {
            return 0;
          }
          cVar1 = *(char *)(_DAT_ram_3fcc4014 + 0x128);
          if (uVar3 == 0) {
            FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd420,cVar1,6);
            *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
            uStack_35 = 3;
            uVar6 = 3;
            puVar8 = &DAT_ram_3c0fd484;
          }
          else {
            if (cVar1 != '\x02') {
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd438,cVar1,4);
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 4;
            }
            if (((uVar3 == 0xca) || (uVar3 == 6)) &&
               ((DAT_ram_3fcc41bd == '\t' || (DAT_ram_3fcc41bd == '\x10')))) {
              FUN_ram_4207eb72();
            }
            if (uVar3 == 2) {
              uVar6 = 2;
              puVar8 = &DAT_ram_3c0fd450;
              uStack_35 = uVar2;
            }
            else if (uVar3 == 5) {
              uVar6 = 5;
              puVar8 = &DAT_ram_3c0fd468;
              uStack_35 = uVar2;
            }
            else {
              uStack_35 = 0xca;
              uVar6 = 0xca;
              puVar8 = &DAT_ram_3c0fd49c;
            }
          }
          FUN_ram_4207a038(1,4,4,puVar8,uVar6);
          if (*(int *)(iVar4 + 0xe4) != 0) {
            FUN_ram_42086408(iVar13 + 4);
            (*(code *)&SUB_ram_40011d48)();
            FUN_ram_42094484();
            FUN_ram_42087aaa(iVar4,*(undefined4 *)(iVar4 + 0xe4));
          }
          goto LAB_ram_420898bc;
        }
        if ((uVar11 & 0xfffffffd) != 5) {
          return 0;
        }
        if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x01') {
          (*(code *)&SUB_ram_40011d48)();
          FUN_ram_42094484();
          if (1 < (byte)(DAT_ram_3fcc41bc - 1U)) {
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc3fd8);
            (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(0x3fcc3fd8);
          }
        }
        if (((param_3 & 0xff) - 0xa0 & 0xffffffdf) == 0) {
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd514);
          if (_DAT_ram_3fcc41c4 != 0) {
            _DAT_ram_3fcc41c4 = 0;
          }
          uStack_35 = uVar2;
          if (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 0) {
            if (*(char *)(_DAT_ram_3fcc4014 + 0x128) == '\x05') {
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd630,5,4);
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 4;
            }
            else {
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd648,*(char *)(_DAT_ram_3fcc4014 + 0x128),2);
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 2;
              FUN_ram_42086408(iVar13 + 4);
            }
          }
        }
        else {
          if ((param_3 & 0xff) == 0) {
            uVar7 = *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128);
            if ((uVar3 == 0xcc) || (uVar3 == 0xf)) {
              uStack_35 = uVar2;
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd71c,uVar7,2);
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 2;
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd8d0,uStack_35);
              FUN_ram_42086408(iVar13 + 4);
              uVar6 = 0xc0;
              uVar3 = 0xf;
            }
            else if (uVar3 == 200) {
              uStack_35 = 200;
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd98c,uVar7,3);
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 3;
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd1bc,200);
LAB_ram_420899ac:
              uVar6 = 0xa0;
              uVar3 = 4;
            }
            else if (uVar3 == 2) {
              uStack_35 = uVar2;
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd1e0,uVar7,6);
              uVar6 = 0xc0;
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
              uVar3 = 3;
            }
            else if (uVar3 == 4) {
              uStack_35 = uVar2;
              FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd1f8,uVar7,6);
              uVar6 = 0xa0;
              *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
            }
            else {
              if (uVar3 == 0xd1) {
                uStack_35 = 0xd1;
                FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd210,uVar7,6);
                *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
                goto LAB_ram_420899ac;
              }
              if (uVar3 == 0) {
                uStack_35 = 8;
                FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd240,uVar7,6);
                *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
                FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd258,8);
                uVar6 = 0xa0;
                uVar3 = 8;
              }
              else {
                FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd228,uVar7,6);
                *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
                uStack_35 = uVar2;
                if (uVar3 == 0xc) {
                  uStack_35 = 0xcf;
                  DAT_ram_3fcc4238 = 1;
                }
                uVar6 = 0xc0;
              }
            }
          }
          else {
            uStack_35 = 8;
            FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd288,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),6);
            *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 6;
            FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd2a0,8);
            uVar3 = 8;
            uVar6 = 0xa0;
          }
          FUN_ram_42075b46(iVar13,uVar6,uVar3);
        }
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd2b4);
        FUN_ram_42087aaa(iVar4,iVar13);
        uVar6 = FUN_ram_42092408(0);
        (*(code *)&SUB_ram_40011e68)(0,uVar6,1,0);
        FUN_ram_4209243a(0);
        goto LAB_ram_420898bc;
      }
      cVar1 = *(char *)(_DAT_ram_3fcc4014 + 0x128);
      if (uVar3 == 0) {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd2c0,cVar1,6);
        uVar7 = 6;
LAB_ram_42089b38:
        *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = uVar7;
      }
      else if (cVar1 != '\x02') {
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd2d8,cVar1,4);
        uVar7 = 4;
        goto LAB_ram_42089b38;
      }
      if (*(int *)(iVar4 + 0xe4) != 0) {
        FUN_ram_42086408(iVar13 + 4);
        uVar6 = 0x27;
        if (uVar3 == 0x27) {
LAB_ram_42089b62:
          FUN_ram_42075b46(iVar13,0xc0,uVar6);
        }
        else if (uVar3 == 0) {
          _DAT_ram_3fcc41c4 = 0;
          *(undefined1 *)(iVar13 + 0x2f9) = 0;
          uVar6 = 3;
          goto LAB_ram_42089b62;
        }
        (*(code *)&SUB_ram_40011d48)();
        FUN_ram_42094484();
        FUN_ram_42087aaa(iVar4,*(undefined4 *)(iVar4 + 0xe4));
      }
      if ((param_3 & 0xdf) == 0x10) {
        if (uVar3 == 0x11) {
          uStack_35 = 5;
          uVar15 = 5;
          puVar8 = &DAT_ram_3c0fd2f0;
        }
        else if (uVar3 == 0x35) {
          uStack_35 = 0x31;
          uVar15 = 0x31;
          puVar8 = &DAT_ram_3c0fd30c;
        }
        else if (uVar3 == 0xd0) {
          uStack_35 = 0xd0;
          uVar15 = 0xd0;
          puVar8 = &DAT_ram_3c0fd328;
        }
        else {
          uStack_35 = 0xcb;
          uVar15 = uVar15 & 0xff;
          puVar8 = &DAT_ram_3c0fd354;
        }
      }
      else if (uVar3 == 4) {
        uVar15 = 4;
        puVar8 = &DAT_ram_3c0fd374;
        uStack_35 = uVar2;
      }
      else if (uVar3 == 5) {
        uVar15 = 5;
        puVar8 = &DAT_ram_3c0fd39c;
        uStack_35 = uVar2;
      }
      else if (uVar3 == 0x27) {
        uVar15 = 0x27;
        puVar8 = &DAT_ram_3c0fd3b8;
        uStack_35 = uVar2;
      }
      else if (uVar3 == 0) {
        uStack_35 = 3;
        uVar15 = 3;
        puVar8 = &DAT_ram_3c0fd3cc;
      }
      else {
        uStack_35 = 0xcb;
        uVar15 = uVar15 & 0xff;
        puVar8 = &DAT_ram_3c0fd404;
      }
      FUN_ram_4207a038(1,4,4,puVar8,uVar15);
LAB_ram_420898bc:
      (**(code **)(_DAT_ram_3fcc4178 + 0x10))(uStack_35);
      if (DAT_ram_3fcc3fa6 == '\0' && DAT_ram_3fcc3f76 == '\0') {
        FUN_ram_4039c11e(auStack_3b,iVar4 + 0x9c,6);
        FUN_ram_4039c11e(auStack_5c,iVar14 + 8,0x20);
        uStack_3c = (undefined1)*(undefined4 *)(iVar14 + 4);
        FUN_ram_420860ce();
        FUN_ram_4207a038(1,0x24,4,&DAT_ram_3c0fd4b4,uStack_35,DAT_ram_3fcc3f76);
        FUN_ram_4208344a(5,auStack_5c,0x29);
        return 0;
      }
      (*(code *)&SUB_ram_40011d44)();
      FUN_ram_42085ebc();
      return 0;
    }
    if (param_2 != 2) {
      return 0;
    }
    if (((*(char *)(gp + 0x44) != '\0') && (*(char *)(iVar5 + 0x471) != '\0')) &&
       (*(char *)(iVar13 + 0x2f9) == '\0')) {
      *(char *)(gp + 0x44) = '\0';
      FUN_ram_42075b46(iVar13,0xc0,3);
    }
    FUN_ram_420919c6(2);
    if (uVar11 < 4) {
      if (uVar11 < 2) {
        if (*(char *)(_DAT_ram_3fcc4014 + 0x128) != '\x01') {
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd4e4,*(char *)(_DAT_ram_3fcc4014 + 0x128),1);
          *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 1;
        }
      }
      else if (((param_3 & 0xff) != 0xb0) &&
              ((((param_3 & 0xff) != 0xc0 || (0x10 < (uVar15 & 0xff))) ||
               ((0x103d1U >> (uVar15 & 0x1f) & 1) == 0)))) goto LAB_ram_42089d74;
      FUN_ram_42075b46(iVar13,0xb0,1);
    }
    else {
      if (uVar11 != 5) {
        return 0;
      }
      if ((param_3 & 0xff) == 0xb0) {
        FUN_ram_42075b46(iVar13,0xb0,1);
        *(undefined4 *)(iVar4 + 0x98) = 5;
      }
      else if (((param_3 & 0xff) - 0xa0 & 0xffffffdf) == 0) {
        if (*(int *)(_DAT_ram_3fcdfaf0 + 8) == 0) {
          FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd4fc,*(undefined1 *)(_DAT_ram_3fcc4014 + 0x128),2);
          *(undefined1 *)(_DAT_ram_3fcc4014 + 0x128) = 2;
        }
        FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd52c,uVar15 & 0xff);
        iVar12 = iVar4 + 4;
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar4 + 0x18);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar12);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar12);
        FUN_ram_420919c6(0);
        iVar5 = FUN_ram_4207fec0();
        if (iVar5 != 0) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar12,0x42075280,0);
          (**(code **)(_DAT_ram_3fcdfdd8 + 0xe0))(iVar12,1000,0);
        }
        FUN_ram_42087aaa(iVar4,iVar13);
        uStack_35 = uVar2;
        FUN_ram_4039c11e(auStack_3b,iVar4 + 0x9c,6);
        FUN_ram_4039c11e(auStack_5c,iVar14 + 8,0x20);
        uStack_3c = (undefined1)*(undefined4 *)(iVar14 + 4);
        FUN_ram_420860ce();
        FUN_ram_4207a038(1,0x24,4,&DAT_ram_3c0fd568,uStack_35);
        (**(code **)(_DAT_ram_3fcc4178 + 0x10))(uStack_35);
        FUN_ram_4208344a(5,auStack_5c,0x29);
      }
    }
LAB_ram_42089d74:
    iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar5 != 0) {
      (*(code *)&SUB_ram_40011ee4)();
    }
    iVar5 = iVar4 + 4;
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe8))(iVar5);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xec))(iVar5,0x42075fc8,0);
    if (DAT_ram_3fcc41bc == '\x06') {
      FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd58c,4000);
      uVar6 = 4000;
      pcVar10 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
      goto LAB_ram_42089df0;
    }
    puVar8 = &DAT_ram_3c0fd5a4;
  }
  FUN_ram_4207a038(1,4,4,puVar8,1000);
  uVar6 = 1000;
  pcVar10 = *(code **)(_DAT_ram_3fcdfdd8 + 0xe0);
LAB_ram_42089df0:
  (*pcVar10)(iVar4 + 4,uVar6,0);
  return 0;
}

