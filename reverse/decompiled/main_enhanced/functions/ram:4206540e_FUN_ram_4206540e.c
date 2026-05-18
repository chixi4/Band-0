
undefined4 FUN_ram_4206540e(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  if ((*(int *)(iVar1 + 0x2c) == 4) && (iVar3 = FUN_ram_4206536c(), iVar3 == 0)) {
    *(undefined4 *)(iVar1 + 0x34) = 0;
    *(undefined4 *)(iVar1 + 0x38) = 0;
    uVar4 = 5;
    uVar2 = 0;
  }
  else {
    *(undefined4 *)(iVar1 + 0x30) = 0;
    uVar4 = 6;
    uVar2 = 0xffffffff;
  }
  *(undefined4 *)(iVar1 + 0x2c) = uVar4;
  return uVar2;
}

