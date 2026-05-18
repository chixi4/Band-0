
/* WARNING: Removing unreachable block (ram,0x4039e3a2) */
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039e2da(void)

{
  int iVar1;
  uint uVar2;
  ulonglong uVar3;
  
  if (DAT_ram_3fcc4401 == '\x02') {
    (*(code *)&SUB_ram_40011fd8)(0);
    _DAT_ram_3fcc4488 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    _DAT_ram_3fcc4754 = _DAT_ram_3fcc4754 + 1;
    uVar2 = (uint)_DAT_ram_3fcc4488 - _DAT_ram_3fcc4480;
    iVar1 = ((int)((ulonglong)_DAT_ram_3fcc4488 >> 0x20) - _DAT_ram_3fcc4484) -
            (uint)((uint)_DAT_ram_3fcc4488 < uVar2);
    _DAT_ram_3fcc475c =
         (uint)(_DAT_ram_3fcc4758 + uVar2 < _DAT_ram_3fcc4758) + _DAT_ram_3fcc475c + iVar1;
    _DAT_ram_3fcc476c =
         (uint)(_DAT_ram_3fcc4768 + uVar2 < _DAT_ram_3fcc4768) + _DAT_ram_3fcc476c + iVar1;
    _DAT_ram_3fcc449c =
         (uint)(uVar2 + _DAT_ram_3fcc4498 < _DAT_ram_3fcc4498) + _DAT_ram_3fcc449c + iVar1;
    _DAT_ram_3fcc4498 = uVar2 + _DAT_ram_3fcc4498;
    _DAT_ram_3fcc4758 = _DAT_ram_3fcc4758 + uVar2;
    _DAT_ram_3fcc4768 = _DAT_ram_3fcc4768 + uVar2;
  }
  if (DAT_ram_3fcc45d5 != '\0') {
    iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
    if (iVar1 != 0) {
      uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
      if (uVar3 < CONCAT44(_DAT_ram_3fcc447c,_DAT_ram_3fcc4478)) {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44f0);
        (**(code **)(_DAT_ram_3fcdfdd8 + 0xf0))(0x3fcc44f0,_DAT_ram_3fcc4478 - (int)uVar3,0);
      }
      else {
        DAT_ram_3fcc441a = 0;
      }
    }
  }
  FUN_ram_420903e8(1);
  return;
}

