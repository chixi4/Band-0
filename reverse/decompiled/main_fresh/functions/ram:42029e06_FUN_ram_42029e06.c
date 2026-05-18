
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42029e06(undefined4 param_1,undefined4 param_2,int *param_3)

{
  ushort uVar1;
  ushort uVar2;
  int iVar3;
  ushort uVar4;
  short sVar5;
  int iVar6;
  int iVar7;
  undefined4 uVar8;
  uint uVar9;
  ushort *puVar10;
  int *piVar11;
  short sVar12;
  char *pcVar13;
  int iVar14;
  short sVar15;
  undefined1 uStack_57;
  undefined2 uStack_56;
  char acStack_54 [2];
  ushort uStack_52;
  undefined1 auStack_50 [28];
  
  iVar6 = FUN_ram_42029616(param_3,6,&uStack_57);
  if (iVar6 == 0) {
    puVar10 = *(ushort **)*param_3;
    uVar4 = *puVar10;
    uVar1 = puVar10[1];
    if ((uVar1 < uVar4) || (uVar4 == 0)) {
      uStack_57 = 1;
      iVar3 = 0;
      iVar7 = 10;
      goto LAB_ram_42029e6a;
    }
    uVar2 = puVar10[2];
    iVar3 = FUN_ram_4202d4ec();
    if (iVar3 == 0) {
      iVar3 = *param_3;
      *param_3 = 0;
    }
    else {
      iVar7 = FUN_ram_4202d5d8(7,0,iVar3);
      if (iVar7 != 0) {
        sVar15 = 0;
        uVar8 = FUN_ram_4202c6a0(param_1,param_2);
        iVar14 = *param_3;
        piVar11 = *(int **)(_DAT_ram_3fcb6b84 + 0x40);
        acStack_54[0] = '\x10';
        sVar12 = 0;
        uStack_52 = uVar2;
        for (; piVar11 != (int *)0x0; piVar11 = (int *)*piVar11) {
          if (uVar4 <= *(ushort *)((int)piVar11 + 10)) {
            if (sVar12 == 0) {
              if (uVar1 < *(ushort *)((int)piVar11 + 10)) goto LAB_ram_42029f30;
            }
            else {
              if (acStack_54[0] != '\x10') goto LAB_ram_42029f78;
              pcVar13 = (char *)piVar11[1];
              if (*pcVar13 != '\x10') {
LAB_ram_42029f52:
                sVar15 = *(short *)((int)piVar11 + 10);
                goto LAB_ram_42029f56;
              }
              uVar9 = FUN_ram_420300a0(acStack_54);
              if (uVar9 < 0x2802) {
                if ((0x27ff < uVar9) &&
                   (sVar5 = FUN_ram_420300a0(pcVar13), 1 < (ushort)(sVar5 + 0xd800U)))
                goto LAB_ram_42029f52;
              }
              else if (((uVar9 == 0x2803) &&
                       (iVar7 = FUN_ram_420300a0(pcVar13), 1 < (iVar7 - 0x2800U & 0xffff))) &&
                      (iVar7 != 0x2803)) goto LAB_ram_42029f52;
LAB_ram_42029f78:
              iVar7 = FUN_ram_420296a8(iVar3,sVar12,sVar15,uVar8,&uStack_57);
              if (iVar7 != 1) goto LAB_ram_42029f18;
              if (uVar1 < *(ushort *)((int)piVar11 + 10)) goto LAB_ram_42029f30;
              sVar15 = 0;
            }
            iVar7 = FUN_ram_42030048(piVar11[1],acStack_54);
            if (iVar7 == 0) {
              iVar7 = FUN_ram_42029834(param_1,piVar11,0x10,auStack_50,&uStack_56,&uStack_57);
              if (iVar7 != 0) goto LAB_ram_42029e6a;
              iVar7 = (*(code *)&SUB_ram_400119e8)(iVar14,6,auStack_50,uStack_56);
              if (iVar7 == 0) {
                sVar15 = *(short *)((int)piVar11 + 10);
                sVar12 = sVar15;
                goto LAB_ram_42029f56;
              }
            }
            sVar12 = 0;
          }
LAB_ram_42029f56:
        }
        if ((sVar12 != 0) &&
           (iVar7 = FUN_ram_420296a8(iVar3,sVar12,sVar15,uVar8,&uStack_57), iVar7 != 1)) {
LAB_ram_42029f18:
          if (iVar7 != 0) {
            iVar7 = 6;
            goto LAB_ram_42029e6a;
          }
        }
LAB_ram_42029f30:
        if (*(ushort *)(iVar3 + 0x10) < 2) {
          uStack_57 = 10;
          iVar7 = 5;
          goto LAB_ram_42029e6a;
        }
        goto LAB_ram_42029f3a;
      }
    }
    uStack_57 = 0x11;
    iVar7 = 6;
  }
  else {
    iVar3 = 0;
LAB_ram_42029f3a:
    uVar4 = 0;
    iVar7 = iVar6;
  }
LAB_ram_42029e6a:
  FUN_ram_42029b02(param_1,param_2,iVar7,iVar3,6,uStack_57,uVar4);
  return;
}

