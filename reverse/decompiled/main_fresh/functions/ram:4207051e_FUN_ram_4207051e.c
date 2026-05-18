
int FUN_ram_4207051e(int param_1,int param_2,int param_3,int param_4,undefined4 param_5,int param_6,
                    undefined4 param_7)

{
  char cVar1;
  char *pcVar2;
  char *pcVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  uint uVar7;
  char *pcVar8;
  uint uVar9;
  undefined1 auStack_450 [31];
  char acStack_431 [1033];
  
  (*(code *)&SUB_ram_40010488)(acStack_431 + 1,0,0x400);
  if (((param_2 == 0 && param_3 == 0) || (param_4 != 0)) &&
     (uVar7 = *(uint *)(param_1 + 4), uVar7 - 0x10 < 0x3f1)) {
    iVar5 = FUN_ram_4206f864(param_1,param_7,acStack_431 + 1);
    if (iVar5 != 0) {
      return iVar5;
    }
    if (acStack_431[uVar7] != -0x44) {
      return -0x4100;
    }
    if (((param_2 == 0) || ((iVar5 = FUN_ram_4206eece(param_2), iVar5 != 0 && (param_3 == iVar5))))
       && (iVar5 = FUN_ram_4206eece(param_5), iVar5 != 0)) {
      iVar6 = FUN_ram_420683ba(param_1 + 8);
      uVar9 = iVar6 - 1;
      if ((int)(uint)(byte)acStack_431[1] >> ((1 - uVar7) * 8 + uVar9 & 0x1f) == 0) {
        pcVar2 = acStack_431 + 2;
        uVar4 = uVar7 - 1;
        if ((uVar9 & 7) != 0) {
          pcVar2 = acStack_431 + 1;
          uVar4 = uVar7;
        }
        if (iVar5 + 2U <= uVar4) {
          iVar6 = (uVar4 - iVar5) + -1;
          pcVar8 = pcVar2 + iVar6;
          iVar6 = FUN_ram_4206eede(pcVar2,iVar6,pcVar8,iVar5,param_5);
          if (iVar6 != 0) {
            return iVar6;
          }
          acStack_431[1] = (byte)(0xff >> (uVar4 * 8 - uVar9 & 0x1f)) & acStack_431[1];
          do {
            cVar1 = *pcVar2;
            pcVar3 = pcVar2 + 1;
            if (pcVar8 + -1 <= pcVar2) break;
            pcVar2 = pcVar3;
          } while (cVar1 == '\0');
          if (cVar1 != '\x01') {
            return -0x4100;
          }
          if ((param_6 != -1) && ((int)pcVar8 - (int)pcVar3 != param_6)) {
            return -0x4100;
          }
          iVar6 = FUN_ram_4206efd4(param_4,param_3,pcVar3,(int)pcVar8 - (int)pcVar3,auStack_450,
                                   param_5);
          if (iVar6 != 0) {
            return iVar6;
          }
          iVar5 = FUN_ram_4039c0e0(pcVar8,auStack_450,iVar5);
          if (iVar5 != 0) {
            return -0x4380;
          }
          return 0;
        }
      }
    }
  }
  return -0x4080;
}

