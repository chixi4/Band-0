
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205de80(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  byte bVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  int iVar6;
  undefined4 uVar7;
  int iVar8;
  undefined4 uVar9;
  char *pcVar10;
  uint uVar11;
  undefined1 auStack_6c [8];
  char acStack_64 [48];
  
  if (param_2 != 1) {
    if (param_2 != 2) {
      return 0;
    }
    if (_DAT_ram_3fcb5f28 != 1) {
      return 0;
    }
    if (_DAT_ram_3fcb6860 != 0) {
      FUN_ram_4206587c();
      _DAT_ram_3fcb6860 = 0;
    }
    _DAT_ram_3fcb6860 = FUN_ram_4206582a(0x701);
    if (_DAT_ram_3fcb6860 == 0) {
      return 0;
    }
    iVar8 = FUN_ram_420618a8(&DAT_ram_3fcb5f28,_DAT_ram_3fcb6860);
    if (iVar8 != 0) {
      FUN_ram_4206587c(_DAT_ram_3fcb6860);
      _DAT_ram_3fcb6860 = 0;
      return 0;
    }
    _DAT_ram_3fcb5f28 = 2;
    iVar8 = _DAT_ram_3fcb6860;
    goto LAB_ram_4205e124;
  }
  iVar8 = FUN_ram_420396fe();
  if (iVar8 != 0) goto LAB_ram_4205ded2;
  iVar8 = FUN_ram_420390b0();
  (*(code *)&SUB_ram_40010488)(acStack_64,0,0x21);
  iVar3 = FUN_ram_42038f6e(0);
  puVar4 = (undefined4 *)FUN_ram_42038f5c();
  uVar11 = _DAT_ram_3fcb61ec & 0x4000000;
  iVar5 = FUN_ram_42038fa8(param_1);
  bVar2 = 0;
  if ((iVar5 != 0) && (bVar2 = 0, *(char *)(iVar5 + 1) != '\0')) {
    bVar2 = *(byte *)(iVar5 + 2);
  }
  iVar5 = FUN_ram_42039020();
  if ((bVar2 & 0x40) == 0) {
LAB_ram_4205df4a:
    if (iVar5 == 1) {
      return 0;
    }
LAB_ram_4205df50:
    if (uVar11 != 0) {
      iVar6 = 0;
      goto LAB_ram_4205df64;
    }
    iVar6 = 0;
    if ((iVar3 - 1U & 0xff) < 2) goto LAB_ram_4205df64;
    bVar1 = false;
    uVar11 = 0;
  }
  else {
    if (iVar5 == 2) goto LAB_ram_4205df50;
    if ((iVar8 == 0) || (iVar6 = FUN_ram_42065a22(iVar8), iVar6 == 0)) goto LAB_ram_4205df4a;
LAB_ram_4205df64:
    if (((iVar3 == 1) || ((int)(_DAT_ram_3fcb61ec << 5) < 0)) || ((iVar6 != 0 && (iVar5 == 1)))) {
      if ((bVar2 & 0x20) == 0) {
        return 0;
      }
    }
    else {
      uVar11 = 0;
      bVar1 = false;
      if ((bVar2 & 0x20) == 0) goto LAB_ram_4205dfea;
    }
    uVar7 = FUN_ram_4203908e();
    FUN_ram_40399daa(acStack_64,uVar7,0x20);
    uVar11 = (uint)(acStack_64[0] != '\0');
    if (_DAT_ram_3fcb686c == 0) {
      uVar9 = *puVar4;
      uVar7 = (*(code *)&SUB_ram_400104a8)(iVar8);
      pcVar10 = (char *)0x0;
      if (acStack_64[0] != '\0') {
        pcVar10 = acStack_64;
      }
      _DAT_ram_3fcb686c = FUN_ram_420607f0(gp + -0x798,puVar4 + 1,uVar9,iVar8,uVar7,pcVar10);
    }
    bVar1 = true;
  }
LAB_ram_4205dfea:
  iVar3 = FUN_ram_42064b1c();
  if (iVar3 != 0) {
LAB_ram_4205ded2:
    *param_3 = 0;
    return 0;
  }
  if (_DAT_ram_3fcb6864 != 0) {
    FUN_ram_4206587c();
    _DAT_ram_3fcb6864 = 0;
  }
  if (_DAT_ram_3fcb6868 == 0) {
    (*(code *)&SUB_ram_40010488)(&DAT_ram_3fcb5f28,0,0x80);
    iVar3 = FUN_ram_420601e0(&DAT_ram_3fcb5f28,0x13);
    if (iVar3 != 0) {
      return 0;
    }
    _DAT_ram_3fcb5f74 = _DAT_ram_3fcb61ec;
    FUN_ram_4203944e(0,auStack_6c);
    if (param_1 == 0) {
      return 0;
    }
    if (bVar1) {
      iVar3 = FUN_ram_42060d5a(&DAT_ram_3fcb5f28,_DAT_ram_3fcb686c,auStack_6c,param_1,0,0);
    }
    else {
      uVar7 = (*(code *)&SUB_ram_400104a8)(iVar8);
      iVar3 = FUN_ram_42060a86(auStack_6c,param_1,iVar8,uVar7,&DAT_ram_3fcb5f28);
    }
    iVar5 = _DAT_ram_3fcb5fa4;
    if (iVar3 < 0) {
      return 0;
    }
    if (((_DAT_ram_3fcb5fa4 != 0) && (bVar1)) && (iVar6 != 0)) {
      DAT_ram_3fcb5fa2 = DAT_ram_3fcb5fa2 | 2;
      FUN_ram_40399daa(_DAT_ram_3fcb5fa4 + 0xe0,auStack_6c,6);
      FUN_ram_40399daa(iVar5 + 0xe6,param_1,6);
      FUN_ram_42065cbe(&DAT_ram_3fcb5f28,iVar8);
    }
    iVar8 = 0;
  }
  else {
    iVar8 = *(int *)(_DAT_ram_3fcb6868 + 4);
  }
  _DAT_ram_3fcb6864 = FUN_ram_4206582a(iVar8 + 0x701);
  if (_DAT_ram_3fcb6864 == 0) {
    return 0;
  }
  iVar8 = FUN_ram_420611d8(&DAT_ram_3fcb5f28,_DAT_ram_3fcb6864,_DAT_ram_3fcb6868,
                           (uint)acStack_64 & -uVar11);
  if (iVar8 != 0) {
    FUN_ram_4206587c(_DAT_ram_3fcb6864);
    _DAT_ram_3fcb6864 = 0;
    return 0;
  }
  if (_DAT_ram_3fcb6868 != 0) {
    FUN_ram_4206587c();
    _DAT_ram_3fcb6868 = 0;
  }
  _DAT_ram_3fcb5f28 = 1;
  iVar8 = _DAT_ram_3fcb6864;
LAB_ram_4205e124:
  uVar7 = *(undefined4 *)(iVar8 + 8);
  *param_3 = *(undefined4 *)(iVar8 + 4);
  return uVar7;
}

