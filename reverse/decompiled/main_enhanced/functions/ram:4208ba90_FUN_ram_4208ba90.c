
undefined * FUN_ram_4208ba90(undefined4 param_1)

{
  int iVar1;
  int iVar2;
  undefined *puVar3;
  
  puVar3 = &DAT_ram_3c0fae3c;
  iVar1 = 0;
  do {
    iVar2 = FUN_ram_4039c0e0(param_1,puVar3,2);
    if (iVar2 == 0) {
      return &UNK_ram_3c0fad60 + (uint)(byte)(&DAT_ram_3c0fae3e)[iVar1 * 3] * 10;
    }
    iVar1 = iVar1 + 1;
    puVar3 = puVar3 + 3;
  } while (iVar1 != 0xb0);
  return (undefined *)0x0;
}

