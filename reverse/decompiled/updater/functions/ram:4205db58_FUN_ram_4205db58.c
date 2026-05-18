
undefined4 FUN_ram_4205db58(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_420390d0();
  if (iVar1 == 0) {
    iVar1 = FUN_ram_4203910e();
    if (iVar1 == 0) {
      iVar1 = FUN_ram_420390fe();
      if (iVar1 == 0) {
        return 0xffffffff;
      }
      uVar2 = FUN_ram_42038f64();
      uVar3 = 4;
    }
    else {
      uVar2 = FUN_ram_42038f64();
      uVar3 = 2;
    }
  }
  else {
    uVar2 = FUN_ram_42038f64();
    uVar3 = 1;
  }
  FUN_ram_42063a0c(uVar3,uVar2);
  return 0;
}

