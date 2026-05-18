
int FUN_ram_4208c5f6(int param_1,int param_2,int param_3)

{
  byte bVar1;
  int iVar2;
  undefined1 *puVar3;
  int iVar4;
  byte *pbVar5;
  uint uVar6;
  undefined1 *puVar7;
  
  if (param_1 == 0) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff278,&DAT_ram_3c0c4a00,0x9a);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  if ((uint)*(ushort *)(param_2 + 0x16) + (uint)*(ushort *)(param_2 + 0x14) < 0x20) {
    return 0;
  }
  iVar4 = *(int *)(*(int *)(param_2 + 4) + 4);
  if ((*(byte *)(iVar4 + 4) & 1) == 0) {
    puVar7 = &DAT_ram_3fcc4004;
    puVar3 = (undefined1 *)((*(byte *)(param_1 + 0x134) + 0x4c) * 4);
    goto LAB_ram_4208c682;
  }
  pbVar5 = (byte *)(iVar4 + param_3);
  bVar1 = pbVar5[3];
  if ((bVar1 & 0x20) == 0) {
    if (*(char *)(param_1 + 0x28b) == '\b') goto LAB_ram_4208c670;
    uVar6 = (uint)*(byte *)(param_1 + 0x135);
  }
  else if (*(char *)(param_1 + 0x28b) == '\b') {
LAB_ram_4208c670:
    uVar6 = (uint)*pbVar5;
  }
  else {
    uVar6 = (uint)*(byte *)(param_1 + (uint)(bVar1 >> 6) + 0x137);
    if (uVar6 == 0xff) {
      return 0;
    }
  }
  puVar7 = (undefined1 *)((uVar6 + 0x4c) * 4);
  puVar3 = &DAT_ram_3fcc4004;
LAB_ram_4208c682:
  iVar4 = *(int *)(puVar7 + (int)puVar3 + 4);
  if ((iVar4 != 0) && (iVar2 = (**(code **)(*(int *)(iVar4 + 0xa0) + 0x14))(iVar4), iVar2 != 0)) {
    return iVar4;
  }
  return 0;
}

