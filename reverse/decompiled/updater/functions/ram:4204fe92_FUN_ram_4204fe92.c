
int FUN_ram_4204fe92(uint param_1,undefined4 *param_2,undefined4 *param_3,undefined4 *param_4,
                    int *param_5)

{
  char cVar1;
  bool bVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  uint uVar6;
  int iVar7;
  uint uVar8;
  undefined1 *puVar9;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined1 auStack_54 [8];
  undefined4 *puStack_4c;
  undefined4 *puStack_48;
  undefined4 *puStack_44;
  int iStack_38;
  int *piStack_34;
  
  if (0x40 < param_1) {
    puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
    uVar5 = 0x16;
LAB_ram_4204ff34:
    *puVar4 = uVar5;
    return -1;
  }
  uStack_58 = 0;
  uStack_5c = 0;
  FUN_ram_4204eb06(param_1,param_2,&uStack_5c);
  FUN_ram_4204eb06(param_1,param_3,&uStack_5c);
  FUN_ram_4204eb06(param_1,param_4,&uStack_5c);
  iVar3 = FUN_ram_4204ed84(param_1,param_2,param_3,param_4,&uStack_74,&uStack_6c,&uStack_64);
  if (-1 < iVar3) {
    if ((iVar3 != 0) ||
       (((param_5 != (int *)0x0 && (*param_5 == 0 && param_5[1] == 0)) &&
        (iVar3 = 0, param_5[2] == 0)))) goto LAB_ram_420500da;
    (*(code *)&SUB_ram_40010488)(auStack_54,0,0x24);
    puStack_4c = param_2;
    puStack_48 = param_3;
    puStack_44 = param_4;
    piStack_34 = (int *)FUN_ram_42059a40();
    if ((piStack_34 == (int *)0x0) || (*piStack_34 == 0)) {
      puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar5 = 0xc;
      goto LAB_ram_4204ff34;
    }
    FUN_ram_4204e988(auStack_54);
    for (uVar6 = 0x3c; (int)uVar6 < (int)param_1; uVar6 = uVar6 + 1) {
      if ((((param_2 != (undefined4 *)0x0) && ((1 << (uVar6 & 0x1f) & param_2[1]) != 0)) ||
          ((param_3 != (undefined4 *)0x0 && ((1 << (uVar6 & 0x1f) & param_3[1]) != 0)))) ||
         ((param_4 != (undefined4 *)0x0 && ((1 << (uVar6 & 0x1f) & param_4[1]) != 0)))) {
        uVar5 = FUN_ram_420599c2();
        iVar7 = FUN_ram_4204e868(uVar6);
        if (iVar7 == 0) {
          FUN_ram_420599ec(uVar5);
          puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          *puVar4 = 9;
          iVar3 = -1;
          goto LAB_ram_4205002a;
        }
        cVar1 = *(char *)(iVar7 + 0xe);
        *(char *)(iVar7 + 0xe) = cVar1 + '\x01';
        if (cVar1 == -1) {
          iVar3 = -1;
          *(undefined1 *)(iVar7 + 0xe) = 0xff;
          FUN_ram_420599ec(uVar5);
          FUN_ram_4204ecbc(iVar7);
          puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          *puVar4 = 0x10;
          goto LAB_ram_4205002a;
        }
        FUN_ram_420599ec(uVar5);
        FUN_ram_4204ecbc(iVar7);
      }
    }
    iVar3 = FUN_ram_4204ed84(param_1,param_2,param_3,param_4,&uStack_74,&uStack_6c,&uStack_64);
    uVar6 = param_1;
    if (iVar3 < 0) {
      puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      *puVar4 = 9;
LAB_ram_4205002a:
      iVar7 = 0;
      bVar2 = false;
    }
    else {
      if (iVar3 != 0) goto LAB_ram_4205002a;
      iVar7 = 0;
      if ((param_5 != (int *)0x0) &&
         (iVar7 = *param_5 * 1000 + (param_5[2] + 500) / 1000, iVar7 < 1)) {
        iVar7 = 1;
      }
      bVar2 = true;
      iVar7 = FUN_ram_420597d0(piStack_34,iVar7);
    }
    puVar9 = &DAT_ram_3fcb576c;
    for (uVar8 = 0x3c; (int)uVar8 < (int)uVar6; uVar8 = uVar8 + 1) {
      if ((((param_2 != (undefined4 *)0x0) && ((1 << (uVar8 & 0x1f) & param_2[1]) != 0)) ||
          ((param_3 != (undefined4 *)0x0 && ((1 << (uVar8 & 0x1f) & param_3[1]) != 0)))) ||
         ((param_4 != (undefined4 *)0x0 && ((1 << (uVar8 & 0x1f) & param_4[1]) != 0)))) {
        FUN_ram_420599c2();
        if (puVar9[0xe] != '\0') {
          puVar9[0xe] = puVar9[0xe] + -1;
        }
        FUN_ram_420599ec();
      }
      puVar9 = puVar9 + 0x14;
    }
    FUN_ram_4204e9be(auStack_54);
    if (iStack_38 == 0) {
LAB_ram_420500b6:
      if (iVar3 < 0) goto LAB_ram_4204ff02;
      if (iVar7 == -1) goto LAB_ram_420500da;
    }
    else {
      if ((!bVar2) || (iVar7 == -1)) {
        FUN_ram_420597d0(piStack_34,1);
        goto LAB_ram_420500b6;
      }
      if (iVar3 < 0) goto LAB_ram_4204ff02;
    }
    iVar3 = FUN_ram_4204ed84(param_1,param_2,param_3,param_4,&uStack_74,&uStack_6c,&uStack_64);
    if (-1 < iVar3) {
LAB_ram_420500da:
      FUN_ram_4204eeee(param_1,&uStack_5c);
      if (param_2 != (undefined4 *)0x0) {
        *param_2 = uStack_74;
        param_2[1] = uStack_70;
      }
      if (param_3 != (undefined4 *)0x0) {
        *param_3 = uStack_6c;
        param_3[1] = uStack_68;
      }
      if (param_4 != (undefined4 *)0x0) {
        *param_4 = uStack_64;
        param_4[1] = uStack_60;
        return iVar3;
      }
      return iVar3;
    }
  }
  puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
  *puVar4 = 9;
LAB_ram_4204ff02:
  FUN_ram_4204eeee(param_1,&uStack_5c);
  return -1;
}

