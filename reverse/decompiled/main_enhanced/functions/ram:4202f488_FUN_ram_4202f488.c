
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202f488(undefined4 param_1,ushort *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  undefined4 *puVar6;
  undefined4 uStack_38;
  undefined4 uStack_34;
  undefined2 uStack_30;
  ushort uStack_2e;
  ushort uStack_2c;
  ushort uStack_2a;
  ushort uStack_28;
  ushort uStack_26;
  ushort uStack_24;
  
  uVar4 = (uint)param_2[1];
  if (uVar4 < *param_2) {
    return 3;
  }
  if (*param_2 < 6) {
    return 3;
  }
  if (0xc80 < uVar4) {
    return 3;
  }
  if (499 < param_2[2]) {
    return 3;
  }
  if ((int)(uint)param_2[3] <= (int)((param_2[2] + 1) * uVar4) >> 2) {
    return 3;
  }
  if (0xc76 < (param_2[3] - 10 & 0xffff)) {
    return 3;
  }
  iVar1 = FUN_ram_4202b87e();
  if (iVar1 == 0) {
    return 0x1e;
  }
  uStack_38 = 0;
  uStack_34 = 0;
  thunk_FUN_ram_4202b7dc();
  iVar1 = FUN_ram_420365de(param_1);
  if (iVar1 == 0) {
    thunk_FUN_ram_4202b7f6();
    puVar6 = (undefined4 *)0x0;
    iVar1 = 7;
  }
  else {
    iVar2 = FUN_ram_4202dfe4(param_1,0);
    if (iVar2 == 0) {
      puVar6 = (undefined4 *)(*(code *)&SUB_ram_40011a44)(_DAT_ram_3fcb6ba0 + 0x138);
      if (puVar6 == (undefined4 *)0x0) {
        thunk_FUN_ram_4202b7f6();
        iVar1 = 6;
      }
      else {
        (*(code *)&SUB_ram_40010488)(puVar6,0,0x18);
        *(short *)(puVar6 + 5) = (short)param_1;
        FUN_ram_4039c11e(puVar6 + 1,param_2,0xc);
        iVar2 = FUN_ram_403a6810();
        iVar3 = FUN_ram_403a681e(40000);
        iVar5 = *(int *)(iVar1 + 0x30);
        puVar6[4] = iVar2 + iVar3;
        if ((iVar5 == 0) && ((*(byte *)(iVar1 + 0x34) & 1) == 0)) {
          thunk_FUN_ram_4202b7f6();
          uStack_38 = *(undefined4 *)param_2;
          uStack_34 = *(undefined4 *)(param_2 + 2);
          iVar1 = FUN_ram_4202dc56(param_1,&uStack_38,0x4201f316,0);
          goto LAB_ram_4202f618;
        }
        uStack_2e = *param_2;
        uStack_2c = param_2[1];
        uStack_2a = param_2[2];
        uStack_28 = param_2[3];
        uStack_26 = param_2[4];
        uStack_24 = param_2[5];
        uStack_30 = (short)param_1;
        iVar1 = FUN_ram_420332b4(0x2013,&uStack_30,0xe,0,0);
        thunk_FUN_ram_4202b7f6();
      }
    }
    else {
      thunk_FUN_ram_4202b7f6();
      iVar1 = 2;
      puVar6 = (undefined4 *)0x0;
    }
  }
  FUN_ram_4202bac4();
LAB_ram_4202f618:
  thunk_FUN_ram_4202b7dc();
  iVar3 = FUN_ram_4202dfe4(param_1,0);
  iVar2 = _DAT_ram_3fcb6ba0;
  if ((iVar1 == 0) && (iVar3 == 0)) {
    *puVar6 = *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x154);
    *(undefined4 **)(iVar2 + 0x154) = puVar6;
  }
  else {
    FUN_ram_4202e1c6(puVar6);
    if (iVar3 != 0) {
      iVar1 = 2;
    }
  }
  thunk_FUN_ram_4202b7f6();
  return iVar1;
}

