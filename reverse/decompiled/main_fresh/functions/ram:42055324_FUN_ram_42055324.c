
undefined4 FUN_ram_42055324(int param_1,int param_2,int param_3)

{
  undefined4 uVar1;
  uint uVar2;
  
  if (param_1 == 0) {
    return 0xfffffff0;
  }
  uVar2 = *(uint *)(param_1 + 0x14);
  uVar1 = 1;
  if (uVar2 == 1) {
    return 0xfffffff5;
  }
  if (param_2 == 0) {
    if (param_3 != 0) {
      if (uVar2 < 5) {
        if (uVar2 < 3) {
          return 0xfffffff5;
        }
      }
      else if (uVar2 != 7) {
        return 0xfffffff5;
      }
      uVar1 = 0;
      goto LAB_ram_42055348;
    }
  }
  else {
    *(ushort *)(param_1 + 0x1e) = *(ushort *)(param_1 + 0x1e) | 0x10;
    if (param_3 != 0) {
LAB_ram_42055348:
      uVar1 = FUN_ram_4205504a(param_1,uVar1);
      return uVar1;
    }
    if (*(int *)(param_1 + 0x7c) != 0) {
      FUN_ram_42053ac4();
      *(undefined4 *)(param_1 + 0x7c) = 0;
    }
  }
  return 0;
}

