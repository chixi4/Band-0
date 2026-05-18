
undefined4 FUN_ram_4203c1b6(uint *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else {
    uVar2 = 0x102;
    if (param_1 != (uint *)0x0) {
      FUN_ram_4203bf94(0x102);
      *param_1 = (uint)**(byte **)(gp + -0x2b8);
      FUN_ram_4203bf68();
      uVar2 = 0;
    }
  }
  return uVar2;
}

