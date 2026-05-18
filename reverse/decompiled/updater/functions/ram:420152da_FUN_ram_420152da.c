
undefined4 FUN_ram_420152da(undefined4 *param_1,int param_2)

{
  byte bVar1;
  uint *puVar2;
  int iVar3;
  byte *pbVar4;
  undefined4 uVar5;
  code *pcVar6;
  
  puVar2 = (uint *)FUN_ram_42014f58(param_2);
  iVar3 = FUN_ram_4201478a(puVar2,param_2);
  if ((puVar2 == (uint *)0x0) || (iVar3 == -1)) {
    uVar5 = 9;
  }
  else {
    pcVar6 = *(code **)(puVar2[1] + 0x18);
    if (pcVar6 != (code *)0x0) {
      if ((*puVar2 & 2) == 0) {
        uVar5 = (*pcVar6)(iVar3,iVar3);
      }
      else {
        uVar5 = (*pcVar6)(puVar2[2],iVar3);
      }
      FUN_ram_40390ff2(0x3fcb6688);
      pbVar4 = (byte *)(gp + -0x600 + param_2 * 3);
      bVar1 = *pbVar4;
      if ((bVar1 & 1) == 0) {
        if ((bVar1 >> 2 & 1) == 0) {
          *pbVar4 = 0;
          pbVar4[1] = 0xff;
          pbVar4[2] = 0xff;
        }
        else {
          *pbVar4 = bVar1 | 2;
        }
      }
      FUN_ram_4039100a(0x3fcb6688);
      return uVar5;
    }
    uVar5 = 0x58;
  }
  *param_1 = uVar5;
  return 0xffffffff;
}

