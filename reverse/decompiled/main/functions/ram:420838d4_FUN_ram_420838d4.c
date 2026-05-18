
undefined4 FUN_ram_420838d4(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4208387a();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else {
    uVar2 = 0x102;
    if (param_1 != (uint *)0x0) {
      FUN_ram_4208353e(0x102);
      *param_1 = (uint)**(byte **)(gp + -0xb4);
      FUN_ram_42083512();
      uVar2 = 0;
    }
  }
  return uVar2;
}

