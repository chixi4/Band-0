
undefined4
FUN_ram_4202c01a(int param_1,uint param_2,undefined4 param_3,uint param_4,undefined1 *param_5)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  undefined1 *puVar5;
  int iStack_28;
  undefined4 auStack_24 [2];
  
  iStack_28 = 0;
  auStack_24[0] = 0;
  if (param_1 == 0) {
    if (param_4 < param_2) {
      return 0xffffbf80;
    }
    uVar2 = param_4 - param_2;
  }
  else {
    uVar2 = FUN_ram_4202be78();
    if (uVar2 == 0) {
      return 0xffffbf80;
    }
    iVar3 = FUN_ram_4203194e(param_1,auStack_24,&iStack_28);
    if (iVar3 != 0) {
      return 0xffffbf80;
    }
    if (uVar2 != param_2) {
      return 0xffffbf80;
    }
    iVar3 = iStack_28 + param_2;
    if (0x7f < iVar3 + 8U) {
      return 0xffffbf80;
    }
    if (iVar3 + 10U < param_2 + 10) {
      return 0xffffbf80;
    }
    if (param_4 < iVar3 + 10U) {
      return 0xffffbf80;
    }
    uVar2 = (param_4 - iVar3) - 10;
  }
  if (uVar2 < 0xb) {
    return 0xffffbf80;
  }
  *param_5 = 0;
  param_5[1] = 1;
  iVar4 = (*(code *)&SUB_ram_40010488)(param_5 + 2,0xff,uVar2 - 3);
  iVar3 = iStack_28;
  puVar5 = (undefined1 *)(iVar4 + (uVar2 - 3));
  *puVar5 = 0;
  if (param_1 == 0) {
    FUN_ram_40399daa(puVar5 + 1,param_3,param_2);
  }
  else {
    puVar5[1] = 0x30;
    puVar5[3] = 0x30;
    cVar1 = (char)iStack_28;
    puVar5[2] = cVar1 + '\b' + (char)param_2;
    puVar5[4] = cVar1 + '\x04';
    puVar5[5] = 6;
    puVar5[6] = cVar1;
    iVar4 = FUN_ram_40399daa(puVar5 + 7,auStack_24[0],iStack_28);
    puVar5 = (undefined1 *)(iVar4 + iVar3);
    *puVar5 = 5;
    puVar5[2] = 4;
    puVar5[1] = 0;
    puVar5[3] = (char)param_2;
    iVar3 = FUN_ram_40399daa(puVar5 + 4,param_3,param_2);
    if (param_5 + param_4 != (undefined1 *)(iVar3 + param_2)) {
      FUN_ram_420293a6(param_5,param_4);
      return 0xffffbf80;
    }
  }
  return 0;
}

