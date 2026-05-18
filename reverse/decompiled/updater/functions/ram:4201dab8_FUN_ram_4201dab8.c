
int FUN_ram_4201dab8(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [8];
  
  iVar1 = FUN_ram_4201f51c();
  if (iVar1 == 0) {
    FUN_ram_4201f4fc(auStack_14);
    uVar2 = FUN_ram_4201ef92();
    iVar1 = FUN_ram_4201efea(uVar2,param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_ram_4201da44(param_1), iVar1 == 0)) {
      iVar3 = FUN_ram_42019344(1,2,param_1);
      iVar1 = 0x105;
      if (iVar3 != 0) {
        iVar1 = FUN_ram_420195a0(iVar3,0,*(undefined4 *)(iVar3 + 0x10));
      }
    }
    FUN_ram_4201f50c(auStack_14);
  }
  return iVar1;
}

