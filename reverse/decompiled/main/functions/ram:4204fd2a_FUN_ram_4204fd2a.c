
int FUN_ram_4204fd2a(uint *param_1,ushort param_2)

{
  char cVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  
  piVar5 = (int *)&DAT_ram_3fcc1eb4;
  iVar2 = 0;
  while ((FUN_ram_4205c96c(), *piVar5 != 0 || (*(char *)((int)piVar5 + 0xf) != '\0'))) {
    iVar2 = iVar2 + 1;
    FUN_ram_4205c996();
    piVar5 = piVar5 + 5;
    if (iVar2 == 0xc) {
      return -1;
    }
  }
  iVar3 = iVar2 * 0x14;
  (&DAT_ram_3fcc1ec3)[iVar3] = 1;
  *(undefined1 *)(iVar3 + 0x3fcc1ec4) = 0;
  *(uint **)(&DAT_ram_3fcc1eb4 + iVar3) = param_1;
  FUN_ram_4205c996();
  cVar1 = (&DAT_ram_3fcc1ec2)[iVar3];
  *(undefined4 *)(iVar3 + 0x3fcc1eb8) = 0;
  if (cVar1 != '\0') {
    FUN_ram_4039bf1e();
  }
  uVar4 = *param_1;
  *(undefined2 *)(iVar3 + 0x3fcc1ebc) = 0;
  *(undefined2 *)(iVar3 + 0x3fcc1ec0) = 0;
  *(ushort *)(iVar3 + 0x3fcc1ebe) = (uVar4 & 0xf0) != 0x10 | param_2;
  return iVar2 + 0x34;
}

