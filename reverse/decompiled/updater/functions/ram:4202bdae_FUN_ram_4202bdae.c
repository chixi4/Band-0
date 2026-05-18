
int FUN_ram_4202bdae(uint *param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  uint uVar3;
  char *pcVar4;
  
  uVar1 = FUN_ram_42024bb6(param_3);
  uVar3 = 1;
  if (uVar1 != 0) {
    uVar3 = uVar1;
  }
  uVar1 = *param_1;
  if ((param_2 <= uVar1) && (uVar3 <= uVar1 - param_2)) {
    *param_1 = uVar1 - uVar3;
    iVar2 = FUN_ram_42024c5e(param_3);
    if (iVar2 != 0) {
      return iVar2;
    }
    if ((*(short *)(param_3 + 4) == 1) && (pcVar4 = (char *)*param_1, *pcVar4 < '\0')) {
      if ((int)((int)pcVar4 - param_2) < 1) {
        return -0x6c;
      }
      *param_1 = (uint)(pcVar4 + -1);
      pcVar4[-1] = '\0';
      uVar3 = uVar3 + 1;
    }
    iVar2 = FUN_ram_4202bd64(param_1,param_2,uVar3,2);
    return iVar2;
  }
  return -0x6c;
}

