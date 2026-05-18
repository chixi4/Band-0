
uint FUN_ram_4201fc1c(int param_1,undefined4 param_2,uint param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  if ((param_3 & 0x1f) != 0) {
    return 0xffffffff;
  }
  uVar3 = *(uint *)(param_1 + 0x38);
  uVar1 = uVar3;
  if ((uVar3 != 0xffffffff) && (uVar1 = *(uint *)(param_1 + 0x3c), uVar1 != 0xffffffff)) {
    if (uVar3 < 0x7e) {
      iVar2 = *(int *)(param_1 + 8) + 0x40;
      pcVar4 = *(code **)(**(int **)(param_1 + 0x50) + 0x18);
      uVar1 = (*pcVar4)(*(int **)(param_1 + 0x50),uVar3 * 0x20 + iVar2,param_2,param_3,iVar2,
                        uVar3 * 0x20,pcVar4);
      if (uVar1 == 0) {
        uVar3 = param_3 >> 5 & 0xffff;
        uVar1 = FUN_ram_4201fb84(param_1,*(int *)(param_1 + 0x38),*(int *)(param_1 + 0x38) + uVar3,2
                                );
        if (uVar1 != 0) {
          return uVar1;
        }
        *(short *)(param_1 + 0x40) = *(short *)(param_1 + 0x40) + (short)(param_3 >> 5);
        *(uint *)(param_1 + 0x38) = *(int *)(param_1 + 0x38) + uVar3;
        return 0;
      }
    }
    else {
      uVar1 = 0xffffffff;
    }
    *(undefined4 *)(param_1 + 0xc) = 0;
  }
  return uVar1;
}

