
undefined4 FUN_ram_4202b3f6(byte *param_1,uint *param_2,undefined1 *param_3)

{
  uint *puVar1;
  uint uVar2;
  uint *puVar3;
  int iVar4;
  uint local_40;
  uint uStack_3c;
  uint uStack_38;
  uint auStack_34 [3];
  
  local_40 = *param_2;
  uStack_3c = param_2[1];
  uStack_38 = param_2[2];
  puVar3 = (uint *)(param_1 + 4);
  iVar4 = 0;
  auStack_34[0] = param_2[3];
  while( true ) {
    local_40 = local_40 ^ *puVar3;
    uStack_3c = uStack_3c ^ puVar3[1];
    uStack_38 = uStack_38 ^ puVar3[2];
    iVar4 = iVar4 + 2;
    auStack_34[0] = auStack_34[0] ^ puVar3[3];
    FUN_ram_4202ae68(&local_40,&uStack_3c,&uStack_38,auStack_34,0x3c078560,0x3c078460,0x3c078360,
                     0x3c078260);
    FUN_ram_4202ad40(&local_40,&uStack_3c,&uStack_38,auStack_34);
    local_40 = local_40 ^ puVar3[4];
    uStack_3c = uStack_3c ^ puVar3[5];
    uStack_38 = uStack_38 ^ puVar3[6];
    puVar1 = puVar3 + 7;
    puVar3 = puVar3 + 8;
    auStack_34[0] = auStack_34[0] ^ *puVar1;
    FUN_ram_4202ae68(&local_40,&uStack_3c,&uStack_38,auStack_34,0x3c078360,0x3c078260,0x3c078560,
                     0x3c078460);
    if ((int)(uint)*param_1 <= iVar4) break;
    FUN_ram_4202ad40(&local_40,&uStack_3c,&uStack_38,auStack_34);
  }
  uStack_3c = *(uint *)(param_1 + iVar4 * 0x10 + 8) ^ uStack_3c;
  uStack_38 = *(uint *)(param_1 + iVar4 * 0x10 + 0xc) ^ uStack_38;
  auStack_34[0] = *(uint *)(param_1 + iVar4 * 0x10 + 0x10) ^ auStack_34[0];
  uVar2 = *(uint *)(param_1 + iVar4 * 0x10 + 4);
  param_3[4] = (char)uStack_3c;
  param_3[8] = (char)uStack_38;
  uVar2 = uVar2 ^ local_40;
  *param_3 = (char)uVar2;
  param_3[1] = (char)(uVar2 >> 8);
  param_3[3] = (char)(uVar2 >> 0x18);
  param_3[5] = (char)(uStack_3c >> 8);
  param_3[7] = (char)(uStack_3c >> 0x18);
  param_3[9] = (char)(uStack_38 >> 8);
  param_3[0xb] = (char)(uStack_38 >> 0x18);
  param_3[0xc] = (char)auStack_34[0];
  param_3[0xd] = (char)(auStack_34[0] >> 8);
  param_3[2] = (char)(uVar2 >> 0x10);
  param_3[6] = (char)(uStack_3c >> 0x10);
  param_3[10] = (char)(uStack_38 >> 0x10);
  param_3[0xe] = (char)(auStack_34[0] >> 0x10);
  param_3[0xf] = (char)(auStack_34[0] >> 0x18);
  return 0;
}

