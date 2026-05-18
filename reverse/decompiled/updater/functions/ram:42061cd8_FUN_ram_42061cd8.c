
int FUN_ram_42061cd8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  undefined4 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  byte abStack_65 [73];
  
  uVar1 = FUN_ram_4205e4c2();
  iVar2 = FUN_ram_4205e4ae(param_1);
  iVar3 = FUN_ram_42066304();
  iVar4 = FUN_ram_42066388(1);
  iVar5 = FUN_ram_420663cc(uVar1,abStack_65 + 1,0x42,iVar2);
  if ((((iVar5 < 0) || ((abStack_65[iVar2] & 3) != 3)) || (iVar3 == 0)) ||
     (((iVar4 == 0 || (iVar2 = FUN_ram_42066436(uVar1,iVar4,iVar3), iVar2 < 0)) ||
      (iVar2 = FUN_ram_42066578(iVar3,2,iVar3), iVar2 < 0)))) {
    iVar2 = -1;
  }
  else {
    iVar2 = FUN_ram_42066472(param_2,iVar3,uVar1,param_3);
    iVar2 = iVar2 >> 0x1f;
  }
  FUN_ram_4206636c(iVar3,0);
  FUN_ram_4206636c(iVar4,0);
  return iVar2;
}

