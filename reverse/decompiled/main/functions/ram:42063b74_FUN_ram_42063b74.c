
undefined4 FUN_ram_42063b74(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  int aiStack_14 [2];
  
  if (*(int *)(param_1 + 0x80) == 0) {
    return 0x103;
  }
  aiStack_14[0] = param_1;
  iVar1 = FUN_ram_420637c6();
  iVar3 = aiStack_14[0];
  if (iVar1 != 0) {
    FUN_ram_42063b28(aiStack_14[0]);
    return 0xffffffff;
  }
  if (1 < *(uint *)(aiStack_14[0] + 0x80)) {
    return 0;
  }
  uVar2 = FUN_ram_420a33b0(*(undefined4 *)(aiStack_14[0] + 0x18),
                           *(undefined4 *)(aiStack_14[0] + 0x4c));
  *(undefined4 *)(iVar3 + 0x1c) = uVar2;
  if (*(int *)(aiStack_14[0] + 0x1c) != 0) {
    if (*(char *)(aiStack_14[0] + 0xc4) == '\0') {
      iVar3 = FUN_ram_420a3468();
      if (iVar3 < 0) {
        return 0x7002;
      }
    }
    else {
      iVar3 = FUN_ram_420a3474(*(int *)(aiStack_14[0] + 0x1c),*(undefined4 *)(aiStack_14[0] + 0x50),
                               *(undefined4 *)(aiStack_14[0] + 0x54),
                               *(undefined4 *)(aiStack_14[0] + 0x88));
      if (iVar3 == -1) {
        iVar3 = (*(code *)&SUB_ram_40010504)
                          (*(undefined4 *)(aiStack_14[0] + 0x4c),&DAT_ram_3c0c2d24);
        if (iVar3 != 0) {
          return 0x7002;
        }
        return 0x102;
      }
      if (iVar3 == 0) {
        return 0x7006;
      }
    }
    *(undefined4 *)(aiStack_14[0] + 0x80) = 2;
    FUN_ram_420635ec(aiStack_14[0],1,0,0);
    FUN_ram_42063350(1,aiStack_14,4);
    return 0;
  }
  return 0x7005;
}

