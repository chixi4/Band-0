
undefined4 FUN_ram_4207fd8a(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else {
    uVar2 = 0x102;
    if (param_1 != 0) {
      uStack_1c = 0x4206efa4;
      uStack_14 = 0;
      iStack_18 = param_1;
      uVar2 = FUN_ram_42084f54(&uStack_1c,1);
    }
  }
  return uVar2;
}

