
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42090ca6(void)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (((iVar2 != 0) && (DAT_ram_3fcc440f != '\0')) &&
     (uVar1 = (uint)DAT_ram_3fcc440c, uVar3 = FUN_ram_4039f482(), uVar1 != uVar3)) {
    iVar2 = FUN_ram_4039f482();
    DAT_ram_3fcc440c = (byte)iVar2;
    FUN_ram_42096928(iVar2 * _DAT_ram_3fcc4434);
    FUN_ram_42090c90();
    return;
  }
  return;
}

