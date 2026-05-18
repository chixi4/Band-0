
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039ee9a(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
  FUN_ram_4039e52e();
  cVar1 = DAT_ram_3fcc4413;
  if (DAT_ram_3fcc440e == '\0') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcc44f0);
    DAT_ram_3fcc441a = 1;
    FUN_ram_42090384();
  }
  else {
    DAT_ram_3fcc4413 = '\x01';
    FUN_ram_4039e0c4(&DAT_ram_3fcc4400);
    iVar2 = FUN_ram_4039ed68(&DAT_ram_3fcc4400);
    if (((iVar2 == 0) && (iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar2 != 0)) &&
       (iVar2 = FUN_ram_4039f482(), iVar2 != 1)) {
      FUN_ram_4039e168(&DAT_ram_3fcc4400);
    }
    FUN_ram_40393cee(0,2);
    if (DAT_ram_3fcc4401 == '\x02') {
      FUN_ram_4039e2da();
      DAT_ram_3fcc4414 = 0;
      _DAT_ram_3fcc4738 = _DAT_ram_3fcc4738 + 1;
    }
    if (((cVar1 == '\0') &&
        ((iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar2 == 0 || (DAT_ram_3fcc461d == '\0')
         ))) || (DAT_ram_3fcc440f == '\0')) {
      _DAT_ram_3fcc4464 = 0;
      _DAT_ram_3fcc4460 = _DAT_ram_6004d000;
    }
    _DAT_ram_3fcc441e = _DAT_ram_3fcc441e + 1;
    _DAT_ram_3fcc4728 = _DAT_ram_3fcc4728 + 1;
    FUN_ram_420917ba((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    FUN_ram_420905aa();
    FUN_ram_42090ca6();
    if (((DAT_ram_3fcc45d4 != '\0') && (DAT_ram_3fcc440f != '\0')) && (DAT_ram_3fcc4410 == '\0')) {
      FUN_ram_420914ca(0,0);
    }
    FUN_ram_4209168c();
    if (DAT_ram_3fcc4590 == '\0') {
      (*(code *)&SUB_ram_40011f70)();
    }
  }
  FUN_ram_4209039a();
  return;
}

