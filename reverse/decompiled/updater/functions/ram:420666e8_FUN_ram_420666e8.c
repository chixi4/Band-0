
undefined4 FUN_ram_420666e8(int param_1,uint param_2,int param_3,byte *param_4,int param_5)

{
  byte bVar1;
  byte *pbVar2;
  byte *pbVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  byte local_100 [256];
  
  iVar4 = 0;
  do {
    local_100[iVar4] = (byte)iVar4;
    iVar4 = iVar4 + 1;
  } while (iVar4 != 0x100);
  uVar5 = 0;
  uVar6 = 0;
  pbVar2 = local_100;
  do {
    bVar1 = *pbVar2;
    pbVar3 = pbVar2 + 1;
    uVar6 = uVar6 + (uint)*(byte *)(param_1 + uVar5) + (uint)bVar1 & 0xff;
    uVar5 = uVar5 + 1 & -(uint)(uVar5 + 1 < param_2);
    *pbVar2 = local_100[uVar6];
    local_100[uVar6] = bVar1;
    pbVar2 = pbVar3;
  } while (pbVar3 != &stack0x00000000);
  uVar5 = 0;
  uVar6 = 0;
  for (iVar4 = 0; iVar4 != param_3; iVar4 = iVar4 + 1) {
    uVar6 = uVar6 + 1 & 0xff;
    bVar1 = local_100[uVar6];
    uVar5 = uVar5 + bVar1 & 0xff;
    local_100[uVar6] = local_100[uVar5];
    local_100[uVar5] = bVar1;
  }
  pbVar2 = param_4 + param_5;
  for (; param_4 != pbVar2; param_4 = param_4 + 1) {
    uVar6 = uVar6 + 1 & 0xff;
    bVar1 = local_100[uVar6];
    uVar5 = uVar5 + bVar1 & 0xff;
    local_100[uVar6] = local_100[uVar5];
    local_100[uVar5] = bVar1;
    *param_4 = local_100[(uint)bVar1 + (uint)local_100[uVar6] & 0xff] ^ *param_4;
  }
  return 0;
}

