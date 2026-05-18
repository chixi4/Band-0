
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42064b86(int param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  thunk_FUN_ram_40390608(_DAT_ram_3fcb623c);
  if ((param_1 == 0) || (param_2 == 0)) {
    _DAT_ram_3fcb623c = 0;
    _DAT_ram_3fcb6248 = 0;
  }
  else {
    _DAT_ram_3fcb623c = FUN_ram_42022974(param_1,param_2);
    if (_DAT_ram_3fcb623c == 0) {
      return 0xffffffff;
    }
    _DAT_ram_3fcb6248 = param_2;
    _DAT_ram_3fcb61fc = FUN_ram_42038f6e(0);
    uVar1 = FUN_ram_420390b0();
    iVar2 = FUN_ram_42039020();
    if ((iVar2 != 2) && (iVar2 = FUN_ram_42065a22(uVar1), iVar2 != 0)) {
      DAT_ram_3fcb6200 = 1;
    }
  }
  return 0;
}

