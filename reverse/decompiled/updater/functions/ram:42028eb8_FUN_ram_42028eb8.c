
undefined4 FUN_ram_42028eb8(int *param_1,int *param_2)

{
  uint *puVar1;
  uint uVar2;
  
  if (param_1 == (int *)0x0) {
    return 0xffffaf00;
  }
  puVar1 = (uint *)*param_1;
  if ((((puVar1 != (uint *)0x0) && (param_2 != (int *)0x0)) && ((uint *)*param_2 != (uint *)0x0)) &&
     (puVar1 == (uint *)*param_2)) {
    uVar2 = *puVar1;
    if (uVar2 < 10) {
      if (uVar2 < 8) {
        if (uVar2 == 3) {
          FUN_ram_4202ad2a(param_1[1],param_2[1]);
        }
        else {
          if (uVar2 != 5) {
            return 0xffffaf00;
          }
          FUN_ram_4202a99c(param_1[1],param_2[1]);
        }
      }
      else {
        FUN_ram_4202abca(param_1[1],param_2[1]);
      }
    }
    else {
      if (1 < uVar2 - 10) {
        return 0xffffaf00;
      }
      FUN_ram_420294aa(param_1[1],param_2[1]);
    }
    return 0;
  }
  return 0xffffaf00;
}

