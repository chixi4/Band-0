
byte FUN_ram_42031542(undefined4 param_1,undefined4 param_2,int *param_3,int *param_4)

{
  byte bVar1;
  int iVar2;
  int iVar3;
  
  iVar2 = FUN_ram_420365de();
  if (iVar2 == 0) {
    iVar3 = 0;
    bVar1 = 7;
  }
  else {
    iVar3 = FUN_ram_420363e2(iVar2,param_2);
    bVar1 = -(iVar3 == 0) & 7;
  }
  if (param_3 != (int *)0x0) {
    *param_3 = iVar2;
  }
  if (param_4 != (int *)0x0) {
    *param_4 = iVar3;
  }
  return bVar1;
}

