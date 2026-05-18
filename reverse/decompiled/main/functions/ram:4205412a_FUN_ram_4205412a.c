
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4205412a(int param_1)

{
  char cVar1;
  int *piVar2;
  int *piVar3;
  int iVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  int iVar8;
  
  iVar4 = FUN_ram_4205be44(_DAT_ram_3fcc26bc,_DAT_ram_3fcc26a8);
  cVar1 = *(char *)(*(int *)(param_1 + 4) + 9);
  uVar5 = 0;
  piVar2 = _DAT_ram_3fcc52e4;
  piVar7 = (int *)0x0;
  do {
    piVar3 = piVar2;
    if (piVar3 == (int *)0x0) {
      return uVar5;
    }
    if (((char)piVar3[4] == cVar1) &&
       (((char)piVar3[2] == '\0' ||
        ((char)piVar3[2] == (char)(*(char *)(_DAT_ram_3fcc26ac + 0x3c) + '\x01'))))) {
      iVar6 = *piVar3;
      if (iVar4 == 0) {
        if ((iVar6 == 0) || (_DAT_ram_3fcc26bc == iVar6)) goto LAB_ram_42054198;
      }
      else if (iVar6 == 0) {
LAB_ram_42054198:
        if ((((*(byte *)((int)piVar3 + 0x11) & 1) == 0) || (piVar3[1] == _DAT_ram_3fcc26b8)) &&
           ((code *)piVar3[5] != (code *)0x0)) {
          iVar8 = *(int *)(param_1 + 4);
          iVar6 = (*(code *)piVar3[5])(piVar3[6],piVar3,param_1,&DAT_ram_3fcc26b8);
          if (iVar6 != 0) {
            if (piVar7 != (int *)0x0) {
              piVar7[3] = piVar3[3];
              piVar3[3] = (int)_DAT_ram_3fcc52e4;
              _DAT_ram_3fcc52e4 = piVar3;
            }
            return 1;
          }
          if (*(int *)(param_1 + 4) != iVar8) {
            FUN_ram_4039bf1e();
          }
          uVar5 = 2;
        }
      }
    }
    piVar2 = (int *)piVar3[3];
    piVar7 = piVar3;
  } while( true );
}

