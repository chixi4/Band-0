
undefined4 FUN_ram_4206e8a6(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  
  puVar1 = *(undefined4 **)(param_1 + 4);
  puVar2 = puVar1;
  if (puVar1[2] != 0) {
    puVar2 = (undefined4 *)FUN_ram_4206d7ce(1,0x10);
    puVar1[3] = puVar2;
    if (puVar2 == (undefined4 *)0x0) {
      return 0xffffff96;
    }
  }
  puVar2[2] = param_3;
  puVar2[1] = param_4;
  *puVar2 = param_2;
  *(undefined4 **)(param_1 + 4) = puVar2;
  return 0;
}

