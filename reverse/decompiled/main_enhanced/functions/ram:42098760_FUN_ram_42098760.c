
undefined4 FUN_ram_42098760(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_4207f23c();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4207f27a();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4207f26a();
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar2 = FUN_ram_4207f07a();
      uVar3 = 4;
    }
    else {
      uVar2 = FUN_ram_4207f07a();
      uVar3 = 2;
    }
  }
  else {
    uVar2 = FUN_ram_4207f07a();
    uVar3 = 1;
  }
  FUN_ram_4209db2c(uVar3,uVar2);
  return 0;
}

