
undefined4 FUN_ram_42059768(int *param_1,int param_2)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_ram_40395430(1,0,3);
  *param_1 = iVar1;
  if (iVar1 == 0) {
    uVar2 = 0xffffffff;
  }
  else {
    if (param_2 == 1) {
      FUN_ram_40395514(iVar1,0,0,0);
    }
    uVar2 = 0;
  }
  return uVar2;
}

