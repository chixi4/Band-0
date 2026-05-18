
undefined4 FUN_ram_4209f01c(char *param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  undefined4 uVar2;
  
  cVar1 = *param_1;
  if (param_2 != 0) {
    if (cVar1 == '0') {
      uVar2 = FUN_ram_4209c1ca();
      return uVar2;
    }
    if (cVar1 == -0xc) {
      uVar2 = FUN_ram_4209c174();
      return uVar2;
    }
  }
  if (cVar1 != 'D') {
    uVar2 = FUN_ram_4209c3e0(param_1,param_2,param_3);
    return uVar2;
  }
  return 0;
}

