
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420905aa(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_ram_3fcc4417 == '\0') {
    return 0xfffffffe;
  }
  iVar1 = _DAT_ram_3fcc4434;
  if (_DAT_ram_3fcc4424 != 0) {
    if (_DAT_ram_3fcc4424 == 1) {
      uVar2 = (uint)DAT_ram_3fcc440b;
    }
    else {
      if (_DAT_ram_3fcc4424 != 2) goto LAB_ram_420905d8;
      uVar2 = (uint)_DAT_ram_3fcc4422;
    }
    iVar1 = uVar2 * _DAT_ram_3fcc4434;
  }
LAB_ram_420905d8:
  if ((int)(uint)_DAT_ram_3fcc441e % ((iVar1 + 0x40000) / iVar1) == 0) {
    FUN_ram_420ac4f8(1,1);
    iVar1 = (*(code *)&SUB_ram_40012444)();
    DAT_ram_3fcb7dd3 = (undefined1)(iVar1 + 2 >> 2);
  }
  return 0;
}

