
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208d3d4(void)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined1 uVar3;
  int iVar4;
  
  iVar4 = _DAT_ram_3fcdfb20;
  uVar1 = _DAT_ram_3fcc429c;
  *(undefined4 *)(_DAT_ram_3fcdfb20 + 0x30) = _DAT_ram_3fcc42a0;
  uVar3 = DAT_ram_3fcc42a8;
  uVar2 = _DAT_ram_3fcc42a4;
  *(undefined4 *)(iVar4 + 0x34) = uVar1;
  *(undefined4 *)(iVar4 + 0x38) = uVar2;
  *(undefined1 *)(iVar4 + 0x118) = uVar3;
  return;
}

