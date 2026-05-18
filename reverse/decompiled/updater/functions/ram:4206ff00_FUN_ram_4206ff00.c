
int FUN_ram_4206ff00(int *param_1,int param_2,int param_3,undefined4 param_4,undefined4 param_5)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  undefined4 uStack_28;
  undefined4 *puStack_24;
  
  if (param_2 == 0) {
LAB_ram_4206ff12:
    iVar2 = 0;
  }
  else {
    iVar7 = param_1[4];
    iVar2 = *param_1;
    if (iVar7 == 0) {
      iVar7 = *(int *)(iVar2 + 0x38);
      iVar8 = *(int *)(iVar2 + 0x3c);
    }
    else {
      iVar8 = param_1[5];
    }
    iVar5 = param_1[0x30];
    if (iVar5 == 0) {
      if ((*(char *)(iVar2 + 8) == '\0') && (*(char *)(iVar2 + 10) == '\x02')) {
        return -0x5d80;
      }
    }
    else if (iVar5 == 0x3c071e68) {
      iVar5 = 0;
    }
    iVar3 = *(int *)(param_1[0xe] + 0x100);
    if (iVar3 == 0) {
      iVar3 = *(int *)(iVar2 + 0x48);
      uVar4 = *(undefined4 *)(iVar2 + 0x4c);
      bVar1 = iVar3 != 0;
    }
    else {
      uVar4 = *(undefined4 *)(param_1[0xe] + 0x104);
      bVar1 = true;
    }
    iVar2 = FUN_ram_42071c56(param_3,iVar3,uVar4,*(undefined4 *)(iVar2 + 0x40),iVar5,
                             param_1[0xd] + 100,iVar7,iVar8,param_5);
    if ((param_1[2] == 0x303) && (iVar7 = FUN_ram_42066e6a(param_3 + 0xcc,2), iVar7 != 0)) {
      uStack_28 = *(undefined4 *)(param_3 + 0xcc);
      puStack_24 = *(undefined4 **)(param_3 + 0xd0);
      iVar7 = FUN_ram_42066f6e(&uStack_28);
      if (iVar7 - 2U < 3) {
        iVar7 = FUN_ram_4206f5bc(param_1,*puStack_24);
        if ((iVar7 != 0) &&
           (*(uint *)(param_1[0xd] + 100) = *(uint *)(param_1[0xd] + 100) | 0x10000, iVar2 == 0)) {
          iVar2 = -0x7a00;
        }
        goto LAB_ram_4206ffe6;
      }
      ebreak();
      iVar7 = iRam00000000;
LAB_ram_42070096:
      if (param_2 == iVar7) goto LAB_ram_4206ff12;
      iVar2 = -0x7a00;
    }
    else {
LAB_ram_4206ffe6:
      iVar7 = FUN_ram_4206fe5e(param_3,param_4,*(undefined1 *)(*param_1 + 8),param_1[2],
                               param_1[0xd] + 100);
      if ((iVar7 != 0) && (iVar7 = 1, iVar2 == 0)) goto LAB_ram_42070096;
      if ((param_2 == 1) && ((iVar2 == -0x2700 || (iVar2 == -0x7a00)))) goto LAB_ram_4206ff12;
    }
    if ((bVar1) || (param_2 != 2)) {
      if (iVar2 == 0) goto LAB_ram_4206ff12;
    }
    else {
      iVar2 = -0x7680;
    }
    iVar7 = 0x31;
    uVar6 = *(uint *)(param_1[0xd] + 100);
    if (((((uVar6 & 0x100) == 0) && (iVar7 = 0x2a, (uVar6 & 4) == 0)) &&
        (iVar7 = 0x2b, (uVar6 >> 0xb & 0x33) == 0)) &&
       ((iVar7 = 0x2d, (uVar6 & 1) == 0 && (iVar7 = 0x2c, (uVar6 & 2) == 0)))) {
      iVar7 = (-(uint)((uVar6 & 8) == 0) & 0xfffffffe) + 0x30;
    }
    FUN_ram_4206e0e0(param_1,2,iVar7);
  }
  return iVar2;
}

