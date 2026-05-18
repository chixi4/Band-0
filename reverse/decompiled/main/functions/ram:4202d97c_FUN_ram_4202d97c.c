
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202d97c(uint param_1,uint param_2,uint param_3)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  thunk_FUN_ram_4202b7dc();
  iVar1 = _DAT_ram_3fcb6b9c;
  piVar2 = *(int **)(_DAT_ram_3fcb6b9c + 0x20);
  piVar5 = (int *)0x0;
  do {
    piVar3 = piVar2;
    if (piVar3 == (int *)0x0) {
LAB_ram_4202d9d4:
      thunk_FUN_ram_4202b7f6();
      return (int)piVar3;
    }
    if (((*(ushort *)(piVar3 + 2) == param_1) && (*(byte *)((int)piVar3 + 10) == param_2)) &&
       ((param_3 == 0 || (*(byte *)((int)piVar3 + 0xb) == param_3)))) {
      if (piVar5 == (int *)0x0) {
        iVar4 = **(int **)(_DAT_ram_3fcb6b9c + 0x20);
        *(int *)(_DAT_ram_3fcb6b9c + 0x20) = iVar4;
        if (iVar4 != 0) goto LAB_ram_4202d9d4;
        piVar5 = (int *)(iVar1 + 0x20);
      }
      else {
        iVar4 = *(int *)*piVar5;
        *piVar5 = iVar4;
        if (iVar4 != 0) goto LAB_ram_4202d9d4;
      }
      *(int **)(iVar1 + 0x24) = piVar5;
      goto LAB_ram_4202d9d4;
    }
    piVar2 = (int *)*piVar3;
    piVar5 = piVar3;
  } while( true );
}

