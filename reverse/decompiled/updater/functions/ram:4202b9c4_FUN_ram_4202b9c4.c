
int FUN_ram_4202b9c4(undefined4 *param_1,undefined4 param_2,uint *param_3)

{
  int iVar1;
  char *pcVar2;
  int aiStack_14 [2];
  
  iVar1 = FUN_ram_4202b91a(param_1,param_2,aiStack_14,1);
  if (iVar1 == 0) {
    if (aiStack_14[0] == 1) {
      pcVar2 = (char *)*param_1;
      *param_3 = (uint)(*pcVar2 != '\0');
      *param_1 = pcVar2 + 1;
    }
    else {
      iVar1 = -100;
    }
  }
  return iVar1;
}

