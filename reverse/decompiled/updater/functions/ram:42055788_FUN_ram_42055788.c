
undefined4 FUN_ram_42055788(int param_1)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_4205074c(*(int *)(param_1 + 0x54) + -1);
  iVar2 = FUN_ram_42054a7c(param_1,0,uVar1);
  if (iVar2 != 0) {
    uVar1 = FUN_ram_42054938(param_1,iVar2,param_1,param_1 + 4);
    return uVar1;
  }
  return 0xffffffff;
}

