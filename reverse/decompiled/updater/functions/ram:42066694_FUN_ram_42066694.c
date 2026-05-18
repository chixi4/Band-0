
int FUN_ram_42066694(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  int iVar2;
  
  uVar1 = FUN_ram_42066304();
  iVar2 = FUN_ram_42025020(uVar1,param_1,param_2);
  if (iVar2 < 0) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_ram_42025604(param_4,uVar1,param_3);
    iVar2 = iVar2 >> 0x1f;
  }
  FUN_ram_4206636c(uVar1,0);
  return iVar2;
}

