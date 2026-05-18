
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42033d4c(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = _DAT_ram_3fcb6bc8;
  iVar4 = _DAT_ram_3fcb6bc8 + 0x108;
  iVar2 = FUN_ram_42033922(param_1,_DAT_ram_3fcb6bc8,*(undefined4 *)(_DAT_ram_3fcb6bc8 + 0x108));
  if (iVar2 != -1) {
    FUN_ram_42033cde(iVar1,0x58,iVar2,iVar4);
    uVar3 = FUN_ram_42034ac4();
    return uVar3;
  }
  return 5;
}

