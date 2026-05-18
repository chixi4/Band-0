
/* WARNING: Removing unreachable block (ram,0x4039c2a8) */
/* WARNING: Removing unreachable block (ram,0x4039c32e) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039c23e(int param_1,int param_2)

{
  char cVar1;
  char cVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 uVar6;
  int iVar7;
  uint uVar8;
  undefined4 extraout_a3;
  uint uVar9;
  ulonglong uVar10;
  
  iVar4 = FUN_ram_4039c1b2();
  cVar2 = DAT_ram_3fcb5371;
  cVar1 = DAT_ram_3fcb5371;
  if (DAT_ram_3fcb5371 == '\x01') {
    if (param_1 == 0) {
      if (param_2 == 0) {
        DAT_ram_3fcb5384 = '\0';
        cVar1 = DAT_ram_3fcb538b;
        if ((DAT_ram_3fcb5385 == '\0') && (DAT_ram_3fcb5386 == '\0')) {
          (*(code *)&SUB_ram_40011b74)();
          if (iVar4 == 0) {
            FUN_ram_4039c014();
            return;
          }
          if (*(char *)(gp + 0x100) != '\0') {
            DAT_ram_3fcb5558 = cVar2;
          }
          uVar6 = 1;
          goto LAB_ram_4039c3b6;
        }
      }
      else {
        uVar10 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
        iVar7 = (int)(uVar10 >> 0x20);
        iVar5 = FUN_ram_42048396((int)uVar10,iVar7,1000);
        cVar1 = DAT_ram_3fcb538b;
        if (iVar5 != 0) {
          DAT_ram_3fcb5384 = cVar2;
          FUN_ram_4207933e();
          if (uVar10 < CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0)) {
            uVar3 = _DAT_ram_3fcb53e0 - (int)uVar10;
            uVar9 = _DAT_ram_3fcb53e4 - iVar7;
            uVar8 = _DAT_ram_3fcb53ac;
            if ((uVar9 == _DAT_ram_3fcb53e0 < uVar3) && (uVar3 < _DAT_ram_3fcb53ac)) {
              uVar8 = uVar3;
            }
            (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))
                      (2,0,uVar8,extraout_a3,uVar9,*(code **)(_DAT_ram_3fcdfdd8 + 0x198));
          }
          if (((DAT_ram_3fcb5385 == '\0') && (DAT_ram_3fcb5386 == '\0')) && (iVar4 != 0)) {
            if (*(char *)(gp + 0x100) != '\0') {
              DAT_ram_3fcb5558 = '\x01';
            }
            FUN_ram_42047c2a(1);
          }
          _DAT_ram_3fcb56a4 = _DAT_ram_3fcb56a4 + 1;
          cVar1 = DAT_ram_3fcb538b;
        }
      }
    }
    else {
      uVar10 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      iVar4 = FUN_ram_42048396((int)uVar10,(int)(uVar10 >> 0x20),5000);
      if (iVar4 != 0) {
        DAT_ram_3fcb5384 = cVar2;
        if (uVar10 < CONCAT44(_DAT_ram_3fcb53e4,_DAT_ram_3fcb53e0)) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcb53e0 - (int)uVar10);
        }
        FUN_ram_42048ac2(1,0);
        _DAT_ram_3fcb56a0 = _DAT_ram_3fcb56a0 + 1;
        cVar1 = DAT_ram_3fcb538b;
      }
    }
  }
  else {
    cVar1 = DAT_ram_3fcb538b;
    if (((DAT_ram_3fcb5371 == '\0') && (param_1 == 0)) && (param_2 == 0)) {
      DAT_ram_3fcb5384 = '\0';
      if (DAT_ram_3fcb5544 != '\0') {
        FUN_ram_420479ca();
        FUN_ram_42048eda(0);
      }
      cVar1 = DAT_ram_3fcb538b;
      if (iVar4 != 0) {
        if (*(char *)(gp + 0x100) != '\0') {
          DAT_ram_3fcb5558 = '\x01';
        }
        uVar6 = 0;
LAB_ram_4039c3b6:
        FUN_ram_42047c2a(uVar6);
        return;
      }
    }
  }
  DAT_ram_3fcb538b = cVar1;
  return;
}

