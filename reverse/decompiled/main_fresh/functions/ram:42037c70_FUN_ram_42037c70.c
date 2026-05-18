
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42037c70(uint param_1,undefined4 param_2)

{
  undefined1 uVar1;
  ushort uVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  iVar3 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  iVar4 = _DAT_ram_3fcdfecc;
  *(char *)(iVar3 + 0x58) = (char)param_1;
  iVar4 = (**(code **)(iVar4 + 0x114))();
  if ((*(byte *)(iVar4 + 0x61) < 2) && (DAT_ram_3fcb6a0c != param_1)) {
    if (param_1 == 0) {
      iVar4 = (**(code **)(_DAT_ram_3fcdfec8 + 8))(0x3fcb6a08);
    }
    else {
      iVar4 = (**(code **)(_DAT_ram_3fcdfec8 + 4))
                        (5,0,0x40395b74,0,0x3fcb6a08,*(code **)(_DAT_ram_3fcdfec8 + 4));
    }
    if (DAT_ram_3fcb6a00 == '\0') {
      FUN_ram_403a5b26(1);
    }
    if (iVar4 != 0) {
      (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x40b,&DAT_ram_3c0f57c4,iVar4,param_1);
    }
    FUN_ram_420af7be(param_1);
    DAT_ram_3fcb6a0c = DAT_ram_3fcb6a0c ^ 1;
  }
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  uVar1 = *(undefined1 *)(iVar4 + 0x5e);
  pcVar6 = *(code **)(_DAT_ram_3fcdfed0 + 0x480);
  iVar4 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  uVar5 = (*pcVar6)((int)*(char *)(iVar4 + 0x5f));
  (*(code *)&SUB_ram_4001263c)(param_1,param_2,uVar1,0,uVar5,0,0,0,0,0);
  if (param_1 == 0) {
    _DAT_ram_3fcdfe58 = 0x33;
    uVar2 = 0x32;
  }
  else {
    uVar2 = _DAT_ram_3fcdfe58;
    if (_DAT_ram_3fcdfe58 == 0x33) {
      _DAT_ram_3fcdfe58 = 0x47;
      (*(code *)&SUB_ram_40012640)(0x45,0x14);
      uVar2 = _DAT_ram_3fcdfe58 & 0xff;
    }
    uVar2 = uVar2 - 1 & 0xff;
  }
  (**(code **)(_DAT_ram_3fcdfed0 + 0x5c4))(uVar2);
  (**(code **)(_DAT_ram_3fcdfed0 + 0x5f8))();
  (*(code *)&LAB_ram_40012644)();
  return;
}

