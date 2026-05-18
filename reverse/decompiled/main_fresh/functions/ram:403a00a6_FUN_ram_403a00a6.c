
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_403a00a6(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  int *piVar3;
  int iVar4;
  uint uVar5;
  undefined4 uStack_28;
  uint auStack_24 [4];
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  piVar3 = (int *)*param_1;
  iVar1 = 0x102;
  if (((piVar3 != (int *)0x0) && (*piVar3 != 0)) && (piVar3[1] != 0)) {
    uVar5 = param_1[4];
    uStack_28 = 0;
    if (uVar5 < 0x10) {
      iVar4 = 0xb;
      do {
        iVar1 = FUN_ram_420b6270(param_1,&uStack_28);
        if (iVar1 != 0x6003) {
          if (iVar1 != 0) {
            return iVar1;
          }
          goto LAB_ram_403a00de;
        }
        iVar4 = iVar4 + -1;
        iVar1 = 0x6003;
      } while (iVar4 != 0);
    }
    else {
      uStack_28 = *_DAT_ram_3fcdfff0;
LAB_ram_403a00de:
      param_1[6] = uStack_28;
      iVar1 = FUN_ram_4039fe38(param_1);
      if (((iVar1 != 0) || (iVar1 = FUN_ram_4039fdbc(param_1), iVar1 == 0)) &&
         (iVar1 = FUN_ram_403a003e(param_1,auStack_24), iVar1 == 0)) {
        if (((*(code **)(param_1[1] + 0x74) != (code *)0x0) &&
            (uVar2 = (**(code **)(param_1[1] + 0x74))(param_1), (uVar2 & 2) == 0)) &&
           (0x1000000 < auStack_24[0])) {
          auStack_24[0] = 0x1000000;
        }
        iVar1 = (*(code *)*_DAT_ram_3fcb82b0)(param_1);
        if (iVar1 == 0) {
          if ((0xf < uVar5) ||
             ((iVar1 = (**(code **)(param_1[1] + 0x58))(param_1), iVar1 == 0x108 &&
              (1 < param_1[4] - 4)))) {
            iVar1 = 0;
          }
          iVar1 = (*(code *)_DAT_ram_3fcb82b0[1])(param_1,iVar1);
        }
      }
    }
  }
  return iVar1;
}

