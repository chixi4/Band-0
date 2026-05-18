
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42025fe0(int param_1)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  int iVar4;
  
  if (param_1 == 0) {
    return 3;
  }
  uVar3 = (*(code *)&SUB_ram_400104a8)();
  if (uVar3 < 0x20) {
    if ((_DAT_ram_3fcb6b64 != (int *)0x0) ||
       (_DAT_ram_3fcb6b64 = (int *)FUN_ram_403a5e02(1,8), _DAT_ram_3fcb6b64 != (int *)0x0)) {
      if (*_DAT_ram_3fcb6b64 != 0) {
        FUN_ram_403a5e1e();
      }
      piVar1 = _DAT_ram_3fcb6b64;
      iVar4 = FUN_ram_403a5e02(1,uVar3 + 1);
      piVar2 = _DAT_ram_3fcb6b64;
      *piVar1 = iVar4;
      if (*piVar2 != 0) {
        FUN_ram_4039c11e(*piVar2,param_1,uVar3);
        *(undefined1 *)(*_DAT_ram_3fcb6b64 + uVar3) = 0;
        return 0;
      }
    }
    return 6;
  }
  return 3;
}

