
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208430c(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    (*(code *)&SUB_ram_4001065c)(&DAT_ram_3c0c47fc);
    return 0x102;
  }
  iVar1 = FUN_ram_42083a10(*param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4208353e();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (_DAT_ram_3fcdfac0 == 1) {
    iVar1 = FUN_ram_42095fce();
    if (((iVar1 == 0) && (iVar1 = FUN_ram_42095174(param_1[0x1e],param_1[0x1f]), iVar1 == 0)) &&
       (iVar1 = FUN_ram_42083c2e(), iVar1 == 0)) {
      _DAT_ram_3fcdfac0 = 2;
      FUN_ram_42083512();
      iVar1 = FUN_ram_42083964(param_1);
      if (iVar1 == 0) {
        puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
        if (puVar2 == (undefined1 *)0x0) {
          iVar1 = 0x101;
        }
        else {
          *puVar2 = 0x26;
          *(undefined4 *)(puVar2 + 4) = 0x42071a3c;
          *(undefined2 *)(puVar2 + 8) = 0;
          puVar2[10] = 0;
          *(undefined4 **)(puVar2 + 0xc) = param_1;
          iVar1 = FUN_ram_42082b56();
          if (iVar1 == 0) {
            FUN_ram_4208353e();
            _DAT_ram_3fcdfac0 = 3;
            goto LAB_ram_42084362;
          }
        }
      }
    }
    FUN_ram_42083914();
    FUN_ram_4208353e();
    FUN_ram_42095eb8();
    FUN_ram_42096014();
    FUN_ram_420842e0();
    _DAT_ram_3fcdfac0 = 1;
  }
  else {
    iVar1 = 0;
    if (_DAT_ram_3fcdfac0 != 3) {
      if (_DAT_ram_3fcdfac0 == 2) {
        FUN_ram_42083512();
        puVar3 = &DAT_ram_3c101e54;
      }
      else {
        if (_DAT_ram_3fcdfac0 != 4) goto LAB_ram_42084362;
        FUN_ram_42083512();
        puVar3 = &DAT_ram_3c101e70;
      }
      FUN_ram_4207a038(1,2,2,puVar3);
      return 0x3013;
    }
  }
LAB_ram_42084362:
  FUN_ram_42083512();
  return iVar1;
}

