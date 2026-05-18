
undefined4 FUN_ram_4206e8f6(undefined4 *param_1,int param_2,uint *param_3)

{
  byte bVar1;
  byte *pbVar2;
  uint uVar3;
  byte *pbVar4;
  uint uVar5;
  uint uVar6;
  
  pbVar4 = (byte *)*param_1;
  if (0 < param_2 - (int)pbVar4) {
    if ((char)*pbVar4 < '\0') {
      uVar3 = *pbVar4 & 0x7f;
      if (3 < (uVar3 - 1 & 0xff)) {
        return 0xffffff9c;
      }
      if (param_2 - (int)pbVar4 <= (int)uVar3) {
        return 0xffffffa0;
      }
      uVar5 = 0;
      pbVar2 = pbVar4 + 1;
      uVar6 = uVar3;
      while( true ) {
        *param_3 = uVar5;
        *param_1 = pbVar2;
        uVar6 = uVar6 - 1;
        if (uVar6 == 0xffffffff) break;
        bVar1 = *pbVar2;
        pbVar2 = pbVar2 + 1;
        uVar5 = uVar5 << 8 | (uint)bVar1;
      }
      pbVar2 = pbVar4 + 1 + uVar3;
    }
    else {
      pbVar2 = pbVar4 + 1;
      *param_1 = pbVar2;
      uVar5 = (uint)*pbVar4;
      *param_3 = uVar5;
    }
    if (uVar5 <= (uint)(param_2 - (int)pbVar2)) {
      return 0;
    }
  }
  return 0xffffffa0;
}

