
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039c014(void)

{
  int iVar1;
  uint uVar2;
  
  if ((((((DAT_ram_3fcb5381 != '\0') && (DAT_ram_3fcb5383 == '\0')) && (DAT_ram_3fcb5384 == '\0'))
       && ((DAT_ram_3fcb5385 == '\0' && (DAT_ram_3fcb5386 == '\0')))) &&
      ((DAT_ram_3fcb537f != '\0' && ((DAT_ram_3fcb5380 == '\0' && (_DAT_ram_3fcb5494 == 0)))))) &&
     ((iVar1 = FUN_ram_4204acb6(1), iVar1 == 0 ||
      ((iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar1 != 0 && (DAT_ram_3fcb538a == '\0')))
      ))) {
    _DAT_ram_3fcb53f0 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(1);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(2);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0x26);
    (**(code **)(_DAT_ram_3fcdfdd8 + 0x19c))(0);
    FUN_ram_4039bbe8();
    if ((DAT_ram_3fcb5545 != '\0') && (iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar1 != 0)
       ) {
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
    }
    (*(code *)&SUB_ram_40011fd4)(0);
    _DAT_ram_3fcb56c0 = _DAT_ram_3fcb56c0 + 1;
    uVar2 = _DAT_ram_3fcb53f0 - _DAT_ram_3fcb53f8;
    iVar1 = (_DAT_ram_3fcb53f4 - _DAT_ram_3fcb53fc) - (uint)(_DAT_ram_3fcb53f0 < uVar2);
    _DAT_ram_3fcb56d4 =
         (uint)(_DAT_ram_3fcb56d0 + uVar2 < _DAT_ram_3fcb56d0) + _DAT_ram_3fcb56d4 + iVar1;
    _DAT_ram_3fcb56dc =
         (uint)(uVar2 + _DAT_ram_3fcb56d8 < _DAT_ram_3fcb56d8) + iVar1 + _DAT_ram_3fcb56dc;
    _DAT_ram_3fcb56d0 = _DAT_ram_3fcb56d0 + uVar2;
    _DAT_ram_3fcb56d8 = uVar2 + _DAT_ram_3fcb56d8;
    FUN_ram_420479e0(2);
    return;
  }
  return;
}

