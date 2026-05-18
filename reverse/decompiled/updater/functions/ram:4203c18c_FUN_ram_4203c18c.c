
undefined4 FUN_ram_4203c18c(undefined4 *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_4203c15c();
  if (iVar1 == 0) {
    uVar2 = 0x3001;
  }
  else {
    uVar2 = 0x102;
    if (param_1 != (undefined4 *)0x0) {
      uVar2 = 0;
      *param_1 = *(undefined4 *)(gp + -0x1d4);
    }
  }
  return uVar2;
}

