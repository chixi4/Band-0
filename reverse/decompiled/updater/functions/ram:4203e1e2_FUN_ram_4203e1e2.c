
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4203e1e2(void)

{
  int iVar1;
  undefined1 uVar2;
  int iVar3;
  
  iVar1 = _DAT_ram_3fcb4f84;
  FUN_ram_42033fd8(1,4,3,0x3c07e534,DAT_ram_3fcb5114);
  uVar2 = DAT_ram_3fcb5115;
  if ((iVar1 != 0) && (iVar3 = *(int *)(iVar1 + 0xe4), iVar3 != 0)) {
    *(undefined1 *)(iVar3 + 0xac) = DAT_ram_3fcb5115;
    *(undefined1 *)(iVar1 + 299) = uVar2;
    uVar2 = DAT_ram_3fcb5114;
    *(undefined1 *)(iVar3 + 0xab) = DAT_ram_3fcb5114;
    *(undefined1 *)(iVar1 + 0x12a) = uVar2;
    FUN_ram_42033fd8(1,0xc000,4,0x3c07b7ec);
  }
  FUN_ram_42036888(&DAT_ram_3fcb5114);
  if (_DAT_ram_3fcb4f18 != 0) {
    FUN_ram_4203d8a6();
    _DAT_ram_3fcb4f18 = 0;
  }
  DAT_ram_3fcb5117 = 0;
  return 0;
}

