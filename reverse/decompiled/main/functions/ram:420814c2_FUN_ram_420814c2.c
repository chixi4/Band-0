
void FUN_ram_420814c2(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    if (param_1 == 1) {
      FUN_ram_420811a8();
    }
    else if (param_1 != 3) {
      if (param_1 != 0) {
        return;
      }
      goto LAB_ram_42081540;
    }
LAB_ram_420814ee:
    uVar1 = 0;
    goto LAB_ram_4208150a;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      FUN_ram_420811a8(3);
      if (param_1 != 2) {
        if (param_1 != 3) {
          if (param_1 != 1) {
            return;
          }
          goto LAB_ram_420814ee;
        }
        FUN_ram_42081384(0);
      }
    }
    else if (param_1 == 2) {
      FUN_ram_420811a8(0);
    }
    else if (param_1 != 3) {
      uVar1 = 0;
      if (param_1 != 0) {
        return;
      }
      goto LAB_ram_42081522;
    }
    uVar1 = 1;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uVar1 = 1;
    if (param_1 == 1) {
LAB_ram_4208155e:
      FUN_ram_420811a8(uVar1);
      return;
    }
    if (param_1 == 2) {
      uVar1 = 0;
      goto LAB_ram_4208155e;
    }
    if (param_1 != 0) {
      return;
    }
    FUN_ram_420811a8();
LAB_ram_42081540:
    uVar1 = 1;
LAB_ram_42081522:
    FUN_ram_420811a8(uVar1);
    uVar1 = 3;
  }
LAB_ram_4208150a:
  FUN_ram_42081384(uVar1);
  return;
}

