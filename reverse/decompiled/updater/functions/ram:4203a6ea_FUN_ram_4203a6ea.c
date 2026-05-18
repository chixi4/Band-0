
void FUN_ram_4203a6ea(int param_1,uint param_2)

{
  undefined4 uVar1;
  
  if (param_2 == 2) {
    if (param_1 == 1) {
      FUN_ram_4203a3d0();
    }
    else if (param_1 != 3) {
      if (param_1 != 0) {
        return;
      }
      goto LAB_ram_4203a768;
    }
LAB_ram_4203a716:
    uVar1 = 0;
    goto LAB_ram_4203a732;
  }
  if (param_2 < 3) {
    if (param_2 == 0) {
      FUN_ram_4203a3d0(3);
      if (param_1 != 2) {
        if (param_1 != 3) {
          if (param_1 != 1) {
            return;
          }
          goto LAB_ram_4203a716;
        }
        FUN_ram_4203a5ac(0);
      }
    }
    else if (param_1 == 2) {
      FUN_ram_4203a3d0(0);
    }
    else if (param_1 != 3) {
      uVar1 = 0;
      if (param_1 != 0) {
        return;
      }
      goto LAB_ram_4203a74a;
    }
    uVar1 = 1;
  }
  else {
    if (param_2 != 3) {
      return;
    }
    uVar1 = 1;
    if (param_1 == 1) {
LAB_ram_4203a786:
      FUN_ram_4203a3d0(uVar1);
      return;
    }
    if (param_1 == 2) {
      uVar1 = 0;
      goto LAB_ram_4203a786;
    }
    if (param_1 != 0) {
      return;
    }
    FUN_ram_4203a3d0();
LAB_ram_4203a768:
    uVar1 = 1;
LAB_ram_4203a74a:
    FUN_ram_4203a3d0(uVar1);
    uVar1 = 3;
  }
LAB_ram_4203a732:
  FUN_ram_4203a5ac(uVar1);
  return;
}

