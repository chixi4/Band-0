
undefined4 FUN_ram_4204f99c(undefined4 param_1)

{
  undefined4 *puVar1;
  bool bVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  undefined4 uStack_28;
  undefined4 auStack_24 [3];
  
  puVar3 = (undefined4 *)FUN_ram_4204ed60();
  if (puVar3 != (undefined4 *)0x0) {
    bVar2 = false;
    if ((uint *)*puVar3 != (uint *)0x0) {
      bVar2 = (*(uint *)*puVar3 & 0xf0) == 0x10;
    }
    puVar4 = (undefined4 *)FUN_ram_4204ed60(param_1);
    if (puVar4 != (undefined4 *)0x0) {
      puVar1 = (undefined4 *)&DAT_ram_3fcb57bc;
      do {
        if (puVar4 == (undefined4 *)*puVar1) {
          uStack_28 = puVar1[2];
          uVar5 = *puVar4;
          *puVar1 = 0;
          auStack_24[0] = puVar1[1];
          puVar1[2] = 0;
          puVar1[1] = 0;
          FUN_ram_4205a228(uVar5,&uStack_28,auStack_24,1);
        }
        puVar1 = puVar1 + 3;
      } while (puVar1 != (undefined4 *)&DAT_ram_3fcb57ec);
      FUN_ram_4204ecbc(puVar4);
    }
    iVar6 = FUN_ram_42059dfe(*puVar3);
    if (iVar6 == 0) {
      FUN_ram_4204f4be(puVar3,bVar2);
      return 0;
    }
    iVar7 = FUN_ram_4205b1bc();
    if (iVar7 != 0) {
      puVar4 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
      uVar5 = FUN_ram_4205b1bc(iVar6);
      *puVar4 = uVar5;
    }
    FUN_ram_4204ecbc(puVar3);
  }
  return 0xffffffff;
}

