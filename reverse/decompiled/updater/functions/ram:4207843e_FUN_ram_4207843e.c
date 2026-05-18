
/* WARNING: Removing unreachable block (ram,0x420784f6) */
/* WARNING: Removing unreachable block (ram,0x4207855c) */
/* WARNING: Removing unreachable block (ram,0x420784bc) */
/* WARNING: Removing unreachable block (ram,0x420785ca) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4207843e(uint param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_a3;
  uint uVar5;
  ulonglong uVar6;
  
  if (DAT_ram_3fcb5372 != param_1) {
    return 0;
  }
  FUN_ram_4039c15a();
  if (DAT_ram_3fcb537e == '\0') {
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = (int)uVar6;
    iVar3 = FUN_ram_42048396(iVar4,(int)(uVar6 >> 0x20),5000);
    if (iVar3 != 0) {
      if (uVar6 < CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcb53e0 - iVar4);
      }
      (*(code *)&SUB_ram_40011f68)();
      return 0;
    }
    uVar5 = _DAT_ram_3fcb5520 + _DAT_ram_3fcb53e0;
    if (uVar6 < CONCAT44((uint)(uVar5 < _DAT_ram_3fcb53e0) + _DAT_ram_3fcb53e4 + _DAT_ram_3fcb5524,
                         uVar5)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5570);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))
                (0x3fcb5570,uVar5 - iVar4,0,extraout_a3,&DAT_ram_3fcb5000,
                 *(code **)(_DAT_ram_3fcdfdd8 + 0xf0));
      return 0;
    }
    FUN_ram_420485d6();
    return 0;
  }
  cVar2 = DAT_ram_3fcb5371;
  if (DAT_ram_3fcb5371 == '\x01') {
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = FUN_ram_42048396((int)uVar6,(int)(uVar6 >> 0x20),5000);
    if (iVar4 == 0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      if ((uVar6 < CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0)) && (DAT_ram_3fcb537f != '\0')) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcb53e0 - (int)uVar6);
      }
      if (param_2 == 0) {
        return 0;
      }
      uVar5 = FUN_ram_42048ac2(0,1);
      param_2 = (uint)(uVar5 < 2);
      cVar2 = DAT_ram_3fcb538b;
    }
    goto LAB_ram_42078588;
  }
  if (DAT_ram_3fcb5371 == '\x02') {
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = FUN_ram_42048396((int)uVar6,(int)(uVar6 >> 0x20),5000);
    if (iVar4 == 0) {
      if (param_2 == 0) goto LAB_ram_420785f0;
      DAT_ram_3fcb538b = '\x01';
      uVar5 = param_2;
    }
    else {
      if ((uVar6 < CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0)) && (DAT_ram_3fcb537f != '\0')) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcb53e0 - (int)uVar6);
      }
      FUN_ram_4039bf06();
      if (param_2 == 0) {
LAB_ram_420785f0:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_ram_42048ac2(0,1);
        uVar5 = (uint)(uVar5 < 2);
      }
    }
    _DAT_ram_3fcb56b0 = _DAT_ram_3fcb56b0 + 1;
  }
  else {
    if (DAT_ram_3fcb5371 == '\0') {
      if (param_2 == 0) {
        return 0;
      }
      param_2 = 0;
      cVar2 = DAT_ram_3fcb538b;
      if (_DAT_ram_3fcb5394 != 0) {
        (*(code *)&SUB_ram_40011b84)();
        cVar2 = DAT_ram_3fcb538b;
      }
      goto LAB_ram_42078588;
    }
    uVar5 = 0;
  }
  bVar1 = param_2 == 0;
  param_2 = uVar5;
  cVar2 = DAT_ram_3fcb538b;
  if (bVar1) {
    return uVar5;
  }
LAB_ram_42078588:
  DAT_ram_3fcb538b = cVar2;
  FUN_ram_420479b6();
  return param_2;
}

