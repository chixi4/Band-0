
int FUN_ram_420100b0(int param_1,int param_2,int param_3)

{
  int iVar1;
  undefined4 uVar2;
  
  if (param_1 == 0) {
    return 0x102;
  }
  iVar1 = 0x102;
  if ((param_2 != 0) && (param_3 != 0)) {
    while( true ) {
      uVar2 = FUN_ram_4201025a(param_3,8);
      (*(code *)&SUB_ram_40010488)(param_2,0,uVar2);
      iVar1 = FUN_ram_42010138(param_1,param_2,param_3,0x42000280);
      if (iVar1 != 0x1606) break;
      FUN_ram_40396524(1);
    }
  }
  return iVar1;
}

