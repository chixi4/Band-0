
undefined4 FUN_ram_4206536c(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar2 = *(int *)(param_1 + 0x18);
  iVar1 = *(int *)(iVar2 + 0x44) -
          (param_2 - *(int *)(*(int *)(*(int *)(iVar2 + 0x28) + 0x310) + 4));
  if (iVar1 < 0) {
    uVar3 = 0x103;
  }
  else if ((iVar1 == 0) ||
          (iVar4 = FUN_ram_420660de(*(int *)(iVar2 + 0x28),param_2,iVar1), iVar1 == iVar4)) {
    *(int *)(iVar2 + 0x40) = iVar1;
    FUN_ram_420a250c(param_1,1);
    *(undefined1 *)(iVar2 + 0x3c) = 1;
    uVar3 = 0;
  }
  else {
    uVar3 = 0xffffffff;
  }
  return uVar3;
}

