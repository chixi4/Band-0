
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42047ba2(void)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_ram_3fcb5387 == '\0') {
    return 0xfffffffe;
  }
  iVar1 = _DAT_ram_3fcb53a4;
  if (_DAT_ram_3fcb5394 != 0) {
    if (_DAT_ram_3fcb5394 == 1) {
      uVar2 = (uint)DAT_ram_3fcb537b;
    }
    else {
      if (_DAT_ram_3fcb5394 != 2) goto LAB_ram_42047bd0;
      uVar2 = (uint)_DAT_ram_3fcb5392;
    }
    iVar1 = uVar2 * _DAT_ram_3fcb53a4;
  }
LAB_ram_42047bd0:
  if ((int)(uint)_DAT_ram_3fcb538e % ((iVar1 + 0x40000) / iVar1) == 0) {
    FUN_ram_42073e94(1,1);
    iVar1 = (*(code *)&SUB_ram_40012444)();
    DAT_ram_3fcb093f = (undefined1)(iVar1 + 2 >> 2);
  }
  return 0;
}

