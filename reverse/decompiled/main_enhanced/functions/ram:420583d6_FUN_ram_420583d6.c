
undefined4 FUN_ram_420583d6(int param_1)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  undefined4 uVar5;
  bool bVar6;
  int iVar7;
  
  if (param_1 == 0) {
                    /* WARNING: Subroutine does not return */
    FUN_ram_4039bf1e();
  }
  iVar2 = *(int *)(param_1 + 0x70);
  if (iVar2 == 0) {
    uVar5 = 0;
  }
  else {
    if (*(char *)(param_1 + 0xa6) != -1) {
      *(char *)(param_1 + 0xa6) = *(char *)(param_1 + 0xa6) + '\x01';
    }
    bVar6 = false;
    uVar3 = FUN_ram_420523aa(*(undefined2 *)(*(int *)(iVar2 + 0xc) + 0xc));
    if ((uVar3 & 1) != 0) {
      bVar6 = *(short *)(iVar2 + 8) == 0;
    }
    iVar4 = FUN_ram_4205752e(param_1,bVar6 ^ 1,*(undefined4 *)(*(int *)(iVar2 + 0xc) + 4));
    if (iVar4 != 0) {
      iVar7 = *(int *)(iVar4 + 4);
      if (bVar6 == false) {
        FUN_ram_42053f22(*(int *)(iVar2 + 4),iVar7 + 0x14,1,
                         *(short *)(*(int *)(iVar2 + 4) + 8) - *(short *)(iVar2 + 8));
      }
      else {
        uVar1 = *(ushort *)(iVar7 + 0xc);
        uVar3 = FUN_ram_420523aa(0x11);
        uVar3 = uVar3 | uVar1 & 0xffffc0ff;
        *(char *)(iVar7 + 0xc) = (char)uVar3;
        *(char *)(iVar7 + 0xd) = (char)(uVar3 >> 8);
      }
      iVar2 = FUN_ram_420523b8(*(undefined4 *)(*(int *)(iVar2 + 0xc) + 4));
      if (*(int *)(param_1 + 0x54) - (iVar2 + 1) < 0) {
        *(int *)(param_1 + 0x54) = iVar2 + 1;
      }
      uVar5 = FUN_ram_420573d8(param_1,iVar4,param_1,param_1 + 4);
      return uVar5;
    }
    uVar5 = 0xffffffff;
  }
  return uVar5;
}

