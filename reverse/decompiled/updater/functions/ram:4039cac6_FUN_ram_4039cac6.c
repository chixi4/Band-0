
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4039cac6(void)

{
  char cVar1;
  int iVar2;
  undefined8 uVar3;
  
  uVar3 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x108))();
  FUN_ram_4039c15a();
  cVar1 = DAT_ram_3fcb5383;
  if (DAT_ram_3fcb537e == '\0') {
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xe4))(0x3fcb5460);
    DAT_ram_3fcb538a = 1;
    FUN_ram_4204797c();
  }
  else {
    DAT_ram_3fcb5383 = '\x01';
    FUN_ram_4039bcf0(&DAT_ram_3fcb5370);
    iVar2 = FUN_ram_4039c994(&DAT_ram_3fcb5370);
    if (((iVar2 == 0) && (iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar2 != 0)) &&
       (iVar2 = FUN_ram_4039d0ae(), iVar2 != 1)) {
      FUN_ram_4039bd94(&DAT_ram_3fcb5370);
    }
    FUN_ram_40392eec(0,2);
    if (DAT_ram_3fcb5371 == '\x02') {
      FUN_ram_4039bf06();
      DAT_ram_3fcb5384 = 0;
      _DAT_ram_3fcb56a8 = _DAT_ram_3fcb56a8 + 1;
    }
    if (((cVar1 == '\0') &&
        ((iVar2 = (**(code **)(_DAT_ram_3fcdfdd8 + 400))(), iVar2 == 0 || (DAT_ram_3fcb558d == '\0')
         ))) || (DAT_ram_3fcb537f == '\0')) {
      _DAT_ram_3fcb53d4 = 0;
      _DAT_ram_3fcb53d0 = _DAT_ram_6004d000;
    }
    _DAT_ram_3fcb538e = _DAT_ram_3fcb538e + 1;
    _DAT_ram_3fcb5698 = _DAT_ram_3fcb5698 + 1;
    FUN_ram_42048db2((int)uVar3,(int)((ulonglong)uVar3 >> 0x20));
    FUN_ram_42047ba2();
    FUN_ram_4204829e();
    if (((DAT_ram_3fcb5544 != '\0') && (DAT_ram_3fcb537f != '\0')) && (DAT_ram_3fcb5380 == '\0')) {
      FUN_ram_42048ac2(0,0);
    }
    FUN_ram_42048c84();
    if (DAT_ram_3fcb5500 == '\0') {
      (*(code *)&SUB_ram_40011f70)();
    }
  }
  FUN_ram_42047992();
  return;
}

