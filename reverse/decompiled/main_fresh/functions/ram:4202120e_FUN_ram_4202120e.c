
void FUN_ram_4202120e(int param_1,int param_2,int param_3,int param_4,int param_5)

{
  byte bVar1;
  uint uVar2;
  int iVar3;
  byte *pbVar4;
  uint uVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  int iVar9;
  uint uVar10;
  
  if (param_1 != 0) {
    if ((*(char *)(param_1 + 6) != '\0') && (param_2 != 0)) {
      if (param_5 < 1) {
        param_5 = 1;
      }
      uVar2 = param_4 + param_5 * 2;
      for (iVar8 = 0; iVar8 < (int)(uint)*(byte *)(param_1 + 5); iVar8 = iVar8 + 1) {
        uVar10 = param_3 + param_5 * 2;
        for (iVar9 = 0; iVar9 < (int)(uint)*(byte *)(param_1 + 5); iVar9 = iVar9 + 1) {
          iVar3 = FUN_ram_420211ce(param_1,iVar9,iVar8);
          uVar7 = uVar2;
          do {
            uVar5 = uVar10;
            do {
              if ((uVar5 < 200) && (uVar7 < 200)) {
                pbVar4 = (byte *)(((int)uVar5 >> 3) + uVar7 * 0x19 + param_2);
                bVar6 = *pbVar4;
                bVar1 = (byte)(1 << (~uVar5 & 7));
                if (iVar3 == 0) {
                  bVar6 = bVar6 | bVar1;
                }
                else {
                  bVar6 = bVar6 & ~bVar1;
                }
                *pbVar4 = bVar6;
              }
              uVar5 = uVar5 + 1;
            } while (uVar5 != uVar10 + param_5);
            uVar7 = uVar7 + 1;
          } while (uVar7 != uVar2 + param_5);
          uVar10 = uVar5;
        }
        uVar2 = uVar2 + param_5;
      }
    }
    return;
  }
  return;
}

