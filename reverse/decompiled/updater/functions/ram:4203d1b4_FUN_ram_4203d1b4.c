
undefined4 FUN_ram_4203d1b4(void)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else if (DAT_ram_3fcb5119 < 2) {
    uVar2 = 0x3002;
  }
  else {
    DAT_ram_3fcb514b = 1;
    uVar2 = 0;
  }
  return uVar2;
}

