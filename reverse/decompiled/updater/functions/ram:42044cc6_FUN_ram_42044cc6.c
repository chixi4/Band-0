
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42044cc6(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = _DAT_ram_3fcdfb20;
  uVar1 = _DAT_ram_3fcb5210;
  *(undefined4 *)(_DAT_ram_3fcdfb20 + 0x30) = _DAT_ram_3fcb5214;
  uVar3 = DAT_ram_3fcb521c;
  uVar2 = _DAT_ram_3fcb5218;
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined1 *)(iVar4 + 0x118) = uVar3;
  return;
}

