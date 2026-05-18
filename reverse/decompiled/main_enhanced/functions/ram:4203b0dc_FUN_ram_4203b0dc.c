
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4203b0dc(byte *param_1,uint param_2)

{
  byte bVar1;
  undefined2 uVar2;
  undefined2 uVar3;
  undefined4 uVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  byte *pbVar9;
  undefined1 uStack_58;
  byte bStack_57;
  byte bStack_56;
  char cStack_55;
  byte bStack_54;
  int iStack_50;
  int iStack_4c;
  byte bStack_43;
  byte bStack_42;
  char cStack_41;
  byte bStack_40;
  int iStack_3c;
  int iStack_38;
  
  (*(code *)&SUB_ram_40010488)(&uStack_58,0,0x28);
  if (param_2 < 4) {
    return 0x12;
  }
  if (**(char **)(_DAT_ram_3fcdfee0 + 0xc) != '\0') {
    return 0xc;
  }
  bStack_57 = *param_1;
  if (3 < bStack_57) {
    return 0x12;
  }
  bStack_56 = param_1[1];
  if (3 < bStack_56) {
    return 0x12;
  }
  bVar1 = param_1[2];
  uVar8 = (uint)bVar1;
  if ((bVar1 & 5) == 0) {
    return 0x12;
  }
  uVar5 = uVar8 & 0xfffffffa;
  if ((bVar1 & 0xfa) != 0) {
    return 0x12;
  }
  uVar7 = param_2 - 3 & 0xff;
  pbVar9 = param_1 + 3;
  bStack_43 = bStack_57;
  bStack_42 = bStack_56;
  if ((bVar1 & 1) != 0) {
    if (uVar7 < 5) {
      return 0x12;
    }
    uVar2 = *(undefined2 *)(param_1 + 4);
    uVar3 = *(undefined2 *)(param_1 + 6);
    uVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x254))
                      (param_1[3],uVar2,uVar3,param_1[4],param_1[6],
                       *(code **)(_DAT_ram_3fcdfecc + 0x254));
    if (uVar8 != 0) {
      return uVar8;
    }
    bStack_54 = param_1[3];
    iStack_50 = (**(code **)(_DAT_ram_3fcdfecc + 0x9ec))(uVar2);
    pbVar9 = param_1 + 8;
    iStack_4c = (**(code **)(_DAT_ram_3fcdfecc + 0x9ec))(uVar3);
    cStack_55 = '\x01';
    uVar8 = (uint)param_1[2];
    uVar7 = param_2 - 8 & 0xff;
  }
  if ((uVar8 & 4) == 0) {
    if (cStack_41 == '\0') goto LAB_ram_4203b2cc;
  }
  else {
    if (uVar7 < 5) {
      return 0x12;
    }
    uVar2 = *(undefined2 *)(pbVar9 + 1);
    uVar3 = *(undefined2 *)(pbVar9 + 3);
    uVar8 = (**(code **)(_DAT_ram_3fcdfecc + 0x254))
                      (*pbVar9,uVar2,uVar3,pbVar9[1],pbVar9[3],*(code **)(_DAT_ram_3fcdfecc + 0x254)
                      );
    if (uVar8 != 0) {
      return uVar8;
    }
    bStack_40 = *pbVar9;
    iStack_3c = (**(code **)(_DAT_ram_3fcdfecc + 0x9ec))(uVar2);
    iStack_38 = (**(code **)(_DAT_ram_3fcdfecc + 0x9ec))(uVar3);
    cStack_41 = '\x01';
  }
  if (cStack_55 != '\0') {
    if (*_DAT_ram_3fcdfee0 != '\0') {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))
                (0xacb,&DAT_ram_3c0f5970,0,0,_DAT_ram_3fcdfecc,*(code **)(_DAT_ram_3fcdfecc + 0x110)
                );
    }
    if (iStack_3c == iStack_38) {
      iStack_3c = iStack_38 + iStack_4c;
    }
    if (iStack_50 == iStack_4c) {
      iStack_50 = iStack_38 + iStack_4c;
    }
  }
LAB_ram_4203b2cc:
  uVar4 = **(undefined4 **)(_DAT_ram_3fcdfee0 + 8);
  iVar6 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  FUN_ram_4039c11e(uVar4,&uStack_58,(uint)*(byte *)(iVar6 + 0x22) * 0x14);
  return uVar5;
}

