
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4204834e(undefined4 *param_1)

{
  int iVar1;
  int iVar2;
  
  iVar1 = _DAT_ram_3fcb56bc;
  if (param_1 != (undefined4 *)0x0) {
    iVar2 = (*(code *)&SUB_ram_40010a00)(*param_1,param_1[1],_DAT_ram_3fcb53a4,0);
    _DAT_ram_3fcb56bc = (uint)(iVar2 - iVar1) / _DAT_ram_3fcb569c + iVar1;
    return;
  }
  return;
}

