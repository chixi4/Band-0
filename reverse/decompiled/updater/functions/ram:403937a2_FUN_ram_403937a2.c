
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403937a2(void)

{
  int iVar1;
  int iVar2;
  undefined4 in_a3;
  undefined4 extraout_a3;
  undefined4 in_a4;
  undefined4 extraout_a4;
  
  iVar1 = (**(code **)(_DAT_ram_3fcb640c + 0x48))
                    (0x67,1,4,in_a3,in_a4,*(code **)(_DAT_ram_3fcb640c + 0x48));
  iVar2 = (**(code **)(_DAT_ram_3fcb640c + 0x48))
                    (0x67,1,6,extraout_a3,extraout_a4,*(code **)(_DAT_ram_3fcb640c + 0x48));
  if ((iVar1 == 0x10) && (iVar2 == 0x10)) {
    FUN_ram_420765d8();
    return;
  }
  return;
}

