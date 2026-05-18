
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_40391ce4(uint param_1,int param_2)

{
  bool bVar1;
  bool bVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  
  FUN_ram_4039691e();
  FUN_ram_40396966();
  iVar3 = *(int *)(param_1 * 4 + 0x3fcc1d10);
  iVar5 = iVar3 + -1;
  if (param_2 == 0) {
    iVar3 = iVar3 + 1;
    iVar5 = iVar3;
  }
  *(int *)(param_1 * 4 + 0x3fcc1d10) = iVar5;
  if (iVar3 == 1) {
    uVar4 = 1 << (param_1 & 0x1f);
    if (param_2 == 0) {
      _DAT_ram_3fcc51cc = _DAT_ram_3fcc51cc | uVar4;
    }
    else {
      _DAT_ram_3fcc51cc = _DAT_ram_3fcc51cc & ~uVar4;
    }
    bVar2 = true;
    bVar1 = bVar2;
    if (_DAT_ram_3fcc51cc < 8) {
      if (_DAT_ram_3fcc51cc < 4) {
        uVar4 = 1;
        bVar1 = true;
        if (_DAT_ram_3fcc51cc < 2) {
          uVar4 = DAT_ram_3fcc51b1 ^ 1;
          bVar1 = bVar2;
        }
      }
      else {
        uVar4 = 2;
      }
    }
    else {
      uVar4 = 3;
    }
  }
  else {
    uVar4 = *(uint *)(gp + -0x770);
    bVar1 = false;
  }
  FUN_ram_4039691e();
  FUN_ram_40396994();
  if (bVar1) {
    FUN_ram_40391c00(uVar4);
    return;
  }
  return;
}

