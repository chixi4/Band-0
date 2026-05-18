
undefined4 FUN_ram_42014444(uint param_1,undefined4 *param_2)

{
  int *piVar1;
  undefined4 uVar2;
  
  if (param_1 < 2) {
    piVar1 = (int *)(param_1 * 4 + 0x3fcb6670);
    uVar2 = 0xffffffff;
    if (*piVar1 != 0) {
      FUN_ram_40394d60(0xffffffff);
      *param_2 = *(undefined4 *)(*piVar1 + 0x14);
      FUN_ram_40394d8e();
      uVar2 = 0;
    }
    return uVar2;
  }
  return 0xffffffff;
}

