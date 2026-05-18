
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 * FUN_ram_420afd4a(undefined4 *param_1)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int iVar3;
  
  FUN_ram_420afd2a();
  if (_DAT_ram_3fcc5408 == 0) {
    FUN_ram_420afce2();
  }
  puVar1 = (undefined4 *)&DAT_ram_3fcb813c;
  while( true ) {
    do {
      puVar2 = puVar1;
      puVar1 = (undefined4 *)puVar2[2];
      iVar3 = puVar2[1];
      while (iVar3 = iVar3 + -1, -1 < iVar3) {
        if (*(short *)(puVar1 + 3) == 0) {
          puVar1[3] = 0xffff0001;
          puVar1[0x19] = 0;
          FUN_ram_40391808(puVar1 + 0x16);
          FUN_ram_420afd3a();
          *puVar1 = 0;
          puVar1[2] = 0;
          puVar1[1] = 0;
          puVar1[4] = 0;
          puVar1[5] = 0;
          puVar1[6] = 0;
          (*(code *)&SUB_ram_40010488)(puVar1 + 0x17,0,8);
          puVar1[0xd] = 0;
          puVar1[0xe] = 0;
          puVar1[0x12] = 0;
          puVar1[0x13] = 0;
          return puVar1;
        }
        puVar1 = puVar1 + 0x1a;
      }
      puVar1 = (undefined4 *)*puVar2;
    } while ((undefined4 *)*puVar2 != (undefined4 *)0x0);
    puVar1 = (undefined4 *)FUN_ram_4039c0d0(param_1,0x1ac);
    if (puVar1 == (undefined4 *)0x0) break;
    *puVar1 = 0;
    puVar1[1] = 4;
    puVar1[2] = puVar1 + 3;
    (*(code *)&SUB_ram_40010488)(puVar1 + 3,0,0x1a0);
    *puVar2 = puVar1;
  }
  *puVar2 = 0;
  FUN_ram_420afd3a();
  *param_1 = 0xc;
  return (undefined4 *)0x0;
}

