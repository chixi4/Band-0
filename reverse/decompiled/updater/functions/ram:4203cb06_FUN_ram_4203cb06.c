
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203cb06(undefined4 *param_1)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  if (param_1 == (undefined4 *)0x0) {
    (*(code *)&SUB_ram_4001065c)(0x3c072ca0);
    return 0x102;
  }
  iVar1 = FUN_ram_4203c2f2(*param_1);
  if (iVar1 != 0) {
    return iVar1;
  }
  iVar1 = FUN_ram_4203bf94();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (_DAT_ram_3fcdfac0 == 1) {
    iVar1 = FUN_ram_4204d530();
    if (((iVar1 == 0) && (iVar1 = FUN_ram_4204c6d6(param_1[0x1e],param_1[0x1f]), iVar1 == 0)) &&
       (iVar1 = FUN_ram_4203c428(), iVar1 == 0)) {
      _DAT_ram_3fcdfac0 = 2;
      FUN_ram_4203bf68();
      iVar1 = FUN_ram_4203c246(param_1);
      if (iVar1 == 0) {
        puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
        if (puVar2 == (undefined1 *)0x0) {
          iVar1 = 0x101;
        }
        else {
          *puVar2 = 0x26;
          *(undefined4 *)(puVar2 + 4) = 0x4202ac64;
          *(undefined2 *)(puVar2 + 8) = 0;
          puVar2[10] = 0;
          *(undefined4 **)(puVar2 + 0xc) = param_1;
          iVar1 = FUN_ram_4203b75a();
          if (iVar1 == 0) {
            FUN_ram_4203bf94();
            _DAT_ram_3fcdfac0 = 3;
            goto LAB_ram_4203cb5c;
          }
        }
      }
    }
    FUN_ram_4203c1f6();
    FUN_ram_4203bf94();
    FUN_ram_4204d41a();
    FUN_ram_4204d576();
    FUN_ram_4203cada();
    _DAT_ram_3fcdfac0 = 1;
  }
  else {
    iVar1 = 0;
    if (_DAT_ram_3fcdfac0 != 3) {
      if (_DAT_ram_3fcdfac0 == 2) {
        FUN_ram_4203bf68();
        uVar3 = 0x3c07fe3c;
      }
      else {
        if (_DAT_ram_3fcdfac0 != 4) goto LAB_ram_4203cb5c;
        FUN_ram_4203bf68();
        uVar3 = 0x3c07fe58;
      }
      FUN_ram_42033fd8(1,2,2,uVar3);
      return 0x3013;
    }
  }
LAB_ram_4203cb5c:
  FUN_ram_4203bf68();
  return iVar1;
}

