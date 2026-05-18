
int FUN_ram_420a9bfa(int *param_1,int *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  do {
    if (((*param_1 != *param_2) || (param_1[1] != param_2[1])) ||
       (iVar1 = FUN_ram_4039c0e0(param_1[2],param_2[2]), iVar1 != 0)) {
      return -1;
    }
    iVar3 = param_1[3];
    iVar1 = param_2[3];
    if (((iVar3 != iVar1) || (param_1[4] != param_2[4])) ||
       (iVar2 = FUN_ram_4039c0e0(param_1[5],param_2[5]), iVar2 != 0)) {
      if ((iVar3 != 0xc) && (iVar3 != 0x13)) {
        return -1;
      }
      if ((iVar1 != 0xc) && (iVar1 != 0x13)) {
        return -1;
      }
      if (param_1[4] != param_2[4]) {
        return -1;
      }
      iVar1 = FUN_ram_420a9bb6(param_1[5],param_2[5]);
      if (iVar1 != 0) {
        return -1;
      }
    }
    if ((char)param_1[7] != (char)param_2[7]) {
      return -1;
    }
    param_1 = (int *)param_1[6];
    param_2 = (int *)param_2[6];
    if (param_1 == (int *)0x0) {
      return -(uint)(param_2 != (int *)0x0);
    }
    if (param_2 == (int *)0x0) {
      return -1;
    }
  } while( true );
}

