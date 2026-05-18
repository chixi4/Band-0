
int FUN_ram_4207b232(int param_1,int param_2,char *param_3,int param_4)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  
  uVar2 = param_4 - (int)param_3;
  if (uVar2 < 2) {
    return -1;
  }
  cVar1 = *param_3;
  if (cVar1 == '\x7f') {
    return 0;
  }
  if (cVar1 == '\x04') {
    return 0;
  }
  if ((param_1 != 0) && (iVar3 = FUN_ram_4039c0e0(param_2 + 10,param_1 + 4,6), iVar3 != 0)) {
    return -1;
  }
  if (cVar1 == '\a') {
    if ((param_3[1] != '\0') && (param_3[1] != '\x01')) {
      return 0;
    }
    uVar2 = (uint)(uVar2 == 2);
  }
  else if (cVar1 == '\b') {
    if (1 < (byte)param_3[1]) {
      return 0;
    }
    uVar2 = (uint)(uVar2 < 4);
  }
  else {
    if (cVar1 != '\x03') {
      return 0;
    }
    cVar1 = param_3[1];
    if (cVar1 != '\x01') {
      if (cVar1 == '\x02') {
        uVar2 = (uint)(uVar2 < 6);
        goto LAB_ram_4207b2a0;
      }
      if (cVar1 != '\0') {
        return 0;
      }
    }
    uVar2 = (uint)(uVar2 < 9);
  }
LAB_ram_4207b2a0:
  return -uVar2;
}

