
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42028608(undefined4 param_1,int *param_2,int param_3)

{
  byte bVar1;
  undefined1 uVar2;
  byte bVar3;
  bool bVar4;
  bool bVar5;
  int iVar6;
  int iVar7;
  char *pcVar8;
  int iVar9;
  undefined4 uStack_ac;
  byte bStack_a8;
  undefined1 auStack_a7 [7];
  undefined1 uStack_a0;
  undefined1 auStack_9f [7];
  undefined1 uStack_98;
  undefined1 auStack_97 [6];
  byte bStack_91;
  undefined1 auStack_90 [8];
  undefined4 uStack_88;
  undefined2 uStack_84;
  undefined1 uStack_82;
  undefined1 auStack_81 [3];
  undefined1 uStack_7e;
  undefined2 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined1 auStack_70 [16];
  byte bStack_60;
  undefined1 auStack_5f [16];
  byte bStack_4f;
  undefined1 auStack_4e [16];
  byte bStack_3e;
  undefined4 uStack_3c;
  byte bStack_38;
  
  if ((param_2 != (int *)0x0) && ((*(byte *)(param_2 + 5) & 0x10) != 0)) {
    (*(code *)&SUB_ram_40010488)((int)param_2 + 5,0,0x13);
    *(undefined1 *)(param_2 + 1) = 8;
    *param_2 = 0x408;
    return;
  }
  do {
    thunk_FUN_ram_4202b7dc();
    iVar6 = FUN_ram_420279b4(param_1,0xff,0xffffffff,&uStack_ac);
    if (iVar6 == 0) {
LAB_ram_42028774:
      bVar4 = false;
    }
    else {
      bVar4 = false;
      if (param_2 != (int *)0x0) {
        if ((*(byte *)(param_2 + 5) & 1) != 0) {
          iVar9 = param_2[4];
          (*(code *)&SUB_ram_40010488)(param_2,0,0x18);
          iVar7 = FUN_ram_4203663c(*(undefined2 *)(iVar6 + 10));
          if (iVar7 == 0) {
            *param_2 = 7;
          }
          else {
            (**(code **)(_DAT_ram_3fcb6b80 + (uint)*(byte *)(iVar6 + 0xd) * 4))(iVar6,param_2,iVar9)
            ;
          }
        }
        bVar4 = *param_2 != 0;
      }
      if ((*(char *)(iVar6 + 0xd) != -1) && (!bVar4)) {
        iVar7 = (**(code **)(_DAT_ram_3fcb6a44 + 0x84))();
        iVar9 = (**(code **)(_DAT_ram_3fcb6a44 + 0x90))(30000);
        *(int *)(iVar6 + 4) = iVar9 + iVar7;
        FUN_ram_4202bac4();
        goto LAB_ram_42028774;
      }
      bVar4 = true;
      FUN_ram_4202773a(uStack_ac);
    }
    if ((((param_2 != (int *)0x0) && (iVar7 = param_2[1], (char)iVar7 != '\0')) && (param_3 != 0))
       && (pcVar8 = (char *)FUN_ram_4202fef8(5,1,&uStack_88), pcVar8 != (char *)0x0)) {
      *pcVar8 = (char)iVar7;
      FUN_ram_4202ff46(param_1,uStack_88);
    }
    thunk_FUN_ram_4202b7f6();
    if (iVar6 == 0) {
      return;
    }
    if (*param_2 == 0x206) {
      thunk_FUN_ram_4202b7dc();
      iVar7 = FUN_ram_420365de(param_1);
      if (iVar7 != 0) {
        bVar1 = *(byte *)(iVar7 + 0x34);
        thunk_FUN_ram_4202b7f6();
        FUN_ram_420276e4(iVar6);
        if ((bVar1 & 1) != 0) {
          FUN_ram_42028e04();
          return;
        }
        FUN_ram_4202859c(param_1);
        return;
      }
      thunk_FUN_ram_4202b7f6();
      goto LAB_ram_42028714;
    }
    if ((*(byte *)(param_2 + 5) & 2) == 0) {
LAB_ram_420287de:
      if (((*param_2 == 0) && (bVar4)) && ((*(byte *)(iVar6 + 8) & 0x20) != 0)) {
        thunk_FUN_ram_4202b7dc();
        iVar7 = FUN_ram_420365de(*(undefined2 *)(iVar6 + 10));
        if (iVar7 == 0) {
          thunk_FUN_ram_4202b7f6();
        }
        else {
          if ((*(byte *)(iVar6 + 0xc0) & 0x10) == 0) {
            FUN_ram_4039c11e(&bStack_a8,iVar7 + 8,7);
            bStack_a8 = thunk_FUN_ram_420315b6(*(undefined1 *)(iVar7 + 8));
            bVar5 = false;
          }
          else {
            bVar1 = *(byte *)(iVar6 + 0xd8);
            bStack_a8 = bVar1;
            FUN_ram_4039c11e(auStack_a7,iVar6 + 0x10a,6);
            FUN_ram_4039c11e(iVar7 + 8,&bStack_a8,7);
            uStack_88 = 0;
            uStack_84 = 0;
            uStack_82 = 0;
            iVar9 = FUN_ram_4039c0e0((int)&uStack_88 + 1,iVar7 + 0x17,6);
            bVar5 = false;
            if (iVar9 != 0) {
              if (bVar1 == 2) {
LAB_ram_420288c2:
                *(undefined1 *)(iVar7 + 8) = 2;
              }
              else {
                if (bVar1 < 3) {
                  if (bVar1 == 0) goto LAB_ram_420288c2;
                }
                else if (bVar1 != 3) goto LAB_ram_420288cc;
                *(undefined1 *)(iVar7 + 8) = 3;
              }
LAB_ram_420288cc:
              bVar5 = true;
            }
          }
          FUN_ram_4039c11e(&uStack_a0,iVar7 + 0x16,7);
          uVar2 = *(undefined1 *)(iVar7 + 0x16);
          thunk_FUN_ram_4202b7f6();
          if (bVar5) {
            FUN_ram_4202f95e(*(undefined2 *)(iVar6 + 10),&bStack_a8);
          }
          bVar1 = *(byte *)(iVar6 + 8);
          (*(code *)&SUB_ram_40010488)(auStack_81,0,0x51);
          FUN_ram_4039c11e(&uStack_88,&bStack_a8,7);
          if ((*(uint *)(iVar6 + 0x70) & 3) == 3) {
            uStack_7e = *(undefined1 *)(iVar6 + 0x89);
            uStack_7c = *(undefined2 *)(iVar6 + 0x78);
            uStack_78 = *(undefined4 *)(iVar6 + 0x80);
            uStack_74 = *(undefined4 *)(iVar6 + 0x84);
            FUN_ram_4039c11e(auStack_70,iVar6 + 0x8a,0x10);
            bStack_60 = bStack_60 | 1;
            bStack_38 = (byte)((bVar1 & 0x18) >> 3) | bStack_38 & 0xfc;
          }
          bVar3 = *(byte *)(iVar6 + 0x70);
          if ((bVar3 & 4) != 0) {
            FUN_ram_4039c11e(auStack_5f,iVar6 + 0x9a,0x10);
            bStack_4f = bStack_4f | 1;
          }
          if ((bVar3 & 8) != 0) {
            FUN_ram_4039c11e(auStack_4e,iVar6 + 0xaa,0x10);
            uStack_3c = *(undefined4 *)(iVar6 + 0x74);
            bStack_3e = bStack_3e | 1;
          }
          FUN_ram_4202ce80(&uStack_88);
          (*(code *)&SUB_ram_40010488)(auStack_81,0,0x51);
          FUN_ram_4039c11e(&uStack_88,&bStack_a8,7);
          if ((*(uint *)(iVar6 + 0xc0) & 3) == 3) {
            uStack_7e = *(undefined1 *)(iVar6 + 0xd9);
            uStack_7c = *(undefined2 *)(iVar6 + 200);
            uStack_78 = *(undefined4 *)(iVar6 + 0xd0);
            uStack_74 = *(undefined4 *)(iVar6 + 0xd4);
            FUN_ram_4039c11e(auStack_70,iVar6 + 0xda,0x10);
            bStack_60 = bStack_60 | 1;
            bStack_38 = (byte)((bVar1 & 0x18) >> 3) | bStack_38 & 0xfc;
          }
          bVar1 = *(byte *)(iVar6 + 0xc0);
          if ((bVar1 & 4) != 0) {
            FUN_ram_4039c11e(auStack_5f,iVar6 + 0xea,0x10);
            bStack_4f = bStack_4f | 1;
          }
          if ((bVar1 & 8) != 0) {
            FUN_ram_4039c11e(auStack_4e,iVar6 + 0xfa,0x10);
            uStack_3c = *(undefined4 *)(iVar6 + 0xc4);
            bStack_3e = bStack_3e | 1;
          }
          FUN_ram_4202ce9a(&uStack_88);
          bStack_91 = bStack_a8;
          FUN_ram_4039c11e(auStack_90,auStack_a7,6);
          uStack_98 = uVar2;
          FUN_ram_4039c11e(auStack_97,auStack_9f,6);
          FUN_ram_4202cfae(&uStack_98);
        }
      }
      if ((*(byte *)(param_2 + 5) & 2) != 0) goto LAB_ram_42028810;
    }
    else {
      if (*param_2 != 7) {
        FUN_ram_4202f9f8(param_1,(char)param_2[1]);
        goto LAB_ram_420287de;
      }
LAB_ram_42028810:
      FUN_ram_4202f8e6(param_1,*param_2,(uint)param_2[5] >> 3 & 1,(uint)param_2[5] >> 2 & 1);
    }
    if ((*param_2 == 0) && ((char)param_2[2] != '\0')) {
      FUN_ram_4202f89a(param_1,param_2 + 2);
    }
    if (bVar4) {
LAB_ram_42028714:
      FUN_ram_420276e4(iVar6);
      return;
    }
    if ((*(byte *)(param_2 + 5) & 1) == 0) {
      return;
    }
    (*(code *)&SUB_ram_40010488)(param_2,0,0x18);
    *(undefined1 *)(param_2 + 5) = 1;
  } while( true );
}

