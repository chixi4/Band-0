
int FUN_ram_4206e01e(int param_1,int param_2,undefined4 param_3)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  code *pcVar4;
  
  iVar2 = *(int *)(param_1 + 0xac);
  uVar3 = *(uint *)(param_1 + 0xb0);
  cVar1 = **(char **)(param_1 + 0xa8);
  if (iVar2 == 0x16) {
    if (cVar1 != '\0') goto LAB_ram_4206e050;
    if (0x1000 < uVar3) goto LAB_ram_4206e046;
LAB_ram_4206e076:
    uVar3 = uVar3 - 4;
    (*(char **)(param_1 + 0xa8))[1] = (char)(uVar3 >> 0x10);
    *(char *)(*(int *)(param_1 + 0xa8) + 2) = (char)(uVar3 >> 8);
    iVar2 = *(int *)(param_1 + 0xa8);
    *(char *)(iVar2 + 3) = (char)uVar3;
    if (((cVar1 == '\0') || (param_2 == 0)) ||
       (pcVar4 = *(code **)(*(int *)(param_1 + 0x38) + 0x10),
       iVar2 = (*pcVar4)(param_1,*(undefined4 *)(param_1 + 0xa8),*(undefined4 *)(param_1 + 0xb0),
                         uVar3 >> 8,iVar2,pcVar4), iVar2 == 0)) {
LAB_ram_4206e060:
      iVar2 = FUN_ram_4206de94(param_1,param_3);
      return iVar2;
    }
  }
  else {
    if (iVar2 == 0x14) {
LAB_ram_4206e050:
      if ((*(int *)(param_1 + 0x38) != 0) && (uVar3 < 0x1001)) {
        if (iVar2 != 0x16) goto LAB_ram_4206e060;
        goto LAB_ram_4206e076;
      }
    }
LAB_ram_4206e046:
    iVar2 = -0x6c00;
  }
  return iVar2;
}

