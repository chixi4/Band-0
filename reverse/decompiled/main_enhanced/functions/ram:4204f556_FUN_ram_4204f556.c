
undefined4 FUN_ram_4204f556(undefined4 param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  
  iVar1 = FUN_ram_420491d0(1,2,param_1);
  uVar3 = 0x105;
  if (iVar1 != 0) {
    uVar3 = 0x1119;
    if (*(char *)(iVar1 + 0x29) == '\0') {
      iVar2 = thunk_FUN_ram_403904a6(0x10);
      uVar3 = 0x101;
      if (iVar2 != 0) {
        FUN_ram_4204e942(iVar2,iVar1);
        uVar3 = 0;
        *param_2 = iVar2;
      }
    }
  }
  return uVar3;
}

