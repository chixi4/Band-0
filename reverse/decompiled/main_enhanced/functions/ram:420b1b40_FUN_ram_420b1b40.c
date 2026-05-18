
/* WARNING: Removing unreachable block (ram,0x420b1bf8) */
/* WARNING: Removing unreachable block (ram,0x420b1c5e) */
/* WARNING: Removing unreachable block (ram,0x420b1bbe) */
/* WARNING: Removing unreachable block (ram,0x420b1ccc) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_420b1b40(uint param_1,uint param_2)

{
  bool bVar1;
  char cVar2;
  int iVar3;
  int iVar4;
  undefined4 extraout_a3;
  uint uVar5;
  ulonglong uVar6;
  
  if (DAT_ram_3fcc4402 != param_1) {
    return 0;
  }
  FUN_ram_4039e52e();
  if (DAT_ram_3fcc440e == '\0') {
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = (int)uVar6;
    iVar3 = FUN_ram_42090d9e(iVar4,(int)(uVar6 >> 0x20),5000);
    if (iVar3 != 0) {
      if (uVar6 < CONCAT44(_DAT_ram_3fcc4474,_DAT_ram_3fcc4470)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcc4470 - iVar4);
      }
      (*(code *)&SUB_ram_40011f68)();
      return 0;
    }
    uVar5 = _DAT_ram_3fcc45b0 + _DAT_ram_3fcc4470;
    if (uVar6 < CONCAT44((uint)(uVar5 < _DAT_ram_3fcc4470) + _DAT_ram_3fcc4474 + _DAT_ram_3fcc45b4,
                         uVar5)) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc4600);
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))
                (0x3fcc4600,uVar5 - iVar4,0,extraout_a3,&DAT_ram_3fcc4000,
                 *(code **)(_DAT_ram_3fcdfdd8 + 0xf0));
      return 0;
    }
    FUN_ram_42090fde();
    return 0;
  }
  cVar2 = DAT_ram_3fcc4401;
  if (DAT_ram_3fcc4401 == '\x01') {
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = FUN_ram_42090d9e((int)uVar6,(int)(uVar6 >> 0x20),5000);
    if (iVar4 == 0) {
      if (param_2 == 0) {
        return 0;
      }
    }
    else {
      if ((uVar6 < CONCAT44(_DAT_ram_3fcc4474,_DAT_ram_3fcc4470)) && (DAT_ram_3fcc440f != '\0')) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcc4470 - (int)uVar6);
      }
      if (param_2 == 0) {
        return 0;
      }
      uVar5 = FUN_ram_420914ca(0,1);
      param_2 = (uint)(uVar5 < 2);
      cVar2 = DAT_ram_3fcc441b;
    }
    goto LAB_ram_420b1c8a;
  }
  if (DAT_ram_3fcc4401 == '\x02') {
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar4 = FUN_ram_42090d9e((int)uVar6,(int)(uVar6 >> 0x20),5000);
    if (iVar4 == 0) {
      if (param_2 == 0) goto LAB_ram_420b1cf2;
      DAT_ram_3fcc441b = '\x01';
      uVar5 = param_2;
    }
    else {
      if ((uVar6 < CONCAT44(_DAT_ram_3fcc4474,_DAT_ram_3fcc4470)) && (DAT_ram_3fcc440f != '\0')) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcc4470 - (int)uVar6);
      }
      FUN_ram_4039e2da();
      if (param_2 == 0) {
LAB_ram_420b1cf2:
        uVar5 = 0;
      }
      else {
        uVar5 = FUN_ram_420914ca(0,1);
        uVar5 = (uint)(uVar5 < 2);
      }
    }
    _DAT_ram_3fcc4740 = _DAT_ram_3fcc4740 + 1;
  }
  else {
    if (DAT_ram_3fcc4401 == '\0') {
      if (param_2 == 0) {
        return 0;
      }
      param_2 = 0;
      cVar2 = DAT_ram_3fcc441b;
      if (_DAT_ram_3fcc4424 != 0) {
        (*(code *)&SUB_ram_40011b84)();
        cVar2 = DAT_ram_3fcc441b;
      }
      goto LAB_ram_420b1c8a;
    }
    uVar5 = 0;
  }
  bVar1 = param_2 == 0;
  param_2 = uVar5;
  cVar2 = DAT_ram_3fcc441b;
  if (bVar1) {
    return uVar5;
  }
LAB_ram_420b1c8a:
  DAT_ram_3fcc441b = cVar2;
  FUN_ram_420903be();
  return param_2;
}

