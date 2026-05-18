
undefined4 FUN_ram_420636ce(int param_1,undefined4 param_2,int param_3)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  int local_30 [3];
  undefined4 uStack_24;
  
  iVar1 = *(int *)(param_1 + 0x18);
  iVar5 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
  if (*(int *)(iVar5 + 0x14) == 0) {
    if ((*(uint *)(iVar1 + 0x80) < 6) && ((*(byte *)(iVar1 + 0xdc) & 1) != 0)) {
      if (*(int *)(iVar5 + 0xc) != *(int *)(iVar5 + 8)) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf9e(0,0,0,0);
      }
      iVar2 = thunk_FUN_ram_40390538(*(int *)(iVar5 + 0xc),*(int *)(iVar5 + 0x10) + param_3);
      *(int *)(iVar5 + 0xc) = iVar2;
      if (iVar2 == 0) {
        return 0xffffffff;
      }
      FUN_ram_4039c11e(*(int *)(iVar5 + 0x10) + iVar2,param_2,param_3);
      *(undefined4 *)(iVar5 + 8) = *(undefined4 *)(iVar5 + 0xc);
    }
  }
  else {
    FUN_ram_4039c11e();
    iVar5 = *(int *)(*(int *)(iVar1 + 0x24) + 4);
    *(int *)(iVar5 + 0x14) = *(int *)(iVar5 + 0x14) + param_3;
  }
  iVar5 = *(int *)(iVar1 + 0x24);
  uVar4 = *(uint *)(iVar5 + 0x20);
  uVar3 = uVar4 + param_3;
  *(uint *)(iVar5 + 0x20) = uVar3;
  *(uint *)(iVar5 + 0x24) = (uint)(uVar3 < uVar4) + *(int *)(iVar5 + 0x24);
  *(int *)(*(int *)(iVar5 + 4) + 0x10) = *(int *)(*(int *)(iVar5 + 4) + 0x10) + param_3;
  FUN_ram_420635ec(iVar1,4,param_2,param_3);
  local_30[2] = *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x20);
  uStack_24 = *(undefined4 *)(*(int *)(iVar1 + 0x24) + 0x24);
  local_30[1] = 0;
  local_30[0] = iVar1;
  FUN_ram_42063350(4,local_30,0x10);
  return 0;
}

