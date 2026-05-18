
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420188d0(int param_1)

{
  int *piVar1;
  
  piVar1 = (int *)FUN_ram_40399d1a(1,0x34);
  if (piVar1 != (int *)0x0) {
    piVar1[0xb] = (int)_DAT_ram_3fcb66b0;
    if (_DAT_ram_3fcb66b0 != (int *)0x0) {
      _DAT_ram_3fcb66b0[0xc] = (int)(piVar1 + 0xb);
    }
    _DAT_ram_3fcb66b0 = piVar1;
    piVar1[0xc] = (int)&DAT_ram_3fcb66b0;
    piVar1[1] = param_1;
    piVar1[2] = param_1;
    _DAT_ram_3fcb66ac = _DAT_ram_3fcb66ac + 1;
    *(undefined1 *)(piVar1 + 3) = 0;
    *piVar1 = _DAT_ram_3fcb66ac;
  }
  return;
}

