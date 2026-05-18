
undefined4 FUN_ram_420398d6(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  int iStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else {
    uVar2 = 0x102;
    if (param_1 != 0) {
      uStack_1c = 0x42028ed4;
      uStack_14 = 0;
      iStack_18 = param_1;
      uVar2 = FUN_ram_4203d352(&uStack_1c,1);
    }
  }
  return uVar2;
}

