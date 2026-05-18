
undefined4 FUN_ram_4208d5e4(code *param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_42090912(param_1,0);
  if (iVar1 == 0) {
    (*param_1)(0,0);
    uVar2 = 0;
  }
  else {
    uVar2 = 0;
    if (iVar1 == 2) {
      FUN_ram_4207a038(1,8,2,&DAT_ram_3c102294);
      uVar2 = 0xffffffff;
    }
  }
  return uVar2;
}

