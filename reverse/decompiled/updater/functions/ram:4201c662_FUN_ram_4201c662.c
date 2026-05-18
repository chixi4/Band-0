
int FUN_ram_4201c662(uint param_1,int param_2,int param_3)

{
  int iVar1;
  uint *puVar2;
  int iVar3;
  undefined4 *puVar4;
  int iVar5;
  uint auStack_28 [2];
  
  if (1 < param_1) {
    return 0x102;
  }
  iVar5 = param_1 * 4;
  if (*(int *)(gp + -0x7b4 + iVar5) != 0) {
    return 0x103;
  }
  if ((param_3 != 0) && (param_3 != 3)) {
    return 0x102;
  }
  if ((*(uint *)(param_2 + 0x34) >> 4 & 0xbf) != 0) {
    return 0x102;
  }
  iVar1 = FUN_ram_4204e704(param_1,0x3c07140c);
  if (iVar1 == 0) {
    return 0x103;
  }
  puVar2 = (uint *)FUN_ram_40390574(1,100,0x804);
  if (puVar2 == (uint *)0x0) {
    iVar1 = 0x101;
    goto LAB_ram_4201c7c4;
  }
  *(uint **)(gp + -0x7b4 + iVar5) = puVar2;
  *puVar2 = param_1;
  FUN_ram_40399daa(puVar2 + 4,param_2,0x38);
  *(bool *)(puVar2 + 0x14) = param_3 != 0;
  puVar2[0x13] = 0x40;
  if (param_3 == 0) {
LAB_ram_4201c766:
    auStack_28[1] = 6;
    auStack_28[0] = param_1;
    iVar1 = FUN_ram_4201ba7a(puVar2 + 0x17,auStack_28);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_4201c0a4(param_1,param_2,*(uint *)(param_2 + 0x2c) | 1,puVar2 + 0x12);
      if (iVar1 == 0) {
        return 0;
      }
      iVar1 = 0x102;
    }
  }
  else {
    iVar1 = FUN_ram_4201bec8(param_1,3,puVar2 + 0x18);
    if (iVar1 == 0) {
      iVar1 = 0x101;
      iVar3 = FUN_ram_4201bfdc(puVar2[0x18],*(undefined4 *)(param_2 + 0x28),puVar2 + 0x13);
      if (iVar3 == 0) {
        FUN_ram_403945a0(8,puVar2 + 0x15);
        FUN_ram_403945a0(0x400,puVar2 + 0x16);
        goto LAB_ram_4201c766;
      }
    }
  }
  if (puVar2[0x17] != 0) {
    FUN_ram_4201bacc();
  }
  if (puVar2[0x18] != 0) {
    thunk_FUN_ram_40390608(*(undefined4 *)(puVar2[0x18] + 0x1c));
    thunk_FUN_ram_40390608(*(undefined4 *)(puVar2[0x18] + 0x20));
    FUN_ram_4201c06c(puVar2[0x18]);
    puVar2[0x18] = 0;
  }
LAB_ram_4201c7c4:
  FUN_ram_4204e780(param_1);
  puVar4 = (undefined4 *)(gp + -0x7b4 + iVar5);
  thunk_FUN_ram_40390608(*puVar4);
  *puVar4 = 0;
  return iVar1;
}

