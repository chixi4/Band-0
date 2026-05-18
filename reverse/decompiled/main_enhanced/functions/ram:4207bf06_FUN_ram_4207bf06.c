
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_4207bf06(undefined4 *param_1,int param_2,int param_3,undefined1 param_4)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint uVar5;
  undefined2 uVar6;
  undefined *puVar7;
  ushort uVar8;
  uint uVar9;
  
  uVar1 = _DAT_ram_3fcc3008;
  if (param_1 == (undefined4 *)0x0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0fe74c,&DAT_ram_3c0c426c,0x497);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  uVar9 = param_2 >> 2 & 0xf;
  FUN_ram_4207bd06(param_1,uVar9);
  uVar3 = FUN_ram_4207be98(*param_1);
  if (uVar3 != 0xffffffff) {
    puVar4 = (uint *)(**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(0x28);
    if (puVar4 == (uint *)0x0) {
      puVar7 = &DAT_ram_3c0fe754;
    }
    else {
      uVar2 = uVar1 & 0xff;
      uVar5 = (**(code **)(_DAT_ram_3fcdfdd8 + 0x174))(uVar2 << 2);
      puVar4[6] = uVar5;
      if (uVar5 != 0) {
        param_1[uVar9 + 0x9a] = puVar4;
        uVar5 = param_2 >> 6;
        puVar4[8] = uVar3;
        uVar8 = (ushort)uVar1 & 0xff;
        if (uVar5 != 0) {
          if ((int)uVar5 < (int)uVar2) {
            uVar2 = uVar5;
          }
          uVar8 = (ushort)uVar2;
        }
        *(ushort *)((int)puVar4 + 0xe) = uVar8;
        *(undefined1 *)((int)puVar4 + 0x26) = param_4;
        *puVar4 = *puVar4 | 2;
        uVar8 = *(ushort *)(param_1 + 0xa2);
        uVar6 = (undefined2)(param_3 >> 4);
        *(undefined2 *)(puVar4 + 3) = uVar6;
        *(undefined2 *)((int)puVar4 + 10) = uVar6;
        *(ushort *)(param_1 + 0xa2) = uVar8 | (ushort)(1 << uVar9);
        return 0;
      }
      (**(code **)(_DAT_ram_3fcdfdd8 + 0xb0))(puVar4);
      puVar7 = &DAT_ram_3c0fe768;
    }
    FUN_ram_4207a038(1,0x400,1,puVar7,uVar9);
  }
  return 1;
}

