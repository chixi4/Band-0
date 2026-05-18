
uint * FUN_ram_4205abcc(uint param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  puVar1 = (uint *)FUN_ram_42051500(6);
  if (puVar1 != (uint *)0x0) {
    *puVar1 = param_1;
    *(undefined1 *)(puVar1 + 3) = 0;
    puVar1[2] = 0;
    puVar1[6] = 0;
    if (((((param_1 & 0xf0) - 0x10 & 0xffffffef) == 0) || ((param_1 & 0xf0) == 0x40)) &&
       (iVar2 = FUN_ram_42059810(puVar1 + 4,6), iVar2 == 0)) {
      puVar1[5] = 0;
      puVar1[1] = 0;
      puVar1[7] = 0xffffffff;
      puVar1[0xc] = param_2;
      puVar1[0xb] = 0;
      puVar1[8] = 0;
      puVar1[9] = 0;
      *(undefined1 *)(puVar1 + 10) = 0;
      return puVar1;
    }
    FUN_ram_4205151c(6,puVar1);
  }
  return (uint *)0x0;
}

