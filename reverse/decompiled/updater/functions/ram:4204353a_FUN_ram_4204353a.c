
ushort FUN_ram_4204353a(uint param_1,byte *param_2)

{
  byte *pbVar1;
  uint uVar2;
  byte *pbVar3;
  uint uVar4;
  
  if (param_2 == (byte *)0x0) {
    FUN_ram_42033fd8(1,1,1,0x3c07da28);
  }
  else {
    pbVar1 = param_2 + 2;
    pbVar3 = pbVar1;
    for (uVar4 = 0; (uVar4 & 0xff) < (uint)*param_2; uVar4 = uVar4 + 1) {
      if ((*pbVar3 <= param_1) && (param_1 <= pbVar3[1])) goto LAB_ram_420435b4;
      pbVar3 = pbVar3 + 4;
    }
    if (param_1 == 0xe) {
      return 1;
    }
    FUN_ram_420339f8();
    uVar2 = FUN_ram_42043404();
    for (uVar4 = 0; (uVar4 & 0xff) < (uint)*param_2; uVar4 = uVar4 + 1) {
      if ((*pbVar1 <= uVar2) && (uVar2 <= pbVar1[1])) {
LAB_ram_420435b4:
        return *(ushort *)(param_2 + uVar4 * 4 + 4) & 7;
      }
      pbVar1 = pbVar1 + 4;
    }
  }
  return 0;
}

