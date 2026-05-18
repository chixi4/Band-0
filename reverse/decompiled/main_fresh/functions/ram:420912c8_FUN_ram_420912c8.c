
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420912c8(int param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  undefined4 uVar3;
  char cVar4;
  undefined8 uVar5;
  
  bVar1 = param_2 == 1;
  if (bVar1) {
    FUN_ram_42090558();
  }
  if (DAT_ram_3fcc440f == '\0') {
    cVar4 = '\x01';
  }
  else {
    cVar4 = DAT_ram_3fcc4410;
    if (((DAT_ram_3fcc4410 == '\0') && (cVar4 = bVar1, param_1 == 0)) && (0xf < DAT_ram_3fcc4409)) {
      cVar4 = DAT_ram_3fcc440f;
    }
  }
  iVar2 = FUN_ram_4039e52e();
  if ((iVar2 == 0) && (DAT_ram_3fcc440e == '\0')) {
LAB_ram_4209131a:
    uVar3 = 0;
LAB_ram_4209131c:
    FUN_ram_420907ca(uVar3);
    return;
  }
  uVar5 = _DAT_ram_3fcc45e0;
  if ((DAT_ram_3fcc4415 == '\0') && (DAT_ram_3fcc4416 == '\0')) goto LAB_ram_42091484;
  if (cVar4 == '\0') {
    if (param_1 != 0) {
      if ((param_1 != 1) || (DAT_ram_3fcc4416 == '\0')) goto LAB_ram_42091484;
      DAT_ram_3fcc4416 = '\0';
      if (DAT_ram_3fcc441a != '\0') {
        uVar3 = 1;
        DAT_ram_3fcc440a = DAT_ram_3fcc440a + '\x01';
        goto LAB_ram_4209146a;
      }
      DAT_ram_3fcc440a = '\0';
      DAT_ram_3fcc441b = '\x01';
      (*(code *)&SUB_ram_40011b88)();
      uVar3 = 1;
      goto LAB_ram_4209131c;
    }
    if (DAT_ram_3fcc4415 == '\0') goto LAB_ram_42091484;
    DAT_ram_3fcc4415 = '\0';
    uVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar2 = FUN_ram_42090d9e((int)uVar5,(int)((ulonglong)uVar5 >> 0x20),5000);
    if (iVar2 != 0) {
      uVar3 = 0;
      DAT_ram_3fcc4409 = DAT_ram_3fcc4409 + 1;
LAB_ram_4209146a:
      FUN_ram_42090632(uVar3);
      return;
    }
  }
  else {
    if (DAT_ram_3fcc4401 == '\x02') {
      FUN_ram_4039e2da();
    }
    _DAT_ram_3fcc45e0 = CONCAT44(_DAT_ram_3fcc45e4,_DAT_ram_3fcc45e0);
    if ((*(char *)(gp + 0x234) != '\0') &&
       (_DAT_ram_3fcc45e0 = CONCAT44(_DAT_ram_3fcc45e4,_DAT_ram_3fcc45e0), DAT_ram_3fcc45e8 != '\0')
       ) {
      if (_DAT_ram_3fcc4424 == 0) {
        FUN_ram_420904ae();
      }
      else {
        _DAT_ram_3fcc45e0 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      }
      DAT_ram_3fcc45e8 = '\0';
    }
    if (param_1 != 0) {
      DAT_ram_3fcc440a = '\0';
      if (DAT_ram_3fcc4416 == '\0') goto LAB_ram_4209131a;
      DAT_ram_3fcc4416 = '\0';
      if (DAT_ram_3fcc45d4 == '\0') {
LAB_ram_42091432:
        (*(code *)&SUB_ram_40011b88)();
      }
      else {
        iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
        if ((iVar2 != 0) && (DAT_ram_3fcc441b != '\0')) goto LAB_ram_42091432;
        FUN_ram_4039e3e8();
      }
      _DAT_ram_3fcc4744 = _DAT_ram_3fcc4744 + 1;
      goto LAB_ram_4209131a;
    }
    DAT_ram_3fcc4409 = 0;
    uVar5 = _DAT_ram_3fcc45e0;
    if (DAT_ram_3fcc4415 == '\0') goto LAB_ram_42091484;
    if (DAT_ram_3fcc45c8 != '\0') {
      DAT_ram_3fcc45c8 = '\0';
    }
    DAT_ram_3fcc4415 = '\0';
    if (DAT_ram_3fcc441a != '\0') {
      iVar2 = FUN_ram_42091256(param_2 == 1);
      uVar5 = _DAT_ram_3fcc45e0;
      if (iVar2 != 0) {
        DAT_ram_3fcc4414 = 0;
        FUN_ram_420903e8(0);
        (*(code *)&SUB_ram_40011b84)();
        _DAT_ram_3fcc4748 = _DAT_ram_3fcc4748 + 1;
        (*(code *)&SUB_ram_40011d2c)();
        return;
      }
      goto LAB_ram_42091484;
    }
  }
  DAT_ram_3fcc4409 = 0;
  DAT_ram_3fcc441b = '\x01';
  uVar5 = _DAT_ram_3fcc45e0;
LAB_ram_42091484:
  _DAT_ram_3fcc45e4 = (undefined4)((ulonglong)uVar5 >> 0x20);
  _DAT_ram_3fcc45e0 = (undefined4)uVar5;
  return;
}

