
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201b4ec(int param_1,uint *param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  
  iVar1 = _DAT_ram_3fcb66f8;
  piVar4 = (int *)&DAT_ram_3fcb3598;
  iVar2 = 0;
  while( true ) {
    if (_DAT_ram_3fcb66f8 == iVar2) {
      return 0;
    }
    iVar5 = *piVar4;
    piVar4 = piVar4 + 2;
    if (iVar5 == param_1) break;
    iVar2 = iVar2 + 1;
  }
  iVar2 = iVar2 * 8;
  *param_2 = *(uint *)(&DAT_ram_3fcb359c + iVar2) & 7;
  if (iVar1 != 0x1f) {
    return 1;
  }
  iVar1 = _DAT_ram_3fcb66fc + 1;
  uVar3 = _DAT_ram_3fcb66fc << 3;
  _DAT_ram_3fcb66fc = iVar1;
  *(uint *)(&DAT_ram_3fcb359c + iVar2) = *(uint *)(&DAT_ram_3fcb359c + iVar2) & 7 | uVar3;
  FUN_ram_4201b418();
  if (iVar1 == 0x1fffffff) {
    FUN_ram_4201b3e6();
  }
  return 1;
}

