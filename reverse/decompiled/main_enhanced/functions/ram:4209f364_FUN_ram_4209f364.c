
undefined4 FUN_ram_4209f364(char *param_1,int param_2,undefined4 *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  char *pcVar5;
  
  pcVar5 = param_1 + param_2;
  (*(code *)&SUB_ram_40010488)(param_3,0,0x3c);
  pcVar4 = param_1 + param_2 + -1;
  do {
    if (pcVar5 <= param_1 + 1) {
      return 0;
    }
    cVar1 = *param_1;
    if (cVar1 == -0x23) {
      if (param_1 == pcVar4) {
        return 0;
      }
      if (param_1[1] == '\0') {
        return 0;
      }
    }
    uVar2 = (uint)(byte)param_1[1];
    if (pcVar5 < param_1 + uVar2 + 2) {
      return 0xffffffff;
    }
    if (cVar1 == '0') {
      param_3[2] = param_1;
      param_3[3] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == -0xc) {
      param_3[0xd] = param_1;
      param_3[0xe] = (byte)param_1[1] + 2;
    }
    else if (cVar1 == -0x23) {
      if (uVar2 == 0) {
        return 0;
      }
      if ((((uVar2 < 6) || (iVar3 = FUN_ram_4209effe(param_1 + 2), iVar3 != 0x50f201)) ||
          (param_1[6] != '\x01')) || (param_1[7] != '\0')) {
        if ((param_1 + 5 < pcVar5) && (0x13 < uVar2)) {
          iVar3 = FUN_ram_4209effe(param_1 + 2);
          if (iVar3 == 0xfac04) {
            param_3[4] = param_1 + 6;
          }
          else {
LAB_ram_4209f472:
            iVar3 = FUN_ram_4209effe(param_1 + 2);
            if (iVar3 == 0xfac01) {
              param_3[5] = param_1 + 6;
              param_3[6] = (byte)param_1[1] - 4;
            }
            else if (iVar3 == 0xfac03) {
              param_3[7] = param_1 + 6;
              param_3[8] = (byte)param_1[1] - 4;
            }
            else {
              if (iVar3 != 0xfac09) goto LAB_ram_4209f4e0;
              param_3[9] = param_1 + 6;
              param_3[10] = (byte)param_1[1] - 4;
            }
          }
        }
        else {
          if (6 < uVar2) goto LAB_ram_4209f472;
          if (uVar2 < 5) goto LAB_ram_4209f3e2;
LAB_ram_4209f4e0:
          iVar3 = FUN_ram_4209effe(param_1 + 2);
          if (iVar3 == 0x506f9a20) {
            param_3[0xb] = param_1 + 6;
            param_3[0xc] = (byte)param_1[1] - 4;
          }
        }
      }
      else {
        *param_3 = param_1;
        param_3[1] = (byte)param_1[1] + 2;
      }
    }
LAB_ram_4209f3e2:
    param_1 = param_1 + (byte)param_1[1] + 2;
  } while( true );
}

