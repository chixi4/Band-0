
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42038516(uint param_1)

{
  undefined4 uVar1;
  int iVar2;
  uint uVar3;
  
  if (param_1 < 0x54) {
    iVar2 = _DAT_ram_3fcb398c + param_1 * 0x34;
    uVar3 = (uint)*(byte *)(iVar2 + 0x21);
    if (uVar3 < 8) {
                    /* WARNING: Could not emulate address calculation at 0x4203857e */
                    /* WARNING: Treating indirect jump as call */
      uVar1 = (**(code **)(uVar3 * 4 + 0x3c078d0c))();
      return uVar1;
    }
    FUN_ram_42033fd8(1,0x102,2,0x3c07f998,uVar3,*(undefined1 *)(iVar2 + 0x20));
    uVar1 = 0x3008;
  }
  else {
    FUN_ram_42033fd8(1,0x102,2,0x3c07fa68);
    uVar1 = 0x102;
  }
  return uVar1;
}

