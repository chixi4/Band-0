
int FUN_ram_4206f864(int param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_28 [20];
  
  iVar1 = FUN_ram_4206f260(param_1,0);
  if (iVar1 == 0) {
    FUN_ram_4206806e(auStack_28);
    iVar1 = FUN_ram_420683d6(auStack_28,param_2,*(undefined4 *)(param_1 + 4));
    if (iVar1 == 0) {
      iVar2 = FUN_ram_42068514(auStack_28,param_1 + 8);
      iVar1 = -4;
      if (iVar2 < 0) {
        uVar3 = *(undefined4 *)(param_1 + 4);
        iVar1 = FUN_ram_420690ea(auStack_28,auStack_28,param_1 + 0x10,param_1 + 8,param_1 + 0x48);
        if (iVar1 == 0) {
          iVar1 = FUN_ram_42068428(auStack_28,param_3,uVar3);
        }
      }
    }
    FUN_ram_42068078(auStack_28);
    if (iVar1 != 0) {
      iVar1 = iVar1 + -0x4280;
    }
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}

