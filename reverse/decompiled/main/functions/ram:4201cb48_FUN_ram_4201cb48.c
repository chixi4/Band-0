
bool FUN_ram_4201cb48(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6,
                     int param_7)

{
  int iVar1;
  int iVar2;
  
  if (param_1 < param_3) {
    return false;
  }
  if (param_5 + param_3 <= param_1) {
    return false;
  }
  if (param_2 < param_4) {
    return false;
  }
  param_6 = param_6 + param_4;
  if (param_6 <= param_2) {
    return false;
  }
  iVar1 = param_3 + param_7;
  if ((param_1 < iVar1) && (param_2 < param_4 + param_7)) {
    param_2 = param_2 - (param_4 + param_7);
    return param_2 * param_2 + (param_1 - iVar1) * (param_1 - iVar1) <= param_7 * param_7;
  }
  iVar2 = (param_5 + param_3) - param_7;
  if (param_1 < iVar2) {
    if (iVar1 <= param_1) {
      return true;
    }
LAB_ram_4201cbec:
    if (param_6 - param_7 <= param_2) {
      param_2 = param_2 - ((param_6 - param_7) + -1);
      return (param_1 - iVar1) * (param_1 - iVar1) + param_2 * param_2 <= param_7 * param_7;
    }
    if (param_1 < iVar2) {
      return true;
    }
  }
  else {
    if (param_2 < param_4 + param_7) {
      param_1 = param_1 - (iVar2 + -1);
      param_2 = param_2 - (param_4 + param_7);
      iVar1 = param_1 * param_1 + param_2 * param_2;
      goto LAB_ram_4201cbae;
    }
    if (param_1 < iVar1) goto LAB_ram_4201cbec;
  }
  if (param_2 < param_6 - param_7) {
    return true;
  }
  param_1 = param_1 - (iVar2 + -1);
  param_2 = param_2 - ((param_6 - param_7) + -1);
  iVar1 = param_1 * param_1 + param_2 * param_2;
LAB_ram_4201cbae:
  return iVar1 <= param_7 * param_7;
}

