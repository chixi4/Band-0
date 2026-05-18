
int FUN_ram_4206e1fc(int *param_1)

{
  char cVar1;
  int iVar2;
  
  if ((*(char *)(*param_1 + 9) == '\0') && (param_1[3] != 0)) {
    if (param_1[0x1d] != 0x16) {
      return -0x7700;
    }
  }
  else if (param_1[0x1d] != 0x16) goto LAB_ram_4206e22a;
  iVar2 = FUN_ram_4206e12a(param_1);
  if (iVar2 != 0) {
    return iVar2;
  }
LAB_ram_4206e22a:
  if (param_1[0x1d] == 0x14) {
    iVar2 = -0x7200;
    if ((param_1[0x1e] == 1) && (iVar2 = -0x7200, *(char *)param_1[0x1b] == '\x01')) {
      iVar2 = 0;
    }
  }
  else {
    iVar2 = 0;
    if ((param_1[0x1d] == 0x15) && (iVar2 = -0x7200, param_1[0x1e] == 2)) {
      iVar2 = -0x7780;
      cVar1 = *(char *)param_1[0x1b];
      if ((cVar1 != '\x02') && (iVar2 = -0x6680, cVar1 == '\x01')) {
        cVar1 = ((char *)param_1[0x1b])[1];
        iVar2 = -0x7880;
        if ((cVar1 != '\0') && (iVar2 = 0, cVar1 != 'd')) {
          iVar2 = -0x6680;
        }
      }
    }
  }
  return iVar2;
}

