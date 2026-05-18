
int FUN_ram_4204e8f2(uint *param_1,ushort param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  
  piVar4 = (int *)&DAT_ram_3fcb576c;
  iVar1 = 0;
  while ((FUN_ram_420599c2(), *piVar4 != 0 || (*(char *)((int)piVar4 + 0xf) != '\0'))) {
    iVar1 = iVar1 + 1;
    FUN_ram_420599ec();
    piVar4 = piVar4 + 5;
    if (iVar1 == 4) {
      return -1;
    }
  }
  iVar2 = iVar1 * 0x14;
  (&DAT_ram_3fcb577b)[iVar2] = 1;
  *(undefined1 *)(iVar2 + 0x3fcb577c) = 0;
  *(uint **)(&DAT_ram_3fcb576c + iVar2) = param_1;
  FUN_ram_420599ec();
  uVar3 = *param_1;
  *(undefined4 *)(iVar2 + 0x3fcb5770) = 0;
  *(undefined2 *)(iVar2 + 0x3fcb5774) = 0;
  *(ushort *)(iVar2 + 0x3fcb5776) = (uVar3 & 0xf0) != 0x10 | param_2;
  *(undefined2 *)(iVar2 + 0x3fcb5778) = 0;
  return iVar1 + 0x3c;
}

