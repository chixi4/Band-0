
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_40392e5a(int param_1,int param_2)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
  uVar4 = _DAT_ram_3fcb53a4;
  iVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  iVar3 = _DAT_ram_6004d000;
  if (((iVar5 != 0) && ((_DAT_ram_3fcb537c & 0xffff0000) == 0x1010000)) &&
     (uVar4 = _DAT_ram_3fcb5520, param_1 == 0)) {
    iVar5 = FUN_ram_4039d0ae();
    uVar2 = _DAT_ram_3fcb5520;
    uVar1 = _DAT_ram_3fcb53a4;
    uVar4 = iVar3 - param_2;
    uVar6 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    if ((uVar6 < _DAT_ram_3fcb53e8) && (uVar4 < iVar5 * uVar1 - uVar2)) {
      uVar4 = (uVar4 + _DAT_ram_3fcb53e8) - uVar6;
    }
  }
  return uVar4;
}

