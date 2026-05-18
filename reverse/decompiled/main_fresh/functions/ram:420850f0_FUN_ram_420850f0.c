
undefined4 FUN_ram_420850f0(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else if (DAT_ram_3fcc41a9 < 2) {
    uVar2 = 0x3002;
  }
  else {
    uStack_1c = 0x42072b0a;
    uStack_18 = 0;
    uStack_14 = 0;
    FUN_ram_42084f54(&uStack_1c,0);
    uVar2 = 0;
  }
  return uVar2;
}

