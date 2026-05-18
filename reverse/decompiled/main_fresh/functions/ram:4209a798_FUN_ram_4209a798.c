
void FUN_ram_4209a798(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  undefined1 *puVar3;
  undefined4 uVar4;
  undefined1 *puVar5;
  int iVar6;
  int iVar7;
  byte abStack_4c [4];
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined1 auStack_40 [40];
  
  param_1[5] = 1;
  *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
  iVar6 = param_1[0xd];
  iVar7 = param_1[1];
  param_1[0xd] = iVar6 + 1;
  if (iVar6 + 1 < 5) {
    if (param_1[0x7f] == 1) {
      param_1[0x67] = 0;
    }
    param_1[0xe] = 0;
    uStack_48 = 0;
    uStack_44 = 0;
    if (*(int *)(*param_1 + 0x5c) == 0) {
      puVar1 = (undefined1 *)(*(int *)(iVar7 + 0x18) * 0x20 + 0x48 + iVar7);
    }
    else {
      iVar6 = FUN_ram_42060348(auStack_40,*(undefined4 *)(iVar7 + 0x14));
      if (iVar6 < 0) {
        return;
      }
      puVar1 = auStack_40;
    }
    iVar6 = *(int *)(iVar7 + 0x14);
    if (param_1[0x7f] == 2) {
      iVar2 = 0;
      if ((*(ushort *)(param_1 + 0x6d) & 0x10) != 0) {
        iVar2 = FUN_ram_4209c726(*(undefined4 *)(*param_1 + 0x58));
        iVar2 = iVar2 + 0xe;
      }
      puVar3 = (undefined1 *)thunk_FUN_ram_403904a6(iVar2 + iVar6 + 8);
      if (puVar3 == (undefined1 *)0x0) {
        return;
      }
      abStack_4c[0] = (byte)*(undefined4 *)(iVar7 + 0x18) & 3;
      abStack_4c[1] = 0;
      uVar4 = FUN_ram_4209b7ec(puVar3,0xfac01,abStack_4c,2,puVar1,*(undefined4 *)(iVar7 + 0x14));
      puVar5 = (undefined1 *)FUN_ram_420998ec(param_1,uVar4);
      puVar1 = puVar3;
    }
    else {
      puVar5 = puVar1 + iVar6;
    }
    FUN_ram_4209a4b0(*param_1,param_1,(-(uint)(param_1[0x4e] != 0) & 0xffffffc0) + 0x3c0,&uStack_48,
                     iVar7 + 0xa8,puVar1,(int)puVar5 - (int)puVar1,*(undefined4 *)(iVar7 + 0x18),1);
    if (param_1[0x7f] == 2) {
      thunk_FUN_ram_40390634(puVar1);
    }
  }
  return;
}

