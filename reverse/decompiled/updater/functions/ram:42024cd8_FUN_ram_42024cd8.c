
undefined4 FUN_ram_42024cd8(int *param_1,int *param_2)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  
  uVar3 = (uint)*(ushort *)((int)param_1 + 6);
  while ((uVar3 != 0 && (*(int *)(*param_1 + uVar3 * 4 + -4) == 0))) {
    uVar3 = uVar3 - 1;
  }
  uVar1 = (uint)*(ushort *)((int)param_2 + 6);
  do {
    if (uVar1 == 0) {
      if (uVar3 != 0) {
        return 1;
      }
LAB_ram_42024d20:
      while( true ) {
        uVar3 = uVar3 - 1;
        if (uVar3 == 0xffffffff) {
          return 0;
        }
        uVar1 = *(uint *)(*param_1 + uVar3 * 4);
        uVar2 = *(uint *)(uVar3 * 4 + *param_2);
        if (uVar2 < uVar1) break;
        if (uVar1 < uVar2) {
          return 0xffffffff;
        }
      }
      return 1;
    }
    if (*(int *)(*param_2 + uVar1 * 4 + -4) != 0) {
      if (uVar1 < uVar3) {
        return 1;
      }
      if (uVar3 < uVar1) {
        return 0xffffffff;
      }
      goto LAB_ram_42024d20;
    }
    uVar1 = uVar1 - 1;
  } while( true );
}

