
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4039976a(undefined4 param_1,uint param_2,uint *param_3,undefined4 *param_4)

{
  int iVar1;
  uint uVar2;
  int iVar3;
  uint uVar4;
  uint uVar5;
  
  iVar1 = FUN_ram_403995a4(param_1,param_2,1,3);
  if (iVar1 != 0) goto LAB_ram_40399790;
  do {
    iVar1 = FUN_ram_4039bf1e();
LAB_ram_40399790:
    iVar3 = 0xe;
    uVar4 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar4 != 0) {
      iVar3 = (uVar4 != 1) + 0xf;
    }
    uVar4 = (param_2 & 0x1fffff) >> iVar3;
  } while (0x3f < uVar4);
  uVar4 = *(uint *)((uVar4 + 0x18031400) * 4);
  if ((uVar4 & 0x40) == 0) {
    uVar2 = FUN_ram_403994b6(param_1,1);
    *param_4 = 1;
    iVar3 = 0xe;
    uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar5 != 0) {
      iVar3 = (uVar5 != 1) + 0xf;
    }
    *param_3 = (uVar4 & 0x3f) << iVar3 | param_2 % uVar2;
  }
  else {
    iVar1 = 0;
  }
  return iVar1;
}

