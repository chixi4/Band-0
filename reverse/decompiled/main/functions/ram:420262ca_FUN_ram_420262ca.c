
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_420262ca(void)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  
  puVar1 = (undefined4 *)FUN_ram_403a5e02(1,0x28);
  uVar2 = 6;
  _DAT_ram_3fcb6b6c = puVar1;
  if (puVar1 != (undefined4 *)0x0) {
    *puVar1 = &DAT_ram_3c0c263c;
    puVar1[1] = "e data down first.";
    puVar1[2] = "e data down first.";
    puVar1[3] = "e data down first.";
    puVar1[4] = "e data down first.";
    puVar1[5] = &DAT_ram_3c0c2644;
    puVar1[6] = "e the data down first.";
    puVar1[7] = "arse tomorrow\'s hard point once tonight.";
    puVar1[8] = "orrow\'s hard point once tonight.";
    puVar1[9] = 0;
    uVar2 = 0;
  }
  return uVar2;
}

