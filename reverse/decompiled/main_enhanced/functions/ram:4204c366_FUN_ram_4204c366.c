
int FUN_ram_4204c366(undefined4 param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_14 [8];
  
  iVar1 = FUN_ram_4204eefa();
  if (iVar1 == 0) {
    FUN_ram_4204eeda(auStack_14);
    uVar2 = FUN_ram_4204e970();
    iVar1 = FUN_ram_4204e9c8(uVar2,param_1);
    if ((iVar1 == 0) || (iVar1 = FUN_ram_4204c2f2(param_1), iVar1 == 0)) {
      iVar3 = FUN_ram_420491d0(1,2,param_1);
      iVar1 = 0x105;
      if (iVar3 != 0) {
        iVar1 = FUN_ram_4204930a(iVar3,0,*(undefined4 *)(iVar3 + 0x10));
      }
    }
    FUN_ram_4204eeea(auStack_14);
  }
  return iVar1;
}

