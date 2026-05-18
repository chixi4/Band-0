
void FUN_ram_4209a118(int param_1,int param_2,uint param_3,int param_4,int param_5,int param_6,
                     uint param_7,int param_8,int param_9,uint param_10)

{
  undefined1 uVar1;
  undefined2 uVar2;
  int iVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined1 *puVar6;
  undefined1 uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  uint uVar11;
  undefined1 auStack_60 [16];
  undefined1 auStack_50 [28];
  
  uVar11 = param_7;
  if (param_10 == 0) {
    iVar3 = FUN_ram_4209c5ae(*(undefined4 *)(param_2 + 0x204));
    if (iVar3 == 0) {
      if ((*(uint *)(param_2 + 0x204) & 0xc18580) == 0) {
        if (*(int *)(param_2 + 0x200) != 2) goto LAB_ram_4209a176;
        param_10 = 1;
      }
      else {
        param_10 = 3;
      }
    }
LAB_ram_4209a19c:
    iVar3 = FUN_ram_4209c5dc(*(undefined4 *)(param_2 + 0x204));
    if ((iVar3 != 0) || (iVar3 = 0, param_10 == 3)) goto LAB_ram_4209a178;
  }
  else {
    if (param_10 != 2) goto LAB_ram_4209a19c;
LAB_ram_4209a176:
    param_10 = 2;
LAB_ram_4209a178:
    iVar3 = 0;
    if (param_9 != 0) {
      iVar3 = (int)param_7 % 8;
      if ((param_7 & 7) != 0) {
        iVar3 = 8 - iVar3;
      }
      uVar11 = iVar3 + 8 + param_7;
    }
  }
  iVar8 = uVar11 + 99;
  puVar4 = (undefined1 *)FUN_ram_4039c08e(1,iVar8);
  if (puVar4 == (undefined1 *)0x0) {
    return;
  }
  *puVar4 = (char)*(undefined4 *)(param_1 + 0x3c);
  puVar4[1] = 3;
  *(ushort *)(puVar4 + 2) = (ushort)(uVar11 + 0x5f >> 8) & 0xff | (short)(uVar11 + 0x5f) * 0x100;
  iVar9 = *(int *)(param_2 + 0x1fc);
  uVar7 = 0xfe;
  if (iVar9 == 2) {
    uVar7 = 2;
  }
  puVar4[4] = uVar7;
  uVar10 = param_10 | param_3;
  if (param_9 == 0) {
    if (iVar9 != 2) goto LAB_ram_4209a246;
  }
  else if (iVar9 == 2) {
    uVar10 = uVar10 | 0x1000;
  }
  else {
LAB_ram_4209a246:
    uVar10 = uVar10 | param_8 << 4;
  }
  puVar4[5] = (char)(uVar10 >> 8);
  puVar4[6] = (char)uVar10;
  if ((param_3 & 8) == 0) {
    if (iVar9 != 2) {
      uVar5 = *(undefined4 *)(param_1 + 0x20);
      goto LAB_ram_4209a228;
    }
    uVar7 = 0;
    uVar1 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x200);
LAB_ram_4209a228:
    uVar2 = FUN_ram_4209c726(uVar5);
    uVar7 = (undefined1)((ushort)uVar2 >> 8);
    uVar1 = (undefined1)uVar2;
  }
  uVar5 = *(undefined4 *)(param_2 + 0x15c);
  puVar4[7] = uVar7;
  puVar4[8] = uVar1;
  *(undefined4 *)(param_2 + 0x168) = uVar5;
  FUN_ram_4039c11e(param_2 + 0x160,param_2 + 0x154,8);
  *(undefined4 *)(param_2 + 0x15c) = *(undefined4 *)(param_2 + 0x150);
  FUN_ram_4039c11e(param_2 + 0x154,param_2 + 0x148,8);
  iVar9 = param_2 + 0x13c;
  *(undefined4 *)(param_2 + 0x150) = *(undefined4 *)(param_2 + 0x144);
  FUN_ram_4039c11e(param_2 + 0x148,iVar9,8);
  FUN_ram_4206075c(iVar9,8);
  FUN_ram_4039c11e(puVar4 + 9,iVar9,8);
  *(undefined4 *)(param_2 + 0x144) = 1;
  if (param_5 != 0) {
    FUN_ram_4039c11e(puVar4 + 0x11,param_5,0x20);
  }
  if (param_4 != 0) {
    FUN_ram_4039c11e(puVar4 + 0x41,param_4,8);
  }
  if (param_6 != 0) {
    if (param_9 == 0) {
      FUN_ram_4039c11e(puVar4 + 99,param_6,param_7);
      puVar4[0x61] = (char)(param_7 >> 8);
      puVar4[0x62] = (char)param_7;
    }
    else {
      puVar6 = (undefined1 *)FUN_ram_4039c08e(1,uVar11);
      if (puVar6 == (undefined1 *)0x0) goto LAB_ram_4209a3c4;
      FUN_ram_4039c11e(puVar6,param_6,param_7);
      if (iVar3 != 0) {
        puVar6[param_7] = 0xdd;
      }
      if (((param_10 == 2) ||
          (iVar3 = FUN_ram_4209c5dc(*(undefined4 *)(param_2 + 0x204)), iVar3 != 0)) ||
         (param_10 == 3)) {
        iVar3 = FUN_ram_4209f858(param_2 + 0xdc,*(undefined4 *)(param_2 + 0x120),
                                 (int)(uVar11 - 8) / 8,puVar6,puVar4 + 99);
        if (iVar3 != 0) {
          thunk_FUN_ram_40390634(puVar4);
          puVar4 = puVar6;
          goto LAB_ram_4209a3c4;
        }
      }
      else {
        if (*(int *)(param_2 + 0x120) != 0x10) {
          thunk_FUN_ram_40390634(puVar6);
          goto LAB_ram_4209a3c4;
        }
        iVar3 = *(int *)(param_2 + 4);
        FUN_ram_4039c11e(puVar4 + 0x31,iVar3 + 0x34);
        FUN_ram_4206075c(iVar3 + 0x24,0x20);
        FUN_ram_4039c11e(auStack_60,puVar4 + 0x31,0x10);
        FUN_ram_4039c11e(auStack_50,param_2 + 0xdc,*(undefined4 *)(param_2 + 0x120));
        uVar5 = FUN_ram_4039c11e(puVar4 + 99,puVar6,uVar11);
        FUN_ram_4209f76e(auStack_60,0x20,0x100,uVar5,uVar11);
      }
      puVar4[0x61] = (char)(uVar11 >> 8);
      puVar4[0x62] = (char)uVar11;
      thunk_FUN_ram_40390634(puVar6);
    }
  }
  if ((uVar10 & 0x100) != 0) {
    if (*(int *)(param_2 + 300) == 0) goto LAB_ram_4209a3c4;
    FUN_ram_4209c60a(param_2 + 0xc4,*(undefined4 *)(param_2 + 0x11c),
                     *(undefined4 *)(param_2 + 0x204),param_10,puVar4,iVar8,puVar4 + 0x51);
  }
  FUN_ram_4209f646(param_1 + 0x78,param_2 + 8,puVar4,iVar8);
LAB_ram_4209a3c4:
  thunk_FUN_ram_40390634(puVar4);
  return;
}

