
int FUN_ram_420674fc(int *param_1,undefined4 param_2)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  int *piVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbStack_e8;
  int iStack_e4;
  undefined1 auStack_e0 [4];
  undefined1 auStack_dc [8];
  undefined1 auStack_d4 [8];
  undefined1 auStack_cc [8];
  undefined1 auStack_c4 [8];
  undefined1 auStack_bc [8];
  undefined1 auStack_b4 [8];
  undefined1 auStack_ac [8];
  int iStack_a4;
  int iStack_a0;
  int iStack_80;
  undefined1 auStack_7c [8];
  undefined1 auStack_74 [8];
  undefined1 auStack_6c [8];
  undefined1 auStack_64 [8];
  undefined1 auStack_5c [8];
  undefined1 auStack_54 [8];
  undefined1 auStack_4c [8];
  int iStack_44;
  int iStack_40;
  
  if (*param_1 == 6) {
    iVar3 = FUN_ram_42031806(param_1,&iStack_e4);
    iVar1 = -0x3a00;
    goto joined_r0x420675cc;
  }
  FUN_ram_4202f93a(auStack_e0);
  pbStack_e8 = (byte *)param_1[2];
  pbVar5 = pbStack_e8 + param_1[1];
  iVar1 = FUN_ram_4202ba02(&pbStack_e8,pbVar5,&iStack_80);
  if (iVar1 != 0) goto LAB_ram_4206755c;
  if (iStack_80 - 1U < 3) {
    iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar5,&iStack_e4,0x30);
    if (iVar1 == 0) {
      pbVar6 = pbStack_e8 + iStack_e4;
      iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar6,&iStack_e4,6);
      pbVar2 = pbStack_e8;
      if (iVar1 == 0) {
        if ((iStack_e4 == 7) && (iVar1 = FUN_ram_40399d6c(pbStack_e8,0x3c07341c), iVar1 == 0)) {
          pbStack_e8 = pbVar2 + 7;
          iVar1 = FUN_ram_4202ba0a(&pbStack_e8,pbVar6,auStack_dc);
          if (iVar1 != 0) goto LAB_ram_4206755c;
          iStack_a4 = FUN_ram_42024bac(auStack_dc);
          if (pbVar6 == pbStack_e8) {
            iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar5,&iStack_e4,0x30);
            if (iVar1 == 0) {
              pbVar2 = pbStack_e8 + iStack_e4;
              iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar2,&iStack_e4,4);
              if ((iVar1 == 0) &&
                 (iVar1 = FUN_ram_42024c0c(auStack_d4,pbStack_e8,iStack_e4), iVar1 == 0)) {
                pbStack_e8 = pbStack_e8 + iStack_e4;
                iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar2,&iStack_e4,4);
                if ((iVar1 != 0) ||
                   (iVar1 = FUN_ram_42024c0c(auStack_cc,pbStack_e8,iStack_e4), iVar1 != 0))
                goto LAB_ram_4206755c;
                pbStack_e8 = pbStack_e8 + iStack_e4;
                iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar2,&iStack_e4,3);
                if (iVar1 == 0) {
                  pbStack_e8 = pbStack_e8 + iStack_e4;
                }
                if (pbVar2 != pbStack_e8) goto LAB_ram_42067636;
                iVar1 = FUN_ram_4202b91a(&pbStack_e8,pbVar5,&iStack_e4,4);
                if (iVar1 != 0) goto LAB_ram_4206755c;
                iVar1 = FUN_ram_4202ff36(auStack_e0,auStack_c4,pbStack_e8,iStack_e4);
                if ((iVar1 != 0) &&
                   (((((iVar1 != -0x4e80 || (1 < (byte)(*pbStack_e8 - 2))) ||
                      (iVar1 = FUN_ram_42024bb6(auStack_dc), iVar1 + 1 != iStack_e4)) ||
                     ((iVar1 = FUN_ram_42024c0c(auStack_c4,pbStack_e8 + 1,iVar1), iVar1 != 0 ||
                      (iVar1 = FUN_ram_42024a98(auStack_bc,*pbStack_e8 - 2), iVar1 != 0)))) ||
                    (iVar1 = FUN_ram_42024a98(auStack_b4,1), iVar1 != 0)))) goto LAB_ram_420675a8;
                pbStack_e8 = pbStack_e8 + iStack_e4;
                iVar1 = FUN_ram_4202ba0a(&pbStack_e8,pbVar5,auStack_ac);
                if (iVar1 != 0) goto LAB_ram_4206755c;
                iStack_a0 = FUN_ram_42024bac(auStack_ac);
              }
              else {
LAB_ram_4206755c:
                iVar1 = iVar1 + -0x3d00;
                if (iVar1 != 0) goto LAB_ram_420675ae;
              }
              FUN_ram_4202f93a(&iStack_80);
              for (piVar4 = (int *)FUN_ram_4202f8a2(); *piVar4 != 0; piVar4 = piVar4 + 1) {
                FUN_ram_4202f9c2(&iStack_80);
                iVar1 = FUN_ram_42030f1a(&iStack_80,*piVar4);
                if (iVar1 != 0) goto LAB_ram_420677c6;
                if ((((iStack_a4 == iStack_44) && (iStack_a0 == iStack_40)) &&
                    ((iVar1 = FUN_ram_42024d4a(auStack_dc,auStack_7c), iVar1 == 0 &&
                     (((iVar1 = FUN_ram_42024d4a(auStack_d4,auStack_74), iVar1 == 0 &&
                       (iVar1 = FUN_ram_42024d4a(auStack_cc,auStack_6c), iVar1 == 0)) &&
                      (iVar1 = FUN_ram_42024d4a(auStack_ac,auStack_4c), iVar1 == 0)))))) &&
                   ((iVar1 = FUN_ram_42024d4a(auStack_c4,auStack_64), iVar1 == 0 &&
                    (iVar1 = FUN_ram_42024d4a(auStack_b4,auStack_54), iVar1 == 0)))) {
                  iVar1 = FUN_ram_42024ae6(auStack_bc,0);
                  iVar3 = FUN_ram_42024ae6(auStack_5c,0);
                  if (iVar1 == iVar3) break;
                }
              }
              iVar1 = 0;
LAB_ram_420677c6:
              FUN_ram_4202f9c2(&iStack_80);
              iStack_e4 = *piVar4;
              if ((iVar1 == 0) && (iStack_e4 == 0)) {
                iVar1 = -0x4e80;
              }
            }
          }
          else {
LAB_ram_42067636:
            iVar1 = -0x3d66;
          }
        }
        else {
          iVar1 = -0x3980;
        }
      }
    }
  }
  else {
LAB_ram_420675a8:
    iVar1 = -0x3d00;
  }
LAB_ram_420675ae:
  FUN_ram_42024774(auStack_ac);
  FUN_ram_42024774(auStack_dc);
  FUN_ram_42024774(auStack_d4);
  FUN_ram_42024774(auStack_cc);
  FUN_ram_4202f9ba(auStack_c4);
  iVar3 = iVar1;
joined_r0x420675cc:
  if (iVar3 == 0) {
    iVar1 = FUN_ram_4206709c(param_2,iStack_e4);
  }
  return iVar1;
}

