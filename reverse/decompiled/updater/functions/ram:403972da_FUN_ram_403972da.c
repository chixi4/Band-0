
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_403972da(undefined4 param_1,undefined4 param_2,uint param_3,uint param_4,int param_5,
                     undefined4 *param_6)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  int iVar4;
  uint uVar5;
  
  uVar2 = FUN_ram_403971b0(param_1,1);
  FUN_ram_40397142(param_4,param_5);
  uVar1 = (param_5 + -1 + uVar2) / uVar2;
  uVar3 = FUN_ram_403971b0(param_1,uVar1);
  *param_6 = uVar3;
  iVar4 = 0xe;
  uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
  if (uVar5 != 0) {
    iVar4 = (uVar5 != 1) + 0xf;
  }
  param_4 = param_4 >> iVar4;
  uVar1 = uVar1 + param_4;
  for (; uVar1 != param_4; param_4 = param_4 + 1) {
    iVar4 = 0xe;
    uVar5 = _DAT_ram_600c40c8 >> 3 & 3;
    if (uVar5 != 0) {
      iVar4 = (uVar5 != 1) + 0xf;
    }
    *(uint *)((((param_3 & 0x1fffff) >> iVar4) + 0x18031400) * 4) = param_4;
    param_3 = param_3 + uVar2;
  }
  return;
}

