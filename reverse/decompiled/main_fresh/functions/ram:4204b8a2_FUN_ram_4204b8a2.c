
undefined4 FUN_ram_4204b8a2(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  byte *pbVar4;
  char cVar5;
  undefined1 auStack_28 [20];
  
  if (param_1 == 0) {
    return 0x102;
  }
  iVar1 = FUN_ram_4204b742(param_2);
  if (iVar1 == -1) {
    return 0x106;
  }
  iVar2 = FUN_ram_4204b806(param_1,iVar1);
  if (iVar2 == 0) {
    return 0;
  }
  uVar3 = FUN_ram_4204b742(5);
  iVar2 = FUN_ram_4204b806(auStack_28,uVar3);
  if (iVar2 != 0) {
    return 0xffffffff;
  }
  if (param_2 == 2) {
    FUN_ram_4039c11e(param_1,auStack_28,6);
    cVar5 = *(char *)(param_1 + 5) + '\x02';
  }
  else if (param_2 < 3) {
    if (param_2 == 0) {
      FUN_ram_4039c11e(param_1,auStack_28,6);
      goto LAB_ram_4204b8fc;
    }
    FUN_ram_4039c11e(param_1,auStack_28,6);
    cVar5 = *(char *)(param_1 + 5) + '\x01';
  }
  else {
    if (param_2 != 3) {
      return 0x106;
    }
    FUN_ram_4039c11e(param_1,auStack_28,6);
    cVar5 = *(char *)(param_1 + 5) + '\x03';
  }
  *(char *)(param_1 + 5) = cVar5;
LAB_ram_4204b8fc:
  pbVar4 = (byte *)(gp + -0x410 + iVar1 * 8);
  *pbVar4 = *pbVar4 & 0xf | 0x10;
  FUN_ram_4039c11e(gp + -0x410 + iVar1 * 8 + 2,param_1,pbVar4[1]);
  return 0;
}

