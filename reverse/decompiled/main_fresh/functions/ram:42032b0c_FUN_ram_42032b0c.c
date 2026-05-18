
int FUN_ram_42032b0c(undefined1 param_1,int param_2,int param_3,int param_4,byte *param_5,
                    int param_6)

{
  int iVar1;
  char cStack_12;
  undefined1 auStack_11 [9];
  
  if (param_6 == 0) {
    iVar1 = 4;
    if ((int)(*param_5 + 2 + param_2) <= param_3) {
      *(char *)((uint)*param_5 + param_4) = (char)param_2 + '\x01';
      iVar1 = 0;
      *(undefined1 *)(param_4 + (uint)*param_5 + 1) = param_1;
      *param_5 = *param_5 + 2;
    }
  }
  else {
    cStack_12 = (char)param_2 + '\x01';
    auStack_11[0] = param_1;
    iVar1 = FUN_ram_403a3150(param_6,&cStack_12,1);
    if (iVar1 == 0) {
      iVar1 = FUN_ram_403a3150(param_6,auStack_11,1);
    }
  }
  return iVar1;
}

