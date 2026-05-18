
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_42011aa0(uint param_1,uint param_2,uint param_3,uint param_4)

{
  int iVar1;
  uint *puVar2;
  
  FUN_ram_40394d60();
  if (_DAT_ram_3fcb65ac == 0) {
    _DAT_ram_60008038 = 0;
    _DAT_ram_60008044 = 0xffffffff;
    iVar1 = FUN_ram_420119c8(0x15,0x400,0x40380d1e,0,&DAT_ram_3fcb65ac);
    if (iVar1 != 0) {
      FUN_ram_40394d8e();
      return iVar1;
    }
    _DAT_ram_3fcb0de4 = FUN_ram_4201158a(_DAT_ram_3fcb65ac);
  }
  FUN_ram_40394d8e();
  puVar2 = (uint *)FUN_ram_40390448(0x14,0x800);
  iVar1 = 0x101;
  if (puVar2 != (uint *)0x0) {
    puVar2[3] = param_4;
    puVar2[1] = param_1;
    puVar2[2] = param_2;
    *puVar2 = param_3;
    FUN_ram_40394d60(0x101);
    if ((param_4 & 1) == 0) {
      _DAT_ram_3fcb0dec = ~param_3 & _DAT_ram_3fcb0dec;
    }
    else {
      _DAT_ram_3fcb0dec = param_3 | _DAT_ram_3fcb0dec;
    }
    puVar2[4] = (uint)_DAT_ram_3fcb0de0;
    _DAT_ram_3fcb0de0 = puVar2;
    FUN_ram_40394d8e();
    iVar1 = 0;
  }
  return iVar1;
}

