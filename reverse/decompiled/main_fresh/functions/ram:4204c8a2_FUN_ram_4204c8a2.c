
int FUN_ram_4204c8a2(int param_1,uint param_2,uint param_3,undefined4 param_4)

{
  uint uVar1;
  int iVar2;
  undefined4 extraout_a4;
  code *pcVar3;
  uint uVar4;
  undefined4 uStack_24;
  
  if (param_2 < param_3) {
    param_3 = param_3 - 1;
    uVar1 = param_3 >> 4;
    for (; (int)param_2 <= (int)param_3; param_3 = param_3 - 1) {
      iVar2 = FUN_ram_4204c6b8(param_1 + 0x18,param_3,param_4);
      if (iVar2 != 0) goto LAB_ram_4204c88c;
      uVar4 = 0xffffffff;
      if (param_2 != param_3) {
        uVar4 = param_3 - 1 >> 4;
      }
      if (uVar1 != uVar4) {
        uStack_24 = *(undefined4 *)(param_1 + 0x18 + uVar1 * 4);
        pcVar3 = *(code **)(**(int **)(param_1 + 0x50) + 0x14);
        iVar2 = (*pcVar3)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x20 + uVar1 * 4,
                          &uStack_24,4,extraout_a4,pcVar3);
        if (iVar2 != 0) {
          return iVar2;
        }
      }
      uVar1 = uVar4;
    }
    iVar2 = 0;
  }
  else {
LAB_ram_4204c88c:
    iVar2 = -1;
  }
  return iVar2;
}

