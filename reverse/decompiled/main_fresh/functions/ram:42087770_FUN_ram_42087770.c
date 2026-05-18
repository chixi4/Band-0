
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int * FUN_ram_42087770(undefined4 param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  
  iVar1 = _DAT_ram_3fcc4018;
  uVar2 = 1;
  while( true ) {
    if (*(byte *)(*(int *)(gp + -0xb4) + 0x3f6) < uVar2) {
      return (int *)0x0;
    }
    iVar5 = uVar2 * 4 + _DAT_ram_3fcc4018;
    if (*(int *)(iVar5 + 0xec) == 0) break;
    uVar2 = uVar2 + 1 & 0xff;
  }
  piVar3 = (int *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x3b8);
  *(int **)(iVar5 + 0xec) = piVar3;
  if (piVar3 == (int *)0x0) {
    return (int *)0x0;
  }
  FUN_ram_42086262(piVar3,iVar1);
  *(char *)(piVar3 + 0x4d) = (char)(uVar2 + 7);
  if (*(int *)(&DAT_ram_3fcc4008 + ((uVar2 + 7 & 0xff) + 0x4c) * 4) != 0) {
    thunk_EXT_FUN_ram_40011e74();
    (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))
              (*(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(piVar3 + 0x4d) + 0x4c) * 4));
    *(undefined4 *)(&DAT_ram_3fcc4008 + (*(byte *)(piVar3 + 0x4d) + 0x4c) * 4) = 0;
  }
  FUN_ram_4039c11e(*(int *)(iVar5 + 0xec) + 4,param_1,6);
  uVar4 = *(uint *)(iVar1 + 0x100);
  *piVar3 = iVar1;
  *(uint *)(iVar1 + 0x100) = uVar4 | 1 << (uVar2 & 0x1f);
  return piVar3;
}

