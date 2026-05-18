
uint FUN_ram_420a47e4(int param_1)

{
  uint uVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x18) == 0) {
    return 0xffff8f00;
  }
  iVar2 = *(int *)(param_1 + 0xb4);
  if (iVar2 != 0) {
    do {
      uVar1 = (**(code **)(param_1 + 0x18))
                        (*(undefined4 *)(param_1 + 0x24),*(int *)(param_1 + 0x9c) - iVar2);
      if ((int)uVar1 < 1) {
        return uVar1;
      }
      if (*(uint *)(param_1 + 0xb4) < uVar1) {
        return 0xffff9400;
      }
      iVar2 = *(uint *)(param_1 + 0xb4) - uVar1;
      *(int *)(param_1 + 0xb4) = iVar2;
    } while (iVar2 != 0);
    *(int *)(param_1 + 0x9c) = *(int *)(param_1 + 0x94) + 8;
    FUN_ram_420a47c2(param_1,*(undefined4 *)(param_1 + 0x40));
  }
  return 0;
}

