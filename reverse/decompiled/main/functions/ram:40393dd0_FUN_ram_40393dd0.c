
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40393dd0(uint param_1)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  if (param_1 < 3) {
    uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    iVar2 = param_1 * 0x2c;
    *(undefined4 *)(&DAT_ram_3fcb8448 + iVar2) = uVar3;
    *(undefined4 *)(&DAT_ram_3fcb844c + iVar2) = _DAT_ram_60047068;
    *(undefined4 *)(&DAT_ram_3fcb8450 + iVar2) = _DAT_ram_60047070;
    *(undefined4 *)(&DAT_ram_3fcb8454 + iVar2) = _DAT_ram_6004706c;
    *(undefined4 *)(&DAT_ram_3fcb8458 + iVar2) = _DAT_ram_60047078;
    *(undefined4 *)(&DAT_ram_3fcb845c + iVar2) = _DAT_ram_60047074;
    iVar1 = _DAT_ram_3fcb7dac;
    *(undefined4 *)(&DAT_ram_3fcb8460 + iVar2) = _DAT_ram_3fcb7da8;
    *(int *)(&DAT_ram_3fcb8464 + iVar2) = iVar1;
    *(undefined4 *)(&DAT_ram_3fcb8468 + iVar2) = *(undefined4 *)(iVar1 + 8);
    *(undefined4 *)(&DAT_ram_3fcb846c + iVar2) = _DAT_ram_6004725c;
    *(undefined4 *)(&DAT_ram_3fcb8470 + iVar2) = _DAT_ram_60047264;
    return;
  }
  return;
}

