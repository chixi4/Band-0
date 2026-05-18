
int FUN_ram_42034594(int param_1,int param_2,int param_3,undefined4 param_4)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  undefined1 auStack_a8 [16];
  undefined1 auStack_98 [100];
  
  iVar3 = 3;
  (*(code *)&SUB_ram_40010488)(auStack_98,0,0x58);
  if (param_1 == 3) {
    iVar3 = 6;
  }
  iVar1 = 1;
  iVar4 = 0;
  do {
    FUN_ram_42034524(param_1,iVar1,auStack_a8);
    iVar2 = FUN_ram_4203443c(param_1,auStack_a8,auStack_98);
    if (iVar2 == 0x1102) {
      if (param_2 != 0) {
        return iVar1;
      }
    }
    else {
      if (iVar2 != 0) {
        return -1;
      }
      iVar4 = iVar4 + 1;
      if (param_3 != 0) {
        iVar2 = 0x10;
        if ((((param_1 != 3) && (iVar2 = param_1, param_1 != 8)) && (iVar2 = 0x17, param_1 != 7)) &&
           (iVar2 = 0xe, param_1 != 6)) {
          iVar2 = 0x58;
        }
        iVar2 = FUN_ram_420344de(auStack_98,param_3,param_4,iVar2);
        if ((iVar2 == -1) && (param_2 == 0)) {
          return iVar1;
        }
      }
    }
    iVar1 = iVar1 + 1;
    if (iVar3 < iVar1) {
      iVar3 = iVar3 + 1;
      if ((param_2 == 0) && (iVar3 = -1, param_3 == 0)) {
        iVar3 = iVar4;
      }
      return iVar3;
    }
  } while( true );
}

