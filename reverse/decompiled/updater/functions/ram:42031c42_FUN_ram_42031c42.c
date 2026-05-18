
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42031c42(uint param_1)

{
  undefined4 *puVar1;
  int iVar2;
  int iVar3;
  int local_28;
  int *piStack_24;
  
  piStack_24 = &local_28;
  local_28 = 0;
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x54))(_DAT_ram_3fcdfdb4);
  while (iVar2 = _DAT_ram_3fcb36d0, iVar3 = local_28, _DAT_ram_3fcb36d0 != 0) {
    iVar3 = *(int *)(_DAT_ram_3fcb36d0 + 0x20);
    if (iVar3 == 0) {
      _DAT_ram_3fcb36d4 = (int *)&DAT_ram_3fcb36d0;
    }
    if ((*(uint *)(*(int *)(_DAT_ram_3fcb36d0 + 0x24) + 0x10) >> 0x13 & 1) == param_1) {
      _DAT_ram_3fcb36d0 = iVar3;
      (*(code *)&SUB_ram_40011fe8)();
    }
    else {
      puVar1 = (undefined4 *)(_DAT_ram_3fcb36d0 + 0x20);
      _DAT_ram_3fcb36d0 = iVar3;
      *puVar1 = 0;
      *piStack_24 = iVar2;
      piStack_24 = (int *)(iVar2 + 0x20);
    }
  }
  while (iVar3 != 0) {
    iVar2 = *(int *)(iVar3 + 0x20);
    *(undefined4 *)(iVar3 + 0x20) = 0;
    *_DAT_ram_3fcb36d4 = iVar3;
    _DAT_ram_3fcb36d4 = (int *)(iVar3 + 0x20);
    iVar3 = iVar2;
  }
  (**(code **)(_DAT_ram_3fcdfdd8 + 0x58))(_DAT_ram_3fcdfdb4);
  return 0;
}

