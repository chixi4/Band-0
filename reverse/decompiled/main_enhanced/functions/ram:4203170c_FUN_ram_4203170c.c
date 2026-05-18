
int FUN_ram_4203170c(undefined4 param_1,undefined4 param_2,int param_3,byte *param_4,int *param_5,
                    code *param_6,undefined4 param_7)

{
  byte bVar1;
  ushort uVar2;
  bool bVar3;
  int iVar4;
  uint uVar5;
  
  bVar1 = *param_4;
  if (bVar1 != 2) {
    if (2 < bVar1) {
      if (bVar1 != 3) {
        return 0xe;
      }
LAB_ram_42031792:
      *(int *)(param_4 + 4) = *param_5;
      iVar4 = (*param_6)(param_1,param_2,param_4);
      *param_5 = *(int *)(param_4 + 4);
      return iVar4;
    }
    if (bVar1 != 0) goto LAB_ram_42031792;
  }
  if (param_3 == 0) {
    iVar4 = *param_5;
    bVar3 = false;
    *(int *)(param_4 + 4) = iVar4;
  }
  else {
    iVar4 = FUN_ram_4202d4f2();
    *(int *)(param_4 + 4) = iVar4;
    if (iVar4 == 0) {
      return 0x11;
    }
    bVar3 = true;
  }
  uVar2 = *(ushort *)(iVar4 + 0x10);
  iVar4 = (*param_6)(param_1,param_2,param_4,param_7);
  if (iVar4 == 0) {
    uVar5 = ((uint)*(ushort *)(*(int *)(param_4 + 4) + 0x10) - (uint)uVar2) - param_3;
    if (-1 < (int)uVar5) {
      if (!bVar3) {
        return 0;
      }
      (*(code *)&SUB_ram_400119e4)(*param_5,*(int *)(param_4 + 4),param_3,uVar5 & 0xffff);
      goto LAB_ram_4203177e;
    }
    iVar4 = 7;
  }
  if (!bVar3) {
    return iVar4;
  }
LAB_ram_4203177e:
  (*(code *)&SUB_ram_40011a08)(*(undefined4 *)(param_4 + 4));
  return iVar4;
}

