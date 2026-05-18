
int FUN_ram_4202cf02(int param_1,code *param_2,undefined4 param_3,uint param_4,undefined4 param_5,
                    undefined1 *param_6)

{
  int iVar1;
  uint uVar2;
  char *pcVar3;
  int iVar4;
  
  uVar2 = *(uint *)(param_1 + 4);
  if (((param_4 < 0xfffffff5) && (param_4 + 0xb <= uVar2)) && (*param_6 = 0, param_2 != (code *)0x0)
     ) {
    pcVar3 = param_6 + 2;
    param_6[1] = 2;
    while( true ) {
      if (pcVar3 == param_6 + (uVar2 - param_4) + -1) {
        *pcVar3 = '\0';
        if (param_4 != 0) {
          FUN_ram_40399daa(pcVar3 + 1,param_5,param_4);
        }
        iVar1 = FUN_ram_4202c80e(param_1,param_6,param_6);
        return iVar1;
      }
      iVar4 = 100;
      while (iVar1 = (*param_2)(param_3,pcVar3,1), *pcVar3 == '\0') {
        iVar4 = iVar4 + -1;
        if ((iVar4 == 0) || (iVar1 != 0)) goto LAB_ram_4202cfc0;
      }
      if (iVar1 != 0) break;
      pcVar3 = pcVar3 + 1;
    }
LAB_ram_4202cfc0:
    iVar1 = iVar1 + -0x4480;
  }
  else {
    iVar1 = -0x4080;
  }
  return iVar1;
}

