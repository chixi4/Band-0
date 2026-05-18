
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204829e(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (((iVar2 != 0) && (DAT_ram_3fcb537f != '\0')) &&
     (uVar1 = (uint)DAT_ram_3fcb537c, uVar3 = FUN_ram_4039d0ae(), uVar1 != uVar3)) {
    iVar2 = FUN_ram_4039d0ae();
    DAT_ram_3fcb537c = (byte)iVar2;
    FUN_ram_4204de5c(iVar2 * _DAT_ram_3fcb53a4);
    FUN_ram_42048288();
    return;
  }
  return;
}

