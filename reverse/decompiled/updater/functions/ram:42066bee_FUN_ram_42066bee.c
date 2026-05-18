
int FUN_ram_42066bee(int param_1,char *param_2,int param_3)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  uint uVar4;
  char *pcVar5;
  int iStack_48;
  
  if (param_2 == (char *)0x0) {
    return 0;
  }
  cVar1 = '\0';
  for (pcVar3 = param_2; 1 < (int)(param_2 + (param_3 - (int)pcVar3)); pcVar3 = pcVar3 + uVar4 + 2)
  {
    uVar4 = (uint)(byte)pcVar3[1];
    if ((int)(param_2 + (param_3 - (int)pcVar3)) <= (int)(uVar4 + 1)) break;
    if (*pcVar3 == -0x23) {
      if (((uint)(byte)pcVar3[2] << 0x10 | (uint)(byte)pcVar3[3] << 8 | (uint)(byte)pcVar3[4]) ==
          0x506f9a) {
        if (pcVar3[5] == '\x1f') {
          iStack_48 = uVar4 - 4;
          *(char *)(param_1 + 0xa0) = (char)iStack_48;
          iVar2 = FUN_ram_40399d1a(1,iStack_48);
          *(int *)(param_1 + 0x9c) = iVar2;
          if (iVar2 != 0) {
            pcVar5 = pcVar3 + 6;
            goto LAB_ram_42066cb4;
          }
        }
      }
LAB_ram_42066c8e:
      cVar1 = cVar1 + '\x01';
    }
    else if (*pcVar3 == -1) {
      if (uVar4 == 0) goto LAB_ram_42066c8e;
      pcVar5 = pcVar3 + 3;
      if (pcVar3[2] == '\x03') {
        *(char *)(param_1 + 0x98) = (char)(uVar4 - 1);
        iVar2 = FUN_ram_40399d1a(1,uVar4 - 1);
        *(int *)(param_1 + 0x94) = iVar2;
      }
      else {
        if (pcVar3[2] != '\f') goto LAB_ram_42066c8e;
        *(char *)(param_1 + 0x90) = (char)(uVar4 - 1);
        iVar2 = FUN_ram_40399d1a(1,uVar4 - 1);
        *(int *)(param_1 + 0x8c) = iVar2;
      }
      iStack_48 = uVar4 - 1;
LAB_ram_42066cb4:
      FUN_ram_40399daa(iVar2,pcVar5,iStack_48);
    }
  }
  return -(uint)(cVar1 != '\0');
}

