
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42040e62(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = _DAT_ram_3fcb4f84;
  if (_DAT_ram_3fcb4f84 == 0) {
    uVar2 = 0x3007;
  }
  else {
    uVar2 = 0;
    if ((*(byte *)(_DAT_ram_3fcb4f84 + 0x129) & 2) == 0) {
      uVar5 = (uint)DAT_ram_3fcb5108;
      if (_DAT_ram_3fcb50e8 != (undefined4 *)0x0) {
        _DAT_ram_3fcb509c = &DAT_ram_3fcb5098;
        _DAT_ram_3fcb5098 = 0;
        (*(code *)*_DAT_ram_3fcb50e8)(0);
      }
      FUN_ram_4204dddc();
      FUN_ram_42033fd8(1,1,3,0x3c07e6f0);
      iVar3 = FUN_ram_42040e52();
      if (iVar3 != 0) {
        uVar4 = thunk_FUN_ram_4204993a();
        *(short *)(iVar1 + 0x212) = (short)(uVar4 / 1000000);
      }
      FUN_ram_42049be4(0,0,param_1,0,(int)uVar5 >> 4 & 1,DAT_ram_3fcb5104);
      FUN_ram_42033fd8(1,4,4,0x3c07c510,*(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128),0);
      *(undefined1 *)(_DAT_ram_3fcb4f84 + 0x128) = 0;
      *(byte *)(iVar1 + 0x129) = *(byte *)(iVar1 + 0x129) | 2;
      FUN_ram_4203bea0(2,0,0);
      uVar2 = 0;
    }
  }
  return uVar2;
}

