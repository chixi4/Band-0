
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_42099046(int *param_1)

{
  bool bVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  int *piVar5;
  
  (**(code **)(_DAT_ram_3fcc53c4 + 0x54))(_DAT_ram_3fcc53d4);
  piVar5 = (int *)*_DAT_ram_3fcc4890;
  piVar3 = _DAT_ram_3fcc4890;
  do {
    piVar2 = piVar5;
    if (piVar3 == (int *)&DAT_ram_3fcc4890) {
      bVar1 = false;
LAB_ram_4209907e:
      (**(code **)(_DAT_ram_3fcc53c4 + 0x58))(_DAT_ram_3fcc53d4);
      if (bVar1) {
        thunk_FUN_ram_40390634(param_1);
        return;
      }
      return;
    }
    if (param_1 == piVar3) {
      iVar4 = *param_1;
      piVar5 = (int *)param_1[1];
      bVar1 = true;
      *(int **)(iVar4 + 4) = piVar5;
      *piVar5 = iVar4;
      *param_1 = 0;
      param_1[1] = 0;
      goto LAB_ram_4209907e;
    }
    piVar5 = (int *)*piVar2;
    piVar3 = piVar2;
  } while( true );
}

