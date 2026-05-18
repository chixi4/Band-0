
undefined4 FUN_ram_420119d4(undefined4 *param_1)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  FUN_ram_40394d60();
  FUN_ram_40390ab4(param_1);
  puVar4 = (uint *)*param_1;
  uVar2 = 0;
  if ((*puVar4 & 4) != 0) {
    uVar1 = puVar4[2];
    do {
      uVar3 = uVar2;
      uVar2 = uVar1;
      if (uVar2 == 0) goto LAB_ram_42011a14;
      uVar1 = *(uint *)(uVar2 + 0x14);
    } while (param_1[1] != uVar2);
    if (uVar3 == 0) {
      puVar4[2] = uVar1;
    }
    else {
      *(uint *)(uVar3 + 0x14) = uVar1;
    }
    thunk_FUN_ram_40390608();
LAB_ram_42011a14:
    puVar4 = (uint *)*param_1;
    uVar2 = (uint)(puVar4[2] == 0);
  }
  if (((*puVar4 & 8) != 0) || (uVar2 != 0)) {
    FUN_ram_4207bb00(*puVar4 >> 0x11 & 0x1f,0);
    puVar4 = (uint *)*param_1;
    *(ushort *)puVar4 = (ushort)*puVar4 & 0xf0f2;
    *(ushort *)(puVar4 + 1) = 0xff9d;
    *(uint *)(&DAT_ram_3fcb65a4 + (*puVar4 >> 0xe & 4)) =
         ~(1 << (*puVar4 >> 0x11 & 0x1f)) & *(uint *)(&DAT_ram_3fcb65a4 + (*puVar4 >> 0xe & 4));
  }
  FUN_ram_40394d8e();
  thunk_FUN_ram_40390608(param_1);
  return 0;
}

