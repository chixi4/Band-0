
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_420590c8(int param_1,int param_2)

{
  char cVar1;
  undefined4 uVar2;
  byte bVar3;
  uint uVar4;
  undefined4 auStack_14 [2];
  
  cVar1 = DAT_ram_3fcc2543;
  *(undefined4 *)(param_1 + 0x30) = 0;
  *(undefined4 *)(param_1 + 0x34) = 0;
  if (cVar1 != '\0') {
    *(undefined4 *)(param_1 + 0x38) = _DAT_ram_3fcc2558;
  }
  uVar4 = _DAT_ram_3fcc255c;
  if (DAT_ram_3fcc2544 == '\0') {
    uVar4 = *(uint *)(param_1 + 0x38) >> 1;
  }
  *(uint *)(param_1 + 0x3c) = uVar4;
  uVar4 = _DAT_ram_3fcc2560;
  if (DAT_ram_3fcc2545 == '\0') {
    uVar4 = (uint)(*(int *)(param_1 + 0x38) * 7) >> 3;
  }
  *(uint *)(param_1 + 0x40) = uVar4;
  *(undefined4 *)(param_1 + 0x2c) = *(undefined4 *)(param_2 + 0x10);
  if (DAT_ram_3fcc2546 == '\0') {
    bVar3 = *(byte *)(param_1 + 7) & 0xfe;
  }
  else {
    uVar2 = FUN_ram_420523b8(_DAT_ram_3fcc2564);
    *(undefined4 *)(param_1 + 0x30) = uVar2;
    bVar3 = *(byte *)(param_1 + 7) | 1;
  }
  *(byte *)(param_1 + 7) = bVar3;
  if (DAT_ram_3fcc2547 != '\0') {
    uVar2 = FUN_ram_420523b8(_DAT_ram_3fcc2568);
    *(undefined4 *)(param_1 + 0x34) = uVar2;
  }
  if (DAT_ram_3fcc2548 != '\0') {
    auStack_14[0] = FUN_ram_420523b8(_DAT_ram_3fcc256c);
    FUN_ram_42052c76(0,auStack_14);
    if (DAT_ram_3fcc2549 != '\0') {
      auStack_14[0] = FUN_ram_420523b8(_DAT_ram_3fcc2570);
      FUN_ram_42052c76(1,auStack_14);
    }
  }
  return;
}

