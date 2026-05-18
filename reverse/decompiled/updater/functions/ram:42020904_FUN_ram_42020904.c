
int FUN_ram_42020904(int *param_1)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (param_1[5] == 0) {
    iVar1 = 0x110b;
  }
  else {
    if (param_1[5] != 1) {
      iVar1 = FUN_ram_420208ae();
      return iVar1;
    }
    uVar2 = 0;
    iVar4 = 0;
    for (iVar1 = *param_1; iVar1 != 0; iVar1 = *(int *)(iVar1 + 4)) {
      uVar3 = 0x7e - *(ushort *)(iVar1 + 0x40);
      iVar5 = iVar1;
      if (uVar3 <= uVar2) {
        uVar3 = uVar2;
        iVar5 = iVar4;
      }
      uVar2 = uVar3;
      iVar4 = iVar5;
    }
    iVar1 = 0x1105;
    if ((((uVar2 != 0) && (iVar1 = FUN_ram_4201f8d2(iVar4), iVar1 == 0)) &&
        (iVar1 = FUN_ram_420208ae(param_1), iVar1 == 0)) &&
       (((iVar1 = FUN_ram_4201fab2(iVar4,param_1[1]), iVar1 == 0 || (iVar1 == 0x1102)) &&
        (iVar1 = FUN_ram_4201f892(iVar4), iVar1 == 0)))) {
      FUN_ram_42020876(param_1,iVar4);
      FUN_ram_4202085a(param_1 + 3,iVar4);
    }
  }
  return iVar1;
}

