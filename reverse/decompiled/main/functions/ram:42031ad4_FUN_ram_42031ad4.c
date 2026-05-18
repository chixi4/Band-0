
undefined4
FUN_ram_42031ad4(undefined4 param_1,uint param_2,int param_3,undefined4 param_4,int *param_5)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  undefined4 *puVar6;
  uint uVar7;
  undefined4 uVar8;
  uint uVar9;
  int iVar10;
  undefined1 auStack_3c [12];
  undefined1 auStack_30 [8];
  short sStack_28;
  ushort uStack_26;
  byte bStack_24;
  
  thunk_FUN_ram_4202b7dc();
  iVar4 = FUN_ram_420365de(param_1);
  if (iVar4 == 0) {
LAB_ram_42031afa:
    thunk_FUN_ram_4202b7f6();
    return 0xe;
  }
  iVar10 = *param_5;
  sStack_28 = 0;
  uVar9 = param_2 - 1 & 0xffff;
  if (param_2 < uVar9) goto LAB_ram_42031afa;
  iVar2 = *(int *)(iVar4 + 0x5c);
  iVar5 = FUN_ram_42031600(iVar2,uVar9);
  if ((iVar5 == -1) || (iVar2 = iVar2 + iVar5 * 4, iVar2 == 0)) goto LAB_ram_42031afa;
  bVar1 = *(byte *)(iVar2 + 2);
  if (param_3 == 2) {
    if (*(short *)(iVar10 + 0x10) != 2) {
      thunk_FUN_ram_4202b7f6();
      return 0xd;
    }
    puVar6 = (undefined4 *)(*(code *)&SUB_ram_40011a30)(iVar10);
    uVar7 = (*(code *)&SUB_ram_40011938)(*puVar6);
    if ((~(uint)*(byte *)(iVar2 + 3) & uVar7) != 0) {
      thunk_FUN_ram_4202b7f6();
      return 6;
    }
    if (*(byte *)(iVar2 + 2) != uVar7) {
      uVar3 = uVar7 & 0xff;
      *(char *)(iVar2 + 2) = (char)uVar7;
      if ((*(ushort *)(iVar4 + 0x68) & 4) != 0) {
        FUN_ram_4039c11e(auStack_30,iVar4 + 8,7);
        auStack_30[0] = thunk_FUN_ram_420315b6(*(undefined1 *)(iVar4 + 8));
        sStack_28 = (short)((param_2 - 1) * 0x10000 >> 0x10);
        uStack_26 = (ushort)*(byte *)(iVar2 + 2);
        bStack_24 = bStack_24 & 0xfe;
      }
      thunk_FUN_ram_4202b7f6();
      goto LAB_ram_42031ba6;
    }
  }
  else {
    iVar4 = (*(code *)&SUB_ram_40011a00)(iVar10);
    if (iVar4 == 0) {
      thunk_FUN_ram_4202b7f6();
      return 0x11;
    }
    (*(code *)&SUB_ram_40011aac)(iVar4,*(byte *)(iVar2 + 2) & 3);
  }
  thunk_FUN_ram_4202b7f6();
  uVar3 = (uint)bVar1;
LAB_ram_42031ba6:
  FUN_ram_420319f2(param_1,uVar9,1,(uint)bVar1,uVar3);
  if (sStack_28 == 0) {
    return 0;
  }
  if (uStack_26 == 0) {
    FUN_ram_4202cf34(auStack_3c,auStack_30);
    uVar8 = FUN_ram_4202cf12(auStack_3c);
    return uVar8;
  }
  uVar8 = FUN_ram_4202cf0a(auStack_30);
  return uVar8;
}

