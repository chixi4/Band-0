
undefined4
FUN_ram_42062846(undefined4 param_1,undefined4 param_2,int param_3,undefined4 param_4,
                undefined4 param_5,int param_6,int param_7)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  char cStack_71;
  undefined1 *puStack_70;
  int iStack_6c;
  undefined4 uStack_68;
  char *pcStack_64;
  undefined4 uStack_60;
  int iStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [40];
  
  cStack_71 = '\x01';
  uStack_60 = 0x20;
  puStack_70 = auStack_50;
  if (param_3 == 0) {
    iStack_6c = 0x3c071e68;
    iStack_5c = 0;
  }
  else {
    iStack_6c = param_3;
    iStack_5c = (*(code *)&SUB_ram_400104a8)(param_3);
    iStack_5c = iStack_5c + 1;
  }
  pcStack_64 = &cStack_71;
  uStack_54 = 1;
  uStack_68 = param_4;
  uStack_58 = param_5;
  iVar1 = FUN_ram_42021b5c(param_1,param_2,3,&iStack_6c,&iStack_5c,auStack_50);
  if (-1 < iVar1) {
    iVar1 = 0;
    do {
      uVar3 = param_7 - iVar1;
      if (0x20 < uVar3) {
        uVar3 = 0x20;
      }
      iVar2 = param_6 + iVar1;
      iVar1 = iVar1 + uVar3;
      FUN_ram_40399daa(iVar2,auStack_50,uVar3);
      if (param_7 == iVar1) {
        thunk_FUN_ram_420293a6(auStack_50,0x20);
        return 0;
      }
      if (cStack_71 == -1) break;
      cStack_71 = cStack_71 + '\x01';
      iVar2 = FUN_ram_42021b5c(param_1,param_2,4,&puStack_70,&uStack_60,auStack_50);
    } while (-1 < iVar2);
    (*(code *)&SUB_ram_40010488)(param_6,0,param_7);
    thunk_FUN_ram_420293a6(auStack_50,0x20);
  }
  return 0xffffffff;
}

