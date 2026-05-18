
int FUN_ram_42033922(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uStack_28;
  undefined2 uStack_24;
  undefined1 uStack_22;
  
  iVar1 = 0;
  iVar3 = 0;
  do {
    if (param_3 <= iVar1) {
      return -1;
    }
    uStack_28 = 0;
    uStack_24 = 0;
    uStack_22 = 0;
    iVar2 = FUN_ram_420338fe(param_1,&uStack_28);
    if ((iVar2 == 0) || (iVar2 = FUN_ram_420338fe(iVar1 * 0x58 + param_2,param_1), iVar2 == 0)) {
      if ((int)(uint)*(byte *)(param_1 + 7) <= iVar3) {
        return iVar1;
      }
      iVar3 = iVar3 + 1;
    }
    iVar1 = iVar1 + 1;
  } while( true );
}

