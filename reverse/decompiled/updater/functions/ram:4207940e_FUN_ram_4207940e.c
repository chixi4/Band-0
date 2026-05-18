
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4207940e(undefined4 param_1,int *param_2,undefined4 param_3)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  undefined4 uVar5;
  uint uVar6;
  uint uVar7;
  uint uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  uint uStack_28;
  int iStack_24;
  
  if (DAT_ram_3fcb5382 == '\0') {
    return;
  }
  DAT_ram_3fcb5382 = 0;
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar2 == 0) {
    _DAT_ram_3fcb539c = *(uint *)(gp + 0xd4);
  }
  else {
    _DAT_ram_3fcb539c = *(uint *)(gp + 0xd8);
  }
  _DAT_ram_3fcb53a0 = *(int *)(gp + 0xdc);
  uVar9 = (*(code *)&SUB_ram_40010a00)(*param_2,param_2[1],_DAT_ram_3fcb53a4,0);
  if ((((DAT_ram_3fcb54d8 != '\0') && (DAT_ram_3fcb5544 == '\0')) && (DAT_ram_3fcb537e != '\0')) &&
     (*(code **)(_DAT_ram_3fcb1020 + 4) != (code *)0x0)) {
    (**(code **)(_DAT_ram_3fcb1020 + 4))();
  }
  iVar2 = param_2[1];
  uVar6 = *param_2 + _DAT_ram_3fcb553c;
  bVar1 = uVar6 < _DAT_ram_3fcb553c;
  uVar7 = uVar6 - (int)uVar9;
  if ((*(code **)(_DAT_ram_3fcb1020 + 0xc) != (code *)0x0) &&
     (iVar3 = (**(code **)(_DAT_ram_3fcb1020 + 0xc))(), iVar3 != 0)) {
    DAT_ram_3fcb5382 = 1;
  }
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  uVar5 = _DAT_ram_3fcb53a4;
  if (iVar3 == 0) {
    if (_DAT_ram_3fcb5394 == 1) {
      uVar4 = (uint)DAT_ram_3fcb537b;
    }
    else {
      if (_DAT_ram_3fcb5394 != 2) goto LAB_ram_420794f4;
      uVar4 = (uint)_DAT_ram_3fcb5392;
    }
  }
  else {
    if (DAT_ram_3fcb537f == '\0') {
      FUN_ram_42048288();
      goto LAB_ram_420794f4;
    }
    uVar4 = FUN_ram_4039d0ae();
  }
  uVar5 = FUN_ram_42079380(uVar4,param_3);
LAB_ram_420794f4:
  (*(code *)&SUB_ram_40011e3c)();
  (*(code *)&SUB_ram_40011e48)();
  FUN_ram_4207959e(&uStack_28,&iStack_24);
  uVar4 = _DAT_ram_3fcb539c;
  uStack_28 = uStack_28 + _DAT_ram_3fcb539c;
  iStack_24 = (uint)(uStack_28 < _DAT_ram_3fcb539c) + iStack_24;
  uVar8 = _DAT_ram_3fcb553c + uStack_28;
  iVar3 = (uint)(uVar8 < _DAT_ram_3fcb553c) + iStack_24;
  uVar10 = (*(code *)&SUB_ram_40010a00)(uStack_28,iStack_24,_DAT_ram_3fcb53a4,0);
  _DAT_ram_3fcb5488 = uVar8 - (int)uVar10;
  _DAT_ram_3fcb548c = (iVar3 - (int)((ulonglong)uVar10 >> 0x20)) - (uint)(uVar8 < _DAT_ram_3fcb5488)
  ;
  FUN_ram_4204ddfe(uVar7,(((uint)bVar1 + iVar2) - (int)((ulonglong)uVar9 >> 0x20)) -
                         (uint)(uVar6 < uVar7),uVar5,uVar4,_DAT_ram_3fcb53a0 + uVar4);
  FUN_ram_42047992();
  return;
}

