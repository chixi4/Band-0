
undefined4 FUN_ram_42054f64(int param_1)

{
  ushort uVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int *piVar6;
  
  piVar2 = *(int **)(param_1 + 0x70);
  if (*(int **)(param_1 + 0x70) != (int *)0x0) {
    do {
      piVar6 = piVar2;
      piVar2 = (int *)*piVar6;
    } while ((int *)*piVar6 != (int *)0x0);
    uVar3 = FUN_ram_4205073e(*(undefined2 *)(piVar6[3] + 0xc));
    if ((uVar3 & 7) == 0) {
      uVar1 = *(ushort *)(piVar6[3] + 0xc);
      uVar3 = FUN_ram_4205073e(1);
      iVar5 = piVar6[3];
      uVar3 = uVar1 | uVar3;
      *(char *)(iVar5 + 0xc) = (char)uVar3;
      *(char *)(iVar5 + 0xd) = (char)(uVar3 >> 8);
      *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x20;
      return 0;
    }
  }
  uVar4 = FUN_ram_42054ed2(param_1,1);
  return uVar4;
}

