
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4204aa08(code *param_1,undefined4 param_2,uint *param_3)

{
  undefined4 uVar1;
  uint uVar2;
  int *piVar3;
  char *pcVar4;
  
  if (*(int *)(_DAT_ram_3fcc5200 + 4) == 0) {
    uVar1 = 0xffffffff;
  }
  else {
    if (param_1 != (code *)0x0) {
      (*param_1)(param_2,"");
    }
    for (piVar3 = *(int **)(_DAT_ram_3fcc5200 + 4); piVar3 != (int *)0x0; piVar3 = (int *)*piVar3) {
      if (*(char *)(piVar3 + 3) == '\0') {
        if (piVar3[1] == 0) {
          uVar1 = piVar3[2];
        }
        else {
          uVar1 = FUN_ram_403980f4();
        }
        if (piVar3[1] == 0) {
          uVar2 = 1;
          if (param_3 != (uint *)0x0) goto LAB_ram_4204aaaa;
LAB_ram_4204aab4:
          pcVar4 = "g-term project forward by one notch.";
        }
        else {
          uVar2 = FUN_ram_40398fde();
          if (uVar2 < 2) {
            uVar2 = 1 << (uVar2 & 0x1f);
            if (param_3 != (uint *)0x0) {
LAB_ram_4204aaaa:
              *param_3 = *param_3 | uVar2;
            }
            if (uVar2 == 1) goto LAB_ram_4204aab4;
            if (uVar2 != 2) goto LAB_ram_4204aade;
            pcVar4 = "ct forward by one notch.";
          }
          else {
            uVar2 = 3;
            if (param_3 != (uint *)0x0) goto LAB_ram_4204aaaa;
LAB_ram_4204aade:
            pcVar4 = "y one notch.";
          }
        }
        if (param_1 != (code *)0x0) {
          (*param_1)(param_2,"facts, then needs.");
          (*param_1)(param_2,uVar1);
          (*param_1)(param_2,pcVar4);
        }
      }
    }
    uVar1 = 0;
  }
  return uVar1;
}

