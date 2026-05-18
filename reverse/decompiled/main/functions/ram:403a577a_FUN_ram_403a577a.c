
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_403a577a(byte *param_1)

{
  byte bVar1;
  int iVar2;
  
  (**(code **)(_DAT_ram_3fcdfecc + 0x20))();
  if (_DAT_ram_60045550 != 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1006,_DAT_ram_60045550);
    goto LAB_ram_403a58ba;
  }
  _DAT_ram_60045304 = _DAT_ram_60045304 & 0xffe20000;
  *(byte *)(_DAT_ram_3fcdfebc + 0x12) = *param_1;
  _DAT_ram_60045800 = (uint)*param_1 | _DAT_ram_60045800 & 0x7ff80000 | 0x80000000;
  (**(code **)(_DAT_ram_3fcdfed0 + 0x4c0))();
  bVar1 = *param_1;
  if (bVar1 == 6) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x4c4))(param_1);
    _DAT_ram_60045304 = _DAT_ram_60045304 | 0x1000;
  }
  else if (bVar1 < 7) {
    if (bVar1 == 0) {
      (**(code **)(_DAT_ram_3fcdfed0 + 0x350))(param_1);
    }
    else {
      if (2 < bVar1) goto LAB_ram_403a5886;
      (**(code **)(_DAT_ram_3fcdfed0 + 0x4c8))(param_1);
    }
  }
  else if ((bVar1 < 9) || (bVar1 == 0xd)) {
    (**(code **)(_DAT_ram_3fcdfed0 + 0x4a4))(param_1);
    _DAT_ram_60045800 = _DAT_ram_60045800 | 0x800;
  }
  else {
LAB_ram_403a5886:
    (**(code **)(_DAT_ram_3fcdfecc + 0x110))(0x906,&DAT_ram_3c0f7050,bVar1,0);
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))();
  if ((*(char *)(iVar2 + 0x58) != '\0') &&
     (iVar2 = (**(code **)(_DAT_ram_3fcdfecc + 0x114))(), *(byte *)(iVar2 + 0x61) < 2)) {
    FUN_ram_403a5b64(*param_1 != 6 && *param_1 != 1);
  }
  _DAT_ram_60045120 = 0;
  _DAT_ram_60045150 = 0;
  _DAT_ram_60045304 = _DAT_ram_60045304 | 0xc0000;
  (**(code **)(_DAT_ram_3fcdfed0 + 0x428))();
  (**(code **)(_DAT_ram_3fcdfec8 + 0x44))();
  if (_DAT_ram_60045550 == 0) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1009,param_1);
    return 0;
  }
  (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1006,1);
LAB_ram_403a58ba:
  (**(code **)(_DAT_ram_3fcdfed0 + 0x3e0))();
  return 1;
}

