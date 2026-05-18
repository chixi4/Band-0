
void FUN_ram_40393222(int param_1,undefined4 *param_2,undefined2 *param_3)

{
  byte bVar1;
  char cVar2;
  uint uVar3;
  char cVar4;
  uint *puVar5;
  uint uVar6;
  uint uVar7;
  
  puVar5 = (uint *)*param_2;
  uVar6 = puVar5[2];
  uVar7 = puVar5[3];
  *(uint *)(param_3 + 8) = puVar5[4];
  *(uint *)(param_3 + 10) = puVar5[5];
  *(undefined4 *)(param_3 + 0x12) = param_2[2];
  *(undefined4 *)(param_3 + 0x10) = param_2[1];
  uVar3 = puVar5[1];
  *(uint *)(param_3 + 0xc) = uVar6;
  *(uint *)(param_3 + 0xe) = uVar7;
  *param_3 = (short)uVar3;
  uVar3 = *puVar5;
  if ((uVar3 & 0x20) == 0) {
    bVar1 = *(byte *)(param_1 + 0xc);
  }
  else {
    bVar1 = (byte)puVar5[10];
  }
  *(uint *)(param_3 + 2) = (uint)bVar1;
  if ((uVar3 & 0x40) == 0) {
    bVar1 = *(byte *)(param_1 + 0xd);
  }
  else {
    bVar1 = *(byte *)((int)puVar5 + 0x29);
  }
  *(uint *)(param_3 + 4) = (uint)bVar1;
  if ((uVar3 & 0x80) == 0) {
    bVar1 = *(byte *)(param_1 + 0xe);
  }
  else {
    bVar1 = *(byte *)((int)puVar5 + 0x2a);
  }
  *(uint *)(param_3 + 6) = (uint)bVar1;
  *(uint *)(param_3 + 0x16) = uVar3 >> 8 & 1;
  cVar4 = '\x02';
  if ((uVar3 & 1) == 0) {
    cVar4 = (-((uVar3 & 2) == 0) & 0xfdU) + 4;
  }
  *(char *)(param_3 + 0x15) = cVar4;
  cVar2 = cVar4;
  if ((uVar3 & 0x10) == 0) {
    cVar2 = '\x01';
  }
  *(char *)((int)param_3 + 0x29) = cVar2;
  if ((uVar3 & 0x200) == 0) {
    cVar4 = '\x01';
  }
  *(char *)(param_3 + 0x14) = cVar4;
  return;
}

