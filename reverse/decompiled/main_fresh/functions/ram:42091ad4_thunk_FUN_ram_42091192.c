
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void thunk_FUN_ram_42091192(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  undefined8 uVar2;
  
  uVar2 = _DAT_ram_3fcc45e0;
  if (param_1 != 0) {
    FUN_ram_42090558();
    FUN_ram_4039beb4();
    uVar2 = CONCAT44(_DAT_ram_3fcc45e4,_DAT_ram_3fcc45e0);
    if ((*(char *)(gp + 0x234) != '\0') &&
       (uVar2 = CONCAT44(_DAT_ram_3fcc45e4,_DAT_ram_3fcc45e0), param_3 != 0)) {
      if (_DAT_ram_3fcc4424 == 0) {
        FUN_ram_420904ae();
      }
      uVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    }
  }
  _DAT_ram_3fcc45e0 = uVar2;
  iVar1 = FUN_ram_420936ce(1);
  if (iVar1 == 0) {
    if (DAT_ram_3fcc440e == '\0') {
      (*(code *)&SUB_ram_40011d50)();
    }
    else if (DAT_ram_3fcc4401 == '\x01') {
      (*(code *)&SUB_ram_40011b88)();
    }
  }
  iVar1 = FUN_ram_4039e52e();
  uVar2 = _DAT_ram_3fcc45e0;
  if ((iVar1 != 0) && (param_3 != 0)) {
    FUN_ram_420903be();
    if (DAT_ram_3fcc441a == '\0') {
      DAT_ram_3fcc441b = 1;
    }
    uVar2 = _DAT_ram_3fcc45e0;
    if (DAT_ram_3fcc4401 == '\0') {
      (*(code *)&SUB_ram_40011b84)();
      return;
    }
  }
  _DAT_ram_3fcc45e4 = (undefined4)((ulonglong)uVar2 >> 0x20);
  _DAT_ram_3fcc45e0 = (undefined4)uVar2;
  return;
}

