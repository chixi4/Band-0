
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039e3e8(void)

{
  int iVar1;
  uint uVar2;
  
  if ((((((DAT_ram_3fcc4411 != '\0') && (DAT_ram_3fcc4413 == '\0')) && (DAT_ram_3fcc4414 == '\0'))
       && ((DAT_ram_3fcc4415 == '\0' && (DAT_ram_3fcc4416 == '\0')))) &&
      ((DAT_ram_3fcc440f != '\0' && ((DAT_ram_3fcc4410 == '\0' && (_DAT_ram_3fcc4524 == 0)))))) &&
     ((iVar1 = FUN_ram_420936ce(1), iVar1 == 0 ||
      ((iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar1 != 0 && (DAT_ram_3fcc441a == '\0')))
      ))) {
    _DAT_ram_3fcc4480 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(2);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0x26);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0);
    FUN_ram_4039dfbc();
    if ((DAT_ram_3fcc45d5 != '\0') && (iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar1 != 0)
       ) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44f0);
    }
    (*(code *)&SUB_ram_40011fd4)(0);
    _DAT_ram_3fcc4750 = _DAT_ram_3fcc4750 + 1;
    uVar2 = _DAT_ram_3fcc4480 - _DAT_ram_3fcc4488;
    iVar1 = (_DAT_ram_3fcc4484 - _DAT_ram_3fcc448c) - (uint)(_DAT_ram_3fcc4480 < uVar2);
    _DAT_ram_3fcc4764 =
         (uint)(_DAT_ram_3fcc4760 + uVar2 < _DAT_ram_3fcc4760) + _DAT_ram_3fcc4764 + iVar1;
    _DAT_ram_3fcc476c =
         (uint)(uVar2 + _DAT_ram_3fcc4768 < _DAT_ram_3fcc4768) + iVar1 + _DAT_ram_3fcc476c;
    _DAT_ram_3fcc4760 = _DAT_ram_3fcc4760 + uVar2;
    _DAT_ram_3fcc4768 = uVar2 + _DAT_ram_3fcc4768;
    FUN_ram_420903e8(2);
    return;
  }
  return;
}

