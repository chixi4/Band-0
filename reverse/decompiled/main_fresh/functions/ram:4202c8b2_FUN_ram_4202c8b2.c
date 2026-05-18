
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202c8b2(code *param_1,undefined4 param_2,int param_3,undefined4 *param_4)

{
  int *piVar1;
  int *piVar2;
  int iVar3;
  undefined4 *puVar4;
  int *piVar5;
  int *piVar6;
  
  *param_4 = 0;
  param_4[1] = param_4;
  thunk_FUN_ram_4202b7dc();
  piVar6 = (int *)*_DAT_ram_3fcb6b98;
  piVar2 = (int *)0x0;
  do {
    do {
      piVar5 = piVar2;
      piVar2 = piVar6;
      if (piVar2 == (int *)0x0) goto LAB_ram_4202c916;
      piVar6 = (int *)*piVar2;
      iVar3 = (*param_1)(piVar2,param_2);
      piVar1 = _DAT_ram_3fcb6b98;
    } while (iVar3 == 0);
    if (piVar5 == (int *)0x0) {
      iVar3 = *(int *)*_DAT_ram_3fcb6b98;
      *_DAT_ram_3fcb6b98 = iVar3;
      if (iVar3 == 0) {
        piVar1[1] = (int)piVar1;
      }
    }
    else {
      iVar3 = *(int *)*piVar5;
      *piVar5 = iVar3;
      if (iVar3 == 0) {
        _DAT_ram_3fcb6b98[1] = (int)piVar5;
      }
    }
    puVar4 = (undefined4 *)param_4[1];
    *piVar2 = 0;
    *puVar4 = piVar2;
    param_4[1] = piVar2;
    piVar2 = piVar5;
  } while (param_3 != 1);
LAB_ram_4202c916:
  thunk_FUN_ram_4202b7f6();
  return;
}

