
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4209168c(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iStack_18;
  int iStack_14;
  
  if (DAT_ram_3fcc45d6 == '\0') {
    FUN_ram_420b2cc4(&iStack_18,&iStack_14);
    uVar2 = iStack_18 + _DAT_ram_3fcc442c;
    iVar4 = (uint)(uVar2 < _DAT_ram_3fcc442c) + iStack_14;
    uVar5 = _DAT_ram_3fcc45cc + uVar2;
    bVar1 = uVar5 < _DAT_ram_3fcc45cc;
    uVar6 = (*(code *)&SUB_ram_40010a00)(uVar2,iVar4,_DAT_ram_3fcc4434,0);
    _DAT_ram_3fcc4518 = uVar5 - (int)uVar6;
    _DAT_ram_3fcc451c =
         (((uint)bVar1 + iVar4) - (int)((ulonglong)uVar6 >> 0x20)) -
         (uint)(uVar5 < _DAT_ram_3fcc4518);
  }
  iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar4 == 0) {
    _DAT_ram_3fcc4438 = *(int *)(gp + 0x220);
    uVar2 = *(uint *)(gp + 0x208);
  }
  else {
    if (DAT_ram_3fcc45d5 == '\0') {
      _DAT_ram_3fcc4438 = FUN_ram_4039f482();
      _DAT_ram_3fcc4438 = _DAT_ram_3fcc4438 * _DAT_ram_3fcc4434;
    }
    else {
      _DAT_ram_3fcc4438 = *(int *)(gp + 0x220);
    }
    uVar2 = *(uint *)(gp + 0x20c);
  }
  if ((_DAT_ram_3fcc442c != uVar2) || (_DAT_ram_3fcc4430 != *(int *)(gp + 0x210))) {
    _DAT_ram_3fcc442c = uVar2;
    _DAT_ram_3fcc4430 = *(int *)(gp + 0x210);
    FUN_ram_4209693e();
    FUN_ram_420b2cec(_DAT_ram_3fcc4430 + _DAT_ram_3fcc442c);
  }
  iVar4 = _DAT_ram_3fcc4444;
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x148))();
  if (iVar4 != iVar3) {
    _DAT_ram_3fcc4444 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x148))();
    (*(code *)&SUB_ram_40011df0)(1,_DAT_ram_3fcc4444);
  }
  uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (uVar2 != DAT_ram_3fcc440d) {
    FUN_ram_42090c90();
    if ((DAT_ram_3fcc440d == 1) && (_DAT_ram_3fcc4424 == 0)) {
      DAT_ram_3fcc45c8 = DAT_ram_3fcc440d;
      FUN_ram_420914ca(0,0);
    }
    DAT_ram_3fcc440d = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  }
  return;
}

