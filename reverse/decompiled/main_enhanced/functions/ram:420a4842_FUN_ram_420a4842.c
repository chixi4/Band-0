
int FUN_ram_420a4842(int *param_1,int param_2)

{
  char cVar1;
  undefined1 uVar2;
  undefined1 uVar3;
  int iVar4;
  undefined1 *puVar5;
  char *pcVar6;
  int iVar7;
  int iVar8;
  undefined1 auStack_3c [8];
  byte bStack_34;
  undefined1 uStack_33;
  undefined1 uStack_32;
  int iStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  
  uVar3 = (undefined1)((uint)param_1[2] >> 8);
  iVar7 = param_1[0x27];
  uVar2 = (undefined1)param_1[2];
  iVar4 = param_1[0x26];
  iVar8 = param_1[0x2c];
  *(undefined1 *)(iVar7 + 1) = uVar3;
  *(undefined1 *)(iVar7 + 2) = uVar2;
  FUN_ram_4039c11e(iVar4,param_1 + 0x2e,8);
  puVar5 = (undefined1 *)param_1[0x28];
  iVar4 = param_1[0x10];
  *puVar5 = (char)((uint)iVar8 >> 8);
  puVar5[1] = (char)iVar8;
  if (iVar4 != 0) {
    iStack_30 = param_1[0x29];
    iStack_2c = 0x93d - (iStack_30 - param_1[0x25]);
    iStack_24 = param_1[0x2c];
    iStack_28 = param_1[0x2a] - iStack_30;
    FUN_ram_4039c11e(auStack_3c,param_1[0x26],8);
    bStack_34 = (byte)param_1[0x2b];
    uStack_33 = uVar3;
    uStack_32 = uVar2;
    iVar8 = FUN_ram_420a3fe2(param_1,iVar4,auStack_3c,*(undefined4 *)(*param_1 + 0x1c),
                             *(undefined4 *)(*param_1 + 0x20));
    if (iVar8 != 0) {
      return iVar8;
    }
    if (iStack_28 != 0) {
      return -0x6c00;
    }
    puVar5 = (undefined1 *)param_1[0x28];
    param_1[0x2b] = (uint)bStack_34;
    param_1[0x2c] = iStack_24;
    *puVar5 = (char)((uint)iStack_24 >> 8);
    puVar5[1] = (char)iStack_24;
    iVar8 = iStack_24;
  }
  puVar5 = (undefined1 *)param_1[0x27];
  iVar4 = param_1[0x29];
  *puVar5 = (char)param_1[0x2b];
  iVar8 = (iVar4 - (int)puVar5) + iVar8;
  param_1[0x2d] = param_1[0x2d] + iVar8;
  param_1[0x27] = iVar8 + param_1[0x27];
  FUN_ram_420a47c2(param_1,param_1[0x10]);
  pcVar6 = (char *)((int)param_1 + 0xbf);
  iVar8 = 8;
  do {
    cVar1 = *pcVar6;
    iVar8 = iVar8 + -1;
    *pcVar6 = cVar1 + '\x01';
    if (cVar1 != -1) {
      if (param_2 != 1) {
        return 0;
      }
      iVar8 = FUN_ram_420a47e4(param_1);
      return iVar8;
    }
    pcVar6 = pcVar6 + -1;
  } while (iVar8 != 0);
  return -0x6b80;
}

