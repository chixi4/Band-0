
undefined4 FUN_ram_420347f8(int param_1,undefined4 param_2)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined1 auStack_20 [20];
  
  iVar1 = FUN_ram_42034594(param_1,1,0,0);
  if (iVar1 == -1) {
    uVar2 = 0x1c;
  }
  else {
    iVar3 = 3;
    if (param_1 == 3) {
      iVar3 = 6;
    }
    uVar2 = 0x1b;
    if (iVar1 <= iVar3) {
      FUN_ram_42034524(param_1,iVar1,auStack_20);
      uVar2 = 0x10;
      if (param_1 != 3) {
        if (param_1 == 8) {
          uVar2 = 8;
        }
        else {
          uVar2 = 0x17;
          if (param_1 != 7) {
            uVar2 = 0xe;
            if (param_1 != 6) {
              uVar2 = 0x58;
            }
          }
        }
      }
      uVar2 = FUN_ram_420343e8(auStack_20,param_2,uVar2);
    }
  }
  return uVar2;
}

