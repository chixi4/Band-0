
int FUN_ram_4204c704(int param_1,uint param_2)

{
  int iVar1;
  undefined4 extraout_a4;
  code *pcVar2;
  undefined4 uStack_14;
  
  iVar1 = FUN_ram_4204c6b8(param_1 + 0x18);
  if (iVar1 == 0) {
    iVar1 = (param_2 >> 4) * 4;
    uStack_14 = *(undefined4 *)(param_1 + 0x18 + iVar1);
    pcVar2 = *(code **)(**(int **)(param_1 + 0x50) + 0x14);
    iVar1 = (*pcVar2)(*(int **)(param_1 + 0x50),*(int *)(param_1 + 8) + 0x20 + iVar1,&uStack_14,4,
                      extraout_a4,pcVar2);
    if (iVar1 != 0) {
      *(undefined4 *)(param_1 + 0xc) = 0;
    }
  }
  else {
    iVar1 = -1;
  }
  return iVar1;
}

