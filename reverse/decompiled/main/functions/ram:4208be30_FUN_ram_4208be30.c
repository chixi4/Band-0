
void FUN_ram_4208be30(int param_1,int *param_2)

{
  uint uVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  
  puVar2 = *(uint **)(param_1 + 0x24);
  param_2[2] = puVar2[4] >> 0x13 & 1;
  *(char *)(param_2 + 4) = (char)*(undefined2 *)(param_1 + 0x16) + -4;
  iVar4 = *(int *)(*(int *)(param_1 + 4) + 4);
  param_2[6] = (uint)(*(char *)((int)puVar2 + 0x13) != '\x01');
  uVar1 = puVar2[3];
  uVar3 = *puVar2;
  param_2[3] = iVar4;
  param_2[5] = (uint)(byte)uVar1;
  if ((uVar3 & 0x40000) != 0) {
    iVar4 = iVar4 + 8;
  }
  *param_2 = iVar4 + 4;
  param_2[1] = iVar4 + 10;
  return;
}

