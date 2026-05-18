
undefined4 FUN_ram_4202b0b4(char *param_1,uint *param_2,uint param_3)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  uint *puVar5;
  undefined4 uVar6;
  int iVar7;
  char *pcVar8;
  uint uVar9;
  int iVar10;
  uint local_b0;
  uint uStack_ac;
  uint uStack_a8;
  uint uStack_a4;
  uint local_a0 [12];
  uint auStack_70 [4];
  uint uStack_60;
  uint uStack_5c;
  uint uStack_58;
  uint uStack_54;
  uint uStack_50;
  uint uStack_4c;
  uint uStack_48;
  uint uStack_44;
  undefined1 auStack_40 [16];
  
  FUN_ram_40399daa(local_a0,0x3c078660,0x30);
  if (((param_3 & 0xffffffbf) == 0x80) || (uVar6 = 0xffffffa4, param_3 == 0x100)) {
    uVar9 = *param_2;
    uVar1 = param_2[1];
    uVar2 = param_2[2];
    uVar3 = param_2[3];
    uStack_60 = 0;
    uStack_5c = 0;
    uStack_58 = 0;
    uStack_54 = 0;
    if (0xbf < param_3) {
      uStack_60 = param_2[4];
      uStack_5c = param_2[5];
      if (param_3 == 0x100) {
        uStack_58 = param_2[6];
        uStack_54 = param_2[7];
      }
    }
    param_3 = param_3 >> 6;
    *param_1 = ((char)param_3 + '\x04') * '\x02';
    auStack_70[0] = uVar9;
    auStack_70[1] = uVar1;
    auStack_70[2] = uVar2;
    auStack_70[3] = uVar3;
    FUN_ram_4202af78(&uStack_60,auStack_70,local_a0 + (param_3 - 2) * 4,&uStack_60);
    iVar10 = 0;
    if (param_3 - 2 != 2) {
      iVar10 = param_3 - 1;
    }
    local_b0 = uStack_60 ^ local_a0[iVar10 * 4];
    uStack_ac = uStack_5c ^ local_a0[iVar10 * 4 + 1];
    uStack_a8 = uStack_58 ^ local_a0[iVar10 * 4 + 2];
    uStack_a4 = local_a0[iVar10 * 4 + 3] ^ uStack_54;
    FUN_ram_4202ae68(&local_b0,&uStack_ac,&uStack_a8,&uStack_a4,0x3c078360,0x3c078260,0x3c078560,
                     0x3c078460);
    FUN_ram_4202ad40(&local_b0,&uStack_ac,&uStack_a8,&uStack_a4);
    iVar7 = 0;
    uStack_50 = local_b0 ^ uVar9;
    uStack_4c = uStack_ac ^ uVar1;
    uStack_48 = uStack_a8 ^ uVar2;
    uStack_44 = uStack_a4 ^ uVar3;
    if (iVar10 != 2) {
      iVar7 = iVar10 + 1;
    }
    FUN_ram_4202af78(auStack_40,&uStack_50,local_a0 + iVar7 * 4,&uStack_60);
    pcVar8 = param_1 + 4;
    uVar9 = 0;
    puVar5 = auStack_70;
    do {
      uVar9 = uVar9 + 1;
      puVar4 = auStack_70 + (uVar9 & 3) * 4;
      FUN_ram_4202b012(pcVar8,puVar5,puVar4,0x6d);
      FUN_ram_4202b012(pcVar8 + 0x40,puVar5,puVar4,0x61);
      FUN_ram_4202b012(pcVar8 + 0x80,puVar5,puVar4,0x3d);
      FUN_ram_4202b012(pcVar8 + 0xc0,puVar5,puVar4,0x1f);
      pcVar8 = pcVar8 + 0x10;
      puVar5 = puVar5 + 4;
    } while (uVar9 != 4);
    FUN_ram_4202b012(param_1 + 0x104,auStack_70,&uStack_60,0x13);
    FUN_ram_420293a6(auStack_70,0x40);
    uVar6 = 0;
  }
  return uVar6;
}

