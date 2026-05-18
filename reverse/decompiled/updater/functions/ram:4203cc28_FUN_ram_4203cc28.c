
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4203cc28(void)

{
  int iVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4203bf94();
  if (iVar1 != 0) {
    return iVar1;
  }
  if (1 < DAT_ram_3fcb5119) {
    FUN_ram_4203bf68();
    FUN_ram_42033fd8(1,3,1,0x3c07d7ac);
    return 0x3003;
  }
  if (_DAT_ram_3fcdfac0 != 3) {
    if (_DAT_ram_3fcdfac0 == 1) {
      FUN_ram_4203bf68();
      return 0x3001;
    }
    if (_DAT_ram_3fcdfac0 == 2) {
      FUN_ram_4203bf68();
      uVar3 = 0x3c07fe74;
    }
    else {
      iVar1 = 0;
      if (_DAT_ram_3fcdfac0 != 4) goto LAB_ram_4203cd0c;
      FUN_ram_4203bf68();
      uVar3 = 0x3c07fe90;
    }
    FUN_ram_42033fd8(1,2,2,uVar3);
    return 0x3013;
  }
  _DAT_ram_3fcdfac0 = 4;
  FUN_ram_4203bf68();
  puVar2 = (undefined1 *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x18);
  if (puVar2 == (undefined1 *)0x0) {
    iVar1 = 0x101;
  }
  else {
    *(undefined4 *)(puVar2 + 4) = 0x4202ad3a;
    *puVar2 = 0;
    iVar1 = FUN_ram_4203b75a();
    if (iVar1 == 0) {
      FUN_ram_4203c1f6();
      FUN_ram_4203bf94();
      FUN_ram_4204d41a();
      FUN_ram_4204d576();
      FUN_ram_4203cada();
      _DAT_ram_3fcdfac0 = 1;
      goto LAB_ram_4203cd0c;
    }
  }
  FUN_ram_4203bf94();
  _DAT_ram_3fcdfac0 = 3;
LAB_ram_4203cd0c:
  FUN_ram_4203bf68();
  return iVar1;
}

