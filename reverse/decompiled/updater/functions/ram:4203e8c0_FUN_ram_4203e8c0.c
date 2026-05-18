
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203e8c0(undefined1 *param_1)

{
  int iVar1;
  
  iVar1 = FUN_ram_4203e862();
  if (iVar1 == 0) {
    FUN_ram_42033fd8(1,5,1,0x3c07d858,*param_1,param_1[1],param_1[2],param_1[3],param_1[4],
                     param_1[5]);
    iVar1 = 1;
  }
  else {
    FUN_ram_42033fd8(1,5,4,0x3c07b7ac,*(undefined1 *)(iVar1 + 4),*(undefined1 *)(iVar1 + 5),
                     *(undefined1 *)(iVar1 + 6),*(undefined1 *)(iVar1 + 7),
                     *(undefined1 *)(iVar1 + 8),*(undefined1 *)(iVar1 + 9));
    iVar1 = FUN_ram_4203d8a6(iVar1);
    if (iVar1 == 0) {
      _DAT_ram_3fcb3fe8 = _DAT_ram_3fcb3fe8 & 0xffffffef;
    }
    else if (iVar1 == 1) {
      _DAT_ram_3fcb4ef4 = _DAT_ram_3fcb4ef4 | 0x140;
    }
  }
  return iVar1;
}

