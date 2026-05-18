
int FUN_ram_4206d608(undefined4 param_1,int param_2,int param_3,code *param_4,undefined4 param_5)

{
  bool bVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  int iVar6;
  uint uVar7;
  int iVar8;
  undefined4 uStack_78;
  int iStack_74;
  undefined1 auStack_70 [16];
  undefined1 auStack_60 [52];
  
  if (param_2 == 0) {
    return -0x6c00;
  }
  if (param_3 == 0) {
    return -0x6c00;
  }
  if (*(int *)(param_3 + 0xc) == 0) {
    return -0x6c00;
  }
  if (*(uint *)(param_3 + 0x10) < *(uint *)(param_3 + 0x14)) {
    return -0x6c00;
  }
  if (*(uint *)(param_3 + 0x10) - *(uint *)(param_3 + 0x14) < *(uint *)(param_3 + 0x18)) {
    return -0x6c00;
  }
  uVar2 = FUN_ram_4206ee9a(param_2);
  iVar4 = *(int *)(param_3 + 0xc) + *(int *)(param_3 + 0x14);
  if (0x1000 < *(uint *)(param_3 + 0x18)) {
    return -0x7100;
  }
  uVar7 = *(int *)(param_3 + 0x10) - (*(int *)(param_3 + 0x14) + *(uint *)(param_3 + 0x18));
  if (uVar2 < 2) {
    if (uVar7 < *(uint *)(param_2 + 0xc)) {
      return -0x6a00;
    }
    FUN_ram_4206d568(auStack_70,&uStack_78,param_3);
    iVar8 = param_2 + 0x34;
    iVar3 = FUN_ram_42029264(iVar8,auStack_70,uStack_78);
    if (iVar3 == 0) {
      iVar3 = FUN_ram_42029264(iVar8,iVar4,*(undefined4 *)(param_3 + 0x18));
      bVar1 = false;
      if (iVar3 == 0) {
        iVar3 = FUN_ram_4202927a(iVar8,auStack_60);
        if (iVar3 != 0) goto LAB_ram_4206d70e;
        iVar3 = FUN_ram_42029306(iVar8);
        bVar1 = false;
        if (iVar3 == 0) {
          FUN_ram_40399daa(*(int *)(param_3 + 0x18) + iVar4,auStack_60,
                           *(undefined4 *)(param_2 + 0xc));
          bVar1 = true;
          uVar7 = uVar7 - *(int *)(param_2 + 0xc);
          *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + *(int *)(param_2 + 0xc);
        }
      }
    }
    else {
LAB_ram_4206d70e:
      bVar1 = false;
    }
    FUN_ram_420293a6(auStack_60,*(undefined4 *)(param_2 + 0xc));
    if (iVar3 != 0) {
      return iVar3;
    }
  }
  else {
    bVar1 = false;
    if (uVar2 == 3) {
      uVar2 = *(uint *)(param_2 + 0x10);
      if (uVar7 < uVar2) {
        return -0x6a00;
      }
      iVar8 = *(int *)(param_2 + 8);
      iVar6 = *(int *)(param_2 + 4);
      FUN_ram_4206d50a(auStack_60,param_2 + 0x14,iVar8,param_3);
      FUN_ram_4206d568(auStack_70,&uStack_78,param_3);
      iVar3 = FUN_ram_420279e4(param_2 + 0x54,auStack_60,iVar6,auStack_70,uStack_78,iVar4,
                               *(undefined4 *)(param_3 + 0x18),iVar4,
                               *(int *)(param_3 + 0x10) - (iVar4 - *(int *)(param_3 + 0xc)),
                               param_3 + 0x18,uVar2);
      if (iVar3 != 0) {
        return iVar3;
      }
      if (iVar6 == iVar8) {
        return 0;
      }
      if (7 < *(uint *)(param_3 + 0x14)) {
        FUN_ram_40399daa(iVar4 + -8,param_3,8);
        *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) + -8;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 8;
        return 0;
      }
      return -0x6a00;
    }
  }
  if (1 < uVar2 - 1) {
    return -0x6c00;
  }
  uVar2 = *(uint *)(param_2 + 4);
  uVar5 = uVar2 - (*(int *)(param_3 + 0x18) + 1U) % uVar2;
  if (uVar2 == uVar5) {
    uVar5 = 0;
  }
  if (uVar7 < uVar5 + 1) {
    return -0x6a00;
  }
  uVar2 = 0;
  do {
    iVar3 = iVar4 + uVar2;
    uVar2 = uVar2 + 1;
    *(char *)(iVar3 + *(int *)(param_3 + 0x18)) = (char)uVar5;
  } while (uVar2 <= uVar5);
  *(uint *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + 1 + uVar5;
  if (param_4 == (code *)0x0) {
    return -0x6c00;
  }
  if (*(uint *)(param_3 + 0x14) < *(uint *)(param_2 + 4)) {
    return -0x6a00;
  }
  iVar3 = (*param_4)(param_5);
  if (iVar3 != 0) {
    return iVar3;
  }
  FUN_ram_40399daa(iVar4 - *(int *)(param_2 + 4),param_2 + 0x14);
  iVar3 = FUN_ram_42027970(param_2 + 0x54,param_2 + 0x14,*(undefined4 *)(param_2 + 4),iVar4,
                           *(undefined4 *)(param_3 + 0x18),iVar4,&iStack_74);
  if (iVar3 != 0) {
    return iVar3;
  }
  if (*(int *)(param_3 + 0x18) != iStack_74) {
    return -0x6c00;
  }
  iVar3 = *(int *)(param_2 + 4);
  *(int *)(param_3 + 0x14) = *(int *)(param_3 + 0x14) - iVar3;
  *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + iVar3;
  if (bVar1) {
    return 0;
  }
  if ((uVar7 - 1) - uVar5 < *(uint *)(param_2 + 0xc)) {
    return -0x6a00;
  }
  FUN_ram_4206d568(auStack_70,&uStack_78,param_3);
  iVar6 = param_2 + 0x34;
  iVar8 = FUN_ram_42029264(iVar6,auStack_70,uStack_78);
  if (iVar8 == 0) {
    iVar8 = FUN_ram_42029264(iVar6,iVar4 - iVar3,*(undefined4 *)(param_3 + 0x18));
    bVar1 = false;
    if (iVar8 != 0) goto LAB_ram_4206d8c4;
    iVar8 = FUN_ram_4202927a(iVar6,auStack_60);
    if (iVar8 == 0) {
      iVar8 = FUN_ram_42029306(iVar6);
      bVar1 = false;
      if (iVar8 == 0) {
        FUN_ram_40399daa(*(int *)(param_3 + 0x18) + (iVar4 - iVar3),auStack_60,
                         *(undefined4 *)(param_2 + 0xc));
        bVar1 = true;
        *(int *)(param_3 + 0x18) = *(int *)(param_3 + 0x18) + *(int *)(param_2 + 0xc);
      }
      goto LAB_ram_4206d8c4;
    }
  }
  bVar1 = false;
LAB_ram_4206d8c4:
  FUN_ram_420293a6(auStack_60,*(undefined4 *)(param_2 + 0xc));
  if (iVar8 != 0) {
    return iVar8;
  }
  if (!bVar1) {
    return -0x6c00;
  }
  return 0;
}

