
int FUN_ram_4201cbf6(int param_1,int param_2)

{
  int iVar1;
  undefined1 auStack_110 [264];
  
  if (param_2 < 0x130) {
    if (param_2 < 0x12d) {
LAB_ram_4201cc12:
      if (*(char *)(param_1 + 0x2e) == '\0') {
        return 0;
      }
      if (param_2 == 0xce) {
        return 0;
      }
      return 0x700a;
    }
  }
  else if (1 < param_2 - 0x133U) {
    if (param_2 == 0x130) {
      return 0x7009;
    }
    if (param_2 == 0x1a0) {
      return 0x700a;
    }
    if (param_2 != 0x191) {
      if (399 < param_2) {
        return -1;
      }
      goto LAB_ram_4201cc12;
    }
    if (*(int *)(param_1 + 0x30) == 0) {
      return -1;
    }
    *(int *)(param_1 + 0x30) = *(int *)(param_1 + 0x30) + -1;
    iVar1 = FUN_ram_4205c970(*(undefined4 *)(param_1 + 0x10));
    goto LAB_ram_4201cc38;
  }
  iVar1 = FUN_ram_4205c66c(*(undefined4 *)(param_1 + 0x10));
LAB_ram_4201cc38:
  if (iVar1 == 0) {
    do {
      iVar1 = FUN_ram_4205ba92(*(undefined4 *)(param_1 + 0x10),auStack_110,0x100);
    } while (0 < iVar1);
    return 0;
  }
  return iVar1;
}

