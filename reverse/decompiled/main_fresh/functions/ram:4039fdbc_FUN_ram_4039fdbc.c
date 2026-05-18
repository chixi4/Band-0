
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint FUN_ram_4039fdbc(int param_1)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  int *piVar4;
  int iVar5;
  undefined4 uVar6;
  
  piVar4 = *(int **)(gp + -0x76c);
  uVar6 = *(undefined4 *)(param_1 + 0x18);
  do {
    iVar5 = *piVar4;
    iVar2 = FUN_ram_4039fe38(param_1);
    puVar1 = _DAT_ram_3fcb82b0;
    if (iVar5 == 0) {
      return -(uint)(iVar2 == 0) & 0x105;
    }
    if (iVar2 != 0) {
      return 0;
    }
    *(int *)(param_1 + 4) = iVar5;
    uVar3 = (*(code *)*puVar1)(param_1);
    if (uVar3 != 0) {
      return uVar3;
    }
    iVar2 = (**(code **)(*(int *)(param_1 + 4) + 8))(param_1,uVar6);
    if (iVar2 != 0) {
      *(undefined4 *)(param_1 + 4) = 0;
    }
    piVar4 = piVar4 + 1;
    uVar3 = (*(code *)_DAT_ram_3fcb82b0[1])(param_1,0);
  } while (uVar3 == 0);
  return uVar3;
}

