
int FUN_ram_420677e2(undefined4 param_1,byte *param_2,int param_3,undefined4 param_4,
                    undefined4 param_5)

{
  int iVar1;
  byte *pbVar2;
  int iVar3;
  byte *pbVar4;
  byte *pbVar5;
  int iStack_38;
  int iStack_34;
  byte *pbStack_30;
  uint uStack_2c;
  int iStack_28;
  byte *pbStack_24;
  
  uStack_2c = 0;
  iStack_28 = 0;
  pbStack_24 = (byte *)0x0;
  pbStack_30 = param_2;
  iVar3 = FUN_ram_4202b91a(&pbStack_30,param_2 + param_3,&iStack_34,0x30);
  if (iVar3 == 0) {
    pbVar4 = pbStack_30 + iStack_34;
    iVar3 = FUN_ram_4202ba02(&pbStack_30,pbVar4,&iStack_38);
    if (iVar3 == 0) {
      if (iStack_38 != 1) {
        return -0x3d80;
      }
      iVar3 = FUN_ram_4202b91a(&pbStack_30,pbVar4,&iStack_34,4);
      pbVar2 = pbStack_30;
      iVar1 = iStack_34;
      if (iVar3 == 0) {
        pbStack_30 = pbStack_30 + iStack_34;
        if (pbStack_30 != pbVar4) {
          iVar3 = FUN_ram_4202b91a(&pbStack_30,pbVar4,&iStack_34,0xa0);
          if (iVar3 == 0) {
            pbVar5 = pbStack_30 + iStack_34;
            if (iStack_34 < 1) {
              return -0x3d60;
            }
            uStack_2c = (uint)*pbStack_30;
            if ((uStack_2c != 6) && (uStack_2c != 0x30)) {
              return -0x3d62;
            }
            iVar3 = FUN_ram_4202b91a(&pbStack_30,pbVar5,&iStack_28);
            if (iVar3 == 0) {
              pbStack_24 = pbStack_30;
              pbStack_30 = pbStack_30 + iStack_28;
              if (pbVar5 != pbStack_30) {
                return -0x3d66;
              }
            }
            else if (iVar3 + -0x3d00 != 0) {
              return iVar3 + -0x3d00;
            }
            iVar3 = FUN_ram_420674fc(&uStack_2c,param_1);
            if (iVar3 != 0) {
              return iVar3;
            }
          }
          else if (iVar3 != -0x62) goto LAB_ram_42067814;
        }
        iVar3 = FUN_ram_420670f2(param_1,pbVar2,iVar1);
        if (iVar3 != 0) {
          return iVar3;
        }
        if (pbStack_30 != pbVar4) {
          iVar3 = FUN_ram_4202b91a(&pbStack_30,pbVar4,&iStack_34,0xa1);
          if (iVar3 == 0) {
            pbVar4 = pbStack_30 + iStack_34;
            iVar3 = FUN_ram_4202bb54(&pbStack_30,pbVar4,&iStack_34);
            if (iVar3 != 0) goto LAB_ram_42067814;
            if (pbVar4 != pbStack_30 + iStack_34) {
              return -0x3d66;
            }
            iVar3 = FUN_ram_4206713a(param_1,pbStack_30,(int)pbVar4 - (int)pbStack_30);
            if (iVar3 == 0) {
              return 0;
            }
            if (iVar3 != -0x4e80) {
              return -0x3d00;
            }
          }
          else if (iVar3 != -0x62) goto LAB_ram_42067814;
        }
        iVar3 = FUN_ram_42067124(param_1,pbVar2,iVar1,param_4,param_5);
        return iVar3;
      }
    }
  }
LAB_ram_42067814:
  return iVar3 + -0x3d00;
}

