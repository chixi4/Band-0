
undefined4 FUN_ram_42065442(int param_1,int param_2,int param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar2 = *(int *)(*(int *)(iVar1 + 0x28) + 0x310);
  iVar4 = *(int *)(iVar1 + 0x2c);
  if (iVar4 == 1) {
    iVar4 = FUN_ram_420652cc();
    if (iVar4 == 0) {
      uVar3 = *(undefined4 *)(iVar2 + 4);
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar1 + 0x34) = uVar3;
      *(undefined4 *)(iVar1 + 0x2c) = 2;
      *(undefined4 *)(iVar2 + 8) = *(undefined4 *)(iVar2 + 0x10);
      iVar2 = FUN_ram_4206536c(param_1,param_2);
      if (iVar2 == 0) goto LAB_ram_420654d2;
LAB_ram_4206549c:
      *(undefined4 *)(iVar1 + 0x30) = 0;
    }
    *(undefined4 *)(iVar1 + 0x2c) = 6;
    uVar3 = 0xffffffff;
  }
  else {
    if (iVar4 == 3) {
      iVar4 = *(int *)(iVar1 + 0x34) + *(int *)(iVar1 + 0x38);
      (*(code *)&SUB_ram_40010488)(iVar4,0,param_2 - iVar4);
      *(undefined4 *)(iVar1 + 0x2c) = 2;
      uVar3 = *(undefined4 *)(iVar2 + 0x10);
      *(int *)(iVar1 + 0x34) = param_2;
      *(undefined4 *)(iVar1 + 0x38) = 0;
      *(undefined4 *)(iVar2 + 8) = uVar3;
      *(int *)(iVar2 + 0x28) = *(int *)(iVar2 + 0x28) + 1;
    }
    else if (iVar4 != 2) goto LAB_ram_4206549c;
LAB_ram_420654d2:
    uVar3 = 0;
    *(int *)(iVar1 + 0x38) = *(int *)(iVar1 + 0x38) + param_3;
  }
  return uVar3;
}

