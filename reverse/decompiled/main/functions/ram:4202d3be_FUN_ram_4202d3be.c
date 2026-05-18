
undefined4 FUN_ram_4202d3be(undefined4 param_1,int param_2,undefined4 param_3)

{
  undefined4 uVar1;
  undefined1 *puVar2;
  undefined4 auStack_24 [4];
  
  uVar1 = 3;
  if (param_2 != 0) {
    puVar2 = (undefined1 *)FUN_ram_4202d61e(0x1b,2,auStack_24);
    if (puVar2 != (undefined1 *)0x0) {
      *puVar2 = (char)param_2;
      puVar2[1] = (char)((uint)param_2 >> 8);
      (*(code *)&SUB_ram_400119f0)(auStack_24[0],param_3);
      uVar1 = FUN_ram_4202d6e2(param_1,4,auStack_24[0]);
      return uVar1;
    }
    uVar1 = 6;
  }
  (*(code *)&SUB_ram_40011a08)(param_3);
  return uVar1;
}

