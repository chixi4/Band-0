
int FUN_ram_4209b66e(int param_1)

{
  char *pcVar1;
  char *pcVar2;
  int iVar3;
  int iVar4;
  undefined4 uVar5;
  uint uVar6;
  char cVar7;
  uint uVar8;
  char *pcVar9;
  char local_a0 [128];
  
  pcVar1 = local_a0;
  if ((*(uint *)(param_1 + 0x14) & 2) != 0) {
    iVar3 = FUN_ram_4209b430(param_1 + 0x14,local_a0,0x80,0,*(undefined4 *)(param_1 + 0x58));
    if (iVar3 < 0) {
      return iVar3;
    }
    iVar4 = FUN_ram_4209b632(param_1 + 0x14,local_a0 + iVar3,0x80 - iVar3);
    pcVar1 = local_a0 + iVar3 + iVar4;
    if (iVar4 == -1) {
      return -1;
    }
  }
  if ((*(uint *)(param_1 + 0x14) & 1) != 0) {
    uVar5 = *(undefined4 *)(param_1 + 0x20);
    *pcVar1 = -0x23;
    pcVar1[2] = '\0';
    pcVar1[3] = 'P';
    pcVar1[4] = -0xe;
    pcVar1[5] = '\x01';
    pcVar1[7] = '\0';
    pcVar1[6] = '\x01';
    iVar3 = FUN_ram_4209c930(1,uVar5);
    if (iVar3 == 0) {
      return -1;
    }
    pcVar1[8] = (char)((uint)iVar3 >> 0x18);
    uVar5 = *(undefined4 *)(param_1 + 0x1c);
    pcVar1[9] = (char)((uint)iVar3 >> 0x10);
    pcVar1[0xb] = (char)iVar3;
    pcVar1[10] = (char)((uint)iVar3 >> 8);
    iVar3 = FUN_ram_4209ca44(pcVar1 + 0xe,uVar5);
    if (iVar3 == 0) {
      return -1;
    }
    uVar6 = *(uint *)(param_1 + 0x18);
    pcVar9 = pcVar1 + 0xe + iVar3 * 4;
    pcVar1[0xd] = (char)((uint)iVar3 >> 8);
    pcVar1[0xc] = (char)iVar3;
    uVar8 = uVar6 & 1;
    cVar7 = (char)uVar8;
    pcVar2 = pcVar9 + 2;
    if (uVar8 != 0) {
      pcVar9[2] = '\0';
      pcVar9[3] = 'P';
      pcVar9[4] = -0xe;
      pcVar9[5] = '\x01';
      pcVar2 = pcVar9 + 6;
    }
    if ((uVar6 & 2) == 0) {
      if (uVar8 == 0) {
        return -1;
      }
    }
    else {
      pcVar2[1] = 'P';
      pcVar2[2] = -0xe;
      *pcVar2 = '\0';
      pcVar2[3] = '\x02';
      cVar7 = cVar7 + '\x01';
      pcVar2 = pcVar2 + 4;
    }
    iVar3 = (int)pcVar2 - (int)pcVar1;
    pcVar9[1] = '\0';
    *pcVar9 = cVar7;
    pcVar1[1] = (char)iVar3 + -2;
    pcVar1 = pcVar2;
    if (iVar3 < 0) {
      return iVar3;
    }
  }
  iVar3 = (int)pcVar1 - (int)local_a0;
  thunk_FUN_ram_40390634(*(undefined4 *)(param_1 + 0x6c));
  iVar4 = thunk_FUN_ram_403904a6(iVar3);
  *(int *)(param_1 + 0x6c) = iVar4;
  if (iVar4 == 0) {
    return -1;
  }
  FUN_ram_4039c11e(iVar4,local_a0,iVar3);
  *(int *)(param_1 + 0x70) = iVar3;
  return 0;
}

