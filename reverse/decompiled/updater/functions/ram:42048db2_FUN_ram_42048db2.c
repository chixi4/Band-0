
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42048db2(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
  DAT_ram_3fcb538a = 1;
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_42047a86();
    if ((iVar1 == 0) &&
       ((DAT_ram_3fcb537e == '\0' || ((DAT_ram_3fcb537f != '\0' && (DAT_ram_3fcb558e == '\0')))))) {
      FUN_ram_4204797c();
      iVar1 = FUN_ram_4204a2c4(1);
      if ((iVar1 != 0) && (DAT_ram_3fcb537f != '\0')) {
        uVar3 = 1;
        uVar2 = 0;
        goto LAB_ram_42048eb8;
      }
    }
  }
  else {
    if (DAT_ram_3fcb537f == '\0') {
      _DAT_ram_3fcb53e8 = param_1 + _DAT_ram_3fcb53a4;
      _DAT_ram_3fcb53ec = (uint)(_DAT_ram_3fcb53e8 < _DAT_ram_3fcb53a4) + param_2;
    }
    else {
      iVar1 = FUN_ram_4039d0ae();
      _DAT_ram_3fcb53e8 = param_1 + iVar1 * _DAT_ram_3fcb53a4;
      _DAT_ram_3fcb53ec = (uint)(_DAT_ram_3fcb53e8 < iVar1 * _DAT_ram_3fcb53a4) + param_2;
      if (DAT_ram_3fcb537f != '\0') {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(_DAT_ram_3fcb53a4 / 100);
        FUN_ram_420485d6();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(0,0,_DAT_ram_3fcb53ac);
      }
    }
    _DAT_ram_3fcb53bc = 0;
    iVar1 = FUN_ram_42047a86();
    if ((iVar1 == 0) &&
       ((DAT_ram_3fcb537e == '\0' || ((DAT_ram_3fcb537f != '\0' && (DAT_ram_3fcb558e == '\0')))))) {
      FUN_ram_4204797c();
    }
    if ((_DAT_ram_3fcb5394 == 0) || (DAT_ram_3fcb538b != '\0')) {
      DAT_ram_3fcb538b = '\0';
      uVar3 = 0;
      uVar2 = 1;
LAB_ram_42048eb8:
      FUN_ram_42048ac2(uVar2,uVar3);
      return;
    }
  }
  return;
}

