
undefined4 FUN_ram_420119d8(undefined4 *param_1)

{
  bool bVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  
  if (param_1 == (undefined4 *)0x0) {
    return 0x102;
  }
  FUN_ram_40396966();
  FUN_ram_40390b3e(param_1);
  puVar5 = (uint *)*param_1;
  if ((*puVar5 & 4) == 0) {
    bVar1 = false;
  }
  else {
    if (puVar5[2] == 0) {
                    /* WARNING: Subroutine does not return */
      FUN_ram_4039bf9e(0,0,0,0);
    }
    uVar4 = puVar5[2];
    uVar3 = 0;
    do {
      uVar2 = uVar4;
      uVar4 = *(uint *)(uVar2 + 0x14);
      if (uVar2 == param_1[1]) {
        if (uVar3 == 0) {
          puVar5[2] = uVar4;
        }
        else {
          *(uint *)(uVar3 + 0x14) = uVar4;
        }
        thunk_FUN_ram_40390634();
        break;
      }
      uVar3 = uVar2;
    } while (uVar4 != 0);
    puVar5 = (uint *)*param_1;
    bVar1 = puVar5[2] == 0;
  }
  if (((*puVar5 & 8) != 0) || (bVar1)) {
    FUN_ram_420b6250(*puVar5 >> 0x11 & 0x1f,0);
    puVar5 = (uint *)*param_1;
    *(ushort *)puVar5 = (ushort)*puVar5 & 0xf0f2;
    *(ushort *)(puVar5 + 1) = 0xff9d;
    *(uint *)(&DAT_ram_3fcc4e2c + (*puVar5 >> 0xe & 4)) =
         ~(1 << (*puVar5 >> 0x11 & 0x1f)) & *(uint *)(&DAT_ram_3fcc4e2c + (*puVar5 >> 0xe & 4));
  }
  FUN_ram_40396994();
  thunk_FUN_ram_40390634(param_1);
  return 0;
}

