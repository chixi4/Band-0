
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4203db6c(void)

{
  int iVar1;
  int iVar2;
  
  if (_DAT_ram_3fcb6a28 == 0) {
    _DAT_ram_3fcb6a28 = (**(code **)(_DAT_ram_3fcdfed0 + 0x584))(1000000);
  }
  iVar2 = (**(code **)(_DAT_ram_3fcdfed0 + 0x56c))();
  iVar1 = _DAT_ram_3fcb6a24;
  if ((_DAT_ram_3fcb6a28 <= (uint)(iVar2 - _DAT_ram_3fcb6a24)) &&
     (iVar1 = iVar2, *(int *)(_DAT_ram_3fcdfec8 + 0x48) != 0)) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x9fc))(0x1007);
    (**(code **)(_DAT_ram_3fcdfec8 + 0x48))();
  }
  _DAT_ram_3fcb6a24 = iVar1;
  return;
}

