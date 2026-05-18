
void FUN_ram_42027768(int param_1)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  byte bVar4;
  byte bVar5;
  undefined1 auStack_11 [13];
  
  if (((*(byte *)(param_1 + 0x13) & 8) != 0) && ((*(byte *)(param_1 + 0x1a) & 8) != 0)) {
    *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 0x10;
  }
  bVar5 = *(byte *)(param_1 + 8);
  bVar4 = *(byte *)(param_1 + 0x1c);
  bVar2 = *(byte *)(param_1 + 0x1d);
  bVar1 = bVar5 & 0x10;
  if ((bVar5 & 0x10) != 0) {
    bVar4 = bVar4 & 0xfe;
    bVar2 = bVar2 & 0xfe;
  }
  bVar3 = bVar4;
  if ((bVar5 & 1) != 0) {
    bVar3 = bVar2;
  }
  if (((*(byte *)(param_1 + 0x13) & 1) != 0) && ((*(byte *)(param_1 + 0x1a) & 1) != 0)) {
    bVar5 = bVar5 | 0x20;
    *(byte *)(param_1 + 8) = bVar5;
  }
  if ((bVar4 == 0 && bVar2 == 0) && bVar1 == 0) {
    *(byte *)(param_1 + 8) = bVar5 & 0xdf;
  }
  bVar5 = 0;
  if ((bVar3 & 1) != 0) {
    bVar5 = 3;
  }
  if ((bVar3 & 2) != 0) {
    bVar5 = bVar5 | 0xc;
  }
  *(byte *)(param_1 + 0xe) = bVar5;
  if ((bVar3 & 4) != 0) {
    *(byte *)(param_1 + 0xe) = *(byte *)(param_1 + 0xe) | 0x10;
  }
  bVar5 = *(byte *)(param_1 + 0x1b);
  if (*(byte *)(param_1 + 0x14) < *(byte *)(param_1 + 0x1b)) {
    bVar5 = *(byte *)(param_1 + 0x14);
  }
  *(byte *)(param_1 + 0xf) = bVar5;
  FUN_ram_42027010(param_1,auStack_11);
  return;
}

