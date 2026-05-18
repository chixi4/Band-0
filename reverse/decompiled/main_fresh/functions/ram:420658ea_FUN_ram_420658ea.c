
undefined4 FUN_ram_420658ea(char *param_1,int param_2,int param_3,int param_4)

{
  undefined4 uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  
  uVar1 = 0x102;
  if (((param_1 != (char *)0x0) && (uVar1 = 0x102, param_2 != 0)) && (param_3 != 0)) {
    while ((*param_1 != '\0' && (iVar3 = (*(code *)&SUB_ram_40010514)(param_1,0x3d), iVar3 != 0))) {
      iVar4 = (*(code *)&SUB_ram_400104a8)(param_2);
      if ((iVar3 - (int)param_1 == iVar4) &&
         (iVar4 = (*(code *)&SUB_ram_4001052c)(param_1,param_2), iVar4 == 0)) {
        iVar3 = iVar3 + 1;
        iVar4 = (*(code *)&SUB_ram_40010514)(iVar3,0x26);
        if (iVar4 == 0) {
          iVar4 = (*(code *)&SUB_ram_400104a8)(iVar3);
          iVar4 = iVar4 + iVar3;
        }
        uVar2 = iVar4 - iVar3;
        if (uVar2 <= param_4 - 1U) {
          FUN_ram_4039c11e(param_3,iVar3,uVar2);
          *(undefined1 *)(uVar2 + param_3) = 0;
          return 0;
        }
        return 0xb004;
      }
      iVar3 = (*(code *)&SUB_ram_40010514)(iVar3,0x26);
      if (iVar3 == 0) break;
      param_1 = (char *)(iVar3 + 1);
    }
    uVar1 = 0x105;
  }
  return uVar1;
}

