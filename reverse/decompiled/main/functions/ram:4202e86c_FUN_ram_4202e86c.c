
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int FUN_ram_4202e86c(uint param_1,byte *param_2,int param_3,char *param_4,undefined4 param_5,
                    undefined4 param_6)

{
  byte *pbVar1;
  byte bVar2;
  char cVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  byte bVar7;
  int iStack_4c;
  byte local_48 [8];
  short sStack_40;
  short sStack_3e;
  char cStack_3c;
  byte bStack_3b;
  byte bStack_3a;
  undefined1 auStack_39 [6];
  char cStack_33;
  char cStack_32;
  
  iVar4 = FUN_ram_4202b87e();
  if (iVar4 == 0) {
    return 0x1e;
  }
  thunk_FUN_ram_4202b7dc();
  if (*(char *)(_DAT_ram_3fcb6ba0 + 0xea) == '\0') {
    if (((param_4 != (char *)0x0) && (param_1 < 4)) && ((byte)param_4[1] < 3)) {
      iVar4 = 2;
      if (*(char *)(_DAT_ram_3fcb6ba0 + 0x110) != '\0') goto LAB_ram_4202e9aa;
      if ((0x1e < (ushort)(*(short *)(param_4 + 2) - 1U)) && (*(ushort *)(param_4 + 4) < 0x4001)) {
        cVar3 = *param_4;
        if (cVar3 == '\x01') {
          if ((param_2 != (byte *)0x0) && (*param_2 < 4)) {
LAB_ram_4202e9da:
            iVar5 = FUN_ram_420363a2();
            iVar4 = 6;
            if (iVar5 == 0) goto LAB_ram_4202e9aa;
            goto LAB_ram_4202e8a8;
          }
        }
        else if (cVar3 == '\x02') {
          if ((param_4[8] & 1U) == 0) goto LAB_ram_4202e9da;
        }
        else if ((cVar3 == '\0') && ((param_4[8] & 1U) == 0)) goto LAB_ram_4202e8a8;
      }
    }
  }
  else {
LAB_ram_4202e8a8:
    iVar4 = _DAT_ram_3fcb6ba0;
    *(undefined1 *)(_DAT_ram_3fcb6ba0 + 0x28) = 0;
    bVar7 = (byte)param_1;
    *(byte *)(iVar4 + 0xd0) = bVar7;
    if (param_2 != (byte *)0x0) {
      FUN_ram_4039c11e(iVar4 + 0xd1,param_2,7);
    }
    *(int *)(iVar4 + 0xdc) = param_3;
    *(byte *)(iVar4 + 0xd8) = *(byte *)(iVar4 + 0xd8) & 0xfe | param_2 != (byte *)0x0;
    FUN_ram_4039c11e(iVar4 + 0xe0,param_4,10);
    *(undefined4 *)(iVar4 + 0xec) = param_5;
    *(undefined4 *)(iVar4 + 0xf0) = param_6;
    if ((param_3 == 0x7fffffff) ||
       (iVar4 = (**(code **)(_DAT_ram_3fcb6a44 + 0x88))(param_3,&iStack_4c), iVar4 == 0)) {
      iVar5 = FUN_ram_4202dfc8();
      iVar4 = 0x1d;
      if ((iVar5 == 0) && (iVar4 = FUN_ram_42036c62(param_1), iVar5 = _DAT_ram_3fcb6ba0, iVar4 == 0)
         ) {
        bVar2 = *(byte *)(_DAT_ram_3fcb6ba0 + 0x111);
        *(undefined4 *)(_DAT_ram_3fcb6ba0 + 0x118) = param_5;
        *(undefined4 *)(iVar5 + 0x11c) = param_6;
        *(byte *)(iVar5 + 0x111) = bVar2 & 0xfc | bVar7 & 3;
        *(byte *)(iVar5 + 0x111) = bVar2 & 0xf4 | bVar7 & 3 | (*param_4 != '\0') << 3;
        if (*(char *)(iVar5 + 0xea) == '\0') {
          sStack_40 = *(short *)(param_4 + 2);
          sStack_3e = *(short *)(param_4 + 4);
          local_48[0] = 0;
          local_48[1] = 0;
          local_48[2] = 0;
          local_48[3] = 0;
          local_48[4] = 0;
          local_48[5] = 0;
          local_48[6] = 0;
          cVar3 = *param_4;
          if (sStack_40 == 0 && sStack_3e == 0) {
            if (cVar3 == '\0') {
              sStack_3e = 0xf0;
              sStack_40 = 0xa0;
            }
            else {
              sStack_3e = 0x60;
              sStack_40 = 0x30;
            }
          }
          if (cVar3 == '\0') {
            cStack_3c = (param_4[1] == '\0') + '\x02';
          }
          else {
            cStack_3c = '\0';
            if ((cVar3 == '\x01') && (cStack_3c = '\x04', (param_4[8] & 1U) != 0)) {
              cStack_3c = '\x01';
            }
          }
          bStack_3b = bVar7;
          if (param_2 == (byte *)0x0) {
            param_2 = local_48;
          }
          bStack_3a = *param_2;
          FUN_ram_4039c11e(auStack_39,param_2 + 1,6);
          cStack_33 = param_4[6];
          if (cStack_33 == '\0') {
            cStack_33 = '\a';
          }
          cStack_32 = param_4[7];
          iVar4 = FUN_ram_420332b4(0x2006,&sStack_40,0xf,0,0);
          if (iVar4 != 0) goto LAB_ram_4202e9aa;
        }
        *(undefined1 *)(_DAT_ram_3fcb6ba0 + 0x110) = 1;
        iVar4 = FUN_ram_4202e0a6();
        if (iVar4 == 0) {
          if (param_3 != 0x7fffffff) {
            iVar6 = FUN_ram_403a6810();
            iVar5 = _DAT_ram_3fcb6ba0;
            pbVar1 = (byte *)(_DAT_ram_3fcb6ba0 + 0x111);
            *(int *)(_DAT_ram_3fcb6ba0 + 0x114) = iStack_4c + iVar6;
            *(byte *)(iVar5 + 0x111) = *pbVar1 | 0x10;
            FUN_ram_4202bac4();
          }
          if (*(char *)(_DAT_ram_3fcb6ba0 + 0xea) != '\0') {
            *(undefined1 *)(_DAT_ram_3fcb6ba0 + 0xea) = 0;
          }
        }
        else {
          FUN_ram_4202e0fa(0);
        }
      }
      goto LAB_ram_4202e9aa;
    }
  }
  iVar4 = 3;
LAB_ram_4202e9aa:
  thunk_FUN_ram_4202b7f6();
  return iVar4;
}

