
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420917ba(int param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44f0);
  DAT_ram_3fcc441a = 1;
  iVar1 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4209048e();
    if ((iVar1 == 0) &&
       ((DAT_ram_3fcc440e == '\0' || ((DAT_ram_3fcc440f != '\0' && (DAT_ram_3fcc461e == '\0')))))) {
      FUN_ram_42090384();
      iVar1 = FUN_ram_42092cdc(1);
      if ((iVar1 != 0) && (DAT_ram_3fcc440f != '\0')) {
        uVar3 = 1;
        uVar2 = 0;
        goto LAB_ram_420918c0;
      }
    }
  }
  else {
    if (DAT_ram_3fcc440f == '\0') {
      _DAT_ram_3fcc4478 = param_1 + _DAT_ram_3fcc4434;
      _DAT_ram_3fcc447c = (uint)(_DAT_ram_3fcc4478 < _DAT_ram_3fcc4434) + param_2;
    }
    else {
      iVar1 = FUN_ram_4039f482();
      _DAT_ram_3fcc4478 = param_1 + iVar1 * _DAT_ram_3fcc4434;
      _DAT_ram_3fcc447c = (uint)(_DAT_ram_3fcc4478 < iVar1 * _DAT_ram_3fcc4434) + param_2;
      if (DAT_ram_3fcc440f != '\0') {
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x1b4))(_DAT_ram_3fcc4434 / 100);
        FUN_ram_42090fde();
        (**(code **)(_DAT_ram_3fcdfdd8 + 0x198))(0,0,_DAT_ram_3fcc443c);
      }
    }
    _DAT_ram_3fcc444c = 0;
    iVar1 = FUN_ram_4209048e();
    if ((iVar1 == 0) &&
       ((DAT_ram_3fcc440e == '\0' || ((DAT_ram_3fcc440f != '\0' && (DAT_ram_3fcc461e == '\0')))))) {
      FUN_ram_42090384();
    }
    if ((_DAT_ram_3fcc4424 == 0) || (DAT_ram_3fcc441b != '\0')) {
      DAT_ram_3fcc441b = '\0';
      uVar3 = 0;
      uVar2 = 1;
LAB_ram_420918c0:
      FUN_ram_420914ca(uVar2,uVar3);
      return;
    }
  }
  return;
}

