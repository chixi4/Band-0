
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4208442e(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined *puVar3;
  
  iVar1 = FUN_ram_4208353e();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (1 < DAT_ram_3fcc41a9) {
    FUN_ram_42083512();
    FUN_ram_4207a038(1,3,1,&DAT_ram_3c0fef3c);
    return 0x3003;
  }
  if (_DAT_ram_3fcdfac0 != 3) {
    if (_DAT_ram_3fcdfac0 == 1) {
      FUN_ram_42083512();
      return 0x3001;
    }
    if (_DAT_ram_3fcdfac0 == 2) {
      FUN_ram_42083512();
      puVar3 = &DAT_ram_3c101e8c;
    }
    else {
      iVar1 = 0;
      if (_DAT_ram_3fcdfac0 != 4) goto LAB_ram_42084512;
      FUN_ram_42083512();
      puVar3 = &DAT_ram_3c101ea8;
    }
    FUN_ram_4207a038(1,2,2,puVar3);
    return 0x3013;
  }
  _DAT_ram_3fcdfac0 = 4;
  FUN_ram_42083512();
  puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
  if (puVar2 == (undefined1 *)0x0) {
    iVar1 = 0x101;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0x42071b12;
    *puVar2 = 0;
    iVar1 = FUN_ram_42082b56();
    if (iVar1 == 0) {
      FUN_ram_42083914();
      FUN_ram_4208353e();
      FUN_ram_42095eb8();
      FUN_ram_42096014();
      FUN_ram_420842e0();
      _DAT_ram_3fcdfac0 = 1;
      goto LAB_ram_42084512;
    }
  }
  FUN_ram_4208353e();
  _DAT_ram_3fcdfac0 = 3;
LAB_ram_42084512:
  FUN_ram_42083512();
  return iVar1;
}

