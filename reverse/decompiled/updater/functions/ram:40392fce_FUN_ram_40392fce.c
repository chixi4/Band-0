
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40392fce(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 3) {
    uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar2 = param_1 * 0x2c;
    *(undefined4 *)(&DAT_ram_3fcb0f9c + iVar2) = uVar3;
    *(undefined4 *)(&DAT_ram_3fcb0fa0 + iVar2) = _DAT_ram_60047068;
    *(undefined4 *)(&DAT_ram_3fcb0fa4 + iVar2) = _DAT_ram_60047070;
    *(undefined4 *)(&DAT_ram_3fcb0fa8 + iVar2) = _DAT_ram_6004706c;
    *(undefined4 *)(&DAT_ram_3fcb0fac + iVar2) = _DAT_ram_60047078;
    *(undefined4 *)(&DAT_ram_3fcb0fb0 + iVar2) = _DAT_ram_60047074;
    iVar1 = _DAT_ram_3fcb0918;
    *(undefined4 *)(&DAT_ram_3fcb0fb4 + iVar2) = _DAT_ram_3fcb0914;
    *(int *)(&DAT_ram_3fcb0fb8 + iVar2) = iVar1;
    *(undefined4 *)(&DAT_ram_3fcb0fbc + iVar2) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(&DAT_ram_3fcb0fc0 + iVar2) = _DAT_ram_6004725c;
    *(undefined4 *)(&DAT_ram_3fcb0fc4 + iVar2) = _DAT_ram_60047264;
    return;
  }
  return;
}

