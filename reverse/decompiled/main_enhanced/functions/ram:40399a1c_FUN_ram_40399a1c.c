
undefined4 FUN_ram_40399a1c(int param_1,uint param_2,int param_3,int param_4,uint param_5)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  undefined4 uStack_18;
  undefined4 uStack_14;
  
  iVar2 = *(int *)(param_1 + 4);
  uVar3 = param_5 & 0xffff;
  if ((int)param_5 < 0) {
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 8;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x40000;
    *(uint *)(iVar2 + 8) = *(uint *)(iVar2 + 8) | 0x80000;
  }
  if (param_2 < 0x100) {
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x80000000;
    uVar1 = param_2 & 0xffff | 0x70000000;
  }
  else {
    *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) | 0x80000000;
    uVar1 = param_2 & 0xff | 0xf0000000;
  }
  *(uint *)(iVar2 + 0x18) = uVar1;
  *(uint *)(iVar2 + 0x14) = *(uint *)(iVar2 + 0x14) & 0x7ffffff | (param_3 + -1) * 0x8000000;
  *(uint *)(iVar2 + 0x10) = (uint)(param_3 != 0) << 0x1e | *(uint *)(iVar2 + 0x10) & 0xbfffffff;
  param_4 = param_4 + (uint)*(byte *)(param_1 + 0xc);
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xdfffffff | (uint)(param_4 != 0) << 0x1d;
  if (param_4 != 0) {
    *(uint *)(iVar2 + 0x14) = param_4 - 1U & 0xff | *(uint *)(iVar2 + 0x14) & 0xffffff00;
  }
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xefffffff;
  *(uint *)(iVar2 + 0x10) = *(uint *)(iVar2 + 0x10) & 0xf7ffffff;
  uStack_18 = *(uint *)(iVar2 + 8) & 0xffff3c9f;
  uStack_14 = *(uint *)(iVar2 + 0x10) & 0xffffcfff;
  if (uVar3 == 3) {
    uStack_18 = uStack_18 | 0x4020;
LAB_ram_40399bba:
    uVar3 = 0x1000;
  }
  else {
    if ((param_5 & 0xffff) >> 2 == 0) {
      if (uVar3 != 2) goto LAB_ram_40399b38;
      uStack_18 = uStack_18 | 0x4000;
      goto LAB_ram_40399bba;
    }
    if (uVar3 == 4) {
      uStack_18 = uStack_18 | 0x8000;
    }
    else {
      if (uVar3 != 5) {
                    /* WARNING: Subroutine does not return */
        FUN_ram_4039bf1e();
      }
      uStack_18 = uStack_18 | 0x8040;
    }
    uVar3 = 0x2000;
  }
  uStack_14 = uStack_14 | uVar3;
LAB_ram_40399b38:
  *(uint *)(iVar2 + 8) = uStack_18;
  *(uint *)(iVar2 + 0x10) = uStack_14;
  return 0;
}

