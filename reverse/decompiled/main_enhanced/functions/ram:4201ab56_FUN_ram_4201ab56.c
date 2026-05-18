
void FUN_ram_4201ab56(undefined4 param_1,int param_2,undefined4 param_3,int param_4)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar4 = 0;
  if (param_4 == 0) {
    do {
      iVar1 = 0x10;
      iVar5 = param_2 + iVar4;
      do {
        iVar2 = FUN_ram_4201a754(iVar1,iVar5,0x10,param_2,0xa8,0x1a,4);
        if ((iVar2 != 0) &&
           (iVar2 = FUN_ram_4201a754(iVar1,iVar5,0x11,param_2 + 1,0xa6,0x18,3), iVar2 == 0)) {
          FUN_ram_4201a9f0(param_1,iVar1,iVar5);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xb8);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1a);
    uVar3 = 3;
  }
  else {
    do {
      iVar1 = 0x10;
      do {
        iVar5 = FUN_ram_4201a754(iVar1,iVar4 + param_2,0x10,param_2,0xa8,0x1a,4);
        if (iVar5 != 0) {
          FUN_ram_4201a9f0(param_1,iVar1,iVar4 + param_2);
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 != 0xb8);
      iVar4 = iVar4 + 1;
    } while (iVar4 != 0x1a);
    uVar3 = 0;
  }
  FUN_ram_4201f3fe((param_2 + 5) * 0x10000 >> 0x10,param_3,uVar3);
  return;
}

