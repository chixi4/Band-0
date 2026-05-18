
int FUN_ram_4206fc96(int param_1,code *param_2,undefined4 param_3,int param_4,int param_5,
                    int param_6,int param_7,byte *param_8)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  uint uVar5;
  byte *pbVar6;
  byte *pbVar7;
  
  if ((((param_4 == 0 && param_5 == 0) || (param_6 != 0)) && (param_2 != (code *)0x0)) &&
     ((uVar1 = *(uint *)(param_1 + 4), param_4 == 0 ||
      ((iVar2 = FUN_ram_4206eece(param_4), iVar2 != 0 && (param_5 == iVar2)))))) {
    if (*(int *)(param_1 + 0x74) != 0) {
      param_4 = *(int *)(param_1 + 0x74);
    }
    iVar2 = FUN_ram_4206eece(param_4);
    if (iVar2 != 0) {
      if (param_7 == -1) {
        if ((uint)(iVar2 * 2) <= uVar1) {
          param_7 = iVar2;
          if (uVar1 < iVar2 * 2 + 2U) {
            param_7 = (uVar1 - 2) - iVar2;
          }
LAB_ram_4206fd2c:
          (*(code *)&SUB_ram_40010488)(param_8,0,uVar1);
          iVar3 = FUN_ram_420683ba(param_1 + 8);
          pbVar6 = param_8 + (((uVar1 - iVar2) + -2) - param_7) + 1;
          param_8[((uVar1 - iVar2) + -2) - param_7] = 1;
          iVar4 = (*param_2)(param_3,pbVar6,param_7);
          if (iVar4 != 0) {
            return iVar4 + -0x4480;
          }
          pbVar7 = pbVar6 + param_7;
          iVar4 = FUN_ram_4206efd4(param_6,param_5,pbVar6,param_7,pbVar7,param_4);
          if (iVar4 != 0) {
            return iVar4;
          }
          uVar5 = (uint)((iVar3 - 1U & 7) == 0);
          iVar3 = FUN_ram_4206eede(param_8 + uVar5,((uVar1 - iVar2) + -1) - uVar5,pbVar7,iVar2,
                                   param_4);
          if (iVar3 != 0) {
            return iVar3;
          }
          iVar3 = FUN_ram_420683ba(param_1 + 8);
          *param_8 = (byte)(0xff >> ((uVar1 * 8 + 1) - iVar3 & 0x1f)) & *param_8;
          pbVar7[iVar2] = 0xbc;
          iVar2 = FUN_ram_4206f8f4(param_1,param_2,param_3,param_8,param_8);
          return iVar2;
        }
      }
      else if ((-1 < param_7) && ((uint)(param_7 + 2 + iVar2) <= uVar1)) goto LAB_ram_4206fd2c;
    }
  }
  return -0x4080;
}

