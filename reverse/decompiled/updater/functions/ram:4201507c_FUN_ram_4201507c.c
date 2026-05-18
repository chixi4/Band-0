
int FUN_ram_4201507c(undefined4 *param_1,undefined4 param_2,uint param_3,undefined4 param_4)

{
  uint *puVar1;
  int iVar2;
  undefined4 *puVar3;
  int iVar4;
  undefined4 uVar5;
  code *pcVar6;
  byte *pbVar7;
  int iVar8;
  uint uVar9;
  
  puVar1 = (uint *)FUN_ram_42014fcc(param_2);
  if (puVar1 == (uint *)0x0) {
    uVar5 = 2;
  }
  else {
    uVar9 = *puVar1;
    if (((param_3 & 3) == 0) || ((uVar9 & 4) == 0)) {
      uVar5 = FUN_ram_42014a18(puVar1,param_2);
      pcVar6 = *(code **)(puVar1[1] + 0x14);
      if (pcVar6 != (code *)0x0) {
        if ((uVar9 & 2) == 0) {
          iVar2 = (*pcVar6)(uVar5,param_3,param_4);
        }
        else {
          iVar2 = (*pcVar6)(puVar1[2],uVar5,param_3,param_4);
        }
        if (iVar2 < 0) {
          puVar3 = (undefined4 *)(*(code *)&SUB_ram_40010670)();
          uVar5 = *puVar3;
          goto LAB_ram_420150ae;
        }
        FUN_ram_40390ff2(0x3fcb6688);
        iVar4 = gp + -0x600;
        iVar8 = 0;
        do {
          if (*(char *)(iVar4 + 1) == -1) {
            pbVar7 = (byte *)(gp + -0x600 + iVar8 * 3);
            *pbVar7 = *pbVar7 & 0xfe;
            uVar9 = puVar1[3];
            pbVar7[2] = (byte)iVar2;
            pbVar7[1] = (byte)uVar9;
            FUN_ram_4039100a(0x3fcb6688);
            return iVar8;
          }
          iVar8 = iVar8 + 1;
          iVar4 = iVar4 + 3;
        } while (iVar8 != 0x40);
        FUN_ram_4039100a(0x3fcb6688);
        pcVar6 = *(code **)(puVar1[1] + 0x18);
        if (pcVar6 != (code *)0x0) {
          if ((*puVar1 & 2) == 0) {
            (*pcVar6)(iVar2);
          }
          else {
            (*pcVar6)(puVar1[2],iVar2);
          }
          uVar5 = 0xc;
          goto LAB_ram_420150ae;
        }
      }
      uVar5 = 0x58;
    }
    else {
      uVar5 = 0x1e;
    }
  }
LAB_ram_420150ae:
  *param_1 = uVar5;
  return -1;
}

