
int thunk_FUN_ram_4201cd46(int param_1,int param_2)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_ram_4201cc96(2,0,0);
  if (param_1 == 0) {
    return 0x102;
  }
  if (param_2 == 0) {
    return 0x102;
  }
  if (*(int *)(param_1 + 0x28) == 0) {
    return 0x103;
  }
  iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
  if (iVar3 == 0) {
    iVar5 = 0x100;
LAB_ram_4201cd90:
    if (*(uint *)(param_1 + 0x1c) < (-(uint)(iVar5 != 0x50) & 0xb0) + 0x70) {
      iVar3 = FUN_ram_4201ccac(param_1);
      if (iVar3 != 0) goto LAB_ram_4201cd7e;
      puVar1 = (uint *)(*(int *)(param_1 + 0x14) + 0x20);
    }
    else {
      iVar3 = FUN_ram_42019650(*(undefined4 *)(param_1 + 4),0x20,*(undefined4 *)(param_1 + 0x14),
                               iVar5);
      if (iVar3 != 0) {
        return iVar3;
      }
      puVar1 = *(uint **)(param_1 + 0x14);
    }
    iVar3 = *(int *)(*(int *)(param_1 + 8) + 4);
    if (iVar3 == 0) {
      uVar2 = *puVar1;
      uVar4 = 0xabcd5432;
LAB_ram_4201cdcc:
      if (uVar2 != uVar4) goto LAB_ram_4201cd7e;
    }
    else if (iVar3 == 2) {
      uVar2 = (uint)(byte)*puVar1;
      uVar4 = 0x50;
      goto LAB_ram_4201cdcc;
    }
    FUN_ram_40399daa(param_2,puVar1,iVar5);
    iVar3 = 0;
  }
  else {
    iVar5 = 0x50;
    if (iVar3 == 2) goto LAB_ram_4201cd90;
LAB_ram_4201cd7e:
    iVar3 = -1;
  }
  return iVar3;
}

