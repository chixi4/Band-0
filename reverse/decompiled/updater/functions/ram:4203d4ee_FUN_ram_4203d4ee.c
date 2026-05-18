
undefined4 FUN_ram_4203d4ee(void)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else if (DAT_ram_3fcb5119 < 2) {
    uVar2 = 0x3002;
  }
  else {
    uStack_1c = 0x4202b70e;
    uStack_18 = 0;
    uStack_14 = 0;
    FUN_ram_4203d352(&uStack_1c,0);
    uVar2 = 0;
  }
  return uVar2;
}

