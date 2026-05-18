
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039ed68(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  uint uStack_38;
  uint auStack_34 [3];
  
  bVar1 = *(byte *)(param_1 + 0x180);
  bVar2 = *(byte *)(param_1 + 0x1d6);
  bVar3 = *(byte *)(param_1 + 0x1d7);
  if ((*(code **)(_DAT_ram_3fcb84cc + 0x10) == (code *)0x0) ||
     (iVar4 = (**(code **)(_DAT_ram_3fcb84cc + 0x10))(), iVar4 == 0)) {
    iVar4 = (uint)*(byte *)(param_1 + 0x181) << 10;
  }
  else {
    FUN_ram_420b2cc4(&uStack_38,auStack_34);
    uVar7 = *(uint *)(param_1 + 0x1cc);
    uVar5 = *(uint *)(param_1 + 0x2c) + uStack_38;
    uVar8 = uVar7 + uVar5;
    iVar4 = (uVar5 < *(uint *)(param_1 + 0x2c)) + auStack_34[0];
    uVar9 = (*(code *)&SUB_ram_40010a00)(uVar5,iVar4,*(undefined4 *)(param_1 + 0x34),0);
    uVar5 = uVar8 - (int)uVar9;
    uVar7 = (((uint)(uVar8 < uVar7) + iVar4) - (int)((ulonglong)uVar9 >> 0x20)) -
            (uint)(uVar8 < uVar5);
    if ((auStack_34[0] < uVar7) || ((uVar7 == auStack_34[0] && (uStack_38 < uVar5)))) {
      iVar4 = uVar5 - uStack_38;
    }
    else {
      iVar4 = 0;
    }
  }
  if (((*(char *)(param_1 + 0x168) != '\0') && (*(char *)(param_1 + 0x1d4) == '\0')) &&
     (*(char *)(param_1 + 0xe) != '\0')) {
    iVar6 = FUN_ram_4039e0e8();
    if (iVar6 == 0) {
LAB_ram_4039ee8a:
      if (*(short *)(param_1 + 0x186) <= *(short *)(param_1 + 0x184)) goto LAB_ram_4039eda8;
    }
    else if (*(short *)(param_1 + 0x186) <= *(short *)(param_1 + 0x184)) {
      *(undefined2 *)(param_1 + 0x184) = 0;
      goto LAB_ram_4039ee8a;
    }
    if ((*(code **)(_DAT_ram_3fcb84cc + 0xc) == (code *)0x0) ||
       (iVar6 = (**(code **)(_DAT_ram_3fcb84cc + 0xc))(), iVar6 == 0)) {
      FUN_ram_4209238e();
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))(param_1 + 0x16c,(uint)bVar1 * 0x400 + iVar4,0);
      iVar4 = FUN_ram_4039e108(param_1);
      if (iVar4 != 0) {
        FUN_ram_4039e168(param_1);
        goto LAB_ram_4039edaa;
      }
    }
  }
LAB_ram_4039eda8:
  iVar4 = 0;
LAB_ram_4039edaa:
  if (bVar3 - 1 == (uint)bVar2) {
    iVar4 = 1;
  }
  return iVar4;
}

