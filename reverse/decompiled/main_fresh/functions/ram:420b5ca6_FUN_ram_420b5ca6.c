
int FUN_ram_420b5ca6(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_40390474(0x54,param_4);
  if (iVar1 == 0) {
    return 0;
  }
  if (param_3 == 1) {
    uVar3 = 1;
  }
  else {
    if (param_3 == 2) {
      iVar2 = FUN_ram_40397100(param_1,param_2,iVar1);
      goto LAB_ram_420b5cf2;
    }
    if (param_3 == 3) {
      iVar2 = FUN_ram_40396fee(1,0,0,iVar1);
      goto LAB_ram_420b5cf2;
    }
    uVar3 = 4;
  }
  iVar2 = FUN_ram_403972a6(uVar3,iVar1);
LAB_ram_420b5cf2:
  if (iVar2 == 0) {
    FUN_ram_40390634(iVar1);
  }
  return iVar2;
}

