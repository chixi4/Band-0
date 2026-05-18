
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202b8e0(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  if (param_1 == 0x7fffffff) {
    return;
  }
  iVar1 = FUN_ram_403a6802();
  iVar2 = (**(code **)(_DAT_ram_3fcb6a44 + 0x74))(_DAT_ram_3fcb6b8c + 0x14);
  if ((iVar2 != 0) &&
     (iVar2 = FUN_ram_403a67f6(_DAT_ram_3fcb6b8c + 0x14), -1 < (iVar1 + param_1) - iVar2)) {
    uVar3 = FUN_ram_403a67f6(_DAT_ram_3fcb6b8c + 0x14);
    uVar4 = FUN_ram_403a6802();
    if (uVar4 < uVar3) {
      return;
    }
    FUN_ram_403a67f6(_DAT_ram_3fcb6b8c + 0x14);
    FUN_ram_403a6802();
    (**(code **)(_DAT_ram_3fcb6a44 + 0x74))(_DAT_ram_3fcb6b8c + 0x14);
  }
  FUN_ram_4202b892(param_1);
  return;
}

