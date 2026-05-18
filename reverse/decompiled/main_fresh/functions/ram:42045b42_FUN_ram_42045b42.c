
uint FUN_ram_42045b42(int param_1,byte *param_2,int param_3)

{
  int *piVar1;
  int iVar2;
  byte *pbVar3;
  uint uVar4;
  uint uVar5;
  byte *pbVar6;
  uint uVar7;
  
  if ((param_1 != 0) && (param_2 != (byte *)0x0)) {
    piVar1 = *(int **)(param_1 + 8);
    if (param_3 == 0) {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
        pbVar6 = (byte *)piVar1[8];
        if (pbVar6 != (byte *)0x0) {
          pbVar3 = param_2;
          if (pbVar6 == param_2) {
LAB_ram_42045bb8:
            return (uint)piVar1 & -(uint)(piVar1[8] != 0);
          }
          while( true ) {
            uVar4 = (uint)*pbVar3;
            uVar7 = uVar4;
            if (((&DAT_ram_3c0fb899)[uVar4] & 3) == 1) {
              uVar7 = uVar4 + 0x20;
            }
            uVar5 = (uint)*pbVar6;
            if (((&DAT_ram_3c0fb899)[uVar5] & 3) == 1) {
              uVar5 = uVar5 + 0x20;
            }
            if (uVar7 != uVar5) break;
            if (uVar4 == 0) goto LAB_ram_42045bb8;
            pbVar6 = pbVar6 + 1;
            pbVar3 = pbVar3 + 1;
          }
        }
      }
    }
    else {
      for (; piVar1 != (int *)0x0; piVar1 = (int *)*piVar1) {
        if ((piVar1[8] == 0) || (iVar2 = FUN_ram_4039c438(param_2), iVar2 == 0))
        goto LAB_ram_42045bb8;
      }
    }
  }
  return 0;
}

