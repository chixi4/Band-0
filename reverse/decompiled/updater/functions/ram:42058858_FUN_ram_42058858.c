
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42058858(int param_1,uint *param_2)

{
  int *piVar1;
  int *piVar2;
  undefined4 uVar3;
  int *piVar4;
  
  if (((*param_2 & 0xf0) != 0xe0) || (uVar3 = 0xfffffffa, *param_2 == _DAT_ram_3fcb681c)) {
    return 0xfffffffa;
  }
  if ((*(byte *)(param_1 + 0x39) & 0x20) != 0) {
    piVar2 = (int *)FUN_ram_420585e2();
    uVar3 = 0xfffffffa;
    if (piVar2 != (int *)0x0) {
      if (*(byte *)(piVar2 + 3) < 2) {
        piVar1 = *(int **)(param_1 + 0x28);
        do {
          piVar4 = piVar1;
          if (piVar4 == (int *)0x0) goto LAB_ram_420588ae;
          piVar1 = (int *)*piVar4;
        } while (piVar2 != (int *)*piVar4);
        *piVar4 = *piVar2;
LAB_ram_420588ae:
        if ((char)piVar2[2] != '\0') {
          FUN_ram_4205847a(param_1,piVar2,0x17);
        }
        if (*(code **)(param_1 + 0x40) != (code *)0x0) {
          (**(code **)(param_1 + 0x40))(param_1,param_2,0);
        }
        FUN_ram_4205151c(10,piVar2);
      }
      else {
        *(byte *)(piVar2 + 3) = *(byte *)(piVar2 + 3) - 1;
      }
      uVar3 = 0;
    }
  }
  return uVar3;
}

