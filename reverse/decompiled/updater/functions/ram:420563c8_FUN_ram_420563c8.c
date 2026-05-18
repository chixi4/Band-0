
void FUN_ram_420563c8(int param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int iStack_18;
  undefined4 auStack_14 [2];
  
  if (param_1 != 0) {
    iVar1 = *(int *)(param_1 + 0x20);
    if (iVar1 != 0) {
      iVar2 = *(int *)(iVar1 + 0x38);
      *(undefined4 *)(iVar1 + 0x20) = 0;
      if (iVar2 != -1) {
        if (iVar2 == 0) {
          iVar2 = 0x78;
        }
        *(int *)(iVar1 + 0x24) = iVar2;
      }
      uVar3 = *(uint *)(iVar1 + 0x3c);
      if (uVar3 != 0xffffffff) {
        if (uVar3 == 0) {
          uVar3 = *(uint *)(iVar1 + 0x24) >> 1;
        }
        *(uint *)(iVar1 + 0x10) = uVar3;
        *(uint *)(iVar1 + 0x18) = uVar3;
      }
      iVar2 = *(int *)(iVar1 + 0x40);
      if (iVar2 != -1) {
        if (iVar2 == 0) {
          iVar2 = (*(uint *)(iVar1 + 0x24) >> 3) * 7;
        }
        *(int *)(iVar1 + 0x14) = iVar2;
        *(int *)(iVar1 + 0x1c) = iVar2;
      }
      if ((*(uint *)(iVar1 + 0x14) <= *(uint *)(iVar1 + 0x10)) && (*(uint *)(iVar1 + 0x14) != 0)) {
        *(undefined4 *)(iVar1 + 0x10) = 0;
      }
      if ((*(byte *)(iVar1 + 7) & 1) == 0) {
        iStack_18 = 0xff;
        if ((char)*(byte *)(iVar1 + 0x2c) < '\0') {
          if (*(byte *)(iVar1 + 0x2c) < 0xc0) {
            iStack_18 = 0x10000;
          }
          else {
            iStack_18 = 0x1000000;
          }
          iStack_18 = iStack_18 + -1;
        }
      }
      else {
        iStack_18 = *(int *)(iVar1 + 0x30);
      }
      auStack_14[0] = *(undefined4 *)(iVar1 + 0x34);
      FUN_ram_420561aa(iVar1,10);
      if (*(char *)(iVar1 + 8) != '\0') {
        FUN_ram_42055a5a(0x42047918,param_1);
        *(undefined1 *)(iVar1 + 8) = 0;
      }
      FUN_ram_42051808(param_1,iVar1 + 0x2c,&iStack_18,auStack_14);
    }
    return;
  }
  return;
}

