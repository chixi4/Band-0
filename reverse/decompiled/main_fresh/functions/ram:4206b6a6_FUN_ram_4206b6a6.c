
int FUN_ram_4206b6a6(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte bVar4;
  byte *pbVar5;
  uint uVar6;
  byte *pbVar7;
  uint uVar8;
  undefined1 auStack_64 [4];
  byte local_60 [16];
  byte local_50 [16];
  byte local_40 [28];
  
  if (param_1 == (int *)0x0) {
    iVar1 = -0x6100;
  }
  else {
    iVar1 = -0x6100;
    if (*param_1 != 0) {
      iVar2 = param_1[0x10];
      iVar1 = -0x6100;
      if ((iVar2 != 0) && (iVar1 = -0x6100, param_2 != 0)) {
        uVar8 = *(uint *)(*param_1 + 4);
        FUN_ram_4206d7da(local_60,0x10);
        FUN_ram_4206d7da(local_50,0x10);
        FUN_ram_4206b4c0(param_1,local_60,local_50);
        uVar3 = *(uint *)(iVar2 + 0x20);
        uVar8 = uVar8 & 0x1f;
        uVar6 = 0;
        if (uVar3 < uVar8) {
          uVar6 = 0;
          do {
            if (uVar6 < uVar3) {
              bVar4 = *(byte *)(iVar2 + uVar6 + 0x10);
            }
            else {
              bVar4 = (uVar3 == uVar6) << 7;
            }
            local_40[uVar6] = bVar4;
            uVar6 = uVar6 + 1;
          } while (uVar6 < uVar8);
          uVar3 = 0;
          pbVar7 = local_40;
          do {
            pbVar5 = local_50 + uVar3;
            uVar3 = uVar3 + 1;
            *pbVar7 = *pbVar5 ^ *pbVar7;
            pbVar7 = pbVar7 + 1;
          } while (uVar3 < uVar8);
        }
        else {
          for (; uVar6 < uVar8; uVar6 = uVar6 + 1) {
            local_40[uVar6] = *(byte *)(iVar2 + uVar6 + 0x10) ^ local_60[uVar6];
          }
        }
        for (uVar3 = 0; uVar3 < uVar8; uVar3 = uVar3 + 1) {
          *(byte *)(iVar2 + uVar3) = local_40[uVar3] ^ *(byte *)(iVar2 + uVar3);
        }
        iVar1 = FUN_ram_4206ab3c(param_1,iVar2,uVar8,iVar2,auStack_64);
        if (iVar1 == 0) {
          FUN_ram_4039c11e(param_2,iVar2,uVar8);
        }
        FUN_ram_4206d7da(local_60,0x10);
        FUN_ram_4206d7da(local_50,0x10);
        *(undefined4 *)(iVar2 + 0x20) = 0;
        FUN_ram_4206d7da(iVar2 + 0x10,0x10);
        FUN_ram_4206d7da(iVar2,0x10);
      }
    }
  }
  return iVar1;
}

