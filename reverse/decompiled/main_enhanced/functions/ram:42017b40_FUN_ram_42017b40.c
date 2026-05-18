
void FUN_ram_42017b40(int param_1,uint param_2,uint param_3,int param_4,int param_5,int param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte *pbVar4;
  int iVar5;
  uint uVar6;
  int iVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  
  iVar11 = (param_6 + 1) - param_5;
  iVar1 = 0;
  iVar7 = (param_4 + param_2) - param_6;
  iVar3 = (param_5 + param_3) - param_6;
  iVar12 = -param_6;
  do {
    if (param_5 <= iVar1) {
      return;
    }
    iVar9 = (param_6 + 1 + param_2) - (param_4 + param_2);
    uVar6 = param_2;
    iVar10 = -param_6;
    for (iVar2 = 0; iVar2 < param_4; iVar2 = iVar2 + 1) {
      if ((iVar2 < param_6) || (iVar7 <= (int)uVar6)) {
        if (param_6 <= iVar1) {
          if (iVar3 <= (int)param_3) goto LAB_ram_42017bd2;
          goto LAB_ram_42017ba4;
        }
        if (iVar2 < param_6) {
          iVar5 = iVar10 * iVar10;
LAB_ram_42017c1c:
          iVar8 = iVar12 * iVar12;
LAB_ram_42017c20:
          if (iVar5 + iVar8 <= param_6 * param_6) goto LAB_ram_42017ba4;
        }
        else {
LAB_ram_42017bd2:
          if ((int)uVar6 < iVar7) {
            if (iVar2 < param_6) {
LAB_ram_42017c00:
              if (iVar3 <= (int)param_3) {
                iVar5 = iVar10 * iVar10;
                iVar8 = iVar11 * iVar11;
                goto LAB_ram_42017c20;
              }
              if (iVar7 <= (int)uVar6) goto LAB_ram_42017be4;
            }
            goto LAB_ram_42017ba4;
          }
          if (iVar1 < param_6) {
            iVar5 = iVar9 * iVar9;
            goto LAB_ram_42017c1c;
          }
          if (iVar2 < param_6) goto LAB_ram_42017c00;
LAB_ram_42017be4:
          if (((int)param_3 < iVar3) || (iVar9 * iVar9 + iVar11 * iVar11 <= param_6 * param_6))
          goto LAB_ram_42017ba4;
        }
      }
      else {
LAB_ram_42017ba4:
        if ((uVar6 < 200) && (param_3 < 200)) {
          pbVar4 = (byte *)(param_3 * 0x19 + ((int)uVar6 >> 3) + param_1);
          *pbVar4 = (byte)(1 << (~uVar6 & 7)) | *pbVar4;
        }
      }
      uVar6 = uVar6 + 1;
      iVar10 = iVar10 + 1;
      iVar9 = iVar9 + 1;
    }
    iVar1 = iVar1 + 1;
    iVar11 = iVar11 + 1;
    iVar12 = iVar12 + 1;
    param_3 = param_3 + 1;
  } while( true );
}

