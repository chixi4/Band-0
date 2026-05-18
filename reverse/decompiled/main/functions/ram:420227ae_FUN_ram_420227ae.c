
undefined4 FUN_ram_420227ae(undefined1 *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 uVar4;
  
  iVar1 = (*(code *)&SUB_ram_400104a8)();
  if (iVar1 == 0xc) {
    iVar1 = 0;
    do {
      iVar2 = FUN_ram_42022776(*param_1);
      iVar3 = FUN_ram_42022776(param_1[1]);
      if ((iVar2 == -1) || (iVar3 == -1)) goto LAB_ram_42022818;
      *(byte *)(param_2 + iVar1) = (byte)iVar3 | (byte)(iVar2 << 4);
      iVar1 = iVar1 + 1;
      param_1 = param_1 + 2;
    } while (iVar1 != 6);
    uVar4 = 1;
  }
  else {
LAB_ram_42022818:
    uVar4 = 0;
  }
  return uVar4;
}

