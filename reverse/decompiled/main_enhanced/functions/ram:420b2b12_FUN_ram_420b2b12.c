
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420b2b12(undefined4 param_1,int *param_2,undefined4 param_3)

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
  
  if (DAT_ram_3fcc4412 == '\0') {
    return;
  }
  DAT_ram_3fcc4412 = 0;
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar2 == 0) {
    _DAT_ram_3fcc442c = *(uint *)(gp + 0x208);
  }
  else {
    _DAT_ram_3fcc442c = *(uint *)(gp + 0x20c);
  }
  _DAT_ram_3fcc4430 = *(int *)(gp + 0x210);
  uVar9 = (*(code *)&SUB_ram_40010a00)(*param_2,param_2[1],_DAT_ram_3fcc4434,0);
  if ((((DAT_ram_3fcc4568 != '\0') && (DAT_ram_3fcc45d4 == '\0')) && (DAT_ram_3fcc440e != '\0')) &&
     (*(code **)(_DAT_ram_3fcb84cc + 4) != (code *)0x0)) {
    (**(code **)(_DAT_ram_3fcb84cc + 4))();
  }
  iVar2 = param_2[1];
  uVar6 = *param_2 + _DAT_ram_3fcc45cc;
  bVar1 = uVar6 < _DAT_ram_3fcc45cc;
  uVar7 = uVar6 - (int)uVar9;
  if ((*(code **)(_DAT_ram_3fcb84cc + 0xc) != (code *)0x0) &&
     (iVar3 = (**(code **)(_DAT_ram_3fcb84cc + 0xc))(), iVar3 != 0)) {
    DAT_ram_3fcc4412 = 1;
  }
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  uVar5 = _DAT_ram_3fcc4434;
  if (iVar3 == 0) {
    if (_DAT_ram_3fcc4424 == 1) {
      uVar4 = (uint)DAT_ram_3fcc440b;
    }
    else {
      if (_DAT_ram_3fcc4424 != 2) goto LAB_ram_420b2bf8;
      uVar4 = (uint)_DAT_ram_3fcc4422;
    }
  }
  else {
    if (DAT_ram_3fcc440f == '\0') {
      FUN_ram_42090c90();
      goto LAB_ram_420b2bf8;
    }
    uVar4 = FUN_ram_4039f482();
  }
  uVar5 = FUN_ram_420b2a84(uVar4,param_3);
LAB_ram_420b2bf8:
  (*(code *)&SUB_ram_40011e3c)();
  (*(code *)&SUB_ram_40011e48)();
  FUN_ram_420b2cc4(&uStack_28,&iStack_24);
  uVar4 = _DAT_ram_3fcc442c;
  uStack_28 = uStack_28 + _DAT_ram_3fcc442c;
  iStack_24 = (uint)(uStack_28 < _DAT_ram_3fcc442c) + iStack_24;
  uVar8 = _DAT_ram_3fcc45cc + uStack_28;
  iVar3 = (uint)(uVar8 < _DAT_ram_3fcc45cc) + iStack_24;
  uVar10 = (*(code *)&SUB_ram_40010a00)(uStack_28,iStack_24,_DAT_ram_3fcc4434,0);
  _DAT_ram_3fcc4518 = uVar8 - (int)uVar10;
  _DAT_ram_3fcc451c = (iVar3 - (int)((ulonglong)uVar10 >> 0x20)) - (uint)(uVar8 < _DAT_ram_3fcc4518)
  ;
  FUN_ram_420968ca(uVar7,(((uint)bVar1 + iVar2) - (int)((ulonglong)uVar9 >> 0x20)) -
                         (uint)(uVar6 < uVar7),uVar5,uVar4,_DAT_ram_3fcc4430 + uVar4);
  FUN_ram_4209039a();
  return;
}

