
void FUN_ram_4206b804(int param_1,int param_2,undefined1 *param_3)

{
  byte *pbVar1;
  byte bVar2;
  uint uVar3;
  uint uVar4;
  uint *puVar5;
  byte *pbVar6;
  int iVar7;
  int iVar8;
  undefined8 uVar9;
  uint local_20;
  uint uStack_1c;
  uint uStack_18;
  uint uStack_14;
  byte abStack_10 [8];
  
  if (*(char *)(param_1 + 0x189) == '\0') {
    puVar5 = (uint *)(param_1 + 0x48 + (*(byte *)(param_2 + 0xf) & 0xf) * 0x10);
    uStack_14 = *puVar5 << 0x1c | puVar5[3] >> 4;
    uStack_18 = puVar5[3] << 0x1c | puVar5[2] >> 4;
    local_20 = puVar5[1] << 0x1c | *puVar5 >> 4;
    uStack_1c = (uint)*(ushort *)(&DAT_ram_3c0f9c6c + (puVar5[2] & 0xf) * 2) << 0x10 ^
                puVar5[1] >> 4;
    iVar7 = (*(byte *)(param_2 + 0xf) & 0xf0) + param_1;
    puVar5 = &local_20;
    do {
      pbVar1 = (byte *)(iVar7 + 0x48);
      pbVar6 = (byte *)((int)puVar5 + 1);
      iVar7 = iVar7 + 1;
      *(byte *)puVar5 = *(byte *)puVar5 ^ *pbVar1;
      puVar5 = (uint *)pbVar6;
    } while (abStack_10 != pbVar6);
    iVar7 = 0xe;
    do {
      uVar4 = uStack_18 & 0xf;
      bVar2 = *(byte *)(param_2 + iVar7);
      uVar3 = uStack_14 << 0x1c;
      uStack_14 = local_20 << 0x1c | uStack_14 >> 4;
      local_20 = uStack_1c << 0x1c | local_20 >> 4;
      uStack_18 = uVar3 | uStack_18 >> 4;
      uStack_1c = (uint)*(ushort *)(&DAT_ram_3c0f9c6c + uVar4 * 2) << 0x10 ^ uStack_1c >> 4;
      iVar8 = (bVar2 & 0xf) * 0x10 + param_1;
      puVar5 = &local_20;
      do {
        pbVar1 = (byte *)(iVar8 + 0x48);
        pbVar6 = (byte *)((int)puVar5 + 1);
        iVar8 = iVar8 + 1;
        *(byte *)puVar5 = *(byte *)puVar5 ^ *pbVar1;
        puVar5 = (uint *)pbVar6;
      } while (abStack_10 != pbVar6);
      uVar3 = uStack_14 << 0x1c;
      uStack_14 = local_20 << 0x1c | uStack_14 >> 4;
      local_20 = uStack_1c << 0x1c | local_20 >> 4;
      uStack_1c = (uint)*(ushort *)(&DAT_ram_3c0f9c6c + (uStack_18 & 0xf) * 2) << 0x10 ^
                  uStack_1c >> 4;
      uStack_18 = uVar3 | uStack_18 >> 4;
      iVar8 = (uint)(bVar2 >> 4) * 0x10 + param_1;
      puVar5 = &local_20;
      do {
        pbVar1 = (byte *)(iVar8 + 0x48);
        pbVar6 = (byte *)((int)puVar5 + 1);
        iVar8 = iVar8 + 1;
        *(byte *)puVar5 = *(byte *)puVar5 ^ *pbVar1;
        puVar5 = (uint *)pbVar6;
      } while (abStack_10 != pbVar6);
      iVar7 = iVar7 + -1;
    } while (iVar7 != -1);
    uVar9 = (*(code *)&SUB_ram_400108c8)(local_20,uStack_1c);
    param_3[1] = (char)((ulonglong)uVar9 >> 8);
    param_3[2] = (char)((ulonglong)uVar9 >> 0x10);
    *param_3 = (char)uVar9;
    param_3[4] = (char)((ulonglong)uVar9 >> 0x20);
    param_3[5] = (char)((ulonglong)uVar9 >> 0x28);
    param_3[3] = (char)((ulonglong)uVar9 >> 0x18);
    param_3[7] = (char)((ulonglong)uVar9 >> 0x38);
    param_3[6] = (char)((ulonglong)uVar9 >> 0x30);
    uVar9 = (*(code *)&SUB_ram_400108c8)(uStack_18,uStack_14);
    param_3[9] = (char)((ulonglong)uVar9 >> 8);
    param_3[10] = (char)((ulonglong)uVar9 >> 0x10);
    param_3[8] = (char)uVar9;
    param_3[0xc] = (char)((ulonglong)uVar9 >> 0x20);
    param_3[0xd] = (char)((ulonglong)uVar9 >> 0x28);
    param_3[0xb] = (char)((ulonglong)uVar9 >> 0x18);
    param_3[0xe] = (char)((ulonglong)uVar9 >> 0x30);
    param_3[0xf] = (char)((ulonglong)uVar9 >> 0x38);
    return;
  }
  return;
}

