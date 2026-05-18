
uint FUN_ram_42022596(undefined1 *param_1)

{
  uint uVar1;
  uint uVar2;
  
  uVar1 = FUN_ram_4202255e(*param_1);
  if (uVar1 != 0xffffffff) {
    uVar2 = FUN_ram_4202255e(param_1[1]);
    if (uVar2 == 0xffffffff) {
      uVar1 = 0xffffffff;
    }
    else {
      uVar1 = uVar1 << 4 | uVar2;
    }
  }
  return uVar1;
}

