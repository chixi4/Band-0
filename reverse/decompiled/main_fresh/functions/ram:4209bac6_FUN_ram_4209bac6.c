
undefined4 FUN_ram_4209bac6(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  char *pcVar2;
  int iVar3;
  uint uVar4;
  char *pcVar5;
  
  pcVar5 = param_1 + param_2;
  (*(code *)&SUB_ram_40010488)(param_3,0,0x34);
  pcVar2 = param_1 + param_2 + -1;
  do {
    if (pcVar5 <= param_1 + 1) {
      return 0;
    }
    cVar1 = *param_1;
    if (cVar1 == -0x23) {
      if (param_1 == pcVar2) {
        return 0;
      }
      if (param_1[1] == '\0') {
        return 0;
      }
    }
    uVar4 = (uint)(byte)param_1[1];
    if (pcVar5 < param_1 + uVar4 + 2) {
      return 0xffffffff;
    }
    if (cVar1 == '0') {
      param_3[2] = param_1;
      param_3[3] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == -0xc) {
      param_3[0xb] = param_1;
      param_3[0xc] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == -0x23) {
      if (uVar4 == 0) {
        return 0;
      }
      if ((((uVar4 < 6) || (iVar3 = FUN_ram_4209b412(param_1 + 2), iVar3 != 0x50f201)) ||
          (param_1[6] != '\x01')) || (param_1[7] != '\0')) {
        if ((param_1 + 5 < pcVar5) && (0x13 < uVar4)) {
          iVar3 = FUN_ram_4209b412(param_1 + 2);
          if (iVar3 == 0xfac04) {
            param_3[4] = param_1 + 6;
          }
          else {
LAB_ram_4209bbd4:
            iVar3 = FUN_ram_4209b412(param_1 + 2);
            if (iVar3 == 0xfac01) {
              param_3[5] = param_1 + 6;
              param_3[6] = (byte)param_1[1] - 4;
            }
            else if (iVar3 == 0xfac03) {
              param_3[7] = param_1 + 6;
              param_3[8] = (byte)param_1[1] - 4;
            }
            else if (iVar3 == 0xfac09) {
              param_3[9] = param_1 + 6;
              param_3[10] = (byte)param_1[1] - 4;
            }
          }
        }
        else if (6 < uVar4) goto LAB_ram_4209bbd4;
      }
      else {
        *param_3 = param_1;
        param_3[1] = (byte)param_1[1] + 2;
      }
    }
    param_1 = param_1 + (byte)param_1[1] + 2;
  } while( true );
}

