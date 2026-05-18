
int FUN_ram_4206f090(int *param_1)

{
  int iVar1;
  
  if ((((param_1 == (int *)0x0) || (*param_1 == 0)) || (param_1[0xe] == 0)) || (param_1[1] == 0x1b))
  {
    iVar1 = -0x7100;
  }
  else {
    iVar1 = FUN_ram_4206de36();
    if ((iVar1 == 0) && (iVar1 = FUN_ram_4206e830(param_1), iVar1 == 0)) {
      if (*(char *)(*param_1 + 8) == '\0') {
        if (param_1[1] == 0) {
          param_1[1] = 1;
          return 0;
        }
        if (param_1[1] == 1) {
          iVar1 = FUN_ram_42071084(param_1);
        }
        else {
          iVar1 = FUN_ram_420703a0(param_1);
        }
        if (iVar1 == 0) {
          return 0;
        }
      }
      else {
        iVar1 = -0x7100;
      }
      if ((char)param_1[0x23] != '\0') {
        iVar1 = FUN_ram_4206e830(param_1);
        return iVar1;
      }
    }
  }
  return iVar1;
}

