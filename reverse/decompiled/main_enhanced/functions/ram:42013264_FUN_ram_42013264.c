
int FUN_ram_42013264(uint param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  code *pcVar3;
  int iVar4;
  char *pcVar5;
  
  if (param_1 < 3) {
    iVar2 = *(int *)("Make the version that feels safe first." + param_1 * 4 + 0x20);
    pcVar3 = *(code **)(iVar2 + 0x1c);
    iVar4 = *(int *)(iVar2 + 0x14);
    pcVar5 = param_2 + param_3;
    FUN_ram_403917e6(iVar2 + 0xc);
    for (; param_2 != pcVar5; param_2 = param_2 + 1) {
      cVar1 = *param_2;
      if (((cVar1 != '\n') || (iVar4 == 2)) || ((*pcVar3)(param_1,0xd), iVar4 != 1)) {
        (*pcVar3)(param_1,cVar1);
      }
    }
    FUN_ram_403917fc(iVar2 + 0xc);
    return param_3;
  }
                    /* WARNING: Subroutine does not return */
  FUN_ram_4039bf9e(0,0,0,0);
}

