
/* WARNING: Removing unreachable block (ram,0x4039e67c) */
/* WARNING: Removing unreachable block (ram,0x4039e702) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039e612(int param_1,int param_2)

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
  
  iVar4 = FUN_ram_4039e586();
  cVar2 = DAT_ram_3fcc4401;
  cVar1 = DAT_ram_3fcc4401;
  if (DAT_ram_3fcc4401 == '\x01') {
    if (param_1 == 0) {
      if (param_2 == 0) {
        DAT_ram_3fcc4414 = '\0';
        cVar1 = DAT_ram_3fcc441b;
        if ((DAT_ram_3fcc4415 == '\0') && (DAT_ram_3fcc4416 == '\0')) {
          (*(code *)&SUB_ram_40011b74)();
          if (iVar4 == 0) {
            FUN_ram_4039e3e8();
            return;
          }
          if (*(char *)(gp + 0x234) != '\0') {
            DAT_ram_3fcc45e8 = cVar2;
          }
          uVar6 = 1;
          goto LAB_ram_4039e78a;
        }
      }
      else {
        uVar10 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
        iVar7 = (int)(uVar10 >> 0x20);
        iVar5 = FUN_ram_42090d9e((int)uVar10,iVar7,1000);
        cVar1 = DAT_ram_3fcc441b;
        if (iVar5 != 0) {
          DAT_ram_3fcc4414 = cVar2;
          FUN_ram_420b2a42();
          if (uVar10 < CONCAT44(_DAT_ram_3fcc4474,_DAT_ram_3fcc4470)) {
            uVar3 = _DAT_ram_3fcc4470 - (int)uVar10;
            uVar9 = _DAT_ram_3fcc4474 - iVar7;
            uVar8 = _DAT_ram_3fcc443c;
            if ((uVar9 == _DAT_ram_3fcc4470 < uVar3) && (uVar3 < _DAT_ram_3fcc443c)) {
              uVar8 = uVar3;
            }
            (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))
                      (2,0,uVar8,extraout_a3,uVar9,*(code **)(_DAT_ram_3fcdfdd8 + 0x198));
          }
          if (((DAT_ram_3fcc4415 == '\0') && (DAT_ram_3fcc4416 == '\0')) && (iVar4 != 0)) {
            if (*(char *)(gp + 0x234) != '\0') {
              DAT_ram_3fcc45e8 = '\x01';
            }
            FUN_ram_42090632(1);
          }
          _DAT_ram_3fcc4734 = _DAT_ram_3fcc4734 + 1;
          cVar1 = DAT_ram_3fcc441b;
        }
      }
    }
    else {
      uVar10 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      iVar4 = FUN_ram_42090d9e((int)uVar10,(int)(uVar10 >> 0x20),5000);
      if (iVar4 != 0) {
        DAT_ram_3fcc4414 = cVar2;
        if (uVar10 < CONCAT44(_DAT_ram_3fcc4474,_DAT_ram_3fcc4470)) {
          (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(1,0,_DAT_ram_3fcc4470 - (int)uVar10);
        }
        FUN_ram_420914ca(1,0);
        _DAT_ram_3fcc4730 = _DAT_ram_3fcc4730 + 1;
        cVar1 = DAT_ram_3fcc441b;
      }
    }
  }
  else {
    cVar1 = DAT_ram_3fcc441b;
    if (((DAT_ram_3fcc4401 == '\0') && (param_1 == 0)) && (param_2 == 0)) {
      DAT_ram_3fcc4414 = '\0';
      if (DAT_ram_3fcc45d4 != '\0') {
        FUN_ram_420903d2();
        FUN_ram_420918e2(0);
      }
      cVar1 = DAT_ram_3fcc441b;
      if (iVar4 != 0) {
        if (*(char *)(gp + 0x234) != '\0') {
          DAT_ram_3fcc45e8 = '\x01';
        }
        uVar6 = 0;
LAB_ram_4039e78a:
        FUN_ram_42090632(uVar6);
        return;
      }
    }
  }
  DAT_ram_3fcc441b = cVar1;
  return;
}

