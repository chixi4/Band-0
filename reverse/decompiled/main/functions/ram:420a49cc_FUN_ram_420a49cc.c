
int FUN_ram_420a49cc(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar2 = *(int *)(param_1 + 0xac);
  uVar3 = *(uint *)(param_1 + 0xb0);
  cVar1 = **(char **)(param_1 + 0xa8);
  if (iVar2 == 0x16) {
    if (cVar1 != '\0') goto LAB_ram_420a49fe;
    if (0x800 < uVar3) goto LAB_ram_420a49f4;
LAB_ram_420a4a2c:
    uVar3 = uVar3 - 4;
    (*(char **)(param_1 + 0xa8))[1] = (char)(uVar3 >> 0x10);
    *(char *)(*(int *)(param_1 + 0xa8) + 2) = (char)(uVar3 >> 8);
    iVar2 = *(int *)(param_1 + 0xa8);
    *(char *)(iVar2 + 3) = (char)uVar3;
    if (((cVar1 == '\0') || (param_2 == 0)) ||
       (pcVar4 = *(code **)(*(int *)(param_1 + 0x38) + 0x10),
       iVar2 = (*pcVar4)(param_1,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),
                         uVar3 >> 8,iVar2,pcVar4), iVar2 == 0)) {
LAB_ram_420a4a12:
      iVar2 = FUN_ram_420a4842(param_1,param_3);
      return iVar2;
    }
  }
  else {
    if (iVar2 == 0x14) {
LAB_ram_420a49fe:
      if ((*(int *)(param_1 + 0x38) != 0) && (uVar3 < 0x801)) {
        if (iVar2 != 0x16) goto LAB_ram_420a4a12;
        goto LAB_ram_420a4a2c;
      }
    }
LAB_ram_420a49f4:
    iVar2 = -0x6c00;
  }
  return iVar2;
}

