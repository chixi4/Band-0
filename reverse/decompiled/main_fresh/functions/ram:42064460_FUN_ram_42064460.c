
int FUN_ram_42064460(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int aiStack_24 [4];
  int iStack_14;
  
  if (param_1 == 0) {
    return -1;
  }
  iVar1 = 0;
  aiStack_24[0] = param_1;
  if (*(char *)(param_1 + 0xbc) == '\0') {
    if (param_2 < 0) {
      FUN_ram_420637b0(param_1,"ing it.",&DAT_ram_3c0c2c6c);
    }
    else {
      iVar1 = *(int *)(param_1 + 0x6c);
      if ((iVar1 == 0) || (iVar1 == 5)) {
        if (param_2 == 0) goto LAB_ram_42064664;
      }
      else if ((param_2 == 0) && (iVar1 == 4)) {
LAB_ram_42064664:
        FUN_ram_4206482a(**(undefined4 **)(param_1 + 0x20),".");
        goto LAB_ram_420644b8;
      }
      FUN_ram_4206493c(**(undefined4 **)(param_1 + 0x20),".",0x3c0ad100);
    }
LAB_ram_420644b8:
    iVar1 = (*(code *)&SUB_ram_400106ac)
                      (**(undefined4 **)(*(int *)(param_1 + 0x20) + 4),
                       *(undefined4 *)(param_1 + 0x90)," strengthens the work.",
                       *(undefined4 *)(&DAT_ram_3c0f762c + *(int *)(param_1 + 0x6c) * 4),
                       *(undefined4 *)(param_1 + 0x60));
    iVar3 = *(int *)(param_1 + 0x90);
    if (iVar3 <= iVar1) {
      return -1;
    }
    if (*(int *)(param_1 + 100) != 0) {
      iVar2 = (*(code *)&SUB_ram_400106ac)
                        (**(int **)(*(int *)(param_1 + 0x20) + 4) + iVar1,iVar3 - iVar1,
                         "hens the work.");
      iVar3 = *(int *)(param_1 + 0x90);
      iVar1 = iVar1 + iVar2;
      if (iVar3 <= iVar1) {
        return -1;
      }
    }
    iVar3 = (*(code *)&SUB_ram_400106ac)
                      (**(int **)(*(int *)(param_1 + 0x20) + 4) + iVar1,iVar3 - iVar1,
                       &DAT_ram_3c0c2d78," the work.");
    iVar1 = iVar1 + iVar3;
    if (*(int *)(param_1 + 0x90) <= iVar1) {
      return -1;
    }
    if (iVar1 < 0) {
      return iVar1;
    }
    *(undefined1 *)(aiStack_24[0] + 0xbc) = 1;
    *(undefined4 *)(aiStack_24[0] + 0xc0) = 0;
    *(undefined4 *)(aiStack_24[0] + 0xb4) = 0;
    *(undefined4 *)(aiStack_24[0] + 0xb8) = 0;
  }
  if (*(int *)(aiStack_24[0] + 0xb8) < 1) {
LAB_ram_42064594:
    iStack_14 = *(int *)(aiStack_24[0] + 0x90) - iVar1;
    while( true ) {
      iVar3 = aiStack_24[0];
      iVar2 = FUN_ram_4206498a(**(undefined4 **)(aiStack_24[0] + 0x20),
                               *(undefined4 *)(aiStack_24[0] + 0xc0),
                               *(int *)(*(undefined4 **)(aiStack_24[0] + 0x20))[1] + iVar1,
                               &iStack_14);
      *(int *)(iVar3 + 0xc0) = iVar2;
      if ((iVar2 == 0) || (iStack_14 < 1)) break;
      if (iVar1 != 0) {
        iStack_14 = iStack_14 + iVar1;
      }
      *(undefined1 *)(iStack_14 + **(int **)(*(int *)(aiStack_24[0] + 0x20) + 4)) = 0;
      *(undefined4 *)(aiStack_24[0] + 0xb4) = 0;
      *(int *)(aiStack_24[0] + 0xb8) = iStack_14;
      iVar1 = iStack_14;
      while (0 < iVar1) {
        iVar3 = FUN_ram_420a348c(*(undefined4 *)(aiStack_24[0] + 0x1c),
                                 *(int *)(aiStack_24[0] + 0xb4) +
                                 **(int **)(*(int *)(aiStack_24[0] + 0x20) + 4),iVar1,
                                 *(undefined4 *)(aiStack_24[0] + 0x88));
        if (iVar3 < 1) {
          FUN_ram_42063b28(aiStack_24[0]);
          return 0x7003;
        }
        iVar1 = *(int *)(aiStack_24[0] + 0xb8) - iVar3;
        *(int *)(aiStack_24[0] + 0xb8) = iVar1;
        *(int *)(aiStack_24[0] + 0xb4) = *(int *)(aiStack_24[0] + 0xb4) + iVar3;
      }
      iStack_14 = *(int *)(aiStack_24[0] + 0x90);
      iVar1 = 0;
    }
    *(undefined4 *)(aiStack_24[0] + 0xb4) = 0;
    *(undefined4 *)(aiStack_24[0] + 0xb8) = *(undefined4 *)(aiStack_24[0] + 0x44);
    *(undefined4 *)(aiStack_24[0] + 0x80) = 3;
    FUN_ram_420635ec(aiStack_24[0],2,0,0);
    FUN_ram_42063350(2,aiStack_24,4);
    return 0;
  }
  iVar3 = FUN_ram_42063ad2(aiStack_24[0],
                           **(int **)(*(int *)(aiStack_24[0] + 0x20) + 4) +
                           *(int *)(aiStack_24[0] + 0xb4));
  if (-1 < iVar3) {
    iVar2 = *(int *)(aiStack_24[0] + 0xb8) - iVar3;
    *(int *)(aiStack_24[0] + 0xb8) = iVar2;
    *(int *)(aiStack_24[0] + 0xb4) = *(int *)(aiStack_24[0] + 0xb4) + iVar3;
    if ((*(char *)(aiStack_24[0] + 0xc4) == '\0') || (iVar2 < 1)) goto LAB_ram_42064594;
  }
  return 0x7003;
}

