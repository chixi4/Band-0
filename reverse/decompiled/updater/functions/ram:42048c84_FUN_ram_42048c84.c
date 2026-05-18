
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048c84(void)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  undefined8 uVar6;
  int iStack_18;
  int iStack_14;
  
  if (DAT_ram_3fcb5546 == '\0') {
    FUN_ram_4207959e(&iStack_18,&iStack_14);
    uVar2 = iStack_18 + _DAT_ram_3fcb539c;
    iVar4 = (uint)(uVar2 < _DAT_ram_3fcb539c) + iStack_14;
    uVar5 = _DAT_ram_3fcb553c + uVar2;
    bVar1 = uVar5 < _DAT_ram_3fcb553c;
    uVar6 = (*(code *)&SUB_ram_40010a00)(uVar2,iVar4,_DAT_ram_3fcb53a4,0);
    _DAT_ram_3fcb5488 = uVar5 - (int)uVar6;
    _DAT_ram_3fcb548c =
         (((uint)bVar1 + iVar4) - (int)((ulonglong)uVar6 >> 0x20)) -
         (uint)(uVar5 < _DAT_ram_3fcb5488);
  }
  iVar4 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar4 == 0) {
    _DAT_ram_3fcb53a8 = *(int *)(gp + 0xec);
    uVar2 = *(uint *)(gp + 0xd4);
  }
  else {
    if (DAT_ram_3fcb5545 == '\0') {
      _DAT_ram_3fcb53a8 = FUN_ram_4039d0ae();
      _DAT_ram_3fcb53a8 = _DAT_ram_3fcb53a8 * _DAT_ram_3fcb53a4;
    }
    else {
      _DAT_ram_3fcb53a8 = *(int *)(gp + 0xec);
    }
    uVar2 = *(uint *)(gp + 0xd8);
  }
  if ((_DAT_ram_3fcb539c != uVar2) || (_DAT_ram_3fcb53a0 != *(int *)(gp + 0xdc))) {
    _DAT_ram_3fcb539c = uVar2;
    _DAT_ram_3fcb53a0 = *(int *)(gp + 0xdc);
    FUN_ram_4204de72();
    FUN_ram_420795c6(_DAT_ram_3fcb53a0 + _DAT_ram_3fcb539c);
  }
  iVar4 = _DAT_ram_3fcb53b4;
  iVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x148))();
  if (iVar4 != iVar3) {
    _DAT_ram_3fcb53b4 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x148))();
    (*(code *)&SUB_ram_40011df0)(1,_DAT_ram_3fcb53b4);
  }
  uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (uVar2 != DAT_ram_3fcb537d) {
    FUN_ram_42048288();
    if ((DAT_ram_3fcb537d == 1) && (_DAT_ram_3fcb5394 == 0)) {
      DAT_ram_3fcb5538 = DAT_ram_3fcb537d;
      FUN_ram_42048ac2(0,0);
    }
    DAT_ram_3fcb537d = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  }
  return;
}

