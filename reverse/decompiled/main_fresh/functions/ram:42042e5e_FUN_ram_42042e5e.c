
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined4 FUN_ram_42042e5e(int param_1,undefined4 param_2)

{
  ushort *puVar1;
  byte bVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte local_18 [5];
  byte abStack_13 [7];
  
  puVar1 = (ushort *)(param_1 + 0x1f0);
  (*(code *)&SUB_ram_40010488)(local_18,0,5);
  FUN_ram_4039c11e(puVar1,param_2,10);
  pbVar3 = local_18;
  bVar2 = 0;
  do {
    uVar4 = 0;
    uVar5 = (uint)*puVar1;
    do {
      if ((uVar5 & 3) == 1) {
        bVar2 = bVar2 + 1;
        *pbVar3 = (byte)(1 << (uVar4 & 0x1f)) | *pbVar3;
      }
      uVar4 = uVar4 + 1;
      uVar5 = uVar5 >> 2;
    } while (uVar4 != 8);
    pbVar3 = pbVar3 + 1;
    puVar1 = puVar1 + 1;
  } while (abStack_13 != pbVar3);
  local_18[4] = local_18[4] & 0x1f;
  if (2 < bVar2) {
    (**(code **)(_DAT_ram_3fcdfecc + 0x3bc))(bVar2,local_18);
  }
  return 0xff;
}

