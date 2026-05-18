
int FUN_ram_42059db6(undefined4 param_1,undefined1 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  int aiStack_38 [2];
  undefined1 uStack_30;
  
  iVar1 = FUN_ram_4205abcc(param_1,param_3);
  if (iVar1 != 0) {
    aiStack_38[0] = iVar1;
    uStack_30 = param_2;
    iVar2 = FUN_ram_42059d54(0x4204ab1e,aiStack_38);
    if (iVar2 == 0) {
      return iVar1;
    }
    FUN_ram_4205990c(iVar1 + 0x10);
    FUN_ram_4205151c(6,iVar1);
  }
  return 0;
}

