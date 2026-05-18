
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_ram_4208808a(int *param_1,undefined4 param_2)

{
  int iVar1;
  undefined *puVar2;
  uint uVar3;
  code *pcVar4;
  int iVar5;
  int *piVar6;
  byte *pbVar7;
  undefined1 uStack_42;
  undefined1 uStack_41;
  undefined1 auStack_40 [8];
  undefined1 auStack_38 [6];
  undefined1 uStack_32;
  
  uStack_42 = 0;
  uStack_41 = 0;
  if ((param_1 == (int *)0x0) || (iVar5 = *param_1, iVar5 == 0)) {
    FUN_ram_4207a038(1,0x800,1,&DAT_ram_3c0ff068,"phone farther away first.",0xbb0);
    do {
                    /* WARNING: Do nothing block with infinite loop */
    } while( true );
  }
  FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd0d4,param_1,param_2);
  piVar6 = param_1 + 1;
  iVar1 = FUN_ram_4039c0e0(piVar6,&DAT_ram_3c0fab70,6);
  if (iVar1 == 0) {
    FUN_ram_42075b46(param_1,param_2,0x11);
    FUN_ram_4207a038(1,4,3,&DAT_ram_3c1000bc);
  }
  else {
    for (uVar3 = 1; uVar3 <= *(byte *)(*(int *)(gp + -0xb4) + 0x3f6); uVar3 = uVar3 + 1 & 0xffff) {
      if (*(int **)((uVar3 + 0x38) * 4 + iVar5 + 0xc) == param_1) {
        *(ushort *)((int)param_1 + 0x26) = (ushort)uVar3 | 0xc000;
        _DAT_ram_3fcc4170 = (ushort)(1 << (uVar3 & 0x1f)) | _DAT_ram_3fcc4170;
        FUN_ram_420879c4(1,param_1);
        FUN_ram_42078e7e(param_1,auStack_40);
        if ((char)param_1[0x2b] == '\0') {
          puVar2 = &DAT_ram_3c0c4884;
        }
        else if ((char)param_1[0x2b] == '\x01') {
          puVar2 = &DAT_ram_3c0c4888;
        }
        else {
          puVar2 = &DAT_ram_3c0c4880;
        }
        FUN_ram_4207a038(1,4,3,&DAT_ram_3c1000cc,(char)param_1[1],*(undefined1 *)((int)param_1 + 5),
                         *(undefined1 *)((int)param_1 + 6),*(undefined1 *)((int)param_1 + 7),
                         (char)param_1[2],*(undefined1 *)((int)param_1 + 9),
                         *(ushort *)((int)param_1 + 0x26) & 0x3fff,auStack_40,puVar2);
        pbVar7 = (byte *)(gp + 0x34);
        *(byte *)(gp + 0x34) = *(byte *)(gp + 0x34) | 1;
        if (*(byte *)(*(int *)(gp + -0xb4) + 0x3f4) < 2) {
          FUN_ram_4039c11e(auStack_38,piVar6,6);
          uStack_32 = (undefined1)*(undefined2 *)((int)param_1 + 0x26);
          FUN_ram_4208344a(0xe,auStack_38,8);
        }
        if ((*pbVar7 & 2) == 0) {
          uVar3 = param_1[3] & 0xffffffee;
          if (*(char *)(iVar5 + 0xa8) != '\x03') {
            uVar3 = param_1[3] | 1;
          }
          param_1[3] = uVar3;
          if (*(int *)(iVar5 + 0x124) == 0) {
            FUN_ram_4207a038(1,4,4,&DAT_ram_3c0fd0ec);
            *pbVar7 = 0;
            FUN_ram_42075b46(param_1,param_2,0);
          }
          else {
            iVar5 = (**(code **)(_DAT_ram_3fcc4178 + 0x24))
                              (param_1 + 0x4c,piVar6,(int)param_1 + 0x33,(char)param_1[0xc],
                               param_1[0xea],(short)param_1[0xeb],(int)param_1 + 0x2f9,param_2,
                               (int)param_1 + 0x3ae);
            if (iVar5 == 0) {
              return;
            }
            *(undefined1 *)(param_1 + 9) = 1;
            iVar5 = param_1[0x4c];
            pcVar4 = *(code **)(_DAT_ram_3fcc4178 + 0x34);
            *pbVar7 = 0;
            (*pcVar4)(iVar5,&uStack_42,&uStack_41);
            FUN_ram_4207a942(param_1,uStack_42,uStack_41);
          }
          if ((param_1[3] & 0x1000000U) == 0) {
            return;
          }
          param_1[3] = param_1[3] & 0xfeffffff;
          return;
        }
        *pbVar7 = 0;
        break;
      }
    }
    FUN_ram_42075b46(param_1,param_2,0x11);
  }
  FUN_ram_42087eec(param_1);
  return;
}

