
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4202ca18(undefined2 param_1)

{
  int *piVar1;
  undefined2 auStack_20 [2];
  undefined1 uStack_1c;
  int *piStack_18;
  int **ppiStack_14;
  
  uStack_1c = 0xf;
  auStack_20[0] = param_1;
  FUN_ram_4202c8b2(0x4201c984,auStack_20,0,&piStack_18);
  while (piVar1 = piStack_18, piStack_18 != (int *)0x0) {
    (**(code **)(*(int *)(_DAT_ram_3fcb6b98 + 0x28) + (uint)*(byte *)(piStack_18 + 3) * 4))
              (piStack_18,7,0);
    piStack_18 = (int *)*piStack_18;
    if (piStack_18 == (int *)0x0) {
      ppiStack_14 = &piStack_18;
    }
    FUN_ram_4202c84e(piVar1);
  }
  return;
}

