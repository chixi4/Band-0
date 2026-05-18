
int FUN_ram_4202bbf6(uint *param_1,int param_2,uint *param_3,uint *param_4)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  byte *pbVar4;
  byte *pbVar5;
  int aiStack_24 [2];
  
  iVar1 = FUN_ram_4202b91a(param_1,param_2,aiStack_24,0x30);
  if (iVar1 == 0) {
    pbVar5 = (byte *)*param_1;
    iVar1 = -0x60;
    if (0 < param_2 - (int)pbVar5) {
      *param_3 = (uint)*pbVar5;
      pbVar5 = pbVar5 + aiStack_24[0];
      iVar2 = FUN_ram_4202b91a(param_1,pbVar5,param_3 + 1,6);
      iVar1 = iVar2;
      if (iVar2 == 0) {
        uVar3 = *param_1;
        param_3[2] = uVar3;
        pbVar4 = (byte *)(uVar3 + param_3[1]);
        *param_1 = (uint)pbVar4;
        if (pbVar4 == pbVar5) {
          FUN_ram_420293a6(param_4,0xc);
        }
        else {
          *param_4 = (uint)*pbVar4;
          *param_1 = (uint)(pbVar4 + 1);
          iVar1 = FUN_ram_4202b8a0(param_1,pbVar5,param_4 + 1);
          if (iVar1 == 0) {
            uVar3 = *param_1;
            param_4[2] = uVar3;
            pbVar4 = (byte *)(uVar3 + param_4[1]);
            *param_1 = (uint)pbVar4;
            iVar1 = iVar2;
            if (pbVar4 != pbVar5) {
              iVar1 = -0x66;
            }
          }
        }
      }
    }
  }
  return iVar1;
}

