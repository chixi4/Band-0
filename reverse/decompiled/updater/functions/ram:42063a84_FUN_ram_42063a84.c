
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42063a84(undefined4 param_1,undefined4 param_2,undefined4 param_3,int param_4)

{
  undefined4 uVar1;
  
  uVar1 = 0x30;
  if (-1 < (int)(_DAT_ram_3fcb61ec << 0xe)) {
    uVar1 = 0x20;
    if ((_DAT_ram_3fcb61ec & 0x4000c00) != 0) {
      uVar1 = param_2;
    }
  }
  FUN_ram_40399daa(0x3fcb5ffc,param_1,uVar1);
  _DAT_ram_3fcb603c = uVar1;
  if (param_4 != 0) {
    FUN_ram_42062d74(_DAT_ram_3fcb61b8,param_1,0x20,param_3,0,0,0x3fcb6226,0x3fcb6220,
                     _DAT_ram_3fcb61f4,_DAT_ram_3fcb61ec);
  }
  return;
}

