
int FUN_ram_42071a6a(int param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = *(int *)(param_1 + 0x40) + 7U >> 3;
  if (param_4 < uVar1) {
    uVar1 = param_4;
  }
  iVar2 = FUN_ram_420683d6(param_2,param_3,uVar1);
  iVar4 = iVar2;
  if (iVar2 == 0) {
    if ((uVar1 * 8 <= *(uint *)(param_1 + 0x40)) ||
       (iVar4 = FUN_ram_42068484(param_2,uVar1 * 8 - *(uint *)(param_1 + 0x40)), iVar4 == 0)) {
      iVar3 = FUN_ram_42068514(param_2,param_1 + 0x34);
      iVar4 = iVar2;
      if (-1 < iVar3) {
        iVar4 = FUN_ram_420687f0(param_2,param_2,param_1 + 0x34);
        return iVar4;
      }
    }
  }
  return iVar4;
}

