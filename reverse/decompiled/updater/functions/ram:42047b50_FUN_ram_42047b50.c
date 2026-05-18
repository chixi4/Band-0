
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42047b50(void)

{
  undefined8 uVar1;
  int iVar2;
  
  uVar1 = _DAT_ram_3fcb53c8;
  if (DAT_ram_3fcb537e != '\0') {
    _DAT_ram_3fcb53c8 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    uVar1 = _DAT_ram_3fcb53c8;
    if ((_DAT_ram_3fcb5394 == 0) &&
       (iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), uVar1 = _DAT_ram_3fcb53c8, iVar2 == 0)) {
      (*(code *)&SUB_ram_40011b84)();
      return;
    }
  }
  _DAT_ram_3fcb53cc = (undefined4)((ulonglong)uVar1 >> 0x20);
  _DAT_ram_3fcb53c8 = (undefined4)uVar1;
  return;
}

