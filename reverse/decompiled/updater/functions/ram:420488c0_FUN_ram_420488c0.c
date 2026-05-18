
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420488c0(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  
  bVar1 = param_2 == 1;
  if (bVar1) {
    FUN_ram_42047b50();
  }
  if (DAT_ram_3fcb537f == '\0') {
    cVar4 = '\x01';
  }
  else {
    cVar4 = DAT_ram_3fcb5380;
    if (((DAT_ram_3fcb5380 == '\0') && (cVar4 = bVar1, param_1 == 0)) && (0xf < DAT_ram_3fcb5379)) {
      cVar4 = DAT_ram_3fcb537f;
    }
  }
  iVar2 = FUN_ram_4039c15a();
  if ((iVar2 == 0) && (DAT_ram_3fcb537e == '\0')) {
LAB_ram_42048912:
    uVar3 = 0;
LAB_ram_42048914:
    FUN_ram_42047dc2(uVar3);
    return;
  }
  uVar5 = _DAT_ram_3fcb5550;
  if ((DAT_ram_3fcb5385 == '\0') && (DAT_ram_3fcb5386 == '\0')) goto LAB_ram_42048a7c;
  if (cVar4 == '\0') {
    if (param_1 != 0) {
      if ((param_1 != 1) || (DAT_ram_3fcb5386 == '\0')) goto LAB_ram_42048a7c;
      DAT_ram_3fcb5386 = '\0';
      if (DAT_ram_3fcb538a != '\0') {
        uVar3 = 1;
        DAT_ram_3fcb537a = DAT_ram_3fcb537a + '\x01';
        goto LAB_ram_42048a62;
      }
      DAT_ram_3fcb537a = '\0';
      DAT_ram_3fcb538b = '\x01';
      (*(code *)&SUB_ram_40011b88)();
      uVar3 = 1;
      goto LAB_ram_42048914;
    }
    if (DAT_ram_3fcb5385 == '\0') goto LAB_ram_42048a7c;
    DAT_ram_3fcb5385 = '\0';
    uVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar2 = FUN_ram_42048396((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),5000);
    if (iVar2 != 0) {
      uVar3 = 0;
      DAT_ram_3fcb5379 = DAT_ram_3fcb5379 + 1;
LAB_ram_42048a62:
      FUN_ram_42047c2a(uVar3);
      return;
    }
  }
  else {
    if (DAT_ram_3fcb5371 == '\x02') {
      FUN_ram_4039bf06();
    }
    _DAT_ram_3fcb5550 = CONCAT44(_DAT_ram_3fcb5554,_DAT_ram_3fcb5550);
    if ((*(char *)(gp + 0x100) != '\0') &&
       (_DAT_ram_3fcb5550 = CONCAT44(_DAT_ram_3fcb5554,_DAT_ram_3fcb5550), DAT_ram_3fcb5558 != '\0')
       ) {
      if (_DAT_ram_3fcb5394 == 0) {
        FUN_ram_42047aa6();
      }
      else {
        _DAT_ram_3fcb5550 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      }
      DAT_ram_3fcb5558 = '\0';
    }
    if (param_1 != 0) {
      DAT_ram_3fcb537a = '\0';
      if (DAT_ram_3fcb5386 == '\0') goto LAB_ram_42048912;
      DAT_ram_3fcb5386 = '\0';
      if (DAT_ram_3fcb5544 == '\0') {
LAB_ram_42048a2a:
        (*(code *)&SUB_ram_40011b88)();
      }
      else {
        iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
        if ((iVar2 != 0) && (DAT_ram_3fcb538b != '\0')) goto LAB_ram_42048a2a;
        FUN_ram_4039c014();
      }
      _DAT_ram_3fcb56b4 = _DAT_ram_3fcb56b4 + 1;
      goto LAB_ram_42048912;
    }
    DAT_ram_3fcb5379 = 0;
    uVar5 = _DAT_ram_3fcb5550;
    if (DAT_ram_3fcb5385 == '\0') goto LAB_ram_42048a7c;
    if (DAT_ram_3fcb5538 != '\0') {
      DAT_ram_3fcb5538 = '\0';
    }
    DAT_ram_3fcb5385 = '\0';
    if (DAT_ram_3fcb538a != '\0') {
      iVar2 = FUN_ram_4204884e(param_2 == 1);
      uVar5 = _DAT_ram_3fcb5550;
      if (iVar2 != 0) {
        DAT_ram_3fcb5384 = 0;
        FUN_ram_420479e0(0);
        (*(code *)&SUB_ram_40011b84)();
        _DAT_ram_3fcb56b8 = _DAT_ram_3fcb56b8 + 1;
        (*(code *)&SUB_ram_40011d2c)();
        return;
      }
      goto LAB_ram_42048a7c;
    }
  }
  DAT_ram_3fcb5379 = 0;
  DAT_ram_3fcb538b = '\x01';
  uVar5 = _DAT_ram_3fcb5550;
LAB_ram_42048a7c:
  _DAT_ram_3fcb5554 = (undefined4)((ulonglong)uVar5 >> 0x20);
  _DAT_ram_3fcb5550 = (undefined4)uVar5;
  return;
}

