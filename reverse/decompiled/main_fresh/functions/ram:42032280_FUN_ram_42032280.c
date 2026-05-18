
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42032280(int *param_1)

{
  int iVar1;
  int iVar2;
  
  if (*(int *)(_DAT_ram_3fcb6bb8 + 0x30) < 1) {
    *param_1 = 0;
    param_1[1] = 0;
  }
  else {
    iVar2 = (*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6bb8 + 0x10);
    *param_1 = iVar2;
    iVar1 = _DAT_ram_3fcb6bb8;
    if (iVar2 == 0) {
      return 6;
    }
    FUN_ram_4039c11e(iVar2,*(undefined4 *)(_DAT_ram_3fcb6bb8 + 0x2c),
                     *(int *)(_DAT_ram_3fcb6bb8 + 0x30) << 2);
    param_1[1] = *(int *)(iVar1 + 0x30);
  }
  return 0;
}

