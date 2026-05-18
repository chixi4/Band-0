
undefined4 FUN_ram_4201ba7a(undefined4 *param_1,undefined4 *param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_40390574(1,0x40,0x804);
  if (puVar1 == (undefined4 *)0x0) {
    uVar2 = 0x101;
  }
  else {
    fence();
    *puVar1 = 0;
    fence();
    uVar2 = param_2[1];
    puVar1[1] = 0;
    puVar1[0xc] = 0;
    puVar1[0xd] = uVar2;
    puVar1[0xe] = *param_2;
    *param_1 = puVar1;
    uVar2 = 0;
  }
  return uVar2;
}

