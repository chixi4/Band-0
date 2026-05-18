
void FUN_ram_4209a5ca(int *param_1)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  char *pcVar6;
  undefined4 *puVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  int iVar10;
  byte abStack_5c [4];
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined1 auStack_50 [36];
  
  param_1[0xe] = 0;
  *(ushort *)(param_1 + 0x6d) = *(ushort *)(param_1 + 0x6d) | 1;
  param_1[4] = 10;
  iVar2 = param_1[0xc];
  iVar4 = param_1[1];
  param_1[0xc] = iVar2 + 1;
  if (4 < iVar2 + 1) {
    return;
  }
  iVar3 = *param_1;
  uStack_58 = 0;
  uStack_54 = 0;
  puVar7 = &uStack_58;
  pcVar6 = *(char **)(iVar3 + 0x6c);
  iVar2 = *(int *)(iVar3 + 0x70);
  if (param_1[0x7f] == 1) {
    if ((((*(uint *)(iVar3 + 0x14) & 2) != 0) && ((int)((byte)pcVar6[1] + 2) < iVar2)) &&
       (*pcVar6 == '0')) {
      pcVar6 = pcVar6 + (byte)pcVar6[1] + 2;
      if (*pcVar6 == -0xc) {
        pcVar6 = pcVar6 + (byte)pcVar6[1] + 2;
      }
      iVar2 = (byte)pcVar6[1] + 2;
    }
  }
  else if (param_1[0x7f] == 2) {
    iVar10 = *(int *)(iVar4 + 0x14);
    if (*(int *)(iVar3 + 0x5c) == 0) {
      puVar1 = (undefined1 *)(*(int *)(iVar4 + 0x18) * 0x20 + 0x48 + iVar4);
    }
    else {
      iVar3 = FUN_ram_42060348(auStack_50,iVar10);
      if (iVar3 < 0) {
        return;
      }
      puVar1 = auStack_50;
    }
    uVar9 = 1;
    uVar8 = *(undefined4 *)(iVar4 + 0x18);
    uVar5 = 1;
    goto LAB_ram_4209a698;
  }
  uVar9 = 0;
  uVar8 = 0;
  uVar5 = (uint)param_1[0x6d] >> 5 & 1;
  iVar10 = 0;
  puVar1 = (undefined1 *)0x0;
  puVar7 = (undefined4 *)0x0;
LAB_ram_4209a698:
  iVar4 = 0;
  if ((*(ushort *)(param_1 + 0x6d) & 0x10) != 0) {
    iVar4 = FUN_ram_4209c726(*(undefined4 *)(*param_1 + 0x58));
    iVar4 = iVar4 + 0xe;
  }
  iVar4 = iVar4 + iVar2;
  if (*(char *)(*param_1 + 0x6a) != '\0') {
    iVar4 = iVar4 + 7;
  }
  if (puVar1 != (undefined1 *)0x0) {
    iVar4 = iVar4 + iVar10 + 8;
  }
  iVar4 = thunk_FUN_ram_403904a6(iVar4);
  if (iVar4 == 0) {
    return;
  }
  FUN_ram_4039c11e(iVar4,pcVar6,iVar2);
  iVar2 = iVar4 + iVar2;
  if (puVar1 != (undefined1 *)0x0) {
    abStack_5c[0] = (byte)uVar8 & 3;
    abStack_5c[1] = 0;
    iVar2 = FUN_ram_4209b7ec(iVar2,0xfac01,abStack_5c,2,puVar1,iVar10);
  }
  iVar2 = FUN_ram_420998ec(param_1,iVar2);
  if (*(char *)(*param_1 + 0x6a) != '\0') {
    iVar2 = FUN_ram_4209b7ec(iVar2,0x506f9a20,*param_1 + 0x6a,1,0,0);
  }
  FUN_ram_4209a4b0(*param_1,param_1,(uVar5 - 1 & 0xfffffe00) + 0x3c8,puVar7,param_1 + 0x14,iVar4,
                   iVar2 - iVar4,uVar8,uVar9);
  thunk_FUN_ram_40390634(iVar4);
  return;
}

