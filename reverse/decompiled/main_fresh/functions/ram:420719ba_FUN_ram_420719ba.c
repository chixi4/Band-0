
int FUN_ram_420719ba(int param_1,int *param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  
  if ((*(int *)(param_1 + 8) == 1) && (*(int *)(param_1 + 0x48) != 0)) {
    iVar1 = param_1 + 0xa4;
    iVar2 = FUN_ram_420717ce(param_1 + 0xc,iVar1,param_1 + 0x8c,param_1 + 0x6c);
    if (iVar2 != 0) {
      return iVar2;
    }
    uVar3 = FUN_ram_420683c4(iVar1);
    if (uVar3 <= param_4) {
      *param_2 = (uint)((*(uint *)(param_1 + 0x48) & 7) != 0) + (*(uint *)(param_1 + 0x48) >> 3);
      iVar2 = FUN_ram_4207212e(param_1 + 0xc);
      if (iVar2 != 2) {
        iVar1 = FUN_ram_42068428(iVar1,param_3,*param_2);
        return iVar1;
      }
      iVar1 = FUN_ram_4206841a(iVar1);
      return iVar1;
    }
  }
  return -0x4f80;
}

