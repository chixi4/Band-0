
undefined4
FUN_ram_42029a9c(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined1 param_4,
                undefined4 param_5,undefined1 param_6)

{
  undefined1 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined1 *)FUN_ram_4202d5d8(1,4);
  if (puVar1 != (undefined1 *)0x0) {
    *puVar1 = param_4;
    puVar1[3] = param_6;
    puVar1[1] = (char)param_5;
    puVar1[2] = (char)((uint)param_5 >> 8);
    uVar2 = FUN_ram_4202d6e2(param_1,param_2,param_3);
    return uVar2;
  }
  return 6;
}

