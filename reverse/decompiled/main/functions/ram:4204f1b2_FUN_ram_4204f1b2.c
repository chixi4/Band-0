
int FUN_ram_4204f1b2(int *param_1)

{
  short sVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  
  if (param_1[5] == 0) {
    iVar2 = 0x110b;
  }
  else {
    if (param_1[5] != 1) {
      iVar2 = FUN_ram_4204f15c();
      return iVar2;
    }
    uVar3 = 0;
    iVar5 = 0;
    for (iVar2 = *param_1; iVar2 != 0; iVar2 = *(int *)(iVar2 + 4)) {
      uVar4 = 0x7e - *(ushort *)(iVar2 + 0x40);
      iVar6 = iVar2;
      if (uVar4 <= uVar3) {
        uVar4 = uVar3;
        iVar6 = iVar5;
      }
      uVar3 = uVar4;
      iVar5 = iVar6;
    }
    iVar2 = 0x1105;
    if (uVar3 != 0) {
      sVar1 = *(short *)(iVar5 + 0x40);
      iVar2 = FUN_ram_4204c5ce(iVar5);
      if ((iVar2 == 0) && (iVar2 = FUN_ram_4204f15c(param_1), iVar2 == 0)) {
        iVar6 = param_1[1];
        iVar2 = FUN_ram_4204c7ae(iVar5,iVar6);
        if (((iVar2 == 0) || (iVar2 == 0x1102)) && (iVar2 = FUN_ram_4204c58e(iVar5), iVar2 == 0)) {
          if (*(short *)(iVar6 + 0x40) == sVar1) {
            FUN_ram_4204f124(param_1,iVar5);
            FUN_ram_4204f108(param_1 + 3,iVar5);
          }
          else {
            iVar2 = -1;
          }
        }
      }
    }
  }
  return iVar2;
}

