
undefined4 FUN_ram_42065c90(uint *param_1,uint *param_2)

{
  int iVar1;
  int *piVar2;
  uint *puVar3;
  uint uVar4;
  
  if (param_1 == (uint *)0x0) {
    return 0;
  }
  if (param_2 == (uint *)0x0) {
    return 0;
  }
  uVar4 = *param_2;
  if (uVar4 == 5) {
    uVar4 = *param_1;
    if ((uVar4 != 0xffffffff) && ((char)param_1[0x2e] == '\0')) {
      if (uVar4 < 0x40) {
        puVar3 = (uint *)(param_2[2] + ((int)uVar4 >> 5) * 4);
        *puVar3 = *puVar3 | 1 << (uVar4 & 0x1f);
      }
      if ((int)param_2[3] < (int)uVar4) {
        param_2[3] = uVar4;
      }
    }
  }
  else {
    if (uVar4 < 6) {
      if (uVar4 == 3) {
        if (-1 < (int)*param_1) {
          return 1;
        }
      }
      else if (uVar4 == 4) {
        if (*param_1 != param_2[1]) {
          return 1;
        }
      }
      else {
        if (uVar4 == 1) {
          *param_1 = 0xffffffff;
          param_1[1] = 0;
          *(undefined1 *)(param_1 + 0x2e) = 0;
          return 1;
        }
        if (uVar4 != 2) {
          return 0;
        }
        if (*param_1 == 0xffffffff) {
          return 1;
        }
      }
      param_2[8] = (uint)param_1;
      return 0;
    }
    if (uVar4 == 7) {
      if (*param_1 == 0xffffffff) {
        return 0;
      }
      if ((char)param_1[0x2e] == '\0') {
        uVar4 = param_1[0xb];
        if ((uVar4 < param_2[7]) || ((param_2[7] == uVar4 && (param_1[10] < param_2[6])))) {
          param_2[6] = param_1[10];
          param_2[7] = uVar4;
          param_2[8] = (uint)param_1;
        }
      }
    }
    else {
      if (uVar4 == 8) {
        if (*param_1 == 0xffffffff) {
          return 1;
        }
      }
      else {
        if (uVar4 != 6) {
          return 0;
        }
        iVar1 = FUN_ram_420b1038(*param_1,1);
        if (iVar1 != -1) {
          return 1;
        }
        piVar2 = (int *)(*(code *)&SUB_ram_40010670)();
        if (*piVar2 != 9) {
          return 1;
        }
      }
      FUN_ram_42065c14(param_2[4],param_1);
    }
  }
  return 1;
}

