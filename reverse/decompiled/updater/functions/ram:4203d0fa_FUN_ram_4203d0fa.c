
undefined4 FUN_ram_4203d0fa(uint param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else if (param_1 < 3) {
    uVar2 = 0x102;
    if (param_2 != 0) {
      FUN_ram_4203bf94(0x102);
      (*(code *)&SUB_ram_40011fd0)(param_1 & 0xff,param_2);
      FUN_ram_4203bf68();
      uVar2 = 0;
    }
  }
  else {
    uVar2 = 0x3004;
  }
  return uVar2;
}

