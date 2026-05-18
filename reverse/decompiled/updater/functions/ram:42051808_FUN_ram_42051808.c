
void FUN_ram_42051808(int param_1,int *param_2,int *param_3,int *param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  int iStack_38;
  int iStack_34;
  undefined1 auStack_30 [4];
  undefined1 *puStack_2c;
  int *piStack_28;
  int *piStack_24;
  
  if (param_2 == (int *)0x0) {
    param_2 = (int *)&DAT_ram_3c0793d4;
  }
  if (param_3 == (int *)0x0) {
    param_3 = (int *)&DAT_ram_3c0793d4;
  }
  if (param_4 == (int *)0x0) {
    param_4 = (int *)&DAT_ram_3c0793d4;
  }
  iVar3 = 0;
  if (*param_2 == 0) {
    iVar3 = FUN_ram_42051572(param_1,param_2,auStack_30);
    if (iVar3 != 0) {
      uVar1 = 0x10;
      puStack_2c = auStack_30;
      goto LAB_ram_42051856;
    }
    iVar3 = 1;
  }
  uVar1 = 0;
LAB_ram_42051856:
  iVar4 = *(int *)(param_1 + 8);
  if (*param_3 != iVar4) {
    *(int *)(param_1 + 8) = *param_3;
    piStack_28 = &iStack_38;
    uVar1 = uVar1 | 0x40;
    iStack_38 = iVar4;
  }
  iVar4 = *(int *)(param_1 + 0xc);
  if (*param_4 != iVar4) {
    *(int *)(param_1 + 0xc) = *param_4;
    piStack_24 = &iStack_34;
    uVar1 = uVar1 | 0x20;
    iStack_34 = iVar4;
  }
  if (iVar3 == 0) {
    iVar3 = FUN_ram_42051572(param_1,param_2,auStack_30);
    if (iVar3 == 0) {
      uVar2 = 0;
      if (uVar1 != 0) {
        uVar2 = uVar1 | 0x80;
      }
    }
    else {
      uVar2 = uVar1 | 0x90;
      puStack_2c = auStack_30;
    }
    uVar2 = uVar2 | 0x400;
  }
  else {
    uVar2 = uVar1 | 0x80;
    if (uVar1 == 0) {
      return;
    }
  }
  FUN_ram_420517cc(param_1,uVar2,&puStack_2c);
  return;
}

