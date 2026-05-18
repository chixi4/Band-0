
undefined4 FUN_ram_420231fe(int *param_1,int param_2,uint param_3)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  uint *puVar4;
  int iVar5;
  uint *puVar6;
  uint *puVar7;
  uint uVar8;
  
  if (param_3 == 0xc0) {
    iVar2 = 0xc;
  }
  else if (param_3 == 0x100) {
    iVar2 = 0xe;
  }
  else {
    if (param_3 != 0x80) {
      return 0xffffffe0;
    }
    iVar2 = 10;
  }
  *param_1 = iVar2;
  param_1[1] = 0;
  puVar7 = (uint *)(param_1 + 2);
  iVar5 = 0;
  do {
    *(undefined4 *)((int)param_1 + iVar5 + 8) = *(undefined4 *)(param_2 + iVar5);
    iVar5 = iVar5 + 4;
  } while ((param_3 >> 5) << 2 != iVar5);
  if (iVar2 == 0xc) {
    puVar4 = (uint *)&DAT_ram_3c075910;
    do {
      uVar3 = puVar7[5];
      uVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar8 = (uint)*(byte *)((uVar3 >> 8 & 0xff) + 0x3c077a38) ^ *puVar7 ^ uVar8 ^
              (uint)*(byte *)((uVar3 >> 0x18) + 0x3c077a38) << 0x10 ^
              (uint)*(byte *)((uVar3 & 0xff) + 0x3c077a38) << 0x18 ^
              (uint)*(byte *)((uVar3 >> 0x10 & 0xff) + 0x3c077a38) << 8;
      puVar7[6] = uVar8;
      uVar8 = uVar8 ^ puVar7[1];
      puVar7[7] = uVar8;
      uVar8 = uVar8 ^ puVar7[2];
      puVar7[8] = uVar8;
      uVar8 = uVar8 ^ puVar7[3];
      puVar7[9] = uVar8;
      puVar6 = puVar7 + 6;
      uVar8 = uVar8 ^ puVar7[4];
      puVar7[10] = uVar8;
      puVar7[0xb] = uVar3 ^ uVar8;
      puVar7 = puVar6;
    } while (puVar6 != (uint *)(param_1 + 0x32));
  }
  else if (iVar2 == 0xe) {
    puVar4 = (uint *)&DAT_ram_3c075910;
    do {
      uVar3 = puVar7[7];
      uVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar8 = (uint)*(byte *)((uVar3 >> 8 & 0xff) + 0x3c077a38) ^ *puVar7 ^ uVar8 ^
              (uint)*(byte *)((uVar3 >> 0x18) + 0x3c077a38) << 0x10 ^
              (uint)*(byte *)((uVar3 & 0xff) + 0x3c077a38) << 0x18 ^
              (uint)*(byte *)((uVar3 >> 0x10 & 0xff) + 0x3c077a38) << 8;
      puVar7[8] = uVar8;
      uVar8 = uVar8 ^ puVar7[1];
      puVar7[9] = uVar8;
      uVar8 = uVar8 ^ puVar7[2];
      puVar7[10] = uVar8;
      uVar8 = uVar8 ^ puVar7[3];
      bVar1 = *(byte *)((uVar8 & 0xff) + 0x3c077a38);
      puVar7[0xb] = uVar8;
      uVar8 = (uint)*(byte *)((uVar8 >> 0x10 & 0xff) + 0x3c077a38) << 0x10 ^
              (uint)bVar1 ^ puVar7[4] ^ (uint)*(byte *)((uVar8 >> 0x18) + 0x3c077a38) << 0x18 ^
              (uint)*(byte *)((uVar8 >> 8 & 0xff) + 0x3c077a38) << 8;
      puVar7[0xc] = uVar8;
      uVar8 = uVar8 ^ puVar7[5];
      puVar7[0xd] = uVar8;
      puVar6 = puVar7 + 8;
      uVar8 = uVar8 ^ puVar7[6];
      puVar7[0xe] = uVar8;
      puVar7[0xf] = uVar3 ^ uVar8;
      puVar7 = puVar6;
    } while (puVar6 != (uint *)(param_1 + 0x3a));
  }
  else {
    puVar4 = (uint *)&DAT_ram_3c075910;
    do {
      uVar3 = puVar7[3];
      uVar8 = *puVar4;
      puVar4 = puVar4 + 1;
      uVar8 = (uint)*(byte *)((uVar3 >> 8 & 0xff) + 0x3c077a38) ^ *puVar7 ^ uVar8 ^
              (uint)*(byte *)((uVar3 >> 0x18) + 0x3c077a38) << 0x10 ^
              (uint)*(byte *)((uVar3 & 0xff) + 0x3c077a38) << 0x18 ^
              (uint)*(byte *)((uVar3 >> 0x10 & 0xff) + 0x3c077a38) << 8;
      puVar7[4] = uVar8;
      uVar8 = uVar8 ^ puVar7[1];
      puVar7[5] = uVar8;
      puVar6 = puVar7 + 4;
      uVar8 = uVar8 ^ puVar7[2];
      puVar7[6] = uVar8;
      puVar7[7] = uVar3 ^ uVar8;
      puVar7 = puVar6;
    } while (puVar6 != (uint *)(param_1 + 0x2a));
  }
  return 0;
}

