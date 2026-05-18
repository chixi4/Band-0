
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4201ac46(code *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  undefined4 uVar4;
  
  if (*(int *)(_DAT_ram_3fcb66dc + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1 != (code *)0x0) {
      (*param_1)(param_2,0x3c071328);
    }
    for (piVar3 = *(int **)(_DAT_ram_3fcb66dc + 4); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if (*(char *)(piVar3 + 3) == '\0') {
        if (piVar3[1] == 0) {
          uVar1 = piVar3[2];
        }
        else {
          uVar1 = FUN_ram_40396260();
        }
        if (piVar3[1] == 0) {
          uVar2 = 1;
          if (param_3 != (uint *)0x0) goto LAB_ram_4201ace8;
LAB_ram_4201acf2:
          uVar4 = 0x3c071304;
        }
        else {
          uVar2 = FUN_ram_40396e48();
          if (uVar2 < 2) {
            uVar2 = 1 << (uVar2 & 0x1f);
            if (param_3 != (uint *)0x0) {
LAB_ram_4201ace8:
              *param_3 = *param_3 | uVar2;
            }
            if (uVar2 == 1) goto LAB_ram_4201acf2;
            if (uVar2 != 2) goto LAB_ram_4201ad1c;
            uVar4 = 0x3c071310;
          }
          else {
            uVar2 = 3;
            if (param_3 != (uint *)0x0) goto LAB_ram_4201ace8;
LAB_ram_4201ad1c:
            uVar4 = 0x3c07131c;
          }
        }
        if (param_1 != (code *)0x0) {
          (*param_1)(param_2,0x3c071384);
          (*param_1)(param_2,uVar1);
          (*param_1)(param_2,uVar4);
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

