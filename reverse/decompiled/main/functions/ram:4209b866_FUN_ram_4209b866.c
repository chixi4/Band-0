
undefined4
FUN_ram_4209b866(int param_1,int param_2,char *param_3,uint param_4,int param_5,uint param_6)

{
  char cVar1;
  int iVar2;
  undefined4 uVar3;
  uint uVar4;
  uint uVar5;
  undefined1 auStack_54 [4];
  uint uStack_50;
  int iStack_4c;
  uint uStack_48;
  uint uStack_44;
  uint uStack_40;
  int iStack_3c;
  undefined4 uStack_38;
  
  (*(code *)&SUB_ram_40010488)(auStack_54,0,0x24);
  if (param_1 == 0) {
    return 5;
  }
  if (param_2 == 0) {
    return 5;
  }
  if (param_3 == (char *)0x0) {
    return 1;
  }
  if (param_4 == 0) {
    return 1;
  }
  uVar5 = 2;
  if ((*param_3 != '0') && (uVar5 = 1, *param_3 == 'D')) {
    uVar5 = 4;
  }
  if ((uVar5 & *(uint *)(param_1 + 0x14)) == 0) {
    return 10;
  }
  if (uVar5 == 2) {
    iVar2 = FUN_ram_4209c1ca(param_3,param_4,auStack_54);
    FUN_ram_4209c930(2,uStack_50);
    uVar3 = 2;
LAB_ram_4209b900:
    FUN_ram_4209c930(uVar3,iStack_4c);
    if (iVar2 != 0) {
      return 1;
    }
  }
  else if (uVar5 != 4) {
    iVar2 = FUN_ram_4209c3e0(param_3,param_4,auStack_54);
    FUN_ram_4209c930(1,uStack_50);
    uVar3 = 1;
    goto LAB_ram_4209b900;
  }
  if (iStack_4c != *(int *)(param_1 + 0x20)) {
    return 2;
  }
  uStack_48 = uStack_48 & *(uint *)(param_1 + 0x18);
  if (uStack_48 == 0) {
    return 4;
  }
  iVar2 = 0x80;
  if (((uStack_48 & 0x80) == 0) && (iVar2 = 0x100, (uStack_48 & 0x100) == 0)) {
    iVar2 = 2 - (uStack_48 & 1);
  }
  *(int *)(param_2 + 0x204) = iVar2;
  if (uVar5 == 2) {
    uVar5 = *(uint *)(param_1 + 0x34);
  }
  else {
    uVar5 = *(uint *)(param_1 + 0x1c);
  }
  uVar5 = uStack_50 & uVar5;
  if (uVar5 == 0) {
    return 3;
  }
  iVar2 = *(int *)(param_1 + 0x54);
  *(byte *)(param_2 + 0x214) = (byte)(uStack_44 >> 10) & 1;
  *(byte *)(param_2 + 0x215) = (byte)(uStack_44 >> 0xb) & 1;
  if (iVar2 == 2) {
    if ((uStack_44 & 0x80) == 0) {
      return 7;
    }
    if ((uVar5 & 2) != 0) {
      return 7;
    }
    iVar2 = FUN_ram_4209c15a(uStack_38);
    if (iVar2 == 0) {
      return 8;
    }
  }
  uVar4 = 0;
  if (*(int *)(param_1 + 0x54) != 0) {
    uVar4 = uStack_44 >> 7 & 1;
  }
  uVar3 = 8;
  if ((((uVar5 & 8) == 0) && (uVar3 = 0x800, -1 < (int)(uVar5 << 0x14))) &&
     (uVar3 = 0x1000, -1 < (int)(uVar5 << 0x13))) {
    uVar3 = 2;
  }
  *(undefined4 *)(param_2 + 0x200) = uVar3;
  *(ushort *)(param_2 + 0x1b4) = (ushort)(uVar4 << 4) | *(ushort *)(param_2 + 0x1b4) & 0xffef;
  cVar1 = *param_3;
  *(undefined4 *)(param_2 + 0x208) = 0;
  *(uint *)(param_2 + 0x1fc) = (cVar1 == '0') + 1;
  for (uVar5 = 0; uVar5 < uStack_40; uVar5 = uVar5 + 1) {
    iVar2 = FUN_ram_4209bdd6(*(undefined4 *)(param_1 + 0x74),param_2 + 8,uVar5 * 0x10 + iStack_3c);
    *(int *)(param_2 + 0x208) = iVar2;
    if (iVar2 != 0) {
      FUN_ram_4039c11e(param_1 + 4,iVar2 + 8,0x10);
      break;
    }
  }
  iVar2 = *(int *)(param_2 + 0x1ec);
  if ((iVar2 == 0) || (*(uint *)(param_2 + 0x1f0) < param_4)) {
    thunk_FUN_ram_40390634();
    iVar2 = thunk_FUN_ram_403904a6(param_4);
    *(int *)(param_2 + 0x1ec) = iVar2;
    if (iVar2 != 0) goto LAB_ram_4209ba64;
LAB_ram_4209ba22:
    uVar3 = 6;
  }
  else {
LAB_ram_4209ba64:
    FUN_ram_4039c11e(iVar2,param_3,param_4);
    *(uint *)(param_2 + 0x1f0) = param_4;
    iVar2 = *(int *)(param_2 + 500);
    if ((param_5 == 0) || (param_6 == 0)) {
      thunk_FUN_ram_40390634();
      param_6 = 0;
      *(undefined4 *)(param_2 + 500) = 0;
    }
    else {
      if ((iVar2 == 0) || (*(uint *)(param_2 + 0x1f8) < param_6)) {
        thunk_FUN_ram_40390634();
        iVar2 = thunk_FUN_ram_403904a6(param_6);
        *(int *)(param_2 + 500) = iVar2;
        if (iVar2 == 0) goto LAB_ram_4209ba22;
      }
      FUN_ram_4039c11e(iVar2,param_5,param_6);
    }
    *(uint *)(param_2 + 0x1f8) = param_6;
    uVar3 = 0;
  }
  return uVar3;
}

